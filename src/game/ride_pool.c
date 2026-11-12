#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_60eb40(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e36c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_876a40(_QWORD*, _QWORD*);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9331a0(__int64, __int64);
__int64 GameRoutine_93ce60(_QWORD, _QWORD);
__int64 GameRoutine_93ce60_alt1(__int64*, __int64,
                                unsigned int) __asm__("GameRoutine_93ce60");
__int64 GameRoutine_93e020(_QWORD, _QWORD, _QWORD);
__int64 LegionPool_93a920(_QWORD*, unsigned __int8*);
__int64 List_93b820(__int64 result);
__int64 RidePool_93c2e0_alt1(_QWORD, _QWORD) __asm__("RidePool_93c2e0");
__int64 RidePool_93d1e0_alt1(_QWORD, _QWORD) __asm__("RidePool_93d1e0");
__int64 RidePool_93d9e0_alt1(_QWORD) __asm__("RidePool_93d9e0");
__int64 RidePool_93e230_alt1(_QWORD, _QWORD, _QWORD) __asm__("RidePool_93e230");
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 UnitHeroes_6d2b90(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___next_prime(_QWORD);
extern _DWORD* game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_21f42c8;
extern __int64 (*GameData_1faeef0[])();
extern __int64 (*game_GameSaveConst_GlobalSerializer_vtable)();
extern __int64 (*game_RidePool_Impl_vtable[])();
extern __int64 (*game_RidePool_List_vtable[])();
extern __int64 GameData_21c99a8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea50;
extern __int64 GameData_21f42d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_history_g_ride_pool;
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212d6d0;
extern char GameData_21f42c0;
extern int GameData_21f42c4;
struct PseudoSret GameRoutine_93c6a0(_QWORD, _QWORD, _QWORD, _QWORD);
unsigned __int8* GameRoutine_932ec0(unsigned __int8* result, __int64);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 RidePool_93bb80_alt1(__int64 a1) __asm__("RidePool_93bb80");
__int64 RidePool_93bf20_alt1(__int64* a1) __asm__("RidePool_93bf20");
__int64 RidePool_93c2e0(__int64 result, __int64 a2);
__int64 RidePool_93c4f0(__int64 result, unsigned int a2, unsigned __int8* a3);
bool RidePool_93cc20(_QWORD* a1, __int64 a2);
__int64 RidePool_93cd60(_QWORD* a1, __int64 a2);
__int64 RidePool_93d1e0(__int64 a1, __int64 a2);
__int64 RidePool_93d360(__int64 a1, __int64 a2);
__int64 RidePool_93d4a0(__int64* a1, __int64 a2);
__int64 RidePool_93d5c0();
__int64 RidePool_93d820(__int64 result);
__int64 RidePool_93d8e0(__int64 a1);
unsigned __int64 RidePool_93d9e0(unsigned __int64 result);
__int64 RidePool_93e230(__int64 a1, __int64 a2, unsigned int a3);
unsigned __int64 RidePool_93e320(__int64* a1, __int64 a2, __int64 a3,
                                 unsigned int a4, _DWORD* a5);
__int64 game_RidePool_List_Impl_EachData_closure_Invoke(__int64 a1, int* a2);
__int64 RidePool_93e660(_QWORD* a1, _BYTE* a2);
__int64 RidePool_Impl_Destructor(_QWORD* a1);
__int64 RidePool_Impl_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "RidePool_Impl_DeletingDestructor");
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* GameRoutine_6e36c0_alt1(_QWORD* result, _QWORD*,
                                _QWORD*) __asm__("GameRoutine_6e36c0");
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64 result, unsigned __int8*, __int64, char);
__int64**
GameRoutine_93e020_alt1(__int64, unsigned __int64,
                        unsigned __int8*) __asm__("GameRoutine_93e020");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 UnitHeroes_6d2b90_alt1(__int64,
                               unsigned __int8*) __asm__("UnitHeroes_6d2b90");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern char GameData_1b5724d;
extern char GameData_1b57250;
__attribute__((swiftcall)) void RidePool_93cb20(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2, unsigned int a3);
__int64 RidePool_93ce60(__int64* a1, __int64 a2, unsigned int a3);
__attribute__((swiftcall)) void RidePool_93e420(PSEUDO_X8 x8_,
                                                unsigned __int64 result,
                                                unsigned int a2, __int64 a3);
__int64* GameRoutine_68cdc0(__int64* result, unsigned __int64);
__int64** RidePool_93e020(__int64 a1, unsigned __int64 a2, unsigned __int8* a3);
__int64 GameHr_876a40(_QWORD*, _QWORD*);
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void List_93b820_alt1(__int64*) __asm__("List_93b820");
void RidePool_93d9e0_alt2(__int64) __asm__("RidePool_93d9e0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RidePool_93bb80(__int64 a1);
void RidePool_93bf20(__int64 a1);
void RidePool_Impl_DeletingDestructor(_QWORD* a1);

void RidePool_93bb80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _BYTE** v6;
  char v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;

  v1 = 200;
  v2 = 56;
  do {
    v5 = *(_QWORD*)(a1 + 120);
    v6 = (_BYTE**)(v5 + v2);
    v7 = *(_BYTE*)(v5 + v2 - 16);
    *((_DWORD*)v6 - 12) = 0;
    *(v6 - 7) = nullptr;
    if ((v7 & 1) != 0) {
      **v6 = 0;
      *(v6 - 1) = nullptr;
    }
    else {
      *((_WORD*)v6 - 8) = 0;
    }
    v4 = v5 + v2 - 32;
    GameRoutine_6e3b50_alt1(v5 + v2 - 40, *(_QWORD**)v4);
    --v1;
    v2 += 64;
    *(_QWORD*)v4 = 0;
    *(_QWORD*)(v4 + 8) = 0;
    *(_QWORD*)(v4 - 8) = v4;
  } while (v1 != 0);
  if (*(_QWORD*)(a1 + 24) != 0) {
    v8 = *(_QWORD**)(a1 + 16);
    if (v8 != nullptr) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v10 = (_QWORD*)*v8;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v11, (__int64)v8);
        v8 = v10;
      } while (v10 != nullptr);
    }
    v12 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 16) = 0;
    if (v12 != 0) {
      v13 = v12 & 7;
      if (v12 >= 8) {
        v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v14) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v14 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v14 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v14 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v14 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v14 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v14 + 48) = 0;
          v16 = *(_QWORD*)a1 + 8 * v14;
          v14 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v14);
      }
      else {
        v14 = 0;
      }
      if (v13 != 0) {
        v17 = 8 * v14;
        do {
          --v13;
          *(_QWORD*)(*(_QWORD*)a1 + v17) = 0;
          v17 += 8;
        } while (v13 != 0);
      }
    }
    *(_QWORD*)(a1 + 24) = 0;
  }
  if (*(_QWORD*)(a1 + 64) != 0) {
    v18 = *(_QWORD**)(a1 + 56);
    if (v18 != nullptr) {
      v19 = fw_memory_g_heap_manager_ptr;
      do {
        v20 = (_QWORD*)*v18;
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v19 + v21, (__int64)v18);
        v18 = v20;
      } while (v20 != nullptr);
    }
    v22 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 56) = 0;
    if (v22 != 0) {
      v23 = v22 & 7;
      if (v22 >= 8) {
        v25 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v24 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v24 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v24 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v24 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v24 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v24 + 48) = 0;
          v26 = *(_QWORD*)(a1 + 40) + 8 * v24;
          v24 += 8;
          *(_QWORD*)(v26 + 56) = 0;
        } while (v25 != v24);
      }
      else {
        v24 = 0;
      }
      if (v23 != 0) {
        v27 = 8 * v24;
        do {
          --v23;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + v27) = 0;
          v27 += 8;
        } while (v23 != 0);
      }
    }
    *(_QWORD*)(a1 + 64) = 0;
  }
  if (*(_QWORD*)(a1 + 104) != 0) {
    v28 = *(_QWORD**)(a1 + 96);
    if (v28 != nullptr) {
      v29 = fw_memory_g_heap_manager_ptr;
      do {
        v30 = (_QWORD*)*v28;
        if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v29 + v31, (__int64)v28);
        v28 = v30;
      } while (v30 != nullptr);
    }
    v32 = *(_QWORD*)(a1 + 88);
    *(_QWORD*)(a1 + 96) = 0;
    if (v32 != 0) {
      v33 = v32 & 7;
      if (v32 >= 8) {
        v35 = v32 & 0xFFFFFFFFFFFFFFF8LL;
        v34 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8 * v34) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8 * v34 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8 * v34 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8 * v34 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8 * v34 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8 * v34 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8 * v34 + 48) = 0;
          v36 = *(_QWORD*)(a1 + 80) + 8 * v34;
          v34 += 8;
          *(_QWORD*)(v36 + 56) = 0;
        } while (v35 != v34);
      }
      else {
        v34 = 0;
      }
      if (v33 != 0) {
        v37 = 8 * v34;
        do {
          --v33;
          *(_QWORD*)(*(_QWORD*)(a1 + 80) + v37) = 0;
          v37 += 8;
        } while (v33 != 0);
      }
    }
    *(_QWORD*)(a1 + 104) = 0;
  }
  *(_DWORD*)(a1 + 144) = 0;
}

