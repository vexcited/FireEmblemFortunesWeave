#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
extern _BYTE SdkData_c2221b[5];
extern unsigned __int8 SdkData_c22218[3];
extern void (*SdkData_e87a50[778])();
__int64 nn_codec_CTns_ReadDataPresentFlag(__int64 result, __int64 a2);
__int64 nn_codec_CTns_Read(unsigned int* a1, _BYTE* a2, __int64 a3);

__int64 nn_codec_CTns_ReadDataPresentFlag(__int64 result, __int64 a2)
{
  _DWORD* v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;

  v3 = (_DWORD*)result;
  v4 = *(_DWORD*)(result + 4);
  v5 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)((__int64*)0x4LL));
  if (v4 < 2) {
    v7 = nn_codec_FDK_getValidBits_plt(result + 8);
    if (31 - v3[1] >= v7) {
      v8 = v7;
    }
    else {
      v8 = 31 - v3[1];
    }
    v9 = *v3 << v8;
    result = nn_codec_FDK_get_plt(v3 + 2, v8);
    v10 = v3[1];
    v6 = v9 | result;
    *v3 = v9 | result;
    v4 = v10 + v8;
    if (v4 == 0) {
      v12 = 2 * v6;
      *(_QWORD*)v3 = v12;
      goto LABEL_8;
    }
  }
  else {
    v6 = *(_DWORD*)result;
  }
  v11 = v4 - 1;
  v3[1] = v11;
  v12 = v6 >> v11;
LABEL_8:
  *(_BYTE*)(a2 + 608) = v12 & v5;
  return result;
}

