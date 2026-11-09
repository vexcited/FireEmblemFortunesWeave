#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*snd_CmdManager_vtable[])();
extern __int64 snd_g_memory;
_QWORD* CmdManager_Destructor(_QWORD* result);

_QWORD* CmdManager_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;

  *result = snd_CmdManager_vtable;
  if (result[4] != 0) {
    v1 = (_QWORD*)result[3];
    v2 = result + 2;
    v3 = *(_QWORD**)(result[2] + 8LL);
    *(_QWORD*)(*v1 + 8LL) = v3;
    *v3 = *v1;
    result[4] = 0;
    if (v1 != result + 2) {
      do {
        v4 = (_QWORD*)v1[1];
        result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory +
                                                    24LL))(snd_g_memory);
        v1 = v4;
      } while (v4 != v2);
    }
  }
  return result;
}

#pragma GCC visibility pop
