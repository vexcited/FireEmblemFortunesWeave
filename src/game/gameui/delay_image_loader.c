#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gameui_DelayImageLoader_vtable[])();
extern __int64 (*game_gameui_ImageLoader_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 DelayImageLoader_Destructor(_QWORD* a1);
__int64 DelayImageLoader_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_19a35b0(__int64, __int64);
__int64 GameRoutine_19a3910(_QWORD, _QWORD);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_636000(_QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 strlen(_QWORD);
__int64 DelayImageLoader_19a37d0(__int64 a1, __int64 a2, unsigned int a3);
bool DelayImageLoader_19a3bd0(__int64 a1);
__int64 DelayImageLoader_19a3bf0(__int64 result);

__int64 DelayImageLoader_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;

  *a1 = game_gameui_DelayImageLoader_vtable;
  result = a1[8];
  if (result != 0) {
    if ((*(_WORD*)(result + 136) & 1) == 0) {
      result = GameRoutine_657a50(result, 1);
    }
    a1[8] = 0;
  }
  v3 = a1[2];
  a1[1] = game_gameui_ImageLoader_vtable;
  if (v3 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v3 + 8), v3);
    a1[2] = 0;
  }
  return result;
}

__int64 DelayImageLoader_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_gameui_DelayImageLoader_vtable;
  v2 = a1[8];
  if (v2 != 0) {
    if ((*(_WORD*)(v2 + 136) & 1) == 0) {
      GameRoutine_657a50(v2, 1);
    }
    a1[8] = 0;
  }
  v3 = a1[2];
  a1[1] = game_gameui_ImageLoader_vtable;
  if (v3 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v3 + 8), v3);
    a1[2] = 0;
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

__int64 DelayImageLoader_19a37d0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if (*(_QWORD*)(a1 + 48) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 16);
  if (v3 != 0 && (v7 = strlen(v3 + 272), v8 = strlen(a2), v7 >= v8) &&
      (unsigned int)memcmp(v3 + 272 + v7 - v8, a2, v8) == 0 &&
      (nn_os_AcquireReadLock(v3 + 696), v9 = *(_DWORD*)(v3 + 656),
       nn_os_ReleaseReadLock(v3 + 696), (v9 & 0x40) != 0)) {
    if (*(_QWORD*)(a1 + 64) != 0) {
      return 1;
    }
    v12 = *(_QWORD*)(a1 + 48);
    result = 1;
    if (v12 != 0) {
      v13 = *(_QWORD*)(a1 + 16);
      if (v13 != 0) {
        v14 = *(int*)(a1 + 56);
        *(_QWORD*)(a1 + 32) =
            *(_QWORD*)(**(_QWORD**)(GameRoutine_5fc1f0(*(_QWORD*)(v13 + 592)) +
                                    40) +
                       144LL);
        v15 = Pane_58f8a0(v12);
        if (v15 != 0) {
          *(_QWORD*)(*(_QWORD*)(v15 + 24) + 16 * v14 + 8) = a1 + 24;
        }
        return 1;
      }
    }
  }
  else {
    v10 = *(_QWORD*)(a1 + 64);
    if (v10 != 0) {
      if ((*(_WORD*)(v10 + 136) & 1) == 0) {
        ProcInst_657a50(v10, 1);
      }
      *(_QWORD*)(a1 + 64) = 0;
    }
    if ((GameRoutine_19a35b0(a1 + 8, a2) & 1) != 0) {
      *(_QWORD*)(a1 + 64) = GameRoutine_19a3910(a1, a3);
      return 1;
    }
    return 0;
  }
  return result;
}

bool DelayImageLoader_19a3bd0(__int64 a1)
{
  int v1;

  v1 = *(_DWORD*)(a1 + 160);
  *(_DWORD*)(a1 + 160) = v1 - 1;
  return v1 > 0;
}

__int64 DelayImageLoader_19a3bf0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  v1 = *(_QWORD*)(result + 152);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 16);
    if (v2 != 0) {
      v3 = result;
      result = GameRoutine_636000(*(_QWORD*)(v2 + 8));
      v4 = *(_QWORD*)(v3 + 152);
      v5 = *(_QWORD*)(v4 + 16);
      v6 = *(_QWORD*)(v4 + 48);
      if (v5 != 0 && v6 != 0) {
        v8 = *(int*)(v4 + 56);
        *(_QWORD*)(v4 + 32) =
            *(_QWORD*)(**(_QWORD**)(GameRoutine_5fc1f0(*(_QWORD*)(v5 + 592)) +
                                    40) +
                       144LL);
        result = Pane_58f8a0(v6);
        if (result != 0) {
          *(_QWORD*)(*(_QWORD*)(result + 24) + 16 * v8 + 8) = v4 + 24;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
