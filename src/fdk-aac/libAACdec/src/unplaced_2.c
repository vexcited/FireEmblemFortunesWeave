#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_getValidBits_plt(__int64);
__int64 nn_codec_FDK_get_plt(__int64, unsigned int);
__int64 nn_codec_IcsReadMaxSfb_plt(_QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
__int64 fdk_aac_libAACdec_src_33ff30(__int64 result, __int64 a2);
__int64 fdk_aac_libAACdec_src_35f650(unsigned int* a1, _BYTE* a2, __int64 a3,
                                     __int16 a4);

__int64 fdk_aac_libAACdec_src_33ff30(__int64 result, __int64 a2)
{
  unsigned int* v3;
  int v4;
  void(__attribute__((noreturn)) * v5)();
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int16 v14;
  unsigned int v16;
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v26;
  unsigned int v27;

  v3 = (unsigned int*)result;
  {
    v4 = *(_DWORD*)(*(_QWORD*)(a2 + 224) + 14184LL);
    __asm__ volatile("" ::"r"(v4));
  }
  *(_WORD*)(*(_QWORD*)(a2 + 216) + 2032LL) = 0;
  *(_BYTE*)(*(_QWORD*)(a2 + 216) + 2034LL) = 0;
  v5 = SdkData_e87a50[0];
  {
    v6 = *(_DWORD*)(result + 4);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                    (unsigned __int64)((__int64*)0x38LL));
    __asm__ volatile("" ::"r"(v7));
  }
  if (v6 >= 0xF) {
    {
      v8 = *(_DWORD*)result;
      __asm__ volatile("" ::"r"(v8));
    }
    goto LABEL_15;
  }
  v9 = nn_codec_FDK_getValidBits_plt(result + 8);
  if (31 - v3[1] >= v9) {
    v10 = v9;
  }
  else {
    v10 = 31 - v3[1];
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = *v3 << v10;
    __asm__ volatile("" ::"r"(v11));
  }
  result = nn_codec_FDK_get_plt((__int64)(v3 + 2), v10);
  {
    v12 = v3[1];
    __asm__ volatile("" ::"r"(v12));
  }
  v8 = v11 | result;
  *v3 = v11 | result;
  v6 = v12 + v10;
  if (v6 > 0xD) {
  LABEL_15:
    v16 = v6 - 14;
    v3[1] = v16;
    v14 = (v8 >> v16) & v7;
    if ((unsigned int)(v4 - 2) >= 2 && v4 != 0) {
      goto LABEL_11;
    }
    goto LABEL_20;
  }
  v13 = v8 << (14 - v6);
  *v3 = v13;
  v3[1] = 0;
  v14 = v13 & v7;
  if ((unsigned int)(v4 - 2) >= 2 && v4 != 0) {
  LABEL_11:
    if (v4 != 1) {
      goto LABEL_24;
    }
    if ((unsigned int)v14 > 0x3000) {
      if (v14 <= 12288) {
        goto LABEL_24;
      }
      v14 = 12288;
    }
    goto LABEL_23;
  }
LABEL_20:
  if ((unsigned int)v14 >= 0x1801) {
    if (v14 < 6145) {
      goto LABEL_24;
    }
    v14 = 6144;
  }
LABEL_23:
  *(_WORD*)(*(_QWORD*)(a2 + 216) + 2032LL) = v14;
LABEL_24:
  {
    v18 = *(_DWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v5);
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v19 = v3[1];
    __asm__ volatile("" ::"r"(v19));
  }
  if (v19 >= 7) {
    {
      v20 = *v3;
      __asm__ volatile("" ::"r"(v20));
    }
    goto LABEL_32;
  }
  v21 = nn_codec_FDK_getValidBits_plt((__int64)(v3 + 2));
  if (31 - v3[1] >= v21) {
    v22 = v21;
  }
  else {
    v22 = 31 - v3[1];
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *v3 << v22;
    __asm__ volatile("" ::"r"(v23));
  }
  result = nn_codec_FDK_get_plt((__int64)(v3 + 2), v22);
  {
    v24 = v3[1];
    __asm__ volatile("" ::"r"(v24));
  }
  v20 = v23 | result;
  *v3 = v23 | result;
  v19 = v24 + v22;
  if (v19 > 5) {
  LABEL_32:
    v27 = v19 - 6;
    v3[1] = v27;
    v25 = (v20 >> v27) & v18;
    v26 = (char)v25;
    if ((unsigned int)(char)v25 <= 0x31) {
      goto LABEL_35;
    }
    goto LABEL_33;
  }
  v25 = v20 << (6 - v19);
  *v3 = v25;
  v3[1] = 0;
  LOBYTE(v25) = v25 & v18;
  v26 = (char)v25;
  if ((unsigned int)(char)v25 > 0x31) {
  LABEL_33:
    if (v26 < 50) {
      return result;
    }
    LOBYTE(v25) = 49;
  }
LABEL_35:
  *(_BYTE*)(*(_QWORD*)(a2 + 216) + 2034LL) = v25;
  return result;
}

