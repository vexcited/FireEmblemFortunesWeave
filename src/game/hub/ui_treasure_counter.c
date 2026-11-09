#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1585290(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_da1870(void);
__int64 GameRoutine_e00880(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1ff6378[])();
extern __int64 (*GameData_1ff6408[])();
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 GameData_212d690;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_220b6e0;
extern __int64 GameData_225ca88;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212eec0[4];
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
_QWORD* UITreasureCounter_Destructor(_QWORD* result);
__int64 UITreasureCounter_Unknown2();

_QWORD* UITreasureCounter_Destructor(_QWORD* result)
{
  __int64 v1;
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;

  *result = game_hub_UIBase_vtable;
  v1 = GameData_220b6e0;
  v3 = *(char**)(GameData_220b6e0 + 136);
  v2 = *(char**)(GameData_220b6e0 + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD**)v3 != result) {
        v3 += 8;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        return result;
      }
      for (v3 += 16;; v3 += 32) {
        if (*((_QWORD**)v3 - 2) == result) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 - 1) == result) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD**)v3 == result) {
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 + 1) == result) {
          break;
        }
        v6 = v3 + 16;
        if (v6 == v2) {
          return result;
        }
      }
      v3 += 8;
    }
  }

LABEL_17:
  v7 = v3 + 8;
  if (v3 == v2 || v7 == v2) {
    if (v3 != v2) {
    LABEL_28:
      *(_QWORD*)(v1 + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD**)v7 != result) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(v1 + 144)) {
      goto LABEL_28;
    }
  }
  return result;
}

__int64 UITreasureCounter_Unknown2()
{
  __int64 result;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD v23[2];
  _QWORD var8[3];

  result = GameRoutine_da1870();
  if (*(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 200LL) == 0) {
    v3 = GameData_225ca88;
    if (GameData_225ca88 == 0) {
      return result;
    }
    return ui_LayoutAccessor_SetPaneVisible(v3 + 176, "L_Treasure", 0);
  }
  HIDWORD(var8[0]) = 0;
  v1 = GameData_212eec0[0];
  v19[0] = GameData_1ff6408;
  v19[1] = (char*)var8 + 4;
  v22 = v19;
  GameRoutine_e00880(*GameData_212eec0[0], v19);
  result = (__int64)v22;
  if (v22 == v19) {
    v2 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_9;
    }
    v2 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v22 + v2))((__int64)v22);

LABEL_9:
  v3 = GameData_225ca88;
  if (var8[0] <= 0LL) {
    if (GameData_225ca88 == 0) {
      return result;
    }
    return ui_LayoutAccessor_SetPaneVisible(v3 + 176, "L_Treasure", 0);
  }
  if (GameData_225ca88 != 0) {
    ui_LayoutAccessor_SetPaneVisible(GameData_225ca88 + 176, "L_Treasure", 1);
  }
  v4 = *v1;
  HIDWORD(var8[0]) = 0;
  v19[0] = GameData_1ff6378;
  v19[1] = (char*)var8 + 4;
  v22 = v19;
  GameRoutine_e00880(v4, v19);
  if (v22 == v19) {
    v5 = 32;
    goto LABEL_18;
  }
  if (v22 != nullptr) {
    v5 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v22 + v5))((__int64)v22);
  }
  result = HIDWORD(var8[0]);
  if (GameData_225ca88 != 0) {
    v23[1] = var8[1];
    var8[0] = var8[2];
    v6 = result;
    *(struct PseudoSret*)(&v20) =
        GameRoutine_1560070(GameData_225ca88 + 176, "L_Treasure");
    result = v21;
    if (v21 != 0) {
      v7 = std___1___shared_weak_count_lock();
      v8 = v20;
      result = v21;
      if (v21 != 0) {
        result = std___1___shared_weak_count___release_weak(v21);
      }
      if (v7 != 0 && v8 != nullptr) {
        v9 = ui_LayoutAccessor_FindPane(v8, "T_Num");
        if (v9 != 0) {
          v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d690, 0);
          if (v10 != 0) {
            GameRoutine_156c910(v10, "%d", 1);
          }
        }
        v11 = ui_LayoutAccessor_FindTextBox(v8, "T_Num");
        if (v11 != 0) {
          v12 = v11;
          v13 = ui_LayoutAccessor_FindTextBox(v8, "T_Num");
          if (v13 != 0) {
            GameRoutine_190a0c0(&v20, v23, (char*)&v22 + 4, v13,
                                *(_QWORD*)(v13 + 216));
            v14 = v23[0];
          }
          else {
            v14 = 0;
          }
          v15 = *(_BYTE*)(v12 + 88);
          *(_QWORD*)(v12 + 80) = v14;
          *(_BYTE*)(v12 + 88) = v15 | 0x10;
        }
        if (v6 <= 0) {
          v16 = "Complete";
        }
        else {
          v16 = "Default";
        }
        GameRoutine_1562cf0(v8, v16);
        if (ui_LayoutAccessor_FindAlignment(v8, "A_Txt") != 0) {
          Alignment_56b600();
          if (v8[1] != 0) {
            v17 = std___1___shared_weak_count_lock();
            if (v17 != 0) {
              v18 = v17;
              if (*v8 != 0) {
                ControlCreator_13633c0();
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                std___1___shared_weak_count___release_weak(v18);
              }
            }
          }
        }
        result = GameRoutine_1585290(v8, "N_Contents", "Wdw");
      }
      else if (v7 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
