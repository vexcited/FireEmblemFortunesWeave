#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_88980(__int64);
__int64 image_memory_flush();
__int64 image_memory_write();
__int64 nndetailImagePng_png_app_warning_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_handle_as_unknown_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_image_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_image_free_plt(_QWORD);
__int64 nndetailImagePng_png_safe_execute_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_write_fn_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_warning_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_write_IHDR_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_write_cHRM_fixed_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_write_chunk_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_write_gAMA_fixed_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_write_iCCP_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_write_sBIT_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_write_sRGB_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_write_sig_plt(_QWORD);
__int64 png_image_write_init(__int64**);
__int64 nndetailImagePng_png_write_info_before_PLTE(__int64 result,
                                                    unsigned int* a2);
__int64 png_image_write_main(_QWORD*** a1);
__int64 nndetailImagePng_png_image_write_to_stdio(__int64 result, __int64 a2,
                                                  unsigned int a3, __int64 a4,
                                                  int a5, __int64 a6);

__int64 nndetailImagePng_png_write_info_before_PLTE(__int64 result,
                                                    unsigned int* a2)
{
  __int64 v3;
  unsigned int v4;
  __int16 v5;
  unsigned int v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;

  if (result == 0) {
    return result;
  }
  if (a2 == nullptr) {
    return result;
  }
  v3 = result;
  if ((*(_BYTE*)(result + 413) & 4) != 0) {
    return result;
  }
  nndetailImagePng_png_write_sig_plt(result);
  if ((*(_BYTE*)(v3 + 413) & 0x10) != 0 && *(_DWORD*)(v3 + 1104) != 0) {
    nndetailImagePng_png_warning_plt(
        v3, "MNG features are not allowed in a PNG datastream");
    *(_DWORD*)(v3 + 1104) = 0;
  }
  v4 = *((unsigned __int8*)a2 + 37);
  result = nndetailImagePng_png_write_IHDR_plt(
      v3, *a2, a2[1], *((unsigned __int8*)a2 + 36),
      *((unsigned __int8*)a2 + 37), *((unsigned __int8*)a2 + 38),
      *((unsigned __int8*)a2 + 39), *((unsigned __int8*)a2 + 40));
  v5 = *((_WORD*)a2 + 63);
  if ((v5 & 0x8008) == 8) {
    if ((a2[2] & 1) != 0) {
      result = nndetailImagePng_png_write_gAMA_fixed_plt(v3, a2[13]);
    }
  }
  else if ((*((_WORD*)a2 + 63) & 0x8000) != 0) {
    if ((a2[2] & 2) != 0) {
      goto LABEL_23;
    }
    goto LABEL_14;
  }
  v6 = a2[2];
  if ((v6 & 0x1000) != 0) {
    if ((v6 & 0x800) != 0) {
      nndetailImagePng_png_app_warning_plt(
          v3, "profile matches sRGB but writing iCCP instead");
    }
    result = nndetailImagePng_png_write_iCCP_plt(v3, *((_QWORD*)a2 + 16),
                                                 *((_QWORD*)a2 + 17));
    if ((v6 & 2) != 0) {
      goto LABEL_23;
    }
  LABEL_14:
    if ((v5 & 0x8010) != 0x10) {
      goto LABEL_26;
    }
  LABEL_24:
    if ((a2[2] & 4) != 0) {
      result = nndetailImagePng_png_write_cHRM_fixed_plt(v3, a2 + 14);
    }
    goto LABEL_26;
  }
  if ((v6 & 0x800) != 0) {
    result =
        nndetailImagePng_png_write_sRGB_plt(v3, *((unsigned __int16*)a2 + 62));
    if ((v6 & 2) != 0) {
      goto LABEL_23;
    }
    goto LABEL_14;
  }
  if ((v6 & 2) == 0) {
    goto LABEL_14;
  }
LABEL_23:
  result = nndetailImagePng_png_write_sBIT_plt(v3, a2 + 44, v4);
  if ((*((_WORD*)a2 + 63) & 0x8010) == 0x10) {
    goto LABEL_24;
  }
LABEL_26:
  v7 = (int)a2[78];
  if ((int)v7 > 0) {
    v8 = *((_QWORD*)a2 + 38);
    v9 = v8 + 32 * v7;
    do {
      if ((*(_BYTE*)(v8 + 24) & 1) != 0) {
        result = nndetailImagePng_png_handle_as_unknown_plt(v3, v8);
        if ((_DWORD)result != 1 &&
            ((_DWORD)result == 3 || (*(_BYTE*)(v8 + 3) & 0x20) != 0 ||
             (_DWORD)result == 0 && *(_DWORD*)(v3 + 1072) == 3)) {
          if (*(_QWORD*)(v8 + 16) == 0) {
            nndetailImagePng_png_warning_plt(
                v3, "Writing zero-length unknown chunk");
          }
          result =
              nndetailImagePng_png_write_chunk_plt(v3, v8, *(_QWORD*)(v8 + 8));
        }
      }
      v8 += 32LL;
    } while (v8 < v9);
  }
  *(_DWORD*)(v3 + 412) |= 0x400u;
  return result;
}

__int64 png_image_write_main(_QWORD*** a1)
{
  nndetailImagePng_png_set_write_fn_plt(***a1, a1, image_memory_write,
                                        image_memory_flush);
  return SdkRoutine_88980((__int64)a1);
}

__int64 nndetailImagePng_png_image_write_to_stdio(__int64 result, __int64 a2,
                                                  unsigned int a3, __int64 a4,
                                                  int a5, __int64 a6)
{
  __int64** v11;
  __int64 v12;
  unsigned int v13;
  const char* v14;
  struct {
    _QWORD v15[2];
    int v16;
    int v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v15_;

  if (result != 0) {
    if (*(_DWORD*)(result + 8) == 1) {
      if (a2 != 0 && a4 != 0) {
        v11 = (__int64**)result;
        result = png_image_write_init((__int64**)result);
        if ((_DWORD)result != 0) {
          v12 = **v11;
          v15_.v15[1] = a4;
          v15_.v17 = 0;
          v15_.v20 = 0;
          v15_.v21 = 0;
          v15_.v22 = 0;
          v15_.v23 = 0;
          v15_.v24 = 0;
          v15_.v25 = 0;
          v15_.v15[0] = v11;
          v15_.v16 = a5;
          v15_.v18 = a6;
          v15_.v19 = a3;
          *(_QWORD*)(v12 + 376) = a2;
          v13 = nndetailImagePng_png_safe_execute_plt(v11, SdkRoutine_88980,
                                                      v15_.v15);
          nndetailImagePng_png_image_free_plt(v11);
          return v13;
        }
        return result;
      }
      v14 = "png_image_write_to_stdio: invalid argument";
    }
    else {
      v14 = "png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION";
    }
    return nndetailImagePng_png_image_error_plt(result, v14);
  }
  return result;
}

#pragma GCC visibility pop
