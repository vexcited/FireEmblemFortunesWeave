#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_a54160(PSEUDO_X8, _QWORD* result,
                                                   _QWORD*);
__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8, __int64, __int64,
                                               __int64, char);
__attribute__((swiftcall)) void fs_6354c0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void fs_63be60(PSEUDO_X8, __int64, unsigned __int8*);
__int64* GameRoutine_a542c0(_QWORD*, const char**);
__int64 GameHr_63b800(__int64, __int64, unsigned __int8*, int, unsigned __int8*,
                      char, __int64, unsigned __int64);
__int64 GameHr_63c1a0(unsigned __int8*, __int64, __int64, __int64,
                      unsigned __int64, __int64 (*)(_QWORD));
__int64 GameRoutine_1a0a240(__int64, __int64);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_635680(__int64 result, __int64*, __int64);
__int64 GameRoutine_639dc0(__int64, unsigned __int64, __int64, __int64,
                           unsigned __int64, __int64);
__int64 GameRoutine_63c3f0();
__int64 Manager_643620(__int64 result, __int64*, __int64, char);
__int64 Manager_644a20(__int64 result, __int64*, __int64, char);
__int64 Registration_18d7720(__int64, int, int);
__int64 Registration_a50100(__int64*, __int64, __int64);
__int64 fs_63b1a0(__int64, unsigned __int64, int);
__int64 fs_63d560(_WORD*, char*, unsigned __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1_locale_locale_1a0a220(__int64);
__int64 std___1_locale_locale_1a0a230(__int64, __int64);
__int64 std___1_locale_use_facet(__int64, __int64);
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c3d8;
extern __int64 GameData_21667a8;
extern __int64 GameData_21c6790;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 snd_g_fileIndex;
int memcmp(__int64, __int64, unsigned __int64);
int strcmp(const char*, const char*);
unsigned __int64 nn_mem_StandardAllocator_GetSizeOf(__int64, __int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a52f40();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
unsigned __int64 fs_636f60(unsigned __int64 result, __int64 a2, __int64 a3);
_QWORD* fs_63d180(unsigned __int64 a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4, char a5, char* a6, char* a7, _BYTE* a8,
                  unsigned int a9);
__int64 fs_6416a0(__int64 a1, __int64 a2, __int64* a3, __int64 a4, __int64 a5,
                  unsigned __int64 a6);
void fs_a4c820(_QWORD* a1);
__int64 fs_a50960(__int64 a1, __int64 a2);
__int64 fs_a50b20(__int64 a1, __int64 a2);
__int64 fs_a50ce0(__int64 a1, __int64 a2);

unsigned __int64 fs_636f60(unsigned __int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 SizeOfEPKv;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  char* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v39;
  __int64 v40;
  char* v41;
  char* v42;
  char* v43;
  signed __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  struct {
    unsigned __int64 v48;
    __int64* v49;
  } v48_;
  struct {
    unsigned __int64 v50;
    unsigned __int64 v51;
  } v50_;

  if ((*(_DWORD*)(result + 4584) & 0xFFFFFFFD) != 0) {
    v3 = *(_QWORD*)(result + 4592);
    v4 = result;
    v5 = fw_memory_g_heap_manager_ptr;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 280LL) != 0) {
      v6 = a2;
      v7 = a3;
      result = nn_mem_StandardAllocator_GetSizeOf(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + 56LL,
          *(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 280LL));
      a2 = v6;
      a3 = v7;
    }
    else {
      result = GameData_21667a8;
    }
    v8 = a3 + a2;
    v9 = atomic_load((unsigned __int64*)&GameData_21c6790);
    v10 = result >= v9;
    v11 = result - v9;
    if (!v10) {
      v11 = 0;
    }
    if (v11 <= v3 + a3 + a2) {
      nn_os_LockMutex(v4 + 4456);
      v12 = *(_QWORD*)(v4 + 4600);
      nn_os_LockMutex(v4 + 4456);
      v13 = atomic_load((unsigned __int64*)(v4 + 4704));
      v14 = v13 - *(int*)(v4 + 4712);
      fs_6354c0((void*)((__int64*)&v48_.v48), v4);
      v50_.v50 = 0;
      v50_.v51 = 0;
      GameRoutine_635680((__int64)&v48_.v48, (__int64*)&v50_.v50, v14);
      v15 = v48_.v48;
      v16 = v50_.v50;
      if (v50_.v50 != 0) {
        Manager_643620(v48_.v48, (__int64*)(v48_.v48 + 8 * v50_.v50),
                       (2 * __clz(v50_.v50)) ^ 0x7E, 1);
      }
      v17 = v50_.v51;
      if (v16 != v50_.v51) {
        Manager_644a20(
            v15 + 8 * v16, (__int64*)(v15 + 8 * v50_.v51),
            (2 * __clz((__int64)(8 * v50_.v51 - 8 * v16) >> 3)) ^ 0x7E, 1);
        v16 = v17;
      }
      v18 = (__int64*)(v15 + 8 * v16);
      v19 = v48_.v49;
      if (v18 != v48_.v49) {
        Manager_644a20((__int64)v18, v48_.v49,
                       (2 * __clz(v48_.v49 - v18)) ^ 0x7E, 1);
      }
      nn_os_UnlockMutex(v4 + 4456);
      if ((__int64*)v15 != v19) {
        v20 = v19 - 1;
        if (v15 < (unsigned __int64)(v19 - 1)) {
          v21 = v15 + 8;
          do {
            v22 = *(_QWORD*)(v21 - 8);
            *(_QWORD*)(v21 - 8) = *v20;
            *v20-- = v22;
            v10 = v21 >= (unsigned __int64)v20;
            v21 += 8LL;
          } while (!v10);
        }
      }
      v23 = v12 + v8;
      while (1) {
        if ((__int64*)v15 == v19) {
        LABEL_67:
          if (v15 != 0) {
            v47 = 128;
            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
              v47 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v47, v15);
          }
          return nn_os_UnlockMutex(v4 + 4456);
        }
        v28 = *--v19;
        v27 = v28;
        v29 = *(char**)(v4 + 4328);
        v30 = *(char**)(v4 + 4336);
        v31 = *(_QWORD*)(v28 + 528);
        v48_.v49 = v19;
        if (v30 != v29) {
          v32 = (v30 - v29) >> 3;
          v33 = (__int64)v29;
          do {
            v34 = v32 >> 1;
            v35 = (__int64*)(v33 + 8 * (v32 >> 1));
            v37 = *v35;
            v36 = v35 + 1;
            v32 += ~(v32 >> 1);
            if (*(_QWORD*)(v37 + 528) < v31) {
              v33 = (__int64)v36;
            }
            else {
              v32 = v34;
            }
          } while (v32 != 0);
          if (v30 != (char*)v33 && *(_QWORD*)v33 == v27 &&
              *(_QWORD*)(*(_QWORD*)v33 + 528LL) == v31) {
            break;
          }
        }
        if (v30 != v29) {
          v39 = v30 - v29 - 8;
          if ((~(_BYTE)v39 & 0x18) == 0) {
          LABEL_44:
            if (v39 >= 0x18) {
              v29 += 16;
              while (1) {
                if (*((_QWORD*)v29 - 2) == v27) {
                  v29 -= 16;
                  if (v29 != v30) {
                    goto LABEL_59;
                  }
                  goto LABEL_63;
                }
                if (*((_QWORD*)v29 - 1) == v27) {
                  v29 -= 8;
                  goto LABEL_58;
                }
                if (*(_QWORD*)v29 == v27) {
                  goto LABEL_58;
                }
                if (*((_QWORD*)v29 + 1) == v27) {
                  break;
                }
                v41 = v29 + 16;
                v29 += 32;
                if (v41 == v30) {
                  goto LABEL_63;
                }
              }
              v29 += 8;
              if (v29 != v30) {
                goto LABEL_59;
              }
            }
            goto LABEL_63;
          }
          v40 = ((unsigned __int8)((unsigned int)v39 >> 3) + 1) & 3;
          while (*(_QWORD*)v29 != v27) {
            v29 += 8;
            if (--v40 == 0) {
              goto LABEL_44;
            }
          }
        }
      LABEL_58:
        if (v29 != v30) {
        LABEL_59:
          v44 = v30 - (v29 + 8);
          if (v30 != v29 + 8) {
            memmove((__int64)v29, (__int64)(v29 + 8), v30 - (v29 + 8));
          }
          v43 = &v29[v44];
        LABEL_62:
          *(_QWORD*)(v4 + 4336) = v43;
        }
      LABEL_63:
        v45 = *(_QWORD*)(v27 + 568);
        (**(void (***)(__int64))v27)(v27);
        (*(void (**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)v45 + 24LL))(
            v45, v27, 0, 16);
        v46 = *(_QWORD*)(*(_QWORD*)v5 + 280LL);
        if (v46 != 0) {
          SizeOfEPKv =
              nn_mem_StandardAllocator_GetSizeOf(*(_QWORD*)v5 + 56LL, v46);
        }
        else {
          SizeOfEPKv = GameData_21667a8;
        }
        v25 = atomic_load((unsigned __int64*)&GameData_21c6790);
        v10 = SizeOfEPKv >= v25;
        v26 = SizeOfEPKv - v25;
        if (!v10) {
          v26 = 0;
        }
        if (v26 >= v23) {
          goto LABEL_67;
        }
      }
      v42 = &v30[-v33 - 8];
      if (v30 != (char*)(v33 + 8)) {
        memmove(v33, v33 + 8, (unsigned __int64)&v30[-v33 - 8]);
      }
      v43 = &v42[v33];
      goto LABEL_62;
    }
  }
  return result;
}

