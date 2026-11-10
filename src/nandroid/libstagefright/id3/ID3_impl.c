#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MPEG4Extractor_4ec9b0(__int64);
__int64 MatroskaExtractor_4e6640(__int64);
__int64 nandroid_String8_setTo_plt_86ed10(_QWORD, _QWORD);
__int64 nandroid_String8_setTo_plt_871860(_QWORD, _QWORD, _QWORD);
__int64 nandroid_String8_setTo_plt_871880(_QWORD, _QWORD, _QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
extern _QWORD SdkData_c58c70[3];
extern _QWORD SdkData_c58c88[3];
extern char SdkData_bbbd5c;
__int64 nandroid_ID3_Iterator_getstring(void* this_, void* a2, char a3);

__int64 nandroid_ID3_Iterator_getstring(void* this_, void* a2, char a3)
{
  __int64 result;
  _BYTE* v7;
  int v8;
  int v9;
  unsigned __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  _BYTE* v13;
  unsigned __int64 v14;
  int v15;
  _BYTE* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  bool v25;
  int v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  unsigned __int16* v37;
  _WORD* v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  unsigned __int16* v43;
  _WORD* v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  _WORD* v48;
  unsigned __int16* v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  void* v56;
  _BYTE* v57;
  _BYTE* v58;
  _BYTE* v59;
  __int64 v60;
  char v61;
  _BYTE* v62;
  char* v63;
  char v64;
  _QWORD v65[2];

  result = nandroid_String8_setTo_plt_86ed10(a2, &SdkData_bbbd5c);
  v7 = *((_BYTE**)this_ + 3);
  if (v7 == nullptr) {
    return result;
  }
  v8 = (unsigned __int8)*v7;
  v9 = *(_DWORD*)(*(_QWORD*)this_ + 32LL);
  if ((unsigned int)(v9 - 1) <= 1) {
    if ((*((_QWORD*)this_ + 2) & 0xFFFFFFFFFFFFFFFELL) == 0x7E) {
      v65[0] = 0;
      v65[1] = 0;
      snprintf_plt(v65, 16, "%d", v8);
      return nandroid_String8_setTo_plt_86ed10(a2, v65);
    }
    v12 = *((_QWORD*)this_ + 4);
    return nandroid_String8_setTo_plt_871860(a2, v7, v12);
  }
  v10 = *((_QWORD*)this_ + 4);
  v11 = v9 - 3;
  if (v11 > 2) {
    if (v10 == 0) {
      return result;
    }
  }
  else if (v10 <= SdkData_c58c88[v11]) {
    return result;
  }
  if (v11 > 2) {
    v12 = v10 - 1;
    if ((a3 & 1) == 0) {
    LABEL_13:
      v13 = *((_BYTE**)this_ + 3);
      if (v12 == 0) {
        return result;
      }
      goto LABEL_14;
    }
  }
  else {
    v12 = SdkData_c58c70[v11] + v10;
    if ((a3 & 1) == 0) {
      goto LABEL_13;
    }
  }
  if (v12 < 5) {
    return result;
  }
  v13 = v7 + 4;
  v24 = v12 - 4;
  do {
    v25 = __OFSUB__(v24--, 1);
    if (v24 < 0 != v25) {
      break;
    }
    v26 = (unsigned __int8)*++v13;
  } while (v26 != 0);
  if ((int)v13 - (int)v7 >= (int)v12) {
    return result;
  }
  v12 -= (int)v13 - (int)v7;
  if (v12 == 0) {
    return result;
  }
LABEL_14:
  if ((unsigned __int8)*v7 > 1u) {
    if (v8 == 2) {
      v27 = v12 >> 1;
      v28 = (__int64)(v13 + 1);
      if ((int)(v12 >> 1) < 1) {
        v32 = 0;
      }
      else {
        v29 = v12;
        result = MPEG4Extractor_4ec9b0((unsigned int)v12 & 0xFFFFFFFE);
        if (result == 0) {
          return result;
        }
        v30 = v29;
        v31 = (unsigned int)v29 >> 1;
        v32 = result;
        v33 = v31 - 1;
        v34 = (v30 >> 1) & 7;
        if (v33 >= 7) {
          v37 = (unsigned __int16*)(v13 + 7);
          v38 = (_WORD*)(result + 8);
          v39 = 0;
          v40 = -8LL * ((unsigned int)v30 >> 4);
          do {
            v39 -= 8;
            *(v38 - 4) = bswap32(*(v37 - 3)) >> 16;
            *(v38 - 3) = bswap32(*(v37 - 2)) >> 16;
            *(v38 - 2) = bswap32(*(v37 - 1)) >> 16;
            *(v38 - 1) = bswap32(*v37) >> 16;
            *v38 = bswap32(v37[1]) >> 16;
            v38[1] = bswap32(v37[2]) >> 16;
            v38[2] = bswap32(v37[3]) >> 16;
            v41 = v37[4];
            v37 += 8;
            v38[3] = bswap32(v41) >> 16;
            v38 += 8;
          } while (v40 != v39);
          v35 = -v39;
        }
        else {
          v35 = 0;
        }
        if (v34 != 0) {
          v42 = 2 * v35;
          do {
            --v34;
            *(_WORD*)(result + v42) =
                bswap32(*(unsigned __int16*)(v28 + v42)) >> 16;
            v42 += 2;
          } while (v34 != 0);
        }
        v28 = result;
      }
      result = nandroid_String8_setTo_plt_871880(a2, v28, (int)v27);
      if (v32 != 0) {
        return MatroskaExtractor_4e6640(v32);
      }
      return result;
    }
    if (v8 != 3) {
      return result;
    }
  LABEL_33:
    v7 = v13 + 1;
    return nandroid_String8_setTo_plt_871860(a2, v7, v12);
  }
  if (*v7 == 0) {
    goto LABEL_33;
  }
  v14 = v12 >> 1;
  if ((unsigned int)(v12 >> 1) == 0) {
    return result;
  }
  v16 = v13 + 1;
  v15 = *(unsigned __int16*)(v13 + 1);
  if (v15 == 65279) {
    if ((int)v14 < 2) {
      return result;
    }
    v16 = v13 + 3;
    v20 = 0;
    goto LABEL_59;
  }
  if (v15 != 65534) {
    v20 = 0;
    if ((int)v14 < 1) {
      v36 = 0;
    LABEL_64:
      v53 = MPEG4Extractor_4ec9b0((int)v14);
      if (v53 != 0) {
        if (v36 != 0) {
          v54 = v14 & 7;
          if ((unsigned int)(v14 - 1) >= 7) {
            v58 = (_BYTE*)(v53 + 3);
            v59 = v16 + 8;
            v60 = 0;
            do {
              v60 -= 8;
              *(v58 - 3) = *(v59 - 8);
              *(v58 - 2) = *(v59 - 6);
              *(v58 - 1) = *(v59 - 4);
              *v58 = *(v59 - 2);
              v58[1] = *v59;
              v58[2] = v59[2];
              v58[3] = v59[4];
              v61 = v59[6];
              v59 += 16;
              v58[4] = v61;
              v58 += 8;
            } while (-(__int64)(v14 & 0x7FFFFFF8) != v60);
            v55 = -v60;
          }
          else {
            v55 = 0;
          }
          if ((v14 & 7) != 0) {
            v62 = (_BYTE*)(v53 + v55);
            v63 = &v16[2 * v55];
            do {
              v64 = *v63;
              v63 += 2;
              --v54;
              *v62++ = v64;
            } while (v54 != 0);
          }
        }
        nandroid_String8_setTo_plt_871860(a2, v53, (int)v14);
        result = MatroskaExtractor_4e6640(v20);
        goto LABEL_78;
      }
      v56 = a2;
      v57 = v16;
      v52 = (int)v14;
    LABEL_70:
      result = nandroid_String8_setTo_plt_871880(v56, v57, v52);
    LABEL_78:
      if (v20 != 0) {
        return MatroskaExtractor_4e6640(v20);
      }
      return result;
    }
  LABEL_60:
    v51 = 0;
    v52 = (unsigned int)v14;
    while (*(unsigned __int16*)&v16[2 * v51] <= 0xFFu) {
      if ((unsigned int)v14 == ++v51) {
        v36 = 1;
        goto LABEL_64;
      }
    }
    v56 = a2;
    v57 = v16;
    goto LABEL_70;
  }
  if ((int)v14 >= 2) {
    v17 = v12;
    result = MPEG4Extractor_4ec9b0((unsigned int)v12 & 0xFFFFFFFE);
    if (result != 0) {
      v18 = v17;
      v19 = (unsigned int)v17 >> 1;
      v20 = result;
      v21 = v19 - 1;
      v22 = (v18 >> 1) & 7;
      if (v21 >= 7) {
        v43 = (unsigned __int16*)(v13 + 7);
        v44 = (_WORD*)(result + 8);
        v45 = 0;
        v46 = -8LL * ((unsigned int)v18 >> 4);
        do {
          v45 -= 8;
          *(v44 - 4) = bswap32(*(v43 - 3)) >> 16;
          *(v44 - 3) = bswap32(*(v43 - 2)) >> 16;
          *(v44 - 2) = bswap32(*(v43 - 1)) >> 16;
          *(v44 - 1) = bswap32(*v43) >> 16;
          *v44 = bswap32(v43[1]) >> 16;
          v44[1] = bswap32(v43[2]) >> 16;
          v44[2] = bswap32(v43[3]) >> 16;
          v47 = v43[4];
          v43 += 8;
          v44[3] = bswap32(v47) >> 16;
          v44 += 8;
        } while (v46 != v45);
        v23 = -v45;
      }
      else {
        v23 = 0;
      }
      if (v22 != 0) {
        v48 = (_WORD*)(result + 2 * v23);
        v49 = (unsigned __int16*)&v13[2 * v23 + 1];
        do {
          v50 = *v49++;
          --v22;
          *v48++ = bswap32(v50) >> 16;
        } while (v22 != 0);
      }
      v16 = (_BYTE*)(result + 2);
    LABEL_59:
      LODWORD(v14) = v14 - 1;
      goto LABEL_60;
    }
  }
  return result;
}

#pragma GCC visibility pop
