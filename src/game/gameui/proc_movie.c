#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18cf680(_QWORD);
__int64 GameRoutine_18cfa40(_QWORD, _QWORD);
__int64 GameRoutine_18d04c0(_QWORD, _QWORD);
__int64 GameRoutine_18d0ec0(_QWORD, _QWORD);
__int64 GameRoutine_18d1b90(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 Pane_58f8a0(_QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_2263300;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_ProcMovie_vtable[])();
extern __int64 GameData_2241728;
extern __int64 GameData_22632e8;
extern __int64 GameData_22632f0;
extern __int64 GameData_2265ea0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c598[2];
extern __int64* GameData_212fca0[2];
extern int GameData_22632f8;
__int64 ProcMovie_Unknown5(__int64 a1, long double a2);
__int64 ProcMovie_Unknown2(__int64 result);
__int64 ProcMovie_Destructor(__int64 a1);
__int64 ProcMovie_DeletingDestructor(__int64 a1);

__int64 ProcMovie_Unknown5(__int64 a1, long double a2)
{
  *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(*(_QWORD*)(a1 + 184), a2) + 24) + 8LL) =
      *(_QWORD*)(a1 + 192);
  return GameRoutine_18cf680(GameData_2265ea0);
}

__int64 ProcMovie_Unknown2(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  int v11;
  __int64 v12;
  __int64 v13;

  v2 = result + 160;
  v1 = *(unsigned __int8*)(result + 160);
  if ((v1 & 1) != 0) {
    v3 = *(_QWORD*)(result + 168);
  }
  else {
    v3 = v1 >> 1;
  }
  if (v3 != 0 && (*(_BYTE*)(result + 153) & 1) != 0) {
    v4 = result;
    if ((*(_BYTE*)(result + 154) & 1) == 0) {
      v5 = GameData_212c598[0];
      result = GameRoutine_18d0ec0(*GameData_212c598[0] + 144, result + 160);
      if (result != 0) {
        result = GameRoutine_18d1b90(*(_QWORD*)(result + 40));
        if ((result & 1) != 0) {
          GameRoutine_18cfa40(*v5, v2);
          v6 = GameRoutine_18d04c0(*v5 + 144, v2);
          if (v6 != 0) {
            *(_BYTE*)(*(_QWORD*)(v6 + 40) + 4865LL) = 0;
          }
          v7 = *(_BYTE*)(v4 + 152);
          v8 = GameRoutine_18d04c0(*v5 + 144, v2);
          if (v8 != 0) {
            *(_BYTE*)(*(_QWORD*)(v8 + 40) + 4864LL) = v7;
          }
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263300,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_2263300) != 0) {
            GameData_22632f8 = 0;
            GameData_22632e8 = (__int64)(GameData_212fca0[0] + 2);
            GameData_22632f0 = -1;
            __cxa_guard_release(&GameData_2263300);
          }
          v9 = GameRoutine_18d0ec0(*v5 + 144, v2);
          if (v9 != 0) {
            (*(void (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(v9 + 40) + 4176LL) +
                                  40LL))(
                *(_QWORD*)(*(_QWORD*)(v9 + 40) + 4176LL));
            v12 = v11;
          }
          else {
            v12 = -1;
          }
          v13 = *(_QWORD*)(v4 + 184);
          GameData_22632f0 = v12;
          result = Pane_58f8a0(v13, v10);
          *(_QWORD*)(*(_QWORD*)(result + 24) + 8LL) = &GameData_22632e8;
          *(_BYTE*)(*(_QWORD*)(v4 + 184) + 88LL) |= 1u;
          *(_BYTE*)(v4 + 154) = 1;
        }
      }
    }
  }
  return result;
}

__int64 ProcMovie_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_gameui_ProcMovie_vtable;
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 176);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  GameData_2241728 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMovie_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_gameui_ProcMovie_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 176);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  GameData_2241728 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
