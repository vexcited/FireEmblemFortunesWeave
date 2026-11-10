#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_util_IsValidUtf8String_plt(_QWORD, _QWORD);
__int64 nn_util_detail_msgpack_ReadCurrent(__int64 a1, _QWORD* a2);
_DWORD* nn_util_a7120(_DWORD* result, unsigned int a2, int a3);
__int64 nn_util_a7480(__int64 a1, __int64 a2, __int64 a3);
__int64
nn_util_detail_WriteOscMessageArguments_float_int_bool_int_float_float_float_float_float(
    _QWORD* a1, _DWORD* a2, unsigned __int64 a3, unsigned int* a4,
    unsigned int* a5, __int64 a6, unsigned int* a7, unsigned int* a8,
    unsigned int* a9, unsigned int* a10, unsigned int* a11, unsigned int* a12);

__int64 nn_util_detail_msgpack_ReadCurrent(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  int v4;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;

  v2 = a2[2];
  if (a2[1] == v2) {
    return 0;
  }
  v4 = *(unsigned __int8*)(*a2 + v2);
  a2[2] = v2 + 1;
  if ((v4 & 0xE0) == 0xA0 || (unsigned __int8)(v4 + 39) <= 2u) {
    *(_DWORD*)a1 = 8;
    switch (v4) {
    case 219:
      v10 = a2[2];
      if ((unsigned __int64)(a2[1] - v10) < 4) {
        return 0;
      }
      *(_QWORD*)(a1 + 8) = bswap32(*(_DWORD*)(*a2 + v10));
      a2[2] += 4LL;
      v11 = a2[2];
      v12 = *(_QWORD*)(a1 + 8);
      if (a2[1] - v11 < v12) {
        return 0;
      }
      break;
    case 218:
      v9 = a2[2];
      if ((unsigned __int64)(a2[1] - v9) < 2) {
        return 0;
      }
      *(_QWORD*)(a1 + 8) = bswap32(*(unsigned __int16*)(*a2 + v9)) >> 16;
      a2[2] += 2LL;
      v11 = a2[2];
      v12 = *(_QWORD*)(a1 + 8);
      if (a2[1] - v11 < v12) {
        return 0;
      }
      break;
    case 217:
      v6 = a2[2];
      if (a2[1] == v6) {
        return 0;
      }
      v17 = *a2;
      a2[2] = v6 + 1;
      *(_QWORD*)(a1 + 8) = *(unsigned __int8*)(v17 + v6);
      v11 = a2[2];
      v12 = *(_QWORD*)(a1 + 8);
      if (a2[1] - v11 < v12) {
        return 0;
      }
      break;
    default:
      *(_QWORD*)(a1 + 8) = v4 & 0x1F;
      v11 = a2[2];
      v12 = *(_QWORD*)(a1 + 8);
      if (a2[1] - v11 < v12) {
        return 0;
      }
      break;
    }
    if (v12 == 0) {
      goto LABEL_43;
    }
    v15 = a1;
    v16 = a2;
    if ((nn_util_IsValidUtf8String_plt(*a2 + v11, v12) & 1) != 0) {
      v11 = v16[2];
      v12 = *(_QWORD*)(v15 + 8);
      a2 = v16;
      a1 = v15;
    LABEL_43:
      *(_QWORD*)(a1 + 16) = v11;
      v14 = a2[2] + v12;
      goto LABEL_82;
    }
    return 0;
  }
  if ((v4 & 0xF0) == 0x90 || (v7 = (char)v4 & 0xFFFFFFFE) == -36) {
    *(_DWORD*)a1 = 9;
    if (v4 != 221) {
      if (v4 == 220) {
        v8 = a2[2];
        if ((unsigned __int64)(a2[1] - v8) < 2) {
          return 0;
        }
      LABEL_37:
        *(_DWORD*)(a1 + 8) = bswap32(*(unsigned __int16*)(*a2 + v8)) >> 16;
        goto LABEL_38;
      }
    LABEL_34:
      *(_DWORD*)(a1 + 8) = v4 & 0xF;
      return 1;
    }
    v13 = a2[2];
    if ((unsigned __int64)(a2[1] - v13) < 4) {
      return 0;
    }
  LABEL_80:
    *(_DWORD*)(a1 + 8) = bswap32(*(_DWORD*)(*a2 + v13));
    goto LABEL_81;
  }
  if ((char)v4 < -112 || v7 == -34) {
    *(_DWORD*)a1 = 10;
    if (v4 != 223) {
      if (v4 == 222) {
        v8 = a2[2];
        if ((unsigned __int64)(a2[1] - v8) < 2) {
          return 0;
        }
        goto LABEL_37;
      }
      goto LABEL_34;
    }
    v13 = a2[2];
    if ((unsigned __int64)(a2[1] - v13) < 4) {
      return 0;
    }
    goto LABEL_80;
  }
  if ((char)v4 > -33 || (v4 & 0xFC) == 0xD0) {
    *(_DWORD*)a1 = 7;
    if ((unsigned __int8)v4 > 0xD1u) {
      if ((unsigned __int8)v4 == 210) {
        v22 = a2[2];
        if ((unsigned __int64)(a2[1] - v22) < 4) {
          return 0;
        }
        *(_QWORD*)(a1 + 8) = (int)bswap32(*(_DWORD*)(*a2 + v22));
      LABEL_81:
        v14 = a2[2] + 4LL;
        goto LABEL_82;
      }
      if ((unsigned __int8)v4 == 211) {
        v19 = a2[2];
        if ((unsigned __int64)(a2[1] - v19) < 8) {
          return 0;
        }
      LABEL_58:
        *(_QWORD*)(a1 + 8) = bswap64(*(_QWORD*)(*a2 + v19));
        v14 = a2[2] + 8LL;
        goto LABEL_82;
      }
    }
    else {
      if ((unsigned __int8)v4 == 208) {
        v20 = a2[2];
        if (a2[1] != v20) {
          v21 = *a2;
          a2[2] = v20 + 1;
          *(_QWORD*)(a1 + 8) = *(char*)(v21 + v20);
          return 1;
        }
        return 0;
      }
      if ((unsigned __int8)v4 == 209) {
        v18 = a2[2];
        if ((unsigned __int64)(a2[1] - v18) < 2) {
          return 0;
        }
        *(_QWORD*)(a1 + 8) =
            (__int16)(bswap32(*(unsigned __int16*)(*a2 + v18)) >> 16);
      LABEL_38:
        v14 = a2[2] + 2LL;
      LABEL_82:
        a2[2] = v14;
        return 1;
      }
    }
    *(_QWORD*)(a1 + 8) = (char)v4;
    return 1;
  }
  if ((v4 & 0xFC) == 0xCC) {
    v23 = 0;
    *(_DWORD*)a1 = 6;
    if ((unsigned __int8)v4 > 0xCDu) {
      if ((unsigned __int8)v4 == 206) {
        v27 = a2[2];
        if ((unsigned __int64)(a2[1] - v27) < 4) {
          return 0;
        }
        *(_QWORD*)(a1 + 8) = bswap32(*(_DWORD*)(*a2 + v27));
        v28 = a2[2] + 4LL;
        goto LABEL_102;
      }
      if ((unsigned __int8)v4 == 207) {
        v25 = a2[2];
        if ((unsigned __int64)(a2[1] - v25) < 8) {
          return 0;
        }
        *(_QWORD*)(a1 + 8) = bswap64(*(_QWORD*)(*a2 + v25));
        v28 = a2[2] + 8LL;
        goto LABEL_102;
      }
    }
    else {
      if ((unsigned __int8)v4 == 204) {
        v26 = a2[2];
        if (a2[1] == v26) {
          return 0;
        }
        v29 = *a2;
        a2[2] = v26 + 1;
        *(_QWORD*)(a1 + 8) = *(unsigned __int8*)(v29 + v26);
        return 1;
      }
      if ((unsigned __int8)v4 == 205) {
        v24 = a2[2];
        if ((unsigned __int64)(a2[1] - v24) < 2) {
          return 0;
        }
        *(_QWORD*)(a1 + 8) = bswap32(*(unsigned __int16*)(*a2 + v24)) >> 16;
        v28 = a2[2] + 2LL;
      LABEL_102:
        a2[2] = v28;
        return 1;
      }
    }
    return v23;
  }
  if ((unsigned __int8)v4 <= 0xC6u) {
    if ((unsigned __int8)v4 <= 0xC3u) {
      switch ((unsigned __int8)v4) {
      case 0xC0u:
        *(_DWORD*)a1 = 0;
        return 1;
      case 0xC2u:
        *(_BYTE*)(a1 + 8) = 0;
        *(_DWORD*)a1 = 1;
        return 1;
      case 0xC3u:
        *(_DWORD*)a1 = 1;
        *(_BYTE*)(a1 + 8) = 1;
        return 1;
      default:
        break;
      }
      return 0;
    }
    *(_DWORD*)a1 = 2;
    if ((unsigned __int8)v4 == 198) {
      v32 = a2[2];
      if ((unsigned __int64)(a2[1] - v32) < 4) {
        return 0;
      }
      *(_QWORD*)(a1 + 8) = bswap32(*(_DWORD*)(*a2 + v32));
      v33 = a2[2] + 4LL;
    }
    else {
      if ((unsigned __int8)v4 != 197) {
        if ((unsigned __int8)v4 == 196) {
          v30 = a2[2];
          if (a2[1] == v30) {
            return 0;
          }
          v35 = *a2;
          a2[2] = v30 + 1;
          *(_QWORD*)(a1 + 8) = *(unsigned __int8*)(v35 + v30);
          v33 = a2[2];
          v34 = *(_QWORD*)(a1 + 8);
          if (a2[1] - v33 >= v34) {
            goto LABEL_118;
          }
        }
        return 0;
      }
      v31 = a2[2];
      if ((unsigned __int64)(a2[1] - v31) < 2) {
        return 0;
      }
      *(_QWORD*)(a1 + 8) = bswap32(*(unsigned __int16*)(*a2 + v31)) >> 16;
      v33 = a2[2] + 2LL;
    }
    a2[2] = v33;
    v34 = *(_QWORD*)(a1 + 8);
    if (a2[1] - v33 >= v34) {
    LABEL_118:
      *(_QWORD*)(a1 + 16) = v33;
      a2[2] += v34;
      return 1;
    }
    return 0;
  }
  if ((unsigned int)(unsigned __int8)v4 - 199 > 0x11) {
    return 0;
  }
  if (((1 << (v4 + 57)) & 0x3E007) == 0) {
    if ((unsigned __int8)v4 != 202) {
      if ((unsigned __int8)v4 == 203) {
        *(_DWORD*)a1 = 5;
        v19 = a2[2];
        if ((unsigned __int64)(a2[1] - v19) < 8) {
          return 0;
        }
        goto LABEL_58;
      }
      return 0;
    }
    *(_DWORD*)a1 = 4;
    v13 = a2[2];
    if ((unsigned __int64)(a2[1] - v13) < 4) {
      return 0;
    }
    goto LABEL_80;
  }
  v36 = 0;
  *(_DWORD*)a1 = 3;
  if ((unsigned __int8)v4 > 0xD4u) {
    if ((unsigned __int8)v4 > 0xD6u) {
      if ((unsigned __int8)v4 == 215) {
        v38 = 8;
      }
      else {
        if ((unsigned __int8)v4 != 216) {
          return v36;
        }
        v38 = 16;
      }
    }
    else if ((unsigned __int8)v4 == 213) {
      v38 = 2;
    }
    else {
      if ((unsigned __int8)v4 != 214) {
        return v36;
      }
      v38 = 4;
    }
    goto LABEL_142;
  }
  if ((unsigned __int8)v4 > 0xC8u) {
    if ((unsigned __int8)v4 == 201) {
      v40 = a2[2];
      if ((unsigned __int64)(a2[1] - v40) < 4) {
        return 0;
      }
      *(_QWORD*)(a1 + 16) = bswap32(*(_DWORD*)(*a2 + v40));
      a2[2] += 4LL;
      goto LABEL_143;
    }
    if ((unsigned __int8)v4 != 212) {
      return v36;
    }
    v38 = 1;
    goto LABEL_142;
  }
  if ((unsigned __int8)v4 == 199) {
    v39 = a2[2];
    if (a2[1] == v39) {
      return 0;
    }
    v41 = *a2;
    a2[2] = v39 + 1;
    v38 = *(unsigned __int8*)(v41 + v39);
  LABEL_142:
    *(_QWORD*)(a1 + 16) = v38;
    goto LABEL_143;
  }
  if ((unsigned __int8)v4 != 200) {
    return v36;
  }
  v37 = a2[2];
  if ((unsigned __int64)(a2[1] - v37) < 2) {
    return 0;
  }
  *(_QWORD*)(a1 + 16) = bswap32(*(unsigned __int16*)(*a2 + v37)) >> 16;
  a2[2] += 2LL;
LABEL_143:
  v42 = a2[2];
  if (a2[1] == v42) {
    return 0;
  }
  v43 = *a2;
  a2[2] = v42 + 1;
  *(_BYTE*)(a1 + 8) = *(_BYTE*)(v43 + v42);
  v44 = a2[2];
  v45 = *(_QWORD*)(a1 + 16);
  if (a2[1] - v44 < v45) {
    return 0;
  }
  *(_QWORD*)(a1 + 24) = v44;
  a2[2] += v45;
  return 1;
}

