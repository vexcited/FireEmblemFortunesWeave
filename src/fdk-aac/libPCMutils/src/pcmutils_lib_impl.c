#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_get32_plt(_QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_pushForward_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_toolsGetLibInfo_plt(_QWORD);
__int64 nn_codec_FDKreadBits(int*, unsigned int);
__int64 nn_codec_FDKsprintf_plt(_QWORD, const char*, ...);
extern char SdkData_bbbd5c;
extern void (*SdkData_e87a50[778])();
__int64 nn_codec_pcmDmx_Parse(int* a1, unsigned int* a2, __int64 a3, int a4);
__int64 nn_codec_FDKreadBit(unsigned int* a1);
__int64 nn_codec_pcmDmx_GetLibInfo(_DWORD* a1);

__int64 nn_codec_pcmDmx_Parse(int* a1, unsigned int* a2, __int64 a3, int a4)
{
  __int64 result;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  void(__attribute__((noreturn)) * v15)();
  int v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  __int64 v50;
  unsigned int v51;
  bool v52;
  int v53;
  int v54;
  bool v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  __int64 v74;
  int v75;
  int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  char v88;
  int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  char v101;
  unsigned int v102;
  unsigned int v103;
  __int64 v104;
  int v105;
  unsigned int v106;
  unsigned int v107;
  int v108;
  unsigned int v109;
  unsigned int v110;
  int v111;
  bool v112;
  unsigned int v113;
  unsigned int v114;
  int v115;
  bool v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  bool v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  int v124;
  unsigned int v125;
  unsigned int v126;
  int v127;
  int v128;

  result = 7;
  if (a1 == nullptr || a2 == nullptr) {
    return result;
  }
  if (a4 != 0) {
    v8 = 40;
  }
  else {
    v8 = 24;
  }
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, *a2);
    *(_QWORD*)a2 = 0;
    v9 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (v9 < v8) {
      return 13;
    }
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
    *(_QWORD*)a2 = 0;
    v9 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (v9 < v8) {
      return 13;
    }
  }
  v10 = v9;
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, *a2);
    *(_QWORD*)a2 = 0;
    if (v10 > (unsigned int)nn_codec_FDK_getValidBits_plt(a2 + 2)) {
      return 13;
    }
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
    *(_QWORD*)a2 = 0;
    if (v10 > (unsigned int)nn_codec_FDK_getValidBits_plt(a2 + 2)) {
      return 13;
    }
  }
  if (a4 == 0) {
    goto LABEL_22;
  }
  v11 = a2[1];
  v12 = a2[12];
  if (v11 < 0x11) {
    if (v12 == 0) {
      nn_codec_FDK_pushBack_plt(a2 + 2, v11, 0);
      goto LABEL_21;
    }
  }
  else if (v12 == 0) {
    v13 = v11 - 16;
    a2[1] = v11 - 16;
    goto LABEL_23;
  }
  nn_codec_FDK_put_plt(a2 + 2, *a2);
LABEL_21:
  v14 = a2[12];
  *(_QWORD*)a2 = 0;
  nn_codec_FDK_pushForward_plt(a2 + 2, 16, v14);
LABEL_22:
  v13 = a2[1];
LABEL_23:
  v15 = SdkData_e87a50[0];
  v16 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)(*(_BYTE**)0x20LL));
  if (v13 >= 9) {
    v17 = *a2;
    goto LABEL_32;
  }
  v18 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v18) {
    v19 = v18;
  }
  else {
    v19 = 31 - a2[1];
  }
  v20 = *a2 << v19;
  v21 = nn_codec_FDK_get_plt(a2 + 2, v19);
  v22 = a2[1];
  v17 = v20 | v21;
  *a2 = v17;
  v13 = v22 + v19;
  if (v13 < 8) {
    v17 = (unsigned int)((_DWORD)v17 << (8 - v13));
    *(_QWORD*)a2 = (unsigned int)v17;
    if (((unsigned int)v17 & v16) == 0xBC) {
      v23 = 0;
      if (a2[12] != 0) {
        goto LABEL_39;
      }
    LABEL_40:
      nn_codec_FDK_pushBack_plt(a2 + 2, v23, 0);
      goto LABEL_41;
    }
    return 13;
  }
