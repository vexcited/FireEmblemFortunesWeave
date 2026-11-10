#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_free_data_plt(void);
__int64 nndetailImagePng_png_free_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_malloc_warn_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_warning_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_set_eXIf_1(__int64 result, __int64 a2, int a3,
                                        __int64 a4);
__int64 nndetailImagePng_png_set_hIST(__int64 result, __int64 a2, __int64 a3);

__int64 nndetailImagePng_png_set_eXIf_1(__int64 result, __int64 a2, int a3,
                                        __int64 a4)
{
  __int64 v5;
  __int64 v7;

  if (result != 0 && a2 != 0) {
    v5 = *(_QWORD*)(a2 + 240);
    v7 = result;
    if (v5 != 0) {
      nndetailImagePng_png_free_plt(result, v5);
    }
    *(_DWORD*)(a2 + 236) = a3;
    result = nndetailImagePng_png_malloc_warn_plt(v7, a3);
    *(_QWORD*)(a2 + 240) = result;
    if (result != 0) {
      *(_DWORD*)(a2 + 300) |= 0x8000u;
      if (a3 >= 1) {
        result = memcpy_plt(result, a4, (unsigned int)a3);
      }
      *(_DWORD*)(a2 + 8) |= 0x10000u;
    }
    else {
      return nndetailImagePng_png_warning_plt(
          v7, "Insufficient memory for eXIf chunk data");
    }
  }
  return result;
}

__int64 nndetailImagePng_png_set_hIST(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;
  unsigned __int64 v6;
  __int64 v7;

  if (result != 0 && a2 != 0) {
    if ((unsigned int)*(unsigned __int16*)(a2 + 32) - 257 > 0xFFFFFEFF) {
      v4 = result;
      nndetailImagePng_png_free_data_plt();
      result = nndetailImagePng_png_malloc_warn_plt(v4, 512);
      *(_QWORD*)(a2 + 256) = result;
      if (result != 0) {
        *(_DWORD*)(a2 + 300) |= 8u;
        if (*(_WORD*)(a2 + 32) != 0) {
          v6 = 0;
          do {
            v7 = 2 * v6++;
            *(_WORD*)(*(_QWORD*)(a2 + 256) + v7) = *(_WORD*)(a3 + v7);
          } while (v6 < *(unsigned __int16*)(a2 + 32));
        }
        *(_DWORD*)(a2 + 8) |= 0x40u;
      }
      else {
        return nndetailImagePng_png_warning_plt(
            v4, "Insufficient memory for hIST chunk data");
      }
    }
    else {
      return nndetailImagePng_png_warning_plt(
          result, "Invalid palette size, hIST allocation skipped");
    }
  }
  return result;
}

#pragma GCC visibility pop
