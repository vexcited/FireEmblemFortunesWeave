#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21d96b8;
extern __int64 GameData_21f3d10;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
__int64 Input_d8cd20(__int64 result);

__int64 Input_d8cd20(__int64 result)
{
  int v1;
  _DWORD* v2;
  int v3;
  __int64 v4;
  bool v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  char v10;
  int v11;
  bool v13;
  int v14;

  v1 = *(_DWORD*)(result + 16);
  v2 = (_DWORD*)result;
  v3 = v1 - 1;
  *(_DWORD*)(result + 16) = v1 - 1;
  if (v1 == 1) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(result + 8);
    v3 = v2[4];
  }
  v4 = GameData_21d96b8;
  v5 = (int)v2[8] <= 0 && v3 <= 0;
  if (!v5 ||
      game_ProcGameSkipView_instance_ != 0 &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v7 = 2)
               : (v7 = 3),
           (v7 & v6) == 0) ||
      game_hub_ProcHubSeqView_instance_ != 0 &&
          (v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) != 0 &&
          *(_QWORD*)(v8 + 40) != 0 ||
      (v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) != 0 &&
          *(_QWORD*)(v9 + 40) != 0) {
    v10 = 0;
  }
  else {
    v10 = *(_BYTE*)(GameData_21f3d10 + 10);
  }
  v11 = *(unsigned __int8*)(GameData_21d96b8 + 14);
  *(_BYTE*)(GameData_21d96b8 + 12) = v10 & 1;
  v13 = (int)v2[8] < 1 && v2[12] < 1;
  *(_BYTE*)(v4 + 13) = v13;
  v14 = v2[8] < 1;
  if (v11 != v14) {
    *(_BYTE*)(v4 + 14) = v14;
  }
  return result;
}

#pragma GCC visibility pop
