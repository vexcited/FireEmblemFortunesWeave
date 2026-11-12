#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 image_png_decoder_8fc10(_DWORD*, unsigned int*, unsigned int, __int64,
                                __int64);
__int64 nn_image_detail_GetPngRowStride_plt(unsigned int, int);
__int64 nn_image_detail_PngMemoryAllocator_Allocate_plt(__int64,
                                                        unsigned __int64);
__int64 nn_image_detail_PngStreamAccessor_Finalize_plt(__int64);
__int64 nn_image_detail_PngStreamReader_Initialize_plt(__int64, __int64,
                                                       unsigned __int64);
__int64 nndetailImagePng_png_create_info_struct_plt(__int64);
__int64 nndetailImagePng_png_create_read_struct_2_plt(_QWORD, _QWORD, _QWORD,
                                                      _QWORD, _QWORD, _QWORD,
                                                      _QWORD);
__int64 nndetailImagePng_png_destroy_read_struct_plt(__int64, __int64, __int64);
__int64 nndetailImagePng_png_set_read_fn_plt(__int64, __int64, __int64);
extern __int64 SdkData_e86b98;
extern __int64 SdkData_e86ba0;
extern __int64 SdkData_e86ba8;
extern __int64 SdkData_e86bb0;
extern __int64 SdkData_e86bc8;
__int64 nn_image_8faa0(void* this_);

__int64 nn_image_8faa0(void* this_)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v8;

  if (*((_QWORD*)this_ + 16) == 0) {
    v2 = nn_image_detail_PngMemoryAllocator_Allocate_plt((__int64)this_ + 56,
                                                         0x10u);
    *((_QWORD*)this_ + 16) = v2;
    if (v2 == 0) {
      return 2;
    }
  }
  **((_QWORD**)this_ + 16) = nndetailImagePng_png_create_read_struct_2_plt(
      "1.6.37", (char*)this_ + 136, SdkData_e86ba0, SdkData_e86b98,
      (char*)this_ + 56, SdkData_e86ba8, SdkData_e86bb0);
  v3 = **((_QWORD**)this_ + 16);
  if (v3 == 0) {
    return 1;
  }
  *(_QWORD*)(*((_QWORD*)this_ + 16) + 8LL) =
      nndetailImagePng_png_create_info_struct_plt(v3);
  v4 = *((_QWORD*)this_ + 16);
  if (*(_QWORD*)(v4 + 8) != 0) {
    nn_image_detail_PngStreamReader_Initialize_plt(
        (__int64)this_ + 96, *((_QWORD*)this_ + 2), *((_QWORD*)this_ + 3));
    nndetailImagePng_png_set_read_fn_plt(**((_QWORD**)this_ + 16),
                                         (__int64)this_ + 96, SdkData_e86bc8);
    v5 = image_png_decoder_8fc10(
        (_DWORD*)this_ + 10, (unsigned int*)this_ + 9, *((_DWORD*)this_ + 8),
        **((_QWORD**)this_ + 16), *(_QWORD*)(*((_QWORD*)this_ + 16) + 8LL));
    if (v5 != 0) {
      v6 = v5;
      nndetailImagePng_png_destroy_read_struct_plt(
          *((_QWORD*)this_ + 16), *((_QWORD*)this_ + 16) + 8LL, 0);
      nn_image_detail_PngStreamAccessor_Finalize_plt((__int64)this_ + 96);
      return v6;
    }
    else {
      if (*((_DWORD*)this_ + 8) != 0) {
        v8 = *((_DWORD*)this_ + 8);
      }
      else {
        v8 = *((_DWORD*)this_ + 9);
      }
      *((_QWORD*)this_ + 6) =
          nn_image_detail_GetPngRowStride_plt(v8, *((_DWORD*)this_ + 10));
      *((_DWORD*)this_ + 2) = 3;
      return 0;
    }
  }
  else {
    nndetailImagePng_png_destroy_read_struct_plt(v4, 0, 0);
    return 1;
  }
}

#pragma GCC visibility pop
