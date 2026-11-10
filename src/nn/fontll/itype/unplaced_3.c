#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FSS_calloc_plt(_QWORD, _QWORD);
__int64 FSS_free_char_plt(void* this_, void*);
__int64 FSS_free_plt(_QWORD, _QWORD);
__int64 FSS_get_bitmap_plt(_QWORD, _QWORD);
__int64 FSS_malloc_plt(_QWORD, _QWORD);
__int64 FSS_set_scale_plt(void* this_, int, int, int, int);
__int64 FS_close_plt(_QWORD, _QWORD);
__int64 FS_open_plt(_QWORD, _QWORD);
__int64 FS_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FS_seek_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FsLttComponent_init_plt(_QWORD, _QWORD);
__int64 IDIV_plt(_QWORD, _QWORD);
__int64 SdkRoutine_44dba0(int, int, unsigned int, __int64);
__int64 Soften_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 cff_GridFit_plt(_QWORD, _QWORD, _QWORD);
__int64 check_sfnt_plt(_QWORD);
__int64 delete_kern_plt(_QWORD, _QWORD);
__int64 delete_key_plt(_QWORD, _QWORD);
__int64 embolden_outline_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 emboss_graymap_plt(_QWORD);
__int64 engrave_graymap_plt(_QWORD);
__int64 extract_outline_plt(_QWORD, _QWORD);
__int64 fill_outline_cff_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD, _QWORD);
__int64 fill_outline_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 find_graymap_in_cache_plt(_QWORD, _QWORD, _QWORD);
__int64 find_or_make_outline_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fix_fnt_plt(_QWORD, _QWORD);
__int64 fixed_norm_plt(_QWORD);
__int64 fs__free_plt(_QWORD, _QWORD);
__int64 fs__malloc_plt(_QWORD, _QWORD);
__int64 fsg_GridFit_plt(_QWORD, _QWORD, _QWORD);
__int64 get_abbreviated_name_plt(_QWORD, _QWORD);
__int64 get_dropout_control_plt(_QWORD);
__int64 get_embedded_graymap_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 get_ref_lines_plt(_QWORD);
__int64 get_scale_inputs_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 get_some_back_plt(_QWORD);
__int64 get_ttf_table_info_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 load_fnt_plt(_QWORD, _QWORD);
__int64 make_graymap_plt(_QWORD, _QWORD);
__int64 make_outline_plt(_QWORD, _QWORD, _QWORD);
__int64 map_char_plt(_QWORD, _QWORD, _QWORD);
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 muldiv_64_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fontll_itype_441a20_alt1(__int64, unsigned __int16, __int64,
                                    __int64) __asm__("nn_fontll_itype_441a20");
__int64 nn_fontll_itype_44d880_alt1(_QWORD,
                                    _QWORD) __asm__("nn_fontll_itype_44d880");
__int64 nn_fontll_itype_4511c0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD,
                                    _QWORD) __asm__("nn_fontll_itype_4511c0");
__int64 nn_fontll_itype_4514f0_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("nn_fontll_itype_4514f0");
__int64 norm_plt(_QWORD, _QWORD);
__int64 outline_graymap_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 pixelbold_embedded_graymap_plt(_QWORD, _QWORD);
__int64 pixelbold_graymap2_plt(_QWORD, _QWORD);
__int64 pixelbold_graymap8_plt(_QWORD, _QWORD);
__int64 save_graymap_to_cache_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 scale_font_ttf_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 soft_outline_graymap_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strchr_plt(void* this_, const char*);
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strtol_plt(_QWORD, _QWORD, _QWORD);
__int64 strtoul_plt(_QWORD, _QWORD, _QWORD);
__int64 trim_bitmap_plt(_QWORD, _QWORD);
__int64 trim_convert_plt(_QWORD, _QWORD, _QWORD);
__int64 ttf_read_buf_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ttf_read_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 unload_fnt_plt(_QWORD, _QWORD);
__int64 vardiv_64_plt(_QWORD, _QWORD, _QWORD);
__int64 varmul_64_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e880d0;
__int64 make_graymap(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 nn_fontll_itype_43e6c0(_DWORD* a1, signed int a2, int a3, signed int a4,
                               int a5);
__int64 trim_convert(void* a1, __int64 a2, __int16 a3);
void* get_graymap(__int64 a1, unsigned int a2, unsigned int a3,
                  unsigned int a4);
__int64 get_phased_graymap(__int64 a1, unsigned int a2, __int16 a3);
__int64 nn_fontll_itype_440360(_DWORD* a1, int a2, int a3, int a4, int a5);
__int64 FsLtt_read(__int64 a1, __int64 a2, char a3);
__int64 FsLtt_load(__int64 a1, __int64 a2, char a3);
__int64 nn_fontll_itype_441300(unsigned __int16* a1, __int64 a2, __int64 a3);
unsigned __int8* nn_fontll_itype_441a20(__int64 a1, unsigned __int16 a2,
                                        __int64 a3, __int64 a4);
__int64 extract_outline(__int64 a1, __int64 a2);
void count_points_cff(__int64 a1, __int16 a2, __int64 a3, __int64 a4,
                      __int64 a5, _DWORD* a6, _DWORD* a7);
__int64 count_points(__int64 result, unsigned __int16 a2, __int64 a3,
                     __int64 a4, char* a5, _DWORD* a6, _DWORD* a7);
__int64 setup_outline(__int64 a1, __int16 a2, int a3, int a4);
__int64 fill_outline_cff(__int64 result, unsigned __int16 a2, __int64 a3,
                         __int64 a4, __int64 a5, __int64 a6, char* a7,
                         __int64 a8);
__int64 fill_outline(__int64 result, unsigned __int16 a2, __int64 a3,
                     __int64 a4, __int64 a5, __int64 a6, unsigned __int8* a7,
                     __int64 a8);
__int64 embolden_outline(__int64 a1, __int64 a2, int* a3, int* a4);
__int64 copy_outline(__int64 a1, __int64 a2, char a3);
__int64 find_or_make_outline(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             unsigned int a5);
__int64 internal_get_outline(__int64 a1, __int64 a2);
__int64 FSS_get_gpos_pts(__int64 a1, unsigned __int16 a2, unsigned __int16 a3,
                         __int64 a4, __int64 a5, __int64 a6);
__int64 make_outline_ttf(__int64 a1, __int64 a2, __int16 a3);
__int64 nn_fontll_itype_449700(char a1, _QWORD* a2, __int64 a3,
                               unsigned __int64* a4, unsigned __int64 a5);
__int64 nn_fontll_itype_449b00(unsigned __int8 a1, int a2, __int64 a3,
                               __int64 a4, int** a5, int a6,
                               unsigned __int64* a7, unsigned __int64 a8);
__int64 nn_fontll_itype_44a800(char a1, _QWORD* a2, __int64 a3,
                               unsigned __int64* a4, unsigned __int64 a5);
__int64 nn_fontll_itype_44ad60(unsigned __int8 a1, int a2, __int64 a3,
                               __int64 a4, int** a5, int a6,
                               unsigned __int64* a7, unsigned __int64 a8);
__int64 nn_fontll_itype_44b8a0(__int64 result, _DWORD* a2);
__int64 nn_fontll_itype_44bd80(unsigned __int8 a1, int a2, int a3, __int64 a4,
                               __int64 a5, __int64 a6);
_DWORD* nn_fontll_itype_44cf60(_DWORD* result, int a2, unsigned __int16* a3,
                               __int64* a4, unsigned int a5);
_DWORD* nn_fontll_itype_44d520(_DWORD* result, int a2, __int64 a3);
_DWORD* nn_fontll_itype_44d600(_DWORD* result, int a2, __int64 a3);
__int64 nn_fontll_itype_44d780(__int64 result, int a2, __int64 a3);
__int64 nn_fontll_itype_44d880(int a1, __int64* a2);
__int64 nn_fontll_itype_44e2c0(int a1, int a2, unsigned int a3, _DWORD* a4);
__int64 nn_fontll_itype_44e9e0(int a1, __int64 a2);
__int64 get_EBLC_partial(__int64 a1, __int64 a2);
__int64 nn_fontll_itype_44eee0(void* a1, __int64 a2, __int16 a3, __int16 a4,
                               unsigned int a5, unsigned __int16 a6);
__int64 nn_fontll_itype_44fa00(__int64 a1, __int64 a2);
__int16* nn_fontll_itype_44fda0(void* a1, __int64 a2, unsigned __int16 a3,
                                __int64 a4, _WORD* a5);
__int64 check_scale(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6);
__int64 get_scale_inputs(_DWORD* a1, int* a2, int* a3, int* a4);
__int64 modify_scale(unsigned int* a1, unsigned int a2);
__int64 FSS_get_table(__int64 a1, int a2, unsigned __int8 a3, _DWORD* a4);
__int64 nn_fontll_itype_4511c0(__int64 a1, __int64 a2, unsigned __int8 a3,
                               __int64 a4, int a5, unsigned int a6,
                               unsigned int a7);
__int64 FSS_free_table(__int64 a1, __int64 a2);
__int64 nn_fontll_itype_4514f0(__int64 a1, __int64 a2, _BYTE* a3);
__int64 nn_fontll_itype_4534a0(__int64 a1, __int64 a2);
__int64 get_name(__int64 a1, __int64 a2);
__int64 delete_lfnt(__int64 a1, _QWORD* a2);
__int64 CACHE_ENTRY_calloc(__int64 a1);
__int64 CACHE_ENTRY_free(__int64 result, unsigned __int64* a2);

__int64 make_graymap(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int16 v4;
  int v5;
  __int16 v6;
  int v7;
  __int16 v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int16 v22;
  __int16 v23;
  __int64 v24;
  unsigned int v25;
  __int64 result;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int16 v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  void* v37;
  void* v38;
  __int64 v39;
  __int16 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  unsigned __int8* v47;
  int* v48;
  int* v49;
  __int64 v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  unsigned int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  unsigned int v78;
  int v79;
  __int64 v81;
  int v82;
  int v83;
  int v84;
  int v85;
  signed int v86;
  signed int v87;
  signed int v88;
  int v89;
  void* v90;
  int v91;
  __int64 v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  unsigned int* v97;
  __int64 v98;
  int* v99;
  int v100;
  int v101;
  signed int v102;
  signed int v103;
  signed int v104;
  int v105;
  int v106;
  bool v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  signed int v120;
  bool v121;
  signed int v122;
  signed int v123;
  unsigned int v125;
  int v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  int* v129;
  int v130;
  int v131;
  signed int v132;
  signed int v133;
  int v134;
  signed int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  unsigned int v146;
  int v147;
  unsigned int v148;
  int v149;
  __int16* v151;
  unsigned int v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int16* i;
  __int64 v160;
  int v161;
  __int64 v162;
  int v163;
  unsigned int v164;
  int v165;
  int v166;
  unsigned int v167;
  _DWORD* v168;
  _DWORD* v169;
  int v170;
  int v171;
  unsigned int v172;
  int v173;
  int v174;
  unsigned int v175;
  int v176;
  int v177;
  unsigned int v178;
  int v179;
  int v180;
  unsigned int v181;
  int v182;
  int v183;
  unsigned int v184;
  int v185;
  int v186;
  unsigned int v187;
  int v188;
  int v189;
  unsigned int v190;
  int v191;
  int v192;
  unsigned int v193;
  _BOOL4 v194;
  int v195;
  __int64 v196;
  __int64 v197;
  int v198;
  int v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  unsigned int v203;
  __int64 v204;
  __int64 v205;
  unsigned int v206;
  unsigned int v207;
  unsigned int v208;
  __int64 v209;
  int v210;
  int v211;
  __int64 v212;
  int v213;
  int v214;
  void* v215;
  __int64 v216;
  unsigned int v217;
  __int64 v218;
  int v219;
  __int64 v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int* v227;
  unsigned int* v228;
  __int64 v229;
  signed int v230;
  __int64 v231;
  signed int v232;
  __int64 v233;
  unsigned int v234;
  __int64 v235;

  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (a2 != 0) {
    if ((a4 & 2) != 0) {
      v4 = 2;
    }
    else {
      v4 = 4;
    }
    if ((a4 & 2) != 0) {
      v5 = 2;
    }
    else {
      v5 = a4;
    }
    if ((a4 & 8) != 0) {
      v6 = 8;
    }
    else {
      v6 = v4;
    }
    if ((a4 & 8) != 0) {
      v7 = 8;
    }
    else {
      v7 = v5;
    }
    if ((a4 & 4) != 0) {
      v8 = 4;
    }
    else {
      v8 = v6;
    }
    if ((a4 & 4) != 0) {
      v9 = 4;
    }
    else {
      v9 = v7;
    }
    v218 = *(__int16*)(a2 + 44);
    if (*(_WORD*)(a2 + 44) == 0) {
      v39 = a2;
      result = FSS_calloc_plt(a1, 40),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      if (result != 0) {
        *(_DWORD*)(result + 8) = 40;
        *(_DWORD*)(result + 20) = *(_DWORD*)(v39 + 32);
        *(_DWORD*)(result + 24) = *(_DWORD*)(v39 + 36);
        *(_WORD*)(result + 16) = *(_WORD*)(v39 + 28);
        v40 = *(_WORD*)(v39 + 30);
        *(_BYTE*)(result + 34) = 0;
        *(_WORD*)(result + 36) = v8;
        *(_WORD*)(result + 38) = v9;
        *(_WORD*)(result + 18) = v40;
      }
      return result;
    }
    v10 = *(unsigned __int16*)(a1 + 114);
    v11 = *(_DWORD*)(a1 + 116);
    v216 = *(_QWORD*)(a2 + 56);
    v12 = *(unsigned __int16*)(a1 + 112);
    if (v12 <= 0x10) {
      v13 = 16;
    }
    else {
      v13 = *(_WORD*)(a1 + 112);
    }
    v14 = v13 << 7;
    if (v12 <= 0x40) {
      v15 = v14;
    }
    else {
      v15 = 0x2000;
    }
    v16 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16840LL);
    if (v16 != 0) {
      goto LABEL_28;
    }
    v41 = a2;
    v42 = a1;
    *(_QWORD*)(*(_QWORD*)(a1 + 128) +
               16840LL) = FSS_malloc_plt(a1, 14600),
               v27 = COERCE_AS(__typeof__(v27),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
               v29 = COERCE_AS(__typeof__(v29),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v43 = *(_QWORD*)(*(_QWORD*)(v42 + 128) + 16840LL);
    if (v43 != 0 && *(_DWORD*)(v42 + 72) == 0) {
      *(_QWORD*)(v43 + 14344) = 0;
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v42 + 128) + 16840LL) + 14360LL) = 50;
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v42 + 128) + 16840LL) +
                 14344LL) =
          FSS_malloc_plt(
              v42,
              (unsigned int)(8 * *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v42 + 128) +
                                                       16840LL) +
                                            14360LL))),
                 v27 =
                     COERCE_AS(__typeof__(v27),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v29 =
                     COERCE_AS(__typeof__(v29),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      a1 = v42;
      v197 = *(_QWORD*)(*(_QWORD*)(v42 + 128) + 16840LL);
      if (*(_QWORD*)(v197 + 14344) == 0) {
        *(_DWORD*)(v197 + 14360) = 0;
        v197 = *(_QWORD*)(*(_QWORD*)(v42 + 128) + 16840LL);
      }
      *(_DWORD*)(v197 + 14384) = 0;
      a2 = v41;
      v16 = *(_QWORD*)(*(_QWORD*)(v42 + 128) + 16840LL);
    LABEL_28:
      v220 = v16;
      v206 = v10;
      ++*(_DWORD*)(v16 + 14384);
      v17 = *(__int16*)(a2 + 14);
      v18 = *(__int16*)(a2 + 22);
      v19 = *(_DWORD*)(a2 + 24) + 0xFFFF;
      v20 = *(_DWORD*)(a1 + 76);
      v21 = (*(_DWORD*)(a2 + 16) + 0xFFFF) >> 16;
      if ((v20 & 0x200) != 0 ||
          (*(_BYTE*)(*(_QWORD*)(a1 + 48) + 36LL) & 0x40) != 0 &&
              (v20 & 0xC00) == 0 && *(unsigned __int16*)(a1 + 112) <= 0x1Au) {
        v17 -= *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 14LL) != 0;
        if (*(__int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 14LL) > 1) {
          ++v21;
        }
      }
      v207 = v11;
      v208 = v9;
      v22 = HIWORD(v19) - v18;
      v23 = v21 - v17;
      v212 = a2;
      v24 = a1;
      v25 = (v21 - v17) * ((v19 >> 16) - v18) + 47;
      result = FSS_malloc_plt(a1, v25),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      if (result == 0) {
        v44 = *(_DWORD*)(v220 + 14384);
        *(_QWORD*)(v220 + 14392) = 0;
        *(_DWORD*)(v220 + 14384) = v44 - 1;
        return result;
      }
      v209 = v24;
      v28 = result;
      memset_plt((void*)result, nullptr, v25, v27),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      *(_DWORD*)(v28 + 8) = v25;
      *(_WORD*)(v28 + 12) = v17;
      v30 = v220;
      *(_WORD*)(v28 + 28) = v23;
      *(_WORD*)(v28 + 30) = v22;
      *(_WORD*)(v28 + 32) = v23;
      *(_WORD*)(v28 + 14) = HIWORD(v19) - 1;
      *(_WORD*)(v28 + 36) = 8;
      *(_DWORD*)(v28 + 20) = *(_DWORD*)(v212 + 32);
      *(_DWORD*)(v28 + 24) = *(_DWORD*)(v212 + 36);
      *(_WORD*)(v28 + 16) = *(_WORD*)(v212 + 28);
      v31 = *(_WORD*)(v212 + 30);
      *(_BYTE*)(v28 + 34) = 0;
      *(_WORD*)(v28 + 18) = v31;
      *(_QWORD*)(v220 + 14392) = v28;
      *(_DWORD*)(v220 + 14336) = 0;
      v32 = *(__int16*)(v28 + 28);
      v33 = *(_DWORD*)(v220 + 14360);
      if (v33 >= v32) {
        v34 = *(_QWORD*)(v220 + 14344);
        v35 = v212;
      }
      else {
        if (v33 != 0) {
          FSS_free_plt(v209, *(_QWORD*)(v220 + 14344)),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        *(_DWORD*)(v220 + 14360) = v32;
        v34 = FSS_malloc_plt(v209, (unsigned int)(8 * v32)),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v35 = v212;
        *(_QWORD*)(v220 + 14344) = v34;
        if (v34 == 0) {
          v36 = *(_DWORD*)(v220 + 14384);
          v37 = *(void**)(v220 + 14392);
          *(_DWORD*)(v220 + 14360) = 0;
          v38 = (void*)v209;
          *(_DWORD*)(v220 + 14384) = v36 - 1;
          goto LABEL_300;
        }
      }
      v45 = v15 & 0xFF80;
      *(_QWORD*)(v220 + 14352) = v34 + 4LL * v32;
      v46 = *(__int16*)(v35 + 44);
      if (v46 < 1) {
        v79 = 1;
        goto LABEL_75;
      }
      v47 = *(unsigned __int8**)(v35 + 56);
      v50 = v35 + 64;
      v49 = *(int**)(v35 + 64);
      v48 = *(int**)(v50 + 8);
      v51 = 0;
      v52 = 0;
      v53 = 0;
      do {
        v57 = *v47++;
        v56 = v57;
        if (v57 <= 1) {
          if (v56 == 0) {
          LABEL_50:
            v54 = *v49++;
            v52 = v54;
            v55 = *v48++;
            v51 = v55;
            goto LABEL_51;
          }
          if (v56 == 1) {
            goto LABEL_68;
          }
        }
        else {
          switch (v56) {
          case 2u:
            goto LABEL_61;
          case 0x80u:
            goto LABEL_50;
          case 3u:
            v59 = *v49++;
            v58 = v59;
            v61 = *v48++;
            v60 = v61;
            v62 = v58 - v52;
            if (v62 < 0) {
              v62 = -v62;
            }
            v63 = v60 - v51;
            if (v63 < 0) {
              v63 = -v63;
            }
            v64 = v62 + v53;
            v52 = v58;
            v53 = v64 + v63;
            v51 = v60;
          LABEL_61:
            v66 = *v49++;
            v65 = v66;
            v68 = *v48++;
            v67 = v68;
            v69 = v65 - v52;
            if (v69 < 0) {
              v69 = -v69;
            }
            v70 = v67 - v51;
            if (v70 < 0) {
              v70 = -v70;
            }
            v71 = v69 + v53;
            v52 = v65;
            v53 = v71 + v70;
            v51 = v67;
          LABEL_68:
            v73 = *v49++;
            v72 = v73;
            v75 = *v48++;
            v74 = v75;
            v76 = v72 - v52;
            if (v76 < 0) {
              v76 = -v76;
            }
            v77 = v74 - v51;
            if (v77 < 0) {
              v77 = -v77;
            }
            v78 = v76 + v53;
            v52 = v72;
            v53 = v78 + v77;
            v51 = v74;
            break;
          default:
            break;
          }
        }
      LABEL_51:
        --v46;
      } while (v46 != 0);
      v79 = (v53 >> 25) + 1;
    LABEL_75:
      v210 = 0;
      *(_DWORD*)(v220 + 14364) = v79;
      v215 = (void*)(v220 + 12288);
    LABEL_77:
      result = *(_QWORD*)(v30 + 14392);
      if (v79 <= *(__int16*)(result + 30) || v210 == 0) {
        if (*(int*)(v30 + 14336) >= 1) {
          v79 *= 2;
          *(_DWORD*)(v30 + 14364) = v79;
          v210 = 1;
        }
      }
      else {
        if (v45 > 0x8000) {
          *(_DWORD*)(v209 + 72) = 524;
          return 0;
        }
        v45 += 0x2000;
      }
      v213 = v79 - 1;
      if (v79 < 1) {
        goto LABEL_257;
      }
      v81 = 14400;
      v82 = 0;
      v219 = v45;
      v211 = v79;
      while (2) {
        v83 = v79;
        v84 = v82;
        memset_plt(v215, nullptr, 2052, v29),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v227 = *(int**)(v212 + 72);
        v228 = *(unsigned int**)(v212 + 64);
        v85 = *(_DWORD*)(v212 + 20);
        v214 = v84;
        v86 = ((*(_DWORD*)(v212 + 24) - v85) / v83 + 0x8000) & 0xFFFF0000;
        v87 = (v85 & 0xFFFF0000) + v86 * v84;
        *(_DWORD*)(v30 + 14368) = v87;
        if (v84 != v213) {
          v88 = v87 + v86;
          v89 = (v87 + v86) >> 16;
          *(_DWORD*)(v30 + 14372) = v87 + v86;
          *(_DWORD*)(v30 + 14376) = v89;
          if ((int)v218 < 1) {
            goto LABEL_92;
          }
        LABEL_98:
          v93 = 0;
          v94 = 0;
          v230 = v88;
          v217 = (v85 & 0xFFFF0000) + v86 * v84;
          while (1) {
            v231 = v93;
            v96 = *(unsigned __int8*)(v216 + v93);
            if (v96 <= 1) {
              if (*(_BYTE*)(v216 + v93) != 0) {
                v29 = *v228++;
                v120 = *v227;
                v95 = *v227++;
                v121 = v120 <= v86;
                if (v120 >= v86) {
                  v122 = v86;
                }
                else {
                  v122 = v95;
                }
                if (v121) {
                  v123 = v86;
                }
                else {
                  v123 = v95;
                }
                if (v122 <= v88 && v123 >= v87) {
                  v125 = v29;
                  v126 =
                      nn_fontll_itype_43e6c0((_DWORD*)v30, v94, v86, v29, v95),
                  v27 = COERCE_AS(
                      __typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  v88 = v230;
                  v29 = v125;
                  if (v126 == 0) {
                  LABEL_76:
                    v79 = *(_DWORD*)(v30 + 14364);
                    goto LABEL_77;
                  }
                }
                goto LABEL_101;
              }
            }
            else {
              v97 = (unsigned int*)(v30 + v81);
              if (v96 == 2) {
                *v97 = v94;
                v97[1] = v86;
                v97[2] = *v228;
                v97[3] = *v227;
                v29 = v228[1];
                v97[4] = v29;
                v95 = v227[1];
                v227 += 2;
                v228 += 2;
                v97[5] = v95;
                v127 = v81 + 24;
                if (v81 >= 14377) {
                  do {
                    v128 = v127 - 24;
                    v129 = (int*)(v30 + v127 - 24);
                    v130 = v129[3];
                    v131 = v129[1];
                    v29 = (unsigned int)v129[4];
                    v95 = v129[5];
                    if (v130 <= v131) {
                      v132 = v129[1];
                    }
                    else {
                      v132 = v129[3];
                    }
                    if (v130 >= v131) {
                      v133 = v129[1];
                    }
                    else {
                      v133 = v129[3];
                    }
                    if (v95 <= v132) {
                      v134 = v132;
                    }
                    else {
                      v134 = v129[5];
                    }
                    if (v95 >= v133) {
                      v132 = v134;
                    }
                    else {
                      v133 = v129[5];
                    }
                    if (v133 > v88 || v132 < v87) {
                      v127 -= 24LL;
                    }
                    else {
                      v136 = *v129;
                      v137 = v129[2];
                      v138 = (v131 + v130) >> 1;
                      v139 = (v137 + *v129) >> 1;
                      v140 = (v137 + (int)v29) >> 1;
                      v141 = (v130 + v95) >> 1;
                      v142 = (v139 + v140) >> 1;
                      v143 = (v138 + v141) >> 1;
                      v144 = v137 - v142;
                      if (v144 < 0) {
                        v144 = -v144;
                      }
                      v145 = v130 - v143;
                      if (v145 < 0) {
                        v145 = -v145;
                      }
                      v107 = v144 > (unsigned int)v145;
                      v146 = v145 + ((unsigned int)(3 * v144) >> 3);
                      v147 = v144 + ((unsigned int)(3 * v145) >> 3);
                      if (!v107) {
                        v147 = v146;
                      }
                      if (v147 >= v45 &&
                          (int)((v127 + 0x3FFFFC7A8LL) >> 2) <= 47) {
                        *v129 = v142;
                        v129[1] = v143;
                        v129[2] = v140;
                        v129[3] = v141;
                        *(_DWORD*)(v30 + v127) = v136;
                        v127 += 24LL;
                        v129[7] = v131;
                        v129[8] = v139;
                        v129[9] = v138;
                        v129[10] = v142;
                        v129[11] = v143;
                      }
                      else {
                        v148 = v129[4];
                        v149 = nn_fontll_itype_43e6c0((_DWORD*)v30, v136, v131,
                                                      v29, v95),
                        v27 = COERCE_AS(
                            __typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                        v88 = v230;
                        v29 = v148;
                        v127 = v128;
                        if (v149 == 0) {
                          goto LABEL_76;
                        }
                      }
                    }
                  } while (v127 >= 0x3841);
                }
                v81 = v127;
                goto LABEL_101;
              }
              if (v96 == 3) {
                *v97 = v94;
                v97[1] = v86;
                v98 = v81 + 32;
                v97[2] = *v228;
                v97[3] = *v227;
                v97[4] = v228[1];
                v97[5] = v227[1];
                v29 = v228[2];
                v97[6] = v29;
                v95 = v227[2];
                v227 += 3;
                v228 += 3;
                v97[7] = v95;
                if (v81 >= 14369) {
                  do {
                    v99 = (int*)(v30 + v98 - 32);
                    v100 = v99[3];
                    v101 = v99[1];
                    v102 = v99[5];
                    v29 = (unsigned int)v99[6];
                    v95 = v99[7];
                    if (v100 <= v101) {
                      v103 = v99[1];
                    }
                    else {
                      v103 = v99[3];
                    }
                    if (v100 >= v101) {
                      v104 = v99[1];
                    }
                    else {
                      v104 = v99[3];
                    }
                    if (v102 <= v103) {
                      v105 = v103;
                    }
                    else {
                      v105 = v99[5];
                    }
                    if (v102 < v104) {
                      v104 = v99[5];
                    }
                    else {
                      v103 = v105;
                    }
                    if (v95 <= v103) {
                      v106 = v103;
                    }
                    else {
                      v106 = v99[7];
                    }
                    if (v95 >= v104) {
                      v103 = v106;
                    }
                    else {
                      v104 = v99[7];
                    }
                    v107 = v104 > v88 || v103 < v87;
                    if (v107) {
                      v98 -= 32;
                    }
                    else {
                      v108 = v99[2];
                      v109 = v99[4];
                      v110 = (v100 + v102) >> 1;
                      v234 = v99[6];
                      v232 = *v99;
                      v111 = (v109 + v108) >> 1;
                      v225 = (v101 + v100) >> 1;
                      v226 = (v108 + *v99) >> 1;
                      v221 = (v102 + v95) >> 1;
                      v222 = (v109 + (int)v29) >> 1;
                      v112 = (v111 + v222) >> 1;
                      v113 = (v110 + v221) >> 1;
                      v223 = (v225 + v110) >> 1;
                      v224 = (v111 + v226) >> 1;
                      v114 = norm_plt((unsigned int)(v108 - v224),
                                      (unsigned int)(v100 - v223)),
                      v27 = COERCE_AS(
                          __typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                      v115 = norm_plt((unsigned int)(v109 - v112),
                                      (unsigned int)(v102 - v113)),
                      v27 = COERCE_AS(
                          __typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                      if (v114 <= v115) {
                        v116 = v115;
                      }
                      else {
                        v116 = v114;
                      }
                      v45 = v219;
                      if (v116 >= v219 &&
                          (int)((unsigned __int64)(v98 + 0x3FFFFC7A0LL) >> 2) <
                              48) {
                        v29 = v234;
                        v30 = v220;
                        v99[2] = v112;
                        v99[3] = v113;
                        v88 = v230;
                        v99[7] = v95;
                        v99[4] = v222;
                        v118 = v224 + v112;
                        v87 = v217;
                        v118 >>= 1;
                        v119 = (v223 + v113) >> 1;
                        *v99 = v118;
                        v99[1] = v119;
                        v99[13] = v223;
                        v99[14] = v118;
                        v99[15] = v119;
                        v99[5] = v221;
                        v99[6] = v234;
                        *(_DWORD*)(v220 + v98) = v232;
                        v98 += 32;
                        v99[9] = v101;
                        v99[10] = v226;
                        v99[11] = v225;
                        v99[12] = v224;
                      }
                      else {
                        v30 = v220;
                        v117 = nn_fontll_itype_43e6c0((_DWORD*)v220, v232, v101,
                                                      v234, v95),
                        v27 = COERCE_AS(
                            __typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                        v87 = v217;
                        v88 = v230;
                        v29 = v234;
                        v98 -= 32;
                        if (v117 == 0) {
                          goto LABEL_76;
                        }
                      }
                    }
                  } while (v98 > 14400);
                }
                v81 = v98;
                goto LABEL_101;
              }
              if (v96 != 128) {
                v29 = v94;
                v95 = v86;
                goto LABEL_101;
              }
            }
            v29 = *v228++;
            v95 = *v227++;
          LABEL_101:
            v86 = v95;
            v94 = v29;
            v93 = v231 + 1;
            if (v231 + 1 == v218) {
              v229 = v81;
              v89 = *(__int16*)(v30 + 14374);
              v90 = *(void**)(v30 + 14344);
              v91 = v89 - (*(int*)(v30 + 14368) >> 16);
              if ((unsigned int)(v91 - 1) <= 0xFD && v90 != nullptr) {
                goto LABEL_188;
              }
              goto LABEL_89;
            }
          }
        }
        v88 = (*(_DWORD*)(v212 + 24) + 0xFFFF) & 0xFFFF0000;
        v89 = v88 >> 16;
        *(_DWORD*)(v30 + 14372) = v88;
        *(_DWORD*)(v30 + 14376) = v88 >> 16;
        if ((int)v218 >= 1) {
          goto LABEL_98;
        }
      LABEL_92:
        v229 = v81;
        v90 = *(void**)(v30 + 14344);
        v91 = v89 - ((int)((v85 & 0xFFFF0000) + v86 * v84) >> 16);
        if ((unsigned int)(v91 - 1) <= 0xFD && v90 != nullptr) {
        LABEL_188:
          v151 = *(__int16**)(v220 + 14392);
          v152 = v151[14];
          v153 = v151[14];
          v154 = 8 * v153;
          v235 = v153;
          if ((int)v153 <= 0) {
            memset_plt(v90, nullptr, v154, v29),
                v27 =
                    COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          }
          else {
            v155 = *(_QWORD*)(v220 + 14352);
            v156 = 1;
            v157 = (__int64)v151 + v151[16] +
                   v151[16] * (__int64)(v151[7] - v89) + 40;
            v233 = (unsigned int)(v91 + 1);
            do {
              v158 = v154;
              memset_plt(v90, nullptr, v154, v29),
                  v27 = COERCE_AS(
                      __typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
              for (i = *((__int16**)v215 + v156); i != nullptr;
                   i = *((__int16**)i + 2)) {
                v163 = *i - v151[6];
                if (v163 < (int)v152) {
                  v164 = v163 & ~(v163 >> 31);
                  *((_DWORD*)v90 + v164) += *((_DWORD*)i + 1);
                  *(_DWORD*)(v155 + 4LL * v164) += *((_DWORD*)i + 2);
                }
              }
              v160 = 0;
              v161 = 0;
              if (v152 >= 8) {
                v168 = (_DWORD*)((char*)v90 + 16);
                v169 = (_DWORD*)(v155 + 16);
                v154 = v158;
                do {
                  v171 = *(v168 - 4) + v161;
                  if (v171 != 0) {
                    if (v171 < 0) {
                      v171 = -v171;
                    }
                    v172 = (unsigned int)v171 >> 8;
                    if (v172 >= 0xFF) {
                      LOBYTE(v172) = -1;
                    }
                    *(_BYTE*)(v157 + v160) = v172;
                  }
                  v173 = *(v169 - 4) + v161;
                  v174 = *(v168 - 3) + v173;
                  if (v174 != 0) {
                    if (v174 < 0) {
                      v174 = -v174;
                    }
                    v175 = (unsigned int)v174 >> 8;
                    if (v175 >= 0xFF) {
                      LOBYTE(v175) = -1;
                    }
                    *(_BYTE*)(v157 + v160 + 1) = v175;
                  }
                  v176 = *(v169 - 3) + v173;
                  v177 = *(v168 - 2) + v176;
                  if (v177 != 0) {
                    if (v177 < 0) {
                      v177 = -v177;
                    }
                    v178 = (unsigned int)v177 >> 8;
                    if (v178 >= 0xFF) {
                      LOBYTE(v178) = -1;
                    }
                    *(_BYTE*)(v157 + v160 + 2) = v178;
                  }
                  v179 = *(v169 - 2) + v176;
                  v180 = *(v168 - 1) + v179;
                  if (v180 != 0) {
                    if (v180 < 0) {
                      v180 = -v180;
                    }
                    v181 = (unsigned int)v180 >> 8;
                    if (v181 >= 0xFF) {
                      LOBYTE(v181) = -1;
                    }
                    *(_BYTE*)(v157 + v160 + 3) = v181;
                  }
                  v182 = *(v169 - 1) + v179;
                  v183 = *v168 + v182;
                  if (v183 != 0) {
                    if (v183 < 0) {
                      v183 = -v183;
                    }
                    v184 = (unsigned int)v183 >> 8;
                    if (v184 >= 0xFF) {
                      LOBYTE(v184) = -1;
                    }
                    *(_BYTE*)(v157 + v160 + 4) = v184;
                  }
                  v185 = *v169 + v182;
                  v186 = v168[1] + v185;
                  if (v186 != 0) {
                    if (v186 < 0) {
                      v186 = -v186;
                    }
                    v187 = (unsigned int)v186 >> 8;
                    if (v187 >= 0xFF) {
                      LOBYTE(v187) = -1;
                    }
                    *(_BYTE*)(v157 + v160 + 5) = v187;
                  }
                  v188 = v169[1] + v185;
                  v189 = v168[2] + v188;
                  if (v189 != 0) {
                    if (v189 < 0) {
                      v189 = -v189;
                    }
                    v190 = (unsigned int)v189 >> 8;
                    if (v190 >= 0xFF) {
                      LOBYTE(v190) = -1;
                    }
                    *(_BYTE*)(v157 + v160 + 6) = v190;
                  }
                  v191 = v169[2] + v188;
                  v192 = v168[3] + v191;
                  if (v192 != 0) {
                    if (v192 < 0) {
                      v192 = -v192;
                    }
                    v193 = (unsigned int)v192 >> 8;
                    if (v193 >= 0xFF) {
                      LOBYTE(v193) = -1;
                    }
                    *(_BYTE*)(v157 + v160 + 7) = v193;
                  }
                  v170 = v169[3];
                  v160 += 8;
                  v169 += 8;
                  v168 += 8;
                  v161 = v170 + v191;
                } while ((v152 & 0x7FF8) != v160);
              }
              else {
                v154 = v158;
              }
              if ((v152 & 7) != 0) {
                v162 = v152 & 7;
                do {
                  v166 = *((_DWORD*)v90 + v160) + v161;
                  if (v166 != 0) {
                    if (v166 < 0) {
                      v166 = -v166;
                    }
                    v167 = (unsigned int)v166 >> 8;
                    if (v167 >= 0xFF) {
                      LOBYTE(v167) = -1;
                    }
                    *(_BYTE*)(v157 + v160) = v167;
                  }
                  v165 = *(_DWORD*)(v155 + 4 * v160++);
                  --v162;
                  v161 += v165;
                } while (v162 != 0);
              }
              ++v156;
              v157 += v235;
            } while (v156 != v233);
          }
        }
      LABEL_89:
        v79 = v211;
        v30 = v220;
        v82 = v214 + 1;
        v45 = v219;
        v81 = v229;
        if (v214 + 1 != v211) {
          continue;
        }
        break;
      }
      result = *(_QWORD*)(v220 + 14392);
    LABEL_257:
      --*(_DWORD*)(v30 + 14384);
      if ((v208 & 2) != 0) {
        result = trim_convert_plt(v209, result, v208),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      if (*(_DWORD*)(v209 + 100) != 0 ||
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v209 + 32) +
                                24LL * *(unsigned __int16*)(v209 + 40)) +
                     44LL) != 0) {
        if ((*(_DWORD*)(v209 + 76) & 0x200) != 0) {
          v194 = true;
          goto LABEL_266;
        }
        if ((*(_BYTE*)(*(_QWORD*)(v209 + 48) + 36LL) & 0x40) != 0 &&
            *(unsigned __int16*)(v209 + 112) <= 0x1Au) {
          v194 = (*(_DWORD*)(v209 + 76) & 0xC00) == 0;
        LABEL_266:
          if (v194 && result != 0) {
            v195 = *(unsigned __int16*)(result + 36);
            if (v195 == 2) {
              v196 = result;
              pixelbold_graymap2_plt(v209, result),
                  v27 = COERCE_AS(
                      __typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            LABEL_276:
              result = v196;
            }
            else if (v195 == 8) {
              v196 = result;
              pixelbold_graymap8_plt(v209, result),
                  v27 = COERCE_AS(
                      __typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
              goto LABEL_276;
            }
          }
        }
      }
      v198 = *(_DWORD*)(v209 + 76);
      if ((v198 & 4) != 0) {
        result = emboss_graymap_plt(result),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v199 = *(_DWORD*)(v209 + 76);
        if ((v199 & 0x10) == 0) {
          goto LABEL_281;
        }
        goto LABEL_285;
      }
      if ((v198 & 8) != 0) {
        result = engrave_graymap_plt(result),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      v199 = *(_DWORD*)(v209 + 76);
      if ((v199 & 0x10) != 0) {
      LABEL_285:
        v200 = 1;
        v201 = result;
        v202 = v209;
      LABEL_287:
        result = outline_graymap_plt(v202, v201, v200, v207),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        goto LABEL_288;
      }
    LABEL_281:
      if ((v199 & 0x20) != 0) {
        v201 = result;
        v202 = v209;
        v200 = 2;
        goto LABEL_287;
      }
      if ((v199 & 0xC0) != 0) {
        v200 = v206;
        v201 = result;
        v202 = v209;
        goto LABEL_287;
      }
      if ((v199 & 0x100) != 0) {
        result = soft_outline_graymap_plt(v209, result, v206, v207),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
    LABEL_288:
      if ((*(_BYTE*)(v209 + 77) & 0x10) == 0) {
        goto LABEL_301;
      }
      if (result != 0) {
        v203 = *(unsigned __int16*)(v209 + 112);
        if (v203 > 0x10) {
          if (v203 > 0x19) {
            v204 = 3;
            v205 = 3;
          }
          else {
            v204 = 2;
            v205 = 2;
          }
        }
        else {
          v204 = 1;
          v205 = 1;
        }
        result = Soften_plt(v209, v204, v205, result),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      if (*(_DWORD*)(v209 + 72) != 0) {
        v37 = (void*)result;
        v38 = (void*)v209;
      LABEL_300:
        FSS_free_char_plt(v38, v37),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        return 0;
      }
      else {
      LABEL_301:
        if ((v208 & 2) == 0 && result != 0) {
          return trim_convert_plt(v209, result, v208);
        }
      }
      return result;
    }
  }
  return 0;
}

__int64 nn_fontll_itype_43e6c0(_DWORD* a1, signed int a2, int a3, signed int a4,
                               int a5)
{
  __int64 result;
  int v6;
  int v7;
  int v8;
  signed int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  _DWORD* v18;
  unsigned int v19;
  _DWORD* v20;
  int v21;
  __int64 v22;
  _DWORD* v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  _DWORD* v29;
  int v30;
  int v31;
  bool v32;
  int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  _DWORD* v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  signed int v43;
  signed int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  _DWORD* v50;
  unsigned int v51;
  _DWORD* v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  _DWORD* v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  int v67;
  _DWORD* v68;
  int v69;
  bool v70;
  int v71;
  int v72;
  unsigned int v73;
  unsigned int v74;
  int v75;
  _DWORD* v76;
  int v77;
  signed int v78;
  bool v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  signed int v85;
  int v86;
  int v87;
  int v88;
  __int64 v89;
  int v90;
  _DWORD* v91;
  int v92;
  int v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  int v97;
  _DWORD* v98;
  int v99;
  bool v100;
  int v101;
  int v102;
  int v103;
  _DWORD* v104;
  int v105;
  unsigned int v106;
  int v107;
  unsigned int v108;
  int v109;
  _DWORD* v110;
  int v111;
  bool v112;
  int v113;
  unsigned int v114;
  int v115;
  unsigned int v116;
  int v117;
  _DWORD* v118;
  int v119;
  bool v120;
  int v121;
  _DWORD* v122;
  _DWORD* v123;
  int v124;
  bool v125;
  int v126;
  __int64 v127;
  _DWORD* v128;
  int v129;
  int v130;
  int v131;
  unsigned int v132;
  int v133;
  _DWORD* v134;
  int v135;
  int v136;
  bool v137;
  int v138;
  int v139;
  unsigned int v140;

  if (a3 == a5) {
    return 1;
  }
  if (a3 <= a5) {
    v6 = a5;
  }
  else {
    v6 = a3;
  }
  if (a3 <= a5) {
    v7 = a3;
  }
  else {
    v7 = a5;
  }
  if (a3 <= a5) {
    v8 = a2;
  }
  else {
    v8 = a4;
  }
  if (a3 <= a5) {
    v9 = a4;
  }
  else {
    v9 = a2;
  }
  if (a3 <= a5) {
    v10 = 1;
  }
  else {
    v10 = -1;
  }
  v11 = v6 - v7;
  a1[3595] = v10;
  v12 = v7 & 0xFFFF0000;
  v13 = ((v6 + 0xFFFF) & 0xFFFF0000) - 0x10000;
  if (a2 == a4) {
    if (v12 != v13) {
      if ((int)a1[3591] >= 2) {
        if (v7 <= (signed __int32)a1[3592]) {
          v7 = a1[3592];
        }
        v12 = v7 & 0xFFFF0000;
        if (v6 >= (signed __int32)a1[3593]) {
          v6 = a1[3593];
        }
      }
      v14 = a1[3584];
      if ((int)(v12 + 0x10000) >= v6) {
        v15 = v6;
      }
      else {
        v15 = v12 + 0x10000;
      }
      if (v14 <= 511) {
        v16 = a1[3594] - ((v15 + v7) >> 17);
        if (v16 <= 0xFF) {
          v17 = v15 - v7;
          v18 = &a1[2 * v16];
          if ((_WORD)v8 != 0) {
            v19 = ((v15 - v7) * (0x10000 - (unsigned int)(unsigned __int16)v8) +
                   0x8000) >>
                  16;
          }
          else {
            v19 = v15 - v7;
          }
          if (v17 >= 0x10000) {
            v19 = 0x10000 - (unsigned __int16)v8;
          }
          a1[3584] = v14 + 1;
          if (a3 > a5) {
            v17 = v7 - v15;
          }
          v20 = &a1[6 * v14];
          *((_WORD*)v20 + 1) = (v15 + v7) >> 17;
          if (a3 <= a5) {
            v21 = v19;
          }
          else {
            v21 = -v19;
          }
          *(_WORD*)v20 = HIWORD(v8);
          v20[1] = v21;
          v20[2] = v17;
          *((_QWORD*)v20 + 2) = *((_QWORD*)v18 + 1536);
          *((_QWORD*)v18 + 1536) = v20;
        }
        v22 = v15 + 0x10000LL;
        if (v22 < v6) {
          v23 = a1 + 3072;
          while (1) {
            v24 = a1[3584];
            if (v24 > 511) {
              return 0;
            }
            v25 = v15 + v22;
            v26 = v22;
            v27 = a1[3594] - ((v15 + (int)v22) >> 17);
            if (v27 <= 0xFF) {
              v28 = v24 + 1;
              v29 = &a1[6 * v24];
              v30 = v22 - v15;
              a1[3584] = v28;
              *((_WORD*)v29 + 1) = v25 >> 17;
              v31 = a1[3595];
              *(_WORD*)v29 = HIWORD(v8);
              v32 = v31 <= 0;
              if (v31 <= 0) {
                v33 = (unsigned __int16)v8 - 0x10000;
              }
              else {
                v33 = 0x10000 - (unsigned __int16)v8;
              }
              if (v32) {
                v30 = -v30;
              }
              v29[1] = v33;
              v29[2] = v30;
              *((_QWORD*)v29 + 2) = *(_QWORD*)&v23[2 * v27];
              *(_QWORD*)&v23[2 * v27] = v29;
            }
            v22 = (int)v22 + 0x10000LL;
            v15 = v26;
            if (v22 >= v6) {
              goto LABEL_127;
            }
          }
        }
        v26 = v15;
      LABEL_127:
        if (v26 >= v6) {
          return 1;
        }
        v42 = v8;
        v86 = v8;
        return nn_fontll_itype_440360(a1, v42, v26, v86, v6);
      }
      return 0;
    }
  LABEL_59:
    v37 = a1[3584];
    if (v37 <= 511) {
      v49 = a1[3594] - ((a5 + a3) >> 17);
      if (v49 <= 0xFF) {
        v50 = &a1[2 * v49];
        if ((unsigned __int16)((unsigned int)(a4 + a2) >> 1) != 0) {
          v51 = (v11 * (0x10000 -
                        (unsigned __int16)((unsigned int)(a4 + a2) >> 1)) +
                 0x8000) >>
                16;
        }
        else {
          v51 = v6 - v7;
        }
        if ((int)v11 >= 0x10000) {
          v51 = 0x10000 - (unsigned __int16)((unsigned int)(a4 + a2) >> 1);
        }
        a1[3584] = v37 + 1;
        v52 = &a1[6 * v37];
        *(_WORD*)v52 = (a4 + a2) >> 17;
        *((_WORD*)v52 + 1) = (a5 + a3) >> 17;
        if (a3 <= a5) {
          v53 = v51;
        }
        else {
          v53 = -v51;
        }
        if (a3 <= a5) {
          v54 = v6 - v7;
        }
        else {
          v54 = v7 - v6;
        }
        v52[1] = v53;
        v52[2] = v54;
        *((_QWORD*)v52 + 2) = *((_QWORD*)v50 + 1536);
        *((_QWORD*)v50 + 1536) = v52;
      }
      return 1;
    }
    return 0;
  }
  v34 = v9 - v8;
  v35 = v9 & 0xFFFF0000;
  if (v9 - v8 >= 1) {
    v36 = v8 & 0xFFFF0000;
  }
  else {
    v36 = ((v8 + 0xFFFF) & 0xFFFF0000) - 0x10000;
  }
  if (v34 >= 1) {
    v35 = ((v9 + 0xFFFF) & 0xFFFF0000) - 0x10000;
  }
  if (v36 == v35 && v12 == v13) {
    goto LABEL_59;
  }
  v38 = a1;
  if (v36 == v35) {
    v39 = vardiv_64_plt((unsigned int)v34, v11, 16);
    a1 = v38;
    if ((int)v38[3591] >= 2) {
      v40 = v38[3592];
      if (v7 < v40) {
        v8 = v9 - varmul_64_plt((unsigned int)(v6 - v40), v39, 16);
        a1 = v38;
        v7 = v40;
      }
      v41 = a1[3593];
      if (v6 > v41) {
        v9 = varmul_64_plt((unsigned int)(v41 - v7), v39, 16) + v8;
        a1 = v38;
        v6 = v41;
      }
    }
    v42 = v9;
    v43 = (v7 & 0xFFFF0000) + 0x10000;
    v44 = v6;
    if (v43 <= v6) {
      v42 = varmul_64_plt((unsigned int)(v43 - v7), v39, 16) + v8;
      a1 = v38;
      v44 = (v7 & 0xFFFF0000) + 0x10000;
    }
    v45 = a1[3584];
    if (v45 > 511) {
      return 0;
    }
    v46 = a1[3594] - ((v44 + v7) >> 17);
    if (v46 <= 0xFF) {
      v47 = v44 - v7;
      v48 = 0x10000 - (unsigned __int16)((unsigned int)(v42 + v8) >> 1);
      if (v44 - v7 < 0x10000) {
        if ((unsigned __int16)((unsigned int)(v42 + v8) >> 1) != 0) {
          v48 = (v48 * v47 + 0x8000) >> 16;
        }
        else {
          v48 = v44 - v7;
        }
      }
      v122 = &a1[2 * v46];
      a1[3584] = v45 + 1;
      v123 = &a1[6 * v45];
      *((_WORD*)v123 + 1) = (v44 + v7) >> 17;
      v124 = a1[3595];
      *(_WORD*)v123 = (v42 + v8) >> 17;
      v125 = v124 <= 0;
      if (v124 > 0) {
        v126 = v48;
      }
      else {
        v126 = -v48;
      }
      if (v125) {
        v47 = v7 - v44;
      }
      v123[1] = v126;
      v123[2] = v47;
      *((_QWORD*)v123 + 2) = *((_QWORD*)v122 + 1536);
      *((_QWORD*)v122 + 1536) = v123;
    }
    v127 = v44 + 0x10000LL;
    if (v127 < v6) {
      v128 = a1 + 3072;
      v129 = v39 + 2 * v42;
      while (1) {
        v130 = a1[3584];
        if (v130 > 511) {
          return 0;
        }
        v131 = v44 + v127;
        v26 = v127;
        v132 = a1[3594] - ((v44 + (int)v127) >> 17);
        if (v132 <= 0xFF) {
          v133 = v130 + 1;
          v134 = &a1[6 * v130];
          v135 = v127 - v44;
          a1[3584] = v133;
          *((_WORD*)v134 + 1) = v131 >> 17;
          v136 = a1[3595];
          *(_WORD*)v134 = v129 >> 17;
          v137 = v136 <= 0;
          if (v136 > 0) {
            v138 = 0x10000 - (unsigned __int16)((unsigned int)v129 >> 1);
          }
          else {
            v138 = (unsigned __int16)((unsigned int)v129 >> 1) - 0x10000;
          }
          if (v137) {
            v135 = -v135;
          }
          v134[1] = v138;
          v134[2] = v135;
          *((_QWORD*)v134 + 2) = *(_QWORD*)&v128[2 * v132];
          *(_QWORD*)&v128[2 * v132] = v134;
        }
        v42 += v39;
        v129 += 2 * v39;
        v127 = (int)v127 + 0x10000LL;
        v44 = v26;
        if (v127 >= v6) {
          goto LABEL_200;
        }
      }
    }
    v26 = v44;
  LABEL_200:
    if (v26 >= v6) {
      return 1;
    }
  LABEL_205:
    v86 = v9;
    return nn_fontll_itype_440360(a1, v42, v26, v86, v6);
  }
  v55 = vardiv_64_plt(v11, (unsigned int)v34, 16);
  if (v12 != v13) {
    if (v55 == 0) {
      return 1;
    }
    v73 = v55 >> ((unsigned int)(v55 - 1073741825) < 0x7FFFFFFF);
    v74 = vardiv_64_plt((unsigned int)v34, v11, 16);
    if ((int)v38[3591] >= 2) {
      v75 = v38[3592];
      v76 = v38;
      if (v7 < v75) {
        v8 = v9 - varmul_64_plt((unsigned int)(v6 - v75), v74, 16);
        v76 = v38;
        v7 = v75;
      }
      v77 = v76[3593];
      if (v6 > v77) {
        v9 = varmul_64_plt((unsigned int)(v77 - v7), v74, 16) + v8;
        v6 = v77;
      }
    }
    v140 = v74;
    v78 = (v7 & 0xFFFF0000) + 0x10000;
    v79 = v34 <= 0;
    v80 = varmul_64_plt((unsigned int)(v78 - v7), v74, 16);
    v81 = v8 + 0xFFFF;
    if (v34 > 0) {
      v82 = 0x10000;
    }
    else {
      v82 = -65536;
    }
    if (v79) {
      v83 = -v73;
    }
    else {
      v83 = v73;
    }
    if (!v79) {
      v81 = v8;
    }
    v139 = v83;
    v84 = (v81 & 0xFFFF0000) + v82;
    v85 = varmul_64_plt((unsigned int)(v84 - v8), v73, 16) + v7;
    if (v78 > v6 && v85 > v6) {
    LABEL_123:
      if (v8 != v9 || v7 != v6) {
        a1 = v38;
        v42 = v8;
        v26 = v7;
        goto LABEL_205;
      }
      return 1;
    }
    v103 = v80 + v8;
    v104 = v38 + 3072;
    while (1) {
      while (1) {
        v105 = v38[3584];
        if (v78 >= v85) {
          break;
        }
        if (v105 > 511) {
          return 0;
        }
        v106 = v38[3594] - ((v78 + v7) >> 17);
        if (v106 <= 0xFF) {
          v107 = v78 - v7;
          if ((unsigned __int16)((unsigned int)(v103 + v8) >> 1) != 0) {
            v108 =
                ((0x10000 -
                  (unsigned int)(unsigned __int16)((unsigned int)(v103 + v8) >>
                                                   1)) *
                     (v78 - v7) +
                 0x8000) >>
                16;
          }
          else {
            v108 = v78 - v7;
          }
          if (v107 >= 0x10000) {
            v108 = 0x10000 - (unsigned __int16)((unsigned int)(v103 + v8) >> 1);
          }
          v109 = v105 + 1;
          v110 = &v38[6 * v105];
          v38[3584] = v109;
          *((_WORD*)v110 + 1) = (v78 + v7) >> 17;
          v111 = v38[3595];
          *(_WORD*)v110 = (v103 + v8) >> 17;
          v112 = v111 <= 0;
          if (v111 > 0) {
            v113 = v108;
          }
          else {
            v113 = -v108;
          }
          if (v112) {
            v107 = v7 - v78;
          }
          v110[1] = v113;
          v110[2] = v107;
          *((_QWORD*)v110 + 2) = *(_QWORD*)&v104[2 * v106];
          *(_QWORD*)&v104[2 * v106] = v110;
        }
        v7 = v78;
        v78 += 0x10000;
        v8 = v103;
        v103 += v140;
        if (v78 > v6) {
          goto LABEL_148;
        }
      }
      if (v105 > 511) {
        return 0;
      }
      v114 = v38[3594] - ((v85 + v7) >> 17);
      if (v114 <= 0xFF) {
        v115 = v85 - v7;
        if ((unsigned __int16)((unsigned int)(v84 + v8) >> 1) != 0) {
          v116 = ((0x10000 -
                   (unsigned int)(unsigned __int16)((unsigned int)(v84 + v8) >>
                                                    1)) *
                      (v85 - v7) +
                  0x8000) >>
                 16;
        }
        else {
          v116 = v85 - v7;
        }
        if (v115 >= 0x10000) {
          v116 = 0x10000 - (unsigned __int16)((unsigned int)(v84 + v8) >> 1);
        }
        v117 = v105 + 1;
        v118 = &v38[6 * v105];
        v38[3584] = v117;
        *((_WORD*)v118 + 1) = (v85 + v7) >> 17;
        v119 = v38[3595];
        *(_WORD*)v118 = (v84 + v8) >> 17;
        v120 = v119 <= 0;
        if (v119 > 0) {
          v121 = v116;
        }
        else {
          v121 = -v116;
        }
        if (v120) {
          v115 = v7 - v85;
        }
        v118[1] = v121;
        v118[2] = v115;
        *((_QWORD*)v118 + 2) = *(_QWORD*)&v104[2 * v114];
        *(_QWORD*)&v104[2 * v114] = v118;
      }
      v8 = v84;
      v84 += v82;
      v7 = v85;
      v85 += v139;
      if (v78 > v6) {
      LABEL_148:
        if (v85 > v6) {
          goto LABEL_123;
        }
      }
    }
  }
  if (v34 < 1) {
    v56 = ((v8 + 0xFFFF) & 0xFFFF0000) - 0x10000;
    v87 = varmul_64_plt((unsigned int)(v56 - v8), (unsigned int)v55, 16);
    v58 = v87 + v7;
    v88 = v87;
    result = nn_fontll_itype_440360(v38, v8, v7, v56, v87 + v7);
    v89 = v56 - 0x10000LL;
    if (v89 > v9) {
      v90 = -v55;
      v91 = v38 + 3072;
      v92 = 2 * v88 + 2 * v7 - v55;
      while (1) {
        v93 = v38[3584];
        if (v93 > 511) {
          return 0;
        }
        v94 = v89;
        v95 = v38[3594] - (v92 >> 17);
        if (v95 <= 0xFF) {
          if ((unsigned __int16)((unsigned int)(v56 + v89) >> 1) != 0) {
            v96 =
                ((0x10000 -
                  (unsigned int)(unsigned __int16)((unsigned int)(v56 + v89) >>
                                                   1)) *
                     v90 +
                 0x8000) >>
                16;
          }
          else {
            v96 = -v55;
          }
          v97 = v93 + 1;
          v98 = &v38[6 * v93];
          if (v90 >= 0x10000) {
            v96 = 0x10000 - (unsigned __int16)((unsigned int)(v56 + v89) >> 1);
          }
          v38[3584] = v97;
          *(_WORD*)v98 = (v56 + (int)v89) >> 17;
          v99 = v38[3595];
          *((_WORD*)v98 + 1) = v92 >> 17;
          v100 = v99 <= 0;
          if (v99 > 0) {
            v101 = v96;
          }
          else {
            v101 = -v96;
          }
          if (v100) {
            v102 = v55;
          }
          else {
            v102 = -v55;
          }
          v98[1] = v101;
          v98[2] = v102;
          *((_QWORD*)v98 + 2) = *(_QWORD*)&v91[2 * v95];
          *(_QWORD*)&v91[2 * v95] = v98;
        }
        v58 -= v55;
        v92 -= 2 * v55;
        v56 = v89;
        v89 = (int)v89 - 0x10000LL;
        if (v89 <= v9) {
          result = 1;
          v56 = v94;
          break;
        }
      }
    }
    if (v56 > v9) {
    LABEL_204:
      a1 = v38;
      v42 = v56;
      v26 = v58;
      goto LABEL_205;
    }
  }
  else {
    v56 = (v8 & 0xFFFF0000) + 0x10000;
    v57 = varmul_64_plt((unsigned int)(v56 - v8), (unsigned int)v55, 16);
    v58 = v57 + v7;
    v59 = v57;
    result = nn_fontll_itype_440360(v38, v8, v7, v56, v57 + v7);
    v60 = v56 + 0x10000LL;
    if (v60 < v9) {
      v61 = v38 + 3072;
      v62 = v55 + 2 * v59 + 2 * v7;
      while (1) {
        v63 = v38[3584];
        if (v63 > 511) {
          return 0;
        }
        v64 = v60;
        v65 = v38[3594] - (v62 >> 17);
        if (v65 <= 0xFF) {
          if ((unsigned __int16)((unsigned int)(v56 + v60) >> 1) != 0) {
            v66 =
                ((0x10000 -
                  (unsigned int)(unsigned __int16)((unsigned int)(v56 + v60) >>
                                                   1)) *
                     v55 +
                 0x8000) >>
                16;
          }
          else {
            v66 = v55;
          }
          v67 = v63 + 1;
          v68 = &v38[6 * v63];
          if (v55 >= 0x10000) {
            v66 = 0x10000 - (unsigned __int16)((unsigned int)(v56 + v60) >> 1);
          }
          v38[3584] = v67;
          *(_WORD*)v68 = (v56 + (int)v60) >> 17;
          v69 = v38[3595];
          *((_WORD*)v68 + 1) = v62 >> 17;
          v70 = v69 <= 0;
          if (v69 > 0) {
            v71 = v66;
          }
          else {
            v71 = -v66;
          }
          if (v70) {
            v72 = -v55;
          }
          else {
            v72 = v55;
          }
          v68[1] = v71;
          v68[2] = v72;
          *((_QWORD*)v68 + 2) = *(_QWORD*)&v61[2 * v65];
          *(_QWORD*)&v61[2 * v65] = v68;
        }
        v58 += v55;
        v62 += 2 * v55;
        v56 = v60;
        v60 = (int)v60 + 0x10000LL;
        if (v60 >= v9) {
          result = 1;
          v56 = v64;
          break;
        }
      }
    }
    if (v56 < v9) {
      goto LABEL_204;
    }
  }
  return result;
}

__int64 trim_convert(void* a1, __int64 a2, __int16 a3)
{
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  _BOOL4 v8;
  _BOOL4 v9;
  unsigned int v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  __int64 i;
  unsigned __int8* v26;
  int v27;
  unsigned __int8* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  unsigned int v39;
  __int64 v40;
  __int16 v41;
  __int16 v42;
  int v43;
  __int64 v44;
  _BYTE* v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  _BYTE* v53;
  __int64 v54;
  unsigned __int64 v55;
  char v56;
  unsigned int v57;
  int v58;
  _BYTE* v59;
  __int64 v60;
  char* v61;
  unsigned __int64 j;
  char v63;
  unsigned int v64;
  int v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  _BYTE* v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned int v85;
  __int64 v86;
  _BYTE* v87;
  __int64 v88;
  __int64 v89;
  int v90;
  unsigned int v91;
  int v92;
  _BYTE* v93;
  __int64 v94;
  _BYTE* v95;
  unsigned __int64 v96;
  int v97;
  unsigned int v98;
  _BOOL4 v99;
  _BOOL4 v100;
  __int64 v101;
  __int64 v102;

  if (*(_WORD*)(a2 + 36) != 8) {
    return a2;
  }
  v4 = (unsigned int)*(__int16*)(a2 + 32);
  v5 = *(__int16*)(a2 + 30);
  v6 = a3 & 0x404;
  v7 = *(__int16*)(a2 + 32);
  if ((a3 & 0x404) != 0) {
    v8 = false;
    v9 = false;
    v10 = 15;
    v11 = true;
    v12 = (unsigned int)*(__int16*)(a2 + 28);
    v13 = a2 + 40;
    v14 = v5 - 1;
    if (v5 < 1) {
      goto LABEL_19;
    }
  LABEL_9:
    if ((int)v7 < 1) {
      if (*(_WORD*)(a2 + 32) != 0) {
        goto LABEL_19;
      }
    }
    else {
      v15 = 0;
      v16 = v13;
    LABEL_13:
      while (2) {
        v17 = v16 + v4;
        ++v16;
        v18 = *(__int16*)(a2 + 32);
        do {
          if (v10 < *(unsigned __int8*)(v16 - 1)) {
            if (v18 != 0) {
              goto LABEL_20;
            }
            if (++v15 == v5) {
              goto LABEL_29;
            }
            goto LABEL_13;
          }
          ++v16;
          --v18;
        } while (v18 != 0);
        v16 = v17;
        if (++v15 != v5) {
          continue;
        }
        break;
      }
    }
  LABEL_29:
    v15 = *(__int16*)(a2 + 30);
    v22 = v14 - v5;
    v23 = v14 - v5 + 1;
    v24 = v5 * (int)v4;
    if ((int)v12 > 0) {
    LABEL_35:
      if (v22 <= 0x7FFFFFFE) {
        v26 = (unsigned __int8*)(v13 + v24);
        for (i = 0; i != v12; ++i) {
          v27 = v23;
          v28 = v26;
          while (v10 >= *v28) {
            v28 += v7;
            if (--v27 == 0) {
              goto LABEL_38;
            }
          }
          if (v27 != 0) {
            goto LABEL_46;
          }
        LABEL_38:
          ++v26;
        }
        LODWORD(i) = v12;
        goto LABEL_46;
      }
      if (v23 != 0) {
        LODWORD(i) = 0;
        goto LABEL_60;
      }
      LODWORD(i) = v12;
    LABEL_59:
      LODWORD(v12) = v12 & ((int)v12 >> 31);
      goto LABEL_60;
    }
    goto LABEL_30;
  }
  v11 = (a3 & 0x202) != 0;
  v8 = v11;
  v9 = (a3 & 0x202) == 0;
  if ((a3 & 0x202) != 0) {
    v10 = 63;
  }
  else {
    v10 = 0;
  }
  v12 = (unsigned int)*(__int16*)(a2 + 28);
  v13 = a2 + 40;
  v14 = v5 - 1;
  if (v5 >= 1) {
    goto LABEL_9;
  }
LABEL_19:
  v15 = 0;
LABEL_20:
  if (v15 < v5) {
    if ((int)v7 < 1) {
      if (*(_WORD*)(a2 + 32) == 0) {
        v14 = v15 - 1;
      }
      v22 = v14 - v15;
      v23 = v14 - v15 + 1;
      v24 = v15 * (int)v4;
      if ((int)v12 > 0) {
        goto LABEL_35;
      }
      goto LABEL_30;
    }
    v19 = v13 + v14 * (int)v4;
    do {
      v21 = 0;
      while (v10 >= *(unsigned __int8*)(v19 + v21)) {
        if (v4 == ++v21) {
          goto LABEL_24;
        }
      }
      if ((_DWORD)v4 != (_DWORD)v21) {
        goto LABEL_34;
      }
    LABEL_24:
      v19 -= v7;
    } while (v14-- > v15);
    v14 = v15 - 1;
  }
LABEL_34:
  v22 = v14 - v15;
  v23 = v14 - v15 + 1;
  v24 = v15 * (int)v4;
  if ((int)v12 > 0) {
    goto LABEL_35;
  }
LABEL_30:
  v7 = *(__int16*)(a2 + 32);
  LODWORD(i) = 0;
  if (v22 > 0x7FFFFFFE) {
    if (v23 != 0) {
      goto LABEL_60;
    }
    goto LABEL_59;
  }
LABEL_46:
  v29 = v12 & ((int)v12 >> 31);
  v30 = v12;
  v31 = v24 + a2 + 39;
  while ((int)v30 >= 1) {
    LODWORD(v12) = v30;
    v32 = 0;
    v33 = v31;
    while (v10 >= *(unsigned __int8*)(v33 + v30)) {
      v33 += v7;
      if (v23 == ++v32) {
        v32 = v23;
        break;
      }
    }
    --v30;
    if (v32 != v23) {
      goto LABEL_60;
    }
  }
  LODWORD(v12) = v29;
LABEL_60:
  v34 = ((_DWORD)v12 - (_DWORD)i) & (unsigned int)~(((int)v12 - (int)i) >> 31);
  v35 = v23 != v5 || v11;
  if (v15 == 0 && (_DWORD)v34 == (_DWORD)v4 && v35 == 0) {
    return a2;
  }
  v102 = v13;
  v99 = v8;
  v100 = v9;
  if ((a3 & 0x404) != 0) {
    LODWORD(v4) = (unsigned int)(v34 + 1) >> 1;
  }
  else if (v8) {
    LODWORD(v4) = (unsigned int)(v34 + 3) >> 2;
  }
  v39 = v4 * v23 + 40;
  v40 = FSS_calloc_plt(a1, v39);
  if (v40 == 0) {
    *((_DWORD*)a1 + 18) = 0;
    return a2;
  }
  *(_QWORD*)v40 = 0;
  v101 = v40;
  *(_DWORD*)(v40 + 20) = *(_DWORD*)(a2 + 20);
  *(_DWORD*)(v40 + 24) = *(_DWORD*)(a2 + 24);
  *(_WORD*)(v40 + 16) = *(_WORD*)(a2 + 16);
  v41 = *(_WORD*)(a2 + 18);
  *(_BYTE*)(v40 + 34) = 0;
  *(_DWORD*)(v40 + 8) = v39;
  *(_WORD*)(v40 + 18) = v41;
  *(_WORD*)(v40 + 12) = *(_WORD*)(a2 + 12) + i;
  v42 = *(_WORD*)(a2 + 14);
  *(_WORD*)(v40 + 28) = v34;
  *(_WORD*)(v40 + 30) = v23;
  *(_WORD*)(v40 + 38) = a3;
  *(_WORD*)(v40 + 14) = v42 - v15;
  if (v6 != 0) {
    v43 = *(__int16*)(a2 + 32);
    *(_WORD*)(v40 + 32) = (unsigned int)(v34 + 1) >> 1;
    *(_WORD*)(v40 + 36) = 4;
    if (v23 != 0) {
      v44 = v34 & 0x7FFFFFFE;
      v45 = (_BYTE*)(v40 + 40);
      v46 = v102 + v43 * (__int64)v15 + (unsigned int)i;
      v47 = ((unsigned __int64)(v44 - 1) >> 1) + 1;
      v48 = v47 & 7;
      v49 = v47 & 0xFFFFFFFFFFFFFFF8LL;
      while (1) {
        v50 = v22;
        if ((_DWORD)v44 != 0) {
          if ((unsigned int)v44 >= 0xF) {
            v53 = (_BYTE*)(v46 + 7);
            v54 = 0;
            v55 = v49;
            do {
              v55 -= 8LL;
              v54 -= 16;
              *v45 = *(v53 - 7) & 0xF0 | (*(v53 - 6) >> 4);
              v45[1] = *(v53 - 5) & 0xF0 | (*(v53 - 4) >> 4);
              v45[2] = *(v53 - 3) & 0xF0 | (*(v53 - 2) >> 4);
              v45[3] = *(v53 - 1) & 0xF0 | (*v53 >> 4);
              v45[4] = v53[1] & 0xF0 | (v53[2] >> 4);
              v45[5] = v53[3] & 0xF0 | (v53[4] >> 4);
              v45[6] = v53[5] & 0xF0 | (v53[6] >> 4);
              v56 = v53[7];
              v57 = (unsigned __int8)v53[8];
              v53 += 16;
              v58 = v56 & 0xF0 | (v57 >> 4);
              v59 = v45 + 8;
              v45[7] = v58;
              v45 += 8;
            } while (v55 != 0);
            v51 = -v54;
            v45 = v59;
            if (v48 == 0) {
            LABEL_83:
              v52 = (unsigned int)v51 & 0xFFFFFFFE;
              if ((v34 & 1) == 0) {
                goto LABEL_79;
              }
              goto LABEL_78;
            }
          }
          else {
            v51 = 0;
            if (v48 == 0) {
              goto LABEL_83;
            }
          }
          v60 = -v51;
          v61 = (char*)(v46 + v51);
          for (j = v48; j != 0; --j) {
            v63 = *v61;
            v64 = (unsigned __int8)v61[1];
            v60 -= 2;
            v61 += 2;
            *v45++ = v63 & 0xF0 | (v64 >> 4);
          }
          v52 = -v60 & 0xFFFFFFFELL;
          if ((v34 & 1) == 0) {
            goto LABEL_79;
          }
        }
        else {
          v52 = 0;
          if ((v34 & 1) == 0) {
            goto LABEL_79;
          }
        }
      LABEL_78:
        *v45++ = *(_BYTE*)(v46 + v52) & 0xF0;
      LABEL_79:
        --v22;
        v46 += *(__int16*)(a2 + 32);
        if (v50 == 0) {
          goto LABEL_125;
        }
      }
    }
    goto LABEL_125;
  }
  if (v100) {
    v65 = *(__int16*)(a2 + 32);
    *(_WORD*)(v40 + 32) = v34;
    *(_WORD*)(v40 + 36) = 8;
    if (v23 != 0) {
      v66 = v40 + 40;
      v67 = v23 & 7;
      v68 = v102 + v15 * v65 + (unsigned int)i;
      v69 = v65;
      if ((v23 & 7) != 0) {
        v23 = v22 - v67 + 1;
        do {
          memcpy_plt(v66, v68, v34);
          v66 += v34;
          v68 += v69;
          --v67;
        } while (v67 != 0);
      }
      if (v22 >= 7) {
        do {
          memcpy_plt(v66, v68, v34);
          v70 = v68 + v69;
          memcpy_plt(v66 + v34, v70, v34);
          v71 = v70 + v69;
          memcpy_plt(v66 + 2 * v34, v71, v34);
          v72 = v71 + v69;
          memcpy_plt(v66 + 3 * v34, v72, v34);
          v73 = v72 + v69;
          memcpy_plt(v66 + 4 * v34, v73, v34);
          v74 = v73 + v69;
          memcpy_plt(v66 + 5 * v34, v74, v34);
          v75 = v74 + v69;
          memcpy_plt(v66 + 6 * v34, v75, v34);
          v76 = v75 + v69;
          v23 -= 8;
          memcpy_plt(v66 + 7 * v34, v76, v34);
          v66 += v34 + 2 * v34 + 3 * v34 + 2 * v34;
          v68 = v76 + v69;
        } while (v23 != 0);
      }
    }
    goto LABEL_125;
  }
  if (v99) {
    v77 = *(__int16*)(a2 + 32);
    *(_WORD*)(v40 + 38) = a3;
    *(_WORD*)(v40 + 32) = (unsigned int)(v34 + 3) >> 2;
    *(_WORD*)(v40 + 36) = 2;
    if (v23 != 0) {
      v78 = v34 & 0x7FFFFFFC;
      v79 = (_BYTE*)(v40 + 40);
      v80 = v102 + v77 * (__int64)v15 + (unsigned int)i;
      v81 = ((unsigned __int64)(v78 - 1) >> 2) + 1;
      v82 = v81 & 7;
      v83 = v81 & 0x7FFFFFFFFFFFFFF8LL;
      do {
        v85 = v22;
        if ((_DWORD)v78 != 0) {
          if ((unsigned int)v78 >= 0x1D) {
            v87 = (_BYTE*)(v80 + 15);
            v88 = 0;
            v89 = v83;
            do {
              v89 -= 8;
              v88 -= 32;
              *v79 = (*(v87 - 14) >> 2) & 0x30 | *(v87 - 15) & 0xC0 |
                     (*(v87 - 13) >> 4) & 0xC | (*(v87 - 12) >> 6);
              v79[1] = (*(v87 - 10) >> 2) & 0x30 | *(v87 - 11) & 0xC0 |
                       (*(v87 - 9) >> 4) & 0xC | (*(v87 - 8) >> 6);
              v79[2] = (*(v87 - 6) >> 2) & 0x30 | *(v87 - 7) & 0xC0 |
                       (*(v87 - 5) >> 4) & 0xC | (*(v87 - 4) >> 6);
              v79[3] = (*(v87 - 2) >> 2) & 0x30 | *(v87 - 3) & 0xC0 |
                       (*(v87 - 1) >> 4) & 0xC | (*v87 >> 6);
              v79[4] = (v87[2] >> 2) & 0x30 | v87[1] & 0xC0 |
                       (v87[3] >> 4) & 0xC | (v87[4] >> 6);
              v79[5] = (v87[6] >> 2) & 0x30 | v87[5] & 0xC0 |
                       (v87[7] >> 4) & 0xC | (v87[8] >> 6);
              v79[6] = (v87[10] >> 2) & 0x30 | v87[9] & 0xC0 |
                       (v87[11] >> 4) & 0xC | (v87[12] >> 6);
              v90 = ((unsigned __int8)v87[14] >> 2) & 0x30 | v87[13] & 0xC0 |
                    ((unsigned __int8)v87[15] >> 4) & 0xC;
              v91 = (unsigned __int8)v87[16];
              v87 += 32;
              v92 = v90 | (v91 >> 6);
              v93 = v79 + 8;
              v79[7] = v92;
              v79 += 8;
            } while (v89 != 0);
            v86 = -v88;
            v79 = v93;
            if (v82 == 0) {
            LABEL_112:
              v84 = (unsigned int)v86 & 0xFFFFFFFC;
              if (((unsigned __int8)v34 & 3u) > 1) {
                goto LABEL_123;
              }
              goto LABEL_113;
            }
          }
          else {
            v86 = 0;
            if (v82 == 0) {
              goto LABEL_112;
            }
          }
          v94 = -v86;
          v95 = (_BYTE*)(v80 + v86);
          v96 = v82;
          do {
            v94 -= 4;
            --v96;
            v97 = ((unsigned __int8)v95[1] >> 2) & 0x30 | *v95 & 0xC0 |
                  ((unsigned __int8)v95[2] >> 4) & 0xC;
            v98 = (unsigned __int8)v95[3];
            v95 += 4;
            *v79++ = v97 | (v98 >> 6);
          } while (v96 != 0);
          v84 = -v94 & 0xFFFFFFFCLL;
          if (((unsigned __int8)v34 & 3u) > 1) {
          LABEL_123:
            v84 += v80;
            if ((v34 & 3) == 2) {
              LODWORD(v84) = (*(unsigned __int8*)(v84 + 1) >> 2) & 0x30 |
                             *(_BYTE*)v84 & 0xC0;
            }
            else {
              LODWORD(v84) = (*(unsigned __int8*)(v84 + 1) >> 2) & 0x30 |
                             *(_BYTE*)v84 & 0xC0 |
                             (*(unsigned __int8*)(v84 + 2) >> 4) & 0xC;
            }
            goto LABEL_107;
          }
        }
        else {
          v84 = 0;
          if (((unsigned __int8)v34 & 3u) > 1) {
            goto LABEL_123;
          }
        }
      LABEL_113:
        if ((v34 & 3) != 0) {
          LOBYTE(v84) = *(_BYTE*)(v80 + v84) & 0xC0;
        LABEL_107:
          *v79++ = v84;
        }
        --v22;
        v80 += *(__int16*)(a2 + 32);
      } while (v85 != 0);
    }
  }
LABEL_125:
  FSS_free_char_plt(a1, (void*)a2);
  return v101;
}

void* get_graymap(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  void* result;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  void* v22;
  void* v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  int v29;
  __int16 v30;
  __int64 v31;
  struct {
    unsigned int v32;
    int v33;
  } v32_;

  v5 = *(_QWORD*)(a1 + 48);
  v4 = *(_QWORD*)(a1 + 56);
  v6 = *(_DWORD*)(a1 + 76);
  *(_DWORD*)(a1 + 72) = 0;
  if (v5 == 0 || v4 == 0) {
    return nullptr;
  }
  *(_DWORD*)(a1 + 76) = v6 | 0x400000;
  if ((a4 & 8) != 0) {
    v13 = 32713;
  }
  else {
    v13 = ((unsigned __int16)a4 << 30 >> 31) & 0x7FCD;
  }
  if ((a4 & 4) != 0) {
    v14 = 32719;
  }
  else {
    v14 = v13;
  }
  result = (void*)find_graymap_in_cache_plt(a1, (unsigned __int16)a3, v14);
  if (result == nullptr) {
    if (*(unsigned __int8*)(v5 + 65) > 1u || (*(_BYTE*)(a1 + 77) & 0x20) != 0) {
      goto LABEL_50;
    }
    result = (void*)get_embedded_graymap_plt(a1, v4, a3, a4);
    if (*(_DWORD*)(a1 + 72) != 0) {
      result = nullptr;
      goto LABEL_14;
    }
    if (result == nullptr) {
    LABEL_50:
      result =
          (void*)find_or_make_outline_plt(a1, v5, v4, a2, (unsigned __int16)a3);
      if (result != nullptr) {
        v23 = result;
        v24 = make_graymap_plt(a1, result);
        v25 = *(_DWORD*)(a1 + 72);
        v26 = v24;
        FSS_free_char_plt((void*)a1, v23);
        result = nullptr;
        if (v25 == 0 && v26 != 0) {
          if (*(_WORD*)(v4 + 24) != 0) {
            v27 = *(_QWORD*)(v4 + 40);
            if (v27 != 0) {
              if (*(_BYTE*)(v27 + 4) != 0) {
                LOWORD(v28) = *(_WORD*)(v26 + 14) + *(_WORD*)(v4 + 24);
              }
              else {
                v29 = *(_DWORD*)(v26 + 24);
                v32_.v32 = *(_DWORD*)(v26 + 20);
                v32_.v33 = v29;
                fixed_norm_plt(&v32_.v32);
                v30 = *(_WORD*)(v26 + 12) +
                      varmul_64_plt((unsigned int)-v32_.v33,
                                    (unsigned int)*(__int16*)(v4 + 24), 16);
                v31 = v32_.v32;
                *(_WORD*)(v26 + 12) = v30;
                v28 = *(unsigned __int16*)(v26 + 14) +
                      (unsigned int)varmul_64_plt(
                          v31, (unsigned int)*(__int16*)(v4 + 24), 16);
              }
              *(_WORD*)(v26 + 14) = v28;
            }
          }
          save_graymap_to_cache_plt(a1, (unsigned __int16)a3, v26, v14);
          result = (void*)v26;
        }
      }
      goto LABEL_14;
    }
    if (*(_WORD*)(*(_QWORD*)(v4 + 40) + 14LL) != 0) {
      result = (void*)pixelbold_embedded_graymap_plt(a1, result);
    }
    v15 = *(_DWORD*)(a1 + 76);
    if ((v15 & 4) != 0) {
      result = (void*)emboss_graymap_plt(result);
    }
    else if ((v15 & 8) != 0) {
      result = (void*)engrave_graymap_plt(result);
    }
    v16 = *(_DWORD*)(a1 + 76);
    if ((v16 & 0x10) != 0) {
      v17 = *(unsigned int*)(a1 + 116);
      v18 = 1;
    }
    else if ((v16 & 0x20) != 0) {
      v17 = *(unsigned int*)(a1 + 116);
      v18 = 2;
    }
    else {
      if ((v16 & 0xC0) == 0) {
        if ((v16 & 0x100) != 0) {
          result = (void*)soft_outline_graymap_plt(
              a1, result, *(unsigned __int16*)(a1 + 114),
              *(unsigned int*)(a1 + 116));
        }
        goto LABEL_34;
      }
      v17 = *(unsigned int*)(a1 + 116);
      v18 = *(unsigned __int16*)(a1 + 114);
    }
    result = (void*)outline_graymap_plt(a1, result, v18, v17);
  LABEL_34:
    if ((*(_BYTE*)(a1 + 77) & 0x10) != 0) {
      if (result != nullptr) {
        v19 = *(unsigned __int16*)(a1 + 112);
        if (v19 > 0x10) {
          if (v19 > 0x19) {
            v20 = 3;
            v21 = 3;
          }
          else {
            v20 = 2;
            v21 = 2;
          }
        }
        else {
          v20 = 1;
          v21 = 1;
        }
        result = (void*)Soften_plt(a1, v20, v21, result);
      }
      if (*(_DWORD*)(a1 + 72) != 0) {
        FSS_free_char_plt((void*)a1, result);
        result = nullptr;
        goto LABEL_14;
      }
    }
    if (*(_QWORD*)(v5 + 8) != 0 || (*(_WORD*)(a1 + 76) & 0x1FC) != 0) {
      v22 = result;
      save_graymap_to_cache_plt(a1, (unsigned __int16)a3, result, v14);
      result = v22;
    }
    if (result != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_50;
  }
LABEL_14:
  *(_DWORD*)(a1 + 76) = v6;
  return result;
}

__int64 get_phased_graymap(__int64 a1, unsigned int a2, __int16 a3)
{
  __int64 v3;
  int v4;
  int v5;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  _WORD* v14;
  int v15;
  _WORD* v16;
  unsigned int v18;
  int v19;
  __int16 v20;
  unsigned __int16 v21;
  unsigned int v22;
  __int64 v23;
  __int16 v24;
  unsigned int v25;
  __int64 v26;
  unsigned __int16 v27;
  _WORD* v28;
  int v29;
  __int64 v30;
  __int16 v31;
  __int16 v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  unsigned int v36;
  char v37;
  __int64 v38;
  __int16 v39;
  int v40;
  __int16 v41;
  __int64 v42;
  int v43;
  unsigned __int16 v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  __int16 v49;
  unsigned __int16 v50;
  struct {
    unsigned int v51;
    int v52;
  } v51_;

  v3 = *(_QWORD*)(a1 + 56);
  v4 = *(_DWORD*)(a1 + 80);
  v5 = *(_DWORD*)(a1 + 84);
  v10 = *(_DWORD*)(a1 + 88);
  v9 = *(_DWORD*)(a1 + 92);
  ++*(_DWORD*)(v3 + 284);
  FSS_set_scale_plt((void*)a1, 4 * v4, 4 * v5, 4 * v10, 4 * v9);
  if (*(_DWORD*)(a1 + 72) != 0) {
    FSS_set_scale_plt((void*)a1, v4, v5, v10, v9);
    v11 = 0;
  LABEL_3:
    --*(_DWORD*)(v3 + 284);
    return v11;
  }
  v12 = *(_DWORD*)(a1 + 76);
  *(_DWORD*)(a1 + 76) = v12 | 0x4000000;
  if ((v12 & 4) != 0) {
    v13 = -5;
  }
  else if ((v12 & 8) != 0) {
    v13 = -13;
  }
  else if ((v12 & 0x10) != 0) {
    v13 = -29;
  }
  else if ((v12 & 0x20) != 0) {
    v13 = -61;
  }
  else if ((v12 & 0x40) != 0) {
    v13 = -125;
  }
  else if ((v12 & 0x80) != 0) {
    v13 = -253;
  }
  else {
    if ((v12 & 0x100) == 0) {
      goto LABEL_19;
    }
    v13 = -509;
  }
  *(_DWORD*)(a1 + 76) = (v12 | 0x4000000) & v13;
LABEL_19:
  v14 = (_WORD*)FSS_get_bitmap_plt(a1, a2);
  *(_DWORD*)(a1 + 76) = v12;
  v15 = *(_DWORD*)(a1 + 72);
  if (v14 == nullptr) {
  LABEL_22:
    FSS_set_scale_plt((void*)a1, v4, v5, v10, v9);
    v11 = 0;
    --*(_DWORD*)(v3 + 284);
    *(_DWORD*)(a1 + 72) = v15;
    return v11;
  }
  v16 = v14;
  if (v15 != 0) {
    FSS_free_char_plt((void*)a1, v14);
    goto LABEL_22;
  }
  v46 = v10;
  v47 = v9;
  v48 = v4;
  v18 = (__int16)(v14[6] + a3);
  v49 = a3;
  v19 = IDIV_plt(v18, 4);
  v44 = IDIV_plt(v18 + (__int16)v16[14] - 1, 4) - v19 + 1;
  v20 = IDIV_plt((unsigned int)(__int16)v16[7], 4);
  v21 = v20 -
        IDIV_plt((unsigned int)((__int16)v16[7] - (__int16)v16[15] + 1), 4) + 1;
  v22 = v21 * (((unsigned int)v44 + 1) >> 1) + 40;
  v23 = FSS_calloc_plt(a1, v22);
  v11 = v23;
  if (v23 == 0) {
    FSS_free_char_plt((void*)a1, v16);
    FSS_set_scale_plt((void*)a1, v48, v5, v46, v47);
    goto LABEL_3;
  }
  *(_DWORD*)(v23 + 8) = v22;
  *(_WORD*)(v23 + 14) = v20;
  *(_WORD*)(v23 + 30) = v21;
  *(_DWORD*)(v23 + 16) = 0;
  *(_WORD*)(v23 + 12) = v19 - ((unsigned int)v49 >> 2);
  *(_WORD*)(v23 + 32) = ((unsigned int)v44 + 1) >> 1;
  *(_WORD*)(v23 + 28) = v44;
  *(_DWORD*)(v23 + 36) = 262148;
  if (v16[8] != 0 || v16[9] != 0) {
    v24 = v20;
    *(_DWORD*)(v23 + 20) = (__int16)v16[8] << 14;
    v25 = (__int16)v16[9] << 14;
  }
  else {
    v24 = v20;
    *(_DWORD*)(v23 + 20) = (*((int*)v16 + 5) >> 2) & 0xFFFFC000;
    v25 = (*((int*)v16 + 6) >> 2) & 0xFFFFC000;
  }
  *(_DWORD*)(v23 + 24) = v25;
  v43 = v5;
  v26 = v23 + 40;
  v45 = v3;
  v27 = v24 - IDIV_plt((unsigned int)(__int16)v16[7], 4);
  v50 = v27;
  if (v27 != 0) {
    v26 += *(__int16*)(v11 + 32) * (unsigned __int64)v27;
  }
  if ((__int16)v16[15] >= 1) {
    v28 = v16 + 20;
    v29 = 0;
    v30 = SdkData_e880d0;
    while (1) {
      v32 = IDIV_plt((unsigned int)((__int16)v16[7] - v29), 4);
      if ((unsigned __int16)(*(_WORD*)(v11 + 14) - v32) != v50) {
        v50 = *(_WORD*)(v11 + 14) - v32;
        v26 += *(__int16*)(v11 + 32);
      }
      if ((__int16)v16[14] >= 1) {
        break;
      }
    LABEL_32:
      v28 = (_WORD*)((char*)v28 + (__int16)v16[16]);
      v31 = v29 + 1;
      v29 = (unsigned __int16)(v29 + 1);
      if ((__int16)v16[15] <= v31) {
        goto LABEL_45;
      }
    }
    v33 = 0;
    while (1) {
      if ((*(_BYTE*)(v30 + (v33 & 7)) &
           *((_BYTE*)v28 + ((unsigned __int64)v33 >> 3))) != 0) {
        v34 = ((v18 + v33) >> 2) - v19;
        v35 = (__int64)(v34 << 16) >> 17;
        v36 = *(unsigned __int8*)(v26 + v35);
        if ((v34 & 1) != 0) {
          if ((~v36 & 0xF) == 0) {
            goto LABEL_38;
          }
          v37 = 1;
        }
        else {
          if (v36 > 0xEF) {
            goto LABEL_38;
          }
          v37 = 16;
        }
        *(_BYTE*)(v26 + v35) = v36 + v37;
      }
    LABEL_38:
      if ((__int16)v16[14] <= (__int16)++v33) {
        goto LABEL_32;
      }
    }
  }
LABEL_45:
  FSS_free_char_plt((void*)a1, v16);
  FSS_set_scale_plt((void*)a1, v48, v43, v46, v47);
  --*(_DWORD*)(v45 + 284);
  *(_QWORD*)(a1 + 56) = v45;
  if (*(_WORD*)(v45 + 24) != 0) {
    v38 = *(_QWORD*)(v45 + 40);
    if (v38 != 0) {
      if (*(_BYTE*)(v38 + 4) != 0) {
        v39 = *(_WORD*)(v11 + 14) + *(_WORD*)(v45 + 24);
      }
      else {
        v40 = *(_DWORD*)(v11 + 24);
        v51_.v51 = *(_DWORD*)(v11 + 20);
        v51_.v52 = v40;
        fixed_norm_plt(&v51_.v51);
        v41 = *(_WORD*)(v11 + 12) +
              varmul_64_plt((unsigned int)-v51_.v52,
                            (unsigned int)*(__int16*)(v45 + 24), 16);
        v42 = v51_.v51;
        *(_WORD*)(v11 + 12) = v41;
        v39 = *(_WORD*)(v11 + 14) +
              varmul_64_plt(v42, (unsigned int)*(__int16*)(v45 + 24), 16);
      }
      *(_WORD*)(v11 + 14) = v39;
    }
  }
  return v11;
}

__int64 nn_fontll_itype_440360(_DWORD* a1, int a2, int a3, int a4, int a5)
{
  int v5;
  unsigned int v7;
  int v8;
  _DWORD* v9;
  unsigned int v10;
  _DWORD* v11;
  int v12;
  bool v13;
  int v14;

  v5 = a1[3584];
  if (v5 > 511) {
    return 0;
  }
  v7 = a1[3594] - ((a5 + a3) >> 17);
  if (v7 <= 0xFF) {
    v8 = a5 - a3;
    v9 = &a1[2 * v7];
    if ((unsigned __int16)((unsigned int)(a4 + a2) >> 1) != 0) {
      v10 = ((0x10000 -
              (unsigned int)(unsigned __int16)((unsigned int)(a4 + a2) >> 1)) *
                 (a5 - a3) +
             0x8000) >>
            16;
    }
    else {
      v10 = a5 - a3;
    }
    if (v8 >= 0x10000) {
      v10 = 0x10000 - (unsigned __int16)((unsigned int)(a4 + a2) >> 1);
    }
    a1[3584] = v5 + 1;
    v11 = &a1[6 * v5];
    *((_WORD*)v11 + 1) = (a5 + a3) >> 17;
    v12 = a1[3595];
    *(_WORD*)v11 = (a4 + a2) >> 17;
    v13 = v12 <= 0;
    if (v12 > 0) {
      v14 = v10;
    }
    else {
      v14 = -v10;
    }
    if (v13) {
      v8 = a3 - a5;
    }
    v11[1] = v14;
    v11[2] = v8;
    *((_QWORD*)v11 + 2) = *((_QWORD*)v9 + 1536);
    *((_QWORD*)v9 + 1536) = v11;
  }
  return 1;
}

__int64 FsLtt_read(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int16 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int16 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  _WORD* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  _WORD* v29;
  __int64 v30;
  unsigned int v31;
  int v32;
  struct {
    int v33;
    unsigned __int16 v34;
  } v33_;

  v3 = *(_QWORD*)(a1 + 144);
  v7 = FSS_malloc_plt(v3, 1025);
  if (v7 == 0) {
    result = *(unsigned int*)(v3 + 72);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_6:
    if (*(_WORD*)(a1 + 40) == 0) {
      goto LABEL_27;
    }
    v11 = 0;
    v12 = 0;
    do {
      while (1) {
        FsLttComponent_init_plt(*(_QWORD*)(a1 + 48) + v11, a1);
        v14 = *(_WORD*)a1;
        v15 = *(_QWORD*)(a1 + 48);
        v16 = FSS_malloc_plt(v3, 513);
        if (v16 != 0) {
          break;
        }
        result = *(unsigned int*)(v3 + 72);
        if ((_DWORD)result != 0) {
          return result;
        }
        v13 = *(unsigned __int16*)(a1 + 40);
        ++v12;
        v11 += 152;
        if (v12 >= v13) {
          goto LABEL_13;
        }
      }
      v8 = v16;
      if ((unsigned int)FS_read_plt(v3, a2, v16, 512) != 512) {
        goto LABEL_37;
      }
      *(_BYTE*)(v8 + 512) = 0;
      nn_fontll_itype_441a20_alt1(v3, v14, v15 + v11, v8);
      FSS_free_plt(v3, v8);
      v13 = *(unsigned __int16*)(a1 + 40);
      ++v12;
      v11 += 152;
    } while (v12 < v13);
  LABEL_13:
    if (a3 != 0 && (_DWORD)v13 != 0) {
      v17 = 0;
      while (1) {
        v19 = *(_QWORD*)(a1 + 48) + 152 * v17;
        if (*(_WORD*)(v19 + 112) != 0) {
          result = FSS_malloc_plt(
              v3, 6 * (unsigned int)*(unsigned __int16*)(v19 + 112));
          *(_QWORD*)(v19 + 120) = result;
          if (result == 0) {
            return result;
          }
          v20 = *(unsigned int*)(v19 + 108);
          *(_WORD*)(v19 + 128) = *(_WORD*)(v19 + 112);
          FS_seek_plt(v3, a2, v20, 0);
          if (*(_WORD*)(v19 + 112) != 0) {
            break;
          }
        }
      LABEL_19:
        if (++v17 >= (unsigned __int64)*(unsigned __int16*)(a1 + 40)) {
          goto LABEL_27;
        }
      }
      v21 = 0;
      v22 = 0;
      while (1) {
        v33_.v34 = 0;
        v33_.v33 = 0;
        v23 = *(_QWORD*)(v19 + 120);
        if ((unsigned int)FS_read_plt(v3, a2, &v33_.v33, 6) != 6) {
          break;
        }
        v24 = (_WORD*)(v23 + v21);
        ++v22;
        v21 += 6;
        *v24 = bswap32((unsigned __int16)v33_.v33) >> 16;
        v24[1] = bswap32(HIWORD(v33_.v33)) >> 16;
        v24[2] = bswap32(v33_.v34) >> 16;
        if (v22 >= *(unsigned __int16*)(v19 + 112)) {
          goto LABEL_19;
        }
      }
    }
    else {
    LABEL_27:
      if (*(_WORD*)(a1 + 124) == 0) {
        return 0;
      }
      result =
          FSS_malloc_plt(v3, 4 * (unsigned int)*(unsigned __int16*)(a1 + 124));
      *(_QWORD*)(a1 + 128) = result;
      if (result == 0) {
        return result;
      }
      v25 = *(unsigned int*)(a1 + 120);
      *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 124);
      FS_seek_plt(v3, a2, v25, 0);
      if (*(_WORD*)(a1 + 124) == 0) {
        return 0;
      }
      v26 = 0;
      v27 = 0;
      while (1) {
        v28 = *(_QWORD*)(a1 + 128);
        v32 = 0;
        if ((unsigned int)FS_read_plt(v3, a2, &v32, 4) != 4) {
          break;
        }
        v29 = (_WORD*)(v28 + v26);
        ++v27;
        v26 += 4;
        result = 0;
        *v29 = bswap32((unsigned __int16)v32) >> 16;
        v29[1] = bswap32(HIWORD(v32)) >> 16;
        if (v27 >= *(unsigned __int16*)(a1 + 124)) {
          return result;
        }
      }
    }
    return 106;
  }
  v8 = v7;
  if ((unsigned int)FS_read_plt(v3, a2, v7, 512) != 512) {
    goto LABEL_37;
  }
  *(_BYTE*)(v8 + 512) = 0;
  if ((unsigned int)strncmp_plt("LTT\n", v8, 4) != 0) {
    v9 = 505;
  LABEL_18:
    FSS_free_plt(v3, v8);
    return v9;
  }
  v18 = strtoul_plt(v8 + 4, 0, 0);
  if ((v18 & 0xFFF8) != 0) {
    v9 = 446;
    goto LABEL_18;
  }
  if (v18 >= 7u) {
    if ((unsigned int)FS_read_plt(v3, a2, v8 + 512, 512) == 512) {
      v30 = 1024;
      *(_BYTE*)(v8 + 1024) = 0;
      goto LABEL_42;
    }
  LABEL_37:
    FSS_free_plt(v3, v8);
    return 106;
  }
  v30 = 512;
LABEL_42:
  v31 = nn_fontll_itype_441300((unsigned __int16*)a1, v8, v30);
  FSS_free_plt(v3, v8);
  result = v31;
  if (v31 == 0) {
    goto LABEL_6;
  }
  return result;
}

__int64 FsLtt_load(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 result;
  unsigned __int16 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 i;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  _WORD* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned int v28;
  _WORD* v29;

  v3 = *(_QWORD*)(a1 + 144);
  if ((unsigned int)strncmp_plt("LTT\n", a2, 4) != 0) {
    return 505;
  }
  v8 = strtoul_plt(a2 + 4, 0, 0);
  if ((v8 & 0xFFF8) != 0) {
    return 446;
  }
  if (v8 <= 6u) {
    v9 = 512;
  }
  else {
    v9 = 1024;
  }
  result = nn_fontll_itype_441300((unsigned __int16*)a1, a2, v9);
  if ((_DWORD)result == 0) {
    if (*(_WORD*)(a1 + 40) != 0) {
      v10 = a2 + v9;
      v11 = 0;
      v12 = 0;
      do {
        FsLttComponent_init_plt(*(_QWORD*)(a1 + 48) + v11, a1);
        nn_fontll_itype_441a20_alt1(v3, *(_WORD*)a1, *(_QWORD*)(a1 + 48) + v11,
                                    v10);
        v10 += 512;
        ++v12;
        v11 += 152;
      } while (v12 < *(unsigned __int16*)(a1 + 40));
      if (a3 != 0 && *(_WORD*)(a1 + 40) != 0) {
        for (i = 0; i < *(unsigned __int16*)(a1 + 40); ++i) {
          v14 = *(_QWORD*)(a1 + 48) + 152 * i;
          if (*(_WORD*)(v14 + 112) != 0) {
            result = FSS_malloc_plt(
                v3, 6 * (unsigned int)*(unsigned __int16*)(v14 + 112));
            *(_QWORD*)(v14 + 120) = result;
            if (result == 0) {
              return result;
            }
            v15 = *(unsigned __int16*)(v14 + 112);
            *(_WORD*)(v14 + 128) = v15;
            if (v15 != 0) {
              v16 = 0;
              v17 = 0;
              v18 = a2 + *(unsigned int*)(v14 + 108);
              do {
                v19 = v18 + v16;
                ++v17;
                v20 = *(unsigned __int16*)(v18 + v16);
                v21 = (_WORD*)(*(_QWORD*)(v14 + 120) + v16);
                v16 += 6;
                *v21 = bswap32(v20) >> 16;
                v21[1] = bswap32(*(unsigned __int16*)(v19 + 2)) >> 16;
                v21[2] = bswap32(*(unsigned __int16*)(v19 + 4)) >> 16;
              } while (v17 < *(unsigned __int16*)(v14 + 112));
            }
          }
        }
      }
    }
    if (*(_WORD*)(a1 + 124) == 0) {
      return 0;
    }
    result =
        FSS_malloc_plt(v3, 4 * (unsigned int)*(unsigned __int16*)(a1 + 124));
    *(_QWORD*)(a1 + 128) = result;
    if (result == 0) {
      return result;
    }
    v22 = *(unsigned __int16*)(a1 + 124);
    v23 = *(unsigned int*)(a1 + 120);
    *(_WORD*)(a1 + 136) = v22;
    if ((unsigned int)v23 >= 0xFFFF0000) {
      return 447;
    }
    if (v22 == 0) {
      return 0;
    }
    v24 = a2 + v23;
    v25 = 0;
    v26 = 0;
    do {
      v27 = v24 + v25;
      ++v26;
      result = 0;
      v28 = *(unsigned __int16*)(v24 + v25);
      v29 = (_WORD*)(*(_QWORD*)(a1 + 128) + v25);
      v25 += 4;
      *v29 = bswap32(v28) >> 16;
      v29[1] = bswap32(*(unsigned __int16*)(v27 + 2)) >> 16;
    } while (v26 < *(unsigned __int16*)(a1 + 124));
  }
  return result;
}

__int64 nn_fontll_itype_441300(unsigned __int16* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 result;
  unsigned __int16 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int16 v23;
  __int64 v24;
  unsigned __int16 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v3 = *((_QWORD*)a1 + 18);
  if ((unsigned int)strncmp_plt("LTT\n", a2, 4) != 0) {
    return 505;
  }
  v44 = 0;
  v8 = strtoul_plt(a2 + 4, &v44, 0);
  v9 = v44;
  *a1 = v8;
  v10 = v9 + 1;
  if (v8 == 1) {
    a1[1] = 1;
    v11 = FSS_malloc_plt(v3, 8);
    *((_QWORD*)a1 + 1) = v11;
    if (v11 == 0) {
      return 201;
    }
  }
  else {
    v12 = strtoul_plt(v10, &v44, 0);
    a1[1] = v12;
    if ((unsigned int)v12 - 1 > 8) {
      return 445;
    }
    v10 = v44 + 1;
    v13 = FSS_malloc_plt(v3, 8 * (unsigned int)v12);
    *((_QWORD*)a1 + 1) = v13;
    if (v13 == 0) {
      return 201;
    }
  }
  v43 = a3;
  v14 = a3 + a2;
  if (a1[1] != 0) {
    v15 = 0;
    do {
      v16 = memchr_plt(v10, 10, v14 - v10);
      if (v16 != 0) {
        v17 = v16 - v10;
        v18 = v16;
        v16 = FSS_malloc_plt(v3, (unsigned int)(v16 - v10 + 1));
        if (v16 != 0) {
          v16 = strncpy_plt(v16, v10, v17);
          *(_BYTE*)(v16 + v17) = 0;
          v10 = v18;
        }
      }
      ++v10;
      *(_QWORD*)(*((_QWORD*)a1 + 1) + 8 * v15++) = v16;
    } while (v15 < a1[1]);
  }
  v19 = memchr_plt(v10, 10, v14 - v10);
  if (v19 != 0) {
    v20 = v19 - v10;
    v21 = v19;
    v19 = FSS_malloc_plt(v3, (unsigned int)(v19 - v10 + 1));
    v22 = v43;
    if (v19 != 0) {
      v19 = strncpy_plt(v19, v10, v20);
      *(_BYTE*)(v19 + v20) = 0;
      v10 = v21;
    }
  }
  else {
    v22 = v43;
  }
  *((_QWORD*)a1 + 2) = v19;
  v44 = v10;
  v23 = strtoul_plt(v10 + 1, &v44, 0);
  v24 = v44;
  a1[20] = v23;
  v25 = strtoul_plt(v24 + 1, &v44, 0);
  v26 = v44;
  a1[21] = v25;
  v27 = v26 + 1;
  v28 = a2 - (v26 + 1) + v22;
  if (v28 != 0) {
    v42 = a2 + v22;
    do {
      if ((unsigned int)strncmp_plt("subfamily=", v27, 10) == 0) {
        v30 = *((_QWORD*)a1 + 3);
        if (v30 != 0) {
          FSS_free_plt(v3, v30);
        }
        v31 = v27 + 10;
        v32 = memchr_plt(v27 + 10, 10, v14 - (v27 + 10));
        if (v32 != 0) {
          v33 = v32 - v31;
          v34 = v32;
          v32 = FSS_malloc_plt(v3, (unsigned int)(v32 - v31 + 1));
          if (v32 != 0) {
            v32 = strncpy_plt(v32, v31, v33);
            *(_BYTE*)(v32 + v33) = 0;
            v31 = v34;
          }
          v22 = v43;
        }
        v44 = v31;
        *((_QWORD*)a1 + 3) = v32;
        v27 = v31 + 1;
        goto LABEL_23;
      }
      if ((unsigned int)strncmp_plt("fileversion=", v27, 12) == 0) {
        v35 = *((_QWORD*)a1 + 4);
        if (v35 != 0) {
          FSS_free_plt(v3, v35);
        }
        v36 = v27 + 12;
        v37 = memchr_plt(v27 + 12, 10, v14 - (v27 + 12));
        if (v37 != 0) {
          v38 = v37 - v36;
          v39 = v37;
          v37 = FSS_malloc_plt(v3, (unsigned int)(v37 - v36 + 1));
          if (v37 != 0) {
            v37 = strncpy_plt(v37, v36, v38);
            *(_BYTE*)(v37 + v38) = 0;
            v36 = v39;
          }
          v22 = v43;
        }
        v44 = v36;
        *((_QWORD*)a1 + 4) = v37;
        v27 = v36 + 1;
        goto LABEL_23;
      }
      if ((unsigned int)strncmp_plt("name_offset=", v27, 12) != 0) {
        if ((unsigned int)strncmp_plt("name_size=", v27, 10) != 0) {
          if ((unsigned int)strncmp_plt("maxp_offset=", v27, 12) != 0) {
            if ((unsigned int)strncmp_plt("os/2_offset=", v27, 12) != 0) {
              if ((unsigned int)strncmp_plt("head_offset=", v27, 12) != 0) {
                if ((unsigned int)strncmp_plt("hhea_offset=", v27, 12) != 0) {
                  if ((unsigned int)strncmp_plt("vhea_offset=", v27, 12) != 0) {
                    if ((unsigned int)strncmp_plt("post_offset=", v27, 12) !=
                        0) {
                      if ((unsigned int)strncmp_plt("cmap_offset=", v27, 12) !=
                          0) {
                        if ((unsigned int)strncmp_plt("cmap_size=", v27, 10) !=
                            0) {
                          if ((unsigned int)strncmp_plt("ot_gdef_offset=", v27,
                                                        15) != 0) {
                            if ((unsigned int)strncmp_plt("ot_gdef_size=", v27,
                                                          13) != 0) {
                              if ((unsigned int)strncmp_plt(
                                      "ot_gsub_offset=", v27, 15) != 0) {
                                if ((unsigned int)strncmp_plt(
                                        "ot_gsub_size=", v27, 13) != 0) {
                                  if ((unsigned int)strncmp_plt(
                                          "ot_gpos_offset=", v27, 15) != 0) {
                                    if ((unsigned int)strncmp_plt(
                                            "ot_gpos_size=", v27, 13) != 0) {
                                      if ((unsigned int)strncmp_plt(
                                              "grouptypesoffset=", v27, 17) !=
                                          0) {
                                        if ((unsigned int)strncmp_plt(
                                                "grouptypescount=", v27, 16) !=
                                            0) {
                                          v29 = memchr_plt(v27, 10, v28);
                                          v44 = v29;
                                          if (v29 != 0) {
                                            v27 = v29 + 1;
                                          }
                                          else {
                                            v27 = v42;
                                          }
                                          goto LABEL_23;
                                        }
                                        a1[62] = strtoul_plt(v27 + 16, &v44, 0);
                                      }
                                      else {
                                        *((_DWORD*)a1 + 30) =
                                            strtoul_plt(v27 + 17, &v44, 0);
                                      }
                                    }
                                    else {
                                      *((_DWORD*)a1 + 29) =
                                          strtoul_plt(v27 + 13, &v44, 0);
                                    }
                                  }
                                  else {
                                    *((_DWORD*)a1 + 28) =
                                        strtoul_plt(v27 + 15, &v44, 0);
                                  }
                                }
                                else {
                                  *((_DWORD*)a1 + 27) =
                                      strtoul_plt(v27 + 13, &v44, 0);
                                }
                              }
                              else {
                                *((_DWORD*)a1 + 26) =
                                    strtoul_plt(v27 + 15, &v44, 0);
                              }
                            }
                            else {
                              *((_DWORD*)a1 + 25) =
                                  strtoul_plt(v27 + 13, &v44, 0);
                            }
                          }
                          else {
                            *((_DWORD*)a1 + 24) =
                                strtoul_plt(v27 + 15, &v44, 0);
                          }
                        }
                        else {
                          *((_DWORD*)a1 + 23) = strtoul_plt(v27 + 10, &v44, 0);
                        }
                      }
                      else {
                        *((_DWORD*)a1 + 22) = strtoul_plt(v27 + 12, &v44, 0);
                      }
                    }
                    else {
                      *((_DWORD*)a1 + 21) = strtoul_plt(v27 + 12, &v44, 0);
                    }
                  }
                  else {
                    *((_DWORD*)a1 + 20) = strtoul_plt(v27 + 12, &v44, 0);
                  }
                }
                else {
                  *((_DWORD*)a1 + 19) = strtoul_plt(v27 + 12, &v44, 0);
                }
              }
              else {
                *((_DWORD*)a1 + 18) = strtoul_plt(v27 + 12, &v44, 0);
              }
            }
            else {
              *((_DWORD*)a1 + 17) = strtoul_plt(v27 + 12, &v44, 0);
            }
          }
          else {
            *((_DWORD*)a1 + 16) = strtoul_plt(v27 + 12, &v44, 0);
          }
        }
        else {
          *((_DWORD*)a1 + 15) = strtoul_plt(v27 + 10, &v44, 0);
        }
      }
      else {
        *((_DWORD*)a1 + 14) = strtoul_plt(v27 + 12, &v44, 0);
      }
      v27 = v44 + 1;
    LABEL_23:
      v28 = a2 - v27 + v22;
    } while (v28 != 0);
  }
  v40 = a1[20];
  if (*a1 <= 5u) {
    *((_DWORD*)a1 + 16) = (v40 << 9) + 512;
  }
  if (v40 != 0) {
    v41 = FSS_malloc_plt(v3, (unsigned int)(152 * v40));
    *((_QWORD*)a1 + 6) = v41;
    if (v41 == 0) {
      return 201;
    }
    LOWORD(v40) = a1[20];
    result = 0;
  }
  else {
    *((_QWORD*)a1 + 6) = 0;
    result = 443;
  }
  a1[69] = v40;
  return result;
}

unsigned __int8* nn_fontll_itype_441a20(__int64 a1, unsigned __int16 a2,
                                        __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int8* v16;
  int v17;
  unsigned __int8* v18;
  _BYTE* v19;
  unsigned __int8* result;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int8* v25;
  signed __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int8* v29;
  signed __int64 v30;
  __int64 v31;
  unsigned __int8* v33;
  int v34;
  _BYTE* v35;
  unsigned __int8* v37;
  int v38;
  _BYTE* v39;
  unsigned __int8* v40;

  v8 = memchr_plt(a4, 10, 512);
  if (v8 != 0 &&
      (v9 = v8 - a4, v10 = v8,
       (v8 = FSS_malloc_plt(a1, (unsigned int)(v8 - a4 + 1))) != 0)) {
    v8 = strncpy_plt(v8, a4, v9);
    *(_BYTE*)(v8 + v9) = 0;
  }
  else {
    v10 = a4;
  }
  v11 = (unsigned __int8*)(v10 + 1);
  *(_QWORD*)a3 = v8;
  v12 = memchr_plt(v11, 10, a4 - (_QWORD)v11 + 512);
  if (v12 != 0) {
    v13 = v12 - (_QWORD)v11;
    v14 = v12;
    v12 = FSS_malloc_plt(a1, (unsigned int)(v12 - (_DWORD)v11 + 1));
    if (v12 != 0) {
      v12 = strncpy_plt(v12, v11, v13);
      *(_BYTE*)(v12 + v13) = 0;
      v11 = (unsigned __int8*)v14;
    }
  }
  *(_QWORD*)(a3 + 8) = v12;
  v40 = v11;
  v15 = strtoul_plt(v11 + 1, &v40, 0);
  v16 = v40;
  *(_DWORD*)(a3 + 16) = v15;
  v17 = strtoul_plt(v16 + 1, &v40, 0);
  v18 = v40;
  *(_DWORD*)(a3 + 20) = v17;
  *(_WORD*)(a3 + 24) = strtoul_plt(v18 + 1, &v40, 0);
  v19 = v40 + 1;
  if (a2 >= 4u) {
    result = (unsigned __int8*)strtoul_plt(v40 + 1, &v40, 0);
    v19 = v40 + 1;
    v21 = a4 - (_QWORD)(v40 + 1);
    *(_WORD*)(a3 + 26) = (_WORD)result;
    v22 = v21 + 512;
    if (v21 == -512) {
      return result;
    }
    while (1) {
    LABEL_15:
      if ((unsigned int)strncmp_plt("ttcindex=", v19, 9) != 0) {
        if ((unsigned int)strncmp_plt("targetcallbackID=", v19, 17) == 0) {
          v24 = *(_QWORD*)(a3 + 32);
          if (v24 != 0) {
            FSS_free_plt(a1, v24);
          }
          v25 = v19 + 17;
          result = (unsigned __int8*)memchr_plt(v19 + 17, 10, v21 + 495);
          if (result != nullptr) {
            v26 = result - v25;
            v27 = (__int64)result;
            result = (unsigned __int8*)FSS_malloc_plt(
                a1, (unsigned int)((_DWORD)result - (_DWORD)v25 + 1));
            if (result != nullptr) {
              result = (unsigned __int8*)strncpy_plt(result, v25, v26);
              result[v26] = 0;
              v25 = (unsigned __int8*)v27;
            }
          }
          v40 = v25;
          *(_QWORD*)(a3 + 32) = result;
          v19 = v25 + 1;
          goto LABEL_14;
        }
        if ((unsigned int)strncmp_plt("targetdirectory=", v19, 16) == 0) {
          v28 = *(_QWORD*)(a3 + 40);
          if (v28 != 0) {
            FSS_free_plt(a1, v28);
          }
          v29 = v19 + 16;
          result = (unsigned __int8*)memchr_plt(v19 + 16, 10, v21 + 496);
          if (result != nullptr) {
            v30 = result - v29;
            v31 = (__int64)result;
            result = (unsigned __int8*)FSS_malloc_plt(
                a1, (unsigned int)((_DWORD)result - (_DWORD)v29 + 1));
            if (result != nullptr) {
              result = (unsigned __int8*)strncpy_plt(result, v29, v30);
              result[v30] = 0;
              v29 = (unsigned __int8*)v31;
            }
          }
          v40 = v29;
          *(_QWORD*)(a3 + 40) = result;
          v19 = v29 + 1;
          goto LABEL_14;
        }
        if ((unsigned int)strncmp_plt("targetmemptr=", v19, 13) != 0) {
          if ((unsigned int)strncmp_plt("targetoffset=", v19, 13) != 0) {
            if ((unsigned int)strncmp_plt("targetlength=", v19, 13) != 0) {
              if ((unsigned int)strncmp_plt("embeddedoffset=", v19, 15) != 0) {
                if ((unsigned int)strncmp_plt("embeddedsize=", v19, 13) != 0) {
                  if ((unsigned int)strncmp_plt("bold=", v19, 5) != 0) {
                    if ((unsigned int)strncmp_plt("italic=", v19, 7) != 0) {
                      if ((unsigned int)strncmp_plt("boldpercent=", v19, 12) ==
                          0) {
                        result =
                            (unsigned __int8*)strtol_plt(v19 + 12, &v40, 10);
                        v33 = v40;
                        v34 = (_DWORD)result << 16;
                        if (*v40 == 46) {
                          v35 = v40 + 1;
                          result = (unsigned __int8*)strchr_plt(
                              (void*)(v40 + 1),
                              (const char*)((__int64*)0x4LL) + 6);
                          if (result != nullptr) {
                            v23 = (unsigned __int64)result;
                          }
                          else {
                            v23 = (unsigned __int64)(v33 + 1);
                          }
                          v40 = (unsigned __int8*)v23;
                          if ((unsigned __int64)v35 < v23) {
                            v34 += ((v33[1] << 16) - 3145723) / 0xAu;
                            if ((unsigned __int64)(v33 + 2) < v23) {
                              v34 += ((v33[2] << 16) - 3145678) / 0x64u;
                              if ((unsigned __int64)(v33 + 3) < v23) {
                                v34 += ((v33[3] << 16) - 3145228) / 0x3E8u;
                                if ((unsigned __int64)(v33 + 4) < v23) {
                                  v34 += ((v33[4] << 16) - 3140728) / 0x2710u;
                                  if ((unsigned __int64)(v33 + 5) < v23) {
                                    v34 +=
                                        ((v33[5] << 16) - 3095728) / 0x186A0u;
                                    if ((unsigned __int64)(v33 + 6) < v23) {
                                      v34 +=
                                          ((v33[6] << 16) - 2645728) / 0xF4240u;
                                      if ((unsigned __int64)(v33 + 7) < v23) {
                                        v34 +=
                                            (unsigned int)((14073749 *
                                                            (unsigned __int64)((v33[7]
                                                                                << 16) +
                                                                               1854272)) >>
                                                           32) >>
                                            15;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          v23 = (unsigned __int64)v40;
                        }
                        *(_DWORD*)(a3 + 72) = v34;
                        goto LABEL_41;
                      }
                      if ((unsigned int)strncmp_plt("italicangle=", v19, 12) ==
                          0) {
                        result =
                            (unsigned __int8*)strtol_plt(v19 + 12, &v40, 10);
                        v37 = v40;
                        v38 = (_DWORD)result << 16;
                        if (*v40 == 46) {
                          v39 = v40 + 1;
                          result = (unsigned __int8*)strchr_plt(
                              (void*)(v40 + 1),
                              (const char*)((__int64*)0x4LL) + 6);
                          if (result != nullptr) {
                            v23 = (unsigned __int64)result;
                          }
                          else {
                            v23 = (unsigned __int64)(v37 + 1);
                          }
                          v40 = (unsigned __int8*)v23;
                          if ((unsigned __int64)v39 < v23) {
                            v38 += ((v37[1] << 16) - 3145723) / 0xAu;
                            if ((unsigned __int64)(v37 + 2) < v23) {
                              v38 += ((v37[2] << 16) - 3145678) / 0x64u;
                              if ((unsigned __int64)(v37 + 3) < v23) {
                                v38 += ((v37[3] << 16) - 3145228) / 0x3E8u;
                                if ((unsigned __int64)(v37 + 4) < v23) {
                                  v38 += ((v37[4] << 16) - 3140728) / 0x2710u;
                                  if ((unsigned __int64)(v37 + 5) < v23) {
                                    v38 +=
                                        ((v37[5] << 16) - 3095728) / 0x186A0u;
                                    if ((unsigned __int64)(v37 + 6) < v23) {
                                      v38 +=
                                          ((v37[6] << 16) - 2645728) / 0xF4240u;
                                      if ((unsigned __int64)(v37 + 7) < v23) {
                                        v38 +=
                                            (unsigned int)((14073749 *
                                                            (unsigned __int64)((v37[7]
                                                                                << 16) +
                                                                               1854272)) >>
                                                           32) >>
                                            15;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          v23 = (unsigned __int64)v40;
                        }
                        *(_DWORD*)(a3 + 80) = v38;
                        goto LABEL_41;
                      }
                      if ((unsigned int)strncmp_plt("groupprimary=", v19, 13) !=
                          0) {
                        if ((unsigned int)strncmp_plt("plane1range1=", v19,
                                                      13) != 0) {
                          if ((unsigned int)strncmp_plt("plane1range2=", v19,
                                                        13) != 0) {
                            if ((unsigned int)strncmp_plt("plane2range1=", v19,
                                                          13) != 0) {
                              if ((unsigned int)strncmp_plt(
                                      "plane2range2=", v19, 13) != 0) {
                                if ((unsigned int)strncmp_plt(
                                        "plane14range1=", v19, 14) != 0) {
                                  if ((unsigned int)strncmp_plt(
                                          "plane14range2=", v19, 14) != 0) {
                                    if ((unsigned int)strncmp_plt(
                                            "adjustmentsoffset=", v19, 18) !=
                                        0) {
                                      if ((unsigned int)strncmp_plt(
                                              "adjustmentscount=", v19, 17) !=
                                          0) {
                                        result = (unsigned __int8*)memchr_plt(
                                            v19, 10, v22);
                                        v40 = result;
                                        if (result != nullptr) {
                                          v19 = result + 1;
                                        }
                                        else {
                                          v19 = (_BYTE*)(a4 + 512);
                                        }
                                        goto LABEL_14;
                                      }
                                      result = (unsigned __int8*)strtoul_plt(
                                          v19 + 17, &v40, 0);
                                      *(_WORD*)(a3 + 112) = (_WORD)result;
                                    }
                                    else {
                                      result = (unsigned __int8*)strtoul_plt(
                                          v19 + 18, &v40, 0);
                                      *(_DWORD*)(a3 + 108) = (_DWORD)result;
                                    }
                                  }
                                  else {
                                    result = (unsigned __int8*)strtoul_plt(
                                        v19 + 14, &v40, 0);
                                    *(_DWORD*)(a3 + 104) = (_DWORD)result;
                                  }
                                }
                                else {
                                  result = (unsigned __int8*)strtoul_plt(
                                      v19 + 14, &v40, 0);
                                  *(_DWORD*)(a3 + 100) = (_DWORD)result;
                                }
                              }
                              else {
                                result = (unsigned __int8*)strtoul_plt(v19 + 13,
                                                                       &v40, 0);
                                *(_DWORD*)(a3 + 96) = (_DWORD)result;
                              }
                            }
                            else {
                              result = (unsigned __int8*)strtoul_plt(v19 + 13,
                                                                     &v40, 0);
                              *(_DWORD*)(a3 + 92) = (_DWORD)result;
                            }
                          }
                          else {
                            result = (unsigned __int8*)strtoul_plt(v19 + 13,
                                                                   &v40, 0);
                            *(_DWORD*)(a3 + 88) = (_DWORD)result;
                          }
                        }
                        else {
                          result =
                              (unsigned __int8*)strtoul_plt(v19 + 13, &v40, 0);
                          *(_DWORD*)(a3 + 84) = (_DWORD)result;
                        }
                      }
                      else {
                        result =
                            (unsigned __int8*)strtoul_plt(v19 + 13, &v40, 0);
                        *(_WORD*)(a3 + 130) = (_WORD)result;
                      }
                    }
                    else {
                      result = (unsigned __int8*)strtol_plt(v19 + 7, &v40, 0);
                      *(_BYTE*)(a3 + 76) = (_BYTE)result;
                    }
                  }
                  else {
                    result = (unsigned __int8*)strtol_plt(v19 + 5, &v40, 0);
                    *(_BYTE*)(a3 + 68) = (_BYTE)result;
                  }
                }
                else {
                  result = (unsigned __int8*)strtoul_plt(v19 + 13, &v40, 0);
                  *(_DWORD*)(a3 + 64) = (_DWORD)result;
                }
              }
              else {
                result = (unsigned __int8*)strtoul_plt(v19 + 15, &v40, 0);
                *(_DWORD*)(a3 + 60) = (_DWORD)result;
              }
            }
            else {
              result = (unsigned __int8*)strtoul_plt(v19 + 13, &v40, 0);
              *(_DWORD*)(a3 + 56) = (_DWORD)result;
            }
          }
          else {
            result = (unsigned __int8*)strtoul_plt(v19 + 13, &v40, 0);
            *(_DWORD*)(a3 + 52) = (_DWORD)result;
          }
        }
        else {
          result = (unsigned __int8*)strtoul_plt(v19 + 13, &v40, 0);
          *(_DWORD*)(a3 + 48) = (_DWORD)result;
        }
      }
      else {
        result = (unsigned __int8*)strtoul_plt(v19 + 9, &v40, 0);
        *(_WORD*)(a3 + 28) = (_WORD)result;
      }
      v23 = (unsigned __int64)v40;
    LABEL_41:
      v19 = (_BYTE*)(v23 + 1);
    LABEL_14:
      v21 = a4 - (_QWORD)v19;
      v22 = a4 - (_QWORD)v19 + 512;
      if (a4 - (_QWORD)v19 == -512) {
        return result;
      }
    }
  }
  result = nullptr;
  v21 = a4 - (_QWORD)v19;
  *(_WORD*)(a3 + 26) = 0;
  v22 = a4 - (_QWORD)v19 + 512;
  if (a4 - (_QWORD)v19 != -512) {
    goto LABEL_15;
  }
  return result;
}

__int64 extract_outline(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  int v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  int v25;
  char* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  _BOOL4 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _BOOL4 v50;
  int v51;
  int v52;
  int v53;
  char* v54;
  char v55;
  char* v56;
  int v57;
  int v58;
  int v59;
  char v60;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  signed int v66;
  signed int v67;
  unsigned int v68;
  __int64 v69;
  int* v70;
  int* v71;
  int v72;
  int v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  __int64 v78;
  int v79;
  int v80;
  char* v81;
  int v82;
  __int64 v83;
  __int64 v84;
  int v85;
  int v86;
  char* v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v102;
  int v103;
  __int64 v104;
  int v105;
  __int64 v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  unsigned __int64 v112;
  int* v113;
  int* v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int* v121;
  int* v122;
  int v123;
  int v124;
  int v125;
  int v126;
  __int64 v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  unsigned int v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  int v136;
  unsigned int v137;
  __int64 v138;
  int v139;
  int v140;
  __int64 v141;
  int v142;
  int v143;
  int v144;
  int v145;
  __int64 v147;
  int v148;
  __int64 v149;
  int v150;
  __int64 v151;
  int v152;
  __int64 v153;
  int v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  int v158;
  char* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  int v163;
  bool v164;
  int v165;
  struct {
    int v166;
    int v167;
  } v166_;
  unsigned __int64 v168;

  v2 = *(_QWORD*)(a1 + 128);
  v3 = *(int*)(a2 + 184);
  v4 = *(int*)(a2 + 188);
  v5 = a1;
  v6 = *(int*)(a2 + 164);
  v7 = *(__int16*)(a2 + 424);
  v168 = 0;
  v8 = *(_QWORD*)(v2 + 16816);
  v9 = v8 + v6;
  if (v7 != 0) {
    v10 = *(unsigned __int16*)(v9 + 2 * v7 - 2) + 1;
    v11 = *(_QWORD*)(a1 + 48);
    v12 = v8 + v3;
    v13 = v8 + v4;
    if (*(_DWORD*)(a1 + 100) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v10 = 0;
    v11 = *(_QWORD*)(a1 + 48);
    v12 = v8 + v3;
    v13 = v8 + v4;
    if (*(_DWORD*)(a1 + 100) != 0) {
    LABEL_3:
      v14 = false;
      v15 = *(_QWORD*)(v11 + 56);
      v16 = (__int16)v10;
      v165 = v10;
      if ((__int16)v10 >= 3) {
        goto LABEL_4;
      }
    LABEL_21:
      v29 = v13;
      v30 = FSS_calloc_plt(a1, 80);
      v31 = v30;
      if (v30 == 0) {
        return v31;
      }
      v21 = 0;
      *(_DWORD*)(v30 + 8) = 80;
      v32 = v29;
      v33 = *(_DWORD*)(v5 + 76);
      v34 = v165;
      if ((v33 & 0x10000) != 0) {
        goto LABEL_158;
      }
      goto LABEL_23;
    }
  }
  v14 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                              24LL * *(unsigned __int16*)(a1 + 40)) +
                   44LL) == 0;
  v15 = *(_QWORD*)(v11 + 56);
  v16 = (__int16)v10;
  v165 = v10;
  if ((__int16)v10 < 3) {
    goto LABEL_21;
  }
LABEL_4:
  v163 = v16;
  v17 = (char*)(v8 + *(int*)(a2 + 192));
  v18 = v8 + *(int*)(a2 + 160);
  v164 = v14;
  if (*(_BYTE*)(v11 + 65) != 7) {
    if ((*(_BYTE*)(v11 + 36) & 2) != 0) {
      if ((_DWORD)v7 == 0) {
        goto LABEL_70;
      }
      v37 = *v17 < 0;
      v19 = a1;
      if ((int)v7 < 1) {
      LABEL_71:
        v22 = 0;
        v21 = 0;
        goto LABEL_72;
      }
    }
    else {
      v37 = true;
      v19 = a1;
      if ((int)v7 < 1) {
        goto LABEL_71;
      }
    }
    v49 = 0;
    v50 = false;
    v21 = 0;
    v22 = 0;
    while (1) {
      v51 = *(unsigned __int16*)(v9 + 2 * v49);
      v52 = *(unsigned __int16*)(v18 + 2 * v49);
      if (v52 != v51) {
        break;
      }
    LABEL_36:
      if (++v49 == v7) {
        goto LABEL_72;
      }
    }
    v53 = (__int16)v51;
    if (!v37) {
      v50 = (v17[(__int16)v51] & 1) == 0;
    }
    v54 = &v17[(__int16)v52];
    v56 = v54 + 1;
    v55 = *v54;
    if ((*v54 & 1) != 0) {
      v57 = 1;
      ++v21;
      ++v22;
      v58 = (__int16)(v52 + 1);
      if (v58 <= v53) {
        goto LABEL_45;
      }
    }
    else {
      v56 = v54 + 2;
      v57 = v54[1] & 1;
      ++v21;
      ++v22;
      v58 = (__int16)(v52 + 2);
      if (v58 <= v53) {
        do {
        LABEL_45:
          v60 = *v56++;
          v59 = v60 & 1;
          if ((v60 & 1) != 0) {
            v61 = v22 + 1;
          }
          else {
            v61 = v22;
          }
          if (v59 != 0) {
            v62 = v21 + 1;
          }
          else {
            v62 = v21;
          }
          if (v57 != 0) {
            v22 = v61;
          }
          else {
            ++v22;
          }
          if (v57 != 0) {
            v21 = v62;
          }
          else {
            v21 += 2;
          }
          v58 = (__int16)(v58 + 1);
          v57 = v59;
        } while (v58 <= v53);
        goto LABEL_58;
      }
    }
    v59 = v57;
  LABEL_58:
    v63 = v50 || v37;
    if (v63 == 1) {
      if ((v55 & 1) != 0) {
        ++v22;
        if (v59 != 0) {
          ++v21;
        }
        else {
          v21 += 2;
        }
      }
      else {
        v64 = v21 + 2;
        if (v59 != 0) {
          v64 = v21;
          v65 = v22;
        }
        else {
          v65 = v22 + 1;
        }
        v22 = v65 + 1;
        v21 = v64 + 2;
      }
    }
    else {
      v50 = false;
    }
    goto LABEL_36;
  }
  if ((int)v7 < 1) {
  LABEL_70:
    v19 = a1;
    goto LABEL_71;
  }
  v19 = a1;
  if ((_DWORD)v7 == 1) {
    v20 = 0;
    v21 = 0;
    v22 = 0;
  }
  else {
    v20 = 0;
    v21 = 0;
    v22 = 0;
    do {
      v78 = 2 * v20;
      v79 = *(__int16*)(v9 + 2 * v20);
      v80 = *(__int16*)(v18 + 2 * v20);
      if (v80 < v79) {
        v81 = &v17[*(__int16*)(v18 + 2 * v20)];
        do {
          ++v22;
          v82 = *v81 & 1;
          if ((*v81 & 1) != 0) {
            v83 = 1;
          }
          else {
            LOWORD(v80) = v80 + 2;
            v83 = 3;
          }
          v81 += v83;
          LOWORD(v80) = v80 + 1;
          if (v82 != 0) {
            ++v21;
          }
          else {
            v21 += 3;
          }
        } while ((__int16)v80 <= v79);
      }
      v84 = v78 | 2;
      v85 = *(__int16*)(v9 + (v78 | 2));
      v86 = *(__int16*)(v18 + v84);
      if (v86 < v85) {
        v87 = &v17[*(__int16*)(v18 + v84)];
        do {
          ++v22;
          v88 = *v87 & 1;
          if ((*v87 & 1) != 0) {
            v89 = 1;
          }
          else {
            LOWORD(v86) = v86 + 2;
            v89 = 3;
          }
          v87 += v89;
          LOWORD(v86) = v86 + 1;
          if (v88 != 0) {
            ++v21;
          }
          else {
            v21 += 3;
          }
        } while ((__int16)v86 <= v85);
      }
      v20 += 2;
    } while (v20 != (v7 & 0x7FFE));
  }
  if ((v7 & 1) != 0) {
    v23 = 2 * v20;
    v24 = *(__int16*)(v9 + 2 * v20);
    v25 = *(__int16*)(v18 + v23);
    if (v25 < v24) {
      v26 = &v17[*(__int16*)(v18 + v23)];
      do {
        ++v22;
        v27 = *v26 & 1;
        if ((*v26 & 1) != 0) {
          v28 = 1;
        }
        else {
          LOWORD(v25) = v25 + 2;
          v28 = 3;
        }
        v26 += v28;
        LOWORD(v25) = v25 + 1;
        if (v27 != 0) {
          ++v21;
        }
        else {
          v21 += 3;
        }
      } while ((__int16)v25 <= v24);
    }
  }
LABEL_72:
  v161 = v15;
  v162 = v12;
  v159 = v17;
  v160 = v13;
  v66 = (v22 + 87) & 0xFFFFFFF8;
  v168 = __PAIR64__(v22, v21);
  v67 = (v66 + 4 * v21 + 7) & 0xFFFFFFF8;
  v68 = v67 + 4 * v21;
  v69 = FSS_calloc_plt(v19, v68);
  v31 = v69;
  if (v69 == 0) {
    return v31;
  }
  *(_DWORD*)(v69 + 8) = v68;
  *(_WORD*)(v69 + 40) = v7;
  *(_WORD*)(v69 + 44) = v22;
  v5 = v19;
  *(_WORD*)(v69 + 42) = v21;
  *(_QWORD*)(v69 + 56) = v69 + 80;
  *(_QWORD*)(v69 + 64) = v69 + v66;
  *(_QWORD*)(v69 + 72) = v69 + v67;
  *(_WORD*)(v69 + 46) = 1;
  if (*(_BYTE*)(*(_QWORD*)(v19 + 48) + 65LL) == 7) {
    v12 = v162;
    v32 = v160;
    fill_outline_cff_plt(v19, (unsigned int)v7, v18, v9, v162, v160, v159, v69);
    v14 = v164;
    v15 = v161;
    v16 = v163;
    if (v21 != 0) {
      goto LABEL_75;
    }
  }
  else {
    v12 = v162;
    v32 = v160;
    fill_outline_plt(v19, (unsigned int)v7, v18, v9, v162, v160, v159, v69);
    v14 = v164;
    v15 = v161;
    v16 = v163;
    if (v21 != 0) {
    LABEL_75:
      v70 = *(int**)(v31 + 64);
      v71 = *(int**)(v31 + 72);
      v72 = *v70;
      v73 = *v71;
      if (v21 < 2) {
        v77 = *v70;
        v76 = *v71;
      }
      else {
        v74 = ((_BYTE)v21 - 1) & 3;
        if ((unsigned int)(v21 - 2) >= 3) {
          v112 = ((unsigned int)v21 - 1LL) & 0xFFFFFFFFFFFFFFFCLL;
          v113 = v70 + 2;
          v114 = v71 + 2;
          v75 = 1;
          v76 = *v71;
          v77 = *v70;
          do {
            v115 = *(v113 - 1);
            v75 += 4;
            if (v115 > v72) {
              v72 = *(v113 - 1);
            }
            if (v115 < v77) {
              v77 = *(v113 - 1);
            }
            v116 = *(v114 - 1);
            if (v116 > v73) {
              v73 = *(v114 - 1);
            }
            if (v116 < v76) {
              v76 = *(v114 - 1);
            }
            v117 = v113[1];
            if (*v113 > v72) {
              v72 = *v113;
            }
            if (*v113 < v77) {
              v77 = *v113;
            }
            v118 = v114[1];
            if (*v114 > v73) {
              v73 = *v114;
            }
            if (*v114 < v76) {
              v76 = *v114;
            }
            v119 = v113[2];
            v113 += 4;
            if (v117 > v72) {
              v72 = v117;
            }
            if (v117 < v77) {
              v77 = v117;
            }
            if (v118 > v73) {
              v73 = v114[1];
            }
            if (v118 < v76) {
              v76 = v114[1];
            }
            if (v119 > v72) {
              v72 = v119;
            }
            if (v119 < v77) {
              v77 = v119;
            }
            v120 = v114[2];
            v114 += 4;
            if (v120 > v73) {
              v73 = v120;
            }
            if (v120 < v76) {
              v76 = v120;
            }
            v112 -= 4LL;
          } while (v112 != 0);
        }
        else {
          v75 = 1;
          v76 = *v71;
          v77 = *v70;
        }
        if ((((_BYTE)v21 - 1) & 3) != 0) {
          v121 = &v71[v75];
          v122 = &v70[v75];
          do {
            v124 = *v122++;
            v123 = v124;
            if (v124 > v72) {
              v72 = v123;
            }
            if (v123 < v77) {
              v77 = v123;
            }
            v126 = *v121++;
            v125 = v126;
            if (v126 > v73) {
              v73 = v125;
            }
            if (v125 < v76) {
              v76 = v125;
            }
            --v74;
          } while (v74 != 0);
        }
      }
      *(_DWORD*)(v31 + 12) = v77;
      *(_DWORD*)(v31 + 16) = v72;
      *(_DWORD*)(v31 + 20) = v76;
      *(_DWORD*)(v31 + 24) = v73;
      v33 = *(_DWORD*)(v5 + 76);
      v34 = v165;
      if ((v33 & 0x10000) != 0) {
        goto LABEL_158;
      }
      goto LABEL_23;
    }
  }
  *(_QWORD*)(v31 + 20) = 0;
  *(_QWORD*)(v31 + 12) = 0;
  v33 = *(_DWORD*)(v5 + 76);
  v34 = v165;
  if ((v33 & 0x10000) != 0) {
  LABEL_158:
    v127 = (4 * v34 + 12) & 0x3FFFC;
    *(_DWORD*)(v31 + 32) =
        (*(_DWORD*)(v12 + 4LL * (unsigned __int16)(v16 + 2)) -
         *(_DWORD*)(v12 + v127))
        << 10;
    *(_DWORD*)(v31 + 36) = (*(_DWORD*)(v32 + v127) -
                            *(_DWORD*)(v32 + 4LL * (unsigned __int16)(v16 + 2)))
                           << 10;
    v128 = (*(_DWORD*)(v12 + 4LL * (v16 + 2)) << 10) & 0xFFFF0000;
    v129 = (*(_DWORD*)(v32 + 4LL * (v16 + 2)) << 10) & 0xFFFF0000;
    v130 = *(_DWORD*)(v31 + 16) - v128;
    *(_DWORD*)(v31 + 12) -= v128;
    *(_DWORD*)(v31 + 16) = v130;
    v131 = *(_DWORD*)(v31 + 24) - v129;
    *(_DWORD*)(v31 + 20) -= v129;
    *(_DWORD*)(v31 + 24) = v131;
    if (v21 >= 1) {
      v132 = v21 & 3;
      if ((unsigned int)v21 >= 4) {
        v133 = 0;
        do {
          *(_DWORD*)(*(_QWORD*)(v31 + 64) + 4 * v133) -= v128;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v133) -= v129;
          *(_DWORD*)(*(_QWORD*)(v31 + 64) + 4 * v133 + 4) -= v128;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v133 + 4) -= v129;
          *(_DWORD*)(*(_QWORD*)(v31 + 64) + 4 * v133 + 8) -= v128;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v133 + 8) -= v129;
          *(_DWORD*)(*(_QWORD*)(v31 + 64) + 4 * v133 + 12) -= v128;
          v134 = *(_QWORD*)(v31 + 72) + 4 * v133;
          v133 += 4;
          *(_DWORD*)(v134 + 12) -= v129;
        } while ((v21 & 0x7FFFFFFC) != v133);
      }
      else {
        v133 = 0;
      }
      if ((v21 & 3) != 0) {
        v135 = 4 * v133;
        do {
          --v132;
          *(_DWORD*)(*(_QWORD*)(v31 + 64) + v135) -= v128;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + v135) -= v129;
          v135 += 4;
        } while (v132 != 0);
      }
    }
    goto LABEL_166;
  }
LABEL_23:
  if ((v33 & 0x20000) != 0) {
    v38 = 4 * v34;
    v39 = 4LL * (unsigned __int16)v34;
    v40 = (v38 + 4) & 0x3FFFC;
    *(_DWORD*)(v31 + 32) = (*(_DWORD*)(v32 + v40) - *(_DWORD*)(v32 + v39))
                           << 10;
    *(_DWORD*)(v31 + 36) = (*(_DWORD*)(v12 + v40) - *(_DWORD*)(v12 + v39))
                           << 10;
    v41 = muldiv_64_plt(*(unsigned __int16*)(*(_QWORD*)(v15 + 56) + 4LL) << 16,
                        *(unsigned __int16*)(v5 + 112),
                        *(unsigned __int16*)(*(_QWORD*)(v15 + 48) + 18LL));
    v42 = muldiv_64_plt(*(unsigned __int16*)(*(_QWORD*)(v15 + 56) + 6LL) << 16,
                        *(unsigned __int16*)(v5 + 112),
                        *(unsigned __int16*)(*(_QWORD*)(v15 + 48) + 18LL));
    v43 = *(_DWORD*)(v31 + 12);
    v44 = ((v42 >> 1) + (v41 >> 1)) & 0xFFFF0000;
    v45 = *(_DWORD*)(v31 + 24) - v44;
    v46 = -*(_DWORD*)(v31 + 16);
    *(_DWORD*)(v31 + 12) = *(_DWORD*)(v31 + 20) - v44;
    *(_DWORD*)(v31 + 16) = v45;
    *(_DWORD*)(v31 + 20) = v46;
    *(_DWORD*)(v31 + 24) = -v43;
    if (v21 >= 1) {
      v47 = v21 & 3;
      if ((unsigned int)v21 >= 4) {
        v48 = 0;
        do {
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48) -= v44;
          v100 = *(_QWORD*)(v31 + 64);
          v101 = *(_DWORD*)(v100 + 4 * v48);
          *(_DWORD*)(v100 + 4 * v48) =
              *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48);
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48) = -v101;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48 + 4) -= v44;
          v102 = *(_QWORD*)(v31 + 64) + 4 * v48;
          v103 = *(_DWORD*)(v102 + 4);
          *(_DWORD*)(v102 + 4) = *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48 + 4);
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48 + 4) = -v103;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48 + 8) -= v44;
          v104 = *(_QWORD*)(v31 + 64) + 4 * v48;
          v105 = *(_DWORD*)(v104 + 8);
          *(_DWORD*)(v104 + 8) = *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48 + 8);
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48 + 8) = -v105;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48 + 12) -= v44;
          v106 = *(_QWORD*)(v31 + 64) + 4 * v48;
          v107 = *(_DWORD*)(v106 + 12);
          *(_DWORD*)(v106 + 12) =
              *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v48 + 12);
          v108 = *(_QWORD*)(v31 + 72) + 4 * v48;
          v48 += 4;
          *(_DWORD*)(v108 + 12) = -v107;
        } while ((v21 & 0x7FFFFFFC) != v48);
      }
      else {
        v48 = 0;
      }
      if ((v21 & 3) != 0) {
        v109 = 4 * v48;
        do {
          --v47;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + v109) -= v44;
          v110 = *(_QWORD*)(v31 + 64);
          v111 = *(_DWORD*)(v110 + v109);
          *(_DWORD*)(v110 + v109) = *(_DWORD*)(*(_QWORD*)(v31 + 72) + v109);
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + v109) = -v111;
          v109 += 4;
        } while (v47 != 0);
      }
    }
  }
  else if ((v33 & 0x40000) != 0) {
    v90 = 4LL * (unsigned __int16)v34;
    v91 = 4LL * (unsigned __int16)(v34 + 1);
    *(_DWORD*)(v31 + 32) = (*(_DWORD*)(v32 + v90) - *(_DWORD*)(v32 + v91))
                           << 10;
    *(_DWORD*)(v31 + 36) = (*(_DWORD*)(v12 + v90) - *(_DWORD*)(v12 + v91))
                           << 10;
    v92 = muldiv_64_plt(*(unsigned __int16*)(*(_QWORD*)(v15 + 56) + 4LL) << 16,
                        *(unsigned __int16*)(v5 + 112),
                        *(unsigned __int16*)(*(_QWORD*)(v15 + 48) + 18LL));
    v93 = muldiv_64_plt(*(unsigned __int16*)(*(_QWORD*)(v15 + 56) + 6LL) << 16,
                        *(unsigned __int16*)(v5 + 112),
                        *(unsigned __int16*)(*(_QWORD*)(v15 + 48) + 18LL));
    v94 = *(_DWORD*)(v31 + 16);
    v95 = ((v93 >> 1) + (v92 >> 1)) & 0xFFFF0000;
    v96 = v95 - *(_DWORD*)(v31 + 20);
    v97 = v95 - *(_DWORD*)(v31 + 24);
    *(_DWORD*)(v31 + 20) = *(_DWORD*)(v31 + 12);
    *(_DWORD*)(v31 + 24) = v94;
    *(_DWORD*)(v31 + 12) = v97;
    *(_DWORD*)(v31 + 16) = v96;
    if (v21 >= 1) {
      v98 = v21 & 3;
      if ((unsigned int)v21 >= 4) {
        v99 = 0;
        do {
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99) -= v95;
          v147 = *(_QWORD*)(v31 + 64);
          v148 = *(_DWORD*)(v147 + 4 * v99);
          *(_DWORD*)(v147 + 4 * v99) =
              -*(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99);
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99) = v148;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99 + 4) -= v95;
          v149 = *(_QWORD*)(v31 + 64) + 4 * v99;
          v150 = *(_DWORD*)(v149 + 4);
          *(_DWORD*)(v149 + 4) =
              -*(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99 + 4);
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99 + 4) = v150;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99 + 8) -= v95;
          v151 = *(_QWORD*)(v31 + 64) + 4 * v99;
          v152 = *(_DWORD*)(v151 + 8);
          *(_DWORD*)(v151 + 8) =
              -*(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99 + 8);
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99 + 8) = v152;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99 + 12) -= v95;
          v153 = *(_QWORD*)(v31 + 64) + 4 * v99;
          v154 = *(_DWORD*)(v153 + 12);
          *(_DWORD*)(v153 + 12) =
              -*(_DWORD*)(*(_QWORD*)(v31 + 72) + 4 * v99 + 12);
          v155 = *(_QWORD*)(v31 + 72) + 4 * v99;
          v99 += 4;
          *(_DWORD*)(v155 + 12) = v154;
        } while ((v21 & 0x7FFFFFFC) != v99);
      }
      else {
        v99 = 0;
      }
      if ((v21 & 3) != 0) {
        v156 = 4 * v99;
        do {
          --v98;
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + v156) -= v95;
          v157 = *(_QWORD*)(v31 + 64);
          v158 = *(_DWORD*)(v157 + v156);
          *(_DWORD*)(v157 + v156) = -*(_DWORD*)(*(_QWORD*)(v31 + 72) + v156);
          *(_DWORD*)(*(_QWORD*)(v31 + 72) + v156) = v158;
          v156 += 4;
        } while (v98 != 0);
      }
    }
  }
  else {
    v35 = 4LL * (unsigned __int16)(v34 + 1);
    v36 = 4LL * (unsigned __int16)v34;
    *(_DWORD*)(v31 + 32) = (*(_DWORD*)(v12 + v35) - *(_DWORD*)(v12 + v36))
                           << 10;
    *(_DWORD*)(v31 + 36) = (*(_DWORD*)(v32 + v35) - *(_DWORD*)(v32 + v36))
                           << 10;
  }
LABEL_166:
  v136 = *(_DWORD*)(v31 + 32);
  v137 = *(_DWORD*)(v31 + 36);
  if (v136 == 0) {
    v137 = (v137 + 0x8000) >> 16;
  LABEL_171:
    *(_WORD*)(v31 + 30) = v137;
    *(_WORD*)(v31 + 28) = (unsigned int)(v136 + 0x8000) >> 16;
    if (v14) {
      return v31;
    }
    goto LABEL_172;
  }
  if (v137 == 0) {
    goto LABEL_171;
  }
  *(_DWORD*)(v31 + 28) = 0;
  if (v14) {
    return v31;
  }
LABEL_172:
  if ((*(_BYTE*)(v5 + 77) & 2) == 0) {
    if (v16 < 3) {
      v139 = (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 32) +
                                    24LL * *(unsigned __int16*)(v5 + 40)) +
                         44LL) +
              *(_DWORD*)(v5 + 100)) *
             *(unsigned __int16*)(v5 + 112);
      if (v139 != (__int16)v139) {
        v140 = (v139 + 0x8000) >> 16;
        v141 = *(_QWORD*)(v5 + 56);
        v142 = *(_DWORD*)(v141 + 8);
        LODWORD(v141) = *(_DWORD*)(v141 + 16);
        v166_.v166 = v142;
        v166_.v167 = v141;
        fixed_norm_plt(&v166_.v166);
        v143 = v166_.v166 * v140;
        v144 = v166_.v167 * v140;
        v145 = *(_DWORD*)(v31 + 36) + v166_.v167 * v140;
        *(_DWORD*)(v31 + 32) += v166_.v166 * v140;
        *(_DWORD*)(v31 + 36) = v145;
        if (*(_WORD*)(v31 + 28) != 0) {
          *(_WORD*)(v31 + 28) += (unsigned int)(v143 + 0x8000) >> 16;
        }
        if (*(_WORD*)(v31 + 30) != 0) {
          *(_WORD*)(v31 + 30) += (unsigned int)(v144 + 0x8000) >> 16;
        }
      }
    }
    else {
      v138 = embolden_outline_plt(v5, v31, (char*)&v168 + 4, &v168);
      if (v138 != v31) {
        FSS_free_char_plt((void*)v5, (void*)v31);
      }
      return v138;
    }
  }
  return v31;
}

void count_points_cff(__int64 a1, __int16 a2, __int64 a3, __int64 a4,
                      __int64 a5, _DWORD* a6, _DWORD* a7)
{
  char v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  _BYTE* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  _BYTE* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  _BYTE* v27;
  int v28;
  __int64 v29;

  if (a2 < 1) {
    *a6 = 0;
    *a7 = 0;
  }
  else {
    v7 = a2;
    if (a2 == 1) {
      v8 = 0;
      v9 = 0;
      v10 = 0;
    }
    else {
      v17 = a2 & 0x7FFE;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      do {
        v18 = 2 * v8;
        v19 = *(__int16*)(a4 + 2 * v8);
        v20 = *(__int16*)(a3 + 2 * v8);
        if (v20 < v19) {
          v21 = (_BYTE*)(a5 + *(__int16*)(a3 + 2 * v8));
          do {
            ++v10;
            v22 = *v21 & 1;
            if ((*v21 & 1) != 0) {
              v23 = 1;
            }
            else {
              LOWORD(v20) = v20 + 2;
              v23 = 3;
            }
            v21 += v23;
            LOWORD(v20) = v20 + 1;
            if (v22 != 0) {
              ++v9;
            }
            else {
              v9 += 3;
            }
          } while ((__int16)v20 <= v19);
        }
        v24 = v18 | 2;
        v25 = *(__int16*)(a4 + (v18 | 2));
        v26 = *(__int16*)(a3 + v24);
        if (v26 < v25) {
          v27 = (_BYTE*)(a5 + *(__int16*)(a3 + v24));
          do {
            ++v10;
            v28 = *v27 & 1;
            if ((*v27 & 1) != 0) {
              v29 = 1;
            }
            else {
              LOWORD(v26) = v26 + 2;
              v29 = 3;
            }
            v27 += v29;
            LOWORD(v26) = v26 + 1;
            if (v28 != 0) {
              ++v9;
            }
            else {
              v9 += 3;
            }
          } while ((__int16)v26 <= v25);
        }
        v8 += 2;
      } while (v8 != v17);
    }
    if ((v7 & 1) != 0) {
      v11 = 2 * v8;
      v12 = *(__int16*)(a4 + v11);
      v13 = *(__int16*)(a3 + v11);
      if (v13 < v12) {
        v14 = (_BYTE*)(a5 + *(__int16*)(a3 + v11));
        do {
          ++v10;
          v15 = *v14 & 1;
          if ((*v14 & 1) != 0) {
            v16 = 1;
          }
          else {
            LOWORD(v13) = v13 + 2;
            v16 = 3;
          }
          v14 += v16;
          LOWORD(v13) = v13 + 1;
          if (v15 != 0) {
            ++v9;
          }
          else {
            v9 += 3;
          }
        } while ((__int16)v13 <= v12);
      }
    }
    *a6 = v10;
    *a7 = v9;
  }
}

__int64 count_points(__int64 result, unsigned __int16 a2, __int64 a3,
                     __int64 a4, char* a5, _DWORD* a6, _DWORD* a7)
{
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char* v15;
  char v16;
  char* v17;
  int v18;
  int v19;
  char v20;
  int v21;
  int v22;
  int v23;

  if ((*(_BYTE*)(*(_QWORD*)(result + 48) + 36LL) & 2) != 0) {
    if (a2 == 0) {
      goto LABEL_40;
    }
    v7 = *a5 < 0;
    if ((__int16)a2 < 1) {
      goto LABEL_40;
    }
    goto LABEL_6;
  }
  v7 = true;
  if ((__int16)a2 >= 1) {
  LABEL_6:
    v8 = a2;
    v9 = 0;
    v10 = false;
    v11 = 0;
    v12 = 0;
    while (1) {
      v13 = *(unsigned __int16*)(a4 + 2 * v9);
      result = *(unsigned __int16*)(a3 + 2 * v9);
      if ((_DWORD)result == v13) {
        goto LABEL_8;
      }
      v14 = (__int16)v13;
      if (!v7) {
        v10 = (a5[(__int16)v13] & 1) == 0;
      }
      v15 = &a5[(__int16)result];
      v17 = v15 + 1;
      v16 = *v15;
      if ((*v15 & 1) != 0) {
        v18 = 1;
        ++v11;
        ++v12;
        result = (unsigned int)(__int16)(result + 1);
        if ((int)result > v14) {
        LABEL_16:
          v19 = v18;
          goto LABEL_29;
        }
      }
      else {
        v17 = v15 + 2;
        v18 = v15[1] & 1;
        ++v11;
        ++v12;
        result = (unsigned int)(__int16)(result + 2);
        if ((int)result > v14) {
          goto LABEL_16;
        }
      }
      do {
        v20 = *v17++;
        v19 = v20 & 1;
        if ((v20 & 1) != 0) {
          v21 = v12 + 1;
        }
        else {
          v21 = v12;
        }
        if (v19 != 0) {
          v22 = v11 + 1;
        }
        else {
          v22 = v11;
        }
        v11 += 2;
        if (v18 != 0) {
          v12 = v21;
        }
        else {
          ++v12;
        }
        if (v18 != 0) {
          v11 = v22;
        }
        result = (unsigned int)(__int16)(result + 1);
        v18 = v19;
      } while ((int)result <= v14);
    LABEL_29:
      v23 = v10 || v7;
      if (v23 == 1) {
        if ((v16 & 1) == 0) {
          if (v19 == 0) {
            ++v12;
            v11 += 2;
          }
          ++v12;
        LABEL_39:
          v11 += 2;
          goto LABEL_8;
        }
        ++v12;
        if (v19 == 0) {
          goto LABEL_39;
        }
        ++v11;
      }
      else {
        v10 = false;
      }
    LABEL_8:
      if (++v9 == v8) {
        goto LABEL_41;
      }
    }
  }
LABEL_40:
  v12 = 0;
  v11 = 0;
LABEL_41:
  *a6 = v12;
  *a7 = v11;
  return result;
}

__int64 setup_outline(__int64 a1, __int16 a2, int a3, int a4)
{
  __int16 v4;
  __int16 v5;
  signed int v7;
  signed int v8;
  unsigned int v9;
  __int64 result;

  v4 = a4;
  v5 = a3;
  v7 = (a3 + 87) & 0xFFFFFFF8;
  v8 = (v7 + 4 * a4 + 7) & 0xFFFFFFF8;
  v9 = v8 + 4 * a4;
  result = FSS_calloc_plt(a1, v9);
  if (result != 0) {
    *(_DWORD*)(result + 8) = v9;
    *(_WORD*)(result + 40) = a2;
    *(_WORD*)(result + 44) = v5;
    *(_WORD*)(result + 42) = v4;
    *(_QWORD*)(result + 56) = result + 80;
    *(_QWORD*)(result + 64) = result + v7;
    *(_QWORD*)(result + 72) = result + v8;
    *(_WORD*)(result + 46) = 1;
  }
  return result;
}

__int64 fill_outline_cff(__int64 result, unsigned __int16 a2, __int64 a3,
                         __int64 a4, __int64 a5, __int64 a6, char* a7,
                         __int64 a8)
{
  _BYTE* v8;
  _DWORD* v9;
  _DWORD* v10;
  bool v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int* v17;
  int* v18;
  int v19;
  int v20;
  char* v21;
  int* v22;
  int* v23;
  int* v24;
  int* v25;
  char* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int* v34;
  int* v35;
  int v36;
  int v37;

  v8 = *(_BYTE**)(a8 + 56);
  v9 = *(_DWORD**)(a8 + 64);
  v10 = *(_DWORD**)(a8 + 72);
  if ((*(_BYTE*)(*(_QWORD*)(result + 48) + 36LL) & 2) == 0) {
    v11 = false;
    *(_WORD*)(a8 + 40) = 0;
    if ((__int16)a2 < 1) {
      goto LABEL_19;
    }
  LABEL_6:
    v12 = a7 + 1;
    v13 = a2;
    v14 = 0;
    do {
      result = 2 * v14;
      v15 = *(unsigned __int16*)(a4 + 2 * v14);
      v16 = *(unsigned __int16*)(a3 + 2 * v14);
      if (v16 != v15) {
        v17 = (int*)(a5 + 4LL * (__int16)v16);
        v18 = (int*)(a6 + 4LL * (__int16)v16);
        ++*(_WORD*)(a8 + 40);
        v19 = *v17;
        v20 = *v18;
        *v8++ = 0;
        *v9++ = v19 << 10;
        *v10++ = v20 << 10;
        result = (unsigned int)(__int16)(v16 + 1);
        if ((int)result <= (__int16)v15) {
          v21 = &v12[(__int16)v16];
          v22 = v18 + 1;
          v23 = v17 + 1;
          v24 = v17 + 1;
          v25 = v22;
          v26 = v21;
          do {
            v28 = *v24++;
            v27 = v28;
            v30 = *v25++;
            v29 = v30;
            v31 = (unsigned __int8)*v26++;
            if (v31 != 0) {
              *v8++ = 1;
              *v9++ = v27 << 10;
              *v10++ = v29 << 10;
            }
            else {
              v32 = v23[1];
              v33 = v22[1];
              v24 = v23 + 2;
              v25 = v22 + 2;
              if (v21[1] != 0) {
                LODWORD(result) = v16 + 2;
                *v8++ = 2;
                v26 = v21 + 2;
                *v9 = v27 << 10;
                *v10 = v29 << 10;
                v9[1] = v32 << 10;
                v9 += 2;
                v10[1] = v33 << 10;
                v10 += 2;
              }
              else {
                LODWORD(result) = v16 + 3;
                v34 = v23 + 3;
                v35 = v22 + 3;
                v26 = v21 + 3;
                if (v21[2] != 0) {
                  v36 = *v24;
                  v37 = *v25;
                  *v8++ = 3;
                  *v9 = v27 << 10;
                  *v10 = v29 << 10;
                  v9[1] = v32 << 10;
                  v10[1] = v33 << 10;
                  v9[2] = v36 << 10;
                  v9 += 3;
                  v10[2] = v37 << 10;
                  v10 += 3;
                }
                v24 = v34;
                v25 = v35;
              }
            }
            v16 = result;
            v22 = v25;
            v23 = v24;
            v21 = v26;
            result = (unsigned int)(__int16)(result + 1);
          } while ((int)result <= (__int16)v15);
        }
      }
      ++v14;
    } while (v14 != v13);
    goto LABEL_19;
  }
  if (a2 == 0) {
    *(_WORD*)(a8 + 40) = 0;
    return result;
  }
  v11 = *a7 > -1;
  *(_WORD*)(a8 + 40) = 0;
  if ((__int16)a2 >= 1) {
    goto LABEL_6;
  }
LABEL_19:
  if (!v11) {
    **(_BYTE**)(a8 + 56) |= 0x80u;
  }
  return result;
}

__int64 fill_outline(__int64 result, unsigned __int16 a2, __int64 a3,
                     __int64 a4, __int64 a5, __int64 a6, unsigned __int8* a7,
                     __int64 a8)
{
  unsigned int* v8;
  _BYTE* v9;
  _DWORD* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  int* v24;
  int* v25;
  int v26;
  int* v27;
  unsigned __int8* v28;
  int v29;
  int* v30;
  unsigned __int8 v31;
  unsigned __int8* v32;
  int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  _BYTE* v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;

  v9 = *(_BYTE**)(a8 + 56);
  v8 = *(unsigned int**)(a8 + 64);
  v10 = *(_DWORD**)(a8 + 72);
  if ((*(_BYTE*)(*(_QWORD*)(result + 48) + 36LL) & 2) == 0) {
    v11 = 1;
    *(_WORD*)(a8 + 40) = 0;
    if ((__int16)a2 < 1) {
      goto LABEL_41;
    }
    goto LABEL_6;
  }
  if (a2 == 0) {
    *(_WORD*)(a8 + 40) = 0;
    return result;
  }
  v11 = *a7 >> 7;
  *(_WORD*)(a8 + 40) = 0;
  if ((__int16)a2 >= 1) {
  LABEL_6:
    v12 = a2;
    v13 = 0;
    v14 = false;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v46 = 0;
    v18 = 0;
    do {
      v21 = *(unsigned __int16*)(a4 + 2 * v13);
      v22 = *(unsigned __int16*)(a3 + 2 * v13);
      if (v22 == v21) {
        v19 = v16;
        v20 = v15;
        goto LABEL_8;
      }
      ++*(_WORD*)(a8 + 40);
      if (v11 == 0) {
        v14 = (a7[*(__int16*)(a4 + 2 * v13)] & 1) == 0;
      }
      v23 = 4LL * (__int16)v22;
      v24 = (int*)(a5 + v23);
      v25 = (int*)(a6 + v23);
      v27 = v24 + 1;
      v26 = *v24;
      v28 = &a7[(__int16)v22];
      v30 = v25 + 1;
      v29 = *v25;
      v32 = v28 + 1;
      v31 = *v28;
      if ((*v28 & 1) != 0) {
        result = (unsigned int)(v29 << 10);
        *v9++ = 0;
        v34 = 1;
        *v8 = v26 << 10;
        *v10++ = result;
        LOWORD(v25) = v22 + 1;
        v36 = *v8++;
        v35 = v36;
        v37 = (__int16)v21;
        if ((__int16)v21 >= (__int16)(v22 + 1)) {
          goto LABEL_30;
        }
      }
      else {
        v32 = v28 + 2;
        v18 = v28[1];
        v33 = v24[1];
        v17 = v25[1];
        v27 = v24 + 2;
        v30 = v25 + 2;
        LOWORD(v25) = v22 + 2;
        *v9 = 0;
        v46 = v33;
        if (v18 != 0) {
          result = (unsigned int)(v17 << 10);
          v34 = v18;
          *v8 = v33 << 10;
        }
        else {
          v34 = 0;
          v16 = v33;
          v15 = v17;
          *v8 = ((v33 + v26) << 9) & 0xFFFFFC00;
          result = ((v17 + v29) << 9) & 0xFFFFFC00;
        }
        *v10++ = result;
        v38 = *v8++;
        v35 = v38;
        v37 = (__int16)v21;
        ++v9;
        if ((__int16)v21 >= (__int16)v25) {
          do {
          LABEL_30:
            v42 = v34;
            v43 = *v27++;
            v19 = v43;
            v44 = *v30++;
            v20 = v44;
            v45 = *v32++;
            v34 = v45;
            if (v42 != 0) {
              if (v34 != 0) {
                *v9++ = 1;
                *v8++ = v19 << 10;
                *v10++ = v20 << 10;
              }
            }
            else {
              *v9++ = 2;
              *v8 = v16 << 10;
              *v10 = v15 << 10;
              if (v34 != 0) {
                v8[1] = v19 << 10;
                v8 += 2;
                v41 = v20 << 10;
              }
              else {
                v8[1] = (v19 + v16) << 9;
                v8 += 2;
                v41 = (v20 + v15) << 9;
              }
              v10[1] = v41;
              v10 += 2;
            }
            v15 = v20;
            v16 = v19;
            LODWORD(v25) = (__int16)((_WORD)v25 + 1);
          } while ((int)v25 <= v37);
          goto LABEL_20;
        }
      }
      v19 = v16;
      v20 = v15;
    LABEL_20:
      if ((v11 | v14) != 0) {
        if ((v31 & 1) != 0) {
          v39 = v9 + 1;
          if (v34 == 0) {
            *v9 = 2;
            *v8 = v19 << 10;
            *v10 = v20 << 10;
            v8[1] = v26 << 10;
            v8 += 2;
            v40 = v29 << 10;
            goto LABEL_39;
          }
          *v9 = 1;
          *v8++ = v26 << 10;
          *v10++ = v29 << 10;
        }
        else {
          if (v34 == 0) {
            *v9++ = 2;
            *v8 = v19 << 10;
            *v10 = v20 << 10;
            v8[1] = (v19 + v26) << 9;
            v8 += 2;
            v10[1] = (v20 + v29) << 9;
            v10 += 2;
          }
          *v9 = 2;
          *v8 = v26 << 10;
          v39 = v9 + 1;
          *v10 = v29 << 10;
          if (v18 != 0) {
            v8[1] = v46 << 10;
            v8 += 2;
            v40 = v17 << 10;
          }
          else {
            v8[1] = (v46 + v26) << 9;
            v8 += 2;
            v40 = (v17 + v29) << 9;
          }
        LABEL_39:
          v10[1] = v40;
          v10 += 2;
        }
        *(v8 - 1) = v35;
        *(v10 - 1) = result;
        v9 = v39;
        goto LABEL_8;
      }
      v14 = false;
    LABEL_8:
      ++v13;
      v15 = v20;
      v16 = v19;
    } while (v13 != v12);
  }
LABEL_41:
  if (v11 != 0) {
    **(_BYTE**)(a8 + 56) |= 0x80u;
  }
  return result;
}

__int64 embolden_outline(__int64 a1, __int64 a2, int* a3, int* a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int16 v14;
  int v15;
  int v16;
  signed int v17;
  signed int v18;
  unsigned int v19;
  __int64 v20;
  _DWORD* v21;
  int* v22;
  int* v23;
  _BYTE* v24;
  unsigned int v25;
  _DWORD* v26;
  int* v27;
  int v28;
  int v29;
  char* v30;
  char* v31;
  char v32;
  int* v33;
  int v34;
  int* v35;
  _DWORD* v36;
  int v37;
  _DWORD* v38;
  __int64 v39;
  int v40;
  _DWORD* v41;
  int* v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  int v46;
  bool v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  char* v55;
  int v56;
  unsigned int v57;
  _DWORD* v58;
  unsigned int v59;
  int v60;
  int v61;
  _BYTE* v62;
  int v63;
  int v64;
  unsigned int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  _BYTE* v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  unsigned int v89;
  int v90;
  _BYTE* v91;
  unsigned int v92;
  int v93;
  bool v94;
  _BOOL4 v95;
  bool v96;
  bool v97;
  int v98;
  int v99;
  unsigned int v100;
  bool v101;
  _BOOL4 v102;
  int v105;
  unsigned int v106;
  int v107;
  int v108;
  int v109;
  unsigned int v110;
  int v111;
  int v112;
  unsigned int v113;
  int v114;
  unsigned int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  __int64 v124;
  int v125;
  __int64 v126;
  int v127;
  int v128;
  int* v129;
  int* v130;
  int v131;
  int v132;
  __int64 v133;
  __int64 v134;
  int v135;
  int v136;
  unsigned __int64 v137;
  int* v138;
  int* v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int* v146;
  int* v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  __int16 v153;
  signed int v154;
  signed int v155;
  unsigned int v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v162;
  int v163;
  int v164;
  __int64 v165;
  int* v166;
  void* v167;
  unsigned __int16 v168;
  unsigned int v169;
  unsigned int v170;
  int v171;
  _BYTE* v172;
  int v173;
  unsigned int v174;
  int v175;
  unsigned int v176;
  int v177;
  unsigned int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  char* v187;
  char* v188;
  char* v189;
  char* v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int* v200;
  int* v201;
  int* v202;
  int* v203;
  _DWORD* v204;
  _DWORD* v205;
  _DWORD* v206;
  _DWORD* v207;
  int* v208;
  unsigned int v209;
  unsigned int v210;
  unsigned __int64 v211;
  __int64 v212;
  struct {
    unsigned int v213;
    unsigned int v214;
  } v213_;

  v8 = (__int64*)(*(_QWORD*)(a1 + 32) + 24LL * *(unsigned __int16*)(a1 + 40));
  v10 = *v8;
  v9 = v8[1];
  v11 = (*(_DWORD*)(v10 + 44) + *(_DWORD*)(a1 + 100)) *
        *(unsigned __int16*)(a1 + 112);
  v12 = *(_DWORD*)(v9 + 8);
  LODWORD(v9) = *(_DWORD*)(v9 + 16);
  v213_.v213 = v12;
  v213_.v214 = v9;
  fixed_norm_plt(&v213_.v213);
  if ((*(_BYTE*)(a1 + 77) & 8) != 0) {
    v210 = varmul_64_plt(v213_.v213, v11, 16);
    v209 = varmul_64_plt(v213_.v214, v11, 16);
  }
  else {
    if (v11 == (__int16)v11) {
      return a2;
    }
    v13 = (int)(v11 + 0x8000) >> 16;
    v209 = v213_.v214 * v13;
    v210 = v213_.v213 * v13;
  }
  v14 = *(_WORD*)(a2 + 40);
  v15 = 3 * *a3;
  v16 = 3 * *a4;
  v17 = (v15 + 87) & 0xFFFFFFF8;
  v18 = (v17 + 12 * *a4 + 7) & 0xFFFFFFF8;
  v19 = v18 + 12 * *a4;
  v20 = FSS_calloc_plt(a1, v19);
  if (v20 == 0) {
    return 0;
  }
  *(_WORD*)(v20 + 40) = v14;
  v163 = v15;
  v164 = v16;
  v21 = (_DWORD*)(v20 + v18);
  v22 = a3;
  *(_WORD*)(v20 + 44) = v15;
  v23 = (int*)(v20 + v17);
  v166 = a4;
  v167 = (void*)a1;
  v24 = (_BYTE*)(v20 + 80);
  *(_DWORD*)(v20 + 8) = v19;
  *(_WORD*)(v20 + 42) = v16;
  v165 = v20;
  *(_WORD*)(v20 + 46) = 1;
  *(_QWORD*)(v20 + 56) = v20 + 80;
  *(_QWORD*)(v20 + 64) = v23;
  *(_QWORD*)(v20 + 72) = v21;
  v25 = *(unsigned __int16*)(a2 + 46);
  *(_WORD*)(v20 + 46) = v25;
  if (*a3 < 1) {
    v126 = v20;
    v127 = 0;
    v128 = 0;
    goto LABEL_112;
  }
  v27 = *(int**)(a2 + 64);
  v26 = *(_DWORD**)(a2 + 72);
  v162 = a2;
  v28 = 0;
  v29 = 0;
  if (v25 <= 1) {
    v25 = 1;
  }
  v30 = *(char**)(a2 + 56);
  v196 = 0;
  v208 = a3;
  v31 = v30;
  v169 = v25;
  do {
    while (1) {
      v32 = *v31++;
      if ((v32 & 0x7F) != 0) {
        return 0;
      }
      *v24++ = 0;
      v34 = *v27;
      v33 = v27 + 1;
      *v23 = v34;
      v35 = v23 + 1;
      v37 = *v26;
      v36 = v26 + 1;
      v200 = v33;
      v204 = v36;
      *v21 = v37;
      v38 = v21 + 1;
      LODWORD(v39) = *v22;
      if (*v22 < 1) {
        v50 = 1;
        v195 = v169;
        if ((_WORD)v169 == 0xFFFF) {
          goto LABEL_28;
        }
      }
      else {
        v40 = (unsigned __int8)*v31;
        v194 = v28;
        v172 = v24;
        v183 = v29;
        v187 = v31;
        if (*v31 != 0) {
          v41 = v36;
          v42 = v33;
          v43 = 2;
          do {
            v44 = *v42 - *(v42 - 1);
            v45 = varmul_64_plt(v210, (unsigned int)(*v41 - *(v41 - 1)), 16);
            v40 = v45 - varmul_64_plt(v209, v44, 16);
            v39 = *v208;
            if (v43 - 1 >= v39) {
              break;
            }
            v46 = (unsigned __int8)v30[v43];
            ++v42;
            ++v41;
            ++v43;
          } while (v46 != 0 && v40 == 0);
        }
        v22 = v208;
        v29 = v183;
        v24 = v172;
        v48 = v40 <= 0;
        if (v40 < 0) {
          v49 = -1;
        }
        else {
          v49 = 1;
        }
        v31 = v187;
        v28 = v194;
        if (v48) {
          v50 = v49;
        }
        else {
          v50 = 1;
        }
        v195 = v50 * v169;
        if ((_WORD)v50 * (_WORD)v169 == 0xFFFF) {
        LABEL_28:
          *v23 += v210;
          *v21 += v209;
          LODWORD(v39) = *v22;
        }
      }
      ++v29;
      v51 = v28 + 1;
      v52 = v196 + 1;
      if (v28 + 1 >= (int)v39) {
        v27 = v200;
        v26 = v204;
        goto LABEL_11;
      }
      v53 = (unsigned __int8)*v31;
      v27 = v200;
      v26 = v204;
      v54 = v50;
      v168 = v50;
      if (*v31 != 0) {
        v55 = v30 + 2;
        v56 = v28 + 2;
        while (1) {
          v31 = v55;
          v51 = v56;
          if (v53 == 3) {
            break;
          }
          if (v53 == 2) {
            v211 = 0;
            v212 = 0;
            v192 = v56;
            v198 = v52;
            v202 = v27;
            v206 = v26;
            v65 = *v27 - *(v27 - 1);
            LODWORD(v212) = v65;
            HIDWORD(v212) = *v26 - *(v26 - 1);
            v174 = HIDWORD(v212);
            LODWORD(v211) = v27[1] - *v27;
            v176 = v211;
            v178 = v26[1] - *v26;
            HIDWORD(v211) = v178;
            fixed_norm_plt(&v212);
            fixed_norm_plt(&v211);
            v180 = v54;
            v66 = (__int16)v54;
            v67 = v29;
            v68 = varmul_64_plt(v213_.v213, HIDWORD(v212), 16);
            v69 = (v68 - varmul_64_plt(v213_.v214, (unsigned int)v212, 16)) *
                  (__int16)v54;
            v70 = varmul_64_plt(v213_.v213, HIDWORD(v211), 16);
            v71 = v70 - varmul_64_plt(v213_.v214, (unsigned int)v211, 16);
            v72 = v67;
            v73 = v71 * v66;
            if (v69 >= 0) {
              v74 = v69;
            }
            else {
              v74 = -v69;
            }
            if (v74 >= 0x4000) {
              v75 = v69;
            }
            else {
              v75 = 0;
            }
            if (v73 >= 0) {
              v76 = v73;
            }
            else {
              v76 = -v73;
            }
            if (v76 < 0x4000) {
              v73 = 0;
            }
            if (v75 < 0 || v75 == 0 && v73 < 0) {
              v72 = v67 + 1;
              *v24++ = 1;
              v54 = -v180;
              *v35 = *(v35 - 1) + v210 * (__int16)v195;
              ++v35;
              *v38 = *(v38 - 1) + v209 * (__int16)v195;
              ++v38;
              v195 = -v195;
              v198 = v52 + 1;
            }
            else {
              v54 = v180;
            }
            v101 = v73 < 0;
            v102 = v73 > 0 && v75 < 0;
            if ((!v101 || v75 <= 0) && !v102) {
              v125 = 2;
              v122 = v198;
              *v24++ = 2;
              *v35 = *(v35 - 1) + v65;
              *v38 = *(v38 - 1) + v174;
              v35[1] = *v35 + v176;
              v124 = 8;
              v38[1] = *v38 + v178;
              v123 = 1;
            }
            else {
              v186 = v72;
              v190 = v31;
              v170 = v176 - v65;
              v105 = varmul_64_plt(v210, v174, 16);
              v106 = v105 - varmul_64_plt(v209, v65, 16);
              v182 = v54;
              v107 = varmul_64_plt(v210, v178 - v174, 16);
              v108 = varmul_64_plt(v209, v176 - v65, 16);
              v109 = vardiv_64_plt(v106, (unsigned int)(v107 - v108), 16);
              v110 = -v109;
              v171 = v109;
              *v24 = 2;
              v111 = *(v35 - 1);
              *v35 = varmul_64_plt((unsigned int)-v109, v65, 16) + v111;
              v112 = *(v38 - 1);
              *v38 = varmul_64_plt(v110, v174, 16) + v112;
              v113 = varmul_64_plt(v110, v110, 16);
              v114 = *(v35 - 1);
              v115 = v113;
              v116 = v114 + 2 * varmul_64_plt(v65, v110, 16);
              v35[1] = v116 + varmul_64_plt(v170, v115, 16);
              v117 = *(v38 - 1);
              v118 = v117 + 2 * varmul_64_plt(v174, v110, 16);
              v38[1] = v118 + varmul_64_plt(v178 - v174, v115, 16);
              v24[1] = 1;
              v35[2] = v35[1] + v210 * (__int16)v195;
              v38[2] = v38[1] + v209 * (__int16)v195;
              v24[2] = 2;
              v35[4] = v202[1];
              v38[4] = v206[1];
              if ((__int16)v182 >= 1) {
                v35[4] += v210;
                v38[4] += v209;
              }
              v54 = -v182;
              v24 += 3;
              v119 = v35[4];
              v195 = -v195;
              v35[3] =
                  varmul_64_plt((unsigned int)(-65536 - v171), v176, 16) + v119;
              v120 = v38[4];
              v121 = varmul_64_plt((unsigned int)(-65536 - v171), v178, 16);
              v72 = v186;
              v122 = v198;
              v31 = v190;
              v123 = 3;
              v124 = 20;
              v38[3] = v121 + v120;
              v125 = 5;
            }
            v51 = v192;
            v35 = (int*)((char*)v35 + v124);
            v38 = (_DWORD*)((char*)v38 + v124);
            v29 = v72 + v123;
            v52 = v122 + v125;
            v26 = v206 + 2;
            v22 = v208;
            v27 = v202 + 2;
            LODWORD(v39) = *v208;
            if (v192 >= *v208) {
              goto LABEL_104;
            }
          }
          else {
            if (v53 != 1) {
              goto LABEL_82;
            }
            v184 = v29;
            v57 = *v27 - *(v27 - 1);
            v197 = v52;
            v58 = v38;
            v191 = v56;
            v188 = v55;
            v201 = v27;
            v205 = v26;
            v59 = *v26 - *(v26 - 1);
            v60 = varmul_64_plt(v210, v59, 16);
            v61 = varmul_64_plt(v209, v57, 16);
            v62 = v24;
            if ((v60 - v61) * (__int16)v54 < 0) {
              *v24 = 1;
              v62 = v24 + 1;
              v51 = v191;
              ++v38;
              v54 = -v54;
              v98 = (__int16)v195;
              v99 = *(v35 - 1) + v210 * (__int16)v195;
              v195 = -v195;
              *v35++ = v99;
              *v58 = *(v58 - 1) + v209 * v98;
              v63 = v184 + 1;
              v64 = v197 + 1;
            }
            else {
              v51 = v191;
              v63 = v184;
              v64 = v197;
            }
            *v62 = 1;
            v52 = v64 + 1;
            v24 = v62 + 1;
            v31 = v188;
            v22 = v208;
            v27 = v201 + 1;
            v26 = v205 + 1;
            v100 = *(v35 - 1) + v57;
            v29 = v63 + 1;
            *v35++ = v100;
            *v38 = *(v38 - 1) + v59;
            ++v38;
            LODWORD(v39) = *v208;
            if (v51 >= *v208) {
              goto LABEL_104;
            }
          }
        LABEL_83:
          v55 = v31 + 1;
          v53 = (unsigned __int8)*v31;
          v56 = v51 + 1;
          if (*v31 == 0) {
            goto LABEL_104;
          }
        }
        v211 = 0;
        v212 = 0;
        v193 = v56;
        v189 = v55;
        v203 = v27;
        v207 = v26;
        LODWORD(v212) = *v27 - *(v27 - 1);
        v181 = v212;
        v77 = *v26 - *(v26 - 1);
        HIDWORD(v212) = v77;
        v185 = v27[2] - v27[1];
        v78 = v26[2] - v26[1];
        v211 = __PAIR64__(v78, v185);
        v199 = v78;
        v179 = v27[1];
        v175 = v26[1];
        v177 = *v27;
        v173 = *v26;
        fixed_norm_plt(&v212);
        fixed_norm_plt(&v211);
        v79 = v52;
        v80 = v29;
        v81 = varmul_64_plt(v213_.v213, HIDWORD(v212), 16);
        v82 = v24;
        v83 = (v81 - varmul_64_plt(v213_.v214, (unsigned int)v212, 16)) *
              (__int16)v54;
        v84 = varmul_64_plt(v213_.v213, HIDWORD(v211), 16);
        v85 = v84 - varmul_64_plt(v213_.v214, (unsigned int)v211, 16);
        v86 = v80;
        v87 = v79;
        v88 = v85 * (__int16)v54;
        if (v83 >= 0) {
          v89 = v83;
        }
        else {
          v89 = -v83;
        }
        if (v89 >= 0x4000) {
          v90 = v83;
        }
        else {
          v90 = 0;
        }
        v91 = v82;
        if (v88 >= 0) {
          v92 = v88;
        }
        else {
          v92 = -v88;
        }
        if (v92 < 0x4000) {
          v88 = 0;
        }
        if (v90 < 0 || v90 == 0 && v88 < 0) {
          v54 = -v54;
          ++v86;
          v87 = v79 + 1;
          v93 = (__int16)v195;
          *v82 = 1;
          v91 = v82 + 1;
          v195 = -v195;
          *v35 = *(v35 - 1) + v210 * v93;
          ++v35;
          *v38 = *(v38 - 1) + v209 * v93;
          ++v38;
        }
        v22 = v208;
        v94 = v88 < 0;
        v31 = v189;
        v51 = v193;
        v95 = v88 > 0 && v90 < 0;
        v96 = !v94 || v90 <= 0;
        *v91 = 3;
        v97 = v96 && !v95;
        *v35 = *(v35 - 1) + v181;
        *v38 = *(v38 - 1) + v77;
        if (v97) {
          v35[1] = v179 - v177 + *v35;
          v38[1] = v175 - v173 + *v38;
          v35[2] = v35[1] + v185;
          v38[2] = v38[1] + v199;
        }
        else {
          v35[2] = v203[2];
          v38[2] = v207[2];
          if ((v54 & 0x8000) != 0) {
            v35[2] += v210;
            v38[2] += v209;
          }
          v54 = -v54;
          v35[1] = v35[2] - v185;
          v38[1] = v38[2] - v199;
          v195 = -v195;
        }
        v52 = v87 + 3;
        v29 = v86 + 1;
        v38 += 3;
        v35 += 3;
        v26 = v207 + 3;
        v27 = v203 + 3;
        v24 = v91 + 1;
      LABEL_82:
        LODWORD(v39) = *v22;
        if (v51 >= *v22) {
          goto LABEL_104;
        }
        goto LABEL_83;
      }
    LABEL_104:
      if ((unsigned __int16)v54 != v168) {
        break;
      }
    LABEL_11:
      v196 = v52;
      v28 = v51;
      v21 = v38;
      v23 = v35;
      v30 = v31;
      if (v51 >= (int)v39) {
        goto LABEL_111;
      }
    }
    ++v29;
    *v24++ = 1;
    v196 = v52 + 1;
    *v35 = *(v35 - 1) + v210 * (__int16)v195;
    *v38 = *(v38 - 1) + v209 * (__int16)v195;
    v28 = v51;
    v21 = v38 + 1;
    v23 = v35 + 1;
    v30 = v31;
  } while (v51 < *v22);
LABEL_111:
  v126 = v165;
  a2 = v162;
  v128 = v196;
  v127 = v29;
  v24 = *(_BYTE**)(v165 + 56);
LABEL_112:
  *v24 |= 0x80u;
  *(_DWORD*)(v126 + 32) = *(_DWORD*)(a2 + 32) + v210;
  *(_DWORD*)(v126 + 36) = *(_DWORD*)(a2 + 36) + v209;
  if (*(_WORD*)(a2 + 28) != 0) {
    *(_WORD*)(v126 + 28) = *(_WORD*)(a2 + 28) + ((v210 + 0x8000) >> 16);
  }
  if (*(_WORD*)(a2 + 30) != 0) {
    *(_WORD*)(v126 + 30) = *(_WORD*)(a2 + 30) + ((v209 + 0x8000) >> 16);
  }
  if (v128 != 0) {
    v129 = *(int**)(v126 + 64);
    v130 = *(int**)(v126 + 72);
    v131 = *v129;
    v132 = *v130;
    if (v128 < 2) {
      v136 = *v129;
      v135 = *v130;
    }
    else {
      v133 = ((_BYTE)v128 - 1) & 3;
      if ((unsigned int)(v128 - 2) >= 3) {
        v137 = ((unsigned int)v128 - 1LL) & 0xFFFFFFFFFFFFFFFCLL;
        v138 = v129 + 2;
        v139 = v130 + 2;
        v134 = 1;
        v135 = *v130;
        v136 = *v129;
        do {
          v140 = *(v138 - 1);
          v134 += 4;
          if (v140 > v131) {
            v131 = *(v138 - 1);
          }
          if (v140 < v136) {
            v136 = *(v138 - 1);
          }
          v141 = *(v139 - 1);
          if (v141 > v132) {
            v132 = *(v139 - 1);
          }
          if (v141 < v135) {
            v135 = *(v139 - 1);
          }
          v142 = v138[1];
          if (*v138 > v131) {
            v131 = *v138;
          }
          if (*v138 < v136) {
            v136 = *v138;
          }
          v143 = v139[1];
          if (*v139 > v132) {
            v132 = *v139;
          }
          if (*v139 < v135) {
            v135 = *v139;
          }
          v144 = v138[2];
          v138 += 4;
          if (v142 > v131) {
            v131 = v142;
          }
          if (v142 < v136) {
            v136 = v142;
          }
          if (v143 > v132) {
            v132 = v139[1];
          }
          if (v143 < v135) {
            v135 = v139[1];
          }
          if (v144 > v131) {
            v131 = v144;
          }
          if (v144 < v136) {
            v136 = v144;
          }
          v145 = v139[2];
          v139 += 4;
          if (v145 > v132) {
            v132 = v145;
          }
          if (v145 < v135) {
            v135 = v145;
          }
          v137 -= 4LL;
        } while (v137 != 0);
      }
      else {
        v134 = 1;
        v135 = *v130;
        v136 = *v129;
      }
      if ((((_BYTE)v128 - 1) & 3) != 0) {
        v146 = &v130[v134];
        v147 = &v129[v134];
        do {
          v149 = *v147++;
          v148 = v149;
          if (v149 > v131) {
            v131 = v148;
          }
          if (v148 < v136) {
            v136 = v148;
          }
          v151 = *v146++;
          v150 = v151;
          if (v151 > v132) {
            v132 = v150;
          }
          if (v150 < v135) {
            v135 = v150;
          }
          --v133;
        } while (v133 != 0);
      }
    }
    *(_DWORD*)(v126 + 12) = v136;
    *(_DWORD*)(v126 + 16) = v131;
    *(_DWORD*)(v126 + 20) = v135;
    *(_DWORD*)(v126 + 24) = v132;
    *v22 = v127;
    *v166 = v128;
    if (v127 >= v163) {
    LABEL_169:
      if (v128 < v164) {
        goto LABEL_170;
      }
      return v126;
    }
  }
  else {
    *(_QWORD*)(v126 + 20) = 0;
    *(_QWORD*)(v126 + 12) = 0;
    *v22 = v127;
    *v166 = 0;
    if (v127 >= v163) {
      goto LABEL_169;
    }
  }
LABEL_170:
  v152 = v127;
  v153 = *(_WORD*)(a2 + 40);
  v154 = (v127 + 87) & 0xFFFFFFF8;
  v155 = (v154 + 4 * v128 + 7) & 0xFFFFFFF8;
  v156 = v155 + 4 * v128;
  v157 = FSS_calloc_plt(v167, v156);
  if (v157 == 0) {
    return v126;
  }
  a2 = v157;
  v158 = v157 + v155;
  *(_DWORD*)(v157 + 8) = v156;
  v159 = v157 + v154;
  *(_WORD*)(v157 + 40) = v153;
  *(_WORD*)(v157 + 44) = v152;
  *(_WORD*)(v157 + 42) = v128;
  v160 = v157 + 80;
  *(_QWORD*)(a2 + 72) = v158;
  *(_QWORD*)(a2 + 56) = v160;
  *(_QWORD*)(a2 + 64) = v159;
  *(_WORD*)(a2 + 46) = 1;
  memcpy_plt(v160, *(_QWORD*)(v126 + 56), v152);
  memcpy_plt(v159, *(_QWORD*)(v126 + 64), 4 * v128);
  memcpy_plt(*(_QWORD*)(a2 + 72), *(_QWORD*)(v126 + 72), 4 * v128);
  *(_DWORD*)(a2 + 12) = *(_DWORD*)(v126 + 12);
  *(_DWORD*)(a2 + 16) = *(_DWORD*)(v126 + 16);
  *(_DWORD*)(a2 + 20) = *(_DWORD*)(v126 + 20);
  *(_DWORD*)(a2 + 24) = *(_DWORD*)(v126 + 24);
  *(_DWORD*)(a2 + 32) = *(_DWORD*)(v126 + 32);
  *(_DWORD*)(a2 + 36) = *(_DWORD*)(v126 + 36);
  *(_WORD*)(a2 + 28) = *(_WORD*)(v126 + 28);
  *(_WORD*)(a2 + 30) = *(_WORD*)(v126 + 30);
  *(_WORD*)(a2 + 46) = *(_WORD*)(v126 + 46);
  FSS_free_char_plt(v167, (void*)v126);
  return a2;
}

__int64 copy_outline(__int64 a1, __int64 a2, char a3)
{
  int v3;
  unsigned int v6;
  __int64 v7;
  char* v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  bool v14;
  int v15;
  int v16;
  unsigned int v17;
  bool v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  bool v23;
  int v24;
  char* v25;
  int v26;
  unsigned int v27;
  bool v28;
  int v29;
  int v30;
  char v31;
  unsigned int v32;
  __int64 v33;
  __int16 v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  if (a2 == 0) {
    return 0;
  }
  v3 = *(__int16*)(a2 + 44);
  v6 = *(unsigned __int16*)(a2 + 44);
  v7 = *(__int16*)(a2 + 44);
  if (v3 < 1) {
    v9 = 0;
    goto LABEL_49;
  }
  v8 = *(char**)(a2 + 56);
  if (v6 < 4) {
    v9 = 0;
    if ((v6 & 3) == 0) {
      goto LABEL_49;
    }
    goto LABEL_41;
  }
  v11 = v3 & 0x7FFC;
  v9 = 0;
  do {
    v12 = v9 + 3;
    v13 = *v8 & 0x7F;
    if (v13 != 3) {
      v12 = v9;
    }
    v14 = v13 >= 2;
    if (v13 == 2) {
      v15 = v9 + 2;
    }
    else {
      v15 = v12;
    }
    if (!v14) {
      v15 = v9 + 1;
    }
    v16 = v15 + 3;
    v17 = v8[1] & 0x7F;
    if (v17 != 3) {
      v16 = v15;
    }
    v18 = v17 >= 2;
    if (v17 == 2) {
      v19 = v15 + 2;
    }
    else {
      v19 = v16;
    }
    if (v18) {
      v20 = v19;
    }
    else {
      v20 = v15 + 1;
    }
    v21 = v20 + 3;
    v22 = v8[2] & 0x7F;
    if (v22 != 3) {
      v21 = v20;
    }
    v23 = v22 >= 2;
    if (v22 == 2) {
      v24 = v20 + 2;
    }
    else {
      v24 = v21;
    }
    if (!v23) {
      v24 = v20 + 1;
    }
    v25 = v8 + 4;
    v26 = v24 + 3;
    v27 = v8[3] & 0x7F;
    if (v27 != 3) {
      v26 = v24;
    }
    v28 = v27 >= 2;
    if (v27 == 2) {
      v29 = v24 + 2;
    }
    else {
      v29 = v26;
    }
    if (v28) {
      v9 = v29;
    }
    else {
      v9 = v24 + 1;
    }
    v11 -= 4;
    v8 = v25;
  } while (v11 != 0);
  v8 = v25;
  if ((v6 & 3) != 0) {
  LABEL_41:
    v30 = v3 & 3;
    do {
      v31 = *v8++;
      v32 = v31 & 0x7F;
      if (v32 < 2) {
        ++v9;
      }
      else if (v32 == 2) {
        v9 += 2;
      }
      else if (v32 == 3) {
        v9 += 3;
      }
      --v30;
    } while (v30 != 0);
  }
LABEL_49:
  v33 = v7 + 87;
  v34 = *(_WORD*)(a2 + 40);
  v35 = (((v7 + 87) | 4) + 4 * v9) & 0xFFFFFFF8;
  v36 = v35 + 4 * v9;
  v37 = FSS_calloc_plt(a1, v36);
  v10 = v37;
  if (v37 != 0) {
    *(_WORD*)(v37 + 44) = v6;
    v38 = v37 + v35;
    *(_DWORD*)(v37 + 8) = v36;
    v39 = v37 + 80;
    *(_WORD*)(v10 + 40) = v34;
    *(_WORD*)(v10 + 42) = v9;
    *(_QWORD*)v10 = 0;
    *(_QWORD*)(v10 + 56) = v10 + 80;
    *(_QWORD*)(v10 + 64) = v10 + (v33 & 0xFFFFFFFFFFFFFFF8LL);
    *(_QWORD*)(v10 + 72) = v38;
    *(_WORD*)(v10 + 46) = 1;
    *(_DWORD*)(v10 + 12) = *(_DWORD*)(a2 + 12);
    *(_DWORD*)(v10 + 16) = *(_DWORD*)(a2 + 16);
    *(_DWORD*)(v10 + 20) = *(_DWORD*)(a2 + 20);
    *(_DWORD*)(v10 + 24) = *(_DWORD*)(a2 + 24);
    *(_WORD*)(v10 + 28) = *(_WORD*)(a2 + 28);
    *(_WORD*)(v10 + 30) = *(_WORD*)(a2 + 30);
    *(_DWORD*)(v10 + 32) = *(_DWORD*)(a2 + 32);
    *(_DWORD*)(v10 + 36) = *(_DWORD*)(a2 + 36);
    *(_WORD*)(v10 + 46) = *(_WORD*)(a2 + 46);
    v40 = *(_QWORD*)(a2 + 56);
    if (a3 != 0) {
      memcpy_plt(v39, v40, *(__int16*)(a2 + 44));
      memcpy_plt(v10 + (v33 & 0xFFFFFFFFFFFFFFF8LL), *(_QWORD*)(a2 + 64),
                 4LL * v9);
      v41 = *(_QWORD*)(v10 + 72);
      if (v41 != 0) {
        v42 = *(_QWORD*)(a2 + 72);
        v43 = 4LL * v9;
      LABEL_62:
        memcpy_plt(v41, v42, v43);
      }
    }
    else {
      if (v40 != 0) {
        memcpy_plt(v39, v40, *(__int16*)(a2 + 44));
      }
      v44 = *(_QWORD*)(a2 + 64);
      if (v44 != 0) {
        memcpy_plt(v10 + (v33 & 0xFFFFFFFFFFFFFFF8LL), v44, 4LL * v9);
        v38 = *(_QWORD*)(v10 + 72);
      }
      v42 = *(_QWORD*)(a2 + 72);
      if (v38 != 0 && v42 != 0) {
        v43 = 4LL * v9;
        v41 = v38;
        goto LABEL_62;
      }
    }
  }
  return v10;
}

__int64 find_or_make_outline(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             unsigned int a5)
{
  __int64 result;
  char v8;

  result = make_outline_plt(a1, a3, a5);
  if (*(_DWORD*)(a1 + 72) != 0 || result == 0) {
    return 0;
  }
  *(_BYTE*)(result + 48) = 0;
  v8 = *(_BYTE*)(a1 + 109);
  *(_BYTE*)(result + 48) = v8;
  if ((*(_BYTE*)(a1 + 79) & 0x10) != 0) {
    *(_BYTE*)(result + 48) = v8 | 2;
  }
  return result;
}

__int64 internal_get_outline(__int64 a1, __int64 a2)
{
  unsigned __int16 v3;
  __int64 result;
  unsigned __int16 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;

  v3 = map_char_plt(a1, a2, 0);
  if (*(_DWORD*)(a1 + 72) != 0) {
    return 0;
  }
  v5 = v3;
  if ((unsigned int)check_sfnt_plt(a1) != 0) {
    return 0;
  }
  v7 = *(_QWORD*)(a1 + 48);
  v6 = *(_QWORD*)(a1 + 56);
  if ((*(_BYTE*)(v7 + 36) & 2) == 0 && *(_BYTE*)(v7 + 65) != 6 &&
      *(_DWORD*)(v6 + 260) == 0) {
    v8 = *(_QWORD*)(a1 + 56);
    get_ref_lines_plt(a1);
    v6 = v8;
  }
  result = make_outline_plt(a1, v6, v5);
  if (*(_DWORD*)(a1 + 72) != 0 || result == 0) {
    return 0;
  }
  *(_BYTE*)(result + 48) = 0;
  v9 = *(_BYTE*)(a1 + 109);
  *(_BYTE*)(result + 48) = v9;
  if ((*(_BYTE*)(a1 + 79) & 0x10) != 0) {
    *(_BYTE*)(result + 48) = v9 | 2;
  }
  return result;
}

__int64 FSS_get_gpos_pts(__int64 a1, unsigned __int16 a2, unsigned __int16 a3,
                         __int64 a4, __int64 a5, __int64 a6)
{
  int v6;
  __int16 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  _BOOL8 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  unsigned int v34;

  v6 = *(_DWORD*)(a1 + 76);
  *(_DWORD*)(a1 + 76) = v6 | 0x4000;
  v12 = map_char_plt(a1, a2, 0);
  result = *(unsigned int*)(a1 + 72);
  *(_DWORD*)(a1 + 76) = v6;
  if ((_DWORD)result == 0) {
    if ((unsigned int)check_sfnt_plt(a1) != 0) {
      return *(unsigned int*)(a1 + 72);
    }
    v14 = *(_QWORD*)(a1 + 56);
    v15 = *(_QWORD*)(*(_QWORD*)(v14 + 40) + 16LL);
    if (*(_QWORD*)(v15 + 8) == 0) {
      v26 = *(_DWORD*)(v14 + 8);
      v27 = *(_DWORD*)(v14 + 12);
      v34 = *(_DWORD*)(v14 + 16);
      v33 = *(_DWORD*)(v14 + 20);
      delete_key_plt(a1, *(_QWORD*)(*(_QWORD*)(v14 + 40) + 16LL));
      FSS_free_plt(a1, *(_QWORD*)(v14 + 40));
      *(_QWORD*)(v14 + 40) = 0;
      scale_font_ttf_plt(a1, v14, v26, v27, v34, v33);
      result = *(unsigned int*)(a1 + 72);
      if ((_DWORD)result != 0) {
        return result;
      }
      v15 = *(_QWORD*)(*(_QWORD*)(v14 + 40) + 16LL);
    }
    *(_WORD*)(v15 + 16) = v12;
    v16 = (*(_BYTE*)(a1 + 76) & 2) == 0;
    if (*(_BYTE*)(*(_QWORD*)(a1 + 48) + 65LL) == 7) {
      cff_GridFit_plt(a1, v15, v16);
      result = *(unsigned int*)(a1 + 72);
      if ((_DWORD)result == 0) {
      LABEL_10:
        v17 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL);
        v18 = v17 + *(int*)(v15 + 184);
        v19 = v17 + *(int*)(v15 + 188);
        if (*(_WORD*)(v15 + 424) != 0) {
          v20 = (__int16)(*(_WORD*)(v17 + *(int*)(v15 + 164) +
                                    2LL * *(__int16*)(v15 + 424) - 2) +
                          1);
          v21 = *(_DWORD*)(a1 + 76);
          if ((v21 & 0x10000) == 0) {
            goto LABEL_12;
          }
        }
        else {
          v20 = 0;
          v21 = *(_DWORD*)(a1 + 76);
          if ((v21 & 0x10000) == 0) {
          LABEL_12:
            v22 = 0;
            v23 = 0;
            if ((v21 & 0x20000) != 0) {
              goto LABEL_13;
            }
            goto LABEL_22;
          }
        }
        v28 = 4LL * v20 + 8;
        v22 = (*(_DWORD*)(v18 + v28) << 10) & 0xFFFF0000;
        v23 = (*(_DWORD*)(v19 + v28) << 10) & 0xFFFF0000;
        if ((v21 & 0x20000) != 0) {
        LABEL_13:
          if (a3 != 0) {
            LOWORD(v24) = 0;
            while (1) {
              v24 = (__int16)v24;
              v25 = *(__int16*)(a4 + 2LL * (__int16)v24);
              if (v20 <= v25) {
                break;
              }
              result = 0;
              *(_DWORD*)(a5 + 4 * v24) =
                  *(_DWORD*)(v19 + 4LL * *(__int16*)(a4 + 2LL * (__int16)v24));
              *(_DWORD*)(a6 + 4 * v24) = -*(_DWORD*)(v18 + 4LL * v25);
              LOWORD(v24) = v24 + 1;
              if (a3 <= (__int16)v24) {
                return result;
              }
            }
          LABEL_34:
            *(_DWORD*)(a1 + 72) = 418;
            return 418;
          }
          return 0;
        }
      LABEL_22:
        if ((v21 & 0x40000) != 0) {
          if (a3 != 0) {
            LOWORD(v31) = 0;
            while (1) {
              v31 = (__int16)v31;
              v32 = *(__int16*)(a4 + 2LL * (__int16)v31);
              if (v20 <= v32) {
                break;
              }
              result = 0;
              *(_DWORD*)(a5 + 4 * v31) =
                  -*(_DWORD*)(v19 + 4LL * *(__int16*)(a4 + 2LL * (__int16)v31));
              *(_DWORD*)(a6 + 4 * v31) = *(_DWORD*)(v18 + 4LL * v32);
              LOWORD(v31) = v31 + 1;
              if (a3 <= (__int16)v31) {
                return result;
              }
            }
            goto LABEL_34;
          }
        }
        else if (a3 != 0) {
          LOWORD(v29) = 0;
          while (1) {
            v29 = (__int16)v29;
            v30 = *(__int16*)(a4 + 2LL * (__int16)v29);
            if (v20 <= v30) {
              break;
            }
            result = 0;
            *(_DWORD*)(a5 + 4 * v29) =
                *(_DWORD*)(v18 + 4LL * *(__int16*)(a4 + 2LL * (__int16)v29)) -
                v22;
            *(_DWORD*)(a6 + 4 * v29) = *(_DWORD*)(v19 + 4LL * v30) - v23;
            LOWORD(v29) = v29 + 1;
            if (a3 <= (__int16)v29) {
              return result;
            }
          }
          goto LABEL_34;
        }
        return 0;
      }
    }
    else {
      fsg_GridFit_plt(a1, v15, v16);
      result = *(unsigned int*)(a1 + 72);
      if ((_DWORD)result == 0) {
        goto LABEL_10;
      }
    }
  }
  return result;
}

__int64 make_outline_ttf(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v4;
  _BOOL8 v5;
  __int64 result;
  int v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  __int16 v15;

  v4 = *(_QWORD*)(*(_QWORD*)(a2 + 40) + 16LL);
  if (*(_QWORD*)(v4 + 8) == 0) {
    v10 = *(_DWORD*)(a2 + 8);
    v11 = *(_DWORD*)(a2 + 12);
    v12 = *(_DWORD*)(a2 + 16);
    v13 = *(_DWORD*)(a2 + 20);
    v15 = a3;
    delete_key_plt(a1, *(_QWORD*)(*(_QWORD*)(a2 + 40) + 16LL));
    FSS_free_plt(a1, *(_QWORD*)(a2 + 40));
    *(_QWORD*)(a2 + 40) = 0;
    scale_font_ttf_plt(a1, a2, v10, v11, v12, v13);
    if (*(_DWORD*)(a1 + 72) != 0) {
      return 0;
    }
    a3 = v15;
    v4 = *(_QWORD*)(*(_QWORD*)(a2 + 40) + 16LL);
  }
  *(_WORD*)(v4 + 16) = a3;
  v5 = (*(_BYTE*)(a1 + 76) & 2) == 0;
  if (*(_BYTE*)(*(_QWORD*)(a1 + 48) + 65LL) == 7) {
    cff_GridFit_plt(a1, v4, v5);
    if (*(_DWORD*)(a1 + 72) == 0) {
      goto LABEL_6;
    }
    return 0;
  }
  fsg_GridFit_plt(a1, v4, v5);
  if (*(_DWORD*)(a1 + 72) != 0) {
    return 0;
  }
LABEL_6:
  result = extract_outline_plt(a1, v4);
  v7 = *(_DWORD*)(a1 + 76);
  if ((v7 & 1) != 0) {
    v9 = v7 | 0x10000000;
  }
  else {
    v8 = result;
    if ((unsigned int)get_dropout_control_plt(v4) != 0 ||
        *(_BYTE*)(*(_QWORD*)(a1 + 48) + 65LL) == 7) {
      v9 = *(_DWORD*)(a1 + 76) | 0x10000000;
    }
    else {
      v9 = *(_DWORD*)(a1 + 76) & 0xEFFFFFFF;
    }
    result = v8;
  }
  *(_DWORD*)(a1 + 76) = v9;
  return result;
}

__int64 nn_fontll_itype_449700(char a1, _QWORD* a2, __int64 a3,
                               unsigned __int64* a4, unsigned __int64 a5)
{
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 result;
  __int64 v13;
  unsigned int v14;
  unsigned __int64 v15;
  int v17;
  unsigned __int16 v18;
  __int16 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  _QWORD* v27;
  unsigned __int16 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int16* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int16* v36;
  int v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  unsigned __int16* v44;
  _QWORD* v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int16* v52;
  __int64 v53;
  int v54;
  _QWORD* v55;
  __int64 v56;
  _BYTE v57[14];
  _BYTE v58[14];
  _BYTE v59[14];

  v5 = *(unsigned __int16*)(a3 + 80);
  v6 = 8;
  if (a1 == 120) {
    v7 = 8;
  }
  else {
    v7 = 0;
  }
  if (a1 == 120) {
    v6 = 0;
  }
  if (*(_WORD*)(a3 + 80) == 0) {
    return 0;
  }
  v8 = *(_QWORD*)(a3 + v6);
  v10 = *(_QWORD*)(a3 + 56);
  v9 = *(_QWORD*)(a3 + 64);
  v11 = 0;
  result = 0;
  v13 = *(_QWORD*)(a3 + v7);
  do {
    v14 = *(unsigned __int16*)(v10 + 2 * v11);
    v15 = *(unsigned __int16*)(v9 + 2 * v11);
    if (v14 != (_DWORD)v15 && v14 < (unsigned int)v15) {
      v17 = *(_DWORD*)(v8 + 4LL * *(unsigned __int16*)(v10 + 2 * v11)) -
            *(_DWORD*)(v8 + 4 * v15);
      if (v17 < 0) {
        v17 = *(_DWORD*)(v8 + 4 * v15) -
              *(_DWORD*)(v8 + 4LL * *(unsigned __int16*)(v10 + 2 * v11));
      }
      if ((unsigned int)v17 >= 4) {
        v18 = *(_WORD*)(v10 + 2 * v11);
      }
      else {
        v18 = *(_WORD*)(v9 + 2 * v11);
      }
    LABEL_26:
      v20 = v18;
      v21 = (unsigned __int16)v14;
      v22 = *(_DWORD*)(v8 + 4LL * v18);
      v14 = (unsigned __int16)(v14 + 1);
      if ((unsigned int)v15 > v14) {
        LOWORD(v14) = v15;
      }
      while (1) {
        v23 = v22 - *(_DWORD*)(v8 + 4 + 4 * v21);
        if (v23 < 0) {
          v23 = *(_DWORD*)(v8 + 4 + 4 * v21) - v22;
        }
        if ((unsigned int)v23 > 3) {
          break;
        }
        if (++v21 >= v15) {
          if (v18 != (unsigned __int16)v14) {
            goto LABEL_35;
          }
        LABEL_25:
          LOWORD(v14) = v14 + 1;
          v18 = v14;
          if ((unsigned int)v15 <= (unsigned __int16)v14) {
            goto LABEL_13;
          }
          goto LABEL_26;
        }
      }
      LOWORD(v14) = v21;
      if (v18 == (unsigned __int16)v21) {
        goto LABEL_25;
      }
    LABEL_35:
      v24 = *(_DWORD*)(v8 + 4LL * (unsigned __int16)v14) - v22;
      if (v24 < 0) {
        v24 = -v24;
      }
      v25 = 22 * v24;
      v26 = *(_DWORD*)(v13 + 4LL * (unsigned __int16)v14) -
            *(_DWORD*)(v13 + 4LL * v18);
      if (v26 < 0) {
        v26 = *(_DWORD*)(v13 + 4LL * v18) -
              *(_DWORD*)(v13 + 4LL * (unsigned __int16)v14);
      }
      if (v25 >= v26) {
        goto LABEL_25;
      }
      v27 = &a2[2 * (int)result];
      *(_WORD*)v27 = v18;
      *((_WORD*)v27 + 1) = v14;
      *((_WORD*)v27 + 2) = v11;
      v27[1] = 0;
      if (*(unsigned __int16*)(v9 + 2 * v11) == v18) {
        v28 = *(_WORD*)(v10 + 2 * v11);
        if (v28 != (unsigned __int16)v14) {
        LABEL_44:
          v29 = *a4;
          v30 = 0;
          while (1) {
            *(_WORD*)v29 = v28;
            *(_QWORD*)(v29 + 8) = 0;
            v31 = v30;
            v30 = v29;
            *a4 += 16LL;
            *(_QWORD*)(v29 + 8) = v31;
            v27[1] = v29;
            v29 = *a4;
            if (*a4 >= a5) {
              break;
            }
            if (*(unsigned __int16*)(v9 + 2 * v11) == v28) {
              v28 = *(_WORD*)(v10 + 2 * v11);
              if (v28 == (unsigned __int16)v14) {
                break;
              }
            }
            else if (++v28 == (unsigned __int16)v14) {
              break;
            }
          }
        }
      }
      else {
        v28 = v18 + 1;
        if (v28 != (unsigned __int16)v14) {
          goto LABEL_44;
        }
      }
      result = (unsigned int)(result + 1);
      if (*(_DWORD*)(v13 + 4LL * (unsigned __int16)v14) >
          *(_DWORD*)(v13 + 4 * v20)) {
        v19 = 1;
      }
      else {
        v19 = -1;
      }
      *((_WORD*)v27 + 3) = v19;
      if ((_DWORD)result != 128) {
        goto LABEL_25;
      }
      result = 127;
      goto LABEL_54;
    }
  LABEL_13:
    if ((int)result > 127) {
      break;
    }
    ++v11;
  } while (v11 < v5);
  if ((int)result <= 1) {
    return result;
  }
LABEL_54:
  if ((_DWORD)result == 2) {
    v32 = 1;
  }
  else {
    v40 = a2 + 2;
    v32 = 1;
    v41 = 0;
    v42 = a2;
    do {
      v44 = (unsigned __int16*)&a2[2 * v32];
      v45 = v42;
      v46 = *v44;
      *(_QWORD*)v58 = *(_QWORD*)(v44 + 1);
      v47 = *(_DWORD*)(v8 + 4 * v46);
      *(_QWORD*)&v58[6] = *((_QWORD*)v44 + 1);
      v48 = v32;
      while (*(_DWORD*)(v8 + 4LL * *(unsigned __int16*)v45) > v47) {
        v49 = v45[1];
        --v48;
        v45[2] = *v45;
        v45[3] = v49;
        v45 -= 2;
        if (v48 + 1 <= 1) {
          LODWORD(v48) = 0;
          break;
        }
      }
      v50 = &a2[2 * (int)v48];
      *(_WORD*)v50 = v46;
      *(_QWORD*)((char*)v50 + 2) = *(_QWORD*)v58;
      v50[1] = *(_QWORD*)&v58[6];
      v51 = v32 + 1;
      v52 = (unsigned __int16*)&a2[2 * v32 + 2];
      v53 = *v52;
      *(_QWORD*)v59 = *(_QWORD*)(v52 + 1);
      *(_QWORD*)&v59[6] = *((_QWORD*)v52 + 1);
      v54 = *(_DWORD*)(v8 + 4 * v53);
      v55 = v40;
      while (*(_DWORD*)(v8 + 4LL * *(unsigned __int16*)v55) > v54) {
        v56 = v55[1];
        --v51;
        v55[2] = *v55;
        v55[3] = v56;
        v55 -= 2;
        if (v51 + 1 <= 1) {
          LODWORD(v51) = 0;
          break;
        }
      }
      v32 += 2;
      v41 += 2;
      v42 += 4;
      v40 += 4;
      v43 = &a2[2 * (int)v51];
      *(_WORD*)v43 = v53;
      *(_QWORD*)((char*)v43 + 2) = *(_QWORD*)v59;
      v43[1] = *(_QWORD*)&v59[6];
    } while (v41 != (((unsigned int)result - 1LL) & 0xFFFFFFFFFFFFFFFELL));
  }
  if ((((_BYTE)result - 1) & 1) != 0) {
    v33 = (unsigned __int16*)&a2[2 * v32];
    v34 = *v33;
    *(_QWORD*)v57 = *(_QWORD*)(v33 + 1);
    v35 = *((_QWORD*)v33 + 1);
    v36 = v33 - 8;
    *(_QWORD*)&v57[6] = v35;
    v37 = *(_DWORD*)(v8 + 4 * v34);
    while (*(_DWORD*)(v8 + 4LL * *v36) > v37) {
      v38 = *((_QWORD*)v36 + 1);
      --v32;
      *((_QWORD*)v36 + 2) = *(_QWORD*)v36;
      *((_QWORD*)v36 + 3) = v38;
      v36 -= 8;
      if (v32 + 1 <= 1) {
        LODWORD(v32) = 0;
        break;
      }
    }
    v39 = &a2[2 * (int)v32];
    *(_WORD*)v39 = v34;
    *(_QWORD*)((char*)v39 + 2) = *(_QWORD*)v57;
    v39[1] = *(_QWORD*)&v57[6];
  }
  return result;
}

__int64 nn_fontll_itype_449b00(unsigned __int8 a1, int a2, __int64 a3,
                               __int64 a4, int** a5, int a6,
                               unsigned __int64* a7, unsigned __int64 a8)
{
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v17;
  int* v18;
  int* v19;
  int* v20;
  int* v21;
  int* v22;
  __int64 v23;
  int v24;
  __int64 v25;
  unsigned __int16 v26;
  __int64 i;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  unsigned __int16* v37;
  int v38;
  int v39;
  int v40;
  __int64 j;
  unsigned __int16* v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  __int64 v49;
  int v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  int v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  unsigned int v77;
  __int64 v78;
  int v79;
  __int64 v80;
  unsigned int v81;
  unsigned int v82;
  __int64 v83;
  int v84;
  __int64 v85;
  unsigned int v86;
  unsigned int v87;
  __int64 v88;
  int v89;
  __int64 v90;
  unsigned int v91;
  unsigned int v92;
  __int64 v93;
  int v94;
  __int64 v95;
  unsigned __int16* v96;
  unsigned __int64 v97;
  unsigned __int16* v98;
  unsigned __int16* v100;
  __int64 v101;
  int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  unsigned int v107;
  unsigned int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  __int64 v123;
  unsigned __int64 v124;
  unsigned __int16* v125;
  int v127;
  __int64 v128;
  unsigned __int16* v129;
  int v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  int v134;
  int v135;
  int v136;
  __int64* v137;
  unsigned __int16 v138;
  int v139;
  unsigned __int16* v140;
  unsigned __int64 v141;
  unsigned int v142;
  unsigned int v143;
  unsigned __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  int v153;
  int v154;
  int v155;
  __int64* v156;
  int v157;
  int v158;
  unsigned int v159;
  unsigned __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  __int64 result;
  int v173;
  __int64 v174;
  int* v175;
  int v176;
  __int64 v177;
  int v178;
  _QWORD* v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  int v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int16 v190;
  _WORD v191[2];

  v8 = a1;
  v9 = 1;
  v10 = *((unsigned __int16*)a5 + 40);
  v17 = a1 != 120;
  if (a1 != 120) {
    v9 = 0;
  }
  v18 = a5[v17];
  v19 = a5[v9];
  if (*((_WORD*)a5 + 40) != 0) {
    v20 = *a5;
    v21 = a5[7];
    v22 = a5[8];
    v23 = v10 & 3;
    v24 = **a5;
    if (v10 >= 4) {
      v75 = (unsigned __int16)v10 & 0xFFFC;
      v25 = 0;
      v26 = 0;
      do {
        v76 = *((unsigned __int16*)v21 + v25);
        v77 = *((unsigned __int16*)v22 + v25);
        if (v76 <= v77) {
          do {
            v78 = (unsigned __int16)v76;
            LOWORD(v76) = v76 + 1;
            v79 = v20[v78];
            if (v79 < v24) {
              v24 = v79;
              v26 = v25;
            }
          } while (v77 >= (unsigned __int16)v76);
        }
        v80 = 2 * (v25 | 1);
        v81 = *(unsigned __int16*)((char*)v21 + v80);
        v82 = *(unsigned __int16*)((char*)v22 + v80);
        if (v81 <= v82) {
          do {
            v83 = (unsigned __int16)v81;
            LOWORD(v81) = v81 + 1;
            v84 = v20[v83];
            if (v84 < v24) {
              v24 = v84;
              v26 = v25 | 1;
            }
          } while (v82 >= (unsigned __int16)v81);
        }
        v85 = 2 * (v25 | 2);
        v86 = *(unsigned __int16*)((char*)v21 + v85);
        v87 = *(unsigned __int16*)((char*)v22 + v85);
        if (v86 <= v87) {
          do {
            v88 = (unsigned __int16)v86;
            LOWORD(v86) = v86 + 1;
            v89 = v20[v88];
            if (v89 < v24) {
              v24 = v89;
              v26 = v25 | 2;
            }
          } while (v87 >= (unsigned __int16)v86);
        }
        v90 = 2 * (v25 | 3);
        v91 = *(unsigned __int16*)((char*)v21 + v90);
        v92 = *(unsigned __int16*)((char*)v22 + v90);
        if (v91 <= v92) {
          do {
            v93 = (unsigned __int16)v91;
            LOWORD(v91) = v91 + 1;
            v94 = v20[v93];
            if (v94 < v24) {
              v24 = v94;
              v26 = v25 | 3;
            }
          } while (v92 >= (unsigned __int16)v91);
        }
        v25 += 4;
      } while (v25 != v75);
    }
    else {
      v25 = 0;
      v26 = 0;
    }
    if (v23 != 0) {
      for (i = 0; i != v23; ++i) {
        v28 = *((unsigned __int16*)v21 + v25);
        v29 = *((unsigned __int16*)v22 + v25);
        if (v28 <= v29) {
          do {
            v30 = (unsigned __int16)v28;
            LOWORD(v28) = v28 + 1;
            v31 = v20[v30];
            if (v31 < v24) {
              v24 = v31;
              v26 = v25;
            }
          } while (v29 >= (unsigned __int16)v28);
        }
        ++v25;
      }
    }
    v32 = v26;
  }
  else {
    v32 = 0;
  }
  if ((v8 == 120) !=
      ((unsigned int)nn_fontll_itype_44d880_alt1(v32, a5) == 0)) {
    v33 = 1;
  }
  else {
    v33 = -1;
  }
  if (a2 < 1) {
    return 0;
  }
  v34 = 1;
  v35 = 0;
  v36 = 0;
  do {
    v37 = (unsigned __int16*)(a3 + 16 * v35);
    if (v33 == (__int16)v37[3]) {
      ++v35;
      v38 = v19[*v37];
      v39 = v19[v37[1]];
      if (v38 >= v39) {
        v40 = v19[v37[1]];
      }
      else {
        v40 = v19[*v37];
      }
      if (v38 <= v39) {
        v38 = v19[v37[1]];
      }
      if (v35 < (unsigned int)a2) {
        for (j = v34; a2 > (int)j && v36 < 64; ++j) {
          v42 = (unsigned __int16*)(a3 + 16 * j);
          v43 = *v37;
          v44 = *v42;
          if (v18[v44] - v18[v43] > a6) {
            break;
          }
          if (v33 != (__int16)v42[3]) {
            v45 = v19[v44];
            v46 = v19[v42[1]];
            if (v45 >= v46) {
              v47 = v19[v42[1]];
            }
            else {
              v47 = v45;
            }
            if (v45 > v46) {
              v46 = v45;
            }
            if (v47 <= v38 && v46 >= v40) {
              v49 = a4 + 48LL * v36;
              *(_WORD*)v49 = v43;
              *(_WORD*)(v49 + 2) = v37[1];
              *(_WORD*)(v49 + 4) = *v42;
              *(_WORD*)(v49 + 6) = v42[1];
              if (v40 >= v47) {
                v50 = v47;
              }
              else {
                v50 = v40;
              }
              if (v38 > v46) {
                v46 = v38;
              }
              *(_DWORD*)(v49 + 36) = v50;
              *(_DWORD*)(v49 + 40) = v46;
              v51 = *((_QWORD*)v37 + 1);
              if (v51 != 0) {
                v52 = 0;
                do {
                  v53 = *a7;
                  *(_WORD*)v53 = *(_WORD*)v51;
                  *(_QWORD*)(v53 + 8) = 0;
                  *a7 += 16LL;
                  *(_QWORD*)(v53 + 8) = v52;
                  v52 = v53;
                  v51 = *(_QWORD*)(v51 + 8);
                } while (v51 != 0);
                *(_QWORD*)(v49 + 8) = v53;
                if (*a7 >= a8) {
                  return 0;
                }
              }
              else {
                *(_QWORD*)(v49 + 8) = 0;
                if (*a7 >= a8) {
                  return 0;
                }
              }
              v54 = *((_QWORD*)v42 + 1);
              if (v54 != 0) {
                v55 = 0;
                do {
                  v56 = *a7;
                  *(_WORD*)v56 = *(_WORD*)v54;
                  *(_QWORD*)(v56 + 8) = 0;
                  *a7 += 16LL;
                  *(_QWORD*)(v56 + 8) = v55;
                  v55 = v56;
                  v54 = *(_QWORD*)(v54 + 8);
                } while (v54 != 0);
                *(_QWORD*)(v49 + 16) = v56;
                if (*a7 >= a8) {
                  return 0;
                }
              }
              else {
                *(_QWORD*)(v49 + 16) = 0;
                if (*a7 >= a8) {
                  return 0;
                }
              }
              ++v36;
              v57 = v18[*v42] + v18[*v37];
              *(_DWORD*)(v49 + 24) = v57 / 2;
              *(_DWORD*)(v49 + 28) = v57 / 2;
              *(_DWORD*)(v49 + 32) = v18[*v42] - v18[*v37];
            }
          }
        }
      }
    }
    else {
      ++v35;
    }
    if (v35 >= (unsigned int)a2) {
      break;
    }
    ++v34;
  } while (v36 < 64);
  if (v36 > 1) {
    v58 = (__int64*)(a4 + 24);
    v59 = 1;
    do {
      v65 = (__int64*)(a4 + 48 * v59);
      v66 = v65[1];
      v67 = *(__int64*)((char*)v65 + 36);
      v187 = *v65;
      v188 = v66;
      v68 = *(__int64*)((char*)v65 + 28);
      v189 = v65[2];
      v69 = *((_DWORD*)v65 + 6);
      LODWORD(v65) = *((_DWORD*)v65 + 11);
      v184 = v68;
      v185 = v67;
      v70 = v58;
      v186 = (int)v65;
      v71 = v59;
      while (*(_DWORD*)v70 > v69) {
        v72 = *v70;
        --v71;
        v70[5] = *(v70 - 1);
        v70[6] = v72;
        v73 = v70[2];
        v70[7] = v70[1];
        v70[8] = v73;
        v74 = *(v70 - 2);
        v70[3] = *(v70 - 3);
        v70[4] = v74;
        v70 -= 6;
        if (v71 + 1 <= 1) {
          LODWORD(v71) = 0;
          break;
        }
      }
      v60 = v187;
      v61 = v188;
      v62 = a4 + 48LL * (int)v71;
      ++v59;
      v58 += 6;
      *(_DWORD*)(v62 + 24) = v69;
      *(_QWORD*)v62 = v60;
      *(_QWORD*)(v62 + 8) = v61;
      *(_QWORD*)(v62 + 16) = v189;
      v63 = v185;
      *(_QWORD*)(v62 + 28) = v184;
      v64 = v186;
      *(_QWORD*)(v62 + 36) = v63;
      *(_DWORD*)(v62 + 44) = v64;
    } while (v59 != v36);
  }
  if (v36 < 1) {
    return 0;
  }
  v95 = (unsigned int)v36 - 1LL;
  v96 = (unsigned __int16*)(a4 + 48);
  v97 = 0;
  do {
    v98 = (unsigned __int16*)(a4 + 48 * v97++);
    if (*((_DWORD*)v98 + 8) != -2147483647 && v97 < (unsigned int)v36) {
      v100 = v96;
      v101 = v95;
      while (1) {
        v102 = *((_DWORD*)v100 + 8);
        if (v102 == -2147483647 || *((_DWORD*)v98 + 8) == v102) {
          goto LABEL_102;
        }
        if (*v98 != *v100) {
          break;
        }
        v103 = v98[1];
        v104 = v98[2];
        if (v103 == v100[1]) {
          v105 = v98[3];
          v106 = v100[2];
          v107 = v100[3];
          v108 = v98[1];
        LABEL_113:
          v109 = v19[v104];
          v110 = v19[v105];
          v111 = v19[*v98];
          v112 = v19[v108];
          v113 = v19[v106];
          v114 = v19[v107];
          v115 = v19[*v100];
          v116 = v19[v103];
          if (v109 <= v110) {
            v117 = v110;
          }
          else {
            v117 = v109;
          }
          if (v109 >= v110) {
            v109 = v110;
          }
          if (v111 <= v112) {
            v118 = v112;
          }
          else {
            v118 = v19[*v98];
          }
          if (v111 >= v112) {
            v111 = v112;
          }
          if (v118 >= v117) {
            v118 = v117;
          }
          if (v111 <= v109) {
            v111 = v109;
          }
          if (v113 <= v114) {
            v119 = v114;
          }
          else {
            v119 = v113;
          }
          if (v113 >= v114) {
            v113 = v114;
          }
          v120 = v118 - v111;
          if (v115 <= v116) {
            v121 = v116;
          }
          else {
            v121 = v19[*v100];
          }
          if (v115 >= v116) {
            v115 = v116;
          }
          if (v121 >= v119) {
            v122 = v119;
          }
          else {
            v122 = v121;
          }
          if (v115 <= v113) {
            v115 = v113;
          }
          if (v120 >= v122 - v115) {
            *((_DWORD*)v100 + 8) = -2147483647;
          }
          else {
            *((_DWORD*)v98 + 8) = -2147483647;
          }
          goto LABEL_102;
        }
        v106 = v98[2];
        if (v104 == v100[2]) {
          goto LABEL_111;
        }
      LABEL_102:
        --v101;
        v100 += 24;
        if (v101 == 0) {
          goto LABEL_95;
        }
      }
      v106 = v98[2];
      if (v106 != v100[2]) {
        goto LABEL_102;
      }
    LABEL_111:
      v107 = v98[3];
      if (v107 == v100[3]) {
        v108 = v98[1];
        v103 = v100[1];
        v105 = v98[3];
        v104 = v106;
        goto LABEL_113;
      }
      goto LABEL_102;
    }
  LABEL_95:
    --v95;
    v96 += 24;
  } while (v97 != v36);
  v123 = 1;
  v124 = 0;
  do {
    v125 = (unsigned __int16*)(a4 + 48 * v124++);
    if (*((_DWORD*)v125 + 8) != -2147483647 && v124 < (unsigned int)v36) {
      v127 = *((_DWORD*)v125 + 6);
      v128 = v123;
      while (1) {
        v129 = (unsigned __int16*)(a4 + 48 * v128);
        if (*((_DWORD*)v129 + 6) > v127) {
          goto LABEL_145;
        }
        v130 = *((_DWORD*)v129 + 8);
        if (v130 != -2147483647 && *((_DWORD*)v125 + 8) == v130) {
          break;
        }
      LABEL_151:
        if (++v128 == v36) {
          goto LABEL_145;
        }
      }
      v131 = *v125;
      v132 = v125[1];
      v133 = *v129;
      v190 = v129[1];
      v134 = v19[v132];
      v135 = v19[v131];
      LOWORD(v187) = v131;
      LOWORD(v184) = v132;
      v191[0] = v133;
      if (v135 <= v134) {
        LOWORD(v184) = v132;
        v136 = v19[v133];
        LOWORD(v131) = v184;
        if (v19[(unsigned __int16)v184] <= v136) {
          goto LABEL_157;
        }
      }
      else {
        LOWORD(v184) = v131;
        LOWORD(v187) = v132;
        v136 = v19[v133];
        if (v19[(unsigned __int16)v131] <= v136) {
        LABEL_157:
          v137 = (__int64*)v191;
        LABEL_162:
          *(_WORD*)v137 = v133;
          v138 = v190;
          v139 = v19[v190];
          if (v19[v191[0]] <= v139) {
            v140 = &v190;
          }
          else {
            v190 = v191[0];
            if (v19[(unsigned __int16)v184] <= v139) {
              v140 = v191;
            }
            else {
              v191[0] = v184;
              if (v19[(unsigned __int16)v187] <= v139) {
                v140 = (unsigned __int16*)&v184;
              }
              else {
                v140 = (unsigned __int16*)&v187;
                LOWORD(v184) = v187;
              }
            }
          }
          *v140 = v138;
          v141 = 0;
          v142 = (unsigned __int16)v187;
          v143 = v190;
          if ((unsigned __int16)v184 != (unsigned __int16)v187 &&
              (unsigned __int16)v184 != v190) {
            v141 = *a7;
            *(_WORD*)v141 = v184;
            *(_QWORD*)(v141 + 8) = 0;
            *a7 += 16LL;
            *(_QWORD*)(v141 + 8) = 0;
          }
          v144 = *a7;
          if (*a7 >= a8) {
            return 0;
          }
          if (v191[0] == v142 || v191[0] == v143) {
            v145 = *a7;
            v144 = v141;
          }
          else {
            *(_WORD*)v144 = v191[0];
            *(_QWORD*)(v144 + 8) = 0;
            *a7 += 16LL;
            *(_QWORD*)(v144 + 8) = v141;
            v145 = *a7;
          }
          if (v145 >= a8) {
            return 0;
          }
          v146 = *((_QWORD*)v125 + 1);
          if (v146 != 0) {
            do {
              v147 = v144;
              v144 = *a7;
              *(_WORD*)v144 = *(_WORD*)v146;
              *(_QWORD*)(v144 + 8) = 0;
              *a7 += 16LL;
              *(_QWORD*)(v144 + 8) = v147;
              v146 = *(_QWORD*)(v146 + 8);
            } while (v146 != 0);
            v145 = *a7;
          }
          if (v145 >= a8) {
            return 0;
          }
          v148 = *((_QWORD*)v129 + 1);
          if (v148 != 0) {
            do {
              v149 = v144;
              v144 = *a7;
              *(_WORD*)v144 = *(_WORD*)v148;
              *(_QWORD*)(v144 + 8) = 0;
              *a7 += 16LL;
              *(_QWORD*)(v144 + 8) = v149;
              v148 = *(_QWORD*)(v148 + 8);
            } while (v148 != 0);
            v145 = *a7;
          }
          if (v145 >= a8) {
            return 0;
          }
          v150 = v125[2];
          v151 = v125[3];
          v152 = v129[2];
          v190 = v129[3];
          v153 = v19[v151];
          v154 = v19[v150];
          LOWORD(v187) = v150;
          LOWORD(v184) = v151;
          v191[0] = v152;
          if (v154 <= v153) {
            LOWORD(v184) = v151;
            v155 = v19[v152];
            LOWORD(v150) = v184;
            if (v19[(unsigned __int16)v184] <= v155) {
              goto LABEL_188;
            }
          }
          else {
            LOWORD(v184) = v150;
            LOWORD(v187) = v151;
            v155 = v19[v152];
            if (v19[(unsigned __int16)v150] <= v155) {
            LABEL_188:
              v156 = (__int64*)v191;
              goto LABEL_193;
            }
          }
          v191[0] = v150;
          if (v19[(unsigned __int16)v187] <= v155) {
            v156 = &v184;
          }
          else {
            v156 = &v187;
            LOWORD(v184) = v187;
          }
        LABEL_193:
          *(_WORD*)v156 = v152;
          LOWORD(v152) = v190;
          v157 = v19[v190];
          if (v19[v191[0]] <= v157) {
            LODWORD(v152) = (unsigned __int16)v187;
            v159 = v190;
            v158 = (unsigned __int16)v184;
            if ((unsigned __int16)v184 == (unsigned __int16)v187) {
              goto LABEL_205;
            }
          }
          else {
            v190 = v191[0];
            if (v19[(unsigned __int16)v184] <= v157) {
              v191[0] = v152;
              LODWORD(v152) = (unsigned __int16)v187;
              v159 = v190;
              v158 = (unsigned __int16)v184;
              if ((unsigned __int16)v184 == (unsigned __int16)v187) {
                goto LABEL_205;
              }
            }
            else {
              v191[0] = v184;
              LOWORD(v158) = v187;
              if (v19[(unsigned __int16)v187] <= v157) {
                LOWORD(v184) = v152;
                LODWORD(v152) = (unsigned __int16)v187;
                v159 = v190;
                v158 = (unsigned __int16)v184;
                if ((unsigned __int16)v184 == (unsigned __int16)v187) {
                  goto LABEL_205;
                }
              }
              else {
                LOWORD(v184) = v187;
                LOWORD(v187) = v152;
                LODWORD(v152) = (unsigned __int16)v152;
                v159 = v190;
                v158 = (unsigned __int16)v158;
                if ((unsigned __int16)v158 == (unsigned __int16)v152) {
                  goto LABEL_205;
                }
              }
            }
          }
          if (v158 != v159) {
            *(_WORD*)v145 = v158;
            *(_QWORD*)(v145 + 8) = 0;
            *a7 += 16LL;
            *(_QWORD*)(v145 + 8) = 0;
            v160 = *a7;
          LABEL_206:
            if (v160 >= a8) {
              return 0;
            }
            if (v191[0] == (_DWORD)v152 || v191[0] == v159) {
              v161 = v160;
              v160 = v145;
            }
            else {
              *(_WORD*)v160 = v191[0];
              *(_QWORD*)(v160 + 8) = 0;
              *a7 += 16LL;
              *(_QWORD*)(v160 + 8) = v145;
              v161 = *a7;
            }
            if (v161 >= a8) {
              return 0;
            }
            v162 = *((_QWORD*)v125 + 2);
            if (v162 != 0) {
              do {
                v163 = v160;
                v160 = *a7;
                *(_WORD*)v160 = *(_WORD*)v162;
                *(_QWORD*)(v160 + 8) = 0;
                *a7 += 16LL;
                *(_QWORD*)(v160 + 8) = v163;
                v162 = *(_QWORD*)(v162 + 8);
              } while (v162 != 0);
              v161 = *a7;
            }
            if (v161 >= a8) {
              return 0;
            }
            v164 = *((_QWORD*)v129 + 2);
            if (v164 != 0) {
              do {
                v165 = v160;
                v160 = *a7;
                *(_WORD*)v160 = *(_WORD*)v164;
                *(_QWORD*)(v160 + 8) = 0;
                *a7 += 16LL;
                *(_QWORD*)(v160 + 8) = v165;
                v164 = *(_QWORD*)(v164 + 8);
              } while (v164 != 0);
              v161 = *a7;
            }
            if (v161 >= a8) {
              return 0;
            }
            v166 = v19[(unsigned int)v152];
            v167 = v19[v142];
            v168 = v19[v159];
            v169 = v19[v143];
            v125[1] = v143;
            v127 = *((_DWORD*)v125 + 6);
            *v125 = v142;
            *((_QWORD*)v125 + 1) = v144;
            *((_QWORD*)v125 + 2) = v160;
            v125[2] = v152;
            v125[3] = v159;
            *((_DWORD*)v125 + 7) = v127;
            *((_DWORD*)v125 + 11) = 0;
            *((_DWORD*)v129 + 8) = -2147483647;
            if (v166 >= v167) {
              v170 = v167;
            }
            else {
              v170 = v166;
            }
            if (v168 <= v169) {
              v171 = v169;
            }
            else {
              v171 = v168;
            }
            *((_DWORD*)v125 + 9) = v170;
            *((_DWORD*)v125 + 10) = v171;
            goto LABEL_151;
          }
        LABEL_205:
          v160 = v145;
          v145 = 0;
          goto LABEL_206;
        }
      }
      v191[0] = v131;
      if (v19[(unsigned __int16)v187] <= v136) {
        v137 = &v184;
      }
      else {
        v137 = &v187;
        LOWORD(v184) = v187;
      }
      goto LABEL_162;
    }
  LABEL_145:
    ++v123;
  } while (v124 != v36);
  v173 = 0;
  while (1) {
    v174 = v173;
    result = v36 <= v173 + 1 ? (unsigned int)(v173 + 1) : (unsigned int)v36;
    v175 = (int*)(a4 + 32 + 48LL * v173);
    while (1) {
      v176 = *v175;
      v175 += 12;
      if (v176 == -2147483647) {
        break;
      }
      if (++v174 >= (unsigned int)v36) {
        goto LABEL_238;
      }
    }
    result = (unsigned int)v174;
  LABEL_238:
    v173 = result + 1;
    if ((int)result + 1 >= v36) {
      return result;
    }
    v177 = a4 + 80 + 48LL * (int)result;
    v178 = v36 - 1 - result;
    while (*(_DWORD*)v177 == -2147483647) {
      v177 += 48;
      if (--v178 == 0) {
        return result;
      }
    }
    v179 = (_QWORD*)(a4 + 48LL * (int)result);
    v180 = *(_QWORD*)(v177 - 24);
    *v179 = *(_QWORD*)(v177 - 32);
    v179[1] = v180;
    v182 = *(_QWORD*)(v177 - 16);
    v181 = *(_QWORD*)(v177 - 8);
    v183 = *(_QWORD*)(v177 + 8);
    v179[4] = *(_QWORD*)v177;
    v179[5] = v183;
    v179[2] = v182;
    v179[3] = v181;
    *(_DWORD*)v177 = -2147483647;
  }
}

__int64 nn_fontll_itype_44a800(char a1, _QWORD* a2, __int64 a3,
                               unsigned __int64* a4, unsigned __int64 a5)
{
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 result;
  __int64 v13;
  unsigned int v14;
  unsigned __int64 v15;
  int v17;
  unsigned __int16 v18;
  __int16 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  _QWORD* v24;
  int v25;
  int v26;
  unsigned __int16 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int16* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int16* v34;
  int v35;
  __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  int v40;
  unsigned __int16* v41;
  __int64 v42;
  __int64 v43;
  int v44;
  unsigned __int16* v45;
  __int64 v46;
  int v47;
  unsigned __int16* v48;
  _QWORD* v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  unsigned __int16* v53;
  _QWORD* v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int16* v61;
  __int64 v62;
  int v63;
  _QWORD* v64;
  __int64 v65;
  _BYTE v66[14];
  _BYTE v67[14];
  _BYTE v68[14];

  v5 = *(unsigned __int16*)(a3 + 80);
  v6 = 8;
  if (a1 == 120) {
    v7 = 8;
  }
  else {
    v7 = 0;
  }
  if (a1 == 120) {
    v6 = 0;
  }
  if (*(_WORD*)(a3 + 80) == 0) {
    return 0;
  }
  v8 = *(_QWORD*)(a3 + v6);
  v10 = *(_QWORD*)(a3 + 56);
  v9 = *(_QWORD*)(a3 + 64);
  v11 = 0;
  result = 0;
  v13 = *(_QWORD*)(a3 + v7);
  do {
    v14 = *(unsigned __int16*)(v10 + 2 * v11);
    v15 = *(unsigned __int16*)(v9 + 2 * v11);
    if (v14 != (_DWORD)v15 && v14 < (unsigned int)v15) {
      v17 = *(_DWORD*)(v8 + 4 * v15) -
            *(_DWORD*)(v8 + 4LL * *(unsigned __int16*)(v10 + 2 * v11));
      if (v17 < 0) {
        v17 = *(_DWORD*)(v8 + 4LL * *(unsigned __int16*)(v10 + 2 * v11)) -
              *(_DWORD*)(v8 + 4 * v15);
      }
      if ((unsigned int)v17 >= 4) {
        v18 = *(_WORD*)(v10 + 2 * v11);
      }
      else {
        v18 = *(_WORD*)(v9 + 2 * v11);
      }
    LABEL_26:
      v20 = v18;
      v21 = (unsigned __int16)v14;
      v22 = *(_DWORD*)(v8 + 4LL * v18);
      v14 = (unsigned __int16)(v14 + 1);
      if ((unsigned int)v15 > v14) {
        LOWORD(v14) = v15;
      }
      while (1) {
        v23 = *(_DWORD*)(v8 + 4 + 4 * v21) - v22;
        if (v23 < 0) {
          v23 = v22 - *(_DWORD*)(v8 + 4 + 4 * v21);
        }
        if ((unsigned int)v23 > 3) {
          break;
        }
        if (++v21 >= v15) {
          if (v18 != (unsigned __int16)v14) {
            goto LABEL_35;
          }
        LABEL_25:
          LOWORD(v14) = v14 + 1;
          v18 = v14;
          if ((unsigned int)v15 <= (unsigned __int16)v14) {
            goto LABEL_13;
          }
          goto LABEL_26;
        }
      }
      LOWORD(v14) = v21;
      if (v18 == (unsigned __int16)v21) {
        goto LABEL_25;
      }
    LABEL_35:
      v24 = &a2[2 * (int)result];
      v25 = *(_DWORD*)(v8 + 4LL * (unsigned __int16)v14);
      *(_WORD*)v24 = v18;
      *((_WORD*)v24 + 1) = v14;
      *((_WORD*)v24 + 2) = v11;
      v24[1] = 0;
      v26 = (v25 + v22) / 2;
      *(_DWORD*)(v8 + 4LL * v18) = v26;
      *(_DWORD*)(v8 + 4LL * (unsigned __int16)v14) = v26;
      if (*(unsigned __int16*)(v9 + 2 * v11) == v18) {
        v27 = *(_WORD*)(v10 + 2 * v11);
        if (v27 != (unsigned __int16)v14) {
        LABEL_39:
          v28 = *a4;
          while (1) {
            v29 = v24[1];
            *(_WORD*)v28 = v27;
            *(_QWORD*)(v28 + 8) = 0;
            *a4 += 16LL;
            *(_QWORD*)(v28 + 8) = v29;
            v24[1] = v28;
            *(_DWORD*)(v8 + 4LL * v27) = v26;
            v28 = *a4;
            if (*a4 >= a5) {
              break;
            }
            if (*(unsigned __int16*)(v9 + 2 * v11) == v27) {
              v27 = *(_WORD*)(v10 + 2 * v11);
              if (v27 == (unsigned __int16)v14) {
                break;
              }
            }
            else if (++v27 == (unsigned __int16)v14) {
              break;
            }
          }
        }
      }
      else {
        v27 = v18 + 1;
        if (v27 != (unsigned __int16)v14) {
          goto LABEL_39;
        }
      }
      result = (unsigned int)(result + 1);
      if ((signed __int32)*(_DWORD*)(v13 + 4LL * (unsigned __int16)v14) >
          (signed __int32)*(_DWORD*)(v13 + 4 * v20)) {
        v19 = 1;
      }
      else {
        v19 = -1;
      }
      *((_WORD*)v24 + 3) = v19;
      if ((_DWORD)result != 128) {
        goto LABEL_25;
      }
      result = 127;
    LABEL_49:
      if ((_DWORD)result == 2) {
        v30 = 1;
      }
      else {
        v49 = a2 + 2;
        v30 = 1;
        v50 = 0;
        v51 = a2;
        do {
          v53 = (unsigned __int16*)&a2[2 * v30];
          v54 = v51;
          v55 = *v53;
          *(_QWORD*)v67 = *(_QWORD*)(v53 + 1);
          v56 = *(_DWORD*)(v8 + 4 * v55);
          *(_QWORD*)&v67[6] = *((_QWORD*)v53 + 1);
          v57 = v30;
          while ((signed __int32)*(
                     _DWORD*)(v8 + 4LL * *(unsigned __int16*)v54) > v56) {
            v58 = v54[1];
            --v57;
            v54[2] = *v54;
            v54[3] = v58;
            v54 -= 2;
            if (v57 + 1 <= 1) {
              LODWORD(v57) = 0;
              break;
            }
          }
          v59 = &a2[2 * (int)v57];
          *(_WORD*)v59 = v55;
          *(_QWORD*)((char*)v59 + 2) = *(_QWORD*)v67;
          v59[1] = *(_QWORD*)&v67[6];
          v60 = v30 + 1;
          v61 = (unsigned __int16*)&a2[2 * v30 + 2];
          v62 = *v61;
          *(_QWORD*)v68 = *(_QWORD*)(v61 + 1);
          *(_QWORD*)&v68[6] = *((_QWORD*)v61 + 1);
          v63 = *(_DWORD*)(v8 + 4 * v62);
          v64 = v49;
          while ((signed __int32)*(
                     _DWORD*)(v8 + 4LL * *(unsigned __int16*)v64) > v63) {
            v65 = v64[1];
            --v60;
            v64[2] = *v64;
            v64[3] = v65;
            v64 -= 2;
            if (v60 + 1 <= 1) {
              LODWORD(v60) = 0;
              break;
            }
          }
          v30 += 2;
          v50 += 2;
          v51 += 4;
          v49 += 4;
          v52 = &a2[2 * (int)v60];
          *(_WORD*)v52 = v62;
          *(_QWORD*)((char*)v52 + 2) = *(_QWORD*)v68;
          v52[1] = *(_QWORD*)&v68[6];
        } while (v50 != (((unsigned int)result - 1LL) & 0xFFFFFFFFFFFFFFFELL));
      }
      if ((((_BYTE)result - 1) & 1) != 0) {
        v31 = (unsigned __int16*)&a2[2 * v30];
        v32 = *v31;
        *(_QWORD*)v66 = *(_QWORD*)(v31 + 1);
        v33 = *((_QWORD*)v31 + 1);
        v34 = v31 - 8;
        *(_QWORD*)&v66[6] = v33;
        v35 = *(_DWORD*)(v8 + 4 * v32);
        while ((signed __int32)*(_DWORD*)(v8 + 4LL * *v34) > v35) {
          v36 = *((_QWORD*)v34 + 1);
          --v30;
          *((_QWORD*)v34 + 2) = *(_QWORD*)v34;
          *((_QWORD*)v34 + 3) = v36;
          v34 -= 8;
          if (v30 + 1 <= 1) {
            LODWORD(v30) = 0;
            break;
          }
        }
        v37 = &a2[2 * (int)v30];
        *(_WORD*)v37 = v32;
        *(_QWORD*)((char*)v37 + 2) = *(_QWORD*)v66;
        v37[1] = *(_QWORD*)&v66[6];
      }
      goto LABEL_57;
    }
  LABEL_13:
    if ((int)result > 127) {
      break;
    }
    ++v11;
  } while (v11 < v5);
  if ((_DWORD)result == 0) {
    return result;
  }
  if ((int)result >= 2) {
    goto LABEL_49;
  }
  if ((_DWORD)result != 1) {
    return result;
  }
LABEL_57:
  if ((_DWORD)result == 1) {
    v38 = 0;
    v39 = 1;
  }
  else {
    v39 = 1;
    v38 = 0;
    do {
      v42 = v38 | 1;
      if ((v38 | 1) < (unsigned int)result) {
        v43 = v39;
        v44 = *(_DWORD*)(v8 + 4LL * LOWORD(a2[2 * v38]));
        do {
          v45 = (unsigned __int16*)&a2[2 * v43];
          if (*(_DWORD*)(v8 + 4LL * *v45) - v44 > 8) {
            break;
          }
          *(_DWORD*)(v8 + 4LL * v45[1]) = v44;
          do {
            *(_DWORD*)(v8 + 4LL * *v45) = v44;
            v45 = *((unsigned __int16**)v45 + 1);
          } while (v45 != nullptr);
          ++v43;
        } while (v43 != (unsigned int)result);
      }
      v38 += 2LL;
      if (v38 < (unsigned int)result) {
        v46 = v39 + 1;
        v47 = *(_DWORD*)(v8 + 4LL * LOWORD(a2[2 * v42]));
        do {
          v48 = (unsigned __int16*)&a2[2 * v46];
          if (*(_DWORD*)(v8 + 4LL * *v48) - v47 > 8) {
            break;
          }
          *(_DWORD*)(v8 + 4LL * v48[1]) = v47;
          do {
            *(_DWORD*)(v8 + 4LL * *v48) = v47;
            v48 = *((unsigned __int16**)v48 + 1);
          } while (v48 != nullptr);
          ++v46;
        } while (v46 != (unsigned int)result);
      }
      v39 += 2;
    } while (v38 != (result & 0xFFFFFFFE));
  }
  if ((result & 1) != 0 && v38 + 1 < (unsigned int)result) {
    v40 = *(_DWORD*)(v8 + 4LL * LOWORD(a2[2 * v38]));
    do {
      v41 = (unsigned __int16*)&a2[2 * v39];
      if (*(_DWORD*)(v8 + 4LL * *v41) - v40 > 8) {
        break;
      }
      *(_DWORD*)(v8 + 4LL * v41[1]) = v40;
      do {
        *(_DWORD*)(v8 + 4LL * *v41) = v40;
        v41 = *((unsigned __int16**)v41 + 1);
      } while (v41 != nullptr);
      ++v39;
    } while (v39 != (unsigned int)result);
  }
  return result;
}

__int64 nn_fontll_itype_44ad60(unsigned __int8 a1, int a2, __int64 a3,
                               __int64 a4, int** a5, int a6,
                               unsigned __int64* a7, unsigned __int64 a8)
{
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v17;
  int* v18;
  int* v19;
  int* v20;
  int* v21;
  int* v22;
  __int64 v23;
  int v24;
  __int64 v25;
  unsigned __int16 v26;
  __int64 i;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  unsigned __int16* v37;
  int v38;
  int v39;
  int v40;
  __int64 j;
  unsigned __int16* v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  int v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  int v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int16* v74;
  __int64 v75;
  int v76;
  unsigned __int16* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  unsigned int v82;
  bool v83;
  int v84;
  unsigned int v85;
  int v86;
  bool v87;
  unsigned int v88;
  unsigned int v89;
  int v90;
  unsigned int v91;
  int v92;
  bool v93;
  unsigned int v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  int v103;
  unsigned int v104;
  bool v105;
  int v106;
  unsigned int v107;
  int v108;
  bool v109;
  unsigned int v110;
  unsigned int v111;
  int v112;
  unsigned int v113;
  bool v114;
  unsigned __int64 v115;
  unsigned int v116;
  __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int64 result;
  __int64 v127;
  unsigned int v128;
  unsigned int v129;
  __int64 v130;
  int v131;
  __int64 v132;
  unsigned int v133;
  unsigned int v134;
  __int64 v135;
  int v136;
  __int64 v137;
  unsigned int v138;
  unsigned int v139;
  __int64 v140;
  int v141;
  __int64 v142;
  unsigned int v143;
  unsigned int v144;
  __int64 v145;
  int v146;
  unsigned __int16* v147;
  __int64 v148;
  unsigned __int64 v149;
  unsigned __int16* v150;
  __int64 v152;
  unsigned __int16* v153;
  int v154;
  __int64 v155;
  __int64 v156;
  int v157;
  int v158;
  __int64 v159;
  __int64 v160;
  unsigned __int16* v161;
  __int64 v162;
  int v163;
  int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  unsigned int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  __int64 v186;
  int* v187;
  int v188;
  __int64 v189;
  int v190;
  _QWORD* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  int v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;

  v8 = a1;
  v9 = 1;
  v10 = *((unsigned __int16*)a5 + 40);
  v17 = a1 != 120;
  if (a1 != 120) {
    v9 = 0;
  }
  v18 = a5[v17];
  v19 = a5[v9];
  if (*((_WORD*)a5 + 40) != 0) {
    v20 = *a5;
    v21 = a5[7];
    v22 = a5[8];
    v23 = v10 & 3;
    v24 = **a5;
    if (v10 >= 4) {
      v127 = (unsigned __int16)v10 & 0xFFFC;
      v25 = 0;
      v26 = 0;
      do {
        v128 = *((unsigned __int16*)v21 + v25);
        v129 = *((unsigned __int16*)v22 + v25);
        if (v128 < v129) {
          do {
            v130 = (unsigned __int16)v128;
            LOWORD(v128) = v128 + 1;
            v131 = v20[v130];
            if (v131 < v24) {
              v24 = v131;
              v26 = v25;
            }
          } while (v129 >= (unsigned __int16)v128);
        }
        v132 = 2 * (v25 | 1);
        v133 = *(unsigned __int16*)((char*)v21 + v132);
        v134 = *(unsigned __int16*)((char*)v22 + v132);
        if (v133 < v134) {
          do {
            v135 = (unsigned __int16)v133;
            LOWORD(v133) = v133 + 1;
            v136 = v20[v135];
            if (v136 < v24) {
              v24 = v136;
              v26 = v25 | 1;
            }
          } while (v134 >= (unsigned __int16)v133);
        }
        v137 = 2 * (v25 | 2);
        v138 = *(unsigned __int16*)((char*)v21 + v137);
        v139 = *(unsigned __int16*)((char*)v22 + v137);
        if (v138 < v139) {
          do {
            v140 = (unsigned __int16)v138;
            LOWORD(v138) = v138 + 1;
            v141 = v20[v140];
            if (v141 < v24) {
              v24 = v141;
              v26 = v25 | 2;
            }
          } while (v139 >= (unsigned __int16)v138);
        }
        v142 = 2 * (v25 | 3);
        v143 = *(unsigned __int16*)((char*)v21 + v142);
        v144 = *(unsigned __int16*)((char*)v22 + v142);
        if (v143 < v144) {
          do {
            v145 = (unsigned __int16)v143;
            LOWORD(v143) = v143 + 1;
            v146 = v20[v145];
            if (v146 < v24) {
              v24 = v146;
              v26 = v25 | 3;
            }
          } while (v144 >= (unsigned __int16)v143);
        }
        v25 += 4;
      } while (v25 != v127);
    }
    else {
      v25 = 0;
      v26 = 0;
    }
    if (v23 != 0) {
      for (i = 0; i != v23; ++i) {
        v28 = *((unsigned __int16*)v21 + v25);
        v29 = *((unsigned __int16*)v22 + v25);
        if (v28 < v29) {
          do {
            v30 = (unsigned __int16)v28;
            LOWORD(v28) = v28 + 1;
            v31 = v20[v30];
            if (v31 < v24) {
              v24 = v31;
              v26 = v25;
            }
          } while (v29 >= (unsigned __int16)v28);
        }
        ++v25;
      }
    }
    v32 = v26;
  }
  else {
    v32 = 0;
  }
  if ((v8 == 120) !=
      ((unsigned int)nn_fontll_itype_44d880_alt1(v32, a5) == 0)) {
    v33 = 1;
  }
  else {
    v33 = -1;
  }
  if (a2 < 1) {
    return 0;
  }
  v34 = 1;
  v35 = 0;
  v36 = 0;
  do {
    v37 = (unsigned __int16*)(a3 + 16 * v35);
    if (v33 == (__int16)v37[3]) {
      ++v35;
      v38 = v19[*v37];
      v39 = v19[v37[1]];
      if (v38 >= v39) {
        v40 = v19[v37[1]];
      }
      else {
        v40 = v19[*v37];
      }
      if (v38 <= v39) {
        v38 = v19[v37[1]];
      }
      if (v35 < (unsigned int)a2) {
        for (j = v34; a2 > (int)j && v36 < 64; ++j) {
          v42 = (unsigned __int16*)(a3 + 16 * j);
          v43 = *v37;
          v44 = *v42;
          v45 = v18[v44] - v18[v43];
          if (v45 > a6) {
            break;
          }
          if (v33 != (__int16)v42[3]) {
            v46 = v19[v44];
            v47 = v19[v42[1]];
            if (v46 >= v47) {
              v48 = v19[v42[1]];
            }
            else {
              v48 = v46;
            }
            if (v46 <= v47) {
              v46 = v19[v42[1]];
            }
            if (v48 <= v38 && v46 >= v40) {
              v50 = v38 >= v46 ? v46 : v38;
              v51 = v40 <= v48 ? v48 : v40;
              if (v50 - v51 >= v45 >> 3) {
                v52 = a4 + 48LL * v36;
                *(_WORD*)v52 = v43;
                *(_WORD*)(v52 + 2) = v37[1];
                *(_WORD*)(v52 + 4) = *v42;
                *(_WORD*)(v52 + 6) = v42[1];
                if (v40 >= v48) {
                  v53 = v48;
                }
                else {
                  v53 = v40;
                }
                if (v38 > v46) {
                  v46 = v38;
                }
                *(_DWORD*)(v52 + 36) = v53;
                *(_DWORD*)(v52 + 40) = v46;
                v54 = *((_QWORD*)v37 + 1);
                if (v54 != 0) {
                  v55 = 0;
                  do {
                    v56 = *a7;
                    *(_WORD*)v56 = *(_WORD*)v54;
                    *(_QWORD*)(v56 + 8) = 0;
                    *a7 += 16LL;
                    *(_QWORD*)(v56 + 8) = v55;
                    v55 = v56;
                    v54 = *(_QWORD*)(v54 + 8);
                  } while (v54 != 0);
                  *(_QWORD*)(v52 + 8) = v56;
                  if (*a7 >= a8) {
                    return 0;
                  }
                }
                else {
                  *(_QWORD*)(v52 + 8) = 0;
                  if (*a7 >= a8) {
                    return 0;
                  }
                }
                v57 = *((_QWORD*)v42 + 1);
                if (v57 != 0) {
                  v58 = 0;
                  do {
                    v59 = *a7;
                    *(_WORD*)v59 = *(_WORD*)v57;
                    *(_QWORD*)(v59 + 8) = 0;
                    *a7 += 16LL;
                    *(_QWORD*)(v59 + 8) = v58;
                    v58 = v59;
                    v57 = *(_QWORD*)(v57 + 8);
                  } while (v57 != 0);
                  *(_QWORD*)(v52 + 16) = v59;
                  if (*a7 >= a8) {
                    return 0;
                  }
                }
                else {
                  *(_QWORD*)(v52 + 16) = 0;
                  if (*a7 >= a8) {
                    return 0;
                  }
                }
                ++v36;
                v60 = v18[*v42] + v18[*v37];
                *(_DWORD*)(v52 + 24) = v60 / 2;
                *(_DWORD*)(v52 + 28) = v60 / 2;
                *(_DWORD*)(v52 + 32) = v18[*v42] - v18[*v37];
              }
            }
          }
        }
      }
    }
    else {
      ++v35;
    }
    if (v35 >= (unsigned int)a2) {
      break;
    }
    ++v34;
  } while (v36 < 64);
  if (v36 > 1) {
    v61 = (__int64*)(a4 + 24);
    v62 = 1;
    do {
      v64 = (__int64*)(a4 + 48 * v62);
      v199 = *v64;
      v200 = v64[1];
      v201 = v64[2];
      v65 = *((_DWORD*)v64 + 6);
      v196 = *(__int64*)((char*)v64 + 28);
      v197 = *(__int64*)((char*)v64 + 36);
      v66 = v61;
      v198 = *((_DWORD*)v64 + 11);
      v67 = v62;
      while (*(_DWORD*)v66 > v65) {
        v68 = *v66;
        --v67;
        v66[5] = *(v66 - 1);
        v66[6] = v68;
        v69 = v66[2];
        v66[7] = v66[1];
        v66[8] = v69;
        v70 = *(v66 - 2);
        v66[3] = *(v66 - 3);
        v66[4] = v70;
        v66 -= 6;
        if (v67 + 1 <= 1) {
          LODWORD(v67) = 0;
          break;
        }
      }
      v63 = a4 + 48LL * (int)v67;
      ++v62;
      v61 += 6;
      *(_DWORD*)(v63 + 24) = v65;
      *(_QWORD*)v63 = v199;
      *(_QWORD*)(v63 + 8) = v200;
      *(_QWORD*)(v63 + 16) = v201;
      *(_QWORD*)(v63 + 28) = v196;
      *(_QWORD*)(v63 + 36) = v197;
      *(_DWORD*)(v63 + 44) = v198;
    } while (v62 != v36);
  }
  if (v36 < 1) {
    return 0;
  }
  v71 = 1;
  v72 = 0;
  do {
    v73 = v72 + 1;
    if (v72 + 1 < (unsigned __int64)(unsigned int)v36) {
      v74 = (unsigned __int16*)(a4 + 48 * v72);
      v75 = v71;
      v76 = *((_DWORD*)v74 + 6);
      while (1) {
        v77 = (unsigned __int16*)(a4 + 48 * v75);
        if (*((_DWORD*)v77 + 6) > v76) {
          goto LABEL_83;
        }
        if (*((_DWORD*)v74 + 8) == *((_DWORD*)v77 + 8)) {
          break;
        }
      LABEL_86:
        if (++v75 == v36) {
          goto LABEL_83;
        }
      }
      v78 = *v74;
      v79 = v74[1];
      v80 = *v77;
      v81 = v19[v77[1]];
      if (v19[v78] <= v19[v79]) {
        v82 = *v74;
      }
      else {
        v82 = v74[1];
      }
      if (v19[v78] > v19[v79]) {
        LODWORD(v79) = *v74;
      }
      v83 = v19[v80] <= v81;
      v84 = v19[v82];
      if (v19[v80] <= v81) {
        v85 = *v77;
      }
      else {
        v85 = v77[1];
      }
      if (v83) {
        LODWORD(v80) = v77[1];
      }
      v86 = v19[v85];
      v87 = v84 <= v86;
      if (v84 <= v86) {
        v88 = v82;
      }
      else {
        v88 = v85;
      }
      if (v87) {
        v89 = v85;
      }
      else {
        v89 = v82;
      }
      v90 = v19[v89];
      if (v19[(unsigned int)v79] <= v19[(unsigned int)v80]) {
        v91 = v79;
      }
      else {
        v91 = v80;
      }
      if (v19[(unsigned int)v79] <= v19[(unsigned int)v80]) {
        LODWORD(v79) = v80;
      }
      v92 = v19[v91];
      v93 = v92 <= v90;
      if (v92 <= v90) {
        v94 = v91;
      }
      else {
        v94 = v89;
      }
      if (v93) {
        v91 = v89;
      }
      v95 = *((_QWORD*)v74 + 1);
      if (v95 != 0) {
        v96 = *((_QWORD*)v74 + 1);
        do {
          v97 = v96;
          v96 = *(_QWORD*)(v96 + 8);
        } while (v96 != 0);
        *(_QWORD*)(v97 + 8) = *((_QWORD*)v77 + 1);
        *((_QWORD*)v77 + 1) = 0;
        if (v94 == v88) {
          goto LABEL_125;
        }
      }
      else {
        v95 = *((_QWORD*)v77 + 1);
        *((_QWORD*)v77 + 1) = 0;
        if (v94 == v88) {
          goto LABEL_125;
        }
      }
      if (v94 != (_DWORD)v79) {
        v98 = *a7;
        *(_WORD*)v98 = v94;
        *(_QWORD*)(v98 + 8) = 0;
        *a7 += 16LL;
        *(_QWORD*)(v98 + 8) = v95;
        v95 = v98;
      }
    LABEL_125:
      v99 = *a7;
      if (*a7 >= a8) {
        return 0;
      }
      if (v91 == v88 || v91 == (_DWORD)v79) {
        v99 = v95;
        if (*a7 >= a8) {
          return 0;
        }
      }
      else {
        *(_WORD*)v99 = v91;
        *(_QWORD*)(v99 + 8) = 0;
        *a7 += 16LL;
        *(_QWORD*)(v99 + 8) = v95;
        if (*a7 >= a8) {
          return 0;
        }
      }
      v100 = v74[2];
      v101 = v74[3];
      v102 = v77[2];
      v103 = v19[v77[3]];
      if (v19[v100] <= v19[v101]) {
        v104 = v74[2];
      }
      else {
        v104 = v74[3];
      }
      if (v19[v100] > v19[v101]) {
        LODWORD(v101) = v74[2];
      }
      v105 = v19[v102] <= v103;
      v106 = v19[v104];
      if (v19[v102] <= v103) {
        v107 = v77[2];
      }
      else {
        v107 = v77[3];
      }
      if (v105) {
        LODWORD(v102) = v77[3];
      }
      v108 = v19[v107];
      v109 = v106 <= v108;
      if (v106 <= v108) {
        v110 = v104;
      }
      else {
        v110 = v107;
      }
      if (v109) {
        v111 = v107;
      }
      else {
        v111 = v104;
      }
      v112 = v19[v111];
      if (v19[(unsigned int)v101] <= v19[(unsigned int)v102]) {
        v113 = v101;
      }
      else {
        v113 = v102;
      }
      if (v19[(unsigned int)v101] <= v19[(unsigned int)v102]) {
        LODWORD(v101) = v102;
      }
      v114 = v19[v113] <= v112;
      v115 = *((_QWORD*)v74 + 2);
      if (v19[v113] <= v112) {
        v116 = v113;
      }
      else {
        v116 = v111;
      }
      if (!v114) {
        v111 = v113;
      }
      if (v115 != 0) {
        v117 = *((_QWORD*)v74 + 2);
        do {
          v118 = v117;
          v117 = *(_QWORD*)(v117 + 8);
        } while (v117 != 0);
        *(_QWORD*)(v118 + 8) = *((_QWORD*)v77 + 2);
        *((_QWORD*)v77 + 2) = 0;
        if (v116 == v110) {
          goto LABEL_166;
        }
      }
      else {
        v115 = *((_QWORD*)v77 + 2);
        *((_QWORD*)v77 + 2) = 0;
        if (v116 == v110) {
        LABEL_166:
          v120 = *a7;
          if (*a7 >= a8) {
            return 0;
          }
          if (v111 == v110 || v111 == (_DWORD)v101) {
            v120 = v115;
            if (*a7 >= a8) {
              return 0;
            }
          }
          else {
            *(_WORD*)v120 = v111;
            *(_QWORD*)(v120 + 8) = 0;
            *a7 += 16LL;
            *(_QWORD*)(v120 + 8) = v115;
            if (*a7 >= a8) {
              return 0;
            }
          }
          v121 = v19[v110];
          v122 = v19[v88];
          v123 = v19[(unsigned int)v101];
          v124 = v19[(unsigned int)v79];
          *v74 = v88;
          v76 = *((_DWORD*)v74 + 6);
          v74[1] = v79;
          v74[2] = v110;
          v74[3] = v101;
          *((_QWORD*)v74 + 1) = v99;
          *((_QWORD*)v74 + 2) = v120;
          *((_DWORD*)v74 + 7) = v76;
          *((_DWORD*)v74 + 11) = 0;
          *((_DWORD*)v77 + 8) = -2147483647;
          if (v121 >= v122) {
            v121 = v122;
          }
          if (v123 <= v124) {
            v125 = v124;
          }
          else {
            v125 = v123;
          }
          *((_DWORD*)v74 + 9) = v121;
          *((_DWORD*)v74 + 10) = v125;
          goto LABEL_86;
        }
      }
      if (v116 != (_DWORD)v101) {
        v119 = *a7;
        *(_WORD*)v119 = v116;
        *(_QWORD*)(v119 + 8) = 0;
        *a7 += 16LL;
        *(_QWORD*)(v119 + 8) = v115;
        v115 = v119;
      }
      goto LABEL_166;
    }
  LABEL_83:
    ++v71;
    v72 = v73;
  } while (v73 != v36);
  v147 = (unsigned __int16*)(a4 + 48);
  v148 = (unsigned int)v36 - 1LL;
  v149 = 0;
  do {
    v150 = (unsigned __int16*)(a4 + 48 * v149++);
    if (*((_DWORD*)v150 + 8) != -2147483647 && v149 < (unsigned int)v36) {
      v152 = v148;
      v153 = v147;
      do {
        v154 = *((_DWORD*)v153 + 8);
        if (v154 != -2147483647 && *((_DWORD*)v150 + 8) != v154) {
          v155 = *v150;
          v156 = *v153;
          v157 = v18[v155];
          v158 = v18[v156];
          if (v157 == v158) {
            v159 = 1;
            LODWORD(v160) = *v150;
            v161 = v150 + 1;
            LODWORD(v162) = *v153;
          LABEL_218:
            v165 = *v161;
            v166 = v153[v159];
            if ((unsigned int)v160 >= v165) {
              v167 = v165;
            }
            else {
              v167 = v160;
            }
            if ((unsigned int)v160 <= v165) {
              LODWORD(v160) = v165;
            }
            if ((unsigned int)v162 >= v166) {
              v168 = v166;
            }
            else {
              v168 = v162;
            }
            if ((unsigned int)v162 <= v166) {
              LODWORD(v162) = v166;
            }
            if ((unsigned int)v160 >= v168 && (unsigned int)v162 >= v167) {
              v170 = v19[v155];
              v171 = v19[v156];
              v172 = v19[v150[1]];
              if (v170 >= v172) {
                v173 = v19[v150[1]];
              }
              else {
                v173 = v170;
              }
              if (v170 <= v172) {
                v170 = v19[v150[1]];
              }
              v174 = v19[v150[2]];
              v175 = v19[v150[3]];
              if (v174 >= v175) {
                v176 = v19[v150[3]];
              }
              else {
                v176 = v19[v150[2]];
              }
              if (v174 <= v175) {
                v174 = v19[v150[3]];
              }
              v177 = v170 + v174 - (v173 + v176);
              if (v177 < 0) {
                v177 = -v177;
              }
              v178 = (unsigned int)v177 >> 1;
              v179 = v19[v153[1]];
              if (v171 >= v179) {
                v180 = v19[v153[1]];
              }
              else {
                v180 = v171;
              }
              if (v171 <= v179) {
                v171 = v19[v153[1]];
              }
              v181 = v19[v153[2]];
              v182 = v19[v153[3]];
              if (v181 >= v182) {
                v183 = v19[v153[3]];
              }
              else {
                v183 = v19[v153[2]];
              }
              if (v181 <= v182) {
                v181 = v19[v153[3]];
              }
              v184 = v171 + v181 - (v180 + v183);
              if (v184 < 0) {
                v184 = -v184;
              }
              if (v178 >= (unsigned int)v184 >> 1) {
                *((_DWORD*)v153 + 8) = -2147483647;
              }
              else {
                *((_DWORD*)v150 + 8) = -2147483647;
              }
            }
            goto LABEL_207;
          }
          v162 = v153[2];
          v163 = v18[v162];
          if (v157 == v163) {
            v159 = 3;
            LODWORD(v160) = *v150;
            v161 = v150 + 1;
            goto LABEL_218;
          }
          v160 = v150[2];
          v164 = v18[v160];
          if (v164 == v158) {
            v159 = 1;
            v161 = v150 + 3;
            LODWORD(v162) = *v153;
            goto LABEL_218;
          }
          if (v164 == v163) {
            v159 = 3;
            v161 = v150 + 3;
            goto LABEL_218;
          }
        }
      LABEL_207:
        v153 += 24;
        --v152;
      } while (v152 != 0);
    }
    v147 += 24;
    --v148;
  } while (v149 != v36);
  v185 = 0;
  while (1) {
    v186 = v185;
    result = v36 <= v185 + 1 ? (unsigned int)(v185 + 1) : (unsigned int)v36;
    v187 = (int*)(a4 + 32 + 48LL * v185);
    while (1) {
      v188 = *v187;
      v187 += 12;
      if (v188 == -2147483647) {
        break;
      }
      if (++v186 >= (unsigned int)v36) {
        goto LABEL_268;
      }
    }
    result = (unsigned int)v186;
  LABEL_268:
    v185 = result + 1;
    if ((int)result + 1 >= v36) {
      return result;
    }
    v189 = a4 + 80 + 48LL * (int)result;
    v190 = v36 - 1 - result;
    while (*(_DWORD*)v189 == -2147483647) {
      v189 += 48;
      if (--v190 == 0) {
        return result;
      }
    }
    v191 = (_QWORD*)(a4 + 48LL * (int)result);
    v192 = *(_QWORD*)(v189 - 24);
    *v191 = *(_QWORD*)(v189 - 32);
    v191[1] = v192;
    v194 = *(_QWORD*)(v189 - 16);
    v193 = *(_QWORD*)(v189 - 8);
    v195 = *(_QWORD*)(v189 + 8);
    v191[4] = *(_QWORD*)v189;
    v191[5] = v195;
    v191[2] = v194;
    v191[3] = v193;
    *(_DWORD*)v189 = -2147483647;
  }
}

__int64 nn_fontll_itype_44b8a0(__int64 result, _DWORD* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  int* v6;
  __int64 v7;
  int v8;
  int v9;
  signed int v10;
  signed int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  signed int v17;
  signed int v18;
  unsigned int v19;
  unsigned int v20;
  _DWORD* v21;
  int v22;
  int v23;
  signed int v24;
  signed int v25;
  unsigned int v26;
  unsigned int v27;
  __int64 i;
  _DWORD* v29;
  __int64 v30;
  int* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  bool v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  bool v48;
  bool v49;
  int v50;
  int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  signed int v68;
  signed int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  unsigned int v73;
  unsigned int v74;
  bool v75;
  bool v76;
  bool v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  unsigned int v86;
  bool v87;
  bool v88;

  if ((int)result >= 1) {
    v3 = result;
    v4 = (unsigned int)result;
    if ((_DWORD)result == 1) {
      v5 = 0;
    }
    else {
      v6 = a2 + 20;
      v7 = 0;
      do {
        v8 = *(v6 - 14);
        v7 -= 2;
        v9 = *(v6 - 12) >> 1;
        v10 = ((v8 - v9 + 32) & 0xFFFFFFC0) - (v8 - v9);
        v11 = ((v9 + v8 + 32) & 0xFFFFFFC0) - (v9 + v8);
        if (v10 >= 0) {
          v12 = v10;
        }
        else {
          v12 = -v10;
        }
        if (v11 >= 0) {
          v13 = v11;
        }
        else {
          v13 = -v11;
        }
        if (v12 < v13) {
          v11 = v10;
        }
        v14 = v11 + v8;
        v15 = *v6;
        *(v6 - 13) = v14;
        v16 = *(v6 - 2);
        v15 >>= 1;
        v17 = ((v16 - v15 + 32) & 0xFFFFFFC0) - (v16 - v15);
        v18 = ((v15 + v16 + 32) & 0xFFFFFFC0) - (v15 + v16);
        if (v17 >= 0) {
          v19 = v17;
        }
        else {
          v19 = -v17;
        }
        if (v18 >= 0) {
          v20 = v18;
        }
        else {
          v20 = -v18;
        }
        if (v19 < v20) {
          v18 = v17;
        }
        *(v6 - 1) = v18 + v16;
        v6 += 24;
      } while (-(result & 0x7FFFFFFE) != v7);
      v5 = -v7;
      if ((result & 1) == 0) {
        goto LABEL_32;
      }
    }
    v21 = &a2[12 * v5];
    v22 = v21[6];
    v23 = (int)v21[8] >> 1;
    v24 = ((v22 - v23 + 32) & 0xFFFFFFC0) - (v22 - v23);
    v25 = ((v23 + v22 + 32) & 0xFFFFFFC0) - (v23 + v22);
    if (v24 >= 0) {
      v26 = v24;
    }
    else {
      v26 = -v24;
    }
    if (v25 >= 0) {
      v27 = v25;
    }
    else {
      v27 = -v25;
    }
    if (v26 < v27) {
      v25 = v24;
    }
    v21[7] = v25 + v22;
  LABEL_32:
    for (i = 0; i != v4; ++i) {
      v29 = &a2[12 * i];
      v30 = 0;
      v31 = a2 + 7;
      do {
        v32 = *v31;
        v33 = v29[7];
        if (*v31 < v33) {
          goto LABEL_36;
        }
        v34 = v31[2];
        v35 = v29[10];
        v36 = __OFSUB__(v35, v34);
        v37 = v35 - v34;
        if (v37 < 0 != v36) {
          goto LABEL_36;
        }
        v38 = v29[9];
        v39 = v31[3];
        v40 = v39 - v38;
        if (v39 < v38) {
          goto LABEL_36;
        }
        v41 = v31[1];
        v42 = v41 / 2;
        v43 = v29[8];
        if (*v31 - v33 - v41 / 2 - v43 / 2 > 128) {
          goto LABEL_36;
        }
        if (v37 >= v40) {
          v37 = v40;
        }
        v44 = v33 - v43 / 2 - v42 - v32;
        v45 = v43 / -2 - v33 + v32 - v42;
        if (v44 < v45) {
          v45 = v44;
        }
        v46 = v43 >= v41 ? v31[1] : v29[8];
        v47 = v46 / 2;
        v48 = v37 < v47 && v45 < v47;
        v49 = v48;
        if (i == v30 || v49) {
          goto LABEL_36;
        }
        v50 = a2[12 * (unsigned int)i + 7] +
              (signed __int32)a2[12 * (unsigned int)i + 8] / 2;
        v51 = a2[12 * (unsigned int)v30 + 7] -
              (signed __int32)a2[12 * (unsigned int)v30 + 8] / 2;
        v52 = v51 - v50;
        if (v51 >= v50) {
          v53 = v50 & 0xFFFFFFC0;
          v54 = v51 & 0xFFFFFFC0;
          if (v50 != (v50 & 0xFFFFFFC0)) {
            if (v51 != v54 && v53 != v54) {
              if (v54 != v53 + 64) {
                goto LABEL_36;
              }
              v73 = v51 & 0x3F;
              v74 = v50 & 0x3F;
              v75 = v73 <= 0x27 || v74 >= 0x19;
              v76 = !v75;
              if (v73 > 0x2F || v74 < 0x11 || v76) {
                goto LABEL_36;
              }
              goto LABEL_35;
            }
          LABEL_87:
            if (v52 > 47) {
              goto LABEL_36;
            }
            goto LABEL_35;
          }
          if (v51 != v54) {
            goto LABEL_87;
          }
          if (v52 > 63) {
            goto LABEL_36;
          }
        }
      LABEL_35:
        result = SdkRoutine_44dba0(i, v30, v4, (__int64)a2);
        if ((_DWORD)result == 0) {
          result = nn_fontll_itype_44e2c0(i, v30, v3, a2);
          if ((_DWORD)result == 0) {
            v56 = v29[7];
            v55 = v29[8];
            v58 = *v31;
            v57 = v31[1];
            if (v55 > 54 || v57 >= 55) {
              v59 = v29[7];
              if (v55 >= 55) {
                v60 = 7 * v55 + 4;
                if ((int)(((v56 - (v60 >> 4) + 32) & 0xFFFFFFC0) -
                          (v56 - (v60 >> 4))) >= 0) {
                  v61 = ((v56 - (v60 >> 4) + 32) & 0xFFFFFFC0) -
                        (v56 - (v60 >> 4));
                }
                else {
                  v61 =
                      v56 - (v60 >> 4) - ((v56 - (v60 >> 4) + 32) & 0xFFFFFFC0);
                }
                if ((int)((((v60 >> 4) + v56 + 32) & 0xFFFFFFC0) -
                          ((v60 >> 4) + v56)) >= 0) {
                  v62 = (((v60 >> 4) + v56 + 32) & 0xFFFFFFC0) -
                        ((v60 >> 4) + v56);
                }
                else {
                  v62 =
                      (v60 >> 4) + v56 - (((v60 >> 4) + v56 + 32) & 0xFFFFFFC0);
                }
                v75 = v61 >= v62;
                v63 = v60 >> 3;
                if (v75) {
                  v64 = (((v60 >> 4) + v56 + 32) & 0xFFFFFFC0) -
                        ((v60 >> 4) + v56);
                }
                else {
                  v64 = ((v56 - (v60 >> 4) + 32) & 0xFFFFFFC0) -
                        (v56 - (v60 >> 4));
                }
                v59 = v64 + v56;
                v29[7] = v59;
                v29[8] = v63;
              }
              if (v57 <= 54) {
                v72 = *v31;
              }
              else {
                v65 = 7 * v57 + 4;
                v66 = v65 >> 4;
                v67 = v65 >> 3;
                v68 = ((v58 - v66 + 32) & 0xFFFFFFC0) - (v58 - v66);
                v69 = ((v66 + v58 + 32) & 0xFFFFFFC0) - (v66 + v58);
                if (v68 >= 0) {
                  v70 = v68;
                }
                else {
                  v70 = -v68;
                }
                if (v69 >= 0) {
                  v71 = v69;
                }
                else {
                  v71 = -v69;
                }
                if (v70 < v71) {
                  v69 = v68;
                }
                v72 = v69 + v58;
                *v31 = v72;
                v31[1] = v67;
                v59 = v29[7];
              }
              v77 = v59 <= v72;
              if (v59 <= v72) {
                v78 = i;
              }
              else {
                v78 = v30;
              }
              if (v77) {
                v79 = v30;
              }
              else {
                v79 = i;
              }
              v80 = a2[12 * v78 + 7] + (signed __int32)a2[12 * v78 + 8] / 2;
              v81 = a2[12 * v79 + 7] - (signed __int32)a2[12 * v79 + 8] / 2;
              v82 = v81 - v80;
              if (v81 < v80) {
                goto LABEL_115;
              }
              v83 = v80 & 0xFFFFFFC0;
              v84 = v81 & 0xFFFFFFC0;
              if (v80 == (v80 & 0xFFFFFFC0)) {
                if (v81 == v84) {
                  if (v82 > 63) {
                    goto LABEL_36;
                  }
                }
                else {
                LABEL_114:
                  if (v82 > 47) {
                    goto LABEL_36;
                  }
                }
              LABEL_115:
                v29[7] = v56;
                *v31 = v58;
                v29[8] = v55;
                v31[1] = v57;
                goto LABEL_36;
              }
              if (v81 == v84 || v83 == v84) {
                goto LABEL_114;
              }
              if (v84 == v83 + 64) {
                v85 = v81 & 0x3F;
                v86 = v80 & 0x3F;
                v87 = v85 <= 0x27 || v86 >= 0x19;
                v88 = !v87;
                if (v85 <= 0x2F && v86 >= 0x11 && !v88) {
                  goto LABEL_115;
                }
              }
            }
          }
        }
      LABEL_36:
        ++v30;
        v31 += 12;
      } while (v4 != v30);
    }
  }
  return result;
}

__int64 nn_fontll_itype_44bd80(unsigned __int8 a1, int a2, int a3, __int64 a4,
                               __int64 a5, __int64 a6)
{
  __int64 v6;
  int v7;
  __int64 v8;
  char v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  signed int v18;
  signed int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  signed int v23;
  signed int v24;
  unsigned int v25;
  unsigned int v26;
  _DWORD* v27;
  int v28;
  int v29;
  signed int v30;
  signed int v31;
  unsigned int v32;
  unsigned int v33;
  __int64 i;
  unsigned __int16* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  unsigned __int16* j;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  unsigned __int16* k;
  __int64 v45;
  int** v46;
  int v47;
  __int64* v48;
  __int64 result;
  __int64* v50;
  int** v51;
  __int64 v52;
  int* v53;
  int* v54;
  int v55;
  int v56;
  int v57;
  int v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  __int64 v65;
  int v66;
  int v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  int v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  char v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned int v86;
  unsigned int v87;
  unsigned __int16 v88;
  unsigned __int16 v89;
  int v90;
  __int64 v91;
  int v92;
  unsigned __int16* v93;
  int v94;
  int v95;
  int v96;
  bool v97;
  _DWORD* v98;
  __int64 v99;
  int v100;
  __int64 v101;
  int v102;
  int v103;
  int v104;
  int v107;
  unsigned __int16* v108;
  int v109;
  int v110;
  int v111;
  _DWORD* v113;
  __int64 v114;
  int v115;
  __int64 v116;
  int v117;
  int v118;
  int v119;
  __int64 v122;
  __int64 v123;
  __int64* v124;
  char v125;
  __int64 v126;
  __int64 v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  int v132;
  unsigned int v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  int* v139;
  int* v140;
  int v141;
  int v142;
  bool v143;
  int v144;
  int v145;
  bool v146;
  int v147;
  int v148;
  int v149;
  bool v150;
  int v151;
  int v152;
  int v153;
  __int64 v154;
  unsigned __int16* v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  int v159;
  __int64 v160;
  __int64 v161;
  int v162;
  __int64 v163;
  __int64 v164;
  unsigned __int16* v165;
  __int64 v166;
  int v167;
  __int64 v168;
  int* v169;
  int v170;
  int v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  unsigned int v177;
  unsigned int v178;
  unsigned __int16 v179;
  unsigned int v180;
  int v181;
  unsigned __int16 v182;
  __int64 v183;
  unsigned __int16 v184;
  int v185;
  int v186;
  int v187;
  bool v188;
  bool v189;
  int v190;
  int v191;
  __int64 v192;
  int* v193;
  __int64 v194;
  __int64 v195;
  _DWORD* v196;
  int* v197;
  int v198;
  unsigned int v199;
  _DWORD* v200;
  __int64 v201;
  int v202;
  int v203;
  __int64 v204;
  _DWORD* v205;
  int v206;
  int v207;
  unsigned int v208;
  int v209;
  __int64 v210;
  int v211;
  _DWORD* v212;
  int v213;
  int v214;
  int v215;
  int v216;
  __int64 v217;
  int v218;
  int v219;
  __int64 v220;
  int v221;
  unsigned int v222;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  int* v231;
  __int64 v232;
  __int64 v233;
  int v234;
  int v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  int* v240;
  int v241;
  int v242;
  __int64 v243;
  __int64 v244;
  unsigned __int16* v245;
  unsigned __int16* v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  _DWORD* v250;
  __int64 v251;
  int* v252;
  int v253;
  __int64 v254;
  int* v255;
  int v256;
  __int64 v257;
  int* v258;
  int v259;
  unsigned __int16* v260;
  unsigned __int16* v261;
  __int64 v262;
  unsigned int v263;
  __int64 v264;
  unsigned int v265;
  _DWORD* v266;
  __int64 v267;
  unsigned __int8 v268;
  __int64 v269;
  __int64 v271;
  __int64 v273;
  unsigned __int16* v274;
  char v275;
  int v276;
  __int64 v277;
  __int64 v278;
  int v279;
  __int64 v280;
  int v281;
  __int64 v282;
  unsigned int v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  _DWORD* v289;
  char v290;
  __int64 v291;
  __int64 v292;
  int v293;
  __int64 v294;
  __int64 v295;
  int v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;

  v6 = *(_QWORD*)(a5 + 72);
  v7 = a1;
  v8 = 8;
  if (a1 == 120) {
    v10 = 1;
  }
  else {
    v10 = 2;
  }
  if (a1 == 120) {
    v8 = 0;
  }
  if (a3 < 1) {
    goto LABEL_52;
  }
  v11 = *(_QWORD*)(a5 + v8);
  if (a3 != 1) {
    v13 = (int*)(a4 + 80);
    v14 = 0;
    while (1) {
      v15 = *(v13 - 13);
      if (v15 == *(v13 - 14)) {
        break;
      }
      v16 = *(v13 - 1);
      if (v16 == *(v13 - 2)) {
        goto LABEL_23;
      }
    LABEL_10:
      v14 -= 2;
      v13 += 24;
      if (-(__int64)(a3 & 0x7FFFFFFE) == v14) {
        v12 = -v14;
        if ((a3 & 1) != 0) {
          goto LABEL_33;
        }
        goto LABEL_43;
      }
    }
    v17 = *(v13 - 12) >> 1;
    v18 = ((v15 - v17 + 32) & 0xFFFFFFC0) - (v15 - v17);
    v19 = ((v17 + v15 + 32) & 0xFFFFFFC0) - (v17 + v15);
    if (v18 >= 0) {
      v20 = v18;
    }
    else {
      v20 = -v18;
    }
    if (v19 >= 0) {
      v21 = v19;
    }
    else {
      v21 = -v19;
    }
    if (v20 < v21) {
      v19 = v18;
    }
    *(v13 - 13) = v19 + v15;
    v16 = *(v13 - 1);
    if (v16 != *(v13 - 2)) {
      goto LABEL_10;
    }
  LABEL_23:
    v22 = *v13 >> 1;
    v23 = ((v16 - v22 + 32) & 0xFFFFFFC0) - (v16 - v22);
    v24 = ((v22 + v16 + 32) & 0xFFFFFFC0) - (v22 + v16);
    if (v23 >= 0) {
      v25 = v23;
    }
    else {
      v25 = -v23;
    }
    if (v24 >= 0) {
      v26 = v24;
    }
    else {
      v26 = -v24;
    }
    if (v25 < v26) {
      v24 = v23;
    }
    *(v13 - 1) = v24 + v16;
    goto LABEL_10;
  }
  v12 = 0;
LABEL_33:
  v27 = (_DWORD*)(a4 + 48 * v12);
  v28 = v27[7];
  if (v28 == v27[6]) {
    v29 = (int)v27[8] >> 1;
    v30 = ((v28 - v29 + 32) & 0xFFFFFFC0) - (v28 - v29);
    v31 = ((v29 + v28 + 32) & 0xFFFFFFC0) - (v29 + v28);
    if (v30 >= 0) {
      v32 = v30;
    }
    else {
      v32 = -v30;
    }
    if (v31 >= 0) {
      v33 = v31;
    }
    else {
      v33 = -v31;
    }
    if (v32 < v33) {
      v31 = v30;
    }
    v27[7] = v31 + v28;
  }
LABEL_43:
  for (i = 0; i != a3; ++i) {
    v35 = (unsigned __int16*)(a4 + 48 * i);
    v36 = *v35;
    v37 = v35[1];
    if (((unsigned __int8)v10 &
         (unsigned __int8)(*(_BYTE*)(v6 + v37) | *(_BYTE*)(v6 + v36) |
                           *(_BYTE*)(v6 + v35[2]) | *(_BYTE*)(v6 + v35[3]))) ==
        0) {
      v38 = *((_DWORD*)v35 + 7) - (signed __int32)*((_DWORD*)v35 + 8) / 2;
      *(_DWORD*)(v11 + 4 * v36) = v38;
      *(_BYTE*)(v6 + v36) |= v10;
      *(_DWORD*)(v11 + 4 * v37) = v38;
      *(_BYTE*)(v6 + v37) |= v10;
      for (j = *((unsigned __int16**)v35 + 1); j != nullptr;
           j = *((unsigned __int16**)j + 1)) {
        v40 = *j;
        *(_BYTE*)(v6 + v40) |= v10;
        *(_DWORD*)(v11 + 4 * v40) = v38;
      }
      v41 = v35[3];
      v42 = *((_DWORD*)v35 + 7) + (signed __int32)*((_DWORD*)v35 + 8) / 2;
      v43 = v35[2];
      *(_DWORD*)(v11 + 4 * v43) = v42;
      *(_BYTE*)(v6 + v43) |= v10;
      *(_DWORD*)(v11 + 4 * v41) = v42;
      *(_BYTE*)(v6 + v41) |= v10;
      for (k = *((unsigned __int16**)v35 + 2); k != nullptr;
           k = *((unsigned __int16**)k + 1)) {
        v45 = *k;
        *(_BYTE*)(v6 + v45) |= v10;
        *(_DWORD*)(v11 + 4 * v45) = v42;
      }
    }
  }
  v6 = *(_QWORD*)(a5 + 72);
LABEL_52:
  v46 = (int**)(a5 + 16);
  if (v7 == 120) {
    v47 = 1;
  }
  else {
    v47 = 2;
  }
  v48 = (__int64*)(a5 + 8);
  result = *(unsigned __int16*)(*(_QWORD*)(a5 + 64) +
                                2LL * *(unsigned __int16*)(a5 + 80) - 2);
  v50 = (__int64*)(a5 + 24);
  if (v7 == 120) {
    v48 = (__int64*)a5;
    v51 = (int**)(a5 + 24);
  }
  else {
    v51 = (int**)(a5 + 16);
  }
  if (v7 != 120) {
    v46 = (int**)(a5 + 24);
  }
  v52 = *v48;
  v53 = *v46;
  v54 = *v51;
  v55 = **v46;
  v56 = **v51;
  if (*(_WORD*)(*(_QWORD*)(a5 + 64) + 2LL * *(unsigned __int16*)(a5 + 80) -
                2) != 0) {
    if ((_DWORD)result == 1) {
      v57 = 0;
      v58 = 0;
      v59 = 1;
      v60 = v56;
      v61 = v55;
    }
    else {
      v139 = v54 + 2;
      v140 = v53 + 2;
      v59 = 1;
      v57 = 0;
      v58 = 0;
      v60 = v56;
      v61 = v55;
      do {
        v144 = *(v139 - 1);
        if (v144 <= v60) {
          v145 = v60;
        }
        else {
          v145 = *(v139 - 1);
        }
        v146 = v144 < v56;
        if (v144 < v56) {
          v56 = *(v139 - 1);
        }
        v147 = *(v140 - 1);
        if (!v146) {
          v60 = v145;
        }
        if (v147 == v55 && ((unsigned __int8)v47 & *(_BYTE*)(v6 + v59)) != 0) {
          v58 = v59;
        }
        else if (v147 == v61 &&
                 ((unsigned __int8)v47 & *(_BYTE*)(v6 + v59)) != 0) {
          v57 = v59;
        }
        else {
          if (v147 <= v61) {
            v148 = v57;
          }
          else {
            v148 = v59;
          }
          if (v147 <= v61) {
            v149 = v61;
          }
          else {
            v149 = *(v140 - 1);
          }
          v150 = v147 < v55;
          if (v147 >= v55) {
            v57 = v148;
          }
          else {
            v58 = v59;
          }
          if (v147 < v55) {
            v55 = *(v140 - 1);
          }
          if (!v150) {
            v61 = v149;
          }
        }
        v151 = *v139;
        if (*v139 <= v60) {
          v152 = v60;
        }
        else {
          v152 = *v139;
        }
        if (v151 >= v56) {
          v60 = v152;
        }
        v153 = *v140;
        if (v151 < v56) {
          v56 = *v139;
        }
        if (v153 == v55 &&
            ((unsigned __int8)v47 & *(_BYTE*)(v6 + v59 + 1)) != 0) {
          v58 = v59 + 1;
        }
        else if (v153 == v61 &&
                 ((unsigned __int8)v47 & *(_BYTE*)(v6 + v59 + 1)) != 0) {
          v57 = v59 + 1;
        }
        else {
          if (v153 <= v61) {
            v141 = v57;
          }
          else {
            v141 = v59 + 1;
          }
          if (v153 <= v61) {
            v142 = v61;
          }
          else {
            v142 = *v140;
          }
          v143 = v153 < v55;
          if (v153 >= v55) {
            v57 = v141;
          }
          else {
            v58 = v59 + 1;
          }
          if (v153 < v55) {
            v55 = *v140;
          }
          if (!v143) {
            v61 = v142;
          }
        }
        v59 += 2;
        v139 += 2;
        v140 += 2;
      } while (v59 - ((unsigned __int16)result & 0xFFFE) != 1);
    }
    if ((result & 1) != 0) {
      result = (unsigned int)v54[v59];
      v62 = v53[v59];
      if ((int)result <= v60) {
        v63 = v60;
      }
      else {
        v63 = v54[v59];
      }
      if ((int)result >= v56) {
        v60 = v63;
      }
      else {
        v56 = v54[v59];
      }
      if (v62 == v55 && (result = *(unsigned __int8*)(v6 + v59),
                         (v47 & (unsigned int)result) != 0)) {
        v58 = v59;
      }
      else if (v62 == v61 &&
               ((unsigned __int8)v47 & *(_BYTE*)(v6 + v59)) != 0) {
        v57 = v59;
      }
      else if (v62 >= v55) {
        if (v62 > v61) {
          v57 = v59;
          v61 = v62;
        }
      }
      else {
        v58 = v59;
        v55 = v62;
      }
    }
  }
  else {
    v58 = 0;
    v57 = 0;
    v61 = v55;
    v60 = v56;
  }
  v64 = a3 + 2;
  v65 = a4 + 48LL * a3;
  *(_WORD*)(v65 + 6) = v58;
  *(_WORD*)(v65 + 4) = v58;
  *(_WORD*)(v65 + 2) = v58;
  *(_WORD*)v65 = v58;
  *(_DWORD*)(v65 + 24) = v55;
  v66 = *(_DWORD*)(v52 + 4LL * v58);
  *(_DWORD*)(v65 + 36) = v56;
  *(_DWORD*)(v65 + 40) = v60;
  *(_QWORD*)(v65 + 8) = 0;
  *(_QWORD*)(v65 + 16) = 0;
  *(_WORD*)(v65 + 54) = v57;
  *(_WORD*)(v65 + 52) = v57;
  *(_WORD*)(v65 + 50) = v57;
  *(_WORD*)(v65 + 48) = v57;
  *(_DWORD*)(v65 + 72) = v61;
  *(_DWORD*)(v65 + 28) = v66;
  *(_DWORD*)(v65 + 32) = 1;
  v67 = *(_DWORD*)(v52 + 4LL * v57);
  *(_DWORD*)(v65 + 84) = v56;
  *(_DWORD*)(v65 + 88) = v60;
  *(_QWORD*)(v65 + 56) = 0;
  *(_QWORD*)(v65 + 64) = 0;
  *(_DWORD*)(v65 + 76) = v67;
  *(_DWORD*)(v65 + 80) = 1;
  if ((a3 & 0x80000000) == 0) {
    v68 = (__int64*)(a4 + 24);
    v69 = 1;
    if (v64 <= 2) {
      v70 = 2;
    }
    else {
      v70 = (unsigned int)v64;
    }
    do {
      v72 = (__int64*)(a4 + 48 * v69);
      v297 = *v72;
      v298 = v72[1];
      v299 = v72[2];
      v73 = *((_DWORD*)v72 + 6);
      v294 = *(__int64*)((char*)v72 + 28);
      v295 = *(__int64*)((char*)v72 + 36);
      v74 = v68;
      v296 = *((_DWORD*)v72 + 11);
      v75 = v69;
      while ((signed __int32)*(_DWORD*)v74 > v73) {
        v76 = *v74;
        --v75;
        v74[5] = *(v74 - 1);
        v74[6] = v76;
        v77 = v74[2];
        v74[7] = v74[1];
        v74[8] = v77;
        v78 = *(v74 - 2);
        v74[3] = *(v74 - 3);
        v74[4] = v78;
        v74 -= 6;
        if (v75 + 1 <= 1) {
          LODWORD(v75) = 0;
          break;
        }
      }
      v71 = a4 + 48LL * (int)v75;
      ++v69;
      v68 += 6;
      *(_DWORD*)(v71 + 24) = v73;
      *(_QWORD*)v71 = v297;
      *(_QWORD*)(v71 + 8) = v298;
      *(_QWORD*)(v71 + 16) = v299;
      *(_QWORD*)(v71 + 28) = v294;
      *(_QWORD*)(v71 + 36) = v295;
      *(_DWORD*)(v71 + 44) = v296;
    } while (v69 != v70);
  }
  if (a2 != 7) {
    v123 = *(_QWORD*)(a5 + 64);
    v122 = *(_QWORD*)(a5 + 72);
    v124 = (__int64*)(a5 + 8);
    if (a1 == 120) {
      v125 = 1;
    }
    else {
      v125 = 2;
    }
    if (a1 == 120) {
      v124 = (__int64*)a5;
    }
    v126 = *v124;
    v127 = *(_QWORD*)(*(_QWORD*)(a6 + 64) + 360LL);
    v285 = *(_QWORD*)(a5 + 56);
    v267 = *(unsigned __int16*)(a5 + 80);
    if (a1 == 120) {
      v128 = (__int64*)(a5 + 24);
    }
    else {
      v128 = (__int64*)(a5 + 16);
    }
    if (a1 == 120) {
      v50 = (__int64*)(a5 + 16);
    }
    v129 = *v50;
    v130 = *v128;
    if (v64 < 1) {
      LODWORD(v154) = 0;
    LABEL_246:
      if ((_DWORD)v267 != 0) {
        v175 = (int)v154;
        v176 = 0;
        v283 = 0;
        v275 = v125;
        v271 = v123;
        v273 = v129;
        v287 = v127 + 12;
        v279 = 0x7FFFFFFF;
        v281 = 0x7FFFFFFF;
        v269 = v130;
        v293 = (int)v154 / 2;
        v289 = (_DWORD*)(v127 + 4 + 16LL * ((int)v154 / 2));
        v291 = v127 + 4;
        do {
          v177 = *(unsigned __int16*)(v285 + 2 * v176);
          v178 = *(unsigned __int16*)(v123 + 2 * v176);
          if (v177 < v178) {
            v179 = *(_WORD*)(v123 + 2 * v176);
            v277 = v176;
            do {
              v182 = v179;
              v179 = v177;
              v183 = (unsigned __int16)v177;
              if (((unsigned __int8)v125 &
                   *(_BYTE*)(v122 + (unsigned __int16)v177)) == 0) {
                v184 = (unsigned __int16)v177 == (unsigned __int16)v178
                           ? *(_WORD*)(v285 + 2 * v176)
                           : v177 + 1;
                v185 = *(_DWORD*)(v129 + 4LL * v182);
                v186 = *(_DWORD*)(v129 + 4LL * (unsigned __int16)v177);
                v187 = *(_DWORD*)(v129 + 4LL * v184);
                v188 = v185 <= v186 && v187 < v186;
                if (v188 ||
                    (v185 >= v186 ? (v189 = v187 <= v186) : (v189 = true),
                     !v189)) {
                  v190 = *(_DWORD*)(v130 + 4 * v183);
                  if ((signed __int32)*v289 >= v186) {
                    v191 = 0;
                  }
                  else {
                    v191 = v293;
                  }
                  v192 = 16LL * v191;
                  v193 = (int*)(v291 + v192);
                  v194 = v191 - 1LL;
                  v195 = v191 + 1LL;
                  v196 = (_DWORD*)(v287 + v192);
                  do {
                    v197 = v193;
                    v198 = *v193;
                    v193 += 4;
                    v199 = v191;
                    v200 = v196;
                    v201 = v195;
                    ++v194;
                    ++v191;
                    v196 += 4;
                    ++v195;
                  } while (v198 < v186);
                  v202 = 0x7FFFFFFF;
                  v203 = -1;
                  v204 = 0;
                  v205 = v200;
                  result = v199;
                  do {
                    v206 = *(v205 - 2) - v186;
                    if (v206 >= v202) {
                      break;
                    }
                    v207 = *(v205 - 1);
                    if (v190 >= v207) {
                      if (v190 > (signed __int32)*v205) {
                        v206 = v206 + v190 - *v205;
                      }
                    }
                    else {
                      v206 = v206 - v190 + v207;
                    }
                    ++v204;
                    v205 += 4;
                    if (v206 < v202) {
                      v203 = result;
                      v202 = v206;
                    }
                    result = (unsigned int)(result + 1);
                  } while (v194 + v204 < v175);
                  v208 = *(unsigned __int16*)(v127 + 16LL * v203);
                  do {
                    v209 = *v197;
                    v197 -= 4;
                    v210 = v201;
                    v211 = v199;
                    v212 = v200;
                    --v201;
                    --v199;
                    v200 -= 4;
                  } while (v209 > v186);
                  v213 = 0x7FFFFFFF;
                  v214 = -1;
                  do {
                    v215 = v186 - *(v212 - 2);
                    if (v215 >= v213) {
                      break;
                    }
                    v216 = *(v212 - 1);
                    if (v190 >= v216) {
                      if (v190 > (signed __int32)*v212) {
                        v215 = v215 + v190 - *v212;
                      }
                    }
                    else {
                      v215 = v215 - v190 + v216;
                    }
                    --v210;
                    v212 -= 4;
                    if (v215 < v213) {
                      v214 = v211;
                      v213 = v215;
                    }
                    --v211;
                  } while (v210 > 0);
                  v217 = 16LL * v214;
                  v218 = *(_DWORD*)(v126 + 4LL * v208);
                  v219 = *(_DWORD*)(v129 + 4LL * v208);
                  v220 = *(unsigned __int16*)(v127 + v217);
                  v221 = *(_DWORD*)(v129 + 4 * v220);
                  v181 = *(_DWORD*)(v126 + 4 * v220);
                  v222 = v186 - v221;
                  if (v186 != v221 && v218 != v181 && v219 != v221) {
                    v225 = v122;
                    v226 = v127;
                    if (v281 != v208 || v279 != (_DWORD)v220) {
                      v180 = vardiv_64_plt((unsigned int)(v218 - v181),
                                           (unsigned int)(v219 - v221), 16);
                      v181 = *(_DWORD*)(v126 + 4 * v220);
                      v283 = v180;
                      v281 = v208;
                      v279 = v220;
                    }
                    result = varmul_64_plt(v222, v283, 16);
                    v127 = v226;
                    v122 = v225;
                    v123 = v271;
                    v129 = v273;
                    v125 = v275;
                    v181 += result;
                    v130 = v269;
                    v176 = v277;
                  }
                  *(_DWORD*)(v126 + 4 * v183) = v181;
                  *(_BYTE*)(v122 + v183) |= v125;
                  LOWORD(v178) = *(_WORD*)(v123 + 2 * v176);
                }
              }
              LOWORD(v177) = v183 + 1;
            } while ((unsigned __int16)(v183 + 1) <=
                     (unsigned int)(unsigned __int16)v178);
          }
          ++v176;
        } while (v176 != v267);
      }
      return result;
    }
    if (a3 == -1) {
      v131 = 0;
      v132 = 0;
    }
    else {
      v155 = (unsigned __int16*)(a4 + 48);
      v154 = 0;
      v132 = 0;
      do {
        v156 = *(v155 - 24);
        v157 = v127 + 16LL * v132;
        v158 = v132 + 1LL;
        *(_WORD*)v157 = v156;
        *(_DWORD*)(v157 + 4) = *(_DWORD*)(v129 + 4 * v156);
        *(_DWORD*)(v157 + 8) = *((_DWORD*)v155 - 3);
        *(_DWORD*)(v157 + 12) = *((_DWORD*)v155 - 2);
        v159 = *(v155 - 22);
        if (*(v155 - 24) != v159) {
          v158 = v127 + 16 * v158;
          *(_WORD*)v158 = v159;
          *(_DWORD*)(v158 + 4) = *(_DWORD*)(v129 + 4LL * *(v155 - 22));
          *(_DWORD*)(v158 + 8) = *((_DWORD*)v155 - 3);
          *(_DWORD*)(v158 + 12) = *((_DWORD*)v155 - 2);
          LODWORD(v158) = v132 + 2;
        }
        v160 = *v155;
        v161 = v127 + 16LL * (int)v158;
        *(_WORD*)v161 = v160;
        *(_DWORD*)(v161 + 4) = *(_DWORD*)(v129 + 4 * v160);
        *(_DWORD*)(v161 + 8) = *((_DWORD*)v155 + 9);
        *(_DWORD*)(v161 + 12) = *((_DWORD*)v155 + 10);
        v132 = v158 + 1;
        v162 = v155[2];
        if (*v155 != v162) {
          v132 = v158 + 2;
          v163 = v127 + 16 * ((int)v158 + 1LL);
          *(_WORD*)v163 = v162;
          *(_DWORD*)(v163 + 4) = *(_DWORD*)(v129 + 4LL * v155[2]);
          *(_DWORD*)(v163 + 8) = *((_DWORD*)v155 + 9);
          *(_DWORD*)(v163 + 12) = *((_DWORD*)v155 + 10);
        }
        v154 -= 2;
        v155 += 48;
      } while (-(__int64)(v64 & 0x7FFFFFFE) != v154);
      v131 = -v154;
      LODWORD(v154) = v132;
      if ((v64 & 1) == 0) {
      LABEL_237:
        if ((int)v154 >= 2) {
          if ((_DWORD)v154 == 2) {
            v168 = 1;
          }
          else {
            v227 = v127 + 32;
            v168 = 1;
            v228 = 0;
            v229 = v127;
            do {
              v231 = (int*)(v127 + 16 * v168);
              v232 = v229;
              v233 = v168;
              v234 = *v231;
              v235 = v231[1];
              v236 = *((_QWORD*)v231 + 1);
              while ((signed __int32)*(_DWORD*)(v232 + 4) > v235) {
                v237 = *(_QWORD*)(v232 + 8);
                --v233;
                *(_QWORD*)(v232 + 16) = *(_QWORD*)v232;
                *(_QWORD*)(v232 + 24) = v237;
                v232 -= 16;
                if (v233 + 1 <= 1) {
                  LODWORD(v233) = 0;
                  break;
                }
              }
              result = v227;
              v238 = v127 + 16LL * (int)v233;
              *(_DWORD*)v238 = v234;
              *(_DWORD*)(v238 + 4) = v235;
              *(_QWORD*)(v238 + 8) = v236;
              v239 = v168 + 1;
              v240 = (int*)(v127 + 16 * (v168 + 1));
              v241 = *v240;
              v242 = v240[1];
              v243 = *((_QWORD*)v240 + 1);
              while ((signed __int32)*(_DWORD*)(result - 12) > v242) {
                --v239;
                v244 = *(_QWORD*)(result - 8);
                *(_QWORD*)result = *(_QWORD*)(result - 16);
                *(_QWORD*)(result + 8) = v244;
                result -= 16;
                if (v239 + 1 <= 1) {
                  LODWORD(v239) = 0;
                  break;
                }
              }
              v168 += 2;
              v228 += 2;
              v229 += 32;
              v227 += 32;
              v230 = v127 + 16LL * (int)v239;
              *(_DWORD*)v230 = v241;
              *(_DWORD*)(v230 + 4) = v242;
              *(_QWORD*)(v230 + 8) = v243;
            } while (v228 !=
                     (((unsigned int)v154 - 1LL) & 0xFFFFFFFFFFFFFFFELL));
          }
          if ((((_BYTE)v154 - 1) & 1) != 0) {
            v169 = (int*)(v127 + 16 * v168);
            v170 = *v169;
            v171 = v169[1];
            v172 = *((_QWORD*)v169 + 1);
            while (*(v169 - 3) > v171) {
              --v168;
              v173 = *((_QWORD*)v169 - 1);
              *(_QWORD*)v169 = *((_QWORD*)v169 - 2);
              *((_QWORD*)v169 + 1) = v173;
              v169 -= 4;
              if (v168 + 1 <= 1) {
                LODWORD(v168) = 0;
                break;
              }
            }
            v174 = v127 + 16LL * (int)v168;
            *(_DWORD*)v174 = v170;
            *(_DWORD*)(v174 + 4) = v171;
            *(_QWORD*)(v174 + 8) = v172;
          }
        }
        goto LABEL_246;
      }
    }
    v164 = v127 + 16LL * v132;
    v165 = (unsigned __int16*)(a4 + 48 * v131);
    v154 = v132 + 1LL;
    v166 = *v165;
    *(_WORD*)v164 = v166;
    *(_DWORD*)(v164 + 4) = *(_DWORD*)(v129 + 4 * v166);
    *(_DWORD*)(v164 + 8) = *((_DWORD*)v165 + 9);
    *(_DWORD*)(v164 + 12) = *((_DWORD*)v165 + 10);
    v167 = v165[2];
    if (*v165 != v167) {
      v154 = v127 + 16 * v154;
      *(_WORD*)v154 = v167;
      *(_DWORD*)(v154 + 4) = *(_DWORD*)(v129 + 4LL * v165[2]);
      *(_DWORD*)(v154 + 8) = *((_DWORD*)v165 + 9);
      *(_DWORD*)(v154 + 12) = *((_DWORD*)v165 + 10);
      LODWORD(v154) = v132 + 2;
    }
    goto LABEL_237;
  }
  v79 = (__int64*)(a5 + 8);
  v268 = a1;
  v286 = *(unsigned __int16*)(a5 + 80);
  if (a1 == 120) {
    v80 = 1;
  }
  else {
    v80 = 2;
  }
  if (a1 == 120) {
    v81 = (__int64*)(a5 + 24);
  }
  else {
    v81 = (__int64*)(a5 + 16);
  }
  if (a1 == 120) {
    v79 = (__int64*)a5;
    v50 = (__int64*)(a5 + 16);
  }
  if (*(_WORD*)(a5 + 80) != 0 && v64 >= 1) {
    v82 = *v50;
    v83 = *v79;
    v84 = 0;
    v290 = v80;
    v276 = a3 + 1;
    v274 = (unsigned __int16*)(a4 + 48LL * (a3 + 1));
    v85 = *(_QWORD*)(a5 + 72);
    v278 = *v81;
    v280 = a4 + 40;
    v282 = *(_QWORD*)(a5 + 64);
    v284 = *(_QWORD*)(a5 + 56);
    v288 = v85;
    do {
      v292 = v84;
      v86 = *(unsigned __int16*)(v284 + 2 * v84);
      v87 = *(unsigned __int16*)(v282 + 2 * v84);
      if (v86 != v87) {
        v88 = *(_WORD*)(v284 + 2 * v84);
        v89 = v88;
        if (v86 <= v87) {
          do {
            while (1) {
              v90 = *(_DWORD*)(v82 + 4LL * (unsigned __int16)v86);
              if (v90 >= (signed __int32)*(_DWORD*)(v82 + 4LL * v89)) {
                break;
              }
              v89 = v86++;
              if (v87 < (unsigned __int16)v86) {
                goto LABEL_104;
              }
            }
            if (v90 > (signed __int32)*(_DWORD*)(v82 + 4LL * v88)) {
              v88 = v86;
            }
            ++v86;
          } while (v87 >= (unsigned __int16)v86);
        }
      LABEL_104:
        v91 = v88;
        if (((unsigned __int8)v80 & *(_BYTE*)(v85 + v88)) == 0) {
          v107 = *(_DWORD*)(v82 + 4LL * v88);
          v108 = v274;
          v109 = *(_DWORD*)(v278 + 4LL * v88);
          v110 = v276;
          do {
            if (v107 >= (signed __int32)*(_DWORD*)(v82 + 4LL * *v108) &&
                v109 >= (signed __int32)*((_DWORD*)v108 + 9)) {
              v111 = v110 + 1;
              if (v109 <= (signed __int32)*((_DWORD*)v108 + 10) && v111 < v64) {
                v113 = (_DWORD*)(v280 + 48LL * (unsigned int)v111);
                do {
                  v114 = *((unsigned __int16*)v113 - 18);
                  v115 = *(_DWORD*)(v82 + 4 * v114);
                  if (v107 <= v115 && v109 >= (signed __int32)*(v113 - 1) &&
                      v109 <= (signed __int32)*v113) {
                    v116 = *v108;
                    v117 = *(_DWORD*)(v83 + 4 * v114);
                    v118 = *(_DWORD*)(v83 + 4 * v116);
                    v119 = *(_DWORD*)(v82 + 4 * v116);
                    result = (unsigned int)(v117 - v118);
                    if (v117 != v118 && v107 != v119 && v115 != v119) {
                      result =
                          muldiv_64_plt(result, (unsigned int)(v107 - v119),
                                        (unsigned int)(v115 - v119));
                      v85 = v288;
                      v80 = v290;
                      v118 += result;
                    }
                    *(_DWORD*)(v83 + 4 * v91) = v118;
                    v111 = v64;
                    *(_BYTE*)(v85 + v91) |= v80;
                    v110 = -1;
                  }
                  ++v111;
                  v113 += 12;
                } while (v111 < v64);
              }
            }
            v108 -= 24;
            v97 = v110-- <= 0;
          } while (!v97);
        }
        if (((unsigned __int8)v80 & *(_BYTE*)(v85 + v89)) == 0) {
          v92 = *(_DWORD*)(v82 + 4LL * v89);
          v93 = v274;
          v94 = *(_DWORD*)(v278 + 4LL * v89);
          v95 = v276;
          do {
            if (v92 >= (signed __int32)*(_DWORD*)(v82 + 4LL * *v93) &&
                v94 >= (signed __int32)*((_DWORD*)v93 + 9)) {
              v96 = v95 + 1;
              v97 = v94 <= (signed __int32)*((_DWORD*)v93 + 10) && v96 < v64;
              if (v97) {
                v98 = (_DWORD*)(v280 + 48LL * (unsigned int)v96);
                do {
                  v99 = *((unsigned __int16*)v98 - 18);
                  v100 = *(_DWORD*)(v82 + 4 * v99);
                  if (v92 <= v100 && v94 >= (signed __int32)*(v98 - 1) &&
                      v94 <= (signed __int32)*v98) {
                    v101 = *v93;
                    v102 = *(_DWORD*)(v83 + 4 * v99);
                    v103 = *(_DWORD*)(v83 + 4 * v101);
                    v104 = *(_DWORD*)(v82 + 4 * v101);
                    result = (unsigned int)(v102 - v103);
                    if (v102 != v103 && v92 != v104 && v100 != v104) {
                      result = muldiv_64_plt(result, (unsigned int)(v92 - v104),
                                             (unsigned int)(v100 - v104));
                      v85 = v288;
                      v80 = v290;
                      v103 += result;
                    }
                    *(_DWORD*)(v83 + 4LL * v89) = v103;
                    v96 = v64;
                    *(_BYTE*)(v85 + v89) |= v80;
                    v95 = -1;
                  }
                  ++v96;
                  v98 += 12;
                } while (v96 < v64);
              }
            }
            v93 -= 24;
            v97 = v95-- <= 0;
          } while (!v97);
        }
      }
      v84 = v292 + 1;
    } while (v292 + 1 != v286);
  }
  if (*(_WORD*)(*(_QWORD*)(a6 + 64) + 418LL) == 7 && v268 != 120) {
    v133 = *(unsigned __int16*)(a5 + 80);
    if (*(_WORD*)(a5 + 80) != 0) {
      v134 = v133 & 3;
      v136 = *(_QWORD*)(a5 + 56);
      v135 = *(_QWORD*)(a5 + 64);
      v137 = *(_QWORD*)(a5 + 8);
      if (v133 < 4) {
        v138 = 0;
      LABEL_329:
        if (v134 != 0) {
          v260 = (unsigned __int16*)(v136 + 2 * v138);
          v261 = (unsigned __int16*)(v135 + 2 * v138);
          do {
            while (1) {
              v263 = *v261++;
              v262 = v263;
              v265 = *v260++;
              v264 = v265;
              v266 = (_DWORD*)(v137 + 4 * v262);
              if (*v266 != *(v266 - 1)) {
                break;
              }
              *(_DWORD*)(v137 + 4 * v264) = *v266;
              if (--v134 == 0) {
                return result;
              }
            }
            *v266 = *(_DWORD*)(v137 + 4 * v264);
            --v134;
          } while (v134 != 0);
        }
        return result;
      }
      v245 = (unsigned __int16*)(v135 + 4);
      v246 = (unsigned __int16*)(v136 + 4);
      v247 = 0;
      v248 = -(__int64)((unsigned __int16)v133 & 0xFFFC);
      while (1) {
        v249 = *(v246 - 2);
        v250 = (_DWORD*)(v137 + 4LL * *(v245 - 2));
        if (*v250 == *(v250 - 1)) {
          *(_DWORD*)(v137 + 4 * v249) = *v250;
          v251 = *(v246 - 1);
          v252 = (int*)(v137 + 4LL * *(v245 - 1));
          v253 = *v252;
          if (*v252 != *(v252 - 1)) {
            goto LABEL_321;
          }
        LABEL_325:
          *(_DWORD*)(v137 + 4 * v251) = v253;
          v254 = *v246;
          v255 = (int*)(v137 + 4LL * *v245);
          v256 = *v255;
          if (*v255 == *(v255 - 1)) {
            goto LABEL_326;
          }
        LABEL_322:
          *v255 = *(_DWORD*)(v137 + 4 * v254);
          v257 = v246[1];
          v258 = (int*)(v137 + 4LL * v245[1]);
          result = (unsigned int)*(v258 - 1);
          v259 = *v258;
          if (*v258 != (_DWORD)result) {
            goto LABEL_327;
          }
        LABEL_318:
          *(_DWORD*)(v137 + 4 * v257) = v259;
          v247 -= 4;
          v245 += 4;
          v246 += 4;
          if (v248 == v247) {
            goto LABEL_328;
          }
        }
        else {
          *v250 = *(_DWORD*)(v137 + 4 * v249);
          v251 = *(v246 - 1);
          v252 = (int*)(v137 + 4LL * *(v245 - 1));
          v253 = *v252;
          if (*v252 == *(v252 - 1)) {
            goto LABEL_325;
          }
        LABEL_321:
          *v252 = *(_DWORD*)(v137 + 4 * v251);
          v254 = *v246;
          v255 = (int*)(v137 + 4LL * *v245);
          v256 = *v255;
          if (*v255 != *(v255 - 1)) {
            goto LABEL_322;
          }
        LABEL_326:
          *(_DWORD*)(v137 + 4 * v254) = v256;
          v257 = v246[1];
          v258 = (int*)(v137 + 4LL * v245[1]);
          result = (unsigned int)*(v258 - 1);
          v259 = *v258;
          if (*v258 == (_DWORD)result) {
            goto LABEL_318;
          }
        LABEL_327:
          *v258 = *(_DWORD*)(v137 + 4 * v257);
          v247 -= 4;
          v245 += 4;
          v246 += 4;
          if (v248 == v247) {
          LABEL_328:
            v138 = -v247;
            goto LABEL_329;
          }
        }
      }
    }
  }
  return result;
}

_DWORD* nn_fontll_itype_44cf60(_DWORD* result, int a2, unsigned __int16* a3,
                               __int64* a4, unsigned int a5)
{
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int* v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int* v29;
  int v30;
  int v31;
  _DWORD* v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  unsigned __int16* v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  unsigned int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  int v58;
  int v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  __int64 v66;
  unsigned int v67;
  _DWORD* v68;
  int* v69;
  int* v70;
  int v71;
  __int64 v72;
  __int64 v73;
  unsigned __int16* v74;
  __int64 v75;
  __int64 v76;
  int v77;
  int v78;
  __int64 v79;
  int v80;
  __int64 v81;
  int v82;
  int* v83;
  int v84;
  bool v85;
  _DWORD* v86;
  __int64 i;
  int v88;
  int v89;
  unsigned __int64 v90;
  unsigned __int16* v91;
  int v92;
  int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  int v97;
  _DWORD* v98;
  unsigned __int16* v99;

  if (*((_WORD*)a4 + 40) != 0) {
    v5 = *result;
    v6 = result[1];
    v7 = *(unsigned __int16*)(a4[8] + 2LL * ((unsigned int)*(
                                                 (unsigned __int16*)a4 + 40) -
                                             1));
    v9 = result[2];
    v8 = result[3];
    v10 = a5 > 0x380 && v9 - v8 < 32 ? 64 : (v9 - v8 + 32) & 0xFFFFFFC0;
    v11 = a5 > 0x380 && v5 - v6 < 32 ? 64 : (v5 - v6 + 32) & 0xFFFFFFC0;
    if (*(_WORD*)(a4[8] + 2LL * ((unsigned int)*((unsigned __int16*)a4 + 40) -
                                 1)) != 0) {
      v12 = (int*)a4[1];
      v13 = v7 & 7;
      v14 = *v12;
      if ((unsigned int)v7 >= 8) {
        v17 = (unsigned __int16)v7 & 0xFFF8;
        v18 = v12 + 4;
        v15 = 1;
        v16 = *v12;
        do {
          v19 = *(v18 - 3);
          v20 = *(v18 - 2);
          v15 += 8;
          if (v19 >= v14) {
            v21 = v14;
          }
          else {
            v21 = *(v18 - 3);
          }
          if (v19 > v16) {
            v16 = *(v18 - 3);
          }
          if (v20 >= v21) {
            v22 = v21;
          }
          else {
            v22 = *(v18 - 2);
          }
          if (v20 > v16) {
            v16 = *(v18 - 2);
          }
          v24 = *(v18 - 1);
          v23 = *v18;
          if (v24 < v22) {
            v22 = *(v18 - 1);
          }
          if (v24 > v16) {
            v16 = *(v18 - 1);
          }
          v25 = v18[1];
          if (v23 < v22) {
            v22 = *v18;
          }
          if (v23 > v16) {
            v16 = *v18;
          }
          if (v25 < v22) {
            v22 = v18[1];
          }
          if (v25 > v16) {
            v16 = v18[1];
          }
          v26 = v18[2];
          v27 = v18[3];
          if (v26 < v22) {
            v22 = v18[2];
          }
          if (v26 > v16) {
            v16 = v18[2];
          }
          v28 = v18[4];
          v18 += 8;
          if (v27 < v22) {
            v22 = v27;
          }
          if (v27 > v16) {
            v16 = v27;
          }
          if (v28 >= v22) {
            v14 = v22;
          }
          else {
            v14 = v28;
          }
          if (v28 > v16) {
            v16 = v28;
          }
          v17 -= 8;
        } while (v17 != 0);
      }
      else {
        v15 = 1;
        v16 = *v12;
      }
      if ((v7 & 7) != 0) {
        v29 = &v12[v15];
        do {
          v31 = *v29++;
          v30 = v31;
          if (v31 < v14) {
            v14 = v30;
          }
          if (v30 > v16) {
            v16 = v30;
          }
          --v13;
        } while (v13 != 0);
      }
      if (v16 != v14) {
        v32 = (_DWORD*)a4[3];
        v33 = (v8 + 32) & 0xFFFFFFC0;
        v34 = ((v5 - v8 + 38) & 0xFFFFFFC0) + v33;
        v35 = v34 - v11;
        if (a2 == 0) {
          v63 = v16 - v5;
          if (v16 - v5 < 0) {
            v63 = v5 - v16;
          }
          if (v63 >= 0x20) {
            v57 = v16;
          }
          else {
            v57 = ((v5 - v8 + 38) & 0xFFFFFFC0) + v33;
          }
          goto LABEL_117;
        }
        v36 = *a4;
        v37 = &a3[24 * a2];
        v38 = *(_DWORD*)(*a4 + 4LL * a3[1]);
        v39 = a5 / 6;
        v40 = *(_DWORD*)(*a4 + 4LL * *a3);
        if (v40 >= v38) {
          v41 = *(_DWORD*)(*a4 + 4LL * a3[1]);
        }
        else {
          v41 = *(_DWORD*)(*a4 + 4LL * *a3);
        }
        if (v40 <= v38) {
          v40 = *(_DWORD*)(*a4 + 4LL * a3[1]);
        }
        v42 = *(_DWORD*)(v36 + 4LL * a3[2]);
        v43 = *(_DWORD*)(v36 + 4LL * a3[3]);
        if (v42 >= v43) {
          v44 = *(_DWORD*)(v36 + 4LL * a3[3]);
        }
        else {
          v44 = *(_DWORD*)(v36 + 4LL * a3[2]);
        }
        if (v42 <= v43) {
          v42 = *(_DWORD*)(v36 + 4LL * a3[3]);
        }
        v45 = v40 + v42 - (v41 + v44);
        if (v45 < 0) {
          v45 = -v45;
        }
        v46 = *(_DWORD*)(v36 + 4LL * *(v37 - 23));
        v47 = (unsigned int)v45 >> 1;
        v48 = *(_DWORD*)(v36 + 4LL * *(v37 - 24));
        if (v48 >= v46) {
          v49 = *(_DWORD*)(v36 + 4LL * *(v37 - 23));
        }
        else {
          v49 = *(_DWORD*)(v36 + 4LL * *(v37 - 24));
        }
        if (v48 <= v46) {
          v48 = *(_DWORD*)(v36 + 4LL * *(v37 - 23));
        }
        v50 = *(_DWORD*)(v36 + 4LL * *(v37 - 22));
        v51 = *(_DWORD*)(v36 + 4LL * *(v37 - 21));
        if (v50 >= v51) {
          v52 = v51;
        }
        else {
          v52 = v50;
        }
        if (v50 > v51) {
          v51 = v50;
        }
        v53 = v48 + v51 - (v49 + v52);
        if (v53 < 0) {
          v53 = -v53;
        }
        if (v39 >= (unsigned int)v53 >> 1) {
          goto LABEL_95;
        }
        v54 = *((_DWORD*)v37 - 6) + *((_DWORD*)v37 - 4) / 2;
        v55 = v54 - v16;
        if (v54 - v16 < 0) {
          v55 = v16 - v54;
        }
        if (v55 > 0x2F) {
        LABEL_95:
          v58 = v16 - v5;
          if (v58 < 0) {
            v58 = -v58;
          }
          if ((unsigned int)v58 >= 0x20) {
            v57 = v16;
          }
          else {
            v57 = v34;
          }
          if (v47 <= v39) {
            goto LABEL_117;
          }
        }
        else {
          v56 = v54 - v6;
          if (v54 - v6 < 0) {
            v56 = v6 - v54;
          }
          if (v56 >= 0x20) {
            v57 = v16;
          }
          else {
            v57 = v35;
          }
          if (v56 < 0x20) {
            v16 = v54;
          }
          if (v47 <= v39) {
            goto LABEL_117;
          }
        }
        v59 = *((_DWORD*)a3 + 6) - *((_DWORD*)a3 + 8) / 2;
        v60 = v59 - v14;
        if (v59 - v14 < 0) {
          v60 = v14 - v59;
        }
        if (v60 <= 0xF) {
          v61 = v59 - v9;
          if (v61 < 0) {
            v61 = -v61;
          }
          if ((unsigned int)v61 >= 0x20) {
            v62 = v14;
          }
          else {
            v62 = v10 + v33;
          }
          if ((unsigned int)v61 < 0x20) {
            v14 = *((_DWORD*)a3 + 6) - *((_DWORD*)a3 + 8) / 2;
          }
          goto LABEL_122;
        }
      LABEL_117:
        v64 = v14 - v8;
        if (v64 < 0) {
          v64 = -v64;
        }
        if ((unsigned int)v64 >= 0x20) {
          v62 = v14;
        }
        else {
          v62 = v33;
        }
      LABEL_122:
        if (v16 != v57 || v14 != v62) {
          v95 = v34;
          v96 = v33;
          v97 = a2;
          v99 = a3;
          v98 = result;
          v94 = v57;
          v66 = v7 + 1;
          v67 = vardiv_64_plt(v57 - v62, (unsigned int)(v16 - v14), 16);
          v68 = v32;
          v69 = v32;
          v70 = v12;
          do {
            v71 = *v69++;
            --v66;
            *v70++ = varmul_64_plt(v67, (unsigned int)(v71 - v14), 16) + v62;
          } while (v66 != 0);
          v33 = v96;
          a2 = v97;
          result = v98;
          v32 = v68;
          a3 = v99;
          v57 = v94;
          v34 = v95;
          if (v97 >= 1) {
            v72 = v97 & 3;
            if ((unsigned int)v97 >= 4) {
              v74 = v99 + 48;
              v75 = 0;
              do {
                v75 -= 4;
                v76 = *(v74 - 22);
                v77 = v12[*(v74 - 46)] + v12[*(v74 - 48)];
                *((_DWORD*)v74 - 18) = v77 / 2;
                *((_DWORD*)v74 - 17) = v77 / 2;
                v78 = v12[v76] + v12[*(v74 - 24)];
                v79 = v74[2];
                v78 /= 2;
                *((_DWORD*)v74 - 6) = v78;
                *((_DWORD*)v74 - 5) = v78;
                v80 = v12[v79] + v12[*v74];
                v81 = v74[26];
                v80 /= 2;
                *((_DWORD*)v74 + 6) = v80;
                *((_DWORD*)v74 + 7) = v80;
                v82 = (v12[v81] + v12[v74[24]]) / 2;
                *((_DWORD*)v74 + 18) = v82;
                *((_DWORD*)v74 + 19) = v82;
                v74 += 96;
              } while (-(__int64)(v97 & 0x7FFFFFFC) != v75);
              v73 = -v75;
            }
            else {
              v73 = 0;
            }
            if ((v97 & 3) != 0) {
              v83 = (int*)&v99[24 * v73 + 14];
              do {
                --v72;
                v84 = (v12[*((unsigned __int16*)v83 - 12)] +
                       v12[*((unsigned __int16*)v83 - 14)]) /
                      2;
                *(v83 - 1) = v84;
                *v83 = v84;
                v83 += 12;
              } while (v72 != 0);
            }
          }
        }
        v85 = v62 == v33 || v57 == v34;
        if (v85 && a2 >= 1) {
          v86 = a3 + 16;
          for (i = (unsigned int)a2; i != 0; --i) {
            v88 = *v86 / 2;
            v89 = *(v86 - 2) - result[1] - v88;
            if (v89 < 0) {
              v89 = v88 - (*(v86 - 2) - result[1]);
            }
            if ((unsigned int)v89 > 0x1F) {
              break;
            }
            *(v86 - 1) = v88 + v35;
            v86 += 12;
          }
          v90 = (unsigned int)a2 + 1LL;
          v91 = &a3[24 * a2 - 12];
          do {
            v92 = *((_DWORD*)v91 + 2) / 2;
            v93 = v92 + *(_DWORD*)v91 - result[1];
            if (v93 < 0) {
              v93 = result[1] - (v92 + *(_DWORD*)v91);
            }
            if ((unsigned int)v93 > 0x1F) {
              break;
            }
            --v90;
            *((_DWORD*)v91 + 1) = v35 - v92;
            v91 -= 24;
          } while (v90 > 1);
        }
        return (_DWORD*)memcpy_plt(v32, v12, 4 * v7 + 4);
      }
    }
  }
  return result;
}

_DWORD* nn_fontll_itype_44d520(_DWORD* result, int a2, __int64 a3)
{
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  _DWORD* v8;
  unsigned int v9;
  int v10;
  __int64 i;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  if (a2 >= 1) {
    v3 = result[1];
    v4 = result[2];
    v5 = *result - v3 + 32;
    v6 = (v3 + 32) & 0xFFFFFFC0;
    v7 = (v4 + 32) & 0xFFFFFFC0;
    v8 = (_DWORD*)(a3 + 32);
    v9 = (v5 & 0xFFFFFFC0) + v6;
    v10 = v4 - ((v4 + 32 - result[3]) & 0xFFFFFFC0);
    for (i = (unsigned int)a2; i != 0; --i) {
      v13 = *(v8 - 2);
      v14 = *v8 / 2;
      if (result[1] - (v13 + v14) >= 0) {
        v15 = result[1] - (v13 + v14);
      }
      else {
        v15 = v13 + v14 - result[1];
      }
      v16 = v6;
      if (v15 < 0x20) {
        goto LABEL_13;
      }
      v17 = *result - (v13 + v14);
      v16 = v9;
      if (v17 < 0) {
        v17 = v13 + v14 - *result;
      }
      if ((unsigned int)v17 <= 0x1F) {
      LABEL_13:
        *(v8 - 1) = v16 - v14;
      }
      v18 = v13 - v14;
      v19 = result[2] - v18;
      if (v19 < 0) {
        v19 = v18 - result[2];
      }
      if ((unsigned int)v19 <= 0x1F) {
        v12 = v14 + v7;
      }
      else {
        v20 = result[3] - v18;
        if (v20 < 0) {
          v20 = -v20;
        }
        if ((unsigned int)v20 > 0x1F) {
          goto LABEL_5;
        }
        v12 = v10 + v14;
      }
      *(v8 - 1) = v12;
    LABEL_5:
      v8 += 12;
    }
  }
  return result;
}

_DWORD* nn_fontll_itype_44d600(_DWORD* result, int a2, __int64 a3)
{
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  _DWORD* v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  _DWORD* v17;
  int v18;
  int v19;
  int v20;
  int v21;

  if (a2 < 1) {
    return result;
  }
  v3 = (*result + 32) & 0xFFFFFFC0;
  v4 = (result[1] + 32) & 0xFFFFFFC0;
  if (a2 == 1) {
    v5 = 0;
    goto LABEL_27;
  }
  v6 = (_DWORD*)(a3 + 80);
  v7 = 0;
  do {
    v8 = *(v6 - 14);
    v9 = *(v6 - 12) / 2;
    v10 = v8 + v9 - *result;
    if (v10 < 0) {
      v10 = *result - (v8 + v9);
    }
    if ((unsigned int)v10 <= 0x1F) {
      *(v6 - 13) = v3 - v9;
    }
    v11 = v8 - result[1] - v9;
    if (v11 < 0) {
      v11 = -v11;
    }
    if ((unsigned int)v11 <= 0x1F) {
      *(v6 - 13) = v9 + v4;
    }
    v12 = *(v6 - 2);
    v13 = *v6 / 2;
    v14 = v12 + v13 - *result;
    if (v14 < 0) {
      v14 = *result - (v12 + v13);
    }
    if ((unsigned int)v14 <= 0x1F) {
      *(v6 - 1) = v3 - v13;
      v16 = v12 - result[1] - v13;
      if (v16 < 0) {
        v16 = -v16;
      }
      if ((unsigned int)v16 <= 0x1F) {
      LABEL_25:
        *(v6 - 1) = v13 + v4;
      }
    }
    else {
      v15 = v12 - result[1] - v13;
      if (v15 < 0) {
        v15 = -v15;
      }
      if ((unsigned int)v15 <= 0x1F) {
        goto LABEL_25;
      }
    }
    v7 -= 2;
    v6 += 24;
  } while (-(__int64)(a2 & 0x7FFFFFFE) != v7);
  v5 = -v7;
  if ((a2 & 1) != 0) {
  LABEL_27:
    v17 = (_DWORD*)(a3 + 48 * v5);
    v18 = v17[6];
    v19 = v17[8] / 2;
    v20 = v18 + v19 - *result;
    if (v20 < 0) {
      v20 = *result - (v18 + v19);
    }
    if ((unsigned int)v20 <= 0x1F) {
      v17[7] = v3 - v19;
    }
    v21 = v18 - result[1] - v19;
    if (v21 < 0) {
      v21 = v19 - (v18 - result[1]);
    }
    if ((unsigned int)v21 <= 0x1F) {
      v17[7] = v19 + v4;
    }
  }
  return result;
}

__int64 nn_fontll_itype_44d780(__int64 result, int a2, __int64 a3)
{
  int v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  _DWORD* v11;
  int v12;
  int v13;

  if (a2 < 1) {
    return result;
  }
  v3 = (result + 32) & 0xFFFFFFC0;
  if (a2 == 1) {
    v4 = 0;
  LABEL_16:
    v11 = (_DWORD*)(a3 + 48 * v4);
    v12 = v11[8] / 2;
    v13 = v11[6] - result - v12;
    if (v13 < 0) {
      v13 = v12 - (v11[6] - result);
    }
    if ((unsigned int)v13 <= 0x1F) {
      v11[7] = v12 + v3;
    }
    return result;
  }
  v5 = (_DWORD*)(a3 + 80);
  v6 = 0;
  do {
    v7 = *(v5 - 12) / 2;
    v8 = *(v5 - 14) - result - v7;
    if (v8 < 0) {
      v8 = v7 - (*(v5 - 14) - result);
    }
    if ((unsigned int)v8 <= 0x1F) {
      *(v5 - 13) = v7 + v3;
    }
    v9 = *v5 / 2;
    v10 = *(v5 - 2) - result - v9;
    if (v10 < 0) {
      v10 = v9 - (*(v5 - 2) - result);
    }
    if ((unsigned int)v10 <= 0x1F) {
      *(v5 - 1) = v9 + v3;
    }
    v6 -= 2;
    v5 += 24;
  } while (-(__int64)(a2 & 0x7FFFFFFE) != v6);
  v4 = -v6;
  if ((a2 & 1) != 0) {
    goto LABEL_16;
  }
  return result;
}

__int64 nn_fontll_itype_44d880(int a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  bool v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned int v23;
  __int64 v25;
  int* v26;
  _DWORD* v27;
  int v28;
  int v29;
  int v30;
  _DWORD v31[2];
  _DWORD v32[2];

  v2 = 2LL * a1;
  v4 = *a2;
  v3 = a2[1];
  v5 = *(unsigned __int16*)(a2[7] + v2);
  v6 = *(unsigned __int16*)(a2[8] + v2);
  if ((unsigned int)v5 >= (unsigned int)v6) {
    v10 = *(unsigned __int16*)(a2[7] + 2LL * a1);
    goto LABEL_14;
  }
  v7 = *(_DWORD*)(v3 + 4LL * *(unsigned __int16*)(a2[7] + 2LL * a1));
  v8 = ((int)v6 - (int)v5) & 3LL;
  if (v8 == 0) {
    v12 = *(unsigned __int16*)(a2[7] + 2LL * a1);
    v10 = *(unsigned __int16*)(a2[7] + 2LL * a1);
    if ((unsigned __int64)(v5 - v6) > 0xFFFFFFFFFFFFFFFCLL) {
      goto LABEL_14;
    }
    goto LABEL_27;
  }
  v9 = v5 + 1;
  v10 = *(unsigned __int16*)(a2[7] + 2LL * a1);
  do {
    v11 = *(_DWORD*)(v3 + 4 * v9);
    if (v11 > v7 ||
        v11 == v7 && *(_DWORD*)(v4 + 4 * v9) < *(_DWORD*)(v4 + 4LL * v10)) {
      v10 = v9;
      v7 = *(_DWORD*)(v3 + 4 * v9);
    }
    ++v9;
    --v8;
  } while (v8 != 0);
  v12 = v9 - 1;
  if ((unsigned __int64)(v5 - v6) <= 0xFFFFFFFFFFFFFFFCLL) {
  LABEL_27:
    v25 = 4 * v12 + 8;
    v26 = (int*)(v3 + v25);
    v27 = (_DWORD*)(v4 + v25);
    do {
      v28 = *(v26 - 1);
      if (v28 > v7 || v28 == v7 && *(v27 - 1) < *(_DWORD*)(v4 + 4LL * v10)) {
        v10 = v12 + 1;
        v7 = *(v26 - 1);
      }
      if (*v26 > v7 || *v26 == v7 && *v27 < *(_DWORD*)(v4 + 4LL * v10)) {
        v10 = v12 + 2;
        v7 = *v26;
      }
      v29 = v26[1];
      if (v29 > v7 || v29 == v7 && v27[1] < *(_DWORD*)(v4 + 4LL * v10)) {
        v10 = v12 + 3;
        v7 = v26[1];
      }
      v30 = v26[2];
      if (v30 > v7 || v30 == v7 && v27[2] < *(_DWORD*)(v4 + 4LL * v10)) {
        v10 = v12 + 4;
        v7 = v26[2];
      }
      v12 += 4;
      v26 += 4;
      v27 += 4;
    } while (v6 != v12);
  }
LABEL_14:
  v13 = v10 - 1;
  v14 = v10 == (_DWORD)v5;
  v15 = v10;
  v16 = *(_DWORD*)(v4 + 4LL * v10);
  if (v14) {
    v13 = v6;
  }
  v17 = (int)v13;
  v18 = *(_DWORD*)(v4 + 4LL * (int)v13);
  if (v18 == v16 && *(_DWORD*)(v3 + 4 * v17) == *(_DWORD*)(v3 + 4 * v15)) {
    v19 = v17 - 1;
    if ((_DWORD)v17 == (_DWORD)v5) {
      v19 = v6;
    }
    v17 = v19;
    v18 = *(_DWORD*)(v4 + 4LL * v19);
  }
  if ((_DWORD)v15 == (_DWORD)v6) {
    v20 = v5;
  }
  else {
    v20 = v15 + 1;
  }
  v21 = varmul_64_plt(
      (unsigned int)(v16 - v18),
      (unsigned int)(*(_DWORD*)(v3 + 4LL * v20) - *(_DWORD*)(v3 + 4 * v17)), 6);
  v22 = varmul_64_plt(
      (unsigned int)(*(_DWORD*)(v3 + 4 * v15) - *(_DWORD*)(v3 + 4 * v17)),
      (unsigned int)(*(_DWORD*)(v4 + 4LL * v20) - *(_DWORD*)(v4 + 4 * v17)), 6);
  v23 = v21 - v22;
  if (v21 == v22) {
    v32[0] = (*(_DWORD*)(v4 + 4 * v17) - *(_DWORD*)(v4 + 4 * v15)) << 10;
    v32[1] = (*(_DWORD*)(v3 + 4 * v17) - *(_DWORD*)(v3 + 4 * v15)) << 10;
    fixed_norm_plt(v32);
    v31[0] = (*(_DWORD*)(v4 + 4LL * v20) - *(_DWORD*)(v4 + 4 * v15)) << 10;
    v31[1] = (*(_DWORD*)(v3 + 4LL * v20) - *(_DWORD*)(v3 + 4 * v15)) << 10;
    fixed_norm_plt(v31);
    v23 = v32[0] - v31[0];
  }
  return v23 >> 31;
}

__int64 nn_fontll_itype_44e2c0(int a1, int a2, unsigned int a3, _DWORD* a4)
{
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int16 v10;
  unsigned __int16 v11;
  unsigned __int16* v12;
  int v13;
  __int64 v14;
  unsigned __int16* v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  int v21;
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
  __int64 v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  _DWORD* v54;
  __int64 v55;
  int v56;
  __int64 v57;
  char v58;
  char* v59;
  bool v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  unsigned int v67;
  unsigned int v68;
  int v69;
  bool v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  unsigned int v81;
  unsigned int v82;
  bool v84;
  bool v85;
  __int64 v86;
  int v87;
  unsigned int v88;
  unsigned int v89;
  bool v90;
  bool v91;
  bool v92;
  __int64 result;
  int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  _DWORD* v98;
  __int64 v99;
  _DWORD* v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  _DWORD* v106;
  int* v107;
  _DWORD* v108;
  int v109;
  int* v110;
  _DWORD* v111;
  _DWORD* v112;
  unsigned __int64 v113;
  _DWORD* v114;
  __int64 v115;
  _QWORD v116[32];
  _QWORD v117[15];
  _QWORD v118[9];
  _QWORD v119[2];
  _QWORD v120[31];

  v118[0] = 0;
  memset(v117, 0, sizeof(v117));
  if ((int)a3 >= 1) {
    v7 = 0;
    v8 = a3;
    memset(v116, 0, sizeof(v116));
    do {
      v9 = (unsigned __int16)v7++;
      *((_DWORD*)v116 + v9) = a4[12 * (unsigned int)v9 + 7];
    } while (a3 > (unsigned __int16)v7);
    v10 = 0;
    v11 = 0;
    v12 = (unsigned __int16*)&a4[12 * a1];
    v13 = *v12;
    do {
      v15 = (unsigned __int16*)&a4[12 * v11];
      v16 = *v15;
      if (v13 == v16) {
        goto LABEL_5;
      }
      v17 = v12[2];
      v18 = v15[2];
      v19 = v17 == v16 || v17 == v18;
      if (v19 || v13 == v18) {
        goto LABEL_5;
      }
      v21 = *((_DWORD*)v12 + 6) - *((_DWORD*)v15 + 6);
      if (v21 < 0) {
        v21 = -v21;
      }
      if ((unsigned int)v21 <= 0xF) {
      LABEL_5:
        v14 = v10++;
        *((_WORD*)v117 + v14) = v11;
      }
      ++v11;
    } while (a3 > v11);
    if (v10 != 0) {
      v22 = 0;
      v115 = a3 & 7;
      v112 = a4 + 7;
      v110 = &a4[12 * a2 + 7];
      v111 = a4 + 55;
      v113 = v10;
      v114 = &a4[12 * a3 - 2];
      while (2) {
        v23 = a4[7];
        v24 = *((unsigned __int16*)v117 + v22);
        v25 = &a4[12 * v24];
        v26 = v25[7];
        memset(v120, 0, 240);
        v119[0] = 0;
        v119[1] = 0;
        memset(&v118[1], 0, 64);
        if (v26 == v23) {
          goto LABEL_126;
        }
        if (a3 >= 8) {
          v28 = v111;
          v29 = v120;
          v30 = 0;
          do {
            v31 = *(v28 - 36);
            v32 = *(v28 - 24);
            v30 -= 8;
            *(v29 - 4) = *(v28 - 48);
            *(v29 - 3) = v31;
            v33 = *(v28 - 12);
            v34 = v28[12];
            *(v29 - 2) = v32;
            *(v29 - 1) = v33;
            *v29 = *v28;
            v29[1] = v34;
            v35 = v28[24];
            v36 = v28[36];
            v28 += 96;
            v29[2] = v35;
            v29[3] = v36;
            v29 += 8;
          } while (-(v8 & 0x7FFFFFF8) != v30);
          v27 = -v30;
          if (v115 == 0) {
            goto LABEL_32;
          }
          goto LABEL_30;
        }
        v27 = 0;
        if (v115 != 0) {
        LABEL_30:
          v37 = (_DWORD*)v119 + v27;
          v38 = &v112[12 * v27];
          v39 = v8 & 7;
          do {
            v40 = *v38;
            v38 += 12;
            --v39;
            *v37++ = v40;
          } while (v39 != 0);
        }
      LABEL_32:
        v41 = v25[8];
        v42 = (v41 + 1) / 2;
        v43 = ((_BYTE)v42 + (_BYTE)v26) & 0x3F;
        v44 = ((_BYTE)v26 - (_BYTE)v42) & 0x3F;
        if (v43 >= 3) {
          v44 = v43;
        }
        v45 = v26 - v44;
        v25[7] = v45;
        if (v44 == 0) {
          goto LABEL_50;
        }
        if (a2 != (_DWORD)v24) {
          v46 = v45 <= *v110 ? v24 : a2;
          v47 = v45 <= *v110 ? a2 : v24;
          v48 = a4[12 * v46 + 7] + (signed __int32)a4[12 * v46 + 8] / 2;
          v49 = a4[12 * v47 + 7] - (signed __int32)a4[12 * v47 + 8] / 2;
          v50 = v49 - v48;
          if (v49 < v48) {
            goto LABEL_50;
          }
          v51 = v48 & 0xFFFFFFC0;
          v52 = v49 & 0xFFFFFFC0;
          if (v48 == (v48 & 0xFFFFFFC0)) {
            if (v49 == v52) {
              if (v50 > 63) {
                goto LABEL_51;
              }
              goto LABEL_50;
            }
          }
          else if (v49 != v52 && v51 != v52) {
            if (v52 != v51 + 64) {
              goto LABEL_51;
            }
            v88 = v49 & 0x3F;
            v89 = v48 & 0x3F;
            v90 = v88 <= 0x27 || v89 >= 0x19;
            v91 = !v90;
            v92 = v88 <= 0x2F && v89 >= 0x11;
            if (!v92 || v91) {
              goto LABEL_51;
            }
            goto LABEL_50;
          }
          if (v50 <= 47) {
          LABEL_50:
            v45 = *((_DWORD*)v119 + v24) - 64;
            v25[7] = v45;
          }
        }
      LABEL_51:
        v53 = v45 - v25[6];
        if (v53 < 0) {
          v53 = v25[6] - v45;
        }
        if ((unsigned int)v53 > 0x60 || v45 < (signed __int32)a4[6]) {
          v25[7] = *((_DWORD*)v119 + v24);
          goto LABEL_126;
        }
        v54 = v114;
        v55 = v24 + 1;
        v56 = -1;
        v57 = 1;
        v58 = 0;
        v59 = (char*)v118 + 7;
        do {
          if (v8 == v55) {
          LABEL_56:
            v60 = false;
            goto LABEL_57;
          }
          v61 = *(v54 - 3);
          v62 = v8 + v56;
          if (v45 <= v61) {
            v63 = v8 + v56;
          }
          else {
            v63 = v24;
          }
          if (v45 <= v61) {
            v62 = v24;
          }
          v64 = a4[12 * v62 + 7] + (signed __int32)a4[12 * v62 + 8] / 2;
          v65 = a4[12 * v63 + 7] - (signed __int32)a4[12 * v63 + 8] / 2;
          v66 = v65 - v64;
          if (v65 < v64) {
            goto LABEL_72;
          }
          v67 = v64 & 0xFFFFFFC0;
          v68 = v65 & 0xFFFFFFC0;
          if (v64 != (v64 & 0xFFFFFFC0)) {
            if (v65 != v68 && v67 != v68) {
              if (v68 != v67 + 64) {
                goto LABEL_56;
              }
              v81 = v65 & 0x3F;
              v82 = v64 & 0x3F;
              v60 = false;
              v84 = v81 > 0x27 && v82 < 0x19;
              v85 = v81 <= 0x2F && v82 >= 0x11;
              if (!v85 || v84) {
                goto LABEL_57;
              }
              goto LABEL_72;
            }
          LABEL_71:
            if (v66 > 47) {
              goto LABEL_56;
            }
            goto LABEL_72;
          }
          if (v65 != v68) {
            goto LABEL_71;
          }
          if (v66 > 63) {
            goto LABEL_56;
          }
        LABEL_72:
          v69 = v25[9];
          v70 = __OFSUB__(*v54, v69);
          v71 = *v54 - v69;
          if (v71 < 0 != v70) {
            goto LABEL_56;
          }
          v72 = *(v54 - 1);
          v73 = v25[10];
          v70 = __OFSUB__(v73, v72);
          v74 = v73 - v72;
          if (v74 < 0 != v70) {
            goto LABEL_56;
          }
          v75 = *(v54 - 2);
          if (v74 < v71) {
            v71 = v74;
          }
          v76 = v45 - v41 / 2 - v75 / 2 - v61;
          v77 = v41 / -2 - v45 - v75 / 2 + v61;
          if (v76 < v77) {
            v77 = v76;
          }
          if (v41 >= v75) {
            v78 = *(v54 - 2);
          }
          else {
            v78 = v41;
          }
          v79 = v78 / 2;
          v60 = v71 >= v79 || v77 >= v79;
        LABEL_57:
          --v57;
          v59[v8] = v60;
          v54 -= 12;
          --v56;
          ++v55;
          v58 |= v60;
          --v59;
        } while (v8 + v57 > 1);
        if (v58 == 0 || (_DWORD)v24 == 0) {
        LABEL_22:
          if (++v22 >= v113) {
            return 1;
          }
          continue;
        }
        break;
      }
      v86 = v24;
      while (2) {
        if (*((_BYTE*)v118 + v86 + 7) == 0) {
          if (v86 <= 1) {
            goto LABEL_22;
          }
          goto LABEL_105;
        }
        v87 = nn_fontll_itype_44e2c0((int)v86 - 1, v24, a3, a4);
        if (v87 != 0 && v86 >= 2) {
        LABEL_105:
          --v86;
          continue;
        }
        break;
      }
      if (v87 != 0) {
        goto LABEL_22;
      }
      v96 = v8 & 7;
      if ((unsigned int)v8 >= 8) {
        v98 = a4 + 55;
        v99 = 0;
        v100 = v120;
        do {
          v101 = *(v100 - 3);
          v99 -= 8;
          *(v98 - 48) = *(v100 - 4);
          *(v98 - 36) = v101;
          v102 = *(v100 - 1);
          *(v98 - 24) = *(v100 - 2);
          *(v98 - 12) = v102;
          v103 = v100[1];
          *v98 = *v100;
          v98[12] = v103;
          v104 = v100[2];
          v105 = v100[3];
          v100 += 8;
          v98[24] = v104;
          v98[36] = v105;
          v98 += 96;
        } while (-(v8 & 0x7FFFFFF8) != v99);
        v97 = -v99;
      }
      else {
        v97 = 0;
      }
      if ((v8 & 7) != 0) {
        v106 = &a4[12 * v97];
        v107 = (int*)v119 + v97;
        v108 = v106 + 7;
        do {
          v109 = *v107++;
          --v96;
          *v108 = v109;
          v108 += 12;
        } while (v96 != 0);
      }
    LABEL_126:
      result = 0;
      v94 = 0;
      do {
        v95 = (unsigned __int16)v94++;
        a4[12 * (unsigned int)v95 + 7] = *((_DWORD*)v116 + v95);
      } while (a3 > (unsigned __int16)v94);
      return result;
    }
  }
  return 1;
}

__int64 nn_fontll_itype_44e9e0(int a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  int v12;
  __int64 v13;
  int v14;
  int v16;
  int i;
  int v18;
  int j;

  v2 = *(_QWORD*)(a2 + 24);
  v3 = *(_QWORD*)(a2 + 56);
  v4 = *(_QWORD*)(a2 + 64);
  v5 = *(unsigned __int16*)(a2 + 80);
  v6 = *(_DWORD*)(v2 + 4LL * a1);
  if (*(_WORD*)(a2 + 80) == 0) {
    return 0;
  }
  v7 = 0;
  while (a1 < *(unsigned __int16*)(v3 + 2 * v7) ||
         a1 > (unsigned int)*(unsigned __int16*)(v4 + 2 * v7)) {
    if (v5 == ++v7) {
      return 0;
    }
  }
  if ((_DWORD)v7 == (_DWORD)v5) {
    return 0;
  }
  v8 = 2LL * (unsigned int)v7;
  v9 = *(unsigned __int16*)(v3 + v8);
  v10 = *(unsigned __int16*)(v4 + v8);
  if ((_DWORD)v9 == (_DWORD)v10 || (unsigned int)v9 > (unsigned int)v10) {
    return 0;
  }
  v11 = (int*)(v2 + 4 * v9);
  v12 = *v11;
  v13 = v10 - v9 + 1;
  while (1) {
    v14 = *v11++;
    if (v14 != v12) {
      break;
    }
    if (--v13 == 0) {
      return 0;
    }
  }
  if (a1 == (_DWORD)v9) {
    v16 = v10;
  }
  else {
    v16 = a1 - 1;
  }
  for (i = *(_DWORD*)(v2 + 4LL * v16); v6 == i;
       i = *(_DWORD*)(v2 + 4LL * v16)) {
    if (v16 == (_DWORD)v9) {
      v16 = v10;
    }
    else {
      --v16;
    }
  }
  if (a1 == (_DWORD)v10) {
    v18 = v9;
  }
  else {
    v18 = a1 + 1;
  }
  for (j = *(_DWORD*)(v2 + 4LL * v18); v6 == j;
       j = *(_DWORD*)(v2 + 4LL * v18)) {
    if (v18 == (_DWORD)v10) {
      v18 = v9;
    }
    else {
      ++v18;
    }
  }
  if (i > v6 && j > v6) {
    return 0xFFFFFFFFLL;
  }
  return i < v6 && j < v6;
}

__int64 get_EBLC_partial(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int16* v20;
  unsigned __int64 v21;
  __int64* v22;
  unsigned __int64 i;
  __int64 v24;
  __int64 v25;

  v4 = ttf_read_plt(a1, a2, *(unsigned int*)(a2 + 164), 16);
  if (v4 != 0) {
    if (*(_DWORD*)(a1 + 72) == 0) {
      v6 = bswap32(*(_DWORD*)(v4 + 4));
      *(_DWORD*)v4 = bswap32(*(_DWORD*)v4);
      *(_DWORD*)(v4 + 4) = v6;
      v7 = FSS_calloc_plt(a1, 56 * v6);
      *(_QWORD*)(v4 + 8) = v7;
      if (v7 != 0) {
        if (*(_DWORD*)(v4 + 4) == 0) {
          return v4;
        }
        v8 = 8;
        v9 = v7;
        v10 = 0;
        v11 = v7;
        while (1) {
          ttf_read_buf_plt(a1, a2, (unsigned int)(v8 + *(_DWORD*)(a2 + 164)),
                           48, v11);
          if (*(_DWORD*)(a1 + 72) != 0) {
            break;
          }
          ++v10;
          v8 += 48;
          v12 = bswap32(*(_DWORD*)(v11 + 4));
          *(_DWORD*)v11 = bswap32(*(_DWORD*)v11);
          *(_DWORD*)(v11 + 4) = v12;
          v13 = bswap32(*(_DWORD*)(v11 + 12));
          *(_DWORD*)(v11 + 8) = bswap32(*(_DWORD*)(v11 + 8));
          *(_DWORD*)(v11 + 12) = v13;
          *(_WORD*)(v11 + 40) = bswap32(*(unsigned __int16*)(v11 + 40)) >> 16;
          *(_WORD*)(v11 + 42) = bswap32(*(unsigned __int16*)(v11 + 42)) >> 16;
          v11 += 56;
          v14 = *(unsigned int*)(v4 + 4);
          if (v10 >= v14) {
            if ((_DWORD)v14 == 0) {
              return v4;
            }
            v15 = 0;
            while (1) {
              v16 = v9 + 56 * v15;
              v17 = ttf_read_plt(
                  a1, a2, (unsigned int)(*(_DWORD*)v16 + *(_DWORD*)(a2 + 164)),
                  (unsigned int)(8 * *(_DWORD*)(v16 + 8)));
              *(_QWORD*)(v16 + 48) = v17;
              if (v17 == 0 || *(_DWORD*)(a1 + 72) != 0) {
                break;
              }
              if (*(_DWORD*)(v16 + 8) != 0) {
                v18 = 0;
                v19 = 0;
                do {
                  ++v19;
                  v20 = (unsigned __int16*)(*(_QWORD*)(v16 + 48) + v18);
                  v18 += 8;
                  *v20 = bswap32(*v20) >> 16;
                  v20[1] = bswap32(v20[1]) >> 16;
                  *((_DWORD*)v20 + 1) = bswap32(*((_DWORD*)v20 + 1));
                } while (v19 < *(unsigned int*)(v16 + 8));
              }
              if (++v15 >= (unsigned __int64)*(unsigned int*)(v4 + 4)) {
                return v4;
              }
            }
            v21 = *(unsigned int*)(v4 + 4);
            if ((_DWORD)v21 != 0) {
              v22 = (__int64*)(v9 + 48);
              for (i = 0; i < v21; ++i) {
                v25 = *v22;
                v22 += 7;
                v24 = v25;
                if (v25 != 0) {
                  FSS_free_plt(a1, v24);
                  v21 = *(unsigned int*)(v4 + 4);
                }
              }
            }
            break;
          }
        }
        FSS_free_plt(a1, v9);
      }
    }
    FSS_free_plt(a1, v4);
    return 0;
  }
  return v4;
}

__int64 nn_fontll_itype_44eee0(void* a1, __int64 a2, __int16 a3, __int16 a4,
                               unsigned int a5, unsigned __int16 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int16* v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int16 v22;
  unsigned __int16 v23;
  char v24;
  char v25;
  void* v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  unsigned __int16 v36;
  unsigned __int16* v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int16 v43;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  unsigned __int8* v49;
  unsigned __int8* v50;
  void* v51;
  int v52;
  __int16 v53;
  int v54;
  bool v55;
  char v56;
  void* v57;
  __int64 v58;
  __int64 v59;
  unsigned __int16 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int16* v65;
  __int64 v66;
  unsigned __int8* v67;
  unsigned __int16* v68;
  __int64 v69;
  unsigned __int8* v70;
  int v71;
  __int64 v72;
  unsigned int v75;
  int v76;
  __int64 v77;
  unsigned int v78;
  int v79;
  void* v80;
  __int64 v81;
  struct {
    char gap48_[8];
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int128 v85;
  } v82_;
  __int64 v86;
  _WORD v87[2];
  unsigned int v88;

  v6 = *(_QWORD*)(a2 + 216);
  v82_.v85 = (__typeof__(v82_.v85)){0};
  v82_.v83 = 0;
  v82_.v84 = 0;
  v82_.v82 = 0;
  v7 = *(unsigned int*)(v6 + 4);
  if ((_DWORD)v7 == 0) {
    return 0;
  }
  v8 = *(_QWORD*)(v6 + 8);
  v9 = a6;
  v10 = a3;
  v11 = a4;
  v12 = 0;
  v76 = *(_DWORD*)(a2 + 164);
  while (1) {
    v13 = v8 + 56 * v12;
    if ((*(_BYTE*)(v13 + 47) & 0xC) == 0 &&
        *(unsigned __int8*)(v13 + 44) == v10 &&
        *(unsigned __int8*)(v13 + 45) == v11 &&
        v9 == *(unsigned __int8*)(v13 + 46) &&
        *(unsigned __int16*)(v13 + 40) <= (unsigned int)(unsigned __int16)a5 &&
        *(unsigned __int16*)(v13 + 42) >= (unsigned int)(unsigned __int16)a5) {
      v14 = *(unsigned int*)(v13 + 8);
      if ((_DWORD)v14 != 0) {
        break;
      }
    }
  LABEL_3:
    if (++v12 == v7) {
      return 0;
    }
  }
  v15 = *(unsigned __int16**)(v13 + 48);
  v80 = a1;
  v77 = a2;
  v78 = a5;
  v79 = *(_DWORD*)v13 + v76;
  while (1) {
    if (*v15 > (unsigned int)(unsigned __int16)a5 ||
        v15[1] < (unsigned int)(unsigned __int16)a5) {
      goto LABEL_14;
    }
    v81 = 0;
    v16 = v9;
    v75 = v79 + *((_DWORD*)v15 + 1);
    ttf_read_buf_plt(a1, a2, v75, 8, &v81);
    a1 = v80;
    if (*((_DWORD*)v80 + 18) != 0) {
      return 0;
    }
    v17 = (unsigned __int16)v81;
    LOWORD(v81) = bswap32((unsigned __int16)v81) >> 16;
    v18 = WORD1(v81);
    WORD1(v81) = __rev16(WORD1(v81));
    HIDWORD(v81) = bswap32(HIDWORD(v81));
    v9 = v16;
    if (v18 != 256 && v18 != 512 && v18 != 2048) {
      break;
    }
    v19 = *((_DWORD*)v80 + 19);
    if ((v19 & 0x10000) != 0) {
      if ((*(_BYTE*)(v13 + 47) & 2) != 0) {
        goto LABEL_25;
      }
    }
    else if ((*(_BYTE*)(v13 + 47) & 1) != 0) {
      goto LABEL_25;
    }
    a2 = v77;
    a5 = v78;
  LABEL_14:
    v15 += 4;
    if (--v14 == 0) {
      goto LABEL_3;
    }
  }
  v19 = *((_DWORD*)v80 + 19);
LABEL_25:
  v20 = (unsigned __int16)__rev16(v17);
  v82_.v84 = 0;
  HIDWORD(v82_.v85) = 0;
  v82_.v82 = 0;
  v82_.v83 = 0;
  WORD1(v82_.v85) = v9;
  v21 = v75 + 8;
  HIWORD(v82_.v84) = a3;
  LOWORD(v82_.v85) = a4;
  *(_QWORD*)((char*)&v82_.v85 + 4) = (unsigned __int16)v78;
  v22 = *v15;
  v86 = 0;
  v88 = 0;
  v23 = v78 - v22;
  WORD3(v82_.v85) = v23;
  if (v20 <= 2) {
    if (v20 != 1) {
      if (v20 == 2) {
        BYTE4(v82_.v84) = 0;
        ttf_read_buf_plt(v80, v77, v21, 4, &v88);
        if (*((_DWORD*)v80 + 18) == 0) {
          LODWORD(v82_.v82) = bswap32(v88);
          HIDWORD(v82_.v82) = HIDWORD(v81) + v82_.v82 * WORD3(v82_.v85);
          ttf_read_buf_plt(v80, v77, v75 + 12, 8, &v86);
          v26 = v80;
          if (*((_DWORD*)v80 + 18) == 0) {
            LOWORD(v82_.v83) = BYTE1(v86);
            WORD1(v82_.v83) = (unsigned __int8)v86;
            if ((v19 & 0x10000) != 0) {
              WORD2(v82_.v83) = SBYTE5(v86);
              HIWORD(v82_.v83) = SBYTE6(v86) - 1;
              WORD1(v82_.v84) = HIBYTE(v86);
            }
            else {
              WORD2(v82_.v83) = SBYTE2(v86);
              HIWORD(v82_.v83) = SBYTE3(v86) - 1;
              LOWORD(v82_.v84) = BYTE4(v86);
            }
            goto LABEL_68;
          }
        }
        return 0;
      }
      goto LABEL_50;
    }
    v27 = v77;
    v34 = v21 + 4 * v23;
    BYTE4(v82_.v84) = 1;
    ttf_read_buf_plt(v80, v77, v34, 4, &v88);
    if (*((_DWORD*)v80 + 18) != 0) {
      return 0;
    }
    HIDWORD(v82_.v82) = bswap32(v88);
    ttf_read_buf_plt(v80, v77, v34 + 4, 4, &v88);
    v26 = v80;
    if (*((_DWORD*)v80 + 18) != 0) {
      return 0;
    }
    v29 = bswap32(v88);
  LABEL_49:
    v33 = v27;
    LODWORD(v82_.v82) = v29 - HIDWORD(v82_.v82);
    HIDWORD(v82_.v82) += HIDWORD(v81);
    goto LABEL_69;
  }
  if (v20 == 3) {
    v27 = v77;
    v28 = v21 + 2 * v23;
    v87[0] = 0;
    BYTE4(v82_.v84) = 1;
    ttf_read_buf_plt(v80, v77, v28, 2, v87);
    if (*((_DWORD*)v80 + 18) != 0) {
      return 0;
    }
    HIDWORD(v82_.v82) = bswap32(v87[0]) >> 16;
    ttf_read_buf_plt(v80, v77, v28 + 2, 2, v87);
    v26 = v80;
    if (*((_DWORD*)v80 + 18) != 0) {
      return 0;
    }
    v29 = bswap32(v87[0]) >> 16;
    goto LABEL_49;
  }
  if (v20 == 4) {
    BYTE4(v82_.v84) = 1;
    ttf_read_buf_plt(v80, v77, v21, 4, &v88);
    if (*((_DWORD*)v80 + 18) != 0) {
      return 0;
    }
    v30 = v88;
    v31 = bswap32(v88);
    v32 = ttf_read_plt(v80, v77, v75 + 12, 4 * v31 + 4);
    v26 = v80;
    if (v32 != 0 && *((_DWORD*)v80 + 18) == 0) {
      v35 = v32;
      if (v30 != 0) {
        v36 = __rev16(v78);
        v37 = (unsigned __int16*)(v32 + 2);
        v38 = 1;
        while (*(v37 - 1) != v36) {
          ++v38;
          v37 += 2;
          if (v38 - v31 == 1) {
            goto LABEL_67;
          }
        }
        HIDWORD(v82_.v82) = bswap32(*v37) >> 16;
        LODWORD(v82_.v82) =
            (bswap32(*(unsigned __int16*)(v32 + 4LL * (unsigned int)v38 + 2)) >>
             16) -
            HIDWORD(v82_.v82);
        HIDWORD(v82_.v82) += HIDWORD(v81);
      }
      goto LABEL_67;
    }
  LABEL_45:
    v33 = v77;
    *((_DWORD*)v26 + 18) = 0;
    goto LABEL_71;
  }
  if (v20 != 5) {
  LABEL_50:
    *((_DWORD*)v80 + 18) = 429;
    return 0;
  }
  BYTE4(v82_.v84) = 0;
  ttf_read_buf_plt(v80, v77, v21, 4, &v88);
  if (*((_DWORD*)v80 + 18) != 0) {
    return 0;
  }
  LODWORD(v82_.v82) = bswap32(v88);
  ttf_read_buf_plt(v80, v77, v75 + 12, 8, &v86);
  if (*((_DWORD*)v80 + 18) != 0) {
    return 0;
  }
  LOWORD(v82_.v83) = BYTE1(v86);
  WORD1(v82_.v83) = (unsigned __int8)v86;
  if ((v19 & 0x10000) != 0) {
    v24 = BYTE5(v86);
    v25 = BYTE6(v86);
    WORD1(v82_.v84) = HIBYTE(v86);
  }
  else {
    v24 = BYTE2(v86);
    v25 = BYTE3(v86);
    LOWORD(v82_.v84) = BYTE4(v86);
  }
  WORD2(v82_.v83) = v24;
  HIWORD(v82_.v83) = v25 - 1;
  ttf_read_buf_plt(v80, v77, v75 + 20, 4, &v88);
  if (*((_DWORD*)v80 + 18) != 0) {
    return 0;
  }
  v39 = v88;
  v40 = bswap32(v88);
  v41 = ttf_read_plt(v80, v77, v75 + 24, (unsigned int)(2 * v40));
  v26 = v80;
  if (v41 == 0 || *((_DWORD*)v80 + 18) != 0) {
    goto LABEL_45;
  }
  v35 = v41;
  if (v39 == 0) {
  LABEL_67:
    FSS_free_plt(v80, v35);
    v26 = v80;
    goto LABEL_68;
  }
  v42 = 0;
  v43 = __rev16(v78);
  while (*(unsigned __int16*)(v41 + 2 * v42) != v43) {
    if (v40 == ++v42) {
      goto LABEL_67;
    }
  }
  FSS_free_plt(v80, v41);
  v26 = v80;
  HIDWORD(v82_.v82) = HIDWORD(v81) + v82_.v82 * v42;
LABEL_68:
  v33 = v77;
LABEL_69:
  if (*((_DWORD*)v26 + 18) != 0) {
    return 0;
  }
LABEL_71:
  v45 = WORD1(v81);
  v46 = 0;
  LODWORD(v86) = 0;
  v88 = 0;
  if (HIDWORD(v82_.v82) == 0 || (_DWORD)v82_.v82 == 0) {
    goto LABEL_75;
  }
  v47 = *((_DWORD*)v26 + 19);
  v48 = v33;
  get_ttf_table_info_plt(v26, v33, 1161970772, &v86, &v88);
  v26 = v80;
  if (*((_DWORD*)v80 + 18) != 0) {
    goto LABEL_74;
  }
  v49 = (unsigned __int8*)ttf_read_plt(v80, v48,
                                       (unsigned int)(HIDWORD(v82_.v82) + v86),
                                       (unsigned int)v82_.v82);
  v26 = v80;
  v46 = 0;
  *((_QWORD*)&v82_.v85 + 1) = v49;
  if (*((_DWORD*)v80 + 18) != 0) {
    goto LABEL_75;
  }
  v50 = v49;
  if (v49 == nullptr) {
    goto LABEL_75;
  }
  if (v45 > 5) {
    if ((unsigned int)(v45 - 6) >= 2) {
      if (v45 == 8) {
        LOWORD(v82_.v83) = v49[1];
        WORD1(v82_.v83) = *v49;
        WORD2(v82_.v83) = (char)v49[2];
        v53 = (char)v49[3] - 1;
        HIWORD(v82_.v83) = v53;
        if ((v47 & 0x10000) != 0) {
          WORD1(v82_.v84) = v49[4];
        }
        else {
          LOWORD(v82_.v84) = v49[4];
        }
        v59 = (__int64)(v49 + 8);
        v60 = __rev16(*((unsigned __int16*)v49 + 3));
        if (*((_WORD*)v49 + 3) != 0) {
          v63 = v60 & 7;
          if (v60 >= 8u) {
            v68 = (unsigned __int16*)(v49 + 20);
            v69 = 0;
            do {
              v69 -= 8;
              *(v68 - 6) = bswap32(*(v68 - 6)) >> 16;
              *(v68 - 4) = bswap32(*(v68 - 4)) >> 16;
              *(v68 - 2) = bswap32(*(v68 - 2)) >> 16;
              *v68 = bswap32(*v68) >> 16;
              v68[2] = bswap32(v68[2]) >> 16;
              v68[4] = bswap32(v68[4]) >> 16;
              v68[6] = bswap32(v68[6]) >> 16;
              v68[8] = bswap32(v68[8]) >> 16;
              v68 += 16;
            } while (-(__int64)(v60 & 0xFFF8) != v69);
            v64 = -v69;
          }
          else {
            v64 = 0;
          }
          if ((v60 & 7) != 0) {
            v70 = &v49[4 * v64 + 8];
            do {
              --v63;
              *(_WORD*)v70 = bswap32(*(unsigned __int16*)v70) >> 16;
              v70 += 4;
            } while (v63 != 0);
          }
          v53 = HIWORD(v82_.v83);
        }
        if ((unsigned __int8)((unsigned __int16)(v53 - 127) >> 8) != 255) {
          v51 = v80;
          v50 = *((unsigned __int8**)&v82_.v85 + 1);
          v52 = 407;
        LABEL_133:
          *((_DWORD*)v51 + 18) = v52;
          goto LABEL_138;
        }
      }
      else {
        if (v45 != 9) {
          goto LABEL_137;
        }
        LOWORD(v82_.v83) = v49[1];
        WORD1(v82_.v83) = *v49;
        if ((v47 & 0x10000) != 0) {
          WORD2(v82_.v83) = (char)v49[5];
          HIWORD(v82_.v83) = (char)v49[6] - 1;
          WORD1(v82_.v84) = v49[7];
        }
        else {
          WORD2(v82_.v83) = (char)v49[2];
          HIWORD(v82_.v83) = (char)v49[3] - 1;
          LOWORD(v82_.v84) = v49[4];
        }
        v59 = (__int64)(v49 + 10);
        v60 = __rev16(*((unsigned __int16*)v49 + 4));
        if (*((_WORD*)v49 + 4) != 0) {
          v61 = v60 & 7;
          if (v60 >= 8u) {
            v65 = (unsigned __int16*)(v49 + 22);
            v66 = 0;
            do {
              v66 -= 8;
              *(v65 - 6) = bswap32(*(v65 - 6)) >> 16;
              *(v65 - 4) = bswap32(*(v65 - 4)) >> 16;
              *(v65 - 2) = bswap32(*(v65 - 2)) >> 16;
              *v65 = bswap32(*v65) >> 16;
              v65[2] = bswap32(v65[2]) >> 16;
              v65[4] = bswap32(v65[4]) >> 16;
              v65[6] = bswap32(v65[6]) >> 16;
              v65[8] = bswap32(v65[8]) >> 16;
              v65 += 16;
            } while (-(__int64)(v60 & 0xFFF8) != v66);
            v62 = -v66;
          }
          else {
            v62 = 0;
          }
          if ((v60 & 7) != 0) {
            v67 = &v49[4 * v62 + 10];
            do {
              --v61;
              *(_WORD*)v67 = bswap32(*(unsigned __int16*)v67) >> 16;
              v67 += 4;
            } while (v61 != 0);
          }
        }
      }
      v57 = v80;
      v58 = (__int64)nn_fontll_itype_44fda0(v80, v77, v60, v59, &v82_.v82);
      goto LABEL_135;
    }
    LOWORD(v82_.v83) = v49[1];
    WORD1(v82_.v83) = *v49;
    if ((v47 & 0x10000) != 0) {
      WORD2(v82_.v83) = (char)v49[5];
      HIWORD(v82_.v83) = (char)v49[6] - 1;
      WORD1(v82_.v84) = v49[7];
    }
    else {
      WORD2(v82_.v83) = (char)v49[2];
      HIWORD(v82_.v83) = (char)v49[3] - 1;
      LOWORD(v82_.v84) = v49[4];
    }
    v54 = 8;
    v55 = v45 == 6;
  LABEL_102:
    HIDWORD(v82_.v82) = v54;
    v56 = v55;
    BYTE5(v82_.v84) = v56;
    goto LABEL_106;
  }
  if ((unsigned int)(v45 - 1) < 2) {
    LOWORD(v82_.v83) = v49[1];
    WORD1(v82_.v83) = *v49;
    WORD2(v82_.v83) = (char)v49[2];
    HIWORD(v82_.v83) = (char)v49[3] - 1;
    if ((v47 & 0x10000) != 0) {
      WORD1(v82_.v84) = v49[4];
    }
    else {
      LOWORD(v82_.v84) = v49[4];
    }
    v54 = 5;
    v55 = v45 == 1;
    goto LABEL_102;
  }
  if ((unsigned int)(v45 - 3) < 2) {
    FSS_free_plt(v80, v49);
    v26 = v80;
    goto LABEL_74;
  }
  if (v45 != 5) {
  LABEL_137:
    v51 = v80;
  LABEL_138:
    FSS_free_plt(v51, v50);
    v26 = v51;
  LABEL_74:
    v46 = 0;
    goto LABEL_75;
  }
  if (BYTE4(v82_.v84) != 0) {
    v51 = v80;
    v52 = 427;
    goto LABEL_133;
  }
  WORD2(v82_.v84) = 0;
  HIDWORD(v82_.v82) = 0;
LABEL_106:
  v57 = v80;
  v58 = nn_fontll_itype_44fa00((__int64)v80, (__int64)&v82_.v82);
LABEL_135:
  if (*((_DWORD*)v57 + 18) != 0) {
    v50 = *((unsigned __int8**)&v82_.v85 + 1);
    goto LABEL_137;
  }
  v46 = v58;
  if (v58 != 0 && (FSS_free_plt(v80, *((_QWORD*)&v82_.v85 + 1)),
                   v71 = *(unsigned __int16*)(v46 + 18) << 16,
                   *(_DWORD*)(v46 + 20) = *(unsigned __int16*)(v46 + 16) << 16,
                   *(_DWORD*)(v46 + 24) = v71, WORD1(v82_.v85) == 1)) {
    v72 = trim_bitmap_plt(v80, v46);
    v26 = v80;
    if (*((_DWORD*)v80 + 18) != 0) {
      v46 = 0;
    }
    else {
      v46 = v72;
    }
  }
  else {
    v26 = v80;
  }
LABEL_75:
  if (*((_DWORD*)v26 + 18) != 0) {
    return 0;
  }
  else {
    return v46;
  }
}

__int64 nn_fontll_itype_44fa00(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned int v4;
  unsigned int v5;
  __int64 result;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  int v21;

  if (*(_QWORD*)(a2 + 32) == 0) {
    return 0;
  }
  v2 = *(unsigned __int16*)(a2 + 26);
  v4 = 0;
  if (v2 > 3) {
    if (v2 == 4) {
      v4 = ((unsigned int)*(unsigned __int16*)(a2 + 8) + 1) >> 1;
      v5 = *(unsigned __int16*)(a2 + 10) * v4 + 40;
      result = FSS_calloc_plt(a1, v5);
      if (result == 0) {
        return result;
      }
      goto LABEL_14;
    }
    if (v2 == 8) {
      v4 = *(unsigned __int16*)(a2 + 8);
      v5 = *(unsigned __int16*)(a2 + 10) * v4 + 40;
      result = FSS_calloc_plt(a1, v5);
      if (result == 0) {
        return result;
      }
      goto LABEL_14;
    }
  }
  else if (v2 == 1) {
    v4 = ((unsigned int)*(unsigned __int16*)(a2 + 8) + 7) >> 3;
  }
  else if (v2 == 2) {
    v4 = ((unsigned int)*(unsigned __int16*)(a2 + 8) + 3) >> 2;
    v5 = *(unsigned __int16*)(a2 + 10) * v4 + 40;
    result = FSS_calloc_plt(a1, v5);
    if (result == 0) {
      return result;
    }
    goto LABEL_14;
  }
  v5 = *(unsigned __int16*)(a2 + 10) * v4 + 40;
  result = FSS_calloc_plt(a1, v5);
  if (result == 0) {
    return result;
  }
LABEL_14:
  *(_DWORD*)(result + 8) = v5;
  v7 = *(__int16*)(a2 + 8);
  *(_WORD*)(result + 32) = v4;
  *(_WORD*)(result + 28) = v7;
  v8 = *(__int16*)(a2 + 10);
  *(_WORD*)(result + 30) = *(_WORD*)(a2 + 10);
  *(_WORD*)(result + 12) = *(_WORD*)(a2 + 12);
  *(_WORD*)(result + 14) = *(_WORD*)(a2 + 14);
  *(_WORD*)(result + 16) = *(_WORD*)(a2 + 16);
  *(_WORD*)(result + 18) = *(_WORD*)(a2 + 18);
  if (*(_BYTE*)(a2 + 21) != 0) {
  LABEL_15:
    v9 = *(unsigned __int16*)(a2 + 10);
    v10 = *(_QWORD*)(a2 + 32);
    v11 = *(unsigned int*)(a2 + 4);
    v12 = result;
    memcpy_plt(result + 40, v10 + v11, v9 * v4);
    return v12;
  }
  if ((__int16)v2 == 4) {
    if ((*(_WORD*)(a2 + 8) & 1) == 0) {
      goto LABEL_15;
    }
  }
  else if ((unsigned __int16)v2 == 1 && (*(_WORD*)(a2 + 8) & 7) == 0) {
    goto LABEL_15;
  }
  if (v8 >= 1) {
    v13 = v7 * (__int16)v2;
    if (v13 >= 1) {
      v14 = result + 40;
      v15 = 0;
      v16 = 0;
      v17 = SdkData_e880d0;
      v18 = *(_QWORD*)(a2 + 32) + *(unsigned int*)(a2 + 4);
      while ((unsigned int)v13 < 4) {
        v19 = 0;
        v20 = v15;
        if ((v13 & 3) != 0) {
          goto LABEL_42;
        }
      LABEL_27:
        v15 += v13;
        v14 += v4;
        if (++v16 == v8) {
          return result;
        }
      }
      v19 = 0;
      do {
        if ((*(_BYTE*)(v17 + (((_BYTE)v15 + (_BYTE)v19) & 7)) &
             *(_BYTE*)(v18 + ((unsigned __int64)(v15 + v19) >> 3))) != 0) {
          *(_BYTE*)(v14 + ((unsigned __int64)v19 >> 3)) |=
              *(_BYTE*)(v17 + (v19 & 4));
        }
        if ((*(_BYTE*)(v17 + ((v15 + v19 + 1) & 7LL)) &
             *(_BYTE*)(v18 + ((unsigned __int64)(v15 + v19 + 1) >> 3))) != 0) {
          *(_BYTE*)(v14 + ((unsigned __int64)v19 >> 3)) |=
              *(_BYTE*)(v17 + (v19 & 4) + 1);
        }
        if ((*(_BYTE*)(v17 + ((v15 + v19 + 2) & 7LL)) &
             *(_BYTE*)(v18 + ((unsigned __int64)(v15 + v19 + 2) >> 3))) != 0) {
          *(_BYTE*)(v14 + ((unsigned __int64)v19 >> 3)) |=
              *(_BYTE*)(v17 + (v19 & 4) + 2);
        }
        if ((*(_BYTE*)(v17 + ((v15 + v19 + 3) & 7LL)) &
             *(_BYTE*)(v18 + ((unsigned __int64)(v15 + v19 + 3) >> 3))) != 0) {
          *(_BYTE*)(v14 + ((unsigned __int64)v19 >> 3)) |=
              *(_BYTE*)(v17 + (v19 & 4) + 3);
        }
        v19 += 4;
      } while ((v13 & 0x7FFFFFFC) != v19);
      v20 = v15 + v19;
      if ((v13 & 3) == 0) {
        goto LABEL_27;
      }
    LABEL_42:
      v21 = v13 & 3;
      do {
        if ((*(_BYTE*)(v17 + (v20 & 7)) &
             *(_BYTE*)(v18 + ((unsigned __int64)v20 >> 3))) != 0) {
          *(_BYTE*)(v14 + ((unsigned __int64)v19 >> 3)) |=
              *(_BYTE*)(v17 + (v19 & 7));
        }
        ++v20;
        ++v19;
        --v21;
      } while (v21 != 0);
      goto LABEL_27;
    }
  }
  return result;
}

__int16* nn_fontll_itype_44fda0(void* a1, __int64 a2, unsigned __int16 a3,
                                __int64 a4, _WORD* a5)
{
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int16* v13;
  __int16 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int16* v17;
  _WORD* v18;
  __int16 v19;
  __int16 v20;
  int v21;
  __int16 v22;
  int v23;
  unsigned __int16 v24;
  int v25;
  int v26;
  int v27;
  __int16 v28;
  int v29;
  int v30;
  __int64 v31;
  __int16 v32;
  _WORD* v33;
  unsigned int v34;
  unsigned __int16 v35;
  __int64 v37;

  if (a5[13] != 1) {
    return nullptr;
  }
  v10 = ((unsigned int)(unsigned __int16)a5[4] + 7) >> 3;
  v11 = v10 * (unsigned __int16)a5[5] + 40;
  v12 = FSS_calloc_plt(a1, v11);
  v13 = (__int16*)v12;
  if (v12 != 0) {
    *(_DWORD*)(v12 + 8) = v11;
    v14 = a5[4];
    *(_WORD*)(v12 + 32) = v10;
    *(_WORD*)(v12 + 28) = v14;
    *(_WORD*)(v12 + 30) = a5[5];
    *(_WORD*)(v12 + 12) = a5[6];
    *(_WORD*)(v12 + 14) = a5[7];
    *(_WORD*)(v12 + 16) = a5[8];
    *(_WORD*)(v12 + 18) = a5[9];
    if (a3 != 0) {
      v15 = 0;
      v37 = v12 + 40;
      v16 = SdkData_e880d0;
      while (1) {
        v17 = (unsigned __int16*)(a4 + 4 * v15);
        v18 = (_WORD*)nn_fontll_itype_44eee0(a1, a2, a5[11], a5[12], *v17, 1u);
        if (*((_DWORD*)a1 + 18) != 0) {
          break;
        }
        if (v18 != nullptr) {
          v19 = *((char*)v17 + 3);
          v20 = v18[6] + *((char*)v17 + 2);
          v21 = v20;
          v18[6] = v20;
          v22 = v18[7] + v19;
          v18[7] = v22;
          v23 = v13[6];
          v24 = v20 - v23;
          if (v21 < v23 || (v25 = (__int16)v18[14]) + v21 > v13[14] + v23 ||
              (v26 = v22, v27 = v13[7], v28 = v27 - v26, v27 < v26) ||
              (v29 = (__int16)v18[15], v26 - v29 < v27 - v13[15])) {
            *((_DWORD*)a1 + 18) = 428;
          }
          else if (v29 >= 1) {
            LOWORD(v30) = 0;
            v31 = v37 + v13[16] * (__int64)v28;
            v32 = v13[16];
            v33 = v18 + 20;
            do {
              if ((__int16)v25 >= 1) {
                v34 = 0;
                v35 = v24;
                do {
                  if ((*(_BYTE*)(v16 + (v34 & 7)) &
                       *((_BYTE*)v33 + ((unsigned __int64)v34 >> 3))) != 0) {
                    *(_BYTE*)(v31 + (v35 >> 3)) |= *(_BYTE*)(v16 + (v35 & 7));
                    LOWORD(v25) = v18[14];
                  }
                  ++v34;
                  ++v35;
                } while ((int)v34 < (__int16)v25);
                v32 = v13[16];
                LOWORD(v29) = v18[15];
              }
              v31 += v32;
              v30 = (__int16)(v30 + 1);
              v33 = (_WORD*)((char*)v33 + (__int16)v18[16]);
            } while (v30 < (__int16)v29);
          }
        }
        FSS_free_char_plt(a1, v18);
        if (++v15 == a3) {
          return v13;
        }
      }
      FSS_free_char_plt(a1, v13);
      return nullptr;
    }
  }
  return v13;
}

__int64 check_scale(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v6;
  __int64 result;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  _DWORD v40[4];
  char v41[4];
  __int64 v42;

  v6 = *(_DWORD*)(a1 + 76);
  v40[0] = a3;
  v40[1] = a4;
  v42 = 0;
  v40[2] = a5;
  v40[3] = a6;
  *(_DWORD*)(a1 + 76) = v6 & 0xF7FFFFFF;
  result = get_scale_inputs_plt(v40, (char*)&v42 + 4, &v42, v41);
  if ((_DWORD)result != 0) {
    *(_DWORD*)(a1 + 72) = result;
  }
  else {
    result = 502;
    if (SHIDWORD(v42) >= 0x10000 && (int)v42 >= 0x10000) {
      v14 = a3 >= 0 ? a3 : -a3;
      v15 = a4 >= 0 ? a4 : -a4;
      v16 = v14 >> 30;
      v17 = a5 >= 0 ? a5 : -a5;
      v18 = a6 >= 0 ? a6 : -a6;
      if (v16 == 0 && v15 >> 30 == 0 && v17 >> 30 == 0 && v18 >> 30 == 0) {
        if (a2 != 0) {
          v19 = *(unsigned __int16*)(a2 + 18) << 16;
          v20 = vardiv_64_plt((unsigned int)a3, v19, 16);
          v21 = vardiv_64_plt((unsigned int)a4, v19, 16);
          v22 = vardiv_64_plt((unsigned int)a5, v19, 16);
          v23 = vardiv_64_plt((unsigned int)a6, v19, 16);
          v24 = *(__int16*)(a2 + 36);
          v25 = *(__int16*)(a2 + 38);
          v26 = v20 * v24;
          v27 = v20 * v24 + v21 * v25;
          if (v27 < 0) {
            v27 = -v27;
          }
          if ((unsigned int)v27 >> 30 != 0) {
            return 502;
          }
          v28 = v22 * v24 + v23 * v25;
          if (v28 < 0) {
            v28 = -v28;
          }
          if ((unsigned int)v28 >> 30 != 0) {
            return 502;
          }
          if ((unsigned int)v27 >> 28 != 0 || (unsigned int)v28 >> 28 != 0) {
            *(_DWORD*)(a1 + 76) |= 0x8000000u;
            v24 = *(__int16*)(a2 + 36);
            v26 = v20 * v24;
          }
          v29 = *(__int16*)(a2 + 42);
          v30 = v26 + v21 * v29;
          if (v30 < 0) {
            v30 = -v30;
          }
          if ((unsigned int)v30 >> 30 != 0) {
            return 502;
          }
          v31 = v22 * v24 + v23 * v29;
          if (v31 < 0) {
            v31 = -v31;
          }
          if ((unsigned int)v31 >> 30 != 0) {
            return 502;
          }
          if ((unsigned int)v30 >> 28 != 0 || (unsigned int)v31 >> 28 != 0) {
            *(_DWORD*)(a1 + 76) |= 0x8000000u;
          }
          v32 = *(__int16*)(a2 + 40);
          v33 = *(__int16*)(a2 + 38);
          v34 = v20 * v32;
          v35 = v20 * v32 + v21 * v33;
          if (v35 < 0) {
            v35 = -v35;
          }
          if ((unsigned int)v35 >> 30 != 0) {
            return 502;
          }
          v36 = v22 * v32 + v23 * v33;
          if (v36 < 0) {
            v36 = -v36;
          }
          if ((unsigned int)v36 >> 30 != 0) {
            return 502;
          }
          if ((unsigned int)v35 >> 28 != 0 || (unsigned int)v36 >> 28 != 0) {
            *(_DWORD*)(a1 + 76) |= 0x8000000u;
            v32 = *(__int16*)(a2 + 40);
            v34 = v20 * v32;
          }
          v37 = *(__int16*)(a2 + 42);
          v38 = v34 + v21 * v37;
          if (v38 < 0) {
            v38 = -v38;
          }
          if ((unsigned int)v38 >> 30 != 0) {
            return 502;
          }
          v39 = v22 * v32 + v23 * v37;
          if (v39 < 0) {
            v39 = -v39;
          }
          if ((unsigned int)v39 >> 30 != 0) {
            return 502;
          }
          else if ((unsigned int)v38 >> 28 != 0 ||
                   (unsigned int)v39 >> 28 != 0) {
            *(_DWORD*)(a1 + 76) |= 0x8000000u;
            return 0;
          }
          else {
            return 0;
          }
        }
        else {
          return 304;
        }
      }
    }
  }
  return result;
}

__int64 get_scale_inputs(_DWORD* a1, int* a2, int* a3, int* a4)
{
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v11;
  unsigned int v12;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int* v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  int v33;
  unsigned int v34;
  unsigned int v35;

  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = v5 | v6;
  if (*(_QWORD*)(a1 + 1) == 0) {
    if (v4 >= 0) {
      v8 = *a1;
    }
    else {
      v8 = -v4;
    }
    *a2 = v8;
    v9 = a1[3];
    if (v9 < 0) {
      v9 = -v9;
    }
    *a3 = v9;
  LABEL_8:
    *a4 = v7;
    return 0;
  }
  if (v4 >= 0) {
    v11 = *a1;
  }
  else {
    v11 = -v4;
  }
  if ((v5 & 0x80000000) == 0) {
    v12 = a1[1];
  }
  else {
    v12 = -v5;
  }
  if (v11 >> 30 != 0 || v12 >> 30 != 0) {
    return 502;
  }
  v14 = a1[3];
  v15 = v6 >= 0 ? a1[2] : -v6;
  v16 = v15 >> 30;
  v17 = (v14 & 0x80000000) == 0 ? a1[3] : -v14;
  if (v16 != 0 || v17 >> 30 != 0) {
    return 502;
  }
  if ((v4 | v5) != 0 && (v6 | v14) != 0) {
    v21 = a4;
    v22 = vardiv_64_plt((unsigned int)v4, (unsigned int)v6, 16);
    if (v22 != (unsigned int)vardiv_64_plt(v5, v14, 16)) {
      v34 = -v6;
      v35 = v4;
      fixed_norm_plt(&v34);
      v23 = varmul_64_plt((unsigned int)v4, v35, 16);
      v24 = varmul_64_plt((unsigned int)v6, v34, 16);
      v25 = v34;
      *a2 = v23 - v24;
      v26 = varmul_64_plt(v5, v25, 16);
      v27 = varmul_64_plt(v14, v35, 16) + v26;
      v28 = v35;
      *a3 = v27;
      v29 = *a2;
      if (*a2 < 0) {
        v29 = -v29;
      }
      *a2 = v29;
      v30 = *a3;
      if (*a3 < 0) {
        v30 = -v30;
      }
      *a3 = v30;
      v31 = varmul_64_plt(v28, v5, 16);
      v32 = v31 - (unsigned int)varmul_64_plt(v34, v14, 16);
      *v21 = v32;
      v33 = vardiv_64_plt(v32, (unsigned int)*a3, 16);
      a4 = v21;
      v7 = v33;
      goto LABEL_8;
    }
  }
  return 503;
}

__int64 modify_scale(unsigned int* a1, unsigned int a2)
{
  __int64 result;
  unsigned int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;

  v13 = 0;
  v11 = 0;
  v12 = 0;
  result = get_scale_inputs_plt(a1, &v13, &v12, &v11);
  if ((_DWORD)result == 0) {
    v5 = v11;
    if (v11 != 0) {
      v6 = varmul_64_plt(v11, a2, 16);
      a2 = vardiv_64_plt(v5 + a2, (unsigned int)(0x10000 - v6), 16);
    }
    v7 = varmul_64_plt(v12, a2 - v5, 16);
    v8 = vardiv_64_plt(v7, v13, 16);
    v9 = a1[1] + varmul_64_plt(*a1, v8, 16);
    v10 = a1[2];
    a1[1] = v9;
    a1[3] += varmul_64_plt(v10, v8, 16);
    return 0;
  }
  return result;
}

__int64 FSS_get_table(__int64 a1, int a2, unsigned __int8 a3, _DWORD* a4)
{
  int v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned int* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;

  v4 = a3;
  v20 = 0;
  if ((unsigned int)a3 - 3 < 0xFFFFFFFE) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 16);
  if (v6 == 0) {
    v10 = 303;
  LABEL_49:
    *(_DWORD*)(a1 + 72) = v10;
    return 0;
  }
  v7 = *(_QWORD*)(v6 + 48);
  if (a2 <= 1751474531) {
    if (a2 <= 1196643649) {
      if (a2 == 1195656518) {
        v11 = 96;
      }
      else {
        if (a2 != 1196445523) {
          goto LABEL_47;
        }
        v11 = 112;
      }
    }
    else {
      switch (a2) {
      case 1196643650:
        v11 = 104;
        break;
      case 1330851634:
        v8 = *(unsigned int*)(v6 + 68);
        if ((_DWORD)v8 != 0) {
          v9 = 100;
          *a4 = 100;
          if (a3 != 1) {
            goto LABEL_45;
          }
          return 1;
        }
        goto LABEL_47;
      case 1668112752:
        v11 = 88;
        break;
      default:
        goto LABEL_47;
      }
    }
    v12 = *(unsigned int**)(v6 + v11);
    if (v12 != nullptr) {
      v8 = *v12;
      v9 = v12[1];
      *a4 = v9;
      if (a3 != 1) {
        goto LABEL_45;
      }
      return 1;
    }
    goto LABEL_47;
  }
  if (a2 > 1851878756) {
    switch (a2) {
    case 1851878757:
      v8 = *(unsigned int*)(v6 + 56);
      if ((_DWORD)v8 != 0) {
        v9 = *(unsigned int*)(v6 + 60);
        *a4 = v9;
        if (a3 != 1) {
          goto LABEL_45;
        }
        return 1;
      }
      goto LABEL_47;
    case 1886352244:
      v8 = *(unsigned int*)(v6 + 84);
      if ((_DWORD)v8 == 0) {
        goto LABEL_47;
      }
      v9 = 32;
      break;
    case 1986553185:
      v8 = *(unsigned int*)(v6 + 80);
      if ((_DWORD)v8 == 0) {
        goto LABEL_47;
      }
      v9 = 36;
      break;
    default:
      goto LABEL_47;
    }
    *a4 = v9;
    if (a3 != 1) {
      goto LABEL_45;
    }
    return 1;
  }
  if (a2 == 1751474532) {
    v8 = *(unsigned int*)(v6 + 72);
    if ((_DWORD)v8 != 0) {
      v9 = 56;
      *a4 = 56;
      if (a3 != 1) {
        goto LABEL_45;
      }
      return 1;
    }
    goto LABEL_47;
  }
  if (a2 == 1751672161) {
    v8 = *(unsigned int*)(v6 + 76);
    if ((_DWORD)v8 != 0) {
      v9 = 36;
      *a4 = 36;
      if (a3 != 1) {
        goto LABEL_45;
      }
      return 1;
    }
    goto LABEL_47;
  }
  if (a2 != 1835104368 || (_DWORD)(v8 = *(unsigned int*)(v6 + 64)) == 0) {
  LABEL_47:
    if (*(_BYTE*)(v7 + 65) == 6) {
      v10 = 441;
      goto LABEL_49;
    }
    v15 = *(_QWORD*)(v7 + 16);
    if (*(_QWORD*)(v7 + 56) == 0) {
      goto LABEL_55;
    }
    v17 = a1;
    if ((unsigned int)fix_fnt_plt(a1, *(_QWORD*)(v6 + 48)) != 0) {
      return 0;
    }
    a1 = v17;
    if (*(_QWORD*)(v7 + 56) == 0) {
    LABEL_55:
      v18 = a1;
      v19 = load_fnt_plt(a1, v7);
      a1 = v18;
      if (v19 != 0) {
        return 0;
      }
    }
    *(_QWORD*)(a1 + 48) = v7;
    v14 = a1;
    if ((unsigned int)get_ttf_table_info_plt(a1, *(_QWORD*)(v7 + 56),
                                             (unsigned int)a2, &v20, a4) == 0) {
      return 0;
    }
    if (v4 != 1) {
      result = nn_fontll_itype_4511c0_alt1(v14, v7, 0, v15, (unsigned int)a2,
                                           v20, (unsigned int)*a4);
      if (result != 0) {
        goto LABEL_46;
      }
      return result;
    }
    return 1;
  }
  v9 = 32;
  *a4 = 32;
  if (a3 == 1) {
    return 1;
  }
LABEL_45:
  v14 = a1;
  result = nn_fontll_itype_4511c0_alt1(a1, v6, 1, *(_QWORD*)(v6 + 16),
                                       (unsigned int)a2, v8, v9);
  if (result != 0) {
  LABEL_46:
    ++*(_DWORD*)(v14 + 120);
  }
  return result;
}

__int64 nn_fontll_itype_4511c0(__int64 a1, __int64 a2, unsigned __int8 a3,
                               __int64 a4, int a5, unsigned int a6,
                               unsigned int a7)
{
  __int64 v7;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 result;
  int v16;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;

  v7 = *(_QWORD*)(a1 + 128);
  *(_DWORD*)(a1 + 72) = 0;
  v11 = *(_QWORD*)(v7 + 16768);
  if (v11 == 0) {
  LABEL_2:
    v12 = a3;
    if (a3 != 0) {
      if (a4 != 0) {
        v13 = 0;
        v14 = a4 + a6;
        if (v14 == 0) {
          goto LABEL_35;
        }
        goto LABEL_30;
      }
      if (a7 != 0) {
        v19 = FS_open_plt(a1, *(_QWORD*)(a2 + 8));
        if (v19 != 0) {
          v20 = v19;
          v14 = FSS_malloc_plt(a1, a7);
          if (v14 != 0) {
            FS_seek_plt(a1, v20, a6, 0);
            v21 = FS_read_plt(a1, v20, v14, a7);
            if (*(_DWORD*)(a1 + 72) != 0 || v21 != a7) {
              FSS_free_plt(a1, v14);
              v14 = 0;
            }
          }
          FS_close_plt(a1, v20);
          v13 = 1;
          if (v14 == 0) {
            goto LABEL_35;
          }
          goto LABEL_30;
        }
      }
      v14 = 0;
      v13 = 1;
    }
    else {
      v16 = *(_DWORD*)(a2 + 36);
      if ((v16 & 0x18) != 0 &&
          (a5 == 1735162214 || a5 == 1819239265 || a5 == 1752003704)) {
        *(_DWORD*)(a1 + 72) = 701;
        return 0;
      }
      if (a4 != 0) {
        if ((v16 & 4) != 0) {
          *(_DWORD*)(a1 + 72) = 431;
          return 0;
        }
        v13 = 0;
        v14 = a4 + *(unsigned int*)(a2 + 28) + a6;
        if (v14 == 0) {
          goto LABEL_35;
        }
        goto LABEL_30;
      }
      v14 = ttf_read_plt(a1, *(_QWORD*)(a2 + 56), a6, a7);
      v13 = 1;
      if (v14 != 0) {
      LABEL_30:
        v22 = FSS_malloc_plt(a1, 40);
        if (v22 != 0) {
          *(_QWORD*)v22 = a2;
          *(_DWORD*)(v22 + 16) = a5;
          if ((v13 | v12) != 0 || (*(_BYTE*)(a2 + 36) & 4) == 0) {
            *(_QWORD*)(v22 + 8) = v14;
          }
          *(_BYTE*)(v22 + 24) = v13;
          *(_DWORD*)(v22 + 20) = 1;
          *(_QWORD*)(v22 + 32) = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16768LL);
          *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16768LL) = v22;
        }
      }
    }
  LABEL_35:
    v23 = *(_DWORD*)(a1 + 72);
    if (v23 != 0) {
      result = 0;
    }
    else {
      result = v14;
    }
    if (v13 != 0 && v23 != 0) {
      FSS_free_plt(a1, v14);
      return 0;
    }
    return result;
  }
  while (1) {
    if (*(_QWORD*)v11 == a2 && *(_DWORD*)(v11 + 16) == a5) {
      result = *(_QWORD*)(v11 + 8);
      if (result != 0) {
        break;
      }
    }
    v11 = *(_QWORD*)(v11 + 32);
    if (v11 == 0) {
      goto LABEL_2;
    }
  }
  ++*(_DWORD*)(v11 + 20);
  return result;
}

__int64 FSS_free_table(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v6;
  int v8;
  __int64 result;
  char v10;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 16);
  if (v2 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16768LL);
    if (v4 != 0) {
      while (1) {
        v6 = *(_QWORD*)(v4 + 8);
        if (v6 != 0 &&
            *(_QWORD*)v4 == nn_fontll_itype_4514f0_alt1(v4, v2, &v10) &&
            v6 == a2) {
          break;
        }
        v4 = *(_QWORD*)(v4 + 32);
        if (v4 == 0) {
          goto LABEL_15;
        }
      }
      v8 = *(_DWORD*)(v4 + 20);
      if (v8 != 0) {
        result = 0;
        *(_DWORD*)(v4 + 20) = v8 - 1;
        --*(_DWORD*)(a1 + 120);
      }
      else {
        result = 702;
      }
    }
    else {
    LABEL_15:
      result = 204;
    }
  }
  else {
    result = 303;
  }
  *(_DWORD*)(a1 + 72) = result;
  return result;
}

__int64 nn_fontll_itype_4514f0(__int64 a1, __int64 a2, _BYTE* a3)
{
  __int64 result;
  int v5;

  result = *(_QWORD*)(a2 + 48);
  *a3 = 0;
  v5 = *(_DWORD*)(a1 + 16);
  if (v5 <= 1751474531) {
    if (v5 <= 1196643649) {
      if (v5 == 1195656518) {
        if (*(_QWORD*)(a2 + 96) == 0) {
          return result;
        }
        goto LABEL_36;
      }
      if (v5 == 1196445523 && *(_QWORD*)(a2 + 112) != 0) {
        goto LABEL_36;
      }
    }
    else {
      if (v5 == 1196643650) {
        if (*(_QWORD*)(a2 + 104) == 0) {
          return result;
        }
        goto LABEL_36;
      }
      if (v5 == 1330851634) {
        if (*(_DWORD*)(a2 + 68) == 0) {
          return result;
        }
        goto LABEL_36;
      }
      if (v5 == 1668112752 && *(_QWORD*)(a2 + 88) != 0) {
        goto LABEL_36;
      }
    }
  }
  else {
    if (v5 <= 1851878756) {
      if (v5 == 1751474532) {
        if (*(_DWORD*)(a2 + 72) == 0) {
          return result;
        }
      }
      else if (v5 == 1751672161) {
        if (*(_DWORD*)(a2 + 76) == 0) {
          return result;
        }
      }
      else if (v5 != 1835104368 || *(_DWORD*)(a2 + 64) == 0) {
        return result;
      }
    LABEL_36:
      *a3 = 1;
      return a2;
    }
    if (v5 == 1851878757) {
      if (*(_DWORD*)(a2 + 56) == 0) {
        return result;
      }
      goto LABEL_36;
    }
    if (v5 == 1886352244) {
      if (*(_DWORD*)(a2 + 84) == 0) {
        return result;
      }
      goto LABEL_36;
    }
    if (v5 == 1986553185 && *(_DWORD*)(a2 + 80) != 0) {
      goto LABEL_36;
    }
  }
  return result;
}

__int64 nn_fontll_itype_4534a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  __int64 v14;
  _DWORD* v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  _DWORD* v23;
  unsigned int* v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _DWORD* v30;
  int* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int* v54;
  int* v55;
  int v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  unsigned int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  unsigned int* v65;
  _BYTE* v66;
  _BYTE* v67;
  unsigned int* v68;
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  _DWORD* v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  unsigned int* v80;
  unsigned __int16* v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _DWORD* v96;
  int* v97;
  unsigned __int16* v98;
  unsigned int* v99;
  __int64 v100;
  unsigned int v101;
  int v102;
  int v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD v108[5];
  struct {
    __int64 v109;
    __int64 v110;
    _QWORD v111[8];
    __int64 v112;
    __int64 v113;
    _QWORD v114[8];
    int v115;
  } v109_;

  v2 = *(_QWORD*)(a2 + 80);
  v109_.v115 = 0;
  v3 = *(unsigned __int16*)(v2 + 2);
  memset(v109_.v114, 0, sizeof(v109_.v114));
  v109_.v112 = 0;
  v109_.v113 = 0;
  memset(v109_.v111, 0, sizeof(v109_.v111));
  v4 = __rev16(v3);
  v109_.v109 = 0;
  v109_.v110 = 0;
  memset(v108, 0, sizeof(v108));
  if ((unsigned int)v4 >= 0x15) {
    *(_DWORD*)(a1 + 72) = 520;
    return 520;
  }
  v6 = *(_QWORD*)(a2 + 40);
  v7 = a2;
  v8 = *(unsigned __int16*)(v6 + 4);
  if (*(_WORD*)(v6 + 4) != 0) {
    v9 = (int*)(v6 + 24);
    while (*(v9 - 3) != 1668112752) {
      v9 += 4;
      if (--v8 == 0) {
        goto LABEL_7;
      }
    }
    v10 = *v9;
    if (v3 != 0) {
    LABEL_10:
      v11 = v4 & 7;
      if ((unsigned int)v4 >= 8) {
        v13 = (unsigned int*)(v2 + 32);
        v14 = 0;
        v15 = v109_.v114;
        do {
          v16 = *(v13 - 2);
          v14 -= 8;
          v17 = *v13;
          v18 = bswap32(*(v13 - 4));
          *(v15 - 4) = bswap32(*(v13 - 6));
          *(v15 - 3) = v18;
          v19 = v13[2];
          *(v15 - 2) = bswap32(v16);
          *(v15 - 1) = bswap32(v17);
          v20 = bswap32(v13[4]);
          *v15 = bswap32(v19);
          v15[1] = v20;
          v21 = v13[6];
          v22 = v13[8];
          v13 += 16;
          v15[2] = bswap32(v21);
          v15[3] = bswap32(v22);
          v15 += 8;
        } while (-(v4 & 0x18) != v14);
        v12 = -v14;
        if ((v4 & 7) == 0) {
        LABEL_18:
          v26 = v109_.v112;
          v27 = v4 & 7;
          if ((unsigned int)v4 >= 8) {
            v29 = 0;
            v30 = v109_.v111;
            v31 = (int*)v109_.v114;
            do {
              v32 = *(v31 - 3);
              v33 = *(v31 - 2);
              v29 -= 8;
              v34 = v32 - v26;
              v35 = v10 - v26;
              if (v34 >= 0) {
                v35 = v34;
              }
              v36 = v33 - v32;
              v37 = v10 - v32;
              if (v36 >= 0) {
                v37 = v36;
              }
              *(v30 - 4) = v35;
              *(v30 - 3) = v37;
              v38 = *(v31 - 1);
              v39 = v38 - v33;
              v40 = v10 - v33;
              if (v39 < 0) {
                v39 = v40;
              }
              v41 = *v31;
              v42 = v31[1];
              v43 = *v31 - v38;
              v44 = v10 - v38;
              if (v43 >= 0) {
                v44 = v43;
              }
              *(v30 - 2) = v39;
              *(v30 - 1) = v44;
              v45 = v42 - v41;
              if (v42 - v41 < 0) {
                v45 = v10 - v41;
              }
              v46 = v31[2];
              v47 = v31[3];
              v48 = v46 - v42;
              v49 = v10 - v42;
              if (v48 >= 0) {
                v49 = v48;
              }
              *v30 = v45;
              v30[1] = v49;
              v50 = v47 - v46;
              v51 = v10 - v46;
              if (v50 >= 0) {
                v51 = v50;
              }
              v26 = v31[4];
              v31 += 8;
              v52 = v26 - v47;
              v53 = v10 - v47;
              if (v52 >= 0) {
                v53 = v52;
              }
              v30[2] = v51;
              v30[3] = v53;
              v30 += 8;
            } while (-(v4 & 0x18) != v29);
            v28 = -v29;
            if ((v4 & 7) == 0) {
              goto LABEL_44;
            }
          }
          else {
            v28 = 0;
            if ((v4 & 7) == 0) {
            LABEL_44:
              v60 = 0;
              while (1) {
                v61 = *((_DWORD*)&v109_.v112 + v60);
                *((_WORD*)v108 + v60) = 0;
                if ((unsigned int)v4 >= 8) {
                  break;
                }
                v62 = 0;
                v63 = 0;
                if ((v4 & 7) != 0) {
                  goto LABEL_76;
                }
              LABEL_81:
                if (((v61 + v62) & 1) != 0) {
                  *((_WORD*)v108 + v60) = v62 + 1;
                }
                if (++v60 == v4) {
                  goto LABEL_83;
                }
              }
              v64 = 0;
              v62 = 0;
              v65 = (unsigned int*)v109_.v114;
              v66 = v109_.v111;
              do {
                if (*(v65 - 4) < v61 && (*(v66 - 16) & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                if (*(v65 - 3) < v61 && (*(v66 - 12) & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                if (*(v65 - 2) < v61 && (*(v66 - 8) & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                if (*(v65 - 1) < v61 && (*(v66 - 4) & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                if (*v65 < v61 && (*v66 & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                if (v65[1] < v61 && (v66[4] & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                if (v65[2] < v61 && (v66[8] & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                if (v65[3] < v61 && (v66[12] & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                v64 -= 8;
                v66 += 32;
                v65 += 8;
              } while (-(v4 & 0x18) != v64);
              v63 = -v64;
              if ((v4 & 7) == 0) {
                goto LABEL_81;
              }
            LABEL_76:
              v67 = (char*)&v109_.v109 + 4 * v63;
              v68 = (unsigned int*)&v109_.v112 + v63;
              v69 = v4 & 7;
              do {
                v70 = *v68++;
                if (v70 < v61 && (*v67 & 1) != 0) {
                  *((_WORD*)v108 + v60) = ++v62;
                }
                v67 += 4;
                --v69;
              } while (v69 != 0);
              goto LABEL_81;
            }
          }
          v54 = (int*)&v109_.v109 + v28;
          v55 = (int*)&v109_.v112 + v28 + 1;
          do {
            v57 = *v55++;
            v56 = v57;
            v58 = v57 - v26;
            v59 = v10 - v26;
            if (v58 >= 0) {
              v59 = v58;
            }
            --v27;
            *v54++ = v59;
            v26 = v56;
          } while (v27 != 0);
          goto LABEL_44;
        }
      }
      else {
        v12 = 0;
        if ((v4 & 7) == 0) {
          goto LABEL_18;
        }
      }
      v23 = (_DWORD*)&v109_.v112 + v12;
      v24 = (unsigned int*)(v2 + 8 * v12 + 8);
      do {
        v25 = *v24;
        v24 += 2;
        --v11;
        *v23++ = bswap32(v25);
      } while (v11 != 0);
      goto LABEL_18;
    }
  }
  else {
  LABEL_7:
    v10 = 0;
    *(_DWORD*)(a1 + 72) = 405;
    if (v3 != 0) {
      goto LABEL_10;
    }
  }
LABEL_83:
  v71 = FSS_malloc_plt(a1, (unsigned int)(v10 + v4));
  if (v71 == 0) {
    return *(unsigned int*)(a1 + 72);
  }
  v72 = v71;
  memcpy_plt(v71, *(_QWORD*)(v7 + 80), (unsigned __int16)(8 * v4) | 4u);
  if (v3 != 0) {
    v73 = *(_QWORD*)(v7 + 80);
    v74 = v4 & 3;
    if ((unsigned int)v4 < 4) {
      v75 = 0;
      if ((v4 & 3) == 0) {
        goto LABEL_94;
      }
      goto LABEL_92;
    }
    v106 = v7;
    v76 = (_DWORD*)(v72 + 32);
    v77 = 0;
    v78 = -(v4 & 0x1C);
    v79 = &v109_.v110;
    v80 = (unsigned int*)&v109_.v113;
    v81 = (unsigned __int16*)v108 + 2;
    do {
      v82 = *(v80 - 2);
      v83 = (unsigned int)v82 + *(v81 - 2);
      memcpy_plt(v72 + v83, v73 + v82, *((int*)v79 - 2));
      v84 = *(v81 - 1);
      v85 = *((int*)v79 - 1);
      *(v76 - 6) = bswap32(v83);
      v86 = *(v80 - 1);
      v87 = (unsigned int)(v86 + v84);
      memcpy_plt(v72 + v87, v73 + v86, v85);
      v88 = *v81;
      v89 = *(int*)v79;
      *(v76 - 4) = bswap32(v87);
      v90 = *v80;
      v91 = (unsigned int)(v90 + v88);
      memcpy_plt(v72 + v91, v73 + v90, v89);
      v92 = v81[1];
      v93 = *((int*)v79 + 1);
      *(v76 - 2) = bswap32(v91);
      v94 = v80[1];
      v95 = (unsigned int)(v94 + v92);
      memcpy_plt(v72 + v95, v73 + v94, v93);
      v77 -= 4;
      v79 += 2;
      v80 += 4;
      v81 += 4;
      *v76 = bswap32(v95);
      v76 += 8;
    } while (v78 != v77);
    v7 = v106;
    v75 = -v77;
    if (v74 != 0) {
    LABEL_92:
      v96 = (_DWORD*)(v72 + 8 * v75 + 8);
      v97 = (int*)&v109_.v109 + v75;
      v98 = (unsigned __int16*)v108 + v75;
      v99 = (unsigned int*)&v109_.v112 + v75;
      do {
        v101 = *v99++;
        v100 = v101;
        v103 = *v98++;
        v102 = v103;
        v104 = *v97++;
        v105 = (unsigned int)(v100 + v102);
        memcpy_plt(v72 + v105, v73 + v100, v104);
        --v74;
        *v96 = bswap32(v105);
        v96 += 2;
      } while (v74 != 0);
    }
  }
LABEL_94:
  if (*(_DWORD*)(v7 + 88) != 0) {
    FSS_free_plt(a1, *(_QWORD*)(v7 + 80));
  }
  *(_QWORD*)(v7 + 80) = v72;
  *(_DWORD*)(v7 + 88) = 1;
  return 0;
}

__int64 get_name(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *(_QWORD*)(a2 + 40);
  v3 = *(unsigned __int16*)(v2 + 4);
  if (*(_WORD*)(v2 + 4) == 0) {
  LABEL_5:
    *(_DWORD*)(a1 + 72) = 405;
    return 0;
  }
  v4 = (unsigned int*)(v2 + 24);
  while (*(v4 - 3) != 1851878757) {
    v4 += 4;
    if (--v3 == 0) {
      goto LABEL_5;
    }
  }
  v7 = ttf_read_plt(a1, a2, *(v4 - 1), *v4);
  if (v7 == 0 || *(_DWORD*)(a1 + 72) != 0) {
    return 0;
  }
  v8 = v7;
  v9 = get_abbreviated_name_plt(a1, v7);
  FSS_free_plt(a1, v8);
  return v9;
}

__int64 delete_lfnt(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* i;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 128);
  v5 = *(_QWORD**)(v2 + 16);
  if (v5 == a2) {
    *(_QWORD*)(v2 + 16) = a2[10];
  }
  else {
    do {
      v6 = v5;
      v5 = (_QWORD*)v5[10];
    } while (v5 != a2);
    v6[10] = a2[10];
  }
  delete_kern_plt(a1, a2);
  unload_fnt_plt(a1, a2);
  if (*a2 != 0) {
    fs__free_plt(a1, *a2);
  }
  v7 = a2[1];
  if (v7 != 0) {
    fs__free_plt(a1, v7);
  }
  for (i = *(_QWORD**)(*(_QWORD*)(a1 + 128) + 8LL); i != nullptr;
       i = (_QWORD*)i[36]) {
    if ((_QWORD*)*i == a2) {
      *i = 0;
    }
  }
  v9 = a2[5];
  if (v9 != 0) {
    fs__free_plt(a1, v9);
  }
  return fs__free_plt(a1, a2);
}

__int64 CACHE_ENTRY_calloc(__int64 a1)
{
  __int64 v1;
  __int64 result;
  _DWORD* v4;
  __int64 v5;
  int v6;
  int v7;
  char v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64* v13;
  int v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;

  v1 = *(_QWORD*)(a1 + 128);
  result = *(_QWORD*)(v1 + 16784);
  if (result != 0) {
  LABEL_2:
    v4 = *(_DWORD**)result;
    *v4 = **(_DWORD**)result + 1;
    *(_QWORD*)(v1 + 16784) = *(_QWORD*)(result + 8);
    *(_QWORD*)(result + 48) = 0;
    *(_QWORD*)(result + 56) = 0;
    *(_QWORD*)(result + 32) = 0;
    *(_QWORD*)(result + 40) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)(result + 24) = 0;
    *(_QWORD*)result = v4;
    *(_QWORD*)(result + 8) = 0;
    return result;
  }
  if (*(_DWORD*)(v1 + 8216) >= 0x59u) {
    while (1) {
      *(_DWORD*)(a1 + 72) = 0;
      v5 = fs__malloc_plt(a1, 8152);
      if (v5 != 0) {
        v7 = 126;
        v8 = 0;
      LABEL_12:
        *(_DWORD*)v5 = 0;
        *(_QWORD*)(v5 + 8) = 0;
        v9 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16776LL);
        *(_QWORD*)(v5 + 16) = v9;
        if (v9 != 0) {
          *(_QWORD*)(v9 + 8) = v5;
        }
        v10 = (__int64*)(v5 + 24);
        *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16776LL) = v5;
        v11 = v5 + 24;
        if ((v8 & 1) == 0) {
          v12 = v7 & 6;
          v13 = (__int64*)(v5 + 24);
          if ((unsigned int)(v7 - 1) >= 7) {
            v14 = v7 & 0x78;
            v15 = 0;
            do {
              v16 = (_QWORD*)(v5 + v15);
              v15 += 512;
              v14 -= 8;
              v16[11] = v5;
              v16 += 11;
              v16[8] = v5;
              *(v16 - 8) = v5;
              *(v16 - 7) = v16;
              v16[1] = v16 + 8;
              v16[16] = v5;
              v16[9] = v16 + 16;
              v16[24] = v5;
              v16[17] = v16 + 24;
              v16[25] = v16 + 32;
              v16[32] = v5;
              v16[33] = v16 + 40;
              v16[40] = v5;
              v16[41] = v16 + 48;
              v16[48] = v5;
              v16[49] = v16 + 56;
            } while (v14 != 0);
            v10 = (__int64*)(v5 + v15 + 24);
            v13 = v10;
          }
          for (; v12 != 0; v13 += 8) {
            v10 = v13 + 8;
            --v12;
            *v13 = v5;
            v13[1] = (__int64)(v13 + 8);
          }
        }
        *v10 = v5;
        v10[1] = 0;
        result = v5 + 24;
        *(_QWORD*)(v1 + 16784) = v11;
        goto LABEL_2;
      }
      v6 = get_some_back_plt(a1);
      result = *(_QWORD*)(v1 + 16784);
      if (v6 == 0) {
        break;
      }
      if (result != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        result = *(_QWORD*)(v1 + 16784);
        if (result != 0) {
          goto LABEL_2;
        }
      }
    }
    if (result != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = fs__malloc_plt(a1, 4056);
    if (v5 != 0) {
      v8 = 0;
      v7 = 62;
      goto LABEL_12;
    }
    while (1) {
      v17 = get_some_back_plt(a1);
      result = *(_QWORD*)(v1 + 16784);
      if (v17 == 0) {
        break;
      }
      if (result != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        result = *(_QWORD*)(v1 + 16784);
        if (result != 0) {
          goto LABEL_2;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = fs__malloc_plt(a1, 4056);
      v7 = 62;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    if (result != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = fs__malloc_plt(a1, 2008);
    if (v5 != 0) {
      v8 = 0;
      v7 = 30;
      goto LABEL_12;
    }
    while (1) {
      v18 = get_some_back_plt(a1);
      result = *(_QWORD*)(v1 + 16784);
      if (v18 == 0) {
        break;
      }
      if (result != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        result = *(_QWORD*)(v1 + 16784);
        if (result != 0) {
          goto LABEL_2;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = fs__malloc_plt(a1, 2008);
      v7 = 30;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    if (result != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = fs__malloc_plt(a1, 984);
    if (v5 != 0) {
      v8 = 0;
      v7 = 14;
      goto LABEL_12;
    }
    while (1) {
      v19 = get_some_back_plt(a1);
      result = *(_QWORD*)(v1 + 16784);
      if (v19 == 0) {
        break;
      }
      if (result != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v1 + 16784);
        if (v20 != 0) {
        LABEL_45:
          result = v20;
          goto LABEL_2;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = fs__malloc_plt(a1, 984);
      v7 = 14;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    if (result != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = fs__malloc_plt(a1, 472);
    if (v5 != 0) {
      v8 = 0;
      v7 = 6;
      goto LABEL_12;
    }
    while (1) {
      v21 = get_some_back_plt(a1);
      v22 = *(_QWORD*)(v1 + 16784);
      if (v21 == 0) {
        break;
      }
      if (v22 != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v1 + 16784);
        if (v20 != 0) {
          goto LABEL_45;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = fs__malloc_plt(a1, 472);
      v7 = 6;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    result = *(_QWORD*)(v1 + 16784);
    if (v22 != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = fs__malloc_plt(a1, 216);
    if (v5 != 0) {
      v8 = 0;
      v7 = 2;
      goto LABEL_12;
    }
    while (1) {
      v23 = get_some_back_plt(a1);
      v24 = *(_QWORD*)(v1 + 16784);
      if (v23 == 0) {
        break;
      }
      if (v24 != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v1 + 16784);
        if (v20 != 0) {
          goto LABEL_45;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = fs__malloc_plt(a1, 216);
      v7 = 2;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    result = *(_QWORD*)(v1 + 16784);
    if (v24 != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = fs__malloc_plt(a1, 88);
    if (v5 != 0) {
      v7 = 0;
      v8 = 1;
      goto LABEL_12;
    }
    while (1) {
      v25 = get_some_back_plt(a1);
      v26 = *(_QWORD*)(v1 + 16784);
      if (v25 == 0) {
        break;
      }
      if (v26 != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v1 + 16784);
        if (v20 != 0) {
          goto LABEL_45;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = fs__malloc_plt(a1, 88);
      v8 = 1;
      v7 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    result = *(_QWORD*)(v1 + 16784);
    if (v26 != 0) {
      goto LABEL_2;
    }
  }
  else {
    result = 0;
  }
  *(_DWORD*)(a1 + 72) = 201;
  return result;
}

__int64 CACHE_ENTRY_free(__int64 result, unsigned __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64* v4;
  _QWORD* v5;
  _QWORD** v6;
  _QWORD* v7;
  bool v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v15;

  v3 = *a2;
  v4 = (unsigned __int64*)(*(_QWORD*)(result + 128) + 16784LL);
  if (*(_DWORD*)v3 <= 1u) {
    v5 = nullptr;
    v6 = (_QWORD**)(*(_QWORD*)(result + 128) + 16784LL);
    do {
      v7 = v5;
      v5 = *v6;
      v8 = *v6 == nullptr;
      v6 = (_QWORD**)(*v6 + 1);
    } while (!v8 && (unsigned __int64)v5 < v3);
    for (; v5 != nullptr; v5 = (_QWORD*)v5[1]) {
      if (*v5 != v3) {
        break;
      }
    }
    if (v7 != nullptr) {
      v7[1] = v5;
      v11 = *(_QWORD*)(v3 + 8);
      v10 = *(_QWORD*)(v3 + 16);
      if (v11 == 0) {
      LABEL_14:
        if (v10 != 0) {
          *(_QWORD*)(v10 + 8) = *(_QWORD*)(v3 + 8);
        }
        v12 = *(_QWORD*)(result + 128);
        if (*(_QWORD*)(v12 + 16776) == v3) {
          *(_QWORD*)(v12 + 16776) = *(_QWORD*)(v3 + 8);
        }
        return fs__free_plt(result, v3);
      }
    }
    else {
      *v4 = (unsigned __int64)v5;
      v11 = *(_QWORD*)(v3 + 8);
      v10 = *(_QWORD*)(v3 + 16);
      if (v11 == 0) {
        goto LABEL_14;
      }
    }
    *(_QWORD*)(v11 + 16) = v10;
    goto LABEL_14;
  }
  v13 = *v4;
  --*(_DWORD*)v3;
  if (v13 != 0 && (unsigned __int64)a2 > v13) {
    do {
      v15 = v13;
      v13 = *(_QWORD*)(v13 + 8);
    } while (v13 != 0 && (unsigned __int64)a2 > v13);
    a2[1] = v13;
    *(_QWORD*)(v15 + 8) = a2;
  }
  else {
    a2[1] = v13;
    *v4 = (unsigned __int64)a2;
  }
  return result;
}

#pragma GCC visibility pop
