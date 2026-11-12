#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e2be0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_20561b0[])();
extern __int64 GameData_21cd108;
extern __int64 GameData_2203490;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319c0[4];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 MapUnitCommandItemMenu_15c09e0(__int64 a1);
__int64 MapUnitCommandItemMenu_15c0b80();
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 MapUnitCommandItemMenu_16e2be0(__int64 a1);
__int64 BasicMenu_16e25a0(_QWORD, _QWORD);
__int64 GameRoutine_15de630(_QWORD);
__int64 MapUnitInfo_1828ef0(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2056350[])();
extern __int64 GameData_20543b0;
extern __int64 GameData_2054630;
extern __int64 GameData_212d0d0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e030[4];
extern __int64* game_g_empty_item_ptr;
__int64 game_map_MapUnitCommandItemMenu_Equip(__int64 a1);
__int64 game_map_MapUnitCommandItemMenu_OnBuild_lambda0_Invoke(__int64 a1,
                                                               __int64 a2);
__int64 game_map_MapUnitCommandItemMenu_Equip_lambda0_Invoke(__int64 a1,
                                                             _QWORD* a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern char GameData_1a9f09e;
unsigned __int64 UnitMenuItem_15b81a0(__int64, __int64, char*);
__int64
game_map_MapUnitCommandItemMenu_AddItemList_lambda1_Invoke(__int64 result,
                                                           int* a2);
__int64*
MapUnitCommandItemMenu_15c0b80_alt1() __asm__("MapUnitCommandItemMenu_15c0b80");
__int64 BasicMenu_16e25a0_alt1(__int64 result,
                               char) __asm__("BasicMenu_16e25a0");
__int64 GameRoutine_15de630_alt1(char, __int64,
                                 unsigned int) __asm__("GameRoutine_15de630");
__int64 MapUnitInfo_1828ef0_alt1(__int64 result,
                                 __int64) __asm__("MapUnitInfo_1828ef0");
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 game_menu_BasicMenu_Unknown16defa0_alt1(float*) __asm__(
    "game_menu_BasicMenu_Unknown16defa0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 MapUnitCommandItemMenu_15c09e0(__int64 a1)
{
  __int64 result;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  __int64 v15;

  result = (__int64)MapUnitCommandItemMenu_15c0b80_alt1();
  if (*(_WORD*)(result + 828) == 0 || (*(_BYTE*)(result + 831) & 0x20) != 0) {
    result = (__int64)MapUnitCommandItemMenu_15c0b80_alt1();
    if (*(_WORD*)(result + 836) == 0 || (*(_BYTE*)(result + 839) & 0x20) != 0) {
      result = (__int64)MapUnitCommandItemMenu_15c0b80_alt1();
      if (*(_WORD*)(result + 844) == 0 ||
          (*(_BYTE*)(result + 847) & 0x20) != 0) {
        result = (__int64)MapUnitCommandItemMenu_15c0b80_alt1();
        if (*(_WORD*)(result + 852) == 0 ||
            (*(_BYTE*)(result + 855) & 0x20) != 0) {
          result = (__int64)MapUnitCommandItemMenu_15c0b80_alt1();
          if (*(_WORD*)(result + 860) == 0 ||
              (*(_BYTE*)(result + 863) & 0x20) != 0) {
            result = (__int64)MapUnitCommandItemMenu_15c0b80_alt1();
            if (*(_WORD*)(result + 868) == 0 ||
                (*(_BYTE*)(result + 871) & 0x20) != 0) {
              v5 = *(_QWORD**)(a1 + 232);
              v6 = *(_QWORD**)(a1 + 240);
              v7 = v13_.v13;
              v13_.v13[0] = GameData_20561b0;
              v13_.v14 = v13_.v13;
              if (v5 == v6) {
                v11 = nullptr;
              }
              else {
                v8 = GameData_212e008[0];
                v9 = GameData_21319c0[0];
                while (1) {
                  if (*v5 != 0) {
                    v10 = __dynamic_cast(*v5, v8, v9, 0);
                    if (v10 != 0) {
                      v11 = (_BYTE*)v10;
                      v15 = v10;
                      if (v13_.v14 == nullptr) {
                        GameRoutine_60a310_alt1();
                      }
                      if (((*(__int64 (**)(_QWORD*, __int64*))(
                               *v13_.v14 + 48LL))(v13_.v14, &v15) &
                           1) != 0) {
                        break;
                      }
                    }
                  }
                  if (++v5 == v6) {
                    v11 = nullptr;
                    break;
                  }
                }
                v7 = v13_.v14;
                if (v13_.v14 != v13_.v13) {
                  if (v13_.v14 == nullptr) {
                    goto LABEL_32;
                  }
                  v12 = 40;
                LABEL_31:
                  (*(void (**)(_QWORD*))(*v7 + v12))(v7);
                LABEL_32:
                  result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v11 + 48LL))(v11);
                  if ((result & 1) != 0) {
                    v11[81] = 0;
                    return MapUnitCommandItemMenu_16e2be0(a1);
                  }
                  return result;
                }
              }
              v12 = 32;
              goto LABEL_31;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 MapUnitCommandItemMenu_15c0b80()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;

  v0 = GameData_2203490;
  if (GameData_2203490 == 0) {
    if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
      return game_UnitPool_Get(GameData_21cd108 + 8);
    }
    return 0;
  }
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v4 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    v1 = v4;
    if (v4 == 0) {
    LABEL_9:
      v1 = *(_QWORD*)(v0 + 656);
      v5 = *(_QWORD*)(v0 + 664);
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v1;
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
          v1 = v6;
        }
      }
    }
  }
  else if (v1 == 0) {
    goto LABEL_9;
  }
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  v8 = *(_QWORD*)(v7 + 88);
  if (v8 == 0) {
    return 0;
  }
  v9 = *(_QWORD*)(v7 + 80);
  v10 = *(_QWORD*)(v7 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v10);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v11 == 0 || v9 == 0) {
    if (v11 == 0) {
      return 0;
    }
  }
  else {
    result = *(_QWORD*)(v9 + 16);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != 0) {
      return result;
    }
    return 0;
  }
  v13 = result;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak(v11);
  result = v13;
  if (v9 == 0) {
    return 0;
  }
  return result;
}

