#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_89d820(float*, unsigned __int64*, __int64, __int64**);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 GameRoutine_65f3d0(_QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_70f2d0(_QWORD, _QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_876a40(_QWORD*, _QWORD*);
__int64 GameRoutine_9389a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9392a0(void);
__int64 LegionPool_936cf0(_QWORD, _QWORD);
__int64 LegionPool_9374e0_alt1(_QWORD, _QWORD) __asm__("LegionPool_9374e0");
__int64 LegionPool_937de0_alt1(_QWORD, _QWORD) __asm__("LegionPool_937de0");
__int64 LegionPool_93a920_alt1(_QWORD, _QWORD) __asm__("LegionPool_93a920");
__int64 SpotMgr_132ffa0(_QWORD);
__int64 UnitHeroes_6d2c90(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_21f4278;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1faebf0[])();
extern __int64 (*GameData_1faed40[])();
extern __int64 (*game_LegionPool_List_vtable[])();
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea40;
extern __int64 GameData_21f4280;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c780;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d6d0;
extern char GameData_1a9f09e;
extern int GameData_21f4270;
struct PseudoSret GameRoutine_93aa60(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6f93f0(void);
__int64 LegionPool_9369a0(__int64 result);
bool LegionPool_9374e0(_QWORD* a1, __int64 a2);
__int64 LegionPool_937620(__int64 a1, __int64 a2, unsigned int a3);
__int64 LegionPool_9377a0(__int64 a1, __int64 a2, unsigned int a3);
__int64 LegionPool_937de0(__int64 a1, __int64 a2);
__int64 LegionPool_937fe0(__int64 a1, __int64 a2);
__int64 LegionPool_938160(__int64 a1, __int64 a2);
__int64 LegionPool_938460(__int64 a1);
__int64 LegionPool_938560(unsigned int a1);
unsigned __int64 LegionPool_9386f0();
__int64 LegionPool_938ca0_alt1(__int64 a1) __asm__("LegionPool_938ca0");
__int64 game_LegionPool_List_Impl_EachData_closure_Invoke(__int64 a1,
                                                          unsigned int* a2);
__int64 LegionPool_93a920(_QWORD* a1, unsigned __int8* a2);
__int64 LegionPool_Impl_Destructor(_QWORD* a1);
__int64 LegionPool_Impl_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "LegionPool_Impl_DeletingDestructor");
__int64 game_LegionPool_GetVariety_lambda0_Invoke_alt1(
    __int64 result,
    unsigned __int8* a2) __asm__("game_LegionPool_GetVariety_lambda0_Invoke");
__int64 LegionPool_9377a0_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("LegionPool_9377a0");
__int64 LegionPool_93a310(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                          unsigned __int8*, unsigned __int8*);
bool GameRoutine_93a560(unsigned __int8*, unsigned __int8*);
extern char* GameData_212d818[9];
extern char GameData_1b5724e;
extern char GameData_1b5724f;
unsigned __int8* GameRoutine_939f20(unsigned __int8* result, unsigned __int8*,
                                    unsigned __int8*);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8 x8_, __int64 result,
                                                  unsigned __int8* a2,
                                                  __int64 a3);
__int64 LegionPool_9392a0(__int64 result, unsigned __int8* a2, __int64 a3,
                          char a4);
unsigned __int8* LegionPool_93a150(unsigned __int8* a1, unsigned __int8* a2,
                                   unsigned __int8* a3, unsigned __int8* a4);
__int64* GameRoutine_68cdc0(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___next_prime(_QWORD);
__int64 LegionPool_9389a0(__int64 a1, unsigned __int8* a2, _BYTE** a3);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
bool UnitHeroes_6d2c90_alt1(__int64, __int64*) __asm__("UnitHeroes_6d2c90");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 GameData_212c998_alt1[148] __asm__("GameData_212c998");
unsigned __int8*
LegionPool_93a310_alt1(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                       unsigned __int8*,
                       unsigned __int8*) __asm__("LegionPool_93a310");
unsigned __int8* LegionPool_939f20(unsigned __int8* result, unsigned __int8* a2,
                                   unsigned __int8* a3);
bool LegionPool_93a560(unsigned __int8* a1, unsigned __int8* a2);
_QWORD* LegionPool_936cf0_alt1(_QWORD* result,
                               __int64) __asm__("LegionPool_936cf0");
_QWORD* game_89d820(float*, unsigned __int64*, __int64, __int64**);
__int64 GameHr_876a40(_QWORD*, _QWORD*);
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_70f2d0_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_70f2d0");
__int64 LegionPool_9389a0_alt1(float*, unsigned __int8*,
                               _BYTE**) __asm__("LegionPool_9389a0");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_7d6200_alt1(__int64*, _DWORD*) __asm__("GameRoutine_7d6200");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6f93f0_alt1() __asm__("GameRoutine_6f93f0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void LegionPool_938ca0(__int64 a1);
void LegionPool_Impl_DeletingDestructor(_QWORD* a1);
void game_LegionPool_GetVariety_lambda0_Invoke(__int64 a1, unsigned __int8* a2);

__int64 LegionPool_9369a0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _BYTE* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  int v27;
  unsigned __int8 v28[4];
  unsigned __int8 v29[4];
  unsigned __int8* v30;

  v1 = result;
  if (*(_BYTE*)(result + 76) == 1) {
    if (*(_QWORD*)(result + 32) != 0) {
      v2 = *(_QWORD**)(result + 24);
      if (v2 != nullptr) {
        v3 = fw_memory_g_heap_manager_ptr;
        do {
          v4 = (_QWORD*)*v2;
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v5 = 128;
          }
          else {
            v5 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v2);
          v2 = v4;
        } while (v4 != nullptr);
      }
      v6 = *(_QWORD*)(v1 + 16);
      *(_QWORD*)(v1 + 24) = 0;
      if (v6 != 0) {
        v7 = v6 & 7;
        if (v6 >= 8) {
          v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
          v8 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 48) = 0;
            v10 = *(_QWORD*)(v1 + 8) + 8 * v8;
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
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + v11) = 0;
            v11 += 8;
          } while (v7 != 0);
        }
      }
      *(_QWORD*)(v1 + 32) = 0;
    }
    v12 = 1;
    v13 = 0;
    do {
      v29[0] = *(_BYTE*)(*(_QWORD*)(v1 + 48) + v12);
      if (v29[0] != 0) {
        if (game_UnitPool_Get_alt1(v29) != nullptr) {
          v30 = v28;
          v28[0] = v29[0];
          *(_DWORD*)(LegionPool_9389a0_alt1((float*)(v1 + 8), v28, &v30) + 20) =
              v13;
        }
        else {
          *(_BYTE*)(*(_QWORD*)(v1 + 48) + v12) = 0;
        }
      }
      v12 += 8;
      ++v13;
    } while (v12 != 2401);
    v27 = 511;
    result = game_UnitPool_GetFirst_alt1(&v27);
    if (result != 0) {
      v14 = *(_QWORD*)(result + 432);
      v15 = result;
      if (v14 == 0) {
        v24 = *(_QWORD*)(result + 440);
        if (v24 == 0 || (v25 = *(unsigned __int8*)(v24 + 16)) > 8) {
        LABEL_35:
          result = (__int64)LegionPool_936cf0_alt1((_QWORD*)v1, v15);
          goto LABEL_36;
        }
        v26 = 24LL * (unsigned int)v25 + 556024;
        while (1) {
          if (v25 <= 7) {
            v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v26);
            if (v14 != 0) {
              break;
            }
          }
          ++v25;
          v26 += 24;
          if (v25 == 9) {
            goto LABEL_35;
          }
        }
      }
      while (1) {
        do {
          v16 = v14;
          LegionPool_936cf0_alt1((_QWORD*)v1, v15);
          v14 = *(_QWORD*)(v16 + 432);
          v15 = v16;
        } while (v14 != 0);
        v17 = *(_QWORD*)(v16 + 440);
        if (v17 == 0) {
          break;
        }
        v18 = *(unsigned __int8*)(v17 + 16);
        if (v18 > 8) {
          break;
        }
        v19 = 24LL * (unsigned int)v18 + 556024;
        while (1) {
          if (v18 <= 7) {
            v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v19);
            if (v14 != 0) {
              break;
            }
          }
          ++v18;
          v19 += 24;
          if (v18 == 9) {
            goto LABEL_34;
          }
        }
        v15 = v16;
      }
    LABEL_34:
      v15 = v16;
      goto LABEL_35;
    }
  }
