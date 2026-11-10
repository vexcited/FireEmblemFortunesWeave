#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c9f20;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
unsigned __int64 FastTravelManager_ee0380(__int64 a1);
__attribute__((swiftcall)) void
    FastTravelManager_ee05e0_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD,
                                  _QWORD) __asm__("FastTravelManager_ee05e0");
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8,
                                                     unsigned __int8*);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__attribute__((swiftcall)) void game_hub_e28d20(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_dbf7e0(__int64);
__int64 GameRoutine_ee23a0(__int64);
__int64 GameRoutine_ee34c0(__int64*, __int64);
__int64 GameRoutine_ee3920(__int64*, __int64);
__int64 GameRoutine_f71cb0(__int64, int);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GlobalMapData_e27700(__int64, __int64, __int64, __int64, __int64,
                             __int64*, _DWORD*);
__int64 LocatorDispos_db2560(__int64, unsigned __int8*);
__int64 UnitUtil_1212140(unsigned __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_1a8a29f;
extern _UNKNOWN GameData_1ac3e7d;
extern __int64 (*GameData_1fef700[])();
extern __int64 (*GameData_1fef750[])();
extern __int64 (*GameData_1fef7a0[])();
extern __int64 (*GameData_1fef7f0[])();
extern __int64 (*GameData_1fef840[])();
extern __int64 (*GameData_1fef890[])();
extern __int64 (*game_hub_FastTravelFacilityData_vtable[])();
extern __int64 (*game_hub_FastTravelSpotData_vtable[])();
extern __int64 (*game_hub_FastTravelUnitData_vtable[])();
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebe0;
extern __int64* GameData_212ef18[2];
extern __int64 GameData_212cda8[18];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dc68;
extern __int64 GameData_212ec00;
extern __int64 game_GameModeData_instance_;
float GameRoutine_d90d90(__int64, __int64);
unsigned __int64 game_hub_e286a0(__int64, __int64*);
void GameRoutine_d90ea0(__int64, __int64);
void GameRoutine_ee3be0(char*, char*, __int64, char);
void GameRoutine_ee6e80(char*, char*, __int64, char);
void GameRoutine_ee85a0(char*, char*, __int64, char, __n128);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_dd28c0();
void __attribute__((noreturn)) GameRoutine_ee3450();
void __attribute__((noreturn)) GameRoutine_ee3470();
void __attribute__((noreturn)) GameRoutine_ee3490();
void __attribute__((noreturn)) GameRoutine_ee38f0();
void __attribute__((noreturn)) GameRoutine_ee3bb0();
void __attribute__((noreturn)) String_60a230(void);
__attribute__((swiftcall)) void
FastTravelManager_ee05e0(PSEUDO_X8 x8_, __int64 unused_int0, float32x4_t* a1,
                         __int64 a2, int a3, int a4, __int64 a5, int a6);
__n128 game_hub_FastTravelManager_RefreshTravelList(__int64 a1);
__int64 FastTravelManager_ee24d0(__int64 a1, __int64 a2);

unsigned __int64 FastTravelManager_ee0380(__int64 a1)
{
  unsigned __int64 v1;
  bool v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  char v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  char* v12;
  char* v13;
  char* v14;
  unsigned __int64 result;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;

  v1 = *(unsigned __int8*)(GameData_21f3d10 + 40);
  v2 = (v1 & 1) == 0;
  v3 = v1 >> 1;
  if (v2) {
    v4 = v3;
  }
  else {
    v4 = *(_QWORD*)(GameData_21f3d10 + 48);
  }
  if (v2) {
    v5 = GameData_21f3d10 + 41;
  }
  else {
    v5 = *(_QWORD*)(GameData_21f3d10 + 56);
  }
  v6 = v4 + 3;
  if (v4 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  if (v6 > 0x16) {
    if ((v6 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v6 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
    v27 = v4 + 3;
    v28 = (char*)v9;
    v26 = v10 | 1;
    v8 = v10 | 1;
  }
  else {
    v8 = 2 * v6;
    v9 = 0;
    v27 = 0;
    v28 = nullptr;
    v26 = (unsigned __int8)(2 * v6);
  }
  v11 = (v8 & 1) == 0;
  if ((v8 & 1) != 0) {
    v12 = (char*)v9;
  }
  else {
    v12 = (char*)&v26 + 1;
  }
  v12[2] = 95;
  *(_WORD*)v12 = 21574;
  if (v11) {
    v13 = (char*)&v26 + 4;
  }
  else {
    v13 = (char*)(v9 + 3);
  }
  if (v4 != 0) {
    memmove(v13, v5, v4);
  }
  v13[v4] = 0;
  if ((v26 & 1) != 0) {
    v14 = v28;
  }
  else {
    v14 = (char*)&v26 + 1;
  }
  result = game_HashString(v14);
  if (result != 0) {
    v16 = *(_QWORD*)(GameData_21c9f20 + 96);
    if (v16 != 0 && *(_QWORD*)(GameData_21c9f20 + 112) != 0) {
      v18 = v16 - 1;
      if ((v16 & (v16 - 1)) != 0) {
        v19 = result;
        if (result >= v16) {
          v19 = result % v16;
        }
      }
      else {
        v19 = v18 & result;
      }
      v20 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f20 + 88) + 8 * v19);
      if (v20 != nullptr) {
        v21 = (_QWORD*)*v20;
        if (v21 != nullptr) {
          if ((v16 & v18) == 0) {
            while (1) {
              v24 = v21[1];
              if (v24 == result) {
                if (v21[2] == result) {
                  goto LABEL_56;
                }
              }
              else if ((v24 & v18) != v19) {
                goto LABEL_49;
              }
              v21 = (_QWORD*)*v21;
              v23 = 0;
              if (v21 == nullptr) {
                goto LABEL_50;
              }
            }
          }
          do {
            v22 = v21[1];
            if (v22 == result) {
              if (v21[2] == result) {
              LABEL_56:
                v23 = v21[3];
                goto LABEL_50;
              }
            }
            else {
              if (v22 >= v16) {
                v22 %= v16;
              }
              if (v22 != v19) {
                break;
              }
            }
            v21 = (_QWORD*)*v21;
          } while (v21 != nullptr);
        }
      }
    }
  }
LABEL_49:
  v23 = 0;
LABEL_50:
  *(_QWORD*)(a1 + 8) = v23;
  if ((v26 & 1) != 0 && v28 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v28);
  }
  return result;
}

__attribute__((swiftcall)) void

FastTravelManager_ee05e0(PSEUDO_X8 x8_, __int64 unused_int0, float32x4_t* a1,
                         __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  _QWORD* a7 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v7;
  _QWORD* v8;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  bool v22;
  _BOOL4 v23;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  float v54;
  float v55;
  int v56;
  __int64 v58;

  v7 = *(_QWORD**)a5;
  v8 = *(_QWORD**)(a5 + 8);
  *a7 = 0;
  a7[1] = 0;
  if (v7 != v8) {
    v58 = a2 + 1;
    v14 = 0x1.fffffe0000000p+127;
    do {
      v15 = *v7;
      if (*(_DWORD*)(*v7 + 32LL) != a3) {
        goto LABEL_3;
      }
      v16 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 32LL);
      v17 = strlen(v16);
      v18 = *(_BYTE*)a2 >> 1;
      if ((*(_BYTE*)a2 & 1) != 0) {
        v18 = *(_QWORD*)(a2 + 8);
      }
      if (v17 != v18) {
        goto LABEL_3;
      }
      v19 = v17;
      if (v17 == -1) {
        String_60a230();
      }
      v20 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : v58;
      if ((unsigned int)memcmp(v20, v16, v19) != 0) {
        goto LABEL_3;
      }
      v21 = *(_DWORD*)(v15 + 36);
      v22 =
          v21 != 0 && (*(_DWORD*)(*GameData_212ebb0[0] + 32) & (1 << v21)) == 0;
      v23 = !v22;
      if (v21 != a4 || !v23) {
        goto LABEL_3;
      }
      v25 = *(_QWORD*)(v15 + 24);
      if (v25 == 0) {
        goto LABEL_34;
      }
      v26 = std___1___shared_weak_count_lock(v25);
      if (v26 == 0) {
        goto LABEL_34;
      }
      v28 = *(_QWORD*)(v15 + 16);
      if (v28 != 0) {
        LANES128(v29).n128_u64[0] = *(_QWORD*)(v28 + 160);
        LODWORD(v27) = *(_DWORD*)(v28 + 168);
        LANES128(v29).n128_u64[1] = v27;
        v30 = vsubq_f32(v29, *a1);
        LANES128(v30).n128_u32[1] = vmuls_lane_f32(
            4.0f, COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]), 1);
        v31 = vmulq_f32(v30, v30);
        LANES128(v31).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                .n64_u64[0];
        v32 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                  .n64_f32[0];
        if (v32 < v14) {
          v34 = *v7;
          v33 = v7[1];
          if (v33 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                      memory_order_relaxed);
          }
          v35 = a7[1];
          *a7 = v34;
          a7[1] = v33;
          if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            v36 = v26;
            v55 = v32;
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
            std___1___shared_weak_count___release_weak(v35);
            v32 = v55;
            v26 = v36;
          }
          v14 = v32;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v53 = v26;
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak(v53);
        if ((a6 & 1) != 0) {
        LABEL_35:
          v37 = *(__int64**)(*v7 + 80LL);
          v38 = *(__int64**)(*v7 + 88LL);
          while (v37 != v38) {
            v39 = v37[1];
            if (v39 != 0) {
              v40 = std___1___shared_weak_count_lock(v39);
              if (v40 != 0) {
                v42 = *v37;
                if (*v37 != 0) {
                  LANES128(v43).n128_u64[0] = *(_QWORD*)(v42 + 160);
                  LODWORD(v41) = *(_DWORD*)(v42 + 168);
                  LANES128(v43).n128_u64[1] = v41;
                  v44 = vsubq_f32(v43, *a1);
                  LANES128(v44).n128_u32[1] = vmuls_lane_f32(
                      4.0f, COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                      1);
                  v45 = vmulq_f32(v44, v44);
                  LANES128(v45).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v45, v45, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v45).n128_u64[0])))
                          .n64_u64[0];
                  v46 = LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v45).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v45).n128_u64[0])))
                            .n64_f32[0];
                  if (v46 < v14) {
                    v48 = *v7;
                    v47 = v7[1];
                    if (v47 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v47 + 8), 1u,
                          memory_order_relaxed);
                    }
                    v49 = a7[1];
                    *a7 = v48;
                    a7[1] = v47;
                    if (v49 != 0 &&
                        atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v56 = a4;
                      v50 = a6;
                      v51 = v40;
                      v54 = v46;
                      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                      std___1___shared_weak_count___release_weak(v49);
                      v46 = v54;
                      v40 = v51;
                      a6 = v50;
                      a4 = v56;
                    }
                    v14 = v46;
                  }
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v52 = v40;
                  (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
                  std___1___shared_weak_count___release_weak(v52);
                }
              }
            }
            v37 += 2;
          }
        }
      }
      else {
      LABEL_34:
        if ((a6 & 1) != 0) {
          goto LABEL_35;
        }
      }
    LABEL_3:
      v7 += 2;
    } while (v7 != v8);
  }
}

