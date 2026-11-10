#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int* GameData_212deb0;

extern _UNKNOWN* GameData_212deb8;

extern __int64 GameData_2131da0[6];

__int64 GameRoutine_1084940(_QWORD, _QWORD, float);

__int64 GameRoutine_155ec10(_QWORD, _QWORD);

__int64 GameRoutine_17c4f00(_QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD, double);

float GameRoutine_618640(_QWORD, float, float, float, float);

__int64 GameRoutine_70df40(_QWORD, _QWORD);

__int64 GameHr_179af60(__int64 a1, char a2, char a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int8 explicit;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  int v16;
  double v17;
  char v18;
  __int64 v19;

  v3 = 160;
  if ((a3 & 1) != 0) {
    v3 = 152;
  }
  v4 = *(_QWORD*)(a1 + v3);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire);
  v6 = GameData_212deb0;
  if ((explicit & 1) == 0) {
    v19 = a1;
    v18 = a2;
    v16 = GameRoutine_1a09fd0(GameData_212deb8);
    v6 = GameData_212deb0;
    a2 = v18;
    a1 = v19;
    if (v16 != 0) {
      *GameData_212deb0 = GameRoutine_540(0, "CharacterBuilder", 16, v17);
      GameRoutine_1a09fe0(GameData_212deb8);
      v6 = GameData_212deb0;
      a2 = v18;
      a1 = v19;
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(v4 + 512);
  v9 = v8;
  while (v9 != *(_QWORD*)(v4 + 504)) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    v8 -= 16;
    if (v10 == v7) {
      if (*(_QWORD*)(v4 + 512) != v8) {
        v11 = *(_QWORD*)(v8 + 8);
        goto LABEL_10;
      }
      break;
    }
  }
  v11 = 0;
LABEL_10:
  v12 = 0.0;
  if ((a2 & 1) != 0) {
    v13 = 1.0;
  }
  else {
    v13 = 0.0;
  }
  if ((a2 & 1) == 0) {
    v12 = 1.0;
  }
  v14 = GameRoutine_618640(4, v13, v12, *(float*)(a1 + 184), 100.0);
  return GameRoutine_1084940(v11, 0, v14);
}

__int64 GameHr_17ba5e0(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;

  result = GameRoutine_70df40(a1 + 154, a1 + 166);
  if ((int)result >= *(_DWORD*)(a1 + 208) + *(_DWORD*)(a1 + 204)) {
    v3 = 2;
  }
  else {
    v3 = 3;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 != 0) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == v3) {
          *(_QWORD*)(a1 + 16) = v4;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64;
    }
  }
  return result;
}

__int64 GameHr_17bbf00()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  bool v7;
  int v8;

  v0 = GameData_2131da0[0];
  result = GameRoutine_155ec10(*(_QWORD*)GameData_2131da0[0] + 168LL, 102);
  v2 = *(_QWORD*)v0;
  v4 = *(_QWORD*)(*(_QWORD*)v0 + 8LL);
  v3 = *(unsigned __int8**)(*(_QWORD*)v0 + 16LL);
  if (v4 <= (unsigned __int64)v3) {
    v5 = *(_QWORD*)(*(_QWORD*)v0 + 16LL);
    while (*(_BYTE*)v5 != 2) {
      v5 -= 64LL;
      if (v4 > v5) {
        return result;
      }
    }
    if (*(_DWORD*)(v5 + 32) == 2) {
      if (v3 != nullptr) {
        v6 = *v3;
        v7 = v6 > 0x10;
        v8 = (1 << v6) & 0x1CE00;
        if (!v7 && v8 != 0) {
          *(_WORD*)(v2 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v2 + 136) |= 8u;
    }
  }
  return result;
}

_QWORD* GameHr_17c4d00(_QWORD* result, _QWORD* a2, __int64 a3,
                       unsigned __int64 a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v4 = result[1];
  v5 = result[2];
  v9 = result;
  if (v5 == v4) {
    v10 = 0;
  }
  else {
    v10 = 2 * (v5 - v4) - 1;
  }
  v11 = result[5];
  v12 = v11 + result[4];
  v13 = v10 - v12;
  if (a4 > v13) {
    result = (_QWORD*)GameRoutine_17c4f00(result, a4 - v13);
    v11 = v9[5];
    v4 = v9[1];
    v5 = v9[2];
    v12 = v9[4] + v11;
  }
  v14 = (_QWORD*)(v4 + 8 * (v12 >> 4));
  if (v5 != v4) {
    v15 = *v14 + 244 * (v12 & 0xF);
    v16 = v15;
    if (a4 != 0) {
      goto LABEL_8;
    }
  LABEL_12:
    v18 = (_QWORD*)(v4 + 8 * (v12 >> 4));
    if (v15 == v16) {
      return result;
    }
    goto LABEL_15;
  }
  v15 = 0;
  v16 = 0;
  if (a4 == 0) {
    goto LABEL_12;
  }
LABEL_8:
  v17 = a4 + 0x4FBCDA3AC10C9715LL * ((v16 - *v14) >> 2);
  if (v17 < 1) {
    v19 = 15 - v17;
    v18 = &v14[-(v19 >> 4)];
    v16 = *v18 + 244LL * (~(_BYTE)v19 & 0xF);
    if (v15 == v16) {
      return result;
    }
  }
  else {
    v18 = &v14[(unsigned __int64)v17 >> 4];
    v16 = *v18 + 244 * (v17 & 0xF);
    if (v15 == v16) {
      return result;
    }
  }
  do {
  LABEL_15:
    v20 = v16;
    if (v14 != v18) {
      v20 = *v14 + 3904LL;
    }
    if (v15 == v20) {
      v20 = v15;
    }
    else {
      v21 = v15;
      do {
        result = (_QWORD*)GameRoutine_1a0b950(v21, a3, 244);
        a3 += 244;
        if (a3 - *a2 == 3904) {
          v22 = a2[1];
          ++a2;
          a3 = v22;
        }
        v21 += 244;
      } while (v21 != v20);
      v11 = v9[5];
    }
    v11 += 0x4FBCDA3AC10C9715LL * ((v20 - v15) >> 2);
    v9[5] = v11;
    if (v14 == v18) {
      break;
    }
    v23 = v14[1];
    ++v14;
    v15 = v23;
  } while (v23 != v16);
  return result;
}

#pragma GCC visibility pop
