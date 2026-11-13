#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* VariableAssign_62dbb0(_QWORD*, __int64, unsigned __int64);
__int64 GameRoutine_627e70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64* VariableAssign_62da90(__int64*, __int64, unsigned __int64);
extern _UNKNOWN as_g_context_slots;
extern __int64 (*GameData_1f8e750[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* as_g_script_manager_ptr;
__int64 as_Manager_executeContext_lambda0_Invoke_630510(__int64 result,
                                                        __int64 a2);
__int64 as_Manager_executeContext_lambda0_Invoke_630650(__int64 result,
                                                        __int64 a2);
__int64* as_Manager_executeContext_lambda0_Invoke_630790(__int64* result,
                                                         __int64 a2);
__int64 as_Manager_executeContext(__int64 a1, const char* a2, __int64 a3,
                                  __int64* a4, int a5);
__attribute__((swiftcall)) void GameRoutine_628be0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_d99f80(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void Manager_629480(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
    Manager_629620_alt1(PSEUDO_X8, _QWORD, _QWORD) __asm__("Manager_629620");
__attribute__((swiftcall)) void
    Manager_6297a0_alt1(PSEUDO_X8, _QWORD, _QWORD) __asm__("Manager_6297a0");
__attribute__((swiftcall)) void
Manager_629f20_alt1(PSEUDO_X8, __int64, _BYTE*, __int64, __int64, unsigned int,
                    int, char, __n128) __asm__("Manager_629f20");
__attribute__((swiftcall)) void Manager_d9b900(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               _QWORD, _QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_606c30(_QWORD);
__int64 GameRoutine_627e70_alt1(__int64, __int64, char, __int64,
                                char) __asm__("GameRoutine_627e70");
__int64 GameRoutine_62ddc0(_QWORD, _QWORD);
__int64 GameRoutine_62ec90(__int64, __int64);
__int64 GameRoutine_652cd0(__int64, __int64, __int64, int);
__int64 GameRoutine_d9db40(_QWORD, _QWORD, _QWORD);
__int64 Registration_629740(_QWORD, _QWORD);
__int64 Registration_629e60(_QWORD);
__int64 as_Variable_setVariable(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strcmp_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    _QWORD) __asm__("strcmp");
__int64 strcpy(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD as_g_context_slots_alt1[16384] __asm__("as_g_context_slots");
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*GameData_1f8e7e0[])();
extern __int64 GameData_212c5c8[2];
extern __int64 as_g_engine;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_25eca0(__int64*, __int64);
void (***GameRoutine_652dd0(__int64))(_QWORD);
void Manager_d9a500(__int64, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__int64 Manager_626d20(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void Manager_628460(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, char a3, char a4);
__attribute__((swiftcall)) void
Manager_629620_alt2(PSEUDO_X8 x8_, __int64 a1, _BYTE* a2, __int64 a3,
                    __int64 a4, __int64 a5, __int64 a6, __int64 a7,
                    __int64 a8) __asm__("Manager_629620");
__attribute__((swiftcall)) void
Manager_6297a0_alt2(PSEUDO_X8 x8_, __int64 a1, _BYTE* a2, __int64 a3,
                    __int64 a4, __int64 a5, __int64 a6, __int64 a7,
                    __int64 a8) __asm__("Manager_6297a0");
__attribute__((swiftcall)) void
Manager_629f20_alt3(PSEUDO_X8 x8_, __int64 a1, _BYTE* a2, __int64 a3,
                    __int64 a4, __int64 a5, __int64 a6, __int64 a7,
                    __int64 a8) __asm__("Manager_629f20");
__int64 Manager_62a740(__int64 a1, __int64 a2, char* a3, char* a4, __int64 a5);
__attribute__((swiftcall)) void Manager_62b060(PSEUDO_X8 x8_, __int64 a1,
                                               const char* a2, __int64 a3,
                                               __int64 a4, int a5, int a6,
                                               char a7);
__attribute__((swiftcall)) void
Manager_62b880_alt1(PSEUDO_X8 x8_, __int64 a1, const char* a2, __int64 a3,
                    __int64 a4, __int64 a5, int a6, int a7,
                    char a8) __asm__("Manager_62b880");
__int64 Manager_62c360(__int64 result, __int64 a2);
void Manager_d9a760(__int64 a1);
void Manager_d9a9c0(__int64 a1);
void Manager_d9ac20(__int64 a1);
__attribute__((swiftcall)) void Manager_d9ae80(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, __int64 a3,
                                               unsigned int a4);
__attribute__((swiftcall)) void Manager_d9b420(PSEUDO_X8 x8_, _QWORD* a1,
                                               unsigned __int8* a2);
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, __int64 a3,
                                               __int64 a4, unsigned int a5);
__attribute__((swiftcall)) void
Manager_d9ba20_alt1(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2,
                    _QWORD* a3) __asm__("Manager_d9ba20");
__int64 Manager_d9c8c0_alt1(__int64 a1, __int64* a2) __asm__("Manager_d9c8c0");
_QWORD* Manager_d9d980_alt1(_QWORD* result) __asm__("Manager_d9d980");
extern _UNKNOWN GameData_1ac689a;
__int64 Manager_6308c0(__int64 a1);
__attribute__((swiftcall)) void
Manager_629f20_alt2(PSEUDO_X8, __int64 result, _BYTE*, __int64, __int64,
                    unsigned int, int, char) __asm__("Manager_629f20");
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void Manager_d9ba20(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, _QWORD* a3);
void Manager_d9d980(_QWORD* a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
__int64 Manager_d9c8c0(__int64 a1, unsigned __int64* a2);
__int64 GameHr_62ec90(__int64, __int64);
__int64 GameRoutine_652cd0_alt1(__int64, const char*, __int64,
                                int) __asm__("GameRoutine_652cd0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
__int64 strcpy_alt1(__int64, const char*) __asm__("strcpy");
int strcmp_alt2(const char*, const char*) __asm__("strcmp");
__attribute__((swiftcall)) void Manager_629620(PSEUDO_X8 x8_, __int64 result,
                                               const char* a2);
__attribute__((swiftcall)) void Manager_6297a0(PSEUDO_X8 x8_, __int64 result,
                                               const char* a2);
__attribute__((swiftcall)) void Manager_629f20(PSEUDO_X8 x8_, __int64 result,
                                               const char* a2, __int64 a3,
                                               const char* a4, int a5, int a6,
                                               char a7);
__attribute__((swiftcall)) void as_d9b900(PSEUDO_X8, __int64, __int64, __int64,
                                          __int64, __int64, _QWORD*, __int64,
                                          __int64*);
__int64 as_627e70(__int64, __int64, char, __int64, char);
extern __int64 (*GameData_1f8e860[])();
unsigned __int64
GameRoutine_25eca0_alt1(__int64*, const char*) __asm__("GameRoutine_25eca0");
__attribute__((swiftcall)) void
as_Manager_executeContext_d9d220(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                 __int64 a3, _QWORD* a4, unsigned int a5);
__attribute__((swiftcall)) void
Manager_62b060_alt1(__attribute__((swift_indirect_result)) void*,
                    __int64 result, const char*, __int64, __int64, int, int,
                    char) __asm__("Manager_62b060");
__int64 GameHr_62ec90_alt1(_QWORD, _QWORD) __asm__("GameHr_62ec90");
__attribute__((swiftcall)) void
Manager_62b880(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
               const char* a2, __int64 a3, __int64 a4, __int64 a5, int a6,
               int a7, char a8);

__int64 Manager_626d20(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 i;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  long double v50;
  unsigned int v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;

  if ((*(_BYTE*)(a1 + 4785) & 1) == 0 && *(_BYTE*)(a2 + 336) != 0) {
    Manager_62c360(a1, a2);
  }
  *(_BYTE*)(a2 + 336) = 0;
  v4 = a1 + 24;
  v5 = 0;
  v6 = (char*)as_g_context_slots_ptr;
  do {
    if (*(_BYTE*)(a1 + 4785) == 1) {
      nn_os_LockMutex(a1 + 4792);
    }
    v7 = *(_QWORD*)(v4 + 8 * v5);
    if (v7 != 0) {
      do {
        v9 = *(unsigned int*)(v7 + 2160);
        if ((_DWORD)v9 == 0x2000) {
          v10 = 0;
        }
        else {
          v11 = &v6[16 * v9];
          v10 = *((_QWORD*)v11 + 1);
          if (v10 != 0 && *(_QWORD*)v11 != *(_QWORD*)(v7 + 2152)) {
            v10 = 0;
          }
        }
        if (v10 != a2 || (v12 = Manager_626d20(a1, v7),
                          v8 = (__int64*)(v4 + 8 * v5), (v12 & 1) == 0)) {
          v8 = (__int64*)(v7 + 2200);
        }
        v7 = *v8;
      } while (*v8 != 0);
    }
    if (*(_BYTE*)(a1 + 4785) == 1) {
      nn_os_UnlockMutex(a1 + 4792);
    }
    ++v5;
  } while (v5 != 32);
  v13 = 0;
  if (a2 != 0) {
    while (1) {
      if (*(_BYTE*)(a1 + 4785) == 1) {
        nn_os_LockMutex(a1 + 4792);
      }
      v14 = *(unsigned int*)(a2 + 8);
      if ((_DWORD)v14 != 0x2000 &&
          *((_QWORD*)(v15 = &v6[16 * v14]) + 1) == a2) {
        v16 = *(_QWORD*)v15;
        v17 = *(_QWORD*)(v4 + 8 * v13);
        if (v17 != 0) {
        LABEL_29:
          v18 = &v6[16 * v14];
          do {
            if (*(_DWORD*)(v17 + 52) == 1) {
              v20 = *(unsigned int*)(v17 + 2184);
              if ((_DWORD)v20 == 0x2000) {
                v21 = 0;
              }
              else {
                v22 = &v6[16 * v20];
                v21 = *((_QWORD*)v22 + 1);
                if (v21 != 0 && *(_QWORD*)v22 != *(_QWORD*)(v17 + 2176)) {
                  v21 = 0;
                }
              }
              if (v14 == 0x2000) {
                v23 = 0;
              }
              else {
                v23 = *((_QWORD*)v18 + 1);
                if (v23 != 0 && *(_QWORD*)v18 != v16) {
                  v23 = 0;
                }
              }
              if (v21 == v23) {
                v24 = *(_QWORD*)(a2 + 2176);
                *(_QWORD*)(v17 + 2176) = v24;
                v25 = *(unsigned int*)(a2 + 2184);
                *(_DWORD*)(v17 + 2184) = v25;
                if ((_DWORD)v25 == 0x2000 ||
                    *((_QWORD*)(v26 = &v6[16 * v25]) + 1) == 0) {
                  v19 = 0;
                }
                else if (*(_QWORD*)v26 == v24) {
                  v19 = *((_QWORD*)v26 + 1);
                }
                else {
                  v19 = 0;
                }
                *(_QWORD*)(v17 + 2192) = v19;
              }
            }
            v17 = *(_QWORD*)(v17 + 2200);
          } while (v17 != 0);
        }
      }
      else {
        v16 = 0;
        v14 = 0x2000;
        v17 = *(_QWORD*)(v4 + 8 * v13);
        if (v17 != 0) {
          goto LABEL_29;
        }
      }
      if (*(_BYTE*)(a1 + 4785) == 1) {
        nn_os_UnlockMutex(a1 + 4792);
      }
      if (++v13 == 32) {
        goto LABEL_71;
      }
    }
  }
  do {
    if (*(_BYTE*)(a1 + 4785) == 1) {
      nn_os_LockMutex(a1 + 4792);
    }
    for (i = *(_QWORD*)(v4 + 8 * v13); i != 0; i = *(_QWORD*)(i + 2200)) {
      if (*(_DWORD*)(i + 52) == 1) {
        v29 = *(unsigned int*)(i + 2184);
        if ((_DWORD)v29 == 0x2000 ||
            *((_QWORD*)(v30 = &v6[16 * v29]) + 1) == 0 ||
            *(_QWORD*)v30 != *(_QWORD*)(i + 2176)) {
          *(_QWORD*)(i + 2176) = (*(_UNKNOWN*)0x880LL);
          *(_DWORD*)(i + 2184) = (*(_UNKNOWN*)0x888LL);
          if ((*(_UNKNOWN*)0x888LL) == 0x2000 ||
              *((_QWORD*)(v31 = &v6[16 * (*(_UNKNOWN*)0x888LL)]) + 1) == 0) {
            v28 = 0;
          }
          else if (*(_QWORD*)v31 == (*(_UNKNOWN*)0x880LL)) {
            v28 = *((_QWORD*)v31 + 1);
          }
          else {
            v28 = 0;
          }
          *(_QWORD*)(i + 2192) = v28;
        }
      }
    }
    if (*(_BYTE*)(a1 + 4785) == 1) {
      nn_os_UnlockMutex(a1 + 4792);
    }
    ++v13;
  } while (v13 != 32);
LABEL_71:
  if (*(_BYTE*)(a1 + 4785) == 1) {
    nn_os_LockMutex(a1 + 4792);
  }
  v32 = *(int*)(a2 + 48);
  v33 = *(_QWORD*)(v4 + 8 * v32);
  if (v33 != 0) {
    if (v33 != a2) {
      while (1) {
        v34 = v33;
        v33 = *(_QWORD*)(v33 + 2200);
        if (v33 == 0) {
          goto LABEL_79;
        }
        if (v33 == a2) {
          *(_QWORD*)(v34 + 2200) = *(_QWORD*)(v33 + 2200);
          v35 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
              as_g_thread_info);
          if (a2 != 0) {
            v36 = as_g_script_manager;
            v37 = (unsigned __int64)v35 << 7;
            v38 = 4LL * v35;
            goto LABEL_83;
          }
          v56 = as_g_script_manager + ((unsigned __int64)v35 << 7);
          v57 = as_g_script_manager + 4LL * v35;
          v58 = *(int*)(v57 + 4640) + 1LL;
          *(_DWORD*)(v57 + 4640) = v58;
          *(_QWORD*)(v56 + 8 * v58 + 288) = 0;
          *(_QWORD*)(as_g_script_manager + 8LL * v35 + 4384) = 0;
          v44 = (*(_UNKNOWN*)0x8C0LL);
          if ((*(_UNKNOWN*)0x8C0LL) != 0) {
            goto LABEL_84;
          }
          goto LABEL_89;
        }
      }
    }
    *(_QWORD*)(v4 + 8 * v32) = *(_QWORD*)(v33 + 2200);
    v35 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
        as_g_thread_info);
    v37 = (unsigned __int64)v35 << 7;
    v38 = 4LL * v35;
    v36 = as_g_script_manager;
  LABEL_83:
    v41 = v36 + v37;
    v42 = v36 + v38;
    v43 = *(int*)(v42 + 4640) + 1LL;
    *(_DWORD*)(v42 + 4640) = v43;
    *(_QWORD*)(v41 + 8 * v43 + 288) = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v35 + 4384) =
        *(_QWORD*)(as_g_script_manager + v37 +
                   8LL * *(int*)(as_g_script_manager + v38 + 4640) + 288);
    v44 = *(_QWORD*)(a2 + 2240);
    if (v44 != 0) {
    LABEL_84:
      (*(void (**)(__int64))(*(_QWORD*)v44 + 48LL))(v44);
      v45 = *(_QWORD**)(a2 + 2240);
      *(_QWORD*)(a2 + 2240) = 0;
      if (v45 == (_QWORD*)(a2 + 2208)) {
        v46 = 32;
      }
      else {
        if (v45 == nullptr) {
          goto LABEL_89;
        }
        v46 = 40;
      }
      (*(void (**)(__int64))(*v45 + v46))((__int64)v45);
    }
  LABEL_89:
    (*(void (**)(_QWORD))(**(_QWORD**)(a2 + 24) + 48LL))(*(_QWORD*)(a2 + 24));
    GameRoutine_652dd0(v33);
    (**(void (***)(__int64))v33)(v33);
    v47 = (a2 - *(_QWORD*)(a1 + 5072)) / 0x8E0uLL;
    nn_os_LockMutex(a1 + 5096);
    v48 = *(_QWORD*)(a1 + 5080);
    v49 = *(int*)(a1 + 5088) - 1LL;
    *(_DWORD*)(a1 + 5088) = v49;
    *(_DWORD*)(v48 + 4 * v49) = v47;
    *(__n128*)&v50 = nn_os_UnlockMutex(a1 + 5096);
    v51 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)as_g_thread_info +
                                                 72LL))(as_g_thread_info, v50);
    v52 = (unsigned __int64)v51 << 7;
    v53 = 4LL * v51;
    v39 = 1;
    v54 = as_g_script_manager + v52;
    v55 = *(int*)(as_g_script_manager + v53 + 4640);
    *(_DWORD*)(as_g_script_manager + v53 + 4640) = v55 - 1;
    *(_QWORD*)(v54 + 8 * v55 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v51 + 4384) =
        *(_QWORD*)(as_g_script_manager + v52 +
                   8LL * *(int*)(as_g_script_manager + v53 + 4640) + 288);
    if ((*(_BYTE*)(a1 + 4785) & 1) == 0) {
      return v39;
    }
    goto LABEL_80;
  }
LABEL_79:
  v39 = 0;
  if (*(_BYTE*)(a1 + 4785) == 1) {
  LABEL_80:
    nn_os_UnlockMutex(a1 + 4792);
  }
  return v39;
}

__attribute__((swiftcall)) void Manager_628460(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, char a3, char a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v10;
  _QWORD* result;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _DWORD* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  char v33;
  unsigned int* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  _QWORD* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  char v65;
  char* v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  unsigned int v70;
  char* v71;
  _QWORD v72[2];
  char* v73;

  v10 = a4 & 1;
  if (strstr(a2, ".bin") != 0) {
    (GameRoutine_628be0((void*)((_QWORD*)a5), a1, a2, a3 & 1, v10),
     (void*)((_QWORD*)a5));
    return;
  }
  Manager_629480((void*)(&v69), a2);
  if ((v69 & 1) != 0) {
    v12 = v71;
  }
  else {
    v12 = (char*)&v69 + 1;
  }
  v13 = strlen(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v16, 16, 0);
    v72[1] = v14;
    v73 = v15;
    v72[0] = v16 | 1;
  }
  else {
    LOBYTE(v72[0]) = 2 * v13;
    v15 = (char*)v72 + 1;
    if (v13 == 0) {
      goto LABEL_15;
    }
  }
  memmove(v15, v12, v14);
LABEL_15:
  v17 = v69;
  v15[v14] = 0;
  if ((v17 & 1) != 0 && v71 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v71);
  }
  v65 = v72[0];
  v66 = v73;
  if ((v72[0] & 1) != 0) {
    v19 = v73;
  }
  else {
    v19 = (char*)v72 + 1;
  }
  Manager_629620_alt1((void*)(&v69), a1, v19);
  if (v70 != 0x2000) {
    v20 = (char*)&as_g_context_slots_alt1[2 * v70];
    v21 = *((_QWORD*)v20 + 1);
    if (v21 != 0) {
      v22 = *(_QWORD*)v20;
      if (*(_QWORD*)v20 == v69) {
        result = (_QWORD*)strcmp(a2, v21 + 184);
        if ((_DWORD)result == 0) {
          v23 = &fw_memory_g_heap_manager;
          if ((a4 & 1) != 0) {
            v24 = *(_QWORD*)(a1 + 16);
            if (v24 == 0) {
              goto LABEL_31;
            }
            do {
              *(_BYTE*)(v24 + 325) = 1;
              v24 = *(_QWORD*)(v24 + 48);
            } while (v24 != 0);
            v21 = *((_QWORD*)v20 + 1);
            if (v21 == 0) {
              v25 = 0;
            }
            else {
            LABEL_31:
              if (*(_QWORD*)v20 == v22) {
                v25 = v21;
              }
              else {
                v25 = 0;
              }
            }
            result = (_QWORD*)Registration_629e60(v25);
            v54 = *(_QWORD*)v20;
            v21 = *((_QWORD*)v20 + 1);
          }
          else {
            v54 = v22;
          }
          if (v54 == v22) {
            v55 = v21;
          }
          else {
            v55 = 0;
          }
          ++*(_DWORD*)(v55 + 312);
          v29 = *((_DWORD**)v20 + 1);
          if (v29[78] == 1) {
            v30 = v66;
            v33 = v65;
            if ((int)v29[242] >= 1) {
              v56 = 2294;
              v57 = 0;
              do {
                ++v57;
                if (*(_QWORD*)v20 != v22) {
                  v29 = nullptr;
                }
                v58 = &v29[v56];
                v56 += 6;
                if (as_g_context_slots_alt1[2 * *v58] == *((_QWORD*)v58 - 1)) {
                  v59 = as_g_context_slots_alt1[2 * *v58 + 1];
                }
                else {
                  v59 = 0;
                }
                ++*(_DWORD*)(v59 + 312);
                v29 = *((_DWORD**)v20 + 1);
              } while (v57 < (int)v29[242]);
            }
            goto LABEL_102;
          }
          v30 = v66;
        LABEL_101:
          v33 = v65;
        LABEL_102:
          v60 = *(_QWORD*)v20;
          *(_QWORD*)a5 = 0;
          *(_DWORD*)(a5 + 8) = 0x2000;
          if (v60 != v22) {
            *(_QWORD*)(a5 + 16) = 0;
            if ((v33 & 1) == 0) {
              result;
              return;
            }
            goto LABEL_110;
          }
          v61 = (unsigned int)v29[2];
          if ((_DWORD)v61 == 0x2000) {
            goto LABEL_107;
          }
          v62 = &as_g_context_slots_alt1[2 * v61];
          if ((_DWORD*)v62[1] != v29) {
            goto LABEL_107;
          }
          *(_DWORD*)(a5 + 8) = v61;
          v53 = *v62;
          goto LABEL_106;
        }
      LABEL_79:
        *(_QWORD*)a5 = 0;
        *(_QWORD*)(a5 + 16) = 0;
        *(_DWORD*)(a5 + 8) = 0x2000;
        v23 = (__int64*)fw_memory_g_heap_manager_ptr;
      LABEL_80:
        v30 = v66;
        if ((v65 & 1) == 0) {
          result;
          return;
        }
        goto LABEL_110;
      }
    }
  }
  result = (Manager_6297a0_alt1((void*)(&v67), a1, a2), (void*)(&v67));
  if (v68 != 0x2000) {
    v20 = (char*)&as_g_context_slots_alt1[2 * v68];
    v26 = *((_QWORD*)v20 + 1);
    if (v26 != 0) {
      v22 = *(_QWORD*)v20;
      if (*(_QWORD*)v20 == v67) {
        if (v19 != nullptr || *(_BYTE*)(v26 + 56) == 0) {
          result = (_QWORD*)strcmp(v19, v26 + 56);
          if ((_DWORD)result == 0) {
            v27 = v22;
            if ((a4 & 1) != 0) {
              result = (_QWORD*)Registration_629740(a1, &v67);
              v27 = *(_QWORD*)v20;
              v26 = *((_QWORD*)v20 + 1);
            }
            if (v27 == v22) {
              v28 = v26;
            }
            else {
              v28 = 0;
            }
            ++*(_DWORD*)(v28 + 312);
            v29 = *((_DWORD**)v20 + 1);
            if (v29[78] == 1) {
              v30 = v66;
              if ((int)v29[242] >= 1) {
                v31 = 2294;
                v32 = 0;
                v23 = (__int64*)fw_memory_g_heap_manager_ptr;
                v33 = v65;
                do {
                  ++v32;
                  if (*(_QWORD*)v20 != v22) {
                    v29 = nullptr;
                  }
                  v34 = &v29[v31];
                  v31 += 6;
                  if (as_g_context_slots_alt1[2 * *v34] ==
                      *((_QWORD*)v34 - 1)) {
                    v35 = as_g_context_slots_alt1[2 * *v34 + 1];
                  }
                  else {
                    v35 = 0;
                  }
                  ++*(_DWORD*)(v35 + 312);
                  v29 = *((_DWORD**)v20 + 1);
                } while (v32 < (int)v29[242]);
                goto LABEL_102;
              }
              v23 = &fw_memory_g_heap_manager;
            }
            else {
              v23 = &fw_memory_g_heap_manager;
              v30 = v66;
            }
            goto LABEL_101;
          }
        }
        goto LABEL_79;
      }
    }
  }
  nn_os_LockMutex(a1 + 5024);
  v36 = *(_QWORD*)(a1 + 5008);
  v37 = *(int*)(a1 + 5016);
  v38 = *(_DWORD*)(v36 + 4 * v37);
  *(_DWORD*)(a1 + 5016) = v37 + 1;
  *(_DWORD*)(v36 + 4 * v37) = -1;
  nn_os_UnlockMutex_alt1(a1 + 5024);
  v39 = *(_QWORD*)(a1 + 5000) + 10720LL * v38;
  GameRoutine_62ddc0(v39, a1);
  v40 = *(unsigned int*)(v39 + 8);
  if ((_DWORD)v40 != 0x2000 &&
      (v41 = &as_g_context_slots_alt1[2 * v40])[1] == v39) {
    v64 = *v41;
    if (v19 != nullptr) {
      goto LABEL_57;
    }
  }
  else {
    v64 = 0;
    LODWORD(v40) = 0x2000;
    if (v19 != nullptr) {
    LABEL_57:
      strcpy(v39 + 56, v19);
      goto LABEL_60;
    }
  }
  *(_BYTE*)(v39 + 56) = 0;
LABEL_60:
  strcpy(v39 + 184, a2);
  *(_QWORD*)(v39 + 48) = 0;
  *(_WORD*)(v39 + 320) = 0;
  *(_BYTE*)(v39 + 322) = 0;
  *(_DWORD*)(v39 + 968) = 0;
  *(_QWORD*)(v39 + 24) = 0;
  *(_QWORD*)(v39 + 32) = 0;
  *(_DWORD*)(v39 + 312) = 0;
  *(_BYTE*)(v39 + 323) = a3 & 1;
  *(_DWORD*)(v39 + 315) = 0;
  *(_BYTE*)(v39 + 324) = 0;
  *(_BYTE*)(v39 + 326) = 0;
  v23 = (__int64*)fw_memory_g_heap_manager_ptr;
  v42 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 32, 3);
  v43 = GameData_212c5c8[0];
  v42[2] = 0;
  v42[3] = 0;
  v42[4] = 0;
  v42[5] = 0;
  v42[6] = 0;
  v42[7] = 0;
  v42[8] = 0;
  v42[9] = 0;
  v42[10] = 0;
  v42[11] = 0;
  v42[12] = 0;
  v42[13] = 0;
  v42[14] = 0;
  v42[15] = 0;
  v42[16] = 0;
  v42[17] = 0;
  *v42 = v43 + 16;
  v42[1] = 0;
  strcpy(v42 + 1, a2);
  *(_QWORD*)(v39 + 24) = v42;
  (*(void (**)(_QWORD*))(*v42 + 32LL))(v42);
  result = (_QWORD*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(v39 + 24) + 48LL))(
      *(_QWORD*)(v39 + 24));
  if (result == nullptr) {
    GameRoutine_606c30(v39);
    (**(void (***)(__int64))v39)(v39);
    v47 = (v39 - *(_QWORD*)(a1 + 5000)) / 0x29E0uLL;
    nn_os_LockMutex(a1 + 5024);
    v48 = *(_QWORD*)(a1 + 5008);
    v49 = *(int*)(a1 + 5016) - 1LL;
    *(_DWORD*)(a1 + 5016) = v49;
    *(_DWORD*)(v48 + 4 * v49) = v47;
    result = (_QWORD*)nn_os_UnlockMutex_alt1(a1 + 5024);
    *(_QWORD*)a5 = 0;
    *(_QWORD*)(a5 + 16) = 0;
    *(_DWORD*)(a5 + 8) = 0x2000;
    goto LABEL_80;
  }
  v44 = *(_DWORD*)(v39 + 312);
  *(_BYTE*)(v39 + 324) = v10;
  *(_DWORD*)(v39 + 312) = v44 + 1;
  if (*(_BYTE*)(a1 + 4785) == 1) {
    result = (_QWORD*)nn_os_LockMutex(a1 + 4792);
  }
  v45 = *(_QWORD*)(a1 + 16);
  if (v45 != 0) {
    do {
      v46 = v45;
      v45 = *(_QWORD*)(v45 + 48);
    } while (v45 != 0);
    *(_QWORD*)(v46 + 48) = v39;
  }
  else {
    *(_QWORD*)(a1 + 16) = v39;
  }
  if (*(_BYTE*)(a1 + 4785) == 1) {
    result = (_QWORD*)nn_os_UnlockMutex_alt1(a1 + 4792);
  }
  v30 = v66;
  v33 = v65;
  *(_BYTE*)(v39 + 317) = 1;
  if ((_DWORD)v40 != 0x2000) {
    v50 = &as_g_context_slots_alt1[2 * (unsigned int)v40];
    v29 = (_DWORD*)v50[1];
    if (v29 != nullptr && *v50 == v64) {
      *(_QWORD*)a5 = 0;
      *(_DWORD*)(a5 + 8) = 0x2000;
      v51 = (unsigned int)v29[2];
      if ((_DWORD)v51 == 0x2000 ||
          (_DWORD*)(v52 = &as_g_context_slots_alt1[2 * v51])[1] != v29) {
      LABEL_107:
        *(_QWORD*)(a5 + 16) = v29;
        if ((v33 & 1) == 0) {
          result;
          return;
        }
        goto LABEL_110;
      }
      v53 = *v52;
      *(_DWORD*)(a5 + 8) = v51;
    LABEL_106:
      *(_QWORD*)a5 = v53;
      goto LABEL_107;
    }
  }
  *(_QWORD*)a5 = 0;
  *(_QWORD*)(a5 + 16) = 0;
  *(_DWORD*)(a5 + 8) = 0x2000;
  if ((v65 & 1) == 0) {
    result;
    return;
  }
