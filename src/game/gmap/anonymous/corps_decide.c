#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_172b500(__int64 result, char, char);
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1787b80(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _UNKNOWN GameData_1afe348;
extern __int64 (*game_gmap_anonymous_CorpsPoolMenu_vtable[])();
extern __int64 GameData_20b3420;
extern __int64* GameData_21319e8[10];
__int64 CorpsDecide_Unknown30(__int64 a1, char a2);
void* CorpsDecide_Unknown67(__int64 a1);
__int64 CorpsDecide_Unknown107(_QWORD* a1);
__int64 CorpsDecide_Unknown137(__int64 a1);
__int64 CorpsDecide_Unknown146(__int64 a1);
__int64 CorpsDecide_Unknown149(__int64 a1);
__int64 CorpsDecide_Unknown150(__int64 a1);
__int64 CorpsDecide_Unknown157(__int64 a1);
__int64 CorpsDecide_Unknown158(__int64 a1);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 (*GameData_20b6268[])();
extern __int64 (*GameData_20b62e8[])();
__int64 CorpsDecide_Unknown141(__int64 a1);
__int64 MultiMenuSequence_1787b80(__int64);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
extern __int64 (*GameData_20b6068[])();
extern __int64 (*GameData_20b61e8[])();
extern __int64 (*game_sound_PlayDecideSe_ptr[7])();
extern __int64* GameData_212d2b8;
__int64 CorpsDecide_Unknown100(__int64 a1);
__int64 CorpsDecide_Unknown112(__int64 a1);

__int64 CorpsDecide_Unknown30(__int64 a1, char a2)
{
  __int64 result;
  char v4;

  result = ui_LayoutAccessor_FindPane(a1 + 952, "L_MenuItem00");
  if (result != 0) {
    if ((a2 & 1) != 0) {
      v4 = -1;
    }
    else {
      v4 = 40;
    }
    *(_BYTE*)(result + 89) = v4;
  }
  return result;
}

void* CorpsDecide_Unknown67(__int64 a1)
{
  if (*(_DWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                &GameData_20b3420, 0) +
                 360) != 0) {
    return nullptr;
  }
  else {
    return &GameData_1afe348;
  }
}

__int64 CorpsDecide_Unknown100(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;
  const char* v13;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 vars0;
  __int64 vars8;

  v8 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  if (*(_BYTE*)(v8 + 409) != 1) {
    return 1;
  }
  v16 = vars0;
  v17 = vars8;
  v14[1] = v8;
  v13 = "MID_CorpsMenu_Confirm";
  v14[0] = GameData_20b6068;
  v10 = v9;
  v15 = v14;
  v12 = v11;
  v11[0] = GameData_20b61e8;
  v9[0] = GameData_20b61e8;
  v1 = MapSortieMenu_871860(v8, (__int64)&v13, (__int64)v14, (__int64)v11,
                            (__int64)v9);
  if (v10 == v9) {
    v2 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_8;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v10 + v2))((__int64)v10);
LABEL_8:
  if (v12 == v11) {
    v4 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_13;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v12 + v4))((__int64)v12);
LABEL_13:
  if (v15 == v14) {
    v5 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_18;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v15 + v5))((__int64)v15);
LABEL_18:
  v12 = v11;
  v15 = v14;
  v11[0] = GameData_212d2b8 + 2;
  v11[1] = game_sound_PlayDecideSe_ptr[0];
  v14[0] = GameData_212d2b8 + 2;
  v14[1] = game_sound_PlayDecideSe_ptr[0];
  GameRoutine_654050(v14, (_QWORD*)(v1 + 1152));
  if (v15 == v14) {
    v6 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_23;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v15 + v6))((__int64)v15);
LABEL_23:
  if (v12 == v11) {
    v7 = 32;
    goto LABEL_27;
  }
  if (v12 != nullptr) {
    v7 = 40;
  LABEL_27:
    (*(void (**)(__int64))(*v12 + v7))((__int64)v12);
  }
  return 12;
}

__int64 CorpsDecide_Unknown107(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 1120LL))(a1) != 0 &&
      (*(_BYTE*)(a1[132] + 356LL) & 1) == 0) {
    v3 = a1[22];
    v2 = a1 + 22;
    (*(void (**)(_QWORD*))(v3 + 144))(v2);
    v4 = GameData_21319e8[0];
    v5 = __dynamic_cast(v2[110], GameData_21319e8[0], &GameData_20b3420, 0);
    GameRoutine_17871c0(v5, 1, 1);
    *(_BYTE*)(__dynamic_cast(v2[110], v4, &GameData_20b3420, 0) + 410) = 1;
  }
  return 0;
}

