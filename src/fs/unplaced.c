#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_WORD* GameRoutine_63c850(_WORD*, unsigned int);
_WORD* fs_63e270_alt1(_WORD*, __int64, unsigned __int64,
                      unsigned __int64) __asm__("fs_63e270");
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a240(_QWORD, _QWORD);
__int64 GameRoutine_608f60(__int64, _BYTE*, __int64, char);
__int64 GameRoutine_631ae0(void);
__int64 GameRoutine_631ae0_alt1(_QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_631ae0");
__int64 GameRoutine_635680(__int64 result, __int64*, __int64);
__int64 GameRoutine_637ec0(__int64, __int64, __int64);
__int64 GameRoutine_638520(__int64**, _QWORD*);
__int64 GameRoutine_639590(__int64 result, char, __int64, int);
__int64 GameRoutine_639910(char*, _QWORD*);
__int64 GameRoutine_639a90(__int64);
__int64 GameRoutine_639be0(char*, unsigned __int64, __int64, __int64,
                           unsigned __int64);
__int64 GameRoutine_639dc0(__int64, unsigned __int64, __int64, __int64,
                           unsigned __int64, __int64);
__int64 GameRoutine_63aac0(__int64, unsigned int, unsigned __int8);
__int64 GameRoutine_63ae50(__int64, unsigned int, unsigned __int8);
__int64 GameRoutine_63c7e0(unsigned int, unsigned int);
__int64 GameRoutine_63d030(__int64);
__int64 GameRoutine_63da40(unsigned __int64, unsigned int);
__int64 GameRoutine_63dc10(__int64, __int64);
__int64 GameRoutine_9b3b00(__int64*);
__int64 Manager_643620(__int64 result, __int64*, __int64, char);
__int64 Manager_644a20(__int64 result, __int64*, __int64, char);
__int64 Registration_17d5210(__int64, _QWORD*);
__int64 fs_63e700_alt1(__int64, unsigned __int64,
                       unsigned int) __asm__("fs_63e700");
__int64 fs_640860_alt1(void) __asm__("fs_640860");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_GetEntryType(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_mem_StandardAllocator_GetAllocatableSize(_QWORD);
__int64 nn_mem_StandardAllocator_GetSizeOf(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_FinalizeReaderWriterLock(_QWORD);
__int64 nn_os_GetCurrentThread(_QWORD);
__int64 nn_os_GetThreadCurrentPriority(_QWORD);
__int64 nn_os_GetThreadPriority(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_StartPeriodicTimerEvent(_QWORD, _QWORD, _QWORD);
__int64 nn_os_WaitTimerEvent(_QWORD);
__int64 std___1___shared_weak_count___release_weak(void);
__int64 std___1_locale_Destroy_locale(_QWORD);
__int64 std___1_locale_locale_1a0a220(_QWORD);
__int64 std___1_locale_locale_1a0a230(_QWORD, _QWORD);
__int64 std___1_locale_use_facet(_QWORD, _QWORD);
__int64 std___1_to_chars_1a0a250(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1_to_chars_1a0a260(_QWORD, _QWORD);
__int64 std___1_to_chars_1a0a270(_QWORD, _QWORD, _QWORD);
__int64 std___1_to_chars_1a0a280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1_to_chars_1a0a290(_QWORD, _QWORD);
__int64 std___1_to_chars_1a0a2a0(_QWORD, _QWORD, _QWORD);
__int64 std___1_to_chars_1a0a2b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1_to_chars_1a0a2c0(_QWORD, _QWORD);
__int64 std___1_to_chars_1a0a2d0(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_634d80(__int64, __int64);
__n128 nn_os_UnlockMutex(_QWORD);
extern _OWORD GameData_1b35e50[40];
extern _QWORD GameData_1b35db0[20];
extern _UNKNOWN GameData_1b33a84;
extern _UNKNOWN GameData_1b351f8;
extern _UNKNOWN GameData_1b35844;
extern __int64 (*fs_File_vtable[])();
extern __int64 GameData_212c3d8;
extern __int64 GameData_21667a8;
extern __int64 GameData_21c6790;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a94a5c[3];
extern char GameData_1ab37f5[9];
extern char GameData_1ae1bd3[37];
extern char GameData_1aed516[17];
extern char GameData_1b35a24[905];
extern unsigned int GameData_1b359fc[10];
unsigned __int64 GameRoutine_18d7a10(__int64, __int64, int);
unsigned __int64 GameRoutine_631dd0(unsigned __int64, unsigned __int64,
                                    unsigned __int64, unsigned __int64);
unsigned __int64 Manager_6326c0(__int64*, __int64);
unsigned __int8* GameRoutine_638380(unsigned __int8* result, unsigned __int8*,
                                    __int64);
unsigned __int8* GameRoutine_638b90(char*, unsigned __int8**, __int16);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_637ae0(void);
void __attribute__((noreturn)) GameRoutine_638240(const char*);
_QWORD* fs_6315e0_alt1(_QWORD* a1) __asm__("fs_6315e0");
__int64 fs_634280(__int64 a1);
__attribute__((swiftcall)) void fs_6354c0(PSEUDO_X8 x8_, __int64 result);
bool fs_636840(_QWORD* a1);
__n128 fs_6373a0_alt1(__int64 a1, __int64 a2, __int64 a3) __asm__("fs_6373a0");
_BYTE* fs_638260(unsigned __int8* a1, unsigned __int8* a2, __int64* a3,
                 __int64* a4);
__int64 fs_639350(unsigned __int8** a1);
void __attribute__((noreturn)) fs_639520(__int64 a1);
void __attribute__((noreturn)) fs_639690(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void fs_639720(PSEUDO_X8 x8_, __int64 a1,
                                          __int64 a2);
__int64 fs_639780(char a1, __int64* a2, __int64 a3, unsigned __int64 a4);
__int64 fs_639fe0(unsigned __int8* a1, unsigned __int8* a2, unsigned __int64 a3,
                  int a4);
__int64 fs_63b1a0_alt1(__int64 a1, unsigned __int64 a2, unsigned int a3,
                       __int64 a4, __int64 a5, __int64 a6) __asm__("fs_63b1a0");
__attribute__((swiftcall)) void fs_63be60(PSEUDO_X8 x8_, __int64 result,
                                          unsigned __int8* a2);
_WORD* fs_63c410(_WORD* a1, __int64 a2, unsigned int a3, unsigned int a4);
__int64 fs_63c580(__int64 a1, __int64 a2, unsigned int a3);
__int64 fs_63c640(__int64 a1, __int64 a2, unsigned int a3);
__int64 fs_63c720(__int64 a1, __int64 a2, unsigned int a3);
__int64 fs_63cc30_alt1(__int64 a1, char a2) __asm__("fs_63cc30");
__int64 fs_63cd90(__int64 a1, int a2);
__int64 fs_63cee0_alt1(__int64 a1, unsigned __int64 a2) __asm__("fs_63cee0");
char* fs_63d560(char* a1, char* a2, unsigned __int64 a3, signed int a4);
__int64 fs_63d7e0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 fs_63d8a0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 fs_63d980(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 fs_63dab0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4);
_WORD* fs_63e140(_WORD* a1, __int64 a2, unsigned __int64 a3,
                 unsigned __int64 a4, signed int a5);
char* fs_63e270(_WORD* a1, __int64 a2, unsigned __int64 a3,
                unsigned __int64 a4);
__int64 fs_63e460(__int64 a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4);
__int64 fs_63e540(__int64 a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4);
__int64 fs_63e620(__int64 a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4);
__int64 fs_63e700_alt2(unsigned __int64 a1, unsigned __int64 a2,
                       unsigned int a3) __asm__("fs_63e700");
char* fs_63e7b0(_WORD* a1, __int64 a2, unsigned __int64 a3,
                unsigned __int64 a4);
__int64 fs_63ec50(__int64 a1, unsigned int a2);
__int64 fs_63eda0(__int64 a1, unsigned __int64 a2);
__int64 fs_63eef0_alt1(__int64 a1, __int64 a2, unsigned __int64 a3,
                       unsigned __int64 a4) __asm__("fs_63eef0");
__attribute__((swiftcall)) void fs_63f8a0(PSEUDO_X8 x8_, unsigned int* a1,
                                          char a2, char a3, char a4,
                                          unsigned __int8 a5);
__attribute__((swiftcall)) void fs_640860(PSEUDO_X8 x8_, __int64 a1,
                                          unsigned int a2, unsigned __int8* a3);
__attribute__((swiftcall)) void fs_641180(PSEUDO_X8 x8_, unsigned int* a1,
                                          char a2, char a3, char a4,
                                          unsigned __int8 a5);
__attribute__((swiftcall)) void fs_641e80(PSEUDO_X8 x8_, __int64 a1,
                                          unsigned int a2, unsigned __int8* a3);
__attribute__((swiftcall)) void fs_6427a0(PSEUDO_X8 x8_, unsigned int* a1,
                                          char a2, char a3, char a4,
                                          unsigned __int8 a5);
__int64 fs_63e700(__int64 a1, unsigned __int64 a2, unsigned int a3);
__int64 GameHr_639910(char*, _QWORD*);
__int64 fs_638520(__int64**, const char**);
__int64 fs_639590(__int64 result, char, __int64, int);
unsigned __int8* fs_638380(unsigned __int8* result, unsigned __int8*, __int64);
__int64 fs_63cc30(__int64 a1, unsigned __int8 a2);
__int64 fs_63cee0(__int64 a1, __int64 a2);
__int64 fs_63eef0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_mem_StandardAllocator_GetAllocatableSize_alt1(__int64) __asm__(
    "nn_mem_StandardAllocator_GetAllocatableSize");
__int64 nn_os_AcquireReadLock_alt1(__int64) __asm__("nn_os_AcquireReadLock");
__int64 nn_os_FinalizeReaderWriterLock_alt1(__int64) __asm__(
    "nn_os_FinalizeReaderWriterLock");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_ReleaseReadLock_alt1(__int64) __asm__("nn_os_ReleaseReadLock");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int64 nn_mem_StandardAllocator_GetSizeOf_alt1(
    __int64, __int64) __asm__("nn_mem_StandardAllocator_GetSizeOf");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_637ae0_alt1() __asm__("GameRoutine_637ae0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void fs_6315e0(_QWORD* a1);
unsigned __int64 fs_6373a0(unsigned __int64 result, __int64 a2, __int64 a3);
__int64 fs_63b1a0(__int64 a1, unsigned __int64 a2, int a3);

void fs_6315e0(_QWORD* a1)
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
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  *a1 = fs_File_vtable;
  v2 = a1[74];
  a1[74] = 0;
  if (v2 != 0) {
    v3 = a1[80];
    v22 = v2;
    if (v3 == 0) {
      goto LABEL_37;
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v22);
  }
  v4 = a1[96];
  if (v4 != 0) {
    v5 = a1[97];
    if (v4 == v5) {
      goto LABEL_11;
    }
    do {
      v6 = *(_QWORD*)(v5 - 8);
      if (v6 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v6);
      }
      v5 -= 16;
    } while (v5 != v4);
    v7 = a1[96];
    a1[97] = v4;
    v4 = v7;
    if (v7 != 0) {
    LABEL_11:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
  }
  nn_os_FinalizeReaderWriterLock_alt1((__int64)(a1 + 87));
  v9 = a1[74];
  a1[74] = 0;
  if (v9 != 0) {
    v10 = a1[80];
    v22 = v9;
    if (v10 != 0) {
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(v10, &v22);
      goto LABEL_17;
    }
  LABEL_37:
    GameRoutine_60a310();
  }
LABEL_17:
  v11 = (_QWORD*)a1[80];
  if (v11 == a1 + 76) {
    v12 = 32;
    goto LABEL_21;
  }
  if (v11 != nullptr) {
    v12 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  }
  v13 = a1[68];
  if (v13 != 0) {
    v14 = a1[69];
    if (v13 == v14) {
      goto LABEL_33;
    }
    v15 = a1[69];
    v16 = fw_memory_g_heap_manager_ptr;
    do {
      v17 = *(_BYTE*)(v15 - 24);
      v15 -= 24;
      if ((v17 & 1) != 0) {
        v18 = *(_QWORD*)(v14 - 8);
        if (v18 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
            v19 = 128;
          }
          else {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v19, v18);
        }
      }
      v14 = v15;
    } while (v15 != v13);
    v20 = a1[68];
    a1[69] = v13;
    v13 = v20;
    if (v20 != 0) {
    LABEL_33:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v13);
    }
  }
}

__int64 fs_634280(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned __int8 v4;
  __int64 v5;
  unsigned __int8 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 SizeOfEPKv;
  unsigned __int64 v35;
  bool v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64* v49;
  unsigned __int64 v50;
  __int64* v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  char* v56;
  char* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  char* v60;
  unsigned __int64 v61;
  __int64* v62;
  char* v63;
  __int64 v64;
  bool v65;
  unsigned __int64 v66;
  __int64 v67;
  char* v68;
  char* v69;
  char* v70;
  signed __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 CurrentThreadEv;
  __int64 ThreadCurrentPriorityEPKNS0_10ThreadTypeE;
  int v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  struct {
    __int64 v82;
    __int64 v83;
  } v82_;
  __int64 v84[3];

  v2 = a1 + 4096;
  result = nn_os_WaitTimerEvent(a1 + 4256);
  v4 = atomic_load((unsigned __int8*)(v2 + 224));
  if ((v4 & 1) == 0) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      nn_os_LockMutex(v2);
      v7 = *(_QWORD*)(a1 + 4088);
      nn_os_UnlockMutex(v2);
      if (v7 == 0) {
        goto LABEL_55;
      }
      nn_os_LockMutex(a1 + 4456);
      nn_os_LockMutex(v2);
      if ((*(_BYTE*)(v2 + 40) & 1) == 0) {
        v8 = *(_QWORD*)(a1 + 4064);
        v9 = *(_QWORD*)(a1 + 4056);
        v10 = ((v8 - v9) << 6) - 1;
        if (v8 == v9) {
          v10 = 0;
        }
        v11 = *(_QWORD*)(a1 + 4088) + *(_QWORD*)(a1 + 4080);
        if (v10 == v11) {
          GameRoutine_9b3b00((__int64*)(a1 + 4048));
          v9 = *(_QWORD*)(a1 + 4056);
          v11 = *(_QWORD*)(a1 + 4088) + *(_QWORD*)(a1 + 4080);
        }
        *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v11 >> 9)) + 8 * (v11 & 0x1FF)) = 0;
      LABEL_13:
        ++*(_QWORD*)(a1 + 4088);
      }
    LABEL_14:
      nn_os_UnlockMutex(v2);
    LABEL_15:
      while ((Registration_17d5210(a1 + 4048, v84) & 1) != 0) {
        v12 = v84[0];
        if (v84[0] == 0) {
          break;
        }
        v13 = *(char**)(a1 + 4328);
        v14 = *(char**)(a1 + 4336);
        v15 = v14 - v13;
        if (v14 != v13) {
          v16 = *(_QWORD*)(v84[0] + 528);
          v17 = v15 >> 3;
          v18 = *(char**)(a1 + 4328);
          do {
            v19 = v17 >> 1;
            v20 = &v18[8 * (v17 >> 1)];
            v22 = *(_QWORD*)v20;
            v21 = v20 + 8;
            v17 += ~(v17 >> 1);
            if (*(_QWORD*)(v22 + 528) < v16) {
              v18 = v21;
            }
            else {
              v17 = v19;
            }
          } while (v17 != 0);
          if (v18 != v14) {
            v23 = *(_QWORD*)v18;
            if (v23 == v84[0] && *(_QWORD*)(v23 + 528) == v16) {
              goto LABEL_44;
            }
          }
          v25 = v15 - 8;
          if ((~(_BYTE)v25 & 0x18) != 0) {
            v26 = ((unsigned __int8)((unsigned int)v25 >> 3) + 1) & 3;
            while (*(_QWORD*)v13 != v84[0]) {
              v13 += 8;
              if (--v26 == 0) {
                goto LABEL_32;
              }
            }
          LABEL_43:
            if (v13 != v14) {
            LABEL_44:
              nn_os_AcquireReadLock(v84[0] + 696);
              v28 = *(_DWORD*)(v12 + 656);
              nn_os_ReleaseReadLock(v12 + 696);
              if ((v28 & 8) == 0) {
                nn_os_LockMutex(v2);
                if ((*(_BYTE*)(v2 + 40) & 1) != 0) {
                  goto LABEL_14;
                }
                v29 = *(_QWORD*)(a1 + 4064);
                v30 = *(_QWORD*)(a1 + 4056);
                v31 = ((v29 - v30) << 6) - 1;
                if (v29 == v30) {
                  v31 = 0;
                }
                v32 = *(_QWORD*)(a1 + 4088) + *(_QWORD*)(a1 + 4080);
                if (v31 == v32) {
                  GameRoutine_9b3b00((__int64*)(a1 + 4048));
                  v30 = *(_QWORD*)(a1 + 4056);
                  v32 = *(_QWORD*)(a1 + 4088) + *(_QWORD*)(a1 + 4080);
                }
                *(_QWORD*)(*(_QWORD*)(v30 + 8 * (v32 >> 9)) +
                           8 * (v32 & 0x1FF)) = v12;
                goto LABEL_13;
              }
              GameRoutine_634d80(a1, v12);
            }
          }
          else {
          LABEL_32:
            if (v25 >= 0x18) {
              v13 += 16;
              while (1) {
                if (*((_QWORD*)v13 - 2) == v84[0]) {
                  if (v13 - 16 != v14) {
                    goto LABEL_44;
                  }
                  goto LABEL_15;
                }
                if (*((_QWORD*)v13 - 1) == v84[0]) {
                  v13 -= 8;
                  goto LABEL_43;
                }
                if (*(_QWORD*)v13 == v84[0]) {
                  goto LABEL_43;
                }
                if (*((_QWORD*)v13 + 1) == v84[0]) {
                  break;
                }
                v27 = v13 + 16;
                v13 += 32;
                if (v27 == v14) {
                  goto LABEL_15;
                }
              }
              if (v13 + 8 != v14) {
                goto LABEL_44;
              }
            }
          }
        }
      }
      nn_os_UnlockMutex(a1 + 4456);
    LABEL_55:
      v33 = *(_QWORD*)(a1 + 4616);
      if (*(_QWORD*)(*(_QWORD*)v5 + 280LL) != 0) {
        SizeOfEPKv = nn_mem_StandardAllocator_GetSizeOf(*(_QWORD*)v5 + 56LL);
      }
      else {
        SizeOfEPKv = GameData_21667a8;
      }
      v35 = atomic_load((unsigned __int64*)&GameData_21c6790);
      v36 = SizeOfEPKv >= v35;
      v37 = SizeOfEPKv - v35;
      if (!v36) {
        v37 = 0;
      }
      if (v33 > v37) {
        nn_os_LockMutex(a1 + 4456);
        v38 = atomic_load((unsigned __int64*)(a1 + 4704));
        v39 = v38 - *(int*)(a1 + 4712);
        fs_6354c0((void*)(v84), a1);
        v82_.v82 = 0;
        v82_.v83 = 0;
        GameRoutine_635680((__int64)v84, &v82_.v82, v39);
        v41 = v84[0];
        v40 = (__int64*)v84[1];
        v42 = *(_QWORD*)(a1 + 4608);
        if (*(_QWORD*)(*(_QWORD*)v5 + 280LL) != 0) {
          v43 = nn_mem_StandardAllocator_GetSizeOf(*(_QWORD*)v5 + 56LL);
        }
        else {
          v43 = GameData_21667a8;
        }
        v44 = atomic_load((unsigned __int64*)&GameData_21c6790);
        v45 = v82_.v82;
        v36 = v43 >= v44;
        v46 = v43 - v44;
        if (!v36) {
          v46 = 0;
        }
        if (v42 <= v46) {
          if (v82_.v82 < 1) {
            goto LABEL_133;
          }
          v40 = (__int64*)(v41 + 8 * v82_.v82);
          Manager_643620(v41, v40, (2 * __clz(v82_.v82)) ^ 0x7E, 1);
          v49 = (unsigned __int64*)(a1 + 4616);
          if ((__int64*)v41 == v40) {
            goto LABEL_133;
          }
        }
        else {
          if (v82_.v82 != 0) {
            Manager_643620(v41, (__int64*)(v41 + 8 * v82_.v82),
                           (2 * __clz(v82_.v82)) ^ 0x7E, 1);
          }
          v47 = v82_.v83;
          if (v45 != v82_.v83) {
            Manager_644a20(v41 + 8 * v45, (__int64*)(v41 + 8 * v82_.v83),
                           (2 * __clz((8 * v82_.v83 - 8 * v45) >> 3)) ^ 0x7E,
                           1);
            v45 = v47;
          }
          v48 = v41 + 8 * v45;
          if ((__int64*)v48 != v40) {
            Manager_644a20(v48, v40,
                           (2 * __clz(((__int64)v40 - v48) >> 3)) ^ 0x7E, 1);
          }
          v49 = (unsigned __int64*)(a1 + 4608);
          if ((__int64*)v41 == v40) {
          LABEL_133:
            if (v41 != 0) {
              v81 = 128;
              if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
                v81 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v81, v41);
            }
            nn_os_UnlockMutex(a1 + 4456);
            goto LABEL_5;
          }
        }
        v50 = *v49;
        v51 = (__int64*)v41;
        while (2) {
          v52 = *v51;
          if (*(_QWORD*)(*(_QWORD*)v5 + 280LL) != 0) {
            v53 = nn_mem_StandardAllocator_GetSizeOf(*(_QWORD*)v5 + 56LL);
          }
          else {
            v53 = GameData_21667a8;
          }
          v54 = atomic_load((unsigned __int64*)&GameData_21c6790);
          v36 = v53 >= v54;
          v55 = v53 - v54;
          if (!v36) {
            v55 = 0;
          }
          if (v50 <= v55) {
            goto LABEL_133;
          }
          v56 = *(char**)(a1 + 4328);
          v57 = *(char**)(a1 + 4336);
          v58 = *(_QWORD*)(v52 + 528);
          if (v57 == v56) {
            goto LABEL_97;
          }
          v59 = (v57 - v56) >> 3;
          v60 = *(char**)(a1 + 4328);
          do {
            v61 = v59 >> 1;
            v62 = (__int64*)&v60[8 * (v59 >> 1)];
            v64 = *v62;
            v63 = (char*)(v62 + 1);
            v59 += ~(v59 >> 1);
            if (*(_QWORD*)(v64 + 528) < v58) {
              v60 = v63;
            }
            else {
              v59 = v61;
            }
          } while (v59 != 0);
          if (v57 == v60 ||
              (*(_QWORD*)v60 == v52
                   ? (v65 = *(_QWORD*)(*(_QWORD*)v60 + 528LL) == v58)
                   : (v65 = false),
               !v65)) {
          LABEL_97:
            if (v57 == v56) {
              goto LABEL_116;
            }
            v66 = v57 - v56 - 8;
            if ((~(_BYTE)v66 & 0x18) != 0) {
              v67 = ((unsigned __int8)((unsigned int)v66 >> 3) + 1) & 3;
              while (*(_QWORD*)v56 != v52) {
                v56 += 8;
                if (--v67 == 0) {
                  goto LABEL_102;
                }
              }
            LABEL_116:
              if (v56 != v57) {
              LABEL_117:
                v71 = v57 - (v56 + 8);
                if (v57 != v56 + 8) {
                  memmove(v56, v56 + 8, v57 - (v56 + 8));
                }
                v70 = &v56[v71];
                goto LABEL_120;
              }
            }
            else {
            LABEL_102:
              if (v66 >= 0x18) {
                v56 += 16;
                while (1) {
                  if (*((_QWORD*)v56 - 2) == v52) {
                    v56 -= 16;
                    if (v56 != v57) {
                      goto LABEL_117;
                    }
                    goto LABEL_121;
                  }
                  if (*((_QWORD*)v56 - 1) == v52) {
                    v56 -= 8;
                    goto LABEL_116;
                  }
                  if (*(_QWORD*)v56 == v52) {
                    goto LABEL_116;
                  }
                  if (*((_QWORD*)v56 + 1) == v52) {
                    break;
                  }
                  v68 = v56 + 16;
                  v56 += 32;
                  if (v68 == v57) {
                    goto LABEL_121;
                  }
                }
                v56 += 8;
                if (v56 != v57) {
                  goto LABEL_117;
                }
              }
            }
          }
          else {
            v69 = (char*)(v57 - (v60 + 8));
            if (v57 != v60 + 8) {
              memmove(v60, v60 + 8, v57 - (v60 + 8));
            }
            v70 = &v69[(_QWORD)v60];
          LABEL_120:
            *(_QWORD*)(a1 + 4336) = v70;
          }
        LABEL_121:
          v72 = *(_QWORD*)(v52 + 568);
          (**(void (***)(__int64))v52)(v52);
          v73 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64))(
              *(_QWORD*)v72 + 24LL))(v72, v52, 0, 16);
          CurrentThreadEv = nn_os_GetCurrentThread(v73);
          ThreadCurrentPriorityEPKNS0_10ThreadTypeE =
              nn_os_GetThreadCurrentPriority(CurrentThreadEv);
          v76 = ThreadCurrentPriorityEPKNS0_10ThreadTypeE;
          v77 =
              nn_os_GetCurrentThread(ThreadCurrentPriorityEPKNS0_10ThreadTypeE);
          if (v76 != (unsigned int)nn_os_GetThreadPriority(v77)) {
            if (*(_QWORD*)(*(_QWORD*)v5 + 280LL) != 0) {
              v78 = nn_mem_StandardAllocator_GetSizeOf(*(_QWORD*)v5 + 56LL);
            }
            else {
              v78 = GameData_21667a8;
            }
            v79 = atomic_load((unsigned __int64*)&GameData_21c6790);
            v36 = v78 >= v79;
            v80 = v78 - v79;
            if (!v36) {
              v80 = 0;
            }
            if (v50 > v80) {
              nn_os_StartPeriodicTimerEvent(a1 + 4256, 20000000,
                                            1000000LL * *(int*)(a1 + 4624));
            }
            goto LABEL_133;
          }
          if (++v51 == v40) {
            goto LABEL_133;
          }
          continue;
        }
      }
    LABEL_5:
      result = nn_os_WaitTimerEvent(a1 + 4256);
      v6 = atomic_load((unsigned __int8*)(v2 + 224));
    } while ((v6 & 1) == 0);
  }
  return result;
}

