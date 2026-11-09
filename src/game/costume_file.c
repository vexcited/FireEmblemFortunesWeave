#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21f92e0;
extern __int64 GameData_21f92e8;
extern __int64 GameData_21f92f0;
extern __int64 GameData_21f92f8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CostumeFile_Unknown5();
__int64 CostumeFile_9ffa20();

__int64 CostumeFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21f92f8 != 0) {
    v0 = (_QWORD*)GameData_21f92f0;
    if (GameData_21f92f0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = v0[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v1;
          v0[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(v6 + v7);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21f92f0 = 0;
    if (GameData_21f92e8 != 0) {
      v8 = GameData_21f92e8 & 7;
      if ((unsigned __int64)GameData_21f92e8 >= 8) {
        v10 = GameData_21f92e8 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21f92e0 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 48) = 0;
          v11 = GameData_21f92e0 + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(GameData_21f92e0 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21f92f8 = 0;
  }
  return result;
}

__int64 CostumeFile_9ffa20()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21f92f8 != 0) {
    v0 = (_QWORD*)GameData_21f92f0;
    if (GameData_21f92f0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = v0[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v1;
          v0[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(v6 + v7);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21f92f0 = 0;
    if (GameData_21f92e8 != 0) {
      v8 = GameData_21f92e8 & 7;
      if ((unsigned __int64)GameData_21f92e8 >= 8) {
        v10 = GameData_21f92e8 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21f92e0 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v9 + 48) = 0;
          v11 = GameData_21f92e0 + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(GameData_21f92e0 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21f92f8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
