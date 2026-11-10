#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_audio_driver_InvalidateDataCache_plt(_QWORD, _QWORD);
__int64 nn_audio_driver_StoreDataCache_plt(_QWORD, _QWORD);
__int64 nn_audio_util_MemSet_Explicit_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_sf_cmif_client_2b2b80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_sf_cmif_client_2b2fa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 sysmix_2b1ac0_alt1(_QWORD, _QWORD, _QWORD) __asm__("sysmix_2b1ac0");
extern _QWORD SdkData_c15aa0[5];
void SdkRoutine_2b3b00();
__int64 nn_audio_sysmix_detail_OpenStreamImpl(__int64 a1, _DWORD* a2, int a3,
                                              unsigned int a4, unsigned int a5);
__int64 sysmix_2b18e0(__int64 a1, __int64 a2, unsigned int a3);
__int64 sysmix_2b1ac0(__int64 a1, __int64 a2, int a3);

__int64 nn_audio_sysmix_detail_OpenStreamImpl(__int64 a1, _DWORD* a2, int a3,
                                              unsigned int a4, unsigned int a5)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  char v18;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v28;
  int v29;
  unsigned int v30;
  char v31;
  char* v32;

  v5 = *a2 - 1;
  if (v5 < 5) {
    v6 = (unsigned int)(a3 + 1);
    v7 = SdkData_c15aa0[v5];
    if ((int)v6 < 16) {
      v8 = a3 + 1;
    }
    else {
      v8 = 16;
    }
    v9 = (((8LL * v8 + 127) & 0xFFFFFFFFFFFFFFC0LL) + 0x1FFF +
          ((v7 * (int)v6 * (int)a2[1] + 63) & 0xFFFFFFFFFFFFFFC0LL)) &
         0xFFFFFFFFFFFFF000LL;
    v10 = *(_QWORD*)(a1 + 328);
    if (v10 < v9) {
      return 2713;
    }
    *(_DWORD*)(a1 + 456) = 0;
    *(_QWORD*)(a1 + 440) = 0;
    *(_QWORD*)(a1 + 448) = 0;
    v11 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 424) = 0;
    *(_QWORD*)(a1 + 432) = 0;
    *(_QWORD*)(a1 + 408) = 0;
    *(_QWORD*)(a1 + 416) = 0;
    *(_QWORD*)(a1 + 392) = 0;
    *(_QWORD*)(a1 + 400) = 0;
    *(_QWORD*)(a1 + 376) = 0;
    *(_QWORD*)(a1 + 384) = 0;
    *(_QWORD*)(a1 + 360) = 0;
    *(_QWORD*)(a1 + 368) = 0;
    *(_QWORD*)(a1 + 344) = 0;
    *(_QWORD*)(a1 + 352) = 0;
    *(_QWORD*)(a1 + 336) = 0;
    *(_WORD*)(a1 + 464) = 0;
    *(_QWORD*)(a1 + 468) = 0;
    *(_QWORD*)(a1 + 488) = 0;
    *(_QWORD*)(a1 + 496) = 0;
    *(_QWORD*)(a1 + 480) = 0;
    v12 = *a2 - 1;
    if (v12 < 5) {
      v13 = *(_QWORD*)(a1 + 320);
      if (v13 == 0) {
        return 821401;
      }
      v14 = (unsigned int)a2[1];
      if ((int)v14 < 1) {
        return 5273;
      }
      v15 = 823449;
      if (a3 >= 1 && a4 <= a3) {
        v15 = 821401;
        if (16 * (a5 & 1) <= (unsigned int)v6) {
          v16 = SdkData_c15aa0[v12];
          if (v10 >= ((((v16 * v6 * v14 + 63) & 0xFFFFFFFFFFFFFFC0LL) +
                       (((a5 & 1) << 7) | 0x203F)) &
                      0xFFFFFFFFFFFFF000LL)) {
            if ((v13 & 0xFFF) != 0) {
              return 821913;
            }
            if ((v10 & 0xFFF) == 0) {
              v18 = *(_DWORD*)(a1 + 8);
              v32 = nullptr;
              v15 = nn_sf_cmif_client_2b2b80(a1 + 336, (v18 & 7) == 4, v13, v10,
                                             v16);
              if (v32 == &v31) {
                v26 = v15;
                v25 = 32;
              }
              else {
                if (v32 == nullptr) {
                  goto LABEL_25;
                }
                v25 = 40;
                v26 = v15;
              }
              (*(void (**)(char*, __int64))(*(_QWORD*)v32 + v25))(v32, v24);
              v15 = v26;
            LABEL_25:
              if (v15 == 0) {
                v27 = (*(__int64 (**)(__int64, _DWORD*, _QWORD, _QWORD,
                                      _QWORD))(*(_QWORD*)v11 + 32LL))(
                    v11, a2, (unsigned int)a3, a4, a5);
                if (v27 != 0) {
                  v30 = v27;
                  nn_audio_util_MemSet_Explicit_plt(*(_QWORD*)(a1 + 352), 0,
                                                    *(_QWORD*)(a1 + 376) +
                                                        *(_QWORD*)(a1 + 360));
                  nn_audio_util_MemSet_Explicit_plt(*(_QWORD*)(a1 + 384), 0,
                                                    *(_QWORD*)(a1 + 424) +
                                                        *(_QWORD*)(a1 + 392) +
                                                        *(_QWORD*)(a1 + 408));
                  nn_audio_driver_StoreDataCache_plt(*(_QWORD*)(a1 + 352),
                                                     *(_QWORD*)(a1 + 376) +
                                                         *(_QWORD*)(a1 + 360));
                  nn_audio_driver_StoreDataCache_plt(*(_QWORD*)(a1 + 384),
                                                     *(_QWORD*)(a1 + 424) +
                                                         *(_QWORD*)(a1 + 392) +
                                                         *(_QWORD*)(a1 + 408));
                  v15 = v30;
                  *(_QWORD*)(a1 + 440) = 0;
                  *(_QWORD*)(a1 + 448) = 0;
                  *(_QWORD*)(a1 + 424) = 0;
                  *(_QWORD*)(a1 + 432) = 0;
                  *(_QWORD*)(a1 + 408) = 0;
                  *(_QWORD*)(a1 + 416) = 0;
                  *(_QWORD*)(a1 + 392) = 0;
                  *(_QWORD*)(a1 + 400) = 0;
                  *(_QWORD*)(a1 + 376) = 0;
                  *(_QWORD*)(a1 + 384) = 0;
                  *(_QWORD*)(a1 + 360) = 0;
                  *(_QWORD*)(a1 + 368) = 0;
                  *(_QWORD*)(a1 + 344) = 0;
                  *(_QWORD*)(a1 + 352) = 0;
                  *(_QWORD*)(a1 + 336) = 0;
                  *(_BYTE*)(a1 + 464) = 0;
                }
                else {
                  v28 = *(_QWORD*)a2;
                  v29 = a2[2];
                  v15 = 0;
                  *(_DWORD*)(a1 + 312) = a5;
                  *(_QWORD*)(a1 + 12) = v28;
                  *(_DWORD*)(a1 + 20) = v29;
                  *(_DWORD*)(a1 + 24) = a3;
                }
              }
              return v15;
            }
          }
          return 822937;
        }
      }
      return v15;
    }
  }
  nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
  __udf(0);
}