LABEL_32:
  v23 = v13 - 8;
  a2[1] = v13 - 8;
  if ((((unsigned int)v17 >> (v13 - 8)) & v16) != 0xBC) {
    return 13;
  }
  v24 = a2[12];
  if (v23 >= 5) {
    if (v24 == 0) {
      a2[1] = v13 - 12;
      goto LABEL_42;
    }
    goto LABEL_39;
  }
  if (v24 == 0) {
    goto LABEL_40;
  }
LABEL_39:
  nn_codec_FDK_put_plt(a2 + 2, v17);
LABEL_41:
  v25 = a2[12];
  *(_QWORD*)a2 = 0;
  nn_codec_FDK_pushForward_plt(a2 + 2, 4, v25);
LABEL_42:
  v26 = a2[1];
  if (a4 == 0) {
    v34 = a2[12];
    if (v26 < 3) {
      if (v34 == 0) {
        nn_codec_FDK_pushBack_plt(a2 + 2, v26, 0);
      LABEL_67:
        v40 = a2[12];
        *(_QWORD*)a2 = 0;
        nn_codec_FDK_pushForward_plt(a2 + 2, 2, v40);
        v36 = a2[1];
        if (v36 != 0) {
          v35 = *a2;
        }
        else {
          v41 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          if (v41 < 0x20) {
            v36 = v41;
            if (v41 == 0) {
              *((_BYTE*)a1 + 12) = 0;
              v45 = a2[1];
              v46 = a2[12];
              if (v45 >= 5) {
              LABEL_85:
                if (v46 == 0) {
                  v47 = *a2;
                  v32 = 0;
                  v48 = v45 - 4;
                  goto LABEL_107;
                }
                goto LABEL_97;
              }
            LABEL_96:
              if (v46 == 0) {
                nn_codec_FDK_pushBack_plt(a2 + 2, v45, 0);
                goto LABEL_99;
              }
            LABEL_97:
              nn_codec_FDK_put_plt(a2 + 2, *a2);
            LABEL_99:
              v50 = a2[12];
              *(_QWORD*)a2 = 0;
              nn_codec_FDK_pushForward_plt(a2 + 2, 4, v50);
              v32 = 0;
              goto LABEL_100;
            }
            v35 = nn_codec_FDK_get_plt(a2 + 2, v41);
          }
          else {
            v35 = nn_codec_FDK_get32_plt(a2 + 2);
            v36 = 32;
          }
          *a2 = v35;
        }
      LABEL_84:
        a2[1] = v36 - 1;
        *((_BYTE*)a1 + 12) = (v35 >> (v36 - 1)) & 1;
        v45 = a2[1];
        v46 = a2[12];
        if (v45 >= 5) {
          goto LABEL_85;
        }
        goto LABEL_96;
      }
    }
    else if (v34 == 0) {
      v35 = *a2;
      v36 = v26 - 2;
      goto LABEL_84;
    }
    nn_codec_FDK_put_plt(a2 + 2, *a2);
    goto LABEL_67;
  }
  if (v26 > 4 ||
      ((v27 = nn_codec_FDK_getValidBits_plt(a2 + 2), 31 - a2[1] >= v27)
           ? (v28 = v27)
           : (v28 = 31 - a2[1]),
       v29 = *a2 << v28, v30 = nn_codec_FDK_get_plt(a2 + 2, v28), v31 = a2[1],
       *a2 = v29 | v30, v26 = v31 + v28, v31 + v28 > 3)) {
    v32 = v26 - 4;
    a2[1] = v26 - 4;
    if (v26 != 4) {
      v33 = *a2;
      goto LABEL_61;
    }
  }
  else {
    *(_QWORD*)a2 = (v29 | v30) << (4 - v26);
  }
  v37 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v37 >= 0x20) {
    v33 = nn_codec_FDK_get32_plt(a2 + 2);
    v32 = 32;
  LABEL_60:
    *a2 = v33;
  LABEL_61:
    v38 = v32 - 1;
    a2[1] = v32 - 1;
    if (((1 << (v32 - 1)) & v33) != 0) {
      v32 = 24;
    }
    else {
      v32 = 0;
    }
    if (v38 != 0) {
      goto LABEL_65;
    }
    goto LABEL_72;
  }
  v32 = v37;
  if (v37 != 0) {
    v33 = nn_codec_FDK_get_plt(a2 + 2, v37);
    goto LABEL_60;
  }
  v38 = a2[1];
  if (v38 != 0) {
  LABEL_65:
    v39 = *a2;
    goto LABEL_77;
  }