LABEL_36:
  v20 = *(_QWORD*)(v1 + 48);
  v21 = 300;
  v22 = 0;
  *(_DWORD*)(v1 + 72) = 0;
  v23 = (_BYTE*)(v20 + 24);
  do {
    if (*(v23 - 24) != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (*(v23 - 16) != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (*(v23 - 8) != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (*v23 != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (v23[8] != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (v23[16] != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    v21 -= 6;
    v23 += 48;
  } while (v21 != 0);
  return result;
}

__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8 x8_, __int64 result,
                                                  unsigned __int8* a2,
                                                  __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned __int8* v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  _BYTE* v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  _BYTE* v38;

  if (*a2 != 0) {
    v5 = *(_QWORD*)(result + 48);
    v6 = 11;
    v9 = result;
    v10 = (_BYTE*)(v5 + 48);
    while (*(v10 - 48) != 0) {
      if (*(v10 - 40) == 0) {
        LODWORD(v6) = v6 - 10;
        goto LABEL_54;
      }
      if (*(v10 - 32) == 0) {
        LODWORD(v6) = v6 - 9;
        goto LABEL_54;
      }
      if (*(v10 - 24) == 0) {
        LODWORD(v6) = v6 - 8;
        goto LABEL_54;
      }
      if (*(v10 - 16) == 0) {
        LODWORD(v6) = v6 - 7;
        goto LABEL_54;
      }
      if (*(v10 - 8) == 0) {
        LODWORD(v6) = v6 - 6;
        goto LABEL_54;
      }
      if (*v10 == 0) {
        LODWORD(v6) = v6 - 5;
        goto LABEL_54;
      }
      if (v10[8] == 0) {
        LODWORD(v6) = v6 - 4;
        goto LABEL_54;
      }
      if (v10[16] == 0) {
        LODWORD(v6) = v6 - 3;
        goto LABEL_54;
      }
      if (v10[24] == 0) {
        LODWORD(v6) = v6 - 2;
        goto LABEL_54;
      }
      if (v10[32] == 0) {
        LODWORD(v6) = v6 - 1;
        goto LABEL_54;
      }
      if (v10[40] == 0) {
        goto LABEL_54;
      }
      v6 += 12;
      v10 += 96;
      if (v6 == 311) {
        LODWORD(v6) = -1;
        v11 = 0;
        v12 = *(_QWORD*)(*GameData_212c998[0] + 64);
        if (a2[1] != 0) {
          v13 = *(_WORD*)(*(_QWORD*)(v12 + 8LL * *a2) + 16LL) & 0x3FF |
                ((*(_BYTE*)(*(_QWORD*)(v12 + 8LL * *a2) + 51LL) & 0xF) << 10) |
                0x4000;
        }
        else {
          v13 = *(_WORD*)(*(_QWORD*)(v12 + 8LL * *a2) + 16LL) & 0x3FF |
                ((*(_BYTE*)(*(_QWORD*)(v12 + 8LL * *a2) + 51LL) & 0xF) << 10);
        }
        v14 = (unsigned __int8*)(v5 + 8);
        if (*((_DWORD*)a2 + 1) != 0) {
          v13 |= 0x8000u;
        }
        do {
          if (*(v14 - 8) != 0) {
            if (*(v14 - 7) != 0) {
              v15 =
                  *(_WORD*)(*(_QWORD*)(v12 + 8LL * *(v14 - 8)) + 16LL) & 0x3FF |
                  ((*(_BYTE*)(*(_QWORD*)(v12 + 8LL * *(v14 - 8)) + 51LL) & 0xF)
                   << 10) |
                  0x4000;
            }
            else {
              v15 =
                  *(_WORD*)(*(_QWORD*)(v12 + 8LL * *(v14 - 8)) + 16LL) & 0x3FF |
                  ((*(_BYTE*)(*(_QWORD*)(v12 + 8LL * *(v14 - 8)) + 51LL) & 0xF)
                   << 10);
            }
            if (*((_DWORD*)v14 - 1) != 0) {
              v15 |= 0x8000u;
            }
            if (v15 <= v13) {
              LODWORD(v6) = v11;
            }
            if (v15 < v13) {
              v13 = v15;
            }
          }
          if (*v14 != 0) {
            if (v14[1] != 0) {
              v16 = *(_WORD*)(*(_QWORD*)(v12 + 8LL * *v14) + 16LL) & 0x3FF |
                    ((*(_BYTE*)(*(_QWORD*)(v12 + 8LL * *v14) + 51LL) & 0xF)
                     << 10) |
                    0x4000;
            }
            else {
              v16 = *(_WORD*)(*(_QWORD*)(v12 + 8LL * *v14) + 16LL) & 0x3FF |
                    ((*(_BYTE*)(*(_QWORD*)(v12 + 8LL * *v14) + 51LL) & 0xF)
                     << 10);
            }
            if (*((_DWORD*)v14 + 1) != 0) {
              v16 |= 0x8000u;
            }
            if (v16 <= v13) {
              LODWORD(v6) = v11 + 1;
            }
            if (v16 < v13) {
              v13 = v16;
            }
          }
          v11 += 2;
          v14 += 16;
        } while (v11 != 300);
        if ((_DWORD)v6 != -1) {
          if ((v6 & 0x80000000) == 0) {
            v28 = v5 + 8LL * (unsigned int)v6;
            if (*(_BYTE*)v28 != 0) {
              if (*(_BYTE*)(v28 + 1) != 0) {
                v29 = game_UnitPool_Get(v28 + 1);
              }
              else {
                v29 = 0;
              }
              LegionPool_937de0_alt1(v9, v29);
              *(_QWORD*)v28 = 0;
              v31 = 0;
              v32 = 0;
              *(_DWORD*)(v9 + 72) = 0;
              v5 = *(_QWORD*)(v9 + 48);
              do {
                if (*(_BYTE*)(v5 + v31) != 0) {
                  *(_DWORD*)(v9 + 72) = ++v32;
                }
                if (*(_BYTE*)(v5 + v31 + 8) != 0) {
                  *(_DWORD*)(v9 + 72) = ++v32;
                }
                if (*(_BYTE*)(v5 + v31 + 16) != 0) {
                  *(_DWORD*)(v9 + 72) = ++v32;
                }
                if (*(_BYTE*)(v5 + v31 + 24) != 0) {
                  *(_DWORD*)(v9 + 72) = ++v32;
                }
                if (*(_BYTE*)(v5 + v31 + 32) != 0) {
                  *(_DWORD*)(v9 + 72) = ++v32;
                }
                if (*(_BYTE*)(v5 + v31 + 40) != 0) {
                  *(_DWORD*)(v9 + 72) = ++v32;
                }
                v31 += 48;
              } while (v31 != 2400);
            }
          }
          v33 = v5 + 8LL * (int)v6;
          *(_WORD*)v33 = *(_WORD*)a2;
          *(_BYTE*)(v33 + 2) = a2[2];
          v34 = *(_DWORD*)(a2 + 3);
          *(_BYTE*)(v33 + 7) = a2[7];
          *(_DWORD*)(v33 + 3) = v34;
          result = LegionPool_9377a0_alt1(v9, a3, (unsigned int)v6);
          v35 = *(_QWORD*)(v9 + 48);
          *(_DWORD*)(v9 + 72) = 0;
          v36 = 300;
          v37 = 0;
          v38 = (_BYTE*)(v35 + 24);
          v27 = &GameData_1b5724f;
          do {
            if (*(v38 - 24) != 0) {
              *(_DWORD*)(v9 + 72) = ++v37;
            }
            if (*(v38 - 16) != 0) {
              *(_DWORD*)(v9 + 72) = ++v37;
            }
            if (*(v38 - 8) != 0) {
              *(_DWORD*)(v9 + 72) = ++v37;
            }
            if (*v38 != 0) {
              *(_DWORD*)(v9 + 72) = ++v37;
            }
            if (v38[8] != 0) {
              *(_DWORD*)(v9 + 72) = ++v37;
            }
            if (v38[16] != 0) {
              *(_DWORD*)(v9 + 72) = ++v37;
            }
            v36 -= 6;
            v38 += 48;
          } while (v36 != 0);
          goto LABEL_92;
        }
        goto LABEL_91;
      }
    }
    LODWORD(v6) = v6 - 11;
  LABEL_54:
    v17 = v5 + 8LL * (unsigned int)v6;
    if (*(_BYTE*)v17 != 0) {
      if (*(_BYTE*)(v17 + 1) != 0) {
        v18 = game_UnitPool_Get(v17 + 1);
      }
      else {
        v18 = 0;
      }
      LegionPool_937de0_alt1(v9, v18);
      *(_QWORD*)v17 = 0;
      v19 = 0;
      v20 = 0;
      *(_DWORD*)(v9 + 72) = 0;
      v5 = *(_QWORD*)(v9 + 48);
      do {
        if (*(_BYTE*)(v5 + v19) != 0) {
          *(_DWORD*)(v9 + 72) = ++v20;
        }
        if (*(_BYTE*)(v5 + v19 + 8) != 0) {
          *(_DWORD*)(v9 + 72) = ++v20;
        }
        if (*(_BYTE*)(v5 + v19 + 16) != 0) {
          *(_DWORD*)(v9 + 72) = ++v20;
        }
        if (*(_BYTE*)(v5 + v19 + 24) != 0) {
          *(_DWORD*)(v9 + 72) = ++v20;
        }
        if (*(_BYTE*)(v5 + v19 + 32) != 0) {
          *(_DWORD*)(v9 + 72) = ++v20;
        }
        if (*(_BYTE*)(v5 + v19 + 40) != 0) {
          *(_DWORD*)(v9 + 72) = ++v20;
        }
        v19 += 48;
      } while (v19 != 2400);
    }
    v21 = v5 + 8LL * (int)v6;
    *(_WORD*)v21 = *(_WORD*)a2;
    *(_BYTE*)(v21 + 2) = a2[2];
    v22 = *(_DWORD*)(a2 + 3);
    *(_BYTE*)(v21 + 7) = a2[7];
    *(_DWORD*)(v21 + 3) = v22;
    result = LegionPool_9377a0_alt1(v9, a3, (unsigned int)v6);
    v23 = *(_QWORD*)(v9 + 48);
    *(_DWORD*)(v9 + 72) = 0;
    v24 = 300;
    v25 = 0;
    v26 = (_BYTE*)(v23 + 24);
    v27 = &GameData_1b5724e;
    do {
      if (*(v26 - 24) != 0) {
        *(_DWORD*)(v9 + 72) = ++v25;
      }
      if (*(v26 - 16) != 0) {
        *(_DWORD*)(v9 + 72) = ++v25;
      }
      if (*(v26 - 8) != 0) {
        *(_DWORD*)(v9 + 72) = ++v25;
      }
      if (*v26 != 0) {
        *(_DWORD*)(v9 + 72) = ++v25;
      }
      if (v26[8] != 0) {
        *(_DWORD*)(v9 + 72) = ++v25;
      }
      if (v26[16] != 0) {
        *(_DWORD*)(v9 + 72) = ++v25;
      }
      v24 -= 6;
      v26 += 48;
    } while (v24 != 0);
    goto LABEL_92;
  }
LABEL_91:
  LODWORD(v6) = -1;
  v27 = GameData_212d818[0];
LABEL_92:
  v30 = *v27;
  *(_DWORD*)(a4 + 4) = v6;
  *(_BYTE*)a4 = v30;
  {
    result;
    return;
  }
}

bool LegionPool_9374e0(_QWORD* a1, __int64 a2)
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

  v3 = a1 + 10;
  v2 = a1[10];
  v6 = 0;
  v21 = 0;
  a1[11] = v2;
  v7 = a1 + 13;
  a1[14] = a1[13];
  do {
    v9 = (_BYTE*)(a1[6] + 8LL * v6);
    if (*v9 != 0) {
      v11 = (unsigned __int8)v9[1];
      v10 = v9 + 1;
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
    v8 = v6++ < 299;
    v21 = v6;
  } while (v8);
  if (*(_QWORD*)(a2 + 32) != 0) {
    v13 = (int*)a1[10];
    v14 = (int*)a1[11];
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
    v17 = (int*)a1[13];
    v18 = (int*)a1[14];
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
          return ((__int64)(a1[11] - a1[10]) >> 2) +
                     ((__int64)(a1[14] - a1[13]) >> 2) !=
                 0;
        }
      }
      goto LABEL_18;
    }
  }
  return ((__int64)(a1[11] - a1[10]) >> 2) +
             ((__int64)(a1[14] - a1[13]) >> 2) !=
         0;
}

__int64 LegionPool_937620(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5;
  __int64* v6;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  struct {
    unsigned int v18[2];
    char* v19;
  } v18_;

  if ((a3 & 0x80000000) != 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 48) + 8LL * a3;
  v6 = GameData_212c780;
  if (*(_DWORD*)(v5 + 4) == 0 || *GameData_212c780 == 0) {
    if (a2 == 0) {
      return 0;
    }
  }
  else {
    v18_.v18[0] = *(_DWORD*)(v5 + 4);
    v18_.v18[1] = 0;
    v18_.v19 = &GameData_1a9f09e;
    if (SpotMgr_132ffa0_alt1(v18_.v18) == a2) {
      return 0;
    }
  }
  if (a2 != 0) {
    if (*(_BYTE*)v5 == 0 ||
        *(_BYTE*)(v5 + 1) != 0 &&
            game_UnitPool_Get_alt1((_BYTE*)(v5 + 1)) != nullptr) {
      return 0;
    }
    v10 = 0;
    while (1) {
      v11 = *(_QWORD*)(a1 + 48);
      if (*(_BYTE*)(v11 + v10) != 0) {
        v12 = *(_DWORD*)(v11 + v10 + 4);
        if (v12 != 0 && *v6 != 0) {
          v18_.v19 = &GameData_1a9f09e;
          v18_.v18[0] = v12;
          v18_.v18[1] = 0;
          if (SpotMgr_132ffa0_alt1(v18_.v18) == a2) {
            break;
          }
        }
      }
      v10 += 8;
      if (v10 == 2400) {
        goto LABEL_31;
      }
    }
    v14 = *(_QWORD*)(a1 + 48);
    v15 = *(_DWORD*)(v5 + 4);
    v16 = 0;
    if (v15 != 0 && *v6 != 0) {
      v18_.v19 = &GameData_1a9f09e;
      v18_.v18[0] = v15;
      v18_.v18[1] = 0;
      v17 = SpotMgr_132ffa0_alt1(v18_.v18);
      if (v17 != 0) {
        v16 = *(_DWORD*)(v17 + 96);
      }
      else {
        v16 = 0;
      }
    }
    *(_DWORD*)(v14 + v10 + 4) = v16;
  LABEL_31:
    v9 = *(_DWORD*)(a2 + 96);
  }
  else {
    v9 = 0;
  }
  *(_DWORD*)(v5 + 4) = v9;
  return 1;
}

__int64 LegionPool_9377a0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  _BYTE* v26;
  char v27;
  char v28;
  int v29;
  __int64 v30;
  int v31;
  _BYTE* v32;
  __int64** v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  _BYTE* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  _BYTE* v58;
  _BYTE v59[4];
  _BYTE v60[4];
  _BYTE* v61;
  _BYTE v62[4];
  _BYTE v63[4];

  result = 0;
  if ((a3 & 0x80000000) != 0 || (*(_BYTE*)(a1 + 76) & 1) == 0) {
    return result;
  }
  v6 = a3;
  v7 = *(_QWORD*)(a1 + 48) + 8LL * a3;
  if (a2 == 0) {
    v17 = *(unsigned __int8*)(v7 + 1);
    v16 = v7 + 1;
    if (v17 != 0) {
      result = game_UnitPool_Get(v16);
      if (result == 0) {
        return result;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8 * v6 + 1) = 0;
      v18 = GameData_212ceb0;
      v19 = *GameData_212ceb0;
      if (*(_QWORD*)(result + 1944) != *GameData_212ceb0) {
        *(_WORD*)(result + 1944) = v19;
        *(_BYTE*)(result + 1946) = BYTE2(v19);
        v20 = *(_DWORD*)((char*)v18 + 3);
        *(_BYTE*)(result + 1951) = *((_BYTE*)v18 + 7);
        v21 = *(_DWORD*)(result + 416);
        *(_DWORD*)(result + 1947) = v20;
        if ((v21 & 0x10000000) == 0) {
          v22 = result;
          *(_DWORD*)(result + 416) = v21 | 0x10000000;
          GameRoutine_6c51e0(result);
          GameRoutine_6c6da0(v22);
          GameRoutine_6c6ec0(v22);
          result = v22;
          *(_DWORD*)(v22 + 416) &= ~0x10000000u;
        }
        *(_WORD*)(result + 20) |= 1u;
      }
      v63[0] = *(_BYTE*)(result + 2088);
      LegionPool_93a920_alt1(a1 + 8, v63);
      v23 = *(_QWORD*)(a1 + 48);
      v24 = 300;
      v25 = 0;
      *(_DWORD*)(a1 + 72) = 0;
      v26 = (_BYTE*)(v23 + 24);
      do {
        if (*(v26 - 24) != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (*(v26 - 16) != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (*(v26 - 8) != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (*v26 != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (v26[8] != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (v26[16] != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        v24 -= 6;
        v26 += 48;
      } while (v24 != 0);
    }
    return 0;
  }
  if (*(_BYTE*)v7 == 0) {
    return 0;
  }
  if (*(_BYTE*)(v7 + 1) != 0 && (v9 = game_UnitPool_Get(v7 + 1)) != 0) {
    v10 = v9;
    if (*(_BYTE*)(a1 + 76) == 1) {
      v11 = *(_QWORD*)(a1 + 16);
      v12 = -1;
      if (v11 != 0 && *(_QWORD*)(a1 + 32) != 0) {
        v13 = *(unsigned __int8*)(a2 + 2088);
        v14 = v11 - 1;
        if ((v11 & (v11 - 1)) != 0) {
          v15 = *(unsigned __int8*)(a2 + 2088);
          if (v11 <= v13) {
            v15 = (unsigned int)v13 % (unsigned int)v11;
          }
        }
        else {
          v15 = ((_DWORD)v11 - 1) & (unsigned int)v13;
        }
        v33 = *(__int64***)(*(_QWORD*)(a1 + 8) + 8 * v15);
        if (v33 != nullptr) {
          v34 = *v33;
          if (v34 != nullptr) {
            if ((v11 & v14) == 0) {
              while (1) {
                v36 = v34[1];
                if (v36 == v13) {
                  if (*((unsigned __int8*)v34 + 16) == (_DWORD)v13) {
                    goto LABEL_74;
                  }
                }
                else if ((v36 & v14) != v15) {
                  goto LABEL_73;
                }
                v34 = (__int64*)*v34;
                if (v34 == nullptr) {
                  goto LABEL_73;
                }
              }
            }
            while (1) {
              v35 = v34[1];
              if (v35 == v13) {
                if (*((unsigned __int8*)v34 + 16) == (_DWORD)v13) {
                LABEL_74:
                  v12 = *((_DWORD*)v34 + 5);
                  break;
                }
              }
              else {
                if (v35 >= v11) {
                  v35 %= v11;
                }
                if (v35 != v15) {
                LABEL_73:
                  v12 = -1;
                  break;
                }
              }
              v34 = (__int64*)*v34;
              if (v34 == nullptr) {
                goto LABEL_73;
              }
            }
          }
        }
      }
      v37 = *(_QWORD*)(a1 + 48) + 8 * v6;
      v39 = *(unsigned __int8*)(v37 + 1);
      v38 = v37 + 1;
      if (v39 != 0) {
        v40 = game_UnitPool_Get(v38);
        if (v40 != 0) {
          *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8 * v6 + 1) = 0;
          v41 = GameData_212ceb0;
          v42 = *GameData_212ceb0;
          if (*(_QWORD*)(v40 + 1944) != *GameData_212ceb0) {
            *(_WORD*)(v40 + 1944) = v42;
            *(_BYTE*)(v40 + 1946) = BYTE2(v42);
            v43 = *(_DWORD*)((char*)v41 + 3);
            *(_BYTE*)(v40 + 1951) = *((_BYTE*)v41 + 7);
            v44 = *(_DWORD*)(v40 + 416);
            *(_DWORD*)(v40 + 1947) = v43;
            if ((v44 & 0x10000000) == 0) {
              v45 = v40;
              *(_DWORD*)(v40 + 416) = v44 | 0x10000000;
              GameRoutine_6c51e0(v40);
              GameRoutine_6c6da0(v45);
              GameRoutine_6c6ec0(v45);
              v40 = v45;
              *(_DWORD*)(v45 + 416) &= ~0x10000000u;
            }
            *(_WORD*)(v40 + 20) |= 1u;
          }
          v60[0] = *(_BYTE*)(v40 + 2088);
          LegionPool_93a920_alt1(a1 + 8, v60);
          v46 = *(_QWORD*)(a1 + 48);
          v47 = 300;
          v48 = 0;
          *(_DWORD*)(a1 + 72) = 0;
          v49 = (_BYTE*)(v46 + 24);
          do {
            if (*(v49 - 24) != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (*(v49 - 16) != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (*(v49 - 8) != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (*v49 != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (v49[8] != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (v49[16] != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            v47 -= 6;
            v49 += 48;
          } while (v47 != 0);
        }
      }
      if ((v12 & 0x80000000) == 0 && (*(_BYTE*)(a1 + 76) & 1) != 0) {
        v50 = *(_QWORD*)(a1 + 48) + 8LL * v12;
        v52 = *(unsigned __int8*)(v50 + 1);
        v51 = v50 + 1;
        if (v52 != 0) {
          v53 = game_UnitPool_Get(v51);
          if (v53 != 0) {
            v54 = v53;
            *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL * v12 + 1) = 0;
            UnitHeroes_6d2c90(v53, GameData_212ceb0);
            v62[0] = *(_BYTE*)(v54 + 2088);
            LegionPool_93a920_alt1(a1 + 8, v62);
            v55 = *(_QWORD*)(a1 + 48);
            v56 = 300;
            v57 = 0;
            *(_DWORD*)(a1 + 72) = 0;
            v58 = (_BYTE*)(v55 + 24);
            do {
              if (*(v58 - 24) != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (*(v58 - 16) != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (*(v58 - 8) != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (*v58 != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (v58[8] != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (v58[16] != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              v56 -= 6;
              v58 += 48;
            } while (v56 != 0);
          }
        }
      }
    }
    else {
      v12 = -1;
    }
    LegionPool_9377a0(a1, v10, v12);
  }
  else {
    LegionPool_937de0_alt1(a1, a2);
  }
  v27 = *(_BYTE*)(a2 + 2088);
  *(_BYTE*)(v7 + 1) = v27;
  if (*(_QWORD*)(a2 + 1944) != *(_QWORD*)v7) {
    *(_WORD*)(a2 + 1944) = *(_QWORD*)v7;
    *(_BYTE*)(a2 + 1946) = *(_BYTE*)(v7 + 2);
    v28 = *(_BYTE*)(v7 + 7);
    *(_DWORD*)(a2 + 1947) = *(_DWORD*)(v7 + 3);
    v29 = *(_DWORD*)(a2 + 416);
    *(_BYTE*)(a2 + 1951) = v28;
    if ((v29 & 0x10000000) == 0) {
      *(_DWORD*)(a2 + 416) = v29 | 0x10000000;
      GameRoutine_6c51e0(a2);
      GameRoutine_6c6da0(a2);
      GameRoutine_6c6ec0(a2);
      *(_DWORD*)(a2 + 416) &= ~0x10000000u;
      v27 = *(_BYTE*)(a2 + 2088);
    }
    *(_WORD*)(a2 + 20) |= 1u;
  }
  v59[0] = v27;
  v61 = v59;
  *(_DWORD*)(GameRoutine_9389a0(a1 + 8, v59, &v61) + 20) = a3;
  v30 = 300;
  v31 = 0;
  *(_DWORD*)(a1 + 72) = 0;
  v32 = (_BYTE*)(*(_QWORD*)(a1 + 48) + 24LL);
  do {
    if (*(v32 - 24) != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (*(v32 - 16) != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (*(v32 - 8) != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (*v32 != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (v32[8] != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (v32[16] != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    v30 -= 6;
    v32 += 48;
  } while (v30 != 0);
  return 1;
}

__int64 LegionPool_937de0(__int64 a1, __int64 a2)
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
  __int64* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _BYTE* v24;
  unsigned __int8 v26[4];

  if (a2 != 0 && (*(_BYTE*)(a1 + 76) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    if (v4 != 0 && *(_QWORD*)(a1 + 32) != 0) {
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
      v9 = *(__int64****)(*(_QWORD*)(a1 + 8) + 8 * v8);
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
                  v14 = *(_QWORD*)(a1 + 48) + 8 * v13;
                  v16 = *(unsigned __int8*)(v14 + 1);
                  v15 = (_BYTE*)(v14 + 1);
                  if (v16 != 0) {
                    v18 = game_UnitPool_Get_alt1(v15);
                    if (v18 != nullptr) {
                      v19 = *(_QWORD*)(a1 + 48) + 8 * v13;
                      v20 = v18;
                      *(_BYTE*)(v19 + 1) = 0;
                      UnitHeroes_6d2c90_alt1((__int64)v18, GameData_212ceb0);
                      v26[0] = *((_BYTE*)v20 + 2088);
                      LegionPool_93a920((_QWORD*)(a1 + 8), v26);
                      v21 = *(_QWORD*)(a1 + 48);
                      v22 = 300;
                      v23 = 0;
                      *(_DWORD*)(a1 + 72) = 0;
                      v24 = (_BYTE*)(v21 + 24);
                      do {
                        if (*(v24 - 24) != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (*(v24 - 16) != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (*(v24 - 8) != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (*v24 != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (v24[8] != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (v24[16] != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        v22 -= 6;
                        v24 += 48;
                      } while (v22 != 0);
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

__int64 LegionPool_937fe0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4278,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4278) != 0) {
    GameData_21f4270 = game_HashString32("LegionData");
    __cxa_guard_release(&GameData_21f4278);
  }
  if (((**(__int64 (***)(__int64, int*))a2)(a2, &GameData_21f4270) & 1) != 0) {
    v4 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v4 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = 0;
    v5 = *(int*)(a2 + 20);
    v6 = *(_DWORD*)(a1 + 72);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    v7 = *(_QWORD*)(a2 + 8);
    if (v6 != 0) {
      v8 = 0;
      *(_BYTE*)(v7 + v5) = 44;
      v9 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v9 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = 1;
      v10 = GameData_212c998[0];
      do {
        v11 = *(int*)(a2 + 20);
        v12 = *(_QWORD*)(a1 + 48);
        v13 = *(unsigned __int8*)(v12 + v8);
        *(_DWORD*)(a2 + 20) = v11 + 1;
        v14 = *(_QWORD*)(a2 + 8);
        if (v13 != 0) {
          *(_BYTE*)(v14 + v11) = 1;
          GameRoutine_65f240(a2, *(_QWORD*)(v12 + v8));
          GameRoutine_65f3d0(a2,
                             *(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                        8LL * *(unsigned __int8*)(v12 + v8)));
        }
        else {
          *(_BYTE*)(v14 + v11) = 0;
        }
        v8 += 8;
      } while (v8 != 2400);
    }
    else {
      *(_BYTE*)(v7 + v5) = 0;
      v15 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v15 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = 0;
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 LegionPool_938160(__int64 a1, __int64 a2)
{
  __int64 i;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;

  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2544) = 0;
    v5 = *(_QWORD*)(a1 + 48) + i;
    *(_QWORD*)(v5 + 2552) = 0;
  }
  if (*(_QWORD*)(a1 + 32) != 0) {
    v6 = *(_QWORD**)(a1 + 24);
    if (v6 != nullptr) {
      v7 = fw_memory_g_heap_manager_ptr;
      do {
        v8 = (_QWORD*)*v6;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v9, (__int64)v6);
        v6 = v8;
      } while (v8 != nullptr);
    }
    v10 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 24) = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 48) = 0;
          v14 = *(_QWORD*)(a1 + 8) + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    *(_QWORD*)(a1 + 32) = 0;
  }
  *(_DWORD*)(a1 + 72) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4278,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21f4278) != 0) {
    GameData_21f4270 = (unsigned int)game_HashString32_alt1("LegionData");
    __cxa_guard_release_alt1((__int64)&GameData_21f4278);
  }
  if (((*(__int64 (**)(__int64, int*))(*(_QWORD*)a2 + 16LL))(
           a2, &GameData_21f4270) &
       1) != 0) {
    v16 = *(int*)(a2 + 20);
    v17 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v16 + 2;
    v18 = *(unsigned __int8*)(v17 + v16 + 1);
    *(_DWORD*)(a2 + 20) = v16 + 3;
    v19 = v18 | (*(unsigned __int8*)(v17 + v16 + 2) << 8);
    if (v19 != 0) {
      v20 = 8LL * v19;
      v21 = 0;
      do {
        GameRoutine_70f2d0_alt1(*(_QWORD*)(a1 + 48) + v21, a2);
        v21 += 8;
      } while (v20 != v21);
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  return LegionPool_9369a0(a1);
}

__int64 LegionPool_938460(__int64 a1)
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
    v3 = *(_QWORD*)(GameData_21f4280 + 8);
    if ((*(_BYTE*)(v3 + 76) & 1) != 0) {
      v4 = *(_QWORD*)(v3 + 16);
      if (v4 != 0 && *(_QWORD*)(v3 + 32) != 0) {
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
        v9 = *(__int64****)(*(_QWORD*)(v3 + 8) + 8 * v8);
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

__int64 LegionPool_938560(unsigned int a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  _BYTE* v15;
  _BYTE v17[4];

  if ((a1 & 0x80000000) == 0) {
    v1 = *(_QWORD*)(GameData_21f4280 + 8);
    if ((*(_BYTE*)(v1 + 76) & 1) != 0) {
      v3 = *(_QWORD*)(v1 + 48) + 8LL * a1;
      v5 = *(unsigned __int8*)(v3 + 1);
      v4 = v3 + 1;
      if (v5 != 0) {
        v6 = game_UnitPool_Get(v4);
        if (v6 != 0) {
          *(_BYTE*)(*(_QWORD*)(v1 + 48) + 8LL * a1 + 1) = 0;
          v7 = GameData_212ceb0;
          v8 = *GameData_212ceb0;
          if (*(_QWORD*)(v6 + 1944) != *GameData_212ceb0) {
            *(_WORD*)(v6 + 1944) = v8;
            *(_BYTE*)(v6 + 1946) = BYTE2(v8);
            v9 = *(_DWORD*)((char*)v7 + 3);
            *(_BYTE*)(v6 + 1951) = *((_BYTE*)v7 + 7);
            v10 = *(_DWORD*)(v6 + 416);
            *(_DWORD*)(v6 + 1947) = v9;
            if ((v10 & 0x10000000) == 0) {
              v11 = v6;
              *(_DWORD*)(v6 + 416) = v10 | 0x10000000;
              GameRoutine_6c51e0(v6);
              GameRoutine_6c6da0(v11);
              GameRoutine_6c6ec0(v11);
              v6 = v11;
              *(_DWORD*)(v11 + 416) &= ~0x10000000u;
            }
            *(_WORD*)(v6 + 20) |= 1u;
          }
          v17[0] = *(_BYTE*)(v6 + 2088);
          LegionPool_93a920_alt1(v1 + 8, v17);
          v12 = *(_QWORD*)(v1 + 48);
          v13 = 300;
          v14 = 0;
          *(_DWORD*)(v1 + 72) = 0;
          v15 = (_BYTE*)(v12 + 24);
          do {
            if (*(v15 - 24) != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (*(v15 - 16) != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (*(v15 - 8) != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (*v15 != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (v15[8] != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (v15[16] != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            v13 -= 6;
            v15 += 48;
          } while (v13 != 0);
        }
      }
    }
  }
  return 0;
}

unsigned __int64 LegionPool_9386f0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    __int64 v9;
    __int64 v10;
    __int64 v11;
  } v9_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v9_.v10 = 0;
  v9_.v11 = 0;
  v9_.v9 = 0;
  v7_.v7[0] = GameData_1faed40;
  v7_.v7[1] = &v9_.v9;
  v7_.v8 = v7_.v7;
  v0 = *(_QWORD**)(GameData_21f4280 + 8);
  v12_.v12[2] = v7_.v7;
  v12_.v13 = v12_.v12;
  v12_.v12[0] = GameData_1faebf0;
  v12_.v12[1] = v0;
  LegionPool_9374e0(v0, (__int64)v12_.v12);
  if (v12_.v13 == v12_.v12) {
    v1 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v1))((__int64)v12_.v13);
LABEL_6:
  if (v7_.v8 == v7_.v7) {
    v2 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v2))((__int64)v7_.v8);
LABEL_11:
  v3 = v9_.v9;
  v4 = v9_.v10;
  if (v9_.v9 != 0) {
    v9_.v10 = v9_.v9;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v9_.v9);
  }
  return (unsigned __int64)(v4 - v3) >> 3;
}

__int64 LegionPool_9389a0(__int64 a1, unsigned __int8* a2, _BYTE** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  __int64* v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  _BYTE* v13;
  float v14;
  float v15;
  float v16;
  _BOOL8 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 primeEm;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  unsigned __int64 v29;

  v4 = *a2;
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v8 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *a2;
      if (v5 <= v4) {
        v3 = (unsigned int)v4 % (unsigned int)v5;
      }
    }
    else {
      v3 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
    v9 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v9 != nullptr) {
      result = *v9;
      if (*v9 != 0) {
        if ((v5 & v8) == 0) {
          while (1) {
            v12 = *(_QWORD*)(result + 8);
            if (v12 == v4) {
              if (*(unsigned __int8*)(result + 16) == (_DWORD)v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = *(_QWORD*)(result + 8);
          if (v11 == v4) {
            if (*(unsigned __int8*)(result + 16) == (_DWORD)v4) {
              return result;
            }
          }
          else {
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v3) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_22:
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v13 = *a3;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v4;
  v14 = *(float*)(a1 + 32);
  LOBYTE(v13) = *v13;
  *(_DWORD*)(result + 20) = 0;
  *(_BYTE*)(result + 16) = (_BYTE)v13;
  v15 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v5 == 0 || (float)(v14 * (float)v5) < v15) {
    v16 = v15 / v14;
    v17 = true;
    if (v5 >= 3) {
      v17 = (v5 & (v5 - 1)) != 0;
    }
    v18 = v17 | (2 * v5);
    v19 = vcvtps_u64_f32(v16);
    if (v18 <= v19) {
      primeEm = v19;
    }
    else {
      primeEm = v18;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v21 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v21;
      v5 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm > v5) {
      goto LABEL_34;
    }
    if (primeEm < v5) {
      v23 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        v25 = result;
        v23 = std___1___next_prime(v23);
        result = v25;
      }
      else {
        v24 = 1LL << (-(char)__clz(v23 - 1) & 63);
        if (v23 >= 2) {
          v23 = v24;
        }
      }
      if (primeEm <= v23) {
        primeEm = v23;
      }
      if (primeEm < v5) {
      LABEL_34:
        v22 = result;
        GameRoutine_68cdc0((__int64*)a1, primeEm);
        result = v22;
      }
    }
    v5 = *(_QWORD*)(a1 + 8);
    if ((v5 & (v5 - 1)) != 0) {
      if (v5 <= v4) {
        v3 = v4 % v5;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
  }
  v26 = *(_QWORD*)a1;
  v27 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v27 != nullptr) {
    *(_QWORD*)result = *v27;
    *v27 = result;
  }
  else {
    v28 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v28;
    *(_QWORD*)(v26 + 8 * v3) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v29 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v29 >= v5) {
          v29 %= v5;
        }
      }
      else {
        v29 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v29) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

void LegionPool_938ca0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  void* v4;
  bool v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64*** v20;
  __int64** v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  _BYTE* v26;
  int v27;
  __int64* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  _BYTE* v35;
  __int64 v36;
  int v37;
  _BYTE* v38;
  __int64 v39;
  unsigned __int8* v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  int v51;
  struct {
    _QWORD v52[2];
    _QWORD* v53;
    __int64 v54;
    int v55;
  } v52_;
  unsigned __int64* v56;

  v52_.v53 = nullptr;
  v52_.v54 = 0;
  v52_.v52[0] = 0;
  v52_.v52[1] = 0;
  v2 = 0;
  v3 = GameData_212c998_alt1[0];
  v52_.v55 = 1065353216;
  v4 = std___1_piecewise_construct_ptr;
  v51 = 0;
  do {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL * v2) != 0) {
      v6 = **(
          _QWORD**)(*(_QWORD*)(*(_QWORD*)v3 + 64LL) +
                    8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 48) + 8LL * v2));
      v56 = &v50;
      v50 = v6;
      v7 = game_89d820((float*)v52_.v52, &v50, (__int64)v4, (__int64**)&v56);
      GameRoutine_7d6200_alt1(v7 + 3, &v51);
      v2 = v51;
    }
    v5 = v2++ < 299;
    v51 = v2;
  } while (v5);
  v8 = v52_.v53;
  if (v52_.v53 != nullptr) {
    v9 = GameData_212ceb0;
    do {
      v11 = v8[3];
      v10 = v8[4];
      if ((unsigned __int64)(v10 - v11) >= 5) {
        v12 = 0;
        do {
          v13 = *(unsigned int*)(v11 + 4 * v12);
          if ((v13 & 0x80000000) == 0) {
            v14 = *(_QWORD*)(a1 + 48) + 8 * v13;
            if (*(_BYTE*)v14 != 0) {
              if (*(_BYTE*)(v14 + 1) != 0) {
                v15 = game_UnitPool_Get_alt1((_BYTE*)(v14 + 1));
                if (v15 != nullptr && (*(_BYTE*)(a1 + 76) & 1) != 0) {
                  v16 = *(_QWORD*)(a1 + 16);
                  if (v16 != 0 && *(_QWORD*)(a1 + 32) != 0) {
                    v17 = *((unsigned __int8*)v15 + 2088);
                    v18 = v16 - 1;
                    if ((v16 & (v16 - 1)) != 0) {
                      v19 = *((unsigned __int8*)v15 + 2088);
                      if (v16 <= v17) {
                        v19 = (unsigned int)v17 % (unsigned int)v16;
                      }
                    }
                    else {
                      v19 = ((_DWORD)v16 - 1) & (unsigned int)v17;
                    }
                    v20 = *(__int64****)(*(_QWORD*)(a1 + 8) + 8 * v19);
                    if (v20 != nullptr) {
                      v21 = *v20;
                      if (v21 != nullptr) {
                        if ((v16 & v18) == 0) {
                          while (1) {
                            v23 = v21[1];
                            if (v23 == (__int64*)v17) {
                              if (*((unsigned __int8*)v21 + 16) ==
                                  (_DWORD)v17) {
                                goto LABEL_40;
                              }
                            }
                            else if (((unsigned __int64)v23 & v18) != v19) {
                              goto LABEL_79;
                            }
                            v21 = (__int64**)*v21;
                            if (v21 == nullptr) {
                              goto LABEL_79;
                            }
                          }
                        }
                        do {
                          v22 = (unsigned __int64)v21[1];
                          if (v22 == v17) {
                            if (*((unsigned __int8*)v21 + 16) == (_DWORD)v17) {
                            LABEL_40:
                              v24 = *((unsigned int*)v21 + 5);
                              if ((v24 & 0x80000000) == 0) {
                                v25 = *(_QWORD*)(a1 + 48) + 8 * v24;
                                v27 = *(unsigned __int8*)(v25 + 1);
                                v26 = (_BYTE*)(v25 + 1);
                                if (v27 != 0) {
                                  v28 = game_UnitPool_Get_alt1(v26);
                                  if (v28 != nullptr) {
                                    *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8 * v24 +
                                              1) = 0;
                                    v29 = *v9;
                                    if (v28[243] != *v9) {
                                      *((_WORD*)v28 + 972) = v29;
                                      *((_BYTE*)v28 + 1946) = BYTE2(v29);
                                      *(_DWORD*)((char*)v28 + 1947) =
                                          *(_DWORD*)((char*)v9 + 3);
                                      *((_BYTE*)v28 + 1951) = *((_BYTE*)v9 + 7);
                                      v30 = *((_DWORD*)v28 + 104);
                                      if ((v30 & 0x10000000) == 0) {
                                        v31 = (__int64)v28;
                                        *((_DWORD*)v28 + 104) =
                                            v30 | 0x10000000;
                                        game_6c51e0((__int64)v28);
                                        GameRoutine_6c6da0_alt1(v31);
                                        game_6c6ec0(v31);
                                        v28 = (__int64*)v31;
                                        *(_DWORD*)(v31 + 416) &= ~0x10000000u;
                                      }
                                      *((_WORD*)v28 + 10) |= 1u;
                                    }
                                    LOBYTE(v56) = *((_BYTE*)v28 + 2088);
                                    LegionPool_93a920((_QWORD*)(a1 + 8),
                                                      (unsigned __int8*)&v56);
                                    v32 = *(_QWORD*)(a1 + 48);
                                    v33 = 300;
                                    v34 = 0;
                                    *(_DWORD*)(a1 + 72) = 0;
                                    v35 = (_BYTE*)(v32 + 56);
                                    do {
                                      if (*(v35 - 56) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 48) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 40) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 32) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 24) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 16) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 8) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*v35 != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[8] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[16] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[24] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[32] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[40] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[48] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[56] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      v33 -= 15;
                                      v35 += 120;
                                    } while (v33 != 0);
                                  }
                                }
                              }
                              break;
                            }
                          }
                          else {
                            if (v22 >= v16) {
                              v22 %= v16;
                            }
                            if (v22 != v19) {
                              break;
                            }
                          }
                          v21 = (__int64**)*v21;
                        } while (v21 != nullptr);
                      }
                    }
                  }
                }
              }
            LABEL_79:
              *(_QWORD*)v14 = 0;
              v36 = 300;
              v37 = 0;
              *(_DWORD*)(a1 + 72) = 0;
              v38 = (_BYTE*)(*(_QWORD*)(a1 + 48) + 56LL);
              do {
                if (*(v38 - 56) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 48) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 40) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 32) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 24) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 16) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 8) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*v38 != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[8] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[16] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[24] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[32] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[40] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[48] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[56] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                v36 -= 15;
                v38 += 120;
              } while (v36 != 0);
              v11 = v8[3];
              v10 = v8[4];
            }
          }
          ++v12;
        } while (((v10 - v11) >> 2) - 1 > v12);
      }
      v8 = (_QWORD*)*v8;
    } while (v8 != nullptr);
  }
  v39 = *(_QWORD*)(a1 + 48);
  v40 = *(unsigned __int8**)(a1 + 56);
  if ((unsigned __int8*)v39 != v40) {
    LegionPool_9392a0(v39, v40, (2 * __clz((__int64)&v40[-v39] >> 3)) ^ 0x7E,
                      1);
  }
  v41 = v52_.v53;
  v42 = fw_memory_g_heap_manager_ptr;
  if (v52_.v53 != nullptr) {
    do {
      v44 = (_QWORD*)*v41;
      v45 = v41[3];
      if (v45 != 0) {
        v46 = *(_QWORD*)v42;
        v41[4] = v45;
        if (*(_QWORD*)(v46 + 200) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(v46 + v47, v45);
      }
      if (*(_QWORD*)(*(_QWORD*)v42 + 200LL) != 0) {
        v43 = 128;
      }
      else {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v42 + v43, (__int64)v41);
      v41 = v44;
    } while (v44 != nullptr);
  }
  v48 = v52_.v52[0];
  v52_.v52[0] = 0;
  if (v48 != 0) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)v42 + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v42 + v49, v48);
  }
}

__int64 LegionPool_9392a0(__int64 result, unsigned __int8* a2, __int64 a3,
                          char a4)
{
  unsigned __int8* v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int8 v13;
  unsigned __int8 v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned __int8* v21;
  unsigned int v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  unsigned int v25;
  unsigned int v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  bool v35;
  unsigned __int64 v36;
  int v37;
  unsigned int v38;
  unsigned __int64 v39;
  unsigned __int8* v40;
  unsigned int v41;
  unsigned int v42;
  unsigned __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  unsigned __int64 v50;
  unsigned __int8* v51;
  bool v53;
  __int64 v54;
  __int64 v55;
  unsigned __int8* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  signed __int64 v63;
  signed __int64 v64;
  signed __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int8* v68;
  __int64 v69;
  __int64 v70;
  unsigned __int8* v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int8* v75;
  int v76;
  __int64 v77;
  bool v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int8* v81;
  unsigned __int8* v82;
  unsigned int v83;
  unsigned __int8* v84;
  unsigned __int8 v85;
  unsigned __int8* v86;
  __int64 v87;
  unsigned __int64 v88;
  int v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int8* v93;
  unsigned __int64 v94;
  unsigned __int8* v95;
  int v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  char v104;
  int v105;
  char v106;
  int v107;

  v7 = (unsigned __int8*)result;
  v8 = GameData_212c998[0];
  while (2) {
    v9 = (unsigned __int64)v7;
    while (1) {
      while (1) {
        while (1) {
          v7 = (unsigned __int8*)v9;
          v10 = (__int64)&a2[-v9] >> 3;
          if (v10 > 2) {
            switch (v10) {
            case 3LL:
              return (__int64)GameRoutine_939f20(
                  (unsigned __int8*)v9, (unsigned __int8*)(v9 + 8), a2 - 8);
            case 4LL:
              return (__int64)LegionPool_93a150(
                  (unsigned __int8*)v9, (unsigned __int8*)(v9 + 8),
                  (unsigned __int8*)(v9 + 16), a2 - 8);
            case 5LL:
              return LegionPool_93a310((unsigned __int8*)v9,
                                       (unsigned __int8*)(v9 + 8),
                                       (unsigned __int8*)(v9 + 16),
                                       (unsigned __int8*)(v9 + 24), a2 - 8);
            default:
              break;
            }
          }
          else {
            if ((unsigned __int64)v10 < 2) {
              return result;
            }
            if (v10 == 2) {
              if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                   8LL * *(a2 - 8)) +
                                        24LL) +
                             88LL) <
                  *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                   8LL *
                                                       *(unsigned __int8*)v9) +
                                        24LL) +
                             88LL)) {
                if (*(_BYTE*)v9 != 0) {
                  v50 = *(_QWORD*)v9;
                }
                else {
                  v50 = 0;
                }
                *(_WORD*)v9 = *((_WORD*)a2 - 4);
                *(_BYTE*)(v9 + 2) = *(a2 - 6);
                v107 = *(int*)(a2 - 5);
                *(_BYTE*)(v9 + 7) = *(a2 - 1);
                *(int*)(v9 + 3) = v107;
                *((_WORD*)a2 - 4) = v50;
                *(a2 - 6) = BYTE2(v50);
                *(a2 - 1) = HIBYTE(v50);
                *(int*)(a2 - 5) = v50 >> 24;
              }
              return result;
            }
          }
          if (v10 <= 23) {
            v51 = (unsigned __int8*)(v9 + 8);
            v53 = (unsigned __int8*)v9 == a2 || v51 == a2;
            if ((a4 & 1) != 0) {
              if (!v53) {
                v54 = *v8;
                v55 = 0;
                v56 = (unsigned __int8*)v9;
                do {
                  v58 = v56[8];
                  v59 = *v56;
                  v56 = v51;
                  if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v54 + 64) +
                                                       8 * v58) +
                                            24LL) +
                                 88LL) <
                      *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v54 + 64) +
                                                       8 * v59) +
                                            24LL) +
                                 88LL)) {
                    if ((_DWORD)v58 != 0) {
                      v60 = *(_QWORD*)v51;
                    }
                    else {
                      v60 = 0;
                    }
                    v61 = v55;
                    do {
                      v62 = v9 + v61;
                      *(_WORD*)(v62 + 8) = *(_WORD*)(v9 + v61);
                      *(_BYTE*)(v62 + 10) = *(_BYTE*)(v9 + v61 + 2);
                      *(int*)(v62 + 11) = *(int*)(v9 + v61 + 3);
                      *(_BYTE*)(v62 + 15) = *(_BYTE*)(v9 + v61 + 7);
                      if (v61 == 0) {
                        v57 = v9;
                        goto LABEL_89;
                      }
                      v61 -= 8;
                    } while (
                        *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * (unsigned __int8)
                                                                   v60) +
                                              24LL) +
                                   88LL) <
                        *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL *
                                                             *(unsigned __int8*)(v62 -
                                                                                 8)) +
                                              24LL) +
                                   88LL));
                    v57 = v9 + v61 + 8;
                  LABEL_89:
                    *(_WORD*)v57 = v60;
                    *(_BYTE*)(v57 + 2) = BYTE2(v60);
                    *(_BYTE*)(v62 + 7) = HIBYTE(v60);
                    *(int*)(v62 + 3) = v60 >> 24;
                    v54 = *v8;
                  }
                  v51 = v56 + 8;
                  v55 += 8;
                } while (v56 + 8 != a2);
              }
            }
            else if (!v53) {
              v97 = *v8;
              v98 = v9 + 11;
              do {
                v99 = v7[8];
                v100 = *v7;
                v7 = v51;
                if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v97 + 64) +
                                                     8 * v99) +
                                          24LL) +
                               88LL) <
                    *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v97 + 64) +
                                                     8 * v100) +
                                          24LL) +
                               88LL)) {
                  if ((_DWORD)v99 != 0) {
                    v101 = *(_QWORD*)v51;
                  }
                  else {
                    v101 = 0;
                  }
                  v102 = v98;
                  do {
                    v103 = v102;
                    *(_WORD*)(v102 - 3) = *(_WORD*)(v102 - 11);
                    v104 = *(_BYTE*)(v102 - 9);
                    v105 = *(int*)(v102 - 8);
                    v102 -= 8LL;
                    *(_BYTE*)(v103 - 1) = v104;
                    v106 = *(_BYTE*)(v103 - 4);
                    *(int*)v103 = v105;
                    *(_BYTE*)(v103 + 4) = v106;
                  } while (
                      *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                       8LL * (unsigned __int8)
                                                                 v101) +
                                            24LL) +
                                 88LL) <
                      *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                       8LL *
                                                           *(unsigned __int8*)(v103 -
                                                                               19)) +
                                            24LL) +
                                 88LL));
                  *(_WORD*)(v102 - 3) = v101;
                  *(_BYTE*)(v102 - 1) = BYTE2(v101);
                  *(_BYTE*)(v102 + 4) = HIBYTE(v101);
                  *(int*)v102 = v101 >> 24;
                  v97 = *v8;
                }
                v51 = v7 + 8;
                v98 += 8LL;
              } while (v7 + 8 != a2);
            }
            return result;
          }
          if (a3 == 0) {
            if ((unsigned __int8*)v9 != a2) {
              v63 = (unsigned __int64)(v10 - 2) >> 1;
              v64 = v63;
              do {
                v65 = v64;
                if (v63 >= v64) {
                  v66 = (2 * (v64 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                  v67 = 2 * v64 + 2;
                  v68 = (unsigned __int8*)(v9 + 8 * v66);
                  if (v67 >= v10) {
                    LODWORD(v69) = *v68;
                    v70 = *(_QWORD*)(*v8 + 64);
                  }
                  else {
                    v69 = *v68;
                    v70 = *(_QWORD*)(*v8 + 64);
                    result =
                        *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v70 +
                                                               8LL * v68[8]) +
                                                    24LL) +
                                         88LL);
                    if (*(int*)(*(_QWORD*)(*(_QWORD*)(v70 + 8 * v69) +
                                              24LL) +
                                   88LL) < (int)result) {
                      LODWORD(v69) = v68[8];
                      v68 += 8;
                      v66 = 2 * v65 + 2;
                    }
                  }
                  v71 = (unsigned __int8*)(v9 + 8 * v65);
                  if (*(int*)(*(_QWORD*)(*(_QWORD*)(v70 +
                                                       8LL *
                                                           (unsigned int)v69) +
                                            24LL) +
                                 88LL) >=
                      *(int*)(*(_QWORD*)(*(_QWORD*)(v70 + 8LL * *v71) +
                                            24LL) +
                                 88LL)) {
                    if (*v71 != 0) {
                      v72 = *(_QWORD*)v71;
                    }
                    else {
                      v72 = 0;
                    }
                    do {
                      v75 = v68;
                      *(_WORD*)v71 = *(_WORD*)v68;
                      v71[2] = v68[2];
                      v76 = *(int*)(v68 + 3);
                      v71[7] = v75[7];
                      *(int*)(v71 + 3) = v76;
                      if (v63 < v66) {
                        break;
                      }
                      v77 = (2 * v66) | 1;
                      v66 = 2 * v66 + 2;
                      v68 = (unsigned __int8*)(v9 + 8 * v77);
                      if (v66 < v10) {
                        v73 = *v68;
                        v74 = *(_QWORD*)(*v8 + 64);
                        result =
                            *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v74 +
                                                                   8 * v73) +
                                                        24LL) +
                                             88LL);
                        if ((int)result >=
                            *(int*)(*(_QWORD*)(*(_QWORD*)(v74 +
                                                             8LL * v68[8]) +
                                                  24LL) +
                                       88LL)) {
                          v66 = v77;
                        }
                        else {
                          LODWORD(v73) = v68[8];
                          v68 += 8;
                        }
                      }
                      else {
                        LODWORD(v73) = *v68;
                        v74 = *(_QWORD*)(*v8 + 64);
                        v66 = v77;
                      }
                      v71 = v75;
                    } while (
                        *(int*)(*(_QWORD*)(*(_QWORD*)(v74 +
                                                         8LL * (unsigned int)
                                                                   v73) +
                                              24LL) +
                                   88LL) >=
                        *(int*)(*(_QWORD*)(*(_QWORD*)(v74 +
                                                         8LL * (unsigned __int8)
                                                                   v72) +
                                              24LL) +
                                   88LL));
                    *(_WORD*)v75 = v72;
                    v75[2] = BYTE2(v72);
                    *(int*)(v75 + 3) = v72 >> 24;
                    v75[7] = HIBYTE(v72);
                  }
                }
                v64 = v65 - 1;
              } while (v65 != 0);
              do {
                if (*(_BYTE*)v9 != 0) {
                  v79 = *(_QWORD*)v9;
                }
                else {
                  v79 = 0;
                }
                v80 = 0;
                v81 = (unsigned __int8*)v9;
                do {
                  v86 = &v81[8 * v80];
                  v87 = (2 * v80) | 1;
                  v84 = v86 + 8;
                  v80 = 2 * v80 + 2;
                  if (v80 < v10) {
                    v83 = v86[16];
                    v82 = v86 + 16;
                    if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * *(v82 - 8)) +
                                              24LL) +
                                   88LL) >=
                        *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * v83) +
                                              24LL) +
                                   88LL)) {
                      v80 = v87;
                    }
                    else {
                      v84 = v82;
                    }
                  }
                  else {
                    v80 = v87;
                  }
                  *(_WORD*)v81 = *(_WORD*)v84;
                  v81[2] = v84[2];
                  v85 = v84[7];
                  *(int*)(v81 + 3) = *(int*)(v84 + 3);
                  v81[7] = v85;
                  v81 = v84;
                } while (v80 <= (__int64)((unsigned __int64)(v10 - 2) >> 1));
                v88 = v79 >> 24;
                if (v84 == a2 - 8) {
                  *(_WORD*)v84 = v79;
                  v84[2] = BYTE2(v79);
                  v84[7] = HIBYTE(v79);
                  *(int*)(v84 + 3) = v88;
                }
                else {
                  *(_WORD*)v84 = *((_WORD*)a2 - 4);
                  v84[2] = *(a2 - 6);
                  v89 = *(int*)(a2 - 5);
                  v84[7] = *(a2 - 1);
                  *(int*)(v84 + 3) = v89;
                  *((_WORD*)a2 - 4) = v79;
                  *(a2 - 6) = BYTE2(v79);
                  *(a2 - 1) = HIBYTE(v79);
                  *(int*)(a2 - 5) = v88;
                  v90 = (__int64)&v84[-v9 + 8] >> 3;
                  v78 = v90 < 2;
                  v91 = v90 - 2;
                  if (!v78) {
                    v92 = v91 >> 1;
                    v93 = (unsigned __int8*)(v9 + 8 * v92);
                    if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * *v93) +
                                              24LL) +
                                   88LL) <
                        *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * *v84) +
                                              24LL) +
                                   88LL)) {
                      if (*v84 != 0) {
                        v94 = *(_QWORD*)v84;
                      }
                      else {
                        v94 = 0;
                      }
                      do {
                        v95 = v93;
                        *(_WORD*)v84 = *(_WORD*)v93;
                        v84[2] = v93[2];
                        v96 = *(int*)(v93 + 3);
                        v84[7] = v95[7];
                        *(int*)(v84 + 3) = v96;
                        if (v92 == 0) {
                          break;
                        }
                        v92 = (v92 - 1) >> 1;
                        v93 = (unsigned __int8*)(v9 + 8 * v92);
                        v84 = v95;
                      } while (
                          *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 +
                                                                      64) +
                                                           8LL * *v93) +
                                                24LL) +
                                     88LL) <
                          *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 +
                                                                      64) +
                                                           8LL *
                                                               (unsigned __int8)
                                                                   v94) +
                                                24LL) +
                                     88LL));
                      *(_WORD*)v95 = v94;
                      v95[2] = BYTE2(v94);
                      *(int*)(v95 + 3) = v94 >> 24;
                      v95[7] = HIBYTE(v94);
                    }
                  }
                }
                a2 -= 8;
                v78 = (unsigned __int64)v10-- > 2;
              } while (v78);
            }
            return result;
          }
          v11 = v9 + 8 * ((unsigned __int64)v10 >> 1);
          if ((unsigned __int64)v10 < 0x81) {
            result = (__int64)GameRoutine_939f20(
                &v7[8 * ((unsigned __int64)v10 >> 1)], v7, a2 - 8);
          }
          else {
            GameRoutine_939f20(v7, &v7[8 * ((unsigned __int64)v10 >> 1)],
                               a2 - 8);
            GameRoutine_939f20(v7 + 8, (unsigned __int8*)(v11 - 8), a2 - 16);
            GameRoutine_939f20(v7 + 16, (unsigned __int8*)(v11 + 8), a2 - 24);
            result = (__int64)GameRoutine_939f20((unsigned __int8*)(v11 - 8),
                                                 (unsigned __int8*)v11,
                                                 (unsigned __int8*)(v11 + 8));
            v12 = *v7 != 0 ? *(_QWORD*)v7 : 0LL;
            v13 = *(_BYTE*)(v11 + 2);
            *(_WORD*)v7 = *(_WORD*)v11;
            v7[2] = v13;
            v14 = *(_BYTE*)(v11 + 7);
            v15 = *(int*)(v11 + 3);
            *(_WORD*)v11 = v12;
            *(int*)(v7 + 3) = v15;
            v7[7] = v14;
            *(_BYTE*)(v11 + 2) = BYTE2(v12);
            *(_BYTE*)(v11 + 7) = HIBYTE(v12);
            *(int*)(v11 + 3) = v12 >> 24;
          }
          --a3;
          if ((a4 & 1) != 0) {
            break;
          }
          v16 = *(_QWORD*)(*v8 + 64);
          if (*(int*)(*(_QWORD*)(*(_QWORD*)(v16 + 8LL * *(v7 - 8)) + 24LL) +
                         88LL) <
              *(int*)(*(_QWORD*)(*(_QWORD*)(v16 + 8LL * *v7) + 24LL) +
                         88LL)) {
            break;
          }
          if (*v7 != 0) {
            v36 = *(_QWORD*)v7;
          }
          else {
            v36 = 0;
          }
          v37 = *(
              int*)(*(_QWORD*)(*(_QWORD*)(v16 + 8LL * (unsigned __int8)v36) +
                                  24LL) +
                       88LL);
          if (v37 >=
              *(int*)(*(_QWORD*)(*(_QWORD*)(v16 + 8LL * *(a2 - 8)) + 24LL) +
                         88LL)) {
            v39 = (unsigned __int64)(v7 + 8);
            do {
              v9 = v39;
              if (v39 >= (unsigned __int64)a2) {
                break;
              }
              v39 += 8LL;
            } while (
                v37 >=
                *(int*)(*(_QWORD*)(*(_QWORD*)(v16 +
                                                 8LL * *(unsigned __int8*)v9) +
                                      24LL) +
                           88LL));
          }
          else {
            v9 = (unsigned __int64)v7;
            do {
              v38 = *(unsigned __int8*)(v9 + 8);
              v9 += 8LL;
            } while (v37 >=
                     *(int*)(*(_QWORD*)(*(_QWORD*)(v16 + 8LL * v38) + 24LL) +
                                88LL));
          }
          v40 = a2;
          if (v9 < (unsigned __int64)a2) {
            v40 = a2;
            do {
              v41 = *(v40 - 8);
              v40 -= 8;
            } while (v37 <
                     *(int*)(*(_QWORD*)(*(_QWORD*)(v16 + 8LL * v41) + 24LL) +
                                88LL));
          }
          if (v9 < (unsigned __int64)v40) {
            v42 = *(unsigned __int8*)v9;
            do {
              if (v42 != 0) {
                v43 = *(_QWORD*)v9;
              }
              else {
                v43 = 0;
              }
              *(_WORD*)v9 = *(_WORD*)v40;
              *(_BYTE*)(v9 + 2) = v40[2];
              v44 = *(int*)(v40 + 3);
              *(_BYTE*)(v9 + 7) = v40[7];
              *(int*)(v9 + 3) = v44;
              *(_WORD*)v40 = v43;
              v40[2] = BYTE2(v43);
              *(int*)(v40 + 3) = v43 >> 24;
              v40[7] = HIBYTE(v43);
              v45 = *(_QWORD*)(*v8 + 64);
              v46 =
                  *(int*)(*(_QWORD*)(*(_QWORD*)(v45 +
                                                   8LL * (unsigned __int8)v36) +
                                        24LL) +
                             88LL);
              do {
                v47 = *(unsigned __int8*)(v9 + 8);
                v9 += 8LL;
                v42 = v47;
              } while (
                  v46 >=
                  *(int*)(*(_QWORD*)(*(_QWORD*)(v45 + 8LL * v47) + 24LL) +
                             88LL));
              do {
                v48 = *(v40 - 8);
                v40 -= 8;
              } while (v46 < *(int*)(*(_QWORD*)(*(_QWORD*)(v45 + 8LL * v48) +
                                                   24LL) +
                                        88LL));
            } while (v9 < (unsigned __int64)v40);
          }
          if (v7 != (unsigned __int8*)(v9 - 8)) {
            *(_WORD*)v7 = *(_WORD*)(v9 - 8);
            v7[2] = *(_BYTE*)(v9 - 6);
            v49 = *(int*)(v9 - 5);
            v7[7] = *(_BYTE*)(v9 - 1);
            *(int*)(v7 + 3) = v49;
          }
          *(_WORD*)(v9 - 8) = v36;
          a4 = 0;
          *(_BYTE*)(v9 - 6) = BYTE2(v36);
          *(_BYTE*)(v9 - 1) = HIBYTE(v36);
          *(int*)(v9 - 5) = v36 >> 24;
        }
        if (*v7 != 0) {
          v17 = *(_QWORD*)v7;
        }
        else {
          v17 = 0;
        }
        v18 = 0;
        v19 = *(_QWORD*)(*v8 + 64);
        v20 =
            *(int*)(*(_QWORD*)(*(_QWORD*)(v19 + 8LL * (unsigned __int8)v17) +
                                  24LL) +
                       88LL);
        do {
          v21 = &v7[v18];
          v18 += 8;
          v22 = v21[8];
        } while (*(int*)(*(_QWORD*)(*(_QWORD*)(v19 + 8LL * v21[8]) + 24LL) +
                            88LL) < v20);
        v23 = &v7[v18];
        v24 = a2;
        if (v18 == 8) {
          v24 = a2;
          do {
            if (v23 >= v24) {
              break;
            }
            v26 = *(v24 - 8);
            v24 -= 8;
          } while (*(int*)(*(_QWORD*)(*(_QWORD*)(v19 + 8LL * v26) + 24LL) +
                              88LL) >= v20);
        }
        else {
          do {
            v25 = *(v24 - 8);
            v24 -= 8;
          } while (*(int*)(*(_QWORD*)(*(_QWORD*)(v19 + 8LL * v25) + 24LL) +
                              88LL) >= v20);
        }
        v9 = (unsigned __int64)&v7[v18];
        if (v23 < v24) {
          v27 = v24;
          do {
            if (v22 != 0) {
              v28 = *(_QWORD*)v9;
            }
            else {
              v28 = 0;
            }
            *(_WORD*)v9 = *(_WORD*)v27;
            *(_BYTE*)(v9 + 2) = v27[2];
            v29 = *(int*)(v27 + 3);
            *(_BYTE*)(v9 + 7) = v27[7];
            *(int*)(v9 + 3) = v29;
            *(_WORD*)v27 = v28;
            v27[2] = BYTE2(v28);
            *(int*)(v27 + 3) = v28 >> 24;
            v27[7] = HIBYTE(v28);
            v30 = *(_QWORD*)(*v8 + 64);
            v31 = *(int*)(*(_QWORD*)(*(_QWORD*)(v30 +
                                                   8LL * (unsigned __int8)v17) +
                                        24LL) +
                             88LL);
            do {
              v32 = *(unsigned __int8*)(v9 + 8);
              v9 += 8LL;
              v22 = v32;
            } while (*(int*)(*(_QWORD*)(*(_QWORD*)(v30 + 8LL * v32) + 24LL) +
                                88LL) < v31);
            do {
              v33 = *(v27 - 8);
              v27 -= 8;
            } while (*(int*)(*(_QWORD*)(*(_QWORD*)(v30 + 8LL * v33) + 24LL) +
                                88LL) >= v31);
          } while (v9 < (unsigned __int64)v27);
        }
        if (v7 != (unsigned __int8*)(v9 - 8)) {
          *(_WORD*)v7 = *(_WORD*)(v9 - 8);
          v7[2] = *(_BYTE*)(v9 - 6);
          v34 = *(int*)(v9 - 5);
          v7[7] = *(_BYTE*)(v9 - 1);
          *(int*)(v7 + 3) = v34;
        }
        *(_WORD*)(v9 - 8) = v17;
        *(_BYTE*)(v9 - 6) = BYTE2(v17);
        *(_BYTE*)(v9 - 1) = HIBYTE(v17);
        *(int*)(v9 - 5) = v17 >> 24;
        if (v23 >= v24) {
          break;
        }
      LABEL_45:
        result = LegionPool_9392a0((__int64)v7, (unsigned __int8*)(v9 - 8), a3,
                                   a4 & 1);
        a4 = 0;
      }
      v35 = GameRoutine_93a560(v7, (unsigned __int8*)(v9 - 8));
      result = ((__int64 (*)(unsigned __int8*, unsigned __int8*))
                    GameRoutine_93a560)((unsigned __int8*)v9, a2);
      if ((result & 1) != 0) {
        break;
      }
      if (!v35) {
        goto LABEL_45;
      }
    }
    a2 = (unsigned __int8*)(v9 - 8);
    if (!v35) {
      continue;
    }
    return result;
  }
}

