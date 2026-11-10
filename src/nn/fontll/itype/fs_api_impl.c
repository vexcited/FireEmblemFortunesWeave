#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FSS_free_char_plt(void* this_, void*);
__int64 FSS_free_plt(_QWORD, _QWORD);
__int64 FSS_free_table_plt(_QWORD, _QWORD);
__int64 FSS_get_table_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FSS_malloc_plt(_QWORD, _QWORD);
__int64 FSS_realloc_plt(_QWORD);
__int64 FSS_set_cmap_plt(_QWORD, _QWORD, _QWORD);
__int64 FS_close_plt(_QWORD, _QWORD);
__int64 FS_open_plt(_QWORD, _QWORD);
__int64 FS_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FS_seek_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LFNT_map_char_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_415a30(__int64, unsigned int);
__int64 check_sfnt_plt(_QWORD);
__int64 find_advance_in_cache_plt(_QWORD, _QWORD, _QWORD);
__int64 find_graymap_in_cache_plt(_QWORD, _QWORD, _QWORD);
__int64 find_or_make_outline_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fixed_norm_plt(_QWORD);
__int64 fs_api_419d40(__int64 result, __int64, unsigned int, _DWORD*, _DWORD*,
                      _DWORD*, _DWORD*);
__int64 fs_api_419d40_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("fs_api_419d40");
__int64 fs_api_41a520_alt1(_QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("fs_api_41a520");
__int64 get_abbreviated_name_plt(_QWORD, _QWORD);
__int64 get_embedded_bitmap_plt(_QWORD, _QWORD, _QWORD);
__int64 get_embedded_graymap_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 get_glyph_advance_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 get_os2_plt(_QWORD, _QWORD);
__int64 load_fnt_plt(_QWORD, _QWORD);
__int64 make_outline_ttf_plt(_QWORD);
__int64 malloc_plt(_QWORD);
__int64 map_char_plt(void);
__int64 map_font_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 save_advance_to_cache_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 swap_head_plt(_QWORD);
__int64 swap_hhea_plt(_QWORD);
__int64 swap_maxp_plt(_QWORD);
__int64 swap_vhea_plt(_QWORD);
__int64 ttf_read_buf_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _DWORD SdkData_bb2c80[4];
extern char SdkData_bb82da[6];
__int64 get_ref_lines(__int64 result);
__int64 FS_set_flags(__int64 a1, int a2);
__int64 fs_api_416160(__int64 result, __int64 a2, __int64 a3, signed int a4,
                      __int64 a5);
__int64 FSS_get_ascender_descender_leading(__int64 a1, int* a2, _DWORD* a3,
                                           _DWORD* a4, int* a5);
__int64 FSS_get_table_structure(__int64 a1, int a2, __int64 a3);
__int64 fs_api_41a520(__int64 a1, __int64 a2, int a3, __int64 a4);
__int64 fs_api_41a8c0(__int64 result, __int64 a2, char a3, unsigned __int16 a4,
                      unsigned __int16 a5, _WORD* a6, _WORD* a7);
__int64 FSS_get_ppem_size(__int64 a1, unsigned __int16 a2, unsigned int a3);
__int64 FSS_get_advance(__int64 a1, __int64 a2, unsigned int a3, __int16* a4,
                        __int16* a5, int* a6, int* a7);
__int64 fs_api_41b210(__int64 result, __int64* a2, unsigned int a3, _WORD* a4);
__int64 fs_api_41b420(__int64 result, __int64 a2, __int16 a3, _DWORD* a4,
                      _DWORD* a5);
__int64 fs_api_41b540(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4,
                      __int16 a5, int a6, int a7);
__int64 FSS_get_available_fonts(__int64* a1, int a2, int a3, __int64* a4,
                                _DWORD* a5);

__int64 get_ref_lines(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  int* v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  _DWORD* v11;
  int v12;
  int v13;
  int v14;
  int v15;
  void* v16;
  unsigned int v17;
  int* v18;
  int* v19;
  int* v20;
  unsigned int v21;
  __int64 v22;
  void* v23;
  unsigned int v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  bool v39;
  int v40;
  int* v41;
  int v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  int v51;
  void* v52;
  unsigned int v53;
  int* v54;
  int* v55;
  int* v56;
  unsigned int v57;
  _DWORD* v58;
  __int64 v59;
  int v60;
  __int64 v61;
  unsigned int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  __int64 v70;
  unsigned int v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  __int64 v79;
  unsigned int v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  unsigned int v92;
  _DWORD* v93;
  int v94;
  unsigned int v95;
  int* v96;
  int* v97;
  int* v98;
  int v99;
  void* v100;
  void* v101;
  __int64 v102;
  int v103;
  int v104;
  int v105;
  __int64 v106;
  int v107;
  int v108;
  int v109;
  int v110;
  void* v111;
  __int64 v112;
  int v113;
  unsigned int v114;
  int* v115;
  int v116;
  int v117;
  int v118;
  int* v119;
  int* v120;
  int* v121;
  int* v122;
  int* v123;
  int* v124;
  int* v125;
  int v126;
  int v127;
  int* v128;
  int* v129;
  int* v130;
  int* v131;
  int* v132;
  int* v133;
  int* v134;
  _DWORD* v135;
  int v136;
  int* v137;
  int* v138;
  int* v139;
  int* v140;
  int* v141;
  int* v142;
  int* v143;
  int* v144;
  int v145;
  unsigned int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  unsigned int v152;
  unsigned int v153;

  v1 = *(_QWORD*)(result + 56);
  if (*(_DWORD*)(v1 + 260) != 0) {
    return result;
  }
  v2 = *(_QWORD*)(result + 48);
  v3 = *(unsigned __int16*)(result + 64);
  v4 = *(unsigned __int16*)(result + 66);
  v5 = (int*)(v1 + 52);
  v6 = result;
  v7 = *(_DWORD*)(result + 76);
  v8 = *(_DWORD*)(v2 + 36);
  v9 = *(_QWORD*)(*(_QWORD*)(v2 + 56) + 184LL);
  *(_QWORD*)(v1 + 260) = 0;
  *(_QWORD*)(v1 + 268) = 0;
  *(_QWORD*)(v1 + 244) = 0;
  *(_QWORD*)(v1 + 252) = 0;
  *(_QWORD*)(v1 + 228) = 0;
  *(_QWORD*)(v1 + 236) = 0;
  *(_QWORD*)(v1 + 212) = 0;
  *(_QWORD*)(v1 + 220) = 0;
  *(_QWORD*)(v1 + 196) = 0;
  *(_QWORD*)(v1 + 204) = 0;
  *(_QWORD*)(v1 + 180) = 0;
  *(_QWORD*)(v1 + 188) = 0;
  *(_QWORD*)(v1 + 164) = 0;
  *(_QWORD*)(v1 + 172) = 0;
  *(_QWORD*)(v1 + 148) = 0;
  *(_QWORD*)(v1 + 156) = 0;
  *(_QWORD*)(v1 + 132) = 0;
  *(_QWORD*)(v1 + 140) = 0;
  *(_QWORD*)(v1 + 116) = 0;
  *(_QWORD*)(v1 + 124) = 0;
  *(_QWORD*)(v1 + 100) = 0;
  *(_QWORD*)(v1 + 108) = 0;
  *(_QWORD*)(v1 + 84) = 0;
  *(_QWORD*)(v1 + 92) = 0;
  *(_QWORD*)(v1 + 68) = 0;
  *(_QWORD*)(v1 + 76) = 0;
  *(_QWORD*)(v1 + 52) = 0;
  *(_QWORD*)(v1 + 60) = 0;
  *(_DWORD*)(v1 + 260) = 1;
  if (v9 == 0 || (unsigned int)*(unsigned __int8*)(v9 + 32) - 6 >= 0xFFFFFFFD) {
    *(_WORD*)(*(_QWORD*)(result + 56) + 48LL) = 0;
    if ((v4 & v3) != 0xFFFF) {
      goto LABEL_9;
    }
    if (*(_WORD*)(result + 24) != 0) {
      v10 = 0;
      v11 = (_DWORD*)(*(_QWORD*)(result + 32) + 16LL);
      do {
        *v11 = 0;
        v11 += 6;
        ++v10;
      } while (v10 < *(unsigned __int16*)(result + 24));
    }
  LABEL_13:
    *(_DWORD*)(v6 + 72) = 0;
    *(_DWORD*)(v6 + 64) = -1;
  LABEL_14:
    *(_DWORD*)(v6 + 76) = v7;
    return result;
  }
  result = map_font_plt(result, 3, 1);
  if (*(_DWORD*)(v6 + 72) != 0) {
    result = map_font_plt(v6, 3, 10);
    if (*(_DWORD*)(v6 + 72) != 0) {
      if ((v4 & v3) == 0xFFFF) {
        if (*(_WORD*)(v6 + 24) != 0) {
          v57 = 0;
          v58 = (_DWORD*)(*(_QWORD*)(v6 + 32) + 16LL);
          do {
            *v58 = 0;
            v58 += 6;
            ++v57;
          } while (v57 < *(unsigned __int16*)(v6 + 24));
        }
        *(_DWORD*)(v6 + 72) = 0;
        *(_DWORD*)(v6 + 64) = -1;
      }
      else {
        result = map_font_plt(v6, v3, v4);
      }
      v59 = *(_QWORD*)(v6 + 48);
      *(_DWORD*)(v6 + 76) = v7;
      *(_DWORD*)(v59 + 36) = v8;
      return result;
    }
  }
  v12 = *(_DWORD*)(v6 + 76);
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v12 & 0xFFF83FFF;
  v13 = *(_DWORD*)(v9 + 48);
  v14 = *(_DWORD*)(v9 + 52);
  if (*(_DWORD*)(v9 + 44) <= 1u) {
    v15 = 1;
  }
  else {
    v15 = *(_DWORD*)(v9 + 44);
  }
  if ((v15 & 1) == 0) {
    if ((v15 & 0x200) != 0) {
      *(_DWORD*)(v6 + 76) = v12 & 0xDEB83FFD | 0x21400000;
      v52 = (void*)SdkRoutine_415a30(v6, 0x418u);
      v53 = *(_DWORD*)(v6 + 76) & 0xDFFFFFFF;
      *(_DWORD*)(v6 + 76) = v53;
      if (v52 != nullptr) {
        FSS_free_char_plt((void*)v6, v52);
        if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 40) + 16LL) + 960LL) == 0) {
          goto LABEL_153;
        }
        v53 = *(_DWORD*)(v6 + 76);
      }
      *(_DWORD*)(v6 + 76) = v53 & 0xFEBFFFFD | 2;
      v54 = (int*)SdkRoutine_415a30(v6, 0x415u);
      if (v54 != nullptr) {
        *(_DWORD*)(v1 + 52) = v54[6] >> 10;
        *(_DWORD*)(v1 + 68) = v54[5] >> 10;
        FSS_free_char_plt((void*)v6, v54);
      }
      v55 = (int*)SdkRoutine_415a30(v6, 0x41Eu);
      if (v55 != nullptr) {
        *(_DWORD*)(v1 + 56) = v55[6] >> 10;
        *(_DWORD*)(v1 + 72) = v55[5] >> 10;
        FSS_free_char_plt((void*)v6, v55);
      }
      v56 = (int*)SdkRoutine_415a30(v6, 0x43Bu);
      if (v56 != nullptr) {
        *(_DWORD*)(v1 + 60) = v56[6] >> 10;
        FSS_free_char_plt((void*)v6, v56);
      }
      v22 = v6;
      v21 = 1086;
    }
    else {
      if ((v15 & 0x80) == 0) {
        goto LABEL_128;
      }
      *(_DWORD*)(v6 + 76) = v12 & 0xDEB83FFD | 0x21400000;
      v16 = (void*)SdkRoutine_415a30(v6, 0x399u);
      v17 = *(_DWORD*)(v6 + 76) & 0xDFFFFFFF;
      *(_DWORD*)(v6 + 76) = v17;
      if (v16 != nullptr) {
        FSS_free_char_plt((void*)v6, v16);
        if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 40) + 16LL) + 960LL) == 0) {
          goto LABEL_153;
        }
        v17 = *(_DWORD*)(v6 + 76);
      }
      *(_DWORD*)(v6 + 76) = v17 & 0xFEBFFFFD | 2;
      v18 = (int*)SdkRoutine_415a30(v6, 0x395u);
      if (v18 != nullptr) {
        *(_DWORD*)(v1 + 52) = v18[6] >> 10;
        *(_DWORD*)(v1 + 68) = v18[5] >> 10;
        FSS_free_char_plt((void*)v6, v18);
      }
      v19 = (int*)SdkRoutine_415a30(v6, 0x39Fu);
      if (v19 != nullptr) {
        *(_DWORD*)(v1 + 56) = v19[6] >> 10;
        *(_DWORD*)(v1 + 72) = v19[5] >> 10;
        FSS_free_char_plt((void*)v6, v19);
      }
      v20 = (int*)SdkRoutine_415a30(v6, 0x3C0u);
      if (v20 != nullptr) {
        *(_DWORD*)(v1 + 60) = v20[6] >> 10;
        FSS_free_char_plt((void*)v6, v20);
      }
      v21 = 959;
      v22 = v6;
    }
    result = SdkRoutine_415a30(v22, v21);
    if (result != 0) {
      goto LABEL_127;
    }
    goto LABEL_128;
  }
  *(_DWORD*)(v6 + 76) = v12 & 0xDEB83FFD | 0x21400000;
  v23 = (void*)SdkRoutine_415a30(v6, 0x6Cu);
  v24 = *(_DWORD*)(v6 + 76) & 0xDFFFFFFF;
  *(_DWORD*)(v6 + 76) = v24;
  if (v23 != nullptr) {
    FSS_free_char_plt((void*)v6, v23);
    if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 40) + 16LL) + 960LL) == 0) {
      goto LABEL_153;
    }
    v24 = *(_DWORD*)(v6 + 76);
  }
  v145 = v15;
  v148 = v14;
  v150 = v13;
  v152 = v3;
  v146 = v4;
  v147 = v7;
  v25 = 0x7FFFFFFF;
  v26 = -2147483647;
  v27 = 0;
  *(_DWORD*)(v6 + 76) = v24 & 0xFEBFFFFD | 2;
  do {
    v28 = *(_DWORD*)(v6 + 76);
    v29 = (unsigned __int8)SdkData_bb82da[v27];
    v30 = *(_QWORD*)(v6 + 48);
    v31 = (unsigned __int8)SdkData_bb82da[v27];
    *(_DWORD*)(v6 + 72) = 0;
    *(_DWORD*)(v6 + 76) = v28 & 0xFFFFBFFF;
    v32 = (unsigned __int16)LFNT_map_char_plt(v6, v30, 0, v31, 0);
    if (v32 == 0) {
      *(_DWORD*)(v6 + 76) = v28;
      goto LABEL_37;
    }
    v33 = *(_DWORD*)(v6 + 76) | 0x4000;
    *(_DWORD*)(v6 + 72) = 0;
    *(_DWORD*)(v6 + 76) = v33;
    if ((unsigned int)check_sfnt_plt(v6) == 0) {
      v34 = find_or_make_outline_plt(v6, *(_QWORD*)(v6 + 48),
                                     *(_QWORD*)(v6 + 56), v29, v32);
      *(_DWORD*)(v6 + 76) = v28;
      if (v34 != 0) {
        if (*(int*)(v34 + 24) >> 10 < v25) {
          v25 = *(int*)(v34 + 24) >> 10;
        }
        v35 = *(_QWORD*)v34;
        if (*(int*)(v34 + 20) >> 10 > v26) {
          v26 = *(int*)(v34 + 20) >> 10;
        }
        if (v35 == 0) {
          FSS_free_plt(v6, v34);
          goto LABEL_37;
        }
        v36 = *(_QWORD*)(v35 + 24);
        v37 = *(_DWORD*)(v35 + 56);
        if (v37 != 0) {
          v38 = v37 - 1;
          v39 = v36 != 0 && v38 == 0;
          *(_DWORD*)(v35 + 56) = v38;
          if (!v39) {
            goto LABEL_37;
          }
        }
        else if (v36 == 0) {
          goto LABEL_37;
        }
        v40 = *(_DWORD*)(v36 + 284);
        if (v40 != 0) {
          *(_DWORD*)(v36 + 284) = v40 - 1;
        }
      }
    }
  LABEL_37:
    ++v27;
  } while (v27 != 5);
  if (v25 == 0x7FFFFFFF) {
    v14 = v148;
    if (v26 == -2147483647) {
      goto LABEL_59;
    }
  LABEL_87:
    *(_DWORD*)(v1 + 68) = v26;
    v41 = (int*)SdkRoutine_415a30(v6, 0x4Fu);
    v7 = v147;
    if (v41 == nullptr) {
      goto LABEL_61;
    }
  LABEL_60:
    *(_DWORD*)(v1 + 56) = v41[6] >> 10;
    *(_DWORD*)(v1 + 72) = v41[5] >> 10;
    FSS_free_char_plt((void*)v6, v41);
    goto LABEL_61;
  }
  *v5 = v25;
  v14 = v148;
  if (v26 != -2147483647) {
    goto LABEL_87;
  }
