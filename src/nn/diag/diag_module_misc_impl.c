#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_SwitchToFiber_plt(_QWORD);
__int64 diag_module_misc_bb670(__int64 a1, __int64 a2, unsigned int a3);
void __attribute__((noreturn)) diag_module_misc_bb8c0(__int64 a1);

__int64 diag_module_misc_bb670(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  __int64 result;

  v3 = *(unsigned int*)(a1 + 24);
  if (*(_QWORD*)(a1 + 16) - v3 < (unsigned __int64)a3) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
    __udf(0);
  }
  result = memcpy_plt(*(_QWORD*)(a1 + 8) + v3, a2, (int)a3);
  *(_DWORD*)(a1 + 24) += a3;
  return result;
}

void __attribute__((noreturn)) diag_module_misc_bb8c0(__int64 a1)
{
  while (1) {
    (***(void (****)(_QWORD))(a1 + 120))(*(_QWORD*)(a1 + 120));
    nn_os_SwitchToFiber_plt(*(_QWORD*)(a1 + 96));
  }
}

#pragma GCC visibility pop