LABEL_72:
  v42 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v42 >= 0x20) {
    v39 = nn_codec_FDK_get32_plt(a2 + 2);
    v38 = 32;
  LABEL_76:
    *a2 = v39;
  LABEL_77:
    v43 = v38 - 1;
    a2[1] = v43;
    if (((1 << v43) & v39) != 0) {
      v32 += 8;
    }
    if (v43 != 0) {
      goto LABEL_80;
    }
  LABEL_88:
    v49 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (v49 < 0x20) {
      v43 = v49;
      if (v49 == 0) {
        goto LABEL_100;
      }
      v44 = nn_codec_FDK_get_plt(a2 + 2, v49);
    }
    else {
      v44 = nn_codec_FDK_get32_plt(a2 + 2);
      v43 = 32;
    }
    *a2 = v44;
    goto LABEL_93;
  }
  v38 = v42;
  if (v42 != 0) {
    v39 = nn_codec_FDK_get_plt(a2 + 2, v42);
    goto LABEL_76;
  }
  v43 = a2[1];
  if (v43 == 0) {
    goto LABEL_88;
  }
LABEL_80:
  v44 = *a2;
LABEL_93:
  a2[1] = v43 - 1;
  if (((v44 >> (v43 - 1)) & 1) != 0) {
    v32 += 8;
  }
LABEL_100:
  v48 = a2[1];
  if (v48 != 0) {
    v47 = *a2;
    goto LABEL_107;
  }
  v51 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v51 >= 0x20) {
    v47 = nn_codec_FDK_get32_plt(a2 + 2);
    v48 = 32;
  LABEL_106:
    *a2 = v47;
  LABEL_107:
    a2[1] = v48 - 1;
    v52 = ((v47 >> (v48 - 1)) & 1) == 0;
    v53 = a2[1];
    if (a4 != 0) {
      goto LABEL_108;
    }
  LABEL_118:
    if (v53 != 0) {
      v61 = *a2;
    }
    else {
      v62 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (v62 < 0x20) {
        v53 = v62;
        if (v62 == 0) {
          goto LABEL_138;
        }
        v61 = nn_codec_FDK_get_plt(a2 + 2, v62);
      }
      else {
        v61 = nn_codec_FDK_get32_plt(a2 + 2);
        v53 = 32;
      }
      *a2 = v61;
    }
    a2[1] = v53 - 1;
    v55 = ((v61 >> (v53 - 1)) & 1) == 0;
    goto LABEL_126;
  }
  v48 = v51;
  if (v51 != 0) {
    v47 = nn_codec_FDK_get_plt(a2 + 2, v51);
    goto LABEL_106;
  }
  v52 = true;
  v53 = a2[1];
  if (a4 == 0) {
    goto LABEL_118;
  }
LABEL_108:
  if (v53 != 0) {
    v54 = v53 - 1;
    v55 = true;
    v56 = *a2 >> v54;
    a2[1] = v54;
    if ((v56 & 1) == 0) {
      goto LABEL_126;
    }
  LABEL_116:
    v60 = 16;
    goto LABEL_127;
  }
  v57 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v57 >= 0x20) {
    v58 = nn_codec_FDK_get32_plt(a2 + 2);
    v59 = 32;
    goto LABEL_115;
  }
  v59 = v57;
  if (v57 == 0) {
  LABEL_138:
    v55 = true;
    goto LABEL_126;
  }
  v58 = nn_codec_FDK_get_plt(a2 + 2, v57);
LABEL_115:
  v54 = v59 - 1;
  v55 = true;
  *a2 = v58;
  a2[1] = v54;
  if (((v58 >> v54) & 1) != 0) {
    goto LABEL_116;
  }
LABEL_126:
  v54 = a2[1];
  v60 = 0;
