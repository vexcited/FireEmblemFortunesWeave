#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 timeline_21c0(unsigned int*, unsigned int*);
bool GameRoutine_c05fb0(_QWORD*, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
float GameStringReads_c3cd70(__int64, char*);
int** Components_a8a090(int** result, int**, int**, int**, int**);
void GameRoutine_c3b780(__int64, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
bool wld_a8a220(int** a1, int** a2);
void wld_c3b610(__int64 a1, unsigned int** a2);
void wld_c3e760(__int64 a1, unsigned int** a2);

bool wld_a8a220(int** a1, int** a2)
{
  __int64 v3;
  int* v4;
  int* v5;
  int* v6;
  int* v7;
  int* v8;
  int v9;
  int v10;
  int** v11;
  int* v12;
  int* v13;
  int* v14;
  int v15;
  int v16;
  int* v17;
  int* v18;
  int* v19;
  int v20;
  int v21;
  int* v22;
  int* v23;
  int** v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int* v29;
  int* v30;
  __int64 v31;
  __int64 i;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  int* v44;
  int* v45;
  int** v47;
  int v48;

  v3 = a2 - a1;
  if (v3 > 2) {
    if (v3 == 3) {
      v6 = *a1;
      v7 = a1[1];
      v8 = *(a2 - 1);
      v9 = *v7;
      v10 = *v8;
      if (*v7 < **a1) {
        if (v10 >= v9) {
          *a1 = v7;
          a1[1] = v6;
          v23 = *(a2 - 1);
          if (*v23 < *v6) {
            a1[1] = v23;
            *(a2 - 1) = v6;
          }
        }
        else {
          *a1 = v8;
          *(a2 - 1) = v6;
        }
        return true;
      }
      if (v10 >= v9) {
        return true;
      }
      a1[1] = v8;
      *(a2 - 1) = v7;
      v22 = a1[1];
    LABEL_70:
      v45 = *a1;
      if (*v22 < **a1) {
        *a1 = v22;
        a1[1] = v45;
      }
      return true;
    }
    if (v3 != 4) {
      if (v3 != 5) {
        goto LABEL_13;
      }
      Components_a8a090(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v18 = *a1;
    v17 = a1[1];
    v19 = a1[2];
    v20 = *v17;
    v21 = *v19;
    if (*v17 >= **a1) {
      if (v21 < v20) {
        a1[1] = v19;
        a1[2] = v17;
        if (*v19 < *v18) {
          *a1 = v19;
          a1[1] = v18;
        }
        goto LABEL_67;
      }
    }
    else {
      if (v21 < v20) {
        *a1 = v19;
      LABEL_65:
        a1[2] = v18;
        v17 = v18;
        goto LABEL_67;
      }
      *a1 = v17;
      a1[1] = v18;
      if (*v19 < *v18) {
        a1[1] = v19;
        goto LABEL_65;
      }
    }
    v17 = v19;
  LABEL_67:
    v43 = *(a2 - 1);
    if (*v43 >= *v17) {
      return true;
    }
    a1[2] = v43;
    *(a2 - 1) = v17;
    v44 = a1[1];
    v22 = a1[2];
    if (*v22 >= *v44) {
      return true;
    }
    a1[1] = v22;
    a1[2] = v44;
    goto LABEL_70;
  }
  if ((unsigned __int64)v3 < 2) {
    return true;
  }
  if (v3 == 2) {
    v4 = *(a2 - 1);
    v5 = *a1;
    if (*v4 < **a1) {
      *a1 = v4;
      *(a2 - 1) = v5;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v12 = a1[2];
  v13 = *a1;
  v14 = a1[1];
  v15 = *v14;
  v16 = *v12;
  if (*v14 >= **a1) {
    if (v16 < v15) {
      a1[1] = v12;
      a1[2] = v14;
      if (*v12 < *v13) {
        *a1 = v12;
        a1[1] = v13;
      }
    }
  }
  else {
    if (v16 >= v15) {
      *a1 = v14;
      a1[1] = v13;
      if (*v12 >= *v13) {
        goto LABEL_32;
      }
      a1[1] = v12;
    }
    else {
      *a1 = v12;
    }
    a1[2] = v13;
  }
LABEL_32:
  v24 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v25 = 0;
  v26 = 0;
  v27 = fw_memory_g_heap_manager_ptr;
  v47 = a2;
  while (1) {
    v29 = *v24;
    v30 = *v11;
    if (**v24 < *v30) {
      v48 = v26;
      v31 = 0;
      *v24 = nullptr;
      for (i = v25;; i -= 8) {
        v33 = (char*)a1 + i;
        *((_QWORD*)v33 + 2) = 0;
        *((_QWORD*)v33 + 3) = v30;
        if (v31 != 0) {
          v34 = *(_QWORD*)(v31 + 8);
          if (v34 != 0) {
            v35 = *(_QWORD*)v27;
            *(_QWORD*)(v31 + 16) = v34;
            if (*(_QWORD*)(v35 + 200) != 0) {
              v36 = 128;
            }
            else {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free(v35 + v36, v34);
          }
          if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
            v37 = 128;
          }
          else {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v37, v31);
        }
        if (i == -16) {
          v38 = (__int64*)a1;
          goto LABEL_57;
        }
        v30 = *(int**)((char*)a1 + i + 8);
        if (*v29 >= *v30) {
          break;
        }
        v31 = *((_QWORD*)v33 + 2);
      }
      v38 = (__int64*)((char*)a1 + i + 16);
    LABEL_57:
      v39 = *v38;
      *v38 = (__int64)v29;
      if (v39 != 0) {
        v40 = *(_QWORD*)(v39 + 8);
        if (v40 != 0) {
          v41 = *(_QWORD*)v27;
          *(_QWORD*)(v39 + 16) = v40;
          if (*(_QWORD*)(v41 + 200) != 0) {
            v42 = 128;
          }
          else {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free(v41 + v42, v40);
        }
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v28, v39);
      }
      a2 = v47;
      v26 = v48 + 1;
      if (v48 == 7) {
        return v24 + 1 == v47;
      }
    }
    v11 = v24++;
    v25 += 8;
    if (v24 == a2) {
      return true;
    }
  }
}

void wld_c3b610(__int64 a1, unsigned int** a2)
{
  _DWORD* v4;
  __int64 v5;
  unsigned int* v6;
  _DWORD* v7;
  __int64 v8;
  struct {
    __int64 v9[3];
    _DWORD* v10;
  } v9_;
  unsigned int v11;

  GameRoutine_c3b780(a1, a2);
  v9_.v10 = (_DWORD*)(a1 + 248);
  v9_.v9[0] = 0x615272656E6E6916LL;
  v9_.v9[1] = 1937074532;
  if (GameRoutine_c05fb0(a2, (__int64)v9_.v9)) {
    v4 = v9_.v10;
    if ((timeline_21c0(*a2, &v11) & 1) != 0) {
      *v4 = v11;
    }
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v9[2] != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  v9_.v9[2]);
  }
  strcpy((char*)v9_.v9, "*attenuationCorrection");
  HIBYTE(v9_.v9[2]) = 0;
  v9_.v10 = (_DWORD*)(a1 + 252);
  if (GameRoutine_c05fb0(a2, (__int64)v9_.v9)) {
    v6 = *a2;
    v7 = v9_.v10;
    if ((timeline_21c0(v6, &v11) & 1) != 0) {
      *v7 = v11;
    }
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v9[2] != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v9_.v9[2]);
  }
}

void wld_c3e760(__int64 a1, unsigned int** a2)
{
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  unsigned int* v11;
  _DWORD* v12;
  __int64 v13;
  struct {
    __int64 v14[3];
    _DWORD* v15;
  } v14_;
  unsigned int v16;

  GameRoutine_c3b780(a1, a2);
  v14_.v15 = (_DWORD*)(a1 + 256);
  v14_.v14[0] = 0x6974636572696412LL;
  v14_.v14[1] = 28271;
  GameStringReads_c3cd70((__int64)a2, (char*)v14_.v14);
  if ((v14_.v14[0] & 1) != 0 && v14_.v14[2] != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v14_.v14[2]);
  }
  strcpy((char*)v14_.v14, "\"outerConeAngleDeg");
  BYTE3(v14_.v14[2]) = 0;
  HIDWORD(v14_.v14[2]) = 0;
  v14_.v15 = (_DWORD*)(a1 + 272);
  if (GameRoutine_c05fb0(a2, (__int64)v14_.v14)) {
    v5 = v14_.v15;
    if ((timeline_21c0(*a2, &v16) & 1) != 0) {
      *v5 = v16;
    }
  }
  if ((v14_.v14[0] & 1) != 0 && v14_.v14[2] != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  v14_.v14[2]);
  }
  strcpy((char*)v14_.v14, "\"innerConeAnglePer");
  BYTE3(v14_.v14[2]) = 0;
  HIDWORD(v14_.v14[2]) = 0;
  v14_.v15 = (_DWORD*)(a1 + 276);
  if (GameRoutine_c05fb0(a2, (__int64)v14_.v14)) {
    v7 = v14_.v15;
    if ((timeline_21c0(*a2, &v16) & 1) != 0) {
      *v7 = v16;
    }
  }
  if ((v14_.v14[0] & 1) != 0 && v14_.v14[2] != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v14_.v14[2]);
  }
  v14_.v15 = (_DWORD*)(a1 + 280);
  v14_.v14[0] = 0x615272656E6E6916LL;
  v14_.v14[1] = 1937074532;
  if (GameRoutine_c05fb0(a2, (__int64)v14_.v14)) {
    v9 = v14_.v15;
    if ((timeline_21c0(*a2, &v16) & 1) != 0) {
      *v9 = v16;
    }
  }
  if ((v14_.v14[0] & 1) != 0 && v14_.v14[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v14_.v14[2]);
  }
  strcpy((char*)v14_.v14, "*attenuationCorrection");
  HIBYTE(v14_.v14[2]) = 0;
  v14_.v15 = (_DWORD*)(a1 + 284);
  if (GameRoutine_c05fb0(a2, (__int64)v14_.v14)) {
    v11 = *a2;
    v12 = v14_.v15;
    if ((timeline_21c0(v11, &v16) & 1) != 0) {
      *v12 = v16;
    }
  }
  if ((v14_.v14[0] & 1) != 0 && v14_.v14[2] != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  v14_.v14[2]);
  }
}

#pragma GCC visibility pop
