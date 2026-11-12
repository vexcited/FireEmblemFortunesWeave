#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_b42a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 atoi_plt(_QWORD);
__int64 getenv_plt(_QWORD);
__int64 mbsrtowcs_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wcsncat_plt(_QWORD, _QWORD, _QWORD);
__int64 wcsncpy_plt(_QWORD, _QWORD, _QWORD);
extern char NgxData_2b70b00;
bool NGXSafeInitializeLog(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                          int a5);

bool NGXSafeInitializeLog(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                          int a5)
{
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  char v14;
  __int64 v16;
  __int64 v17;
  _DWORD v18[4096];

  if (a1 != 0) {
    NgxData_2b70b00 = 0;
    v10 = getenv_plt("__NGX_ENABLE_OVERRIDE_LOG_PATH");
    v11 = getenv_plt("__NGX_LOG_PATH_OVERRIDE");
    v17 = v11;
    if (v10 != 0 && v11 != 0 && (unsigned int)atoi_plt(v10) != 0) {
      v16 = 0;
      mbsrtowcs_plt(v18, &v17, 4096, &v16);
      v12 = 0;
      v18[4095] = 0;
      if ((NgxData_2b70b00 & 1) != 0) {
        return a1 != 0;
      }
    }
    else if ((a5 & 1) != 0) {
      v18[0] = 0;
      v12 = 1;
      if ((NgxData_2b70b00 & 1) != 0) {
        return a1 != 0;
      }
    }
    else {
      *(_DWORD*)(wcsncpy_plt(v18, a1, 4096) + 16380) = 0;
      v12 = 1;
      if ((NgxData_2b70b00 & 1) != 0) {
        return a1 != 0;
      }
    }
    v13 = wcsncat_plt(v18, a2, 4096);
    v14 = NgxData_2b70b00;
    *(_DWORD*)(v13 + 16380) = 0;
    if ((v14 & 1) == 0) {
      NgxRoutine_b42a0(v18, v18, 0, a3, a4, a5 & (unsigned int)v12, 32766);
      if (a4 != 0) {
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/vulkan/sdk/source/common/common_lib.cpp",
            149, "NGXSafeInitializeLog",
            "App logging hooks successfully initialized");
      }
    }
  }
  return a1 != 0;
}

#pragma GCC visibility pop
