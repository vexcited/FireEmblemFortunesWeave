#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void fs_63be60(PSEUDO_X8, __int64 result,
                                          unsigned __int8*);
__int64* GameRoutine_6430c0(__int64* result, unsigned __int64);
__int64 GameRoutine_1a0a240(_QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_639910(char*, _QWORD*);
__int64 GameRoutine_639a90(__int64);
__int64 GameRoutine_639dc0(__int64, unsigned __int64, __int64, __int64,
                           unsigned __int64, __int64);
__int64 GameRoutine_63b800(__int64, __int64, unsigned __int8*, __int64,
                           unsigned __int8*, __int64, __int64,
                           unsigned __int64);
__int64 GameRoutine_63c1a0(unsigned __int8*, __int64, __int64, __int64,
                           unsigned __int64, __int64 (*)(_QWORD));
__int64 GameRoutine_63c3f0();
__int64 fs_639780(char, __int64*, __int64);
__int64 fs_63b1a0(__int64, unsigned __int64, unsigned int);
__int64 fs_63c410(__int64, __int64, unsigned int, unsigned int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1_locale_Destroy_locale(_QWORD);
__int64 std___1_locale_locale_1a0a220(_QWORD);
__int64 std___1_locale_locale_1a0a230(_QWORD, _QWORD);
__int64 std___1_locale_use_facet(_QWORD, _QWORD);
__int64 strlen(_QWORD);
bool fs_636840(_QWORD*);
extern __int64 GameData_212c3d8;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int8* GameRoutine_638b90(char*, unsigned __int8**, __int16);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_638240(const char*);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_639520(__int64);
void __attribute__((noreturn)) fs_639690(__int64, __int64);
__int64 fs_609260(float* a1, __int64 a2, char a3);
unsigned __int64 fs_6360e0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4,
                           int a5);
unsigned __int8* fs_638380(unsigned __int8* result, unsigned __int8* a2,
                           __int64 a3);
__int64 fs_638a60_alt1(unsigned __int8*** a1, char a2) __asm__("fs_638a60");
__int64 fs_638f40(__int64 a1, unsigned __int8** a2, unsigned __int8* a3,
                  __int64 a4);
__int64 fs_639590(__int64 result, char a2, __int64 a3, int a4);
_QWORD* fs_63b420(unsigned int a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4, char a5, unsigned __int8* a6, __int64 a7,
                  unsigned __int8* a8, unsigned int a9);
__int64 fs_63fdc0_alt1(__int64* a1, __int64 a2, char** a3, __int64 a4,
                       __int64 a5, unsigned __int64 a6) __asm__("fs_63fdc0");
__int64 GameHr_639910(char*, _QWORD*);
__int64 GameHr_63b800(__int64, __int64, unsigned __int8*, int, unsigned __int8*,
                      char, __int64, unsigned __int64);
__int64 GameHr_63c1a0(unsigned __int8*, __int64, __int64, __int64,
                      unsigned __int64, __int64 (*)(_QWORD));
__int64 GameRoutine_1a0a240_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1a0a240");
__int64 fs_63b1a0_alt1(__int64, unsigned __int64, int) __asm__("fs_63b1a0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1_locale_locale_1a0a220_alt1(__int64) __asm__(
    "std___1_locale_locale_1a0a220");
__int64 std___1_locale_locale_1a0a230_alt1(__int64, __int64) __asm__(
    "std___1_locale_locale_1a0a230");
__int64
std___1_locale_use_facet_alt1(__int64,
                              __int64) __asm__("std___1_locale_use_facet");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void std___1_locale_Destroy_locale_alt1(__int64) __asm__(
    "std___1_locale_Destroy_locale");
__int64 fs_638a60(__int64 a1, char a2);
__int64 fs_63fdc0(__int64 a1, __int64 a2, __int64* a3, __int64 a4, __int64 a5,
                  unsigned __int64 a6);

__int64 fs_609260(float* a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64* v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  char* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  char v37;
  unsigned __int64 v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  _BOOL8 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 primeEm;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64* v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  _QWORD* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  _QWORD* v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  _QWORD* v73;
  char v74;
  __int64 v75;
  _QWORD* v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 result;
  __int64 v87;
  __int64 v88;
  struct {
    __int64 v89;
    unsigned __int64 v90;
    __int64 v91;
  } v89_;
  struct {
    __int64 v92;
    unsigned __int64 v93;
    char* v94;
  } v92_;

  v92_.v94 = nullptr;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v92_.v92 = 0;
  v92_.v93 = 0;
  if ((a3 & 1) != 0) {
    v7 = *((unsigned __int8*)a1 + 40);
    v8 = (v7 & 1) == 0;
    v9 = v7 >> 1;
    if (v8) {
      v10 = (__int64)a1 + 41;
    }
    else {
      v10 = *((_QWORD*)a1 + 7);
    }
    if (v8) {
      v11 = v9;
    }
    else {
      v11 = *((_QWORD*)a1 + 6);
    }
    v12 = strlen(a2);
    v13 = v12 + v11;
    if (v12 + v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v14 = v12;
    if (v13 > 0x16) {
      if ((v13 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v13 | 7) + 1;
      }
      v16 = fw_memory_HeapManager_Allocate(*v6, v17, 16, 0);
      v89_.v90 = v13;
      v89_.v91 = v16;
      v89_.v89 = v17 | 1;
      v15 = v17 | 1;
    }
    else {
      v15 = 2 * v13;
      v16 = 0;
      v89_.v90 = 0;
      v89_.v91 = 0;
      v89_.v89 = (unsigned __int8)(2 * v13);
    }
    if ((v15 & 1) != 0) {
      v18 = (char*)v16;
    }
    else {
      v18 = (char*)&v89_.v89 + 1;
    }
    if (v11 != 0) {
      memmove(v18, v10, v11);
    }
    v19 = &v18[v11];
    if (v14 != 0) {
      memmove(v19, a2, v14);
    }
    v19[v14] = 0;
    v92_.v92 = v89_.v89;
    v92_.v93 = v89_.v90;
    v92_.v94 = (char*)v89_.v91;
  }
  else {
    GameRoutine_60a020((__int64)&v92_.v92, a2);
  }
  if ((v92_.v92 & 1) != 0) {
    v20 = v92_.v94;
  }
  else {
    v20 = (char*)&v92_.v92 + 1;
  }
  if ((v92_.v92 & 1) != 0) {
    v21 = v92_.v93;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v92_.v92 >> 1;
  }
  v22 = std___1___hash_memory(v20, v21);
  v23 = *((_QWORD*)a1 + 1);
  v24 = v22;
  if (v23 != 0) {
    v25 = v23 - 1;
    if ((v23 & (v23 - 1)) != 0) {
      v3 = v22;
      if (v22 >= v23) {
        v3 = v22 % v23;
      }
    }
    else {
      v3 = v25 & v22;
    }
    v26 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v26 != nullptr) {
      v27 = (_QWORD*)*v26;
      if (*v26 != 0) {
        if ((v23 & v25) == 0) {
          while (1) {
            v32 = v27[1];
            if (v32 == v24) {
              v33 = *((unsigned __int8*)v27 + 16);
              v34 = v27[3];
              if ((v33 & 1) == 0) {
                v34 = v33 >> 1;
              }
              if (v34 == v21) {
                v35 = (v33 & 1) != 0 ? (_QWORD*)v27[4]
                                     : (_QWORD*)((char*)v27 + 17);
                if ((unsigned int)memcmp(v35, v20, v21) == 0) {
                  goto LABEL_160;
                }
              }
            }
            else if ((v32 & v25) != v3) {
              goto LABEL_64;
            }
            v27 = (_QWORD*)*v27;
            if (v27 == nullptr) {
              goto LABEL_64;
            }
          }
        }
        do {
          v28 = v27[1];
          if (v28 == v24) {
            v29 = *((unsigned __int8*)v27 + 16);
            v30 = v27[3];
            if ((v29 & 1) == 0) {
              v30 = v29 >> 1;
            }
            if (v30 == v21) {
              v31 =
                  (v29 & 1) != 0 ? (_QWORD*)v27[4] : (_QWORD*)((char*)v27 + 17);
              if ((unsigned int)memcmp(v31, v20, v21) == 0) {
                goto LABEL_160;
              }
            }
          }
          else {
            if (v28 >= v23) {
              v28 %= v23;
            }
            if (v28 != v3) {
              break;
            }
          }
          v27 = (_QWORD*)*v27;
        } while (v27 != nullptr);
      }
    }
  }
LABEL_64:
  v36 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 48, 16, 0);
  v37 = v92_.v92;
  v27 = v36;
  *v36 = 0;
  v36[1] = v24;
  if ((v37 & 1) != 0) {
    fw_text_String_CopyTerminated(v36 + 2, (__int64)v92_.v94, v92_.v93);
  }
  else {
    v38 = v92_.v93;
    v36[2] = v92_.v92;
    v36[3] = v38;
    v36[4] = v92_.v94;
  }
  v39 = *((_QWORD*)a1 + 3);
  v40 = a1[8];
  v27[5] = 0;
  v41 = (float)(unsigned __int64)(v39 + 1);
  if (v23 == 0 || (float)(v40 * (float)v23) < v41) {
    v42 = v41 / v40;
    v43 = true;
    if (v23 >= 3) {
      v43 = (v23 & (v23 - 1)) != 0;
    }
    v44 = v43 | (2 * v23);
    v45 = vcvtps_u64_f32(v42);
    if (v44 <= v45) {
      primeEm = v45;
    }
    else {
      primeEm = v44;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v47 = *((_QWORD*)a1 + 1);
    if (primeEm <= v47) {
      if (primeEm >= v47) {
        goto LABEL_128;
      }
      v53 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v47 < 3 || (v47 & (v47 - 1)) != 0) {
        v53 = std___1___next_prime(v53);
      }
      else {
        v54 = 1LL << -(char)__clz(v53 - 1);
        if (v53 >= 2) {
          v53 = v54;
        }
      }
      if (primeEm <= v53) {
        primeEm = v53;
      }
      if (primeEm >= v47) {
        goto LABEL_128;
      }
      if (primeEm == 0) {
        v66 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v66 != 0) {
          v67 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v67 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v67, v66);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_128;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v48 = fw_memory_HeapManager_Allocate(*v6, 8 * primeEm, 16, 0);
    v49 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v48;
    if (v49 != 0) {
      v50 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v50, v49);
    }
    v51 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v52 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v52 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v52 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v52 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v52 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v52 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v52 + 48) = 0;
        v55 = *(_QWORD*)a1 + 8 * v52;
        v52 += 8;
        *(_QWORD*)(v55 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v52);
    }
    else {
      v52 = 0;
    }
    if ((primeEm & 7) != 0) {
      v56 = 8 * v52;
      do {
        --v51;
        *(_QWORD*)(*(_QWORD*)a1 + v56) = 0;
        v56 += 8;
      } while (v51 != 0);
    }
    v58 = (__int64*)(a1 + 4);
    v57 = *((_QWORD**)a1 + 2);
    if (v57 != nullptr) {
      v59 = v57[1];
      v60 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v59 >= primeEm) {
          v59 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v59) = v58;
        v61 = (_QWORD*)*v57;
        if (*v57 == 0) {
          goto LABEL_128;
        }
        while (1) {
          v62 = v61[1];
          if (v62 >= primeEm) {
            v62 %= primeEm;
          }
          if (v62 != v59) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v62) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v62) = v57;
              goto LABEL_105;
            }
            *v57 = *v61;
            *v61 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v62);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v62) = v61;
            v61 = v57;
          }
          v62 = v59;
        LABEL_105:
          v57 = v61;
          v61 = (_QWORD*)*v61;
          v59 = v62;
          if (v61 == nullptr) {
            goto LABEL_128;
          }
        }
      }
      v63 = v59 & v60;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v63) = v58;
      while (1) {
        v64 = (_QWORD*)*v57;
        if (*v57 == 0) {
          break;
        }
        v65 = v64[1] & v60;
        if (v65 == v63) {
          v57 = (_QWORD*)*v57;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v65) != 0) {
          *v57 = *v64;
          *v64 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v65);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v65) = v64;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v65) = v57;
          v57 = v64;
          v63 = v65;
        }
      }
    }
  LABEL_128:
    v23 = *((_QWORD*)a1 + 1);
    if ((v23 & (v23 - 1)) != 0) {
      if (v24 >= v23) {
        v3 = v24 % v23;
      }
      else {
        v3 = v24;
      }
    }
    else {
      v3 = (v23 - 1) & v24;
    }
  }
  v68 = *(_QWORD*)a1;
  v69 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v69 != nullptr) {
    *v27 = *v69;
    *v69 = v27;
  }
  else {
    v70 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v27;
    *v27 = v70;
    *(_QWORD*)(v68 + 8 * v3) = a1 + 4;
    if (*v27 != 0) {
      v71 = *(_QWORD*)(*v27 + 8LL);
      if ((v23 & (v23 - 1)) != 0) {
        if (v71 >= v23) {
          v71 %= v23;
        }
      }
      else {
        v71 &= v23 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v71) = v27;
    }
  }
  v72 = *v6;
  ++*((_QWORD*)a1 + 3);
  v73 = (_QWORD*)fw_memory_HeapManager_Allocate(v72, 40, 16, 0);
  v74 = v92_.v92;
  v75 = (__int64)v92_.v94;
  v76 = v73;
  *v73 = 0;
  v73[1] = 0;
  v73[2] = 0;
  v73[3] = 0;
  *(_QWORD*)((char*)v73 + 29) = 0;
  if ((v74 & 1) != 0) {
    v77 = (char*)v75;
  }
  else {
    v77 = (char*)&v92_.v92 + 1;
  }
  GameRoutine_60a020((__int64)v73, (__int64)v77);
  v78 = v27[5];
  v27[5] = v76;
  if (v78 != 0) {
    v79 = *(_QWORD*)(v78 + 24);
    *(_QWORD*)(v78 + 24) = 0;
    if (v79 != 0) {
      v80 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v80, v79);
      v81 = *(_QWORD*)(v78 + 24);
      *(_QWORD*)(v78 + 24) = 0;
      if (v81 != 0) {
        v82 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v82 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v82, v81);
      }
    }
    if ((*(_BYTE*)v78 & 1) != 0) {
      v83 = *(_QWORD*)(v78 + 16);
      if (v83 != 0) {
        v84 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v84 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v84, v83);
      }
    }
    v85 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v85, v78);
  }
