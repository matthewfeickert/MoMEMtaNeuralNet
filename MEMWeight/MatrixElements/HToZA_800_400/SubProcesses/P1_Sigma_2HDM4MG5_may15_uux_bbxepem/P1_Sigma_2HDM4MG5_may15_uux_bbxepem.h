// 
// *  This file was automatically generated by MoMEMta-MaGMEE,
// *  A MadGraph Matrix Element Exporter plugin for MoMEMta.
// *
// *  It is subject to MoMEMta-MaGMEE's license and copyright:
// *
// *  Copyright (C) 2016  Universite catholique de Louvain (UCL), Belgium
// *
// *  This program is free software: you can redistribute it and/or modify
// *  it under the terms of the GNU General Public License as published by
// *  the Free Software Foundation, either version 3 of the License, or
// *  (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// *  GNU General Public License for more details.
// *
// *  You should have received a copy of the GNU General Public License
// *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
// 

#pragma once

#include <complex> 
#include <vector> 
#include <utility> 
#include <map> 
#include <functional> 

#include <Parameters_2HDM4MG5_may15.h> 
#include <SubProcess.h> 

#include <momemta/MatrixElement.h> 

namespace HToZA_800_400_2HDM4MG5_may15 
{

//==========================================================================
// A class for calculating the matrix elements for
// Process: u u~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > e+ e- WEIGHTED<=2
// Process: u c~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > e+ e- WEIGHTED<=2
// Process: c u~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > e+ e- WEIGHTED<=2
// Process: c c~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > e+ e- WEIGHTED<=2
// Process: d d~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > e+ e- WEIGHTED<=2
// Process: d s~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > e+ e- WEIGHTED<=2
// Process: s d~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > e+ e- WEIGHTED<=2
// Process: s s~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > e+ e- WEIGHTED<=2
// Process: u u~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > mu+ mu- WEIGHTED<=2
// Process: u c~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > mu+ mu- WEIGHTED<=2
// Process: c u~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > mu+ mu- WEIGHTED<=2
// Process: c c~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > mu+ mu- WEIGHTED<=2
// Process: d d~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > mu+ mu- WEIGHTED<=2
// Process: d s~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > mu+ mu- WEIGHTED<=2
// Process: s d~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > mu+ mu- WEIGHTED<=2
// Process: s s~ > h3 z WEIGHTED<=4 / h1 @1
// *   Decay: h3 > b b~ WEIGHTED<=2
// *   Decay: z > mu+ mu- WEIGHTED<=2
//--------------------------------------------------------------------------

class P1_Sigma_2HDM4MG5_may15_uux_bbxepem: public momemta::MatrixElement 
{
  public:

    // Constructor & destructor
    P1_Sigma_2HDM4MG5_may15_uux_bbxepem(const ParameterSet& configuration); 
    virtual ~P1_Sigma_2HDM4MG5_may15_uux_bbxepem() {}; 

    // Calculate flavour-independent parts of cross section.
    virtual momemta::MatrixElement::Result compute(
    const std::pair < std::vector<double> , std::vector<double> >
        &initialMomenta,
    const std::vector < std::pair < int, std::vector<double> > > &finalState); 

    virtual std::shared_ptr < momemta::MEParameters > getParameters() 
    {
      return params; 
    }

    // Make sure all helicity combinations are tried again (forget optimisation
    // consisting of not evaluating helicities which have given a zero result
    // once)
    virtual void resetHelicities(); 

  private:

    // default constructor should be hidden
    P1_Sigma_2HDM4MG5_may15_uux_bbxepem() = delete; 