_QWORD* fs_63d180(unsigned __int64 a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4, char a5, char* a6, char* a7, _BYTE* a8,
                  unsigned int a9)
{
  char v11;
  __int64 v12;
  char v14;
  int v15;
  _WORD* v16;
  char v17;
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
  char* v39;
  char* v40;
  unsigned __int64 v41;
  bool v42;
  char* v43;
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
        *(_BYTE*)v16 = v17;
        v16 = (_WORD*)((char*)v16 + 1);
        v19 = *v18++;
        v17 = v19;
      } while (v19 != 0);
    }
  }
  v20 = fs_63d560(v16, a7, a1, a9);
  if ((v11 & 0x40) != 0) {
    if ((*(_BYTE*)(a2 + 40) & 1) == 0) {
      std___1_locale_locale_1a0a220((__int64)v57_.v57);
      v21 = a2 + 32;
      if (*(_BYTE*)(a2 + 40) == 1) {
        GameRoutine_1a0a240(v21, (__int64)v57_.v57);
      }
      else {
        std___1_locale_locale_1a0a230(v21, (__int64)v57_.v57);
        *(_BYTE*)(a2 + 40) = 1;
      }
      std___1_locale_Destroy_locale((__int64)v57_.v57);
    }
    std___1_locale_locale_1a0a230((__int64)v57_.v57, a2 + 32);
    v22 = std___1_locale_use_facet((__int64)v57_.v57, GameData_212c3d8);
    std___1_locale_Destroy_locale((__int64)v57_.v57);
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
      result = (_QWORD*)GameHr_63b800(v30, v12, (unsigned __int8*)v16, v20,
                                      (unsigned __int8*)v55_.v55, v29, a3, v27);
      if ((v55_.v55[0] & 1) != 0 && v55_.v56 != 0) {
        v31 = result;
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(
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
      nn_mem_StandardAllocator_Free(
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
    v39 = (char*)v16 - v12;
    v53 = a4;
    v40 = (char*)v16 - v12;
    if (v38 == nullptr ||
        ((v41 = v38[1], *v38 - v41 >= (unsigned __int64)v39)
             ? (v40 = (char*)v16 - v12)
             : (v40 = (char*)(*v38 - v41)),
         (v42 = *v38 > v41, v43 = &v39[v41], v42) ? (v44 = v40 == nullptr)
                                                  : (v44 = true),
         v38[1] = v43, !v44)) {
      v50 = *(_QWORD*)(v36 + 16);
      do {
        v51 = *(_QWORD*)(v36 + 8) - v50;
        if (v51 < (unsigned __int64)(v40 + 1)) {
          (*(void (**)(__int64, char*))(v36 + 24))(v36, v40 + 2);
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
          memmove(*(_QWORD*)v36 + v50, v12, v52);
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
    v16 = (_WORD*)v12;
  }
  v48 = v37 << 32;
  v49 = a4 & 0xFFFFFF00FFFFFFFFLL | ((unsigned __int64)v47 << 32);
  if ((a3 & 0xFF00) == 0x700) {
    return (_QWORD*)GameHr_63c1a0((unsigned __int8*)v16, v54, v36,
                                  (unsigned int)a3 & 0xFFFF0700 | v48 | v46,
                                  v49, (__int64 (*)(_QWORD))GameRoutine_63c3f0);
  }
  else {
    return (_QWORD*)GameRoutine_639dc0(
        (__int64)v16, v54 - (_QWORD)v16, v36,
        v48 | (unsigned int)a3 & 0xFFFFFF00 | v46, v49, v54 - (_QWORD)v16);
  }
}

__int64 fs_6416a0(__int64 a1, __int64 a2, __int64* a3, __int64 a4, __int64 a5,
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
  v114 = std___1_locale_use_facet(a4, GameData_212c3d8);
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
        nn_mem_StandardAllocator_Free(
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
  v34 = fs_63b1a0(a1, v23, v111);
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
            memmove(*(_QWORD*)v35 + v60, v61, v64);
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
          memmove(*(_QWORD*)v35 + v101, v13, v103);
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
        memmove(*(_QWORD*)v35 + v104, v76, v106);
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
      memset(*(_QWORD*)v35 + v107, 48, v109);
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
        memmove(*(_QWORD*)v35 + v95, v89, v97);
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
  result = fs_63b1a0(v35, v112, v111);
  if ((v116[0] & 1) != 0 && v116[2] != 0) {
    v99 = result;
    v100 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v100 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v100,
                                  v116[2]);
    return v99;
  }
  return result;
}

void fs_a4c820(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  signed __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _QWORD* v22;
  const char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  const char* v28;
  const char* v29;
  const char* v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  bool v36;
  __int64 v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  _DWORD* v42;
  unsigned int v43;
  unsigned int v44;
  _BYTE* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64** v58;
  __int64* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v81;
  int v82;
  __int64 v83;
  const char* v84;
  int v85;
  struct {
    __int64 v86;
    unsigned __int64 v87;
    char* v88;
  } v86_;
  struct {
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
  } v89_;
  struct {
    _QWORD v93[2];
    char v94;
  } v93_;

  v1 = (_QWORD*)a1[3];
  if (v1 == nullptr) {
    return;
  }
  v2 = 0;
  v3 = nullptr;
  v4 = 0;
  do {
    if ((v1[2] & 1) != 0) {
      fw_text_String_CopyTerminated(&v89_.v89, v1[4], v1[3]);
    }
    else {
      v5 = v1[3];
      v6 = v1[4];
      v89_.v89 = v1[2];
      v89_.v90 = v5;
      v89_.v91 = v6;
    }
    v7 = v1[5];
    v89_.v92 = v7;
    if ((unsigned __int64)v3 < v4) {
      *v3++ = v7;
      v8 = &fw_memory_g_heap_manager;
      if ((v89_.v89 & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_27:
      if (v89_.v91 != 0) {
        if (*(_QWORD*)(*v8 + 200) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v16, v89_.v91);
      }
      goto LABEL_3;
    }
    v9 = (signed __int64)v3 - v2;
    v10 = (v9 >> 3) + 1;
    if (v10 >> 61 != 0) {
      GameRoutine_a52f40();
    }
    if ((__int64)(v4 - v2) >> 2 > v10) {
      v10 = (__int64)(v4 - v2) >> 2;
    }
    if (v4 - v2 >= 0x7FFFFFFFFFFFFFF8LL) {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 != 0) {
      if (v11 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v12 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
    }
    else {
      v12 = 0;
    }
    v4 = v12 + 8 * v11;
    v13 = v12 + v9 - 8 * (v9 >> 3);
    *(_QWORD*)(v12 + v9) = v7;
    v14 = v12 + v9 + 8;
    memcpy(v13, v2, v9);
    if (v2 != 0) {
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v15 = 128;
      }
      else {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v2);
      v2 = v13;
    }
    else {
      v2 = v13;
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    }
    v3 = (_QWORD*)v14;
    if ((v89_.v89 & 1) != 0) {
      goto LABEL_27;
    }
  LABEL_3:
    v1 = (_QWORD*)*v1;
  } while (v1 != nullptr);
  v17 = a1;
  v77 = v2;
  if ((_QWORD*)v2 != v3) {
    v18 = v2;
    while (1) {
      v19 = *(_QWORD*)v18;
      v78 = v18;
      v79 = v3;
      v85 = *(_DWORD*)(*(_QWORD*)v18 + 832LL);
      if (v85 >= 1) {
        break;
      }
    LABEL_34:
      v3 = v79;
      v18 = v78 + 8;
      if ((_QWORD*)(v78 + 8) == v79) {
        goto LABEL_151;
      }
    }
    v20 = 0;
    v81 = *(_QWORD*)v18;
    v84 = (const char*)(v19 + 809);
    while (2) {
      v22 = (_QWORD*)v17[3];
      if ((*(_BYTE*)(v19 + 808) & 1) != 0) {
        v23 = *(const char**)(v19 + 824);
      }
      else {
        v23 = v84;
      }
      if (v22 == nullptr) {
        goto LABEL_41;
      }
      while (1) {
        if ((v22[2] & 1) != 0) {
          fw_text_String_CopyTerminated(&v89_.v89, v22[4], v22[3]);
        }
        else {
          v24 = v22[3];
          v25 = v22[4];
          v89_.v89 = v22[2];
          v89_.v90 = v24;
          v89_.v91 = v25;
        }
        v26 = v22[5];
        v27 = *(_BYTE*)(v26 + 808);
        v28 = *(const char**)(v26 + 824);
        v89_.v92 = v26;
        v29 = (const char*)(v26 + 809);
        if ((v27 & 1) != 0) {
          v30 = v28;
        }
        else {
          v30 = v29;
        }
        v31 = strcmp(v30, v23);
        if ((v89_.v89 & 1) != 0 && v89_.v91 != 0) {
          v32 = v31;
          if (*(_QWORD*)(*v8 + 200) != 0) {
            v33 = 128;
          }
          else {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free(*v8 + v33, v89_.v91);
          v31 = v32;
        }
        if (v31 == 0) {
          break;
        }
        v22 = (_QWORD*)*v22;
        if (v22 == nullptr) {
          goto LABEL_41;
        }
      }
      v34 = v22[5];
      v35 = *(_DWORD*)(v34 + 832);
      v36 = __OFSUB__(v35--, 1);
      *(_DWORD*)(v34 + 832) = v35;
      if (!((v35 < 0) ^ v36 | (v35 == 0))) {
      LABEL_41:
        if (++v20 == v85) {
          goto LABEL_34;
        }
        continue;
      }
      break;
    }
    v37 = *(_QWORD*)(v34 + 800);
    v38 = *(_DWORD*)(v37 + 36);
    if (v38 == -1 ||
        (v39 = **(_DWORD**)(*(_QWORD*)(v37 + 24) + 24LL * v38)) < 1) {
    LABEL_143:
      GameRoutine_634d80(*(_QWORD*)(v34 + 8), v34);
      GameRoutine_a54160((void*)((__int64)v93_.v93), v17 + 1, v22);
      v73 = v93_.v93[0];
      v19 = v81;
      if (v93_.v93[0] != 0) {
        if (v93_.v94 == 1 && (*(_BYTE*)(v93_.v93[0] + 16LL) & 1) != 0 &&
            *(_QWORD*)(v93_.v93[0] + 32LL) != 0) {
          v74 = v93_.v93[0];
          if (*(_QWORD*)(*v8 + 200) != 0) {
            v75 = 128;
          }
          else {
            v75 = 56;
          }
          nn_mem_StandardAllocator_Free(*v8 + v75,
                                        *(_QWORD*)(v93_.v93[0] + 32LL));
          v73 = v74;
        }
        if (*(_QWORD*)(*v8 + 200) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v21, v73);
      }
      goto LABEL_41;
    }
    v40 = 0;
    v82 = **(_DWORD**)(*(_QWORD*)(v37 + 24) + 24LL * v38);
  LABEL_67:
    v41 = *(_QWORD*)(*(_QWORD*)(v34 + 800) + 24LL) +
          24LL * *(int*)(*(_QWORD*)(v34 + 800) + 32LL);
    v42 = *(_DWORD**)v41;
    v43 = *(_DWORD*)(v41 + 12);
    v44 = (8 * *v42) | 4;
    if (v44 >= v43) {
      goto LABEL_66;
    }
    while (1) {
      v45 = (char*)v42 + v44;
      v46 = (unsigned __int8)*v45;
      if (*(_DWORD*)&v45[v46 + 1] == v40) {
        break;
      }
      v44 += v46 + 5;
      if (v44 >= v43) {
        goto LABEL_66;
      }
    }
    if (*v45 != 0) {
      memcpy((__int64)&v89_.v89, (__int64)v42 + v44 + 1, v46);
    }
    *((_BYTE*)&v89_.v89 + v46) = 0;
    v47 = strlen((const char*)&v89_.v89);
    if (v47 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v48 = v47;
    if (v47 >= 0x17) {
      if ((v47 | 7) == 0x17) {
        v50 = 26;
      }
      else {
        v50 = (v47 | 7) + 1;
      }
      v49 = (char*)fw_memory_HeapManager_Allocate(*v8, v50, 16, 0);
      v86_.v87 = v48;
      v86_.v88 = v49;
      v86_.v86 = v50 | 1;
    }
    else {
      v49 = (char*)&v86_.v86 + 1;
      LOBYTE(v86_.v86) = 2 * v47;
      if (v47 == 0) {
      LABEL_82:
        v49[v48] = 0;
        v51 = v17[7];
        if (v51 == 0 || v17[9] == 0) {
          goto LABEL_138;
        }
        if ((v86_.v86 & 1) != 0) {
          v52 = v86_.v88;
        }
        else {
          v52 = (char*)&v86_.v86 + 1;
        }
        if ((v86_.v86 & 1) != 0) {
          v53 = v86_.v87;
        }
        else {
          v53 = (unsigned __int64)(unsigned __int8)v86_.v86 >> 1;
        }
        v83 = (__int64)v52;
        v54 = std___1___hash_memory((__int64)v52, v53);
        v55 = v51 - 1;
        v56 = v54;
        if ((v51 & (v51 - 1)) != 0) {
          v57 = v54;
          if (v54 >= v51) {
            v57 = v54 % v51;
          }
        }
        else {
          v57 = v54 & v55;
        }
        v58 = *(__int64***)(v17[6] + 8 * v57);
        if (v58 == nullptr) {
          goto LABEL_135;
        }
        v59 = *v58;
        if (*v58 == nullptr) {
          goto LABEL_134;
        }
        if ((v51 & v55) == 0) {
          do {
            v64 = v59[1];
            if (v64 == v56) {
              v65 = *((unsigned __int8*)v59 + 16);
              v66 = v59[3];
              if ((v65 & 1) == 0) {
                v66 = v65 >> 1;
              }
              if (v66 == v53) {
                v67 = (v65 & 1) != 0 ? v59[4] : (__int64)v59 + 17;
                if (memcmp(v67, v83, v53) == 0) {
                  v8 = &fw_memory_g_heap_manager;
                LABEL_122:
                  GameRoutine_a54160((void*)((__int64)v93_.v93), a1 + 6, v59);
                  v68 = v93_.v93[0];
                  v39 = v82;
                  if (v93_.v93[0] != 0) {
                    if (v93_.v94 == 1 &&
                        (*(_BYTE*)(v93_.v93[0] + 16LL) & 1) != 0 &&
                        *(_QWORD*)(v93_.v93[0] + 32LL) != 0) {
                      v69 = v93_.v93[0];
                      v70 = 128;
                      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                        v70 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          fw_memory_g_heap_manager + v70,
                          *(_QWORD*)(v93_.v93[0] + 32LL));
                      v68 = v69;
                      v39 = v82;
                    }
                    v71 = 128;
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                      v71 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        fw_memory_g_heap_manager + v71, v68);
                  }
                  v17 = a1;
                  if ((v86_.v86 & 1) != 0) {
                    goto LABEL_139;
                  }
                  goto LABEL_66;
                }
              }
            }
            else if ((v64 & v55) != v57) {
              break;
            }
            v59 = (__int64*)*v59;
          } while (v59 != nullptr);
        LABEL_134:
          v17 = a1;
        LABEL_135:
          v8 = &fw_memory_g_heap_manager;
          goto LABEL_137;
        }
        v8 = &fw_memory_g_heap_manager;
        while (1) {
          v60 = v59[1];
          if (v60 == v56) {
            v61 = *((unsigned __int8*)v59 + 16);
            v62 = v59[3];
            if ((v61 & 1) == 0) {
              v62 = v61 >> 1;
            }
            if (v62 == v53) {
              v63 = (v61 & 1) != 0 ? v59[4] : (__int64)v59 + 17;
              if (memcmp(v63, v83, v53) == 0) {
                goto LABEL_122;
              }
            }
          }
          else {
            if (v60 >= v51) {
              v60 %= v51;
            }
            if (v60 != v57) {
            LABEL_136:
              v17 = a1;
            LABEL_137:
              v39 = v82;
            LABEL_138:
              if ((v86_.v86 & 1) != 0) {
              LABEL_139:
                if (v86_.v88 != nullptr) {
                  v72 = 128;
                  if (*(_QWORD*)(*v8 + 200) == 0) {
                    v72 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v8 + v72, (__int64)v86_.v88);
                }
              }
            LABEL_66:
              if (++v40 == v39) {
                goto LABEL_143;
              }
              goto LABEL_67;
            }
          }
          v59 = (__int64*)*v59;
          if (v59 == nullptr) {
            goto LABEL_136;
          }
        }
      }
    }
    memcpy((__int64)v49, (__int64)&v89_.v89, v48);
    goto LABEL_82;
  }
LABEL_151:
  if (v77 != 0) {
    v76 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v76, v77);
  }
}

__int64 fs_a50960(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  const char* v6;
  int v7;
  __int64 v8;
  const char* v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  int v14;
  struct {
    __int64 v15[2];
    const char* v16;
  } v15_;
  const char* v17;

  result =
      Registration_a50100((__int64*)(a1 + 15176), a2, (__int64)"PartVoice");
  if ((_DWORD)result != 0) {
    return result;
  }
  Manager_a4fd20((void*)(v15_.v15), a1 + 15176, a2, (__int64)"ReferenceJPja",
                 0);
  v5 = *msg_MessageManager_instance__ptr[0];
  if ((v15_.v15[0] & 1) != 0) {
    v6 = v15_.v16;
  }
  else {
    v6 = (char*)v15_.v15 + 1;
  }
  v17 = v6;
  result = (__int64)GameRoutine_a542c0((_QWORD*)(v5 + 14648), &v17);
  if (result != 0) {
    v7 = Registration_a50100((__int64*)(v5 + 15176), (__int64)v6,
                             (__int64)"Section");
    if (v7 != 0) {
      v8 = *(_QWORD*)(snd_g_fileIndex + 4752);
      if (v8 != 0) {
        if (v7 < 0) {
          v12 = -1;
          v13 = 0;
          v14 = 0;
          do {
            if ((v12 & 1) == 0) {
              v14 |= Registration_18d7720(v8, 0, v13);
            }
            v12 >>= 1;
            ++v13;
          } while (v13 != 32);
          result = v14 | (unsigned int)((v14 & 0xFFFFFFFE &
                                         ((v14 & 0xFFFFFFFE) - 1)) != 0);
          if ((_DWORD)result == 0) {
            goto LABEL_14;
          }
        }
        else {
          result =
              Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752), 0, v7);
          if ((_DWORD)result == 0) {
            goto LABEL_14;
          }
        }
      }
    }
    if ((v15_.v15[0] & 1) != 0) {
      v9 = v15_.v16;
    }
    else {
      v9 = (char*)v15_.v15 + 1;
    }
    result = fs_a50960(a1, (__int64)v9);
  }
LABEL_14:
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
    v10 = result;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v15_.v16);
    return v10;
  }
  return result;
}

__int64 fs_a50b20(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  const char* v6;
  int v7;
  __int64 v8;
  const char* v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  int v14;
  struct {
    __int64 v15[2];
    const char* v16;
  } v15_;
  const char* v17;

  result = Registration_a50100((__int64*)(a1 + 15176), a2,
                               (__int64)"PartVoiceEffect");
  if ((_DWORD)result != 0) {
    return result;
  }
  Manager_a4fd20((void*)(v15_.v15), a1 + 15176, a2, (__int64)"ReferenceJPja",
                 0);
  v5 = *msg_MessageManager_instance__ptr[0];
  if ((v15_.v15[0] & 1) != 0) {
    v6 = v15_.v16;
  }
  else {
    v6 = (char*)v15_.v15 + 1;
  }
  v17 = v6;
  result = (__int64)GameRoutine_a542c0((_QWORD*)(v5 + 14648), &v17);
  if (result != 0) {
    v7 = Registration_a50100((__int64*)(v5 + 15176), (__int64)v6,
                             (__int64)"Section");
    if (v7 != 0) {
      v8 = *(_QWORD*)(snd_g_fileIndex + 4752);
      if (v8 != 0) {
        if (v7 < 0) {
          v12 = -1;
          v13 = 0;
          v14 = 0;
          do {
            if ((v12 & 1) == 0) {
              v14 |= Registration_18d7720(v8, 0, v13);
            }
            v12 >>= 1;
            ++v13;
          } while (v13 != 32);
          result = v14 | (unsigned int)((v14 & 0xFFFFFFFE &
                                         ((v14 & 0xFFFFFFFE) - 1)) != 0);
          if ((_DWORD)result == 0) {
            goto LABEL_14;
          }
        }
        else {
          result =
              Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752), 0, v7);
          if ((_DWORD)result == 0) {
            goto LABEL_14;
          }
        }
      }
    }
    if ((v15_.v15[0] & 1) != 0) {
      v9 = v15_.v16;
    }
    else {
      v9 = (char*)v15_.v15 + 1;
    }
    result = fs_a50b20(a1, (__int64)v9);
  }
LABEL_14:
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
    v10 = result;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v15_.v16);
    return v10;
  }
  return result;
}

