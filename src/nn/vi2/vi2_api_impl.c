#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 nn_vi2_detail_g_DefaultDisplayName;
extern __int64 nn_vi2_detail_g_Frontend;
extern void (*SdkData_ea3d00)(__int64, __int64, __int64);
void __attribute__((noreturn)) nn_vi2_CreateDefaultDisplay(__int64 a1);

void __attribute__((noreturn)) nn_vi2_CreateDefaultDisplay(__int64 a1)
{
  SdkData_ea3d00(nn_vi2_detail_g_Frontend, a1,
                 nn_vi2_detail_g_DefaultDisplayName);
}

#pragma GCC visibility pop