LABEL_59:
  v41 = (int*)SdkRoutine_415a30(v6, 0x4Fu);
  v7 = v147;
  if (v41 != nullptr) {
    goto LABEL_60;
  }
LABEL_61:
  v42 = *(_DWORD*)(v6 + 76);
  v43 = *(_QWORD*)(v6 + 48);
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v42 & 0xFFFFBFFF;
  v15 = v145;
  v4 = v146;
  v44 = (unsigned __int16)LFNT_map_char_plt(v6, v43, 0, 119, 0);
  if (v44 == 0) {
    *(_DWORD*)(v6 + 76) = v42;
  LABEL_90:
    v48 = 0x7FFFFFFF;
    goto LABEL_91;
  }
  v45 = *(_DWORD*)(v6 + 76) | 0x4000;
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v45;
  if ((unsigned int)check_sfnt_plt(v6) != 0) {
    goto LABEL_90;
  }
  v46 = find_or_make_outline_plt(v6, *(_QWORD*)(v6 + 48), *(_QWORD*)(v6 + 56),
                                 119, v44);
  *(_DWORD*)(v6 + 76) = v42;
  if (v46 == 0) {
    goto LABEL_90;
  }
  v47 = *(_QWORD*)v46;
  v48 = *(int*)(v46 + 24) >> 10;
  if (*(_QWORD*)v46 == 0) {
    FSS_free_plt(v6, v46);
    goto LABEL_91;
  }
  v49 = *(_QWORD*)(v47 + 24);
  v50 = *(_DWORD*)(v47 + 56);
  if (v50 != 0) {
    v51 = v50 - 1;
    *(_DWORD*)(v47 + 56) = v51;
    if (v49 == 0 || v51 != 0) {
      goto LABEL_91;
    }
  }
  else if (v49 == 0) {
    goto LABEL_91;
  }
  v107 = *(_DWORD*)(v49 + 284);
  if (v107 != 0) {
    *(_DWORD*)(v49 + 284) = v107 - 1;
  }
LABEL_91:
  v60 = *(_DWORD*)(v6 + 76);
  v61 = *(_QWORD*)(v6 + 48);
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v60 & 0xFFFFBFFF;
  v62 = (unsigned __int16)LFNT_map_char_plt(v6, v61, 0, 120, 0);
  if (v62 == 0) {
    *(_DWORD*)(v6 + 76) = v60;
    goto LABEL_102;
  }
  v63 = *(_DWORD*)(v6 + 76) | 0x4000;
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v63;
  if ((unsigned int)check_sfnt_plt(v6) == 0) {
    v64 = find_or_make_outline_plt(v6, *(_QWORD*)(v6 + 48), *(_QWORD*)(v6 + 56),
                                   120, v62);
    *(_DWORD*)(v6 + 76) = v60;
    if (v64 != 0) {
      v65 = *(_QWORD*)v64;
      if (*(int*)(v64 + 24) >> 10 < v48) {
        v48 = *(int*)(v64 + 24) >> 10;
      }
      if (v65 == 0) {
        FSS_free_plt(v6, v64);
        goto LABEL_102;
      }
      v66 = *(_QWORD*)(v65 + 24);
      v67 = *(_DWORD*)(v65 + 56);
      if (v67 != 0) {
        v68 = v67 - 1;
        *(_DWORD*)(v65 + 56) = v68;
        if (v66 == 0 || v68 != 0) {
          goto LABEL_102;
        }
      }
      else if (v66 == 0) {
        goto LABEL_102;
      }
      v108 = *(_DWORD*)(v66 + 284);
      if (v108 != 0) {
        *(_DWORD*)(v66 + 284) = v108 - 1;
      }
    }
  }
