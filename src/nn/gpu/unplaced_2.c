#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_gpu_sdk_GetGpuMemoryHandleMax_plt(void);
__int64 nn_gpu_sdk_GetGpuMemoryHandleMin_plt(__int64);
__int64 nn_gpu_sdk_QueryGpuMemoryInfo_plt(__int64, unsigned int, unsigned int,
                                          __int64, __int64);
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 nn_gpu_46d6e0(void* this_);

__int64 nn_gpu_46d6e0(void* this_)
{
  __int64 v1;
  unsigned int v2;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  struct {
    _QWORD v10[2];
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    _QWORD v41[250];
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v10_;

  v1 = memset_plt((__int64)v10_.v41, 0, 0x800u);
  memset(v10_.v41, 0, 40);
  memset(&v10_.v41[8], 0, 40);
  memset(&v10_.v41[16], 0, 40);
  memset(&v10_.v41[24], 0, 40);
  memset(&v10_.v41[32], 0, 40);
  memset(&v10_.v41[40], 0, 40);
  memset(&v10_.v41[48], 0, 40);
  memset(&v10_.v41[56], 0, 40);
  memset(&v10_.v41[64], 0, 40);
  memset(&v10_.v41[72], 0, 40);
  memset(&v10_.v41[80], 0, 40);
  memset(&v10_.v41[88], 0, 40);
  memset(&v10_.v41[96], 0, 40);
  memset(&v10_.v41[104], 0, 40);
  memset(&v10_.v41[112], 0, 40);
  memset(&v10_.v41[120], 0, 40);
  memset(&v10_.v41[128], 0, 40);
  memset(&v10_.v41[136], 0, 40);
  memset(&v10_.v41[144], 0, 40);
  memset(&v10_.v41[152], 0, 40);
  memset(&v10_.v41[160], 0, 40);
  memset(&v10_.v41[168], 0, 40);
  memset(&v10_.v41[176], 0, 40);
  memset(&v10_.v41[184], 0, 40);
  memset(&v10_.v41[192], 0, 40);
  memset(&v10_.v41[200], 0, 40);
  memset(&v10_.v41[208], 0, 40);
  memset(&v10_.v41[216], 0, 40);
  memset(&v10_.v41[224], 0, 40);
  memset(&v10_.v41[232], 0, 40);
  memset(&v10_.v41[240], 0, 40);
  v10_.v44 = 0;
  v10_.v43 = 0;
  v10_.v42 = 0;
  v10_.v41[249] = 0;
  v10_.v41[248] = 0;
  v10_.v39 = 0;
  v10_.v40 = 0;
  v10_.v37 = 0;
  v10_.v38 = 0;
  v10_.v35 = 0;
  v10_.v36 = 0;
  v10_.v33 = 0;
  v10_.v34 = 0;
  v10_.v31 = 0;
  v10_.v32 = 0;
  v10_.v29 = 0;
  v10_.v30 = 0;
  v10_.v27 = 0;
  v10_.v28 = 0;
  v10_.v25 = 0;
  v10_.v26 = 0;
  v10_.v23 = 0;
  v10_.v24 = 0;
  v10_.v21 = 0;
  v10_.v22 = 0;
  v10_.v19 = 0;
  v10_.v20 = 0;
  v10_.v17 = 0;
  v10_.v18 = 0;
  v10_.v15 = 0;
  v10_.v16 = 0;
  v10_.v13 = 0;
  v10_.v14 = 0;
  v10_.v11 = 0;
  v10_.v12 = 0;
  v10_.v10[0] = 0;
  v10_.v10[1] = 0;
  v2 = nn_gpu_sdk_GetGpuMemoryHandleMin_plt(v1);
  result = nn_gpu_sdk_GetGpuMemoryHandleMax_plt();
  if (v2 <= (unsigned int)result) {
    v4 = result;
    v9 = 0;
    result = nn_gpu_sdk_QueryGpuMemoryInfo_plt((__int64)&v9, v2, result,
                                               (__int64)v10_.v41, 32);
    if ((_DWORD)result == 0 && v9 != 0) {
      v5 = 0;
      while (1) {
        while (1) {
          v6 = &v10_.v41[8 * v5];
          v10_.v39 = 0;
          v10_.v40 = 0;
          v10_.v37 = 0;
          v10_.v38 = 0;
          v7 = *((unsigned int*)v6 + 4);
          v10_.v35 = 0;
          v10_.v36 = 0;
          v10_.v33 = 0;
          v10_.v34 = 0;
          v10_.v31 = 0;
          v10_.v32 = 0;
          v10_.v29 = 0;
          v10_.v30 = 0;
          v10_.v27 = 0;
          v10_.v28 = 0;
          v10_.v25 = 0;
          v10_.v26 = 0;
          v10_.v23 = 0;
          v10_.v24 = 0;
          v10_.v21 = 0;
          v10_.v22 = 0;
          v10_.v19 = 0;
          v10_.v20 = 0;
          v10_.v17 = 0;
          v10_.v18 = 0;
          v10_.v15 = 0;
          v10_.v16 = 0;
          v10_.v13 = 0;
          v10_.v14 = 0;
          v10_.v11 = 0;
          v10_.v12 = 0;
          v10_.v10[0] = 0;
          v10_.v10[1] = 0;
          result = nn_util_SNPrintf_plt(v10_.v10, 256,
                                        "[hMem=%X] cpu=[%llX-%llX] %s", v7);
          if ((unsigned int)result <= 0xFE) {
            break;
          }
          v8 = v9;
          if (++v5 >= v9) {
            goto LABEL_8;
          }
        }
        result = nn_util_SNPrintf_plt((char*)v10_.v10 + (unsigned int)result,
                                      256LL - (unsigned int)result,
                                      " lib=%d sL=0x%llX uL=(0x%llX,0x%llX)",
                                      *((unsigned __int8*)v6 + 25), v6[5],
                                      v6[6], v6[7]);
        v8 = v9;
        if (++v5 >= v9) {
        LABEL_8:
          if (v8 < 0x20) {
            return result;
          }
          if ((unsigned int)v10_.v42 >= v4) {
            return result;
          }
          v9 = 0;
          result = nn_gpu_sdk_QueryGpuMemoryInfo_plt(
              (__int64)&v9, (int)v10_.v42 + 1, v4, (__int64)v10_.v41, 32);
          if ((_DWORD)result != 0) {
            return result;
          }
          v5 = 0;
          if (v9 == 0) {
            return result;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
