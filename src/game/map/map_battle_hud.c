#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2107d08[])();
extern __int64 GameData_21ed098;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_226b670;
__int64 MapBattleHUD_Destructor(_QWORD* a1);
__int64 GameRoutine_18c0480(__int64, int);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_18c70b0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64* MapBattleHUD_18c47d0(__int64* result);
__int64 game_map_MapBattleHUD_DamagePopupFactory_lambda9_Invoke(__int64 a1,
                                                                __int64* a2);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, _QWORD);
__int64 GameRoutine_18c5620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c57d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c5980(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18c5f30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c5f30_alt1(__int64, __int64, char, int, int,
                                 char) __asm__("GameRoutine_18c5f30");
__int64 GameRoutine_18c8580(void);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 Unit_6cb640(_QWORD);
__int64 Unit_6cbb60(_QWORD);
__int64 Unit_6cbdc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Vector_650e00(_QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_820d50(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a837c0;
extern __int128 GameData_21a6120;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_21320c8[3];
extern __int64* GameData_21320d0[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c99b8;
extern __int64 game_GameModeData_instance_;
__attribute__((swiftcall)) void MapBattleHUD_18c4640(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void
MapBattleHUD_18c4980_alt1(PSEUDO_X8 x8_, __int64 result,
                          char a2) __asm__("MapBattleHUD_18c4980");
__int64 MapBattleHUD_18c53e0(__int64 result, char a2);
float MapBattleHUD_18c5bc0(__int64 a1, char a2);
__int64 MapBattleHUD_18c6110(__int64 result, int a2, char a3);
__int64 MapBattleHUD_18c6200(__int64 result, int a2, int a3, char a4);
__attribute__((swiftcall)) void MapBattleHUD_18c6be0(PSEUDO_X8 x8_,
                                                     __int64 result);
__int64 GameRoutine_1563f90_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_1563f90");
__int64 GameRoutine_1564060_alt1(__int64 result) __asm__("GameRoutine_1564060");
__int64 LayoutAccessor_155e140(__int64*);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int128* Vector_650e00_alt1() __asm__("Vector_650e00");
__int64 Pane_58dee0_alt1(__int64 result, __int64) __asm__("Pane_58dee0");
__int64 Pane_58df60_alt1(__int64 result, _QWORD*) __asm__("Pane_58df60");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void ui_ILayoutControl_UpdatePath_alt1(__int64) __asm__(
    "ui_ILayoutControl_UpdatePath");
__attribute__((swiftcall)) void MapBattleHUD_18c4980(PSEUDO_X8 x8_,
                                                     float32x4_t** a1, char a2);

__int64 MapBattleHUD_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 result;
  __int64 v33;

  LayoutAccessor_155e140(a1 + 3);
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
    v3 = a1[2];
    a1[1] = 0;
    a1[2] = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  v4 = a1[44];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = a1[45];
    if (v4 == v6) {
      goto LABEL_12;
    }
    do {
      v7 = *(_QWORD*)(v6 - 8);
      if (v7 != 0) {
        std___1___shared_weak_count___release_weak(v7);
      }
      v6 -= 16;
    } while (v6 != v4);
    v8 = a1[44];
    a1[45] = v4;
    v4 = v8;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v9, v4);
    }
  }
  v10 = a1[29];
  if (v10 != 0) {
    v11 = a1[30];
    if (v10 == v11) {
      goto LABEL_22;
    }
    do {
      v12 = *(_QWORD*)(v11 - 8);
      if (v12 != 0) {
        std___1___shared_weak_count___release_weak(v12);
      }
      v11 -= 16;
    } while (v11 != v10);
    v13 = a1[29];
    a1[30] = v10;
    v10 = v13;
    if (v13 != 0) {
    LABEL_22:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v14, v10);
    }
  }
  v15 = (_QWORD*)a1[26];
  while (v15 != nullptr) {
    v20 = v15;
    v15 = (_QWORD*)*v15;
    v17 = v20[3];
    if (v17 != 0) {
      v21 = v20[4];
      if (v17 == v21) {
        goto LABEL_28;
      }
      do {
        v22 = *(_QWORD*)(v21 - 8);
        if (v22 != 0) {
          std___1___shared_weak_count___release_weak(v22);
        }
        v21 -= 16;
      } while (v21 != v17);
      v16 = v20[3];
      v20[4] = v17;
      v17 = v16;
      if (v16 != 0) {
      LABEL_28:
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v18, v17);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
      v19 = 128;
    }
    else {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v19, v20);
  }
  v23 = a1[24];
  a1[24] = 0;
  if (v23 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v24, v23);
  }
  v25 = (_QWORD*)a1[21];
  if (v25 != nullptr) {
    do {
      v27 = (_QWORD*)*v25;
      v28 = v25[4];
      if (v28 != 0) {
        std___1___shared_weak_count___release_weak(v28);
      }
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v26 = 128;
      }
      else {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v26, v25);
      v25 = v27;
    } while (v27 != nullptr);
  }
  v29 = a1[19];
  a1[19] = 0;
  if (v29 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v30, v29);
  }
  LayoutAccessor_155e140(a1 + 3);
  v31 = a1[15];
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  GameRoutine_1564060_alt1((__int64)(a1 + 9));
  GameRoutine_1563f90_alt1((__int64)(a1 + 6), a1[7]);
  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v33 = a1[2];
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    result = std___1___shared_weak_count___release_weak(v33);
  }
  *a1 = GameData_2107d08;
  if ((_QWORD*)GameData_21ed098 == a1) {
    GameData_21ed098 = 0;
    GameData_226b670 = 0;
  }
  return result;
}

