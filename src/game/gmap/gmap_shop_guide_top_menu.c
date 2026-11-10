#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1902180(_QWORD, _QWORD);
__int64 GameRoutine_ae0560(void);
__int64 Impl_13261c0(_QWORD);
__int64 Impl_13262e0(_QWORD);
extern __int64 (*GameData_210f310[])();
extern __int64 GameData_21c96e8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_gmap_GmapShopGuideTopMenu_HasShopGuide(__int64 a1);
__int64
game_gmap_GmapShopGuideTopMenu_HasShopGuide_lambda0_Invoke(__int64 result,
                                                           __int64 a2);

__int64 game_gmap_GmapShopGuideTopMenu_HasShopGuide(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  unsigned __int8 v13;
  _QWORD* v14;

  v13 = 0;
  if ((unsigned __int8)((__int64 (*)(void))Impl_13261c0)() == 1) {
    v2 = Impl_13262e0(a1);
    if (v2 == 0 || *(_WORD*)(v2 + 32) == 0) {
      goto LABEL_11;
    }
  }
  else {
    if ((unsigned __int8)Impl_13261c0(a1) != 0) {
      goto LABEL_11;
    }
    v4 = *(_QWORD*)(a1 + 120);
    if (v4 != GameRoutine_ae0560() && (GameRoutine_1902180(a1, 2) & 1) == 0 &&
        (GameRoutine_1902180(a1, 4) & 1) == 0 &&
        (GameRoutine_1902180(a1, 1) & 1) == 0) {
      goto LABEL_11;
    }
  }
  v13 = 1;
LABEL_11:
  v5 = v11;
  v11[0] = GameData_210f310;
  v11[1] = &v13;
  v12 = v11;
  v6 = *(_QWORD*)(GameData_21c96e8 + 8);
  v7 = *(_QWORD**)(v6 + 8);
  v8 = *(_QWORD**)(v6 + 16);
  if (v7 != v8) {
    do {
      if (*(_QWORD*)*v7 == a1) {
        v14 = (_QWORD*)*v7;
        if (v12 == nullptr) {
          GameRoutine_60a310(0, v3);
        }
        (*(void (**)(_QWORD*, _QWORD**))(*v12 + 48LL))(v12, &v14);
      }
      ++v7;
    } while (v7 != v8);
    v5 = v12;
    if (v12 != v11) {
      if (v12 != nullptr) {
        v9 = 40;
      LABEL_21:
        (*(void (**)(_QWORD*, __int64))(*v5 + v9))(v5, v3);
      }
      return v13;
    }
  }
  v9 = 32;
  goto LABEL_21;
}

__int64

game_gmap_GmapShopGuideTopMenu_HasShopGuide_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  if (v2 != 0 && *(_BYTE*)(v2 + 32) == 2) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
