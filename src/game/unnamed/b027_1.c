#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;

extern __int64* GameData_212c878[6];

extern __int64* GameData_212cfd0[8];

extern __int64* GameData_212d670[3];

extern __int64* GameData_212d678[2];

extern __int64* GameData_2130190[17];

extern __int64* GameData_21301b8[12];

extern __int64 GameData_21cd0e8;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_1a0a4e0(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD, _QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

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

_QWORD* game_19f2c80(_QWORD*, _QWORD*, unsigned __int16***, int, _QWORD*,
                     __int64);

__int64* game_UnitPool_Get(_BYTE*);

__int64 GameRoutine_19f3ea0_alt1(__int64, __int64, int,
                                 char) __asm__("GameRoutine_19f3ea0");

__int64 LayoutAccessor_155e830(__int64 result, char);

__int64 Mind_746340(__int64, char);

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 game_18415e0(__int64, __int64);

__int64 ui_LayoutAccessor_SetScale(__int64 result, _QWORD*);

extern __int64 (*game_map_MapChip_vtable[])();

extern __int64 (*game_map_UnitChip_vtable[])();

extern __int64 fw_memory_g_heap_manager;

float ui_LayoutAccessor_SetTranslate(__int64*, __int64);

void MapCombatPrediction_19f3700(__int64*);

void __attribute__((noreturn))
GameRoutine_bfeba0_alt1() __asm__("GameRoutine_bfeba0");

void game_map_1a00e90(__int64*, _DWORD*, _QWORD*);

void GameHr_19f3aa0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, __int64 a5);

void GameHr_1a006e0(__int64 a1, __int64 a2, __int64* a3, __int64* a4, float a5);

void GameHr_1a00ae0(__int64 a1, __int64 a2, int a3);

void GameHr_1a01280(__int64* a1);

void GameHr_19f3aa0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, __int64 a5)
{
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  _WORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  char v25;
  __int64 v26;
  unsigned int v27;
  int v28;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int16** v39;
  unsigned __int16** v40;
  __int64 v41;
  __int64 v42;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  struct {
    unsigned __int16** v48;
    unsigned __int16** v49;
    char* v50;
  } v48_;

  if (a2 == 0 ||
      (unsigned int)*(unsigned __int8*)(GameData_21cd0e8 + 32) - 3 > 2) {
    return;
  }
  *(_QWORD*)(a1 + 112) = a3;
  v5 = a3;
  *(_DWORD*)(a1 + 128) = 2;
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
    v9 = a1;
  }
  else {
    v9 = a1;
    v8 = 9;
  }
  if (*(_BYTE*)(a3 + 5) != 0) {
    v10 = a2;
    v11 = game_UnitPool_Get((_BYTE*)(a3 + 5));
    if (v11 != nullptr && (v12 = v11[55]) != 0) {
      v13 = *(unsigned __int8*)(v12 + 16);
    }
    else {
      v13 = 9;
    }
    a1 = v9;
    a2 = v10;
    if (v8 == v13) {
      goto LABEL_21;
    }
  }
  else {
    v13 = 9;
    a1 = v9;
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
  v45 = a1;
  v46 = (_QWORD*)a2;
  *(_DWORD*)(a1 + 128) = v14;
  v15 = (_WORD*)(a2 + 828);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = nullptr;
  v20 = GameData_212cfd0[0];
  v47 = v5;
  do {
    v21 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (unsigned __int16)*v15);
    v22 = *(unsigned __int8*)(v21 + 72);
    v23 = (1LL << *(_BYTE*)(v21 + 73)) & 0x7DC;
    if (v22 > 7 || v23 == 0) {
      if (*v15 == 0 || (Mind_746340(*v20, 3) & 1) == 0) {
        goto LABEL_24;
      }
    }
    else {
      v25 = Mind_746340(*v20, 4);
      if ((v25 & 1) == 0) {
        goto LABEL_24;
      }
      v26 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (unsigned __int16)*v15);
      v27 = *(unsigned __int8*)(v26 + 72);
      v28 = *(unsigned __int8*)(v26 + 73);
      if (v27 <= 7 && v28 == 7) {
        if (*(_BYTE*)(v5 + 5) == 0 ||
            game_UnitPool_Get((_BYTE*)(v5 + 5)) == nullptr ||
            (GameRoutine_19f3ea0_alt1((__int64)v46, v5, v16, 4) & 1) == 0) {
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
      v30 = &v19[-v17];
      v31 = (__int64)&v19[-v17] >> 3;
      v32 = v31 + 1;
      if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
        goto LABEL_73;
      }
      if ((__int64)(v18 - v17) >> 2 > v32) {
        v32 = (__int64)(v18 - v17) >> 2;
      }
      if (v18 - v17 >= 0x7FFFFFFFFFFFFFF8LL) {
        v33 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v33 = v32;
      }
      if (v33 != 0) {
        if (v33 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v34 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16, 0);
      }
      else {
        v34 = 0;
      }
      v18 = v34 + 8 * v33;
      v35 = (unsigned __int64)&v19[-v17];
      v36 = (__int64)&v30[v34 + -8 * v31];
      *(_QWORD*)&v30[v34] = v15;
      v19 = &v30[v34 + 8];
      memcpy(v36, v17, v35);
      if (v17 != 0) {
        v37 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v17);
      }
      v17 = v36;
      v5 = v47;
      v20 = GameData_212cfd0[0];
    }
  LABEL_24:
    ++v16;
    v15 += 4;
  } while (v16 != 30);
  v38 = (unsigned __int64)&v19[-v17];
  v48_.v49 = nullptr;
  v48_.v50 = nullptr;
  v48_.v48 = nullptr;
  if (v19 != (char*)v17) {
    if ((v38 & 0x8000000000000000LL) != 0) {
    LABEL_73:
      GameRoutine_bfeba0_alt1();
    }
    v39 = (unsigned __int16**)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int64)&v19[-v17], 16, 0);
    v40 = (unsigned __int16**)((char*)v39 + v38);
    v48_.v48 = v39;
    v48_.v50 = (char*)v39 + v38;
    memcpy((__int64)v39, v17, (unsigned __int64)&v19[-v17]);
    v48_.v49 = v40;
  }
  game_19f2c80((_QWORD*)v45, v46, &v48_.v48, *(_DWORD*)(v45 + 128), a4, a5);
  if (v48_.v48 != nullptr) {
    v48_.v49 = v48_.v48;
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  (__int64)v48_.v48);
  }
  MapCombatPrediction_19f3700((__int64*)v45);
  if (v17 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                                  v17);
  }
}

