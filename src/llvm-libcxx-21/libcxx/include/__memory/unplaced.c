#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_c1a2c0(_QWORD*, __int64*);
__attribute__((swiftcall)) void GameRoutine_c09c40(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___memory_d2be90_alt1(
    PSEUDO_X8, __int64 result,
    __int64) __asm__("llvm_libcxx_21_libcxx_include___memory_d2be90");
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___memory_d2caa0_alt1(
    __attribute__((swift_indirect_result)) void*,
    __int64 result) __asm__("llvm_libcxx_21_libcxx_include___memory_d2caa0");
__int64 ElfFile_631220(__int64*, const char*);
__int64 GameHr_1070320(_QWORD, _QWORD);
__int64 GameHr_198b6c0(__int64*);
__int64 GameRoutine_108c3c0(_QWORD);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_c0b3c0(__int64, unsigned __int8*);
__int64 GameRoutine_d2db60(_QWORD, _QWORD, _QWORD);
__int64 ResFile_5e5f00(__int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 strlen(_QWORD);
bool GameRoutine_ad7390(_QWORD*);
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_6e5a40(__int64*, unsigned __int64, _DWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_66df80();
void __attribute__((noreturn)) GameRoutine_a594e0();
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___memory_d2be90(
    __attribute__((swift_indirect_result)) void* x8_, __int64 result,
    __int64 a2);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___memory_d2caa0(PSEUDO_X8 x8_, __int64 result);
bool llvm_libcxx_21_libcxx_include___memory_d2d4e0(__int64 a1);
float llvm_libcxx_21_libcxx_include___memory_d2d9c0(__int64 a1, __int64 a2,
                                                    float a3);
__int64 llvm_libcxx_21_libcxx_include___memory_1988c80(_QWORD* a1);
unsigned int*
llvm_libcxx_21_libcxx_include___memory_1989130(unsigned int* result,
                                               __int64 a2);
void llvm_libcxx_21_libcxx_include___memory_1989b20(__int64 a1, __int64 a2,
                                                    __int64 a3, _QWORD* a4);

__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___memory_d2be90(
    __attribute__((swift_indirect_result)) void* x8_, __int64 result,
    __int64 a2)
{
  __int64* a3 = (__int64*)(unsigned __int64)x8_;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  unsigned __int64 v31;
  __int64** v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  __int64 v40;
  __int64 v42;
  unsigned __int64 v43;
  __int64** v44;
  __int64* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v51;
  unsigned __int64 v52;
  __int64** v53;
  __int64* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  float v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  _QWORD* v75;
  _QWORD* v76;
  _QWORD* v77;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  if ((int)result > -1511520287) {
    switch ((_DWORD)result) {
    case 0x7A48BE6D:
      v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v14 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v14 = 0x9C4DEFF5D1148CA7LL;
      v15 = fw_memory_HeapManager_Allocate(*v13, 16, 16, 0);
      v16 = v15;
      v17 = v15 + 16;
      v18 = -55136776;
      break;
    case 0xCF33C5B9:
      v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v14 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v14 = 0xEDD4C53151E1BEBFLL;
      v15 = fw_memory_HeapManager_Allocate(*v13, 16, 16, 0);
      v16 = v15;
      v17 = v15 + 16;
      v18 = -1702639730;
      break;
    case 0xA5E807E2:
      v5 = fw_memory_g_heap_manager_ptr;
      v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      v75 = v6;
      *v6 = 0xBF984FAF1716242DLL;
      v76 = v6 + 1;
      v77 = v6 + 1;
      GameRoutine_d2db60(a3, a2, &v75);
      v7 = *(_QWORD*)v5;
      v8 = v6;
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v9 = 56;
      }
      {
        nn_mem_StandardAllocator_Free(v7 + v9, v8);
        return;
      }
    default: {
      result;
      return;
    }
    }
  LABEL_20:
    *(_DWORD*)(v15 + 8) = v18;
    v19 = *v14;
    v77 = (_QWORD*)v17;
    v20 = *v13;
    v21 = v15 + 12;
    v75 = (_QWORD*)v15;
    *(_QWORD*)v15 = v19;
    if (*(_QWORD*)(v20 + 200) != 0) {
      v22 = 128;
    }
    else {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(v20 + v22, v14);
    v76 = (_QWORD*)v21;
    GameRoutine_d2db60(a3, a2, &v75);
    v7 = *v13;
    v8 = (_QWORD*)v16;
    if (*(_QWORD*)(*v13 + 200LL) != 0) {
      v9 = 128;
    }
    else {
      v9 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(v7 + v9, v8);
      return;
    }
  }
  if ((_DWORD)result == -1596394510) {
    v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v14 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    *v14 = 0x6823716A829D7678LL;
    v15 = fw_memory_HeapManager_Allocate(*v13, 16, 16, 0);
    v17 = v15 + 16;
    v16 = v15;
    v18 = 1383687943;
    goto LABEL_20;
  }
  if ((_DWORD)result != -1511532086) {
    result;
    return;
  }
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    goto LABEL_45;
  }
  v11 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v12 = 387327021;
    if ((unsigned __int64)GameData_22356f8 <= 0x1716242D) {
      v12 = 0x1716242D % (unsigned int)GameData_22356f8;
    }
  }
  else {
    v12 = ((_DWORD)GameData_22356f8 - 1) & 0x1716242D;
  }
  v23 = *(__int64***)(GameData_22356f0 + 8 * v12);
  if (v23 == nullptr || (v24 = *v23) == nullptr) {
  LABEL_45:
    v27 = 0;
    goto LABEL_46;
  }
  if ((GameData_22356f8 & v11) == 0) {
    while (1) {
      v26 = v24[1];
      if (v26 == 387327021) {
        if (*((_DWORD*)v24 + 4) == 387327021) {
          goto LABEL_44;
        }
      }
      else if ((v26 & v11) != v12) {
        goto LABEL_45;
      }
      v24 = (__int64*)*v24;
      if (v24 == nullptr) {
        goto LABEL_45;
      }
    }
  }
  while (1) {
    v25 = v24[1];
    if (v25 == 387327021) {
      break;
    }
    if (v25 >= GameData_22356f8) {
      v25 %= (unsigned __int64)GameData_22356f8;
    }
    if (v25 != v12) {
      goto LABEL_45;
    }
  LABEL_34:
    v24 = (__int64*)*v24;
    if (v24 == nullptr) {
      goto LABEL_45;
    }
  }
  if (*((_DWORD*)v24 + 4) != 387327021) {
    goto LABEL_34;
  }
LABEL_44:
  v27 = 387327021;
LABEL_46:
  v28 = GameHr_1070320(a2, v27);
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    goto LABEL_70;
  }
  v30 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v31 = -2009923318;
    if ((unsigned __int64)GameData_22356f8 <= 0xFFFFFFFF8833010ALL) {
      v31 = 0xFFFFFFFF8833010ALL % GameData_22356f8;
    }
  }
  else {
    v31 = v30 & 0xFFFFFFFF8833010ALL;
  }
  v32 = *(__int64***)(GameData_22356f0 + 8 * v31);
  if (v32 == nullptr || (v33 = *v32) == nullptr) {
  LABEL_70:
    v36 = 0;
    goto LABEL_71;
  }
  if ((GameData_22356f8 & v30) == 0) {
    while (1) {
      v35 = v33[1];
      if (v35 == -2009923318) {
        if (*((_DWORD*)v33 + 4) == -2009923318) {
          goto LABEL_69;
        }
      }
      else if ((v35 & v30) != v31) {
        goto LABEL_70;
      }
      v33 = (__int64*)*v33;
      if (v33 == nullptr) {
        goto LABEL_70;
      }
    }
  }
  while (2) {
    v34 = v33[1];
    if (v34 != -2009923318) {
      if (v34 >= GameData_22356f8) {
        v34 %= (unsigned __int64)GameData_22356f8;
      }
      if (v34 != v31) {
        goto LABEL_70;
      }
    }
    else if (*((_DWORD*)v33 + 4) == -2009923318) {
    LABEL_69:
      v36 = 2285043978LL;
    LABEL_71:
      v37 = GameHr_1070320(a2, v36);
      v38 = -1.0f;
      if (v28 != 0 && v37 != 0) {
        v39 = *(_QWORD*)(v28 + 24);
        if (v39 != 0) {
          v40 = *(_QWORD*)(v37 + 24);
          if (v40 != 0) {
            v38 = (float)*(int*)(v39 + 64) / (float)*(int*)(v40 + 64);
          }
        }
      }
      if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
        goto LABEL_100;
      }
      v42 = GameData_22356f8 - 1;
      if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
        v43 = -1080537169;
        if ((unsigned __int64)GameData_22356f8 <= 0xFFFFFFFFBF984FAFLL) {
          v43 = 0xFFFFFFFFBF984FAFLL % GameData_22356f8;
        }
      }
      else {
        v43 = v42 & 0xFFFFFFFFBF984FAFLL;
      }
      v44 = *(__int64***)(GameData_22356f0 + 8 * v43);
      if (v44 == nullptr || (v45 = *v44) == nullptr) {
      LABEL_100:
        v48 = 0;
        goto LABEL_101;
      }
      if ((GameData_22356f8 & v42) == 0) {
        while (1) {
          v47 = v45[1];
          if (v47 == -1080537169) {
            if (*((_DWORD*)v45 + 4) == -1080537169) {
              goto LABEL_99;
            }
          }
          else if ((v47 & v42) != v43) {
            goto LABEL_100;
          }
          v45 = (__int64*)*v45;
          if (v45 == nullptr) {
            goto LABEL_100;
          }
        }
      }
      while (2) {
        v46 = v45[1];
        if (v46 != -1080537169) {
          if (v46 >= GameData_22356f8) {
            v46 %= (unsigned __int64)GameData_22356f8;
          }
          if (v46 != v43) {
            goto LABEL_100;
          }
        }
        else if (*((_DWORD*)v45 + 4) == -1080537169) {
        LABEL_99:
          v48 = 3214430127LL;
        LABEL_101:
          v49 = GameHr_1070320(a2, v48);
          if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
            goto LABEL_125;
          }
          v51 = GameData_22356f8 - 1;
          if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
            v52 = -2009923318;
            if ((unsigned __int64)GameData_22356f8 <= 0xFFFFFFFF8833010ALL) {
              v52 = 0xFFFFFFFF8833010ALL % GameData_22356f8;
            }
          }
          else {
            v52 = v51 & 0xFFFFFFFF8833010ALL;
          }
          v53 = *(__int64***)(GameData_22356f0 + 8 * v52);
          if (v53 == nullptr || (v54 = *v53) == nullptr) {
          LABEL_125:
            v57 = 0;
            goto LABEL_126;
          }
          if ((GameData_22356f8 & v51) == 0) {
            while (1) {
              v56 = v54[1];
              if (v56 == -2009923318) {
                if (*((_DWORD*)v54 + 4) == -2009923318) {
                  goto LABEL_124;
                }
              }
              else if ((v56 & v51) != v52) {
                goto LABEL_125;
              }
              v54 = (__int64*)*v54;
              if (v54 == nullptr) {
                goto LABEL_125;
              }
            }
          }
          while (2) {
            v55 = v54[1];
            if (v55 != -2009923318) {
              if (v55 >= GameData_22356f8) {
                v55 %= (unsigned __int64)GameData_22356f8;
              }
              if (v55 != v52) {
                goto LABEL_125;
              }
            }
            else if (*((_DWORD*)v54 + 4) == -2009923318) {
            LABEL_124:
              v57 = 2285043978LL;
            LABEL_126:
              v58 = GameHr_1070320(a2, v57);
              v59 = -1.0f;
              if (v49 != 0 && v58 != 0) {
                v60 = *(_QWORD*)(v49 + 24);
                if (v60 != 0) {
                  v61 = *(_QWORD*)(v58 + 24);
                  if (v61 != 0) {
                    v59 = (float)*(int*)(v60 + 64) / (float)*(int*)(v61 + 64);
                  }
                }
              }
              v62 = (_QWORD*)fw_memory_g_heap_manager_ptr;
              v63 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
              *(_DWORD*)v63 = 387327021;
              *(_QWORD*)(v63 + 8) = 0;
              *(float*)(v63 + 16) = v38;
              v64 = fw_memory_HeapManager_Allocate(*v62, 48, 16, 0);
              v65 = *(_DWORD*)(v63 + 16);
              *(_DWORD*)(v64 + 24) = -1080537169;
              *(float*)(v64 + 40) = v59;
              v66 = v64;
              *(_QWORD*)(v64 + 32) = 0x3F80000000000000LL;
              *(_DWORD*)v64 = *(_DWORD*)v63;
              v67 = *(_QWORD*)(v63 + 8);
              *(_DWORD*)(v64 + 16) = v65;
              *(_QWORD*)(v64 + 8) = v67;
              if (*(_QWORD*)(*v62 + 200LL) != 0) {
                v68 = 128;
              }
              else {
                v68 = 56;
              }
              nn_mem_StandardAllocator_Free(*v62 + v68, v63);
              v69 = fw_memory_HeapManager_Allocate(*v62, 96, 16, 0);
              v70 = *(_DWORD*)(v66 + 16);
              *(_DWORD*)(v69 + 48) = -2009923318;
              v71 = v69 + 72;
              *a3 = v69;
              *(_QWORD*)(v69 + 56) = 1065353216;
              *(_DWORD*)(v69 + 64) = 1065353216;
              *(_DWORD*)v69 = *(_DWORD*)v66;
              v72 = *(_QWORD*)(v66 + 8);
              *(_DWORD*)(v69 + 16) = v70;
              v73 = *(_DWORD*)(v66 + 40);
              *(_QWORD*)(v69 + 8) = v72;
              LODWORD(v72) = *(_DWORD*)(v66 + 24);
              *(_DWORD*)(v69 + 40) = v73;
              *(_DWORD*)(v69 + 24) = v72;
              *(_QWORD*)(v69 + 32) = *(_QWORD*)(v66 + 32);
              a3[2] = v69 + 96;
              if (*(_QWORD*)(*v62 + 200LL) != 0) {
                v74 = 128;
              }
              else {
                v74 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v62 + v74, v66);
              a3[1] = v71;
              {
                result;
                return;
              }
            }
            v54 = (__int64*)*v54;
            if (v54 == nullptr) {
              goto LABEL_125;
            }
            continue;
          }
        }
        v45 = (__int64*)*v45;
        if (v45 == nullptr) {
          goto LABEL_100;
        }
        continue;
      }
    }
    v33 = (__int64*)*v33;
    if (v33 == nullptr) {
      goto LABEL_70;
    }
    continue;
  }
}

