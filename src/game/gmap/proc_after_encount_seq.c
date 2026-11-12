#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_ProcAfterEncountSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcAfterEncountSeq_Destructor(__int64 a1);
__int64 ProcAfterEncountSeq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_133de90(_QWORD, _QWORD);
__int64 GameRoutine_14b4cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1521510(__int64, __int64*);
__int64 GameRoutine_1522780(__int64);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_ae0560(_QWORD);
__int64 GameSubquestData_125d1c0(_QWORD, _QWORD, _QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 Impl_1326420(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 game_gmap_TroopMgr_CountTroop_134e600(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern __int64 (*GameData_204c370[])();
extern __int64 (*GameData_204c3f0[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21f1618;
extern __int64 GameData_2241720;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d728[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60f930(void);
void __attribute__((noreturn)) GameRoutine_888610(_QWORD);
__int64 game_gmap_ProcAfterEncountSeq_TryHeroWarpOut(__int64 a1);
_QWORD* game_gmap_ProcAfterEncountSeq_SetReturnToSpot_alt1(
    _QWORD* result) __asm__("game_gmap_ProcAfterEncountSeq_SetReturnToSpot");
__int64 ProcAfterEncountSeq_1550bc0_alt1(__int64 result) __asm__(
    "ProcAfterEncountSeq_1550bc0");
void ProcAfterEncountSeq_1550fa0();
__int64 ProcAfterEncountSeq_1550fc0_alt1(__int64 result) __asm__(
    "ProcAfterEncountSeq_1550fc0");
bool game_gmap_ProcAfterEncountSeq_TryHeroWarpOut_closure_Invoke(__int64 a1,
                                                                 __int64 a2);
__int64
game_gmap_ProcAfterEncountSeq_SetReturnToSpot_closure_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 GameRoutine_14b4cf0_alt1(__int64, int,
                                 __int64) __asm__("GameRoutine_14b4cf0");
__int64 GameRoutine_175b880_alt1(__int64) __asm__("GameRoutine_175b880");
__int64 GameRoutine_ae0560_alt1() __asm__("GameRoutine_ae0560");
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 Impl_1326420_alt1(__int64) __asm__("Impl_1326420");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void GameSubquestData_125d1c0_alt1(__int64, __int64,
                                   _QWORD*) __asm__("GameSubquestData_125d1c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_60f930_alt1() __asm__("GameRoutine_60f930");
void __attribute__((noreturn))
GameRoutine_888610_alt1() __asm__("GameRoutine_888610");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_gmap_ProcAfterEncountSeq_SetReturnToSpot(_QWORD* a1);
void ProcAfterEncountSeq_1550bc0(__int64 a1);
void ProcAfterEncountSeq_1550fc0(_QWORD* a1);

__int64 game_gmap_ProcAfterEncountSeq_TryHeroWarpOut(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (~*(_DWORD*)(game_GameModeData_instance_ + 92) & 6) == 0) {
    v1 = *(_QWORD*)(a1 + 152);
    v5[0] = GameData_204c370;
    v6 = v5;
    v2 = game_gmap_TroopMgr_CountTroop_134e600(v1, v5);
    result = (__int64)v6;
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        goto LABEL_9;
      }
      v4 = 40;
    }
    result = (*(__int64 (**)(void*))(*v6 + v4))(v6);
  LABEL_9:
    if (v2 > 0) {
      return result;
    }
  }
  return GameRoutine_1522780(GameData_21f1618);
}

void game_gmap_ProcAfterEncountSeq_SetReturnToSpot(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  signed __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  struct {
    __int64 v27;
    __int64 v28;
    unsigned __int64 v29;
  } v27_;
  _QWORD* v30;

  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    return;
  }
  v27_.v28 = 0;
  v27_.v29 = 0;
  v27_.v27 = 0;
  v2 = a1[23];
  v1 = a1[24];
  v4 = v1 - v2;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 == v2) {
    v8 = 0;
    v7 = 0;
  }
  else {
    if ((v4 & 0x8000000000000000LL) != 0) {
      goto LABEL_40;
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v1 - v2, 16, 0);
    v7 = v6 + v4;
    v8 = v6;
    v27_.v27 = v6;
    v27_.v29 = v6 + v4;
    memcpy_alt1(v6, v2, v4);
    v27_.v28 = v7;
  }
  v9 = a1[20];
  v10 = a1[21] - v9;
  if (v10 >> 3 < 1) {
    goto LABEL_22;
  }
  v11 = v7 - v8;
  v12 = (v7 - v8) >> 3;
  v13 = v12 + (v10 >> 3);
  if (v13 >> 61 != 0) {
  LABEL_40:
    GameRoutine_888610_alt1();
  }
  if (v11 >> 2 > v13) {
    v13 = v11 >> 2;
  }
  if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
    v14 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v14 = v13;
  }
  if (v14 != 0) {
    if (v14 >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v15 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v14, 16, 0);
  }
  else {
    v15 = 0;
  }
  memcpy_alt1(v15 + v11, v9, v10);
  memcpy_alt1(v15 + v11 - 8 * v12, v8, v11);
  v27_.v27 = v15 + v11 - 8 * v12;
  v27_.v28 = v15 + v11 + v10;
  v27_.v29 = v15 + 8 * v14;
  if (v8 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v16, v8);
  }
LABEL_22:
  GameRoutine_14b4cf0_alt1((__int64)a1, 1, (__int64)&v27_.v27);
  v17 = a1[19];
  v18 = v25_.v25;
  v25_.v25[0] = GameData_204c3f0;
  v25_.v26 = v25_.v25;
  if (v17 == 0) {
  LABEL_32:
    v22 = 32;
    goto LABEL_33;
  }
  v19 = *(_QWORD*)(GameData_21c96e8 + 8);
  v20 = *(_QWORD**)(v19 + 8);
  v21 = *(_QWORD**)(v19 + 16);
  if (v20 == v21) {
    v18 = v25_.v25;
    goto LABEL_32;
  }
  do {
    if (*(_QWORD*)*v20 == v17) {
      v30 = (_QWORD*)*v20;
      if (v25_.v26 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v25_.v26 + 48LL))(v25_.v26, &v30);
    }
    ++v20;
  } while (v20 != v21);
  v18 = v25_.v26;
  if (v25_.v26 == v25_.v25) {
    goto LABEL_32;
  }
  if (v25_.v26 != nullptr) {
    v22 = 40;
  LABEL_33:
    (*(void (**)(_QWORD*))(*v18 + v22))(v18);
  }
  if (v27_.v27 != 0) {
    v23 = *v5;
    v27_.v28 = v27_.v27;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v23 + v24, v27_.v27);
  }
}