__int64 game_map_MapUnitCommandItemMenu_Equip(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  __int64 v24;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 88);
  v4 = (__int64*)(v2 + 8 * v1 + 828);
  if ((_DWORD)v1 == -1) {
    v4 = game_g_empty_item_ptr;
  }
  v5 = *v4;
  if ((GameRoutine_15de630_alt1((*v4 & 0x1000000) == 0, v2, v1) & 1) != 0) {
    v6 = 30;
    v7 = (_BYTE*)(*(_QWORD*)(a1 + 88) + 847LL);
    v8 = *GameData_212c878[0];
    while (
        (*(_WORD*)(v7 - 19) == 0 || (*(v7 - 16) & 1) == 0 ||
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v8 + 64) +
                                        8LL * *(unsigned __int16*)(v7 - 19)) +
                             72LL) >= 8u) &&
        (*(_WORD*)(v7 - 11) == 0 || (*(v7 - 8) & 1) == 0 ||
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v8 + 64) +
                                        8LL * *(unsigned __int16*)(v7 - 11)) +
                             72LL) >= 8u) &&
        (*(_WORD*)(v7 - 3) == 0 || (*v7 & 1) == 0 ||
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v8 + 64) +
                                        8LL * *(unsigned __int16*)(v7 - 3)) +
                             72LL) >= 8u)) {
      v6 -= 3;
      v7 += 24;
      if (v6 == 0) {
        goto LABEL_16;
      }
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 64LL))(a1, 0);
  }
LABEL_16:
  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e030[0], &GameData_20543b0, 0);
    if (result != 0) {
      v10 = result;
      game_menu_BasicMenu_Unknown16defa0_alt1((float*)result);
      v11 = *(_QWORD**)(v10 + 232);
      v12 = *(_QWORD**)(v10 + 240);
      v13 = v22_.v22;
      v22_.v22[0] = GameData_2056350;
      v22_.v23 = v22_.v22;
      if (v11 == v12) {
        v16 = 0;
      }
      else {
        v14 = GameData_212e008[0];
        while (1) {
          if (*v11 != 0) {
            v15 = __dynamic_cast(*v11, v14, &GameData_2054630, 0);
            if (v15 != 0) {
              v16 = v15;
              v24 = v15;
              if (v22_.v23 == nullptr) {
                GameRoutine_60a310_alt1();
              }
              if (((*(__int64 (**)(_QWORD*, __int64*))(*v22_.v23 + 48LL))(
                       v22_.v23, &v24) &
                   1) != 0) {
                break;
              }
            }
          }
          if (++v11 == v12) {
            v16 = 0;
            break;
          }
        }
        v13 = v22_.v23;
        if (v22_.v23 != v22_.v22) {
          if (v22_.v23 == nullptr) {
          LABEL_33:
            if (v16 == 0 ||
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * (unsigned __int16)v5) +
                                    72LL) > 7u) {
              BasicMenu_16e25a0_alt1(v10, 0);
              goto LABEL_47;
            }
            v18 = *(_QWORD*)(v10 + 336);
            if (v18 != v16) {
              if (v18 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v18 + 168LL))(v18);
              }
              *(_QWORD*)(v10 + 336) = v16;
              _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v10, 0, 1u, 0);
              v19 = *(_QWORD*)(v10 + 336);
              if (v19 == 0) {
                v20 = 4;
              LABEL_46:
                *(_DWORD*)(v10 + 356) =
                    *(_DWORD*)(v10 + 356) & 0xFFFFFFFB | v20;
              LABEL_47:
                result = *(_QWORD*)GameData_212d0d0[0];
                if (*(_QWORD*)GameData_212d0d0[0] != 0 &&
                    *(int*)(result + 16) <= 0) {
                  v21 = *(_QWORD*)(result + 160);
                  *(_BYTE*)(result + 360) = 1;
                  return MapUnitInfo_1828ef0_alt1(result, v21);
                }
                return result;
              }
              (*(void (**)(__int64))(*(_QWORD*)v19 + 160LL))(v19);
              game_IsVibrationEnabled_alt1(
                  (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
              v18 = *(_QWORD*)(v10 + 336);
            }
            v20 = 4;
            if (v18 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 120LL))(v18) &
                   1) != 0) {
                v20 = 4;
              }
              else {
                v20 = 0;
              }
            }
            goto LABEL_46;
          }
          v17 = 40;
        LABEL_32:
          (*(void (**)(_QWORD*))(*v13 + v17))(v13);
          goto LABEL_33;
        }
      }
      v17 = 32;
      goto LABEL_32;
    }
  }
  return result;
}

