#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_204fdb0;
extern __int64* GameData_21319e8[10];
__int64 SkillPoolMenu_Unknown85(__int64 a1);
__int64 SkillPoolMenu_Unknown139(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_15df0e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
bool GameRoutine_157b780(_BOOL8 result, _DWORD*);
extern __int64 (*game_menu_anonymous_EquipMenuItem_SkillPool_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
bool game_menu_anonymous_SkillPoolMenu_AddItemList_closure_Invoke_15bc6a0(
    __int64 a1, int* a2);
__int64
game_menu_anonymous_SkillPoolMenu_AddItemList_closure_Invoke_15bccf0(__int64 a1,
                                                                     int* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void
game_gameui_Util_CollectArtsInfoList(PSEUDO_X8, __int64 result, __int64,
                                     __int64, char);
__int64 GameRoutine_157e0f0(_QWORD, _QWORD, _QWORD);
__int64 game_15df0e0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_20517f8[])();
extern __int64 (*GameData_2051ad0[])();
extern __int64 (*game_menu_anonymous_EquipMenuItem_Skill_vtable[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_21319b8[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 SkillPoolMenu_Unknown84(__int64 a1);
__int64 (***game_menu_anonymous_SkillPoolMenu_AddItemList(__int64 a1))();

__int64 SkillPoolMenu_Unknown84(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;

  LayoutAccessor_1560070((void*)(&v7), (__int64*)(a1 + 952),
                         (__int64)"L_MenuItem_Info");
  result = v8;
  if (v8 != 0) {
    v3 = *(unsigned __int8*)(a1 + 1080);
    v4 = std___1___shared_weak_count_lock(v8);
    if (v4 != 0) {
      v5 = v4;
      if (v7 != 0) {
        if (v3 == 2) {
          v6 = "MID_BtlMenu_WeaponCost";
        }
        else {
          v6 = nullptr;
        }
        GameRoutine_157e0f0(v7, "MID_Sys_Acquired", v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    result = v8;
    if (v8 != 0) {
      return std___1___shared_weak_count___release_weak(v8);
    }
  }
  return result;
}

__int64 SkillPoolMenu_Unknown85(__int64 a1)
{
  __int64 result;
  __int64 i;

  result = ui_LayoutAccessor_FindPane(a1 + 952, "SubInfoList");
  if (result != 0) {
    for (i = *(_QWORD*)(result + 40); i != result + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  return result;
}

__int64 (***game_menu_anonymous_SkillPoolMenu_AddItemList(__int64 a1))()
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 (***result)();
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 (**v18)();
  char v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (**v26)();
  __int64 (**v27)();
  __int64* v28;
  _QWORD v29[4];
  __int64 (***v30)();

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  v4 = v2;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 40) = -1;
  *(_QWORD*)v2 = GameData_21319b8[0] + 2;
  strcpy((char*)(v2 + 96), "\nEmpty");
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = *(unsigned __int8*)(a1 + 1080);
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  if (v6 != 2) {
    v10 = *(_QWORD*)(a1 + 1072);
    result = &v26;
    v26 = GameData_2051ad0;
    v27 = (__int64 (**)())a1;
    v28 = (__int64*)&v26;
    if ((*(_BYTE*)(v10 + 1152) & 2) != 0) {
      v11 = *(_QWORD*)(v10 + 1112);
      v12 = *(_QWORD*)(v10 + 1104);
      if ((int)((unsigned __int64)(v11 - v12) >> 2) < 1) {
        result = &v26;
      }
      else {
        v13 = 0;
        v14 = 0;
        v15 = GameData_212c880[0];
        v16 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) +
                                   8LL * (*(_DWORD*)(v12 + v13) & 0xFFF)) +
                        104LL) == 1) {
            if (v28 == nullptr) {
              GameRoutine_60a310(0, v3);
            }
            (*(void (**)(__int64*, __int64))(*v28 + 48))(v28, v12 + v13);
            v16 = *v15;
            v11 = *(_QWORD*)(v10 + 1112);
            v12 = *(_QWORD*)(v10 + 1104);
          }
          ++v14;
          v13 += 4;
        } while (v14 < (int)((unsigned __int64)(v11 - v12) >> 2));
        result = (__int64 (***)())v28;
        if (v28 != (__int64*)&v26) {
          if (v28 == nullptr) {
            return result;
          }
          v25 = 5;
          return (__int64 (***)())((__int64 (*)(__int64 (***)(), __int64))(
              *result)[v25])(result, v3);
        }
      }
    }
    v25 = 4;
    return (__int64 (***)())(
        (__int64 (*)(__int64 (***)(), __int64))(*result)[v25])(result, v3);
  }
  v7 = *(_QWORD*)(a1 + 1072);
  v29[0] = GameData_20517f8;
  v29[1] = a1;
  v30 = (__int64 (***)())v29;
  game_gameui_Util_CollectArtsInfoList((void*)((__int64*)&v26), v7, 1,
                                       (__int64)v29, 0);
  result = v30;
  if (v30 == v29) {
    v9 = 4;
    goto LABEL_15;
  }
  if (v30 != nullptr) {
    v9 = 5;
  LABEL_15:
    result = (__int64 (***)())(*v30)[v9]();
  }
  v17 = v26;
  v18 = v27;
  if (v26 != v27) {
    do {
      v22 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
      v23 = *(_QWORD*)(a1 + 1056);
      if (v23 != 0) {
        v23 = __dynamic_cast(v23, GameData_21319e8[0], &GameData_204fdb0, 0);
      }
      v19 = *(_BYTE*)(a1 + 1080);
      v20 = *(_QWORD*)(a1 + 1072);
      *(_WORD*)(v22 + 16) = 0;
      *(_QWORD*)(v22 + 48) = 0;
      *(_QWORD*)(v22 + 56) = 0;
      *(_QWORD*)(v22 + 64) = 0;
      *(_QWORD*)(v22 + 72) = 0;
      *(_WORD*)(v22 + 80) = 257;
      *(_BYTE*)(v22 + 82) = 1;
      *(_DWORD*)(v22 + 40) = -1;
      *(_QWORD*)v22 = game_menu_anonymous_EquipMenuItem_Skill_vtable;
      *(_QWORD*)(v22 + 8) = 0;
      *(_QWORD*)(v22 + 88) = v20;
      *(_QWORD*)(v22 + 96) = v23;
      *(_BYTE*)(v22 + 104) = v19;
      v21 = *(_DWORD*)v17;
      *(_QWORD*)(v22 + 120) = 0;
      *(_DWORD*)(v22 + 108) = v21;
      *(_DWORD*)(v22 + 112) = game_15df0e0(v20, v17);
      *(_QWORD*)v22 = game_menu_anonymous_EquipMenuItem_SkillPool_vtable;
      result = (__int64 (***)())BasicMenuCursor_16e0c00(a1, v22);
      ++v17;
    } while (v17 != v18);
    v17 = v26;
  }
  if (v17 != nullptr) {
    v27 = v17;
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    return (__int64 (***)())nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  return result;
}

__int64 SkillPoolMenu_Unknown139(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                 &GameData_204fdb0, 0) +
                  304);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 240LL))(v1, 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v1 + 248LL))(v1, 1);
}

bool game_menu_anonymous_SkillPoolMenu_AddItemList_closure_Invoke_15bc6a0(
    __int64 a1, int* a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1072LL);
  v4 = *a2;
  return GameRoutine_157b780(v2, &v4);
}

__int64

game_menu_anonymous_SkillPoolMenu_AddItemList_closure_Invoke_15bccf0(__int64 a1,
                                                                     int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0);
  v5 = *(_QWORD*)(v2 + 1056);
  if (v5 != 0) {
    v5 = __dynamic_cast(v5, GameData_21319e8[0], &GameData_204fdb0, 0);
  }
  v6 = *(_BYTE*)(v2 + 1080);
  v7 = *(_QWORD*)(v2 + 1072);
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 40) = -1;
  *(_BYTE*)(v4 + 104) = v6;
  v8 = *a2;
  *(_QWORD*)(v4 + 88) = v7;
  *(_QWORD*)(v4 + 96) = v5;
  *(_DWORD*)(v4 + 108) = v8;
  *(_DWORD*)(v4 + 112) = GameRoutine_15df0e0(v7, a2);
  *(_QWORD*)v4 = game_menu_anonymous_EquipMenuItem_SkillPool_vtable;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
