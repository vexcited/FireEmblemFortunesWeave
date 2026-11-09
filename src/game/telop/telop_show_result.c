#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1762890(__int64, unsigned int);
__int64 GameRoutine_1768fe0(__int64);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopGetItemResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
void GameRoutine_1761b30(__int64, int, char, _QWORD*, __int64, _QWORD*,
                         _QWORD*);
void TelopShowResult_Unknown56(__int64 a1);
__int64 TelopShowResult_Unknown57(_QWORD* a1);
__int64 TelopShowResult_DeletingDestructor(_QWORD* a1);

void TelopShowResult_Unknown56(__int64 a1)
{
  _QWORD v1[2];
  _QWORD v2[2];
  _QWORD v3[2];
  _QWORD v4[2];

  v4[0] = "MID_Sys_Result_Headline_Show";
  v4[1] = 28;
  v3[0] = &GameData_1a9f09e;
  v3[1] = 0;
  v2[0] = "In_Judege01";
  v2[1] = 11;
  v1[0] = "Type_Common";
  v1[1] = 11;
  GameRoutine_1761b30(a1, 0, 1, v4, (__int64)v3, v2, v1);
}

__int64 TelopShowResult_Unknown57(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 440LL))(a1);
  if ((result & 1) == 0) {
    result = GameRoutine_1768fe0((__int64)a1);
  }
  v3 = a1[152];
  if (game_GameModeData_instance_ != 0) {
    v4 = 114;
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
      v4 = 112;
    }
    v5 = *(unsigned __int16*)(v3 + v4);
    if (*(_WORD*)(v3 + v4) != 0) {
      return GameRoutine_1762890((__int64)a1, v5);
    }
  }
  else {
    v5 = *(unsigned __int16*)(v3 + 114);
    if (*(_WORD*)(v3 + 114) != 0) {
      return GameRoutine_1762890((__int64)a1, v5);
    }
  }
  return result;
}

__int64 TelopShowResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[149];
  *a1 = game_telop_TelopGetItemResult_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
  }
  v5 = a1[146];
  if (v5 != 0) {
    v6 = *(_QWORD*)v3;
    a1[147] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v5);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, a1);
}

#pragma GCC visibility pop