LABEL_127:
  if (v54 != 0) {
    v63 = *a2;
    goto LABEL_134;
  }
  v64 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v64 >= 0x20) {
    v63 = nn_codec_FDK_get32_plt(a2 + 2);
    v54 = 32;
  LABEL_133:
    *a2 = v63;
  LABEL_134:
    v65 = v54 - 1;
    a2[1] = v65;
    if (((1 << v65) & v63) != 0) {
      v60 += 16;
    }
    if (v65 != 0) {
      goto LABEL_137;
    }
    goto LABEL_140;
  }
  v54 = v64;
  if (v64 != 0) {
    v63 = nn_codec_FDK_get_plt(a2 + 2, v64);
    goto LABEL_133;
  }
  v65 = a2[1];
  if (v65 != 0) {
  LABEL_137:
    v66 = *a2;
    goto LABEL_145;
  }
LABEL_140:
  v67 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v67 >= 0x20) {
    v66 = nn_codec_FDK_get32_plt(a2 + 2);
    v65 = 32;
  LABEL_144:
    *a2 = v66;
  LABEL_145:
    v68 = v65 - 1;
    a2[1] = v68;
    if (((1 << v68) & v66) != 0) {
      v60 += 16;
    }
    if (v68 != 0) {
      goto LABEL_148;
    }
    goto LABEL_150;
  }
  v65 = v67;
  if (v67 != 0) {
    v66 = nn_codec_FDK_get_plt(a2 + 2, v67);
    goto LABEL_144;
  }
  v68 = a2[1];
  if (v68 != 0) {
  LABEL_148:
    v69 = *a2;
    goto LABEL_155;
  }
LABEL_150:
  v70 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v70 < 0x20) {
    v68 = v70;
    if (v70 == 0) {
      v71 = a2[1];
      v72 = a2[12];
      v73 = v71 - v32;
      if (v71 > v32) {
        goto LABEL_158;
      }
      goto LABEL_161;
    }
    v69 = nn_codec_FDK_get_plt(a2 + 2, v70);
  }
  else {
    v69 = nn_codec_FDK_get32_plt(a2 + 2);
    v68 = 32;
  }
  *a2 = v69;
LABEL_155:
  v71 = v68 - 1;
  a2[1] = v68 - 1;
  if (((1 << (v68 - 1)) & v69) != 0) {
    v60 += 16;
  }
  v72 = a2[12];
  v73 = v71 - v32;
  if (v71 > v32) {
  LABEL_158:
    if (v72 == 0) {
      a2[1] = v73;
      goto LABEL_165;
    }
    goto LABEL_162;
  }
LABEL_161:
  if (v72 == 0) {
    nn_codec_FDK_pushBack_plt(a2 + 2, v71, 0);
    goto LABEL_164;
  }
LABEL_162:
  nn_codec_FDK_put_plt(a2 + 2, *a2);
LABEL_164:
  v74 = a2[12];
  *(_QWORD*)a2 = 0;
  nn_codec_FDK_pushForward_plt(a2 + 2, v32, v74);
LABEL_165:
  if (v52) {
    v75 = 0;
    goto LABEL_201;
  }
  v76 = a2[1];
  if (v76 != 0) {
    v77 = *a2;
  }
  else {
    v78 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (v78 < 0x20) {
      v76 = v78;
      if (v78 == 0) {
      LABEL_183:
        nn_codec_FDKreadBits((int*)a2, 3u);
        v75 = 0;
        goto LABEL_184;
      }
      v77 = nn_codec_FDK_get_plt(a2 + 2, v78);
    }
    else {
      v77 = nn_codec_FDK_get32_plt(a2 + 2);
      v76 = 32;
    }
    *a2 = v77;
  }
  v79 = v76 - 1;
  a2[1] = v76 - 1;
  if (((v77 >> (v76 - 1)) & 1) == 0) {
    goto LABEL_183;
  }
  v80 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v15);
  if (v79 > 3) {
    goto LABEL_181;
  }
  v81 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  v82 = 31 - a2[1] >= v81 ? v81 : 31 - a2[1];
  v83 = *a2 << v82;
  v84 = nn_codec_FDK_get_plt(a2 + 2, v82);
  v85 = a2[1];
  v77 = v83 | v84;
  *a2 = v77;
  v79 = v85 + v82;
  if (v79 > 2) {
  LABEL_181:
    v87 = v79 - 3;
    a2[1] = v87;
    v86 = v77 >> v87;
  }
  else {
    v86 = v77 << (3 - v79);
    *(_QWORD*)a2 = v86;
  }
  v88 = v86 & v80;
  v75 = 1;
  *((_BYTE*)a1 + 4) = v88;
