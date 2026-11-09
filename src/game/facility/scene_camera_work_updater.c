#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_203ef60[])();
extern __int64 (*GameData_203ef90[])();
extern __int64 (*game_facility_SceneCameraWorkUpdater_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* SceneCameraWorkUpdater_Destructor(_QWORD* result);

_QWORD* SceneCameraWorkUpdater_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
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
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  v1 = result;
  *result = game_facility_SceneCameraWorkUpdater_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (result[21] != 0) {
    v3 = (_QWORD*)result[20];
    if (v3 != nullptr) {
      do {
        v6 = (_QWORD*)*v3;
        v7 = (_QWORD*)v3[8];
        if (v7 == v3 + 4) {
          v4 = 32;
        }
        else {
          if (v7 == nullptr) {
            goto LABEL_6;
          }
          v4 = 40;
        }
        (*(void (**)(void))(*v7 + v4))();
      LABEL_6:
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
        v3 = v6;
      } while (v6 != nullptr);
    }
    v8 = v1[19];
    v1[20] = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(v1[18] + 8 * v10) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 8) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 16) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 24) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 32) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 40) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 48) = 0;
          v12 = v1[18] + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(v1[18] + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    v1[21] = 0;
  }
  v14 = (_QWORD*)v1[6];
  v15 = v1[7];
  v1[10] = 0;
  v16 = (v15 - (__int64)v14) >> 3;
  if (v16 >= 3) {
    do {
      if (*v14 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v17);
        v14 = (_QWORD*)v1[6];
        v15 = v1[7];
      }
      v1[6] = ++v14;
      v16 = (v15 - (__int64)v14) >> 3;
    } while (v16 > 2);
  }
  if (v16 == 1) {
    v18 = 256;
  }
  else {
    if (v16 != 2) {
      goto LABEL_35;
    }
    v18 = 512;
  }
  v1[9] = v18;

LABEL_35:
  v19 = v1[48];
  v1[47] = GameData_203ef90;
  v20 = v1[56];
  v1[49] = v19;
  v1[57] = v20;
  if (v20 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v21);
    v19 = v1[48];
  }
  if (v19 != 0) {
    v22 = *(_QWORD*)v2;
    v1[49] = v19;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23);
  }
  v24 = v1[44];
  v25 = v1[36];
  v1[35] = GameData_203ef60;
  v1[45] = v24;
  v1[37] = v25;
  if (v24 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v26 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v26);
    v25 = v1[36];
  }
  if (v25 != 0) {
    v27 = *(_QWORD*)v2;
    v1[37] = v25;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v27 + v28);
  }
  v29 = v1[32];
  v30 = v1[24];
  v1[23] = GameData_203ef60;
  v1[33] = v29;
  v1[25] = v30;
  if (v29 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v31 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v31);
    v30 = v1[24];
  }
  if (v30 != 0) {
    v32 = *(_QWORD*)v2;
    v1[25] = v30;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v32 + v33);
  }
  v34 = (_QWORD*)v1[20];
  if (v34 != nullptr) {
    do {
      v37 = (_QWORD*)*v34;
      v38 = (_QWORD*)v34[8];
      if (v38 == v34 + 4) {
        v35 = 32;
      }
      else {
        if (v38 == nullptr) {
          goto LABEL_63;
        }
        v35 = 40;
      }
      (*(void (**)(void))(*v38 + v35))();
    LABEL_63:
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v36 = 128;
      }
      else {
        v36 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v36);
      v34 = v37;
    } while (v37 != nullptr);
  }
  v39 = v1[18];
  v1[18] = 0;
  if (v39 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v40 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v40);
  }
  v41 = v1[17];
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v41);
  }
  v42 = v1[14];
  if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v42);
  }
  v43 = v1[12];
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v43);
  }
  v44 = (_QWORD*)v1[6];
  v45 = (_QWORD*)v1[7];
  v1[10] = 0;
  v46 = v45 - v44;
  if (v46 >= 3) {
    do {
      if (*v44 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v47);
        v44 = (_QWORD*)v1[6];
        v45 = (_QWORD*)v1[7];
      }
      v1[6] = ++v44;
      v46 = v45 - v44;
    } while (v46 > 2);
  }
  if (v46 == 1) {
    v48 = 256;
  }
  else {
    if (v46 != 2) {
      goto LABEL_96;
    }
    v48 = 512;
  }
  v1[9] = v48;

LABEL_96:
  if (v44 != v45) {
    do {
      if (*v44 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v49);
      }
      ++v44;
    } while (v44 != v45);
    v50 = v1[7];
    v51 = v1[6] - v50;
    if (v51 != 0) {
      v1[7] = v50 + ((v51 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (v1[5] != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v52 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v52);
  }
  if ((v1[2] & 1) != 0 && v1[4] != 0) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v53 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v53);
  }
  return result;
}

#pragma GCC visibility pop
