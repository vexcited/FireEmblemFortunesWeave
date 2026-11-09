#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1334ec0(_QWORD);
__int64 GameRoutine_133f460(_QWORD);
__int64 GameRoutine_133f9e0(_QWORD, _QWORD);
__int64 GameRoutine_14891b0(_QWORD);
__int64 GameRoutine_1700aa0(_QWORD, _QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_18659c0(_QWORD, _QWORD);
__int64 GameRoutine_828dc0(_QWORD, _QWORD, _QWORD);
__int64 SpotMgr_1333f20(_QWORD);
__int64 game_HashString(void);
extern _UNKNOWN GameData_1ae3518;
extern __int64 GameData_21c96e8;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d728[2];
extern char GameData_226b31c;
__int64 TraderMenuItem_Unknown24(_QWORD* a1);
__int64 TraderMenuItem_Unknown25(_QWORD* a1);

__int64 TraderMenuItem_Unknown24(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64** v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  _QWORD v29[2];

  result = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  if ((result & 1) == 0) {
    goto LABEL_31;
  }
  v3 = *(_QWORD*)(a1[11] + 80LL);
  if (v3 == 0) {
    goto LABEL_31;
  }
  v4 = *(__int64***)(v3 + 40);
  v5 = *v4;
  v6 = v4[1];
  if (v5 == v6) {
  LABEL_6:
    if (GameData_226b31c != 1) {
      goto LABEL_31;
    }
    v8 = *(_QWORD*)(GameData_21c96e8 + 8);
    v9 = *(_DWORD*)(v8 + 56);
    v10 = *(__int64**)(v8 + 8);
    v11 = *(__int64**)(v8 + 16);
    if (v9 < 0) {
      if (v10 == v11) {
        goto LABEL_29;
      }
      while (1) {
        v12 = (_QWORD*)*v10;
        if (*(_QWORD*)(*v10 + 96) == 0 && v12[69] == 0) {
          break;
        }
        if (++v10 == v11) {
          goto LABEL_29;
        }
      }
    }
    else {
      if (v10 == v11) {
        goto LABEL_29;
      }
      while (1) {
        v13 = *v10++;
        v12 = (_QWORD*)v13;
        if (*(_DWORD*)(v13 + 84) == v9) {
          break;
        }
        if (v10 == v11) {
          goto LABEL_29;
        }
      }
    }
    v19 = a1[1];
    if (*(_QWORD*)(v19 + 152) != 0) {
      v20 = *(_QWORD*)(v19 + 152);
    }
    else {
      v20 = a1[1];
    }
    GameRoutine_133f9e0(v12, v20);
    v21 = (__int64*)v12[3];
    v22 = (__int64*)v12[4];
    while (v21 != v22) {
      v23 = *v21++;
      SpotMgr_1333f20(v23);
    }
    goto LABEL_28;
  }
  while (1) {
    v7 = *v5++;
    if (*(_WORD*)(v7 + 72) != 0) {
      break;
    }
    if (v5 == v6) {
      goto LABEL_6;
    }
  }
  if (GameData_226b31c == 1) {
    v14 = *(_QWORD*)(GameData_21c96e8 + 8);
    v15 = *(_DWORD*)(v14 + 56);
    v16 = *(_QWORD*)(v14 + 8);
    v17 = *(_QWORD*)(v14 + 16);
    if ((v15 & 0x80000000) == 0) {
      if (v16 == v17) {
        goto LABEL_29;
      }
      while (1) {
        v18 = *(_QWORD**)v16;
        v16 += 8;
        v12 = v18;
        if (*((_DWORD*)v18 + 21) == v15) {
          goto LABEL_39;
        }
        if (v16 == v17) {
          goto LABEL_29;
        }
      }
    }
    if (v16 != v17) {
      while (1) {
        v12 = *(_QWORD**)v16;
        if (*(_QWORD*)(*(_QWORD*)v16 + 96LL) == 0 && v12[69] == 0) {
          break;
        }
        v16 += 8;
        if (v16 == v17) {
          goto LABEL_29;
        }
      }
    LABEL_39:
      v24 = a1[1];
      if (*(_QWORD*)(v24 + 152) != 0) {
        v25 = *(_QWORD*)(v24 + 152);
      }
      else {
        v25 = a1[1];
      }
      GameRoutine_133f9e0(v12, v25);
      v26 = (__int64*)v12[3];
      v27 = (__int64*)v12[4];
      while (v26 != v27) {
        v28 = *v26++;
        SpotMgr_1333f20(v28);
      }
    LABEL_28:
      GameRoutine_1334ec0(v12);
      GameRoutine_133f460(v12);
    }
  LABEL_29:
    GameRoutine_175b880(*(_QWORD*)(*GameData_212d728[0] + 8) + 5800LL);
    v29[1] = &GameData_1ae3518;
    result = game_HashString();
    v29[0] = result;
    if (game_GameModeData_instance_ != 0) {
      result = GameRoutine_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  v29, 1);
    }
  }

LABEL_31:
  if (*(_QWORD**)(a1[1] + 336LL) == a1) {
    return (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 64LL))(a1, 0);
  }
  return result;
}

__int64 TraderMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64** v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  GameRoutine_14891b0(a1[11]);
  v2 = *(_QWORD*)(a1[11] + 80LL);
  if (v2 != 0) {
    v3 = *(__int64***)(v2 + 40);
    v4 = *v3;
    v5 = v3[1];
    if (v4 == v5) {
    LABEL_6:
      v7 = a1[1];
      v10 = *(_QWORD*)(a1[11] + 80LL);
      GameRoutine_18659c0(v7, &v10);
    }
    else {
      while (1) {
        v6 = *v4++;
        if (*(_WORD*)(v6 + 72) != 0) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_6;
        }
      }
      v9 = a1[1];
      v10 = *(_QWORD*)(a1[11] + 80LL);
      GameRoutine_1700aa0(v9, &v10);
    }
  }
  return 9;
}

#pragma GCC visibility pop