__attribute__((swiftcall)) void fs_6354c0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  v2 = *(__int64**)(a1 + 4336);
  v3 = *(__int64**)(a1 + 4328);
  a2[1] = 0;
  a2[2] = 0;
  v4 = (char*)v2 - (char*)v3;
  *a2 = 0;
  if (v2 != v3) {
    if ((v4 & 0x8000000000000000LL) == 0) {
      v6 = (__int64*)fw_memory_g_heap_manager_ptr;
      v7 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v2 - (char*)v3, 16, 0);
      *a2 = v7;
      a2[1] = v7;
      a2[2] = v7 + v4;
      while (1) {
        v9 = *v3;
        nn_os_AcquireReadLock_alt1(*v3 + 696);
        v10 = *(_DWORD*)(v9 + 656);
        nn_os_ReleaseReadLock_alt1(v9 + 696);
        if ((v10 & 8) != 0) {
          v11 = atomic_load((unsigned int*)(*v3 + 760));
          if (v11 <= 0) {
            v12 = atomic_load((unsigned int*)(*v3 + 764));
            if (v12 <= 0) {
              v14 = (__int64*)a2[1];
              v13 = a2[2];
              if ((unsigned __int64)v14 < v13) {
                *v14 = *v3;
                v8 = (__int64)(v14 + 1);
              }
              else {
                v15 = *a2;
                v16 = (signed __int64)v14 - *a2;
                v17 = (v16 >> 3) + 1;
                if (v17 >> 61 != 0) {
                  break;
                }
                v18 = v13 - v15;
                if (v18 >> 2 > v17) {
                  v17 = v18 >> 2;
                }
                if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v19 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v19 = v17;
                }
                if (v19 != 0) {
                  if (v19 >> 61 != 0) {
                    GameRoutine_60a210_alt1();
                  }
                  v20 =
                      fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v19, 16, 0);
                }
                else {
                  v20 = 0;
                }
                v21 = v20 + 8 * v19;
                v22 = v20 + v16 - 8 * (v16 >> 3);
                *(_QWORD*)(v20 + v16) = *v3;
                v8 = v20 + v16 + 8;
                memcpy_alt1(v22, v15, v16);
                *a2 = v22;
                a2[2] = v21;
                if (v15 != 0) {
                  v23 = 128;
                  if (*(_QWORD*)(*v6 + 200) == 0) {
                    v23 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v6 + v23, v15);
                }
              }
              a2[1] = v8;
            }
          }
        }
        if (++v3 == v2) {
          return;
        }
      }
    }
    GameRoutine_637ae0_alt1();
  }
}

bool fs_636840(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  _BYTE* v32;
  unsigned __int64 v33;
  _BYTE* v34;
  unsigned __int64 v35;
  _BYTE* v36;
  _BYTE* v37;
  bool v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v53;
  _QWORD v54[32];
  struct {
    _QWORD v55[35];
    __int64 v56;
  } v55_;

  v1 = a1[3];
  v3 = *(_QWORD*)(v1 + 4752);
  if (v3 != 0) {
    GameRoutine_608f60((__int64)v54, (_BYTE*)*a1, a1[1], 0);
    v4 = GameRoutine_18d7a10(v3, (__int64)v54, *((_DWORD*)a1 + 5));
    v5 = v55_.v55[34];
    v6 = v4;
    if (v55_.v55[34] != 0) {
      v7 = v55_.v56;
      v8 = fw_memory_g_heap_manager_ptr;
      if (v55_.v55[34] == v55_.v56) {
        goto LABEL_13;
      }
      v9 = v55_.v56;
      do {
        v10 = *(_BYTE*)(v9 - 24);
        v9 -= 24;
        if ((v10 & 1) != 0) {
          v11 = *(_QWORD*)(v7 - 8);
          if (v11 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11);
          }
        }
        v7 = v9;
      } while (v9 != v5);
      v55_.v56 = v5;
      v5 = v55_.v55[34];
      if (v55_.v55[34] != 0) {
      LABEL_13:
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v5);
      }
    }
    if ((v6 & 1) != 0) {
      v14 = a1[1];
      if (v14 >= 1) {
        v15 = *a1;
        v16 = (_BYTE*)(*a1 + v14);
        v17 = (_BYTE*)*a1;
        do {
          v18 = (_BYTE*)memchr(v17, 58, v14);
          if (v18 == nullptr) {
            break;
          }
          if (*v18 == 58) {
            if (v18 == v16 || &v18[-v15] == (_BYTE*)-1LL) {
              break;
            }
            goto LABEL_25;
          }
          v17 = v18 + 1;
          v14 = v16 - v17;
        } while (v16 - v17 >= 1);
      }
      v28 = HIDWORD(v6);
      v54[0] = (char*)a1 + 20;
      v54[1] = a1;
      v54[2] = a1 + 2;
      if ((v28 & 1) == 0 ||
          (GameRoutine_637ec0((__int64)v54, (__int64)"Contents", 8) & 1) == 0) {
        v29 = *(_QWORD*)(v1 + 4752);
        v30 = *(_QWORD**)(v29 + 64);
        v31 = *(_QWORD**)(v29 + 72);
        while (v30 != v31) {
          v32 = (_BYTE*)*v30;
          if (*(_BYTE*)*v30 == 1 &&
              (((unsigned int)v28 >> *((_DWORD*)v32 + 1)) & 1) != 0) {
            v33 = (unsigned __int8)v32[16];
            v34 = v32 + 17;
            v37 = v32 + 24;
            v35 = *((_QWORD*)v32 + 3);
            v36 = *((_BYTE**)v37 + 1);
            v38 = (v33 & 1) == 0;
            v39 = v33 >> 1;
            v40 = (__int64)(v38 ? v34 : v36);
            v41 = v38 ? v39 : v35;
            if ((GameRoutine_637ec0((__int64)v54, v40, v41) & 1) != 0) {
              return true;
            }
          }
          ++v30;
        }
        return false;
      }
      return true;
    }
    return false;
  }
LABEL_25:
  v19 = *((_DWORD*)a1 + 5);
  if (v19 <= 1) {
    GameRoutine_608f60((__int64)v54, (_BYTE*)*a1, a1[1], 0);
    strcpy((char*)v55_.v55 + strlen(v55_.v55), ".zst");
    if ((unsigned int)nn_fs_GetEntryType(&v53, v55_.v55) != 0 ||
        (v20 = 0, *((_BYTE*)a1 + 16) == 1) && v53 != 1) {
      v20 = 1;
    }
    v21 = v55_.v55[34];
    if (v55_.v55[34] != 0) {
      v22 = v55_.v56;
      if (v55_.v55[34] == v55_.v56) {
        goto LABEL_56;
      }
      v23 = v55_.v56;
      v24 = fw_memory_g_heap_manager_ptr;
      do {
        v25 = *(_BYTE*)(v23 - 24);
        v23 -= 24;
        if ((v25 & 1) != 0) {
          v26 = *(_QWORD*)(v22 - 8);
          if (v26 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
              v27 = 128;
            }
            else {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v27, v26);
          }
        }
        v22 = v23;
      } while (v23 != v21);
      v55_.v56 = v21;
      v21 = v55_.v55[34];
      if (v55_.v55[34] != 0) {
      LABEL_56:
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v21);
      }
    }
    if (v20 == 0) {
      return true;
    }
    v19 = *((_DWORD*)a1 + 5);
  }
  if ((v19 & 0xFFFFFFFD) != 0) {
    return false;
  }
  GameRoutine_608f60((__int64)v54, (_BYTE*)*a1, a1[1], 0);
  if ((unsigned int)nn_fs_GetEntryType(&v53, v55_.v55) != 0 ||
      (v43 = 0, *((_BYTE*)a1 + 16) == 1) && v53 != 1) {
    v43 = 1;
  }
  v44 = v55_.v55[34];
  if (v55_.v55[34] != 0) {
    v45 = v55_.v56;
    if (v55_.v55[34] == v55_.v56) {
      goto LABEL_77;
    }
    v46 = v55_.v56;
    v47 = fw_memory_g_heap_manager_ptr;
    do {
      v48 = *(_BYTE*)(v46 - 24);
      v46 -= 24;
      if ((v48 & 1) != 0) {
        v49 = *(_QWORD*)(v45 - 8);
        if (v49 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v47 + 200LL) != 0) {
            v50 = 128;
          }
          else {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v47 + v50, v49);
        }
      }
      v45 = v46;
    } while (v46 != v44);
    v55_.v56 = v44;
    v44 = v55_.v55[34];
    if (v55_.v55[34] != 0) {
    LABEL_77:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v44);
    }
  }
  return v43 == 0;
}

