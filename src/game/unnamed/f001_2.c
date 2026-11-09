#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64 (*GameData_2014d40[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c370;

extern __int64 GameData_212c608[2];

extern __int64* GameData_212cfb0[12];

extern __int64 GameData_212eb20[2];

extern __int64 GameData_212eb28;

extern __int64 GameData_21a6070;

extern __int64 GameData_21ee240;

extern __int64 GameData_2212270;

extern char GameData_223e1f8;

extern __int64 GameData_223e200;

extern __int64 GameData_223e208;

extern __int64 GameData_223e210;

extern int GameData_223e218;

extern __int64 GameData_223e220;

extern int GameData_223e228;

extern __int64 GameData_223e230;

extern char GameData_223e238;

extern __int64 GameData_223e240;

extern __int64 GameData_223e248;

extern __int64 GameData_223e250;

extern int GameData_223e258;

extern __int64 GameData_223e260;

extern int GameData_223e268;

extern __int64 GameData_223e270;

extern _UNKNOWN GameData_223e278;

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65a7c0(void);

__int64 GameRoutine_c775f0(_QWORD);

__int64 GameRoutine_c776d0(void);

_QWORD* GameHr_1191cf0(float a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  _BOOL4 v8;
  _QWORD* result;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v2 = GameData_212c370;
  v3 = *GameData_212c370;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    return (_QWORD*)GameRoutine_c776d0();
  }
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v6 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v6 & 8) != 0) {
      v7 = 2;
    }
    else {
      v7 = 3;
    }
    v8 = (v7 & v6) == 0;
    if (a1 <= 0.0f) {
      goto LABEL_17;
    }
  }
  else {
    v8 = false;
    if (a1 <= 0.0f) {
      goto LABEL_17;
    }
  }
  if (!v8) {
    v10 = GameData_212cfb0[0];
    v11 = (_QWORD*)*GameData_212cfb0[0];
    if (*GameData_212cfb0[0] != 0 ||
        (v11 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v11 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v12 = v11[10];
      if (v12 != 0) {
        v13 =
            *(_QWORD*)(*(_QWORD*)(v11[6] + 8 * ((v12 + v11[9] - 1) / 0x33uLL)) +
                       80 * ((v12 + v11[9] - 1) % 0x33uLL) + 72);
      LABEL_29:
        if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3 &&
            (((v18 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v19 = 2)
                                                                   : (v19 = 3),
             (v19 & v18) == 0)) {
          v20 = 0;
        }
        else {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_223e278,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)GameRoutine_1a09fd0(&GameData_223e278) != 0) {
            GameData_223e1f8 = 14;
            GameData_223e218 = 0;
            GameData_223e220 = 0;
            GameData_223e228 = 0;
            GameData_223e230 = 0;
            GameData_223e238 = 0;
            GameData_223e260 = 0;
            GameData_223e268 = 0;
            GameData_223e270 = 0;
            GameData_223e240 = 0;
            GameData_223e248 = 0;
            GameData_223e250 = 0;
            GameData_223e258 = 0;
            GameData_223e200 = 0;
            GameData_223e208 = 16;
            GameData_223e210 = 1;
            GameRoutine_1a09fe0(&GameData_223e278);
          }
          v20 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 160, 16, 0);
          v21 = GameData_212c608[0];
          *(_QWORD*)(v20 + 96) = 0;
          *(_QWORD*)(v20 + 104) = 0;
          *(_QWORD*)(v20 + 112) = 0;
          *(_QWORD*)(v20 + 120) = 0;
          *(_QWORD*)(v20 + 128) = 0;
          *(_WORD*)(v20 + 136) = 0;
          *(_QWORD*)(v20 + 16) = 0;
          *(_QWORD*)(v20 + 24) = "NULL";
          *(_QWORD*)(v20 + 138) = 0;
          *(_QWORD*)(v20 + 144) = 0;
          *(_QWORD*)(v20 + 32) = 0;
          *(_QWORD*)(v20 + 40) = 0;
          *(_QWORD*)(v20 + 48) = 0;
          *(_QWORD*)(v20 + 56) = 0;
          *(_QWORD*)(v20 + 64) = 0;
          *(_QWORD*)(v20 + 72) = 0;
          *(_QWORD*)(v20 + 80) = 0;
          *(_QWORD*)(v20 + 88) = 0;
          *(_QWORD*)v20 = v21 + 16;
          *(_QWORD*)(v20 + 8) = 0;
          GameRoutine_65a7c0();
          *(_QWORD*)v20 = GameData_2014d40;
          *(float*)(v20 + 152) =
              (float)(int)(float)((float)(a1 * 1000.0f) * 0.06f);
          GameRoutine_657850(v20, &GameData_223e1f8, "WaitProc", 1, v13);
        }
        GameRoutine_c775f0(v20);
        v22 = (_QWORD*)*v10;
        if (*v10 != 0 ||
            (v22 = *(_QWORD**)GameData_212eb20[0],
             *(_QWORD*)GameData_212eb20[0] != 0) ||
            (v22 = *(_QWORD**)GameData_212eb28,
             *(_QWORD*)GameData_212eb28 != 0)) {
          v23 = v22[10];
          if (v23 != 0) {
            v24 = *(_QWORD*)(*(_QWORD*)(v22[6] +
                                        8 * ((v23 + v22[9] - 1) / 0x33uLL)) +
                             80 * ((v23 + v22[9] - 1) % 0x33uLL) + 72);
          }
          else {
            v24 = 0;
          }
        }
        else {
          v24 = GameData_2212270;
          if (GameData_2212270 != 0) {
            v24 = *(_QWORD*)(GameData_2212270 + 408);
          }
        }
        if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
            (((v25 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v26 = 2)
                                                                   : (v26 = 3),
             (v26 & v25) != 0)) {
          v27 = *(float*)(v24 + 144);
          if (v27 < 1.0f) {
            v27 = 1.0f;
          }
          *(_WORD*)(v24 + 136) = *(_WORD*)(v24 + 136) & 0xFF97 | 0x20;
          *(float*)(v24 + 144) = v27;
        }
        v28 = *v2;
        v29 = *(_QWORD*)(v28 +
                         8LL * (*(unsigned int (**)(__int64))(
                                   *(_QWORD*)GameData_21a6070 + 72LL))(
                                   GameData_21a6070) +
                         4384);
        v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 472LL))(v29);
        return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(v30 + 24) + 448LL))(*(_QWORD*)(v30 + 24), 0);
      }
    }
    else if (GameData_2212270 != 0) {
      v13 = *(_QWORD*)(GameData_2212270 + 408);
      goto LABEL_29;
    }
    v13 = 0;
    goto LABEL_29;
  }
LABEL_17:
  v14 = *v2;
  v15 = *(
      _QWORD*)(v14 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v15 != 0) {
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 472LL))(v15);
  }
  else {
    v16 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v16 + 24) + 448LL))(
      *(_QWORD*)(v16 + 24), 1);
  result = *(_QWORD**)(v16 + 2240);
  *(_QWORD*)(v16 + 2240) = 0;
  if (result == (_QWORD*)(v16 + 2208)) {
    v17 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v17))((__int64)result);
  }
  if (result != nullptr) {
    v17 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v17))((__int64)result);
  }
  return result;
}

#pragma GCC visibility pop
