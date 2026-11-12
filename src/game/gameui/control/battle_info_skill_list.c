#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15abc70(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_18b3e30(void);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
extern __int64 (*GameData_2106208[])();
extern __int64 (*GameData_2106230[])();
extern __int64 (*GameData_21063e8[])();
extern __int64 (
    *game_gameui_control_BattleInfoSkillList_Destroy_BattleInfoSkillList_18b6c40_ptr
        [])();
extern __int64 (*game_gameui_control_BattleInfoSkillList_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_18b6f90(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__attribute__((swiftcall)) void BattleInfoSkillList_18b66c0(PSEUDO_X8 x8_,
                                                            __int64 a1);
__attribute__((swiftcall)) void
GameRoutine_15abc70_alt1(PSEUDO_X8, __int64,
                         __int64) __asm__("GameRoutine_15abc70");
__int64 LayoutEx_579160_alt1(__int64, __int64) __asm__("LayoutEx_579160");
__int64 Pane_58dee0_alt1(__int64 result, __int64) __asm__("Pane_58dee0");
__int64 Pane_58df60_alt1(__int64 result, _QWORD*) __asm__("Pane_58df60");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
const char* GameRoutine_18b3e30_alt1(__int64,
                                     __int64) __asm__("GameRoutine_18b3e30");
const char* GameRoutine_576740_alt1(__int64,
                                    const char*) __asm__("GameRoutine_576740");
const char* Pane_58fac0_alt1(__int64, const char*) __asm__("Pane_58fac0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn))
GameRoutine_18b6f90_alt1() __asm__("GameRoutine_18b6f90");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ui_ILayoutControl_UpdatePath_alt1(__int64) __asm__(
    "ui_ILayoutControl_UpdatePath");

__attribute__((swiftcall)) void BattleInfoSkillList_18b66c0(PSEUDO_X8 x8_,
                                                            __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  const char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  signed __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64* v44;
  struct {
    _QWORD* v45;
    __int64 v46;
  } v45_;
  struct {
    _QWORD* v47;
    _QWORD* v48;
    __int64 v49;
  } v47_;

  v3 = LayoutEx_579160_alt1(1088, 8);
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)v3 = GameData_2106230;
  GameRoutine_18b3e30_alt1(v3 + 24, a1);
  *(_BYTE*)(v3 + 1057) = 0;
  *(_QWORD*)(v3 + 1064) = 0;
  *(_QWORD*)(v3 + 1072) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 24) = game_gameui_control_BattleInfoSkillList_vtable;
  *(_QWORD*)(v3 + 96) = GameData_2106208;
  v4 = Pane_58fac0_alt1(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 24LL), "BattleSide");
  if (v4 != nullptr ||
      (v4 = GameRoutine_576740_alt1(a1, "BattleSide")) != nullptr) {
    *(_BYTE*)(v3 + 1057) = *(_DWORD*)&v4[*((unsigned int*)v4 + 1)] != 0;
  }
  v5 = (*(__int64 (**)(_QWORD, const char*, __int64))(
      **(_QWORD**)(*(_QWORD*)(v3 + 32) + 24LL) + 120LL))(
      *(_QWORD*)(*(_QWORD*)(v3 + 32) + 24LL), "A_Right", 1);
  v6 = *(_QWORD*)(v3 + 32);
  v47_.v49 = 0;
  v47_.v47 = &v47_.v47;
  v47_.v48 = &v47_.v47;
  v7 = *(_QWORD*)(v6 + 80);
  v8 = v6 + 72;
  if (v7 != v6 + 72) {
    v9 = v5;
    v44 = (__int64*)(v3 + 1064);
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      GameRoutine_15abc70_alt1((void*)((__int64*)&v45_.v45),
                               *(_QWORD*)(v3 + 104), v7 - 216);
      if (v45_.v46 != 0) {
        v11 = std___1___shared_weak_count_lock_alt1(v45_.v46);
        v12 = v45_.v45;
        if (v11 != 0) {
          v13 = (__int64)v45_.v45;
        }
        else {
          v13 = 0;
        }
        if (v45_.v46 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v45_.v46);
        }
        if (v13 != 0) {
          if (*(_BYTE*)(v3 + 1057) == 1) {
            Pane_58df60_alt1(*(_QWORD*)(v7 - 192), (_QWORD*)(v7 - 216));
            Pane_58dee0_alt1(v9, v7 - 216);
            v14 = v12[1];
            if (v14 != 0) {
              v15 = (const char*)(*(_QWORD*)(v14 + 24) + 176LL);
              v16 = strlen_alt1(v15);
              v12[2] = v15;
              v12[3] = v16;
              ui_ILayoutControl_UpdatePath_alt1((__int64)v12);
            }
            v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 32, 16, 0);
            v17[2] = v13;
            v17[3] = v11;
            if (v11 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                        memory_order_relaxed);
            }
            v18 = v47_.v48;
            *v17 = &v47_.v47;
            v17[1] = v18;
            *v18 = v17;
            v47_.v48 = v17;
          }
          else {
            v19 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 32, 16, 0);
            v19[2] = v13;
            v19[3] = v11;
            if (v11 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                        memory_order_relaxed);
            }
            v20 = v47_.v47;
            v47_.v47 = v19;
            *v19 = v20;
            v19[1] = &v47_.v47;
            v20[1] = v19;
          }
          ++v47_.v49;
          (*(void (**)(_QWORD*, _QWORD))(*v12 + 40LL))(v12, 0);
        }
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt1(v11);
        }
      }
      v7 = *(_QWORD*)(v7 + 8);
    } while (v7 != v8);
    v21 = v47_.v48;
    if (v47_.v48 != &v47_.v47) {
      v22 = *(_QWORD**)(v3 + 1072);
      do {
        v23 = *(_QWORD*)(v3 + 1080);
        if ((unsigned __int64)v22 >= v23) {
          v25 = *v44;
          v26 = (signed __int64)v22 - *v44;
          v27 = v26 >> 4;
          v28 = (v26 >> 4) + 1;
          if (v28 >> 60 != 0) {
            GameRoutine_18b6f90_alt1();
          }
          v29 = v23 - v25;
          if (v29 >> 3 > v28) {
            v28 = v29 >> 3;
          }
          if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF0LL) {
            v30 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v30 = v28;
          }
          if (v30 >> 60 != 0) {
            GameRoutine_60a210_alt1();
          }
          v31 = fw_memory_HeapManager_Allocate_alt1(*v10, 16 * v30, 16, 0);
          v32 = (_QWORD*)(v31 + v26);
          *v32 = v21[2];
          v33 = v21[3];
          v32[1] = v33;
          if (v33 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                      memory_order_relaxed);
            v25 = *(_QWORD*)(v3 + 1064);
            v26 = *(_QWORD*)(v3 + 1072) - v25;
            v27 = v26 >> 4;
          }
          v34 = (__int64)&v32[-2 * v27];
          v35 = v31 + 16 * v30;
          v22 = v32 + 2;
          memcpy_alt1(v34, v25, v26);
          *(_QWORD*)(v3 + 1064) = v34;
          *(_QWORD*)(v3 + 1072) = v22;
          *(_QWORD*)(v3 + 1080) = v35;
          if (v25 != 0) {
            v36 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v36, v25);
          }
        }
        else {
          *v22 = v21[2];
          v24 = v21[3];
          v22[1] = v24;
          if (v24 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                      memory_order_relaxed);
          }
          v22 += 2;
        }
        *(_QWORD*)(v3 + 1072) = v22;
        v21 = (_QWORD*)v21[1];
      } while (v21 != &v47_.v47);
    }
  }
  if (v47_.v49 != 0) {
    v37 = v47_.v48;
    v38 = (_QWORD*)v47_.v47[1];
    *(_QWORD*)(*v47_.v48 + 8LL) = v38;
    *v38 = *v37;
    v47_.v49 = 0;
    if (v37 != &v47_.v47) {
      v39 = fw_memory_g_heap_manager_ptr;
      do {
        v41 = (_QWORD*)v37[1];
        v42 = v37[3];
        if (v42 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v42);
        }
        if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v39 + v40, (__int64)v37);
        v37 = v41;
      } while (v41 != &v47_.v47);
    }
  }
  *(_QWORD*)(v3 + 24) =
      game_gameui_control_BattleInfoSkillList_Destroy_BattleInfoSkillList_18b6c40_ptr;
  *(_QWORD*)(v3 + 96) = GameData_21063e8;
  *a2 = v3 + 24;
  a2[1] = v3;
}

#pragma GCC visibility pop