void RidePool_93bf20(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  char v36[4];

  if (*(_BYTE*)(a1 + 148) == 1) {
    v2 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (*(_QWORD*)(a1 + 24) != 0) {
      v3 = *(_QWORD**)(a1 + 16);
      if (v3 != nullptr) {
        do {
          v4 = (_QWORD*)*v3;
          if (*(_QWORD*)(*v2 + 200) != 0) {
            v5 = 128;
          }
          else {
            v5 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v2 + v5, (__int64)v3);
          v3 = v4;
        } while (v4 != nullptr);
      }
      v6 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 16) = 0;
      if (v6 != 0) {
        v7 = v6 & 7;
        if (v6 >= 8) {
          v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
          v8 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)a1 + 8 * v8) = 0;
            *(_QWORD*)(*(_QWORD*)a1 + 8 * v8 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)a1 + 8 * v8 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)a1 + 8 * v8 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)a1 + 8 * v8 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)a1 + 8 * v8 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)a1 + 8 * v8 + 48) = 0;
            v10 = *(_QWORD*)a1 + 8 * v8;
            v8 += 8;
            *(_QWORD*)(v10 + 56) = 0;
          } while (v9 != v8);
        }
        else {
          v8 = 0;
        }
        if (v7 != 0) {
          v11 = 8 * v8;
          do {
            --v7;
            *(_QWORD*)(*(_QWORD*)a1 + v11) = 0;
            v11 += 8;
          } while (v7 != 0);
        }
      }
      *(_QWORD*)(a1 + 24) = 0;
    }
    v12 = (__int64*)(a1 + 16);
    v13 = 3;
    for (i = 0; i != 200; ++i) {
      v36[0] = *(_BYTE*)(*(_QWORD*)(a1 + 120) + v13);
      if (v36[0] != 0) {
        if (game_UnitPool_Get_alt1(v36) != nullptr) {
          v15 = fw_memory_HeapManager_Allocate_alt1(*v2, 24, 16, 0);
          v16 = (unsigned __int8)v36[0];
          v17 = v15;
          *(_DWORD*)(v15 + 20) = i;
          *(_BYTE*)(v15 + 16) = v16;
          *(_QWORD*)v15 = 0;
          *(_QWORD*)(v15 + 8) = v16;
          if (RidePool_93e020(a1, v16, (unsigned __int8*)(v15 + 16)) !=
              nullptr) {
            if (*(_QWORD*)(*v2 + 200) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v2 + v18, v17);
          }
          else {
            v19 = *(_QWORD*)(a1 + 8);
            v20 = v19 - 1;
            if ((v19 & (v19 - 1)) != 0) {
              if (v19 <= v16) {
                v16 = (unsigned int)v16 % (unsigned __int8)*(_QWORD*)(a1 + 8);
              }
            }
            else {
              v16 = ((_DWORD)v19 - 1) & (unsigned int)v16;
            }
            v21 = *(_QWORD*)a1;
            v22 = *(__int64**)(*(_QWORD*)a1 + 8 * v16);
            if (v22 != nullptr) {
              *(_QWORD*)v17 = *v22;
              *v22 = v17;
            }
            else {
              v23 = *v12;
              *v12 = v17;
              *(_QWORD*)v17 = v23;
              *(_QWORD*)(v21 + 8 * v16) = v12;
              if (*(_QWORD*)v17 != 0) {
                v24 = *(_QWORD*)(*(_QWORD*)v17 + 8LL);
                if ((v19 & v20) != 0) {
                  if (v24 >= v19) {
                    v24 %= v19;
                  }
                }
                else {
                  v24 &= v20;
                }
                *(_QWORD*)(*(_QWORD*)a1 + 8 * v24) = v17;
              }
            }
            ++*(_QWORD*)(a1 + 24);
          }
        }
        else {
          *(_BYTE*)(*(_QWORD*)(a1 + 120) + v13) = 0;
        }
      }
      v13 += 64;
    }
    v35 = 511;
    v25 = game_UnitPool_GetFirst_alt1(&v35);
    if (v25 != 0) {
      v26 = *(_QWORD*)(v25 + 432);
      v27 = v25;
      if (v26 == 0) {
        v32 = *(_QWORD*)(v25 + 440);
        if (v32 == 0 || (v33 = *(unsigned __int8*)(v32 + 16)) > 8) {
        LABEL_51:
          RidePool_93c2e0(a1, v27);
          goto LABEL_52;
        }
        v34 = 24LL * (unsigned int)v33 + 556024;
        while (1) {
          if (v33 <= 7) {
            v26 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v34);
            if (v26 != 0) {
              break;
            }
          }
          ++v33;
          v34 += 24;
          if (v33 == 9) {
            goto LABEL_51;
          }
        }
      }
      while (1) {
        do {
          v28 = v26;
          RidePool_93c2e0(a1, v27);
          v26 = *(_QWORD*)(v28 + 432);
          v27 = v28;
        } while (v26 != 0);
        v29 = *(_QWORD*)(v28 + 440);
        if (v29 == 0) {
          break;
        }
        v30 = *(unsigned __int8*)(v29 + 16);
        if (v30 > 8) {
          break;
        }
        v31 = 24LL * (unsigned int)v30 + 556024;
        while (1) {
          if (v30 <= 7) {
            v26 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v31);
            if (v26 != 0) {
              break;
            }
          }
          ++v30;
          v31 += 24;
          if (v30 == 9) {
            goto LABEL_50;
          }
        }
        v27 = v28;
      }
    LABEL_50:
      v27 = v28;
      goto LABEL_51;
    }
  }
LABEL_52:
  RidePool_93d9e0_alt2(a1);
}

__int64 RidePool_93c2e0(__int64 result, __int64 a2)
{
  __int64 v3;
  char v4;
  __int64 v5;
  unsigned int v6;
  bool v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64*** v14;
  __int64** v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;

  if (*(_BYTE*)(result + 148) != 1) {
    return result;
  }
  v3 = result;
  v20 = *game_g_shared_system_skills_ptr & 0xFFF;
  v4 = game_HasSkill(a2 + 1744, &v20);
  v5 = *(_QWORD*)(a2 + 440);
  if ((v4 & 1) != 0) {
    if (v5 != 0 && ((1 << *(_BYTE*)(v5 + 16)) & 0xF1) == 0) {
      goto LABEL_7;
    }
    return RidePool_93d1e0_alt1(v3, a2);
  }
  if (v5 == 0) {
    return RidePool_93d1e0_alt1(v3, a2);
  }
LABEL_7:
  v6 = *(unsigned __int8*)(v5 + 16);
  v7 = v6 > 7;
  v8 = (1 << v6) & 0x91;
  v9 = v7 || v8 == 0;
  if (v9 || *(_BYTE*)(a2 + 1880) == 0) {
    return RidePool_93d1e0_alt1(v3, a2);
  }
  if (*(_BYTE*)(v3 + 148) != 1) {
    goto LABEL_38;
  }
  v10 = *(_QWORD*)(v3 + 8);
  if (v10 == 0 || *(_QWORD*)(v3 + 24) == 0) {
    goto LABEL_38;
  }
  v11 = *(unsigned __int8*)(a2 + 2088);
  v12 = v10 - 1;
  if ((v10 & (v10 - 1)) != 0) {
    v13 = *(unsigned __int8*)(a2 + 2088);
    if (v10 <= v11) {
      v13 = (unsigned int)v11 % (unsigned int)v10;
    }
  }
  else {
    v13 = ((_DWORD)v10 - 1) & (unsigned int)v11;
  }
  v14 = *(__int64****)(*(_QWORD*)v3 + 8 * v13);
  if (v14 == nullptr) {
    goto LABEL_38;
  }
  v15 = *v14;
  if (v15 == nullptr) {
    goto LABEL_38;
  }
  if ((v10 & v12) == 0) {
    while (1) {
      v17 = v15[1];
      if (v17 == (__int64*)v11) {
        if (*((unsigned __int8*)v15 + 16) == (_DWORD)v11) {
          goto LABEL_36;
        }
      }
      else if (((unsigned __int64)v17 & v12) != v13) {
        goto LABEL_38;
      }
      v15 = (__int64**)*v15;
      if (v15 == nullptr) {
        goto LABEL_38;
      }
    }
  }
  while (1) {
    v16 = (unsigned __int64)v15[1];
    if (v16 == v11) {
      break;
    }
    if (v16 >= v10) {
      v16 %= v10;
    }
    if (v16 != v13) {
      goto LABEL_38;
    }
  LABEL_25:
    v15 = (__int64**)*v15;
    if (v15 == nullptr) {
      goto LABEL_38;
    }
  }
  if (*((unsigned __int8*)v15 + 16) != (_DWORD)v11) {
    goto LABEL_25;
  }
LABEL_36:
  v18 = *((unsigned int*)v15 + 5);
  if ((v18 & 0x80000000) == 0) {
    return UnitHeroes_6d2b90(a2, *(_QWORD*)(v3 + 120) + (v18 << 6));
  }
LABEL_38:
  *(struct PseudoSret*)(&v19) = GameRoutine_93c6a0(v3, a2 + 1880, 0, 1);
  if (v19 < 0) {
    return UnitHeroes_6d2b90(a2, GameData_212c8b0[0]);
  }
  else {
    return GameRoutine_93ce60(v3, a2);
  }
}

