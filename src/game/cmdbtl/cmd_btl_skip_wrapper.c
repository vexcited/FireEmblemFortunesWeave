#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2001430[])();
extern __int64 (*game_cmdbtl_CmdBtlSkipWrapper_vtable[])();
extern __int64 GameData_2219098;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern int GameData_22336e8;
_QWORD* CmdBtlSkipWrapper_Destructor(_QWORD* result);

_QWORD* CmdBtlSkipWrapper_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;

  *result = game_cmdbtl_CmdBtlSkipWrapper_vtable;
  v1 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v2 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v6 = v4 == v5;
    v7 = v2 - 1 + v3;
    v8 = v7 >> 7;
    v9 = v7 & 0x7F;
    v10 = 16 * (v4 - v5) - 1;
    v11 = *(_QWORD*)(v5 + 8 * v8);
    if (v6) {
      v10 = 0;
    }
    v12 = v11 + 32 * v9;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v12 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v1[21] = *(_QWORD*)(v12 + 24);
    v13 = *(_QWORD*)(v12 + 16);
    v1[27] = v2 - 1;
    v1[20] = v13;
    if ((unsigned __int64)(v10 - (v2 + v3) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      if (*(_QWORD*)(v4 - 8) != 0) {
        v14 = result;
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v15);
        v4 = v1[24];
        result = v14;
      }
      v1[24] = v4 - 8;
    }
  }
  *result = GameData_2001430;
  if ((_QWORD*)GameData_2219098 == result) {
    GameData_2219098 = 0;
    GameData_22336e8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
