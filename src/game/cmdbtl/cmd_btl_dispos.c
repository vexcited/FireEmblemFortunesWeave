#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7576e0(_QWORD, _QWORD);
__int64 GameRoutine_f36bc0(_QWORD, _QWORD);
extern __int64 GameData_21ca310;
__int64 CmdBtlDispos_f35040(__int64 result);

__int64 CmdBtlDispos_f35040(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  int v19;
  _BYTE v20[4];

  if (*(_BYTE*)(result + 8) != 0) {
    v1 = (_QWORD*)(result + 128);
    v2 = result;
    GameRoutine_f36bc0(result + 120, *(_QWORD*)(result + 128));
    v4 = v1[5];
    v3 = v1[6];
    *v1 = 0;
    v1[1] = 0;
    v5 = v3 - v4;
    *(v1 - 1) = v1;
    if ((int)(v5 >> 3) >= 1) {
      v6 = (v5 >> 3) & 0x7FFFFFFF;
      v7 = GameData_21ca310;
      v8 = v6 - 1;
      while (1) {
        v10 = *(_QWORD**)(*(_QWORD*)(v2 + 168) + 8 * v8);
        if (v10[49] != 0) {
          break;
        }
      LABEL_6:
        v9 = v8-- + 1;
        if (v9 <= 1) {
          goto LABEL_21;
        }
      }
      v11 = v10[53];
      v12 = v10[54];
      v13 = *(_QWORD*)(v7 + 56) + 552960LL;
      if (v12 != 0) {
        *(_QWORD*)(v12 + 424) = v11;
        if (v11 == 0) {
          goto LABEL_14;
        }
      }
      else {
        *(_QWORD*)(*(_QWORD*)(v7 + 56) + 556008LL) = v11;
        if (v11 == 0 || (*(_QWORD*)(v11 + 432) = 0, (v11 = v10[53]) == 0)) {
        LABEL_14:
          v14 = v10[54];
          *(_QWORD*)(v13 + 3040) = v14;
          if (v14 != 0) {
            *(_QWORD*)(v14 + 424) = 0;
          }
          goto LABEL_16;
        }
      }
      *(_QWORD*)(v11 + 432) = v10[54];
    LABEL_16:
      v10[53] = 0;
      v10[54] = 0;
      v15 = *(_QWORD*)(v7 + 56) + 552960LL;
      v16 = (_QWORD*)(*(_QWORD*)(v7 + 56) + 556000LL);
      if (*(unsigned __int8*)(*(_QWORD*)(v7 + 56) + 556016LL) >= 0xAu) {
        v17 = nullptr;
      }
      else {
        v17 = &v16[3 * *(unsigned __int8*)(*(_QWORD*)(v7 + 56) + 556016LL)];
      }
      v10[55] = v17;
      v18 = *(_QWORD*)(v15 + 3040);
      if (v18 != 0) {
        *(_QWORD*)(v18 + 424) = v10;
        v10[54] = v18;
      }
      else {
        *(_QWORD*)(v15 + 3048) = v10;
      }
      *v16 = v10;
      goto LABEL_6;
    }
  LABEL_21:
    v20[0] = 0;
    v19 = 267;
    result = GameRoutine_7576e0(v20, &v19);
    *(_BYTE*)(v2 + 8) = 0;
  }
  return result;
}

#pragma GCC visibility pop