__int64 RidePool_93c4f0(__int64 result, unsigned int a2, unsigned __int8* a3)
{
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;

  if ((a2 & 0x80000000) != 0) {
    return result;
  }
  v5 = result;
  v6 = *(_QWORD*)(result + 120) + ((unsigned __int64)a2 << 6);
  v7 = (_QWORD*)(v6 + 3);
  if (*(_BYTE*)(v6 + 3) != 0) {
    v8 = game_UnitPool_Get(v7);
  }
  else {
    v8 = 0;
  }
  *(_WORD*)v6 = *(_WORD*)a3;
  *(_BYTE*)(v6 + 2) = a3[2];
  v9 = *(_QWORD*)(a3 + 3);
  *(_BYTE*)(v6 + 11) = a3[11];
  *v7 = v9;
  if ((unsigned __int8*)v6 == a3) {
  LABEL_18:
    if (v8 != 0) {
      goto LABEL_19;
    }
    goto LABEL_21;
  }
  GameRoutine_6e36c0(v6 + 16, *((_QWORD*)a3 + 2), a3 + 24);
  v10 = (_QWORD*)(v6 + 40);
  v11 = a3[40];
  if ((*(_BYTE*)(v6 + 40) & 1) != 0) {
    v14 = (v11 & 1) == 0;
    v15 = v11 >> 1;
    if (v14) {
      v16 = a3 + 41;
    }
    else {
      v16 = *((unsigned __int8**)a3 + 7);
    }
    if (v14) {
      v17 = v15;
    }
    else {
      v17 = *((_QWORD*)a3 + 6);
    }
    SpineModel_64dde0(v10, v16, v17);
    goto LABEL_18;
  }
  if ((v11 & 1) == 0) {
    v12 = *((_QWORD*)a3 + 5);
    v13 = *((_QWORD*)a3 + 7);
    *(_QWORD*)(v6 + 48) = *((_QWORD*)a3 + 6);
    *(_QWORD*)(v6 + 56) = v13;
    *v10 = v12;
    if (v8 == 0) {
      goto LABEL_21;
    }
  LABEL_19:
    v18 = *(_BYTE*)(v8 + 2088);
    goto LABEL_22;
  }
  GameRoutine_64df20(v10, *((_QWORD*)a3 + 7), *((_QWORD*)a3 + 6));
  if (v8 != 0) {
    goto LABEL_19;
  }
LABEL_21:
  v18 = 0;
LABEL_22:
  *(_BYTE*)v7 = v18;
  v19 = *((_DWORD*)a3 + 1);
  if (((*(_BYTE*)(v5 + 148) | (unsigned __int8)GameData_21f42c0) & 1) != 0 &&
      v19 == 0) {
    if (game_GameModeData_instance_ != 0) {
      v20 = (*(_BYTE*)(game_GameModeData_instance_ + 15) & 0xF) << 24;
      v21 = (*(_DWORD*)(game_GameModeData_instance_ + 2712) + 1) & 0xFFFFFF;
    }
    else {
      v20 = 0;
      v21 = 1;
    }
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a3) +
                  108LL) != 0) {
      v22 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                           8LL * *a3) +
                                108LL)
            << 28;
    }
    else {
      v22 = v21;
    }
    v19 = v22 | v20;
    if (game_GameModeData_instance_ != 0) {
      *(_DWORD*)(game_GameModeData_instance_ + 2712) = v21;
    }
  }
  *(_DWORD*)(v6 + 4) = v19;
  RidePool_93e230_alt1(v5, v8, a2);
  return RidePool_93d9e0_alt1(v5);
}

