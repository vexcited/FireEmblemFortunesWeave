#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8c9dc0(_QWORD, _QWORD);
extern __int64 GameData_21c9ff0;
extern char GameData_1a9f09e;
__int64 RelianceSpecialFile_Unknown4(__int64 result);
__int64 RelianceSpecialFile_8c9fd0(__int64 result);

__int64 RelianceSpecialFile_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[2];

  v1 = *(_QWORD*)(GameData_21c9ff0 + 64);
  v2 = *(_QWORD*)(GameData_21c9ff0 + 72);
  if (v1 != v2) {
    v3 = result;
    do {
      v9 = *(_QWORD*)(*(_QWORD*)v1 + 40LL);
      if (v9 != 0) {
        v10 = *(_QWORD*)(*(_QWORD*)v1 + 56LL);
        if (v10 != 0) {
          v11 = *(_QWORD*)(v9 + 24);
          v12 = *(_QWORD*)(v10 + 24);
          v16[1] = &GameData_1a9f09e;
          v13 = *(_QWORD*)(v11 + 1784);
          v14 = *(_QWORD*)(v12 + 1784);
          if (v13 == 0 || v14 == 0) {
            v8 = -1;
          }
          else {
            v4 = *(unsigned __int16*)(v13 + 16);
            v5 = *(unsigned __int16*)(v14 + 16);
            HIDWORD(v7) = v4 | (v5 << 16);
            LODWORD(v7) = HIDWORD(v7);
            v6 = v7 >> 16;
            if (v4 >= v5) {
              LODWORD(v8) = v6;
            }
            else {
              LODWORD(v8) = v4 | (v5 << 16);
            }
            v8 = (int)v8;
          }
          v16[0] = v8;
          result = GameRoutine_8c9dc0(v3 + 8, v16);
        }
      }
      v1 += 8;
    } while (v1 != v2);
  }
  return result;
}

__int64 RelianceSpecialFile_8c9fd0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[2];

  v1 = *(_QWORD*)(GameData_21c9ff0 + 64);
  v2 = *(_QWORD*)(GameData_21c9ff0 + 72);
  if (v1 != v2) {
    v3 = result;
    do {
      v9 = *(_QWORD*)(*(_QWORD*)v1 + 40LL);
      if (v9 != 0) {
        v10 = *(_QWORD*)(*(_QWORD*)v1 + 56LL);
        if (v10 != 0) {
          v11 = *(_QWORD*)(v9 + 24);
          v12 = *(_QWORD*)(v10 + 24);
          v16[1] = &GameData_1a9f09e;
          v13 = *(_QWORD*)(v11 + 1784);
          v14 = *(_QWORD*)(v12 + 1784);
          if (v13 == 0 || v14 == 0) {
            v8 = -1;
          }
          else {
            v4 = *(unsigned __int16*)(v13 + 16);
            v5 = *(unsigned __int16*)(v14 + 16);
            HIDWORD(v7) = v4 | (v5 << 16);
            LODWORD(v7) = HIDWORD(v7);
            v6 = v7 >> 16;
            if (v4 >= v5) {
              LODWORD(v8) = v6;
            }
            else {
              LODWORD(v8) = v4 | (v5 << 16);
            }
            v8 = (int)v8;
          }
          v16[0] = v8;
          result = GameRoutine_8c9dc0(v3, v16);
        }
      }
      v1 += 8;
    } while (v1 != v2);
  }
  return result;
}

#pragma GCC visibility pop
