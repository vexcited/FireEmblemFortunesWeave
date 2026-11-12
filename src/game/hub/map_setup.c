#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f89400(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_MapSetup_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapSetup_Destructor_alt1(_QWORD* a1) __asm__("MapSetup_Destructor");
float game_hub_MapSetup_Setup_Hub100_A1_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       float* a3);
float game_hub_MapSetup_Setup_Hub100_A1_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       float* a3);
_QWORD* GameRoutine_d6c640(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void RouteNavMesh_fe7000(PSEUDO_X8, __int64 result,
                                                    __int128*, float, float);
__int64* GameRoutine_c22420(_QWORD*, unsigned __int8*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN GameData_21f4d48;
extern __int64* GameData_212d458[7];
extern __int64 GameData_212c638;
extern __int64 GameData_220f8b0;
extern __int64 fw_memory_g_heap_manager;
extern int GameData_21f4d44;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_cdcc10();
void __attribute__((noreturn)) GameRoutine_d5bb10();
void MapSetup_f88dc0_alt1(_QWORD* a1,
                          unsigned __int8** a2) __asm__("MapSetup_f88dc0");
void game_hub_MapSetup_Setup_Dng020_A2_KAI_c06_lambda0_Invoke_alt1(
    __int64 a1, __n128* a2,
    __int64
        a3) __asm__("game_hub_MapSetup_Setup_Dng020_A2_KAI_c06_lambda0_Invoke");
__attribute__((swiftcall)) void
RouteNavMesh_fe7000_alt1(PSEUDO_X8, _QWORD*, __int128*, float,
                         float) __asm__("RouteNavMesh_fe7000");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_f89400(__int64, __int64);
void GameRoutine_d6c640_alt1(__int64*, _QWORD*) __asm__("GameRoutine_d6c640");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapSetup_Destructor(_QWORD* a1);
void MapSetup_f88dc0(__int64* a1, unsigned __int8** a2);
void game_hub_MapSetup_Setup_Dng020_A2_KAI_c06_lambda0_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              __int64* a3);

void MapSetup_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[8];
  *a1 = game_hub_MapSetup_vtable;
  if (v1 != 0) {
    v3 = a1[9];
    if (v1 == v3) {
      goto LABEL_8;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v4);
      }
      v3 -= 16;
    } while (v3 != v1);
    v5 = a1[8];
    a1[9] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v7 = a1[5];
  if (v7 != 0) {
    v8 = a1[6];
    if (v7 == v8) {
      goto LABEL_18;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = a1[5];
    a1[6] = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_18:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
  GameHr_f89400((__int64)(a1 + 2), a1[3]);
}

void MapSetup_f88dc0(__int64* a1, unsigned __int8** a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  __int64 v13;
  const char* v14;
  unsigned __int64 v15;
  bool v16;
  signed __int64 v17;
  unsigned __int8* v18;
  signed __int64 v19;
  int v20;
  signed __int64 v21;
  __int64 v22;
  __int64 v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float v40;
  float v41;
  float32x4_t v42;
  int8x16_t v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  float32x4_t* v62;
  _QWORD* v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float v68;
  float v69;
  float32x4_t v70;
  int8x16_t v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int8** v75;
  _QWORD* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  const char* v81;
  _QWORD* v82;
  signed __int64 v83;
  struct {
    __int64 v84;
    __int64 v85;
    __int64 v86;
  } v84_;
  float32x4_t v87;

  v3 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  v4 = *(_QWORD*)(v3 + 96);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 24);
    v6 = *(_QWORD*)(v4 + 32);
    if (v6 == 0) {
      goto LABEL_14;
    }
  LABEL_11:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
    goto LABEL_14;
  }
  LOWORD(v84_.v84) = 0;
  v7 = GameRoutine_c22420((_QWORD*)(v3 + 104), (unsigned __int8*)&v84_.v84);
  if ((v84_.v84 & 1) != 0 && v84_.v86 != 0) {
    v8 = v7;
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v84_.v86);
    v7 = v8;
  }
  if (v7 == nullptr) {
    v5 = 0;
    goto LABEL_14;
  }
  v10 = v7[5];
  v5 = *(_QWORD*)(v10 + 24);
  v6 = *(_QWORD*)(v10 + 32);
  if (v6 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v82 = *(_QWORD**)(v5 + 88);
  v76 = *(_QWORD**)(v5 + 96);
  if (v82 != v76) {
    v11 = a2[1];
    if (v11 != nullptr) {
      v75 = a2;
      while (1) {
        v81 = (const char*)(*v82 + 16LL);
        v83 = strlen_alt1(v81);
        if (v11 != nullptr) {
          break;
        }
      LABEL_91:
        if (++v82 == v76) {
          return;
        }
        v11 = a2[1];
      }
      v12 = *a2;
      v13 = (__int64)&(*a2)[24 * (_QWORD)v11];
      v14 = &v81[v83];
      while (1) {
        v15 = *v12;
        v16 = (v15 & 1) == 0;
        v17 = v15 >> 1;
        if (v16) {
          v18 = v12 + 1;
        }
        else {
          v18 = *((unsigned __int8**)v12 + 2);
        }
        if (v16) {
          v19 = v17;
        }
        else {
          v19 = *((_QWORD*)v12 + 1);
        }
        if (v19 != 0) {
          if (v83 < v19) {
            goto LABEL_20;
          }
          v20 = *v18;
          v21 = v83;
          v22 = (__int64)v81;
          while (1) {
            v23 = memchr_alt1(v22, v20, v21 - v19 + 1);
            if (v23 == 0) {
              goto LABEL_20;
            }
            v24 = (const char*)v23;
            if (memcmp_alt1(v23, (__int64)v18, v19) == 0) {
              break;
            }
            v22 = (__int64)(v24 + 1);
            v21 = v14 - (v24 + 1);
            if (v21 < v19) {
              goto LABEL_20;
            }
          }
          if (v24 == v14 || v24 != v81) {
            goto LABEL_20;
          }
        }
        v25 = *v82;
        if (*v82 == 0) {
          goto LABEL_20;
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21f4d48) != 0) {
          GameData_21f4d44 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release_alt1((__int64)&GameData_21f4d48);
        }
        v26 = *(_QWORD*)(v25 + 512);
        v27 = v26;
        do {
          if (v27 == *(_QWORD*)(v25 + 504)) {
            goto LABEL_20;
          }
          v28 = *(_DWORD*)(v27 - 16);
          v27 -= 16;
          v26 -= 16;
        } while (v28 != GameData_21f4d44);
        if (*(_QWORD*)(v25 + 512) == v26) {
          goto LABEL_20;
        }
        v29 = *(_QWORD*)(v26 + 8);
        if (v29 == 0) {
          goto LABEL_20;
        }
        v30 = *(_QWORD*)(v29 + 32);
        if (v30 != 0) {
          v32 = *(_QWORD*)(v30 + 80);
          v31 = *(_QWORD*)(v30 + 88);
          if ((int)((unsigned __int64)(v31 - v32) >> 5) >= 1 &&
              *(_QWORD*)(GameData_220f8b0 + 8) != 0) {
            v33 = 0;
            v34 = 0;
            v78 = v13;
            while (2) {
              v35 = *(_QWORD**)(GameData_220f8b0 + 8);
              if (v35 == nullptr) {
                goto LABEL_49;
              }
              v36 = *(float32x4_t*)(v32 + v33);
              v37 = *(float32x4_t*)(v32 + v33 + 16);
              v38 = vsubq_f32(v37, v36);
              v39 = vaddq_f32(v36, v37);
              LANES128(v37).n128_u64[0] = 0x3F0000003F000000LL;
              LANES128(v37).n128_u64[1] = 0x3F0000003F000000LL;
              v40 = LANES128(v38).n128_f32[1];
              v41 = vmuls_lane_f32(
                  -0x1.0000000000000p-1f,
                  COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]), 1);
              LANES128(v38).n128_u32[1] = 0;
              v42 = vmulq_f32(v39, v37);
              v43 = vmulq_f32(v38, v38);
              LANES128(v43).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
                      .n64_u64[0];
              PSEUDO_LOW_LANE128(
                  v39, n128_f32,
                  0x1.0000000000000p-1f *
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v43).n128_u64[0]))))
                          .n64_f32[0]);
              LANES128(v43).n128_u32[0] = 0;
              LANES128(v43).n128_f32[1] = v41;
              v87 = vaddq_f32(
                  v42, COERCE_AS(float32x4_t, LANES128(v43).n128_u64[0]));
              RouteNavMesh_fe7000_alt1((void*)(&v84_.v84), v35, (__int128*)&v87,
                                       LANES128(v39).n128_f32[0], v40);
              v44 = v84_.v85;
              if (v84_.v85 != 0) {
                v45 = std___1___shared_weak_count_lock_alt1(v84_.v85);
                if (v45 == 0) {
                  goto LABEL_47;
                }
                v46 = v84_.v84;
                if (v84_.v84 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16),
                                            1u, memory_order_relaxed);
                  v47 = a1;
                  v49 = (__int64*)a1[9];
                  v48 = a1[10];
                  if ((unsigned __int64)v49 >= v48) {
                    v51 = a1[8];
                    v52 = (unsigned __int64)v49 - v51;
                    v53 = ((__int64)v49 - v51) >> 4;
                    v54 = v53 + 1;
                    if ((unsigned __int64)(v53 + 1) >> 60 != 0) {
                      GameRoutine_d5bb10();
                    }
                    v55 = v48 - v51;
                    v79 = v45;
                    if (v55 >> 3 > v54) {
                      v54 = v55 >> 3;
                    }
                    if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v56 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v56 = v54;
                    }
                    if (v56 != 0) {
                      if (v56 >> 60 != 0) {
                        GameRoutine_60a210();
                      }
                      v57 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v56, 16,
                          0);
                      v45 = v79;
                    }
                    else {
                      v57 = 0;
                    }
                    v58 = (__int64*)(v57 + v52);
                    *v58 = v46;
                    v58[1] = v45;
                    v59 = v57 + v52 - 16 * v53;
                    v77 = v57 + 16 * v56;
                    v50 = v57 + v52 + 16;
                    memcpy_alt1(v59, v51, v52);
                    v47 = a1;
                    a1[8] = v59;
                    a1[9] = v50;
                    a1[10] = v77;
                    if (v51 != 0) {
                      v60 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v60 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v51);
                      v47 = a1;
                    }
                    v45 = v79;
                    a2 = v75;
                  }
                  else {
                    *v49 = v46;
                    v49[1] = v45;
                    v50 = (__int64)(v49 + 2);
                  }
                  v47[9] = v50;
                  v13 = v78;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
                  v44 = v84_.v85;
                  if (v84_.v85 == 0) {
                    goto LABEL_48;
                  }
                LABEL_47:
                  std___1___shared_weak_count___release_weak_alt2(v44);
                  goto LABEL_48;
                }
                v61 = v45;
                (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                std___1___shared_weak_count___release_weak_alt2(v61);
                v44 = v84_.v85;
                if (v84_.v85 != 0) {
                  goto LABEL_47;
                }
              }
            LABEL_48:
              v32 = *(_QWORD*)(v30 + 80);
              v31 = *(_QWORD*)(v30 + 88);
            LABEL_49:
              ++v34;
              v33 += 32;
              if (v34 >= (int)((unsigned __int64)(v31 - v32) >> 5)) {
                break;
              }
              continue;
            }
          }
        }
        else {
          v62 = *(float32x4_t**)(v29 + 24);
          if (v62 == nullptr) {
            goto LABEL_20;
          }
          v63 = *(_QWORD**)(GameData_220f8b0 + 8);
          if (v63 == nullptr) {
            goto LABEL_20;
          }
          v64 = v62[3];
          v65 = v62[4];
          v66 = vsubq_f32(v65, v64);
          v67 = vaddq_f32(v64, v65);
          LANES128(v65).n128_u64[0] = 0x3F0000003F000000LL;
          LANES128(v65).n128_u64[1] = 0x3F0000003F000000LL;
          v68 = LANES128(v66).n128_f32[1];
          v69 = vmuls_lane_f32(
              -0x1.0000000000000p-1f,
              COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1);
          LANES128(v66).n128_u32[1] = 0;
          v70 = vmulq_f32(v67, v65);
          v71 = vmulq_f32(v66, v66);
          LANES128(v71).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
                  .n64_u64[0];
          PSEUDO_LOW_LANE128(
              v67, n128_f32,
              0x1.0000000000000p-1f *
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]))))
                      .n64_f32[0]);
          LANES128(v71).n128_u32[0] = 0;
          LANES128(v71).n128_f32[1] = v69;
          v87 =
              vaddq_f32(v70, COERCE_AS(float32x4_t, LANES128(v71).n128_u64[0]));
          RouteNavMesh_fe7000_alt1((void*)(&v84_.v84), v63, (__int128*)&v87,
                                   LANES128(v67).n128_f32[0], v68);
          v72 = v84_.v85;
          if (v84_.v85 == 0) {
            goto LABEL_20;
          }
          v73 = std___1___shared_weak_count_lock_alt1(v84_.v85);
          if (v73 != 0) {
            v74 = v73;
            if (v84_.v84 != 0) {
              LANES128(v87).n128_u64[0] = v84_.v84;
              LANES128(v87).n128_u64[1] = v73;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v73 + 16), 1u,
                                        memory_order_relaxed);
              GameRoutine_d6c640_alt1(a1 + 8, &v87);
              if (LANES128(v87).n128_u64[1] != 0) {
                std___1___shared_weak_count___release_weak_alt2(
                    LANES128(v87).n128_i64[1]);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              v72 = v84_.v85;
              if (v84_.v85 == 0) {
                goto LABEL_20;
              }
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
              std___1___shared_weak_count___release_weak_alt2(v74);
              v72 = v84_.v85;
              if (v84_.v85 == 0) {
                goto LABEL_20;
              }
            }
          }
          std___1___shared_weak_count___release_weak_alt2(v72);
        }
      LABEL_20:
        v12 += 24;
        if (v12 == (unsigned __int8*)v13) {
          goto LABEL_91;
        }
      }
    }
  }
}

