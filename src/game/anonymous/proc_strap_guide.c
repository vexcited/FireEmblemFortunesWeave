#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_hid_ShowControllerStrapGuide(_QWORD);
__int64 ProcStrapGuide_Unknown2(__int64 a1);

__int64 ProcStrapGuide_Unknown2(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;
  _QWORD v8[4];

  memset(&v8[1], 0, 24);
  v8[0] = 1;
  result = nn_hid_ShowControllerStrapGuide(v8);
  v3 = *(unsigned __int8**)(a1 + 16);
  if (v3 != nullptr) {
    v4 = *v3;
    v5 = v4 > 0x10;
    v6 = (1 << v4) & 0x1CE00;
    if (!v5 && v6 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  return result;
}

#pragma GCC visibility pop
