#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_allocate_exception_plt(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 __cxa_throw_plt(_QWORD, _QWORD, _QWORD);
__int64 free_plt(_QWORD);
__int64 std___1_ios_base_failure_failure_plt(_QWORD, _QWORD, _QWORD);
__int64 std___1_locale_Destroy_locale_plt(_QWORD);
extern _UNKNOWN SdkData_105ffa0;
extern _UNKNOWN* SdkData_ea9430;
extern __int64 SdkData_e89418;
extern __int64 SdkData_e89428;
extern __int64 SdkData_e89430;
void __attribute__((noreturn)) SdkRoutine_7cd620();
void std___1_ios_base_Destroy_ios_base_7e87c0(void* this_);
void __attribute__((noreturn)) ios_7e886c();
void __attribute__((noreturn)) ios_7e88e0(__int64 a1);

void std___1_ios_base_Destroy_ios_base_7e87c0(void* this_)
{
  char* v1;
  __int64 v2;
  __int64 v4;

  *(_QWORD*)this_ = SdkData_e89428 + 16;
  v1 = (char*)this_ + 48;
  if (*((_QWORD*)this_ + 6) != 0) {
    v2 = *((_QWORD*)this_ + 9);
    if (v2 != 0) {
      v4 = v2 - 1;
      do {
        (*(void (**)(_QWORD, void*, _QWORD))(*((_QWORD*)this_ + 7) + 8 * v4))(
            0, this_, *(unsigned int*)(*((_QWORD*)this_ + 8) + 4 * v4));
        --v4;
      } while (v4 != -1);
    }
    std___1_locale_Destroy_locale_plt(v1);
    free_plt(*((_QWORD*)this_ + 7));
    free_plt(*((_QWORD*)this_ + 8));
    free_plt(*((_QWORD*)this_ + 11));
    free_plt(*((_QWORD*)this_ + 14));
  }
}

void __attribute__((noreturn)) ios_7e886c() { SdkRoutine_7cd620(); }

void __attribute__((noreturn)) ios_7e88e0(__int64 a1)
{
  __int64 v2;
  _QWORD v3[2];

  v2 = __cxa_allocate_exception_plt(32);
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_105ffa0,
                            memory_order_acquire) &
       1) == 0) {
    goto LABEL_3;
  }
  while (1) {
    v3[0] = 1;
    v3[1] = &SdkData_ea9430;
    std___1_ios_base_failure_failure_plt(v2, a1, v3);
    __cxa_throw_plt(v2, SdkData_e89430, SdkData_e89418);
  LABEL_3:
    if ((unsigned int)__cxa_guard_acquire_plt(&SdkData_105ffa0) != 0) {
      __cxa_guard_release_plt(&SdkData_105ffa0);
    }
  }
}

#pragma GCC visibility pop
