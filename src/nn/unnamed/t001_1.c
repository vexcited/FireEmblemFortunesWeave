#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_1042158)(__int64);
extern _UNKNOWN* SdkData_e89e50;
__int64 SdkRoutine_8594a0(void);
__int64 SdkRoutine_86a640(_QWORD);
__int64 SdkRoutine_86ad50(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86ade0(_QWORD);
__int64 SdkRoutine_876680(void);
__int64 SdkRoutine_8766d0(void);
__int64 SdkRoutine_876700(void);

__int64 SdkHr_66f7e0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v3;
  __int64 result;
  __int64 v5;

  v1 = *(unsigned int*)(a1 + 216);
  if ((v1 & 0x80000000) == 0) {
    if ((unsigned int)v1 <= 0xFF) {
      *(_DWORD*)((char*)SdkData_e89e50 + ((v1 >> 3) & 0x1FFFFFFC)) &=
          ~(1 << v1);
    }
    *(_DWORD*)(a1 + 216) = -1;
  }
  v3 = *(_QWORD*)(a1 + 272);
  if (v3 != 0) {
    SdkRoutine_86ade0(v3);
    *(_QWORD*)(a1 + 272) = 0;
  }
  if (*(_DWORD*)(a1 + 256) != -1) {
    SdkRoutine_8594a0();
    *(_DWORD*)(a1 + 256) = -1;
  }
  if (*(_QWORD*)(a1 + 8) != 0) {
    SdkRoutine_876680();
    *(_QWORD*)(a1 + 8) = 0;
  }
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 208) + 356LL) & 0x14) != 0) {
    if (*(_QWORD*)(a1 + 144) != 0) {
      SdkRoutine_876700();
      *(_QWORD*)(a1 + 144) = 0;
    }
  }
  else if (*(_QWORD*)(a1 + 64) != 0) {
    SdkRoutine_8766d0();
    *(_QWORD*)(a1 + 64) = 0;
  }
  result = *(unsigned int*)(a1 + 240);
  if ((_DWORD)result != 0) {
    v5 = *(_QWORD*)(a1 + 248);
    if (v5 != 0) {
      SdkRoutine_86ad50(result, v5, 4096);
      result = *(unsigned int*)(a1 + 240);
    }
    *(_QWORD*)(a1 + 248) = 0;
    result = SdkRoutine_86a640(result);
    *(_DWORD*)(a1 + 240) = 0;
  }
  if (*(_BYTE*)(a1 + 200) == 1) {
    result = *(_QWORD*)(a1 + 192);
    if (result != 0) {
      result = SdkData_1042158(result);
      *(_QWORD*)(a1 + 192) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