LABEL_160:
  result = v27[5];
  if ((v92_.v92 & 1) != 0 && v92_.v94 != nullptr) {
    v87 = v27[5];
    v88 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v88, v92_.v94);
    return v87;
  }
  return result;
}

unsigned __int64 fs_6360e0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4,
                           int a5)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64** v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  bool v23;
  unsigned __int64 v24;
  __int64* v25;
  bool v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  char* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64** v50;
  __int64* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64* v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  float v64;
  _QWORD* v65;
  char* v66;
  float v67;
  float v68;
  _BOOL8 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 primeEm;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  unsigned __int64 v79;
  char* v81;
  bool v82;
  bool v83;
  struct {
    __int64 v84;
    unsigned __int64 v85;
    char* v86;
  } v84_;
  struct {
    _QWORD v87[2];
    char v88;
    char gap65_[3];
    int v89;
    __int64 v90;
  } v87_;

  v5 = a3;
  if (a3 != 0) {
    v87_.v87[0] = a2;
    v87_.v87[1] = a3;
    v87_.v89 = a5;
    v87_.v90 = a1;
    v87_.v88 = a4 & 1;
    if ((*(_BYTE*)(a1 + 4744) & 1) != 0) {
      LOBYTE(v5) = fs_636840(v87_.v87);
    }
    else {
      nn_os_AcquireReadLock(a1 + 4528);
      v8 = *(_QWORD*)(a1 + 4496);
      if (v8 != 0 && *(_QWORD*)(a1 + 4512) != 0) {
        v9 = std___1___hash_memory(a2, v5);
        v10 = v8 - 1;
        v11 = v9;
        if ((v8 & (v8 - 1)) != 0) {
          v12 = v9;
          if (v9 >= v8) {
            v12 = v9 % v8;
          }
        }
        else {
          v12 = v9 & v10;
        }
        v13 = *(__int64***)(*(_QWORD*)(a1 + 4488) + 8 * v12);
        if (v13 != nullptr) {
          v14 = *v13;
          if (*v13 != nullptr) {
            if ((v8 & v10) == 0) {
              while (1) {
                v19 = v14[1];
                if (v19 == v11) {
                  v20 = *((unsigned __int8*)v14 + 16);
                  v21 = v14[3];
                  if ((v20 & 1) == 0) {
                    v21 = v20 >> 1;
                  }
                  if (v5 == v21) {
                    v22 = (v20 & 1) != 0 ? (__int64*)v14[4]
                                         : (__int64*)((char*)v14 + 17);
                    if ((unsigned int)memcmp(a2, v22, v5) == 0) {
                      goto LABEL_37;
                    }
                  }
                }
                else if ((v19 & v10) != v12) {
                  goto LABEL_38;
                }
                v14 = (__int64*)*v14;
                if (v14 == nullptr) {
                  goto LABEL_38;
                }
              }
            }
            do {
              v15 = v14[1];
              if (v15 == v11) {
                v16 = *((unsigned __int8*)v14 + 16);
                v17 = v14[3];
                if ((v16 & 1) == 0) {
                  v17 = v16 >> 1;
                }
                if (v5 == v17) {
                  v18 = (v16 & 1) != 0 ? (__int64*)v14[4]
                                       : (__int64*)((char*)v14 + 17);
                  if ((unsigned int)memcmp(a2, v18, v5) == 0) {
                  LABEL_37:
                    LOBYTE(v5) = *((_BYTE*)v14 + 40);
                    nn_os_ReleaseReadLock(a1 + 4528);
                    return v5 & 1;
                  }
                }
              }
              else {
                if (v15 >= v8) {
                  v15 %= v8;
                }
                if (v15 != v12) {
                  break;
                }
              }
              v14 = (__int64*)*v14;
            } while (v14 != nullptr);
          }
        }
      }
    LABEL_38:
      nn_os_ReleaseReadLock(a1 + 4528);
      v23 = fs_636840(v87_.v87);
      nn_os_AcquireWriteLock(a1 + 4528);
      v24 = *(_QWORD*)(a1 + 4512);
      v25 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v24 != 0 && v24 >= *(_QWORD*)(a1 + 4576)) {
        v26 = v23;
        v27 = *(_QWORD**)(a1 + 4504);
        while (v27 != nullptr) {
          v29 = v27;
          v27 = (_QWORD*)*v27;
          if ((v29[2] & 1) != 0 && v29[4] != 0) {
            v30 = v29;
            v31 = v29[4];
            if (*(_QWORD*)(*v25 + 200) != 0) {
              v32 = 128;
            }
            else {
              v32 = 56;
            }
            nn_mem_StandardAllocator_Free(*v25 + v32, v31);
            v29 = v30;
          }
          if (*(_QWORD*)(*v25 + 200) != 0) {
            v28 = 128;
          }
          else {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v28, v29);
        }
        v33 = *(_QWORD*)(a1 + 4496);
        *(_QWORD*)(a1 + 4504) = 0;
        v23 = v26;
        if (v33 != 0) {
          v34 = v33 & 7;
          if (v33 >= 8) {
            v36 = v33 & 0xFFFFFFFFFFFFFFF8LL;
            v35 = 0;
            do {
              *(_QWORD*)(*(_QWORD*)(a1 + 4488) + 8 * v35) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 4488) + 8 * v35 + 8) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 4488) + 8 * v35 + 16) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 4488) + 8 * v35 + 24) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 4488) + 8 * v35 + 32) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 4488) + 8 * v35 + 40) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 4488) + 8 * v35 + 48) = 0;
              v37 = *(_QWORD*)(a1 + 4488) + 8 * v35;
              v35 += 8;
              *(_QWORD*)(v37 + 56) = 0;
            } while (v36 != v35);
          }
          else {
            v35 = 0;
          }
          if (v34 != 0) {
            v38 = 8 * v35;
            do {
              --v34;
              *(_QWORD*)(*(_QWORD*)(a1 + 4488) + v38) = 0;
              v38 += 8;
            } while (v34 != 0);
          }
        }
        *(_QWORD*)(a1 + 4512) = 0;
      }
      if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v83 = v23;
      v39 = v23;
      if (v5 >= 0x17) {
        if ((v5 | 7) == 0x17) {
          v41 = 26;
        }
        else {
          v41 = (v5 | 7) + 1;
        }
        v40 = (char*)fw_memory_HeapManager_Allocate(*v25, v41, 16, 0);
        v84_.v85 = v5;
        v84_.v86 = v40;
        v84_.v84 = v41 | 1;
      }
      else {
        LOBYTE(v84_.v84) = 2 * v5;
        v40 = (char*)&v84_.v84 + 1;
      }
      memmove(v40, a2, v5);
      v40[v5] = 0;
      v42 = (unsigned __int8)v84_.v84;
      v43 = v84_.v86;
      if ((v84_.v84 & 1) != 0) {
        v44 = v84_.v86;
      }
      else {
        v44 = (char*)&v84_.v84 + 1;
      }
      if ((v84_.v84 & 1) != 0) {
        v45 = v84_.v85;
      }
      else {
        v45 = (unsigned __int64)(unsigned __int8)v84_.v84 >> 1;
      }
      v46 = std___1___hash_memory(v44, v45);
      v47 = *(_QWORD*)(a1 + 4496);
      v48 = v46;
      if (v47 != 0) {
        v81 = v43;
        v49 = v47 - 1;
        if ((v47 & (v47 - 1)) != 0) {
          v42 = v46;
          if (v46 >= v47) {
            v42 = v46 % v47;
          }
        }
        else {
          v42 = v49 & v46;
        }
        v50 = *(__int64***)(*(_QWORD*)(a1 + 4488) + 8 * v42);
        if (v50 != nullptr) {
          v82 = v39;
          v51 = *v50;
          if (*v50 != nullptr) {
            if ((v47 & v49) == 0) {
              while (1) {
                v56 = v51[1];
                if (v56 == v48) {
                  v57 = *((unsigned __int8*)v51 + 16);
                  v58 = v51[3];
                  if ((v57 & 1) == 0) {
                    v58 = v57 >> 1;
                  }
                  if (v58 == v45) {
                    v59 = (v57 & 1) != 0 ? (__int64*)v51[4]
                                         : (__int64*)((char*)v51 + 17);
                    if ((unsigned int)memcmp(v59, v44, v45) == 0) {
                      goto LABEL_107;
                    }
                  }
                }
                else if ((v56 & v49) != v42) {
                  goto LABEL_112;
                }
                v51 = (__int64*)*v51;
                if (v51 == nullptr) {
                  goto LABEL_112;
                }
              }
            }
            do {
              v52 = v51[1];
              if (v52 == v48) {
                v53 = *((unsigned __int8*)v51 + 16);
                v54 = v51[3];
                if ((v53 & 1) == 0) {
                  v54 = v53 >> 1;
                }
                if (v54 == v45) {
                  v55 = (v53 & 1) != 0 ? (__int64*)v51[4]
                                       : (__int64*)((char*)v51 + 17);
                  if ((unsigned int)memcmp(v55, v44, v45) == 0) {
                  LABEL_107:
                    LOBYTE(v5) = v83;
                    *((_BYTE*)v51 + 40) = v82;
                    if ((v84_.v84 & 1) != 0 && v81 != nullptr) {
                      v60 = 128;
                      if (*(_QWORD*)(*v25 + 200) == 0) {
                        v60 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v25 + v60, v81);
                    }
                    goto LABEL_150;
                  }
                }
              }
              else {
                if (v52 >= v47) {
                  v52 %= v47;
                }
                if (v52 != v42) {
                  break;
                }
              }
              v51 = (__int64*)*v51;
            } while (v51 != nullptr);
          }
        LABEL_112:
          v39 = v82;
        }
      }
      v61 = fw_memory_HeapManager_Allocate(*v25, 48, 16, 0);
      v62 = v84_.v84;
      v63 = v84_.v85;
      v64 = *(float*)(a1 + 4520);
      v65 = (_QWORD*)v61;
      *(_BYTE*)(v61 + 40) = v39;
      *(_QWORD*)(v61 + 8) = v48;
      *(_QWORD*)(v61 + 16) = v62;
      v66 = v84_.v86;
      *(_QWORD*)(v61 + 24) = v63;
      *(_QWORD*)(v61 + 32) = v66;
      v67 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 4512) + 1LL);
      if (v47 == 0 || (float)(v64 * (float)v47) < v67) {
        v68 = v67 / v64;
        v69 = true;
        if (v47 >= 3) {
          v69 = (v47 & (v47 - 1)) != 0;
        }
        v70 = v69 | (2 * v47);
        v71 = vcvtps_u64_f32(v68);
        if (v70 <= v71) {
          primeEm = v71;
        }
        else {
          primeEm = v70;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = std___1___next_prime(primeEm);
        }
        v73 = *(_QWORD*)(a1 + 4496);
        if (primeEm > v73) {
          goto LABEL_125;
        }
        if (primeEm < v73) {
          v74 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 4512) /
                               *(float*)(a1 + 4520));
          if (v73 < 3 || (v73 & (v73 - 1)) != 0) {
            v74 = std___1___next_prime(v74);
          }
          else {
            v75 = 1LL << -(char)__clz(v74 - 1);
            if (v74 >= 2) {
              v74 = v75;
            }
          }
          if (primeEm <= v74) {
            primeEm = v74;
          }
          if (primeEm < v73) {
          LABEL_125:
            GameRoutine_6430c0((__int64*)(a1 + 4488), primeEm);
          }
        }
        v47 = *(_QWORD*)(a1 + 4496);
        if ((v47 & (v47 - 1)) != 0) {
          if (v48 >= v47) {
            v42 = v48 % v47;
          }
          else {
            v42 = v48;
          }
        }
        else {
          v42 = (v47 - 1) & v48;
        }
      }
      v76 = *(_QWORD*)(a1 + 4488);
      LOBYTE(v5) = v83;
      v77 = *(_QWORD**)(v76 + 8 * v42);
      if (v77 != nullptr) {
        *v65 = *v77;
        *v77 = v65;
      }
      else {
        v78 = *(_QWORD*)(a1 + 4504);
        *(_QWORD*)(a1 + 4504) = v65;
        *v65 = v78;
        *(_QWORD*)(v76 + 8 * v42) = a1 + 4504;
        if (v78 != 0) {
          v79 = *(_QWORD*)(v78 + 8);
          if ((v47 & (v47 - 1)) != 0) {
            if (v79 >= v47) {
              v79 %= v47;
            }
          }
          else {
            v79 &= v47 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 4488) + 8 * v79) = v65;
        }
      }
      ++*(_QWORD*)(a1 + 4512);
    LABEL_150:
      nn_os_ReleaseWriteLock(a1 + 4528);
    }
  }
  return v5 & 1;
}

