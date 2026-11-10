#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 nn_os_FinalizeReaderWriterLock_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
extern __int16 SdkData_eb8680;
extern __int64 SdkData_eb8658;
extern __int64 SdkData_eb8660;
extern __int64 SdkData_eb8668;
extern __int64 SdkData_eb8670;
extern __int64 SdkData_eb8678;
extern __int64 SdkData_eb8684;
extern __int64 SdkData_eb8690;
extern int SdkData_eb8698;
__int64 nn_socket_1822d0();
__int64 nn_socket_186ad0(__int64 a1);
__int64 nn_socket_186b30(__int64 a1);

__int64 nn_socket_1822d0()
{
  __int64 v0;
  __int64 v1;

  SdkData_eb8680 = 0;
  SdkData_eb8684 = 0;
  SdkData_eb8690 = 0;
  SdkData_eb8698 = 0;
  SdkData_eb8678 = 0;
  SdkData_eb8658 = 0x4059000000000000LL;
  SdkData_eb8660 = 0x408F400000000000LL;
  SdkData_eb8668 = 0x408F400000000000LL;
  SdkData_eb8670 = 0;
  v0 = nn_os_InitializeMutex_plt(&SdkData_eb8680, 1, 0);
  v1 = nn_os_GetSystemTick_plt(v0);
  SdkData_eb8670 = nn_os_ConvertToTimeSpan_plt(v1);
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_socket_186ad0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  nn_os_FinalizeMutex_plt(a1 + 184);
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = *(_QWORD*)(a1 + 160);
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  return nn_os_FinalizeMutex_plt(a1);
}

__int64 nn_socket_186b30(__int64 a1)
{
  if (*(_BYTE*)(a1 + 756) == 1) {
    nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 752));
    if (*(_BYTE*)(a1 + 748) != 1) {
    LABEL_3:
      if (*(_BYTE*)(a1 + 636) != 1) {
        goto LABEL_4;
      }
      goto LABEL_17;
    }
  }
  else if (*(_BYTE*)(a1 + 748) != 1) {
    goto LABEL_3;
  }
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 744));
  if (*(_BYTE*)(a1 + 636) != 1) {
  LABEL_4:
    if (*(_BYTE*)(a1 + 628) != 1) {
      goto LABEL_5;
    }
    goto LABEL_18;
  }
LABEL_17:
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 632));
  if (*(_BYTE*)(a1 + 628) != 1) {
  LABEL_5:
    if (*(_BYTE*)(a1 + 516) != 1) {
      goto LABEL_6;
    }
    goto LABEL_19;
  }
LABEL_18:
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 624));
  if (*(_BYTE*)(a1 + 516) != 1) {
  LABEL_6:
    if (*(_BYTE*)(a1 + 508) != 1) {
      goto LABEL_7;
    }
    goto LABEL_20;
  }
LABEL_19:
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 512));
  if (*(_BYTE*)(a1 + 508) != 1) {
  LABEL_7:
    if (*(_BYTE*)(a1 + 396) != 1) {
      goto LABEL_8;
    }
    goto LABEL_21;
  }
LABEL_20:
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 504));
  if (*(_BYTE*)(a1 + 396) != 1) {
  LABEL_8:
    if (*(_BYTE*)(a1 + 388) != 1) {
      goto LABEL_9;
    }
    goto LABEL_22;
  }
LABEL_21:
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 392));
  if (*(_BYTE*)(a1 + 388) != 1) {
  LABEL_9:
    if (*(_BYTE*)(a1 + 276) != 1) {
      goto LABEL_10;
    }
    goto LABEL_23;
  }
LABEL_22:
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 384));
  if (*(_BYTE*)(a1 + 276) != 1) {
  LABEL_10:
    if (*(_BYTE*)(a1 + 268) != 1) {
      goto LABEL_11;
    }
    goto LABEL_24;
  }
LABEL_23:
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 272));
  if (*(_BYTE*)(a1 + 268) != 1) {
  LABEL_11:
    if (*(_BYTE*)(a1 + 156) != 1) {
      goto LABEL_12;
    }
  LABEL_25:
    nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 152));
    if (*(_BYTE*)(a1 + 148) != 1) {
      return nn_os_FinalizeReaderWriterLock_plt(a1);
    }
  LABEL_26:
    nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 144));
    return nn_os_FinalizeReaderWriterLock_plt(a1);
  }
LABEL_24:
  nn_os_CloseNativeHandle_plt(*(unsigned int*)(a1 + 264));
  if (*(_BYTE*)(a1 + 156) == 1) {
    goto LABEL_25;
  }
LABEL_12:
  if (*(_BYTE*)(a1 + 148) == 1) {
    goto LABEL_26;
  }
  return nn_os_FinalizeReaderWriterLock_plt(a1);
}

#pragma GCC visibility pop
