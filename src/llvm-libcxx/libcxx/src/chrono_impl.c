#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1_chrono_system_clock_to_time_t(_QWORD* a1);
__int64 std___1_chrono_system_clock_from_time_t(void* this_);

__int64 std___1_chrono_system_clock_to_time_t(_QWORD* a1)
{
  return (signed __int64)*a1 / 1000000LL;
}

__int64 std___1_chrono_system_clock_from_time_t(void* this_)
{
  return 1000000LL * (_QWORD)this_;
}

#pragma GCC visibility pop