LABEL_102:
  v69 = *(_DWORD*)(v6 + 76);
  v70 = *(_QWORD*)(v6 + 48);
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v69 & 0xFFFFBFFF;
  v71 = (unsigned __int16)LFNT_map_char_plt(v6, v70, 0, 121, 0);
  if (v71 == 0) {
    *(_DWORD*)(v6 + 76) = v69;
    goto LABEL_113;
  }
  v72 = *(_DWORD*)(v6 + 76) | 0x4000;
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v72;
  if ((unsigned int)check_sfnt_plt(v6) == 0) {
    v73 = find_or_make_outline_plt(v6, *(_QWORD*)(v6 + 48), *(_QWORD*)(v6 + 56),
                                   121, v71);
    *(_DWORD*)(v6 + 76) = v69;
    if (v73 != 0) {
      v74 = *(_QWORD*)v73;
      if (*(int*)(v73 + 24) >> 10 < v48) {
        v48 = *(int*)(v73 + 24) >> 10;
      }
      if (v74 == 0) {
        FSS_free_plt(v6, v73);
        goto LABEL_113;
      }
      v75 = *(_QWORD*)(v74 + 24);
      v76 = *(_DWORD*)(v74 + 56);
      if (v76 != 0) {
        v77 = v76 - 1;
        *(_DWORD*)(v74 + 56) = v77;
        if (v75 == 0 || v77 != 0) {
          goto LABEL_113;
        }
      }
      else if (v75 == 0) {
        goto LABEL_113;
      }
      v109 = *(_DWORD*)(v75 + 284);
      if (v109 != 0) {
        *(_DWORD*)(v75 + 284) = v109 - 1;
      }
    }
  }
LABEL_113:
  v78 = *(_DWORD*)(v6 + 76);
  v79 = *(_QWORD*)(v6 + 48);
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v78 & 0xFFFFBFFF;
  v80 = (unsigned __int16)LFNT_map_char_plt(v6, v79, 0, 122, 0);
  if (v80 == 0) {
    *(_DWORD*)(v6 + 76) = v78;
    goto LABEL_124;
  }
  v81 = *(_DWORD*)(v6 + 76) | 0x4000;
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 76) = v81;
  if ((unsigned int)check_sfnt_plt(v6) != 0 ||
      (v82 = find_or_make_outline_plt(v6, *(_QWORD*)(v6 + 48),
                                      *(_QWORD*)(v6 + 56), 122, v80),
       *(_DWORD*)(v6 + 76) = v78, v82 == 0)) {
  LABEL_124:
    v13 = v150;
    if (v48 != 0x7FFFFFFF) {
      goto LABEL_125;
    }
    goto LABEL_126;
  }
  v83 = *(_QWORD*)v82;
  if (*(int*)(v82 + 24) >> 10 < v48) {
    v48 = *(int*)(v82 + 24) >> 10;
  }
  if (v83 == 0) {
    FSS_free_plt(v6, v82);
    v13 = v150;
    goto LABEL_125;
  }
  v84 = *(_QWORD*)(v83 + 24);
  v85 = *(_DWORD*)(v83 + 56);
  if (v85 != 0) {
    v13 = v150;
    v86 = v85 - 1;
    *(_DWORD*)(v83 + 56) = v86;
    if (v84 == 0 || v86 != 0) {
      goto LABEL_125;
    }
  }
  else {
    v13 = v150;
    if (v84 == 0) {
      goto LABEL_125;
    }
  }
  v110 = *(_DWORD*)(v84 + 284);
  if (v110 != 0) {
    *(_DWORD*)(v84 + 284) = v110 - 1;
  }
LABEL_125:
  *(_DWORD*)(v1 + 60) = v48;
LABEL_126:
  result = SdkRoutine_415a30(v6, 0x6Fu);
  v3 = v152;
  if (result != 0) {
  LABEL_127:
    *(_DWORD*)(v1 + 64) = *(int*)(result + 24) >> 10;
    result = FSS_free_char_plt((void*)v6, (void*)result);
  }
LABEL_128:
  if (*(_DWORD*)(v1 + 80) == 0) {
    *(_DWORD*)(v1 + 80) = 64;
  }
  v88 = *(_DWORD*)(v1 + 52);
  v87 = *(_DWORD*)(v1 + 56);
  if (v87 < v88 || (v89 = *(_DWORD*)(v1 + 64), v88 < v89) ||
      (v90 = *(_DWORD*)(v1 + 60), v89 < v90) ||
      (v91 = *(_DWORD*)(v1 + 68), v90 < v91) ||
      v91 < (signed __int32)*(_DWORD*)(v1 + 72)) {
    *(_WORD*)(*(_QWORD*)(v6 + 56) + 48LL) = 0;
    if ((v4 & v3) == 0xFFFF) {
      if (*(_WORD*)(v6 + 24) != 0) {
        v92 = 0;
        v93 = (_DWORD*)(*(_QWORD*)(v6 + 32) + 16LL);
        do {
          *v93 = 0;
          v93 += 6;
          ++v92;
        } while (v92 < *(unsigned __int16*)(v6 + 24));
      }
      goto LABEL_13;
    }
  LABEL_9:
    result = map_font_plt(v6, v3, v4);
    goto LABEL_14;
  }
  v94 = v88 | v87;
  v95 = *(_DWORD*)(v6 + 76);
  if (v94 == 0) {
    *(_DWORD*)(v6 + 76) = v95 & 0xFEBFFFFD | 2;
    v96 = (int*)SdkRoutine_415a30(v6, 0x31u);
    if (v96 != nullptr) {
      *(_DWORD*)(v1 + 68) = v96[5] >> 10;
      FSS_free_char_plt((void*)v6, v96);
    }
    v97 = (int*)SdkRoutine_415a30(v6, 0x37u);
    if (v97 != nullptr) {
      *v5 = v97[6] >> 10;
      FSS_free_char_plt((void*)v6, v97);
    }
    v98 = (int*)SdkRoutine_415a30(v6, 0x30u);
    if (v98 != nullptr) {
      *(_DWORD*)(v1 + 56) = v98[6] >> 10;
      *(_DWORD*)(v1 + 72) = v98[5] >> 10;
      FSS_free_char_plt((void*)v6, v98);
    }
    v99 = *(_DWORD*)(v1 + 56);
    *(_DWORD*)(v1 + 60) = *(_DWORD*)(v1 + 52);
    *(_DWORD*)(v1 + 64) = v99;
    v95 = *(_DWORD*)(v6 + 76);
  }
  if ((v13 & 0x8000000) == 0) {
  LABEL_180:
    *(_DWORD*)(v6 + 76) = v95 & 0xFEBFFFFD | 2;
    if ((v13 & 0x1000000) != 0) {
      v119 = (int*)SdkRoutine_415a30(v6, 0xD4F0u);
      if (v119 != nullptr) {
        *(_DWORD*)(v1 + 100) = v119[6] >> 10;
        *(_DWORD*)(v1 + 104) = v119[5] >> 10;
        FSS_free_char_plt((void*)v6, v119);
      }
      v120 = (int*)SdkRoutine_415a30(v6, 0xAC00u);
      if (v120 != nullptr) {
        *(_DWORD*)(v1 + 108) = v120[6] >> 10;
        *(_DWORD*)(v1 + 112) = v120[5] >> 10;
        FSS_free_char_plt((void*)v6, v120);
      }
    }
    if ((v15 & 0x8000) != 0) {
      v121 = (int*)SdkRoutine_415a30(v6, 0x93Eu);
      if (v121 != nullptr) {
        *(_DWORD*)(v1 + 116) = v121[6] >> 10;
        *(_DWORD*)(v1 + 120) = v121[5] >> 10;
        FSS_free_char_plt((void*)v6, v121);
      }
    }
    if ((v15 & 0x10000) != 0) {
      v122 = (int*)SdkRoutine_415a30(v6, 0x995u);
      if (v122 != nullptr) {
        *(_DWORD*)(v1 + 124) = v122[6] >> 10;
        *(_DWORD*)(v1 + 128) = v122[5] >> 10;
        FSS_free_char_plt((void*)v6, v122);
      }
    }
    if ((v15 & 0x20000) != 0) {
      v123 = (int*)SdkRoutine_415a30(v6, 0xA38u);
      if (v123 != nullptr) {
        *(_DWORD*)(v1 + 132) = v123[6] >> 10;
        *(_DWORD*)(v1 + 136) = v123[5] >> 10;
        FSS_free_char_plt((void*)v6, v123);
      }
    }
    if ((v15 & 0x40000) != 0) {
      v124 = (int*)SdkRoutine_415a30(v6, 0xA9Fu);
      if (v124 != nullptr) {
        *(_DWORD*)(v1 + 240) = v124[6] >> 10;
        *(_DWORD*)(v1 + 248) = v124[5] >> 10;
        FSS_free_char_plt((void*)v6, v124);
      }
      v125 = (int*)SdkRoutine_415a30(v6, 0xABEu);
      if (v125 != nullptr) {
        *(_DWORD*)(v1 + 252) = 0;
        *(_DWORD*)(v1 + 244) = v125[6] >> 10;
        FSS_free_char_plt((void*)v6, v125);
      }
      v127 = *(_DWORD*)(v1 + 240);
      v126 = *(_DWORD*)(v1 + 244);
      if (v126 > v127) {
        *(_DWORD*)(v1 + 240) = v126;
        *(_DWORD*)(v1 + 244) = v127;
      }
    }
    if ((v15 & 0x100000) != 0) {
      v128 = (int*)SdkRoutine_415a30(v6, 0xBAAu);
      if (v128 != nullptr) {
        *(_DWORD*)(v1 + 168) = v128[6] >> 10;
        *(_DWORD*)(v1 + 176) = v128[5] >> 10;
        FSS_free_char_plt((void*)v6, v128);
      }
      v129 = (int*)SdkRoutine_415a30(v6, 0xBB1u);
      if (v129 != nullptr) {
        *(_DWORD*)(v1 + 164) = v129[6] >> 10;
        FSS_free_char_plt((void*)v6, v129);
      }
      v130 = (int*)SdkRoutine_415a30(v6, 0xB95u);
      if (v130 != nullptr) {
        *(_DWORD*)(v1 + 172) = v130[5] >> 10;
        FSS_free_char_plt((void*)v6, v130);
      }
    }
    if ((v15 & 0x200000) != 0) {
      v131 = (int*)SdkRoutine_415a30(v6, 0xC05u);
      if (v131 != nullptr) {
        *(_DWORD*)(v1 + 140) = v131[6] >> 10;
        *(_DWORD*)(v1 + 144) = v131[5] >> 10;
        FSS_free_char_plt((void*)v6, v131);
      }
    }
    if ((v15 & 0x800000) != 0) {
      v132 = (int*)SdkRoutine_415a30(v6, 0xD20u);
      if (v132 != nullptr) {
        *(_DWORD*)(v1 + 148) = v132[6] >> 10;
        *(_DWORD*)(v1 + 156) = v132[5] >> 10;
        FSS_free_char_plt((void*)v6, v132);
      }
      v133 = (int*)SdkRoutine_415a30(v6, 0xD1Au);
      if (v133 != nullptr) {
        *(_DWORD*)(v1 + 152) = v133[6] >> 10;
        *(_DWORD*)(v1 + 160) = v133[5] >> 10;
        FSS_free_char_plt((void*)v6, v133);
      }
    }
    if ((v15 & 0x80000) != 0) {
      v134 = (int*)SdkRoutine_415a30(v6, 0xB20u);
      if (v134 != nullptr) {
        *(_DWORD*)(v1 + 180) = v134[6] >> 10;
        *(_DWORD*)(v1 + 188) = v134[5] >> 10;
        FSS_free_char_plt((void*)v6, v134);
      }
      v135 = (_DWORD*)SdkRoutine_415a30(v6, 0xB3Eu);
      if (v135 != nullptr) {
        *(_DWORD*)(v1 + 192) = 0;
        if (v135[5] != 0) {
          v136 = *(_DWORD*)(v1 + 180);
        }
        else {
          v136 = (int)v135[6] >> 10;
        }
        *(_DWORD*)(v1 + 184) = v136;
        FSS_free_char_plt((void*)v6, v135);
      }
    }
    if ((v14 & 0x200) != 0) {
      v137 = (int*)SdkRoutine_415a30(v6, 0xDA7u);
      *(_QWORD*)(v1 + 196) = 0;
      *(_DWORD*)(v1 + 208) = 0;
      if (v137 != nullptr) {
        *(_DWORD*)(v1 + 204) = v137[5] >> 10;
        FSS_free_char_plt((void*)v6, v137);
      }
    }
    if ((v15 & 0x1000000) != 0) {
      v138 = (int*)SdkRoutine_415a30(v6, 0xE01u);
      if (v138 != nullptr) {
        *(_DWORD*)(v1 + 212) = v138[6] >> 10;
        FSS_free_char_plt((void*)v6, v138);
      }
      v139 = (int*)SdkRoutine_415a30(v6, 0xE40u);
      if (v139 != nullptr) {
        *(_DWORD*)(v1 + 216) = v139[6] >> 10;
        FSS_free_char_plt((void*)v6, v139);
      }
      v140 = (int*)SdkRoutine_415a30(v6, 0xE07u);
      if (v140 != nullptr) {
        *(_DWORD*)(v1 + 220) = v140[5] >> 10;
        FSS_free_char_plt((void*)v6, v140);
      }
      v141 = (int*)SdkRoutine_415a30(v6, 0xE1Au);
      if (v141 != nullptr) {
        *(_DWORD*)(v1 + 224) = v141[5] >> 10;
        FSS_free_char_plt((void*)v6, v141);
      }
    }
    if ((v14 & 0x10000) != 0) {
      v142 = (int*)SdkRoutine_415a30(v6, 0x1783u);
      if (v142 != nullptr) {
        *(_DWORD*)(v1 + 236) = v142[5] >> 10;
        FSS_free_char_plt((void*)v6, v142);
      }
      v143 = (int*)SdkRoutine_415a30(v6, 0x1791u);
      if (v143 != nullptr) {
        *(_DWORD*)(v1 + 232) = v143[5] >> 10;
        *(_DWORD*)(v1 + 228) = v143[6] >> 10;
        FSS_free_char_plt((void*)v6, v143);
      }
    }
    if ((v15 & 0x2000 | v13 & 0x80000000 | v14 & 8) != 0) {
      v144 = (int*)SdkRoutine_415a30(v6, 0x62Au);
      if (v144 != nullptr) {
        *(_DWORD*)(v1 + 256) = v144[5] >> 10;
        FSS_free_char_plt((void*)v6, v144);
      }
    }
    result = FSS_set_cmap_plt(v6, v3, v4);
    goto LABEL_14;
  }
  *(_DWORD*)(v6 + 76) = v95 & 0xFEBFFFFD | 0x1400000;
  v100 = (void*)SdkRoutine_415a30(v6, 0x4E28u);
  if (v100 == nullptr ||
      (FSS_free_char_plt((void*)v6, v100),
       *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 40) + 16LL) + 960LL) != 0)) {
    v149 = v14;
    v151 = v13;
    v153 = v3;
    v101 = (void*)SdkRoutine_415a30(v6, 0x9748u);
    if (v101 != nullptr) {
      v102 = *(_QWORD*)(*(_QWORD*)(v1 + 40) + 16LL);
      v103 = *(_DWORD*)(v102 + 952);
      v104 = *(_DWORD*)(v102 + 956);
      FSS_free_char_plt((void*)v6, v101);
      v105 = 1;
    }
    else {
      v103 = 0;
      v104 = 0;
      v105 = 0;
    }
    v111 = (void*)SdkRoutine_415a30(v6, 0x9706u);
    if (v111 != nullptr) {
      ++v105;
      v112 = *(_QWORD*)(*(_QWORD*)(v1 + 40) + 16LL);
      v103 += *(_DWORD*)(v112 + 952);
      v104 += *(_DWORD*)(v112 + 956);
      FSS_free_char_plt((void*)v6, v111);
    }
    v113 = v15;
    v114 = v4;
    v115 = (int*)SdkRoutine_415a30(v6, 0x6797u);
    if (v115 != nullptr) {
      v116 = v115[6] >> 10;
      v117 = v115[5] >> 10;
      FSS_free_char_plt((void*)v6, v115);
    }
    else {
      v117 = 0x7FFFFFFF;
      v116 = 0x7FFFFFFF;
    }
    *(_DWORD*)(v1 + 92) = v116;
    *(_DWORD*)(v1 + 96) = v117;
    if (v105 != 0) {
      *(_DWORD*)(v1 + 84) = v103 / v105;
      v118 = v104 / v105;
    }
    else {
      v118 = 0x7FFFFFFF;
      *(_DWORD*)(v1 + 84) = 0x7FFFFFFF;
    }
    *(_DWORD*)(v1 + 88) = v118;
    v15 = v113;
    v13 = v151;
    v3 = v153;
    v4 = v114;
    v14 = v149;
    v95 = *(_DWORD*)(v6 + 76) & 0xFEFFFFFD | 2;
    goto LABEL_180;
  }
