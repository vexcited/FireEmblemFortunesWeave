#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_65d6c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fa6750[])();
extern __int64 (*game_GameSaveData_vtable[])();
extern __int64 GameData_21c96c8;
extern __int64 GameData_21eea58;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* GameSaveData_Destructor(_QWORD* result);

_QWORD* GameSaveData_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = result;
  *result = game_GameSaveData_vtable;
  v2 = GameData_21eea58;
  if (GameData_21eea58 == 0) {
    goto LABEL_15;
  }
  GameRoutine_65d6c0(GameData_21eea58 + 592);
  GameRoutine_65d6c0(v2 + 464);
  GameRoutine_65d6c0(v2 + 336);
  GameRoutine_65d6c0(v2 + 208);
  v3 = *(_QWORD**)(v2 + 80);
  if (v3 == (_QWORD*)(v2 + 48)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_7;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_7:
  v5 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(v2 + 8) & 1) != 0) {
    v6 = *(_QWORD*)(v2 + 24);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, v2);
  GameData_21eea58 = 0;

LABEL_15:
  *v1 = GameData_1fa6750;
  if ((_QWORD*)GameData_21c96c8 == v1) {
    GameData_21c96c8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
