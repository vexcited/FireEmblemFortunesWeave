#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ObjectTransparentModuleBase_febc00(__int64 result);
__int64 ObjectTransparentModuleBase_febe40(__int64 result);

__int64 ObjectTransparentModuleBase_febc00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  int v14;
  float v15;
  float v16;
  __int64 v17;
  int v18;

  if ((*(_BYTE*)(result + 51) & 1) != 0) {
    if (*(_BYTE*)(result + 50) == 1) {
      goto LABEL_14;
    }
  LABEL_6:
    v2 = *(_QWORD*)(result + 24);
    if (v2 == 0) {
      return result;
    }
    v3 = *(_QWORD*)(v2 + 136);
    if ((v3 & 8) != 0) {
      v7 = (_BYTE*)(v2 + 169);
      if ((*(_BYTE*)(v2 + 169) & 1) == 0) {
        goto LABEL_23;
      }
    }
    else {
      v4 = *(float*)(v2 + 120);
      v5 = *(float*)(v2 + 144);
      v3 |= 8uLL;
      *(_QWORD*)(v2 + 136) = v3;
      if (v4 == v5 && *(float*)(v2 + 124) == *(float*)(v2 + 148) &&
          *(float*)(v2 + 128) == *(float*)(v2 + 152) &&
          *(float*)(v2 + 132) == *(float*)(v2 + 156)) {
        v6 = ((unsigned __int8)*(_DWORD*)(v2 + 160) ^ (unsigned __int8)v3) &
             0x3F;
        *(_BYTE*)(v2 + 169) =
            (((unsigned __int8)*(_DWORD*)(v2 + 160) ^ (unsigned __int8)v3) &
             0x3F) != 0;
        v7 = (_BYTE*)(v2 + 169);
        if (v6 == 0) {
        LABEL_23:
          if ((v3 & 0x10) != 0) {
            goto LABEL_35;
          }
          v10 = v3 | 0x10;
          goto LABEL_38;
        }
      }
      else {
        *(_BYTE*)(v2 + 169) = 1;
        v7 = (_BYTE*)(v2 + 169);
      }
    }
    v9 = *(unsigned __int8*)(v2 + 20);
    *(_BYTE*)(v2 + 20) = v9 & 0xFB;
    if (v9 != (v9 & 0xFFFFFFFB)) {
      *(_BYTE*)(*(_QWORD*)(v2 + 8) + 728LL) = 0;
      v3 = *(_QWORD*)(v2 + 136);
    }
    goto LABEL_23;
  }
  v1 = *(_QWORD*)(result + 32);
  if (v1 == 0 || (*(_BYTE*)(v1 + 160) & 2) == 0) {
    goto LABEL_6;
  }

LABEL_14:
  v2 = *(_QWORD*)(result + 24);
  if (v2 == 0) {
    return result;
  }
  v8 = *(_QWORD*)(v2 + 136);
  if ((v8 & 8) != 0) {
    v11 = *(float*)(v2 + 120);
    v12 = *(float*)(v2 + 144);
    v8 &= ~8uLL;
    *(_QWORD*)(v2 + 136) = v8;
    if (v11 == v12 && *(float*)(v2 + 124) == *(float*)(v2 + 148) &&
        *(float*)(v2 + 128) == *(float*)(v2 + 152) &&
        *(float*)(v2 + 132) == *(float*)(v2 + 156)) {
      v13 =
          ((unsigned __int8)*(_DWORD*)(v2 + 160) ^ (unsigned __int8)v8) & 0x3F;
      *(_BYTE*)(v2 + 169) =
          (((unsigned __int8)*(_DWORD*)(v2 + 160) ^ (unsigned __int8)v8) &
           0x3F) != 0;
      v7 = (_BYTE*)(v2 + 169);
      if (v13 == 0) {
        goto LABEL_34;
      }
    }
    else {
      *(_BYTE*)(v2 + 169) = 1;
      v7 = (_BYTE*)(v2 + 169);
    }
  LABEL_32:
    v14 = *(unsigned __int8*)(v2 + 20);
    *(_BYTE*)(v2 + 20) = v14 & 0xFB;
    if (v14 != (v14 & 0xFFFFFFFB)) {
      *(_BYTE*)(*(_QWORD*)(v2 + 8) + 728LL) = 0;
      v8 = *(_QWORD*)(v2 + 136);
    }
    goto LABEL_34;
  }
  v7 = (_BYTE*)(v2 + 169);
  if ((*(_BYTE*)(v2 + 169) & 1) != 0) {
    goto LABEL_32;
  }

