#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gmap_TroopUnitList_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* TroopUnitList_Destructor(_QWORD* result);
__int64 TroopUnitList_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6c3470(_QWORD, _QWORD);
__int64 GameRoutine_6d7010(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
char* GameRoutine_9964e0(char**, __int64);
extern __int64 (*game_gmap_TroopUnit_vtable[])();
__int64 game_gmap_TroopUnitList_CreateReinforce_lambda0_Invoke(__int64 a1,
                                                               __int64* a2);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_995da0(_QWORD*, __int64, int);
__int64 Impl_13261c0(__int64);
__int64 Troop_133e6e0(__int64);
__int64 Unit_6ca760(__int64, _WORD*);
__int64 Unit_6cb080(__int64, _WORD*);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__n128 game_ae25e0(__int64, _DWORD*, __int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1fb2950[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21f1618;
extern __int64 game_GameModeData_instance_;
extern int GameData_21d9724;
bool TroopUnitList_995fc0(__int64 a1);
__int64 game_gmap_TroopUnitList_CreateReinforce(__int64 result, __int64 a2,
                                                __int64 a3);

_QWORD* TroopUnitList_Destructor(_QWORD* result)
{
  __int64 (***v1)(_QWORD);
  __int64 (***v2)(_QWORD);
  _QWORD* v3;
  __int64 (***v4)(_QWORD);
  bool v5;
  __int64 v6;
  __int64 v7;

  v1 = (__int64 (***)(_QWORD))result[1];
  *result = game_gmap_TroopUnitList_vtable;
  if (v1 != nullptr) {
    v2 = (__int64 (***)(_QWORD))result[2];
    v3 = result;
    if (v1 == v2) {
      goto LABEL_7;
    }
    v4 = v2 - 278;
    do {
      result = (_QWORD*)(**v4)(v4);
      v5 = v4 == v1;
      v4 -= 278;
    } while (!v5);
    v6 = v3[1];
    v3[2] = v1;
    if (v6 != 0) {
    LABEL_7:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  return result;
}

__int64 TroopUnitList_DeletingDestructor(_QWORD* a1)
{
  void (***v1)(_QWORD);
  __int64 v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (void (***)(_QWORD))a1[1];
  *a1 = game_gmap_TroopUnitList_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    v4 = (void (***)(_QWORD))a1[2];
    if (v1 == v4) {
      goto LABEL_7;
    }
    v5 = v4 - 278;
    do {
      (**v5)(v5);
      v6 = v5 == v1;
      v5 -= 278;
    } while (!v6);
    v7 = a1[1];
    a1[2] = v1;
    if (v7 != 0) {
    LABEL_7:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

bool TroopUnitList_995fc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v10;
  __int64 v11;
  int v12;
  int v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 8);
  v1 = *(_QWORD*)(a1 + 16);
  if (v1 != v2) {
    v3 = 416;
    v4 = 1;
    v6 = *(_QWORD*)(a1 + 8);
    do {
      v10 = *(_DWORD*)(v6 + v3);
      if ((v10 & 0x200000) != 0) {
        *(_BYTE*)(v6 + v3 + 85) &= 0x1Fu;
        v6 = *(_QWORD*)(a1 + 8);
        v10 = *(_DWORD*)(v6 + v3);
      }
      v7 = v6 + v3;
      v3 += 2224;
      *(_BYTE*)(v7 + 85) = v4;
      *(_DWORD*)v7 = v10 | 0x200000;
      v6 = *(_QWORD*)(a1 + 8);
      v8 = *(_QWORD*)(a1 + 16);
    } while (0x3AEF6CA970586723LL * ((v8 - v6) >> 4) > v4++);
    if (v6 != v8) {
      do {
        v15 = GameData_21d9724 & 0xFFF;
        Unit_6cb080(v6, &v15);
        v6 += 2224;
      } while (v6 != v8);
      v6 = *(_QWORD*)(a1 + 8);
      v8 = *(_QWORD*)(a1 + 16);
    }
    if (v6 != v8) {
      v11 = v6;
      while ((*(_BYTE*)(v11 + 416) & 8) != 0) {
        v11 += 2224;
        if (v11 == v8) {
          goto LABEL_17;
        }
      }
      v14 = *(int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr) &
            0xFFF;
      Unit_6ca760(v11, &v14);
      v6 = *(_QWORD*)(a1 + 8);
      v8 = *(_QWORD*)(a1 + 16);
    }
  LABEL_17:
    while (v6 != v8) {
      v12 = *(_DWORD*)(v6 + 416);
      if ((v12 & 0x10000000) == 0) {
        *(_DWORD*)(v6 + 416) = v12 | 0x10000000;
        game_6c51e0(v6);
        GameRoutine_6c6da0(v6);
        game_6c6ec0(v6);
        *(_DWORD*)(v6 + 416) &= ~0x10000000u;
      }
      v6 += 2224;
    }
  }
  return v1 != v2;
}

__int64 game_gmap_TroopUnitList_CreateReinforce_lambda0_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  _QWORD* v6;
  char* v7;
  _QWORD v9[278];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  GameRoutine_6c2b50(v9);
  v5 = *(unsigned int*)(a1 + 16);
  v9[0] = game_gmap_TroopUnit_vtable;
  GameRoutine_6d7010(v9, v2, v5);
  v6 = *(_QWORD**)(v3 + 16);
  if ((unsigned __int64)v6 >= *(_QWORD*)(v3 + 24)) {
    v7 = GameRoutine_9964e0((char**)(v3 + 8), (__int64)v9);
  }
  else {
    GameRoutine_6c3470(*(_QWORD*)(v3 + 16), v9);
    *v6 = game_gmap_TroopUnit_vtable;
    v7 = (char*)(v6 + 278);
  }
  *(_QWORD*)(v3 + 16) = v7;
  return game_Unit_Destroy_Unit(v9);
}

__int64 game_gmap_TroopUnitList_CreateReinforce(__int64 result, __int64 a2,
                                                __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int128 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 (***v16)(_QWORD);
  __int64 (***v17)(_QWORD);
  __int64 (***v18)(_QWORD);
  long double v19;
  __int64 v20;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  if (a3 == 0) {
    return result;
  }
  *(_QWORD*)(result + 96) = a3;
  *(_QWORD*)result = a2;
  v4 = result;
  *(_DWORD*)(result + 48) = *(_DWORD*)(a2 + 32);
  *(_DWORD*)(result + 52) = *(_DWORD*)(a2 + 36);
  v5 = *(_OWORD*)(result + 48);
  v6 = game_GameModeData_instance_;
  *((_QWORD*)&v5 + 1) = *(unsigned int*)(a2 + 40);
  *(_OWORD*)(result + 48) = v5;
  if (v6 != 0) {
    v7 = *(_DWORD*)(v6 + 68) + 1;
  }
  else {
    v7 = 1;
  }
  result = Impl_13261c0(a2);
  if ((unsigned __int8)result != 4) {
    v8 = *(_QWORD*)(a2 + 136);
    if (v8 != 0 && game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
      v9 = *(unsigned __int8*)(v8 + 163);
      if (*(_BYTE*)(v8 + 163) != 0) {
        v10 = *(unsigned __int8*)(v8 + 162);
        if (v7 < v9) {
          v9 = v7;
        }
        if (v7 >= v10) {
          v7 = v9;
        }
        else {
          v7 = v10;
        }
      }
    }
  }
  v11 = *(_QWORD*)(v4 + 576);
  v12 = *(_QWORD*)(v4 + 568);
  *(_DWORD*)(v4 + 80) = v7;
  if (1884841763 * (unsigned int)((unsigned __int64)(v11 - v12) >> 4) == 0) {
    result = GameRoutine_995da0((_QWORD*)(v4 + 560), *(_QWORD*)(v4 + 96), v7);
    v14 = *(_QWORD*)(v4 + 96);
    v15 = *(unsigned int*)(v4 + 80);
    v16 = *(__int64 (****)(_QWORD))(v4 + 616);
    v17 = *(__int64 (****)(_QWORD))(v4 + 608);
    if (v17 != v16) {
      v18 = v16 - 278;
      do {
        result = (**v18)(v18);
        v13 = v18 == v17;
        v18 -= 278;
      } while (!v13);
    }
    *(_QWORD*)(v4 + 616) = v17;
    if (v14 != 0 && (*(_QWORD*)(v14 + 176) | *(_QWORD*)(v14 + 192)) != 0) {
      v21_.v21[2] = v15;
      v21_.v21[0] = GameData_1fb2950;
      v21_.v21[1] = v4 + 600;
      v21_.v22 = v21_.v21;
      *(__n128*)&v19 =
          game_ae25e0(v14, (_DWORD*)game_map_MapRandom_instance__ptr[0] + 4,
                      (__int64)v21_.v21);
      result = (__int64)v21_.v22;
      if (v21_.v22 == v21_.v21) {
        v20 = 32;
        goto LABEL_32;
      }
      if (v21_.v22 != nullptr) {
        v20 = 40;
      LABEL_32:
        result = (*(__int64 (**)(void*))(*v21_.v22 + v20))(v21_.v22);
      }
    }
  }
  v13 = GameData_21f1618 != 0 && *(_QWORD*)(v4 + 344) == 0;
  if (v13) {
    return Troop_133e6e0(v4);
  }
  return result;
}

#pragma GCC visibility pop