__attribute__((swiftcall)) void RidePool_93cb20(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  _QWORD* v12;
  __int64 v13;

  if ((a3 & 0x80000000) != 0 ||
      (v6 = a3,
       *(v7 = (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 120LL) +
                                 ((unsigned __int64)a3 << 6))) == 0) ||
      (result = X8CALL_X0(
           __int64,
           RidePool_93c6a0((void*)(a4), *(_QWORD*)(result + 8), v7, 0, 1)),
       (*(_DWORD*)(a4 + 4) & 0x80000000) != 0)) {
    *(_BYTE*)a4 = 1;
    *(_DWORD*)(a4 + 4) = -1;
  }
  else {
    v8 = *(_QWORD*)(a2 + 8);
    v9 = *(_QWORD*)(v8 + 120) + (v6 << 6);
    if (*(_BYTE*)v9 != 0) {
      if (*(_BYTE*)(v9 + 3) != 0) {
        v10 = game_UnitPool_Get(v9 + 3);
      }
      else {
        v10 = 0;
      }
      RidePool_93d1e0_alt1(v8, v10);
      v11 = *(_BYTE*)(v9 + 40);
      *(_QWORD*)v9 = 0;
      *(_DWORD*)(v9 + 8) = 0;
      if ((v11 & 1) != 0) {
        **(_BYTE**)(v9 + 56) = 0;
        *(_QWORD*)(v9 + 48) = 0;
      }
      else {
        *(_WORD*)(v9 + 40) = 0;
      }
      v13 = *(_QWORD*)(v9 + 24);
      v12 = (_QWORD*)(v9 + 24);
      GameRoutine_6e3b50(v12 - 1, v13);
      *v12 = 0;
      v12[1] = 0;
      *(v12 - 1) = v12;
      {
        RidePool_93d9e0_alt1(v8);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

bool RidePool_93cc20(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  int v6;
  _QWORD* v7;
  bool v8;
  _BYTE* v9;
  _BYTE* v10;
  int v11;
  _QWORD* v12;
  int* v13;
  int* v14;
  int v15;
  __int64 v16;
  int* v17;
  int* v18;
  int v19;
  int v21;
  int v22;
  int v23;

  v3 = a1 + 19;
  v2 = a1[19];
  v6 = 0;
  v21 = 0;
  a1[20] = v2;
  v7 = a1 + 22;
  a1[23] = a1[22];
  do {
    v9 = (_BYTE*)(a1[15] + ((__int64)v6 << 6));
    if (*v9 != 0) {
      v11 = (unsigned __int8)v9[3];
      v10 = v9 + 3;
      v12 = v7;
      if (v11 != 0) {
        if (game_UnitPool_Get(v10) != 0) {
          v12 = v3;
        }
        else {
          v12 = v7;
        }
      }
      GameRoutine_7d6200(v12, &v21);
      v6 = v21;
    }
    v8 = v6++ < 199;
    v21 = v6;
  } while (v8);
  if (*(_QWORD*)(a2 + 32) != 0) {
    v13 = (int*)a1[19];
    v14 = (int*)a1[20];
    if (v13 != v14) {
      while (1) {
        v15 = *v13++;
        v16 = *(_QWORD*)(a2 + 32);
        v22 = v15;
        if (v16 == 0) {
          break;
        }
        (*(void (**)(__int64, int*))(*(_QWORD*)v16 + 48LL))(v16, &v22);
        if (v13 == v14) {
          goto LABEL_14;
        }
      }
    LABEL_18:
      GameRoutine_60a310(v16, a2);
    }
  LABEL_14:
    v17 = (int*)a1[22];
    v18 = (int*)a1[23];
    if (v17 != v18) {
      while (1) {
        v19 = *v17++;
        v16 = *(_QWORD*)(a2 + 32);
        v23 = v19;
        if (v16 == 0) {
          break;
        }
        (*(void (**)(__int64, int*))(*(_QWORD*)v16 + 48LL))(v16, &v23);
        if (v17 == v18) {
          return ((__int64)(a1[20] - a1[19]) >> 2) +
                     ((__int64)(a1[23] - a1[22]) >> 2) !=
                 0;
        }
      }
      goto LABEL_18;
    }
  }
  return ((__int64)(a1[20] - a1[19]) >> 2) +
             ((__int64)(a1[23] - a1[22]) >> 2) !=
         0;
}

__int64 RidePool_93cd60(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  __int64 result;
  unsigned __int64 v10;
  __int64 v11;

  if (*(_BYTE*)a2 != 0) {
    v2 = *(unsigned int*)(a2 + 4);
    if ((_DWORD)v2 != 0) {
      v3 = a1[6];
      if (v3 != 0 && a1[8] != 0) {
        v5 = v3 - 1;
        if ((v3 & (v3 - 1)) != 0) {
          v6 = *(unsigned int*)(a2 + 4);
          if (v3 <= v2) {
            v6 = (unsigned int)v2 % (unsigned int)v3;
          }
        }
        else {
          v6 = ((_DWORD)v3 - 1) & (unsigned int)v2;
        }
        v7 = *(__int64***)(a1[5] + 8 * v6);
        if (v7 != nullptr) {
          v8 = *v7;
          if (v8 != nullptr) {
            result = 0xFFFFFFFFLL;
            if ((v3 & v5) == 0) {
              while (1) {
                v11 = v8[1];
                if (v11 == v2) {
                  if (*((_DWORD*)v8 + 4) == (_DWORD)v2) {
                    return *((unsigned int*)v8 + 5);
                  }
                }
                else if ((v11 & v5) != v6) {
                  return 0xFFFFFFFFLL;
                }
                v8 = (__int64*)*v8;
                if (v8 == nullptr) {
                  return result;
                }
              }
            }
            while (1) {
              v10 = v8[1];
              if (v10 == v2) {
                if (*((_DWORD*)v8 + 4) == (_DWORD)v2) {
                  return *((unsigned int*)v8 + 5);
                }
              }
              else {
                if (v10 >= v3) {
                  v10 %= v3;
                }
                if (v10 != v6) {
                  return 0xFFFFFFFFLL;
                }
              }
              v8 = (__int64*)*v8;
              if (v8 == nullptr) {
                return result;
              }
            }
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}

__int64 RidePool_93ce60(__int64* a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  __int64 v5;
  unsigned __int8* v6;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64** v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  _BYTE* v32;
  int v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  _BYTE* v38;
  int v39;
  __int64* v40;
  __int64* v41;
  unsigned __int8 v42[4];
  unsigned __int8 v43[4];

  if (*((_BYTE*)a1 + 148) != 1) {
    return 0;
  }
  result = 0;
  if (a2 != 0 && (a3 & 0x80000000) == 0) {
    v5 = a3;
    v6 = (unsigned __int8*)(a1[15] + ((unsigned __int64)a3 << 6));
    if (*v6 != 0) {
      v8 = a2;
      if (v6[3] != 0 &&
          (v9 = game_UnitPool_Get_alt1(v6 + 3), a2 = v8, v9 != nullptr)) {
        v10 = (__int64)v9;
        if (*((_BYTE*)a1 + 148) == 1) {
          v11 = a1[1];
          v12 = -1;
          if (v11 != 0 && a1[3] != 0) {
            v13 = *(unsigned __int8*)(v8 + 2088);
            v14 = v11 - 1;
            if ((v11 & (v11 - 1)) != 0) {
              v15 = *(unsigned __int8*)(v8 + 2088);
              if (v11 <= v13) {
                v15 = (unsigned int)v13 % (unsigned int)v11;
              }
            }
            else {
              v15 = ((_DWORD)v11 - 1) & (unsigned int)v13;
            }
            v27 = *(__int64***)(*a1 + 8 * v15);
            if (v27 != nullptr) {
              v28 = *v27;
              if (v28 != nullptr) {
                if ((v11 & v14) == 0) {
                  while (1) {
                    v30 = v28[1];
                    if (v30 == v13) {
                      if (*((unsigned __int8*)v28 + 16) == (_DWORD)v13) {
                        goto LABEL_54;
                      }
                    }
                    else if ((v30 & v14) != v15) {
                      goto LABEL_48;
                    }
                    v28 = (__int64*)*v28;
                    if (v28 == nullptr) {
                      goto LABEL_48;
                    }
                  }
                }
                while (1) {
                  v29 = v28[1];
                  if (v29 == v13) {
                    if (*((unsigned __int8*)v28 + 16) == (_DWORD)v13) {
                    LABEL_54:
                      v12 = *((_DWORD*)v28 + 5);
                      break;
                    }
                  }
                  else {
                    if (v29 >= v11) {
                      v29 %= v11;
                    }
                    if (v29 != v15) {
                    LABEL_48:
                      v12 = -1;
                      break;
                    }
                  }
                  v28 = (__int64*)*v28;
                  if (v28 == nullptr) {
                    goto LABEL_48;
                  }
                }
              }
            }
          }
          v31 = a1[15] + (v5 << 6);
          v33 = *(unsigned __int8*)(v31 + 3);
          v32 = (_BYTE*)(v31 + 3);
          if (v33 != 0) {
            v34 = game_UnitPool_Get_alt1(v32);
            if (v34 != nullptr) {
              v35 = a1[15] + (v5 << 6);
              v36 = v34;
              *(_BYTE*)(v35 + 3) = 0;
              UnitHeroes_6d2b90_alt1((__int64)v34,
                                     (unsigned __int8*)GameData_212c8b0[0]);
              v42[0] = *((_BYTE*)v36 + 2088);
              LegionPool_93a920(a1, v42);
            }
          }
          if ((v12 & 0x80000000) == 0 && (*((_BYTE*)a1 + 148) & 1) != 0) {
            v37 = a1[15] + ((unsigned __int64)v12 << 6);
            v39 = *(unsigned __int8*)(v37 + 3);
            v38 = (_BYTE*)(v37 + 3);
            if (v39 != 0) {
              v40 = game_UnitPool_Get_alt1(v38);
              if (v40 != nullptr) {
                v41 = v40;
                *(_BYTE*)(a1[15] + ((unsigned __int64)v12 << 6) + 3) = 0;
                UnitHeroes_6d2b90_alt1((__int64)v40,
                                       (unsigned __int8*)GameData_212c8b0[0]);
                v43[0] = *((_BYTE*)v41 + 2088);
                LegionPool_93a920(a1, v43);
              }
            }
          }
        }
        else {
          v12 = -1;
        }
        RidePool_93ce60((__int64)a1, v10, v12);
      }
      else {
        RidePool_93d1e0((__int64)a1, a2);
      }
      v6[3] = *(_BYTE*)(v8 + 2088);
      UnitHeroes_6d2b90_alt1(v8, v6);
      v16 = fw_memory_g_heap_manager_ptr;
      v17 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      v18 = *(unsigned __int8*)(v8 + 2088);
      v19 = v17;
      *(_DWORD*)(v17 + 20) = a3;
      *(_BYTE*)(v17 + 16) = v18;
      *(_QWORD*)v17 = 0;
      *(_QWORD*)(v17 + 8) = v18;
      if (RidePool_93e020((__int64)a1, v18, (unsigned __int8*)(v17 + 16)) !=
          nullptr) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v20, v19);
      }
      else {
        v21 = a1[1];
        v22 = v21 - 1;
        if ((v21 & (v21 - 1)) != 0) {
          if (v21 <= v18) {
            v18 = (unsigned int)v18 % (unsigned __int8)a1[1];
          }
        }
        else {
          v18 = ((_DWORD)v21 - 1) & (unsigned int)v18;
        }
        v23 = *a1;
        v24 = *(__int64**)(*a1 + 8 * v18);
        if (v24 != nullptr) {
          *(_QWORD*)v19 = *v24;
          *v24 = v19;
        }
        else {
          v25 = a1[2];
          a1[2] = v19;
          *(_QWORD*)v19 = v25;
          *(_QWORD*)(v23 + 8 * v18) = a1 + 2;
          if (*(_QWORD*)v19 != 0) {
            v26 = *(_QWORD*)(*(_QWORD*)v19 + 8LL);
            if ((v21 & v22) != 0) {
              if (v26 >= v21) {
                v26 %= v21;
              }
            }
            else {
              v26 &= v22;
            }
            *(_QWORD*)(*a1 + 8 * v26) = v19;
          }
        }
        ++a1[3];
      }
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 RidePool_93d1e0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  int v16;
  __int64* v18;
  __int64 v19;
  _QWORD* v20;
  __int64* v21;
  unsigned __int8 v23[4];

  if (a2 != 0 && (*(_BYTE*)(a1 + 148) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0 && *(_QWORD*)(a1 + 24) != 0) {
      v6 = *(unsigned __int8*)(a2 + 2088);
      v7 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v8 = *(unsigned __int8*)(a2 + 2088);
        if (v4 <= v6) {
          v8 = (unsigned int)v6 % (unsigned int)v4;
        }
      }
      else {
        v8 = ((_DWORD)v4 - 1) & (unsigned int)v6;
      }
      v9 = *(__int64****)(*(_QWORD*)a1 + 8 * v8);
      if (v9 != nullptr) {
        v10 = *v9;
        if (v10 != nullptr) {
          if ((v4 & v7) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == (__int64*)v6) {
                if (*((unsigned __int8*)v10 + 16) == (_DWORD)v6) {
                  goto LABEL_27;
                }
              }
              else if (((unsigned __int64)v12 & v7) != v8) {
                return 0;
              }
              v10 = (__int64**)*v10;
              if (v10 == nullptr) {
                return 0;
              }
            }
          }
          do {
            v11 = (unsigned __int64)v10[1];
            if (v11 == v6) {
              if (*((unsigned __int8*)v10 + 16) == (_DWORD)v6) {
              LABEL_27:
                v13 = *((unsigned int*)v10 + 5);
                if ((v13 & 0x80000000) == 0) {
                  v14 = *(_QWORD*)(a1 + 120) + (v13 << 6);
                  v16 = *(unsigned __int8*)(v14 + 3);
                  v15 = (_BYTE*)(v14 + 3);
                  if (v16 != 0) {
                    v18 = game_UnitPool_Get_alt1(v15);
                    if (v18 != nullptr) {
                      v19 = *(_QWORD*)(a1 + 120) + (v13 << 6);
                      v20 = (_QWORD*)a1;
                      v21 = v18;
                      *(_BYTE*)(v19 + 3) = 0;
                      UnitHeroes_6d2b90_alt1(
                          (__int64)v18, (unsigned __int8*)GameData_212c8b0[0]);
                      v23[0] = *((_BYTE*)v21 + 2088);
                      LegionPool_93a920(v20, v23);
                    }
                  }
                }
                return 0;
              }
            }
            else {
              if (v11 >= v4) {
                v11 %= v4;
              }
              if (v11 != v8) {
                return 0;
              }
            }
            v10 = (__int64**)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 RidePool_93d360(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f42c8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f42c8) != 0) {
    GameData_21f42c4 = game_HashString32("RideData");
    __cxa_guard_release(&GameData_21f42c8);
  }
  if (((**(__int64 (***)(__int64, int*))a2)(a2, &GameData_21f42c4) & 1) != 0) {
    v4 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v4 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = 0;
    v5 = *(int*)(a2 + 20);
    v6 = *(_DWORD*)(a1 + 144);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    v7 = *(_QWORD*)(a2 + 8);
    if (v6 != 0) {
      v8 = 200;
      v9 = 0;
      *(_BYTE*)(v7 + v5) = -56;
      v10 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v10 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = 0;
      do {
        GameRoutine_932ec0((unsigned __int8*)(*(_QWORD*)(a1 + 120) + v9), a2);
        --v8;
        v9 += 64;
      } while (v8 != 0);
    }
    else {
      *(_BYTE*)(v7 + v5) = 0;
      v11 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v11 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = 0;
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 RidePool_93d4a0(__int64* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int16 v6;
  unsigned __int16 v7;
  __int64 v8;
  __int64 v9;

  RidePool_93bb80_alt1((__int64)a1);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f42c8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f42c8) != 0) {
    GameData_21f42c4 = game_HashString32("RideData");
    __cxa_guard_release(&GameData_21f42c8);
  }
  if (((*(__int64 (**)(__int64, int*))(*(_QWORD*)a2 + 16LL))(
           a2, &GameData_21f42c4) &
       1) != 0) {
    v4 = *(int*)(a2 + 20);
    v5 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v4 + 2;
    v6 = *(unsigned __int8*)(v5 + v4 + 1);
    *(_DWORD*)(a2 + 20) = v4 + 3;
    v7 = v6 | (*(unsigned __int8*)(v5 + v4 + 2) << 8);
    if (v7 != 0) {
      v8 = 0;
      if (v7 >= 0xC8u) {
        v9 = 200;
      }
      else {
        v9 = v7;
      }
      do {
        GameRoutine_9331a0(a1[15] + v8, a2);
        --v9;
        v8 += 64;
      } while (v9 != 0);
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  return RidePool_93bf20_alt1(a1);
}

__int64 RidePool_93d5c0()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;

  v0 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v1 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v2 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 24, 16, 0);
  v3 = GameData_21eea40;
  v2[1] = (__int64)&GameData_21eea40;
  v2[2] = (__int64)v1;
  GameData_21eea40 = (__int64)v2;
  *v2 = v3;
  *(_QWORD*)(v3 + 8) = v2;
  ++GameData_21eea50;
  v4 = *v0;
  *v1 = &game_GameSaveConst_GlobalSerializer_vtable;
  v1[1] = game_RidePool_List_vtable;
  v5 = fw_memory_HeapManager_Allocate(v4, 200, 16, 0);
  *(_QWORD*)v5 = 0;
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_DWORD*)(v5 + 32) = 1065353216;
  *(_DWORD*)(v5 + 72) = 1065353216;
  v6 = *v0;
  *(_DWORD*)(v5 + 112) = 1065353216;
  v7 = fw_memory_HeapManager_Allocate(v6, 12800, 16, 0);
  v8 = 0;
  *(_QWORD*)(v5 + 120) = v7;
  *(_QWORD*)(v5 + 136) = v7 + 12800;
  do {
    v9 = v7 + v8;
    v8 += 640;
    *(_QWORD*)(v9 + 24) = 0;
    *(_DWORD*)(v9 + 8) = 0;
    *(_QWORD*)v9 = 0;
    *(_QWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_DWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 104) = 0;
    *(_QWORD*)(v9 + 112) = 0;
    *(_QWORD*)(v9 + 120) = 0;
    *(_DWORD*)(v9 + 136) = 0;
    *(_QWORD*)(v9 + 128) = 0;
    *(_QWORD*)(v9 + 16) = v9 + 24;
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)(v9 + 80) = v9 + 88;
    *(_QWORD*)(v9 + 216) = 0;
    v9 += 216;
    *(_QWORD*)(v9 - 40) = 0;
    *(_QWORD*)(v9 - 32) = 0;
    *(_QWORD*)(v9 - 64) = 0;
    *(_QWORD*)(v9 - 56) = 0;
    *(_QWORD*)(v9 - 48) = 0;
    *(_QWORD*)(v9 - 24) = 0;
    *(_DWORD*)(v9 - 16) = 0;
    *(_QWORD*)(v9 + 24) = 0;
    *(_QWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 8) = 0;
    *(_QWORD*)(v9 + 16) = 0;
    *(_QWORD*)(v9 - 8) = v9;
    *(_QWORD*)(v9 + 40) = 0;
    *(_DWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_QWORD*)(v9 - 72) = v9 - 64;
    *(_QWORD*)(v9 + 64) = 0;
    v9 += 64;
    *(_QWORD*)(v9 - 8) = v9;
    *(_DWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_DWORD*)(v9 + 112) = 0;
    *(_QWORD*)(v9 + 104) = 0;
    *(_QWORD*)(v9 + 152) = 0;
    *(_QWORD*)(v9 + 160) = 0;
    *(_QWORD*)(v9 + 136) = 0;
    *(_QWORD*)(v9 + 144) = 0;
    *(_DWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 168) = 0;
    *(_QWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_DWORD*)(v9 + 240) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 280) = 0;
    *(_QWORD*)(v9 + 288) = 0;
    *(_QWORD*)(v9 + 264) = 0;
    *(_QWORD*)(v9 + 272) = 0;
    *(_DWORD*)(v9 + 304) = 0;
    *(_QWORD*)(v9 + 296) = 0;
    *(_QWORD*)(v9 + 344) = 0;
    *(_QWORD*)(v9 + 352) = 0;
    *(_QWORD*)(v9 + 328) = 0;
    *(_QWORD*)(v9 + 336) = 0;
    *(_QWORD*)(v9 + 56) = v9 + 64;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 120) = v9 + 128;
    *(_QWORD*)(v9 + 128) = 0;
    *(_QWORD*)(v9 + 184) = v9 + 192;
    *(_QWORD*)(v9 + 192) = 0;
    *(_QWORD*)(v9 + 248) = v9 + 256;
    *(_QWORD*)(v9 + 256) = 0;
    *(_QWORD*)(v9 + 312) = v9 + 320;
    *(_QWORD*)(v9 + 320) = 0;
  } while (v8 != 12800);
  *(_QWORD*)(v5 + 128) = v7 + 12800;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_BYTE*)(v5 + 148) = 1;
  result = RidePool_93bb80_alt1(v5);
  *v1 = game_RidePool_Impl_vtable;
  game_map_history_g_ride_pool = (__int64)v1;
  v1[1] = GameData_1faeef0;
  v1[2] = v5;
  GameData_21f42d0 = (__int64)(v1 + 1);
  return result;
}

__int64 RidePool_93d820(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  char v4;
  _QWORD* v5;
  __int64 v6;

  if ((result & 0x80000000) == 0) {
    v1 = *(_QWORD*)(GameData_21f42d0 + 8);
    v2 = *(_QWORD*)(v1 + 120) + ((unsigned __int64)(unsigned int)result << 6);
    if (*(_BYTE*)v2 != 0) {
      if (*(_BYTE*)(v2 + 3) != 0) {
        v3 = game_UnitPool_Get(v2 + 3);
      }
      else {
        v3 = 0;
      }
      RidePool_93d1e0(v1, v3);
      v4 = *(_BYTE*)(v2 + 40);
      *(_QWORD*)v2 = 0;
      *(_DWORD*)(v2 + 8) = 0;
      if ((v4 & 1) != 0) {
        **(_BYTE**)(v2 + 56) = 0;
        *(_QWORD*)(v2 + 48) = 0;
      }
      else {
        *(_WORD*)(v2 + 40) = 0;
      }
      v6 = *(_QWORD*)(v2 + 24);
      v5 = (_QWORD*)(v2 + 24);
      GameRoutine_6e3b50(v5 - 1, v6);
      *v5 = 0;
      v5[1] = 0;
      *(v5 - 1) = v5;
      return RidePool_93d9e0_alt1(v1);
    }
  }
  return result;
}

__int64 RidePool_93d8e0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;

  result = 0xFFFFFFFFLL;
  if (a1 != 0) {
    v3 = *(_QWORD*)(GameData_21f42d0 + 8);
    if ((*(_BYTE*)(v3 + 148) & 1) != 0) {
      v4 = *(_QWORD*)(v3 + 8);
      if (v4 != 0 && *(_QWORD*)(v3 + 24) != 0) {
        v6 = *(unsigned __int8*)(a1 + 2088);
        v7 = v4 - 1;
        if ((v4 & (v4 - 1)) != 0) {
          v8 = v6;
          if (v4 <= v6) {
            v8 = (unsigned int)v6 % (unsigned int)v4;
          }
        }
        else {
          v8 = ((_DWORD)v4 - 1) & (unsigned int)v6;
        }
        v9 = *(__int64****)(*(_QWORD*)v3 + 8 * v8);
        if (v9 != nullptr) {
          v10 = *v9;
          if (v10 != nullptr) {
            if ((v4 & v7) == 0) {
              while (1) {
                v12 = v10[1];
                if (v12 == (__int64*)v6) {
                  if (*((unsigned __int8*)v10 + 16) == (_DWORD)v6) {
                    return *((unsigned int*)v10 + 5);
                  }
                }
                else if (((unsigned __int64)v12 & v7) != v8) {
                  return 0xFFFFFFFFLL;
                }
                v10 = (__int64**)*v10;
                if (v10 == nullptr) {
                  return result;
                }
              }
            }
            do {
              v11 = (unsigned __int64)v10[1];
              if (v11 == v6) {
                if (*((unsigned __int8*)v10 + 16) == (_DWORD)v6) {
                  return *((unsigned int*)v10 + 5);
                }
              }
              else {
                if (v11 >= v4) {
                  v11 %= v4;
                }
                if (v11 != v8) {
                  return 0xFFFFFFFFLL;
                }
              }
              v10 = (__int64**)*v10;
            } while (v10 != nullptr);
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64 RidePool_93d9e0(unsigned __int64 result)
{
  unsigned __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64* v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64* v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64** v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  unsigned __int64 v44;
  float v45;
  float v46;
  _BOOL8 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  unsigned __int64 v55;

  *(_DWORD*)(result + 144) = 0;
  v1 = result;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(result + 64) != 0) {
    v3 = *(_QWORD**)(result + 56);
    if (v3 != nullptr) {
      do {
        v4 = (_QWORD*)*v3;
        if (*(_QWORD*)(*v2 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*v2 + v5, v3);
        v3 = v4;
      } while (v4 != nullptr);
    }
    v6 = *(_QWORD*)(v1 + 48);
    *(_QWORD*)(v1 + 56) = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v8 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v8 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v8 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v8 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v8 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v8 + 48) = 0;
          v10 = *(_QWORD*)(v1 + 40) + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    *(_QWORD*)(v1 + 64) = 0;
  }
  if (*(_QWORD*)(v1 + 104) != 0) {
    v12 = *(_QWORD**)(v1 + 96);
    if (v12 != nullptr) {
      do {
        v13 = (_QWORD*)*v12;
        if (*(_QWORD*)(*v2 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*v2 + v14, v12);
        v12 = v13;
      } while (v13 != nullptr);
    }
    v15 = *(_QWORD*)(v1 + 88);
    *(_QWORD*)(v1 + 96) = 0;
    if (v15 != 0) {
      v16 = v15 & 7;
      if (v15 >= 8) {
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v17) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v17 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v17 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v17 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v17 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v17 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v17 + 48) = 0;
          v19 = *(_QWORD*)(v1 + 80) + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while (v18 != v17);
      }
      else {
        v17 = 0;
      }
      if (v16 != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
    }
    *(_QWORD*)(v1 + 104) = 0;
  }
  v21 = (__int64*)(v1 + 96);
  v22 = (unsigned __int64*)(v1 + 56);
  v23 = 0;
  v24 = GameData_212c8a0;
  do {
    v28 = (unsigned __int8*)(*(_QWORD*)(v1 + 120) + (v23 << 6));
    if (*v28 == 0) {
      goto LABEL_36;
    }
    ++*(_DWORD*)(v1 + 144);
    v25 = *v28;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v24 + 64) + 8 * v25) + 108LL) != 0) {
      v29 = fw_memory_HeapManager_Allocate(*v2, 24, 16, 0);
      *(_BYTE*)(v29 + 16) = v25;
      *(_DWORD*)(v29 + 20) = v23;
      *(_QWORD*)v29 = 0;
      *(_QWORD*)(v29 + 8) = v25;
      result = GameRoutine_93e020(v1 + 80, v25, v29 + 16);
      if (result == 0) {
        v34 = *(_QWORD*)(v1 + 88);
        v35 = v34 - 1;
        if ((v34 & (v34 - 1)) != 0) {
          if (v34 <= v25) {
            v25 = (unsigned int)v25 % (unsigned __int8)*(_QWORD*)(v1 + 88);
          }
        }
        else {
          v25 = ((_DWORD)v34 - 1) & (unsigned int)v25;
        }
        v52 = *(_QWORD*)(v1 + 80);
        v53 = *(__int64**)(v52 + 8 * v25);
        if (v53 != nullptr) {
          *(_QWORD*)v29 = *v53;
          *v53 = v29;
        }
        else {
          v54 = *v21;
          *v21 = v29;
          *(_QWORD*)v29 = v54;
          *(_QWORD*)(v52 + 8 * v25) = v21;
          if (*(_QWORD*)v29 != 0) {
            v55 = *(_QWORD*)(*(_QWORD*)v29 + 8LL);
            if ((v34 & v35) != 0) {
              if (v55 >= v34) {
                v55 %= v34;
              }
            }
            else {
              v55 &= v35;
            }
            *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v55) = v29;
          }
        }
        ++*(_QWORD*)(v1 + 104);
        v31 = *((unsigned int*)v28 + 1);
        if ((_DWORD)v31 == 0) {
          goto LABEL_36;
        }
        goto LABEL_44;
      }
      v30 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v30 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*v2 + v30, v29);
    }
    v31 = *((unsigned int*)v28 + 1);
    if ((_DWORD)v31 == 0) {
      goto LABEL_36;
    }
  LABEL_44:
    v32 = *(_QWORD*)(v1 + 48);
    if (v32 != 0) {
      v33 = v32 - 1;
      if ((v32 & (v32 - 1)) != 0) {
        v25 = v31;
        if (v32 <= v31) {
          v25 = (unsigned int)v31 % (unsigned int)v32;
        }
      }
      else {
        v25 = ((_DWORD)v32 - 1) & (unsigned int)v31;
      }
      v38 = *(__int64***)(*(_QWORD*)(v1 + 40) + 8 * v25);
      if (v38 != nullptr) {
        v39 = *v38;
        if (v39 != nullptr) {
          if ((v32 & v33) == 0) {
            while (1) {
              v41 = v39[1];
              if (v41 == v31) {
                if (*((_DWORD*)v39 + 4) == (_DWORD)v31) {
                  goto LABEL_36;
                }
              }
              else if ((v41 & v33) != v25) {
                goto LABEL_71;
              }
              v39 = (__int64*)*v39;
              if (v39 == nullptr) {
                goto LABEL_71;
              }
            }
          }
          do {
            v40 = v39[1];
            if (v40 == v31) {
              if (*((_DWORD*)v39 + 4) == (_DWORD)v31) {
                goto LABEL_36;
              }
            }
            else {
              if (v40 >= v32) {
                v40 %= v32;
              }
              if (v40 != v25) {
                break;
              }
            }
            v39 = (__int64*)*v39;
          } while (v39 != nullptr);
        }
      }
    }
  LABEL_71:
    result = fw_memory_HeapManager_Allocate(*v2, 24, 16, 0);
    v42 = *(_QWORD*)(v1 + 64);
    v43 = *(float*)(v1 + 72);
    v44 = result;
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = v31;
    *(_DWORD*)(result + 16) = v31;
    *(_DWORD*)(result + 20) = v23;
    v45 = (float)(unsigned __int64)(v42 + 1);
    if (v32 == 0 || (float)(v43 * (float)v32) < v45) {
      v46 = v45 / v43;
      v47 = (v32 & (v32 - 1)) != 0;
      if (v32 < 3) {
        v47 = true;
      }
      v48 = v47 | (2 * v32);
      v49 = vcvtps_u64_f32(v46);
      if (v48 <= v49) {
        v50 = v49;
      }
      else {
        v50 = v48;
      }
      if (v50 == 1) {
        v50 = 2;
      }
      else if ((v50 & (v50 - 1)) != 0) {
        result = std___1___next_prime(v50);
        v32 = *(_QWORD*)(v1 + 48);
        v50 = result;
      }
      if (v50 > v32) {
        goto LABEL_83;
      }
      if (v50 < v32) {
        result = vcvtps_u64_f32((float)*(unsigned __int64*)(v1 + 64) /
                                *(float*)(v1 + 72));
        if (v32 < 3 || (v32 & (v32 - 1)) != 0) {
          result = std___1___next_prime(result);
        }
        else {
          v51 = 1LL << -(char)__clz(result - 1);
          if (result >= 2) {
            result = v51;
          }
        }
        if (v50 <= result) {
          v50 = result;
        }
        if (v50 < v32) {
        LABEL_83:
          result = GameRoutine_60eb40(v1 + 40, v50);
        }
      }
      v32 = *(_QWORD*)(v1 + 48);
      if ((v32 & (v32 - 1)) != 0) {
        if (v32 <= v31) {
          v25 = v31 % v32;
        }
        else {
          v25 = v31;
        }
      }
      else {
        v25 = ((_DWORD)v32 - 1) & (unsigned int)v31;
      }
    }
    v26 = *(_QWORD*)(v1 + 40);
    v27 = *(unsigned __int64**)(v26 + 8 * v25);
    if (v27 != nullptr) {
      *(_QWORD*)v44 = *v27;
      *v27 = v44;
    }
    else {
      v36 = *v22;
      *v22 = v44;
      *(_QWORD*)v44 = v36;
      *(_QWORD*)(v26 + 8 * v25) = v22;
      if (*(_QWORD*)v44 != 0) {
        v37 = *(_QWORD*)(*(_QWORD*)v44 + 8LL);
        if ((v32 & (v32 - 1)) != 0) {
          if (v37 >= v32) {
            v37 %= v32;
          }
        }
        else {
          v37 &= v32 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v37) = v44;
      }
    }
    ++*(_QWORD*)(v1 + 64);
  LABEL_36:
    ++v23;
  } while (v23 != 200);
  return result;
}

__int64** RidePool_93e020(__int64 a1, unsigned __int64 a2, unsigned __int8* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64*** v6;
  __int64** v7;
  int v8;
  unsigned __int64 v9;
  __int64* v10;
  float v11;
  float v12;
  float v13;
  _BOOL8 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 primeEm;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v4 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v5 = a2;
      if (a2 >= v3) {
        v5 = (unsigned __int8)a2 %
             (unsigned int)(unsigned __int8)*(_QWORD*)(a1 + 8);
      }
    }
    else {
      v5 = (v3 + 255) & a2;
    }
    v6 = *(__int64****)(*(_QWORD*)a1 + 8 * v5);
    if (v6 != nullptr) {
      v7 = *v6;
      if (v7 != nullptr) {
        v8 = *a3;
        if ((v3 & v4) == 0) {
          while (1) {
            v10 = v7[1];
            if (v10 == (__int64*)a2) {
              if (*((unsigned __int8*)v7 + 16) == v8) {
                return v7;
              }
            }
            else if (((unsigned __int64)v10 & v4) != v5) {
              goto LABEL_21;
            }
            v7 = (__int64**)*v7;
            if (v7 == nullptr) {
              goto LABEL_21;
            }
          }
        }
        do {
          v9 = (unsigned __int64)v7[1];
          if (v9 == a2) {
            if (*((unsigned __int8*)v7 + 16) == v8) {
              return v7;
            }
          }
          else {
            if (v9 >= v3) {
              v9 %= v3;
            }
            if (v9 != v5) {
              break;
            }
          }
          v7 = (__int64**)*v7;
        } while (v7 != nullptr);
      }
    }
  }
LABEL_21:
  v11 = *(float*)(a1 + 32);
  v12 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v3 == 0 || (float)(v11 * (float)v3) < v12) {
    v13 = v12 / v11;
    v14 = true;
    if (v3 >= 3) {
      v14 = (v3 & (v3 - 1)) != 0;
    }
    v15 = v14 | (2 * v3);
    v16 = vcvtps_u64_f32(v13);
    if (v15 <= v16) {
      primeEm = v16;
    }
    else {
      primeEm = v15;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v18 = a1;
      primeEm = std___1___next_prime(primeEm);
      a1 = v18;
      v3 = *(_QWORD*)(v18 + 8);
    }
    if (primeEm > v3) {
      goto LABEL_33;
    }
    if (primeEm < v3) {
      v19 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v3 < 3 || (v3 & (v3 - 1)) != 0) {
        v21 = a1;
        v19 = std___1___next_prime(v19);
        a1 = v21;
      }
      else {
        v20 = 1LL << -(char)__clz(v19 - 1);
        if (v19 >= 2) {
          v19 = v20;
        }
      }
      if (primeEm <= v19) {
        primeEm = v19;
      }
      if (primeEm < v3) {
      LABEL_33:
        GameRoutine_68cdc0((__int64*)a1, primeEm);
      }
    }
  }
  return nullptr;
}