__attribute__((swiftcall)) void MapBattleHUD_18c4640(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  const char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    _QWORD* v25;
    __int64 v26;
  } v25_;

  v2 = *(_QWORD*)(a1 + 240);
  v23_.v23 = 0;
  v23_.v24 = 0;
  v5 = *(_QWORD*)(v2 - 8);
  if (v5 != 0 &&
      (v6 = std___1___shared_weak_count_lock_alt1(v5), v23_.v24 = v6,
       v6 != 0) &&
      (v7 = v6, v8 = *(_QWORD*)(v2 - 16), v23_.v23 = v8, v8 != 0) &&
      (v9 = v7, (v10 = __dynamic_cast(v8, GameData_212dfc0[0],
                                      GameData_21320d0[0], 0)) != 0)) {
    v11 = &v23_.v23;
    v25_.v25 = (_QWORD*)v10;
    v25_.v26 = v9;
  }
  else {
    v11 = (__int64*)&v25_.v25;
  }
  *v11 = 0;
  v11[1] = 0;
  v12 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = *(_QWORD*)(a1 + 240);
  v14 = *(_QWORD*)(v13 - 8);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v14);
  }
  v15 = v13 - 16;
  v16 = v25_.v25;
  *(_QWORD*)(a1 + 240) = v15;
  if (v16 != nullptr && *(_QWORD*)(a1 + 128) != 0) {
    v17 = *(_QWORD**)(v16[1] + 24LL);
    Pane_58df60_alt1(v17[3], v17);
    Pane_58dee0_alt1(*(_QWORD*)(a1 + 128), (__int64)v17);
    v18 = v16[1];
    if (v18 != 0) {
      v19 = (const char*)(*(_QWORD*)(v18 + 24) + 176LL);
      v20 = strlen_alt1(v19);
      v16[2] = v19;
      v16[3] = v20;
      ui_ILayoutControl_UpdatePath_alt1((__int64)v16);
    }
    v21 = v25_.v26;
    *a2 = v16;
    a2[1] = v21;
  }
  else {
    *a2 = 0;
    a2[1] = 0;
    v22 = v25_.v26;
    if (v25_.v26 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt1(v22);
    }
  }
}

