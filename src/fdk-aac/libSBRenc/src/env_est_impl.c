#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_CalcInvLdData_plt(_QWORD);
__int64 nn_codec_CalcLdData_plt(_QWORD);
__int64 nn_codec_coupleNoiseFloor(__int64 a1, __int64 a2);

__int64 nn_codec_coupleNoiseFloor(__int64 a1, __int64 a2)
{
  __int64 i;
  unsigned int v5;
  int v6;
  __int64 result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  for (i = 0; i != 40; i += 4) {
    v9 = *(_DWORD*)(a2 + i);
    v10 = *(_DWORD*)(a1 + i);
    v11 = nn_codec_CalcInvLdData_plt((unsigned int)(201326592 - v9));
    if (v9 >= 201326593) {
      v12 = v11;
    }
    else {
      v12 = v11 << 24;
    }
    v13 = nn_codec_CalcInvLdData_plt(
        (unsigned int)(201326592 - *(_DWORD*)(a1 + i)));
    if (v10 >= 201326593) {
      v14 = v12 >> 1;
      if (v9 < 201326593) {
        v5 = v13;
        *(_DWORD*)(a1 + i) = -33554432 - nn_codec_CalcLdData_plt(
                                             (unsigned int)(v14 + (v13 >> 8)));
        v6 = nn_codec_CalcLdData_plt(v5);
        result = nn_codec_CalcLdData_plt((unsigned int)v12);
        v8 = v6 - result - 234881024;
        goto LABEL_3;
      }
      v15 = v13;
      v16 =
          201326592 - nn_codec_CalcLdData_plt((unsigned int)(v14 + (v13 >> 1)));
      goto LABEL_12;
    }
    v15 = v13 << 24;
    v17 = v13 << 24 >> 1;
    if (v9 <= 201326592) {
      v16 =
          -33554432 - nn_codec_CalcLdData_plt((unsigned int)(v17 + (v12 >> 1)));
    LABEL_12:
      *(_DWORD*)(a1 + i) = v16;
      v18 = nn_codec_CalcLdData_plt(v15);
      result = nn_codec_CalcLdData_plt((unsigned int)v12);
      v8 = v18 - result;
      goto LABEL_3;
    }
    *(_DWORD*)(a1 + i) =
        -33554432 - nn_codec_CalcLdData_plt((unsigned int)(v17 + (v12 >> 8)));
    v19 = nn_codec_CalcLdData_plt(v15);
    result = nn_codec_CalcLdData_plt((unsigned int)v12);
    v8 = v19 - result + 234881024;
  LABEL_3:
    *(_DWORD*)(a2 + i) = v8;
  }
  return result;
}

#pragma GCC visibility pop