__int64 RidePool_93e230(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3;
  __int64 v5;
  unsigned __int8* v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int8 v15[4];

  v3 = *(_BYTE*)(a1 + 148) != 1 || a2 == 0;
  if (v3 || (a3 & 0x80000000) != 0) {
    return 0;
  }
  v5 = a3;
  v6 = (unsigned __int8*)(*(_QWORD*)(a1 + 120) + ((unsigned __int64)a3 << 6));
  if (*v6 == 0 || *(_BYTE*)((v7 = *(_QWORD*)(a2 + 400)) + 96) != 2 ||
      *(unsigned __int8*)(*(_QWORD*)(v7 + 112) + 32LL) !=
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                         8LL * *v6) +
                              32LL)) {
    v9 = v6[3];
    v8 = v6 + 3;
    if (v9 != 0) {
      v11 = game_UnitPool_Get(v8);
      if (v11 != 0) {
        v12 = *(_QWORD*)(a1 + 120) + (v5 << 6);
        v13 = (_QWORD*)a1;
        v14 = v11;
        *(_BYTE*)(v12 + 3) = 0;
        UnitHeroes_6d2b90(v11, GameData_212c8b0[0]);
        v15[0] = *(_BYTE*)(v14 + 2088);
        LegionPool_93a920(v13, v15);
      }
    }
    return 0;
  }
  return GameRoutine_93ce60_alt1((__int64*)a1, a2, a3);
}

