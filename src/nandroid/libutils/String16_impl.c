#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 abort_plt(void);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_SharedBuffer_acquire_plt(_QWORD);
__int64 nandroid_SharedBuffer_alloc_plt(_QWORD);
__int64 nandroid_utf8_to_utf16_length_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_utf8_to_utf16_plt(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_f4fd40;
extern __int64 SdkData_f4fd38;
__int64 String16_57b0c0(__int64 a1, unsigned __int64 a2);
__int64 String16_57b200(__int64 a1, __int64 a2);

__int64 String16_57b0c0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  if (a2 >= 0x7FFFFFFFFFFFFFFFLL) {
    abort_plt();
  LABEL_7:
    if ((unsigned int)__cxa_guard_acquire_plt(&SdkData_f4fd40) != 0) {
      v8 = nandroid_SharedBuffer_alloc_plt(2);
      *(_WORD*)(v8 + 24) = 0;
      SdkData_f4fd38 = v8;
      __cxa_guard_release_plt(&SdkData_f4fd40);
    }
    goto LABEL_5;
  }
  v2 = 2 * a2;
  v5 = nandroid_SharedBuffer_alloc_plt(2 * a2 + 2);
  if (v5 != 0) {
    v6 = v5 + 24;
    memcpy_plt(v5 + 24, a1, v2);
    *(_WORD*)(v6 + 2 * a2) = 0;
    return v6;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4fd40,
                            memory_order_acquire) &
       1) == 0) {
    goto LABEL_7;
  }
LABEL_5:
  nandroid_SharedBuffer_acquire_plt(SdkData_f4fd38);
  return SdkData_f4fd38 + 24;
}

__int64 String16_57b200(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;

  if (a2 != 0 &&
      ((v4 = nandroid_utf8_to_utf16_length_plt(a1, a2, 0)) &
       0x8000000000000000LL) == 0 &&
      (v5 = v4 + 1,
       (v6 = nandroid_SharedBuffer_alloc_plt(2 * (v4 + 1))) != 0)) {
    v7 = v6 + 24;
    nandroid_utf8_to_utf16_plt(a1, a2, v6 + 24, v5);
    return v7;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4fd40,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&SdkData_f4fd40) != 0) {
      v9 = nandroid_SharedBuffer_alloc_plt(2);
      *(_WORD*)(v9 + 24) = 0;
      SdkData_f4fd38 = v9;
      __cxa_guard_release_plt(&SdkData_f4fd40);
    }
    nandroid_SharedBuffer_acquire_plt(SdkData_f4fd38);
    return SdkData_f4fd38 + 24;
  }
}

#pragma GCC visibility pop
