#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_10027c0(_QWORD*, char*);
bool GameRoutine_1002980(__int64, int*);
extern _UNKNOWN GameData_1ba290c;
extern __int64 (*GameData_20004f8[])();
extern __int64 (*GameData_2000588[])();
extern __int64 (*GameData_2000608[])();
extern __int64* GameData_212f878;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
_QWORD* game_map_HeightCellMap_Commit(__int64 a1);
float* game_map_HeightCellMap_Commit_lambda0_Invoke(__int64 a1, __int64* a2);
void game_map_HeightCellMap_Commit_lambda1_Invoke(__int64 a1, _BYTE* a2);

_QWORD* game_map_HeightCellMap_Commit(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  _QWORD v13[4];
  _QWORD* v14;
  _QWORD v15[4];
  _QWORD* v16;

  v2 = *(_QWORD**)(a1 + 16);
  result = v15;
  v15[0] = GameData_20004f8;
  v16 = v15;
  if (v2 != nullptr) {
    while (1) {
      (*(void (**)(_QWORD*, _QWORD*))(*result + 48LL))(result, v2 + 4);
      v2 = (_QWORD*)*v2;
      result = v16;
      if (v2 == nullptr) {
        break;
      }
      if (v16 == nullptr) {
      LABEL_24:
        GameRoutine_60a310(result, v4, v5);
      }
    }
    if (v16 != v15) {
      if (v16 != nullptr) {
        v6 = 40;
      LABEL_9:
        (*(void (**)(__int64))(*result + v6))((__int64)result);
      }
      v7 = *(_QWORD**)(a1 + 16);
      result = v13;
      v13[0] = GameData_2000588;
      v14 = v13;
      if (v7 != nullptr) {
        result = v13;
        while (1) {
          (*(void (**)(_QWORD*, _QWORD*))(*result + 48LL))(result, v7 + 4);
          v7 = (_QWORD*)*v7;
          result = v14;
          if (v7 == nullptr) {
            break;
          }
          if (v14 == nullptr) {
            goto LABEL_24;
          }
        }
        if (v14 != v13) {
          if (v14 != nullptr) {
            v8 = 40;
          LABEL_19:
            (*(void (**)(__int64))(*result + v8))((__int64)result);
          }
          v9 = *(_QWORD**)(a1 + 16);
          result = v11;
          v11[0] = GameData_2000608;
          v12 = v11;
          if (v9 == nullptr) {
            goto LABEL_28;
          }
          result = v11;
          while (1) {
            (*(void (**)(_QWORD*, _QWORD*))(*result + 48LL))(result, v9 + 4);
            v9 = (_QWORD*)*v9;
            result = v12;
            if (v9 == nullptr) {
              break;
            }
            if (v12 == nullptr) {
              goto LABEL_24;
            }
          }
          if (v12 == v11) {
          LABEL_28:
            v10 = 32;
          }
          else {
            if (v12 == nullptr) {
              return result;
            }
            v10 = 40;
          }
          return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v10))(result);
        }
      }
      v8 = 32;
      goto LABEL_19;
    }
  }
  v6 = 32;
  goto LABEL_9;
}

float* game_map_HeightCellMap_Commit_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  float v4;
  float v5;
  __int64* v6;
  __int64 v7;
  _BYTE* v8;
  char v9;
  char v10;
  char v11;
  _QWORD* v12;
  float* result;
  __int64 v14;
  float v15;
  float v16;
  _WORD v17[2];

  v2 = *a2;
  if (*(_BYTE*)(*a2 + 48) == 1) {
    v4 = *(float*)(v2 + 44);
  }
  else {
    v5 = *(float*)(*GameData_212f878 + 1428);
    *(_BYTE*)(v2 + 48) = 1;
    v4 = v5 * 5.0f;
    *(float*)(v2 + 44) = v5 * 5.0f;
  }
  v6 = a2 + 7;
  v7 = 144;
  v8 = &GameData_1ba290c;
  do {
    v9 = v8[1];
    v10 = *v8 + *((_BYTE*)a2 + 8);
    v11 = *((_BYTE*)a2 + 9);
    v12 = (_QWORD*)*a2;
    HIBYTE(v17[1]) = 0;
    LOBYTE(v17[0]) = v10;
    *(_WORD*)((char*)v17 + 1) = (unsigned __int8)(v9 + v11);
    result = (float*)GameRoutine_10027c0(v12, (char*)v17);
    if (result != nullptr) {
      v14 = *((int*)v8 - 1);
      v15 = result[*((int*)v8 + 1) + 9];
      if (vabds_f32(v15, *((float*)a2 + v14 + 9)) < v4) {
        if (*((float*)v6 + v14) >= v15) {
          v15 = *((float*)v6 + v14);
        }
        *((float*)v6 + v14) = v15;
      }
    }
    v7 -= 12;
    v8 += 12;
  } while (v7 != 0);
  v16 = (float)((float)((float)((float)(*((float*)a2 + 14) + 0.0f) +
                                *((float*)a2 + 15)) +
                        *((float*)a2 + 16)) +
                *((float*)a2 + 17)) *
        0.25f;
  if (v16 < *((float*)a2 + 18)) {
    v16 = *((float*)a2 + 18);
  }
  *((float*)a2 + 18) = v16;
  return result;
}

void game_map_HeightCellMap_Commit_lambda1_Invoke(__int64 a1, _BYTE* a2)
{
  int v3;

  if ((a2[76] & 1) == 0) {
    v3 = 0;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[76] = 1;
    }
  }
  if ((a2[77] & 1) == 0) {
    v3 = 1;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[77] = 1;
    }
  }
  if ((a2[78] & 1) == 0) {
    v3 = 2;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[78] = 1;
    }
  }
  if ((a2[79] & 1) == 0) {
    v3 = 3;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[79] = 1;
    }
  }
  if ((a2[80] & 1) == 0) {
    v3 = 4;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[80] = 1;
    }
  }
  if ((a2[81] & 1) == 0) {
    v3 = 5;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[81] = 1;
    }
  }
  if ((a2[82] & 1) == 0) {
    v3 = 6;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[82] = 1;
    }
  }
  if ((a2[83] & 1) == 0) {
    v3 = 7;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[83] = 1;
    }
  }
}

#pragma GCC visibility pop
