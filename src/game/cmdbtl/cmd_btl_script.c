#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_629ac0(_QWORD, _QWORD);
__int64 ScriptBase_Destructor(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fed858[])();
extern __int64 (*GameData_1fed8f0[])();
extern __int64 (*game_cmdbtl_CmdBtlScript_vtable[])();
extern __int64 GameData_212eb28;
extern __int64 GameData_2216810;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* as_g_script_manager_ptr;
extern char GameData_1a9f09e;
extern char GameData_2216858;
extern int GameData_221c4d0;
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_8123d0(void);
__int64 CmdBtlScript_Destructor(_QWORD* a1);

__int64 CmdBtlScript_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  unsigned int v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  char* v15;

  *a1 = game_cmdbtl_CmdBtlScript_vtable;
  a1[1] = GameData_1fed858;
  v1 = a1 + 1;
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  v3 = GameData_2216810;
  if (GameData_2216810 == 0) {
    v8 = 0;
    goto LABEL_17;
  }
  if (*(_QWORD*)(GameData_2216810 + 32) != 0) {
    v4 = *(char**)(GameData_2216810 + 32);
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v14 = v6;
    v15 = v7;
    v13 = v9 | 1;
  }
  else {
    LOBYTE(v13) = 2 * v5;
    v7 = (char*)&v13 + 1;
    if (v5 == 0) {
      goto LABEL_16;
    }
  }
  memmove(v7, v4, v6);

LABEL_16:
  v7[v6] = 0;
  v8 = (unsigned __int8)v13;
  v3 = v14;

LABEL_17:
  v10 = (_QWORD*)GameData_212eb28;
  if ((v8 & 1) == 0) {
    v3 = v8 >> 1;
  }
  if (v3 != 0) {
    GameRoutine_629ac0(*as_g_script_manager_ptr,
                       *(_QWORD*)GameData_212eb28 + 16LL);
  }
  if ((v8 & 1) != 0 && v15 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v15);
  }
  result = ScriptBase_Destructor(v1);
  *a1 = GameData_1fed8f0;
  if ((_QWORD*)*v10 == a1) {
    *v10 = 0;
    GameData_221c4d0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
