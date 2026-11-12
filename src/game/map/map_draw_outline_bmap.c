#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f59d40(_QWORD);
extern __int64 (*game_map_MapDrawOutlineBmap_vtable[])();
__int64 MapDrawOutlineBmap_Destructor(_QWORD* a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 MapDrawOutlineBmap_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "MapDrawOutlineBmap_DeletingDestructor");
__int64 CharacterController_d42d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_f59e80(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 MapDrawOutlineBmap_f59960(__int64 a1, __int64 a2);
void GameRoutine_f59d40_alt1(_QWORD*) __asm__("GameRoutine_f59d40");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapDrawOutlineBmap_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void game_fcb000(PSEUDO_X8, _QWORD, _QWORD);
__int64* GameRoutine_64dfe0(__int64* result, __int64*);
__int64* game_8224a0(unsigned __int8);
__int64 GameHr_fcacb0(__int64, __int64, __int64, __int64, __int64, __int16);
__int64 MapDrawConst_fcc820(__int64, float32x4_t*, float32x4_t*, __int128*,
                            unsigned __int64*, unsigned __int8);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_map_f54910(__int64);
__int64 memset(__int64, int, unsigned __int64);
extern __int64 (*game_map_OutlineBmapMeshData_vtable[])();
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d020[5];
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_221fe88;
extern char GameData_221fe8c;
extern char GameData_221fe90;
extern char GameData_221fe94;
extern char GameData_221fe98;
extern char GameData_221fe9c;
extern char GameData_221fea0;
extern char GameData_221fea4;
extern char GameData_221fea8;
extern char GameData_221feac;
extern char GameData_221feb0;
extern char GameData_221feb4;
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
long double game_map_f54d00(__int64);
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void MapDrawOutlineBmap_Unknown3(__int64 a1);

void MapDrawOutlineBmap_Unknown3(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  char* v5;
  char v6;
  char v7;
  char v8;
  char v9;
  char v10;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  _BYTE* v18;
  __int64 v19;
  int v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned int v23;
  unsigned int v24;
  char v25;
  char v26;
  unsigned int v27;
  unsigned int v28;
  __int16 v30;
  __int16 v33;
  _BOOL4 v34;
  _BOOL4 v35;
  __int16 v36;
  __int16 v37;
  __int16 v39;
  _BOOL4 v40;
  unsigned int v41;
  __int16 v42;
  unsigned int v43;
  __int16 v45;
  __int16 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  float32x2_t* v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  float32x2_t v63;
  unsigned __int32 v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  float32x2_t* v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned int v73;
  float32x2_t v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  _QWORD* v79;
  _QWORD* v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  _QWORD* v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  bool v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  int v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  float32x4_t* v105;
  float32x4_t v106;
  char v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  __int128 v112;
  float32x4_t v113;
  float32x4_t v114;
  __int128 v115;
  float32x4_t* v116;
  float32x4_t v117;
  char v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  __int128 v122;
  __int128 v123;
  float32x4_t v124;
  float32x4_t v125;
  __int128 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  float32x4_t* v133;
  float32x4_t v134;
  char v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  __int128 v140;
  float32x4_t v141;
  float32x4_t v142;
  __int128 v143;
  float32x4_t* v144;
  float32x4_t v145;
  char v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  __int128 v150;
  __int128 v151;
  float32x4_t v152;
  float32x4_t v153;
  __int128 v154;
  __int64* v155;
  __int64 v156;
  __int64 v157;
  void (***v158)(_QWORD);
  void (***v159)(_QWORD);
  void (**v160)(_QWORD);
  __int64 v161;
  __int64 v162;
  __int64 v163;
  void (***v164)(_QWORD);
  void (***v165)(_QWORD);
  void (**v166)(_QWORD);
  __int64 v167;
  __int64* v168;
  float v169;
  __int64 v170;
  float v171;
  float32x4_t* v172;
  __int64 v173;
  float32x4_t* v174;
  __int64 v175;
  __int64* v176;
  __int64 v177;
  __int64 v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  unsigned __int64 v184;
  float32x4_t* v185;
  float32x4_t* v186;
  float32x4_t* v187;
  __int64* v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  __int64* v195;
  __int64 v196;
  void (***v197)(_QWORD);
  void (***v198)(_QWORD);
  void (**v199)(_QWORD);
  __int64 v200;
  __int64 v201;
  _QWORD* v202;
  __int64 v203;
  unsigned __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  __int64 v210;
  char* v211;
  __int64 v212;
  unsigned __int64 v213[5];
  unsigned __int64 v214[5];
  _QWORD v215[5];
  _QWORD v216[5];
  struct {
    float32x4_t v217[6];
    __int64 v218;
    __int64 v219;
    char gap352_[8];
    __int64 v220;
    __int64 v221;
    char gap376_[100];
    char v222;
    char gap477_[3];
    int v223;
    char gap484_[4];
    __int64 v224;
  } v217_;
  struct {
    _QWORD v225[12];
    float32x2_t* v226;
    __int64 v227;
    char gap608_[8];
    __int64 v228;
    __int64 v229;
    char gap632_[40];
    unsigned int v230;
    unsigned int v231;
    unsigned int v232;
    char gap684_[48];
    char v233;
    char gap733_[3];
    int v234;
    char gap740_[4];
    __int64 v235;
  } v225_;
  struct {
    _QWORD v236[4];
    float32x4_t v237;
    __int128 v238;
    __int128 v239;
  } v236_;
  struct {
    float32x4_t v240;
    __int128 v241;
    float32x4_t v242;
    float32x4_t v243;
    __int128 v244;
  } v240_;

  v1 = a1;
  if (*(_BYTE*)(a1 + 8) == 1) {
    v2 = *(_QWORD**)(a1 + 16);
    v3 = (_QWORD*)(a1 + 24);
    v203 = a1 + 16;
    if (v2 != (_QWORD*)(a1 + 24)) {
      do {
        v19 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void*))(v19 + 48))((void*)&v2[6]) & 1) != 0) {
          v20 = 1036831949;
        }
        else {
          v20 = 0;
          *((_DWORD*)v2 + 69) = 0;
        }
        v21 = (_QWORD*)v2[1];
        *((_DWORD*)v2 + 70) = v20;
        if (v21 != nullptr) {
          do {
            v22 = v21;
            v21 = (_QWORD*)*v21;
          } while (v21 != nullptr);
        }
        else {
          do {
            v22 = (_QWORD*)v2[2];
            v96 = v2 == (_QWORD*)*v22;
            v2 = v22;
          } while (!v96);
        }
        v2 = v22;
      } while (v22 != v3);
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1) & 1) != 0) {
      v207 = v1 + 40;
      memset(v1 + 40, 0, 0x2000u);
      v4 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL);
      v201 = *(char*)(*GameData_212ce98[0] + 30);
      v210 = *(char*)(*GameData_212ce98[0] + 31);
      game_map_f54910((__int64)v225_.v225);
      v225_.v235 = v1;
      v225_.v233 = 0;
      v225_.v225[0] = game_map_OutlineBmapMeshData_vtable;
      v225_.v234 = 1;
      v5 = *(char**)(v4 + 232);
      v211 = *(char**)(v4 + 240);
      if (v5 == v211) {
        goto LABEL_80;
      }
      v6 = GameData_221fe8c;
      v7 = GameData_221fe90;
      v8 = GameData_221fe94;
      v9 = GameData_221fe98;
      v10 = GameData_221fe9c;
      v11 = GameData_221fea0;
      v12 = GameData_221fea4;
      v13 = GameData_221fea8;
      v14 = GameData_221feac;
      v15 = GameData_221feb0;
      v16 = GameData_221feb4;
      v17 = GameData_221fe88;
      v18 = (_BYTE*)*GameData_212ce98[0];
    LABEL_18:
      v23 = *v5;
      v24 = v5[1];
      v25 = v18[24];
      v26 = v18[25];
      v27 = (unsigned __int8)v18[27];
      v28 = (unsigned __int8)v18[26];
      if (v27 <= (unsigned __int8)(v24 + (v7 & 1) - v26) ||
          v28 <= (unsigned __int8)(*v5 - v25)) {
        v30 = 2;
      }
      else {
        v30 = 0;
      }
      if (v28 <= (unsigned __int8)(v23 - (v17 & 1) - v25) ||
          v27 <= (unsigned __int8)(v5[1] + (v6 & 1) - v26)) {
        ++v30;
      }
      if ((unsigned __int8)(v5[1] + (v9 & 1) - v26) >= v27 ||
          (unsigned __int8)(*v5 + (v8 & 1) - v25) >= v28) {
        v33 = 4;
      }
      else {
        v33 = 0;
      }
      v34 = v28 <= (unsigned __int8)(v23 - (v10 & 1) - v25);
      v35 = v28 <= (unsigned __int8)(v23 + (v11 & 1) - v25);
      if (v27 <= (unsigned __int8)(v24 - v26)) {
        v34 = true;
        v35 = true;
      }
      if (v34) {
        v36 = 8;
      }
      else {
        v36 = 0;
      }
      if (v35) {
        v37 = 16;
      }
      else {
        v37 = 0;
      }
      if ((unsigned __int8)(v24 - (v13 & 1) - v26) >= v27 ||
          (unsigned __int8)(v23 - (v12 & 1) - v25) >= v28) {
        v39 = 32;
      }
      else {
        v39 = 0;
      }
      v40 = v27 <= (unsigned __int8)(v24 - (v14 & 1) - v26) ||
            v28 <= (unsigned __int8)(*v5 - v25);
      v41 = (unsigned __int8)(v24 - (v16 & 1) - v26);
      if (v40) {
        v42 = 64;
      }
      else {
        v42 = 0;
      }
      v43 = (unsigned __int8)(v23 + (v15 & 1) - v25);
      if (v41 >= v27 || v43 >= v28) {
        v45 = 128;
      }
      else {
        v45 = 0;
      }
      v46 = v30 | v33 | v36 | v37 | v39 | v42 | v45;
      if (v46 == 0) {
        goto LABEL_17;
      }
      game_map_f54d00((__int64)v225_.v225);
      GameHr_fcacb0(a1, (__int64)v225_.v225, 2, v23, v24, v46);
      MapDrawOutlineBmap_f59960(v203, (__int64)v225_.v225);
      v47 = (v225_.v231 - 0x61C8864680B583EBLL +
             (((v225_.v230 + 0x1FB68949BF00A3D6LL) ^ 0x9E3779B97F4A7C18LL)
              << 12) +
             (((v225_.v230 + 0x1FB68949BF00A3D6LL) ^ 0x9E3779B97F4A7C18LL) >>
              4)) ^
            (v225_.v230 + 0x1FB68949BF00A3D6LL) ^ 0x9E3779B97F4A7C18LL;
      v48 =
          (v225_.v232 - 0x61C8864680B583EBLL + (v47 << 12) + (v47 >> 4)) ^ v47;
      v49 = v225_.v227 - (_QWORD)v225_.v226;
      if ((float32x2_t*)v225_.v227 == v225_.v226) {
        goto LABEL_69;
      }
      if (v49 == 64) {
        v50 = 0;
      }
      else {
        v51 = v225_.v226 + 10;
        v52 = 0;
        do {
          v52 -= 2;
          v53 = ((v48 << 12) - 0x61C8864680B583E6LL + (v48 >> 4)) ^ v48;
          v54 = ((v53 << 12) - 0x61C8864680B583EBLL + (v53 >> 4) +
                 LANES64(v51[-8]).n64_u32[0]) ^
                v53;
          v55 = (LANES64(v51[-8]).n64_u32[1] - 0x61C8864680B583EBLL +
                 (v54 << 12) + (v54 >> 4)) ^
                v54;
          v56 = (LANES64(v51[-7]).n64_u32[0] - 0x61C8864680B583EBLL +
                 (v55 << 12) + (v55 >> 4)) ^
                v55;
          v57 =
              (COERCE_UNSIGNED_INT(
                   (float)((float)(vmuls_lane_f32(0x1.6000000000000p+3f,
                                                  v51[-4], 1) +
                                   (float)(COERCE_FLOAT(
                                               *(_OWORD*)LANES64(v51[-4])
                                                    .n64_u64) *
                                           0x1.a000000000000p+3f)) +
                           (float)(0x1.c000000000000p+2f *
                                   COERCE_FLOAT(LANES64(v51[-3]).n64_u64[0]))) +
                   (float)(0x1.8000000000000p+1f *
                           COERCE_FLOAT(
                               HIDWORD(*(_OWORD*)LANES64(v51[-4]).n64_u64)))) -
               0x61C8864680B583EBLL + (v56 << 12) + (v56 >> 4)) ^
              v56;
          v58 = (COERCE_UNSIGNED_INT(
                     vmuls_lane_f32(0x1.8000000000000p+1f, v51[-6], 1) +
                     (float)(COERCE_FLOAT(LANES64(v51[-6]).n64_u64[0]) *
                             0x1.c000000000000p+2f)) -
                 0x61C8864680B583EBLL + (v57 << 12) + (v57 >> 4)) ^
                v57;
          v59 = ((v58 << 12) - 0x61C8864680B583E6LL + (v58 >> 4)) ^ v58;
          v60 = LANES64(*(v51)).n64_u32[1];
          v61 = LANES64(v51[1]).n64_u32[0];
          *(float*)&v62 =
              (float)((float)(vmuls_lane_f32(0x1.6000000000000p+3f, v51[4], 1) +
                              (float)(COERCE_FLOAT(
                                          *(_OWORD*)LANES64(v51[4]).n64_u64) *
                                      0x1.a000000000000p+3f)) +
                      (float)(0x1.c000000000000p+2f *
                              COERCE_FLOAT(LANES64(v51[5]).n64_u64[0]))) +
              (float)(0x1.8000000000000p+1f *
                      COERCE_FLOAT(HIDWORD(*(_OWORD*)LANES64(v51[4]).n64_u64)));
          PSEUDO_LOW_LANE64(v63, n64_u64, LANES64(v51[2]).n64_u64[0]);
          v64 = LANES64(*(v51)).n64_u32[0];
          v51 += 16;
          v65 = (v59 << 12) - 0x61C8864680B583EBLL + (v59 >> 4) + v64;
          v66 = (v60 - 0x61C8864680B583EBLL + ((v65 ^ v59) << 12) +
                 ((v65 ^ v59) >> 4)) ^
                v65 ^ v59;
          v67 = (v61 - 0x61C8864680B583EBLL + (v66 << 12) + (v66 >> 4)) ^ v66;
          v68 = (v62 - 0x61C8864680B583EBLL + (v67 << 12) + (v67 >> 4)) ^ v67;
          v48 = (COERCE_UNSIGNED_INT(
                     vmuls_lane_f32(0x1.8000000000000p+1f, v63, 1) +
                     (float)(LANES64(v63).n64_f32[0] * 0x1.c000000000000p+2f)) -
                 0x61C8864680B583EBLL + (v68 << 12) + (v68 >> 4)) ^
                v68;
        } while (-2 * (v49 >> 7) != v52);
        v50 = -v52;
        if ((v49 & 0x40) == 0) {
          goto LABEL_69;
        }
      }
      v69 = &v225_.v226[8 * v50];
      v70 = LANES64(v69[2]).n64_u32[1];
      v71 = ((v48 << 12) - 0x61C8864680B583EBLL + (v48 >> 4) + 5) ^ v48;
      v72 = LANES64(v69[3]).n64_u32[0] - 0x61C8864680B583EBLL;
      *(float*)&v73 =
          (float)((float)(vmuls_lane_f32(0x1.6000000000000p+3f, v69[6], 1) +
                          (float)(COERCE_FLOAT(
                                      *(_OWORD*)LANES64(v69[6]).n64_u64) *
                                  0x1.a000000000000p+3f)) +
                  (float)(0x1.c000000000000p+2f *
                          COERCE_FLOAT(LANES64(v69[7]).n64_u64[0]))) +
          (float)(0x1.8000000000000p+1f *
                  COERCE_FLOAT(HIDWORD(*(_OWORD*)LANES64(v69[6]).n64_u64)));
      PSEUDO_LOW_LANE64(v74, n64_u64, LANES64(v69[4]).n64_u64[0]);
      v75 = ((v71 << 12) - 0x61C8864680B583EBLL + (v71 >> 4) +
             LANES64(v69[2]).n64_u32[0]) ^
            v71;
      v76 = v70 - 0x61C8864680B583EBLL + (v75 << 12) + (v75 >> 4);
      v77 = (v72 + ((v76 ^ v75) << 12) + ((v76 ^ v75) >> 4)) ^ v76 ^ v75;
      v78 = (v73 - 0x61C8864680B583EBLL + (v77 << 12) + (v77 >> 4)) ^ v77;
      v48 = (COERCE_UNSIGNED_INT(
                 vmuls_lane_f32(0x1.8000000000000p+1f, v74, 1) +
                 (float)(LANES64(v74).n64_f32[0] * 0x1.c000000000000p+2f)) -
             0x61C8864680B583EBLL + (v78 << 12) + (v78 >> 4)) ^
            v78;
    LABEL_69:
      v6 = GameData_221fe8c;
      v7 = GameData_221fe90;
      v8 = GameData_221fe94;
      v9 = GameData_221fe98;
      v10 = GameData_221fe9c;
      v11 = GameData_221fea0;
      v12 = GameData_221fea4;
      v13 = GameData_221fea8;
      v14 = GameData_221feac;
      v15 = GameData_221feb0;
      v16 = GameData_221feb4;
      v17 = GameData_221fe88;
      v79 = (_QWORD*)*v3;
      v18 = (_BYTE*)*GameData_212ce98[0];
      if (*v3 == 0) {
        goto LABEL_17;
      }
      v80 = (_QWORD*)*v3;
      while (1) {
        v81 = v80[4];
        if (v48 >= v81) {
          if (v81 >= v48) {
            while (1) {
              while (1) {
                v82 = v79[4];
                if (v48 >= v82) {
                  break;
                }
                v79 = (_QWORD*)*v79;
                if (v79 == nullptr) {
                  goto LABEL_79;
                }
              }
              if (v82 >= v48) {
                break;
              }
              v79 = (_QWORD*)v79[1];
              if (v79 == nullptr) {
              LABEL_79:
                String_60a250_alt1("map::at:  key not found");
              }
            }
            *(_QWORD*)(v207 + 8LL * (int)(v23 + 32 * v24)) = v79 + 6;
          LABEL_17:
            v5 += 4;
            if (v5 != v211) {
              goto LABEL_18;
            }
          LABEL_80:
            game_map_f54910((__int64)v217_.v217);
            v217_.v222 = 0;
            LANES128(v217_.v217[0]).n128_u64[0] =
                (unsigned __int64)game_map_OutlineBmapMeshData_vtable;
            v217_.v223 = 1;
            v217_.v224 = a1;
            game_fcb000((void*)(v216), a1, 8);
            game_fcb000((void*)(v215), a1, 16);
            v83 = v215[0];
            v84 = v215[1];
            v85 = v216[0];
            v86 = v216[1];
            v87 = (_QWORD*)(a1 + 296);
            v88 = v215[4];
            v89 = v216[4];
            v212 = 0;
            v206 = v215[1];
            v208 = v215[0];
            v91 = v215[2];
            v90 = v215[3];
            v204 = v216[1];
            v205 = v216[0];
            v93 = v216[2];
            v92 = v216[3];
          LABEL_82:
            v94 = v201;
            v95 = 31;
            v202 = v87;
          LABEL_85:
            v96 = v94 == 0 || v212 == v210;
            if (v96) {
              v97 = v83;
            }
            else {
              v97 = v85;
            }
            if (v96) {
              v98 = v84;
            }
            else {
              v98 = v86;
            }
            v99 = v96;
            v214[0] = v97;
            v214[1] = v98;
            if (v96) {
              v100 = v91;
            }
            else {
              v100 = v93;
            }
            if (v96) {
              v101 = v90;
            }
            else {
              v101 = v92;
            }
            v214[2] = v100;
            v214[3] = v101;
            if (v96) {
              v102 = v88;
            }
            else {
              v102 = v89;
            }
            v214[4] = v102;
            v103 = *(v87 - 32);
            if (v103 != 0) {
              v104 = *(v87 - 31);
              if (v104 != 0) {
                v105 = *(float32x4_t**)(v103 + 96);
                v240_.v244 = (__typeof__(v240_.v244)){0};
                v240_.v243 = (__typeof__(v240_.v243)){0};
                v106 = *(float32x4_t*)(v103 + 176);
                v240_.v242 = (__typeof__(v240_.v242)){0};
                v107 = *(_BYTE*)(v103 + 236);
                v108 = vaddq_f32(v105[1], v106);
                v109 = vaddq_f32(v106, v105[5]);
                v110 = vaddq_f32(v106, v105[9]);
                v240_.v240 = COERCE_AS(float32x4_t, LANES128(v108).n128_u64[0]);
                v240_.v241 = LANES128(v109).n128_u64[0];
                LANES128(v240_.v242).n128_u64[0] = LANES128(v110).n128_u64[0];
                LANES128(v111).n128_u64[0] = LANES128(v108).n128_u64[0];
                *(_QWORD*)&v112 = LANES128(v109).n128_u64[0];
                LANES128(v111).n128_u64[1] = LANES128(v108).n128_u32[2];
                *((_QWORD*)&v112 + 1) = LANES128(v109).n128_u32[2];
                v113 = vaddq_f32(v106, v105[13]);
                v240_.v240 = v111;
                v240_.v241 = v112;
                LANES128(v109).n128_u64[0] = LANES128(v110).n128_u64[0];
                LANES128(v111).n128_u64[0] = LANES128(v113).n128_u64[0];
                LANES128(v109).n128_u64[1] = LANES128(v110).n128_u32[2];
                LANES128(v111).n128_u64[1] = LANES128(v113).n128_u32[2];
                v240_.v242 = v109;
                v240_.v243 = v111;
                if ((v107 & 1) != 0) {
                  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] +
                                           8LL) +
                                9LL) != 1) {
                  LABEL_113:
                    v116 = *(float32x4_t**)(v104 + 96);
                    v236_.v239 = (__typeof__(v236_.v239)){0};
                    v236_.v238 = (__typeof__(v236_.v238)){0};
                    v117 = *(float32x4_t*)(v104 + 176);
                    v236_.v237 = (__typeof__(v236_.v237)){0};
                    v236_.v236[3] = 0;
                    v118 = *(_BYTE*)(v104 + 236);
                    v119 = vaddq_f32(v116[1], v117);
                    v120 = vaddq_f32(v117, v116[5]);
                    v121 = vaddq_f32(v117, v116[9]);
                    *(_OWORD*)v236_.v236 = LANES128(v119).n128_u64[0];
                    v236_.v236[2] = LANES128(v120).n128_u64[0];
                    LANES128(v236_.v237).n128_u64[0] =
                        LANES128(v121).n128_u64[0];
                    *(_QWORD*)&v122 = LANES128(v119).n128_u64[0];
                    *(_QWORD*)&v123 = LANES128(v120).n128_u64[0];
                    *((_QWORD*)&v122 + 1) = LANES128(v119).n128_u32[2];
                    *((_QWORD*)&v123 + 1) = LANES128(v120).n128_u32[2];
                    v124 = vaddq_f32(v117, v116[13]);
                    *(_OWORD*)v236_.v236 = v122;
                    *(_OWORD*)&v236_.v236[2] = v123;
                    LANES128(v120).n128_u64[0] = LANES128(v121).n128_u64[0];
                    *(_QWORD*)&v122 = LANES128(v124).n128_u64[0];
                    LANES128(v120).n128_u64[1] = LANES128(v121).n128_u32[2];
                    *((_QWORD*)&v122 + 1) = LANES128(v124).n128_u32[2];
                    v236_.v237 = v120;
                    v236_.v238 = v122;
                    if ((v118 & 1) != 0) {
                      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] +
                                               8LL) +
                                    9LL) != 1) {
                      LABEL_118:
                        game_map_f54d00((__int64)v217_.v217);
                        if ((MapDrawConst_fcc820(a1, v217_.v217, &v240_.v240,
                                                 (__int128*)v236_.v236, v214,
                                                 3u) &
                             1) != 0) {
                          MapDrawOutlineBmap_f59960(v203, (__int64)v217_.v217);
                        }
                        v103 = *(v87 - 32);
                        v84 = v206;
                        v83 = v208;
                        v86 = v204;
                        v85 = v205;
                        goto LABEL_121;
                      }
                    }
                    else if (*(_DWORD*)(v104 + 240) != 2) {
                      goto LABEL_118;
                    }
                    v125 = vaddq_f32(v117, v116[17]);
                    *(_QWORD*)&v126 = LANES128(v125).n128_u64[0];
                    *((_QWORD*)&v126 + 1) = LANES128(v125).n128_u32[2];
                    v236_.v239 = v126;
                    goto LABEL_118;
                  }
                }
                else if (*(_DWORD*)(v103 + 240) != 2) {
                  goto LABEL_113;
                }
                v114 = vaddq_f32(v106, v105[17]);
                *(_QWORD*)&v115 = LANES128(v114).n128_u64[0];
                *((_QWORD*)&v115 + 1) = LANES128(v114).n128_u32[2];
                v240_.v244 = v115;
                goto LABEL_113;
              }
            }
          LABEL_121:
            if (v99 != 0) {
              v127 = v85;
            }
            else {
              v127 = v83;
            }
            if (v99 != 0) {
              v128 = v86;
            }
            else {
              v128 = v84;
            }
            v213[0] = v127;
            v213[1] = v128;
            if (v99 != 0) {
              v129 = v93;
            }
            else {
              v129 = v91;
            }
            if (v99 != 0) {
              v130 = v92;
            }
            else {
              v130 = v90;
            }
            v213[2] = v129;
            v213[3] = v130;
            if (v99 != 0) {
              v131 = v89;
            }
            else {
              v131 = v88;
            }
            v213[4] = v131;
            if (v103 != 0) {
              v132 = *v87;
              if (*v87 != 0) {
                v133 = *(float32x4_t**)(v103 + 96);
                v240_.v244 = (__typeof__(v240_.v244)){0};
                v240_.v243 = (__typeof__(v240_.v243)){0};
                v134 = *(float32x4_t*)(v103 + 176);
                v240_.v242 = (__typeof__(v240_.v242)){0};
                v135 = *(_BYTE*)(v103 + 236);
                v136 = vaddq_f32(v133[1], v134);
                v137 = vaddq_f32(v134, v133[5]);
                v138 = vaddq_f32(v134, v133[9]);
                v240_.v240 = COERCE_AS(float32x4_t, LANES128(v136).n128_u64[0]);
                v240_.v241 = LANES128(v137).n128_u64[0];
                LANES128(v240_.v242).n128_u64[0] = LANES128(v138).n128_u64[0];
                LANES128(v139).n128_u64[0] = LANES128(v136).n128_u64[0];
                *(_QWORD*)&v140 = LANES128(v137).n128_u64[0];
                LANES128(v139).n128_u64[1] = LANES128(v136).n128_u32[2];
                *((_QWORD*)&v140 + 1) = LANES128(v137).n128_u32[2];
                v141 = vaddq_f32(v134, v133[13]);
                v240_.v240 = v139;
                v240_.v241 = v140;
                LANES128(v137).n128_u64[0] = LANES128(v138).n128_u64[0];
                LANES128(v139).n128_u64[0] = LANES128(v141).n128_u64[0];
                LANES128(v137).n128_u64[1] = LANES128(v138).n128_u32[2];
                LANES128(v139).n128_u64[1] = LANES128(v141).n128_u32[2];
                v240_.v242 = v137;
                v240_.v243 = v139;
                if ((v135 & 1) != 0) {
                  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] +
                                           8LL) +
                                9LL) != 1) {
                  LABEL_143:
                    v144 = *(float32x4_t**)(v132 + 96);
                    v236_.v239 = (__typeof__(v236_.v239)){0};
                    v236_.v238 = (__typeof__(v236_.v238)){0};
                    v145 = *(float32x4_t*)(v132 + 176);
                    v236_.v237 = (__typeof__(v236_.v237)){0};
                    v236_.v236[3] = 0;
                    v146 = *(_BYTE*)(v132 + 236);
                    v147 = vaddq_f32(v144[1], v145);
                    v148 = vaddq_f32(v145, v144[5]);
                    v149 = vaddq_f32(v145, v144[9]);
                    *(_OWORD*)v236_.v236 = LANES128(v147).n128_u64[0];
                    v236_.v236[2] = LANES128(v148).n128_u64[0];
                    LANES128(v236_.v237).n128_u64[0] =
                        LANES128(v149).n128_u64[0];
                    *(_QWORD*)&v150 = LANES128(v147).n128_u64[0];
                    *(_QWORD*)&v151 = LANES128(v148).n128_u64[0];
                    *((_QWORD*)&v150 + 1) = LANES128(v147).n128_u32[2];
                    *((_QWORD*)&v151 + 1) = LANES128(v148).n128_u32[2];
                    v152 = vaddq_f32(v145, v144[13]);
                    *(_OWORD*)v236_.v236 = v150;
                    *(_OWORD*)&v236_.v236[2] = v151;
                    LANES128(v148).n128_u64[0] = LANES128(v149).n128_u64[0];
                    *(_QWORD*)&v150 = LANES128(v152).n128_u64[0];
                    LANES128(v148).n128_u64[1] = LANES128(v149).n128_u32[2];
                    *((_QWORD*)&v150 + 1) = LANES128(v152).n128_u32[2];
                    v236_.v237 = v148;
                    v236_.v238 = v150;
                    if ((v146 & 1) != 0) {
                      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] +
                                               8LL) +
                                    9LL) != 1) {
                      LABEL_148:
                        game_map_f54d00((__int64)v217_.v217);
                        if ((MapDrawConst_fcc820(a1, v217_.v217, &v240_.v240,
                                                 (__int128*)v236_.v236, v213,
                                                 2u) &
                             1) != 0) {
                          MapDrawOutlineBmap_f59960(v203, (__int64)v217_.v217);
                        }
                        v84 = v206;
                        v83 = v208;
                        v86 = v204;
                        v85 = v205;
                        goto LABEL_84;
                      }
                    }
                    else if (*(_DWORD*)(v132 + 240) != 2) {
                      goto LABEL_148;
                    }
                    v153 = vaddq_f32(v145, v144[17]);
                    *(_QWORD*)&v154 = LANES128(v153).n128_u64[0];
                    *((_QWORD*)&v154 + 1) = LANES128(v153).n128_u32[2];
                    v236_.v239 = v154;
                    goto LABEL_148;
                  }
                }
                else if (*(_DWORD*)(v103 + 240) != 2) {
                  goto LABEL_143;
                }
                v142 = vaddq_f32(v134, v133[17]);
                *(_QWORD*)&v143 = LANES128(v142).n128_u64[0];
                *((_QWORD*)&v143 + 1) = LANES128(v142).n128_u32[2];
                v240_.v244 = v143;
                goto LABEL_143;
              }
            }
          LABEL_84:
            ++v87;
            --v94;
            if (--v95 == 0) {
              v87 = v202 + 32;
              if (++v212 == 31) {
                v155 = GameData_212f8b0[0];
                LANES128(v217_.v217[0]).n128_u64[0] =
                    (unsigned __int64)(GameData_212f8b0[0] + 2);
                if (v217_.v220 != 0) {
                  v217_.v221 = v217_.v220;
                  v156 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v156 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v156,
                      v217_.v220);
                }
                v157 = v217_.v218;
                if (v217_.v218 != 0) {
                  if (v217_.v218 == v217_.v219) {
                    goto LABEL_160;
                  }
                  v158 = (void (***)(_QWORD))(v217_.v219 - 64);
                  v159 = (void (***)(_QWORD))(v217_.v219 - 64);
                  do {
                    v160 = *v159;
                    v159 -= 8;
                    (*v160)(v158);
                    v96 = v158 == (void (***)(_QWORD))v157;
                    v158 = v159;
                  } while (!v96);
                  v217_.v219 = v157;
                  v157 = v217_.v218;
                  if (v217_.v218 != 0) {
                  LABEL_160:
                    v161 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v161 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v161, v157);
                  }
                }
                v225_.v225[0] = v155 + 2;
                if (v225_.v228 != 0) {
                  v225_.v229 = v225_.v228;
                  v162 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v162 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v162,
                      v225_.v228);
                }
                v163 = (__int64)v225_.v226;
                v1 = a1;
                if (v225_.v226 != nullptr) {
                  if (v225_.v226 == (float32x2_t*)v225_.v227) {
                    goto LABEL_173;
                  }
                  v164 = (void (***)(_QWORD))(v225_.v227 - 64);
                  v165 = (void (***)(_QWORD))(v225_.v227 - 64);
                  do {
                    v166 = *v165;
                    v165 -= 8;
                    (*v166)(v164);
                    v96 = v164 == (void (***)(_QWORD))v163;
                    v164 = v165;
                  } while (!v96);
                  v225_.v227 = v163;
                  v163 = (__int64)v225_.v226;
                  if (v225_.v226 != nullptr) {
                  LABEL_173:
                    v167 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v167 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v167, v163);
                  }
                }
                break;
              }
              goto LABEL_82;
            }
            goto LABEL_85;
          }
          ++v80;
        }
        v80 = (_QWORD*)*v80;
        if (v80 == nullptr) {
          goto LABEL_17;
        }
      }
    }
    *(_BYTE*)(v1 + 8) = 0;
  }
  v168 = game_8224a0(0x10u);
  v169 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v170 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v168);
    if (v170 != 0) {
      v169 = (float)*(int*)(v170 + 32);
    }
  }
  if ((float)(v169 / 0x1.9000000000000p+6f) > 0x1.0000000000000p-23f) {
    v171 = 0x0.0p+0f;
    *(_DWORD*)(v1 + 8232) = 0;
  }
  else {
    v171 = *(float*)(v1 + 8232);
  }
  v172 = (float32x4_t*)(v1 + 24);
  v173 = game_script_hub_g_frame_counter_ptr[0];
  v174 = *(float32x4_t**)(v1 + 16);
  *(float*)(v1 + 8232) =
      v171 +
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f);
  if (v174 != (float32x4_t*)(v1 + 24)) {
    v175 = fw_memory_g_heap_manager_ptr;
    v176 = GameData_212f8b0[0] + 2;
    do {
      v179 = LANES128(v174[17]).n128_f32[2];
      v180 =
          (float)(*(float*)(*(_QWORD*)v173 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v179 <= 0x0.0p+0f) {
        if (LANES128(v174[17]).n128_u8[0] != 0) {
          v183 = 0x1.0000000000000p+0f;
        }
        else {
          v183 = 0x0.0p+0f;
        }
      }
      else {
        v181 = v180 / v179;
        v182 = LANES128(v174[17]).n128_f32[1];
        if (LANES128(v174[17]).n128_u8[0] != 0) {
          v183 = fminf(fmaxf(v181 + v182, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v183 = fminf(fmaxf(v182 - v181, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v174[17]).n128_f32[1] = v183;
      v184 = LANES128(v174[3]).n128_u64[0];
      LANES128(v174[15]).n128_f32[0] = v180 + LANES128(v174[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v184 + 40))(v174 + 3);
      GameRoutine_f54fe0(v174 + 3);
      v185 = (float32x4_t*)LANES128(*(v174)).n128_u64[1];
      if ((LANES128(v174[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v174[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v185 != nullptr) {
          do {
            v187 = v185;
            v185 = (float32x4_t*)LANES128(*(v185)).n128_u64[0];
          } while (v185 != nullptr);
        }
        else {
          do {
            v187 = (float32x4_t*)LANES128(v174[1]).n128_u64[0];
            v96 = v174 == (float32x4_t*)LANES128(*(v187)).n128_u64[0];
            v174 = v187;
          } while (!v96);
        }
      }
      else {
        v186 = v174;
        if (v185 != nullptr) {
          do {
            v187 = v185;
            v185 = (float32x4_t*)LANES128(*(v185)).n128_u64[0];
          } while (v185 != nullptr);
        }
        else {
          do {
            v187 = (float32x4_t*)LANES128(v186[1]).n128_u64[0];
            v96 = v186 == (float32x4_t*)LANES128(*(v187)).n128_u64[0];
            v186 = v187;
          } while (!v96);
        }
        if (*(float32x4_t**)(v1 + 16) == v174) {
          *(_QWORD*)(v1 + 16) = v187;
        }
        v188 = *(__int64**)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0(v188, (__int64*)v174);
        v189 = LANES128(v174[10]).n128_i64[1];
        LANES128(v174[3]).n128_u64[0] = (unsigned __int64)v176;
        if (v189 != 0) {
          v190 = *(_QWORD*)v175;
          LANES128(v174[11]).n128_u64[0] = v189;
          if (*(_QWORD*)(v190 + 200) != 0) {
            v191 = 128;
          }
          else {
            v191 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v190 + v191, v189);
        }
        v192 = LANES128(v174[9]).n128_i64[0];
        if (v192 != 0) {
          v193 = LANES128(v174[9]).n128_u64[1];
          if (v192 == v193) {
            goto LABEL_185;
          }
          v194 = v175;
          v195 = v176;
          v196 = v173;
          v197 = (void (***)(_QWORD))(v193 - 64);
          v198 = (void (***)(_QWORD))(v193 - 64);
          do {
            v199 = *v198;
            v198 -= 8;
            (*v199)(v197);
            v96 = v197 == (void (***)(_QWORD))v192;
            v197 = v198;
          } while (!v96);
          v200 = LANES128(v174[9]).n128_i64[0];
          v1 = a1;
          v173 = v196;
          v176 = v195;
          v175 = v194;
          LANES128(v174[9]).n128_u64[1] = v192;
          v192 = v200;
          if (v200 != 0) {
          LABEL_185:
            if (*(_QWORD*)(*(_QWORD*)v175 + 200LL) != 0) {
              v177 = 128;
            }
            else {
              v177 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v175 + v177, v192);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v175 + 200LL) != 0) {
          v178 = 128;
        }
        else {
          v178 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v175 + v178,
                                           (__int64)v174);
      }
      v174 = v187;
    } while (v187 != v172);
  }
}

__int64 MapDrawOutlineBmap_f59960(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  int v21;
  unsigned __int64 v22;
  unsigned __int64* v23;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  v5 = *(_QWORD*)(a1 + 8);
  v22 = v4;
  if (v5 == 0) {
  LABEL_12:
    v23 = &v22;
    v9 = GameRoutine_f59e80(a1, &v22, &v23);
    v10 = v9;
    *(_DWORD*)(v9 + 56) = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(v9 + 60) = *(_DWORD*)(a2 + 12);
    *(_OWORD*)(v9 + 64) = *(_OWORD*)(a2 + 16);
    *(_OWORD*)(v9 + 80) = *(_OWORD*)(a2 + 32);
    *(_OWORD*)(v9 + 96) = *(_OWORD*)(a2 + 48);
    *(_OWORD*)(v9 + 112) = *(_OWORD*)(a2 + 64);
    *(_QWORD*)(v9 + 136) = *(_QWORD*)(a2 + 88);
    *(_QWORD*)(v9 + 128) = *(_QWORD*)(a2 + 80);
    if (v9 + 48 != a2) {
      GameRoutine_f155c0(v9 + 144);
      CharacterController_d42d20(
          v10 + 168, *(_QWORD*)(a2 + 120), *(_QWORD*)(a2 + 128),
          (__int64)(*(_QWORD*)(a2 + 128) - *(_QWORD*)(a2 + 120)) >> 4);
    }
    v11 = *(_DWORD*)(a2 + 144);
    v23 = &v22;
    *(_DWORD*)(v10 + 192) = v11;
    *(_DWORD*)(v10 + 196) = *(_DWORD*)(a2 + 148);
    v12 = *(_OWORD*)(v10 + 192);
    *((_QWORD*)&v12 + 1) = *(unsigned int*)(a2 + 152);
    *(_OWORD*)(v10 + 192) = v12;
    *(_QWORD*)(v10 + 216) = *(_QWORD*)(a2 + 168);
    *(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 160);
    *(_DWORD*)(v10 + 224) = *(_DWORD*)(a2 + 176);
    *(_DWORD*)(v10 + 228) = *(_DWORD*)(a2 + 180);
    v13 = *(_OWORD*)(v10 + 224);
    *((_QWORD*)&v13 + 1) = *(unsigned int*)(a2 + 184);
    *(_OWORD*)(v10 + 224) = v13;
    v14 = *(_QWORD*)(a2 + 232);
    v15 = *(_DWORD*)(a2 + 240);
    *(_QWORD*)(v10 + 264) = *(_QWORD*)(a2 + 216);
    *(_QWORD*)(v10 + 280) = v14;
    *(_QWORD*)(v10 + 248) = *(_QWORD*)(a2 + 200);
    v16 = *(_QWORD*)(a2 + 192);
    *(_QWORD*)(v10 + 256) = *(_QWORD*)(a2 + 208);
    *(_QWORD*)(v10 + 240) = v16;
    v17 = *(_QWORD*)(a2 + 224);
    *(_DWORD*)(v10 + 288) = v15;
    *(_QWORD*)(v10 + 272) = v17;
    *(_QWORD*)(v10 + 296) = *(_QWORD*)(a2 + 248);
    v5 = GameRoutine_f59e80(a1, &v22, &v23);
    *(_BYTE*)(v5 + 272) = 1;
    v18 = v5 + 48;
    v19 = *(_QWORD*)(v5 + 48);
    goto LABEL_16;
  }
  v6 = (_QWORD*)v5;
  while (1) {
    v7 = v6[4];
    if (v4 >= v7) {
      break;
    }
  LABEL_3:
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      goto LABEL_12;
    }
  }
  if (v7 < v4) {
    ++v6;
    goto LABEL_3;
  }
  while (1) {
    while (1) {
      v8 = *(_QWORD*)(v5 + 32);
      if (v4 >= v8) {
        break;
      }
      v5 = *(_QWORD*)v5;
      if (v5 == 0) {
        goto LABEL_11;
      }
    }
    if (v8 >= v4) {
      break;
    }
    v5 = *(_QWORD*)(v5 + 8);
    if (v5 == 0) {
    LABEL_11:
      String_60a250("map::at:  key not found");
    }
  }
  v18 = v5 + 48;
  v19 = *(_QWORD*)(v5 + 48);
  *(_BYTE*)(v5 + 272) = 1;
LABEL_16:
  result = (*(__int64 (**)(__int64))(v19 + 48))(v18);
  if ((result & 1) != 0) {
    v21 = 1036831949;
  }
  else {
    v21 = 0;
    *(_DWORD*)(v5 + 276) = 1065353216;
  }
  *(_DWORD*)(v5 + 280) = v21;
  return result;
}

__int64 MapDrawOutlineBmap_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapDrawOutlineBmap_vtable;
  return GameRoutine_f59d40(a1[3]);
}

void MapDrawOutlineBmap_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_map_MapDrawOutlineBmap_vtable;
  GameRoutine_f59d40_alt1(*(_QWORD**)(a1 + 24));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
