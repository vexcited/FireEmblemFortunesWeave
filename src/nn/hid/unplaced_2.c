#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_134890(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1de500(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_hid_6f4220(__int64 a1, _QWORD* a2);
__int64 nn_hid_6f42a0(__int64 a1, __int64 a2, _QWORD* a3);

__int64 nn_hid_6f4220(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, 40LL * a2[1], 11);
}

__int64 nn_hid_6f42a0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_1de500(a1 + 8, a2, *a3, 40LL * a3[1], 18);
}

#pragma GCC visibility pop