void GameHr_1a006e0(__int64 a1, __int64 a2, __int64* a3, __int64* a4, float a5)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64* v25;
  char v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  const char* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  char v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  unsigned __int64* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  const char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    unsigned __int64 v54;
    unsigned __int64 v55;
    const char* v56;
  } v54_;
  struct {
    __int64* v57;
    __int64 v58;
    char gap64_[8];
    const char* v59;
  } v57_;

  v6 = *(_QWORD*)(a2 + 8);
  if (v6 == 0) {
    return;
  }
  v11 = std___1___shared_weak_count_lock(v6);
  if (v11 == 0) {
    return;
  }
  v12 = *(__int64**)a2;
  v13 = v11;
  if (v12 == nullptr) {
    goto LABEL_60;
  }
  v52 = v11;
  v53 = a1;
  v14 = -7680;
  v15 = 0;
  v57_.v59 = (char*)&v54_.v54 + 1;
  do {
    v20 = *a3;
    v21 = *a3 + v14;
    if (*(_QWORD*)(v21 + 7696) == 0) {
      break;
    }
    v18 = *(_QWORD*)(v21 + 7704);
    v17 = *(_QWORD*)(v21 + 7712);
    if (v18 != v17) {
      v22 = *a4;
      if (v15 >= 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3)) {
        break;
      }
      v16 = *(int*)(v21 + 7680);
      v23 = *(_QWORD**)(v18 + 8 * v16);
      if (*v23 == 0) {
        goto LABEL_6;
      }
      v24 = v22 + 40 * v15;
      v26 = *(_BYTE*)(v24 + 8);
      v25 = (unsigned __int64*)(v24 + 8);
      if ((v26 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)&v54_.v54,
                                      *(_QWORD*)(v22 + 40 * v15 + 24),
                                      *(_QWORD*)(v22 + 40 * v15 + 16));
      }
      else {
        v27 = *v25;
        v28 = v25[1];
        v29 = v25[2];
        v54_.v55 = v28;
        v54_.v56 = (const char*)v29;
        v54_.v54 = v27;
      }
      if ((v54_.v54 & 1) != 0) {
        v30 = v54_.v56;
      }
      else {
        v30 = v57_.v59;
      }
      LayoutAccessor_1560070((void*)(&v57_.v57), v12, v30);
      if (v57_.v58 != 0) {
        v31 = std___1___shared_weak_count_lock(v57_.v58);
        if (v31 != 0) {
          v32 = v57_.v57;
        }
        else {
          v32 = nullptr;
        }
        if (v57_.v58 != 0) {
          std___1___shared_weak_count___release_weak(v57_.v58);
        }
        if ((v54_.v54 & 1) == 0) {
        LABEL_34:
          if (v32 != nullptr) {
            v34 = *(_DWORD*)(v20 + v14 + 7684);
            v35 = *(_DWORD*)(v20 + v14 + 7688);
            LODWORD(v54_.v55) = 0;
            v54_.v54 = __PAIR64__(v35, v34);
            ui_LayoutAccessor_SetTranslate(v32, (__int64)&v54_.v54);
            v54_.v54 = 0x3F8000003F800000LL;
            ui_LayoutAccessor_SetScale((__int64)v32, &v54_.v54);
            LayoutAccessor_155e830((__int64)v32, 1);
            v36 = ui_LayoutAccessor_FindPane(v32, (__int64)"MapChip_Efficacy");
            if (v36 != 0) {
              v37 = __dynamic_cast(v36, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              if (v37 != 0) {
                v38 = *(_BYTE*)(v37 + 88);
                *(_QWORD*)(v37 + 60) = 0;
                v38 |= 0x10u;
                *(float*)(v37 + 68) = a5;
                *(_BYTE*)(v37 + 88) = v38;
                v39 = *(_DWORD*)(v53 + 212);
                *(_BYTE*)(v37 + 88) = v38;
                *(_DWORD*)(v37 + 80) = v39;
                *(_DWORD*)(v37 + 84) = v39;
                game_18415e0(v37, (__int64)v23);
              }
            }
            v40 = ui_LayoutAccessor_FindPane(v32, (__int64)"N_Rot");
            if (v40 != 0) {
              v41 = *(_DWORD*)(v53 + 212);
              *(_DWORD*)(v40 + 80) = v41;
              *(_DWORD*)(v40 + 84) = v41;
              *(_BYTE*)(v40 + 88) |= 0x10u;
            }
          }
          if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak(v31);
          }
          LODWORD(v16) = *(_DWORD*)(v21 + 7680);
          v17 = *(_QWORD*)(v21 + 7712);
          v18 = *(_QWORD*)(v21 + 7704);
          ++v15;
        LABEL_6:
          if ((int)v16 + 1 < (unsigned __int64)((v17 - v18) >> 3)) {
            v19 = v16 + 1;
          }
          else {
            v19 = 0;
          }
          *(_DWORD*)(v21 + 7680) = v19;
          goto LABEL_10;
        }
      }
      else {
        v32 = nullptr;
        v31 = 0;
        if ((v54_.v54 & 1) == 0) {
          goto LABEL_34;
        }
      }
      if (v54_.v56 != nullptr) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v54_.v56);
      }
      goto LABEL_34;
    }
  LABEL_10:
    v14 += 48;
  } while (v14 != 0);
  v42 = *a4;
  v13 = v52;
  if (v15 < 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3)) {
    v43 = 40 * v15;
    do {
      v44 = (_QWORD*)(v42 + v43);
      v45 = v44 + 1;
      if ((v44[1] & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)&v54_.v54, v44[3], v44[2]);
      }
      else {
        v46 = *v45;
        v47 = v45[1];
        v48 = v45[2];
        v54_.v55 = v47;
        v54_.v56 = (const char*)v48;
        v54_.v54 = v46;
      }
      if ((v54_.v54 & 1) != 0) {
        v49 = v54_.v56;
      }
      else {
        v49 = (char*)&v54_.v54 + 1;
      }
      v50 = ui_LayoutAccessor_FindPane(v12, (__int64)v49);
      if (v50 != 0) {
        *(_BYTE*)(v50 + 88) &= ~1u;
      }
      if ((v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v51 = 128;
        }
        else {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, (__int64)v54_.v56);
      }
      v42 = *a4;
      ++v15;
      v43 += 40;
    } while (v15 < 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3));
  }