void ProcAfterEncountSeq_1550bc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char* v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  int v24;
  __int64** v25;
  __int64** v26;
  __int64* v27;
  __int64* v28;
  unsigned int* v29;
  __int64 v30;
  const char* v31;
  const char* v32;
  __int64 v33;
  int v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  unsigned int* v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  struct {
    char* v44;
    _QWORD* v45;
    unsigned __int64 v46;
  } v44_;

  v1 = *(_QWORD*)(a1 + 208);
  v2 = *(_QWORD*)(a1 + 216);
  v44_.v45 = nullptr;
  v44_.v46 = 0;
  v44_.v44 = nullptr;
  if (v1 == v2) {
    return;
  }
  v3 = nullptr;
  do {
    v4 = *(_QWORD*)(*(_QWORD*)v1 + 88LL);
    if (v4 == 0) {
      goto LABEL_3;
    }
    v5 = *(_BYTE**)(v4 + 48);
    if (v5 == nullptr || *v5 == 0) {
      goto LABEL_3;
    }
    if ((unsigned __int64)v3 >= v44_.v46) {
      v6 = (__int64)v44_.v44;
      v7 = v3 - v44_.v44;
      v8 = (v3 - v44_.v44) >> 3;
      v9 = v8 + 1;
      if ((unsigned __int64)(v8 + 1) >> 61 != 0) {
        GameRoutine_60f930_alt1();
      }
      v10 = v44_.v46 - (_QWORD)v44_.v44;
      if ((__int64)(v44_.v46 - (_QWORD)v44_.v44) >> 2 > v9) {
        v9 = v10 >> 2;
      }
      v11 = (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                          : v9;
      if (v11 != 0) {
        if (v11 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v12 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
      }
      else {
        v12 = 0;
      }
      v13 = v12 + 8 * v11;
      v14 = v12 + v7 - 8 * v8;
      *(_QWORD*)(v12 + v7) = v5;
      v3 = (char*)(v12 + v7 + 8);
      memcpy_alt1(v14, v6, v7);
      v44_.v44 = (char*)v14;
      v44_.v46 = v13;
      if (v6 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v6);
      }
    }
    else {
      *(_QWORD*)v3 = v5;
      v3 += 8;
    }
    v44_.v45 = v3;
    if (game_GameModeData_instance_ == 0 ||
        *(_BYTE*)(game_GameModeData_instance_ + 15) != 1) {
      goto LABEL_3;
    }
    v16 = *(_QWORD*)(GameData_21c96e8 + 8);
    v17 = *(_DWORD*)(v16 + 56);
    v18 = *(__int64**)(v16 + 8);
    v19 = *(__int64**)(v16 + 16);
    if (v17 < 0) {
      while (v18 != v19) {
        v20 = *v18;
        if (*(_QWORD*)(*v18 + 96) == 0 && *(_QWORD*)(v20 + 552) == 0) {
          goto LABEL_34;
        }
        ++v18;
      }
    }
    else if (v18 != v19) {
      while (1) {
        v21 = *v18++;
        v20 = v21;
        if (*(_DWORD*)(v21 + 84) == v17) {
          break;
        }
        if (v18 == v19) {
          goto LABEL_29;
        }
      }
    LABEL_34:
      v22 = *(unsigned int**)v20;
      goto LABEL_35;
    }
  LABEL_29:
    v22 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  LABEL_35:
    if ((unsigned __int8)Impl_13261c0_alt1((__int64)v22) != 4) {
      goto LABEL_3;
    }
    v23 = *(_QWORD*)(GameData_21c96e8 + 8);
    v24 = *(_DWORD*)(v23 + 56);
    v25 = *(__int64***)(v23 + 8);
    v26 = *(__int64***)(v23 + 16);
    if (v24 < 0) {
      while (v25 != v26) {
        v27 = *v25;
        if ((*v25)[12] == 0 && v27[69] == 0) {
          goto LABEL_46;
        }
        ++v25;
      }
    LABEL_40:
      v29 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
      v30 = Impl_1326420_alt1((__int64)v29);
      if (v30 == 0) {
        goto LABEL_3;
      }
    LABEL_47:
      v31 = *(const char**)(v4 + 48);
      v32 = *(const char**)(v30 + 88);
      if (v31 != nullptr && v32 != nullptr) {
        if (strcmp_alt1(v32, v31) != 0) {
          goto LABEL_3;
        }
      }
      else if (((unsigned __int64)v31 | (unsigned __int64)v32) != 0) {
        goto LABEL_3;
      }
      v33 = *(_QWORD*)(GameData_21c96e8 + 8);
      v34 = *(_DWORD*)(v33 + 56);
      v35 = *(__int64**)(v33 + 8);
      v36 = *(__int64**)(v33 + 16);
      if (v34 < 0) {
        while (v35 != v36) {
          v37 = *v35;
          if (*(_QWORD*)(*v35 + 96) == 0 && *(_QWORD*)(v37 + 552) == 0) {
            goto LABEL_61;
          }
          ++v35;
        }
      }
      else if (v35 != v36) {
        while (1) {
          v38 = *v35++;
          v37 = v38;
          if (*(_DWORD*)(v38 + 84) == v34) {
            break;
          }
          if (v35 == v36) {
            goto LABEL_56;
          }
        }
      LABEL_61:
        v39 = *(unsigned int**)v37;
        goto LABEL_62;
      }
    LABEL_56:
      v39 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
    LABEL_62:
      if ((unsigned __int8)Impl_13261c0_alt1((__int64)v39) == 4) {
        *((_BYTE*)v39 + 178) |= 2u;
      }
      goto LABEL_3;
    }
    if (v25 == v26) {
      goto LABEL_40;
    }
    while (1) {
      v28 = *v25++;
      v27 = v28;
      if (*((_DWORD*)v28 + 21) == v24) {
        break;
      }
      if (v25 == v26) {
        goto LABEL_40;
      }
    }
  LABEL_46:
    v30 = Impl_1326420_alt1(*v27);
    if (v30 != 0) {
      goto LABEL_47;
    }
  LABEL_3:
    v1 += 8;
  } while (v1 != v2);
  v40 = (__int64)v44_.v44;
  if (v3 != v44_.v44) {
    GameSubquestData_125d1c0_alt1(*(_QWORD*)GameData_212c7b0[0], a1, &v44_.v44);
    v41 = GameData_212d728[0];
    GameRoutine_175b880_alt1(*(_QWORD*)(*GameData_212d728[0] + 8) + 5800LL);
    v40 = (__int64)v44_.v44;
    *(_BYTE*)(*(_QWORD*)(*v41 + 8) + 5835LL) = 1;
  }
  if (v40 != 0) {
    v44_.v45 = (_QWORD*)v40;
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v40);
  }
}

