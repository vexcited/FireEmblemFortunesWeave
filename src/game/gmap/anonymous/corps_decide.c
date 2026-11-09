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
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 1056);
  v6 =
      *(_QWORD*)(__dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0) +
                 304);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 808);
    v8 = *(_QWORD*)(v6 + 816);
    if (v7 != v8) {
      memset(v7, 0, v8 - v7, v3, v4, v5);
      v1 = *(_QWORD*)(a1 + 1056);
    }
  }
  v9 = __dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0);
  return GameRoutine_1787b80(v9);
}

#pragma GCC visibility pop