LABEL_60:
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
}

void GameHr_1a00ae0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  struct {
    __int64 v47;
    __int64 v48;
    __int64 v49;
    int v50;
    char gap44_[4];
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    int v55;
  } v47_;
  int v56;

  *(_DWORD*)(a1 + 200) = 0;
  v56 = a3;
  v4 = *(_QWORD*)(a2 + 8);
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4);
    if (v7 != 0) {
      v8 = *(__int64**)a2;
      v45 = v7;
      if (v8 != nullptr) {
        v9 = ui_LayoutAccessor_FindPane(v8, (__int64)"N_Weapon");
        if (v9 != 0) {
          v10 = *(_BYTE*)(v9 + 88) & 0xFE;
          if (a3 == 1) {
            ++v10;
          }
          *(_BYTE*)(v9 + 88) = v10;
        }
        v11 = ui_LayoutAccessor_FindPane(v8, (__int64)"N_Efficacy");
        if (v11 != 0) {
          v12 = *(_BYTE*)(v11 + 88) & 0xFE;
          if (a3 == 2) {
            ++v12;
          }
          *(_BYTE*)(v11 + 88) = v12;
        }
        v13 = *(_QWORD*)(a1 + 56);
        v14 = *(_QWORD*)(a1 + 64);
        v15 = GameData_2130190[0];
        v16 = fw_memory_g_heap_manager_ptr;
        if (v13 != v14) {
          v17 = GameData_21301b8[0] + 2;
          do {
            v46 = v15 + 2;
            if ((*(_BYTE*)(v13 + 8) & 1) != 0) {
              fw_text_String_CopyTerminated(&v47_.v47, *(_QWORD*)(v13 + 24),
                                            *(_QWORD*)(v13 + 16));
            }
            else {
              v18 = *(_QWORD*)(v13 + 8);
              v19 = *(_QWORD*)(v13 + 24);
              v47_.v48 = *(_QWORD*)(v13 + 16);
              v47_.v49 = v19;
              v47_.v47 = v18;
            }
            v20 = *(_DWORD*)(v13 + 32);
            v46 = v17;
            v47_.v50 = v20;
            v47_.v51 = *(_QWORD*)(v13 + 40);
            v21 = *(_QWORD*)(v13 + 48);
            v22 = *(_QWORD*)(v13 + 56);
            v23 = *(_QWORD*)(v13 + 64);
            v47_.v55 = *(_DWORD*)(v13 + 72);
            v47_.v53 = v22;
            v47_.v54 = v23;
            v47_.v52 = v21;
            game_map_1a00e90(v8, &v56, &v46);
            v46 = v15 + 2;
            if ((v47_.v47 & 1) != 0 && v47_.v49 != 0) {
              v24 = 128;
              if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
                v24 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v24, v47_.v49);
            }
            v13 += 80;
          } while (v13 != v14);
        }
        v25 = *(_QWORD*)(a1 + 80);
        v26 = *(_QWORD*)(a1 + 88);
        if (v25 != v26) {
          v27 = GameData_21301b8[0] + 2;
          do {
            v46 = v15 + 2;
            if ((*(_BYTE*)(v25 + 8) & 1) != 0) {
              fw_text_String_CopyTerminated(&v47_.v47, *(_QWORD*)(v25 + 24),
                                            *(_QWORD*)(v25 + 16));
            }
            else {
              v28 = *(_QWORD*)(v25 + 8);
              v29 = *(_QWORD*)(v25 + 24);
              v47_.v48 = *(_QWORD*)(v25 + 16);
              v47_.v49 = v29;
              v47_.v47 = v28;
            }
            v30 = *(_DWORD*)(v25 + 32);
            v46 = v27;
            v47_.v50 = v30;
            v47_.v51 = *(_QWORD*)(v25 + 40);
            v31 = *(_QWORD*)(v25 + 48);
            v32 = *(_QWORD*)(v25 + 56);
            v33 = *(_QWORD*)(v25 + 64);
            v47_.v55 = *(_DWORD*)(v25 + 72);
            v47_.v53 = v32;
            v47_.v54 = v33;
            v47_.v52 = v31;
            game_map_1a00e90(v8, &v56, &v46);
            v46 = v15 + 2;
            if ((v47_.v47 & 1) != 0 && v47_.v49 != 0) {
              v34 = 128;
              if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
                v34 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v34, v47_.v49);
            }
            v25 += 80;
          } while (v25 != v26);
        }
        v36 = *(_QWORD*)(a1 + 104);
        v35 = *(_QWORD*)(a1 + 112);
        if (v36 != v35) {
          v37 = GameData_21301b8[0] + 2;
          do {
            v46 = v15 + 2;
            if ((*(_BYTE*)(v36 + 8) & 1) != 0) {
              fw_text_String_CopyTerminated(&v47_.v47, *(_QWORD*)(v36 + 24),
                                            *(_QWORD*)(v36 + 16));
            }
            else {
              v38 = *(_QWORD*)(v36 + 8);
              v39 = *(_QWORD*)(v36 + 24);
              v47_.v48 = *(_QWORD*)(v36 + 16);
              v47_.v49 = v39;
              v47_.v47 = v38;
            }
            v40 = *(_DWORD*)(v36 + 32);
            v46 = v37;
            v47_.v50 = v40;
            v47_.v51 = *(_QWORD*)(v36 + 40);
            v41 = *(_QWORD*)(v36 + 48);
            v42 = *(_QWORD*)(v36 + 56);
            v43 = *(_QWORD*)(v36 + 64);
            v47_.v55 = *(_DWORD*)(v36 + 72);
            v47_.v53 = v42;
            v47_.v54 = v43;
            v47_.v52 = v41;
            game_map_1a00e90(v8, &v56, &v46);
            v46 = v15 + 2;
            if ((v47_.v47 & 1) != 0 && v47_.v49 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
                v44 = 128;
              }
              else {
                v44 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v44, v47_.v49);
            }
            v36 += 80;
          } while (v36 != v35);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak(v45);
      }
    }
  }
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

