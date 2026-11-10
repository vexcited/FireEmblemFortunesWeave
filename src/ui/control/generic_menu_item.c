#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_18863e0(__int64, _QWORD*, char);
__int64 GenericMenuItem_188d1f0(_QWORD* a1);

__int64 GenericMenuItem_188d1f0(_QWORD* a1)
{
  char v2;
  __int64 v3;
  const char* v4;
  __int64 v5;
  _QWORD v7[2];

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1);
  v3 = a1[36];
  if ((v3 & 0x200000000LL) != 0) {
    v4 = "Decide";
    v5 = 6;
  }
  else if ((v3 & 0x100000000LL) != 0) {
    v4 = "Select";
    v5 = 6;
  }
  else {
    if ((v2 & 1) != 0) {
      v4 = "Default";
    }
    else {
      v4 = "Disable";
    }
    v5 = 7;
  }
  v7[0] = v4;
  v7[1] = v5;
  return Element_18863e0((__int64)a1, v7, 0);
}

#pragma GCC visibility pop
