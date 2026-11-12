#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern __int64 (*GameData_2010b88[])();
extern __int64 (*GameData_212b098[])();
extern __int64 (*GameData_212bab8[])();
extern __int64 (*GameData_212bb38[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c738[2];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char** GameData_212def8;
extern __int64* GameData_2130190[17];
extern __int64* GameData_21301b8[12];
extern __int64 GameData_21cd0e8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_13633c0(void);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15613b0(_QWORD, _QWORD);
__int64 GameRoutine_15619a0(_QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563e00(_QWORD, _QWORD);
__int64 GameRoutine_1586140(_QWORD, _QWORD);
__int64 GameRoutine_1592340(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17356e0(_QWORD, _QWORD);
__int64 GameRoutine_18415e0(void);
__int64 GameRoutine_188ab20(_QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_19f2c80(_QWORD*, _QWORD*, unsigned __int16***, int, _QWORD*,
                            __int64);
__int64 GameRoutine_19f3700(__int64 result);
__int64 GameRoutine_19f3ea0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a00e90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_56b600(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD, _QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_6ea8c0(_QWORD);
__int64 GameRoutine_746340(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_9bcfa0(_QWORD, _QWORD);
__int64 GameRoutine_9bd480(_QWORD);
void __attribute__((noreturn)) GameRoutine_bfeba0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_e66f80(_QWORD);
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_e66f80_alt1() __asm__("GameRoutine_e66f80");
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_1a07cc0(__int64* a1, __int64 a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 ProcList_9bd480(__int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
extern __int64 (
    *game_menu_ShowItemList_CreateBindResult_lambda0_Destructor_ptr[])();
extern __int64 (
    *game_menu_ShowItemList_CreateBindResult_lambda1_Destructor_ptr[])();
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
__int64 GameHr_1a01a00(float a1, float a2, float a3, __int64 a4, __int64 a5,
                       const char* a6);
__int64 GameHr_1a05260(int** a1, __int64 a2, char a3, const char* a4,
                       const char* a5);

__int64 GameHr_19f3aa0(__int64 result, __int64 a2, __int64 a3, _QWORD* a4,
                       __int64 a5)
{
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  _WORD* v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v25;
  unsigned int v26;
  int v27;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  signed __int64 v37;
  unsigned __int16** v38;
  unsigned __int16** v39;
  __int64 v40;
  __int64 v41;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int16** v47;
  unsigned __int16** v48;
  char* v49;

  if (a2 == 0 ||
      (unsigned int)*(unsigned __int8*)(GameData_21cd0e8 + 32) - 3 > 2) {
    return result;
  }
  *(_QWORD*)(result + 112) = a3;
  v5 = a3;
  *(_DWORD*)(result + 128) = 2;
  v6 = GameData_212c878[0];
  if (a5 != 0 && *(_QWORD*)(a5 + 664) != 0 ||
      a4 != nullptr &&
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)a4) +
                    73LL) == 10) {
    goto LABEL_21;
  }
  v7 = *(_QWORD*)(a2 + 440);
  if (v7 != 0) {
    v8 = *(unsigned __int8*)(v7 + 16);
    v9 = result;
  }
  else {
    v9 = result;
    v8 = 9;
  }
  if (*(_BYTE*)(a3 + 5) != 0) {
    v10 = a2;
    v11 = GameRoutine_6ea8c0(a3 + 5);
    if (v11 != 0 && (v12 = *(_QWORD*)(v11 + 440)) != 0) {
      v13 = *(unsigned __int8*)(v12 + 16);
    }
    else {
      v13 = 9;
    }
    result = v9;
    a2 = v10;
    if (v8 == v13) {
      goto LABEL_21;
    }
  }
  else {
    v13 = 9;
    result = v9;
    if (v8 == 9) {
      goto LABEL_21;
    }
  }
  if (v8 != 0) {
    if (v8 == 3 && v13 == 0) {
      goto LABEL_21;
    }
  LABEL_72:
    v14 = 0;
    goto LABEL_22;
  }
  if (v13 != 3) {
    goto LABEL_72;
  }
LABEL_21:
  v14 = 1;
LABEL_22:
  v44 = result;
  v45 = (_QWORD*)a2;
  *(_DWORD*)(result + 128) = v14;
  v15 = (_WORD*)(a2 + 828);
  v16 = 0;
  v17 = nullptr;
  v18 = 0;
  v19 = nullptr;
  v20 = GameData_212cfd0[0];
  v46 = v5;
  do {
    v21 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (unsigned __int16)*v15);
    v22 = *(unsigned __int8*)(v21 + 72);
    v23 = (1LL << *(_BYTE*)(v21 + 73)) & 0x7DC;
    if (v22 > 7 || v23 == 0) {
      if (*v15 == 0) {
        goto LABEL_24;
      }
      result = GameRoutine_746340(*v20, 3);
      if ((result & 1) == 0) {
        goto LABEL_24;
      }
    }
    else {
      result = GameRoutine_746340(*v20, 4);
      if ((result & 1) == 0) {
        goto LABEL_24;
      }
      v25 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (unsigned __int16)*v15);
      v26 = *(unsigned __int8*)(v25 + 72);
      v27 = *(unsigned __int8*)(v25 + 73);
      if (v26 <= 7 && v27 == 7) {
        if (*(_BYTE*)(v5 + 5) == 0) {
          goto LABEL_24;
        }
        result = GameRoutine_6ea8c0(v5 + 5);
        if (result == 0) {
          goto LABEL_24;
        }
        result = GameRoutine_19f3ea0(v45, v5, (unsigned int)v16, 4);
        if ((result & 1) == 0) {
          goto LABEL_24;
        }
      }
      else if (((*(_DWORD*)(v5 + 8) >> v16) & 1) == 0) {
        goto LABEL_24;
      }
    }
    if ((unsigned __int64)v19 < v18) {
      *(_QWORD*)v19 = v15;
      v19 += 8;
    }
    else {
      v29 = (char*)(v19 - v17);
      v30 = (v19 - v17) >> 3;
      v31 = v30 + 1;
      if ((unsigned __int64)(v30 + 1) >> 61 != 0) {
        goto LABEL_73;
      }
      if ((__int64)(v18 - (_QWORD)v17) >> 2 > v31) {
        v31 = (__int64)(v18 - (_QWORD)v17) >> 2;
      }
      if (v18 - (unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
        v32 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v32 = v31;
      }
      if (v32 != 0) {
        if (v32 >> 61 != 0) {
          GameRoutine_60a210(result, a2);
        }
        v33 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v32, 16, 0);
      }
      else {
        v33 = 0;
      }
      v18 = v33 + 8 * v32;
      v34 = (char*)(v19 - v17);
      v35 = (__int64)&v29[v33 + -8 * v30];
      *(_QWORD*)&v29[v33] = v15;
      v19 = &v29[v33 + 8];
      result = GameRoutine_1a0b950(v35, v17, v34);
      if (v17 != nullptr) {
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v36 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36);
      }
      v17 = (char*)v35;
      v5 = v46;
      v20 = GameData_212cfd0[0];
    }
  LABEL_24:
    ++v16;
    v15 += 4;
  } while (v16 != 30);
  v37 = v19 - v17;
  v48 = nullptr;
  v49 = nullptr;
  v47 = nullptr;
  if (v19 != v17) {
    if (v37 < 0) {
    LABEL_73:
      GameRoutine_bfeba0(result, a2);
    }
    v38 = (unsigned __int16**)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                                 v19 - v17, 16, 0);
    v39 = (unsigned __int16**)((char*)v38 + v37);
    v47 = v38;
    v49 = (char*)v38 + v37;
    GameRoutine_1a0b950(v38, v17, v19 - v17);
    v48 = v39;
  }
  GameRoutine_19f2c80((_QWORD*)v44, v45, &v47, *(_DWORD*)(v44 + 128), a4, a5);
  if (v47 != nullptr) {
    v48 = v47;
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v40 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v40);
  }
  result = GameRoutine_19f3700(v44);
  if (v17 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v41 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v41);
  }
  return result;
}

