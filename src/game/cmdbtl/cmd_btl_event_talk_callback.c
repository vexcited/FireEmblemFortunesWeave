#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ead840(_QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlEventTalkCallback_vtable[])();
extern __int64 GameData_21d3f90;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlEventTalkCallback_Unknown3(__int64 a1);
__int64 CmdBtlEventTalkCallback_Destructor(__int64 a1);
__int64 CmdBtlEventTalkCallback_DeletingDestructor(__int64 a1);

__int64 CmdBtlEventTalkCallback_Unknown3(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 96);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 104);
  }
  else {
    v2 = v1 >> 1;
  }
  v3 = *(unsigned __int8*)(GameData_21d3f90 + 1576);
  v4 = *(_QWORD*)(GameData_21d3f90 + 1584);
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  if (v2 == v4 && ((v1 & 1) != 0 ? (v6 = *(_QWORD*)(a1 + 112)) : (v6 = a1 + 97),
                   (v3 & 1) != 0 ? (v7 = *(_QWORD*)(GameData_21d3f90 + 1592))
                                 : (v7 = GameData_21d3f90 + 1577),
                   (unsigned int)memcmp(v6, v7) == 0)) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  }
  else {
    return 0;
  }
}

__int64 CmdBtlEventTalkCallback_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  *(_QWORD*)a1 = game_cmdbtl_CmdBtlEventTalkCallback_vtable;
  if ((*(_BYTE*)(a1 + 96) & 1) != 0 && *(_QWORD*)(a1 + 112) != 0) {
    v1 = a1;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    a1 = v1;
  }
  return GameRoutine_ead840(a1);
}

__int64 CmdBtlEventTalkCallback_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_cmdbtl_CmdBtlEventTalkCallback_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 96) & 1) != 0 && *(_QWORD*)(a1 + 112) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  GameRoutine_ead840(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
}

#pragma GCC visibility pop
