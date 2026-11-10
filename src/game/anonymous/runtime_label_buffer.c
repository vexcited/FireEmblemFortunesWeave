#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fba308[])();
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
bool game_anonymous_RuntimeLabelBuffer_EachSaveFlag(__int64 a1, __int64 a2);
__int64
game_anonymous_RuntimeLabelBuffer_EachSaveFlag_closure_Invoke(__int64 a1);

bool game_anonymous_RuntimeLabelBuffer_EachSaveFlag(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64** v5;
  int v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;

  v2 = *(_QWORD*)(a1 + 24);
  v3 = v20;
  v20[0] = GameData_1fba308;
  v20[1] = a2;
  v21 = v20;
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    v17 = false;
  LABEL_38:
    v18 = 32;
    goto LABEL_39;
  }
  v5 = *(__int64***)(v2 + 216);
  if (v5 == nullptr) {
    v17 = false;
    v3 = v20;
    goto LABEL_38;
  }
  v6 = 0;
  do {
    v7 = (unsigned __int64)v5[2];
    if (v7 != 0) {
      v8 = *(_QWORD**)(v4 + 48);
      v9 = v8[2];
      if (v9 != 0 && v8[4] != 0) {
        v11 = v9 - 1;
        if ((v9 & (v9 - 1)) != 0) {
          v12 = (unsigned __int64)v5[2];
          if (v7 >= v9) {
            v12 = v7 % v9;
          }
        }
        else {
          v12 = v11 & v7;
        }
        v13 = *(_QWORD**)(v8[1] + 8 * v12);
        if (v13 != nullptr) {
          v14 = (_QWORD*)*v13;
          if (v14 != nullptr) {
            if ((v9 & v11) == 0) {
              while (1) {
                v16 = v14[1];
                if (v7 == v16) {
                  if (v14[2] == v7) {
                    goto LABEL_30;
                  }
                }
                else if ((v16 & v11) != v12) {
                  goto LABEL_4;
                }
                v14 = (_QWORD*)*v14;
                if (v14 == nullptr) {
                  goto LABEL_4;
                }
              }
            }
            do {
              v15 = v14[1];
              if (v7 == v15) {
                if (v14[2] == v7) {
                LABEL_30:
                  if (v14[3] != 0) {
                    if (v21 == nullptr) {
                      GameRoutine_60a310(0);
                    }
                    (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(
                        v21, *(_QWORD*)(v2 + 176) + 40LL * *((int*)v5 + 6));
                    ++v6;
                  }
                  break;
                }
              }
              else {
                if (v15 >= v9) {
                  v15 %= v9;
                }
                if (v15 != v12) {
                  break;
                }
              }
              v14 = (_QWORD*)*v14;
            } while (v14 != nullptr);
          }
        }
      }
    }
  LABEL_4:
    v5 = (__int64**)*v5;
  } while (v5 != nullptr);
  v3 = v21;
  v17 = v6 > 0;
  if (v21 == v20) {
    goto LABEL_38;
  }
  if (v21 != nullptr) {
    v18 = 40;
  LABEL_39:
    (*(void (**)(_QWORD*, __int64))(*v3 + v18))(v3, a2);
  }
  return v17;
}

__int64

game_anonymous_RuntimeLabelBuffer_EachSaveFlag_closure_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v1 == 0) {
    GameRoutine_60a310((unsigned __int8)v1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
}

#pragma GCC visibility pop