LABEL_153:
  result = FSS_set_cmap_plt(v6, v3, v4);
  v106 = *(_QWORD*)(v6 + 56);
  *(_DWORD*)(v6 + 76) = v7;
  *(_WORD*)(v106 + 48) = 0;
  return result;
}

__int64 FS_set_flags(__int64 a1, int a2)
{
  *(_DWORD*)(a1 + 72) = 0;
  if (a2 <= 3) {
    if (a2 <= -2050) {
      if (a2 == -12289 || a2 == -8193 || a2 == -4097) {
        goto LABEL_19;
      }
    }
    else if (a2 > -514) {
      if (a2 == -513) {
        *(_DWORD*)(a1 + 76) &= ~0x200u;
        return 0;
      }
      if (a2 == -509) {
        *(_DWORD*)(a1 + 76) &= 0xFFFFFE03;
        return 0;
      }
    }
    else {
      if (a2 == -2049) {
        *(_DWORD*)(a1 + 76) &= ~0x800u;
        return 0;
      }
      if (a2 == -1025) {
        *(_DWORD*)(a1 + 76) &= ~0x400u;
        return 0;
      }
    }
  }
  else {
    if (a2 <= 255) {
      if (((unsigned int)(a2 - 4) > 0x3C ||
           ((1LL << ((unsigned __int8)a2 - 4)) & 0x1000000010001011LL) == 0) &&
          a2 != 128) {
        goto LABEL_28;
      }
    LABEL_5:
      *(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 76) & 0xFFFFFE03 | a2;
      return 0;
    }
    if (a2 > 2047) {
      if (a2 == 2048) {
        *(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 76) & 0xFFFFF1FF | 0x800;
        return 0;
      }
      if (a2 == 4096 || a2 == 0x2000) {
        goto LABEL_29;
      }
    }
    else {
      switch (a2) {
      case 256:
        goto LABEL_5;
      case 512:
        *(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 76) & 0xFFFFF1FF | 0x200;
        return 0;
      case 1024:
        *(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 76) & 0xFFFFF1FF | 0x400;
        return 0;
      default:
        break;
      }
    }
  }
LABEL_28:
  if ((unsigned int)(a2 - 1) <= 1) {
  LABEL_29:
    *(_DWORD*)(a1 + 76) |= a2;
    return 0;
  }
  if ((unsigned int)(a2 + 3) <= 1) {
  LABEL_19:
    *(_DWORD*)(a1 + 76) &= a2;
    return 0;
  }
  if (a2 >= 0x4000) {
    if (a2 < 0x40000) {
      if (a2 >= 0x10000) {
        if (a2 == 0x10000) {
          *(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 76) & 0xFFF8FFFF | 0x10000;
          return 0;
        }
        if (a2 == 0x20000) {
          *(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 76) & 0xFFF8FFFF | 0x20000;
          return 0;
        }
        goto LABEL_75;
      }
      if (a2 == 0x4000) {
        *(_DWORD*)(a1 + 76) |= 0x4000u;
        return 0;
      }
      if (a2 == 0x8000) {
        goto LABEL_55;
      }
    }
    else if (a2 < 0x800000) {
      if (a2 == 0x40000) {
        *(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 76) & 0xFFF8FFFF | 0x40000;
        return 0;
      }
      if (a2 == 0x400000) {
        *(_DWORD*)(a1 + 76) |= 0x400000u;
        return 0;
      }
    }
    else {
      switch (a2) {
      case 0x800000:
        *(_DWORD*)(a1 + 76) |= 0x800000u;
        return 0;
      case 0x1000000:
        *(_DWORD*)(a1 + 76) |= 0x1000000u;
        return 0;
      case 0x2000000:
        *(_DWORD*)(a1 + 76) |= 0x2000000u;
        return 0;
      default:
        break;
      }
    }
  }
  else {
    if (a2 <= -262146) {
      if (a2 > -8388610) {
        if (a2 == -8388609) {
          *(_DWORD*)(a1 + 76) &= ~0x800000u;
          return 0;
        }
        if (a2 == -4194305) {
          *(_DWORD*)(a1 + 76) &= ~0x400000u;
          return 0;
        }
      }
      else {
        if (a2 == -33554433) {
          *(_DWORD*)(a1 + 76) &= ~0x2000000u;
          return 0;
        }
        if (a2 == -16777217) {
          *(_DWORD*)(a1 + 76) &= ~0x1000000u;
          return 0;
        }
      }
      goto LABEL_75;
    }
    if (a2 > -65538) {
      if (a2 != -65537) {
        if (a2 != -32769) {
          if (a2 == -16385) {
            *(_DWORD*)(a1 + 76) &= ~0x4000u;
            return 0;
          }
          goto LABEL_75;
        }
      LABEL_55:
        *(_DWORD*)(a1 + 72) = 438;
        return 438;
      }
    LABEL_64:
      *(_DWORD*)(a1 + 76) &= 0xFFF8FFFF;
      return 0;
    }
    if (a2 == -262145 || a2 == -131073) {
      goto LABEL_64;
    }
  }
LABEL_75:
  *(_DWORD*)(a1 + 72) = 612;
  return 612;
}

