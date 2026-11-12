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
__attribute__((swiftcall)) void BattleInfoSkillList_18b66c0_alt1(
    PSEUDO_X8 x8_, __int64 a1) __asm__("BattleInfoSkillList_18b66c0");
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
__attribute__((swiftcall)) void
    GameRoutine_15abc70_alt2(PSEUDO_X8) __asm__("GameRoutine_15abc70");
const char* GameRoutine_18b3e30_alt2(__int64, __int64, __int64,
                                     __int64) __asm__("GameRoutine_18b3e30");
__attribute__((swiftcall)) void
BattleInfoSkillList_18b66c0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void

BattleInfoSkillList_18b66c0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  const char* v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  signed __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64* v48;
  struct {
    _QWORD* v49;
    __int64 v50;
  } v49_;
  struct {
    _QWORD* v51;
    _QWORD* v52;
    __int64 v53;
  } v51_;

  v7 = LayoutEx_579160_alt1(1088, 8);
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)v7 = GameData_2106230;
  GameRoutine_18b3e30_alt2(v7 + 24, a1, a2, a3);
  *(_BYTE*)(v7 + 1057) = 0;
  *(_QWORD*)(v7 + 1064) = 0;
  *(_QWORD*)(v7 + 1072) = 0;
  *(_QWORD*)(v7 + 1080) = 0;
  *(_QWORD*)(v7 + 24) = game_gameui_control_BattleInfoSkillList_vtable;
  *(_QWORD*)(v7 + 96) = GameData_2106208;
  v8 = Pane_58fac0_alt1(*(_QWORD*)(*(_QWORD*)(v7 + 32) + 24LL), "BattleSide");
  if (v8 != nullptr ||
      (v8 = GameRoutine_576740_alt1(a1, "BattleSide")) != nullptr) {
    *(_BYTE*)(v7 + 1057) = *(_DWORD*)&v8[*((unsigned int*)v8 + 1)] != 0;
  }
  v9 = (*(__int64 (**)(_QWORD, const char*, __int64))(
      **(_QWORD**)(*(_QWORD*)(v7 + 32) + 24LL) + 120LL))(
      *(_QWORD*)(*(_QWORD*)(v7 + 32) + 24LL), "A_Right", 1);
  v10 = *(_QWORD*)(v7 + 32);
  v51_.v53 = 0;
  v51_.v51 = &v51_.v51;
  v51_.v52 = &v51_.v51;
  v11 = *(_QWORD*)(v10 + 80);
  v12 = v10 + 72;
  if (v11 != v10 + 72) {
    v13 = v9;
    v48 = (__int64*)(v7 + 1064);
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      GameRoutine_15abc70_alt2((void*)((__int64*)&v49_.v49));
      if (v49_.v50 != 0) {
        v15 = std___1___shared_weak_count_lock_alt1(v49_.v50);
        v16 = v49_.v49;
        if (v15 != 0) {
          v17 = (__int64)v49_.v49;
        }
        else {
          v17 = 0;
        }
        if (v49_.v50 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v49_.v50);
        }
        if (v17 != 0) {
          if (*(_BYTE*)(v7 + 1057) == 1) {
            Pane_58df60_alt1(*(_QWORD*)(v11 - 192), (_QWORD*)(v11 - 216));
            Pane_58dee0_alt1(v13, v11 - 216);
            v18 = v16[1];
            if (v18 != 0) {
              v19 = (const char*)(*(_QWORD*)(v18 + 24) + 176LL);
              v20 = strlen_alt1(v19);
              v16[2] = v19;
              v16[3] = v20;
              ui_ILayoutControl_UpdatePath_alt1((__int64)v16);
            }
            v21 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v14, 32, 16, 0);
            v21[2] = v17;
            v21[3] = v15;
            if (v15 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                        memory_order_relaxed);
            }
            v22 = v51_.v52;
            *v21 = &v51_.v51;
            v21[1] = v22;
            *v22 = v21;
            v51_.v52 = v21;
          }
          else {
            v23 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v14, 32, 16, 0);
            v23[2] = v17;
            v23[3] = v15;
            if (v15 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                        memory_order_relaxed);
            }
            v24 = v51_.v51;
            v51_.v51 = v23;
            *v23 = v24;
            v23[1] = &v51_.v51;
            v24[1] = v23;
          }
          ++v51_.v53;
          (*(void (**)(_QWORD*, _QWORD))(*v16 + 40LL))(v16, 0);
        }
        if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak_alt1(v15);
        }
      }
      v11 = *(_QWORD*)(v11 + 8);
    } while (v11 != v12);
    v25 = v51_.v52;
    if (v51_.v52 != &v51_.v51) {
      v26 = *(_QWORD**)(v7 + 1072);
      do {
        v27 = *(_QWORD*)(v7 + 1080);
        if ((unsigned __int64)v26 >= v27) {
          v29 = *v48;
          v30 = (signed __int64)v26 - *v48;
          v31 = v30 >> 4;
          v32 = (v30 >> 4) + 1;
          if (v32 >> 60 != 0) {
            GameRoutine_18b6f90_alt1();
          }
          v33 = v27 - v29;
          if (v33 >> 3 > v32) {
            v32 = v33 >> 3;
          }
          if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF0LL) {
            v34 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v34 = v32;
          }
          if (v34 >> 60 != 0) {
            GameRoutine_60a210_alt1();
          }
          v35 = fw_memory_HeapManager_Allocate_alt1(*v14, 16 * v34, 16, 0);
          v36 = (_QWORD*)(v35 + v30);
          *v36 = v25[2];
          v37 = v25[3];
          v36[1] = v37;
          if (v37 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                                      memory_order_relaxed);
            v29 = *(_QWORD*)(v7 + 1064);
            v30 = *(_QWORD*)(v7 + 1072) - v29;
            v31 = v30 >> 4;
          }
          v38 = (__int64)&v36[-2 * v31];
          v39 = v35 + 16 * v34;
          v26 = v36 + 2;
          memcpy_alt1(v38, v29, v30);
          *(_QWORD*)(v7 + 1064) = v38;
          *(_QWORD*)(v7 + 1072) = v26;
          *(_QWORD*)(v7 + 1080) = v39;
          if (v29 != 0) {
            v40 = 128;
            if (*(_QWORD*)(*v14 + 200) == 0) {
              v40 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v14 + v40, v29);
          }
        }
        else {
          *v26 = v25[2];
          v28 = v25[3];
          v26[1] = v28;
          if (v28 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                      memory_order_relaxed);
          }
          v26 += 2;
        }
        *(_QWORD*)(v7 + 1072) = v26;
        v25 = (_QWORD*)v25[1];
      } while (v25 != &v51_.v51);
    }
  }
  if (v51_.v53 != 0) {
    v41 = v51_.v52;
    v42 = (_QWORD*)v51_.v51[1];
    *(_QWORD*)(*v51_.v52 + 8LL) = v42;
    *v42 = *v41;
    v51_.v53 = 0;
    if (v41 != &v51_.v51) {
      v43 = fw_memory_g_heap_manager_ptr;
      do {
        v45 = (_QWORD*)v41[1];
        v46 = v41[3];
        if (v46 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v46);
        }
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v43 + v44, (__int64)v41);
        v41 = v45;
      } while (v45 != &v51_.v51);
    }
  }
  *(_QWORD*)(v7 + 24) =
      game_gameui_control_BattleInfoSkillList_Destroy_BattleInfoSkillList_18b6c40_ptr;
  *(_QWORD*)(v7 + 96) = GameData_21063e8;
  *a4 = v7 + 24;
  a4[1] = v7;
}

#pragma GCC visibility pop
