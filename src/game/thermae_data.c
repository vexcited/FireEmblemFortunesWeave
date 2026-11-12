#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_705570(void);
void __attribute__((noreturn)) GameRoutine_9337e0(void);
_QWORD* game_ThermaeData_GetLearnSkillList_lambda0_Invoke_alt1(
    _QWORD* result, __int64* a2,
    char* a3) __asm__("game_ThermaeData_GetLearnSkillList_lambda0_Invoke");
__int64 GameRoutine_950d50(_QWORD, _QWORD, long double);
__int64 GameRoutine_952000(void);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1faff28[])();
__attribute__((swiftcall)) void
game_ThermaeData_GetLearnSkillList(PSEUDO_X8 x8_, __int64 result, _DWORD* a2,
                                   __int64 (**a3)());
__int64 GameHr_952000(__int64 result, __int64*, __int64, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GameRoutine_950d50_alt1(__int64*, _QWORD*) __asm__("GameRoutine_950d50");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_705570_alt1() __asm__("GameRoutine_705570");
void __attribute__((noreturn))
GameRoutine_9337e0_alt1() __asm__("GameRoutine_9337e0");
void game_ThermaeData_GetLearnSkillList_lambda0_Invoke(_QWORD* a1, __int64* a2,
                                                       char* a3);
__attribute__((swiftcall)) void

game_ThermaeData_GetLearnSkillList(PSEUDO_X8 x8_, __int64 result, _DWORD* a2,
                                   __int64 (**a3)())
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64* v8;
  __int64 (***v9)();
  __int64 (**v10)();
  __int64 (***v11)();
  __int64 v12;
  unsigned __int64 v13;
  char v14;
  __int64 (**v15)();
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  unsigned __int8* v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  struct {
    __int64 v45;
    __int64 v46;
    __int64 v47;
  } v45_;
  struct {
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v48_;
  char v51[4];
  __int64 v52;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if (a3 == nullptr) {
    result;
    return;
  }
  v48_.v49 = 0;
  v48_.v50 = 0;
  v45_.v47 = 0;
  v48_.v48 = 0;
  v4 = result;
  v45_.v45 = 0;
  v45_.v46 = 0;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v10 = GameData_1faff28;
  v11 = v9;
  v9[4] = (__int64 (**)(void))v4;
  *v9 = GameData_1faff28;
  v9[1] = (__int64 (**)(void))&v48_.v48;
  v9[2] = (__int64 (**)(void))&v45_.v45;
  v9[3] = a3;
  if (*(_WORD*)(v4 + 72) != 0) {
    v12 = 8;
    v13 = 0;
    do {
      v14 = *(_BYTE*)(*(_QWORD*)(v4 + 96) + v13);
      v52 = *(_QWORD*)(*(_QWORD*)(v4 + 80) + v12);
      v15 = *v11;
      v51[0] = v14;
      ((void (*)(__int64 (***)(void), __int64*, char*))v15[6])(v11, &v52, v51);
      ++v13;
      v12 += 16;
    } while (v13 < *(unsigned __int16*)(v4 + 72));
    v10 = *v11;
  }
  ((void (*)(__int64 (***)(void)))v10[5])(v11);
  v16 = v45_.v45;
  if (v48_.v49 == v48_.v48) {
    goto LABEL_25;
  }
  v17 = v45_.v46 - v45_.v45;
  if ((int)v45_.v46 - (int)v45_.v45 < 1) {
    goto LABEL_25;
  }
  v18 = v17 & 0x7FFFFFFF;
  v19 = v17 & 7;
  if ((unsigned __int64)(v18 - 1) >= 7) {
    v22 = (unsigned __int8*)(v45_.v45 + 3);
    v23 = 0;
    v21 = 0;
    v24 = -(__int64)(v17 & 0x7FFFFFF8);
    do {
      v23 -= 8;
      v25 = v21 + 100 * *(v22 - 3) + 100 * *(v22 - 2) + 100 * *(v22 - 1) +
            100 * *v22 + 100 * v22[1] + 100 * v22[2] + 100 * v22[3];
      v26 = v22[4];
      v22 += 8;
      v21 = v25 + 100 * v26;
    } while (v24 != v23);
    v20 = -v23;
    if (v19 == 0) {
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  v20 = 0;
  v21 = 0;
  if ((v17 & 7) != 0) {
  LABEL_14:
    v27 = (unsigned __int8*)(v45_.v45 + v20);
    do {
      v28 = *v27++;
      --v19;
      v21 += 100 * v28;
    } while (v19 != 0);
  }
LABEL_16:
  if (v21 == 0) {
  LABEL_26:
    v40 = *v8;
    v45_.v46 = v16;
    v41 = 128;
    if (*(_QWORD*)(v40 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v40 + v41, v16);
    goto LABEL_29;
  }
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v29 = a2[2];
  v30 = a2[3];
  v31 = *a2 ^ (*a2 << 11);
  *a2 = a2[1];
  a2[1] = v29;
  v32 = (v31 >> 8) ^ (v30 >> 19) ^ v31 ^ v30;
  a2[2] = v30;
  a2[3] = v32;
  v33 = v32 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  v16 = v45_.v45;
  v34 = 0;
  v35 = v33 % v21;
  while (1) {
    if (*(_BYTE*)(v45_.v45 + v34) != 0) {
      v35 -= 100 * *(unsigned __int8*)(v45_.v45 + v34);
      if (v35 < 0) {
        break;
      }
    }
    if (v18 == ++v34) {
      goto LABEL_26;
    }
  }
  v36 = (unsigned int)v34;
  GameRoutine_950d50_alt1(a4, (_QWORD*)(v48_.v48 + 8LL * (unsigned int)v34));
  v37 = v48_.v48 + 8 * v36;
  v38 = v48_.v49 - (v37 + 8);
  if (v48_.v49 != v37 + 8) {
    memmove_alt1(v48_.v48 + 8 * v36, v37 + 8, v48_.v49 - (v37 + 8));
  }
  v16 = v45_.v45;
  v48_.v49 = v37 + v38;
  v39 = v45_.v45 + v36 + 1;
  if (v45_.v46 != v39) {
    memmove_alt1(v45_.v45 + v36, v45_.v45 + v36 + 1, v45_.v46 - v39);
    v16 = v45_.v45;
  }
LABEL_25:
  if (v16 != 0) {
    goto LABEL_26;
  }
LABEL_29:
  if (v48_.v48 != 0) {
    v42 = *v8;
    v48_.v49 = v48_.v48;
    v43 = 128;
    if (*(_QWORD*)(v42 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v42 + v43, v48_.v48);
  }
  result = *a4;
  v44 = (__int64*)a4[1];
  if ((__int64*)*a4 != v44) {
    GameHr_952000(result, v44, (2 * __clz(((__int64)v44 - result) >> 3)) ^ 0x7E,
                  1);
    return;
  }
  {
    result;
    return;
  }
}

void game_ThermaeData_GetLearnSkillList_lambda0_Invoke(_QWORD* a1, __int64* a2,
                                                       char* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  char v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  signed __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  unsigned __int64 v43;
  _BYTE* v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v3 = *a2;
  if (*a2 != 0) {
    v4 = *(_WORD*)(v3 + 16) & 0xFFF;
    if ((*(_WORD*)(v3 + 16) & 0xFFF) != 0) {
      v6 = (_QWORD*)a1[3];
      v5 = a1[4];
      v7 = *a3;
      v8 = v6[134];
      v9 = (v6[135] - v8) >> 2;
      if (v9 < (v4 >> 5) + 1 ||
          ((*(_DWORD*)(v8 + 4LL * (unsigned int)(v4 >> 5)) >>
            *(_BYTE*)(v3 + 16)) &
           1) == 0) {
        goto LABEL_15;
      }
      v10 = v6[139];
      v11 = v6[138];
      if (v10 != v11) {
        v12 = (v10 - v11) >> 2;
        v13 = 0;
        while ((*(_DWORD*)(v11 + 4 * v13) & 0xFFF) != (_DWORD)v4) {
          if (v12 == ++v13) {
            return;
          }
        }
        if ((v13 & 0x8000000000000000LL) == 0) {
          v14 = *(_DWORD*)(v11 + 4LL * (unsigned int)v13);
          v15 =
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (v14 & 0xFFF)) +
                                  281LL);
          if (v15 <= 1) {
            v15 = 1;
          }
          if ((v14 & 0x1F000000) != 0 || ((v14 >> 19) & 0x1F) < v15 - 1) {
          LABEL_15:
            v16 = *(_QWORD*)(v3 + 24);
            v17 = *(_QWORD*)(v16 + 1072);
            if (v17 != 0 &&
                ((v18 = *(unsigned __int16*)(v17 + 16),
                  v9 < ((v18 >> 5) & 0x7F) + 1) ||
                 ((*(_DWORD*)(v8 + 4 * ((v18 >> 5) & 0x7F)) >> v18) & 1) ==
                     0)) {
              v25 = *(unsigned __int16*)(v5 + 72);
              v26 = *(_QWORD*)(v5 + 80) + 8LL;
              while (1) {
                if ((_DWORD)v25 != 0) {
                  v27 = (__int64*)v26;
                  v28 = v25;
                  while (1) {
                    v29 = *v27;
                    v27 += 2;
                    if (v29 == v17) {
                      break;
                    }
                    if (--v28 == 0) {
                      goto LABEL_26;
                    }
                  }
                  v30 = *(unsigned __int16*)(v17 + 16);
                  if (v9 < ((v30 >> 5) & 0x7F) + 1 ||
                      ((*(_DWORD*)(v8 + 4 * ((v30 >> 5) & 0x7F)) >> v30) & 1) ==
                          0) {
                    break;
                  }
                }
              LABEL_26:
                v17 = *(_QWORD*)(*(_QWORD*)(v17 + 24) + 1072LL);
                if (v17 == 0) {
                  goto LABEL_18;
                }
              }
            }
            else {
            LABEL_18:
              v19 = *(_QWORD*)(v16 + 1080);
              if (v19 != 0) {
                while (1) {
                  v24 = *(unsigned __int16*)(v19 + 16);
                  if (v9 >= ((v24 >> 5) & 0x7F) + 1 &&
                      ((*(_DWORD*)(v8 + 4 * ((v24 >> 5) & 0x7F)) >> v24) & 1) !=
                          0) {
                    break;
                  }
                  v19 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 1080LL);
                  if (v19 == 0) {
                    goto LABEL_19;
                  }
                }
              }
              else {
              LABEL_19:
                v20 = (__int64*)a1[1];
                v22 = (_QWORD*)v20[1];
                v21 = v20[2];
                if ((unsigned __int64)v22 >= v21) {
                  v31 = *v20;
                  v32 = (signed __int64)v22 - *v20;
                  v33 = (v32 >> 3) + 1;
                  if (v33 >> 61 != 0) {
                    GameRoutine_705570_alt1();
                  }
                  v34 = v21 - v31;
                  v35 = fw_memory_g_heap_manager_ptr;
                  if (v34 >> 2 > v33) {
                    v33 = v34 >> 2;
                  }
                  if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v36 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v36 = v33;
                  }
                  if (v36 != 0) {
                    if (v36 >> 61 != 0) {
                      GameRoutine_60a210_alt1();
                    }
                    v37 = a1;
                    v38 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v36, 16, 0);
                  }
                  else {
                    v37 = a1;
                    v38 = 0;
                  }
                  v39 = v38 + 8 * v36;
                  v40 = v38 + v32 - 8 * (v32 >> 3);
                  *(_QWORD*)(v38 + v32) = v3;
                  v23 = v38 + v32 + 8;
                  memcpy_alt1(v40, v31, v32);
                  *v20 = v40;
                  v20[1] = v23;
                  v20[2] = v39;
                  if (v31 != 0) {
                    v41 = 128;
                    if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
                      v41 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v35 + v41,
                                                       v31);
                  }
                  a1 = v37;
                }
                else {
                  *v22 = v3;
                  v23 = (__int64)(v22 + 1);
                }
                v20[1] = v23;
                v42 = (__int64*)a1[2];
                v44 = (_BYTE*)v42[1];
                v43 = v42[2];
                if ((unsigned __int64)v44 >= v43) {
                  v46 = *v42;
                  v47 = (unsigned __int64)&v44[-*v42];
                  v48 = v47 + 1;
                  if ((__int64)(v47 + 1) < 0) {
                    GameRoutine_9337e0_alt1();
                  }
                  v49 = v43 - v46;
                  if (2 * v49 > v48) {
                    v48 = 2 * v49;
                  }
                  if (v49 >= 0x3FFFFFFFFFFFFFFFLL) {
                    v50 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v50 = v48;
                  }
                  if (v50 != 0) {
                    v51 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, v50, 16, 0);
                  }
                  else {
                    v51 = 0;
                  }
                  *(_BYTE*)(v51 + v47) = v7;
                  v45 = v51 + v47 + 1;
                  memcpy_alt1(v51, v46, v47);
                  *v42 = v51;
                  v42[1] = v45;
                  v42[2] = v51 + v50;
                  if (v46 != 0) {
                    v52 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v52 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v46);
                  }
                }
                else {
                  *v44 = v7;
                  v45 = (__int64)(v44 + 1);
                }
                v42[1] = v45;
              }
            }
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
