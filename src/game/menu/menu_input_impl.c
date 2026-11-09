#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MenuInput_19edbb0(_QWORD* a1, char a2);
__int64 MenuInput_19edc30(_QWORD* a1, char a2);

__int64 MenuInput_19edbb0(_QWORD* a1, char a2)
{
  __int64 v5;

  if ((*(unsigned int (**)(_QWORD*))*a1)(a1) == 0 &&
      (v5 = *(_QWORD*)(a1[1] + 336LL)) != 0 &&
      ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 312LL))(v5, a2 & 1) &
       1) != 0) {
    return 13;
  }
  else {
    return (*(__int64 (**)(_QWORD*, __int64, _QWORD))(*a1 + 96LL))(a1, 1,
                                                                   a2 & 1);
  }
}

__int64 MenuInput_19edc30(_QWORD* a1, char a2)
{
  __int64 v5;

  if ((*(unsigned int (**)(_QWORD*))*a1)(a1) == 0 &&
      (v5 = *(_QWORD*)(a1[1] + 336LL)) != 0 &&
      ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 320LL))(v5, a2 & 1) &
       1) != 0) {
    return 13;
  }
  else {
    return (*(__int64 (**)(_QWORD*, __int64, _QWORD))(*a1 + 96LL))(
        a1, 0xFFFFFFFFLL, a2 & 1);
  }
}

#pragma GCC visibility pop
