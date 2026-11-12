#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1211bc0(_QWORD);
__int64 GameRoutine_94cee0(void);
__int64 GameRoutine_94d260(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_21f4328;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c790;
extern int GameData_21f4320;
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_688200(void);
__int64 FacilityUnitList_145dfc0(__int64* a1);
bool game_facility_FacilityUnitList_BuildEducate_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2);
bool game_facility_FacilityUnitList_GetInstructionPersonCount_lambda0_Invoke(
    __int64 a1, __int64 a2);
__int64 FacilityUnitList_1460260(__int64 a1, __int64 a2);
__int64 FacilityUnitList_1460e60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1461340(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_15b7370(_QWORD);
__int64 GameRoutine_19f0540(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
bool GameRoutine_145c270(__int64, __int64);
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64
game_facility_FacilityUnitList_GetEnableCount_closure_Invoke(__int64 result,
                                                             _QWORD* a2);
__int64 FacilityUnitList_145e2c0(__int64 result, __int64 a2, char a3);
__int64 FacilityUnitList_145e440(__int64 result, __int64 a2, char a3);
__int64 FacilityUnitList_145e5c0(__int64*** a1, __int64 a2, char a3);
__int64 FacilityUnitList_145e820(__int64*** a1, __int64 a2, char a3);
__int64
game_facility_FacilityUnitList_BuildClassExaminer_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2);
__int64 FacilityUnitList_1460900(__int64 result, __int64* a2,
                                 unsigned __int64 a3, __int64* a4,
                                 signed __int64 a5);
_QWORD* GameRoutine_145f5d0(_QWORD* result, _QWORD*);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_145d8a0(__int64*);
__int64 UnitSkillList_84ddc0(__int64 result, _WORD*, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__n128 GameRoutine_145f010(__int64**, __int64);
__n128 GameRoutine_145f4b0(_QWORD*, _QWORD*);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt2() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a90b0d;
extern __int64 (*GameData_1f91668[])();
extern __int64 (*GameData_1faf9f8[])();
extern __int64 (*GameData_203fbb0[])();
extern __int64 (*GameData_203fc80[])();
extern __int64 GameData_21c99c8;
unsigned __int64 GameReliance_8e15e0(unsigned __int64 result, __int64);
void FacilityUnitList_145dfc0_alt1(__int64*) __asm__(
    "FacilityUnitList_145dfc0");
void FacilityUnitList_145e2c0_alt1(__int64**, __int64,
                                   char) __asm__("FacilityUnitList_145e2c0");
void __attribute__((noreturn)) GameRoutine_145f710();
__n128
FacilityUnitList_145d420_alt1(__int64 a1,
                              __int64 a2) __asm__("FacilityUnitList_145d420");
void game_facility_FacilityUnitList_RebuildLink_alt1(__int64** a1) __asm__(
    "game_facility_FacilityUnitList_RebuildLink");
__attribute__((swiftcall)) void
FacilityUnitList_145eea0(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
bool game_facility_FacilityUnitList_BuildPerch_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 game_facility_FacilityUnitList_BuildThermae_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2);
__int64 game_facility_FacilityUnitList_BuildStable_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2);
bool game_facility_FacilityUnitList_BuildReinforce_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2);
void FacilityUnitList_1461340(__int64* a1, __int64* a2, __int64* a3, __int64 a4,
                              __int64 a5, _QWORD* a6, __int64 a7);
_QWORD* GameRoutine_145f4b0_alt1(_QWORD* result,
                                 _QWORD*) __asm__("GameRoutine_145f4b0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameHr_145f010(__int64*, __int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void FacilityUnitList_145d420(__int64 a1, __int64 a2);
__int64 game_facility_FacilityUnitList_RebuildLink(__int64** a1);
__int64

game_facility_FacilityUnitList_GetEnableCount_closure_Invoke(__int64 result,
                                                             _QWORD* a2)
{
  __int64 v2;

  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  ++**(_DWORD**)(result + 8);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

void FacilityUnitList_145d420(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22[3];
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;

  *(_BYTE*)(a1 + 32) = 0;
  v23_.v24 = nullptr;
  GameRoutine_145f5d0(v23_.v23, (_QWORD*)(a1 + 48));
  if (v23_.v24 == v23_.v23) {
    v4 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v4))((__int64)v23_.v24);
LABEL_6:
  v5 = *(_QWORD*)a1;
  v6 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)a1 != v6) {
    do {
      v7 = *(_QWORD*)(v6 - 8);
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt3(v7);
      }
      v6 -= 16;
    } while (v6 != v5);
  }
  *(_QWORD*)(a1 + 8) = v5;
  *(_BYTE*)(a1 + 32) = *(_BYTE*)a2;
  v8 = *(_QWORD*)(a2 + 48);
  if (v8 != 0) {
    if (v8 == a2 + 16) {
      v23_.v24 = v23_.v23;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v8 + 24LL))(v8, v23_.v23);
    }
    else {
      v23_.v24 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    }
  }
  else {
    v23_.v24 = nullptr;
  }
  GameRoutine_145f5d0(v23_.v23, (_QWORD*)(a1 + 48));
  if (v23_.v24 == v23_.v23) {
    v9 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_22;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v9))((__int64)v23_.v24);
