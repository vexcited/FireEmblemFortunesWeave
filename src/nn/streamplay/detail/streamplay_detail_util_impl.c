#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64
nn_streamplay_detail_HidApplicationResourceHolder_Destroy_HidApplicationResourceHolder_plt(
    void);
__int64 streamplay_detail_util_76f940(__int64 result);
__int64 streamplay_detail_util_76f960(__int64 result);

__int64 streamplay_detail_util_76f940(__int64 result)
{
  if (*(_BYTE*)(result + 48) == 1 && *(_BYTE*)(result + 40) != 0) {
    return nn_os_DestroySystemEvent_plt(result);
  }
  return result;
}

__int64 streamplay_detail_util_76f960(__int64 result)
{
  if (*(_BYTE*)(result + 80) == 1) {
    return nn_streamplay_detail_HidApplicationResourceHolder_Destroy_HidApplicationResourceHolder_plt();
  }
  return result;
}

#pragma GCC visibility pop
