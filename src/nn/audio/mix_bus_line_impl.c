#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_audio_util_MixBusJunction_GetSignalBuffer_plt(_QWORD, _QWORD);
__int64 nn_audio_util_MixSignal(_QWORD, _QWORD, _QWORD, _QWORD, long double,
                                long double);
float nn_audio_util_MixBusJunction_GetWeight_plt(_QWORD);
__int64 nn_audio_util_MixBusLine_MixInputJunction(__int64 a1, float a2,
                                                  float a3, __int64 a4, int a5,
                                                  __int64 a6);

__int64 nn_audio_util_MixBusLine_MixInputJunction(__int64 a1, float a2,
                                                  float a3, __int64 a4, int a5,
                                                  __int64 a6)
{
  int v6;
  __int64 result;
  float v14;
  long double v15;
  long double v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v6 = *(_DWORD*)(a1 + 44);
  v21 = 0;
  v22 = 0;
  v20 = 0;
  *(_DWORD*)(a1 + 44) = v6 + 1;
  result = nn_audio_util_MixBusJunction_GetSignalBuffer_plt(a6, &v20);
  if (v20 != 0 && SHIDWORD(v21) >= a5) {
    result = *(_QWORD*)(a1 + 24);
    if (result != 0) {
      v18 = 0;
      v19 = 0;
      v17 = 0;
      result = nn_audio_util_MixBusJunction_GetSignalBuffer_plt(result, &v17);
      if (v17 != 0 && SHIDWORD(v18) >= a5) {
        v14 = a2 * nn_audio_util_MixBusJunction_GetWeight_plt(a6);
        *(float*)&v16 = a3 * nn_audio_util_MixBusJunction_GetWeight_plt(a6);
        if (v14 <= 128.0) {
          *(float*)&v15 = v14;
        }
        else {
          *(float*)&v15 = 128.0;
        }
        if (*(float*)&v16 > 128.0) {
          *(float*)&v16 = 128.0;
        }
        if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
          return nn_audio_util_MixSignal(&v17, &v20, (unsigned int)a5, 0, v15,
                                         v16);
        }
        else {
          result = nn_audio_util_MixSignal(&v17, &v20, (unsigned int)a5, 1, v15,
                                           v16);
          *(_BYTE*)(a1 + 40) = 1;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
