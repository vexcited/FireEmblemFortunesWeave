#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Impl_13261c0(_QWORD);
extern __int64 GameData_21c96e8;
__int64 game_GmapFixedTalkData_IsCondition_lambda0_Invoke(__int64 result,
                                                          _QWORD* a2);
__int64 game_GmapFixedTalkData_IsCondition_lambda1_Invoke(__int64 a1,
                                                          _QWORD* a2);

__int64 game_GmapFixedTalkData_IsCondition_lambda0_Invoke(__int64 result,
                                                          _QWORD* a2)
{
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *(_BYTE**)(result + 8);
  if ((*v2 & 1) == 0 && *a2 != 0) {
    v3 = *(_QWORD*)(GameData_21c96e8 + 8);
    v4 = *(_QWORD*)(v3 + 8);
    v5 = *(_QWORD*)(v3 + 16);
    while (v4 != v5) {
      if (**(_QWORD**)v4 == *a2) {
        v6 = *(_QWORD*)(*(_QWORD*)v4 + 96LL);
        if (v6 != 0 && *(_BYTE*)(v6 + 32) == 1) {
          *v2 = 1;
          return result;
        }
      }
      v4 += 8;
    }
  }
  return result;
}

__int64 game_GmapFixedTalkData_IsCondition_lambda1_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 result;

  result = Impl_13261c0(*a2);
  if ((unsigned __int8)result == 5) {
    **(_BYTE**)(a1 + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
