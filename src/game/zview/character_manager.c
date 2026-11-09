#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd7dc8[])();
extern __int64 (*game_zview_CharacterManager_vtable[])();
extern __int64 GameData_21f3cb0;
extern __int64 GameData_220b6f0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220f814;
__int64 CharacterManager_Destructor(_QWORD* a1);

__int64 CharacterManager_Destructor(_QWORD* a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 i;
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
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 result;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  *a1 = game_zview_CharacterManager_vtable;
  v2 = GameData_21f3cb0;
  if (GameData_21f3cb0 != 0) {
    v3 = *(float*)(GameData_21f3cb0 + 1012);
    *(_DWORD*)(GameData_21f3cb0 + 1016) = 0;
    *(float*)(v2 + 1008) = v3 + 0.0;
  }
  v4 = a1[1];
  for (i = a1[2]; i != v4; i -= 16) {
    v6 = *(_QWORD*)(i - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  a1[2] = v4;
  v7 = a1[29];
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[30] = v7;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v7);
  }
  v11 = a1[20];
  if (v11 != 0) {
    v12 = *(_QWORD*)v8;
    a1[21] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = a1[17];
  if (v14 != 0) {
    v15 = *(_QWORD*)v8;
    a1[18] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  v17 = a1[14];
  if (v17 != 0) {
    v18 = *(_QWORD*)v8;
    a1[15] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = a1[11];
  if (v20 != 0) {
    v21 = *(_QWORD*)v8;
    a1[12] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  v23 = (__int64*)a1[9];
  a1[9] = 0;
  if (v23 != nullptr) {
    v24 = v23[3];
    if (v24 != 0) {
      v25 = *(_QWORD*)v8;
      v23[4] = v24;
      v26 = 128;
      if (*(_QWORD*)(v25 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(v25 + v26, v24);
    }
    v27 = *v23;
    if (*v23 != 0) {
      v28 = *(_QWORD*)v8;
      v23[1] = v27;
      v29 = 128;
      if (*(_QWORD*)(v28 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(v28 + v29, v27);
    }
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v30, v23);
  }
  result = a1[8];
  a1[8] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v32 = a1[4];
  if (v32 != 0) {
    v33 = a1[5];
    if (v32 == v33) {
      goto LABEL_51;
    }
    do {
      v34 = *(_QWORD*)(v33 - 8);
      if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        result = std___1___shared_weak_count___release_weak(v34);
      }
      v33 -= 16;
    } while (v33 != v32);
    v35 = a1[4];
    a1[5] = v32;
    v32 = v35;
    if (v35 != 0) {
    LABEL_51:
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v36 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v36, v32);
    }
  }
  v37 = a1[1];
  if (v37 != 0) {
    v38 = a1[2];
    if (v37 == v38) {
      goto LABEL_62;
    }
    do {
      v39 = *(_QWORD*)(v38 - 8);
      if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
        result = std___1___shared_weak_count___release_weak(v39);
      }
      v38 -= 16;
    } while (v38 != v37);
    v40 = a1[1];
    a1[2] = v37;
    v37 = v40;
    if (v40 != 0) {
    LABEL_62:
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v41, v37);
    }
  }
  *a1 = GameData_1fd7dc8;
  if ((_QWORD*)GameData_220b6f0 == a1) {
    GameData_220b6f0 = 0;
    GameData_220f814 = 0;
  }
  return result;
}

#pragma GCC visibility pop