__int64 GameHr_1a006e0(__int64 a1, __int64* a2, __int64* a3, __int64* a4,
                       float a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64* v23;
  char v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  char v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  char* v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  char* v55;

  result = a2[1];
  if (result == 0) {
    return result;
  }
  result = GameRoutine_1a0a0c0(result);
  if (result == 0) {
    return result;
  }
  v11 = *a2;
  v12 = result;
  if (v11 == 0) {
    goto LABEL_60;
  }
  v48 = result;
  v49 = a1;
  v13 = -7680;
  v14 = 0;
  v55 = (char*)&v50 + 1;
  do {
    v19 = *a3;
    v20 = *a3 + v13;
    if (*(_QWORD*)(v20 + 7696) == 0) {
      break;
    }
    v17 = *(_QWORD*)(v20 + 7704);
    v16 = *(_QWORD*)(v20 + 7712);
    if (v17 != v16) {
      v21 = *a4;
      if (v14 >= 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3)) {
        break;
      }
      v15 = *(int*)(v20 + 7680);
      if (**(_QWORD**)(v17 + 8 * v15) == 0) {
        goto LABEL_6;
      }
      v22 = v21 + 40 * v14;
      v24 = *(_BYTE*)(v22 + 8);
      v23 = (unsigned __int64*)(v22 + 8);
      if ((v24 & 1) != 0) {
        GameRoutine_60a270(&v50, *(_QWORD*)(v21 + 40 * v14 + 24),
                           *(_QWORD*)(v21 + 40 * v14 + 16));
      }
      else {
        v25 = *v23;
        v26 = v23[1];
        v27 = (char*)v23[2];
        v51 = v26;
        v52 = v27;
        v50 = v25;
      }
      if ((v50 & 1) != 0) {
        v28 = v52;
      }
      else {
        v28 = v55;
      }
      GameRoutine_1560070((void*)&v53, v11, v28);
      result = v54;
      if (v54 != 0) {
        v29 = GameRoutine_1a0a0c0(v54);
        result = v54;
        if (v29 != 0) {
          v30 = v53;
        }
        else {
          v30 = 0;
        }
        if (v54 != 0) {
          result = GameRoutine_1a09c50(v54);
        }
        if ((v50 & 1) == 0) {
        LABEL_34:
          if (v30 != 0) {
            v32 = *(_DWORD*)(v19 + v13 + 7684);
            v33 = *(_DWORD*)(v19 + v13 + 7688);
            LODWORD(v51) = 0;
            v50 = __PAIR64__(v33, v32);
            GameRoutine_15613b0(v30, &v50);
            v50 = 0x3F8000003F800000LL;
            GameRoutine_15619a0(v30, &v50);
            GameRoutine_155e830(v30, 1);
            v34 = GameRoutine_155f480(v30, "MapChip_Efficacy");
            if (v34 != 0) {
              v35 = GameRoutine_1a0a6c0(v34, GameData_212d670[0],
                                        GameData_212d678[0], 0);
              if (v35 != 0) {
                v36 = *(_BYTE*)(v35 + 88);
                *(_QWORD*)(v35 + 60) = 0;
                v36 |= 0x10u;
                *(float*)(v35 + 68) = a5;
                *(_BYTE*)(v35 + 88) = v36;
                v37 = *(_DWORD*)(v49 + 212);
                *(_BYTE*)(v35 + 88) = v36;
                *(_DWORD*)(v35 + 80) = v37;
                *(_DWORD*)(v35 + 84) = v37;
                GameRoutine_18415e0();
              }
            }
            result = GameRoutine_155f480(v30, "N_Rot");
            if (result != 0) {
              v38 = *(_DWORD*)(v49 + 212);
              *(_DWORD*)(result + 80) = v38;
              *(_DWORD*)(result + 84) = v38;
              *(_BYTE*)(result + 88) |= 0x10u;
            }
          }
          if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
            result = GameRoutine_1a09c50(v29);
          }
          LODWORD(v15) = *(_DWORD*)(v20 + 7680);
          v16 = *(_QWORD*)(v20 + 7712);
          v17 = *(_QWORD*)(v20 + 7704);
          ++v14;
        LABEL_6:
          if ((int)v15 + 1 < (unsigned __int64)((v16 - v17) >> 3)) {
            v18 = v15 + 1;
          }
          else {
            v18 = 0;
          }
          *(_DWORD*)(v20 + 7680) = v18;
          goto LABEL_10;
        }
      }
      else {
        v30 = 0;
        v29 = 0;
        if ((v50 & 1) == 0) {
          goto LABEL_34;
        }
      }
      if (v52 != nullptr) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v31 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v31);
      }
      goto LABEL_34;
    }
  LABEL_10:
    v13 += 48;
  } while (v13 != 0);
  v39 = *a4;
  v12 = v48;
  if (v14 < 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3)) {
    v40 = 40 * v14;
    do {
      v41 = (_QWORD*)(v39 + v40);
      v42 = v41 + 1;
      if ((v41[1] & 1) != 0) {
        GameRoutine_60a270(&v50, v41[3], v41[2]);
      }
      else {
        v43 = *v42;
        v44 = v42[1];
        v45 = (char*)v42[2];
        v51 = v44;
        v52 = v45;
        v50 = v43;
      }
      if ((v50 & 1) != 0) {
        v46 = v52;
      }
      else {
        v46 = (char*)&v50 + 1;
      }
      result = GameRoutine_155f480(v11, v46);
      if (result != 0) {
        *(_BYTE*)(result + 88) &= ~1u;
      }
      if ((v50 & 1) != 0 && v52 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v47);
      }
      v39 = *a4;
      ++v14;
      v40 += 40;
    } while (v14 < 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3));
  }
LABEL_60:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return GameRoutine_1a09c50(v12);
  }
  return result;
}

