#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5c02c0(const char*, ...);
__int64 SuperStripeSystem_5ce190(__int64, __int64, float32x4_t*);
extern __int64 GameData_21a3a28;
__int64 nn_vfx_detail_5cda60(__int64 a1);

__int64 nn_vfx_detail_5cda60(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t* v1;
  __int64 v2;

  v1 = *(float32x4_t**)(a1 + 8);
  if (v1 == nullptr) {
    return GameRoutine_5c02c0("SuperStripe instance is null\n");
  }
  if ((LANES128(v1[9]).n128_u8[0] & 1) == 0) {
    return GameRoutine_5c02c0("SuperStripe instance is not used\n");
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1048LL);
  if (v2 == 0) {
    return GameRoutine_5c02c0("EmitterPluginUserData is empty\n");
  }
  if ((*(_BYTE*)(v2 + 16) & 1) != 0) {
    return SuperStripeSystem_5ce190(GameData_21a3a28, a1, v1);
  }
  return GameRoutine_5c02c0("Vertex buffer for stripe has not allocated\n");
}

#pragma GCC visibility pop
