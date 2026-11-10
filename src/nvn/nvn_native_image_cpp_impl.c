#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvnNativeImageBuilderSetNativeImageHandle_plt(void);
__int64 nvn_NativeImageBuilder_SetNativeImageHandle(__int64 a1);

__int64 nvn_NativeImageBuilder_SetNativeImageHandle(__int64 a1)
{
  nvnNativeImageBuilderSetNativeImageHandle_plt();
  return a1;
}

#pragma GCC visibility pop
