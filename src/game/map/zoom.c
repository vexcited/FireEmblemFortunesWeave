#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d2f6f0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fdb518[])();
extern __int64 (*GameData_1fdb598[])();
extern __int64 (*game_map_Zoom_vtable[])();
extern __int64 GameData_21cd138;
extern __int64 fw_memory_g_heap_manager;
extern int GameData_220f8c0;
__int64 Zoom_Destructor(_QWORD* a1);

__int64 Zoom_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *a1 = game_map_Zoom_vtable;
  a1[1] = GameData_1fdb518;
  GameRoutine_d2f6f0();
  v2 = a1[11];
  a1[11] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[10];
  a1[10] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[9];
  a1[9] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[8];
  a1[8] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[7];
  a1[7] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = (__int64*)a1[6];
  a1[6] = 0;
  if (v7 != nullptr) {
    v8 = v7[1];
    if (v8 != 0) {
      v9 = fw_memory_g_heap_manager;
      v7[2] = v8;
      v10 = 128;
      if (*(_QWORD*)(v9 + 200) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(v9 + v10, v8);
    }
    v11 = *v7;
    *v7 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    v12 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12, v7);
  }
  v13 = a1[5];
  a1[5] = 0;
  if (v13 != 0) {
    v14 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v14, v13);
  }
  *a1 = GameData_1fdb598;
  if ((_QWORD*)GameData_21cd138 == a1) {
    GameData_21cd138 = 0;
    GameData_220f8c0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
