#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64* Section_18db560(__int64* result);
__int64 Section_18db600(__int64 result);
__int64* Section_18db740(__int64* result);
__int64 GameRoutine_18d72c0(_QWORD);
__int64 GameRoutine_a93ea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212ce38;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
__attribute__((swiftcall)) void Section_18d9aa0(PSEUDO_X8 x8_, __int64 result);
__int64 Section_18dabe0(__int64 result, __int64* a2);

__attribute__((swiftcall)) void Section_18d9aa0(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;

  if (*(_BYTE*)result != 7) {
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    *(_DWORD*)a2 = 13;
    {
      result;
      return;
    }
  }
  v2 = *(unsigned int**)(result + 1);
  v3 = v2[1];
  if ((_DWORD)v3 == 0) {
    v4 = 0;
    v9 = nullptr;
    v6 = 0;
  LABEL_31:
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = v6;
    *(_QWORD*)(a2 + 16) = v9;
    *(_QWORD*)(a2 + 24) = v4;
    {
      result;
      return;
    }
  }
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v3, 16, 0);
  v4 = result + 4 * v3;
  v5 = 16 * v3;
  v6 = result;
  v7 = 0;
  v8 = 0;
  v9 = (char*)result;
  while (1) {
    v10 = *v2;
    if (v8 >= v10) {
      v12 = v8 - v10;
      v13 = __clz(v12 + 16);
      v11 =
          (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)v2 + 2) + 8 * (27 - v13) +
                                        8) +
                             16LL * (unsigned int)(v12 -
                                                   *((_DWORD*)GameData_212ce38 +
                                                     28 - v13)));
    }
    else {
      v11 = (unsigned __int8*)(*((_QWORD*)v2 + 1) + v7);
    }
    v14 = *v11;
    v15 = *((_QWORD*)v11 + 1);
    if (v14 != 2) {
      break;
    }
    if (v15 >> 31 != 0) {
    LABEL_32:
      v23 = 34;
      goto LABEL_34;
    }
  LABEL_14:
    if ((unsigned __int64)v9 < v4) {
      *(_DWORD*)v9 = v15;
    }
    else {
      v16 = &v9[-v6];
      v17 = (__int64)&v9[-v6] >> 2;
      v18 = v17 + 1;
      if ((unsigned __int64)(v17 + 1) >> 62 != 0) {
        GameRoutine_6e5a20();
      }
      if ((__int64)(v4 - v6) >> 1 > v18) {
        v18 = (__int64)(v4 - v6) >> 1;
      }
      if (v4 - v6 >= 0x7FFFFFFFFFFFFFFCLL) {
        v19 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v19 = v18;
      }
      if (v19 != 0) {
        if (v19 >> 62 != 0) {
          GameRoutine_60a210(result);
        }
        v20 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v19, 16, 0);
      }
      else {
        v20 = 0;
      }
      v9 = &v16[v20];
      v4 = v20 + 4 * v19;
      *(_DWORD*)&v16[v20] = v15;
      v21 = (__int64)&v16[v20 + -4 * v17];
      result = memcpy(v21, v6, v16);
      if (v6 != 0) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
      }
      v6 = v21;
    }
    v9 += 4;
    ++v8;
    v7 += 16;
    if (v5 == v7) {
      goto LABEL_31;
    }
  }
  if (v14 == 3) {
    if (v15 != (int)v15) {
      goto LABEL_32;
    }
    goto LABEL_14;
  }
  v23 = 13;
LABEL_34:
  *(_DWORD*)a2 = v23;
  *(_QWORD*)(a2 + 8) = v6;
  *(_QWORD*)(a2 + 16) = v9;
  *(_QWORD*)(a2 + 24) = v4;
  {
    result;
    return;
  }
}