unsigned __int8* fs_638380(unsigned __int8* result, unsigned __int8* a2,
                           __int64 a3)
{
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  int v10;
  __int64 v11;
  int v12;

  v3 = *result;
  if (v3 != 125) {
    v4 = v3 - 58;
    if (v3 != 58) {
      v5 = v3 - 48;
      if (v5 == 0) {
        v6 = *(_DWORD*)(a3 + 16);
        if (v6 != 0) {
          if (v6 == 2) {
            goto LABEL_34;
          }
        }
        else {
          *(_DWORD*)(a3 + 16) = 1;
        }
        return ++result;
      }
      if (v4 <= 0xFFFFFFF5) {
        GameRoutine_638240(
            "The argument index starts with an invalid character");
      }
      if (a2 - result <= 9) {
        v8 = a2;
      }
      else {
        v8 = result + 9;
      }
      v9 = result + 1;
      if (result + 1 == v8) {
        v8 = result + 1;
        if (v9 == a2) {
          goto LABEL_29;
        }
      LABEL_19:
        v11 = *v8;
        if ((unsigned int)(v11 - 48) > 9) {
          result = v8;
          v12 = *(_DWORD*)(a3 + 16);
          if (v12 == 0) {
            goto LABEL_36;
          }
          goto LABEL_33;
        }
        if ((v11 + 10 * (unsigned __int64)v5 - 48) >> 31 != 0 ||
            (result += 2, result != a2) && (unsigned int)*result - 48 <= 9) {
          GameRoutine_638240(
              "The numeric value of the format specifier is too large");
        }
      }
      else {
        result = v8 - 1;
        while (1) {
          v10 = *v9;
          if ((unsigned int)(v10 - 58) < 0xFFFFFFF6) {
            break;
          }
          ++v9;
          v5 = v10 + 10 * v5 - 48;
          if (v9 == v8) {
            if (v8 != a2) {
              goto LABEL_19;
            }
          LABEL_29:
            result = a2;
            v12 = *(_DWORD*)(a3 + 16);
            if (v12 == 0) {
            LABEL_36:
              *(_DWORD*)(a3 + 16) = 1;
              return result;
            }
          LABEL_33:
            if (v12 != 2) {
              return result;
            }
          LABEL_34:
            GameRoutine_638240("Using manual argument numbering in automatic "
                               "argument numbering mode");
          }
        }
        result = v9;
      }
      v12 = *(_DWORD*)(a3 + 16);
      if (v12 == 0) {
        goto LABEL_36;
      }
      goto LABEL_33;
    }
  }
  v7 = *(_DWORD*)(a3 + 16);
  if (v7 != 0) {
    if (v7 == 1) {
      GameRoutine_638240("Using automatic argument numbering in manual "
                         "argument numbering mode");
    }
  }
  else {
    *(_DWORD*)(a3 + 16) = 2;
  }
  ++*(_QWORD*)(a3 + 24);
  return result;
}