unsigned __int64 RidePool_93e320(__int64* a1, __int64 a2, __int64 a3,
                                 unsigned int a4, _DWORD* a5)
{
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;

  if ((a4 & 0x80000000) == 0) {
    v9 = a1[15] + ((unsigned __int64)a4 << 6);
    if (*(_BYTE*)v9 != 0) {
      v10 = a2;
      if (*(_BYTE*)(v9 + 3) != 0) {
        v11 = game_UnitPool_Get(v9 + 3);
      }
      else {
        v11 = 0;
      }
      RidePool_93d1e0((__int64)a1, v11);
      v12 = *(_BYTE*)(v9 + 40);
      *(_QWORD*)v9 = 0;
      *(_DWORD*)(v9 + 8) = 0;
      if ((v12 & 1) != 0) {
        **(_BYTE**)(v9 + 56) = 0;
        *(_QWORD*)(v9 + 48) = 0;
      }
      else {
        *(_WORD*)(v9 + 40) = 0;
      }
      v14 = *(_QWORD*)(v9 + 24);
      v13 = (_QWORD*)(v9 + 24);
      GameRoutine_6e3b50(v13 - 1, v14);
      *v13 = 0;
      v13[1] = 0;
      *(v13 - 1) = v13;
      RidePool_93d9e0((unsigned __int64)a1);
      a2 = v10;
    }
  }
  v15 = (__int64)(int)a4 << 6;
  GameRoutine_930b90(a1[15] + v15, a2);
  *(_DWORD*)(a1[15] + v15 + 4) = *a5;
  GameRoutine_93ce60_alt1(a1, a3, a4);
  return RidePool_93d9e0((unsigned __int64)a1);
}

