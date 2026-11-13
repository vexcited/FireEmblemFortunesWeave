#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 TroopMgr_13460a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_21206b8[])();
extern __int64 (*game_gmap_GmapTargetLine_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c790;
_QWORD* GmapTargetLine_Destructor_alt1(_QWORD* result) __asm__(
    "GmapTargetLine_Destructor");
bool GmapTargetLine_Unknown2(__int64 a1);
__int64 GmapTargetLine_Unknown5(__int64 result);
__int64
GmapTargetLine_Unknown6_alt1(__int64 result) __asm__("GmapTargetLine_Unknown6");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_19b0930(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_gmap_GmapTargetLine_Impl_TryAdd_closure_Invoke_alt1(
    __int64 result,
    _QWORD* a2) __asm__("game_gmap_GmapTargetLine_Impl_TryAdd_closure_Invoke");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapTargetLine_Unknown6(__int64 a1);
extern __int64* GameData_2130e00;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 GmapTargetLine_Unknown3(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_19b0930_alt1() __asm__("GameRoutine_19b0930");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void GmapTargetLine_Destructor(_QWORD* a1);
void game_gmap_GmapTargetLine_Impl_TryAdd_closure_Invoke(__int64 a1,
                                                         _QWORD* a2);
_QWORD* PrimitiveDrawManager_19935e0(_QWORD*, __int64, __int64, unsigned int);
__attribute__((swiftcall)) void game_gmap_13408e0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64* GameRoutine_1993840(__int64);
__int64* PrimitiveDrawManager_1994180(__int64* result);
extern _UNKNOWN* GameData_212ea30;
extern _UNKNOWN GameData_21a60e8;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int64 GameData_21a60e0;
extern __int64 game_map_MapColorPalette_g_texture_archives;
float powf(float, float);
float sinf(float);
float32x4_t* GameRoutine_1994460(float32x4_t* result);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
__int64* GmapTargetLine_Unknown4(__int64* result);

void GmapTargetLine_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[1];
  *a1 = game_gmap_GmapTargetLine_vtable;
  if (v1 != 0) {
    v2 = *(__int64**)v1;
    v3 = *(__int64**)(v1 + 8);
    if (*(__int64**)v1 != v3) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        if (*v2 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v6, *v2);
        }
        ++v2;
      } while (v2 != v3);
      v2 = *(__int64**)v1;
    }
    *(_QWORD*)(v1 + 8) = v2;
    if (v2 != nullptr) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (__int64)v2);
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v1);
    a1[1] = 0;
  }
}

bool GmapTargetLine_Unknown2(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) != **(_QWORD**)(a1 + 8);
}

__int64 GmapTargetLine_Unknown3(__int64 result)
{
  float*** v1;
  float** v2;
  float** v3;
  __int64* v4;
  __int64 v5;
  float* v6;

  v1 = *(float****)(result + 8);
  v2 = *v1;
  v3 = v1[1];
  if (v2 != v3) {
    v4 = GameData_2130e00;
    v5 = game_script_hub_g_frame_counter_ptr[0];
    do {
      v6 = *v2++;
      *v6 = *v6 + (float)(*(float*)(*v4 + 596) *
                          (float)((float)(*(float*)(*(_QWORD*)v5 + 160LL) *
                                          0x1.0aef000000000p+4f) /
                                  0x1.f400000000000p+9f));
    } while (v2 != v3);
  }
  return result;
}

