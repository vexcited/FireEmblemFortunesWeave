#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
_QWORD* GimmickMenuItem_Unknown70(_BYTE* a1, __int64 a2);

_QWORD* GimmickMenuItem_Unknown70(_BYTE* a1, __int64 a2)
{
  _QWORD* result;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  unsigned __int64 v13;
  unsigned __int64 v14;
  int v15;
  int v16;
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
  __int64 v27;
  __int64 v28;
  __int64 v29;

  result = (_QWORD*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 584LL))(a1);
  if (result != nullptr) {
    result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 224LL))(result);
    if (result != nullptr) {
      v5 = result[50];
      v6 = result;
      v7 = msg_MessageManager_instance__ptr[0];
      v8 = GameData_212e348;
      if (v5 != 0) {
        v9 = *msg_MessageManager_instance__ptr[0];
        v17 = -1;
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v24 = -1;
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v12[0] = GameData_212e348 + 2;
        v12[1] = 0xFFFF0001FFFF0000LL;
        v13 = 0xFFFF0004FFFF0002LL;
        v14 = 0xFFFF0006FFFF0005LL;
        v29 = 8;
        v15 = -65529;
        v16 = -65528;
        result = (_QWORD*)GameRoutine_a4dbe0(v9, v5, 0, v12);
        if (result != nullptr) {
          result = (_QWORD*)GameRoutine_60a020(a2 + 8, result);
          *(_BYTE*)(a2 + 76) = 1;
        }
      }
      v10 = v6[26];
      if (v10 != 0) {
        v11 = *v7;
        v17 = -1;
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v24 = -1;
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v12[0] = v8 + 2;
        v12[1] = 0xFFFF0001FFFF0000LL;
        v13 = 0xFFFF0004FFFF0002LL;
        v14 = 0xFFFF0006FFFF0005LL;
        v29 = 8;
        v15 = -65529;
        v16 = -65528;
        result = (_QWORD*)GameRoutine_a4dbe0(v11, v10, 0, v12);
        if (result != nullptr && (a1[96] & 1) == 0) {
          result = (_QWORD*)GameRoutine_60a020(a2 + 8, result);
          *(_BYTE*)(a2 + 76) = 1;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
