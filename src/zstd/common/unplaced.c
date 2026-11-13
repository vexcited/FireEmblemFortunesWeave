#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 zstd_common_248280(_WORD* a1, __int64 a2, unsigned int a3,
                           unsigned int a4, __int64 a5, unsigned __int64 a6);

__int64 zstd_common_248280(_WORD* a1, __int64 a2, unsigned int a3,
                           unsigned int a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v9;
  _WORD* v10;
  __int64 v11;
  __int64 v12;
  signed int v13;
  __int64 v14;
  __int16 v15;
  unsigned int v16;
  __int64 v17;
  __int16* v18;
  _WORD* v19;
  signed int v20;
  signed int v21;
  signed int v22;
  signed int v23;
  __int64 v24;
  unsigned int v25;
  signed int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  int64x2_t v38;
  __int64 v39;
  __int64 v40;
  int64x2_t* v41;
  unsigned __int64* v42;
  unsigned int v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  __int64 v49;
  int v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  int v56;
  char v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  unsigned int v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  unsigned int v69;
  _BYTE* v70;
  __int64 v71;
  unsigned int v72;

  v6 = -46;
  if (a3 > 0xFF) {
    return v6;
  }
  v7 = a3 + 1;
  if ((1LL << a4) + 2 * (unsigned __int64)(unsigned int)v7 + 8 > a6) {
    return v6;
  }
  if (a4 > 0xC) {
    return -44;
  }
  v9 = (unsigned int)(1 << a4);
  v10 = a1 + 3;
  v11 = ((_BYTE)a3 + 1) & 3;
  v12 = (unsigned int)(v9 - 1);
  v13 = (unsigned int)(0x8000 << a4) >> 16;
  if ((unsigned int)v7 >= 4) {
    v17 = ((_WORD)a3 + 1) & 0x1FC;
    v18 = (__int16*)(a2 + 4);
    v19 = (_WORD*)(a5 + 4);
    v15 = 1;
    v14 = 0;
    v16 = v9 - 1;
    while (1) {
      while (1) {
        {
          v20 = *(v18 - 2);
          __asm__ volatile("" ::"r"(v20));
        }
        if (v20 != -1) {
          break;
        }
        v24 = 2LL * v16--;
        LOBYTE(v10[v24]) = v14;
        *(v19 - 2) = 1;
        {
          v21 = *(v18 - 1);
          __asm__ volatile("" ::"r"(v21));
        }
        if (v21 != -1) {
          goto LABEL_14;
        }
      LABEL_22:
        LOBYTE(v10[2 * v16--]) = v14 + 1;
        *(v19 - 1) = 1;
        {
          v22 = *v18;
          __asm__ volatile("" ::"r"(v22));
        }
        if (v22 != -1) {
          goto LABEL_17;
        }
      LABEL_23:
        LOBYTE(v10[2 * v16--]) = v14 + 2;
        *v19 = 1;
        {
          v23 = v18[1];
          __asm__ volatile("" ::"r"(v23));
        }
        if (v23 != -1) {
          goto LABEL_24;
        }
      LABEL_9:
        LOBYTE(v10[2 * v16--]) = v14 + 3;
        v19[1] = 1;
        v14 += 4;
        v18 += 4;
        v19 += 4;
        if (v17 == v14) {
          goto LABEL_27;
        }
      }
      if (v13 <= v20) {
        v15 = 0;
      }
      *(v19 - 2) = v20;
      {
        v21 = *(v18 - 1);
        __asm__ volatile("" ::"r"(v21));
      }
      if (v21 == -1) {
        goto LABEL_22;
      }
    LABEL_14:
      if (v13 <= v21) {
        v15 = 0;
      }
      *(v19 - 1) = v21;
      {
        v22 = *v18;
        __asm__ volatile("" ::"r"(v22));
      }
      if (v22 == -1) {
        goto LABEL_23;
      }
    LABEL_17:
      if (v13 <= v22) {
        v15 = 0;
      }
      *v19 = v22;
      {
        v23 = v18[1];
        __asm__ volatile("" ::"r"(v23));
      }
      if (v23 == -1) {
        goto LABEL_9;
      }
    LABEL_24:
      if (v13 <= v23) {
        v15 = 0;
      }
      v19[1] = v23;
      v14 += 4;
      v18 += 4;
      v19 += 4;
      if (v17 == v14) {
        goto LABEL_27;
      }
    }
  }
  v14 = 0;
  v15 = 1;
  v16 = v9 - 1;
LABEL_27:
  v25 = v16;
  if ((((_BYTE)a3 + 1) & 3) != 0) {
    v25 = v16;
    do {
      while (1) {
        {
          v26 = *(__int16*)(a2 + 2 * v14);
          __asm__ volatile("" ::"r"(v26));
        }
        if (v26 != -1) {
          break;
        }
        v27 = 2LL * v25--;
        LOBYTE(v10[v27]) = v14;
        *(_WORD*)(a5 + 2 * v14++) = 1;
        if (--v11 == 0) {
          goto LABEL_34;
        }
      }
      if (v13 <= v26) {
        v15 = 0;
      }
      *(_WORD*)(a5 + 2 * v14++) = v26;
      --v11;
    } while (v11 != 0);
  }
LABEL_34:
  v28 = (unsigned int)v9 >> 1;
  *a1 = a4;
  a1[1] = v15;
  if (v25 != (_DWORD)v12) {
    v43 = v28 + ((unsigned int)v9 >> 3);
    v44 = 0;
    v45 = v43 + 3;
    if (a3 != 0) {
      v46 = 0;
      do {
        if (*(__int16*)(a2 + 2 * v44) >= 1) {
          v48 = 0;
          do {
            LOBYTE(v10[2 * v46]) = v44;
            do {
              v46 = (v45 + v46) & v12;
            } while (v46 > v25);
            ++v48;
          } while (v48 < *(__int16*)(a2 + 2 * v44));
        }
        v49 = v44 | 1;
        if (*(__int16*)(a2 + 2 * (v44 | 1)) < 1) {
          v47 = v46;
        }
        else {
          v50 = 0;
          v47 = v46;
          do {
            LOBYTE(v10[2 * v47]) = v49;
            do {
              v47 = (v45 + v47) & v12;
            } while (v47 > v25);
            ++v50;
          } while (v50 < *(__int16*)(a2 + 2 * v49));
        }
        v44 += 2;
        v46 = v47;
      } while (v44 != (v7 & 0x1FE));
    }
    else {
      v47 = 0;
    }
    v55 = v47;
    if ((v7 & 1) != 0) {
      if (*(__int16*)(a2 + 2 * v44) < 1) {
        if (v47 == 0) {
          goto LABEL_77;
        }
        return -1;
      }
      v56 = 0;
      v55 = v47;
      do {
        LOBYTE(v10[2 * v55]) = v44;
        do {
          v55 = (v45 + v55) & v12;
        } while (v55 > v25);
        ++v56;
      } while (v56 < *(__int16*)(a2 + 2 * v44));
    }
    if (v55 == 0) {
      goto LABEL_77;
    }
    return -1;
  }
  v29 = a5 + 2LL * a3;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = v28 + ((unsigned int)v9 >> 3) + 3;
  do {
    {
      v34 = *(__int16*)(a2 + 2 * v30);
      __asm__ volatile("" ::"r"(v34));
    }
    *(_QWORD*)(v29 + 2 + v31) = v32;
    if (v34 < 9) {
      goto LABEL_36;
    }
    if ((unsigned __int64)v34 <= 0x10) {
      v35 = 16;
    }
    else {
      v35 = v34;
    }
    v36 = v35 - 9;
    if (v36 < 0x18) {
      v37 = 8;
    LABEL_46:
      v42 = (unsigned __int64*)(v29 + 2 + v37 + v31);
      do {
        *v42++ = v32;
        v37 += 8LL;
      } while (v37 < v34);
      goto LABEL_36;
    }
    v38 = vdupq_n_s64(v32);
    v39 = (v36 >> 3) + 1;
    v40 = v39 & 0x3FFFFFFFFFFFFFFCLL;
    v37 = (32 * ((v39 & 0x3FFFFFFFFFFFFFFCuLL) >> 2)) | 8;
    v41 = (int64x2_t*)(v29 + 26 + v31);
    do {
      v41[-1] = v38;
      *v41 = v38;
      v41 += 2;
      v40 -= 4;
    } while (v40 != 0);
    if (v39 != (v39 & 0x3FFFFFFFFFFFFFFCLL)) {
      goto LABEL_46;
    }
  LABEL_36:
    v31 += v34;
    ++v30;
    v32 += 0x101010101010101LL;
  } while (v30 != v7);
  v51 = 0;
  v52 = 0;
  do {
    v53 = v29 + v51;
    v51 += 2LL;
    LOBYTE(v10[2 * (v52 & v12)]) = *(_BYTE*)(v53 + 2);
    v54 = (unsigned int)v52 + v33;
    v52 = ((int)v52 + 2 * v33) & (unsigned int)v12;
    LOBYTE(v10[2 * (v54 & v12)]) = *(_BYTE*)(v53 + 3);
  } while (v51 < v9);
LABEL_77:
  v57 = a4 - 31;
  v58 = v9 & 3;
  if (v9 - 1 >= 3) {
    v60 = (unsigned __int8*)(a1 + 5);
    v61 = 0;
    do {
      v61 -= 4;
      {
        v62 = 2LL * *(v60 - 4);
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v63 = *(unsigned __int16*)(a5 + v62);
        __asm__ volatile("" ::"r"(v63));
      }
      *(_WORD*)(a5 + v62) = v63 + 1;
      LOBYTE(v62) = v57 + __clz((unsigned int)(v63));
      *(v60 - 3) = v62;
      *((_WORD*)v60 - 3) = (v63 << v62) - v9;
      v64 = 2LL * *v60;
      {
        v65 = *(unsigned __int16*)(a5 + v64);
        __asm__ volatile("" ::"r"(v65));
      }
      *(_WORD*)(a5 + v64) = v65 + 1;
      LOBYTE(v64) = v57 + __clz((unsigned int)(v65));
      v60[1] = v64;
      *((_WORD*)v60 - 1) = (v65 << v64) - v9;
      {
        v66 = 2LL * v60[4];
        __asm__ volatile("" ::"r"(v66));
      }
      {
        v67 = *(unsigned __int16*)(a5 + v66);
        __asm__ volatile("" ::"r"(v67));
      }
      *(_WORD*)(a5 + v66) = v67 + 1;
      LOBYTE(v66) = v57 + __clz((unsigned int)(v67));
      v60[5] = v66;
      *((_WORD*)v60 + 1) = (v67 << v66) - v9;
      {
        v68 = 2LL * v60[8];
        __asm__ volatile("" ::"r"(v68));
      }
      {
        v69 = *(unsigned __int16*)(a5 + v68);
        __asm__ volatile("" ::"r"(v69));
      }
      *(_WORD*)(a5 + v68) = v69 + 1;
      LOBYTE(v68) = v57 + __clz((unsigned int)(v69));
      v60[9] = v68;
      *((_WORD*)v60 + 3) = ((_WORD)v69 << v68) - v9;
      v60 += 16;
    } while (-(__int64)((unsigned int)v9 & 0xFFFFFFFC) != v61);
    v59 = -v61;
    if ((v9 & 3) != 0) {
      goto LABEL_83;
    }
  }
  else {
    v59 = 0;
    if ((v9 & 3) == 0) {
      return 0;
    }
  LABEL_83:
    {
      v70 = (char*)&a1[2 * v59 + 3] + 1;
      __asm__ volatile("" ::"r"(v70));
    }
    do {
      --v58;
      {
        v71 = 2LL * (unsigned __int8)*(v70 - 1);
        __asm__ volatile("" ::"r"(v71));
      }
      {
        v72 = *(unsigned __int16*)(a5 + v71);
        __asm__ volatile("" ::"r"(v72));
      }
      *(_WORD*)(a5 + v71) = v72 + 1;
      LOBYTE(v71) = v57 + __clz((unsigned int)(v72));
      *v70 = v71;
      *(_WORD*)(v70 - 3) = ((_WORD)v72 << v71) - v9;
      v70 += 4;
    } while (v58 != 0);
  }
  return 0;
}

#pragma GCC visibility pop