void ProcAfterEncountSeq_1550fa0()
{
  if (GameData_2241720 != 0) {
    *(_BYTE*)(GameData_2241720 + 1688) = 1;
  }
}

void ProcAfterEncountSeq_1550fc0(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    __int64 v37;
    __int64 v38;
    unsigned __int64 v39;
  } v37_;

  if (game_GameModeData_instance_ != 0) {
    v1 = *(_DWORD*)(game_GameModeData_instance_ + 92);
    if ((v1 & 2) != 0 &&
        ((v1 & 8) != 0 ||
         (v3 = *(_QWORD*)(a1[19] + 120LL)) == GameRoutine_ae0560_alt1() &&
             game_GameModeData_instance_ != 0 &&
             (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) != 0)) {
      v4 = *(_QWORD*)(a1[19] + 120LL);
      if (v4 == GameRoutine_ae0560_alt1()) {
        v37_.v38 = 0;
        v37_.v39 = 0;
        v37_.v37 = 0;
        v5 = (__int64*)a1[20];
        v6 = (__int64*)a1[21];
        v7 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v5 == v6) {
          v8 = nullptr;
        }
        else {
          v8 = nullptr;
          do {
            v9 = *v5;
            v10 = *(_QWORD*)(*v5 + 96);
            if (v10 != 0 && *(_BYTE*)(v10 + 32) == 1) {
              if ((unsigned __int64)v8 < v37_.v39) {
                *v8++ = v9;
              }
              else {
                v11 = v37_.v37;
                v12 = (unsigned __int64)v8 - v37_.v37;
                v13 = ((__int64)v8 - v37_.v37) >> 3;
                v14 = v13 + 1;
                if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
                LABEL_58:
                  GameRoutine_888610_alt1();
                }
                v15 = v37_.v39 - v37_.v37;
                if ((__int64)(v37_.v39 - v37_.v37) >> 2 > v14) {
                  v14 = v15 >> 2;
                }
                if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v16 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v16 = v14;
                }
                if (v16 != 0) {
                  if (v16 >> 61 != 0) {
                  LABEL_59:
                    GameRoutine_60a210_alt1();
                  }
                  v17 =
                      fw_memory_HeapManager_Allocate_alt1(*v7, 8 * v16, 16, 0);
                }
                else {
                  v17 = 0;
                }
                v18 = v17 + 8 * v16;
                v19 = v17 + v12 - 8 * v13;
                *(_QWORD*)(v17 + v12) = v9;
                v8 = (_QWORD*)(v17 + v12 + 8);
                memcpy_alt1(v19, v11, v12);
                v37_.v37 = v19;
                v37_.v39 = v18;
                if (v11 != 0) {
                  v20 = 128;
                  if (*(_QWORD*)(*v7 + 200) == 0) {
                    v20 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v7 + v20, v11);
                }
              }
              v37_.v38 = (__int64)v8;
            }
            ++v5;
          } while (v5 != v6);
        }
        v21 = (__int64*)a1[23];
        v22 = (__int64*)a1[24];
        while (v21 != v22) {
          v23 = *v21;
          v24 = *(_QWORD*)(*v21 + 96);
          if (v24 != 0 && *(_BYTE*)(v24 + 32) == 1) {
            if ((unsigned __int64)v8 < v37_.v39) {
              *v8++ = v23;
            }
            else {
              v25 = v37_.v37;
              v26 = (unsigned __int64)v8 - v37_.v37;
              v27 = ((__int64)v8 - v37_.v37) >> 3;
              v28 = v27 + 1;
              if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
                goto LABEL_58;
              }
              v29 = v37_.v39 - v37_.v37;
              if ((__int64)(v37_.v39 - v37_.v37) >> 2 > v28) {
                v28 = v29 >> 2;
              }
              if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
                v30 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v30 = v28;
              }
              if (v30 != 0) {
                if (v30 >> 61 != 0) {
                  goto LABEL_59;
                }
                v31 = fw_memory_HeapManager_Allocate_alt1(*v7, 8 * v30, 16, 0);
              }
              else {
                v31 = 0;
              }
              v32 = v31 + 8 * v30;
              v33 = v31 + v26 - 8 * v27;
              *(_QWORD*)(v31 + v26) = v23;
              v8 = (_QWORD*)(v31 + v26 + 8);
              memcpy_alt1(v33, v25, v26);
              v37_.v37 = v33;
              v37_.v39 = v32;
              if (v25 != 0) {
                v34 = 128;
                if (*(_QWORD*)(*v7 + 200) == 0) {
                  v34 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v7 + v34, v25);
              }
            }
            v37_.v38 = (__int64)v8;
          }
          ++v21;
        }
        GameRoutine_1521510((__int64)a1, &v37_.v37);
        if (v37_.v37 != 0) {
          v35 = *v7;
          v37_.v38 = v37_.v37;
          v36 = 128;
          if (*(_QWORD*)(v35 + 200) == 0) {
            v36 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v35 + v36, v37_.v37);
        }
      }
    }
  }
}