void GameHr_1a01280(__int64* a1)
{
  void (***v1)(__int64);
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  void (***v20)(__int64);
  void (**v21)(__int64);
  __int64 v22;

  v1 = (void (***)(__int64))a1[1];
  v2 = *a1;
  v3 = (__int64)v1 - *a1;
  if (a1[2] - *a1 > (unsigned __int64)v3) {
    v4 = &fw_memory_g_heap_manager;
    if (v1 == (void (***)(__int64))v2) {
      v8 = (__int64)v1 - *a1;
      v7 = v8;
    }
    else {
      if (0xCCCCCCCCCCCCCCCDLL * (v3 >> 4) >= 0x333333333333334LL) {
        GameRoutine_60a210_alt1();
      }
      v5 = a1;
      v6 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v3, 16, 0);
      v7 = v6 + v3;
      v8 = v6;
      v9 = 0;
      v10 = (__int64)v1 + v6 - v2 - v3 + 8;
      do {
        v16 = (__int64*)(v10 + v9);
        *(_QWORD*)(v10 + v9 - 8) = game_map_MapChip_vtable;
        v17 = v10 + v9 - 8;
        if ((*(_BYTE*)(v2 + v9 + 8) & 1) != 0) {
          fw_text_String_CopyTerminated(v16, *(_QWORD*)(v2 + v9 + 24),
                                        *(_QWORD*)(v2 + v9 + 16));
        }
        else {
          v18 = *(_QWORD*)(v2 + v9 + 8);
          v19 = *(_QWORD*)(v2 + v9 + 24);
          v16[1] = *(_QWORD*)(v2 + v9 + 16);
          v16[2] = v19;
          *v16 = v18;
        }
        v11 = v2 + v9;
        v9 += 80;
        v12 = *(_DWORD*)(v11 + 32);
        *(_QWORD*)v17 = game_map_UnitChip_vtable;
        *(_DWORD*)(v17 + 32) = v12;
        *(_QWORD*)(v17 + 40) = *(_QWORD*)(v11 + 40);
        v13 = *(_QWORD*)(v11 + 48);
        v14 = *(_QWORD*)(v11 + 56);
        v15 = *(_QWORD*)(v11 + 64);
        *(_DWORD*)(v17 + 72) = *(_DWORD*)(v11 + 72);
        *(_QWORD*)(v17 + 56) = v14;
        *(_QWORD*)(v17 + 64) = v15;
        *(_QWORD*)(v17 + 48) = v13;
      } while ((void (***)(__int64))(v2 + v9) != v1);
      v20 = (void (***)(__int64))v2;
      do {
        v21 = *v20;
        v20 += 10;
        (*v21)(v2);
        v2 = (__int64)v20;
      } while (v20 != v1);
      v2 = *v5;
      a1 = v5;
      v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    }
    *a1 = v8;
    a1[1] = v7;
    a1[2] = v7;
    if (v2 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v22, v2);
    }
  }
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
