#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5e53f0(_QWORD, _QWORD, float);
__int64 MaterialAnimObj_5dfe60(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 BoneVisibilityAnimObj_5e0360(__int64 a1, __int64 a2);
__int64 BoneVisibilityAnimObj_Unknown2(__int64 a1);
__int64 BoneVisibilityAnimObj_Unknown5(__int64 a1, _QWORD* a2);
__int64 BoneVisibilityAnimObj_Unknown3(__int64 result);
__int64 BoneVisibilityAnimObj_Unknown7(__int64 result, __int64 a2);
__int64
MaterialAnimObj_5dfe60_alt1(__int64 result,
                            unsigned __int16) __asm__("MaterialAnimObj_5dfe60");
__int64 MaterialAnimObj_5dff40(__int64 result, __int64);
__int64 BoneVisibilityAnimObj_Unknown6(__int64 a1, __int64 a2);

__int64 BoneVisibilityAnimObj_5e0360(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  _DWORD* v5;
  unsigned __int16* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  _DWORD* v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int16* v18;
  unsigned __int64 v19;
  int v20;
  bool v21;
  __int64 v22;
  __int64 v23;

  v2 = *(_QWORD*)(a2 + 8);
  MaterialAnimObj_5dfe60(a1 + 88, *(unsigned __int16*)(a2 + 56));
  v4 = *(unsigned __int16*)(a1 + 100);
  if (*(_WORD*)(a1 + 100) != 0) {
    v5 = (_DWORD*)(v2 + 8);
    v6 = (unsigned __int16*)(v2 + 12);
    v7 = v2 + 24;
    v8 = 0;
    v9 = 0;
    v10 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 56LL);
    do {
      while (1) {
        v11 = *(_QWORD*)(v10 + 8 * v8) + 2LL;
        v12 = strlen(v11);
        v13 = *v6;
        v14 = &v5[4 * v13];
        v15 = *v14;
        if (*v5 < *v14) {
          do {
            v17 = (__int64)v15 >> 3;
            if (v12 > v17) {
              v16 = (*(unsigned __int8*)(v11 + v12 + ~v17) >> (v15 & 7)) & 1;
            }
            else {
              v16 = 0;
            }
            v13 = v6[8 * v13 + v16];
            v21 = v15 < v5[4 * v13];
            v15 = v5[4 * v13];
          } while (v21);
          v14 = &v5[4 * v13];
        }
        v18 = *((unsigned __int16**)v14 + 1);
        if (v12 == *v18 && (unsigned int)memcmp(v18 + 1, v11) == 0) {
          v19 = ((unsigned __int64)v14 - v7) >> 4;
          if ((v19 & 0x80000000) == 0) {
            break;
          }
        }
        ++v8;
        v9 |= 0x10000u;
        if (v8 == v4) {
          goto LABEL_20;
        }
      }
      if ((*(_WORD*)(a1 + 114) & 1) != 0 &&
          *(__int16*)(*(_QWORD*)(a2 + 48) +
                      2 * ((((unsigned __int64)v14 - v7) >> 4) & 0x7FFFFFFF)) >=
              0) {
        LODWORD(v19) =
            *(__int16*)(*(_QWORD*)(a2 + 48) +
                        2 * ((((unsigned __int64)v14 - v7) >> 4) & 0x7FFFFFFF));
      }
      *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v8) &= 0x3FFF8000u;
      *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v8) |= v19 & 0x7FFF;
      *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4LL * (int)v19) &= 0xC0007FFF;
      *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4LL * (int)v19) |= (v8++ & 0x7FFF) << 15;
      v9 |= 1u;
    } while (v8 != v4);
  }
  else {
    v9 = 0;
  }
LABEL_20:
  *(_WORD*)(a1 + 96) |= 1u;
  v20 = *(_DWORD*)(a1 + 60);
  v21 = v20 >= 1 && v20 <= *(_DWORD*)(a1 + 56);
  *(_DWORD*)(a1 + 64) = 2139095040;
  if (v21) {
    v22 = 0;
    v23 = 0;
    do {
      ++v23;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v22) = 2139095040;
      v22 += 12;
    } while (v23 < *(int*)(a1 + 60));
  }
  return v9;
}

__int64 BoneVisibilityAnimObj_Unknown2(__int64 a1)
{
  return memcpy(*(_QWORD*)(a1 + 72), *(_QWORD*)(*(_QWORD*)(a1 + 104) + 48LL),
                (((unsigned int)*(unsigned __int16*)(a1 + 100) + 31) >> 3) &
                    0x3FFCLL);
}

__int64 BoneVisibilityAnimObj_Unknown5(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 32LL))(a1, *a2);
}

