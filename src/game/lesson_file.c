#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_2246c48;
extern __int64 GameData_2246c50;
extern __int64 GameData_2246c58;
extern __int64 GameData_2246c60;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LessonFile_Unknown5();
__int64 LessonFile_1457ea0();

__int64 LessonFile_Unknown5()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v0 = (_QWORD*)GameData_2246c58;
  if (GameData_2246c58 != 0) {
    v1 = (_QWORD*)GameData_2246c58;
    do {
      v1[4] = v1[3];
      v1 = (_QWORD*)*v1;
    } while (v1 != nullptr);
    if (GameData_2246c60 == 0) {
      return result;
    }
    v2 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = (_QWORD*)*v0;
      v6 = v0[3];
      if (v6 != 0) {
        v7 = *(_QWORD*)v2;
        v0[4] = v6;
        if (*(_QWORD*)(v7 + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(v7 + v8, v6);
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v3 = 128;
      }
      else {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v3, v0);
      v0 = v5;
    } while (v5 != nullptr);
  }
  else if (GameData_2246c60 == 0) {
    return result;
  }
  GameData_2246c58 = 0;
  if (GameData_2246c50 != 0) {
    v9 = GameData_2246c50 & 7;
    if ((unsigned __int64)GameData_2246c50 >= 8) {
      v11 = GameData_2246c50 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = 0;
      do {
        *(_QWORD*)(GameData_2246c48 + 8 * v10) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 8) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 16) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 24) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 32) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 40) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 48) = 0;
        v12 = GameData_2246c48 + 8 * v10;
        v10 += 8;
        *(_QWORD*)(v12 + 56) = 0;
      } while (v11 != v10);
    }
    else {
      v10 = 0;
    }
    if (v9 != 0) {
      v13 = 8 * v10;
      do {
        --v9;
        *(_QWORD*)(GameData_2246c48 + v13) = 0;
        v13 += 8;
      } while (v9 != 0);
    }
  }
  GameData_2246c60 = 0;
  return result;
}

__int64 LessonFile_1457ea0()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v0 = (_QWORD*)GameData_2246c58;
  if (GameData_2246c58 != 0) {
    v1 = (_QWORD*)GameData_2246c58;
    do {
      v1[4] = v1[3];
      v1 = (_QWORD*)*v1;
    } while (v1 != nullptr);
    if (GameData_2246c60 == 0) {
      return result;
    }
    v2 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = (_QWORD*)*v0;
      v6 = v0[3];
      if (v6 != 0) {
        v7 = *(_QWORD*)v2;
        v0[4] = v6;
        if (*(_QWORD*)(v7 + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(v7 + v8, v6);
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v3 = 128;
      }
      else {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v3, v0);
      v0 = v5;
    } while (v5 != nullptr);
  }
  else if (GameData_2246c60 == 0) {
    return result;
  }
  GameData_2246c58 = 0;
  if (GameData_2246c50 != 0) {
    v9 = GameData_2246c50 & 7;
    if ((unsigned __int64)GameData_2246c50 >= 8) {
      v11 = GameData_2246c50 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = 0;
      do {
        *(_QWORD*)(GameData_2246c48 + 8 * v10) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 8) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 16) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 24) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 32) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 40) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v10 + 48) = 0;
        v12 = GameData_2246c48 + 8 * v10;
        v10 += 8;
        *(_QWORD*)(v12 + 56) = 0;
      } while (v11 != v10);
    }
    else {
      v10 = 0;
    }
    if (v9 != 0) {
      v13 = 8 * v10;
      do {
        --v9;
        *(_QWORD*)(GameData_2246c48 + v13) = 0;
        v13 += 8;
      } while (v9 != 0);
    }
  }
  GameData_2246c60 = 0;
  return result;
}

#pragma GCC visibility pop
