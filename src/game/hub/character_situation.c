#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f99780(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff8b28[])();
extern __int64 (*game_hub_CharacterSituation_vtable[])();
extern __int64 GameData_21f3ce0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2228b18;
_QWORD* CharacterSituation_Destructor(_QWORD* result);

_QWORD* CharacterSituation_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = result[7];
  v2 = result;
  *result = game_hub_CharacterSituation_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[8] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[4];
  if (v6 != 0) {
    v7 = v2[5];
    if (v6 == v7) {
      goto LABEL_22;
    }
    do {
      v8 = v7;
      if ((*(_BYTE*)(v7 - 40) & 1) != 0 && *(_QWORD*)(v7 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
      }
      v7 -= 96;
      if ((*(_BYTE*)(v8 - 96) & 1) != 0 && *(_QWORD*)(v8 - 80) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
      }
    } while (v7 != v6);
    v11 = v2[4];
    v2[5] = v6;
    if (v11 != 0) {
    LABEL_22:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
    }
  }
  v13 = v2[1];
  if (v13 != 0) {
    v14 = v2[2];
    if (v13 == v14) {
      goto LABEL_29;
    }
    do {
      v14 -= 80;
      result = (_QWORD*)GameRoutine_f99780(v14);
    } while (v14 != v13);
    v15 = v2[1];
    v2[2] = v13;
    if (v15 != 0) {
    LABEL_29:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
    }
  }
  *v2 = GameData_1ff8b28;
  if ((_QWORD*)GameData_21f3ce0 == v2) {
    GameData_21f3ce0 = 0;
    GameData_2228b18 = 0;
  }
  return result;
}

#pragma GCC visibility pop
