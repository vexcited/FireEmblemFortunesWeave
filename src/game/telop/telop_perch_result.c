#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_17618b0(__int64);
__int64 GameRoutine_1763e20(__int64, _QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_1764a60(__int64, __int64);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a90b0d;
extern __int64 GameData_21c99c8;
__int64 TelopPerchResult_Unknown57(_QWORD* a1);

__int64 TelopPerchResult_Unknown57(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = a1[146];
  v3 = GameRoutine_1760e40((__int64)a1, 0x12u);
  GameRoutine_1764a60(v3, v1);
  v4 = game_HashString(&GameData_1a90b0d);
  if (v4 != 0) {
    v5 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v5 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v7 = v5 - 1;
      if ((v5 & (v5 - 1)) != 0) {
        v8 = v4;
        if (v4 >= v5) {
          v8 = v4 % v5;
        }
      }
      else {
        v8 = v7 & v4;
      }
      v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v8);
      if (v9 != nullptr) {
        v10 = (_QWORD*)*v9;
        if (v10 != nullptr) {
          if ((v5 & v7) == 0) {
            while (1) {
              v13 = v10[1];
              if (v13 == v4) {
                if (v10[2] == v4) {
                  goto LABEL_27;
                }
              }
              else if ((v13 & v7) != v8) {
                goto LABEL_25;
              }
              v10 = (_QWORD*)*v10;
              v12 = 0;
              if (v10 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v11 = v10[1];
            if (v11 == v4) {
              if (v10[2] == v4) {
              LABEL_27:
                v12 = v10[3];
                goto LABEL_26;
              }
            }
            else {
              if (v11 >= v5) {
                v11 %= v5;
              }
              if (v11 != v8) {
                break;
              }
            }
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v12 = 0;

LABEL_26:
  v14 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 392LL);
  v15 = GameRoutine_17618b0((__int64)a1);
  return GameRoutine_1763e20(v15, a1, v12, v14, (__int64)"L_RelianceAB");
}

#pragma GCC visibility pop