__int64 fs_638a60(__int64 a1, char a2)
{
  unsigned __int8** v4;
  unsigned __int8* v5;
  __int64* v6;
  __int64 result;
  __int64 v8;
  unsigned __int8* v10;
  __int64 v11;
  int v12;
  char v13;
  __int16 v14;
  char v15;

  v11 = 0;
  v14 = 0;
  v15 = 0;
  v12 = -1;
  v13 = 32;
  if ((**(_BYTE**)(a1 + 16) & 1) == 0) {
    v6 = *(__int64**)(a1 + 8);
  LABEL_6:
    v8 = GameHr_639910((char*)&v11, v6);
    result = fs_639780(a2 & 1, v6, v8);
    goto LABEL_7;
  }
  v4 = *(unsigned __int8***)a1;
  v5 = GameRoutine_638b90((char*)&v11, *(unsigned __int8***)a1, 311);
  if ((unsigned int)BYTE1(v11) - 2 >= 6) {
    if (BYTE1(v11) > 1u) {
      fs_639520((__int64)"a bool");
    }
    v10 = v5;
    fs_639590((__int64)&v11, 48, (__int64)"a bool", -1);
    v5 = v10;
    if ((v11 & 7) == 0) {
      LOBYTE(v11) = v11 | 1;
    }
  }
  *v4 = v5;
  v6 = *(__int64**)(a1 + 8);
  if (BYTE1(v11) <= 1u) {
    goto LABEL_6;
  }
  GameHr_639910((char*)&v11, v6);
  result = GameRoutine_639a90(a2 & 1);
LABEL_7:
  *v6 = result;
  return result;
}

