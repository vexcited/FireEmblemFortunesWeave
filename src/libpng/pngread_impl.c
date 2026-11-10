#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* png_create_colormap_entry(_DWORD* result, unsigned int, unsigned int,
                                  unsigned int, unsigned int, unsigned int,
                                  int);
__int64 decode_gamma(_DWORD*, unsigned int, int);
__int64 make_ga_colormap(_DWORD*);
__int64 make_rgb_colormap(_DWORD*);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_app_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_free_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_gamma_16bit_correct_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_gamma_significant_plt(_QWORD);
__int64 nndetailImagePng_png_get_rowbytes_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_malloc_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_muldiv_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_read_row_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_read_start_row_plt(_QWORD);
__int64 nndetailImagePng_png_read_transform_info_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_safe_execute_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_add_alpha_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_alpha_mode_fixed_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_background_fixed_plt(_QWORD, _QWORD, _QWORD,
                                                      _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_bgr_plt(_QWORD);
__int64 nndetailImagePng_png_set_expand_16_plt(_QWORD);
__int64 nndetailImagePng_png_set_expand_plt(_QWORD);
__int64 nndetailImagePng_png_set_gray_to_rgb_plt(_QWORD);
__int64 nndetailImagePng_png_set_interlace_handling_plt(_QWORD);
__int64 nndetailImagePng_png_set_keep_unknown_chunks_plt(_QWORD, _QWORD, _QWORD,
                                                         _QWORD);
__int64 nndetailImagePng_png_set_packing_plt(_QWORD);
__int64 nndetailImagePng_png_set_rgb_to_gray_fixed_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD);
__int64 nndetailImagePng_png_set_scale_16_plt(_QWORD);
__int64 nndetailImagePng_png_set_strip_alpha_plt(_QWORD);
__int64 nndetailImagePng_png_set_swap_alpha_plt(_QWORD);
__int64 nndetailImagePng_png_set_swap_plt(_QWORD);
__int64 nndetailImagePng_png_set_tRNS_to_alpha_plt(_QWORD);
__int64 png_image_read_background();
__int64 png_image_read_composite();
extern __int64 SdkData_e86b58;
extern __int64 SdkData_e86b60;
extern void (*SdkData_e86b50[40])();
__int64 png_image_read_colormap(__int64* a1);
__int64 png_image_read_direct(__int64 a1);

