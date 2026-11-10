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

__attribute__((swiftcall)) void BattleInfoSkillList_18b66c0(PSEUDO_X8 x8_,
                                                            __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64* v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;

  v3 = LayoutEx_579160(1088, 8);
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)v3 = GameData_2106230;
  GameRoutine_18b3e30();
  *(_BYTE*)(v3 + 1057) = 0;
  *(_QWORD*)(v3 + 1064) = 0;
  *(_QWORD*)(v3 + 1072) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 24) = game_gameui_control_BattleInfoSkillList_vtable;
  *(_QWORD*)(v3 + 96) = GameData_2106208;
  v4 = Pane_58fac0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 24LL), "BattleSide");
  if (v4 != 0 || (v4 = GameRoutine_576740(a1, "BattleSide")) != 0) {
    *(_BYTE*)(v3 + 1057) = *(_DWORD*)(v4 + *(unsigned int*)(v4 + 4)) != 0;
  }
  result = (*(__int64 (**)(_QWORD, const char*, __int64))(
      **(_QWORD**)(*(_QWORD*)(v3 + 32) + 24LL) + 120LL))(
      *(_QWORD*)(*(_QWORD*)(v3 + 32) + 24LL), "A_Right", 1);
  v6 = *(_QWORD*)(v3 + 32);
  v49 = 0;
  v47 = &v47;
  v48 = &v47;
  v7 = *(_QWORD*)(v6 + 80);
  v8 = v6 + 72;
  if (v7 != v6 + 72) {
    v9 = result;
    v44 = (__int64*)(v3 + 1064);
    v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      GameRoutine_15abc70((void*)(&v45), *(_QWORD*)(v3 + 104), v7 - 216);
      result = v46;
      if (v46 != 0) {
        v11 = std___1___shared_weak_count_lock(v46);
        v12 = v45;
        result = v46;
        if (v11 != 0) {
          v13 = v45;
        }
        else {
          v13 = nullptr;
        }
        if (v46 != 0) {
          result = std___1___shared_weak_count___release_weak(v46);
        }
        if (v13 != nullptr) {
          if (*(_BYTE*)(v3 + 1057) == 1) {
            Pane_58df60(*(_QWORD*)(v7 - 192), v7 - 216);
            Pane_58dee0(v9, v7 - 216);
            v14 = v12[1];
            if (v14 != 0) {
              v15 = *(_QWORD*)(v14 + 24) + 176LL;
              v16 = strlen(v15);
              v12[2] = v15;
              v12[3] = v16;
              ui_ILayoutControl_UpdatePath(v12);
            }
            v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 32, 16, 0);
            v17[2] = v13;
            v17[3] = v11;
            if (v11 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                        memory_order_relaxed);
            }
            v18 = v48;
            *v17 = &v47;
            v17[1] = v18;
            *v18 = v17;
            v48 = v17;
          }
          else {
            v19 = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 32, 16, 0);
            v19[2] = v13;
            v19[3] = v11;
            if (v11 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                        memory_order_relaxed);
            }
            v20 = v47;
            v47 = v19;
            *v19 = v20;
            v19[1] = &v47;
            v20[1] = v19;
          }
          ++v49;
          result = (*(__int64 (**)(_QWORD*, _QWORD))(*v12 + 40LL))(v12, 0);
        }
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = std___1___shared_weak_count___release_weak(v11);
        }
      }
      v7 = *(_QWORD*)(v7 + 8);
    } while (v7 != v8);
    v21 = v48;
    if (v48 != &v47) {
      v22 = *(_QWORD**)(v3 + 1072);
      do {
        v23 = *(_QWORD*)(v3 + 1080);
        if ((unsigned __int64)v22 >= v23) {
          v25 = *v44;
          v26 = (__int64)v22 - *v44;
          v27 = v26 >> 4;
          v28 = (v26 >> 4) + 1;
          if (v28 >> 60 != 0) {
            GameRoutine_18b6f90();
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
            GameRoutine_60a210(result);
          }
          v31 = fw_memory_HeapManager_Allocate(*v10, 16 * v30, 16, 0);
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
          v34 = &v32[-2 * v27];
          v35 = v31 + 16 * v30;
          v22 = v32 + 2;
          result = memcpy(v34, v25, v26);
          *(_QWORD*)(v3 + 1064) = v34;
          *(_QWORD*)(v3 + 1072) = v22;
          *(_QWORD*)(v3 + 1080) = v35;
          if (v25 != 0) {
            v36 = 128;
            if (*(_QWORD*)(*v10 + 200LL) == 0) {
              v36 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v10 + v36);
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
      } while (v21 != &v47);
    }
  }
  if (v49 != 0) {
    v37 = v48;
    v38 = (_QWORD*)v47[1];
    *(_QWORD*)(*v48 + 8LL) = v38;
    *v38 = *v37;
    v49 = 0;
    if (v37 != &v47) {
      v39 = fw_memory_g_heap_manager_ptr;
      do {
        v41 = (_QWORD*)v37[1];
        v42 = v37[3];
        if (v42 != 0) {
          std___1___shared_weak_count___release_weak(v42);
        }
        if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v39 + v40);
        v37 = v41;
      } while (v41 != &v47);
    }
  }
  *(_QWORD*)(v3 + 24) =
      game_gameui_control_BattleInfoSkillList_Destroy_BattleInfoSkillList_18b6c40_ptr;
  *(_QWORD*)(v3 + 96) = GameData_21063e8;
  *a2 = v3 + 24;
  a2[1] = v3;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
