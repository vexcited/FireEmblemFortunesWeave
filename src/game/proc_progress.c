#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int16* GameRoutine_86b660(__int64, int);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_ProcProgress_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64 ProcProgress_Destructor(__int64 a1);
__int64 ProcProgress_DeletingDestructor(__int64 a1);

__int64 ProcProgress_Destructor(__int64 a1)
{
  float v1;
  float v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *(float*)(a1 + 168);
  v1 = *(float*)(a1 + 172);
  *(_QWORD*)a1 = game_ProcProgress_vtable;
  if (v1 < v2) {
    GameRoutine_86b660(a1 + 152, *(_DWORD*)(a1 + 164));
  }
  v4 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v8 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v9 = v7 == v8;
    v10 = v5 - 1 + v6;
    v11 = v10 >> 7;
    v12 = v10 & 0x7F;
    v13 = 16 * (v7 - v8) - 1;
    v14 = *(_QWORD*)(v8 + 8 * v11);
    if (v9) {
      v13 = 0;
    }
    v15 = v14 + 32 * v12;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v15 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v4[21] = *(_QWORD*)(v15 + 24);
    v16 = *(_QWORD*)(v15 + 16);
    v4[27] = v5 - 1;
    v4[20] = v16;
    if ((unsigned __int64)(v13 - (v5 + v6) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v17 = *(_QWORD*)(v7 - 8);
      if (v17 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17);
        v7 = v4[24];
      }
      v4[24] = v7 - 8;
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcProgress_DeletingDestructor(__int64 a1)
{
  float v1;
  float v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *(float*)(a1 + 168);
  v1 = *(float*)(a1 + 172);
  *(_QWORD*)a1 = game_ProcProgress_vtable;
  if (v1 < v2) {
    GameRoutine_86b660(a1 + 152, *(_DWORD*)(a1 + 164));
  }
  v4 = (_QWORD*)game_ProcGameSkipView_instance_;
  v5 = fw_memory_g_heap_manager_ptr;
  if (game_ProcGameSkipView_instance_ != 0) {
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v9 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v8 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v10 = v8 == v9;
    v11 = v6 - 1 + v7;
    v12 = v11 >> 7;
    v13 = v11 & 0x7F;
    v14 = 16 * (v8 - v9) - 1;
    v15 = *(_QWORD*)(v9 + 8 * v12);
    if (v10) {
      v14 = 0;
    }
    v16 = v15 + 32 * v13;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v16 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v4[21] = *(_QWORD*)(v16 + 24);
    v17 = *(_QWORD*)(v16 + 16);
    v4[27] = v6 - 1;
    v4[20] = v17;
    if ((unsigned __int64)(v14 - (v6 + v7) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v18 = *(_QWORD*)(v8 - 8);
      if (v18 != 0) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v19, v18);
        v8 = v4[24];
      }
      v4[24] = v8 - 8;
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v20 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v20 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v20, a1);
}

#pragma GCC visibility pop