LABEL_22:
  FacilityUnitList_145dfc0_alt1(v22);
  v10 = v22[0];
  v11 = v22[1];
  v12 = *(_QWORD*)a1;
  v13 = fw_memory_g_heap_manager_ptr;
  v14 = (v22[1] - v22[0]) >> 3;
  if (v14 > (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 4) {
    if (v14 >> 60 != 0) {
      GameRoutine_145f710();
    }
    v15 = *(_QWORD*)(a1 + 8) - v12;
    v16 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 2 * (v22[1] - v22[0]), 16, 0);
    memcpy_alt1(v16, v12, v15);
    *(_QWORD*)a1 = v16;
    *(_QWORD*)(a1 + 8) = v16 + v15;
    *(_QWORD*)(a1 + 16) = v16 + 16 * v14;
    if (v12 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v17, v12);
    }
  }
  if (v10 != v11) {
    v18 = (__int64*)v10;
    do {
      v19 = *v18++;
      GameHr_145f010((__int64*)a1, v19);
    } while (v18 != (__int64*)v11);
  }
  v23_.v23[0] = GameData_203fbb0;
  v23_.v23[1] = a1;
  v23_.v24 = v23_.v23;
  FacilityUnitList_145e2c0(a1, (__int64)v23_.v23, 0);
  if (v23_.v24 == v23_.v23) {
    v20 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_36;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v20))((__int64)v23_.v24);
LABEL_36:
  GameRoutine_145d8a0((__int64*)a1);
  if (v10 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v21, v10);
  }
}

__int64 FacilityUnitList_145dfc0(__int64* a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;
  unsigned int v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4328) != 0) {
    GameData_21f4320 = 81;
    __cxa_guard_release(&GameData_21f4328);
  }
  result = game_UnitPool_GetFirst(&GameData_21f4320);
  v3 = (_QWORD*)result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21f4328);
    if ((_DWORD)result != 0) {
      GameData_21f4320 = 81;
      result = __cxa_guard_release(&GameData_21f4328);
    }
  }
  if (v3 != nullptr) {
    v4 = v3[54];
    if (v4 == 0) {
      v4 = v3[55];
      if (v4 != 0) {
        v5 = *(unsigned __int8*)(v4 + 16);
        if (v5 <= 8) {
          while (1) {
            v21 = v5 + 1;
            if ((((unsigned int)GameData_21f4320 >> v5) & 2) != 0) {
              v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v5 + 1) + 556000);
              if (v4 != 0) {
                break;
              }
            }
            v5 = v21;
            if (v21 == 9) {
              goto LABEL_7;
            }
          }
        }
        else {
        LABEL_7:
          v4 = 0;
        }
      }
    }
    v6 = nullptr;
    while (1) {
    LABEL_10:
      v7 = v3[49];
      v3 = (_QWORD*)v4;
      if (v7 != 0) {
        v8 = a1[2];
        if ((unsigned __int64)v6 >= v8) {
          v9 = *a1;
          v10 = (__int64)v6 - *a1;
          v11 = (v10 >> 3) + 1;
          if (v11 >> 61 != 0) {
            GameRoutine_688200();
          }
          v12 = v8 - v9;
          if (v12 >> 2 > v11) {
            v11 = v12 >> 2;
          }
          if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
            v13 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v13 = v11;
          }
          if (v13 != 0) {
            if (v13 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v14 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
          }
          else {
            v14 = 0;
          }
          v15 = v14 + 8 * v13;
          v16 = v14 + v10 - 8 * (v10 >> 3);
          *(_QWORD*)(v14 + v10) = v7;
          v6 = (_QWORD*)(v14 + v10 + 8);
          result = memcpy(v16, v9, v10);
          *a1 = v16;
          a1[2] = v15;
          if (v9 != 0) {
            v17 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v17 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v9);
          }
        }
        else {
          *v6++ = v7;
        }
        a1[1] = (__int64)v6;
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                                memory_order_acquire) &
           1) == 0) {
        result = __cxa_guard_acquire(&GameData_21f4328);
        if ((_DWORD)result != 0) {
          GameData_21f4320 = 81;
          result = __cxa_guard_release(&GameData_21f4328);
        }
      }
      if (v3 == nullptr) {
        break;
      }
      v4 = v3[54];
      if (v4 == 0) {
        v18 = v3[55];
        if (v18 != 0) {
          v19 = *(unsigned __int8*)(v18 + 16);
          v4 = 0;
          if (v19 <= 8) {
            while (1) {
              v20 = v19 + 1;
              if ((((unsigned int)GameData_21f4320 >> v19) & 2) != 0) {
                v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v19 + 1) + 556000);
                if (v4 != 0) {
                  break;
                }
              }
              ++v19;
              if (v20 == 9) {
                v4 = 0;
                goto LABEL_10;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 FacilityUnitList_145e2c0(__int64 result, __int64 a2, char a3)
{
  __int64* v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_QWORD*)(a2 + 32) != 0) {
    v3 = *(__int64**)result;
    v4 = *(__int64**)(result + 8);
    if (*(__int64**)result != v4) {
      do {
        v7 = *v3;
        v8 = v3[1];
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v7 == 0) {
          goto LABEL_13;
        }
        if (a3 != 0) {
          if (a3 != 2) {
            if (a3 == 1) {
              v9 = (*(_WORD*)(v7 + 48) & 0x20) == 0;
              if (v8 == 0) {
                goto LABEL_19;
              }
              goto LABEL_18;
            }
          LABEL_13:
            v9 = false;
            if (v8 == 0) {
              goto LABEL_19;
            }
            goto LABEL_18;
          }
          v9 = (*(_WORD*)(v7 + 48) & 0x3F) == 0;
          if (v8 == 0) {
            goto LABEL_19;
          }
        }
        else {
          v9 = true;
          if (v8 == 0) {
            goto LABEL_19;
          }
        }
      LABEL_18:
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
        LABEL_19:
          if (v9) {
            goto LABEL_20;
          }
          goto LABEL_4;
        }
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        result = std___1___shared_weak_count___release_weak_alt1();
        if (v9) {
        LABEL_20:
          v13 = *v3;
          v10 = v3[1];
          v14 = v10;
          if (v10 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                      memory_order_relaxed);
          }
          v11 = *(_QWORD*)(a2 + 32);
          if (v11 == 0) {
            GameRoutine_60a310(0);
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
              v11, &v13);
          v12 = v14;
          if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            result = std___1___shared_weak_count___release_weak_alt1();
          }
        }
      LABEL_4:
        v3 += 2;
      } while (v3 != v4);
    }
  }
  return result;
}

