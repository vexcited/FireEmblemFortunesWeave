#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 free_plt(_QWORD);
__int64 malloc_plt(_QWORD);
__int64 nncodecLibopus_opus_decoder_get_size_plt(_QWORD);
__int64 nncodecLibopus_opus_multistream_decoder_init_plt(_QWORD, _QWORD, _QWORD,
                                                         _QWORD, _QWORD,
                                                         _QWORD);
__int64 nncodecLibopus_opus_multistream_decoder_create(unsigned int a1,
                                                       unsigned int a2, int a3,
                                                       unsigned int a4,
                                                       __int64 a5, _DWORD* a6);

__int64 nncodecLibopus_opus_multistream_decoder_create(unsigned int a1,
                                                       unsigned int a2, int a3,
                                                       unsigned int a4,
                                                       __int64 a5, _DWORD* a6)
{
  unsigned int v8;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;

  if (a2 - 256 < 0xFFFFFF01 || (a4 & 0x80000000) != 0 || a3 < 1 ||
      (v8 = a3 - a4, a3 < (int)a4) || a3 > (int)(255 - a4)) {
    if (a6 != nullptr) {
      *a6 = -1;
      return 0;
    }
  }
  else {
    v14 = nncodecLibopus_opus_decoder_get_size_plt(2);
    v15 = nncodecLibopus_opus_decoder_get_size_plt(1);
    v16 = malloc_plt((int)(((v15 + 7) & 0xFFFFFFF8) * v8 +
                           ((v14 + 7) & 0xFFFFFFF8) * a4 + 272));
    if (v16 != 0) {
      v17 = v16;
      v18 = nncodecLibopus_opus_multistream_decoder_init_plt(
          v16, a1, a2, (unsigned int)a3, a4, a5);
      if (a6 != nullptr) {
        *a6 = v18;
      }
      if (v18 == 0) {
        return v17;
      }
      free_plt(v17);
    }
    else if (a6 != nullptr) {
      *a6 = -7;
      return 0;
    }
  }
  return 0;
}

#pragma GCC visibility pop