__int64 png_image_read_colormap(__int64* a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  int v5;
  int v6;
  unsigned int v8;
  int v9;
  __int16 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  void(__attribute__((noreturn)) * v20)();
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  bool v28;
  __int64 v29;
  int v30;
  int v31;
  void(__attribute__((noreturn)) * v32)();
  int v33;
  int v34;
  __int64 v35;
  int v36;
  void(__attribute__((noreturn)) * v37)();
  int v38;
  int v39;
  int v40;
  __int64 v41;
  int v42;
  int v43;
  void(__attribute__((noreturn)) * v44)();
  int v45;
  int v46;
  int v47;
  __int64 v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  unsigned __int64 v55;
  __int16 v56;
  __int16 v57;
  __int16 v58;
  int v59;
  unsigned __int64 v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  int v74;
  int v75;
  unsigned int v76;
  int v77;
  int v78;
  unsigned __int8* v79;
  unsigned int i;
  unsigned int v81;
  int v83;
  __int64 v84;
  unsigned int j;
  int v86;
  unsigned int v87;
  unsigned __int64 v89;
  unsigned __int8* v90;
  unsigned int v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  __int64* v97;
  _BOOL4 v98;
  int v99;
  int v100;
  int v101;
  unsigned __int64 v102;
  unsigned int v103;
  int v104;
  int v105;
  unsigned __int64 v106;
  unsigned int v107;
  int v108;
  int v109;
  unsigned __int64 v110;
  unsigned int v111;
  __int64 v112;
  unsigned int m;
  unsigned int v114;
  unsigned int k;
  __int64 v116;
  __int64 v117;
  int v118;
  unsigned int v119;
  int v120;
  __int64* v121;
  unsigned int v122;
  unsigned int v123;
  unsigned int v124;
  unsigned int v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  int v131;
  int v132;
  int v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned int v139;
  unsigned int v140;
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  unsigned int v153;
  __int64 v154;
  int v155;
  int v156;
  __int64 v157;
  int v158;
  struct {
    __int16 v160;
    __int16 v161;
    __int16 v162;
    __int16 v163;
    __int16 v164;
  } v160_;

  v1 = *a1;
  v2 = *(_DWORD*)(*a1 + 20);
  v3 = **(_QWORD**)*a1;
  v4 = v2 & 4;
  if ((v2 & 4) != 0) {
    v5 = 2;
  }
  else {
    v5 = 1;
  }
  v158 = v5;
  v6 = *(unsigned __int8*)(v3 + 727);
  if ((v6 & 4) != 0) {
    if ((v2 & 1) != 0) {
    LABEL_13:
      if ((v2 & 4) != 0) {
        v9 = 0xFFFF;
      }
      else {
        v9 = 255;
      }
      LODWORD(v157) = v9;
      HIDWORD(v157) = v9;
      v8 = v9;
      goto LABEL_17;
    }
  }
  else if (*(_WORD*)(v3 + 720) == 0 || (v2 & 1) != 0) {
    goto LABEL_13;
  }
  if ((v2 & 4) != 0) {
    v8 = 0;
    v157 = 0;
  }
  else {
    v79 = (unsigned __int8*)a1[4];
    if (v79 == nullptr) {
    LABEL_222:
      nndetailImagePng_png_error_plt(
          v3, "background color must be supplied to remove alpha/transparency");
      goto LABEL_223;
    }
    HIDWORD(v157) = v79[1];
    if ((v2 & 2) != 0) {
      v8 = v79[2];
      LODWORD(v157) = *v79;
    }
    else {
      v8 = v79[1];
      LODWORD(v157) = v8;
    }
  }
LABEL_17:
  v10 = *(_WORD*)(v3 + 1370);
  if ((v10 & 1) == 0) {
    if (*(_BYTE*)(v3 + 728) != 16 || (*(_BYTE*)(v1 + 24) & 4) != 0) {
      v11 = 45455;
    }
    else {
      v11 = 100000;
    }
    *(_DWORD*)(v3 + 1296) = v11;
    *(_WORD*)(v3 + 1370) = v10 | 1;
  }
  if (v6 <= 2) {
    if (v6 != 0) {
      if (v6 == 2) {
        goto LABEL_27;
      }
    LABEL_34:
      nndetailImagePng_png_error_plt(v3, "invalid PNG color type");
      goto LABEL_35;
    }
    v50 = *(unsigned __int8*)(v3 + 728);
    if (v50 <= 8) {
      v138 = v3;
      v3 = (unsigned int)(1 << v50);
      if ((unsigned int)v3 > *(_DWORD*)(v1 + 28)) {
      LABEL_223:
        nndetailImagePng_png_error_plt(v138,
                                       "gray[8] color-map: too few entries");
        goto LABEL_224;
      }
      v135 = v1;
      if (*(_WORD*)(v138 + 720) != 0) {
        v51 = v157;
        v52 = *(unsigned __int16*)(v138 + 872);
        if ((v2 & 4) != 0) {
          v53 = 0xFFFF;
        }
        else {
          v53 = 255;
        }
        if ((v2 & 1) != 0) {
          v54 = 0;
        }
        else {
          v54 = v53;
        }
      }
      else {
        v51 = v157;
        v54 = 0;
        v52 = 256;
      }
      v125 = 0xFFu / (unsigned __int8)(v3 - 1);
      v126 = 0;
      v127 = 0;
      do {
        while (v52 == v126) {
          png_create_colormap_entry(a1, v52, v51, HIDWORD(v157), v8, v54, v158);
          ++v126;
          v127 += v125;
          if ((_DWORD)v3 == v126) {
            goto LABEL_188;
          }
        }
        png_create_colormap_entry(a1, v126++, v127, v127, v127, 0xFFu, 3);
        v127 += v125;
      } while ((_DWORD)v3 != v126);
    LABEL_188:
      if (*(unsigned __int8*)(v138 + 728) <= 7u) {
        nndetailImagePng_png_set_packing_plt(v138);
      }
      v1 = v135;
      v47 = 0;
      v49 = 256;
      LODWORD(v48) = v3;
      v3 = v138;
      goto LABEL_203;
    }
    if (*(_DWORD*)(v1 + 28) < 0x100u) {
    LABEL_225:
      nndetailImagePng_png_error_plt(v3, "gray[16] color-map: too few entries");
      goto LABEL_226;
    }
    v48 = v1;
    for (i = 0; i != 256; ++i) {
      png_create_colormap_entry(a1, i, i, i, i, 0xFFu, 1);
    }
    if (*(_WORD*)(v3 + 720) == 0) {
      v47 = 0;
      v49 = 256;
      v1 = v48;
      LODWORD(v48) = 256;
      goto LABEL_202;
    }
    v1 = v48;
    if ((v2 & 1) != 0) {
      v128 = v8;
      v129 = 0;
    }
    else {
      if ((_DWORD)v157 == HIDWORD(v157) && HIDWORD(v157) == v8) {
        v160_.v160 = 0;
        if ((v2 & 4) != 0) {
          v81 =
              (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                             2 * ((unsigned __int64)(255 *
                                                                                     v8) >>
                                                                  15)) +
                                                   ((((255 * v8) & 0x7FFF) *
                                                     *(unsigned __int8*)(SdkData_e86b60 +
                                                                         ((unsigned __int64)(255 *
                                                                                             v8) >>
                                                                          15))) >>
                                                    12)) >>
                                8);
          png_create_colormap_entry(a1, v81, v8, v8, v8, 0xFFFFu, 2);
          LOWORD(v8) = v81;
          v1 = v48;
        }
        LOBYTE(v160_.v160) = 0;
        v160_.v163 = v8;
        v160_.v162 = v8;
        v160_.v161 = v8;
        v160_.v164 = v8;
        goto LABEL_167;
      }
      v128 = v8;
      if ((v2 & 4) != 0) {
        v129 = 0xFFFF;
      }
      else {
        v129 = 255;
      }
    }
    v49 = 254;
    png_create_colormap_entry(a1, 0xFEu, v157, HIDWORD(v157), v128, v129, v158);
    LODWORD(v48) = 256;
    v47 = 2;
    v77 = 1;
    if (*(_WORD*)(v3 + 720) == 0) {
      goto LABEL_201;
    }
    goto LABEL_199;
  }
  if (v6 != 3) {
    if (v6 != 4) {
      if (v6 == 6) {
      LABEL_27:
        if ((v2 & 2) == 0) {
          nndetailImagePng_png_set_rgb_to_gray_fixed_plt(v3, 1, 0xFFFFFFFFLL,
                                                         0xFFFFFFFFLL);
          if (*(_BYTE*)(v3 + 727) == 6) {
            if ((v2 & 1) == 0) {
              v12 = v1;
              if (*(_DWORD*)(v1 + 28) < 0x100u) {
                goto LABEL_226;
              }
            LABEL_109:
              v83 = *(_DWORD*)(v3 + 1296);
              if (v83 >= 100000 ||
                  v83 != 0 &&
                      (v84 = (1717986919LL * (11 * v83 + 2)) >> 33,
                       (unsigned int)nndetailImagePng_png_gamma_significant_plt(
                           (unsigned int)v84 + ((unsigned int)v84 >> 31)) !=
                           0)) {
                for (j = 0; j != 256; ++j) {
                  v77 = 3;
                  png_create_colormap_entry(a1, j, j, j, j, 0xFFu, 3);
                }
                v86 = 1;
                v1 = v12;
                if (*(_BYTE*)(v3 + 727) != 6) {
                LABEL_171:
                  if (*(_WORD*)(v3 + 720) == 0) {
                    v47 = 0;
                    LODWORD(v48) = 256;
                    v49 = 256;
                    goto LABEL_201;
                  }
                }
              LABEL_172:
                v160_.v160 = 0;
                if (v86 != 0) {
                  v116 = HIDWORD(v157);
                  v117 = v1;
                  if (v4 == 0) {
                    v116 =
                        *((unsigned __int16*)SdkData_e86b50[0] + HIDWORD(v157));
                  }
                  v118 = (unsigned __int16)
                      nndetailImagePng_png_gamma_16bit_correct_plt(
                          v116, *(unsigned int*)(v3 + 1296));
                  v119 = HIDWORD(v157);
                  v120 = v158;
                  v121 = a1;
                  v122 = (unsigned int)(255 * v118 + 32895) >> 16;
                  v123 = HIDWORD(v157);
                  v124 = HIDWORD(v157);
                }
                else {
                  if (v4 == 0) {
                    goto LABEL_179;
                  }
                  v119 = HIDWORD(v157);
                  v117 = v1;
                  v120 = 2;
                  v123 = HIDWORD(v157);
                  v124 = HIDWORD(v157);
                  v121 = a1;
                  v122 =
                      (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                                     2 * ((unsigned __int64)(unsigned int)(255 *
                                                                                                           HIDWORD(
                                                                                                               v157)) >>
                                                                          15)) +
                                                           ((((255 *
                                                               HIDWORD(v157)) &
                                                              0x7FFF) *
                                                             (unsigned int)*(
                                                                 unsigned __int8*)(SdkData_e86b60 +
                                                                                   ((unsigned __int64)(unsigned int)(255 *
                                                                                                                     HIDWORD(
                                                                                                                         v157)) >>
                                                                                    15))) >>
                                                            12)) >>
                                        8);
                }
                png_create_colormap_entry(v121, v122, v119, v123, v124, 0,
                                          v120);
                WORD2(v157) = v122;
                v1 = v117;
              LABEL_179:
                LOBYTE(v160_.v160) = 0;
                v160_.v163 = WORD2(v157);
                v160_.v162 = WORD2(v157);
                v160_.v161 = WORD2(v157);
                v160_.v164 = WORD2(v157);
                nndetailImagePng_png_set_background_fixed_plt(v3, &v160_.v160,
                                                              1, 0, 0);
                v47 = 0;
                v49 = 256;
                LODWORD(v48) = 256;
                if (*(_WORD*)(v3 + 720) == 0) {
                  goto LABEL_201;
                }
                goto LABEL_199;
              }
            LABEL_168:
              for (k = 0; k != 256; ++k) {
                v77 = 1;
                png_create_colormap_entry(a1, k, k, k, k, 0xFFu, 1);
              }
              v86 = 0;
              v1 = v12;
              if (*(_BYTE*)(v3 + 727) == 6) {
                goto LABEL_172;
              }
              goto LABEL_171;
            }
          }
          else if (*(_WORD*)(v3 + 720) == 0 || (v2 & 1) == 0) {
            if (*(_DWORD*)(v1 + 28) <= 0xFFu) {
            LABEL_226:
              nndetailImagePng_png_error_plt(
                  v3, "rgb[gray] color-map: too few entries");
              goto LABEL_227;
            }
            v12 = v1;
            if (*(_WORD*)(v3 + 720) == 0) {
              goto LABEL_168;
            }
            goto LABEL_109;
          }
          if (*(_DWORD*)(v1 + 28) <= 0xFFu) {
          LABEL_227:
            nndetailImagePng_png_error_plt(
                v3, "rgb[ga] color-map: too few entries");
            goto LABEL_228;
          }
          LODWORD(v48) = make_ga_colormap(a1);
          v77 = 1;
          v49 = 231;
          v47 = 1;
          if (*(_WORD*)(v3 + 720) == 0) {
          LABEL_201:
            if (v77 == 3) {
              goto LABEL_203;
            }
            goto LABEL_202;
          }
        LABEL_199:
          if ((*(_BYTE*)(v3 + 727) & 4) == 0) {
            nndetailImagePng_png_set_tRNS_to_alpha_plt(v3);
          }
          goto LABEL_201;
        }
        if (v6 == 6 || *(_WORD*)(v3 + 720) != 0) {
          if ((v2 & 1) != 0) {
            if (*(_DWORD*)(v1 + 28) <= 0xF3u) {
            LABEL_229:
              nndetailImagePng_png_error_plt(
                  v3, "rgb+alpha color-map: too few entries");
              goto LABEL_230;
            }
            v49 = make_rgb_colormap(a1);
            v77 = 1;
            png_create_colormap_entry(a1, v49, 0xFFu, 0xFFu, 0xFFu, 0, 1);
            png_create_colormap_entry(a1, v49 + 1, 0, 0, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 2, 0, 0, 0x7Fu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 3, 0, 0, 0xFFu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 4, 0, 0x7Fu, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 5, 0, 0x7Fu, 0x7Fu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 6, 0, 0x7Fu, 0xFFu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 7, 0, 0xFFu, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 8, 0, 0xFFu, 0x7Fu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 9, 0, 0xFFu, 0xFFu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 10, 0x7Fu, 0, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 11, 0x7Fu, 0, 0x7Fu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 12, 0x7Fu, 0, 0xFFu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 13, 0x7Fu, 0x7Fu, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 14, 0x7Fu, 0x7Fu, 0x7Fu, 0x80u,
                                      1);
            png_create_colormap_entry(a1, v49 + 15, 0x7Fu, 0x7Fu, 0xFFu, 0x80u,
                                      1);
            png_create_colormap_entry(a1, v49 + 16, 0x7Fu, 0xFFu, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 17, 0x7Fu, 0xFFu, 0x7Fu, 0x80u,
                                      1);
            png_create_colormap_entry(a1, v49 + 18, 0x7Fu, 0xFFu, 0xFFu, 0x80u,
                                      1);
            png_create_colormap_entry(a1, v49 + 19, 0xFFu, 0, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 20, 0xFFu, 0, 0x7Fu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 21, 0xFFu, 0, 0xFFu, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 22, 0xFFu, 0x7Fu, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 23, 0xFFu, 0x7Fu, 0x7Fu, 0x80u,
                                      1);
            png_create_colormap_entry(a1, v49 + 24, 0xFFu, 0x7Fu, 0xFFu, 0x80u,
                                      1);
            png_create_colormap_entry(a1, v49 + 25, 0xFFu, 0xFFu, 0, 0x80u, 1);
            png_create_colormap_entry(a1, v49 + 26, 0xFFu, 0xFFu, 0x7Fu, 0x80u,
                                      1);
            LODWORD(v48) = v49 + 28;
            png_create_colormap_entry(a1, v49 + 27, 0xFFu, 0xFFu, 0xFFu, 0x80u,
                                      1);
            v47 = 4;
            if (*(_WORD*)(v3 + 720) == 0) {
              goto LABEL_201;
            }
            goto LABEL_199;
          }
          v136 = v1;
          if (*(_DWORD*)(v1 + 28) <= 0xF3u) {
          LABEL_228:
            nndetailImagePng_png_error_plt(
                v3, "rgb-alpha color-map: too few entries");
            goto LABEL_229;
          }
          v55 = (((unsigned __int64)(v2 & 4) >> 1) | ((v2 & 4) != 0)) + 3;
          v57 = v157;
          v56 = WORD2(v157);
          LODWORD(v48) = make_rgb_colormap(a1);
          png_create_colormap_entry(a1, v48, v157, HIDWORD(v157), v8, 0, v158);
          v58 = WORD2(v157);
          if (v4 != 0) {
            v57 =
                (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                               2 * ((unsigned __int64)(unsigned int)(255 *
                                                                                                     v157) >>
                                                                    15)) +
                                                     ((((255 * (_DWORD)v157) &
                                                        0x7FFF) *
                                                       (unsigned int)*(
                                                           unsigned __int8*)(SdkData_e86b60 +
                                                                             ((unsigned __int64)(unsigned int)(255 *
                                                                                                               v157) >>
                                                                              15))) >>
                                                      12)) >>
                                  8);
            v58 =
                (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                               2 * ((unsigned __int64)(unsigned int)(255 *
                                                                                                     HIDWORD(
                                                                                                         v157)) >>
                                                                    15)) +
                                                     ((((255 * HIDWORD(v157)) &
                                                        0x7FFF) *
                                                       (unsigned int)*(
                                                           unsigned __int8*)(SdkData_e86b60 +
                                                                             ((unsigned __int64)(unsigned int)(255 *
                                                                                                               HIDWORD(
                                                                                                                   v157)) >>
                                                                              15))) >>
                                                      12)) >>
                                  8);
            v56 =
                (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                               2 * ((unsigned __int64)(255 *
                                                                                       v8) >>
                                                                    15)) +
                                                     ((((255 * v8) & 0x7FFF) *
                                                       *(unsigned __int8*)(SdkData_e86b60 +
                                                                           ((unsigned __int64)(255 *
                                                                                               v8) >>
                                                                            15))) >>
                                                      12)) >>
                                  8);
          }
          if ((unsigned int)memcmp_plt(
                  a1[3] + (unsigned int)(v48 * v55),
                  a1[3] +
                      (unsigned __int8)(6 * (6 * ((unsigned __int16)(5 * v57 +
                                                                     130) >>
                                                  8) +
                                             ((unsigned __int16)(5 * v58 +
                                                                 130) >>
                                              8)) +
                                        ((unsigned __int16)(5 * v56 + 130) >>
                                         8)) *
                          (unsigned int)v55,
                  v55) != 0) {
            v153 = v48;
            v138 = v3;
            v59 = 0;
            v60 = 0;
            v152 = v8;
            v61 = 32639 * v8 + 0x8000;
            v155 = v4;
            v62 = *(unsigned __int16*)SdkData_e86b50[0];
            v63 =
                *(unsigned __int16*)((char*)SdkData_e86b50[0] +
                                     (unsigned __int64)((_UNKNOWN*)0xFCLL) + 2);
            v64 = *(unsigned __int16*)((char*)SdkData_e86b50[0] +
                                       (unsigned __int64)((_UNKNOWN*)0x1FCLL) +
                                       2);
            v65 = 32639 * HIDWORD(v157) + 0x8000;
            v143 =
                (32896 * v62 + v61 + ((32896 * v62 + 32639 * v8) >> 16)) >> 16;
            v144 =
                (32896 * v62 + v65 +
                 ((unsigned int)(32896 * v62 + 32639 * HIDWORD(v157)) >> 16)) >>
                16;
            v141 =
                (32896 * v64 + v61 + ((32896 * v64 + 32639 * v8) >> 16)) >> 16;
            v142 =
                (32896 * v63 + v61 + ((32896 * v63 + 32639 * v8) >> 16)) >> 16;
            v139 =
                (32896 * v64 + v65 +
                 ((unsigned int)(32896 * v64 + 32639 * HIDWORD(v157)) >> 16)) >>
                16;
            v140 =
                (32896 * v63 + v65 +
                 ((unsigned int)(32896 * v63 + 32639 * HIDWORD(v157)) >> 16)) >>
                16;
            v132 = v63 << 7;
            v133 = v62 << 7;
            v131 = v64 << 7;
            do {
              while (1) {
                v74 = v153 + v59;
                v75 = *((unsigned __int16*)SdkData_e86b50[0] + v60);
                if (v4 != 0) {
                  break;
                }
                v66 = 127 * *((unsigned __int16*)SdkData_e86b50[0] + v8);
                v148 = 127 *
                       *((unsigned __int16*)SdkData_e86b50[0] + HIDWORD(v157));
                v67 =
                    127 * (unsigned int)*((unsigned __int16*)SdkData_e86b50[0] +
                                          (unsigned int)v157) +
                    (v75 << 7);
                v68 = SdkData_e86b58;
                v69 =
                    (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                                   2 * (v67 >>
                                                                        15)) +
                                                         (((v67 & 0x7FFF) *
                                                           *(unsigned __int8*)(SdkData_e86b60 +
                                                                               (v67 >>
                                                                                15))) >>
                                                          12)) >>
                                      8);
                v70 =
                    (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                                   2 * ((unsigned __int64)(unsigned int)(v148 +
                                                                                                         v133) >>
                                                                        15)) +
                                                         ((((v148 + v133) &
                                                            0x7FFF) *
                                                           (unsigned int)*(
                                                               unsigned __int8*)(SdkData_e86b60 +
                                                                                 ((unsigned __int64)(unsigned int)(v148 +
                                                                                                                   v133) >>
                                                                                  15))) >>
                                                          12)) >>
                                      8);
                v147 =
                    (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                                   2 * ((unsigned __int64)(unsigned int)(v66 +
                                                                                                         v133) >>
                                                                        15)) +
                                                         (((((_WORD)v66 +
                                                             (_WORD)v133) &
                                                            0x7FFF) *
                                                           (unsigned int)*(
                                                               unsigned __int8*)(SdkData_e86b60 +
                                                                                 ((unsigned __int64)(unsigned int)(v66 +
                                                                                                                   v133) >>
                                                                                  15))) >>
                                                          12)) >>
                                      8);
                png_create_colormap_entry(a1, v74 + 1, v69, v70, v147, 0, 1);
                v146 =
                    (unsigned __int8)((unsigned __int16)(*(_WORD*)(v68 +
                                                                   2 * ((unsigned __int64)(unsigned int)(v66 +
                                                                                                         v132) >>
                                                                        15)) +
                                                         ((((v66 + v132) &
                                                            0x7FFF) *
                                                           (unsigned int)*(
                                                               unsigned __int8*)(SdkData_e86b60 +
                                                                                 ((unsigned __int64)(unsigned int)(v66 +
                                                                                                                   v132) >>
                                                                                  15))) >>
                                                          12)) >>
                                      8);
                png_create_colormap_entry(a1, v74 + 2, v69, v70, v146, 0, 1);
                v145 =
                    (unsigned __int8)((unsigned __int16)(*(_WORD*)(v68 +
                                                                   2 * ((unsigned __int64)(unsigned int)(v66 +
                                                                                                         v131) >>
                                                                        15)) +
                                                         ((((v66 + v131) &
                                                            0x7FFF) *
                                                           (unsigned int)*(
                                                               unsigned __int8*)(SdkData_e86b60 +
                                                                                 ((unsigned __int64)(unsigned int)(v66 +
                                                                                                                   v131) >>
                                                                                  15))) >>
                                                          12)) >>
                                      8);
                png_create_colormap_entry(a1, v74 + 3, v69, v70, v145, 0, 1);
                v71 =
                    (unsigned __int8)((unsigned __int16)(*(_WORD*)(v68 +
                                                                   2 * ((unsigned __int64)(unsigned int)(v148 +
                                                                                                         v132) >>
                                                                        15)) +
                                                         ((((v148 + v132) &
                                                            0x7FFF) *
                                                           (unsigned int)*(
                                                               unsigned __int8*)(SdkData_e86b60 +
                                                                                 ((unsigned __int64)(unsigned int)(v148 +
                                                                                                                   v132) >>
                                                                                  15))) >>
                                                          12)) >>
                                      8);
                png_create_colormap_entry(a1, v74 + 4, v69, v71, v147, 0, 1);
                png_create_colormap_entry(a1, v74 + 5, v69, v71, v146, 0, 1);
                png_create_colormap_entry(a1, v74 + 6, v69, v71, v145, 0, 1);
                v72 =
                    (unsigned __int8)((unsigned __int16)(*(_WORD*)(v68 +
                                                                   2 * ((unsigned __int64)(unsigned int)(v148 +
                                                                                                         v131) >>
                                                                        15)) +
                                                         ((((v148 + v131) &
                                                            0x7FFF) *
                                                           (unsigned int)*(
                                                               unsigned __int8*)(SdkData_e86b60 +
                                                                                 ((unsigned __int64)(unsigned int)(v148 +
                                                                                                                   v131) >>
                                                                                  15))) >>
                                                          12)) >>
                                      8);
                png_create_colormap_entry(
                    a1, v74 + 7, v69, v72,
                    (unsigned __int16)(*(_WORD*)(v68 +
                                                 2 * ((unsigned __int64)(unsigned int)(v66 +
                                                                                       v133) >>
                                                      15)) +
                                       (((((_WORD)v66 + (_WORD)v133) & 0x7FFF) *
                                         (unsigned int)*(
                                             unsigned __int8*)(SdkData_e86b60 +
                                                               ((unsigned __int64)(unsigned int)(v66 +
                                                                                                 v133) >>
                                                                15))) >>
                                        12)) >>
                        8,
                    0, 1);
                png_create_colormap_entry(a1, v74 + 8, v69, v72, v146, 0, 1);
                v73 = v72;
                v8 = v152;
                v4 = v155;
                png_create_colormap_entry(a1, v74 + 9, v69, v73, v145, 0, 1);
                v59 += 9;
                v28 = v60 >= 0x80;
                v60 = (2 * v60) | 0x7F;
                if (v28) {
                  goto LABEL_85;
                }
              }
              v76 = (32896 * v75 + 32639 * (_DWORD)v157 + 0x8000 +
                     ((unsigned int)(32896 * v75 + 32639 * v157) >> 16)) >>
                    16;
              png_create_colormap_entry(a1, v74 + 1, v76, v144, v143, 0, 2);
              png_create_colormap_entry(a1, v74 + 2, v76, v144, v142, 0, 2);
              png_create_colormap_entry(a1, v74 + 3, v76, v144, v141, 0, 2);
              png_create_colormap_entry(a1, v74 + 4, v76, v140, v143, 0, 2);
              png_create_colormap_entry(a1, v74 + 5, v76, v140, v142, 0, 2);
              png_create_colormap_entry(a1, v74 + 6, v76, v140, v141, 0, 2);
              png_create_colormap_entry(a1, v74 + 7, v76, v139, v143, 0, 2);
              png_create_colormap_entry(a1, v74 + 8, v76, v139, v142, 0, 2);
              png_create_colormap_entry(a1, v74 + 9, v76, v139, v141, 0, 2);
              v59 += 9;
              v28 = v60 >= 0x80;
              v60 = (2 * v60) | 0x7F;
            } while (!v28);
          LABEL_85:
            v47 = 4;
            v77 = 1;
            v78 = v153 + v59;
            v1 = v136;
            v3 = v138;
            v49 = v153;
            LODWORD(v48) = v78 + 1;
            if (*(_WORD*)(v138 + 720) == 0) {
              goto LABEL_201;
            }
            goto LABEL_199;
          }
          v160_.v160 = 0;
          v160_.v163 = v8;
          v160_.v161 = v157;
          v160_.v162 = WORD2(v157);
          v160_.v164 = WORD2(v157);
          nndetailImagePng_png_set_background_fixed_plt(v3, &v160_.v160, 1, 0,
                                                        0);
          v1 = v136;
          v47 = 3;
          v49 = 256;
        }
        else {
          if (*(_DWORD*)(v1 + 28) <= 0xD7u) {
          LABEL_231:
            nndetailImagePng_png_error_plt(v3,
                                           "rgb color-map: too few entries");
          LABEL_232:
            nndetailImagePng_png_error_plt(
                v3, "ga-alpha color-map: too few entries");
            __udf(0);
          }
          v47 = 3;
          v49 = 256;
          LODWORD(v48) = make_rgb_colormap(a1);
        }
      LABEL_202:
        nndetailImagePng_png_set_alpha_mode_fixed_plt(v3, 0, 220000);
        goto LABEL_203;
      }
      goto LABEL_34;
    }
    if ((v2 & 1) != 0) {
      if (*(_DWORD*)(v1 + 28) <= 0xFFu) {
      LABEL_224:
        nndetailImagePng_png_error_plt(v3,
                                       "gray+alpha color-map: too few entries");
        goto LABEL_225;
      }
      LODWORD(v48) = make_ga_colormap(a1);
      v47 = 1;
      v49 = 231;
      goto LABEL_202;
    }
    if ((v2 & 2) != 0 &&
        ((_DWORD)v157 != HIDWORD(v157) || HIDWORD(v157) != v8)) {
      v134 = v1;
      if (*(_DWORD*)(v1 + 28) < 0x100u) {
        goto LABEL_232;
      }
      v16 = 0;
      do {
        v17 = v16 + 1;
        v18 = (((7093 * ((unsigned __int16)((_WORD)v16 << 8) | 0x73u)) >> 16) +
               ((unsigned __int16)(((((_WORD)v16 << 8) | 0x73) -
                                    ((7093 *
                                      ((unsigned __int16)((_WORD)v16 << 8) |
                                       0x73u)) >>
                                     16)) &
                                   0xFFFE) >>
                1)) >>
              7;
        png_create_colormap_entry(a1, v16, v18, v18, v18, 0xFFu, 1);
        v16 = v17;
      } while (v17 != 231);
      if ((v2 & 4) != 0) {
        v19 = 0xFFFF;
      }
      else {
        v19 = 255;
      }
      png_create_colormap_entry(a1, 0xE7u, v157, HIDWORD(v157), v8, v19, v158);
      if ((v2 & 4) == 0) {
        v8 = *((unsigned __int16*)SdkData_e86b50[0] + v8);
        LODWORD(v157) =
            *((unsigned __int16*)SdkData_e86b50[0] + (unsigned int)v157);
        HIDWORD(v157) = *((unsigned __int16*)SdkData_e86b50[0] + HIDWORD(v157));
      }
      v20 = SdkData_e86b50[0];
      v21 = SdkData_e86b58;
      v22 = SdkData_e86b60;
      v151 = v8;
      v23 = 204 * v8;
      v24 = -6;
      do {
        v27 = *(unsigned __int16*)v20;
        v20 = (void(__attribute__((noreturn))*)())((char*)v20 + 102);
        v25 = 204 * v157;
        v26 = 204 * HIDWORD(v157);
        png_create_colormap_entry(
            a1, v24 + 238,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(51 *
                                                                                   v27 +
                                                                               v25) >>
                                              15)) +
                               ((((51 * v27 + v25) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(51 *
                                                                                             v27 +
                                                                                         v25) >>
                                                        15))) >>
                                12)) >>
                8,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(51 *
                                                                                   v27 +
                                                                               v26) >>
                                              15)) +
                               ((((51 * v27 + v26) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(51 *
                                                                                             v27 +
                                                                                         v26) >>
                                                        15))) >>
                                12)) >>
                8,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(51 *
                                                                                   v27 +
                                                                               v23) >>
                                              15)) +
                               ((((51 * v27 + v23) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(51 *
                                                                                             v27 +
                                                                                         v23) >>
                                                        15))) >>
                                12)) >>
                8,
            0xFFu, 1);
        v28 = __CFADD__(v24++, 1);
      } while (!v28);
      v29 = -6;
      v32 = SdkData_e86b50[0];
      do {
        v34 = *(unsigned __int16*)v32;
        v32 = (void(__attribute__((noreturn))*)())((char*)v32 + 102);
        v30 = 153 * v157;
        v31 = 153 * HIDWORD(v157);
        v33 = 153 * v151;
        png_create_colormap_entry(
            a1, v29 + 244,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(102 *
                                                                                   v34 +
                                                                               v30) >>
                                              15)) +
                               ((((102 * v34 + v30) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(102 *
                                                                                             v34 +
                                                                                         v30) >>
                                                        15))) >>
                                12)) >>
                8,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(102 *
                                                                                   v34 +
                                                                               v31) >>
                                              15)) +
                               ((((102 * v34 + v31) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(102 *
                                                                                             v34 +
                                                                                         v31) >>
                                                        15))) >>
                                12)) >>
                8,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(102 *
                                                                                   v34 +
                                                                               v33) >>
                                              15)) +
                               ((((102 * v34 + v33) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(102 *
                                                                                             v34 +
                                                                                         v33) >>
                                                        15))) >>
                                12)) >>
                8,
            0xFFu, 1);
        v28 = __CFADD__(v29++, 1);
      } while (!v28);
      v138 = v3;
      v35 = -6;
      v37 = SdkData_e86b50[0];
      do {
        v40 = *(unsigned __int16*)v37;
        v37 = (void(__attribute__((noreturn))*)())((char*)v37 + 102);
        v36 = 102 * v157;
        v38 = 102 * HIDWORD(v157);
        v39 = 102 * v151;
        png_create_colormap_entry(
            a1, v35 + 250,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(153 *
                                                                                   v40 +
                                                                               v36) >>
                                              15)) +
                               ((((153 * v40 + v36) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(153 *
                                                                                             v40 +
                                                                                         v36) >>
                                                        15))) >>
                                12)) >>
                8,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(153 *
                                                                                   v40 +
                                                                               v38) >>
                                              15)) +
                               ((((153 * v40 + v38) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(153 *
                                                                                             v40 +
                                                                                         v38) >>
                                                        15))) >>
                                12)) >>
                8,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(153 *
                                                                                   v40 +
                                                                               v39) >>
                                              15)) +
                               ((((153 * v40 + v39) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(153 *
                                                                                             v40 +
                                                                                         v39) >>
                                                        15))) >>
                                12)) >>
                8,
            0xFFu, 1);
        v28 = __CFADD__(v35++, 1);
      } while (!v28);
      v41 = -6;
      v44 = SdkData_e86b50[0];
      do {
        v46 = *(unsigned __int16*)v44;
        v44 = (void(__attribute__((noreturn))*)())((char*)v44 + 102);
        v47 = 1;
        v42 = 51 * v157;
        v43 = 51 * HIDWORD(v157);
        v45 = 51 * v151;
        png_create_colormap_entry(
            a1, v41 + 256,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(204 *
                                                                                   v46 +
                                                                               v42) >>
                                              15)) +
                               ((((204 * v46 + v42) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(204 *
                                                                                             v46 +
                                                                                         v42) >>
                                                        15))) >>
                                12)) >>
                8,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(204 *
                                                                                   v46 +
                                                                               v43) >>
                                              15)) +
                               ((((204 * v46 + v43) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(204 *
                                                                                             v46 +
                                                                                         v43) >>
                                                        15))) >>
                                12)) >>
                8,
            (unsigned __int16)(*(_WORD*)(v21 +
                                         2 * ((unsigned __int64)(unsigned int)(204 *
                                                                                   v46 +
                                                                               v45) >>
                                              15)) +
                               ((((204 * v46 + v45) & 0x7FFF) *
                                 (unsigned int)*(
                                     unsigned __int8*)(v22 +
                                                       ((unsigned __int64)(unsigned int)(204 *
                                                                                             v46 +
                                                                                         v45) >>
                                                        15))) >>
                                12)) >>
                8,
            0xFFu, 1);
        v28 = __CFADD__(v41++, 1);
      } while (!v28);
      v1 = v134;
      LODWORD(v48) = 256;
      v49 = 231;
      goto LABEL_202;
    }
    v111 = *(_DWORD*)(v1 + 28);
    v160_.v160 = 0;
    if (v111 < 0x100) {
    LABEL_230:
      nndetailImagePng_png_error_plt(v3,
                                     "gray-alpha color-map: too few entries");
      goto LABEL_231;
    }
    v112 = v1;
    for (m = 0; m != 256; ++m) {
      png_create_colormap_entry(a1, m, m, m, m, 0xFFu, 1);
    }
    if (v4 != 0) {
      v114 =
          (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                         2 * ((unsigned __int64)(unsigned int)(255 *
                                                                                               HIDWORD(
                                                                                                   v157)) >>
                                                              15)) +
                                               ((((255 * HIDWORD(v157)) &
                                                  0x7FFF) *
                                                 (unsigned int)*(
                                                     unsigned __int8*)(SdkData_e86b60 +
                                                                       ((unsigned __int64)(unsigned int)(255 *
                                                                                                         HIDWORD(
                                                                                                             v157)) >>
                                                                        15))) >>
                                                12)) >>
                            8);
      png_create_colormap_entry(a1, v114, HIDWORD(v157), HIDWORD(v157),
                                HIDWORD(v157), 0xFFFFu, 2);
      WORD2(v157) = v114;
    }
    v1 = v112;
    LOBYTE(v160_.v160) = 0;
    v160_.v163 = WORD2(v157);
    v160_.v162 = WORD2(v157);
    v160_.v161 = WORD2(v157);
    v160_.v164 = WORD2(v157);
  LABEL_167:
    nndetailImagePng_png_set_background_fixed_plt(v3, &v160_.v160, 1, 0, 0);
    v47 = 0;
    v49 = 256;
    LODWORD(v48) = 256;
    goto LABEL_202;
  }
