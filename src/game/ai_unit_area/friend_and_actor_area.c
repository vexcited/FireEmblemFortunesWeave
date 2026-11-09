#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ca310;
extern __int64* GameData_212ce98[2];
__int64 FriendAndActorArea_Destructor(__int64 result, __int64 a2);

__int64 FriendAndActorArea_Destructor(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  signed int v4;
  int v5;
  int v6;
  signed int v7;
  int v8;
  int v9;
  unsigned __int8* v10;
  int v11;
  int v12;

  if ((*(_DWORD*)(result + 8) & 0x80000000) == 0) {
    return result;
  }
  *(_QWORD*)(result + 8) = 0x800000007FFFFFFFLL;
  *(_QWORD*)(result + 16) = 0x800000007FFFFFFFLL;
  v2 = *(_QWORD*)(a2 + 440);
  if (v2 != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                    24LL * *(unsigned __int8*)(v2 + 16) + 556000);
    if (v3 != 0) {
      goto LABEL_4;
    }
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
    if (v3 != 0) {
    LABEL_4:
      v4 = 0x80000000;
      v5 = 0x7FFFFFFF;
      v6 = 0x7FFFFFFF;
      v7 = 0x80000000;
      do {
        if (v5 >= *(char*)(v3 + 584)) {
          v5 = *(char*)(v3 + 584);
        }
        *(_DWORD*)(result + 8) = v5;
        if (v4 <= *(char*)(v3 + 584)) {
          v4 = *(char*)(v3 + 584);
        }
        *(_DWORD*)(result + 12) = v4;
        if (v6 >= *(char*)(v3 + 585)) {
          v6 = *(char*)(v3 + 585);
        }
        *(_DWORD*)(result + 16) = v6;
        if (v7 <= *(char*)(v3 + 585)) {
          v7 = *(char*)(v3 + 585);
        }
        *(_DWORD*)(result + 20) = v7;
        v3 = *(_QWORD*)(v3 + 432);
      } while (v3 != 0);
      goto LABEL_17;
    }
  }
  v6 = 0x7FFFFFFF;
  v7 = 0x80000000;
  v4 = 0x80000000;
  v5 = 0x7FFFFFFF;

LABEL_17:
  if (v5 >= *(char*)(a2 + 584)) {
    v5 = *(char*)(a2 + 584);
  }
  *(_DWORD*)(result + 8) = v5;
  v8 = v5 - 1;
  if (v4 <= *(char*)(a2 + 584)) {
    v4 = *(char*)(a2 + 584);
  }
  *(_DWORD*)(result + 12) = v4;
  if (v6 >= *(char*)(a2 + 585)) {
    v6 = *(char*)(a2 + 585);
  }
  *(_DWORD*)(result + 16) = v6;
  v9 = v6 - 1;
  if (v7 <= *(char*)(a2 + 585)) {
    v7 = *(char*)(a2 + 585);
  }
  *(_DWORD*)(result + 20) = v7;
  v10 = (unsigned __int8*)*GameData_212ce98[0];
  if (v8 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
    v8 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  }
  *(_DWORD*)(result + 8) = v8;
  if (v4 + 1 < v10[30]) {
    v11 = v4 + 1;
  }
  else {
    v11 = v10[30];
  }
  *(_DWORD*)(result + 12) = v11;
  if (v9 <= v10[29]) {
    v9 = v10[29];
  }
  *(_DWORD*)(result + 16) = v9;
  if (v7 + 1 < v10[31]) {
    v12 = v7 + 1;
  }
  else {
    v12 = v10[31];
  }
  *(_DWORD*)(result + 20) = v12;
  return result;
}

#pragma GCC visibility pop
