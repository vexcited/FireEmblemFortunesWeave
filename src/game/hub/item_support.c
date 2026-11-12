#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f2e8e0();
__int64 GameRoutine_f2ed20();
__int64 GameRoutine_f2ed40();
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_hub_Character_RebuildAppearance(void);
extern _UNKNOWN GameData_2220668;
extern __int64 (*GameData_1ff3af8[])();
extern __int64 (*game_hub_ProcGainItemSupportSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_2220570;
extern __int64 GameData_2220578;
extern __int64 GameData_2220580;
extern __int64 GameData_2220590;
extern __int64 GameData_22205a0;
extern __int64 GameData_22205b0;
extern __int64 GameData_22205b8;
extern __int64 GameData_22205c0;
extern __int64 GameData_22205d0;
extern __int64 GameData_22205e0;
extern __int64 GameData_22205f0;
extern __int64 GameData_22205f8;
extern __int64 GameData_2220600;
extern __int64 GameData_2220610;
extern __int64 GameData_2220620;
extern __int64 GameData_2220630;
extern __int64 GameData_2220638;
extern __int64 GameData_2220640;
extern __int64 GameData_2220650;
extern __int64 GameData_2220660;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern char GameData_2220568;
extern char GameData_22205a8;
extern char GameData_22205e8;
extern char GameData_2220628;
extern int GameData_2220588;
extern int GameData_2220598;
extern int GameData_22205c8;
extern int GameData_22205d8;
extern int GameData_2220608;
extern int GameData_2220618;
extern int GameData_2220648;
extern int GameData_2220658;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 ItemSupport_f2e0a0(__int64 a1, __int64 a2);
__int64 ItemSupport_f2e1b0(__int64 a1, __int64 a2);
void game_hub_ItemSupport_TryAutoEquipReloadCheck_alt1(
    __int64 a1, _QWORD* a2,
    __int64 a3) __asm__("game_hub_ItemSupport_TryAutoEquipReloadCheck");
__int64 game_hub_ItemSupport_TryAutoEquipReloadCheck_lambda0_Invoke(
    __int64 result, unsigned __int16* a2);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__int64 game_hub_Character_RebuildAppearance_alt1(__int64) __asm__(
    "game_hub_Character_RebuildAppearance");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_hub_ItemSupport_TryAutoEquipReloadCheck(__int64 a1, __int64 a2,
                                                  __int64 a3);

__int64 ItemSupport_f2e0a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)a2 & 1) != 0) {
    v2 = *(_QWORD*)(a2 + 16);
  }
  else {
    v2 = a2 + 1;
  }
  v3 = game_HashString(v2);
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_21c99b8 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = v3;
        if (v3 >= v4) {
          v7 = v3 % v4;
        }
      }
      else {
        v7 = v6 & v3;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == v3) {
                if (v9[2] == v3) {
                  return v9[3];
                }
              }
              else if ((v12 & v6) != v7) {
                return 0;
              }
              v9 = (_QWORD*)*v9;
              v11 = 0;
              if (v9 == nullptr) {
                return v11;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == v3) {
              if (v9[2] == v3) {
                return v9[3];
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                return 0;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 ItemSupport_f2e1b0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2220668,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2220668) != 0) {
    GameData_2220568 = 13;
    GameData_2220570 = 0;
    GameData_2220578 = (__int64)GameRoutine_f2e8e0;
    GameData_22205a8 = 13;
    GameData_22205e8 = 13;
    GameData_2220580 = 0;
    GameData_2220588 = 0;
    GameData_2220590 = 0;
    GameData_2220598 = 0;
    GameData_22205a0 = 0;
    GameData_22205c0 = 0;
    GameData_22205c8 = 0;
    GameData_22205d0 = 0;
    GameData_22205d8 = 0;
    GameData_22205b0 = 0;
    GameData_22205b8 = (__int64)GameRoutine_f2ed20;
    GameData_22205e0 = 0;
    GameData_22205f0 = 0;
    GameData_22205f8 = (__int64)GameRoutine_f2ed40;
    GameData_2220600 = 0;
    GameData_2220608 = 0;
    GameData_2220610 = 0;
    GameData_2220618 = 0;
    GameData_2220620 = 0;
    GameData_2220628 = 0;
    GameData_2220650 = 0;
    GameData_2220658 = 0;
    GameData_2220660 = 0;
    GameData_2220648 = 0;
    GameData_2220638 = 0;
    GameData_2220640 = 0;
    GameData_2220630 = 0;
    __cxa_guard_release(&GameData_2220668);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_BYTE*)(v4 + 168) = 0;
  *(_QWORD*)(v4 + 152) = a2;
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)v4 = game_hub_ProcGainItemSupportSeq_vtable;
  return ProcInst_657850(v4, &GameData_2220568, "ProcGainItemSupportSeq", 1,
                         a1);
}