__n128 game_hub_FastTravelManager_RefreshTravelList(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int* v18;
  int v19;
  int v20;
  bool v21;
  _BOOL4 v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  __int64* v26;
  _QWORD* v27;
  __n128 result;
  __int64 v29;
  __int64 v30;
  __n128 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  _BYTE* v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  unsigned __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64 v54;
  __int64* v55;
  int8x16_t v56;
  __int64 v57;
  __int64 v58;
  int8x16_t v59;
  unsigned __int64 v60;
  int v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  bool v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  char* v69;
  bool v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int128 v76;
  __int128 v77;
  __int64 v78;
  unsigned __int64 v79;
  char v80;
  int8x16_t v81;
  unsigned int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  _BOOL4 v99;
  _QWORD* v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  _QWORD* v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  atomic_ullong* v114;
  __int64 v115;
  __int64 v116;
  _QWORD* v117;
  __int64* v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64* v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  char* v130;
  __int64 v131;
  unsigned __int64 add;
  _QWORD* v133;
  _QWORD* v134;
  __int64* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  bool v144;
  __int128 v146;
  __int64 v147;
  __int64 v148;
  unsigned int v149;
  unsigned int v150;
  unsigned __int8* v151;
  _QWORD* v152;
  __int64 v153;
  __int64 v154;
  unsigned __int64 v155;
  _QWORD* v156;
  __int64 v157;
  __int64 v158;
  char* v159;
  unsigned __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  char* v164;
  unsigned __int64 v165;
  __int64 v166;
  __int64 v167;
  char* v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  _QWORD* v173;
  __int64* v174;
  __int64* v175;
  __int64* v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  int8x16_t v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  int8x16_t v185;
  unsigned int v186;
  __int64 v187;
  int8x16_t v188;
  unsigned __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int128 v195;
  __int64*** v196;
  __int64** v197;
  __int64** v198;
  __int64* v199;
  __int64* v200;
  unsigned __int64 v201;
  __int64 v202;
  __int64* v203;
  unsigned __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  int8x16_t v213;
  __int64 v214;
  __int128 v215;
  _QWORD* v216;
  __int64* v217;
  unsigned __int64 v218;
  __int64 v219;
  __int64 v220;
  char* v221;
  unsigned __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64* v227;
  __int64 v228;
  __int64 v229;
  char* v230;
  __int64 v231;
  __int64*** v232;
  __int64** v233;
  __int64** v234;
  __int64* v235;
  __int64* v236;
  unsigned __int64 v237;
  __int64 v238;
  __int64* v239;
  unsigned __int64 v240;
  __int64* v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  int8x16_t v249;
  __int64 v250;
  _QWORD* v251;
  __int64* v252;
  unsigned __int64 v253;
  __int64 v254;
  __int64 v255;
  char* v256;
  unsigned __int64 v257;
  __int64 v258;
  unsigned __int64 v259;
  __int64 v260;
  __int64* v261;
  unsigned __int64 v262;
  __int64 v263;
  __int64 v264;
  char* v265;
  __int64 v266;
  unsigned __int64 v267;
  unsigned __int64 v268;
  _QWORD* v269;
  _QWORD* v270;
  _QWORD* v271;
  __int64 v272;
  _QWORD* v273;
  _QWORD* v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  _QWORD* v279;
  _QWORD* v280;
  __int64 v281;
  __int64* v282;
  __int64 v283;
  __int64 v284;
  char* v285;
  char* v286;
  char* v287;
  char* v288;
  __int64 v289;
  char* v290;
  char* v291;
  __int64 v292;
  __int64 v293;
  int8x16_t v294;
  atomic_ullong* v295;
  unsigned __int64 v296;
  __int64 v297;
  _QWORD* v298;
  atomic_ullong* v299;
  __int64* v300;
  __int64* v301;
  _QWORD* v302;
  struct {
    _QWORD v303[4];
    _QWORD* v304;
  } v303_;
  struct {
    _QWORD* v305;
    __int64 v306;
  } v305_;
  struct {
    __int128 v307;
    __int64 v308;
  } v307_;
  struct {
    _QWORD v309[2];
    char* v310;
  } v309_;
  struct {
    int8x16_t v311;
    __int64 v312;
    char gap200_[8];
    unsigned __int8 v313;
  } v311_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(a1 + 56) = 7;
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
    *(_DWORD*)(a1 + 56) = 6;
    if (*(int*)(v2 + 64) <= 4) {
      v3 = 6;
    }
    else {
      v3 = 0;
    }
    *(_DWORD*)(a1 + 56) = v3;
  }
  v4 = (__int64*)GameData_212dbb8[0];
  v5 = *(_QWORD*)GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v6 = *(_QWORD*)GameData_212dbb8[0] + 65LL;
  }
  v7 = game_HashString_alt1(v6),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v7 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)GameData_212cda8[0] + 96LL);
    v9 = v8 == 0 || *(_QWORD*)(*(_QWORD*)GameData_212cda8[0] + 112LL) == 0;
    if (!v9) {
      v10 = v8 - 1;
      if ((v8 & (v8 - 1)) != 0) {
        v11 = v7;
        if (v7 >= v8) {
          v11 = v7 % v8;
        }
      }
      else {
        v11 = v10 & v7;
      }
      v12 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)GameData_212cda8[0] + 88LL) +
                        8 * v11);
      if (v12 != nullptr) {
        v13 = (_QWORD*)*v12;
        if (v13 != nullptr) {
          if ((v8 & v10) == 0) {
            while (1) {
              v15 = v13[1];
              if (v15 == v7) {
                if (v13[2] == v7) {
                  goto LABEL_35;
                }
              }
              else if ((v15 & v10) != v11) {
                goto LABEL_51;
              }
              v13 = (_QWORD*)*v13;
              if (v13 == nullptr) {
                goto LABEL_51;
              }
            }
          }
          do {
            v14 = v13[1];
            if (v14 == v7) {
              if (v13[2] == v7) {
              LABEL_35:
                v16 = *(_QWORD*)(v5 + 48);
                if ((*(_BYTE*)(v5 + 40) & 1) == 0) {
                  v16 = *(_BYTE*)(v5 + 40) >> 1;
                }
                if (v16 == 7) {
                  v17 = v13[3];
                  v18 = (*(_BYTE*)(v5 + 40) & 1) != 0 ? *(int**)(v5 + 56)
                                                      : (int*)(v5 + 41);
                  v19 = *v18;
                  v20 = *(int*)((char*)v18 + 3);
                  v21 = v19 == *(_DWORD*)"Hub_000" && v20 == *(_DWORD*)"_000";
                  v22 = !v21;
                  if (v17 != 0 && !v22 && *(int*)(v17 + 124) >= 1) {
                    LANES128(v311_.v311).n128_u64[1] =
                        (unsigned __int64)&GameData_1a8a29f;
                    LANES128(v311_.v311)
                        .n128_u64[0] =
                        game_HashString_alt1((__int64)&GameData_1a8a29f),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    game_VariableManager_SetFlag((__int64)&v311_.v311, 1),
                        result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v31 = COERCE_AS(__typeof__(v31),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v80 = COERCE_AS(
                            __typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                }
                break;
              }
            }
            else {
              if (v14 >= v8) {
                v14 %= v8;
              }
              if (v14 != v11) {
                break;
              }
            }
            v13 = (_QWORD*)*v13;
          } while (v13 != nullptr);
        }
      }
    }
  }
LABEL_51:
  v23 = *(_QWORD*)(a1 + 16);
  for (i = *(_QWORD*)(a1 + 24); i != v23; i -= 16) {
    v25 = *(_QWORD*)(i - 8);
    if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v25),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  *(_QWORD*)(a1 + 24) = v23;
  v26 = (__int64*)fw_memory_g_heap_manager_ptr;
  v27 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = *(_QWORD*)(a1 + 48);
  v27[1] = 0;
  v27[2] = 0;
  v27[4] = 0;
  v27[5] = 0;
  v27[6] = 0;
  v27[7] = 0;
  v27[8] = 0;
  v27[9] = 0;
  v27[10] = 0;
  v27[11] = 0;
  *(_QWORD*)(a1 + 48) = v27;
  *v27 = GameData_1fef700;
  v27[3] = 0;
  *(_QWORD*)(a1 + 40) = v27 + 3;
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak_alt1(v29),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_QWORD*)(a1 + 8) == 0) {
      return result;
    }
  }
  else if (*(_QWORD*)(a1 + 8) == 0) {
    return result;
  }
  v30 = *v4;
  v301 = (__int64*)(a1 + 16);
  LANES128(v311_.v311).n128_u8[0] = 4;
  strcpy(&LANES128(v311_.v311).n128_i8[1], "A1");
  LocatorDispos_db2180((void*)(v309_.v309), (unsigned __int8*)(v30 + 40),
                       (unsigned __int8*)&v311_.v311),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((LANES128(v311_.v311).n128_u8[0] & 1) != 0 && v311_.v312 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*v26 + 200) == 0) {
      v33 = 56;
    }
    v31 = nn_mem_StandardAllocator_Free_alt1(*v26 + v33),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v34 = *(_QWORD*)(a1 + 8);
  v302 = (_QWORD*)a1;
  v35 = **(_QWORD**)(v34 + 40);
  v36 = GameData_212ec00;
  v37 = *(_QWORD*)(*(_QWORD*)(v34 + 40) + 8LL) - v35;
  if ((int)((unsigned __int64)v37 >> 3) >= 1) {
    v38 = 0;
    while (1) {
      if (v38 >= v37 >> 3) {
        GameRoutine_dd28c0(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v39 = *(_QWORD*)(v35 + 8 * v38);
      v40 = *(_BYTE**)(v39 + 48);
      if (v40 != nullptr && *v40 != 0) {
        v41 = strlen(*(_QWORD*)(v39 + 48)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v41 != 0) {
          v42 = *(_QWORD**)(*(_QWORD*)v36 + 8LL);
          v43 = *(_QWORD**)(*(_QWORD*)v36 + 16LL);
          if (v42 != v43) {
            break;
          }
        }
      LABEL_67:
        v34 = v302[1];
      }
      ++v38;
      v35 = **(_QWORD**)(v34 + 40);
      v37 = *(_QWORD*)(*(_QWORD*)(v34 + 40) + 8LL) - v35;
      if ((__int64)v38 >= (int)((unsigned __int64)v37 >> 3)) {
        goto LABEL_220;
      }
    }
    v44 = v41;
    while (1) {
      v45 = *v42;
      if ((*(_BYTE*)(*v42 + 16LL) & 1) == 0) {
        v46 = *(unsigned __int8*)(v45 + 112);
        v47 = *(_QWORD*)(v45 + 120);
        if ((v46 & 1) == 0) {
          v47 = v46 >> 1;
        }
        if (v44 == v47) {
          v48 = (v46 & 1) != 0 ? *(_QWORD*)(v45 + 128) : v45 + 113;
          if ((unsigned int)memcmp(v40, v48, v44) == 0) {
            break;
          }
        }
      }
      v42 += 2;
      if (v42 == v43) {
        goto LABEL_67;
      }
    }
    v49 = v42[1];
    if (v49 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                memory_order_relaxed);
    }
    v50 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v26, 144, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v50[1] = 0;
    v50[4] = 0;
    v52 = v50 + 4;
    v53 = v50;
    v50[2] = 0;
    v50[5] = 0;
    v50[6] = 0;
    v50[7] = 0;
    v50[8] = 0;
    *v50 = GameData_1fef750;
    v295 = (atomic_ullong*)(v50 + 1);
    v50[9] = 0;
    v50[10] = 0;
    v50[11] = 0;
    v50[12] = 0;
    v50[13] = 0;
    v50[14] = 0;
    *((_DWORD*)v50 + 8) = 1;
    *((_DWORD*)v50 + 16) = 0;
    v50[6] = 0;
    v50[7] = 0;
    v50[14] = 0;
    v50[15] = 0;
    v50[15] = 0;
    v50[16] = 0;
    v50[16] = 0;
    v50[17] = 0;
    *((_BYTE*)v50 + 136) = 0;
    v50[5] = v39;
    v297 = v49;
    if (v49 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                                memory_order_relaxed);
      v54 = v50[7];
      v53[6] = v45;
      v53[7] = v49;
      if (v54 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v54),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v50[6] = v45;
      v50[7] = 0;
    }
    v55 = GameData_212ebb0[0];
    LANES128(v56).n128_u64[0] = *(_QWORD*)(v45 + 160);
    LODWORD(v51) = *(_DWORD*)(v45 + 168);
    v57 = *GameData_212ebb0[0];
    LANES128(v56).n128_u64[1] = v51;
    v311_.v311 = v56;
    *((_DWORD*)v53 +
      16) = GameRoutine_f71d40(v57, (__int64)&v311_.v311, v45 + 376),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v58 = *v55;
    LANES128(v59).n128_u64[0] = *(_QWORD*)(v45 + 160);
    LODWORD(v60) = *(_DWORD*)(v45 + 168);
    LANES128(v59).n128_u64[1] = v60;
    v311_.v311 = v59;
    v61 = game_hub_f71fc0(v58, (__int64)&v311_.v311, v45 + 376),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v62 = LOBYTE(v309_.v309[0]);
    v64 = v309_.v309[1];
    v63 = v309_.v310;
    v65 = (v309_.v309[0] & 1) == 0;
    *((_DWORD*)v53 + 17) = v61;
    v66 = v62 >> 1;
    v307_.v308 = 0;
    v307_.v307 = (__typeof__(v307_.v307)){0};
    LODWORD(v305_.v305) = 0;
    if (v65) {
      v67 = v66;
    }
    else {
      v67 = v64;
    }
    v68 = *(unsigned __int8*)(v45 + 376);
    if (v65) {
      v69 = (char*)v309_.v309 + 1;
    }
    else {
      v69 = v63;
    }
    v70 = (v68 & 1) == 0;
    v71 = v68 >> 1;
    if (v70) {
      v72 = v45 + 377;
    }
    else {
      v72 = *(_QWORD*)(v45 + 392);
    }
    if (v70) {
      v73 = v71;
    }
    else {
      v73 = *(_QWORD*)(v45 + 384);
    }
    v74 = GlobalMapData_e27700(*GameData_212ef18[0], (__int64)v69, v67, v72,
                               v73, (__int64*)&v307_.v307, &v305_.v305),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v74 == 2) {
      v79 = game_hub_e286a0(*GameData_212ef18[0], (__int64*)&v307_.v307),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v80 & 1) == 0) {
        goto LABEL_117;
      }
      game_hub_e28d20((void*)(&v311_.v311), v79, v79),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v81 = v294;
      LANES128(v81).n128_u8[0] = 0;
      if (v311_.v313 != 0) {
        v82 = -1;
      }
      else {
        v82 = 0;
      }
      v294 = vbslq_s8(vdupq_n_s8(v82), v311_.v311, v81);
      if (*((unsigned __int8*)v53 + 96) == v311_.v313) {
        if (*((_BYTE*)v53 + 96) != 0) {
          DWORD2(v76) = LANES128(v294).n128_u32[2];
          v53[10] = LANES128(v294).n128_u64[0];
        LABEL_106:
          v77 = *((_OWORD*)v53 + 5);
          *((_QWORD*)&v77 + 1) = DWORD2(v76);
          *((_OWORD*)v53 + 5) = v77;
          v78 = v307_.v307;
          if ((_QWORD)v307_.v307 == 0) {
            goto LABEL_175;
          }
          goto LABEL_118;
        }
      LABEL_117:
        v78 = v307_.v307;
        if ((_QWORD)v307_.v307 == 0) {
        LABEL_175:
          v96 = *(_QWORD*)(v53[5] + 24LL);
          if ((*(_BYTE*)v96 & 1) != 0) {
            v97 = *(_QWORD*)(v96 + 16);
          }
          else {
            v97 = v96 + 1;
          }
          LANES128(v311_.v311).n128_u64[1] = v97;
          LANES128(v311_.v311).n128_u64[0] = game_HashString_alt1(v97),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v99 = false;
          if (game_GameModeData_instance_ != 0) {
            v98 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                LANES128(v311_.v311).n128_u64),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v98 != 0 && *(_DWORD*)(v98 + 32) != 0) {
              v99 = true;
            }
          }
          *((_DWORD*)v53 + 8) = v99;
          LANES128(v311_.v311).n128_u8[0] = 12;
          strcpy(&LANES128(v311_.v311).n128_i8[1], "Temple");
          *((_BYTE*)v53 +
            136) =
              LocatorDispos_db2560(v45 + 376, (unsigned __int8*)&v311_.v311) &
              1,
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v100 = (_QWORD*)v302[3];
          v101 = v302[4];
          if ((unsigned __int64)v100 >= v101) {
            v103 = *v301;
            v104 = (__int64)v100 - *v301;
            v105 = (v104 >> 4) + 1;
            if (v105 >> 60 != 0) {
              GameRoutine_ee3450(),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v106 = v101 - v103;
            if (v106 >> 3 > v105) {
              v105 = v106 >> 3;
            }
            if ((unsigned __int64)v106 >= 0x7FFFFFFFFFFFFFF0LL) {
              v107 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v107 = v105;
            }
            if (v107 >> 60 != 0) {
            LABEL_430:
              GameRoutine_60a210(),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v108 = fw_memory_HeapManager_Allocate_alt1(*v26, 16 * v107, 16, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v109 = (_QWORD*)(v108 + v104);
            v110 = v108 + 16 * v107;
            *v109 = v52;
            v109[1] = v53;
            v111 = v108 + v104 - 16 * (v104 >> 4);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 1), 1u,
                                      memory_order_relaxed);
            v102 = v108 + v104 + 16;
            memcpy(v111, v103, v104),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v302[2] = v111;
            v302[3] = v102;
            v302[4] = v110;
            if (v103 != 0) {
              v112 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v112 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v26 + v112),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            *v100 = v52;
            v100[1] = v53;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 1), 1u,
                                      memory_order_relaxed);
            v102 = (__int64)(v100 + 2);
          }
          v302[3] = v102;
          v113 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_QWORD*)(v113 + 8) = 0;
          v114 = (atomic_ullong*)(v113 + 8);
          *(_QWORD*)(v113 + 16) = 0;
          v115 = v113;
          *(_QWORD*)(v113 + 48) = 0;
          *(_QWORD*)(v113 + 56) = 0;
          *(_QWORD*)(v113 + 64) = 0;
          *(_QWORD*)(v113 + 72) = 0;
          *(_QWORD*)(v113 + 80) = 0;
          *(_QWORD*)(v113 + 88) = 0;
          *(_QWORD*)v113 = GameData_1fef7a0;
          *(_QWORD*)(v113 + 24) = game_hub_FastTravelSpotData_vtable;
          v116 = v113 + 24;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 1), 1u,
                                    memory_order_relaxed);
          *(_QWORD*)(v113 + 32) = v52;
          *(_QWORD*)(v113 + 40) = v53;
          v117 = (_QWORD*)v302[5];
          v118 = (__int64*)v117[1];
          v119 = v117[2];
          if ((unsigned __int64)v118 >= v119) {
            v121 = (__int64)v118 - *v117;
            v122 = (v121 >> 4) + 1;
            if (v122 >> 60 != 0) {
              GameRoutine_ee3470(),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v123 = v119 - *v117;
            if (v123 >> 3 > v122) {
              v122 = v123 >> 3;
            }
            if ((unsigned __int64)v123 >= 0x7FFFFFFFFFFFFFF0LL) {
              v124 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v124 = v122;
            }
            if (v124 >> 60 != 0) {
              goto LABEL_430;
            }
            v125 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v124, 16, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v126 = (__int64*)(v125 + v121);
            v127 = v125 + 16 * v124;
            *v126 = v116;
            v126[1] = v115;
            v120 = v125 + v121 + 16;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v115 + 8), 1u,
                                      memory_order_relaxed);
            v128 = *v117;
            v129 = v117[1] - *v117;
            v130 = (char*)v126 - v129;
            memcpy((char*)v126 - v129, *v117, v129),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *v117 = v130;
            v117[1] = v120;
            v117[2] = v127;
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (v128 != 0) {
              v131 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v131 = 56;
              }
              v31 = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v131),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            *v118 = v116;
            v118[1] = v113;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v113 + 8), 1u,
                                      memory_order_relaxed);
            v120 = (__int64)(v118 + 2);
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          v117[1] = v120;
          if (atomic_fetch_add(v114, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v115 + 16LL))(
                v115, *(long double*)&v31),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v31 = std___1___shared_weak_count___release_weak_alt1(v115),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          add = atomic_fetch_add(v295, 0xFFFFFFFFFFFFFFFFLL);
          v36 = GameData_212ec00;
          if (add == 0) {
            (*(void (**)(_QWORD*, long double))(*v53 + 16LL))(
                v53, *(long double*)&v31),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v31 = std___1___shared_weak_count___release_weak_alt1(v53),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if (v297 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v297 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v297 + 16LL))(
                v297, *(long double*)&v31),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v31 = std___1___shared_weak_count___release_weak_alt1(v297),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_67;
        }
      LABEL_118:
        if (v78 == *((_QWORD*)&v307_.v307 + 1)) {
          goto LABEL_172;
        }
        v83 = *((_QWORD*)&v307_.v307 + 1) - 136LL;
        do {
          if ((*(_BYTE*)(v83 + 80) & 1) != 0 && *(_QWORD*)(v83 + 96) != 0) {
            v85 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v85 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v85),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 + 56) & 1) != 0 && *(_QWORD*)(v83 + 72) != 0) {
            v86 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v86 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v86),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 + 32) & 1) != 0 && *(_QWORD*)(v83 + 48) != 0) {
            v87 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v87 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v87),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 + 8) & 1) != 0 && *(_QWORD*)(v83 + 24) != 0) {
            v88 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v88 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v88),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 - 16) & 1) != 0 && *(_QWORD*)v83 != 0) {
            v89 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v89 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v89),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 - 64) & 1) != 0 && *(_QWORD*)(v83 - 48) != 0) {
            v90 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v90 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v90),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 - 88) & 1) != 0 && *(_QWORD*)(v83 - 72) != 0) {
            v91 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v91 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v91),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 - 112) & 1) != 0 && *(_QWORD*)(v83 - 96) != 0) {
            v92 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v92 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v92),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 - 136) & 1) != 0 && *(_QWORD*)(v83 - 120) != 0) {
            v93 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v93 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v93),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v83 - 160) & 1) != 0 && *(_QWORD*)(v83 - 144) != 0) {
            v94 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v94 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v94),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v84 = v83 - 160;
          v83 -= 296;
        } while (v84 != v78);
        *((_QWORD*)&v307_.v307 + 1) = v78;
        if ((_QWORD)v307_.v307 != 0) {
        LABEL_172:
          v95 = 128;
          if (*(_QWORD*)(*v26 + 200) == 0) {
            v95 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v26 + v95),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_175;
      }
      if (*((_BYTE*)v53 + 96) != 0) {
        *((_BYTE*)v53 + 96) = 0;
        v78 = v307_.v307;
        if ((_QWORD)v307_.v307 == 0) {
          goto LABEL_175;
        }
        goto LABEL_118;
      }
      *((int8x16_t*)v53 + 5) = v294;
    }
    else {
      if (v74 != 1) {
        goto LABEL_117;
      }
      LODWORD(v75) = *(_DWORD*)(v45 + 168);
      *(_QWORD*)&v76 = *(_QWORD*)(v45 + 160);
      *((_QWORD*)&v76 + 1) = v75;
      if (*((_BYTE*)v53 + 96) == 1) {
        v53[10] = *(_QWORD*)(v45 + 160);
        goto LABEL_106;
      }
      *((_OWORD*)v53 + 5) = v76;
    }
    *((_BYTE*)v53 + 96) = 1;
    goto LABEL_117;
  }
