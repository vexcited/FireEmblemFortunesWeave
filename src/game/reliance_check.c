#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_211eeb8[])();
extern __int64 (*game_RelianceCheck_vtable[])();
extern __int64 GameData_21c9708;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_RelianceCheck_unknown_;
extern int GameData_2272240;
_QWORD* RelianceCheck_Destructor(_QWORD* result);

_QWORD* RelianceCheck_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  *result = game_RelianceCheck_vtable;
  if (game_RelianceCheck_unknown_ != 0) {
    v2 = fw_memory_g_heap_manager_ptr;
    if (*(_QWORD*)game_RelianceCheck_unknown_ != 0) {
      v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      *(_QWORD*)(game_RelianceCheck_unknown_ + 8) =
          *(_QWORD*)game_RelianceCheck_unknown_;
      v4 = 128;
      if (*(_QWORD*)(v3 + 200) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(v3 + v4);
    }
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
    game_RelianceCheck_unknown_ = 0;
  }
  *v1 = GameData_211eeb8;
  if ((_QWORD*)GameData_21c9708 == v1) {
    GameData_21c9708 = 0;
    GameData_2272240 = 0;
  }
  return result;
}

#pragma GCC visibility pop
