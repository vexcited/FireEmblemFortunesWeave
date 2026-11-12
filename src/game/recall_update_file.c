#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9ecb80(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21c9fc8;
extern __int64 GameData_21f8fa0;
extern __int64 GameData_21f8fa8;
extern __int64 GameData_21f8fb0;
extern __int64 GameData_21f8fb8;
extern __int64 GameData_21f8fc8;
extern __int64 GameData_21f8fd0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RecallUpdateFile_Unknown4_alt1() __asm__("RecallUpdateFile_Unknown4");
__int64 RecallUpdateFile_Unknown5_alt1() __asm__("RecallUpdateFile_Unknown5");
__int64 RecallUpdateFile_Unknown6_alt1() __asm__("RecallUpdateFile_Unknown6");
__int64* GameRoutine_9ecb80_alt1(__int64* result,
                                 char) __asm__("GameRoutine_9ecb80");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RecallUpdateFile_Unknown4();
void RecallUpdateFile_Unknown5();
void RecallUpdateFile_Unknown6();

void RecallUpdateFile_Unknown4()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;

  if (GameData_21f8fb8 != 0) {
    v0 = (_QWORD*)GameData_21f8fb0;
    if (GameData_21f8fb0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v3, (__int64)v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8fb0 = 0;
    if (GameData_21f8fa8 != 0) {
      v4 = GameData_21f8fa8 & 7;
      if ((unsigned __int64)GameData_21f8fa8 >= 8) {
        v6 = GameData_21f8fa8 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 48) = 0;
          v7 = GameData_21f8fa0 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21f8fa0 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21f8fb8 = 0;
  }
  GameData_21f8fd0 = GameData_21f8fc8;
  v9 = *(__int64**)(GameData_21c9fc8 + 64);
  v10 = *(__int64**)(GameData_21c9fc8 + 72);
  while (v9 != v10) {
    v11 = *v9++;
    GameRoutine_9ecb80_alt1((__int64*)v11, *(_BYTE*)(v11 + 32));
  }
  v12 = (__int64*)GameData_21c9a78;
  v13 = GameData_21c9a80;
  while (v12 != (__int64*)v13) {
    v14 = *v12++;
    GameRoutine_9ecb80_alt1((__int64*)(*(_QWORD*)(v14 + 24) + 1072LL), 1);
  }
}

void RecallUpdateFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;

  if (GameData_21f8fb8 != 0) {
    v0 = (_QWORD*)GameData_21f8fb0;
    if (GameData_21f8fb0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v3, (__int64)v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8fb0 = 0;
    if (GameData_21f8fa8 != 0) {
      v4 = GameData_21f8fa8 & 7;
      if ((unsigned __int64)GameData_21f8fa8 >= 8) {
        v6 = GameData_21f8fa8 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 48) = 0;
          v7 = GameData_21f8fa0 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21f8fa0 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21f8fb8 = 0;
  }
  GameData_21f8fd0 = GameData_21f8fc8;
}

void RecallUpdateFile_Unknown6()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;

  if (GameData_21f8fb8 != 0) {
    v0 = (_QWORD*)GameData_21f8fb0;
    if (GameData_21f8fb0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v3, (__int64)v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8fb0 = 0;
    if (GameData_21f8fa8 != 0) {
      v4 = GameData_21f8fa8 & 7;
      if ((unsigned __int64)GameData_21f8fa8 >= 8) {
        v6 = GameData_21f8fa8 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 48) = 0;
          v7 = GameData_21f8fa0 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21f8fa0 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21f8fb8 = 0;
  }
  GameData_21f8fd0 = GameData_21f8fc8;
}

#pragma GCC visibility pop
