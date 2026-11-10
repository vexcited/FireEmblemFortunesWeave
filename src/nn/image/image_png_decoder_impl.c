#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_image_8fe40(__int64, __int64, unsigned __int64, __int64, __int64);
__int64 nn_image_detail_CombinePngPixelFormat_plt(_QWORD, _QWORD);
__int64 nn_image_detail_PngMemoryAllocator_Allocate_plt(_QWORD, _QWORD);
__int64 nn_image_detail_PngMemoryAllocator_Free_plt(_QWORD, _QWORD);
__int64 nn_image_detail_PngStreamAccessor_Finalize_plt(_QWORD);
__int64 nn_image_detail_Transform_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_destroy_read_struct_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_get_bit_depth_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_get_color_type_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_get_error_ptr_plt(_QWORD);
__int64 nndetailImagePng_png_get_image_height_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_get_image_width_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_get_valid_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_read_info_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_read_update_info_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_set_longjmp_fn_plt(_QWORD, _QWORD, _QWORD);
__int64 setjmp_plt(_QWORD);
extern __int64 SdkData_e86ad8;
__int64 image_png_decoder_8fc10(_DWORD* a1, unsigned int* a2, unsigned int a3,
                                __int64 a4, __int64 a5);
__int64 nn_image_PngDecoder_Decode(void* this_, __int64 a2, unsigned __int64 a3,
                                   __int64 a4);

__int64 image_png_decoder_8fc10(_DWORD* a1, unsigned int* a2, unsigned int a3,
                                __int64 a4, __int64 a5)
{
  __int64 v10;
  unsigned __int8 v12;
  char v13;
  char v14;
  int v15;
  unsigned __int8 v16;
  unsigned __int8 v17;
  unsigned int v18;
  __int64 v19;

  v10 = nndetailImagePng_png_set_longjmp_fn_plt(a4, SdkData_e86ad8, 312);
  if ((unsigned int)setjmp_plt(v10) != 0) {
    return *(unsigned int*)nndetailImagePng_png_get_error_ptr_plt(a4);
  }
  nndetailImagePng_png_read_info_plt(a4, a5);
  v12 = nndetailImagePng_png_get_bit_depth_plt(a4, a5);
  v13 = nndetailImagePng_png_get_color_type_plt(a4, a5);
  if (v13 == 3) {
    v12 = 8;
    v14 = 2;
  }
  else {
    v14 = v13;
  }
  v15 = nndetailImagePng_png_get_valid_plt(a4, a5, 16);
  v16 = v14 | 4;
  if (v12 <= 8u) {
    v17 = 8;
  }
  else {
    v17 = v12;
  }
  if (v15 == 0) {
    v16 = v14;
    v17 = v12;
  }
  v18 = nn_image_detail_CombinePngPixelFormat_plt(v17, v16);
  *a2 = v18;
  if (a3 != 0) {
    v19 = a3;
  }
  else {
    v19 = v18;
  }
  nn_image_detail_Transform_plt(a4, a5, v19);
  *a1 = nndetailImagePng_png_get_image_width_plt(a4, a5);
  a1[1] = nndetailImagePng_png_get_image_height_plt(a4, a5);
  nndetailImagePng_png_read_update_info_plt(a4, a5);
  return 0;
}

__int64 nn_image_PngDecoder_Decode(void* this_, __int64 a2, unsigned __int64 a3,
                                   __int64 a4)
{
  __int64 v7;
  __int64 v8;
  unsigned int v9;

  v7 = nn_image_detail_PngMemoryAllocator_Allocate_plt(
      (char*)this_ + 56, 8LL * *((int*)this_ + 11));
  if (v7 != 0) {
    v8 = v7;
    v9 = nn_image_8fe40(a2, v7, *((_QWORD*)this_ + 5), a4,
                        **((_QWORD**)this_ + 16));
    nndetailImagePng_png_destroy_read_struct_plt(
        *((_QWORD*)this_ + 16), *((_QWORD*)this_ + 16) + 8LL, 0);
    nn_image_detail_PngStreamAccessor_Finalize_plt((char*)this_ + 96);
    nn_image_detail_PngMemoryAllocator_Free_plt((char*)this_ + 56, v8);
  }
  else {
    nndetailImagePng_png_destroy_read_struct_plt(
        *((_QWORD*)this_ + 16), *((_QWORD*)this_ + 16) + 8LL, 0);
    nn_image_detail_PngStreamAccessor_Finalize_plt((char*)this_ + 96);
    v9 = 2;
  }
  *((_DWORD*)this_ + 2) = 4;
  return v9;
}

#pragma GCC visibility pop