__int64 FacilityUnitList_145e440(__int64 result, __int64 a2, char a3)
{
  __int64* v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_QWORD*)(a2 + 32) != 0) {
    v3 = *(__int64**)result;
    v4 = *(__int64**)(result + 8);
    if (*(__int64**)result != v4) {
      do {
        v7 = *v3;
        v8 = v3[1];
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v7 == 0) {
          goto LABEL_13;
        }
        if (a3 != 0) {
          if (a3 != 2) {
            if (a3 == 1) {
              v9 = (*(_WORD*)(v7 + 48) & 0x20) == 0;
              if (v8 == 0) {
                goto LABEL_19;
              }
              goto LABEL_18;
            }
          LABEL_13:
            v9 = false;
            if (v8 == 0) {
              goto LABEL_19;
            }
            goto LABEL_18;
          }
          v9 = (*(_WORD*)(v7 + 48) & 0x3F) == 0;
          if (v8 == 0) {
            goto LABEL_19;
          }
        }
        else {
          v9 = true;
          if (v8 == 0) {
            goto LABEL_19;
          }
        }
      LABEL_18:
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
        LABEL_19:
          if (v9) {
            goto LABEL_20;
          }
          goto LABEL_4;
        }
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        result = std___1___shared_weak_count___release_weak_alt1();
        if (v9) {
        LABEL_20:
          v13 = *v3;
          v10 = v3[1];
          v14 = v10;
          if (v10 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                      memory_order_relaxed);
          }
          v11 = *(_QWORD*)(a2 + 32);
          if (v11 == 0) {
            GameRoutine_60a310(0);
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
              v11, &v13);
          v12 = v14;
          if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            result = std___1___shared_weak_count___release_weak_alt1();
          }
        }
      LABEL_4:
        v3 += 2;
      } while (v3 != v4);
    }
  }
  return result;
}

__int64 FacilityUnitList_145e5c0(__int64*** a1, __int64 a2, char a3)
{
  __int64** v3;
  __int64** v4;
  __int64* v7;
  __int64* v8;
  __int64 result;
  __int64* v10;
  __int64 v11;
  int v13;
  _BOOL4 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *a1;
  v4 = a1[1];
  if ((int)((unsigned __int64)((char*)v4 - (char*)*a1) >> 4) < 1 || a2 == 0 ||
      v3 == v4) {
    return a2;
  }
  while (1) {
    v7 = *v3;
    if (**v3 == a2) {
      break;
    }
    v3 += 2;
    if (v3 == v4) {
      return a2;
    }
  }
  v8 = v3[1];
  if (v8 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 1), 1u,
                              memory_order_relaxed);
  }
  result = v7[3];
  if (result == 0 || (result = std___1___shared_weak_count_lock(result)) == 0) {
    v13 = 1;
    goto LABEL_49;
  }
  v10 = (__int64*)v7[2];
  v11 = result;
  if (v10 == nullptr || v10 == v7) {
    v13 = 1;
    goto LABEL_47;
  }
  while (1) {
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    if (a3 != 0) {
      if (a3 == 2) {
        v14 = (v10[6] & 0x3F) == 0;
        if (v11 == 0) {
          goto LABEL_32;
        }
      }
      else if (a3 == 1) {
        v14 = (v10[6] & 0x20) == 0;
        if (v11 == 0) {
          goto LABEL_32;
        }
      }
      else {
        v14 = false;
        if (v11 == 0) {
          goto LABEL_32;
        }
      }
    }
    else {
      v14 = true;
      if (v11 == 0) {
        goto LABEL_32;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1();
    }
  LABEL_32:
    if (v14) {
      break;
    }
    result = v10[3];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      v15 = result;
      if (result != 0) {
        v10 = (__int64*)v10[2];
        if (v11 != 0) {
          goto LABEL_40;
        }
      }
      else {
        v10 = nullptr;
        if (v11 != 0) {
        LABEL_40:
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            result = std___1___shared_weak_count___release_weak_alt1();
          }
        }
      }
    }
    else {
      v10 = nullptr;
      v15 = 0;
      if (v11 != 0) {
        goto LABEL_40;
      }
    }
    if (v10 != nullptr) {
      v11 = v15;
      if (v10 != v7) {
        continue;
      }
    }
    goto LABEL_46;
  }
  result = *v10;
  v15 = v11;
LABEL_46:
  v13 = !v14;
  v11 = v15;
  if (v15 != 0) {
  LABEL_47:
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v16 = result;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1();
      result = v16;
    }
  }
LABEL_49:
  if (v8 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v8 + 1),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = result;
    (*(void (**)(__int64*))(*v8 + 16))(v8);
    std___1___shared_weak_count___release_weak_alt1();
    result = v17;
  }
  if (v13 != 0) {
    return a2;
  }
  return result;
}

