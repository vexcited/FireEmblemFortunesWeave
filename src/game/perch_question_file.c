#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_224adb0;
extern __int64 GameData_224adb8;
extern __int64 GameData_224adc8;
extern __int64 game_GameModeData_instance_;
__int64 PerchQuestionFile_147eb20(__int64 a1);

__int64 PerchQuestionFile_147eb20(__int64 a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64*** v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)(_QWORD);
  __int64 v18;
  _QWORD* v19;

  if (*(_QWORD*)a1 == 0) {
    return 0;
  }
  if (GameData_224adb8 == 0 || GameData_224adc8 == 0) {
    return 0;
  }
  v2 = *(unsigned __int8*)(*(_QWORD*)a1 + 48LL);
  v3 = GameData_224adb8 - 1;
  if ((GameData_224adb8 & (GameData_224adb8 - 1)) != 0) {
    v4 = *(unsigned __int8*)(*(_QWORD*)a1 + 48LL);
    if (GameData_224adb8 <= v2) {
      v4 = (unsigned int)v2 % (unsigned int)GameData_224adb8;
    }
  }
  else {
    v4 = ((_DWORD)GameData_224adb8 - 1) & (unsigned int)v2;
  }
  v5 = *(__int64****)(GameData_224adb0 + 8 * v4);
  if (v5 == nullptr) {
    return 0;
  }
  v6 = *v5;
  if (v6 == nullptr) {
    return 0;
  }
  if ((GameData_224adb8 & v3) == 0) {
    while (1) {
      v9 = v6[1];
      if (v9 == (__int64*)v2) {
        if (*((unsigned __int8*)v6 + 16) == (_DWORD)v2) {
          goto LABEL_27;
        }
      }
      else if (((unsigned __int64)v9 & v3) != v4) {
        return 0;
      }
      v6 = (__int64**)*v6;
      v8 = 0;
      if (v6 == nullptr) {
        return v8;
      }
    }
  }
  while (1) {
    v7 = (unsigned __int64)v6[1];
    if (v7 == v2) {
      break;
    }
    if (v7 >= GameData_224adb8) {
      v7 %= (unsigned __int64)GameData_224adb8;
    }
    if (v7 != v4) {
      return 0;
    }
  LABEL_15:
    v6 = (__int64**)*v6;
    if (v6 == nullptr) {
      return 0;
    }
  }
  if (*((unsigned __int8*)v6 + 16) != (_DWORD)v2) {
    goto LABEL_15;
  }

LABEL_27:
  v11 = (__int64*)v6[3][3];
  v8 = *v11;
  do {
    v12 = v11;
    v11 = (__int64*)v11[7];
  } while (v11 != nullptr);
  while (1) {
    v13 = v12[1];
    v14 = v12[2];
    if (v14 != v13) {
      break;
    }
  LABEL_30:
    v8 = *v12;
    v12 = (__int64*)v12[8];
    if (v12 == nullptr) {
      return v8;
    }
  }
  while (1) {
    if (*(_QWORD*)v13 != 0) {
      v15 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v16 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v13);
        if (v16 != 0) {
          v17 = *(__int64 (**)(_QWORD))(v16 + 72);
          v18 = *(_QWORD*)(v16 + 80);
          v19 = (_QWORD*)(v16 + (v18 >> 1));
          if ((v18 & 1) != 0) {
            v17 = *(__int64 (**)(_QWORD))((char*)v17 + *v19);
          }
          LOBYTE(a1) = v17(v19);
        }
        else {
          LOBYTE(a1) = 1;
        }
      }
      if (*(_BYTE*)(v13 + 16) != ((v15 == 0) | a1 & 1)) {
        return v8;
      }
    }
    v13 += 24;
    if (v13 == v14) {
      goto LABEL_30;
    }
  }
}

#pragma GCC visibility pop
