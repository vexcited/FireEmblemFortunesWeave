#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
extern __int64 SdkData_e89300;
void std___1_system_error_Destroy_system_error_plt_87c8a0(void* this_);
void llvm_libcxx_libcxx_src_filesystem_7d3580(void* this_);

void llvm_libcxx_libcxx_src_filesystem_7d3580(void* this_)
{
  __int64 v1;

  v1 = *((_QWORD*)this_ + 5);
  *(_QWORD*)this_ = SdkData_e89300 + 16;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_plt(v1);
    std___1_system_error_Destroy_system_error_plt_87c8a0(this_);
  }
  else {
    std___1_system_error_Destroy_system_error_plt_87c8a0(this_);
  }
}

#pragma GCC visibility pop