unsigned __int8* LegionPool_939f20(unsigned __int8* result, unsigned __int8* a2,
                                   unsigned __int8* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;
  unsigned __int8 v12;
  unsigned __int64 v13;
  int v14;
  int v15;
  int v16;

  v3 = GameData_212c998_alt1[0];
  v4 = *(_QWORD*)(*(_QWORD*)GameData_212c998_alt1[0] + 64LL);
  v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8LL * *a2) + 24LL) + 88LL);
  v6 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8LL * *result) + 24LL) + 88LL);
  v7 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8LL * *a3) + 24LL) + 88LL);
  if (v5 >= v6) {
    if (v7 < v5) {
      v9 = *a2 != 0 ? *(_QWORD*)a2 : 0LL;
      *(_WORD*)a2 = *(_WORD*)a3;
      a2[2] = a3[2];
      v12 = a3[7];
      *(_DWORD*)(a2 + 3) = *(_DWORD*)(a3 + 3);
      a2[7] = v12;
      *(_WORD*)a3 = v9;
      a3[2] = BYTE2(v9);
      *(_DWORD*)(a3 + 3) = v9 >> 24;
      a3[7] = HIBYTE(v9);
      if ((signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 64LL) +
                                             8LL * *a2) +
                                  24LL) +
                       88LL) <
          (signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 64LL) +
                                             8LL * *result) +
                                  24LL) +
                       88LL)) {
        if (*result != 0) {
          v13 = *(_QWORD*)result;
        }
        else {
          v13 = 0;
        }
        *(_WORD*)result = *(_WORD*)a2;
        result[2] = a2[2];
        v15 = *(_DWORD*)(a2 + 3);
        result[7] = a2[7];
        *(_DWORD*)(result + 3) = v15;
        *(_WORD*)a2 = v13;
        a2[2] = BYTE2(v13);
        a2[7] = HIBYTE(v13);
        *(_DWORD*)(a2 + 3) = v13 >> 24;
      }
    }
  }
  else {
    if (v7 < v5) {
      if (*result != 0) {
        v8 = *(_QWORD*)result;
      }
      else {
        v8 = 0;
      }
      *(_WORD*)result = *(_WORD*)a3;
      result[2] = a3[2];
      v11 = *(_DWORD*)(a3 + 3);
      result[7] = a3[7];
      *(_DWORD*)(result + 3) = v11;
    LABEL_24:
      *(_WORD*)a3 = v8;
      a3[2] = BYTE2(v8);
      a3[7] = HIBYTE(v8);
      *(_DWORD*)(a3 + 3) = v8 >> 24;
      return result;
    }
    if (*result != 0) {
      v10 = *(_QWORD*)result;
    }
    else {
      v10 = 0;
    }
    *(_WORD*)result = *(_WORD*)a2;
    result[2] = a2[2];
    v14 = *(_DWORD*)(a2 + 3);
    result[7] = a2[7];
    *(_DWORD*)(result + 3) = v14;
    a2[2] = BYTE2(v10);
    *(_WORD*)a2 = v10;
    *(_DWORD*)(a2 + 3) = v10 >> 24;
    a2[7] = HIBYTE(v10);
    if ((signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 64LL) +
                                           8LL * *a3) +
                                24LL) +
                     88LL) <
        (signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 64LL) +
                                           8LL * (unsigned __int8)v10) +
                                24LL) +
                     88LL)) {
      if ((_BYTE)v10 != 0) {
        v8 = *(_QWORD*)a2;
      }
      else {
        v8 = 0;
      }
      *(_WORD*)a2 = *(_WORD*)a3;
      a2[2] = a3[2];
      v16 = *(_DWORD*)(a3 + 3);
      a2[7] = a3[7];
      *(_DWORD*)(a2 + 3) = v16;
      goto LABEL_24;
    }
  }
  return result;
}