__int64 Section_18dabe0(__int64 result, __int64* a2)
{
  __int64* i;
  __int64 v3;
  unsigned int* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int8* v15;
  char* v16;
  unsigned int* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  char v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  float v29;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* j;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  int v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v65;
  unsigned __int64 v66;
  _QWORD* v67;
  __int64 v68;
  int v69;
  int v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  _QWORD* v76;
  __int64 v77;
  int v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  char v82[9];

  i = a2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)result != 8) {
    v76 = nullptr;
    v77 = 0;
    v65 = 0;
    v66 = 0;
    v74 = 0;
    v75 = 0;
    v67 = nullptr;
    v68 = 0;
    v78 = 1065353216;
    v69 = 1065353216;
    result = GameRoutine_18d72c0(&v74);
    if (i[3] == 0) {
      goto LABEL_93;
    }
    goto LABEL_72;
  }
  v4 = *(unsigned int**)(result + 1);
  v76 = nullptr;
  v77 = 0;
  v74 = 0;
  v75 = 0;
  v78 = 1065353216;
  v5 = v4[1];
  if ((_DWORD)v5 != 0) {
    v6 = 0;
    v7 = 0;
    v8 = 32 * v5;
    while (1) {
      v9 = *v4;
      if (v7 >= v9) {
        v11 = v7 - v9;
        v12 = __clz(v11 + 16);
        v10 =
            (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)v4 + 2) + 8 * (27 - v12) +
                                          8) +
                               32LL *
                                   (unsigned int)(v11 -
                                                  *((_DWORD*)GameData_212ce38 +
                                                    28 - v12)));
      }
      else {
        v10 = (unsigned __int8*)(*((_QWORD*)v4 + 1) + v6);
      }
      v13 = *v10;
      if ((v13 & 0x7F) != 6) {
        v71 = nullptr;
        v72 = 0;
        v73 = 0;
        v70 = 13;
        v67 = v76;
        v68 = v77;
        v35 = v74;
        v36 = v75;
        v74 = 0;
        v75 = 0;
        v65 = v35;
        v66 = v36;
        v69 = v78;
        if (v77 != 0) {
          v37 = v76[1];
          if ((v36 & (v36 - 1)) != 0) {
            if (v37 >= v36) {
              v37 %= v36;
            }
          }
          else {
            v37 &= v36 - 1;
          }
          *(_QWORD*)(v35 + 8 * v37) = &v67;
          v76 = nullptr;
          v77 = 0;
          if (((unsigned __int8)v71 & 1) != 0 && v73 != 0) {
            v63 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v63 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v63);
          }
        }
        goto LABEL_55;
      }
      v14 = v13 == 134 ? v10[1] : *((unsigned int*)v10 + 1);
      v15 = v13 == 6 ? *((unsigned __int8**)v10 + 1) : v10 + 2;
      if ((unsigned int)v14 >= 0x17) {
        break;
      }
      v16 = (char*)&v79 + 1;
      LOBYTE(v79) = 2 * v14;
      if ((_DWORD)v14 != 0) {
        goto LABEL_21;
      }
    LABEL_22:
      v16[v14] = 0;
      v70 = 0;
      v71 = v79;
      v72 = v80;
      v73 = v81;
      v22 = v10[16];
      v23 = *((_QWORD*)v10 + 3);
      if (v22 == 2) {
        if (v23 >> 31 == 0) {
          goto LABEL_27;
        }
      }
      else if (v22 == 3 && v23 == (int)v23) {
      LABEL_27:
        v79 = &v71;
        result = GameRoutine_a93ea0(&v74, &v71, std___1_piecewise_construct_ptr,
                                    &v79, v82);
        *(_DWORD*)(result + 40) = v23;
        v24 = 1;
        if (((unsigned __int8)v71 & 1) != 0) {
          goto LABEL_37;
        }
        goto LABEL_41;
      }
      v25 = v74;
      v26 = v75;
      v74 = 0;
      v75 = 0;
      v65 = v25;
      v66 = v26;
      v67 = v76;
      v68 = v77;
      v69 = v78;
      if (v77 != 0) {
        v27 = v76[1];
        if ((v26 & (v26 - 1)) != 0) {
          if (v27 >= v26) {
            v27 %= v26;
          }
        }
        else {
          v27 &= v26 - 1;
        }
        v24 = 0;
        *(_QWORD*)(v25 + 8 * v27) = &v67;
        v76 = nullptr;
        v77 = 0;
        if (((unsigned __int8)v71 & 1) == 0) {
          goto LABEL_41;
        }
      LABEL_37:
        if (v73 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v28 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
        }
        goto LABEL_41;
      }
      v24 = 0;
      if (((unsigned __int8)v71 & 1) != 0) {
        goto LABEL_37;
      }
    LABEL_41:
      if ((v24 & 1) == 0) {
        goto LABEL_55;
      }
      ++v7;
      v6 += 32;
      if (v8 == v6) {
        v29 = *(float*)&v78;
        v30 = v74;
        v31 = v75;
        v32 = v76;
        v33 = v77;
        goto LABEL_45;
      }
    }
    v17 = v4;
    v18 = v8;
    if ((v14 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v14 | 7) + 1;
    }
    v20 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v19, 16, 0);
    v21 = v19 | 1;
    v16 = (char*)v20;
    v80 = v14;
    v81 = v20;
    v8 = v18;
    v4 = v17;
    v79 = (_QWORD*)v21;
  LABEL_21:
    result = memmove(v16, v15, v14);
    goto LABEL_22;
  }
  v33 = 0;
  v32 = nullptr;
  v31 = 0;
  v30 = 0;
  v29 = 1.0f;
LABEL_45:
  v65 = v30;
  v66 = v31;
  v74 = 0;
  v75 = 0;
  v67 = v32;
  v68 = v33;
  v69 = LODWORD(v29);
  if (v33 != 0) {
    v34 = v32[1];
    if ((v31 & (v31 - 1)) != 0) {
      if (v34 >= v31) {
        v34 %= v31;
      }
    }
    else {
      v34 &= v31 - 1;
    }
    *(_QWORD*)(v30 + 8 * v34) = &v67;
    v76 = nullptr;
    v77 = 0;
  }
