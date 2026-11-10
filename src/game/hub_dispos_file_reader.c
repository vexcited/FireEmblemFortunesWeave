#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb88;
__int64 HubDisposFileReader_Destructor(_QWORD* a1);
__int64 HubDisposFileReader_c983c0(__int64 result);
__attribute__((swiftcall)) void GameRoutine_c98880(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a7b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c97f50(_QWORD, _QWORD);
__int64 GameRoutine_c9b1a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c9c440(_QWORD, _QWORD);
__int64 GameRoutine_ca7fe0(_QWORD, _QWORD, _QWORD);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 hub_LoadDisposition(_QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wmemchr(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN** GameData_212f0f0;
extern __int64 (*GameData_1fd3638[])();
extern __int64 (*GameData_1fd36a0[])();
extern __int64 (*GameData_1fd3708[])();
extern __int64 (*GameData_1fd3cd8[])();
extern __int64 (*GameData_1fd3d28[])();
extern __int64 (*game_HubDisposFileLoaderMap_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212c778[2];
extern unsigned __int8 GameData_1b81c1c[9];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn)) GameRoutine_943410(_QWORD);
void __attribute__((noreturn)) GameRoutine_c9c2c0(_QWORD);
void __attribute__((noreturn)) GameRoutine_c9c300(void);
void __attribute__((noreturn)) GameRoutine_c9c750(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_HubDisposFileReader_CalcGroupNames(__int64 a1, __int64 a2,
                                                __int64* a3, char a4);
bool game_HubDisposFileReader_CalcGroupNames_lambda0_Invoke(__int64 a1,
                                                            __int64 a2);
__int64 GameRoutine_c9c1d0(_QWORD);
__int64 GameRoutine_c9c650(void);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_c9c2e0();
__attribute__((swiftcall)) void HubDisposFileReader_c98880(PSEUDO_X8 x8_,
                                                           _QWORD* a1);
__attribute__((swiftcall)) void HubDisposFileReader_c9bf60(PSEUDO_X8 x8_,
                                                           __int64 result,
                                                           int a2, __int64** a3,
                                                           long double a5);

__int64 HubDisposFileReader_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  v2 = a1[21];
  *a1 = GameData_212eb88 + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[22] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[18];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[19] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  HubDisposFileReader_c983c0(a1 + 6);
  v9 = a1[3];
  if (v9 != 0) {
    v10 = a1[4];
    if (v9 == v10) {
      goto LABEL_20;
    }
    v11 = a1[4];
    do {
      v12 = *(_BYTE*)(v11 - 24);
      v11 -= 24;
      if ((v12 & 1) != 0 && *(_QWORD*)(v10 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
      }
      v10 = v11;
    } while (v11 != v9);
    v14 = a1[3];
    a1[4] = v9;
    if (v14 != 0) {
    LABEL_20:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
    }
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 HubDisposFileReader_c983c0(__int64 result)
{
  __int64 v1;
  __int64* v2;
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

  v1 = *(_QWORD*)(result + 72);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(result + 80);
    if (v1 == v4) {
      goto LABEL_30;
    }
    do {
      if ((*(_BYTE*)(v4 - 32) & 1) != 0 && *(_QWORD*)(v4 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      }
      if ((*(_BYTE*)(v4 - 88) & 1) != 0 && *(_QWORD*)(v4 - 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
      }
      if ((*(_BYTE*)(v4 - 112) & 1) != 0 && *(_QWORD*)(v4 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
      }
      if ((*(_BYTE*)(v4 - 136) & 1) != 0 && *(_QWORD*)(v4 - 120) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
      }
      v4 -= 144;
    } while (v4 != v1);
    v9 = v2[9];
    v2[10] = v1;
    if (v9 != 0) {
    LABEL_30:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
    }
  }
  v11 = v2[6];
  if (v11 != 0) {
    v12 = v2[7];
    if (v11 == v12) {
      goto LABEL_62;
    }
    do {
      if ((*(_BYTE*)(v12 - 32) & 1) != 0 && *(_QWORD*)(v12 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
      }
      if ((*(_BYTE*)(v12 - 88) & 1) != 0 && *(_QWORD*)(v12 - 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
      }
      if ((*(_BYTE*)(v12 - 112) & 1) != 0 && *(_QWORD*)(v12 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
      }
      if ((*(_BYTE*)(v12 - 136) & 1) != 0 && *(_QWORD*)(v12 - 120) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
      }
      v12 -= 144;
    } while (v12 != v11);
    v17 = v2[6];
    v2[7] = v11;
    if (v17 != 0) {
    LABEL_62:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18);
    }
  }
  v19 = v2[3];
  if (v19 != 0) {
    v20 = v2[4];
    if (v19 == v20) {
      goto LABEL_94;
    }
    do {
      if ((*(_BYTE*)(v20 - 32) & 1) != 0 && *(_QWORD*)(v20 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21);
      }
      if ((*(_BYTE*)(v20 - 88) & 1) != 0 && *(_QWORD*)(v20 - 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v22);
      }
      if ((*(_BYTE*)(v20 - 112) & 1) != 0 && *(_QWORD*)(v20 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
      }
      if ((*(_BYTE*)(v20 - 136) & 1) != 0 && *(_QWORD*)(v20 - 120) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
      }
      v20 -= 144;
    } while (v20 != v19);
    v25 = v2[3];
    v2[4] = v19;
    if (v25 != 0) {
    LABEL_94:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v26 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26);
    }
  }
  v27 = *v2;
  if (*v2 != 0) {
    v28 = v2[1];
    if (v27 == v28) {
      goto LABEL_126;
    }
    do {
      if ((*(_BYTE*)(v28 - 32) & 1) != 0 && *(_QWORD*)(v28 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v29);
      }
      if ((*(_BYTE*)(v28 - 88) & 1) != 0 && *(_QWORD*)(v28 - 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v30);
      }
      if ((*(_BYTE*)(v28 - 112) & 1) != 0 && *(_QWORD*)(v28 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v31);
      }
      if ((*(_BYTE*)(v28 - 136) & 1) != 0 && *(_QWORD*)(v28 - 120) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v32 = 128;
        }
        else {
          v32 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v32);
      }
      v28 -= 144;
    } while (v28 != v27);
    v33 = *v2;
    v2[1] = v27;
    if (v33 != 0) {
    LABEL_126:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v34 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v34);
    }
  }
  return result;
}

__attribute__((swiftcall)) void HubDisposFileReader_c98880(PSEUDO_X8 x8_,
                                                           _QWORD* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  result = a1[2];
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = a1[1];
      if (v5 != 0) {
        v25 = result;
        v6 = a1[22] - a1[21];
        if ((int)(v6 >> 2) < 1) {
          v9 = 0;
        }
        else {
          v7 = v5 + 8;
          v8 = nullptr;
          v9 = 0;
          v10 = ((v6 >> 2) & 0x7FFFFFFF) - 1;
          do {
            v12 = *(_QWORD*)(v7 + 8LL * *(int*)(a1[21] + 4 * v10));
            if (v12 != 0) {
              v13 = a2[2];
              if ((unsigned __int64)v8 < v13) {
                *(_QWORD*)v8 = v12;
                v8 += 8;
              }
              else {
                v14 = &v8[-v9];
                v15 = (__int64)&v8[-v9] >> 3;
                v16 = v15 + 1;
                if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
                  *a2 = v9;
                  GameRoutine_c9c2e0();
                }
                v17 = v13 - v9;
                if (v17 >> 2 > v16) {
                  v16 = v17 >> 2;
                }
                if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v18 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v18 = v16;
                }
                if (v18 != 0) {
                  if (v18 >> 61 != 0) {
                    *a2 = v9;
                    GameRoutine_60a210_alt1();
                  }
                  v19 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
                }
                else {
                  v19 = 0;
                }
                v20 = v19 + 8 * v18;
                v21 = &v8[-v9];
                v22 = (__int64)&v14[v19 + -8 * v15];
                *(_QWORD*)&v14[v19] = v12;
                v8 = &v14[v19 + 8];
                memcpy(v22, v9, v21);
                a2[1] = (__int64)v8;
                a2[2] = v20;
                if (v9 != 0) {
                  v23 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v23 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
                }
                v9 = v22;
              }
              a2[1] = (__int64)v8;
            }
            v11 = v10-- + 1;
          } while (v11 > 1);
        }
        result = v25;
        *a2 = v9;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        {
          std___1___shared_weak_count___release_weak(v24);
          return;
        }
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 game_HubDisposFileReader_CalcGroupNames(__int64 a1, __int64 a2,
                                                __int64* a3, char a4)
{
  _QWORD* v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  bool v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  int v41;
  int v42;
  bool v43;
  __int64 v44;
  unsigned __int64 v45;
  bool v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  unsigned __int64 v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  char* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int8* v75;
  unsigned __int8* v76;
  unsigned __int8* v77;
  unsigned __int64 v78;
  __int64 v79;
  _QWORD* v80;
  int v81;
  unsigned __int8* v82;
  __int64 v83;
  unsigned __int8* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int8* v88;
  unsigned __int8* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  char* v93;
  unsigned __int64 v94;
  unsigned __int8* v95;
  _QWORD* v96;
  int v97;
  int v98;
  char* v99;
  __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  char* v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 (**v159)();
  _QWORD* v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  char* v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  unsigned __int64 v173;
  unsigned __int64* v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  unsigned __int64* v194;
  char* v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  _QWORD* v225;
  __int64 v226;
  char v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  _QWORD* v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  unsigned __int64 v243;
  char* v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  unsigned __int64 v248;
  unsigned __int64* v249;
  unsigned __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  unsigned __int64 v275;
  char* v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  unsigned __int64 v280;
  unsigned __int64* v281;
  unsigned __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  unsigned __int64 v307;
  char* v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  unsigned __int64 v312;
  unsigned __int64* v313;
  unsigned __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  char* v333;
  unsigned __int64 v334;
  _QWORD* v335;
  char* v336;
  __int64 v337;
  unsigned __int64 v339;
  unsigned __int64 v340;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  _QWORD* v346;
  __int64 v347;
  char* v348;
  __int64 v349;
  unsigned __int64 v351;
  unsigned __int64 v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  __int64 v356;
  _QWORD* v357;
  __int64 v358;
  char* v359;
  __int64 v360;
  unsigned __int64 v362;
  unsigned __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  _QWORD* v368;
  __int64 v369;
  char* v370;
  __int64 v371;
  unsigned __int64 v373;
  unsigned __int64 v374;
  __int64 v375;
  __int64 v376;
  __int64 result;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  char v382;
  __int64 v383;
  __int64 v384;
  char* v385;
  __int64 v386;
  __int64* v387;
  char* v388;
  unsigned __int64 v389;
  __int64 v390;
  __int64* v391;
  __int64 v392;
  char* v393;
  char v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 (**v398)();
  __int64 (**v399)();
  __int64 v400;
  __int64 v401;
  __int64 (*v402)();
  _QWORD* v403;
  __int64 v404;
  _QWORD* v405;
  char* v406;
  __int64* v407;
  _QWORD v408[2];
  char* v409;
  __int64 v410;
  _QWORD* v411;
  char* v412;
  __int64* v413;
  __int64 (**v414)();
  __int64 (**v415)();
  __int64 (***v416)();
  _QWORD v417[2];
  __int64 v418;
  _QWORD* v419;
  __int64 v420;
  unsigned __int64 v421;
  char* v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int128 v429;
  __int64 v430;
  __int64 v431;
  char v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;

  v4 = (_QWORD*)(a1 + 144);
  if ((__int64*)(a1 + 144) != a3) {
    v9 = *a3;
    v8 = a3[1];
    v10 = *(_QWORD*)(a1 + 160);
    v11 = v8 - *a3;
    v12 = *(_QWORD*)(a1 + 144);
    if (v11 <= (unsigned __int64)(v10 - v12)) {
      v20 = *(_QWORD*)(a1 + 152);
      v21 = v20 - v12;
      if (v11 > (unsigned __int64)(v20 - v12)) {
        v22 = v9 + v21;
        if (v20 != v12) {
          memmove(*(_QWORD*)(a1 + 144), v9, v21);
          v20 = *(_QWORD*)(a1 + 152);
        }
        if (v8 != v22) {
          memmove(v20, v22, v8 - v22);
        }
        v23 = v20 + v8 - v22;
        goto LABEL_25;
      }
      if (v8 != v9) {
        memmove(*(_QWORD*)(a1 + 144), v9, v11);
      }
    }
    else {
      v13 = v11 >> 4;
      v14 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v12 != 0) {
        v15 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
        *(_QWORD*)(a1 + 152) = v12;
        v16 = 128;
        if (*(_QWORD*)(v15 + 200) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v15 + v16, v12);
        v10 = 0;
        v4[1] = 0;
        v4[2] = 0;
        *v4 = 0;
      }
      if (v13 >> 60 != 0) {
        goto LABEL_780;
      }
      v17 = v10 >> 3;
      if (v10 >> 3 <= v13) {
        v17 = v11 >> 4;
      }
      v18 = (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                          : v17;
      if (v18 >> 60 != 0) {
      LABEL_780:
        GameRoutine_c9c300();
      }
      v19 = fw_memory_HeapManager_Allocate(*v14, 16 * v18, 16, 0);
      v12 = v19;
      *(_QWORD*)(a1 + 144) = v19;
      *(_QWORD*)(a1 + 152) = v19;
      *(_QWORD*)(a1 + 160) = v19 + 16 * v18;
      if (v8 != v9) {
        memcpy(v19, v9, v11);
      }
    }
    v23 = v12 + v11;
  LABEL_25:
    *(_QWORD*)(a1 + 152) = v23;
  }
  *(_BYTE*)(a1 + 192) = a4 & 1;
  v24 = *GameData_212c778[0];
  v25 = strlen(a2);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_774;
  }
  v26 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v25 | 7) + 1;
    }
    v27 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v28, 16, 0);
    v421 = v26;
    v422 = v27;
    v420 = v28 | 1;
    goto LABEL_34;
  }
  LOBYTE(v420) = 2 * v25;
  v27 = (char*)&v420 + 1;
  if (v25 != 0) {
  LABEL_34:
    memcpy(v27, a2, v26);
  }
  v27[v26] = 0;
  v403 = (_QWORD*)a1;
  v29 = v24 + 16;
  v30 = *(_QWORD*)(v24 + 16);
  if (v30 == 0) {
    v52 = v24 + 16;
    if ((v420 & 1) == 0) {
      goto LABEL_89;
    }
    goto LABEL_85;
  }
  v31 = v24 + 16;
  v401 = a2;
  v32 = v24;
  if ((v420 & 1) != 0) {
    v33 = v422;
  }
  else {
    v33 = (char*)&v420 + 1;
  }
  if ((v420 & 1) != 0) {
    v34 = v421;
  }
  else {
    v34 = (unsigned __int64)(unsigned __int8)v420 >> 1;
  }
  do {
    v35 = *(unsigned __int8*)(v30 + 32);
    v36 = (v35 & 1) == 0;
    v37 = v35 >> 1;
    if (v36) {
      v38 = v37;
    }
    else {
      v38 = *(_QWORD*)(v30 + 40);
    }
    if (v36) {
      v39 = v30 + 33;
    }
    else {
      v39 = *(_QWORD*)(v30 + 48);
    }
    if (v34 >= v38) {
      v40 = v38;
    }
    else {
      v40 = v34;
    }
    v41 = memcmp(v39, v33, v40);
    if (v38 < v34) {
      v42 = -1;
    }
    else {
      v42 = 1;
    }
    if (v38 == v34) {
      v42 = 0;
    }
    if (v41 != 0) {
      v42 = v41;
    }
    v43 = v42 < 0;
    if (v42 >= 0) {
      v44 = 0;
    }
    else {
      v44 = 8;
    }
    if (!v43) {
      v31 = v30;
    }
    v30 = *(_QWORD*)(v30 + v44);
  } while (v30 != 0);
  if (v31 == v29) {
    v52 = v29;
  }
  else {
    v45 = *(unsigned __int8*)(v31 + 32);
    v46 = (v45 & 1) == 0;
    v47 = v45 >> 1;
    if (v46) {
      v48 = v47;
    }
    else {
      v48 = *(_QWORD*)(v31 + 40);
    }
    if (v46) {
      v49 = v31 + 33;
    }
    else {
      v49 = *(_QWORD*)(v31 + 48);
    }
    if (v48 >= v34) {
      v50 = v34;
    }
    else {
      v50 = v48;
    }
    v51 = memcmp(v33, v49, v50);
    if (v51 != 0) {
      if (v51 >= 0) {
        v52 = v31;
      }
      else {
        v52 = v29;
      }
    }
    else if (v34 >= v48) {
      v52 = v31;
    }
    else {
      v52 = v29;
    }
  }
  v24 = v32;
  a2 = v401;
  if ((v420 & 1) != 0) {
  LABEL_85:
    if (v422 != nullptr) {
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v422);
    }
  }
LABEL_89:
  if (v29 != v52) {
    goto LABEL_121;
  }
  v54 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v55 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       912, 16, 0);
  *(_QWORD*)(v55 + 8) = 0;
  *(_QWORD*)(v55 + 16) = 0;
  *(_QWORD*)(v55 + 32) = 0;
  *(_QWORD*)(v55 + 40) = 0;
  *(_QWORD*)(v55 + 48) = 0;
  *(_QWORD*)(v55 + 56) = 0;
  *(_QWORD*)(v55 + 64) = 0;
  *(_QWORD*)(v55 + 72) = 0;
  *(_QWORD*)(v55 + 80) = 0;
  *(_QWORD*)(v55 + 88) = 0;
  *(_QWORD*)(v55 + 96) = 0;
  *(_QWORD*)(v55 + 104) = 0;
  *(_QWORD*)v55 = GameData_1fd3cd8;
  *(_QWORD*)(v55 + 24) = game_HubDisposFileLoaderMap_vtable;
  *(_QWORD*)(v55 + 128) = 0;
  *(_QWORD*)(v55 + 136) = 0;
  *(_QWORD*)(v55 + 144) = 0;
  *(_QWORD*)(v55 + 152) = 0;
  *(_QWORD*)(v55 + 160) = 0;
  *(_QWORD*)(v55 + 168) = 0;
  *(_QWORD*)(v55 + 176) = 0;
  *(_QWORD*)(v55 + 184) = 0;
  *(_QWORD*)(v55 + 192) = 0;
  *(_QWORD*)(v55 + 200) = 0;
  *(_QWORD*)(v55 + 112) = 0;
  *(_QWORD*)(v55 + 120) = GameData_1fd3638;
  *(_QWORD*)(v55 + 376) = GameData_1fd36a0;
  *(_QWORD*)(v55 + 384) = 0;
  *(_QWORD*)(v55 + 208) = 0;
  *(_QWORD*)(v55 + 216) = 0;
  *(_QWORD*)(v55 + 224) = 0;
  *(_QWORD*)(v55 + 240) = 0;
  *(_QWORD*)(v55 + 248) = 0;
  *(_QWORD*)(v55 + 256) = 0;
  *(_QWORD*)(v55 + 264) = 0;
  *(_QWORD*)(v55 + 280) = 0;
  *(_QWORD*)(v55 + 288) = 0;
  *(_QWORD*)(v55 + 296) = 0;
  *(_QWORD*)(v55 + 304) = 0;
  *(_BYTE*)(v55 + 368) = 0;
  *(_DWORD*)(v55 + 232) = 1065353216;
  *(_DWORD*)(v55 + 272) = 1065353216;
  *(_DWORD*)(v55 + 312) = 1065353216;
  *(_QWORD*)(v55 + 320) = 0;
  *(_QWORD*)(v55 + 328) = 0;
  *(_QWORD*)(v55 + 336) = 0;
  *(_QWORD*)(v55 + 344) = 0;
  *(_QWORD*)(v55 + 352) = 0;
  *(_QWORD*)(v55 + 360) = 0;
  *(_QWORD*)(v55 + 392) = 0;
  *(_QWORD*)(v55 + 400) = 0;
  *(_QWORD*)(v55 + 472) = 0;
  *(_QWORD*)(v55 + 480) = 0;
  *(_QWORD*)(v55 + 456) = 0;
  *(_QWORD*)(v55 + 464) = 0;
  *(_QWORD*)(v55 + 440) = 0;
  *(_QWORD*)(v55 + 448) = 0;
  *(_QWORD*)(v55 + 424) = 0;
  *(_QWORD*)(v55 + 432) = 0;
  *(_QWORD*)(v55 + 408) = 0;
  *(_QWORD*)(v55 + 416) = 0;
  *(_DWORD*)(v55 + 488) = 1065353216;
  *(_QWORD*)(v55 + 520) = 0;
  *(_QWORD*)(v55 + 504) = 0;
  *(_QWORD*)(v55 + 512) = 0;
  *(_QWORD*)(v55 + 496) = 0;
  *(_DWORD*)(v55 + 528) = 1065353216;
  *(_QWORD*)(v55 + 560) = 0;
  *(_QWORD*)(v55 + 552) = 0;
  *(_QWORD*)(v55 + 544) = 0;
  *(_QWORD*)(v55 + 536) = 0;
  *(_DWORD*)(v55 + 568) = 1065353216;
  *(_BYTE*)(v55 + 624) = 0;
  *(_QWORD*)(v55 + 616) = 0;
  *(_QWORD*)(v55 + 608) = 0;
  *(_QWORD*)(v55 + 600) = 0;
  *(_QWORD*)(v55 + 592) = 0;
  *(_QWORD*)(v55 + 584) = 0;
  *(_QWORD*)(v55 + 576) = 0;
  *(_QWORD*)(v55 + 656) = 0;
  *(_QWORD*)(v55 + 648) = 0;
  *(_QWORD*)(v55 + 640) = 0;
  *(_QWORD*)(v55 + 632) = GameData_1fd3708;
  *(_QWORD*)(v55 + 736) = 0;
  *(_QWORD*)(v55 + 728) = 0;
  *(_QWORD*)(v55 + 720) = 0;
  *(_QWORD*)(v55 + 712) = 0;
  *(_QWORD*)(v55 + 704) = 0;
  *(_QWORD*)(v55 + 696) = 0;
  *(_QWORD*)(v55 + 688) = 0;
  *(_QWORD*)(v55 + 680) = 0;
  *(_QWORD*)(v55 + 672) = 0;
  *(_QWORD*)(v55 + 664) = 0;
  *(_DWORD*)(v55 + 744) = 1065353216;
  *(_QWORD*)(v55 + 776) = 0;
  *(_QWORD*)(v55 + 768) = 0;
  *(_QWORD*)(v55 + 760) = 0;
  *(_QWORD*)(v55 + 752) = 0;
  *(_DWORD*)(v55 + 784) = 1065353216;
  *(_QWORD*)(v55 + 816) = 0;
  *(_QWORD*)(v55 + 808) = 0;
  *(_QWORD*)(v55 + 800) = 0;
  *(_QWORD*)(v55 + 792) = 0;
  *(_DWORD*)(v55 + 824) = 1065353216;
  *(_BYTE*)(v55 + 880) = 0;
  *(_QWORD*)(v55 + 872) = 0;
  *(_QWORD*)(v55 + 864) = 0;
  *(_QWORD*)(v55 + 856) = 0;
  *(_QWORD*)(v55 + 848) = 0;
  *(_QWORD*)(v55 + 840) = 0;
  *(_QWORD*)(v55 + 832) = 0;
  *(_QWORD*)(v55 + 904) = 0;
  *(_QWORD*)(v55 + 896) = 0;
  *(_QWORD*)(v55 + 888) = 0;
  v25 = strlen(a2);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_774;
  }
  v56 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v58 = 26;
    }
    else {
      v58 = (v25 | 7) + 1;
    }
    v57 = (char*)fw_memory_HeapManager_Allocate(*v54, v58, 16, 0);
    v421 = v56;
    v422 = v57;
    v420 = v58 | 1;
  }
  else {
    LOBYTE(v420) = 2 * v25;
    v57 = (char*)&v420 + 1;
    if (v25 == 0) {
      goto LABEL_99;
    }
  }
  memcpy(v57, a2, v56);
