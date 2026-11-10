#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_image_GetBitDepth_plt(_QWORD);
__int64 nn_image_detail_GetPngColorType_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_CreateCompress_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImageJpeg_jpeg_destroy_compress_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_finish_compress_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_mem_dest_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImageJpeg_jpeg_set_colorspace_plt(_QWORD, _QWORD);
__int64 nndetailImageJpeg_jpeg_set_defaults_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_set_quality_plt(_QWORD, _QWORD);
__int64 nndetailImageJpeg_jpeg_start_compress_plt(_QWORD, _QWORD);
__int64 nndetailImageJpeg_jpeg_std_error_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_write_scanlines_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_get_error_ptr_plt(_QWORD);
__int64 nndetailImagePng_png_read_image_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_set_IHDR_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                          _QWORD, _QWORD, _QWORD, _QWORD,
                                          _DWORD);
__int64 nndetailImagePng_png_set_filter_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_longjmp_fn_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_rows_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_write_png_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 setjmp_plt(_QWORD);
extern _DWORD SdkData_bcbd08[3];
extern _DWORD SdkData_bcbd14[3];
extern __int64 SdkData_e86ad0;
extern __int64 SdkData_e86ad8;
__int64 nndetailImageJpeg_jpeg_get_small(__int64 a1, __int64 a2);
__int64 nndetailImageJpeg_jpeg_free_small(__int64 a1, __int64 a2, __int64 a3);
__int64 nndetailImageJpeg_jpeg_get_large(__int64 a1, __int64 a2);
__int64 nndetailImageJpeg_jpeg_free_large(__int64 a1, __int64 a2, __int64 a3);
__int64 nndetailImageJpeg_jpeg_mem_available(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4);
__int64 nn_image_63d60(_QWORD* a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                       int a5, int* a6, int a7, unsigned int a8,
                       unsigned int a9, char a10, __int64 a11);
__int64 nn_image_8fe40(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                       __int64 a5);
__int64 nn_image_90240(__int64 a1, __int64 a2, unsigned __int64 a3,
                       unsigned int a4, __int64 a5, __int64 a6, __int64 a7);

__int64 nndetailImageJpeg_jpeg_get_small(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 24) + 16LL))(**(_QWORD**)(a1 + 24), a2, 16);
}

__int64 nndetailImageJpeg_jpeg_free_small(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      ***(_QWORD***)(a1 + 24) + 24LL))(**(_QWORD**)(a1 + 24), a2, a3, 16);
}

__int64 nndetailImageJpeg_jpeg_get_large(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 24) + 16LL))(**(_QWORD**)(a1 + 24), a2, 16);
}

__int64 nndetailImageJpeg_jpeg_free_large(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      ***(_QWORD***)(a1 + 24) + 24LL))(**(_QWORD**)(a1 + 24), a2, a3, 16);
}

__int64 nndetailImageJpeg_jpeg_mem_available(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  if (v4 <= 0) {
    return a3;
  }
  else {
    return v4 - a4;
  }
}