LABEL_110:
  if (v30 != nullptr) {
    v63 = 128;
    if (*(_QWORD*)(*v23 + 200) == 0) {
      v63 = 56;
    }
    {
      (_QWORD*)nn_mem_StandardAllocator_Free(*v23 + v63, v30);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Manager_629620(PSEUDO_X8 x8_, __int64 result,
                                               const char* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  if (a2 == nullptr || *a2 == 0) {
    goto LABEL_9;
  }
  v5 = result;
  if (*(_BYTE*)(result + 4785) == 1) {
    result = nn_os_LockMutex_alt1(result + 4792);
    v6 = *(_QWORD*)(v5 + 16);
    if (v6 != 0) {
      goto LABEL_11;
    }
    goto LABEL_7;
  }
  v6 = *(_QWORD*)(result + 16);
  if (v6 == 0) {
  LABEL_7:
    if (*(_BYTE*)(v5 + 4785) == 1) {
      result = nn_os_UnlockMutex_alt2(v5 + 4792);
    }
  LABEL_9:
    *(_QWORD*)a3 = 0;
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)(a3 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
LABEL_11:
  while (1) {
    if ((*(_DWORD*)(v6 + 312) & 0x80000000) == 0) {
      result = strcmp_alt2((const char*)(v6 + 56), a2);
      if ((_DWORD)result == 0) {
        break;
      }
    }
    v6 = *(_QWORD*)(v6 + 48);
    if (v6 == 0) {
      goto LABEL_7;
    }
  }
  if (*(_BYTE*)(v5 + 4785) == 1) {
    result = nn_os_UnlockMutex_alt2(v5 + 4792);
  }
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  v7 = *(unsigned int*)(v6 + 8);
  if ((_DWORD)v7 != 0x2000) {
    v8 = (_QWORD*)((char*)&as_g_context_slots + 16 * v7);
    if (v8[1] == v6) {
      *(_DWORD*)(a3 + 8) = v7;
      *(_QWORD*)a3 = *v8;
    }
  }
  *(_QWORD*)(a3 + 16) = v6;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Manager_6297a0(PSEUDO_X8 x8_, __int64 result,
                                               const char* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  if (a2 == nullptr || *a2 == 0) {
    goto LABEL_9;
  }
  v5 = result;
  if (*(_BYTE*)(result + 4785) == 1) {
    result = nn_os_LockMutex_alt1(result + 4792);
    v6 = *(_QWORD*)(v5 + 16);
    if (v6 != 0) {
      goto LABEL_11;
    }
    goto LABEL_7;
  }
  v6 = *(_QWORD*)(result + 16);
  if (v6 == 0) {
  LABEL_7:
    if (*(_BYTE*)(v5 + 4785) == 1) {
      result = nn_os_UnlockMutex_alt2(v5 + 4792);
    }
  LABEL_9:
    *(_QWORD*)a3 = 0;
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)(a3 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
LABEL_11:
  while (1) {
    if ((*(_DWORD*)(v6 + 312) & 0x80000000) == 0) {
      result = strcmp_alt2((const char*)(v6 + 184), a2);
      if ((_DWORD)result == 0) {
        break;
      }
    }
    v6 = *(_QWORD*)(v6 + 48);
    if (v6 == 0) {
      goto LABEL_7;
    }
  }
  if (*(_BYTE*)(v5 + 4785) == 1) {
    result = nn_os_UnlockMutex_alt2(v5 + 4792);
  }
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  v7 = *(unsigned int*)(v6 + 8);
  if ((_DWORD)v7 != 0x2000) {
    v8 = (_QWORD*)((char*)&as_g_context_slots + 16 * v7);
    if (v8[1] == v6) {
      *(_DWORD*)(a3 + 8) = v7;
      *(_QWORD*)a3 = *v8;
    }
  }
  *(_QWORD*)(a3 + 16) = v6;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Manager_629f20(PSEUDO_X8 x8_, __int64 result,
                                               const char* a2, __int64 a3,
                                               const char* a4, int a5, int a6,
                                               char a7)
{
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned int v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  unsigned int v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  char v93;

  v8 = *(unsigned int*)(a3 + 8);
  v10 = result;
  if ((_DWORD)v8 == 0x2000 ||
      (v11 = (_QWORD*)((char*)&as_g_context_slots + 16 * v8))[1] == 0) {
    v12 = 0;
    if (a2 == nullptr) {
      goto LABEL_26;
    }
  }
  else {
    if (*v11 == *(_QWORD*)a3) {
      v12 = v11[1];
    }
    else {
      v12 = 0;
    }
    if (a2 == nullptr) {
      goto LABEL_26;
    }
  }
  if (*a2 == 0) {
    goto LABEL_26;
  }
  v13 = result + 24;
  v14 = 0;
  v15 = as_g_context_slots_ptr;
  while (1) {
    if (*(_BYTE*)(v10 + 4785) != 1) {
      v16 = *(_QWORD*)(v13 + 8 * v14);
      if (v16 != 0) {
        break;
      }
      goto LABEL_16;
    }
    result = nn_os_LockMutex_alt1(v10 + 4792);
    v16 = *(_QWORD*)(v13 + 8 * v14);
    if (v16 != 0) {
      break;
    }
  LABEL_16:
    if (*(_BYTE*)(v10 + 4785) == 1) {
      result = nn_os_UnlockMutex_alt2(v10 + 4792);
    }
    if (++v14 == 32) {
      goto LABEL_26;
    }
  }
  while (1) {
    v17 = *(unsigned int*)(v16 + 8);
    if ((_DWORD)v17 != 0x2000) {
      v18 = v15[2 * v17 + 1];
      if (v18 == v16 && *(_DWORD*)(v18 + 52) == 1) {
        result = strcmp_alt2((const char*)(v16 + 80), a2);
        if ((_DWORD)result == 0) {
          break;
        }
      }
    }
    v16 = *(_QWORD*)(v16 + 2200);
    if (v16 == 0) {
      goto LABEL_16;
    }
  }
  if ((*(_BYTE*)(v10 + 4785) & 1) == 0 ||
      (result = nn_os_UnlockMutex_alt2(v10 + 4792),
       (_DWORD)(v17 = *(unsigned int*)(v16 + 8)) != 0x2000)) {
    if (v15[2 * v17 + 1] == v16) {
      goto LABEL_58;
    }
  }
LABEL_26:
  v19 = v12;
  if (v12 == 0) {
    goto LABEL_36;
  }
  v20 = *(_QWORD*)(v12 + 40);
  if (v20 == 0) {
    goto LABEL_36;
  }
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v22 = as_g_script_manager + ((unsigned __int64)v21 << 7);
  v23 = as_g_script_manager + 4LL * v21;
  v24 = *(int*)(v23 + 4640) + 1LL;
  *(_DWORD*)(v23 + 4640) = v24;
  *(_QWORD*)(v22 + 8 * v24 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * v21 + 4384) = 0;
  v25 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v20 + 104LL))(v20, a4);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v26 = (unsigned __int64)(unsigned int)result << 7;
  v27 = 4LL * (unsigned int)result;
  v28 = as_g_script_manager + v26;
  v29 = *(int*)(as_g_script_manager + v27 + 4640);
  *(_DWORD*)(as_g_script_manager + v27 + 4640) = v29 - 1;
  *(_QWORD*)(v28 + 8 * v29 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * (unsigned int)result + 4384) =
      *(_QWORD*)(as_g_script_manager + v26 +
                 8LL * *(int*)(as_g_script_manager + v27 + 4640) + 288);
  if (v25 == 0) {
  LABEL_36:
    if (*(_BYTE*)(v10 + 4785) == 1) {
      result = nn_os_LockMutex_alt1(v10 + 4792);
      v30 = *(_QWORD*)(v10 + 16);
      if (v30 == 0) {
        goto LABEL_33;
      }
    LABEL_43:
      while (1) {
        if (*(_BYTE*)(v30 + 324) == 1) {
          v44 = *(_QWORD*)(v30 + 40);
          if (v44 != 0) {
            v45 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
                as_g_thread_info);
            v46 = as_g_script_manager + ((unsigned __int64)v45 << 7);
            v47 = as_g_script_manager + 4LL * v45;
            v48 = *(int*)(v47 + 4640) + 1LL;
            *(_DWORD*)(v47 + 4640) = v48;
            *(_QWORD*)(v46 + 8 * v48 + 288) = 0;
            *(_QWORD*)(as_g_script_manager + 8LL * v45 + 4384) = 0;
            v25 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v44 +
                                                         104LL))(v44, a4);
            result = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                               72LL))(as_g_thread_info);
            v49 = (unsigned __int64)(unsigned int)result << 7;
            v50 = 4LL * (unsigned int)result;
            v51 = as_g_script_manager + v49;
            v52 = *(int*)(as_g_script_manager + v50 + 4640);
            *(_DWORD*)(as_g_script_manager + v50 + 4640) = v52 - 1;
            *(_QWORD*)(v51 + 8 * v52 + 288) = 0;
            *(_QWORD*)(as_g_script_manager + 8LL * (unsigned int)result +
                       4384) =
                *(_QWORD*)(as_g_script_manager + v49 +
                           8LL * *(int*)(as_g_script_manager + v50 + 4640) +
                           288);
            if (v25 != 0) {
              break;
            }
          }
        }
        v30 = *(_QWORD*)(v30 + 48);
        if (v30 == 0) {
          goto LABEL_33;
        }
      }
      v31 = 0;
      v19 = v30;
    }
    else {
      v30 = *(_QWORD*)(v10 + 16);
      if (v30 != 0) {
        goto LABEL_43;
      }
    LABEL_33:
      v31 = 1;
      v25 = 0;
    }
    if (*(_BYTE*)(v10 + 4785) == 1) {
      result = nn_os_UnlockMutex_alt2(v10 + 4792);
    }
    if (v31 != 0) {
      goto LABEL_58;
    }
  }
  nn_os_LockMutex_alt1(v10 + 5096);
  v32 = *(_QWORD*)(v10 + 5080);
  v33 = *(int*)(v10 + 5088);
  v34 = *(_DWORD*)(v32 + 4 * v33);
  *(_DWORD*)(v10 + 5088) = v33 + 1;
  *(_DWORD*)(v32 + 4 * v33) = -1;
  nn_os_UnlockMutex_alt2(v10 + 5096);
  v35 = *(_QWORD*)(v10 + 5072) + 2272LL * v34;
  GameHr_62ec90(v35, v10);
  v36 = *(unsigned int*)(v35 + 8);
  if ((_DWORD)v36 == 0x2000) {
    goto LABEL_39;
  }
  v37 = (__int64*)((char*)&as_g_context_slots + 16 * v36);
  v38 = v37[1];
  if (v38 == v35) {
    v93 = 0;
    v92 = *v37;
  }
  else {
  LABEL_39:
    v92 = 0;
    v38 = 0;
    v36 = 0x2000;
    v93 = 1;
  }
  v39 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  if (v38 != 0) {
    v40 = (unsigned __int64)v39 << 7;
    v41 = 4LL * v39;
    v42 = as_g_script_manager + v40;
    v43 = *(int*)(as_g_script_manager + v41 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v41 + 4640) = v43;
    *(_QWORD*)(v42 + 8 * v43 + 288) = *(_QWORD*)(v38 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v39 + 4384) =
        *(_QWORD*)(as_g_script_manager + v40 +
                   8LL * *(int*)(as_g_script_manager + v41 + 4640) + 288);
  }
  else {
    v53 = as_g_script_manager + ((unsigned __int64)v39 << 7);
    v54 = as_g_script_manager + 4LL * v39;
    v55 = *(int*)(v54 + 4640) + 1LL;
    *(_DWORD*)(v54 + 4640) = v55;
    *(_QWORD*)(v53 + 8 * v55 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v39 + 4384) = 0;
  }
  v56 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_engine + 464LL))(as_g_engine);
  GameRoutine_652cd0_alt1(v35, a2, v56, a5);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v57 = (unsigned __int64)(unsigned int)result << 7;
  v58 = 4LL * (unsigned int)result;
  v59 = as_g_script_manager + v57;
  v60 = *(int*)(as_g_script_manager + v58 + 4640);
  *(_DWORD*)(as_g_script_manager + v58 + 4640) = v60 - 1;
  *(_QWORD*)(v59 + 8 * v60 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * (unsigned int)result + 4384) =
      *(_QWORD*)(as_g_script_manager + v57 +
                 8LL * *(int*)(as_g_script_manager + v58 + 4640) + 288);
  if (v19 == 0) {
    goto LABEL_51;
  }
  v61 = *(unsigned int*)(v19 + 8);
  if ((_DWORD)v61 != 0x2000 &&
      (v62 = (__int64*)((char*)&as_g_context_slots + 16 * v61))[1] == v19) {
    v91 = *v62;
    *(_DWORD*)(v35 + 64) = v61;
    *(_QWORD*)(v35 + 56) = v91;
    v63 = v62[1];
    if (v63 != 0 && *v62 != v91) {
      v63 = 0;
    }
  }
  else {
  LABEL_51:
    v63 = 0;
    *(_QWORD*)(v35 + 56) = 0;
    *(_DWORD*)(v35 + 64) = 0x2000;
  }
  *(_QWORD*)(v35 + 72) = v63;
  v64 = *(_QWORD*)(v19 + 40);
  *(_QWORD*)(v35 + 32) = v64;
  if (v64 == 0) {
  LABEL_58:
    v67 = a8;
    *(_QWORD*)a8 = 0;
    *(_DWORD*)(a8 + 8) = 0x2000;
  LABEL_79:
    *(_QWORD*)(v67 + 16) = 0;
    {
      result;
      return;
    }
  }
  strcpy_alt1(v35 + 208, a4);
  if ((v93 & 1) != 0 ||
      (v65 = (_QWORD*)((char*)&as_g_context_slots + 16 * v36))[1] == 0) {
    v66 = 0;
  }
  else if (*v65 == v92) {
    v66 = v65[1];
  }
  else {
    v66 = 0;
  }
  v68 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  if (v66 != 0) {
    v69 = (unsigned __int64)v68 << 7;
    v70 = 4LL * v68;
    v71 = as_g_script_manager + v69;
    v72 = *(int*)(as_g_script_manager + v70 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v70 + 4640) = v72;
    *(_QWORD*)(v71 + 8 * v72 + 288) = *(_QWORD*)(v66 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v68 + 4384) =
        *(_QWORD*)(as_g_script_manager + v69 +
                   8LL * *(int*)(as_g_script_manager + v70 + 4640) + 288);
  }
  else {
    v73 = as_g_script_manager + ((unsigned __int64)v68 << 7);
    v74 = as_g_script_manager + 4LL * v68;
    v75 = *(int*)(v74 + 4640) + 1LL;
    *(_DWORD*)(v74 + 4640) = v75;
    *(_QWORD*)(v73 + 8 * v75 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v68 + 4384) = 0;
  }
  v76 = *(_QWORD*)(v35 + 24);
  *(_QWORD*)(v35 + 40) = v25;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v76 + 24LL))(v76, v25);
  v77 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v78 = (unsigned __int64)v77 << 7;
  v79 = 4LL * v77;
  v80 = as_g_script_manager + v78;
  v81 = *(int*)(as_g_script_manager + v79 + 4640);
  *(_DWORD*)(as_g_script_manager + v79 + 4640) = v81 - 1;
  *(_QWORD*)(v80 + 8 * v81 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * v77 + 4384) =
      *(_QWORD*)(as_g_script_manager + v78 +
                 8LL * *(int*)(as_g_script_manager + v79 + 4640) + 288);
  v82 = *(_QWORD*)(v35 + 24);
  *(_DWORD*)(v35 + 52) = 1;
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v82 + 464LL))(v82, 1);
  *(_DWORD*)(v35 + 2116) = a6;
  *(_WORD*)(v35 + 2144) = *(_WORD*)(v35 + 2144) & 0xFFBF | ((a7 & 1) << 6);
  if (*(_BYTE*)(v10 + 4785) == 1) {
    result = nn_os_LockMutex_alt1(v10 + 4792);
  }
  v83 = *(int*)(v35 + 48);
  v84 = *(_QWORD*)(v10 + 24 + 8 * v83);
  if (v84 != 0) {
    do {
      v85 = v84;
      v84 = *(_QWORD*)(v84 + 2200);
    } while (v84 != 0);
    *(_QWORD*)(v85 + 2200) = v35;
  }
  else {
    *(_QWORD*)(v10 + 24 + 8 * v83) = v35;
  }
  if (*(_BYTE*)(v10 + 4785) == 1) {
    result = nn_os_UnlockMutex_alt2(v10 + 4792);
  }
  if ((v93 & 1) != 0 ||
      (v86 = (_QWORD*)((char*)&as_g_context_slots + 16 * v36),
       (v87 = v86[1]) == 0) ||
      *v86 != v92) {
    v67 = a8;
    *(_DWORD*)(a8 + 8) = 0x2000;
    *(_QWORD*)a8 = 0;
    goto LABEL_79;
  }
  *(_DWORD*)(a8 + 8) = 0x2000;
  v88 = *(unsigned int*)(v87 + 8);
  *(_QWORD*)a8 = 0;
  if ((_DWORD)v88 != 0x2000) {
    v89 = (__int64*)((char*)&as_g_context_slots + 16 * v88);
    if (v89[1] == v87) {
      v90 = *v89;
      *(_DWORD*)(a8 + 8) = v88;
      *(_QWORD*)a8 = v90;
    }
  }
  *(_QWORD*)(a8 + 16) = v87;
  {
    result;
    return;
  }
}