__int64 fs_api_416160(__int64 result, __int64 a2, __int64 a3, signed int a4,
                      __int64 a5)
{
  __int64 v5;
  __int64 v6;
  unsigned int v10;
  unsigned __int16* v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  struct {
    int v16;
    unsigned __int16 v17;
  } v16_;

  *(_DWORD*)a5 = 0;
  *(_WORD*)(a5 + 4) = 0;
  v5 = result;
  if (*(_WORD*)(a3 + 68) == 0) {
    goto LABEL_16;
  }
  v6 = *(_QWORD*)(a2 + 16);
  if (v6 != 0) {
    v10 = 0;
    v11 = (unsigned __int16*)(v6 + *(unsigned int*)(a3 + 64));
    do {
      v12 = __rev16(*v11);
      if ((int)(v12 << 16) > a4) {
        break;
      }
      *(_WORD*)a5 = v12;
      *(_WORD*)(a5 + 2) = bswap32(v11[1]) >> 16;
      *(_WORD*)(a5 + 4) = bswap32(v11[2]) >> 16;
      if (v12 << 16 == a4) {
        break;
      }
      v11 += 3;
      ++v10;
    } while (v10 < *(unsigned __int16*)(a3 + 68));
    goto LABEL_16;
  }
  result = FS_open_plt(result, *(_QWORD*)(a2 + 8));
  if (result == 0) {
    return result;
  }
  v13 = result;
  FS_seek_plt(v5, result, *(unsigned int*)(a3 + 64), 0);
  if (*(_WORD*)(a3 + 68) == 0) {
  LABEL_15:
    result = FS_close_plt(v5, v13);
  LABEL_16:
    *(_DWORD*)(v5 + 72) = 0;
    return result;
  }
  v14 = 0;
  while (1) {
    v16_.v17 = 0;
    v16_.v16 = 0;
    FS_read_plt(v5, v13, &v16_.v16, 6);
    if (*(_DWORD*)(v5 + 72) != 0) {
      return FS_close_plt(v5, v13);
    }
    v15 = __rev16((unsigned __int16)v16_.v16);
    if ((int)(v15 << 16) <= a4) {
      *(_WORD*)a5 = v15;
      *(_WORD*)(a5 + 2) = bswap32(HIWORD(v16_.v16)) >> 16;
      *(_WORD*)(a5 + 4) = bswap32(v16_.v17) >> 16;
      if (v15 << 16 != a4 &&
          ++v14 < (unsigned int)*(unsigned __int16*)(a3 + 68)) {
        continue;
      }
    }
    goto LABEL_15;
  }
}

__int64 FSS_get_ascender_descender_leading(__int64 a1, int* a2, _DWORD* a3,
                                           _DWORD* a4, int* a5)
{
  __int64 v5;
  __int64* v11;
  int v12;
  __int64 result;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;

  v5 = *(_QWORD*)(a1 + 16);
  if (v5 != 0) {
    if (*(_DWORD*)(a1 + 80) != 0 || *(_DWORD*)(a1 + 84) != 0 ||
        *(_DWORD*)(a1 + 88) != 0 || *(_DWORD*)(a1 + 92) != 0) {
      v11 = *(__int64**)(a1 + 32);
      if (v11 != nullptr) {
        *a2 = -655294464;
        *a3 = -655294464;
        *a4 = -655294464;
        *a5 = 0;
        v12 = *(unsigned __int16*)(v5 + 32);
        if (*(_WORD*)(v5 + 32) == 0) {
        LABEL_8:
          *(_DWORD*)(a1 + 72) = 0;
          return 0;
        }
        while (1) {
          v15 = *v11;
          v16 = v11[1];
          v27 = 0;
          v26 = 0;
          v25 = 0;
          if (v15 == 0 || v16 == 0) {
            goto LABEL_36;
          }
          v18 = *(_QWORD*)(v15 + 56);
          *(_QWORD*)(a1 + 48) = v18;
          *(_QWORD*)(a1 + 56) = v16;
          if ((unsigned int)check_sfnt_plt(a1) != 0) {
            return *(unsigned int*)(a1 + 72);
          }
          v19 = *(_QWORD*)(v16 + 40);
          if (v19 == 0) {
            result = 317;
            goto LABEL_39;
          }
          fs_api_419d40(a1, v18, *(unsigned __int16*)(v19 + 2) << 16,
                        (_DWORD*)&v27 + 1, &v27, &v26, &v25);
          result = *(unsigned int*)(a1 + 72);
          if ((_DWORD)result != 0) {
            return result;
          }
          v20 = HIDWORD(v27);
          if (*(_WORD*)(v16 + 24) != 0) {
            v21 = *(__int16*)(v16 + 24) << 16;
            v20 = HIDWORD(v27) + v21;
            LODWORD(v27) = v27 - v21;
            HIDWORD(v27) += v21;
          }
          if (v20 <= *a2) {
            break;
          }
          *a2 = v20;
          v22 = 1;
          v23 = v27;
          if ((int)v27 > (signed __int32)*a3) {
            goto LABEL_25;
          }
        LABEL_26:
          if (v26 <= (signed __int32)*a4) {
            v24 = *a5;
            if (*a5 == 0) {
              goto LABEL_9;
            }
          }
          else {
            ++v22;
            *a4 = v26;
            v24 = *a5;
            if (*a5 == 0) {
              goto LABEL_9;
            }
          }
          if (v22 == 3) {
          LABEL_9:
            v14 = v25;
            goto LABEL_10;
          }
          if (v22 != 0 && v24 != v25) {
            v14 = 4;
          LABEL_10:
            *a5 = v14;
          }
          --v12;
          v11 += 3;
          if ((_WORD)v12 == 0) {
            goto LABEL_8;
          }
        }
        v22 = 0;
        v23 = v27;
        if ((int)v27 <= (signed __int32)*a3) {
          goto LABEL_26;
        }
      LABEL_25:
        ++v22;
        *a3 = v23;
        goto LABEL_26;
      }
      result = 315;
    }
    else {
    LABEL_36:
      result = 302;
    }
  }
  else {
    result = 305;
  }
LABEL_39:
  *(_DWORD*)(a1 + 72) = result;
  return result;
}

__int64 FSS_get_table_structure(__int64 a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;

  v3 = *(_QWORD*)(a1 + 16);
  if (v3 == 0) {
    *(_DWORD*)(a1 + 72) = 305;
    return 305;
  }
  if (a2 > 1835104367) {
    switch (a2) {
    case 1835104368:
      if (*(_DWORD*)(v3 + 64) == 0) {
        goto LABEL_31;
      }
      v31 = 0;
      v18 = (__int64*)FSS_get_table_plt(a1, 1835104368, 2, &v31);
      if (v18 != nullptr) {
        v19 = *v18;
        v20 = v18[1];
        v21 = v18[3];
        *(_QWORD*)(a3 + 16) = v18[2];
        *(_QWORD*)(a3 + 24) = v21;
        *(_QWORD*)a3 = v19;
        *(_QWORD*)(a3 + 8) = v20;
        FSS_free_table_plt(a1, v18);
        swap_maxp_plt(a3);
        *(_DWORD*)(a1 + 72) = 0;
        return 0;
      }
      break;
    case 1851878757:
      if (*(_DWORD*)(v3 + 56) == 0) {
        goto LABEL_31;
      }
      v31 = 0;
      v28 = FSS_get_table_plt(a1, 1851878757, 2, &v31);
      if (v28 == 0) {
        break;
      }
      v17 = v28;
      v29 = get_abbreviated_name_plt(a1, v28);
      if (v29 == 0) {
        break;
      }
      v30 = v29;
      memcpy_plt(a3, v29, 2202);
      FSS_free_plt(a1, v30);
      goto LABEL_30;
    case 1986553185:
      if (*(_DWORD*)(v3 + 80) == 0) {
        goto LABEL_31;
      }
      v31 = 0;
      v12 = FSS_get_table_plt(a1, 1986553185, 2, &v31);
      if (v12 != 0) {
        *(_QWORD*)a3 = *(_QWORD*)v12;
        v13 = *(_QWORD*)(v12 + 8);
        v14 = *(_QWORD*)(v12 + 16);
        v15 = *(_QWORD*)(v12 + 24);
        *(_DWORD*)(a3 + 32) = *(_DWORD*)(v12 + 32);
        *(_QWORD*)(a3 + 16) = v14;
        *(_QWORD*)(a3 + 24) = v15;
        *(_QWORD*)(a3 + 8) = v13;
        FSS_free_table_plt(a1, v12);
        swap_vhea_plt(a3);
        *(_DWORD*)(a1 + 72) = 0;
        return 0;
      }
      break;
    default:
      goto LABEL_22;
    }
  LABEL_32:
    result = *(unsigned int*)(a1 + 72);
    if ((_DWORD)result != 405) {
      return result;
    }
    return fs_api_41a520_alt1(a1, *(_QWORD*)(v3 + 48), (unsigned int)a2, a3);
  }
  if (a2 == 1330851634) {
    if (*(_DWORD*)(v3 + 68) == 0) {
      goto LABEL_31;
    }
    v31 = 0;
    v16 = FSS_get_table_plt(a1, 1330851634, 2, &v31);
    if (v16 == 0) {
      goto LABEL_32;
    }
    v17 = v16;
    get_os2_plt(a3, v16);
  LABEL_30:
    FSS_free_table_plt(a1, v17);
    *(_DWORD*)(a1 + 72) = 0;
    return 0;
  }
  if (a2 == 1751474532) {
    if (*(_DWORD*)(v3 + 72) == 0) {
      goto LABEL_31;
    }
    v31 = 0;
    v22 = (__int64*)FSS_get_table_plt(a1, 1751474532, 2, &v31);
    if (v22 != nullptr) {
      v23 = *v22;
      v24 = v22[2];
      *(_QWORD*)(a3 + 8) = v22[1];
      *(_QWORD*)(a3 + 16) = v24;
      *(_QWORD*)a3 = v23;
      v25 = v22[3];
      v26 = v22[4];
      v27 = v22[5];
      *(_QWORD*)(a3 + 46) = *(__int64*)((char*)v22 + 46);
      *(_QWORD*)(a3 + 32) = v26;
      *(_QWORD*)(a3 + 40) = v27;
      *(_QWORD*)(a3 + 24) = v25;
      FSS_free_table_plt(a1, v22);
      swap_head_plt(a3);
      *(_DWORD*)(a1 + 72) = 0;
      return 0;
    }
    goto LABEL_32;
  }
  if (a2 != 1751672161) {
  LABEL_22:
    *(_DWORD*)(a1 + 72) = 441;
    return 441;
  }
  if (*(_DWORD*)(v3 + 76) != 0) {
    v31 = 0;
    v7 = FSS_get_table_plt(a1, 1751672161, 2, &v31);
    if (v7 != 0) {
      *(_QWORD*)a3 = *(_QWORD*)v7;
      v8 = *(_QWORD*)(v7 + 8);
      v9 = *(_QWORD*)(v7 + 16);
      v10 = *(_QWORD*)(v7 + 24);
      *(_DWORD*)(a3 + 32) = *(_DWORD*)(v7 + 32);
      *(_QWORD*)(a3 + 16) = v9;
      *(_QWORD*)(a3 + 24) = v10;
      *(_QWORD*)(a3 + 8) = v8;
      FSS_free_table_plt(a1, v7);
      swap_hhea_plt(a3);
      *(_DWORD*)(a1 + 72) = 0;
      return 0;
    }
    goto LABEL_32;
  }
LABEL_31:
  *(_DWORD*)(a1 + 72) = 405;
  return fs_api_41a520_alt1(a1, *(_QWORD*)(v3 + 48), (unsigned int)a2, a3);
}

