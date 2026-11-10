#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21c96e8;
extern __int64* GameData_2130e70;
__int64 game_gmap_GmapTroopInfo_Setup_lambda0_Invoke(__int64 result,
                                                     __int64* a2);
__int64 GmapTroopInfo_1010590(__int64*);
__int64 LayoutAccessor_1562680(__int64 result, __int64, float);
__int64 game_gmap_1655e80(__int64);
extern __int64 (*GameData_2075e48[])();
extern __int64* GameData_212c790;
extern __int64 GameData_22416c0;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_gmap_GmapTroopInfo_Setup(__int64 a1, __int64* a2);

__int64 game_gmap_GmapTroopInfo_Setup(__int64 a1, __int64* a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  int v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  int v28;
  char v29;
  _BYTE* v30;
  __int64 result;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    _QWORD v37[4];
    _QWORD* v38;
  } v37_;
  int v39;
  __int64 v40;

  *(_QWORD*)(a1 + 8) = a2;
  v3 = GameData_212c790;
  v4 = *GameData_212c790;
  v5 = *(_QWORD*)(*GameData_212c790 + 8);
  if (*(_BYTE*)(v5 + 60) == 1) {
    v6 = a2[12];
    v7 = a2[69];
    if (*(_BYTE*)(GameData_22416c0 + 54) == 1) {
      if ((v6 | v7) != 0 || *((_DWORD*)a2 + 21) != *(_DWORD*)(v5 + 56) ||
          a2[4] == a2[3]) {
        goto LABEL_11;
      }
    LABEL_38:
      v30 = (_BYTE*)(a1 + 36);
      v32 = *(_BYTE*)(a1 + 36);
      *(_DWORD*)(a1 + 32) = 1;
      if ((v32 & 1) != 0) {
        return game_gmap_1655e80(a1);
      }
    LABEL_39:
      LayoutAccessor_1562680(*(_QWORD*)(a1 + 16) + 88LL, (__int64)"KeyOff",
                             0x1.0000000000000p+0f);
      v33 = *(_QWORD*)(*v3 + 8);
      if (*(_BYTE*)(v33 + 60) == 1) {
        v34 = *(_QWORD*)(a1 + 8);
        v35 = *(_QWORD*)(v34 + 96);
        v36 = *(_QWORD*)(v34 + 552);
        if (*(_BYTE*)(*GameData_2130e70 + 54) == 1) {
          if ((v35 | v36) != 0 ||
              *(_DWORD*)(v34 + 84) != *(_DWORD*)(v33 + 56) ||
              *(_QWORD*)(v34 + 32) == *(_QWORD*)(v34 + 24)) {
            goto LABEL_49;
          }
        }
        else if ((v35 | v36) == 0 ||
                 *(_QWORD*)(v34 + 32) == *(_QWORD*)(v34 + 24) ||
                 (v35 != 0 || v36 == 0 || *(_QWORD*)(v34 + 104) != 0 ||
                  *(__int16*)(v34 + 642) * *(__int16*)(v34 + 640) *
                          *(__int16*)(v34 + 644) !=
                      0 ||
                  *(_QWORD*)(v36 + 352) != 0) &&
                     (*(_WORD*)(v34 + 544) & 3) == 2) {
          goto LABEL_49;
        }
        (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 40LL))(
            *(_QWORD*)(a1 + 16), 0);
        result = LayoutAccessor_1562680(*(_QWORD*)(a1 + 16) + 88LL,
                                        (__int64)"Out", 0x1.0000000000000p+0f);
        *(_DWORD*)(a1 + 40) = 1;
        goto LABEL_50;
      }
    LABEL_49:
      result = game_gmap_1655e80(a1);
    LABEL_50:
      *v30 = 1;
      return result;
    }
    if ((v6 | v7) != 0 && a2[4] != a2[3] &&
        (v6 == 0 && v7 != 0 && a2[13] == 0 &&
             *((__int16*)a2 + 321) * *((__int16*)a2 + 320) *
                     *((__int16*)a2 + 322) ==
                 0 &&
             *(_QWORD*)(v7 + 352) == 0 ||
         (a2[68] & 3) != 2)) {
      goto LABEL_38;
    }
  }
