import os
import re
import sys
import logging
import glob
import csv
import pprint
from pandas import read_csv, DataFrame

# Personal files #
import parameters                                                                                                                                                                                      

class ConcatenateCSV:

    def __init__(self,path,sample): 
        self.path = path
        self.sample = sample

    def Concatenate(self):
        self.dict_tot = {} 
        self.counter = 0
        if self.sample!='DY' and self.sample!='TT':
            logging.critical('Sample type (TT or DY) must be used to concatenate csv file')
            sys.exit(1)

        for f in glob.glob(os.path.join(self.path,'*.csv')):
            name = f.replace(self.path,'')
            if name.find(self.sample) == -1: # if DY or TT not found in the string
                continue

            logging.debug('File : %s'%(name))

            # Use pandas to get the dict inside the csv file #
            panda_data = read_csv(f)
            dict_from_file = panda_data.to_dict(orient='list')

            # Initialize dict at first elements #
            if self.counter == 0:
                for key in dict_from_file.keys():
                    self.dict_tot[key] = []
            
            # Append full dict #
            for key,val in dict_from_file.items():
                self.dict_tot[key] += val
                entries = len(val)

            self.counter += entries

            logging.debug('\tCurrent number of hyperparameter sets : %d'%(self.counter)) 

        logging.info('Total number of hyperparameter sets in %s sample : %d'%(self.sample,self.counter)) 
        for line in pprint.pformat(self.dict_tot).split('\n'):
            logging.debug(line)

        return self

    def WriteToFile(self):
        # Define name for output file #
        name_csv = os.path.dirname(self.path).split('/')[-2]
        name_csv = re.sub("[-_]\d+[-_]\d+","",name_csv)    

        # Write to file #
        self.path_out = os.path.join(parameters.main_path,'model',name_csv+'_'+self.sample+'.csv')
        invalid_counter = 0
        with open(self.path_out, 'w') as the_file:
            w = csv.writer(the_file)
            # Write keys as header #
            w.writerow(self.dict_tot.keys())
            # Write each test line by line #
            for i in range(0,self.counter): # loop over the elements values of the dict
                test_line = []
                valid_test = True # If valid, can append to file 
                for val in self.dict_tot.values(): # only select the i-th element
                    # check if negative values -> likely an overflow #
                    if not isinstance(val[i],str) and val[i]<0:
                        valid_test = False
                            
                    # Check if string -> acti or opt -> must correct #
                    if isinstance(val[i],str):
                        corr_val = _correct(val[i])
                        test_line.append(corr_val)

                    # Append the number in the line #
                    else:
                        test_line.append(val[i])

                if valid_test:
                    w.writerow(test_line)
                else:
                    invalid_counter += 1
                    logging.debug(test_line)

        logging.info('CSV file saved as %s'%(self.path_out))
        logging.info('Invalid line, total %d/%d'%(invalid_counter,self.counter))

def _correct(obj):
    # Corrects the <function relu at 0x{12}> -> relu
    # Corrects the <class 'keras.optimizers.Adam'> -> Adam
    if obj.startswith('<function'):
        return obj.split(' ')[1]
    elif obj.startswith('<class'):
        new_obj = obj.split(' ')[1].split('.')[2].replace("'>","")
        return new_obj
    else:
        return obj