__int64* GmapTargetLine_Unknown4(__int64* result)
{
  __int64** v1;
  __int64*** v2;
  __int64** v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64***** v7;
  __int64**** v8;
  __int64*** v9;
  __int64** v10;
  __int64* v11;
  __int64 v12;
  float32x4_t* v13;
  __int64* v14;
  float v15;
  __int64* v16;
  float v17;
  __int64 v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  unsigned int v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  unsigned __int8 explicit;
  float v55;
  float v56;
  bool v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float32x4_t v65;
  __int128 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  float32x4_t v73;
  float32x4_t v74;
  float v75;
  float v76;
  float v77;
  float32x4_t v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  float v82;
  __int64 v83;
  int v84;
  int v85;
  float32x4_t v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  float v91;
  float v92;
  __int64 v93;
  int v94;
  int v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  float v102;
  float32x4_t v103;
  __int64 v104;
  int v105;
  int v106;
  float32x4_t v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  float v111;
  float32x4_t v112;
  __int64 v113;
  __int64 v114;
  int v115;
  int v116;
  float32x4_t v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  float v121;
  __int64 v122;
  int v123;
  int v124;
  float32x4_t v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  float v129;
  float32x4_t v130;
  __int64 v131;
  int v132;
  int v133;
  float32x4_t v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  float v138;
  __int64 v139;
  int v140;
  int v141;
  float32x4_t v142;
  __int64 v143;
  __int64 v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  unsigned int v155;
  __int64 v156;
  float32x4_t* v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  __int64 v165;
  unsigned __int8 v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  int v180;
  int v181;
  float32x4_t v182;
  float32x4_t v183;
  float v184;
  float v185;
  float v186;
  __int128 v187;
  float32x4_t v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  float v192;
  __int64 v193;
  int v194;
  int v195;
  float32x4_t v196;
  __int64 v197;
  __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  float v201;
  float v202;
  __int64 v203;
  int v204;
  int v205;
  float32x4_t v206;
  float32x4_t v207;
  float32x4_t v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  float v212;
  float32x4_t v213;
  __int64 v214;
  int v215;
  int v216;
  float32x4_t v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  float v221;
  float32x4_t v222;
  __int64 v223;
  __int64 v224;
  int v225;
  int v226;
  float32x4_t v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  float v231;
  __int64 v232;
  int v233;
  int v234;
  float32x4_t v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  float v239;
  float32x4_t v240;
  __int64 v241;
  int v242;
  int v243;
  float32x4_t v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  float v248;
  __int64 v249;
  int v250;
  int v251;
  float32x4_t v252;
  __int64 v253;
  __int64 v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  float v265;
  float v266;
  float v267;
  float v268;
  float v269;
  float v270;
  float v271;
  float v272;
  float v273;
  float v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int v279;
  float v280;
  float v281;
  float v282;
  float v283;
  float v284;
  float v285;
  float v286;
  float v287;
  float v288;
  float v289;
  float v290;
  float v291;
  float v292;
  float v293;
  float v294;
  float v295;
  float v296;
  float v297;
  float v298;
  float v299;
  __int64* v300;
  float32x4_t v301;
  float v302;
  float v303;
  float v304;
  float v305;
  float v306;
  float v307;
  float v308;
  float v309;
  float v310;
  float v311;
  __int64* v312;
  float32x4_t v313;
  float32x4_t v314;
  float32x4_t v315;
  float32x4_t v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  float v322;
  float v323;
  float32x4_t v324;
  float32x4_t v325;
  float32x4_t v326;
  float32x4_t v327;
  float v328;
  float v329;
  float32x4_t v330;
  float32x4_t v331;
  float32x4_t v332;
  float32x4_t v333;
  float v334;
  float32x4_t v335;
  float32x4_t v336;
  float32x4_t v337;
  float32x4_t v338;
  float32x4_t v339;
  float v340;
  float32x4_t v341;
  float32x4_t v342;
  float32x4_t v343;
  float32x4_t v344;
  float32x4_t v345;
  float v346;
  __int128 v347;
  __int128 v348;
  __int128 v349;
  __int128 v350;
  __int128 v351;
  float v352;
  __int128 v353;
  __int128 v354;
  __int128 v355;
  __int128 v356;
  __int128 v357;
  float v358;
  int8x16_t v359;
  int32x4_t v360;
  float32x4_t v361;
  float32x4_t v362;
  float32x4_t v363;
  float32x4_t v364;
  float32x4_t v365;
  int32x4_t v366;
  float32x4_t v367;
  float32x4_t v368;
  float32x4_t v369;
  float32x4_t v370;
  float32x4_t v371;
  int8x16_t v372;
  float32x4_t v373;
  float32x4_t v374[2];

  v1 = (__int64**)result[1];
  if (v1[1] != *v1) {
    GameRoutine_1993840(
        **(_QWORD**)game_map_MapColorPalette_g_texture_archives);
    v2 = **(__int64*****)game_map_MapColorPalette_g_texture_archives;
    *((_DWORD*)v2 + 4330) = 0;
    v3 = *v2;
    *((_DWORD*)v3 + 4351) = 2;
    v4 = *v3;
    *((_OWORD*)v4 + 1090) = GameData_1a82dd0;
    v5 = *v4;
    v6 = *(_QWORD**)v5;
    *(_DWORD*)(v5 + 17332) = 0;
    v7 = (__int64*****)*PrimitiveDrawManager_19935e0(v6, (__int64)"MapTarget",
                                                     9, 0);
    *((_BYTE*)v7 + 17395) = 1;
    v8 = *v7;
    *((_BYTE*)v8 + 17394) = 0;
    v9 = *v8;
    *((_BYTE*)v9 + 17393) = 1;
    v10 = *v9;
    *((_BYTE*)v10 + 17397) = 1;
    v11 = *v10;
    *((_DWORD*)v11 + 4327) = 1;
    v12 = *v11;
    v13 = *(float32x4_t**)v12;
    *(_DWORD*)(v12 + 17296) = 0;
    GameRoutine_1994460(v13);
    v14 = *v1;
    v300 = v1[1];
    if (*v1 != v300) {
      v15 = 0x1.4000000000000p+2f;
      v16 = GameData_2130e00;
      v17 = *(float*)GameData_212ea30;
      do {
        v18 = *v14;
        game_gmap_13408e0((void*)(v374), *(_QWORD*)(*v14 + 8));
        game_gmap_13408e0((void*)(&v373), *(_QWORD*)(v18 + 16));
        v19 = vsubq_f32(v373, v374[0]);
        v20 = vmulq_f32(v19, v19);
        LANES128(v20).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_u64[0];
        LANES128(v20).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v20).n128_f32[0] != 0x0.0p+0f) {
          LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
          v312 = v14;
          v21 = vrsqrteq_f32(v20);
          v22 = vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v20, v21)));
          v23 = vbicq_s8(
              vmulq_f32(v19,
                        vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v20, v22)))),
              vceqzq_f32(v20));
          LANES128(v24).n128_u64[0] = 0x3F0000003F000000LL;
          LANES128(v24).n128_u64[1] = 0x3F0000003F000000LL;
          v25 = vmulq_n_f32(v23, *(float*)(*v16 + 604));
          LANES128(v23).n128_u32[1] = 0;
          v373 = vsubq_f32(v373, v25);
          v374[0] = vaddq_f32(v374[0], vmulq_f32(v25, v24));
          v26 = vsubq_f32(v374[0], v373);
          v27 = vmulq_f32(v26, v26);
          LANES128(v27).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                  .n64_u64[0];
          v28 = fminf(
              fmaxf(0x1.0000000000000p-2f *
                        LANES64_OF(vsqrt_f32(vpadd_f32(
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v27).n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v27).n128_u64[0]))))
                            .n64_f32[0],
                    0x1.4000000000000p+0f),
              v15);
          v29 = vmulq_f32(v23, v23);
          LANES128(v29).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v29).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
          v30 = vrsqrteq_f32(v29);
          v31 = vmulq_f32(v30, vrsqrtsq_f32(v30, vmulq_f32(v29, v30)));
          v359 = vbicq_s8(
              vmulq_f32(v23,
                        vmulq_f32(v31, vrsqrtsq_f32(v31, vmulq_f32(v29, v31)))),
              vceqzq_f32(v29));
          math_Quat_FromYawPitchRoll((void*)(&v372), 0x1.921fb60000000p+0f,
                                     0x0.0p+0f, 0x0.0p+0f);
          v32 = 1;
          v33 = vmulq_f32(v372, COERCE_AS(float32x4_t, GameData_1a829d0));
          LANES128(v34).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v359, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v35).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v359, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v36).n128_u64[0] = LANES128(v359).n128_u64[0];
          v358 = v28;
          LANES128(v37).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v34).n128_u64[1] = LANES128(v34).n128_u64[0];
          LANES128(v36).n128_u64[1] = LANES128(v35).n128_u64[0];
          *(int8x8_t*)&LANES128(v37).n128_i8[8] =
              vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          LANES128(v38).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v39 = vmlaq_f32(vmulq_f32(v33, v34),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v36, v37));
          LANES128(v37).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v359, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int32x2_t*)&LANES128(v38).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v33).n128_u64[0]), 1);
          LANES128(v35).n128_u64[1] = LANES128(v37).n128_u64[0];
          LANES128(v37).n128_u64[1] = LANES128(v359).n128_u64[0];
          v40 = vmulq_f32(v37, v38);
          LANES128(v38).n128_u64[0] = LANES128(v372).n128_u64[0];
          v41 = vmlaq_f32(v39, COERCE_AS(float32x4_t, GameData_1a83800), v40);
          LANES128(v40).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v40).n128_i8[8] =
              vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          LANES128(v33).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v372, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v33).n128_u64[1] = LANES128(v33).n128_u64[0];
          v42 = vmlsq_f32(v41, v40, v35);
          v43 = vmulq_f32(v33, v42);
          LANES128(v33).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v372, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v35).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v38).n128_u64[1] = LANES128(v33).n128_u64[0];
          *(int8x8_t*)&LANES128(v35).n128_i8[8] =
              vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          LANES128(v40).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v44 = vmlaq_f32(v43, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v38, v35));
          LANES128(v35).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v372, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int32x2_t*)&LANES128(v40).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v42).n128_u64[0]), 1);
          LANES128(v33).n128_u64[1] = LANES128(v35).n128_u64[0];
          LANES128(v35).n128_u64[1] = LANES128(v372).n128_u64[0];
          LANES128(v45).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v45).n128_i8[8] =
              vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          v46 =
              vmlsq_f32(vmlaq_f32(v44, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v35, v40)),
                        v45, v33);
          LANES128(v45).n128_u32[0] = *(_DWORD*)(*v16 + 600);
          LANES128(v46).n128_u32[3] = 0;
          v301 = v46;
          v313 = vmulq_n_f32(v46, LANES128(v45).n128_f32[0]);
          v315 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83610),
                             LANES128(v45).n128_f32[0]);
          do {
            v47 = (float)(v32 - 1) / 0x1.8000000000000p+4f;
            v48 = (float)v32 / 0x1.8000000000000p+4f;
            v49 = sinf(v47 * 0x1.921fb60000000p+1f);
            v50 = powf(fabsf(v49), 0x1.99999a0000000p-1f);
            v328 = powf(v47, 0x1.3333340000000p+0f);
            v324 = v373;
            v326 = v374[0];
            v51 = sinf(v48 * 0x1.921fb60000000p+1f);
            v52 = powf(fabsf(v51), 0x1.99999a0000000p-1f);
            v334 = powf(v48, 0x1.3333340000000p+0f);
            v330 = v373;
            v332 = v374[0];
            v360 = *(int32x4_t*)(*v16 + 608);
            v346 = powf(LANES128(v360).n128_f32[0], v17);
            v322 = powf(LANES128(v360).n128_f32[1], v17);
            LODWORD(v53) =
                COERCE_UNSIGNED_INT(powf(LANES128(v360).n128_f32[2], v17));
            explicit =
                atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                     memory_order_acquire);
            v55 = (float)((float)(0x1.0000000000000p+0f -
                                  fabsf((float)(v47 * 0x1.0000000000000p+1f) +
                                        -0x1.0000000000000p+0f)) *
                          0x1.4000000000000p+2f) /
                  0x1.8000000000000p+1f;
            if (v55 <= 0x1.0000000000000p+0f) {
              v56 = v55;
            }
            else {
              v56 = 0x1.0000000000000p+0f;
            }
            v57 = v55 < 0x0.0p+0f;
            v58 = (float)(PSEUDO_UNFUSED(v56 * 0x1.4ccccc0000000p-1f)) +
                  0x1.6666660000000p-2f;
            v59 = 0x1.0000000000000p+0f -
                  fabsf((float)(v48 * 0x1.0000000000000p+1f) +
                        -0x1.0000000000000p+0f);
            if (v57) {
              v60 = 0x1.6666660000000p-2f;
            }
            else {
              v60 = v58;
            }
            v61 = (float)(v59 * 0x1.4000000000000p+2f) / 0x1.8000000000000p+1f;
            if (v61 <= 0x1.0000000000000p+0f) {
              v62 = v61;
            }
            else {
              v62 = 0x1.0000000000000p+0f;
            }
            v63 = (float)(PSEUDO_UNFUSED(v62 * 0x1.4ccccc0000000p-1f)) +
                  0x1.6666660000000p-2f;
            if (v61 >= 0x0.0p+0f) {
              v64 = v63;
            }
            else {
              v64 = 0x1.6666660000000p-2f;
            }
            if ((explicit & 1) == 0) {
              v265 = v60;
              v280 = v64;
              v317 = v53;
              v145 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v53) = v317;
              v60 = v265;
              v64 = v280;
              if (v145 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v53) = v317;
                v60 = v265;
                v64 = v280;
              }
            }
            v65 = v313;
            *(float*)&v66 = v346;
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v266 = v60;
              v281 = v64;
              v318 = v53;
              v146 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v53) = v318;
              v60 = v266;
              v64 = v281;
              *(float*)&v66 = v346;
              v65 = v313;
              if (v146 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v53) = v318;
                v60 = v266;
                v64 = v281;
                *(float*)&v66 = v346;
                v65 = v313;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v267 = v60;
              v282 = v64;
              v319 = v53;
              v147 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v53) = v319;
              v60 = v267;
              v64 = v282;
              *(float*)&v66 = v346;
              v65 = v313;
              if (v147 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v53) = v319;
                v60 = v267;
                v64 = v282;
                *(float*)&v66 = v346;
                v65 = v313;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v268 = v60;
              v283 = v64;
              v320 = v53;
              v148 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v53) = v320;
              v60 = v268;
              v64 = v283;
              *(float*)&v66 = v346;
              v65 = v313;
              if (v148 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v53) = v320;
                v60 = v268;
                v64 = v283;
                *(float*)&v66 = v346;
                v65 = v313;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v269 = v60;
              v284 = v64;
              v321 = v53;
              v149 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v53) = v321;
              v60 = v269;
              v64 = v284;
              *(float*)&v66 = v346;
              v65 = v313;
              if (v149 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v53) = v321;
                v60 = v269;
                v64 = v284;
                *(float*)&v66 = v346;
                v65 = v313;
              }
            }
            v67 = game_map_MapColorPalette_g_texture_archives;
            LODWORD(v68) = 0;
            v69 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
            v70 = *(
                _QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         18736LL);
            *((float*)&v68 + 1) = v358 * v50;
            v71 = *(
                _DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         19200LL);
            v72 = *(
                _DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         17280LL);
            v73 = vaddq_f32(COERCE_AS(float32x4_t, v68),
                            vmlaq_n_f32(v326, vsubq_f32(v324, v326), v328));
            v74 = vmulq_n_f32(v65, v60);
            *((float*)&v66 + 1) = v322;
            HIDWORD(v53) = LANES64_OF(vdup_laneq_s32(v360, 3)).n64_u32[0];
            v75 = v48 - v47;
            v76 = v47 + (float)((float)(v48 - v47) * 0x0.0p+0f);
            v77 = *(float*)v18;
            *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                       19200LL) = v71 + 1;
            *((_QWORD*)&v66 + 1) = v53;
            if (v71 <= 262142) {
              v78 = vsubq_f32(v73, v74);
              v79 = *(_QWORD*)(v69 + 19136) + 40LL * (v71 + 1);
              *(_QWORD*)v79 = LANES128(v78).n128_u64[0];
              *(_DWORD*)(v79 + 20) = 0;
              *(_OWORD*)(v79 + 24) = v66;
              *(_DWORD*)(v79 + 8) = LANES128(v78).n128_u32[2];
              LANES128(v78).n128_u32[0] = 0;
              LANES128(v78).n128_f32[1] = v76 - v77;
              *(_QWORD*)(v79 + 12) = LANES128(v78).n128_u64[0];
              v80 =
                  v70 + 1440LL * v72 + 4LL * *(int*)(v70 + 1440LL * v72 + 256);
              ++*(_DWORD*)(v80 + 260);
              v67 = game_map_MapColorPalette_g_texture_archives;
            }
            v81 = *(_QWORD*)v67;
            v82 = *(float*)v18;
            v83 = *(_QWORD*)(*(_QWORD*)v67 + 18736LL);
            v84 = *(_DWORD*)(*(_QWORD*)v67 + 19200LL);
            v85 = *(_DWORD*)(*(_QWORD*)v67 + 17280LL);
            *(_DWORD*)(*(_QWORD*)v67 + 19200LL) = v84 + 1;
            if (v84 <= 262142) {
              v86 = vaddq_f32(v73, v74);
              v87 = *(_QWORD*)(v81 + 19136) + 40LL * (v84 + 1);
              *(_QWORD*)v87 = LANES128(v86).n128_u64[0];
              *(_DWORD*)(v87 + 20) = 0;
              *(_OWORD*)(v87 + 24) = v66;
              *(_DWORD*)(v87 + 8) = LANES128(v86).n128_u32[2];
              LANES128(v86).n128_u32[0] = 1065353216;
              LANES128(v86).n128_f32[1] = v76 - v82;
              *(_QWORD*)(v87 + 12) = LANES128(v86).n128_u64[0];
              v88 =
                  v83 + 1440LL * v85 + 4LL * *(int*)(v83 + 1440LL * v85 + 256);
              ++*(_DWORD*)(v88 + 260);
              v67 = game_map_MapColorPalette_g_texture_archives;
            }
            LODWORD(v89) = 0;
            v90 = *(_QWORD*)v67;
            *((float*)&v89 + 1) = v358 * v52;
            v91 = v47 + v75;
            v92 = *(float*)v18;
            v93 = *(_QWORD*)(*(_QWORD*)v67 + 18736LL);
            v94 = *(_DWORD*)(*(_QWORD*)v67 + 19200LL);
            v95 = *(_DWORD*)(*(_QWORD*)v67 + 17280LL);
            *(_DWORD*)(*(_QWORD*)v67 + 19200LL) = v94 + 1;
            v96 = vmulq_n_f32(v65, v64);
            v97 = vaddq_f32(COERCE_AS(float32x4_t, v89),
                            vmlaq_n_f32(v332, vsubq_f32(v330, v332), v334));
            if (v94 <= 262142) {
              v98 = vaddq_f32(v97, v96);
              v99 = *(_QWORD*)(v90 + 19136) + 40LL * (v94 + 1);
              *(_QWORD*)v99 = LANES128(v98).n128_u64[0];
              *(_DWORD*)(v99 + 20) = 0;
              *(_OWORD*)(v99 + 24) = v66;
              *(_DWORD*)(v99 + 8) = LANES128(v98).n128_u32[2];
              LANES128(v98).n128_u32[0] = 1065353216;
              LANES128(v98).n128_f32[1] = v91 - v92;
              *(_QWORD*)(v99 + 12) = LANES128(v98).n128_u64[0];
              v100 =
                  v93 + 1440LL * v95 + 4LL * *(int*)(v93 + 1440LL * v95 + 256);
              ++*(_DWORD*)(v100 + 260);
              v67 = game_map_MapColorPalette_g_texture_archives;
            }
            v101 = *(_QWORD*)v67;
            v102 = *(float*)v18;
            v103 = v315;
            v104 = *(_QWORD*)(v101 + 18736);
            v105 = *(_DWORD*)(v101 + 19200);
            v106 = *(_DWORD*)(v101 + 17280);
            *(_DWORD*)(v101 + 19200) = v105 + 1;
            if (v105 <= 262142) {
              v107 = vsubq_f32(v97, v96);
              v108 = *(_QWORD*)(v101 + 19136) + 40LL * (v105 + 1);
              *(_QWORD*)v108 = LANES128(v107).n128_u64[0];
              *(_DWORD*)(v108 + 20) = 0;
              *(_OWORD*)(v108 + 24) = v66;
              *(_DWORD*)(v108 + 8) = LANES128(v107).n128_u32[2];
              LANES128(v107).n128_u32[0] = 0;
              LANES128(v107).n128_f32[1] = v91 - v102;
              *(_QWORD*)(v108 + 12) = LANES128(v107).n128_u64[0];
              v109 = v104 + 1440LL * v106 +
                     4LL * *(int*)(v104 + 1440LL * v106 + 256);
              ++*(_DWORD*)(v109 + 260);
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v347 = v66;
              v270 = v60;
              v285 = v64;
              v361 = v73;
              v335 = v97;
              v150 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v97 = v335;
              v66 = v347;
              v73 = v361;
              v60 = v270;
              v64 = v285;
              v103 = v315;
              if (v150 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v97 = v335;
                v66 = v347;
                v73 = v361;
                v60 = v270;
                v64 = v285;
                v103 = v315;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v348 = v66;
              v271 = v60;
              v286 = v64;
              v362 = v73;
              v336 = v97;
              v151 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v97 = v336;
              v66 = v348;
              v73 = v362;
              v60 = v271;
              v64 = v286;
              v103 = v315;
              if (v151 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v97 = v336;
                v66 = v348;
                v73 = v362;
                v60 = v271;
                v64 = v286;
                v103 = v315;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v349 = v66;
              v272 = v60;
              v287 = v64;
              v363 = v73;
              v337 = v97;
              v152 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v97 = v337;
              v66 = v349;
              v73 = v363;
              v60 = v272;
              v64 = v287;
              v103 = v315;
              if (v152 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v97 = v337;
                v66 = v349;
                v73 = v363;
                v60 = v272;
                v64 = v287;
                v103 = v315;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v350 = v66;
              v273 = v60;
              v288 = v64;
              v364 = v73;
              v338 = v97;
              v153 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v97 = v338;
              v66 = v350;
              v73 = v364;
              v60 = v273;
              v64 = v288;
              v103 = v315;
              if (v153 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v97 = v338;
                v66 = v350;
                v73 = v364;
                v60 = v273;
                v64 = v288;
                v103 = v315;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v351 = v66;
              v274 = v60;
              v289 = v64;
              v365 = v73;
              v339 = v97;
              v154 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v97 = v339;
              v66 = v351;
              v73 = v365;
              v60 = v274;
              v64 = v289;
              v103 = v315;
              if (v154 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v97 = v339;
                v66 = v351;
                v73 = v365;
                v60 = v274;
                v64 = v289;
                v103 = v315;
              }
            }
            v110 = game_map_MapColorPalette_g_texture_archives;
            v111 = *(float*)v18;
            v112 = vmulq_n_f32(v103, v60);
            v113 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
            v114 = *(
                _QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         18736LL);
            v115 = *(
                _DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         19200LL);
            v116 = *(
                _DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         17280LL);
            *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                       19200LL) = v115 + 1;
            if (v115 <= 262142) {
              v117 = vsubq_f32(v73, v112);
              v118 = *(_QWORD*)(v113 + 19136) + 40LL * (v115 + 1);
              *(_QWORD*)v118 = LANES128(v117).n128_u64[0];
              *(_DWORD*)(v118 + 20) = 0;
              *(_OWORD*)(v118 + 24) = v66;
              *(_DWORD*)(v118 + 8) = LANES128(v117).n128_u32[2];
              LANES128(v117).n128_u32[0] = 0;
              LANES128(v117).n128_f32[1] = v76 - v111;
              *(_QWORD*)(v118 + 12) = LANES128(v117).n128_u64[0];
              v119 = v114 + 1440LL * v116 +
                     4LL * *(int*)(v114 + 1440LL * v116 + 256);
              ++*(_DWORD*)(v119 + 260);
              v110 = game_map_MapColorPalette_g_texture_archives;
            }
            v120 = *(_QWORD*)v110;
            v121 = *(float*)v18;
            v122 = *(_QWORD*)(*(_QWORD*)v110 + 18736LL);
            v123 = *(_DWORD*)(*(_QWORD*)v110 + 19200LL);
            v124 = *(_DWORD*)(*(_QWORD*)v110 + 17280LL);
            *(_DWORD*)(*(_QWORD*)v110 + 19200LL) = v123 + 1;
            if (v123 <= 262142) {
              v125 = vaddq_f32(v73, v112);
              v126 = *(_QWORD*)(v120 + 19136) + 40LL * (v123 + 1);
              *(_QWORD*)v126 = LANES128(v125).n128_u64[0];
              *(_DWORD*)(v126 + 20) = 0;
              *(_OWORD*)(v126 + 24) = v66;
              *(_DWORD*)(v126 + 8) = LANES128(v125).n128_u32[2];
              LANES128(v125).n128_u32[0] = 1065353216;
              LANES128(v125).n128_f32[1] = v76 - v121;
              *(_QWORD*)(v126 + 12) = LANES128(v125).n128_u64[0];
              v127 = v122 + 1440LL * v124 +
                     4LL * *(int*)(v122 + 1440LL * v124 + 256);
              ++*(_DWORD*)(v127 + 260);
              v110 = game_map_MapColorPalette_g_texture_archives;
            }
            v128 = *(_QWORD*)v110;
            v129 = *(float*)v18;
            v130 = vmulq_n_f32(v103, v64);
            v131 = *(_QWORD*)(*(_QWORD*)v110 + 18736LL);
            v132 = *(_DWORD*)(*(_QWORD*)v110 + 19200LL);
            v133 = *(_DWORD*)(*(_QWORD*)v110 + 17280LL);
            *(_DWORD*)(*(_QWORD*)v110 + 19200LL) = v132 + 1;
            if (v132 <= 262142) {
              v134 = vaddq_f32(v97, v130);
              v135 = *(_QWORD*)(v128 + 19136) + 40LL * (v132 + 1);
              *(_QWORD*)v135 = LANES128(v134).n128_u64[0];
              *(_DWORD*)(v135 + 20) = 0;
              *(_OWORD*)(v135 + 24) = v66;
              *(_DWORD*)(v135 + 8) = LANES128(v134).n128_u32[2];
              LANES128(v134).n128_u32[0] = 1065353216;
              LANES128(v134).n128_f32[1] = v91 - v129;
              *(_QWORD*)(v135 + 12) = LANES128(v134).n128_u64[0];
              v136 = v131 + 1440LL * v133 +
                     4LL * *(int*)(v131 + 1440LL * v133 + 256);
              ++*(_DWORD*)(v136 + 260);
              v110 = game_map_MapColorPalette_g_texture_archives;
            }
            v137 = *(_QWORD*)v110;
            v138 = *(float*)v18;
            v139 = *(_QWORD*)(v137 + 18736);
            v140 = *(_DWORD*)(v137 + 19200);
            v141 = *(_DWORD*)(v137 + 17280);
            *(_DWORD*)(v137 + 19200) = v140 + 1;
            if (v140 <= 262142) {
              v142 = vsubq_f32(v97, v130);
              v143 = *(_QWORD*)(v137 + 19136) + 40LL * (v140 + 1);
              *(_QWORD*)v143 = LANES128(v142).n128_u64[0];
              *(_DWORD*)(v143 + 20) = 0;
              *(_OWORD*)(v143 + 24) = v66;
              *(_DWORD*)(v143 + 8) = LANES128(v142).n128_u32[2];
              LANES128(v142).n128_u32[0] = 0;
              LANES128(v142).n128_f32[1] = v91 - v138;
              *(_QWORD*)(v143 + 12) = LANES128(v142).n128_u64[0];
              v144 = v139 + 1440LL * v141 +
                     4LL * *(int*)(v139 + 1440LL * v141 + 256);
              ++*(_DWORD*)(v144 + 260);
            }
            ++v32;
          } while (v32 != 25);
          GameRoutine_1993840(
              **(_QWORD**)game_map_MapColorPalette_g_texture_archives);
          v155 = 1;
          v156 = **(_QWORD**)game_map_MapColorPalette_g_texture_archives;
          v157 = *(float32x4_t**)v156;
          *(_DWORD*)(v156 + 17296) = 1;
          GameRoutine_1994460(v157);
          v158 = *(float*)(*v16 + 600);
          v314 = vmulq_n_f32(v301, v158);
          v316 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83610), v158);
          do {
            v159 = (float)(v155 - 1) / 0x1.8000000000000p+4f;
            v160 = (float)v155 / 0x1.8000000000000p+4f;
            v161 = sinf(v159 * 0x1.921fb60000000p+1f);
            v162 = powf(fabsf(v161), 0x1.99999a0000000p-1f);
            v329 = powf(v159, 0x1.3333340000000p+0f);
            v325 = v373;
            v327 = v374[0];
            v163 = sinf(v160 * 0x1.921fb60000000p+1f);
            v164 = powf(fabsf(v163), 0x1.99999a0000000p-1f);
            v340 = powf(v160, 0x1.3333340000000p+0f);
            v331 = v373;
            v333 = v374[0];
            v366 = *(int32x4_t*)(*v16 + 608);
            v352 = powf(LANES128(v366).n128_f32[0], v17);
            v323 = powf(LANES128(v366).n128_f32[1], v17);
            LODWORD(v165) =
                COERCE_UNSIGNED_INT(powf(LANES128(v366).n128_f32[2], v17));
            v166 =
                atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                     memory_order_acquire);
            v15 = 0x1.4000000000000p+2f;
            v167 = (float)((float)(0x1.0000000000000p+0f -
                                   fabsf((float)(v159 * 0x1.0000000000000p+1f) +
                                         -0x1.0000000000000p+0f)) *
                           0x1.4000000000000p+2f) /
                   0x1.8000000000000p+1f;
            if (v167 <= 0x1.0000000000000p+0f) {
              v168 = v167;
            }
            else {
              v168 = 0x1.0000000000000p+0f;
            }
            v57 = v167 < 0x0.0p+0f;
            v169 = (float)(PSEUDO_UNFUSED(v168 * 0x1.4ccccc0000000p-1f)) +
                   0x1.6666660000000p-2f;
            v170 = 0x1.0000000000000p+0f -
                   fabsf((float)(v160 * 0x1.0000000000000p+1f) +
                         -0x1.0000000000000p+0f);
            if (v57) {
              v171 = 0x1.6666660000000p-2f;
            }
            else {
              v171 = v169;
            }
            v172 =
                (float)(v170 * 0x1.4000000000000p+2f) / 0x1.8000000000000p+1f;
            if (v172 <= 0x1.0000000000000p+0f) {
              v173 = v172;
            }
            else {
              v173 = 0x1.0000000000000p+0f;
            }
            v174 = (float)(PSEUDO_UNFUSED(v173 * 0x1.4ccccc0000000p-1f)) +
                   0x1.6666660000000p-2f;
            if (v172 >= 0x0.0p+0f) {
              v175 = v174;
            }
            else {
              v175 = 0x1.6666660000000p-2f;
            }
            if ((v166 & 1) == 0) {
              v302 = v175;
              v275 = v165;
              v290 = v171;
              v255 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v165) = v275;
              v171 = v290;
              v175 = v302;
              if (v255 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v165) = v275;
                v171 = v290;
                v175 = v302;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v303 = v175;
              v276 = v165;
              v291 = v171;
              v256 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v165) = v276;
              v171 = v291;
              v175 = v303;
              if (v256 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v165) = v276;
                v171 = v291;
                v175 = v303;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v304 = v175;
              v277 = v165;
              v292 = v171;
              v257 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v165) = v277;
              v171 = v292;
              v175 = v304;
              if (v257 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v165) = v277;
                v171 = v292;
                v175 = v304;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v305 = v175;
              v278 = v165;
              v293 = v171;
              v258 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v165) = v278;
              v171 = v293;
              v175 = v305;
              if (v258 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v165) = v278;
                v171 = v293;
                v175 = v305;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v306 = v175;
              v279 = v165;
              v294 = v171;
              v259 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              LODWORD(v165) = v279;
              v171 = v294;
              v175 = v306;
              if (v259 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                LODWORD(v165) = v279;
                v171 = v294;
                v175 = v306;
              }
            }
            LODWORD(v176) = 0;
            *(_QWORD*)&v187 = __PAIR64__(LODWORD(v323), LODWORD(v352));
            v177 = game_map_MapColorPalette_g_texture_archives;
            v178 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
            *((float*)&v176 + 1) = v358 * v162;
            v179 = *(
                _QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         18736LL);
            v180 = *(
                _DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         19200LL);
            v181 = *(
                _DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         17280LL);
            v182 = vaddq_f32(COERCE_AS(float32x4_t, v176),
                             vmlaq_n_f32(v327, vsubq_f32(v325, v327), v329));
            v183 = vmulq_n_f32(v314, v171);
            HIDWORD(v165) = LANES64_OF(vdup_laneq_s32(v366, 3)).n64_u32[0];
            v184 = v160 - v159;
            v185 = v159 + (float)((float)(v160 - v159) * 0x0.0p+0f);
            v186 = *(float*)v18;
            *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                       19200LL) = v180 + 1;
            *((_QWORD*)&v187 + 1) = v165;
            if (v180 <= 262142) {
              v188 = vsubq_f32(v182, v183);
              v189 = *(_QWORD*)(v178 + 19136) + 40LL * (v180 + 1);
              *(_QWORD*)v189 = LANES128(v188).n128_u64[0];
              *(_DWORD*)(v189 + 20) = 0;
              *(_OWORD*)(v189 + 24) = v187;
              *(_DWORD*)(v189 + 8) = LANES128(v188).n128_u32[2];
              LANES128(v188).n128_u32[0] = 0;
              LANES128(v188).n128_f32[1] = v185 - v186;
              *(_QWORD*)(v189 + 12) = LANES128(v188).n128_u64[0];
              v190 = v179 + 1440LL * v181 +
                     4LL * *(int*)(v179 + 1440LL * v181 + 256);
              ++*(_DWORD*)(v190 + 260);
              v177 = game_map_MapColorPalette_g_texture_archives;
            }
            v191 = *(_QWORD*)v177;
            v192 = *(float*)v18;
            v193 = *(_QWORD*)(*(_QWORD*)v177 + 18736LL);
            v194 = *(_DWORD*)(*(_QWORD*)v177 + 19200LL);
            v195 = *(_DWORD*)(*(_QWORD*)v177 + 17280LL);
            *(_DWORD*)(*(_QWORD*)v177 + 19200LL) = v194 + 1;
            if (v194 <= 262142) {
              v196 = vaddq_f32(v182, v183);
              v197 = *(_QWORD*)(v191 + 19136) + 40LL * (v194 + 1);
              *(_QWORD*)v197 = LANES128(v196).n128_u64[0];
              *(_DWORD*)(v197 + 20) = 0;
              *(_OWORD*)(v197 + 24) = v187;
              *(_DWORD*)(v197 + 8) = LANES128(v196).n128_u32[2];
              LANES128(v196).n128_u32[0] = 1065353216;
              LANES128(v196).n128_f32[1] = v185 - v192;
              *(_QWORD*)(v197 + 12) = LANES128(v196).n128_u64[0];
              v198 = v193 + 1440LL * v195 +
                     4LL * *(int*)(v193 + 1440LL * v195 + 256);
              ++*(_DWORD*)(v198 + 260);
              v177 = game_map_MapColorPalette_g_texture_archives;
            }
            LODWORD(v199) = 0;
            v200 = *(_QWORD*)v177;
            *((float*)&v199 + 1) = v358 * v164;
            v201 = v159 + v184;
            v202 = *(float*)v18;
            v203 = *(_QWORD*)(*(_QWORD*)v177 + 18736LL);
            v204 = *(_DWORD*)(*(_QWORD*)v177 + 19200LL);
            v205 = *(_DWORD*)(*(_QWORD*)v177 + 17280LL);
            *(_DWORD*)(*(_QWORD*)v177 + 19200LL) = v204 + 1;
            v206 = vmulq_n_f32(v314, v175);
            v207 = vaddq_f32(COERCE_AS(float32x4_t, v199),
                             vmlaq_n_f32(v333, vsubq_f32(v331, v333), v340));
            if (v204 <= 262142) {
              v208 = vaddq_f32(v207, v206);
              v209 = *(_QWORD*)(v200 + 19136) + 40LL * (v204 + 1);
              *(_QWORD*)v209 = LANES128(v208).n128_u64[0];
              *(_DWORD*)(v209 + 20) = 0;
              *(_OWORD*)(v209 + 24) = v187;
              *(_DWORD*)(v209 + 8) = LANES128(v208).n128_u32[2];
              LANES128(v208).n128_u32[0] = 1065353216;
              LANES128(v208).n128_f32[1] = v201 - v202;
              *(_QWORD*)(v209 + 12) = LANES128(v208).n128_u64[0];
              v210 = v203 + 1440LL * v205 +
                     4LL * *(int*)(v203 + 1440LL * v205 + 256);
              ++*(_DWORD*)(v210 + 260);
              v177 = game_map_MapColorPalette_g_texture_archives;
            }
            v211 = *(_QWORD*)v177;
            v212 = *(float*)v18;
            v213 = v316;
            v214 = *(_QWORD*)(v211 + 18736);
            v215 = *(_DWORD*)(v211 + 19200);
            v216 = *(_DWORD*)(v211 + 17280);
            *(_DWORD*)(v211 + 19200) = v215 + 1;
            if (v215 <= 262142) {
              v217 = vsubq_f32(v207, v206);
              v218 = *(_QWORD*)(v211 + 19136) + 40LL * (v215 + 1);
              *(_QWORD*)v218 = LANES128(v217).n128_u64[0];
              *(_DWORD*)(v218 + 20) = 0;
              *(_OWORD*)(v218 + 24) = v187;
              *(_DWORD*)(v218 + 8) = LANES128(v217).n128_u32[2];
              LANES128(v217).n128_u32[0] = 0;
              LANES128(v217).n128_f32[1] = v201 - v212;
              *(_QWORD*)(v218 + 12) = LANES128(v217).n128_u64[0];
              v219 = v214 + 1440LL * v216 +
                     4LL * *(int*)(v214 + 1440LL * v216 + 256);
              ++*(_DWORD*)(v219 + 260);
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v353 = v187;
              v307 = v175;
              v295 = v171;
              v367 = v182;
              v341 = v207;
              v260 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v207 = v341;
              v187 = v353;
              v182 = v367;
              v171 = v295;
              v175 = v307;
              v213 = v316;
              if (v260 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v207 = v341;
                v187 = v353;
                v182 = v367;
                v171 = v295;
                v175 = v307;
                v213 = v316;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v354 = v187;
              v308 = v175;
              v296 = v171;
              v368 = v182;
              v342 = v207;
              v261 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v207 = v342;
              v187 = v354;
              v182 = v368;
              v171 = v296;
              v175 = v308;
              v213 = v316;
              if (v261 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v207 = v342;
                v187 = v354;
                v182 = v368;
                v171 = v296;
                v175 = v308;
                v213 = v316;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v355 = v187;
              v309 = v175;
              v297 = v171;
              v369 = v182;
              v343 = v207;
              v262 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v207 = v343;
              v187 = v355;
              v182 = v369;
              v171 = v297;
              v175 = v309;
              v213 = v316;
              if (v262 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v207 = v343;
                v187 = v355;
                v182 = v369;
                v171 = v297;
                v175 = v309;
                v213 = v316;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v356 = v187;
              v310 = v175;
              v298 = v171;
              v370 = v182;
              v344 = v207;
              v263 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v207 = v344;
              v187 = v356;
              v182 = v370;
              v171 = v298;
              v175 = v310;
              v213 = v316;
              if (v263 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v207 = v344;
                v187 = v356;
                v182 = v370;
                v171 = v298;
                v175 = v310;
                v213 = v316;
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v357 = v187;
              v311 = v175;
              v299 = v171;
              v371 = v182;
              v345 = v207;
              v264 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
              v207 = v345;
              v187 = v357;
              v182 = v371;
              v171 = v299;
              v175 = v311;
              v213 = v316;
              if (v264 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release((__int64)&GameData_21a60e8);
                v207 = v345;
                v187 = v357;
                v182 = v371;
                v171 = v299;
                v175 = v311;
                v213 = v316;
              }
            }
            v220 = game_map_MapColorPalette_g_texture_archives;
            v221 = *(float*)v18;
            v222 = vmulq_n_f32(v213, v171);
            v223 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
            v224 = *(
                _QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         18736LL);
            v225 = *(
                _DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         19200LL);
            v226 = *(
                _DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         17280LL);
            *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                       19200LL) = v225 + 1;
            if (v225 <= 262142) {
              v227 = vsubq_f32(v182, v222);
              v228 = *(_QWORD*)(v223 + 19136) + 40LL * (v225 + 1);
              *(_QWORD*)v228 = LANES128(v227).n128_u64[0];
              *(_DWORD*)(v228 + 20) = 0;
              *(_OWORD*)(v228 + 24) = v187;
              *(_DWORD*)(v228 + 8) = LANES128(v227).n128_u32[2];
              LANES128(v227).n128_u32[0] = 0;
              LANES128(v227).n128_f32[1] = v185 - v221;
              *(_QWORD*)(v228 + 12) = LANES128(v227).n128_u64[0];
              v229 = v224 + 1440LL * v226 +
                     4LL * *(int*)(v224 + 1440LL * v226 + 256);
              ++*(_DWORD*)(v229 + 260);
              v220 = game_map_MapColorPalette_g_texture_archives;
            }
            v230 = *(_QWORD*)v220;
            v231 = *(float*)v18;
            v232 = *(_QWORD*)(*(_QWORD*)v220 + 18736LL);
            v233 = *(_DWORD*)(*(_QWORD*)v220 + 19200LL);
            v234 = *(_DWORD*)(*(_QWORD*)v220 + 17280LL);
            *(_DWORD*)(*(_QWORD*)v220 + 19200LL) = v233 + 1;
            if (v233 <= 262142) {
              v235 = vaddq_f32(v182, v222);
              v236 = *(_QWORD*)(v230 + 19136) + 40LL * (v233 + 1);
              *(_QWORD*)v236 = LANES128(v235).n128_u64[0];
              *(_DWORD*)(v236 + 20) = 0;
              *(_OWORD*)(v236 + 24) = v187;
              *(_DWORD*)(v236 + 8) = LANES128(v235).n128_u32[2];
              LANES128(v235).n128_u32[0] = 1065353216;
              LANES128(v235).n128_f32[1] = v185 - v231;
              *(_QWORD*)(v236 + 12) = LANES128(v235).n128_u64[0];
              v237 = v232 + 1440LL * v234 +
                     4LL * *(int*)(v232 + 1440LL * v234 + 256);
              ++*(_DWORD*)(v237 + 260);
              v220 = game_map_MapColorPalette_g_texture_archives;
            }
            v238 = *(_QWORD*)v220;
            v239 = *(float*)v18;
            v240 = vmulq_n_f32(v213, v175);
            v241 = *(_QWORD*)(*(_QWORD*)v220 + 18736LL);
            v242 = *(_DWORD*)(*(_QWORD*)v220 + 19200LL);
            v243 = *(_DWORD*)(*(_QWORD*)v220 + 17280LL);
            *(_DWORD*)(*(_QWORD*)v220 + 19200LL) = v242 + 1;
            if (v242 <= 262142) {
              v244 = vaddq_f32(v207, v240);
              v245 = *(_QWORD*)(v238 + 19136) + 40LL * (v242 + 1);
              *(_QWORD*)v245 = LANES128(v244).n128_u64[0];
              *(_DWORD*)(v245 + 20) = 0;
              *(_OWORD*)(v245 + 24) = v187;
              *(_DWORD*)(v245 + 8) = LANES128(v244).n128_u32[2];
              LANES128(v244).n128_u32[0] = 1065353216;
              LANES128(v244).n128_f32[1] = v201 - v239;
              *(_QWORD*)(v245 + 12) = LANES128(v244).n128_u64[0];
              v246 = v241 + 1440LL * v243 +
                     4LL * *(int*)(v241 + 1440LL * v243 + 256);
              ++*(_DWORD*)(v246 + 260);
              v220 = game_map_MapColorPalette_g_texture_archives;
            }
            v247 = *(_QWORD*)v220;
            v248 = *(float*)v18;
            v249 = *(_QWORD*)(v247 + 18736);
            v250 = *(_DWORD*)(v247 + 19200);
            v251 = *(_DWORD*)(v247 + 17280);
            *(_DWORD*)(v247 + 19200) = v250 + 1;
            if (v250 <= 262142) {
              v252 = vsubq_f32(v207, v240);
              v253 = *(_QWORD*)(v247 + 19136) + 40LL * (v250 + 1);
              *(_QWORD*)v253 = LANES128(v252).n128_u64[0];
              *(_DWORD*)(v253 + 20) = 0;
              *(_OWORD*)(v253 + 24) = v187;
              *(_DWORD*)(v253 + 8) = LANES128(v252).n128_u32[2];
              LANES128(v252).n128_u32[0] = 0;
              LANES128(v252).n128_f32[1] = v201 - v248;
              *(_QWORD*)(v253 + 12) = LANES128(v252).n128_u64[0];
              v254 = v249 + 1440LL * v251 +
                     4LL * *(int*)(v249 + 1440LL * v251 + 256);
              ++*(_DWORD*)(v254 + 260);
            }
            ++v155;
          } while (v155 != 25);
          PrimitiveDrawManager_1994180(
              **(__int64***)game_map_MapColorPalette_g_texture_archives);
          v14 = v312;
        }
        ++v14;
      } while (v14 != v300);
    }
    return PrimitiveDrawManager_1994180(
        **(__int64***)game_map_MapColorPalette_g_texture_archives);
  }
  return result;
}