__int64 GameHr_1a00ae0(__int64 a1, __int64* a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  char v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;

  *(_DWORD*)(a1 + 200) = 0;
  v54 = a3;
  result = a2[1];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v7 = *a2;
      v43 = result;
      if (v7 != 0) {
        v8 = GameRoutine_155f480(v7, "N_Weapon");
        if (v8 != 0) {
          v9 = *(_BYTE*)(v8 + 88) & 0xFE;
          if (a3 == 1) {
            ++v9;
          }
          *(_BYTE*)(v8 + 88) = v9;
        }
        result = GameRoutine_155f480(v7, "N_Efficacy");
        if (result != 0) {
          v10 = *(_BYTE*)(result + 88) & 0xFE;
          if (a3 == 2) {
            ++v10;
          }
          *(_BYTE*)(result + 88) = v10;
        }
        v11 = *(_QWORD*)(a1 + 56);
        v12 = *(_QWORD*)(a1 + 64);
        v13 = GameData_2130190[0];
        v14 = GameData_212bf68;
        if (v11 != v12) {
          v15 = GameData_21301b8[0] + 2;
          do {
            v44 = v13 + 2;
            if ((*(_BYTE*)(v11 + 8) & 1) != 0) {
              GameRoutine_60a270(&v45, *(_QWORD*)(v11 + 24),
                                 *(_QWORD*)(v11 + 16));
            }
            else {
              v16 = *(_QWORD*)(v11 + 8);
              v17 = *(_QWORD*)(v11 + 24);
              v46 = *(_QWORD*)(v11 + 16);
              v47 = v17;
              v45 = v16;
            }
            v18 = *(_DWORD*)(v11 + 32);
            v44 = v15;
            v48 = v18;
            v49 = *(_QWORD*)(v11 + 40);
            v19 = *(_QWORD*)(v11 + 48);
            v20 = *(_QWORD*)(v11 + 56);
            v21 = *(_QWORD*)(v11 + 64);
            v53 = *(_DWORD*)(v11 + 72);
            v51 = v20;
            v52 = v21;
            v50 = v19;
            result = GameRoutine_1a00e90(v7, &v54, &v44);
            v44 = v13 + 2;
            if ((v45 & 1) != 0 && v47 != 0) {
              v22 = 128;
              if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
                v22 = 56;
              }
              result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v22);
            }
            v11 += 80;
          } while (v11 != v12);
        }
        v23 = *(_QWORD*)(a1 + 80);
        v24 = *(_QWORD*)(a1 + 88);
        if (v23 != v24) {
          v25 = GameData_21301b8[0] + 2;
          do {
            v44 = v13 + 2;
            if ((*(_BYTE*)(v23 + 8) & 1) != 0) {
              GameRoutine_60a270(&v45, *(_QWORD*)(v23 + 24),
                                 *(_QWORD*)(v23 + 16));
            }
            else {
              v26 = *(_QWORD*)(v23 + 8);
              v27 = *(_QWORD*)(v23 + 24);
              v46 = *(_QWORD*)(v23 + 16);
              v47 = v27;
              v45 = v26;
            }
            v28 = *(_DWORD*)(v23 + 32);
            v44 = v25;
            v48 = v28;
            v49 = *(_QWORD*)(v23 + 40);
            v29 = *(_QWORD*)(v23 + 48);
            v30 = *(_QWORD*)(v23 + 56);
            v31 = *(_QWORD*)(v23 + 64);
            v53 = *(_DWORD*)(v23 + 72);
            v51 = v30;
            v52 = v31;
            v50 = v29;
            result = GameRoutine_1a00e90(v7, &v54, &v44);
            v44 = v13 + 2;
            if ((v45 & 1) != 0 && v47 != 0) {
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
                v32 = 56;
              }
              result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v32);
            }
            v23 += 80;
          } while (v23 != v24);
        }
        v34 = *(_QWORD*)(a1 + 104);
        v33 = *(_QWORD*)(a1 + 112);
        if (v34 != v33) {
          v35 = GameData_21301b8[0] + 2;
          do {
            v44 = v13 + 2;
            if ((*(_BYTE*)(v34 + 8) & 1) != 0) {
              GameRoutine_60a270(&v45, *(_QWORD*)(v34 + 24),
                                 *(_QWORD*)(v34 + 16));
            }
            else {
              v36 = *(_QWORD*)(v34 + 8);
              v37 = *(_QWORD*)(v34 + 24);
              v46 = *(_QWORD*)(v34 + 16);
              v47 = v37;
              v45 = v36;
            }
            v38 = *(_DWORD*)(v34 + 32);
            v44 = v35;
            v48 = v38;
            v49 = *(_QWORD*)(v34 + 40);
            v39 = *(_QWORD*)(v34 + 48);
            v40 = *(_QWORD*)(v34 + 56);
            v41 = *(_QWORD*)(v34 + 64);
            v53 = *(_DWORD*)(v34 + 72);
            v51 = v40;
            v52 = v41;
            v50 = v39;
            result = GameRoutine_1a00e90(v7, &v54, &v44);
            v44 = v13 + 2;
            if ((v45 & 1) != 0 && v47 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                v42 = 128;
              }
              else {
                v42 = 56;
              }
              result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v42);
            }
            v34 += 80;
          } while (v34 != v33);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
        return GameRoutine_1a09c50(v43);
      }
    }
  }
  return result;
}

__int64* GameHr_1a010e0(__int64* result, __int64 a2)
{
  void (***v2)(_QWORD);
  void (***v3)(_QWORD);
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  void (***v10)(_QWORD);
  __int64 v11;
  _QWORD* v12;
  void (**v13)(_QWORD);
  void (**v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  __int64 v17;

  v2 = (void (***)(_QWORD))result[1];
  v3 = (void (***)(_QWORD))*result;
  v4 = (__int64)v2 - *result;
  if (result[2] - *result > (unsigned __int64)v4) {
    if (v2 == v3) {
      v7 = (__int64)v2 - *result;
    }
    else {
      if (0xCCCCCCCCCCCCCCCDLL * (v4 >> 3) >= 0x666666666666667LL) {
        GameRoutine_60a210(result, a2);
      }
      v5 = result;
      v6 = GameRoutine_651b90(GameData_2265ee0, v4, 16, 0);
      v4 += v6;
      v7 = v6;
      v8 = 0;
      v9 = GameData_2130190[0] + 2;
      do {
        v11 = v7 + v8 * 8;
        *(_QWORD*)(v7 + v8 * 8) = v9;
        v12 = (_QWORD*)(v7 + v8 * 8 + 8);
        if (((__int64)v3[v8 + 1] & 1) != 0) {
          GameRoutine_60a270(v12, v3[v8 + 3], v3[v8 + 2]);
        }
        else {
          v13 = v3[v8 + 1];
          v14 = v3[v8 + 3];
          *(_QWORD*)(v7 + v8 * 8 + 16) = v3[v8 + 2];
          *(_QWORD*)(v7 + v8 * 8 + 24) = v14;
          *v12 = v13;
        }
        v10 = &v3[v8];
        v8 += 5;
        *(_DWORD*)(v11 + 32) = *((_DWORD*)v10 + 8);
      } while (&v3[v8] != v2);
      v15 = v3;
      do {
        v16 = *v15;
        v15 += 5;
        (*v16)(v3);
        v3 = v15;
      } while (v15 != v2);
      v3 = (void (***)(_QWORD))*v5;
      result = v5;
    }
    *result = v7;
    result[1] = v4;
    result[2] = v4;
    if (v3 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v17 = 56;
      }
      return (__int64*)GameRoutine_1a0a4e0(GameData_2265ee0 + v17);
    }
  }
  return result;
}

