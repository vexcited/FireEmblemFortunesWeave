#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_179c60();
__int64 SdkRoutine_179c60_alt1(__int64, _QWORD*, __int64*, __int64, __int64,
                               __int64, __int64, __int64, __int64, __int64,
                               __int64, __int64) __asm__("SdkRoutine_179c60");
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_e3940(__int64, unsigned int*);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_17a3a0(__int64 a1, unsigned int* a2, int a3,
                          unsigned int a4);
__int64 nn_sf_hipc_17a720(__int64 a1, unsigned int* a2);
__int64 nn_sf_hipc_17aa70(__int64 a1, _WORD* a2);

__int64 nn_sf_hipc_17a3a0(__int64 a1, unsigned int* a2, int a3, unsigned int a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  unsigned __int8* i;
  int v12;
  unsigned __int8* v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  int v21;
  unsigned int* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  _BYTE* v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  char v34;
  unsigned int v35;
  int v36;
  _QWORD v37[2];
  struct {
    _QWORD v38[2];
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
  } v38_;
  _QWORD v44[2];
  _QWORD v45[3];
  struct {
    int v46;
    unsigned int v47;
    unsigned int* v48;
    __int64 v49;
  } v46_;
  struct {
    _QWORD v50[3];
    __int64 v51;
    __int64 v52;
    __int64 v53;
  } v50_;
  _QWORD v54[4];
  _QWORD v55[2];

  memset(v54, 0, sizeof(v54));
  v46_.v46 = 7;
  v46_.v47 = a1;
  v50_.v52 = 0;
  v50_.v53 = 0;
  v50_.v51 = 0;
  memset(v50_.v50, 0, sizeof(v50_.v50));
  v44[1] = 0;
  memset(v45, 0, sizeof(v45));
  v38_.v43 = 0;
  v44[0] = 0x20000;
  v38_.v41 = 1048596;
  v38_.v42 = 256;
  v38_.v38[0] = 0x100000000LL;
  v38_.v38[1] = 0x900000000LL;
  v37[0] = 1;
  v37[1] = 36;
  v38_.v39 = 0;
  v38_.v40 = 0xB000002000000LL;
  result = nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v55[0] = (char*)v38_.v38 + 4;
  v55[1] = result;
  v46_.v48 = (unsigned int*)result;
  v46_.v49 = result + 8;
  *(_QWORD*)result = 0x900000007LL;
  if (BYTE5(v38_.v38[0]) == 1) {
    *(_DWORD*)(result + 8) = v38_.v39;
  }
  if ((_BYTE)v38_.v42 != 0) {
    return 523;
  }
  if (BYTE5(v38_.v41) == 0 ||
      (_DWORD)(result = ((__int64 (*)(int*, _QWORD*, _QWORD*,
                                      _QWORD*))SdkRoutine_179c60)(
                   &v46_.v46, v55, v45, v37)) == 0) {
    v8 = BYTE1(v38_.v42);
    LODWORD(v50_.v53) = HIBYTE(v38_.v41);
    HIDWORD(v50_.v53) = BYTE1(v38_.v42);
    if (BYTE1(v38_.v42) != 0) {
      v9 = BYTE1(v38_.v42) & 7;
      v10 = v54;
      for (i = (unsigned __int8*)v44 + 2; v9 != 0; ++v10) {
        v12 = *i++;
        --v9;
        *v10 = v12;
      }
      if ((unsigned int)v8 >= 8) {
        v13 = (unsigned __int8*)v44 + v8 + 2;
        do {
          v14 = i[1];
          v15 = i[2];
          *v10 = *i;
          v10[1] = v14;
          v16 = i[3];
          v17 = i[5];
          v10[2] = v15;
          v10[3] = v16;
          v10[4] = i[4];
          v10[5] = v17;
          v18 = i[6];
          v19 = i[7];
          i += 8;
          v10[6] = v18;
          v10[7] = v19;
          v10 += 8;
        } while (i != v13);
      }
    }
    v20 = (v46_.v49 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD*)v20 = 0x149434653LL;
    *(_QWORD*)(v20 + 8) = a4;
    *(_DWORD*)(v20 + 16) = a3;
    v21 = nn_sf_cmif_GetInlineContext_plt(result);
    *(_DWORD*)((char*)((__int64*)0xCLL) +
               ((v46_.v49 + 15) & 0xFFFFFFFFFFFFFFF0LL)) = v21;
    v22 = v46_.v48;
    result = nn_sf_hipc_SendSyncRequest_plt(v46_.v47, v46_.v48, 256);
    if ((_DWORD)result == 0) {
      v23 = nn_sf_e3940((__int64)v50_.v50, v22);
      if (WORD2(v50_.v52) >= 0x41u) {
        nn_diag_detail_AbortImpl_plt_856170(v23);
      }
      if (*(_DWORD*)((v50_.v50[0] + 4LL * BYTE1(v50_.v52) + 15) &
                     0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
        result = *(unsigned int*)((char*)((__int64*)0x4LL) +
                                  ((v50_.v50[0] + 4LL * BYTE1(v50_.v52) + 15) &
                                   0xFFFFFFFFFFFFFFF0LL) +
                                  4);
        if ((_DWORD)result == 0) {
          v37[0] = 0;
          if (SHIDWORD(v50_.v53) < 1) {
            v34 = 0;
            LODWORD(v24) = 0;
          }
          else {
            v24 = 0;
            v25 = 0;
            v26 = 0;
            v27 = 0;
            v28 = (char*)v37 + 4;
            do {
              while (1) {
                v29 = *((_DWORD*)v54 + v25);
                if ((v29 & 1) != 0) {
                  break;
                }
                if ((v29 & 2) == 0) {
                  nn_diag_detail_AbortImpl_plt_856170(v24);
                }
                v30 = *(_DWORD*)(v50_.v50[0] +
                                 4LL * (int)(v50_.v53 + v27 + BYTE4(v50_.v51)));
                v31 = (unsigned __int8)*v28;
                *v28 = 1;
                if (v31 == 1) {
                  nn_os_CloseNativeHandle_plt(v24);
                }
                ++v27;
                ++v25;
                v28 += 8;
                v24 = v30;
                if (v25 >= SHIDWORD(v50_.v53)) {
                  goto LABEL_29;
                }
              }
              v32 = *(_DWORD*)(v50_.v50[0] + 4LL * (v26 + BYTE3(v50_.v51)));
              v33 = (unsigned __int8)*v28;
              *v28 = 1;
              if (v33 == 1) {
                nn_os_CloseNativeHandle_plt(v24);
              }
              ++v26;
              ++v25;
              v28 += 8;
              v24 = v32;
            } while (v25 < SHIDWORD(v50_.v53));
          LABEL_29:
            v34 = BYTE4(v37[0]);
          }
          v35 = *a2;
          v36 = *((unsigned __int8*)a2 + 4);
          *a2 = v24;
          *((_BYTE*)a2 + 4) = v34;
          if (v36 == 1) {
            nn_os_CloseNativeHandle_plt(v35);
          }
          return 0;
        }
      }
      else {
        return 108554;
      }
    }
  }
  return result;
}

__int64 nn_sf_hipc_17a720(__int64 a1, unsigned int* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  unsigned __int8* i;
  int v12;
  unsigned __int8* v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  _QWORD* v20;
  int v21;
  unsigned int* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  _BYTE* v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  char v34;
  unsigned int v35;
  int v36;
  __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  struct {
    __int64 v40[2];
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
  } v40_;
  _QWORD v46[2];
  __int64 v47[3];
  struct {
    int v48;
    unsigned int v49;
    unsigned int* v50;
    __int64 v51;
  } v48_;
  struct {
    _QWORD v52[3];
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v52_;
  _QWORD v56[4];
  _QWORD v57[2];

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  memset(v56, 0, sizeof(v56));
  v52_.v54 = 0;
  v52_.v55 = 0;
  v52_.v53 = 0;
  memset(v52_.v52, 0, sizeof(v52_.v52));
  v46[1] = 0;
  memset(v47, 0, sizeof(v47));
  v48_.v48 = 7;
  v48_.v49 = a1;
  v40_.v45 = 0;
  v46[0] = 0x20000;
  v40_.v43 = 1048592;
  v40_.v44 = 256;
  v40_.v40[0] = 0x100000000LL;
  v40_.v40[1] = 0x800000000LL;
  v38_.v38 = 1;
  v38_.v39 = 32;
  v40_.v41 = 0;
  v40_.v42 = 0xA000002000000LL;
  result = nn_sf_hipc_GetMessageBufferOnTls_plt(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v57[0] = (char*)v40_.v40 + 4;
  v57[1] = result;
  v48_.v50 = (unsigned int*)result;
  v48_.v51 = result + 8;
  *(_QWORD*)result = 0x800000007LL;
  if (BYTE5(v40_.v40[0]) == 1) {
    *(_DWORD*)(result + 8) = v40_.v41;
  }
  if ((_BYTE)v40_.v44 != 0) {
    return 523;
  }
  if (BYTE5(v40_.v43) == 0 ||
      (_DWORD)(result = SdkRoutine_179c60_alt1(
                   (__int64)&v48_.v48, v57, v47, (__int64)&v38_.v38, v4, v5, v6,
                   v7, v37, v38_.v38, v38_.v39, v40_.v40[0])) == 0) {
    v8 = BYTE1(v40_.v44);
    LODWORD(v52_.v55) = HIBYTE(v40_.v43);
    HIDWORD(v52_.v55) = BYTE1(v40_.v44);
    if (BYTE1(v40_.v44) != 0) {
      v9 = BYTE1(v40_.v44) & 7;
      v10 = v56;
      for (i = (unsigned __int8*)v46 + 2; v9 != 0; ++v10) {
        v12 = *i++;
        --v9;
        *v10 = v12;
      }
      if ((unsigned int)v8 >= 8) {
        v13 = (unsigned __int8*)v46 + v8 + 2;
        do {
          v14 = i[1];
          v15 = i[2];
          *v10 = *i;
          v10[1] = v14;
          v16 = i[3];
          v17 = i[5];
          v10[2] = v15;
          v10[3] = v16;
          v10[4] = i[4];
          v10[5] = v17;
          v18 = i[6];
          v19 = i[7];
          i += 8;
          v10[6] = v18;
          v10[7] = v19;
          v10 += 8;
        } while (i != v13);
      }
    }
    v20 = (_QWORD*)((v48_.v51 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    *v20 = 0x149434653LL;
    v20[1] = 2;
    v21 = nn_sf_cmif_GetInlineContext_plt(result),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_DWORD*)((char*)((__int64*)0xCLL) +
               ((v48_.v51 + 15) & 0xFFFFFFFFFFFFFFF0LL)) = v21;
    v22 = v48_.v50;
    result = nn_sf_hipc_SendSyncRequest_plt(v48_.v49, v48_.v50, 256),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((_DWORD)result == 0) {
      v23 = nn_sf_e3940((__int64)v52_.v52, v22),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (WORD2(v52_.v54) >= 0x41u) {
        nn_diag_detail_AbortImpl_plt_856170(v23),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if (*(_DWORD*)((v52_.v52[0] + 4LL * BYTE1(v52_.v54) + 15) &
                     0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
        result = *(unsigned int*)((char*)((__int64*)0x4LL) +
                                  ((v52_.v52[0] + 4LL * BYTE1(v52_.v54) + 15) &
                                   0xFFFFFFFFFFFFFFF0LL) +
                                  4);
        if ((_DWORD)result == 0) {
          v38_.v38 = 0;
          if (SHIDWORD(v52_.v55) < 1) {
            v34 = 0;
            LODWORD(v24) = 0;
          }
          else {
            v24 = 0;
            v25 = 0;
            v26 = 0;
            v27 = 0;
            v28 = (char*)&v38_.v38 + 4;
            do {
              while (1) {
                v29 = *((_DWORD*)v56 + v25);
                if ((v29 & 1) != 0) {
                  break;
                }
                if ((v29 & 2) == 0) {
                  nn_diag_detail_AbortImpl_plt_856170(v24),
                      v4 = COERCE_AS(
                          __typeof__(v4),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v5 = COERCE_AS(
                          __typeof__(v5),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v6 = COERCE_AS(
                          __typeof__(v6),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v7 = COERCE_AS(
                          __typeof__(v7),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                }
                v30 = *(_DWORD*)(v52_.v52[0] +
                                 4LL * (int)(v52_.v55 + v27 + BYTE4(v52_.v53)));
                v31 = (unsigned __int8)*v28;
                *v28 = 1;
                if (v31 == 1) {
                  nn_os_CloseNativeHandle_plt(v24),
                      v4 = COERCE_AS(
                          __typeof__(v4),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v5 = COERCE_AS(
                          __typeof__(v5),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v6 = COERCE_AS(
                          __typeof__(v6),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v7 = COERCE_AS(
                          __typeof__(v7),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                }
                ++v27;
                ++v25;
                v28 += 8;
                v24 = v30;
                if (v25 >= SHIDWORD(v52_.v55)) {
                  goto LABEL_29;
                }
              }
              v32 = *(_DWORD*)(v52_.v52[0] + 4LL * (v26 + BYTE3(v52_.v53)));
              v33 = (unsigned __int8)*v28;
              *v28 = 1;
              if (v33 == 1) {
                nn_os_CloseNativeHandle_plt(v24),
                    v4 = COERCE_AS(
                        __typeof__(v4),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v5 = COERCE_AS(
                        __typeof__(v5),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v6 = COERCE_AS(
                        __typeof__(v6),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v7 = COERCE_AS(
                        __typeof__(v7),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              ++v26;
              ++v25;
              v28 += 8;
              v24 = v32;
            } while (v25 < SHIDWORD(v52_.v55));
          LABEL_29:
            v34 = BYTE4(v38_.v38);
          }
          v35 = *a2;
          v36 = *((unsigned __int8*)a2 + 4);
          *a2 = v24;
          *((_BYTE*)a2 + 4) = v34;
          if (v36 == 1) {
            nn_os_CloseNativeHandle_plt(v35),
                v4 = COERCE_AS(__typeof__(v4),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          return 0;
        }
      }
      else {
        return 108554;
      }
    }
  }
  return result;
}

__int64 nn_sf_hipc_17aa70(__int64 a1, _WORD* a2)
{
  _QWORD* v3;
  __int64 result;
  __int64 v5;
  unsigned int v6;
  unsigned int* v7;
  struct {
    _QWORD v8[4];
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v8_;

  v8_.v13 = 0;
  v8_.v14 = 0;
  v8_.v11 = 0;
  v8_.v12 = 0;
  v8_.v9 = 0;
  memset(v8_.v8, 0, sizeof(v8_.v8));
  v6 = a1;
  v7 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  *(_QWORD*)v7 = 0x800000007LL;
  v8_.v10 = 0;
  v3 = (_QWORD*)(((unsigned __int64)v7 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  *v3 = 0x149434653LL;
  v3[1] = 3;
  *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v3) =
      nn_sf_cmif_GetInlineContext_plt((char*)v7 + 23);
  result = nn_sf_hipc_SendSyncRequest_plt(v6, v7, 256);
  if ((_DWORD)result == 0) {
    v5 = nn_sf_e3940((__int64)v8_.v8, v7);
    if (WORD2(v8_.v9) >= 0x41u) {
      nn_diag_detail_AbortImpl_plt_856170(v5);
    }
    if (*(_DWORD*)((v8_.v8[0] + 4LL * BYTE1(v8_.v9) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      result = *(unsigned int*)((char*)((__int64*)0x4LL) +
                                ((v8_.v8[0] + 4LL * BYTE1(v8_.v9) + 15) &
                                 0xFFFFFFFFFFFFFFF0LL) +
                                4);
      if ((_DWORD)result == 0) {
        *a2 = *(_WORD*)((char*)((__int64*)0xCLL) +
                        ((v8_.v8[0] + 4LL * BYTE1(v8_.v9) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      }
    }
    else {
      return 108554;
    }
  }
  return result;
}

#pragma GCC visibility pop
