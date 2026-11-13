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
unsigned __int64
FastTravelManager_ee0380_alt1(__int64 a1) __asm__("FastTravelManager_ee0380");
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
__n128 game_hub_FastTravelManager_RefreshTravelList_alt1(__int64 a1) __asm__(
    "game_hub_FastTravelManager_RefreshTravelList");
__int64 FastTravelManager_ee24d0(__int64 a1, __int64 a2);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void FastTravelManager_ee0380(__int64 a1);
__int64 GameHr_ee3920(__int64*, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn)) GameRoutine_8123d0();
void game_hub_FastTravelManager_RefreshTravelList_lambda2_Invoke(__int64 a1,
                                                                 __int64* a2,
                                                                 double a3,
                                                                 double a4);
__int64 GameHr_ee34c0(__int64*, __int64);
__int64 GameRoutine_d90ea0_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_d90ea0");
__int64 GameRoutine_ee6e80_alt1(__int64 result, char*, __int64,
                                char) __asm__("GameRoutine_ee6e80");
__int64 GameRoutine_ee85a0_alt1(__int64 result, char*, __int64,
                                char) __asm__("GameRoutine_ee85a0");
__int64 GlobalMapData_e27700_alt1(_QWORD*, const char*, unsigned __int64,
                                  const char*, unsigned __int64, __int64*,
                                  _DWORD*) __asm__("GlobalMapData_e27700");
extern __int64* GameData_212cda8_alt1[18] __asm__("GameData_212cda8");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_ee3be0(char*, char*, __int64, char);
void game_hub_FastTravelManager_RefreshTravelList(__int64 a1);