__int64 game_map_MapUnitCommandItemMenu_OnBuild_lambda0_Invoke(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned int v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
    __int64* v14;
  } v12_;

  if ((*(_BYTE*)(*(_QWORD*)a2 + 96LL) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v12_.v12,
                                       *(_QWORD*)(*(_QWORD*)a2 + 112LL),
                                       *(_QWORD*)(*(_QWORD*)a2 + 104LL));
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)a2 + 104LL);
    v3 = *(_QWORD*)(*(_QWORD*)a2 + 112LL);
    v12_.v12 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
    v12_.v13 = v2;
    v12_.v14 = (__int64*)v3;
  }
  v4 = v12_.v13;
  if ((v12_.v12 & 1) == 0) {
    v4 = (unsigned __int8)v12_.v12 >> 1;
  }
  if (v4 != 16) {
    result = 0;
    if ((v12_.v12 & 1) == 0) {
      return result;
    }
    goto LABEL_18;
  }
  v5 = v12_.v14;
  if ((v12_.v12 & 1) == 0) {
    v5 = (__int64*)((char*)&v12_.v12 + 1);
  }
  v7 = *v5;
  v6 = v5[1];
  result = v7 == 0x4D7379535F44494DLL && v6 == 0x6D6574495F756E65LL;
  if ((v12_.v12 & 1) != 0) {
  LABEL_18:
    if (v12_.v14 != nullptr) {
      v10 = result;
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v14);
      return v10;
    }
  }
  return result;
}

__int64

game_map_MapUnitCommandItemMenu_AddItemList_lambda1_Invoke(__int64 result,
                                                           int* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  if (*a2 == 2 || v2 == 1) {
    if ((**(_BYTE**)(result + 16) & 1) == 0) {
      v5 = result;
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
      UnitMenuItem_15b81a0(v6, (__int64)"MID_Menu_Magic", "MID_Sys_Remaining");
      result = BasicMenuCursor_16e0c00(v3, v6);
      **(_BYTE**)(v5 + 16) = 1;
    }
  }
  else if (v2 == 0) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        144, 16, 0);
    UnitMenuItem_15b81a0(v4, (__int64)"MID_Menu_ExclusiveItem",
                         &GameData_1a9f09e);
    return BasicMenuCursor_16e0c00(v3, v4);
  }
  return result;
}

__int64 game_map_MapUnitCommandItemMenu_Equip_lambda0_Invoke(__int64 a1,
                                                             _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 496LL))(*a2) & 1) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2) & 1) != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 464LL))(v2);
  }
  else {
    return 0;
  }
}

__int64 MapUnitCommandItemMenu_16e2be0(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  int v4;
  __int64 v5;
  int v6;

  v1 = *(_QWORD**)(a1 + 232);
  v2 = *(_QWORD**)(a1 + 240);
  if (v1 != v2) {
    v4 = 0;
    do {
      v5 = *v1;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v1 + 48LL))(*v1) & 1) != 0) {
        if (v5 == *(_QWORD*)(a1 + 336)) {
          goto LABEL_8;
        }
        ++v4;
      }
      ++v1;
    } while (v1 != v2);
  }
  v4 = -1;

LABEL_8:
  if (v4 <= 1) {
    v6 = 1;
  }
  else {
    v6 = v4;
  }
  *(_DWORD*)(a1 + 552) = v6 - 1;
  return _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 1, 0, 0);
}

#pragma GCC visibility pop
