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
__int64 FacilitySceneObjectFile_Unknown4_alt1(__int64 result) __asm__(
    "FacilitySceneObjectFile_Unknown4");
void FacilitySceneObjectFile_Unknown5();
void FacilitySceneObjectFile_Unknown6();
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_13a2010_alt1() __asm__("GameRoutine_13a2010");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void FacilitySceneObjectFile_Unknown4();

void FacilitySceneObjectFile_Unknown4()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  GameData_2241778 = GameData_2241770;
  GameData_2241790 = GameData_2241788;
  v0 = *(__int64**)(GameData_2241860 + 64);
  for (i = *(__int64**)(GameData_2241860 + 72); v0 != i; ++v0) {
    v3 = *v0;
    if ((*(_BYTE*)(*v0 + 32) & 1) != 0) {
      v12 = GameData_2241778;
      if (GameData_2241778 >= (unsigned __int64)GameData_2241780) {
        v14 = GameData_2241770;
        v15 = GameData_2241778 - GameData_2241770;
        v16 = (GameData_2241778 - GameData_2241770) >> 3;
        v17 = v16 + 1;
        if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
        LABEL_40:
          GameRoutine_13a2010_alt1();
        }
        v18 = GameData_2241780 - GameData_2241770;
        if ((GameData_2241780 - GameData_2241770) >> 2 > v17) {
          v17 = v18 >> 2;
        }
        if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
          v19 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v19 = v17;
        }
        if (v19 != 0) {
          if (v19 >> 61 != 0) {
          LABEL_41:
            GameRoutine_60a210_alt1();
          }
          v20 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
        }
        else {
          v20 = 0;
        }
        v24 = v20 + 8 * v19;
        v25 = v20 + v15 - 8 * v16;
        *(_QWORD*)(v20 + v15) = v3;
        v13 = v20 + v15 + 8;
        memcpy_alt1(v25, v14, v15);
        GameData_2241770 = v25;
        GameData_2241778 = v13;
        GameData_2241780 = v24;
        if (v14 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v14);
        }
      }
      else {
        *(_QWORD*)GameData_2241778 = v3;
        v13 = v12 + 8;
      }
      GameData_2241778 = v13;
    }
    else {
      v4 = GameData_2241790;
      if (GameData_2241790 < (unsigned __int64)GameData_2241798) {
        *(_QWORD*)GameData_2241790 = v3;
        v2 = v4 + 8;
      }
      else {
        v5 = GameData_2241788;
        v6 = GameData_2241790 - GameData_2241788;
        v7 = (GameData_2241790 - GameData_2241788) >> 3;
        v8 = v7 + 1;
        if ((unsigned __int64)(v7 + 1) >> 61 != 0) {
          goto LABEL_40;
        }
        v9 = GameData_2241798 - GameData_2241788;
        if ((GameData_2241798 - GameData_2241788) >> 2 > v8) {
          v8 = v9 >> 2;
        }
        if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
          v10 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v10 = v8;
        }
        if (v10 != 0) {
          if (v10 >> 61 != 0) {
            goto LABEL_41;
          }
          v11 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
        }
        else {
          v11 = 0;
        }
        v21 = v11 + 8 * v10;
        v22 = v11 + v6 - 8 * v7;
        *(_QWORD*)(v11 + v6) = v3;
        v2 = v11 + v6 + 8;
        memcpy_alt1(v22, v5, v6);
        GameData_2241788 = v22;
        GameData_2241790 = v2;
        GameData_2241798 = v21;
        if (v5 != 0) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v5);
        }
      }
      GameData_2241790 = v2;
    }
  }
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