unsigned __int64 fs_6373a0(unsigned __int64 result, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  unsigned __int64 AllocatableSizeEv;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  char* v44;
  signed __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 SizeOfEPKv;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  char* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64* v64;
  _QWORD* v65;
  __int64 v66;
  bool v67;
  unsigned __int64 v68;
  __int64 v69;
  char* v70;
  char* v71;
  char* v72;
  signed __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  struct {
    unsigned __int64 v78;
    __int64* v79;
  } v78_;
  struct {
    unsigned __int64 v80;
    unsigned __int64 v81;
  } v80_;

  if ((*(_DWORD*)(result + 4584) & 0xFFFFFFFD) != 0) {
    v3 = *(_QWORD*)(result + 4600);
    v4 = result;
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = 208;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 280LL) == 0) {
      v8 = 56;
    }
    AllocatableSizeEv = nn_mem_StandardAllocator_GetAllocatableSize_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    v10 = *(_QWORD*)(*(_QWORD*)v7 + 280LL);
    if (v10 != 0) {
      result =
          nn_mem_StandardAllocator_GetSizeOf_alt1(*(_QWORD*)v7 + 56LL, v10);
    }
    else {
      result = GameData_21667a8;
    }
    v11 = atomic_load((unsigned __int64*)&GameData_21c6790);
    v12 = result >= v11;
    v13 = result - v11;
    if (!v12) {
      v13 = 0;
    }
    v14 = v13 >= AllocatableSizeEv ? AllocatableSizeEv : v13;
    v15 = a3 + a2 + v3;
    if (v14 <= v15) {
      nn_os_LockMutex_alt1(v4 + 4456);
      nn_os_LockMutex_alt1(v4 + 4456);
      v16 = atomic_load((unsigned __int64*)(v4 + 4704));
      v17 = v16 - *(int*)(v4 + 4712);
      fs_6354c0((void*)((__int64*)&v78_.v78), v4);
      v80_.v80 = 0;
      v80_.v81 = 0;
      GameRoutine_635680((__int64)&v78_.v78, (__int64*)&v80_.v80, v17);
      v18 = v78_.v78;
      v19 = v80_.v80;
      if (v80_.v80 != 0) {
        Manager_643620(v78_.v78, (__int64*)(v78_.v78 + 8 * v80_.v80),
                       (2 * __clz(v80_.v80)) ^ 0x7E, 1);
      }
      v20 = v80_.v81;
      if (v19 != v80_.v81) {
        Manager_644a20(
            v18 + 8 * v19, (__int64*)(v18 + 8 * v80_.v81),
            (2 * __clz((__int64)(8 * v80_.v81 - 8 * v19) >> 3)) ^ 0x7E, 1);
        v19 = v20;
      }
      v21 = (__int64*)(v18 + 8 * v19);
      v22 = v78_.v79;
      if (v21 != v78_.v79) {
        Manager_644a20((__int64)v21, v78_.v79,
                       (2 * __clz(v78_.v79 - v21)) ^ 0x7E, 1);
      }
      nn_os_UnlockMutex_alt1(v4 + 4456);
      if ((__int64*)v18 != v22) {
        v23 = v22 - 1;
        if (v18 < (unsigned __int64)(v22 - 1)) {
          v24 = v18 + 8;
          do {
            v25 = *(_QWORD*)(v24 - 8);
            *(_QWORD*)(v24 - 8) = *v23;
            *v23-- = v25;
            v12 = v24 >= (unsigned __int64)v23;
            v24 += 8LL;
          } while (!v12);
        }
      }
      while (1) {
        if ((__int64*)v18 == v22) {
        LABEL_67:
          v46 = 208;
          if (*(_QWORD*)(*(_QWORD*)v7 + 280LL) == 0) {
            v46 = 56;
          }
          v47 = nn_mem_StandardAllocator_GetAllocatableSize_alt1(*(_QWORD*)v7 +
                                                                 v46);
          v48 = *(_QWORD*)(*(_QWORD*)v7 + 280LL);
          if (v48 != 0) {
            SizeOfEPKv = nn_mem_StandardAllocator_GetSizeOf_alt1(
                *(_QWORD*)v7 + 56LL, v48);
          }
          else {
            SizeOfEPKv = GameData_21667a8;
          }
          v50 = atomic_load((unsigned __int64*)&GameData_21c6790);
          v12 = SizeOfEPKv >= v50;
          v51 = SizeOfEPKv - v50;
          if (!v12) {
            v51 = 0;
          }
          if (v51 >= v47) {
            v51 = v47;
          }
          if (v51 > v15) {
          LABEL_77:
            if (v18 != 0) {
              v52 = 128;
              if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
                v52 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v52, v18);
            }
            return nn_os_UnlockMutex_alt1(v4 + 4456);
          }
          while (2) {
            if (v22 == (__int64*)v18) {
              goto LABEL_77;
            }
            v57 = *--v22;
            v56 = v57;
            v58 = *(char**)(v4 + 4328);
            v59 = *(char**)(v4 + 4336);
            v60 = *(_QWORD*)(v57 + 528);
            if (v59 == v58) {
              goto LABEL_103;
            }
            v61 = (v59 - v58) >> 3;
            v62 = *(_QWORD*)(v4 + 4328);
            do {
              v63 = v61 >> 1;
              v64 = (__int64*)(v62 + 8 * (v61 >> 1));
              v66 = *v64;
              v65 = v64 + 1;
              v61 += ~(v61 >> 1);
              if (*(_QWORD*)(v66 + 528) < v60) {
                v62 = (__int64)v65;
              }
              else {
                v61 = v63;
              }
            } while (v61 != 0);
            if (v59 == (char*)v62 ||
                (*(_QWORD*)v62 == v56
                     ? (v67 = *(_QWORD*)(*(_QWORD*)v62 + 528LL) == v60)
                     : (v67 = false),
                 !v67)) {
            LABEL_103:
              if (v59 == v58) {
                goto LABEL_122;
              }
              v68 = v59 - v58 - 8;
              if ((~(_BYTE)v68 & 0x18) != 0) {
                v69 = ((unsigned __int8)((unsigned int)v68 >> 3) + 1) & 3;
                while (*(_QWORD*)v58 != v56) {
                  v58 += 8;
                  if (--v69 == 0) {
                    goto LABEL_108;
                  }
                }
              LABEL_122:
                if (v58 != v59) {
                  v73 = v59 - (v58 + 8);
                  if (v59 != v58 + 8) {
                    memmove_alt1((__int64)v58, (__int64)(v58 + 8),
                                 v59 - (v58 + 8));
                  }
                  v72 = &v58[v73];
                  goto LABEL_126;
                }
              }
              else {
              LABEL_108:
                if (v68 >= 0x18) {
                  v58 += 16;
                  while (1) {
                    if (*((_QWORD*)v58 - 2) == v56) {
                      v58 -= 16;
                      goto LABEL_122;
                    }
                    if (*((_QWORD*)v58 - 1) == v56) {
                      v58 -= 8;
                      goto LABEL_122;
                    }
                    if (*(_QWORD*)v58 == v56) {
                      goto LABEL_122;
                    }
                    if (*((_QWORD*)v58 + 1) == v56) {
                      break;
                    }
                    v70 = v58 + 16;
                    v58 += 32;
                    if (v70 == v59) {
                      goto LABEL_127;
                    }
                  }
                  v58 += 8;
                  goto LABEL_122;
                }
              }
            }
            else {
              v71 = &v59[-v62 - 8];
              if (v59 != (char*)(v62 + 8)) {
                memmove_alt1(v62, v62 + 8, (unsigned __int64)&v59[-v62 - 8]);
              }
              v72 = &v71[v62];
            LABEL_126:
              *(_QWORD*)(v4 + 4336) = v72;
            }
          LABEL_127:
            v74 = *(_QWORD*)(v56 + 568);
            (**(void (***)(__int64))v56)(v56);
            (*(void (**)(__int64, __int64, _QWORD, __int64))(
                *(_QWORD*)v74 + 24LL))(v74, v56, 0, 16);
            if (*(_QWORD*)(*(_QWORD*)v7 + 280LL) != 0) {
              v75 = 208;
            }
            else {
              v75 = 56;
            }
            v76 = nn_mem_StandardAllocator_GetAllocatableSize_alt1(
                *(_QWORD*)v7 + v75);
            v77 = *(_QWORD*)(*(_QWORD*)v7 + 280LL);
            if (v77 != 0) {
              v53 = nn_mem_StandardAllocator_GetSizeOf_alt1(*(_QWORD*)v7 + 56LL,
                                                            v77);
            }
            else {
              v53 = GameData_21667a8;
            }
            v54 = atomic_load((unsigned __int64*)&GameData_21c6790);
            v12 = v53 >= v54;
            v55 = v53 - v54;
            if (!v12) {
              v55 = 0;
            }
            if (v55 >= v76) {
              v55 = v76;
            }
            if (v55 >= v15) {
              goto LABEL_77;
            }
            continue;
          }
        }
        v30 = *--v22;
        v29 = v30;
        v31 = *(char**)(v4 + 4328);
        v32 = *(char**)(v4 + 4336);
        v33 = *(_QWORD*)(v30 + 528);
        v78_.v79 = v22;
        if (v32 != v31) {
          v34 = (v32 - v31) >> 3;
          v35 = (__int64)v31;
          do {
            v36 = v34 >> 1;
            v37 = (__int64*)(v35 + 8 * (v34 >> 1));
            v39 = *v37;
            v38 = v37 + 1;
            v34 += ~(v34 >> 1);
            if (*(_QWORD*)(v39 + 528) < v33) {
              v35 = (__int64)v38;
            }
            else {
              v34 = v36;
            }
          } while (v34 != 0);
          if (v32 != (char*)v35 && *(_QWORD*)v35 == v29 &&
              *(_QWORD*)(*(_QWORD*)v35 + 528LL) == v33) {
            break;
          }
        }
        if (v32 != v31) {
          v41 = v32 - v31 - 8;
          if ((~(_BYTE)v41 & 0x18) == 0) {
          LABEL_48:
            if (v41 >= 0x18) {
              v31 += 16;
              while (1) {
                if (*((_QWORD*)v31 - 2) == v29) {
                  v31 -= 16;
                  if (v31 != v32) {
                    goto LABEL_62;
                  }
                  goto LABEL_28;
                }
                if (*((_QWORD*)v31 - 1) == v29) {
                  v31 -= 8;
                  goto LABEL_61;
                }
                if (*(_QWORD*)v31 == v29) {
                  goto LABEL_61;
                }
                if (*((_QWORD*)v31 + 1) == v29) {
                  break;
                }
                v43 = v31 + 16;
                v31 += 32;
                if (v43 == v32) {
                  goto LABEL_28;
                }
              }
              v31 += 8;
              if (v31 != v32) {
                goto LABEL_62;
              }
            }
            goto LABEL_28;
          }
          v42 = ((unsigned __int8)((unsigned int)v41 >> 3) + 1) & 3;
          while (*(_QWORD*)v31 != v29) {
            v31 += 8;
            if (--v42 == 0) {
              goto LABEL_48;
            }
          }
        }
      LABEL_61:
        if (v31 != v32) {
        LABEL_62:
          v45 = v32 - (v31 + 8);
          if (v32 != v31 + 8) {
            memmove_alt1((__int64)v31, (__int64)(v31 + 8), v32 - (v31 + 8));
          }
          v26 = &v31[v45];
        LABEL_27:
          *(_QWORD*)(v4 + 4336) = v26;
        }
      LABEL_28:
        v27 = *(_QWORD*)(v29 + 576);
        v28 = *(_QWORD*)(v29 + 568);
        (**(void (***)(__int64))v29)(v29);
        (*(void (**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)v28 + 24LL))(
            v28, v29, 0, 16);
        v14 += (unsigned __int64)(float)((float)v27 * 0x1.e666660000000p-1f);
        if (v14 >= v15) {
          goto LABEL_67;
        }
      }
      v44 = &v32[-v35 - 8];
      if (v32 != (char*)(v35 + 8)) {
        memmove_alt1(v35, v35 + 8, (unsigned __int64)&v32[-v35 - 8]);
      }
      v26 = &v44[v35];
      goto LABEL_27;
    }
  }
  return result;
}

_BYTE* fs_638260(unsigned __int8* a1, unsigned __int8* a2, __int64* a3,
                 __int64* a4)
{
  unsigned __int8* v7;
  unsigned int v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  const char* v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  const char* v18;
  _BYTE* v19;
  struct {
    const char* v21[2];
    __int64 v22;
    __int64 v23;
  } v21_;
  __int64* v24[3];
  bool v25;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = fs_638380(a1, a2, (__int64)a3),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2 != v7) {
    v9 = *v7;
    v25 = v9 == 58;
    if (v9 == 125) {
      goto LABEL_5;
    }
    if (v9 == 58) {
      ++v7;
    LABEL_5:
      *a3 = (__int64)v7;
      v24[0] = a3;
      v24[1] = a4;
      v10 = a4[1];
      v24[2] = (__int64*)&v25;
      if (v8 >= v10) {
        LOBYTE(v21_.v22) = 0;
      }
      else if (v10 > 0xC) {
        v14 = a4[2] + 32LL * v8;
        v16 = *(_QWORD*)(v14 + 16);
        v15 = *(_QWORD*)(v14 + 24);
        v17 = *(const char**)v14;
        v18 = *(const char**)(a4[2] + 32LL * v8 + 8);
        v21_.v22 = v16;
        v21_.v23 = v15;
        v21_.v21[0] = v17;
        v21_.v21[1] = v18;
      }
      else {
        v11 = a4[2] + 16LL * v8;
        v13 = *(const char**)v11;
        v12 = *(const char**)(v11 + 8);
        LOBYTE(v21_.v22) =
            ((unsigned __int64)a4[3] >> (5 * (unsigned __int8)v8)) & 0x1F;
        v21_.v21[0] = v13;
        v21_.v21[1] = v12;
      }
      fs_638520(v24, v21_.v21),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v19 = (_BYTE*)*a3;
      if ((unsigned __int8*)*a3 == a2 || *v19 != 125) {
        GameRoutine_638240("The replacement field misses a terminating '}'"),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      return v19 + 1;
    }
  }
  GameRoutine_638240("The argument index should end with a ':' or a '}'"),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

__int64 fs_639350(unsigned __int8** a1)
{
  unsigned __int8* v1;
  int v2;
  unsigned __int8* v3;
  unsigned __int8 v4;
  unsigned int v5;
  unsigned __int8 v7;
  unsigned int v8;
  unsigned __int8 v9;
  unsigned __int8 v10;
  unsigned __int8 v11;
  unsigned int v12;

  v1 = *a1;
  v2 = __clz(~(**a1 << 24));
  if (v2 > 2) {
    if (v2 == 3) {
      if (a1[1] - v1 >= 3 && (char)v1[1] <= -65 && (char)v1[2] <= -65) {
        *a1 = v1 + 1;
        v10 = *v1;
        *a1 = v1 + 2;
        v11 = v1[1];
        *a1 = v1 + 3;
        v12 = ((v10 & 0xF) << 12) | ((v11 & 0x3F) << 6);
        if (v12 >= 0x800 && (v12 & 0xF800) != 0xD800) {
          return v12 | v1[2] & 0x3F;
        }
        return 2147549181LL;
      }
    }
    else if (v2 == 4 && a1[1] - v1 >= 4 && (char)v1[1] <= -65 &&
             (char)v1[2] <= -65 && (char)v1[3] <= -65) {
      *a1 = v1 + 1;
      v7 = *v1;
      *a1 = v1 + 2;
      v8 = ((v7 & 7) << 12) | ((v1[1] & 0x3F) << 6);
      *a1 = v1 + 3;
      v9 = v1[2];
      *a1 = v1 + 4;
      if (v8 >= 0x400 && v8 >> 10 < 0x11) {
        return v1[3] & 0x3F | ((v8 | v9 & 0x3F) << 6);
      }
      return 2147549181LL;
    }
  LABEL_24:
    *a1 = v1 + 1;
    return 2147549181LL;
  }
  if (v2 == 0) {
    *a1 = v1 + 1;
    return *v1;
  }
  if (v2 != 2) {
    goto LABEL_24;
  }
  if (a1[1] - v1 < 2) {
    goto LABEL_24;
  }
  v3 = v1 + 1;
  if ((char)v1[1] > -65) {
    goto LABEL_24;
  }
  *a1 = v3;
  v4 = *v1;
  *a1 = v1 + 2;
  v5 = v4 & 0x1F;
  if (v5 < 2) {
    return 2147549181LL;
  }
  else {
    return *v3 & 0x3F | (v5 << 6);
  }
}

void __attribute__((noreturn)) fs_639520(__int64 a1)
{
  const char* v2;
  __int64 v3[3];
  _QWORD v4[3];
  _QWORD v5[3];

  Manager_6326c0(v3, (__int64)"The type option contains an invalid value for ");
  fs_639720((void*)(v4), (__int64)v3, a1);
  fs_639720((void*)(v5), (__int64)v4, (__int64)" formatting argument");
  if ((v5[0] & 1) != 0) {
    v2 = (const char*)v5[2];
  }
  else {
    v2 = (char*)v5 + 1;
  }
  GameRoutine_638240(v2);
}

void __attribute__((noreturn)) fs_639690(__int64 a1, __int64 a2)
{
  const char* v4;
  __int64 v5[3];
  _QWORD v6[3];
  _QWORD v7[3];
  _QWORD v8[3];
  _QWORD v9[3];

  Manager_6326c0(v5, (__int64)"The format specifier for ");
  fs_639720((void*)(v6), (__int64)v5, a1);
  fs_639720((void*)(v7), (__int64)v6, (__int64)" does not allow the ");
  fs_639720((void*)(v8), (__int64)v7, a2);
  fs_639720((void*)(v9), (__int64)v8, (__int64)" option");
  if ((v9[0] & 1) != 0) {
    v4 = (const char*)v9[2];
  }
  else {
    v4 = (char*)v9 + 1;
  }
  GameRoutine_638240(v4);
}

__attribute__((swiftcall)) void fs_639720(PSEUDO_X8 x8_, __int64 a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64* result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v6 = strlen(a2);
  result = (__int64*)GameRoutine_1a09ce0(a1, a2, v6);
  v8 = *result;
  v9 = result[1];
  *result = 0;
  result[1] = 0;
  *a3 = v8;
  a3[1] = v9;
  v10 = result[2];
  result[2] = 0;
  a3[2] = v10;
  {
    result;
    return;
  }
}

__int64 fs_639780(char a1, __int64* a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8;
  __int64 v9;
  const char* v10;
  __int64 result;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    char* v20;
  } v19_;

  if ((a3 & 0x40) != 0) {
    if ((a2[5] & 1) == 0) {
      std___1_locale_locale_1a0a220(v19_.v19);
      v12 = a2 + 4;
      if (*((_BYTE*)a2 + 40) == 1) {
        GameRoutine_1a0a240(v12, v19_.v19);
      }
      else {
        std___1_locale_locale_1a0a230(v12, v19_.v19);
        *((_BYTE*)a2 + 40) = 1;
      }
      std___1_locale_Destroy_locale(v19_.v19);
    }
    std___1_locale_locale_1a0a230(v19_.v19, a2 + 4);
    v13 = (_QWORD*)std___1_locale_use_facet(v19_.v19, GameData_212c3d8);
    std___1_locale_Destroy_locale(v19_.v19);
    v14 = 56;
    if ((a1 & 1) != 0) {
      v14 = 48;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v13 + v14))(
        (void*)(v19_.v19), v13);
    if ((v19_.v19[0] & 1) != 0) {
      v15 = v19_.v20;
    }
    else {
      v15 = (char*)v19_.v19 + 1;
    }
    if ((v19_.v19[0] & 1) != 0) {
      v16 = v19_.v19[1];
    }
    else {
      v16 = (unsigned __int64)LOBYTE(v19_.v19[0]) >> 1;
    }
    result = GameRoutine_639be0(v15, v16, *a2, a3, a4);
    if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
      v17 = result;
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v19_.v20);
      return v17;
    }
  }
  else {
    v8 = *a2;
    if ((a1 & 1) != 0) {
      v9 = 4;
    }
    else {
      v9 = 5;
    }
    if ((a1 & 1) != 0) {
      v10 = "true";
    }
    else {
      v10 = "false";
    }
    return GameRoutine_639dc0((__int64)v10, v9, v8, a3, a4, v9);
  }
  return result;
}

