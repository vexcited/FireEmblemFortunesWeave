#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156e270(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 RetirePart3MenuItem_Unknown77();

__int64 RetirePart3MenuItem_Unknown77()
{
  __int64 v1;
  _QWORD v2[4];
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if ((GameRoutine_156e270() & 1) != 0) {
    return 0;
  }
  v5 = -1;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v1 = *msg_MessageManager_instance__ptr[0];
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v2[0] = GameData_212e348 + 2;
  v2[1] = 0xFFFF0001FFFF0000LL;
  v2[2] = 0xFFFF0004FFFF0002LL;
  v2[3] = 0xFFFF0006FFFF0005LL;
  v17 = 8;
  v3 = -65529;
  v4 = -65528;
  return GameRoutine_a4dbe0(
      v1, "MID_Restart_ReturnObelisk_Part3_Chapter1_Annotation", 0, v2);
}

#pragma GCC visibility pop
