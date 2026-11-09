#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_MenuAnimator_PlayIn(_QWORD, _QWORD, _QWORD);
__int64 game_gameui_MenuAnimator_PlayOut(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_225ae28;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(_QWORD);
__int64 GazeBranchMenu_Unknown57(__int64 a1, __int64* a2);
__int64 GazeBranchMenu_Unknown58(__int64 a1, __int64* a2);
__int64 GazeBranchMenu_Unknown94(__int64 a1);
__int64 GazeBranchMenu_Unknown101();

__int64 GazeBranchMenu_Unknown57(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 result;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 448LL))(a1);
  result = game_gameui_MenuAnimator_PlayIn(v4, a1 + 952, 0);
  v7 = (__int64*)a2[1];
  v6 = a2[2];
  if ((unsigned __int64)v7 >= v6) {
    v9 = *a2;
    v10 = (__int64)v7 - *a2;
    v11 = (v10 >> 3) + 1;
    if (v11 >> 61 != 0) {
      GameRoutine_874500(result);
    }
    v12 = v6 - v9;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v12 >> 2 > v11) {
      v11 = v12 >> 2;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v15 = result;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      result = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v10 - 8 * (v10 >> 3);
    *(_QWORD*)(v16 + v10) = result;
    v8 = v16 + v10 + 8;
    result = memcpy(v18, v9, v10);
    *a2 = v18;
    a2[1] = v8;
    a2[2] = v17;
    if (v9 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v9);
    }
  }
  else {
    *v7 = result;
    v8 = (__int64)(v7 + 1);
  }
  a2[1] = v8;
  return result;
}

__int64 GazeBranchMenu_Unknown58(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 result;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 448LL))(a1);
  result = game_gameui_MenuAnimator_PlayOut(v4, a1 + 952, 0);
  v7 = (__int64*)a2[1];
  v6 = a2[2];
  if ((unsigned __int64)v7 >= v6) {
    v9 = *a2;
    v10 = (__int64)v7 - *a2;
    v11 = (v10 >> 3) + 1;
    if (v11 >> 61 != 0) {
      GameRoutine_874500(result);
    }
    v12 = v6 - v9;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v12 >> 2 > v11) {
      v11 = v12 >> 2;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v15 = result;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      result = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v10 - 8 * (v10 >> 3);
    *(_QWORD*)(v16 + v10) = result;
    v8 = v16 + v10 + 8;
    result = memcpy(v18, v9, v10);
    *a2 = v18;
    a2[1] = v8;
    a2[2] = v17;
    if (v9 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v9);
    }
  }
  else {
    *v7 = result;
    v8 = (__int64)(v7 + 1);
  }
  a2[1] = v8;
  return result;
}

__int64 GazeBranchMenu_Unknown94(__int64 a1)
{
  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  GameRoutine_155e830(a1 + 848, 0);
  GameRoutine_155e830(a1 + 848, 1);
  return GameRoutine_155e830(a1 + 952, 0);
}

__int64 GazeBranchMenu_Unknown101()
{
  if (GameData_225ae28 != 0) {
    *(_DWORD*)(GameData_225ae28 + 152) = 7;
  }
  return 3;
}

#pragma GCC visibility pop