__int64 fdk_aac_libAACdec_src_35f650(unsigned int* a1, _BYTE* a2, __int64 a3,
                                     __int16 a4)
{
  unsigned int v7;
  unsigned int* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  char v34;
  __int64 result;
  unsigned int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char v50;
  __int64 v51;
  char v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;

  a2[9] = 0;
  if ((a4 & 0x10) == 0) {
    {
      v7 = a1[1];
      __asm__ volatile("" ::"r"(v7));
    }
    if ((a4 & 0x1100) != 0) {
      v8 = a1 + 1;
      {
        v9 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                        (unsigned __int64)((__int64*)0x4LL) + 4);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v7 >= 3) {
      LABEL_4:
        {
          v10 = *a1;
          __asm__ volatile("" ::"r"(v10));
        }
        goto LABEL_18;
      }
    }
    else {
      if (v7 > 1) {
        goto LABEL_12;
      }
      v11 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      {
        v12 = 31 - a1[1] >= v11 ? v11 : 31 - a1[1];
        __asm__ volatile("" ::"r"(v12));
      }
      {
        v13 = *a1 << v12;
        __asm__ volatile("" ::"r"(v13));
      }
      v14 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v12);
      {
        v15 = a1[1];
        __asm__ volatile("" ::"r"(v15));
      }
      v16 = v13 | v14;
      *a1 = v13 | v14;
      v7 = v15 + v12;
      if (v7 != 0) {
      LABEL_12:
        a1[1] = --v7;
        v8 = a1 + 1;
        {
          v9 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                          (unsigned __int64)((__int64*)0x4LL) + 4);
          __asm__ volatile("" ::"r"(v9));
        }
        if (v7 >= 3) {
          goto LABEL_4;
        }
      }
      else {
        a1[1] = 0;
        v8 = a1 + 1;
        *a1 = 2 * v16;
        {
          v9 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                          (unsigned __int64)((__int64*)0x4LL) + 4);
          __asm__ volatile("" ::"r"(v9));
        }
      }
    }
    v17 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
    if (31 - a1[1] >= v17) {
      v18 = v17;
    }
    else {
      v18 = 31 - a1[1];
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *a1 << v18;
      __asm__ volatile("" ::"r"(v19));
    }
    v20 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v18);
    {
      v21 = a1[1];
      __asm__ volatile("" ::"r"(v21));
    }
    v10 = v19 | v20;
    *a1 = v19 | v20;
    v7 = v21 + v18;
    if (v7 <= 1) {
      v22 = v10 << (2 - v7);
      *(_QWORD*)a1 = v22;
      goto LABEL_19;
    }
  LABEL_18:
    v23 = v7 - 2;
    *v8 = v23;
    v22 = v10 >> v23;
  LABEL_19:
    a2[11] = v22 & v9;
    {
      v24 = *v8;
      __asm__ volatile("" ::"r"(v24));
    }
    {
      v25 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                       (unsigned __int64)((__int64*)0x4LL));
      __asm__ volatile("" ::"r"(v25));
    }
    if (*v8 < 2) {
      v27 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      if (31 - a1[1] >= v27) {
        v28 = v27;
      }
      else {
        v28 = 31 - a1[1];
        __asm__ volatile("" ::"r"(v28));
      }
      {
        v29 = *a1 << v28;
        __asm__ volatile("" ::"r"(v29));
      }
      v30 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v28);
      {
        v31 = a1[1];
        __asm__ volatile("" ::"r"(v31));
      }
      v26 = v29 | v30;
      *a1 = v29 | v30;
      v24 = v31 + v28;
      if (v24 == 0) {
        v33 = 2 * v26;
        *(_QWORD*)a1 = v33;
      LABEL_26:
        v34 = v33 & v25;
        if (v34 != 0 && (a4 & 0x20) != 0) {
          v34 = 2;
        }
        a2[10] = v34;
        if ((a4 & 0x30) == 0) {
          goto LABEL_34;
        }
        goto LABEL_32;
      }
    }
    else {
      {
        v26 = *a1;
        __asm__ volatile("" ::"r"(v26));
      }
    }
    v32 = v24 - 1;
    v33 = v26 >> v32;
    *v8 = v32;
    goto LABEL_26;
  }
  *((_WORD*)a2 + 5) = 0;
  if ((a4 & 0x30) == 0) {
    goto LABEL_34;
  }