__int64* MapBattleHUD_18c47d0(__int64* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;

  v1 = (_QWORD*)GameData_21ed098;
  if (GameData_21ed098 != 0) {
    v3 = *result;
    v2 = result[1];
    if (v2 != 0) {
      v4 = (_QWORD*)(GameData_21ed098 + 360);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v5 = (_QWORD*)v1[45];
      v6 = v1[46];
      if ((unsigned __int64)v5 < v6) {
        *v5 = v3;
        v5[1] = v2;
        v7 = v5 + 2;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                  memory_order_relaxed);
        goto LABEL_20;
      }
    }
    else {
      v5 = *(_QWORD**)(GameData_21ed098 + 360);
      v6 = *(_QWORD*)(GameData_21ed098 + 368);
      v4 = (_QWORD*)(GameData_21ed098 + 360);
      if ((unsigned __int64)v5 < v6) {
        *v5 = v3;
        v5[1] = 0;
        v7 = v5 + 2;
      LABEL_20:
        *v4 = v7;
        if (v2 != 0) {
          return (__int64*)std___1___shared_weak_count___release_weak(v2);
        }
        return result;
      }
    }
    v8 = v1[44];
    v9 = (__int64)v5 - v8;
    v10 = ((__int64)v5 - v8) >> 4;
    v11 = v10 + 1;
    if ((unsigned __int64)(v10 + 1) >> 60 != 0) {
      GameRoutine_18c70b0();
    }
    v12 = v6 - v8;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v13 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v11;
    }
    if (v13 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v13, 16, 0);
    v16 = (_QWORD*)(v15 + v9);
    v17 = v15 + 16 * v13;
    *v16 = v3;
    v16[1] = v2;
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v8 = v1[44];
      v9 = v1[45] - v8;
      v10 = v9 >> 4;
    }
    v18 = &v16[-2 * v10];
    v7 = v16 + 2;
    result = (__int64*)memcpy(v18, v8, v9);
    v1[44] = v18;
    v1[45] = v7;
    v1[46] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19);
    }
    goto LABEL_20;
  }
  return result;
}

