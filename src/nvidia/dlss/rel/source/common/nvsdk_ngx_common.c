#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_29c90(void);
__int64 NgxRoutine_33310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 NgxRoutine_b42a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 atoi_plt(_QWORD);
__int64 getenv_plt(_QWORD);
__int64 mbsrtowcs_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_3ab70(_QWORD);
extern _UNKNOWN NgxData_f555c;
extern _UNKNOWN NgxData_f5698;
__int64 NGXInitLog(__int64 a1, void* a2, unsigned int a3, __int64 a4, char a5,
                   unsigned int a6);

__int64 NGXInitLog(__int64 a1, void* a2, unsigned int a3, __int64 a4, char a5,
                   unsigned int a6)
{
  unsigned int v11;
  __int64 v12;
  int v13;
  unsigned __int8 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  void* v20;
  __int64 v23;
  __int64 v24;
  _BYTE v25[1036];
  int v26;
  _BYTE v27[1048];

  v11 = -1160773630;
  v12 = NgxRoutine_29c90();
  v13 = nvidia_dlss_rel_source_3ab70(v12);
  v14 = v13;
  v15 = v13 >> 16;
  v16 = BYTE1(v13);
  v17 = getenv_plt("__NGX_ENABLE_OVERRIDE_LOG_PATH");
  v18 = getenv_plt("__NGX_LOG_PATH_OVERRIDE");
  v24 = v18;
  if (v17 != 0 && v18 != 0) {
    v19 = atoi_plt(v17);
    if ((unsigned int)NgxRoutine_33310(v27, 260, &NgxData_f5698, a1, v15, v16,
                                       v14) != -1) {
      if (v19 != 0) {
        v23 = 0;
        mbsrtowcs_plt(v25, &v24, 260, &v23);
        v26 = 0;
        NgxRoutine_b42a0(v25, v27, 0, a3, a4, 0, a6);
        if (a4 == 0) {
          goto LABEL_13;
        }
        goto LABEL_12;
      }
    LABEL_8:
      if ((a5 & 1) != 0) {
        v20 = &NgxData_f555c;
      }
      else {
        v20 = a2;
      }
      NgxRoutine_b42a0(v20, v27, 0, a3, a4, a5 & 1, a6);
      if (a4 != 0) {
      LABEL_12:
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/common/nvsdk_ngx_common.cpp",
            223, "NGXInitLog", "App logging hooks successfully initialized");
      }
    LABEL_13:
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/common/nvsdk_ngx_common.cpp",
          230, "NGXInitLog", "Built with APP_NAME = %s", "APP_NAME");
      return 1;
    }
  }
  else if ((unsigned int)NgxRoutine_33310(v27, 260, &NgxData_f5698, a1, v15,
                                          v16, v14) != -1) {
    goto LABEL_8;
  }
  return v11;
}

#pragma GCC visibility pop