unsigned __int8* LegionPool_93a150(unsigned __int8* a1, unsigned __int8* a2,
                                   unsigned __int8* a3, unsigned __int8* a4)
{
  unsigned __int8* result;
  __int64* v9;
  unsigned __int64 v10;
  unsigned __int8 v11;
  unsigned __int64 v12;
  unsigned __int8 v13;
  unsigned __int64 v14;
  int v15;

  result = GameRoutine_939f20(a1, a2, a3);
  v9 = GameData_212c998[0];
  if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                       8LL * *a4) +
                            24LL) +
                 88LL) <
      *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                       8LL * *a3) +
                            24LL) +
                 88LL)) {
    v10 = *a3 != 0 ? *(_QWORD*)a3 : 0LL;
    *(_WORD*)a3 = *(_WORD*)a4;
    a3[2] = a4[2];
    v11 = a4[7];
    *(int*)(a3 + 3) = *(int*)(a4 + 3);
    a3[7] = v11;
    *(_WORD*)a4 = v10;
    a4[2] = BYTE2(v10);
    *(int*)(a4 + 3) = v10 >> 24;
    a4[7] = HIBYTE(v10);
    if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * *a3) +
                              24LL) +
                   88LL) <
        *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * *a2) +
                              24LL) +
                   88LL)) {
      v12 = *a2 != 0 ? *(_QWORD*)a2 : 0LL;
      *(_WORD*)a2 = *(_WORD*)a3;
      a2[2] = a3[2];
      v13 = a3[7];
      *(int*)(a2 + 3) = *(int*)(a3 + 3);
      a2[7] = v13;
      *(_WORD*)a3 = v12;
      a3[2] = BYTE2(v12);
      *(int*)(a3 + 3) = v12 >> 24;
      a3[7] = HIBYTE(v12);
      if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * *a2) +
                                24LL) +
                     88LL) <
          *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * *a1) +
                                24LL) +
                     88LL)) {
        if (*a1 != 0) {
          v14 = *(_QWORD*)a1;
        }
        else {
          v14 = 0;
        }
        *(_WORD*)a1 = *(_WORD*)a2;
        a1[2] = a2[2];
        v15 = *(int*)(a2 + 3);
        a1[7] = a2[7];
        *(int*)(a1 + 3) = v15;
        *(_WORD*)a2 = v14;
        a2[2] = BYTE2(v14);
        a2[7] = HIBYTE(v14);
        *(int*)(a2 + 3) = v14 >> 24;
      }
    }
  }
  return result;
}