__int64 nn_image_63d60(_QWORD* a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                       int a5, int* a6, int a7, unsigned int a8,
                       unsigned int a9, char a10, __int64 a11)
{
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned int v24;
  int v26;
  int v27;
  _DWORD* v28;
  _DWORD* v29;
  int v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  _BYTE* v36;
  int v37;
  char* v38;
  char v39;
  _BYTE* v40;
  int v41;
  char* v42;
  char v43;
  _BYTE* v44;
  int v45;
  char* v46;
  char v47;
  _BYTE* v48;
  int v49;
  char* v50;
  char v51;
  _BYTE* v52;
  int v53;
  char* v54;
  char v55;
  _BYTE* v56;
  int v57;
  char* v58;
  char v59;
  _BYTE* v60;
  int v61;
  char* v62;
  char v63;
  _BYTE* v64;
  int v65;
  char* v66;
  char v67;
  int v68;
  unsigned int v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  _QWORD v76[21];
  __int64 v77;
  _QWORD v78[40];
  unsigned int v79;
  __int64 v80;
  struct {
    _QWORD v81[6];
    int v82;
    int v83;
    __int64 v84;
    char gap600_[40];
    _DWORD* v85;
    char gap648_[184];
    int v86;
    char gap836_[4];
    int v87;
    char gap844_[4];
    int v88;
    char gap852_[8];
    int v89;
    char gap864_[12];
    unsigned int v90;
  } v81_;
  __int64 v91;
  struct {
    _BYTE* v92;
    _BYTE* v93;
    _BYTE* v94;
    _BYTE* v95;
    _BYTE* v96;
    _BYTE* v97;
    _BYTE* v98;
    __int64 v99;
  } v92_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v91 = a2;
  if (a5 == 10) {
    goto LABEL_6;
  }
  if (a5 != 14) {
    goto LABEL_66;
  }
  v17 = *a6;
  if ((_DWORD)v17 == 0) {
  LABEL_6:
    v74 = a1;
    v22 = 0;
    v21 = 0;
  LABEL_7:
    v73 = v22;
    memset_plt((void*)v81_.v81, nullptr, 584, a4),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v79 = 0;
    memset_plt((void*)v78, nullptr, 312, v23),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v77 = a11;
    v81_.v81[2] = &v77;
    v78[39] = &v79;
    memset(v76, 0, sizeof(v76));
    v80 = nndetailImageJpeg_jpeg_std_error_plt(v76),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v76[0] = SdkData_e86ad0;
    if ((unsigned int)setjmp_plt(v78) != 0) {
      v24 = v79;
      if (v21 == 0) {
        return v24;
      }
    LABEL_9:
      (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a11 + 24LL))(
          a11, v21, v73, 4),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      return v24;
    }
    nndetailImageJpeg_jpeg_CreateCompress_plt(&v80, 80, 592),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v75 = a3;
    nndetailImageJpeg_jpeg_mem_dest_plt(&v80, &v91, &v75),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v26 = a6[1];
    v81_.v82 = *a6;
    v81_.v83 = v26;
    v81_.v84 = 0x200000003LL;
    nndetailImageJpeg_jpeg_set_defaults_plt(&v80),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    a1 = (_QWORD*)nndetailImageJpeg_jpeg_set_colorspace_plt(&v80, 3),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (a9 < 3) {
      v27 = SdkData_bcbd14[a9];
      v81_.v85[2] = SdkData_bcbd08[a9];
      v81_.v85[3] = v27;
      v28 = v81_.v85;
      v81_.v85[26] = 1;
      v28[50] = 1;
      v29 = v81_.v85;
      v81_.v85[51] = 1;
      v29[27] = 1;
      nndetailImageJpeg_jpeg_set_quality_plt(&v80, a8),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v81_.v88 = 0;
      v81_.v86 = 0;
      v81_.v87 = 0;
      if ((a10 & 1) == 0) {
        v81_.v89 = 0;
      }
      a1 = (_QWORD*)nndetailImageJpeg_jpeg_start_compress_plt(&v80, 1),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      if (a5 == 10) {
        v68 = *a6;
        v69 = a6[1];
        if (*a6 % a7 != 0) {
          v68 = a7 + v68 - v68 % a7;
        }
        if (v81_.v90 < v69) {
          v70 = 3 * v68;
          v92_.v98 = nullptr;
          v92_.v99 = 0;
          v92_.v96 = nullptr;
          v92_.v97 = nullptr;
          v92_.v94 = nullptr;
          v92_.v95 = nullptr;
          v71 = v81_.v90;
          v92_.v92 = nullptr;
          v92_.v93 = nullptr;
          do {
            v72 = v69 - v71;
            if ((int)(v69 - v71) > 0) {
              v92_.v92 = (_BYTE*)(a4 + v70 * v71);
              if (v72 != 1) {
                v92_.v93 = (_BYTE*)(a4 + v70 + v70 * v71);
                if (v72 != 2) {
                  v92_.v94 = (_BYTE*)(a4 + v70 * (v71 + 2));
                  if (v72 != 3) {
                    v92_.v95 = (_BYTE*)(a4 + v70 * (v71 + 3));
                    if (v72 != 4) {
                      v92_.v96 = (_BYTE*)(a4 + v70 * (v71 + 4));
                      if (v72 != 5) {
                        v92_.v97 = (_BYTE*)(a4 + v70 * (v71 + 5));
                        if (v72 != 6) {
                          v92_.v98 = (_BYTE*)(a4 + v70 * (v71 + 6));
                          if (v72 != 7) {
                            v92_.v99 = a4 + v70 * (v71 + 7);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            nndetailImageJpeg_jpeg_write_scanlines_plt(&v80, &v92_.v92),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            v71 = v81_.v90;
          } while (v81_.v90 < v69);
        }
      LABEL_64:
        nndetailImageJpeg_jpeg_finish_compress_plt(&v80),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        nndetailImageJpeg_jpeg_destroy_compress_plt(&v80),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v24 = 0;
        *v74 = v75;
        if (v21 == 0) {
          return v24;
        }
        goto LABEL_9;
      }
      if (a5 == 14) {
        v30 = *(_QWORD*)a6;
        v31 = HIDWORD(*(_QWORD*)a6);
        v92_.v92 = (_BYTE*)v21;
        v92_.v93 = (_BYTE*)(v21 + 3 * v30);
        v92_.v94 = (_BYTE*)(v21 + 6LL * v30);
        v92_.v95 = (_BYTE*)(v21 + 9LL * v30);
        v92_.v96 = (_BYTE*)(v21 + 12LL * v30);
        v92_.v97 = (_BYTE*)(v21 + 15LL * v30);
        v92_.v98 = (_BYTE*)(v21 + 18LL * v30);
        v92_.v99 = v21 - 3 * v30 + 24LL * v30;
        if (v30 % a7 != 0) {
          v32 = a7 + v30 - v30 % a7;
        }
        else {
          v32 = v30;
        }
        if (v81_.v90 < v31) {
          if (v30 <= 0) {
            do {
              nndetailImageJpeg_jpeg_write_scanlines_plt(&v80, &v92_.v92),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            } while (v81_.v90 < v31);
          }
          else {
            v33 = a4 + 2;
            v34 = v81_.v90;
            do {
              v35 = v31 - v34;
              if ((int)(v31 - v34) > 0) {
                v36 = v92_.v92;
                v37 = 0;
                v38 = (char*)(v33 + 4LL * v34 * v32);
                do {
                  ++v37;
                  *v36 = *(v38 - 2);
                  v36[1] = *(v38 - 1);
                  v39 = *v38;
                  v38 += 4;
                  v36[2] = v39;
                  v36 += 3;
                } while (v30 > (unsigned __int16)v37);
                if (v35 != 1) {
                  v40 = v92_.v93;
                  v41 = 0;
                  v42 = (char*)(v33 + 4LL * (v32 + v32 * v34));
                  do {
                    ++v41;
                    *v40 = *(v42 - 2);
                    v40[1] = *(v42 - 1);
                    v43 = *v42;
                    v42 += 4;
                    v40[2] = v43;
                    v40 += 3;
                  } while (v30 > (unsigned __int16)v41);
                  if (v35 != 2) {
                    v44 = v92_.v94;
                    v45 = 0;
                    v46 = (char*)(v33 + 4LL * (v34 + 2) * v32);
                    do {
                      ++v45;
                      *v44 = *(v46 - 2);
                      v44[1] = *(v46 - 1);
                      v47 = *v46;
                      v46 += 4;
                      v44[2] = v47;
                      v44 += 3;
                    } while (v30 > (unsigned __int16)v45);
                    if (v35 != 3) {
                      v48 = v92_.v95;
                      v49 = 0;
                      v50 = (char*)(v33 + 4LL * (v34 + 3) * v32);
                      do {
                        ++v49;
                        *v48 = *(v50 - 2);
                        v48[1] = *(v50 - 1);
                        v51 = *v50;
                        v50 += 4;
                        v48[2] = v51;
                        v48 += 3;
                      } while (v30 > (unsigned __int16)v49);
                      if (v35 != 4) {
                        v52 = v92_.v96;
                        v53 = 0;
                        v54 = (char*)(v33 + 4LL * (v34 + 4) * v32);
                        do {
                          ++v53;
                          *v52 = *(v54 - 2);
                          v52[1] = *(v54 - 1);
                          v55 = *v54;
                          v54 += 4;
                          v52[2] = v55;
                          v52 += 3;
                        } while (v30 > (unsigned __int16)v53);
                        if (v35 != 5) {
                          v56 = v92_.v97;
                          v57 = 0;
                          v58 = (char*)(v33 + 4LL * (v34 + 5) * v32);
                          do {
                            ++v57;
                            *v56 = *(v58 - 2);
                            v56[1] = *(v58 - 1);
                            v59 = *v58;
                            v58 += 4;
                            v56[2] = v59;
                            v56 += 3;
                          } while (v30 > (unsigned __int16)v57);
                          if (v35 != 6) {
                            v60 = v92_.v98;
                            v61 = 0;
                            v62 = (char*)(v33 + 4LL * (v34 + 6) * v32);
                            do {
                              ++v61;
                              *v60 = *(v62 - 2);
                              v60[1] = *(v62 - 1);
                              v63 = *v62;
                              v62 += 4;
                              v60[2] = v63;
                              v60 += 3;
                            } while (v30 > (unsigned __int16)v61);
                            if (v35 != 7) {
                              v64 = (_BYTE*)v92_.v99;
                              v65 = 0;
                              v66 = (char*)(v33 + 4LL * (v34 + 7) * v32);
                              do {
                                ++v65;
                                *v64 = *(v66 - 2);
                                v64[1] = *(v66 - 1);
                                v67 = *v66;
                                v66 += 4;
                                v64[2] = v67;
                                v64 += 3;
                              } while (v30 > (unsigned __int16)v65);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              nndetailImageJpeg_jpeg_write_scanlines_plt(&v80, &v92_.v92),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
              v34 = v81_.v90;
            } while (v81_.v90 < v31);
          }
        }
        goto LABEL_64;
      }
    }
  LABEL_66:
    nn_detail_UnexpectedDefaultImpl_plt_857150(a1),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v18 = (__int64)a1;
  v19 = 24 * v17;
  v20 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a11 + 16LL))(
      a11, 24 * v17, 4),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v20 != 0) {
    v74 = (_QWORD*)v18;
    v21 = v20;
    v22 = v19;
    goto LABEL_7;
  }
  return 4294967232LL;
}

__int64 nn_image_8fe40(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                       __int64 a5)
{
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;

  v10 = nndetailImagePng_png_set_longjmp_fn_plt(a5, SdkData_e86ad8, 312);
  if ((unsigned int)setjmp_plt(v10) != 0) {
    return *(unsigned int*)nndetailImagePng_png_get_error_ptr_plt(a5);
  }
  if (SHIDWORD(a3) >= 1) {
    v12 = HIDWORD(a3) & 7;
    if (HIDWORD(a3) - 1 >= 7) {
      v15 = (_QWORD*)(a2 + 32);
      v16 = 0;
      do {
        *(v15 - 4) = a1;
        *(v15 - 3) = a1 + a4;
        v17 = a1 + a4 + a4;
        *(v15 - 2) = v17;
        *(v15 - 1) = v17 + a4;
        v18 = v17 + a4 + a4;
        *v15 = v18;
        v15[1] = v18 + a4;
        v19 = v18 + a4 + a4;
        v15[2] = v19;
        v15[3] = v19 + a4;
        v14 = v19 + a4 + a4;
        v20 = v16 - 8;
        v15 += 8;
        v16 = v20;
        a1 = v14;
      } while (-8LL * ((a3 >> 35) & 0xFFFFFFF) != v20);
      v13 = -v20;
      if (v12 == 0) {
        goto LABEL_12;
      }
    }
    else {
      v13 = 0;
      v14 = a1;
      if (v12 == 0) {
        goto LABEL_12;
      }
    }
    v21 = (_QWORD*)(a2 + 8 * v13);
    do {
      *v21++ = v14;
      v14 += a4;
      --v12;
    } while (v12 != 0);
  }
LABEL_12:
  nndetailImagePng_png_read_image_plt(a5, a2);
  return 0;
}

__int64 nn_image_90240(__int64 a1, __int64 a2, unsigned __int64 a3,
                       unsigned int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v14;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;

  v14 = nndetailImagePng_png_set_longjmp_fn_plt(a6, SdkData_e86ad8, 312);
  if ((unsigned int)setjmp_plt(v14) != 0) {
    return *(unsigned int*)nndetailImagePng_png_get_error_ptr_plt(a6);
  }
  if (SHIDWORD(a3) >= 1) {
    v16 = HIDWORD(a3) & 7;
    if (HIDWORD(a3) - 1 < 7) {
      v17 = 0;
      if (v16 == 0) {
        goto LABEL_12;
      }
      goto LABEL_10;
    }
    v18 = (_QWORD*)(a2 + 32);
    v19 = a1;
    v20 = 0;
    do {
      *(v18 - 4) = v19;
      *(v18 - 3) = v19 + a5;
      v21 = v19 + a5 + a5;
      v19 += 8 * a5;
      *(v18 - 2) = v21;
      *(v18 - 1) = v21 + a5;
      v22 = v21 + a5 + a5;
      *v18 = v22;
      v18[1] = v22 + a5;
      v23 = v22 + a5 + a5;
      v18[2] = v23;
      v18[3] = v23 + a5;
      v24 = v20 - 8;
      v18 += 8;
      v20 = v24;
    } while (-8LL * ((a3 >> 35) & 0xFFFFFFF) != v24);
    v17 = -v24;
    if (v16 != 0) {
    LABEL_10:
      v25 = (_QWORD*)(a2 + 8 * v17);
      v26 = a1 + v17 * a5;
      do {
        *v25++ = v26;
        v26 += a5;
        --v16;
      } while (v16 != 0);
    }
  }
LABEL_12:
  nndetailImagePng_png_set_rows_plt(a6, a7, a2);
  v27 = nn_image_GetBitDepth_plt(a4);
  v28 = nn_image_detail_GetPngColorType_plt(a4);
  if (v27 == 16) {
    v29 = 512;
  }
  else {
    v29 = 0;
  }
  nndetailImagePng_png_set_filter_plt(a6, 0, 8);
  nndetailImagePng_png_set_IHDR_plt(a6, a7, (unsigned int)a3, HIDWORD(a3), v27,
                                    v28, 0, 0, 0);
  nndetailImagePng_png_write_png_plt(a6, a7, v29, 0);
  return 0;
}

#pragma GCC visibility pop
