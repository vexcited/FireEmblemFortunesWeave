#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
game_cutscene_17ffa60_alt1(__attribute__((swift_indirect_result)) void*,
                           __int64,
                           unsigned __int64) __asm__("game_cutscene_17ffa60");
__int64 Config_bc72a0(_QWORD);
__int64 GameRoutine_17fab10(_QWORD, long double);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a84710(_QWORD);
__int64 GameRoutine_a86500(_QWORD);
__int64 GameRoutine_a867a0(_QWORD, long double);
__int64 GameRoutine_ce5aa0(_QWORD);
__int64 GameRoutine_ce68a0(void);
__int64 GameRoutine_f8e6c0(_QWORD);
__int64 Manager_18cf680(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_809ba0(_QWORD, float);
__int64 game_809dc0(_QWORD, _QWORD, float);
__int64 game_GameView_Update(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_oe_SetCpuBoostMode(_QWORD);
__int64 nn_os_ClearEvent(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _DWORD GameData_21d925c[32];
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_21a55c0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_21c6978;
extern __int64 GameData_2265ea0;
extern __int64 as_g_base_frame_counter;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 snd_g_fileIndex;
extern char GameData_21c9699;
extern int GameData_21d92dc;
extern int GameData_21d92e0;
unsigned __int64 GameRoutine_1811fa0(__int64, float, float);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
float32x4_t* game_cutscene_17fd220(float32x4_t** a1, float32x4_t* a2);
__attribute__((swiftcall)) void game_cutscene_17fd5a0(PSEUDO_X8 x8_,
                                                      _DWORD* a1);
__int64 game_cutscene_17fe320(__int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void game_cutscene_17ffa60(PSEUDO_X8 x8_, __int64 a1,
                                                      unsigned __int64 a2);
__int64 game_cutscene_17ffbf0(__int64 a1, unsigned __int64 a2);
__n128 game_cutscene_17ffe50(__int64* a1);
__attribute__((swiftcall)) void game_cutscene_1800180(PSEUDO_X8 x8_,
                                                      unsigned __int8* a1);
__attribute__((swiftcall)) void game_cutscene_18002e0(PSEUDO_X8 x8_,
                                                      unsigned __int8* a1);
__int64 game_cutscene_181a060(__int64 a1, __n128 a2);
void game_cutscene_181aa10(__int64 a1, char a2);

float32x4_t* game_cutscene_17fd220(float32x4_t** a1, float32x4_t* a2)
{
  float32x4_t* result;
  float v4;
  float v6;
  float32x4_t* v7;
  float32x4_t v8;
  int16x4_t v9;
  float32x4_t v10;
  float32x4_t* v11;
  float v12;
  float32x4_t* v13;
  float v14;
  float32x4_t* v15;

  result = *a1;
  if (result != nullptr) {
    v4 = 1.0f;
    if (LANES128(*(a2)).n128_f32[0] <= 1.0f) {
      v4 = LANES128(*(a2)).n128_f32[0];
    }
    v6 = 0.0f;
    if (LANES128(*(a2)).n128_f32[0] >= 0.0f) {
      v6 = v4;
    }
    if (LANES128(result[1]).n128_f32[2] != v6) {
      LANES128(result[1]).n128_f32[2] = v6;
      ((void (*)(void))GameRoutine_f8e6c0)();
      result = *a1;
    }
    if (LANES128(*(a2)).n128_u8[4] != 1) {
      if (LANES128(result[1]).n128_u8[12] == 0) {
        return result;
      }
      LANES128(result[1]).n128_u8[12] = 0;
      return (float32x4_t*)GameRoutine_f8e6c0(result);
    }
    if ((LANES128(result[1]).n128_u8[12] & 1) == 0) {
      v7 = result;
      LANES128(result[1]).n128_u8[12] = 1;
      ((void (*)(void))GameRoutine_f8e6c0)();
      result = v7;
    }
    v8 = a2[1];
    LANES64(v9).n64_u64[0] =
        LANES64_OF(vmovn_s32(vceqq_f32(result[2], v8))).n64_u64[0];
    if ((LANES64(v9).n64_u8[0] & 1) == 0 || (LANES64(v9).n64_u8[2] & 1) == 0 ||
        (LANES64(v9).n64_u8[4] & 1) == 0) {
      LANES128(result[2]).n128_u32[0] = LANES128(v8).n128_u32[0];
      LANES128(result[2]).n128_u32[1] = LANES128(a2[1]).n128_u32[1];
      v10 = result[2];
      LANES128(v10).n128_u64[1] = LANES128(a2[1]).n128_u32[2];
      result[2] = v10;
      ((void (*)(void))GameRoutine_f8e6c0)();
    }
    v11 = *a1;
    v12 = LANES128(a2[2]).n128_f32[0];
    if ((LANES128((*a1)[1]).n128_u8[12] & 1) == 0) {
      v13 = *a1;
      LANES128(v11[1]).n128_u8[12] = 1;
      GameRoutine_f8e6c0(v13);
    }
    if (LANES128(v11[3]).n128_f32[0] != v12) {
      LANES128(v11[3]).n128_f32[0] = v12;
      GameRoutine_f8e6c0(v11);
    }
    result = *a1;
    v14 = LANES128(a2[2]).n128_f32[1];
    if ((LANES128((*a1)[1]).n128_u8[12] & 1) == 0) {
      v15 = *a1;
      LANES128(result[1]).n128_u8[12] = 1;
      GameRoutine_f8e6c0(result);
      result = v15;
    }
    if (LANES128(result[3]).n128_f32[1] != v14) {
      LANES128(result[3]).n128_f32[1] = v14;
      return (float32x4_t*)GameRoutine_f8e6c0(result);
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_cutscene_17fd5a0(PSEUDO_X8 x8_, _DWORD* a1)
{
  long double* a2 = (long double*)PSEUDO_X8_VALUE(x8_);
  int v2;
  __int128* v4;
  long double result;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double* v11;

  v2 = a1[2];
  if (*(_QWORD*)a1 == 0 || v2 == -1) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                              memory_order_acquire) &
         1) != 0) {
      v4 = &GameData_21a5580;
    }
    else {
      v11 = a2;
      v6 = __cxa_guard_acquire(&GameData_21a55c0);
      v4 = &GameData_21a5580;
      if (v6 != 0) {
        v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
        *(_QWORD*)&GameData_21a55a0 =
            *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
        *((_QWORD*)&GameData_21a55a0 + 1) = v7;
        v8 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                         (_QWORD)GameData_212c2a0);
        *(_QWORD*)&GameData_21a55b0 =
            *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                        (_QWORD)GameData_212c2a0);
        *((_QWORD*)&GameData_21a55b0 + 1) = v8;
        v9 = *((_QWORD*)GameData_212c2a0 + 1);
        *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
        *((_QWORD*)&GameData_21a5580 + 1) = v9;
        v10 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 +
                         8);
        *(_QWORD*)&GameData_21a5590 =
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
        *((_QWORD*)&GameData_21a5590 + 1) = v10;
        __cxa_guard_release(&GameData_21a55c0);
        a2 = v11;
        v4 = &GameData_21a5580;
      }
      else {
        a2 = v11;
      }
    }
  }
  else {
    v4 = (__int128*)(*(_QWORD*)(*(_QWORD*)a1 + 32LL) + ((__int64)v2 << 6));
  }
  result = *((long double*)v4 + 3);
  *a2 = result;
  {
    result;
    return;
  }
}