void game_hub_ItemSupport_TryAutoEquipReloadCheck(__int64 a1, __int64 a2,
                                                  __int64 a3)
{
  __int64 i;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  char v24;
  __int64 v25;

  v25 = a3;
  if (a2 == 0 || a3 == 0) {
    return;
  }
  v24 = 0;
  v22_.v22[0] = GameData_1ff3af8;
  v22_.v22[1] = &v24;
  v22_.v22[2] = &v25;
  v22_.v23 = v22_.v22;
  game_UnitItemList_EachItem_alt1((_WORD*)(a2 + 828), (__int64)v22_.v22);
  for (i = 876; i != 1068; i += 8) {
    if (*(_WORD*)(a2 + i) != 0) {
      if (v22_.v23 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64))(*v22_.v23 + 48LL))(v22_.v23, a2 + i);
    }
  }
  if (v22_.v23 == v22_.v22) {
    v5 = 32;
    goto LABEL_12;
  }
  if (v22_.v23 != nullptr) {
    v5 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v22_.v23 + v5))((__int64)v22_.v23);
  }
  if (v24 == 1) {
    v6 = *(__int64**)(GameData_21ec7c0 + 24);
    v7 = *(__int64**)(GameData_21ec7c0 + 32);
    if (v6 != v7) {
      while (1) {
        v8 = *v6;
        if ((*(_BYTE*)(*v6 + 1027) & 1) != 0 ||
            (v9 = *(_QWORD*)(v8 + 16)) == 0) {
        LABEL_51:
          v10 = nullptr;
        }
        else {
          v10 = *(_QWORD**)(GameData_21ca310 + 56);
          if (v10 != nullptr) {
            v11 = 250;
            while (1) {
              v12 = v10[55];
              if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 && v10[49] == v9) {
                break;
              }
              v13 = v10[333];
              if (v13 != 0 && *(_BYTE*)(v13 + 16) != 9 && v10[327] == v9) {
                v10 += 278;
                break;
              }
              v14 = v10[611];
              if (v14 != 0 && *(_BYTE*)(v14 + 16) != 9 && v10[605] == v9) {
                v10 += 556;
                break;
              }
              v15 = v10[889];
              if (v15 != 0 && *(_BYTE*)(v15 + 16) != 9 && v10[883] == v9) {
                v10 += 834;
                break;
              }
              v16 = v10[1167];
              if (v16 != 0 && *(_BYTE*)(v16 + 16) != 9 && v10[1161] == v9) {
                v10 += 1112;
                break;
              }
              v17 = v10[1445];
              if (v17 != 0 && *(_BYTE*)(v17 + 16) != 9 && v10[1439] == v9) {
                v10 += 1390;
                break;
              }
              v18 = v10[1723];
              if (v18 != 0 && *(_BYTE*)(v18 + 16) != 9 && v10[1717] == v9) {
                v10 += 1668;
                break;
              }
              v19 = v10[2001];
              if (v19 != 0 && *(_BYTE*)(v19 + 16) != 9 && v10[1995] == v9) {
                v10 += 1946;
                break;
              }
              v20 = v10[2279];
              if (v20 != 0 && *(_BYTE*)(v20 + 16) != 9 && v10[2273] == v9) {
                v10 += 2224;
                break;
              }
              v21 = v10[2557];
              if (v21 != 0 && *(_BYTE*)(v21 + 16) != 9 && v10[2551] == v9) {
                v10 += 2502;
                break;
              }
              v10 += 2780;
              v11 -= 10;
              if (v11 == 0) {
                goto LABEL_51;
              }
            }
          }
        }
        if (v10 == (_QWORD*)a2) {
          break;
        }
        v6 += 2;
        if (v6 == v7) {
          return;
        }
      }
      game_hub_Character_RebuildAppearance_alt1(v8);
    }
  }
}

__int64 game_hub_ItemSupport_TryAutoEquipReloadCheck_lambda0_Invoke(
    __int64 result, unsigned __int16* a2)
{
  if ((*((_BYTE*)a2 + 3) & 1) != 0 &&
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) ==
          **(_QWORD**)(result + 16)) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