float game_hub_MapSetup_Setup_Hub100_A1_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       float* a3)
{
  return *(float*)(a1 + 8) + (float)(fminf(fmaxf(*a3, 0.0), 1.0) *
                                     (float)(1.0 - *(float*)(a1 + 8)));
}

float game_hub_MapSetup_Setup_Hub100_A1_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       float* a3)
{
  float result;
  __int64 v4;

  result = 0.0;
  v4 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
  if (*(_BYTE*)(v4 + 289) == 1 && (*(_BYTE*)(v4 + 288) & 1) != 0) {
    while ((*(_BYTE*)(v4 + 300) & 0xFD) != 1) {
      v4 = *(_QWORD*)(v4 + 736);
      if (v4 == 0) {
        return (float)(1.0 - *a3) *
               (float)(1.0 - *(float*)(*(_QWORD*)a2 + 68LL));
      }
      if (*(_BYTE*)(v4 + 289) != 1 || *(_BYTE*)(v4 + 288) != 1) {
        return result;
      }
    }
  }
  return result;
}

void game_hub_MapSetup_Setup_Dng020_A2_KAI_c06_lambda0_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              __int64* a3)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  _DWORD* v11;
  __int128 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;

  v4 = GameData_212d458[0];
  v5 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v5 != 0) {
    v6 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v8 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock_alt1(v8);
    std___1___shared_weak_count___release_weak_alt2(v5);
    if (v9 == 0 || v6 == 0) {
      if (v9 == 0) {
        goto LABEL_10;
      }
    }
    else {
      v11 = *(_DWORD**)(*(_QWORD*)(v6 + 24) + 16LL);
      *a2 = v11[140];
      a2[1] = v11[141];
      v12 = *(_OWORD*)a2;
      *((_QWORD*)&v12 + 1) = (unsigned int)v11[142];
      *(_OWORD*)a2 = v12;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt2(v9);
    }
  }
