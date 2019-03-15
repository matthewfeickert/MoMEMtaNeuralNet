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

#include <string> 
#include <utility> 
#include <vector> 
#include <map> 

#include <P1_Sigma_2HDM4MG5_may15_uux_bbxepem.h> 
#include <HelAmps_2HDM4MG5_may15.h> 

#include <momemta/ParameterSet.h> 
#include <momemta/SLHAReader.h> 

namespace HToZA_1000_50_2HDM4MG5_may15 
{

//==========================================================================
// Class member functions for calculating the matrix elements for
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

// Initialize process.

P1_Sigma_2HDM4MG5_may15_uux_bbxepem::P1_Sigma_2HDM4MG5_may15_uux_bbxepem(const
    ParameterSet& configuration)
{

  std::string param_card = configuration.get < std::string > ("card"); 
  params.reset(new Parameters_2HDM4MG5_may15(SLHA::Reader(param_card))); 

  // Set external particle masses for this matrix element
  mME.push_back(std::ref(params->ZERO)); 
  mME.push_back(std::ref(params->ZERO)); 
  mME.push_back(std::ref(params->mdl_MB)); 
  mME.push_back(std::ref(params->mdl_MB)); 
  mME.push_back(std::ref(params->ZERO)); 
  mME.push_back(std::ref(params->ZERO)); 

  mapFinalStates[{5, -5, -13, 13}] = 
  {
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_uux_h3z_no_h1_h3_bbx_z_mupmum, 
      true, 
      {
        std::make_pair(2, -2)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ucx_h3z_no_h1_h3_bbx_z_mupmum, 
      true, 
      {
        std::make_pair(2, -4)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_cux_h3z_no_h1_h3_bbx_z_mupmum, 
      true, 
      {
        std::make_pair(4, -2)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ccx_h3z_no_h1_h3_bbx_z_mupmum, 
      true, 
      {
        std::make_pair(4, -4)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ddx_h3z_no_h1_h3_bbx_z_mupmum, 
      true, 
      {
        std::make_pair(1, -1)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_dsx_h3z_no_h1_h3_bbx_z_mupmum, 
      true, 
      {
        std::make_pair(1, -3)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_sdx_h3z_no_h1_h3_bbx_z_mupmum, 
      true, 
      {
        std::make_pair(3, -1)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ssx_h3z_no_h1_h3_bbx_z_mupmum, 
      true, 
      {
        std::make_pair(3, -3)
      }, 
      64, 
      36
    }
  }; 
  mapFinalStates[{5, -5, -11, 11}] = 
  {
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_uux_h3z_no_h1_h3_bbx_z_epem, 
      true, 
      {
        std::make_pair(2, -2)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ucx_h3z_no_h1_h3_bbx_z_epem, 
      true, 
      {
        std::make_pair(2, -4)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_cux_h3z_no_h1_h3_bbx_z_epem, 
      true, 
      {
        std::make_pair(4, -2)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ccx_h3z_no_h1_h3_bbx_z_epem, 
      true, 
      {
        std::make_pair(4, -4)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ddx_h3z_no_h1_h3_bbx_z_epem, 
      true, 
      {
        std::make_pair(1, -1)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_dsx_h3z_no_h1_h3_bbx_z_epem, 
      true, 
      {
        std::make_pair(1, -3)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_sdx_h3z_no_h1_h3_bbx_z_epem, 
      true, 
      {
        std::make_pair(3, -1)
      }, 
      64, 
      36
    }
    , 
    {
      &P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ssx_h3z_no_h1_h3_bbx_z_epem, 
      true, 
      {
        std::make_pair(3, -3)
      }, 
      64, 
      36
    }
  }; 

}

void P1_Sigma_2HDM4MG5_may15_uux_bbxepem::resetHelicities() 
{
  for (auto& finalState: mapFinalStates)
  {
    for (auto& subProcess: finalState.second)
    {
      subProcess.resetHelicities(); 
    }
  }
}


//--------------------------------------------------------------------------
// Evaluate |M|^2, return a map of final states

std::map < std::pair < int, int > , double >
    P1_Sigma_2HDM4MG5_may15_uux_bbxepem::compute(const std::pair <
    std::vector<double> , std::vector<double> > &initialMomenta, const
    std::vector < std::pair < int, std::vector<double> > > &finalState)
{

  // Set initial particle momenta
  momenta[0] = (double * ) (&initialMomenta.first[0]); 
  momenta[1] = (double * ) (&initialMomenta.second[0]); 

  // Suppose final particles are passed in the "correct" order
  std::vector<int> selectedFinalState(6 - 2); 
  for (size_t index = 0; index < (6 - 2); index++ )
  {
    selectedFinalState[index] = finalState[index].first; 
    momenta[index + 2] = (double * ) (&finalState[index].second[0]); 
  }

  // Set the event specific parameters
  params->updateParameters(); 
  params->updateCouplings(); 

  // Initialise result object
  std::map < std::pair < int, int > , double > result; 

  // Define permutation
  int perm[6]; 
  for(int i = 0; i < 6; i++ )
  {
    perm[i] = i; 
  }

  for(auto &me: mapFinalStates[selectedFinalState])
  {

    double me_sum = 0; 
    double me_mirror_sum = 0; 

    for(int ihel = 0; ihel < 64; ihel++ )
    {

      if(me.goodHel[ihel])
      {

        double sum = 0.; 
        calculate_wavefunctions(perm, helicities[ihel]); 
        double meTemp = me.callback( * this); 
        sum += meTemp; 
        me_sum += meTemp/me.denominator; 

        if(me.hasMirrorProcess)
        {
          perm[0] = 1; 
          perm[1] = 0; 
          // Calculate wavefunctions
          calculate_wavefunctions(perm, helicities[ihel]); 
          // Mirror back
          perm[0] = 0; 
          perm[1] = 1; 
          meTemp = me.callback( * this); 
          sum += meTemp; 
          me_mirror_sum += meTemp/me.denominator; 
        }

        if( !sum)
          me.goodHel[ihel] = false; 
      }
    }

    for (auto const &initialState: me.initialStates)
    {
      result[initialState] = me_sum; 
      if (me.hasMirrorProcess)
        result[std::make_pair(initialState.second, initialState.first)] =
            me_mirror_sum;
    }
  }


  return result; 
}

//==========================================================================
// Private class member functions

//--------------------------------------------------------------------------
// Evaluate |M|^2 for each subprocess

void P1_Sigma_2HDM4MG5_may15_uux_bbxepem::calculate_wavefunctions(const int
    perm[], const int hel[])
{
  // Calculate wavefunctions for all processes
  static std::complex<double> w[26][18]; 

  // Calculate all wavefunctions
  ixxxxx(&momenta[perm[0]][0], mME[0], hel[0], +1, w[0]); 
  oxxxxx(&momenta[perm[1]][0], mME[1], hel[1], -1, w[1]); 
  oxxxxx(&momenta[perm[2]][0], mME[2], hel[2], +1, w[2]); 
  ixxxxx(&momenta[perm[3]][0], mME[3], hel[3], -1, w[3]); 
  FFS1_3_3(w[3], w[2], params->GC_363, params->GC_226, params->mdl_mh3,
      params->mdl_Wh3, w[4]);
  ixxxxx(&momenta[perm[4]][0], mME[4], hel[4], -1, w[5]); 
  oxxxxx(&momenta[perm[5]][0], mME[5], hel[5], +1, w[6]); 
  FFV2_4_3(w[5], w[6], params->GC_29, params->GC_90, params->mdl_MZ,
      params->mdl_WZ, w[7]);
  FFS1_3_3(w[0], w[1], params->GC_401, params->GC_182, params->mdl_mh2,
      params->mdl_Wh2, w[8]);
  FFS1_3_2(w[0], w[4], params->GC_402, params->GC_236, params->ZERO,
      params->ZERO, w[9]);
  FFV2_5_2(w[0], w[7], params->GC_30, params->GC_89, params->ZERO,
      params->ZERO, w[10]);
  FFS1_3_3(w[0], w[1], params->GC_404, params->GC_185, params->mdl_mh2,
      params->mdl_Wh2, w[11]);
  FFS1_3_2(w[0], w[4], params->GC_405, params->GC_239, params->ZERO,
      params->ZERO, w[12]);
  FFS1_3_3(w[0], w[1], params->GC_410, params->GC_183, params->mdl_mh2,
      params->mdl_Wh2, w[13]);
  FFS1_3_2(w[0], w[4], params->GC_411, params->GC_237, params->ZERO,
      params->ZERO, w[14]);
  FFS1_3_3(w[0], w[1], params->GC_413, params->GC_186, params->mdl_mh2,
      params->mdl_Wh2, w[15]);
  FFS1_3_2(w[0], w[4], params->GC_414, params->GC_240, params->ZERO,
      params->ZERO, w[16]);
  FFS1_3_3(w[0], w[1], params->GC_338, params->GC_164, params->mdl_mh2,
      params->mdl_Wh2, w[17]);
  FFS1_3_2(w[0], w[4], params->GC_339, params->GC_218, params->ZERO,
      params->ZERO, w[18]);
  FFV2_3_2(w[0], w[7], params->GC_29, params->GC_89, params->ZERO,
      params->ZERO, w[19]);
  FFS1_3_3(w[0], w[1], params->GC_341, params->GC_167, params->mdl_mh2,
      params->mdl_Wh2, w[20]);
  FFS1_3_2(w[0], w[4], params->GC_342, params->GC_221, params->ZERO,
      params->ZERO, w[21]);
  FFS1_3_3(w[0], w[1], params->GC_347, params->GC_165, params->mdl_mh2,
      params->mdl_Wh2, w[22]);
  FFS1_3_2(w[0], w[4], params->GC_348, params->GC_219, params->ZERO,
      params->ZERO, w[23]);
  FFS1_3_3(w[0], w[1], params->GC_350, params->GC_168, params->mdl_mh2,
      params->mdl_Wh2, w[24]);
  FFS1_3_2(w[0], w[4], params->GC_351, params->GC_222, params->ZERO,
      params->ZERO, w[25]);

  // Calculate all amplitudes
  // Amplitude(s) for diagram number 0
  VSS1_0(w[7], w[8], w[4], params->GC_266, amp[0]); 
  FFV2_5_0(w[9], w[1], w[7], params->GC_30, params->GC_89, amp[1]); 
  FFS1_3_0(w[10], w[1], w[4], params->GC_402, params->GC_236, amp[2]); 
  VSS1_0(w[7], w[11], w[4], params->GC_266, amp[3]); 
  FFV2_5_0(w[12], w[1], w[7], params->GC_30, params->GC_89, amp[4]); 
  FFS1_3_0(w[10], w[1], w[4], params->GC_405, params->GC_239, amp[5]); 
  VSS1_0(w[7], w[13], w[4], params->GC_266, amp[6]); 
  FFV2_5_0(w[14], w[1], w[7], params->GC_30, params->GC_89, amp[7]); 
  FFS1_3_0(w[10], w[1], w[4], params->GC_411, params->GC_237, amp[8]); 
  VSS1_0(w[7], w[15], w[4], params->GC_266, amp[9]); 
  FFV2_5_0(w[16], w[1], w[7], params->GC_30, params->GC_89, amp[10]); 
  FFS1_3_0(w[10], w[1], w[4], params->GC_414, params->GC_240, amp[11]); 
  VSS1_0(w[7], w[17], w[4], params->GC_266, amp[12]); 
  FFV2_3_0(w[18], w[1], w[7], params->GC_29, params->GC_89, amp[13]); 
  FFS1_3_0(w[19], w[1], w[4], params->GC_339, params->GC_218, amp[14]); 
  VSS1_0(w[7], w[20], w[4], params->GC_266, amp[15]); 
  FFV2_3_0(w[21], w[1], w[7], params->GC_29, params->GC_89, amp[16]); 
  FFS1_3_0(w[19], w[1], w[4], params->GC_342, params->GC_221, amp[17]); 
  VSS1_0(w[7], w[22], w[4], params->GC_266, amp[18]); 
  FFV2_3_0(w[23], w[1], w[7], params->GC_29, params->GC_89, amp[19]); 
  FFS1_3_0(w[19], w[1], w[4], params->GC_348, params->GC_219, amp[20]); 
  VSS1_0(w[7], w[24], w[4], params->GC_266, amp[21]); 
  FFV2_3_0(w[25], w[1], w[7], params->GC_29, params->GC_89, amp[22]); 
  FFS1_3_0(w[19], w[1], w[4], params->GC_351, params->GC_222, amp[23]); 

}
double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_uux_h3z_no_h1_h3_bbx_z_epem() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[0] - amp[1] - amp[2]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ucx_h3z_no_h1_h3_bbx_z_epem() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[3] - amp[4] - amp[5]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_cux_h3z_no_h1_h3_bbx_z_epem() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[6] - amp[7] - amp[8]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ccx_h3z_no_h1_h3_bbx_z_epem() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[9] - amp[10] - amp[11]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ddx_h3z_no_h1_h3_bbx_z_epem() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[12] - amp[13] - amp[14]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_dsx_h3z_no_h1_h3_bbx_z_epem() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[15] - amp[16] - amp[17]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_sdx_h3z_no_h1_h3_bbx_z_epem() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[18] - amp[19] - amp[20]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ssx_h3z_no_h1_h3_bbx_z_epem() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[21] - amp[22] - amp[23]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_uux_h3z_no_h1_h3_bbx_z_mupmum() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[0] - amp[1] - amp[2]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ucx_h3z_no_h1_h3_bbx_z_mupmum() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[3] - amp[4] - amp[5]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_cux_h3z_no_h1_h3_bbx_z_mupmum() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[6] - amp[7] - amp[8]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ccx_h3z_no_h1_h3_bbx_z_mupmum() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[9] - amp[10] - amp[11]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ddx_h3z_no_h1_h3_bbx_z_mupmum() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[12] - amp[13] - amp[14]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_dsx_h3z_no_h1_h3_bbx_z_mupmum() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[15] - amp[16] - amp[17]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_sdx_h3z_no_h1_h3_bbx_z_mupmum() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[18] - amp[19] - amp[20]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}

double P1_Sigma_2HDM4MG5_may15_uux_bbxepem::matrix_1_ssx_h3z_no_h1_h3_bbx_z_mupmum() 
{

  static std::complex<double> ztemp; 
  static std::complex<double> jamp[1]; 
  // The color matrix
  static const double denom[1] = {1}; 
  static const double cf[1][1] = {{9}}; 

  // Calculate color flows
  jamp[0] = -amp[21] - amp[22] - amp[23]; 

  // Sum and square the color flows to get the matrix element
  double matrix = 0; 
  for(int i = 0; i < 1; i++ )
  {
    ztemp = 0.; 
    for(int j = 0; j < 1; j++ )
      ztemp = ztemp + cf[i][j] * jamp[j]; 
    matrix = matrix + real(ztemp * conj(jamp[i]))/denom[i]; 
  }

  return matrix; 
}



}

// Register matrix element with MoMEMta
#include <momemta/MatrixElementFactory.h> 
REGISTER_MATRIX_ELEMENT("HToZA_1000_50_2HDM4MG5_may15_P1_Sigma_2HDM4MG5_may15_uux_bbxepem", HToZA_1000_50_2HDM4MG5_may15::P1_Sigma_2HDM4MG5_may15_uux_bbxepem); 