__int64* GameHr_1a01280(__int64* result, __int64 a2)
{
  char* v2;
  char* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  int v13;
  void (**v14)(_QWORD);
  void (**v15)(_QWORD);
  void (**v16)(_QWORD);
  _QWORD* v17;
  __int64 v18;
  void (**v19)(_QWORD);
  void (**v20)(_QWORD);
  char* v21;
  void (**v22)(char*);
  __int64 v23;

  v2 = (char*)result[1];
  v3 = (char*)*result;
  v4 = (__int64)&v2[-*result];
  if (result[2] - *result > (unsigned __int64)v4) {
    v5 = &GameData_2265ee0;
    if (v2 == v3) {
      v9 = (__int64)&v2[-*result];
      v8 = v9;
    }
    else {
      if (0xCCCCCCCCCCCCCCCDLL * (v4 >> 4) >= 0x333333333333334LL) {
        GameRoutine_60a210(result, a2);
      }
      v6 = result;
      v7 = GameRoutine_651b90(GameData_2265ee0, v4, 16, 0);
      v8 = v7 + v4;
      v9 = v7;
      v10 = 0;
      v11 = &v2[-v4] - v3 + v7 + 8;
      do {
        v17 = (_QWORD*)(v11 + v10);
        *(_QWORD*)(v11 + v10 - 8) = GameData_212b098;
        v18 = v11 + v10 - 8;
        if ((v3[v10 + 8] & 1) != 0) {
          GameRoutine_60a270(v17, *(_QWORD*)&v3[v10 + 24],
                             *(_QWORD*)&v3[v10 + 16]);
        }
        else {
          v19 = *(void (***)(_QWORD))&v3[v10 + 8];
          v20 = *(void (***)(_QWORD))&v3[v10 + 24];
          v17[1] = *(_QWORD*)&v3[v10 + 16];
          v17[2] = v20;
          *v17 = v19;
        }
        v12 = &v3[v10];
        v10 += 80;
        v13 = *((_DWORD*)v12 + 8);
        *(_QWORD*)v18 = GameData_2010b88;
        *(_DWORD*)(v18 + 32) = v13;
        *(_QWORD*)(v18 + 40) = *((_QWORD*)v12 + 5);
        v14 = *((void (***)(_QWORD))v12 + 6);
        v15 = *((void (***)(_QWORD))v12 + 7);
        v16 = *((void (***)(_QWORD))v12 + 8);
        *(_DWORD*)(v18 + 72) = *((_DWORD*)v12 + 18);
        *(_QWORD*)(v18 + 56) = v15;
        *(_QWORD*)(v18 + 64) = v16;
        *(_QWORD*)(v18 + 48) = v14;
      } while (&v3[v10] != v2);
      v21 = v3;
      do {
        v22 = *(void (***)(char*))v21;
        v21 += 80;
        (*v22)(v3);
        v3 = v21;
      } while (v21 != v2);
      v3 = (char*)*v6;
      result = v6;
      v5 = (__int64*)GameData_212bf68;
    }
    *result = v9;
    result[1] = v8;
    result[2] = v8;
    if (v3 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v23 = 56;
      }
      return (__int64*)GameRoutine_1a0a4e0(*v5 + v23);
    }
  }
  return result;
}

__int64 GameHr_1a01a00(float a1, float a2, float a3, __int64 a4, __int64 a5,
                       const char* a6)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  char v17;
  char v18;
  struct {
    __int64* v19;
    __int64 v20;
  } v19_;

  result = *(_QWORD*)(a5 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v12 = *(__int64**)a5;
      v13 = result;
      if (v12 == nullptr) {
      LABEL_16:
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          return std___1___shared_weak_count___release_weak(v13);
        }
        return result;
      }
      LayoutAccessor_1560070((void*)(&v19_.v19), v12, a6);
      if (v19_.v20 != 0) {
        v14 = std___1___shared_weak_count_lock(v19_.v20);
        v15 = v19_.v19;
        if (v19_.v20 != 0) {
          std___1___shared_weak_count___release_weak(v19_.v20);
        }
        if (v14 != 0 && v15 != nullptr) {
          v16 = ui_LayoutAccessor_FindPane(v15, (__int64)"N_Top");
          if (v16 != 0) {
            v17 = *(_BYTE*)(v16 + 88);
            *(float*)(v16 + 80) = a3;
            *(float*)(v16 + 84) = a3;
            *(_BYTE*)(v16 + 88) = v17 | 0x10;
          }
          goto LABEL_12;
        }
        if (v14 != 0) {
        LABEL_12:
          if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
            std___1___shared_weak_count___release_weak(v14);
          }
        }
      }
      result = ui_LayoutAccessor_FindPane(v12, (__int64)a6);
      if (result != 0) {
        v18 = *(_BYTE*)(result + 88);
        *(float*)(result + 48) = a1;
        *(float*)(result + 52) = a2;
        *(_DWORD*)(result + 56) = 0;
        *(float*)(result + 80) = a3;
        *(float*)(result + 84) = a3;
        *(_BYTE*)(result + 88) = v18 | 0x11;
      }
      goto LABEL_16;
    }
  }
  return result;
}

__int64 GameHr_1a05260(int** a1, __int64 a2, char a3, const char* a4,
                       const char* a5)
{
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  char* v12;
  __int64 v13;
  const char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  int* v19;
  int* v20;
  unsigned __int64 v21;
  __int64* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  char v68;
  char v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  _QWORD* v95;
  __int64 v96;
  char v97;
  char v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  _QWORD* v104;
  unsigned __int64 v105;
  char v106;
  char v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v113;
  unsigned __int64 v114;
  int* v115;
  char v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  struct {
    __int64 v120;
    unsigned __int64 v121;
    char* v122;
  } v120_;
  struct {
    __int64 v123;
    unsigned __int64 v124;
    char* v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    char v129;
  } v123_;
  struct {
    __int64 v130;
    unsigned __int64 v131;
    char* v132;
  } v130_;
  __int64 v133;
  unsigned __int64 v134;
  char* v135;
  int v136;
  __int64 v137;
  __int64 v138;
  _QWORD v139[2];
  _QWORD** v140;
  struct {
    _QWORD* v141;
    __int64 v142;
    __int64 v143;
    __int64 v144;
    _BYTE* v145;
    __int64 v146;
    int v147;
    char gap276_[4];
    char v148;
  } v141_;
  struct {
    _BYTE v149[32];
    __int64 v150;
  } v149_;
  struct {
    __int64 v151;
    unsigned __int64 v152;
    char* v153;
  } v151_;
  struct {
    __int64 v154;
    unsigned __int64 v155;
    char* v156;
  } v154_;

  v117 = ProcList_9bd480(a2);
  if (v117 == 0) {
    return 0;
  }
  v9 = strlen(a4);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_175:
    String_60a1d0();
  }
  v10 = v9;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v154_.v155 = v10;
    v154_.v156 = v12;
    v154_.v154 = v13 | 1;
    goto LABEL_10;
  }
  LOBYTE(v154_.v154) = 2 * v9;
  v12 = (char*)&v154_.v154 + 1;
  if (v9 != 0) {
  LABEL_10:
    memcpy((__int64)v12, (__int64)a4, v10);
  }
  v12[v10] = 0;
  if (a5 != nullptr) {
    v14 = a5;
  }
  else {
    v14 = &GameData_1a9f09e;
  }
  v15 = strlen(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_175;
  }
  v16 = v15;
  v116 = a3 & 1;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(*v11, v18, 16, 0);
    v151_.v152 = v16;
    v151_.v153 = v17;
    v151_.v151 = v18 | 1;
  }
  else {
    LOBYTE(v151_.v151) = 2 * v15;
    v17 = (char*)&v151_.v151 + 1;
    if (v15 == 0) {
      goto LABEL_23;
    }
  }
  memcpy((__int64)v17, (__int64)v14, v16);
