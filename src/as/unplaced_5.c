#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* as_d9db40(__int64 a1, unsigned __int8* a2, __int64** a3);

_QWORD* as_d9db40(__int64 a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = (__int64)(a2 + 1);
  }
  else {
    v9 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v27 = *a3;
  *v26 = 0;
  v26[1] = v13;
  v16 = v26;
  if ((*(_BYTE*)v27 & 1) != 0) {
    fw_text_String_CopyTerminated(v26 + 2, v27[2], v27[1]);
  }
  else {
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v26[3] = v29;
    v26[4] = v30;
    v26[2] = v28;
  }
  v31 = *(_QWORD*)(a1 + 24);
  v32 = *(float*)(a1 + 32);
  v16[5] = 0;
  v16[6] = 0;
  v33 = (float)(unsigned __int64)(v31 + 1);
  if (v12 == 0 || (float)(v32 * (float)v12) < v33) {
    v34 = v33 / v32;
    v35 = true;
    if (v12 >= 3) {
      v35 = (v12 & (v12 - 1)) != 0;
    }
    v36 = v35 | (2 * v12);
    v37 = vcvtps_u64_f32(v34);
    if (v36 <= v37) {
      primeEm = v37;
    }
    else {
      primeEm = v36;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v39 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v39) {
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      v45 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v39 < 3 || (v39 & (v39 - 1)) != 0) {
        v45 = std___1___next_prime(v45);
      }
      else {
        v46 = 1LL << -(char)__clz(v45 - 1);
        if (v45 >= 2) {
          v45 = v46;
        }
      }
      if (primeEm <= v45) {
        primeEm = v45;
      }
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v58 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v58 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v59, v58);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v40 = fw_memory_HeapManager_Allocate(*v25, 8 * primeEm, 16, 0);
    v41 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v40;
    if (v41 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*v25 + v42, v41);
    }
    v43 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v44 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 48) = 0;
        v47 = *(_QWORD*)a1 + 8 * v44;
        v44 += 8;
        *(_QWORD*)(v47 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v44);
    }
    else {
      v44 = 0;
    }
    if ((primeEm & 7) != 0) {
      v48 = 8 * v44;
      do {
        --v43;
        *(_QWORD*)(*(_QWORD*)a1 + v48) = 0;
        v48 += 8;
      } while (v43 != 0);
    }
    v50 = a1 + 16;
    v49 = *(_QWORD**)(a1 + 16);
    if (v49 != nullptr) {
      v51 = v49[1];
      v52 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v51 >= primeEm) {
          v51 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v50;
        v53 = (_QWORD*)*v49;
        if (*v49 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v54 = v53[1];
          if (v54 >= primeEm) {
            v54 %= primeEm;
          }
          if (v54 != v51) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
              goto LABEL_82;
            }
            *v49 = *v53;
            *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
            v53 = v49;
          }
          v54 = v51;
        LABEL_82:
          v49 = v53;
          v53 = (_QWORD*)*v53;
          v51 = v54;
          if (v53 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v55 = v51 & v52;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v50;
      while (1) {
        v56 = (_QWORD*)*v49;
        if (*v49 == 0) {
          break;
        }
        v57 = v56[1] & v52;
        if (v57 == v55) {
          v49 = (_QWORD*)*v49;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v57) != 0) {
          *v49 = *v56;
          *v56 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v57);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v57) = v56;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v57) = v49;
          v49 = v56;
          v55 = v57;
        }
      }
    }
  LABEL_105:
    v12 = *(_QWORD*)(a1 + 8);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v60 = *(_QWORD*)a1;
  v61 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v61 != nullptr) {
    *v16 = *v61;
    *v61 = v16;
  }
  else {
    v62 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v16;
    *v16 = v62;
    *(_QWORD*)(v60 + 8 * v3) = a1 + 16;
    if (*v16 != 0) {
      v63 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v63 >= v12) {
          v63 %= v12;
        }
      }
      else {
        v63 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v63) = v16;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v16;
}

#pragma GCC visibility pop
