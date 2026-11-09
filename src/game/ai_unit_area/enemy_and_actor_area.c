#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ca310;
extern __int64* GameData_212ce98[2];
__int64 EnemyAndActorArea_Destructor(__int64 result, __int64 a2);

__int64 EnemyAndActorArea_Destructor(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  signed int v8;
  int v9;
  int v10;
  signed int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 i;
  int v23;
  unsigned __int8* v24;
  int v25;
  int v26;
  int v27;

  if ((*(_DWORD*)(result + 8) & 0x80000000) == 0) {
    return result;
  }
  *(_QWORD*)(result + 8) = 0x800000007FFFFFFFLL;
  *(_QWORD*)(result + 16) = 0x800000007FFFFFFFLL;
  v2 = *(_QWORD*)(a2 + 440);
  v3 = GameData_21ca310 + 56;
  v4 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v2 != 0) {
    v5 = (__int64)&v4[3 * *(unsigned __int8*)(v2 + 16)];
  }
  else {
    v5 = *(_QWORD*)(GameData_21ca310 + 56) + 556216LL;
  }
  v6 = *(unsigned __int8*)(v5 + 16);
  if (v6 != 0 && v6 != 3) {
    v14 = *v4;
    if (*v4 != 0) {
      v8 = 0x80000000;
      v9 = 0x7FFFFFFF;
      v10 = 0x7FFFFFFF;
      v11 = 0x80000000;
      do {
        if (v9 >= *(char*)(v14 + 584)) {
          v9 = *(char*)(v14 + 584);
        }
        *(_DWORD*)(result + 8) = v9;
        if (v8 <= *(char*)(v14 + 584)) {
          v8 = *(char*)(v14 + 584);
        }
        *(_DWORD*)(result + 12) = v8;
        if (v10 >= *(char*)(v14 + 585)) {
          v10 = *(char*)(v14 + 585);
        }
        *(_DWORD*)(result + 16) = v10;
        if (v11 <= *(char*)(v14 + 585)) {
          v11 = *(char*)(v14 + 585);
        }
        *(_DWORD*)(result + 20) = v11;
        v14 = *(_QWORD*)(v14 + 432);
      } while (v14 != 0);
      v2 = *(_QWORD*)(a2 + 440);
      if (v2 == 0) {
        goto LABEL_24;
      }
    LABEL_11:
      v12 = *(_QWORD*)v3;
      v13 = *(_QWORD*)v3 + 24LL * *(unsigned __int8*)(v2 + 16) + 556000;
      goto LABEL_25;
    }
  }
  v8 = 0x80000000;
  v9 = 0x7FFFFFFF;
  v10 = 0x7FFFFFFF;
  v11 = 0x80000000;
  if (v2 != 0) {
    goto LABEL_11;
  }

LABEL_24:
  v12 = *(_QWORD*)v3;
  v13 = *(_QWORD*)v3 + 556216LL;

