#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_c8d600(_QWORD);
__int64 GameRoutine_c8d8a0(_QWORD);
__int64 GameRoutine_c8db40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_HubDisposFileLoaderMap_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 HubDisposFileLoaderMap_Destructor(_QWORD* a1);
void GameRoutine_c8d600_alt1(_QWORD*) __asm__("GameRoutine_c8d600");
void GameRoutine_c8d8a0_alt1(_QWORD*) __asm__("GameRoutine_c8d8a0");
void GameRoutine_c8db40_alt1(_QWORD*) __asm__("GameRoutine_c8db40");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 HubDisposFileLoaderMap_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;

  v1 = a1[108];
  *a1 = game_HubDisposFileLoaderMap_vtable;
  if (v1 != 0) {
    a1[109] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
  }
  GameRoutine_c8d600_alt1(a1 + 76);
  GameRoutine_c8d8a0_alt1(a1 + 44);
  GameRoutine_c8db40_alt1(a1 + 12);
  v4 = a1[11];
  a1[11] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[10];
  a1[10] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[9];
  a1[9] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[8];
  a1[8] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[7];
  a1[7] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[6];
  a1[6] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[5];
  a1[5] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[4];
  a1[4] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[3];
  a1[3] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[2];
  a1[2] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