__int64 Manager_62a740(__int64 a1, __int64 a2, char* a3, char* a4, __int64 a5)
{
  __int64 v5;
  char* v7;
  char* v8;
  unsigned int v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v24;
  int v31;
  __int64 v32;
  __int64 v34;
  unsigned int v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;

  if (a2 == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a2 + 40);
  if (v5 == 0) {
    return 0;
  }
  if (a3 != nullptr) {
    v7 = a3;
  }
  else {
    v7 = &GameData_1a9f09e;
  }
  if (a4 != nullptr) {
    v8 = a4;
  }
  else {
    v8 = &GameData_1a9f09e;
  }
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      (__int64)as_g_thread_info);
  v10 = as_g_script_manager + ((unsigned __int64)v9 << 7);
  v11 = as_g_script_manager + 4LL * v9;
  v12 = *(int*)(v11 + 4640) + 1LL;
  *(_DWORD*)(v11 + 4640) = v12;
  *(_QWORD*)(v10 + 8 * v12 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * v9 + 4384) = 0;
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 192LL))(v5);
  if (v13 < 1) {
  LABEL_19:
    v34 = 0;
  }
  else {
    v14 = v13;
    v15 = 0;
    while (1) {
      v16 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 200LL))(v5, v15);
      v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 56LL))(v16);
      if ((unsigned int)strcmp(v17, v7) == 0) {
        v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 48LL))(v16);
        if ((unsigned int)strcmp(v24, v8) == 0) {
          v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 192LL))(v16);
          if (v31 >= 1) {
            break;
          }
        }
      }
    LABEL_11:
      if (++v15 == v14) {
        goto LABEL_19;
      }
    }
    while (1) {
      v32 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v16 + 216LL))(
          v16, a5, 1);
      if (v32 != 0) {
        break;
      }
      if (--v31 == 0) {
        goto LABEL_11;
      }
    }
    v34 = v32;
  }
  v35 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v36 = (unsigned __int64)v35 << 7;
  v37 = 4LL * v35;
  v38 = as_g_script_manager + v36;
  v39 = *(int*)(as_g_script_manager + v37 + 4640);
  *(_DWORD*)(as_g_script_manager + v37 + 4640) = v39 - 1;
  *(_QWORD*)(v38 + 8 * v39 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * v35 + 4384) =
      *(_QWORD*)(as_g_script_manager + v36 +
                 8LL * *(int*)(as_g_script_manager + v37 + 4640) + 288);
  return v34;
}