LABEL_35:
  v150 = v8;
  v13 = *(unsigned __int16*)(v3 + 720);
  if (*(_WORD*)(v3 + 720) != 0) {
    v14 = *(_QWORD*)(v3 + 856);
  }
  else {
    v14 = 0;
  }
  v137 = v1;
  v138 = v3;
  v87 = *(unsigned __int16*)(v3 + 712);
  v156 = v2 & 4;
  v3 = (v2 & 1) == 0 && v14 != 0;
  if (v87 >= 0x100) {
    v48 = 256;
  }
  else {
    v48 = v87;
  }
  if (*(_DWORD*)(v1 + 28) < (unsigned int)v48) {
    goto LABEL_221;
  }
  if (v87 != 0) {
    v89 = 0;
    v154 = v48;
    v90 = (unsigned __int8*)(*(_QWORD*)(v138 + 704) + 2LL);
    do {
      v98 = v14 != 0;
      if (v89 < v13) {
        v99 = v3;
      }
      else {
        v98 = false;
        v99 = 0;
      }
      if (v99 != 1 || (v100 = *(unsigned __int8*)(v14 + v89)) == 255) {
        if (v98) {
          v91 = *(unsigned __int8*)(v14 + v89);
        }
        else {
          v91 = 255;
        }
        v92 = *(v90 - 2);
        v93 = *(v90 - 1);
        v94 = *v90;
        v95 = 3;
        v96 = v89;
        v97 = a1;
      }
      else if (*(_BYTE*)(v14 + v89) != 0) {
        v101 = decode_gamma(a1, *(v90 - 2), 3);
        v102 = v101 * v100 +
               (unsigned int)decode_gamma(a1, v157, v158) * (v100 ^ 0xFF);
        if (v156 != 0) {
          v103 = (257 * (_DWORD)v102 + ((unsigned int)(257 * v102) >> 16) +
                  0x8000) >>
                 16;
        }
        else {
          v103 =
              (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                             2 * (v102 >> 15)) +
                                                   (((v102 & 0x7FFF) *
                                                     *(unsigned __int8*)(SdkData_e86b60 +
                                                                         (v102 >>
                                                                          15))) >>
                                                    12)) >>
                                8);
        }
        v104 = *(unsigned __int8*)(v14 + v89);
        v149 = v103;
        v105 = decode_gamma(a1, *(v90 - 1), 3);
        v106 =
            v105 * v104 +
            (unsigned int)decode_gamma(a1, HIDWORD(v157), v158) * (v104 ^ 0xFF);
        if (v156 != 0) {
          v107 = (257 * (_DWORD)v106 + ((unsigned int)(257 * v106) >> 16) +
                  0x8000) >>
                 16;
        }
        else {
          v107 =
              (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                             2 * (v106 >> 15)) +
                                                   (((v106 & 0x7FFF) *
                                                     *(unsigned __int8*)(SdkData_e86b60 +
                                                                         (v106 >>
                                                                          15))) >>
                                                    12)) >>
                                8);
        }
        v108 = *(unsigned __int8*)(v14 + v89);
        v109 = decode_gamma(a1, *v90, 3);
        v110 = v109 * v108 +
               (unsigned int)decode_gamma(a1, v150, v158) * (v108 ^ 0xFF);
        if (v156 != 0) {
          v94 = (257 * (_DWORD)v110 + ((unsigned int)(257 * v110) >> 16) +
                 0x8000) >>
                16;
          v91 = *(unsigned __int8*)(v14 + v89) |
                (*(unsigned __int8*)(v14 + v89) << 8);
        }
        else {
          v91 = *(unsigned __int8*)(v14 + v89);
          v94 =
              (unsigned __int8)((unsigned __int16)(*(_WORD*)(SdkData_e86b58 +
                                                             2 * (v110 >> 15)) +
                                                   (((v110 & 0x7FFF) *
                                                     *(unsigned __int8*)(SdkData_e86b60 +
                                                                         (v110 >>
                                                                          15))) >>
                                                    12)) >>
                                8);
        }
        v48 = v154;
        v97 = a1;
        v92 = v149;
        v96 = v89;
        v93 = v107;
        v95 = v158;
      }
      else {
        v97 = a1;
        v92 = v157;
        v93 = HIDWORD(v157);
        v96 = v89;
        v91 = 0;
        v94 = v150;
        v95 = v158;
      }
      png_create_colormap_entry(v97, v96, v92, v93, v94, v91, v95);
      ++v89;
      v90 += 3;
    } while (v48 != v89);
  }
  v3 = v138;
  if (*(unsigned __int8*)(v138 + 728) <= 7u) {
    nndetailImagePng_png_set_packing_plt(v138);
  }
  v1 = v137;
  v47 = 0;
  v49 = 256;
