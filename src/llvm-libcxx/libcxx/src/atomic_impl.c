#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_BroadcastToAddress_plt(void);
__int64 nn_os_BroadcastToAddress_plt_alt1(_QWORD) __asm__(
    "nn_os_BroadcastToAddress_plt");
__int64 nn_os_SignalToAddress_plt(_QWORD);
__int64 nn_os_WaitForAddress_plt(_QWORD, _QWORD);
__int64 std___1___hash_memory_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_105bf80;
extern unsigned __int64 SdkData_105bf80_alt1[2048] __asm__("SdkData_105bf80");
char* std___1___cxx_atomic_notify_all_7e57e0(const volatile void* a1);
unsigned __int64
std___1___libcpp_atomic_monitor_7e5840(const volatile void* a1);
__int64 std___1___libcpp_atomic_wait(const volatile void* a1, __int64 a2);
__int64 std___1___cxx_atomic_notify_one_7e5900(__int64 a1);
__int64 std___1___cxx_atomic_notify_all_7e5960(__int64 a1);
unsigned __int64 std___1___libcpp_atomic_monitor_7e59c0(atomic_ullong* a1);

char* std___1___cxx_atomic_notify_all_7e57e0(const volatile void* a1)
{
  char* v1;
  char* result;
  unsigned __int64 v3;
  const volatile void* v4;

  v4 = a1;
  v1 =
      (char*)&SdkData_105bf80 +
      64 * (unsigned __int64)(unsigned __int8)std___1___hash_memory_plt(&v4, 8);
  result = v1 + 8;
  atomic_fetch_add((atomic_ullong* volatile)(v1 + 8), 1u);
  v3 = atomic_load((unsigned __int64*)v1);
  if (v3 != 0) {
    return (char*)nn_os_BroadcastToAddress_plt();
  }
  return result;
}

unsigned __int64 std___1___libcpp_atomic_monitor_7e5840(const volatile void* a1)
{
  const volatile void* v2;

  v2 = a1;
  return atomic_load_explicit(
      (atomic_ullong* volatile)((char*)&SdkData_105bf80 +
                                64 * (unsigned __int64)(unsigned __int8)
                                         std___1___hash_memory_plt(&v2, 8) +
                                8),
      memory_order_acquire);
}

__int64 std___1___libcpp_atomic_wait(const volatile void* a1, __int64 a2)
{
  atomic_ullong* v3;
  __int64 result;
  const volatile void* v5;

  v5 = a1;
  v3 = (atomic_ullong*)((char*)&SdkData_105bf80 +
                        64 * (unsigned __int64)(unsigned __int8)
                                 std___1___hash_memory_plt(&v5, 8));
  atomic_fetch_add_explicit(v3, 1u, memory_order_relaxed);
  __builtin_arm_dmb(0xBu);
  result = nn_os_WaitForAddress_plt((char*)v3 + 8, a2);
  atomic_fetch_add_explicit(v3, 0xFFFFFFFFFFFFFFFFLL, memory_order_release);
  return result;
}

__int64 std___1___cxx_atomic_notify_one_7e5900(__int64 a1)
{
  __int64 result;
  unsigned __int64 v3;
  __int64 v4;

  v4 = a1;
  result = std___1___hash_memory_plt(&v4, 8);
  v3 = atomic_load(
      &SdkData_105bf80_alt1[8 * (unsigned __int64)(unsigned __int8)result]);
  if (v3 != 0) {
    return nn_os_SignalToAddress_plt(a1);
  }
  return result;
}

__int64 std___1___cxx_atomic_notify_all_7e5960(__int64 a1)
{
  __int64 result;
  unsigned __int64 v3;
  __int64 v4;

  v4 = a1;
  result = std___1___hash_memory_plt(&v4, 8);
  v3 = atomic_load(
      &SdkData_105bf80_alt1[8 * (unsigned __int64)(unsigned __int8)result]);
  if (v3 != 0) {
    return nn_os_BroadcastToAddress_plt_alt1(a1);
  }
  return result;
}

unsigned __int64 std___1___libcpp_atomic_monitor_7e59c0(atomic_ullong* a1)
{
  return atomic_load_explicit(a1, memory_order_acquire);
}

#pragma GCC visibility pop
