#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicInfo_15e5fa0(void);
__int64 GameConverge_8ea590(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameConverge_8f23a0(_QWORD);
__int64 GameConverge_8f24c0(_QWORD, _QWORD);
__int64 GameRoutine_177d0e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_8ea690(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d54a0(_QWORD, _QWORD);
__int64 GameSubquestData_1257620(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*GameData_2004e18[])();
extern __int64 (*GameData_2004e98[])();
extern __int64 (*GameData_2004f08[])();
extern __int64 (*GameData_2004f88[])();
extern __int64 (*GameData_2005098[])();
extern __int64 (*GameData_2005218[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_8f2260(void);
__int64
game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor(_QWORD* a1);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure_Clone(_QWORD* a1);
_QWORD*
game_anonymous_ConvergeImpl_TryRunConverge_closure_CloneInto(_QWORD* result,
                                                             _QWORD* a2);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure_Destroy(__int64 a1);
__int64
game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destructor(_QWORD* a1);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure0_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure0_Clone(_QWORD* a1);
_QWORD*
game_anonymous_ConvergeImpl_TryRunConverge_closure0_CloneInto(_QWORD* result,
                                                              _QWORD* a2);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destroy(__int64 a1);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destructor(_QWORD* a1);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD*
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Clone(_QWORD* a1);
_QWORD* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_CloneInto(
    _QWORD* result, _QWORD* a2);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destroy(__int64 a1);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Invoke(__int64 a1,
                                                               __int64* a2);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destructor(_QWORD* a1);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD*
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Clone(_QWORD* a1);
_QWORD* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_CloneInto(
    _QWORD* result, _QWORD* a2);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destroy(__int64 a1);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Invoke(__int64 a1);
__int64
game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destructor(_QWORD* a1);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure1_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure1_Clone(_QWORD* a1);
_QWORD*
game_anonymous_ConvergeImpl_TryRunConverge_closure1_CloneInto(_QWORD* result,
                                                              _QWORD* a2);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destroy(__int64 a1);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure2_Invoke();
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure3_Invoke(__int64 a1,
                                                                   __int64* a2);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure4_Clone(__int64 a1);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure4_Invoke(__int64 a1,
                                                                   __int64* a2);
__int64

game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  *a1 = GameData_2004e18;
  v2 = a1[3];
  result = (__int64)(a1 + 3);
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2004e18;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2004e18;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  return v8;
}

_QWORD*

game_anonymous_ConvergeImpl_TryRunConverge_closure_CloneInto(_QWORD* result,
                                                             _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  *a2 = GameData_2004e18;
  v2 = result[1];
  v3 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v2;
  a2[2] = v3;
  v4 = result[3];
  v5 = result[4];
  v6 = v5 - v4;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v6 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v4, 16, 0);
    a2[3] = v8;
    a2[4] = v8;
    a2[5] = v8 + v6;
    do {
      result = (_QWORD*)GameConverge_8f24c0(v8, v4);
      v4 += 48;
      v8 += 48;
    } while (v4 != v5);
    a2[4] = v8;
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure_Destroy(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 24);
  result = a1 + 24;
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64

game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  *a1 = GameData_2004e98;
  v2 = a1[3];
  result = (__int64)(a1 + 3);
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure0_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2004e98;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure0_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2004e98;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  v8[6] = a1[6];
  return v8;
}

_QWORD*

game_anonymous_ConvergeImpl_TryRunConverge_closure0_CloneInto(_QWORD* result,
                                                              _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = result;
  *a2 = GameData_2004e98;
  v4 = result[1];
  v5 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v4;
  a2[2] = v5;
  v6 = result[3];
  v7 = result[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (0xAAAAAAAAAAAAAAABLL * (v8 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v7 - v6, 16, 0);
    a2[3] = v9;
    a2[4] = v9;
    a2[5] = v9 + v8;
    do {
      result = (_QWORD*)GameConverge_8f24c0(v9, v6);
      v6 += 48;
      v9 += 48;
    } while (v6 != v7);
    a2[4] = v9;
  }
  a2[6] = v3[6];
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destroy(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 24);
  result = a1 + 24;
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  *a1 = GameData_2004f08;
  v2 = a1[3];
  result = (__int64)(a1 + 3);
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2004f08;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD*

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2004f08;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  return v8;
}

_QWORD* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_CloneInto(
    _QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  *a2 = GameData_2004f08;
  v2 = result[1];
  v3 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v2;
  a2[2] = v3;
  v4 = result[3];
  v5 = result[4];
  v6 = v5 - v4;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v6 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v4, 16, 0);
    a2[3] = v8;
    a2[4] = v8;
    a2[5] = v8 + v6;
    do {
      result = (_QWORD*)GameConverge_8f24c0(v8, v4);
      v4 += 48;
      v8 += 48;
    } while (v4 != v5);
    a2[4] = v8;
  }
  return result;
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destroy(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 24);
  result = a1 + 24;
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v4;
  _BYTE v6[2224];

  v2 = *a2;
  GameRoutine_6c2b50(v6);
  GameConverge_8ea590(*(_QWORD*)(game_GameModeData_instance_ + 176), v6,
                      *(unsigned __int8*)(a1 + 8), *(_QWORD*)(a1 + 16));
  v4 = *(_QWORD*)(v2 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v4 = *(_QWORD*)(v4 + 152);
  }
  GameRoutine_177d0e0(*(_QWORD*)(v4 + 32), *(_QWORD*)(a1 + 16), v6[498]);
  GameRoutine_8ea690(*(_QWORD*)(game_GameModeData_instance_ + 176),
                     *(unsigned __int8*)(a1 + 8), *(_QWORD*)(a1 + 16), 4, 1);
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0();
  }
  game_Unit_Destroy_Unit(v6);
  return 2;
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  *a1 = GameData_2004f88;
  v2 = a1[3];
  result = (__int64)(a1 + 3);
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2004f88;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD*

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2004f88;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  return v8;
}