__attribute__((swiftcall)) void MapBattleHUD_18c4980(PSEUDO_X8 x8_,
                                                     float32x4_t** a1, char a2)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v6;
  __int64 v8;
  float32x4_t* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  long double v21;
  float32x4_t* v22;
  __int64 v23;
  __int64 v24;
  float32x4_t* v25;
  float32x4_t v26;
  int8x16_t v27;
  _BOOL4 v28;
  float32x4_t v29;
  int v30;
  __int64 v31;
  float32x4_t** v32;
  float32x4_t** v33;
  int v34;
  __int64 v35;
  __int64 v36;
  long double v37;
  float32x4_t v38;
  __int64 v39;
  float v40;
  float32x4_t v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  float32x4_t v45;
  float32x4_t v46;
  struct {
    unsigned __int64 v47;
    char v48;
  } v47_;

  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *GameData_212d570[0];
  if (*GameData_212d570[0] == 0 || (v6 = (__int64)a1[1]) == 0 ||
      (v8 = std___1___shared_weak_count_lock_alt1(v6)) == 0) {
  LABEL_27:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v42 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v42;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *a3 = COERCE_AS(float32x4_t, GameData_21a6120);
    return;
  }
  v9 = *a1;
  v10 = v8;
  if (*a1 == nullptr) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v10),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    goto LABEL_27;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock_alt1(v8),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v11 != 0) {
    v12 = LANES128(v9[14]).n128_u64[0];
    v47_.v48 = 1;
    v13 = LANES128(v9[17]).n128_u8[1];
    v14 = v11;
    v15 = LANES128(v9[17]).n128_u8[0];
    v47_.v47 = v12;
    (*(void (**)(float32x4_t*, unsigned __int64*, __int64, __int64))(
        LANES128(*(v9)).n128_u64[0] + 192))(v9, &v47_.v47, v15, v13),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((a2 & 1) != 0 ||
        (v16 = *(_QWORD*)(v4 + 352), v17 = *(_QWORD*)(v4 + 360), v16 == v17)) {
    LABEL_30:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
        v43 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v43;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *a3 = COERCE_AS(float32x4_t, GameData_21a6120);
    }
    else {
      v18 = a2 & 1;
      v45 = v9[12];
      v46 = v9[13];
      while (1) {
        v19 = *(_QWORD*)(v16 + 8);
        if (v19 != 0) {
          v20 = std___1___shared_weak_count_lock_alt1(v19),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v20 != 0) {
            v22 = *(float32x4_t**)v16;
            if (*(_QWORD*)v16 != 0) {
              if (LANES128(v22[17]).n128_u8[0] == v18) {
                v23 = LANES128(v22[17]).n128_u8[1];
                v24 = v20;
                v25 = *(float32x4_t**)v16;
                v47_.v47 = LANES128(v22[14]).n128_u64[0];
                v47_.v48 = 1;
                (*(void (**)(float32x4_t*, unsigned __int64*, _QWORD, __int64))(
                    LANES128(*(v22)).n128_u64[0] + 192))(v25, &v47_.v47, 0,
                                                         v23),
                    v21 = COERCE_AS(__typeof__(v21),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                v20 = v24;
                v26 = vsubq_f32(v45, v22[12]);
                v27 = vmulq_f32(v26, v26);
                LANES128(v27).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v27, v27, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                        .n64_u64[0];
                v28 =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                        .n64_f32[0] < 0x1.0000000000000p+0f;
                v29 = vsubq_f32(v46, v22[13]);
                v21 = COERCE_LONG_DOUBLE(vmulq_f32(v29, v29));
                *(float32x2_t*)&v21 = vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(*(int8x16_t*)&v21,
                                                   *(int8x16_t*)&v21, 8u))
                                  .n128_u64[0]),
                    *(float32x2_t*)&v21);
                *(float32x2_t*)&v21 =
                    vpadd_f32(*(float32x2_t*)&v21, *(float32x2_t*)&v21);
                v30 = *(float*)&v21 < 0x1.9000000000000p+6f || v28;
              }
              else {
                v30 = 3;
              }
            }
            else {
              v30 = 0;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v31 = v20;
              (*(void (**)(__int64, long double))(*(_QWORD*)v20 + 16LL))(v20,
                                                                         v21),
                  v21 = COERCE_AS(__typeof__(v21),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v31),
                  v21 = COERCE_AS(__typeof__(v21),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            if (v30 != 3 && v30 != 0) {
              break;
            }
          }
        }
        v16 += 16;
        if (v16 == v17) {
          goto LABEL_30;
        }
      }
      Vector_650e00_alt1(),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v33 = *(float32x4_t***)(v4 + 352);
      v32 = *(float32x4_t***)(v4 + 360);
      if (v33 == v32) {
        v40 = 0x0.0p+0f;
      }
      else {
        v34 = 0;
        do {
          v35 = (__int64)v33[1];
          if (v35 != 0) {
            v36 = std___1___shared_weak_count_lock_alt1(v35),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v36 != 0) {
              if (*v33 != nullptr) {
                v38 = vsubq_f32((*v33)[12], v9[12]);
                v37 = COERCE_LONG_DOUBLE(vmulq_f32(v38, v38));
                *(float32x2_t*)&v37 = vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(*(int8x16_t*)&v37,
                                                   *(int8x16_t*)&v37, 8u))
                                  .n128_u64[0]),
                    *(float32x2_t*)&v37);
                *(float32x2_t*)&v37 =
                    vpadd_f32(*(float32x2_t*)&v37, *(float32x2_t*)&v37);
                if (*(float*)&v37 < 0x1.0000000000000p+0f) {
                  ++v34;
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v39 = v36;
                (*(void (**)(__int64, long double))(*(_QWORD*)v36 + 16LL))(v36,
                                                                           v37),
                    v21 = COERCE_AS(__typeof__(v21),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v39),
                    v21 = COERCE_AS(__typeof__(v21),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
          }
          v33 += 2;
        } while (v33 != v32);
        v40 = (float)v34;
      }
      v41 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a837c0), v40);
      LANES128(v41).n128_u32[3] = 0;
      *a3 = v41;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v14),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v44 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v44;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *a3 = COERCE_AS(float32x4_t, GameData_21a6120);
  }
  std___1___shared_weak_count___release_weak_alt1(v10),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v10),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

