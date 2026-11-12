#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void Object_dfd7e0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_hub_e1c160(PSEUDO_X8, __int64, char*,
                                                __int64*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe2730[])();
extern __int64 GameData_212dc48[5];
extern __int64 fw_memory_g_heap_manager_ptr;
void game_hub_Object_EnableHitAttack(__int64, __int64);
__int64 game_hub_ObjectControllerDestroyBase_InitializeImpl(__int64 a1);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_e00100(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, float);
__attribute__((swiftcall)) void game_hub_e01240(PSEUDO_X8, _QWORD*, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__attribute__((swiftcall)) void math_Quat_Rotate(PSEUDO_X8, int8x16_t*,
                                                 int8x16_t*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameHr_dbc2c0(_QWORD*, __int64);
__int64 GameRoutine_14a1520(__int64*, char);
__int64 GameRoutine_e02b70(__int64, __int64*);
__int64 game_989ea0(__int64 result, int, __int64);
__int64 game_hub_dfc000(__int64 result);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83090;
extern __int128 GameData_21a6120;
extern __int64* GameData_212eec0[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dc68;
int __cxa_guard_acquire(__int64);
void GameRoutine_e03080(__int64, __int64*);
void __cxa_guard_release(__int64);
void game_10ca920(__int64*, __int64);
void game_hub_e02d20(__int64, __int64*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_hub_ObjectControllerDestroyBase_InitializeImpl_lambda0_Invoke(
    __int64 a1, __int64* a2);

__int64 game_hub_ObjectControllerDestroyBase_InitializeImpl(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __n128 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  __int64 v18[9];
  _QWORD v19[3];

  v1 = *(unsigned __int8*)(a1 + 24);
  if ((v1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
  }
  else {
    v3 = v1 >> 1;
  }
  if (v3 != 0) {
    Object_dfd7e0((void*)(v18), *(_QWORD*)(a1 + 8), (__int64)"Loc_Eff_Gmc");
    v4 = *(_QWORD*)GameData_212dc48[0];
    GameRoutine_e1b4d0((void*)(v19));
    game_hub_e1c160((void*)(&v16_.v16), v4, (char*)v19, v18);
    if ((v19[0] & 1) != 0 && v19[2] != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v6);
    }
    v7 = v16_.v16;
    v8 = v16_.v17;
    if (v16_.v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16_.v17 + 8), 1u,
                                memory_order_relaxed);
    }
    v9 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 56) = v7;
    *(_QWORD*)(a1 + 64) = v8;
    if (v9 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        v5 = std___1___shared_weak_count___release_weak(v9);
      }
      v8 = *(_QWORD*)(a1 + 64);
    }
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        v5 = std___1___shared_weak_count___release_weak(v8);
      }
    }
    v10 = v16_.v17;
    if (v16_.v17 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v16_.v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(
          v10, *(long double*)&v5);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v11 + 848) & 1) == 0) {
    *(_BYTE*)(v11 + 848) = 1;
    v11 = *(_QWORD*)(a1 + 8);
  }
  v14_.v14[0] = GameData_1fe2730;
  v14_.v14[1] = a1;
  v14_.v15 = v14_.v14;
  game_hub_Object_EnableHitAttack(v11, (__int64)v14_.v14);
  result = (__int64)v14_.v15;
  if (v14_.v15 == v14_.v14) {
    v13 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(__int64))(*v14_.v15 + v13))((__int64)v14_.v15);
}

