#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 toolsEvaluateBlock(__int64 a1, __int64 a2, _BYTE* a3,
                           unsigned __int64 a4, _QWORD* a5);
__int64 toolsSetFrameCFA(__int64 a1, __int64 a2, unsigned int a3, int a4);
unsigned int* tools_shared_readelf_2250c0(__int64 a1, unsigned int a2);
__int64 tools_shared_readelf_225160(__int64 a1, unsigned int a2,
                                    unsigned int a3, __int64 a4, int a5);

__int64 toolsEvaluateBlock(__int64 a1, __int64 a2, _BYTE* a3,
                           unsigned __int64 a4, _QWORD* a5)
{
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  __int64 result;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  unsigned __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  void (*v43)(__int64, const char*, __int64, const char*, const char*, ...);
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  void (*v50)(__int64, const char*, __int64, const char*, const char*, ...);
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  unsigned int v70;
  unsigned __int64 v71;
  bool v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int8* v83;
  int v84;
  int v85;
  unsigned __int8* v86;
  int v87;
  int v88;
  unsigned __int8* v89;
  int v90;
  int v91;
  unsigned __int8* v92;
  int v93;
  int v94;
  int v95;
  __int64 (*v96)(__int64, __int64);
  unsigned int v97;
  __int64 v98;
  unsigned int v99;
  unsigned int v100;
  unsigned __int64 v101;
  bool v102;
  __int64 v103;
  __int64 v104;
  void (*v105)(__int64, const char*, __int64, const char*, const char*, _QWORD);
  int v106;
  __int64 (*v107)(__int64, __int64);
  int v108;
  unsigned __int64 v109;
  int v110;
  _QWORD v111[256];
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;

  memset_plt(v111, 0, 2040);
  v10 = *(unsigned int*)(a2 + 92);
  v11 = 255;
  v112 = 255;
  v111[255] = v10;
  if ((unsigned __int64)a3 >= a4) {
  LABEL_161:
    *a5 = v111[v11];
    return 0;
  }
  v12 = a3;
  do {
    v15 = *v12++;
    v14 = v15;
    v16 = (unsigned int)(v15 - 48);
    if ((unsigned int)v16 <= 0x1F) {
      v13 = v112;
      if (v112 == 0) {
        return 1;
      }
    LABEL_4:
      v112 = v13 - 1;
      v111[v13 - 1] = v16;
      goto LABEL_5;
    }
    if ((unsigned int)(v14 - 112) > 0x1F) {
      if ((unsigned int)(v14 - 80) <= 0x1F) {
        result = (*(__int64 (**)(__int64, __int64))(a1 + 24))(a1, a2);
        if ((_DWORD)result != 0) {
          return result;
        }
        v13 = v112;
        if (v112 == 0) {
          return 1;
        }
        v16 = v114;
        goto LABEL_4;
      }
      result = 0;
      switch (v14) {
      case 3:
        result = (*(__int64 (**)(_QWORD, unsigned __int64*))(a1 + 40))(
            *(_QWORD*)v12, &v114);
        if ((_DWORD)result != 0) {
          return result;
        }
        v43 = *(void (**)(__int64, const char*, __int64, const char*,
                          const char*, ...))(a1 + 48);
        if (v43 != nullptr) {
          v43(40,
              "C:/dvs/git/dirty/git-master_hos/gpu/drv/drivers/gpgpu/cuda/src/"
              "devtools/common/tools_shared/tools_shared_readelf.c",
              612, "toolsEvaluateBlock", "DW_OP_addr 0x%016lx\n", v114);
        }
        v27 = v112;
        if (v112 == 0) {
          return 1;
        }
        v28 = v114;
        goto LABEL_48;
      case 8:
        v56 = v112;
        if (v112 == 0) {
          return 1;
        }
        v57 = (unsigned __int8)a3[1];
        goto LABEL_68;
      case 9:
        v56 = v112;
        if (v112 == 0) {
          return 1;
        }
        v57 = (char)a3[1];
      LABEL_68:
        v12 = a3 + 2;
        v112 = v56 - 1;
        v111[v56 - 1] = v57;
        break;
      case 10:
        v44 = v112;
        if (v112 == 0) {
          return 1;
        }
        v45 = *(unsigned __int16*)(a3 + 1);
        goto LABEL_74;
      case 11:
        v44 = v112;
        if (v112 == 0) {
          return 1;
        }
        v45 = *(__int16*)(a3 + 1);
      LABEL_74:
        v12 = a3 + 3;
        v112 = v44 - 1;
        v111[v44 - 1] = v45;
        break;
      case 12:
        v54 = v112;
        if (v112 == 0) {
          return 1;
        }
        v55 = *(unsigned int*)(a3 + 1);
        goto LABEL_79;
      case 13:
        v54 = v112;
        if (v112 == 0) {
          return 1;
        }
        v55 = *(int*)(a3 + 1);
      LABEL_79:
        v12 = a3 + 5;
        v112 = v54 - 1;
        v111[v54 - 1] = v55;
        break;
      case 14:
      case 15:
        v27 = v112;
        if (v112 == 0) {
          return 1;
        }
        v28 = *(_QWORD*)(a3 + 1);
      LABEL_48:
        v12 = a3 + 9;
        v112 = v27 - 1;
        v111[v27 - 1] = v28;
        break;
      case 16:
        v58 = *v12 & 0x7F;
        if ((*v12 & 0x80) == 0) {
          v12 = a3;
          goto LABEL_150;
        }
        v89 = a3 + 2;
        v90 = (char)a3[2];
        v58 |= (unsigned __int64)(v90 & 0x7F) << 7;
        if (v90 < 0) {
          v12 = a3 + 3;
          v91 = (char)a3[3];
          v58 |= (unsigned __int64)(v91 & 0x7F) << 14;
          if ((v91 & 0x80000000) == 0) {
            goto LABEL_127;
          }
          v89 = a3 + 4;
          v108 = (char)a3[4];
          v58 |= (unsigned __int64)(v108 & 0x7F) << 21;
          if (v108 < 0) {
            v58 = v58 & 0xFFFFFFF80FFFFFFFLL |
                  ((unsigned __int64)(a3[5] & 0x7F) << 28);
          LABEL_127:
            v12 = v89;
          }
        }
      LABEL_150:
        v109 = v112;
        if (v112 == 0) {
          return 1;
        }
        v12 += 10;
        --v112;
        v111[v109 - 1] = v58;
        break;
      case 17:
        v12 = a3 + 9;
        v68 = 0;
        v69 = 0;
        do {
          v70 = *(v12 - 8);
          ++v12;
          v71 = (unsigned __int64)(v70 & 0x7F) << v68;
          v68 += 7;
          v69 |= v71;
        } while ((v70 & 0x80) != 0);
        if (v112 == 0) {
          return 1;
        }
        v72 = v70 < 0x40 || v68 > 0x1F;
        v73 = -1LL << v68;
        if (v72) {
          v73 = 0;
        }
        v52 = v69 | v73;
        v63 = v112 - 1;
        goto LABEL_102;
      case 18:
        v53 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v31 = v111[v112];
        v114 = v31;
        if (v112 == 0) {
          return 1;
        }
        goto LABEL_106;
      case 19:
        v59 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        ++v112;
        v114 = v111[v59];
        break;
      case 20:
        v53 = v112;
        if (v112 + 1 > 0xFF) {
          return 1;
        }
        v31 = v111[v112 + 1];
        v114 = v31;
        if (v112 == 0) {
          return 1;
        }
        goto LABEL_106;
      case 21:
        v53 = v112;
        v74 = v112 + (unsigned __int8)a3[1];
        if (v74 > 0xFF) {
          return 1;
        }
        v31 = v111[v74];
        v114 = v31;
        if (v112 == 0) {
          return 1;
        }
        v12 = a3 + 2;
      LABEL_106:
        v30 = v53 - 1;
        goto LABEL_154;
      case 22:
        v60 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v61 = ++v112;
        v62 = v111[v60];
        v114 = v62;
        if (v60 == 255) {
          return 1;
        }
        v112 = v60 + 2;
        v52 = v111[v61];
        v112 = v61;
        v111[v61] = v62;
        v49 = v112;
        v113 = v52;
        if (v112 == 0) {
          return 1;
        }
        goto LABEL_85;
      case 23:
        v75 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        ++v112;
        v76 = v111[v75];
        v114 = v76;
        if (v75 == 255) {
          return 1;
        }
        v77 = v75 + 2;
        v112 = v75 + 2;
        v78 = v111[v75 + 1];
        v113 = v78;
        if (v75 > 0xFD) {
          return 1;
        }
        v112 = v75 + 3;
        v79 = v111[v77];
        v112 = v77;
        v111[v77] = v78;
        if (v112 == 0) {
          return 1;
        }
        v111[--v112] = v76;
        v80 = v112;
        if (v112 == 0) {
          return 1;
        }
        goto LABEL_148;
      case 25:
        v30 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v114 = v111[v112];
        if ((v114 & 0x8000000000000000LL) == 0) {
          break;
        }
        ++v112;
        goto LABEL_109;
      case 26:
        v32 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v33 = ++v112;
        v34 = v111[v32];
        v114 = v34;
        if (v32 == 255) {
          return 1;
        }
        v112 = v32 + 2;
        v113 = v111[v33];
        v35 = v34 & v113;
        goto LABEL_92;
      case 27:
        v66 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v33 = ++v112;
        v67 = v111[v66];
        v114 = v67;
        if (v66 == 255) {
          return 1;
        }
        v112 = v66 + 2;
        v113 = v111[v33];
        v35 = (__int64)v113 / v67;
        goto LABEL_92;
      case 28:
        v40 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v33 = ++v112;
        v41 = v111[v40];
        v114 = v41;
        if (v40 == 255) {
          return 1;
        }
        v112 = v40 + 2;
        v113 = v111[v33];
        v35 = v113 - v41;
        goto LABEL_92;
      case 29:
        v38 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v33 = ++v112;
        v39 = v111[v38];
        v114 = v39;
        if (v38 == 255) {
          return 1;
        }
        v112 = v38 + 2;
        v113 = v111[v33];
        v35 = v113 % v39;
        goto LABEL_92;
      case 30:
        v64 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v33 = ++v112;
        v65 = v111[v64];
        v114 = v65;
        if (v64 == 255) {
          return 1;
        }
        v112 = v64 + 2;
        v113 = v111[v33];
        v35 = v65 * v113;
        goto LABEL_92;
      case 31:
        v30 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        ++v112;
      LABEL_109:
        v114 = v111[v30];
        v31 = -(__int64)v114;
        goto LABEL_154;
      case 32:
        v30 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        ++v112;
        v114 = v111[v30];
        v31 = ~v114;
        goto LABEL_154;
      case 33:
        v36 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v33 = ++v112;
        v37 = v111[v36];
        v114 = v37;
        if (v36 == 255) {
          return 1;
        }
        v112 = v36 + 2;
        v113 = v111[v33];
        v35 = v37 | v113;
      LABEL_92:
        v112 = v33;
        v111[v33] = v35;
        break;
      case 34:
        v46 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        v47 = ++v112;
        v48 = v111[v46];
        v114 = v48;
        if (v46 == 255) {
          return 1;
        }
        v49 = v46 + 2;
        v50 = *(void (**)(__int64, const char*, __int64, const char*,
                          const char*, ...))(a1 + 48);
        v112 = v49;
        v51 = v111[v47];
        v113 = v51;
        if (v50 != nullptr) {
          v50(40,
              "C:/dvs/git/dirty/git-master_hos/gpu/drv/drivers/gpgpu/cuda/src/"
              "devtools/common/tools_shared/tools_shared_readelf.c",
              805, "toolsEvaluateBlock",
              "DW_OP_plus 0x%016lx + 0x%016lx = 0x%016lx\n", v48, v51,
              v51 + v48);
          v49 = v112;
          if (v112 == 0) {
            return 1;
          }
        }
        v52 = v114 + v113;
      LABEL_85:
        v63 = v49 - 1;
      LABEL_102:
        v112 = v63;
        v111[v63] = v52;
        break;
      case 35:
        v30 = v112;
        if (v112 > 0xFF) {
          return 1;
        }
        ++v112;
        v81 = v111[v30];
        v114 = v81;
        v82 = *v12 & 0x7F;
        if ((*v12 & 0x80) == 0) {
          v12 = a3;
          goto LABEL_153;
        }
        v92 = a3 + 2;
        v93 = (char)a3[2];
        v82 |= (unsigned __int64)(v93 & 0x7F) << 7;
        if (v93 < 0) {
          v12 = a3 + 3;
          v94 = (char)a3[3];
          v82 |= (unsigned __int64)(v94 & 0x7F) << 14;
          if ((v94 & 0x80000000) == 0) {
            goto LABEL_130;
          }
          v92 = a3 + 4;
          v110 = (char)a3[4];
          v82 |= (unsigned __int64)(v110 & 0x7F) << 21;
          if (v110 < 0) {
            v82 = v82 & 0xFFFFFFF80FFFFFFFLL |
                  ((unsigned __int64)(a3[5] & 0x7F) << 28);
          LABEL_130:
            v12 = v92;
          }
        }
      LABEL_153:
        v31 = v81 + v82;
        v12 += 2;
        v113 = v82;
      LABEL_154:
        v112 = v30;
        v111[v30] = v31;
        break;
      case 144:
        v42 = *v12 & 0x7F;
        if ((*v12 & 0x80) == 0) {
          v12 = a3;
          goto LABEL_145;
        }
        v86 = a3 + 2;
        v87 = (char)a3[2];
        v42 |= (unsigned __int64)(v87 & 0x7F) << 7;
        if (v87 < 0) {
          v12 = a3 + 3;
          v88 = (char)a3[3];
          v42 |= (unsigned __int64)(v88 & 0x7F) << 14;
          if ((v88 & 0x80000000) == 0) {
            goto LABEL_124;
          }
          v86 = a3 + 4;
          v106 = (char)a3[4];
          v42 |= (unsigned __int64)(v106 & 0x7F) << 21;
          if (v106 < 0) {
            v42 = v42 & 0xFFFFFFF80FFFFFFFLL |
                  ((unsigned __int64)(a3[5] & 0x7F) << 28);
          LABEL_124:
            v12 = v86;
          }
        }
      LABEL_145:
        v107 = *(__int64 (**)(__int64, __int64))(a1 + 24);
        v114 = v42;
        result = v107(a1, a2);
        if ((_DWORD)result != 0) {
          return result;
        }
        v80 = v112;
        if (v112 == 0) {
          return 1;
        }
        v79 = v113;
        v12 += 2;
      LABEL_148:
        v112 = v80 - 1;
        v111[v80 - 1] = v79;
        break;
      case 146:
        v29 = *v12 & 0x7F;
        if ((*v12 & 0x80) == 0) {
          v12 = a3;
          goto LABEL_132;
        }
        v83 = a3 + 2;
        v84 = (char)a3[2];
        v29 |= (unsigned __int64)(v84 & 0x7F) << 7;
        if (v84 < 0) {
          v12 = a3 + 3;
          v85 = (char)a3[3];
          v29 |= (unsigned __int64)(v85 & 0x7F) << 14;
          if ((v85 & 0x80000000) == 0) {
            goto LABEL_121;
          }
          v83 = a3 + 4;
          v95 = (char)a3[4];
          v29 |= (unsigned __int64)(v95 & 0x7F) << 21;
          if (v95 < 0) {
            v29 = v29 & 0xFFFFFFF80FFFFFFFLL |
                  ((unsigned __int64)(a3[5] & 0x7F) << 28);
          LABEL_121:
            v12 = v83;
          }
        }
      LABEL_132:
        v96 = *(__int64 (**)(__int64, __int64))(a1 + 24);
        v114 = v29;
        result = v96(a1, a2);
        if ((_DWORD)result != 0) {
          return result;
        }
        v12 += 2;
        v97 = 0;
        v98 = 0;
        do {
          v100 = *v12++;
          v99 = v100;
          v101 = (unsigned __int64)(v100 & 0x7F) << v97;
          v97 += 7;
          v98 |= v101;
        } while ((v100 & 0x80) != 0);
        v102 = v99 < 0x40 || v97 > 0x1F;
        v103 = -1LL << v97;
        if (v102) {
          v104 = 0;
        }
        else {
          v104 = v103;
        }
        if (v112 == 0) {
          return 1;
        }
        v111[--v112] = v113 + (v98 | v104);
        v105 = *(void (**)(__int64, const char*, __int64, const char*,
                           const char*, _QWORD))(a1 + 48);
        if (v105 != nullptr) {
          v105(40,
               "C:/dvs/git/dirty/git-master_hos/gpu/drv/drivers/gpgpu/cuda/src/"
               "devtools/common/tools_shared/tools_shared_readelf.c",
               524, "toolsEvaluateBlock", "DW_OP_bregx 0x%08x 0x%016lx\n",
               (unsigned int)v114);
        }
        break;
      default:
        return result;
      }
    }
    else {
      result = (*(__int64 (**)(__int64, __int64))(a1 + 24))(a1, a2);
      if ((_DWORD)result != 0) {
        return result;
      }
      v18 = 0;
      v19 = 0;
      do {
        v21 = *v12++;
        v20 = v21;
        v22 = (unsigned __int64)(v21 & 0x7F) << v18;
        v18 += 7;
        v19 |= v22;
      } while ((v21 & 0x80) != 0);
      v23 = v20 < 0x40 || v18 > 0x1F;
      v24 = -1LL << v18;
      if (v23) {
        v24 = 0;
      }
      v25 = v19 | v24;
      v26 = v112;
      v113 = v25;
      if (v112 == 0) {
        return 1;
      }
      --v112;
      v111[v26 - 1] = v114 + v25;
    }
  LABEL_5:
    a3 = v12;
  } while ((unsigned __int64)v12 < a4);
  v11 = v112;
  if (v112 <= 0xFF) {
    goto LABEL_161;
  }
  return 1;
}

