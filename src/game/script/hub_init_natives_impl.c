#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66cc20(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
extern __int64 GameData_212dbb8[9];
__int64
HubInitNatives_ff5d00_alt1(__int64 result) __asm__("HubInitNatives_ff5d00");
__int64 HubInitNatives_ff5f00_alt1(
    __int64 result, _QWORD* a2,
    unsigned __int8* a3) __asm__("HubInitNatives_ff5f00");
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__attribute__((swiftcall)) void game_hub_LocatorDispos_CreateExternalDataImpl(
    PSEUDO_X8, __int64, __int64, __int64, char**, __int64, __int64);
__int64 GameRoutine_d5d770(_QWORD, _QWORD);
__int64 GameRoutine_d85ce0(_QWORD);
__int64 HubNatives_ccba40(_QWORD, _QWORD);
__int64 HubNatives_ccbf80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbd8[5];
extern __int64 GameData_212ec00;
extern __int64 GameData_21f3d10;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int8* GameRoutine_dbced0(__int64*, unsigned __int8*);
void hub_init_OverrideInitLocator(unsigned __int8* a1);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* Manager_66cc20(__int64*, _QWORD*);
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
__int64* HubInitNatives_ff5d00(__int64* result);
__int64* HubInitNatives_ff5f00(__int64* result, __int64* a2,
                               unsigned __int8* a3);

void hub_init_OverrideInitLocator(unsigned __int8* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8* v16;
  unsigned __int8* v17;
  __int64 v18;
  __int128 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _DWORD v44[6];
  __int64 v45;
  char v46;
  char v47;
  char v48;
  __int64 v49;
  unsigned __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;
  unsigned __int8* v59;
  unsigned __int8* v60;
  __int64 v61;
  unsigned __int64 v62;
  char* v63;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(&v61, *(_QWORD*)(GameData_21f3d10 + 56),
                                  *(_QWORD*)(GameData_21f3d10 + 48));
  }
  else {
    v7 = *(_QWORD*)(GameData_21f3d10 + 48);
    v8 = *(char**)(GameData_21f3d10 + 56);
    v61 = *(_QWORD*)(GameData_21f3d10 + 40);
    v62 = v7;
    v63 = v8;
  }
  if ((v61 & 1) != 0) {
    v9 = v62;
  }
  else {
    v9 = (unsigned __int64)(unsigned __int8)v61 >> 1;
  }
  v10 = *a1;
  if ((v61 & 1) != 0) {
    v11 = v63;
  }
  else {
    v11 = (char*)&v61 + 1;
  }
  v12 = (v10 & 1) == 0;
  v13 = v10 >> 1;
  if (v12) {
    v14 = (__int64)(a1 + 1);
  }
  else {
    v14 = *((_QWORD*)a1 + 2);
  }
  if (v12) {
    v15 = v13;
  }
  else {
    v15 = *((_QWORD*)a1 + 1);
  }
  v35 = 0;
  v36 = 0;
  v34 = nullptr;
  game_hub_LocatorDispos_CreateExternalDataImpl(
      (void*)(&v59), *(_QWORD*)GameData_212ec00, (__int64)v11, v9, &v34, v14,
      v15);
  v16 = v59;
  if (v60 != v59) {
    LocatorDispos_db2180((void*)(&v56), (unsigned __int8*)&v61, v59);
    if (*(_BYTE*)(GameData_21f3d10 + 9) == 1) {
      LOBYTE(v34) = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v55 = 0;
      v49 = 0;
      v50 = 0;
      v51 = nullptr;
      v52 = 0;
      LOBYTE(v53) = 0;
      HubNatives_ccba40(&v34, v59 + 24);
      LODWORD(v52) = 0;
      v46 = 1;
      if ((v49 & 1) != 0) {
        if ((v56 & 1) != 0) {
          v23 = v58;
        }
        else {
          v23 = (char*)&v56 + 1;
        }
        if ((v56 & 1) != 0) {
          v24 = v57;
        }
        else {
          v24 = (unsigned __int64)(unsigned __int8)v56 >> 1;
        }
        SpineModel_64dde0(&v49, v23, v24);
      }
      else if ((v56 & 1) != 0) {
        GameRoutine_64df20(&v49, v58, v57);
      }
      else {
        v49 = v56;
        v50 = v57;
        v51 = v58;
      }
      if ((GameRoutine_d85ce0(&v34) & 1) != 0) {
        *(_BYTE*)(*(_QWORD*)GameData_212dbd8[0] + 8LL) = 1;
      }
      if (v55 == 1 && v53 != 0) {
        v54 = v53;
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v53);
      }
      if ((v49 & 1) != 0 && v51 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v51);
      }
      if (v46 == 1) {
        HubNatives_ccbf80(&v34);
      }
    }
    else {
      v17 = v59;
      v34 = nullptr;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v18 = *(_QWORD*)GameData_212c6a0[0];
      v41 = 0;
      v42 = 0;
      v43 = 0;
      memset(v44, 0, 21);
      v45 = 0;
      GameRoutine_dbced0((__int64*)&v34, v59 + 376);
      *(_QWORD*)&v19 = *((_QWORD*)v17 + 20);
      v40 = 2;
      *(_QWORD*)v44 = v19;
      *((_QWORD*)&v19 + 1) = *((unsigned int*)v17 + 42);
      *(_OWORD*)v44 = v19;
      v44[4] = *((_DWORD*)v17 + 43);
      *(_BYTE*)(v18 + 40) = 1;
      GameRoutine_d5d770(v18 + 48, &v34);
      if ((v41 & 1) != 0 && v43 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v43);
      }
      if ((v37 & 1) != 0 && v39 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v39);
      }
      if (((unsigned __int8)v34 & 1) != 0 && v36 != 0) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v36);
      }
    }
    if ((v56 & 1) != 0 && v58 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v58);
    }
    v16 = v59;
  }
  if (v16 != nullptr) {
    if (v16 == v60) {
      goto LABEL_83;
    }
    v28 = v60 - 616;
    v29 = fw_memory_g_heap_manager_ptr;
    do {
      HubNatives_ccbf80(v28 + 24);
      if ((*v28 & 1) != 0) {
        v30 = *((_QWORD*)v28 + 2);
        if (v30 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v29 + v31, v30);
        }
      }
      v12 = v28 == v16;
      v28 -= 616;
    } while (!v12);
    v60 = v16;
    v16 = v59;
    if (v59 != nullptr) {
    LABEL_83:
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v16);
    }
  }
  if ((v61 & 1) != 0 && v63 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v63);
  }
}

