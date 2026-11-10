#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvRmMemHandleAllocNativeImage_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemHandleFree_plt(_QWORD);
__int64 nn_gpu_sdk_QueryNativeImage_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*SdkData_1045108)(_QWORD*, __int64);
extern __int64 (*SdkData_1045110)(_QWORD*);
extern __int64 (*SdkData_1045120)(_QWORD*, __int64);
extern __int64 (*SdkData_1045128)(__int64, _QWORD*);
extern __int64 (*SdkData_1045148)(__int64, __int64);
extern __int64 (*SdkData_1045150)(__int64, __int64);
extern __int64 (*SdkData_1045158)(__int64, _QWORD, _QWORD);
extern __int64 (*SdkData_1045160)(__int64, _QWORD);
extern __int64 (*SdkData_1045168)(__int64, _QWORD, __int64, _QWORD, __int64);
__int64 nvn_6b0240(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5);
__int64 nvn_6b03c0(__int64 a1, unsigned int a2, __int64 a3);

__int64 nvn_6b0240(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 result;
  __int64 v10;
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
  unsigned int v27;
  int v28;
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
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v47[8];

  v45 = 0;
  v46 = 0;
  v43 = 0;
  v44 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 0;
  v40 = 0;
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v30 = 0;
  v28 = 0;
  result = nn_gpu_sdk_QueryNativeImage_plt(&v46, &v45, &v29, &v28, a3);
  if ((_DWORD)result == 0) {
    v27 = 0;
    if ((unsigned int)NvRmMemHandleAllocNativeImage_plt(0, a3, v46, &v27) !=
        0) {
      return 98547;
    }
    v10 = v27;
    memset(v47, 0, sizeof(v47));
    SdkData_1045108(v47, a2);
    SdkData_1045110(v47);
    SdkData_1045120(v47, v10);
    if ((unsigned __int8)SdkData_1045128(a1, v47) == 0) {
      NvRmMemHandleFree_plt(v27);
      return 98547;
    }
    v11 = v41;
    v12 = v42;
    v13 = v43;
    v14 = v44;
    result = 0;
    *(_QWORD*)(a1 + 256) = a2;
    *(_DWORD*)(a1 + 264) = a5;
    *(_QWORD*)(a1 + 384) = v12;
    *(_QWORD*)(a1 + 392) = v13;
    v15 = v37;
    v16 = v38;
    v17 = v39;
    v18 = v40;
    *(_QWORD*)(a1 + 400) = v14;
    *(_QWORD*)(a1 + 352) = v16;
    *(_QWORD*)(a1 + 360) = v17;
    *(_QWORD*)(a1 + 368) = v18;
    *(_QWORD*)(a1 + 376) = v11;
    v19 = v33;
    v20 = v35;
    v21 = v36;
    *(_QWORD*)(a1 + 320) = v34;
    *(_QWORD*)(a1 + 328) = v20;
    v22 = v45;
    *(_QWORD*)(a1 + 336) = v21;
    *(_QWORD*)(a1 + 344) = v15;
    v23 = v29;
    v24 = v30;
    *(_QWORD*)(a1 + 272) = v22;
    *(_QWORD*)(a1 + 280) = v23;
    v25 = v31;
    v26 = v32;
    *(_QWORD*)(a1 + 288) = v24;
    *(_QWORD*)(a1 + 296) = v25;
    *(_QWORD*)(a1 + 304) = v26;
    *(_QWORD*)(a1 + 312) = v19;
    LODWORD(v19) = v27;
    *(_DWORD*)(a1 + 408) = v28;
    *(_DWORD*)(a1 + 412) = v19;
  }
  return result;
}

__int64 nvn_6b03c0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  int v8;
  int v10;

  v3 = 65779;
  if (*(_BYTE*)a3 == 1 && (unsigned __int8)*(_QWORD*)(a3 + 32) == 1) {
    v4 = HIDWORD(*(_QWORD*)(a3 + 32));
    if ((int)v4 > 3) {
      if ((_DWORD)v4 == 4) {
        if (a2 != 61) {
          return v3;
        }
      }
      else if ((_DWORD)v4 != 5 || a2 != 41) {
        return v3;
      }
      v5 = 2;
      v6 = 4;
      goto LABEL_18;
    }
    if ((_DWORD)v4 == 1) {
      v5 = 2;
      v6 = 4;
      if (a2 - 55 <= 0x36 &&
              ((1LL << ((unsigned __int8)a2 - 55)) & 0x40000000000003LL) != 0 ||
          a2 == 37) {
        goto LABEL_18;
      }
    }
    else if ((_DWORD)v4 == 2 && a2 - 153 < 4) {
      v5 = 4;
      v6 = 2;
    LABEL_18:
      v8 = (unsigned __int16)*(_DWORD*)(a3 + 8);
      v10 = HIWORD(*(_DWORD*)(a3 + 8));
      SdkData_1045148(a1, 5);
      SdkData_1045150(a1, 1);
      SdkData_1045158(a1, (unsigned int)(v8 + 1), (unsigned int)(v10 + 1));
      SdkData_1045160(a1, a2);
      SdkData_1045168(a1, v5, 3, v6, 5);
      return 0;
    }
  }
  return v3;
}

#pragma GCC visibility pop
