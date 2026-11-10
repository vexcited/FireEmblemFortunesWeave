#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_11ec20(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, long double);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_play_ff3e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                       double, float);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_212d168;
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterSound_vtable[])();
extern __int64* GameData_212e248[2];
extern char GameData_1a9f09e;
extern int GameData_2235720;
__int64 CharacterSound_Unknown7(__int64 result, long double a2);
__int64 CharacterSound_1096020(__int64 a1, _BYTE* a2, float a3);
__n128 CharacterSound_Destructor(_QWORD* a1);

__int64 CharacterSound_Unknown7(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  int v7;
  bool v8;
  char v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  long double v19;
  __int64 v20;
  long double v21;
  _BYTE v22[200];

  v2 = *(_QWORD*)(result + 32);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(_QWORD*)(result + 40);
    v5 = v3 == -1 || v4 == 0;
    if (!v5 && (*(_BYTE*)(v4 + 342) & 1) != 0) {
      v6 = result;
      v7 = *(unsigned __int8*)(*(_QWORD*)(result + 8) + 289LL);
      if (*(unsigned __int8*)(result + 56) != v7) {
        *(_QWORD*)&a2 = 0;
        v8 = *GameData_212d168 == 3;
        if (*GameData_212d168 == 3) {
          v9 = 1;
        }
        else {
          v9 = *(_BYTE*)(*(_QWORD*)(result + 8) + 289LL);
        }
        *(_BYTE*)(result + 56) = v9;
        v10 = result + 72;
        if (((v8 | (unsigned __int8)v7) & 1) != 0) {
          v11 = 1.0;
        }
        else {
          v11 = 0.0;
        }
        v12 = snd_fnd_WeakHandle_get(v10, a2);
        if (v12 != 0) {
          v13 = v12 - 5592;
        }
        else {
          v13 = 0;
        }
        snd_Fade_Fade_10c830(v22, 0.0);
        (*(void (**)(__int64, _BYTE*, float))(*(_QWORD*)(v13 + 40) + 96LL))(
            v13 + 40, v22, v11);
        snd_Fade_Destroy_Fade(v22);
        result = v6;
      }
      v14 = *(_QWORD*)(result + 64);
      if (v14 != 0) {
        v15 = (long double*)(v14 + 48);
      }
      else {
        v15 =
            (long double*)(*(_QWORD*)(*(_QWORD*)(result + 40) + 408LL) + 304LL);
      }
      v21 = *v15;
      v16 = snd_fnd_WeakHandle_get(v6 + 72, *v15);
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v16 - 5592) + 72LL))(v16 - 5592);
      v17 = *(_QWORD*)(v6 + 32);
      if (v17 != 0 && *(_QWORD*)(v17 + 8) != -1 &&
          (v18 = *(_QWORD*)(v6 + 40)) != 0) {
        if ((*(_BYTE*)(v18 + 340) & 2) != 0) {
          return result;
        }
      }
      else {
        GameData_2235720 = 0;
      }
      result = snd_fnd_WeakHandle_isValid(v6 + 88);
      if ((result & 1) != 0) {
        v20 = snd_fnd_WeakHandle_get(v6 + 88, v19);
        return (*(__int64 (**)(__int64, long double, float, float))(
            *(_QWORD*)(v20 - 5592) + 72LL))(
            v20 - 5592, v21, *((float*)&v21 + 1), *((float*)&v21 + 2));
      }
    }
  }
  return result;
}

__int64 CharacterSound_1096020(__int64 a1, _BYTE* a2, float a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  _BYTE v12[200];

  if (a2 == nullptr || *a2 != 86) {
    goto LABEL_13;
  }
  v6 = *(_QWORD*)(a1 + 32);
  if (v6 == 0 || ((v7 = *(_QWORD*)(v6 + 8), v8 = *(_QWORD*)(a1 + 40), v7 != -1)
                      ? (v9 = v8 == 0)
                      : (v9 = true),
                  v9)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v8 + 340) & 2) != 0) {
    goto LABEL_13;
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 88) & 1) == 0) {
  LABEL_13:
    snd_Fade_Fade_10c830(v12, 0.0f);
    v10 = a1 + 72;
    goto LABEL_14;
  }
  snd_Fade_Fade_10c830(v12, 0.0f);
  v10 = a1 + 88;
LABEL_14:
  snd_play_ff3e0(&GameData_1a9f09e, a2, v10, v12, 0, 0, 0, 0.0f, a3);
  return snd_Fade_Destroy_Fade(v12);
}

__n128 CharacterSound_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __n128 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;

  *a1 = game_character_CharacterSound_vtable;
  v2 = a1 + 9;
  if ((snd_fnd_WeakHandle_isValid(a1 + 9) & 1) != 0) {
    Crc32List_11ec20(*GameData_212e248[0], v2, 0);
  }
  v4 = a1[4];
  if (v4 == 0 ||
      ((v5 = *(_QWORD*)(v4 + 8), v6 = a1[5], v5 != -1) ? (v7 = v6 == 0)
                                                       : (v7 = true),
       v7)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v6 + 340) & 2) != 0) {
    goto LABEL_13;
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 11) & 1) != 0) {
    Crc32List_11ec20(*GameData_212e248[0], a1 + 11, 0);
  }
LABEL_13:
  a1[8] = 0;
  v8 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v8 != 0) {
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

#pragma GCC visibility pop