__int64 fs_639fe0(unsigned __int8* a1, unsigned __int8* a2, unsigned __int64 a3,
                  int a4)
{
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned __int64 v10;
  _DWORD* v11;
  unsigned __int64 v12;
  unsigned int* v13;
  _DWORD* v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int64 v18;
  _DWORD* v19;
  unsigned __int64 v20;
  unsigned int* v21;
  _DWORD* v22;
  unsigned int v23;
  unsigned int v24;
  bool v25;
  int v26;
  unsigned __int64 v27;
  unsigned __int8 v28;
  unsigned __int8* v30;
  unsigned __int8* v31;
  unsigned int v32;
  int v33;
  unsigned __int8 v34;
  int v35;
  unsigned __int8 v36;
  int v37;
  unsigned int v38;
  unsigned __int8 v39;
  unsigned __int8 v40;
  unsigned __int8 v41;
  unsigned int v42;
  unsigned __int8 v43;
  unsigned int v44;
  unsigned int v45;
  unsigned __int64 v46;
  _DWORD* v47;
  unsigned __int64 v48;
  unsigned int* v49;
  _DWORD* v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  char v55;
  int v56;
  _DWORD* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned int* v60;
  _DWORD* v61;
  unsigned int v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned int* v65;
  _DWORD* v66;
  unsigned int v67;
  unsigned int v68;
  int v70;
  int v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned int* v74;
  unsigned __int64 v75;
  unsigned int* v76;
  unsigned int* v77;
  unsigned int v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned int v82;
  __int64 v83;
  unsigned __int64 v84;
  _DWORD* v85;
  unsigned __int64 v86;
  unsigned int* v87;
  _DWORD* v88;
  unsigned int v89;
  unsigned __int64 v90;
  _DWORD* v91;
  unsigned __int64 v92;
  unsigned int* v93;
  _DWORD* v94;
  unsigned int v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  _DWORD* v100;
  unsigned __int64 v101;
  unsigned int* v102;
  _DWORD* v103;
  unsigned int v104;
  unsigned __int64 v105;
  _BOOL4 v107;
  _BOOL4 v108;
  unsigned __int8* v109;
  unsigned __int64 v110;
  struct {
    unsigned __int8* v112;
    unsigned __int8* v113;
  } v112_;
  struct {
    int v114;
    char v115;
    char gap45_[3];
    __int64 v116;
    int v117;
  } v114_;

  v112_.v112 = a1;
  v112_.v113 = a2;
  v7 = fs_639350(&v112_.v112);
  v8 = v7 & 0x7FFFFFFF;
  v114_.v114 = v7 & 0x7FFFFFFF;
  v9 = (v7 << 11) | 0x7FF;
  v10 = 1501;
  v11 = &GameData_1b33a84;
  do {
    v12 = v10 >> 1;
    v13 = &v11[v10 >> 1];
    v15 = *v13;
    v14 = v13 + 1;
    v10 += ~(v10 >> 1);
    if (v9 >= v15) {
      v11 = v14;
    }
    else {
      v10 = v12;
    }
  } while (v10 != 0);
  if (v11 == (_DWORD*)&GameData_1b33a84 ||
      (v16 = *(v11 - 1), v8 > ((v16 >> 4) & 0x7F) + (v16 >> 11))) {
    LOBYTE(v17) = 16;
    v114_.v116 = 0;
    v114_.v117 = 0;
    v114_.v115 = 16;
  }
  else {
    v17 = v16 & 0xF;
    v114_.v116 = 0;
    v114_.v117 = 0;
    v114_.v115 = v16 & 0xF;
    if (v17 == 9) {
      v26 = 3;
      goto LABEL_24;
    }
    if (v17 == 3) {
      v26 = 2;
      goto LABEL_24;
    }
  }
  v18 = 403;
  v19 = &GameData_1b351f8;
  do {
    v20 = v18 >> 1;
    v21 = &v19[v18 >> 1];
    v23 = *v21;
    v22 = v21 + 1;
    v18 += ~(v18 >> 1);
    if (v9 >= v23) {
      v19 = v22;
    }
    else {
      v18 = v20;
    }
  } while (v18 != 0);
  if (v19 != (_DWORD*)&GameData_1b351f8) {
    v24 = *(v19 - 1);
    v25 = (v24 & 3) != 0 || v8 > ((v24 >> 2) & 0x1FF) + (v24 >> 11);
    if (!v25) {
      v26 = 1;
    LABEL_24:
      LODWORD(v114_.v116) = v26;
    }
  }
  if (a1 == a2) {
    return 0;
  }
  if (v112_.v112 != v112_.v113) {
    v109 = a2;
    v110 = a3;
    v27 = 0;
    v28 = v17;
    while (1) {
      v31 = v112_.v112;
      v30 = v112_.v113;
      v32 = v8;
      if (v112_.v112 == v112_.v113) {
        goto LABEL_154;
      }
      while (1) {
        v34 = v17;
        v35 = __clz(~(*v31 << 24));
        if (v35 > 2) {
          if (v35 == 3) {
            if (v30 - v31 < 3 || (char)v31[1] > -65 || (char)v31[2] > -65) {
            LABEL_62:
              v112_.v112 = v31 + 1;
            LABEL_63:
              v37 = -2147418115;
              goto LABEL_64;
            }
            v112_.v112 = v31 + 1;
            v43 = *v31;
            v112_.v112 = v31 + 2;
            v44 = ((v43 & 0xF) << 12) | ((v31[1] & 0x3F) << 6);
            v112_.v112 = v31 + 3;
            v37 = -2147418115;
            if (v44 >= 0x800 && (v44 & 0xF800) != 0xD800) {
              v37 = v44 | v31[2] & 0x3F;
            }
          }
          else {
            if (v35 != 4 || v30 - v31 < 4 || (char)v31[1] > -65 ||
                (char)v31[2] > -65 || (char)v31[3] > -65) {
              goto LABEL_62;
            }
            v112_.v112 = v31 + 1;
            v39 = *v31;
            v112_.v112 = v31 + 2;
            v40 = v31[1];
            v112_.v112 = v31 + 3;
            v41 = v31[2];
            v42 = ((v39 & 7) << 12) | ((v40 & 0x3F) << 6);
            v112_.v112 = v31 + 4;
            v37 = -2147418115;
            if (v42 >= 0x400) {
              if (v42 >> 10 >= 0x11) {
                goto LABEL_63;
              }
              v37 = v31[3] & 0x3F | ((v42 | v41 & 0x3F) << 6);
            }
          }
        }
        else if (v35 != 0) {
          if (v35 != 2 || v30 - v31 < 2 || (char)v31[1] > -65) {
            goto LABEL_62;
          }
          v112_.v112 = v31 + 1;
          v36 = *v31;
          v112_.v112 = v31 + 2;
          v37 = -2147418115;
          v38 = v36 & 0x1F;
          if (v38 >= 2) {
            v37 = v31[1] & 0x3F | (v38 << 6);
          }
        }
        else {
          v112_.v112 = v31 + 1;
          v37 = *v31;
        }
      LABEL_64:
        v45 = (v37 << 11) | 0x7FF;
        v46 = 1501;
        v47 = &GameData_1b33a84;
        do {
          v48 = v46 >> 1;
          v49 = &v47[v46 >> 1];
          v51 = *v49;
          v50 = v49 + 1;
          v46 += ~(v46 >> 1);
          if (v45 >= v51) {
            v47 = v50;
          }
          else {
            v46 = v48;
          }
        } while (v46 != 0);
        v8 = v37 & 0x7FFFFFFF;
        if (v47 == (_DWORD*)&GameData_1b33a84) {
          v17 = 16;
        }
        else {
          v52 = *(v47 - 1);
          v53 = ((v52 >> 4) & 0x7F) + (v52 >> 11);
          v54 = v52 & 0xF;
          v17 = v8 <= v53 ? v54 : 16;
        }
        if ((int)v114_.v116 > 1) {
          break;
        }
        if ((_DWORD)v114_.v116 == 0) {
          if (v34 == 0 && v17 == 5) {
            goto LABEL_37;
          }
          if (v34 <= 5u && ((1 << v34) & 0x23) != 0 ||
              v17 <= 5 && ((1 << v17) & 0x23) != 0) {
            goto LABEL_152;
          }
          if (v34 > 6u) {
            if (v34 != 7) {
              if (v34 != 12) {
                goto LABEL_106;
              }
            LABEL_104:
              if (v17 - 11 < 2) {
                goto LABEL_37;
              }
              if (v34 != 7) {
              LABEL_106:
                if ((v34 != 11 || v17 != 11) &&
                    (v17 > 0xD || ((1 << v17) & 0x2404) == 0) && v34 != 8) {
                LABEL_135:
                  v57 = &GameData_1b351f8;
                  v63 = 403;
                  do {
                    v64 = v63 >> 1;
                    v65 = &v57[v63 >> 1];
                    v67 = *v65;
                    v66 = v65 + 1;
                    v63 += ~(v63 >> 1);
                    if (v45 >= v67) {
                      v57 = v66;
                    }
                    else {
                      v63 = v64;
                    }
                  } while (v63 != 0);
                  goto LABEL_140;
                }
                goto LABEL_37;
              }
            }
            if (v17 > 0xD) {
              goto LABEL_135;
            }
            v33 = 11268;
          }
          else {
            if (v34 != 4) {
              if (v34 != 6) {
                goto LABEL_106;
              }
              goto LABEL_104;
            }
            if (v17 > 0xD) {
              goto LABEL_135;
            }
            v33 = 13524;
          }
          if (((1 << v17) & v33) == 0) {
            goto LABEL_135;
          }
          goto LABEL_37;
        }
        v55 = GameRoutine_63aac0((__int64)&v114_.v114, v8, v17);
      LABEL_89:
        v114_.v114 = v8;
        v114_.v115 = v17;
        if ((v55 & 1) != 0) {
          goto LABEL_153;
        }
      LABEL_38:
        v31 = v112_.v112;
        v30 = v112_.v113;
        v28 = v17;
        if (v112_.v112 == v112_.v113) {
          goto LABEL_154;
        }
      }
      if ((_DWORD)v114_.v116 == 2) {
        v55 = GameRoutine_63ae50((__int64)&v114_.v114, v8, v17);
        goto LABEL_89;
      }
      LODWORD(v114_.v116) = 0;
      if (v17 == 9 || v28 == 0 && v17 == 5) {
        goto LABEL_37;
      }
      if (v28 <= 5u && ((1 << v28) & 0x23) != 0 ||
          v17 <= 5 && ((1 << v17) & 0x23) != 0) {
        goto LABEL_152;
      }
      if (v28 > 6u) {
        if (v28 == 7) {
          goto LABEL_116;
        }
        if (v28 != 12) {
          goto LABEL_120;
        }
      LABEL_114:
        if (v17 - 11 >= 2) {
          if (v28 != 7) {
            goto LABEL_120;
          }
        LABEL_116:
          if (v17 > 0xD) {
            goto LABEL_129;
          }
          v56 = 11268;
        LABEL_128:
          if (((1 << v17) & v56) == 0) {
            goto LABEL_129;
          }
        }
      LABEL_37:
        v114_.v114 = v8;
        v114_.v115 = v17;
        goto LABEL_38;
      }
      if (v28 == 4) {
        if (v17 > 0xD) {
          goto LABEL_129;
        }
        v56 = 13524;
        goto LABEL_128;
      }
      if (v28 == 6) {
        goto LABEL_114;
      }
    LABEL_120:
      if (v28 == 11 && v17 == 11 || v17 <= 0xD && ((1 << v17) & 0x2404) != 0 ||
          v28 == 8) {
        goto LABEL_37;
      }
    LABEL_129:
      v57 = &GameData_1b351f8;
      v58 = 403;
      do {
        v59 = v58 >> 1;
        v60 = &v57[v58 >> 1];
        v62 = *v60;
        v61 = v60 + 1;
        v58 += ~(v58 >> 1);
        if (v45 >= v62) {
          v57 = v61;
        }
        else {
          v58 = v59;
        }
      } while (v58 != 0);
    LABEL_140:
      if (v57 != (_DWORD*)&GameData_1b351f8) {
        v68 = *(v57 - 1);
        if ((v68 & 3) == 0 && v8 <= ((v68 >> 2) & 0x1FF) + (v68 >> 11)) {
          v71 = 1;
          v72 = 16;
          goto LABEL_150;
        }
      }
      if (v17 == 3) {
        v71 = 2;
        v72 = 12;
      LABEL_150:
        v70 = 0;
        LODWORD(v114_.v116) = v71;
      LABEL_151:
        *(int*)((char*)&v114_.v114 + v72) = v70;
      }
      else if (v17 == 9) {
        v70 = 3;
        v72 = 8;
        goto LABEL_151;
      }
    LABEL_152:
      v114_.v114 = v8;
      v114_.v115 = v17;
    LABEL_153:
      v28 = v17;
    LABEL_154:
      if (v32 - 262142 < 0xFFFC1102) {
        goto LABEL_164;
      }
      v73 = 110;
      v74 = (unsigned int*)&GameData_1b35844;
      do {
        v75 = v73 >> 1;
        v76 = &v74[v73 >> 1];
        v78 = *v76;
        v77 = v76 + 1;
        v73 += ~(v73 >> 1);
        if (((v32 << 14) | 0x3FFF) >= v78) {
          v74 = v77;
        }
        else {
          v73 = v75;
        }
      } while (v73 != 0);
      if (v74 == (unsigned int*)&GameData_1b35844) {
      LABEL_164:
        v79 = 1;
      }
      else {
        v25 = v32 > (*(v74 - 1) & 0x3FFF) + (*(v74 - 1) >> 14);
        v79 = 1;
        if (!v25) {
          v79 = 2;
        }
      }
      v80 = v79 + v27;
      if (a4 != 0 || v80 <= v110) {
        v27 = v80;
        if (v31 != v109 && v80 <= v110) {
          continue;
        }
      }
      return v27;
    }
  }
  if (v8 - 262142 >= 0xFFFC1102) {
    v82 = (v7 << 14) | 0x3FFF;
    if (v112_.v112 == a2) {
      v90 = 110;
      v91 = &GameData_1b35844;
      do {
        v92 = v90 >> 1;
        v93 = &v91[v90 >> 1];
        v95 = *v93;
        v94 = v93 + 1;
        v90 += ~(v90 >> 1);
        if (v82 >= v95) {
          v91 = v94;
        }
        else {
          v90 = v92;
        }
      } while (v90 != 0);
      if (v91 == (_DWORD*)&GameData_1b35844) {
        v96 = 1;
      }
      else {
        v96 = 1;
        if (v8 <= (*(v91 - 1) & 0x3FFFu) + (*(v91 - 1) >> 14)) {
          v96 = 2;
        }
      }
      v107 = a4 == 0;
      v108 = v96 > a3;
      if (v107 && v108) {
        return 0;
      }
      else {
        return v96;
      }
    }
    else if (a4 != 0) {
      v27 = 0;
      do {
        v84 = 110;
        v85 = &GameData_1b35844;
        do {
          v86 = v84 >> 1;
          v87 = &v85[v84 >> 1];
          v89 = *v87;
          v88 = v87 + 1;
          v84 += ~(v84 >> 1);
          if (v82 >= v89) {
            v85 = v88;
          }
          else {
            v84 = v86;
          }
        } while (v84 != 0);
        if (v85 == (_DWORD*)&GameData_1b35844) {
          v83 = 1;
        }
        else if (v8 > (*(v85 - 1) & 0x3FFFu) + (*(v85 - 1) >> 14)) {
          v83 = 1;
        }
        else {
          v83 = 2;
        }
        v27 += v83;
      } while (v27 <= a3);
    }
    else {
      v97 = 0;
      do {
        v99 = 110;
        v27 = v97;
        v100 = &GameData_1b35844;
        do {
          v101 = v99 >> 1;
          v102 = &v100[v99 >> 1];
          v104 = *v102;
          v103 = v102 + 1;
          v99 += ~(v99 >> 1);
          if (v82 >= v104) {
            v100 = v103;
          }
          else {
            v99 = v101;
          }
        } while (v99 != 0);
        if (v100 == (_DWORD*)&GameData_1b35844) {
          v98 = 1;
        }
        else if (v8 > (*(v100 - 1) & 0x3FFFu) + (*(v100 - 1) >> 14)) {
          v98 = 1;
        }
        else {
          v98 = 2;
        }
        v97 = v98 + v27;
      } while (v97 <= a3);
    }
  }
  else {
    v27 = a3 != 0 || a4 != 0;
    if ((a3 != 0 || a4 != 0) && v112_.v112 != a2) {
      if (a4 != 0) {
        if (a3 + 1 > 1) {
          return a3 + 1;
        }
        else {
          return 1;
        }
      }
      else {
        v27 = 0;
        do {
          v105 = v27 + 2;
        } while (++v27 <= a3 && v105 <= a3);
      }
    }
  }
  return v27;
}