__int64 FacilityUnitList_145e820(__int64*** a1, __int64 a2, char a3)
{
  __int64** v3;
  __int64** v4;
  __int64* v7;
  __int64* v8;
  __int64 result;
  __int64* v10;
  __int64 v11;
  int v13;
  _BOOL4 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *a1;
  v4 = a1[1];
  if ((int)((unsigned __int64)((char*)v4 - (char*)*a1) >> 4) < 1 || a2 == 0 ||
      v3 == v4) {
    return a2;
  }
  while (1) {
    v7 = *v3;
    if (**v3 == a2) {
      break;
    }
    v3 += 2;
    if (v3 == v4) {
      return a2;
    }
  }
  v8 = v3[1];
  if (v8 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 1), 1u,
                              memory_order_relaxed);
  }
  result = v7[5];
  if (result == 0 || (result = std___1___shared_weak_count_lock(result)) == 0) {
    v13 = 1;
    goto LABEL_49;
  }
  v10 = (__int64*)v7[4];
  v11 = result;
  if (v10 == nullptr || v10 == v7) {
    v13 = 1;
    goto LABEL_47;
  }
  while (1) {
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    if (a3 != 0) {
      if (a3 == 2) {
        v14 = (v10[6] & 0x3F) == 0;
        if (v11 == 0) {
          goto LABEL_32;
        }
      }
      else if (a3 == 1) {
        v14 = (v10[6] & 0x20) == 0;
        if (v11 == 0) {
          goto LABEL_32;
        }
      }
      else {
        v14 = false;
        if (v11 == 0) {
          goto LABEL_32;
        }
      }
    }
    else {
      v14 = true;
      if (v11 == 0) {
        goto LABEL_32;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1();
    }
  LABEL_32:
    if (v14) {
      break;
    }
    result = v10[5];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      v15 = result;
      if (result != 0) {
        v10 = (__int64*)v10[4];
        if (v11 != 0) {
          goto LABEL_40;
        }
      }
      else {
        v10 = nullptr;
        if (v11 != 0) {
        LABEL_40:
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            result = std___1___shared_weak_count___release_weak_alt1();
          }
        }
      }
    }
    else {
      v10 = nullptr;
      v15 = 0;
      if (v11 != 0) {
        goto LABEL_40;
      }
    }
    if (v10 != nullptr) {
      v11 = v15;
      if (v10 != v7) {
        continue;
      }
    }
    goto LABEL_46;
  }
  result = *v10;
  v15 = v11;
LABEL_46:
  v13 = !v14;
  v11 = v15;
  if (v15 != 0) {
  LABEL_47:
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v16 = result;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1();
      result = v16;
    }
  }
LABEL_49:
  if (v8 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v8 + 1),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = result;
    (*(void (**)(__int64*))(*v8 + 16))(v8);
    std___1___shared_weak_count___release_weak_alt1();
    result = v17;
  }
  if (v13 != 0) {
    return a2;
  }
  return result;
}

__int64 game_facility_FacilityUnitList_RebuildLink(__int64** a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];
  _QWORD v15[2];
  _QWORD v16[2];
  _QWORD v17[2];
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;

  v18_.v18[0] = GameData_203fc80;
  v18_.v19 = v18_.v18;
  FacilityUnitList_145e2c0((__int64)a1, (__int64)v18_.v18, 0);
  result = (__int64)v18_.v19;
  if (v18_.v19 == v18_.v18) {
    v3 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v18_.v19 + v3))((__int64)v18_.v19);
LABEL_6:
  v5 = *a1;
  v4 = a1[1];
  if (*a1 != v4) {
    v6 = v5 + 2;
    while ((int)((unsigned __int64)((char*)v4 - (char*)*a1) >> 4) >= 1) {
      v8 = *(v4 - 2);
      v7 = *(v4 - 1);
      if (v7 == 0) {
        goto LABEL_21;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      v9 = *v5;
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v9 != v8) {
          goto LABEL_22;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt3(v7);
        if (v9 != v8) {
        LABEL_22:
          v10 = v5[1];
          v15[0] = *v5;
          v15[1] = v10;
          if (v10 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                      memory_order_relaxed);
          }
          v13 = v6[1];
          v14[0] = *v6;
          v14[1] = v13;
          if (v13 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                      memory_order_relaxed);
            result = (__int64)GameRoutine_145f4b0_alt1(v15, v14);
            if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
              result = std___1___shared_weak_count___release_weak_alt3(v13);
            }
          }
          else {
            result = (__int64)GameRoutine_145f4b0_alt1(v15, v14);
          }
        LABEL_28:
          if (v10 != 0) {
            goto LABEL_34;
          }
          goto LABEL_8;
        }
      }
    LABEL_13:
      v10 = v5[1];
      v17[0] = *v5;
      v17[1] = v10;
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
      }
      v11 = *a1;
      if ((int)((unsigned __int64)((char*)a1[1] - (char*)*a1) >> 4) < 1) {
        v16[0] = 0;
        v16[1] = 0;
      }
      else {
        v12 = v11[1];
        v16[0] = *v11;
        v16[1] = v12;
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          result = (__int64)GameRoutine_145f4b0_alt1(v17, v16);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            result = std___1___shared_weak_count___release_weak_alt3(v12);
            if (v10 != 0) {
              goto LABEL_34;
            }
            goto LABEL_8;
          }
          goto LABEL_28;
        }
      }
      result = (__int64)GameRoutine_145f4b0_alt1(v17, v16);
      if (v10 != 0) {
      LABEL_34:
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak_alt3(v10);
        }
      }
    LABEL_8:
      v4 = a1[1];
      v5 += 2;
      v6 += 2;
      if (v5 == v4) {
        return result;
      }
    }
    v8 = 0;
  LABEL_21:
    if (*v5 != v8) {
      goto LABEL_22;
    }
    goto LABEL_13;
  }
  return result;
}

__attribute__((swiftcall)) void FacilityUnitList_145eea0(PSEUDO_X8 x8_,
                                                         __int64 a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  result = game_HashString(a2);
  if (result == 0) {
    goto LABEL_31;
  }
  v6 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v6 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_31;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_31;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_31;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == result) {
        if (v11[2] == result) {
          goto LABEL_26;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_31;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_31;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == result) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_31;
    }
  LABEL_15:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_31;
    }
  }
  if (v11[2] != result) {
    goto LABEL_15;
  }
