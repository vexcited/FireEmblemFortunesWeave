#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 longjmp_plt(_QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_image_GetBitDepth_plt(_QWORD);
__int64 nn_image_detail_PngMemoryAllocator_PngMemoryAllocator_plt(_QWORD);
__int64 nn_image_detail_PngStreamAccessor_PngStreamAccessor_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_destroy_plt(void);
__int64 nndetailImagePng_png_get_bit_depth_plt(void);
__int64 nndetailImagePng_png_get_color_type_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_get_valid_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_add_alpha_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_expand_16_plt(_QWORD);
__int64 nndetailImagePng_png_set_expand_plt(_QWORD);
__int64 nndetailImagePng_png_set_gray_to_rgb_plt(_QWORD);
__int64 nndetailImagePng_png_set_palette_to_rgb_plt(_QWORD);
__int64 nndetailImagePng_png_set_rgb_to_gray_plt(_QWORD, _QWORD, double,
                                                 double);
__int64 nndetailImagePng_png_set_scale_16_plt(_QWORD);
__int64 nndetailImagePng_png_set_strip_alpha_plt(_QWORD);
__int64 nndetailImagePng_png_set_swap_plt(_QWORD);
__int64 nndetailImagePng_png_set_tRNS_to_alpha_plt(_QWORD);
extern __int64 SdkData_e86bd0;
void __attribute__((noreturn)) nn_image_detail_HandleLibjpegError(__int64 a1);
void __attribute__((noreturn)) nn_image_detail_HandleError(__int64 a1, int a2);
__int64 nn_image_detail_Transform(__int64 a1, __int64 a2, unsigned int a3);

void __attribute__((noreturn)) nn_image_detail_HandleLibjpegError(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  (*(void (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  v2 = *(_QWORD*)a1;
  v3 = -32;
  v4 = a1;
  v5 = (unsigned int)(*(_DWORD*)(*(_QWORD*)a1 + 40LL) - 24);
  if ((unsigned int)v5 <= 0x30) {
    if (((1LL << (*(_BYTE*)(*(_QWORD*)a1 + 40LL) - 24)) & 0x1404003248014LL) !=
        0) {
      v3 = -33;
    }
    else {
      if (((1LL << (*(_BYTE*)(*(_QWORD*)a1 + 40LL) - 24)) & 0x1E0008000001LL) ==
          0) {
        goto LABEL_7;
      }
      v3 = -64;
    }
  }
  while (1) {
    v6 = *(_QWORD*)(v4 + 24);
    **(_DWORD**)(v6 + 320) = v3;
    nndetailImageJpeg_jpeg_destroy_plt();
    v4 = longjmp_plt(v6 + 8, 1);
  LABEL_7:
    if (v5 == 32) {
      if (*(int*)(v2 + 44) > 19) {
        v3 = -65;
      }
      else {
        v3 = -64;
      }
    }
  }
}

void __attribute__((noreturn)) nn_image_detail_HandleError(__int64 a1, int a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 24);
  **(_DWORD**)(v2 + 320) = a2;
  nndetailImageJpeg_jpeg_destroy_plt();
  longjmp_plt(v2 + 8, 1);
  __udf(0);
}

__int64 nn_image_detail_Transform(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 v6;
  __int64 v7;
  char v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  __int64 result;
  __int64 v14;
  __int64 v15;

  v6 = nndetailImagePng_png_get_bit_depth_plt();
  v7 = nndetailImagePng_png_get_color_type_plt(a1, a2);
  v8 = a3 - 1;
  if (a3 - 1 >= 0xF) {
    v14 = nn_detail_UnexpectedDefaultImpl_plt_857150(v7);
    v15 = SdkData_e86bd0;
    *(_DWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)v14 = v15 + 16;
    nn_image_detail_PngMemoryAllocator_PngMemoryAllocator_plt(v14 + 56);
    *(_QWORD*)(v14 + 96) = 0;
    v14 += 96;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 8) = 0;
    result = nn_image_detail_PngStreamAccessor_PngStreamAccessor_plt(v14);
    *(_QWORD*)(v14 + 32) = 0;
    *(_DWORD*)(v14 + 40) = 0;
    return result;
  }
  v9 = (unsigned __int8)v7;
  v10 = 0x19F0u >> v8;
  v11 = nn_image_GetBitDepth_plt(a3);
  if (v9 == 3) {
    nndetailImagePng_png_set_palette_to_rgb_plt(a1);
  }
  v12 = 0x7FFu >> v8;
  if ((v10 & 1) != 0) {
    if ((v9 & 2) != 0) {
      nndetailImagePng_png_set_rgb_to_gray_plt(a1, 1, -1.0, -1.0);
    }
  }
  else if ((v9 & 2) == 0) {
    nndetailImagePng_png_set_gray_to_rgb_plt(a1);
  }
  result = nndetailImagePng_png_get_valid_plt(a1, a2, 16);
  if ((v12 & 1) == 0) {
    if ((v9 & 4) == 0) {
      if ((_DWORD)result == 0) {
        result = nndetailImagePng_png_set_add_alpha_plt(a1, 0xFFFF, 1);
        if (v11 != 8) {
          goto LABEL_22;
        }
      LABEL_17:
        if (v6 == 16) {
          return nndetailImagePng_png_set_scale_16_plt(a1);
        }
        if (v6 <= 7u) {
          return nndetailImagePng_png_set_expand_plt(a1);
        }
        return result;
      }
      result = nndetailImagePng_png_set_tRNS_to_alpha_plt(a1);
    }
  LABEL_16:
    if (v11 != 8) {
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  if ((v9 & 4 | (unsigned int)result) == 0) {
    goto LABEL_16;
  }
  result = nndetailImagePng_png_set_strip_alpha_plt(a1);
  if (v11 == 8) {
    goto LABEL_17;
  }
LABEL_22:
  if (v11 == 16 && v6 <= 0xFu) {
    nndetailImagePng_png_set_expand_16_plt(a1);
    return nndetailImagePng_png_set_swap_plt(a1);
  }
  if (v11 == 16) {
    return nndetailImagePng_png_set_swap_plt(a1);
  }
  return result;
}

#pragma GCC visibility pop