__int64 sysmix_2b18e0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;
  int v12;
  __int64 result;
  _DWORD* v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  _DWORD* v19;
  int v20;

  v3 = 819353;
  if (*(_BYTE*)(a1 + 128) != 1) {
    return v3;
  }
  if (*(_BYTE*)(a1 + 129) != 1) {
    return 823961;
  }
  if (a2 == 0) {
    return 821401;
  }
  v4 = a3;
  if ((a3 & 0x80000000) != 0) {
    return 823449;
  }
  if (a3 != 0) {
    return (unsigned int)nn_sf_cmif_client_2b2fa0(a1, a2, 0,
                                                  *(_QWORD*)(a1 + 96), v4, 1);
  }
  v5 = a2;
  v6 = a1;
  nn_audio_driver_InvalidateDataCache_plt(*(_QWORD*)(a1 + 32),
                                          *(_QWORD*)(a1 + 40));
  v7 = *(_DWORD*)(*(_QWORD*)(v6 + 48) + 4LL);
  if ((v7 & 0x80000000) != 0 ||
      (v8 = *(_DWORD*)(v6 + 116), a1 = v6, (int)v7 >= v8) ||
      ((v9 = *(_DWORD*)(*(_QWORD*)(v6 + 32) + 4LL)) & 0x80000000) != 0 ||
      (int)v9 >= v8) {
    v20 = 1177;
    a1 = nn_diag_detail_AbortImpl_plt_858db0(&v20);
  }
  else {
    v10 = v7 >= v9;
    v11 = v7 - v9;
    if (v10) {
      v12 = 0;
    }
    else {
      v12 = *(_DWORD*)(v6 + 116);
    }
    if ((*(_BYTE*)(v6 + 128) & 1) != 0) {
      a2 = v5;
      v4 = v8 + ~(v11 + v12);
      return (unsigned int)nn_sf_cmif_client_2b2fa0(a1, a2, 0,
                                                    *(_QWORD*)(a1 + 96), v4, 1);
    }
  }
  v14 = (_DWORD*)nn_diag_detail_AbortImpl_plt_856170(a1);
  *v14 = 0;
  if ((*(_BYTE*)(v15 + 464) & 1) == 0) {
    result = nn_diag_detail_AbortImpl_plt_856170(v14);
    goto LABEL_32;
  }
  v17 = v16;
  v18 = v15;
  v19 = v14;
  if ((*(_BYTE*)(v15 + 465) & 1) != 0) {
    result = (*(__int64 (**)(_QWORD, _DWORD*, _QWORD))(
        **(_QWORD**)(v15 + 32) + 120LL))(*(_QWORD*)(v15 + 32), v14, v16);
    if ((_DWORD)result != 0) {
      return result;
    }
    goto LABEL_26;
  }
  result = sysmix_2b1ac0_alt1(v15 + 336, v14, v16);
  if ((_DWORD)result == 0) {
  LABEL_26:
    if (v17 == 0) {
      v17 = *(_DWORD*)(v18 + 24);
    }
    if ((*v19 & 0x80000000) == 0 && *v19 <= v17) {
      return 0;
    }
  LABEL_32:
    nn_diag_detail_AbortImpl_plt_856170(result);
    __udf(0);
  }
  return result;
}