__attribute__((swiftcall)) void Manager_62b060(PSEUDO_X8 x8_, __int64 a1,
                                               const char* a2, __int64 a3,
                                               __int64 a4, int a5, int a6,
                                               char a7)
{
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  unsigned int v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int16 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned int v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  unsigned int v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned int v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  char v98;
  __int64 v99;
  _BYTE v103[136];

  v9 = *(unsigned int*)(a3 + 8);
  if ((_DWORD)v9 != 0x2000) {
    v13 = &as_g_context_slots_alt1[2 * v9];
    v14 = v13[1];
    if (v14 == 0) {
      goto LABEL_8;
    }
    if (*v13 == *(_QWORD*)a3) {
      v15 = *(_QWORD*)(v14 + 40);
      if (v15 != 0) {
        v16 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
            as_g_thread_info);
        v17 = as_g_script_manager + ((unsigned __int64)v16 << 7);
        v18 = as_g_script_manager + 4LL * v16;
        v19 = *(int*)(v18 + 4640) + 1LL;
        *(_DWORD*)(v18 + 4640) = v19;
        *(_QWORD*)(v17 + 8 * v19 + 288) = 0;
        *(_QWORD*)(as_g_script_manager + 8LL * v16 + 4384) = 0;
        v20 =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 104LL))(v15, a4);
        v21 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
            as_g_thread_info);
        v22 = (unsigned __int64)v21 << 7;
        v23 = 4LL * v21;
        v24 = as_g_script_manager + v22;
        v25 = *(int*)(as_g_script_manager + v23 + 4640);
        *(_DWORD*)(as_g_script_manager + v23 + 4640) = v25 - 1;
        *(_QWORD*)(v24 + 8 * v25 + 288) = 0;
        *(_QWORD*)(as_g_script_manager + 8LL * v21 + 4384) =
            *(_QWORD*)(as_g_script_manager + v22 +
                       8LL * *(int*)(as_g_script_manager + v23 + 4640) + 288);
        if (v20 != 0) {
          goto LABEL_21;
        }
      }
      goto LABEL_8;
    }
  }
  v14 = 0;
LABEL_8:
  if (*(_BYTE*)(a1 + 4785) == 1) {
    nn_os_LockMutex(a1 + 4792);
  }
  v26 = *(_QWORD*)(a1 + 16);
  if (v26 != 0) {
    while (1) {
      if (*(_BYTE*)(v26 + 324) == 1) {
        v27 = *(_QWORD*)(v26 + 40);
        if (v27 != 0) {
          v28 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
              as_g_thread_info);
          v29 = as_g_script_manager + ((unsigned __int64)v28 << 7);
          v30 = as_g_script_manager + 4LL * v28;
          v31 = *(int*)(v30 + 4640) + 1LL;
          *(_DWORD*)(v30 + 4640) = v31;
          *(_QWORD*)(v29 + 8 * v31 + 288) = 0;
          *(_QWORD*)(as_g_script_manager + 8LL * v28 + 4384) = 0;
          v20 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v27 + 104LL))(v27,
                                                                           a4);
          v32 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
              as_g_thread_info);
          v33 = (unsigned __int64)v32 << 7;
          v34 = 4LL * v32;
          v35 = as_g_script_manager + v33;
          v36 = *(int*)(as_g_script_manager + v34 + 4640);
          *(_DWORD*)(as_g_script_manager + v34 + 4640) = v36 - 1;
          *(_QWORD*)(v35 + 8 * v36 + 288) = 0;
          *(_QWORD*)(as_g_script_manager + 8LL * v32 + 4384) =
              *(_QWORD*)(as_g_script_manager + v33 +
                         8LL * *(int*)(as_g_script_manager + v34 + 4640) + 288);
          if (v20 != 0) {
            break;
          }
        }
      }
      v26 = *(_QWORD*)(v26 + 48);
      if (v26 == 0) {
        goto LABEL_17;
      }
    }
    v37 = 0;
    v14 = v26;
  }
  else {
  LABEL_17:
    v37 = 1;
    v20 = 0;
  }
  if (*(_BYTE*)(a1 + 4785) == 1) {
    nn_os_UnlockMutex(a1 + 4792);
  }
  if (v37 != 0) {
    goto LABEL_62;
  }
LABEL_21:
  nn_os_LockMutex(a1 + 5096);
  v38 = *(_QWORD*)(a1 + 5080);
  v39 = *(int*)(a1 + 5088);
  v40 = *(_DWORD*)(v38 + 4 * v39);
  *(_DWORD*)(a1 + 5088) = v39 + 1;
  *(_DWORD*)(v38 + 4 * v39) = -1;
  nn_os_UnlockMutex(a1 + 5096);
  v41 = *(_QWORD*)(a1 + 5072) + 2272LL * v40;
  GameRoutine_62ec90(v41, a1);
  v46 = *(unsigned int*)(v41 + 8);
  if ((_DWORD)v46 != 0x2000 &&
      (v47 = &as_g_context_slots_alt1[2 * v46])[1] == v41) {
    v96 = *v47;
    sprintf(v103, "%s_%16zx", a2, v41);
    v99 = v96;
    if (v47[1] != 0) {
      v98 = 0;
      if (*v47 == v96) {
        v48 = v47[1];
      }
      else {
        v48 = 0;
      }
    }
    else {
      v98 = 0;
      v48 = 0;
    }
  }
  else {
    sprintf(v103, "%s_%16zx", a2, v41);
    v99 = 0;
    v48 = 0;
    LODWORD(v46) = 0x2000;
    v98 = 1;
  }
  v49 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  if (v48 != 0) {
    v50 = (unsigned __int64)v49 << 7;
    v51 = 4LL * v49;
    v52 = as_g_script_manager + v50;
    v53 = *(int*)(as_g_script_manager + v51 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v51 + 4640) = v53;
    *(_QWORD*)(v52 + 8 * v53 + 288) = *(_QWORD*)(v48 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v49 + 4384) =
        *(_QWORD*)(as_g_script_manager + v50 +
                   8LL * *(int*)(as_g_script_manager + v51 + 4640) + 288);
  }
  else {
    v54 = as_g_script_manager + ((unsigned __int64)v49 << 7);
    v55 = as_g_script_manager + 4LL * v49;
    v56 = *(int*)(v55 + 4640) + 1LL;
    *(_DWORD*)(v55 + 4640) = v56;
    *(_QWORD*)(v54 + 8 * v56 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v49 + 4384) = 0;
  }
  v57 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_engine + 464LL))(as_g_engine);
  *(_BYTE*)(v41 + 336) = 0;
  strcpy(v41 + 80, v103);
  *(_BYTE*)(v41 + 208) = 0;
  *(_QWORD*)(v41 + 24) = v57;
  *(_QWORD*)(v41 + 32) = 0;
  *(_QWORD*)(v41 + 40) = 0;
  *(_QWORD*)(v41 + 2152) = 0;
  *(_QWORD*)(v41 + 2168) = 0;
  *(_QWORD*)(v41 + 2176) = 0;
  *(_QWORD*)(v41 + 2104) = 0;
  *(_QWORD*)(v41 + 2112) = 0;
  *(_QWORD*)(v41 + 2192) = 0;
  *(_QWORD*)(v41 + 2200) = 0;
  *(_DWORD*)(v41 + 48) = a5;
  *(_DWORD*)(v41 + 52) = 0;
  *(_DWORD*)(v41 + 2160) = 0x2000;
  *(_DWORD*)(v41 + 2184) = 0x2000;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v57 + 480LL))(v57, v41);
  v58 = *(_WORD*)(v41 + 2144);
  v59 = *(_QWORD**)(v41 + 2240);
  *(_QWORD*)(v41 + 2240) = 0;
  *(_WORD*)(v41 + 2144) = v58 & 0xFE78 | 0x100;
  if (v59 == (_QWORD*)(v41 + 2208)) {
    v60 = 32;
    goto LABEL_31;
  }
  if (v59 != nullptr) {
    v60 = 40;
  LABEL_31:
    (*(void (**)(__int64))(*v59 + v60))((__int64)v59);
  }
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(v41 + 24) + 464LL))(
      *(_QWORD*)(v41 + 24), 0);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v41 + 24) + 448LL))(
      *(_QWORD*)(v41 + 24), 1);
  v61 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v62 = (unsigned __int64)v61 << 7;
  v63 = 4LL * v61;
  v64 = as_g_script_manager + v62;
  v65 = *(int*)(as_g_script_manager + v63 + 4640);
  *(_DWORD*)(as_g_script_manager + v63 + 4640) = v65 - 1;
  *(_QWORD*)(v64 + 8 * v65 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * v61 + 4384) =
      *(_QWORD*)(as_g_script_manager + v62 +
                 8LL * *(int*)(as_g_script_manager + v63 + 4640) + 288);
  if (v14 != 0 && (_DWORD)(v66 = *(unsigned int*)(v14 + 8)) != 0x2000 &&
      (v67 = &as_g_context_slots_alt1[2 * v66])[1] == v14) {
    v97 = *v67;
    *(_DWORD*)(v41 + 64) = v66;
    *(_QWORD*)(v41 + 56) = v97;
    v68 = v67[1];
    if (v68 != 0 && *v67 != v97) {
      v68 = 0;
    }
  }
  else {
    v68 = 0;
    *(_QWORD*)(v41 + 56) = 0;
    *(_DWORD*)(v41 + 64) = 0x2000;
  }
  *(_QWORD*)(v41 + 72) = v68;
  v69 = *(_QWORD*)(v14 + 40);
  *(_QWORD*)(v41 + 32) = v69;
  if (v69 == 0) {
    goto LABEL_62;
  }
  strcpy(v41 + 208, a4);
  if ((v98 & 1) != 0) {
    v70 = v99;
  }
  else {
    v70 = v99;
    v71 = &as_g_context_slots_alt1[2 * (unsigned int)v46];
    if (v71[1] != 0) {
      if (*v71 == v99) {
        v72 = v71[1];
      }
      else {
        v72 = 0;
      }
      goto LABEL_44;
    }
  }
  v72 = 0;
