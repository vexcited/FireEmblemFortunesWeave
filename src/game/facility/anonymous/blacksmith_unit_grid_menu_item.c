#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1878ae0(_QWORD, _QWORD, _QWORD);
__int64 ProcItemSelectMenu_187a420(_QWORD, _QWORD);
__int64 BlacksmithUnitGridMenuItem_18725f0(unsigned __int8* a1);

__int64 BlacksmithUnitGridMenuItem_18725f0(unsigned __int8* a1)
{
  unsigned __int8* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;

  if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)a1 + 464LL))(a1) & 1) ==
      0) {
    return 1;
  }
  v3 = a1[104];
  v2 = a1 + 104;
  v4 = *((_QWORD*)v2 - 12);
  v5 = *((_QWORD*)v2 - 2);
  v6 = v3 & 0xFFFFFFFD;
  if (*(_QWORD*)(v4 + 152) != 0) {
    v7 = *(_QWORD*)(v4 + 152);
  }
  else {
    v7 = *((_QWORD*)v2 - 12);
  }
  if (v6 != 0) {
    ProcItemSelectMenu_187a420(v7, v5);
  }
  else {
    GameRoutine_1878ae0(v7, v5, v2);
  }
  return 9;
}

#pragma GCC visibility pop
