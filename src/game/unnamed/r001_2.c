#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f957d8[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212ce88[4];
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_748f80(__int64, __int64, int, int, int, unsigned int*);
__int64 GameRoutine_74cd60(_QWORD);

__int64 GameHr_754f50(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v3;
  int v4;
  int v5;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v34[4];
  _QWORD* v35;
  char v36;

  v2 = 0;
  v36 = 0;
  if (a1 == 0 || a2 == 0) {
    return v2 & 1;
  }
  v3 = *(_QWORD*)(a2 + 440);
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(v3 + 16);
  }
  else {
    v4 = 9;
  }
  v5 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL);
  if (v5 == v4) {
    goto LABEL_10;
  }
  if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
    if (v4 == 0 && v5 == 3) {
      goto LABEL_10;
    }
  }
  else if (v4 == 3) {
  LABEL_10:
    v2 = 0;
    return v2 & 1;
  }
  v7 = GameData_212ce88[0];
  v8 = (_QWORD*)*GameData_212ce88[0];
  v9 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
  v10 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
  v11 = *GameData_212ce88[0] + 2696;
  v12 = ((v9 - v10) << 6) - 1;
  if (v9 == v10) {
    v12 = 0;
  }
  v13 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
        *(_QWORD*)(*GameData_212ce88[0] + 10768);
  if (v12 == v13) {
    v14 = a1;
    GameRoutine_74cd60(v8 + 1342);
    v10 = v8[1343];
    a1 = v14;
    v13 = v8[1347] + v8[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 9)) + 8 * (v13 & 0x1FF)) = v8[1];
  v8[1] = v11;
  v15 = v8[1347];
  LODWORD(v34[0]) = 1048578;
  v8[1347] = v15 + 1;
  GameRoutine_748f80(*v7, a1, *(char*)(a1 + 584), *(char*)(a1 + 585), -1,
                     (unsigned int*)v34);
  v16 = (unsigned int)*(char*)(a2 + 584);
  v17 = (unsigned int)*(char*)(a2 + 585);
  v35 = v34;
  v34[0] = GameData_1f957d8;
  v34[1] = &v36;
  GameRoutine_6c8a80(a2, v16, v17, v34);
  if (v35 == v34) {
    v18 = 32;
    goto LABEL_20;
  }
  if (v35 != nullptr) {
    v18 = 40;
  LABEL_20:
    (*(void (**)(void))(*v35 + v18))();
  }
  v19 = (_QWORD*)*v7;
  v20 = v19[1347];
  v21 = v19[1346];
  v22 = v19[1343];
  v23 = v19[1344];
  v24 = v23 == v22;
  v25 = v20 - 1 + v21;
  v26 = v25 >> 9;
  v27 = v25 & 0x1FF;
  v28 = ((v23 - v22) << 6) - 1;
  v29 = *(_QWORD*)(v22 + 8 * v26);
  if (v24) {
    v28 = 0;
  }
  v30 = *(_QWORD*)(v29 + 8 * v27);
  v19[1347] = v20 - 1;
  v19[1] = v30;
  if ((unsigned __int64)(v28 - (v20 + v21) + 1) >= 0x400) {
    v31 = *(_QWORD*)(v23 - 8);
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v32 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v32, v31);
      v23 = v19[1344];
    }
    v19[1344] = v23 - 8;
  }
  v2 = v36;
  return v2 & 1;
}

#pragma GCC visibility pop