LABEL_220:
  v133 = *(_QWORD**)(*(_QWORD*)v36 + 8LL);
  v134 = *(_QWORD**)(*(_QWORD*)v36 + 16LL);
  if (v133 != v134) {
    v135 = GameData_212ebb0[0];
    do {
      v136 = *v133;
      v137 = *(_QWORD*)(*v133 + 136LL);
      v138 = *(_QWORD*)(*v133 + 144LL);
      if (v137 != v138) {
        while (1) {
          v139 = *(_QWORD*)(v137 + 8);
          if ((*(_BYTE*)v137 & 1) == 0) {
            v139 = *(_BYTE*)v137 >> 1;
          }
          if (v139 == 18) {
            v140 = (*(_BYTE*)v137 & 1) != 0 ? *(__int64**)(v137 + 16)
                                            : (__int64*)(v137 + 1);
            v141 = *v140;
            v142 = v140[1];
            v143 = *((unsigned __int16*)v140 + 8);
            v144 = v141 == 0x83E3B39BE5B09CE5LL && v142 == 0xE59783E3BC83E3AFLL;
            if (v144 && v143 == 44943) {
              break;
            }
          }
          v137 += 24;
          if (v137 == v138) {
            goto LABEL_222;
          }
        }
      }
      if (v137 == v138) {
        goto LABEL_222;
      }
      *(_QWORD*)&v146 = *(_QWORD*)(v136 + 160);
      LODWORD(v32) = *(_DWORD*)(v136 + 168);
      v147 = *v135;
      *((_QWORD*)&v146 + 1) = v32;
      v307_.v307 = v146;
      v148 = *v133;
      v149 = GameRoutine_f71d40(v147, (__int64)&v307_.v307, *v133 + 376LL),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v150 = game_hub_f71fc0(*v135, (__int64)&v307_.v307, v148 + 376),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v151 = X8CALL_X0(unsigned __int8*,
                       LocatorDispos_db1f30((void*)((__int64*)&v311_.v311),
                                            (unsigned __int8*)(v148 + 376))),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      FastTravelManager_ee05e0_alt1((void*)(&v305_.v305), v151, &v307_.v307,
                                    &v311_.v311, v149, v150, v301, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v152 = v305_.v305;
      if (v305_.v305 != nullptr) {
        v154 = *v133;
        v153 = v133[1];
        if (v153 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v153 + 16), 1u,
                                    memory_order_relaxed);
        }
        v156 = (_QWORD*)v152[11];
        v155 = v152[12];
        if ((unsigned __int64)v156 >= v155) {
          v158 = v152[10];
          v159 = (char*)v156 - v158;
          v160 = (((__int64)v156 - v158) >> 4) + 1;
          if (v160 >> 60 != 0) {
            GameRoutine_ee3490(),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v161 = v155 - v158;
          if (v161 >> 3 > v160) {
            v160 = v161 >> 3;
          }
          if ((unsigned __int64)v161 >= 0x7FFFFFFFFFFFFFF0LL) {
            v162 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v162 = v160;
          }
          if (v162 != 0) {
            if (v162 >> 60 != 0) {
              goto LABEL_430;
            }
            v163 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v162, 16, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v163 = 0;
          }
          v164 = &v159[v163];
          v165 = v163 + 16 * v162;
          *(_QWORD*)v164 = v154;
          *((_QWORD*)v164 + 1) = v153;
          v157 = (__int64)&v159[v163 + 16];
          v166 = v152[10];
          v167 = v152[11] - v166;
          v168 = &v164[-v167];
          memcpy(&v164[-v167], v166, v167),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v152[10] = v168;
          v152[11] = v157;
          v152[12] = v165;
          if (v166 != 0) {
            v169 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v169 = 56;
            }
            v31 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v169),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        else {
          *v156 = v154;
          v156[1] = v153;
          v157 = (__int64)(v156 + 2);
        }
        v152[11] = v157;
      }
      v170 = v305_.v306;
      if (v305_.v306 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v305_.v306 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v170 + 16LL))(v170),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v31 = std___1___shared_weak_count___release_weak_alt1(v170),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((LANES128(v311_.v311).n128_u8[0] & 1) != 0) {
        LABEL_264:
          if (v311_.v312 != 0) {
            v171 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v171 = 56;
            }
            v31 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v171),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      else if ((LANES128(v311_.v311).n128_u8[0] & 1) != 0) {
        goto LABEL_264;
      }
    LABEL_222:
      v133 += 2;
    } while (v133 != v134);
  }
  v172 = *(_QWORD*)(*GameData_212ebe0 + 8);
  v173 = *(_QWORD**)(v172 + 24);
  v298 = (_QWORD*)(v172 + 32);
  if (v173 != (_QWORD*)(v172 + 32)) {
    v174 = GameData_212ebb0[0];
    while (1) {
      v175 = (__int64*)v173[7];
      v176 = (__int64*)v173[8];
      if (v175 != v176) {
        break;
      }
    LABEL_381:
      v269 = (_QWORD*)v173[1];
      if (v269 != nullptr) {
        do {
          v270 = v269;
          v269 = (_QWORD*)*v269;
        } while (v269 != nullptr);
      }
      else {
        do {
          v270 = (_QWORD*)v173[2];
          v9 = v173 == (_QWORD*)*v270;
          v173 = v270;
        } while (!v9);
      }
      v173 = v270;
      if (v270 == v298) {
        goto LABEL_387;
      }
    }
    v300 = (__int64*)v173[8];
    while (1) {
      v177 = *(_QWORD*)(*v175 + 552);
      v178 = *(_QWORD*)(*v175 + 560);
      if (v178 != 0 &&
          (atomic_fetch_add_explicit((atomic_ullong* volatile)(v178 + 8), 1u,
                                     memory_order_relaxed),
           atomic_fetch_add((atomic_ullong* volatile)(v178 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0)) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v178 + 16LL))(
            v178, *(long double*)&v31),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v31 = std___1___shared_weak_count___release_weak_alt1(v178),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v177 == 0) {
          goto LABEL_275;
        }
      }
      else if (v177 == 0) {
        goto LABEL_275;
      }
      v179 = *v174;
      LANES128(v180).n128_u64[0] = *(_QWORD*)(*v175 + 184);
      LODWORD(v32) = *(_DWORD*)(*v175 + 192);
      v181 = *v174;
      LANES128(v180).n128_u64[1] = v32;
      v311_.v311 = v180;
      v182 = *v175;
      v183 = GameRoutine_f71d40(v181, (__int64)&v311_.v311, *v175 + 824),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((GameRoutine_f71cb0(v183, v183) & 1) != 0 &&
          ((unsigned int)game_hub_f71fc0(v179, (__int64)&v311_.v311,
                                         v182 + 824) == 0 ||
           (*(_DWORD*)(v179 + 32) & 2) != 0)) {
        v184 = *v174;
        LANES128(v185).n128_u64[0] = *(_QWORD*)(*v175 + 184);
        LODWORD(v32) = *(_DWORD*)(*v175 + 192);
        LANES128(v185).n128_u64[1] = v32;
        v311_.v311 = v185;
        v186 = GameRoutine_f71d40(v184, (__int64)&v311_.v311, *v175 + 824),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v187 = *v174;
        LANES128(v188).n128_u64[0] = *(_QWORD*)(*v175 + 184);
        LODWORD(v189) = *(_DWORD*)(*v175 + 192);
        LANES128(v188).n128_u64[1] = v189;
        v311_.v311 = v188;
        v190 = game_hub_f71fc0(v187, (__int64)&v311_.v311, *v175 + 824),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v192 = *v175;
        v193 = *(_QWORD*)(*v175 + 552);
        v194 = *(_QWORD*)(*v175 + 560);
        if (v194 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v194 + 8), 1u,
                                    memory_order_relaxed);
          v192 = *v175;
        }
        *(_QWORD*)&v195 = *(_QWORD*)(v192 + 184);
        LODWORD(v191) = *(_DWORD*)(v192 + 192);
        *((_QWORD*)&v195 + 1) = v191;
        v307_.v307 = v195;
        FastTravelManager_ee05e0_alt1((void*)(&v311_.v311), v190, &v307_.v307,
                                      v173 + 4, v186, (unsigned int)v190, v301,
                                      1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (LANES128(v311_.v311).n128_u64[0] == 0) {
          goto LABEL_373;
        }
        if (*(_BYTE*)(v193 + 128) == 1) {
          *(_QWORD*)&v307_.v307 = *(_QWORD*)v193;
          if ((UnitUtil_1212140((unsigned __int64)&v307_.v307) & 1) != 0) {
            v196 = (__int64***)v302[5];
            v197 = *v196;
            v198 = v196[1];
            if (*v196 != v198) {
              do {
                v199 = *v197;
                v200 = v197[1];
                if (v200 != nullptr) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v200 + 1),
                                            1u, memory_order_relaxed);
                  v201 = LANES128(v311_.v311).n128_u64[0];
                  v202 = v199[1];
                  if (atomic_fetch_add((atomic_ullong* volatile)(v200 + 1),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64*))(*v200 + 16))(v200),
                        result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v31 = COERCE_AS(__typeof__(v31),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v80 = COERCE_AS(
                            __typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    std___1___shared_weak_count___release_weak_alt1(v200),
                        result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v31 = COERCE_AS(__typeof__(v31),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v80 = COERCE_AS(
                            __typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  if (v202 == v201) {
                    goto LABEL_299;
                  }
                }
                else if (v199[1] == LANES128(v311_.v311).n128_u64[0]) {
                  goto LABEL_299;
                }
                v197 += 2;
              } while (v197 != v198);
              v197 = v198;
            LABEL_299:
              if (v197 != *(__int64***)(v302[5] + 8LL)) {
                v203 = *v197;
                v204 = (*v197)[7];
                if (v204 >= v203[8]) {
                  v208 = GameRoutine_ee34c0(v203 + 6, v193),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  *(_QWORD*)v204 = *(_QWORD*)v193;
                  *(_QWORD*)(v204 + 24) = *(_QWORD*)(v193 + 24);
                  v205 = *(_QWORD*)(v193 + 16);
                  *(_BYTE*)(v204 + 32) = 0;
                  *(_BYTE*)(v204 + 112) = 0;
                  *(_QWORD*)(v204 + 16) = v205;
                  if (*(_BYTE*)(v193 + 112) == 1) {
                    *(_DWORD*)(v204 + 32) = *(_DWORD*)(v193 + 32);
                    if ((*(_BYTE*)(v193 + 40) & 1) != 0) {
                      fw_text_String_CopyTerminated((__int64*)(v204 + 40),
                                                    *(_QWORD*)(v193 + 56),
                                                    *(_QWORD*)(v193 + 48)),
                          result =
                              COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v31 = COERCE_AS(__typeof__(v31),
                                          PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v80 = COERCE_AS(
                              __typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    else {
                      v206 = *(_QWORD*)(v193 + 40);
                      v207 = *(_QWORD*)(v193 + 56);
                      *(_QWORD*)(v204 + 48) = *(_QWORD*)(v193 + 48);
                      *(_QWORD*)(v204 + 56) = v207;
                      *(_QWORD*)(v204 + 40) = v206;
                    }
                    if ((*(_BYTE*)(v193 + 64) & 1) != 0) {
                      fw_text_String_CopyTerminated((__int64*)(v204 + 64),
                                                    *(_QWORD*)(v193 + 80),
                                                    *(_QWORD*)(v193 + 72)),
                          result =
                              COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v31 = COERCE_AS(__typeof__(v31),
                                          PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v80 = COERCE_AS(
                              __typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    else {
                      *(_QWORD*)(v204 + 72) = *(_QWORD*)(v193 + 72);
                      v209 = *(_QWORD*)(v193 + 64);
                      *(_QWORD*)(v204 + 80) = *(_QWORD*)(v193 + 80);
                      *(_QWORD*)(v204 + 64) = v209;
                    }
                    *(_QWORD*)(v204 + 104) = *(_QWORD*)(v193 + 104);
                    *(_QWORD*)(v204 + 96) = *(_QWORD*)(v193 + 96);
                    *(_BYTE*)(v204 + 112) = 1;
                  }
                  v208 = v204 + 128;
                }
                v203[7] = v208;
              }
            }
            v210 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_QWORD*)(v210 + 8) = 0;
            v211 = v210;
            *(_QWORD*)(v210 + 16) = 0;
            *(_QWORD*)(v210 + 40) = 0;
            *(_QWORD*)(v210 + 48) = 0;
            *(_QWORD*)(v210 + 64) = 0;
            *(_BYTE*)(v210 + 176) = 0;
            *(_QWORD*)(v210 + 80) = 0;
            *(_QWORD*)(v210 + 88) = 0;
            *(_BYTE*)(v210 + 96) = 0;
            *(_DWORD*)(v210 + 192) = 0;
            v299 = (atomic_ullong*)(v210 + 8);
            *(_QWORD*)v210 = GameData_1fef7f0;
            *(_QWORD*)(v210 + 32) = game_hub_FastTravelUnitData_vtable;
            v212 = v210 + 32;
            v213 = v311_.v311;
            if (LANES128(v311_.v311).n128_u64[1] != 0) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(LANES128(v311_.v311).n128_u64[1] +
                                            8),
                  1u, memory_order_relaxed);
              v214 = *(_QWORD*)(v210 + 48);
              *(int8x16_t*)(v210 + 40) = v213;
              if (v214 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v214 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v214 + 16LL))(v214),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak_alt1(v214),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            else {
              *(_OWORD*)(v210 + 40) = LANES128(v311_.v311).n128_u64[0];
            }
            *(_QWORD*)(v211 + 64) = *(_QWORD*)v193;
            *(_DWORD*)(v211 + 80) = *(_DWORD*)(v193 + 16);
            *(_DWORD*)(v211 + 84) = *(_DWORD*)(v193 + 20);
            v215 = *(_OWORD*)(v211 + 80);
            *((_QWORD*)&v215 + 1) = *(unsigned int*)(v193 + 24);
            *(_OWORD*)(v211 + 80) = v215;
            GameRoutine_d90ea0(v211 + 96, v193 + 32),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_DWORD*)(v211 + 192) = 0;
            v216 = (_QWORD*)v302[5];
            v217 = (__int64*)v216[7];
            v218 = v216[8];
            if ((unsigned __int64)v217 >= v218) {
              v220 = v216[6];
              v221 = (char*)v217 - v220;
              v222 = (((__int64)v217 - v220) >> 4) + 1;
              if (v222 >> 60 != 0) {
                GameRoutine_ee38f0(),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v223 = v218 - v220;
              if (v223 >> 3 > v222) {
                v222 = v223 >> 3;
              }
              if ((unsigned __int64)v223 >= 0x7FFFFFFFFFFFFFF0LL) {
                v224 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v224 = v222;
              }
              if (v224 >> 60 != 0) {
                goto LABEL_430;
              }
              v225 = fw_memory_g_heap_manager_ptr;
              v226 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v224, 16, 0),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v227 = (__int64*)&v221[v226];
              v296 = v226 + 16 * v224;
              *v227 = v212;
              v227[1] = v211;
              v219 = (__int64)&v221[v226 + 16];
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v211 + 8), 1u,
                                        memory_order_relaxed);
              v228 = v216[6];
              v229 = v216[7] - v228;
              v230 = (char*)v227 - v229;
              memcpy((char*)v227 - v229, v228, v229),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v216[6] = v230;
              v216[7] = v219;
              v216[8] = v296;
              if (v228 != 0) {
                v231 = 128;
                if (*(_QWORD*)(*(_QWORD*)v225 + 200LL) == 0) {
                  v231 = 56;
                }
                v31 = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v225 + v231),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            else {
              *v217 = v212;
              v217[1] = v211;
              v219 = (__int64)(v217 + 2);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v211 + 8), 1u,
                                        memory_order_relaxed);
            }
            v174 = GameData_212ebb0[0];
            v176 = v300;
            v216[7] = v219;
            if (atomic_fetch_add(v299, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v211 + 16LL))(
                  v211, *(long double*)&v31),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v31 = std___1___shared_weak_count___release_weak_alt1(v211),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        if (*(_BYTE*)(v193 + 224) != 1) {
          goto LABEL_373;
        }
        v232 = (__int64***)v302[5];
        v233 = *v232;
        v234 = v232[1];
        if (*v232 != v234) {
          do {
            v235 = *v233;
            v236 = v233[1];
            if (v236 != nullptr) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v236 + 1), 1u,
                                        memory_order_relaxed);
              v237 = LANES128(v311_.v311).n128_u64[0];
              v238 = v235[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v236 + 1),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64*, long double))(*v236 + 16))(
                    v236, *(long double*)&v31),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v31 = std___1___shared_weak_count___release_weak_alt1(v236),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if (v238 == v237) {
                goto LABEL_343;
              }
            }
            else if (v235[1] == LANES128(v311_.v311).n128_u64[0]) {
              goto LABEL_343;
            }
            v233 += 2;
          } while (v233 != v234);
          v233 = v234;
        LABEL_343:
          if (v233 != *(__int64***)(v302[5] + 8LL)) {
            v239 = *v233;
            v240 = (*v233)[4];
            if (v240 >= v239[5]) {
              v244 = GameRoutine_ee3920(v239 + 3, v193 + 144),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              *(_DWORD*)v240 = *(_DWORD*)(v193 + 144);
              v241 = (__int64*)(v240 + 8);
              if ((*(_BYTE*)(v193 + 152) & 1) != 0) {
                fw_text_String_CopyTerminated(v241, *(_QWORD*)(v193 + 168),
                                              *(_QWORD*)(v193 + 160)),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v242 = *(_QWORD*)(v193 + 152);
                v243 = *(_QWORD*)(v193 + 168);
                *(_QWORD*)(v240 + 16) = *(_QWORD*)(v193 + 160);
                *(_QWORD*)(v240 + 24) = v243;
                *v241 = v242;
              }
              if ((*(_BYTE*)(v193 + 176) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)(v240 + 32),
                                              *(_QWORD*)(v193 + 192),
                                              *(_QWORD*)(v193 + 184)),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                *(_QWORD*)(v240 + 40) = *(_QWORD*)(v193 + 184);
                v245 = *(_QWORD*)(v193 + 176);
                *(_QWORD*)(v240 + 48) = *(_QWORD*)(v193 + 192);
                *(_QWORD*)(v240 + 32) = v245;
              }
              v244 = v240 + 80;
              *(_QWORD*)(v240 + 72) = *(_QWORD*)(v193 + 216);
              *(_QWORD*)(v240 + 64) = *(_QWORD*)(v193 + 208);
            }
            v239[4] = v244;
          }
        }
        v246 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v246 + 8) = 0;
        *(_QWORD*)(v246 + 16) = 0;
        *(_QWORD*)(v246 + 40) = 0;
        *(_QWORD*)(v246 + 48) = 0;
        *(_QWORD*)(v246 + 128) = 0;
        *(_QWORD*)(v246 + 136) = 0;
        *(_QWORD*)(v246 + 72) = 0;
        *(_QWORD*)(v246 + 80) = 0;
        *(_QWORD*)(v246 + 88) = 0;
        *(_QWORD*)(v246 + 96) = 0;
        *(_QWORD*)v246 = GameData_1fef840;
        *(_DWORD*)(v246 + 64) = 0;
        v247 = v246 + 64;
        *(_QWORD*)(v246 + 104) = 0;
        *(_QWORD*)(v246 + 112) = 0;
        *(_QWORD*)(v246 + 32) = game_hub_FastTravelFacilityData_vtable;
        v248 = v246 + 32;
        v249 = v311_.v311;
        if (LANES128(v311_.v311).n128_u64[1] != 0) {
          atomic_fetch_add_explicit(
              (atomic_ullong* volatile)(LANES128(v311_.v311).n128_u64[1] + 8),
              1u, memory_order_relaxed);
          v250 = *(_QWORD*)(v246 + 48);
          *(int8x16_t*)(v246 + 40) = v249;
          if (v250 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v250 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v250 + 16LL))(v250),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt1(v250),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v247 = v246 + 64;
          }
        }
        else {
          *(_OWORD*)(v246 + 40) = LANES128(v311_.v311).n128_u64[0];
        }
        LANES128(v31).n128_f32[0] = GameRoutine_d90d90(v247, v193 + 144),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v251 = (_QWORD*)v302[5];
        v252 = (__int64*)v251[4];
        v253 = v251[5];
        if ((unsigned __int64)v252 >= v253) {
          v255 = v251[3];
          v256 = (char*)v252 - v255;
          v257 = (((__int64)v252 - v255) >> 4) + 1;
          if (v257 >> 60 != 0) {
            GameRoutine_ee3bb0(),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v258 = v253 - v255;
          if (v258 >> 3 > v257) {
            v257 = v258 >> 3;
          }
          if ((unsigned __int64)v258 >= 0x7FFFFFFFFFFFFFF0LL) {
            v259 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v259 = v257;
          }
          if (v259 >> 60 != 0) {
            goto LABEL_430;
          }
          v260 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v259, 16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v261 = (__int64*)&v256[v260];
          v262 = v260 + 16 * v259;
          *v261 = v248;
          v261[1] = v246;
          v254 = (__int64)&v256[v260 + 16];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v246 + 8), 1u,
                                    memory_order_relaxed);
          v263 = v251[3];
          v264 = v251[4] - v263;
          v265 = (char*)v261 - v264;
          memcpy((char*)v261 - v264, v263, v264),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v251[3] = v265;
          v251[4] = v254;
          v251[5] = v262;
          if (v263 != 0) {
            v266 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v266 = 56;
            }
            v31 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v266),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        else {
          *v252 = v248;
          v252[1] = v246;
          v254 = (__int64)(v252 + 2);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v246 + 8), 1u,
                                    memory_order_relaxed);
        }
        v251[4] = v254;
        v176 = v300;
        v267 = atomic_fetch_add((atomic_ullong* volatile)(v246 + 8),
                                0xFFFFFFFFFFFFFFFFLL);
        v174 = GameData_212ebb0[0];
        if (v267 == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v246 + 16LL))(
              v246, *(long double*)&v31),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v31 = std___1___shared_weak_count___release_weak_alt1(v246),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v268 = LANES128(v311_.v311).n128_u64[1];
          if (LANES128(v311_.v311).n128_u64[1] != 0) {
            goto LABEL_374;
          }
        }
        else {
        LABEL_373:
          v268 = LANES128(v311_.v311).n128_u64[1];
          if (LANES128(v311_.v311).n128_u64[1] != 0) {
          LABEL_374:
            if (atomic_fetch_add((atomic_ullong* volatile)(v268 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(unsigned __int64))(*(_QWORD*)v268 + 16LL))(v268),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v31 = std___1___shared_weak_count___release_weak_alt1(v268),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        if (v194 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v194 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v194 + 16LL))(
              v194, *(long double*)&v31),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v31 = std___1___shared_weak_count___release_weak_alt1(v194),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    LABEL_275:
      v175 += 6;
      if (v175 == v176) {
        goto LABEL_381;
      }
    }
  }