__int64 GmapTargetLine_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  char v10;

  v10 = 0;
  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  for (i = *(__int64**)(v2 + 16); v3 != i; ++v3) {
    v6 = *v3;
    v7 = *(_QWORD*)(*v3 + 96);
    if (v7 != 0 && *(_BYTE*)(v7 + 32) == 1 &&
        *(_QWORD*)(v6 + 32) != *(_QWORD*)(v6 + 24) &&
        (*(_WORD*)(v6 + 544) & 3) != 2 && (*(_BYTE*)(v6 + 546) & 0xEF) == 0) {
      v8[0] = GameData_21206b8;
      v8[1] = v1;
      v8[2] = &v10;
      v8[3] = v6;
      v9 = v8;
      TroopMgr_13460a0(v8);
      result = (__int64)v9;
      if (v9 == v8) {
        v5 = 32;
      }
      else {
        if (v9 == nullptr) {
          continue;
        }
        v5 = 40;
      }
      result = (*(__int64 (**)(void*))(*v9 + v5))(v9);
    }
  }
  return result;
}

void GmapTargetLine_Unknown6(__int64 a1)
{
  __int64** v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v1 = *(__int64***)(a1 + 8);
  v2 = *v1;
  v3 = v1[1];
  if (*v1 != v3) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v5, *v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = *v1;
  }
  v1[1] = v2;
}