__attribute__((swiftcall)) void

llvm_libcxx_21_libcxx_include___memory_d2caa0(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v18;
  unsigned int v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    goto LABEL_24;
  }
  v3 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v4 = (int)result;
    if (GameData_22356f8 <= (unsigned __int64)(int)result) {
      v4 = (int)result % (unsigned __int64)GameData_22356f8;
    }
  }
  else {
    v4 = v3 & (int)result;
  }
  v5 = *(__int64***)(GameData_22356f0 + 8 * v4);
  if (v5 == nullptr || (v6 = *v5) == nullptr) {
  LABEL_24:
    if ((int)result <= -1511520287) {
      switch ((_DWORD)result) {
      case 0x923FC97B:
        *(_BYTE*)a2 = 12;
        strcpy((char*)(a2 + 1), "Rotate");
        {
          result;
          return;
        }
      case 0xA0D8F3F2:
        *(_BYTE*)a2 = 38;
        strcpy((char*)(a2 + 16), "tEnd");
        v10 = "EventWalk2SprintEnd";
        goto LABEL_42;
      case 0xA5E7D9CA:
        *(_BYTE*)a2 = 14;
        *(_DWORD*)(a2 + 1) = 1802264919;
        v9 = 2037139051;
        goto LABEL_40;
      default:
        break;
      }
    }
    else {
      if ((int)result <= 699171364) {
        if ((_DWORD)result != -1511520286) {
          if ((_DWORD)result == -818690631) {
            strcpy((char*)a2, "*EventWalk2SprintStart");
            {
              result;
              return;
            }
          }
          goto LABEL_37;
        }
        *(_BYTE*)a2 = 14;
        *(_DWORD*)(a2 + 1) = 1802264919;
        v9 = 1853182571;
      LABEL_40:
        *(_DWORD*)(a2 + 4) = v9;
        *(_BYTE*)(a2 + 8) = 0;
        {
          result;
          return;
        }
      }
      if ((_DWORD)result == 699171365) {
        *(_BYTE*)a2 = 14;
        *(_DWORD*)(a2 + 1) = 1852994900;
        v9 = 1735289198;
        goto LABEL_40;
      }
      if ((_DWORD)result == 2051587693) {
        *(_BYTE*)a2 = 40;
        strcpy((char*)(a2 + 17), "Loop");
        v10 = "EventWalk2SprintLoop";
      LABEL_42:
        v12 = *(_QWORD*)v10;
        v11 = *((_QWORD*)v10 + 1);
        *(_QWORD*)(a2 + 1) = v12;
        *(_QWORD*)(a2 + 9) = v11;
        {
          result;
          return;
        }
      }
    }
  LABEL_37:
    *(_WORD*)a2 = 0;
    {
      result;
      return;
    }
  }
  if ((GameData_22356f8 & v3) == 0) {
    while (1) {
      v8 = v6[1];
      if (v8 == (int)result) {
        if (*((_DWORD*)v6 + 4) == (_DWORD)result) {
          goto LABEL_43;
        }
      }
      else if ((v8 & v3) != v4) {
        goto LABEL_24;
      }
      v6 = (__int64*)*v6;
      if (v6 == nullptr) {
        goto LABEL_24;
      }
    }
  }
  while (1) {
    v7 = v6[1];
    if (v7 == (int)result) {
      break;
    }
    if (v7 >= GameData_22356f8) {
      v7 %= (unsigned __int64)GameData_22356f8;
    }
    if (v7 != v4) {
      goto LABEL_24;
    }
  LABEL_14:
    v6 = (__int64*)*v6;
    if (v6 == nullptr) {
      goto LABEL_24;
    }
  }
  if (*((_DWORD*)v6 + 4) != (_DWORD)result) {
    goto LABEL_14;
  }
