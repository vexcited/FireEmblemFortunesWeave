#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 image_jpeg_header_62cc0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD) __asm__("image_jpeg_header_62cc0");
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_bcbc7c;
extern _UNKNOWN SdkData_bcbc84;
extern _UNKNOWN SdkData_bcbc8c;
extern _UNKNOWN SdkData_bcbc94;
extern _UNKNOWN SdkData_bcbc9c;
extern _UNKNOWN SdkData_bcbca4;
extern _UNKNOWN SdkData_bcbcac;
extern _UNKNOWN SdkData_bcbcb4;
extern _UNKNOWN SdkData_bcbcbc;
extern _UNKNOWN SdkData_bcbcc4;
extern _UNKNOWN SdkData_bcbccc;
__int64 image_jpeg_header_61d40(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                                __int64 a4, unsigned __int16 a5);
__int64 image_jpeg_header_61f60(__int64 a1, __int64 a2, __int64 a3);
__int64 image_jpeg_header_62cc0(__int64 a1, _QWORD* a2, __int64 a3,
                                unsigned __int64 a4, __int64 a5, __int64 a6);

__int64 image_jpeg_header_61d40(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                                __int64 a4, unsigned __int16 a5)
{
  int v5;
  __int64 v6;
  char* v11;
  __int64 v12;
  unsigned __int16* v13;
  char* v14;
  unsigned int v15;
  _DWORD* v16;
  int v17;
  unsigned int v18;
  __int64 v19;

  *a1 = 0;
  if (a3 == 0) {
    return 0;
  }
  v5 = a5;
  v6 = a2 + a4;
  v11 = nullptr;
  while (1) {
    if (a3 <= (unsigned __int64)&v11[a4]) {
      return 0;
    }
    v13 = (unsigned __int16*)memchr_plt(&v11[v6], 255, a3 - (_QWORD)&v11[a4]);
    if (v13 == nullptr) {
      return 0;
    }
    v14 = (char*)v13 - a2;
    if ((unsigned __int64)v13 - a2 + 2 > a3) {
      return 0;
    }
    v15 = __rev16(*v13);
    if (v15 == 65280) {
      v12 = 2;
      goto LABEL_4;
    }
    if (v15 < 0xFF01) {
      goto LABEL_24;
    }
    v16 = &SdkData_bcbc7c;
    if (v15 != 65281) {
      v16 = &SdkData_bcbc84;
      if (v15 >= 0xFF4F) {
        v16 = &SdkData_bcbc8c;
        if (v15 >> 6 >= 0x3FF) {
          v16 = &SdkData_bcbc94;
          if (v15 >= 0xFFC8) {
            v16 = &SdkData_bcbc9c;
            if (v15 != 65480) {
              v16 = &SdkData_bcbca4;
              if (v15 >> 4 >= 0xFFD) {
                v16 = &SdkData_bcbcac;
                if (v15 >= 0xFFDA) {
                  v16 = &SdkData_bcbcb4;
                  if (v15 >> 4 >= 0xFFF) {
                    v16 = &SdkData_bcbcbc;
                    if (v15 >= 0xFFFE) {
                      v16 = &SdkData_bcbccc;
                      if (v15 != 0xFFFF) {
                        v16 = &SdkData_bcbcc4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v17 = v16[1];
    switch (v17) {
    case 1:
      if ((unsigned __int64)(v14 + 4) > a3) {
        return 0;
      }
      v18 = 0;
      v19 = __rev16(v13[1]);
      if ((unsigned int)v19 < 2) {
        return v18;
      }
      v12 = v19 + 2;
      if ((unsigned __int64)&v14[v12] > a3) {
        return v18;
      }
      break;
    case 2:
      v12 = 1;
      break;
    case 4:
      return 0;
    default:
    LABEL_24:
      v12 = 2;
      break;
    }
    if (v15 == v5) {
      break;
    }
    if (v15 == 65497) {
      return 0;
    }
  LABEL_4:
    v11 = (char*)v13 + v12 - v6;
    if ((unsigned __int64)v11 >= a3) {
      return 0;
    }
  }
  *a1 = v14;
  return 1;
}

__int64 image_jpeg_header_61f60(__int64 a1, __int64 a2, __int64 a3)
{
  char v4;
  __int64 result;
  int v6;
  bool v7;
  char v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  char v14;

  v13 = 0;
  v11 = 0;
  v12 = 0;
  v4 = image_jpeg_header_62cc0_alt1(&v11, &v14, a2, a3, 0, a1);
  result = 0;
  if ((v4 & 1) == 0) {
    return result;
  }
  v6 = BYTE4(v11);
  v7 = BYTE4(v11) >= (unsigned int)*(unsigned __int8*)(a1 + 10);
  *(_BYTE*)(a1 + 165) = BYTE4(v11);
  v8 = !v7;
  *(_BYTE*)(a1 + 163) = v8;
  if (v6 != 0) {
  LABEL_6:
    v9 = 8;
  LABEL_7:
    v10 = 63;
  LABEL_8:
    result = 1;
    *(_DWORD*)(a1 + 136) = v10;
    *(_DWORD*)(a1 + 96) = v9;
    return result;
  }
  v10 = BYTE6(v12);
  result = 0;
  if (BYTE6(v12) > 0x77u) {
    if (BYTE6(v12) <= 0xA7u) {
      if (BYTE6(v12) == 120) {
        v9 = 11;
      }
      else {
        if (BYTE6(v12) != 143) {
          return result;
        }
        v9 = 12;
      }
    }
    else {
      switch (BYTE6(v12)) {
      case 0xA8u:
        v9 = 13;
        break;
      case 0xC3u:
        v9 = 14;
        break;
      case 0xE0u:
        v9 = 15;
        break;
      default:
        return result;
      }
    }
    goto LABEL_7;
  }
  v9 = 1;
  switch (BYTE6(v12)) {
  case 0:
    goto LABEL_8;
  case 3:
    v9 = 2;
    v10 = 3;
    goto LABEL_8;
  case 8:
    v9 = 3;
    v10 = 8;
    goto LABEL_8;
  case 0xF:
    v9 = 4;
    v10 = 15;
    goto LABEL_8;
  case 0x18:
    v9 = 5;
    v10 = 24;
    goto LABEL_8;
  case 0x23:
    v9 = 6;
    v10 = 35;
    goto LABEL_8;
  case 0x30:
    v9 = 7;
    v10 = 48;
    goto LABEL_8;
  case 0x3F:
    goto LABEL_6;
  case 0x50:
    v9 = 9;
    goto LABEL_7;
  case 0x63:
    v9 = 10;
    goto LABEL_7;
  default:
    return result;
  }
}

__int64 image_jpeg_header_62cc0(__int64 a1, _QWORD* a2, __int64 a3,
                                unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v11;
  __int64 result;
  __int64 v13;
  int v15;
  __int64 v16;
  int v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  int v21;
  int v22;
  char v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int8* v31;
  int v32;
  int v33;
  char v34;
  __int64 v35;
  int v36;
  unsigned __int64 v37;
  unsigned __int8* v38;
  int v39;
  int v40;
  char v41;
  int v42;
  unsigned __int64 v43;
  int v44;
  int v45;
  char v46;
  __int64 v47;

  if ((image_jpeg_header_61d40(&v47, a3, a4, a5, 0xFFDAu) & 1) == 0) {
    return 0;
  }
  v11 = v47;
  if (v47 + 4 > a4) {
    return 0;
  }
  *(_WORD*)a1 = bswap32(*(unsigned __int16*)(a3 + v47)) >> 16;
  v13 = __rev16(*(unsigned __int16*)(a3 + v11 + 2));
  *(_WORD*)(a1 + 2) = v13;
  if ((unsigned int)v13 < 6 || v11 + 2 + v13 > a4) {
    return 0;
  }
  v15 = *(unsigned __int8*)(a3 + v11 + 4);
  *(_BYTE*)(a1 + 4) = v15;
  if ((unsigned __int8)(v15 - 1) > 3u) {
    return 0;
  }
  if ((_DWORD)v13 != ((2 * (_BYTE)v15 + 6) & 0xFE)) {
    return 0;
  }
  v16 = v11 + 5;
  v17 = *(unsigned __int8*)(a3 + v11 + 5);
  *(_BYTE*)(a1 + 5) = v17;
  if (*(_BYTE*)(a6 + 10) == 0) {
    return 0;
  }
  v18 = (unsigned __int8*)(a6 + 16);
  v19 = 1;
  v20 = (unsigned __int8*)(a6 + 16);
  do {
    v22 = *v20;
    v20 += 20;
    v21 = v22;
    if (v19 >= *(unsigned __int8*)(a6 + 10)) {
      break;
    }
    ++v19;
  } while (v21 != v17);
  if (v21 != v17) {
    return 0;
  }
  v23 = *(_BYTE*)(a3 + v16 + 1);
  *(_BYTE*)(a1 + 6) = v23;
  if ((v23 & 0xCC) != 0) {
    return 0;
  }
  v24 = v11 + 7;
  if (v15 == 1) {
    v25 = v11 + 7;
  }
  else {
    v29 = *(unsigned __int8*)(a3 + v24);
    *(_BYTE*)(a1 + 7) = v29;
    if (*(_BYTE*)(a6 + 10) == 0) {
      return 0;
    }
    v30 = 1;
    v31 = (unsigned __int8*)(a6 + 16);
    do {
      v33 = *v31;
      v31 += 20;
      v32 = v33;
      if (v30 >= *(unsigned __int8*)(a6 + 10)) {
        break;
      }
      ++v30;
    } while (v32 != v29);
    if (v32 != v29) {
      return 0;
    }
    v34 = *(_BYTE*)(a3 + v24 + 1);
    *(_BYTE*)(a1 + 8) = v34;
    if ((v34 & 0xCC) != 0) {
      return 0;
    }
    v35 = v11 + 9;
    if (v15 == 2) {
      v25 = v11 + 9;
      v16 = v24;
    }
    else {
      v36 = *(unsigned __int8*)(a3 + v35);
      *(_BYTE*)(a1 + 9) = v36;
      if (*(_BYTE*)(a6 + 10) == 0) {
        return 0;
      }
      v37 = 1;
      v38 = (unsigned __int8*)(a6 + 16);
      do {
        v40 = *v38;
        v38 += 20;
        v39 = v40;
        if (v37 >= *(unsigned __int8*)(a6 + 10)) {
          break;
        }
        ++v37;
      } while (v39 != v36);
      if (v39 != v36) {
        return 0;
      }
      v41 = *(_BYTE*)(a3 + v35 + 1);
      *(_BYTE*)(a1 + 10) = v41;
      if ((v41 & 0xCC) != 0) {
        return 0;
      }
      v16 = v11 + 11;
      if (v15 == 3) {
        v25 = v11 + 11;
        v16 = v35;
      }
      else {
        v42 = *(unsigned __int8*)(a3 + v16);
        *(_BYTE*)(a1 + 11) = v42;
        if (*(_BYTE*)(a6 + 10) == 0) {
          return 0;
        }
        v43 = 1;
        do {
          v45 = *v18;
          v18 += 20;
          v44 = v45;
          if (v43 >= *(unsigned __int8*)(a6 + 10)) {
            break;
          }
          ++v43;
        } while (v44 != v42);
        if (v44 != v42) {
          return 0;
        }
        v46 = *(_BYTE*)(a3 + v16 + 1);
        *(_BYTE*)(a1 + 12) = v46;
        if ((v46 & 0xCC) != 0) {
          return 0;
        }
        v25 = v11 + 13;
      }
    }
  }
  v26 = *(unsigned __int8*)(a3 + v25);
  result = 0;
  *(_BYTE*)(a1 + 13) = v26;
  v27 = *(unsigned __int8*)(a3 + v16 + 3);
  *(_BYTE*)(a1 + 14) = v27;
  v28 = *(unsigned __int8*)(a3 + v16 + 4);
  *(_BYTE*)(a1 + 15) = *(_BYTE*)(a3 + v16 + 4) >> 4;
  *(_BYTE*)(a1 + 16) = v28 & 0xF;
  if (v26 <= 0x3F && v27 <= 0x3F) {
    result = 0;
    if (v28 <= 0xDF && (v28 & 0xF) <= 0xD) {
      *a2 = v16 + 5;
      return 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