LABEL_99:
  v57[v56] = 0;
  v417[0] = &v420;
  v59 = GameRoutine_ca7fe0(v24 + 8, &v420, v417);
  v60 = *(_QWORD*)(v59 + 64);
  *(_QWORD*)(v59 + 56) = v55 + 24;
  *(_QWORD*)(v59 + 64) = v55;
  if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
    std___1___shared_weak_count___release_weak(v60);
  }
  if ((v420 & 1) != 0 && v422 != nullptr) {
    v61 = 128;
    if (*(_QWORD*)(*v54 + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v54 + v61, v422);
  }
  v25 = strlen(a2);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_774:
    String_60a1d0(v25);
  }
  v62 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v64 = 26;
    }
    else {
      v64 = (v25 | 7) + 1;
    }
    v63 = (char*)fw_memory_HeapManager_Allocate(*v54, v64, 16, 0);
    v421 = v62;
    v422 = v63;
    v420 = v64 | 1;
  }
  else {
    LOBYTE(v420) = 2 * v25;
    v63 = (char*)&v420 + 1;
    if (v25 == 0) {
      goto LABEL_116;
    }
  }
  memcpy(v63, a2, v62);
LABEL_116:
  v63[v62] = 0;
  v417[0] = &v420;
  v65 = GameRoutine_ca7fe0(v24 + 8, &v420, v417);
  hub_LoadDisposition(*(_QWORD*)(v65 + 56), a2);
  if ((v420 & 1) != 0 && v422 != nullptr) {
    v66 = 128;
    if (*(_QWORD*)(*v54 + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v54 + v66, v422);
  }
LABEL_121:
  v25 = strlen(a2);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_774;
  }
  v67 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v69 = 26;
    }
    else {
      v69 = (v25 | 7) + 1;
    }
    v68 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v69, 16, 0);
    v421 = v67;
    v422 = v68;
    v420 = v69 | 1;
    goto LABEL_129;
  }
  LOBYTE(v420) = 2 * v25;
  v68 = (char*)&v420 + 1;
  if (v25 != 0) {
  LABEL_129:
    memcpy(v68, a2, v67);
  }
  v68[v67] = 0;
  v417[0] = &v420;
  v70 = GameRoutine_ca7fe0(v24 + 8, &v420, v417);
  v72 = *(_QWORD*)(v70 + 56);
  v71 = *(_QWORD*)(v70 + 64);
  if (v71 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 16), 1u,
                              memory_order_relaxed);
  }
  if ((v420 & 1) != 0 && v422 != nullptr) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v422);
  }
  v74 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v72;
  *(_QWORD*)(a1 + 16) = v71;
  if (v74 != 0) {
    v74 = std___1___shared_weak_count___release_weak(v74);
  }
  v75 = *(unsigned __int8**)(a1 + 144);
  v76 = *(unsigned __int8**)(a1 + 152);
  if (v75 == v76) {
    v77 = nullptr;
    v79 = 0;
  }
  else {
    v77 = nullptr;
    v78 = 0;
    v79 = 0;
    v80 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      if ((unsigned __int8*)v79 == v77) {
        goto LABEL_151;
      }
      v81 = *v75;
      v82 = (unsigned __int8*)v79;
      v83 = (unsigned __int64)&v77[-v79] & 3;
      if (v83 != 0) {
        v82 = (unsigned __int8*)v79;
        while (*v82 != v81) {
          ++v82;
          if (--v83 == 0) {
            goto LABEL_148;
          }
        }
      }
      else {
      LABEL_148:
        if ((unsigned __int64)&v77[-v79] >= 4) {
          v82 += 3;
          while (1) {
            if (*(v82 - 3) == v81) {
              v82 -= 3;
              goto LABEL_150;
            }
            if (*(v82 - 2) == v81) {
              v82 -= 2;
              goto LABEL_150;
            }
            if (*(v82 - 1) == v81) {
              break;
            }
            if (*v82 == v81) {
              goto LABEL_150;
            }
            v88 = v82 + 1;
            v82 += 4;
            if (v88 == v77) {
              goto LABEL_149;
            }
          }
          --v82;
        }
        else {
        LABEL_149:
          v82 = v77;
        }
      }
    LABEL_150:
      if (v82 == v77) {
      LABEL_151:
        if ((unsigned __int64)v77 < v78) {
          *v77++ = *v75;
        }
        else {
          v84 = &v77[-v79];
          v85 = (__int64)&v77[-v79 + 1];
          if (v85 < 0) {
            GameRoutine_943410(v74);
          }
          if (2 * (v78 - v79) > v85) {
            v85 = 2 * (v78 - v79);
          }
          if (v78 - v79 >= 0x3FFFFFFFFFFFFFFFLL) {
            v86 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else {
            v86 = v85;
          }
          if (v86 != 0) {
            v87 = fw_memory_HeapManager_Allocate(*v80, v86, 16, 0);
          }
          else {
            v87 = 0;
          }
          v78 = v87 + v86;
          v89 = &v77[-v79];
          v84[v87] = *v75;
          v77 = &v84[v87 + 1];
          v74 = memcpy(v87, v79, v89);
          if (v79 != 0) {
            v90 = 128;
            if (*(_QWORD*)(*v80 + 200LL) == 0) {
              v90 = 56;
            }
            v74 = nn_mem_StandardAllocator_Free_alt1(*v80 + v90, v79);
          }
          v79 = v87;
        }
      }
      v75 += 16;
    } while (v75 != v76);
  }
  v421 = 0;
  v422 = nullptr;
  v420 = 0;
  LODWORD(v417[0]) = 1;
  GameRoutine_c97f50(&v420, v417);
  LODWORD(v417[0]) = 0;
  v91 = GameRoutine_c97f50(&v420, v417);
  if ((unsigned __int8*)v79 != v77) {
    v92 = v420;
    v93 = (char*)v421;
    v94 = (unsigned __int64)v422;
    v95 = (unsigned __int8*)v79;
    v96 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v97 = *v95;
      if ((unsigned int)(v97 - 1) <= 8) {
        v98 = v97 + 1;
        if ((unsigned __int64)v93 < v94) {
          *(_DWORD*)v93 = v98;
          v93 += 4;
        }
        else {
          v99 = &v93[-v92];
          v100 = (__int64)&v93[-v92] >> 2;
          v101 = v100 + 1;
          if ((unsigned __int64)(v100 + 1) >> 62 != 0) {
            GameRoutine_c9c2c0(v91);
          }
          if ((__int64)(v94 - v92) >> 1 > v101) {
            v101 = (__int64)(v94 - v92) >> 1;
          }
          if (v94 - v92 >= 0x7FFFFFFFFFFFFFFCLL) {
            v102 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v102 = v101;
          }
          if (v102 != 0) {
            if (v102 >> 62 != 0) {
            LABEL_776:
              GameRoutine_60a210(v91);
            }
            v103 = fw_memory_HeapManager_Allocate(*v96, 4 * v102, 16, 0);
          }
          else {
            v103 = 0;
          }
          v94 = v103 + 4 * v102;
          v104 = &v93[-v92];
          v105 = (__int64)&v99[v103 + -4 * v100];
          *(_DWORD*)&v99[v103] = v98;
          v93 = &v99[v103 + 4];
          v91 = memcpy(v105, v92, v104);
          if (v92 != 0) {
            v106 = 128;
            if (*(_QWORD*)(*v96 + 200LL) == 0) {
              v106 = 56;
            }
            v91 = nn_mem_StandardAllocator_Free_alt1(*v96 + v106, v92);
          }
          v92 = v105;
        }
      }
      ++v95;
    } while (v95 != v77);
    v421 = (unsigned __int64)v93;
    v422 = (char*)v94;
    v420 = v92;
  }
  v107 = v403;
  v108 = v403[21];
  if (v108 != 0) {
    v403[22] = v108;
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, v108);
  }
  v110 = v421;
  v403[21] = v420;
  v403[22] = v110;
  v403[23] = v422;
  if (v79 != 0) {
    v111 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v111 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v111, v79);
  }
  v113 = v403[6];
  v112 = v403[7];
  if (v113 != v112) {
    v114 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v112 - 32) & 1) != 0) {
        v115 = *(_QWORD*)(v112 - 16);
        if (v115 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
            v116 = 128;
          }
          else {
            v116 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v114 + v116, v115);
        }
      }
      if ((*(_BYTE*)(v112 - 88) & 1) != 0) {
        v117 = *(_QWORD*)(v112 - 72);
        if (v117 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
            v118 = 128;
          }
          else {
            v118 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v114 + v118, v117);
        }
      }
      if ((*(_BYTE*)(v112 - 112) & 1) != 0) {
        v119 = *(_QWORD*)(v112 - 96);
        if (v119 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
            v120 = 128;
          }
          else {
            v120 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v114 + v120, v119);
        }
      }
      if ((*(_BYTE*)(v112 - 136) & 1) != 0) {
        v121 = *(_QWORD*)(v112 - 120);
        if (v121 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
            v122 = 128;
          }
          else {
            v122 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v114 + v122, v121);
        }
      }
      v112 -= 144;
    } while (v112 != v113);
  }
  v123 = v403[9];
  v403[7] = v113;
  v124 = v403[10];
  if (v123 != v124) {
    v125 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v124 - 32) & 1) != 0) {
        v126 = *(_QWORD*)(v124 - 16);
        if (v126 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v125 + 200LL) != 0) {
            v127 = 128;
          }
          else {
            v127 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v125 + v127, v126);
        }
      }
      if ((*(_BYTE*)(v124 - 88) & 1) != 0) {
        v128 = *(_QWORD*)(v124 - 72);
        if (v128 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v125 + 200LL) != 0) {
            v129 = 128;
          }
          else {
            v129 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v125 + v129, v128);
        }
      }
      if ((*(_BYTE*)(v124 - 112) & 1) != 0) {
        v130 = *(_QWORD*)(v124 - 96);
        if (v130 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v125 + 200LL) != 0) {
            v131 = 128;
          }
          else {
            v131 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v125 + v131, v130);
        }
      }
      if ((*(_BYTE*)(v124 - 136) & 1) != 0) {
        v132 = *(_QWORD*)(v124 - 120);
        if (v132 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v125 + 200LL) != 0) {
            v133 = 128;
          }
          else {
            v133 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v125 + v133, v132);
        }
      }
      v124 -= 144;
    } while (v124 != v123);
  }
  v134 = v403[12];
  v403[10] = v123;
  v135 = v403[13];
  if (v134 != v135) {
    v136 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v135 - 32) & 1) != 0) {
        v137 = *(_QWORD*)(v135 - 16);
        if (v137 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v136 + 200LL) != 0) {
            v138 = 128;
          }
          else {
            v138 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v136 + v138, v137);
        }
      }
      if ((*(_BYTE*)(v135 - 88) & 1) != 0) {
        v139 = *(_QWORD*)(v135 - 72);
        if (v139 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v136 + 200LL) != 0) {
            v140 = 128;
          }
          else {
            v140 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v136 + v140, v139);
        }
      }
      if ((*(_BYTE*)(v135 - 112) & 1) != 0) {
        v141 = *(_QWORD*)(v135 - 96);
        if (v141 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v136 + 200LL) != 0) {
            v142 = 128;
          }
          else {
            v142 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v136 + v142, v141);
        }
      }
      if ((*(_BYTE*)(v135 - 136) & 1) != 0) {
        v143 = *(_QWORD*)(v135 - 120);
        if (v143 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v136 + 200LL) != 0) {
            v144 = 128;
          }
          else {
            v144 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v136 + v144, v143);
        }
      }
      v135 -= 144;
    } while (v135 != v134);
  }
  v145 = v403[15];
  v403[13] = v134;
  v146 = v403[16];
  if (v145 != v146) {
    v147 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v146 - 32) & 1) != 0) {
        v148 = *(_QWORD*)(v146 - 16);
        if (v148 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v147 + 200LL) != 0) {
            v149 = 128;
          }
          else {
            v149 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v147 + v149, v148);
        }
      }
      if ((*(_BYTE*)(v146 - 88) & 1) != 0) {
        v150 = *(_QWORD*)(v146 - 72);
        if (v150 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v147 + 200LL) != 0) {
            v151 = 128;
          }
          else {
            v151 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v147 + v151, v150);
        }
      }
      if ((*(_BYTE*)(v146 - 112) & 1) != 0) {
        v152 = *(_QWORD*)(v146 - 96);
        if (v152 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v147 + 200LL) != 0) {
            v153 = 128;
          }
          else {
            v153 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v147 + v153, v152);
        }
      }
      if ((*(_BYTE*)(v146 - 136) & 1) != 0) {
        v154 = *(_QWORD*)(v146 - 120);
        if (v154 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v147 + 200LL) != 0) {
            v155 = 128;
          }
          else {
            v155 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v147 + v155, v154);
        }
      }
      v146 -= 144;
    } while (v146 != v145);
  }
  v156 = v403[2];
  v403[16] = v145;
  if (v156 != 0) {
    v157 = std___1___shared_weak_count_lock(v156);
    if (v157 != 0) {
      v397 = v157;
      if (v403[1] != 0) {
        v158 = v403;
        GameRoutine_c98880((void*)&v414, v403);
        v159 = v414;
        v398 = v415;
        if (v414 == v415) {
          goto LABEL_437;
        }
        v160 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        while (1) {
          v399 = v159;
          v402 = *v159;
          v161 = *((_QWORD*)*v159 + 7);
          if ((int)((unsigned __int64)(*((_QWORD*)*v159 + 8) - v161) >> 3) >=
              1) {
            break;
          }
        LABEL_320:
          v159 = v399 + 1;
          if (v399 + 1 == v398) {
            v159 = v414;
          LABEL_437:
            if (v159 != nullptr) {
              v232 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v232 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v232, v159);
            }
            v233 = 0;
            v234 = (_QWORD*)fw_memory_g_heap_manager_ptr;
            while (2) {
              v235 = std___1___shared_weak_count_lock(v403[2]);
              v236 = v403[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v235 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v237 = v235;
                (*(void (**)(__int64))(*(_QWORD*)v235 + 16LL))(v235);
                std___1___shared_weak_count___release_weak(v237);
              }
              if (v233 <
                  (int)((*(_QWORD*)(v236 + 160) - *(_QWORD*)(v236 + 152)) >>
                        3)) {
                v238 = std___1___shared_weak_count_lock(v403[2]);
                v239 = v403[1];
                if (atomic_fetch_add((atomic_ullong* volatile)(v238 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v240 = v238;
                  (*(void (**)(__int64))(*(_QWORD*)v238 + 16LL))(v238);
                  std___1___shared_weak_count___release_weak(v240);
                }
                v241 = *(_QWORD*)(*(_QWORD*)(v239 + 152) + 8 * v233);
                LOBYTE(v420) = 0;
                v242 = *(_QWORD*)(v241 + 8);
                LOBYTE(v430) = 0;
                BYTE4(v430) = 0;
                LOBYTE(v431) = 0;
                BYTE4(v431) = 0;
                v432 = 0;
                BYTE4(v436) = 0;
                v421 = 0;
                v422 = nullptr;
                v423 = 0;
                v424 = 0;
                v425 = 0;
                v426 = 0;
                v427 = 0;
                v428 = 0;
                *(_QWORD*)&v429 = 0;
                *(_QWORD*)((char*)&v429 + 5) = 0;
                v433 = 0;
                v434 = 0;
                v435 = 0;
                LOBYTE(v436) = 0;
                v25 = strlen(v242);
                if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_774;
                }
                v243 = v25;
                if (v25 >= 0x17) {
                  if ((v25 | 7) == 0x17) {
                    v245 = 26;
                  }
                  else {
                    v245 = (v25 | 7) + 1;
                  }
                  v244 =
                      (char*)fw_memory_HeapManager_Allocate(*v234, v245, 16, 0);
                  v411 = (_QWORD*)v243;
                  v412 = v244;
                  v410 = v245 | 1;
                }
                else {
                  v244 = (char*)&v410 + 1;
                  LOBYTE(v410) = 2 * v25;
                  if (v25 == 0) {
                  LABEL_457:
                    v244[v243] = 0;
                    v416 = &v414;
                    v414 = GameData_1fd3d28;
                    v415 = (__int64 (**)())v403;
                    GameRoutine_c9b1a0(&v420, &v410, &v414);
                    if (v416 == &v414) {
                      v246 = 4;
                    LABEL_461:
                      (*v416)[v246]();
                    }
                    else if (v416 != nullptr) {
                      v246 = 5;
                      goto LABEL_461;
                    }
                    if ((v410 & 1) != 0 && v412 != nullptr) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v247 = 128;
                      }
                      else {
                        v247 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v247, v412);
                    }
                    v248 = v403[10];
                    if (v248 >= v403[11]) {
                      v252 = GameRoutine_c9c440(v403 + 9, &v420);
                    }
                    else {
                      *(_BYTE*)v248 = v420;
                      v249 = (unsigned __int64*)(v248 + 8);
                      if ((v421 & 1) != 0) {
                        fw_text_String_CopyTerminated(v249, v423, v422);
                        if ((v424 & 1) == 0) {
                          goto LABEL_475;
                        }
                      LABEL_471:
                        fw_text_String_CopyTerminated(v248 + 32, v426, v425);
                        if ((v427 & 1) != 0) {
                          goto LABEL_472;
                        }
                      LABEL_476:
                        v255 = v427;
                        v256 = v429;
                        *(_QWORD*)(v248 + 64) = v428;
                        *(_QWORD*)(v248 + 72) = v256;
                        *(_QWORD*)(v248 + 56) = v255;
                      }
                      else {
                        v250 = v421;
                        v251 = v423;
                        *(_QWORD*)(v248 + 16) = v422;
                        *(_QWORD*)(v248 + 24) = v251;
                        *v249 = v250;
                        if ((v424 & 1) != 0) {
                          goto LABEL_471;
                        }
                      LABEL_475:
                        v253 = v424;
                        v254 = v426;
                        *(_QWORD*)(v248 + 40) = v425;
                        *(_QWORD*)(v248 + 48) = v254;
                        *(_QWORD*)(v248 + 32) = v253;
                        if ((v427 & 1) == 0) {
                          goto LABEL_476;
                        }
                      LABEL_472:
                        fw_text_String_CopyTerminated(v248 + 56, v429, v428);
                      }
                      v257 = *((_QWORD*)&v429 + 1);
                      v258 = v430;
                      v259 = v431;
                      *(_BYTE*)(v248 + 104) = v432;
                      *(_QWORD*)(v248 + 88) = v258;
                      *(_QWORD*)(v248 + 96) = v259;
                      *(_QWORD*)(v248 + 80) = v257;
                      if ((v433 & 1) != 0) {
                        fw_text_String_CopyTerminated(v248 + 112, v435, v434);
                      }
                      else {
                        v260 = v433;
                        v261 = v435;
                        *(_QWORD*)(v248 + 120) = v434;
                        *(_QWORD*)(v248 + 128) = v261;
                        *(_QWORD*)(v248 + 112) = v260;
                      }
                      v252 = v248 + 144;
                      *(_QWORD*)(v248 + 136) = v436;
                    }
                    v403[10] = v252;
                    if ((v433 & 1) != 0 && v435 != 0) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v262 = 128;
                      }
                      else {
                        v262 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v262, v435);
                    }
                    if ((v427 & 1) != 0 && (_QWORD)v429 != 0) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v263 = 128;
                      }
                      else {
                        v263 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v263, v429);
                    }
                    if ((v424 & 1) != 0 && v426 != 0) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v264 = 128;
                      }
                      else {
                        v264 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v264, v426);
                    }
                    if ((v421 & 1) != 0 && v423 != 0) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v265 = 128;
                      }
                      else {
                        v265 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v265, v423);
                    }
                    ++v233;
                    continue;
                  }
                }
                memmove(v244, v242, v243);
                goto LABEL_457;
              }
              break;
            }
            v266 = 0;
            while (2) {
              v267 = std___1___shared_weak_count_lock(v403[2]);
              v268 = v403[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v267 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v269 = v267;
                (*(void (**)(__int64))(*(_QWORD*)v267 + 16LL))(v267);
                std___1___shared_weak_count___release_weak(v269);
              }
              if (v266 <
                  (int)((*(_QWORD*)(v268 + 416) - *(_QWORD*)(v268 + 408)) >>
                        3)) {
                v270 = std___1___shared_weak_count_lock(v403[2]);
                v271 = v403[1];
                if (atomic_fetch_add((atomic_ullong* volatile)(v270 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v272 = v270;
                  (*(void (**)(__int64))(*(_QWORD*)v270 + 16LL))(v270);
                  std___1___shared_weak_count___release_weak(v272);
                }
                v273 = *(_QWORD*)(*(_QWORD*)(v271 + 408) + 8 * v266);
                LOBYTE(v420) = 0;
                v274 = *(_QWORD*)(v273 + 8);
                LOBYTE(v430) = 0;
                BYTE4(v430) = 0;
                LOBYTE(v431) = 0;
                BYTE4(v431) = 0;
                v432 = 0;
                BYTE4(v436) = 0;
                v421 = 0;
                v422 = nullptr;
                v423 = 0;
                v424 = 0;
                v425 = 0;
                v426 = 0;
                v427 = 0;
                v428 = 0;
                *(_QWORD*)&v429 = 0;
                *(_QWORD*)((char*)&v429 + 5) = 0;
                v433 = 0;
                v434 = 0;
                v435 = 0;
                LOBYTE(v436) = 0;
                v25 = strlen(v274);
                if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_774;
                }
                v275 = v25;
                if (v25 >= 0x17) {
                  if ((v25 | 7) == 0x17) {
                    v277 = 26;
                  }
                  else {
                    v277 = (v25 | 7) + 1;
                  }
                  v276 =
                      (char*)fw_memory_HeapManager_Allocate(*v234, v277, 16, 0);
                  v405 = (_QWORD*)v275;
                  v406 = v276;
                  v404 = v277 | 1;
                }
                else {
                  v276 = (char*)&v404 + 1;
                  LOBYTE(v404) = 2 * v25;
                  if (v25 == 0) {
                  LABEL_521:
                    v276[v275] = 0;
                    v413 = &v410;
                    v410 = (__int64)GameData_1fd3d28;
                    v411 = v403;
                    GameRoutine_c9b1a0(&v420, &v404, &v410);
                    if (v413 == &v410) {
                      v278 = 32;
                    LABEL_525:
                      (*(void (**)(void*))(*v413 + v278))(v413);
                    }
                    else if (v413 != nullptr) {
                      v278 = 40;
                      goto LABEL_525;
                    }
                    if ((v404 & 1) != 0 && v406 != nullptr) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v279 = 128;
                      }
                      else {
                        v279 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v279, v406);
                    }
                    v280 = v403[13];
                    if (v280 >= v403[14]) {
                      v284 = GameRoutine_c9c440(v403 + 12, &v420);
                    }
                    else {
                      *(_BYTE*)v280 = v420;
                      v281 = (unsigned __int64*)(v280 + 8);
                      if ((v421 & 1) != 0) {
                        fw_text_String_CopyTerminated(v281, v423, v422);
                        if ((v424 & 1) == 0) {
                          goto LABEL_539;
                        }
                      LABEL_535:
                        fw_text_String_CopyTerminated(v280 + 32, v426, v425);
                        if ((v427 & 1) != 0) {
                          goto LABEL_536;
                        }
                      LABEL_540:
                        v287 = v427;
                        v288 = v429;
                        *(_QWORD*)(v280 + 64) = v428;
                        *(_QWORD*)(v280 + 72) = v288;
                        *(_QWORD*)(v280 + 56) = v287;
                      }
                      else {
                        v282 = v421;
                        v283 = v423;
                        *(_QWORD*)(v280 + 16) = v422;
                        *(_QWORD*)(v280 + 24) = v283;
                        *v281 = v282;
                        if ((v424 & 1) != 0) {
                          goto LABEL_535;
                        }
                      LABEL_539:
                        v285 = v424;
                        v286 = v426;
                        *(_QWORD*)(v280 + 40) = v425;
                        *(_QWORD*)(v280 + 48) = v286;
                        *(_QWORD*)(v280 + 32) = v285;
                        if ((v427 & 1) == 0) {
                          goto LABEL_540;
                        }
                      LABEL_536:
                        fw_text_String_CopyTerminated(v280 + 56, v429, v428);
                      }
                      v289 = *((_QWORD*)&v429 + 1);
                      v290 = v430;
                      v291 = v431;
                      *(_BYTE*)(v280 + 104) = v432;
                      *(_QWORD*)(v280 + 88) = v290;
                      *(_QWORD*)(v280 + 96) = v291;
                      *(_QWORD*)(v280 + 80) = v289;
                      if ((v433 & 1) != 0) {
                        fw_text_String_CopyTerminated(v280 + 112, v435, v434);
                      }
                      else {
                        v292 = v433;
                        v293 = v435;
                        *(_QWORD*)(v280 + 120) = v434;
                        *(_QWORD*)(v280 + 128) = v293;
                        *(_QWORD*)(v280 + 112) = v292;
                      }
                      v284 = v280 + 144;
                      *(_QWORD*)(v280 + 136) = v436;
                    }
                    v403[13] = v284;
                    if ((v433 & 1) != 0 && v435 != 0) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v294 = 128;
                      }
                      else {
                        v294 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v294, v435);
                    }
                    if ((v427 & 1) != 0 && (_QWORD)v429 != 0) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v295 = 128;
                      }
                      else {
                        v295 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v295, v429);
                    }
                    if ((v424 & 1) != 0 && v426 != 0) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v296 = 128;
                      }
                      else {
                        v296 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v296, v426);
                    }
                    if ((v421 & 1) != 0 && v423 != 0) {
                      if (*(_QWORD*)(*v234 + 200LL) != 0) {
                        v297 = 128;
                      }
                      else {
                        v297 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v234 + v297, v423);
                    }
                    ++v266;
                    continue;
                  }
                }
                memmove(v276, v274, v275);
                goto LABEL_521;
              }
              break;
            }
            v298 = 0;
            while (2) {
              v299 = std___1___shared_weak_count_lock(v403[2]);
              v300 = v403[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v299 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v301 = v299;
                (*(void (**)(__int64))(*(_QWORD*)v299 + 16LL))(v299);
                std___1___shared_weak_count___release_weak(v301);
              }
              if (v298 >=
                  (int)((*(_QWORD*)(v300 + 672) - *(_QWORD*)(v300 + 664)) >>
                        3)) {
                goto LABEL_633;
              }
              v302 = std___1___shared_weak_count_lock(v403[2]);
              v303 = v403[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v302 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v304 = v302;
                (*(void (**)(__int64))(*(_QWORD*)v302 + 16LL))(v302);
                std___1___shared_weak_count___release_weak(v304);
              }
              v305 = *(_QWORD*)(*(_QWORD*)(v303 + 664) + 8 * v298);
              LOBYTE(v420) = 0;
              v306 = *(_QWORD*)(v305 + 8);
              LOBYTE(v430) = 0;
              BYTE4(v430) = 0;
              LOBYTE(v431) = 0;
              BYTE4(v431) = 0;
              v432 = 0;
              BYTE4(v436) = 0;
              v421 = 0;
              v422 = nullptr;
              v423 = 0;
              v424 = 0;
              v425 = 0;
              v426 = 0;
              v427 = 0;
              v428 = 0;
              *(_QWORD*)&v429 = 0;
              *(_QWORD*)((char*)&v429 + 5) = 0;
              v433 = 0;
              v434 = 0;
              v435 = 0;
              LOBYTE(v436) = 0;
              v25 = strlen(v306);
              if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_774;
              }
              v307 = v25;
              if (v25 >= 0x17) {
                if ((v25 | 7) == 0x17) {
                  v309 = 26;
                }
                else {
                  v309 = (v25 | 7) + 1;
                }
                v308 =
                    (char*)fw_memory_HeapManager_Allocate(*v234, v309, 16, 0);
                v408[1] = v307;
                v409 = v308;
                v408[0] = v309 | 1;
              }
              else {
                v308 = (char*)v408 + 1;
                LOBYTE(v408[0]) = 2 * v25;
                if (v25 == 0) {
                LABEL_585:
                  v308[v307] = 0;
                  v407 = &v404;
                  v404 = (__int64)GameData_1fd3d28;
                  v405 = v403;
                  GameRoutine_c9b1a0(&v420, v408, &v404);
                  if (v407 == &v404) {
                    v310 = 32;
                  LABEL_589:
                    (*(void (**)(void*))(*v407 + v310))(v407);
                  }
                  else if (v407 != nullptr) {
                    v310 = 40;
                    goto LABEL_589;
                  }
                  if ((v408[0] & 1) != 0 && v409 != nullptr) {
                    if (*(_QWORD*)(*v234 + 200LL) != 0) {
                      v311 = 128;
                    }
                    else {
                      v311 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v234 + v311, v409);
                  }
                  v312 = v403[16];
                  if (v312 >= v403[17]) {
                    v316 = GameRoutine_c9c440(v403 + 15, &v420);
                  }
                  else {
                    *(_BYTE*)v312 = v420;
                    v313 = (unsigned __int64*)(v312 + 8);
                    if ((v421 & 1) != 0) {
                      fw_text_String_CopyTerminated(v313, v423, v422);
                      if ((v424 & 1) == 0) {
                        goto LABEL_603;
                      }
                    LABEL_599:
                      fw_text_String_CopyTerminated(v312 + 32, v426, v425);
                      if ((v427 & 1) != 0) {
                        goto LABEL_600;
                      }
                    LABEL_604:
                      v319 = v427;
                      v320 = v429;
                      *(_QWORD*)(v312 + 64) = v428;
                      *(_QWORD*)(v312 + 72) = v320;
                      *(_QWORD*)(v312 + 56) = v319;
                    }
                    else {
                      v314 = v421;
                      v315 = v423;
                      *(_QWORD*)(v312 + 16) = v422;
                      *(_QWORD*)(v312 + 24) = v315;
                      *v313 = v314;
                      if ((v424 & 1) != 0) {
                        goto LABEL_599;
                      }
                    LABEL_603:
                      v317 = v424;
                      v318 = v426;
                      *(_QWORD*)(v312 + 40) = v425;
                      *(_QWORD*)(v312 + 48) = v318;
                      *(_QWORD*)(v312 + 32) = v317;
                      if ((v427 & 1) == 0) {
                        goto LABEL_604;
                      }
                    LABEL_600:
                      fw_text_String_CopyTerminated(v312 + 56, v429, v428);
                    }
                    v321 = *((_QWORD*)&v429 + 1);
                    v322 = v430;
                    v323 = v431;
                    *(_BYTE*)(v312 + 104) = v432;
                    *(_QWORD*)(v312 + 88) = v322;
                    *(_QWORD*)(v312 + 96) = v323;
                    *(_QWORD*)(v312 + 80) = v321;
                    if ((v433 & 1) != 0) {
                      fw_text_String_CopyTerminated(v312 + 112, v435, v434);
                    }
                    else {
                      v324 = v433;
                      v325 = v435;
                      *(_QWORD*)(v312 + 120) = v434;
                      *(_QWORD*)(v312 + 128) = v325;
                      *(_QWORD*)(v312 + 112) = v324;
                    }
                    v316 = v312 + 144;
                    *(_QWORD*)(v312 + 136) = v436;
                  }
                  v403[16] = v316;
                  if ((v433 & 1) != 0 && v435 != 0) {
                    if (*(_QWORD*)(*v234 + 200LL) != 0) {
                      v326 = 128;
                    }
                    else {
                      v326 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v234 + v326, v435);
                  }
                  if ((v427 & 1) != 0 && (_QWORD)v429 != 0) {
                    if (*(_QWORD*)(*v234 + 200LL) != 0) {
                      v327 = 128;
                    }
                    else {
                      v327 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v234 + v327, v429);
                  }
                  if ((v424 & 1) != 0 && v426 != 0) {
                    if (*(_QWORD*)(*v234 + 200LL) != 0) {
                      v328 = 128;
                    }
                    else {
                      v328 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v234 + v328, v426);
                  }
                  if ((v421 & 1) != 0 && v423 != 0) {
                    if (*(_QWORD*)(*v234 + 200LL) != 0) {
                      v329 = 128;
                    }
                    else {
                      v329 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v234 + v329, v423);
                  }
                  ++v298;
                  continue;
                }
              }
              break;
            }
            memmove(v308, v306, v307);
            goto LABEL_585;
          }
        }
        v162 = 0;
        while (1) {
          v163 = *(_QWORD*)(v161 + 8 * v162);
          LOBYTE(v420) = 0;
          v164 = *(_QWORD*)(v163 + 8);
          LOBYTE(v430) = 0;
          BYTE4(v430) = 0;
          LOBYTE(v431) = 0;
          BYTE4(v431) = 0;
          v432 = 0;
          BYTE4(v436) = 0;
          v421 = 0;
          v422 = nullptr;
          v423 = 0;
          v424 = 0;
          v425 = 0;
          v426 = 0;
          v427 = 0;
          v428 = 0;
          *(_QWORD*)&v429 = 0;
          *(_QWORD*)((char*)&v429 + 5) = 0;
          v433 = 0;
          v434 = 0;
          v435 = 0;
          LOBYTE(v436) = 0;
          v25 = strlen(v164);
          if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_774;
          }
          v165 = v25;
          if (v25 >= 0x17) {
            break;
          }
          v166 = (char*)&v410 + 1;
          LOBYTE(v410) = 2 * v25;
          if (v25 != 0) {
            goto LABEL_332;
          }
        LABEL_333:
          v166[v165] = 0;
          v417[0] = GameData_1fd3d28;
          v417[1] = v158;
          v419 = v417;
          GameRoutine_c9b1a0(&v420, &v410, v417);
          v91 = (__int64)v419;
          if (v419 == v417) {
            v170 = 32;
            goto LABEL_337;
          }
          if (v419 != nullptr) {
            v170 = 40;
          LABEL_337:
            v91 = (*(__int64 (**)(void*))(*v419 + v170))(v419);
          }
          if ((v410 & 1) != 0 && v412 != nullptr) {
            if (*(_QWORD*)(*v160 + 200LL) != 0) {
              v171 = 128;
            }
            else {
              v171 = 56;
            }
            v91 = nn_mem_StandardAllocator_Free_alt1(*v160 + v171, v412);
          }
          v173 = v158[7];
          v172 = v158[8];
          if (v173 >= v172) {
            v177 = v158[6];
            v178 = v173 - v177;
            v179 = 1 - 0x71C71C71C71C71C7LL * (v178 >> 4);
            if (v179 > 0x1C71C71C71C71C7LL) {
              GameRoutine_c9c750();
            }
            v180 = 0x8E38E38E38E38E39LL * ((__int64)(v172 - v177) >> 4);
            if (2 * v180 > v179) {
              v179 = 2 * v180;
            }
            if (v180 >= 0xE38E38E38E38E3LL) {
              v181 = 0x1C71C71C71C71C7LL;
            }
            else {
              v181 = v179;
            }
            if (v181 != 0) {
              if (v181 > 0x1C71C71C71C71C7LL) {
                goto LABEL_776;
              }
              v182 = fw_memory_HeapManager_Allocate(*v160, 144 * v181, 16, 0);
            }
            else {
              v182 = 0;
            }
            v193 = v182 + v178;
            *(_BYTE*)(v182 + v178) = v420;
            v194 = (unsigned __int64*)(v182 + v178 + 8);
            if ((v421 & 1) != 0) {
              fw_text_String_CopyTerminated(v194, v423, v422);
              if ((v424 & 1) == 0) {
                goto LABEL_371;
              }
            LABEL_368:
              fw_text_String_CopyTerminated(v193 + 32, v426, v425);
              if ((v427 & 1) != 0) {
                goto LABEL_369;
              }
            LABEL_372:
              v197 = v428;
              *(_QWORD*)(v193 + 56) = v427;
              *(_QWORD*)(v193 + 64) = v197;
              *(_QWORD*)(v193 + 72) = v429;
            }
            else {
              v195 = v422;
              *v194 = v421;
              *(_QWORD*)(v182 + v178 + 16) = v195;
              *(_QWORD*)(v182 + v178 + 24) = v423;
              if ((v424 & 1) != 0) {
                goto LABEL_368;
              }
            LABEL_371:
              v196 = v425;
              *(_QWORD*)(v193 + 32) = v424;
              *(_QWORD*)(v193 + 40) = v196;
              *(_QWORD*)(v193 + 48) = v426;
              if ((v427 & 1) == 0) {
                goto LABEL_372;
              }
            LABEL_369:
              fw_text_String_CopyTerminated(v193 + 56, v429, v428);
            }
            v198 = v430;
            v400 = v182;
            *(_QWORD*)(v193 + 80) = *((_QWORD*)&v429 + 1);
            *(_QWORD*)(v193 + 88) = v198;
            *(_QWORD*)(v193 + 96) = v431;
            *(_BYTE*)(v193 + 104) = v432;
            if ((v433 & 1) != 0) {
              fw_text_String_CopyTerminated(v193 + 112, v435, v434);
            }
            else {
              v199 = v434;
              *(_QWORD*)(v193 + 112) = v433;
              *(_QWORD*)(v193 + 120) = v199;
              *(_QWORD*)(v193 + 128) = v435;
            }
            *(_QWORD*)(v193 + 136) = v436;
            v201 = v403[6];
            v200 = v403[7];
            v202 = v193 + v201 - v200;
            if (v201 == v200) {
              v225 = v403;
            }
            else {
              v203 = v403[6];
              v204 = v193 + v201 - v200;
              do {
                *(_BYTE*)v204 = *(_BYTE*)v203;
                v205 = *(_QWORD*)(v203 + 8);
                v206 = *(_QWORD*)(v203 + 24);
                *(_QWORD*)(v204 + 16) = *(_QWORD*)(v203 + 16);
                *(_QWORD*)(v204 + 24) = v206;
                *(_QWORD*)(v204 + 8) = v205;
                *(_QWORD*)(v203 + 16) = 0;
                *(_QWORD*)(v203 + 24) = 0;
                *(_QWORD*)(v203 + 8) = 0;
                v207 = *(_QWORD*)(v203 + 32);
                v208 = *(_QWORD*)(v203 + 48);
                *(_QWORD*)(v204 + 40) = *(_QWORD*)(v203 + 40);
                *(_QWORD*)(v204 + 48) = v208;
                *(_QWORD*)(v204 + 32) = v207;
                *(_QWORD*)(v203 + 40) = 0;
                *(_QWORD*)(v203 + 48) = 0;
                *(_QWORD*)(v203 + 32) = 0;
                v209 = *(_QWORD*)(v203 + 56);
                v210 = *(_QWORD*)(v203 + 72);
                *(_QWORD*)(v204 + 64) = *(_QWORD*)(v203 + 64);
                *(_QWORD*)(v204 + 72) = v210;
                *(_QWORD*)(v204 + 56) = v209;
                *(_QWORD*)(v203 + 64) = 0;
                *(_QWORD*)(v203 + 72) = 0;
                *(_QWORD*)(v203 + 56) = 0;
                v211 = *(_QWORD*)(v203 + 96);
                v212 = *(_QWORD*)(v203 + 80);
                v213 = *(_QWORD*)(v203 + 88);
                *(_BYTE*)(v204 + 104) = *(_BYTE*)(v203 + 104);
                *(_QWORD*)(v204 + 88) = v213;
                *(_QWORD*)(v204 + 96) = v211;
                *(_QWORD*)(v204 + 80) = v212;
                v214 = *(_QWORD*)(v203 + 112);
                v215 = *(_QWORD*)(v203 + 128);
                *(_QWORD*)(v204 + 120) = *(_QWORD*)(v203 + 120);
                *(_QWORD*)(v204 + 128) = v215;
                *(_QWORD*)(v204 + 112) = v214;
                *(_QWORD*)(v203 + 120) = 0;
                *(_QWORD*)(v203 + 128) = 0;
                *(_QWORD*)(v203 + 112) = 0;
                v216 = *(_QWORD*)(v203 + 136);
                v203 += 144;
                *(_QWORD*)(v204 + 136) = v216;
                v204 += 144;
              } while (v203 != v200);
              do {
                if ((*(_BYTE*)(v201 + 112) & 1) != 0) {
                  v217 = *(_QWORD*)(v201 + 128);
                  if (v217 != 0) {
                    if (*(_QWORD*)(*v160 + 200LL) != 0) {
                      v218 = 128;
                    }
                    else {
                      v218 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v160 + v218, v217);
                  }
                }
                if ((*(_BYTE*)(v201 + 56) & 1) != 0) {
                  v219 = *(_QWORD*)(v201 + 72);
                  if (v219 != 0) {
                    if (*(_QWORD*)(*v160 + 200LL) != 0) {
                      v220 = 128;
                    }
                    else {
                      v220 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v160 + v220, v219);
                  }
                }
                if ((*(_BYTE*)(v201 + 32) & 1) != 0) {
                  v221 = *(_QWORD*)(v201 + 48);
                  if (v221 != 0) {
                    if (*(_QWORD*)(*v160 + 200LL) != 0) {
                      v222 = 128;
                    }
                    else {
                      v222 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v160 + v222, v221);
                  }
                }
                if ((*(_BYTE*)(v201 + 8) & 1) != 0) {
                  v223 = *(_QWORD*)(v201 + 24);
                  if (v223 != 0) {
                    if (*(_QWORD*)(*v160 + 200LL) != 0) {
                      v224 = 128;
                    }
                    else {
                      v224 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v160 + v224, v223);
                  }
                }
                v201 += 144;
              } while (v201 != v200);
              v225 = v403;
              v201 = v403[6];
            }
            v192 = v193 + 144;
            v158 = v225;
            v225[6] = v202;
            v225[7] = v192;
            v225[8] = v400 + 144 * v181;
            if (v201 != 0) {
              if (*(_QWORD*)(*v160 + 200LL) != 0) {
                v226 = 128;
              }
              else {
                v226 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v160 + v226, v201);
            }
            goto LABEL_412;
          }
          *(_BYTE*)v173 = v420;
          v174 = (unsigned __int64*)(v173 + 8);
          if ((v421 & 1) != 0) {
            fw_text_String_CopyTerminated(v174, v423, v422);
            if ((v424 & 1) != 0) {
            LABEL_347:
              fw_text_String_CopyTerminated(v173 + 32, v426, v425);
              if ((v427 & 1) == 0) {
                goto LABEL_360;
              }
              goto LABEL_348;
            }
          }
          else {
            v175 = v421;
            v176 = v423;
            *(_QWORD*)(v173 + 16) = v422;
            *(_QWORD*)(v173 + 24) = v176;
            *v174 = v175;
            if ((v424 & 1) != 0) {
              goto LABEL_347;
            }
          }
          v183 = v424;
          v184 = v426;
          *(_QWORD*)(v173 + 40) = v425;
          *(_QWORD*)(v173 + 48) = v184;
          *(_QWORD*)(v173 + 32) = v183;
          if ((v427 & 1) == 0) {
          LABEL_360:
            v185 = v427;
            v186 = v429;
            *(_QWORD*)(v173 + 64) = v428;
            *(_QWORD*)(v173 + 72) = v186;
            *(_QWORD*)(v173 + 56) = v185;
            goto LABEL_361;
          }
        LABEL_348:
          fw_text_String_CopyTerminated(v173 + 56, v429, v428);
        LABEL_361:
          v187 = *((_QWORD*)&v429 + 1);
          v188 = v430;
          v189 = v431;
          *(_BYTE*)(v173 + 104) = v432;
          *(_QWORD*)(v173 + 88) = v188;
          *(_QWORD*)(v173 + 96) = v189;
          *(_QWORD*)(v173 + 80) = v187;
          if ((v433 & 1) != 0) {
            fw_text_String_CopyTerminated(v173 + 112, v435, v434);
          }
          else {
            v190 = v433;
            v191 = v435;
            *(_QWORD*)(v173 + 120) = v434;
            *(_QWORD*)(v173 + 128) = v191;
            *(_QWORD*)(v173 + 112) = v190;
          }
          v192 = v173 + 144;
          *(_QWORD*)(v173 + 136) = v436;
        LABEL_412:
          v227 = v433;
          v158[7] = v192;
          if ((v227 & 1) != 0 && v435 != 0) {
            if (*(_QWORD*)(*v160 + 200LL) != 0) {
              v228 = 128;
            }
            else {
              v228 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v160 + v228, v435);
          }
          if ((v427 & 1) != 0 && (_QWORD)v429 != 0) {
            if (*(_QWORD*)(*v160 + 200LL) != 0) {
              v229 = 128;
            }
            else {
              v229 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v160 + v229, v429);
          }
          if ((v424 & 1) != 0 && v426 != 0) {
            if (*(_QWORD*)(*v160 + 200LL) != 0) {
              v230 = 128;
            }
            else {
              v230 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v160 + v230, v426);
          }
          if ((v421 & 1) != 0 && v423 != 0) {
            if (*(_QWORD*)(*v160 + 200LL) != 0) {
              v231 = 128;
            }
            else {
              v231 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v160 + v231, v423);
          }
          ++v162;
          v161 = *((_QWORD*)v402 + 7);
          if (v162 >=
              (int)((unsigned __int64)(*((_QWORD*)v402 + 8) - v161) >> 3)) {
            goto LABEL_320;
          }
        }
        if ((v25 | 7) == 0x17) {
          v167 = 26;
        }
        else {
          v167 = (v25 | 7) + 1;
        }
        v168 = fw_memory_HeapManager_Allocate(*v160, v167, 16, 0);
        v169 = v167 | 1;
        v158 = v403;
        v166 = (char*)v168;
        v411 = (_QWORD*)v165;
        v412 = (char*)v168;
        v410 = v169;
      LABEL_332:
        memmove(v166, v164, v165);
        goto LABEL_333;
      }
    LABEL_633:
      v107 = v403;
      if (atomic_fetch_add((atomic_ullong* volatile)(v397 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v397 + 16LL))(v397);
        std___1___shared_weak_count___release_weak(v397);
      }
    }
  }
  v330 = v107[6];
  v331 = v107[7];
  if (v330 != v331) {
    v332 = 0;
    v333 = nullptr;
    v334 = 0;
    v335 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v336 = &v333[-v332];
      v337 = (__int64)&v333[-v332] >> 2;
      v91 = wmemchr(v332, *(unsigned int*)(v330 + 80), v337);
      if (v91 == 0 || v91 == (_QWORD)v333) {
        if ((unsigned __int64)v333 < v334) {
          *(_DWORD*)v333 = *(_DWORD*)(v330 + 80);
          v333 += 4;
        }
        else {
          v339 = v337 + 1;
          if ((unsigned __int64)(v337 + 1) >> 62 != 0) {
          LABEL_777:
            GameRoutine_6e5a20();
          }
          if ((__int64)(v334 - v332) >> 1 > v339) {
            v339 = (__int64)(v334 - v332) >> 1;
          }
          if (v334 - v332 >= 0x7FFFFFFFFFFFFFFCLL) {
            v340 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v340 = v339;
          }
          if (v340 != 0) {
            if (v340 >> 62 != 0) {
              goto LABEL_776;
            }
            v341 = fw_memory_HeapManager_Allocate(*v335, 4 * v340, 16, 0);
          }
          else {
            v341 = 0;
          }
          v334 = v341 + 4 * v340;
          v342 = (__int64)&v336[v341 + -4 * v337];
          *(_DWORD*)&v336[v341] = *(_DWORD*)(v330 + 80);
          v333 = &v336[v341 + 4];
          memcpy(v342, v332, v336);
          if (v332 != 0) {
            v343 = 128;
            if (*(_QWORD*)(*v335 + 200LL) == 0) {
              v343 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v335 + v343, v332);
          }
          v332 = v342;
        }
      }
      v330 += 144;
      if (v330 == v331) {
        goto LABEL_661;
      }
    }
  }
  v334 = 0;
  v333 = nullptr;
  v332 = 0;
