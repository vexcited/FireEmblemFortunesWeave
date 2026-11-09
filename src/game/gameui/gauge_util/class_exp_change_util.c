#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ClassExpChangeUtil_DeletingDestructor(__int64 a1, int a2, int a3,
                                              int a4, int a5);
__int64 ClassExpChangeUtil_Unknown4(__int64 a1);
__int64 ClassExpChangeUtil_DeletingDestructor(__int64 a1, int a2, int a3,
                                              int a4, int a5)
{
  int v7;
  int v8;
  __int64 result;
  unsigned int v10;
  float v11;
  float v12;
  bool v13;
  float v14;

  *(_DWORD*)(a1 + 128) = a5;
  *(_DWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 12) = a2;
  *(_DWORD*)(a1 + 20) = a3;
  *(_DWORD*)(a1 + 24) = a4;
  if (a5 >= a3 + a2) {
    v7 = a3 + a2;
  }
  else {
    v7 = a5;
  }
  *(float*)(a1 + 16) = (float)a3;
  if (a3 + a2 >= 0) {
    v8 = v7;
  }
  else {
    v8 = 0;
  }
  *(_DWORD*)(a1 + 36) = v8;
  *(float*)(a1 + 32) = (float)a2;
  if (a2 < a5) {
    *(_BYTE*)(a1 + 28) = 0;
    if ((a3 & 0x80000000) == 0) {
      *(_BYTE*)(a1 + 48) = 0;
      goto LABEL_14;
    }
  LABEL_12:
    *(_BYTE*)(a1 + 48) = 1;
    if (a2 > 0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  *(_BYTE*)(a1 + 28) = 1;
  if (a3 < 0) {
    goto LABEL_12;
  }
  *(_BYTE*)(a1 + 48) = 0;

LABEL_13:
  *(_DWORD*)(a1 + 16) = 0;

LABEL_14:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  if ((_DWORD)result != 0) {
    if (a3 >= 0) {
      v10 = a3;
    }
    else {
      v10 = -a3;
    }
    v11 = 1.5;
    v12 = (float)((float)v10 / (float)(int)result) * 1.5;
    if (v12 <= 1.5) {
      v11 = (float)((float)v10 / (float)(int)result) * 1.5;
    }
    v13 = v12 < 0.0;
    v14 = 0.0;
    if (!v13) {
      v14 = v11;
    }
  }
  else {
    v14 = 1.5;
  }
  *(float*)(a1 + 40) = v14;
  *(_WORD*)(a1 + 29) = 0;
  *(_BYTE*)(a1 + 49) = 1;
  return result;
}

__int64 ClassExpChangeUtil_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

#pragma GCC visibility pop