__int64 MapBattleHUD_18c53e0(__int64 result, char a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  _DWORD* v7;
  __int64 v8;
  char v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[3];
  int v15;

  if (result != 0) {
    v2 = GameData_21ed098;
    if (GameData_21ed098 != 0) {
      v4 = result;
      v5 = game_g_shared_system_skills_ptr;
      LODWORD(v14[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x21CLL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
      if ((game_HasSkill(result + 1744, v14) & 1) != 0) {
        UnitActor_81d430((void*)(v14), v4);
        v6 = (_DWORD*)Unit_6cbb60(v4);
        return GameRoutine_18c5620(
            v2, v14,
            *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*v6 & 0xFFF)),
            a2 & 1);
      }
      else {
        LODWORD(v14[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x210LL) + v5) & 0xFFF;
        if ((game_HasSkill(v4 + 1744, v14) & 1) != 0) {
          UnitActor_81d430((void*)(v14), v4);
          v7 = (_DWORD*)Unit_6cbb60(v4);
          return GameRoutine_18c57d0(
              v2, v14,
              *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * (*v7 & 0xFFF)),
              a2 & 1);
        }
        else {
          v8 = *(_QWORD*)(v4 + 440);
          if (v8 != 0) {
            v9 = *(_BYTE*)(v8 + 16);
          }
          else {
            v9 = 9;
          }
          v10 = 1;
          if (((1 << v9) & 0xF1) != 0) {
            v11 = game_820d50(2);
            if (game_GameModeData_instance_ == 0 ||
                (v12 = game_GameVariableTable_Find(
                     *(_QWORD*)(game_GameModeData_instance_ + 48), v11)) == 0 ||
                *(_DWORD*)(v12 + 32) == 0) {
              LODWORD(v14[0]) =
                  *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) + v5) & 0xFFF;
              v10 = game_HasSkill(v4 + 1744, v14) ^ 1;
            }
          }
          UnitActor_81d430((void*)(v14), v4);
          v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) + v5) & 0xFFF;
          if ((game_HasSkill(v4 + 1744, &v15) & 1) != 0) {
            v13 = 3;
          }
          else {
            v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v5) & 0xFFF;
            if ((game_HasSkill(v4 + 1744, &v15) & 1) != 0) {
              v13 = 2;
            }
            else {
              v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v5) & 0xFFF;
              v13 = game_HasSkill(v4 + 1744, &v15) & 1;
            }
          }
          return GameRoutine_18c5980(
              v2, v14, v13, *(unsigned __int8*)(v4 + 499), 0, v10 & 1, a2 & 1);
        }
      }
    }
  }
  return result;
}

