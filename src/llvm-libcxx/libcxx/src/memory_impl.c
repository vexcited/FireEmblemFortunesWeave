#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___hash_memory_plt(_QWORD, _QWORD);
extern _UNKNOWN* SdkData_ea91f8;
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn)) memory_7d72bc();
void __attribute__((noreturn)) memory_7d72dc();
_UNKNOWN** std___1___get_sp_mut(const void* a1);
void __attribute__((noreturn)) memory_7d72bc() { SdkRoutine_7cd620(); }

void __attribute__((noreturn)) memory_7d72dc() { SdkRoutine_7cd620(); }

_UNKNOWN** std___1___get_sp_mut(const void* a1)
{
  const void* v2;

  v2 = a1;
  return &SdkData_ea91f8 + (std___1___hash_memory_plt(&v2, 8) & 0x1F);
}

#pragma GCC visibility pop
