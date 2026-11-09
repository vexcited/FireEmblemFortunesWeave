#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_2014b08[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c370;
extern __int64 GameData_212c608[2];
extern __int64* GameData_212cfb0[12];
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 GameData_21a6070;
extern __int64 GameData_21ee240;
extern __int64 GameData_2212270;
extern char GameData_223da50;
extern __int64 GameData_223da58;
extern __int64 GameData_223da60;
extern __int64 GameData_223da68;
extern int GameData_223da70;
extern __int64 GameData_223da78;
extern int GameData_223da80;
extern __int64 GameData_223da88;
extern char GameData_223da90;
extern __int64 GameData_223da98;
extern __int64 GameData_223daa0;
extern __int64 GameData_223daa8;
extern int GameData_223dab0;
extern __int64 GameData_223dab8;
extern int GameData_223dac0;
extern __int64 GameData_223dac8;
extern _UNKNOWN GameData_223dad0;
__int64 GameRoutine_118a5a0(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65a7c0(_QWORD);
__int64 GameRoutine_c775f0(_QWORD);
__int64 GameRoutine_c776d0(void);

_QWORD* GameHr_1188050(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  int v7;
  int v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  float v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

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
  v6 = GameData_21ee240;
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v7 = *(_DWORD*)(GameData_21ee240 + 156);
    v8 = (v7 & 8) != 0 ? 2 : 3;
    if ((v8 & v7) == 0) {
      v14 = *v2;
      v15 = *(_QWORD*)(v14 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)GameData_21a6070 + 72LL))(
                                 GameData_21a6070) +
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
        v30 = 32;
      }
      else {
        if (result == nullptr) {
          return result;
        }
        v30 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(void))(*result + v30))();
    }
  }
  v9 = GameData_212cfb0[0];
  v10 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v10 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v10 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v11 = v10[10];
    if (v11 != 0) {
      v12 = *(_QWORD*)(*(_QWORD*)(v10[6] + 8 * ((v11 + v10[9] - 1) / 0x33uLL)) +
                       80 * ((v11 + v10[9] - 1) % 0x33uLL) + 72);
      goto LABEL_19;
    }
  }
  else if (GameData_2212270 != 0) {
    v12 = *(_QWORD*)(GameData_2212270 + 408);
    goto LABEL_19;
  }
  v12 = 0;
LABEL_19:
  if (GameData_21ee240 != 0) {
    if (*(_BYTE*)(GameData_21ee240 + 152) != 3) {
      v6 = 0;
      v19 = 0;
      if (a1 == 0) {
        goto LABEL_34;
      }
    LABEL_28:
      if ((v6 & 1) == 0) {
        if (*(_QWORD*)(a1 + 392) != 0 && (v20 = *(_QWORD*)(a1 + 440)) != 0 &&
            *(unsigned __int8*)(v20 + 16) <= 3u &&
            (GameRoutine_118a5a0(a1) & 1) == 0) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_223dad0,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)GameRoutine_1a09fd0(&GameData_223dad0) != 0) {
            GameData_223da50 = 14;
            GameData_223da70 = 0;
            GameData_223da78 = 0;
            GameData_223da80 = 0;
            GameData_223da88 = 0;
            GameData_223da90 = 0;
            GameData_223dab8 = 0;
            GameData_223dac0 = 0;
            GameData_223dac8 = 0;
            GameData_223da98 = 0;
            GameData_223daa0 = 0;
            GameData_223daa8 = 0;
            GameData_223dab0 = 0;
            GameData_223da58 = 0;
            GameData_223da60 = 16;
            GameData_223da68 = 1;
            GameRoutine_1a09fe0(&GameData_223dad0);
          }
          v31 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 160, 16, 0);
          v32 = GameData_212c608[0];
          *(_QWORD*)(v31 + 96) = 0;
          *(_QWORD*)(v31 + 104) = 0;
          *(_QWORD*)(v31 + 112) = 0;
          *(_QWORD*)(v31 + 120) = 0;
          *(_QWORD*)(v31 + 128) = 0;
          *(_WORD*)(v31 + 136) = 0;
          *(_QWORD*)(v31 + 16) = 0;
          *(_QWORD*)(v31 + 24) = "NULL";
          *(_QWORD*)(v31 + 138) = 0;
          *(_QWORD*)(v31 + 144) = 0;
          *(_QWORD*)(v31 + 32) = 0;
          *(_QWORD*)(v31 + 40) = 0;
          *(_QWORD*)(v31 + 48) = 0;
          *(_QWORD*)(v31 + 56) = 0;
          *(_QWORD*)(v31 + 64) = 0;
          *(_QWORD*)(v31 + 72) = 0;
          *(_QWORD*)(v31 + 80) = 0;
          *(_QWORD*)(v31 + 88) = 0;
          *(_QWORD*)v31 = v32 + 16;
          *(_QWORD*)(v31 + 8) = 0;
          GameRoutine_65a7c0(v31);
          *(_QWORD*)(v31 + 152) = a1;
          *(_QWORD*)v31 = GameData_2014b08;
          v19 = GameRoutine_657850(v31, &GameData_223da50, "MotionWaitProc", 1,
                                   v12);
        }
        else {
          v19 = 0;
        }
      }
      goto LABEL_34;
    }
    v17 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v17 & 8) != 0) {
      v18 = 2;
    }
    else {
      v18 = 3;
    }
    v6 = (v18 & v17) == 0;
  }
  v19 = 0;
  if (a1 != 0) {
    goto LABEL_28;
  }
LABEL_34:
  GameRoutine_c775f0(v19);
  v21 = (_QWORD*)*v9;
  if (*v9 != 0 ||
      (v21 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v21 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v22 = v21[10];
    if (v22 != 0) {
      v23 = *(_QWORD*)(*(_QWORD*)(v21[6] + 8 * ((v22 + v21[9] - 1) / 0x33uLL)) +
                       80 * ((v22 + v21[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v23 = 0;
    }
  }
  else {
    v23 = GameData_2212270;
    if (GameData_2212270 != 0) {
      v23 = *(_QWORD*)(GameData_2212270 + 408);
    }
  }
  if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v24 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v25 = 2)
                                                             : (v25 = 3),
       (v25 & v24) != 0)) {
    v26 = *(float*)(v23 + 144);
    if (v26 < 1.0) {
      v26 = 1.0;
    }
    *(_WORD*)(v23 + 136) = *(_WORD*)(v23 + 136) & 0xFF97 | 0x20;
    *(float*)(v23 + 144) = v26;
  }
  v27 = *v2;
  v28 = *(
      _QWORD*)(v27 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 472LL))(v28);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v29 + 24) + 448LL))(*(_QWORD*)(v29 + 24), 0);
}

#pragma GCC visibility pop
