#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85e050(unsigned __int64);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 llvm_libcxx_libcxx_src_ryu_7dbcf0_alt1(_QWORD) __asm__(
    "llvm_libcxx_libcxx_src_ryu_7dbcf0");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
extern __int64 SdkData_e89398;
void std_exception_Destroy_exception_plt_87c890();
__int64 llvm_libcxx_libcxx_src_ryu_7dbcdc(__int64 a1);
__int64 llvm_libcxx_libcxx_src_ryu_7dbcf0(_QWORD* a1, __int64 a2);

__int64 llvm_libcxx_libcxx_src_ryu_7dbcdc(__int64 a1)
{
  __int64 v3;

  std_exception_Destroy_exception_plt_87c890();
  v3 = _Unwind_Resume_plt(a1);
  return llvm_libcxx_libcxx_src_ryu_7dbcf0_alt1(v3);
}

__int64 llvm_libcxx_libcxx_src_ryu_7dbcf0(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  *a1 = SdkData_e89398 + 16;
  v4 = strlen_plt(a2);
  v5 = SdkRoutine_85e050(v4 + 25);
  v6 = v5 + 24;
  *(_QWORD*)v5 = v4;
  *(_QWORD*)(v5 + 8) = v4;
  *(_DWORD*)(v5 + 16) = 0;
  result = memcpy_plt(v5 + 24, a2, v4 + 1);
  a1[1] = v6;
  return result;
}

#pragma GCC visibility pop