LABEL_44:
  v73 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  if (v72 != 0) {
    v74 = (unsigned __int64)v73 << 7;
    v75 = 4LL * v73;
    v76 = as_g_script_manager + v74;
    v77 = *(int*)(as_g_script_manager + v75 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v75 + 4640) = v77;
    *(_QWORD*)(v76 + 8 * v77 + 288) = *(_QWORD*)(v72 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v73 + 4384) =
        *(_QWORD*)(as_g_script_manager + v74 +
                   8LL * *(int*)(as_g_script_manager + v75 + 4640) + 288);
  }
  else {
    v78 = as_g_script_manager + ((unsigned __int64)v73 << 7);
    v79 = as_g_script_manager + 4LL * v73;
    v80 = *(int*)(v79 + 4640) + 1LL;
    *(_DWORD*)(v79 + 4640) = v80;
    *(_QWORD*)(v78 + 8 * v80 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v73 + 4384) = 0;
  }
  v81 = *(_QWORD*)(v41 + 24);
  *(_QWORD*)(v41 + 40) = v20;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v81 + 24LL))(v81, v20);
  v82 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v83 = (unsigned __int64)v82 << 7;
  v84 = 4LL * v82;
  v85 = as_g_script_manager + v83;
  v86 = *(int*)(as_g_script_manager + v84 + 4640);
  *(_DWORD*)(as_g_script_manager + v84 + 4640) = v86 - 1;
  *(_QWORD*)(v85 + 8 * v86 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * v82 + 4384) =
      *(_QWORD*)(as_g_script_manager + v83 +
                 8LL * *(int*)(as_g_script_manager + v84 + 4640) + 288);
  v87 = *(_QWORD*)(v41 + 24);
  *(_DWORD*)(v41 + 52) = 1;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v87 + 464LL))(v87, 1);
  *(_DWORD*)(v41 + 2116) = a6;
  *(_WORD*)(v41 + 2144) = *(_WORD*)(v41 + 2144) & 0xFFBF | ((a7 & 1) << 6);
  if (*(_BYTE*)(a1 + 4785) == 1) {
    nn_os_LockMutex(a1 + 4792);
  }
  v88 = *(int*)(v41 + 48);
  v89 = *(_QWORD*)(a1 + 24 + 8 * v88);
  if (v89 != 0) {
    do {
      v90 = v89;
      v89 = *(_QWORD*)(v89 + 2200);
    } while (v89 != 0);
    *(_QWORD*)(v90 + 2200) = v41;
  }
  else {
    *(_QWORD*)(a1 + 24 + 8 * v88) = v41;
  }
  if (*(_BYTE*)(a1 + 4785) == 1) {
    nn_os_UnlockMutex(a1 + 4792);
  }
  if ((v98 & 1) != 0 ||
      (v91 = &as_g_context_slots_alt1[2 * (unsigned int)v46],
       (v92 = v91[1]) == 0) ||
      *v91 != v70) {
  LABEL_62:
    *(_QWORD*)a8 = 0;
    *(_QWORD*)(a8 + 16) = 0;
    *(_DWORD*)(a8 + 8) = 0x2000;
    return;
  }
  *(_QWORD*)a8 = 0;
  *(_DWORD*)(a8 + 8) = 0x2000;
  v93 = *(unsigned int*)(v92 + 8);
  if ((_DWORD)v93 != 0x2000) {
    v94 = &as_g_context_slots_alt1[2 * v93];
    if (v94[1] == v92) {
      v95 = *v94;
      *(_DWORD*)(a8 + 8) = v93;
      *(_QWORD*)a8 = v95;
    }
  }
  *(_QWORD*)(a8 + 16) = v92;
}

__attribute__((swiftcall)) void

Manager_62b880(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
               const char* a2, __int64 a3, __int64 a4, __int64 a5, int a6,
               int a7, char a8)
{
  __int64 a9 = (__int64)(unsigned __int64)x8_;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  char v23;
  unsigned int v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16 v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned int v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  unsigned int v74;
  __int64 v75;
  _BYTE v77[136];

  if (a5 == 0) {
    X8CALL_X0(__int64,
              Manager_62b060_alt1((void*)(a9), a1, a2, a3, a4, a6, a7, a8));
    return;
  }
  nn_os_LockMutex(a1 + 5096);
  v16 = *(_QWORD*)(a1 + 5080);
  v17 = *(int*)(a1 + 5088);
  v18 = *(_DWORD*)(v16 + 4 * v17);
  *(_DWORD*)(a1 + 5088) = v17 + 1;
  *(_DWORD*)(v16 + 4 * v17) = -1;
  nn_os_UnlockMutex_alt1(a1 + 5096);
  v19 = *(_QWORD*)(a1 + 5072) + 2272LL * v18;
  GameHr_62ec90_alt1(v19, a1);
  v20 = *(unsigned int*)(v19 + 8);
  if ((_DWORD)v20 != 0x2000 &&
      (v21 = &as_g_context_slots_alt1[2 * v20])[1] == v19) {
    v72 = *v21;
    v74 = *(_DWORD*)(v19 + 8);
    sprintf(v77, "%s_%16zx", a2, v19);
    v75 = v72;
    v23 = 0;
    if (v21[1] != 0) {
      if (*v21 == v72) {
        v22 = v21[1];
      }
      else {
        v22 = 0;
      }
    }
    else {
      v22 = 0;
    }
  }
  else {
    sprintf(v77, "%s_%16zx", a2, v19);
    v22 = 0;
    v23 = 1;
    v74 = 0x2000;
    v75 = 0;
  }
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  if (v22 != 0) {
    v25 = (unsigned __int64)v24 << 7;
    v26 = 4LL * v24;
    v27 = as_g_script_manager + v25;
    v28 = *(int*)(as_g_script_manager + v26 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v26 + 4640) = v28;
    *(_QWORD*)(v27 + 8 * v28 + 288) = *(_QWORD*)(v22 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v24 + 4384) =
        *(_QWORD*)(as_g_script_manager + v25 +
                   8LL * *(int*)(as_g_script_manager + v26 + 4640) + 288);
  }
  else {
    v30 = as_g_script_manager + ((unsigned __int64)v24 << 7);
    v31 = as_g_script_manager + 4LL * v24;
    v32 = *(int*)(v31 + 4640) + 1LL;
    *(_DWORD*)(v31 + 4640) = v32;
    *(_QWORD*)(v30 + 8 * v32 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v24 + 4384) = 0;
  }
  v33 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_engine + 464LL))(as_g_engine);
  *(_BYTE*)(v19 + 336) = 0;
  strcpy(v19 + 80, v77);
  *(_BYTE*)(v19 + 208) = 0;
  *(_QWORD*)(v19 + 24) = v33;
  *(_QWORD*)(v19 + 32) = 0;
  *(_QWORD*)(v19 + 40) = 0;
  *(_DWORD*)(v19 + 48) = a6;
  *(_DWORD*)(v19 + 52) = 0;
  *(_QWORD*)(v19 + 2152) = 0;
  *(_QWORD*)(v19 + 2168) = 0;
  *(_QWORD*)(v19 + 2176) = 0;
  *(_DWORD*)(v19 + 2160) = 0x2000;
  *(_DWORD*)(v19 + 2184) = 0x2000;
  *(_QWORD*)(v19 + 2104) = 0;
  *(_QWORD*)(v19 + 2112) = 0;
  *(_QWORD*)(v19 + 2192) = 0;
  *(_QWORD*)(v19 + 2200) = 0;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v33 + 480LL))(v33, v19);
  v34 = *(_WORD*)(v19 + 2144);
  v35 = *(_QWORD**)(v19 + 2240);
  *(_QWORD*)(v19 + 2240) = 0;
  *(_WORD*)(v19 + 2144) = v34 & 0xFE78 | 0x100;
  if (v35 == (_QWORD*)(v19 + 2208)) {
    v37 = 32;
    v36 = as_g_context_slots_ptr;
    goto LABEL_13;
  }
  v36 = as_g_context_slots_alt1;
  if (v35 != nullptr) {
    v37 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*))(*v35 + v37))(v35);
  }
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(v19 + 24) + 464LL))(
      *(_QWORD*)(v19 + 24), 0);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v19 + 24) + 448LL))(
      *(_QWORD*)(v19 + 24), 1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v38 = (unsigned __int64)(unsigned int)result << 7;
  v39 = 4LL * (unsigned int)result;
  v40 = as_g_script_manager + v38;
  v41 = *(int*)(as_g_script_manager + v39 + 4640);
  *(_DWORD*)(as_g_script_manager + v39 + 4640) = v41 - 1;
  *(_QWORD*)(v40 + 8 * v41 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * (unsigned int)result + 4384) =
      *(_QWORD*)(as_g_script_manager + v38 +
                 8LL * *(int*)(as_g_script_manager + v39 + 4640) + 288);
  v42 = *(_QWORD*)a3;
  *(_QWORD*)(v19 + 56) = *(_QWORD*)a3;
  v43 = *(unsigned int*)(a3 + 8);
  *(_DWORD*)(v19 + 64) = v43;
  if ((_DWORD)v43 == 0x2000 || (v44 = &v36[2 * v43])[1] == 0) {
    v45 = 0;
  }
  else if (*v44 == v42) {
    v45 = v44[1];
  }
  else {
    v45 = 0;
  }
  *(_QWORD*)(v19 + 72) = v45;
  v46 = *(_QWORD*)(v36[2 * *(unsigned int*)(a3 + 8) + 1] + 40LL);
  *(_QWORD*)(v19 + 32) = v46;
  if (v46 == 0) {
  LABEL_46:
    *(_QWORD*)a9 = 0;
    *(_QWORD*)(a9 + 16) = 0;
    *(_DWORD*)(a9 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  strcpy(v19 + 208, a4);
  if ((v23 & 1) != 0) {
    v47 = v75;
  }
  else {
    v47 = v75;
    v48 = &v36[2 * v74];
    if (v48[1] != 0) {
      if (*v48 == v75) {
        v49 = v48[1];
      }
      else {
        v49 = 0;
      }
      goto LABEL_28;
    }
  }
  v49 = 0;
LABEL_28:
  v50 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  if (v49 != 0) {
    v51 = (unsigned __int64)v50 << 7;
    v52 = 4LL * v50;
    v53 = as_g_script_manager + v51;
    v54 = *(int*)(as_g_script_manager + v52 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v52 + 4640) = v54;
    *(_QWORD*)(v53 + 8 * v54 + 288) = *(_QWORD*)(v49 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v50 + 4384) =
        *(_QWORD*)(as_g_script_manager + v51 +
                   8LL * *(int*)(as_g_script_manager + v52 + 4640) + 288);
  }
  else {
    v55 = as_g_script_manager + ((unsigned __int64)v50 << 7);
    v56 = as_g_script_manager + 4LL * v50;
    v57 = *(int*)(v56 + 4640) + 1LL;
    *(_DWORD*)(v56 + 4640) = v57;
    *(_QWORD*)(v55 + 8 * v57 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v50 + 4384) = 0;
  }
  v58 = *(_QWORD*)(v19 + 24);
  *(_QWORD*)(v19 + 40) = a5;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v58 + 24LL))(v58, a5);
  v59 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v60 = (unsigned __int64)v59 << 7;
  v61 = 4LL * v59;
  v62 = as_g_script_manager + v60;
  v63 = *(int*)(as_g_script_manager + v61 + 4640);
  *(_DWORD*)(as_g_script_manager + v61 + 4640) = v63 - 1;
  *(_QWORD*)(v62 + 8 * v63 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * v59 + 4384) =
      *(_QWORD*)(as_g_script_manager + v60 +
                 8LL * *(int*)(as_g_script_manager + v61 + 4640) + 288);
  v64 = *(_QWORD*)(v19 + 24);
  *(_DWORD*)(v19 + 52) = 1;
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v64 + 464LL))(v64, 1);
  *(_DWORD*)(v19 + 2116) = a7;
  *(_WORD*)(v19 + 2144) = *(_WORD*)(v19 + 2144) & 0xFFBF | ((a8 & 1) << 6);
  if (*(_BYTE*)(a1 + 4785) == 1) {
    result = nn_os_LockMutex(a1 + 4792);
  }
  v65 = *(int*)(v19 + 48);
  v66 = *(_QWORD*)(a1 + 24 + 8 * v65);
  if (v66 != 0) {
    do {
      v67 = v66;
      v66 = *(_QWORD*)(v66 + 2200);
    } while (v66 != 0);
    *(_QWORD*)(v67 + 2200) = v19;
  }
  else {
    *(_QWORD*)(a1 + 24 + 8 * v65) = v19;
  }
  if (*(_BYTE*)(a1 + 4785) == 1) {
    result = nn_os_UnlockMutex_alt1(a1 + 4792);
  }
  if ((v23 & 1) != 0) {
    goto LABEL_46;
  }
  v68 = &v36[2 * v74];
  v69 = v68[1];
  if (v69 == 0 || *v68 != v47) {
    goto LABEL_46;
  }
  *(_QWORD*)a9 = 0;
  *(_DWORD*)(a9 + 8) = 0x2000;
  v70 = *(unsigned int*)(v69 + 8);
  if ((_DWORD)v70 != 0x2000) {
    v71 = &v36[2 * v70];
    if (v71[1] == v69) {
      *(_DWORD*)(a9 + 8) = v70;
      *(_QWORD*)a9 = *v71;
    }
  }
  *(_QWORD*)(a9 + 16) = v69;
  {
    result;
    return;
  }
}

