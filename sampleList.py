samples_path = '/nfs/scratch/fynu/fbury/MoMEMta_output/'

#################### Valid weights #########################
samples_dict = {}

# HToZA #
samples_dict['HToZA'] = [
                            #'valid_weights/HToZATo2L2B_MH-1000_MA-200.root',
                            #'valid_weights/HToZATo2L2B_MH-1000_MA-500.root',
                            #'valid_weights/HToZATo2L2B_MH-1000_MA-50.root',
                            #'valid_weights/HToZATo2L2B_MH-2000_MA-1000.root',
                            #'valid_weights/HToZATo2L2B_MH-200_MA-100.root',
                            #'valid_weights/HToZATo2L2B_MH-200_MA-50.root',
                            #'valid_weights/HToZATo2L2B_MH-250_MA-100.root',
                            #'valid_weights/HToZATo2L2B_MH-250_MA-50.root',
                            #'valid_weights/HToZATo2L2B_MH-3000_MA-2000.root',
                            #'valid_weights/HToZATo2L2B_MH-300_MA-100.root',
                            #'valid_weights/HToZATo2L2B_MH-300_MA-200.root',
                            #'valid_weights/HToZATo2L2B_MH-300_MA-50.root',
                            #'valid_weights/HToZATo2L2B_MH-500_MA-100.root',
                            #'valid_weights/HToZATo2L2B_MH-500_MA-200.root',
                            #'valid_weights/HToZATo2L2B_MH-500_MA-300.root',
                            #'valid_weights/HToZATo2L2B_MH-500_MA-400.root',
                            #'valid_weights/HToZATo2L2B_MH-500_MA-50.root',
                            #'valid_weights/HToZATo2L2B_MH-650_MA-50.root',
                            #'valid_weights/HToZATo2L2B_MH-800_MA-100.root',
                            #'valid_weights/HToZATo2L2B_MH-800_MA-200.root',
                            #'valid_weights/HToZATo2L2B_MH-800_MA-400.root',
                            #'valid_weights/HToZATo2L2B_MH-800_MA-50.root',
                            #'valid_weights/HToZATo2L2B_MH-800_MA-700.root',
                            
                            'signal_weights_valid/HToZATo2L2B_MH-1000_MA-200_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-1000_MA-500_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-1000_MA-50_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-2000_MA-1000_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-200_MA-100_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-200_MA-50_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-250_MA-100_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-250_MA-50_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-3000_MA-2000_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-300_MA-100_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-300_MA-200_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-300_MA-50_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-500_MA-100_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-500_MA-200_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-500_MA-300_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-500_MA-400_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-500_MA-50_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-650_MA-50_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-800_MA-100_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-800_MA-200_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-800_MA-400_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-800_MA-50_signal_weights.root',
                            'signal_weights_valid/HToZATo2L2B_MH-800_MA-700_signal_weights.root',

                        ]
# TT bar #
samples_dict['TT'] = [
                            #'valid_weights/TT_Other.root',
                            #'valid_weights/TTTo2L2Nu_partial.root', # We don't need the full sample 

                            'signal_weights_valid/TT_Other_signal_weights.root',
                            'signal_weights_valid/TTTo2L2Nu_signal_weights.root', # We don't need the full sample 
                      ]

# Drell-Yann #
samples_dict['DY'] = [
                            #'valid_weights/DYJetsToLL_M.root',
                            #'valid_weights/DYToLL_0J.root',
                            #'valid_weights/DYToLL_1J.root',
                            #'valid_weights/DYToLL_2J.root',

                            'signal_weights_valid/DYJetsToLL_M_signal_weights.root',
                            'signal_weights_valid/DYToLL_0J_signal_weights.root',
                            'signal_weights_valid/DYToLL_1J_signal_weights.root',
                            'signal_weights_valid/DYToLL_2J_signal_weights.root',
                      ]


#################### Invalid DY weights #########################
samples_dict['invalid_DY'] = [
                            'invalid_DY_weights_recomputed/DYToLL_1J_invalid_DY.root',
                            'invalid_DY_weights_recomputed/DYToLL_2J_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-250_MA-50_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-3000_MA-2000_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-300_MA-200_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-300_MA-50_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-500_MA-300_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-500_MA-400_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-500_MA-50_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-800_MA-50_invalid_DY.root',
                            'invalid_DY_weights_recomputed/HToZATo2L2B_MH-800_MA-700_invalid_DY.root',
                            'invalid_DY_weights_recomputed/TTTo2L2Nu_invalid_DY.root',
                             ]

#################### Invalid TT weights #########################
samples_dict['invalid_TT'] = [
                            'invalid_TT_weights_recomputed/DYJetsToLL_M_invalid_TT.root',
                            'invalid_TT_weights_recomputed/DYToLL_1J_invalid_TT.root',
                            'invalid_TT_weights_recomputed/DYToLL_2J_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-1000_MA-200_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-1000_MA-500_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-1000_MA-50_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-2000_MA-1000_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-250_MA-50_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-3000_MA-2000_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-300_MA-100_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-300_MA-200_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-300_MA-50_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-500_MA-100_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-500_MA-200_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-500_MA-300_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-500_MA-400_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-500_MA-50_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-650_MA-50_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-800_MA-100_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-800_MA-200_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-800_MA-400_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-800_MA-50_invalid_TT.root',
                            'invalid_TT_weights_recomputed/HToZATo2L2B_MH-800_MA-700_invalid_TT.root',
                            'invalid_TT_weights_recomputed/TT_Other_invalid_TT.root',
                            'invalid_TT_weights_recomputed/TTTo2L2Nu_invalid_TT.root',
                            ]
                                                         
#################### JEC weights #########################
samples_dict['JEC'] = [
                            'JEC/TTTo2L2Nu_JEC.root',
                            'JEC/DYJetsToLL_M_JEC.root',
                            'JEC/DYToLL_0J_JEC.root',
                            'JEC/DYToLL_1J_JEC.root',
                            'JEC/DYToLL_2J_JEC.root',
                            'JEC/TT_Other_JEC.root',
]