__int64 fs_638f40(__int64 a1, unsigned __int8** a2, unsigned __int8* a3,
                  __int64 a4)
{
  unsigned __int8* v4;
  int v7;
  unsigned __int64 v8;
  __int64 result;
  unsigned __int8* v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  int v14;
  __int64 v15;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *a2;
  v7 = **a2;
  if (v7 == 123) {
    *a2 = v4 + 1;
    if (v4 + 1 == a3) {
      GameRoutine_638240("End of input while parsing an argument index"),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v11 = fs_638380(v4 + 1, a3, a4),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (a3 == v11 || *v11 != 125) {
      GameRoutine_638240("The argument index is invalid"),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v12 = v11 + 1;
    *(_WORD*)(a1 + 2) |= 0x4000u;
  }
  else {
    LODWORD(v8) = v7 - 48;
    if (v7 == 48) {
      GameRoutine_638240("The width option should not have a leading zero"),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((unsigned int)(v7 - 58) < 0xFFFFFFF6) {
      return 0;
    }
    v13 = v4 + 9;
    v12 = v4 + 1;
    if (a3 - v4 <= 9) {
      v13 = a3;
    }
    if (v12 == v13) {
    LABEL_18:
      if (v12 == a3) {
        v12 = a3;
      }
      else {
        v15 = *v12;
        if ((unsigned int)(v15 - 48) <= 9) {
          v8 = v15 + 10LL * (unsigned int)v8 - 48;
          if (v8 >> 31 != 0 ||
              (v12 = v4 + 2, v4 + 2 != a3) && (unsigned int)*v12 - 48 <= 9) {
            GameRoutine_638240(
                "The numeric value of the format specifier is too large"),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
    }
    else {
      v4 = v13 - 1;
      while (1) {
        v14 = *v12;
        if ((unsigned int)(v14 - 58) < 0xFFFFFFF6) {
          break;
        }
        ++v12;
        LODWORD(v8) = v14 + 10 * v8 - 48;
        if (v12 == v13) {
          v12 = v13;
          goto LABEL_18;
        }
      }
    }
  }
  result = 1;
  *(_DWORD*)(a1 + 4) = v8;
  *a2 = v12;
  return result;
}

__int64 fs_639590(__int64 result, char a2, __int64 a3, int a4)
{
  unsigned int v4;

  if ((a2 & 1) == 0 && (*(_BYTE*)result & 0x18) != 0) {
    fs_639690(a3, (__int64)"sign");
  }
  if ((a2 & 2) == 0 && (*(_BYTE*)result & 0x20) != 0) {
    fs_639690(a3, (__int64)"alternate form");
  }
  if ((a2 & 4) == 0 && (*(_BYTE*)result & 7) == 4) {
    fs_639690(a3, (__int64)"zero-padding");
  }
  if ((a2 & 8) == 0 && *(_DWORD*)(result + 8) != -1) {
    fs_639690(a3, (__int64)"precision");
  }
  if ((a2 & 0x10) == 0 && (*(_BYTE*)result & 0x40) != 0) {
    fs_639690(a3, (__int64)"locale-specific form");
  }
  v4 = *(unsigned __int8*)(result + 1);
  if (*(_BYTE*)(result + 1) == 0) {
    if ((a4 & 1) != 0) {
      return result;
    }
  LABEL_16:
    fs_639520(a3);
  }
  if (v4 >= 0x20) {
    GameRoutine_638240("The type does not fit in the mask");
  }
  if (((1 << v4) & a4) == 0) {
    goto LABEL_16;
  }
  return result;
}

_QWORD* fs_63b420(unsigned int a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4, char a5, unsigned __int8* a6, __int64 a7,
                  unsigned __int8* a8, unsigned int a9)
{
  char v11;
  __int64 v12;
  char v14;
  int v15;
  unsigned __int8* v16;
  unsigned __int8 v17;
  unsigned __int8* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* result;
  int v24;
  unsigned __int64 v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  int v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  unsigned __int8* v39;
  unsigned __int8* v40;
  unsigned __int64 v41;
  bool v42;
  unsigned __int8* v43;
  bool v44;
  int v45;
  unsigned __int8 v46;
  unsigned __int8 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  struct {
    __int64 v55[2];
    __int64 v56;
  } v55_;
  struct {
    _QWORD v57[2];
    unsigned __int8* v58;
  } v57_;

  v11 = a3;
  v12 = (__int64)a6;
  if ((a5 & 1) != 0) {
    v14 = 45;
  LABEL_7:
    *a6 = v14;
    v16 = a6 + 1;
    goto LABEL_8;
  }
  v15 = ((unsigned __int8)a3 >> 3) & 3;
  if (v15 == 2) {
    v14 = 43;
    goto LABEL_7;
  }
  v16 = a6;
  if (v15 == 3) {
    v14 = 32;
    goto LABEL_7;
  }
LABEL_8:
  if ((a3 & 0x20) != 0 && a8 != nullptr) {
    v17 = *a8;
    if (*a8 != 0) {
      v18 = a8 + 1;
      do {
        *v16++ = v17;
        v19 = *v18++;
        v17 = v19;
      } while (v19 != 0);
    }
  }
  v20 = fs_63c410((__int64)v16, a7, a1, a9);
  if ((v11 & 0x40) != 0) {
    if ((*(_BYTE*)(a2 + 40) & 1) == 0) {
      std___1_locale_locale_1a0a220_alt1((__int64)v57_.v57);
      v21 = a2 + 32;
      if (*(_BYTE*)(a2 + 40) == 1) {
        GameRoutine_1a0a240_alt1(v21, (__int64)v57_.v57);
      }
      else {
        std___1_locale_locale_1a0a230_alt1(v21, (__int64)v57_.v57);
        *(_BYTE*)(a2 + 40) = 1;
      }
      std___1_locale_Destroy_locale_alt1((__int64)v57_.v57);
    }
    std___1_locale_locale_1a0a230_alt1((__int64)v57_.v57, a2 + 32);
    v22 = std___1_locale_use_facet_alt1((__int64)v57_.v57, GameData_212c3d8);
    std___1_locale_Destroy_locale_alt1((__int64)v57_.v57);
    result = X8CALL_X0(
        _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                     *(_QWORD*)v22 + 40LL))((void*)v57_.v57, v22));
    v24 = v57_.v57[0] & 1;
    v25 = (unsigned __int64)LOBYTE(v57_.v57[0]) >> 1;
    if (v24 != 0) {
      v25 = v57_.v57[1];
    }
    if (v25 == 0) {
      goto LABEL_32;
    }
    v26 = v57_.v58;
    result = (_QWORD*)(v20 - (_QWORD)v16);
    if (v24 == 0) {
      v26 = (unsigned __int8*)v57_.v57 + 1;
    }
    if ((__int64)result > *v26) {
      v27 = a4;
      v28 = *(_QWORD*)a2;
      fs_63be60((void*)(v55_.v55), (__int64)result, (unsigned __int8*)v57_.v57);
      v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 32LL))(v22);
      v30 = v28;
      a4 = v27;
      result = (_QWORD*)GameHr_63b800(v30, v12, v16, v20,
                                      (unsigned __int8*)v55_.v55, v29, a3, v27);
      if ((v55_.v55[0] & 1) != 0 && v55_.v56 != 0) {
        v31 = result;
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v55_.v56);
        result = v31;
      }
      v33 = 0;
      if ((v57_.v57[0] & 1) == 0) {
      LABEL_37:
        if (v33 == 0) {
          return result;
        }
        goto LABEL_38;
      }
    }
    else {
    LABEL_32:
      v33 = 1;
      if (v24 == 0) {
        goto LABEL_37;
      }
    }
    if (v57_.v58 != nullptr) {
      v34 = result;
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, (__int64)v57_.v58);
      result = v34;
    }
    goto LABEL_37;
  }
LABEL_38:
  v36 = *(_QWORD*)a2;
  v54 = v20;
  v37 = HIDWORD(a3);
  if ((v11 & 7) == 4) {
    v38 = *(_QWORD**)(v36 + 32);
    v39 = &v16[-v12];
    v53 = a4;
    v40 = &v16[-v12];
    if (v38 == nullptr ||
        ((v41 = v38[1], *v38 - v41 >= (unsigned __int64)v39)
             ? (v40 = &v16[-v12])
             : (v40 = (unsigned __int8*)(*v38 - v41)),
         (v42 = *v38 > v41, v43 = &v39[v41], v42) ? (v44 = v40 == nullptr)
                                                  : (v44 = true),
         v38[1] = v43, !v44)) {
      v50 = *(_QWORD*)(v36 + 16);
      do {
        v51 = *(_QWORD*)(v36 + 8) - v50;
        if (v51 < (unsigned __int64)(v40 + 1)) {
          (*(void (**)(__int64, unsigned __int8*))(v36 + 24))(v36, v40 + 2);
          v50 = *(_QWORD*)(v36 + 16);
          v51 = *(_QWORD*)(v36 + 8) - v50;
        }
        if (v51 >= (unsigned __int64)v40) {
          v52 = (unsigned __int64)v40;
        }
        else {
          v52 = v51;
        }
        if (v52 != 0) {
          memmove_alt1(*(_QWORD*)v36 + v50, v12, v52);
          v50 = *(_QWORD*)(v36 + 16);
        }
        v50 += v52;
        v12 += v52;
        *(_QWORD*)(v36 + 16) = v50;
        v42 = (unsigned __int64)v40 > v51;
        v40 -= v52;
      } while (v42);
    }
    v36 = *(_QWORD*)a2;
    a4 = v53;
    if (SHIDWORD(a3) >= (int)v39) {
      v45 = (int)v39;
    }
    else {
      v45 = HIDWORD(a3);
    }
    v46 = a3 & 0xF8 | 3;
    v37 = (unsigned int)(HIDWORD(a3) - v45);
    v47 = 48;
  }
  else {
    v47 = BYTE4(a4);
    v46 = a3;
    v16 = (unsigned __int8*)v12;
  }
  v48 = v37 << 32;
  v49 = a4 & 0xFFFFFF00FFFFFFFFLL | ((unsigned __int64)v47 << 32);
  if ((a3 & 0xFF00) == 0x700) {
    return (_QWORD*)GameHr_63c1a0(v16, v54, v36,
                                  (unsigned int)a3 & 0xFFFF0700 | v48 | v46,
                                  v49, (__int64 (*)(_QWORD))GameRoutine_63c3f0);
  }
  else {
    return (_QWORD*)GameRoutine_639dc0(
        (__int64)v16, v54 - (_QWORD)v16, v36,
        v48 | (unsigned int)a3 & 0xFFFFFF00 | v46, v49, v54 - (_QWORD)v16);
  }
}