LABEL_26:
  v14 = v11[3];
  if (v14 == 0 ||
      (v15 = *(_QWORD**)a1, v16 = *(_QWORD**)(a1 + 8), *(_QWORD**)a1 == v16)) {
  LABEL_31:
    *a3 = 0;
    a3[1] = 0;
    {
      result;
      return;
    }
  }
  v17 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1672LL);
  while (1) {
    v18 = *v15;
    if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)*v15 + 392LL) + 24LL) +
                   1672LL) == v17) {
      break;
    }
    v15 += 2;
    if (v15 == v16) {
      goto LABEL_31;
    }
  }
  v19 = v15[1];
  *a3 = v18;
  a3[1] = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

bool game_facility_FacilityUnitList_BuildPerch_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE v6[24];
  struct {
    __int64 v7;
    __int64 v8;
    __int64 v9;
  } v7_;

  v2 = *a2;
  v7_.v9 = 0;
  v3 = game_GameModeData_instance_;
  v7_.v7 = v2;
  v7_.v8 = 0;
  if (v2 != 0) {
    v4 = *(_QWORD*)(v2 + 392);
    v7_.v8 = v4;
    if (v4 != 0) {
      v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 1784LL) + 272LL);
    }
    v7_.v9 = v4;
  }
  GameReliance_8e15e0((unsigned __int64)v6, (__int64)&GameData_1a90b0d);
  return (int)GameReliance_8e17a0(*(_QWORD**)(v3 + 128), (__int64)&v7_.v7,
                                  (__int64)v6) >= 0;
}

__int64 game_facility_FacilityUnitList_BuildThermae_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  int v4;

  v2 = *a2;
  if (*a2 != 0) {
    v4 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                    game_g_shared_system_skills_ptr + 4) &
         0xFFF;
    LOBYTE(v2) = game_HasSkill(v2 + 1744, &v4) ^ 1;
  }
  return v2 & 1;
}

__int64 game_facility_FacilityUnitList_BuildStable_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  int v4;

  v2 = *a2;
  if (*a2 == 0) {
    return 1;
  }
  v4 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                  game_g_shared_system_skills_ptr) &
       0xFFF;
  return ((unsigned int)game_HasSkill(v2 + 1744, &v4) ^ 1) & 1;
}

bool game_facility_FacilityUnitList_BuildReinforce_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  int v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  __int16 v11[2];
  int v12;

  v2 = *a2;
  v8 = 0;
  v12 = 0;
  v6_.v6[0] = GameData_1faf9f8;
  v6_.v6[1] = &v8;
  v9_.v10 = v9_.v9;
  v11[0] = 4;
  v6_.v7 = v6_.v6;
  v9_.v9[0] = GameData_1f91668;
  v9_.v9[1] = v6_.v6;
  v9_.v9[2] = &v12;
  UnitSkillList_84ddc0(v2 + 1072, v11, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v3 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v3))((__int64)v9_.v10);
LABEL_6:
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
    goto LABEL_10;
  }
  if (v6_.v7 != nullptr) {
    v4 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
  }
  return v8 != 0;
}

bool game_facility_FacilityUnitList_BuildEducate_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2)
{
  return (unsigned int)GameRoutine_94d260(*a2) == 0;
}

__int64

game_facility_FacilityUnitList_BuildClassExaminer_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  _WORD* v2;
  __int64 v3;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *(_WORD**)a2;
  v3 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)v2 + 392LL) + 49LL) & 2) == 0) {
    v2[24] |= 0x10u;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return std___1___shared_weak_count___release_weak_alt3(v3);
  }
  return result;
}

bool game_facility_FacilityUnitList_GetInstructionPersonCount_lambda0_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _BOOL8 result;

  if (*(_QWORD*)a2 == 0) {
    return false;
  }
  v2 = *(_QWORD*)(*(_QWORD*)a2 + 392LL);
  result = false;
  if (v2 != 0) {
    v3 = GameRoutine_94cee0();
    if (v3 == 0 || *(_QWORD*)(*(_QWORD*)(v2 + 24) + 1672LL) !=
                       *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL)) {
      return true;
    }
  }
  return result;
}

__int64 FacilityUnitList_1460260(__int64 a1, __int64 a2)
{
  __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64** v13;
  __int64** v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v19;

  v19 = a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4328) != 0) {
    GameData_21f4320 = 81;
    __cxa_guard_release(&GameData_21f4328);
  }
  v4 = game_UnitPool_Find_6ead60(&v19, &GameData_21f4320);
  v6 = v4;
  if (v4 != 0) {
    if ((*(_BYTE*)a1 & 1) != 0 && (*(_BYTE*)(a2 + 49) & 4) == 0 ||
        (*(_BYTE*)a1 & 4) != 0 && *(char*)(v4 + 2090) < 1 ||
        (v7 = *(_QWORD*)(a1 + 48)) != 0 &&
            (v19 = v6, ((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 +
                                                            48LL))(v7, &v19) &
                        1) == 0)) {
      v5 = true;
    }
    else {
      v8 = *(_QWORD*)(v6 + 440);
      if (v8 != 0) {
        v9 = *(_BYTE*)(v8 + 16);
      }
      else {
        v9 = 9;
      }
      v5 = true;
      if (((1 << v9) & 0x11) != 0) {
        v10 = GameRoutine_1211bc0(v6);
        v11 = *(_QWORD*)(*GameData_212c790 + 8);
        v12 = *(_DWORD*)(v11 + 56);
        v13 = *(__int64***)(v11 + 8);
        v14 = *(__int64***)(v11 + 16);
        if (v12 < 0) {
          for (; v13 != v14; ++v13) {
            v15 = *v13;
            if ((*v13)[12] == 0 && v15[69] == 0) {
              goto LABEL_25;
            }
          }
        }
        else if (v13 != v14) {
          while (1) {
            v16 = *v13++;
            v15 = v16;
            if (*((_DWORD*)v16 + 21) == v12) {
              break;
            }
            if (v13 == v14) {
              goto LABEL_21;
            }
          }
        LABEL_25:
          v17 = *v15;
          goto LABEL_26;
        }
      LABEL_21:
        v17 = game_gmap_SpotMgr_GetCurrentSpot();
      LABEL_26:
        v5 = v10 != v17;
      }
    }
  }
  return (v6 == 0) | (unsigned int)v5;
}

