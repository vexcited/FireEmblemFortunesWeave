#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
extern __int16 GameData_21eea60;
long double GameRoutine_16df7a0(void);
__int64 ProcObeliskResumeMenu_Unknown2(__int64 a1);
__int64 ProcObeliskResumeMenu_Unknown84(__int64 a1);

__int64 ProcObeliskResumeMenu_Unknown2(__int64 a1)
{
  long double v2;
  __int64 result;
  long double v4;
  long double v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int16* v10;
  __int16* v11;

  v2 = GameRoutine_16df7a0();
  result = GameRoutine_1563280(a1 + 848, "In_L", 0, v2);
  if ((result & 1) == 0) {
    result = GameRoutine_1563280(a1 + 848, "In_R", 0, v4);
    if ((result & 1) == 0) {
      v6 = *(_QWORD*)(a1 + 1088);
      v7 = *(int*)(a1 + 1076);
      if (v7 < (*(_QWORD*)(a1 + 1096) - v6) >> 2) {
        v7 = *(int*)(v6 + 4 * v7);
      }
      v8 = *(_QWORD*)(a1 + 1216);
      v9 = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(a1 + 1224) - v8) >> 4);
      v10 = (__int16*)(v8 + 112LL * (int)v7);
      if (v9 <= v7) {
        v11 = &GameData_21eea60;
      }
      else {
        v11 = v10;
      }
      if (*(_DWORD*)(a1 + 1432) == *((unsigned __int8*)v11 + 12)) {
        LODWORD(v5) = 1.0;
        return GameRoutine_1562680(a1 + 848, "Wait", v5);
      }
    }
  }
  return result;
}

__int64 ProcObeliskResumeMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  int v3;
  _QWORD v5[2];
  char v6;
  int v7;
  int v8;
  char v9;
  __int64 v10;

  v2 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp");
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v9 = 0;
  v10 = 0;
  v5[0] = "OpenStatus";
  v5[1] = "MID_KeyHelp_Status";
  v6 = 1;
  v7 = 2;
  v8 = v3;
  return GameRoutine_1593d90(v2, v5);
}

#pragma GCC visibility pop
