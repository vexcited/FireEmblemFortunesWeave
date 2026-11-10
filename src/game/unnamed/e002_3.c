#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f960e8[])();

extern __int64* GameData_212ce90[3];

extern _QWORD GameData_212d330;

extern __int64 GameData_21ca310;

extern __int64 GameData_21caab0;

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6ea9d0(_QWORD);

__int64 GameRoutine_764060(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_7645e0(void);

__int64 GameRoutine_7e74e0(_QWORD);

__int64 GameRoutine_84cb50(_QWORD, _QWORD);

__int64 GameRoutine_975940(_QWORD, _QWORD);

__int64 GameHr_99c360(__int64 a1)
{
  char v1;
  _QWORD* v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  _DWORD* v23;
  __int64 v24;
  __int64 v25;
  char v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  _QWORD v32[4];
  _QWORD* v33;
  __int64 v34;
  int v35;

  v2 = (_QWORD*)(a1 + 56);
  v1 = *(_BYTE*)(a1 + 56);
  *(_WORD*)(a1 + 4) = 0;
  *(_DWORD*)a1 = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(a1 + 72) = 0;
    *(_QWORD*)(a1 + 64) = 0;
  }
  else {
    *(_WORD*)(a1 + 56) = 0;
  }
  *(_BYTE*)(a1 + 84) = 0;
  *(_DWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 6) = 0;
  *(_WORD*)(a1 + 88) = 0;
  result = *GameData_212ce90[0];
  if (*GameData_212ce90[0] == 0) {
    return result;
  }
  v5 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    *(_BYTE*)a1 = *(_BYTE*)(GameData_21caab0 + 15);
    *(_BYTE*)(a1 + 1) = *(_DWORD*)(v5 + 60);
    *(_BYTE*)(a1 + 2) = *(_DWORD*)(v5 + 64);
    *(_BYTE*)(a1 + 3) = *(_DWORD*)(v5 + 68);
    v5 = *(_QWORD*)(v5 + 16);
  }
  else {
    *(_DWORD*)a1 = 0;
  }
  *(_QWORD*)(a1 + 16) = v5;
  *(_WORD*)(a1 + 4) = *(_WORD*)(result + 26);
  v6 = GameRoutine_7645e0();
  *(_DWORD*)(a1 + 6) = v6;
  v34 = 0;
  v35 = -1;
  v33 = v32;
  v32[0] = GameData_1f960e8;
  v32[1] = &v35;
  v32[2] = &v34;
  GameRoutine_764060(v6, v32, v7);
  if (v33 == v32) {
    v9 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_13;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v33 + v9))((__int64)v33);
LABEL_13:
  v10 = v34;
  if (v34 != 0) {
    v11 = *(_QWORD*)(v34 + 392);
    *(_QWORD*)(a1 + 24) = v11;
    if (v11 != 0) {
      v12 = *(_QWORD*)(v11 + 288);
      if (v12 != 0) {
        v12 = GameRoutine_975940(v12, v8);
      }
    }
    else {
      v12 = 0;
    }
    *(_QWORD*)(a1 + 32) = v12;
    *(_QWORD*)(a1 + 40) = GameRoutine_7e74e0(v10);
    if (*(_BYTE*)(v10 + 2136) != 0) {
      if (a1 + 48 != v10 + 2104) {
        v13 = *(unsigned __int8*)(v10 + 2112);
        if ((*(_BYTE*)v2 & 1) != 0) {
          v16 = (v13 & 1) == 0;
          v17 = v13 >> 1;
          if (v16) {
            v18 = v10 + 2113;
          }
          else {
            v18 = *(_QWORD*)(v10 + 2128);
          }
          if (v16) {
            v19 = v17;
          }
          else {
            v19 = *(_QWORD*)(v10 + 2120);
          }
          GameRoutine_64dde0(v2, v18, v19);
        }
        else if ((v13 & 1) != 0) {
          GameRoutine_64df20(v2, *(_QWORD*)(v10 + 2128),
                             *(_QWORD*)(v10 + 2120));
        }
        else {
          v14 = *(_QWORD*)(v10 + 2112);
          v15 = *(_QWORD*)(v10 + 2128);
          v2[1] = *(_QWORD*)(v10 + 2120);
          v2[2] = v15;
          *v2 = v14;
        }
      }
      *(_BYTE*)(a1 + 80) = *(_BYTE*)(v10 + 2136);
      *(_BYTE*)(a1 + 81) = *(_BYTE*)(v10 + 2137);
      *(_BYTE*)(a1 + 82) = *(_BYTE*)(v10 + 2138);
      *(_BYTE*)(a1 + 83) = *(_BYTE*)(v10 + 2139);
      *(_BYTE*)(a1 + 84) = *(_BYTE*)(v10 + 2140);
    }
  }
  LODWORD(v32[0]) = 241;
  result = GameRoutine_6ea9d0(v32);
  if (result != 0) {
    v20 = *(_QWORD*)(result + 432);
    v21 = result;
    if (v20 == 0) {
      v20 = *(_QWORD*)(result + 440);
      if (v20 != 0) {
        v22 = *(unsigned __int8*)(v20 + 16);
        if (v22 <= 8) {
          while (1) {
            v31 = v22 + 1;
            if (((2 << v22) & 0xF0) != 0) {
              v20 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                               24LL * (unsigned __int8)(v22 + 1) + 556000);
              if (v20 != 0) {
                break;
              }
            }
            v22 = v31;
            if (v31 == 9) {
              goto LABEL_36;
            }
          }
        }
        else {
        LABEL_36:
          v20 = 0;
        }
      }
    }
    v23 = (_DWORD*)GameData_212d330;
    while (1) {
    LABEL_39:
      v24 = v20;
      LODWORD(v32[0]) = *v23 & 0xFFF;
      result = GameRoutine_84cb50(v21 + 1744, v32);
      if ((result & 1) == 0 ||
          ((v25 = *(_QWORD*)(v21 + 440)) == 0 ? (v26 = 9)
                                              : (v26 = *(_BYTE*)(v25 + 16)),
           ((1 << v26) & 0xF1) == 0)) {
        v27 = *(_DWORD*)(v21 + 416);
        if ((v27 & 8) == 0) {
          ++*(_BYTE*)(a1 + 88);
          v27 = *(_DWORD*)(v21 + 416);
        }
        if ((v27 & 0x20) != 0) {
          ++*(_BYTE*)(a1 + 89);
        }
      }
      if (v24 == 0) {
        break;
      }
      v20 = *(_QWORD*)(v24 + 432);
      v21 = v24;
      if (v20 == 0) {
        v28 = *(_QWORD*)(v24 + 440);
        v21 = v24;
        if (v28 != 0) {
          v29 = *(unsigned __int8*)(v28 + 16);
          v20 = 0;
          v21 = v24;
          if (v29 <= 8) {
            while (1) {
              v30 = v29 + 1;
              if (((2 << v29) & 0xF0) != 0) {
                v20 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v29 + 1) + 556000);
                if (v20 != 0) {
                  break;
                }
              }
              ++v29;
              if (v30 == 9) {
                v20 = 0;
                v21 = v24;
                goto LABEL_39;
              }
            }
            v21 = v24;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
