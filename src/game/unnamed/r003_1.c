#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c370;

extern __int64 GameData_212cf60;

extern __int64 GameData_212dbb8[9];

extern _UNKNOWN GameData_2166898;

extern __int64 GameData_21a6070;

extern __int64 GameData_21c6978;

extern __int64 GameData_21ee260;

extern __int64 GameData_22127a8;

__int64 GameRoutine_1a09b70(_QWORD);

__int64 GameRoutine_1a09b80(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_d9d220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameHr_bd7d60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int128 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  float* v15;
  _DWORD* v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v22;
  float v23;
  float v24;
  float v25;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  float v35;
  __int64 v36;
  __int128 v37;

  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  if (*(_QWORD*)(v1 + 736) != 0) {
    v1 = *(_QWORD*)(v1 + 736);
  }
  v3 = *(_QWORD*)(result + 256);
  if (v3 != 0) {
    v4 = *(_OWORD*)(v3 + 208);
    HIDWORD(v4) = 0;
  }
  else {
    v4 = *(_OWORD*)(v1 + 304);
  }
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  v6 = *(_QWORD*)(v5 + 24);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v5 + 16);
    v8 = *(_QWORD*)(v5 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v37 = v4;
    v9 = GameRoutine_1a0a0c0(v8);
    result = GameRoutine_1a09c50(v6);
    if (v9 != 0) {
      if (v7 != 0) {
        v12 = *(_QWORD*)(v7 + 288);
        if ((*(_BYTE*)(v12 + 840) & 1) == 0 ||
            (v13 = *(_QWORD*)(v12 + 808), v14 = *(_DWORD**)(v12 + 816),
             (_DWORD*)v13 == v14)) {
        LABEL_26:
          v15 = (float*)(v12 + 844);
        }
        else {
          LODWORD(v10) = DWORD2(v37);
          v15 = (float*)(v13 + 88);
          LODWORD(v11) = 0.5;
          while (1) {
            v17 = *(v15 - 6);
            v18 = *(v15 - 3);
            v19 = v17 - (float)(v18 * 0.5);
            v20 = v17 + (float)(v18 * 0.5);
            if (v19 <= *(float*)&v37 && *(float*)&v37 <= v20) {
              v22 = *(v15 - 5);
              v23 = *(v15 - 2);
              v24 = v22 - (float)(v23 * 0.5);
              v25 = v22 + (float)(v23 * 0.5);
              if (v24 <= *((float*)&v37 + 1) && *((float*)&v37 + 1) <= v25) {
                v27 = *(v15 - 4);
                v28 = *(v15 - 1);
                v29 = v27 - (float)(v28 * 0.5);
                v30 = v27 + (float)(v28 * 0.5);
                if (v29 <= *((float*)&v37 + 2) && *((float*)&v37 + 2) <= v30) {
                  break;
                }
              }
            }
            v16 = v15 + 1;
            v15 += 23;
            if (v16 == v14) {
              goto LABEL_26;
            }
          }
        }
        v32 = *(_QWORD*)(*(_QWORD*)(v2 + 240) + 24LL);
        v33 = *(__int64**)(v32 + 312);
        v34 = *(__int64**)(v32 + 320);
        if (v33 != v34) {
          v35 = *v15;
          do {
            v36 = *v33;
            v33 += 2;
            result = (*(__int64 (**)(__int64, const char*, __int64, float,
                                     long double, long double))(
                *(_QWORD*)v36 + 16LL))(v36, "InteriorMaskValue", 17, v35, v10,
                                       v11);
          } while (v33 != v34);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        return GameRoutine_1a09c50(v9);
      }
    }
  }
  return result;
}

bool GameHr_cc1180(int a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int16* v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;

  v4 = *GameData_212c370;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(void*))(*v7 + v8))(v7);
LABEL_9:
  if (GameData_21ee260 != 0) {
    v9 = (unsigned __int16*)(GameData_21ee260 + 8);
  }
  else {
    v9 = (unsigned __int16*)GameData_212cf60;
  }
  v10 = ((__int16)v9[1] << 14) + (*v9 << 20) + ((__int16)v9[2] << 8);
  GameRoutine_1a09b70(&GameData_2166898);
  v11 = v10 & 0xFFFFFFFC | (v10 >> 30);
  v12 = 1812433253 * v11;
  v13 = 1812433253 * ((1812433253 * (v12 ^ (v12 >> 30)) + 1) ^
                      ((1812433253 * (v12 ^ (v12 >> 30)) + 1) >> 30)) +
        2;
  v14 = 1812433253 * (v13 ^ (v13 >> 30)) + 3;
  GameRoutine_1a09b80(&GameData_2166898);
  GameRoutine_1a09b70(&GameData_2166898);
  GameRoutine_1a09b80(&GameData_2166898);
  return (int)(((((1011558400 * v11) ^ v12) >> 8) ^ (v14 >> 19) ^
                (1011558400 * v11) ^ v12 ^ v14) &
               0x7FFFFFFF) %
                 a1 +
             1 ==
         a2;
}

__int64 GameHr_cc5f00(unsigned __int8* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  _QWORD v15[3];

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(void*))(*v5 + v6))(v5);
LABEL_9:
  memset(v15, 0, sizeof(v15));
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v7 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v7 = 0;
  }
  if (GameData_22127a8 != 0) {
    v8 = GameData_22127a8;
  }
  else {
    v8 = v7;
  }
  v9 = *a1;
  v10 = (v9 & 1) == 0;
  v11 = v9 >> 1;
  if (v10) {
    v12 = a1 + 1;
  }
  else {
    v12 = *((unsigned __int8**)a1 + 2);
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = *((_QWORD*)a1 + 1);
  }
  return GameRoutine_d9d220(v8, v12, v13, v15, 0);
}

#pragma GCC visibility pop
