#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
_QWORD* TutorialFile_97ffe0(__int64 a1);
_QWORD* TutorialFile_980100(__int64 a1);

_QWORD* TutorialFile_97ffe0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;

  if (*(_BYTE*)(a1 + 32) != 1) {
    return nullptr;
  }
  v1 = game_HashString(*(_QWORD*)(a1 + 40));
  if (v1 == 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    return nullptr;
  }
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = v1;
    if (v1 >= v2) {
      v7 = v1 % v2;
    }
  }
  else {
    v7 = v6 & v1;
  }
  v4 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v7);
  if (v4 != nullptr) {
    v8 = (_QWORD*)*v4;
    if (*v4 != 0) {
      if ((v2 & v6) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v1) {
            if (v8[2] == v1) {
              return (_QWORD*)v8[3];
            }
          }
          else if ((v10 & v6) != v7) {
            return nullptr;
          }
          v8 = (_QWORD*)*v8;
          v4 = nullptr;
          if (v8 == nullptr) {
            return v4;
          }
        }
      }
      while (1) {
        v9 = v8[1];
        if (v9 == v1) {
          if (v8[2] == v1) {
            return (_QWORD*)v8[3];
          }
        }
        else {
          if (v9 >= v2) {
            v9 %= v2;
          }
          if (v9 != v7) {
            return nullptr;
          }
        }
        v8 = (_QWORD*)*v8;
        v4 = nullptr;
        if (v8 == nullptr) {
          return v4;
        }
      }
    }
    return nullptr;
  }
  return v4;
}

_QWORD* TutorialFile_980100(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;

  if ((*(_BYTE*)(a1 + 32) & 0xFE) != 2) {
    return nullptr;
  }
  v1 = game_HashString(*(_QWORD*)(a1 + 40));
  if (v1 == 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(GameData_21c99b0 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c99b0 + 112) == 0) {
    return nullptr;
  }
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = v1;
    if (v1 >= v2) {
      v7 = v1 % v2;
    }
  }
  else {
    v7 = v6 & v1;
  }
  v4 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v7);
  if (v4 != nullptr) {
    v8 = (_QWORD*)*v4;
    if (*v4 != 0) {
      if ((v2 & v6) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v1) {
            if (v8[2] == v1) {
              return (_QWORD*)v8[3];
            }
          }
          else if ((v10 & v6) != v7) {
            return nullptr;
          }
          v8 = (_QWORD*)*v8;
          v4 = nullptr;
          if (v8 == nullptr) {
            return v4;
          }
        }
      }
      while (1) {
        v9 = v8[1];
        if (v9 == v1) {
          if (v8[2] == v1) {
            return (_QWORD*)v8[3];
          }
        }
        else {
          if (v9 >= v2) {
            v9 %= v2;
          }
          if (v9 != v7) {
            return nullptr;
          }
        }
        v8 = (_QWORD*)*v8;
        v4 = nullptr;
        if (v8 == nullptr) {
          return v4;
        }
      }
    }
    return nullptr;
  }
  return v4;
}

#pragma GCC visibility pop