__int64 fs_63b1a0(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int* v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  int v26;

  v4 = a2;
  v26 = a3;
  v6 = __clz(~(a3 << 24));
  if ((_DWORD)v6 != 0) {
    if (a2 != 0) {
      v7 = 0;
      do {
        v8 = *(unsigned __int64**)(a1 + 32);
        v9 = v6;
        if (v8 == nullptr ||
            ((v11 = *v8, v10 = v8[1], *v8 - v10 >= v6) ? (v9 = v6)
                                                       : (v9 = *v8 - v10),
             v8[1] = v10 + v6, v11 > v10)) {
          v12 = *(_QWORD*)(a1 + 16);
          v13 = &v26;
          do {
            v15 = *(_QWORD*)(a1 + 8) - v12;
            if (v15 < v9 + 1) {
              (*(void (**)(__int64, unsigned __int64))(a1 + 24))(a1, v9 + 2);
              v12 = *(_QWORD*)(a1 + 16);
              v15 = *(_QWORD*)(a1 + 8) - v12;
            }
            if (v15 >= v9) {
              v16 = v9;
            }
            else {
              v16 = v15;
            }
            if (v16 != 0) {
              memcpy_alt1(*(_QWORD*)a1 + v12, (__int64)v13, v16);
              v12 = *(_QWORD*)(a1 + 16);
            }
            v12 += v16;
            v13 = (int*)((char*)v13 + v16);
            *(_QWORD*)(a1 + 16) = v12;
            v14 = v9 > v15;
            v9 -= v16;
          } while (v14);
        }
        ++v7;
      } while (v7 != v4);
    }
  }
  else {
    v17 = *(unsigned __int64**)(a1 + 32);
    if (v17 == nullptr) {
      goto LABEL_29;
    }
    v19 = *v17;
    v18 = v17[1];
    v20 = *v17 - v18;
    v17[1] = v18 + a2;
    if (v20 < a2) {
      v4 = v20;
    }
    if (v19 > v18 && v4 != 0) {
    LABEL_29:
      v23 = *(_QWORD*)(a1 + 16);
      do {
        v24 = *(_QWORD*)(a1 + 8) - v23;
        if (v24 < v4 + 1) {
          (*(void (**)(__int64, unsigned __int64))(a1 + 24))(a1, v4 + 2);
          v23 = *(_QWORD*)(a1 + 16);
          v24 = *(_QWORD*)(a1 + 8) - v23;
        }
        if (v24 >= v4) {
          v25 = v4;
        }
        else {
          v25 = v24;
        }
        if (v25 != 0) {
          memset_alt1(*(_QWORD*)a1 + v23, a3, v25);
          v23 = *(_QWORD*)(a1 + 16);
        }
        v23 += v25;
        *(_QWORD*)(a1 + 16) = v23;
        v14 = v4 > v24;
        v4 -= v25;
      } while (v14);
    }
  }
  return a1;
}

__attribute__((swiftcall)) void fs_63be60(PSEUDO_X8 x8_, __int64 result,
                                          unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int8* v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  unsigned __int8* v24;
  unsigned __int8* v25;
  int v26;
  bool v27;
  unsigned int v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  char* v37;

  v4 = *a2;
  v6 = *((_QWORD*)a2 + 1);
  v5 = *((unsigned __int8**)a2 + 2);
  v7 = (v4 & 1) == 0;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = v5;
  }
  if (!v7) {
    v8 = v6;
  }
  v10 = *v9;
  v11 = result - v10;
  if (result - v10 < 1) {
    v28 = 0;
    goto LABEL_44;
  }
  v12 = (char*)a3 + 1;
  v13 = (__int64)&v9[v8 - 1];
  do {
    v14 = *(unsigned __int8*)a3;
    if ((v14 & 1) == 0) {
      if ((_DWORD)v14 != 44) {
        v15 = v14 >> 1;
        v16 = (__int64)v12;
        *(_BYTE*)a3 = v14 + 2;
        goto LABEL_32;
      }
      v15 = 22;
      v16 = (__int64)v12;
      v17 = 48;
      goto LABEL_21;
    }
    v16 = a3[2];
    v15 = (*a3 & 0xFFFFFFFFFFFFFFFELL) - 1;
    if (a3[1] == v15) {
      if (v15 >= 0x7FFFFFFFFFFFFFF3LL) {
        v20 = false;
        v17 = -9;
      LABEL_25:
        v21 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
        result = memmove(v21, v16, v15);
        if (!v20 && v16 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v16);
        }
        v12 = (char*)a3 + 1;
        a3[2] = v21;
        v16 = v21;
        *a3 = v17 | 1;
        goto LABEL_31;
      }
      v18 = (2 * v15) | 7;
      if (v18 == 23) {
        v19 = 26;
      }
      else {
        v19 = v18 + 1;
      }
      if (v15 >= 0xC) {
        v17 = v19;
      }
      else {
        v17 = 23;
      }
    LABEL_21:
      v20 = v15 == 22;
      goto LABEL_25;
    }
    v15 = a3[1];
  LABEL_31:
    a3[1] = v15 + 1;
  LABEL_32:
    v23 = (_BYTE*)(v16 + v15);
    *v23 = v10;
    v23[1] = 0;
    if (v9 == (unsigned __int8*)v13) {
      LODWORD(v10) = *v9;
    }
    else {
      v24 = v9 + 1;
      v25 = v9 + 1;
      do {
        v26 = *v25++;
        LODWORD(v10) = v26;
        v27 = v26 != 0 || v24 == (unsigned __int8*)v13;
        v24 = v25;
      } while (!v27);
      v9 = v25 - 1;
    }
    v11 -= (unsigned int)v10;
  } while (v11 > 0);
  v28 = *(unsigned __int8*)a3;
  if ((v28 & 1) != 0) {
    v12 = (char*)a3[2];
    v30 = (*a3 & 0xFFFFFFFFFFFFFFFELL) - 1;
    if (a3[1] == v30) {
      if (v30 >= 0x7FFFFFFFFFFFFFF3LL) {
        v34 = false;
        v29 = -9;
      }
      else {
        v32 = (2 * v30) | 7;
        if (v32 == 23) {
          v33 = 26;
        }
        else {
          v33 = v32 + 1;
        }
        if (v30 >= 0xC) {
          v29 = v33;
        }
        else {
          v29 = 23;
        }
      LABEL_53:
        v34 = v30 == 22;
      }
      v35 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v29, 16, 0);
      result = memmove(v35, v12, v30);
      if (!v34 && v12 != nullptr) {
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v36 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v12);
      }
      a3[2] = v35;
      *a3 = v29 | 1;
    }
    else {
      v35 = a3[2];
      v30 = a3[1];
    }
    a3[1] = v30 + 1;
    v31 = (char*)v35;
  }
  else {
    if (v28 == 44) {
      v29 = 48;
      v30 = 22;
      goto LABEL_53;
    }
  LABEL_44:
    v30 = v28 >> 1;
    *(_BYTE*)a3 = v28 + 2;
    v31 = (char*)a3 + 1;
  }
  v37 = &v31[v30];
  *v37 = v10 + v11;
  v37[1] = 0;
  {
    result;
    return;
  }
}

_WORD* fs_63c410(_WORD* a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  unsigned int v7;
  __int64 v10;
  int v11;
  unsigned int v12;
  _BYTE* v13;
  bool v14;

  v4 = a2;
  HIDWORD(v6) = a4 - 2;
  LODWORD(v6) = a4 - 2;
  v5 = v6 >> 1;
  if (v5 != 4) {
    if (v5 == 0) {
      return (_WORD*)fs_63c580((__int64)a1, a2, a3);
    }
    if (v5 == 3) {
      return (_WORD*)fs_63c640((__int64)a1, a2, a3);
    }
    if (v5 != 7) {
      v10 = a2 - (_QWORD)a1;
      v11 = GameRoutine_63c7e0(a3, a4);
      if (v10 < v11) {
        return (_WORD*)a2;
      }
      v12 = a3;
      v4 = (__int64)a1 + v11;
      v13 = (_BYTE*)(v4 - 1);
      do {
        *v13-- = GameData_1ae1bd3[v12 % a4];
        v14 = a4 > v12;
        v12 /= a4;
      } while (!v14);
      return (_WORD*)v4;
    }
    return (_WORD*)fs_63c720((__int64)a1, a2, a3);
  }
  if (a2 - (__int64)a1 > 9) {
    return GameRoutine_63c850(a1, a3);
  }
  v7 = (1233 * (32 - __clz(a3 | 1))) >> 12;
  if (a2 - (__int64)a1 >=
      (unsigned int)(((__PAIR64__(v7, a3) - GameData_1b359fc[v7]) >> 32) + 1)) {
    return GameRoutine_63c850(a1, a3);
  }
  return (_WORD*)v4;
}

__int64 fs_63c580(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  bool v8;
  _BYTE* v9;

  v3 = 32 - __clz(a3 | 1);
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x11) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 4;
      *(_DWORD*)(v6 - 4) = *(_DWORD*)&GameData_1b35a24[4 * (a3 & 0xF) + 200];
      v6 -= 4;
      v8 = a3 > 0x10F;
      a3 >>= 4;
    } while (v8);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = GameData_1a94a5c[v7 & 1];
    v8 = v7 > 1;
    v7 >>= 1;
  } while (v8);
  return v5;
}

__int64 fs_63c640(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (86 * (34 - __clz(a3 | 1))) >> 8;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x41) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 6;
      v8 = *(_WORD*)&GameData_1b35a24[2 * (a3 & 0x3F) + 264];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x40);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = GameData_1ab37f5[v7 & 7];
    v10 = v7 > 7;
    v7 >>= 3;
  } while (v10);
  return v5;
}

__int64 fs_63c720(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (35 - __clz(a3 | 1)) >> 2;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x101) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 8;
      v8 = *(_WORD*)&GameData_1b35a24[2 * (unsigned __int8)a3 + 392];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x100);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = GameData_1aed516[v7 & 0xF];
    v10 = v7 > 0xF;
    v7 >>= 4;
  } while (v10);
  return v5;
}

__int64 fs_63cc30(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8** v4;
  unsigned __int8* v5;
  unsigned __int8* v7;
  __int64* v8;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  char v16;
  __int16 v17;
  char v18;
  _BYTE v19[4];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = 0;
  v17 = 0;
  v18 = 0;
  v15 = -1;
  v16 = 32;
  if ((**(_BYTE**)(a1 + 16) & 1) == 0) {
    v8 = *(__int64**)(a1 + 8);
  LABEL_15:
    v11 = *v8;
    v12 = GameHr_639910((char*)&v14, v8),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19[0] = a2;
    result = GameRoutine_639dc0((__int64)v19, 1u, v11, v12, v13, 1),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_16;
  }
  v4 = *(unsigned __int8***)a1;
  v5 = GameRoutine_638b90((char*)&v14, *(unsigned __int8***)a1, 311),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((unsigned int)BYTE1(v14) - 2 >= 6) {
    if (BYTE1(v14) > 0x13u || ((1 << SBYTE1(v14)) & 0x80401) == 0) {
      fs_639520((__int64)"a character"),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v7 = v5;
    fs_639590((__int64)&v14, 48, (__int64)"a character", -1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = v7;
    if ((v14 & 7) == 0) {
      LOBYTE(v14) = v14 | 1;
    }
  }
  *v4 = v5;
  v8 = *(__int64**)(a1 + 8);
  if (BYTE1(v14) == 10 || BYTE1(v14) == 0) {
    goto LABEL_15;
  }
  GameHr_639910((char*)&v14, v8),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = GameRoutine_639a90(a2),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_16:
  *v8 = result;
  return result;
}

__int64 fs_63cd90(__int64 a1, int a2)
{
  unsigned __int8** v4;
  unsigned __int8* v5;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  unsigned __int8* v13;
  __int64 v14;
  int v15;
  char v16;
  __int16 v17;
  char v18;
  _BYTE v19[4];

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = 0;
  v17 = 0;
  v18 = 0;
  v15 = -1;
  v16 = 32;
  if (**(_BYTE**)(a1 + 16) == 1) {
    v4 = *(unsigned __int8***)a1;
    v5 = GameRoutine_638b90((char*)&v14, *(unsigned __int8***)a1, 311),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned int)BYTE1(v14) - 2 >= 6 && BYTE1(v14) != 0) {
      if (BYTE1(v14) != 10) {
        fs_639520((__int64)"an integer"),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v13 = v5;
      fs_639590((__int64)&v14, 48, (__int64)"an integer", -1),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v5 = v13;
      if ((v14 & 7) == 0) {
        LOBYTE(v14) = v14 | 1;
      }
    }
    *v4 = v5;
  }
  v7 = *(__int64**)(a1 + 8);
  v9 = GameHr_639910((char*)&v14, v7),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v9 & 0xFF00) == 0xA00) {
    if ((unsigned int)a2 >= 0x100) {
      GameRoutine_638240("Integral value outside the range of the char type"),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v10 = *v7;
    v19[0] = a2;
    result = GameRoutine_639dc0((__int64)v19, 1u, v10, v9, v8, 1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    if (a2 >= 0) {
      v12 = (unsigned int)a2;
    }
    else {
      v12 = (unsigned int)-a2;
    }
    result = GameRoutine_639a90(v12),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *v7 = result;
  return result;
}

__int64 fs_63cee0(__int64 a1, __int64 a2)
{
  unsigned __int8** v4;
  unsigned __int8* v5;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  unsigned __int8* v13;
  __int64 v14;
  int v15;
  char v16;
  __int16 v17;
  char v18;
  _BYTE v19[4];

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = 0;
  v17 = 0;
  v18 = 0;
  v15 = -1;
  v16 = 32;
  if (**(_BYTE**)(a1 + 16) == 1) {
    v4 = *(unsigned __int8***)a1;
    v5 = GameRoutine_638b90((char*)&v14, *(unsigned __int8***)a1, 311),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned int)BYTE1(v14) - 2 >= 6 && BYTE1(v14) != 0) {
      if (BYTE1(v14) != 10) {
        fs_639520((__int64)"an integer"),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v13 = v5;
      fs_639590((__int64)&v14, 48, (__int64)"an integer", -1),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v5 = v13;
      if ((v14 & 7) == 0) {
        LOBYTE(v14) = v14 | 1;
      }
    }
    *v4 = v5;
  }
  v7 = *(__int64**)(a1 + 8);
  v9 = GameHr_639910((char*)&v14, v7),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v9 & 0xFF00) == 0xA00) {
    if ((unsigned __int64)a2 >= 0x100) {
      GameRoutine_638240("Integral value outside the range of the char type"),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v10 = *v7;
    v19[0] = a2;
    result = GameRoutine_639dc0((__int64)v19, 1u, v10, v9, v8, 1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    if (a2 >= 0) {
      v12 = a2;
    }
    else {
      v12 = -a2;
    }
    result = GameRoutine_63d030(v12),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *v7 = result;
  return result;
}

char* fs_63d560(char* a1, char* a2, unsigned __int64 a3, signed int a4)
{
  char* v4;
  int v5;
  unsigned __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  char* v13;
  __int64 v14;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  bool v20;
  unsigned __int64 v21;

  v4 = a2;
  HIDWORD(v6) = a4 - 2;
  LODWORD(v6) = a4 - 2;
  v5 = v6 >> 1;
  if (v5 != 4) {
    if (v5 == 0) {
      return (char*)fs_63d7e0((__int64)a1, (__int64)a2, a3);
    }
    if (v5 == 3) {
      return (char*)fs_63d8a0((__int64)a1, (__int64)a2, a3);
    }
    if (v5 != 7) {
      v13 = a1;
      v14 = a2 - a1;
      v21 = a3;
      v16 = GameRoutine_63da40(a3, a4);
      if (v14 < v16) {
        return a2;
      }
      v17 = a4;
      v18 = v21;
      v4 = &v13[v16];
      v19 = v4 - 1;
      do {
        *v19-- = GameData_1ae1bd3[(unsigned int)(v18 % v17)];
        v20 = v18 >= v17;
        v18 /= v17;
      } while (v20);
      return v4;
    }
    return (char*)fs_63d980((__int64)a1, (__int64)a2, a3);
  }
  if (a2 - a1 > 19 || (v7 = (1233 * (64 - (unsigned int)__clz(a3 | 1))) >> 12,
                       a2 - a1 >= v7 - (a3 < GameData_1b35db0[v7]) + 1)) {
    if (HIDWORD(a3) != 0) {
      if (a3 > 0x2540BE3FFLL) {
        v8 = a3;
        v9 = a3 / 0x2540BE400LL;
        a1 = (char*)GameRoutine_63c850(a1, a3 / 0x2540BE400LL);
        a3 = v8 - 10000000000LL * v9;
      }
      *(_WORD*)a1 = *(_WORD*)&GameData_1b35a24[2 * (a3 / 0x5F5E100)];
      *((_WORD*)a1 + 1) =
          *(_WORD*)&GameData_1b35a24[2 * (a3 % 0x5F5E100 / 0xF4240)];
      v10 = a3 % 0x5F5E100 % 0xF4240;
      *((_WORD*)a1 + 2) = *(_WORD*)&GameData_1b35a24[2 * (v10 / 0x2710uLL)];
      v10 %= 0x2710u;
      *((_WORD*)a1 + 3) =
          *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v10 / 0x64u)];
      *((_WORD*)a1 + 4) =
          *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v10 % 0x64u)];
      return a1 + 10;
    }
    else {
      return (char*)GameRoutine_63c850(a1, a3);
    }
  }
  return v4;
}

__int64 fs_63d7e0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  _BYTE* v9;

  v3 = 64 - __clz(a3 | 1);
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x11) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 4;
      *(_DWORD*)(v6 - 4) = *(_DWORD*)&GameData_1b35a24[4 * (a3 & 0xF) + 200];
      v6 -= 4;
      v8 = a3 > 0x10F;
      a3 >>= 4;
    } while (v8);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = GameData_1a94a5c[v7 & 1];
    v8 = v7 > 1;
    v7 >>= 1;
  } while (v8);
  return v5;
}

__int64 fs_63d8a0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (86 * (66 - (unsigned int)__clz(a3 | 1))) >> 8;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x41) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 6;
      v8 = *(_WORD*)&GameData_1b35a24[2 * (a3 & 0x3F) + 264];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x40);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = GameData_1ab37f5[v7 & 7];
    v10 = v7 > 7;
    v7 >>= 3;
  } while (v10);
  return v5;
}

__int64 fs_63d980(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (67 - __clz(a3 | 1)) >> 2;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x101) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 8;
      v8 = *(_WORD*)&GameData_1b35a24[2 * (unsigned __int8)a3 + 392];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x100);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = GameData_1aed516[v7 & 0xF];
    v10 = v7 > 0xF;
    v7 >>= 4;
  } while (v10);
  return v5;
}