LABEL_203:
  if (*(unsigned __int8*)(v3 + 728) >= 9u) {
    nndetailImagePng_png_set_scale_16_plt(v3);
  }
  if ((unsigned int)v48 > 0x100 || (unsigned int)v48 > *(_DWORD*)(v1 + 28)) {
    goto LABEL_220;
  }
  *(_DWORD*)(v1 + 28) = v48;
  if (v47 > 1) {
    if (v47 == 2) {
      if (v49 != 254 || (unsigned int)v48 < 0xFF) {
        goto LABEL_219;
      }
      goto LABEL_217;
    }
    if (v47 != 3) {
      if (v49 != 216) {
        goto LABEL_219;
      }
      goto LABEL_217;
    }
  LABEL_213:
    if (v49 != 256) {
      goto LABEL_219;
    }
    goto LABEL_217;
  }
  if (v47 == 0) {
    goto LABEL_213;
  }
  if (v49 != 231) {
  LABEL_219:
    nndetailImagePng_png_error_plt(v3, "bad background index (internal error)");
  LABEL_220:
    nndetailImagePng_png_error_plt(v3,
                                   "color map overflow (BAD internal error)");
  LABEL_221:
    nndetailImagePng_png_error_plt(v138, "palette color-map: too few entries");
    nndetailImagePng_png_error_plt(v3, "bad data option (internal error)");
    goto LABEL_222;
  }