LABEL_23:
  v17[v16] = 0;
  v20 = *a1;
  v19 = a1[1];
  if (*a1 == v19) {
    goto LABEL_60;
  }
  v21 = v151_.v152;
  v118 = (__int64)v154_.v156;
  v113 = (__int64)v151_.v153;
  v114 = v154_.v155;
  v22 = GameData_212c878[0];
  do {
    if (*((_WORD*)v20 + 2) == 0 ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v22 + 64) +
                              8LL * *((unsigned __int16*)v20 + 2)) +
                   337LL) &
         4) == 0) {
      goto LABEL_26;
    }
    if ((v154_.v154 & 1) != 0) {
      fw_text_String_CopyTerminated(&v130_.v130, v118, v114);
      if ((v151_.v151 & 1) == 0) {
      LABEL_33:
        v133 = v151_.v151;
        v134 = v151_.v152;
        v135 = v151_.v153;
        goto LABEL_34;
      }
    }
    else {
      v130_.v130 = v154_.v154;
      v130_.v131 = v154_.v155;
      v130_.v132 = v154_.v156;
      if ((v151_.v151 & 1) == 0) {
        goto LABEL_33;
      }
    }
    fw_text_String_CopyTerminated(&v133, v113, v21);
  LABEL_34:
    v23 = *v20;
    v137 = 0;
    v136 = v23;
    v24 = *(_QWORD*)(v20 + 1);
    v138 = 0;
    v137 = v24;
    if (*((_BYTE*)v20 + 12) != 0) {
      v25 = *(_QWORD*)(v20 + 3);
    }
    else {
      v25 = 0;
    }
    v138 = v25;
    WORD1(v139[0]) = 0;
    HIDWORD(v139[0]) = 0;
    v141_.v141 = nullptr;
    v141_.v142 = 0;
    v140 = &v141_.v141;
    v141_.v143 = 0;
    v141_.v144 = 0;
    v141_.v145 = nullptr;
    GameRoutine_930b90_alt1((__int64)v139, (__int64)(v20 + 6));
    v26 = v20[24];
    v27 = *v11;
    v141_.v146 = *((_QWORD*)v20 + 11);
    v141_.v147 = v26;
    v141_.v148 = v116;
    v28 = fw_memory_HeapManager_Allocate(v27, 168, 16, 0);
    v29 = v130_.v130;
    v30 = v130_.v131;
    v31 = v28;
    v130_.v130 = 0;
    v130_.v131 = 0;
    *(_QWORD*)v28 =
        game_menu_ShowItemList_CreateBindResult_lambda0_Destructor_ptr;
    *(_QWORD*)(v28 + 8) = v29;
    v32 = (__int64)v130_.v132;
    v130_.v132 = nullptr;
    *(_QWORD*)(v28 + 16) = v30;
    *(_QWORD*)(v28 + 24) = v32;
    v33 = v133;
    v34 = v134;
    v133 = 0;
    *(_QWORD*)(v28 + 32) = v33;
    *(_QWORD*)(v28 + 40) = v34;
    v35 = (__int64)v135;
    v134 = 0;
    v135 = nullptr;
    *(_QWORD*)(v28 + 48) = v35;
    *(_DWORD*)(v28 + 56) = v136;
    *(_QWORD*)(v28 + 60) = v137;
    if ((_BYTE)v138 != 0) {
      v36 = v138;
    }
    else {
      v36 = 0;
    }
    *(_QWORD*)(v28 + 68) = v36;
    *(_QWORD*)(v28 + 104) = 0;
    *(_WORD*)(v28 + 82) = 0;
    *(_DWORD*)(v28 + 84) = 0;
    *(_QWORD*)(v28 + 112) = 0;
    *(_QWORD*)(v28 + 120) = 0;
    *(_QWORD*)(v28 + 128) = 0;
    *(_QWORD*)(v28 + 136) = 0;
    *(_QWORD*)(v28 + 96) = v28 + 104;
    GameRoutine_930b90_alt1(v28 + 80, (__int64)v139);
    v149_.v150 = v31;
    *(_QWORD*)(v31 + 144) = v141_.v146;
    *(_DWORD*)(v31 + 152) = v141_.v147;
    *(_BYTE*)(v31 + 160) = v141_.v148;
    game_ProcList_Call_9bcfa0(v117, (__int64)v149_.v149);
    (*(void (**)(__int64))(*(_QWORD*)v31 + 40LL))(v31);
    LODWORD(v139[1]) = 0;
    v139[0] = 0;
    if ((v141_.v143 & 1) != 0) {
      *v141_.v145 = 0;
      v141_.v144 = 0;
    }
    else {
      LOWORD(v141_.v143) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v140, v141_.v141);
    v141_.v141 = nullptr;
    v141_.v142 = 0;
    v140 = &v141_.v141;
    if ((v141_.v143 & 1) != 0) {
      v37 = v141_.v145;
      if (v141_.v145 != nullptr) {
        v38 = 128;
        if (*(_QWORD*)(*v11 + 200) == 0) {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v38, (__int64)v141_.v145);
        v37 = v141_.v141;
      }
    }
    else {
      v37 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v140, v37);
    if ((v133 & 1) != 0 && v135 != nullptr) {
      v39 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v39, (__int64)v135);
    }
    if ((v130_.v130 & 1) != 0 && v130_.v132 != nullptr) {
      v40 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v40, (__int64)v130_.v132);
    }
    v20[23] = 0;
    v19 = a1[1];
  LABEL_26:
    v20 += 28;
  } while (v20 != v19);
  v20 = *a1;
