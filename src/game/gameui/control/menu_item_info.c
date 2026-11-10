#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MenuItem_188bf10(__int64, __int64);
__int64 Registration_a4da40(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_212d690;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
__int64 MenuItemInfo_18be1b0(__int64 a1, __int64 a2, __int64 a3);

__int64 MenuItemInfo_18be1b0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  char* v9;
  char v10;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  MenuItem_188bf10(a1, a2);
  result = ui_LayoutAccessor_FindPane(a1 + 88, "T_Help");
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
    if (result != 0) {
      v6 = result;
      if (a3 != 0) {
        v7 = msg_MessageManager_instance__ptr[0];
        if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0]) & 1) !=
            0) {
          v8 = *v7;
          v14 = -1;
          v15 = -1;
          v16 = -1;
          v17 = -1;
          v18 = -1;
          v19 = -1;
          v20 = -1;
          v21 = -1;
          v22 = -1;
          v23 = -1;
          v24 = -1;
          v25 = -1;
          v11[0] = GameData_212e348 + 2;
          v11[1] = 0xFFFF0001FFFF0000LL;
          v11[2] = 0xFFFF0004FFFF0002LL;
          v11[3] = 0xFFFF0006FFFF0005LL;
          v26 = 8;
          v12 = -65529;
          v13 = -65528;
          v9 = (char*)GameRoutine_a4dbe0(v8, a3, 0, v11);
        }
        else {
          v9 = &GameData_1a9f09e;
        }
        result = GameRoutine_156c5d0(v6, v9, 0);
        v10 = *(_BYTE*)(v6 + 88) | 1;
      }
      else {
        v10 = *(_BYTE*)(result + 88) & 0xFE;
      }
      *(_BYTE*)(v6 + 88) = v10;
    }
  }
  return result;
}

#pragma GCC visibility pop
