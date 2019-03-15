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

#include <Parameters_2HDM4MG5_may15.h> 

#include <momemta/SLHAReader.h> 

namespace HToZA_250_50_2HDM4MG5_may15 
{

using namespace std; 

// Constructor
Parameters_2HDM4MG5_may15::Parameters_2HDM4MG5_may15(const SLHA::Reader& card) 
{
// Prepare a vector for indices (for reading indexed entries)
vector<int> indices(2, 0); 

m_card_parameters["mdl_whc"] = card.get_block_entry("decay", 37, 1.000000e+00); 
m_card_parameters["mdl_Wh3"] = card.get_block_entry("decay", 36, 1.000000e+00); 
m_card_parameters["mdl_Wh2"] = card.get_block_entry("decay", 35, 1.000000e+00); 
m_card_parameters["mdl_Wh1"] = card.get_block_entry("decay", 25, 1.000000e+00); 
m_card_parameters["mdl_WW"] = card.get_block_entry("decay", 24, 2.085000e+00); 
m_card_parameters["mdl_WZ"] = card.get_block_entry("decay", 23, 2.495200e+00); 
m_card_parameters["mdl_WTA"] = card.get_block_entry("decay", 15, 0.000000e+00); 
m_card_parameters["mdl_WT"] = card.get_block_entry("decay", 6, 1.508336e+00); 
indices[0] = 3; 
indices[1] = 3; 
m_card_parameters["mdl_GUR3x3"] = card.get_block_entry("yukawagur", indices,
    1.000000e+00);
indices[0] = 2; 
indices[1] = 2; 
m_card_parameters["mdl_GUR2x2"] = card.get_block_entry("yukawagur", indices,
    1.000000e+00);
indices[0] = 1; 
indices[1] = 1; 
m_card_parameters["mdl_GUR1x1"] = card.get_block_entry("yukawagur", indices,
    1.000000e+00);
indices[0] = 3; 
indices[1] = 3; 
m_card_parameters["mdl_GLR3x3"] = card.get_block_entry("yukawaglr", indices,
    1.000000e+00);
indices[0] = 2; 
indices[1] = 2; 
m_card_parameters["mdl_GLR2x2"] = card.get_block_entry("yukawaglr", indices,
    1.000000e+00);
indices[0] = 1; 
indices[1] = 1; 
m_card_parameters["mdl_GLR1x1"] = card.get_block_entry("yukawaglr", indices,
    1.000000e+00);
indices[0] = 3; 
indices[1] = 3; 
m_card_parameters["mdl_GDR3x3"] = card.get_block_entry("yukawagdr", indices,
    1.000000e+00);
indices[0] = 2; 
indices[1] = 2; 
m_card_parameters["mdl_GDR2x2"] = card.get_block_entry("yukawagdr", indices,
    1.000000e+00);
indices[0] = 1; 
indices[1] = 1; 
m_card_parameters["mdl_GDR1x1"] = card.get_block_entry("yukawagdr", indices,
    1.000000e+00);
m_card_parameters["mdl_ymtau"] = card.get_block_entry("yukawa", 15,
    1.777000e+00);
m_card_parameters["mdl_ymt"] = card.get_block_entry("yukawa", 6, 1.720000e+02); 
m_card_parameters["mdl_ymb"] = card.get_block_entry("yukawa", 5, 4.700000e+00); 
m_card_parameters["aS"] = card.get_block_entry("sminputs", 3, 1.180000e-01); 
m_card_parameters["mdl_Gf"] = card.get_block_entry("sminputs", 2,
    1.166390e-05);
m_card_parameters["aEWM1"] = card.get_block_entry("sminputs", 1, 1.279000e+02); 
m_card_parameters["mdl_mhc"] = card.get_block_entry("mass", 37, 1.500000e+02); 
m_card_parameters["mdl_mh3"] = card.get_block_entry("mass", 36, 5.000000e+01); 
m_card_parameters["mdl_mh2"] = card.get_block_entry("mass", 35, 2.500000e+02); 
m_card_parameters["mdl_mh1"] = card.get_block_entry("mass", 25, 1.200000e+02); 
m_card_parameters["mdl_MZ"] = card.get_block_entry("mass", 23, 9.118760e+01); 
m_card_parameters["mdl_MTA"] = card.get_block_entry("mass", 15, 1.776840e+00); 
m_card_parameters["mdl_MT"] = card.get_block_entry("mass", 6, 1.720000e+02); 
m_card_parameters["mdl_MB"] = card.get_block_entry("mass", 5, 4.700000e+00); 
m_card_parameters["mdl_ch2hphm"] = card.get_block_entry("loop", 13,
    1.000000e+00);
m_card_parameters["mdl_ch1hphm"] = card.get_block_entry("loop", 12,
    1.000000e+00);
m_card_parameters["mdl_yh2vv"] = card.get_block_entry("loop", 11,
    1.000000e-04);
m_card_parameters["mdl_yh1vv"] = card.get_block_entry("loop", 10,
    1.000000e+00);
m_card_parameters["mdl_ybrHp"] = card.get_block_entry("loop", 9, 1.000000e+00); 
m_card_parameters["mdl_ybrs3"] = card.get_block_entry("loop", 8, 1.000000e+00); 
m_card_parameters["mdl_ybrs2"] = card.get_block_entry("loop", 7, 1.000000e+00); 
m_card_parameters["mdl_ybrs1"] = card.get_block_entry("loop", 6, 1.000000e+00); 
m_card_parameters["mdl_ytrHp"] = card.get_block_entry("loop", 5, 1.000000e+00); 
m_card_parameters["mdl_ytrs3"] = card.get_block_entry("loop", 4, 1.000000e+00); 
m_card_parameters["mdl_ytrs2"] = card.get_block_entry("loop", 3, 1.000000e+00); 
m_card_parameters["mdl_ytrs1"] = card.get_block_entry("loop", 2, 1.000000e+00); 
m_card_parameters["mdl_mixh"] = card.get_block_entry("higgs", 5, 3.000000e-01); 
m_card_parameters["mdl_lR7"] = card.get_block_entry("higgs", 3, 0.000000e+00); 
m_card_parameters["mdl_l3"] = card.get_block_entry("higgs", 2, 1.000000e+00); 
m_card_parameters["mdl_l2"] = card.get_block_entry("higgs", 1, 5.000000e-01); 

this->cacheParameters(); 
this->cacheCouplings(); 
}

void Parameters_2HDM4MG5_may15::cacheParameters()
{
// Define "zero"
zero = 0; 
ZERO = 0; 
mdl_whc = m_card_parameters["mdl_whc"]; 
mdl_Wh3 = m_card_parameters["mdl_Wh3"]; 
mdl_Wh2 = m_card_parameters["mdl_Wh2"]; 
mdl_Wh1 = m_card_parameters["mdl_Wh1"]; 
mdl_WW = m_card_parameters["mdl_WW"]; 
mdl_WZ = m_card_parameters["mdl_WZ"]; 
mdl_WTA = m_card_parameters["mdl_WTA"]; 
mdl_WT = m_card_parameters["mdl_WT"]; 
mdl_GUR3x3 = m_card_parameters["mdl_GUR3x3"]; 
mdl_GUR2x2 = m_card_parameters["mdl_GUR2x2"]; 
mdl_GUR1x1 = m_card_parameters["mdl_GUR1x1"]; 
mdl_GLR3x3 = m_card_parameters["mdl_GLR3x3"]; 
mdl_GLR2x2 = m_card_parameters["mdl_GLR2x2"]; 
mdl_GLR1x1 = m_card_parameters["mdl_GLR1x1"]; 
mdl_GDR3x3 = m_card_parameters["mdl_GDR3x3"]; 
mdl_GDR2x2 = m_card_parameters["mdl_GDR2x2"]; 
mdl_GDR1x1 = m_card_parameters["mdl_GDR1x1"]; 
mdl_ymtau = m_card_parameters["mdl_ymtau"]; 
mdl_ymt = m_card_parameters["mdl_ymt"]; 
mdl_ymb = m_card_parameters["mdl_ymb"]; 
aS = m_card_parameters["aS"]; 
mdl_Gf = m_card_parameters["mdl_Gf"]; 
aEWM1 = m_card_parameters["aEWM1"]; 
mdl_mhc = m_card_parameters["mdl_mhc"]; 
mdl_mh3 = m_card_parameters["mdl_mh3"]; 
mdl_mh2 = m_card_parameters["mdl_mh2"]; 
mdl_mh1 = m_card_parameters["mdl_mh1"]; 
mdl_MZ = m_card_parameters["mdl_MZ"]; 
mdl_MTA = m_card_parameters["mdl_MTA"]; 
mdl_MT = m_card_parameters["mdl_MT"]; 
mdl_MB = m_card_parameters["mdl_MB"]; 
mdl_ch2hphm = m_card_parameters["mdl_ch2hphm"]; 
mdl_ch1hphm = m_card_parameters["mdl_ch1hphm"]; 
mdl_yh2vv = m_card_parameters["mdl_yh2vv"]; 
mdl_yh1vv = m_card_parameters["mdl_yh1vv"]; 
mdl_ybrHp = m_card_parameters["mdl_ybrHp"]; 
mdl_ybrs3 = m_card_parameters["mdl_ybrs3"]; 
mdl_ybrs2 = m_card_parameters["mdl_ybrs2"]; 
mdl_ybrs1 = m_card_parameters["mdl_ybrs1"]; 
mdl_ytrHp = m_card_parameters["mdl_ytrHp"]; 
mdl_ytrs3 = m_card_parameters["mdl_ytrs3"]; 
mdl_ytrs2 = m_card_parameters["mdl_ytrs2"]; 
mdl_ytrs1 = m_card_parameters["mdl_ytrs1"]; 
mdl_mixh = m_card_parameters["mdl_mixh"]; 
mdl_lR7 = m_card_parameters["mdl_lR7"]; 
mdl_l3 = m_card_parameters["mdl_l3"]; 
mdl_l2 = m_card_parameters["mdl_l2"]; mdl_cos__mixh = cos(mdl_mixh); 
mdl_TH1x1 = mdl_cos__mixh; 
mdl_sin__mixh = sin(mdl_mixh); 
mdl_TH1x2 = -mdl_sin__mixh; 
mdl_TH2x1 = mdl_sin__mixh; 
mdl_TH2x2 = mdl_cos__mixh; 
mdl_TH3x3 = 1.; 
mdl_dum = 1.; 
mdl_GD1x1 = mdl_GDR1x1; 
mdl_GD1x2 = 0.; 
mdl_GD1x3 = 0.; 
mdl_GD2x1 = 0.; 
mdl_GD2x2 = mdl_GDR2x2; 
mdl_GD2x3 = 0.; 
mdl_GD3x1 = 0.; 
mdl_GD3x2 = 0.; 
mdl_GD3x3 = mdl_GDR3x3; 
mdl_GL1x1 = mdl_GLR1x1; 
mdl_GL1x2 = 0.; 
mdl_GL1x3 = 0.; 
mdl_GL2x1 = 0.; 
mdl_GL2x2 = mdl_GLR2x2; 
mdl_GL2x3 = 0.; 
mdl_GL3x1 = 0.; 
mdl_GL3x2 = 0.; 
mdl_GL3x3 = mdl_GLR3x3; 
mdl_GU1x1 = mdl_GUR1x1; 
mdl_GU1x2 = 0.; 
mdl_GU1x3 = 0.; 
mdl_GU2x1 = 0.; 
mdl_GU2x2 = mdl_GUR2x2; 
mdl_GU2x3 = 0.; 
mdl_GU3x1 = 0.; 
mdl_GU3x2 = 0.; 
mdl_GU3x3 = mdl_GUR3x3; 
mdl_l7 = mdl_lR7; 
mdl_lI5 = 0.; 
mdl_lI6 = 0.; 
mdl_MZ__exp__2 = ((mdl_MZ) * (mdl_MZ)); 
mdl_MZ__exp__4 = ((mdl_MZ) * (mdl_MZ) * (mdl_MZ) * (mdl_MZ)); 
mdl_sqrt__2 = sqrt(2.); 
mdl_mhc__exp__2 = ((mdl_mhc) * (mdl_mhc)); 
mdl_mh1__exp__2 = ((mdl_mh1) * (mdl_mh1)); 
mdl_mh2__exp__2 = ((mdl_mh2) * (mdl_mh2)); 
mdl_mh3__exp__2 = ((mdl_mh3) * (mdl_mh3)); 
mdl_complexi = std::complex<double> (0., 1.); 
mdl_conjg__GD1x1 = conj(mdl_GD1x1); 
mdl_I1a11 = mdl_conjg__GD1x1; 
mdl_conjg__GD2x1 = conj(mdl_GD2x1); 
mdl_I1a12 = mdl_conjg__GD2x1; 
mdl_conjg__GD3x1 = conj(mdl_GD3x1); 
mdl_I1a13 = mdl_conjg__GD3x1; 
mdl_conjg__GD1x2 = conj(mdl_GD1x2); 
mdl_I1a21 = mdl_conjg__GD1x2; 
mdl_conjg__GD2x2 = conj(mdl_GD2x2); 
mdl_I1a22 = mdl_conjg__GD2x2; 
mdl_conjg__GD3x2 = conj(mdl_GD3x2); 
mdl_I1a23 = mdl_conjg__GD3x2; 
mdl_conjg__GD1x3 = conj(mdl_GD1x3); 
mdl_I1a31 = mdl_conjg__GD1x3; 
mdl_conjg__GD2x3 = conj(mdl_GD2x3); 
mdl_I1a32 = mdl_conjg__GD2x3; 
mdl_conjg__GD3x3 = conj(mdl_GD3x3); 
mdl_I1a33 = mdl_conjg__GD3x3; 
mdl_I2a11 = mdl_GU1x1; 
mdl_I2a12 = mdl_GU1x2; 
mdl_I2a13 = mdl_GU1x3; 
mdl_I2a21 = mdl_GU2x1; 
mdl_I2a22 = mdl_GU2x2; 
mdl_I2a23 = mdl_GU2x3; 
mdl_I2a31 = mdl_GU3x1; 
mdl_I2a32 = mdl_GU3x2; 
mdl_I2a33 = mdl_GU3x3; 
mdl_conjg__GU1x1 = conj(mdl_GU1x1); 
mdl_I3a11 = mdl_conjg__GU1x1; 
mdl_conjg__GU2x1 = conj(mdl_GU2x1); 
mdl_I3a12 = mdl_conjg__GU2x1; 
mdl_conjg__GU3x1 = conj(mdl_GU3x1); 
mdl_I3a13 = mdl_conjg__GU3x1; 
mdl_conjg__GU1x2 = conj(mdl_GU1x2); 
mdl_I3a21 = mdl_conjg__GU1x2; 
mdl_conjg__GU2x2 = conj(mdl_GU2x2); 
mdl_I3a22 = mdl_conjg__GU2x2; 
mdl_conjg__GU3x2 = conj(mdl_GU3x2); 
mdl_I3a23 = mdl_conjg__GU3x2; 
mdl_conjg__GU1x3 = conj(mdl_GU1x3); 
mdl_I3a31 = mdl_conjg__GU1x3; 
mdl_conjg__GU2x3 = conj(mdl_GU2x3); 
mdl_I3a32 = mdl_conjg__GU2x3; 
mdl_conjg__GU3x3 = conj(mdl_GU3x3); 
mdl_I3a33 = mdl_conjg__GU3x3; 
mdl_I4a11 = mdl_GD1x1; 
mdl_I4a12 = mdl_GD1x2; 
mdl_I4a13 = mdl_GD1x3; 
mdl_I4a21 = mdl_GD2x1; 
mdl_I4a22 = mdl_GD2x2; 
mdl_I4a23 = mdl_GD2x3; 
mdl_I4a31 = mdl_GD3x1; 
mdl_I4a32 = mdl_GD3x2; 
mdl_I4a33 = mdl_GD3x3; 
mdl_TH1x1__exp__2 = ((mdl_TH1x1) * (mdl_TH1x1)); 
mdl_TH2x1__exp__2 = ((mdl_TH2x1) * (mdl_TH2x1)); 
mdl_TH1x1__exp__4 = ((mdl_TH1x1) * (mdl_TH1x1) * (mdl_TH1x1) * (mdl_TH1x1)); 
mdl_TH1x1__exp__3 = ((mdl_TH1x1) * (mdl_TH1x1) * (mdl_TH1x1)); 
mdl_TH2x1__exp__3 = ((mdl_TH2x1) * (mdl_TH2x1) * (mdl_TH2x1)); 
mdl_TH2x1__exp__4 = ((mdl_TH2x1) * (mdl_TH2x1) * (mdl_TH2x1) * (mdl_TH2x1)); 
mdl_TH1x2__exp__2 = ((mdl_TH1x2) * (mdl_TH1x2)); 
mdl_TH2x2__exp__2 = ((mdl_TH2x2) * (mdl_TH2x2)); 
mdl_TH1x2__exp__3 = ((mdl_TH1x2) * (mdl_TH1x2) * (mdl_TH1x2)); 
mdl_TH2x2__exp__3 = ((mdl_TH2x2) * (mdl_TH2x2) * (mdl_TH2x2)); 
mdl_TH1x2__exp__4 = ((mdl_TH1x2) * (mdl_TH1x2) * (mdl_TH1x2) * (mdl_TH1x2)); 
mdl_TH2x2__exp__4 = ((mdl_TH2x2) * (mdl_TH2x2) * (mdl_TH2x2) * (mdl_TH2x2)); 
mdl_TH3x3__exp__2 = ((mdl_TH3x3) * (mdl_TH3x3)); 
mdl_TH3x3__exp__3 = ((mdl_TH3x3) * (mdl_TH3x3) * (mdl_TH3x3)); 
mdl_TH3x3__exp__4 = ((mdl_TH3x3) * (mdl_TH3x3) * (mdl_TH3x3) * (mdl_TH3x3)); 
mdl_conjg__GL1x1 = conj(mdl_GL1x1); 
mdl_conjg__GL1x2 = conj(mdl_GL1x2); 
mdl_conjg__GL1x3 = conj(mdl_GL1x3); 
mdl_conjg__GL2x1 = conj(mdl_GL2x1); 
mdl_conjg__GL2x2 = conj(mdl_GL2x2); 
mdl_conjg__GL2x3 = conj(mdl_GL2x3); 
mdl_conjg__GL3x1 = conj(mdl_GL3x1); 
mdl_conjg__GL3x2 = conj(mdl_GL3x2); 
mdl_conjg__GL3x3 = conj(mdl_GL3x3); 
mdl_aEW = 1./aEWM1; 
mdl_MW = sqrt(mdl_MZ__exp__2/2. + sqrt(mdl_MZ__exp__4/4. - (mdl_aEW * M_PI *
    mdl_MZ__exp__2)/(mdl_Gf * mdl_sqrt__2)));
mdl_sqrt__aEW = sqrt(mdl_aEW); 
mdl_ee = 2. * mdl_sqrt__aEW * sqrt(M_PI); 
mdl_MW__exp__2 = ((mdl_MW) * (mdl_MW)); 
mdl_sw2 = 1. - mdl_MW__exp__2/mdl_MZ__exp__2; 
mdl_cw = sqrt(1. - mdl_sw2); 
mdl_sqrt__sw2 = sqrt(mdl_sw2); 
mdl_sw = mdl_sqrt__sw2; 
mdl_g1 = mdl_ee/mdl_cw; 
mdl_gw = mdl_ee/mdl_sw; 
mdl_vev = (2. * mdl_MW * mdl_sw)/mdl_ee; 
mdl_vev__exp__2 = ((mdl_vev) * (mdl_vev)); 
mdl_mu2 = mdl_mhc__exp__2 - (mdl_l3 * mdl_vev__exp__2)/2.; 
mdl_ee__exp__2 = ((mdl_ee) * (mdl_ee)); 
mdl_gAAA = -mdl_ee__exp__2/(8. * ((M_PI) * (M_PI)) * mdl_vev); 
mdl_gAAH = -mdl_ee__exp__2/(4. * ((M_PI) * (M_PI)) * mdl_vev); 
mdl_gAAHH = -mdl_ee__exp__2/(4. * ((M_PI) * (M_PI)) * mdl_vev); 
mdl_l1 = -(-(mdl_mh1__exp__2 * ((mdl_cos__mixh) * (mdl_cos__mixh))) -
    mdl_mh2__exp__2 * ((mdl_sin__mixh) * (mdl_sin__mixh)))/(2. *
    mdl_vev__exp__2);
mdl_l4 = (2. * mdl_mh1__exp__2 + 2. * mdl_mh2__exp__2 + 4. * mdl_mh3__exp__2 -
    8. * mdl_mhc__exp__2 + 2. * (-mdl_mh1__exp__2 + mdl_mh2__exp__2) * cos(2. *
    mdl_mixh))/(4. * mdl_vev__exp__2);
mdl_lR5 = (2. * (mdl_mh1__exp__2 + mdl_mh2__exp__2 - 2. * mdl_mh3__exp__2) - 2.
    * (mdl_mh1 - mdl_mh2) * (mdl_mh1 + mdl_mh2) * cos(2. * mdl_mixh))/(8. *
    mdl_vev__exp__2);
mdl_lR6 = -(((-mdl_mh1__exp__2 + mdl_mh2__exp__2) * mdl_cos__mixh *
    mdl_sin__mixh)/mdl_vev__exp__2);
mdl_yb = (mdl_ymb * mdl_sqrt__2)/mdl_vev; 
mdl_yt = (mdl_ymt * mdl_sqrt__2)/mdl_vev; 
mdl_ytau = (mdl_ymtau * mdl_sqrt__2)/mdl_vev; 
mdl_mu1 = -(mdl_l1 * mdl_vev__exp__2); 
mdl_l5 = mdl_complexi * mdl_lI5 + mdl_lR5; 
mdl_l6 = mdl_complexi * mdl_lI6 + mdl_lR6; 
mdl_mu3 = -(mdl_l6 * mdl_vev__exp__2)/2.; 
mdl_I5a33 = mdl_yb; 
mdl_I6a33 = mdl_yt; 
mdl_I7a33 = mdl_yt; 
mdl_I8a33 = mdl_yb; 
mdl_gw__exp__2 = ((mdl_gw) * (mdl_gw)); 
mdl_cw__exp__2 = ((mdl_cw) * (mdl_cw)); 
mdl_sw__exp__2 = ((mdl_sw) * (mdl_sw)); 
mdl_g1__exp__2 = ((mdl_g1) * (mdl_g1)); 
}

void Parameters_2HDM4MG5_may15::cacheCouplings()
{
GC_164 = (mdl_complexi * mdl_GD1x1 * mdl_TH2x2)/mdl_sqrt__2; 
GC_165 = (mdl_complexi * mdl_GD1x2 * mdl_TH2x2)/mdl_sqrt__2; 
GC_167 = (mdl_complexi * mdl_GD2x1 * mdl_TH2x2)/mdl_sqrt__2; 
GC_168 = (mdl_complexi * mdl_GD2x2 * mdl_TH2x2)/mdl_sqrt__2; 
GC_182 = (mdl_complexi * mdl_GU1x1 * mdl_TH2x2)/mdl_sqrt__2; 
GC_183 = (mdl_complexi * mdl_GU1x2 * mdl_TH2x2)/mdl_sqrt__2; 
GC_185 = (mdl_complexi * mdl_GU2x1 * mdl_TH2x2)/mdl_sqrt__2; 
GC_186 = (mdl_complexi * mdl_GU2x2 * mdl_TH2x2)/mdl_sqrt__2; 
GC_218 = (mdl_GD1x1 * mdl_TH3x3)/mdl_sqrt__2; 
GC_219 = (mdl_GD1x2 * mdl_TH3x3)/mdl_sqrt__2; 
GC_221 = (mdl_GD2x1 * mdl_TH3x3)/mdl_sqrt__2; 
GC_222 = (mdl_GD2x2 * mdl_TH3x3)/mdl_sqrt__2; 
GC_226 = (mdl_GD3x3 * mdl_TH3x3)/mdl_sqrt__2; 
GC_236 = -((mdl_GU1x1 * mdl_TH3x3)/mdl_sqrt__2); 
GC_237 = -((mdl_GU1x2 * mdl_TH3x3)/mdl_sqrt__2); 
GC_239 = -((mdl_GU2x1 * mdl_TH3x3)/mdl_sqrt__2); 
GC_240 = -((mdl_GU2x2 * mdl_TH3x3)/mdl_sqrt__2); 
GC_338 = (mdl_complexi * mdl_TH2x2 * mdl_conjg__GD1x1)/mdl_sqrt__2; 
GC_339 = -((mdl_TH3x3 * mdl_conjg__GD1x1)/mdl_sqrt__2); 
GC_341 = (mdl_complexi * mdl_TH2x2 * mdl_conjg__GD1x2)/mdl_sqrt__2; 
GC_342 = -((mdl_TH3x3 * mdl_conjg__GD1x2)/mdl_sqrt__2); 
GC_347 = (mdl_complexi * mdl_TH2x2 * mdl_conjg__GD2x1)/mdl_sqrt__2; 
GC_348 = -((mdl_TH3x3 * mdl_conjg__GD2x1)/mdl_sqrt__2); 
GC_350 = (mdl_complexi * mdl_TH2x2 * mdl_conjg__GD2x2)/mdl_sqrt__2; 
GC_351 = -((mdl_TH3x3 * mdl_conjg__GD2x2)/mdl_sqrt__2); 
GC_363 = -((mdl_TH3x3 * mdl_conjg__GD3x3)/mdl_sqrt__2); 
GC_401 = (mdl_complexi * mdl_TH2x2 * mdl_conjg__GU1x1)/mdl_sqrt__2; 
GC_402 = (mdl_TH3x3 * mdl_conjg__GU1x1)/mdl_sqrt__2; 
GC_404 = (mdl_complexi * mdl_TH2x2 * mdl_conjg__GU1x2)/mdl_sqrt__2; 
GC_405 = (mdl_TH3x3 * mdl_conjg__GU1x2)/mdl_sqrt__2; 
GC_410 = (mdl_complexi * mdl_TH2x2 * mdl_conjg__GU2x1)/mdl_sqrt__2; 
GC_411 = (mdl_TH3x3 * mdl_conjg__GU2x1)/mdl_sqrt__2; 
GC_413 = (mdl_complexi * mdl_TH2x2 * mdl_conjg__GU2x2)/mdl_sqrt__2; 
GC_414 = (mdl_TH3x3 * mdl_conjg__GU2x2)/mdl_sqrt__2; 
GC_29 = -(mdl_cw * mdl_complexi * mdl_gw)/2.; 
GC_30 = (mdl_cw * mdl_complexi * mdl_gw)/2.; 
GC_89 = -(mdl_complexi * mdl_g1 * mdl_sw)/6.; 
GC_90 = (mdl_complexi * mdl_g1 * mdl_sw)/2.; 
GC_266 = -(mdl_cw * mdl_gw * mdl_TH2x2 * mdl_TH3x3)/2. - (mdl_g1 * mdl_sw *
    mdl_TH2x2 * mdl_TH3x3)/2.;
}

void Parameters_2HDM4MG5_may15::updateParameters()
{
mdl_sqrt__aS = sqrt(aS); 
G = 2. * mdl_sqrt__aS * sqrt(M_PI); 
mdl_G__exp__2 = ((G) * (G)); 
mdl_gGGA = -mdl_G__exp__2/(8. * ((M_PI) * (M_PI)) * mdl_vev); 
mdl_gGGH = -mdl_G__exp__2/(8. * ((M_PI) * (M_PI)) * mdl_vev); 
mdl_gGGHH = -mdl_G__exp__2/(8. * ((M_PI) * (M_PI)) * mdl_vev); 
}

void Parameters_2HDM4MG5_may15::updateCouplings()
{

}

}