_DWORD* nn_util_a7120(_DWORD* result, unsigned int a2, int a3)
{
  int v3;
  int v4;
  _DWORD* v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  __int64 v15;
  __int64 (*v16)(__int64, char*, __int64);
  __int64 v17;
  __int64 i;
  __int64 v19;
  __int64 (*v20)(__int64, char*, __int64);
  int j;
  __int64 v22;
  __int64 (*v23)(__int64, char*, __int64);
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 (*v29)(__int64, char*, __int64);
  __int64 v30;
  __int64 (*v31)(__int64, char*, __int64);
  signed int v32;
  signed int v33;
  __int64 v34;
  __int64 (*v35)(__int64, char*, __int64);
  __int64 v36;
  __int64 (*v37)(__int64, char*, __int64);
  __int64 v38;
  __int64 (*v39)(__int64, char*, __int64);
  int v40;
  int k;
  __int64 v42;
  __int64 (*v43)(__int64, char*, __int64);
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 (*v49)(__int64, char*, __int64);
  __int64 v50;
  __int64 (*v51)(__int64, char*, __int64);
  __int64 v52;
  __int64 (*v53)(__int64, char*, __int64);
  char v54[4];
  char v55[4];
  char v56[4];
  char v57[4];
  char v58[4];
  char v59[4];
  char v60[4];
  char v61[4];
  char v62[4];
  char v63[4];
  char v64[4];
  char v65[4];

  v3 = result[13];
  v4 = a3;
  v6 = result;
  v7 = result[16] - v3;
  if ((result[15] & 4) == 0 && a3 < 1) {
    v9 = 0;
  }
  else {
    v9 = a3 + 1;
  }
  v10 = (result[14] & ~((int)result[14] >> 31)) + v9;
  if (a3 <= v10 + 1) {
    v11 = v10 + 1;
  }
  else {
    v11 = a3;
  }
  v12 = v7 - v11;
  if (v7 - v11 >= 1 && (result[15] & 0x18) == 0) {
    v14 = v7 - v11;
    do {
      v16 = *(__int64 (**)(__int64, char*, __int64))v6;
      v15 = *((_QWORD*)v6 + 1);
      v54[0] = 32;
      result = (_DWORD*)v16(v15, v54, 1);
      --v14;
    } while (v14 != 0);
    v3 = v6[13];
  }
  if (v3 >= 1) {
    v17 = 50;
    for (i = (unsigned int)v3; i != 0; --i) {
      v20 = *(__int64 (**)(__int64, char*, __int64))v6;
      v19 = *((_QWORD*)v6 + 1);
      v55[0] = *((_BYTE*)v6 + v17);
      result = (_DWORD*)v20(v19, v55, 1);
      ++v17;
    }
  }
  if (v12 >= 1 && (v6[15] & 0x18) == 0x10) {
    for (j = v12; j != 0; --j) {
      v23 = *(__int64 (**)(__int64, char*, __int64))v6;
      v22 = *((_QWORD*)v6 + 1);
      v56[0] = 48;
      result = (_DWORD*)v23(v22, v56, 1);
    }
  }
  v24 = v6[14];
  if ((v24 & 0x80000000) == 0) {
    if (v24 + 1 < a2) {
      v25 = (unsigned int)(v24 + 1);
    }
    else {
      v25 = a2;
    }
    v26 = v24 + 1 - v25;
    if (a2 != 0) {
      v27 = 24;
      do {
        v29 = *(__int64 (**)(__int64, char*, __int64))v6;
        v28 = *((_QWORD*)v6 + 1);
        v60[0] = *((_BYTE*)v6 + v27);
        result = (_DWORD*)v29(v28, v60, 1);
        --v25;
        ++v27;
      } while (v25 != 0);
    }
    if (v26 >= 1) {
      do {
        v31 = *(__int64 (**)(__int64, char*, __int64))v6;
        v30 = *((_QWORD*)v6 + 1);
        v61[0] = 48;
        result = (_DWORD*)v31(v30, v61, 1);
        --v26;
      } while (v26 != 0);
    }
    v32 = v6[14];
    if ((int)a2 > v32) {
      v33 = v32 + 1;
    }
    else {
      v33 = a2;
    }
    if (v4 <= 0 && (v6[15] & 4) == 0) {
      goto LABEL_59;
    }
    v35 = *(__int64 (**)(__int64, char*, __int64))v6;
    v34 = *((_QWORD*)v6 + 1);
    v62[0] = 46;
    result = (_DWORD*)v35(v34, v62, 1);
    if (v4 < 1) {
      goto LABEL_59;
    }
  LABEL_51:
    v44 = a2 - v33;
    if (v4 >= (int)(a2 - v33)) {
      v45 = (unsigned int)v44;
    }
    else {
      v45 = (unsigned int)v4;
    }
    v46 = v4 - v45;
    if (v44 >= 1) {
      v47 = v33 + 24LL;
      do {
        v49 = *(__int64 (**)(__int64, char*, __int64))v6;
        v48 = *((_QWORD*)v6 + 1);
        v63[0] = *((_BYTE*)v6 + v47);
        result = (_DWORD*)v49(v48, v63, 1);
        --v45;
        ++v47;
      } while (v45 != 0);
    }
    if (v46 >= 1) {
      do {
        v51 = *(__int64 (**)(__int64, char*, __int64))v6;
        v50 = *((_QWORD*)v6 + 1);
        v64[0] = 48;
        result = (_DWORD*)v51(v50, v64, 1);
        --v46;
      } while (v46 != 0);
    }
    goto LABEL_59;
  }
  v6[14] = -v24;
  v37 = *(__int64 (**)(__int64, char*, __int64))v6;
  v36 = *((_QWORD*)v6 + 1);
  v57[0] = 48;
  result = (_DWORD*)v37(v36, v57, 1);
  if (v4 > 0 || (v6[15] & 4) != 0) {
    v39 = *(__int64 (**)(__int64, char*, __int64))v6;
    v38 = *((_QWORD*)v6 + 1);
    v58[0] = 46;
    result = (_DWORD*)v39(v38, v58, 1);
  }
  if (v4 >= v6[14] - 1) {
    v40 = v6[14] - 1;
  }
  else {
    v40 = v4;
  }
  if (v40 >= 1) {
    for (k = v40; k != 0; --k) {
      v43 = *(__int64 (**)(__int64, char*, __int64))v6;
      v42 = *((_QWORD*)v6 + 1);
      v59[0] = 48;
      result = (_DWORD*)v43(v42, v59, 1);
    }
  }
  v33 = 0;
  v4 -= v40;
  if (v4 >= 1) {
    goto LABEL_51;
  }
LABEL_59:
  if (v12 >= 1 && (v6[15] & 8) != 0) {
    do {
      v53 = *(__int64 (**)(__int64, char*, __int64))v6;
      v52 = *((_QWORD*)v6 + 1);
      v65[0] = 32;
      result = (_DWORD*)v53(v52, v65, 1);
      --v12;
    } while (v12 != 0);
  }
  return result;
}

