#!/bin/bash

path="/nfs/scratch/fynu/asaggio/CMSSW_8_0_30/src/cp3_llbb/ZATools/factories_ZA/skimmed_for_Florian_2019_all207signals/slurm/output/*.root"
model="BestModel"

for file in $path; do
    sbatch submit.sh $model $file
done
