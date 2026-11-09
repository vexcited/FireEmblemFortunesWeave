#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60dfc0(_QWORD);
__int64 GameRoutine_60e360(_QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a94a43;
extern __int64 (*GameData_1f8e180[])();
extern __int64 (*GameData_1f8e1b0[])();
extern __int64 (*GameData_1f8e200[])();
extern __int64 GameData_21a5458;
extern __int64 GameData_21a5460;
extern __int64 GameData_21a5470;
extern __int64 GameData_21a5480;
extern int GameData_21a5488;
__int64 GroundAttributeFile_Destructor(_QWORD* a1);
__int64 GroundAttributeFile_60b080(int a1);
__int64 GroundAttributeFile_60b220(__int64 a1);

__int64 GroundAttributeFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *a1 = GameData_1f8e180;
  a1[1] = GameData_1f8e1b0;
  v2 = a1 + 1;
  GameRoutine_60e360(a1 + 1);
  result = GameRoutine_60dfc0(v2);
  *a1 = GameData_1f8e200;
  if ((_QWORD*)GameData_21a5480 == a1) {
    GameData_21a5480 = 0;
    GameData_21a5488 = 0;
  }
  return result;
}

__int64 GroundAttributeFile_60b080(int a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;

  if (GameData_21a5460 != 0 && GameData_21a5470 != 0) {
    v2 = a1 | 0xFFu;
    v3 = GameData_21a5460 - 1;
    if ((GameData_21a5460 & (GameData_21a5460 - 1)) != 0) {
      v4 = a1 | 0xFFu;
      if (GameData_21a5460 <= v2) {
        v4 = (unsigned int)v2 % (unsigned int)GameData_21a5460;
      }
    }
    else {
      v4 = ((_DWORD)GameData_21a5460 - 1) & (unsigned int)v2;
    }
    v5 = *(__int64***)(GameData_21a5458 + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((GameData_21a5460 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == v2) {
              if (*((_DWORD*)v6 + 4) == (_DWORD)v2) {
                return v6[3];
              }
            }
            else if ((v8 & v3) != v4) {
              goto LABEL_24;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == v2) {
            if (*((_DWORD*)v6 + 4) == (_DWORD)v2) {
              return v6[3];
            }
          }
          else {
            if (v7 >= GameData_21a5460) {
              v7 %= (unsigned __int64)GameData_21a5460;
            }
            if (v7 != v4) {
              break;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }

LABEL_24:
  v9 = game_HashString(&GameData_1a94a43);
  v10 = *(_QWORD*)(GameData_21a5480 + 96);
  if ((v10 & (v10 - 1)) != 0) {
    v11 = v9;
    if (v9 >= v10) {
      v11 = v9 % v10;
    }
    v6 = *(__int64**)(*(_QWORD*)(GameData_21a5480 + 88) + 8 * v11);
    do {
      do {
        v6 = (__int64*)*v6;
      } while (v6[1] != v9);
    } while (v6[2] != v9);
  }
  else {
    v6 = *(__int64**)(*(_QWORD*)(GameData_21a5480 + 88) + 8 * ((v10 - 1) & v9));
    do {
      do {
        v6 = (__int64*)*v6;
      } while (v6[1] != v9);
    } while (v6[2] != v9);
  }
  return v6[3];
}

__int64 GroundAttributeFile_60b220(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;

  v1 = game_HashString(a1);
  if (v1 == 0) {
    goto LABEL_27;
  }
  v2 = *(_QWORD*)(GameData_21a5480 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21a5480 + 112) == 0) {
    goto LABEL_27;
  }
  v4 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v5 = v1;
    if (v1 >= v2) {
      v5 = v1 % v2;
    }
  }
  else {
    v5 = v4 & v1;
  }
  v6 = *(_QWORD**)(*(_QWORD*)(GameData_21a5480 + 88) + 8 * v5);
  if (v6 == nullptr || (v7 = (_QWORD*)*v6) == nullptr) {
  LABEL_27:
    v11 = game_HashString(&GameData_1a94a43);
    v12 = *(_QWORD*)(GameData_21a5480 + 96);
    if ((v12 & (v12 - 1)) != 0) {
      v13 = v11;
      if (v11 >= v12) {
        v13 = v11 % v12;
      }
      v14 = *(_QWORD**)(*(_QWORD*)(GameData_21a5480 + 88) + 8 * v13);
      do {
        do {
          v14 = (_QWORD*)*v14;
        } while (v14[1] != v11);
      } while (v14[2] != v11);
    }
    else {
      v14 = *(_QWORD**)(*(_QWORD*)(GameData_21a5480 + 88) +
                        8 * ((v12 - 1) & v11));
      do {
        do {
          v14 = (_QWORD*)*v14;
        } while (v14[1] != v11);
      } while (v14[2] != v11);
    }
    v10 = (unsigned __int8*)v14[3];
    return (v10[32] << 24) | (v10[33] << 16) | (v10[34] << 8) | 0xFFu;
  }
  if ((v2 & v4) == 0) {
    while (1) {
      v9 = v7[1];
      if (v9 == v1) {
        if (v7[2] == v1) {
          goto LABEL_26;
        }
      }
      else if ((v9 & v4) != v5) {
        goto LABEL_27;
      }
      v7 = (_QWORD*)*v7;
      if (v7 == nullptr) {
        goto LABEL_27;
      }
    }
  }
  while (1) {
    v8 = v7[1];
    if (v8 == v1) {
      break;
    }
    if (v8 >= v2) {
      v8 %= v2;
    }
    if (v8 != v5) {
      goto LABEL_27;
    }
  LABEL_15:
    v7 = (_QWORD*)*v7;
    if (v7 == nullptr) {
      goto LABEL_27;
    }
  }
  if (v7[2] != v1) {
    goto LABEL_15;
  }

LABEL_26:
  v10 = (unsigned __int8*)v7[3];
  if (v10 == nullptr) {
    goto LABEL_27;
  }
  return (v10[32] << 24) | (v10[33] << 16) | (v10[34] << 8) | 0xFFu;
}

#pragma GCC visibility pop
