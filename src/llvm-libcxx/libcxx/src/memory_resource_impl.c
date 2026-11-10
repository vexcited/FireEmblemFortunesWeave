#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 std___1_mutex_lock_plt(_QWORD);
__int64 std___1_mutex_unlock_plt(_QWORD);
__int64 std___1_pmr_unsynchronized_pool_resource_release(__int64 this_);
extern __int64 SdkData_e89368;
extern __int64 SdkData_e89378;
__int64
std___1_pmr_synchronized_pool_resource_Destroy_synchronized_pool_resource_7d7e50(
    _QWORD* a1);
__int64
std___1_pmr_synchronized_pool_resource_Destroy_synchronized_pool_resource_7d7e90(
    _QWORD* a1);
__int64 std___1_pmr_synchronized_pool_resource_do_allocate(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3);
void __attribute__((noreturn)) memory_resource_7d7f50(__int64 a1);
__int64 std___1_pmr_synchronized_pool_resource_do_deallocate(__int64 a1,
                                                             __int64 a2,
                                                             __int64 a3,
                                                             __int64 a4);
void __attribute__((noreturn)) memory_resource_7d7fd0(__int64 a1);
__int64

std___1_pmr_synchronized_pool_resource_Destroy_synchronized_pool_resource_7d7e50(
    _QWORD* a1)
{
  *a1 = SdkData_e89378 + 16;
  a1[2] = SdkData_e89368 + 16;
  return std___1_pmr_unsynchronized_pool_resource_release((__int64)(a1 + 2));
}

__int64

std___1_pmr_synchronized_pool_resource_Destroy_synchronized_pool_resource_7d7e90(
    _QWORD* a1)
{
  *a1 = SdkData_e89378 + 16;
  a1[2] = SdkData_e89368 + 16;
  std___1_pmr_unsynchronized_pool_resource_release((__int64)(a1 + 2));
  return SdkRoutine_857220(a1, 56);
}

__int64 std___1_pmr_synchronized_pool_resource_do_allocate(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3)
{
  __int64 v6;

  std___1_mutex_lock_plt(a1 + 8);
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 16) + 16LL))(
      a1 + 16, a2, a3);
  std___1_mutex_unlock_plt(a1 + 8);
  return v6;
}

void __attribute__((noreturn)) memory_resource_7d7f50(__int64 a1)
{
  __int64 v1;

  std___1_mutex_unlock_plt(v1 + 8);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1_pmr_synchronized_pool_resource_do_deallocate(__int64 a1,
                                                             __int64 a2,
                                                             __int64 a3,
                                                             __int64 a4)
{
  std___1_mutex_lock_plt(a1 + 8);
  (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)(a1 + 16) +
                                                    24LL))(a1 + 16, a2, a3, a4);
  return std___1_mutex_unlock_plt(a1 + 8);
}

void __attribute__((noreturn)) memory_resource_7d7fd0(__int64 a1)
{
  __int64 v1;

  std___1_mutex_unlock_plt(v1 + 8);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

#pragma GCC visibility pop
