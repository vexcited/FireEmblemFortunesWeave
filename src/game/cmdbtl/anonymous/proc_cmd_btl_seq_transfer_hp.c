#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlCombatWindow_17c2410(__int64 result, unsigned __int64,
                                   unsigned int);
extern __int64 GameData_212f520[4];
extern __int64 GameData_2203490;
extern __int64 GameData_22197d8;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 ProcCmdBtlSeqTransferHp_Unknown3(__int64 result);

__int64 ProcCmdBtlSeqTransferHp_Unknown3(__int64 result)
{

#pragma clang fp contract(off)
  int* v1;
  float v3;
  float v4;
  float v5;
  unsigned __int64 v6;
  int v7;

  v1 = (int*)GameData_2203490;
  if (GameData_2203490 == 0 || *(_BYTE*)(result + 156) == 0) {
    return result;
  }
  v3 = 0x1.0000000000000p+0f;
  if ((*(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 11LL) & 1) == 0) {
    v3 = *(float*)(result + 152);
    v4 = fabsf(
        (float)((float)(*(float*)(*(_QWORD*)
                                      game_script_hub_g_frame_counter_ptr[0] +
                                  160LL) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f) /
        0x1.8000000000000p+0f);
    if (v3 > 0x1.0000000000000p+0f) {
      v3 = v3 - v4;
      if (v3 >= 0x1.0000000000000p+0f) {
        goto LABEL_12;
      }
    LABEL_11:
      v3 = 0x1.0000000000000p+0f;
      goto LABEL_12;
    }
    if (v3 < 0x1.0000000000000p+0f) {
      v3 = v3 + v4;
      if (v3 > 0x1.0000000000000p+0f) {
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  *(float*)(result + 152) = v3;
  if (GameData_22197d8 != 0) {
    v5 = (float)(0x1.0000000000000p+0f - v3) * (float)*(int*)(result + 160);
    v6 = (unsigned int)(int)(float)(v5 + (float)v1[171]) |
         ((unsigned __int64)(unsigned int)(int)(float)(v5 + (float)v1[171])
          << 32);
    v7 = v1[172] + v1[173];
    if (v7 <= 1) {
      v7 = 1;
    }
    return CmdBtlCombatWindow_17c2410(
        GameData_22197d8, v6, (int)(float)(v5 + (float)(unsigned int)v7));
  }
  return result;
}

#pragma GCC visibility pop