bool LegionPool_93a560(unsigned __int8* a1, unsigned __int8* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int8* v4;
  unsigned __int8* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  __int64 v15;
  int v17;

  v2 = (a2 - a1) >> 3;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      LegionPool_939f20(a1, a1 + 8, a2 - 8);
      return true;
    case 4LL:
      LegionPool_93a150(a1, a1 + 8, a1 + 16, a2 - 8);
      return true;
    case 5LL:
      LegionPool_93a310_alt1(a1, a1 + 8, a1 + 16, a1 + 24, a2 - 8);
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      if ((signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            GameData_212c998_alt1
                                                                [0] +
                                                        64LL) +
                                             8LL * *(a2 - 8)) +
                                  24LL) +
                       88LL) <
          (signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            GameData_212c998_alt1
                                                                [0] +
                                                        64LL) +
                                             8LL * *a1) +
                                  24LL) +
                       88LL)) {
        if (*a1 != 0) {
          v3 = *(_QWORD*)a1;
        }
        else {
          v3 = 0;
        }
        *(_WORD*)a1 = *((_WORD*)a2 - 4);
        a1[2] = *(a2 - 6);
        v17 = *(_DWORD*)(a2 - 5);
        a1[7] = *(a2 - 1);
        *(_DWORD*)(a1 + 3) = v17;
        *((_WORD*)a2 - 4) = v3;
        *(a2 - 6) = BYTE2(v3);
        *(a2 - 1) = HIBYTE(v3);
        *(_DWORD*)(a2 - 5) = v3 >> 24;
      }
      return true;
    }
  }
  v4 = a1 + 16;
  LegionPool_939f20(a1, a1 + 8, a1 + 16);
  v7 = a1 + 24;
  if (a1 + 24 != a2) {
    v8 = 0;
    v9 = 0;
    v10 = GameData_212c998_alt1[0];
    v11 = *(_QWORD*)GameData_212c998_alt1[0];
    do {
      if ((signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * *v7) +
                                  24LL) +
                       88LL) <
          (signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * *v4) +
                                  24LL) +
                       88LL)) {
        if (*v7 != 0) {
          v12 = *(_QWORD*)v7;
        }
        else {
          v12 = 0;
        }
        v13 = v8;
        while (1) {
          v14 = &a1[v13];
          *((_WORD*)v14 + 12) = *(_WORD*)&a1[v13 + 16];
          v14[26] = a1[v13 + 18];
          *(_DWORD*)(v14 + 27) = *(_DWORD*)&a1[v13 + 19];
          v14[31] = a1[v13 + 23];
          if (v13 == -16) {
            break;
          }
          v13 -= 8;
          if ((signed __int32)*(
                  _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 +
                                                            64LL) +
                                                 8LL * (unsigned __int8)v12) +
                                      24LL) +
                           88LL) >=
              (signed __int32)*(
                  _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 +
                                                            64LL) +
                                                 8LL * v14[8]) +
                                      24LL) +
                           88LL)) {
            v15 = (__int64)&a1[v13 + 24];
            goto LABEL_24;
          }
        }
        v15 = (__int64)a1;
      LABEL_24:
        *(_WORD*)v15 = v12;
        ++v9;
        *(_BYTE*)(v15 + 2) = BYTE2(v12);
        v14[23] = HIBYTE(v12);
        *(_DWORD*)(v14 + 19) = v12 >> 24;
        if (v9 == 8) {
          return v7 + 8 == a2;
        }
        v11 = *(_QWORD*)v10;
      }
      v4 = v7;
      v7 += 8;
      v8 += 8;
    } while (v7 != a2);
  }
  return true;
}