LABEL_10:
  v13 = (__int64*)*a3;
  v14 = *v4;
  a3[1] = *a3;
  v15 = *(_QWORD*)(v14 + 24);
  for (i = *(_QWORD*)(v14 + 32); v15 != i; v15 += 16) {
    if (*(_DWORD*)(*(_QWORD*)v15 + 1112LL) == 1) {
      v17 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v15 + 24LL) + 16LL) +
                       560LL);
      v18 = a3[2];
      if ((unsigned __int64)v13 < v18) {
        v13[1] =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v15 + 24LL) + 16LL) +
                       568LL);
        *v13 = *v17;
        v13 += 2;
      }
      else {
        v19 = *a3;
        v20 = (__int64)v13 - *a3;
        v21 = (v20 >> 4) + 1;
        if (v21 >> 60 != 0) {
          GameRoutine_cdcc10();
        }
        v22 = v18 - v19;
        if (v22 >> 3 > v21) {
          v21 = v22 >> 3;
        }
        if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF0LL) {
          v23 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v23 = v21;
        }
        if (v23 >> 60 != 0) {
          GameRoutine_60a210();
        }
        v24 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 16 * v23,
                                             16, 0);
        v25 = v17[1];
        v26 = (__int64*)(v24 + v20);
        *v26 = *v17;
        v26[1] = v25;
        if ((__int64*)v19 != v13) {
          v27 = (__int64*)v19;
          v28 = (_QWORD*)(v24 + v20 - 16 * (v20 >> 4));
          do {
            v28[1] = v27[1];
            v29 = *v27;
            v27 += 2;
            *v28 = v29;
            v28 += 2;
          } while (v27 != v13);
        }
        v13 = v26 + 2;
        *a3 = v24 + v20 - 16 * (v20 >> 4);
        a3[1] = (__int64)(v26 + 2);
        a3[2] = v24 + 16 * v23;
        if (v19 != 0) {
          v30 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v30,
                                             v19);
        }
      }
      a3[1] = (__int64)v13;
    }
  }
}

#pragma GCC visibility pop
