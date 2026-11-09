#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d250[3];
_QWORD* BattleSide_Destructor(_QWORD* result);

_QWORD* BattleSide_Destructor(_QWORD* result)
{
  _QWORD* v1;
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
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;

  v1 = result;
  v2 = result[92];
  *result = GameData_212d250[0] + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[93] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  v6 = v1[89];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    v1[90] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = v1[84];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    v1[85] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = v1[81];
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    v1[82] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = v1[77];
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    v1[78] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = v1[72];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    v1[73] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = v1[69];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    v1[70] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  v24 = v1[65];
  if (v24 != 0) {
    v25 = *(_QWORD*)v3;
    v1[66] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v25 + v26, v24);
  }
  v27 = v1[60];
  if (v27 != 0) {
    v28 = *(_QWORD*)v3;
    v1[61] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
  }
  v30 = v1[57];
  if (v30 != 0) {
    v31 = *(_QWORD*)v3;
    v1[58] = v30;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v31 + v32, v30);
  }
  v33 = v1[53];
  if (v33 != 0) {
    v34 = *(_QWORD*)v3;
    v1[54] = v33;
    v35 = 128;
    if (*(_QWORD*)(v34 + 200) == 0) {
      v35 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v34 + v35, v33);
  }
  v36 = (_QWORD*)v1[17];
  v37 = (_QWORD*)v1[18];
  v1[21] = 0;
  v38 = v37 - v36;
  if (v38 >= 3) {
    do {
      if (*v36 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v39 = 128;
        }
        else {
          v39 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v39, *v36);
        v36 = (_QWORD*)v1[17];
        v37 = (_QWORD*)v1[18];
      }
      v1[17] = ++v36;
      v38 = v37 - v36;
    } while (v38 > 2);
  }
  if (v38 == 1) {
    v40 = 8;
  }
  else {
    if (v38 != 2) {
      goto LABEL_58;
    }
    v40 = 16;
  }
  v1[20] = v40;

LABEL_58:
  if (v36 != v37) {
    do {
      if (*v36 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v41 = 128;
        }
        else {
          v41 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v41, *v36);
      }
      ++v36;
    } while (v36 != v37);
    v42 = v1[18];
    v43 = v1[17] - v42;
    if (v43 != 0) {
      v1[18] = v42 + ((v43 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v44 = v1[16];
  if (v44 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v45 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v45, v44);
  }
  return result;
}

#pragma GCC visibility pop
