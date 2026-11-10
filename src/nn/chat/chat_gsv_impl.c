#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6b6c50(__int64);
__int64 SdkRoutine_6b6e90(__int64);
__int64 SdkRoutine_6b7170(__int64);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_vi2_5e5ac0(__int64);
__int64 chat_gsv_6b5a60(__int64 a1);

__int64 chat_gsv_6b5a60(__int64 a1)
{
  unsigned int v9;
  __int64 v17;
  void (*v19)(__int64*);
  __int64 v20;

  nn_os_SdkMutexType_Lock_plt(a1 + 536);
  v9 = SdkRoutine_6b6e90(a1 + 536);
  nn_os_SdkMutexType_Unlock_plt(a1 + 536);
  if (v9 == 0) {
    v9 = SdkRoutine_6b6c50(a1);
    if (v9 == 0) {
      return v9;
    }
    nn_os_SdkMutexType_Lock_plt(a1 + 536);
    SdkRoutine_6b7170(a1 + 536);
    nn_os_SdkMutexType_Unlock_plt(a1 + 536);
  }
  nn_vi2_5e5ac0(a1 + 152);
  nn_os_SdkMutexType_Lock_plt(a1 + 520);
  v17 = *(_QWORD*)(a1 + 528);
  *(_QWORD*)(a1 + 528) = 0;
  if (v17 != 0 && atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 64),
                                            0xFFFFFFFFFFFFFFFFLL,
                                            memory_order_release) == 1) {
    __builtin_arm_dmb(9u);
    v19 = *(void (**)(__int64*))(v17 + 48);
    v20 = *(_QWORD*)(v17 + 56);
    v19(&v20);
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 520);
  return v9;
}

#pragma GCC visibility pop
