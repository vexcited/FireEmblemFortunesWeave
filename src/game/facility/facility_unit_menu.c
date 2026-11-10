#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenu_16e2460(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_15b7780(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_205e148[])();
extern __int64 GameData_205d9d8;
extern __int64 GameData_212d690;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 FacilityUnitMenu_15e8f40(__int64* a1, _BYTE* a2);
_QWORD* game_facility_FacilityUnitMenu_Cancel(_QWORD* a1);
bool game_facility_FacilityUnitMenu_Cancel_lambda0_Invoke(__int64 a1,
                                                          __int64 a2);

__int64 FacilityUnitMenu_15e8f40(__int64* a1, _BYTE* a2)
{
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)a2 + 464LL))(a2) & 1) == 0 ||
      (a2[79] & 1) != 0) {
    return 0;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)a2 + 56LL))(a2, 1);
  v5 = (__int64*)a1[148];
  v6 = a1[149] - (_QWORD)v5;
  if (v6 != 0) {
    v7 = v6 >> 3;
    v8 = 1;
    while (1) {
      v9 = *v5++;
      if (v9 == 0) {
        break;
      }
      ++v8;
      if (--v7 == 0) {
        goto LABEL_8;
      }
    }
  }
  else {
  LABEL_8:
    v8 = 0;
  }
  *((_DWORD*)a2 + 10) = v8 + ((*(__int64 (**)(__int64*))(*a1 + 1192))(a1) & 1);
  v10 = a1[149];
  v11 = a1[148];
  if (v10 == v11) {
  LABEL_13:
    v16 = -1;
  }
  else {
    v12 = (v10 - v11) >> 3;
    v13 = 0;
    v14 = (__int64*)a1[148];
    while (1) {
      v15 = *v14++;
      if (v15 == 0) {
        break;
      }
      v13 += 0x100000000LL;
      if (--v12 == 0) {
        goto LABEL_13;
      }
    }
    v16 = v13 >> 32;
  }
  *(_QWORD*)(v11 + 8 * v16) = *((_QWORD*)a2 + 11);
  (*(void (**)(__int64*, _BYTE*))(*a1 + 1248))(a1, a2);
  GameRoutine_15b7780(a2);
  v17 = *a1;
  ++*((_DWORD*)a1 + 302);
  (*(void (**)(__int64*))(v17 + 1192))(a1);
  v18 = ui_LayoutAccessor_FindPane(a1 + 119, "L_Num/T_Num");
  if (v18 != 0) {
    v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d690, 0);
    if (v19 != 0) {
      GameRoutine_156c910(v19, "%d", 1);
    }
  }
  return 1;
}

_QWORD* game_facility_FacilityUnitMenu_Cancel(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  char* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  _DWORD* v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  _QWORD v25[4];
  _QWORD* v26;
  __int64 v27;

  v2 = (__int64*)(a1[149] - 8LL);
  do {
    v4 = *v2--;
    v3 = v4;
  } while (v4 == 0);
  if (((*(__int64 (**)(_QWORD*))(*a1 + 1208LL))(a1) & 1) == 0 ||
      (v6 = a1[42]) == 0 ||
      (result = (_QWORD*)__dynamic_cast(v6, GameData_212e008[0],
                                        &GameData_205d9d8, 0)) == nullptr ||
      *((_BYTE*)result + 79) != 1 || (v3 = result[11]) != 0) {
    v8 = (char*)a1[148];
    v9 = (char*)a1[149];
    if (v8 != v9) {
      v10 = v9 - v8 - 8;
      if ((~(_BYTE)v10 & 0x18) != 0) {
        v11 = ((unsigned __int8)((unsigned int)v10 >> 3) + 1) & 3;
        while (*(_QWORD*)v8 != v3) {
          v8 += 8;
          if (--v11 == 0) {
            goto LABEL_13;
          }
        }
      LABEL_23:
        *(_QWORD*)v8 = 0;
      }
      else {
      LABEL_13:
        if (v10 >= 0x18) {
          v8 += 16;
          while (1) {
            if (*((_QWORD*)v8 - 2) == v3) {
              *((_QWORD*)v8 - 2) = 0;
              goto LABEL_24;
            }
            if (*((_QWORD*)v8 - 1) == v3) {
              v8 -= 8;
              goto LABEL_23;
            }
            if (*(_QWORD*)v8 == v3) {
              goto LABEL_23;
            }
            if (*((_QWORD*)v8 + 1) == v3) {
              break;
            }
            v12 = v8 + 16;
            v8 += 32;
            if (v12 == v9) {
              goto LABEL_24;
            }
          }
          *((_QWORD*)v8 + 1) = 0;
        }
      }
    }
  LABEL_24:
    v13 = (_QWORD*)a1[29];
    v14 = (_QWORD*)a1[30];
    result = v25;
    v25[0] = GameData_205e148;
    v25[1] = v3;
    v26 = v25;
    if (v13 == v14) {
      v17 = nullptr;
    }
    else {
      v15 = GameData_212e008[0];
      while (1) {
        if (*v13 != 0) {
          v16 = __dynamic_cast(*v13, v15, &GameData_205d9d8, 0);
          if (v16 != 0) {
            v17 = (_DWORD*)v16;
            v27 = v16;
            if (v26 == nullptr) {
              GameRoutine_60a310(0, v5);
            }
            if (((*(__int64 (**)(_QWORD*, __int64*))(*v26 + 48LL))(v26, &v27) &
                 1) != 0) {
              break;
            }
          }
        }
        if (++v13 == v14) {
          v17 = nullptr;
          break;
        }
      }
      result = v26;
      if (v26 != v25) {
        if (v26 != nullptr) {
          v18 = 40;
        LABEL_38:
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v18))(
              result, v5);
        }
        if (v17 == nullptr) {
          return result;
        }
        (*(void (**)(_DWORD*, _QWORD))(*(_QWORD*)v17 + 56LL))(v17, 0);
        (*(void (**)(_QWORD*, _DWORD*))(*a1 + 1256LL))(a1, v17);
        v17[10] = 0;
        GameRoutine_15b7780(v17);
        v19 = (_DWORD*)a1[42];
        if (v19 != v17) {
          if (v19 != nullptr) {
            (*(void (**)(_DWORD*))(*(_QWORD*)v19 + 168LL))(v19);
          }
          a1[42] = v17;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
          v20 = a1[42];
          if (v20 == 0) {
            v21 = 4;
          LABEL_50:
            v23 = a1[22];
            v22 = a1 + 22;
            *((_DWORD*)v22 + 45) = *((_DWORD*)v22 + 45) & 0xFFFFFFFB | v21;
            v24 = (*(__int64 (**)(_QWORD*))(v23 + 16))(v22);
            result = (_QWORD*)BasicMenu_16e2460(v22[1], 1, 0);
            *((_DWORD*)v22 + 4) = (int)result % v24;
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)v20 + 160LL))(v20);
          game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
          v19 = (_DWORD*)a1[42];
        }
        v21 = 4;
        if (v19 != nullptr) {
          if (((*(__int64 (**)(_DWORD*))(*(_QWORD*)v19 + 120LL))(v19) & 1) !=
              0) {
            v21 = 4;
          }
          else {
            v21 = 0;
          }
        }
        goto LABEL_50;
      }
    }
    v18 = 32;
    goto LABEL_38;
  }
  return result;
}

bool game_facility_FacilityUnitMenu_Cancel_lambda0_Invoke(__int64 a1,
                                                          __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
