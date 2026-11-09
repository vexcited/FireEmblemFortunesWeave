#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_70f2d0(_QWORD, _QWORD);
__int64 GameRoutine_876a40(_QWORD*, _QWORD*);
__int64 GameRoutine_9369a0(__int64 result);
__int64 GameRoutine_938160(__int64, __int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_LegionPool_List_vtable[])();
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
__int64 Impl_Destructor_93abb0(_QWORD* a1);
__int64 Impl_DeletingDestructor_93ac20(_QWORD* a1);
__int64 Impl_Unknown5_93ace0(__int64 result);
__int64 Impl_Unknown8_93af40(__int64 a1, __int64 a2, int a3);

__int64 Impl_Destructor_93abb0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  a1[1] = game_LegionPool_List_vtable;
  v2 = a1[2];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[2] = 0;
  }
  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v4);
}

__int64 Impl_DeletingDestructor_93ac20(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;

  a1[1] = game_LegionPool_List_vtable;
  v2 = a1[2];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[2] = 0;
  }
  v5 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v5);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 Impl_Unknown5_93ace0(__int64 result)
{
  __int64 v1;
  __int64 i;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(result + 16);
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v1 + 48) + i + 2544) = 0;
    v3 = *(_QWORD*)(v1 + 48) + i;
    *(_QWORD*)(v3 + 2552) = 0;
  }
  if (*(_QWORD*)(v1 + 32) != 0) {
    v4 = *(_QWORD**)(v1 + 24);
    if (v4 != nullptr) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = *(_QWORD*)(v1 + 16);
    *(_QWORD*)(v1 + 24) = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v10) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v10 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v10 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v10 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v10 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v10 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v10 + 48) = 0;
          v12 = *(_QWORD*)(v1 + 8) + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(*(_QWORD*)(v1 + 8) + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    *(_QWORD*)(v1 + 32) = 0;
  }
  *(_DWORD*)(v1 + 72) = 0;
  return result;
}

__int64 Impl_Unknown8_93af40(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 i;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;

  v3 = *(_QWORD*)(a1 + 16);
  if (a3 > 2) {
    return GameRoutine_938160(*(_QWORD*)(a1 + 16), a2);
  }
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v3 + 48) + i + 2544) = 0;
    v6 = *(_QWORD*)(v3 + 48) + i;
    *(_QWORD*)(v6 + 2552) = 0;
  }
  if (*(_QWORD*)(v3 + 32) != 0) {
    v7 = *(_QWORD**)(v3 + 24);
    if (v7 != nullptr) {
      v8 = fw_memory_g_heap_manager_ptr;
      do {
        v9 = (_QWORD*)*v7;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v10);
        v7 = v9;
      } while (v9 != nullptr);
    }
    v11 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 24) = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v15 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 8) + 8 * v13) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 8) + 8 * v13 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 8) + 8 * v13 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 8) + 8 * v13 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 8) + 8 * v13 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 8) + 8 * v13 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 8) + 8 * v13 + 48) = 0;
          v16 = *(_QWORD*)(v3 + 8) + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v17 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(*(_QWORD*)(v3 + 8) + v17) = 0;
          v17 += 8;
        } while (v12 != 0);
      }
    }
    *(_QWORD*)(v3 + 32) = 0;
  }
  *(_DWORD*)(v3 + 72) = 0;
  v18 = *(int*)(a2 + 20);
  v19 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  v20 = *(unsigned __int8*)(v19 + v18);
  *(_DWORD*)(a2 + 20) = v18 + 2;
  v21 = v20 | (*(unsigned __int8*)(v19 + v18 + 1) << 8);
  if (v21 != 0) {
    v22 = 8LL * v21;
    v23 = 0;
    do {
      GameRoutine_70f2d0(*(_QWORD*)(v3 + 48) + v23, a2);
      v23 += 8;
    } while (v22 != v23);
  }
  return GameRoutine_9369a0(v3);
}

#pragma GCC visibility pop