__int64 toolsSetFrameCFA(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  void (*v4)(__int64, const char*, __int64, const char*, const char*, ...);
  unsigned int v5;
  __int64 v6;
  unsigned int* v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;

  LODWORD(v4) = 2;
  if (a1 == 0 || a2 == 0) {
    return (unsigned int)v4;
  }
  v5 = a3 & 0xFFFFFF;
  *(_DWORD*)(a2 + 88) = a4;
  if (HIBYTE(a3) == 11) {
    if (v5 <= 0x3F) {
      v7 = (unsigned int*)(a2 + 48LL * v5 + 12576);
      v6 = 136;
    LABEL_10:
      v8 = a2 + v6;
      v9 = v5 >> 6;
      v10 = *(_QWORD*)(v8 + 8LL * v9);
      if ((v10 & (1LL << a3)) == 0) {
        *(_QWORD*)(v8 + 8LL * v9) = v10 | (1LL << a3);
        v7[1] = 0;
        v7[2] = 0;
        *v7 = a3;
      }
      goto LABEL_12;
    }
  }
  else if (HIBYTE(a3) == 5 && v5 <= 0x102) {
    v6 = 96;
    v7 = (unsigned int*)(a2 + 48LL * v5 + 144);
    goto LABEL_10;
  }
  v7 = nullptr;
LABEL_12:
  *(_QWORD*)(a2 + 80) = v7;
  v4 = *(void (**)(__int64, const char*, __int64, const char*, const char*,
                   ...))(a1 + 48);
  if (v4 != nullptr) {
    v4(40,
       "C:/dvs/git/dirty/git-master_hos/gpu/drv/drivers/gpgpu/cuda/src/"
       "devtools/common/tools_shared/tools_shared_readelf.c",
       946, "toolsSetFrameCFA", "frame %d regno 0x%08x offset %d\n",
       *(_DWORD*)a2, a3, a4);
    LODWORD(v4) = 0;
  }
  return (unsigned int)v4;
}

