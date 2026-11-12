#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);
extern _UNKNOWN NgxData_266a5a0;
extern _UNKNOWN NgxData_266ba14;
extern _UNKNOWN NgxData_266cc10;
extern _UNKNOWN NgxData_266db8c;
extern _UNKNOWN* NgxData_952bc8;
extern int NgxData_266ba10;
extern int NgxData_266cc0c;
extern int NgxData_266db88;
extern int NgxData_266e804;
extern int NgxData_266f700;
__int64 ngx_cubin_kernel_map_a7830(__int64 a1, char a2);

__int64 ngx_cubin_kernel_map_a7830(__int64 a1, char a2)
{
  if ((a2 & 1) == 0) {
    return 4294967192LL;
  }
  NgxRoutine_b4b90(
      "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/rel/"
      "source/frameworks/cubin/ngx_cubin_kernel_map.cpp",
      45, "InitCubins", "Loading NGXCubin kernels");
  *(_QWORD*)a1 = NgxData_952bc8;
  *(_QWORD*)(a1 + 16) = &NgxData_266cc10;
  *(_QWORD*)(a1 + 32) = &NgxData_266ba14;
  *(_DWORD*)(a1 + 8) = NgxData_266f700;
  *(_DWORD*)(a1 + 24) = NgxData_266db88;
  *(_DWORD*)(a1 + 40) = NgxData_266cc0c;
  *(_QWORD*)(a1 + 48) = &NgxData_266a5a0;
  *(_DWORD*)(a1 + 56) = NgxData_266ba10;
  *(_QWORD*)(a1 + 64) = &NgxData_266db8c;
  *(_DWORD*)(a1 + 72) = NgxData_266e804;
  return 0;
}

#pragma GCC visibility pop
