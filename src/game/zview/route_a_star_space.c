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
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
extern __int64 (*GameData_1fdd530[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
__int64 RouteAStarSpace_d72de0(__int64 a1);

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

__int64 RouteAStarSpace_d72de0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;

  v2 = *(_QWORD*)(a1 + 88);
  v1 = *(_QWORD*)(a1 + 96);
  v4 = (_QWORD*)GameData_21323e8[0];
  fw_world_JobContext_Drain(*(_QWORD*)GameData_21323e8[0]);
  v5 = *v4;
  v6 = *v4 + 32LL;
  do {
    v7 = *(_DWORD*)(v5 + 8);
    v8 = (v7 + 1) & 0xFFFFFF;
    if (v7 + 1 <= 0) {
      v8 = -(-(v7 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v5 + 8) = v8;
    v9 = atomic_load((unsigned __int64*)(v6 + 32LL * (v7 & 0x3F)));
    if (v9 != 0) {
      v7 = -1;
    }
  } while (v7 < 0);
  v10 = v1 - v2;
  v11 = v7 | 0xC0000000;
  v12 = (unsigned __int64*)(v6 + 32LL * (v7 & 0x3F));
  v13 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 5);
  nn_os_ClearLightEvent(v12 + 1);
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v14[2] = 0;
  v15 = v14;
  v16 = GameData_212e368[0];
  v14[8] = 0;
  *v14 = v16 + 16;
  v14[1] = 0;
  v17 = v12[3];
  v12[3] = (unsigned __int64)v15;
  if (v17 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  atomic_store(v11, v12);
  v20[2] = v13;
  v20[3] = a1;
  v15[1] = v5;
  *((_DWORD*)v15 + 4) = v11;
  v20[0] = GameData_1fdd530;
  v20[1] = v2;
  v21 = v20;
  fw_world_SwapCallables(v20, v15 + 4);
  if (v21 == v20) {
    v18 = 32;
    goto LABEL_13;
  }
  if (v21 != nullptr) {
    v18 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v21 + v18))((__int64)v21);
  }
  fw_world_JobQueue_Submit(*(_QWORD*)(v5 + 16), v11);
  return fw_world_JobContext_Wait(*v4, v11);
}

bool RouteAStarSpace_Unknown4(__int64 a1)
{
  return *(_QWORD*)(a1 + 96) != *(_QWORD*)(a1 + 88);
}

#pragma GCC visibility pop
