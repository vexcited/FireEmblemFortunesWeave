#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_281e60(_QWORD, _QWORD);
__int64 GameRoutine_281e70(_QWORD, _QWORD);
__int64 GameRoutine_281e80(_QWORD, _QWORD);
extern __int64* GameData_2135260[3];
_QWORD* ExternalSoundPlayer_Destructor(_QWORD* result);
__int64 ExternalSoundPlayer_282bc0(__int64 result, __int64 a2);
__int64 ExternalSoundPlayer_282c70(__int64 a1, __int64 a2);
__int64 ExternalSoundPlayer_282cc0(__int64 a1, __int64 a2);
__int64 ExternalSoundPlayer_282e40(__int64 result, int a2);
bool ExternalSoundPlayer_Unknown2(__int64 a1, int a2);

_QWORD* ExternalSoundPlayer_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;

  v1 = result + 1;
  *result = GameData_2135260[0] + 2;
  v2 = (_QWORD*)result[2];
  if (v2 != result + 1) {
    v3 = result;
    do {
      v4 = (_QWORD*)v2[1];
      result = (_QWORD*)GameRoutine_281e80(v2 - 66, v3);
      v2 = v4;
    } while (v4 != v1);
  }
  return result;
}

__int64 ExternalSoundPlayer_282bc0(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  v2 = *(__int64**)(result + 16);
  v3 = result + 8;
  if (v2 != (__int64*)(result + 8)) {
    v5 = result;
    do {
      v6 = (__int64*)v2[1];
      if (*(v2 - 61) == a2) {
        GameRoutine_281e60(v2 - 66, a2);
        v7 = (__int64*)v2[1];
        v8 = *v7;
        *(_QWORD*)(*v2 + 8) = v7;
        *v7 = *v2;
        *(_QWORD*)(v8 + 8) = v2;
        *v2 = v8;
        result = GameRoutine_281e80(v2 - 66, v5);
      }
      v2 = v6;
    } while (v6 != (__int64*)v3);
  }
  return result;
}

__int64 ExternalSoundPlayer_282c70(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64 v3;

  if (a2 + 528 != a1 + 8) {
    v2 = *(__int64**)(a2 + 536);
    v3 = *v2;
    *(_QWORD*)(*(_QWORD*)(a2 + 528) + 8LL) = v2;
    *v2 = *(_QWORD*)(a2 + 528);
    *(_QWORD*)(v3 + 8) = a2 + 528;
    *(_QWORD*)(a2 + 528) = v3;
  }
  return GameRoutine_281e80(a2, a1);
}

__int64 ExternalSoundPlayer_282cc0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 result;
  unsigned __int8* v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;

  if (*(_DWORD*)(a1 + 24) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 16);
  v3 = a1 + 8;
  if (v2 == a1 + 8) {
  LABEL_20:
    if (*(int*)(a1 + 24) <= 0) {
      return 0;
    }
  }
  else {
    v6 = *(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256);
    v7 = v6 & ~(v6 >> 31);
    while (1) {
      v8 = 0;
      v9 = v2;
      do {
        v9 = *(_QWORD*)(v9 + 8);
        ++v8;
      } while (v9 != v3);
      if (v8 < *(_DWORD*)(a1 + 24)) {
        break;
      }
      v10 = 128;
      result = 0;
      do {
        v12 = (unsigned __int8*)(v2 - 272);
        v13 = (_DWORD*)(v2 - 404);
        v14 = v2 - 528;
        v2 = *(_QWORD*)(v2 + 8);
        v15 = (*v13 + *v12) & ~((*v13 + *v12) >> 31);
        if (v15 >= 127) {
          v15 = 127;
        }
        if (v10 > v15) {
          result = v14;
        }
        if (v10 >= v15) {
          v10 = v15;
        }
      } while (v2 != v3);
      if (result == 0) {
        return result;
      }
      v16 = (*(_DWORD*)(result + 124) + *(unsigned __int8*)(result + 256)) &
            ~((*(_DWORD*)(result + 124) + *(unsigned __int8*)(result + 256)) >>
              31);
      if (v16 >= 127) {
        v16 = 127;
      }
      if (v7 < v16) {
        return 0;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + 32LL))(result);
      v2 = *(_QWORD*)(a1 + 16);
      if (v2 == v3) {
        goto LABEL_20;
      }
    }
  }
  v17 = *(_QWORD*)(a2 + 528);
  *(_QWORD*)(a2 + 528) = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v17 + 8) = v3;
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) = a2 + 528;
  *(_QWORD*)(a1 + 8) = v17;
  GameRoutine_281e70(a2, a1);
  return 1;
}

__int64 ExternalSoundPlayer_282e40(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int8* v9;
  _DWORD* v10;
  __int64 v11;
  int v12;

  v2 = result + 8;
  v3 = result;
  *(_DWORD*)(result + 24) = a2;
  v4 = *(_QWORD*)(result + 16);
  if (v4 == result + 8) {
    goto LABEL_6;
  }
  while (1) {
    v5 = 0;
    v6 = v4;
    do {
      v6 = *(_QWORD*)(v6 + 8);
      ++v5;
    } while (v6 != v2);
    if (v5 <= *(_DWORD*)(v3 + 24)) {
      break;
    }
    while (1) {
      v7 = 128;
      v8 = 0;
      do {
        v9 = (unsigned __int8*)(v4 - 272);
        v10 = (_DWORD*)(v4 - 404);
        v11 = v4 - 528;
        v4 = *(_QWORD*)(v4 + 8);
        v12 = (*v10 + *v9) & ~((*v10 + *v9) >> 31);
        if (v12 >= 127) {
          v12 = 127;
        }
        if (v7 > v12) {
          v8 = v11;
        }
        if (v7 >= v12) {
          v7 = v12;
        }
      } while (v4 != v2);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      v4 = *(_QWORD*)(v3 + 16);
      if (v4 != v2) {
        break;
      }
    LABEL_6:
      if (*(int*)(v3 + 24) >= 0) {
        return result;
      }
    }
  }
  return result;
}

bool ExternalSoundPlayer_Unknown2(__int64 a1, int a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int8* v9;
  _DWORD* v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;

  v2 = *(_DWORD*)(a1 + 24);
  if (v2 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(a1 + 16);
  v4 = a1 + 8;
  if (v3 == a1 + 8) {
    return v2 > 0;
  }
  v5 = 0;
  v6 = *(_QWORD*)(a1 + 16);
  do {
    v6 = *(_QWORD*)(v6 + 8);
    ++v5;
  } while (v6 != v4);
  if (v5 >= v2) {
    v7 = 128;
    v8 = 0;
    do {
      v9 = (unsigned __int8*)(v3 - 272);
      v10 = (_DWORD*)(v3 - 404);
      v11 = v3 - 528;
      v3 = *(_QWORD*)(v3 + 8);
      v12 = (*v10 + *v9) & ~((*v10 + *v9) >> 31);
      if (v12 >= 127) {
        v12 = 127;
      }
      if (v7 > v12) {
        v8 = v11;
      }
      if (v7 >= v12) {
        v7 = v12;
      }
    } while (v3 != v4);
    if (v8 == 0) {
      return false;
    }
    v13 = *(_DWORD*)(v8 + 124) + *(unsigned __int8*)(v8 + 256);
    v14 = v13 & ~(v13 >> 31);
    if (v14 >= 127) {
      v14 = 127;
    }
    if (a2 < v14) {
      return false;
    }
  }
  return true;
}

#pragma GCC visibility pop
