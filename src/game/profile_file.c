#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66bfc0(_QWORD);
__int64 GameRoutine_97ac00(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8d8[6];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_977b40(void);
_QWORD* ProfileFile_Unknown4(_QWORD* result);

_QWORD* ProfileFile_Unknown4(_QWORD* result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD** v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  float v14;
  float v15;
  float v16;
  _BOOL8 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD** v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  _QWORD* i;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 k;
  _QWORD* v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  _QWORD* j;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned int** v94;
  unsigned int** v95;
  unsigned int* v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  _QWORD* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  __int64 v106;
  _QWORD* v107;
  unsigned __int64 v108;
  _QWORD* v109;
  unsigned __int64 v110;
  float v111;

  v105 = result;
  v109 = nullptr;
  v110 = 0;
  v107 = nullptr;
  v108 = 0;
  v111 = 1.0f;
  v2 = *(__int64**)(*GameData_212c8d8[0] + 64);
  v3 = *(__int64**)(*GameData_212c8d8[0] + 72);
  if (v2 == v3) {
    goto LABEL_118;
  }
  do {
    v4 = *v2;
    v5 = *(unsigned __int64**)(*v2 + 56);
    if (v5 == nullptr) {
      goto LABEL_5;
    }
    v6 = *v5;
    v7 = v108;
    if (v108 != 0) {
      v8 = v108 - 1;
      if ((v108 & (v108 - 1)) != 0) {
        v1 = v6;
        if (v6 >= v108) {
          v1 = v6 % v108;
        }
      }
      else {
        v1 = v8 & v6;
      }
      v9 = (_QWORD**)v107[v1];
      if (v9 != nullptr) {
        v10 = *v9;
        if (*v9 != nullptr) {
          if ((v108 & v8) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == v6) {
                if (v10[2] == v6) {
                  goto LABEL_102;
                }
              }
              else if ((v12 & v8) != v1) {
                goto LABEL_27;
              }
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                goto LABEL_27;
              }
            }
          }
          do {
            v11 = v10[1];
            if (v11 == v6) {
              if (v10[2] == v6) {
                goto LABEL_102;
              }
            }
            else {
              if (v11 >= v108) {
                v11 %= v108;
              }
              if (v11 != v1) {
                break;
              }
            }
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  LABEL_27:
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v13 = v110;
    v14 = v111;
    v10 = result;
    *result = 0;
    result[1] = v6;
    result[2] = v6;
    result[3] = 0;
    result[4] = 0;
    result[5] = 0;
    v15 = (float)(v13 + 1);
    if (v108 == 0 || (float)(v14 * (float)v108) < v15) {
      v16 = v15 / v14;
      v17 = (v108 & (v108 - 1)) != 0;
      if (v108 < 3) {
        v17 = true;
      }
      v18 = v17 | (2 * v108);
      v19 = vcvtps_u64_f32(v16);
      if (v18 <= v19) {
        v20 = v19;
      }
      else {
        v20 = v18;
      }
      if (v20 == 1) {
        v20 = 2;
      }
      else if ((v20 & (v20 - 1)) != 0) {
        result = (_QWORD*)std___1___next_prime(v20);
        v7 = v108;
        v20 = (unsigned __int64)result;
      }
      if (v20 <= v7) {
        if (v20 >= v7) {
          goto LABEL_88;
        }
        result = (_QWORD*)vcvtps_u64_f32((float)v110 / v111);
        if (v7 < 3 || (v7 & (v7 - 1)) != 0) {
          result = (_QWORD*)std___1___next_prime(result);
        }
        else {
          v25 = 1LL << -(char)__clz((unsigned __int64)result - 1);
          if ((unsigned __int64)result >= 2) {
            result = (_QWORD*)v25;
          }
        }
        if (v20 <= (unsigned __int64)result) {
          v20 = (unsigned __int64)result;
        }
        if (v20 >= v7) {
          goto LABEL_88;
        }
        if (v20 == 0) {
          v37 = v107;
          v107 = nullptr;
          if (v37 != nullptr) {
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v37);
          }
          v108 = 0;
          goto LABEL_88;
        }
      }
      if (v20 >> 61 != 0) {
        goto LABEL_200;
      }
      v21 = fw_memory_g_heap_manager_ptr;
      result = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
      v22 = v107;
      v107 = result;
      if (v22 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
          v23 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v23, v22);
      }
      v108 = v20;
      if (v20 >= 8) {
        v24 = 0;
        do {
          v107[v24] = 0;
          v107[v24 + 1] = 0;
          v107[v24 + 2] = 0;
          v107[v24 + 3] = 0;
          v107[v24 + 4] = 0;
          v107[v24 + 5] = 0;
          v107[v24 + 6] = 0;
          v26 = &v107[v24];
          v24 += 8;
          v26[7] = 0;
        } while ((v20 & 0x1FFFFFFFFFFFFFF8LL) != v24);
      }
      else {
        v24 = 0;
      }
      v27 = v20 & 7;
      if ((v20 & 7) != 0) {
        v28 = v24;
        do {
          --v27;
          v107[v28++] = 0;
        } while (v27 != 0);
      }
      v29 = (_QWORD**)v109;
      if (v109 == nullptr) {
        goto LABEL_88;
      }
      v30 = v109[1];
      v31 = v20 - 1;
      if ((v20 & (v20 - 1)) == 0) {
        v34 = v30 & v31;
        v107[v34] = &v109;
        while (1) {
          v35 = *v29;
          if (*v29 == nullptr) {
            break;
          }
          v36 = v35[1] & v31;
          if (v36 == v34) {
            v29 = (_QWORD**)*v29;
          }
          else if (v107[v36] != 0) {
            *v29 = (_QWORD*)*v35;
            *v35 = *(_QWORD*)v107[v36];
            *(_QWORD*)v107[v36] = v35;
          }
          else {
            v107[v36] = v29;
            v29 = (_QWORD**)v35;
            v34 = v36;
          }
        }
      LABEL_88:
        v7 = v108;
        if ((v108 & (v108 - 1)) != 0) {
          if (v6 >= v108) {
            v1 = v6 % v108;
          }
          else {
            v1 = v6;
          }
        }
        else {
          v1 = (v108 - 1) & v6;
        }
        goto LABEL_93;
      }
      if (v30 >= v20) {
        v30 %= v20;
      }
      v107[v30] = &v109;
      v32 = *v29;
      if (*v29 == nullptr) {
        goto LABEL_88;
      }
      while (1) {
        v33 = v32[1];
        if (v33 >= v20) {
          v33 %= v20;
        }
        if (v33 != v30) {
          if (v107[v33] == 0) {
            v107[v33] = v29;
            goto LABEL_65;
          }
          *v29 = (_QWORD*)*v32;
          *v32 = *(_QWORD*)v107[v33];
          *(_QWORD*)v107[v33] = v32;
          v32 = v29;
        }
        v33 = v30;
      LABEL_65:
        v29 = (_QWORD**)v32;
        v32 = (_QWORD*)*v32;
        v30 = v33;
        if (v32 == nullptr) {
          goto LABEL_88;
        }
      }
    }
  LABEL_93:
    v39 = (_QWORD*)v107[v1];
    if (v39 != nullptr) {
      *v10 = *v39;
      *v39 = v10;
    }
    else {
      v40 = v109;
      v109 = v10;
      *v10 = v40;
      v107[v1] = &v109;
      if (*v10 != 0) {
        v41 = *(_QWORD*)(*v10 + 8LL);
        if ((v7 & (v7 - 1)) != 0) {
          if (v41 >= v7) {
            v41 %= v7;
          }
        }
        else {
          v41 &= v7 - 1;
        }
        v107[v41] = v10;
      }
    }
    ++v110;
  LABEL_102:
    v43 = (_QWORD*)v10[4];
    v42 = v10[5];
    if ((unsigned __int64)v43 < v42) {
      *v43 = v4;
      v1 = (__int64)(v43 + 1);
    }
    else {
      v44 = v10[3];
      v45 = (char*)v43 - v44;
      v46 = ((__int64)v43 - v44) >> 3;
      v47 = v46 + 1;
      if ((unsigned __int64)(v46 + 1) >> 61 != 0) {
      LABEL_199:
        GameRoutine_977b40();
      }
      v48 = v42 - v44;
      if (v48 >> 2 > v47) {
        v47 = v48 >> 2;
      }
      if ((unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFF8LL) {
        v49 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v49 = v47;
      }
      if (v49 != 0) {
        if (v49 >> 61 != 0) {
        LABEL_200:
          GameRoutine_60a210(result);
        }
        v50 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v49, 16, 0);
      }
      else {
        v50 = 0;
      }
      v51 = v50 + 8 * v49;
      v52 = (char*)v43 - v44;
      v53 = (__int64)&v45[v50 + -8 * v46];
      *(_QWORD*)&v45[v50] = v4;
      v1 = (__int64)&v45[v50 + 8];
      result = (_QWORD*)memcpy(v53, v44, v52);
      v10[3] = v53;
      v10[4] = v1;
      v10[5] = v51;
      if (v44 != 0) {
        v54 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v54 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v44);
      }
    }
    v10[4] = v1;
  LABEL_5:
    ++v2;
  } while (v2 != v3);
  for (i = v109; i != nullptr; i = (_QWORD*)*i) {
    v73 = i[3];
    v106 = i[4];
    for (j = (_QWORD*)fw_memory_g_heap_manager_ptr; v73 != v106; v73 += 8) {
      v76 = *(_QWORD**)(*(_QWORD*)v73 + 24LL);
      if (v76 + 12 != i + 3) {
        v77 = i[3];
        v78 = i[4];
        v79 = v76[14];
        v80 = v78 - v77;
        v81 = v76[12];
        if (v78 - v77 <= (unsigned __int64)(v79 - v81)) {
          v87 = v76[13];
          v88 = v87 - v81;
          if (v80 <= (unsigned __int64)(v87 - v81)) {
            if (v78 != v77) {
              result = (_QWORD*)memmove(v76[12], i[3], v78 - v77);
            }
            v75 = v81 + v80;
          }
          else {
            if (v87 != v81) {
              result = (_QWORD*)memmove(v76[12], i[3], v87 - v81);
              v87 = v76[13];
            }
            v89 = v77 + v88;
            v90 = v78 - (v77 + v88);
            if (v90 != 0) {
              result = (_QWORD*)memmove(v87, v89, v90);
            }
            v75 = v87 + v90;
          }
          v76[13] = v75;
          j = (_QWORD*)fw_memory_g_heap_manager_ptr;
        }
        else {
          if (v81 != 0) {
            v82 = *j;
            v76[13] = v81;
            v83 = 128;
            if (*(_QWORD*)(v82 + 200) == 0) {
              v83 = 56;
            }
            nn_mem_StandardAllocator_Free(v82 + v83, v81);
            v79 = 0;
            v76[13] = 0;
            v76[14] = 0;
            v76[12] = 0;
          }
          v84 = v80 >> 3;
          if ((unsigned __int64)(v80 >> 3) >> 61 != 0) {
            goto LABEL_199;
          }
          if (v79 >> 2 > v84) {
            v84 = v79 >> 2;
          }
          v85 = (unsigned __int64)v79 >= 0x7FFFFFFFFFFFFFF8LL
                    ? 0x1FFFFFFFFFFFFFFFLL
                    : v84;
          if (v85 >> 61 != 0) {
            goto LABEL_199;
          }
          result = (_QWORD*)fw_memory_HeapManager_Allocate(*j, 8 * v85, 16, 0);
          v86 = result;
          v76[12] = result;
          v76[13] = result;
          v76[14] = &result[v85];
          if (v78 != v77) {
            result = (_QWORD*)memcpy(result, v77, v78 - v77);
          }
          v76[13] = (char*)v86 + v80;
        }
      }
    }
  }