__int64 fs_63fdc0(__int64 a1, __int64 a2, __int64* a3, __int64 a4, __int64 a5,
                  unsigned __int64 a6)
{
  char v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  int v21;
  signed __int64 v22;
  unsigned __int64 v23;
  unsigned __int8 v24;
  int v25;
  unsigned __int64 v26;
  char v27;
  unsigned __int64* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  char v37;
  unsigned __int64* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  char* v45;
  char* v46;
  char v47;
  char* v48;
  unsigned __int64 v49;
  unsigned __int64* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64* v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  bool v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  char v70;
  unsigned __int64* v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64* v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  _QWORD* v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  bool v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  unsigned __int64* v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  __int64 result;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  int v111;
  unsigned __int64 v112;
  __int64* v113;
  __int64 v114;
  __int64 v115[3];
  __int64 v116[3];

  v11 = a5;
  v114 = std___1_locale_use_facet_alt1(a4, GameData_212c3d8);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)v114 + 40LL))((void*)(v116), (__int64)v114);
  v12 = a3[2];
  v13 = *a3;
  if (v12 >= a3[1]) {
    v12 = a3[1];
  }
  v14 = v116[1];
  v15 = v12 - v13;
  v16 = (unsigned __int64)LOBYTE(v116[0]) >> 1;
  if ((v116[0] & 1) != 0) {
    v16 = v116[1];
  }
  if (v16 != 0) {
    if ((v116[0] & 1) != 0) {
      v17 = (unsigned __int8*)v116[2];
    }
    else {
      v17 = (unsigned __int8*)v116 + 1;
    }
    if ((__int64)v15 <= *v17) {
      if ((v116[0] & 1) != 0) {
        v14 = 0;
        *(_BYTE*)v116[2] = 0;
        v116[1] = 0;
      }
      else {
        LOWORD(v116[0]) = 0;
      }
    }
    else {
      fs_63be60((void*)(v115), v15, (unsigned __int8*)v116);
      if ((v116[0] & 1) != 0 && v116[2] != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v116[2]);
      }
      v14 = v115[1];
      qmemcpy(v116, v115, sizeof(v116));
    }
  }
  v19 = *(char**)(a2 + 16);
  v20 = HIDWORD(a6);
  v21 = v11 & 7;
  if ((v116[0] & 1) == 0) {
    v14 = (unsigned __int64)LOBYTE(v116[0]) >> 1;
  }
  v22 = a3[3] - (_QWORD)v19 + *(int*)(a2 + 4) + v14 - (v14 != 0);
  v23 = (a5 >> 32) - v22;
  if (a5 >> 32 <= v22) {
    v112 = 0;
    v23 = 0;
    v24 = v20;
    if (v21 != 4) {
      goto LABEL_43;
    }
    goto LABEL_38;
  }
  if (v21 == 4) {
    v24 = 48;
  }
  else {
    v24 = v20;
  }
  if (v21 == 4) {
    v25 = 3;
  }
  else {
    v25 = v21;
  }
  if (v25 <= 1) {
    if (v25 != 0) {
      v112 = v23;
      v23 = 0;
      if (v21 != 4) {
        goto LABEL_43;
      }
      goto LABEL_38;
    }
  LABEL_35:
    v112 = 0;
    if (v21 != 4) {
      goto LABEL_43;
    }
    goto LABEL_38;
  }
  if (v25 == 3) {
    goto LABEL_35;
  }
  v26 = v23 - (v23 >> 1);
  v23 >>= 1;
  v112 = v26;
  if (v21 == 4) {
  LABEL_38:
    if ((char*)v13 != v19) {
      v27 = *v19;
      v28 = *(unsigned __int64**)(a1 + 32);
      if (v28 == nullptr ||
          (v30 = *v28, v29 = v28[1], v28[1] = v29 + 1, v29 < v30)) {
        v31 = *(_QWORD*)(a1 + 16);
        v32 = *(_QWORD*)a1;
        *(_QWORD*)(a1 + 16) = v31 + 1;
        *(_BYTE*)(v32 + v31) = v27;
        if (*(_QWORD*)(a1 + 16) == *(_QWORD*)(a1 + 8)) {
          v33 = v23;
          (*(void (**)(__int64, __int64))(a1 + 24))(a1, 2);
          v23 = v33;
        }
      }
    }
  }
