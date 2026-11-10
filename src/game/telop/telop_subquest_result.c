#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSubquestResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopSubquestResult_Destructor(_QWORD* a1);
__int64 TelopSubquestResult_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_1767f90(__int64, __int64, __int64);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
extern __int64 GameData_1a8d218;
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
__int64 game_telop_TelopSubquestResult_CreateBind_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2);

__int64 TelopSubquestResult_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[147];
  *a1 = game_telop_TelopSubquestResult_vtable;
  if (v1 != 0) {
    v3 = a1[148];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_16;
    }
    v5 = v3 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = a1[147];
    a1[148] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v1);
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopSubquestResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = a1[147];
  *a1 = game_telop_TelopSubquestResult_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[148];
    if (v1 == v4) {
      goto LABEL_16;
    }
    v5 = v4 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = a1[147];
    a1[148] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v1);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

__int64 game_telop_TelopSubquestResult_CreateBind_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v13;
  __int64 v14;

  v2 = *a2;
  if (*(_BYTE*)(**(_QWORD**)(a1 + 8) + 112LL) == 7 &&
      (GameRoutine_682bc0(&v14, &GameData_1a8d218), v14 != 0) &&
      (v4 = *(_QWORD**)(GameData_21ca310 + 56)) != nullptr) {
    v5 = 250;
    while (1) {
      v6 = v4[55];
      if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v4[49] == v14) {
        break;
      }
      v7 = v4[333];
      if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v4[327] == v14) {
        v4 += 278;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v8 = v4[611];
      if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v4[605] == v14) {
        v4 += 556;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v9 = v4[889];
      if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v4[883] == v14) {
        v4 += 834;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v10 = v4[1167];
      if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v4[1161] == v14) {
        v4 += 1112;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v4 += 1390;
      v5 -= 5;
      if (v5 == 0) {
        goto LABEL_22;
      }
    }
  }
  else {
  LABEL_22:
    v11 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v14 = v11;
    v13 = 241;
    v4 = (_QWORD*)game_UnitPool_Find_6ead60(&v14, &v13);
  }
  return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
}

#pragma GCC visibility pop
