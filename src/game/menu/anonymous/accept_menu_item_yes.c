#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_9bd480(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
extern __int64 (*GameData_20fba30[])();
extern __int64 (*GameData_20fbab0[])();
extern __int64 (*GameData_20fbb30[])();
extern __int64 (*GameData_20fbbb0[])();
extern __int64 (*GameData_20fbc30[])();
extern __int64 (*GameData_20fbcb0[])();
extern __int64 game_GameModeData_instance_;
__int64 AcceptMenuItem_Yes_Unknown25(__int64 a1);
bool AcceptMenuItem_Yes_Unknown58(__int64 a1);

__int64 AcceptMenuItem_Yes_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;

  if (*(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 1) {
    v1 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v1 + 152) != 0) {
      v1 = *(_QWORD*)(v1 + 152);
    }
    v3 = GameRoutine_9bd480(*(_QWORD*)(v1 + 32));
    if (v3 != 0) {
      v4 = *(_BYTE**)(a1 + 88);
      v5 = v3;
      v18 = v17;
      v17[0] = GameData_20fba30;
      v17[1] = v4;
      game_ProcList_Call_9bcfa0(v3, v17);
      if (v18 == v17) {
        v6 = 32;
      }
      else {
        if (v18 == nullptr) {
          goto LABEL_11;
        }
        v6 = 40;
      }
      (*(void (**)(void))(*v18 + v6))();
    LABEL_11:
      if (v4[9] == 1) {
        v8 = *(unsigned __int8*)(*(_QWORD*)v4 + 113LL);
        if (v8 != 1 && v8 != 5 &&
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)v4 + 112LL) - 5 >= 3) {
          v17[0] = GameData_20fbab0;
          v18 = v17;
          game_ProcList_Call_9bcfa0(v5, v17);
          if (v18 == v17) {
            v13 = 32;
          }
          else {
            if (v18 == nullptr) {
            LABEL_35:
              v14 = GameRoutine_821090(37);
              if (game_GameModeData_instance_ != 0) {
                v15 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v14);
                if (v15 != 0 && *(int*)(v15 + 32) > 0) {
                  goto LABEL_23;
                }
              }
              v17[0] = GameData_20fbb30;
              v18 = v17;
              game_ProcList_Call_9bcfa0(v5, v17);
              if (v18 == v17) {
                v16 = 32;
              }
              else {
                if (v18 == nullptr) {
                LABEL_43:
                  v10 = GameData_20fbbb0;
                  goto LABEL_18;
                }
                v16 = 40;
              }
              (*(void (**)(void))(*v18 + v16))();
              goto LABEL_43;
            }
            v13 = 40;
          }
          (*(void (**)(void))(*v18 + v13))();
          goto LABEL_35;
        }
      }
      v10 = GameData_20fbc30;
    LABEL_18:
      v17[0] = v10;
      v18 = v17;
      game_ProcList_Call_9bcfa0(v5, v17);
      if (v18 == v17) {
        v11 = 32;
      }
      else {
        if (v18 == nullptr) {
          goto LABEL_23;
        }
        v11 = 40;
      }
      (*(void (**)(void))(*v18 + v11))();
    LABEL_23:
      v17[0] = GameData_20fbcb0;
      v17[1] = v4;
      v18 = v17;
      game_ProcList_Call_9bcfa0(v5, v17);
      if (v18 == v17) {
        v12 = 32;
        goto LABEL_27;
      }
      if (v18 != nullptr) {
        v12 = 40;
      LABEL_27:
        (*(void (**)(void))(*v18 + v12))();
      }
      return 2;
    }
  }
  return 1;
}

bool AcceptMenuItem_Yes_Unknown58(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 1;
}

#pragma GCC visibility pop