float MapBattleHUD_18c5bc0(__int64 a1, char a2)
{
  float v2;
  unsigned int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v25[2];
  int v26;

  v2 = 0.0f;
  if (a1 == 0) {
    return v2;
  }
  v3 = *(unsigned __int8*)(a1 + 499);
  if (*(_WORD*)(a1 + 1952) != 0) {
    v6 = *(_QWORD*)(GameData_21c99b8 + 64);
    v7 = *(_QWORD*)(v6 + 8LL * *(unsigned __int16*)(a1 + 1952));
    v25[0] = 0;
    if (v7 != 0) {
      v8 = *(unsigned __int16*)(v7 + 16);
      HIDWORD(v25[0]) = 1;
      LOWORD(v25[0]) = v8;
      if (*(_BYTE*)(*(_QWORD*)(v6 + 8 * v8) + 73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v9 = game_map_MapRandom_instance__ptr[0];
        v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v9 + 1) = v10;
        v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v25[0]) =
            (16 * ((_WORD)v13 -
                   1000 * (unsigned __int16)((v13 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
  }
  else {
    v25[0] = 0;
  }
  v14 = Unit_6cbdc0(a1, GameData_212c8a8, v25, 1);
  if ((unsigned __int8)Unit_6cb640(a1) == 2) {
    if (v14 < 0) {
      v15 = GameData_21ed098;
      if (GameData_21ed098 != 0) {
        UnitActor_81d430((void*)(v25), a1);
        v16 = game_g_shared_system_skills_ptr;
        v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        if ((game_HasSkill(a1 + 1744, &v26) & 1) != 0) {
          v17 = 3;
        }
        else {
          v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v16) & 0xFFF;
          if ((game_HasSkill(a1 + 1744, &v26) & 1) != 0) {
            v17 = 2;
          }
          else {
            v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v16) & 0xFFF;
            v17 = game_HasSkill(a1 + 1744, &v26) & 1;
          }
        }
        GameRoutine_18c5f30(v15, v25, v17, v3 - v14, v3, a2 & 1);
        return (float)((float)(unsigned int)-v14 * 0x1.99999a0000000p-4f) +
               1.0f;
      }
      return v2;
    }
  }
  else if ((unsigned __int8)Unit_6cb640(a1) == 5) {
    v18 = GameData_21ed098;
    if (GameData_21ed098 != 0) {
      UnitActor_81d430((void*)(v25), a1);
      v19 = game_g_shared_system_skills_ptr;
      v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill(a1 + 1744, &v26) & 1) != 0) {
        v20 = 3;
      }
      else {
        v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v19) & 0xFFF;
        if ((game_HasSkill(a1 + 1744, &v26) & 1) != 0) {
          v20 = 2;
        }
        else {
          v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v19) & 0xFFF;
          v20 = game_HasSkill(a1 + 1744, &v26) & 1;
        }
      }
      GameRoutine_18c5f30(v18, v25, v20, 12, 0, a2 & 1);
      return 2.0f;
    }
    return v2;
  }
  v21 = GameData_21ed098;
  if (GameData_21ed098 != 0) {
    UnitActor_81d430((void*)(v25), a1);
    v22 = game_g_shared_system_skills_ptr;
    v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if ((game_HasSkill(a1 + 1744, &v26) & 1) != 0) {
      v23 = 3;
    }
    else {
      v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v22) & 0xFFF;
      if ((game_HasSkill(a1 + 1744, &v26) & 1) != 0) {
        v23 = 2;
      }
      else {
        v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v22) & 0xFFF;
        v23 = game_HasSkill(a1 + 1744, &v26) & 1;
      }
    }
    GameRoutine_18c5f30(v21, v25, v23, *(unsigned __int8*)(a1 + 499), 0,
                        a2 & 1);
  }
  return v2;
}

__int64 MapBattleHUD_18c6110(__int64 result, int a2, char a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  char v8;
  _QWORD v9[2];
  int v10;

  if (result != 0) {
    v3 = GameData_21ed098;
    if (GameData_21ed098 != 0) {
      v6 = result;
      UnitActor_81d430((void*)(v9), result);
      v7 = game_g_shared_system_skills_ptr;
      v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill(v6 + 1744, &v10) & 1) != 0) {
        v8 = 3;
      }
      else {
        v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v7) & 0xFFF;
        if ((game_HasSkill(v6 + 1744, &v10) & 1) != 0) {
          v8 = 2;
        }
        else {
          v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v7) & 0xFFF;
          v8 = game_HasSkill(v6 + 1744, &v10) & 1;
        }
      }
      return GameRoutine_18c5f30_alt1(
          v3, (__int64)v9, v8, *(unsigned __int8*)(v6 + 499), a2, a3 & 1);
    }
  }
  return result;
}

__int64 MapBattleHUD_18c6200(__int64 result, int a2, int a3, char a4)
{
  __int64 v4;
  __int64 v8;
  __int64 v9;
  char v10;
  _QWORD v11[3];
  int v12;

  if (result != 0) {
    v4 = GameData_21ed098;
    if (GameData_21ed098 != 0) {
      v8 = result;
      UnitActor_81d430((void*)(v11), result);
      v9 = game_g_shared_system_skills_ptr;
      v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill(v8 + 1744, &v12) & 1) != 0) {
        v10 = 3;
      }
      else {
        v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v9) & 0xFFF;
        if ((game_HasSkill(v8 + 1744, &v12) & 1) != 0) {
          v10 = 2;
        }
        else {
          v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v9) & 0xFFF;
          v10 = game_HasSkill(v8 + 1744, &v12) & 1;
        }
      }
      return GameRoutine_18c5f30_alt1(v4, (__int64)v11, v10, a2, a3, a4 & 1);
    }
  }
  return result;
}