void FastTravelManager_ee0380(__int64 a1)
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
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    char* v28;
  } v26_;

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
    String_60a1d0_alt1();
  }
  if (v6 > 0x16) {
    if ((v6 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v6 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v10, 16,
                                             0);
    v26_.v27 = v4 + 3;
    v26_.v28 = (char*)v9;
    v26_.v26 = v10 | 1;
    v8 = v10 | 1;
  }
  else {
    v8 = 2 * v6;
    v9 = 0;
    v26_.v27 = 0;
    v26_.v28 = nullptr;
    v26_.v26 = (unsigned __int8)(2 * v6);
  }
  v11 = (v8 & 1) == 0;
  if ((v8 & 1) != 0) {
    v12 = (char*)v9;
  }
  else {
    v12 = (char*)&v26_.v26 + 1;
  }
  v12[2] = 95;
  *(_WORD*)v12 = 21574;
  if (v11) {
    v13 = (char*)&v26_.v26 + 4;
  }
  else {
    v13 = (char*)(v9 + 3);
  }
  if (v4 != 0) {
    memmove_alt1((__int64)v13, v5, v4);
  }
  v13[v4] = 0;
  if ((v26_.v26 & 1) != 0) {
    v14 = v26_.v28;
  }
  else {
    v14 = (char*)&v26_.v26 + 1;
  }
  v15 = game_HashString_alt1((__int64)v14);
  if (v15 != 0) {
    v16 = *(_QWORD*)(GameData_21c9f20 + 96);
    if (v16 != 0 && *(_QWORD*)(GameData_21c9f20 + 112) != 0) {
      v18 = v16 - 1;
      if ((v16 & (v16 - 1)) != 0) {
        v19 = v15;
        if (v15 >= v16) {
          v19 = v15 % v16;
        }
      }
      else {
        v19 = v18 & v15;
      }
      v20 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f20 + 88) + 8 * v19);
      if (v20 != nullptr) {
        v21 = (_QWORD*)*v20;
        if (v21 != nullptr) {
          if ((v16 & v18) == 0) {
            while (1) {
              v24 = v21[1];
              if (v24 == v15) {
                if (v21[2] == v15) {
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
            if (v22 == v15) {
              if (v21[2] == v15) {
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
  if ((v26_.v26 & 1) != 0 && v26_.v28 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v26_.v28);
  }
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
        LANES128(v30).n128_f32[1] = vmuls_lane_f32(
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
                  LANES128(v44).n128_f32[1] = vmuls_lane_f32(
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

void game_hub_FastTravelManager_RefreshTravelList(__int64 a1)
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
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  _BYTE* v38;
  unsigned __int64 v39;
  _QWORD* v40;
  _QWORD* v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  int8x16_t v54;
  __int64 v55;
  __int64 v56;
  int8x16_t v57;
  unsigned __int64 v58;
  int v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  bool v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  const char* v67;
  bool v68;
  unsigned __int64 v69;
  const char* v70;
  unsigned __int64 v71;
  int v72;
  __int64 v73;
  __int128 v74;
  __int128 v75;
  __int64 v76;
  unsigned __int64 v77;
  char v78;
  int8x16_t v79;
  unsigned int v80;
  __int64 v81;
  __int64 v82;
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
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  _BOOL4 v106;
  _QWORD* v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  signed __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  _QWORD* v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  atomic_ullong* v121;
  __int64 v122;
  __int64 v123;
  __int64* v124;
  __int64* v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64* v133;
  unsigned __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  char* v137;
  __int64 v138;
  unsigned __int64 add;
  _QWORD* v140;
  _QWORD* v141;
  __int64* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64* v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  bool v151;
  __int128 v153;
  __int64 v154;
  __int64 v155;
  unsigned int v156;
  unsigned int v157;
  __int64 v158;
  _QWORD* v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  _QWORD* v163;
  __int64 v164;
  __int64 v165;
  char* v166;
  unsigned __int64 v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  char* v171;
  unsigned __int64 v172;
  __int64 v173;
  unsigned __int64 v174;
  char* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  _QWORD* v180;
  __int64* v181;
  __int64* v182;
  __int64* v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  int8x16_t v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  int8x16_t v192;
  unsigned int v193;
  __int64 v194;
  int8x16_t v195;
  unsigned __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int128 v202;
  __int64*** v203;
  __int64** v204;
  __int64** v205;
  __int64* v206;
  __int64 v207;
  unsigned __int64 v208;
  __int64 v209;
  __int64* v210;
  unsigned __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  int8x16_t v220;
  __int64 v221;
  __int128 v222;
  _QWORD* v223;
  __int64* v224;
  unsigned __int64 v225;
  __int64 v226;
  __int64 v227;
  char* v228;
  unsigned __int64 v229;
  __int64 v230;
  unsigned __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64* v234;
  __int64 v235;
  unsigned __int64 v236;
  char* v237;
  __int64 v238;
  __int64*** v239;
  __int64** v240;
  __int64** v241;
  __int64* v242;
  __int64 v243;
  unsigned __int64 v244;
  __int64 v245;
  __int64* v246;
  unsigned __int64 v247;
  __int64* v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  int8x16_t v256;
  __int64 v257;
  long double v258;
  _QWORD* v259;
  __int64* v260;
  unsigned __int64 v261;
  __int64 v262;
  __int64 v263;
  char* v264;
  unsigned __int64 v265;
  __int64 v266;
  unsigned __int64 v267;
  __int64 v268;
  __int64* v269;
  unsigned __int64 v270;
  __int64 v271;
  unsigned __int64 v272;
  char* v273;
  __int64 v274;
  unsigned __int64 v275;
  __int64 v276;
  _QWORD* v277;
  _QWORD* v278;
  _QWORD* v279;
  __int64 v280;
  _QWORD* v281;
  _QWORD* v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  _QWORD* v287;
  _QWORD* v288;
  __int64 v289;
  __int64* v290;
  __int64 v291;
  __int64 v292;
  char* v293;
  char* v294;
  __int64 v295;
  char* v296;
  __int64 v297;
  __int64 v298;
  char* v299;
  __int64 v300;
  __int64 v301;
  int8x16_t v302;
  atomic_ullong* v303;
  unsigned __int64 v304;
  __int64 v305;
  _QWORD* v306;
  atomic_ullong* v307;
  __int64* v308;
  __int64* v309;
  _QWORD* v310;
  struct {
    _QWORD v311[4];
    _QWORD* v312;
  } v311_;
  struct {
    _QWORD* v313;
    __int64 v314;
  } v313_;
  struct {
    __int128 v315;
    __int64 v316;
  } v315_;
  struct {
    _QWORD v317[2];
    __int64 v318;
  } v317_;
  struct {
    int8x16_t v319;
    __int64 v320;
    char gap200_[8];
    unsigned __int8 v321;
  } v319_;

  v158 = COERCE_AS(__typeof__(v158),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
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
  v158 = COERCE_AS(__typeof__(v158),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v7 != 0) {
    v8 = *(_QWORD*)(*GameData_212cda8_alt1[0] + 96);
    v9 = v8 == 0 || *(_QWORD*)(*GameData_212cda8_alt1[0] + 112) == 0;
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
      v12 = *(_QWORD**)(*(_QWORD*)(*GameData_212cda8_alt1[0] + 88) + 8 * v11);
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
                    LANES128(v319_.v319).n128_u64[1] =
                        (unsigned __int64)&GameData_1a8a29f;
                    LANES128(v319_.v319).n128_u64[0] =
                        game_HashString_alt1((__int64)&GameData_1a8a29f),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    game_VariableManager_SetFlag((__int64)&v319_.v319, 1),
                        v158 = COERCE_AS(
                            __typeof__(v158),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v78 = COERCE_AS(
                            __typeof__(v78),
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
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v25),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  *(_QWORD*)(a1 + 24) = v23;
  v26 = (__int64*)fw_memory_g_heap_manager_ptr;
  v27 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
  v158 = COERCE_AS(__typeof__(v158),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = *(_QWORD*)(a1 + 48);
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
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v28),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_QWORD*)(a1 + 8) == 0) {
      return;
    }
  }
  else if (*(_QWORD*)(a1 + 8) == 0) {
    return;
  }
  v29 = *v4;
  v309 = (__int64*)(a1 + 16);
  LANES128(v319_.v319).n128_u8[0] = 4;
  strcpy(&LANES128(v319_.v319).n128_i8[1], "A1");
  LocatorDispos_db2180((void*)(v317_.v317), (unsigned __int8*)(v29 + 40),
                       (unsigned __int8*)&v319_.v319),
      v158 = COERCE_AS(__typeof__(v158),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((LANES128(v319_.v319).n128_u8[0] & 1) != 0 && v319_.v320 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*v26 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v26 + v31, v319_.v320),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v32 = *(_QWORD*)(a1 + 8);
  v310 = (_QWORD*)a1;
  v33 = **(_QWORD**)(v32 + 40);
  v34 = GameData_212ec00;
  v35 = *(_QWORD*)(*(_QWORD*)(v32 + 40) + 8LL) - v33;
  if ((int)((unsigned __int64)v35 >> 3) >= 1) {
    v36 = 0;
    while (1) {
      if (v36 >= v35 >> 3) {
        GameRoutine_dd28c0(),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v37 = *(_QWORD*)(v33 + 8 * v36);
      v38 = *(_BYTE**)(v37 + 48);
      if (v38 != nullptr && *v38 != 0) {
        v39 = strlen_alt1(*(const char**)(v37 + 48)),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v39 != 0) {
          v40 = *(_QWORD**)(*(_QWORD*)v34 + 8LL);
          v41 = *(_QWORD**)(*(_QWORD*)v34 + 16LL);
          if (v40 != v41) {
            break;
          }
        }
      LABEL_67:
        v32 = v310[1];
      }
      ++v36;
      v33 = **(_QWORD**)(v32 + 40);
      v35 = *(_QWORD*)(*(_QWORD*)(v32 + 40) + 8LL) - v33;
      if ((__int64)v36 >= (int)((unsigned __int64)v35 >> 3)) {
        goto LABEL_220;
      }
    }
    v42 = v39;
    while (1) {
      v43 = *v40;
      if ((*(_BYTE*)(*v40 + 16LL) & 1) == 0) {
        v44 = *(unsigned __int8*)(v43 + 112);
        v45 = *(_QWORD*)(v43 + 120);
        if ((v44 & 1) == 0) {
          v45 = v44 >> 1;
        }
        if (v42 == v45) {
          v46 = (v44 & 1) != 0 ? *(_QWORD*)(v43 + 128) : v43 + 113;
          if (memcmp_alt1((__int64)v38, v46, v42) == 0) {
            break;
          }
        }
      }
      v40 += 2;
      if (v40 == v41) {
        goto LABEL_67;
      }
    }
    v47 = v40[1];
    if (v47 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                memory_order_relaxed);
    }
    v48 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v26, 144, 16, 0),
    v158 = COERCE_AS(__typeof__(v158),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v48[1] = 0;
    v48[4] = 0;
    v50 = v48 + 4;
    v51 = (__int64)v48;
    v48[2] = 0;
    v48[5] = 0;
    v48[6] = 0;
    v48[7] = 0;
    v48[8] = 0;
    *v48 = GameData_1fef750;
    v303 = (atomic_ullong*)(v48 + 1);
    v48[9] = 0;
    v48[10] = 0;
    v48[11] = 0;
    v48[12] = 0;
    v48[13] = 0;
    v48[14] = 0;
    *((_DWORD*)v48 + 8) = 1;
    *((_DWORD*)v48 + 16) = 0;
    v48[6] = 0;
    v48[7] = 0;
    v48[14] = 0;
    v48[15] = 0;
    v48[15] = 0;
    v48[16] = 0;
    v48[16] = 0;
    v48[17] = 0;
    *((_BYTE*)v48 + 136) = 0;
    v48[5] = v37;
    v305 = v47;
    if (v47 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 16), 1u,
                                memory_order_relaxed);
      v52 = v48[7];
      *(_QWORD*)(v51 + 48) = v43;
      *(_QWORD*)(v51 + 56) = v47;
      if (v52 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v52),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v48[6] = v43;
      v48[7] = 0;
    }
    v53 = GameData_212ebb0[0];
    LANES128(v54).n128_u64[0] = *(_QWORD*)(v43 + 160);
    LODWORD(v49) = *(_DWORD*)(v43 + 168);
    v55 = *GameData_212ebb0[0];
    LANES128(v54).n128_u64[1] = v49;
    v319_.v319 = v54;
    *(_DWORD*)(v51 +
               64) = GameRoutine_f71d40(v55, (__int64)&v319_.v319, v43 + 376),
               v158 =
                   COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
               v78 = COERCE_AS(__typeof__(v78),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v56 = *v53;
    LANES128(v57).n128_u64[0] = *(_QWORD*)(v43 + 160);
    LODWORD(v58) = *(_DWORD*)(v43 + 168);
    LANES128(v57).n128_u64[1] = v58;
    v319_.v319 = v57;
    v59 = game_hub_f71fc0(v56, (__int64)&v319_.v319, v43 + 376),
    v158 = COERCE_AS(__typeof__(v158),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v60 = LOBYTE(v317_.v317[0]);
    v62 = v317_.v317[1];
    v61 = v317_.v318;
    v63 = (v317_.v317[0] & 1) == 0;
    *(_DWORD*)(v51 + 68) = v59;
    v64 = v60 >> 1;
    v315_.v316 = 0;
    v315_.v315 = (__typeof__(v315_.v315)){0};
    LODWORD(v313_.v313) = 0;
    if (v63) {
      v65 = v64;
    }
    else {
      v65 = v62;
    }
    v66 = *(unsigned __int8*)(v43 + 376);
    if (v63) {
      v67 = (char*)v317_.v317 + 1;
    }
    else {
      v67 = (const char*)v61;
    }
    v68 = (v66 & 1) == 0;
    v69 = v66 >> 1;
    if (v68) {
      v70 = (const char*)(v43 + 377);
    }
    else {
      v70 = *(const char**)(v43 + 392);
    }
    if (v68) {
      v71 = v69;
    }
    else {
      v71 = *(_QWORD*)(v43 + 384);
    }
    v72 =
        GlobalMapData_e27700_alt1(*(_QWORD**)GameData_212ef18[0], v67, v65, v70,
                                  v71, (__int64*)&v315_.v315, &v313_.v313),
    v158 = COERCE_AS(__typeof__(v158),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v72 == 2) {
      v77 = game_hub_e286a0(*GameData_212ef18[0], (__int64*)&v315_.v315),
      v158 = COERCE_AS(__typeof__(v158),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v78 & 1) == 0) {
        goto LABEL_117;
      }
      game_hub_e28d20((void*)(&v319_.v319), v77, v77),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v79 = v302;
      LANES128(v79).n128_u8[0] = 0;
      if (v319_.v321 != 0) {
        v80 = -1;
      }
      else {
        v80 = 0;
      }
      v302 = vbslq_s8(vdupq_n_s8(v80), v319_.v319, v79);
      if (*(unsigned __int8*)(v51 + 96) == v319_.v321) {
        if (*(_BYTE*)(v51 + 96) != 0) {
          DWORD2(v74) = LANES128(v302).n128_u32[2];
          *(_QWORD*)(v51 + 80) = LANES128(v302).n128_u64[0];
        LABEL_106:
          v75 = *(_OWORD*)(v51 + 80);
          *((_QWORD*)&v75 + 1) = DWORD2(v74);
          *(_OWORD*)(v51 + 80) = v75;
          v76 = v315_.v315;
          if ((_QWORD)v315_.v315 == 0) {
            goto LABEL_175;
          }
          goto LABEL_118;
        }
      LABEL_117:
        v76 = v315_.v315;
        if ((_QWORD)v315_.v315 == 0) {
        LABEL_175:
          v103 = *(_QWORD*)(*(_QWORD*)(v51 + 40) + 24LL);
          if ((*(_BYTE*)v103 & 1) != 0) {
            v104 = *(_QWORD*)(v103 + 16);
          }
          else {
            v104 = v103 + 1;
          }
          LANES128(v319_.v319).n128_u64[1] = v104;
          LANES128(v319_.v319).n128_u64[0] = game_HashString_alt1(v104),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v106 = false;
          if (game_GameModeData_instance_ != 0) {
            v105 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                LANES128(v319_.v319).n128_u64),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v105 != 0 && *(_DWORD*)(v105 + 32) != 0) {
              v106 = true;
            }
          }
          *(_DWORD*)(v51 + 32) = v106;
          LANES128(v319_.v319).n128_u8[0] = 12;
          strcpy(&LANES128(v319_.v319).n128_i8[1], "Temple");
          *(_BYTE*)(v51 + 136) =
              LocatorDispos_db2560(v43 + 376, (unsigned __int8*)&v319_.v319) &
              1,
                          v158 = COERCE_AS(
                              __typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                          v78 = COERCE_AS(
                              __typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v107 = (_QWORD*)v310[3];
          v108 = v310[4];
          if ((unsigned __int64)v107 >= v108) {
            v110 = *v309;
            v111 = (signed __int64)v107 - *v309;
            v112 = (v111 >> 4) + 1;
            if (v112 >> 60 != 0) {
              GameRoutine_ee3450(),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v113 = v108 - v110;
            if (v113 >> 3 > v112) {
              v112 = v113 >> 3;
            }
            if ((unsigned __int64)v113 >= 0x7FFFFFFFFFFFFFF0LL) {
              v114 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v114 = v112;
            }
            if (v114 >> 60 != 0) {
            LABEL_430:
              GameRoutine_60a210(),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v115 = fw_memory_HeapManager_Allocate_alt1(*v26, 16 * v114, 16, 0),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v116 = (_QWORD*)(v115 + v111);
            v117 = v115 + 16 * v114;
            *v116 = v50;
            v116[1] = v51;
            v118 = v115 + v111 - 16 * (v111 >> 4);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                      memory_order_relaxed);
            v109 = v115 + v111 + 16;
            memcpy_alt1(v118, v110, v111),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v310[2] = v118;
            v310[3] = v109;
            v310[4] = v117;
            if (v110 != 0) {
              v119 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v119 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v119, v110),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            *v107 = v50;
            v107[1] = v51;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                      memory_order_relaxed);
            v109 = (__int64)(v107 + 2);
          }
          v310[3] = v109;
          v120 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_QWORD*)(v120 + 8) = 0;
          v121 = (atomic_ullong*)(v120 + 8);
          *(_QWORD*)(v120 + 16) = 0;
          v122 = v120;
          *(_QWORD*)(v120 + 48) = 0;
          *(_QWORD*)(v120 + 56) = 0;
          *(_QWORD*)(v120 + 64) = 0;
          *(_QWORD*)(v120 + 72) = 0;
          *(_QWORD*)(v120 + 80) = 0;
          *(_QWORD*)(v120 + 88) = 0;
          *(_QWORD*)v120 = GameData_1fef7a0;
          *(_QWORD*)(v120 + 24) = game_hub_FastTravelSpotData_vtable;
          v123 = v120 + 24;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                    memory_order_relaxed);
          *(_QWORD*)(v120 + 32) = v50;
          *(_QWORD*)(v120 + 40) = v51;
          v124 = (__int64*)v310[5];
          v125 = (__int64*)v124[1];
          v126 = v124[2];
          if ((unsigned __int64)v125 >= v126) {
            v128 = (__int64)v125 - *v124;
            v129 = (v128 >> 4) + 1;
            if (v129 >> 60 != 0) {
              GameRoutine_ee3470(),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v130 = v126 - *v124;
            if (v130 >> 3 > v129) {
              v129 = v130 >> 3;
            }
            if ((unsigned __int64)v130 >= 0x7FFFFFFFFFFFFFF0LL) {
              v131 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v131 = v129;
            }
            if (v131 >> 60 != 0) {
              goto LABEL_430;
            }
            v132 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v131, 16, 0),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v133 = (__int64*)(v132 + v128);
            v134 = v132 + 16 * v131;
            *v133 = v123;
            v133[1] = v122;
            v127 = v132 + v128 + 16;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v122 + 8), 1u,
                                      memory_order_relaxed);
            v135 = *v124;
            v136 = v124[1] - *v124;
            v137 = (char*)v133 - v136;
            memcpy_alt1((__int64)v133 - v136, *v124, v136),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *v124 = (__int64)v137;
            v124[1] = v127;
            v124[2] = v134;
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (v135 != 0) {
              v138 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v138 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v138, v135),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            *v125 = v123;
            v125[1] = v120;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v120 + 8), 1u,
                                      memory_order_relaxed);
            v127 = (__int64)(v125 + 2);
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          v124[1] = v127;
          if (atomic_fetch_add(v121, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v122 + 16LL))(v122),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt2(v122),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          add = atomic_fetch_add(v303, 0xFFFFFFFFFFFFFFFFLL);
          v34 = GameData_212ec00;
          if (add == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt2(v51),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if (v305 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v305 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v305 + 16LL))(v305),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt2(v305),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_67;
        }
      LABEL_118:
        if (v76 == *((_QWORD*)&v315_.v315 + 1)) {
          goto LABEL_172;
        }
        v81 = *((_QWORD*)&v315_.v315 + 1) - 136LL;
        do {
          if ((*(_BYTE*)(v81 + 80) & 1) != 0) {
            v83 = *(_QWORD*)(v81 + 96);
            if (v83 != 0) {
              v84 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v84 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v84, v83),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          if ((*(_BYTE*)(v81 + 56) & 1) != 0) {
            v85 = *(_QWORD*)(v81 + 72);
            if (v85 != 0) {
              v86 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v86 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v86, v85),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          if ((*(_BYTE*)(v81 + 32) & 1) != 0) {
            v87 = *(_QWORD*)(v81 + 48);
            if (v87 != 0) {
              v88 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v88 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v88, v87),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          if ((*(_BYTE*)(v81 + 8) & 1) != 0) {
            v89 = *(_QWORD*)(v81 + 24);
            if (v89 != 0) {
              v90 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v90 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v90, v89),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          if ((*(_BYTE*)(v81 - 16) & 1) != 0 && *(_QWORD*)v81 != 0) {
            v91 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v91 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v26 + v91, *(_QWORD*)v81),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(v81 - 64) & 1) != 0) {
            v92 = *(_QWORD*)(v81 - 48);
            if (v92 != 0) {
              v93 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v93 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v93, v92),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          if ((*(_BYTE*)(v81 - 88) & 1) != 0) {
            v94 = *(_QWORD*)(v81 - 72);
            if (v94 != 0) {
              v95 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v95 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v95, v94),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          if ((*(_BYTE*)(v81 - 112) & 1) != 0) {
            v96 = *(_QWORD*)(v81 - 96);
            if (v96 != 0) {
              v97 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v97 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v97, v96),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          if ((*(_BYTE*)(v81 - 136) & 1) != 0) {
            v98 = *(_QWORD*)(v81 - 120);
            if (v98 != 0) {
              v99 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v99 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v99, v98),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          if ((*(_BYTE*)(v81 - 160) & 1) != 0) {
            v100 = *(_QWORD*)(v81 - 144);
            if (v100 != 0) {
              v101 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v101 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v26 + v101, v100),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v82 = v81 - 160;
          v81 -= 296;
        } while (v82 != v76);
        *((_QWORD*)&v315_.v315 + 1) = v76;
        v76 = v315_.v315;
        if ((_QWORD)v315_.v315 != 0) {
        LABEL_172:
          v102 = 128;
          if (*(_QWORD*)(*v26 + 200) == 0) {
            v102 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v26 + v102, v76),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_175;
      }
      if (*(_BYTE*)(v51 + 96) != 0) {
        *(_BYTE*)(v51 + 96) = 0;
        v76 = v315_.v315;
        if ((_QWORD)v315_.v315 == 0) {
          goto LABEL_175;
        }
        goto LABEL_118;
      }
      *(int8x16_t*)(v51 + 80) = v302;
    }
    else {
      if (v72 != 1) {
        goto LABEL_117;
      }
      LODWORD(v73) = *(_DWORD*)(v43 + 168);
      *(_QWORD*)&v74 = *(_QWORD*)(v43 + 160);
      *((_QWORD*)&v74 + 1) = v73;
      if (*(_BYTE*)(v51 + 96) == 1) {
        *(_QWORD*)(v51 + 80) = *(_QWORD*)(v43 + 160);
        goto LABEL_106;
      }
      *(_OWORD*)(v51 + 80) = v74;
    }
    *(_BYTE*)(v51 + 96) = 1;
    goto LABEL_117;
  }
LABEL_220:
  v140 = *(_QWORD**)(*(_QWORD*)v34 + 8LL);
  v141 = *(_QWORD**)(*(_QWORD*)v34 + 16LL);
  if (v140 != v141) {
    v142 = GameData_212ebb0[0];
    do {
      v143 = *v140;
      v144 = *(_QWORD*)(*v140 + 136LL);
      v145 = *(_QWORD*)(*v140 + 144LL);
      if (v144 != v145) {
        while (1) {
          v146 = *(_QWORD*)(v144 + 8);
          if ((*(_BYTE*)v144 & 1) == 0) {
            v146 = *(_BYTE*)v144 >> 1;
          }
          if (v146 == 18) {
            v147 = (*(_BYTE*)v144 & 1) != 0 ? *(__int64**)(v144 + 16)
                                            : (__int64*)(v144 + 1);
            v148 = *v147;
            v149 = v147[1];
            v150 = *((unsigned __int16*)v147 + 8);
            v151 = v148 == 0x83E3B39BE5B09CE5LL && v149 == 0xE59783E3BC83E3AFLL;
            if (v151 && v150 == 44943) {
              break;
            }
          }
          v144 += 24;
          if (v144 == v145) {
            goto LABEL_222;
          }
        }
      }
      if (v144 == v145) {
        goto LABEL_222;
      }
      *(_QWORD*)&v153 = *(_QWORD*)(v143 + 160);
      LODWORD(v30) = *(_DWORD*)(v143 + 168);
      v154 = *v142;
      *((_QWORD*)&v153 + 1) = v30;
      v315_.v315 = v153;
      v155 = *v140;
      v156 = GameRoutine_f71d40(v154, (__int64)&v315_.v315, *v140 + 376LL),
      v158 = COERCE_AS(__typeof__(v158),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v157 = game_hub_f71fc0(*v142, (__int64)&v315_.v315, v155 + 376),
      v158 = COERCE_AS(__typeof__(v158),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LocatorDispos_db1f30((void*)((__int64*)&v319_.v319),
                           (unsigned __int8*)(v155 + 376)),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      FastTravelManager_ee05e0_alt1((void*)(&v313_.v313), v158, &v315_.v315,
                                    &v319_.v319, v156, v157, v309, 0),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v159 = v313_.v313;
      if (v313_.v313 != nullptr) {
        v161 = *v140;
        v160 = v140[1];
        if (v160 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v160 + 16), 1u,
                                    memory_order_relaxed);
        }
        v163 = (_QWORD*)v159[11];
        v162 = v159[12];
        if ((unsigned __int64)v163 >= v162) {
          v165 = v159[10];
          v166 = (char*)v163 - v165;
          v167 = (((__int64)v163 - v165) >> 4) + 1;
          if (v167 >> 60 != 0) {
            GameRoutine_ee3490(),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v168 = v162 - v165;
          if (v168 >> 3 > v167) {
            v167 = v168 >> 3;
          }
          if ((unsigned __int64)v168 >= 0x7FFFFFFFFFFFFFF0LL) {
            v169 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v169 = v167;
          }
          if (v169 != 0) {
            if (v169 >> 60 != 0) {
              goto LABEL_430;
            }
            v170 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v169, 16, 0),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v170 = 0;
          }
          v171 = &v166[v170];
          v172 = v170 + 16 * v169;
          *(_QWORD*)v171 = v161;
          *((_QWORD*)v171 + 1) = v160;
          v164 = (__int64)&v166[v170 + 16];
          v173 = v159[10];
          v174 = v159[11] - v173;
          v175 = &v171[-v174];
          memcpy_alt1((__int64)&v171[-v174], v173, v174),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v159[10] = v175;
          v159[11] = v164;
          v159[12] = v172;
          if (v173 != 0) {
            v176 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v176 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v176, v173),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        else {
          *v163 = v161;
          v163[1] = v160;
          v164 = (__int64)(v163 + 2);
        }
        v159[11] = v164;
      }
      v177 = v313_.v314;
      if (v313_.v314 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v313_.v314 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v177 + 16LL))(v177),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v177),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((LANES128(v319_.v319).n128_u8[0] & 1) != 0) {
        LABEL_264:
          if (v319_.v320 != 0) {
            v178 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v178 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v178, v319_.v320),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      else if ((LANES128(v319_.v319).n128_u8[0] & 1) != 0) {
        goto LABEL_264;
      }
    LABEL_222:
      v140 += 2;
    } while (v140 != v141);
  }
  v179 = *(_QWORD*)(*GameData_212ebe0 + 8);
  v180 = *(_QWORD**)(v179 + 24);
  v306 = (_QWORD*)(v179 + 32);
  if (v180 != (_QWORD*)(v179 + 32)) {
    v181 = GameData_212ebb0[0];
    while (1) {
      v182 = (__int64*)v180[7];
      v183 = (__int64*)v180[8];
      if (v182 != v183) {
        break;
      }
    LABEL_381:
      v277 = (_QWORD*)v180[1];
      if (v277 != nullptr) {
        do {
          v278 = v277;
          v277 = (_QWORD*)*v277;
        } while (v277 != nullptr);
      }
      else {
        do {
          v278 = (_QWORD*)v180[2];
          v9 = v180 == (_QWORD*)*v278;
          v180 = v278;
        } while (!v9);
      }
      v180 = v278;
      if (v278 == v306) {
        goto LABEL_387;
      }
    }
    v308 = (__int64*)v180[8];
    while (1) {
      v184 = *(_QWORD*)(*v182 + 552);
      v185 = *(_QWORD*)(*v182 + 560);
      if (v185 != 0 &&
          (atomic_fetch_add_explicit((atomic_ullong* volatile)(v185 + 8), 1u,
                                     memory_order_relaxed),
           atomic_fetch_add((atomic_ullong* volatile)(v185 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0)) {
        (*(void (**)(__int64))(*(_QWORD*)v185 + 16LL))(v185),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v185),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v184 == 0) {
          goto LABEL_275;
        }
      }
      else if (v184 == 0) {
        goto LABEL_275;
      }
      v186 = *v181;
      LANES128(v187).n128_u64[0] = *(_QWORD*)(*v182 + 184);
      LODWORD(v30) = *(_DWORD*)(*v182 + 192);
      v188 = *v181;
      LANES128(v187).n128_u64[1] = v30;
      v319_.v319 = v187;
      v189 = *v182;
      v190 = GameRoutine_f71d40(v188, (__int64)&v319_.v319, *v182 + 824),
      v158 = COERCE_AS(__typeof__(v158),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((GameRoutine_f71cb0(v190, v190) & 1) != 0 &&
          ((unsigned int)game_hub_f71fc0(v186, (__int64)&v319_.v319,
                                         v189 + 824) == 0 ||
           (*(_DWORD*)(v186 + 32) & 2) != 0)) {
        v191 = *v181;
        LANES128(v192).n128_u64[0] = *(_QWORD*)(*v182 + 184);
        LODWORD(v30) = *(_DWORD*)(*v182 + 192);
        LANES128(v192).n128_u64[1] = v30;
        v319_.v319 = v192;
        v193 = GameRoutine_f71d40(v191, (__int64)&v319_.v319, *v182 + 824),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v194 = *v181;
        LANES128(v195).n128_u64[0] = *(_QWORD*)(*v182 + 184);
        LODWORD(v196) = *(_DWORD*)(*v182 + 192);
        LANES128(v195).n128_u64[1] = v196;
        v319_.v319 = v195;
        v197 = game_hub_f71fc0(v194, (__int64)&v319_.v319, *v182 + 824),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v199 = *v182;
        v200 = *(_QWORD*)(*v182 + 552);
        v201 = *(_QWORD*)(*v182 + 560);
        if (v201 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v201 + 8), 1u,
                                    memory_order_relaxed);
          v199 = *v182;
        }
        *(_QWORD*)&v202 = *(_QWORD*)(v199 + 184);
        LODWORD(v198) = *(_DWORD*)(v199 + 192);
        *((_QWORD*)&v202 + 1) = v198;
        v315_.v315 = v202;
        FastTravelManager_ee05e0_alt1((void*)(&v319_.v319), v197, &v315_.v315,
                                      v180 + 4, v193, (unsigned int)v197, v309,
                                      1),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (LANES128(v319_.v319).n128_u64[0] == 0) {
          goto LABEL_373;
        }
        if (*(_BYTE*)(v200 + 128) == 1) {
          *(_QWORD*)&v315_.v315 = *(_QWORD*)v200;
          if ((UnitUtil_1212140((unsigned __int64)&v315_.v315) & 1) != 0) {
            v203 = (__int64***)v310[5];
            v204 = *v203;
            v205 = v203[1];
            if (*v203 != v205) {
              do {
                v206 = *v204;
                v207 = (__int64)v204[1];
                if (v207 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v207 + 8),
                                            1u, memory_order_relaxed);
                  v208 = LANES128(v319_.v319).n128_u64[0];
                  v209 = v206[1];
                  if (atomic_fetch_add((atomic_ullong* volatile)(v207 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v207 + 16LL))(v207),
                        v158 = COERCE_AS(
                            __typeof__(v158),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v78 = COERCE_AS(
                            __typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    std___1___shared_weak_count___release_weak_alt2(v207),
                        v158 = COERCE_AS(
                            __typeof__(v158),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v78 = COERCE_AS(
                            __typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  if (v209 == v208) {
                    goto LABEL_299;
                  }
                }
                else if (v206[1] == LANES128(v319_.v319).n128_u64[0]) {
                  goto LABEL_299;
                }
                v204 += 2;
              } while (v204 != v205);
              v204 = v205;
            LABEL_299:
              if (v204 != *(__int64***)(v310[5] + 8LL)) {
                v210 = *v204;
                v211 = (*v204)[7];
                if (v211 >= v210[8]) {
                  v215 = GameHr_ee34c0(v210 + 6, v200),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  *(_QWORD*)v211 = *(_QWORD*)v200;
                  *(_QWORD*)(v211 + 24) = *(_QWORD*)(v200 + 24);
                  v212 = *(_QWORD*)(v200 + 16);
                  *(_BYTE*)(v211 + 32) = 0;
                  *(_BYTE*)(v211 + 112) = 0;
                  *(_QWORD*)(v211 + 16) = v212;
                  if (*(_BYTE*)(v200 + 112) == 1) {
                    *(_DWORD*)(v211 + 32) = *(_DWORD*)(v200 + 32);
                    if ((*(_BYTE*)(v200 + 40) & 1) != 0) {
                      fw_text_String_CopyTerminated((__int64*)(v211 + 40),
                                                    *(_QWORD*)(v200 + 56),
                                                    *(_QWORD*)(v200 + 48)),
                          v158 = COERCE_AS(
                              __typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                          v78 = COERCE_AS(
                              __typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    else {
                      v213 = *(_QWORD*)(v200 + 40);
                      v214 = *(_QWORD*)(v200 + 56);
                      *(_QWORD*)(v211 + 48) = *(_QWORD*)(v200 + 48);
                      *(_QWORD*)(v211 + 56) = v214;
                      *(_QWORD*)(v211 + 40) = v213;
                    }
                    if ((*(_BYTE*)(v200 + 64) & 1) != 0) {
                      fw_text_String_CopyTerminated((__int64*)(v211 + 64),
                                                    *(_QWORD*)(v200 + 80),
                                                    *(_QWORD*)(v200 + 72)),
                          v158 = COERCE_AS(
                              __typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                          v78 = COERCE_AS(
                              __typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    else {
                      *(_QWORD*)(v211 + 72) = *(_QWORD*)(v200 + 72);
                      v216 = *(_QWORD*)(v200 + 64);
                      *(_QWORD*)(v211 + 80) = *(_QWORD*)(v200 + 80);
                      *(_QWORD*)(v211 + 64) = v216;
                    }
                    *(_QWORD*)(v211 + 104) = *(_QWORD*)(v200 + 104);
                    *(_QWORD*)(v211 + 96) = *(_QWORD*)(v200 + 96);
                    *(_BYTE*)(v211 + 112) = 1;
                  }
                  v215 = v211 + 128;
                }
                v210[7] = v215;
              }
            }
            v217 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_QWORD*)(v217 + 8) = 0;
            v218 = v217;
            *(_QWORD*)(v217 + 16) = 0;
            *(_QWORD*)(v217 + 40) = 0;
            *(_QWORD*)(v217 + 48) = 0;
            *(_QWORD*)(v217 + 64) = 0;
            *(_BYTE*)(v217 + 176) = 0;
            *(_QWORD*)(v217 + 80) = 0;
            *(_QWORD*)(v217 + 88) = 0;
            *(_BYTE*)(v217 + 96) = 0;
            *(_DWORD*)(v217 + 192) = 0;
            v307 = (atomic_ullong*)(v217 + 8);
            *(_QWORD*)v217 = GameData_1fef7f0;
            *(_QWORD*)(v217 + 32) = game_hub_FastTravelUnitData_vtable;
            v219 = v217 + 32;
            v220 = v319_.v319;
            if (LANES128(v319_.v319).n128_u64[1] != 0) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(LANES128(v319_.v319).n128_u64[1] +
                                            8),
                  1u, memory_order_relaxed);
              v221 = *(_QWORD*)(v217 + 48);
              *(int8x16_t*)(v217 + 40) = v220;
              if (v221 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v221 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v221 + 16LL))(v221),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak_alt2(v221),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            else {
              *(_OWORD*)(v217 + 40) = LANES128(v319_.v319).n128_u64[0];
            }
            *(_QWORD*)(v218 + 64) = *(_QWORD*)v200;
            *(_DWORD*)(v218 + 80) = *(_DWORD*)(v200 + 16);
            *(_DWORD*)(v218 + 84) = *(_DWORD*)(v200 + 20);
            v222 = *(_OWORD*)(v218 + 80);
            *((_QWORD*)&v222 + 1) = *(unsigned int*)(v200 + 24);
            *(_OWORD*)(v218 + 80) = v222;
            GameRoutine_d90ea0_alt1(v218 + 96, v200 + 32),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_DWORD*)(v218 + 192) = 0;
            v223 = (_QWORD*)v310[5];
            v224 = (__int64*)v223[7];
            v225 = v223[8];
            if ((unsigned __int64)v224 >= v225) {
              v227 = v223[6];
              v228 = (char*)v224 - v227;
              v229 = (((__int64)v224 - v227) >> 4) + 1;
              if (v229 >> 60 != 0) {
                GameRoutine_ee38f0(),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v230 = v225 - v227;
              if (v230 >> 3 > v229) {
                v229 = v230 >> 3;
              }
              if ((unsigned __int64)v230 >= 0x7FFFFFFFFFFFFFF0LL) {
                v231 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v231 = v229;
              }
              if (v231 >> 60 != 0) {
                goto LABEL_430;
              }
              v232 = fw_memory_g_heap_manager_ptr;
              v233 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v231, 16, 0),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v234 = (__int64*)&v228[v233];
              v304 = v233 + 16 * v231;
              *v234 = v219;
              v234[1] = v218;
              v226 = (__int64)&v228[v233 + 16];
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v218 + 8), 1u,
                                        memory_order_relaxed);
              v235 = v223[6];
              v236 = v223[7] - v235;
              v237 = (char*)v234 - v236;
              memcpy_alt1((__int64)v234 - v236, v235, v236),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v223[6] = v237;
              v223[7] = v226;
              v223[8] = v304;
              if (v235 != 0) {
                v238 = 128;
                if (*(_QWORD*)(*(_QWORD*)v232 + 200LL) == 0) {
                  v238 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v232 + v238, v235),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            else {
              *v224 = v219;
              v224[1] = v218;
              v226 = (__int64)(v224 + 2);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v218 + 8), 1u,
                                        memory_order_relaxed);
            }
            v181 = GameData_212ebb0[0];
            v183 = v308;
            v223[7] = v226;
            if (atomic_fetch_add(v307, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v218 + 16LL))(v218),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt2(v218),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        if (*(_BYTE*)(v200 + 224) != 1) {
          goto LABEL_373;
        }
        v239 = (__int64***)v310[5];
        v240 = *v239;
        v241 = v239[1];
        if (*v239 != v241) {
          do {
            v242 = *v240;
            v243 = (__int64)v240[1];
            if (v243 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v243 + 8), 1u,
                                        memory_order_relaxed);
              v244 = LANES128(v319_.v319).n128_u64[0];
              v245 = v242[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v243 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v243 + 16LL))(v243),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak_alt2(v243),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if (v245 == v244) {
                goto LABEL_343;
              }
            }
            else if (v242[1] == LANES128(v319_.v319).n128_u64[0]) {
              goto LABEL_343;
            }
            v240 += 2;
          } while (v240 != v241);
          v240 = v241;
        LABEL_343:
          if (v240 != *(__int64***)(v310[5] + 8LL)) {
            v246 = *v240;
            v247 = (*v240)[4];
            if (v247 >= v246[5]) {
              v251 = GameHr_ee3920(v246 + 3, v200 + 144),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              *(_DWORD*)v247 = *(_DWORD*)(v200 + 144);
              v248 = (__int64*)(v247 + 8);
              if ((*(_BYTE*)(v200 + 152) & 1) != 0) {
                fw_text_String_CopyTerminated(v248, *(_QWORD*)(v200 + 168),
                                              *(_QWORD*)(v200 + 160)),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v249 = *(_QWORD*)(v200 + 152);
                v250 = *(_QWORD*)(v200 + 168);
                *(_QWORD*)(v247 + 16) = *(_QWORD*)(v200 + 160);
                *(_QWORD*)(v247 + 24) = v250;
                *v248 = v249;
              }
              if ((*(_BYTE*)(v200 + 176) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)(v247 + 32),
                                              *(_QWORD*)(v200 + 192),
                                              *(_QWORD*)(v200 + 184)),
                    v158 = COERCE_AS(
                        __typeof__(v158),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                *(_QWORD*)(v247 + 40) = *(_QWORD*)(v200 + 184);
                v252 = *(_QWORD*)(v200 + 176);
                *(_QWORD*)(v247 + 48) = *(_QWORD*)(v200 + 192);
                *(_QWORD*)(v247 + 32) = v252;
              }
              v251 = v247 + 80;
              *(_QWORD*)(v247 + 72) = *(_QWORD*)(v200 + 216);
              *(_QWORD*)(v247 + 64) = *(_QWORD*)(v200 + 208);
            }
            v246[4] = v251;
          }
        }
        v253 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v253 + 8) = 0;
        *(_QWORD*)(v253 + 16) = 0;
        *(_QWORD*)(v253 + 40) = 0;
        *(_QWORD*)(v253 + 48) = 0;
        *(_QWORD*)(v253 + 128) = 0;
        *(_QWORD*)(v253 + 136) = 0;
        *(_QWORD*)(v253 + 72) = 0;
        *(_QWORD*)(v253 + 80) = 0;
        *(_QWORD*)(v253 + 88) = 0;
        *(_QWORD*)(v253 + 96) = 0;
        *(_QWORD*)v253 = GameData_1fef840;
        *(_DWORD*)(v253 + 64) = 0;
        v254 = v253 + 64;
        *(_QWORD*)(v253 + 104) = 0;
        *(_QWORD*)(v253 + 112) = 0;
        *(_QWORD*)(v253 + 32) = game_hub_FastTravelFacilityData_vtable;
        v255 = v253 + 32;
        v256 = v319_.v319;
        if (LANES128(v319_.v319).n128_u64[1] != 0) {
          atomic_fetch_add_explicit(
              (atomic_ullong* volatile)(LANES128(v319_.v319).n128_u64[1] + 8),
              1u, memory_order_relaxed);
          v257 = *(_QWORD*)(v253 + 48);
          *(int8x16_t*)(v253 + 40) = v256;
          if (v257 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v257 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v257 + 16LL))(v257),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt2(v257),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v254 = v253 + 64;
          }
        }
        else {
          *(_OWORD*)(v253 + 40) = LANES128(v319_.v319).n128_u64[0];
        }
        *(float*)&v258 = GameRoutine_d90d90(v254, v200 + 144),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v259 = (_QWORD*)v310[5];
        v260 = (__int64*)v259[4];
        v261 = v259[5];
        if ((unsigned __int64)v260 >= v261) {
          v263 = v259[3];
          v264 = (char*)v260 - v263;
          v265 = (((__int64)v260 - v263) >> 4) + 1;
          if (v265 >> 60 != 0) {
            GameRoutine_ee3bb0(),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v266 = v261 - v263;
          if (v266 >> 3 > v265) {
            v265 = v266 >> 3;
          }
          if ((unsigned __int64)v266 >= 0x7FFFFFFFFFFFFFF0LL) {
            v267 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v267 = v265;
          }
          if (v267 >> 60 != 0) {
            goto LABEL_430;
          }
          v268 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v267, 16, 0),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v269 = (__int64*)&v264[v268];
          v270 = v268 + 16 * v267;
          *v269 = v255;
          v269[1] = v253;
          v262 = (__int64)&v264[v268 + 16];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v253 + 8), 1u,
                                    memory_order_relaxed);
          v271 = v259[3];
          v272 = v259[4] - v271;
          v273 = (char*)v269 - v272;
          memcpy_alt1((__int64)v269 - v272, v271, v272),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v259[3] = v273;
          v259[4] = v262;
          v259[5] = v270;
          if (v271 != 0) {
            v274 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v274 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v274, v271),
                v158 =
                    COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        else {
          *v260 = v255;
          v260[1] = v253;
          v262 = (__int64)(v260 + 2);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v253 + 8), 1u,
                                    memory_order_relaxed);
        }
        v259[4] = v262;
        v183 = v308;
        v275 = atomic_fetch_add((atomic_ullong* volatile)(v253 + 8),
                                0xFFFFFFFFFFFFFFFFLL);
        v181 = GameData_212ebb0[0];
        if (v275 == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v253 + 16LL))(v253,
                                                                      v258),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v253),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v276 = LANES128(v319_.v319).n128_i64[1];
          if (LANES128(v319_.v319).n128_u64[1] != 0) {
            goto LABEL_374;
          }
        }
        else {
        LABEL_373:
          v276 = LANES128(v319_.v319).n128_i64[1];
          if (LANES128(v319_.v319).n128_u64[1] != 0) {
          LABEL_374:
            if (atomic_fetch_add((atomic_ullong* volatile)(v276 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v276 + 16LL))(v276),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt2(v276),
                  v158 = COERCE_AS(
                      __typeof__(v158),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        if (v201 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v201 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v201 + 16LL))(v201),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v201),
              v158 = COERCE_AS(__typeof__(v158),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    LABEL_275:
      v182 += 6;
      if (v182 == v183) {
        goto LABEL_381;
      }
    }
  }
LABEL_387:
  v279 = v311_.v311;
  v311_.v312 = v311_.v311;
  v280 = *(_QWORD*)GameData_212dc68;
  v311_.v311[0] = GameData_1fef890;
  v311_.v311[1] = v310;
  v281 = *(_QWORD**)(v280 + 152);
  v282 = (_QWORD*)(v280 + 160);
  if (v281 == (_QWORD*)(v280 + 160)) {
  LABEL_405:
    v289 = 32;
  LABEL_406:
    (*(void (**)(__int64))(*v279 + v289))((__int64)v279),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_407;
  }
  do {
    v283 = v281[7];
    v284 = v281[8];
    if (v283 != v284) {
      while (v311_.v312 != nullptr) {
        (*(void (**)(_QWORD*, __int64))(*v311_.v312 + 48LL))(v311_.v312, v283),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v283 += 16;
        if (v283 == v284) {
          goto LABEL_393;
        }
      }
    LABEL_429:
      GameRoutine_60a310(),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_393:
    v285 = v281[10];
    v286 = v281[11];
    if (v285 != v286) {
      while (v311_.v312 != nullptr) {
        (*(void (**)(_QWORD*, __int64))(*v311_.v312 + 48LL))(v311_.v312, v285),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v285 += 16;
        if (v285 == v286) {
          goto LABEL_396;
        }
      }
      goto LABEL_429;
    }
  LABEL_396:
    v287 = (_QWORD*)v281[1];
    if (v287 != nullptr) {
      do {
        v288 = v287;
        v287 = (_QWORD*)*v287;
      } while (v287 != nullptr);
    }
    else {
      do {
        v288 = (_QWORD*)v281[2];
        v9 = v281 == (_QWORD*)*v288;
        v281 = v288;
      } while (!v9);
    }
    v281 = v288;
  } while (v288 != v282);
  v279 = v311_.v312;
  if (v311_.v312 == v311_.v311) {
    goto LABEL_405;
  }
  if (v311_.v312 != nullptr) {
    v289 = 40;
    goto LABEL_406;
  }
LABEL_407:
  v290 = (__int64*)v310[5];
  v291 = *v290;
  v292 = v290[1];
  if (*v290 != v292) {
    do {
      v293 = *(char**)(*(_QWORD*)v291 + 48LL);
      v294 = *(char**)(*(_QWORD*)v291 + 56LL);
      if (v293 != v294) {
        GameHr_ee3be0(v293, v294, (2 * __clz((v294 - v293) >> 7)) ^ 0x7E, 1),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v291 += 16;
    } while (v291 != v292);
    v290 = (__int64*)v310[5];
  }
  v295 = v290[6];
  v296 = (char*)v290[7];
  v297 = fw_memory_g_heap_manager_ptr;
  if ((char*)v295 != v296) {
    GameRoutine_ee6e80_alt1(v295, v296,
                            (2 * __clz((__int64)&v296[-v295] >> 4)) ^ 0x7E, 1),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v290 = (__int64*)v310[5];
  }
  v298 = v290[3];
  v299 = (char*)v290[4];
  if ((char*)v298 != v299) {
    GameRoutine_ee85a0_alt1(v298, v299,
                            (2 * __clz((__int64)&v299[-v298] >> 4)) ^ 0x7E, 1),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  LANES128(v319_.v319).n128_u64[1] = (unsigned __int64)&GameData_1a8a29f;
  LANES128(v319_.v319).n128_u64[0] =
      game_HashString_alt1((__int64)&GameData_1a8a29f),
  v158 = COERCE_AS(__typeof__(v158),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v300 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        LANES128(v319_.v319).n128_u64),
    v158 = COERCE_AS(__typeof__(v158),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v300 != 0 && *(_DWORD*)(v300 + 32) != 0 &&
        (GameRoutine_ee23a0((__int64)v310) & 1) != 0) {
      LANES128(v319_.v319).n128_u64[1] = (unsigned __int64)&GameData_1ac3e7d;
      LANES128(v319_.v319).n128_u64[0] =
          game_HashString_alt1((__int64)&GameData_1ac3e7d),
      v158 = COERCE_AS(__typeof__(v158),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      game_VariableManager_SetFlag((__int64)&v319_.v319, 1),
          v158 = COERCE_AS(__typeof__(v158),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((v317_.v317[0] & 1) != 0 && v317_.v318 != 0) {
    v301 = 128;
    if (*(_QWORD*)(*(_QWORD*)v297 + 200LL) == 0) {
      v301 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v297 + v301, v317_.v318),
        v158 = COERCE_AS(__typeof__(v158),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
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
    *(__n128*)&v7 = game_hub_FastTravelManager_RefreshTravelList_alt1(a1),
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

void game_hub_FastTravelManager_RefreshTravelList_lambda2_Invoke(__int64 a1,
                                                                 __int64* a2,
                                                                 double a3,
                                                                 double a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int128 v16;
  __int64 v17;
  unsigned int v18;
  __int128 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  __int64*** v26;
  __int64** v27;
  __int64** v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int128 v43;
  long double v44;
  _QWORD* v45;
  __int64* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64* v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  __int128 v62;
  __int128 v63;

  v5 = *a2;
  v4 = a2[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD*)(v5 + 840);
  v8 = *(_QWORD*)(v5 + 848);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v7 != 0) {
    v9 = (_QWORD*)(v5 + 260);
    v10 = GameData_212ebb0[0];
    *(_QWORD*)&v11 = *(_QWORD*)(v5 + 260);
    LODWORD(a4) = *(_DWORD*)(v5 + 268);
    v12 = *GameData_212ebb0[0];
    *((double*)&v11 + 1) = a4;
    v13 = *GameData_212ebb0[0];
    v63 = v11;
    v14 = GameRoutine_f71d40(v13, (__int64)&v63, v5 + 856);
    if ((GameRoutine_f71cb0(v14, v14) & 1) != 0 &&
        ((unsigned int)game_hub_f71fc0(v12, (__int64)&v63, v5 + 856) == 0 ||
         (*(_DWORD*)(v12 + 32) & 2) != 0) &&
        *(_BYTE*)(v7 + 80) == 1) {
      *(_QWORD*)&v16 = *v9;
      LODWORD(v15) = *(_DWORD*)(v5 + 268);
      v17 = *v10;
      *((_QWORD*)&v16 + 1) = v15;
      v63 = v16;
      v18 = GameRoutine_f71d40(v17, (__int64)&v63, v5 + 856);
      *(_QWORD*)&v19 = *v9;
      LODWORD(v20) = *(_DWORD*)(v5 + 268);
      v21 = v18;
      v22 = *v10;
      *((_QWORD*)&v19 + 1) = v20;
      v63 = v19;
      v23 = game_hub_f71fc0(v22, (__int64)&v63, v5 + 856);
      *(_QWORD*)&v24 = *v9;
      LODWORD(v25) = *(_DWORD*)(v5 + 268);
      *((_QWORD*)&v24 + 1) = v25;
      v62 = v24;
      FastTravelManager_ee05e0_alt1((void*)(&v63), v23, &v62, v5 + 1216, v21,
                                    (unsigned int)v23, v6 + 16, 1);
      if ((_QWORD)v63 != 0) {
        if ((*(_BYTE*)(v7 + 80) & 1) == 0) {
          GameRoutine_8123d0();
        }
        v26 = *(__int64****)(v6 + 40);
        v27 = *v26;
        v28 = v26[1];
        if (*v26 != v28) {
          do {
            v29 = *v27;
            v30 = (__int64)v27[1];
            if (v30 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                        memory_order_relaxed);
              v31 = v63;
              v32 = v29[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                std___1___shared_weak_count___release_weak_alt2(v30);
              }
              if (v32 == v31) {
                goto LABEL_22;
              }
            }
            else if (v29[1] == (_QWORD)v63) {
              goto LABEL_22;
            }
            v27 += 2;
          } while (v27 != v28);
          v27 = v28;
        LABEL_22:
          v28 = *(__int64***)(*(_QWORD*)(v6 + 40) + 8LL);
        }
        if (v27 != v28) {
          v33 = *v27;
          v34 = (*v27)[4];
          if (v34 >= v33[5]) {
            v38 = GameHr_ee3920(v33 + 3, v7);
          }
          else {
            *(_DWORD*)v34 = *(_DWORD*)v7;
            v35 = (__int64*)(v34 + 8);
            if ((*(_BYTE*)(v7 + 8) & 1) != 0) {
              fw_text_String_CopyTerminated(v35, *(_QWORD*)(v7 + 24),
                                            *(_QWORD*)(v7 + 16));
            }
            else {
              v36 = *(_QWORD*)(v7 + 8);
              v37 = *(_QWORD*)(v7 + 24);
              *(_QWORD*)(v34 + 16) = *(_QWORD*)(v7 + 16);
              *(_QWORD*)(v34 + 24) = v37;
              *v35 = v36;
            }
            if ((*(_BYTE*)(v7 + 32) & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)(v34 + 32),
                                            *(_QWORD*)(v7 + 48),
                                            *(_QWORD*)(v7 + 40));
            }
            else {
              *(_QWORD*)(v34 + 40) = *(_QWORD*)(v7 + 40);
              v39 = *(_QWORD*)(v7 + 32);
              *(_QWORD*)(v34 + 48) = *(_QWORD*)(v7 + 48);
              *(_QWORD*)(v34 + 32) = v39;
            }
            v38 = v34 + 80;
            *(_QWORD*)(v34 + 72) = *(_QWORD*)(v7 + 72);
            *(_QWORD*)(v34 + 64) = *(_QWORD*)(v7 + 64);
          }
          v33[4] = v38;
        }
        v40 = (__int64*)fw_memory_g_heap_manager_ptr;
        v41 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
        *(_QWORD*)(v41 + 8) = 0;
        *(_QWORD*)(v41 + 16) = 0;
        *(_QWORD*)(v41 + 128) = 0;
        *(_QWORD*)(v41 + 136) = 0;
        *(_QWORD*)(v41 + 72) = 0;
        *(_QWORD*)(v41 + 80) = 0;
        *(_QWORD*)(v41 + 88) = 0;
        *(_QWORD*)(v41 + 96) = 0;
        *(_QWORD*)(v41 + 104) = 0;
        *(_QWORD*)(v41 + 112) = 0;
        *(_QWORD*)v41 = GameData_1fef840;
        *(_DWORD*)(v41 + 64) = 0;
        *(_QWORD*)(v41 + 32) = game_hub_FastTravelFacilityData_vtable;
        v42 = v41 + 32;
        v43 = v63;
        if (*((_QWORD*)&v63 + 1) != 0) {
          atomic_fetch_add_explicit(
              (atomic_ullong* volatile)(*((_QWORD*)&v63 + 1) + 8LL), 1u,
              memory_order_relaxed);
        }
        *(_OWORD*)(v41 + 40) = v43;
        *(float*)&v44 = GameRoutine_d90d90(v41 + 64, v7);
        v45 = *(_QWORD**)(v6 + 40);
        v46 = (__int64*)v45[4];
        v47 = v45[5];
        if ((unsigned __int64)v46 >= v47) {
          v49 = v45[3];
          v50 = (char*)v46 - v49;
          v51 = (((__int64)v46 - v49) >> 4) + 1;
          if (v51 >> 60 != 0) {
            GameRoutine_ee3bb0();
          }
          v52 = v47 - v49;
          if (v52 >> 3 > v51) {
            v51 = v52 >> 3;
          }
          if ((unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF0LL) {
            v53 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v53 = v51;
          }
          if (v53 >> 60 != 0) {
            GameRoutine_60a210();
          }
          v54 = fw_memory_HeapManager_Allocate_alt1(*v40, 16 * v53, 16, 0);
          v55 = (__int64*)&v50[v54];
          v56 = v54 + 16 * v53;
          *v55 = v42;
          v55[1] = v41;
          v48 = (__int64)&v50[v54 + 16];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                    memory_order_relaxed);
          v57 = v45[3];
          v58 = v45[4] - v57;
          v59 = (char*)v55 - v58;
          memcpy_alt1((__int64)v55 - v58, v57, v58);
          v45[3] = v59;
          v45[4] = v48;
          v45[5] = v56;
          if (v57 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*v40 + 200) == 0) {
              v60 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v40 + v60, v57);
          }
        }
        else {
          *v46 = v42;
          v46[1] = v41;
          v48 = (__int64)(v46 + 2);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                    memory_order_relaxed);
        }
        v45[4] = v48;
        if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v41 + 16LL))(v41, v44);
          std___1___shared_weak_count___release_weak_alt2(v41);
        }
      }
      v61 = *((_QWORD*)&v63 + 1);
      if (*((_QWORD*)&v63 + 1) != 0 &&
          atomic_fetch_add(
              (atomic_ullong* volatile)(*((_QWORD*)&v63 + 1) + 8LL),
              0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
        std___1___shared_weak_count___release_weak_alt2(v61);
      }
    }
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
  }
}

#pragma GCC visibility pop
