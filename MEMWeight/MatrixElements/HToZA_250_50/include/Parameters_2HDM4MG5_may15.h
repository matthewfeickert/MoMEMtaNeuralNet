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
#include <memory> 

#include <momemta/MEParameters.h> 

namespace SLHA 
{
class Reader;}

  namespace HToZA_250_50_2HDM4MG5_may15 
  {

  class Parameters_2HDM4MG5_may15: public momemta::MEParameters
  {

    public:

      Parameters_2HDM4MG5_may15(const SLHA::Reader& card); 

      // *
      // * Cache parameters. This is implementation dependent
      // 
      virtual void cacheParameters(); 
      virtual void cacheCouplings(); 

      virtual void updateParameters(); 
      virtual void updateCouplings(); 

      // Define "zero"
      double zero, ZERO; 
      // Model parameters independent of aS
      double mdl_whc, mdl_Wh3, mdl_Wh2, mdl_Wh1, mdl_WW, mdl_WZ, mdl_WTA,
          mdl_WT, mdl_GUR3x3, mdl_GUR2x2, mdl_GUR1x1, mdl_GLR3x3, mdl_GLR2x2,
          mdl_GLR1x1, mdl_GDR3x3, mdl_GDR2x2, mdl_GDR1x1, mdl_ymtau, mdl_ymt,
          mdl_ymb, aS, mdl_Gf, aEWM1, mdl_mhc, mdl_mh3, mdl_mh2, mdl_mh1,
          mdl_MZ, mdl_MTA, mdl_MT, mdl_MB, mdl_ch2hphm, mdl_ch1hphm, mdl_yh2vv,
          mdl_yh1vv, mdl_ybrHp, mdl_ybrs3, mdl_ybrs2, mdl_ybrs1, mdl_ytrHp,
          mdl_ytrs3, mdl_ytrs2, mdl_ytrs1, mdl_mixh, mdl_lR7, mdl_l3, mdl_l2,
          mdl_cos__mixh, mdl_TH1x1, mdl_sin__mixh, mdl_TH1x2, mdl_TH2x1,
          mdl_TH2x2, mdl_TH3x3, mdl_dum, mdl_lI5, mdl_lI6, mdl_MZ__exp__2,
          mdl_MZ__exp__4, mdl_sqrt__2, mdl_mhc__exp__2, mdl_mh1__exp__2,
          mdl_mh2__exp__2, mdl_mh3__exp__2, mdl_TH1x1__exp__2,
          mdl_TH2x1__exp__2, mdl_TH1x1__exp__4, mdl_TH1x1__exp__3,
          mdl_TH2x1__exp__3, mdl_TH2x1__exp__4, mdl_TH1x2__exp__2,
          mdl_TH2x2__exp__2, mdl_TH1x2__exp__3, mdl_TH2x2__exp__3,
          mdl_TH1x2__exp__4, mdl_TH2x2__exp__4, mdl_TH3x3__exp__2,
          mdl_TH3x3__exp__3, mdl_TH3x3__exp__4, mdl_aEW, mdl_MW, mdl_sqrt__aEW,
          mdl_ee, mdl_MW__exp__2, mdl_sw2, mdl_cw, mdl_sqrt__sw2, mdl_sw,
          mdl_g1, mdl_gw, mdl_vev, mdl_vev__exp__2, mdl_mu2, mdl_ee__exp__2,
          mdl_gAAA, mdl_gAAH, mdl_gAAHH, mdl_l1, mdl_l4, mdl_lR5, mdl_lR6,
          mdl_yb, mdl_yt, mdl_ytau, mdl_mu1, mdl_gw__exp__2, mdl_cw__exp__2,
          mdl_sw__exp__2, mdl_g1__exp__2;
      std::complex<double> mdl_GD1x1, mdl_GD1x2, mdl_GD1x3, mdl_GD2x1,
          mdl_GD2x2, mdl_GD2x3, mdl_GD3x1, mdl_GD3x2, mdl_GD3x3, mdl_GL1x1,
          mdl_GL1x2, mdl_GL1x3, mdl_GL2x1, mdl_GL2x2, mdl_GL2x3, mdl_GL3x1,
          mdl_GL3x2, mdl_GL3x3, mdl_GU1x1, mdl_GU1x2, mdl_GU1x3, mdl_GU2x1,
          mdl_GU2x2, mdl_GU2x3, mdl_GU3x1, mdl_GU3x2, mdl_GU3x3, mdl_l7,
          mdl_complexi, mdl_conjg__GD1x1, mdl_I1a11, mdl_conjg__GD2x1,
          mdl_I1a12, mdl_conjg__GD3x1, mdl_I1a13, mdl_conjg__GD1x2, mdl_I1a21,
          mdl_conjg__GD2x2, mdl_I1a22, mdl_conjg__GD3x2, mdl_I1a23,
          mdl_conjg__GD1x3, mdl_I1a31, mdl_conjg__GD2x3, mdl_I1a32,
          mdl_conjg__GD3x3, mdl_I1a33, mdl_I2a11, mdl_I2a12, mdl_I2a13,
          mdl_I2a21, mdl_I2a22, mdl_I2a23, mdl_I2a31, mdl_I2a32, mdl_I2a33,
          mdl_conjg__GU1x1, mdl_I3a11, mdl_conjg__GU2x1, mdl_I3a12,
          mdl_conjg__GU3x1, mdl_I3a13, mdl_conjg__GU1x2, mdl_I3a21,
          mdl_conjg__GU2x2, mdl_I3a22, mdl_conjg__GU3x2, mdl_I3a23,
          mdl_conjg__GU1x3, mdl_I3a31, mdl_conjg__GU2x3, mdl_I3a32,
          mdl_conjg__GU3x3, mdl_I3a33, mdl_I4a11, mdl_I4a12, mdl_I4a13,
          mdl_I4a21, mdl_I4a22, mdl_I4a23, mdl_I4a31, mdl_I4a32, mdl_I4a33,
          mdl_conjg__GL1x1, mdl_conjg__GL1x2, mdl_conjg__GL1x3,
          mdl_conjg__GL2x1, mdl_conjg__GL2x2, mdl_conjg__GL2x3,
          mdl_conjg__GL3x1, mdl_conjg__GL3x2, mdl_conjg__GL3x3, mdl_l5, mdl_l6,
          mdl_mu3, mdl_I5a33, mdl_I6a33, mdl_I7a33, mdl_I8a33;
      // Model parameters dependent on aS
      double mdl_sqrt__aS, G, mdl_G__exp__2, mdl_gGGA, mdl_gGGH, mdl_gGGHH; 
      // Model couplings independent of aS
      std::complex<double> GC_164, GC_165, GC_167, GC_168, GC_182, GC_183,
          GC_185, GC_186, GC_218, GC_219, GC_221, GC_222, GC_226, GC_236,
          GC_237, GC_239, GC_240, GC_338, GC_339, GC_341, GC_342, GC_347,
          GC_348, GC_350, GC_351, GC_363, GC_401, GC_402, GC_404, GC_405,
          GC_410, GC_411, GC_413, GC_414, GC_29, GC_30, GC_89, GC_90, GC_266;
      // Model couplings dependent on aS

  }; 

  }