__int64 Manager_62c360(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _BYTE v14[32];
    __int64 v15;
  } v14_;
  struct {
    __int64 v16;
    unsigned int v17;
  } v16_;

  if ((*(_WORD*)(a2 + 2144) & 0x100) != 0) {
    v3 = result;
    Manager_62b060((void*)((__int64)&v16_.v16), result, &GameData_1a9f09e,
                   a2 + 56, a2 + 336, *(_DWORD*)(a2 + 48), 0x8000, 2);
    v4 = v16_.v17;
    v5 = (char*)as_g_context_slots_ptr;
    if (v16_.v17 == 0x2000) {
      as_Variable_setVariable(504, a2 + 504);
      as_Variable_setVariable(544, a2 + 544);
      as_Variable_setVariable(584, a2 + 584);
      as_Variable_setVariable(624, a2 + 624);
      as_Variable_setVariable(664, a2 + 664);
      as_Variable_setVariable(704, a2 + 704);
      as_Variable_setVariable(744, a2 + 744);
      as_Variable_setVariable(784, a2 + 784);
      as_Variable_setVariable(824, a2 + 824);
      as_Variable_setVariable(864, a2 + 864);
      as_Variable_setVariable(904, a2 + 904);
      as_Variable_setVariable(944, a2 + 944);
      as_Variable_setVariable(984, a2 + 984);
      as_Variable_setVariable(1024, a2 + 1024);
      as_Variable_setVariable(1064, a2 + 1064);
      as_Variable_setVariable(1104, a2 + 1104);
      v6 = 0x2000;
    }
    else {
      v7 = (char*)as_g_context_slots_ptr + 16 * v16_.v17;
      v9 = *((_QWORD*)v7 + 1);
      v8 = v7 + 8;
      as_Variable_setVariable(v9 + 504, a2 + 504);
      as_Variable_setVariable(*(_QWORD*)v8 + 544LL, a2 + 544);
      as_Variable_setVariable(*(_QWORD*)v8 + 584LL, a2 + 584);
      as_Variable_setVariable(*(_QWORD*)v8 + 624LL, a2 + 624);
      as_Variable_setVariable(*(_QWORD*)v8 + 664LL, a2 + 664);
      as_Variable_setVariable(*(_QWORD*)v8 + 704LL, a2 + 704);
      as_Variable_setVariable(*(_QWORD*)v8 + 744LL, a2 + 744);
      as_Variable_setVariable(*(_QWORD*)v8 + 784LL, a2 + 784);
      as_Variable_setVariable(*(_QWORD*)v8 + 824LL, a2 + 824);
      as_Variable_setVariable(*(_QWORD*)v8 + 864LL, a2 + 864);
      as_Variable_setVariable(*(_QWORD*)v8 + 904LL, a2 + 904);
      as_Variable_setVariable(*(_QWORD*)v8 + 944LL, a2 + 944);
      as_Variable_setVariable(*(_QWORD*)v8 + 984LL, a2 + 984);
      as_Variable_setVariable(*(_QWORD*)v8 + 1024LL, a2 + 1024);
      as_Variable_setVariable(*(_QWORD*)v8 + 1064LL, a2 + 1064);
      as_Variable_setVariable(*(_QWORD*)v8 + 1104LL, a2 + 1104);
      v6 = v4;
      if (*(_DWORD*)(a2 + 496) == 7) {
        (*(void (**)(_QWORD, _QWORD, _QWORD))(
            **(_QWORD**)(*(_QWORD*)v8 + 24LL) + 160LL))(
            *(_QWORD*)(*(_QWORD*)v8 + 24LL), 0, *(_QWORD*)(a2 + 472));
        v6 = v4;
      }
    }
    v10 = &v5[16 * v6];
    v11 = v16_.v16;
    do {
      while ((_DWORD)v4 == 0x2000) {
        v14_.v15 = 0;
        GameRoutine_627e70_alt1(v3, 0, 1, (__int64)v14_.v14, 0);
      }
      if (*((_QWORD*)v10 + 1) != 0) {
        if (*(_QWORD*)v10 == v11) {
          v12 = *((_QWORD*)v10 + 1);
        }
        else {
          v12 = 0;
        }
      }
      else {
        v12 = 0;
      }
      v14_.v15 = 0;
      GameRoutine_627e70_alt1(v3, v12, 1, (__int64)v14_.v14, 0);
    } while (*(_DWORD*)(*((_QWORD*)v10 + 1) + 52LL) != 2);
    if (*(_QWORD*)v10 == v11) {
      v13 = *((_QWORD*)v10 + 1);
    }
    else {
      v13 = 0;
    }
    return Manager_626d20(v3, v13);
  }
  return result;
}

__int64 as_Manager_executeContext_lambda0_Invoke_630510(__int64 result,
                                                        __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(result + 8) != 0) {
    v2 = result;
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)a2 + 24LL) +
                                      200LL))(*(_QWORD*)(*(_QWORD*)a2 + 24LL));
    **(_DWORD**)(v2 + 8) = result;
  }
  return result;
}

__int64 as_Manager_executeContext_lambda0_Invoke_630650(__int64 result,
                                                        __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(result + 8) != 0) {
    v2 = result;
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)a2 + 24LL) +
                                      184LL))(*(_QWORD*)(*(_QWORD*)a2 + 24LL));
    **(_BYTE**)(v2 + 8) = (unsigned __int8)result != 0;
  }
  return result;
}

__int64* as_Manager_executeContext_lambda0_Invoke_630790(__int64* result,
                                                         __int64 a2)
{
  __int64* v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;

  if (result[1] != 0) {
    v2 = result;
    v3 = (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)a2 + 24LL) +
                                            240LL))(
        *(_QWORD*)(*(_QWORD*)a2 + 24LL));
    result = (__int64*)v2[1];
    if (result != v3) {
      v4 = *(unsigned __int8*)v3;
      if ((*(_BYTE*)result & 1) != 0) {
        if ((v4 & 1) != 0) {
          v8 = v3[2];
        }
        else {
          v8 = (__int64)v3 + 1;
        }
        if ((v4 & 1) != 0) {
          v9 = v3[1];
        }
        else {
          v9 = v4 >> 1;
        }
        return VariableAssign_62da90(result, v8, v9);
      }
      else if ((v4 & 1) != 0) {
        return VariableAssign_62dbb0(result, v3[2], v3[1]);
      }
      else {
        v5 = *v3;
        v6 = v3[1];
        v7 = v3[2];
        result[1] = v6;
        result[2] = v7;
        *result = v5;
      }
    }
  }
  return result;
}

__int64 Manager_6308c0(__int64 a1)
{

#pragma clang fp contract(off)
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "f64", "double");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "f32", "float");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "s64", "int64");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "u64", "uint64");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "s32", "int");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "u32", "uint");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "s16", "int16");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "u16", "uint16");
  (*(void (**)(__int64, void*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, &GameData_1ac689a, "int8");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "u8", "uint8");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_f64", "double");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_f32", "float");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_s64", "int64");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_u64", "uint64");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_s32", "int");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_u32", "uint");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_s16", "int16");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_u16", "uint16");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_s8", "int8");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "as_u8", "uint8");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "int64_t", "int64");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "uint64_t", "uint64");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "int32_t", "int");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "uint32_t", "uint");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "int16_t", "int16");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "uint16_t", "uint16");
  (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)a1 + 304LL))(
      a1, "int8_t", "int8");
  return (*(__int64 (**)(__int64, const char*, const char*))(
      *(_QWORD*)a1 + 304LL))(a1, "uint8_t", "uint8");
}

void Manager_d9a760(__int64 a1)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  char* v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int8* v29;
  unsigned __int8* v30;

  v2 = X8CALL_X0(__int64, GameRoutine_d99f80((void*)(&v29), a1));
  v3 = v29;
  v4 = v30;
  if (v29 != v30) {
    do {
      v5 = *v3;
      v6 = (v5 & 1) == 0;
      v7 = v5 >> 1;
      if (v6) {
        v8 = v7;
      }
      else {
        v8 = *((_QWORD*)v3 + 1);
      }
      if (v6) {
        v9 = v3 + 1;
      }
      else {
        v9 = *((unsigned __int8**)v3 + 2);
      }
      v10 = v8 + 9;
      if (v8 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1(v2);
      }
      if (v10 > 0x16) {
        if ((v10 | 7) == 0x17) {
          v13 = 26;
        }
        else {
          v13 = (v10 | 7) + 1;
        }
        v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16,
                                             0);
        v27 = v8 + 9;
        v28 = (char*)v12;
        v26 = v13 | 1;
        v11 = v13 | 1;
      }
      else {
        v11 = 2 * v10;
        v12 = 0;
        v27 = 0;
        v28 = nullptr;
        v26 = (unsigned __int8)(2 * v10);
      }
      v14 = (v11 & 1) == 0;
      if ((v11 & 1) != 0) {
        v15 = (char*)v12;
      }
      else {
        v15 = (char*)&v26 + 1;
      }
      *(_QWORD*)v15 = *(_QWORD*)"PreReload";
      v15[8] = 100;
      if (v14) {
        v16 = (char*)&v27 + 2;
      }
      else {
        v16 = (char*)(v12 + 9);
      }
      if (v8 != 0) {
        memmove(v16, v9, v8);
      }
      v16[v8] = 0;
      if ((v26 & 1) != 0) {
        v17 = v28;
      }
      else {
        v17 = (char*)&v26 + 1;
      }
      if ((v26 & 1) != 0) {
        v18 = v27;
      }
      else {
        v18 = (unsigned __int64)(unsigned __int8)v26 >> 1;
      }
      Manager_d9a500(a1, (__int64)v17, v18);
      if ((v26 & 1) != 0 && v28 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        v2 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v28);
      }
      v3 += 24;
    } while (v3 != v4);
    v3 = v29;
  }
  if (v3 != nullptr) {
    v20 = v30;
    if (v3 == v30) {
      goto LABEL_48;
    }
    v21 = v30;
    do {
      v22 = *(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0) {
        v23 = *((_QWORD*)v20 - 1);
        if (v23 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v24, v23);
        }
      }
      v20 = v21;
    } while (v21 != v3);
    v30 = v3;
    v3 = v29;
    if (v29 != nullptr) {
    LABEL_48:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v3);
    }
  }
}

void Manager_d9a9c0(__int64 a1)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  char* v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int8* v29;
  unsigned __int8* v30;

  v2 = X8CALL_X0(__int64, GameRoutine_d99f80((void*)(&v29), a1));
  v3 = v29;
  v4 = v30;
  if (v29 != v30) {
    do {
      v5 = *v3;
      v6 = (v5 & 1) == 0;
      v7 = v5 >> 1;
      if (v6) {
        v8 = v7;
      }
      else {
        v8 = *((_QWORD*)v3 + 1);
      }
      if (v6) {
        v9 = v3 + 1;
      }
      else {
        v9 = *((unsigned __int8**)v3 + 2);
      }
      v10 = v8 + 10;
      if (v8 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1(v2);
      }
      if (v10 > 0x16) {
        if ((v10 | 7) == 0x17) {
          v13 = 26;
        }
        else {
          v13 = (v10 | 7) + 1;
        }
        v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16,
                                             0);
        v27 = v8 + 10;
        v28 = (char*)v12;
        v26 = v13 | 1;
        v11 = v13 | 1;
      }
      else {
        v11 = 2 * v10;
        v12 = 0;
        v27 = 0;
        v28 = nullptr;
        v26 = (unsigned __int8)(2 * v10);
      }
      v14 = (v11 & 1) == 0;
      if ((v11 & 1) != 0) {
        v15 = (char*)v12;
      }
      else {
        v15 = (char*)&v26 + 1;
      }
      *(_QWORD*)v15 = *(_QWORD*)"PostReload";
      *((_WORD*)v15 + 4) = 25697;
      if (v14) {
        v16 = (char*)&v27 + 3;
      }
      else {
        v16 = (char*)(v12 + 10);
      }
      if (v8 != 0) {
        memmove(v16, v9, v8);
      }
      v16[v8] = 0;
      if ((v26 & 1) != 0) {
        v17 = v28;
      }
      else {
        v17 = (char*)&v26 + 1;
      }
      if ((v26 & 1) != 0) {
        v18 = v27;
      }
      else {
        v18 = (unsigned __int64)(unsigned __int8)v26 >> 1;
      }
      Manager_d9a500(a1, (__int64)v17, v18);
      if ((v26 & 1) != 0 && v28 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        v2 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v28);
      }
      v3 += 24;
    } while (v3 != v4);
    v3 = v29;
  }
  if (v3 != nullptr) {
    v20 = v30;
    if (v3 == v30) {
      goto LABEL_48;
    }
    v21 = v30;
    do {
      v22 = *(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0) {
        v23 = *((_QWORD*)v20 - 1);
        if (v23 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v24, v23);
        }
      }
      v20 = v21;
    } while (v21 != v3);
    v30 = v3;
    v3 = v29;
    if (v29 != nullptr) {
    LABEL_48:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v3);
    }
  }
}

