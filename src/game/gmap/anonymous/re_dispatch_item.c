#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LegionMenuUtil_16f2280(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c96e8;
__int64 ReDispatchItem_Unknown25(_QWORD* a1);

__int64 ReDispatchItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(__int64**)(v4 + 8);
  v6 = *(__int64**)(v4 + 16);
  v7 = *(_DWORD*)(v4 + 56);
  if (v7 < 0) {
    for (; v5 != v6; ++v5) {
      v8 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
        goto LABEL_13;
      }
    }
  }
  else {
    while (v5 != v6) {
      v9 = *v5++;
      v8 = v9;
      if (*(_DWORD*)(v9 + 84) == v7) {
        goto LABEL_13;
      }
    }
  }
  v8 = 0;
LABEL_13:
  v11 = *(_DWORD*)(v8 + 540);
  v12 = __OFSUB__(v11, 1);
  v13 = (unsigned int)(v11 - 1);
  if (((v13 & 0x80000000) != 0LL) == v12) {
    v14 = *(_QWORD*)(v8 + 24);
    v15 = *(_QWORD*)(v8 + 32) - v14;
    v16 = v14 + 8LL * (unsigned int)v13;
    if (v13 < v15 >> 3) {
      v8 = v16;
    }
  }
  LegionMenuUtil_16f2280(v3, *(_QWORD*)v8, 1);
  return 9;
}

#pragma GCC visibility pop
