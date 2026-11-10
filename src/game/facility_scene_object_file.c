#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_2241770;
extern __int64 GameData_2241778;
extern __int64 GameData_2241780;
extern __int64 GameData_2241788;
extern __int64 GameData_2241790;
extern __int64 GameData_2241798;
extern __int64 GameData_2241860;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_13a2010(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 FacilitySceneObjectFile_Unknown4(__int64 result);
void FacilitySceneObjectFile_Unknown5();
void FacilitySceneObjectFile_Unknown6();

__int64 FacilitySceneObjectFile_Unknown4(__int64 result)
{
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  GameData_2241778 = GameData_2241770;
  GameData_2241790 = GameData_2241788;
  v1 = *(__int64**)(GameData_2241860 + 64);
  for (i = *(__int64**)(GameData_2241860 + 72); v1 != i; ++v1) {
    v4 = *v1;
    if ((*(_BYTE*)(*v1 + 32) & 1) != 0) {
      v13 = GameData_2241778;
      if (GameData_2241778 >= (unsigned __int64)GameData_2241780) {
        v15 = GameData_2241770;
        v16 = GameData_2241778 - GameData_2241770;
        v17 = (GameData_2241778 - GameData_2241770) >> 3;
        v18 = v17 + 1;
        if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
        LABEL_40:
          GameRoutine_13a2010();
        }
        v19 = GameData_2241780 - GameData_2241770;
        if ((GameData_2241780 - GameData_2241770) >> 2 > v18) {
          v18 = v19 >> 2;
        }
        if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
          v20 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v20 = v18;
        }
        if (v20 != 0) {
          if (v20 >> 61 != 0) {
          LABEL_41:
            GameRoutine_60a210(result);
          }
          v21 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
        }
        else {
          v21 = 0;
        }
        v25 = v21 + 8 * v20;
        v26 = v21 + v16 - 8 * v17;
        *(_QWORD*)(v21 + v16) = v4;
        v14 = v21 + v16 + 8;
        result = memcpy(v26, v15, v16);
        GameData_2241770 = v26;
        GameData_2241778 = v14;
        GameData_2241780 = v25;
        if (v15 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
        }
      }
      else {
        *(_QWORD*)GameData_2241778 = v4;
        v14 = v13 + 8;
      }
      GameData_2241778 = v14;
    }
    else {
      v5 = GameData_2241790;
      if (GameData_2241790 < (unsigned __int64)GameData_2241798) {
        *(_QWORD*)GameData_2241790 = v4;
        v3 = v5 + 8;
      }
      else {
        v6 = GameData_2241788;
        v7 = GameData_2241790 - GameData_2241788;
        v8 = (GameData_2241790 - GameData_2241788) >> 3;
        v9 = v8 + 1;
        if ((unsigned __int64)(v8 + 1) >> 61 != 0) {
          goto LABEL_40;
        }
        v10 = GameData_2241798 - GameData_2241788;
        if ((GameData_2241798 - GameData_2241788) >> 2 > v9) {
          v9 = v10 >> 2;
        }
        if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
          v11 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v11 = v9;
        }
        if (v11 != 0) {
          if (v11 >> 61 != 0) {
            goto LABEL_41;
          }
          v12 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
        }
        else {
          v12 = 0;
        }
        v22 = v12 + 8 * v11;
        v23 = v12 + v7 - 8 * v8;
        *(_QWORD*)(v12 + v7) = v4;
        v3 = v12 + v7 + 8;
        result = memcpy(v23, v6, v7);
        GameData_2241788 = v23;
        GameData_2241790 = v3;
        GameData_2241798 = v22;
        if (v6 != 0) {
          v24 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v24 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
        }
      }
      GameData_2241790 = v3;
    }
  }
  return result;
}

void FacilitySceneObjectFile_Unknown5()
{
  GameData_2241790 = GameData_2241788;
  GameData_2241778 = GameData_2241770;
}

void FacilitySceneObjectFile_Unknown6()
{
  GameData_2241790 = GameData_2241788;
  GameData_2241778 = GameData_2241770;
}

#pragma GCC visibility pop