LABEL_43:
  if ((GameData_22356f8 & v3) != 0) {
    v13 = (int)result;
    if (GameData_22356f8 <= (unsigned __int64)(int)result) {
      v13 = (int)result % (unsigned __int64)GameData_22356f8;
    }
  }
  else {
    v13 = v3 & (int)result;
  }
  v14 = *(__int64***)(GameData_22356f0 + 8 * v13);
  if (v14 != nullptr) {
    v15 = *v14;
    if (v15 != nullptr) {
      if ((GameData_22356f8 & v3) == 0) {
        while (1) {
          v17 = v15[1];
          if (v17 == (int)result) {
            if (*((_DWORD*)v15 + 4) == (_DWORD)result) {
              goto LABEL_62;
            }
          }
          else if ((v17 & v3) != v13) {
            goto LABEL_63;
          }
          v15 = (__int64*)*v15;
          if (v15 == nullptr) {
            goto LABEL_63;
          }
        }
      }
      do {
        v16 = v15[1];
        if (v16 == (int)result) {
          if (*((_DWORD*)v15 + 4) == (_DWORD)result) {
          LABEL_62:
            v18 = (__int64*)a2;
            goto LABEL_69;
          }
        }
        else {
          if (v16 >= GameData_22356f8) {
            v16 %= (unsigned __int64)GameData_22356f8;
          }
          if (v16 != v13) {
            break;
          }
        }
        v15 = (__int64*)*v15;
      } while (v15 != nullptr);
    }
  }
LABEL_63:
  v18 = (__int64*)a2;
  if ((_DWORD)result == 699171365) {
    v19 = 869686455;
  }
  else {
    v19 = 0;
  }
  if ((_DWORD)result == -1841313413) {
    result = 387327021;
  }
  else {
    result = v19;
  }
LABEL_69:
  v20 = GameRoutine_108c3c0(result);
  v21 = strlen(v20);
  if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v22 = v21;
  if (v21 >= 0x17) {
    if ((v21 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v21 | 7) + 1;
    }
    result =
        fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23, 16, 0);
    v18[1] = v22;
    v18[2] = result;
    *v18 = v23 | 1;
    goto LABEL_77;
  }
  *(_BYTE*)v18 = 2 * v21;
  result = (__int64)v18 + 1;
  if (v22 != 0) {
  LABEL_77:
    v24 = v20;
    v25 = result;
    memmove(result, v24, v22);
    result = v25;
  }
  *(_BYTE*)(result + v22) = 0;
  {
    result;
    return;
  }
}

bool llvm_libcxx_21_libcxx_include___memory_d2d4e0(__int64 a1)
{
  unsigned __int8 v1;
  signed __int64 v2;
  _BYTE* v3;
  char* v4;
  char* v5;
  char* v6;
  char* v7;
  char* v9;
  __int64 v10;
  unsigned __int8 v13;
  _BYTE v14[15];
  _BYTE* v15;

  llvm_libcxx_21_libcxx_include___memory_d2caa0_alt1((void*)((__int64)&v13),
                                                     a1);
  v1 = v13;
  v2 = *(_QWORD*)&v14[7];
  v3 = v15;
  if ((v13 & 1) != 0) {
    v4 = v15;
  }
  else {
    v4 = v14;
  }
  if ((v13 & 1) == 0) {
    v2 = (unsigned __int64)v13 >> 1;
  }
  v5 = &v4[v2];
  if (v2 >= 7) {
    v6 = v4;
    do {
      v7 = (char*)memchr(v6, 73, v2 - 6);
      if (v7 == nullptr) {
        break;
      }
      if (*(_DWORD*)v7 == 1701602377 && *(_DWORD*)(v7 + 3) == 1953059685) {
        goto LABEL_15;
      }
      v6 = v7 + 1;
      v2 = v5 - v6;
    } while (v5 - v6 > 6);
  }
  v7 = v5;
LABEL_15:
  if ((v1 & 1) != 0 && v3 != nullptr) {
    v9 = v7;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v3);
    v7 = v9;
  }
  return v7 != v5 && v7 - v4 != -1;
}

float llvm_libcxx_21_libcxx_include___memory_d2d9c0(__int64 a1, __int64 a2,
                                                    float a3)
{
  unsigned __int64 v4;
  float v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  float* v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v23[3];

  llvm_libcxx_21_libcxx_include___memory_d2be90_alt1((void*)(v23), a1, a2);
  v4 = 0xAAAAAAAAAAAAAAABLL * ((v23[1] - v23[0]) >> 3);
  if (v4 < 2 || (int)v4 < 2) {
    v6 = 1.0f;
    if (v23[0] == 0) {
      return v6;
    }
    goto LABEL_27;
  }
  if (a3 <= *(float*)(v23[0] + 36)) {
    v9 = 0;
    v11 = 1;
  LABEL_21:
    v15 = 0.0f;
    v16 = v23[0] + 24LL * v9;
    v17 = v23[0] + 24LL * v11;
    v18 = *(float*)(v16 + 12);
    v19 = *(float*)(v17 + 12) - v18;
    if (v19 != 0.0f) {
      v15 = 1.0f;
      v20 = (float)(a3 - v18) / v19;
      if (v20 <= 1.0f) {
        v15 = v20;
      }
      if (v20 < 0.0f) {
        v15 = 0.0f;
      }
    }
    v6 = *(float*)(v16 + 16) +
         (float)(fminf(fmaxf(v15, 0.0f), 1.0f) *
                 (float)(*(float*)(v17 + 16) - *(float*)(v16 + 16)));
    goto LABEL_27;
  }
  v6 = 1.0f;
  if ((v4 & 0x7FFFFFFF) != 2) {
    if ((v4 & 0x7FFFFFFF) == 3) {
      v7 = 24;
      LODWORD(v8) = 2;
      v9 = 1;
    LABEL_12:
      LODWORD(v10) = v8;
      if (*(float*)(v23[0] + 12 + v7) > a3) {
        goto LABEL_27;
      }
    }
    else {
      v8 = (unsigned int)(v4 - 1);
      v12 = v23[0] + 36;
      v10 = 2;
      v13 = (float*)(v23[0] + 36);
      v7 = 24LL * (unsigned int)v8 - 24;
      v9 = v4 - 2;
      while (1) {
        v14 = *v13;
        v13 += 6;
        if (v14 >= a3 && *(float*)(v12 + 24) <= a3) {
          break;
        }
        ++v10;
        v12 = (__int64)v13;
        if (v8 == v10) {
          goto LABEL_12;
        }
      }
      v9 = v10 - 1;
    }
    v11 = v10;
    goto LABEL_21;
  }
LABEL_27:
  v21 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v21 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                v23[0]);
  return v6;
}