__int64 BoneVisibilityAnimObj_Unknown6(__int64 a1, __int64 a2)
{
  int v3;
  int v4;
  bool v5;
  bool v6;
  bool v7;
  __int64 v8;
  __int64 v9;

  MaterialAnimObj_5dfe60_alt1(a1 + 88, *(_WORD*)(*(_QWORD*)(a2 + 24) + 56LL));
  MaterialAnimObj_5dff40(a1 + 88, *(_QWORD*)(*(_QWORD*)(a1 + 104) + 32LL));
  *(_WORD*)(a1 + 96) |= 1u;
  v4 = *(_DWORD*)(a1 + 56);
  v3 = *(_DWORD*)(a1 + 60);
  if (v3 >= 1) {
    v7 = __OFSUB__(v3, v4);
    v5 = v3 == v4;
    v6 = v3 - v4 < 0;
  }
  else {
    v7 = false;
    v5 = false;
    v6 = false;
  }
  *(_DWORD*)(a1 + 64) = 2139095040;
  if (v6 ^ v7 | v5) {
    v8 = 0;
    v9 = 0;
    do {
      ++v9;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v8) = 2139095040;
      v8 += 12;
    } while (v9 < *(int*)(a1 + 60));
  }
  return memcpy(*(_QWORD*)(a1 + 72), *(_QWORD*)(*(_QWORD*)(a1 + 104) + 48LL),
                (((unsigned int)*(unsigned __int16*)(a1 + 100) + 31) >> 3) &
                    0x3FFCLL);
}

__int64 BoneVisibilityAnimObj_Unknown3(__int64 result)
{
  float v1;
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v7;
  __int64 j;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 i;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;

  v1 = **(float**)(result + 8);
  if (*(float*)(result + 64) != v1) {
    v2 = *(_DWORD*)(result + 60);
    v3 = *(_QWORD*)(result + 72);
    v4 = result;
    v5 = *(_DWORD*)(result + 116);
    if (v2 >= 1 && v2 <= *(_DWORD*)(result + 56)) {
      if (v5 >= 1) {
        v10 = 0;
        v11 = 0;
        for (i = 0; i < v5; ++i) {
          v13 = *(_QWORD*)(v4 + 120);
          v14 = *(int*)(v13 + 4 * v11 + 20);
          if ((*(_DWORD*)(*(_QWORD*)(v4 + 88) + 4 * v14) & 0x40000000) == 0) {
            result =
                GameRoutine_5e53f0(v13 + v10, *(_QWORD*)(v4 + 48) + v11, v1);
            *(_DWORD*)(v3 + 4LL * ((int)v14 >> 5)) =
                (((_DWORD)result != 0) << v14) |
                *(_DWORD*)(v3 + 4LL * ((int)v14 >> 5)) & ~(1 << v14);
            v5 = *(_DWORD*)(v4 + 116);
          }
          v11 += 12;
          v10 += 48;
        }
      }
    }
    else if (v5 >= 1) {
      v7 = 0;
      for (j = 0; j < v5; ++j) {
        result = *(_QWORD*)(v4 + 120) + v7;
        v9 = *(int*)(result + 20);
        if ((*(_DWORD*)(*(_QWORD*)(v4 + 88) + 4 * v9) & 0x40000000) == 0) {
          v16 = 0;
          v15 = 2139095040;
          result = GameRoutine_5e53f0(result, &v15, v1);
          *(_DWORD*)(v3 + 4LL * ((int)v9 >> 5)) =
              *(_DWORD*)(v3 + 4LL * ((int)v9 >> 5)) & ~(1 << v9) |
              (((_DWORD)result != 0) << v9);
          v5 = *(_DWORD*)(v4 + 116);
        }
        v7 += 48;
      }
    }
    *(_DWORD*)(v4 + 64) = **(_DWORD**)(v4 + 8);
  }
  return result;
}

__int64 BoneVisibilityAnimObj_Unknown7(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  bool v12;
  int v13;
  int v14;
  __int64 (*v15)(__int64, unsigned __int64);

  v2 = *(unsigned __int16*)(result + 100);
  if (*(_WORD*)(result + 100) != 0) {
    v3 = *(_QWORD*)(result + 72);
    v5 = result;
    v6 = 0;
    do {
      v7 = *(unsigned int*)(*(_QWORD*)(v5 + 88) + 4 * v6);
      if ((v7 & 0x80000000) == 0) {
        v8 = *(_QWORD*)(a2 + 8);
        v9 = (v7 >> 3) & 0xFFC;
        v10 = *(_DWORD*)(v8 + v9);
        v11 = *(_DWORD*)(v3 + 4LL * ((unsigned int)v6 >> 5)) >> v6;
        v12 = (v10 & (1 << v7)) == 0;
        v13 = v10 & ~(1 << v7);
        v14 = !v12;
        *(_DWORD*)(v8 + v9) =
            (((*(_DWORD*)(v3 + 4LL * ((unsigned int)v6 >> 5)) >> v6) & 1)
             << v7) |
            v13;
        v15 = *(__int64 (**)(__int64, unsigned __int64))(a2 + 96);
        if (v15 != nullptr && ((v11 ^ v14) & 1) != 0) {
          result = v15(a2, v7 & 0x7FFF);
        }
      }
      ++v6;
    } while (v2 != v6);
  }
  return result;
}

#pragma GCC visibility pop
