#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d72de0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*game_zview_RouteAStarSpace_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RouteAStarSpace_Unknown5(_QWORD* a1);
__int64 RouteAStarSpace_Unknown2(__int64 result);
bool RouteAStarSpace_Unknown4(__int64 a1);

__int64 RouteAStarSpace_Unknown5(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  *a1 = game_zview_RouteAStarSpace_vtable;
  nn_os_FinalizeMutex(a1 + 21);
  v2 = a1[11];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = a1[12];
    if (v2 == v4) {
      goto LABEL_11;
    }
    do {
      v5 = *(_QWORD*)(v4 - 80);
      if (v5 != 0) {
        *(_QWORD*)(v4 - 72) = v5;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
      }
      v4 -= 96;
    } while (v4 != v2);
    v7 = a1[11];
    a1[12] = v2;
    v2 = v7;
    if (v7 != 0) {
    LABEL_11:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v2);
    }
  }
  result = nn_os_FinalizeMutex(a1 + 7);
  v10 = a1[4];
  if (v10 != 0) {
    v11 = *(_QWORD*)v3;
    a1[5] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  v13 = a1[1];
  if (v13 != 0) {
    v14 = *(_QWORD*)v3;
    a1[2] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  return result;
}

__int64 RouteAStarSpace_Unknown2(__int64 result)
{
  if (*(_BYTE*)(result + 112) == 1) {
    *(_DWORD*)(result + 120) = 0;
    *(_BYTE*)(result + 136) = 0;
    *(_BYTE*)(result + 152) = 0;
    *(_WORD*)(result + 124) = 257;
    *(_DWORD*)(result + 128) = 1;
    *(_BYTE*)(result + 132) = 1;
    return GameRoutine_d72de0(result);
  }
  return result;
}

bool RouteAStarSpace_Unknown4(__int64 a1)
{
  return *(_QWORD*)(a1 + 96) != *(_QWORD*)(a1 + 88);
}

#pragma GCC visibility pop