LABEL_11:
  v8 = *((_DWORD*)a2 + 135);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = a2[3];
    v12 = a2[4] - v11;
    v13 = (__int64*)(v11 + 8LL * (unsigned int)v10);
    if (v10 < v12 >> 3) {
      a2 = v13;
    }
  }
  v14 = *a2;
  v15 = v37_.v37;
  v39 = 0;
  v37_.v37[0] = GameData_2075e48;
  v37_.v37[1] = &v39;
  v37_.v38 = v37_.v37;
  *(_QWORD*)a1 = v14;
  if (v14 == 0) {
    goto LABEL_28;
  }
  v16 = *(_QWORD*)(v4 + 8);
  v17 = *(__int64**)(v16 + 8);
  v18 = *(__int64**)(v16 + 16);
  if (v17 == v18) {
    v15 = v37_.v37;
  LABEL_28:
    v26 = 32;
    goto LABEL_29;
  }
  do {
    v19 = *v17;
    v20 = *(_DWORD*)(*v17 + 540);
    v21 = (_QWORD*)*v17;
    v9 = __OFSUB__(v20, 1);
    v22 = (unsigned int)(v20 - 1);
    if (((v22 & 0x80000000) != 0LL) == v9) {
      v23 = *(_QWORD*)(v19 + 24);
      v24 = *(_QWORD*)(v19 + 32) - v23;
      v25 = (_QWORD*)(v23 + 8LL * (unsigned int)v22);
      if (v22 >= v24 >> 3) {
        v21 = (_QWORD*)*v17;
      }
      else {
        v21 = v25;
      }
    }
    if (*v21 == v14) {
      v40 = *v17;
      if (v37_.v38 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, __int64*))(*v37_.v38 + 48LL))(v37_.v38, &v40);
    }
    ++v17;
  } while (v17 != v18);
  v15 = v37_.v38;
  if (v37_.v38 == v37_.v37) {
    goto LABEL_28;
  }
  if (v37_.v38 != nullptr) {
    v26 = 40;
  LABEL_29:
    (*(void (**)(_QWORD*, __int64*))(*v15 + v26))(v15, a2);
  }
  v27 = v39;
  v28 = *(_DWORD*)(a1 + 32);
  v30 = (_BYTE*)(a1 + 36);
  v29 = *(_BYTE*)(a1 + 36);
  *(_DWORD*)(a1 + 32) = v39;
  if ((v29 & 1) == 0) {
    goto LABEL_39;
  }
  if (v27 == v28) {
    return game_gmap_1655e80(a1);
  }
  result = GmapTroopInfo_1010590(*(__int64**)(a1 + 16));
  *(_DWORD*)(a1 + 40) = 0;
  return result;
}

__int64 game_gmap_GmapTroopInfo_Setup_lambda0_Invoke(__int64 result,
                                                     __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;

  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  if (*(_BYTE*)(v2 + 60) != 1) {
    goto LABEL_18;
  }
  v3 = *a2;
  v4 = *(_QWORD*)(*a2 + 96);
  v5 = *(_QWORD*)(*a2 + 552);
  if (*(_BYTE*)(*GameData_2130e70 + 54) == 1) {
    if ((v4 | v5) == 0 && *(_DWORD*)(v3 + 84) == *(_DWORD*)(v2 + 56) &&
        *(_QWORD*)(v3 + 32) != *(_QWORD*)(v3 + 24)) {
      return result;
    }
  LABEL_18:
    ++**(_DWORD**)(result + 8);
    return result;
  }
  if ((v4 | v5) == 0 || *(_QWORD*)(v3 + 32) == *(_QWORD*)(v3 + 24)) {
    goto LABEL_18;
  }
  if (v4 != 0 || (v5 != 0 ? (v6 = *(_QWORD*)(v3 + 104) == 0) : (v6 = false),
                  !v6 ||
                      *(__int16*)(v3 + 642) * *(__int16*)(v3 + 640) *
                              *(__int16*)(v3 + 644) !=
                          0 ||
                      *(_QWORD*)(v5 + 352) != 0)) {
    if ((*(_WORD*)(v3 + 544) & 3) == 2) {
      goto LABEL_18;
    }
  }
  return result;
}

#pragma GCC visibility pop
