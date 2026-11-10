#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_image_90240(__int64, __int64, unsigned __int64, unsigned int,
                       __int64, __int64, __int64);
__int64 nn_image_detail_PngMemoryAllocator_Allocate_plt(_QWORD, _QWORD);
__int64 nn_image_detail_PngMemoryAllocator_Free_plt(_QWORD, _QWORD);
__int64 nn_image_detail_PngStreamAccessor_Destroy_PngStreamAccessor_plt(_QWORD);
__int64 nn_image_detail_PngStreamAccessor_Finalize_plt(_QWORD);
__int64 nn_image_detail_PngStreamAccessor_GetOffset_plt(_QWORD);
__int64 nn_image_detail_PngStreamAccessor_PngStreamAccessor_plt(_QWORD);
__int64 nn_image_detail_PngStreamWriter_Initialize_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_create_info_struct_plt(_QWORD);
__int64 nndetailImagePng_png_create_write_struct_2_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD, _QWORD,
                                                       _QWORD);
__int64 nndetailImagePng_png_destroy_write_struct_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_set_write_fn_plt(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e86b98;
extern __int64 SdkData_e86ba0;
extern __int64 SdkData_e86ba8;
extern __int64 SdkData_e86bb0;
extern __int64 SdkData_e86bb8;
extern __int64 SdkData_e86bc0;
__int64 nn_image_PngEncoder_Encode(void* this_, unsigned __int64* a2, void* a3,
                                   __int64 a4);

__int64 nn_image_PngEncoder_Encode(void* this_, unsigned __int64* a2, void* a3,
                                   __int64 a4)
{
  __int64 v6;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _QWORD v14[4];
  __int64 v15;
  __int64 v16;

  v6 = *((_QWORD*)this_ + 2);
  v9 = nndetailImagePng_png_create_write_struct_2_plt(
      "1.6.37", (char*)this_ + 88, SdkData_e86ba0, SdkData_e86b98,
      (char*)this_ + 48, SdkData_e86ba8, SdkData_e86bb0);
  v16 = v9;
  if (v9 == 0) {
    return 1;
  }
  v15 = nndetailImagePng_png_create_info_struct_plt(v9);
  if (v15 != 0) {
    v10 = nn_image_detail_PngMemoryAllocator_Allocate_plt(
        (char*)this_ + 48, 8LL * *((int*)this_ + 8));
    if (v10 != 0) {
      v11 = v10;
      memset(v14, 0, sizeof(v14));
      nn_image_detail_PngStreamAccessor_PngStreamAccessor_plt(v14);
      nn_image_detail_PngStreamWriter_Initialize_plt(v14, a3, a4);
      nndetailImagePng_png_set_write_fn_plt(v16, v14, SdkData_e86bb8,
                                            SdkData_e86bc0);
      v12 = nn_image_90240(v6, v11, *(_QWORD*)((char*)this_ + 28),
                           *((_DWORD*)this_ + 6), *((_QWORD*)this_ + 5), v16,
                           v15);
      *a2 = nn_image_detail_PngStreamAccessor_GetOffset_plt(v14);
      nndetailImagePng_png_destroy_write_struct_plt(&v16, &v15);
      nn_image_detail_PngStreamAccessor_Finalize_plt(v14);
      nn_image_detail_PngMemoryAllocator_Free_plt((char*)this_ + 48, v11);
      nn_image_detail_PngStreamAccessor_Destroy_PngStreamAccessor_plt(v14);
      return v12;
    }
    else {
      nndetailImagePng_png_destroy_write_struct_plt(&v16, &v15);
      return 2;
    }
  }
  else {
    nndetailImagePng_png_destroy_write_struct_plt(&v16, 0);
    return 1;
  }
}

#pragma GCC visibility pop
