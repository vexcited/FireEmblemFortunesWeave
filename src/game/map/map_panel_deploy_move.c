#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1045980(_QWORD);
__int64 GameRoutine_1045ac0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_map_MapPanelDeployMove_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelDeployMove_Destructor(_QWORD* a1, long double a2);
__int64 MapPanelDeployMove_DeletingDestructor(_QWORD* a1, long double a2);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_f097d0(_QWORD);
__int64 game_Unit_IsImmobile(void);
extern __int64 GameData_212d020[5];
extern __int64* GameData_212f8b0[14];
_QWORD* MapPanelDeployMove_1045c00(_QWORD* a1, _QWORD* a2);
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
__int64 game_map_MapPanelDeployMove_UpdateMesh(__int64 result);
__int64 MapPanelDeployMove_10452a0(__int64** a1, __int64 a2);

__int64 game_map_MapPanelDeployMove_UpdateMesh(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  float v11;
  __int128 v12;
  __int64 v13;
  char v14;
  char v15;
  char* v16;
  char* v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  int v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  float v36;
  float32x4_t v37;
  float32x4_t* v38;
  float32x4_t* v39;
  float32x4_t* v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  bool v44;
  float32x4_t v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64* v49;
  __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int64 v61;
  unsigned int v62;
  float32x4_t v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int128 v67;
  __int128 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 (***v82)(_QWORD);
  __int64 (***v83)(_QWORD);
  __int64 (***v84)(_QWORD);
  __int64 (**v85)(_QWORD);
  __int64 v86;
  __int64 v87;
  float32x4_t* v88;
  float32x4_t* v89;
  float32x4_t* v90;
  __int64 (**v91)(float32x4_t*);
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  __int64 v101;
  _QWORD* v102;
  __int64 v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  __int64 v109;
  _QWORD* v110;
  float* v111;
  float* v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  __int64 v122;
  float* v123;
  float* v124;
  float* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  void (***v130)(_QWORD);
  void (***v131)(_QWORD);
  void (***v132)(_QWORD);
  __int64 v133;
  __int64* v134;
  void (***v135)(_QWORD);
  void (**v136)(_QWORD);
  __int64 v137;
  __int64* v138;
  char v139;
  _QWORD* v140;
  __int64 v141;
  char v142;
  __int64 v143;
  _QWORD v144[2];
  __int128 v145;
  __int128 v146;
  __int128 v147;
  __int128 v148;
  __int64 v149;
  __int64 v150;
  float32x4_t* v151;
  float32x4_t* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  unsigned int v156;
  __int64 v157;
  __int64 v158;
  float32x4_t v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  int v166;
  float v167;
  char v168;
  _QWORD v169[5];
  _QWORD v170[12];
  __int64 (***v171)(_QWORD);
  __int64 (***v172)(_QWORD);
  __int64 v173;
  __int64 v174;
  _QWORD v175[4];
  _QWORD* v176;

  v1 = (_QWORD*)result;
  v143 = result;
  if (*(_BYTE*)(result + 8) == 1) {
    v2 = *(_QWORD**)(result + 16);
    v3 = (_QWORD*)(result + 24);
    v141 = result + 16;
    if (v2 != (_QWORD*)(result + 24)) {
      do {
        v18 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void))(v18 + 48))() & 1) != 0) {
          v19 = 1036831949;
        }
        else {
          v19 = 0;
          *((_DWORD*)v2 + 69) = 0;
        }
        v20 = (_QWORD*)v2[1];
        *((_DWORD*)v2 + 70) = v19;
        if (v20 != nullptr) {
          do {
            v21 = v20;
            v20 = (_QWORD*)*v20;
          } while (v20 != nullptr);
        }
        else {
          do {
            v21 = (_QWORD*)v2[2];
            v44 = v2 == (_QWORD*)*v21;
            v2 = v21;
          } while (!v44);
        }
        v2 = v21;
      } while (v21 != v3);
    }
    v5 = v1 + 5;
    v4 = (_QWORD*)v1[5];
    if (v4 != v1 + 6) {
      do {
        v22 = v4[6];
        *((_BYTE*)v4 + 272) = 0;
        if (((*(__int64 (**)(void))(v22 + 48))() & 1) != 0) {
          v23 = 1036831949;
        }
        else {
          v23 = 0;
          *((_DWORD*)v4 + 69) = 0;
        }
        v24 = (_QWORD*)v4[1];
        *((_DWORD*)v4 + 70) = v23;
        if (v24 != nullptr) {
          do {
            v25 = v24;
            v24 = (_QWORD*)*v24;
          } while (v24 != nullptr);
        }
        else {
          do {
            v25 = (_QWORD*)v4[2];
            v44 = v4 == (_QWORD*)*v25;
            v4 = v25;
          } while (!v44);
        }
        v4 = v25;
      } while (v25 != v1 + 6);
    }
    v6 = (__int64*)v1[8];
    v7 = v1 + 9;
    if (v6 != v1 + 9) {
      do {
        v26 = v6[6];
        *((_BYTE*)v6 + 272) = 0;
        if (((*(__int64 (**)(void))(v26 + 48))() & 1) != 0) {
          v27 = 1036831949;
        }
        else {
          v27 = 0;
          *((_DWORD*)v6 + 69) = 0;
        }
        v28 = (__int64*)v6[1];
        *((_DWORD*)v6 + 70) = v27;
        if (v28 != nullptr) {
          do {
            v29 = v28;
            v28 = (__int64*)*v28;
          } while (v28 != nullptr);
        }
        else {
          do {
            v29 = (__int64*)v6[2];
            v44 = v6 == (__int64*)*v29;
            v6 = v29;
          } while (!v44);
        }
        v6 = v29;
      } while (v29 != v7);
    }
    v140 = v1 + 11;
    v1[12] = v1[11];
    result = (*(__int64 (**)(_QWORD*))(*v1 + 48LL))(v1);
    if ((result & 1) != 0) {
      v8 = (_QWORD*)GameData_212d020[0];
      result = GameRoutine_f097d0(*(_QWORD*)GameData_212d020[0]);
      v9 = result;
      if (result != 0) {
        v10 = *(_DWORD*)(result + 592);
        v11 = (float)(unsigned int)(v10 - 1) * 2.5f;
        if (v10 <= 0) {
          v11 = 0.0f;
        }
        *(_QWORD*)&v12 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)(unsigned int)(*(char*)(result +
                                                                   584) +
                                                          256) *
                                    5.0f) +
                            2.5f) +
                    -0x1.4000000000000p+10f) +
            v11);
        *((_QWORD*)&v12 + 1) = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)(unsigned int)(*(char*)(result +
                                                                   585) +
                                                          256) *
                                    5.0f) +
                            2.5f) +
                    -0x1.4000000000000p+10f) +
            v11);
        *(_OWORD*)v170 = v12;
        result = Unit_6c7fa0();
      }
      v13 = *v8;
      v14 = *(_BYTE*)(*(_QWORD*)(*v8 + 4536LL) + 112LL);
      v15 = *(_BYTE*)(v143 + 112);
      *(_BYTE*)(v143 + 112) = v14;
      v142 = v14;
      v17 = *(char**)(v13 + 248);
      v16 = *(char**)(v13 + 256);
      v139 = v15;
      if (v17 != v16) {
        v138 = GameData_212f8b0[0] + 2;
        while (1) {
          v31 = *v8;
          v32 = *v17;
          v33 = v17[1];
          result = GameRoutine_f097d0(*v8);
          if (result != 0) {
            result = game_Unit_IsImmobile();
            if ((result & 1) == 0 &&
                ((*(_DWORD*)(v31 + 4408 + 4LL * ((int)(v32 + 32 * v33) >> 5)) >>
                  v32) &
                 1) != 0) {
              break;
            }
          }
        LABEL_45:
          v17 += 4;
          if (v17 == v16) {
            goto LABEL_129;
          }
        }
        v175[0] = GameData_2003ce0;
        v176 = v175;
        v34 = MapDrawConst_fcbcc0(v143, 1, v32, v33, v175, 1);
        if (v176 == v175) {
          v35 = 32;
        }
        else {
          if (v176 == nullptr) {
          LABEL_54:
            game_map_f54910(v170);
            v170[0] = game_map_DeployMeshData_vtable;
            GameRoutine_fcacb0(v143, v170, 1, v32, v33, v34, GameData_212c958);
            if ((v142 & 1) != 0) {
              MapPanelDeployMove_10452a0_alt1(v5, v170);
              result = MapDrawConst_fcc4f0(v143, v140, 0, v170, v32, v33,
                                           (unsigned __int16)v34);
              if (v9 != 0) {
                v36 = (float)(fabsf((float)(int)(*(char*)(v9 + 584) - v32)) +
                              fabsf((float)(int)(*(char*)(v9 + 585) - v33))) +
                      -0x1.0000000000000p+0f;
                if (v36 >= 0.0f) {
                  GameRoutine_f0ea80((void*)(v169), 3);
                  game_map_f54910(v144);
                  v167 = v36;
                  v144[0] = game_map_DeployEffectMeshData_vtable;
                  v168 = v139;
                  GameRoutine_fcabb0(v143, v144, 1, v32, v33, v169,
                                     GameData_212c958);
                  if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21a6130,
                           memory_order_acquire) &
                       1) == 0 &&
                      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) !=
                          0) {
                    v93 = *((_QWORD*)GameData_212c540 + 1);
                    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                    *((_QWORD*)&GameData_21a6120 + 1) = v93;
                    __cxa_guard_release(&GameData_21a6130);
                  }
                  v37 = COERCE_AS(float32x4_t, GameData_21a6120);
                  v39 = v151;
                  v38 = v152;
                  if (v152 != v151) {
                    v40 = v151;
                    do {
                      v41 = v40[1];
                      v40 += 4;
                      v37 = vaddq_f32(v37, v41);
                    } while (v40 != v152);
                    v37 = vmulq_n_f32(
                        v37, 0x1.0000000000000p+0f /
                                 (float)(unsigned __int64)(((char*)v152 -
                                                            (char*)v151) >>
                                                           6));
                    LANES128(v37).n128_u32[3] = 0;
                  }
                  v42 = vsubq_f32(v37, v159);
                  v43 = vmulq_f32(v42, v42);
                  LANES128(v43).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v43, v43, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v43).n128_u64[0])))
                          .n64_u64[0];
                  v44 = LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v43).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v43).n128_u64[0])))
                                .n64_f32[0] <= 0.0f ||
                        v152 == v151;
                  if (!v44) {
                    do {
                      v39[1] = vsubq_f32(v39[1], v42);
                      v39 += 4;
                    } while (v39 != v38);
                  }
                  LANES128(v45).n128_u64[0] = LANES128(v37).n128_u64[0];
                  LANES128(v45).n128_u64[1] = LANES128(v37).n128_u32[2];
                  v159 = v45;
                  v46 = (*(__int64 (**)(_QWORD*))((char*)((char*)0x20LL) +
                                                  v144[0]))(v144);
                  v47 = *v7;
                  v48 = v46;
                  v49 = v7;
                  v50 = (__int64)v7;
                  if (*v7 != 0) {
                    v51 = (_QWORD*)*v7;
                    do {
                      v52 = v51[4];
                      if (v46 >= v52) {
                        if (v52 >= v46) {
                          while (1) {
                            while (1) {
                              v53 = *(_QWORD*)(v47 + 32);
                              if (v46 >= v53) {
                                break;
                              }
                              v47 = *(_QWORD*)v47;
                              if (v47 == 0) {
                                goto LABEL_214;
                              }
                            }
                            if (v53 >= v46) {
                              goto LABEL_99;
                            }
                            v47 = *(_QWORD*)(v47 + 8);
                            if (v47 == 0) {
                            LABEL_214:
                              String_60a250("map::at:  key not found");
                            }
                          }
                        }
                        ++v51;
                      }
                      v51 = (_QWORD*)*v51;
                    } while (v51 != nullptr);
                    while (1) {
                      while (1) {
                        v54 = *(_QWORD*)(v47 + 32);
                        v50 = v47;
                        if (v46 >= v54) {
                          break;
                        }
                        v47 = *(_QWORD*)v47;
                        v49 = (__int64*)v50;
                        if (*(_QWORD*)v50 == 0) {
                          goto LABEL_84;
                        }
                      }
                      if (v54 >= v46) {
                        break;
                      }
                      v47 = *(_QWORD*)(v47 + 8);
                      if (v47 == 0) {
                        v49 = (__int64*)(v50 + 8);
                        goto LABEL_84;
                      }
                    }
                  }
                  else {
                  LABEL_84:
                    v55 = v50;
                    v50 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
                    *(_QWORD*)(v50 + 32) = v48;
                    game_map_f54910(v50 + 48);
                    *(_QWORD*)(v50 + 16) = v55;
                    *(_DWORD*)(v50 + 292) = 0;
                    v56 = v50;
                    *(_BYTE*)(v50 + 296) = 0;
                    *(_QWORD*)v50 = 0;
                    *(_QWORD*)(v50 + 8) = 0;
                    *(_QWORD*)(v50 + 48) = game_map_DeployEffectMeshData_vtable;
                    *v49 = v50;
                    v57 = **(_QWORD**)(v143 + 64);
                    if (v57 != 0) {
                      *(_QWORD*)(v143 + 64) = v57;
                      v56 = *v49;
                    }
                    fw_containers_BalanceAfterInsert(*(_QWORD*)(v143 + 72),
                                                     v56);
                    ++*(_QWORD*)(v143 + 80);
                  }
                  *(_QWORD*)(v50 + 56) = v144[1];
                  v58 = v146;
                  *(_OWORD*)(v50 + 64) = v145;
                  *(_OWORD*)(v50 + 80) = v58;
                  v59 = v147;
                  v60 = v148;
                  v61 = v150;
                  *(_QWORD*)(v50 + 128) = v149;
                  *(_QWORD*)(v50 + 136) = v61;
                  *(_OWORD*)(v50 + 96) = v59;
                  *(_OWORD*)(v50 + 112) = v60;
                  if ((_QWORD*)(v50 + 48) != v144) {
                    GameRoutine_f155c0(v50 + 144);
                    CharacterController_d42d20(v50 + 168);
                  }
                  v62 = v156;
                  v63 = v159;
                  v64 = v7;
                  v47 = (__int64)v7;
                  v65 = v157;
                  v66 = v158;
                  *(_QWORD*)(v50 + 192) = v155;
                  *(_QWORD*)(v50 + 224) = LANES128(v63).n128_u64[0];
                  *(_QWORD*)(v50 + 208) = v65;
                  *(_QWORD*)(v50 + 216) = v66;
                  v67 = *(_OWORD*)(v50 + 192);
                  *((_QWORD*)&v67 + 1) = v62;
                  v68 = *(_OWORD*)(v50 + 224);
                  *((_QWORD*)&v68 + 1) = LANES128(v63).n128_u32[2];
                  *(_OWORD*)(v50 + 192) = v67;
                  v69 = v160;
                  v70 = v161;
                  *(_OWORD*)(v50 + 224) = v68;
                  *(_QWORD*)(v50 + 240) = v69;
                  *(_QWORD*)(v50 + 248) = v70;
                  v71 = v163;
                  v72 = v166;
                  *(_QWORD*)(v50 + 256) = v162;
                  *(_QWORD*)(v50 + 264) = v71;
                  *(_DWORD*)(v50 + 288) = v72;
                  v73 = v165;
                  *(_QWORD*)(v50 + 272) = v164;
                  *(_QWORD*)(v50 + 280) = v73;
                  *(float*)&v69 = v167;
                  *(_BYTE*)(v50 + 296) = v168;
                  *(_DWORD*)(v50 + 292) = v69;
                  v74 = *v7;
                  if (*v7 != 0) {
                    while (1) {
                      while (1) {
                        v47 = v74;
                        v75 = *(_QWORD*)(v74 + 32);
                        if (v48 >= v75) {
                          break;
                        }
                        v74 = *(_QWORD*)v47;
                        v64 = (__int64*)v47;
                        if (*(_QWORD*)v47 == 0) {
                          goto LABEL_96;
                        }
                      }
                      if (v75 >= v48) {
                        break;
                      }
                      v74 = *(_QWORD*)(v47 + 8);
                      if (v74 == 0) {
                        v64 = (__int64*)(v47 + 8);
                        goto LABEL_96;
                      }
                    }
                  }
                  else {
                  LABEL_96:
                    v76 = v47;
                    v47 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
                    *(_QWORD*)(v47 + 32) = v48;
                    game_map_f54910(v47 + 48);
                    *(_DWORD*)(v47 + 292) = 0;
                    *(_BYTE*)(v47 + 296) = 0;
                    v77 = v47;
                    *(_QWORD*)v47 = 0;
                    *(_QWORD*)(v47 + 8) = 0;
                    *(_QWORD*)(v47 + 16) = v76;
                    *(_QWORD*)(v47 + 48) = game_map_DeployEffectMeshData_vtable;
                    *v64 = v47;
                    v78 = **(_QWORD**)(v143 + 64);
                    if (v78 != 0) {
                      *(_QWORD*)(v143 + 64) = v78;
                      v77 = *v64;
                    }
                    fw_containers_BalanceAfterInsert(*(_QWORD*)(v143 + 72),
                                                     v77);
                    ++*(_QWORD*)(v143 + 80);
                  }
                LABEL_99:
                  v79 = *(_QWORD*)(v47 + 48);
                  *(_BYTE*)(v47 + 272) = 1;
                  result = (*(__int64 (**)(void))(v79 + 48))();
                  if ((result & 1) != 0) {
                    v80 = 1036831949;
                  }
                  else {
                    v80 = 0;
                    *(_DWORD*)(v47 + 276) = 1065353216;
                  }
                  v86 = v153;
                  *(_DWORD*)(v47 + 280) = v80;
                  v144[0] = v138;
                  if (v86 != 0) {
                    v154 = v86;
                    v87 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v87 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v87);
                  }
                  v88 = v151;
                  if (v151 != nullptr) {
                    if (v151 == v152) {
                      goto LABEL_124;
                    }
                    v89 = v152 - 4;
                    v90 = v152 - 4;
                    do {
                      v91 = (__int64 (**)(float32x4_t*))LANES128(*(v90))
                                .n128_u64[0];
                      v90 -= 4;
                      result = (*v91)(v89);
                      v44 = v89 == v88;
                      v89 = v90;
                    } while (!v44);
                    v152 = v88;
                    if (v151 != nullptr) {
                    LABEL_124:
                      v92 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v92 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v92);
                    }
                  }
                }
              }
            }
            else {
              result = MapPanelDeployMove_10452a0_alt1(v141, v170);
            }
            v170[0] = GameData_212f8b0[0] + 2;
            if (v173 != 0) {
              v174 = v173;
              v81 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v81 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v81);
            }
            v82 = v171;
            if (v171 != nullptr) {
              if (v171 == v172) {
                goto LABEL_42;
              }
              v83 = v172 - 8;
              v84 = v172 - 8;
              do {
                v85 = *v84;
                v84 -= 8;
                result = (*v85)(v83);
                v44 = v83 == v82;
                v83 = v84;
              } while (!v44);
              v172 = v82;
              if (v171 != nullptr) {
              LABEL_42:
                v30 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v30 = 56;
                }
                result = nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
              }
            }
            goto LABEL_45;
          }
          v35 = 40;
        }
        (*(void (**)(__int64))(*v176 + v35))((__int64)v176);
        goto LABEL_54;
      }
    }
  LABEL_129:
    v1 = (_QWORD*)v143;
    *(_BYTE*)(v143 + 8) = 0;
  }
  v94 = v1[2];
  v95 = game_script_hub_g_frame_counter_ptr[0];
  if ((_QWORD*)v94 != v1 + 3) {
    do {
      v96 = *(float*)(v94 + 280);
      v97 = (float)(*(float*)(*(_QWORD*)v95 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v96 <= 0.0f) {
        if (*(_BYTE*)(v94 + 272) != 0) {
          v100 = 0x1.0000000000000p+0f;
        }
        else {
          v100 = 0.0f;
        }
      }
      else {
        v98 = v97 / v96;
        v99 = *(float*)(v94 + 276);
        if (*(_BYTE*)(v94 + 272) != 0) {
          v100 = fminf(fmaxf(v98 + v99, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v100 = fminf(fmaxf(v99 - v98, 0.0f), 0x1.570a3c0000000p-1f);
        }
      }
      *(float*)(v94 + 276) = v100;
      v101 = *(_QWORD*)(v94 + 48);
      *(float*)(v94 + 240) = v97 + *(float*)(v94 + 240);
      (*(void (**)(__int64))(v101 + 40))(v94 + 48);
      GameRoutine_f54fe0(v94 + 48);
      if ((*(_BYTE*)(v94 + 272) & 1) != 0 || *(float*)(v94 + 276) > 0.0f) {
        v102 = *(_QWORD**)(v94 + 8);
        if (v102 != nullptr) {
          do {
            result = (__int64)v102;
            v102 = (_QWORD*)*v102;
          } while (v102 != nullptr);
        }
        else {
          do {
            result = *(_QWORD*)(v94 + 16);
            v44 = v94 == *(_QWORD*)result;
            v94 = result;
          } while (!v44);
        }
      }
      else {
        result = MapPanelDeployMove_1045c00_alt1(v1 + 2, v94);
      }
      v94 = result;
    } while ((_QWORD*)result != v1 + 3);
  }
  v103 = v1[5];
  if ((_QWORD*)v103 != v1 + 6) {
    do {
      v104 = *(float*)(v103 + 280);
      v105 = (float)(*(float*)(*(_QWORD*)v95 + 160LL) * 0x1.0aef000000000p+4f) /
             0x1.f400000000000p+9f;
      if (v104 <= 0.0f) {
        if (*(_BYTE*)(v103 + 272) != 0) {
          v108 = 0x1.0000000000000p+0f;
        }
        else {
          v108 = 0.0f;
        }
      }
      else {
        v106 = v105 / v104;
        v107 = *(float*)(v103 + 276);
        if (*(_BYTE*)(v103 + 272) != 0) {
          v108 = fminf(fmaxf(v106 + v107, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v108 = fminf(fmaxf(v107 - v106, 0.0f), 0x1.570a3c0000000p-1f);
        }
      }
      *(float*)(v103 + 276) = v108;
      v109 = *(_QWORD*)(v103 + 48);
      *(float*)(v103 + 240) = v105 + *(float*)(v103 + 240);
      (*(void (**)(__int64))(v109 + 40))(v103 + 48);
      GameRoutine_f54fe0(v103 + 48);
      if ((*(_BYTE*)(v103 + 272) & 1) != 0 || *(float*)(v103 + 276) > 0.0f) {
        v110 = *(_QWORD**)(v103 + 8);
        if (v110 != nullptr) {
          do {
            result = (__int64)v110;
            v110 = (_QWORD*)*v110;
          } while (v110 != nullptr);
        }
        else {
          do {
            result = *(_QWORD*)(v103 + 16);
            v44 = v103 == *(_QWORD*)result;
            v103 = result;
          } while (!v44);
        }
      }
      else {
        result = MapPanelDeployMove_1045c00_alt1(v1 + 5, v103);
      }
      v103 = result;
    } while ((_QWORD*)result != v1 + 6);
  }
  v111 = (float*)v1[8];
  v112 = (float*)(v1 + 9);
  if (v111 != (float*)(v1 + 9)) {
    v113 = fw_memory_g_heap_manager_ptr;
    v114 = GameData_212f8b0[0] + 2;
    do {
      v117 = v111[70];
      v118 = (float)(*(float*)(*(_QWORD*)v95 + 160LL) * 0x1.0aef000000000p+4f) /
             0x1.f400000000000p+9f;
      if (v117 <= 0.0f) {
        if (*((_BYTE*)v111 + 272) != 0) {
          v121 = 0x1.0000000000000p+0f;
        }
        else {
          v121 = 0.0f;
        }
      }
      else {
        v119 = v118 / v117;
        v120 = v111[69];
        if (*((_BYTE*)v111 + 272) != 0) {
          v121 = fminf(fmaxf(v119 + v120, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v121 = fminf(fmaxf(v120 - v119, 0.0f), 0x1.570a3c0000000p-1f);
        }
      }
      v111[69] = v121;
      v122 = *((_QWORD*)v111 + 6);
      v111[60] = v118 + v111[60];
      (*(void (**)(_QWORD*))(v122 + 40))((_QWORD*)v111 + 6);
      result = GameRoutine_f54fe0(v111 + 12);
      v123 = *((float**)v111 + 1);
      if (((_BYTE)v111[68] & 1) != 0 || v111[69] > 0.0f) {
        if (v123 != nullptr) {
          do {
            v125 = v123;
            v123 = *(float**)v123;
          } while (v123 != nullptr);
        }
        else {
          do {
            v125 = *((float**)v111 + 2);
            v44 = v111 == *(float**)v125;
            v111 = v125;
          } while (!v44);
        }
      }
      else {
        v124 = v111;
        if (v123 != nullptr) {
          do {
            v125 = v123;
            v123 = *(float**)v123;
          } while (v123 != nullptr);
        }
        else {
          do {
            v125 = *((float**)v124 + 2);
            v44 = v124 == *(float**)v125;
            v124 = v125;
          } while (!v44);
        }
        if ((float*)v1[8] == v111) {
          v1[8] = v125;
        }
        v126 = v1[9];
        --v1[10];
        GameRoutine_64dfe0(v126, v111);
        v127 = *((_QWORD*)v111 + 21);
        *((_QWORD*)v111 + 6) = v114;
        if (v127 != 0) {
          v128 = *(_QWORD*)v113;
          *((_QWORD*)v111 + 22) = v127;
          if (*(_QWORD*)(v128 + 200) != 0) {
            v129 = 128;
          }
          else {
            v129 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v128 + v129);
        }
        v130 = *((void (****)(_QWORD))v111 + 18);
        if (v130 != nullptr) {
          v131 = *((void (****)(_QWORD))v111 + 19);
          if (v130 == v131) {
            goto LABEL_170;
          }
          v132 = v131 - 8;
          v133 = v113;
          v134 = v114;
          v135 = v131 - 8;
          do {
            v136 = *v135;
            v135 -= 8;
            (*v136)(v132);
            v44 = v132 == v130;
            v132 = v135;
          } while (!v44);
          v137 = *((_QWORD*)v111 + 18);
          v1 = (_QWORD*)v143;
          v114 = v134;
          v113 = v133;
          *((_QWORD*)v111 + 19) = v130;
          if (v137 != 0) {
          LABEL_170:
            if (*(_QWORD*)(*(_QWORD*)v113 + 200LL) != 0) {
              v115 = 128;
            }
            else {
              v115 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v113 + v115);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v113 + 200LL) != 0) {
          v116 = 128;
        }
        else {
          v116 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v113 + v116);
      }
      v111 = v125;
    } while (v125 != v112);
  }
  return result;
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

__int64 MapPanelDeployMove_Destructor(_QWORD* a1, long double a2)
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
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  a2);
  }
  GameRoutine_1045980(a1[9]);
  GameRoutine_1045ac0(a1[6]);
  return GameRoutine_1045ac0(a1[3]);
}

__int64 MapPanelDeployMove_DeletingDestructor(_QWORD* a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;

  v2 = a1[11];
  *a1 = game_map_MapPanelDeployMove_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[12] = v2;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, a2);
  }
  GameRoutine_1045980(a1[9]);
  GameRoutine_1045ac0(a1[6]);
  GameRoutine_1045ac0(a1[3]);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
}

_QWORD* MapPanelDeployMove_1045c00(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  bool v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (***v16)(_QWORD);
  void (**v17)(_QWORD);
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = (_QWORD*)a2[1];
  if (v2 != nullptr) {
    do {
      v4 = v2;
      v2 = (_QWORD*)*v2;
    } while (v2 != nullptr);
  }
  else {
    v5 = a2;
    do {
      v4 = (_QWORD*)v5[2];
      v6 = v5 == (_QWORD*)*v4;
      v5 = v4;
    } while (!v6);
  }
  if ((_QWORD*)*a1 == a2) {
    *a1 = v4;
  }
  v7 = a1[1];
  --a1[2];
  GameRoutine_64dfe0(v7, a2);
  v9 = a2[21];
  a2[6] = GameData_212f8b0[0] + 2;
  v10 = fw_memory_g_heap_manager_ptr;
  if (v9 != 0) {
    v11 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a2[22] = v9;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(v11 + v12, v8);
  }
  v13 = (void (***)(_QWORD))a2[18];
  if (v13 != nullptr) {
    v14 = (void (***)(_QWORD))a2[19];
    if (v13 == v14) {
      goto LABEL_19;
    }
    v15 = v14 - 8;
    v16 = v14 - 8;
    do {
      v17 = *v16;
      v16 -= 8;
      (*v17)(v15);
      v6 = v15 == v13;
      v15 = v16;
    } while (!v6);
    v18 = a2[18];
    a2[19] = v13;
    if (v18 != 0) {
    LABEL_19:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v19, v8);
    }
  }
  v20 = 128;
  if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
    v20 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v20, v8);
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
