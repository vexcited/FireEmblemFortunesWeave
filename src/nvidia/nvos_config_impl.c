#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAtomicCompareExchange32_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsFclose_plt(_QWORD);
__int64 NvOsFopen_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsFstat_plt(_QWORD, _QWORD);
__int64 strcmp_plt(void* this_, const char*, const char*);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_f71e60[513];
extern int SdkData_f71e5c;
extern int SdkData_f72e68;
void __attribute__((noreturn)) NvOsAlloc_0(__int64);
void __attribute__((noreturn)) NvOsFree_0(__int64);
__int64 nvos_config_5ef040(char* a1, __int64 a2, const char* a3);

__int64 nvos_config_5ef040(char* a1, __int64 a2, const char* a3)
{
  __int64 v3;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned int v13;
  struct {
    __int64 v15;
    __int64 v16;
    __int64 v17;
  } v15_;
  __int64 v18;

  v3 = a2;
  v5 = 196614;
  if (SdkData_f71e5c != 2) {
    v13 = (unsigned int)a3;
    v6 = 0;
    do {
      if ((unsigned int)NvOsAtomicCompareExchange32_plt(&SdkData_f71e5c, 0,
                                                        1) == 0) {
        v18 = 0;
        v15_.v16 = 0;
        v15_.v17 = 0;
        v15_.v15 = 0;
        SdkData_f71e60[0] = 0;
        SdkData_f72e68 = 0;
        v6 = NvOsFopen_plt("host:/tegra_config.txt", 1, &v18);
        if (v6 == 0) {
          v7 = NvOsFstat_plt(v18, &v15_.v15);
          if (v7 != 0) {
            v6 = v7;
            v8 = SdkData_f71e60[0];
            if (SdkData_f71e60[0] != 0) {
              goto LABEL_13;
            }
          }
          else {
            if ((_DWORD)v15_.v16 == 1) {
              NvOsAlloc_0(v15_.v15 + 1);
            }
            v6 = 8;
            v8 = SdkData_f71e60[0];
            if (SdkData_f71e60[0] != 0) {
            LABEL_13:
              NvOsFree_0(v8);
            }
          }
          if (v18 != 0) {
            NvOsFclose_plt(v18);
          }
        }
        NvOsAtomicCompareExchange32_plt(&SdkData_f71e5c, 1, 2);
      }
    } while (SdkData_f71e5c != 2);
    v3 = a2;
    a3 = (const char*)v13;
    if (v6 != 0) {
      if (v6 == 196627) {
        return 196614;
      }
      else {
        return v6;
      }
    }
  }
  v9 = (unsigned int)SdkData_f72e68;
  if (SdkData_f72e68 < 1) {
    LODWORD(v11) = 0;
    if (SdkData_f72e68 == 0) {
      return v5;
    }
  LABEL_26:
    strncpy_plt(v3, SdkData_f71e60[(unsigned int)v11 + 257], (unsigned int)a3);
    return 0;
  }
  v10 = (int)a3;
  v11 = 0;
  while ((unsigned int)strcmp_plt((void*)SdkData_f71e60[v11 + 1], a1, a3) !=
         0) {
    if (v9 == ++v11) {
      return v5;
    }
  }
  LODWORD(a3) = v10;
  if ((_DWORD)v11 != (_DWORD)v9) {
    goto LABEL_26;
  }
  return v5;
}

#pragma GCC visibility pop