bool game_gmap_ProcAfterEncountSeq_TryHeroWarpOut_closure_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  return v2 != 0 && *(_BYTE*)(v2 + 32) == 1 &&
         (*(_BYTE*)(*(_QWORD*)a2 + 546LL) & 8) == 0;
}

__int64

game_gmap_ProcAfterEncountSeq_SetReturnToSpot_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 result;
  __int64 v3;
  bool v4;

  result = *a2;
  if (*(_QWORD*)(*a2 + 96) == 0) {
    v3 = *(_QWORD*)(result + 552);
    v4 = v3 != 0 && *(_QWORD*)(result + 104) == 0;
    if (v4 &&
        *(__int16*)(result + 642) * *(__int16*)(result + 640) *
                *(__int16*)(result + 644) ==
            0 &&
        *(_QWORD*)(v3 + 352) != 0) {
      return GameRoutine_133de90(result, 4);
    }
  }
  return result;
}

__int64 ProcAfterEncountSeq_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)a1 = game_gmap_ProcAfterEncountSeq_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 216) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 184);
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 192) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0) {
    v10 = *v3;
    *(_QWORD*)(a1 + 168) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcAfterEncountSeq_DeletingDestructor(__int64 a1)
{
  __int64 v1;
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

  v1 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)a1 = game_gmap_ProcAfterEncountSeq_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 216) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 184);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 192) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 168) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, a1);
}

#pragma GCC visibility pop