__int64 FacilityUnitList_1460900(__int64 result, __int64* a2,
                                 unsigned __int64 a3, __int64* a4,
                                 signed __int64 a5)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int16 v29;
  __int16 v30;
  bool v31;
  bool v32;
  __int64 v33;
  int v34;
  bool v35;
  __int64 v36;
  int v37;
  bool v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  char v66;
  bool v67;
  bool v68;
  int v69;
  char v70;
  __int64 v71;
  char v72;
  bool v73;
  bool v74;
  int v75;
  char v76;

  if (a3 >= 2) {
    v6 = (__int64*)result;
    if (a3 == 2) {
      result = GameRoutine_145c270(*(a2 - 2), *(_QWORD*)result);
      if ((result & 1) != 0) {
        v7 = *v6;
        *v6 = *(a2 - 2);
        *(a2 - 2) = v7;
        v8 = v6[1];
        v6[1] = *(a2 - 1);
        *(a2 - 1) = v8;
      }
    }
    else {
      v9 = a3;
      if ((__int64)a3 <= 0) {
        if ((__int64*)result != a2) {
          v14 = (__int64*)(result + 16);
          if ((__int64*)(result + 16) != a2) {
            v15 = 0;
            v16 = (__int64*)result;
            do {
              v17 = v16;
              v18 = v16[2];
              v19 = *v16;
              v16 = v14;
              result = GameRoutine_145c270(v18, v19);
              if ((result & 1) != 0) {
                v20 = *v16;
                v21 = v17[3];
                v22 = v15;
                *v16 = 0;
                v16[1] = 0;
                while (1) {
                  v23 = (__int64*)((char*)v6 + v22);
                  v24 = *(__int64*)((char*)v6 + v22);
                  v25 = *(__int64*)((char*)v6 + v22 + 8);
                  v26 = *(__int64*)((char*)v6 + v22 + 24);
                  *v23 = 0;
                  v23[1] = 0;
                  v23[2] = v24;
                  v23[3] = v25;
                  if (v26 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
                    result = std___1___shared_weak_count___release_weak_alt1();
                  }
                  if (v22 == 0) {
                    break;
                  }
                  v27 = (__int64*)((char*)v6 + v22);
                  v28 = *(__int64**)((char*)v6 + v22 - 16);
                  if ((__int64*)v20 == v28 || *(_QWORD*)v20 == *v28) {
                    goto LABEL_43;
                  }
                  v29 = *(_WORD*)(v20 + 48);
                  v30 = *((_WORD*)v28 + 24);
                  if (((v29 & 0x20) == 0) != ((v30 & 0x20) == 0)) {
                    if ((v29 & 0x20) != 0) {
                      goto LABEL_41;
                    }
                  }
                  else if ((v29 & 1) == (v30 & 1)) {
                    if (game_GameModeData_instance_ != 0 &&
                        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                      if ((GameRoutine_15b7370(result) & 1) != 0) {
                        v31 = (*(_WORD*)(v20 + 48) & 0x100) != 0;
                        v32 = (v28[6] & 0x100) != 0;
                      }
                      else {
                        v31 = false;
                        v32 = false;
                      }
                      v33 = *(_QWORD*)v20;
                      v71 = v33;
                      if (v33 != 0) {
                        v34 = *(_DWORD*)(v33 + 416);
                        LOBYTE(v33) = (v34 & 0x80) != 0;
                        v35 = (v34 & 0x100) != 0;
                      }
                      else {
                        v35 = false;
                      }
                      v74 = v31;
                      v36 = *v28;
                      v72 = v33;
                      v73 = v35;
                      v75 = 0;
                      v76 = 0;
                      v65 = v36;
                      if (v36 != 0) {
                        v37 = *(_DWORD*)(v36 + 416);
                        LOBYTE(v36) = (v37 & 0x80) != 0;
                        v38 = (v37 & 0x100) != 0;
                      }
                      else {
                        v38 = false;
                      }
                      v66 = v36;
                      v67 = v38;
                      v68 = v32;
                      v69 = 0;
                      v70 = 0;
                      result = GameRoutine_19f0540(&v71, &v65);
                      if ((result & 1) == 0) {
                      LABEL_41:
                        v27 = (__int64*)((char*)v6 + v22);
                        goto LABEL_43;
                      }
                    }
                    else if (*(_DWORD*)(v20 + 8) >= *((_DWORD*)v28 + 2)) {
                      goto LABEL_41;
                    }
                  }
                  else if ((v29 & 1) != 0) {
                    goto LABEL_41;
                  }
                  v22 -= 16;
                }
                v27 = v6;
              LABEL_43:
                v39 = v27[1];
                *v27 = v20;
                v27[1] = v21;
                if (v39 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
                  result = std___1___shared_weak_count___release_weak_alt1();
                }
              }
              v14 = v16 + 2;
              v15 += 16;
            } while (v16 + 2 != a2);
          }
        }
      }
      else {
        v10 = a3 >> 1;
        v12 = a3 - (a3 >> 1);
        if ((__int64)a3 <= a5) {
          FacilityUnitList_1460e60(result, result + 16 * v10, a3 >> 1, a4);
          v40 = &a4[2 * v10];
          result =
              FacilityUnitList_1460e60(&v6[2 * v10], a2, v9 - (v9 >> 1), v40);
          v41 = &a4[2 * v9];
          v42 = v40;
          v43 = a4;
          while (v42 != v41) {
            result = GameRoutine_145c270(*v42, *v43);
            if ((result & 1) != 0) {
              v44 = *v42;
              v45 = v42[1];
              *v42 = 0;
              v42[1] = 0;
              v46 = v6[1];
              *v6 = v44;
              v6[1] = v45;
              if (v46 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
                result = std___1___shared_weak_count___release_weak_alt1();
              }
              v42 += 2;
            }
            else {
              v47 = *v43;
              v48 = v43[1];
              *v43 = 0;
              v43[1] = 0;
              v49 = v6[1];
              *v6 = v47;
              v6[1] = v48;
              if (v49 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                result = std___1___shared_weak_count___release_weak_alt1();
              }
              v43 += 2;
            }
            v6 += 2;
            if (v43 == v40) {
              if (v42 != v41) {
                v56 = 0;
                do {
                  v57 = &v42[v56];
                  v58 = &v6[v56];
                  v59 = v42[v56];
                  v60 = v42[v56 + 1];
                  *v57 = 0;
                  v57[1] = 0;
                  v61 = v6[v56 + 1];
                  *v58 = v59;
                  v58[1] = v60;
                  if (v61 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
                    result = std___1___shared_weak_count___release_weak_alt1();
                  }
                  v56 += 2;
                } while (v57 + 2 != v41);
              }
              goto LABEL_70;
            }
          }
          if (v43 != v40) {
            v50 = 0;
            do {
              v51 = &v43[v50];
              v52 = &v6[v50];
              v53 = v43[v50];
              v54 = v43[v50 + 1];
              *v51 = 0;
              v51[1] = 0;
              v55 = v6[v50 + 1];
              *v52 = v53;
              v52[1] = v54;
              if (v55 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
                result = std___1___shared_weak_count___release_weak_alt1();
              }
              v50 += 2;
            } while (v51 + 2 != v40);
          }
        LABEL_70:
          if (a4 != nullptr) {
            v62 = a4 + 1;
            do {
              v64 = *v62;
              v62 += 2;
              v63 = v64;
              if (v64 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
                result = std___1___shared_weak_count___release_weak_alt1();
              }
              --v9;
            } while (v9 != 0);
          }
        }
        else {
          FacilityUnitList_1460900(result, result + 16 * v10, a3 >> 1, a4, a5);
          FacilityUnitList_1460900(&v6[2 * v10], a2, v12, a4, a5);
          return GameRoutine_1461340(v6, &v6[2 * v10], a2, v10, v12, a4, a5);
        }
      }
    }
  }
  return result;
}

