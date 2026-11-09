#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern _UNKNOWN* GameData_212fcd8;
__int64 GameRoutine_10140c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562f00(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15740c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameHr_19e9eb0(__int64 a1)
{
  char v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  const char* v12;
  int v13;
  const char* v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _BYTE v22[20];

  v1 = *(_BYTE*)(a1 + 1080);
  GameRoutine_15e0120(v22);
  if ((v1 & 1) == 0) {
    GameRoutine_15e0200(v22);
  }
  v3 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
  GameRoutine_15740c0(v3, *(_QWORD*)(a1 + 1072), 0, 0, 0);
  GameRoutine_1560ec0(a1 + 848, "Face00", 0);
  v4 = GameRoutine_155f480(a1 + 848, "Face00");
  if (v4 != 0) {
    v5 = GameRoutine_1a0a6c0(v4, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v5 = 0;
  }
  v6 = *(_QWORD*)(a1 + 1072);
  v15 = nullptr;
  v16 = nullptr;
  v7 = *(_QWORD*)(a1 + 1088);
  v20 = *(_QWORD*)(v6 + 392);
  v21 = 2;
  v8 = *(_QWORD*)GameData_212fcd8;
  v17 = 0;
  v18 = v8;
  GameRoutine_10140c0(v7, v5, 0, &v20, &v15);
  if ((*(_BYTE*)(a1 + 1064) & 1) == 0) {
    *(struct PseudoSret*)(&v15) = GameRoutine_1560070(a1 + 848, "L_Condition");
    if (v16 != nullptr) {
      v9 = GameRoutine_1a0a0c0(v16);
      v10 = v15;
      if (v16 != nullptr) {
        GameRoutine_1a09c50(v16);
      }
      if (v9 != 0 && v10 != nullptr) {
        GameRoutine_1562680(v10, "Out", 1.0f);
        GameRoutine_15638b0(v10, "Out", 0);
        GameRoutine_1562f00(v10, "Out");
        GameRoutine_1563030(v10, "Out", 0);
        goto LABEL_14;
      }
      if (v9 != 0) {
      LABEL_14:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          GameRoutine_1a09c50(v9);
        }
      }
    }
    *(_BYTE*)(a1 + 1248) = 0;
  }
  *(struct PseudoSret*)(&v15) = GameRoutine_1560070(a1 + 848, "L_KeyHelp00");
  if (v16 != nullptr) {
    v11 = GameRoutine_1a0a0c0(v16);
    v12 = v15;
    if (v16 != nullptr) {
      GameRoutine_1a09c50(v16);
    }
    if (v11 != 0 && v12 != nullptr) {
      v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
      HIDWORD(v17) = 0;
      LODWORD(v18) = v13;
      BYTE4(v18) = 0;
      v19 = 0;
      v15 = "Play";
      v16 = "MID_KeyHelp_Play";
      LOBYTE(v17) = 1;
      GameRoutine_1593d90(v12, &v15);
    }
    else if (v11 == 0) {
      goto LABEL_26;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      GameRoutine_1a09c50(v11);
    }
  }
LABEL_26:
  *(_BYTE*)(a1 + 1064) = 1;
  return GameRoutine_15e04f0(v22);
}

#pragma GCC visibility pop
