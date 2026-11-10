#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 hid_nmouse_6eb030(__int64 a1, __int64 a2);
__int64 hid_nmouse_6eb050(__int64 a1);

__int64 hid_nmouse_6eb030(__int64 a1, __int64 a2)
{
  *(_QWORD*)(a1 + 24) = a2 + 254592;
  return 0;
}

__int64 hid_nmouse_6eb050(__int64 a1)
{
  *(_QWORD*)(a1 + 24) = 0;
  return 0;
}

#pragma GCC visibility pop
