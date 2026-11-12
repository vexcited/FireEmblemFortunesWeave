#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_430(_QWORD, _QWORD);
void __attribute__((noreturn)) NgxRoutine_27cd0(const char*);
__int64 nvidia_dlss_rel_source_common_33380(__int64* a1);
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();

__int64 nvidia_dlss_rel_source_common_33380(__int64* a1)
{
  _QWORD* v1;
  __int64 result;
  _QWORD* v4;

  v1 = (_QWORD*)a1[2];
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if ((v1[2] & 1) != 0) {
        NgxRoutine_430(v1[4], v1[2] & 0xFFFFFFFFFFFFFFFELL);
      }
      NgxRoutine_430(v1, 48);
      v1 = v4;
    } while (v4 != nullptr);
  }
  result = *a1;
  *a1 = 0;
  if (result != 0) {
    return NgxRoutine_430(result, 8 * a1[1]);
  }
  return result;
}

void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410()
{
  NgxRoutine_27cd0("vector");
}

#pragma GCC visibility pop
