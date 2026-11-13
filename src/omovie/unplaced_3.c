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
_QWORD* omovie_18d0660(__int64 a1, unsigned __int8* a2, __int64 a3,
                       __int64** a4);

_QWORD* omovie_18d0660(__int64 a1, unsigned __int8* a2, __int64 a3,
                       __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  _QWORD* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  _BOOL8 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 primeEm;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  _QWORD* v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  unsigned __int64 v64;

  v5 = *a2;
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  if (v8) {
    v10 = (__int64)(a2 + 1);
  }
  else {
    v10 = *((_QWORD*)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  v12 = std___1___hash_memory(v10, v11);
  v13 = *(_QWORD*)(a1 + 8);
  v14 = v12;
  if (v13 != 0) {
    v15 = v13 - 1;
    if ((v13 & (v13 - 1)) != 0) {
      v4 = v12;
      if (v12 >= v13) {
        v4 = v12 % v13;
      }
    }
    else {
      v4 = v15 & v12;
    }
    v16 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v16 != nullptr) {
      v17 = (_QWORD*)*v16;
      if (*v16 != 0) {
        if ((v13 & v15) == 0) {
          while (1) {
            v22 = v17[1];
            if (v22 == v14) {
              v23 = *((unsigned __int8*)v17 + 16);
              v24 = v17[3];
              if ((v23 & 1) == 0) {
                v24 = v23 >> 1;
              }
              if (v24 == v11) {
                v25 = (v23 & 1) != 0 ? v17[4] : (__int64)v17 + 17;
                if (memcmp(v25, v10, v11) == 0) {
                  return v17;
                }
              }
            }
            else if ((v22 & v15) != v4) {
              goto LABEL_41;
            }
            v17 = (_QWORD*)*v17;
            if (v17 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v18 = v17[1];
          if (v18 == v14) {
            v19 = *((unsigned __int8*)v17 + 16);
            v20 = v17[3];
            if ((v19 & 1) == 0) {
              v20 = v19 >> 1;
            }
            if (v20 == v11) {
              v21 = (v19 & 1) != 0 ? v17[4] : (__int64)v17 + 17;
              if (memcmp(v21, v10, v11) == 0) {
                return v17;
              }
            }
          }
          else {
            if (v18 >= v13) {
              v18 %= v13;
            }
            if (v18 != v4) {
              break;
            }
          }
          v17 = (_QWORD*)*v17;
        } while (v17 != nullptr);
      }
    }
  }
LABEL_41:
  v26 = (__int64*)fw_memory_g_heap_manager_ptr;
  v27 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v28 = *a4;
  *v27 = 0;
  v27[1] = v14;
  v17 = v27;
  if ((*(_BYTE*)v28 & 1) != 0) {
    fw_text_String_CopyTerminated(v27 + 2, v28[2], v28[1]);
  }
  else {
    v29 = *v28;
    v30 = v28[1];
    v31 = v28[2];
    v27[3] = v30;
    v27[4] = v31;
    v27[2] = v29;
  }
  v32 = *(_QWORD*)(a1 + 24);
  v33 = *(float*)(a1 + 32);
  v17[5] = 0;
  v34 = (float)(unsigned __int64)(v32 + 1);
  if (v13 == 0 || (float)(v33 * (float)v13) < v34) {
    v35 = v34 / v33;
    v36 = true;
    if (v13 >= 3) {
      v36 = (v13 & (v13 - 1)) != 0;
    }
    v37 = v36 | (2 * v13);
    v38 = vcvtps_u64_f32(v35);
    if (v37 <= v38) {
      primeEm = v38;
    }
    else {
      primeEm = v37;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v40 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v40) {
      if (primeEm >= v40) {
        goto LABEL_105;
      }
      v46 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v40 < 3 || (v40 & (v40 - 1)) != 0) {
        v46 = std___1___next_prime(v46);
      }
      else {
        v47 = 1LL << (-(char)__clz(v46 - 1) & 63);
        if (v46 >= 2) {
          v46 = v47;
        }
      }
      if (primeEm <= v46) {
        primeEm = v46;
      }
      if (primeEm >= v40) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v59 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v59 != 0) {
          v60 = 128;
          if (*(_QWORD*)(*v26 + 200) == 0) {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free(*v26 + v60, v59);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v41 = fw_memory_HeapManager_Allocate(*v26, 8 * primeEm, 16, 0);
    v42 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v41;
    if (v42 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v43, v42);
    }
    v44 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v45 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v45) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v45 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v45 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v45 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v45 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v45 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v45 + 48) = 0;
        v48 = *(_QWORD*)a1 + 8 * v45;
        v45 += 8;
        *(_QWORD*)(v48 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v45);
    }
    else {
      v45 = 0;
    }
    if ((primeEm & 7) != 0) {
      v49 = 8 * v45;
      do {
        --v44;
        *(_QWORD*)(*(_QWORD*)a1 + v49) = 0;
        v49 += 8;
      } while (v44 != 0);
    }
    v51 = a1 + 16;
    v50 = *(_QWORD**)(a1 + 16);
    if (v50 != nullptr) {
      v52 = v50[1];
      v53 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v52 >= primeEm) {
          v52 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v51;
        v54 = (_QWORD*)*v50;
        if (*v50 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v55 = v54[1];
          if (v55 >= primeEm) {
            v55 %= primeEm;
          }
          if (v55 != v52) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v55) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v50;
              goto LABEL_82;
            }
            *v50 = *v54;
            *v54 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v55);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v55) = v54;
            v54 = v50;
          }
          v55 = v52;
        LABEL_82:
          v50 = v54;
          v54 = (_QWORD*)*v54;
          v52 = v55;
          if (v54 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v56 = v52 & v53;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = v51;
      while (1) {
        v57 = (_QWORD*)*v50;
        if (*v50 == 0) {
          break;
        }
        v58 = v57[1] & v53;
        if (v58 == v56) {
          v50 = (_QWORD*)*v50;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v58) != 0) {
          *v50 = *v57;
          *v57 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v58);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v58) = v57;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v58) = v50;
          v50 = v57;
          v56 = v58;
        }
      }
    }
  LABEL_105:
    v13 = *(_QWORD*)(a1 + 8);
    if ((v13 & (v13 - 1)) != 0) {
      if (v14 >= v13) {
        v4 = v14 % v13;
      }
      else {
        v4 = v14;
      }
    }
    else {
      v4 = (v13 - 1) & v14;
    }
  }
  v61 = *(_QWORD*)a1;
  v62 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v62 != nullptr) {
    *v17 = *v62;
    *v62 = v17;
  }
  else {
    v63 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v17;
    *v17 = v63;
    *(_QWORD*)(v61 + 8 * v4) = a1 + 16;
    if (*v17 != 0) {
      v64 = *(_QWORD*)(*v17 + 8LL);
      if ((v13 & (v13 - 1)) != 0) {
        if (v64 >= v13) {
          v64 %= v13;
        }
      }
      else {
        v64 &= v13 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v64) = v17;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v17;
}

#pragma GCC visibility pop
