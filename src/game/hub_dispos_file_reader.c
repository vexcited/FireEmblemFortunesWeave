#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb88;
__int64 HubDisposFileReader_Destructor(_QWORD* a1);
__int64 HubDisposFileReader_c983c0(__int64 result);

__int64 HubDisposFileReader_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  v2 = a1[21];
  *a1 = GameData_212eb88 + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[22] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[18];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[19] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  HubDisposFileReader_c983c0(a1 + 6);
  v9 = a1[3];
  if (v9 != 0) {
    v10 = a1[4];
    if (v9 == v10) {
      goto LABEL_20;
    }
    v11 = a1[4];
    do {
      v12 = *(_BYTE*)(v11 - 24);
      v11 -= 24;
      if ((v12 & 1) != 0 && *(_QWORD*)(v10 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
      }
      v10 = v11;
    } while (v11 != v9);
    v14 = a1[3];
    a1[4] = v9;
    if (v14 != 0) {
    LABEL_20:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
    }
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 HubDisposFileReader_c983c0(__int64 result)
{
  __int64 v1;
  __int64* v2;
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
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = *(_QWORD*)(result + 72);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(result + 80);
    if (v1 == v4) {
      goto LABEL_30;
    }
    do {
      if ((*(_BYTE*)(v4 - 32) & 1) != 0 && *(_QWORD*)(v4 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      }
      if ((*(_BYTE*)(v4 - 88) & 1) != 0 && *(_QWORD*)(v4 - 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
      }
      if ((*(_BYTE*)(v4 - 112) & 1) != 0 && *(_QWORD*)(v4 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
      }
      if ((*(_BYTE*)(v4 - 136) & 1) != 0 && *(_QWORD*)(v4 - 120) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
      }
      v4 -= 144;
    } while (v4 != v1);
    v9 = v2[9];
    v2[10] = v1;
    if (v9 != 0) {
    LABEL_30:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
    }
  }
  v11 = v2[6];
  if (v11 != 0) {
    v12 = v2[7];
    if (v11 == v12) {
      goto LABEL_62;
    }
    do {
      if ((*(_BYTE*)(v12 - 32) & 1) != 0 && *(_QWORD*)(v12 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
      }
      if ((*(_BYTE*)(v12 - 88) & 1) != 0 && *(_QWORD*)(v12 - 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
      }
      if ((*(_BYTE*)(v12 - 112) & 1) != 0 && *(_QWORD*)(v12 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
      }
      if ((*(_BYTE*)(v12 - 136) & 1) != 0 && *(_QWORD*)(v12 - 120) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
      }
      v12 -= 144;
    } while (v12 != v11);
    v17 = v2[6];
    v2[7] = v11;
    if (v17 != 0) {
    LABEL_62:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18);
    }
  }
  v19 = v2[3];
  if (v19 != 0) {
    v20 = v2[4];
    if (v19 == v20) {
      goto LABEL_94;
    }
    do {
      if ((*(_BYTE*)(v20 - 32) & 1) != 0 && *(_QWORD*)(v20 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21);
      }
      if ((*(_BYTE*)(v20 - 88) & 1) != 0 && *(_QWORD*)(v20 - 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v22);
      }
      if ((*(_BYTE*)(v20 - 112) & 1) != 0 && *(_QWORD*)(v20 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
      }
      if ((*(_BYTE*)(v20 - 136) & 1) != 0 && *(_QWORD*)(v20 - 120) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
      }
      v20 -= 144;
    } while (v20 != v19);
    v25 = v2[3];
    v2[4] = v19;
    if (v25 != 0) {
    LABEL_94:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v26 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26);
    }
  }
  v27 = *v2;
  if (*v2 != 0) {
    v28 = v2[1];
    if (v27 == v28) {
      goto LABEL_126;
    }
    do {
      if ((*(_BYTE*)(v28 - 32) & 1) != 0 && *(_QWORD*)(v28 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v29);
      }
      if ((*(_BYTE*)(v28 - 88) & 1) != 0 && *(_QWORD*)(v28 - 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v30);
      }
      if ((*(_BYTE*)(v28 - 112) & 1) != 0 && *(_QWORD*)(v28 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v31);
      }
      if ((*(_BYTE*)(v28 - 136) & 1) != 0 && *(_QWORD*)(v28 - 120) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v32 = 128;
        }
        else {
          v32 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v32);
      }
      v28 -= 144;
    } while (v28 != v27);
    v33 = *v2;
    v2[1] = v27;
    if (v33 != 0) {
    LABEL_126:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v34 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v34);
    }
  }
  return result;
}

#pragma GCC visibility pop