LABEL_43:
  v111 = v20 & 0xFFFFFF00 | v24;
  v34 = fs_63b1a0_alt1(a1, v23, v111);
  v35 = v34;
  if (v21 != 4) {
    v36 = *(char**)(a2 + 16);
    if ((char*)v13 != v36) {
      v37 = *v36;
      v38 = *(unsigned __int64**)(v34 + 32);
      if (v38 == nullptr ||
          (v40 = *v38, v39 = v38[1], v38[1] = v39 + 1, v39 < v40)) {
        v41 = *(_QWORD*)(v34 + 16);
        v42 = *(_QWORD*)v34;
        *(_QWORD*)(v34 + 16) = v41 + 1;
        *(_BYTE*)(v42 + v41) = v37;
        if (*(_QWORD*)(v34 + 16) == *(_QWORD*)(v34 + 8)) {
          (*(void (**)(__int64, __int64))(v34 + 24))(v34, 2);
        }
      }
    }
  }
  v43 = v116[1];
  v110 = a2;
  v113 = a3;
  if ((v116[0] & 1) == 0) {
    v43 = (unsigned __int64)LOBYTE(v116[0]) >> 1;
  }
  if (v43 != 0) {
    if ((v116[0] & 1) != 0) {
      v44 = (char*)v116[2];
    }
    else {
      v44 = (char*)v116 + 1;
    }
    v45 = &v44[v43];
    v46 = v44 + 1;
    v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v114 + 32LL))((__int64)v114);
    while (1) {
      v48 = v45 - 1;
      v49 = (unsigned __int8)*(v45 - 1);
      v50 = *(unsigned __int64**)(v35 + 32);
      if (v50 == nullptr) {
        goto LABEL_69;
      }
      v52 = *v50;
      v51 = v50[1];
      v53 = *v50 - v51;
      v50[1] = v51 + v49;
      if (v53 < v49) {
        v49 = v53;
      }
      if (v52 > v51 && v49 != 0) {
      LABEL_69:
        v60 = *(_QWORD*)(v35 + 16);
        v61 = v13;
        do {
          v63 = *(_QWORD*)(v35 + 8) - v60;
          if (v63 < v49 + 1) {
            (*(void (**)(__int64, unsigned __int64))(v35 + 24))(v35, v49 + 2);
            v60 = *(_QWORD*)(v35 + 16);
            v63 = *(_QWORD*)(v35 + 8) - v60;
          }
          if (v63 >= v49) {
            v64 = v49;
          }
          else {
            v64 = v63;
          }
          if (v64 != 0) {
            memmove_alt1(*(_QWORD*)v35 + v60, v61, v64);
            v60 = *(_QWORD*)(v35 + 16);
          }
          v60 += v64;
          v61 += v64;
          *(_QWORD*)(v35 + 16) = v60;
          v62 = v49 > v63;
          v49 -= v64;
        } while (v62);
      }
      if (v45 == v46) {
        break;
      }
      v13 += (unsigned __int8)*v48;
      v55 = *(unsigned __int64**)(v35 + 32);
      if (v55 != nullptr) {
        v57 = *v55;
        v56 = v55[1];
        --v45;
        v55[1] = v56 + 1;
        if (v56 >= v57) {
          continue;
        }
      }
      v58 = *(_QWORD*)(v35 + 16);
      v59 = *(_QWORD*)v35;
      v45 = v48;
      *(_QWORD*)(v35 + 16) = v58 + 1;
      *(_BYTE*)(v59 + v58) = v47;
      if (*(_QWORD*)(v35 + 16) == *(_QWORD*)(v35 + 8)) {
        (*(void (**)(__int64, __int64))(v35 + 24))(v35, 2);
        v45 = v48;
      }
    }
  }
  else {
    v65 = *(unsigned __int64**)(v35 + 32);
    if (v65 == nullptr) {
      goto LABEL_129;
    }
    v67 = *v65;
    v66 = v65[1];
    v68 = *v65 - v66;
    v65[1] = v66 + v15;
    if (v68 < v15) {
      v15 = v68;
    }
    if (v67 > v66 && v15 != 0) {
    LABEL_129:
      v101 = *(_QWORD*)(v35 + 16);
      do {
        v102 = *(_QWORD*)(v35 + 8) - v101;
        if (v102 < v15 + 1) {
          (*(void (**)(__int64, unsigned __int64))(v35 + 24))(v35, v15 + 2);
          v101 = *(_QWORD*)(v35 + 16);
          v102 = *(_QWORD*)(v35 + 8) - v101;
        }
        if (v102 >= v15) {
          v103 = v15;
        }
        else {
          v103 = v102;
        }
        if (v103 != 0) {
          memmove_alt1(*(_QWORD*)v35 + v101, v13, v103);
          v101 = *(_QWORD*)(v35 + 16);
        }
        v101 += v103;
        v13 += v103;
        *(_QWORD*)(v35 + 16) = v101;
        v62 = v15 > v102;
        v15 -= v103;
      } while (v62);
    }
  }
  if (v113[1] == v113[3]) {
    goto LABEL_107;
  }
  v70 = (*(__int64 (**)(__int64))(*(_QWORD*)v114 + 24LL))(v114);
  v71 = *(unsigned __int64**)(v35 + 32);
  if (v71 == nullptr ||
      (v73 = *v71, v72 = v71[1], v71[1] = v72 + 1, v72 < v73)) {
    v74 = *(_QWORD*)(v35 + 16);
    v75 = *(_QWORD*)v35;
    *(_QWORD*)(v35 + 16) = v74 + 1;
    *(_BYTE*)(v75 + v74) = v70;
    if (*(_QWORD*)(v35 + 16) == *(_QWORD*)(v35 + 8)) {
      (*(void (**)(__int64, __int64))(v35 + 24))(v35, 2);
    }
  }
  v76 = v113[1] + 1;
  v77 = v113[2] - v76;
  v78 = *(unsigned __int64**)(v35 + 32);
  if (v78 == nullptr) {
    v81 = v113[2] - v76;
    goto LABEL_140;
  }
  v80 = *v78;
  v79 = v78[1];
  if (*v78 - v79 >= v77) {
    v81 = v113[2] - v76;
  }
  else {
    v81 = *v78 - v79;
  }
  v78[1] = v79 + v77;
  if (v80 > v79 && v81 != 0) {
  LABEL_140:
    v104 = *(_QWORD*)(v35 + 16);
    do {
      v105 = *(_QWORD*)(v35 + 8) - v104;
      if (v105 < v81 + 1) {
        (*(void (**)(__int64, unsigned __int64))(v35 + 24))(v35, v81 + 2);
        v104 = *(_QWORD*)(v35 + 16);
        v105 = *(_QWORD*)(v35 + 8) - v104;
      }
      if (v105 >= v81) {
        v106 = v81;
      }
      else {
        v106 = v105;
      }
      if (v106 != 0) {
        memmove_alt1(*(_QWORD*)v35 + v104, v76, v106);
        v104 = *(_QWORD*)(v35 + 16);
      }
      v104 += v106;
      v76 += v106;
      *(_QWORD*)(v35 + 16) = v104;
      v62 = v81 > v105;
      v81 -= v106;
    } while (v62);
  }
  v82 = *(int*)(v110 + 4);
  v83 = *(_QWORD**)(v35 + 32);
  if (v83 != nullptr) {
    v84 = v83[1];
    if (*v83 - v84 >= v82) {
      v85 = *(int*)(v110 + 4);
    }
    else {
      v85 = *v83 - v84;
    }
    v86 = v84 + v82;
    v87 = *v83 <= v84 || v85 == 0;
    v83[1] = v86;
    if (v87) {
      goto LABEL_107;
    }
  }
  else {
    v85 = *(int*)(v110 + 4);
  }
  v107 = *(_QWORD*)(v35 + 16);
  do {
    v108 = *(_QWORD*)(v35 + 8) - v107;
    if (v108 < v85 + 1) {
      (*(void (**)(__int64, unsigned __int64))(v35 + 24))(v35, v85 + 2);
      v107 = *(_QWORD*)(v35 + 16);
      v108 = *(_QWORD*)(v35 + 8) - v107;
    }
    if (v108 >= v85) {
      v109 = v85;
    }
    else {
      v109 = v108;
    }
    if (v109 != 0) {
      memset_alt1(*(_QWORD*)v35 + v107, 48, v109);
      v107 = *(_QWORD*)(v35 + 16);
    }
    v107 += v109;
    *(_QWORD*)(v35 + 16) = v107;
    v62 = v85 > v108;
    v85 -= v109;
  } while (v62);
