#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1114ca0(_QWORD* result);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_159e2c0(_QWORD, _QWORD);
__int64 GameRoutine_16df7a0(void);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 game_g_game_setting;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ChoiceMenu_Unknown2_1115140(__int64 result);
__int64 ChoiceMenu_Unknown85(__int64 a1);
__int64 ChoiceMenu_Unknown94(_QWORD* a1);
__int64 ChoiceMenu_Unknown136(__int64 a1, int a2, char a3);
__int64 ChoiceMenu_Unknown137(__int64 a1, int a2, char a3);

__int64 ChoiceMenu_Unknown2_1115140(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 1056);
  if (v1 == 0 || *(float*)(v1 + 36) < *(float*)(v1 + 32)) {
    return GameRoutine_16df7a0();
  }
  return result;
}

__int64 ChoiceMenu_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && ((*(void (**)(__int64))(*(_QWORD*)v2 + 168LL))(v2),
                  *(_QWORD*)(a1 + 336) = 0,
                  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0),
                  (v3 = *(_QWORD*)(a1 + 336)) != 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 160LL))(v3);
    v4 = *(_QWORD*)(a1 + 336);
    v5 = 4;
    if (v4 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 120LL))(v4) & 1) != 0) {
        v5 = 4;
      }
      else {
        v5 = 0;
      }
    }
  }
  else {
    v5 = 4;
  }
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v5;
  GameRoutine_1560070(&v11, a1 + 952, "L_Arrow/L_Arrow_L");
  GameRoutine_159e2c0(&v11, 0);
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_1560070(&v9, a1 + 952, "L_Arrow/L_Arrow_R");
  GameRoutine_159e2c0(&v9, 0);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  GameRoutine_1560070(&v7, a1 + 952, "L_Arrow/L_Arrow_D");
  GameRoutine_159e2c0(&v7, 0);
  result = v8;
  if (v8 != 0) {
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 ChoiceMenu_Unknown94(_QWORD* a1)
{
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;

  if (a1[78] != 0) {
    a1[78] = 0;
  }
  GameRoutine_155e830(a1 + 106, 0);
  GameRoutine_155e830(a1 + 106, 1);
  v2 = (__int64*)a1[29];
  v3 = (__int64*)a1[30];
  if (v2 == v3) {
  LABEL_7:
    v4 = -1;
  }
  else {
    v4 = 0;
    while (1) {
      v5 = *v2++;
      if (v5 == a1[42]) {
        break;
      }
      ++v4;
      if (v2 == v3) {
        goto LABEL_7;
      }
    }
  }
  v6 = a1[138];
  v8 = v4;
  if (v6 == 0) {
    GameRoutine_60a310(0);
  }
  return (*(__int64 (**)(__int64, int*))(*(_QWORD*)v6 + 48LL))(v6, &v8);
}

__int64 ChoiceMenu_Unknown136(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  bool v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  int v13;

  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_2;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_2:
    v4 = *(_QWORD*)(a1 + 336);
    v5 = *(__int64**)(a1 + 232);
    v6 = *(__int64**)(a1 + 240);
    if (v5 == v6 ||
        a2 >= 1 &&
            ((v7 = v5 + 1, v5 += 2, v7 != v6) ? (v8 = v5 == v6) : (v8 = true),
             v8)) {
      v9 = 0;
      if (v4 != 0) {
        goto LABEL_23;
      }
    }
    else {
      v9 = *v5;
      if (v4 != *v5) {
      LABEL_23:
        GameRoutine_1114ca0((_QWORD*)a1);
        v11 = *(_QWORD*)(a1 + 336);
        if (v11 != v9) {
          if (v11 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
          }
          *(_QWORD*)(a1 + 336) = v9;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
          v12 = *(_QWORD*)(a1 + 336);
          if (v12 == 0) {
            v13 = 4;
          LABEL_34:
            *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v13;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v12 + 160LL))(v12);
          v11 = *(_QWORD*)(a1 + 336);
        }
        v13 = 4;
        if (v11 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 120LL))(v11) & 1) !=
              0) {
            v13 = 4;
          }
          else {
            v13 = 0;
          }
        }
        goto LABEL_34;
      }
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_2;
  }
  return result;
}

__int64 ChoiceMenu_Unknown137(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v12;

  if (a2 < 1) {
    return 0;
  }
  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_3;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_3:
    v4 = *(_QWORD*)(a1 + 336);
    v5 = *(__int64**)(a1 + 232);
    v6 = *(__int64**)(a1 + 240);
    if (v5 != v6) {
      v7 = v5 + 1;
      if (v7 != v6) {
        v8 = *v7;
        if (v4 == *v7) {
          return 0;
        }
      LABEL_20:
        GameRoutine_1114ca0((_QWORD*)a1);
        v10 = *(_QWORD*)(a1 + 336);
        if (v10 != v8) {
          if (v10 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 168LL))(v10);
          }
          *(_QWORD*)(a1 + 336) = v8;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
          v11 = *(_QWORD*)(a1 + 336);
          if (v11 == 0) {
            v12 = 4;
          LABEL_31:
            *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v12;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v11 + 160LL))(v11);
          v10 = *(_QWORD*)(a1 + 336);
        }
        v12 = 4;
        if (v10 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 120LL))(v10) & 1) !=
              0) {
            v12 = 4;
          }
          else {
            v12 = 0;
          }
        }
        goto LABEL_31;
      }
    }
    v8 = 0;
    if (v4 != 0) {
      goto LABEL_20;
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_3;
  }
  return result;
}

#pragma GCC visibility pop
