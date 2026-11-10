#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_6020a0(__int64);
__int64 nvrm_host1x_stream_603220(__int64 a1);

__int64 nvrm_host1x_stream_603220(__int64 a1)
{
  __int64 v1;
  __int64 result;

  v1 = a1 + 139264;
  if (*(_BYTE*)(a1 + 142752) != 0) {
    if (*(_DWORD*)(a1 + 142764) != 0) {
      return 8;
    }
    if (*(_DWORD*)(a1 + 142768) == 0 && *(_DWORD*)(a1 + 142772) == 0 &&
        *(_DWORD*)(a1 + 142776) == 0) {
      result = nvidia_6020a0(a1);
      if ((_DWORD)result == 0) {
        *(_BYTE*)(v1 + 3488) = 0;
        *(_QWORD*)(v1 + 3500) = 0;
        *(_QWORD*)(v1 + 3508) = 0;
      }
      return result;
    }
  }
  return 8;
}

#pragma GCC visibility pop
