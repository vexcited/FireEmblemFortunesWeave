#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_176d060(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_adf970(_QWORD, _QWORD);
__int64 Manager_d540c0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff0198[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_ProcRunFacility_vtable[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c9dc8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_hub_ProcRunFacility_SetupPreEvent_closure_Invoke(__int64 result);
__int64 ProcRunFacility_Destructor(__int64 a1);

__int64 game_hub_ProcRunFacility_SetupPreEvent_closure_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(GameData_21c9dc8 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21c9dc8 + 72) - v1) >> 3) >=
      1) {
    v2 = *(_QWORD*)(result + 8);
    v3 = 0;
    v4 = 0;
    v5 = (_QWORD*)GameData_212dbb8[0];
    do {
      v6 = *(_QWORD*)(*(_QWORD*)(v1 + 8 * v3) + 40LL);
      result = Manager_d540c0(*v5);
      v1 = *(_QWORD*)(GameData_21c9dc8 + 64);
      if (v6 == result) {
        v4 = *(_QWORD*)(v1 + 8 * v3);
      }
      ++v3;
    } while (
        v3 <
        (int)((unsigned __int64)(*(_QWORD*)(GameData_21c9dc8 + 72) - v1) >> 3));
    if (v4 != 0) {
      v7 = *(_QWORD*)(v4 + 24);
      if ((*(_BYTE*)v7 & 1) != 0) {
        v8 = *(_QWORD*)(v7 + 16);
      }
      else {
        v8 = v7 + 1;
      }
      v9 = GameRoutine_adf970(*(_QWORD*)(v4 + 40), 0);
      return GameRoutine_176d060(v2, v8, "MID_NewAction_ExWarp", v9);
    }
  }
  return result;
}

__int64 ProcRunFacility_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)a1 = game_hub_ProcRunFacility_vtable;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v3 = *(_QWORD*)(a1 + 248);
  if (v1 == v3) {
  LABEL_11:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    goto LABEL_14;
  }
  do {
    v5 = *(_QWORD**)(v3 - 16);
    v6 = v3 - 48;
    if ((_QWORD*)(v3 - 48) == v5) {
      v4 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v5 + v4))((__int64)v5);
      goto LABEL_6;
    }
    if (v5 != nullptr) {
      v4 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v3 = v6;
  } while (v6 != v1);
  v7 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a1 + 248) = v1;
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  if ((*(_BYTE*)(a1 + 216) & 1) != 0 && *(_QWORD*)(a1 + 232) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  v10 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1ff0198;
  if (v10 == (_QWORD*)(a1 + 160)) {
    v11 = 32;
  LABEL_23:
    (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
  }
  else if (v10 != nullptr) {
    v11 = 40;
    goto LABEL_23;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
