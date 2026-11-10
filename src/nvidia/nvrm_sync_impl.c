#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsRealloc_plt(_QWORD, _QWORD);
__int64 NvOsSnprintf_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xClose_plt(_QWORD);
__int64 nvrm_sync_60b500_alt1(_QWORD, _QWORD) __asm__("nvrm_sync_60b500");
extern __int64 (*SdkData_e898b0[2])();
extern __int64 SdkData_103f230;
__int64 nvrm_sync_60b460(__int64 a1, __int64 a2);
__int64 nvrm_sync_60b500(__int64 a1, __int64 a2);
__int64 nvrm_sync_60b7d0(__int64 a1, _BYTE* a2, __int64 a3);
__int64 nvrm_sync_60be10();

__int64 nvrm_sync_60b460(__int64 a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;

  v4 = *(_DWORD*)(a2 + 12) + *(_DWORD*)(a1 + 12);
  v5 = NvOsAlloc_plt(24LL * v4 + 40);
  v6 = v5;
  if (v5 != 0) {
    *(_DWORD*)(v5 + 16) = v4;
    *(_QWORD*)(v5 + 24) = 0;
    *(_DWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = 0;
    *(_QWORD*)(v5 + 8) = 1;
    *(_BYTE*)(v5 + 20) = 1;
    nvrm_sync_60b500_alt1(v5, a1);
    nvrm_sync_60b500_alt1(v6, a2);
  }
  return v6;
}

__int64 nvrm_sync_60b500(__int64 a1, __int64 a2)
{
  int v2;
  unsigned int v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 (*v14)();
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  v2 = *(_DWORD*)(a2 + 12);
  v3 = *(_DWORD*)(a1 + 16);
  v4 = v2 + *(_DWORD*)(a1 + 12);
  v5 = v4 - v3;
  if (v4 > v3) {
    if (v4 > *(_DWORD*)(a1 + 32) + v3) {
      *(_DWORD*)(a1 + 32) = v5;
      v6 = a1;
      v7 = *(_QWORD*)(a1 + 24);
      v8 = a2;
      if (v7 != 0) {
        v9 = NvOsRealloc_plt(v7, 24LL * v5);
        a1 = v6;
        *(_QWORD*)(v6 + 24) = v9;
        a2 = v8;
        if (v9 == 0) {
          return 6;
        }
      }
      else {
        v11 = NvOsAlloc_plt(24LL * v5);
        a1 = v6;
        *(_QWORD*)(v6 + 24) = v11;
        a2 = v8;
      }
    }
    v2 = *(_DWORD*)(a2 + 12);
  }
  if (v2 != 0) {
    v12 = 0;
    v13 = 0;
    v14 = SdkData_e898b0[0];
    do {
      v15 = *(unsigned int*)(a2 + 16);
      v16 = *(_QWORD*)(a2 + 24);
      *(_QWORD*)a1 = v14;
      v17 = v16 - 24 * v15;
      v18 = v13 >= v15;
      v19 = *(_DWORD*)(a1 + 12);
      v20 = *(_DWORD*)(a1 + 16);
      ++v13;
      if (!v18) {
        v17 = a2 + 36;
      }
      v21 = v19 + 1;
      v18 = v19 >= v20;
      v22 = v19 - v20;
      v23 = (_QWORD*)(a1 + 36 + 24LL * v19);
      *(_DWORD*)(a1 + 8) = 3;
      *(_DWORD*)(a1 + 12) = v21;
      v24 = *(_QWORD*)(v17 + v12);
      v12 += 24;
      v25 = *(_QWORD*)(a1 + 24) + 24LL * v22;
      if (v18) {
        v23 = (_QWORD*)v25;
      }
      *v23 = v24;
    } while (v13 < *(unsigned int*)(a2 + 12));
  }
  return 0;
}

__int64 nvrm_sync_60b7d0(__int64 a1, _BYTE* a2, __int64 a3)
{
  __int64 result;

  result = NvOsSnprintf_plt(a2, a3, "<syncpoint-based sync>");
  if ((result & 0x80000000) != 0) {
    *a2 = 0;
  }
  return result;
}

__int64 nvrm_sync_60be10()
{
  __int64 result;

  result = SdkData_103f230;
  if (SdkData_103f230 != 0) {
    result = NvRmHost1xClose_plt(SdkData_103f230);
    SdkData_103f230 = 0;
  }
  return result;
}

#pragma GCC visibility pop
