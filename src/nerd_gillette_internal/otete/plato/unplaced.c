#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_87ad60(_QWORD, _QWORD);
__int64 SdkRoutine_87ad70(_QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nerd_gillette_internal_otete_plato_DecodePacketROK(
    unsigned __int8* a1, __int64 a2, __int64 a3, unsigned __int64* a4);

__int64 nerd_gillette_internal_otete_plato_DecodePacketROK(unsigned __int8* a1,
                                                           __int64 a2,
                                                           __int64 a3,
                                                           unsigned __int64* a4)
{
  unsigned __int64 v8;
  __int64 v9;
  char v10;
  char v11;
  __int64 v12;
  unsigned __int8* v13;
  __int64 v14;
  bool v16;
  _QWORD* v18;
  _QWORD v19[3];

  memset_plt((void*)a1, nullptr, 764, (unsigned __int64)a4);
  v8 = *a4;
  v9 = 8 * a3;
  v19[2] = 8 * a3;
  if (v8 < 8 * a3) {
    v9 = v8;
  }
  v19[0] = a2;
  v19[1] = v9;
  v18 = v19;
  v10 = SdkRoutine_87ad60(a1, &v18);
  v11 = 0;
  if ((v10 & 1) != 0) {
    if (a1[3] >= 0x2Fu) {
      v12 = 47;
    }
    else {
      v12 = a1[3];
    }
    if (a1[3] != 0) {
      v13 = a1 + 12;
      v14 = v12 - 1;
      do {
        v11 = SdkRoutine_87ad70(v13, &v18);
        v16 = v14-- != 0;
        if ((v11 & 1) == 0) {
          break;
        }
        v13 += 16;
      } while (v16);
    }
    else {
      v11 = 1;
    }
  }
  return v11 & 1;
}

#pragma GCC visibility pop