__int64 llvm_libcxx_21_libcxx_include___memory_1988c80(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  struct {
    __int64 v18[2];
    char* v19;
  } v18_;
  _QWORD v20[8];

  GameRoutine_ad7390(a1);
  v2 = ResFile_5e5f00(*(_QWORD*)(a1[1] + 592LL));
  if (*(_WORD*)(v2 + 226) != 0 || *(_WORD*)(v2 + 230) != 0) {
    LOBYTE(v3) = 1;
    return v3 & 1;
  }
  v5 = a1[1];
  if (*(_QWORD*)(v5 + 824) == 0) {
  LABEL_31:
    LOBYTE(v3) = 0;
    return v3 & 1;
  }
  v6 = *(_QWORD*)(v2 + 32);
  memset(v20, 0, sizeof(v20));
  nn_util_SNPrintf(v20, 64, "%s.mataniminfo.elf", (const char*)(v6 + 2));
  v7 = strlen_alt1((const char*)v20);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v10, 16, 0);
    v18_.v18[1] = v8;
    v18_.v19 = v9;
    v18_.v18[0] = v10 | 1;
  }
  else {
    LOBYTE(v18_.v18[0]) = 2 * v7;
    v9 = (char*)v18_.v18 + 1;
    if (v7 == 0) {
      goto LABEL_15;
    }
  }
  memcpy((__int64)v9, (__int64)v20, v8);
LABEL_15:
  v9[v8] = 0;
  v11 = GameRoutine_c0b3c0(v5 + 808, (unsigned __int8*)v18_.v18);
  if ((v18_.v18[0] & 1) != 0 && v18_.v19 != nullptr) {
    v12 = v11;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v18_.v19);
    v11 = v12;
  }
  if (v5 + 816 == v11) {
    goto LABEL_31;
  }
  v14 = *snd_g_fileIndex_ptr[0];
  GameRoutine_c09c40((void*)(v18_.v18), (__int64)a1);
  v15 = v18_.v18[0] & 1;
  if ((v18_.v18[0] & 1) != 0) {
    v3 = (__int64)v18_.v19;
  }
  else {
    v3 = (__int64)v18_.v18 + 1;
  }
  if (v3 != 0) {
    v16 = strlen_alt1((const char*)v3);
    LOBYTE(v3) = fs_6360e0(v14, v3, v16, 0, 0);
    v15 = v18_.v18[0] & 1;
  }
  if (v15 != 0 && v18_.v19 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v18_.v19);
  }
  return v3 & 1;
}

unsigned int*

