#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_194adf0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ObjectCullingJob_Unknown3(__int64 result);

__int64 ObjectCullingJob_Unknown3(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  _QWORD* v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned int v8;
  __int64* v9;
  int* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  int* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  int* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  int* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  __int64* v43;
  int v44;
  _DWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  _DWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  int v58;
  _DWORD* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  _DWORD* v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  int* v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  int* v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  int v88;
  unsigned int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  _QWORD* v94;

  if ((int)*(_QWORD*)(result + 40) < 1) {
    return result;
  }
  v1 = *(_QWORD*)(result + 40) & 0x7FFFFFFFLL;
  v2 = -1;
  v3 = -1;
  v4 = (_QWORD*)result;
  v5 = 0;
  v6 = 0;
  v94 = (_QWORD*)result;
  v91 = -1;
  v92 = -1;
  v86 = v1;
  do {
    if (v4[7] != 0) {
      v8 = *(_DWORD*)(v4[6] + 4 * v5);
      if (v4[9] == 0) {
        goto LABEL_9;
      }
    LABEL_8:
      v8 += *(_DWORD*)(v4[8] + 4 * v5);
      goto LABEL_9;
    }
    v8 = 0;
    if (v4[9] != 0) {
      goto LABEL_8;
    }
  LABEL_9:
    if (v4[11] != 0) {
      v8 += *(_DWORD*)(v4[10] + 4 * v5);
    }
    if (v4[13] != 0) {
      v8 += *(_DWORD*)(v4[12] + 4 * v5);
    }
    if (v4[15] != 0) {
      v8 += *(_DWORD*)(v4[14] + 4 * v5);
    }
    if (v4[17] != 0) {
      v8 += *(_DWORD*)(v4[16] + 4 * v5);
    }
    if (v8 != 0) {
      if ((int)v8 < 64) {
        v6 += v8;
        if (v6 < 64) {
          v7 = v3 | v2;
          v2 &= ~((v3 | v2) >> 31);
          v91 = v5;
          v92 = v8;
          if (v7 <= -1) {
            v3 = v5;
          }
        }
        else {
          v13 = (__int64*)v4[18];
          v14 = (int*)v13[1];
          v15 = v13[2];
          if ((unsigned __int64)v14 >= v15) {
            v17 = *v13;
            v18 = v8;
            v19 = (__int64)v14 - *v13;
            v20 = (v19 >> 4) + 1;
            if (v20 >> 60 != 0) {
              goto LABEL_118;
            }
            v21 = v15 - v17;
            v22 = v2;
            if (v21 >> 3 > v20) {
              v20 = v21 >> 3;
            }
            if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF0LL) {
              v23 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v23 = v20;
            }
            if (v23 != 0) {
              if (v23 >> 60 != 0) {
                goto LABEL_119;
              }
              v24 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v23, 16, 0);
            }
            else {
              v24 = 0;
            }
            v32 = (int*)(v24 + v19);
            v33 = v24 + 16 * v23;
            v34 = v24 + v19 - 16 * (v19 >> 4);
            *v32 = v3;
            v32[1] = v22;
            v32[2] = v5;
            v32[3] = v18;
            v16 = v24 + v19 + 16;
            result = memcpy(v34, v17, v19);
            *v13 = v34;
            v13[1] = v16;
            v13[2] = v33;
            if (v17 != 0) {
              v35 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v35 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
            }
            v4 = v94;
          }
          else {
            *v14 = v3;
            v14[1] = v2;
            v16 = (__int64)(v14 + 4);
            v14[2] = v5;
            v14[3] = v8;
          }
          v6 = 0;
          v13[1] = v16;
          v3 = -1;
          v2 = -1;
          v91 = -1;
          v92 = -1;
        }
      }
      else {
        if (v3 < 0 || v2 < 0) {
          v87 = v6;
          v88 = v2;
          v90 = v3;
        }
        else {
          v9 = (__int64*)v4[18];
          v10 = (int*)v9[1];
          v11 = v9[2];
          if ((unsigned __int64)v10 >= v11) {
            v25 = *v9;
            v26 = v8;
            v27 = (__int64)v10 - *v9;
            v28 = (v27 >> 4) + 1;
            if (v28 >> 60 != 0) {
              goto LABEL_118;
            }
            v29 = v11 - v25;
            if (v29 >> 3 > v28) {
              v28 = v29 >> 3;
            }
            if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF0LL) {
              v30 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v30 = v28;
            }
            if (v30 != 0) {
              if (v30 >> 60 != 0) {
                goto LABEL_119;
              }
              v31 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v30, 16, 0);
            }
            else {
              v31 = 0;
            }
            v36 = (int*)(v31 + v27);
            v37 = v31 + 16 * v30;
            v38 = v31 + v27 - 16 * (v27 >> 4);
            *v36 = v3;
            v36[1] = 0;
            v12 = v31 + v27 + 16;
            v36[2] = v91;
            v36[3] = v92;
            result = memcpy(v38, v25, v27);
            *v9 = v38;
            v9[1] = v12;
            v9[2] = v37;
            if (v25 != 0) {
              v39 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v39 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v39);
            }
            v8 = v26;
          }
          else {
            *v10 = v3;
            v10[1] = 0;
            v12 = (__int64)(v10 + 4);
            v10[2] = v91;
            v10[3] = v92;
          }
          v9[1] = v12;
          v90 = -1;
          v87 = 0;
          v88 = -1;
          v91 = -1;
          v92 = -1;
        }
        v89 = v8;
        v93 = (v8 >> 6) - 1;
        if (v8 >= 0x80) {
          v40 = (v8 >> 6) - 1;
          v41 = 64;
          do {
            v43 = (__int64*)v4[18];
            v44 = v41 - 64;
            v45 = (_DWORD*)v43[1];
            v46 = v43[2];
            if ((unsigned __int64)v45 < v46) {
              *v45 = v5;
              v45[1] = v44;
              v42 = (__int64)(v45 + 4);
              v45[2] = v5;
              v45[3] = v41;
            }
            else {
              v47 = *v43;
              v48 = (__int64)v45 - *v43;
              v49 = (v48 >> 4) + 1;
              if (v49 >> 60 != 0) {
                goto LABEL_118;
              }
              v50 = v46 - v47;
              if (v50 >> 3 > v49) {
                v49 = v50 >> 3;
              }
              if ((unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF0LL) {
                v51 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v51 = v49;
              }
              if (v51 != 0) {
                if (v51 >> 60 != 0) {
                  goto LABEL_119;
                }
                v52 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v51, 16, 0);
              }
              else {
                v52 = 0;
              }
              v53 = (_DWORD*)(v52 + v48);
              v54 = v52 + 16 * v51;
              *v53 = v5;
              v53[1] = v44;
              v55 = v52 + v48 - 16 * (v48 >> 4);
              v53[2] = v5;
              v53[3] = v41;
              v42 = v52 + v48 + 16;
              result = memcpy(v55, v47, v48);
              *v43 = v55;
              v43[1] = v42;
              v43[2] = v54;
              if (v47 != 0) {
                v56 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v56 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
              }
              v4 = v94;
            }
            --v40;
            v41 += 64;
            v43[1] = v42;
          } while (v40 != 0);
        }
        v57 = (__int64*)v4[18];
        v58 = v93 << 6;
        v59 = (_DWORD*)v57[1];
        v60 = v57[2];
        if ((unsigned __int64)v59 >= v60) {
          v62 = *v57;
          v63 = (__int64)v59 - *v57;
          v64 = (v63 >> 4) + 1;
          if (v64 >> 60 != 0) {
            goto LABEL_118;
          }
          v65 = v60 - v62;
          v3 = v90;
          if (v65 >> 3 > v64) {
            v64 = v65 >> 3;
          }
          if ((unsigned __int64)v65 >= 0x7FFFFFFFFFFFFFF0LL) {
            v66 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v66 = v64;
          }
          if (v66 != 0) {
            if (v66 >> 60 != 0) {
              goto LABEL_119;
            }
            v67 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v66, 16, 0);
          }
          else {
            v67 = 0;
          }
          v68 = (_DWORD*)(v67 + v63);
          v69 = v67 + 16 * v66;
          *v68 = v5;
          v68[1] = v58;
          v70 = v67 + v63 - 16 * (v63 >> 4);
          v61 = v67 + v63 + 16;
          v68[2] = v5;
          v68[3] = v89;
          result = memcpy(v70, v62, v63);
          *v57 = v70;
          v57[1] = v61;
          v57[2] = v69;
          if (v62 != 0) {
            v71 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v71 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
          }
        }
        else {
          v3 = v90;
          *v59 = v5;
          v59[1] = v58;
          v61 = (__int64)(v59 + 4);
          v59[2] = v5;
          v59[3] = v89;
        }
        v6 = v87;
        v2 = v88;
        v57[1] = v61;
        v1 = v86;
      }
    }
    ++v5;
  } while (v5 != v1);
  if ((v3 & 0x80000000) == 0 && (v2 & 0x80000000) == 0) {
    v72 = (__int64*)v4[18];
    v73 = (int*)v72[1];
    v74 = v72[2];
    if ((unsigned __int64)v73 >= v74) {
      v76 = *v72;
      v77 = (__int64)v73 - *v72;
      v78 = (v77 >> 4) + 1;
      if (v78 >> 60 != 0) {
      LABEL_118:
        GameRoutine_194adf0();
      }
      v79 = v74 - v76;
      if (v79 >> 3 > v78) {
        v78 = v79 >> 3;
      }
      if ((unsigned __int64)v79 >= 0x7FFFFFFFFFFFFFF0LL) {
        v80 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v80 = v78;
      }
      if (v80 != 0) {
        if (v80 >> 60 != 0) {
        LABEL_119:
          GameRoutine_60a210(result);
        }
        v81 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v80, 16, 0);
      }
      else {
        v81 = 0;
      }
      v82 = (int*)(v81 + v77);
      v83 = v81 + 16 * v80;
      v84 = v81 + v77 - 16 * (v77 >> 4);
      *v82 = v3;
      v82[1] = 0;
      v75 = v81 + v77 + 16;
      v82[2] = v91;
      v82[3] = v92;
      result = memcpy(v84, v76, v77);
      *v72 = v84;
      v72[1] = v75;
      v72[2] = v83;
      if (v76 != 0) {
        v85 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v85 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v85);
      }
    }
    else {
      *v73 = v3;
      v73[1] = 0;
      v75 = (__int64)(v73 + 4);
      v73[2] = v91;
      v73[3] = v92;
    }
    v72[1] = v75;
  }
  return result;
}

#pragma GCC visibility pop