LABEL_661:
  v344 = v403[9];
  v345 = v403[10];
  if (v344 != v345) {
    v346 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v348 = &v333[-v332];
      v349 = (__int64)&v333[-v332] >> 2;
      v91 = wmemchr(v332, *(unsigned int*)(v344 + 80), v349);
      if (v91 != 0 && v91 != (_QWORD)v333) {
        goto LABEL_664;
      }
      if ((unsigned __int64)v333 < v334) {
        break;
      }
      v351 = v349 + 1;
      if ((unsigned __int64)(v349 + 1) >> 62 != 0) {
        goto LABEL_777;
      }
      if ((__int64)(v334 - v332) >> 1 > v351) {
        v351 = (__int64)(v334 - v332) >> 1;
      }
      if (v334 - v332 >= 0x7FFFFFFFFFFFFFFCLL) {
        v352 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v352 = v351;
      }
      if (v352 != 0) {
        if (v352 >> 62 != 0) {
          goto LABEL_776;
        }
        v353 = fw_memory_HeapManager_Allocate(*v346, 4 * v352, 16, 0);
      }
      else {
        v353 = 0;
      }
      v334 = v353 + 4 * v352;
      v347 = (__int64)&v348[v353 + -4 * v349];
      *(_DWORD*)&v348[v353] = *(_DWORD*)(v344 + 80);
      v333 = &v348[v353 + 4];
      memcpy(v347, v332, v348);
      if (v332 != 0) {
        v354 = 128;
        if (*(_QWORD*)(*v346 + 200LL) == 0) {
          v354 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v346 + v354, v332);
      }
    LABEL_665:
      v344 += 144;
      v332 = v347;
      if (v344 == v345) {
        goto LABEL_687;
      }
    }
    *(_DWORD*)v333 = *(_DWORD*)(v344 + 80);
    v333 += 4;
  LABEL_664:
    v347 = v332;
    goto LABEL_665;
  }
  v347 = v332;