void Manager_d9ac20(__int64 a1)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  char* v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int8* v29;
  unsigned __int8* v30;

  v2 = X8CALL_X0(__int64, GameRoutine_d99f80((void*)(&v29), a1));
  v3 = v29;
  v4 = v30;
  if (v29 != v30) {
    do {
      v5 = *v3;
      v6 = (v5 & 1) == 0;
      v7 = v5 >> 1;
      if (v6) {
        v8 = v7;
      }
      else {
        v8 = *((_QWORD*)v3 + 1);
      }
      if (v6) {
        v9 = v3 + 1;
      }
      else {
        v9 = *((unsigned __int8**)v3 + 2);
      }
      v10 = v8 + 5;
      if (v8 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1(v2);
      }
      if (v10 > 0x16) {
        if ((v10 | 7) == 0x17) {
          v13 = 26;
        }
        else {
          v13 = (v10 | 7) + 1;
        }
        v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16,
                                             0);
        v27 = v8 + 5;
        v28 = (char*)v12;
        v26 = v13 | 1;
        v11 = v13 | 1;
      }
      else {
        v11 = 2 * v10;
        v12 = 0;
        v27 = 0;
        v28 = nullptr;
        v26 = (unsigned __int8)(2 * v10);
      }
      v14 = (v11 & 1) == 0;
      if ((v11 & 1) != 0) {
        v15 = (char*)v12;
      }
      else {
        v15 = (char*)&v26 + 1;
      }
      v15[4] = 114;
      *(_DWORD*)v15 = 1702129221;
      if (v14) {
        v16 = (char*)&v26 + 6;
      }
      else {
        v16 = (char*)(v12 + 5);
      }
      if (v8 != 0) {
        memmove(v16, v9, v8);
      }
      v16[v8] = 0;
      if ((v26 & 1) != 0) {
        v17 = v28;
      }
      else {
        v17 = (char*)&v26 + 1;
      }
      if ((v26 & 1) != 0) {
        v18 = v27;
      }
      else {
        v18 = (unsigned __int64)(unsigned __int8)v26 >> 1;
      }
      Manager_d9a500(a1, (__int64)v17, v18);
      if ((v26 & 1) != 0 && v28 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        v2 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v28);
      }
      v3 += 24;
    } while (v3 != v4);
    v3 = v29;
  }
  if (v3 != nullptr) {
    v20 = v30;
    if (v3 == v30) {
      goto LABEL_48;
    }
    v21 = v30;
    do {
      v22 = *(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0) {
        v23 = *((_QWORD*)v20 - 1);
        if (v23 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v24, v23);
        }
      }
      v20 = v21;
    } while (v21 != v3);
    v30 = v3;
    v3 = v29;
    if (v29 != nullptr) {
    LABEL_48:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v3);
    }
  }
}

__attribute__((swiftcall)) void Manager_d9ae80(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, __int64 a3,
                                               unsigned int a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[3];
  struct {
    __int64 v11[2];
    __int64 v12;
  } v11_;
  struct {
    _BYTE v13[32];
    __int64 v14;
  } v13_;

  memset(v10, 0, sizeof(v10));
  v11_.v11[1] = 0;
  v11_.v12 = 0;
  v11_.v11[0] = 0;
  Manager_d9b900((void*)(a5), a1, (_QWORD)"void", 4, a2, a3, (_QWORD)v10,
                 a4, (_QWORD)v11_.v11);
  v6 = *(unsigned int*)(a5 + 8);
  if ((_DWORD)v6 != 0x2000) {
    v7 = (_QWORD*)((char*)&as_g_context_slots + 16 * v6);
    v8 = v7[1];
    if (v8 != 0 && *v7 == *(_QWORD*)a5 && *(_DWORD*)(v8 + 52) == 1) {
      v13_.v14 = 0;
      GameRoutine_627e70_alt1(*as_g_script_manager_ptr, v8, 0,
                              (__int64)v13_.v13, 0);
    }
  }
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v11_.v12);
  }
}

__attribute__((swiftcall)) void Manager_d9b420(PSEUDO_X8 x8_, _QWORD* a1,
                                               unsigned __int8* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  __n128 result;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  char* v32;
  __int64* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8* v38;
  unsigned int v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int8* v55;

  v3 = a1[13];
  if (v3 != 0 && a1[15] != 0) {
    v8 = *a2;
    v9 = (v8 & 1) == 0;
    v10 = v8 >> 1;
    v11 = v9 ? (__int64)(a2 + 1) : *((_QWORD*)a2 + 2);
    v12 = v9 ? v10 : *((_QWORD*)a2 + 1);
    v13 = std___1___hash_memory(v11, v12);
    v14 = v3 - 1;
    v15 = v13;
    if ((v3 & (v3 - 1)) != 0) {
      v16 = v13;
      if (v13 >= v3) {
        v16 = v13 % v3;
      }
    }
    else {
      v16 = v13 & v14;
    }
    v17 = *(__int64***)(a1[12] + 8 * v16);
    if (v17 != nullptr) {
      v18 = *v17;
      if (*v17 != nullptr) {
        if ((v3 & v14) == 0) {
          while (1) {
            v23 = v18[1];
            if (v15 == v23) {
              v24 = *((unsigned __int8*)v18 + 16);
              v25 = v18[3];
              if ((v24 & 1) == 0) {
                v25 = v24 >> 1;
              }
              if (v25 == v12) {
                v26 = (v24 & 1) != 0 ? (__int64*)v18[4]
                                     : (__int64*)((char*)v18 + 17);
                if ((unsigned int)memcmp(v26, v11, v12) == 0) {
                  goto LABEL_42;
                }
              }
            }
            else if ((v23 & v14) != v16) {
              goto LABEL_44;
            }
            v18 = (__int64*)*v18;
            if (v18 == nullptr) {
              goto LABEL_44;
            }
          }
        }
        do {
          v19 = v18[1];
          if (v15 == v19) {
            v20 = *((unsigned __int8*)v18 + 16);
            v21 = v18[3];
            if ((v20 & 1) == 0) {
              v21 = v20 >> 1;
            }
            if (v21 == v12) {
              v22 = (v20 & 1) != 0 ? (__int64*)v18[4]
                                   : (__int64*)((char*)v18 + 17);
              if ((unsigned int)memcmp(v22, v11, v12) == 0) {
              LABEL_42:
                v55 = a2;
                v27 = GameRoutine_d9db40(a1 + 12, a2, &v55);
                v29 = *(_QWORD*)(v27 + 48);
                *a3 = *(_QWORD*)(v27 + 40);
                a3[1] = v29;
                if (v29 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8),
                                            1u, memory_order_relaxed);
                }
                {
                  result;
                  return;
                }
              }
            }
          }
          else {
            if (v19 >= v3) {
              v19 %= v3;
            }
            if (v19 != v16) {
              break;
            }
          }
          v18 = (__int64*)*v18;
        } while (v18 != nullptr);
      }
    }
  }
LABEL_44:
  v30 = (_QWORD*)a1[4];
  v31 = (_QWORD*)a1[5];
  *a3 = 0;
  a3[1] = 0;
  if (v30 == v31) {
  LABEL_59:
    v55 = a2;
    v52 = GameRoutine_d9db40(a1 + 12, a2, &v55);
    v53 = (_QWORD*)(v52 + 40);
    v50 = 0;
    v51 = 0;
  }
  else {
    v32 = (char*)as_g_context_slots_ptr;
    v33 = as_g_script_manager_ptr;
    while (1) {
      v34 = *(unsigned int*)(*v30 + 8LL);
      if ((_DWORD)v34 != 0x2000) {
        v35 = &v32[16 * v34];
        v36 = *((_QWORD*)v35 + 1);
        if (v36 != 0 && *(_QWORD*)v35 == *(_QWORD*)*v30) {
          v37 = *(_QWORD*)(v36 + 40);
          if (v37 != 0) {
            v38 = (*a2 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
            v39 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
                (__int64)as_g_thread_info);
            v40 = *v33 + ((unsigned __int64)v39 << 7);
            v41 = *v33 + 4LL * v39;
            v42 = *(int*)(v41 + 4640) + 1LL;
            *(_DWORD*)(v41 + 4640) = v42;
            *(_QWORD*)(v40 + 8 * v42 + 288) = 0;
            *(_QWORD*)(*v33 + 8LL * v39 + 4384) = 0;
            v43 = (*(__int64 (**)(__int64, unsigned __int8*))(*(_QWORD*)v37 +
                                                              104LL))(v37, v38);
            v44 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
                as_g_thread_info);
            v45 = (unsigned __int64)v44 << 7;
            v46 = 4LL * v44;
            v47 = *v33 + v45;
            v48 = *v33 + v46;
            v49 = *(int*)(v48 + 4640);
            *(_DWORD*)(v48 + 4640) = v49 - 1;
            *(_QWORD*)(v47 + 8 * v49 + 288) = 0;
            *(_QWORD*)(*v33 + 8LL * v44 + 4384) =
                *(_QWORD*)(*v33 + v45 + 8LL * *(int*)(*v33 + v46 + 4640) + 288);
            if (v43 != 0) {
              break;
            }
          }
        }
      }
      v30 += 3;
      if (v30 == v31) {
        goto LABEL_59;
      }
    }
    v50 = *v30;
    v51 = v30[1];
    if (v51 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                memory_order_relaxed);
    }
    v55 = a2;
    *a3 = v50;
    a3[1] = v51;
    v52 = GameRoutine_d9db40(a1 + 12, a2, &v55);
    v53 = (_QWORD*)(v52 + 40);
    if (v51 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  *v53 = v50;
  v54 = *(_QWORD*)(v52 + 48);
  *(_QWORD*)(v52 + 48) = v51;
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    {
      std___1___shared_weak_count___release_weak(v54);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, __int64 a3,
                                               __int64 a4, unsigned int a5)
{
  __int64 a6 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11[2];
    __int64 v12;
  } v11_;
  struct {
    _BYTE v13[32];
    __int64 v14;
  } v13_;

  v11_.v11[1] = 0;
  v11_.v12 = 0;
  v11_.v11[0] = 0;
  Manager_d9b900((void*)(a6), a1, (_QWORD)"void", 4, a2, a3, a4, a5,
                 (_QWORD)v11_.v11);
  v7 = *(unsigned int*)(a6 + 8);
  if ((_DWORD)v7 != 0x2000) {
    v8 = (_QWORD*)((char*)&as_g_context_slots + 16 * v7);
    v9 = v8[1];
    if (v9 != 0 && *v8 == *(_QWORD*)a6 && *(_DWORD*)(v9 + 52) == 1) {
      v13_.v14 = 0;
      GameRoutine_627e70_alt1(*as_g_script_manager_ptr, v9, 0,
                              (__int64)v13_.v13, 0);
    }
  }
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v11_.v12);
  }
}

