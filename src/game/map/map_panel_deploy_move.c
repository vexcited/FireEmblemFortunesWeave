#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1045980(_QWORD);
__int64 GameRoutine_1045ac0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_map_MapPanelDeployMove_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelDeployMove_Destructor(_QWORD* a1);
__int64 MapPanelDeployMove_DeletingDestructor_alt1(
    _QWORD* a1,
    long double a2) __asm__("MapPanelDeployMove_DeletingDestructor");
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_f097d0(_QWORD);
__int64 game_Unit_IsImmobile(void);
extern __int64 GameData_212d020[5];
extern __int64* GameData_212f8b0[14];
_QWORD* MapPanelDeployMove_1045c00_alt2(_QWORD* a1, _QWORD* a2) __asm__(
    "MapPanelDeployMove_1045c00");
bool game_map_MapPanelDeployMove_UpdateMesh_lambda0_Invoke(__int64 a1, int* a2,
                                                           int* a3);
__attribute__((swiftcall)) void GameRoutine_f0ea80(PSEUDO_X8, _QWORD);
__int64* fw_containers_BalanceAfterInsert_alt1(
    __int64* result, __int64*) __asm__("fw_containers_BalanceAfterInsert");
__int64 CharacterController_d42d20(_QWORD);
__int64 CharacterController_d42d20_alt1(
    __int64 result, char*, char*,
    unsigned __int64) __asm__("CharacterController_d42d20");
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_f54fe0(_QWORD);
__int64 GameRoutine_fcabb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_fcacb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 MapDrawConst_fcbcc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapDrawConst_fcc4f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 MapPanelDeployMove_10452a0_alt1(_QWORD, _QWORD) __asm__(
    "MapPanelDeployMove_10452a0");
__int64 MapPanelDeployMove_1045c00_alt1(_QWORD, _QWORD) __asm__(
    "MapPanelDeployMove_1045c00");
__int64 Unit_6c7fa0(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_map_f54910(_QWORD);
__int64 game_map_f54910_alt1(__int64) __asm__("game_map_f54910");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
char** GameRoutine_f155c0_alt1(char** result, char*, char*, unsigned __int64,
                               long double) __asm__("GameRoutine_f155c0");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_2003ce0[])();
extern __int64 (*game_map_DeployEffectMeshData_vtable[])();
extern __int64 (*game_map_DeployMeshData_vtable[])();
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void __attribute__((noreturn)) String_60a250(_QWORD);
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
__int64 game_map_MapPanelDeployMove_UpdateMesh_alt1(__int64 result) __asm__(
    "game_map_MapPanelDeployMove_UpdateMesh");
__int64 MapPanelDeployMove_10452a0(__int64** a1, __int64 a2);
__attribute__((swiftcall)) void
GameRoutine_f0ea80_alt1(PSEUDO_X8, int) __asm__("GameRoutine_f0ea80");
__int64* GameRoutine_64dfe0_alt1(__int64* result,
                                 __int64*) __asm__("GameRoutine_64dfe0");
__int64*
GameRoutine_f155c0_alt2(__int64* result, char*, char*,
                        unsigned __int64) __asm__("GameRoutine_f155c0");
__int64 GameHr_fcabb0(__int64, __int64, int, char, char, __int64, __int64);
__int64 GameHr_fcacb0(__int64, __int64, __int64, __int64, __int64, __int16);
__int64 GameRoutine_f097d0_alt1(__int64) __asm__("GameRoutine_f097d0");
__int64 MapDrawConst_fcbcc0_alt1(__int64, int, unsigned __int8, unsigned __int8,
                                 __int64, char) __asm__("MapDrawConst_fcbcc0");
__int64 MapDrawConst_fcc4f0_alt1(__int64, __int64, int, float32x4_t*, __int64,
                                 __int64, char) __asm__("MapDrawConst_fcc4f0");
