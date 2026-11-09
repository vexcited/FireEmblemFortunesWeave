#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fddca0[])();
extern __int64 (*game_hub_HubSeqEnter_vtable[])();
extern __int64 GameData_21f3cd0;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* HubSeqEnter_Destructor(_QWORD* result);

_QWORD* HubSeqEnter_Destructor(_QWORD* result)
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
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v1 = result[7];
  v2 = result;
  *result = game_hub_HubSeqEnter_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_20;
  }
  v4 = result[8];
  if (v1 == v4) {
    goto LABEL_17;
  }
  do {
    result = *(_QWORD**)(v4 - 16);
    v5 = v4;
    if ((_QWORD*)(v4 - 48) == result) {
      v6 = 32;
      goto LABEL_9;
    }
    if (result != nullptr) {
      v6 = 40;
    LABEL_9:
      result = (_QWORD*)(*(__int64 (**)(void))(*result + v6))();
    }
    v4 -= 80;
    if ((*(_BYTE*)(v5 - 80) & 1) != 0) {
      v7 = *(_QWORD*)(v5 - 64);
      if (v7 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
      }
    }
  } while (v4 != v1);
  v9 = v2[7];
  v2[8] = v1;
  v1 = v9;
  if (v9 != 0) {
  LABEL_17:
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v1);
  }

LABEL_20:
  v11 = v2[4];
  if (v11 != 0) {
    v12 = v2[5];
    if (v11 == v12) {
      goto LABEL_40;
    }
    v13 = v2[5];
    do {
      v17 = *(_QWORD*)(v13 - 24);
      v13 -= 24;
      v15 = v17;
      if (v17 != 0) {
        v18 = *(_QWORD*)(v12 - 16);
        if (v15 == v18) {
          goto LABEL_24;
        }
        v19 = *(_QWORD*)(v12 - 16);
        do {
          v20 = *(_BYTE*)(v19 - 24);
          v19 -= 24;
          if ((v20 & 1) != 0) {
            v21 = *(_QWORD*)(v18 - 8);
            if (v21 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
                v22 = 128;
              }
              else {
                v22 = 56;
              }
              result = (_QWORD*)nn_mem_StandardAllocator_Free(
                  *(_QWORD*)v3 + v22, v21);
            }
          }
          v18 = v19;
        } while (v19 != v15);
        v14 = *(_QWORD*)(v12 - 24);
        *(_QWORD*)(v12 - 16) = v15;
        v15 = v14;
        if (v14 != 0) {
        LABEL_24:
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v15);
        }
      }
      v12 = v13;
    } while (v11 != v13);
    v23 = v2[4];
    v2[5] = v11;
    v11 = v23;
    if (v23 != 0) {
    LABEL_40:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24, v11);
    }
  }
  *v2 = GameData_1fddca0;
  if ((_QWORD*)GameData_21f3cd0 == v2) {
    GameData_21f3cd0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
