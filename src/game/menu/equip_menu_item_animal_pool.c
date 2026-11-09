#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c8a0;
bool EquipMenuItem_AnimalPool_Unknown58(_QWORD* a1);

bool EquipMenuItem_AnimalPool_Unknown58(_QWORD* a1)
{
  __int64 v1;
  _BYTE* v2;
  __int64 v3;

  v1 = a1[12];
  v2 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  if (*v2 == 0) {
    return true;
  }
  v3 = *(_QWORD*)(v1 + 400);
  return *(_BYTE*)(v3 + 96) == 2 &&
         *(unsigned __int8*)(*(_QWORD*)(v3 + 112) + 32LL) ==
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                            8LL * (unsigned __int8)*v2) +
                                 32LL);
}

#pragma GCC visibility pop