LABEL_184:
  v89 = a2[1];
  if (v89 != 0) {
    v90 = *a2;
  }
  else {
    v91 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (v91 < 0x20) {
      v89 = v91;
      if (v91 == 0) {
      LABEL_200:
        nn_codec_FDKreadBits((int*)a2, 3u);
        goto LABEL_201;
      }
      v90 = nn_codec_FDK_get_plt(a2 + 2, v91);
    }
    else {
      v90 = nn_codec_FDK_get32_plt(a2 + 2);
      v89 = 32;
    }
    *a2 = v90;
  }
  v92 = v89 - 1;
  a2[1] = v89 - 1;
  if (((v90 >> (v89 - 1)) & 1) == 0) {
    goto LABEL_200;
  }
  v93 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v15);
  if (v92 > 3) {
    goto LABEL_198;
  }
  v94 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  v95 = 31 - a2[1] >= v94 ? v94 : 31 - a2[1];
  v96 = *a2 << v95;
  v97 = nn_codec_FDK_get_plt(a2 + 2, v95);
  v98 = a2[1];
  v90 = v96 | v97;
  *a2 = v90;
  v92 = v98 + v95;
  if (v92 > 2) {
  LABEL_198:
    v100 = v92 - 3;
    a2[1] = v100;
    v99 = v90 >> v100;
  }
  else {
    v99 = v90 << (3 - v92);
    *(_QWORD*)a2 = v99;
  }
  v101 = v99 & v93;
  v75 = 1;
  *((_BYTE*)a1 + 5) = v101;
LABEL_201:
  v102 = a2[1];
  v103 = a2[12];
  if (v102 <= v60) {
    if (v103 == 0) {
      nn_codec_FDK_pushBack_plt(a2 + 2, v102, 0);
      goto LABEL_207;
    }
  }
  else if (v103 == 0) {
    a2[1] = v102 - v60;
    goto LABEL_208;
  }
  nn_codec_FDK_put_plt(a2 + 2, *a2);
LABEL_207:
  v104 = a2[12];
  *(_QWORD*)a2 = 0;
  nn_codec_FDK_pushForward_plt(a2 + 2, v60, v104);
LABEL_208:
  if (v55) {
    goto LABEL_251;
  }
  v105 = a2[1];
  if (v105 == 0) {
    v106 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (v106 < 0x20) {
      v105 = v106;
      if (v106 == 0) {
        v108 = a2[1];
        if (v108 != 0) {
          goto LABEL_216;
        }
        goto LABEL_218;
      }
      v107 = nn_codec_FDK_get_plt(a2 + 2, v106);
    }
    else {
      v107 = nn_codec_FDK_get32_plt(a2 + 2);
      v105 = 32;
    }
    *a2 = v107;
  }
  v108 = v105 - 1;
  a2[1] = v108;
  if (v108 != 0) {
  LABEL_216:
    v109 = *a2;
    goto LABEL_223;
  }
LABEL_218:
  v110 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v110 < 0x20) {
    v108 = v110;
    if (v110 == 0) {
      v111 = a2[1];
      v112 = true;
      if (v111 != 0) {
        goto LABEL_224;
      }
      goto LABEL_226;
    }
    v109 = nn_codec_FDK_get_plt(a2 + 2, v110);
  }
  else {
    v109 = nn_codec_FDK_get32_plt(a2 + 2);
    v108 = 32;
  }
  *a2 = v109;
LABEL_223:
  v111 = v108 - 1;
  a2[1] = v111;
  v112 = ((v109 >> v111) & 1) == 0;
  if (v111 != 0) {
  LABEL_224:
    v113 = *a2;
    goto LABEL_231;
  }
