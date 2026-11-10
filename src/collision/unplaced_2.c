#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_675420(__int64* result, __int64);
__int64 GameRoutine_14a0820(_QWORD*);
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 physx_PxGeometryQuery_computePenetration(float*, __int64, int*, int*,
                                                 int*, int*, __int64);
extern _UNKNOWN* GameData_212c840;
extern __int64 (*GameData_1f904e8[])();
extern __int64 (*collision_anonymous_CastFilter_vtable[])();
extern __int64* GameData_212c838;
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void collision_6725f0(PSEUDO_X8 x8_,
                                                 float32x4_t* result,
                                                 float32x4_t* a2, __int64 a3,
                                                 float a5);
__int64 collision_672de0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         _QWORD* a5, __int64 a6);

__attribute__((swiftcall)) void collision_6725f0(PSEUDO_X8 x8_,
                                                 float32x4_t* result,
                                                 float32x4_t* a2, __int64 a3,
                                                 float a5)
{

#pragma clang fp contract(off)
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  float32x4_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t* v10;
  float32x4_t v11;
  float32x4_t v12;
  unsigned __int8 explicit;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  float32x4_t v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  int v35;
  int v36;
  float32x4_t v37;
  __int128 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int128 v43;
  __int64 v44;
  __int64 v45;
  int8x16_t v46;
  long double v47;
  struct {
    unsigned __int64 v48;
    __int64 v49;
  } v48_;
  int v50;
  __int16 v51;
  struct {
    _QWORD v52[3];
    unsigned __int32 v53;
  } v52_;
  _DWORD v54[3];
  struct {
    __int64 (**v55)();
    int v56;
    __int16 v57;
    char gap142_[2];
    __int64 v58;
    __int64 v59;
    __int64 v60;
    int v61;
    char gap172_[4];
    __int64 v62;
    __int64 v63;
    char v64;
    char gap193_[7];
    int* v65;
    __int64 v66;
  } v55_;
  struct {
    int v67;
    __int16 v68;
    char gap222_[2];
    __int64 v69;
    __int64 v70;
    __int64 v71;
    int v72;
    char gap252_[4];
    __int64 v73;
    __int64 v74;
    int v75;
    __int16 v76;
    char gap278_[2];
    __int64 v77;
    __int64 v78;
    __int64 v79;
    int v80;
    char gap308_[4];
    __int64 v81;
    __int64 v82;
    int v83;
    __int16 v84;
    char gap334_[2];
    __int64 v85;
    __int64 v86;
    __int64 v87;
    int v88;
    char gap364_[4];
    __int64 v89;
    __int64 v90;
    int v91;
    __int16 v92;
    char gap390_[2];
    __int64 v93;
    __int64 v94;
    __int64 v95;
    int v96;
    char gap420_[4];
    __int64 v97;
    __int64 v98;
    int v99;
    __int16 v100;
    char gap446_[2];
    __int64 v101;
    __int64 v102;
    __int64 v103;
    int v104;
    char gap476_[4];
    __int64 v105;
    __int64 v106;
    int v107;
    __int16 v108;
    char gap502_[2];
    __int64 v109;
    __int64 v110;
    __int64 v111;
    int v112;
    char gap532_[4];
    __int64 v113;
    __int64 v114;
    int v115;
    __int16 v116;
    char gap558_[2];
    __int64 v117;
    __int64 v118;
    __int64 v119;
    int v120;
    char gap588_[4];
    __int64 v121;
    __int64 v122;
    int v123;
    __int16 v124;
    char gap614_[2];
    __int64 v125;
    __int64 v126;
    __int64 v127;
    int v128;
    char gap644_[4];
    __int64 v129;
    __int64 v130;
    int v131;
    __int16 v132;
    char gap670_[2];
    __int64 v133;
    __int64 v134;
    __int64 v135;
    int v136;
    char gap700_[4];
    __int64 v137;
    __int64 v138;
    int v139;
    __int16 v140;
    char gap726_[2];
    __int64 v141;
    __int64 v142;
    __int64 v143;
    int v144;
    char gap756_[4];
    __int64 v145;
    __int64 v146;
    int v147;
    __int16 v148;
    char gap782_[2];
    __int64 v149;
    __int64 v150;
    __int64 v151;
    int v152;
    char gap812_[4];
    __int64 v153;
    __int64 v154;
    int v155;
    __int16 v156;
    char gap838_[2];
    __int64 v157;
    __int64 v158;
    __int64 v159;
    int v160;
    char gap868_[4];
    __int64 v161;
    __int64 v162;
    int v163;
    __int16 v164;
    char gap894_[2];
    __int64 v165;
    __int64 v166;
    __int64 v167;
    int v168;
    char gap924_[4];
    __int64 v169;
    __int64 v170;
    int v171;
    __int16 v172;
    char gap950_[2];
    __int64 v173;
    __int64 v174;
    __int64 v175;
    int v176;
    char gap980_[4];
    __int64 v177;
    __int64 v178;
    int v179;
    __int16 v180;
    char gap1006_[2];
    __int64 v181;
    __int64 v182;
    __int64 v183;
    int v184;
    char gap1036_[4];
    __int64 v185;
    __int64 v186;
    int v187;
    __int16 v188;
    char gap1062_[2];
    __int64 v189;
    __int64 v190;
    __int64 v191;
    int v192;
    char gap1092_[4];
    __int64 v193;
    __int64 v194;
    int v195;
    __int16 v196;
    char gap1118_[2];
    __int64 v197;
    __int64 v198;
    __int64 v199;
    int v200;
    char gap1148_[4];
    __int64 v201;
    __int64 v202;
    int v203;
    __int16 v204;
    char gap1174_[2];
    __int64 v205;
    __int64 v206;
    __int64 v207;
    int v208;
    char gap1204_[4];
    __int64 v209;
    __int64 v210;
    int v211;
    __int16 v212;
    char gap1230_[2];
    __int64 v213;
    __int64 v214;
    __int64 v215;
    int v216;
    char gap1260_[4];
    __int64 v217;
    __int64 v218;
    int v219;
    __int16 v220;
    char gap1286_[2];
    __int64 v221;
    __int64 v222;
    __int64 v223;
    int v224;
    char gap1316_[4];
    __int64 v225;
    __int64 v226;
    int v227;
    __int16 v228;
    char gap1342_[2];
    __int64 v229;
    __int64 v230;
    __int64 v231;
    int v232;
    char gap1372_[4];
    __int64 v233;
    __int64 v234;
    int v235;
    __int16 v236;
    char gap1398_[2];
    __int64 v237;
    __int64 v238;
    __int64 v239;
    int v240;
    char gap1428_[4];
    __int64 v241;
    __int64 v242;
    int v243;
    __int16 v244;
    char gap1454_[2];
    __int64 v245;
    __int64 v246;
    __int64 v247;
    int v248;
    char gap1484_[4];
    __int64 v249;
    __int64 v250;
    int v251;
    __int16 v252;
    char gap1510_[2];
    __int64 v253;
    __int64 v254;
    __int64 v255;
    int v256;
    char gap1540_[4];
    __int64 v257;
    __int64 v258;
    int v259;
    __int16 v260;
    char gap1566_[2];
    __int64 v261;
    __int64 v262;
    __int64 v263;
    int v264;
    char gap1596_[4];
    __int64 v265;
    __int64 v266;
    int v267;
    __int16 v268;
    char gap1622_[2];
    __int64 v269;
    __int64 v270;
    __int64 v271;
    int v272;
    char gap1652_[4];
    __int64 v273;
    __int64 v274;
    int v275;
    __int16 v276;
    char gap1678_[2];
    __int64 v277;
    __int64 v278;
    __int64 v279;
    int v280;
    char gap1708_[4];
    __int64 v281;
    __int64 v282;
    int v283;
    __int16 v284;
    char gap1734_[2];
    __int64 v285;
    __int64 v286;
    __int64 v287;
    int v288;
    char gap1764_[4];
    __int64 v289;
    __int64 v290;
    int v291;
    __int16 v292;
    char gap1790_[2];
    __int64 v293;
    __int64 v294;
    __int64 v295;
    int v296;
    char gap1820_[4];
    __int64 v297;
    __int64 v298;
    int v299;
    __int16 v300;
    char gap1846_[2];
    __int64 v301;
    __int64 v302;
    __int64 v303;
    int v304;
    char gap1876_[4];
    __int64 v305;
    __int64 v306;
    int v307;
    __int16 v308;
    char gap1902_[2];
    __int64 v309;
    __int64 v310;
    __int64 v311;
    int v312;
    char gap1932_[4];
    __int64 v313;
    __int64 v314;
    int v315;
    __int16 v316;
    char gap1958_[2];
    __int64 v317;
    __int64 v318;
    __int64 v319;
    int v320;
    char gap1988_[4];
    __int64 v321;
    __int64 v322;
  } v67_;
  struct {
    _QWORD v323[2];
    __int16 v324;
  } v323_;
  _QWORD v325[2];

  *(float*)&v54[2] = a5;
  v5 = *a2;
  v9 = *result;
  v323_.v323[0] = 0;
  v323_.v323[1] = 0;
  v7 = vsubq_f32(v5, v9);
  v325[0] = collision_anonymous_CastFilter_vtable;
  v325[1] = a3;
  v55_.v65 = &v67_.v67;
  v55_.v66 = 32;
  v55_.v55 = GameData_1f904e8;
  v52_.v52[2] = LANES128(v9).n128_u64[0];
  v323_.v324 = 7;
  v55_.v61 = 2139095039;
  v67_.v72 = 2139095039;
  v67_.v80 = 2139095039;
  v67_.v88 = 2139095039;
  v67_.v96 = 2139095039;
  v52_.v53 = LANES128(v9).n128_u32[2];
  v8 = vmulq_f32(v7, v7);
  v67_.v104 = 2139095039;
  v67_.v112 = 2139095039;
  v67_.v120 = 2139095039;
  v67_.v128 = 2139095039;
  v67_.v136 = 2139095039;
  v67_.v144 = 2139095039;
  v67_.v152 = 2139095039;
  v67_.v160 = 2139095039;
  v67_.v168 = 2139095039;
  v67_.v176 = 2139095039;
  v67_.v184 = 2139095039;
  v67_.v192 = 2139095039;
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  v67_.v200 = 2139095039;
  v67_.v208 = 2139095039;
  v67_.v216 = 2139095039;
  v67_.v224 = 2139095039;
  v67_.v232 = 2139095039;
  v67_.v240 = 2139095039;
  v67_.v248 = 2139095039;
  v67_.v256 = 2139095039;
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  v67_.v264 = 2139095039;
  v67_.v272 = 2139095039;
  v67_.v280 = 2139095039;
  v67_.v288 = 2139095039;
  v67_.v296 = 2139095039;
  v67_.v304 = 2139095039;
  v67_.v312 = 2139095039;
  v67_.v320 = 2139095039;
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  v55_.v57 = 0;
  v55_.v58 = 0;
  v55_.v59 = 0;
  v55_.v60 = 0;
  v55_.v62 = 0;
  v55_.v63 = 0;
  v55_.v64 = 0;
  v67_.v68 = 0;
  v67_.v69 = 0;
  v67_.v70 = 0;
  v67_.v71 = 0;
  v67_.v73 = 0;
  v67_.v74 = 0;
  v67_.v76 = 0;
  v67_.v77 = 0;
  v67_.v78 = 0;
  v67_.v79 = 0;
  v67_.v81 = 0;
  v67_.v82 = 0;
  v67_.v84 = 0;
  v55_.v56 = -1;
  v67_.v67 = -1;
  v67_.v75 = -1;
  v67_.v83 = -1;
  v67_.v85 = 0;
  v67_.v86 = 0;
  v67_.v87 = 0;
  v67_.v89 = 0;
  v67_.v90 = 0;
  v67_.v91 = -1;
  v67_.v92 = 0;
  v67_.v94 = 0;
  v67_.v95 = 0;
  v67_.v93 = 0;
  v67_.v97 = 0;
  v67_.v98 = 0;
  v67_.v99 = -1;
  v67_.v100 = 0;
  v67_.v101 = 0;
  v67_.v102 = 0;
  v67_.v103 = 0;
  v67_.v105 = 0;
  v67_.v106 = 0;
  v67_.v107 = -1;
  v67_.v108 = 0;
  v67_.v111 = 0;
  v67_.v109 = 0;
  v67_.v110 = 0;
  v67_.v113 = 0;
  v67_.v114 = 0;
  v67_.v115 = -1;
  v67_.v116 = 0;
  v67_.v117 = 0;
  v67_.v118 = 0;
  v67_.v119 = 0;
  v67_.v121 = 0;
  v67_.v122 = 0;
  v67_.v123 = -1;
  v67_.v124 = 0;
  v67_.v125 = 0;
  v67_.v126 = 0;
  v67_.v127 = 0;
  v67_.v130 = 0;
  v67_.v129 = 0;
  v67_.v131 = -1;
  v67_.v132 = 0;
  v67_.v135 = 0;
  v67_.v134 = 0;
  v67_.v133 = 0;
  v67_.v138 = 0;
  v67_.v137 = 0;
  v67_.v139 = -1;
  v67_.v140 = 0;
  v67_.v143 = 0;
  v67_.v142 = 0;
  v67_.v141 = 0;
  v67_.v146 = 0;
  v67_.v145 = 0;
  v67_.v147 = -1;
  v67_.v148 = 0;
  v67_.v151 = 0;
  v67_.v150 = 0;
  v67_.v149 = 0;
  v67_.v154 = 0;
  v67_.v153 = 0;
  v67_.v155 = -1;
  v67_.v156 = 0;
  v67_.v159 = 0;
  v67_.v158 = 0;
  v67_.v157 = 0;
  v67_.v162 = 0;
  v67_.v161 = 0;
  v67_.v163 = -1;
  v67_.v164 = 0;
  v67_.v167 = 0;
  v67_.v166 = 0;
  v67_.v165 = 0;
  v67_.v170 = 0;
  v67_.v169 = 0;
  v67_.v171 = -1;
  v67_.v172 = 0;
  v67_.v175 = 0;
  v67_.v174 = 0;
  v67_.v173 = 0;
  v67_.v178 = 0;
  v67_.v177 = 0;
  v67_.v179 = -1;
  v67_.v180 = 0;
  v67_.v183 = 0;
  v67_.v182 = 0;
  v67_.v181 = 0;
  v67_.v186 = 0;
  v67_.v185 = 0;
  v67_.v187 = -1;
  v67_.v188 = 0;
  v67_.v191 = 0;
  v67_.v190 = 0;
  v67_.v189 = 0;
  v67_.v194 = 0;
  v67_.v193 = 0;
  v67_.v195 = -1;
  v67_.v196 = 0;
  v67_.v199 = 0;
  v67_.v198 = 0;
  v67_.v197 = 0;
  v67_.v202 = 0;
  v67_.v201 = 0;
  v67_.v203 = -1;
  v67_.v204 = 0;
  v67_.v207 = 0;
  v67_.v206 = 0;
  v67_.v205 = 0;
  v67_.v210 = 0;
  v67_.v209 = 0;
  v67_.v211 = -1;
  v67_.v212 = 0;
  v67_.v215 = 0;
  v67_.v214 = 0;
  v67_.v213 = 0;
  v67_.v218 = 0;
  v67_.v217 = 0;
  v67_.v219 = -1;
  v67_.v220 = 0;
  v67_.v223 = 0;
  v67_.v222 = 0;
  v67_.v221 = 0;
  v67_.v226 = 0;
  v67_.v225 = 0;
  v67_.v227 = -1;
  v67_.v228 = 0;
  v67_.v231 = 0;
  v67_.v230 = 0;
  v67_.v229 = 0;
  v67_.v234 = 0;
  v67_.v233 = 0;
  v67_.v235 = -1;
  v67_.v236 = 0;
  v67_.v239 = 0;
  v67_.v238 = 0;
  v67_.v237 = 0;
  v67_.v242 = 0;
  v67_.v241 = 0;
  v67_.v243 = -1;
  v67_.v244 = 0;
  v67_.v247 = 0;
  v67_.v246 = 0;
  v67_.v245 = 0;
  v67_.v250 = 0;
  v67_.v249 = 0;
  v67_.v251 = -1;
  v67_.v252 = 0;
  v67_.v255 = 0;
  v67_.v254 = 0;
  v67_.v253 = 0;
  v67_.v258 = 0;
  v67_.v257 = 0;
  v67_.v259 = -1;
  v67_.v260 = 0;
  v67_.v263 = 0;
  v67_.v262 = 0;
  v67_.v261 = 0;
  v67_.v266 = 0;
  v67_.v265 = 0;
  v67_.v267 = -1;
  v67_.v268 = 0;
  v67_.v271 = 0;
  v67_.v270 = 0;
  v67_.v269 = 0;
  v67_.v274 = 0;
  v67_.v273 = 0;
  v67_.v275 = -1;
  v67_.v276 = 0;
  v67_.v279 = 0;
  v67_.v278 = 0;
  v67_.v277 = 0;
  v67_.v282 = 0;
  v67_.v281 = 0;
  v67_.v283 = -1;
  v67_.v284 = 0;
  v67_.v287 = 0;
  v67_.v286 = 0;
  v67_.v285 = 0;
  v67_.v290 = 0;
  v67_.v289 = 0;
  v67_.v291 = -1;
  v67_.v292 = 0;
  v67_.v295 = 0;
  v67_.v294 = 0;
  v67_.v293 = 0;
  v67_.v298 = 0;
  v67_.v297 = 0;
  v67_.v299 = -1;
  v67_.v300 = 0;
  v67_.v303 = 0;
  v67_.v302 = 0;
  v67_.v301 = 0;
  v67_.v306 = 0;
  v67_.v305 = 0;
  v67_.v307 = -1;
  v67_.v308 = 0;
  v67_.v311 = 0;
  v67_.v310 = 0;
  v67_.v309 = 0;
  v67_.v314 = 0;
  v67_.v313 = 0;
  v67_.v315 = -1;
  v67_.v316 = 0;
  v67_.v319 = 0;
  v67_.v318 = 0;
  v67_.v317 = 0;
  v67_.v322 = 0;
  v67_.v321 = 0;
  v54[0] = 0;
  v52_.v52[0] = 0;
  v52_.v52[1] = 0x3F80000000000000LL;
  if (LANES128(v9).n128_f32[0] <= 0x0.0p+0f) {
    *(_BYTE*)a4 = 0;
    *(_BYTE*)(a4 + 80) = 0;
    {
      result;
      return;
    }
  }
  LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
  v47 = *(long double*)&v9;
  v10 = result;
  v11 = vrsqrteq_f32(v8);
  v12 = vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v8, v11)));
  v46 = vbicq_s8(
      vmulq_f32(v7, vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v8, v12)))),
      vceqzq_f32(v8));
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v14 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 8) = 0;
    *v14 = 0;
    v14[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v14) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v14) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v14) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v14) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v14) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820(v14);
    GameRoutine_2b0();
    __cxa_guard_release(GameData_212c840);
  }
  v15 = *(_QWORD**)(*v14 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v15 + 936LL))(*v15, 0, 0);
  v16 = *v15;
  v48_.v48 = LANES128(v46).n128_u64[0];
  LODWORD(v48_.v49) = LANES128(v46).n128_u32[2];
  v51 = 1027;
  v50 = 1;
  (*(void (**)(__int64, _DWORD*, _QWORD*, unsigned __int64*,
               __int64 (***)(void), __int16*, _QWORD*, _QWORD*, long double,
               double, _QWORD, int*))(*(_QWORD*)v16 + 80LL))(
      v16, v54, v52_.v52, &v48_.v48, &v55_.v55, &v51, v323_.v323, v325, v47,
      0x0.0p+0, 0, &v50);
  if (v55_.v64 == 1) {
    GameRoutine_675420((__int64*)&v48_.v48, (__int64)&v55_.v55);
    v17 = v48_.v48;
    if (v48_.v48 != v48_.v49) {
      v18 = *(unsigned int**)v48_.v48;
      v19 = *(_QWORD*)(*(_QWORD*)v48_.v48 + 48LL);
      v20 = *(_QWORD*)(v19 + 16);
      if (v20 != 0) {
        if ((**(unsigned int (***)(_QWORD))v20)(*(_QWORD*)(v19 + 16)) != 0) {
          if ((**(unsigned int (***)(__int64))v20)(v20) == 1) {
            v23 = *((float*)v18 + 8);
            v24 = *(_QWORD*)(v20 + 24);
            if (v23 <= 0x0.0p+0f) {
              v25 = *v10;
            }
            else {
              LANES128(v25).n128_u64[0] = *((_QWORD*)v18 + 1);
              LODWORD(v21) = v18[4];
              LANES128(v25).n128_u64[1] = v21;
            }
            *(_QWORD*)&v43 = *(_QWORD*)(v18 + 5);
            LODWORD(v22) = v18[7];
            *(_DWORD*)(a4 + 40) = *(_DWORD*)(v20 + 32);
            *((_QWORD*)&v43 + 1) = v22;
            v44 = *((_QWORD*)v18 + 6);
            *(_QWORD*)(a4 + 32) = 0;
            *(_QWORD*)(a4 + 48) = v24;
            *(_QWORD*)(a4 + 56) = 0;
            *(_QWORD*)(a4 + 64) = v44;
            *(float*)(a4 + 72) = v23;
            *(float32x4_t*)a4 = v25;
            *(_OWORD*)(a4 + 16) = v43;
          }
          else {
            *(_DWORD*)(a4 + 40) = 0;
            *(_QWORD*)(a4 + 24) = 0;
            *(_QWORD*)(a4 + 32) = 0;
            *(_QWORD*)(a4 + 8) = 0;
            *(_QWORD*)(a4 + 16) = 0;
            *(_QWORD*)a4 = 0;
            *(_QWORD*)(a4 + 48) = 0;
            *(_QWORD*)(a4 + 56) = 0;
            *(_QWORD*)(a4 + 64) = 0;
            *(_DWORD*)(a4 + 72) = 0;
          }
        }
        else {
          v27 = *(_QWORD*)(v20 + 64);
          v28 = *(_QWORD*)(v20 + 8);
          v29 = *(_DWORD*)(v20 + 72);
          v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 128LL))(v27);
          v33 = *(_QWORD*)(v28 + 72);
          v34 = *((float*)v18 + 8);
          v35 = *(_DWORD*)(v30 + 4LL * *v18) + v29;
          v36 = *(_DWORD*)(v33 + 24LL * v35 + 16);
          if (v34 <= 0x0.0p+0f) {
            v37 = *v10;
          }
          else {
            LANES128(v37).n128_u64[0] = *((_QWORD*)v18 + 1);
            LODWORD(v31) = v18[4];
            LANES128(v37).n128_u64[1] = v31;
          }
          *(_QWORD*)&v38 = *(_QWORD*)(v18 + 5);
          LODWORD(v32) = v18[7];
          *(_DWORD*)(a4 + 32) = v35;
          *(_DWORD*)(a4 + 36) = v36;
          v39 = v33 + 24LL * v35;
          v40 = *(_QWORD*)(v28 + 96);
          v41 = *((_QWORD*)v18 + 6);
          *(float*)(a4 + 72) = v34;
          *((_QWORD*)&v38 + 1) = v32;
          LODWORD(v39) = *(_DWORD*)(v39 + 20);
          *(_QWORD*)(a4 + 64) = v41;
          v42 = *(_QWORD*)(v40 + 40LL * v36 + 24);
          *(_DWORD*)(a4 + 40) = v39;
          *(float32x4_t*)a4 = v37;
          *(_OWORD*)(a4 + 16) = v38;
          *(_QWORD*)(a4 + 48) = v42;
          *(_QWORD*)(a4 + 56) = v28;
        }
        *(_BYTE*)(a4 + 80) = 1;
      }
      else {
        *(_BYTE*)a4 = 0;
        *(_BYTE*)(a4 + 80) = 0;
      }
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v17);
      {
        (float32x4_t*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*v15 + 944LL))(*v15);
        return;
      }
    }
    if (v48_.v48 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v48_.v48);
    }
  }
  *(_BYTE*)a4 = 0;
  *(_BYTE*)(a4 + 80) = 0;
  {
    (float32x4_t*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*v15 + 944LL))(*v15);
    return;
  }
}