LABEL_687:
  v355 = v403[12];
  v356 = v403[13];
  if (v355 != v356) {
    v357 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v359 = &v333[-v347];
      v360 = (__int64)&v333[-v347] >> 2;
      v91 = wmemchr(v347, *(unsigned int*)(v355 + 80), v360);
      if (v91 != 0 && v91 != (_QWORD)v333) {
        goto LABEL_690;
      }
      if ((unsigned __int64)v333 < v334) {
        break;
      }
      v362 = v360 + 1;
      if ((unsigned __int64)(v360 + 1) >> 62 != 0) {
        goto LABEL_777;
      }
      if ((__int64)(v334 - v347) >> 1 > v362) {
        v362 = (__int64)(v334 - v347) >> 1;
      }
      if (v334 - v347 >= 0x7FFFFFFFFFFFFFFCLL) {
        v363 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v363 = v362;
      }
      if (v363 != 0) {
        if (v363 >> 62 != 0) {
          goto LABEL_776;
        }
        v364 = fw_memory_HeapManager_Allocate(*v357, 4 * v363, 16, 0);
      }
      else {
        v364 = 0;
      }
      v334 = v364 + 4 * v363;
      v358 = (__int64)&v359[v364 + -4 * v360];
      *(_DWORD*)&v359[v364] = *(_DWORD*)(v355 + 80);
      v333 = &v359[v364 + 4];
      memcpy(v358, v347, v359);
      if (v347 != 0) {
        v365 = 128;
        if (*(_QWORD*)(*v357 + 200LL) == 0) {
          v365 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v357 + v365, v347);
      }
    LABEL_691:
      v355 += 144;
      v347 = v358;
      if (v355 == v356) {
        goto LABEL_713;
      }
    }
    *(_DWORD*)v333 = *(_DWORD*)(v355 + 80);
    v333 += 4;
  LABEL_690:
    v358 = v347;
    goto LABEL_691;
  }
  v358 = v347;