LABEL_60:
  if (v20 != v19) {
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v115 = v19;
    do {
      if (v20[23] >= 1) {
        if (v42 < v43) {
          v44 = *v20;
          *(_QWORD*)(v42 + 4) = 0;
          *(_DWORD*)v42 = v44;
          v45 = *(_QWORD*)(v20 + 1);
          *(_QWORD*)(v42 + 12) = 0;
          *(_QWORD*)(v42 + 4) = v45;
          if (*((_BYTE*)v20 + 12) != 0) {
            v46 = *(_QWORD*)(v20 + 3);
          }
          else {
            v46 = 0;
          }
          *(_QWORD*)(v42 + 48) = 0;
          v47 = v42 + 48;
          *(_QWORD*)(v47 - 36) = v46;
          *(_WORD*)(v47 - 22) = 0;
          *(_DWORD*)(v47 - 20) = 0;
          *(_QWORD*)(v47 - 8) = v47;
          *(_QWORD*)(v47 + 8) = 0;
          *(_QWORD*)(v47 + 16) = 0;
          *(_QWORD*)(v47 + 24) = 0;
          *(_QWORD*)(v47 + 32) = 0;
          GameRoutine_930b90_alt1(v47 - 24, (__int64)(v20 + 6));
          v48 = *((_QWORD*)v20 + 11);
          *(_DWORD*)(v47 + 48) = v20[24];
          *(_QWORD*)(v47 + 40) = v48;
          *(_WORD*)(v47 + 56) = *((_WORD*)v20 + 52);
          v42 = v47 + 64;
        }
        else {
          v49 = v42 - v41;
          v50 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v42 - v41) >> 4) + 1;
          if (v50 > 0x249249249249249LL) {
            goto LABEL_173;
          }
          if (0xDB6DB6DB6DB6DB6ELL * ((__int64)(v43 - v41) >> 4) > v50) {
            v50 = 0xDB6DB6DB6DB6DB6ELL * ((__int64)(v43 - v41) >> 4);
          }
          if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL *
                                 ((__int64)(v43 - v41) >> 4)) >=
              0x124924924924924LL) {
            v50 = 0x249249249249249LL;
          }
          if (v50 > 0x249249249249249LL) {
            GameRoutine_60a210_alt1();
          }
          v51 = v11;
          v119 = 112 * v50;
          v52 = fw_memory_HeapManager_Allocate(*v11, 112 * v50, 16, 0);
          v53 = v52 + v49;
          v54 = v52;
          *(_DWORD*)v53 = *v20;
          *(_QWORD*)(v53 + 4) = *(_QWORD*)(v20 + 1);
          if (*((_BYTE*)v20 + 12) != 0) {
            v55 = *(_QWORD*)(v20 + 3);
          }
          else {
            v55 = 0;
          }
          *(_QWORD*)(v53 + 12) = v55;
          *(_QWORD*)(v53 + 48) = 0;
          *(_WORD*)(v53 + 26) = 0;
          *(_DWORD*)(v53 + 28) = 0;
          *(_QWORD*)(v53 + 56) = 0;
          *(_QWORD*)(v53 + 64) = 0;
          *(_QWORD*)(v53 + 72) = 0;
          *(_QWORD*)(v53 + 80) = 0;
          *(_QWORD*)(v53 + 40) = v53 + 48;
          GameRoutine_930b90_alt1(v53 + 24, (__int64)(v20 + 6));
          v56 = *((_QWORD*)v20 + 11);
          v57 = v53 - v49;
          *(_DWORD*)(v53 + 96) = v20[24];
          *(_QWORD*)(v53 + 88) = v56;
          *(_WORD*)(v53 + 104) = *((_WORD*)v20 + 52);
          if (v41 != v42) {
            v58 = 0;
            do {
              v62 = v41 + v58;
              v63 = v57 + v58;
              v64 = *(_DWORD*)(v41 + v58);
              *(_QWORD*)(v63 + 4) = 0;
              *(_DWORD*)v63 = v64;
              v65 = *(_QWORD*)(v41 + v58 + 4);
              *(_QWORD*)(v63 + 12) = 0;
              *(_QWORD*)(v63 + 4) = v65;
              if (*(_BYTE*)(v41 + v58 + 12) != 0) {
                v59 = *(_QWORD*)(v62 + 12);
              }
              else {
                v59 = 0;
              }
              *(_QWORD*)(v63 + 48) = 0;
              v60 = v63 + 48;
              *(_QWORD*)(v63 + 12) = v59;
              *(_WORD*)(v63 + 26) = 0;
              *(_DWORD*)(v63 + 28) = 0;
              *(_QWORD*)(v63 + 40) = v63 + 48;
              *(_QWORD*)(v63 + 56) = 0;
              *(_QWORD*)(v63 + 64) = 0;
              *(_QWORD*)(v63 + 72) = 0;
              *(_QWORD*)(v63 + 80) = 0;
              GameRoutine_930b90_alt1(v63 + 24, v62 + 24);
              v61 = *(_QWORD*)(v62 + 88);
              v58 += 112;
              *(_DWORD*)(v60 + 48) = *(_DWORD*)(v62 + 96);
              *(_QWORD*)(v60 + 40) = v61;
              *(_WORD*)(v60 + 56) = *(_WORD*)(v62 + 104);
            } while (v41 + v58 != v42);
            v66 = v41;
            do {
              v68 = *(_BYTE*)(v66 + 64);
              *(_DWORD*)(v66 + 32) = 0;
              *(_QWORD*)(v66 + 24) = 0;
              if ((v68 & 1) != 0) {
                **(_BYTE**)(v66 + 80) = 0;
                *(_QWORD*)(v66 + 72) = 0;
              }
              else {
                *(_WORD*)(v66 + 64) = 0;
              }
              GameRoutine_6e3b50_alt1(v66 + 40, *(_QWORD**)(v66 + 48));
              v69 = *(_BYTE*)(v66 + 64);
              *(_QWORD*)(v66 + 48) = 0;
              *(_QWORD*)(v66 + 56) = 0;
              *(_QWORD*)(v66 + 40) = v66 + 48;
              if ((v69 & 1) != 0) {
                v67 = *(_QWORD**)(v66 + 80);
                if (v67 != nullptr) {
                  v70 = 128;
                  if (*(_QWORD*)(*v51 + 200) == 0) {
                    v70 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v51 + v70, (__int64)v67);
                  v67 = *(_QWORD**)(v66 + 48);
                }
              }
              else {
                v67 = nullptr;
              }
              GameRoutine_6e3b50_alt1(v66 + 40, v67);
              v66 += 112;
            } while (v66 != v42);
          }
          v42 = v53 + 112;
          v43 = v54 + v119;
          if (v41 != 0) {
            v11 = v51;
            v71 = 128;
            if (*(_QWORD*)(*v51 + 200) == 0) {
              v71 = 56;
            }
            nn_mem_StandardAllocator_Free(*v51 + v71, v41);
            v41 = v57;
          }
          else {
            v41 = v57;
            v11 = v51;
          }
          v19 = v115;
        }
      }
      v20 += 28;
    } while (v20 != v19);
    if (v42 != v41) {
      if ((v154_.v154 & 1) != 0) {
        fw_text_String_CopyTerminated(&v120_.v120, (__int64)v154_.v156,
                                      v154_.v155);
      }
      else {
        v120_.v120 = v154_.v154;
        v120_.v121 = v154_.v155;
        v120_.v122 = v154_.v156;
      }
      if ((v151_.v151 & 1) != 0) {
        fw_text_String_CopyTerminated(&v123_.v123, (__int64)v151_.v153,
                                      v151_.v152);
      }
      else {
        v123_.v123 = v151_.v151;
        v123_.v124 = v151_.v152;
        v123_.v125 = v151_.v153;
      }
      v72 = v42 - v41;
      v123_.v127 = 0;
      v123_.v128 = 0;
      v123_.v126 = 0;
      if (v42 == v41) {
        v83 = 0;
        v82 = 0;
      }
      else {
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v72 >> 4)) >
            0x249249249249249LL) {
        LABEL_173:
          GameRoutine_e66f80_alt1();
        }
        v73 = fw_memory_HeapManager_Allocate(*v11, v42 - v41, 16, 0);
        v74 = 0;
        v123_.v126 = v73;
        v123_.v127 = v73;
        v123_.v128 = v73 + v72;
        do {
          v78 = v41 + v74;
          v79 = v73 + v74;
          v80 = *(_DWORD*)(v41 + v74);
          *(_QWORD*)(v79 + 4) = 0;
          *(_DWORD*)v79 = v80;
          v81 = *(_QWORD*)(v41 + v74 + 4);
          *(_QWORD*)(v79 + 12) = 0;
          *(_QWORD*)(v79 + 4) = v81;
          if (*(_BYTE*)(v41 + v74 + 12) != 0) {
            v75 = *(_QWORD*)(v78 + 12);
          }
          else {
            v75 = 0;
          }
          *(_QWORD*)(v79 + 48) = 0;
          v76 = v79 + 48;
          *(_QWORD*)(v79 + 12) = v75;
          *(_WORD*)(v79 + 26) = 0;
          *(_DWORD*)(v79 + 28) = 0;
          *(_QWORD*)(v79 + 40) = v79 + 48;
          *(_QWORD*)(v79 + 56) = 0;
          *(_QWORD*)(v79 + 64) = 0;
          *(_QWORD*)(v79 + 72) = 0;
          *(_QWORD*)(v79 + 80) = 0;
          GameRoutine_930b90_alt1(v79 + 24, v78 + 24);
          v77 = *(_QWORD*)(v78 + 88);
          v74 += 112;
          *(_DWORD*)(v76 + 48) = *(_DWORD*)(v78 + 96);
          *(_QWORD*)(v76 + 40) = v77;
          *(_WORD*)(v76 + 56) = *(_WORD*)(v78 + 104);
        } while (v41 + v74 != v42);
        v72 = v73 + v74;
        v82 = v123_.v126;
        v83 = v123_.v128;
      }
      v84 = *v11;
      v123_.v129 = v116;
      v85 = fw_memory_HeapManager_Allocate(v84, 88, 16, 0);
      v86 = v120_.v120;
      v87 = v120_.v121;
      v88 = v85;
      *(_QWORD*)(v85 + 64) = v72;
      *(_QWORD*)(v85 + 72) = v83;
      *(_BYTE*)(v85 + 80) = v116;
      v149_.v150 = v85;
      v120_.v120 = 0;
      v120_.v121 = 0;
      v123_.v127 = 0;
      v123_.v128 = 0;
      v123_.v126 = 0;
      *(_QWORD*)v85 =
          game_menu_ShowItemList_CreateBindResult_lambda1_Destructor_ptr;
      *(_QWORD*)(v85 + 8) = v86;
      v89 = (__int64)v120_.v122;
      v120_.v122 = nullptr;
      *(_QWORD*)(v85 + 16) = v87;
      *(_QWORD*)(v85 + 24) = v89;
      v90 = v123_.v123;
      v91 = v123_.v124;
      v123_.v123 = 0;
      *(_QWORD*)(v85 + 32) = v90;
      *(_QWORD*)(v85 + 40) = v91;
      v92 = (__int64)v123_.v125;
      v123_.v124 = 0;
      v123_.v125 = nullptr;
      *(_QWORD*)(v85 + 48) = v92;
      *(_QWORD*)(v85 + 56) = v82;
      game_ProcList_Call_9bcfa0(v117, (__int64)v149_.v149);
      (*(void (**)(__int64))(*(_QWORD*)v88 + 40LL))(v88);
      v93 = v123_.v126;
      if (v123_.v126 != 0) {
        if (v123_.v126 == v123_.v127) {
          goto LABEL_132;
        }
        v94 = v123_.v127 - 40;
        do {
          v97 = *(_BYTE*)(v94 - 8);
          *(_DWORD*)(v94 - 40) = 0;
          *(_QWORD*)(v94 - 48) = 0;
          if ((v97 & 1) != 0) {
            **(_BYTE**)(v94 + 8) = 0;
            *(_QWORD*)v94 = 0;
          }
          else {
            *(_WORD*)(v94 - 8) = 0;
          }
          GameRoutine_6e3b50_alt1(v94 - 32, *(_QWORD**)(v94 - 24));
          v98 = *(_BYTE*)(v94 - 8);
          *(_QWORD*)(v94 - 24) = 0;
          *(_QWORD*)(v94 - 16) = 0;
          *(_QWORD*)(v94 - 32) = v94 - 24;
          if ((v98 & 1) != 0) {
            v95 = *(_QWORD**)(v94 + 8);
            if (v95 != nullptr) {
              if (*(_QWORD*)(*v11 + 200) != 0) {
                v99 = 128;
              }
              else {
                v99 = 56;
              }
              nn_mem_StandardAllocator_Free(*v11 + v99, (__int64)v95);
              v95 = *(_QWORD**)(v94 - 24);
            }
          }
          else {
            v95 = nullptr;
          }
          GameRoutine_6e3b50_alt1(v94 - 32, v95);
          v96 = v94 - 72;
          v94 -= 112;
        } while (v96 != v93);
        v123_.v127 = v93;
        v93 = v123_.v126;
        if (v123_.v126 != 0) {
        LABEL_132:
          v100 = 128;
          if (*(_QWORD*)(*v11 + 200) == 0) {
            v100 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v100, v93);
        }
      }
      if ((v123_.v123 & 1) != 0 && v123_.v125 != nullptr) {
        v101 = 128;
        if (*(_QWORD*)(*v11 + 200) == 0) {
          v101 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v101, (__int64)v123_.v125);
      }
      if ((v120_.v120 & 1) != 0 && v120_.v122 != nullptr) {
        v102 = 128;
        if (*(_QWORD*)(*v11 + 200) == 0) {
          v102 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v102, (__int64)v120_.v122);
      }
    }
    if (v41 != 0) {
      if (v41 != v42) {
        v103 = v42 - 40;
        do {
          v106 = *(_BYTE*)(v103 - 8);
          *(_DWORD*)(v103 - 40) = 0;
          *(_QWORD*)(v103 - 48) = 0;
          if ((v106 & 1) != 0) {
            **(_BYTE**)(v103 + 8) = 0;
            *(_QWORD*)v103 = 0;
          }
          else {
            *(_WORD*)(v103 - 8) = 0;
          }
          GameRoutine_6e3b50_alt1(v103 - 32, *(_QWORD**)(v103 - 24));
          v107 = *(_BYTE*)(v103 - 8);
          *(_QWORD*)(v103 - 24) = 0;
          *(_QWORD*)(v103 - 16) = 0;
          *(_QWORD*)(v103 - 32) = v103 - 24;
          if ((v107 & 1) != 0) {
            v104 = *(_QWORD**)(v103 + 8);
            if (v104 != nullptr) {
              if (*(_QWORD*)(*v11 + 200) != 0) {
                v108 = 128;
              }
              else {
                v108 = 56;
              }
              nn_mem_StandardAllocator_Free(*v11 + v108, (__int64)v104);
              v104 = *(_QWORD**)(v103 - 24);
            }
          }
          else {
            v104 = nullptr;
          }
          GameRoutine_6e3b50_alt1(v103 - 32, v104);
          v105 = v103 - 72;
          v103 -= 112LL;
        } while (v105 != v41);
      }
      v109 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v109 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v109, v41);
    }
  }
  if ((v151_.v151 & 1) != 0 && v151_.v153 != nullptr) {
    v110 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v110 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v110, (__int64)v151_.v153);
  }
  if ((v154_.v154 & 1) != 0 && v154_.v156 != nullptr) {
    v111 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v111 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v111, (__int64)v154_.v156);
  }
  return 0;
}

