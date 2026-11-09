#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1553220(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fdb1a8[])();
extern __int64 (*game_zview_Input_vtable[])();
extern __int64 GameData_21d96b8;
extern __int64 GameData_220f848;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220f878;
__int64 Input_Destructor(__int64 result);

__int64 Input_Destructor(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v1 = result;
  *(_QWORD*)result = game_zview_Input_vtable;
  if (*(_BYTE*)(result + 273) == 1) {
    result = GameRoutine_1553220(15);
    *(_BYTE*)(v1 + 273) = 0;
  }
  if (*(_BYTE*)(v1 + 272) == 1) {
    if (GameData_21d96b8 == 0 ||
        ((v2 = *(_DWORD*)(GameData_21d96b8 + 8)) != 3 ? (v3 = 12) : (v3 = 14),
         v2 == 2)) {
      v3 = 13;
    }
    result = GameRoutine_1553220(v3);
    *(_BYTE*)(v1 + 272) = 0;
  }
  v4 = *(_QWORD*)(v1 + 184);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(v1 + 192) = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  v8 = *(_QWORD*)(v1 + 160);
  if (v8 != 0) {
    v9 = *v5;
    *(_QWORD*)(v1 + 168) = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = *(_QWORD*)(v1 + 136);
  if (v11 != 0) {
    v12 = *v5;
    *(_QWORD*)(v1 + 144) = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = *(_QWORD*)(v1 + 112);
  if (v14 != 0) {
    v15 = *v5;
    *(_QWORD*)(v1 + 120) = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  v17 = *(_QWORD*)(v1 + 88);
  if (v17 != 0) {
    v18 = *v5;
    *(_QWORD*)(v1 + 96) = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = *(_QWORD*)(v1 + 64);
  if (v20 != 0) {
    v21 = *v5;
    *(_QWORD*)(v1 + 72) = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  v23 = *(_QWORD*)(v1 + 40);
  if (v23 != 0) {
    v24 = *v5;
    *(_QWORD*)(v1 + 48) = v23;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v24 + v25, v23);
  }
  v26 = *(_QWORD*)(v1 + 16);
  if (v26 != 0) {
    v27 = *v5;
    *(_QWORD*)(v1 + 24) = v26;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v27 + v28, v26);
  }
  *(_QWORD*)v1 = GameData_1fdb1a8;
  if (GameData_220f848 == v1) {
    GameData_220f848 = 0;
    GameData_220f878 = 0;
  }
  return result;
}

#pragma GCC visibility pop