LABEL_713:
  v366 = v403[15];
  v367 = v403[16];
  if (v366 != v367) {
    v368 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v370 = &v333[-v358];
      v371 = (__int64)&v333[-v358] >> 2;
      v91 = wmemchr(v358, *(unsigned int*)(v366 + 80), v371);
      if (v91 != 0 && v91 != (_QWORD)v333) {
        goto LABEL_716;
      }
      if ((unsigned __int64)v333 < v334) {
        break;
      }
      v373 = v371 + 1;
      if ((unsigned __int64)(v371 + 1) >> 62 != 0) {
        goto LABEL_777;
      }
      if ((__int64)(v334 - v358) >> 1 > v373) {
        v373 = (__int64)(v334 - v358) >> 1;
      }
      if (v334 - v358 >= 0x7FFFFFFFFFFFFFFCLL) {
        v374 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v374 = v373;
      }
      if (v374 != 0) {
        if (v374 >> 62 != 0) {
          goto LABEL_776;
        }
        v375 = fw_memory_HeapManager_Allocate(*v368, 4 * v374, 16, 0);
      }
      else {
        v375 = 0;
      }
      v334 = v375 + 4 * v374;
      v369 = (__int64)&v370[v375 + -4 * v371];
      *(_DWORD*)&v370[v375] = *(_DWORD*)(v366 + 80);
      v333 = &v370[v375 + 4];
      memcpy(v369, v358, v370);
      if (v358 != 0) {
        v376 = 128;
        if (*(_QWORD*)(*v368 + 200LL) == 0) {
          v376 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v368 + v376, v358);
      }
    LABEL_717:
      v366 += 144;
      v358 = v369;
      if (v366 == v367) {
        goto LABEL_739;
      }
    }
    *(_DWORD*)v333 = *(_DWORD*)(v366 + 80);
    v333 += 4;
  LABEL_716:
    v369 = v358;
    goto LABEL_717;
  }
  v369 = v358;