__int64* HubInitNatives_ff5d00(__int64* result)
{
  __int64* v1;
  __int64* v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;

  v1 = (__int64*)result[1];
  v2 = (__int64*)result[2];
  v3 = result;
  if ((char*)v2 - (char*)v1 == 24) {
    result += 4;
    if (v3 + 4 != v1) {
      v4 = *(unsigned __int8*)v1;
      if ((*(_BYTE*)result & 1) == 0) {
        if ((v4 & 1) == 0) {
        LABEL_5:
          v5 = *v1;
          v6 = v1[1];
          v7 = v1[2];
        LABEL_6:
          result[1] = v6;
          result[2] = v7;
          *result = v5;
          return result;
        }
        goto LABEL_32;
      }
    LABEL_34:
      v19 = (v4 & 1) == 0;
      v20 = v4 >> 1;
      if (v19) {
        v21 = (__int64)v1 + 1;
      }
      else {
        v21 = v1[2];
      }
      if (v19) {
        v22 = v20;
      }
      else {
        v22 = v1[1];
      }
      return SpineModel_64dde0_alt1(result, v21, v22);
    }
  }
  else if (0xAAAAAAAAAAAAAAABLL * (v2 - v1) < 2) {
    if ((result[4] & 1) != 0) {
      *(_BYTE*)result[6] = 0;
      result[5] = 0;
    }
    else {
      *((_WORD*)result + 16) = 0;
    }
  }
  else if (v1 == v2) {
  LABEL_29:
    result = v3 + 4;
    if (v3 + 4 != v1) {
      v4 = *(unsigned __int8*)v1;
      if ((*(_BYTE*)result & 1) == 0) {
        if ((v4 & 1) == 0) {
          goto LABEL_5;
        }
      LABEL_32:
        v18 = v1[1];
        v17 = v1[2];
        return GameRoutine_64df20_alt1(result, v17, v18);
      }
      goto LABEL_34;
    }
  }
  else {
    v8 = (__int64*)result[1];
    v9 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 88LL);
    if ((v9 & 1) != 0) {
      v10 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 96LL);
    }
    else {
      v10 = v9 >> 1;
    }
    if ((v9 & 1) != 0) {
      v11 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 104LL);
    }
    else {
      v11 = *(_QWORD*)GameData_212dbb8[0] + 89LL;
    }
    while (1) {
      v12 = *(unsigned __int8*)v8;
      v13 = v8[1];
      v14 = v12 >> 1;
      if ((v12 & 1) != 0) {
        v14 = v8[1];
      }
      if (v10 == v14) {
        v15 = v8[2];
        v16 = (v12 & 1) != 0 ? v8[2] : (__int64)v8 + 1;
        if (memcmp_alt1(v11, v16, v10) == 0) {
          break;
        }
      }
      v8 += 3;
      if (v8 == v2) {
        goto LABEL_29;
      }
    }
    result = v3 + 4;
    if (v8 != v3 + 4) {
      if ((*(_BYTE*)result & 1) == 0) {
        if ((v12 & 1) == 0) {
          v5 = *v8;
          v6 = v8[1];
          v7 = v8[2];
          goto LABEL_6;
        }
        v17 = v15;
        v18 = v13;
        return GameRoutine_64df20_alt1(result, v17, v18);
      }
      v21 = v16;
      v22 = v10;
      return SpineModel_64dde0_alt1(result, v21, v22);
    }
  }
  return result;
}