__int64 sysmix_2b1ac0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = 819353;
  if (*(_BYTE*)(a1 + 128) != 1) {
    return v3;
  }
  if ((*(_BYTE*)(a1 + 129) & 1) != 0) {
    return 823961;
  }
  if (a2 == 0) {
    return 821401;
  }
  if (a3 < 0) {
    return 823449;
  }
  if (a3 == 0) {
    v5 = a2;
    v6 = a1;
    nn_audio_driver_InvalidateDataCache_plt(*(_QWORD*)(a1 + 48),
                                            *(_QWORD*)(a1 + 56));
    v7 = *(_DWORD*)(*(_QWORD*)(v6 + 48) + 4LL);
    if (v7 < 0 || (v8 = *(_DWORD*)(v6 + 116), a1 = v6, v7 >= v8) ||
        (v9 = *(_DWORD*)(*(_QWORD*)(v6 + 32) + 4LL)) < 0 || v9 >= v8) {
      v10 = 1177;
      nn_diag_detail_AbortImpl_plt_858db0(&v10);
    }
    if ((*(_BYTE*)(v6 + 128) & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v6);
    }
    a2 = v5;
  }
  return (
      (__int64 (*)(__int64, __int64, _QWORD, _QWORD, _QWORD))SdkRoutine_2b3b00)(
      a1, a2, 0, *(_QWORD*)(a1 + 96), 0);
}

#pragma GCC visibility pop