LABEL_739:
  result = GameRoutine_1a0a7b0(v369, v333, &v420);
  v379 = v403[3];
  v378 = v403[4];
  if (v379 != v378) {
    v380 = v403[4];
    v381 = fw_memory_g_heap_manager_ptr;
    do {
      v382 = *(_BYTE*)(v380 - 24);
      v380 -= 24;
      if ((v382 & 1) != 0) {
        v383 = *(_QWORD*)(v378 - 8);
        if (v383 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v381 + 200LL) != 0) {
            v384 = 128;
          }
          else {
            v384 = 56;
          }
          result =
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v381 + v384, v383);
        }
      }
      v378 = v380;
    } while (v380 != v379);
  }
  v403[4] = v379;
  if ((char*)v369 != v333) {
    v385 = (char*)v369;
    v386 = fw_memory_g_heap_manager_ptr;
    do {
      result = *(unsigned int*)v385;
      if ((int)result >= 1) {
        std___1_to_string_1a0a790((void*)v417, result);
        v387 = (__int64*)GameRoutine_1a0a680(v417, 0, "A", 1);
        v389 = v387[1];
        v388 = (char*)v387[2];
        v420 = *v387;
        v421 = v389;
        v422 = v388;
        v387[1] = 0;
        v387[2] = 0;
        *v387 = 0;
        if ((v417[0] & 1) != 0 && v418 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v386 + 200LL) != 0) {
            v390 = 128;
          }
          else {
            v390 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v386 + v390, v418);
        }
        v391 = (__int64*)v403[4];
        if ((unsigned __int64)v391 >= v403[5]) {
          result = Manager_66cc20(v403 + 3, &v420);
        }
        else if ((v420 & 1) != 0) {
          fw_text_String_CopyTerminated(v403[4], v422, v421);
          result = (__int64)(v391 + 3);
        }
        else {
          v392 = v420;
          v393 = v422;
          result = (__int64)(v391 + 3);
          v391[1] = v421;
          v391[2] = (__int64)v393;
          *v391 = v392;
        }
        v394 = v420;
        v403[4] = result;
        if ((v394 & 1) != 0 && v422 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v386 + 200LL) != 0) {
            v395 = 128;
          }
          else {
            v395 = 56;
          }
          result =
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v386 + v395, v422);
        }
      }
      v385 += 4;
    } while (v385 != v333);
  }
  if (v369 != 0) {
    v396 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v396 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v396, v369);
  }
  return result;
}

