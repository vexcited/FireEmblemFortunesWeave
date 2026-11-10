#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Message_16f9b50(__int64);
__int64 strlen(_QWORD);
extern char* GameData_2036780[4];
__int64 game_facility_anonymous_13e2b70(__int64 result);

__int64 game_facility_anonymous_13e2b70(__int64 result)
{
  char v1;
  unsigned int v2;
  bool v3;
  int v4;
  bool v5;
  unsigned __int8 v6;
  __int64 v7;
  const char* v8;

  if (*(_QWORD*)(result + 240) == 0) {
    v1 = *(_BYTE*)(result + 225);
    v2 = *(unsigned __int8*)(result + 224);
    if ((v2 & 0xFFFFFFFB) != 0) {
      if ((v1 & 0xFB) != 0) {
        v3 = v2 > 5;
        v4 = (1 << v2) & 0x2C;
        v5 = v3 || v4 == 0;
        if (v5 || (v6 = v1 - 2) > 3u) {
          v7 = result;
          v8 = "MID_TheaterWatch_Good_Message";
        }
        else {
          v7 = result;
          v8 = GameData_2036780[v6];
        }
        goto LABEL_14;
      }
    }
    else if ((v1 & 0xFB) == 0) {
      v7 = result;
      v8 = "MID_TheaterWatch_Perfect_Message";
      goto LABEL_14;
    }
    v7 = result;
    v8 = "MID_TheaterWatch_Bad_Message";
  LABEL_14:
    strlen(v8);
    return Message_16f9b50(v7);
  }
  return result;
}

#pragma GCC visibility pop
