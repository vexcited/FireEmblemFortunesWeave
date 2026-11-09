#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 GameRoutine_da9c00(_QWORD, _QWORD);
__int64 GameRoutine_da9d60(_QWORD, _QWORD);
__int64 GameRoutine_da9ec0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterInputPlayer_vtable[])();
_QWORD* CharacterInputPlayer_Destructor(_QWORD* result);
__int64 CharacterInputPlayer_da9a80(__int64 result, __int64 a2);
_QWORD* CharacterInputPlayer_da9c00(_QWORD* result, __int64 a2);
_QWORD* CharacterInputPlayer_da9d60(_QWORD* result, __int64 a2);
_QWORD* CharacterInputPlayer_da9ec0(_QWORD* result, __int64 a2);

_QWORD* CharacterInputPlayer_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v5[16];

  v1 = result;
  *result = game_zview_CharacterInputPlayer_vtable;
  v2 = result[1];
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    GameRoutine_da9c00(*(_QWORD*)(v2 + 32), result[4]);
    GameRoutine_da9d60(v3, v1[5]);
    GameRoutine_da9ec0(v3, v1[6]);
    memset(v5, 0, sizeof(v5));
    result = (_QWORD*)GameRoutine_da9a80(v3, v5);
  }
  v4 = v1[3];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 CharacterInputPlayer_da9a80(__int64 result, __int64 a2)
{
  __int128 v2;
  __int64 v3;

  *(_DWORD*)(result + 32) = *(_DWORD*)a2;
  *(_DWORD*)(result + 36) = *(_DWORD*)(a2 + 4);
  *(_QWORD*)(result + 40) = *(_QWORD*)(a2 + 8);
  if (*(unsigned __int8*)(result + 112) == *(unsigned __int8*)(a2 + 80)) {
    if (*(_BYTE*)(result + 112) != 0) {
      *(_DWORD*)(result + 48) = *(_DWORD*)(a2 + 16);
      *(_DWORD*)(result + 52) = *(_DWORD*)(a2 + 20);
      *(_DWORD*)(result + 56) = *(_DWORD*)(a2 + 24);
      *(_QWORD*)(result + 64) = *(_QWORD*)(a2 + 32);
      if (*(unsigned __int8*)(result + 96) == *(unsigned __int8*)(a2 + 64)) {
        if (*(_BYTE*)(result + 96) != 0) {
          *(_DWORD*)(result + 80) = *(_DWORD*)(a2 + 48);
          *(_DWORD*)(result + 84) = *(_DWORD*)(a2 + 52);
          v2 = *(_OWORD*)(result + 80);
          *((_QWORD*)&v2 + 1) = *(unsigned int*)(a2 + 56);
          *(_OWORD*)(result + 80) = v2;
        }
      }
      else if (*(_BYTE*)(result + 96) != 0) {
        *(_BYTE*)(result + 96) = 0;
      }
      else {
        *(_QWORD*)(result + 88) = *(_QWORD*)(a2 + 56);
        *(_QWORD*)(result + 80) = *(_QWORD*)(a2 + 48);
        *(_BYTE*)(result + 96) = 1;
      }
    }
  }
  else if (*(_BYTE*)(result + 112) != 0) {
    *(_BYTE*)(result + 112) = 0;
  }
  else {
    *(_QWORD*)(result + 56) = *(_QWORD*)(a2 + 24);
    v3 = *(_QWORD*)(a2 + 32);
    *(_QWORD*)(result + 48) = *(_QWORD*)(a2 + 16);
    *(_BYTE*)(result + 80) = 0;
    *(_QWORD*)(result + 64) = v3;
    *(_BYTE*)(result + 96) = 0;
    if (*(_BYTE*)(a2 + 64) == 1) {
      *(_QWORD*)(result + 88) = *(_QWORD*)(a2 + 56);
      *(_QWORD*)(result + 80) = *(_QWORD*)(a2 + 48);
      *(_BYTE*)(result + 96) = 1;
    }
    *(_BYTE*)(result + 112) = 1;
  }
  if (*(unsigned __int8*)(result + 144) == *(unsigned __int8*)(a2 + 112)) {
    if (*(_BYTE*)(result + 144) != 0) {
      *(_DWORD*)(result + 128) = *(_DWORD*)(a2 + 96);
      *(_DWORD*)(result + 132) = *(_DWORD*)(a2 + 100);
      *(_QWORD*)(result + 136) = *(_QWORD*)(a2 + 104);
    }
  }
  else if (*(_BYTE*)(result + 144) != 0) {
    *(_BYTE*)(result + 144) = 0;
  }
  else {
    *(_QWORD*)(result + 136) = *(_QWORD*)(a2 + 104);
    *(_QWORD*)(result + 128) = *(_QWORD*)(a2 + 96);
    *(_BYTE*)(result + 144) = 1;
  }
  return result;
}