void FacilityUnitList_1461340(__int64* a1, __int64* a2, __int64* a3, __int64 a4,
                              __int64 a5, _QWORD* a6, __int64 a7)
{
  __int64 v9;
  __int64 v14;
  __int64 i;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* j;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  _BOOL4 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  _QWORD* v50;
  __int64* v51;
  _QWORD* v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  __int64* v85;
  __int64 v86;
  __int64* v87;

  if (a5 != 0) {
    v9 = a5;
    while (a4 > a7 && v9 > a7) {
      if (a4 == 0) {
        return;
      }
      v14 = -a4;
      for (i = 0; !GameRoutine_145c270(*a2, a1[i]); i += 2) {
        if (__CFADD__(v14++, 1)) {
          return;
        }
      }
      v17 = -v14;
      v86 = a7;
      v87 = a3;
      v85 = &a1[i];
      if (-v14 >= v9) {
        if (v14 == -1) {
          v69 = &a1[i];
          v70 = a1[i];
          *v69 = *a2;
          *a2 = v70;
          v71 = a1[i + 1];
          v69[1] = a2[1];
          a2[1] = v71;
          return;
        }
        v19 = a3;
        v25 = v17 / 2;
        v20 = &a1[2 * (v17 / 2) + i];
        if (v19 != a2) {
          v26 = ((char*)v19 - (char*)a2) >> 4;
          v27 = a6;
          v19 = a2;
          do {
            v28 = &v19[2 * (v26 >> 1)];
            v30 = *v28;
            v29 = v28 + 2;
            if (GameRoutine_145c270(v30, *v20)) {
              v19 = v29;
              v26 += ~(v26 >> 1);
            }
            else {
              v26 >>= 1;
            }
          } while (v26 != 0);
          a6 = v27;
        }
        v18 = ((char*)v19 - (char*)a2) >> 4;
      }
      else {
        v18 = v9 / 2;
        v19 = &a2[2 * (v9 / 2)];
        if (&a1[i] == a2) {
          v20 = a2;
        }
        else {
          v84 = a6;
          v20 = &a1[i];
          v21 = ((char*)a2 - (char*)a1 - i * 8) >> 4;
          do {
            v22 = &v20[2 * (v21 >> 1)];
            v24 = *v22;
            v23 = v22 + 2;
            if (GameRoutine_145c270(*v19, v24)) {
              v21 >>= 1;
            }
            else {
              v20 = v23;
              v21 += ~(v21 >> 1);
            }
          } while (v21 != 0);
          v18 = v9 / 2;
          a6 = v84;
        }
        v25 = ((char*)v20 - (char*)a1 - i * 8) >> 4;
      }
      a1 = v19;
      if (v20 != a2) {
        a1 = v20;
        if (a2 != v19) {
          v31 = *v20;
          a1 = v20 + 2;
          *v20 = *a2;
          *a2 = v31;
          v32 = v20[1];
          v20[1] = a2[1];
          a2[1] = v32;
          for (j = a2 + 2; j != v19; j += 2) {
            v34 = *a1;
            if (a1 == a2) {
              a2 = j;
            }
            *a1 = *j;
            *j = v34;
            v35 = a1[1];
            a1[1] = j[1];
            j[1] = v35;
            a1 += 2;
          }
          if (a1 != a2) {
            v36 = a1;
            v37 = a2;
            while (1) {
              v38 = *v36;
              *v36 = *v37;
              *v37 = v38;
              v39 = v36[1];
              v36[1] = v37[1];
              v36 += 2;
              v37[1] = v39;
              v37 += 2;
              v40 = v36 == a2;
              if (v37 == v19) {
                if (v36 == a2) {
                  break;
                }
                v37 = a2 + 2;
                while (1) {
                  v41 = *v36;
                  *v36 = *a2;
                  *a2 = v41;
                  v42 = v36[1];
                  v36[1] = a2[1];
                  v36 += 2;
                  a2[1] = v42;
                  v40 = v36 == a2;
                  if (v37 != v19) {
                    break;
                  }
                  if (v36 == a2) {
                    goto LABEL_45;
                  }
                }
              }
              if (v40) {
                a2 = v37;
              }
            }
          }
        }
      }
    LABEL_45:
      v43 = v9 - v18;
      a4 = -(v25 + v14);
      if (v25 + v18 >= v9 - (v25 + v18) - v14) {
        v45 = v18;
        FacilityUnitList_1461340(a1, v19, v87, -(v25 + v14), v9 - v18, a6, v86);
        v19 = v20;
        a3 = a1;
        a1 = v85;
        v43 = v45;
        a4 = v25;
        a7 = v86;
      }
      else {
        v44 = v25;
        a7 = v86;
        FacilityUnitList_1461340(v85, v20, a1, v44, v18, a6, v86);
        a3 = v87;
      }
      v9 = v43;
      a2 = v19;
      if (v43 == 0) {
        return;
      }
    }
    if (a4 > v9) {
      if (a2 == a3) {
        return;
      }
      v46 = 0;
      v47 = 0;
      do {
        v48 = &a2[v46];
        v49 = &a6[v46];
        ++v47;
        v46 += 2;
        *v49 = *v48;
        v49[1] = v48[1];
        *v48 = 0;
        v48[1] = 0;
      } while (v48 + 2 != a3);
      v50 = a6;
      v51 = a3 - 1;
      v52 = &v50[v46];
      v53 = v50;
      while (1) {
        if (a2 == a1) {
          for (; v52 != v53; v51 -= 2) {
            v72 = *(v52 - 2);
            v73 = *(v52 - 1);
            v52 -= 2;
            *v52 = 0;
            v52[1] = 0;
            v74 = *v51;
            *(v51 - 1) = v72;
            *v51 = v73;
            if (v74 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
              std___1___shared_weak_count___release_weak_alt2();
            }
          }
          goto LABEL_92;
        }
        v54 = v52 - 2;
        if (!GameRoutine_145c270(*(v52 - 2), *(a2 - 2))) {
          break;
        }
        v55 = *(a2 - 2);
        v56 = *(a2 - 1);
        *(a2 - 2) = 0;
        *(a2 - 1) = 0;
        v57 = *v51;
        *(v51 - 1) = v55;
        *v51 = v56;
        if (v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          a2 -= 2;
          v54 = v52;
        LABEL_64:
          (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
          std___1___shared_weak_count___release_weak_alt2();
          goto LABEL_56;
        }
        a2 -= 2;
        v54 = v52;
      LABEL_56:
        v51 -= 2;
        v52 = v54;
        if (v54 == v53) {
          goto LABEL_92;
        }
      }
      v58 = *(v52 - 2);
      v59 = *(v52 - 1);
      *v54 = 0;
      *(v52 - 1) = 0;
      v57 = *v51;
      *(v51 - 1) = v58;
      *v51 = v59;
      if (v57 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_56;
      }
      goto LABEL_64;
    }
    if (a1 != a2) {
      v47 = 0;
      v53 = a6;
      v60 = a6;
      v61 = a1;
      do {
        ++v47;
        *v60 = *v61;
        v60[1] = v61[1];
        *v61 = 0;
        v61[1] = 0;
        v61 += 2;
        v60 += 2;
      } while (v61 != a2);
      v62 = a6;
      while (a2 != a3) {
        if (GameRoutine_145c270(*a2, *v62)) {
          v63 = *a2;
          v64 = a2[1];
          *a2 = 0;
          a2[1] = 0;
          v65 = a1[1];
          *a1 = v63;
          a1[1] = v64;
          if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
            std___1___shared_weak_count___release_weak_alt2();
          }
          a2 += 2;
        }
        else {
          v66 = *v62;
          v67 = v62[1];
          *v62 = 0;
          v62[1] = 0;
          v68 = a1[1];
          *a1 = v66;
          a1[1] = v67;
          if (v68 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
            std___1___shared_weak_count___release_weak_alt2();
          }
          v62 += 2;
        }
        a1 += 2;
        if (v60 == v62) {
          goto LABEL_92;
        }
      }
      v75 = 0;
      do {
        v76 = &v62[v75];
        v77 = &a1[v75];
        v78 = v62[v75];
        v79 = v62[v75 + 1];
        *v76 = 0;
        v76[1] = 0;
        v80 = a1[v75 + 1];
        *v77 = v78;
        v77[1] = v79;
        if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
          std___1___shared_weak_count___release_weak_alt2();
        }
        v75 += 2;
      } while (v60 - 2 != v76);
    LABEL_92:
      if (v53 != nullptr) {
        v81 = v53 + 1;
        do {
          v83 = *v81;
          v81 += 2;
          v82 = v83;
          if (v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
            std___1___shared_weak_count___release_weak_alt2();
          }
          --v47;
        } while (v47 != 0);
      }
    }
  }
}

#pragma GCC visibility pop
