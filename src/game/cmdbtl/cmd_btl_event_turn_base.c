#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD** CmdBtlEventTurnBase_Unknown2(_QWORD** result, __int64* a2);

_QWORD** CmdBtlEventTurnBase_Unknown2(_QWORD** result, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  v2 = *result;
  v3 = *a2;
  v4 = a2[2];
  v2[1] = a2[1];
  v2[2] = v4;
  *v2 = v3;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  return result;
}

#pragma GCC visibility pop
