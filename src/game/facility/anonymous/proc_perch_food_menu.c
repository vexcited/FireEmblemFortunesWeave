#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_145e5c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_145e820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_192d3d0(_QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212f6b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcPerchFoodMenu_Unknown103(__int64 a1);
__int64 ProcPerchFoodMenu_Unknown105(__int64 a1);
__int64 ProcPerchFoodMenu_Unknown143(__int64 a1, __int64 a2, __int64 a3);

__int64 ProcPerchFoodMenu_Unknown103(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;

  v2 = GameData_212dcd0;
  v3 = (_QWORD*)*GameData_212dcd0;
  v5 = *(__int64**)(*GameData_212dcd0 + 48);
  v4 = *(__int64**)(*GameData_212dcd0 + 56);
  if (v4 == v5) {
    v6 = 0;
  }
  else {
    v6 = *v5;
  }
  v7 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  if (v7 != 0) {
    v7 = GameRoutine_145e5c0(v7, v6, 2);
    v3 = (_QWORD*)*v2;
    v6 = v7;
    v5 = *(__int64**)(*v2 + 48);
    v4 = *(__int64**)(*v2 + 56);
  }
  if (v4 == v5) {
    if (v6 != 0) {
      goto LABEL_8;
    }
    return 0;
  }
  if (*v5 == v6) {
    return 0;
  }

LABEL_8:
  if (v6 != 0) {
    v8 = v3[8];
    v3[7] = v5;
    if ((unsigned __int64)v5 >= v8) {
      v11 = v8 - (_QWORD)v5;
      v12 = v11 >> 2;
      if ((unsigned __int64)(v11 >> 2) <= 1) {
        v12 = 1;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v12;
      }
      if (v13 >> 61 != 0) {
        GameRoutine_60a210(v7);
      }
      v14 = v6;
      v15 = fw_memory_g_heap_manager_ptr;
      v16 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      v17 = &v16[v13];
      v9 = v16 + 1;
      *v16 = v14;
      v3[6] = v16;
      v3[7] = v16 + 1;
      v3[8] = v17;
      if (v5 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v18);
      }
    }
    else {
      *v5 = v6;
      v9 = v5 + 1;
    }
    v3[7] = v9;
  }
  _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(a1);
  GameRoutine_192d3d0(a1);
  return 13;
}

__int64 ProcPerchFoodMenu_Unknown105(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;

  v2 = GameData_212dcd0;
  v3 = (_QWORD*)*GameData_212dcd0;
  v5 = *(__int64**)(*GameData_212dcd0 + 48);
  v4 = *(__int64**)(*GameData_212dcd0 + 56);
  if (v4 == v5) {
    v6 = 0;
  }
  else {
    v6 = *v5;
  }
  v7 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  if (v7 != 0) {
    v7 = GameRoutine_145e820(v7, v6, 2);
    v3 = (_QWORD*)*v2;
    v6 = v7;
    v5 = *(__int64**)(*v2 + 48);
    v4 = *(__int64**)(*v2 + 56);
  }
  if (v4 == v5) {
    if (v6 != 0) {
      goto LABEL_8;
    }
    return 0;
  }
  if (*v5 == v6) {
    return 0;
  }

LABEL_8:
  if (v6 != 0) {
    v8 = v3[8];
    v3[7] = v5;
    if ((unsigned __int64)v5 >= v8) {
      v11 = v8 - (_QWORD)v5;
      v12 = v11 >> 2;
      if ((unsigned __int64)(v11 >> 2) <= 1) {
        v12 = 1;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v12;
      }
      if (v13 >> 61 != 0) {
        GameRoutine_60a210(v7);
      }
      v14 = v6;
      v15 = fw_memory_g_heap_manager_ptr;
      v16 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      v17 = &v16[v13];
      v9 = v16 + 1;
      *v16 = v14;
      v3[6] = v16;
      v3[7] = v16 + 1;
      v3[8] = v17;
      if (v5 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v18);
      }
    }
    else {
      *v5 = v6;
      v9 = v5 + 1;
    }
    v3[7] = v9;
  }
  _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(a1);
  GameRoutine_192d3d0(a1);
  return 13;
}

__int64 ProcPerchFoodMenu_Unknown143(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[3];
  char v8;
  _QWORD v9[3];
  char v10;

  v3 = a3;
  if (a2 == 0) {
    v4 = 0;
    if (a3 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = __dynamic_cast(a2, GameData_212e008[0], GameData_212f6b0, 0);
  if (v3 != 0) {
  LABEL_3:
    v3 = __dynamic_cast(v3, GameData_212e008[0], GameData_212f6b0, 0);
  }

LABEL_4:
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
  v7[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
  v7[1] = 0;
  v9[0] = v5;
  v9[1] = 0;
  v9[2] = 0;
  v10 = 0;
  v7[2] = 0;
  v8 = 0;
  return GameRoutine_19ef8e0(v9, v7) & 1;
}

#pragma GCC visibility pop