__attribute__((swiftcall)) void HubDisposFileReader_c9bf60(PSEUDO_X8 x8_,
                                                           __int64 result,
                                                           int a2, __int64** a3,
                                                           long double a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v5;
  __int64* v6;
  _QWORD* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 i;
  __int64 v28;
  __int64 v29;
  _QWORD v31[2];
  __int64 v32;

  v6 = *a3;
  v5 = a3[1];
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v29 = result;
  if (*a3 == v5) {
    v10 = nullptr;
    v9 = 0;
  }
  else {
    v9 = 0;
    v10 = nullptr;
    v11 = 0;
    do {
      if ((*(_BYTE*)v6 & 1) != 0) {
        fw_text_String_CopyTerminated(v31, v6[2], v6[1]);
      }
      else {
        v12 = *v6;
        v13 = v6[2];
        v31[1] = v6[1];
        v32 = v13;
        v31[0] = v12;
      }
      result = GameRoutine_c9c1d0(v31);
      v14 = result;
      if ((v31[0] & 1) != 0 && v32 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*v8 + 200LL) == 0) {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt2(*v8 + v15, a5);
      }
      if ((unsigned __int64)v10 < v11) {
        *(_DWORD*)v10 = v14;
        v10 += 4;
      }
      else {
        v16 = &v10[-v9];
        v17 = (__int64)&v10[-v9] >> 2;
        v18 = v17 + 1;
        if ((unsigned __int64)(v17 + 1) >> 62 != 0) {
          GameRoutine_6e5a20();
        }
        if ((__int64)(v11 - v9) >> 1 > v18) {
          v18 = (__int64)(v11 - v9) >> 1;
        }
        if (v11 - v9 >= 0x7FFFFFFFFFFFFFFCLL) {
          v19 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v19 = v18;
        }
        if (v19 != 0) {
          if (v19 >> 62 != 0) {
            GameRoutine_60a210(result);
          }
          v20 = fw_memory_HeapManager_Allocate(*v8, 4 * v19, 16, 0);
        }
        else {
          v20 = 0;
        }
        v11 = v20 + 4 * v19;
        v21 = &v10[-v9];
        v22 = (__int64)&v16[v20 + -4 * v17];
        *(_DWORD*)&v16[v20] = v14;
        v10 = &v16[v20 + 4];
        result = memcpy(v22, v9, v21);
        if (v9 != 0) {
          v23 = 128;
          if (*(_QWORD*)(*v8 + 200LL) == 0) {
            v23 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt2(*v8 + v23, a5);
        }
        v9 = v22;
      }
      v6 += 3;
    } while (v6 != v5);
  }
  a4[1] = 0;
  a4[2] = 0;
  v24 = v29 + 24LL * a2;
  *a4 = 0;
  v25 = *(_QWORD*)(v24 + 48);
  for (i = *(_QWORD*)(v24 + 56); v25 != i; v25 += 144) {
    if (*(_BYTE*)v25 != 0) {
      result = wmemchr(v9, *(unsigned int*)(v25 + 80), (__int64)&v10[-v9] >> 2);
      if (result != 0 && result != (_QWORD)v10) {
        if (a4[1] >= a4[2]) {
          result = GameRoutine_c9c440(a4, v25);
        }
        else {
          result = GameRoutine_c9c650() + 144;
        }
        a4[1] = result;
      }
    }
  }
  if (v9 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v28 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt2(*v8 + v28, a5);
      return;
    }
  }
  {
    result;
    return;
  }
}

