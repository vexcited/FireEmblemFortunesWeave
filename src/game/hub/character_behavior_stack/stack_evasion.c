#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d523c0(_QWORD);
__int64 StackEvasion_DeletingDestructor(__int64 result);
__int64 StackEvasion_Unknown2(__int64 result);
bool StackEvasion_Unknown4(__int64 a1);

__int64 StackEvasion_DeletingDestructor(__int64 result)
{
  __int64 v1;
  float v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 16);
  v2 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 16) + 24LL) + 8LL) +
                 228LL) +
       *(float*)(result + 28);
  *(float*)(result + 28) = v2;
  if (v2 > 1.0) {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 16) + 24LL) + 24LL);
    *(_BYTE*)(v3 + 25) = 0;
    *(_QWORD*)(v3 + 32) = 0;
    *(_QWORD*)(v3 + 37) = 0;
    *(_BYTE*)(v3 + 48) = 0;
    *(_BYTE*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    *(_BYTE*)(v3 + 96) = 1;
    *(_DWORD*)(v3 + 32) = 1078530000;
    *(_BYTE*)(v3 + 37) = 1;
    return GameRoutine_d523c0(*(_QWORD*)(*(_QWORD*)(v3 + 16) + 488LL));
  }
  return result;
}

__int64 StackEvasion_Unknown2(__int64 result)
{
  __int64 v1;

  v1 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 16) + 16LL) + 24LL) +
                 24LL);
  if (*(_BYTE*)(v1 + 96) == 1) {
    *(_BYTE*)(v1 + 96) = 0;
  }
  *(_BYTE*)(v1 + 25) = 0;
  *(_BYTE*)(*(_QWORD*)(result + 16) + 8LL) = 0;
  return result;
}

bool StackEvasion_Unknown4(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL) + 24LL);
  return *(_BYTE*)(v1 + 272) != 1 ||
         *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 344LL) + 352LL) !=
             *(_QWORD*)(v1 + 264);
}

#pragma GCC visibility pop