LABEL_32:
  if (a2[11] != 0) {
    a2[11] = 0;
    return 16386;
  }
LABEL_34:
  result = nn_codec_IcsReadMaxSfb_plt(a1, a2);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a2[11] == 2) {
    {
      v37 = a1[1];
      __asm__ volatile("" ::"r"(v37));
    }
    {
      v38 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                       (unsigned __int64)(*(void*(*)[5])0x18LL) + 4);
      __asm__ volatile("" ::"r"(v38));
    }
    if (v37 < 8) {
      v40 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      if (31 - a1[1] >= v40) {
        v41 = v40;
      }
      else {
        v41 = 31 - a1[1];
        __asm__ volatile("" ::"r"(v41));
      }
      {
        v42 = *a1 << v41;
        __asm__ volatile("" ::"r"(v42));
      }
      v43 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v41);
      {
        v44 = a1[1];
        __asm__ volatile("" ::"r"(v44));
      }
      v39 = v42 | v43;
      *a1 = v42 | v43;
      v37 = v44 + v41;
      if (v37 <= 6) {
        v45 = v39 << (7 - v37);
        *a1 = v45;
        a1[1] = 0;
        LOBYTE(v45) = v45 & v38;
        v46 = 1;
        a2[8] = 0;
        *a2 = 1;
        a2[13] = v45;
        if ((v45 & 0x40) == 0) {
          goto LABEL_54;
        }
        goto LABEL_46;
      }
    }
    else {
      {
        v39 = *a1;
        __asm__ volatile("" ::"r"(v39));
      }
    }
    v53 = v37 - 7;
    a1[1] = v53;
    v45 = (v39 >> v53) & v38;
    v46 = 1;
    a2[8] = 0;
    *a2 = 1;
    a2[13] = v45;
    if ((v45 & 0x40) == 0) {
    LABEL_54:
      a2[8] = 1;
      a2[1] = 1;
      if ((v45 & 0x20) == 0) {
      LABEL_55:
        a2[8] = ++v46;
        a2[2] = 1;
        if ((v45 & 0x10) == 0) {
        LABEL_56:
          a2[8] = v46 + 1;
          a2[3] = 1;
          {
            v47 = (unsigned __int8)a2[8];
            __asm__ volatile("" ::"r"(v47));
          }
          if ((v45 & 8) == 0) {
          LABEL_57:
            a2[8] = v47 + 1;
            a2[4] = 1;
            {
              v48 = (unsigned __int8)a2[8];
              __asm__ volatile("" ::"r"(v48));
            }
            if ((v45 & 4) == 0) {
            LABEL_58:
              a2[8] = v48 + 1;
              a2[5] = 1;
              {
                v49 = (unsigned __int8)a2[8];
                __asm__ volatile("" ::"r"(v49));
              }
              if ((v45 & 2) == 0) {
              LABEL_59:
                a2[8] = v49 + 1;
                a2[6] = 1;
                {
                  v51 = (unsigned __int8)a2[8];
                  __asm__ volatile("" ::"r"(v51));
                }
                if ((v45 & 1) == 0) {
                  goto LABEL_60;
                }
                goto LABEL_52;
              }
            LABEL_51:
              ++a2[v49];
              {
                v50 = a2[13];
                __asm__ volatile("" ::"r"(v50));
              }
              a2[6] = 1;
              {
                v51 = (unsigned __int8)a2[8];
                __asm__ volatile("" ::"r"(v51));
              }
              if ((v50 & 1) == 0) {
              LABEL_60:
                v52 = v51 + 1;
                goto LABEL_61;
              }
            LABEL_52:
              ++a2[v51];
              {
                v52 = a2[8];
                __asm__ volatile("" ::"r"(v52));
              }
            LABEL_61:
              a2[7] = 1;
              a2[8] = v52 + 1;
              goto LABEL_62;
            }
          LABEL_50:
            ++a2[v48];
            LOBYTE(v45) = a2[13];
            a2[5] = 1;
            {
              v49 = (unsigned __int8)a2[8];
              __asm__ volatile("" ::"r"(v49));
            }
            if ((v45 & 2) == 0) {
              goto LABEL_59;
            }
            goto LABEL_51;
          }
        LABEL_49:
          ++a2[v47];
          LOBYTE(v45) = a2[13];
          a2[4] = 1;
          {
            v48 = (unsigned __int8)a2[8];
            __asm__ volatile("" ::"r"(v48));
          }
          if ((v45 & 4) == 0) {
            goto LABEL_58;
          }
          goto LABEL_50;
        }
      LABEL_48:
        ++a2[v46];
        LOBYTE(v45) = a2[13];
        a2[3] = 1;
        {
          v47 = (unsigned __int8)a2[8];
          __asm__ volatile("" ::"r"(v47));
        }
        if ((v45 & 8) == 0) {
          goto LABEL_57;
        }
        goto LABEL_49;
      }
    LABEL_47:
      ++a2[v46];
      a2[2] = 1;
      if ((v45 & 0x10) == 0) {
        goto LABEL_56;
      }
      goto LABEL_48;
    }
  LABEL_46:
    v46 = 0;
    *a2 = 2;
    a2[1] = 1;
    if ((v45 & 0x20) == 0) {
      goto LABEL_55;
    }
    goto LABEL_47;
  }
  if ((a4 & 0x1198) == 0) {
    {
      v54 = a1[1];
      __asm__ volatile("" ::"r"(v54));
    }
    {
      v55 = *((unsigned __int8*)SdkData_e87a50[0] +
              (unsigned __int64)((__int64*)0x4LL));
      __asm__ volatile("" ::"r"(v55));
    }
    if (v54 < 2) {
      v58 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      if (31 - a1[1] >= v58) {
        v59 = v58;
      }
      else {
        v59 = 31 - a1[1];
        __asm__ volatile("" ::"r"(v59));
      }
      {
        v60 = *a1 << v59;
        __asm__ volatile("" ::"r"(v60));
      }
      v61 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v59);
      {
        v62 = a1[1];
        __asm__ volatile("" ::"r"(v62));
      }
      v63 = v60 | v61;
      *a1 = v60 | v61;
      v64 = v62 + v59;
      if (v64 != 0) {
        v65 = v64 - 1;
        a1[1] = v65;
        if ((v55 & (v63 >> v65)) == 0) {
          goto LABEL_39;
        }
      }
      else {
        v66 = 2 * v63;
        *(_QWORD*)a1 = v66;
        if ((v55 & v66) == 0) {
          goto LABEL_39;
        }
      }
    }
    else {
      {
        v56 = *a1;
        __asm__ volatile("" ::"r"(v56));
      }
      v57 = v54 - 1;
      a1[1] = v57;
      if ((v55 & (v56 >> v57)) == 0) {
        goto LABEL_39;
      }
    }
    return 16391;
  }
LABEL_39:
  a2[8] = 1;
  *a2 = 1;
LABEL_62:
  result = 0;
  a2[9] = 1;
  return result;
}

#pragma GCC visibility pop
