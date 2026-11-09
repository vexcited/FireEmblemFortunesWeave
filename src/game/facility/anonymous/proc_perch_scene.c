#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aeb5df;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_21f4010;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 ProcPerchScene_15f0f70();
void ProcPerchScene_15f0fa0();
__int64 ProcPerchScene_Unknown18(__int64 a1, __int64 a2);

__int64 ProcPerchScene_15f0f70()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcPerchScene_15f0fa0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

__int64 ProcPerchScene_Unknown18(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = game_HashString(&GameData_1aeb5df, a2);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = v2;
        if (v2 >= v3) {
          v6 = v2 % v3;
        }
      }
      else {
        v6 = v5 & v2;
      }
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v11 = v8[1];
              if (v11 == v2) {
                if (v8[2] == v2) {
                  goto LABEL_27;
                }
              }
              else if ((v11 & v5) != v6) {
                goto LABEL_25;
              }
              v8 = (_QWORD*)*v8;
              v10 = 0;
              if (v8 == nullptr) {
                return GameRoutine_14877f0(v10, 0x13F000000LL);
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == v2) {
              if (v8[2] == v2) {
              LABEL_27:
                v10 = v8[3];
                return GameRoutine_14877f0(v10, 0x13F000000LL);
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                break;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v10 = 0;
  return GameRoutine_14877f0(v10, 0x13F000000LL);
}

#pragma GCC visibility pop
