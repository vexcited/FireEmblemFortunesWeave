#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c99d0;
extern __int64 GameData_21c99d8;
extern __int64 GameData_21c99e8;
extern __int64 GameData_21c99f0;
extern __int64 GameData_21c99f8;
extern __int64 GameData_21c9a00;
extern __int64 GameData_21c9a38;
extern __int64 GameData_21c9a40;
extern __int64 GameData_21c9a48;
extern __int64 GameData_21c9a50;
extern __int64 GameData_21c9a60;
extern __int64 GameData_21c9a68;
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21c9a90;
extern __int64 GameData_21c9a98;
extern __int64 GameData_21c9aa8;
extern __int64 GameData_21c9ab0;
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21c9ad8;
extern __int64 GameData_21c9ae0;
extern __int64 GameData_21c9ae8;
extern __int64 GameData_21c9af0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 PersonFile_Unknown5();

__int64 PersonFile_Unknown5()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  _QWORD* i;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = GameData_21c99d0;
  v0 = GameData_21c99d8;
  v2 = fw_memory_g_heap_manager_ptr;
  if (GameData_21c99d0 != GameData_21c99d8) {
    v3 = GameData_21c99d8;
    do {
      v4 = *(_BYTE*)(v3 - 24);
      v3 -= 24;
      if ((v4 & 1) != 0) {
        v5 = *(_QWORD*)(v0 - 8);
        if (v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
        }
      }
      v0 = v3;
    } while (v3 != v1);
  }
  GameData_21c99d8 = v1;
  if (GameData_21c9a00 != 0) {
    for (i = (_QWORD*)GameData_21c99f8; i != nullptr;
         result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, v10)) {
      v10 = i;
      i = (_QWORD*)*i;
      if ((v10[2] & 1) != 0 && v10[4] != 0) {
        v11 = v10;
        v12 = v10[4];
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v13, v12);
        v10 = v11;
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
    }
    GameData_21c99f8 = 0;
    if (GameData_21c99f0 != 0) {
      v14 = GameData_21c99f0 & 7;
      if ((unsigned __int64)GameData_21c99f0 >= 8) {
        v16 = GameData_21c99f0 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(GameData_21c99e8 + 8 * v15) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 8) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 16) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 24) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 32) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 40) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 48) = 0;
          v17 = GameData_21c99e8 + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(GameData_21c99e8 + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    GameData_21c9a00 = 0;
  }
  if (GameData_21c9a50 != 0) {
    v19 = (_QWORD*)GameData_21c9a48;
    if (GameData_21c9a48 != 0) {
      do {
        v20 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v21, v19);
        v19 = v20;
      } while (v20 != nullptr);
    }
    GameData_21c9a48 = 0;
    if (GameData_21c9a40 != 0) {
      v22 = GameData_21c9a40 & 7;
      if ((unsigned __int64)GameData_21c9a40 >= 8) {
        v24 = GameData_21c9a40 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = 0;
        do {
          *(_QWORD*)(GameData_21c9a38 + 8 * v23) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 8) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 16) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 24) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 32) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 40) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 48) = 0;
          v25 = GameData_21c9a38 + 8 * v23;
          v23 += 8;
          *(_QWORD*)(v25 + 56) = 0;
        } while (v24 != v23);
      }
      else {
        v23 = 0;
      }
      if (v22 != 0) {
        v26 = 8 * v23;
        do {
          --v22;
          *(_QWORD*)(GameData_21c9a38 + v26) = 0;
          v26 += 8;
        } while (v22 != 0);
      }
    }
    GameData_21c9a50 = 0;
  }
  GameData_21c9a68 = GameData_21c9a60;
  GameData_21c9a80 = GameData_21c9a78;
  GameData_21c9a98 = GameData_21c9a90;
  GameData_21c9ab0 = GameData_21c9aa8;
  GameData_21c9ac8 = GameData_21c9ac0;
  if (GameData_21c9af0 != 0) {
    v27 = (_QWORD*)GameData_21c9ae8;
    if (GameData_21c9ae8 != 0) {
      do {
        v28 = (_QWORD*)*v27;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v29, v27);
        v27 = v28;
      } while (v28 != nullptr);
    }
    GameData_21c9ae8 = 0;
    if (GameData_21c9ae0 != 0) {
      v30 = GameData_21c9ae0 & 7;
      if ((unsigned __int64)GameData_21c9ae0 >= 8) {
        v32 = GameData_21c9ae0 & 0xFFFFFFFFFFFFFFF8LL;
        v31 = 0;
        do {
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 8) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 16) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 24) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 32) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 40) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 48) = 0;
          v33 = GameData_21c9ad8 + 8 * v31;
          v31 += 8;
          *(_QWORD*)(v33 + 56) = 0;
        } while (v32 != v31);
      }
      else {
        v31 = 0;
      }
      if (v30 != 0) {
        v34 = 8 * v31;
        do {
          --v30;
          *(_QWORD*)(GameData_21c9ad8 + v34) = 0;
          v34 += 8;
        } while (v30 != 0);
      }
    }
    GameData_21c9af0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