__attribute__((swiftcall)) void RidePool_93e420(PSEUDO_X8 x8_,
                                                unsigned __int64 result,
                                                unsigned int a2, __int64 a3)
{
  char* a4 = (char*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  char v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  bool v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;

  if ((a2 & 0x80000000) != 0) {
    v14 = &GameData_1b5724d;
  }
  else {
    v6 = *(_QWORD*)(result + 120) + ((unsigned __int64)a2 << 6);
    *(_WORD*)v6 = *(_WORD*)a3;
    *(_BYTE*)(v6 + 2) = *(_BYTE*)(a3 + 2);
    v7 = *(_QWORD*)(a3 + 3);
    *(_BYTE*)(v6 + 11) = *(_BYTE*)(a3 + 11);
    *(_QWORD*)(v6 + 3) = v7;
    if (v6 != a3) {
      v8 = result;
      GameRoutine_6e36c0_alt1((_QWORD*)(v6 + 16), *(_QWORD**)(a3 + 16),
                              (_QWORD*)(a3 + 24));
      v10 = *(_BYTE*)(v6 + 40);
      v9 = (__int64*)(v6 + 40);
      v11 = *(unsigned __int8*)(a3 + 40);
      if ((v10 & 1) != 0) {
        v15 = (v11 & 1) == 0;
        v16 = v11 >> 1;
        if (v15) {
          v17 = a3 + 41;
        }
        else {
          v17 = *(_QWORD*)(a3 + 56);
        }
        if (v15) {
          v18 = v16;
        }
        else {
          v18 = *(_QWORD*)(a3 + 48);
        }
        SpineModel_64dde0_alt1(v9, v17, v18);
      }
      else if ((v11 & 1) != 0) {
        GameRoutine_64df20_alt1(v9, *(_QWORD*)(a3 + 56), *(_QWORD*)(a3 + 48));
      }
      else {
        v12 = *(_QWORD*)(a3 + 40);
        v13 = *(_QWORD*)(a3 + 56);
        v9[1] = *(_QWORD*)(a3 + 48);
        v9[2] = v13;
        *v9 = v12;
      }
      result = v8;
    }
    result = RidePool_93d9e0(result);
    v14 = &GameData_1b57250;
  }
  *a4 = *v14;
  {
    result;
    return;
  }
}

__int64 game_RidePool_List_Impl_EachData_closure_Invoke(__int64 a1, int* a2)
{
  __int64 v3;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  if (v3 == 0) {
    GameRoutine_60a310((unsigned __int8)v3, a2);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 48LL))(
      v3, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 120LL) + ((__int64)*a2 << 6));
}

