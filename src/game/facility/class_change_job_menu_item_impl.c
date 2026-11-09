#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21c9988;
extern char GameData_1a9f09e;
extern char* GameData_208c628[3];
char* ClassChangeJobMenuItem_16b7590(__int64 a1);

char* ClassChangeJobMenuItem_16b7590(__int64 a1)
{
  char v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  char v7;
  unsigned __int8 v8;
  __int64 v10;

  v3 = *(_QWORD*)(a1 + 88);
  v2 = *(_QWORD*)(a1 + 96);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 392);
    if (v2 == GameData_21c9988 && v4 != 0) {
      v6 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1784LL);
      if (v6 != 0) {
        v1 = *(_BYTE*)(v6 + 52);
      }
      v7 = *(_BYTE*)(v4 + 52);
      if (v6 != 0) {
        v7 = v1;
      }
      v8 = v7 - 1;
      if (v8 < 3u) {
        return GameData_208c628[v8];
      }
    }
  }
  v10 = *(_QWORD*)(v2 + 32);
  if (v10 != 0) {
    return (char*)v10;
  }
  else {
    return &GameData_1a9f09e;
  }
}

#pragma GCC visibility pop