void game_hub_ObjectControllerDestroyBase_InitializeImpl_lambda0_Invoke(
    __int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  _DWORD* v6;
  __int64* v7;
  __int64 v8;
  __int128* v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  signed int v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  char v25;
  __int128* v26;
  __int128 v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  int8x16_t v33;
  unsigned __int64 v34;
  __int64 v35;
  bool v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  struct {
    __int64 v44;
    __int64 v45;
  } v44_;
  struct {
    __int64 v46;
    __int64 v47;
    __int128 v48;
  } v46_;
  struct {
    __int128 v49;
    int8x16_t v50;
    char v51;
  } v49_;
  __int64 v52[2];
  struct {
    __int64 v53;
    __int64 v54;
  } v53_;
  __int64 v55[2];
  __int128 v56;
  float32x4_t v57;
  int8x16_t v58[2];

  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(a1 + 8);
  v55[0] = v3;
  v55[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_e02b70(v4, v55),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v2),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v5 & 1) == 0) {
    LABEL_64:
      std___1___shared_weak_count___release_weak_alt1(v2),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      return;
    }
    v53_.v53 = v3;
    v53_.v54 = v2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    if ((GameRoutine_e02b70(v4, v55) & 1) == 0) {
      return;
    }
    v53_.v53 = v3;
    v53_.v54 = 0;
  }
  game_hub_e02d20(v4, &v53_.v53),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v53_.v54 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v53_.v54),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v52[0] = v3;
  v52[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_e03080(v4, v52),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v2),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    GameRoutine_e03080(v4, v52),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v6 = *(_DWORD**)(v4 + 56);
  if (*(_QWORD*)v6 != 0 && *(_DWORD*)(*(_QWORD*)v6 + 16LL) == v6[2]) {
    GameRoutine_14a1520((__int64*)(v4 + 56), 1),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v7 = *(__int64**)(*(_QWORD*)GameData_212dc68 + 128LL);
  if (v7 != nullptr) {
    v46_.v48 = (__typeof__(v46_.v48)){0};
    *(_QWORD*)&v49_.v49 = 0x3F80000000000000LL;
    v8 = *(_QWORD*)(v4 + 8);
    if ((*(_BYTE*)(v8 + 976) & 1) != 0) {
      v9 = (__int128*)(v8 + 960);
    }
    else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                   memory_order_acquire) &
              1) != 0) {
      v9 = &GameData_21a6120;
    }
    else {
      v42 = v7;
      v9 = &GameData_21a6120;
      if (__cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
        v43 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v43;
        __cxa_guard_release((__int64)&GameData_21a6130),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v7 = v42;
    }
    v10 = *v9;
    LODWORD(v49_.v49) = 0;
    LODWORD(v46_.v46) = 0;
    *(_QWORD*)&v11 = v10;
    *((_QWORD*)&v11 + 1) = DWORD2(v10);
    v46_.v48 = v11;
    game_10ca920(v7, (__int64)&v46_.v46),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v12 = *(_QWORD*)(v4 + 8);
  v13 = *(_QWORD*)(v12 + 816);
  if (v13 != 0) {
    v15 = *(_QWORD*)(*(_QWORD*)(v12 + 800) + 8LL);
    v14 = *(_QWORD*)(*(_QWORD*)(v12 + 800) + 16LL);
    if (v14 != v15) {
      while (1) {
        v16 = *(_QWORD*)(v15 + 8);
        if (*(_DWORD*)(v16 + 284) == 2) {
          break;
        }
        v15 += 32;
        if (v15 == v14) {
          goto LABEL_26;
        }
      }
      game_989ea0(v13, 2, v16),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v12 = *(_QWORD*)(v4 + 8);
    }
  }
LABEL_26:
  game_hub_dfc000(v12),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v17 = GameHr_dbc2c0(*(_QWORD**)GameData_212c6a0[0], v12),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v17 != 0) {
    *(_BYTE*)(v17 + 8) = 0;
  }
  v19 = (__int64*)(v4 + 24);
  v18 = *(unsigned __int8*)(v4 + 24);
  if ((v18 & 1) != 0) {
    v20 = *(_QWORD*)(v4 + 32);
  }
  else {
    v20 = v18 >> 1;
  }
  if (v20 != 0 && *(int*)(v4 + 48) >= 1) {
    v21 = 0;
    v22 = game_map_MapRandom_instance__ptr[0];
    v23 = GameData_212eec0[0];
    do {
      v46_.v47 = 0;
      *(_QWORD*)&v46_.v48 = 0;
      v49_.v51 = 0;
      v49_.v49 = (__typeof__(v49_.v49)){0};
      LANES128(v49_.v50).n128_u8[0] = 0;
      v24 = *(_QWORD*)(v4 + 8);
      v25 = *(_BYTE*)(v24 + 976);
      v46_.v46 = 0;
      if ((v25 & 1) != 0) {
        v26 = (__int128*)(v24 + 960);
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                     memory_order_acquire) &
                1) != 0 ||
               __cxa_guard_acquire((__int64)&GameData_21a6130) == 0) {
        v26 = &GameData_21a6120;
      }
      else {
        v41 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v41;
        __cxa_guard_release((__int64)&GameData_21a6130),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v26 = &GameData_21a6120;
      }
      *(_QWORD*)&v49_.v49 = *(_QWORD*)v26;
      *(_QWORD*)&v27 = v49_.v49;
      *((_QWORD*)&v27 + 1) = *((unsigned int*)v26 + 2);
      v49_.v49 = v27;
      nn_os_LockMutex((__int64)&game_g_random_mutex),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v28 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22);
      v29 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22 + 4);
      v30 = *(_DWORD*)v22 ^ (*(_DWORD*)v22 << 11);
      *(_DWORD*)v22 = *((_DWORD*)v22 + 1);
      *((_DWORD*)v22 + 1) = v28;
      v31 = (v30 >> 8) ^ (v29 >> 19) ^ v30 ^ v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22) = v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22 + 4) = v31;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      math_Quat_FromYawPitchRoll(
          (void*)(v58),
          (float)((float)(unsigned __int16)v31 / 0x1.fffe000000000p+15f) *
              0x1.921fb60000000p+2f,
          0x0.0p+0f, 0x0.0p+0f),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v56 = GameData_1a83090;
      math_Quat_Rotate((void*)(&v57), v58, (int8x16_t*)&v56),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      GameRoutine_e00100(
          (void*)(&v56), v32, &v49_.v49, &v57,
          fminf(vcvts_n_f32_u32(v21, 3u), 0x1.0000000000000p-1f)),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v49_.v51 == 1) {
        LANES128(v33).n128_u64[0] = v56;
        LANES128(v33).n128_u64[1] = DWORD2(v56);
        v49_.v50 = v33;
        if (&v46_.v46 != v19) {
          goto LABEL_43;
        }
      }
      else {
        v49_.v50 = COERCE_AS(int8x16_t, v56);
        v49_.v51 = 1;
        if (&v46_.v46 != v19) {
        LABEL_43:
          v34 = *(unsigned __int8*)v19;
          if ((v46_.v46 & 1) != 0) {
            v36 = (v34 & 1) == 0;
            v37 = v34 >> 1;
            if (v36) {
              v38 = v4 + 25;
            }
            else {
              v38 = *(_QWORD*)(v4 + 40);
            }
            if (v36) {
              v39 = v37;
            }
            else {
              v39 = *(_QWORD*)(v4 + 32);
            }
            SpineModel_64dde0(&v46_.v46, v38, v39),
                v32 =
                    COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          else if ((v34 & 1) != 0) {
            GameRoutine_64df20(&v46_.v46, *(_QWORD*)(v4 + 40),
                               *(_QWORD*)(v4 + 32)),
                v32 =
                    COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          else {
            v35 = *(_QWORD*)(v4 + 32);
            v46_.v46 = *v19;
            v46_.v47 = v35;
            *(_QWORD*)&v46_.v48 = *(_QWORD*)(v4 + 40);
          }
        }
      }
      game_hub_e01240((void*)(&v44_.v44), (_QWORD*)*v23, (__int64)&v46_.v46),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v44_.v45 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v44_.v45),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      if ((v46_.v46 & 1) != 0 && (_QWORD)v46_.v48 != 0) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v46_.v48),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      ++v21;
    } while (v21 < (signed __int32)*(_DWORD*)(v4 + 48));
  }
  if (v2 != 0) {
    goto LABEL_64;
  }
}

#pragma GCC visibility pop