LABEL_226:
  v114 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v114 < 0x20) {
    v111 = v114;
    if (v114 == 0) {
      v115 = a2[1];
      v116 = true;
      if (v115 != 0) {
        goto LABEL_232;
      }
      goto LABEL_234;
    }
    v113 = nn_codec_FDK_get_plt(a2 + 2, v114);
  }
  else {
    v113 = nn_codec_FDK_get32_plt(a2 + 2);
    v111 = 32;
  }
  *a2 = v113;
LABEL_231:
  v115 = v111 - 1;
  a2[1] = v115;
  v116 = ((v113 >> v115) & 1) == 0;
  if (v115 != 0) {
  LABEL_232:
    v117 = *a2;
    goto LABEL_239;
  }
LABEL_234:
  v118 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v118 >= 0x20) {
    v117 = nn_codec_FDK_get32_plt(a2 + 2);
    v115 = 32;
  LABEL_238:
    *a2 = v117;
  LABEL_239:
    v119 = v115 - 1;
    a2[1] = v115 - 1;
    v120 = ((v117 >> (v115 - 1)) & 1) == 0;
    if ((unsigned int)(v115 - 1) > 4) {
      goto LABEL_246;
    }
    goto LABEL_240;
  }
  v115 = v118;
  if (v118 != 0) {
    v117 = nn_codec_FDK_get_plt(a2 + 2, v118);
    goto LABEL_238;
  }
  v119 = a2[1];
  v120 = true;
  if (v119 <= 4) {
  LABEL_240:
    v121 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (31 - a2[1] >= v121) {
      v122 = v121;
    }
    else {
      v122 = 31 - a2[1];
    }
    v123 = *a2 << v122;
    v124 = nn_codec_FDK_get_plt(a2 + 2, v122);
    v125 = a2[1];
    *a2 = v123 | v124;
    v119 = v125 + v122;
    if (v119 <= 3) {
      v126 = 0;
      *a2 = (v123 | v124) << (4 - v119);
      goto LABEL_247;
    }
  }
LABEL_246:
  v126 = v119 - 4;
LABEL_247:
  a2[1] = v126;
  if (v112) {
    if (v116) {
      goto LABEL_249;
    }
  LABEL_261:
    *((_BYTE*)a1 + 10) = nn_codec_FDKreadBits((int*)a2, 7u);
    nn_codec_FDKreadBit(a2);
    *((_BYTE*)a1 + 9) = nn_codec_FDKreadBits((int*)a2, 7u);
    nn_codec_FDKreadBit(a2);
    v75 = 1;
    if (v120) {
      goto LABEL_251;
    }
    goto LABEL_250;
  }
  *((_BYTE*)a1 + 6) = nn_codec_FDKreadBits((int*)a2, 3u);
  *((_BYTE*)a1 + 7) = nn_codec_FDKreadBits((int*)a2, 3u);
  nn_codec_FDKreadBits((int*)a2, 2u);
  v75 = 1;
  if (!v116) {
    goto LABEL_261;
  }
LABEL_249:
  if (!v120) {
  LABEL_250:
    *((_BYTE*)a1 + 8) = nn_codec_FDKreadBits((int*)a2, 4u);
    nn_codec_FDKreadBits((int*)a2, 4u);
    v75 = 1;
  }
LABEL_251:
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, *a2);
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
  }
  *(_QWORD*)a2 = 0;
  v127 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v127 <= -1) {
    result = 13;
  }
  else {
    result = 0;
  }
  if (v75 != 0 && (v127 & 0x80000000) == 0) {
    v128 = *a1;
    a1[4] = 0;
    *a1 = v128 | 1;
  }
  return result;
}

__int64 nn_codec_FDKreadBit(unsigned int* a1)
{
  int v1;
  unsigned int v3;
  unsigned int v4;

  v1 = a1[1];
  if (v1 != 0) {
    v3 = *a1;
  LABEL_8:
    a1[1] = v1 - 1;
    return (v3 >> (v1 - 1)) & 1;
  }
  v4 = nn_codec_FDK_getValidBits_plt(a1 + 2);
  if (v4 >= 0x20) {
    v3 = nn_codec_FDK_get32_plt(a1 + 2);
    v1 = 32;
  LABEL_7:
    *a1 = v3;
    goto LABEL_8;
  }
  v1 = v4;
  if (v4 != 0) {
    v3 = nn_codec_FDK_get_plt(a1 + 2, v4);
    goto LABEL_7;
  }
  return 0;
}