__int64 game_Unit_IsImmobile_alt1(__int64) __asm__("game_Unit_IsImmobile");
float Unit_6c7fa0_alt1(__int64, _OWORD*) __asm__("Unit_6c7fa0");
float32x4_t*
GameRoutine_f54fe0_alt1(float32x4_t* result) __asm__("GameRoutine_f54fe0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_1045980_alt1(_QWORD*) __asm__("GameRoutine_1045980");
void GameRoutine_1045ac0_alt1(_QWORD*) __asm__("GameRoutine_1045ac0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_MapPanelDeployMove_UpdateMesh(__int64 a1);
void MapPanelDeployMove_DeletingDestructor(__int64 a1);
__int64* MapPanelDeployMove_1045c00(__int64** a1, __int64* a2);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 game_f313e0(__int64, unsigned int, float32x4_t*, float32x4_t*);
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
void PrimitiveDrawStack_f51430(__int64, __int64);
void game_map_1044ea0(_QWORD*, __int64);
void MapPanelDeployMove_Unknown4(_QWORD* a1);

void game_map_MapPanelDeployMove_UpdateMesh(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  float v12;
  float32x4_t v13;
  __int64 v14;
  char v15;
  char v16;
  char* v17;
  char* v18;
  __int64 v19;
  int v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  int v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  __int16 v37;
  __int64 v38;
  float v39;
  float32x4_t v41;
  char* v42;
  float32x4_t* v43;
  char* v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  bool v48;
  float32x4_t v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64** v53;
  __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int128 v62;
  __int128 v63;
  __int128 v64;
  __int64 v65;
  unsigned int v66;
  float32x4_t v67;
  __int64** v68;
  __int64 v69;
  __int64 v70;
  __int128 v71;
  __int128 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  void (***v87)(_QWORD);
  void (***v88)(_QWORD);
  void (**v89)(_QWORD);
  char* v90;
  __int64 v91;
  char* v92;
  char* v93;
  char* v94;
  void (**v95)(char*);
  __int64 v96;
  __int64 v97;
  float32x4_t* v98;
  __int64 v99;
  __int64* v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  unsigned __int64 v106;
  __int64* v107;
  float32x4_t* v108;
  __int64* v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  unsigned __int64 v115;
  __int64* v116;
  float32x4_t* v117;
  float32x4_t* v118;
  __int64 v119;
  __int64* v120;
  __int64 v121;
  __int64 v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  unsigned __int64 v128;
  float32x4_t* v129;
  float32x4_t* v130;
  float32x4_t* v131;
  __int64* v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  void (***v138)(_QWORD);
  __int64 v139;
  __int64* v140;
  void (***v141)(_QWORD);
  void (**v142)(_QWORD);
  __int64 v143;
  __int64* v144;
  char v145;
  __int64 v146;
  __int64** v147;
  char v148;
  struct {
    _QWORD v150[2];
    __int128 v151;
    __int128 v152;
    __int128 v153;
    __int128 v154;
    __int64 v155;
    __int64 v156;
    float32x4_t* v157;
    float32x4_t* v158;
    char gap160_[8];
    char* v159;
    char* v160;
    char gap184_[8];
    __int64 v161;
    unsigned int v162;
    char gap204_[4];
    __int64 v163;
    __int64 v164;
    float32x4_t v165;
    __int64 v166;
    __int64 v167;
    __int64 v168;
    __int64 v169;
    __int64 v170;
    __int64 v171;
    int v172;
    float v173;
    char v174;
  } v150_;
  _BYTE v175[40];
  struct {
    float32x4_t v176[6];
    __int64 v177;
    __int64 v178;
    char gap464_[8];
    __int64 v179;
    __int64 v180;
  } v176_;
  struct {
    _QWORD v181[4];
    _QWORD* v182;
  } v181_;

  v1 = a1;
  if (*(_BYTE*)(a1 + 8) == 1) {
    v2 = *(_QWORD**)(a1 + 16);
    v3 = (_QWORD*)(a1 + 24);
    v147 = (__int64**)(a1 + 16);
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
            v48 = v2 == (_QWORD*)*v22;
            v2 = v22;
          } while (!v48);
        }
        v2 = v22;
      } while (v22 != v3);
    }
    v5 = (__int64**)(v1 + 40);
    v4 = *(_QWORD**)(v1 + 40);
    if (v4 != (_QWORD*)(v1 + 48)) {
      do {
        v23 = v4[6];
        *((_BYTE*)v4 + 272) = 0;
        if (((*(__int64 (**)(void*))(v23 + 48))((void*)&v4[6]) & 1) != 0) {
          v24 = 1036831949;
        }
        else {
          v24 = 0;
          *((_DWORD*)v4 + 69) = 0;
        }
        v25 = (_QWORD*)v4[1];
        *((_DWORD*)v4 + 70) = v24;
        if (v25 != nullptr) {
          do {
            v26 = v25;
            v25 = (_QWORD*)*v25;
          } while (v25 != nullptr);
        }
        else {
          do {
            v26 = (_QWORD*)v4[2];
            v48 = v4 == (_QWORD*)*v26;
            v4 = v26;
          } while (!v48);
        }
        v4 = v26;
      } while (v26 != (_QWORD*)(v1 + 48));
    }
    v6 = *(__int64**)(v1 + 64);
    v7 = (__int64*)(v1 + 72);
    if (v6 != (__int64*)(v1 + 72)) {
      do {
        v27 = v6[6];
        *((_BYTE*)v6 + 272) = 0;
        if (((*(__int64 (**)(void*))(v27 + 48))((void*)&v6[6]) & 1) != 0) {
          v28 = 1036831949;
        }
        else {
          v28 = 0;
          *((_DWORD*)v6 + 69) = 0;
        }
        v29 = (__int64*)v6[1];
        *((_DWORD*)v6 + 70) = v28;
        if (v29 != nullptr) {
          do {
            v30 = v29;
            v29 = (__int64*)*v29;
          } while (v29 != nullptr);
        }
        else {
          do {
            v30 = (__int64*)v6[2];
            v48 = v6 == (__int64*)*v30;
            v6 = v30;
          } while (!v48);
        }
        v6 = v30;
      } while (v30 != v7);
    }
    v146 = v1 + 88;
    *(_QWORD*)(v1 + 96) = *(_QWORD*)(v1 + 88);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1) & 1) != 0) {
      v8 = (__int64*)GameData_212d020[0];
      v9 = GameRoutine_f097d0_alt1(*(_QWORD*)GameData_212d020[0]);
      v10 = v9;
      if (v9 != 0) {
        v11 = *(_DWORD*)(v9 + 592);
        v12 = (float)(unsigned int)(v11 - 1) * 0x1.4000000000000p+1f;
        if (v11 <= 0) {
          v12 = 0x0.0p+0f;
        }
        LANES128(v13).n128_u64[0] = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)(unsigned int)(*(char*)(v9 + 584) +
                                                          256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v12);
        LANES128(v13).n128_u64[1] = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)(unsigned int)(*(char*)(v9 + 585) +
                                                          256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v12);
        v176_.v176[0] = v13;
        Unit_6c7fa0_alt1(v9, v176_.v176);
      }
      v14 = *v8;
      v15 = *(_BYTE*)(*(_QWORD*)(*v8 + 4536) + 112LL);
      v16 = *(_BYTE*)(a1 + 112);
      *(_BYTE*)(a1 + 112) = v15;
      v148 = v15;
      v18 = *(char**)(v14 + 248);
      v17 = *(char**)(v14 + 256);
      v145 = v16;
      if (v18 != v17) {
        v144 = GameData_212f8b0[0] + 2;
        while (1) {
          v32 = *v8;
          v33 = *v18;
          v34 = v18[1];
          v35 = GameRoutine_f097d0_alt1(*v8);
          if (v35 != 0 && (game_Unit_IsImmobile_alt1(v35) & 1) == 0 &&
              ((*(_DWORD*)(v32 + 4408 + 4LL * ((int)(v33 + 32 * v34) >> 5)) >>
                v33) &
               1) != 0) {
            break;
          }
        LABEL_45:
          v18 += 4;
          if (v18 == v17) {
            goto LABEL_129;
          }
        }
        v181_.v181[0] = GameData_2003ce0;
        v181_.v182 = v181_.v181;
        v37 = MapDrawConst_fcbcc0_alt1(a1, 1, v33, v34, (__int64)v181_.v181, 1);
        if (v181_.v182 == v181_.v181) {
          v38 = 32;
        }
        else {
          if (v181_.v182 == nullptr) {
          LABEL_54:
            game_map_f54910_alt1((__int64)v176_.v176);
            LANES128(v176_.v176[0]).n128_u64[0] =
                (unsigned __int64)game_map_DeployMeshData_vtable;
            GameHr_fcacb0(a1, (__int64)v176_.v176, 1, v33, v34, v37);
            if ((v148 & 1) != 0) {
              MapPanelDeployMove_10452a0(v5, (__int64)v176_.v176);
              MapDrawConst_fcc4f0_alt1(a1, v146, 0, v176_.v176, v33, v34, v37);
              if (v10 != 0) {
                v39 = (float)(fabsf((float)(int)(*(char*)(v10 + 584) - v33)) +
                              fabsf((float)(int)(*(char*)(v10 + 585) - v34))) +
                      -0x1.0000000000000p+0f;
                if (v39 >= 0x0.0p+0f) {
                  GameRoutine_f0ea80_alt1((void*)((__int64)v175), 3);
                  game_map_f54910_alt1((__int64)v150_.v150);
                  v150_.v173 = v39;
                  v150_.v150[0] = game_map_DeployEffectMeshData_vtable;
                  v150_.v174 = v145;
                  GameHr_fcabb0(a1, (__int64)v150_.v150, 1, v33, v34,
                                (__int64)v175, (__int64)GameData_212c958);
                  if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21a6130,
                           memory_order_acquire) &
                       1) == 0 &&
                      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) !=
                          0) {
                    v97 = *((_QWORD*)GameData_212c540 + 1);
                    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                    *((_QWORD*)&GameData_21a6120 + 1) = v97;
                    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
                  }
                  v41 = COERCE_AS(float32x4_t, GameData_21a6120);
                  v43 = v150_.v157;
                  v42 = (char*)v150_.v158;
                  if (v150_.v158 != v150_.v157) {
                    v44 = (char*)v150_.v157;
                    do {
                      v45 = *((float32x4_t*)v44 + 1);
                      v44 += 64;
                      v41 = vaddq_f32(v41, v45);
                    } while (v44 != (char*)v150_.v158);
                    v41 = vmulq_n_f32(
                        v41,
                        0x1.0000000000000p+0f /
                            (float)(unsigned __int64)(((char*)v150_.v158 -
                                                       (char*)v150_.v157) >>
                                                      6));
                    LANES128(v41).n128_u32[3] = 0;
                  }
                  v46 = vsubq_f32(v41, v150_.v165);
                  v47 = vmulq_f32(v46, v46);
                  LANES128(v47).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v47, v47, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v47).n128_u64[0])))
                          .n64_u64[0];
                  v48 = LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v47).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v47).n128_u64[0])))
                                .n64_f32[0] <= 0x0.0p+0f ||
                        v150_.v158 == v150_.v157;
                  if (!v48) {
                    do {
                      v43[1] = vsubq_f32(v43[1], v46);
                      v43 += 4;
                    } while (v43 != (float32x4_t*)v42);
                  }
                  LANES128(v49).n128_u64[0] = LANES128(v41).n128_u64[0];
                  LANES128(v49).n128_u64[1] = LANES128(v41).n128_u32[2];
                  v150_.v165 = v49;
                  v50 = (*(unsigned __int64 (**)(__int64))(
                      (char*)((char*)0x20LL) + v150_.v150[0]))(
                      (__int64)v150_.v150);
                  v51 = *v7;
                  v52 = v50;
                  v53 = (__int64**)v7;
                  v54 = (__int64)v7;
                  if (*v7 != 0) {
                    v55 = (_QWORD*)*v7;
                    do {
                      v56 = v55[4];
                      if (v50 >= v56) {
                        if (v56 >= v50) {
                          while (1) {
                            while (1) {
                              v57 = *(_QWORD*)(v51 + 32);
                              if (v50 >= v57) {
                                break;
                              }
                              v51 = *(_QWORD*)v51;
                              if (v51 == 0) {
                                goto LABEL_214;
                              }
                            }
                            if (v57 >= v50) {
                              goto LABEL_99;
                            }
                            v51 = *(_QWORD*)(v51 + 8);
                            if (v51 == 0) {
                            LABEL_214:
                              String_60a250_alt1("map::at:  key not found");
                            }
                          }
                        }
                        ++v55;
                      }
                      v55 = (_QWORD*)*v55;
                    } while (v55 != nullptr);
                    while (1) {
                      while (1) {
                        v58 = *(_QWORD*)(v51 + 32);
                        v54 = v51;
                        if (v50 >= v58) {
                          break;
                        }
                        v51 = *(_QWORD*)v51;
                        v53 = (__int64**)v54;
                        if (*(_QWORD*)v54 == 0) {
                          goto LABEL_84;
                        }
                      }
                      if (v58 >= v50) {
                        break;
                      }
                      v51 = *(_QWORD*)(v51 + 8);
                      if (v51 == 0) {
                        v53 = (__int64**)(v54 + 8);
                        goto LABEL_84;
                      }
                    }
                  }
                  else {
                  LABEL_84:
                    v59 = v54;
                    v54 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
                    *(_QWORD*)(v54 + 32) = v52;
                    game_map_f54910_alt1(v54 + 48);
                    *(_QWORD*)(v54 + 16) = v59;
                    *(_DWORD*)(v54 + 292) = 0;
                    v60 = (__int64*)v54;
                    *(_BYTE*)(v54 + 296) = 0;
                    *(_QWORD*)v54 = 0;
                    *(_QWORD*)(v54 + 8) = 0;
                    *(_QWORD*)(v54 + 48) = game_map_DeployEffectMeshData_vtable;
                    *v53 = (__int64*)v54;
                    v61 = **(_QWORD**)(a1 + 64);
                    if (v61 != 0) {
                      *(_QWORD*)(a1 + 64) = v61;
                      v60 = *v53;
                    }
                    fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 72),
                                                          v60);
                    ++*(_QWORD*)(a1 + 80);
                  }
                  *(_QWORD*)(v54 + 56) = v150_.v150[1];
                  v62 = v150_.v152;
                  *(_OWORD*)(v54 + 64) = v150_.v151;
                  *(_OWORD*)(v54 + 80) = v62;
                  v63 = v150_.v153;
                  v64 = v150_.v154;
                  v65 = v150_.v156;
                  *(_QWORD*)(v54 + 128) = v150_.v155;
                  *(_QWORD*)(v54 + 136) = v65;
                  *(_OWORD*)(v54 + 96) = v63;
                  *(_OWORD*)(v54 + 112) = v64;
                  if ((_QWORD*)(v54 + 48) != v150_.v150) {
                    GameRoutine_f155c0_alt2(
                        (__int64*)(v54 + 144), (char*)v150_.v157,
                        (char*)v150_.v158,
                        ((char*)v150_.v158 - (char*)v150_.v157) >> 6);
                    CharacterController_d42d20_alt1(
                        v54 + 168, v150_.v159, v150_.v160,
                        (v150_.v160 - v150_.v159) >> 4);
                  }
                  v66 = v150_.v162;
                  v67 = v150_.v165;
                  v68 = (__int64**)v7;
                  v51 = (__int64)v7;
                  v69 = v150_.v163;
                  v70 = v150_.v164;
                  *(_QWORD*)(v54 + 192) = v150_.v161;
                  *(_QWORD*)(v54 + 224) = LANES128(v67).n128_u64[0];
                  *(_QWORD*)(v54 + 208) = v69;
                  *(_QWORD*)(v54 + 216) = v70;
                  v71 = *(_OWORD*)(v54 + 192);
                  *((_QWORD*)&v71 + 1) = v66;
                  v72 = *(_OWORD*)(v54 + 224);
                  *((_QWORD*)&v72 + 1) = LANES128(v67).n128_u32[2];
                  *(_OWORD*)(v54 + 192) = v71;
                  v73 = v150_.v166;
                  v74 = v150_.v167;
                  *(_OWORD*)(v54 + 224) = v72;
                  *(_QWORD*)(v54 + 240) = v73;
                  *(_QWORD*)(v54 + 248) = v74;
                  v75 = v150_.v169;
                  v76 = v150_.v172;
                  *(_QWORD*)(v54 + 256) = v150_.v168;
                  *(_QWORD*)(v54 + 264) = v75;
                  *(_DWORD*)(v54 + 288) = v76;
                  v77 = v150_.v171;
                  *(_QWORD*)(v54 + 272) = v150_.v170;
                  *(_QWORD*)(v54 + 280) = v77;
                  *(float*)&v73 = v150_.v173;
                  *(_BYTE*)(v54 + 296) = v150_.v174;
                  *(_DWORD*)(v54 + 292) = v73;
                  v78 = *v7;
                  if (*v7 != 0) {
                    while (1) {
                      while (1) {
                        v51 = v78;
                        v79 = *(_QWORD*)(v78 + 32);
                        if (v52 >= v79) {
                          break;
                        }
                        v78 = *(_QWORD*)v51;
                        v68 = (__int64**)v51;
                        if (*(_QWORD*)v51 == 0) {
                          goto LABEL_96;
                        }
                      }
                      if (v79 >= v52) {
                        break;
                      }
                      v78 = *(_QWORD*)(v51 + 8);
                      if (v78 == 0) {
                        v68 = (__int64**)(v51 + 8);
                        goto LABEL_96;
                      }
                    }
                  }
                  else {
                  LABEL_96:
                    v80 = v51;
                    v51 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
                    *(_QWORD*)(v51 + 32) = v52;
                    game_map_f54910_alt1(v51 + 48);
                    *(_DWORD*)(v51 + 292) = 0;
                    *(_BYTE*)(v51 + 296) = 0;
                    v81 = (__int64*)v51;
                    *(_QWORD*)v51 = 0;
                    *(_QWORD*)(v51 + 8) = 0;
                    *(_QWORD*)(v51 + 16) = v80;
                    *(_QWORD*)(v51 + 48) = game_map_DeployEffectMeshData_vtable;
                    *v68 = (__int64*)v51;
                    v82 = **(_QWORD**)(a1 + 64);
                    if (v82 != 0) {
                      *(_QWORD*)(a1 + 64) = v82;
                      v81 = *v68;
                    }
                    fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 72),
                                                          v81);
                    ++*(_QWORD*)(a1 + 80);
                  }
                LABEL_99:
                  v83 = *(_QWORD*)(v51 + 48);
                  *(_BYTE*)(v51 + 272) = 1;
                  if (((*(__int64 (**)(__int64))(v83 + 48))(
                           (__int64)(v51 + 48)) &
                       1) != 0) {
                    v84 = 1036831949;
                  }
                  else {
                    v84 = 0;
                    *(_DWORD*)(v51 + 276) = 1065353216;
                  }
                  v90 = v150_.v159;
                  *(_DWORD*)(v51 + 280) = v84;
                  v150_.v150[0] = v144;
                  if (v90 != nullptr) {
                    v150_.v160 = v90;
                    v91 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v91 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v91,
                        (__int64)v90);
                  }
                  v92 = (char*)v150_.v157;
                  if (v150_.v157 != nullptr) {
                    if (v150_.v157 == v150_.v158) {
                      goto LABEL_124;
                    }
                    v93 = (char*)&v150_.v158[-4];
                    v94 = (char*)&v150_.v158[-4];
                    do {
                      v95 = *(void (***)(char*))v94;
                      v94 -= 64;
                      (*v95)(v93);
                      v48 = v93 == v92;
                      v93 = v94;
                    } while (!v48);
                    v150_.v158 = (float32x4_t*)v92;
                    v92 = (char*)v150_.v157;
                    if (v150_.v157 != nullptr) {
                    LABEL_124:
                      v96 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v96 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v96,
                          (__int64)v92);
                    }
                  }
                }
              }
            }
            else {
              MapPanelDeployMove_10452a0(v147, (__int64)v176_.v176);
            }
            LANES128(v176_.v176[0]).n128_u64[0] =
                (unsigned __int64)(GameData_212f8b0[0] + 2);
            if (v176_.v179 != 0) {
              v176_.v180 = v176_.v179;
              v85 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v85 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v176_.v179);
            }
            v86 = v176_.v177;
            if (v176_.v177 != 0) {
              if (v176_.v177 == v176_.v178) {
                goto LABEL_42;
              }
              v87 = (void (***)(_QWORD))(v176_.v178 - 64);
              v88 = (void (***)(_QWORD))(v176_.v178 - 64);
              do {
                v89 = *v88;
                v88 -= 8;
                (*v89)(v87);
                v48 = v87 == (void (***)(_QWORD))v86;
                v87 = v88;
              } while (!v48);
              v176_.v178 = v86;
              v86 = v176_.v177;
              if (v176_.v177 != 0) {
              LABEL_42:
                v31 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v31 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v86);
              }
            }
            goto LABEL_45;
          }
          v38 = 40;
        }
        (*(void (**)(__int64))(*v181_.v182 + v38))((__int64)v181_.v182);
        goto LABEL_54;
      }
    }
  LABEL_129:
    v1 = a1;
    *(_BYTE*)(a1 + 8) = 0;
  }
  v98 = *(float32x4_t**)(v1 + 16);
  v99 = game_script_hub_g_frame_counter_ptr[0];
  if (v98 != (float32x4_t*)(v1 + 24)) {
    do {
      v101 = LANES128(v98[17]).n128_f32[2];
      v102 = (float)(*(float*)(*(_QWORD*)v99 + 160LL) * 0x1.0aef000000000p+4f) /
             0x1.f400000000000p+9f;
      if (v101 <= 0x0.0p+0f) {
        if (LANES128(v98[17]).n128_u8[0] != 0) {
          v105 = 0x1.0000000000000p+0f;
        }
        else {
          v105 = 0x0.0p+0f;
        }
      }
      else {
        v103 = v102 / v101;
        v104 = LANES128(v98[17]).n128_f32[1];
        if (LANES128(v98[17]).n128_u8[0] != 0) {
          v105 = fminf(fmaxf(v103 + v104, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v105 = fminf(fmaxf(v104 - v103, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v98[17]).n128_f32[1] = v105;
      v106 = LANES128(v98[3]).n128_u64[0];
      LANES128(v98[15]).n128_f32[0] = v102 + LANES128(v98[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v106 + 40))(v98 + 3);
      GameRoutine_f54fe0_alt1(v98 + 3);
      if ((LANES128(v98[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v98[17]).n128_f32[1] > 0x0.0p+0f) {
        v107 = (__int64*)LANES128(*(v98)).n128_u64[1];
        if (v107 != nullptr) {
          do {
            v100 = v107;
            v107 = (__int64*)*v107;
          } while (v107 != nullptr);
        }
        else {
          do {
            v100 = (__int64*)LANES128(v98[1]).n128_u64[0];
            v48 = v98 == (float32x4_t*)*v100;
            v98 = (float32x4_t*)v100;
          } while (!v48);
        }
      }
      else {
        v100 = MapPanelDeployMove_1045c00((__int64**)(v1 + 16), (__int64*)v98);
      }
      v98 = (float32x4_t*)v100;
    } while (v100 != (__int64*)(v1 + 24));
  }
  v108 = *(float32x4_t**)(v1 + 40);
  if (v108 != (float32x4_t*)(v1 + 48)) {
    do {
      v110 = LANES128(v108[17]).n128_f32[2];
      v111 = (float)(*(float*)(*(_QWORD*)v99 + 160LL) * 0x1.0aef000000000p+4f) /
             0x1.f400000000000p+9f;
      if (v110 <= 0x0.0p+0f) {
        if (LANES128(v108[17]).n128_u8[0] != 0) {
          v114 = 0x1.0000000000000p+0f;
        }
        else {
          v114 = 0x0.0p+0f;
        }
      }
      else {
        v112 = v111 / v110;
        v113 = LANES128(v108[17]).n128_f32[1];
        if (LANES128(v108[17]).n128_u8[0] != 0) {
          v114 = fminf(fmaxf(v112 + v113, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v114 = fminf(fmaxf(v113 - v112, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v108[17]).n128_f32[1] = v114;
      v115 = LANES128(v108[3]).n128_u64[0];
      LANES128(v108[15]).n128_f32[0] = v111 + LANES128(v108[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v115 + 40))(v108 + 3);
      GameRoutine_f54fe0_alt1(v108 + 3);
      if ((LANES128(v108[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v108[17]).n128_f32[1] > 0x0.0p+0f) {
        v116 = (__int64*)LANES128(*(v108)).n128_u64[1];
        if (v116 != nullptr) {
          do {
            v109 = v116;
            v116 = (__int64*)*v116;
          } while (v116 != nullptr);
        }
        else {
          do {
            v109 = (__int64*)LANES128(v108[1]).n128_u64[0];
            v48 = v108 == (float32x4_t*)*v109;
            v108 = (float32x4_t*)v109;
          } while (!v48);
        }
      }
      else {
        v109 = MapPanelDeployMove_1045c00((__int64**)(v1 + 40), (__int64*)v108);
      }
      v108 = (float32x4_t*)v109;
    } while (v109 != (__int64*)(v1 + 48));
  }
  v117 = *(float32x4_t**)(v1 + 64);
  v118 = (float32x4_t*)(v1 + 72);
  if (v117 != (float32x4_t*)(v1 + 72)) {
    v119 = fw_memory_g_heap_manager_ptr;
    v120 = GameData_212f8b0[0] + 2;
    do {
      v123 = LANES128(v117[17]).n128_f32[2];
      v124 = (float)(*(float*)(*(_QWORD*)v99 + 160LL) * 0x1.0aef000000000p+4f) /
             0x1.f400000000000p+9f;
      if (v123 <= 0x0.0p+0f) {
        if (LANES128(v117[17]).n128_u8[0] != 0) {
          v127 = 0x1.0000000000000p+0f;
        }
        else {
          v127 = 0x0.0p+0f;
        }
      }
      else {
        v125 = v124 / v123;
        v126 = LANES128(v117[17]).n128_f32[1];
        if (LANES128(v117[17]).n128_u8[0] != 0) {
          v127 = fminf(fmaxf(v125 + v126, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v127 = fminf(fmaxf(v126 - v125, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v117[17]).n128_f32[1] = v127;
      v128 = LANES128(v117[3]).n128_u64[0];
      LANES128(v117[15]).n128_f32[0] = v124 + LANES128(v117[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v128 + 40))(v117 + 3);
      GameRoutine_f54fe0_alt1(v117 + 3);
      v129 = (float32x4_t*)LANES128(*(v117)).n128_u64[1];
      if ((LANES128(v117[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v117[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v129 != nullptr) {
          do {
            v131 = v129;
            v129 = (float32x4_t*)LANES128(*(v129)).n128_u64[0];
          } while (v129 != nullptr);
        }
        else {
          do {
            v131 = (float32x4_t*)LANES128(v117[1]).n128_u64[0];
            v48 = v117 == (float32x4_t*)LANES128(*(v131)).n128_u64[0];
            v117 = v131;
          } while (!v48);
        }
      }
      else {
        v130 = v117;
        if (v129 != nullptr) {
          do {
            v131 = v129;
            v129 = (float32x4_t*)LANES128(*(v129)).n128_u64[0];
          } while (v129 != nullptr);
        }
        else {
          do {
            v131 = (float32x4_t*)LANES128(v130[1]).n128_u64[0];
            v48 = v130 == (float32x4_t*)LANES128(*(v131)).n128_u64[0];
            v130 = v131;
          } while (!v48);
        }
        if (*(float32x4_t**)(v1 + 64) == v117) {
          *(_QWORD*)(v1 + 64) = v131;
        }
        v132 = *(__int64**)(v1 + 72);
        --*(_QWORD*)(v1 + 80);
        GameRoutine_64dfe0_alt1(v132, (__int64*)v117);
        v133 = LANES128(v117[10]).n128_i64[1];
        LANES128(v117[3]).n128_u64[0] = (unsigned __int64)v120;
        if (v133 != 0) {
          v134 = *(_QWORD*)v119;
          LANES128(v117[11]).n128_u64[0] = v133;
          if (*(_QWORD*)(v134 + 200) != 0) {
            v135 = 128;
          }
          else {
            v135 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v134 + v135, v133);
        }
        v136 = LANES128(v117[9]).n128_i64[0];
        if (v136 != 0) {
          v137 = LANES128(v117[9]).n128_u64[1];
          if (v136 == v137) {
            goto LABEL_170;
          }
          v138 = (void (***)(_QWORD))(v137 - 64);
          v139 = v119;
          v140 = v120;
          v141 = (void (***)(_QWORD))(v137 - 64);
          do {
            v142 = *v141;
            v141 -= 8;
            (*v142)(v138);
            v48 = v138 == (void (***)(_QWORD))v136;
            v138 = v141;
          } while (!v48);
          v143 = LANES128(v117[9]).n128_i64[0];
          v1 = a1;
          v120 = v140;
          v119 = v139;
          LANES128(v117[9]).n128_u64[1] = v136;
          v136 = v143;
          if (v143 != 0) {
          LABEL_170:
            if (*(_QWORD*)(*(_QWORD*)v119 + 200LL) != 0) {
              v121 = 128;
            }
            else {
              v121 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v119 + v121, v136);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v119 + 200LL) != 0) {
          v122 = 128;
        }
        else {
          v122 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v119 + v122,
                                           (__int64)v117);
      }
      v117 = v131;
    } while (v131 != v118);
  }
}

void MapPanelDeployMove_Unknown4(_QWORD* a1)
{

#pragma clang fp contract(off)
  float32x4_t* v1;
  float32x4_t* v2;
  __int64 v4;
  float32x4_t* v5;
  __int64* v6;
  float32x4_t* v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  int8x16_t v12;
  unsigned __int64 v13;
  __int64 v14;
  float32x4_t* v15;
  float32x4_t v16;
  int8x16_t v17;
  int8x16_t v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  float32x4_t* v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  unsigned __int64 v28;
  __int64* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  bool v45;
  struct {
    __int64 v46[4];
    int8x16_t v47;
    int8x16_t v48;
    __int64 v49;
    int v50;
    char gap76_[4];
    __int64 v51;
    __int64 v52;
    __int64 v53;
    char v54;
  } v46_;

  v1 = (float32x4_t*)a1[11];
  v2 = (float32x4_t*)a1[12];
  if (v1 != v2) {
    v4 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 40LL);
    do {
      game_f313e0(v4, LANES128(*(v1)).n128_u32[0], v1 + 1, v1 + 2);
      v1 += 3;
    } while (v1 != v2);
  }
  v5 = (float32x4_t*)GameData_212c958;
  v6 = GameData_212f878;
  BYTE1(v46_.v46[2]) = 0;
  WORD1(v46_.v46[2]) = 0;
  HIDWORD(v46_.v46[2]) = 0;
  BYTE4(v46_.v53) = 0;
  v46_.v54 = 0;
  v46_.v51 = 0;
  v46_.v52 = 0;
  v7 = (float32x4_t*)*GameData_212f878;
  v8 = *(float32x4_t*)GameData_212c958;
  LOWORD(v46_.v53) = 0;
  v46_.v49 = 0x700000000LL;
  v46_.v50 = 1;
  v10 = v7[39];
  v9 = v7[40];
  strcpy((char*)v46_.v46, "$MapPanelDeployM");
  v11 = vmulq_f32(v8, v9);
  v12 = vmulq_f32(v8, v10);
  LODWORD(v13) = LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u32[0];
  LANES128(v10).n128_u32[0] = LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u32[0];
  HIDWORD(v13) = LANES64_OF(vdup_laneq_s32(v11, 3)).n64_u32[0];
  LANES128(v11).n128_u64[1] = v13;
  LANES128(v10).n128_u32[1] = LANES64_OF(vdup_laneq_s32(v12, 3)).n64_u32[0];
  LANES128(v12).n128_u64[1] = LANES128(v10).n128_u64[0];
  v46_.v47 = v12;
  v46_.v48 = v11;
  game_map_1044ea0(a1 + 2, (__int64)v46_.v46);
  if ((v46_.v46[0] & 1) != 0 && v46_.v46[2] != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v46_.v46[2]);
  }
  memset(v46_.v46, 0, 24);
  v46_.v49 = 0x700000000LL;
  v46_.v50 = 0;
  BYTE4(v46_.v53) = 0;
  v46_.v54 = 0;
  v46_.v51 = 0;
  v46_.v52 = 0;
  LOWORD(v46_.v53) = 0;
  GameRoutine_60a020((__int64)v46_.v46, "MapPanelDeployMoveSelect");
  v15 = (float32x4_t*)*v6;
  v16 = *v5;
  v46_.v49 = 0x700000000LL;
  v46_.v50 = 1;
  v17 = vmulq_f32(v16, v15[42]);
  v18 = vmulq_f32(v16, v15[41]);
  LODWORD(v19) = LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u32[0];
  LODWORD(v20) = LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u32[0];
  HIDWORD(v19) = LANES64_OF(vdup_laneq_s32(v17, 3)).n64_u32[0];
  LANES128(v17).n128_u64[1] = v19;
  HIDWORD(v20) = LANES64_OF(vdup_laneq_s32(v18, 3)).n64_u32[0];
  LANES128(v18).n128_u64[1] = v20;
  v46_.v47 = v18;
  v46_.v48 = v17;
  game_map_1044ea0(a1 + 5, (__int64)v46_.v46);
  if ((v46_.v46[0] & 1) != 0 && v46_.v46[2] != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v46_.v46[2]);
  }
  v22 = (float32x4_t*)*v6;
  v23 = *v5;
  memset(v46_.v46, 0, 24);
  BYTE4(v46_.v53) = 0;
  v46_.v54 = 0;
  v25 = v22[37];
  v24 = v22[38];
  LOWORD(v46_.v53) = 0;
  v46_.v51 = 0;
  v46_.v52 = 0;
  v46_.v50 = 0;
  LOBYTE(v46_.v46[0]) = 12;
  qmemcpy((char*)v46_.v46 + 1, "Deploy", 6);
  v26 = vmulq_f32(v23, v24);
  v27 = vmulq_f32(v23, v25);
  v46_.v49 = 0x800000000LL;
  LODWORD(v28) = LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u32[0];
  LANES128(v25).n128_u32[0] = LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u32[0];
  HIDWORD(v28) = LANES64_OF(vdup_laneq_s32(v26, 3)).n64_u32[0];
  LANES128(v26).n128_u64[1] = v28;
  LANES128(v25).n128_u32[1] = LANES64_OF(vdup_laneq_s32(v27, 3)).n64_u32[0];
  LANES128(v27).n128_u64[1] = LANES128(v25).n128_u64[0];
  v46_.v47 = v27;
  v46_.v48 = v26;
  v29 = (__int64*)GameData_212d018[0];
  v30 = *(_QWORD**)GameData_212d018[0];
  v31 = *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if (v31 >= *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v33 = PrimitiveDrawStack_f525a0(v30 + 2, (__int64)v46_.v46);
  }
  else {
    v32 = v46_.v46[1];
    *(_QWORD*)(v31 + 80) = 0;
    *(_QWORD*)(v31 + 88) = 0;
    v33 = v31 + 112;
    *(_QWORD*)(v31 + 8) = v32;
    v34 = v46_.v46[0];
    *(_QWORD*)(v31 + 16) = v46_.v46[2];
    *(_QWORD*)v31 = v34;
    *(_QWORD*)(v31 + 40) = LANES128(v46_.v47).n128_u64[1];
    v36 = LANES128(v46_.v48).n128_u64[1];
    v35 = v46_.v49;
    v37 = LANES128(v46_.v48).n128_u64[0];
    *(_DWORD*)(v31 + 72) = v46_.v50;
    *(_QWORD*)(v31 + 56) = v36;
    *(_QWORD*)(v31 + 64) = v35;
    *(_QWORD*)(v31 + 48) = v37;
    *(_QWORD*)(v31 + 32) = LANES128(v46_.v47).n128_u64[0];
    v38 = v46_.v53;
    *(_BYTE*)(v31 + 104) = v46_.v54;
    *(_QWORD*)(v31 + 96) = v38;
  }
  v39 = v30[2];
  v30[3] = v33;
  v30[1] = 0x6DB6DB6DB6DB6DB7LL * ((v33 - v39) >> 4) - 1;
  v40 = (_QWORD*)a1[8];
  v41 = a1 + 9;
  if (v40 != v41) {
    do {
      PrimitiveDrawStack_f51430(*v29, (__int64)(v40 + 6));
      v43 = (_QWORD*)v40[1];
      if (v43 != nullptr) {
        do {
          v44 = v43;
          v43 = (_QWORD*)*v43;
        } while (v43 != nullptr);
      }
      else {
        do {
          v44 = (_QWORD*)v40[2];
          v45 = v40 == (_QWORD*)*v44;
          v40 = v44;
        } while (!v45);
      }
      v40 = v44;
    } while (v44 != v41);
  }
  *(_QWORD*)(*v29 + 8) = 1024;
  if ((v46_.v46[0] & 1) != 0 && v46_.v46[2] != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v46_.v46[2]);
  }
}

__int64 MapPanelDeployMove_10452a0(__int64** a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64** v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  long double v18;
  __int128 v19;
  __int128 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 result;
  int v32;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  v6 = a1 + 1;
  v5 = (__int64)a1[1];
  v7 = v4;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = a1 + 1;
  v10 = (__int64)(a1 + 1);
  if (v5 != 0) {
    v11 = a1[1];
    while (1) {
      v12 = v11[4];
      if (v4 >= v12) {
        if (v12 >= v4) {
          while (1) {
            while (1) {
              v13 = *(_QWORD*)(v5 + 32);
              if (v4 >= v13) {
                break;
              }
              v5 = *(_QWORD*)v5;
              if (v5 == 0) {
                goto LABEL_11;
              }
            }
            if (v13 >= v4) {
              goto LABEL_32;
            }
            v5 = *(_QWORD*)(v5 + 8);
            if (v5 == 0) {
            LABEL_11:
              String_60a250_alt1("map::at:  key not found");
            }
          }
        }
        ++v11;
      }
      v11 = (__int64*)*v11;
      if (v11 == nullptr) {
        while (1) {
          while (1) {
            v14 = *(_QWORD*)(v5 + 32);
            v10 = v5;
            if (v4 >= v14) {
              break;
            }
            v5 = *(_QWORD*)v5;
            v9 = (__int64**)v10;
            if (*(_QWORD*)v10 == 0) {
              goto LABEL_17;
            }
          }
          if (v14 >= v4) {
            goto LABEL_20;
          }
          v5 = *(_QWORD*)(v5 + 8);
          if (v5 == 0) {
            v9 = (__int64**)(v10 + 8);
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_17:
  v15 = v10;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
  *(_QWORD*)(v10 + 32) = v7;
  game_map_f54910_alt1(v10 + 48);
  *(_QWORD*)(v10 + 48) = game_map_DeployMeshData_vtable;
  *(_QWORD*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  v16 = (__int64*)v10;
  *(_QWORD*)(v10 + 16) = v15;
  *v9 = (__int64*)v10;
  v17 = (__int64*)**a1;
  if (v17 != nullptr) {
    *a1 = v17;
    v16 = *v9;
  }
  fw_containers_BalanceAfterInsert_alt1(a1[1], v16);
  a1[2] = (__int64*)((char*)a1[2] + 1);
LABEL_20:
  *(_DWORD*)(v10 + 56) = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(v10 + 60) = *(_DWORD*)(a2 + 12);
  *(_OWORD*)(v10 + 64) = *(_OWORD*)(a2 + 16);
  *(_OWORD*)(v10 + 80) = *(_OWORD*)(a2 + 32);
  *(_OWORD*)(v10 + 96) = *(_OWORD*)(a2 + 48);
  v18 = *(long double*)(a2 + 64);
  *(long double*)(v10 + 112) = v18;
  *(_QWORD*)(v10 + 136) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(v10 + 128) = *(_QWORD*)(a2 + 80);
  if (v10 + 48 != a2) {
    GameRoutine_f155c0_alt1(
        (char**)(v10 + 144), *(char**)(a2 + 96), *(char**)(a2 + 104),
        (__int64)(*(_QWORD*)(a2 + 104) - *(_QWORD*)(a2 + 96)) >> 6, v18);
    CharacterController_d42d20_alt1(
        v10 + 168, *(char**)(a2 + 120), *(char**)(a2 + 128),
        (__int64)(*(_QWORD*)(a2 + 128) - *(_QWORD*)(a2 + 120)) >> 4);
  }
  v5 = (__int64)(a1 + 1);
  *(_DWORD*)(v10 + 192) = *(_DWORD*)(a2 + 144);
  *(_DWORD*)(v10 + 196) = *(_DWORD*)(a2 + 148);
  v19 = *(_OWORD*)(v10 + 192);
  *((_QWORD*)&v19 + 1) = *(unsigned int*)(a2 + 152);
  *(_OWORD*)(v10 + 192) = v19;
  *(_QWORD*)(v10 + 216) = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 160);
  *(_DWORD*)(v10 + 224) = *(_DWORD*)(a2 + 176);
  *(_DWORD*)(v10 + 228) = *(_DWORD*)(a2 + 180);
  v20 = *(_OWORD*)(v10 + 224);
  *((_QWORD*)&v20 + 1) = *(unsigned int*)(a2 + 184);
  *(_OWORD*)(v10 + 224) = v20;
  v21 = *(_QWORD*)(a2 + 232);
  v22 = *(_DWORD*)(a2 + 240);
  *(_QWORD*)(v10 + 264) = *(_QWORD*)(a2 + 216);
  *(_QWORD*)(v10 + 280) = v21;
  *(_QWORD*)(v10 + 248) = *(_QWORD*)(a2 + 200);
  v23 = *(_QWORD*)(a2 + 192);
  *(_QWORD*)(v10 + 256) = *(_QWORD*)(a2 + 208);
  *(_QWORD*)(v10 + 240) = v23;
  v24 = *(_QWORD*)(a2 + 224);
  *(_DWORD*)(v10 + 288) = v22;
  *(_QWORD*)(v10 + 272) = v24;
  v25 = *v6;
  if (*v6 != nullptr) {
    while (1) {
      while (1) {
        v5 = (__int64)v25;
        v26 = v25[4];
        if (v7 >= v26) {
          break;
        }
        v25 = *(__int64**)v5;
        v6 = (__int64**)v5;
        if (*(_QWORD*)v5 == 0) {
          goto LABEL_29;
        }
      }
      if (v26 >= v7) {
        break;
      }
      v25 = *(__int64**)(v5 + 8);
      if (v25 == nullptr) {
        v6 = (__int64**)(v5 + 8);
        goto LABEL_29;
      }
    }
  }
  else {
  LABEL_29:
    v27 = v5;
    v5 = fw_memory_HeapManager_Allocate_alt1(*v8, 304, 16, 0);
    *(_QWORD*)(v5 + 32) = v7;
    game_map_f54910_alt1(v5 + 48);
    *(_QWORD*)(v5 + 48) = game_map_DeployMeshData_vtable;
    *(_QWORD*)v5 = 0;
    *(_QWORD*)(v5 + 8) = 0;
    v28 = (__int64*)v5;
    *(_QWORD*)(v5 + 16) = v27;
    *v6 = (__int64*)v5;
    v29 = (__int64*)**a1;
    if (v29 != nullptr) {
      *a1 = v29;
      v28 = *v6;
    }
    fw_containers_BalanceAfterInsert_alt1(a1[1], v28);
    a1[2] = (__int64*)((char*)a1[2] + 1);
  }
LABEL_32:
  v30 = *(_QWORD*)(v5 + 48);
  *(_BYTE*)(v5 + 272) = 1;
  result = (*(__int64 (**)(__int64))(v30 + 48))((__int64)(v5 + 48));
  if ((result & 1) != 0) {
    v32 = 1036831949;
  }
  else {
    v32 = 0;
    *(_DWORD*)(v5 + 276) = 1065353216;
  }
  *(_DWORD*)(v5 + 280) = v32;
  return result;
}

__int64 MapPanelDeployMove_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;

  v2 = a1[11];
  *a1 = game_map_MapPanelDeployMove_vtable;
  if (v2 != 0) {
    a1[12] = v2;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v2);
  }
  GameRoutine_1045980(a1[9]);
  GameRoutine_1045ac0(a1[6]);
  return GameRoutine_1045ac0(a1[3]);
}

void MapPanelDeployMove_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)a1 = game_map_MapPanelDeployMove_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 96) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v4 + v5, v1);
  }
  GameRoutine_1045980_alt1(*(_QWORD**)(a1 + 72));
  GameRoutine_1045ac0_alt1(*(_QWORD**)(a1 + 48));
  GameRoutine_1045ac0_alt1(*(_QWORD**)(a1 + 24));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v6, a1);
}

__int64* MapPanelDeployMove_1045c00(__int64** a1, __int64* a2)
{
  __int64* v2;
  __int64* v4;
  __int64* v5;
  bool v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (__int64*)a2[1];
  if (v2 != nullptr) {
    do {
      v4 = v2;
      v2 = (__int64*)*v2;
    } while (v2 != nullptr);
  }
  else {
    v5 = a2;
    do {
      v4 = (__int64*)v5[2];
      v6 = v5 == (__int64*)*v4;
      v5 = v4;
    } while (!v6);
  }
  if (*a1 == a2) {
    *a1 = v4;
  }
  v7 = a1[1];
  a1[2] = (__int64*)((char*)a1[2] - 1);
  GameRoutine_64dfe0_alt1(v7, a2);
  v8 = a2[21];
  a2[6] = (__int64)(GameData_212f8b0[0] + 2);
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a2[22] = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v10 + v11, v8);
  }
  v12 = a2[18];
  if (v12 != 0) {
    v13 = a2[19];
    if (v12 == v13) {
      goto LABEL_19;
    }
    v14 = (void (***)(_QWORD))(v13 - 64);
    v15 = (void (***)(_QWORD))(v13 - 64);
    do {
      v16 = *v15;
      v15 -= 8;
      (*v16)(v14);
      v6 = v14 == (void (***)(_QWORD))v12;
      v14 = v15;
    } while (!v6);
    v17 = a2[18];
    a2[19] = v12;
    v12 = v17;
    if (v17 != 0) {
    LABEL_19:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v18, v12);
    }
  }
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v19, (__int64)a2);
  return v4;
}

bool game_map_MapPanelDeployMove_UpdateMesh_lambda0_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  int v3;
  int v4;
  __int64 v5;

  v3 = *a2;
  v4 = *a3;
  v5 = *(_QWORD*)GameData_212d020[0];
  return GameRoutine_f097d0(*(_QWORD*)GameData_212d020[0]) != 0 &&
         (game_Unit_IsImmobile() & 1) == 0 &&
         ((*(_DWORD*)(v5 + 4408 + 4LL * ((v3 + 32 * v4) >> 5)) >> v3) & 1) != 0;
}

#pragma GCC visibility pop