LABEL_217:
  *((_DWORD*)a1 + 18) = v47;
  return 1;
}

__int64 png_image_read_direct(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  char v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  bool v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  int v33;
  __int64 v34;
  char v36;
  __int64 (*v37)();
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned __int8* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int16 v45;
  unsigned int v46;

  v1 = *(_QWORD***)a1;
  v3 = **(_QWORD***)a1;
  v4 = *(_DWORD*)(*(_QWORD*)a1 + 20LL);
  v5 = *v3;
  v6 = v3[1];
  nndetailImagePng_png_set_expand_plt(*v3);
  v42 = v6;
  v7 = *(_BYTE*)(v5 + 727) & 2;
  if ((*(_BYTE*)(v5 + 727) & 4) != 0) {
    v7 |= 1u;
  }
  else if (*(_WORD*)(v5 + 720) != 0) {
    ++v7;
  }
  v43 = v4 & 4;
  if (*(_BYTE*)(v5 + 728) == 16) {
    v8 = v7 | 4;
  }
  else {
    v8 = v7;
  }
  v9 = v8 ^ v4;
  if (((v8 ^ v4) & 2) == 0) {
    v10 = true;
    if ((v8 & 4) == 0) {
      goto LABEL_17;
    }
  LABEL_16:
    v11 = 100000;
    if (((_BYTE)v1[3] & 4) == 0) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  if ((v4 & 2) == 0) {
    v10 = (v8 & 1) == 0;
    nndetailImagePng_png_set_rgb_to_gray_fixed_plt(v5, 1, 0xFFFFFFFFLL,
                                                   0xFFFFFFFFLL);
    v9 &= ~2u;
    if ((v8 & 4) == 0) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  nndetailImagePng_png_set_gray_to_rgb_plt(v5);
  v10 = true;
  v9 &= ~2u;
  if ((v8 & 4) != 0) {
    goto LABEL_16;
  }
LABEL_17:
  v11 = 0xFFFFFFFFLL;
LABEL_18:
  nndetailImagePng_png_set_alpha_mode_fixed_plt(v5, 0, v11);
  v12 = v8 & 1;
  v13 = v9 & 0xFFFFFFBF;
  if ((v4 & 4) != 0) {
    v14 = v12;
  }
  else {
    v14 = 0;
  }
  if ((v4 & 4) != 0) {
    v15 = 100000;
  }
  else {
    v15 = -1;
  }
  if ((v9 & 0x40) != 0) {
    v16 = 2;
  }
  else {
    v16 = v14;
  }
  if (v10 ||
      (v22 = *(unsigned int*)(v5 + 1296), v46 = 0,
       (unsigned int)nndetailImagePng_png_muldiv_plt(&v46, v15, v22, 100000) !=
           0) &&
          (unsigned int)nndetailImagePng_png_gamma_significant_plt(v46) == 0) {
    v17 = 0;
    if ((v9 & 4) != 0) {
      goto LABEL_49;
    }
  LABEL_29:
    if ((v9 & 1) != 0) {
      goto LABEL_51;
    }
    goto LABEL_30;
  }
  if (v16 == 1) {
    v16 = 0;
    v17 = 2;
  }
  else {
    v17 = 1;
  }
  if ((v9 & 4) == 0) {
    goto LABEL_29;
  }
LABEL_49:
  if ((v4 & 4) != 0) {
    nndetailImagePng_png_set_expand_16_plt(v5);
    v13 = v9 & 0xFFFFFFBB;
    if ((v9 & 1) != 0) {
      goto LABEL_51;
    }
  LABEL_30:
    v18 = 1;
    nndetailImagePng_png_set_alpha_mode_fixed_plt(v5, v16, v15);
    if ((v13 & 0x10) != 0) {
      goto LABEL_98;
    }
  LABEL_31:
    if ((v13 & 0x20) == 0) {
      goto LABEL_32;
    }
    goto LABEL_102;
  }
  nndetailImagePng_png_set_scale_16_plt(v5);
  v13 = v9 & 0xFFFFFFBB;
  if ((v9 & 1) == 0) {
    goto LABEL_30;
  }
LABEL_51:
  if (v12 == 0) {
    if ((v4 & 4) != 0) {
      v23 = 0xFFFF;
    }
    else {
      v23 = 255;
    }
    if ((v4 & 0x20) != 0) {
      v13 &= 0xFFFFFF9F;
    }
    nndetailImagePng_png_set_add_alpha_plt(v5, v23, (v4 & 0x20) == 0);
    goto LABEL_58;
  }
  if (v17 != 0) {
    v18 = 1;
    v17 = 2;
  }
  else {
    if ((v4 & 4) != 0) {
      nndetailImagePng_png_set_strip_alpha_plt(v5);
      v17 = 0;
    LABEL_58:
      v18 = 1;
      goto LABEL_97;
    }
    v41 = *(unsigned __int8**)(a1 + 32);
    if (v41 != nullptr) {
      v45 = 0;
      v44 = 0;
      v18 = 1;
      WORD1(v44) = *v41;
      WORD2(v44) = v41[1];
      HIWORD(v44) = v41[2];
      v45 = v41[1];
      nndetailImagePng_png_set_background_fixed_plt(v5, &v44, 1, 0, 0);
      v17 = 0;
    }
    else {
      v17 = 0;
      v18 = 0;
      v16 = 2;
    }
  }
LABEL_97:
  v13 &= ~1u;
  nndetailImagePng_png_set_alpha_mode_fixed_plt(v5, v16, v15);
  if ((v13 & 0x10) == 0) {
    goto LABEL_31;
  }
LABEL_98:
  if ((v4 & 2) != 0) {
    nndetailImagePng_png_set_bgr_plt(v5);
    v13 &= ~0x10u;
    if ((v13 & 0x20) == 0) {
      goto LABEL_32;
    }
  }
  else {
    v4 &= 0xFFFFFFED;
    v13 &= ~0x10u;
    if ((v13 & 0x20) == 0) {
    LABEL_32:
      if ((_DWORD)v43 == 0) {
        goto LABEL_34;
      }
      goto LABEL_33;
    }
  }
LABEL_102:
  if ((v4 & 1) != 0) {
    if (v17 != 2) {
      nndetailImagePng_png_set_swap_alpha_plt(v5);
    }
  }
  else {
    v4 &= 0xFFFFFFDE;
  }
  v13 &= ~0x20u;
  if ((_DWORD)v43 != 0) {
  LABEL_33:
    nndetailImagePng_png_set_swap_plt(v5);
  }
LABEL_34:
  if (v13 != 0) {
    nndetailImagePng_png_error_plt(
        v5, "png_read_image: unsupported transformation");
    goto LABEL_116;
  }
  nndetailImagePng_png_set_keep_unknown_chunks_plt(v5, 1, 0, 0xFFFFFFFFLL);
  nndetailImagePng_png_set_keep_unknown_chunks_plt(v5, 0, "bKGD", 6);
  v19 = v18 ^ 1;
  v20 = 0;
  if (v17 == 2) {
    v19 = 1;
  }
  if ((v19 & 1) == 0) {
    v20 = nndetailImagePng_png_set_interlace_handling_plt(v5);
  }
  if ((*(_BYTE*)(v5 + 416) & 0x40) != 0) {
    nndetailImagePng_png_app_error_plt(
        v5, "png_read_update_info/png_start_read_image: duplicate call");
    v21 = *(_BYTE*)(v42 + 37) & 2;
    if ((*(_BYTE*)(v42 + 37) & 4) != 0) {
    LABEL_41:
      if (v18 != 0) {
        v21 |= (v17 != 2) | v4 & 1;
      }
      goto LABEL_61;
    }
  }
  else {
    nndetailImagePng_png_read_start_row_plt(v5);
    nndetailImagePng_png_read_transform_info_plt(v5, v42);
    v21 = *(_BYTE*)(v42 + 37) & 2;
    if ((*(_BYTE*)(v42 + 37) & 4) != 0) {
      goto LABEL_41;
    }
  }
  if ((v18 & 1) == 0) {
    goto LABEL_118;
  }
LABEL_61:
  v24 = v21 | v4 & 0x40;
  if (*(_BYTE*)(v42 + 36) == 16) {
    v24 |= 4u;
  }
  v25 = *(_DWORD*)(v5 + 420);
  v26 = (v4 & 0x20) != 0 && v17 == 2;
  v27 = v24 & 0xFFFFFFEF | (16 * (*(_DWORD*)(v5 + 420) & 1));
  v28 = v27 | 0x20;
  if (v26) {
    v27 |= 0x20u;
  }
  if ((v25 & 0x20000) != 0) {
    v27 = v28;
  }
  else {
    if ((v25 & 0x1000000) == 0 || (*(_DWORD*)(v5 + 416) & 0x80) != 0) {
      goto LABEL_75;
    }
    v27 = v28;
  }
  if (v17 == 2) {
  LABEL_117:
    nndetailImagePng_png_error_plt(v5, "unexpected alpha swap transformation");
  LABEL_118:
    nndetailImagePng_png_error_plt(v5, "png_image_read: alpha channel lost");
    __udf(0);
  }
LABEL_75:
  if (v27 != v4) {
  LABEL_116:
    nndetailImagePng_png_error_plt(v5,
                                   "png_read_image: invalid transformations");
    goto LABEL_117;
  }
  v29 = *(int*)(a1 + 16);
  v30 = *(_QWORD*)(a1 + 8);
  v31 = v29 << (v43 >> 2);
  if ((v29 & 0x80000000) != 0) {
    *(_QWORD*)(a1 + 48) = v30 - v31 * (unsigned int)(*((_DWORD*)v1 + 4) - 1);
    *(_QWORD*)(a1 + 56) = v31;
    v36 = v18 ^ 1;
    if (v17 == 2) {
      v36 = 1;
    }
    if ((v36 & 1) == 0) {
      goto LABEL_80;
    }
  LABEL_91:
    if (v18 != 0) {
      v37 = png_image_read_background;
    }
    else {
      v37 = png_image_read_composite;
    }
    v38 = nndetailImagePng_png_get_rowbytes_plt(v5, v42);
    v39 = nndetailImagePng_png_malloc_plt(v5, v38);
    *(_QWORD*)(a1 + 40) = v39;
    v40 = nndetailImagePng_png_safe_execute_plt(v1, v37, a1);
    *(_QWORD*)(a1 + 40) = 0;
    nndetailImagePng_png_free_plt(v5, v39);
    return v40;
  }
  *(_QWORD*)(a1 + 48) = v30;
  *(_QWORD*)(a1 + 56) = v31;
  v32 = v18 ^ 1;
  if (v17 == 2) {
    v32 = 1;
  }
  if ((v32 & 1) != 0) {
    goto LABEL_91;
  }
LABEL_80:
  if (v20 >= 1) {
    v33 = *((_DWORD*)v1 + 4);
    if (v33 != 0) {
    LABEL_82:
      v34 = *(_QWORD*)(a1 + 48);
      do {
        nndetailImagePng_png_read_row_plt(v5, v34, 0);
        v34 += v31;
        --v33;
      } while (v33 != 0);
      while ((unsigned int)v20 >= 2) {
        v33 = *((_DWORD*)v1 + 4);
        --v20;
        if (v33 != 0) {
          goto LABEL_82;
        }
      }
    }
  }
  return 1;
}

#pragma GCC visibility pop