__int64 RidePool_93e660(_QWORD* a1, _BYTE* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64*** v7;
  __int64** v8;
  __int64 result;
  unsigned __int64 v10;
  __int64* v11;

  v2 = (unsigned __int8)*a2;
  if (*a2 != 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) + 8 * v2) +
                108LL) != 0) {
    v3 = a1[11];
    if (v3 != 0 && a1[13] != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = (unsigned __int8)*a2;
        if (v3 <= v2) {
          v6 = (unsigned int)v2 % (unsigned int)v3;
        }
      }
      else {
        v6 = ((_DWORD)v3 - 1) & (unsigned int)v2;
      }
      v7 = *(__int64****)(a1[10] + 8 * v6);
      if (v7 != nullptr) {
        v8 = *v7;
        if (v8 != nullptr) {
          result = 0xFFFFFFFFLL;
          if ((v3 & v5) == 0) {
            while (1) {
              v11 = v8[1];
              if (v11 == (__int64*)v2) {
                if (*((unsigned __int8*)v8 + 16) == (_DWORD)v2) {
                  return *((unsigned int*)v8 + 5);
                }
              }
              else if (((unsigned __int64)v11 & v5) != v6) {
                return 0xFFFFFFFFLL;
              }
              v8 = (__int64**)*v8;
              if (v8 == nullptr) {
                return result;
              }
            }
          }
          while (1) {
            v10 = (unsigned __int64)v8[1];
            if (v10 == v2) {
              if (*((unsigned __int8*)v8 + 16) == (_DWORD)v2) {
                return *((unsigned int*)v8 + 5);
              }
            }
            else {
              if (v10 >= v3) {
                v10 %= v3;
              }
              if (v10 != v6) {
                return 0xFFFFFFFFLL;
              }
            }
            v8 = (__int64**)*v8;
            if (v8 == nullptr) {
              return result;
            }
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}

__int64 RidePool_Impl_Destructor(_QWORD* a1)
{
  __int64* v1;
  __int64 v3;
  _QWORD* v5;

  v1 = (__int64*)a1[1];
  *a1 = game_RidePool_List_vtable;
  if (v1 != nullptr) {
    List_93b820_alt1(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)v1);
    a1[1] = 0;
  }
  *(a1 - 1) = GameData_212d6d0 + 2;
  v5 = a1 - 1;
  return GameHr_876a40(&GameData_21eea40, &v5);
}

void RidePool_Impl_DeletingDestructor(_QWORD* a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (__int64*)a1[1];
  *a1 = game_RidePool_List_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    List_93b820_alt1(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v4, (__int64)v1);
    a1[1] = 0;
  }
  *(a1 - 1) = GameData_212d6d0 + 2;
  v5 = (__int64)(a1 - 1);
  v7 = v5;
  GameHr_876a40(&GameData_21eea40, &v7);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v6, v5);
}

#pragma GCC visibility pop