LABEL_55:
  v38 = v76;
  v3 = fw_memory_g_heap_manager_ptr;
  for (i = a2; v38 != nullptr;
       result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v39)) {
    v40 = v38;
    v38 = (_QWORD*)*v38;
    if ((v40[2] & 1) != 0 && v40[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v41 = 128;
      }
      else {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v41);
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v39 = 128;
    }
    else {
      v39 = 56;
    }
  }
  v42 = v74;
  v74 = 0;
  if (v42 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v43 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v43);
  }
  if (a2[3] != 0) {
  LABEL_72:
    for (j = (_QWORD*)i[2]; j != nullptr;
         result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v45)) {
      v46 = j;
      j = (_QWORD*)*j;
      if ((v46[2] & 1) != 0 && v46[4] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v47);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v45 = 128;
      }
      else {
        v45 = 56;
      }
    }
    v48 = i[1];
    i[2] = 0;
    if (v48 != 0) {
      v49 = v48 & 7;
      if (v48 >= 8) {
        v51 = v48 & 0xFFFFFFFFFFFFFFF8LL;
        v50 = 0;
        do {
          *(_QWORD*)(*i + 8 * v50) = 0;
          *(_QWORD*)(*i + 8 * v50 + 8) = 0;
          *(_QWORD*)(*i + 8 * v50 + 16) = 0;
          *(_QWORD*)(*i + 8 * v50 + 24) = 0;
          *(_QWORD*)(*i + 8 * v50 + 32) = 0;
          *(_QWORD*)(*i + 8 * v50 + 40) = 0;
          *(_QWORD*)(*i + 8 * v50 + 48) = 0;
          v52 = *i + 8 * v50;
          v50 += 8;
          *(_QWORD*)(v52 + 56) = 0;
        } while (v51 != v50);
      }
      else {
        v50 = 0;
      }
      if (v49 != 0) {
        v53 = 8 * v50;
        do {
          --v49;
          *(_QWORD*)(*i + v53) = 0;
          v53 += 8;
        } while (v49 != 0);
      }
    }
    i[3] = 0;
  }
LABEL_93:
  v54 = *i;
  *i = v65;
  if (v54 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v55 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v55);
  }
  v56 = v67;
  v57 = v69;
  v58 = v68;
  i[2] = (__int64)v67;
  i[1] = v66;
  i[3] = v58;
  *((_DWORD*)i + 8) = v57;
  if (v58 != 0) {
    v59 = v56[1];
    if ((v66 & (v66 - 1)) != 0) {
      if (v59 >= v66) {
        v59 %= v66;
      }
    }
    else {
      v59 &= v66 - 1;
    }
    *(_QWORD*)(*i + 8 * v59) = i + 2;
    v67 = nullptr;
    v68 = 0;
  }
  else {
    for (; v56 != nullptr;
         result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v60)) {
      v61 = v56;
      v56 = (_QWORD*)*v56;
      if ((v61[2] & 1) != 0 && v61[4] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v62 = 128;
        }
        else {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v62);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v60 = 128;
      }
      else {
        v60 = 56;
      }
    }
  }
  return result;
}

__int64* Section_18db560(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v1 = *result;
  if (*result != 0) {
    v2 = result[1];
    v3 = result;
    if (v1 == v2) {
      goto LABEL_5;
    }
    do {
      v2 -= 72;
      result = (__int64*)Section_18db600(v2);
    } while (v2 != v1);
    v4 = *v3;
    v3[1] = v1;
    if (v4 != 0) {
    LABEL_5:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
    }
  }
  return result;
}

__int64 Section_18db600(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
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

  v1 = *(_QWORD*)(result + 48);
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 56) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[3];
  if (v6 != 0) {
    v7 = v2[4];
    if (v6 == v7) {
      goto LABEL_15;
    }
    v8 = v2[4];
    do {
      v10 = *(_QWORD*)(v8 - 24);
      v8 -= 24;
      v9 = v10;
      if (v10 != 0) {
        *(_QWORD*)(v7 - 16) = v9;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
      }
      v7 = v8;
    } while (v8 != v6);
    v12 = v2[3];
    v2[4] = v6;
    if (v12 != 0) {
    LABEL_15:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
  }
  if (*v2 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
  }
  return result;
}

__int64* Section_18db740(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *result;
  if (*result != 0) {
    v2 = result[1];
    v3 = result;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v2) {
      goto LABEL_11;
    }
    v5 = result[1];
    do {
      v7 = *(_QWORD*)(v5 - 24);
      v5 -= 24;
      v6 = v7;
      if (v7 != 0) {
        *(_QWORD*)(v2 - 16) = v6;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
      }
      v2 = v5;
    } while (v5 != v1);
    v9 = *v3;
    v3[1] = v1;
    if (v9 != 0) {
    LABEL_11:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
    }
  }
  return result;
}

#pragma GCC visibility pop
