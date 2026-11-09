#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_b03e20(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c9e28;
extern __int64 GameData_21fe008;
extern __int64 GameData_21fe010;
extern __int64 GameData_21fe018;
extern __int64 GameData_21fe020;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GmapSpotGroupFile_Unknown4();
__int64 GmapSpotGroupFile_ae1060();

__int64 GmapSpotGroupFile_Unknown4()
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
  __int64* v10;
  __int64* i;
  __int64 v12;
  __int64 v13;

  if (GameData_21fe020 != 0) {
    v0 = (_QWORD*)GameData_21fe018;
    if (GameData_21fe018 != 0) {
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
    GameData_21fe018 = 0;
    if (GameData_21fe010 != 0) {
      v5 = GameData_21fe010 & 7;
      if ((unsigned __int64)GameData_21fe010 >= 8) {
        v7 = GameData_21fe010 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21fe008 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 48) = 0;
          v8 = GameData_21fe008 + 8 * v6;
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
          *(_QWORD*)(GameData_21fe008 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21fe020 = 0;
  }
  v10 = *(__int64**)(GameData_21c9e28 + 64);
  for (i = *(__int64**)(GameData_21c9e28 + 72); v10 != i; ++v10) {
    v12 = *(_QWORD*)(*v10 + 56);
    v13 = *v10;
    if (v12 != 0) {
      result = GameRoutine_b03e20(&GameData_21fe008, v12, &v13);
    }
  }
  return result;
}

__int64 GmapSpotGroupFile_ae1060()
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
  __int64* v10;
  __int64* i;
  __int64 v12;
  __int64 v13;

  if (GameData_21fe020 != 0) {
    v0 = (_QWORD*)GameData_21fe018;
    if (GameData_21fe018 != 0) {
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
    GameData_21fe018 = 0;
    if (GameData_21fe010 != 0) {
      v5 = GameData_21fe010 & 7;
      if ((unsigned __int64)GameData_21fe010 >= 8) {
        v7 = GameData_21fe010 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21fe008 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21fe008 + 8 * v6 + 48) = 0;
          v8 = GameData_21fe008 + 8 * v6;
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
          *(_QWORD*)(GameData_21fe008 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21fe020 = 0;
  }
  v10 = *(__int64**)(GameData_21c9e28 + 64);
  for (i = *(__int64**)(GameData_21c9e28 + 72); v10 != i; ++v10) {
    v12 = *(_QWORD*)(*v10 + 56);
    v13 = *v10;
    if (v12 != 0) {
      result = GameRoutine_b03e20(&GameData_21fe008, v12, &v13);
    }
  }
  return result;
}

#pragma GCC visibility pop