__int64 CorpsDecide_Unknown112(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;
  const char* v13;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 vars0;
  __int64 vars8;

  v8 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  if (*(_BYTE*)(v8 + 409) != 1) {
    return 1;
  }
  v16 = vars0;
  v17 = vars8;
  v14[1] = v8;
  v13 = "MID_CorpsMenu_Confirm";
  v14[0] = GameData_20b6068;
  v10 = v9;
  v15 = v14;
  v12 = v11;
  v11[0] = GameData_20b61e8;
  v9[0] = GameData_20b61e8;
  v1 = MapSortieMenu_871860(v8, (__int64)&v13, (__int64)v14, (__int64)v11,
                            (__int64)v9);
  if (v10 == v9) {
    v2 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_8;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v10 + v2))((__int64)v10);
LABEL_8:
  if (v12 == v11) {
    v4 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_13;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v12 + v4))((__int64)v12);
LABEL_13:
  if (v15 == v14) {
    v5 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_18;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v15 + v5))((__int64)v15);
LABEL_18:
  v12 = v11;
  v15 = v14;
  v11[0] = GameData_212d2b8 + 2;
  v11[1] = game_sound_PlayDecideSe_ptr[0];
  v14[0] = GameData_212d2b8 + 2;
  v14[1] = game_sound_PlayDecideSe_ptr[0];
  GameRoutine_654050(v14, (_QWORD*)(v1 + 1152));
  if (v15 == v14) {
    v6 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_23;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v15 + v6))((__int64)v15);
LABEL_23:
  if (v12 == v11) {
    v7 = 32;
    goto LABEL_27;
  }
  if (v12 != nullptr) {
    v7 = 40;
  LABEL_27:
    (*(void (**)(__int64))(*v12 + v7))((__int64)v12);
  }
  return 12;
}

__int64 CorpsDecide_Unknown137(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  int v8;
  int* v9;
  int* i;
  __int64 result;
  __int64 v12;
  _DWORD* v13;
  _DWORD* j;

  v1 = *(_QWORD*)(a1 + 1056);
  v3 = *(
      _QWORD**)(__dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0) +
                304);
  if (v3 != nullptr) {
    v4 = (_QWORD*)v3[29];
    v5 = (_QWORD*)v3[30];
    if (v4 == v5) {
      v8 = -1;
    }
    else {
      v6 = 0;
      do {
        v7 = *v4;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4) & 1) != 0) {
          v6 += (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7) & 1;
        }
        ++v4;
      } while (v4 != v5);
      v8 = v6 - 1;
    }
    v9 = (int*)v3[101];
    for (i = (int*)v3[102]; v9 != i; ++v9) {
      *v9 = v8;
    }
    v1 = *(_QWORD*)(a1 + 1056);
  }
  result = __dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0);
  v12 = *(_QWORD*)(result + 312);
  if (v12 != 0 &&
      *(__int64 (***)())v12 == game_gmap_anonymous_CorpsPoolMenu_vtable) {
    v13 = *(_DWORD**)(v12 + 808);
    for (j = *(_DWORD**)(v12 + 816); v13 != j; ++v13) {
      *v13 = 10;
    }
  }
  return result;
}

__int64 CorpsDecide_Unknown141(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  const char* v12;

  v1 = *(_QWORD*)(a1 + 1056);
  if (v1 != 0) {
    v1 = __dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0);
  }
  if (*(_BYTE*)(v1 + 409) != 1) {
    return 3;
  }
  v12 = "MID_CorpsMenu_Cancel_Confirm";
  v10_.v10[0] = GameData_20b6268;
  v6_.v7 = v6_.v6;
  v10_.v11 = v10_.v10;
  v8_.v9 = v8_.v8;
  v8_.v8[0] = GameData_20b62e8;
  v6_.v6[0] = GameData_20b62e8;
  MapSortieMenu_871860(v1, (__int64)&v12, (__int64)v10_.v10, (__int64)v8_.v8,
                       (__int64)v6_.v6);
  if (v6_.v7 == v6_.v6) {
    v2 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v2))((__int64)v6_.v7);
LABEL_10:
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_15;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
LABEL_15:
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
    goto LABEL_19;
  }
  if (v10_.v11 != nullptr) {
    v5 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
  }
  return 11;
}

__int64 CorpsDecide_Unknown146(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  return GameRoutine_17871c0(v1, 1, 1);
}

__int64 CorpsDecide_Unknown149(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  return GameRoutine_172b500(v1, 0, 1);
}

__int64 CorpsDecide_Unknown150(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  return GameRoutine_172b500(v1, 1, 1);
}

__int64 CorpsDecide_Unknown157(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  return GameRoutine_1787b80(v1);
}

__int64 CorpsDecide_Unknown158(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 1056);
  v3 =
      *(_QWORD*)(__dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0) +
                 304);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 808);
    v5 = *(_QWORD*)(v3 + 816);
    if (v4 != v5) {
      memset_alt1(v4, 0, v5 - v4);
      v1 = *(_QWORD*)(a1 + 1056);
    }
  }
  v6 = __dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0);
  return MultiMenuSequence_1787b80(v6);
}

#pragma GCC visibility pop
