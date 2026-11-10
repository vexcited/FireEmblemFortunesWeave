#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(void);
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_216f568;
extern __int64 (*game_talk_ProcSkipFadeWait_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_talk_1136ea0(__int64 a1);
__int64 game_talk_1138170(__int64 a1, __int64 a2);

__int64 game_talk_1136ea0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  _BYTE* v7;
  char v8;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      152, 16, 0);
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 32) = 0;
  v4 = (_QWORD*)(v2 + 32);
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)v2 = game_talk_ProcSkipFadeWait_vtable;
  v5 = *(_QWORD*)(a1 + 40);
  if (v5 != 0) {
    *(_QWORD*)(v5 + 48) = v2;
    *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v2;
  *(_QWORD*)(v2 + 24) = "talk::ProcSkipFadeWait";
  *(_QWORD*)(v2 + 32) = a1;
  *(_DWORD*)(v2 + 140) = game_HashString32("talk::ProcSkipFadeWait");
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 24;
  *(_QWORD*)(v2 + 80) = 1;
  *(_QWORD*)(v2 + 8) = &GameData_216f568;
  *(_QWORD*)(v2 + 16) = &GameData_216f568;
  (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2);
  if ((result & 1) != 0 && (*(_WORD*)(v2 + 136) & 0x100) == 0) {
    *(_WORD*)(v2 + 136) |= 0x100u;
  }
  v7 = (_BYTE*)*v4;
  v8 = *(_BYTE*)(*v4 + 138LL);
  if (v8 == 0) {
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*v4);
    v8 = v7[138];
  }
  v7[138] = v8 + 1;
  *(_WORD*)(v2 + 136) |= 2u;
  return result;
}

__int64 game_talk_1138170(__int64 a1, __int64 a2)
{
  __int64 v4;

  if (a2 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1376, 16, 0);
  GameRoutine_1130770(v4, a2, 0);
  ProcInst_657850(v4, &GameData_216de68, "talk::Seq", 1, a1);
  return v4;
}

#pragma GCC visibility pop
