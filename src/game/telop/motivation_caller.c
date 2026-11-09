#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting;
__int64 MotivationCaller_Unknown2(__int64 result);
__int64 MotivationCaller_Destructor(__int64 a1);
__int64 MotivationCaller_DeletingDestructor(__int64 a1);

__int64 MotivationCaller_Unknown2(__int64 result)
{
  int v1;
  float v2;
  float v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = *(_DWORD*)(*(_QWORD*)(result + 184) + 232LL);
  if (*(_BYTE*)(result + 196) == 1) {
    if (v1 <= 4) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
        return result;
      }
      v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v10 = (v9 & 8) != 0 ? 2 : 3;
      if ((v10 & v9) != 0) {
        return result;
      }
    }
    if ((*(_BYTE*)(game_g_game_setting + 952) & 1) == 0) {
      return result;
    }
  }
  else {
    if (v1 <= 4) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
        return result;
      }
      v11 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v12 = (v11 & 8) != 0 ? 2 : 3;
      if ((v12 & v11) != 0) {
        return result;
      }
    }
    v2 = 60.0 / (float)*(int*)(game_g_frame_clock + 476);
    if (v2 <= 0.0) {
      v2 = 1.0;
    }
    v3 = *(float*)(result + 192) - v2;
    *(float*)(result + 192) = v3;
    if (v3 > 0.0) {
      return result;
    }
  }
  v4 = *(unsigned __int8**)(result + 16);
  if (v4 != nullptr) {
    v5 = *v4;
    v6 = v5 > 0x10;
    v7 = (1 << v5) & 0x1CE00;
    if (!v6 && v7 != 0) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

__int64 MotivationCaller_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 160);
  if (v1 != 0) {
    *(_QWORD*)(a1 + 168) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 MotivationCaller_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 160);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 168) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

#pragma GCC visibility pop
