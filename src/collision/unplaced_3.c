#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_674160(__int64 result, __int64*, __int64, char);
__int64 GameRoutine_2b0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_14a0820(_QWORD*);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212c840;
extern __int64 (*GameData_1f903e8[])();
extern __int64 (*GameData_1f904e8[])();
extern __int64 (*collision_anonymous_CastFilter_vtable[])();
extern __int64* GameData_212c838;
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
void GameRoutine_675420(__int64*, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_674140();
void __attribute__((noreturn)) GameRoutine_674fd0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void collision_671400(PSEUDO_X8 x8_,
                                                 float32x4_t* result,
                                                 float32x4_t* a2, __int64 a3);
__attribute__((swiftcall)) void collision_673460(PSEUDO_X8 x8_, float32x4_t* a1,
                                                 long double* a2, __int64 a3,
                                                 float a5);

__attribute__((swiftcall)) void collision_671400(PSEUDO_X8 x8_,
                                                 float32x4_t* result,
                                                 float32x4_t* a2, __int64 a3)
{

#pragma clang fp contract(off)
  _BYTE* a4 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  int8x16_t v6;
  int8x16_t v7;
  float32x4_t* v8;
  float32x4_t v10;
  float32x4_t v11;
  unsigned __int8 explicit;
  __int64* v13;
  _QWORD* v14;
  float32x4_t v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  int* v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int128 v43;
  __int128 v44;
  unsigned int* v45;
  _QWORD* v46;
  int v47;
  int v48;
  __int64 v49;
  unsigned int* v50;
  unsigned int v51;
  signed int v52;
  float32x4_t v53;
  __int128 v54;
  __int64 v55;
  signed __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  signed __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  _BYTE* v84;
  __int64 v85;
  __int128 v86;
  float32x4_t v87;
  int v88;
  __int128 v89;
  __int64 v90;
  float32x4_t* v91;
  float32x4_t* v92;
  int8x16_t v93;
  __int64 v94;
  __int128 v95;
  long double v96;
  int v97;
  __int16 v98;
  _BYTE v99[12];
  _DWORD v100[3];
  __int64 (**v101)();
  struct {
    int v102;
    __int16 v103;
    char gap190_[2];
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    int v108;
    char gap228_[4];
    __int64 v109;
    __int64 v110;
    unsigned __int8 v111;
    char gap249_[7];
    int* v112;
    __int64 v113;
  } v102_;
  struct {
    int v114;
    __int16 v115;
    char gap278_[2];
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    int v120;
    char gap316_[4];
    __int64 v121;
    __int64 v122;
    int v123;
    __int16 v124;
    char gap342_[2];
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    int v129;
    char gap380_[4];
    __int64 v130;
    __int64 v131;
    int v132;
    __int16 v133;
    char gap406_[2];
    __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    int v138;
    char gap444_[4];
    __int64 v139;
    __int64 v140;
    int v141;
    __int16 v142;
    char gap470_[2];
    __int64 v143;
    __int64 v144;
    __int64 v145;
    __int64 v146;
    int v147;
    char gap508_[4];
    __int64 v148;
    __int64 v149;
    int v150;
    __int16 v151;
    char gap534_[2];
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    int v156;
    char gap572_[4];
    __int64 v157;
    __int64 v158;
    int v159;
    __int16 v160;
    char gap598_[2];
    __int64 v161;
    __int64 v162;
    __int64 v163;
    __int64 v164;
    int v165;
    char gap636_[4];
    __int64 v166;
    __int64 v167;
    int v168;
    __int16 v169;
    char gap662_[2];
    __int64 v170;
    __int64 v171;
    __int64 v172;
    __int64 v173;
    int v174;
    char gap700_[4];
    __int64 v175;
    __int64 v176;
    int v177;
    __int16 v178;
    char gap726_[2];
    __int64 v179;
    __int64 v180;
    __int64 v181;
    __int64 v182;
    int v183;
    char gap764_[4];
    __int64 v184;
    __int64 v185;
    int v186;
    __int16 v187;
    char gap790_[2];
    __int64 v188;
    __int64 v189;
    __int64 v190;
    __int64 v191;
    int v192;
    char gap828_[4];
    __int64 v193;
    __int64 v194;
    int v195;
    __int16 v196;
    char gap854_[2];
    __int64 v197;
    __int64 v198;
    __int64 v199;
    __int64 v200;
    int v201;
    char gap892_[4];
    __int64 v202;
    __int64 v203;
    int v204;
    __int16 v205;
    char gap918_[2];
    __int64 v206;
    __int64 v207;
    __int64 v208;
    __int64 v209;
    int v210;
    char gap956_[4];
    __int64 v211;
    __int64 v212;
    int v213;
    __int16 v214;
    char gap982_[2];
    __int64 v215;
    __int64 v216;
    __int64 v217;
    __int64 v218;
    int v219;
    char gap1020_[4];
    __int64 v220;
    __int64 v221;
    int v222;
    __int16 v223;
    char gap1046_[2];
    __int64 v224;
    __int64 v225;
    __int64 v226;
    __int64 v227;
    int v228;
    char gap1084_[4];
    __int64 v229;
    __int64 v230;
    int v231;
    __int16 v232;
    char gap1110_[2];
    __int64 v233;
    __int64 v234;
    __int64 v235;
    __int64 v236;
    int v237;
    char gap1148_[4];
    __int64 v238;
    __int64 v239;
    int v240;
    __int16 v241;
    char gap1174_[2];
    __int64 v242;
    __int64 v243;
    __int64 v244;
    __int64 v245;
    int v246;
    char gap1212_[4];
    __int64 v247;
    __int64 v248;
    int v249;
    __int16 v250;
    char gap1238_[2];
    __int64 v251;
    __int64 v252;
    __int64 v253;
    __int64 v254;
    int v255;
    char gap1276_[4];
    __int64 v256;
    __int64 v257;
    int v258;
    __int16 v259;
    char gap1302_[2];
    __int64 v260;
    __int64 v261;
    __int64 v262;
    __int64 v263;
    int v264;
    char gap1340_[4];
    __int64 v265;
    __int64 v266;
    int v267;
    __int16 v268;
    char gap1366_[2];
    __int64 v269;
    __int64 v270;
    __int64 v271;
    __int64 v272;
    int v273;
    char gap1404_[4];
    __int64 v274;
    __int64 v275;
    int v276;
    __int16 v277;
    char gap1430_[2];
    __int64 v278;
    __int64 v279;
    __int64 v280;
    __int64 v281;
    int v282;
    char gap1468_[4];
    __int64 v283;
    __int64 v284;
    int v285;
    __int16 v286;
    char gap1494_[2];
    __int64 v287;
    __int64 v288;
    __int64 v289;
    __int64 v290;
    int v291;
    char gap1532_[4];
    __int64 v292;
    __int64 v293;
    int v294;
    __int16 v295;
    char gap1558_[2];
    __int64 v296;
    __int64 v297;
    __int64 v298;
    __int64 v299;
    int v300;
    char gap1596_[4];
    __int64 v301;
    __int64 v302;
    int v303;
    __int16 v304;
    char gap1622_[2];
    __int64 v305;
    __int64 v306;
    __int64 v307;
    __int64 v308;
    int v309;
    char gap1660_[4];
    __int64 v310;
    __int64 v311;
    int v312;
    __int16 v313;
    char gap1686_[2];
    __int64 v314;
    __int64 v315;
    __int64 v316;
    __int64 v317;
    int v318;
    char gap1724_[4];
    __int64 v319;
    __int64 v320;
    int v321;
    __int16 v322;
    char gap1750_[2];
    __int64 v323;
    __int64 v324;
    __int64 v325;
    __int64 v326;
    int v327;
    char gap1788_[4];
    __int64 v328;
    __int64 v329;
    int v330;
    __int16 v331;
    char gap1814_[2];
    __int64 v332;
    __int64 v333;
    __int64 v334;
    __int64 v335;
    int v336;
    char gap1852_[4];
    __int64 v337;
    __int64 v338;
    int v339;
    __int16 v340;
    char gap1878_[2];
    __int64 v341;
    __int64 v342;
    __int64 v343;
    __int64 v344;
    int v345;
    char gap1916_[4];
    __int64 v346;
    __int64 v347;
    int v348;
    __int16 v349;
    char gap1942_[2];
    __int64 v350;
    __int64 v351;
    __int64 v352;
    __int64 v353;
    int v354;
    char gap1980_[4];
    __int64 v355;
    __int64 v356;
    int v357;
    __int16 v358;
    char gap2006_[2];
    __int64 v359;
    __int64 v360;
    __int64 v361;
    __int64 v362;
    int v363;
    char gap2044_[4];
    __int64 v364;
    __int64 v365;
    int v366;
    __int16 v367;
    char gap2070_[2];
    __int64 v368;
    __int64 v369;
    __int64 v370;
    __int64 v371;
    int v372;
    char gap2108_[4];
    __int64 v373;
    __int64 v374;
    int v375;
    __int16 v376;
    char gap2134_[2];
    __int64 v377;
    __int64 v378;
    __int64 v379;
    __int64 v380;
    int v381;
    char gap2172_[4];
    __int64 v382;
    __int64 v383;
    int v384;
    __int16 v385;
    char gap2198_[2];
    __int64 v386;
    __int64 v387;
    __int64 v388;
    __int64 v389;
    int v390;
    char gap2236_[4];
    __int64 v391;
    __int64 v392;
    int v393;
    __int16 v394;
    char gap2262_[2];
    __int64 v395;
    __int64 v396;
    __int64 v397;
    __int64 v398;
    int v399;
    char gap2300_[4];
    __int64 v400;
    __int64 v401;
  } v114_;
  _QWORD v402[2];
  _QWORD v403[2];
  __int16 v404;

  v5 = vsubq_f32(*a2, *result);
  v7 = vmulq_f32(v5, v5);
  v6 = vextq_s8(v7, v7, 8u);
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  v96 = *(long double*)&v6;
  if (LANES128(v6).n128_f32[0] <= 0x0.0p+0f) {
    *a4 = 0;
    a4[24] = 0;
    {
      result;
      return;
    }
  }
  LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
  v403[1] = 0;
  v102_.v103 = 0;
  v102_.v104 = 0;
  v102_.v105 = 0;
  v102_.v108 = 0;
  v8 = result;
  v10 = vrsqrteq_f32(v7);
  v403[0] = a3;
  v402[0] = collision_anonymous_CastFilter_vtable;
  v402[1] = a3;
  v404 = 39;
  v102_.v112 = &v114_.v114;
  v102_.v113 = 32;
  v102_.v109 = 0;
  v102_.v110 = 0;
  v102_.v111 = 0;
  v114_.v115 = 0;
  v114_.v116 = 0;
  v114_.v117 = 0;
  v114_.v120 = 0;
  v114_.v121 = 0;
  v114_.v122 = 0;
  v114_.v124 = 0;
  v114_.v125 = 0;
  v114_.v126 = 0;
  v114_.v129 = 0;
  v114_.v130 = 0;
  v114_.v131 = 0;
  v114_.v133 = 0;
  v114_.v134 = 0;
  v114_.v135 = 0;
  v114_.v138 = 0;
  v114_.v139 = 0;
  v114_.v140 = 0;
  v114_.v142 = 0;
  v114_.v143 = 0;
  v114_.v144 = 0;
  v114_.v147 = 0;
  v114_.v149 = 0;
  v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v7, v10)));
  v114_.v148 = 0;
  v114_.v151 = 0;
  v114_.v152 = 0;
  v114_.v153 = 0;
  v114_.v156 = 0;
  v114_.v158 = 0;
  v114_.v157 = 0;
  v102_.v102 = -1;
  v102_.v106 = 0;
  v102_.v107 = 2139095039;
  v114_.v114 = -1;
  v114_.v118 = 0;
  v114_.v119 = 2139095039;
  v114_.v123 = -1;
  v114_.v127 = 0;
  v114_.v128 = 2139095039;
  v114_.v132 = -1;
  v114_.v136 = 0;
  v114_.v137 = 2139095039;
  v114_.v141 = -1;
  v114_.v145 = 0;
  v114_.v146 = 2139095039;
  v114_.v150 = -1;
  v114_.v154 = 0;
  v114_.v155 = 2139095039;
  v101 = GameData_1f903e8;
  v114_.v159 = -1;
  v114_.v160 = 0;
  v114_.v162 = 0;
  v114_.v161 = 0;
  v114_.v163 = 0;
  v114_.v164 = 2139095039;
  v114_.v165 = 0;
  v114_.v167 = 0;
  v114_.v166 = 0;
  v114_.v168 = -1;
  v114_.v169 = 0;
  v114_.v171 = 0;
  v114_.v170 = 0;
  v114_.v172 = 0;
  v114_.v173 = 2139095039;
  v114_.v174 = 0;
  v114_.v176 = 0;
  v114_.v175 = 0;
  v114_.v177 = -1;
  v114_.v178 = 0;
  v114_.v181 = 0;
  v114_.v180 = 0;
  v114_.v179 = 0;
  v114_.v182 = 2139095039;
  v114_.v183 = 0;
  v114_.v185 = 0;
  v114_.v184 = 0;
  v114_.v186 = -1;
  v114_.v187 = 0;
  v114_.v190 = 0;
  v114_.v189 = 0;
  v114_.v188 = 0;
  v114_.v191 = 2139095039;
  v114_.v192 = 0;
  v114_.v194 = 0;
  v114_.v193 = 0;
  v114_.v195 = -1;
  v114_.v196 = 0;
  v114_.v199 = 0;
  v114_.v198 = 0;
  v114_.v197 = 0;
  v114_.v200 = 2139095039;
  v114_.v201 = 0;
  v114_.v203 = 0;
  v114_.v202 = 0;
  v114_.v204 = -1;
  v114_.v205 = 0;
  v114_.v208 = 0;
  v114_.v207 = 0;
  v114_.v206 = 0;
  v114_.v209 = 2139095039;
  v114_.v210 = 0;
  v114_.v212 = 0;
  v114_.v211 = 0;
  v114_.v213 = -1;
  v114_.v214 = 0;
  v114_.v217 = 0;
  v114_.v216 = 0;
  v114_.v215 = 0;
  v114_.v218 = 2139095039;
  v114_.v219 = 0;
  v114_.v221 = 0;
  v114_.v220 = 0;
  v114_.v222 = -1;
  v114_.v223 = 0;
  v114_.v226 = 0;
  v114_.v225 = 0;
  v114_.v224 = 0;
  v114_.v227 = 2139095039;
  v114_.v228 = 0;
  v114_.v230 = 0;
  v114_.v229 = 0;
  v114_.v231 = -1;
  v114_.v232 = 0;
  v114_.v235 = 0;
  v114_.v234 = 0;
  v114_.v233 = 0;
  v114_.v236 = 2139095039;
  v114_.v237 = 0;
  v114_.v239 = 0;
  v114_.v238 = 0;
  v114_.v240 = -1;
  v114_.v241 = 0;
  v114_.v244 = 0;
  v114_.v243 = 0;
  v114_.v242 = 0;
  v114_.v245 = 2139095039;
  v114_.v246 = 0;
  v114_.v248 = 0;
  v114_.v247 = 0;
  v114_.v249 = -1;
  v114_.v250 = 0;
  v114_.v253 = 0;
  v114_.v252 = 0;
  v114_.v251 = 0;
  v114_.v254 = 2139095039;
  v114_.v255 = 0;
  v114_.v257 = 0;
  v114_.v256 = 0;
  v114_.v258 = -1;
  v114_.v259 = 0;
  v114_.v262 = 0;
  v114_.v261 = 0;
  v114_.v260 = 0;
  v114_.v263 = 2139095039;
  v114_.v264 = 0;
  v114_.v266 = 0;
  v114_.v265 = 0;
  v114_.v267 = -1;
  v114_.v268 = 0;
  v114_.v271 = 0;
  v114_.v270 = 0;
  v114_.v269 = 0;
  v114_.v272 = 2139095039;
  v114_.v273 = 0;
  v114_.v275 = 0;
  v114_.v274 = 0;
  v114_.v276 = -1;
  v114_.v277 = 0;
  v114_.v280 = 0;
  v114_.v279 = 0;
  v114_.v278 = 0;
  v114_.v281 = 2139095039;
  v114_.v282 = 0;
  v114_.v284 = 0;
  v114_.v283 = 0;
  v114_.v285 = -1;
  v114_.v286 = 0;
  v114_.v289 = 0;
  v114_.v288 = 0;
  v114_.v287 = 0;
  v114_.v290 = 2139095039;
  v114_.v291 = 0;
  v114_.v293 = 0;
  v114_.v292 = 0;
  v114_.v294 = -1;
  v114_.v295 = 0;
  v114_.v298 = 0;
  v114_.v297 = 0;
  v114_.v296 = 0;
  v114_.v299 = 2139095039;
  v114_.v300 = 0;
  v114_.v302 = 0;
  v114_.v301 = 0;
  v114_.v303 = -1;
  v114_.v304 = 0;
  v114_.v307 = 0;
  v114_.v306 = 0;
  v114_.v305 = 0;
  v114_.v308 = 2139095039;
  v114_.v309 = 0;
  v114_.v311 = 0;
  v114_.v310 = 0;
  v114_.v312 = -1;
  v114_.v313 = 0;
  v114_.v316 = 0;
  v114_.v315 = 0;
  v114_.v314 = 0;
  v114_.v317 = 2139095039;
  v114_.v318 = 0;
  v114_.v320 = 0;
  v114_.v319 = 0;
  v114_.v321 = -1;
  v114_.v322 = 0;
  v114_.v325 = 0;
  v114_.v324 = 0;
  v114_.v323 = 0;
  v114_.v326 = 2139095039;
  v114_.v327 = 0;
  v114_.v329 = 0;
  v114_.v328 = 0;
  v114_.v330 = -1;
  v114_.v331 = 0;
  v114_.v334 = 0;
  v114_.v333 = 0;
  v114_.v332 = 0;
  v114_.v335 = 2139095039;
  v114_.v336 = 0;
  v114_.v338 = 0;
  v114_.v337 = 0;
  v114_.v339 = -1;
  v114_.v340 = 0;
  v114_.v343 = 0;
  v114_.v342 = 0;
  v114_.v341 = 0;
  v114_.v344 = 2139095039;
  v114_.v345 = 0;
  v114_.v347 = 0;
  v114_.v346 = 0;
  v114_.v348 = -1;
  v114_.v349 = 0;
  v114_.v352 = 0;
  v114_.v351 = 0;
  v114_.v350 = 0;
  v114_.v353 = 2139095039;
  v114_.v354 = 0;
  v114_.v356 = 0;
  v114_.v355 = 0;
  v114_.v357 = -1;
  v114_.v358 = 0;
  v114_.v361 = 0;
  v114_.v360 = 0;
  v114_.v359 = 0;
  v114_.v362 = 2139095039;
  v114_.v363 = 0;
  v114_.v365 = 0;
  v114_.v364 = 0;
  v114_.v366 = -1;
  v114_.v367 = 0;
  v114_.v370 = 0;
  v114_.v369 = 0;
  v114_.v368 = 0;
  v114_.v371 = 2139095039;
  v114_.v372 = 0;
  v114_.v374 = 0;
  v114_.v373 = 0;
  v114_.v375 = -1;
  v114_.v376 = 0;
  v114_.v379 = 0;
  v114_.v378 = 0;
  v114_.v377 = 0;
  v114_.v380 = 2139095039;
  v114_.v381 = 0;
  v114_.v383 = 0;
  v114_.v382 = 0;
  v114_.v384 = -1;
  v114_.v385 = 0;
  v114_.v388 = 0;
  v114_.v387 = 0;
  v114_.v386 = 0;
  v114_.v389 = 2139095039;
  v114_.v390 = 0;
  v114_.v392 = 0;
  v114_.v391 = 0;
  v114_.v393 = -1;
  v114_.v394 = 0;
  v114_.v397 = 0;
  v114_.v396 = 0;
  v114_.v395 = 0;
  v114_.v398 = 2139095039;
  v114_.v399 = 0;
  v93 = vbicq_s8(
      vmulq_f32(v5, vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v7, v11)))),
      vceqzq_f32(v7));
  v114_.v401 = 0;
  v114_.v400 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v13 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = 0;
    *v13 = 0;
    v13[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v13) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v13) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v13) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v13) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v13) =
        (_UNKNOWN*)1065353216;
    game_14a0820(v13);
    GameRoutine_2b0();
    __cxa_guard_release((__int64)GameData_212c840);
  }
  v14 = *(_QWORD**)(*v13 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v14 + 936LL))(*v14, 0, 0);
  v15 = *v8;
  v16 = *v14;
  *(_QWORD*)v100 = LANES128(*(v8)).n128_u64[0];
  v100[2] = LANES128(v15).n128_u32[2];
  qmemcpy(v99, &v93, sizeof(v99));
  v98 = 65;
  v97 = 1;
  if (((*(__int64 (**)(__int64, _DWORD*, _BYTE*, __int64 (***)(void), __int16*,
                       _QWORD*, _QWORD*, _QWORD, long double, int*))(
           *(_QWORD*)v16 + 72LL))(v16, v100, v99, &v101, &v98, v403, v402, 0,
                                  v96, &v97) &
       1) == 0 ||
      (v17 = HIDWORD(v102_.v113), HIDWORD(v102_.v113) + v102_.v111 == 0)) {
  LABEL_74:
    *a4 = 0;
    a4[24] = 0;
    {
      (float32x4_t*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*v14 + 944LL))(*v14);
      return;
    }
  }
  v18 = 8LL * (HIDWORD(v102_.v113) + (unsigned int)v102_.v111);
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v18, 16, 0);
  v83 = v14;
  v84 = a4;
  v91 = v8;
  v92 = a2;
  v20 = v19 + v18;
  v21 = 0;
  v22 = 0;
  v23 = (__int64*)v19;
  do {
    if (v22 >= v17) {
      v24 = &v102_.v102;
    }
    else {
      v24 = &v102_.v112[v21];
    }
    if ((unsigned __int64)v23 < v20) {
      *v23++ = (__int64)v24;
    }
    else {
      v25 = (char*)v23 - v19;
      v26 = ((__int64)v23 - v19) >> 3;
      v27 = v26 + 1;
      if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
        GameRoutine_674140();
      }
      if ((__int64)(v20 - v19) >> 2 > v27) {
        v27 = (__int64)(v20 - v19) >> 2;
      }
      if (v20 - v19 >= 0x7FFFFFFFFFFFFFF8LL) {
        v28 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v28 = v27;
      }
      if (v28 != 0) {
        if (v28 >> 61 != 0) {
        LABEL_77:
          GameRoutine_60a210();
        }
        v29 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
      }
      else {
        v29 = 0;
      }
      v20 = v29 + 8 * v28;
      v30 = (unsigned __int64)v23 - v19;
      v31 = (__int64)&v25[v29 + -8 * v26];
      *(_QWORD*)&v25[v29] = v24;
      v23 = (__int64*)&v25[v29 + 8];
      memcpy(v31, v19, v30);
      if (v19 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v19);
      }
      v19 = v31;
    }
    v17 = HIDWORD(v102_.v113);
    ++v22;
    v21 += 16;
  } while (v22 < HIDWORD(v102_.v113) + (unsigned int)v102_.v111);
  if ((__int64*)v19 == v23) {
    v14 = v83;
    v82 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v82,
                                  v19);
    goto LABEL_74;
  }
  GameHr_674160(v19, v23, (2 * __clz(((__int64)v23 - v19) >> 3)) ^ 0x7E, 1);
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = (__int64*)v19;
  v90 = v19;
  do {
    v37 = *(_QWORD*)(*v36 + 56);
    v38 = *(_QWORD*)(v37 + 16);
    if (v38 == 0) {
      goto LABEL_32;
    }
    if ((**(unsigned int (***)(_QWORD))v38)(*(_QWORD*)(v37 + 16)) != 0) {
      if ((**(unsigned int (***)(__int64))v38)(v38) != 1) {
        goto LABEL_32;
      }
      v40 = *(_QWORD*)(v38 + 24);
      v41 = *(_DWORD*)(v38 + 32);
      *(_QWORD*)&v43 = *(_QWORD*)(*v36 + 8);
      LODWORD(v39) = *(_DWORD*)(*v36 + 16);
      *(_QWORD*)&v44 = *(_QWORD*)(*v36 + 20);
      v42 = *(_QWORD*)(*v36 + 56);
      *((_QWORD*)&v43 + 1) = v39;
      LODWORD(v39) = *(_DWORD*)(*v36 + 28);
      *((_QWORD*)&v44 + 1) = v39;
      if (v34 < v35) {
        *(_OWORD*)v34 = v43;
        *(_OWORD*)(v34 + 16) = v44;
        *(_QWORD*)(v34 + 32) = 0;
        *(_DWORD*)(v34 + 40) = v41;
        *(_QWORD*)(v34 + 48) = v40;
        *(_QWORD*)(v34 + 56) = 0;
        *(_QWORD*)(v34 + 64) = v42;
      LABEL_40:
        *(_DWORD*)(v34 + 72) = 0;
        v34 += 80LL;
        goto LABEL_32;
      }
      v67 = v35;
      v68 = v34 - v33;
      v69 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v34 - v33) >> 4) + 1;
      if (v69 > 0x333333333333333LL) {
      LABEL_78:
        GameRoutine_674fd0();
      }
      v89 = v44;
      v95 = v43;
      if (0x999999999999999ALL * ((__int64)(v67 - v33) >> 4) > v69) {
        v69 = 0x999999999999999ALL * ((__int64)(v67 - v33) >> 4);
      }
      if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v67 - v33) >> 4) >=
          0x199999999999999LL) {
        v69 = 0x333333333333333LL;
      }
      if (v69 > 0x333333333333333LL) {
        goto LABEL_77;
      }
      v70 = 5 * v69;
      v71 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v69, 16, 0);
      v72 = v71 + v68;
      *(_QWORD*)(v72 + 48) = v40;
      *(_QWORD*)(v72 + 56) = 0;
      *(_QWORD*)(v72 + 32) = 0;
      *(_DWORD*)(v72 + 40) = v41;
      *(_QWORD*)(v72 + 64) = v42;
      *(_DWORD*)(v72 + 72) = 0;
      *(_OWORD*)v72 = v95;
      *(_OWORD*)(v72 + 16) = v89;
      v73 = v71 + v68 + 80 * (v68 / -80);
      if (v33 != v34) {
        v74 = v33;
        v75 = v71 + v68 + 80 * (v68 / -80);
        do {
          *(_QWORD*)(v75 + 8) = *(_QWORD*)(v74 + 8);
          *(_QWORD*)v75 = *(_QWORD*)v74;
          *(_QWORD*)(v75 + 24) = *(_QWORD*)(v74 + 24);
          *(_QWORD*)(v75 + 16) = *(_QWORD*)(v74 + 16);
          *(_QWORD*)(v75 + 40) = *(_QWORD*)(v74 + 40);
          v77 = *(_QWORD*)(v74 + 56);
          v76 = *(_QWORD*)(v74 + 64);
          v78 = *(_QWORD*)(v74 + 48);
          *(_DWORD*)(v75 + 72) = *(_DWORD*)(v74 + 72);
          *(_QWORD*)(v75 + 56) = v77;
          *(_QWORD*)(v75 + 64) = v76;
          *(_QWORD*)(v75 + 48) = v78;
          v79 = *(_QWORD*)(v74 + 32);
          v74 += 80;
          *(_QWORD*)(v75 + 32) = v79;
          v75 += 80;
        } while (v74 != v34);
      }
      v35 = v71 + 16 * v70;
      v34 = v72 + 80;
      if (v33 != 0) {
        v80 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v80 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v33);
      }
      v33 = v73;
    }
    else {
      v94 = v33;
      v45 = (unsigned int*)*v36;
      v46 = *(_QWORD**)(v38 + 8);
      v47 = *(_DWORD*)(v38 + 72);
      v48 = *(_DWORD*)((*(__int64 (**)(_QWORD))(**(_QWORD**)(v38 + 64) +
                                                128LL))(*(_QWORD*)(v38 + 64)) +
                       4LL * *v45) +
            v47;
      v49 = *((_QWORD*)v45 + 7);
      v50 = (unsigned int*)(v46[9] + 24LL * v48);
      v51 = v50[5];
      v52 = v50[4];
      v53 = vaddq_f32(*v91, vmulq_n_f32(vsubq_f32(*v92, *v91),
                                        *((float*)v45 + 8) / *(float*)&v96));
      v54 = *(_OWORD*)(v46[6] + 16LL * v50[3]);
      v55 = *(_QWORD*)(v46[12] + 40LL * v52 + 24);
      if (v34 < v35) {
        *(_DWORD*)(v34 + 40) = v51;
        v33 = v94;
        v19 = v90;
        *(_QWORD*)(v34 + 48) = v55;
        *(_QWORD*)(v34 + 56) = v46;
        *(float32x4_t*)v34 = v53;
        *(_OWORD*)(v34 + 16) = v54;
        *(_DWORD*)(v34 + 32) = v48;
        *(_DWORD*)(v34 + 36) = v52;
        *(_QWORD*)(v34 + 64) = v49;
        goto LABEL_40;
      }
      v56 = v34 - v94;
      v57 = 1 - 0x3333333333333333LL * ((__int64)(v34 - v94) >> 4);
      if (v57 > 0x333333333333333LL) {
        goto LABEL_78;
      }
      v86 = v54;
      v87 = v53;
      v88 = v48;
      if (0x999999999999999ALL * ((__int64)(v35 - v94) >> 4) > v57) {
        v57 = 0x999999999999999ALL * ((__int64)(v35 - v94) >> 4);
      }
      if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v35 - v94) >> 4) >=
          0x199999999999999LL) {
        v57 = 0x333333333333333LL;
      }
      if (v57 > 0x333333333333333LL) {
        goto LABEL_77;
      }
      v85 = 5 * v57;
      v58 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v57, 16, 0);
      v59 = v58 + v56;
      *(_DWORD*)(v59 + 40) = v51;
      *(_QWORD*)(v59 + 48) = v55;
      *(_QWORD*)(v59 + 56) = v46;
      *(_QWORD*)(v59 + 64) = v49;
      *(_DWORD*)(v59 + 72) = 0;
      *(_DWORD*)(v59 + 32) = v88;
      *(_DWORD*)(v59 + 36) = v52;
      *(float32x4_t*)v59 = v87;
      *(_OWORD*)(v59 + 16) = v86;
      v33 = v58 + v56 + 80 * (v56 / -80);
      if (v94 != v34) {
        v60 = v94;
        v61 = v33;
        do {
          *(_QWORD*)(v61 + 8) = *(_QWORD*)(v60 + 8);
          *(_QWORD*)v61 = *(_QWORD*)v60;
          *(_QWORD*)(v61 + 24) = *(_QWORD*)(v60 + 24);
          *(_QWORD*)(v61 + 16) = *(_QWORD*)(v60 + 16);
          *(_QWORD*)(v61 + 40) = *(_QWORD*)(v60 + 40);
          v63 = *(_QWORD*)(v60 + 56);
          v62 = *(_QWORD*)(v60 + 64);
          v64 = *(_QWORD*)(v60 + 48);
          *(_DWORD*)(v61 + 72) = *(_DWORD*)(v60 + 72);
          *(_QWORD*)(v61 + 56) = v63;
          *(_QWORD*)(v61 + 64) = v62;
          *(_QWORD*)(v61 + 48) = v64;
          v65 = *(_QWORD*)(v60 + 32);
          v60 += 80;
          *(_QWORD*)(v61 + 32) = v65;
          v61 += 80;
        } while (v60 != v34);
      }
      v19 = v90;
      v34 = v59 + 80;
      v35 = v58 + 16 * v85;
      if (v94 != 0) {
        v66 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v66 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v94);
      }
    }
  LABEL_32:
    ++v36;
  } while (v36 != v23);
  v14 = v83;
  *(_QWORD*)v84 = v33;
  *((_QWORD*)v84 + 1) = v34;
  *((_QWORD*)v84 + 2) = v35;
  v84[24] = 1;
  if (v19 != 0) {
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v81,
                                  v19);
  }
  {
    (float32x4_t*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*v14 + 944LL))(*v14);
    return;
  }
}