__int64 fs_api_41a520(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  if (*(_BYTE*)(a2 + 65) == 6) {
    *(_DWORD*)(a1 + 72) = 441;
    return 441;
  }
  if (*(_QWORD*)(a2 + 56) != 0 &&
      (*(_DWORD*)(a1 + 72) = 0, (v5 = *(_QWORD**)(a2 + 56)) != nullptr)) {
    if (a3 <= 1835104367) {
    LABEL_6:
      if (a3 != 1330851634) {
        if (a3 == 1751474532) {
          v30 = (__int64*)v5[6];
          v31 = *v30;
          v32 = v30[2];
          *(_QWORD*)(a4 + 8) = v30[1];
          *(_QWORD*)(a4 + 16) = v32;
          *(_QWORD*)a4 = v31;
          v33 = v30[3];
          v34 = v30[4];
          v35 = v30[5];
          *(_QWORD*)(a4 + 46) = *(__int64*)((char*)v30 + 46);
          *(_QWORD*)(a4 + 32) = v34;
          *(_QWORD*)(a4 + 40) = v35;
          *(_QWORD*)(a4 + 24) = v33;
          goto LABEL_24;
        }
        if (a3 == 1751672161) {
          v6 = v5[7];
        LABEL_17:
          *(_QWORD*)a4 = *(_QWORD*)v6;
          v11 = *(_QWORD*)(v6 + 8);
          v12 = *(_QWORD*)(v6 + 16);
          v13 = *(_QWORD*)(v6 + 24);
          *(_DWORD*)(a4 + 32) = *(_DWORD*)(v6 + 32);
          *(_QWORD*)(a4 + 16) = v12;
          *(_QWORD*)(a4 + 24) = v13;
          *(_QWORD*)(a4 + 8) = v11;
        LABEL_24:
          *(_DWORD*)(a1 + 72) = 0;
          return 0;
        }
        goto LABEL_21;
      }
      v14 = v5[23];
      if (v14 != 0) {
        *(_QWORD*)a4 = *(_QWORD*)v14;
        v15 = *(_QWORD*)(v14 + 8);
        v16 = *(_QWORD*)(v14 + 16);
        v17 = *(_QWORD*)(v14 + 32);
        *(_QWORD*)(a4 + 24) = *(_QWORD*)(v14 + 24);
        *(_QWORD*)(a4 + 32) = v17;
        *(_QWORD*)(a4 + 8) = v15;
        *(_QWORD*)(a4 + 16) = v16;
        v18 = *(_QWORD*)(v14 + 40);
        v19 = *(_QWORD*)(v14 + 48);
        v20 = *(_QWORD*)(v14 + 64);
        *(_QWORD*)(a4 + 56) = *(_QWORD*)(v14 + 56);
        *(_QWORD*)(a4 + 64) = v20;
        *(_QWORD*)(a4 + 40) = v18;
        *(_QWORD*)(a4 + 48) = v19;
        v21 = *(_QWORD*)(v14 + 72);
        v22 = *(_QWORD*)(v14 + 80);
        v23 = *(_QWORD*)(v14 + 88);
        *(_DWORD*)(a4 + 96) = *(_DWORD*)(v14 + 96);
        *(_QWORD*)(a4 + 80) = v22;
        *(_QWORD*)(a4 + 88) = v23;
        *(_QWORD*)(a4 + 72) = v21;
        goto LABEL_24;
      }
    LABEL_25:
      v29 = 405;
      goto LABEL_26;
    }
  }
  else {
    v7 = a3;
    v8 = a4;
    v9 = a1;
    if ((unsigned int)load_fnt_plt(a1, a2) != 0) {
      return *(unsigned int*)(v9 + 72);
    }
    v5 = *(_QWORD**)(a2 + 56);
    a1 = v9;
    a4 = v8;
    a3 = v7;
    if (v7 <= 1835104367) {
      goto LABEL_6;
    }
  }
  switch (a3) {
  case 1835104368:
    v24 = (__int64*)v5[9];
    v25 = *v24;
    v26 = v24[1];
    v28 = v24[2];
    v27 = v24[3];
    *(_QWORD*)(a4 + 16) = v28;
    *(_QWORD*)(a4 + 24) = v27;
    *(_QWORD*)a4 = v25;
    *(_QWORD*)(a4 + 8) = v26;
    goto LABEL_24;
  case 1851878757:
    v36 = a1;
    memcpy_plt(a4, v5[24], 2202);
    a1 = v36;
    goto LABEL_24;
  case 1986553185:
    v6 = v5[8];
    if (v6 != 0) {
      goto LABEL_17;
    }
    goto LABEL_25;
  default:
    break;
  }
LABEL_21:
  v29 = 441;
LABEL_26:
  *(_DWORD*)(a1 + 72) = v29;
  return v29;
}

__int64 fs_api_41a8c0(__int64 result, __int64 a2, char a3, unsigned __int16 a4,
                      unsigned __int16 a5, _WORD* a6, _WORD* a7)
{
  __int64 v7;
  int v8;
  int v9;
  unsigned int v15;
  unsigned int v16;
  unsigned __int16 v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  bool v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  struct {
    int v32;
    unsigned __int16 v33;
  } v32_;
  int v34;
  char v35[4];
  char v36[4];
  unsigned __int16 v37;
  unsigned __int16 v38[2];
  unsigned __int16 v39;

  v7 = result;
  v39 = 0;
  if (a3 == 6) {
    v8 = 441;
    goto LABEL_34;
  }
  v9 = *(_DWORD*)(a2 + 228);
  if (v9 == 0) {
    v8 = 405;
    goto LABEL_34;
  }
  v36[0] = 0;
  v35[0] = 0;
  v34 = 0;
  v32_.v32 = 0;
  v32_.v33 = 0;
  v38[0] = 0;
  v37 = 0;
  result = ttf_read_buf_plt(result, a2, (unsigned int)(v9 + 4), 2, v38);
  v15 = v38[0];
  v16 = 0;
  v17 = __rev16(v38[0]);
  v38[0] = v17;
  if (v15 != 0) {
    v18 = v9 + 6;
    v19 = a4;
    v20 = v18;
    do {
      v34 = 0;
      result = ttf_read_buf_plt(v7, a2, v18, 4, &v34);
      v22 = BYTE1(v34) == 0 && BYTE2(v34) == 0 && HIBYTE(v34) == 0;
      if (v22 ||
          (v23 = BYTE1(v34) * a5) >= v23 % BYTE2(v34) + BYTE2(v34) * v19 &&
              v23 <= v23 % HIBYTE(v34) + HIBYTE(v34) * v19) {
        result = ttf_read_buf_plt(v7, a2, v20 + 4 * v38[0], 2, &v39);
        v15 = bswap32(v39) >> 16;
        v17 = v38[0];
        v39 = v15;
        goto LABEL_17;
      }
      ++v16;
      v20 += 2;
      v18 += 4;
    } while (v16 < v38[0]);
    v15 = 0;
    if ((unsigned __int16)v16 != v38[0]) {
      goto LABEL_21;
    }
  LABEL_18:
    v8 = 517;
    goto LABEL_34;
  }
LABEL_17:
  if ((unsigned __int16)v16 == v17) {
    goto LABEL_18;
  }
LABEL_21:
  v24 = *(_DWORD*)(a2 + 228) + v15;
  ttf_read_buf_plt(v7, a2, v24, 2, &v37);
  v37 = bswap32(v37) >> 16;
  ttf_read_buf_plt(v7, a2, v24 + 2, 1, v36);
  result = ttf_read_buf_plt(v7, a2, v24 + 3, 1, v35);
  v8 = 518;
  if ((unsigned __int8)v36[0] <= (unsigned int)a5 &&
      (unsigned __int8)v35[0] >= (unsigned int)a5 && v37 != 0) {
    v25 = v24 + 4;
    v26 = 0;
    while (1) {
      result = ttf_read_buf_plt(v7, a2, v25, 6, &v32_.v32);
      v27 = (unsigned __int16)v32_.v32;
      v28 = bswap32((unsigned __int16)v32_.v32) >> 16;
      v29 = HIWORD(v32_.v32);
      LOWORD(v32_.v32) = v28;
      HIWORD(v32_.v32) = bswap32(HIWORD(v32_.v32)) >> 16;
      v30 = v32_.v33;
      v32_.v33 = bswap32(v32_.v33) >> 16;
      if (v28 == a5) {
        break;
      }
      if ((unsigned __int16)__rev16(v27) > (unsigned int)a5) {
        v8 = 518;
        goto LABEL_34;
      }
      v31 = v37;
      v25 += 6;
      if (++v26 >= (unsigned int)v37) {
        goto LABEL_30;
      }
    }
    *a6 = __rev16(v29);
    v31 = v37;
    *a7 = __rev16(v30);
  LABEL_30:
    if (v26 == v31) {
      v8 = 518;
    }
    else {
      v8 = 0;
    }
  }
LABEL_34:
  *(_DWORD*)(v7 + 72) = v8;
  return result;
}

