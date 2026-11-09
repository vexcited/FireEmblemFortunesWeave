#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_edb440(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlMindEnumeration_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CmdBtlMindEnumeration_Destructor(_QWORD* result);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*GameData_1fed660[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqAI_vtable[])();
__int64 CmdBtlMindEnumeration_eab1e0(__int64 a1);

_QWORD* CmdBtlMindEnumeration_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = result[6];
  v2 = result;
  *result = game_cmdbtl_CmdBtlMindEnumeration_vtable;
  if (v1 != 0) {
    v3 = result[7];
    if (v1 == v3) {
      goto LABEL_5;
    }
    do {
      v4 = v3 - 144;
      result = (_QWORD*)GameRoutine_edb440(v3 - 136);
      v3 = v4;
    } while (v4 != v1);
    v5 = v2[6];
    v2[7] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_5:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v7 = v2[2];
  if (v7 != 0) {
    v8 = v2[3];
    if (v7 == v8) {
      goto LABEL_15;
    }
    do {
      result = *(_QWORD**)(v8 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v8 -= 16;
    } while (v8 != v7);
    v9 = v2[2];
    v2[3] = v7;
    v7 = v9;
    if (v9 != 0) {
    LABEL_15:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v7);
    }
  }
  return result;
}

__int64 CmdBtlMindEnumeration_eab1e0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqAI_vtable;
  CmdBtlMindEnumeration_Destructor(a1 + 208);
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fed660;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);

LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
