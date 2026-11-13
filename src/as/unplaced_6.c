#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* ConstructString_25ee20(_QWORD* result);
_QWORD* VariableAssign_62dbb0(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void Manager_629620(PSEUDO_X8, __int64 result,
                                               const char*);
__attribute__((swiftcall)) void Manager_6297a0(PSEUDO_X8, __int64 result,
                                               const char*);
__attribute__((swiftcall)) void as_629480(PSEUDO_X8, __int64 result);
__int64* VariableAssign_62da90(__int64*, __int64, unsigned __int64);
__int64 GameHr_62ddc0(__int64, __int64);
__int64 GameRoutine_2b0();
__int64 Registration_629e60(__int64 result);
__int64 as_string_c_str(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 strcpy(__int64, const char*);
extern _QWORD as_g_context_slots[16384];
extern _UNKNOWN* as_g_context_slots_ptr;
extern _UNKNOWN GameData_2203a91;
extern _UNKNOWN GameData_2204780;
extern _UNKNOWN as_g_format;
extern _UNKNOWN as_g_format_args;
extern _UNKNOWN as_g_format_result;
extern __int64 (*as_MemoryStream_vtable[])();
extern __int64 GameData_212c5c8[2];
extern __int64 GameData_2204690[];
extern __int64 GameData_2204698;
extern __int64 GameData_22046a0;
extern __int64 GameData_22046a8;
extern __int64 GameData_22046b0;
extern __int64 GameData_22046b8;
extern __int64 GameData_22046c0;
extern __int64 GameData_22046c8;
extern __int64 GameData_22046d0;
extern __int64 GameData_22046d8;
extern __int64 GameData_22046e0;
extern __int64 GameData_22046e8;
extern __int64 GameData_22046f0;
extern __int64 GameData_22046f8;
extern __int64 GameData_2204700;
extern __int64 GameData_2204708;
extern __int64 GameData_2204710;
extern __int64 GameData_2204718;
extern __int64 GameData_2204720;
extern __int64 GameData_2204728;
extern __int64 GameData_2204730;
extern __int64 GameData_2204738;
extern __int64 GameData_2204740;
extern __int64 GameData_2204748;
extern __int64 GameData_2204750;
extern __int64 GameData_2204758;
extern __int64 GameData_2204760;
extern __int64 GameData_2204768;
extern __int64 GameData_2204770;
extern __int64 GameData_2204778;
extern __int64 GameData_2204798;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2204788;
extern int GameData_220478c;
extern int GameData_2204790;
extern int GameData_2204794;
int __cxa_guard_acquire(__int64);
int sprintf(__int64, const char*, ...);
int sscanf(const char*, const char*, ...);
int strcmp(const char*, const char*);
unsigned __int64 strlen(const char*);
void GameRoutine_606c30(__int64);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void as_628be0(PSEUDO_X8 x8_, __int64 a1, char* a2,
                                          char a3, char a4);
__int64 as_c788e0(__int64 a1, __int64* a2, __int64* a3, __int64* a4,
                  __int64* a5, __int64* a6, __int64* a7, __int64* a8,
                  __int64* a9, __int64* a10, __int64* a11);

__attribute__((swiftcall)) void as_628be0(PSEUDO_X8 x8_, __int64 a1, char* a2,
                                          char a3, char a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  char* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  char* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  char* v52;
  char* v53;
  __int64 v54;
  char* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _DWORD* v71;
  __int64 v72;
  __int64 v73;
  unsigned int* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned int* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char v88;
  char v89;
  __int64 v90;
  struct {
    __int64 v91;
    unsigned int v92;
  } v91_;
  struct {
    char v93;
    _BYTE v94[7];
    char gap72_[8];
    char* v95;
  } v93_;
  struct {
    __int64 v96;
    unsigned int v97;
  } v96_;
  struct {
    __int64 v98;
    unsigned int v99;
  } v98_;
  struct {
    _QWORD v100[2];
    char* v101;
  } v100_;

  as_629480((void*)((__int64)&v93_.v93), (__int64)a2);
  if ((v93_.v93 & 1) != 0) {
    v10 = v93_.v95;
  }
  else {
    v10 = v93_.v94;
  }
  v11 = strlen(v10);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    v13 = (__int64*)fw_memory_g_heap_manager_ptr;
    if ((v11 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v11 | 7) + 1;
    }
    v14 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v15, 16, 0);
    v100_.v100[1] = v12;
    v100_.v101 = v14;
    v100_.v100[0] = v15 | 1;
  }
  else {
    v13 = (__int64*)fw_memory_g_heap_manager_ptr;
    LOBYTE(v100_.v100[0]) = 2 * v11;
    v14 = (char*)v100_.v100 + 1;
    if (v11 == 0) {
      goto LABEL_13;
    }
  }
  memmove((__int64)v14, (__int64)v10, v12);
LABEL_13:
  v16 = v93_.v93;
  v88 = a4;
  v14[v12] = 0;
  if ((v16 & 1) != 0 && v93_.v95 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v17, (__int64)v93_.v95);
  }
  v89 = v100_.v100[0];
  v90 = (__int64)v100_.v101;
  if ((v100_.v100[0] & 1) != 0) {
    v18 = v100_.v101;
  }
  else {
    v18 = (char*)v100_.v100 + 1;
  }
  Manager_629620((void*)((__int64)&v98_.v98), a1, v18);
  if (v98_.v99 != 0x2000) {
    v19 = &as_g_context_slots[2 * v98_.v99];
    v20 = v19[1];
    if (v20 != 0) {
      v21 = *v19;
      if (*v19 == v98_.v98) {
        if (strcmp(a2, (const char*)(v20 + 184)) == 0) {
          if ((v88 & 1) != 0) {
            v22 = *(_QWORD*)(a1 + 16);
            if (v22 == 0) {
              goto LABEL_29;
            }
            do {
              *(_BYTE*)(v22 + 325) = 1;
              v22 = *(_QWORD*)(v22 + 48);
            } while (v22 != 0);
            v20 = v19[1];
            if (v20 == 0) {
              v23 = 0;
            }
            else {
            LABEL_29:
              if (*v19 == v21) {
                v23 = v20;
              }
              else {
                v23 = 0;
              }
            }
            Registration_629e60(v23);
            v68 = *v19;
            v20 = v19[1];
          }
          else {
            v68 = v21;
          }
          if (v68 == v21) {
            v70 = v20;
          }
          else {
            v70 = 0;
          }
          ++*(_DWORD*)(v70 + 312);
          v71 = (_DWORD*)v19[1];
          if (v71[78] == 1 && (int)v71[242] >= 1) {
            v72 = 2294;
            v73 = 0;
            do {
              ++v73;
              if (*v19 != v21) {
                v71 = nullptr;
              }
              v74 = &v71[v72];
              v72 += 6;
              if (as_g_context_slots[2 * *v74] == *((_QWORD*)v74 - 1)) {
                v75 = as_g_context_slots[2 * *v74 + 1];
              }
              else {
                v75 = 0;
              }
              ++*(_DWORD*)(v75 + 312);
              v71 = (_DWORD*)v19[1];
            } while (v73 < (int)v71[242]);
          }
          goto LABEL_115;
        }
        goto LABEL_83;
      }
    }
  }
  Manager_6297a0((void*)((__int64)&v96_.v96), a1, a2);
  if (v96_.v97 != 0x2000) {
    v19 = &as_g_context_slots[2 * v96_.v97];
    v24 = v19[1];
    if (v24 != 0) {
      v21 = *v19;
      if (*v19 == v96_.v96) {
        if ((v18 != nullptr || *(_BYTE*)(v24 + 56) == 0) &&
            strcmp(v18, (const char*)(v24 + 56)) == 0) {
          if ((v88 & 1) != 0) {
            v25 = *(_QWORD*)(a1 + 16);
            if (v25 == 0) {
              goto LABEL_41;
            }
            do {
              *(_BYTE*)(v25 + 325) = 1;
              v25 = *(_QWORD*)(v25 + 48);
            } while (v25 != 0);
            v24 = v19[1];
            if (v24 == 0) {
              v26 = 0;
            }
            else {
            LABEL_41:
              if (*v19 == v21) {
                v26 = v24;
              }
              else {
                v26 = 0;
              }
            }
            Registration_629e60(v26);
            v69 = *v19;
            v24 = v19[1];
          }
          else {
            v69 = v21;
          }
          if (v69 == v21) {
            v76 = v24;
          }
          else {
            v76 = 0;
          }
          ++*(_DWORD*)(v76 + 312);
          v71 = (_DWORD*)v19[1];
          if (v71[78] == 1 && (int)v71[242] >= 1) {
            v77 = 2294;
            v78 = 0;
            do {
              ++v78;
              if (*v19 != v21) {
                v71 = nullptr;
              }
              v79 = &v71[v77];
              v77 += 6;
              if (as_g_context_slots[2 * *v79] == *((_QWORD*)v79 - 1)) {
                v80 = as_g_context_slots[2 * *v79 + 1];
              }
              else {
                v80 = 0;
              }
              ++*(_DWORD*)(v80 + 312);
              v71 = (_DWORD*)v19[1];
            } while (v78 < (int)v71[242]);
          }
        LABEL_115:
          v81 = *v19;
          *(_QWORD*)a5 = 0;
          *(_DWORD*)(a5 + 8) = 0x2000;
          if (v81 == v21) {
            v82 = (unsigned int)v71[2];
            if ((_DWORD)v82 != 0x2000) {
              v83 = &as_g_context_slots[2 * v82];
              if ((_DWORD*)v83[1] == v71) {
                *(_DWORD*)(a5 + 8) = v82;
                *(_QWORD*)a5 = *v83;
              }
            }
            *(_QWORD*)(a5 + 16) = v71;
            goto LABEL_121;
          }
          goto LABEL_120;
        }
      LABEL_83:
        *(_QWORD*)a5 = 0;
        *(_DWORD*)(a5 + 8) = 0x2000;
      LABEL_120:
        *(_QWORD*)(a5 + 16) = 0;
        goto LABEL_121;
      }
    }
  }
  v87 = a5;
  nn_os_LockMutex(a1 + 5024);
  v27 = *(_QWORD*)(a1 + 5008);
  v28 = *(int*)(a1 + 5016);
  v29 = *(_DWORD*)(v27 + 4 * v28);
  *(_DWORD*)(a1 + 5016) = v28 + 1;
  *(_DWORD*)(v27 + 4 * v28) = -1;
  nn_os_UnlockMutex(a1 + 5024);
  v30 = *(_QWORD*)(a1 + 5000);
  v31 = v30 + 10720LL * v29;
  GameHr_62ddc0(v31, a1);
  v32 = *(unsigned int*)(v31 + 8);
  if ((_DWORD)v32 != 0x2000 && (v33 = &as_g_context_slots[2 * v32])[1] == v31) {
    v86 = *v33;
    if (v18 != nullptr) {
      goto LABEL_47;
    }
  }
  else {
    v86 = 0;
    LODWORD(v32) = 0x2000;
    if (v18 != nullptr) {
    LABEL_47:
      strcpy(v31 + 56, v18);
      goto LABEL_50;
    }
  }
  *(_BYTE*)(v31 + 56) = 0;
