#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_204bcc8[])();
extern __int64 (*game_gmap_GmapArgManager_vtable[])();
extern __int64 GameData_21f1660;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_225682c;
_QWORD* GmapArgManager_Destructor(_QWORD* result);

_QWORD* GmapArgManager_Destructor(_QWORD* result)
{
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = (__int64*)result[1];
  v2 = result;
  *result = game_gmap_GmapArgManager_vtable;
  if (v1 != nullptr) {
    v3 = v1[3];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v3 != 0) {
      v5 = v1[4];
      if (v3 == v5) {
        goto LABEL_13;
      }
      v6 = v1[4];
      do {
        v7 = *(_BYTE*)(v6 - 24);
        v6 -= 24;
        if ((v7 & 1) != 0) {
          v8 = *(_QWORD*)(v5 - 8);
          if (v8 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v9 = 128;
            }
            else {
              v9 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
          }
        }
        v5 = v6;
      } while (v6 != v3);
      v10 = v1[3];
      v1[4] = v3;
      v3 = v10;
      if (v10 != 0) {
      LABEL_13:
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11, v3);
      }
    }
    v12 = *v1;
    if (*v1 != 0) {
      v13 = v1[1];
      if (v12 == v13) {
        goto LABEL_27;
      }
      v14 = v1[1];
      do {
        v15 = *(_BYTE*)(v14 - 24);
        v14 -= 24;
        if ((v15 & 1) != 0) {
          v16 = *(_QWORD*)(v13 - 8);
          if (v16 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v17 = 128;
            }
            else {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v17, v16);
          }
        }
        v13 = v14;
      } while (v14 != v12);
      v18 = *v1;
      v1[1] = v12;
      v12 = v18;
      if (v18 != 0) {
      LABEL_27:
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19, v12);
      }
    }
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v20, v1);
    v2[1] = 0;
  }
  *v2 = GameData_204bcc8;
  if ((_QWORD*)GameData_21f1660 == v2) {
    GameData_21f1660 = 0;
    GameData_225682c = 0;
  }
  return result;
}

#pragma GCC visibility pop