__attribute__((swiftcall)) void MapBattleHUD_18c6be0(PSEUDO_X8 x8_,
                                                     __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  bool v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v2 = *(_QWORD*)(result + 200);
  v3 = v2 == 0 || *(_QWORD*)(result + 216) == 0;
  if (v3 || (v4 = **(_QWORD***)(result + 192)) == nullptr ||
      (v5 = (_QWORD*)*v4, *v4 == 0)) {
  LABEL_19:
    *a2 = 0;
    a2[1] = 0;
    {
      result;
      return;
    }
  }
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) == 0) {
    while (1) {
      v8 = v5[1];
      if (v8 != 0) {
        if ((v8 & v6) != 0) {
          goto LABEL_19;
        }
      }
      else if (v5[2] == 0) {
        goto LABEL_21;
      }
      v5 = (_QWORD*)*v5;
      if (v5 == nullptr) {
        goto LABEL_19;
      }
    }
  }
  while (1) {
    v7 = v5[1];
    if (v7 == 0) {
      break;
    }
    if (v7 < v2 || v7 % v2 != 0) {
      goto LABEL_19;
    }
  LABEL_10:
    v5 = (_QWORD*)*v5;
    if (v5 == nullptr) {
      goto LABEL_19;
    }
  }
  if (v5[2] != 0) {
    goto LABEL_10;
  }
LABEL_21:
  v9 = v5[4];
  if (v5[3] == v9) {
    GameRoutine_18c8580();
    return;
  }
  v10 = *(_QWORD*)(v9 - 8);
  v28 = 0;
  v29 = 0;
  v11 = a2;
  v12 = a2;
  v13 = result;
  if (v10 != 0) {
    v14 = std___1___shared_weak_count_lock(v10);
    a2 = v12;
    v15 = v14;
    result = v13;
    v29 = v15;
    v11 = v12;
    if (v15 != 0) {
      v16 = *(_QWORD*)(v9 - 16);
      v11 = v12;
      v28 = v16;
      if (v16 != 0) {
        v17 = __dynamic_cast(v16, GameData_212dfc0[0], GameData_21320c8[0], 0);
        a2 = v12;
        v18 = v17;
        result = v13;
        v11 = v12;
        if (v18 != 0) {
          v11 = &v28;
          *v12 = v18;
          v12[1] = v15;
        }
      }
    }
  }
  *v11 = 0;
  v11[1] = 0;
  v19 = v29;
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
    result = v13;
    a2 = v12;
  }
  v20 = v5[4];
  if (*(_QWORD*)(v20 - 8) != 0) {
    std___1___shared_weak_count___release_weak(*(_QWORD*)(v20 - 8));
    result = v13;
    a2 = v12;
  }
  v5[4] = v20 - 16;
  v21 = (_QWORD*)*a2;
  if (*a2 == 0 || *(_QWORD*)(result + 128) == 0) {
    v27 = a2[1];
    if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      result = std___1___shared_weak_count___release_weak(v27);
      a2 = v12;
    }
    goto LABEL_19;
  }
  v22 = result;
  v23 = *(_QWORD*)(v21[1] + 24LL);
  Pane_58df60(*(_QWORD*)(v23 + 24), v23);
  result = Pane_58dee0(*(_QWORD*)(v22 + 128), v23);
  v24 = v21[1];
  if (v24 != 0) {
    v25 = *(_QWORD*)(v24 + 24) + 176LL;
    v26 = strlen(v25);
    v21[2] = v25;
    v21[3] = v26;
    {
      ui_ILayoutControl_UpdatePath(v21);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_map_MapBattleHUD_DamagePopupFactory_lambda9_Invoke(__int64 a1,
                                                                __int64* a2)
{
  _DWORD* v2;
  __int64 v3;
  int v4;

  v2 = *(_DWORD**)(a1 + 8);
  v3 = *a2;
  if ((*v2 & 0x400) != 0) {
    v4 = 1;
  }
  else {
    v4 = -1;
  }
  return GameRoutine_18c0480(v3, v4);
}

#pragma GCC visibility pop