LABEL_34:
  if ((v8 & 0x10) == 0) {
  LABEL_35:
    if ((*v7 & 1) == 0) {
      return result;
    }
    goto LABEL_45;
  }
  v10 = v8 & 0xFFFFFFFFFFFFFFEFLL;

LABEL_38:
  v15 = *(float*)(v2 + 120);
  v16 = *(float*)(v2 + 144);
  *(_QWORD*)(v2 + 136) = v10;
  if (v15 == v16 && *(float*)(v2 + 124) == *(float*)(v2 + 148) &&
      *(float*)(v2 + 128) == *(float*)(v2 + 152) &&
      *(float*)(v2 + 132) == *(float*)(v2 + 156)) {
    v17 = ((unsigned __int8)*(_DWORD*)(v2 + 160) ^ (unsigned __int8)v10) & 0x3F;
    *(_BYTE*)(v2 + 169) = v17 != 0;
    if (v17 == 0) {
      return result;
    }
  }
  else {
    *v7 = 1;
  }

LABEL_45:
  v18 = *(unsigned __int8*)(v2 + 20);
  *(_BYTE*)(v2 + 20) = v18 & 0xFB;
  if (v18 != (v18 & 0xFFFFFFFB)) {
    *(_BYTE*)(*(_QWORD*)(v2 + 8) + 728LL) = 0;
  }
  return result;
}

__int64 ObjectTransparentModuleBase_febe40(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _BYTE* v3;
  float v4;
  float v5;
  __int64 v6;
  int v7;
  float v8;
  float v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;

  v1 = *(_QWORD*)(result + 24);
  if (v1 == 0) {
    return result;
  }
  v2 = *(_QWORD*)(v1 + 136);
  if ((v2 & 8) != 0) {
    v4 = *(float*)(v1 + 120);
    v5 = *(float*)(v1 + 144);
    v2 &= ~8uLL;
    *(_QWORD*)(v1 + 136) = v2;
    if (v4 == v5 && *(float*)(v1 + 124) == *(float*)(v1 + 148) &&
        *(float*)(v1 + 128) == *(float*)(v1 + 152) &&
        *(float*)(v1 + 132) == *(float*)(v1 + 156)) {
      v6 = ((unsigned __int8)*(_DWORD*)(v1 + 160) ^ (unsigned __int8)v2) & 0x3F;
      *(_BYTE*)(v1 + 169) =
          (((unsigned __int8)*(_DWORD*)(v1 + 160) ^ (unsigned __int8)v2) &
           0x3F) != 0;
      v3 = (_BYTE*)(v1 + 169);
      if (v6 == 0) {
        goto LABEL_14;
      }
    }
    else {
      *(_BYTE*)(v1 + 169) = 1;
      v3 = (_BYTE*)(v1 + 169);
    }
  LABEL_12:
    v7 = *(unsigned __int8*)(v1 + 20);
    *(_BYTE*)(v1 + 20) = v7 & 0xFB;
    if (v7 != (v7 & 0xFFFFFFFB)) {
      *(_BYTE*)(*(_QWORD*)(v1 + 8) + 728LL) = 0;
      v2 = *(_QWORD*)(v1 + 136);
    }
    goto LABEL_14;
  }
  v3 = (_BYTE*)(v1 + 169);
  if ((*(_BYTE*)(v1 + 169) & 1) != 0) {
    goto LABEL_12;
  }

LABEL_14:
  if ((v2 & 0x10) != 0) {
    v8 = *(float*)(v1 + 120);
    v9 = *(float*)(v1 + 144);
    v10 = v2 & 0xFFFFFFFFFFFFFFEFLL;
    *(_QWORD*)(v1 + 136) = v10;
    if (v8 == v9 && *(float*)(v1 + 124) == *(float*)(v1 + 148) &&
        *(float*)(v1 + 128) == *(float*)(v1 + 152) &&
        *(float*)(v1 + 132) == *(float*)(v1 + 156)) {
      v11 =
          ((unsigned __int8)*(_DWORD*)(v1 + 160) ^ (unsigned __int8)v10) & 0x3F;
      *(_BYTE*)(v1 + 169) = v11 != 0;
      if (v11 == 0) {
        return result;
      }
    }
    else {
      *v3 = 1;
    }
  }
  else if ((*v3 & 1) == 0) {
    return result;
  }
  v12 = *(unsigned __int8*)(v1 + 20);
  *(_BYTE*)(v1 + 20) = v12 & 0xFB;
  if (v12 != (v12 & 0xFFFFFFFB)) {
    *(_BYTE*)(*(_QWORD*)(v1 + 8) + 728LL) = 0;
  }
  return result;
}

#pragma GCC visibility pop
