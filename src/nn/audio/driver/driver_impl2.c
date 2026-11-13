#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_driver_detail_GetPhysicalMemoryGroupDescriptor_plt(void);
unsigned __int128
nn_audio_driver_detail_GetPhysicalMemoryGroupDescriptor_plt_pair(void) __asm__(
    "nn_audio_driver_detail_GetPhysicalMemoryGroupDescriptor_plt");
__int64 nn_audio_driver_detail_GetPhysicalMemoryRegionGroupNameImpl(__int64 a1,
                                                                    int a2);

__int64 nn_audio_driver_detail_GetPhysicalMemoryRegionGroupNameImpl(__int64 a1,
                                                                    int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* i;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  _BYTE v13[80];

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = ({
    unsigned __int128 r_ =
        nn_audio_driver_detail_GetPhysicalMemoryGroupDescriptor_plt_pair();
    v5 = COERCE_AS(__typeof__(v5), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v6 = 0;
  if (v5 != 0) {
    for (i = (_DWORD*)(v4 + 64); *i != a2; i += 370) {
      if (v5 == ++v6) {
        return 665;
      }
    }
  }
  if (v6 == v5) {
    return 665;
  }
  v9 = 0;
  v10 = v4 + 1480 * v6;
  while (1) {
    v11 = (_BYTE*)(v10 + v9);
    if (*(_BYTE*)(v10 + v9) == 0) {
      break;
    }
    if (v11[1] == 0) {
      LODWORD(v9) = v9 + 1;
      break;
    }
    if (v11[2] == 0) {
      LODWORD(v9) = v9 + 2;
      break;
    }
    if (v11[3] == 0) {
      LODWORD(v9) = v9 + 3;
      break;
    }
    if (v11[4] == 0) {
      LODWORD(v9) = v9 + 4;
      break;
    }
    if (v11[5] == 0) {
      LODWORD(v9) = v9 + 5;
      break;
    }
    if (v11[6] == 0) {
      LODWORD(v9) = v9 + 6;
      break;
    }
    if (v11[7] == 0) {
      LODWORD(v9) = v9 + 7;
      break;
    }
    v9 += 8;
    if ((_DWORD)v9 == 64) {
      LODWORD(v9) = 64;
      break;
    }
  }
  if ((int)v9 >= 63) {
    v12 = 63;
  }
  else {
    v12 = (unsigned int)v9;
  }
  memcpy_plt(v13, v10, v12),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13[v12] = 0;
  *(_QWORD*)&v13[64] = v13;
  *(_QWORD*)&v13[72] = v12;
  memcpy_plt(a1, v13, v12),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(a1 + v12) = 0;
  *(_QWORD*)(a1 + 64) = a1;
  *(_QWORD*)(a1 + 72) = v12;
  return 0;
}

#pragma GCC visibility pop