__attribute__((swiftcall)) void collision_673460(PSEUDO_X8 x8_, float32x4_t* a1,
                                                 long double* a2, __int64 a3,
                                                 float a5)
{

#pragma clang fp contract(off)
  _BYTE* a4 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  float32x4_t v7;
  int8x16_t v8;
  long double v9;
  float32x4_t* v10;
  float32x4_t v11;
  unsigned __int8 explicit;
  __int64* v13;
  float32x4_t v14;
  int8x16_t v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  float v25;
  float32x4_t v26;
  __int64 v27;
  unsigned int* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned __int64 v32;
  float32x4_t* v33;
  float32x4_t v34;
  __int128 v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  signed __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int128 v55;
  int v56;
  __int64 v57;
  float32x4_t* v58;
  signed __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  unsigned __int64 v75;
  _BYTE* v76;
  float32x4_t* v77;
  __int128 v78;
  __int128 v79;
  float32x4_t v80;
  float32x4_t v81;
  __int64 v82;
  int8x16_t v83;
  unsigned __int64 v84;
  __int64 v85;
  long double v86;
  struct {
    unsigned __int64 v87;
    __int64 v88;
  } v87_;
  struct {
    _QWORD v89[3];
    unsigned __int32 v90;
  } v89_;
  _DWORD v91[3];
  struct {
    __int64 (**v92)();
    int v93;
    __int16 v94;
    char gap198_[2];
    __int64 v95;
    __int64 v96;
    __int64 v97;
    int v98;
    char gap228_[4];
    __int64 v99;
    __int64 v100;
    char v101;
    char gap249_[7];
    int* v102;
    __int64 v103;
  } v92_;
  struct {
    int v104;
    __int16 v105;
    char gap278_[2];
    __int64 v106;
    __int64 v107;
    __int64 v108;
    int v109;
    char gap308_[4];
    __int64 v110;
    __int64 v111;
    int v112;
    __int16 v113;
    char gap334_[2];
    __int64 v114;
    __int64 v115;
    __int64 v116;
    int v117;
    char gap364_[4];
    __int64 v118;
    __int64 v119;
    int v120;
    __int16 v121;
    char gap390_[2];
    __int64 v122;
    __int64 v123;
    __int64 v124;
    int v125;
    char gap420_[4];
    __int64 v126;
    __int64 v127;
    int v128;
    __int16 v129;
    char gap446_[2];
    __int64 v130;
    __int64 v131;
    __int64 v132;
    int v133;
    char gap476_[4];
    __int64 v134;
    __int64 v135;
    int v136;
    __int16 v137;
    char gap502_[2];
    __int64 v138;
    __int64 v139;
    __int64 v140;
    int v141;
    char gap532_[4];
    __int64 v142;
    __int64 v143;
    int v144;
    __int16 v145;
    char gap558_[2];
    __int64 v146;
    __int64 v147;
    __int64 v148;
    int v149;
    char gap588_[4];
    __int64 v150;
    __int64 v151;
    int v152;
    __int16 v153;
    char gap614_[2];
    __int64 v154;
    __int64 v155;
    __int64 v156;
    int v157;
    char gap644_[4];
    __int64 v158;
    __int64 v159;
    int v160;
    __int16 v161;
    char gap670_[2];
    __int64 v162;
    __int64 v163;
    __int64 v164;
    int v165;
    char gap700_[4];
    __int64 v166;
    __int64 v167;
    int v168;
    __int16 v169;
    char gap726_[2];
    __int64 v170;
    __int64 v171;
    __int64 v172;
    int v173;
    char gap756_[4];
    __int64 v174;
    __int64 v175;
    int v176;
    __int16 v177;
    char gap782_[2];
    __int64 v178;
    __int64 v179;
    __int64 v180;
    int v181;
    char gap812_[4];
    __int64 v182;
    __int64 v183;
    int v184;
    __int16 v185;
    char gap838_[2];
    __int64 v186;
    __int64 v187;
    __int64 v188;
    int v189;
    char gap868_[4];
    __int64 v190;
    __int64 v191;
    int v192;
    __int16 v193;
    char gap894_[2];
    __int64 v194;
    __int64 v195;
    __int64 v196;
    int v197;
    char gap924_[4];
    __int64 v198;
    __int64 v199;
    int v200;
    __int16 v201;
    char gap950_[2];
    __int64 v202;
    __int64 v203;
    __int64 v204;
    int v205;
    char gap980_[4];
    __int64 v206;
    __int64 v207;
    int v208;
    __int16 v209;
    char gap1006_[2];
    __int64 v210;
    __int64 v211;
    __int64 v212;
    int v213;
    char gap1036_[4];
    __int64 v214;
    __int64 v215;
    int v216;
    __int16 v217;
    char gap1062_[2];
    __int64 v218;
    __int64 v219;
    __int64 v220;
    int v221;
    char gap1092_[4];
    __int64 v222;
    __int64 v223;
    int v224;
    __int16 v225;
    char gap1118_[2];
    __int64 v226;
    __int64 v227;
    __int64 v228;
    int v229;
    char gap1148_[4];
    __int64 v230;
    __int64 v231;
    int v232;
    __int16 v233;
    char gap1174_[2];
    __int64 v234;
    __int64 v235;
    __int64 v236;
    int v237;
    char gap1204_[4];
    __int64 v238;
    __int64 v239;
    int v240;
    __int16 v241;
    char gap1230_[2];
    __int64 v242;
    __int64 v243;
    __int64 v244;
    int v245;
    char gap1260_[4];
    __int64 v246;
    __int64 v247;
    int v248;
    __int16 v249;
    char gap1286_[2];
    __int64 v250;
    __int64 v251;
    __int64 v252;
    int v253;
    char gap1316_[4];
    __int64 v254;
    __int64 v255;
    int v256;
    __int16 v257;
    char gap1342_[2];
    __int64 v258;
    __int64 v259;
    __int64 v260;
    int v261;
    char gap1372_[4];
    __int64 v262;
    __int64 v263;
    int v264;
    __int16 v265;
    char gap1398_[2];
    __int64 v266;
    __int64 v267;
    __int64 v268;
    int v269;
    char gap1428_[4];
    __int64 v270;
    __int64 v271;
    int v272;
    __int16 v273;
    char gap1454_[2];
    __int64 v274;
    __int64 v275;
    __int64 v276;
    int v277;
    char gap1484_[4];
    __int64 v278;
    __int64 v279;
    int v280;
    __int16 v281;
    char gap1510_[2];
    __int64 v282;
    __int64 v283;
    __int64 v284;
    int v285;
    char gap1540_[4];
    __int64 v286;
    __int64 v287;
    int v288;
    __int16 v289;
    char gap1566_[2];
    __int64 v290;
    __int64 v291;
    __int64 v292;
    int v293;
    char gap1596_[4];
    __int64 v294;
    __int64 v295;
    int v296;
    __int16 v297;
    char gap1622_[2];
    __int64 v298;
    __int64 v299;
    __int64 v300;
    int v301;
    char gap1652_[4];
    __int64 v302;
    __int64 v303;
    int v304;
    __int16 v305;
    char gap1678_[2];
    __int64 v306;
    __int64 v307;
    __int64 v308;
    int v309;
    char gap1708_[4];
    __int64 v310;
    __int64 v311;
    int v312;
    __int16 v313;
    char gap1734_[2];
    __int64 v314;
    __int64 v315;
    __int64 v316;
    int v317;
    char gap1764_[4];
    __int64 v318;
    __int64 v319;
    int v320;
    __int16 v321;
    char gap1790_[2];
    __int64 v322;
    __int64 v323;
    __int64 v324;
    int v325;
    char gap1820_[4];
    __int64 v326;
    __int64 v327;
    int v328;
    __int16 v329;
    char gap1846_[2];
    __int64 v330;
    __int64 v331;
    __int64 v332;
    int v333;
    char gap1876_[4];
    __int64 v334;
    __int64 v335;
    int v336;
    __int16 v337;
    char gap1902_[2];
    __int64 v338;
    __int64 v339;
    __int64 v340;
    int v341;
    char gap1932_[4];
    __int64 v342;
    __int64 v343;
    int v344;
    __int16 v345;
    char gap1958_[2];
    __int64 v346;
    __int64 v347;
    __int64 v348;
    int v349;
    char gap1988_[4];
    __int64 v350;
    __int64 v351;
    int v352;
    __int16 v353;
    char gap2014_[2];
    __int64 v354;
    __int64 v355;
    __int64 v356;
    int v357;
    char gap2044_[4];
    __int64 v358;
    __int64 v359;
  } v104_;
  struct {
    _QWORD v360[2];
    __int16 v361;
  } v360_;
  _QWORD v362[3];
  int v363;
  __int16 v364;

  *(float*)&v91[2] = a5;
  v9 = *a2;
  v5 = *a1;
  v360_.v360[0] = 0;
  v360_.v360[1] = 0;
  v7 = vsubq_f32(*(float32x4_t*)&v9, v5);
  v362[0] = collision_anonymous_CastFilter_vtable;
  v362[1] = a3;
  v92_.v102 = &v104_.v104;
  v92_.v103 = 32;
  v360_.v361 = 39;
  v92_.v92 = GameData_1f904e8;
  v104_.v117 = 2139095039;
  v104_.v125 = 2139095039;
  v104_.v133 = 2139095039;
  v92_.v98 = 2139095039;
  v104_.v109 = 2139095039;
  v104_.v141 = 2139095039;
  v89_.v90 = LANES128(v5).n128_u32[2];
  v8 = vmulq_f32(v7, v7);
  v104_.v149 = 2139095039;
  v104_.v157 = 2139095039;
  v104_.v165 = 2139095039;
  v104_.v173 = 2139095039;
  v104_.v181 = 2139095039;
  v104_.v189 = 2139095039;
  v104_.v197 = 2139095039;
  v104_.v205 = 2139095039;
  v104_.v213 = 2139095039;
  v104_.v221 = 2139095039;
  v104_.v229 = 2139095039;
  v104_.v237 = 2139095039;
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  v104_.v245 = 2139095039;
  v104_.v253 = 2139095039;
  v104_.v261 = 2139095039;
  v104_.v269 = 2139095039;
  v104_.v277 = 2139095039;
  v104_.v285 = 2139095039;
  v104_.v293 = 2139095039;
  v104_.v301 = 2139095039;
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  v104_.v309 = 2139095039;
  v104_.v317 = 2139095039;
  v104_.v325 = 2139095039;
  v104_.v333 = 2139095039;
  v104_.v341 = 2139095039;
  v104_.v349 = 2139095039;
  v104_.v357 = 2139095039;
  v92_.v94 = 0;
  *(float32x2_t*)&v9 =
      vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]));
  v92_.v95 = 0;
  v92_.v96 = 0;
  v92_.v97 = 0;
  v92_.v99 = 0;
  v92_.v100 = 0;
  v92_.v101 = 0;
  v104_.v105 = 0;
  v104_.v106 = 0;
  v104_.v107 = 0;
  v104_.v108 = 0;
  v104_.v110 = 0;
  v104_.v111 = 0;
  v104_.v113 = 0;
  v104_.v114 = 0;
  v104_.v115 = 0;
  v104_.v116 = 0;
  v104_.v118 = 0;
  v104_.v119 = 0;
  v104_.v121 = 0;
  v92_.v93 = -1;
  v104_.v104 = -1;
  v104_.v112 = -1;
  v104_.v120 = -1;
  v104_.v122 = 0;
  v104_.v123 = 0;
  v104_.v124 = 0;
  v104_.v126 = 0;
  v104_.v127 = 0;
  v104_.v128 = -1;
  v104_.v129 = 0;
  v104_.v131 = 0;
  v104_.v132 = 0;
  v104_.v130 = 0;
  v104_.v134 = 0;
  v104_.v135 = 0;
  v104_.v136 = -1;
  v104_.v137 = 0;
  v104_.v138 = 0;
  v104_.v139 = 0;
  v104_.v140 = 0;
  v104_.v142 = 0;
  v104_.v143 = 0;
  v104_.v144 = -1;
  v104_.v145 = 0;
  v104_.v148 = 0;
  v104_.v147 = 0;
  v104_.v146 = 0;
  v104_.v150 = 0;
  v104_.v151 = 0;
  v104_.v152 = -1;
  v104_.v153 = 0;
  v104_.v154 = 0;
  v104_.v155 = 0;
  v104_.v156 = 0;
  v104_.v158 = 0;
  v104_.v159 = 0;
  v104_.v160 = -1;
  v104_.v161 = 0;
  v104_.v162 = 0;
  v104_.v163 = 0;
  v104_.v164 = 0;
  v104_.v167 = 0;
  v104_.v166 = 0;
  v104_.v168 = -1;
  v104_.v169 = 0;
  v104_.v172 = 0;
  v104_.v171 = 0;
  v104_.v170 = 0;
  v104_.v175 = 0;
  v104_.v174 = 0;
  v104_.v176 = -1;
  v104_.v177 = 0;
  v104_.v180 = 0;
  v104_.v179 = 0;
  v104_.v178 = 0;
  v104_.v183 = 0;
  v104_.v182 = 0;
  v104_.v184 = -1;
  v104_.v185 = 0;
  v104_.v188 = 0;
  v104_.v187 = 0;
  v104_.v186 = 0;
  v104_.v191 = 0;
  v104_.v190 = 0;
  v104_.v192 = -1;
  v104_.v193 = 0;
  v104_.v196 = 0;
  v104_.v195 = 0;
  v104_.v194 = 0;
  v104_.v199 = 0;
  v104_.v198 = 0;
  v104_.v200 = -1;
  v104_.v201 = 0;
  v104_.v204 = 0;
  v104_.v203 = 0;
  v104_.v202 = 0;
  v104_.v207 = 0;
  v104_.v206 = 0;
  v104_.v208 = -1;
  v104_.v209 = 0;
  v104_.v212 = 0;
  v104_.v211 = 0;
  v104_.v210 = 0;
  v104_.v215 = 0;
  v104_.v214 = 0;
  v104_.v216 = -1;
  v104_.v217 = 0;
  v104_.v220 = 0;
  v104_.v219 = 0;
  v104_.v218 = 0;
  v104_.v223 = 0;
  v104_.v222 = 0;
  v104_.v224 = -1;
  v104_.v225 = 0;
  v104_.v228 = 0;
  v104_.v227 = 0;
  v104_.v226 = 0;
  v104_.v231 = 0;
  v104_.v230 = 0;
  v104_.v232 = -1;
  v104_.v233 = 0;
  v104_.v236 = 0;
  v104_.v235 = 0;
  v104_.v234 = 0;
  v104_.v239 = 0;
  v104_.v238 = 0;
  v104_.v240 = -1;
  v104_.v241 = 0;
  v104_.v244 = 0;
  v104_.v243 = 0;
  v104_.v242 = 0;
  v104_.v247 = 0;
  v104_.v246 = 0;
  v104_.v248 = -1;
  v104_.v249 = 0;
  v104_.v252 = 0;
  v104_.v251 = 0;
  v104_.v250 = 0;
  v104_.v255 = 0;
  v104_.v254 = 0;
  v104_.v256 = -1;
  v104_.v257 = 0;
  v104_.v260 = 0;
  v104_.v259 = 0;
  v104_.v258 = 0;
  v104_.v263 = 0;
  v104_.v262 = 0;
  v104_.v264 = -1;
  v104_.v265 = 0;
  v104_.v268 = 0;
  v104_.v267 = 0;
  v104_.v266 = 0;
  v104_.v271 = 0;
  v104_.v270 = 0;
  v104_.v272 = -1;
  v104_.v273 = 0;
  v104_.v276 = 0;
  v104_.v275 = 0;
  v104_.v274 = 0;
  v104_.v279 = 0;
  v104_.v278 = 0;
  v104_.v280 = -1;
  v104_.v281 = 0;
  v104_.v284 = 0;
  v104_.v283 = 0;
  v104_.v282 = 0;
  v104_.v287 = 0;
  v104_.v286 = 0;
  v104_.v288 = -1;
  v104_.v289 = 0;
  v104_.v292 = 0;
  v104_.v291 = 0;
  v104_.v290 = 0;
  v104_.v295 = 0;
  v104_.v294 = 0;
  v104_.v296 = -1;
  v104_.v297 = 0;
  v104_.v300 = 0;
  v104_.v299 = 0;
  v104_.v298 = 0;
  v104_.v303 = 0;
  v104_.v302 = 0;
  v104_.v304 = -1;
  v104_.v305 = 0;
  v104_.v308 = 0;
  v104_.v307 = 0;
  v104_.v306 = 0;
  v104_.v311 = 0;
  v104_.v310 = 0;
  v104_.v312 = -1;
  v104_.v313 = 0;
  v104_.v316 = 0;
  v104_.v315 = 0;
  v104_.v314 = 0;
  v104_.v319 = 0;
  v104_.v318 = 0;
  v104_.v320 = -1;
  v104_.v321 = 0;
  v104_.v324 = 0;
  v104_.v323 = 0;
  v104_.v322 = 0;
  v104_.v327 = 0;
  v104_.v326 = 0;
  v104_.v328 = -1;
  v104_.v329 = 0;
  v104_.v332 = 0;
  v104_.v331 = 0;
  v104_.v330 = 0;
  v104_.v335 = 0;
  v104_.v334 = 0;
  v104_.v336 = -1;
  v104_.v337 = 0;
  v104_.v340 = 0;
  v104_.v339 = 0;
  v104_.v338 = 0;
  v104_.v343 = 0;
  v104_.v342 = 0;
  v104_.v344 = -1;
  v104_.v345 = 0;
  v104_.v348 = 0;
  v104_.v347 = 0;
  v104_.v346 = 0;
  v104_.v351 = 0;
  v104_.v350 = 0;
  v89_.v89[2] = LANES128(v5).n128_u64[0];
  v104_.v352 = -1;
  v104_.v353 = 0;
  v104_.v356 = 0;
  v104_.v355 = 0;
  v104_.v354 = 0;
  v104_.v359 = 0;
  v104_.v358 = 0;
  v91[0] = 0;
  v89_.v89[0] = 0;
  v89_.v89[1] = 0x3F80000000000000LL;
  if (*(float*)&v9 <= 0x0.0p+0f) {
    goto LABEL_7;
  }
  LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
  v10 = a1;
  v11 = vrsqrteq_f32(v8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v13 = GameData_212c838;
  v14 = vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v8, v11)));
  v15 = vbicq_s8(
      vmulq_f32(v7, vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v8, v14)))),
      vceqzq_f32(v8));
  if ((explicit & 1) == 0) {
    v83 = v15;
    v86 = v9;
    v74 = __cxa_guard_acquire((__int64)GameData_212c840);
    v15 = v83;
    v9 = v86;
    if (v74 != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = 0;
      *v13 = 0;
      v13[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v13) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v13) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v13) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v13) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v13) =
          (_UNKNOWN*)1065353216;
      game_14a0820(v13);
      GameRoutine_2b0();
      __cxa_guard_release((__int64)GameData_212c840);
      v15 = v83;
      v9 = v86;
    }
  }
  v16 = **(_QWORD**)(*v13 + 32);
  v87_.v87 = LANES128(v15).n128_u64[0];
  LODWORD(v87_.v88) = LANES128(v15).n128_u32[2];
  v364 = 1027;
  v363 = 1;
  if (((*(__int64 (**)(__int64, _DWORD*, _QWORD*, unsigned __int64*,
                       __int64 (***)(void), __int16*, _QWORD*, _QWORD*,
                       long double, double, _QWORD, int*))(
           *(_QWORD*)v16 + 80LL))(v16, v91, v89_.v89, &v87_.v87, &v92_.v92,
                                  &v364, v360_.v360, v362, v9, 0x0.0p+0, 0,
                                  &v363) &
       1) == 0 ||
      HIDWORD(v92_.v103) == 0) {
  LABEL_7:
    *a4 = 0;
    a4[24] = 0;
    return;
  }
  GameRoutine_675420((__int64*)&v87_.v87, (__int64)&v92_.v92);
  v17 = v87_.v87;
  v18 = v87_.v88;
  if (v87_.v87 == v87_.v88) {
    *a4 = 0;
    a4[24] = 0;
    goto LABEL_57;
  }
  v75 = v87_.v87;
  v76 = a4;
  v19 = 0;
  v20 = 0;
  v84 = 0;
  v82 = v87_.v88;
  v77 = v10;
  while (1) {
    v21 = *(_QWORD*)(*(_QWORD*)v17 + 48LL);
    v22 = *(_QWORD*)(v21 + 16);
    if (v22 == 0) {
      break;
    }
    if ((**(unsigned int (***)(_QWORD))v22)(*(_QWORD*)(v21 + 16)) != 0) {
      if ((**(unsigned int (***)(__int64))v22)(v22) != 1) {
        goto LABEL_11;
      }
      v24 = *(_QWORD*)v17;
      v25 = *(float*)(*(_QWORD*)v17 + 32LL);
      if (v25 <= 0x0.0p+0f) {
        v26 = *v10;
      }
      else {
        LANES128(v26).n128_u64[0] = *(_QWORD*)(v24 + 8);
        LODWORD(v23) = *(_DWORD*)(v24 + 16);
        LANES128(v26).n128_u64[1] = v23;
      }
      *(_QWORD*)&v55 = *(_QWORD*)(v24 + 20);
      LODWORD(v23) = *(_DWORD*)(v24 + 28);
      v54 = *(_QWORD*)(v22 + 24);
      *((_QWORD*)&v55 + 1) = v23;
      v56 = *(_DWORD*)(v22 + 32);
      v57 = *(_QWORD*)(v24 + 48);
      if (v20 >= v84) {
        v58 = v10;
        v59 = v20 - v19;
        v60 = 1 - 0x3333333333333333LL * ((__int64)(v20 - v19) >> 4);
        if (v60 > 0x333333333333333LL) {
        LABEL_62:
          GameRoutine_674fd0();
        }
        v79 = v55;
        v81 = v26;
        if (0x999999999999999ALL * ((__int64)(v84 - v19) >> 4) > v60) {
          v60 = 0x999999999999999ALL * ((__int64)(v84 - v19) >> 4);
        }
        if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v84 - v19) >> 4) >=
            0x199999999999999LL) {
          v60 = 0x333333333333333LL;
        }
        if (v60 > 0x333333333333333LL) {
        LABEL_61:
          GameRoutine_60a210();
        }
        v61 = 5 * v60;
        v62 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v60, 16, 0);
        v63 = v62 + v59;
        *(_QWORD*)(v63 + 64) = v57;
        *(_QWORD*)(v63 + 32) = 0;
        *(_DWORD*)(v63 + 40) = v56;
        *(_QWORD*)(v63 + 48) = v54;
        *(_QWORD*)(v63 + 56) = 0;
        *(float*)(v63 + 72) = v25;
        *(float32x4_t*)v63 = v81;
        *(_OWORD*)(v63 + 16) = v79;
        v64 = v62 + v59 + 80 * (v59 / -80);
        if (v19 != v20) {
          v65 = v19;
          v66 = v62 + v59 + 80 * (v59 / -80);
          do {
            *(_QWORD*)(v66 + 8) = *(_QWORD*)(v65 + 8);
            *(_QWORD*)v66 = *(_QWORD*)v65;
            *(_QWORD*)(v66 + 24) = *(_QWORD*)(v65 + 24);
            *(_QWORD*)(v66 + 16) = *(_QWORD*)(v65 + 16);
            *(_QWORD*)(v66 + 40) = *(_QWORD*)(v65 + 40);
            v68 = *(_QWORD*)(v65 + 56);
            v67 = *(_QWORD*)(v65 + 64);
            v69 = *(_QWORD*)(v65 + 48);
            *(_DWORD*)(v66 + 72) = *(_DWORD*)(v65 + 72);
            *(_QWORD*)(v66 + 56) = v68;
            *(_QWORD*)(v66 + 64) = v67;
            *(_QWORD*)(v66 + 48) = v69;
            v70 = *(_QWORD*)(v65 + 32);
            v65 += 80;
            *(_QWORD*)(v66 + 32) = v70;
            v66 += 80;
          } while (v65 != v20);
        }
        v20 = v63 + 80;
        v10 = v58;
        v84 = v62 + 16 * v61;
        if (v19 != 0) {
          v71 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v71 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, v19);
        }
        v19 = v64;
        goto LABEL_11;
      }
      *(float32x4_t*)v20 = v26;
      *(_OWORD*)(v20 + 16) = v55;
      *(_QWORD*)(v20 + 32) = 0;
      *(_DWORD*)(v20 + 40) = v56;
      *(_QWORD*)(v20 + 48) = v54;
      *(_QWORD*)(v20 + 56) = 0;
      *(_QWORD*)(v20 + 64) = v57;
    }
    else {
      v27 = v19;
      v28 = *(unsigned int**)v17;
      v29 = *(_QWORD*)(v22 + 8);
      v30 = *(_DWORD*)(v22 + 72);
      v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v22 + 64) + 128LL))(
          *(_QWORD*)(v22 + 64));
      v25 = *((float*)v28 + 8);
      if (v25 <= 0x0.0p+0f) {
        v34 = *v10;
        v33 = v10;
      }
      else {
        LANES128(v34).n128_u64[0] = *((_QWORD*)v28 + 1);
        LODWORD(v32) = v28[4];
        v33 = v10;
        LANES128(v34).n128_u64[1] = v32;
      }
      *(_QWORD*)&v35 = *(_QWORD*)(v28 + 5);
      LODWORD(v32) = v28[7];
      *((_QWORD*)&v35 + 1) = v32;
      v36 = *(_DWORD*)(v31 + 4LL * *v28);
      v37 = *((_QWORD*)v28 + 6);
      v38 = v36 + v30;
      v39 = *(_QWORD*)(v29 + 72) + 24LL * (v36 + v30);
      v40 = *(_DWORD*)(v39 + 16);
      v41 = *(_DWORD*)(v39 + 20);
      v42 = *(_QWORD*)(*(_QWORD*)(v29 + 96) + 40LL * v40 + 24);
      if (v20 >= v84) {
        v43 = v20 - v27;
        v44 = 1 - 0x3333333333333333LL * ((__int64)(v20 - v27) >> 4);
        if (v44 > 0x333333333333333LL) {
          goto LABEL_62;
        }
        v78 = v35;
        v80 = v34;
        if (0x999999999999999ALL * ((__int64)(v84 - v27) >> 4) > v44) {
          v44 = 0x999999999999999ALL * ((__int64)(v84 - v27) >> 4);
        }
        if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v84 - v27) >> 4) >=
            0x199999999999999LL) {
          v44 = 0x333333333333333LL;
        }
        if (v44 > 0x333333333333333LL) {
          goto LABEL_61;
        }
        v85 = 5 * v44;
        v45 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v44, 16, 0);
        v46 = v45 + v43;
        *(_QWORD*)(v46 + 48) = v42;
        *(_QWORD*)(v46 + 56) = v29;
        *(_DWORD*)(v46 + 32) = v38;
        *(_DWORD*)(v46 + 36) = v40;
        *(_DWORD*)(v46 + 40) = v41;
        *(_QWORD*)(v46 + 64) = v37;
        *(float*)(v46 + 72) = v25;
        *(float32x4_t*)v46 = v80;
        *(_OWORD*)(v46 + 16) = v78;
        v19 = v45 + v43 + 80 * (v43 / -80);
        if (v27 != v20) {
          v47 = v27;
          v48 = v45 + v43 + 80 * (v43 / -80);
          do {
            *(_QWORD*)(v48 + 8) = *(_QWORD*)(v47 + 8);
            *(_QWORD*)v48 = *(_QWORD*)v47;
            *(_QWORD*)(v48 + 24) = *(_QWORD*)(v47 + 24);
            *(_QWORD*)(v48 + 16) = *(_QWORD*)(v47 + 16);
            *(_QWORD*)(v48 + 40) = *(_QWORD*)(v47 + 40);
            v50 = *(_QWORD*)(v47 + 56);
            v49 = *(_QWORD*)(v47 + 64);
            v51 = *(_QWORD*)(v47 + 48);
            *(_DWORD*)(v48 + 72) = *(_DWORD*)(v47 + 72);
            *(_QWORD*)(v48 + 56) = v50;
            *(_QWORD*)(v48 + 64) = v49;
            *(_QWORD*)(v48 + 48) = v51;
            v52 = *(_QWORD*)(v47 + 32);
            v47 += 80;
            *(_QWORD*)(v48 + 32) = v52;
            v48 += 80;
          } while (v47 != v20);
        }
        v10 = v77;
        v18 = v82;
        v20 = v46 + 80;
        v84 = v45 + 16 * v85;
        if (v27 != 0) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v27);
        }
        goto LABEL_11;
      }
      *(_DWORD*)(v20 + 40) = v41;
      v18 = v82;
      *(float32x4_t*)v20 = v34;
      *(_OWORD*)(v20 + 16) = v35;
      *(_DWORD*)(v20 + 32) = v38;
      *(_DWORD*)(v20 + 36) = v40;
      *(_QWORD*)(v20 + 48) = v42;
      *(_QWORD*)(v20 + 56) = v29;
      v19 = v27;
      v10 = v33;
      *(_QWORD*)(v20 + 64) = v37;
    }
    *(float*)(v20 + 72) = v25;
    v20 += 80LL;
  LABEL_11:
    v17 += 8;
    if (v17 == v18) {
      v17 = v75;
      *((_QWORD*)v76 + 2) = v84;
      *(_QWORD*)v76 = v19;
      *((_QWORD*)v76 + 1) = v20;
      v76[24] = 1;
      goto LABEL_57;
    }
  }
  v17 = v75;
  *v76 = 0;
  v76[24] = 0;
  if (v19 != 0) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v72,
                                  v19);
  }
LABEL_57:
  if (v17 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v73,
                                  v17);
  }
}

#pragma GCC visibility pop
