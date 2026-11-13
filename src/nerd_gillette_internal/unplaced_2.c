#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nn_irsensor_7424e0(__int64, __int64, __int64*, __int64, __int64);
__int64 nn_irsensor_GetTeraPluginProcessorStates_plt(_QWORD);
__int64 nerd_gillette_internal_742180(__int64 a1, int* a2, int a3);

__int64 nerd_gillette_internal_742180(__int64 a1, int* a2, int a3)
{
  __int64* v5;
  __int64 result;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    char gap24_[4];
    int v13;
  } v12_;
  __int64 v14;

  v5 = (__int64*)(a1 + 4960 * a3 - 320 * a3);
  result = nn_irsensor_GetTeraPluginProcessorStates_plt(v5);
  if ((_DWORD)result == 0) {
    v7 = *a2;
    v8 = *a2 - 1;
    if (*a2 < 1) {
      return 0;
    }
    if (v7 == 1) {
      v8 = 0;
    LABEL_6:
      memcpy_plt((__int64)v12_.v12, (__int64)&v5[40 * v8], 0x140u);
      v14 = 0;
      result = nn_irsensor_7424e0(a1 + 4960LL * v8, 0, v12_.v12, (__int64)&v14,
                                  (__int64)&v12_.v13);
      if ((_DWORD)result == 564429) {
        result = 0;
        *a2 = 0;
      }
    }
    else {
      v9 = a1;
      v10 = v5;
      v11 = (unsigned int)(v7 - 1);
      while (1) {
        while (1) {
          v12_.v12[0] = 0;
          result = nn_irsensor_7424e0(v9, 0, v10, (__int64)v12_.v12,
                                      (__int64)v10 + 20);
          if ((_DWORD)result != 0) {
            break;
          }
          --v11;
          v10 += 40;
          v9 += 4960;
          if (v11 == 0) {
            goto LABEL_6;
          }
        }
        if ((_DWORD)result != 564429) {
          break;
        }
        *a2 = 0;
        --v11;
        v10 += 40;
        v9 += 4960;
        if (v11 == 0) {
          goto LABEL_6;
        }
      }
    }
    if ((_DWORD)result == 0) {
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