__int64 nn_codec_pcmDmx_GetLibInfo(_DWORD* a1)
{
  unsigned int v2;
  _DWORD* v4;

  if (a1 == nullptr) {
    return 8;
  }
  if (a1[6] != 0) {
    if (a1[24] != 0) {
      if (a1[42] != 0) {
        if (a1[60] != 0) {
          if (a1[78] != 0) {
            if (a1[96] != 0) {
              if (a1[114] != 0) {
                if (a1[132] != 0) {
                  if (a1[150] != 0) {
                    if (a1[168] != 0) {
                      if (a1[186] != 0) {
                        if (a1[204] != 0) {
                          if (a1[222] != 0) {
                            if (a1[240] != 0) {
                              if (a1[258] != 0) {
                                if (a1[276] != 0) {
                                  if (a1[294] != 0) {
                                    if (a1[312] != 0) {
                                      if (a1[330] != 0) {
                                        if (a1[348] != 0) {
                                          if (a1[366] != 0) {
                                            if (a1[384] != 0) {
                                              if (a1[402] != 0) {
                                                if (a1[420] != 0) {
                                                  if (a1[438] != 0) {
                                                    if (a1[456] != 0) {
                                                      if (a1[474] != 0) {
                                                        if (a1[492] != 0) {
                                                          if (a1[510] != 0) {
                                                            if (a1[528] != 0) {
                                                              if (a1[546] !=
                                                                  0) {
                                                                if (a1[564] !=
                                                                    0) {
                                                                  return 5;
                                                                }
                                                                v2 = 31;
                                                              }
                                                              else {
                                                                v2 = 30;
                                                              }
                                                            }
                                                            else {
                                                              v2 = 29;
                                                            }
                                                          }
                                                          else {
                                                            v2 = 28;
                                                          }
                                                        }
                                                        else {
                                                          v2 = 27;
                                                        }
                                                      }
                                                      else {
                                                        v2 = 26;
                                                      }
                                                    }
                                                    else {
                                                      v2 = 25;
                                                    }
                                                  }
                                                  else {
                                                    v2 = 24;
                                                  }
                                                }
                                                else {
                                                  v2 = 23;
                                                }
                                              }
                                              else {
                                                v2 = 22;
                                              }
                                            }
                                            else {
                                              v2 = 21;
                                            }
                                          }
                                          else {
                                            v2 = 20;
                                          }
                                        }
                                        else {
                                          v2 = 19;
                                        }
                                      }
                                      else {
                                        v2 = 18;
                                      }
                                    }
                                    else {
                                      v2 = 17;
                                    }
                                  }
                                  else {
                                    v2 = 16;
                                  }
                                }
                                else {
                                  v2 = 15;
                                }
                              }
                              else {
                                v2 = 14;
                              }
                            }
                            else {
                              v2 = 13;
                            }
                          }
                          else {
                            v2 = 12;
                          }
                        }
                        else {
                          v2 = 11;
                        }
                      }
                      else {
                        v2 = 10;
                      }
                    }
                    else {
                      v2 = 9;
                    }
                  }
                  else {
                    v2 = 8;
                  }
                }
                else {
                  v2 = 7;
                }
              }
              else {
                v2 = 6;
              }
            }
            else {
              v2 = 5;
            }
          }
          else {
            v2 = 4;
          }
        }
        else {
          v2 = 3;
        }
      }
      else {
        v2 = 2;
      }
    }
    else {
      v2 = 1;
    }
  }
  else {
    v2 = 0;
  }
  v4 = &a1[18 * v2];
  *((_QWORD*)v4 + 3) = 0x20402000000001FLL;
  nn_codec_FDKsprintf_plt(v4 + 9, "%d.%d.%d", 2, 4, 2);
  *((_QWORD*)v4 + 1) = &SdkData_bbbd5c;
  *((_QWORD*)v4 + 2) = &SdkData_bbbd5c;
  *(_QWORD*)v4 = "PCM Downmix Lib";
  v4[8] = 27;
  nn_codec_FDK_toolsGetLibInfo_plt(a1);
  return 0;
}

#pragma GCC visibility pop