__int64 GameHr_1a075b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
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
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  __int64 v29;
  _QWORD v30[2];
  __int64 v31;
  __int64 v32;
  char v33[4];

  v30[0] = "L_Txt";
  v30[1] = 5;
  GameRoutine_9b8fe0((void*)&v31, a1 + 168, v30);
  if (v32 != 0) {
    v2 = GameRoutine_1a0a0c0(v32);
    v3 = v31;
    if (v32 != 0) {
      GameRoutine_1a09c50(v32);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        goto LABEL_27;
      }
    }
    else {
      v5 = *(unsigned __int8*)(a1 + 872);
      v6 = *(_QWORD*)(a1 + 880);
      if ((v5 & 1) == 0) {
        v6 = v5 >> 1;
      }
      if (v6 != 0) {
        if ((v5 & 1) != 0) {
          v7 = *(_QWORD*)(a1 + 888);
        }
        else {
          v7 = a1 + 873;
        }
        if (v7 != 0) {
          v8 = v7;
        }
        else {
          v8 = (__int64)*GameData_212def8;
        }
        GameRoutine_60a020(*GameData_212c738[0] + 14704, v8);
      }
      if ((*(_BYTE*)(a1 + 848) & 1) != 0) {
        v9 = *(_QWORD*)(a1 + 864);
      }
      else {
        v9 = a1 + 849;
      }
      GameRoutine_188ab20(v3, v9);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      GameRoutine_1a09c50(v2);
    }
  }
