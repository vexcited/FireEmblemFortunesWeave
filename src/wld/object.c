#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*wld_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(void);
_QWORD* Object_Destructor_a8a960(_QWORD* result);
__int64 Object_a8ade0(__int64 result);

_QWORD* Object_Destructor_a8a960(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
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
  __int64 v36;

  v1 = result[67];
  v2 = result;
  *result = wld_Object_vtable;
  v3 = result[66];
  v4 = v1 - v3;
  if ((int)(v4 >> 3) >= 1) {
    v5 = ((v4 >> 3) & 0x7FFFFFFF) - 1;
    do {
      result = *(_QWORD**)(v2[66] + 8 * v5);
      if (result != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      v6 = v5-- + 1;
    } while (v6 > 1);
    v3 = v2[66];
  }
  v2[67] = v3;
  v7 = v2[63];
  v8 = v2[93];
  v2[70] = v2[69];
  v9 = v2[73];
  v2[64] = v7;
  v2[74] = v9;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v11 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v2[94] = v8;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12, v8);
  }
  v13 = v2[88];
  if (v13 != 0) {
    v14 = *v10;
    v2[89] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  v16 = v2[84];
  if (v16 != 0) {
    v17 = *v10;
    v2[85] = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v17 + v18, v16);
  }
  v19 = v2[80];
  if (v19 != 0) {
    v20 = *v10;
    v2[81] = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v20 + v21, v19);
  }
  v22 = v2[76];
  if (v22 != 0) {
    v23 = *v10;
    v2[77] = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v23 + v24, v22);
  }
  v25 = v2[73];
  if (v25 != 0) {
    v26 = *v10;
    v2[74] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27, v25);
  }
  v28 = v2[69];
  if (v28 != 0) {
    v29 = *v10;
    v2[70] = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v29 + v30, v28);
  }
  v31 = v2[66];
  if (v31 != 0) {
    v32 = *v10;
    v2[67] = v31;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v32 + v33, v31);
  }
  v34 = v2[63];
  if (v34 != 0) {
    v35 = *v10;
    v2[64] = v34;
    v36 = 128;
    if (*(_QWORD*)(v35 + 200) == 0) {
      v36 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v35 + v36, v34);
  }
  return result;
}

__int64 Object_a8ade0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  char v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  _BYTE* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  char v79;
  char v80;
  char v81;

  v1 = result;
  if (*(_BYTE*)(result + 576) == 1) {
    v2 = *(_QWORD*)(result + 552);
    v3 = *(_QWORD*)(result + 560);
    v4 = *(_QWORD*)(result + 600);
    v5 = v3 - v2;
    v6 = *(_QWORD*)(result + 584);
    if (v3 - v2 <= (unsigned __int64)(v4 - v6)) {
      v14 = *(_QWORD*)(result + 592);
      v15 = v14 - v6;
      if (v5 > (unsigned __int64)(v14 - v6)) {
        v16 = v2 + v15;
        if (v14 != v6) {
          result =
              memmove(*(_QWORD*)(result + 584), *(_QWORD*)(result + 552), v15);
          v14 = *(_QWORD*)(v1 + 592);
        }
        if (v3 != v16) {
          result = memmove(v14, v16, v3 - v16);
        }
        v17 = v14 + v3 - v16;
        goto LABEL_28;
      }
      if (v3 != v2) {
        result = memmove(*(_QWORD*)(result + 584), *(_QWORD*)(result + 552),
                         v3 - v2);
      }
    }
    else {
      v7 = v5 >> 3;
      if (v6 != 0) {
        *(_QWORD*)(result + 592) = v6;
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v6);
        v4 = 0;
        *(_QWORD*)(v1 + 592) = 0;
        *(_QWORD*)(v1 + 600) = 0;
        *(_QWORD*)(v1 + 584) = 0;
      }
      if (v7 >> 61 != 0) {
        goto LABEL_124;
      }
      v9 = v4 >> 2;
      if (v4 >> 2 <= v7) {
        v9 = v5 >> 3;
      }
      v10 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                         : v9;
      if (v10 >> 61 != 0) {
      LABEL_124:
        GameRoutine_98f290();
      }
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
      v6 = result;
      *(_QWORD*)(v1 + 584) = result;
      *(_QWORD*)(v1 + 592) = result;
      *(_QWORD*)(v1 + 600) = result + 8 * v10;
      if (v3 != v2) {
        result = memcpy(result, v2, v3 - v2);
      }
    }
    v17 = v6 + v5;
  LABEL_28:
    *(_QWORD*)(v1 + 592) = v17;
    v18 = *(_QWORD*)(v1 + 640);
    *(_BYTE*)(v1 + 576) = 0;
    *(_BYTE*)(v1 + 632) = 0;
    *(_BYTE*)(v1 + 664) = 0;
    *(_BYTE*)(v1 + 696) = 0;
    *(_BYTE*)(v1 + 728) = 0;
    *(_QWORD*)(v1 + 648) = v18;
    *(_QWORD*)(v1 + 680) = *(_QWORD*)(v1 + 672);
    *(_QWORD*)(v1 + 712) = *(_QWORD*)(v1 + 704);
    v78 = (__int64*)(v1 + 608);
  LABEL_29:
    v11 = 0;
    v12 = 0;
    *(_QWORD*)(v1 + 616) = *(_QWORD*)(v1 + 608);
    v13 = *(unsigned __int8*)(v1 + 664);
    if ((v13 & 1) != 0) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  v78 = (__int64*)(result + 608);
  if ((*(_BYTE*)(result + 632) & 1) == 0) {
    goto LABEL_29;
  }
  v11 = 1;
  v12 = 1;
  v13 = *(unsigned __int8*)(result + 664);
  if ((v13 & 1) == 0) {
  LABEL_30:
    *(_QWORD*)(v1 + 648) = *(_QWORD*)(v1 + 640);
  }

