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
__attribute__((swiftcall)) void
    DelayImageLoader_19a3b20_alt1(PSEUDO_X8,
                                  _QWORD) __asm__("DelayImageLoader_19a3b20");
__int64 DelayImageLoader_19a3bd0_alt1() __asm__("DelayImageLoader_19a3bd0");
__int64 DelayImageLoader_19a3bf0_alt1() __asm__("DelayImageLoader_19a3bf0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
extern _QWORD GameData_2272148[];
extern _UNKNOWN GameData_2272208;
extern __int64 (*game_gameui_DelayImageLoader_ProcDelayImageLoader_vtable[])();
extern __int64* GameData_212c628;
extern __int64 GameData_212c608[2];
__int64 DelayImageLoader_19a3910(__int64 a1, int a2);
__attribute__((swiftcall)) void DelayImageLoader_19a3b20(PSEUDO_X8 x8_,
                                                         __int64 result);

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

__int64 DelayImageLoader_19a3910(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v10[8];
  __int64 v11;
  __int64 (*v12)();
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 (*v20)();
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2272208,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2272208) != 0) {
    v14 = 0;
    v15 = 0;
    v11 = 0;
    v16 = 0;
    v17 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v10[0] = 15;
    v26 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v30 = 0;
    v28 = 0;
    v29 = 0;
    v27 = 0;
    v12 = DelayImageLoader_19a3bd0_alt1;
    v13 = 0;
    v18 = 13;
    v19 = 0;
    v20 = DelayImageLoader_19a3bf0_alt1;
    DelayImageLoader_19a3b20_alt1((void*)(GameData_2272148), v10);
    __cxa_guard_release(&GameData_2272208);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_QWORD*)(v4 + 152) = a1;
  *(_DWORD*)(v4 + 160) = a2;
  *(_QWORD*)v4 = game_gameui_DelayImageLoader_ProcDelayImageLoader_vtable;
  v7 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c628);
  if (v7 != 0) {
    v8 = *(_QWORD*)(v7 + 40);
    if (v8 != 0) {
      *(_QWORD*)(v8 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v7 + 40);
    }
    *(_QWORD*)(v7 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "ProcDelayImageLoader";
    *(_QWORD*)(v4 + 32) = v7;
    *(_DWORD*)(v4 + 140) = game_HashString32("ProcDelayImageLoader", v6);
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = GameData_2272148;
    *(_QWORD*)(v4 + 16) = GameData_2272148;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v4 + 136) & 1) == 0) {
    ProcInst_657a50(v4, 1);
  }
  return v4;
}

__attribute__((swiftcall)) void DelayImageLoader_19a3b20(PSEUDO_X8 x8_,
                                                         __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(result + 16);
  v4 = *(_QWORD*)(result + 24);
  *(_BYTE*)a2 = *(_BYTE*)result;
  v5 = *(_DWORD*)(result + 32);
  *(_QWORD*)(a2 + 8) = v2;
  *(_QWORD*)(a2 + 16) = v3;
  v6 = *(_QWORD*)(result + 40);
  LODWORD(v3) = *(_DWORD*)(result + 48);
  *(_QWORD*)(a2 + 24) = v4;
  *(_DWORD*)(a2 + 32) = v5;
  v7 = *(_QWORD*)(result + 56);
  *(_QWORD*)(a2 + 40) = v6;
  LOBYTE(v6) = *(_BYTE*)(result + 64);
  *(_DWORD*)(a2 + 48) = v3;
  v8 = *(_QWORD*)(result + 88);
  *(_QWORD*)(a2 + 56) = v7;
  *(_BYTE*)(a2 + 64) = v6;
  v9 = *(_QWORD*)(result + 72);
  v10 = *(_QWORD*)(result + 80);
  *(_QWORD*)(a2 + 88) = v8;
  v11 = *(_QWORD*)(result + 152);
  *(_QWORD*)(a2 + 72) = v9;
  *(_QWORD*)(a2 + 80) = v10;
  LODWORD(v9) = *(_DWORD*)(result + 96);
  *(_QWORD*)(a2 + 152) = v11;
  *(_DWORD*)(a2 + 96) = v9;
  *(_QWORD*)(a2 + 104) = *(_QWORD*)(result + 104);
  *(_DWORD*)(a2 + 112) = *(_DWORD*)(result + 112);
  *(_QWORD*)(a2 + 120) = *(_QWORD*)(result + 120);
  *(_BYTE*)(a2 + 128) = *(_BYTE*)(result + 128);
  v12 = *(_QWORD*)(result + 144);
  *(_QWORD*)(a2 + 136) = *(_QWORD*)(result + 136);
  *(_QWORD*)(a2 + 144) = v12;
  *(_DWORD*)(a2 + 160) = *(_DWORD*)(result + 160);
  *(_QWORD*)(a2 + 168) = *(_QWORD*)(result + 168);
  *(_DWORD*)(a2 + 176) = *(_DWORD*)(result + 176);
  *(_QWORD*)(a2 + 184) = *(_QWORD*)(result + 184);
  {
    result;
    return;
  }
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