LABEL_118:
  v56 = *GameData_212c8d8[0];
  v57 = *(_QWORD*)(*GameData_212c8d8[0] + 64);
  v58 = *(_QWORD*)(*GameData_212c8d8[0] + 72);
  for (k = fw_memory_g_heap_manager_ptr; v57 != v58; v57 += 8) {
    v66 = *(_QWORD**)(*(_QWORD*)v57 + 24LL);
    v67 = v66[9];
    v66[10] = 0;
    v66[11] = 0;
    if (v67 != 0) {
      v68 = *(unsigned __int16*)(v67 + 16);
      v69 = *(_QWORD*)(v56 + 64);
      if (*(_WORD*)(v67 + 16) != 0) {
        v70 = *(_QWORD*)(v69 + 8LL * (unsigned int)(v68 - 1));
        if (v70 != 0 && *(_QWORD*)(v67 + 40) != 0 &&
            *(_QWORD*)(v70 + 56) == *(_QWORD*)(v67 + 56)) {
          v66[10] = v70;
          v68 = *(unsigned __int16*)(v67 + 16);
          v69 = *(_QWORD*)(v56 + 64);
        }
      }
      v71 = v68 + 1;
      if (v71 < (int)((unsigned __int64)(*(_QWORD*)(v56 + 72) - v69) >> 3)) {
        v72 = *(_QWORD*)(v69 + 8LL * (unsigned int)v71);
        if (v72 != 0 && *(_QWORD*)(v72 + 40) != 0 &&
            *(_QWORD*)(v72 + 56) == *(_QWORD*)(v67 + 56)) {
          v66[11] = v72;
        }
      }
    }
  }
  if (v105[19] != 0) {
    v60 = (_QWORD*)v105[18];
    if (v60 != nullptr) {
      do {
        v61 = (_QWORD*)*v60;
        if (*(_QWORD*)(*(_QWORD*)k + 200LL) != 0) {
          v62 = 128;
        }
        else {
          v62 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)k + v62, v60);
        v60 = v61;
      } while (v61 != nullptr);
    }
    v63 = v105[17];
    v105[18] = 0;
    if (v63 != 0) {
      v64 = v63 & 7;
      if (v63 >= 8) {
        v91 = v63 & 0xFFFFFFFFFFFFFFF8LL;
        v65 = 0;
        do {
          *(_QWORD*)(v105[16] + 8 * v65) = 0;
          *(_QWORD*)(v105[16] + 8 * v65 + 8) = 0;
          *(_QWORD*)(v105[16] + 8 * v65 + 16) = 0;
          *(_QWORD*)(v105[16] + 8 * v65 + 24) = 0;
          *(_QWORD*)(v105[16] + 8 * v65 + 32) = 0;
          *(_QWORD*)(v105[16] + 8 * v65 + 40) = 0;
          *(_QWORD*)(v105[16] + 8 * v65 + 48) = 0;
          v92 = v105[16] + 8 * v65;
          v65 += 8;
          *(_QWORD*)(v92 + 56) = 0;
        } while (v91 != v65);
      }
      else {
        v65 = 0;
      }
      if (v64 != 0) {
        v93 = 8 * v65;
        do {
          --v64;
          *(_QWORD*)(v105[16] + v93) = 0;
          v93 += 8;
        } while (v64 != 0);
      }
    }
    v105[19] = 0;
  }
  v94 = (unsigned int**)v105[8];
  v95 = (unsigned int**)v105[9];
  while (v94 != v95) {
    v96 = *v94;
    v97 = **v94;
    if ((_DWORD)v97 != 0) {
      GameRoutine_97ac00(v105 + 1, v97, *v94);
    }
    result = (_QWORD*)GameRoutine_66bfc0(v96);
    if ((_DWORD)result != 0) {
      result = (_QWORD*)GameRoutine_97ac00(v105 + 1, (unsigned int)result, v96);
    }
    ++v94;
  }
  v98 = v109;
  if (v109 != nullptr) {
    do {
      v100 = (_QWORD*)*v98;
      v101 = v98[3];
      if (v101 != 0) {
        v102 = *(_QWORD*)k;
        v98[4] = v101;
        if (*(_QWORD*)(v102 + 200) != 0) {
          v103 = 128;
        }
        else {
          v103 = 56;
        }
        nn_mem_StandardAllocator_Free(v102 + v103, v101);
      }
      if (*(_QWORD*)(*(_QWORD*)k + 200LL) != 0) {
        v99 = 128;
      }
      else {
        v99 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)k + v99, v98);
      v98 = v100;
    } while (v100 != nullptr);
  }
  if (v107 != nullptr) {
    v104 = 128;
    if (*(_QWORD*)(*(_QWORD*)k + 200LL) == 0) {
      v104 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)k + v104, v107);
  }
  return result;
}

#pragma GCC visibility pop