LABEL_27:
  if (*(_BYTE*)(a1 + 896) != 1) {
    GameRoutine_1560070((void*)&v28, a1 + 168, "L_ItemList");
    if (v29 == 0) {
      goto LABEL_49;
    }
    v14 = GameRoutine_1a0a0c0(v29);
    if (v14 != 0) {
      v15 = v14;
      if (v28 != 0) {
        GameRoutine_1586140(v28, a1 + 824);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        GameRoutine_1a09c50(v15);
      }
    }
    v16 = v29;
    if (v29 == 0) {
      goto LABEL_49;
    }
  LABEL_37:
    GameRoutine_1a09c50(v16);
    goto LABEL_49;
  }
  v10 = GameRoutine_155fbe0(a1 + 168, "L_InfoDetail");
  v11 = *(_QWORD*)(a1 + 824);
  v12 = GameData_212c878[0];
  if (*(_BYTE*)(a1 + 897) == 1) {
    v13 = *(unsigned int*)(v11 + 92);
  }
  else {
    v13 = 1;
  }
  GameRoutine_1592340(v10,
                      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(v11 + 4)),
                      v13);
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                            8LL * *(unsigned __int16*)(v11 + 4)) +
                 337LL) &
       4) != 0 &&
      (*(_BYTE*)(a1 + 898) & 1) != 0) {
    GameRoutine_1560070((void*)&v31, a1 + 168, "L_Bg");
    if (v32 != 0) {
      v17 = GameRoutine_1a0a0c0(v32);
      v18 = v31;
      if (v32 != 0) {
        GameRoutine_1a09c50(v32);
      }
      if (v17 != 0 && v18 != 0) {
        GameRoutine_1562cf0(v18, "Color0");
      }
      else if (v17 == 0) {
        goto LABEL_49;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        v16 = v17;
        goto LABEL_37;
      }
    }
  }
LABEL_49:
  GameRoutine_1562cf0(a1 + 168, "ArrowOff");
  v19 = GameRoutine_15621a0(a1 + 168, "L_Txt/T_Txt");
  if (v19 != 0) {
    v20 = v19;
    v21 = GameRoutine_15621a0(a1 + 168, "L_Txt/T_Txt");
    if (v21 != 0) {
      GameRoutine_190a0c0(&v31, v30, v33, v21, *(_QWORD*)(v21 + 216));
      v22 = v30[0];
    }
    else {
      v22 = 0;
    }
    v23 = *(_BYTE*)(v20 + 88);
    *(_QWORD*)(v20 + 80) = v22;
    *(_BYTE*)(v20 + 88) = v23 | 0x10;
  }
  if (GameRoutine_1563e00(a1 + 168, "A_Contents") != 0) {
    GameRoutine_56b600();
    v24 = *(_QWORD*)(a1 + 176);
    if (v24 != 0) {
      v25 = GameRoutine_1a0a0c0(v24);
      if (v25 != 0) {
        v26 = v25;
        if (*(_QWORD*)(a1 + 168) != 0) {
          GameRoutine_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          GameRoutine_1a09c50(v26);
        }
      }
    }
  }
  return GameRoutine_17356e0(a1 + 168, "A_Contents");
}

__int64 GameHr_1a07cc0(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE** v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  _BYTE** v26;
  _BYTE* v27;
  _BYTE** v28;
  char v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;

  v2 = a1[1] - *a1;
  v3 = 0x6DB6DB6DB6DB6DB7LL * (v2 >> 4) + 1;
  if (v3 > 0x249249249249249LL) {
    GameRoutine_e66f80_alt1();
  }
  if (0xDB6DB6DB6DB6DB6ELL * ((a1[2] - *a1) >> 4) > v3) {
    v3 = 0xDB6DB6DB6DB6DB6ELL * ((a1[2] - *a1) >> 4);
  }
  if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 4)) >=
      0x124924924924924LL) {
    v5 = 0x249249249249249LL;
  }
  else {
    v5 = v3;
  }
  if (v5 > 0x249249249249249LL) {
    GameRoutine_60a210_alt1();
  }
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = 112 * v5;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112 * v5, 16, 0);
  v10 = v9 + v2;
  *(_DWORD*)v10 = *(_DWORD*)a2;
  *(_QWORD*)(v10 + 4) = *(_QWORD*)(a2 + 4);
  if (*(_BYTE*)(a2 + 12) != 0) {
    v11 = *(_QWORD*)(a2 + 12);
  }
  else {
    v11 = 0;
  }
  v12 = v9 + v8;
  *(_QWORD*)(v10 + 12) = v11;
  *(_QWORD*)(v10 + 48) = 0;
  *(_WORD*)(v10 + 26) = 0;
  *(_DWORD*)(v10 + 28) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)(v10 + 40) = v10 + 48;
  GameRoutine_930b90_alt1(v10 + 24, a2 + 24);
  v13 = *(_QWORD*)(a2 + 88);
  v14 = *a1;
  v15 = (_BYTE**)a1[1];
  *(_WORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 88) = v13;
  LODWORD(v13) = *(_DWORD*)(a2 + 96);
  v16 = v10 + 112;
  *(_DWORD*)(v10 + 96) = v13;
  v17 = v10 + v14 - (_QWORD)v15;
  if ((_BYTE**)v14 != v15) {
    v34 = v12;
    v18 = 0;
    do {
      v22 = v14 + v18;
      v23 = v17 + v18;
      v24 = *(_DWORD*)(v14 + v18);
      *(_QWORD*)(v23 + 4) = 0;
      *(_DWORD*)v23 = v24;
      v25 = *(_QWORD*)(v14 + v18 + 4);
      *(_QWORD*)(v23 + 12) = 0;
      *(_QWORD*)(v23 + 4) = v25;
      if (*(_BYTE*)(v14 + v18 + 12) != 0) {
        v19 = *(_QWORD*)(v22 + 12);
      }
      else {
        v19 = 0;
      }
      *(_QWORD*)(v23 + 48) = 0;
      v20 = v23 + 48;
      *(_QWORD*)(v23 + 12) = v19;
      *(_WORD*)(v23 + 26) = 0;
      *(_DWORD*)(v23 + 28) = 0;
      *(_QWORD*)(v23 + 40) = v23 + 48;
      *(_QWORD*)(v23 + 56) = 0;
      *(_QWORD*)(v23 + 64) = 0;
      *(_QWORD*)(v23 + 72) = 0;
      *(_QWORD*)(v23 + 80) = 0;
      GameRoutine_930b90_alt1(v23 + 24, v22 + 24);
      v21 = *(_QWORD*)(v22 + 88);
      v18 += 112;
      *(_DWORD*)(v20 + 48) = *(_DWORD*)(v22 + 96);
      *(_QWORD*)(v20 + 40) = v21;
      *(_WORD*)(v20 + 56) = *(_WORD*)(v22 + 104);
    } while ((_BYTE**)(v14 + v18) != v15);
    v26 = (_BYTE**)(v14 + 80);
    do {
      v29 = *((_BYTE*)v26 - 16);
      *((_DWORD*)v26 - 12) = 0;
      *(v26 - 7) = nullptr;
      if ((v29 & 1) != 0) {
        **v26 = 0;
        *(v26 - 1) = nullptr;
      }
      else {
        *((_WORD*)v26 - 8) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)(v26 - 5), *(v26 - 4));
      v30 = *((_BYTE*)v26 - 16);
      *(v26 - 4) = nullptr;
      *(v26 - 3) = nullptr;
      *(v26 - 5) = v26 - 4;
      if ((v30 & 1) != 0) {
        v27 = *v26;
        if (*v26 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v31, (__int64)v27);
          v27 = *(v26 - 4);
        }
      }
      else {
        v27 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)(v26 - 5), v27);
      v28 = v26 + 4;
      v26 += 14;
    } while (v28 != v15);
    v14 = *a1;
    v12 = v34;
  }
  *a1 = v17;
  a1[1] = v16;
  a1[2] = v12;
  if (v14 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v32, v14);
  }
  return v16;
}

#pragma GCC visibility pop