LABEL_31:
  v19 = *(_BYTE*)(v1 + 696);
  if ((v19 & 1) != 0) {
    v20 = *(_BYTE*)(v1 + 728);
    if ((v20 & 1) != 0) {
    LABEL_33:
      if ((v13 & v12) != 0 && (v19 & 1) != 0) {
        return result;
      }
      goto LABEL_38;
    }
  }
  else {
    *(_QWORD*)(v1 + 680) = *(_QWORD*)(v1 + 672);
    v20 = *(_BYTE*)(v1 + 728);
    if ((v20 & 1) != 0) {
      goto LABEL_33;
    }
  }
  *(_QWORD*)(v1 + 712) = *(_QWORD*)(v1 + 704);

LABEL_38:
  v21 = *(_QWORD**)(v1 + 584);
  v22 = *(_QWORD**)(v1 + 592);
  if (v21 != v22) {
    v80 = v13;
    v81 = v11;
    v79 = v20;
    do {
      v24 = (_BYTE*)*v21;
      if ((v11 & 1) != 0 || v24[17] != 0) {
        if ((v13 & 1) != 0) {
          goto LABEL_76;
        }
      }
      else {
        v28 = *(_QWORD**)(v1 + 616);
        v29 = *(_QWORD*)(v1 + 624);
        if ((unsigned __int64)v28 >= v29) {
          v31 = *v78;
          v32 = (__int64)v28 - *v78;
          v33 = (v32 >> 3) + 1;
          if (v33 >> 61 != 0) {
            goto LABEL_124;
          }
          v34 = v29 - v31;
          if (v34 >> 2 > v33) {
            v33 = v34 >> 2;
          }
          if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
            v35 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v35 = v33;
          }
          if (v35 != 0) {
            if (v35 >> 61 != 0) {
              goto LABEL_125;
            }
            v36 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
          }
          else {
            v36 = 0;
          }
          v44 = v36 + 8 * v35;
          v45 = v36 + v32 - 8 * (v32 >> 3);
          *(_QWORD*)(v36 + v32) = v24;
          v30 = v36 + v32 + 8;
          result = memcpy(v45, v31, v32);
          *(_QWORD*)(v1 + 608) = v45;
          *(_QWORD*)(v1 + 616) = v30;
          *(_QWORD*)(v1 + 624) = v44;
          if (v31 != 0) {
            v46 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v46 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v31);
          }
          LOBYTE(v13) = v80;
          v11 = v81;
          v20 = v79;
        }
        else {
          *v28 = v24;
          v30 = (__int64)(v28 + 1);
        }
        *(_QWORD*)(v1 + 616) = v30;
        if ((v13 & 1) != 0) {
          goto LABEL_76;
        }
      }
      if (v24[18] == 0) {
        v25 = *(_QWORD**)(v1 + 648);
        v26 = *(_QWORD*)(v1 + 656);
        if ((unsigned __int64)v25 >= v26) {
          v37 = *(_QWORD*)(v1 + 640);
          v38 = (char*)v25 - v37;
          v39 = ((__int64)v25 - v37) >> 3;
          v40 = v39 + 1;
          if ((unsigned __int64)(v39 + 1) >> 61 != 0) {
            goto LABEL_124;
          }
          v41 = v26 - v37;
          if (v41 >> 2 > v40) {
            v40 = v41 >> 2;
          }
          if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
            v42 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v42 = v40;
          }
          if (v42 != 0) {
            if (v42 >> 61 != 0) {
              goto LABEL_125;
            }
            v43 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v42, 16, 0);
          }
          else {
            v43 = 0;
          }
          v57 = v43 + 8 * v42;
          v58 = (char*)v25 - v37;
          v59 = (__int64)&v38[v43 + -8 * v39];
          *(_QWORD*)&v38[v43] = v24;
          v27 = (__int64)&v38[v43 + 8];
          result = memcpy(v59, v37, v58);
          *(_QWORD*)(v1 + 640) = v59;
          *(_QWORD*)(v1 + 648) = v27;
          *(_QWORD*)(v1 + 656) = v57;
          if (v37 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v60 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v37);
          }
          LOBYTE(v13) = v80;
          v11 = v81;
          v20 = v79;
        }
        else {
          *v25 = v24;
          v27 = (__int64)(v25 + 1);
        }
        *(_QWORD*)(v1 + 648) = v27;
        if ((v19 & 1) != 0) {
          goto LABEL_104;
        }
        goto LABEL_77;
      }
    LABEL_76:
      if ((v19 & 1) != 0) {
        goto LABEL_104;
      }
    LABEL_77:
      if (v24[19] == 0) {
        v47 = *(_QWORD**)(v1 + 680);
        v48 = *(_QWORD*)(v1 + 688);
        if ((unsigned __int64)v47 >= v48) {
          v50 = *(_QWORD*)(v1 + 672);
          v51 = (char*)v47 - v50;
          v52 = ((__int64)v47 - v50) >> 3;
          v53 = v52 + 1;
          if ((unsigned __int64)(v52 + 1) >> 61 != 0) {
            goto LABEL_124;
          }
          v54 = v48 - v50;
          if (v54 >> 2 > v53) {
            v53 = v54 >> 2;
          }
          if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
            v55 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v55 = v53;
          }
          if (v55 != 0) {
            if (v55 >> 61 != 0) {
              goto LABEL_125;
            }
            v56 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
          }
          else {
            v56 = 0;
          }
          v61 = v56 + 8 * v55;
          v62 = (char*)v47 - v50;
          v63 = (__int64)&v51[v56 + -8 * v52];
          *(_QWORD*)&v51[v56] = v24;
          v49 = (__int64)&v51[v56 + 8];
          result = memcpy(v63, v50, v62);
          *(_QWORD*)(v1 + 672) = v63;
          *(_QWORD*)(v1 + 680) = v49;
          *(_QWORD*)(v1 + 688) = v61;
          if (v50 != 0) {
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v64 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v50);
          }
          LOBYTE(v13) = v80;
          v11 = v81;
          v20 = v79;
        }
        else {
          *v47 = v24;
          v49 = (__int64)(v47 + 1);
        }
        *(_QWORD*)(v1 + 680) = v49;
      }
    LABEL_104:
      if ((v20 & 1) == 0 && v24[20] == 0) {
        v65 = *(_QWORD**)(v1 + 712);
        v66 = *(_QWORD*)(v1 + 720);
        if ((unsigned __int64)v65 < v66) {
          *v65 = v24;
          v23 = (__int64)(v65 + 1);
        }
        else {
          v67 = *(_QWORD*)(v1 + 704);
          v68 = (char*)v65 - v67;
          v69 = ((__int64)v65 - v67) >> 3;
          v70 = v69 + 1;
          if ((unsigned __int64)(v69 + 1) >> 61 != 0) {
            goto LABEL_124;
          }
          v71 = v66 - v67;
          if (v71 >> 2 > v70) {
            v70 = v71 >> 2;
          }
          if ((unsigned __int64)v71 >= 0x7FFFFFFFFFFFFFF8LL) {
            v72 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v72 = v70;
          }
          if (v72 != 0) {
            if (v72 >> 61 != 0) {
            LABEL_125:
              GameRoutine_60a210(result);
            }
            v73 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v72, 16, 0);
          }
          else {
            v73 = 0;
          }
          v74 = v73 + 8 * v72;
          v75 = (char*)v65 - v67;
          v76 = (__int64)&v68[v73 + -8 * v69];
          *(_QWORD*)&v68[v73] = v24;
          v23 = (__int64)&v68[v73 + 8];
          result = memcpy(v76, v67, v75);
          *(_QWORD*)(v1 + 704) = v76;
          *(_QWORD*)(v1 + 712) = v23;
          *(_QWORD*)(v1 + 720) = v74;
          if (v67 != 0) {
            v77 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v77 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v67);
          }
          LOBYTE(v13) = v80;
          v11 = v81;
          v20 = v79;
        }
        *(_QWORD*)(v1 + 712) = v23;
      }
      ++v21;
    } while (v21 != v22);
  }
  *(_BYTE*)(v1 + 632) = 1;
  *(_BYTE*)(v1 + 664) = 1;
  *(_BYTE*)(v1 + 696) = 1;
  *(_BYTE*)(v1 + 728) = 1;
  return result;
}

#pragma GCC visibility pop
