#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_9433d0(void);
__int64 game_IndependentData_Calculate_lambda0_Invoke_alt1(
    __int64 result,
    unsigned __int8*
        a2) __asm__("game_IndependentData_Calculate_lambda0_Invoke");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_9433d0_alt1() __asm__("GameRoutine_9433d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_IndependentData_Calculate_lambda0_Invoke(__int64 a1,
                                                   unsigned __int8* a2);
__int64 BonusExpList_7ffb30(__int64);
__int64 GameRoutine_70ccb0(__int64);
__int64 GameRoutine_7dbc20(unsigned __int64, int);
__int64 game_996d60(__int64, int, int);
__int64 game_Unit_GetParam(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fb3060[])();
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d99e8;
extern __int64 GameData_21d99f8;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6e5c60();
__attribute__((swiftcall)) void
game_IndependentData_Calculate(PSEUDO_X8 x8_, __int64 a1, __int64 a2, int a3,
                               _DWORD* a4);
__attribute__((swiftcall)) void

game_IndependentData_Calculate(PSEUDO_X8 x8_, __int64 a1, __int64 a2, int a3,
                               _DWORD* a4)
{

#pragma clang fp contract(off)
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  _DWORD* v6;
  int v10;
  int v11;
  float v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  char v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  __int64 v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  unsigned __int64 v81;
  __int64 v82;
  char v83;
  int v84;
  int v85;
  _DWORD* v86;
  struct {
    _QWORD v87[4];
    _QWORD* v88;
  } v87_;
  struct {
    __int64 v89;
    __int64 v90;
    __int64 v91;
    char gap128_[8];
    int v92;
    int v93;
  } v89_;

  *(_QWORD*)(a5 + 8) = 0;
  v6 = (_DWORD*)(a5 + 8);
  *(_DWORD*)(a5 + 16) = 0;
  v89_.v92 = a3;
  *(_DWORD*)(a5 + 24) = 0;
  *(_QWORD*)(a5 + 32) = 0;
  *(_QWORD*)(a5 + 40) = 0;
  *(_QWORD*)(a5 + 48) = 0;
  *(_BYTE*)(a5 + 56) = 0;
  *(_QWORD*)a5 = a2;
  *(_BYTE*)(a5 + 20) = 15;
  *(_QWORD*)(a5 + 64) = a1;
  if (a2 != 0) {
    v10 = 1;
    LOBYTE(v87_.v87[0]) = 5;
    v11 = game_Unit_GetParam(a2);
    if (v11 > 1) {
      v12 = (float)((unsigned int)v11 >> 1);
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v13 = a4[2];
      v14 = a4[3];
      v15 = *a4 ^ (*a4 << 11);
      *a4 = a4[1];
      a4[1] = v13;
      v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
      a4[2] = v14;
      a4[3] = v16;
      v17 = v16 & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v10 = 1;
      if ((float)(v12 * 0x1.3880000000000p+13f) > (float)(v17 % 0xF4240)) {
        *(_BYTE*)(a5 + 56) = 1;
        v10 = 2;
      }
    }
    if (v89_.v92 >= 1) {
      v80 = nullptr;
      v18 = 0;
      v89_.v93 = 0;
      v82 = 0;
      v86 = v6;
      v85 = v10;
      v83 = 15;
      v84 = 10000 * v10;
      while (1) {
        v19 = *(unsigned __int8*)(a1 + 40);
        if (*(_BYTE*)(a1 + 40) == 0) {
          goto LABEL_73;
        }
        v20 = *v6;
        v21 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
        if ((int)v21 < 1) {
          v22 = 0;
          v28 = *(_QWORD*)(a2 + 440);
          if (v28 != 0) {
          LABEL_21:
            v29 = *(_BYTE*)(v28 + 16);
            goto LABEL_24;
          }
        }
        else {
          v22 = 0;
          v23 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v21 - 1));
          v24 = *(_DWORD*)(a2 + 504) + v20;
          if (v23 >= v24) {
            v23 = *(_DWORD*)(a2 + 504) + v20;
          }
          if (v24 >= (signed __int32)*(_DWORD*)GameData_21d9968) {
            v25 = v23;
          }
          else {
            v25 = *(_DWORD*)GameData_21d9968;
          }
          while (1) {
            v26 = (unsigned int)(v22 + v21) >> 1;
            v27 = *(_DWORD*)(GameData_21d9968 + 4LL * v26);
            if (v25 == v27) {
              break;
            }
            if (v25 < v27) {
              LODWORD(v21) = (unsigned int)(v22 + v21) >> 1;
            }
            else {
              v22 = v26 + 1;
            }
            if (v22 >= (int)v21) {
              v28 = *(_QWORD*)(a2 + 440);
              if (v28 == 0) {
                goto LABEL_23;
              }
              goto LABEL_21;
            }
          }
          v22 = v26 + 1;
          v28 = *(_QWORD*)(a2 + 440);
          if (v28 != 0) {
            goto LABEL_21;
          }
        }
      LABEL_23:
        v29 = 9;
      LABEL_24:
        if (((1 << v29) & 0xF1) == 0) {
          v30 = *(_QWORD*)(a2 + 392);
          if (v22 == *(unsigned __int8*)(v30 + 445)) {
            if (game_GameModeData_instance_ != 0) {
              v31 = *(_DWORD*)(game_GameModeData_instance_ + 68);
              v32 = *(_QWORD*)(game_GameModeData_instance_ + 16);
              if (v32 != 0) {
                v31 += *(char*)(v32 + 128);
              }
              v33 = *(unsigned __int8*)(v30 + 442);
              if (*(_BYTE*)(v30 + 442) == 0) {
              LABEL_41:
                v34 = v31 + *(char*)(v30 + 443);
                if (v34 <= 1) {
                  v34 = 1;
                }
                if (v34 >= 99) {
                  v34 = 99;
                }
                if (*(_BYTE*)(v30 + 443) != 0) {
                  v33 = v34;
                }
                else {
                  v33 = v31;
                }
              }
            }
            else {
              v31 = 0;
              v33 = *(unsigned __int8*)(v30 + 442);
              if (*(_BYTE*)(v30 + 442) == 0) {
                goto LABEL_41;
              }
            }
          }
          else {
            v33 = v22 - *(char*)(v30 + 446);
            if (v33 <= 1) {
              v33 = 1;
            }
            if (v33 >= 99) {
              v33 = 99;
            }
            if (*(_BYTE*)(v30 + 446) == 0) {
              v33 = v22;
            }
          }
          v22 = *(unsigned __int8*)(v30 + 447);
          if (*(_BYTE*)(v30 + 447) == 0) {
            v35 = *(char*)(v30 + 448);
            if (v35 != 0) {
              v36 = v33 + v35;
              if (v36 <= 1) {
                v36 = 1;
              }
              if (v36 >= 99) {
                v22 = 99;
              }
              else {
                v22 = v36;
              }
            }
            else {
              v22 = v33;
            }
          }
        }
        if (game_GameModeData_instance_ != 0) {
          v37 = *(_DWORD*)(game_GameModeData_instance_ + 68);
        }
        else {
          v37 = 0;
        }
        LODWORD(v87_.v87[1]) = 51300;
        if (v19 >= 0x64) {
          v19 = 100;
        }
        v38 = 2 * v19;
        v39 = GameRoutine_7dbc20(GameData_21d99e8, v37 - v22);
        if (v39 >= 0x1F4) {
          v40 = 500;
        }
        else {
          v40 = v39;
        }
        if (v37 <= 1) {
          v41 = 1;
        }
        else {
          v41 = v37;
        }
        v42 = v38 | (v40 << 32);
        if (v41 >= 99) {
          v41 = 99;
        }
        v43 = v42 | (v41 << 15) | 1u;
        v44 = GameRoutine_7dbc20(GameData_21d99f8, v22);
        if (v44 >= 0x1F4) {
          v45 = 500;
        }
        else {
          v45 = v44;
        }
        v87_.v87[0] = v43 | (unsigned int)(v45 << 23) | 0xC80000000000LL;
        v10 = v85;
        v6 = v86;
        *v86 = v20 + BonusExpList_7ffb30((__int64)v87_.v87) * v85 *
                         *(unsigned __int8*)(a1 + 41);
      LABEL_73:
        if (*(_BYTE*)(a1 + 43) != 0) {
          *(_DWORD*)(a5 + 12) += v10 * *(unsigned __int8*)(a1 + 43);
        }
        if (*(_BYTE*)(a1 + 45) == 0) {
          goto LABEL_87;
        }
        v89_.v90 = 0;
        v89_.v91 = 0;
        v89_.v89 = 0;
        v87_.v87[0] = GameData_1fb3060;
        v87_.v87[1] = a2;
        v87_.v88 = v87_.v87;
        v87_.v87[2] = &v89_.v89;
        GameRoutine_70ccb0((__int64)v87_.v87);
        if (v87_.v88 == v87_.v87) {
          v46 = 32;
        }
        else {
          if (v87_.v88 == nullptr) {
            goto LABEL_81;
          }
          v46 = 40;
        }
        (*(void (**)(__int64))(*v87_.v88 + v46))((__int64)v87_.v88);
      LABEL_81:
        v47 = v89_.v89;
        if (v89_.v90 != v89_.v89) {
          v48 = v89_.v90 - v89_.v89;
          nn_os_LockMutex((__int64)&game_g_random_mutex);
          v49 = a4[2];
          v50 = a4[3];
          v51 = *a4 ^ (*a4 << 11);
          *a4 = a4[1];
          a4[1] = v49;
          v52 = (v51 >> 8) ^ (v50 >> 19) ^ v51 ^ v50;
          a4[2] = v50;
          a4[3] = v52;
          v53 = v52 & 0x7FFFFFFF;
          nn_os_UnlockMutex((__int64)&game_g_random_mutex);
          v47 = v89_.v89;
          v83 = *(_BYTE*)(v89_.v89 + (unsigned int)(v53 % v48));
          *(_DWORD*)(a5 + 16) += v10 * *(unsigned __int8*)(a1 + 45);
        LABEL_84:
          v89_.v90 = v47;
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v47);
          goto LABEL_87;
        }
        if (v89_.v90 != 0) {
          goto LABEL_84;
        }
      LABEL_87:
        if (*(_BYTE*)(a1 + 47) != 0) {
          v89_.v93 += v10 * *(unsigned __int8*)(a1 + 47) *
                      *(unsigned __int8*)(a2 + 498);
        }
        v55 = *(unsigned __int8*)(a1 + 49);
        if (*(_BYTE*)(a1 + 49) != 0 && *(_QWORD*)(a1 + 64) != 0) {
          nn_os_LockMutex((__int64)&game_g_random_mutex);
          v56 = a4[2];
          v57 = a4[3];
          v58 = *a4 ^ (*a4 << 11);
          *a4 = a4[1];
          a4[1] = v56;
          v59 = (v58 >> 8) ^ (v57 >> 19) ^ v58 ^ v57;
          a4[2] = v57;
          a4[3] = v59;
          v60 = v59 & 0x7FFFFFFF;
          nn_os_UnlockMutex((__int64)&game_g_random_mutex);
          if ((float)(unsigned int)(v84 * v55) > (float)(v60 % 0xF4240)) {
            v61 = *(_QWORD*)(a1 + 64);
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v62 = a4[2];
            v63 = a4[3];
            v64 = *a4 ^ (*a4 << 11);
            *a4 = a4[1];
            a4[1] = v62;
            v65 = (v64 >> 8) ^ (v63 >> 19) ^ v64 ^ v63;
            a4[2] = v63;
            a4[3] = v65;
            v66 = v65 & 0x7FFFFFFF;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            v67 = game_996d60(v61, v66 % 0x3E8, 1000);
            if (v67 != 0) {
              v68 = *(_QWORD*)(v67 + 40);
              if (v68 != 0 && *(_WORD*)(v68 + 16) != 0) {
                v69 = *(_QWORD*)(a5 + 48);
                if ((unsigned __int64)v80 >= v69) {
                  v71 = (unsigned __int64)v80 - v82;
                  v72 = ((__int64)v80 - v82) >> 3;
                  v73 = v72 + 1;
                  if ((unsigned __int64)(v72 + 1) >> 61 != 0) {
                    *(_QWORD*)(a5 + 32) = v82;
                    *(_BYTE*)(a5 + 20) = v83;
                    *(_DWORD*)(a5 + 24) = v89_.v93;
                    GameRoutine_6e5c60();
                  }
                  v74 = v69 - v82;
                  if (v74 >> 2 > v73) {
                    v73 = v74 >> 2;
                  }
                  if ((unsigned __int64)v74 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v75 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v75 = v73;
                  }
                  if (v75 != 0) {
                    if (v75 >> 61 != 0) {
                      *(_BYTE*)(a5 + 20) = v83;
                      *(_DWORD*)(a5 + 24) = v89_.v93;
                      *(_QWORD*)(a5 + 32) = v82;
                      GameRoutine_60a210();
                    }
                    v76 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v75, 16, 0);
                    v72 = ((__int64)v80 - v82) >> 3;
                  }
                  else {
                    v76 = 0;
                  }
                  v81 = v76 + 8 * v75;
                  *(_QWORD*)(v76 + v71) = v68;
                  v77 = v76 + v71 + 8;
                  v78 = v76 + v71 - 8 * v72;
                  memcpy_alt1(v78, v82, v71);
                  v70 = (_QWORD*)v77;
                  *(_QWORD*)(a5 + 40) = v77;
                  *(_QWORD*)(a5 + 48) = v81;
                  if (v82 != 0) {
                    v79 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v79 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v82);
                    v70 = (_QWORD*)v77;
                  }
                  v6 = v86;
                  v82 = v78;
                }
                else {
                  *v80 = v68;
                  v70 = v80 + 1;
                }
                v80 = v70;
                *(_QWORD*)(a5 + 40) = v70;
              }
            }
          }
        }
        if (++v18 == v89_.v92) {
          goto LABEL_114;
        }
      }
    }
    v82 = 0;
    v89_.v93 = 0;
    v83 = 15;
  LABEL_114:
    *(_BYTE*)(a5 + 20) = v83;
    *(_DWORD*)(a5 + 24) = v89_.v93;
    *(_QWORD*)(a5 + 32) = v82;
  }
}