__int64 FSS_get_ppem_size(__int64 a1, unsigned __int16 a2, unsigned int a3)
{
  __int64 v3;
  __int64* v5;
  unsigned int v6;
  __int16 v7;
  unsigned __int16 v8;
  unsigned __int16 v9;
  __int64* v10;
  __int64 v11;
  unsigned int v12;
  char v13;
  int v14;
  char v15;
  int v16;
  _BOOL4 v18;
  _BYTE v20[2];
  __int16 v21;
  unsigned __int16 v22;
  _BYTE v23[4];
  _BYTE v24[4];
  __int64 v25;

  v3 = *(_QWORD*)(a1 + 16);
  *(_DWORD*)(a1 + 72) = 0;
  if (v3 == 0) {
    *(_DWORD*)(a1 + 72) = 305;
    return a3;
  }
  v5 = *(__int64**)(a1 + 32);
  if (v5 == nullptr) {
    a3 = 0;
    *(_DWORD*)(a1 + 72) = 315;
    return a3;
  }
  v6 = (unsigned __int16)a3;
  v18 = (unsigned __int16)a3 != 0;
  while (2) {
    if (v6 < 2) {
      return v18;
    }
    v7 = *(_WORD*)(v3 + 32);
    if (v7 == 0) {
      return v6;
    }
    v8 = 0;
    v9 = 0;
    v10 = v5;
    do {
      v11 = *(_QWORD*)(*v10 + 56);
      if (v11 == 0) {
        v16 = 303;
      LABEL_30:
        *(_DWORD*)(a1 + 72) = v16;
        return 0;
      }
      fs_api_416160(a1, v3, *v10, v6 << 16, (__int64)v20);
      if (*(_DWORD*)(a1 + 72) != 0) {
        return 0;
      }
      if (v21 != 0) {
        if (v21 < 0) {
          v12 = v6 - ((-v21 & 0xFF00u) >> 8);
        }
        else {
          v12 = v6 + ((v21 & 0xFF00u) >> 8);
        }
        v13 = *(_BYTE*)(v11 + 36);
        v25 = 0;
        if (((unsigned __int8)v12 & ((v13 & 0x40) != 0)) == 1) {
        LABEL_14:
          --v12;
        }
      }
      else {
        v12 = v6;
        v15 = *(_BYTE*)(v11 + 36);
        v25 = 0;
        if (((unsigned __int8)v6 & ((v15 & 0x40) != 0)) == 1) {
          goto LABEL_14;
        }
      }
      fs_api_419d40_alt1(a1, v11, v12 << 16, (char*)&v25 + 4, &v25, v24, v23);
      if (*(_DWORD*)(a1 + 72) != 0) {
        v16 = 405;
        goto LABEL_30;
      }
      --v7;
      v10 += 3;
      v14 = v22 << 16;
      if (v8 <= (unsigned int)(HIDWORD(v25) + v14 + 0x8000) >> 16) {
        v8 = (unsigned int)(HIDWORD(v25) + v14 + 0x8000) >> 16;
      }
      if (v9 <= (unsigned int)(v25 - v14 + 0x8000) >> 16) {
        v9 = (unsigned int)(v25 - v14 + 0x8000) >> 16;
      }
    } while (v7 != 0);
    a3 = v6--;
    if ((unsigned __int16)(v8 + v9) > (unsigned int)a2) {
      continue;
    }
    return a3;
  }
}

__int64 FSS_get_advance(__int64 a1, __int64 a2, unsigned int a3, __int16* a4,
                        __int16* a5, int* a6, int* a7)
{
  unsigned int v13;
  __int64 result;
  __int64* v15;
  __int64 v16;
  unsigned __int16 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  void* v31;
  __int16 v32;
  unsigned __int16 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  bool v37;
  int v38;
  __int64 v40;
  _WORD* v41;
  char v42;
  __int16 v43;
  struct {
    int v44;
    int v45;
  } v44_;

  *(_DWORD*)(a1 + 72) = 0;
  *a7 = 0;
  *a6 = 0;
  *a5 = 0;
  *a4 = 0;
  v13 = map_char_plt();
  result = *(unsigned int*)(a1 + 72);
  if ((_DWORD)result != 0) {
    return result;
  }
  if ((unsigned int)check_sfnt_plt(a1) != 0) {
    return *(unsigned int*)(a1 + 72);
  }
  v15 = *(__int64**)(a1 + 56);
  v16 = v15[5];
  if (v16 == 0) {
    *(_DWORD*)(a1 + 72) = 317;
    return 317;
  }
  v17 = v13;
  if (*(_BYTE*)(v16 + 4) != 0) {
    v18 = *(_QWORD*)(a1 + 48);
    if (*(_BYTE*)(v18 + 65) != 6) {
      v27 = *(_QWORD*)(v18 + 56);
      if (v27 == 0) {
        *(_DWORD*)(a1 + 72) = 304;
        return 304;
      }
      v28 = *(_QWORD*)(v27 + 48);
      if (v28 == 0 || (*(_WORD*)(v28 + 16) & 0x10) != 0) {
        if (*(_DWORD*)(v27 + 224) != 0 && (*(_BYTE*)(a1 + 76) & 2) == 0) {
          if (*(_DWORD*)(v16 + 8) != -1) {
            fs_api_41b210(a1, v15, (unsigned __int16)v13, &v43);
            v17 = v13;
            if (*(_DWORD*)(a1 + 72) == 0) {
              v29 = v43;
              *a6 = v43 << 16;
              *a6 = (*(unsigned __int16*)(v16 + 14) + v29) << 16;
            }
          }
          *(_DWORD*)(a1 + 72) = 0;
          v19 = *a6;
          if (*a6 != 0) {
            goto LABEL_10;
          }
          goto LABEL_9;
        }
      }
      else {
        get_glyph_advance_plt(a1, *(_QWORD*)(v16 + 16), v13, a6, a7);
        result = *(unsigned int*)(a1 + 72);
        if ((_DWORD)result != 0) {
          return result;
        }
        v17 = v13;
        if ((*(_BYTE*)(*(_QWORD*)(a1 + 48) + 36LL) & 2) == 0) {
          v19 = *a6 + (*(unsigned __int16*)(v16 + 14) << 16);
          *a6 = v19;
          if (v19 != 0) {
            goto LABEL_10;
          }
          goto LABEL_9;
        }
      }
    }
  }
  v19 = *a6;
  if (*a6 != 0) {
    goto LABEL_10;
  }
LABEL_9:
  if (*a7 == 0) {
    v30 = find_advance_in_cache_plt(a1, v17, a3);
    if (v30 != 0) {
      v31 = (void*)v30;
      *a6 = *(_DWORD*)(v30 + 16);
      *a7 = *(_DWORD*)(v30 + 20);
      *a4 = *(_WORD*)(v30 + 12);
      v32 = *(_WORD*)(v30 + 14);
    }
    else {
      if ((a3 & 0xE) == 0 ||
          ((a3 & 4) != 0 ? (v34 = 32719, v33 = v13)
           : (v33 = v13, (a3 & 8) != 0)
               ? (v34 = 32713)
               : (v34 = ((unsigned __int16)a3 << 30 >> 31) & 0x7FCD),
           (v35 = find_graymap_in_cache_plt(a1, v33, v34)) == 0 &&
               ((*(_WORD*)(a1 + 76) & 0x20FC) != 0 ||
                (v35 = get_embedded_graymap_plt(a1, *(_QWORD*)(a1 + 56), v13,
                                                a3)) == 0))) {
        if ((a3 & 0xE0F) != 1 || (v35 = get_embedded_bitmap_plt(
                                      a1, *(_QWORD*)(a1 + 56), v13)) == 0) {
          v36 = *(unsigned __int8*)(**(_QWORD**)(a1 + 56) + 65LL);
          v37 = v36 > 7;
          v38 = (1 << v36) & 0x83;
          if (v37 || v38 == 0) {
            *(_DWORD*)(a1 + 72) = 436;
            return 436;
          }
          v40 = make_outline_ttf_plt(a1);
          if (v40 != 0) {
            *(_BYTE*)(v40 + 48) = 0;
            v41 = (_WORD*)v40;
            v42 = *(_BYTE*)(a1 + 109);
            *(_BYTE*)(v40 + 48) = v42;
            if ((*(_BYTE*)(a1 + 79) & 0x10) != 0) {
              *(_BYTE*)(v40 + 48) = v42 | 2;
            }
            *a6 = *(_DWORD*)(v40 + 32);
            *a7 = *(_DWORD*)(v40 + 36);
            fs_api_41b420(a1, v16, *(_WORD*)(v40 + 44) == 0, a6, a7);
            if (v41[14] != 0) {
              *a4 = (unsigned int)(*a6 + 0x8000) >> 16;
            }
            if (v41[15] != 0) {
              *a5 = (unsigned int)(*a7 + 0x8000) >> 16;
            }
            FSS_free_char_plt((void*)a1, v41);
            fs_api_41b540(a1, (unsigned __int16)v13, a3, *a4, *a5, *a6, *a7);
          }
          return *(unsigned int*)(a1 + 72);
        }
      }
      v31 = (void*)v35;
      *a6 = *(_DWORD*)(v35 + 20);
      *a7 = *(_DWORD*)(v35 + 24);
      *a4 = *(_WORD*)(v35 + 16);
      v32 = *(_WORD*)(v35 + 18);
    }
    *a5 = v32;
    FSS_free_char_plt((void*)a1, v31);
    return *(unsigned int*)(a1 + 72);
  }
LABEL_10:
  v20 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 36LL);
  if ((v20 & 2) != 0) {
    v21 = *(_DWORD*)(a1 + 76);
    if ((v21 & 0x200) != 0 || (v20 & 0x40) != 0 && (v21 & 0xC00) == 0 &&
                                  *(unsigned __int16*)(a1 + 112) < 0x1Bu) {
      v22 = 0;
    }
    else {
      v22 = *(unsigned __int16*)(v16 + 14);
      if (*(_WORD*)(v16 + 14) != 0) {
        v23 = *(_QWORD*)(a1 + 56);
        v24 = *(_DWORD*)(v23 + 8);
        LODWORD(v23) = *(_DWORD*)(v23 + 16);
        v44_.v44 = v24;
        v44_.v45 = v23;
        fixed_norm_plt(&v44_.v44);
        v25 = *(__int16*)(v16 + 14);
        v22 = v44_.v44 * v25;
        v26 = v44_.v45 * v25;
        v19 = *a6;
      LABEL_37:
        *a6 = v19 + v22;
        *a7 += v26;
        v19 = *a6;
        goto LABEL_38;
      }
    }
    v26 = 0;
    goto LABEL_37;
  }
