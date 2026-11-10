#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_DestroySystemEvent_plt(_QWORD);
_BYTE* applet_gpu_error_1e1060(_BYTE* result);

_BYTE* applet_gpu_error_1e1060(_BYTE* result)
{
  if (*result == 1 && result[48] != 0) {
    return (_BYTE*)nn_os_DestroySystemEvent_plt(result + 8);
  }
  return result;
}

#pragma GCC visibility pop