__int64 nn_codec_CTns_Read(unsigned int* a1, _BYTE* a2, __int64 a3)
{
  int v3;
  void(__attribute__((noreturn)) * v4)();
  bool v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int8 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  _BYTE* v38;
  int v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned __int8 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  char v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  _BYTE* v68;
  int v69;
  signed int v70;
  int v71;
  char v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  char v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  __int64 v88;
  _BYTE* v89;
  int v90;
  unsigned int v91;
  _BYTE* v92;
  __int64 v93;
  int v94;
  char v95;
  int v96;
  int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  int v101;
  __int64 v102;
  _BYTE* v103;
  int v104;
  unsigned int* v105;

  if (a2[608] != 0) {
    v3 = *(unsigned __int8*)(a3 + 11);
    v93 = 0;
    v4 = SdkData_e87a50[0];
    v92 = a2;
    v105 = a1;
    v5 = v3 == 2;
    if (v3 == 2) {
      v6 = 1;
    }
    else {
      v6 = 2;
    }
    v89 = a2 + 600;
    if (v3 == 2) {
      v7 = 3;
    }
    else {
      v7 = 5;
    }
    if (v3 == 2) {
      v8 = 4;
    }
    else {
      v8 = 6;
    }
    v98 = v7;
    v99 = v8;
    v90 = *((_DWORD*)SdkData_e87a50[0] + v6);
    v91 = v6;
    v96 = (unsigned __int8)*(_DWORD*)((char*)SdkData_e87a50[0] +
                                      (unsigned __int64)((__int64*)0x4LL));
    v97 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                     (unsigned __int64)((__int64*)0x4LL));
    v9 = 8;
    if (!v5) {
      v9 = 1;
    }
    v88 = v9;
    while (1) {
      v10 = a1[1];
      if (v10 > v6) {
        break;
      }
      v12 = nn_codec_FDK_getValidBits_plt(v105 + 2);
      if (31 - v105[1] >= v12) {
        v14 = v12;
      }
      else {
        v14 = 31 - v105[1];
      }
      v13 = *v105;
      v11 = (v13 << v14) | nn_codec_FDK_get_plt(v105 + 2, v14);
      a1 = v105;
      v15 = v105[1];
      *v105 = v11;
      v10 = v15 + v14;
      if (v6 <= v10) {
        goto LABEL_22;
      }
      v16 = v11 << (v6 - v10);
      *(_QWORD*)v105 = v16;
    LABEL_23:
      if (((unsigned __int8)v16 & v90 & 0xFC) != 0) {
        v18 = 3;
      }
      else {
        v18 = v16 & v90;
      }
      v89[v93] = v18;
      if (v18 != 0) {
        v19 = a1[1];
        if (v19 >= 2) {
          v20 = *a1;
          goto LABEL_33;
        }
        v21 = nn_codec_FDK_getValidBits_plt(v105 + 2);
        if (31 - v105[1] >= v21) {
          v23 = v21;
        }
        else {
          v23 = 31 - v105[1];
        }
        v22 = *v105;
        v20 = (v22 << v23) | nn_codec_FDK_get_plt(v105 + 2, v23);
        a1 = v105;
        v24 = v105[1];
        *v105 = v20;
        v19 = v24 + v23;
        if (v19 != 0) {
        LABEL_33:
          v25 = a3;
          v26 = v19 - 1;
          v27 = v20 >> v26;
          a1[1] = v26;
        }
        else {
          v25 = a3;
          v27 = 2 * v20;
          *(_QWORD*)v105 = v27;
        }
        v28 = *(unsigned __int8*)(v25 + 14);
        v29 = 0;
        v100 = *((_DWORD*)v4 + v8);
        v94 = (v27 & v96) + 1;
        v95 = (v27 & v97) + 3;
        v103 = v92;
        while (2) {
          v30 = a1[1];
          if (v30 > (unsigned int)v8) {
            v31 = *a1;
            goto LABEL_43;
          }
          v32 = nn_codec_FDK_getValidBits_plt(v105 + 2);
          if (31 - v105[1] >= v32) {
            v34 = v32;
          }
          else {
            v34 = 31 - v105[1];
          }
          v33 = *v105;
          v31 = (v33 << v34) | nn_codec_FDK_get_plt(v105 + 2, v34);
          a1 = v105;
          v35 = v105[1];
          *v105 = v31;
          v30 = v35 + v34;
          if ((unsigned int)v8 <= v30) {
          LABEL_43:
            v37 = v30 - v8;
            a1[1] = v37;
            v36 = v31 >> v37;
          }
          else {
            v36 = v31 << (v8 - v30);
            *(_QWORD*)v105 = v36;
          }
          v102 = v29;
          v38 = &a2[75 * v93 + 25 * v29];
          v38[21] = v28;
          if ((v36 & (unsigned __int8)v100) <= (unsigned __int8)v28) {
            v39 = v28 - (v36 & v100);
          }
          else {
            v39 = 0;
          }
          v38[20] = v39;
          v101 = v39;
          v40 = *((_DWORD*)v4 + v7);
          v41 = a1[1];
          if (v41 > (unsigned int)v7) {
            v42 = *a1;
            goto LABEL_54;
          }
          v43 = nn_codec_FDK_getValidBits_plt(v105 + 2);
          if (31 - v105[1] >= v43) {
            v45 = v43;
          }
          else {
            v45 = 31 - v105[1];
          }
          v44 = *v105;
          v42 = (v44 << v45) | nn_codec_FDK_get_plt(v105 + 2, v45);
          a1 = v105;
          v46 = v105[1];
          *v105 = v42;
          v41 = v46 + v45;
          if ((unsigned int)v7 <= v41) {
          LABEL_54:
            v48 = v41 - v7;
            a1[1] = v48;
            v47 = v42 >> v48;
          }
          else {
            v47 = v42 << (v7 - v41);
            *(_QWORD*)v105 = v47;
          }
          v49 = v47 & v40;
          if (v49 <= 0x14u) {
            LOBYTE(v50) = v49;
          }
          else {
            LOBYTE(v50) = 20;
          }
          v38[24] = v50;
          if ((_BYTE)v50 != 0) {
            v51 = a1[1];
            if (v51 >= 2) {
              v52 = *a1;
              goto LABEL_65;
            }
            v53 = nn_codec_FDK_getValidBits_plt(v105 + 2);
            if (31 - v105[1] >= v53) {
              v55 = v53;
            }
            else {
              v55 = 31 - v105[1];
            }
            v54 = *v105;
            v52 = (v54 << v55) | nn_codec_FDK_get_plt(v105 + 2, v55);
            a1 = v105;
            v56 = v105[1];
            *v105 = v52;
            v51 = v56 + v55;
            if (v51 != 0) {
            LABEL_65:
              v57 = v51 - 1;
              a1[1] = v57;
              v58 = v52 >> v57;
            }
            else {
              v58 = 2 * v52;
              *(_QWORD*)v105 = v58;
            }
            if ((v58 & v97) != 0) {
              v59 = -1;
            }
            else {
              v59 = 1;
            }
            v38[22] = v59;
            v60 = a1[1];
            if (v60 >= 2) {
              v61 = *a1;
              goto LABEL_75;
            }
            v62 = nn_codec_FDK_getValidBits_plt(v105 + 2);
            if (31 - v105[1] >= v62) {
              v64 = v62;
            }
            else {
              v64 = 31 - v105[1];
            }
            v63 = *v105;
            v61 = (v63 << v64) | nn_codec_FDK_get_plt(v105 + 2, v64);
            a1 = v105;
            v65 = v105[1];
            *v105 = v61;
            v60 = v65 + v64;
            if (v60 != 0) {
            LABEL_75:
              v66 = v60 - 1;
              a1[1] = v66;
              v67 = v61 >> v66;
            }
            else {
              v67 = 2 * v61;
              *(_QWORD*)v105 = v67;
            }
            v68 = v103;
            v50 = (unsigned __int8)v50;
            v69 = v96 & v67;
            v38[23] = v95;
            v70 = v94 - (v96 & v67);
            v71 = SdkData_c22218[v70];
            v72 = SdkData_c2221b[v70];
            v104 = v71;
            while (2) {
              v78 = a1[1];
              v79 = (char)v38[23] - v69;
              v80 = *((_DWORD*)v4 + v79);
              if (v78 > v79) {
                v73 = *a1;
              }
              else {
                v81 = nn_codec_FDK_getValidBits_plt(v105 + 2);
                if (31 - v105[1] >= v81) {
                  v83 = v81;
                }
                else {
                  v83 = 31 - v105[1];
                }
                v82 = *v105;
                v73 = (v82 << v83) | nn_codec_FDK_get_plt(v105 + 2, v83);
                a1 = v105;
                v84 = v105[1];
                *v105 = v73;
                v78 = v84 + v83;
                if (v79 > v78) {
                  v71 = v104;
                  v75 = v73 << (v79 - v78);
                  *(_QWORD*)v105 = v75;
                LABEL_79:
                  v76 = v75 & v80;
                  if ((v76 & v71) != 0) {
                    v77 = v72;
                  }
                  else {
                    v77 = 0;
                  }
                  --v50;
                  *v68++ = v77 | v76;
                  if (v50 == 0) {
                    goto LABEL_35;
                  }
                  continue;
                }
                v71 = v104;
              }
              break;
            }
            v74 = v78 - v79;
            v75 = v73 >> v74;
            a1[1] = v74;
            goto LABEL_79;
          }
        LABEL_35:
          v28 = v101;
          v8 = v99;
          v7 = v98;
          v29 = v102 + 1;
          v103 += 25;
          if (v102 + 1 == v18) {
            break;
          }
          continue;
        }
      }
      v6 = v91;
      v92 += 75;
      if (++v93 == v88) {
        a2[609] = 1;
        return 0;
      }
    }
    v11 = *a1;
  LABEL_22:
    v17 = v10 - v6;
    a1[1] = v17;
    v16 = v11 >> v17;
    goto LABEL_23;
  }
  return 0;
}

#pragma GCC visibility pop
