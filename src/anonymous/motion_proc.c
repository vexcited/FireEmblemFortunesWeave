#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_118a440(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*anonymous_MotionProc_vtable[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64 MotionProc_Destructor(__int64 a1);
__int64 MotionProc_DeletingDestructor(__int64 a1);
__int64 MotionProc_Unknown2(__int64 result);

__int64 MotionProc_Destructor(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v5;
  int v6;
  char v7;

  *(_QWORD*)a1 = anonymous_MotionProc_vtable;
  if (*(_BYTE*)(a1 + 160) == 1) {
    v2 = *(_QWORD*)(a1 + 152);
    v7 = 0;
    v5 = 0xBF800000BF800000LL;
    v6 = 1065353216;
    v3 = GameRoutine_819f40(*(_QWORD*)(v2 + 8));
    if (v3 != *(_DWORD*)(v2 + 16)) {
      GameRoutine_81a540(v2, v3, &v5);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 MotionProc_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  unsigned __int64 v6;
  int v7;
  char v8;

  *(_QWORD*)a1 = anonymous_MotionProc_vtable;
  if (*(_BYTE*)(a1 + 160) == 1) {
    v2 = *(_QWORD*)(a1 + 152);
    v8 = 0;
    v6 = 0xBF800000BF800000LL;
    v7 = 1065353216;
    v3 = GameRoutine_819f40(*(_QWORD*)(v2 + 8));
    if (v3 != *(_DWORD*)(v2 + 16)) {
      GameRoutine_81a540(v2, v3, &v6);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 MotionProc_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v3 = 2)
               : (v3 = 3),
           (v3 & v2) == 0) ||
      ((result = GameRoutine_118a440(*(_QWORD*)(result + 152))) & 1) == 0) {
    v4 = *(unsigned __int8**)(v1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