LABEL_38:
  if (v19 != 0 && *a7 != 0) {
    return 0;
  }
  *a4 = (unsigned int)(v19 + 0x8000) >> 16;
  *a5 = (unsigned int)(*a7 + 0x8000) >> 16;
  return 0;
}

__int64 fs_api_41b210(__int64 result, __int64* a2, unsigned int a3, _WORD* a4)
{
  __int64 v4;
  unsigned __int16* v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  _BYTE v16[4];
  _BYTE v17[4];
  _BYTE v18[4];
  _WORD v19[2];
  unsigned int v20;

  *a4 = 0;
  if (a2 != nullptr) {
    v4 = *a2;
    if (*a2 != 0) {
      if (*(_BYTE*)(v4 + 65) == 6) {
        *(_DWORD*)(result + 72) = 441;
      }
      else {
        v5 = *(unsigned __int16**)(*(_QWORD*)(result + 56) + 40LL);
        if (v5 != nullptr) {
          v6 = *(_QWORD*)(v4 + 56);
          v7 = *(_DWORD*)(v6 + 224);
          if (v7 != 0) {
            v8 = *((_DWORD*)v5 + 2);
            if (v8 != 0) {
              v16[0] = 0;
              result = ttf_read_buf_plt(result, v6, a3 + v8 + 2, 1, v16);
              *a4 = v16[0];
            }
            else {
              v10 = *v5;
              v19[0] = 0;
              v20 = 0;
              v12 = result;
              ttf_read_buf_plt(result, v6, (unsigned int)(v7 + 2), 2, v19);
              v13 = v12;
              v19[0] = bswap32(v19[0]) >> 16;
              result =
                  ttf_read_buf_plt(v12, v6, (unsigned int)(v7 + 4), 4, &v20);
              v20 = bswap32(v20);
              if (a3 >= *(unsigned __int16*)(*(_QWORD*)(v6 + 72) + 4LL)) {
                *(_DWORD*)(v12 + 72) = 406;
              }
              else {
                result = v12;
                if (v19[0] != 0) {
                  v14 = v7 + 8;
                  v15 = 0;
                  while (1) {
                    v18[0] = 0;
                    ttf_read_buf_plt(result, v6, v14, 1, v18);
                    if (v18[0] > v10) {
                      result = v13;
                      goto LABEL_22;
                    }
                    if (v18[0] == v10) {
                      break;
                    }
                    ++v15;
                    result = v13;
                    v14 += v20;
                    if (v15 >= v19[0]) {
                      goto LABEL_22;
                    }
                  }
                  v17[0] = 0;
                  result = ttf_read_buf_plt(v13, v6, a3 + v14 + 2, 1, v17);
                  *a4 = v17[0];
                  *((_DWORD*)v5 + 2) = v14;
                }
                else {
                LABEL_22:
                  *((_DWORD*)v5 + 2) = -1;
                  *(_DWORD*)(result + 72) = 522;
                }
              }
            }
          }
          else {
            *(_DWORD*)(result + 72) = 405;
          }
        }
        else {
          *(_DWORD*)(result + 72) = 317;
        }
      }
    }
    else {
      *(_DWORD*)(result + 72) = 303;
    }
  }
  else {
    *(_DWORD*)(result + 72) = 302;
  }
  return result;
}

__int64 fs_api_41b420(__int64 result, __int64 a2, __int16 a3, _DWORD* a4,
                      _DWORD* a5)
{
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  __int64 v10;
  _DWORD* v11;
  _DWORD* v12;
  int v14;
  int v15;
  int v16;
  int v17;

  v5 = *(_DWORD*)(*(_QWORD*)(result + 48) + 36LL);
  if ((v5 & 2) != 0) {
    v6 = *(_DWORD*)(result + 76);
    if ((v6 & 0x200) != 0 ||
        (v5 & 0x40) != 0 &&
            ((v6 & 0xC00) == 0
                 ? (v7 = *(unsigned __int16*)(result + 112) >= 0x1Bu)
                 : (v7 = true),
             !v7)) {
      v8 = 0;
      v9 = 0;
    }
    else {
      v8 = 0;
      if (a3 != 0) {
        v9 = 0;
      }
      else {
        v9 = 0;
        if (*(_WORD*)(a2 + 14) != 0) {
          v10 = *(_QWORD*)(result + 56);
          v11 = a5;
          v12 = a4;
          v14 = *(_DWORD*)(v10 + 8);
          LODWORD(v10) = *(_DWORD*)(v10 + 16);
          v16 = v14;
          v17 = v10;
          result = fixed_norm_plt(&v16);
          v15 = *(__int16*)(a2 + 14);
          a4 = v12;
          a5 = v11;
          v8 = v16 * v15;
          v9 = v17 * v15;
        }
      }
    }
    *a4 += v8;
    *a5 += v9;
  }
  return result;
}

__int64 fs_api_41b540(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4,
                      __int16 a5, int a6, int a7)
{
  __int64 result;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  bool v20;
  int v21;

  result = FSS_malloc_plt(a1, 24);
  if (result == 0) {
    return result;
  }
  v15 = (__int64*)result;
  *(_DWORD*)(result + 16) = a6;
  *(_DWORD*)(result + 20) = a7;
  *(_WORD*)(result + 12) = a4;
  *(_WORD*)(result + 14) = a5;
  *(_DWORD*)(result + 8) = 24;
  *(_QWORD*)result = 0;
  result = save_advance_to_cache_plt(a1, a2, a3, result);
  v16 = *v15;
  if (*v15 == 0) {
    return FSS_free_plt(a1, v15);
  }
  v17 = *(_QWORD*)(v16 + 24);
  v18 = *(_DWORD*)(v16 + 56);
  if (v18 == 0) {
    if (v17 == 0) {
      return result;
    }
    goto LABEL_11;
  }
  v19 = v18 - 1;
  v20 = v17 != 0 && v19 == 0;
  *(_DWORD*)(v16 + 56) = v19;
  if (v20) {
  LABEL_11:
    v21 = *(_DWORD*)(v17 + 284);
    if (v21 != 0) {
      *(_DWORD*)(v17 + 284) = v21 - 1;
    }
  }
  return result;
}

__int64 FSS_get_available_fonts(__int64* a1, int a2, int a3, __int64* a4,
                                _DWORD* a5)
{
  __int64* v5;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  _BYTE* v19;
  __int64 v20;
  __int64 result;
  _BYTE* v22;
  _BYTE* v23;
  _BYTE* v24;
  int v25;

  if (*(_BYTE*)(a1[16] + 16760) == 0) {
    return 201;
  }
  v5 = a1;
  v9 = malloc_plt(256);
  *a4 = v9;
  if (v9 == 0) {
    *a5 = 0;
    return 201;
  }
  *a5 = 256;
  v10 = (_BYTE*)*a4;
  *(_WORD*)*a4 = 0;
  do {
    v11 = (_QWORD*)v5[1];
    if (v11 != nullptr) {
      while (a2 != 4) {
        v12 = *(_QWORD*)(v11[1] + 48LL);
        if (*(_QWORD*)(v12 + 56) == 0 ||
            (*((_DWORD*)v5 + 18) = 0, *(_QWORD*)(v12 + 56) == 0)) {
          if ((unsigned int)load_fnt_plt(v5, v12) != 0) {
            goto LABEL_8;
          }
        }
        if (*(unsigned __int8*)(v12 + 65) > 1u) {
          *((_DWORD*)v5 + 18) = 436;
          goto LABEL_8;
        }
        if (SdkData_bb2c80[*(_WORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 56) + 48LL) +
                                     44LL) &
                           3] == a2) {
          break;
        }
      LABEL_8:
        v11 = (_QWORD*)v11[3];
        if (v11 == nullptr) {
          goto LABEL_4;
        }
      }
      if (a3 == 2) {
      LABEL_31:
        v17 = *v11;
        v18 = strlen_plt(*v11);
        v19 = &v10[-*a4];
        if ((__int64)&v19[v18 + 2] > (unsigned int)*a5) {
          v20 = FSS_realloc_plt(v5);
          if (v20 == 0) {
            return 201;
          }
          *a4 = v20;
          *a5 += 256;
          v17 = *v11;
          v10 = (_BYTE*)(*a4 + (unsigned int)v19);
        }
        strncpy_plt(v10, v17, v18);
        v10[v18] = 0;
        v10 += v18 + 1;
        *v10 = 0;
        goto LABEL_8;
      }
      v13 = *(_QWORD*)(v11[1] + 48LL);
      if (*(_QWORD*)(v13 + 56) != 0 &&
              (*((_DWORD*)v5 + 18) = 0, *(_QWORD*)(v13 + 56) != 0) ||
          (unsigned int)load_fnt_plt(v5, v13) == 0) {
        if (*(unsigned __int8*)(v13 + 65) > 1u) {
          *((_DWORD*)v5 + 18) = 436;
        }
        else {
          v14 = *(_QWORD*)(*(_QWORD*)(v13 + 56) + 184LL);
          if (v14 != 0) {
            v15 = *(unsigned __int8*)(v14 + 32);
            v16 = 2;
            if (v15 > 3) {
              if (v15 == 5) {
                goto LABEL_37;
              }
              if (v15 != 4) {
                goto LABEL_30;
              }
            }
            else if (v15 != 2) {
              if (v15 != 3) {
              LABEL_30:
                if (v16 != a3) {
                  goto LABEL_8;
                }
                goto LABEL_31;
              }
            LABEL_37:
              v16 = *(unsigned __int8*)(v14 + 35) == 3;
              goto LABEL_30;
            }
            v16 = *(unsigned __int8*)(v14 + 35) == 9;
            goto LABEL_30;
          }
        }
      }
      v16 = 2;
      goto LABEL_30;
    }
  LABEL_4:
    v5 = (__int64*)*v5;
  } while (v5 != nullptr);
  v22 = (_BYTE*)*a4;
  v23 = v22;
  do {
    v24 = &v23[strlen_plt(v23)];
    v25 = (unsigned __int8)v24[1];
    v23 = v24 + 2;
    *v24 = 44;
  } while (v25 != 0);
  result = 0;
  if (v24 >= v22) {
    *v24 = 0;
  }
  return result;
}

#pragma GCC visibility pop