llvm_libcxx_21_libcxx_include___memory_1989130(unsigned int* result, __int64 a2)
{
  unsigned int* v2;
  int v4;
  unsigned int v5;
  _DWORD* v6;
  __int64 v7;
  unsigned int* v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v2 = result;
  *(_QWORD*)result = a2;
  result[2] = 0;
  *((_QWORD*)result + 2) = 0;
  *((_QWORD*)result + 3) = 0;
  *((_QWORD*)result + 4) = 0;
  *((_QWORD*)result + 5) = 0;
  *((_QWORD*)result + 6) = 0;
  *((_QWORD*)result + 7) = 0;
  *((_QWORD*)result + 8) = 0;
  *((_QWORD*)result + 9) = 0;
  *((_QWORD*)result + 10) = 0;
  *((_QWORD*)result + 11) = 0;
  *((_QWORD*)result + 12) = 0;
  *((_QWORD*)result + 13) = 0;
  *((_QWORD*)result + 14) = 0;
  *((_QWORD*)result + 15) = 0;
  *((_QWORD*)result + 16) = 0;
  if (a2 != 0 && *(_QWORD*)(a2 + 592) != 0 &&
      (nn_os_AcquireReadLock(a2 + 696), v4 = *(_DWORD*)(a2 + 656),
       result = (unsigned int*)nn_os_ReleaseReadLock(a2 + 696),
       (v4 & 8) != 0) &&
      (result = (unsigned int*)ElfFile_631220(
           (__int64*)(a2 + 800), "world::data::s_version")) != nullptr &&
      (v5 = *result, v6 = result, v2[2] = *result, v5 > 2)) {
    v7 = ElfFile_631220((__int64*)(a2 + 800), "world::data::s_data");
    v8 = (unsigned int*)ElfFile_631220((__int64*)(a2 + 800),
                                       "world::data::s_dataNum");
    if (v7 != 0 && v8 != nullptr) {
      v9 = *v8;
      *((_QWORD*)v2 + 2) = v7;
      *((_QWORD*)v2 + 3) = v9;
    }
    v10 = ElfFile_631220((__int64*)(a2 + 800), "world::data::s_groups");
    v11 = (unsigned int*)ElfFile_631220((__int64*)(a2 + 800),
                                        "world::data::s_groupNum");
    if (v10 != 0 && v11 != nullptr) {
      v12 = *v11;
      *((_QWORD*)v2 + 4) = v10;
      *((_QWORD*)v2 + 5) = v12;
    }
    v13 = ElfFile_631220((__int64*)(a2 + 800), "world::data::s_situations");
    v14 = (unsigned int*)ElfFile_631220((__int64*)(a2 + 800),
                                        "world::data::s_situationCount");
    if (v13 != 0 && v14 != nullptr) {
      v15 = *v14;
      *((_QWORD*)v2 + 6) = v13;
      *((_QWORD*)v2 + 7) = v15;
    }
    v16 = ElfFile_631220((__int64*)(a2 + 800), "world::data::s_grassFiles");
    v17 = (unsigned int*)ElfFile_631220((__int64*)(a2 + 800),
                                        "world::data::s_grassFileNum");
    if (v16 != 0 && v17 != nullptr) {
      v18 = *v17;
      *((_QWORD*)v2 + 10) = v16;
      *((_QWORD*)v2 + 11) = v18;
    }
    v19 = ElfFile_631220((__int64*)(a2 + 800), "world::data::s_crowdFile");
    result = (unsigned int*)ElfFile_631220((__int64*)(a2 + 800),
                                           "world::data::s_crowdFileCount");
    if (v19 != 0 && result != nullptr) {
      v20 = *result;
      *((_QWORD*)v2 + 12) = v19;
      *((_QWORD*)v2 + 13) = v20;
    }
    if (*v6 >= 4u) {
      result = (unsigned int*)ElfFile_631220((__int64*)(a2 + 800),
                                             "world::data::s_mapInfo");
      *((_QWORD*)v2 + 16) = result;
      if (result != nullptr && *v6 >= 7u) {
        v21 = (int)result[5];
        *((_QWORD*)v2 + 14) = *((_QWORD*)result + 3);
        *((_QWORD*)v2 + 15) = v21;
        v22 = (int)result[8];
        *((_QWORD*)v2 + 8) = *((_QWORD*)result + 5);
        *((_QWORD*)v2 + 9) = v22;
      }
    }
  }
  else {
    *(_QWORD*)v2 = 0;
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___memory_1989b20(__int64 a1, __int64 a2,
                                                    __int64 a3, _QWORD* a4)
{
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  const char* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  const char** v25;
  const char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  unsigned int* v32;
  __int64 v33;
  _BYTE* v34;
  __int64* v35;
  unsigned int v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  _QWORD* v46;
  __int64 v47;
  signed int v48;
  unsigned __int64 v49;
  __int64* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  _BOOL4 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  _DWORD* v62;
  __int64* v63;
  unsigned int* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned int* v68;
  unsigned int* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  _DWORD* v75;
  unsigned int* v76;
  __int64 v77;
  unsigned __int64 v78;
  _DWORD* v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  signed int v88;
  __int64* v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  _QWORD* v94;
  _QWORD* v95;
  unsigned __int64 v96;
  _DWORD* v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  signed int v103;
  __int64* v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  _QWORD* v109;
  _QWORD* v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  unsigned int v115;
  unsigned __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  _QWORD* v124;
  _QWORD* v125;
  unsigned __int64 v126;
  int v127;
  __int64 v128;
  _QWORD* v129;
  __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  char v137;
  unsigned int v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  unsigned int v144;
  __int64 v145;
  __int64 v146;
  signed int v147;
  __int64* v148;
  _QWORD* v149;
  __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  _QWORD* v153;
  _QWORD* v154;
  unsigned __int64 v155;
  __int64 v156;
  unsigned int v157;
  __int64 v158;
  unsigned int v159;
  unsigned __int64 v160;
  _DWORD* v161;
  __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  unsigned int* v185;
  unsigned int* v186;
  unsigned int* v187;
  unsigned int v188;
  __int64 v189;
  __int64 v190;
  unsigned int* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned int* v196;
  unsigned int v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  char* v201;
  __int64 v202;
  unsigned __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  unsigned __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 i;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  char* v217;
  unsigned __int64 v218;
  int v219;
  __int64* v220;
  __int64 v221;
  _QWORD* v222;
  const char** v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  int v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  unsigned int* v231;
  __int64 v232;
  unsigned int* v233;
  unsigned int* v234;
  _BOOL4 v235;
  __int64 v236;
  __int64 v237;
  unsigned __int64 v239;
  unsigned __int64 v240;
  __int64 v241[2];

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = a3;
  *(_QWORD*)(a1 + 16) = a4;
  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  v4 = (_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  v220 = (__int64*)(a1 + 32);
  *(_BYTE*)(a1 + 24) = *a4 != a4[1];
  v6 = *(_QWORD*)(a3 + 16);
  v5 = *(_QWORD*)(a3 + 24);
  LODWORD(v241[0]) = -1;
  if (v5 == 0) {
    return;
  }
  GameRoutine_6e5a40((__int64*)(a1 + 56), v5, v241);
  if (v5 >> 60 != 0) {
  LABEL_284:
    GameRoutine_a594e0();
  }
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v5, 16, 0);
  v8 = v7 + 16 * v5;
  v9 = 1;
  v10 = v7;
  v11 = 0;
  v12 = (_QWORD*)v7;
  v240 = v5;
  do {
    v17 = v6 + 48 * v11;
    if ((unsigned __int64)v12 < v8) {
      v13 = *(const char**)(v17 + 16);
      v14 = v10;
      *v12 = v13;
      v15 = strlen_alt1(v13);
      v10 = v14;
      v16 = v240;
      v12[1] = v15;
      v12 += 2;
    }
    else {
      v18 = (unsigned __int64)v12 - v10;
      v19 = ((__int64)v12 - v10) >> 4;
      v20 = v19 + 1;
      if ((unsigned __int64)(v19 + 1) >> 60 != 0) {
        goto LABEL_284;
      }
      v21 = v6;
      if ((__int64)(v8 - v10) >> 3 > v20) {
        v20 = (__int64)(v8 - v10) >> 3;
      }
      if (v8 - v10 >= 0x7FFFFFFFFFFFFFF0LL) {
        v22 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v22 = v20;
      }
      if (v22 != 0) {
        if (v22 >> 60 != 0) {
          goto LABEL_285;
        }
        v23 = v10;
        v24 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v22, 16, 0);
      }
      else {
        v23 = v10;
        v24 = 0;
      }
      v25 = (const char**)(v24 + v18);
      v8 = v24 + 16 * v22;
      v26 = *(const char**)(v17 + 16);
      *v25 = v26;
      v27 = (__int64)&v25[-2 * v19];
      v25[1] = (const char*)strlen_alt1(v26);
      v12 = v25 + 2;
      memcpy(v27, v23, v18);
      if (v23 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v23);
      }
      v16 = v240;
      v10 = v27;
      v6 = v21;
    }
    v11 = v9++;
  } while (v16 > v11);
  v29 = a1;
  v30 = 0;
  v31 = 0;
  v32 = nullptr;
  v233 = nullptr;
  while (2) {
    if ((*(_DWORD*)(*v4 + 4 * v30) & 0x80000000) == 0) {
      goto LABEL_24;
    }
    v33 = v6 + 48 * v30;
    v34 = *(_BYTE**)(v33 + 16);
    if (v34 == nullptr || *v34 == 0) {
      goto LABEL_24;
    }
    v35 = (__int64*)(v10 + 16 * v30);
    v36 = *(_DWORD*)(v33 + 28);
    v38 = *v35;
    v37 = v35[1];
    v39 = *(_QWORD*)(v29 + 8);
    v232 = v38;
    LODWORD(v38) = *(_DWORD*)(v39 + 8);
    v42 = v39 + 32;
    v40 = *(_QWORD*)(v39 + 32);
    v41 = *(_QWORD*)(v42 + 8);
    v239 = v37;
    if ((unsigned int)v38 <= 4) {
      v43 = -1;
    }
    else {
      v43 = *(_DWORD*)(v33 + 28);
    }
    v44 = v40 + 24LL * (unsigned int)v43;
    if (v41 == 0 || v43 < 0) {
      v44 = 0;
    }
    if (v44 != 0) {
      v223 = (const char**)v44;
      v46 = *(_QWORD**)(v29 + 40);
      v227 = *(_DWORD*)(v44 + 8);
      v221 = *(_QWORD*)(v29 + 32);
      v222 = v46;
      if ((unsigned __int64)v46 >= *(_QWORD*)(v29 + 48)) {
        v67 = v10;
        v47 = GameHr_198b6c0(v220);
        v37 = v239;
        v10 = v67;
      }
      else {
        v46[19] = 0;
        v46[20] = 0;
        v46[17] = 0;
        v46[18] = 0;
        v47 = (__int64)(v46 + 21);
        v46[15] = 0;
        v46[16] = 0;
        v46[13] = 0;
        v46[14] = 0;
        v46[11] = 0;
        v46[12] = 0;
        v46[9] = 0;
        v46[10] = 0;
        v46[7] = 0;
        v46[8] = 0;
        v46[5] = 0;
        v46[6] = 0;
        v46[3] = 0;
        v46[4] = 0;
        v46[1] = 0;
        v46[2] = 0;
        *v46 = 0;
      }
      v68 = v233;
      *(_QWORD*)(v29 + 40) = v47;
      v236 = v47;
      *(_DWORD*)(v47 - 160) = v227;
      if ((v227 & 0xF) != 0 && (v227 & 0xF) != 3 && *(_BYTE*)(v29 + 24) == 1) {
        v88 = *(_DWORD*)(v33 + 32);
        if ((v88 & 0x80000000) == 0) {
          v89 = *(__int64**)(v29 + 16);
          v92 = *v89;
          v91 = v89[1];
          v90 = v89 + 3;
          v93 = v91 - v92;
          v94 = (_QWORD*)(v92 + 24LL * (unsigned int)v88);
          v95 = v88 >= (int)(-1431655765 * (v93 >> 3)) ? v90 : v94;
          if (*v95 != v95[1]) {
            v97 = *(_DWORD**)(v47 - 80);
            v96 = *(_QWORD*)(v47 - 72);
            v231 = v32;
            if ((unsigned __int64)v97 < v96) {
              v16 = v240;
              *v97 = 0;
              v98 = (__int64)(v97 + 1);
            LABEL_267:
              *(_QWORD*)(v47 - 80) = v98;
              v228 = (__int64)v32;
              goto LABEL_159;
            }
            v200 = *(_QWORD*)(v47 - 88);
            v201 = (char*)v97 - v200;
            v202 = ((__int64)v97 - v200) >> 2;
            v203 = v202 + 1;
            if ((unsigned __int64)(v202 + 1) >> 62 == 0) {
              v204 = v96 - v200;
              v226 = v10;
              if (v204 >> 1 > v203) {
                v203 = v204 >> 1;
              }
              if ((unsigned __int64)v204 >= 0x7FFFFFFFFFFFFFFCLL) {
                v205 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v205 = v203;
              }
              if (v205 == 0) {
                v206 = 0;
                goto LABEL_262;
              }
              if (v205 >> 62 == 0) {
                v206 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v205, 16, 0);
                v202 = ((__int64)v97 - v200) >> 2;
              LABEL_262:
                v207 = v206 + 4 * v205;
                v208 = (unsigned __int64)v97 - v200;
                v209 = (__int64)&v201[v206 + -4 * v202];
                *(_DWORD*)&v201[v206] = 0;
                v98 = (__int64)&v201[v206 + 4];
                memcpy(v209, v200, v208);
                v47 = v236;
                *(_QWORD*)(v236 - 88) = v209;
                *(_QWORD*)(v236 - 80) = v98;
                *(_QWORD*)(v236 - 72) = v207;
                if (v200 != 0) {
                  v210 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v210 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v210, v200);
                  v47 = v236;
                }
                v10 = v226;
                v37 = v239;
                v16 = v240;
                v32 = v231;
                v68 = v233;
                goto LABEL_267;
              }
            LABEL_285:
              GameRoutine_60a210();
            }
          LABEL_286:
            GameRoutine_66df80();
          }
        }
      }
      if (v32 >= v233) {
        v71 = ((char*)v233 - (char*)v32) >> 1;
        if (v71 <= 1) {
          v71 = 1;
        }
        if ((unsigned __int64)((char*)v233 - (char*)v32) >=
            0x7FFFFFFFFFFFFFFCLL) {
          v72 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v72 = v71;
        }
        if (v72 >> 62 != 0) {
          goto LABEL_285;
        }
        v73 = v10;
        v74 = fw_memory_g_heap_manager_ptr;
        v75 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v72, 16, 0);
        v68 = &v75[v72];
        *v75 = v31;
        v76 = v75 + 1;
        v228 = (__int64)v75;
        if (v32 != nullptr) {
          v77 = 128;
          if (*(_QWORD*)(*(_QWORD*)v74 + 200LL) == 0) {
            v77 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v74 + v77, (__int64)v32);
        }
        v37 = v239;
        v47 = v236;
        v70 = v76;
        v10 = v73;
      }
      else {
        v228 = (__int64)v32;
        *v32 = v31;
        v70 = v32 + 1;
      }
      v79 = *(_DWORD**)(v47 - 80);
      v78 = *(_QWORD*)(v47 - 72);
      v231 = v70;
      if ((unsigned __int64)v79 >= v78) {
        v81 = *(_QWORD*)(v47 - 88);
        v234 = v68;
        v82 = (char*)v79 - v81;
        v83 = ((__int64)v79 - v81) >> 2;
        v84 = v83 + 1;
        if ((unsigned __int64)(v83 + 1) >> 62 != 0) {
          goto LABEL_286;
        }
        v85 = v78 - v81;
        v224 = v10;
        if (v85 >> 1 > v84) {
          v84 = v85 >> 1;
        }
        if ((unsigned __int64)v85 >= 0x7FFFFFFFFFFFFFFCLL) {
          v86 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v86 = v84;
        }
        if (v86 != 0) {
          if (v86 >> 62 != 0) {
            goto LABEL_285;
          }
          v87 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v86, 16, 0);
        }
        else {
          v87 = 0;
        }
        v132 = v87 + 4 * v86;
        v133 = (unsigned __int64)v79 - v81;
        v134 = (__int64)&v82[v87 + -4 * v83];
        *(_DWORD*)&v82[v87] = 1;
        v80 = (__int64)&v82[v87 + 4];
        memcpy(v134, v81, v133);
        v47 = v236;
        *(_QWORD*)(v236 - 88) = v134;
        *(_QWORD*)(v236 - 80) = v80;
        *(_QWORD*)(v236 - 72) = v132;
        if (v81 != 0) {
          v135 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v135 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v135, v81);
          v47 = v236;
        }
        v10 = v224;
        v37 = v239;
        v16 = v240;
        v68 = v234;
      }
      else {
        v16 = v240;
        *v79 = 1;
        v80 = (__int64)(v79 + 1);
      }
      *(_QWORD*)(v47 - 80) = v80;
    LABEL_159:
      v29 = a1;
      v136 = v31 + 1;
      if (v16 <= v136) {
        v186 = (unsigned int*)v228;
        v185 = v231;
        if ((unsigned __int64)v231 - v228 < 5) {
          v233 = v68;
          goto LABEL_230;
        }
        *(_DWORD*)(v47 - 120) = v31;
      LABEL_234:
        *(_QWORD*)(v47 - 168) = *v223;
        goto LABEL_245;
      }
      v233 = v68;
      v137 = 1;
      v219 = 1;
      while (1) {
        if ((*(_DWORD*)(*v4 + 4 * v136) & 0x80000000) != 0 &&
            (v139 = (__int64*)(v10 + 16 * v136), v37 == v139[1])) {
          v140 = v10;
          if (memcmp(v232, *v139, v37) == 0) {
            v141 = *(_QWORD*)(v29 + 8);
            v37 = v239;
            v47 = v236;
            v10 = v140;
            v142 = *(_QWORD*)(v141 + 56);
            if (v142 != 0) {
              v143 = 0;
              v144 = 1;
              while (1) {
                v145 = *(_QWORD*)(*(_QWORD*)(v141 + 48) + 24 * v143 + 16);
                if (*(unsigned __int8*)(v145 + v30) !=
                    *(unsigned __int8*)(v145 + v136)) {
                  break;
                }
                v143 = v144++;
                if (v142 <= v143) {
                  goto LABEL_171;
                }
              }
            LABEL_179:
              v138 = v36;
            LABEL_226:
              v16 = v240;
              goto LABEL_162;
            }
          LABEL_171:
            v146 = v6 + 48 * v136;
            if ((v227 & 0xF) != 0 && (v227 & 0xF) != 3 &&
                *(_BYTE*)(v29 + 24) == 1) {
              v147 = *(_DWORD*)(v146 + 32);
              if ((v147 & 0x80000000) == 0) {
                v148 = *(__int64**)(v29 + 16);
                v151 = *v148;
                v150 = v148[1];
                v149 = v148 + 3;
                v152 = v150 - v151;
                v153 = (_QWORD*)(v151 + 24LL * (unsigned int)v147);
                v154 = v147 >= (int)(-1431655765 * (v152 >> 3)) ? v149 : v153;
                if (*v154 != v154[1]) {
                  goto LABEL_179;
                }
              }
            }
            v138 = *(_DWORD*)(v146 + 28);
            if (v138 == v36) {
              if ((v137 & 1) == 0) {
                v137 = 0;
                v138 = v36;
                goto LABEL_226;
              }
              v155 = (unsigned __int64)v233;
              v156 = v228;
              v138 = v36;
            }
            else {
              if ((v138 & 0x80000000) != 0 ||
                  ((v157 = *(_DWORD*)(v141 + 8), v158 = *(_QWORD*)(v141 + 32),
                    v157 <= 4)
                       ? (v159 = -1)
                       : (v159 = v138),
                   *(_DWORD*)(v158 + 24LL * v159 + 8) != v227)) {
                v137 = 0;
                goto LABEL_226;
              }
              v161 = *(_DWORD**)(v236 - 80);
              v160 = *(_QWORD*)(v236 - 72);
              v155 = (unsigned __int64)v233;
              if ((unsigned __int64)v161 >= v160) {
                v163 = *(_QWORD*)(v236 - 88);
                v164 = (unsigned __int64)v161 - v163;
                v165 = ((__int64)v161 - v163) >> 2;
                v166 = v165 + 1;
                if ((unsigned __int64)(v165 + 1) >> 62 != 0) {
                  goto LABEL_286;
                }
                v167 = v160 - v163;
                if (v167 >> 1 > v166) {
                  v166 = v167 >> 1;
                }
                if ((unsigned __int64)v167 >= 0x7FFFFFFFFFFFFFFCLL) {
                  v168 = 0x3FFFFFFFFFFFFFFFLL;
                }
                else {
                  v168 = v166;
                }
                if (v168 != 0) {
                  v217 = (char*)v161 - v163;
                  if (v168 >> 62 != 0) {
                    goto LABEL_285;
                  }
                  v169 = *(_QWORD*)(v236 - 88);
                  v170 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v168, 16, 0);
                  v164 = (unsigned __int64)v217;
                  v163 = v169;
                }
                else {
                  v170 = 0;
                }
                v171 = v170 + 4 * v168;
                v172 = v163;
                v173 = v170 + v164 - 4 * v165;
                v218 = v171;
                *(_DWORD*)(v170 + v164) = 0;
                v162 = v170 + v164 + 4;
                memcpy(v173, v163, v164);
                v47 = v236;
                *(_QWORD*)(v236 - 88) = v173;
                *(_QWORD*)(v236 - 80) = v162;
                *(_QWORD*)(v236 - 72) = v218;
                if (v172 != 0) {
                  v174 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v174 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v174, v172);
                  v47 = v236;
                }
                v155 = (unsigned __int64)v233;
                v37 = v239;
                v10 = v140;
              }
              else {
                *v161 = 0;
                v162 = (__int64)(v161 + 1);
              }
              v156 = v228;
              *(_QWORD*)(v47 - 80) = v162;
              v29 = a1;
              ++v219;
            }
            if ((unsigned __int64)v231 >= v155) {
              v175 = (unsigned __int64)v231 - v156;
              v176 = v156;
              v177 = ((__int64)v231 - v156) >> 2;
              v178 = v177 + 1;
              if ((unsigned __int64)(v177 + 1) >> 62 != 0) {
                goto LABEL_286;
              }
              v179 = v155 - v156;
              v180 = (__int64)(v155 - v176) >> 1;
              if (v180 > v178) {
                v178 = v180;
              }
              if (v179 >= 0x7FFFFFFFFFFFFFFCLL) {
                v181 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v181 = v178;
              }
              if (v181 != 0) {
                if (v181 >> 62 != 0) {
                  goto LABEL_285;
                }
                v182 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v181, 16, 0);
              }
              else {
                v182 = 0;
              }
              v183 = v182 + v175 - 4 * v177;
              *(_DWORD*)(v182 + v175) = v136;
              v233 = (unsigned int*)(v182 + 4 * v181);
              v231 = (unsigned int*)(v182 + v175 + 4);
              memcpy(v183, v228, v175);
              if (v228 != 0) {
                v184 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v184 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v184, v228);
              }
              v228 = v183;
              v29 = a1;
              v37 = v239;
              v10 = v140;
              v47 = v236;
            }
            else {
              *v231++ = v136;
            }
            v137 = 1;
            ++*(_DWORD*)(*(_QWORD*)(v47 - 80) - 4LL);
            goto LABEL_226;
          }
          v10 = v140;
          v37 = v239;
          v16 = v240;
          v47 = v236;
          v138 = v36;
        }
        else {
          v138 = v36;
        }
      LABEL_162:
        v136 = (unsigned int)(v136 + 1);
        v36 = v138;
        if (v16 <= v136) {
          v186 = (unsigned int*)v228;
          v185 = v231;
          if ((unsigned __int64)v231 - v228 < 5) {
          LABEL_230:
            v32 = v186;
            *(_QWORD*)(v47 - 104) = *(_QWORD*)(v47 - 112);
            *(_QWORD*)(v47 - 80) = *(_QWORD*)(v47 - 88);
            goto LABEL_24;
          }
          *(_DWORD*)(v47 - 120) = v31;
          if (v219 <= 1) {
            v68 = v233;
            goto LABEL_234;
          }
          *(_QWORD*)(v47 - 168) = 0;
          v192 = v10;
          v193 = v47 - 144;
          GameRoutine_60a020(v47 - 144, *v223);
          v194 = v193;
          v16 = v240;
          GameRoutine_1a09ce0(v194, "_combine", 8u);
          v68 = v233;
          v47 = v236;
          v10 = v192;
          *(_BYTE*)(v236 - 64) = 1;
        LABEL_245:
          v195 = v10;
          if (v186 != v185) {
            v196 = v186;
            do {
              v197 = *v196++;
              *(_DWORD*)(*v4 + 4LL * v197) =
                  1022611261 * (((unsigned __int64)v222 - v221) >> 3);
            } while (v196 != v185);
          }
          v198 = *(_QWORD*)(v47 - 112);
          if (v198 != 0) {
            *(_QWORD*)(v47 - 104) = v198;
            v199 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v199 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v199, v198);
            v47 = v236;
          }
          *(_QWORD*)(v47 - 112) = v186;
          *(_QWORD*)(v47 - 104) = v185;
          *(_QWORD*)(v47 - 96) = v68;
          v32 = nullptr;
          v10 = v195;
          v233 = nullptr;
          goto LABEL_24;
        }
      }
    }
    if (*(_BYTE*)(v29 + 24) == 1) {
      v48 = *(_DWORD*)(v33 + 32);
      v49 = (unsigned __int64)v233;
      if ((v48 & 0x80000000) == 0) {
        v50 = *(__int64**)(v29 + 16);
        v53 = *v50;
        v52 = v50[1];
        v51 = v50 + 3;
        v54 = v52 - v53;
        v55 = (_QWORD*)(v53 + 24LL * (unsigned int)v48);
        if (v48 >= (int)(-1431655765 * (v54 >> 3))) {
          v56 = v51;
        }
        else {
          v56 = v55;
        }
        v57 = *v56 != v56[1];
        if (v32 >= v233) {
          goto LABEL_45;
        }
        goto LABEL_96;
      }
    }
    else {
      v49 = (unsigned __int64)v233;
    }
    v57 = false;
    if ((unsigned __int64)v32 >= v49) {
    LABEL_45:
      v235 = v57;
      v58 = (__int64)(v49 - (_QWORD)v32) >> 1;
      if (v58 <= 1) {
        v58 = 1;
      }
      if (v49 - (unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFFCLL) {
        v59 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v59 = v58;
      }
      if (v59 >> 62 != 0) {
        goto LABEL_285;
      }
      v60 = v10;
      v61 = fw_memory_g_heap_manager_ptr;
      v62 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v59, 16, 0);
      v233 = &v62[v59];
      v63 = (__int64*)v61;
      *v62 = v31;
      v64 = v62 + 1;
      if (v32 != nullptr) {
        v65 = *v63;
        v66 = 128;
        if (*(_QWORD*)(v65 + 200) == 0) {
          v66 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v65 + v66, (__int64)v32);
      }
      v230 = (__int64)v62;
      v29 = a1;
      v37 = v239;
      v10 = v60;
      v16 = v240;
      v57 = v235;
      goto LABEL_97;
    }
  LABEL_96:
    v230 = (__int64)v32;
    *v32 = v31;
    v64 = v32 + 1;
  LABEL_97:
    v99 = v31 + 1;
    while (v16 > v99) {
      if ((*(_DWORD*)(*v4 + 4 * v99) & 0x80000000) != 0) {
        v101 = v6 + 48 * v99;
        if ((*(_DWORD*)(v101 + 28) & 0x80000000) != 0) {
          v102 = (__int64*)(v10 + 16 * v99);
          if (v37 == v102[1]) {
            v100 = v10;
            if (memcmp(v232, *v102, v37) != 0) {
              v29 = a1;
              v10 = v100;
            LABEL_100:
              v37 = v239;
              v16 = v240;
              goto LABEL_101;
            }
            v37 = v239;
            v10 = v100;
            if (*(_DWORD*)(v33 + 24) == *(_DWORD*)(v101 + 24) &&
                *(_QWORD*)(v33 + 8) == *(_QWORD*)(v101 + 8)) {
              if (*(_BYTE*)(a1 + 24) != 1 ||
                  (v103 = *(_DWORD*)(v101 + 32)) < 0) {
                v29 = a1;
                if (v57) {
                  v16 = v240;
                  v99 = (unsigned int)(v99 + 1);
                }
                else {
                LABEL_120:
                  v111 = *(_QWORD*)(v29 + 8);
                  v112 = *(_QWORD*)(v111 + 56);
                  if (v112 != 0) {
                    v113 = *(_QWORD*)(v111 + 48);
                    v114 = 0;
                    v115 = 1;
                    while (
                        *(unsigned __int8*)(*(_QWORD*)(v113 + 24 * v114 + 16) +
                                            v30) ==
                        *(unsigned __int8*)(*(_QWORD*)(v113 + 24 * v114 + 16) +
                                            v99)) {
                      v114 = v115++;
                      if (v112 <= v114) {
                        goto LABEL_124;
                      }
                    }
                    v16 = v240;
                    v99 = (unsigned int)(v99 + 1);
                  }
                  else {
                  LABEL_124:
                    if (v64 >= v233) {
                      v237 = v6;
                      v116 = (unsigned __int64)v64 - v230;
                      v117 = ((__int64)v64 - v230) >> 2;
                      v118 = v117 + 1;
                      if ((unsigned __int64)(v117 + 1) >> 62 != 0) {
                        goto LABEL_286;
                      }
                      v119 = (__int64)v233 - v230;
                      if (((__int64)v233 - v230) >> 1 > v118) {
                        v118 = v119 >> 1;
                      }
                      if ((unsigned __int64)v119 >= 0x7FFFFFFFFFFFFFFCLL) {
                        v120 = 0x3FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v120 = v118;
                      }
                      if (v120 != 0) {
                        if (v120 >> 62 != 0) {
                          goto LABEL_285;
                        }
                        v121 = fw_memory_HeapManager_Allocate_alt1(
                            fw_memory_g_heap_manager, 4 * v120, 16, 0);
                        v117 = ((__int64)v64 - v230) >> 2;
                      }
                      else {
                        v121 = 0;
                      }
                      v233 = (unsigned int*)(v121 + 4 * v120);
                      *(_DWORD*)(v121 + v116) = v99;
                      v64 = (unsigned int*)(v121 + v116 + 4);
                      v229 = v121 + v116 - 4 * v117;
                      memcpy(v229, v230, v116);
                      if (v230 != 0) {
                        v122 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v122 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v122,
                            v230);
                      }
                      v6 = v237;
                      v29 = a1;
                      v10 = v100;
                      v230 = v229;
                      goto LABEL_100;
                    }
                    v16 = v240;
                    *v64++ = v99;
                    v99 = (unsigned int)(v99 + 1);
                  }
                }
              }
              else {
                v29 = a1;
                v104 = *(__int64**)(a1 + 16);
                v107 = *v104;
                v106 = v104[1];
                v105 = v104 + 3;
                v108 = v106 - v107;
                v109 = (_QWORD*)(v107 + 24LL * (unsigned int)v103);
                if (v103 >= (int)(-1431655765 * (v108 >> 3))) {
                  v110 = v105;
                }
                else {
                  v110 = v109;
                }
                if (((v57 ^ (*v110 != v110[1])) & 1) == 0) {
                  goto LABEL_120;
                }
                v16 = v240;
                v99 = (unsigned int)(v99 + 1);
              }
            }
            else {
              v29 = a1;
              v16 = v240;
              v99 = (unsigned int)(v99 + 1);
            }
          }
          else {
            v29 = a1;
            v99 = (unsigned int)(v99 + 1);
          }
        }
        else {
          v29 = a1;
          v99 = (unsigned int)(v99 + 1);
        }
      }
      else {
      LABEL_101:
        v99 = (unsigned int)(v99 + 1);
      }
    }
    if (v57 ||
        (v123 = v10, v124 = (_QWORD*)(*(_QWORD*)v29 + 496LL), v241[0] = v232,
         v241[1] = v37, v125 = GameRoutine_c1a2c0(v124, v241), v10 = v123,
         v125 == nullptr)) {
      v32 = (unsigned int*)v230;
      v127 = 3;
      if ((unsigned __int64)(((__int64)v64 - v230) >> 2) < 4) {
        goto LABEL_24;
      }
    }
    else {
      v32 = (unsigned int*)v230;
      v126 = 4;
      if (*(_DWORD*)(v125[4] + 40LL) != 0) {
        v126 = 2;
        v127 = 2;
      }
      else {
        v127 = 3;
      }
      if (v126 > ((__int64)v64 - v230) >> 2) {
        goto LABEL_24;
      }
    }
    v128 = v29;
    v129 = *(_QWORD**)(v29 + 40);
    v130 = *(_QWORD*)(v128 + 32);
    v225 = v10;
    if ((unsigned __int64)v129 >= *(_QWORD*)(v128 + 48)) {
      v131 = GameHr_198b6c0(v220);
    }
    else {
      v129[19] = 0;
      v129[20] = 0;
      v129[17] = 0;
      v129[18] = 0;
      v131 = (__int64)(v129 + 21);
      v129[15] = 0;
      v129[16] = 0;
      v129[13] = 0;
      v129[14] = 0;
      v129[11] = 0;
      v129[12] = 0;
      v129[9] = 0;
      v129[10] = 0;
      v129[7] = 0;
      v129[8] = 0;
      v129[5] = 0;
      v129[6] = 0;
      v129[3] = 0;
      v129[4] = 0;
      v129[1] = 0;
      v129[2] = 0;
      *v129 = 0;
    }
    *(_QWORD*)(a1 + 40) = v131;
    GameRoutine_60a020(v131 - 144, *(const char**)v33);
    GameRoutine_1a09ce0(v131 - 144, "_auto_inst", 0xAu);
    *(_QWORD*)(v131 - 168) = 0;
    *(_DWORD*)(v131 - 160) = v127;
    *(_DWORD*)(v131 - 120) = v31;
    if ((unsigned int*)v230 != v64) {
      v187 = (unsigned int*)v230;
      do {
        v188 = *v187++;
        *(_DWORD*)(*v4 + 4LL * v188) =
            1022611261 * (((unsigned __int64)v129 - v130) >> 3);
      } while (v187 != v64);
    }
    v189 = *(_QWORD*)(v131 - 112);
    v16 = v240;
    if (v189 != 0) {
      *(_QWORD*)(v131 - 104) = v189;
      v190 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v190 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v190, v189);
    }
    v29 = a1;
    v10 = v225;
    *(_QWORD*)(v131 - 112) = v230;
    *(_QWORD*)(v131 - 104) = v64;
    v191 = v233;
    v233 = nullptr;
    *(_QWORD*)(v131 - 96) = v191;
    v32 = nullptr;
  LABEL_24:
    v30 = ++v31;
    if (v16 > v31) {
      continue;
    }
    break;
  }
  v211 = *(_QWORD*)(v29 + 32);
  for (i = *(_QWORD*)(v29 + 40); v211 != i; v211 += 168) {
    if (*(_QWORD*)v211 == 0) {
      if ((*(_BYTE*)(v211 + 24) & 1) != 0) {
        v216 = *(_QWORD*)(v211 + 40);
      }
      else {
        v216 = v211 + 25;
      }
      *(_QWORD*)v211 = v216;
    }
  }
  if (v32 != nullptr) {
    v213 = v10;
    v214 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v214 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v214,
                                       (__int64)v32);
    v10 = v213;
  }
  if (v10 != 0) {
    v215 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v215 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v215, v10);
  }
}

#pragma GCC visibility pop
