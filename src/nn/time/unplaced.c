#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_os_DestroySharedMemory_plt(_QWORD);
_BYTE* nn_time_5d5040(_BYTE* result);
__int64 nn_time_5d59b0();

_BYTE* nn_time_5d5040(_BYTE* result)
{
  if (result[72] == 1 && *result != 0) {
    return (_BYTE*)nn_os_DestroySharedMemory_plt(result);
  }
  return result;
}

__int64 nn_time_5d59b0()
{
  fw_rtld_RegisterCrtDestructor();
  fw_rtld_RegisterCrtDestructor();
  fw_rtld_RegisterCrtDestructor();
  fw_rtld_RegisterCrtDestructor();
  fw_rtld_RegisterCrtDestructor();
  fw_rtld_RegisterCrtDestructor();
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
