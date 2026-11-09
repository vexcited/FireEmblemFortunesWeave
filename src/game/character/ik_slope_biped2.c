#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d2b5f0(_QWORD, double);
__int64 strlen(_QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
extern __int64 (*eft_ClampCurve_ptr)();
bool IKSlopeBiped2_112c3b0(_BOOL8 result, double a2);

bool IKSlopeBiped2_112c3b0(_BOOL8 result, double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;

  if (result != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 72) + 96LL);
    result = false;
    if (v2 != 0) {
      v3 = GameRoutine_d2b5f0(*(_QWORD*)(v2 + 32) + 72LL, a2);
      if ((v3 & 0x100000000LL) != 0) {
        v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 72LL) +
                        104LL * (int)v3);
        if (v4 != 0) {
          v5 = *(_QWORD*)(v4 + 16);
          if (v5 == 0) {
            return true;
          }
          if (*(__int64 (**)())(v5 + 16) != eft_ClampCurve_ptr) {
            return true;
          }
          v6 = v4 + 104;
          v7 = strlen(v4 + 104);
          if (v7 >= 5 && (unsigned int)strncmp(v6 + v7 - 5, "Start", 5) == 0) {
            return true;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