void game_IndependentData_Calculate_lambda0_Invoke(__int64 a1,
                                                   unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v6;
  unsigned __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if ((unsigned int)v2 > 7) {
    if ((unsigned int)v2 > 0xC) {
      return;
    }
  }
  else if (*(char*)(v3 + v2 + 812) < 0) {
    return;
  }
  v4 = *(unsigned __int8*)(v3 + v2 + 540);
  if (v4 != 0 && v4 != 12) {
    v6 = *(__int64**)(a1 + 16);
    v8 = (_BYTE*)v6[1];
    v7 = v6[2];
    if ((unsigned __int64)v8 >= v7) {
      v10 = *v6;
      v11 = (unsigned __int64)&v8[-*v6];
      v12 = v11 + 1;
      if ((__int64)(v11 + 1) < 0) {
        GameRoutine_9433d0_alt1();
      }
      v13 = v7 - v10;
      v14 = fw_memory_g_heap_manager_ptr;
      if (2 * v13 > v12) {
        v12 = 2 * v13;
      }
      if (v13 >= 0x3FFFFFFFFFFFFFFFLL) {
        v15 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v15 = v12;
      }
      if (v15 != 0) {
        v16 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v15, 16, 0);
      }
      else {
        v16 = 0;
      }
      *(_BYTE*)(v16 + v11) = v2;
      v9 = v16 + v11 + 1;
      memcpy_alt1(v16, v10, v11);
      *v6 = v16;
      v6[1] = v9;
      v6[2] = v16 + v15;
      if (v10 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v17, v10);
      }
    }
    else {
      *v8 = v2;
      v9 = (__int64)(v8 + 1);
    }
    v6[1] = v9;
  }
}

#pragma GCC visibility pop
