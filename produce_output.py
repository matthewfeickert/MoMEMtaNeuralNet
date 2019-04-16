import os
import copy
import logging
import numpy as np
import pandas as pd
from root_numpy import array2root

from NeuralNet import HyperModel
from import_tree import Tree2Pandas
import parameters


class ProduceOutput:
    def __init__(self,model):
        self.model = model              # Model of the NeuralNet
        #self.dtype_base = dtype_base    # dtype for array2root

    def OutputFromTraining(self,data,path_output):
        """
            Get the output of the model from the test set
            This is data separated from the training
        """
        inputs = data[parameters.inputs].values
        output = np.empty((inputs.shape[0],0))
        dtype = []
        
        # Get Model Output #

        try:
            instance = HyperModel(self.model,'DY')
            out_DY = np.power(10,-instance.HyperRestore(inputs))
            output = np.c_[output,out_DY]
            dtype.append(('output_DY','float64'))
        except Exception as e:
            logging.warning('Could not find the DY model due to "%s"'%e)
        try:
            instance = HyperModel(self.model,'TT')
            out_TT = np.power(10,-instance.HyperRestore(inputs))
            output = np.c_[output,out_TT]
            dtype.append(('output_TT','float64'))
        except Exception as e:
            logging.warning('Could not find the TT model due to "%s"'%e)
        try:
            instance = HyperModel(self.model,'HToZA')
            out_HToZA = np.power(10,-instance.HyperRestore(inputs))
            output = np.c_[output,out_HToZA]
            dtype.append(('output_HToZA','float64'))
        except Exception as e:
            logging.warning('Could not find the HToZA model due to "%s"'%e)

        # From numpy output array to df #
        output.dtype = dtype
        output_df = pd.DataFrame(output)

        # Make full df #
        full_df = pd.concat([data,output_df],axis=1)

        # Get the unique tags as a list #
        tag_list = lsit(full_df['tag'].unique())

        # Loop over tags #
        for tag in tag_list:
            tag_df = full_df.loc[new_df['tag']==tag] # We select the rows corresponding to this tag

            # From df to numpy array with dtype #
            tag_output = tag_df.to_records(index=False)
            tag_output_name = os.path.join(path_output,tag+'.root')

            # Save as root file #
            array2root(tag_output,tag_output_name,mode='recreate')
            logging.info('Output saved as : '+tag_output_name)
         

    def OutputNewData(self,input_dir,list_sample,path_output,cut):
        """
            Given a model, produce the output 
            The Network has never seen this data !
        """
        # Loop over datasets #
        for f in list_sample: 
            name = os.path.basename(f)
            full_path = os.path.join(input_dir,f)
            logging.info('\tLooking at %s'%name)

            # Get the data #
            variables = parameters.inputs+parameters.outputs+parameters.other_variables
            
            data, weight = Tree2Numpy(input_file=full_path,variables=variables,weight=parameters.weights[0],reweight_to_cross_section=True,cut=cut)
            if data.shape[0]==0:
                continue # Avoids empty trees
           
            # Split and Pre-process #
            NIn = len(parameters.inputs)
            NOut = len(parameters.outputs)
            
            inputs = data[:,:NIn]
            outputs = data[:,NIn:NIn+NOut]
            other = np.c_[data[:,NIn+NOut:],weight]

            # Concatenate full_out #
            full_out = np.c_[inputs,outputs,other]
            dtype = copy.deepcopy(self.dtype_base)

            # Get Model output #
            try:
                instance = HyperModel(self.model,'DY')
                output_DY = np.power(10,-instance.HyperRestore(inputs))
                full_out = np.c_[full_out,output_DY]
                dtype.append(('output_DY','float64'))
            except Exception as e:
                logging.warning('Could not find the DY model due to "%s"'%e)
            try:
                instance = HyperModel(self.model,'TT')
                output_TT = np.power(10,-instance.HyperRestore(inputs))
                full_out = np.c_[full_out,output_TT]
                dtype.append(('output_TT','float64'))
            except Exception as e:
                logging.warning('Could not find the TT model due to "%s"'%e)
            try:
                instance = HyperModel(self.model,'HToZA')
                output_HToZA = np.power(10,-instance.HyperRestore(inputs))
                full_out = np.c_[full_out,output_HToZA]
                dtype.append(('output_HToZA','float64'))
            except Exception as e:
                logging.warning('Could not find the HToZA model due to "%s"'%e)


            # Save to Root file # 
            full_out.dtype = dtype
            output_name = os.path.join(path_output,name)
            array2root(full_out,output_name,mode='recreate')
            logging.info('Output saved as : '+output_name)




        


   
    