LABEL_25:
  if (*(_BYTE*)(v13 + 16) != 1) {
    v15 = *(_QWORD*)(v12 + 556024);
    if (v15 != 0) {
      do {
        if (v9 >= *(char*)(v15 + 584)) {
          v9 = *(char*)(v15 + 584);
        }
        *(_DWORD*)(result + 8) = v9;
        if (v8 <= *(char*)(v15 + 584)) {
          v8 = *(char*)(v15 + 584);
        }
        *(_DWORD*)(result + 12) = v8;
        if (v10 >= *(char*)(v15 + 585)) {
          v10 = *(char*)(v15 + 585);
        }
        *(_DWORD*)(result + 16) = v10;
        if (v11 <= *(char*)(v15 + 585)) {
          v11 = *(char*)(v15 + 585);
        }
        *(_DWORD*)(result + 20) = v11;
        v15 = *(_QWORD*)(v15 + 432);
      } while (v15 != 0);
      v2 = *(_QWORD*)(a2 + 440);
    }
  }
  if (v2 != 0) {
    v16 = *(_QWORD*)v3 + 24LL * *(unsigned __int8*)(v2 + 16) + 556000;
  }
  else {
    v16 = *(_QWORD*)v3 + 556216LL;
  }
  if (*(_BYTE*)(v16 + 16) != 2) {
    v17 = *(_QWORD*)(*(_QWORD*)v3 + 556048LL);
    if (v17 != 0) {
      do {
        if (v9 >= *(char*)(v17 + 584)) {
          v9 = *(char*)(v17 + 584);
        }
        *(_DWORD*)(result + 8) = v9;
        if (v8 <= *(char*)(v17 + 584)) {
          v8 = *(char*)(v17 + 584);
        }
        *(_DWORD*)(result + 12) = v8;
        if (v10 >= *(char*)(v17 + 585)) {
          v10 = *(char*)(v17 + 585);
        }
        *(_DWORD*)(result + 16) = v10;
        if (v11 <= *(char*)(v17 + 585)) {
          v11 = *(char*)(v17 + 585);
        }
        *(_DWORD*)(result + 20) = v11;
        v17 = *(_QWORD*)(v17 + 432);
      } while (v17 != 0);
      v2 = *(_QWORD*)(a2 + 440);
    }
  }
  v18 = *(_QWORD*)v3;
  if (v2 != 0) {
    v19 = v18 + 24LL * *(unsigned __int8*)(v2 + 16) + 556000;
  }
  else {
    v19 = v18 + 556216;
  }
  v20 = *(unsigned __int8*)(v19 + 16);
  if (v20 != 0 && v20 != 3) {
    for (i = *(_QWORD*)(v18 + 556072); i != 0; i = *(_QWORD*)(i + 432)) {
      if (v9 >= *(char*)(i + 584)) {
        v9 = *(char*)(i + 584);
      }
      *(_DWORD*)(result + 8) = v9;
      if (v8 <= *(char*)(i + 584)) {
        v8 = *(char*)(i + 584);
      }
      *(_DWORD*)(result + 12) = v8;
      if (v10 >= *(char*)(i + 585)) {
        v10 = *(char*)(i + 585);
      }
      *(_DWORD*)(result + 16) = v10;
      if (v11 <= *(char*)(i + 585)) {
        v11 = *(char*)(i + 585);
      }
      *(_DWORD*)(result + 20) = v11;
    }
  }
  if (v9 >= *(char*)(a2 + 584)) {
    v9 = *(char*)(a2 + 584);
  }
  *(_DWORD*)(result + 8) = v9;
  v23 = v9 - 1;
  if (v8 <= *(char*)(a2 + 584)) {
    v8 = *(char*)(a2 + 584);
  }
  *(_DWORD*)(result + 12) = v8;
  if (v10 >= *(char*)(a2 + 585)) {
    v10 = *(char*)(a2 + 585);
  }
  *(_DWORD*)(result + 16) = v10;
  if (v11 <= *(char*)(a2 + 585)) {
    v11 = *(char*)(a2 + 585);
  }
  *(_DWORD*)(result + 20) = v11;
  v24 = (unsigned __int8*)*GameData_212ce98[0];
  if (v23 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
    v23 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  }
  *(_DWORD*)(result + 8) = v23;
  if (v8 + 1 < v24[30]) {
    v25 = v8 + 1;
  }
  else {
    v25 = v24[30];
  }
  *(_DWORD*)(result + 12) = v25;
  v26 = v10 - 1;
  if (v10 - 1 <= v24[29]) {
    v26 = v24[29];
  }
  *(_DWORD*)(result + 16) = v26;
  if (v11 + 1 < v24[31]) {
    v27 = v11 + 1;
  }
  else {
    v27 = v24[31];
  }
  *(_DWORD*)(result + 20) = v27;
  return result;
}

#pragma GCC visibility pop