__int64 nn_util_a7480(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  __int64 v4;

  v3 = *(_DWORD*)(a3 + 28);
  if ((*(_BYTE*)(a2 + 1) & 8) != 0) {
    if ((v3 & 0x80000000) == 0 ||
        (*(_DWORD*)(a3 + 28) = v3 + 16, v3 >= 0xFFFFFFF1)) {
      v4 = ((*(_QWORD*)a3 + 15LL) & 0xFFFFFFFFFFFFFFF0LL) + 16;
      goto LABEL_8;
    }
  }
  else if ((v3 & 0x80000000) == 0 ||
           (*(_DWORD*)(a3 + 28) = v3 + 16, v3 >= 0xFFFFFFF1)) {
    v4 = *(_QWORD*)a3 + 8LL;
  LABEL_8:
    *(_QWORD*)a3 = v4;
  }
  return 0;
}

__int64

nn_util_detail_WriteOscMessageArguments_float_int_bool_int_float_float_float_float_float(
    _QWORD* a1, _DWORD* a2, unsigned __int64 a3, unsigned int* a4,
    unsigned int* a5, __int64 a6, unsigned int* a7, unsigned int* a8,
    unsigned int* a9, unsigned int* a10, unsigned int* a11, unsigned int* a12)
{
  if (a3 < 4) {
    return 0;
  }
  *a2 = bswap32(*a4);
  *a1 += 4LL;
  if ((a3 & 0xFFFFFFFFFFFFFFFCLL) == 4) {
    return 0;
  }
  a2[1] = bswap32(*a5);
  *a1 += 4LL;
  if (a3 - 8 < 4) {
    return 0;
  }
  a2[2] = bswap32(*a7);
  *a1 += 4LL;
  if (((a3 - 8) & 0xFFFFFFFFFFFFFFFCLL) == 4) {
    return 0;
  }
  a2[3] = bswap32(*a8);
  *a1 += 4LL;
  if (a3 - 16 < 4) {
    return 0;
  }
  a2[4] = bswap32(*a9);
  *a1 += 4LL;
  if (((a3 - 16) & 0xFFFFFFFFFFFFFFFCLL) == 4) {
    return 0;
  }
  a2[5] = bswap32(*a10);
  *a1 += 4LL;
  if (a3 - 24 < 4) {
    return 0;
  }
  a2[6] = bswap32(*a11);
  *a1 += 4LL;
  if (((a3 - 24) & 0xFFFFFFFFFFFFFFFCLL) == 4) {
    return 0;
  }
  a2[7] = bswap32(*a12);
  *a1 += 4LL;
  return 1;
}

#pragma GCC visibility pop
