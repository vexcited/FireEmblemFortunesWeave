#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ScriptBase_Destructor(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd3478[])();
extern __int64 GameData_21cd150;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220b694;
__int64 MapScript_c8ccf0(__int64 a1);
__int64 MapScript_c8cdc0_alt1(__int64 a1) __asm__("MapScript_c8cdc0");
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__attribute__((swiftcall)) void MapScript_Unknown4_c8ce40(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void MapScript_Unknown2(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void MapScript_Unknown5(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2);
__attribute__((swiftcall)) void MapScript_Unknown3(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2);
__attribute__((swiftcall)) void MapScript_Unknown6(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void MapScript_Unknown4_c8cfb0(PSEUDO_X8 x8_,
                                                          __int64 a1);
void ScriptBase_Destructor_alt1(_QWORD*) __asm__("ScriptBase_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapScript_c8cdc0(_QWORD* a1);

__int64 MapScript_c8ccf0(__int64 a1)
{
  __int64 result;

  result = ScriptBase_Destructor();
  *(_QWORD*)(a1 - 8) = GameData_1fd3478;
  if (GameData_21cd150 == a1 - 8) {
    GameData_21cd150 = 0;
    GameData_220b694 = 0;
  }
  return result;
}

void MapScript_c8cdc0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  ScriptBase_Destructor_alt1(a1);
  *(a1 - 1) = GameData_1fd3478;
  v2 = (__int64)(a1 - 1);
  if (GameData_21cd150 == v2) {
    GameData_21cd150 = 0;
    GameData_220b694 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

__attribute__((swiftcall)) void MapScript_Unknown4_c8ce40(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 24;
  strcpy(a1 + 1, "Script/bmap/");
}

__attribute__((swiftcall)) void MapScript_Unknown2(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 24;
  strcpy(a1 + 1, "Script/bmap/");
}

__attribute__((swiftcall)) void MapScript_Unknown5(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;

  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 32LL))((void*)(a3), (__int64)a1);
  v5 = strlen(a2);
  GameRoutine_1a09ce0(a3, a2, v5);
  {
    GameRoutine_1a09ce0(a3, ".bin", 4);
    return;
  }
}

__attribute__((swiftcall)) void MapScript_Unknown3(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;

  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(a1 - 8) + 32LL))((void*)(a3), a1 - 8);
  v5 = strlen(a2);
  GameRoutine_1a09ce0(a3, a2, v5);
  {
    GameRoutine_1a09ce0(a3, ".bin", 4);
    return;
  }
}

__attribute__((swiftcall)) void MapScript_Unknown6(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 32LL))((void*)(a2), (__int64)a1);
  {
    GameRoutine_1a09ce0(a2, "BmapEventTemplate.bin", 21);
    return;
  }
}

__attribute__((swiftcall)) void MapScript_Unknown4_c8cfb0(PSEUDO_X8 x8_,
                                                          __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(a1 - 8) + 32LL))((void*)(a2), a1 - 8);
  {
    GameRoutine_1a09ce0(a2, "BmapEventTemplate.bin", 21);
    return;
  }
}

#pragma GCC visibility pop
