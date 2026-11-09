#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21f2288;
extern __int64 GameData_21f2290;
extern __int64 GameData_21f22a0;
extern __int64 GameData_21f22a8;
extern __int64 GameData_21f22b8;
extern __int64 GameData_21f22c0;
extern __int64 GameData_21f22c8;
extern __int64 GameData_21f22d0;
extern __int64 GameData_21f22e0;
extern __int64 GameData_21f22e8;
extern __int64 GameData_21f22f0;
extern __int64 GameData_21f22f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f2308;
extern int GameData_21f230c;
__int64 RelianceTalkFile_Unknown5();

__int64 RelianceTalkFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  if (GameData_21f22d0 != 0) {
    v0 = (_QWORD*)GameData_21f22c8;
    if (GameData_21f22c8 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = (_QWORD*)v0[5];
        if (v5 != nullptr) {
          do {
            v6 = (_QWORD*)*v5;
            if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
              v7 = 128;
            }
            else {
              v7 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v7);
            v5 = v6;
          } while (v6 != nullptr);
        }
        v8 = v0[3];
        v0[3] = 0;
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v9);
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
    GameData_21f22c8 = 0;
    if (GameData_21f22c0 != 0) {
      v10 = GameData_21f22c0 & 7;
      if ((unsigned __int64)GameData_21f22c0 >= 8) {
        v12 = GameData_21f22c0 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(GameData_21f22b8 + 8 * v11) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 8) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 16) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 24) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 32) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 40) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 48) = 0;
          v13 = GameData_21f22b8 + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(GameData_21f22b8 + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    GameData_21f22d0 = 0;
  }
  if (GameData_21f22f8 != 0) {
    v15 = (_QWORD*)GameData_21f22f0;
    if (GameData_21f22f0 != 0) {
      v16 = fw_memory_g_heap_manager_ptr;
      do {
        v17 = (_QWORD*)*v15;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18);
        v15 = v17;
      } while (v17 != nullptr);
    }
    GameData_21f22f0 = 0;
    if (GameData_21f22e8 != 0) {
      v19 = GameData_21f22e8 & 7;
      if ((unsigned __int64)GameData_21f22e8 >= 8) {
        v21 = GameData_21f22e8 & 0xFFFFFFFFFFFFFFF8LL;
        v20 = 0;
        do {
          *(_QWORD*)(GameData_21f22e0 + 8 * v20) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 8) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 16) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 24) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 32) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 40) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 48) = 0;
          v22 = GameData_21f22e0 + 8 * v20;
          v20 += 8;
          *(_QWORD*)(v22 + 56) = 0;
        } while (v21 != v20);
      }
      else {
        v20 = 0;
      }
      if (v19 != 0) {
        v23 = 8 * v20;
        do {
          --v19;
          *(_QWORD*)(GameData_21f22e0 + v23) = 0;
          v23 += 8;
        } while (v19 != 0);
      }
    }
    GameData_21f22f8 = 0;
  }
  GameData_21f2290 = GameData_21f2288;
  GameData_21f22a8 = GameData_21f22a0;
  GameData_21f2308 = 0;
  GameData_21f230c = 0;
  return result;
}

#pragma GCC visibility pop
