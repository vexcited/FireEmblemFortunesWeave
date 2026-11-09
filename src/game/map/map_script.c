#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ScriptBase_Destructor(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd3478[])();
extern __int64 GameData_21cd150;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220b694;
__int64 MapScript_c8ccf0(__int64 a1);
__int64 MapScript_c8cdc0(__int64 a1);

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

__int64 MapScript_c8cdc0(__int64 a1)
{
  __int64 v2;

  ScriptBase_Destructor();
  *(_QWORD*)(a1 - 8) = GameData_1fd3478;
  if (GameData_21cd150 == a1 - 8) {
    GameData_21cd150 = 0;
    GameData_220b694 = 0;
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
