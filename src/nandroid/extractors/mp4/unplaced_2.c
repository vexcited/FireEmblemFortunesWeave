#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(__int64, unsigned __int64);
__int64 SdkRoutine_86ee70(_QWORD, _QWORD);
__int64 SdkRoutine_86ee80(__int64);
extern __int64 SdkData_e888e8;
extern __int64 SdkData_e888f0;
extern void (*SdkData_e888e0[312])();
void std___1_locale_Destroy_locale_plt(__int64);
__int64 nandroid_extractors_mp4_4f0490(_QWORD* a1);

__int64 nandroid_extractors_mp4_4f0490(_QWORD* a1)
{
  void(__attribute__((noreturn)) * v2)();
  __int64 v3;
  __int64 v4;

  v2 = SdkData_e888e0[0];
  {
    v3 = *(_QWORD*)SdkData_e888e0[0];
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 = *(_QWORD*)((char*)SdkData_e888e0[0] +
                    (unsigned __int64)(*(void*(*)[1])0x18LL));
    __asm__ volatile("" ::"r"(v4));
  }
  *a1 = *(_QWORD*)SdkData_e888e0[0];
  *(_QWORD*)((char*)a1 + *(_QWORD*)(v3 - 24)) = v4;
  a1[1] = SdkData_e888f0 + 16;
  if ((a1[9] & 1) != 0) {
    SdkRoutine_857220(a1[11], a1[9] & 0xFFFFFFFFFFFFFFFELL);
  }
  a1[1] = SdkData_e888e8 + 16;
  std___1_locale_Destroy_locale_plt((__int64)(a1 + 2));
  SdkRoutine_86ee70(a1, (char*)v2 + 8);
  return SdkRoutine_86ee80((__int64)(a1 + 14));
}

#pragma GCC visibility pop
