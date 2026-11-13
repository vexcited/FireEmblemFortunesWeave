#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 varmul_64_plt(int, int, char);
__int64 nn_fontll_itype_42d920(__int64 result);
__int64 nn_fontll_itype_439ee0(__int64 result, _DWORD* a2, int a3, char a4,
                               unsigned __int16 a5, unsigned __int16 a6,
                               int* a7, __int64 a8);
__int64 nn_fontll_itype_44dba0(int a1, int a2, int a3, __int64 a4);

__int64 nn_fontll_itype_42d920(__int64 result)
{
  __int64 v1;
  _DWORD* v2;
  unsigned int v3;
  __int64 v4;
  _DWORD* v5;
  int v6;
  int v7;
  unsigned int v8;
  _DWORD* v9;
  int v10;
  _DWORD* v11;
  __int64 v12;

  {
    v1 = *(_QWORD*)(result + 40);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v4 = *(int*)(v1 - 4);
    __asm__ volatile("" ::"r"(v4));
  }
  v2 = (_DWORD*)(v1 - 4);
  {
    v3 = *(_DWORD*)(v1 - 4);
    __asm__ volatile("" ::"r"(v3));
  }
  v5 = (_DWORD*)(v1 - 4 - 4 * v4);
  {
    v6 = *(_DWORD*)v5;
    __asm__ volatile("" ::"r"(v6));
  }
  if ((_DWORD)v4 != 0) {
    {
      v7 = *(_DWORD*)(v1 - 4) & 7;
      __asm__ volatile("" ::"r"(v7));
    }
    if ((v3 & 7) != 0) {
      v8 = v3 & 0xFFFFFFF8;
      do {
        v9 = v5;
        {
          v10 = v5[1];
          __asm__ volatile("" ::"r"(v10));
        }
        ++v5;
        --v7;
        *(_DWORD*)v9 = v10;
      } while (v7 != 0);
      if (v3 < 8) {
        goto LABEL_10;
      }
    }
    else {
      {
        v8 = *(_DWORD*)(v1 - 4);
        __asm__ volatile("" ::"r"(v8));
      }
      if (v3 < 8) {
      LABEL_10:
        v2 = (_DWORD*)(v1 - 8);
        goto LABEL_11;
      }
    }
    v11 = v5 + 4;
    do {
      {
        v12 = *(_QWORD*)(v11 - 1);
        __asm__ volatile("" ::"r"(v12));
      }
      v8 -= 8;
      *((_QWORD*)v11 - 2) = *(_QWORD*)(v11 - 3);
      *((_QWORD*)v11 - 1) = v12;
      *(_DWORD*)v11 = v11[1];
      *(_QWORD*)(v11 + 1) = *((_QWORD*)v11 + 1);
      v11[3] = v11[4];
      v11 += 8;
    } while (v8 != 0);
    goto LABEL_10;
  }
LABEL_11:
  *(_DWORD*)v2 = v6;
  *(_QWORD*)(result + 40) = v2 + 1;
  return result;
}