_QWORD* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_CloneInto(
    _QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  *a2 = GameData_2004f88;
  v2 = result[1];
  v3 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v2;
  a2[2] = v3;
  v4 = result[3];
  v5 = result[4];
  v6 = v5 - v4;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v6 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v4, 16, 0);
    a2[3] = v8;
    a2[4] = v8;
    a2[5] = v8 + v6;
    do {
      result = (_QWORD*)GameConverge_8f24c0(v8, v4);
      v4 += 48;
      v8 += 48;
    } while (v4 != v5);
    a2[4] = v8;
  }
  return result;
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destroy(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 24);
  result = a1 + 24;
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Invoke(__int64 a1)
{
  GameRoutine_8ea690(*(_QWORD*)(game_GameModeData_instance_ + 176),
                     *(unsigned __int8*)(a1 + 8), *(_QWORD*)(a1 + 16), 4, 0);
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0();
  }
  return 2;
}

__int64

game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  *a1 = GameData_2005098;
  v2 = a1[3];
  result = (__int64)(a1 + 3);
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure1_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2005098;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure1_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2005098;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  return v8;
}

_QWORD*

game_anonymous_ConvergeImpl_TryRunConverge_closure1_CloneInto(_QWORD* result,
                                                              _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  *a2 = GameData_2005098;
  v2 = result[1];
  v3 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v2;
  a2[2] = v3;
  v4 = result[3];
  v5 = result[4];
  v6 = v5 - v4;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v6 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v4, 16, 0);
    a2[3] = v8;
    a2[4] = v8;
    a2[5] = v8 + v6;
    do {
      result = (_QWORD*)GameConverge_8f24c0(v8, v4);
      v4 += 48;
      v8 += 48;
    } while (v4 != v5);
    a2[4] = v8;
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destroy(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  long double v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 24);
  result = a1 + 24;
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure2_Invoke()
{
  unsigned int v0;
  __int64 v1;
  __int64* v2;
  __int64* i;
  __int64 v4;
  __int64 result;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v0 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v1 = *(_QWORD*)GameData_212c7b0[0] + 136LL * v0;
  v2 = *(__int64**)(v1 + 72);
  for (i = *(__int64**)(v1 + 80); v2 != i;
       result = GameSubquestData_1257620(v4, 0)) {
    v4 = *v2++;
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure3_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;

  v2 = *a2;
  if (game_GameModeData_instance_ != 0 &&
      (unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 56) - 2) <=
          7u) {
    v3 = 0x405050302010500uLL >>
         (8 * ((*(_BYTE*)(game_GameModeData_instance_ + 56) - 2) & 0x1Fu));
  }
  else {
    v3 = 5;
  }
  return GameRoutine_9d54a0(v2, v3);
}

_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure4_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_2005218;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure4_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    v3 = *a2;
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         &v3);
  }
  return result;
}

#pragma GCC visibility pop
