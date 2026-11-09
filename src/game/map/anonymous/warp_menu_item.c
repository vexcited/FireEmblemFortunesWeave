#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_7ca370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212cfb8[11];
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 WarpMenuItem_Unknown70(_BYTE* a1, __int64 a2);

__int64 WarpMenuItem_Unknown70(_BYTE* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD v7[4];
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 568LL))(a1);
  if (result != 0) {
    result = GameRoutine_7ca370(*GameData_212cfb8[0],
                                (unsigned int)*(char*)(result + 584),
                                (unsigned int)*(char*)(result + 585));
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 224LL))(result);
      if (result != 0) {
        v5 = *(_QWORD*)(result + 208);
        if (v5 != 0) {
          v10 = -1;
          v11 = -1;
          v12 = -1;
          v13 = -1;
          v6 = *msg_MessageManager_instance__ptr[0];
          v14 = -1;
          v15 = -1;
          v16 = -1;
          v17 = -1;
          v18 = -1;
          v19 = -1;
          v20 = -1;
          v21 = -1;
          v7[0] = msg_TagSelector_vtable;
          v7[1] = 0xFFFF0001FFFF0000LL;
          v7[2] = 0xFFFF0004FFFF0002LL;
          v7[3] = 0xFFFF0006FFFF0005LL;
          v22 = 8;
          v8 = -65529;
          v9 = -65528;
          result = GameRoutine_a4dbe0(v6, v5, 0, v7);
          if (result != 0 && (a1[96] & 1) == 0) {
            result = GameRoutine_60a020(a2 + 8, result);
            *(_BYTE*)(a2 + 76) = 1;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
