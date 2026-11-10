#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FSS_calloc_plt(_QWORD, _QWORD);
__int64 FSS_free_plt(_QWORD, _QWORD);
__int64 FSS_malloc_plt(_QWORD, _QWORD);
__int64 FS_close_plt(_QWORD, _QWORD);
__int64 FS_open_plt(_QWORD, _QWORD);
__int64 FS_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FS_seek_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 get_EBLC_partial_plt(_QWORD, _QWORD, _QWORD);
__int64 get_name_plt(_QWORD, _QWORD);
__int64 get_os2_table_plt(_QWORD, _QWORD);
__int64 get_ttf_table_plt(_QWORD, _QWORD, _QWORD);
__int64 load_cff_plt(_QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_fontll_itype_4534a0(__int64, __int64);
__int64 swap_head_plt(_QWORD);
__int64 swap_hhea_plt(_QWORD);
__int64 swap_maxp_plt(_QWORD);
__int64 swap_ttc_header_plt(void);
__int64 swap_ttf_header_plt(void);
__int64 swap_vhea_plt(void);
__int64 ttf_read_buf_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ttf_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 unload_cff_plt(_QWORD, _QWORD);
__int64 unload_ttf_plt(_QWORD);
__int64 get_os2(__int64 result, unsigned __int16* a2);
__int64 load_ttf(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5,
                 int a6, char a7);
__int64 unload_ttf(__int64 result, __int64 a2);
__int64 fs_ttf_452b60(__int64 a1, __int64 a2);
__int64 fs_ttf_453000(__int64 a1, __int64 a2);

__int64 get_os2(__int64 result, unsigned __int16* a2)
{
  unsigned int v2;

  v2 = __rev16(*a2);
  *(_WORD*)result = v2;
  *(_WORD*)(result + 2) = bswap32(a2[1]) >> 16;
  *(_WORD*)(result + 4) = bswap32(a2[2]) >> 16;
  *(_WORD*)(result + 6) = bswap32(a2[3]) >> 16;
  *(_WORD*)(result + 8) = bswap32(a2[4]) >> 16;
  *(_WORD*)(result + 10) = bswap32(a2[5]) >> 16;
  *(_WORD*)(result + 12) = bswap32(a2[6]) >> 16;
  *(_WORD*)(result + 14) = bswap32(a2[7]) >> 16;
  *(_WORD*)(result + 16) = bswap32(a2[8]) >> 16;
  *(_WORD*)(result + 18) = bswap32(a2[9]) >> 16;
  *(_WORD*)(result + 20) = bswap32(a2[10]) >> 16;
  *(_WORD*)(result + 22) = bswap32(a2[11]) >> 16;
  *(_WORD*)(result + 24) = bswap32(a2[12]) >> 16;
  *(_WORD*)(result + 26) = bswap32(a2[13]) >> 16;
  *(_WORD*)(result + 28) = bswap32(a2[14]) >> 16;
  *(_WORD*)(result + 30) = bswap32(a2[15]) >> 16;
  *(_BYTE*)(result + 32) = *((_BYTE*)a2 + 32);
  *(_BYTE*)(result + 33) = *((_BYTE*)a2 + 33);
  *(_BYTE*)(result + 34) = *((_BYTE*)a2 + 34);
  *(_BYTE*)(result + 35) = *((_BYTE*)a2 + 35);
  *(_BYTE*)(result + 36) = *((_BYTE*)a2 + 36);
  *(_BYTE*)(result + 37) = *((_BYTE*)a2 + 37);
  *(_BYTE*)(result + 38) = *((_BYTE*)a2 + 38);
  *(_BYTE*)(result + 39) = *((_BYTE*)a2 + 39);
  *(_BYTE*)(result + 40) = *((_BYTE*)a2 + 40);
  *(_BYTE*)(result + 41) = *((_BYTE*)a2 + 41);
  *(_DWORD*)(result + 44) = bswap32(*(_DWORD*)(a2 + 21));
  *(_DWORD*)(result + 48) = bswap32(*(_DWORD*)(a2 + 23));
  *(_DWORD*)(result + 52) = bswap32(*(_DWORD*)(a2 + 25));
  *(_DWORD*)(result + 56) = bswap32(*(_DWORD*)(a2 + 27));
  *(_BYTE*)(result + 60) = *((_BYTE*)a2 + 58);
  *(_BYTE*)(result + 61) = *((_BYTE*)a2 + 59);
  *(_BYTE*)(result + 62) = *((_BYTE*)a2 + 60);
  *(_BYTE*)(result + 63) = *((_BYTE*)a2 + 61);
  *(_WORD*)(result + 64) = bswap32(a2[31]) >> 16;
  *(_WORD*)(result + 66) = bswap32(a2[32]) >> 16;
  *(_WORD*)(result + 68) = bswap32(a2[33]) >> 16;
  *(_WORD*)(result + 70) = bswap32(a2[34]) >> 16;
  *(_WORD*)(result + 72) = bswap32(a2[35]) >> 16;
  *(_WORD*)(result + 74) = bswap32(a2[36]) >> 16;
  *(_WORD*)(result + 76) = bswap32(a2[37]) >> 16;
  *(_WORD*)(result + 78) = bswap32(a2[38]) >> 16;
  if (v2 != 0) {
    *(_DWORD*)(result + 80) = bswap32(*(_DWORD*)(a2 + 39));
    *(_DWORD*)(result + 84) = bswap32(*(_DWORD*)(a2 + 41));
    if (v2 != 1) {
      *(_WORD*)(result + 88) = bswap32(a2[43]) >> 16;
      *(_WORD*)(result + 90) = bswap32(a2[44]) >> 16;
      *(_WORD*)(result + 92) = bswap32(a2[45]) >> 16;
      *(_WORD*)(result + 94) = bswap32(a2[46]) >> 16;
      *(_WORD*)(result + 96) = bswap32(a2[47]) >> 16;
    }
  }
  return result;
}

__int64 load_ttf(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5,
                 int a6, char a7)
{
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _DWORD* v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  unsigned int* v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  _DWORD* v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  _BOOL4 v40;
  int v41;
  int v42;
  _BOOL4 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _DWORD* v48;
  __int64 v49;
  unsigned int* v50;
  __int64 v51;
  int* v52;
  __int64 v53;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  unsigned int* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned int* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned int* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  _DWORD* v90;
  int v91;
  __int64 v92;
  __int64 v93;
  _DWORD* v94;
  int v95;
  __int64 v96;
  _DWORD* v97;
  int v98;
  __int64 v99;
  _DWORD* v100;
  int v101;
  __int64 v102;
  __int64 v103;
  _DWORD* v104;
  int v105;
  __int64 v106;
  _DWORD* v107;
  int v108;
  _WORD v109[2];
  unsigned int v110;

  v14 = FSS_calloc_plt(a1, 280);
  v15 = v14;
  if (v14 == 0) {
    return v15;
  }
  *(_DWORD*)(v14 + 232) = a5;
  *(_DWORD*)(v14 + 236) = a6;
  if (a3 != 0) {
    *(_QWORD*)(v14 + 8) = a3;
  }
  else if (a2 != 0) {
    *(_QWORD*)v14 = a2;
    v17 = FS_open_plt(a1, a2);
    *(_QWORD*)(v15 + 16) = v17;
    if (v17 == 0) {
      goto LABEL_11;
    }
  }
  if ((unsigned int)fs_ttf_452b60(a1, v15) != 0) {
    v16 = 431;
  LABEL_6:
    *(_DWORD*)(a1 + 72) = v16;
  LABEL_11:
    unload_ttf_plt(a1);
    return 0;
  }
  if (*(_DWORD*)(a1 + 72) != 0) {
    goto LABEL_11;
  }
  v19 = (_DWORD*)ttf_read_plt(a1, v15, 0, 16);
  *(_QWORD*)(v15 + 24) = v19;
  if (v19 == nullptr || *(_DWORD*)(a1 + 72) != 0) {
    goto LABEL_11;
  }
  if (*v19 == 1717793908) {
    v20 = 4 * bswap32(v19[2]);
    FSS_free_plt(a1, v19);
    v21 = ttf_read_plt(a1, v15, 0, v20 + 12);
    *(_QWORD*)(v15 + 24) = v21;
    if (v21 == 0 || *(_DWORD*)(a1 + 72) != 0) {
      goto LABEL_11;
    }
    v22 = v21;
    swap_ttc_header_plt();
    if (a4 >= *(_DWORD*)(v22 + 8)) {
      v16 = 404;
      goto LABEL_6;
    }
    v23 = *(unsigned int*)(v22 + 4LL * a4 + 12);
    *(_DWORD*)(v15 + 32) = v23;
  }
  else {
    FSS_free_plt(a1, v19);
    v23 = 0;
    *(_DWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 24) = 0;
  }
  v24 = ttf_read_plt(a1, v15, v23, 28);
  *(_QWORD*)(v15 + 40) = v24;
  if (v24 == 0 || *(_DWORD*)(a1 + 72) != 0) {
    goto LABEL_11;
  }
  v25 = __rev16(*(unsigned __int16*)(v24 + 4));
  if (a7 != 0 && (*(_WORD*)(v24 + 4) == 0 || v25 >= 0x33)) {
    unload_ttf_plt(a1);
    v15 = 0;
    *(_DWORD*)(a1 + 72) = 448;
    return v15;
  }
  v26 = (16 * v25) | 0xC;
  FSS_free_plt(a1, v24);
  v27 = ttf_read_plt(a1, v15, *(unsigned int*)(v15 + 32), v26);
  *(_QWORD*)(v15 + 40) = v27;
  if (v27 == 0) {
    goto LABEL_11;
  }
  if (*(_DWORD*)(a1 + 72) != 0) {
    goto LABEL_11;
  }
  swap_ttf_header_plt();
  if (a7 != 0 && (unsigned int)fs_ttf_452b60(a1, v15) == 0 &&
      (unsigned int)fs_ttf_453000(a1, *(_QWORD*)(v15 + 40)) == 0) {
    goto LABEL_11;
  }
  v28 = load_cff_plt(a1, v15);
  *(_QWORD*)(v15 + 264) = v28;
  if (v28 != 0) {
    v110 = 0;
    v109[0] = 0;
    v29 = (_QWORD*)FSS_malloc_plt(a1, 32);
    *(_QWORD*)(v15 + 72) = v29;
    *v29 = 0;
    v29[1] = 0;
    v29[2] = 0;
    v29[3] = 0;
    v30 = *(_QWORD*)(v15 + 40);
    v31 = *(unsigned __int16*)(v30 + 4);
    if (*(_WORD*)(v30 + 4) != 0) {
      v32 = (unsigned int*)(v30 + 20);
      while (*(v32 - 2) != 1835104368) {
        v32 += 4;
        if (--v31 == 0) {
          goto LABEL_36;
        }
      }
      v33 = *v32;
    }
    else {
    LABEL_36:
      v33 = 0;
      *(_DWORD*)(a1 + 72) = 405;
    }
    ttf_read_buf_plt(a1, v15, v33, 4, &v110);
    v37 = v110;
    v110 = bswap32(v110);
    if (v37 != 5242880) {
      *(_DWORD*)(a1 + 72) = 453;
    }
    ttf_read_buf_plt(a1, v15, v33 + 4, 2, v109);
    *(_WORD*)(*(_QWORD*)(v15 + 72) + 4LL) = bswap32(v109[0]) >> 16;
    *(_WORD*)(*(_QWORD*)(v15 + 72) + 8LL) = 64;
    *(_WORD*)(*(_QWORD*)(v15 + 72) + 6LL) = 256;
    *(_WORD*)(*(_QWORD*)(v15 + 72) + 26LL) = 3;
  }
  else {
    if (*(_DWORD*)(a1 + 72) != 405) {
      goto LABEL_11;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v34 = *(_QWORD*)(v15 + 40);
    v35 = *(unsigned __int16*)(v34 + 4);
    *(_QWORD*)(v15 + 156) = 0;
    if (v35 == 0) {
      goto LABEL_44;
    }
    v36 = (_DWORD*)(v34 + 24);
    while (*(v36 - 3) != 1735162214) {
      v36 += 4;
      if (--v35 == 0) {
        goto LABEL_44;
      }
    }
    *(_DWORD*)(v15 + 156) = *v36;
    *(_DWORD*)(v15 + 160) = *(v36 - 1);
    v44 = *(_QWORD*)(v15 + 8);
    if (v44 != 0 && *(_QWORD*)(v15 + 200) == 0) {
      v49 = *(unsigned __int16*)(v34 + 4);
      if (*(_WORD*)(v34 + 4) == 0) {
        goto LABEL_44;
      }
      v50 = (unsigned int*)(v34 + 20);
      while (*(v50 - 2) != 1819239265) {
        v50 += 4;
        if (--v49 == 0) {
          goto LABEL_44;
        }
      }
      *(_QWORD*)(v15 + 144) = v44 + *v50 + *(unsigned int*)(v15 + 232);
    }
    else {
      *(_QWORD*)(v15 + 144) = get_ttf_table_plt(a1, v15, 1819239265);
      if (*(_DWORD*)(a1 + 72) != 0) {
        goto LABEL_11;
      }
    }
    v53 = get_ttf_table_plt(a1, v15, 1835104368);
    *(_QWORD*)(v15 + 72) = v53;
    if (*(_DWORD*)(a1 + 72) != 0 || v53 == 0) {
      goto LABEL_11;
    }
    swap_maxp_plt(v53);
  }
  v38 = get_ttf_table_plt(a1, v15, 1751474532);
  *(_QWORD*)(v15 + 48) = v38;
  if (*(_DWORD*)(a1 + 72) != 0 || v38 == 0) {
    goto LABEL_11;
  }
  swap_head_plt(v38);
  v39 = *(_QWORD*)(v15 + 48);
  v40 = true;
  v41 = *(unsigned __int16*)(v39 + 52);
  v42 = v41 & 0xFF00;
  v43 = v42 != 512 && v42 != 1024 &&
            (v40 = (unsigned int)(v41 - 1538) < 0xFE, v42 == 1280) ||
        v42 == 1792;
  if (*(_DWORD*)(v39 + 12) != 1594834165) {
    v16 = 403;
    goto LABEL_6;
  }
  if ((v41 & 0xFFFE) == 0x9654 || (unsigned int)(v41 - 1538) < 0xFE ||
      v42 == 512) {
    v16 = 432;
    goto LABEL_6;
  }
  if (v40 || v43) {
    v16 = 433;
    goto LABEL_6;
  }
  v45 = get_ttf_table_plt(a1, v15, 1751672161);
  *(_QWORD*)(v15 + 56) = v45;
  if (*(_DWORD*)(a1 + 72) != 0 || v45 == 0) {
    goto LABEL_11;
  }
  swap_hhea_plt(v45);
  v46 = *(_QWORD*)(v15 + 40);
  v47 = *(unsigned __int16*)(v46 + 4);
  *(_DWORD*)(v15 + 172) = 0;
  if (v47 == 0) {
    goto LABEL_44;
  }
  v48 = (_DWORD*)(v46 + 20);
  while (*(v48 - 2) != 1752003704) {
    v48 += 4;
    if (--v47 == 0) {
      goto LABEL_44;
    }
  }
  *(_DWORD*)(v15 + 172) = *v48;
  v51 = *(unsigned __int16*)(v46 + 4);
  *(_DWORD*)(v15 + 176) = 0;
  if (v51 == 0) {
    goto LABEL_92;
  }
  v52 = (int*)(v46 + 20);
  while (*(v52 - 2) != 1986884728) {
    v52 += 4;
    if (--v51 == 0) {
      goto LABEL_92;
    }
  }
  v55 = *v52;
  *(_DWORD*)(v15 + 176) = v55;
  if (*(_DWORD*)(a1 + 72) == 405) {
  LABEL_92:
    *(_DWORD*)(a1 + 72) = 0;
    v55 = *(_DWORD*)(v15 + 176);
  }
  if (v55 != 0) {
    v56 = get_ttf_table_plt(a1, v15, 1986553185);
    *(_QWORD*)(v15 + 64) = v56;
    if (*(_DWORD*)(a1 + 72) != 0 || v56 == 0) {
      goto LABEL_11;
    }
    swap_vhea_plt();
  }
  v57 = *(_QWORD*)(v15 + 8);
  if (v57 != 0 && *(_QWORD*)(v15 + 200) == 0) {
    v61 = *(_QWORD*)(v15 + 40);
    v62 = *(unsigned __int16*)(v61 + 4);
    if (*(_WORD*)(v61 + 4) != 0) {
      v63 = (unsigned int*)(v61 + 20);
      while (*(v63 - 2) != 1668112752) {
        v63 += 4;
        if (--v62 == 0) {
          goto LABEL_44;
        }
      }
      v64 = *v63;
      *(_DWORD*)(v15 + 88) = 0;
      v65 = v57 + v64 + *(unsigned int*)(v15 + 232);
      *(_QWORD*)(v15 + 80) = v65;
      if (*(_WORD*)(v65 + 2) == 0) {
        goto LABEL_117;
      }
      v66 = __rev16(*(unsigned __int16*)(v65 + 2));
      v67 = v65 + 8;
      while ((*(_BYTE*)(v67 + 3) & 1) == 0) {
        v67 += 8;
        if (--v66 == 0) {
          goto LABEL_117;
        }
      }
      goto LABEL_116;
    }
  LABEL_44:
    v16 = 405;
    goto LABEL_6;
  }
  v58 = get_ttf_table_plt(a1, v15, 1668112752);
  *(_QWORD*)(v15 + 80) = v58;
  if (v58 == 0 || *(_DWORD*)(a1 + 72) != 0) {
    goto LABEL_11;
  }
  *(_DWORD*)(v15 + 88) = 1;
  if (*(_WORD*)(v58 + 2) != 0) {
    v59 = __rev16(*(unsigned __int16*)(v58 + 2));
    v60 = v58 + 8;
    while ((*(_BYTE*)(v60 + 3) & 1) == 0) {
      v60 += 8;
      if (--v59 == 0) {
        goto LABEL_117;
      }
    }
  LABEL_116:
    v68 = nn_fontll_itype_4534a0(a1, v15);
    *(_DWORD*)(a1 + 72) = v68;
    if (v68 != 0) {
      goto LABEL_11;
    }
  }
LABEL_117:
  v69 = *(_QWORD*)(v15 + 40);
  v70 = *(unsigned __int16*)(v69 + 4);
  if (*(_WORD*)(v69 + 4) == 0) {
    goto LABEL_127;
  }
  v71 = (unsigned int*)(v69 + 24);
  while (*(v71 - 3) != 1668707360) {
    v71 += 4;
    if (--v70 == 0) {
      goto LABEL_127;
    }
  }
  v72 = *v71;
  if ((_DWORD)v72 != 0) {
    v73 = *(v71 - 1);
    if (*(_DWORD*)(a1 + 72) == 405) {
      *(_DWORD*)(a1 + 72) = 0;
    }
    *(_DWORD*)(v15 + 136) = (unsigned int)v72 >> 1;
    *(_QWORD*)(v15 + 128) = ttf_read_plt(a1, v15, v73, v72);
    if (*(_DWORD*)(a1 + 72) != 0) {
      goto LABEL_11;
    }
  }
  else {
  LABEL_127:
    *(_DWORD*)(a1 + 72) = 0;
    *(_DWORD*)(v15 + 136) = 0;
  }
  v74 = *(_QWORD*)(v15 + 40);
  v75 = *(unsigned __int16*)(v74 + 4);
  if (*(_WORD*)(v74 + 4) == 0) {
  LABEL_132:
    v77 = 0;
    v78 = 0;
  LABEL_133:
    *(_DWORD*)(a1 + 72) = 0;
    goto LABEL_134;
  }
  v76 = (unsigned int*)(v74 + 24);
  while (*(v76 - 3) != 1886545264) {
    v76 += 4;
    if (--v75 == 0) {
      goto LABEL_132;
    }
  }
  v78 = *(v76 - 1);
  v77 = *v76;
  if (*(_DWORD*)(a1 + 72) == 405) {
    goto LABEL_133;
  }
LABEL_134:
  *(_DWORD*)(v15 + 104) = v77;
  if ((_DWORD)v77 != 0) {
    *(_QWORD*)(v15 + 96) = ttf_read_plt(a1, v15, v78, v77);
    if (*(_DWORD*)(a1 + 72) != 0) {
      goto LABEL_11;
    }
  }
  v79 = *(_QWORD*)(v15 + 40);
  v80 = *(unsigned __int16*)(v79 + 4);
  if (*(_WORD*)(v79 + 4) == 0) {
  LABEL_140:
    v82 = 0;
    v83 = 0;
  LABEL_141:
    *(_DWORD*)(a1 + 72) = 0;
    goto LABEL_142;
  }
  v81 = (unsigned int*)(v79 + 24);
  while (*(v81 - 3) != 1718642541) {
    v81 += 4;
    if (--v80 == 0) {
      goto LABEL_140;
    }
  }
  v83 = *(v81 - 1);
  v82 = *v81;
  if (*(_DWORD*)(a1 + 72) == 405) {
    goto LABEL_141;
  }
LABEL_142:
  *(_DWORD*)(v15 + 120) = v82;
  if ((_DWORD)v82 != 0) {
    *(_QWORD*)(v15 + 112) = ttf_read_plt(a1, v15, v83, v82);
    if (*(_DWORD*)(a1 + 72) != 0) {
      goto LABEL_11;
    }
  }
  v84 = *(_QWORD*)(v15 + 72);
  if (*(_WORD*)(v84 + 20) != 0) {
    v85 = FSS_malloc_plt(a1, 8 * (unsigned int)*(unsigned __int16*)(v84 + 20));
    *(_QWORD*)(v15 + 240) = v85;
    if (v85 == 0) {
      goto LABEL_11;
    }
    v84 = *(_QWORD*)(v15 + 72);
  }
  v86 = *(unsigned __int16*)(v84 + 22);
  if (v86 != 0) {
    v87 = FSS_malloc_plt(a1, (unsigned int)(8 * v86));
    *(_QWORD*)(v15 + 248) = v87;
    if (v87 == 0) {
      goto LABEL_11;
    }
  }
  v88 = *(_QWORD*)(v15 + 40);
  v89 = *(unsigned __int16*)(v88 + 4);
  *(_DWORD*)(v15 + 164) = 0;
  if (v89 != 0) {
    v90 = (_DWORD*)(v88 + 20);
    while (*(v90 - 2) != 1161972803) {
      v90 += 4;
      if (--v89 == 0) {
        goto LABEL_160;
      }
    }
    *(_DWORD*)(v15 + 164) = *v90;
    v91 = *(_DWORD*)(a1 + 72);
    if (v91 == 0) {
      *(_QWORD*)(v15 + 216) = get_EBLC_partial_plt(a1, v15, v83);
      if (*(_DWORD*)(a1 + 72) != 0) {
        goto LABEL_11;
      }
      goto LABEL_161;
    }
    if (v91 != 405) {
      goto LABEL_11;
    }
  }
LABEL_160:
  *(_DWORD*)(a1 + 72) = 0;
LABEL_161:
  v92 = *(_QWORD*)(v15 + 40);
  v93 = *(unsigned __int16*)(v92 + 4);
  *(_DWORD*)(v15 + 168) = 0;
  if (v93 == 0) {
    goto LABEL_169;
  }
  v94 = (_DWORD*)(v92 + 20);
  while (*(v94 - 2) != 1801810542) {
    v94 += 4;
    if (--v93 == 0) {
      goto LABEL_169;
    }
  }
  *(_DWORD*)(v15 + 168) = *v94;
  v95 = *(_DWORD*)(a1 + 72);
  if (v95 == 405) {
  LABEL_169:
    *(_DWORD*)(a1 + 72) = 0;
    v92 = *(_QWORD*)(v15 + 40);
  }
  else if (v95 != 0) {
    goto LABEL_11;
  }
  v96 = *(unsigned __int16*)(v92 + 4);
  *(_DWORD*)(v15 + 180) = 0;
  if (v96 == 0) {
    goto LABEL_178;
  }
  v97 = (_DWORD*)(v92 + 20);
  while (*(v97 - 2) != 1231253358) {
    v97 += 4;
    if (--v96 == 0) {
      goto LABEL_178;
    }
  }
  *(_DWORD*)(v15 + 180) = *v97;
  v98 = *(_DWORD*)(a1 + 72);
  if (v98 == 405) {
  LABEL_178:
    *(_DWORD*)(a1 + 72) = 0;
    v92 = *(_QWORD*)(v15 + 40);
  }
  else if (v98 != 0) {
    goto LABEL_11;
  }
  v99 = *(unsigned __int16*)(v92 + 4);
  if (*(_WORD*)(v92 + 4) == 0) {
    goto LABEL_187;
  }
  v100 = (_DWORD*)(v92 + 24);
  while (*(v100 - 3) != 1734439792) {
    v100 += 4;
    if (--v99 == 0) {
      goto LABEL_187;
    }
  }
  if (*v100 != 0) {
    *(_QWORD*)(v15 + 256) = get_ttf_table_plt(a1, v15, 1734439792);
    if (*(_DWORD*)(a1 + 72) != 0) {
      goto LABEL_11;
    }
  }
  else {
  LABEL_187:
    *(_DWORD*)(a1 + 72) = 0;
  }
  *(_QWORD*)(v15 + 184) = get_os2_table_plt(a1, v15);
  v101 = *(_DWORD*)(a1 + 72);
  if (v101 != 0) {
    if (v101 != 405) {
      goto LABEL_11;
    }
    *(_DWORD*)(a1 + 72) = 0;
  }
  *(_QWORD*)(v15 + 192) = get_name_plt(a1, v15);
  if (*(_DWORD*)(a1 + 72) != 0) {
    goto LABEL_11;
  }
  v102 = *(_QWORD*)(v15 + 40);
  v103 = *(unsigned __int16*)(v102 + 4);
  *(_DWORD*)(v15 + 228) = 0;
  if (v103 == 0) {
    goto LABEL_202;
  }
  v104 = (_DWORD*)(v102 + 20);
  while (*(v104 - 2) != 1447316824) {
    v104 += 4;
    if (--v103 == 0) {
      goto LABEL_202;
    }
  }
  *(_DWORD*)(v15 + 228) = *v104;
  v105 = *(_DWORD*)(a1 + 72);
  if (v105 == 405) {
  LABEL_202:
    *(_DWORD*)(a1 + 72) = 0;
    v102 = *(_QWORD*)(v15 + 40);
  }
  else if (v105 != 0) {
    goto LABEL_11;
  }
  v106 = *(unsigned __int16*)(v102 + 4);
  *(_DWORD*)(v15 + 224) = 0;
  if (v106 == 0) {
  LABEL_210:
    *(_DWORD*)(a1 + 72) = 0;
    return v15;
  }
  v107 = (_DWORD*)(v102 + 20);
  while (*(v107 - 2) != 1751412088) {
    v107 += 4;
    if (--v106 == 0) {
      goto LABEL_210;
    }
  }
  *(_DWORD*)(v15 + 224) = *v107;
  v108 = *(_DWORD*)(a1 + 72);
  if (v108 != 0) {
    if (v108 != 405) {
      goto LABEL_11;
    }
    goto LABEL_210;
  }
  return v15;
}

__int64 unload_ttf(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;

  if (a2 != 0) {
    v3 = *(_QWORD*)(a2 + 16);
    v4 = result;
    if (v3 != 0) {
      FS_close_plt(result, v3);
    }
    v5 = *(_QWORD*)(a2 + 24);
    if (v5 != 0) {
      FSS_free_plt(v4, v5);
    }
    FSS_free_plt(v4, *(_QWORD*)(a2 + 40));
    FSS_free_plt(v4, *(_QWORD*)(a2 + 48));
    FSS_free_plt(v4, *(_QWORD*)(a2 + 56));
    v6 = *(_QWORD*)(a2 + 64);
    if (v6 != 0) {
      FSS_free_plt(v4, v6);
    }
    FSS_free_plt(v4, *(_QWORD*)(a2 + 72));
    v7 = *(_QWORD*)(a2 + 128);
    if (v7 != 0) {
      FSS_free_plt(v4, v7);
    }
    v8 = *(_QWORD*)(a2 + 96);
    if (v8 != 0) {
      FSS_free_plt(v4, v8);
    }
    v9 = *(_QWORD*)(a2 + 112);
    if (v9 != 0) {
      FSS_free_plt(v4, v9);
    }
    unload_cff_plt(v4, *(_QWORD*)(a2 + 264));
    v10 = *(_QWORD*)(a2 + 184);
    if (v10 != 0) {
      FSS_free_plt(v4, v10);
    }
    FSS_free_plt(v4, *(_QWORD*)(a2 + 192));
    v11 = *(_QWORD*)(a2 + 240);
    if (v11 != 0) {
      FSS_free_plt(v4, v11);
    }
    v12 = *(_QWORD*)(a2 + 248);
    if (v12 != 0) {
      FSS_free_plt(v4, v12);
    }
    v13 = *(_QWORD*)(a2 + 256);
    if (v13 != 0) {
      FSS_free_plt(v4, v13);
    }
    if (*(_QWORD*)(a2 + 8) == 0) {
      FSS_free_plt(v4, *(_QWORD*)(a2 + 144));
      *(_QWORD*)(a2 + 144) = 0;
    }
    if (*(_DWORD*)(a2 + 88) != 0) {
      FSS_free_plt(v4, *(_QWORD*)(a2 + 80));
    }
    v14 = *(_QWORD*)(a2 + 208);
    if (v14 != 0) {
      FSS_free_plt(v4, v14);
    }
    v15 = *(_QWORD*)(a2 + 216);
    if (v15 != 0) {
      if (*(_DWORD*)(v15 + 4) != 0) {
        v16 = 48;
        v17 = 0;
        do {
          FSS_free_plt(v4, *(_QWORD*)(*(_QWORD*)(v15 + 8) + v16));
          v15 = *(_QWORD*)(a2 + 216);
          ++v17;
          v16 += 56;
        } while (v17 < *(unsigned int*)(v15 + 4));
      }
      FSS_free_plt(v4, *(_QWORD*)(v15 + 8));
      FSS_free_plt(v4, *(_QWORD*)(a2 + 216));
    }
    return FSS_free_plt(v4, a2);
  }
  return result;
}

__int64 fs_ttf_452b60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  unsigned int v16;
  __int64 v18;
  unsigned int v19;
  unsigned int v21;
  int* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  _BOOL4 v28;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    int v32;
    char gap28_[4];
    __int64 v33;
    __int64 v34;
  } v29_;

  v2 = *(_QWORD*)(a2 + 8);
  v29_.v33 = 0;
  v29_.v34 = 0;
  v29_.v29 = 0;
  v29_.v30 = 0;
  v29_.v31 = 0;
  v29_.v32 = 0;
  if (v2 != 0) {
    v5 = *(_QWORD*)(v2 + *(unsigned int*)(a2 + 232) + 8);
    v29_.v33 = *(_QWORD*)(v2 + *(unsigned int*)(a2 + 232));
    v29_.v34 = v5;
  }
  else {
    v15 = *(_QWORD*)(a2 + 16);
    if (v15 != 0) {
      FS_seek_plt(a1, v15, *(unsigned int*)(a2 + 232), 0);
      v16 = FS_read_plt(a1, *(_QWORD*)(a2 + 16), &v29_.v33, 16);
      if (v16 != 16) {
        memset_plt((void*)((char*)&v29_.v33 + v16), nullptr, 16 - v16);
      }
    }
  }
  if (*(_DWORD*)(a1 + 72) != 0) {
    return 0;
  }
  v6 = *(_QWORD*)(a2 + 8);
  v7 = bswap32(HIDWORD(v29_.v34));
  v8 = (_DWORD)v29_.v33 == 1717793908 ? v7 : 0;
  if (v6 != 0) {
    v9 = (__int64*)(v6 + v8 + *(unsigned int*)(a2 + 232));
    v11 = v9[1];
    v10 = v9[2];
    v12 = *((_DWORD*)v9 + 6);
    v13 = *v9;
    v29_.v32 = v12;
    v29_.v30 = v11;
    v29_.v31 = v10;
    v29_.v29 = v13;
  }
  else {
    v18 = *(_QWORD*)(a2 + 16);
    if (v18 != 0) {
      FS_seek_plt(a1, v18, *(_DWORD*)(a2 + 232) + v8, 0);
      v19 = FS_read_plt(a1, *(_QWORD*)(a2 + 16), &v29_.v29, 28);
      if (v19 != 28) {
        memset_plt((void*)((char*)&v29_.v29 + v19), nullptr, 28 - v19);
      }
    }
  }
  if (*(_DWORD*)(a1 + 72) != 0) {
    return 0;
  }
  if ((_DWORD)v29_.v29 != 256 && (_DWORD)v29_.v29 != 1330926671 &&
      (_DWORD)v29_.v29 != 1702195828) {
    *(_DWORD*)(a1 + 72) = 403;
    return 0;
  }
  v21 = WORD2(v29_.v29);
  result = ttf_read_plt(a1, a2, v8, (bswap32(WORD2(v29_.v29)) >> 12) | 0xC);
  if (result != 0) {
    if (*(_DWORD*)(a1 + 72) != 0) {
      return 0;
    }
    if (v21 != 0) {
      v22 = (int*)(result + 12);
      v23 = 1;
      v24 = (unsigned __int16)__rev16(v21);
      do {
        v26 = *v22;
        v22 += 4;
        v25 = v26;
      } while (v26 != 863265633 && v23++ < v24);
      v28 = v25 == 863265633;
    }
    else {
      v28 = false;
    }
    FSS_free_plt(a1, result);
    return v28;
  }
  return result;
}

__int64 fs_ttf_453000(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  unsigned int v6;
  unsigned int v7;

  if (*(_WORD*)(a2 + 4) == 0) {
    return 1;
  }
  v2 = 0;
LABEL_4:
  v3 = *(unsigned __int16*)(a2 + 4);
  v4 = v2;
  v5 = (_DWORD*)(a2 + 24);
  v6 = *(_DWORD*)(a2 + 20 + 16 * v2);
  while (1) {
    if (v4 != 0) {
      v7 = *(v5 - 1);
      if (v6 >= v7 && v6 < v7 + *v5) {
        break;
      }
    }
    v5 += 4;
    --v4;
    if (--v3 == 0) {
      if (++v2 == *(unsigned __int16*)(a2 + 4)) {
        return 1;
      }
      goto LABEL_4;
    }
  }
  *(_DWORD*)(a1 + 72) = 448;
  return 0;
}

#pragma GCC visibility pop
