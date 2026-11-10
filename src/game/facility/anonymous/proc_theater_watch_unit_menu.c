#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e8430(_QWORD*);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c9d00;
extern __int64 GameData_21f3ff8;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_1fafca8[4];
__int64 ProcTheaterWatchUnitMenu_Unknown84(_QWORD* a1);
__int64 ProcTheaterWatchUnitMenu_Unknown160();
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcTheaterWatchUnitMenu_Unknown6();
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_TheaterWatchUnitMenuItem_vtable[])();
extern __int64 GameData_22420c8;
extern __int64 fw_memory_g_heap_manager;
__int64
game_facility_anonymous_ProcTheaterWatchUnitMenu_OnUnitDecide_closure_Invoke();
__int64
game_facility_anonymous_ProcTheaterWatchUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD* GameRoutine_13fa790(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_928b80(_QWORD*, __int64);
__int64 GameRoutine_975940(__int64);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 game_16ad210(__int64 result, __int64, char, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
char* GameRoutine_67ed20(_QWORD*);
extern _UNKNOWN GameData_1ada574;
extern __int64 (*GameData_20656a0[])();
extern __int64 (*GameData_2065720[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212cc40[63];
extern __int64* GameData_212d2b8;
extern __int64* GameData_212dcd0;
extern __int64 game_GameModeData_instance_;
void* game_97b2f0(__int64);
__int64
game_facility_anonymous_ProcTheaterWatchUnitMenu_OnUnitDecide(__int64 a1);

__int64 ProcTheaterWatchUnitMenu_Unknown84(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;

  result = GameRoutine_15e8430(a1);
  v3 = *(unsigned int*)(GameData_21f3ff8 + 8);
  if ((v3 & 0x80000000) == 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c9d00 + 64) + 8 * v3);
    if (v4 != 0) {
      ui_LayoutAccessor_SetPaneVisible(a1 + 106, "N_HelpDetail", 1);
      GameRoutine_1562060(a1 + 106, "T_Txt", *(_QWORD*)(v4 + 48));
      v5 = *(unsigned __int8*)(v4 + 72);
      if (v5 == 4) {
        v6 = nullptr;
      }
      else {
        v6 = GameData_1fafca8[v5];
      }
      return GameRoutine_1562060(a1 + 106, "T_Genre", v6);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcTheaterWatchUnitMenu_OnUnitDecide(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  void* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  struct {
    _QWORD v29[4];
    _QWORD* v30;
  } v29_;
  struct {
    __int64 (*v31[4])();
    __int64 (**v32)();
  } v31_;
  const char* v33;
  struct {
    __int64* v34;
    __int64 (*v35)();
    char gap128_[16];
    unsigned __int64* v36;
  } v34_;

  v2 = GameData_212dcd0;
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  v3 = *(__int64**)(a1 + 1184);
  v4 = *(__int64**)(a1 + 1192);
  while (v3 != v4) {
    v5 = *v3++;
    GameRoutine_928b80((_QWORD*)*v2, v5);
  }
  v33 = "MID_TheaterWatchMenu_Confirm";
  v34_.v34 = (__int64*)GameData_20656a0;
  v29_.v30 = v29_.v29;
  v34_.v36 = (unsigned __int64*)&v34_.v34;
  v31_.v32 = v31_.v31;
  v31_.v31[0] = (__int64 (*)())GameData_2065720;
  v29_.v29[0] = GameData_2065720;
  v6 = GameRoutine_13fa790(a1, (__int64)&v33, (__int64)&v34_.v34,
                           (__int64)v31_.v31, (__int64)v29_.v29);
  if (v29_.v30 == v29_.v29) {
    v7 = 32;
  }
  else {
    if (v29_.v30 == nullptr) {
      goto LABEL_8;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v29_.v30 + v7))((__int64)v29_.v30);
LABEL_8:
  if (v31_.v32 == v31_.v31) {
    v8 = 32;
  }
  else {
    if (v31_.v32 == nullptr) {
      goto LABEL_13;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v31_.v32 + v8))((__int64)v31_.v32);
LABEL_13:
  if (v34_.v36 == (unsigned __int64*)&v34_.v34) {
    v9 = 32;
  }
  else {
    if (v34_.v36 == nullptr) {
      goto LABEL_18;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v34_.v36 + v9))((__int64)v34_.v36);
LABEL_18:
  v31_.v32 = v31_.v31;
  v34_.v36 = (unsigned __int64*)&v34_.v34;
  v31_.v31[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v31_.v31[1] = game_sound_PlayDecideLightSe_ptr[0];
  v34_.v34 = GameData_212d2b8 + 2;
  v34_.v35 = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(&v34_.v34, v6 + 144);
  if (v34_.v36 == (unsigned __int64*)&v34_.v34) {
    v10 = 32;
  }
  else {
    if (v34_.v36 == nullptr) {
      goto LABEL_23;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v34_.v36 + v10))((__int64)v34_.v36);
LABEL_23:
  if (v31_.v32 == v31_.v31) {
    v11 = 32;
  }
  else {
    if (v31_.v32 == nullptr) {
      goto LABEL_28;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))((char*)*v31_.v32 + v11))((__int64)v31_.v32);
LABEL_28:
  v12 = *(unsigned int*)(*v2 + 8);
  if ((v12 & 0x80000000) == 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc40[0] + 64) + 8 * v12);
    if (v13 != 0) {
      v14 = *(_QWORD*)(v13 + 48);
      if (v14 != 0) {
        GameRoutine_60a020((__int64)(v6 + 187), v14);
      }
      v34_.v35 = (__int64 (*)())&GameData_1ada574;
      v34_.v34 = (__int64*)game_HashString((__int64)&GameData_1ada574);
      if (game_GameModeData_instance_ != 0 &&
          (v15 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v34_.v34)) != 0) {
        v16 = *(_DWORD*)(v15 + 32);
      }
      else {
        v16 = 0;
      }
      v17 = GameRoutine_9db9e0(0x14u, v16);
      v18 = *v2;
      *((_DWORD*)v6 + 392) = v17;
      v19 = *(_QWORD*)(v18 + 48);
      v20 = *(_QWORD*)(v18 + 56);
      if ((int)((unsigned __int64)(v20 - v19) >> 3) >= 1) {
        v21 = 0;
        while (1) {
          if (v21 >= (v20 - v19) >> 3) {
            goto LABEL_40;
          }
          v23 = *(_QWORD*)(v19 + 8 * v21);
          if (v23 != 0) {
            v24 = *(_QWORD*)(v23 + 392);
            if (v24 == 0) {
              goto LABEL_49;
            }
            v25 = *(_QWORD*)(v24 + 288);
            if (v25 == 0) {
              goto LABEL_49;
            }
            v26 = GameRoutine_975940(v25);
            if (v26 == 0 || *(unsigned __int16*)(v13 + 16) >=
                                (unsigned int)*(unsigned __int16*)(v26 + 192)) {
              goto LABEL_49;
            }
            v27 = *(unsigned __int8*)(*(_QWORD*)(v26 + 200) +
                                      *(unsigned __int16*)(v13 + 16));
            if (v27 != 5) {
              break;
            }
            LOBYTE(v27) = 2;
            if (*(_BYTE*)(v23 + 2136) != 0) {
            LABEL_51:
              v22 = game_97b2f0(v23 + 2104);
              goto LABEL_39;
            }
          LABEL_38:
            v22 = GameRoutine_67ed20(*(_QWORD**)(v23 + 392));
          LABEL_39:
            game_16ad210((__int64)v6, *(_QWORD*)(v23 + 392), v27, (__int64)v22);
            v18 = *v2;
          }
        LABEL_40:
          v19 = *(_QWORD*)(v18 + 48);
          v20 = *(_QWORD*)(v18 + 56);
          if ((__int64)++v21 >= (int)((unsigned __int64)(v20 - v19) >> 3)) {
            return 12;
          }
        }
        if (v27 == 4) {
        LABEL_49:
          LOBYTE(v27) = 0;
        }
        if (*(_BYTE*)(v23 + 2136) != 0) {
          goto LABEL_51;
        }
        goto LABEL_38;
      }
    }
  }
  return 12;
}

__int64 ProcTheaterWatchUnitMenu_Unknown160()
{
  __int64* v0;
  __int64 v1;
  _QWORD v3[4];
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v0 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2, 0);
  v1 = *v0;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v3[0] = GameData_212e348 + 2;
  v3[1] = 0xFFFF0001FFFF0000LL;
  v3[2] = 0xFFFF0004FFFF0002LL;
  v3[3] = 0xFFFF0006FFFF0005LL;
  v18 = 8;
  v4 = -65529;
  v5 = -65528;
  return GameRoutine_a4dbe0(v1, "MID_Menu_Facility_UnitSelect_Help", 0, v3);
}

__int64 ProcTheaterWatchUnitMenu_Unknown6()
{
  __int64* v0;
  __int64 v1;
  _QWORD v3[4];
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v0 = msg_MessageManager_instance__ptr[0];
  Manager_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2, 0);
  v1 = *v0;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v3[0] = GameData_212e348 + 2;
  v3[1] = 0xFFFF0001FFFF0000LL;
  v3[2] = 0xFFFF0004FFFF0002LL;
  v3[3] = 0xFFFF0006FFFF0005LL;
  v18 = 8;
  v4 = -65529;
  v5 = -65528;
  return GameRoutine_a4dbe0(v1, "MID_Menu_Facility_UnitSelect_Help", 0, v3);
}

__int64

game_facility_anonymous_ProcTheaterWatchUnitMenu_OnUnitDecide_closure_Invoke()
{
  if (GameData_22420c8 != 0) {
    *(_DWORD*)(GameData_22420c8 + 152) = 3;
  }
  return 4;
}

__int64

game_facility_anonymous_ProcTheaterWatchUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = *a2;
  v4 = **(_QWORD**)(a1 + 8);
  v5 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 112, 16, 0);
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 88) = v3;
  *(_QWORD*)(v5 + 104) = v2;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_WORD*)(v5 + 96) = 260;
  *(_QWORD*)v5 = game_facility_anonymous_TheaterWatchUnitMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  return BasicMenuCursor_16e0c00(v4, v5);
}

#pragma GCC visibility pop
