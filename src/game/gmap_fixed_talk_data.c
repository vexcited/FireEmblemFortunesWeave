#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Impl_13261c0(_QWORD);
extern __int64 GameData_21c96e8;
__int64 game_GmapFixedTalkData_IsCondition_lambda0_Invoke(__int64 result,
                                                          _QWORD* a2);
__int64 game_GmapFixedTalkData_IsCondition_lambda1_Invoke(__int64 a1,
                                                          _QWORD* a2);
__int64 Signal_Shoot_821040();
__int64 TroopMgr_1345b40();
__int64 game_Unit_GetParam(__int64);
extern __int64 (*GameData_2045630[])();
extern __int64 (*GameData_20456b0[])();
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
void game_gmap_133fb00(__int64*, __int64);
__int64 game_GmapFixedTalkData_IsCondition(__int64 a1, __int64 a2, __int64 a3);

__int64 game_GmapFixedTalkData_IsCondition(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3;
  __int64 v4;
  unsigned int v5;
  bool v6;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  _BYTE v24[4];

  v3 = *(_WORD*)(a1 + 42);
  if (v3 == 0) {
    return 1;
  }
  if ((*(_WORD*)(a1 + 42) & 0x200) != 0 &&
      (game_GameModeData_instance_ == 0 ||
       *(_DWORD*)(game_GameModeData_instance_ + 60) != 1)) {
    return 0;
  }
  if ((v3 & 0xF) != 0) {
    v4 = *(_QWORD*)(a2 + 120);
    if (v4 == 0 || (v3 & 1) != 0 && *(_BYTE*)(v4 + 256) != 1) {
      return 0;
    }
    if ((v3 & 2) != 0 && *(_BYTE*)(v4 + 256) != 2 ||
        (v3 & 4) != 0 && *(_BYTE*)(v4 + 256) != 3 ||
        (v3 & 8) != 0 && *(_BYTE*)(v4 + 256) != 4) {
      return 0;
    }
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = *(unsigned __int16*)(game_gmap_GmapClock_instance_ + 14);
    v6 = v5 < 6;
    if ((v3 & 0x20) != 0 && v5 > 5) {
      return 0;
    }
  }
  else {
    v6 = true;
  }
  if ((v3 & 0x10) != 0 && v6) {
    return 0;
  }
  if ((v3 & 0x40) != 0) {
    v24[0] = 0;
    v8 = *(_QWORD*)(GameData_21c96e8 + 8);
    v9 = *(_DWORD*)(v8 + 56);
    v10 = *(_QWORD*)(v8 + 8);
    if (v9 < 0) {
      while (1) {
        v11 = *(__int64**)v10;
        if (*(_QWORD*)(*(_QWORD*)v10 + 96LL) == 0 && v11[69] == 0) {
          break;
        }
        v10 += 8;
      }
    }
    else {
      v13 = *(__int64**)v10;
      v12 = (__int64*)(v10 + 8);
      v11 = v13;
      if (*((_DWORD*)v13 + 21) != v9) {
        do {
          v14 = *v12++;
          v11 = (__int64*)v14;
        } while (*(_DWORD*)(v14 + 84) != v9);
      }
    }
    v15 = a3;
    v16 = a1;
    v22_.v22[0] = GameData_2045630;
    v22_.v22[1] = v24;
    v22_.v23 = v22_.v22;
    game_gmap_133fb00(v11, (__int64)v22_.v22);
    if (v22_.v23 == v22_.v22) {
      v17 = 32;
    }
    else {
      a3 = v15;
      if (v22_.v23 == nullptr) {
      LABEL_36:
        if (v24[0] != 1) {
          return 0;
        }
        v3 = *(_WORD*)(v16 + 42);
        a1 = v16;
        goto LABEL_38;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*v22_.v23 + v17))((__int64)v22_.v23);
    a3 = v15;
    goto LABEL_36;
  }
LABEL_38:
  if ((v3 & 0x80) != 0) {
    v18 = *(__int16*)(a3 + 492);
    v19 = a1;
    LOBYTE(v22_.v22[0]) = 0;
    if ((int)game_Unit_GetParam(a3) < 2 * v18) {
      return 0;
    }
    v3 = *(_WORD*)(v19 + 42);
  }
  if ((v3 & 0x100) != 0) {
    if ((Signal_Shoot_821040() & 1) == 0) {
      return 0;
    }
    v24[0] = 0;
    v20 = (__int64*)TroopMgr_1345b40();
    v22_.v22[0] = GameData_20456b0;
    v22_.v22[1] = v24;
    v22_.v23 = v22_.v22;
    game_gmap_133fb00(v20, (__int64)v22_.v22);
    if (v22_.v23 == v22_.v22) {
      v21 = 32;
    }
    else {
      if (v22_.v23 == nullptr) {
        goto LABEL_50;
      }
      v21 = 40;
    }
    (*(void (**)(__int64))(*v22_.v23 + v21))((__int64)v22_.v23);
  LABEL_50:
    if (v24[0] != 1) {
      return 0;
    }
  }
  return 1;
}

__int64 game_GmapFixedTalkData_IsCondition_lambda0_Invoke(__int64 result,
                                                          _QWORD* a2)
{
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *(_BYTE**)(result + 8);
  if ((*v2 & 1) == 0 && *a2 != 0) {
    v3 = *(_QWORD*)(GameData_21c96e8 + 8);
    v4 = *(_QWORD*)(v3 + 8);
    v5 = *(_QWORD*)(v3 + 16);
    while (v4 != v5) {
      if (**(_QWORD**)v4 == *a2) {
        v6 = *(_QWORD*)(*(_QWORD*)v4 + 96LL);
        if (v6 != 0 && *(_BYTE*)(v6 + 32) == 1) {
          *v2 = 1;
          return result;
        }
      }
      v4 += 8;
    }
  }
  return result;
}

__int64 game_GmapFixedTalkData_IsCondition_lambda1_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 result;

  result = Impl_13261c0(*a2);
  if ((unsigned __int8)result == 5) {
    **(_BYTE**)(a1 + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
