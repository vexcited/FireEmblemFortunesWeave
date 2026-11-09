#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_609260(float*, __int64, char);
__int64 GameRoutine_6315e0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strcpy(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 PropertyFile_Destructor(__int64 a1);
__int64 PropertyFile_Unknown2(__int64 result);

__int64 PropertyFile_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
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
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v2 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 824) != 0) {
    v3 = *(_QWORD**)(a1 + 816);
    while (v3 != nullptr) {
      v5 = v3;
      v3 = (_QWORD*)*v3;
      v6 = v5[5];
      v5[5] = 0;
      if (v6 != 0) {
        v7 = *(_QWORD*)(v6 + 24);
        *(_QWORD*)(v6 + 24) = 0;
        if (v7 != 0) {
          v8 = *(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0 ? 128LL : 56LL;
          nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
          v9 = *(_QWORD*)(v6 + 24);
          *(_QWORD*)(v6 + 24) = 0;
          if (v9 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v10, v9);
          }
        }
        if ((*(_BYTE*)v6 & 1) != 0) {
          v11 = *(_QWORD*)(v6 + 16);
          if (v11 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v12, v11);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v13, v6);
      }
      if ((v5[2] & 1) != 0) {
        v14 = v5[4];
        if (v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v15, v14);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4, v5);
    }
    v16 = *(_QWORD*)(a1 + 808);
    *(_QWORD*)(a1 + 816) = 0;
    if (v16 != 0) {
      v17 = v16 & 7;
      if (v16 >= 8) {
        v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8 * v18) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8 * v18 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8 * v18 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8 * v18 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8 * v18 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8 * v18 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8 * v18 + 48) = 0;
          v20 = *(_QWORD*)(a1 + 800) + 8 * v18;
          v18 += 8;
          *(_QWORD*)(v20 + 56) = 0;
        } while (v19 != v18);
      }
      else {
        v18 = 0;
      }
      if (v17 != 0) {
        v21 = 8 * v18;
        do {
          --v17;
          *(_QWORD*)(*(_QWORD*)(a1 + 800) + v21) = 0;
          v21 += 8;
        } while (v17 != 0);
      }
    }
    *(_QWORD*)(a1 + 824) = 0;
  }
  if ((*(_BYTE*)(a1 + 840) & 1) != 0) {
    v22 = *(_QWORD*)(a1 + 856);
    if (v22 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v23, v22);
    }
  }
  v24 = *(_QWORD**)(a1 + 816);
  while (v24 != nullptr) {
    v26 = v24;
    v24 = (_QWORD*)*v24;
    v27 = v26[5];
    v26[5] = 0;
    if (v27 != 0) {
      v28 = *(_QWORD*)(v27 + 24);
      *(_QWORD*)(v27 + 24) = 0;
      if (v28 != 0) {
        v29 = *(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0 ? 128LL : 56LL;
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v29, v28);
        v30 = *(_QWORD*)(v27 + 24);
        *(_QWORD*)(v27 + 24) = 0;
        if (v30 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v31, v30);
        }
      }
      if ((*(_BYTE*)v27 & 1) != 0) {
        v32 = *(_QWORD*)(v27 + 16);
        if (v32 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v33 = 128;
          }
          else {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v33, v32);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v34 = 128;
      }
      else {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v34, v27);
    }
    if ((v26[2] & 1) != 0) {
      v35 = v26[4];
      if (v35 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v36 = 128;
        }
        else {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v36, v35);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
      v25 = 128;
    }
    else {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v25, v26);
  }
  v37 = *(_QWORD*)(a1 + 800);
  *(_QWORD*)(a1 + 800) = 0;
  if (v37 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v38, v37);
  }
  return GameRoutine_6315e0(a1);
}

__int64 PropertyFile_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  int v7;
  __int64 v8;
  unsigned __int8* v9;
  __int64 v10;
  unsigned __int8* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = *(_QWORD*)(result + 576);
  if (v1 < 4) {
    return result;
  }
  v2 = *(_QWORD*)(result + 592);
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v4 = v2 + v1;
  v5 = v2 + 3;
  do {
    v6 = (unsigned __int8*)v5;
    while (1) {
      v7 = *v6;
      if (v7 != 13) {
        break;
      }
      if (v6[1] == 10) {
        v11 = v6;
        goto LABEL_19;
      }
    LABEL_5:
      if ((unsigned __int64)++v6 >= v4) {
        return result;
      }
    }
    if (v7 != 58) {
      goto LABEL_5;
    }
    v8 = result;
    *v6 = 0;
    result = GameRoutine_609260((float*)(result + 800), v5, 0);
    *v6 = 58;
    v9 = v6 + 1;
    if ((unsigned __int64)v9 >= v4) {
      return result;
    }
    v10 = result;
    v11 = v9;
    while (*v11 != 13 || v11[1] != 10) {
      if ((unsigned __int64)++v11 >= v4) {
        return result;
      }
    }
    *v11 = 0;
    v12 = strlen(v9);
    v13 = fw_memory_HeapManager_Allocate(*v3, v12 + 1, 16, 0);
    memset(v13, 0, v12 + 1, v14, v15, v16);
    v17 = *(_QWORD*)(v10 + 24);
    *(_QWORD*)(v10 + 24) = v13;
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*v3 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*v3 + v18, v17);
      v13 = *(_QWORD*)(v10 + 24);
    }
    strcpy(v13, v9);
    *(_BYTE*)(v10 + 36) = 0;
    *v11 = 13;
    result = v8;
  LABEL_19:
    v5 = (__int64)(v11 + 2);
  } while ((unsigned __int64)(v11 + 2) < v4);
  return result;
}

#pragma GCC visibility pop