__int64 fs_a50ce0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  const char* v6;
  int v7;
  __int64 v8;
  const char* v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  int v14;
  struct {
    __int64 v15[2];
    const char* v16;
  } v15_;
  const char* v17;

  result = Registration_a50100((__int64*)(a1 + 15176), a2, (__int64)"LipSync");
  if ((_DWORD)result != 0) {
    return result;
  }
  Manager_a4fd20((void*)(v15_.v15), a1 + 15176, a2, (__int64)"ReferenceJPja",
                 0);
  v5 = *msg_MessageManager_instance__ptr[0];
  if ((v15_.v15[0] & 1) != 0) {
    v6 = v15_.v16;
  }
  else {
    v6 = (char*)v15_.v15 + 1;
  }
  v17 = v6;
  result = (__int64)GameRoutine_a542c0((_QWORD*)(v5 + 14648), &v17);
  if (result != 0) {
    v7 = Registration_a50100((__int64*)(v5 + 15176), (__int64)v6,
                             (__int64)"Section");
    if (v7 != 0) {
      v8 = *(_QWORD*)(snd_g_fileIndex + 4752);
      if (v8 != 0) {
        if (v7 < 0) {
          v12 = -1;
          v13 = 0;
          v14 = 0;
          do {
            if ((v12 & 1) == 0) {
              v14 |= Registration_18d7720(v8, 0, v13);
            }
            v12 >>= 1;
            ++v13;
          } while (v13 != 32);
          result = v14 | (unsigned int)((v14 & 0xFFFFFFFE &
                                         ((v14 & 0xFFFFFFFE) - 1)) != 0);
          if ((_DWORD)result == 0) {
            goto LABEL_14;
          }
        }
        else {
          result =
              Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752), 0, v7);
          if ((_DWORD)result == 0) {
            goto LABEL_14;
          }
        }
      }
    }
    if ((v15_.v15[0] & 1) != 0) {
      v9 = v15_.v16;
    }
    else {
      v9 = (char*)v15_.v15 + 1;
    }
    result = fs_a50ce0(a1, (__int64)v9);
  }
LABEL_14:
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
    v10 = result;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v15_.v16);
    return v10;
  }
  return result;
}

#pragma GCC visibility pop
