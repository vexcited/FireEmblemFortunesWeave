#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212cf88[4];
extern __int64 GameData_21c99a8;
__int64
game_facility_anonymous_ProcStableSeq_ReadyInstructionMind_closure_Invoke(
    __int64 result, int* a2);
__int64

game_facility_anonymous_ProcStableSeq_ReadyInstructionMind_closure_Invoke(
    __int64 result, int* a2)
{
  _DWORD* v2;
  __int64 v3;

  v2 = *(_DWORD**)(result + 8);
  if ((*v2 & 0x80000000) != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL);
    if (*(_BYTE*)(v3 + ((__int64)*a2 << 6)) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                             8LL * *(unsigned __int8*)(v3 +
                                                       ((__int64)*a2 << 6))) +
                  108LL) == 0) {
      *v2 = *a2;
    }
  }
  return result;
}

#pragma GCC visibility pop
