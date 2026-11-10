#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_EquipMenuItem_AnimalPool_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AnimalPoolMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, int a5, int a6);
__int64 FloatingHelp_18aee60(_QWORD, _QWORD);
__int64 GameRoutine_1862240(_QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_1fae980[6];
extern __int64 (*anonymous_EquipMenuItem_PoolEmpty_vtable[])();
extern __int64 GameData_21c99a8;
extern __int64 GameData_21f1e08;
extern __int64 game_GameModeData_instance_;
extern int game_g_shared_system_skills;
void __attribute__((noreturn)) GameRoutine_1793290(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 AnimalPoolMenu_18620f0(__int64 result);
__int64 AnimalPoolMenu_18621a0(__int64 a1);
bool AnimalPoolMenu_1862950(__int64 a1, _QWORD* a2);
__int64 AnimalPoolMenu_18629b0(__int64* a1);
__int64 game_menu_AnimalPoolMenu_UpdateEquipList_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2);
bool game_menu_AnimalPoolMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2);
__int64 game_menu_AnimalPoolMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                              _QWORD* a2,
                                                              _QWORD* a3);
__int64 game_menu_AnimalPoolMenu_GetSumReliance_lambda0_Invoke(__int64 result,
                                                               __int64* a2);

__int64 AnimalPoolMenu_18620f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v2 = result + 848;
    v3 = result;
    v4 = GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    FloatingHelp_18aee60(v4, v2);
    GameRoutine_18ae960(v1, 1);
    result = *(_QWORD*)(v1 + 240);
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    *(_QWORD*)(v1 + 160) = v3;
    *(_BYTE*)(v1 + 257) = 0;
    *(_DWORD*)(v1 + 248) = -1;
    v5 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

__int64 AnimalPoolMenu_18621a0(__int64 a1)
{
  int v1;
  __int64 v2;
  const char* v4;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    LOBYTE(v1) = *(_BYTE*)(v2 + 4LL * v1);
  }
  if ((unsigned int)(unsigned __int8)v1 - 1 > 4) {
    v4 = "MID_Menu_All";
  }
  else {
    v4 = (const char*)GameData_1fae980[(unsigned __int8)v1];
  }
  LayoutAccessor_1562060(a1 + 952, "T_Type", v4);
  GameRoutine_1862240(a1, *(_QWORD*)(a1 + 1064));
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1216LL))(a1);
}

bool AnimalPoolMenu_1862950(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;
  int v16;

  if (a2 == nullptr) {
    return false;
  }
  v3 = GameRoutine_820d50(6);
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
      return false;
    }
  }
  if ((GameRoutine_822320(1) & 1) == 0) {
    return false;
  }
  v5 = a2[218];
  v6 = a2[219] - v5;
  v16 = game_g_shared_system_skills & 0xFFF;
  v7 =
      ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) & 0x7F;
  if (v7 + 1 <= v6 >> 2 &&
      ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >>
        game_g_shared_system_skills) &
       1) != 0 &&
      (game_HasActiveSkill_843420(&v16, a2 + 218) & 1) != 0) {
    v8 = a2[55];
    v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
    if (((1 << v9) & 0xF1) != 0) {
      return false;
    }
  }
  v10 = a2[55];
  if (v10 == 0) {
    return false;
  }
  v11 = *(unsigned __int8*)(v10 + 16);
  v12 = v11 > 7;
  v13 = (1 << v11) & 0x91;
  return !v12 && v13 != 0 && *(_BYTE*)(a2[50] + 96LL) == 2;
}

__int64 AnimalPoolMenu_18629b0(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  v3 = a1[133];
  v4 = (_QWORD*)v2;
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 40) = -1;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = v3;
  v5 = a1[43];
  *v4 = anonymous_EquipMenuItem_PoolEmpty_vtable;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = *a1;
  v4[1] = a1;
  a1[43] = (__int64)v4;
  return (*(__int64 (**)(__int64*))(v6 + 1208))(a1);
}

__int64 AnimalPoolMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, int a5, int a6)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_DWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 96) = a3;
  *(_DWORD*)(result + 104) = a6;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_menu_EquipMenuItem_AnimalPool_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 game_menu_AnimalPoolMenu_UpdateEquipList_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1152LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

bool game_menu_AnimalPoolMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  int v2;
  __int64 v3;

  v2 = **(unsigned __int8**)(a1 + 8);
  v3 = *(unsigned __int8*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v2 == 6) {
    return (_DWORD)v3 != 0;
  }
  else {
    return v2 ==
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                                          8 * v3) +
                               32LL);
  }
}

__int64 game_menu_AnimalPoolMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                              _QWORD* a2,
                                                              _QWORD* a3)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      **(_QWORD**)(a1 + 8) + 1200LL))(*(_QWORD*)(a1 + 8), *a2, *a3);
}

__int64 game_menu_AnimalPoolMenu_GetSumReliance_lambda0_Invoke(__int64 result,
                                                               __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  bool v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v2 = *(__int64**)(result + 16);
  v3 = *a2;
  if (*a2 == 0) {
    goto LABEL_13;
  }
  v4 = *(_QWORD*)(result + 8);
  v7 = *(_QWORD*)(v4 + 24);
  v5 = v4 + 24;
  v6 = v7;
  if (v7 == 0) {
    goto LABEL_13;
  }
  v8 = *(unsigned __int8*)(v3 + 48);
  v9 = v5;
  do {
    v10 = *(unsigned __int8*)(v6 + 26);
    v11 = v10 >= v8;
    if (v10 >= v8) {
      v12 = 0;
    }
    else {
      v12 = 8;
    }
    if (v11) {
      v9 = v6;
    }
    v6 = *(_QWORD*)(v6 + v12);
  } while (v6 != 0);
  if (v9 != v5 && v8 >= *(unsigned __int8*)(v9 + 26)) {
    v13 = *(_WORD*)(v9 + 28) & 0xFFF;
  }
  else {
  LABEL_13:
    v13 = 0;
  }
  v15 = v2[1];
  v14 = v2[2];
  if (v15 >= v14) {
    v17 = *v2;
    v18 = v15 - *v2;
    v19 = (v18 >> 4) + 1;
    if (v19 >> 60 != 0) {
      GameRoutine_1793290();
    }
    v20 = v14 - v17;
    v21 = fw_memory_g_heap_manager_ptr;
    if (v20 >> 3 > v19) {
      v19 = v20 >> 3;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF0LL) {
      v22 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v22 = v19;
    }
    if (v22 != 0) {
      if (v22 >> 60 != 0) {
        GameRoutine_60a210(result);
      }
      v23 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v22, 16, 0);
    }
    else {
      v23 = 0;
    }
    v24 = v23 + v18;
    v25 = v23 + 16 * v22;
    *(_QWORD*)v24 = v3;
    v26 = v23 + v18 - 16 * (v18 >> 4);
    *(_DWORD*)(v24 + 8) = v13;
    v16 = v23 + v18 + 16;
    result = memcpy(v26, v17, v18);
    *v2 = v26;
    v2[1] = v16;
    v2[2] = v25;
    if (v17 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27);
    }
  }
  else {
    *(_QWORD*)v15 = v3;
    *(_DWORD*)(v15 + 8) = v13;
    v16 = v15 + 16;
  }
  v2[1] = v16;
  return result;
}

#pragma GCC visibility pop
