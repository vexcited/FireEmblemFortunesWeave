#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*snd_FileManager_vtable[])();
__int64 FileManager_Destructor(_QWORD* a1);

__int64 FileManager_Destructor(_QWORD* a1)
{
  *a1 = snd_FileManager_vtable;
  return nn_os_FinalizeMutex(a1 + 7);
}

#pragma GCC visibility pop