unsigned int* tools_shared_readelf_2250c0(__int64 a1, unsigned int a2)
{
  unsigned int v2;
  __int64 v3;
  unsigned int* result;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v2 = a2 & 0xFFFFFF;
  if (HIBYTE(a2) != 11) {
    if (HIBYTE(a2) == 5 && v2 <= 0x102) {
      v3 = a1;
      result = (unsigned int*)(a1 + 48LL * v2 + 144);
      v5 = 96;
      goto LABEL_8;
    }
    return nullptr;
  }
  if (v2 > 0x3F) {
    return nullptr;
  }
  v3 = a1;
  result = (unsigned int*)(a1 + 48LL * v2 + 12576);
  v5 = 136;
LABEL_8:
  v6 = v3 + v5;
  v7 = v2 >> 6;
  v8 = *(_QWORD*)(v6 + 8LL * v7);
  if ((v8 & (1LL << a2)) == 0) {
    *(_QWORD*)(v6 + 8LL * v7) = v8 | (1LL << a2);
    result[1] = 0;
    result[2] = 0;
    *result = a2;
  }
  return result;
}

__int64 tools_shared_readelf_225160(__int64 a1, unsigned int a2,
                                    unsigned int a3, __int64 a4, int a5)
{
  unsigned int v5;
  __int64 result;
  unsigned int* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  bool v12;

  if (a1 == 0) {
    return 2;
  }
  v5 = a2 & 0xFFFFFF;
  if (HIBYTE(a2) == 11) {
    if (v5 > 0x3F) {
      return 0;
    }
    v7 = (unsigned int*)(a1 + 48LL * v5 + 12576);
    v8 = 136;
  }
  else {
    if (HIBYTE(a2) != 5) {
      return 0;
    }
    if (v5 > 0x102) {
      return 0;
    }
    v8 = 96;
    v7 = (unsigned int*)(a1 + 48LL * v5 + 144);
  }
  v9 = a1 + v8;
  v10 = v5 >> 6;
  v11 = *(_QWORD*)(v9 + 8LL * v10);
  if ((v11 & (1LL << a2)) == 0) {
    *(_QWORD*)(v9 + 8LL * v10) = v11 | (1LL << a2);
    *v7 = a2;
    v7[1] = a5;
    v7[2] = 0;
    result = 2;
    v12 = (unsigned int)a5 >= 2;
    if (a5 <= 2) {
      goto LABEL_13;
    }
    goto LABEL_18;
  }
  result = 2;
  v7[1] = a5;
  v12 = (unsigned int)a5 >= 2;
  if (a5 > 2) {
  LABEL_18:
    if (a5 != 3) {
      if (a5 == 4) {
        v7[4] = a3;
        return 0;
      }
      return result;
    }
    v7[4] = a4;
    return 0;
  }
LABEL_13:
  if (!v12) {
    return 0;
  }
  if (a5 == 2) {
    *((_QWORD*)v7 + 2) = a4;
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