__int64 fs_63dab0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int8** v7;
  unsigned __int8* v8;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  unsigned __int8* v15;
  __int64 v16;
  int v17;
  char v18;
  __int16 v19;
  char v20;
  _BYTE v21[4];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = 0;
  v19 = 0;
  v20 = 0;
  v17 = -1;
  v18 = 32;
  if (**(_BYTE**)(a1 + 16) == 1) {
    v7 = *(unsigned __int8***)a1;
    v8 = GameRoutine_638b90((char*)&v16, *(unsigned __int8***)a1, 311),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned int)BYTE1(v16) - 2 >= 6 && BYTE1(v16) != 0) {
      if (BYTE1(v16) != 10) {
        fs_639520((__int64)"an integer"),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v15 = v8;
      fs_639590((__int64)&v16, 48, (__int64)"an integer", -1),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = v15;
      if ((v16 & 7) == 0) {
        LOBYTE(v16) = v16 | 1;
      }
    }
    *v7 = v8;
  }
  v10 = *(__int64**)(a1 + 8);
  v12 = GameHr_639910((char*)&v16, v10),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v12 & 0xFF00) == 0xA00) {
    if (__PAIR128__(a4, a3) >= 0x100) {
      GameRoutine_638240("Integral value outside the range of the char type"),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v13 = *v10;
    v21[0] = a3;
    result = GameRoutine_639dc0((__int64)v21, 1u, v13, v12, v11, 1),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    result = GameRoutine_63dc10(
        (a3 ^ (a4 >> 63)) - (a4 >> 63),
        (__PAIR128__(a4 ^ (unsigned __int64)(a4 >> 63), a3 ^ (a4 >> 63)) -
         __PAIR128__(a4 >> 63, a4 >> 63)) >>
            64),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *v10 = result;
  return result;
}

_WORD* fs_63e140(_WORD* a1, __int64 a2, unsigned __int64 a3,
                 unsigned __int64 a4, signed int a5)
{
  __int64 v5;
  int v6;
  unsigned __int64 v7;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _BYTE* v16;
  __int64 v17;
  unsigned __int64 v18;

  v5 = a2;
  HIDWORD(v7) = a5 - 2;
  LODWORD(v7) = a5 - 2;
  v6 = v7 >> 1;
  switch (v6) {
  case 4:
    return fs_63e270_alt1(a1, a2, a3, a4);
  case 0:
    return (_WORD*)fs_63e460((__int64)a1, a2, a3, a4);
  case 3:
    return (_WORD*)fs_63e540((__int64)a1, a2, a3, a4);
  case 7:
    return (_WORD*)fs_63e620((__int64)a1, a2, a3, a4);
  default:
    break;
  }
  v12 = a2 - (_QWORD)a1;
  v13 = (int)fs_63e700_alt1(a3, a4, a5);
  if (v12 >= v13) {
    v15 = a4;
    v14 = a3;
    v5 = (__int64)a1 + v13;
    v16 = (char*)a1 + v13 - 1;
    do {
      v17 = v14;
      v18 = v15;
      v14 = GameRoutine_631ae0();
      *v16-- = GameData_1ae1bd3[(unsigned int)(v17 - v14 * a5)];
    } while (__PAIR128__(v18, v17) >= a5);
  }
  return (_WORD*)v5;
}

char* fs_63e270(_WORD* a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;

  v4 = a2 - (_QWORD)a1;
  v5 = a2;
  if (a4 != 0) {
    if (v4 > 38) {
      return fs_63e7b0(a1, a2, a3, a4);
    }
    v6 = (1233 * (128 - (unsigned int)__clz(a4))) >> 12;
    if (v4 >= v6 - (__PAIR128__(a4, a3) < GameData_1b35e50[v6]) + 1) {
      return fs_63e7b0(a1, a2, a3, a4);
    }
  }
  else if (v4 > 19 || (v8 = (1233 * (64 - (unsigned int)__clz(a3 | 1))) >> 12,
                       v4 >= v8 - (GameData_1b35db0[v8] > a3) + 1)) {
    if (HIDWORD(a3) == 0) {
      return (char*)GameRoutine_63c850(a1, a3);
    }
    if (a3 > 0x2540BE3FFLL) {
      v9 = a3;
      v10 = a3 / 0x2540BE400LL;
      a1 = GameRoutine_63c850(a1, a3 / 0x2540BE400LL);
      a3 = v9 - 10000000000LL * v10;
    }
    *a1 = *(_WORD*)&GameData_1b35a24[2 * (a3 / 0x5F5E100)];
    a1[1] = *(_WORD*)&GameData_1b35a24[2 * (a3 % 0x5F5E100 / 0xF4240)];
    v11 = a3 % 0x5F5E100 % 0xF4240;
    a1[2] = *(_WORD*)&GameData_1b35a24[2 * (v11 / 0x2710uLL)];
    v11 %= 0x2710u;
    a1[3] = *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v11 / 0x64u)];
    a1[4] = *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v11 % 0x64u)];
    return (char*)(a1 + 5);
  }
  return (char*)v5;
}

__int64 fs_63e460(__int64 a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  signed __int64 v6;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int128 v11;
  bool v12;
  int v13;
  unsigned __int64 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  __int128 v17;

  v4 = __clz(a4);
  v5 = __clz(a3 | 1) | 0x40;
  if (a4 != 0) {
    v5 = v4;
  }
  v6 = 128 - v5;
  if (a2 - a1 < v6) {
    return a2;
  }
  v8 = a1 + v6;
  if (__PAIR128__(a4, a3) < 0x11) {
    v10 = a3;
    v14 = a4;
    v9 = v8;
  }
  else {
    v9 = a1 + v6;
    do {
      *((_QWORD*)&v11 + 1) = a4;
      *(_QWORD*)&v11 = a3;
      v10 = v11 >> 4;
      v12 = a3 <= 0x10F;
      v13 = *(_DWORD*)&GameData_1b35a24[4 * (a3 & 0xF) + 200];
      v14 = a4 >> 4;
      a4 >>= 4;
      a3 = v10;
      *(_DWORD*)(v9 - 4) = v13;
      v9 -= 4;
    } while (!v12);
  }
  v15 = (_BYTE*)(v9 - 1);
  do {
    v16 = v10 & 1;
    v12 = v10 <= 1;
    *((_QWORD*)&v17 + 1) = v14;
    *(_QWORD*)&v17 = v10;
    v10 = v17 >> 1;
    v14 >>= 1;
    *v15-- = GameData_1a94a5c[v16];
  } while (!v12);
  return v8;
}

__int64 fs_63e540(__int64 a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4)
{
  char v4;
  char v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int128 v11;
  __int16 v12;
  _BYTE* v13;
  unsigned __int64 v14;
  bool v15;
  __int128 v16;

  v4 = __clz(a4);
  v5 = __clz(a3 | 1) | 0x40;
  if (a4 != 0) {
    v5 = v4;
  }
  v6 = (unsigned __int8)(-126 - v5) / 3u;
  if (a2 - a1 < v6) {
    return a2;
  }
  v8 = a1 + v6;
  if (__PAIR128__(a4, a3) < 0x41) {
    v10 = a3;
    v9 = v8;
  }
  else {
    v9 = a1 + v6;
    do {
      *((_QWORD*)&v11 + 1) = a4;
      *(_QWORD*)&v11 = a3;
      v10 = v11 >> 6;
      a4 >>= 6;
      v12 = *(_WORD*)&GameData_1b35a24[2 * (a3 & 0x3F) + 264];
      a3 = v10;
      *(_WORD*)(v9 - 2) = v12;
      v9 -= 2;
    } while (v10 > 0x40);
  }
  v13 = (_BYTE*)(v9 - 1);
  do {
    v14 = v10 & 7;
    v15 = v10 <= 7;
    *((_QWORD*)&v16 + 1) = a4;
    *(_QWORD*)&v16 = v10;
    v10 = v16 >> 3;
    a4 >>= 3;
    *v13-- = GameData_1ab37f5[v14];
  } while (!v15);
  return v8;
}

__int64 fs_63e620(__int64 a1, __int64 a2, unsigned __int64 a3,
                  unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  signed __int64 v6;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int128 v11;
  __int16 v12;
  _BYTE* v13;
  unsigned __int64 v14;
  bool v15;
  __int128 v16;

  v4 = __clz(a4);
  v5 = __clz(a3 | 1) | 0x40;
  if (a4 != 0) {
    v5 = v4;
  }
  v6 = (131 - v5) >> 2;
  if (a2 - a1 < v6) {
    return a2;
  }
  v8 = a1 + v6;
  if (__PAIR128__(a4, a3) < 0x101) {
    v10 = a3;
    v9 = v8;
  }
  else {
    v9 = a1 + v6;
    do {
      *((_QWORD*)&v11 + 1) = a4;
      *(_QWORD*)&v11 = a3;
      v10 = v11 >> 8;
      a4 >>= 8;
      v12 = *(_WORD*)&GameData_1b35a24[2 * (unsigned __int8)a3 + 392];
      a3 = v10;
      *(_WORD*)(v9 - 2) = v12;
      v9 -= 2;
    } while (v10 > 0x100);
  }
  v13 = (_BYTE*)(v9 - 1);
  do {
    v14 = v10 & 0xF;
    v15 = v10 <= 0xF;
    *((_QWORD*)&v16 + 1) = a4;
    *(_QWORD*)&v16 = v10;
    v10 = v16 >> 4;
    a4 >>= 4;
    *v13-- = GameData_1aed516[v14];
  } while (!v15);
  return v8;
}

__int64 fs_63e700(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int v6;

  if (__PAIR128__(a2, a1) >= a3) {
    v4 = a3 * a3;
    v3 = 4;
    v6 = a3 * a3 * a3;
    while (1) {
      if (__PAIR128__(a2, a1) < v4) {
        v3 -= 2;
        return v3;
      }
      if (__PAIR128__(a2, a1) < v6) {
        break;
      }
      if (__PAIR128__(a2, a1) < v4 * v4) {
        return v3;
      }
      a1 = GameRoutine_631ae0();
      v3 += 4;
      if (__PAIR128__(a2, a1) < a3) {
        v3 -= 3;
        return v3;
      }
    }
    --v3;
  }
  else {
    return 1;
  }
  return v3;
}

char* fs_63e7b0(_WORD* a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _WORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  __int16 v17;
  unsigned __int64 v18;
  unsigned __int128 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned __int64 v23;
  unsigned int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned int v27;
  __int16 v29;
  unsigned int v30;
  unsigned __int64 v31;
  __int16 v32;
  unsigned __int64 v33;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = a4;
  v5 = a3;
  if (__PAIR128__(a4, a3) >=
      __PAIR128__(0x4B3B4CA85A86C47ALL, 0x98A224000000000LL)) {
    v10 = GameRoutine_631ae0_alt1(a3, a4, 0x98A224000000000LL,
                                  0x4B3B4CA85A86C47ALL),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)a1 = v10 | 0x30;
    v12 = v5 - 0x98A224000000000LL * v10;
    v11 = (__PAIR128__(v4, v5) -
           __PAIR128__(v13, v10) *
               __PAIR128__(0x4B3B4CA85A86C47ALL, 0x98A224000000000LL)) >>
          64;
    v14 =
        GameRoutine_631ae0_alt1(v12, v11, 0x6D7217CAA0000000LL, 0x1431E0FAELL),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = v14 % 0x5F5E100;
    *((_BYTE*)a1 + 1) = v14 / 0x5F5E100 + 48;
    v16 = v15 / 0xF4240uLL;
    v15 %= 0xF4240u;
    v17 = *(_WORD*)&GameData_1b35a24[2 * v16];
    v18 = v15 / 0x2710uLL;
    a1[1] = v17;
    v15 %= 0x2710u;
    a1[2] = *(_WORD*)&GameData_1b35a24[2 * v18];
    a1[3] = *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v15 / 0x64u)];
    a1[4] = *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v15 % 0x64u)];
    v19 = __PAIR128__(v11, v12) -
          __PAIR128__(v20, v14) *
              __PAIR128__(0x1431E0FAELL, 0x6D7217CAA0000000LL);
    v4 = *((_QWORD*)&v19 + 1);
    v5 = v19;
    v21 = GameRoutine_631ae0_alt1(v19, *((_QWORD*)&v19 + 1),
                                  0x8AC7230489E80000LL, 0),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a1[5] = *(_WORD*)&GameData_1b35a24[2 * (v21 / 0x5F5E100)];
    v22 = v21 % 0x5F5E100;
    a1[6] = *(_WORD*)&GameData_1b35a24[2 * (v22 / 0xF4240uLL)];
    v22 %= 0xF4240u;
    v23 = v22 / 0x2710uLL;
    LOWORD(v22) = v22 % 0x2710;
    a1[7] = *(_WORD*)&GameData_1b35a24[2 * v23];
    a1[8] = *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v22 / 0x64u)];
    a1[9] = *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v22 % 0x64u)];
    v9 = a1 + 10;
  }
  else {
    v7 = GameRoutine_631ae0_alt1(a3, a4, 0x8AC7230489E80000LL, 0),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v7;
    if (HIDWORD(v7) != 0) {
      if (v7 > 0x2540BE3FFLL) {
        v8 = v7 % 0x2540BE400LL;
        a1 = GameRoutine_63c850(a1, v7 / 0x2540BE400LL),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v24 = v8 % 0x5F5E100;
      *a1 = *(_WORD*)&GameData_1b35a24[2 * (v8 / 0x5F5E100)];
      v25 = v24 / 0xF4240uLL;
      v24 %= 0xF4240u;
      a1[1] = *(_WORD*)&GameData_1b35a24[2 * v25];
      a1[2] = *(_WORD*)&GameData_1b35a24[2 * (v24 / 0x2710uLL)];
      v24 %= 0x2710u;
      a1[3] = *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v24 / 0x64u)];
      a1[4] = *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v24 % 0x64u)];
      v9 = a1 + 5;
    }
    else {
      v9 = GameRoutine_63c850(a1, v7),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v26 = GameRoutine_631dd0(v5, v4, 0x8AC7230489E80000LL, 0),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = v26 / 0x2540BE400LL % 0x5F5E100;
  *(_BYTE*)v9 = v26 / 0x2540BE400LL / 0x5F5E100 + 48;
  v29 = *(_WORD*)&GameData_1b35a24[2 * (v27 / 0xF4240uLL)];
  v27 %= 0xF4240u;
  *(_WORD*)((char*)v9 + 1) = v29;
  *(_WORD*)((char*)v9 + 3) = *(_WORD*)&GameData_1b35a24[2 * (v27 / 0x2710uLL)];
  v27 %= 0x2710u;
  *(_WORD*)((char*)v9 + 5) =
      *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v27 / 0x64u)];
  *(_WORD*)((char*)v9 + 7) =
      *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v27 % 0x64u)];
  v30 = v26 % 0x2540BE400LL % 0x5F5E100;
  v31 = v30 / 0xF4240uLL;
  *(_WORD*)((char*)v9 + 9) =
      *(_WORD*)&GameData_1b35a24[2 * (v26 % 0x2540BE400LL / 0x5F5E100)];
  v30 %= 0xF4240u;
  v32 = *(_WORD*)&GameData_1b35a24[2 * v31];
  v33 = v30 / 0x2710uLL;
  *(_WORD*)((char*)v9 + 11) = v32;
  v30 %= 0x2710u;
  *(_WORD*)((char*)v9 + 13) = *(_WORD*)&GameData_1b35a24[2 * v33];
  *(_WORD*)((char*)v9 + 15) =
      *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v30 / 0x64u)];
  *(_WORD*)((char*)v9 + 17) =
      *(_WORD*)&GameData_1b35a24[2 * ((unsigned __int16)v30 % 0x64u)];
  return (char*)v9 + 19;
}