LABEL_387:
  v271 = v303_.v303;
  v303_.v304 = v303_.v303;
  v272 = *(_QWORD*)GameData_212dc68;
  v303_.v303[0] = GameData_1fef890;
  v303_.v303[1] = v302;
  v273 = *(_QWORD**)(v272 + 152);
  v274 = (_QWORD*)(v272 + 160);
  if (v273 == (_QWORD*)(v272 + 160)) {
  LABEL_405:
    v281 = 32;
  LABEL_406:
    (*(void (**)(long double))(*v271 + v281))(*(long double*)&v31),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_407;
  }
  do {
    v275 = v273[7];
    v276 = v273[8];
    if (v275 != v276) {
      while (v303_.v304 != nullptr) {
        (*(void (**)(_QWORD*, __int64, long double))(*v303_.v304 + 48LL))(
            v303_.v304, v275, *(long double*)&v31),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v275 += 16;
        if (v275 == v276) {
          goto LABEL_393;
        }
      }
    LABEL_429:
      GameRoutine_60a310(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_393:
    v277 = v273[10];
    v278 = v273[11];
    if (v277 != v278) {
      while (v303_.v304 != nullptr) {
        (*(void (**)(_QWORD*, __int64, long double))(*v303_.v304 + 48LL))(
            v303_.v304, v277, *(long double*)&v31),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v277 += 16;
        if (v277 == v278) {
          goto LABEL_396;
        }
      }
      goto LABEL_429;
    }
  LABEL_396:
    v279 = (_QWORD*)v273[1];
    if (v279 != nullptr) {
      do {
        v280 = v279;
        v279 = (_QWORD*)*v279;
      } while (v279 != nullptr);
    }
    else {
      do {
        v280 = (_QWORD*)v273[2];
        v9 = v273 == (_QWORD*)*v280;
        v273 = v280;
      } while (!v9);
    }
    v273 = v280;
  } while (v280 != v274);
  v271 = v303_.v304;
  if (v303_.v304 == v303_.v303) {
    goto LABEL_405;
  }
  if (v303_.v304 != nullptr) {
    v281 = 40;
    goto LABEL_406;
  }
LABEL_407:
  v282 = (__int64*)v302[5];
  v283 = *v282;
  v284 = v282[1];
  if (*v282 != v284) {
    do {
      v285 = *(char**)(*(_QWORD*)v283 + 48LL);
      v286 = *(char**)(*(_QWORD*)v283 + 56LL);
      if (v285 != v286) {
        GameRoutine_ee3be0(v285, v286, (2 * __clz((v286 - v285) >> 7)) ^ 0x7E,
                           1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v283 += 16;
    } while (v283 != v284);
    v282 = (__int64*)v302[5];
  }
  v287 = (char*)v282[6];
  v288 = (char*)v282[7];
  v289 = fw_memory_g_heap_manager_ptr;
  if (v287 != v288) {
    GameRoutine_ee6e80(v287, v288, (2 * __clz((v288 - v287) >> 4)) ^ 0x7E, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v282 = (__int64*)v302[5];
  }
  v290 = (char*)v282[3];
  v291 = (char*)v282[4];
  if (v290 != v291) {
    GameRoutine_ee85a0(v290, v291, (2 * __clz((v291 - v290) >> 4)) ^ 0x7E, 1,
                       v31),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  LANES128(v311_.v311).n128_u64[1] = (unsigned __int64)&GameData_1a8a29f;
  LANES128(v311_.v311).n128_u64[0] =
      game_HashString_alt1((__int64)&GameData_1a8a29f),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v292 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        LANES128(v311_.v311).n128_u64),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v292 != 0 && *(_DWORD*)(v292 + 32) != 0 &&
        (GameRoutine_ee23a0((__int64)v302) & 1) != 0) {
      LANES128(v311_.v311).n128_u64[1] = (unsigned __int64)&GameData_1ac3e7d;
      LANES128(v311_.v311).n128_u64[0] =
          game_HashString_alt1((__int64)&GameData_1ac3e7d),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      game_VariableManager_SetFlag((__int64)&v311_.v311, 1),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((v309_.v309[0] & 1) != 0 && v309_.v310 != nullptr) {
    v293 = 128;
    if (*(_QWORD*)(*(_QWORD*)v289 + 200LL) == 0) {
      v293 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v289 + v293);
  }
  return result;
}

__int64 FastTravelManager_ee24d0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  long double v7;
  __int64 result;
  _UNKNOWN** v9;
  unsigned int v10;
  struct {
    __int64 v11;
    _UNKNOWN** v12;
  } v11_;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v11_.v12 = &GameData_1a8a29f;
  v11_.v11 = game_HashString_alt1((__int64)&GameData_1a8a29f),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v4 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&v11_.v11),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 == 0 || *(_DWORD*)(v4 + 32) == 0) {
    return 0;
  }
  v5 = (_QWORD*)GameData_212dbb8[0];
  v6 = game_hub_f71fc0(*GameData_212ebb0[0], a2,
                       *(_QWORD*)GameData_212dbb8[0] + 64LL),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  FastTravelManager_ee05e0_alt1(
      (void*)(&v11_.v11), v6, a2, *v5 + 88LL,
      *(unsigned int*)(*(_QWORD*)GameData_212dbc0[0] + 88LL), (unsigned int)v6,
      a1 + 16, 1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v11_.v11 != 0 &&
      (GameRoutine_dbf7e0(*(_QWORD*)(v11_.v11 + 8)) & 1) != 0) {
    *(__n128*)&v7 = game_hub_FastTravelManager_RefreshTravelList(a1),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = 1;
    v9 = v11_.v12;
    if (v11_.v12 == nullptr) {
      return result;
    }
  }
  else {
    result = 0;
    v9 = v11_.v12;
    if (v11_.v12 == nullptr) {
      return result;
    }
  }
  if (atomic_fetch_add(
          (atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    v10 = result;
    (*((void (**)(_UNKNOWN**, long double))*v9 + 2))(v9, v7),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v9),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return v10;
  }
  return result;
}

#pragma GCC visibility pop
