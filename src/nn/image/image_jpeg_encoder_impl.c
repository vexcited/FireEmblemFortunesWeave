#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_image_63d60(__int64, __int64, __int64, unsigned __int64, int, int*,
                       int, unsigned int, unsigned int, char, __int64);
__int64 nn_image_ExifBuilder_Build_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_image_ExifBuilder_GetAnalyzedOutputSize_plt(_QWORD);
__int64 nn_image_detail_WriteExifHeader_plt(_QWORD, _QWORD);
__int64 nn_image_JpegEncoder_Encode(void* this_, unsigned __int64* a2, char* a3,
                                    unsigned __int64 a4, void* a5);

__int64 nn_image_JpegEncoder_Encode(void* this_, unsigned __int64* a2, char* a3,
                                    unsigned __int64 a4, void* a5)
{
  unsigned __int64 v10;
  bool v11;
  _WORD* v12;
  __int64 v13;
  __int64 result;

  if (*((int*)this_ + 4) <= 1) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if (a5 != nullptr) {
    v10 = nn_image_ExifBuilder_GetAnalyzedOutputSize_plt(a5) + 10;
    v11 = a4 > v10;
    a4 -= v10;
    if (!v11) {
      return 4294967231LL;
    }
    v12 = a3;
    a3 += v10;
  }
  else {
    v12 = nullptr;
    v10 = 0;
  }
  result = nn_image_63d60((__int64)a2, (__int64)a3, a4, *((_QWORD*)this_ + 3),
                          *((_DWORD*)this_ + 8), (int*)this_ + 9,
                          *((_DWORD*)this_ + 11), *((_DWORD*)this_ + 12),
                          *((_DWORD*)this_ + 13), a5 == nullptr,
                          *((_QWORD*)this_ + 1));
  if ((_DWORD)result == 0) {
    if (v12 != nullptr) {
      *v12 = *(_WORD*)((char*)v12 + v10);
      nn_image_detail_WriteExifHeader_plt(v12 + 1, v10);
      v13 = nn_image_ExifBuilder_GetAnalyzedOutputSize_plt(a5);
      nn_image_ExifBuilder_Build_plt(a5, v12 + 6, v13, (char*)this_ + 36);
      *a2 += v10;
      return 0;
    }
    else {
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