__int64 fs_63ec50(__int64 a1, unsigned int a2)
{
  unsigned __int8** v4;
  unsigned __int8* v5;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned __int8* v12;
  __int64 v13;
  int v14;
  char v15;
  __int16 v16;
  char v17;
  _BYTE v18[4];

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = 0;
  v16 = 0;
  v17 = 0;
  v14 = -1;
  v15 = 32;
  if (**(_BYTE**)(a1 + 16) == 1) {
    v4 = *(unsigned __int8***)a1;
    v5 = GameRoutine_638b90((char*)&v13, *(unsigned __int8***)a1, 311),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned int)BYTE1(v13) - 2 >= 6 && BYTE1(v13) != 0) {
      if (BYTE1(v13) != 10) {
        fs_639520((__int64)"an integer"),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v12 = v5;
      fs_639590((__int64)&v13, 48, (__int64)"an integer", -1),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v5 = v12;
      if ((v13 & 7) == 0) {
        LOBYTE(v13) = v13 | 1;
      }
    }
    *v4 = v5;
  }
  v7 = *(__int64**)(a1 + 8);
  v9 = GameHr_639910((char*)&v13, v7),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v9 & 0xFF00) == 0xA00) {
    if (a2 >= 0x100) {
      GameRoutine_638240("Integral value outside the range of the char type"),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v10 = *v7;
    v18[0] = a2;
    result = GameRoutine_639dc0((__int64)v18, 1u, v10, v9, v8, 1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    result = GameRoutine_639a90(a2),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *v7 = result;
  return result;
}

__int64 fs_63eda0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8** v4;
  unsigned __int8* v5;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned __int8* v12;
  __int64 v13;
  int v14;
  char v15;
  __int16 v16;
  char v17;
  _BYTE v18[4];

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = 0;
  v16 = 0;
  v17 = 0;
  v14 = -1;
  v15 = 32;
  if (**(_BYTE**)(a1 + 16) == 1) {
    v4 = *(unsigned __int8***)a1;
    v5 = GameRoutine_638b90((char*)&v13, *(unsigned __int8***)a1, 311),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned int)BYTE1(v13) - 2 >= 6 && BYTE1(v13) != 0) {
      if (BYTE1(v13) != 10) {
        fs_639520((__int64)"an integer"),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v12 = v5;
      fs_639590((__int64)&v13, 48, (__int64)"an integer", -1),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v5 = v12;
      if ((v13 & 7) == 0) {
        LOBYTE(v13) = v13 | 1;
      }
    }
    *v4 = v5;
  }
  v7 = *(__int64**)(a1 + 8);
  v9 = GameHr_639910((char*)&v13, v7),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v9 & 0xFF00) == 0xA00) {
    if (a2 >= 0x100) {
      GameRoutine_638240("Integral value outside the range of the char type"),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v10 = *v7;
    v18[0] = a2;
    result = GameRoutine_639dc0((__int64)v18, 1u, v10, v9, v8, 1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    result = GameRoutine_63d030(a2),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *v7 = result;
  return result;
}

__int64 fs_63eef0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8** v7;
  unsigned __int8* v8;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  unsigned __int8* v15;
  __int64 v16;
  int v17;
  char v18;
  __int16 v19;
  char v20;
  _BYTE v21[4];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = 0;
  v19 = 0;
  v20 = 0;
  v17 = -1;
  v18 = 32;
  if (**(_BYTE**)(a1 + 16) == 1) {
    v7 = *(unsigned __int8***)a1;
    v8 = GameRoutine_638b90((char*)&v16, *(unsigned __int8***)a1, 311),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned int)BYTE1(v16) - 2 >= 6 && BYTE1(v16) != 0) {
      if (BYTE1(v16) != 10) {
        fs_639520((__int64)"an integer"),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v15 = v8;
      fs_639590((__int64)&v16, 48, (__int64)"an integer", -1),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = v15;
      if ((v16 & 7) == 0) {
        LOBYTE(v16) = v16 | 1;
      }
    }
    *v7 = v8;
  }
  v10 = *(__int64**)(a1 + 8);
  v12 = GameHr_639910((char*)&v16, v10),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v12 & 0xFF00) == 0xA00) {
    if (__PAIR128__(a4, a3) >= 0x100) {
      GameRoutine_638240("Integral value outside the range of the char type"),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v13 = *v10;
    v21[0] = a3;
    result = GameRoutine_639dc0((__int64)v21, 1u, v13, v12, v11, 1),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    result = GameRoutine_63dc10(a3, a4),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *v10 = result;
  return result;
}

__attribute__((swiftcall)) void fs_63f8a0(PSEUDO_X8 x8_, unsigned int* a1,
                                          char a2, char a3, char a4,
                                          unsigned __int8 a5)
{
  char** a6 = (char**)PSEUDO_X8_VALUE(x8_);
  char* v6;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* result;
  char* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  int v57;
  char* v58;
  __int64 v59;
  bool v60;
  __int64 v61;
  __int64 v62;

  v6 = *((char**)a1 + 2);
  if ((a2 & 1) != 0) {
    v8 = 45;
  }
  else if (a4 == 2) {
    v8 = 43;
  }
  else {
    if (a4 != 3) {
      goto LABEL_8;
    }
    v8 = 32;
  }
  *v6++ = v8;
LABEL_8:
  if (a5 <= 0xEu) {
    if (a5 > 0xBu) {
      if (a5 == 12) {
        (char*)fs_640860_alt1();
        return;
      }
      if (a5 == 13) {
        v10 = *((_QWORD*)a1 + 1);
        v9 = *((_QWORD*)a1 + 2);
        v11 = *a1;
        *a6 = v6;
        result = (char*)std___1_to_chars_1a0a250(v6, v9 + v10, 1, v11);
        v13 = v6 + 1;
        v14 = (unsigned __int8)v6[1];
        a6[3] = result;
        if (v14 == 46) {
          a6[1] = v13;
          v15 = result - v6 - 2;
          if (v15 < 4) {
          LABEL_19:
            a6[2] = result;
          }
          else {
            if ((unsigned __int64)v15 >= 6) {
              v15 = 6;
            }
            v16 = -v15;
            while (result[v16] != 101) {
              if (++v16 == -3) {
                goto LABEL_19;
              }
            }
            a6[2] = &result[v16];
          }
        }
        else {
          a6[1] = result;
          a6[2] = v13;
        }
        {
          result;
          return;
        }
      }
      v39 = *((_QWORD*)a1 + 1);
      v38 = *((_QWORD*)a1 + 2);
      v40 = *a1;
      *a6 = v6;
      result = (char*)std___1_to_chars_1a0a250(v6, v38 + v39, 1, v40);
      v41 = v6 + 1;
      v42 = (unsigned __int8)v6[1];
      a6[3] = result;
      if (v42 == 46) {
        a6[1] = v41;
        v43 = result - v6 - 2;
        if (v43 < 4) {
        LABEL_65:
          v41 = result;
          a6[2] = result;
        }
        else {
          if ((unsigned __int64)v43 >= 6) {
            v43 = 6;
          }
          v44 = -v43;
          while (result[v44] != 101) {
            if (++v44 == -3) {
              goto LABEL_65;
            }
          }
          v41 = &result[v44];
          a6[2] = v41;
        }
      }
      else {
        a6[1] = result;
        a6[2] = v41;
      }
    LABEL_94:
      *v41 = 69;
      {
        result;
        return;
      }
    }
    if (a5 == 0) {
      if ((a3 & 1) != 0) {
        v28 = *a1;
        v29 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
        a1[1] = 0;
        *a6 = v6;
        result = (char*)std___1_to_chars_1a0a250(v6, v29, 3, v28);
        v24 = v6 + 1;
        a6[3] = result;
        if (v6 + 1 != result) {
          v25 = result - v24;
          if (result - v24 >= 4) {
            v30 = 6;
            if (v25 < 6) {
              v30 = result - v24;
            }
            v27 = -v30;
            while (result[v27] != 101) {
              if (++v27 == -3) {
                goto LABEL_44;
              }
            }
          LABEL_87:
            a6[2] = &result[v27];
            if (*v24 != 46) {
              v24 = result;
            }
            goto LABEL_89;
          }
          goto LABEL_44;
        }
        goto LABEL_69;
      }
      v48 = *((_QWORD*)a1 + 1);
      v47 = *((_QWORD*)a1 + 2);
      *a6 = v6;
      v49 = std___1_to_chars_1a0a260(v6, v47 + v48);
      v50 = v49 - (_QWORD)v6;
      v51 = v49;
      a6[3] = (char*)v49;
      if (v49 - (__int64)v6 < 4) {
      LABEL_78:
        v53 = v49;
      }
      else {
        if (v50 >= 6) {
          v50 = 6;
        }
        v52 = -(__int64)v50;
        while (*(_BYTE*)(v49 + v52) != 101) {
          if (++v52 == -3) {
            goto LABEL_78;
          }
        }
        v53 = v49 + v52;
      }
      a6[2] = (char*)v53;
      result = (char*)memchr(v6 + 1, 46, v53 - (_QWORD)(v6 + 1));
      if (result != nullptr) {
        v21 = result;
      }
      else {
        v21 = (char*)v53;
      }
      if (v21 == (char*)v53) {
        v21 = (char*)v51;
      }
    LABEL_25:
      a6[1] = v21;
      {
        result;
        return;
      }
    }
    if ((a3 & 1) != 0) {
      v45 = *a1;
      v46 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
      *a6 = v6;
      if ((_DWORD)v45 != -1) {
        result = (char*)std___1_to_chars_1a0a250(v6, v46, 4, v45);
      LABEL_81:
        v57 = (unsigned __int8)v6[1];
        v56 = v6 + 1;
        a6[3] = result;
        if (v57 == 46) {
          v58 = result - 2;
          v59 = memchr(result - 5, 112, 3);
          v60 = v59 == 0;
          v61 = v59;
          result = v56;
          if (v60) {
            v56 = v58;
          }
          else {
            v56 = (char*)v61;
          }
        }
        a6[1] = result;
        a6[2] = v56;
        {
          result;
          return;
        }
      }
    }
    else {
      v55 = *((_QWORD*)a1 + 1);
      v54 = *((_QWORD*)a1 + 2);
      *a6 = v6;
      v46 = v54 + v55;
    }
    result = (char*)std___1_to_chars_1a0a270(v6, v46, 4);
    goto LABEL_81;
  }
  if ((unsigned int)a5 - 15 < 2) {
    v18 = *((_QWORD*)a1 + 1);
    v17 = *((_QWORD*)a1 + 2);
    v19 = *a1;
    *a6 = v6;
    result = (char*)std___1_to_chars_1a0a250(v6, v17 + v18, 2, v19);
    a6[2] = result;
    a6[3] = result;
    if (v19 != 0) {
      v20 = v19 + 1;
    }
    else {
      v20 = 0;
    }
    v21 = &result[-v20];
    goto LABEL_25;
  }
  if (a5 == 17) {
    v22 = *a1;
    v23 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
    a1[1] = 0;
    *a6 = v6;
    result = (char*)std___1_to_chars_1a0a250(v6, v23, 3, v22);
    v24 = v6 + 1;
    a6[3] = result;
    if (v6 + 1 != result) {
      v25 = result - v24;
      if (result - v24 >= 4) {
        v26 = 6;
        if (v25 < 6) {
          v26 = result - v24;
        }
        v27 = -v26;
        while (result[v27] != 101) {
          if (++v27 == -3) {
            goto LABEL_44;
          }
        }
        goto LABEL_87;
      }
    LABEL_44:
      a6[2] = result;
      v31 = result;
      result = (char*)memchr(v24, 46, v25);
      if (result != nullptr) {
        v24 = result;
      }
      else {
        v24 = v31;
      }
    LABEL_89:
      a6[1] = v24;
      {
        result;
        return;
      }
    }
  LABEL_69:
    a6[1] = result;
    a6[2] = result;
    {
      result;
      return;
    }
  }
  v32 = *a1;
  v33 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
  a1[1] = 0;
  *a6 = v6;
  v34 = std___1_to_chars_1a0a250(v6, v33, 3, v32);
  a6[3] = (char*)v34;
  result = v6 + 1;
  if (v6 + 1 == (char*)v34) {
    a6[1] = (char*)v34;
    v62 = 2;
  }
  else {
    v35 = v34 - (_QWORD)result;
    if (v34 - (__int64)result < 4) {
    LABEL_55:
      a6[2] = (char*)v34;
      result = (char*)memchr(result, 46, v35);
      if (result != nullptr) {
        v34 = (__int64)result;
      }
    }
    else {
      v36 = 6;
      if (v35 < 6) {
        v36 = v34 - (_QWORD)result;
      }
      v37 = -v36;
      while (*(_BYTE*)(v34 + v37) != 101) {
        if (++v37 == -3) {
          goto LABEL_55;
        }
      }
      a6[2] = (char*)(v34 + v37);
      if (*result == 46) {
        v34 = (__int64)(v6 + 1);
      }
    }
    v62 = 1;
  }
  a6[v62] = (char*)v34;
  v41 = a6[2];
  if (v41 != a6[3]) {
    goto LABEL_94;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void fs_640860(PSEUDO_X8 x8_, __int64 a1,
                                          unsigned int a2, unsigned __int8* a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 result;
  int v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  __int64 v12;
  unsigned __int8* v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  *a4 = a3;
  v6 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16);
  if (a2 == -1) {
    result = std___1_to_chars_1a0a270(a3, v5 + v6, 4);
  }
  else {
    result = std___1_to_chars_1a0a250(a3, v5 + v6, 4, a2);
  }
  v10 = a3 + 1;
  v9 = a3[1];
  a4[3] = result;
  if (v9 == 46) {
    v11 = (unsigned __int8*)(result - 2);
    result = memchr(result - 5, 112, 3);
    a4[1] = v10;
    if (result != 0) {
      v10 = (unsigned __int8*)result;
    }
    else {
      v10 = v11;
    }
    a4[2] = v10;
    if (a3 == v10) {
      goto LABEL_34;
    }
  }
  else {
    a4[1] = result;
    a4[2] = v10;
  }
  v12 = ((_BYTE)v10 - (_BYTE)a3) & 7;
  v13 = a3;
  if ((((_BYTE)v10 - (_BYTE)a3) & 7) != 0) {
    v13 = a3;
    do {
      v14 = *v13;
      if ((unsigned int)(v14 - 97) < 6) {
        LOBYTE(v14) = v14 - 32;
      }
      --v12;
      *v13++ = v14;
    } while (v12 != 0);
  }
  if ((unsigned __int64)(a3 - v10) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      v15 = *v13;
      if ((unsigned int)(v15 - 97) < 6) {
        LOBYTE(v15) = v15 - 32;
      }
      *v13 = v15;
      v16 = v13[1];
      if ((unsigned int)(v16 - 97) < 6) {
        LOBYTE(v16) = v16 - 32;
      }
      v13[1] = v16;
      v17 = v13[2];
      if ((unsigned int)(v17 - 97) < 6) {
        LOBYTE(v17) = v17 - 32;
      }
      v13[2] = v17;
      v18 = v13[3];
      if ((unsigned int)(v18 - 97) < 6) {
        LOBYTE(v18) = v18 - 32;
      }
      v13[3] = v18;
      v19 = v13[4];
      if ((unsigned int)(v19 - 97) < 6) {
        LOBYTE(v19) = v19 - 32;
      }
      v13[4] = v19;
      v20 = v13[5];
      if ((unsigned int)(v20 - 97) < 6) {
        LOBYTE(v20) = v20 - 32;
      }
      v13[5] = v20;
      v21 = v13[6];
      if ((unsigned int)(v21 - 97) < 6) {
        LOBYTE(v21) = v21 - 32;
      }
      v13[6] = v21;
      v22 = v13[7];
      if ((unsigned int)(v22 - 97) < 6) {
        LOBYTE(v22) = v22 - 32;
      }
      v13[7] = v22;
      v13 += 8;
    } while (v13 != v10);
  }
LABEL_34:
  *v10 = 80;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void fs_641180(PSEUDO_X8 x8_, unsigned int* a1,
                                          char a2, char a3, char a4,
                                          unsigned __int8 a5)
{
  char** a6 = (char**)PSEUDO_X8_VALUE(x8_);
  char* v6;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* result;
  char* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  int v58;
  char* v59;
  __int64 v60;
  bool v61;
  char* v62;
  __int64 v63;

  v6 = *((char**)a1 + 2);
  if ((a2 & 1) != 0) {
    v8 = 45;
  }
  else if (a4 == 2) {
    v8 = 43;
  }
  else {
    if (a4 != 3) {
      goto LABEL_8;
    }
    v8 = 32;
  }
  *v6++ = v8;
LABEL_8:
  if (a5 <= 0xEu) {
    if (a5 > 0xBu) {
      if (a5 == 12) {
        if ((a3 & 1) != 0) {
          v32 = *a1;
        }
        else {
          v32 = -1;
        }
        {
          (char*)X8CALL_X0(__int64, fs_641e80((void*)(a6), (__int64)a1, v32,
                                              (unsigned __int8*)v6));
          return;
        }
      }
      if (a5 == 13) {
        v10 = *((_QWORD*)a1 + 1);
        v9 = *((_QWORD*)a1 + 2);
        v11 = *a1;
        *a6 = v6;
        result = (char*)std___1_to_chars_1a0a280(v6, v9 + v10, 1, v11);
        v13 = v6 + 1;
        v14 = (unsigned __int8)v6[1];
        a6[3] = result;
        if (v14 == 46) {
          a6[1] = v13;
          v15 = result - v6 - 2;
          if (v15 < 4) {
          LABEL_19:
            a6[2] = result;
          }
          else {
            if ((unsigned __int64)v15 >= 6) {
              v15 = 6;
            }
            v16 = -v15;
            while (result[v16] != 101) {
              if (++v16 == -3) {
                goto LABEL_19;
              }
            }
            a6[2] = &result[v16];
          }
        }
        else {
          a6[1] = result;
          a6[2] = v13;
        }
        {
          result;
          return;
        }
      }
      v40 = *((_QWORD*)a1 + 1);
      v39 = *((_QWORD*)a1 + 2);
      v41 = *a1;
      *a6 = v6;
      result = (char*)std___1_to_chars_1a0a280(v6, v39 + v40, 1, v41);
      v42 = v6 + 1;
      v43 = (unsigned __int8)v6[1];
      a6[3] = result;
      if (v43 == 46) {
        a6[1] = v42;
        v44 = result - v6 - 2;
        if (v44 < 4) {
        LABEL_68:
          v42 = result;
          a6[2] = result;
        }
        else {
          if ((unsigned __int64)v44 >= 6) {
            v44 = 6;
          }
          v45 = -v44;
          while (result[v45] != 101) {
            if (++v45 == -3) {
              goto LABEL_68;
            }
          }
          v42 = &result[v45];
          a6[2] = v42;
        }
      }
      else {
        a6[1] = result;
        a6[2] = v42;
      }
    LABEL_97:
      *v42 = 69;
      {
        result;
        return;
      }
    }
    if (a5 == 0) {
      if ((a3 & 1) != 0) {
        v28 = *a1;
        v29 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
        a1[1] = 0;
        *a6 = v6;
        result = (char*)std___1_to_chars_1a0a280(v6, v29, 3, v28);
        v24 = v6 + 1;
        a6[3] = result;
        if (v6 + 1 != result) {
          v25 = (char*)(result - v24);
          if (result - v24 >= 4) {
            v30 = 6;
            if ((unsigned __int64)v25 < 6) {
              v30 = result - v24;
            }
            v27 = -v30;
            while (result[v27] != 101) {
              if (++v27 == -3) {
                goto LABEL_44;
              }
            }
          LABEL_90:
            a6[2] = &result[v27];
            if (*v24 != 46) {
              v24 = result;
            }
            goto LABEL_92;
          }
          goto LABEL_44;
        }
        goto LABEL_72;
      }
      v49 = *((_QWORD*)a1 + 1);
      v48 = *((_QWORD*)a1 + 2);
      *a6 = v6;
      v50 = (char*)std___1_to_chars_1a0a290(v6, v48 + v49);
      v51 = v50 - v6;
      v52 = v50;
      a6[3] = v50;
      if (v50 - v6 < 4) {
      LABEL_81:
        v54 = v50;
      }
      else {
        if (v51 >= 6) {
          v51 = 6;
        }
        v53 = -(__int64)v51;
        while (v50[v53] != 101) {
          if (++v53 == -3) {
            goto LABEL_81;
          }
        }
        v54 = &v50[v53];
      }
      a6[2] = v54;
      result = (char*)memchr(v6 + 1, 46, v54 - (v6 + 1));
      if (result != nullptr) {
        v21 = result;
      }
      else {
        v21 = v54;
      }
      if (v21 == v54) {
        v21 = v52;
      }
    LABEL_25:
      a6[1] = v21;
      {
        result;
        return;
      }
    }
    if ((a3 & 1) != 0) {
      v46 = *a1;
      v47 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
      *a6 = v6;
      if ((_DWORD)v46 != -1) {
        result = (char*)std___1_to_chars_1a0a280(v6, v47, 4, v46);
      LABEL_84:
        v58 = (unsigned __int8)v6[1];
        v57 = v6 + 1;
        a6[3] = result;
        if (v58 == 46) {
          v59 = result - 2;
          v60 = memchr(result - 6, 112, 4);
          v61 = v60 == 0;
          v62 = (char*)v60;
          result = v57;
          if (v61) {
            v57 = v59;
          }
          else {
            v57 = v62;
          }
        }
        a6[1] = result;
        a6[2] = v57;
        {
          result;
          return;
        }
      }
    }
    else {
      v56 = *((_QWORD*)a1 + 1);
      v55 = *((_QWORD*)a1 + 2);
      *a6 = v6;
      v47 = v55 + v56;
    }
    result = (char*)std___1_to_chars_1a0a2a0(v6, v47, 4);
    goto LABEL_84;
  }
  if ((unsigned int)a5 - 15 < 2) {
    v18 = *((_QWORD*)a1 + 1);
    v17 = *((_QWORD*)a1 + 2);
    v19 = *a1;
    *a6 = v6;
    result = (char*)std___1_to_chars_1a0a280(v6, v17 + v18, 2, v19);
    a6[2] = result;
    a6[3] = result;
    if (v19 != 0) {
      v20 = v19 + 1;
    }
    else {
      v20 = 0;
    }
    v21 = &result[-v20];
    goto LABEL_25;
  }
  if (a5 == 17) {
    v22 = *a1;
    v23 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
    a1[1] = 0;
    *a6 = v6;
    result = (char*)std___1_to_chars_1a0a280(v6, v23, 3, v22);
    v24 = v6 + 1;
    a6[3] = result;
    if (v6 + 1 != result) {
      v25 = (char*)(result - v24);
      if (result - v24 >= 4) {
        v26 = 6;
        if ((unsigned __int64)v25 < 6) {
          v26 = result - v24;
        }
        v27 = -v26;
        while (result[v27] != 101) {
          if (++v27 == -3) {
            goto LABEL_44;
          }
        }
        goto LABEL_90;
      }
    LABEL_44:
      a6[2] = result;
      v31 = result;
      result = (char*)memchr(v24, 46, v25);
      if (result != nullptr) {
        v24 = result;
      }
      else {
        v24 = v31;
      }
    LABEL_92:
      a6[1] = v24;
      {
        result;
        return;
      }
    }
  LABEL_72:
    a6[1] = result;
    a6[2] = result;
    {
      result;
      return;
    }
  }
  v33 = *a1;
  v34 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
  a1[1] = 0;
  *a6 = v6;
  v35 = (char*)std___1_to_chars_1a0a280(v6, v34, 3, v33);
  a6[3] = v35;
  result = v6 + 1;
  if (v6 + 1 == v35) {
    a6[1] = v35;
    v63 = 2;
  }
  else {
    v36 = v35 - result;
    if (v35 - result < 4) {
    LABEL_58:
      a6[2] = v35;
      result = (char*)memchr(result, 46, v36);
      if (result != nullptr) {
        v35 = result;
      }
    }
    else {
      v37 = 6;
      if (v36 < 6) {
        v37 = v35 - result;
      }
      v38 = -v37;
      while (v35[v38] != 101) {
        if (++v38 == -3) {
          goto LABEL_58;
        }
      }
      a6[2] = &v35[v38];
      if (*result == 46) {
        v35 = v6 + 1;
      }
    }
    v63 = 1;
  }
  a6[v63] = v35;
  v42 = a6[2];
  if (v42 != a6[3]) {
    goto LABEL_97;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void fs_641e80(PSEUDO_X8 x8_, __int64 a1,
                                          unsigned int a2, unsigned __int8* a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 result;
  int v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  __int64 v12;
  unsigned __int8* v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  *a4 = a3;
  v6 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16);
  if (a2 == -1) {
    result = std___1_to_chars_1a0a2a0(a3, v5 + v6, 4);
  }
  else {
    result = std___1_to_chars_1a0a280(a3, v5 + v6, 4, a2);
  }
  v10 = a3 + 1;
  v9 = a3[1];
  a4[3] = result;
  if (v9 == 46) {
    v11 = (unsigned __int8*)(result - 2);
    result = memchr(result - 6, 112, 4);
    a4[1] = v10;
    if (result != 0) {
      v10 = (unsigned __int8*)result;
    }
    else {
      v10 = v11;
    }
    a4[2] = v10;
    if (a3 == v10) {
      goto LABEL_34;
    }
  }
  else {
    a4[1] = result;
    a4[2] = v10;
  }
  v12 = ((_BYTE)v10 - (_BYTE)a3) & 7;
  v13 = a3;
  if ((((_BYTE)v10 - (_BYTE)a3) & 7) != 0) {
    v13 = a3;
    do {
      v14 = *v13;
      if ((unsigned int)(v14 - 97) < 6) {
        LOBYTE(v14) = v14 - 32;
      }
      --v12;
      *v13++ = v14;
    } while (v12 != 0);
  }
  if ((unsigned __int64)(a3 - v10) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      v15 = *v13;
      if ((unsigned int)(v15 - 97) < 6) {
        LOBYTE(v15) = v15 - 32;
      }
      *v13 = v15;
      v16 = v13[1];
      if ((unsigned int)(v16 - 97) < 6) {
        LOBYTE(v16) = v16 - 32;
      }
      v13[1] = v16;
      v17 = v13[2];
      if ((unsigned int)(v17 - 97) < 6) {
        LOBYTE(v17) = v17 - 32;
      }
      v13[2] = v17;
      v18 = v13[3];
      if ((unsigned int)(v18 - 97) < 6) {
        LOBYTE(v18) = v18 - 32;
      }
      v13[3] = v18;
      v19 = v13[4];
      if ((unsigned int)(v19 - 97) < 6) {
        LOBYTE(v19) = v19 - 32;
      }
      v13[4] = v19;
      v20 = v13[5];
      if ((unsigned int)(v20 - 97) < 6) {
        LOBYTE(v20) = v20 - 32;
      }
      v13[5] = v20;
      v21 = v13[6];
      if ((unsigned int)(v21 - 97) < 6) {
        LOBYTE(v21) = v21 - 32;
      }
      v13[6] = v21;
      v22 = v13[7];
      if ((unsigned int)(v22 - 97) < 6) {
        LOBYTE(v22) = v22 - 32;
      }
      v13[7] = v22;
      v13 += 8;
    } while (v13 != v10);
  }
LABEL_34:
  *v10 = 80;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void fs_6427a0(PSEUDO_X8 x8_, unsigned int* a1,
                                          char a2, char a3, char a4,
                                          unsigned __int8 a5)
{
  char** a6 = (char**)PSEUDO_X8_VALUE(x8_);
  char* v6;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* result;
  char* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  bool v32;
  char* v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  int v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char** v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  int v69;
  char* v70;
  char* v71;
  __int64 v72;
  char* v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;

  v6 = *((char**)a1 + 2);
  if ((a2 & 1) != 0) {
    v8 = 45;
  }
  else if (a4 == 2) {
    v8 = 43;
  }
  else {
    if (a4 != 3) {
      goto LABEL_8;
    }
    v8 = 32;
  }
  *v6++ = v8;
LABEL_8:
  if (a5 <= 0xEu) {
    if (a5 > 0xBu) {
      if (a5 != 12) {
        if (a5 == 13) {
          v10 = *((_QWORD*)a1 + 1);
          v9 = *((_QWORD*)a1 + 2);
          v11 = *a1;
          *a6 = v6;
          result = (char*)std___1_to_chars_1a0a2b0(v6, v9 + v10, 1, v11);
          v13 = v6 + 1;
          v14 = (unsigned __int8)v6[1];
          a6[3] = result;
          if (v14 == 46) {
            a6[1] = v13;
            v15 = result - v6 - 2;
            if (v15 < 4) {
            LABEL_19:
              a6[2] = result;
            }
            else {
              if ((unsigned __int64)v15 >= 6) {
                v15 = 6;
              }
              v16 = -v15;
              while (result[v16] != 101) {
                if (++v16 == -3) {
                  goto LABEL_19;
                }
              }
              a6[2] = &result[v16];
            }
          }
          else {
            a6[1] = result;
            a6[2] = v13;
          }
          {
            result;
            return;
          }
        }
        v42 = *((_QWORD*)a1 + 1);
        v41 = *((_QWORD*)a1 + 2);
        v43 = *a1;
        *a6 = v6;
        result = (char*)std___1_to_chars_1a0a2b0(v6, v41 + v42, 1, v43);
        v44 = v6 + 1;
        v45 = (unsigned __int8)v6[1];
        a6[3] = result;
        if (v45 == 46) {
          a6[1] = v44;
          v46 = result - v6 - 2;
          if (v46 < 4) {
          LABEL_67:
            v44 = result;
            a6[2] = result;
          }
          else {
            if ((unsigned __int64)v46 >= 6) {
              v46 = 6;
            }
            v47 = -v46;
            while (result[v47] != 101) {
              if (++v47 == -3) {
                goto LABEL_67;
              }
            }
            v44 = &result[v47];
            a6[2] = v44;
          }
        }
        else {
          a6[1] = result;
          a6[2] = v44;
        }
      LABEL_96:
        *v44 = 69;
        {
          result;
          return;
        }
      }
      v32 = (a3 & 1) == 0;
      v33 = v6;
      if (v32) {
        v34 = -1;
      }
      else {
        v34 = *a1;
      }
      v65 = a6;
      *a6 = v33;
      v67 = *((_QWORD*)a1 + 1);
      v66 = *((_QWORD*)a1 + 2);
      v68 = v33;
      if (v34 == -1) {
        result = (char*)std___1_to_chars_1a0a2d0(v33, v66 + v67, 4);
      }
      else {
        result = (char*)std___1_to_chars_1a0a2b0(v33, v66 + v67, 4, v34);
      }
      v70 = v68 + 1;
      v69 = (unsigned __int8)v68[1];
      v65[3] = result;
      if (v69 == 46) {
        v71 = result - 2;
        result = (char*)memchr(result - 6, 112, 4);
        v65[1] = v70;
        if (result != nullptr) {
          v70 = result;
        }
        else {
          v70 = v71;
        }
        v65[2] = v70;
        if (v68 == v70) {
        LABEL_140:
          *v70 = 80;
          {
            result;
            return;
          }
        }
      }
      else {
        v65[1] = result;
        v65[2] = v70;
      }
      v72 = ((_BYTE)v70 - (_BYTE)v68) & 7;
      v73 = v68;
      if ((((_BYTE)v70 - (_BYTE)v68) & 7) != 0) {
        v73 = v68;
        do {
          v74 = (unsigned __int8)*v73;
          if ((unsigned int)(v74 - 97) < 6) {
            LOBYTE(v74) = v74 - 32;
          }
          --v72;
          *v73++ = v74;
        } while (v72 != 0);
      }
      if ((unsigned __int64)(v68 - v70) <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v75 = (unsigned __int8)*v73;
          if ((unsigned int)(v75 - 97) < 6) {
            LOBYTE(v75) = v75 - 32;
          }
          *v73 = v75;
          v76 = (unsigned __int8)v73[1];
          if ((unsigned int)(v76 - 97) < 6) {
            LOBYTE(v76) = v76 - 32;
          }
          v73[1] = v76;
          v77 = (unsigned __int8)v73[2];
          if ((unsigned int)(v77 - 97) < 6) {
            LOBYTE(v77) = v77 - 32;
          }
          v73[2] = v77;
          v78 = (unsigned __int8)v73[3];
          if ((unsigned int)(v78 - 97) < 6) {
            LOBYTE(v78) = v78 - 32;
          }
          v73[3] = v78;
          v79 = (unsigned __int8)v73[4];
          if ((unsigned int)(v79 - 97) < 6) {
            LOBYTE(v79) = v79 - 32;
          }
          v73[4] = v79;
          v80 = (unsigned __int8)v73[5];
          if ((unsigned int)(v80 - 97) < 6) {
            LOBYTE(v80) = v80 - 32;
          }
          v73[5] = v80;
          v81 = (unsigned __int8)v73[6];
          if ((unsigned int)(v81 - 97) < 6) {
            LOBYTE(v81) = v81 - 32;
          }
          v73[6] = v81;
          v82 = (unsigned __int8)v73[7];
          if ((unsigned int)(v82 - 97) < 6) {
            LOBYTE(v82) = v82 - 32;
          }
          v73[7] = v82;
          v73 += 8;
        } while (v73 != v70);
      }
      goto LABEL_140;
    }
    if (a5 == 0) {
      if ((a3 & 1) != 0) {
        v28 = *a1;
        v29 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
        a1[1] = 0;
        *a6 = v6;
        result = (char*)std___1_to_chars_1a0a2b0(v6, v29, 3, v28);
        v24 = v6 + 1;
        a6[3] = result;
        if (v6 + 1 != result) {
          v25 = result - v24;
          if (result - v24 >= 4) {
            v30 = 6;
            if (v25 < 6) {
              v30 = result - v24;
            }
            v27 = -v30;
            while (result[v27] != 101) {
              if (++v27 == -3) {
                goto LABEL_44;
              }
            }
          LABEL_89:
            a6[2] = &result[v27];
            if (*v24 != 46) {
              v24 = result;
            }
            goto LABEL_91;
          }
          goto LABEL_44;
        }
        goto LABEL_71;
      }
      v51 = *((_QWORD*)a1 + 1);
      v50 = *((_QWORD*)a1 + 2);
      *a6 = v6;
      v52 = std___1_to_chars_1a0a2c0(v6, v50 + v51);
      v53 = v52 - (_QWORD)v6;
      v54 = v52;
      a6[3] = (char*)v52;
      if (v52 - (__int64)v6 < 4) {
      LABEL_80:
        v56 = v52;
      }
      else {
        if (v53 >= 6) {
          v53 = 6;
        }
        v55 = -(__int64)v53;
        while (*(_BYTE*)(v52 + v55) != 101) {
          if (++v55 == -3) {
            goto LABEL_80;
          }
        }
        v56 = v52 + v55;
      }
      a6[2] = (char*)v56;
      result = (char*)memchr(v6 + 1, 46, v56 - (_QWORD)(v6 + 1));
      if (result != nullptr) {
        v21 = result;
      }
      else {
        v21 = (char*)v56;
      }
      if (v21 == (char*)v56) {
        v21 = (char*)v54;
      }
    LABEL_25:
      a6[1] = v21;
      {
        result;
        return;
      }
    }
    if ((a3 & 1) != 0) {
      v48 = *a1;
      v49 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
      *a6 = v6;
      if ((_DWORD)v48 != -1) {
        result = (char*)std___1_to_chars_1a0a2b0(v6, v49, 4, v48);
      LABEL_83:
        v60 = (unsigned __int8)v6[1];
        v59 = v6 + 1;
        a6[3] = result;
        if (v60 == 46) {
          v61 = result - 2;
          v62 = memchr(result - 6, 112, 4);
          v32 = v62 == 0;
          v63 = v62;
          result = v59;
          if (v32) {
            v59 = v61;
          }
          else {
            v59 = (char*)v63;
          }
        }
        a6[1] = result;
        a6[2] = v59;
        {
          result;
          return;
        }
      }
    }
    else {
      v58 = *((_QWORD*)a1 + 1);
      v57 = *((_QWORD*)a1 + 2);
      *a6 = v6;
      v49 = v57 + v58;
    }
    result = (char*)std___1_to_chars_1a0a2d0(v6, v49, 4);
    goto LABEL_83;
  }
  if ((unsigned int)a5 - 15 < 2) {
    v18 = *((_QWORD*)a1 + 1);
    v17 = *((_QWORD*)a1 + 2);
    v19 = *a1;
    *a6 = v6;
    result = (char*)std___1_to_chars_1a0a2b0(v6, v17 + v18, 2, v19);
    a6[2] = result;
    a6[3] = result;
    if (v19 != 0) {
      v20 = v19 + 1;
    }
    else {
      v20 = 0;
    }
    v21 = &result[-v20];
    goto LABEL_25;
  }
  if (a5 == 17) {
    v22 = *a1;
    v23 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
    a1[1] = 0;
    *a6 = v6;
    result = (char*)std___1_to_chars_1a0a2b0(v6, v23, 3, v22);
    v24 = v6 + 1;
    a6[3] = result;
    if (v6 + 1 != result) {
      v25 = result - v24;
      if (result - v24 >= 4) {
        v26 = 6;
        if (v25 < 6) {
          v26 = result - v24;
        }
        v27 = -v26;
        while (result[v27] != 101) {
          if (++v27 == -3) {
            goto LABEL_44;
          }
        }
        goto LABEL_89;
      }
    LABEL_44:
      a6[2] = result;
      v31 = result;
      result = (char*)memchr(v24, 46, v25);
      if (result != nullptr) {
        v24 = result;
      }
      else {
        v24 = v31;
      }
    LABEL_91:
      a6[1] = v24;
      {
        result;
        return;
      }
    }
  LABEL_71:
    a6[1] = result;
    a6[2] = result;
    {
      result;
      return;
    }
  }
  v35 = *a1;
  v36 = *((_QWORD*)a1 + 2) + *((_QWORD*)a1 + 1);
  a1[1] = 0;
  *a6 = v6;
  v37 = std___1_to_chars_1a0a2b0(v6, v36, 3, v35);
  a6[3] = (char*)v37;
  result = v6 + 1;
  if (v6 + 1 == (char*)v37) {
    a6[1] = (char*)v37;
    v64 = 2;
  }
  else {
    v38 = v37 - (_QWORD)result;
    if (v37 - (__int64)result < 4) {
    LABEL_57:
      a6[2] = (char*)v37;
      result = (char*)memchr(result, 46, v38);
      if (result != nullptr) {
        v37 = (__int64)result;
      }
    }
    else {
      v39 = 6;
      if (v38 < 6) {
        v39 = v37 - (_QWORD)result;
      }
      v40 = -v39;
      while (*(_BYTE*)(v37 + v40) != 101) {
        if (++v40 == -3) {
          goto LABEL_57;
        }
      }
      a6[2] = (char*)(v37 + v40);
      if (*result == 46) {
        v37 = (__int64)(v6 + 1);
      }
    }
    v64 = 1;
  }
  a6[v64] = (char*)v37;
  v44 = a6[2];
  if (v44 != a6[3]) {
    goto LABEL_96;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