    // list of helicities combinations
    const int helicities[64][6] = {{-1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1,
        -1, 1}, {-1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, 1, 1}, {-1, -1, -1,
        1, -1, -1}, {-1, -1, -1, 1, -1, 1}, {-1, -1, -1, 1, 1, -1}, {-1, -1,
        -1, 1, 1, 1}, {-1, -1, 1, -1, -1, -1}, {-1, -1, 1, -1, -1, 1}, {-1, -1,
        1, -1, 1, -1}, {-1, -1, 1, -1, 1, 1}, {-1, -1, 1, 1, -1, -1}, {-1, -1,
        1, 1, -1, 1}, {-1, -1, 1, 1, 1, -1}, {-1, -1, 1, 1, 1, 1}, {-1, 1, -1,
        -1, -1, -1}, {-1, 1, -1, -1, -1, 1}, {-1, 1, -1, -1, 1, -1}, {-1, 1,
        -1, -1, 1, 1}, {-1, 1, -1, 1, -1, -1}, {-1, 1, -1, 1, -1, 1}, {-1, 1,
        -1, 1, 1, -1}, {-1, 1, -1, 1, 1, 1}, {-1, 1, 1, -1, -1, -1}, {-1, 1, 1,
        -1, -1, 1}, {-1, 1, 1, -1, 1, -1}, {-1, 1, 1, -1, 1, 1}, {-1, 1, 1, 1,
        -1, -1}, {-1, 1, 1, 1, -1, 1}, {-1, 1, 1, 1, 1, -1}, {-1, 1, 1, 1, 1,
        1}, {1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, 1,
        -1}, {1, -1, -1, -1, 1, 1}, {1, -1, -1, 1, -1, -1}, {1, -1, -1, 1, -1,
        1}, {1, -1, -1, 1, 1, -1}, {1, -1, -1, 1, 1, 1}, {1, -1, 1, -1, -1,
        -1}, {1, -1, 1, -1, -1, 1}, {1, -1, 1, -1, 1, -1}, {1, -1, 1, -1, 1,
        1}, {1, -1, 1, 1, -1, -1}, {1, -1, 1, 1, -1, 1}, {1, -1, 1, 1, 1, -1},
        {1, -1, 1, 1, 1, 1}, {1, 1, -1, -1, -1, -1}, {1, 1, -1, -1, -1, 1}, {1,
        1, -1, -1, 1, -1}, {1, 1, -1, -1, 1, 1}, {1, 1, -1, 1, -1, -1}, {1, 1,
        -1, 1, -1, 1}, {1, 1, -1, 1, 1, -1}, {1, 1, -1, 1, 1, 1}, {1, 1, 1, -1,
        -1, -1}, {1, 1, 1, -1, -1, 1}, {1, 1, 1, -1, 1, -1}, {1, 1, 1, -1, 1,
        1}, {1, 1, 1, 1, -1, -1}, {1, 1, 1, 1, -1, 1}, {1, 1, 1, 1, 1, -1}, {1,
        1, 1, 1, 1, 1}};

    // Private functions to calculate the matrix element for all subprocesses
    // Wavefunctions
    void calculate_wavefunctions(const int perm[], const int hel[]); 
    std::complex<double> amp[24]; 

    // Matrix elements
    double matrix_1_uux_h3z_no_h1_h3_bbx_z_epem(); 
    double matrix_1_ucx_h3z_no_h1_h3_bbx_z_epem(); 
    double matrix_1_cux_h3z_no_h1_h3_bbx_z_epem(); 
    double matrix_1_ccx_h3z_no_h1_h3_bbx_z_epem(); 
    double matrix_1_ddx_h3z_no_h1_h3_bbx_z_epem(); 
    double matrix_1_dsx_h3z_no_h1_h3_bbx_z_epem(); 
    double matrix_1_sdx_h3z_no_h1_h3_bbx_z_epem(); 
    double matrix_1_ssx_h3z_no_h1_h3_bbx_z_epem(); 
    double matrix_1_uux_h3z_no_h1_h3_bbx_z_mupmum(); 
    double matrix_1_ucx_h3z_no_h1_h3_bbx_z_mupmum(); 
    double matrix_1_cux_h3z_no_h1_h3_bbx_z_mupmum(); 
    double matrix_1_ccx_h3z_no_h1_h3_bbx_z_mupmum(); 
    double matrix_1_ddx_h3z_no_h1_h3_bbx_z_mupmum(); 
    double matrix_1_dsx_h3z_no_h1_h3_bbx_z_mupmum(); 
    double matrix_1_sdx_h3z_no_h1_h3_bbx_z_mupmum(); 
    double matrix_1_ssx_h3z_no_h1_h3_bbx_z_mupmum(); 

    // map of final states
    std::map < std::vector<int> , std::vector < SubProcess <
        P1_Sigma_2HDM4MG5_may15_uux_bbxepem >> > mapFinalStates;

    // Reference to the model parameters instance passed in the constructor
    std::shared_ptr < Parameters_2HDM4MG5_may15 > params; 

    // vector with external particle masses
    std::vector < std::reference_wrapper<double> > mME; 

    // vector with momenta (to be changed each event)
    double * momenta[6]; 
}; 


}