_QWORD* CharacterInputPlayer_da9c00(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result[28];
  v3 = (_QWORD*)result[29];
  v4 = result;
  if (v2 != v3) {
    while (*v2 != a2) {
      v2 += 8;
      if (v2 == v3) {
        return result;
      }
    }
  }
  if (v2 != v3) {
    if (v2 + 8 == v3) {
      if (v2 != v3) {
        goto LABEL_26;
      }
    LABEL_21:
      v4[29] = v2;
      return result;
    }
    while (1) {
      v5 = v2[8];
      v6 = v2;
      v7 = (_QWORD*)v2[6];
      v2[6] = 0;
      *v2 = v5;
      v8 = v2 + 2;
      if (v8 == v7) {
        break;
      }
      if (v7 != nullptr) {
        v9 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v7 + v9))((__int64)v7);
      }
      result = (_QWORD*)v6[14];
      if (result != nullptr) {
        if (v6 + 10 == result) {
          v6[6] = v8;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8);
        }
        else {
          v6[6] = result;
          v6[14] = 0;
        }
      }
      else {
        v6[6] = 0;
      }
      v2 = v6 + 8;
      if (v6 + 16 == v3) {
        v3 = (_QWORD*)v4[29];
        if (v2 == v3) {
          goto LABEL_21;
        }
      LABEL_26:
        while (2) {
          result = (_QWORD*)*(v3 - 2);
          if (v3 - 6 != result) {
            if (result != nullptr) {
              v10 = 40;
            LABEL_24:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
                  (__int64)result);
            }
            v3 -= 8;
            if (v3 == v2) {
              goto LABEL_21;
            }
            continue;
          }
          break;
        }
        v10 = 32;
        goto LABEL_24;
      }
    }
    v9 = 32;
    goto LABEL_15;
  }
  return result;
}

_QWORD* CharacterInputPlayer_da9d60(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result[31];
  v3 = (_QWORD*)result[32];
  v4 = result;
  if (v2 != v3) {
    while (*v2 != a2) {
      v2 += 8;
      if (v2 == v3) {
        return result;
      }
    }
  }
  if (v2 != v3) {
    if (v2 + 8 == v3) {
      if (v2 != v3) {
        goto LABEL_26;
      }
    LABEL_21:
      v4[32] = v2;
      return result;
    }
    while (1) {
      v5 = v2[8];
      v6 = v2;
      v7 = (_QWORD*)v2[6];
      v2[6] = 0;
      *v2 = v5;
      v8 = v2 + 2;
      if (v8 == v7) {
        break;
      }
      if (v7 != nullptr) {
        v9 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v7 + v9))((__int64)v7);
      }
      result = (_QWORD*)v6[14];
      if (result != nullptr) {
        if (v6 + 10 == result) {
          v6[6] = v8;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8);
        }
        else {
          v6[6] = result;
          v6[14] = 0;
        }
      }
      else {
        v6[6] = 0;
      }
      v2 = v6 + 8;
      if (v6 + 16 == v3) {
        v3 = (_QWORD*)v4[32];
        if (v2 == v3) {
          goto LABEL_21;
        }
      LABEL_26:
        while (2) {
          result = (_QWORD*)*(v3 - 2);
          if (v3 - 6 != result) {
            if (result != nullptr) {
              v10 = 40;
            LABEL_24:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
                  (__int64)result);
            }
            v3 -= 8;
            if (v3 == v2) {
              goto LABEL_21;
            }
            continue;
          }
          break;
        }
        v10 = 32;
        goto LABEL_24;
      }
    }
    v9 = 32;
    goto LABEL_15;
  }
  return result;
}

_QWORD* CharacterInputPlayer_da9ec0(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result[34];
  v3 = (_QWORD*)result[35];
  v4 = result;
  if (v2 != v3) {
    while (*v2 != a2) {
      v2 += 8;
      if (v2 == v3) {
        return result;
      }
    }
  }
  if (v2 != v3) {
    if (v2 + 8 == v3) {
      if (v2 != v3) {
        goto LABEL_26;
      }
    LABEL_21:
      v4[35] = v2;
      return result;
    }
    while (1) {
      v5 = v2[8];
      v6 = v2;
      v7 = (_QWORD*)v2[6];
      v2[6] = 0;
      *v2 = v5;
      v8 = v2 + 2;
      if (v8 == v7) {
        break;
      }
      if (v7 != nullptr) {
        v9 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v7 + v9))((__int64)v7);
      }
      result = (_QWORD*)v6[14];
      if (result != nullptr) {
        if (v6 + 10 == result) {
          v6[6] = v8;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8);
        }
        else {
          v6[6] = result;
          v6[14] = 0;
        }
      }
      else {
        v6[6] = 0;
      }
      v2 = v6 + 8;
      if (v6 + 16 == v3) {
        v3 = (_QWORD*)v4[35];
        if (v2 == v3) {
          goto LABEL_21;
        }
      LABEL_26:
        while (2) {
          result = (_QWORD*)*(v3 - 2);
          if (v3 - 6 != result) {
            if (result != nullptr) {
              v10 = 40;
            LABEL_24:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
                  (__int64)result);
            }
            v3 -= 8;
            if (v3 == v2) {
              goto LABEL_21;
            }
            continue;
          }
          break;
        }
        v10 = 32;
        goto LABEL_24;
      }
    }
    v9 = 32;
    goto LABEL_15;
  }
  return result;
}

#pragma GCC visibility pop