LABEL_50:
  strcpy(v31 + 184, a2);
  *(_QWORD*)(v31 + 24) = 0;
  v34 = (_QWORD*)(v31 + 24);
  *(_QWORD*)(v31 + 48) = 0;
  *(_WORD*)(v31 + 320) = 0;
  *(_BYTE*)(v31 + 322) = 0;
  *(_DWORD*)(v31 + 968) = 0;
  *(_QWORD*)(v31 + 32) = 0;
  *(_DWORD*)(v31 + 312) = 0;
  *(_BYTE*)(v31 + 323) = a3 & 1;
  *(_BYTE*)(v31 + 324) = 0;
  *(_BYTE*)(v31 + 326) = 0;
  *(_DWORD*)(v31 + 315) = 0;
  v35 = (_QWORD*)fw_memory_HeapManager_Allocate(*v13, 144, 32, 3u);
  v36 = GameData_212c5c8[0];
  v35[2] = 0;
  v35[3] = 0;
  v35[4] = 0;
  v35[5] = 0;
  v35[6] = 0;
  v35[7] = 0;
  v35[8] = 0;
  v35[9] = 0;
  v35[10] = 0;
  v35[11] = 0;
  v35[12] = 0;
  v35[13] = 0;
  v35[14] = 0;
  v35[15] = 0;
  v35[16] = 0;
  v35[17] = 0;
  *v35 = v36 + 16;
  v35[1] = 0;
  strcpy((__int64)(v35 + 1), a2);
  *(_QWORD*)(v31 + 24) = v35;
  (*(void (**)(_QWORD*))(*v35 + 32LL))(v35);
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*v34 + 48LL))(*v34) == 0) {
    GameRoutine_606c30(v30 + 10720LL * v29);
    (**(void (***)(__int64))v31)(v30 + 10720LL * v29);
    v48 = (v31 - *(_QWORD*)(a1 + 5000)) / 0x29E0uLL;
    nn_os_LockMutex(a1 + 5024);
    v49 = *(_QWORD*)(a1 + 5008);
    v50 = *(int*)(a1 + 5016) - 1LL;
    *(_DWORD*)(a1 + 5016) = v50;
    *(_DWORD*)(v49 + 4 * v50) = v48;
    nn_os_UnlockMutex(a1 + 5024);
    *(_QWORD*)v87 = 0;
    *(_DWORD*)(v87 + 8) = 0x2000;
    *(_QWORD*)(v87 + 16) = 0;
  LABEL_121:
    v63 = v90;
    v64 = v89;
    goto LABEL_122;
  }
  v85 = v30;
  v37 = v29;
  v38 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v34 + 48LL))(*v34);
  v39 = v38;
  if (*(_BYTE*)v38 == 65 && *(_BYTE*)(v38 + 1) == 83 &&
      *(_BYTE*)(v38 + 2) == 70 && *(_BYTE*)(v38 + 3) == 0) {
    *(_BYTE*)(v31 + 326) = 1;
  }
  v40 = *(_DWORD*)(v38 + 8);
  v41 = v38 + *(int*)(v38 + 4);
  nn_os_LockMutex(a1 + 4952);
  v42 = *(_QWORD*)(a1 + 4936);
  v43 = *(int*)(a1 + 4944);
  v44 = *(_DWORD*)(v42 + 4 * v43);
  *(_DWORD*)(a1 + 4944) = v43 + 1;
  *(_DWORD*)(v42 + 4 * v43) = -1;
  nn_os_UnlockMutex(a1 + 4952);
  v45 = *(_QWORD*)(a1 + 4928) + 24LL * v44;
  *(_QWORD*)v45 = as_MemoryStream_vtable;
  *(_QWORD*)(v45 + 8) = v41;
  *(_DWORD*)(v45 + 16) = v40;
  *(_DWORD*)(v45 + 20) = 0;
  *(_QWORD*)(v31 + 32) = v45;
  *(_BYTE*)(v31 + 324) = v88 & 1;
  *(_BYTE*)(v31 + 316) = 1;
  ++*(_DWORD*)(v31 + 312);
  if (*(_BYTE*)(a1 + 4785) == 1) {
    nn_os_LockMutex(a1 + 4792);
  }
  v46 = *(_QWORD*)(a1 + 16);
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v46 != 0) {
    do {
      v47 = v46;
      v46 = *(_QWORD*)(v46 + 48);
    } while (v46 != 0);
    *(_QWORD*)(v47 + 48) = v31;
  }
  else {
    *(_QWORD*)(a1 + 16) = v31;
  }
  if (*(_BYTE*)(a1 + 4785) == 1) {
    nn_os_UnlockMutex(a1 + 4792);
  }
  v51 = *(_DWORD*)(v39 + 12);
  *(_DWORD*)(v31 + 968) = v51;
  if (v51 >= 1) {
    v52 = (const char*)(v31 + 972);
    v53 = (const char*)(v39 + 16);
    v54 = 0;
    v55 = (char*)as_g_context_slots_ptr;
    v56 = (_QWORD*)(10720LL * v37 + v85 + 9184);
    do {
      strcpy((__int64)v52, v53);
      strcpy((__int64)&v93_.v93, v52);
      as_628be0((void*)((__int64)&v91_.v91), a1, &v93_.v93,
                *(_BYTE*)(v31 + 323), *(_BYTE*)(v31 + 324));
      v58 = v91_.v91;
      v59 = v91_.v92;
      *(v56 - 2) = v91_.v91;
      *((_DWORD*)v56 - 2) = v59;
      if ((_DWORD)v59 == 0x2000 ||
          *((_QWORD*)(v60 = &v55[16 * v59]) + 1) == 0) {
        v57 = 0;
      }
      else if (*(_QWORD*)v60 == v58) {
        v57 = *((_QWORD*)v60 + 1);
      }
      else {
        v57 = 0;
      }
      *v56 = v57;
      v56 += 3;
      ++v54;
      v53 += 128;
      v52 += 128;
    } while (v54 < *(int*)(v31 + 968));
  }
  *(_BYTE*)(v31 + 317) = 1;
  if ((_DWORD)v32 == 0x2000 ||
      (v61 = &as_g_context_slots[2 * (unsigned int)v32], (v62 = v61[1]) == 0) ||
      *v61 != v86) {
    *(_DWORD*)(v87 + 8) = 0x2000;
    *(_QWORD*)v87 = 0;
    *(_QWORD*)(v87 + 16) = 0;
    goto LABEL_121;
  }
  v63 = v90;
  v64 = v89;
  *(_DWORD*)(v87 + 8) = 0x2000;
  v65 = *(unsigned int*)(v62 + 8);
  *(_QWORD*)v87 = 0;
  if ((_DWORD)v65 != 0x2000) {
    v66 = &as_g_context_slots[2 * v65];
    if (v66[1] == v62) {
      v67 = *v66;
      *(_DWORD*)(v87 + 8) = v65;
      *(_QWORD*)v87 = v67;
    }
  }
  *(_QWORD*)(v87 + 16) = v62;