__int64* HubInitNatives_ff5f00(__int64* result, __int64* a2,
                               unsigned __int8* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int8* v5;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;

  v3 = result[1];
  v4 = result[2];
  if (v3 != v4) {
    v5 = a3 + 1;
    v25 = (char*)a2 + 1;
    do {
      v9 = *(unsigned __int8*)(v3 + 56);
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v3 + 64);
      }
      else {
        v10 = v9 >> 1;
      }
      v11 = *a3;
      v12 = *((_QWORD*)a3 + 1);
      if ((v11 & 1) == 0) {
        v12 = v11 >> 1;
      }
      if (v10 == v12) {
        v13 = (v9 & 1) != 0 ? *(_QWORD*)(v3 + 72) : v3 + 57;
        v14 = (v11 & 1) != 0 ? *((_QWORD*)a3 + 2) : (__int64)v5;
        result = (__int64*)memcmp_alt1(v13, v14, v10);
        if ((_DWORD)result == 0) {
          v15 = *(__int64**)(v3 + 8);
          v16 = *(__int64**)(v3 + 16);
          *(_DWORD*)v3 = 1;
          *(_BYTE*)(v3 + 4) = 1;
          if (v15 == v16) {
            goto LABEL_36;
          }
          v17 = *(unsigned __int8*)a2;
          v18 = (v17 & 1) != 0 ? a2[1] : v17 >> 1;
          v19 = (v17 & 1) != 0 ? a2[2] : (__int64)v25;
          while (1) {
            v20 = *(unsigned __int8*)v15;
            v21 = v15[1];
            if ((v20 & 1) == 0) {
              v21 = v20 >> 1;
            }
            if (v21 == v18) {
              v22 = (v20 & 1) != 0 ? v15[2] : (__int64)v15 + 1;
              if (memcmp_alt1(v22, v19, v18) == 0) {
                break;
              }
            }
            v15 += 3;
            if (v15 == v16) {
              goto LABEL_36;
            }
          }
          if (v15 == v16) {
          LABEL_36:
            if ((unsigned __int64)v16 >= *(_QWORD*)(v3 + 24)) {
              v8 = Manager_66cc20((__int64*)(v3 + 8), a2);
            }
            else if ((*(_BYTE*)a2 & 1) != 0) {
              fw_text_String_CopyTerminated_alt1(v16, a2[2], a2[1]);
              v8 = v16 + 3;
            }
            else {
              v23 = *a2;
              v24 = a2[2];
              v8 = v16 + 3;
              v16[1] = a2[1];
              v16[2] = v24;
              *v16 = v23;
            }
            *(_QWORD*)(v3 + 16) = v8;
          }
          result = HubInitNatives_ff5d00((__int64*)v3);
        }
      }
      v3 += 80;
    } while (v3 != v4);
  }
  return result;
}

#pragma GCC visibility pop
