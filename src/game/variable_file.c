#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21ed538;
extern __int64 GameData_21ed540;
extern __int64 GameData_21ed548;
extern __int64 GameData_21ed550;
extern __int64 GameData_21ed560;
extern __int64 GameData_21ed568;
extern __int64 GameData_21ed578;
extern __int64 GameData_21ed580;
extern __int64 GameData_21ed590;
extern __int64 GameData_21ed598;
extern __int64 GameData_21ed5a0;
extern __int64 GameData_21ed5a8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 VariableFile_Unknown5();

__int64 VariableFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (GameData_21ed550 != 0) {
    v0 = (_QWORD*)GameData_21ed548;
    if (GameData_21ed548 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3, v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21ed548 = 0;
    if (GameData_21ed540 != 0) {
      v5 = GameData_21ed540 & 7;
      if ((unsigned __int64)GameData_21ed540 >= 8) {
        v7 = GameData_21ed540 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21ed538 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 48) = 0;
          v8 = GameData_21ed538 + 8 * v6;
          v6 += 8;
          *(_QWORD*)(v8 + 56) = 0;
        } while (v7 != v6);
      }
      else {
        v6 = 0;
      }
      if (v5 != 0) {
        v9 = 8 * v6;
        do {
          --v5;
          *(_QWORD*)(GameData_21ed538 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21ed550 = 0;
  }
  GameData_21ed568 = GameData_21ed560;
  GameData_21ed580 = GameData_21ed578;
  if (GameData_21ed5a8 != 0) {
    v10 = (_QWORD*)GameData_21ed5a0;
    if (GameData_21ed5a0 != 0) {
      v11 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)*v10;
        v14 = v10[3];
        if (v14 != 0) {
          v15 = *(_QWORD*)v11;
          v10[4] = v14;
          if (*(_QWORD*)(v15 + 200) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(v15 + v16, v14);
        }
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v12, v10);
        v10 = v13;
      } while (v13 != nullptr);
    }
    GameData_21ed5a0 = 0;
    if (GameData_21ed598 != 0) {
      v17 = GameData_21ed598 & 7;
      if ((unsigned __int64)GameData_21ed598 >= 8) {
        v19 = GameData_21ed598 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = 0;
        do {
          *(_QWORD*)(GameData_21ed590 + 8 * v18) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 8) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 16) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 24) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 32) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 40) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 48) = 0;
          v20 = GameData_21ed590 + 8 * v18;
          v18 += 8;
          *(_QWORD*)(v20 + 56) = 0;
        } while (v19 != v18);
      }
      else {
        v18 = 0;
      }
      if (v17 != 0) {
        v21 = 8 * v18;
        do {
          --v17;
          *(_QWORD*)(GameData_21ed590 + v21) = 0;
          v21 += 8;
        } while (v17 != 0);
      }
    }
    GameData_21ed5a8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