__int64 collision_672de0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         _QWORD* a5, __int64 a6)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  __int64* v13;
  _QWORD* v14;
  int* v15;
  int* v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  char v26;
  __int128 v27;
  int v29;
  float v30[4];
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  struct {
    char gap48_[4];
    int v36;
    __int64 v37;
    __int64 v38;
    int v39;
    int v40;
  } v36_;
  int v41;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v13 = GameData_212c838;
  if ((explicit & 1) == 0) {
    v29 = __cxa_guard_acquire(GameData_212c840);
    v13 = GameData_212c838;
    if (v29 != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = 0;
      *v13 = 0;
      v13[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v13) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v13) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v13) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v13) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v13) =
          (_UNKNOWN*)1065353216;
      GameRoutine_14a0820(GameData_212c838);
      GameRoutine_2b0();
      __cxa_guard_release(GameData_212c840);
      v13 = GameData_212c838;
    }
  }
  v14 = *(_QWORD**)(*v13 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v14 + 936LL))(*v14, 0, 0);
  v15 = (int*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  v16 = (int*)(*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3);
  v17 = *(_DWORD*)(a2 + 20);
  v18 = *(_DWORD*)(a2 + 24);
  v19 = *(_QWORD*)(a2 + 12);
  v20 = *(_DWORD*)a2;
  v36_.v37 = *(_QWORD*)(a2 + 4);
  v36_.v38 = v19;
  v21 = *(_QWORD*)(a4 + 4);
  v22 = *(_QWORD*)(a4 + 12);
  v36_.v39 = v17;
  v36_.v40 = v18;
  v23 = *(_DWORD*)(a4 + 20);
  v24 = *(_DWORD*)(a4 + 24);
  v36_.v36 = v20;
  v32 = v21;
  v33 = v22;
  v41 = 1;
  v34 = v23;
  v35 = v24;
  v31 = *(_DWORD*)a4;
  v26 = physx_PxGeometryQuery_computePenetration(v30, a6, v15, &v36_.v36, v16,
                                                 &v31, (__int64)&v41);
  *a5 = *(_QWORD*)v30;
  v27 = *(_OWORD*)a5;
  *((_QWORD*)&v27 + 1) = LODWORD(v30[2]);
  *(_OWORD*)a5 = v27;
  (*(void (**)(_QWORD))(*(_QWORD*)*v14 + 944LL))(*v14);
  return v26 & 1;
}

#pragma GCC visibility pop