__attribute__((swiftcall)) void Manager_d9ba20(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  _BYTE* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  __int64 (*v24)(void);
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v27;
    __int64 v28;
  } v27_;
  struct {
    __int64 v29;
    unsigned int v30;
    char gap36_[4];
    __int64 v31;
  } v29_;

  *(_QWORD*)a4 = 0;
  *(_QWORD*)(a4 + 16) = 0;
  *(_DWORD*)(a4 + 8) = 0x2000;
  result = X8CALL_X0(__int64, Manager_d9b420((void*)(&v27_.v27), (_QWORD*)a1,
                                             (unsigned __int8*)a2));
  if (v27_.v27 != 0) {
    if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
      v9 = *(_BYTE**)(a1 + 24);
    }
    else {
      v9 = (_BYTE*)(a1 + 9);
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v10 = *(_QWORD*)(a2 + 16);
    }
    else {
      v10 = a2 + 1;
    }
    result =
        X8CALL_X0(__int64, Manager_629f20_alt2((void*)((__int64)&v29_.v29),
                                               *as_g_script_manager_ptr, v9,
                                               v27_.v27, v10, 0, 0x8000, 2));
    v11 = v29_.v29;
    v12 = v29_.v30;
    *(_QWORD*)a4 = v29_.v29;
    *(_DWORD*)(a4 + 8) = v12;
    if ((_DWORD)v12 == 0x2000 ||
        (v13 = &as_g_context_slots_alt1[2 * v12], (v14 = v13[1]) == 0)) {
      *(_QWORD*)(a4 + 16) = 0;
    }
    else {
      v15 = *v13;
      v16 = v15 == v11;
      if (v15 == v11) {
        v17 = v14;
      }
      else {
        v17 = 0;
      }
      *(_QWORD*)(a4 + 16) = v17;
      if (v16) {
        v18 = (_QWORD*)*a3;
        v19 = (_QWORD*)a3[1];
        if ((_QWORD*)*a3 != v19) {
          v20 = &as_g_context_slots_alt1[2 * v12];
          v21 = 0;
          do {
            if (v18 != nullptr) {
              v23 = *((_DWORD*)v18 + 6);
              if (v23 > 2) {
                switch (v23) {
                case 3:
                  result = (*(__int64 (**)(_QWORD, _QWORD, float))(
                      **(_QWORD**)(v20[1] + 24LL) + 136LL))(
                      *(_QWORD*)(v20[1] + 24LL), v21, *(float*)v18);
                  break;
                case 4:
                  v25 = v20[1];
                  if ((*(_BYTE*)v18 & 1) != 0) {
                    v26 = v18[2];
                  }
                  else {
                    v26 = (__int64)v18 + 1;
                  }
                  GameRoutine_25eca0(&v29_.v29, v26);
                  result = (*(__int64 (**)(_QWORD, _QWORD, __int64*))(
                      **(_QWORD**)(v25 + 24) + 160LL))(*(_QWORD*)(v25 + 24),
                                                       v21, &v29_.v29);
                  if ((v29_.v29 & 1) != 0) {
                    result = GameRoutine_25ec90(
                        v29_.v31, v29_.v29 & 0xFFFFFFFFFFFFFFFELL);
                  }
                  break;
                case 6:
                  v24 = *(__int64 (**)(void))(**(_QWORD**)(v20[1] + 24LL) +
                                              104LL);
                  result = ((__int64 (*)(_QWORD, _QWORD, _QWORD))v24)(
                      *(_QWORD*)(v20[1] + 24LL), v21, *(unsigned __int8*)v18);
                  break;
                default:
                  break;
                }
              }
              else {
                switch (v23) {
                case 0:
                  goto LABEL_29;
                case 1:
                  result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                      **(_QWORD**)(v20[1] + 24LL) + 128LL))(
                      *(_QWORD*)(v20[1] + 24LL), v21, *v18);
                  break;
                case 2:
                LABEL_29:
                  v24 = *(__int64 (**)(void))(**(_QWORD**)(v20[1] + 24LL) +
                                              120LL);
                  result = ((__int64 (*)(_QWORD, _QWORD, _QWORD))v24)(
                      *(_QWORD*)(v20[1] + 24LL), v21, *(unsigned int*)v18);
                  break;
                default:
                  break;
                }
              }
            }
            ++v21;
            v18 += 4;
          } while (v18 != v19);
        }
      }
    }
  }
  v22 = v27_.v28;
  if (v27_.v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27_.v28 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    {
      std___1___shared_weak_count___release_weak_alt1(v22);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 Manager_d9c8c0(__int64 a1, unsigned __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  char v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  unsigned __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 primeEm;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  unsigned __int64 v63;
  struct {
    __int64 v65;
    unsigned int v66;
  } v65_;
  char v67;
  struct {
    _QWORD v68[4];
    _QWORD* v69;
  } v68_;

  v3 = *(_QWORD*)(a1 + 64);
  if (v3 != 0 && *(_QWORD*)(a1 + 80) != 0) {
    v7 = *a2;
    v8 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v9 = *a2;
      if (v7 >= v3) {
        v9 = v7 % v3;
      }
    }
    else {
      v9 = v7 & v8;
    }
    v10 = *(__int64***)(*(_QWORD*)(a1 + 56) + 8 * v9);
    if (v10 != nullptr) {
      v11 = *v10;
      if (v11 != nullptr) {
        if ((v3 & v8) == 0) {
          while (1) {
            v13 = v11[1];
            if (v13 == v7) {
              if (v11[2] == v7) {
                goto LABEL_31;
              }
            }
            else if ((v13 & v8) != v9) {
              goto LABEL_24;
            }
            v11 = (__int64*)*v11;
            if (v11 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v12 = v11[1];
          if (v12 == v7) {
            if (v11[2] == v7) {
            LABEL_31:
              v18 = *((_BYTE*)v11 + 24);
              return v18 & 1;
            }
          }
          else {
            if (v12 >= v3) {
              v12 %= v3;
            }
            if (v12 != v9) {
              break;
            }
          }
          v11 = (__int64*)*v11;
        } while (v11 != nullptr);
      }
    }
  }
LABEL_24:
  v67 = 0;
  Manager_d9ba20((void*)((__int64)&v65_.v65), a1, (__int64)(a2 + 2), a2 + 5);
  if (v65_.v66 == 0x2000) {
    goto LABEL_34;
  }
  v14 = &as_g_context_slots_alt1[2 * v65_.v66];
  v15 = v14[1];
  if (v15 != 0 && *v14 == v65_.v65 && *(_DWORD*)(v15 + 52) == 1) {
    v68_.v69 = v68_.v68;
    v16 = *as_g_script_manager_ptr;
    v68_.v68[0] = GameData_1f8e7e0;
    v68_.v68[1] = &v67;
    GameRoutine_627e70_alt1(v16, v15, 0, (__int64)v68_.v68, 0);
    if (v68_.v69 == v68_.v68) {
      v17 = 32;
    }
    else {
      if (v68_.v69 == nullptr) {
        goto LABEL_34;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*v68_.v69 + v17))((__int64)v68_.v69);
  }
LABEL_34:
  v19 = v67;
  v20 = *a2;
  v21 = *(_QWORD*)(a1 + 64);
  if (v21 != 0) {
    v22 = v21 - 1;
    if ((v21 & (v21 - 1)) != 0) {
      v2 = *a2;
      if (v20 >= v21) {
        v2 = v20 % v21;
      }
    }
    else {
      v2 = v22 & v20;
    }
    v23 = *(__int64**)(*(_QWORD*)(a1 + 56) + 8 * v2);
    if (v23 != nullptr) {
      v24 = *v23;
      if (*v23 != 0) {
        if ((v21 & v22) == 0) {
          while (1) {
            v26 = *(_QWORD*)(v24 + 8);
            if (v26 == v20) {
              if (*(_QWORD*)(v24 + 16) == v20) {
                goto LABEL_55;
              }
            }
            else if ((v26 & v22) != v2) {
              goto LABEL_56;
            }
            v24 = *(_QWORD*)v24;
            if (v24 == 0) {
              goto LABEL_56;
            }
          }
        }
        do {
          v25 = *(_QWORD*)(v24 + 8);
          if (v25 == v20) {
            if (*(_QWORD*)(v24 + 16) == v20) {
            LABEL_55:
              v18 = v67;
              goto LABEL_131;
            }
          }
          else {
            if (v25 >= v21) {
              v25 %= v21;
            }
            if (v25 != v2) {
              break;
            }
          }
          v24 = *(_QWORD*)v24;
        } while (v24 != 0);
      }
    }
  }
LABEL_56:
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  v28 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v29 = *a2;
  v30 = *(float*)(a1 + 88);
  v24 = v28;
  *(_QWORD*)v28 = 0;
  *(_QWORD*)(v28 + 8) = v20;
  *(_BYTE*)(v28 + 24) = 0;
  *(_QWORD*)(v28 + 16) = v29;
  v31 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 80) + 1LL);
  if (v21 != 0 && (float)(v30 * (float)v21) >= v31) {
    goto LABEL_122;
  }
  v32 = v31 / v30;
  v33 = true;
  if (v21 >= 3) {
    v33 = (v21 & (v21 - 1)) != 0;
  }
  v34 = v33 | (2 * v21);
  v35 = vcvtps_u64_f32(v32);
  if (v34 <= v35) {
    v36 = v35;
  }
  else {
    v36 = v34;
  }
  if (v36 == 1) {
    v36 = 2;
  }
  else if ((v36 & (v36 - 1)) != 0) {
    primeEm = std___1___next_prime_alt1(v36);
    v21 = *(_QWORD*)(a1 + 64);
    v36 = primeEm;
  }
  if (v36 <= v21) {
    if (v36 >= v21) {
      goto LABEL_117;
    }
    v43 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 80) /
                         *(float*)(a1 + 88));
    if (v21 < 3 || (v21 & (v21 - 1)) != 0) {
      v43 = std___1___next_prime_alt1(v43);
    }
    else {
      v44 = 1LL << (-(char)__clz(v43 - 1) & 63);
      if (v43 >= 2) {
        v43 = v44;
      }
    }
    if (v36 <= v43) {
      v36 = v43;
    }
    if (v36 >= v21) {
      goto LABEL_117;
    }
    if (v36 == 0) {
      v58 = *(_QWORD*)(a1 + 56);
      *(_QWORD*)(a1 + 56) = 0;
      if (v58 != 0) {
        v59 = 128;
        if (*(_QWORD*)(*v27 + 200) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v27 + v59, v58);
      }
      *(_QWORD*)(a1 + 64) = 0;
      goto LABEL_117;
    }
  }
  if (v36 >> 61 != 0) {
    GameRoutine_60a210_alt1();
  }
  v38 = fw_memory_HeapManager_Allocate_alt1(*v27, 8 * v36, 16, 0);
  v39 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = v38;
  if (v39 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*v27 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v27 + v40, v39);
  }
  v41 = v36 & 7;
  *(_QWORD*)(a1 + 64) = v36;
  if (v36 >= 8) {
    v42 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v42) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v42 + 8) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v42 + 16) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v42 + 24) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v42 + 32) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v42 + 40) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v42 + 48) = 0;
      v45 = *(_QWORD*)(a1 + 56) + 8 * v42;
      v42 += 8;
      *(_QWORD*)(v45 + 56) = 0;
    } while ((v36 & 0x1FFFFFFFFFFFFFF8LL) != v42);
  }
  else {
    v42 = 0;
  }
  if ((v36 & 7) != 0) {
    v46 = 8 * v42;
    do {
      --v41;
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + v46) = 0;
      v46 += 8;
    } while (v41 != 0);
  }
  v48 = a1 + 72;
  v47 = *(_QWORD**)(a1 + 72);
  if (v47 != nullptr) {
    v49 = v47[1];
    v50 = v36 - 1;
    if ((v36 & (v36 - 1)) != 0) {
      if (v49 >= v36) {
        v49 %= v36;
      }
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v49) = v48;
      v51 = (_QWORD*)*v47;
      if (*v47 == 0) {
        goto LABEL_117;
      }
      while (1) {
        v52 = v51[1];
        if (v52 >= v36) {
          v52 %= v36;
        }
        if (v52 != v49) {
          v53 = *(_QWORD*)(a1 + 56);
          if (*(_QWORD*)(v53 + 8 * v52) == 0) {
            *(_QWORD*)(v53 + 8 * v52) = v47;
            goto LABEL_94;
          }
          *v47 = *v51;
          *v51 = **(_QWORD**)(*(_QWORD*)(a1 + 56) + 8 * v52);
          **(_QWORD**)(*(_QWORD*)(a1 + 56) + 8 * v52) = v51;
          v51 = v47;
        }
        v52 = v49;
      LABEL_94:
        v47 = v51;
        v51 = (_QWORD*)*v51;
        v49 = v52;
        if (v51 == nullptr) {
          goto LABEL_117;
        }
      }
    }
    v54 = v49 & v50;
    *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v54) = v48;
    while (1) {
      v55 = (_QWORD*)*v47;
      if (*v47 == 0) {
        break;
      }
      v56 = v55[1] & v50;
      if (v56 == v54) {
        v47 = (_QWORD*)*v47;
      }
      else {
        v57 = *(_QWORD*)(a1 + 56);
        if (*(_QWORD*)(v57 + 8 * v56) != 0) {
          *v47 = *v55;
          *v55 = **(_QWORD**)(*(_QWORD*)(a1 + 56) + 8 * v56);
          **(_QWORD**)(*(_QWORD*)(a1 + 56) + 8 * v56) = v55;
        }
        else {
          *(_QWORD*)(v57 + 8 * v56) = v47;
          v47 = v55;
          v54 = v56;
        }
      }
    }
  }
LABEL_117:
  v21 = *(_QWORD*)(a1 + 64);
  if ((v21 & (v21 - 1)) != 0) {
    if (v20 >= v21) {
      v2 = v20 % v21;
    }
    else {
      v2 = v20;
    }
  }
  else {
    v2 = (v21 - 1) & v20;
  }
LABEL_122:
  v60 = *(_QWORD*)(a1 + 56);
  v61 = *(__int64**)(v60 + 8 * v2);
  if (v61 != nullptr) {
    *(_QWORD*)v24 = *v61;
    *v61 = v24;
  }
  else {
    v62 = *(_QWORD*)(a1 + 72);
    *(_QWORD*)(a1 + 72) = v24;
    *(_QWORD*)v24 = v62;
    *(_QWORD*)(v60 + 8 * v2) = a1 + 72;
    if (v62 != 0) {
      v63 = *(_QWORD*)(v62 + 8);
      if ((v21 & (v21 - 1)) != 0) {
        if (v63 >= v21) {
          v63 %= v21;
        }
      }
      else {
        v63 &= v21 - 1;
      }
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v63) = v24;
    }
  }
  ++*(_QWORD*)(a1 + 80);
  v18 = v67;
LABEL_131:
  *(_BYTE*)(v24 + 24) = v19;
  return v18 & 1;
}

__int64 as_Manager_executeContext(__int64 a1, const char* a2, __int64 a3,
                                  __int64* a4, int a5)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  struct {
    __int64 v11;
    unsigned int v12;
    char gapc_[12];
  } v11_;
  __int64 v13[2];
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  unsigned int v17;

  v17 = 0;
  if (a3 == 0) {
    return 0;
  }
  v13[1] = 0;
  v14 = 0;
  v13[0] = 0;
  Manager_d9b900((void*)(&v11_), a1, (_QWORD)"s32", 3, (_QWORD)a2, a3,
                 (_QWORD)a4, a5, (_QWORD)v13);
  if (v11_.v12 != 0x2000) {
    v5 = (_QWORD*)((char*)&as_g_context_slots + 16 * v11_.v12);
    v6 = v5[1];
    if (v6 != 0 && *v5 == v11_.v11 && *(_DWORD*)(v6 + 52) == 1) {
      v16 = v15;
      v7 = *as_g_script_manager_ptr;
      v15[0] = GameData_1f8e750;
      v15[1] = &v17;
      GameRoutine_627e70(v7, v6, 0, v15, 0);
      if (v16 == v15) {
        v8 = 32;
      }
      else {
        if (v16 == nullptr) {
          goto LABEL_12;
        }
        v8 = 40;
      }
      (*(void (**)(void*))(*v16 + v8))(v16);
    }
  }

LABEL_12:
  if ((v13[0] & 1) != 0 && v14 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v14);
  }
  return v17;
}

__attribute__((swiftcall)) void

as_Manager_executeContext_d9d220(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                 __int64 a3, _QWORD* a4, unsigned int a5)
{
  __int64* a6 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    unsigned int v18;
  } v17_;
  struct {
    __int64 v19[2];
    __int64 v20;
  } v19_;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  GameRoutine_25eca0_alt1(a6, &GameData_1a9f09e);
  if (a3 == 0) {
    return;
  }
  v19_.v19[1] = 0;
  v19_.v20 = 0;
  v19_.v19[0] = 0;
  as_d9b900((void*)((__int64)&v17_.v17), a1, (__int64)"string", 6, a2, a3, a4,
            a5, v19_.v19);
  if (v17_.v18 != 0x2000) {
    v12 = (_QWORD*)((char*)&as_g_context_slots + 16 * v17_.v18);
    v13 = v12[1];
    if (v13 != 0 && *v12 == v17_.v17 && *(_DWORD*)(v13 + 52) == 1) {
      v14 = *as_g_script_manager_ptr;
      v21_.v21[0] = GameData_1f8e860;
      v21_.v21[1] = a6;
      v21_.v22 = v21_.v21;
      as_627e70(v14, v13, 0, (__int64)v21_.v21, 0);
      if (v21_.v22 == v21_.v21) {
        v15 = 32;
        goto LABEL_10;
      }
      if (v21_.v22 != nullptr) {
        v15 = 40;
      LABEL_10:
        (*(void (**)(__int64))(*v21_.v22 + v15))((__int64)v21_.v22);
      }
    }
  }
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v19_.v20);
  }
}

void Manager_d9d980(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  if (a1[3] != 0) {
    v1 = (_QWORD*)a1[2];
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = (__int64)v1;
        v1 = (_QWORD*)*v1;
        v6 = *(_QWORD*)(v5 + 48);
        if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak_alt2(v6);
          if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
          LABEL_11:
            v7 = *(_QWORD*)(v5 + 32);
            if (v7 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
                v8 = 128;
              }
              else {
                v8 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v8, v7);
            }
          }
        }
        else if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
          goto LABEL_11;
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v4, v5);
      } while (v1 != nullptr);
    }
    v9 = a1[1];
    a1[2] = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*a1 + 8 * v11) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 8) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 16) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 24) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 32) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 40) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 48) = 0;
          v13 = *a1 + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*a1 + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    a1[3] = 0;
  }
}

#pragma GCC visibility pop