__int64 game_cutscene_17fe320(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float32x4_t* v39;
  float32x4_t v40;
  int8x16_t v41;
  float32x4_t v42;
  float32x4_t v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;

  result = a2[2];
  if (result != 0) {
    v5 = std___1___shared_weak_count_lock(result);
    if (v5 != 0) {
      v6 = a2[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v7);
      }
      if (v6 != 0) {
        v8 = a2[3];
        v9 = *(_QWORD*)(a1 + 40);
        *(_QWORD*)(v8 + 48) = *(_QWORD*)(a1 + 32);
        *(_QWORD*)(v8 + 56) = v9;
      }
    }
    v10 = a2[2];
    if (v10 != 0) {
      v11 = *(float*)(a1 + 48);
      v12 = *(float*)(a1 + 88);
      v13 = std___1___shared_weak_count_lock(v10);
      if (v13 != 0) {
        v14 = a2[1];
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v15 = v13;
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v15);
        }
        if (v14 != 0) {
          *(float*)(a2[3] + 64LL) = v11 * v12;
        }
      }
    }
    result = a2[2];
    if (result != 0) {
      v16 = *(_DWORD*)(a1 + 56);
      v17 = std___1___shared_weak_count_lock(result);
      if (v17 != 0) {
        v18 = a2[1];
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v19 = v17;
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v19);
        }
        if (v18 != 0) {
          *(_DWORD*)(a2[3] + 72LL) = v16;
        }
      }
      result = a2[2];
      if (result != 0) {
        v20 = *(_BYTE*)(a1 + 61);
        v21 = std___1___shared_weak_count_lock(result);
        if (v21 != 0) {
          v22 = a2[1];
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v23 = v21;
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            std___1___shared_weak_count___release_weak(v23);
          }
          if (v22 != 0) {
            *(_BYTE*)(a2[3] + 92LL) = v20;
          }
        }
        v24 = a2[2];
        if (v24 != 0) {
          v25 = *(unsigned __int8*)(a1 + 60);
          v26 = std___1___shared_weak_count_lock(v24);
          if (v26 != 0) {
            v27 = a2[1];
            if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v28 = v26;
              (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
              std___1___shared_weak_count___release_weak(v28);
            }
            if (v27 != 0) {
              *(_DWORD*)(a2[3] + 96LL) = 2 * v25;
            }
          }
        }
        result = a2[2];
        if (result != 0) {
          v29 = std___1___shared_weak_count_lock(result);
          if (v29 != 0) {
            v30 = a2[1];
            if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v31 = v29;
              (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
              std___1___shared_weak_count___release_weak(v31);
            }
            if (v30 != 0) {
              v32 = a2[4];
              v33 = *(_QWORD*)(a1 + 8);
              *(_QWORD*)(v32 + 16) = *(_QWORD*)a1;
              *(_QWORD*)(v32 + 24) = v33;
            }
          }
          result = a2[2];
          if (result != 0) {
            v34 = std___1___shared_weak_count_lock(result);
            if (v34 != 0) {
              v35 = a2[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v36 = v34;
                (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
                std___1___shared_weak_count___release_weak(v36);
              }
              if (v35 != 0) {
                v37 = a2[4];
                v38 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)(v37 + 256) = *(_QWORD*)(a1 + 16);
                *(_QWORD*)(v37 + 264) = v38;
                v39 = (float32x4_t*)a2[4];
                v40 = v39[16];
                v41 = vmulq_f32(v40, v40);
                LANES128(v41).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v41, v41, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v41).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v41).n128_u64[1] = LANES128(v41).n128_u64[0];
                v42 = vrsqrteq_f32(v41);
                v43 = vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(v41, v42)));
                v39[16] = vbicq_s8(
                    vmulq_f32(
                        v40,
                        vmulq_f32(v43, vrsqrtsq_f32(v43, vmulq_f32(v41, v43)))),
                    vceqzq_f32(v41));
              }
            }
            result = a2[2];
            if (result != 0) {
              v44 = *(_DWORD*)(a1 + 52);
              v45 = std___1___shared_weak_count_lock(result);
              if (v45 != 0) {
                v46 = a2[1];
                if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v47 = v45;
                  (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                  std___1___shared_weak_count___release_weak(v47);
                }
                if (v46 != 0) {
                  *(_DWORD*)(a2[4] + 32LL) = v44;
                }
              }
              result = a2[2];
              if (result != 0) {
                v48 = *(_DWORD*)(a1 + 64);
                v49 = std___1___shared_weak_count_lock(result);
                if (v49 != 0) {
                  v50 = a2[1];
                  if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v51 = v49;
                    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                    std___1___shared_weak_count___release_weak(v51);
                  }
                  if (v50 != 0) {
                    *(_DWORD*)(a2[4] + 272LL) = v48;
                  }
                }
                result = a2[2];
                if (result != 0) {
                  v52 = *(_DWORD*)(a1 + 68);
                  v53 = std___1___shared_weak_count_lock(result);
                  if (v53 != 0) {
                    v54 = a2[1];
                    if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v55 = v53;
                      (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
                      std___1___shared_weak_count___release_weak(v55);
                    }
                    if (v54 != 0) {
                      *(_DWORD*)(a2[4] + 276LL) = v52;
                    }
                  }
                  result = a2[2];
                  if (result != 0) {
                    result = std___1___shared_weak_count_lock(result);
                    if (result != 0) {
                      v56 = a2[1];
                      if (atomic_fetch_add(
                              (atomic_ullong* volatile)(result + 8),
                              0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v57 = result;
                        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(
                            result);
                        result =
                            std___1___shared_weak_count___release_weak(v57);
                      }
                      if (v56 != 0) {
                        *(_DWORD*)(a2[4] + 280LL) = *(_DWORD*)(a1 + 72);
                        *(_DWORD*)(a2[4] + 284LL) = *(_DWORD*)(a1 + 76);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_cutscene_17ffa60(PSEUDO_X8 x8_, __int64 a1,
                                                      unsigned __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64* result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  char* v18;
  _QWORD v19[2];
  __int64 v20;

  if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  if (a2 >= 0x17) {
    if ((a2 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (a2 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v17[1] = a2;
    v18 = v6;
    v17[0] = v7 | 1;
  }
  else {
    LOBYTE(v17[0]) = 2 * a2;
    v6 = (char*)v17 + 1;
    if (a2 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v6, a1, a2);
LABEL_10:
  v6[a2] = 0;
  v8 = (_QWORD*)GameRoutine_1a0a680(v17, 0, "Contents:/Movie/CutScene/", 25);
  v10 = v8[1];
  v9 = v8[2];
  v19[0] = *v8;
  v19[1] = v10;
  v20 = v9;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = 0;
  result = (__int64*)GameRoutine_1a09ce0(v19, "_tl.bin", 7);
  v12 = *result;
  v13 = result[1];
  *result = 0;
  result[1] = 0;
  *a3 = v12;
  a3[1] = v13;
  v14 = result[2];
  result[2] = 0;
  a3[2] = v14;
  if ((v19[0] & 1) != 0 && v20 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  if ((v17[0] & 1) != 0 && v18 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    {
      (__int64*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_cutscene_17ffbf0(__int64 a1, unsigned __int64 a2)
{
  int v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[2];
  char* v10;

  game_cutscene_17ffa60_alt1((void*)(v9), a1, a2);
  v2 = v9[0] & 1;
  v3 = (unsigned __int64)LOBYTE(v9[0]) >> 1;
  if (v2 != 0) {
    v3 = v9[1];
  }
  if (v3 == 0) {
    LOBYTE(v4) = 0;
    if (v2 == 0) {
      return (unsigned __int8)v4 & 1;
    }
    goto LABEL_12;
  }
  if (v2 != 0) {
    v4 = v10;
  }
  else {
    v4 = (char*)v9 + 1;
  }
  if (v4 != nullptr) {
    v5 = *snd_g_fileIndex_ptr[0];
    v6 = strlen(v4);
    LOBYTE(v4) = GameRoutine_6360e0(v5, v4, v6, 0, 0);
    v2 = v9[0] & 1;
  }
  if (v2 != 0) {
  LABEL_12:
    if (v10 != nullptr) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
    }
  }
  return (unsigned __int8)v4 & 1;
}

__n128 game_cutscene_17ffe50(__int64* a1)
{
  __int64 v1;
  __n128 result;

  v1 = *a1;
  if ((unsigned __int64)((a1[1] - *a1) >> 2) < 3) {
    return *(__n128*)GameData_212c540;
  }
  else {
    LANES128(result).n128_u64[0] = *(_QWORD*)v1;
    LANES128(result).n128_u64[1] = *(unsigned int*)(v1 + 8);
  }
  return result;
}

__attribute__((swiftcall)) void game_cutscene_1800180(PSEUDO_X8 x8_,
                                                      unsigned __int8* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64* result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;

  v3 = *a1;
  v4 = (v3 & 1) == 0;
  v5 = v3 >> 1;
  if (v4) {
    v6 = v5;
  }
  else {
    v6 = *((_QWORD*)a1 + 1);
  }
  if (v4) {
    v7 = a1 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a1 + 2);
  }
  v8 = v6 + 16;
  if (v6 + 16 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  if (v8 > 0x16) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    v20 = v6 + 16;
    v21 = v10;
    v19 = v11 | 1;
    v9 = v11 | 1;
  }
  else {
    v9 = 2 * v8;
    v10 = 0;
    v20 = 0;
    v21 = 0;
    v19 = (unsigned __int8)(2 * v8);
  }
  if ((v9 & 1) != 0) {
    v12 = (char*)v10;
  }
  else {
    v12 = (char*)&v19 + 1;
  }
  qmemcpy(v12, "Contents:/Movie/", 16);
  if ((v9 & 1) != 0) {
    v13 = (char*)(v10 + 16);
  }
  else {
    v13 = (char*)&v21 + 1;
  }
  if (v6 != 0) {
    memmove(v13, v7, v6);
  }
  v13[v6] = 0;
  result = (__int64*)GameRoutine_1a09ce0(&v19, ".webm", 5);
  v15 = *result;
  v16 = result[1];
  *result = 0;
  result[1] = 0;
  *a2 = v15;
  a2[1] = v16;
  v17 = result[2];
  result[2] = 0;
  a2[2] = v17;
  if ((v19 & 1) != 0 && v21 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    {
      (__int64*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_cutscene_18002e0(PSEUDO_X8 x8_,
                                                      unsigned __int8* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64* result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;

  v3 = *a1;
  v4 = (v3 & 1) == 0;
  v5 = v3 >> 1;
  if (v4) {
    v6 = v5;
  }
  else {
    v6 = *((_QWORD*)a1 + 1);
  }
  if (v4) {
    v7 = a1 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a1 + 2);
  }
  v8 = v6 + 16;
  if (v6 + 16 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  if (v8 > 0x16) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    v20 = v6 + 16;
    v21 = v10;
    v19 = v11 | 1;
    v9 = v11 | 1;
  }
  else {
    v9 = 2 * v8;
    v10 = 0;
    v20 = 0;
    v21 = 0;
    v19 = (unsigned __int8)(2 * v8);
  }
  if ((v9 & 1) != 0) {
    v12 = (char*)v10;
  }
  else {
    v12 = (char*)&v19 + 1;
  }
  qmemcpy(v12, "Contents:/Movie/", 16);
  if ((v9 & 1) != 0) {
    v13 = (char*)(v10 + 16);
  }
  else {
    v13 = (char*)&v21 + 1;
  }
  if (v6 != 0) {
    memmove(v13, v7, v6);
  }
  v13[v6] = 0;
  result = (__int64*)GameRoutine_1a09ce0(&v19, "F.webm", 6);
  v15 = *result;
  v16 = result[1];
  *result = 0;
  result[1] = 0;
  *a2 = v15;
  a2[1] = v16;
  v17 = result[2];
  result[2] = 0;
  a2[2] = v17;
  if ((v19 & 1) != 0 && v21 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    {
      (__int64*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_cutscene_181a060(__int64 a1, __n128 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  _QWORD v24[3];
  char v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v2 = *(_QWORD*)(a1 + 72);
  v3 = a1;
  if (*(_BYTE*)v2 == 1) {
    v4 = *(_DWORD*)(v2 + 4);
    *(_BYTE*)v2 = 0;
    if (v4 != -1) {
      a1 = Config_bc72a0(eft_g_effectSystem);
    }
    if (*(_DWORD*)(v2 + 8) != -1) {
      a1 = Config_bc72a0(eft_g_effectSystem);
    }
  }
  v5 = *(_QWORD*)(v3 + 64);
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    a1 = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(v3 + 72);
  *(_QWORD*)(v3 + 72) = 0;
  if (v6 != 0) {
    if (*(_BYTE*)v6 == 1) {
      *(_BYTE*)v6 = 0;
      v7 = eft_g_effectSystem_ptr[0];
      if (*(_DWORD*)(v6 + 4) != -1) {
        Config_bc72a0(*eft_g_effectSystem_ptr[0]);
      }
      if (*(_DWORD*)(v6 + 8) != -1) {
        Config_bc72a0(*v7);
      }
    }
    v8 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v8 = 56;
    }
    a1 = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
  }
  v9 = *(_QWORD*)(v3 + 48);
  *(_QWORD*)(v3 + 48) = 0;
  if (v9 != 0) {
    GameRoutine_ce5aa0(v9);
    v10 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v10 = 56;
    }
    a1 = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10);
  }
  if (*(_BYTE*)(v3 + 42) == 1 && game_ProcFadeView_instance_ != 0) {
    v11 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v11 + 172) == *(float*)(v11 + 168)) {
      a1 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(
          v11 + 160);
    }
    else {
      a2 = *(__n128*)(v11 + 208);
    }
    LANES128(a2).n128_u32[0] = LANES128(a2).n128_u32[3];
    if (LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0) {
      a2 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160,
                                                     LANES128(a2).n128_f32[3]);
      LANES128(a2).n128_u32[0] = LANES128(a2).n128_u32[3];
      if (LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0) {
        a1 = game_ProcFadeView_instance_;
        if (game_ProcFadeView_instance_ != 0) {
          a1 = game_809ba0(game_ProcFadeView_instance_, 2.0);
        }
      }
    }
  }
  if (*(_QWORD*)(v3 + 80) != 0) {
    v26 = 0;
    memset(v24, 0, sizeof(v24));
    v25 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v33 = 1;
    GameRoutine_a867a0(v3 + 80, *(long double*)&a2);
    a1 = GameRoutine_a86500(v24);
    *(_QWORD*)(v3 + 80) = 0;
  }
  *(_DWORD*)(as_g_base_frame_counter + 100) = 1065353216;
  GameRoutine_17fab10(a1, *(long double*)&a2);
  v12 = Manager_18cf680(GameData_2265ea0);
  v13 = --GameData_21d92dc;
  GameData_21d92e0 = GameData_21d925c[v13];
  game_GameView_Update(v12);
  GameRoutine_a84710(GameData_21c6978);
  if (GameData_21c9699 == 1) {
    nn_oe_SetCpuBoostMode(0);
    v14 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
      nn_os_ClearEvent(v14 + 4144);
    }
    v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL);
    GameData_21c9699 = 0;
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 40) + 16LL) + 48LL) = 1;
  }
  v16 = *(_QWORD*)(v3 + 72);
  *(_QWORD*)(v3 + 72) = 0;
  if (v16 != 0) {
    if (*(_BYTE*)v16 == 1) {
      v17 = *(_DWORD*)(v16 + 4);
      *(_BYTE*)v16 = 0;
      if (v17 != -1) {
        Config_bc72a0(eft_g_effectSystem);
      }
      if (*(_DWORD*)(v16 + 8) != -1) {
        Config_bc72a0(eft_g_effectSystem);
      }
    }
    v18 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v18);
  }
  v19 = *(_QWORD*)(v3 + 64);
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = *(_QWORD*)(v3 + 48);
  *(_QWORD*)(v3 + 48) = 0;
  if (v20 != 0) {
    GameRoutine_ce5aa0(v20);
    v21 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v21);
  }
  result = *(_QWORD*)(v3 + 32);
  *(_QWORD*)(v3 + 32) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  if ((*(_BYTE*)(v3 + 8) & 1) != 0 && *(_QWORD*)(v3 + 24) != 0) {
    v23 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v23 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23);
  }
  return result;
}

void game_cutscene_181aa10(__int64 a1, char a2)
{
  __int64 v3;
  unsigned __int64 v4;
  float v5;
  __int64 v6;
  unsigned __int64 v7;
  __int128 v8;

  v3 = *(_QWORD*)(a1 + 48);
  if ((a2 & 1) != 0) {
    *(_BYTE*)(v3 + 112) = 1;
    GameRoutine_1811fa0(*(_QWORD*)(a1 + 56), -1.0f, 0.0f);
    if (game_ProcFadeView_instance_ != 0) {
      v4 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
        game_809ba0(game_ProcFadeView_instance_, 0.0f);
      }
    }
  }
  else {
    v5 = *(float*)(v3 + 104);
    GameRoutine_ce68a0();
    GameRoutine_1811fa0(*(_QWORD*)(a1 + 56), v5,
                        *(float*)(*(_QWORD*)(a1 + 48) + 104LL));
    v6 = *(_QWORD*)(a1 + 48);
    if (*(float*)(v6 + 104) >= *(float*)(v6 + 24) &&
        (*(_BYTE*)(v6 + 28) & 1) == 0) {
      if (game_ProcFadeView_instance_ != 0) {
        v7 = game_ProcFadeView_instance_ +
             ((unsigned __int64)*(
                  unsigned __int8*)(game_ProcFadeView_instance_ + 480)
              << 6);
        if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 +
                                                                        160);
        }
        else {
          v8 = *(_OWORD*)(v7 + 208);
        }
        if ((*((float*)&v8 + 3) != 1.0f ||
             LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                          (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
                             v7 + 160, *((float*)&v8 + 3)))
                     .n128_f32[3] != 1.0f) &&
            game_ProcFadeView_instance_ != 0) {
          game_809dc0(game_ProcFadeView_instance_, GameData_212c960, 0.0f);
        }
      }
      *(_DWORD*)(a1 + 4) = 5;
    }
  }
}

#pragma GCC visibility pop