__int64 nn_fontll_itype_439ee0(__int64 result, _DWORD* a2, int a3, char a4,
                               unsigned __int16 a5, unsigned __int16 a6,
                               int* a7, __int64 a8)
{
  _DWORD* v8;
  _DWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  char v24;
  int* v25;
  int v26;
  int v27;
  int v28;
  unsigned __int64 v29;
  int v30;
  int v31;
  int v32;
  _DWORD* v33;
  int v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned int v43;
  unsigned int v44;

  {
    v8 = *(_DWORD**)a8;
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = *(_DWORD**)(a8 + 8);
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v11 = *(_QWORD*)(a8 + 16);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v10 = *(_QWORD*)(a8 + 24);
    __asm__ volatile("" ::"r"(v10));
  }
  if ((a4 & 2) != 0) {
    if ((a6 | a5) == 0) {
      if (*(_WORD*)(a8 + 80) != 0) {
        v29 = 4 * (*(unsigned __int16*)(*(_QWORD*)(a8 + 64) +
                                        2LL * *(__int16*)(a8 + 80) - 2) +
                   (unsigned __int64)**(unsigned __int16**)(a8 + 56)) +
              36;
      }
      else {
        v29 = 0;
      }
      {
        v40 = *(_QWORD*)(a8 + 16);
        __asm__ volatile("" ::"r"(v40));
      }
      {
        v41 = *(_QWORD*)a8;
        __asm__ volatile("" ::"r"(v41));
      }
      goto LABEL_58;
    }
    {
      v22 = a2[190];
      __asm__ volatile("" ::"r"(v22));
    }
    v23 = result;
    if (v22 == 2) {
      v24 = a4;
      v25 = a7;
      v33 = a2;
      v34 = varmul_64_plt(a2[188], (__int16)a5, 16);
      a2 = v33;
      v26 = v34;
      {
        v27 = a2[197];
        __asm__ volatile("" ::"r"(v27));
      }
      v28 = (__int16)a6;
      if (v27 != 2) {
        goto LABEL_26;
      }
    }
    else {
      if (v22 != 1) {
        v24 = a4;
        v25 = a7;
        if (v22 != 0) {
          v26 = 0;
          {
            v27 = a2[197];
            __asm__ volatile("" ::"r"(v27));
          }
          v28 = (__int16)a6;
          if (v27 == 2) {
            goto LABEL_38;
          }
        }
        else {
          {
            v26 = (a2[186] * (__int16)a5 + ((int)a2[187] >> 1)) >> a2[189];
            __asm__ volatile("" ::"r"(v26));
          }
          {
            v27 = a2[197];
            __asm__ volatile("" ::"r"(v27));
          }
          v28 = (__int16)a6;
          if (v27 == 2) {
            goto LABEL_38;
          }
        }
      LABEL_26:
        if (v27 == 1) {
          {
            v37 = a2[194];
            __asm__ volatile("" ::"r"(v37));
          }
          {
            v38 = a2[193] * v28;
            __asm__ volatile("" ::"r"(v38));
          }
          v39 = v37 >> 1;
          v35 = v23;
          if ((a6 & 0x8000) != 0) {
            v36 = -((v39 - v38) / v37);
            if (v25[1] != 0) {
              goto LABEL_43;
            }
          }
          else {
            v36 = (v39 + v38) / v37;
            if (v25[1] != 0) {
              goto LABEL_43;
            }
          }
        }
        else {
          v35 = v23;
          if (v27 != 0) {
            v36 = 0;
            if (v25[1] != 0) {
              goto LABEL_43;
            }
          }
          else {
            {
              v36 = (a2[193] * v28 + ((int)a2[194] >> 1)) >> a2[196];
              __asm__ volatile("" ::"r"(v36));
            }
            if (v25[1] != 0) {
              goto LABEL_43;
            }
          }
        }
      LABEL_41:
        if (v25[2] == 0) {
          v42 = v36;
          v26 = varmul_64_plt(v26, *v25, 16);
          v36 = varmul_64_plt(v42, v25[3], 16);
          v35 = v23;
        }
      LABEL_43:
        if ((v24 & 4) != 0) {
          v43 = (v26 + 32) & 0xFFFFFFC0;
        }
        else {
          v43 = v26;
        }
        if ((v24 & 4) != 0) {
          v44 = (v36 + 32) & 0xFFFFFFC0;
        }
        else {
          v44 = v36;
        }
        if ((*(_BYTE*)(*(_QWORD*)(v35 + 48) + 36LL) & 0x40) != 0) {
          v15 = (v26 + 32) & 0xFFFFFFC0;
        }
        else {
          v15 = v43;
        }
        if ((*(_BYTE*)(*(_QWORD*)(v35 + 48) + 36LL) & 0x40) != 0) {
          v16 = (v36 + 32) & 0xFFFFFFC0;
        }
        else {
          v16 = v44;
        }
        {
          v17 = *(__int16*)(a8 + 80);
          __asm__ volatile("" ::"r"(v17));
        }
        if (*(_WORD*)(a8 + 80) != 0) {
          goto LABEL_4;
        }
        goto LABEL_56;
      }
      {
        v30 = a2[187];
        __asm__ volatile("" ::"r"(v30));
      }
      v24 = a4;
      v25 = a7;
      {
        v31 = a2[186] * (__int16)a5;
        __asm__ volatile("" ::"r"(v31));
      }
      v32 = v30 >> 1;
      if ((a5 & 0x8000) != 0) {
        v26 = -((v32 - v31) / v30);
        {
          v27 = a2[197];
          __asm__ volatile("" ::"r"(v27));
        }
        v28 = (__int16)a6;
        if (v27 == 2) {
          goto LABEL_38;
        }
        goto LABEL_26;
      }
      v26 = (v32 + v31) / v30;
      {
        v27 = a2[197];
        __asm__ volatile("" ::"r"(v27));
      }
      v28 = (__int16)a6;
      if (v27 != 2) {
        goto LABEL_26;
      }
    }
  LABEL_38:
    v36 = varmul_64_plt(a2[195], v28, 16);
    v35 = v23;
    if (v25[1] != 0) {
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  if (a3 != 0) {
    {
      v14 = ~(unsigned __int64)*(unsigned __int16*)(*(_QWORD*)(a8 + 64) - 2LL) +
            (__int16)a5;
      __asm__ volatile("" ::"r"(v14));
    }
    {
      v15 = v8[v14] - v8[(__int16)a6];
      __asm__ volatile("" ::"r"(v15));
    }
    {
      v16 = v9[v14] - v9[(__int16)a6];
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = *(__int16*)(a8 + 80);
      __asm__ volatile("" ::"r"(v17));
    }
    if (*(_WORD*)(a8 + 80) != 0) {
    LABEL_4:
      {
        v18 = *(unsigned __int16*)(*(_QWORD*)(a8 + 64) + 2 * v17 - 2) +
              **(unsigned __int16**)(a8 + 56);
        __asm__ volatile("" ::"r"(v18));
      }
      v19 = v18 + 9;
      v20 = (v18 + 9) & 7;
      if (v20 != 0) {
        v21 = v18 - v20 + 9;
        do {
          --v20;
          *(_DWORD*)v8++ += v15;
          *(_DWORD*)v9++ += v16;
        } while (v20 != 0);
      }
      else {
        v21 = v18 + 9;
      }
      do {
        v21 -= 8;
        *(_DWORD*)v8 += v15;
        *(_DWORD*)v9 += v16;
        v8[1] += v15;
        v9[1] += v16;
        v8[2] += v15;
        v9[2] += v16;
        v8[3] += v15;
        v9[3] += v16;
        v8[4] += v15;
        v9[4] += v16;
        v8[5] += v15;
        v9[5] += v16;
        v8[6] += v15;
        v9[6] += v16;
        v8[7] += v15;
        v8 += 8;
        v9[7] += v16;
        v9 += 8;
      } while (v21 != 0);
      v29 = (unsigned int)(4 * v19);
      goto LABEL_57;
    }
  LABEL_56:
    v29 = 0;
  LABEL_57:
    {
      v41 = *(_QWORD*)a8;
      __asm__ volatile("" ::"r"(v41));
    }
    v40 = v11;
  LABEL_58:
    memcpy_plt(v40, v41, v29);
    return memcpy_plt(v10, *(_QWORD*)(a8 + 8), v29);
  }
  return result;
}

__int64 nn_fontll_itype_44dba0(int a1, int a2, int a3, __int64 a4)
{
  int v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int16 v9;
  unsigned __int16 v10;
  unsigned __int16* v11;
  int v12;
  __int64 v13;
  unsigned __int16* v14;
  int v15;
  int v16;
  int v17;
  bool v18;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  _DWORD* v25;
  int v26;
  __int64 v27;
  _DWORD* v28;
  _DWORD* v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  _DWORD* v37;
  int* v38;
  unsigned __int64 v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  _DWORD* v49;
  __int64 v50;
  char v51;
  bool v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  bool v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  unsigned int v73;
  unsigned int v74;
  bool v76;
  bool v77;
  __int64 v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  bool v89;
  bool v90;
  bool v91;
  int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _DWORD* v97;
  int v98;
  __int64 v99;
  __int64 v100;
  _DWORD* v101;
  _DWORD* v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int* v108;
  _DWORD* v109;
  __int64 v111;
  unsigned __int64 v112;
  _DWORD* v113;
  __int64 v114;
  _QWORD v115[32];
  _QWORD v116[16];
  _QWORD v117[8];
  _QWORD v118[2];
  _QWORD v119[31];

  memset(v116, 0, sizeof(v116));
  if (a3 < 1) {
    return 1;
  }
  v6 = 0;
  v7 = (unsigned int)a3;
  memset(v115, 0, sizeof(v115));
  do {
    v8 = (unsigned __int16)v6++;
    *((_DWORD*)v115 + v8) = *(_DWORD*)(a4 + 48LL * (unsigned int)v8 + 28);
  } while (a3 > (unsigned int)(unsigned __int16)v6);
  v9 = 0;
  v10 = 0;
  v11 = (unsigned __int16*)(a4 + 48LL * a2);
  {
    v12 = *v11;
    __asm__ volatile("" ::"r"(v12));
  }
  do {
    v14 = (unsigned __int16*)(a4 + 48LL * v10);
    {
      v15 = *v14;
      __asm__ volatile("" ::"r"(v15));
    }
    if (v12 == v15) {
      goto LABEL_5;
    }
    {
      v16 = v11[2];
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = v14[2];
      __asm__ volatile("" ::"r"(v17));
    }
    v18 = v16 == v15 || v16 == v17;
    if (v18 || v12 == v17) {
      goto LABEL_5;
    }
    {
      v20 = *((_DWORD*)v11 + 6) - *((_DWORD*)v14 + 6);
      __asm__ volatile("" ::"r"(v20));
    }
    if (v20 < 0) {
      v20 = -v20;
    }
    if ((unsigned int)v20 <= 0xF) {
    LABEL_5:
      v13 = v9++;
      *((_WORD*)v116 + v13) = v10;
    }
    ++v10;
  } while (a3 > (unsigned int)v10);
  if (v9 == 0) {
    return 1;
  }
  v21 = 0;
  v114 = a3 & 7;
  v111 = a4 + 28;
  v22 = a4 + 48LL * (unsigned int)a3;
  v108 = (int*)(a4 + 28 + 48LL * a1);
  v109 = (_DWORD*)(a4 + 220);
  v112 = v9;
  v113 = (_DWORD*)(a4 + 40);
  while (2) {
    {
      v23 = *(_DWORD*)(v22 - 24);
      __asm__ volatile("" ::"r"(v23));
    }
    {
      v24 = *((unsigned __int16*)v116 + v21);
      __asm__ volatile("" ::"r"(v24));
    }
    v25 = (_DWORD*)(a4 + 48 * v24);
    {
      v26 = v25[6];
      __asm__ volatile("" ::"r"(v26));
    }
    memset(v119, 0, 240);
    v118[1] = 0;
    v118[0] = 0;
    memset(v117, 0, sizeof(v117));
    if (v26 == v23) {
      goto LABEL_128;
    }
    if ((unsigned int)a3 >= 8) {
      v28 = v109;
      v29 = v119;
      v30 = 0;
      do {
        {
          v31 = *(v28 - 36);
          __asm__ volatile("" ::"r"(v31));
        }
        {
          v32 = *(v28 - 24);
          __asm__ volatile("" ::"r"(v32));
        }
        v30 -= 8;
        *(v29 - 4) = *(v28 - 48);
        *(v29 - 3) = v31;
        {
          v33 = *(v28 - 12);
          __asm__ volatile("" ::"r"(v33));
        }
        {
          v34 = v28[12];
          __asm__ volatile("" ::"r"(v34));
        }
        *(v29 - 2) = v32;
        *(v29 - 1) = v33;
        *(_DWORD*)v29 = *(_DWORD*)v28;
        v29[1] = v34;
        {
          v35 = v28[24];
          __asm__ volatile("" ::"r"(v35));
        }
        {
          v36 = v28[36];
          __asm__ volatile("" ::"r"(v36));
        }
        v28 += 96;
        v29[2] = v35;
        v29[3] = v36;
        v29 += 8;
      } while (-(__int64)(v7 & 0x7FFFFFF8) != v30);
      v27 = -v30;
      if (v114 == 0) {
        goto LABEL_32;
      }
      goto LABEL_30;
    }
    v27 = 0;
    if (v114 != 0) {
    LABEL_30:
      v37 = (_DWORD*)v118 + v27;
      v38 = (int*)(v111 + 48 * v27);
      v39 = v7 & 7;
      do {
        {
          v40 = *v38;
          __asm__ volatile("" ::"r"(v40));
        }
        v38 += 12;
        --v39;
        *(_DWORD*)v37++ = v40;
      } while (v39 != 0);
    }
  LABEL_32:
    {
      v42 = v25[7];
      __asm__ volatile("" ::"r"(v42));
    }
    {
      v41 = v25[8];
      __asm__ volatile("" ::"r"(v41));
    }
    v43 = (v41 + 1) / 2;
    v44 = v43 + v42;
    v45 = v42 - v43;
    if ((v44 & 0x3Fu) >= 3) {
      v45 = v44;
    }
    v46 = ((v45 + 63) & 0xFFFFFFC0) - v45;
    v47 = v46 + v42;
    v25[7] = v47;
    if (v46 != 0) {
      if (a1 == (_DWORD)v24) {
        goto LABEL_37;
      }
      {
        v80 = *v108 <= v47 ? a1 : v24;
        __asm__ volatile("" ::"r"(v80));
      }
      {
        v81 = *v108 <= v47 ? v24 : a1;
        __asm__ volatile("" ::"r"(v81));
      }
      {
        v82 = *(int*)(a4 + 48LL * v80 + 28) +
              (signed __int32)*(_DWORD*)(a4 + 48LL * v80 + 32) / 2;
        __asm__ volatile("" ::"r"(v82));
      }
      {
        v83 = *(int*)(a4 + 48LL * v81 + 28) -
              (signed __int32)*(_DWORD*)(a4 + 48LL * v81 + 32) / 2;
        __asm__ volatile("" ::"r"(v83));
      }
      v84 = v83 - v82;
      if (v83 >= v82) {
        v85 = v82 & 0xFFFFFFC0;
        v86 = v83 & 0xFFFFFFC0;
        if (v82 == (v82 & 0xFFFFFFC0)) {
          if (v83 == v86) {
            if (v84 > 63) {
              goto LABEL_37;
            }
            goto LABEL_35;
          }
          goto LABEL_110;
        }
        if (v83 == v86 || v85 == v86) {
        LABEL_110:
          if (v84 > 47) {
            goto LABEL_37;
          }
          goto LABEL_35;
        }
        if (v86 != v85 + 64) {
          goto LABEL_37;
        }
        v87 = v83 & 0x3F;
        v88 = v82 & 0x3F;
        v89 = v87 <= 0x27 || v88 >= 0x19;
        v90 = !v89;
        v91 = v87 <= 0x2F && v88 >= 0x11;
        if (!v91 || v90) {
          goto LABEL_37;
        }
      }
    }
  LABEL_35:
    {
      v47 = *((_DWORD*)v118 + v24) + 64;
      __asm__ volatile("" ::"r"(v47));
    }
    v25[7] = v47;
  LABEL_37:
    v48 = v47 - v26;
    if (v48 < 0) {
      v48 = -v48;
    }
    if ((unsigned int)v48 > 0x60 ||
        v47 > (signed __int32)*(_DWORD*)(v22 - 20)) {
      v25[7] = *((_DWORD*)v118 + v24);
      goto LABEL_128;
    }
    v49 = v113;
    v50 = 0;
    v51 = 0;
    do {
      if (v24 == v50) {
      LABEL_42:
        v52 = false;
        goto LABEL_43;
      }
      {
        v53 = *(v49 - 3);
        __asm__ volatile("" ::"r"(v53));
      }
      if (v47 <= v53) {
        v54 = v24;
      }
      else {
        v54 = v50;
      }
      if (v47 <= v53) {
        v55 = v50;
      }
      else {
        v55 = v24;
      }
      {
        v56 = *(int*)(a4 + 48LL * v54 + 28) +
              (signed __int32)*(_DWORD*)(a4 + 48LL * v54 + 32) / 2;
        __asm__ volatile("" ::"r"(v56));
      }
      {
        v57 = *(int*)(a4 + 48LL * v55 + 28) -
              (signed __int32)*(_DWORD*)(a4 + 48LL * v55 + 32) / 2;
        __asm__ volatile("" ::"r"(v57));
      }
      v58 = v57 - v56;
      if (v57 < v56) {
        goto LABEL_59;
      }
      v59 = v56 & 0xFFFFFFC0;
      v60 = v57 & 0xFFFFFFC0;
      if (v56 != (v56 & 0xFFFFFFC0)) {
        if (v57 != v60 && v59 != v60) {
          if (v60 != v59 + 64) {
            goto LABEL_42;
          }
          v73 = v57 & 0x3F;
          v74 = v56 & 0x3F;
          v52 = false;
          v76 = v73 > 0x27 && v74 < 0x19;
          v77 = v73 <= 0x2F && v74 >= 0x11;
          if (!v77 || v76) {
            goto LABEL_43;
          }
          goto LABEL_59;
        }
      LABEL_58:
        if (v58 > 47) {
          goto LABEL_42;
        }
        goto LABEL_59;
      }
      if (v57 != v60) {
        goto LABEL_58;
      }
      if (v58 > 63) {
        goto LABEL_42;
      }
    LABEL_59:
      {
        v61 = v25[9];
        __asm__ volatile("" ::"r"(v61));
      }
      v62 = __OFSUB__(*(_DWORD*)v49, v61);
      {
        v63 = *(int*)v49 - v61;
        __asm__ volatile("" ::"r"(v63));
      }
      if (v63 < 0 != v62) {
        goto LABEL_42;
      }
      {
        v64 = *(v49 - 1);
        __asm__ volatile("" ::"r"(v64));
      }
      {
        v65 = v25[10];
        __asm__ volatile("" ::"r"(v65));
      }
      v62 = __OFSUB__(v65, v64);
      v66 = v65 - v64;
      if (v66 < 0 != v62) {
        goto LABEL_42;
      }
      {
        v67 = *(v49 - 2);
        __asm__ volatile("" ::"r"(v67));
      }
      if (v66 < v63) {
        v63 = v66;
      }
      v68 = v47 - v41 / 2 - v67 / 2 - v53;
      v69 = v41 / -2 - v47 - v67 / 2 + v53;
      if (v68 < v69) {
        v69 = v68;
      }
      if (v41 >= v67) {
        v70 = *(v49 - 2);
        __asm__ volatile("" ::"r"(v70));
      }
      else {
        v70 = v41;
      }
      v71 = v70 / 2;
      v52 = v63 >= v71 || v69 >= v71;
    LABEL_43:
      *((_BYTE*)v117 + v50++) = v52;
      v49 += 12;
      v51 |= v52;
    } while (v7 != v50);
    if (v51 == 0 || (int)v24 + 1 >= (int)v7) {
    LABEL_22:
      if (++v21 >= v112) {
        return 1;
      }
      continue;
    }
    break;
  }
  v78 = v24 + 1;
  while (2) {
    if (*((_BYTE*)v117 + v78) == 0) {
      if (v78 + 1 >= v7) {
        goto LABEL_22;
      }
      goto LABEL_92;
    }
    v79 = nn_fontll_itype_44dba0(v24, v78, a3, a4);
    if (v79 != 0 && v78 + 1 < v7) {
    LABEL_92:
      ++v78;
      continue;
    }
    break;
  }
  if (v79 != 0) {
    goto LABEL_22;
  }
  if (a3 > (int)v24) {
    v95 = v24;
    v96 = ((_BYTE)v7 - (_BYTE)v24) & 7;
    if ((((_BYTE)v7 - (_BYTE)v24) & 7) != 0) {
      v95 = v24;
      v97 = (_DWORD*)(a4 + 48LL * (unsigned int)v24 + 28);
      do {
        {
          v98 = *((_DWORD*)v118 + v95++);
          __asm__ volatile("" ::"r"(v98));
        }
        --v96;
        *(_DWORD*)v97 = v98;
        v97 += 12;
      } while (v96 != 0);
    }
    if (v24 - v7 <= 0xFFFFFFFFFFFFFFF8LL) {
      v99 = v7 - v95;
      v100 = a4 + 48 * v95;
      {
        v101 = (_DWORD*)&v118[2] + v95;
        __asm__ volatile("" ::"r"(v101));
      }
      v102 = (_DWORD*)(v100 + 220);
      do {
        {
          v103 = *(v101 - 3);
          __asm__ volatile("" ::"r"(v103));
        }
        v99 -= 8;
        *(v102 - 48) = *(v101 - 4);
        *(v102 - 36) = v103;
        {
          v104 = *(v101 - 1);
          __asm__ volatile("" ::"r"(v104));
        }
        *(v102 - 24) = *(v101 - 2);
        *(v102 - 12) = v104;
        {
          v105 = v101[1];
          __asm__ volatile("" ::"r"(v105));
        }
        *(_DWORD*)v102 = *(_DWORD*)v101;
        v102[12] = v105;
        {
          v106 = v101[2];
          __asm__ volatile("" ::"r"(v106));
        }
        {
          v107 = v101[3];
          __asm__ volatile("" ::"r"(v107));
        }
        v101 += 8;
        v102[24] = v106;
        v102[36] = v107;
        v102 += 96;
      } while (v99 != 0);
    }
  }
LABEL_128:
  v93 = 0;
  do {
    v94 = (unsigned __int16)v93++;
    *(_DWORD*)(a4 + 48LL * (unsigned int)v94 + 28) = *((_DWORD*)v115 + v94);
  } while (a3 > (unsigned int)(unsigned __int16)v93);
  return 0;
}

#pragma GCC visibility pop