bool game_HubDisposFileReader_CalcGroupNames_lambda0_Invoke(__int64 a1,
                                                            __int64 a2)
{
  _BOOL8 result;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  void* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  signed __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  signed __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  unsigned __int8* v28;
  int v29;
  int v30;
  unsigned __int8* v31;
  int v32;
  unsigned __int8* v33;
  int v34;
  unsigned __int8* v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  signed __int64 v42;
  unsigned __int8* v43;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 192LL) & 1) != 0) {
    return true;
  }
  v3 = *(unsigned __int8*)(a2 + 56);
  if ((v3 & 1) != 0) {
    v5 = *(_QWORD*)(a2 + 64);
  }
  else {
    v5 = v3 >> 1;
  }
  if (v5 == 0) {
    return false;
  }
  v6 = a2 + 9;
  v7 = 1;
  v38 = *(_QWORD*)(a1 + 8);
  v40 = 0;
  v39 = a2 + 9;
  do {
    v8 = GameData_212f0f0[2 * v7];
    v9 = strlen(v8);
    if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(v9);
    }
    v10 = v9;
    if (v9 >= 0x17) {
      if ((v9 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v9 | 7) + 1;
      }
      v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                  16, 0);
      v42 = v10;
      v43 = (unsigned __int8*)v11;
      v41 = v12 | 1;
    LABEL_17:
      memmove(v11, v8, v10);
      goto LABEL_18;
    }
    v11 = (char*)&v41 + 1;
    LOBYTE(v41) = 2 * v9;
    if (v9 != 0) {
      goto LABEL_17;
    }
  LABEL_18:
    v11[v10] = 0;
    v13 = *(unsigned __int8*)(a2 + 8);
    v14 = (v13 & 1) == 0;
    v15 = v13 >> 1;
    if (v14) {
      v16 = v6;
    }
    else {
      v16 = *(_QWORD*)(a2 + 24);
    }
    v17 = v43;
    if (!v14) {
      v15 = *(_QWORD*)(a2 + 16);
    }
    if ((v41 & 1) != 0) {
      v18 = v43;
    }
    else {
      v18 = (unsigned __int8*)&v41 + 1;
    }
    if ((v41 & 1) != 0) {
      v19 = v42;
    }
    else {
      v19 = (unsigned __int64)(unsigned __int8)v41 >> 1;
    }
    if (v19 != 0) {
      if (v15 < v19) {
      LABEL_42:
        if ((v41 & 1) == 0) {
          goto LABEL_8;
        }
        goto LABEL_43;
      }
      v20 = *v18;
      v21 = v16 + v15;
      v22 = v16;
      while (1) {
        v23 = memchr(v22, v20, v15 - v19 + 1);
        if (v23 == 0) {
          goto LABEL_41;
        }
        v24 = v23;
        if ((unsigned int)memcmp(v23, v18, v19) == 0) {
          break;
        }
        v22 = v24 + 1;
        v15 = v21 - (v24 + 1);
        if (v15 < v19) {
          goto LABEL_41;
        }
      }
      if (v24 == v21) {
      LABEL_41:
        v6 = v39;
        goto LABEL_42;
      }
      v25 = v24 - v16;
      v6 = v39;
      if (v25 == -1) {
        goto LABEL_42;
      }
    }
    if (v7 > 9) {
      v40 = 0;
      if ((v41 & 1) == 0) {
        goto LABEL_8;
      }
    }
    else {
      v40 = GameData_1b81c1c[(unsigned int)(v7 - 1)];
      if ((v41 & 1) == 0) {
        goto LABEL_8;
      }
    }
  LABEL_43:
    if (v17 != nullptr) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v26);
    }
  LABEL_8:
    ++v7;
  } while (v7 != 10);
  v28 = *(unsigned __int8**)(v38 + 144);
  v27 = *(unsigned __int8**)(v38 + 152);
  if (v28 == v27) {
    return false;
  }
  v29 = *(_DWORD*)(a2 + 92);
  v30 = *(_DWORD*)(a2 + 100);
  if ((*(_BYTE*)(a2 + 88) & 1) != 0) {
    while (v40 != 0 && *v28 != v40 ||
           *(_DWORD*)(a2 + 84) != *((_DWORD*)v28 + 1) ||
           (*(_BYTE*)(a2 + 96) & 1) != 0 && v29 != *((_DWORD*)v28 + 2) ||
           (*(_BYTE*)(a2 + 104) & 1) != 0 && v30 != *((_DWORD*)v28 + 3)) {
      v28 += 16;
      if (v28 == v27) {
        return false;
      }
    }
    return true;
  }
  if ((*(_BYTE*)(a2 + 96) & 1) == 0) {
    if ((*(_BYTE*)(a2 + 104) & 1) == 0) {
      result = true;
      if (v40 != 0) {
        v36 = *v28;
        v35 = v28 + 16;
        if (v36 != v40) {
          do {
            result = v35 != v27;
            if (v35 == v27) {
              break;
            }
            v37 = *v35;
            v35 += 16;
          } while (v37 != v40);
        }
      }
      return result;
    }
    if (v40 == 0) {
      if (v30 == *((_DWORD*)v28 + 3)) {
        return true;
      }
      v31 = v28 + 16;
      do {
        result = v31 != v27;
        if (v31 == v27) {
          break;
        }
        v32 = *((_DWORD*)v31 + 3);
        v31 += 16;
      } while (v30 != v32);
      return result;
    }
    while (*v28 != v40 || v30 != *((_DWORD*)v28 + 3)) {
      v28 += 16;
      result = false;
      if (v28 == v27) {
        return result;
      }
    }
    return true;
  }
  if ((*(_BYTE*)(a2 + 104) & 1) != 0) {
    if (v40 != 0) {
      while (*v28 != v40 || v29 != *((_DWORD*)v28 + 2) ||
             v30 != *((_DWORD*)v28 + 3)) {
        v28 += 16;
        result = false;
        if (v28 == v27) {
          return result;
        }
      }
    }
    else {
      while (v29 != *((_DWORD*)v28 + 2) || v30 != *((_DWORD*)v28 + 3)) {
        v28 += 16;
        result = false;
        if (v28 == v27) {
          return result;
        }
      }
    }
    return true;
  }
  if (v40 != 0) {
    while (*v28 != v40 || v29 != *((_DWORD*)v28 + 2)) {
      v28 += 16;
      result = false;
      if (v28 == v27) {
        return result;
      }
    }
    return true;
  }
  if (v29 == *((_DWORD*)v28 + 2)) {
    return true;
  }
  v33 = v28 + 16;
  do {
    result = v33 != v27;
    if (v33 == v27) {
      break;
    }
    v34 = *((_DWORD*)v33 + 2);
    v33 += 16;
  } while (v29 != v34);
  return result;
}

#pragma GCC visibility pop
