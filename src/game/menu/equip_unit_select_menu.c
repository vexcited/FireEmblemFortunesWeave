#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b780(_QWORD, _QWORD);
__int64 game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda1_Invoke(__int64 a1,
                                                                     int* a2);
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 EquipUnitSelectMenu_16cdaa0(__int64*, __int64*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
char* game_util_Format(const char*, ...);
extern __int64 (*ui_Event_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
void PageTab_16e6880(__int64, int, unsigned int, unsigned int);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 EquipUnitSelectMenu_16cd870(__int64* a1);
_QWORD*
game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda0_Invoke(_QWORD* result,
                                                             int* a2);

__int64 EquipUnitSelectMenu_16cd870(__int64* a1)
{
  int v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v18_;

  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 119), "L_Num", 0);
  v2 = (*(__int64 (**)(__int64*))(*a1 + 1208))(a1);
  v3 = *a1;
  *((_DWORD*)a1 + 338) = v2;
  *((_DWORD*)a1 + 339) = v2;
  v4 = (*(__int64 (**)(__int64*))(v3 + 1200))(a1);
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 106),
                                   "L_UnitInfoDetail/A_KeyHelp", v4 & 1);
  v5 = *a1;
  v6 = *((unsigned int*)a1 + 338);
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v18 = 0;
  (*(void (**)(__int64*, __int64*, __int64))(v5 + 1216))(a1, &v18_.v18, v6);
  EquipUnitSelectMenu_16cdaa0(a1, &v18_.v18);
  if (v18_.v18 != 0) {
    v18_.v19 = v18_.v18;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v18_.v18);
  }
  result = (*(__int64 (**)(__int64*))(*a1 + 1192))(a1);
  if ((result & 1) == 0) {
    a1[150] = 0;
    *((_DWORD*)a1 + 302) = 0;
    LayoutAccessor_1560070((void*)(&v18_.v18), a1 + 106,
                           "L_UnitInfoDetail/L_PageTab");
    if (v18_.v19 != 0) {
      v9 = std___1___shared_weak_count_lock(v18_.v19);
      v10 = v9;
      if (v9 != 0) {
        v11 = v18_.v18;
        v12 = 0;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
      LABEL_12:
        v13 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
        if (v10 != 0) {
          v14 = v13;
          v15 = std___1___shared_weak_count_lock(v10);
          if (v15 != 0) {
            v16 = v15;
            if (v11 != 0) {
              *((_DWORD*)a1 + 310) = 1;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                        memory_order_relaxed);
              a1[162] = v11;
              v17 = a1[163];
              a1[163] = v10;
              if (v17 != 0) {
                std___1___shared_weak_count___release_weak(v17);
              }
              PageTab_16e6880((__int64)(a1 + 150), v14, 4u, 5u);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              std___1___shared_weak_count___release_weak(v16);
            }
          }
          std___1___shared_weak_count___release_weak(v10);
        }
        if ((v12 & 1) == 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
        result = v18_.v19;
        if (v18_.v19 != 0) {
          return std___1___shared_weak_count___release_weak(v18_.v19);
        }
        return result;
      }
      v11 = 0;
    }
    else {
      v11 = 0;
      v10 = 0;
    }
    v12 = 1;
    goto LABEL_12;
  }
  return result;
}

_QWORD*

game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda0_Invoke(_QWORD* result,
                                                             int* a2)
{
  _DWORD* v2;
  __int64* v3;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  const char* v10[2];
  struct {
    __int64 (**v11)();
    _QWORD* v12;
    __int64 v13;
  } v11_;

  if ((signed __int32)*(_DWORD*)result[1] <
      (signed __int32)*(_DWORD*)result[2]) {
    v3 = (__int64*)result[3];
    v2 = (_DWORD*)result[4];
    v5 = result;
    v6 = (*v2)++;
    v10[0] = game_util_Format("L_Skill%02d", v6);
    v10[1] = (const char*)strlen(v10[0]);
    GameRoutine_15d4100((void*)((__int64*)&v11_.v11), v3, v10);
    result = v11_.v12;
    if (v11_.v12 != nullptr) {
      v7 = std___1___shared_weak_count_lock((__int64)v11_.v12);
      v8 = (__int64)v11_.v11;
      result = v11_.v12;
      if (v11_.v12 != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(
            (__int64)v11_.v12);
      }
      if (v7 != 0 && v8 != 0) {
        MenuItemSkill_1899480(v8, 1u, 0, 0);
        v9 = *a2;
        if ((*(_BYTE*)(v8 + 1080) & 1) == 0) {
          *(_BYTE*)(v8 + 1080) = 1;
        }
        *(_DWORD*)(v8 + 1076) = v9;
        *(_QWORD*)(v8 + 1096) = *(_QWORD*)v5[5];
        v11_.v13 = 0;
        v11_.v11 = ui_Event_vtable;
        LODWORD(v11_.v12) = 20;
        result = X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                    __int64 (***)(void)))(
                *(_QWORD*)(v8 + 72) + 16LL))((void*)v10, v8 + 72, &v11_.v11));
        ++*(_DWORD*)v5[1];
      }
      else if (v7 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return (_QWORD*)std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

__int64 game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda1_Invoke(__int64 a1,
                                                                     int* a2)
{
  __int64 v2;
  int v4;

  v2 = **(_QWORD**)(a1 + 8);
  v4 = *a2;
  return GameRoutine_157b780(v2, &v4) & 1;
}

#pragma GCC visibility pop