__int64 game_LegionPool_List_Impl_EachData_closure_Invoke(__int64 a1,
                                                          unsigned int* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  if (v3 == 0) {
    GameRoutine_60a310((unsigned __int8)v3, a2);
  }
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 48LL) + 8 * v4;
  if ((int)v4 >= 0) {
    v6 = (__int64*)v5;
  }
  else {
    v6 = GameData_212ceb0;
  }
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, v6);
}

__int64 LegionPool_93a920(_QWORD* a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64*** v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[5];

  v4 = a1[1];
  if (v4 == 0 || a1[3] == 0) {
    return 0;
  }
  v7 = *a2;
  v8 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v9 = *a2;
    if (v4 <= v7) {
      v9 = (unsigned int)v7 % (unsigned int)v4;
    }
  }
  else {
    v9 = ((_DWORD)v4 - 1) & (unsigned int)v7;
  }
  v16[3] = v2;
  v16[4] = v3;
  v10 = *(__int64****)(*a1 + 8 * v9);
  if (v10 == nullptr) {
    return 0;
  }
  v11 = *v10;
  if (*v10 == nullptr) {
    return 0;
  }
  if ((v4 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == (__int64*)v7) {
        if (*((unsigned __int8*)v11 + 16) == (_DWORD)v7) {
          goto LABEL_28;
        }
      }
      else if (((unsigned __int64)v13 & v8) != v9) {
        return 0;
      }
      v11 = (__int64**)*v11;
      if (v11 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v12 = (unsigned __int64)v11[1];
    if (v12 == v7) {
      break;
    }
    if (v12 >= v4) {
      v12 %= v4;
    }
    if (v12 != v9) {
      return 0;
    }
  LABEL_16:
    v11 = (__int64**)*v11;
    if (v11 == nullptr) {
      return 0;
    }
  }
  if (*((unsigned __int8*)v11 + 16) != (_DWORD)v7) {
    goto LABEL_16;
  }
LABEL_28:
  *(struct PseudoSret*)(v16) = GameRoutine_93aa60();
  v14 = v16[0];
  v16[0] = 0;
  if (v14 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
  }
  return 1;
}