LABEL_107:
  v89 = v113[2];
  v88 = v113[3];
  if (v89 == v88) {
    goto LABEL_123;
  }
  v90 = v88 - v89;
  v91 = *(unsigned __int64**)(v35 + 32);
  if (v91 == nullptr) {
    goto LABEL_113;
  }
  v93 = *v91;
  v92 = v91[1];
  v94 = *v91 - v92;
  v91[1] = v92 + v90;
  if (v94 >= v90) {
    v94 = v90;
  }
  if (v93 > v92) {
    v90 = v94;
  LABEL_113:
    v95 = *(_QWORD*)(v35 + 16);
    do {
      v96 = *(_QWORD*)(v35 + 8) - v95;
      if (v96 < v90 + 1) {
        (*(void (**)(__int64, unsigned __int64))(v35 + 24))(v35, v90 + 2);
        v95 = *(_QWORD*)(v35 + 16);
        v96 = *(_QWORD*)(v35 + 8) - v95;
      }
      if (v96 >= v90) {
        v97 = v90;
      }
      else {
        v97 = v96;
      }
      if (v97 != 0) {
        memmove_alt1(*(_QWORD*)v35 + v95, v89, v97);
        v95 = *(_QWORD*)(v35 + 16);
      }
      v95 += v97;
      v89 += v97;
      *(_QWORD*)(v35 + 16) = v95;
      v62 = v90 > v96;
      v90 -= v97;
    } while (v62);
  }
LABEL_123:
  result = fs_63b1a0_alt1(v35, v112, v111);
  if ((v116[0] & 1) != 0 && v116[2] != 0) {
    v99 = result;
    v100 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v100 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v100, v116[2]);
    return v99;
  }
  return result;
}

#pragma GCC visibility pop