void game_gmap_GmapTargetLine_Impl_TryAdd_closure_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  signed __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;

  v2 = *(_QWORD*)(a1 + 24);
  v3 = (_QWORD*)*a2;
  v4 = (__int64*)v2;
  if (*(_QWORD*)(v2 + 32) != *(_QWORD*)(v2 + 24)) {
    if ((v5 = *(_QWORD*)(v2 + 96), v6 = *(_QWORD*)(v2 + 552), (v5 | v6) == 0) ||
        v5 == 0 && (v6 != 0 ? (v7 = *(_QWORD*)(v2 + 104) == 0) : (v7 = false),
                    v7 &&
                        *(__int16*)(v2 + 642) * *(__int16*)(v2 + 640) *
                                *(__int16*)(v2 + 644) ==
                            0 &&
                        *(_QWORD*)(v6 + 352) == 0) ||
        (v4 = *(__int64**)(a1 + 24), (*(_WORD*)(v2 + 544) & 3) != 2)) {
      v4 = *(__int64**)(v2 + 24);
    }
  }
  v8 = *((_DWORD*)v3 + 135);
  v9 = *v4;
  v10 = (_QWORD*)*a2;
  v11 = (unsigned int)(v8 - 1);
  if (v8 >= 1) {
    v12 = v3[3];
    v13 = v3[4] - v12;
    v14 = (_QWORD*)(v12 + 8LL * (unsigned int)v11);
    if (v11 >= v13 >> 3) {
      v10 = (_QWORD*)*a2;
    }
    else {
      v10 = v14;
    }
  }
  if (v9 == *v10) {
    v15 = *(__int64**)(a1 + 8);
    v16 = *v15;
    v17 = v15[1];
    if (*v15 == v17) {
    LABEL_30:
      v30 = (__int64*)fw_memory_g_heap_manager_ptr;
      v31 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      *(_DWORD*)v31 = 0;
      *(_QWORD*)(v31 + 8) = v2;
      *(_QWORD*)(v31 + 16) = v3;
      v33 = (__int64*)v15[1];
      v32 = v15[2];
      if ((unsigned __int64)v33 >= v32) {
        v35 = *v15;
        v36 = (signed __int64)v33 - *v15;
        v37 = (v36 >> 3) + 1;
        if (v37 >> 61 != 0) {
          GameRoutine_19b0930_alt1();
        }
        v38 = v32 - v35;
        if (v38 >> 2 > v37) {
          v37 = v38 >> 2;
        }
        if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
          v39 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v39 = v37;
        }
        if (v39 != 0) {
          if (v39 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v40 = v31;
          v41 = fw_memory_HeapManager_Allocate_alt1(*v30, 8 * v39, 16, 0);
          v31 = v40;
        }
        else {
          v41 = 0;
        }
        v42 = v41 + 8 * v39;
        v43 = v41 + v36 - 8 * (v36 >> 3);
        *(_QWORD*)(v41 + v36) = v31;
        v34 = v41 + v36 + 8;
        memcpy_alt1(v43, v35, v36);
        *v15 = v43;
        v15[1] = v34;
        v15[2] = v42;
        if (v35 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*v30 + 200) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v30 + v44, v35);
        }
      }
      else {
        *v33 = v31;
        v34 = (__int64)(v33 + 1);
      }
      v15[1] = v34;
      **(_BYTE**)(a1 + 16) = 1;
    }
    else {
      while (1) {
        if (**(_QWORD**)(*(_QWORD*)v16 + 8LL) == *(_QWORD*)v2) {
          v18 = *(_QWORD*)(*(_QWORD*)v16 + 16LL);
          v19 = *(_DWORD*)(v18 + 540);
          v20 = __OFSUB__(v19, 1);
          v21 = (unsigned int)(v19 - 1);
          if (((v21 & 0x80000000) != 0LL) == v20) {
            v22 = *(_QWORD*)(v18 + 24);
            v23 = *(_QWORD*)(v18 + 32) - v22;
            v24 = v22 + 8LL * (unsigned int)v21;
            if (v21 < v23 >> 3) {
              v18 = v24;
            }
          }
          v25 = (_QWORD*)*a2;
          if (v8 >= 1) {
            v26 = v3[3];
            v27 = v3[4] - v26;
            v28 = (_QWORD*)(v26 + 8 * v11);
            if (v11 >= v27 >> 3) {
              v25 = (_QWORD*)*a2;
            }
            else {
              v25 = v28;
            }
          }
          if (*(_QWORD*)v18 == *v25) {
            break;
          }
        }
        v16 += 8;
        if (v16 == v17) {
          goto LABEL_30;
        }
      }
    }
  }
}

#pragma GCC visibility pop
