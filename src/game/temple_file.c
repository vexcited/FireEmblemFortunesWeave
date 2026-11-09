#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21ca080;
extern __int64 GameData_21f4340;
extern __int64 GameData_21f4348;
extern __int64 GameData_21f4350;
extern __int64 GameData_21f4358;
extern __int64 GameData_21f4360;
extern __int64 GameData_21f4368;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_95acb0(void);
void TempleFile_Unknown4();
void TempleFile_Unknown5();
void TempleFile_9598d0();

void TempleFile_Unknown4()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
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
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  GameData_21f4348 = GameData_21f4340;
  GameData_21f4360 = GameData_21f4358;
  v0 = *(__int64**)(GameData_21ca080 + 64);
  for (i = *(__int64**)(GameData_21ca080 + 72); v0 != i; ++v0) {
    v3 = *v0;
    if (*(_BYTE*)(*v0 + 82) != 6) {
      v4 = GameData_21f4348;
      if (GameData_21f4348 >= (unsigned __int64)GameData_21f4350) {
        v6 = GameData_21f4340;
        v7 = GameData_21f4348 - GameData_21f4340;
        v8 = (GameData_21f4348 - GameData_21f4340) >> 3;
        v9 = v8 + 1;
        if ((unsigned __int64)(v8 + 1) >> 61 != 0) {
          goto LABEL_44;
        }
        v10 = GameData_21f4350 - GameData_21f4340;
        if ((GameData_21f4350 - GameData_21f4340) >> 2 > v9) {
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
            goto LABEL_45;
          }
          v12 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
        }
        else {
          v12 = 0;
        }
        v13 = v12 + 8 * v11;
        v14 = v12 + v7 - 8 * v8;
        *(_QWORD*)(v12 + v7) = v3;
        v5 = v12 + v7 + 8;
        memcpy(v14, v6, v7);
        GameData_21f4340 = v14;
        GameData_21f4348 = v5;
        GameData_21f4350 = v13;
        if (v6 != 0) {
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v15);
        }
      }
      else {
        *(_QWORD*)GameData_21f4348 = v3;
        v5 = v4 + 8;
      }
      GameData_21f4348 = v5;
    }
    if (*(_QWORD*)(v3 + 152) != 0 && *(_QWORD*)(v3 + 192) != 0) {
      v17 = GameData_21f4360;
      if (GameData_21f4360 < (unsigned __int64)GameData_21f4368) {
        *(_QWORD*)GameData_21f4360 = v3;
        v2 = v17 + 8;
      }
      else {
        v18 = GameData_21f4358;
        v19 = GameData_21f4360 - GameData_21f4358;
        v20 = (GameData_21f4360 - GameData_21f4358) >> 3;
        v21 = v20 + 1;
        if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
        LABEL_44:
          GameRoutine_95acb0();
        }
        v22 = GameData_21f4368 - GameData_21f4358;
        if ((GameData_21f4368 - GameData_21f4358) >> 2 > v21) {
          v21 = v22 >> 2;
        }
        if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
          v23 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v23 = v21;
        }
        if (v23 != 0) {
          if (v23 >> 61 != 0) {
          LABEL_45:
            GameRoutine_60a210();
          }
          v24 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
        }
        else {
          v24 = 0;
        }
        v25 = v24 + 8 * v23;
        v26 = v24 + v19 - 8 * v20;
        *(_QWORD*)(v24 + v19) = v3;
        v2 = v24 + v19 + 8;
        memcpy(v26, v18, v19);
        GameData_21f4358 = v26;
        GameData_21f4360 = v2;
        GameData_21f4368 = v25;
        if (v18 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v27);
        }
      }
      GameData_21f4360 = v2;
    }
  }
}

void TempleFile_Unknown5()
{
  GameData_21f4360 = GameData_21f4358;
  GameData_21f4348 = GameData_21f4340;
}

void TempleFile_9598d0()
{
  GameData_21f4360 = GameData_21f4358;
  GameData_21f4348 = GameData_21f4340;
}

#pragma GCC visibility pop
