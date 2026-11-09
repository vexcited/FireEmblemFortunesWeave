#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_128ce70(_QWORD);
__int64 GameRoutine_128df90(_QWORD, _QWORD);
__int64 GameRoutine_128e230(_QWORD, _QWORD);
__int64 AIInterferenceSimulator_Destructor(__int64 a1, __int64 a2);

__int64 AIInterferenceSimulator_Destructor(__int64 a1, __int64 a2)
{
  GameRoutine_128df90(a1, a2);
  *(_DWORD*)(a1 + 15788) = *(__int16*)(*(_QWORD*)(a2 + 40) + 490LL);
  GameRoutine_128e230(a1, a2);
  return GameRoutine_128ce70(a1);
}

#pragma GCC visibility pop