__int64 LegionPool_Impl_Destructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  *a1 = game_LegionPool_List_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  *(a1 - 1) = GameData_212d6d0 + 2;
  v4 = a1 - 1;
  return GameRoutine_876a40(&GameData_21eea40, &v4);
}

void LegionPool_Impl_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_LegionPool_List_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  *(a1 - 1) = GameData_212d6d0 + 2;
  v3 = (__int64)(a1 - 1);
  v5 = v3;
  GameHr_876a40(&GameData_21eea40, &v5);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
}

void game_LegionPool_GetVariety_lambda0_Invoke(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998_alt1[0] + 64LL) +
                  8LL * *a2);
  if (v2 == 0) {
    return;
  }
  v3 = *(__int64**)(a1 + 8);
  v4 = *v3;
  v5 = (_QWORD*)v3[1];
  v6 = (_QWORD*)*v3;
  if ((_QWORD*)*v3 == v5) {
    goto LABEL_18;
  }
  v7 = (unsigned __int64)v5 - v4 - 8;
  v6 = (_QWORD*)*v3;
  if ((~(_BYTE)v7 & 0x18) != 0) {
    v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
    v6 = (_QWORD*)*v3;
    while (*v6 != v2) {
      ++v6;
      if (--v8 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v6 != v5) {
      return;
    }
    goto LABEL_19;
  }
LABEL_7:
  if (v7 >= 0x18) {
    v6 += 2;
    while (1) {
      if (*(v6 - 2) == v2) {
        if (v6 - 2 != v5) {
          return;
        }
        goto LABEL_19;
      }
      if (*(v6 - 1) == v2) {
        --v6;
        goto LABEL_18;
      }
      if (*v6 == v2) {
        goto LABEL_18;
      }
      if (v6[1] == v2) {
        break;
      }
      v9 = v6 + 2;
      v6 += 4;
      if (v9 == v5) {
        goto LABEL_19;
      }
    }
    if (v6 + 1 != v5) {
      return;
    }
  }
LABEL_19:
  v10 = v3[2];
  if ((unsigned __int64)v5 >= v10) {
    v12 = (char*)v5 - v4;
    v13 = ((__int64)v5 - v4) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_6f93f0_alt1();
    }
    v15 = v10 - v4;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v18 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v17;
    v20 = (unsigned __int64)v5 - v4;
    v21 = (__int64)&v12[v18 + -8 * v13];
    *(_QWORD*)&v12[v18] = v2;
    v11 = (__int64)&v12[v18 + 8];
    memcpy_alt1(v21, v4, v20);
    *v3 = v21;
    v3[1] = v11;
    v3[2] = v19;
    if (v4 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v22, v4);
    }
  }
  else {
    *v5 = v2;
    v11 = (__int64)(v5 + 1);
  }
  v3[1] = v11;
}

#pragma GCC visibility pop