LABEL_122:
  if ((v64 & 1) != 0 && v63 != 0) {
    v84 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v84, v63);
  }
}

__int64 as_c788e0(__int64 a1, __int64* a2, __int64* a3, __int64* a4,
                  __int64* a5, __int64* a6, __int64* a7, __int64* a8,
                  __int64* a9, __int64* a10, __int64* a11)
{

#pragma clang fp contract(off)
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 result;
  _WORD* v72;
  _BYTE* v73;
  int v74;
  __int64 v75;
  char* v76;
  char* v77;
  int* v78;
  int v79;
  unsigned __int8* v80;
  int v81;
  int v82;
  char* v83;
  __int64 v84;
  char* v85;
  char* v86;
  char* v87;
  __int64* v88;
  int v89;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2204780,
                            memory_order_acquire) &
       1) == 0) {
    v88 = a2;
    v89 = __cxa_guard_acquire((__int64)&GameData_2204780);
    a2 = v88;
    if (v89 != 0) {
      ConstructString_25ee20(GameData_2204690);
      ConstructString_25ee20(&GameData_22046a8);
      ConstructString_25ee20(&GameData_22046c0);
      ConstructString_25ee20(&GameData_22046d8);
      ConstructString_25ee20(&GameData_22046f0);
      ConstructString_25ee20(&GameData_2204708);
      ConstructString_25ee20(&GameData_2204720);
      ConstructString_25ee20(&GameData_2204738);
      ConstructString_25ee20(&GameData_2204750);
      ConstructString_25ee20(&GameData_2204768);
      GameRoutine_2b0();
      __cxa_guard_release((__int64)&GameData_2204780);
      a2 = v88;
    }
  }
  if (a2 != GameData_2204690) {
    v18 = *(unsigned __int8*)a2;
    if ((GameData_2204690[0] & 1) != 0) {
      v21 = a2[1];
      v22 = (v18 & 1) == 0;
      v23 = v18 >> 1;
      if (v22) {
        v24 = (__int64)a2 + 1;
      }
      else {
        v24 = a2[2];
      }
      if (v22) {
        v25 = v23;
      }
      else {
        v25 = v21;
      }
      VariableAssign_62da90(GameData_2204690, v24, v25);
    }
    else if ((v18 & 1) != 0) {
      VariableAssign_62dbb0(GameData_2204690, a2[2], a2[1]);
    }
    else {
      v19 = *a2;
      v20 = a2[2];
      GameData_2204698 = a2[1];
      GameData_22046a0 = v20;
      GameData_2204690[0] = v19;
    }
  }
  if (a3 != &GameData_22046a8) {
    v26 = *(unsigned __int8*)a3;
    if ((GameData_22046a8 & 1) != 0) {
      if ((v26 & 1) != 0) {
        v29 = a3[2];
      }
      else {
        v29 = (__int64)a3 + 1;
      }
      if ((v26 & 1) != 0) {
        v30 = a3[1];
      }
      else {
        v30 = v26 >> 1;
      }
      VariableAssign_62da90(&GameData_22046a8, v29, v30);
    }
    else if ((v26 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_22046a8, a3[2], a3[1]);
    }
    else {
      v27 = *a3;
      v28 = a3[2];
      GameData_22046b0 = a3[1];
      GameData_22046b8 = v28;
      GameData_22046a8 = v27;
    }
  }
  if (a4 != &GameData_22046c0) {
    v31 = *(unsigned __int8*)a4;
    if ((GameData_22046c0 & 1) != 0) {
      if ((v31 & 1) != 0) {
        v34 = a4[2];
      }
      else {
        v34 = (__int64)a4 + 1;
      }
      if ((v31 & 1) != 0) {
        v35 = a4[1];
      }
      else {
        v35 = v31 >> 1;
      }
      VariableAssign_62da90(&GameData_22046c0, v34, v35);
    }
    else if ((v31 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_22046c0, a4[2], a4[1]);
    }
    else {
      v32 = *a4;
      v33 = a4[2];
      GameData_22046c8 = a4[1];
      GameData_22046d0 = v33;
      GameData_22046c0 = v32;
    }
  }
  if (a5 != &GameData_22046d8) {
    v36 = *(unsigned __int8*)a5;
    if ((GameData_22046d8 & 1) != 0) {
      if ((v36 & 1) != 0) {
        v39 = a5[2];
      }
      else {
        v39 = (__int64)a5 + 1;
      }
      if ((v36 & 1) != 0) {
        v40 = a5[1];
      }
      else {
        v40 = v36 >> 1;
      }
      VariableAssign_62da90(&GameData_22046d8, v39, v40);
    }
    else if ((v36 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_22046d8, a5[2], a5[1]);
    }
    else {
      v37 = *a5;
      v38 = a5[2];
      GameData_22046e0 = a5[1];
      GameData_22046e8 = v38;
      GameData_22046d8 = v37;
    }
  }
  if (a6 != &GameData_22046f0) {
    v41 = *(unsigned __int8*)a6;
    if ((GameData_22046f0 & 1) != 0) {
      if ((v41 & 1) != 0) {
        v44 = a6[2];
      }
      else {
        v44 = (__int64)a6 + 1;
      }
      if ((v41 & 1) != 0) {
        v45 = a6[1];
      }
      else {
        v45 = v41 >> 1;
      }
      VariableAssign_62da90(&GameData_22046f0, v44, v45);
    }
    else if ((v41 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_22046f0, a6[2], a6[1]);
    }
    else {
      v42 = *a6;
      v43 = a6[2];
      GameData_22046f8 = a6[1];
      GameData_2204700 = v43;
      GameData_22046f0 = v42;
    }
  }
  if (a7 != &GameData_2204708) {
    v46 = *(unsigned __int8*)a7;
    if ((GameData_2204708 & 1) != 0) {
      if ((v46 & 1) != 0) {
        v49 = a7[2];
      }
      else {
        v49 = (__int64)a7 + 1;
      }
      if ((v46 & 1) != 0) {
        v50 = a7[1];
      }
      else {
        v50 = v46 >> 1;
      }
      VariableAssign_62da90(&GameData_2204708, v49, v50);
    }
    else if ((v46 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_2204708, a7[2], a7[1]);
    }
    else {
      v47 = *a7;
      v48 = a7[2];
      GameData_2204710 = a7[1];
      GameData_2204718 = v48;
      GameData_2204708 = v47;
    }
  }
  if (a8 != &GameData_2204720) {
    v51 = *(unsigned __int8*)a8;
    if ((GameData_2204720 & 1) != 0) {
      if ((v51 & 1) != 0) {
        v54 = a8[2];
      }
      else {
        v54 = (__int64)a8 + 1;
      }
      if ((v51 & 1) != 0) {
        v55 = a8[1];
      }
      else {
        v55 = v51 >> 1;
      }
      VariableAssign_62da90(&GameData_2204720, v54, v55);
    }
    else if ((v51 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_2204720, a8[2], a8[1]);
    }
    else {
      v52 = *a8;
      v53 = a8[2];
      GameData_2204728 = a8[1];
      GameData_2204730 = v53;
      GameData_2204720 = v52;
    }
  }
  if (a9 != &GameData_2204738) {
    v56 = *(unsigned __int8*)a9;
    if ((GameData_2204738 & 1) != 0) {
      if ((v56 & 1) != 0) {
        v59 = a9[2];
      }
      else {
        v59 = (__int64)a9 + 1;
      }
      if ((v56 & 1) != 0) {
        v60 = a9[1];
      }
      else {
        v60 = v56 >> 1;
      }
      VariableAssign_62da90(&GameData_2204738, v59, v60);
    }
    else if ((v56 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_2204738, a9[2], a9[1]);
    }
    else {
      v57 = *a9;
      v58 = a9[2];
      GameData_2204740 = a9[1];
      GameData_2204748 = v58;
      GameData_2204738 = v57;
    }
  }
  if (a10 != &GameData_2204750) {
    v61 = *(unsigned __int8*)a10;
    if ((GameData_2204750 & 1) != 0) {
      if ((v61 & 1) != 0) {
        v64 = a10[2];
      }
      else {
        v64 = (__int64)a10 + 1;
      }
      if ((v61 & 1) != 0) {
        v65 = a10[1];
      }
      else {
        v65 = v61 >> 1;
      }
      VariableAssign_62da90(&GameData_2204750, v64, v65);
    }
    else if ((v61 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_2204750, a10[2], a10[1]);
    }
    else {
      v62 = *a10;
      v63 = a10[2];
      GameData_2204758 = a10[1];
      GameData_2204760 = v63;
      GameData_2204750 = v62;
    }
  }
  if (a11 != &GameData_2204768) {
    v66 = *(unsigned __int8*)a11;
    if ((GameData_2204768 & 1) != 0) {
      if ((v66 & 1) != 0) {
        v69 = a11[2];
      }
      else {
        v69 = (__int64)a11 + 1;
      }
      if ((v66 & 1) != 0) {
        v70 = a11[1];
      }
      else {
        v70 = v66 >> 1;
      }
      VariableAssign_62da90(&GameData_2204768, v69, v70);
    }
    else if ((v66 & 1) != 0) {
      VariableAssign_62dbb0(&GameData_2204768, a11[2], a11[1]);
    }
    else {
      v67 = *a11;
      v68 = a11[2];
      GameData_2204770 = a11[1];
      GameData_2204778 = v68;
      GameData_2204768 = v67;
    }
  }
  result = as_string_c_str(a1);
  v72 = &as_g_format;
  v73 = (_BYTE*)result;
  v74 = 0;
  while (2) {
    while (1) {
      v79 = (unsigned __int8)*v73;
      if (v79 != 37) {
        break;
      }
      v80 = (unsigned __int8*)&GameData_2203a91;
      while (1) {
        *(v80 - 1) = v79;
        if (v79 <= 107) {
          if (v79 > 99) {
            if (v79 == 100) {
              goto LABEL_123;
            }
            if (v79 == 102) {
              *v80 = 0;
              v83 = (const char*)as_string_c_str(
                  (__int64)&GameData_2204690[3 * v74]);
              sscanf(v83, "%f", &GameData_2204794);
              result = sprintf((__int64)&as_g_format_args + 256 * (__int64)v74,
                               (const char*)&as_g_format_result,
                               *(float*)&GameData_2204794);
              goto LABEL_126;
            }
          }
          else {
            if (v79 == 88) {
              goto LABEL_150;
            }
            if (v79 == 99) {
            LABEL_123:
              *v80 = 0;
              v75 = v74;
              v76 = (const char*)as_string_c_str(
                  (__int64)&GameData_2204690[3 * v74]);
              v77 = "%d";
              v78 = &GameData_2204788;
              goto LABEL_124;
            }
          }
          goto LABEL_132;
        }
        if (v79 <= 114) {
          if (v79 == 108) {
            v82 = *v80;
            if (v82 == 108) {
              if (v80[1] == 120) {
                *v80 = 0;
                v87 = (const char*)as_string_c_str(
                    (__int64)&GameData_2204690[3 * v74]);
                sscanf(v87, "%llx", &GameData_2204798);
                v84 = GameData_2204798;
                v85 = (char*)&as_g_format_args + 256 * (__int64)v74;
                goto LABEL_154;
              }
            }
            else if (v82 == 120) {
              *v80 = 0;
              v75 = v74;
              v76 = (const char*)as_string_c_str(
                  (__int64)&GameData_2204690[3 * v74]);
              v77 = "%lx";
              goto LABEL_151;
            }
          }
          goto LABEL_132;
        }
        if (v79 == 120) {
        LABEL_150:
          *v80 = 0;
          v75 = v74;
          v76 =
              (const char*)as_string_c_str((__int64)&GameData_2204690[3 * v74]);
          v77 = "%x";
        LABEL_151:
          v78 = &GameData_220478c;
        LABEL_124:
          sscanf(v76, v77, v78);
        LABEL_125:
          result =
              sprintf((__int64)&as_g_format_args + 256 * v75,
                      (const char*)&as_g_format_result, (unsigned int)*v78);
          goto LABEL_126;
        }
        if (v79 == 117) {
          *v80 = 0;
          v75 = v74;
          v86 =
              (const char*)as_string_c_str((__int64)&GameData_2204690[3 * v74]);
          v78 = &GameData_2204790;
          sscanf(v86, "%u", &GameData_2204790);
          goto LABEL_125;
        }
        if (v79 == 115) {
          break;
        }
      LABEL_132:
        v81 = (unsigned __int8)*++v73;
        v79 = v81;
        ++v80;
        if (v81 == 0) {
          goto LABEL_126;
        }
      }
      *v80 = 0;
      v84 = as_string_c_str((__int64)&GameData_2204690[3 * v74]);
      v85 = (char*)&as_g_format_args + 256 * (__int64)v74;
    LABEL_154:
      result = sprintf((__int64)v85, (const char*)&as_g_format_result, v84);
    LABEL_126:
      *v72++ = 29477;
      ++v74;
      ++v73;
    }
    if (*v73 != 0) {
      *(_BYTE*)v72 = v79;
      v72 = (_WORD*)((char*)v72 + 1);
      ++v73;
      continue;
    }
    break;
  }
  *(_BYTE*)v72 = 0;
  return result;
}

#pragma GCC visibility pop
