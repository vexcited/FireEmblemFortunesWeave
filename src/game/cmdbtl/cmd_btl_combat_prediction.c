#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c880[5];
bool CmdBtlCombatPrediction_IsSkillInRange(__int64 a1, _DWORD* a2);

bool CmdBtlCombatPrediction_IsSkillInRange(__int64 a1, _DWORD* a2)
{
  return (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                               8LL * (*a2 & 0xFFF)) +
                    248LL) &
          0x100) != 0;
}

#pragma GCC visibility pop
