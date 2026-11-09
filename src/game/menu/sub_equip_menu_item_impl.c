#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15de420(_QWORD, _QWORD);
__int64 GameRoutine_15de9d0(_QWORD, _QWORD);
__int64 GameRoutine_15dea90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
extern __int64 game_g_game_setting;
__int64 SubEquipMenuItem_15cd3a0(__int64 a1, _QWORD* a2);
__int64 SubEquipMenuItem_15cd7e0(__int64 a1, _QWORD* a2);
__int64 SubEquipMenuItem_15cdd60(__int64 a1);

__int64 SubEquipMenuItem_15cd3a0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;

  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0 ||
      (GameRoutine_15de420(*(_QWORD*)(v3 + 88), *(unsigned int*)(v3 + 40)) &
       1) == 0) {
    return 1;
  }
  if (*(_WORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3) == 0) {
    v11 = *(_QWORD*)(v3 + 8);
    v12 = *(_DWORD*)(v11 + 640);
    if (v12 >= 1) {
      v13 = *(char**)(v11 + 232);
      v14 = *(char**)(v11 + 240);
      if (v13 != v14) {
        v15 = v14 - v13 - 8;
        v16 = (v15 >> 3) + 1;
        if (v15 >= 0x18) {
          v20 = 0;
          while (v12 - 1 != (_DWORD)v20) {
            if (v12 == (_DWORD)v20 + 2) {
              v13 += 8;
              break;
            }
            if (v12 == (_DWORD)v20 + 3) {
              v13 += 16;
              break;
            }
            if (v12 == (_DWORD)v20 + 4) {
              v13 += 24;
              break;
            }
            v13 += 32;
            v20 += 4;
            v17 = v20;
            if ((v16 & 0x3FFFFFFFFFFFFFFCLL) == v20) {
              goto LABEL_22;
            }
          }
        }
        else {
          v17 = 0;
        LABEL_22:
          v18 = v16 & 3;
          if ((v16 & 3) == 0) {
            goto LABEL_4;
          }
          v19 = ~v17 + v12;
          while (v19 != 0) {
            v13 += 8;
            --v19;
            if (--v18 == 0) {
              goto LABEL_4;
            }
          }
        }
        v21 = *(_QWORD*)v13;
        if (*(_QWORD*)v13 != 0) {
          v22 = *(_QWORD*)(v11 + 336);
          if (v22 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 168LL))(v22);
          }
          *(_QWORD*)(v11 + 336) = v21;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v11, 1, 0, 0);
          v23 = *(_QWORD*)(v11 + 336);
          if (v23 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v23 + 160LL))(v23);
            game_IsVibrationEnabled(game_g_game_setting + 712);
            v24 = *(_QWORD*)(v11 + 336);
            v25 = 4;
            if (v24 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 120LL))(v24) &
                   1) != 0) {
                v25 = 4;
              }
              else {
                v25 = 0;
              }
            }
          }
          else {
            v25 = 4;
          }
          *(_DWORD*)(v11 + 356) = *(_DWORD*)(v11 + 356) & 0xFFFFFFFB | v25;
        }
      }
    }
  }

LABEL_4:
  v4 = *(_QWORD*)(v3 + 88);
  if (*(_BYTE*)(a1 + 16) == 1) {
    GameRoutine_15de9d0(v4, 1);
  }
  else if (*(_BYTE*)(a1 + 17) == 1) {
    GameRoutine_15dea90(v4, *(unsigned __int8*)(a1 + 18), 1);
  }
  v6 = *(_QWORD*)(v3 + 88);
  if (v6 != 0) {
    game_Unit_Unknown6c4610(*(_QWORD*)(v3 + 88));
    *(_WORD*)(v6 + 20) |= 1u;
  }
  v7 = *(_QWORD**)(v3 + 96);
  v8 = v7[38];
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 1080LL))(v8);
  }
  v9 = v7[39];
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 1080LL))(v9);
  }
  v10 = v7[40];
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 1080LL))(v10);
  }
  return 2;
}

