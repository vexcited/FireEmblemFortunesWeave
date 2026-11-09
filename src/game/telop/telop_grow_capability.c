#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 TelopGrowCapability_Unknown56(__int64 a1);

__int64 TelopGrowCapability_Unknown56(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int128 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v7 = 0;
  v6 = 0u;
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0) {
    *(_WORD*)((char*)&v6 + 9) = 28239;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOn";
  }
  else {
    DWORD2(v6) = 1717981035;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOff";
  }
  GameRoutine_1562cf0(a1 + 168, (char*)&v6 + 1);
  return GameRoutine_1562cf0(a1 + 168, "Type_TitleOff");
}

#pragma GCC visibility pop
