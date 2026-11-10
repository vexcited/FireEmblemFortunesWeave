#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21f8f60;
extern __int64 GameData_21f8f68;
extern __int64 GameData_21f8f70;
extern __int64 GameData_21f8f78;
extern __int64 GameData_21f8f88;
extern __int64 GameData_21f8f90;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RecallIgnoreFile_Unknown5();
__int64 game_HashString(_QWORD);
extern _UNKNOWN* GameData_1f9caf8;
unsigned __int64* RecallLabelFile_9e91e0(unsigned __int64* result);
__int64 RecallIgnoreFile_Unknown6();
unsigned __int64*
game_RecallIgnoreFile_OnBuild_lambda0_Invoke(__int64 a1, unsigned __int8* a2);

__int64 RecallIgnoreFile_Unknown5()
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

  if (GameData_21f8f78 != 0) {
    v0 = (_QWORD*)GameData_21f8f70;
    if (GameData_21f8f70 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8f70 = 0;
    if (GameData_21f8f68 != 0) {
      v5 = GameData_21f8f68 & 7;
      if ((unsigned __int64)GameData_21f8f68 >= 8) {
        v7 = GameData_21f8f68 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21f8f60 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 48) = 0;
          v8 = GameData_21f8f60 + 8 * v6;
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
          *(_QWORD*)(GameData_21f8f60 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21f8f78 = 0;
  }
  GameData_21f8f90 = GameData_21f8f88;
  return result;
}

__int64 RecallIgnoreFile_Unknown6()
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

  if (GameData_21f8f78 != 0) {
    v0 = (_QWORD*)GameData_21f8f70;
    if (GameData_21f8f70 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8f70 = 0;
    if (GameData_21f8f68 != 0) {
      v5 = GameData_21f8f68 & 7;
      if ((unsigned __int64)GameData_21f8f68 >= 8) {
        v7 = GameData_21f8f68 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21f8f60 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21f8f60 + 8 * v6 + 48) = 0;
          v8 = GameData_21f8f60 + 8 * v6;
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
          *(_QWORD*)(GameData_21f8f60 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21f8f78 = 0;
  }
  GameData_21f8f90 = GameData_21f8f88;
  return result;
}

unsigned __int64*

game_RecallIgnoreFile_OnBuild_lambda0_Invoke(__int64 a1, unsigned __int8* a2)
{
  __int64 v3;
  __int64 v4;

  v4 = (__int64)*(&GameData_1f9caf8 + *a2);
  v3 = game_HashString(v4);
  return RecallLabelFile_9e91e0((unsigned __int64*)&v3);
}

#pragma GCC visibility pop