__int64 SubEquipMenuItem_15cd7e0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v3 = *(_QWORD*)(v2 + 96);
  v4 = *(_QWORD*)(v3 + 304);
  *(_DWORD*)(v3 + 356) |= 1u;
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 240LL))(v4, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 248LL))(v4, 0);
  GameRoutine_17871c0(*(_QWORD*)(v2 + 96), 1, 0);
  return 2;
}

__int64 SubEquipMenuItem_15cdd60(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  int v11;
  char* v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;

  v1 = *(_QWORD**)(a1 + 8);
  if (*(_WORD*)(*(__int64 (**)(_QWORD*))(*v1 + 560LL))(v1) != 0) {
    goto LABEL_2;
  }
  v10 = v1[1];
  v11 = *(_DWORD*)(v10 + 640);
  if (v11 < 1) {
    goto LABEL_2;
  }
  v12 = *(char**)(v10 + 232);
  v13 = *(char**)(v10 + 240);
  if (v12 == v13) {
    goto LABEL_2;
  }
  v14 = v13 - v12 - 8;
  v15 = (v14 >> 3) + 1;
  if (v14 >= 0x18) {
    v19 = 0;
    while (v11 - 1 != (_DWORD)v19) {
      if (v11 == (_DWORD)v19 + 2) {
        v12 += 8;
        goto LABEL_34;
      }
      if (v11 == (_DWORD)v19 + 3) {
        v12 += 16;
        goto LABEL_34;
      }
      if (v11 == (_DWORD)v19 + 4) {
        v12 += 24;
        goto LABEL_34;
      }
      v12 += 32;
      v19 += 4;
      v16 = v19;
      if ((v15 & 0x3FFFFFFFFFFFFFFCLL) == v19) {
        goto LABEL_19;
      }
    }
    goto LABEL_34;
  }
  v16 = 0;

LABEL_19:
  v17 = v15 & 3;
  if ((v15 & 3) != 0) {
    v18 = ~v16 + v11;
    while (v18 != 0) {
      v12 += 8;
      --v18;
      if (--v17 == 0) {
        goto LABEL_2;
      }
    }
  LABEL_34:
    v20 = *(_QWORD*)v12;
    if (*(_QWORD*)v12 != 0) {
      v21 = *(_QWORD*)(v10 + 336);
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 168LL))(v21);
      }
      *(_QWORD*)(v10 + 336) = v20;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v10, 1, 0, 0);
      v22 = *(_QWORD*)(v10 + 336);
      if (v22 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 160LL))(v22);
        game_IsVibrationEnabled(game_g_game_setting + 712);
        v23 = *(_QWORD*)(v10 + 336);
        v24 = 4;
        if (v23 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 120LL))(v23) & 1) !=
              0) {
            v24 = 4;
          }
          else {
            v24 = 0;
          }
        }
      }
      else {
        v24 = 4;
      }
      *(_DWORD*)(v10 + 356) = *(_DWORD*)(v10 + 356) & 0xFFFFFFFB | v24;
    }
  }

LABEL_2:
  v3 = v1[11];
  if (*(_BYTE*)(a1 + 16) == 1) {
    GameRoutine_15de9d0(v3, 1);
  }
  else if (*(_BYTE*)(a1 + 17) == 1) {
    GameRoutine_15dea90(v3, *(unsigned __int8*)(a1 + 18), 1);
  }
  v4 = v1[11];
  if (v4 != 0) {
    game_Unit_Unknown6c4610(v1[11]);
    *(_WORD*)(v4 + 20) |= 1u;
  }
  v5 = (_QWORD*)v1[12];
  v6 = v5[38];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 1080LL))(v6);
  }
  v7 = v5[39];
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1080LL))(v7);
  }
  v8 = v5[40];
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 1080LL))(v8);
  }
  return 5;
}

#pragma GCC visibility pop
