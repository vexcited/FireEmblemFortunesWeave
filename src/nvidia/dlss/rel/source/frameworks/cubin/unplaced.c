#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CopyHostToDeviceBuffer(_QWORD*, __int64, __int64, __int64,
                               unsigned __int64, unsigned __int64);
__int64 CreateBufferResource(__int64*, __int64, _QWORD*, __int64, int);
__int64 NgxRoutine_29120(__int64*, unsigned __int64);
__int64 NgxRoutine_29320(__int64*, __int64, unsigned __int64);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_420_alt1(_QWORD) __asm__("NgxRoutine_420");
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_baf10(_QWORD);
__int64 NgxRoutine_baf70(_QWORD, _QWORD);
__int64 NgxRoutine_baf70_alt1(__int64, __int64) __asm__("NgxRoutine_baf70");
__int64 genericPostInit(__int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 ngx_cubin_generic_a40a0(__int64);
__int64 ngx_cubin_generic_a4110(_QWORD*);
__int64 ngx_cubin_generic_a46c0(_QWORD*, __int64, unsigned __int64, __int64,
                                unsigned int);
__int64 ngx_cubin_kernel_map_a7830(__int64, char);
__int64 nvidia_dlss_a8840(_QWORD);
__int64 nvidia_dlss_a8d00(_QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6ae0_alt1(
    _QWORD, _QWORD) __asm__("nvidia_dlss_rel_source_frameworks_cubin_a6ae0");
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6cc0_alt1(
    _QWORD, _QWORD) __asm__("nvidia_dlss_rel_source_frameworks_cubin_a6cc0");
__int64 strlen_plt(_QWORD);
__int64* nvidia_dlss_rel_source_features_dlaa_65660(__int64* result, __int64*);
extern _QWORD NgxData_f77b8[28];
extern _UNKNOWN* NgxData_952ba0;
extern __int64 (*NgxData_94e790[])();
extern __int64 NgxData_2b6aee0;
extern __int64 NgxData_952ba8;
extern __int64 NgxData_952c18[4];
extern __int64 NgxData_952c20[3];
extern __int64 NgxData_952c30;
extern __int64* NgxData_952bb8[2];
extern unsigned int NgxData_f7898[28];
unsigned __int64 NgxRoutine_e2400(unsigned __int64);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a5d40(__int64 a1);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a5d80(
    __int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5,
    unsigned __int64* a6, int a7, int a8, float a9, float a10, __int64 a11,
    __int64 a12);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6330(__int64 a1, int a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6340(__int64 a1, int a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6360(_QWORD* a1);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a64f0(__int64 a1, _QWORD* a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6500(__int64 a1, int a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6510(float a1, __int64 a2,
                                                      unsigned int a3,
                                                      _QWORD* a4, __int64 a5);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a65d0(double a1, __int64 a2,
                                                      unsigned int a3,
                                                      _QWORD* a4, __int64 a5);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6690(__int64 a1,
                                                      unsigned int a2, int a3,
                                                      _QWORD* a4, __int64 a5);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6740(__int64 a1,
                                                      unsigned int a2, int a3,
                                                      _QWORD* a4, __int64 a5);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a67f0(__int64 a1,
                                                      unsigned int a2,
                                                      __int64 a3, _QWORD* a4,
                                                      __int64 a5);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a68b0(float a1, float a2,
                                                      __int64 a3,
                                                      unsigned int a4,
                                                      _QWORD* a5, __int64 a6);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6980(float a1, float a2,
                                                      float a3, float a4,
                                                      __int64 a5,
                                                      unsigned int a6,
                                                      _QWORD* a7, __int64 a8);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6a70(__int64 a1, _DWORD* a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6a80(__int64 a1, _DWORD* a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6ab0(__int64 a1,
                                                      unsigned __int64* a2,
                                                      _QWORD* a3);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6ae0(__int64 result,
                                                      _QWORD* a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6b60(__int64* a1, __int64* a2);
__int64** nvidia_dlss_rel_source_frameworks_cubin_a6cc0(__int64** result,
                                                        __int64* a2);
__int64* nvidia_dlss_rel_source_frameworks_cubin_a7100(__int64** a1,
                                                       unsigned __int64* a2,
                                                       __int64* a3,
                                                       __int64* a4);
_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7260(_QWORD* a1, __int64* a2);
_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a73c0(__int64 a1, __int64* a2,
                                                      __int64* a3);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7720(_QWORD* a1,
                                                      unsigned __int64* a2);
_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7910();
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7960(__int64 a1, __int64 a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7a40(_QWORD* a1);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7b40(__int64 a1, __int64 a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7bf0(__int64 a1, __int64* a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7c60(__int64 a1, _QWORD* a2);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7cf0(__int64 a1, _DWORD* a2);

__int64 nvidia_dlss_rel_source_frameworks_cubin_a5d40(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 504LL))(a1);
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a5d80(
    __int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5,
    unsigned __int64* a6, int a7, int a8, float a9, float a10, __int64 a11,
    __int64 a12)
{
  __int64 result;
  bool v23;
  _BOOL4 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  bool v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  _DWORD v61[4];
  __int64 v62;
  __int64 v63;
  __int64 v64;
  float v65;
  _DWORD v66[3];

  result = (*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)a1 + 104LL))(a1, v66);
  if ((_DWORD)result == 0) {
    result = 4294967282LL;
    v23 = a2 != 0 || v66[0] == 3;
    v24 = v23;
    if (a5 != 0 && v24) {
      v26 = a1 + 96;
      v25 = *(_QWORD*)(a1 + 96);
      if (v25 != 0) {
        v27 = *a6;
        v28 = a1 + 96;
        do {
          v29 = *(_QWORD*)(v25 + 32);
          v30 = v29 >= v27;
          if (v29 >= v27) {
            v31 = 0;
          }
          else {
            v31 = 8;
          }
          if (v30) {
            v28 = v25;
          }
          v25 = *(_QWORD*)(v25 + v31);
        } while (v25 != 0);
        if (v28 != v26 && v27 >= *(_QWORD*)(v28 + 32) &&
            *(_BYTE*)(v28 + 100) == 1) {
          v51 = *(_DWORD*)(v28 + 104);
          (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 616LL))(a1, a2);
          *(_BYTE*)(v28 + 100) = 0;
          *(_DWORD*)(v28 + 96) = v51;
        }
      }
      v32 = strlen_plt(a5);
      v33 = v32;
      if ((unsigned int)v32 >> 14 != 0) {
        return 4294967291LL;
      }
      if ((_DWORD)v32 == 0) {
        return 0;
      }
      v52 = v32;
      if (*(_QWORD*)(a1 + 688) != 0 ||
          (result = (*(__int64 (**)(__int64, _QWORD, _QWORD, const char*,
                                    __int64, __int64, __int64, __int64, int,
                                    _QWORD))(*(_QWORD*)a1 + 120LL))(
               a1, *(_QWORD*)(a1 + 120), *(unsigned int*)(a1 + 128),
               "cuda_font_kernel", 1, a1 + 688, 8, 13, 1, 0),
           v33 = v52, (_DWORD)result == 0)) {
        v34 = *(unsigned int*)(a1 + 300);
        v35 = a1 + 304;
        if (*(_QWORD*)(a1 + 304 + 8 * v34) != 0) {
          v36 = a1 + 728;
          if ((unsigned int)(*(_DWORD*)(a1 + 728 + 4 * v34) + v33) >= 0x4000) {
          LABEL_30:
            *(_DWORD*)(v36 + 4 * v34) = 0;
          }
        }
        else {
          v57 = 0;
          v53 = 0x1000004D3LL;
          v54 = 0xFFFFFFFFLL;
          v55 = 0x200000001LL;
          v56 = 0x100000001LL;
          result = CreateBufferResource((__int64*)a1, (__int64)&v53,
                                        (_QWORD*)(v35 + 8 * v34),
                                        (__int64)"FontTexture", -1);
          if ((_DWORD)result != 0) {
            return result;
          }
          v57 = 0;
          v53 = 0x100004000LL;
          v54 = 0xFFFFFFFFLL;
          v55 = 0x200000001LL;
          v56 = 0x100000001LL;
          result = CreateBufferResource(
              (__int64*)a1, (__int64)&v53,
              (_QWORD*)(a1 + 432 + 8LL * *(unsigned int*)(a1 + 300)),
              (__int64)"DynamicText", -1);
          if ((_DWORD)result != 0) {
            return result;
          }
          v57 = 0;
          v53 = 0x100004000LL;
          v54 = 0xFFFFFFFFLL;
          v55 = 0x200000001LL;
          v56 = 0x100000002LL;
          result = CreateBufferResource(
              (__int64*)a1, (__int64)&v53,
              (_QWORD*)(a1 + 560 + 8LL * *(unsigned int*)(a1 + 300)),
              (__int64)"DynamicTextUpload", -1);
          if ((_DWORD)result != 0) {
            return result;
          }
          result = CopyHostToDeviceBuffer(
              (_QWORD*)a1, a2, 1235, (__int64)NgxData_952ba0,
              *(_QWORD*)(a1 + 560 + 8LL * *(unsigned int*)(a1 + 300)),
              *(_QWORD*)(a1 + 304 + 8LL * *(unsigned int*)(a1 + 300)));
          if ((_DWORD)result != 0) {
            return result;
          }
          result = ngx_cubin_generic_a46c0(
              (_QWORD*)a1, a2,
              *(_QWORD*)(a1 + 432 + 8LL * *(unsigned int*)(a1 + 300)), 0, 8u);
          if ((_DWORD)result != 0) {
            return result;
          }
          v34 = *(unsigned int*)(a1 + 300);
          LOWORD(v33) = v52;
          v35 = a1 + 304;
          v36 = a1 + 728;
          if ((unsigned int)(*(_DWORD*)(a1 + 728 + 4 * v34) + v52) >= 0x4000) {
            goto LABEL_30;
          }
        }
        v48 = v35;
        v49 = v36;
        v50 = a1 + 432;
        v37 = *(_QWORD*)(a1 + 432 + 8 * v34);
        v38 = *(_QWORD*)(a1 + 96);
        if (v38 == 0) {
          goto LABEL_42;
        }
        v39 = a1 + 96;
        do {
          v40 = *(_QWORD*)(v38 + 32);
          v41 = v40 >= v37;
          if (v40 >= v37) {
            v42 = 0;
          }
          else {
            v42 = 8;
          }
          if (v41) {
            v39 = v38;
          }
          v38 = *(_QWORD*)(v38 + v42);
        } while (v38 != 0);
        if (v39 != v26 && v37 >= *(_QWORD*)(v39 + 32)) {
          if (*(_BYTE*)(v39 + 100) == 1) {
            v44 = *(unsigned int*)(v39 + 96);
            *(_BYTE*)(v39 + 100) = 0;
            if ((_DWORD)v44 == 1024) {
            LABEL_60:
              result = CopyHostToDeviceBuffer(
                  (_QWORD*)a1, a2, v33 & 0x3FFF, a5,
                  *(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 300) + 560),
                  *(_QWORD*)(v50 + 8LL * *(unsigned int*)(a1 + 300)));
              if ((_DWORD)result == 0) {
                result = ngx_cubin_generic_a46c0(
                    (_QWORD*)a1, a2,
                    *(_QWORD*)(v50 + 8LL * *(unsigned int*)(a1 + 300)), 1024,
                    8u);
                if ((_DWORD)result == 0) {
                  result = (*(__int64 (**)(__int64, _QWORD))(
                      *(_QWORD*)a1 + 240LL))(a1, *(_QWORD*)(a1 + 688));
                  if ((_DWORD)result == 0) {
                    v53 = NgxData_952ba8 + 16;
                    v65 = 1.0;
                    memset_plt(&v54, 0, 96);
                    v45 = a6[2];
                    v46 = *a6;
                    v54 = __PAIR64__(a4, a3);
                    v57 = a7;
                    v58 = a8;
                    *(float*)&v61[2] = a9;
                    v65 = a10;
                    v55 = v45;
                    v47 = *((_DWORD*)a6 + 3);
                    LODWORD(v56) = *((_DWORD*)a6 + 2);
                    HIDWORD(v56) = v47;
                    v59 = *(_DWORD*)(v49 + 4LL * *(unsigned int*)(a1 + 300));
                    result =
                        (*(__int64 (**)(__int64, unsigned __int64, __int64*))(
                            *(_QWORD*)a1 + 200LL))(a1, v46, &v60);
                    if ((_DWORD)result == 0) {
                      result = (*(__int64 (**)(__int64, _QWORD, __int64*))(
                          *(_QWORD*)a1 + 208LL))(
                          a1,
                          *(_QWORD*)(v48 + 8LL * *(unsigned int*)(a1 + 300)),
                          &v63);
                      if ((_DWORD)result == 0) {
                        result = (*(__int64 (**)(__int64, _QWORD, __int64*))(
                            *(_QWORD*)a1 + 208LL))(
                            a1,
                            *(_QWORD*)(v50 + 8LL * *(unsigned int*)(a1 + 300)),
                            &v64);
                        if ((_DWORD)result == 0) {
                          result = (*(
                              __int64 (**)(__int64, __int64, _DWORD*, __int64))(
                              *(_QWORD*)a1 + 192LL))(a1, a12, v61, 2);
                          if ((_DWORD)result == 0) {
                            result =
                                (*(__int64 (**)(__int64, __int64, __int64*))(
                                    *(_QWORD*)a1 + 208LL))(a1, a11, &v62);
                            if ((_DWORD)result == 0) {
                              result = (*(__int64 (**)(
                                  __int64, __int64*, __int64, __int64, __int64,
                                  __int64))(*(_QWORD*)a1 + 344LL))(a1, &v53, a2,
                                                                   v52, 1, 1);
                              if ((_DWORD)result == 0) {
                                *(_DWORD*)(v49 +
                                           4LL * *(unsigned int*)(a1 + 300)) =
                                    ((unsigned __int16)*(
                                         _DWORD*)(v49 +
                                                  4LL * *(unsigned int*)(a1 +
                                                                         300)) +
                                     (_WORD)v52) &
                                    0x3FFF;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              return result;
            }
          }
          else {
            v44 = 8;
          }
          v43 = 1;
          v26 = v39;
        }
        else {
        LABEL_42:
          v43 = 0;
          v44 = 8;
        }
        result = (*(__int64 (**)(__int64, __int64, unsigned __int64, __int64,
                                 __int64))(*(_QWORD*)a1 + 616LL))(a1, a2, v37,
                                                                  v44, 1024);
        if (v43 == 0 || (_DWORD)result != 0) {
          LOWORD(v33) = v52;
          if ((_DWORD)result != 0) {
            return result;
          }
        }
        else {
          *(_DWORD*)(v26 + 96) = 1024;
          LOWORD(v33) = v52;
        }
        goto LABEL_60;
      }
    }
  }
  return result;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6330(__int64 a1, int a2)
{
  return NgxData_f77b8[a2];
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6340(__int64 a1, int a2)
{
  return NgxData_f7898[a2];
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6360(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 result;

  v2 = a1[34];
  *a1 = NgxData_952bb8[0] + 2;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    NgxRoutine_baf10(v2);
  }
  v3 = a1[32];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    NgxRoutine_baf10(v3);
  }
  v4 = a1[30];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    NgxRoutine_baf10(v4);
  }
  v5 = a1[28];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    NgxRoutine_baf10(v5);
  }
  nvidia_dlss_rel_source_frameworks_cubin_a6ae0_alt1(a1 + 11, a1[12]);
  v6 = (_QWORD*)a1[8];
  if (v6 != nullptr) {
    do {
      v7 = (_QWORD*)*v6;
      NgxRoutine_430(v6, 40);
      v6 = v7;
    } while (v7 != nullptr);
  }
  v8 = a1[6];
  a1[6] = 0;
  if (v8 != 0) {
    NgxRoutine_430(v8, 8LL * a1[7]);
  }
  v9 = (_QWORD*)a1[3];
  if (v9 != nullptr) {
    do {
      v10 = (_QWORD*)*v9;
      NgxRoutine_430(v9, 32);
      v9 = v10;
    } while (v10 != nullptr);
  }
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return NgxRoutine_430(result, 8LL * a1[2]);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a64f0(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = a1 + 200;
  *a2 = v2;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6500(__int64 a1, int a2)
{
  *(_DWORD*)(a1 + 832) = a2;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6510(float a1, __int64 a2,
                                                      unsigned int a3,
                                                      _QWORD* a4, __int64 a5)
{
  __int64 v10;
  float v11;

  if (a4 == nullptr) {
    return 4294967291LL;
  }
  if (a3 >= (*(unsigned int (**)(_QWORD*))(*a4 + 8LL))(a4)) {
    return 4294967291LL;
  }
  v10 = a4[2] + 40LL * a3;
  v11 = *(float*)(v10 + 8);
  *(float*)(v10 + 8) = a1;
  *(_DWORD*)(v10 + 4) = 5;
  *(_BYTE*)v10 = v11 != a1;
  **(_BYTE**)(v10 + 32) |= v11 != a1;
  *(_QWORD*)(a4[2] + 40LL * a3 + 24) = a5;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a65d0(double a1, __int64 a2,
                                                      unsigned int a3,
                                                      _QWORD* a4, __int64 a5)
{
  __int64 v10;
  double v11;

  if (a4 == nullptr) {
    return 4294967291LL;
  }
  if (a3 >= (*(unsigned int (**)(_QWORD*))(*a4 + 8LL))(a4)) {
    return 4294967291LL;
  }
  v10 = a4[2] + 40LL * a3;
  v11 = *(double*)(v10 + 8);
  *(double*)(v10 + 8) = a1;
  *(_DWORD*)(v10 + 4) = 8;
  *(_BYTE*)v10 = v11 != a1;
  **(_BYTE**)(v10 + 32) |= v11 != a1;
  *(_QWORD*)(a4[2] + 40LL * a3 + 24) = a5;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6690(__int64 a1,
                                                      unsigned int a2, int a3,
                                                      _QWORD* a4, __int64 a5)
{
  __int64 v10;
  int v11;

  if (a4 == nullptr) {
    return 4294967291LL;
  }
  if (a2 >= (*(unsigned int (**)(_QWORD*))(*a4 + 8LL))(a4)) {
    return 4294967291LL;
  }
  v10 = a4[2] + 40LL * a2;
  v11 = *(_DWORD*)(v10 + 8);
  *(_DWORD*)(v10 + 4) = 3;
  *(_DWORD*)(v10 + 8) = a3;
  LOBYTE(v11) = v11 != a3;
  *(_BYTE*)v10 = v11;
  **(_BYTE**)(v10 + 32) |= v11;
  *(_QWORD*)(a4[2] + 40LL * a2 + 24) = a5;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6740(__int64 a1,
                                                      unsigned int a2, int a3,
                                                      _QWORD* a4, __int64 a5)
{
  __int64 v10;
  int v11;

  if (a4 == nullptr) {
    return 4294967291LL;
  }
  if (a2 >= (*(unsigned int (**)(_QWORD*))(*a4 + 8LL))(a4)) {
    return 4294967291LL;
  }
  v10 = a4[2] + 40LL * a2;
  v11 = *(_DWORD*)(v10 + 8);
  *(_DWORD*)(v10 + 4) = 4;
  *(_DWORD*)(v10 + 8) = a3;
  LOBYTE(v11) = v11 != a3;
  *(_BYTE*)v10 = v11;
  **(_BYTE**)(v10 + 32) |= v11;
  *(_QWORD*)(a4[2] + 40LL * a2 + 24) = a5;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a67f0(__int64 a1,
                                                      unsigned int a2,
                                                      __int64 a3, _QWORD* a4,
                                                      __int64 a5)
{
  __int64 v10;
  __int64 v11;

  if (a4 == nullptr) {
    return 4294967291LL;
  }
  if (a2 >= (*(unsigned int (**)(_QWORD*))(*a4 + 8LL))(a4)) {
    return 4294967291LL;
  }
  v10 = a4[2] + 40LL * a2;
  v11 = *(_QWORD*)(v10 + 8);
  *(_QWORD*)(v10 + 8) = a3;
  *(_DWORD*)(v10 + 4) = 1;
  LOBYTE(v11) = v11 != a3;
  *(_BYTE*)v10 = v11;
  **(_BYTE**)(v10 + 32) |= v11;
  *(_QWORD*)(a4[2] + 40LL * a2 + 24) = a5;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a68b0(float a1, float a2,
                                                      __int64 a3,
                                                      unsigned int a4,
                                                      _QWORD* a5, __int64 a6)
{
  __int64 result;
  __int64 v12;
  float v13;
  float v14;
  _BYTE* v15;
  bool v16;

  if (a5 == nullptr) {
    return 4294967291LL;
  }
  if (a4 >= (*(unsigned int (**)(_QWORD*))(*a5 + 8LL))(a5)) {
    return 4294967291LL;
  }
  result = 0;
  v12 = a5[2] + 40LL * a4;
  v13 = *(float*)(v12 + 8);
  v14 = *(float*)(v12 + 12);
  *(_DWORD*)(v12 + 4) = 6;
  v15 = *(_BYTE**)(v12 + 32);
  *(float*)(v12 + 8) = a1;
  *(float*)(v12 + 12) = a2;
  *(_QWORD*)(v12 + 24) = a6;
  v16 = v13 != a1;
  if (v14 != a2) {
    v16 = true;
  }
  *(_BYTE*)v12 = v16;
  *v15 |= v16;
  return result;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6980(float a1, float a2,
                                                      float a3, float a4,
                                                      __int64 a5,
                                                      unsigned int a6,
                                                      _QWORD* a7, __int64 a8)
{
  __int64 result;
  __int64 v16;
  float v17;
  float v18;
  _BYTE* v19;
  bool v20;
  bool v21;
  float v22;
  float v23;

  if (a7 == nullptr) {
    return 4294967291LL;
  }
  if (a6 >= (*(unsigned int (**)(_QWORD*))(*a7 + 8LL))(a7)) {
    return 4294967291LL;
  }
  result = 0;
  v16 = a7[2] + 40LL * a6;
  v17 = *(float*)(v16 + 8);
  v18 = *(float*)(v16 + 12);
  *(_DWORD*)(v16 + 4) = 7;
  v19 = *(_BYTE**)(v16 + 32);
  *(float*)(v16 + 8) = a1;
  *(float*)(v16 + 12) = a2;
  *(_QWORD*)(v16 + 24) = a8;
  v20 = v17 != a1;
  v21 = v18 == a2;
  v22 = *(float*)(v16 + 16);
  v23 = *(float*)(v16 + 20);
  *(float*)(v16 + 16) = a3;
  *(float*)(v16 + 20) = a4;
  if (!v21) {
    v20 = true;
  }
  if (v22 != a3) {
    v20 = true;
  }
  if (v23 != a4) {
    v20 = true;
  }
  *(_BYTE*)v16 = v20;
  *v19 |= v20;
  return result;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6a70(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 288);
  *a2 = v2;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6a80(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 292);
  *a2 = v2;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6ab0(__int64 a1,
                                                      unsigned __int64* a2,
                                                      _QWORD* a3)
{
  unsigned __int64 v3;
  __int64 v4;

  v3 = atomic_load((unsigned __int64*)&NgxData_2b6aee0);
  *a2 = v3;
  v4 = *(_QWORD*)(a1 + 824);
  *a3 = v4;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6ae0(__int64 result,
                                                      _QWORD* a2)
{
  __int64 v3;

  if (a2 != nullptr) {
    v3 = result;
    nvidia_dlss_rel_source_frameworks_cubin_a6ae0(result, *a2);
    nvidia_dlss_rel_source_frameworks_cubin_a6ae0(v3, a2[1]);
    if ((a2[14] & 1) != 0) {
      NgxRoutine_430(a2[16], a2[14] & 0xFFFFFFFFFFFFFFFELL);
    }
    return NgxRoutine_430(a2, 144);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a6b60(__int64* a1, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;

  v2 = a1[1];
  v4 = *a2;
  v3 = a2[1];
  v5 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    if (v3 >= v2) {
      v3 %= v2;
    }
  }
  else {
    v3 &= v5;
  }
  v6 = *a1;
  v7 = *(__int64**)(*a1 + 8 * v3);
  do {
    v8 = v7;
    v7 = (__int64*)*v7;
  } while (v7 != a2);
  if (v8 != a1 + 2) {
    v9 = v8[1];
    if ((v2 & v5) != 0) {
      if (v9 >= v2) {
        v9 %= v2;
      }
      v10 = *a2;
      if (v9 == v3) {
      LABEL_12:
        if (v10 == 0) {
          goto LABEL_28;
        }
        goto LABEL_23;
      }
    }
    else {
      v10 = *a2;
      if ((v9 & v5) == v3) {
        goto LABEL_12;
      }
    }
  }
  if (v4 == 0) {
    goto LABEL_22;
  }
  v11 = *(_QWORD*)(v4 + 8);
  if ((v2 & v5) != 0) {
    if (v11 >= v2) {
      v11 %= v2;
    }
    v10 = *a2;
    if (v11 == v3) {
      goto LABEL_23;
    }
  LABEL_22:
    *(_QWORD*)(v6 + 8 * v3) = 0;
    v10 = *a2;
    if (*a2 == 0) {
      goto LABEL_28;
    }
    goto LABEL_23;
  }
  v10 = *a2;
  if ((v11 & v5) != v3) {
    goto LABEL_22;
  }
LABEL_23:
  v12 = *(_QWORD*)(v10 + 8);
  if ((v2 & v5) == 0) {
    v12 &= v5;
    if (v12 == v3) {
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if (v12 >= v2) {
    v12 %= v2;
  }
  if (v12 != v3) {
  LABEL_27:
    *(_QWORD*)(v6 + 8 * v12) = v8;
    v10 = *a2;
  }
LABEL_28:
  v13 = a1[3];
  *v8 = v10;
  *a2 = 0;
  a1[3] = v13 - 1;
  NgxRoutine_430(a2, 40);
  return v4;
}

__int64** nvidia_dlss_rel_source_frameworks_cubin_a6cc0(__int64** result,
                                                        __int64* a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  int v6;
  __int64* v7;
  int v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64** v13;
  __int64*** v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64** v21;
  __int64* v22;
  __int64 v23;
  __int64** v24;
  __int64* v25;
  _QWORD* v26;
  __int64* v27;
  __int64** v28;
  _QWORD* v29;
  __int64* v30;
  __int64 v31;
  __int64** v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64** v36;
  __int64* v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64** v46;
  __int64* v47;

  v2 = *a2;
  v3 = a2;
  if (*a2 != 0) {
    v4 = (__int64*)a2[1];
    if (v4 == nullptr) {
      v3 = a2;
      v5 = (__int64**)a2[2];
      v6 = 0;
      *(_QWORD*)(v2 + 16) = v5;
      v7 = *v5;
      if (a2 == *v5) {
        goto LABEL_10;
      }
    LABEL_6:
      v5[1] = (__int64*)v2;
      v8 = *((unsigned __int8*)v3 + 24);
      if (v3 == a2) {
        goto LABEL_7;
      }
    LABEL_16:
      v9 = (__int64**)a2[2];
      v10 = *v9;
      v3[2] = (__int64)v9;
      if (a2 == v10) {
        *v9 = v3;
        v34 = *a2;
        v11 = a2[1];
        *(_QWORD*)(v34 + 16) = v3;
        *v3 = v34;
        v3[1] = v11;
        if (v11 == 0) {
        LABEL_19:
          if (result == (__int64**)a2) {
            result = (__int64**)v3;
          }
          *((_BYTE*)v3 + 24) = *((_BYTE*)a2 + 24);
          if (result == nullptr) {
            return result;
          }
          goto LABEL_22;
        }
      }
      else {
        v9[1] = v3;
        v12 = *a2;
        v11 = a2[1];
        *(_QWORD*)(v12 + 16) = v3;
        *v3 = v12;
        v3[1] = v11;
        if (v11 == 0) {
          goto LABEL_19;
        }
      }
      *(_QWORD*)(v11 + 16) = v3;
      goto LABEL_19;
    }
    do {
      v3 = v4;
      v4 = (__int64*)*v4;
    } while (v4 != nullptr);
  }
  v2 = v3[1];
  if (v2 == 0) {
    v5 = (__int64**)v3[2];
    v6 = 1;
    v7 = *v5;
    if (v3 == *v5) {
      goto LABEL_10;
    }
    goto LABEL_6;
  }
  v5 = (__int64**)v3[2];
  v6 = 0;
  *(_QWORD*)(v2 + 16) = v5;
  v7 = *v5;
  if (v3 != *v5) {
    goto LABEL_6;
  }
LABEL_10:
  *v5 = (__int64*)v2;
  if (v3 == (__int64*)result) {
    v7 = nullptr;
    result = (__int64**)v2;
    v8 = *((unsigned __int8*)v3 + 24);
    if (v3 != a2) {
      goto LABEL_16;
    }
  }
  else {
    v7 = v5[1];
    v8 = *((unsigned __int8*)v3 + 24);
    if (v3 != a2) {
      goto LABEL_16;
    }
  }
LABEL_7:
  if (result == nullptr) {
    return result;
  }
LABEL_22:
  if (v8 == 0) {
    return result;
  }
  if (v6 == 0) {
    *(_BYTE*)(v2 + 24) = 1;
    return result;
  }
  while (1) {
    v17 = (__int64*)v7[2];
    v18 = (__int64*)*v17;
    if (v7 == (__int64*)*v17) {
      break;
    }
    if ((v7[3] & 1) == 0) {
      v19 = (__int64*)v17[1];
      *((_BYTE*)v7 + 24) = 1;
      *((_BYTE*)v17 + 24) = 0;
      v20 = *v19;
      v17[1] = *v19;
      if (v20 != 0) {
        *(_QWORD*)(v20 + 16) = v17;
      }
      v21 = (__int64**)v17[2];
      v22 = *v21;
      v19[2] = (__int64)v21;
      if (v17 == v22) {
        *v21 = v19;
      }
      else {
        v21[1] = v19;
      }
      *v19 = (__int64)v17;
      v17[2] = (__int64)v19;
      if (result == (__int64**)*v7) {
        result = (__int64**)v7;
      }
      v7 = *(__int64**)(*v7 + 8);
    }
    v26 = (_QWORD*)*v7;
    if (*v7 != 0 && *((_BYTE*)v26 + 24) != 1) {
      v27 = (__int64*)v7[1];
      if (v27 == nullptr) {
        goto LABEL_76;
      }
    LABEL_75:
      if (*((_BYTE*)v27 + 24) == 1) {
      LABEL_76:
        *((_BYTE*)v26 + 24) = 1;
        v35 = v26[1];
        *((_BYTE*)v7 + 24) = 0;
        *v7 = v35;
        if (v35 != 0) {
          *(_QWORD*)(v35 + 16) = v7;
        }
        v36 = (__int64**)v7[2];
        v37 = *v36;
        v26[2] = v36;
        if (v7 == v37) {
          *v36 = v26;
        }
        else {
          v36[1] = v26;
        }
        v26[1] = v7;
        v7[2] = (__int64)v26;
        v27 = v7;
      }
      else {
        v26 = v7;
      }
      v38 = v26[2];
      *((_BYTE*)v26 + 24) = *(_BYTE*)(v38 + 24);
      *(_BYTE*)(v38 + 24) = 1;
      *((_BYTE*)v27 + 24) = 1;
      v39 = *(__int64**)(v38 + 8);
      v40 = *v39;
      *(_QWORD*)(v38 + 8) = *v39;
      if (v40 != 0) {
        *(_QWORD*)(v40 + 16) = v38;
      }
      v41 = *(__int64**)(v38 + 16);
      v42 = *v41;
      v39[2] = (__int64)v41;
      if (v38 == v42) {
        *v41 = (__int64)v39;
      }
      else {
        v41[1] = (__int64)v39;
      }
      *v39 = v38;
      *(_QWORD*)(v38 + 16) = v39;
      return result;
    }
    v27 = (__int64*)v7[1];
    if (v27 != nullptr && *((_BYTE*)v27 + 24) != 1) {
      goto LABEL_75;
    }
    *((_BYTE*)v7 + 24) = 0;
    v13 = (__int64**)v7[2];
    if (v13 == result || ((_BYTE)v13[3] & 1) == 0) {
      goto LABEL_73;
    }
  LABEL_29:
    v15 = (__int64***)v13[2];
    v16 = v13 == *v15;
    v7 = (__int64*)v15[v16];
  }
  if ((v7[3] & 1) == 0) {
    v23 = v18[1];
    *((_BYTE*)v7 + 24) = 1;
    *((_BYTE*)v17 + 24) = 0;
    *v17 = v23;
    if (v23 != 0) {
      *(_QWORD*)(v23 + 16) = v17;
    }
    v24 = (__int64**)v17[2];
    v25 = *v24;
    v18[2] = (__int64)v24;
    if (v17 == v25) {
      *v24 = v18;
    }
    else {
      v24[1] = v18;
    }
    v18[1] = (__int64)v17;
    v17[2] = (__int64)v18;
    v28 = (__int64**)v7[1];
    if (result == v28) {
      result = (__int64**)v7;
    }
    v7 = *v28;
  }
  v29 = (_QWORD*)*v7;
  if (*v7 != 0 && *((_BYTE*)v29 + 24) != 1) {
    goto LABEL_81;
  }
  v30 = (__int64*)v7[1];
  if (v30 == nullptr || *((_BYTE*)v30 + 24) == 1) {
    *((_BYTE*)v7 + 24) = 0;
    v13 = (__int64**)v7[2];
    if (*((_BYTE*)v13 + 24) != 1 || v13 == result) {
    LABEL_73:
      *((_BYTE*)v13 + 24) = 1;
      return result;
    }
    goto LABEL_29;
  }
  if (v29 == nullptr) {
    goto LABEL_66;
  }
  if (*((_BYTE*)v29 + 24) == 1) {
    v30 = (__int64*)v7[1];
  LABEL_66:
    *((_BYTE*)v30 + 24) = 1;
    v31 = *v30;
    *((_BYTE*)v7 + 24) = 0;
    v7[1] = v31;
    if (v31 != 0) {
      *(_QWORD*)(v31 + 16) = v7;
    }
    v32 = (__int64**)v7[2];
    v33 = *v32;
    v30[2] = (__int64)v32;
    if (v7 == v33) {
      *v32 = v30;
    }
    else {
      v32[1] = v30;
    }
    *v30 = (__int64)v7;
    v7[2] = (__int64)v30;
    v29 = v7;
  }
  else {
  LABEL_81:
    v30 = v7;
  }
  v43 = (__int64*)v30[2];
  *((_BYTE*)v30 + 24) = *((_BYTE*)v43 + 24);
  *((_BYTE*)v43 + 24) = 1;
  *((_BYTE*)v29 + 24) = 1;
  v44 = (__int64*)*v43;
  v45 = *(_QWORD*)(*v43 + 8);
  *v43 = v45;
  if (v45 != 0) {
    *(_QWORD*)(v45 + 16) = v43;
  }
  v46 = (__int64**)v43[2];
  v47 = *v46;
  v44[2] = (__int64)v46;
  if (v43 == v47) {
    *v46 = v44;
  }
  else {
    v46[1] = v44;
  }
  v44[1] = (__int64)v43;
  v43[2] = (__int64)v44;
  return result;
}

__int64* nvidia_dlss_rel_source_frameworks_cubin_a7100(__int64** a1,
                                                       unsigned __int64* a2,
                                                       __int64* a3, __int64* a4)
{
  __int64* v4;
  __int64** v5;
  unsigned __int64 v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;

  v5 = a1 + 1;
  v4 = a1[1];
  if (v4 != nullptr) {
    v9 = *a2;
    while (1) {
      while (1) {
        v10 = (__int64**)v4;
        v11 = v4[4];
        if (v9 >= v11) {
          break;
        }
        v4 = *v10;
        v5 = v10;
        if (*v10 == nullptr) {
          goto LABEL_9;
        }
      }
      if (v11 >= v9) {
        return (__int64*)v10;
      }
      v4 = v10[1];
      if (v4 == nullptr) {
        v5 = v10 + 1;
        goto LABEL_9;
      }
    }
  }
  else {
    v10 = a1 + 1;
  LABEL_9:
    v12 = NgxRoutine_420(144);
    v13 = a4[4];
    v14 = a4[5];
    v15 = a4[2];
    v16 = (__int64*)v12;
    v17 = *a3;
    *(_QWORD*)(v12 + 64) = a4[3];
    *(_QWORD*)(v12 + 72) = v13;
    v18 = a4[6];
    v19 = a4[7];
    *(_QWORD*)(v12 + 80) = v14;
    *(_QWORD*)(v12 + 88) = v18;
    v20 = *a4;
    v21 = a4[1];
    *(_QWORD*)(v12 + 96) = v19;
    *(_QWORD*)(v12 + 32) = v17;
    *(_QWORD*)(v12 + 40) = v20;
    LODWORD(v17) = *((_DWORD*)a4 + 16);
    *(_QWORD*)(v12 + 48) = v21;
    *(_QWORD*)(v12 + 56) = v15;
    *(_DWORD*)(v12 + 104) = v17;
    if ((a4[9] & 1) != 0) {
      NgxRoutine_29320((__int64*)(v12 + 112), a4[11], a4[10]);
    }
    else {
      v22 = a4[10];
      v23 = a4[11];
      *(_QWORD*)(v12 + 112) = a4[9];
      *(_QWORD*)(v12 + 120) = v22;
      *(_QWORD*)(v12 + 128) = v23;
    }
    v24 = a4[12];
    *v16 = 0;
    v16[1] = 0;
    *v5 = v16;
    v16[2] = (__int64)v10;
    v16[17] = v24;
    v25 = (__int64*)**a1;
    if (v25 != nullptr) {
      *a1 = v25;
    }
    nvidia_dlss_rel_source_features_dlaa_65660(a1[1], v16);
    a1[2] = (__int64*)((char*)a1[2] + 1);
  }
  return v16;
}

_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7260(_QWORD* a1, __int64* a2)
{
  unsigned __int64 v2;
  __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return nullptr;
  }
  v5 = *a2;
  v13 = *a2;
  v7 = NgxRoutine_baf70(&v13, 8);
  v8 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v9 = v7;
    if (v7 >= v2) {
      v9 = v7 % v2;
    }
    v10 = *(_QWORD**)(*a1 + 8 * v9);
    if (v10 == nullptr) {
      return v10;
    }
  }
  else {
    v9 = v7 & v8;
    v10 = *(_QWORD**)(*a1 + 8 * (v7 & v8));
    if (v10 == nullptr) {
      return v10;
    }
  }
  v10 = (_QWORD*)*v10;
  if (v10 == nullptr) {
    return v10;
  }
  if ((v2 & v8) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == v7) {
        if (v10[2] == v5) {
          return v10;
        }
      }
      else if ((v12 & v8) != v9) {
        return nullptr;
      }
      v10 = (_QWORD*)*v10;
      if (v10 == nullptr) {
        return v10;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v7) {
      if (v10[2] == v5) {
        return v10;
      }
      goto LABEL_17;
    }
    if (v11 >= v2) {
      v11 %= v2;
    }
    if (v11 != v9) {
      return nullptr;
    }
  LABEL_17:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      return v10;
    }
  }
}

_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a73c0(__int64 a1, __int64* a2,
                                                      __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD** v12;
  _QWORD* result;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  __int64 v23;
  _QWORD* v24;
  float v25;
  _BOOL8 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;

  v4 = *a2;
  v39 = *a2;
  v8 = NgxRoutine_baf70_alt1((__int64)&v39, 8);
  v9 = *(_QWORD*)(a1 + 8);
  v10 = v8;
  if (v9 == 0) {
    goto LABEL_32;
  }
  v11 = v9 - 1;
  if ((v9 & (v9 - 1)) != 0) {
    v3 = v8;
    if (v8 >= v9) {
      v3 = v8 % v9;
    }
    v12 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v12 == nullptr) {
      goto LABEL_32;
    }
  }
  else {
    v3 = v11 & v8;
    v12 = *(_QWORD***)(*(_QWORD*)a1 + 8 * (v11 & v8));
    if (v12 == nullptr) {
      goto LABEL_32;
    }
  }
  result = *v12;
  if (*v12 != nullptr) {
    v14 = a2[1];
    if ((v9 & v11) == 0) {
      while (1) {
        v17 = result[1];
        if (v17 == v10) {
          if (result[2] == v4 && result[3] == v14) {
            return result;
          }
        }
        else if ((v17 & v11) != v3) {
          goto LABEL_32;
        }
        result = (_QWORD*)*result;
        if (result == nullptr) {
          goto LABEL_32;
        }
      }
    }
    do {
      v15 = result[1];
      if (v15 == v10) {
        if (result[2] == v4 && result[3] == v14) {
          return result;
        }
      }
      else {
        if (v15 >= v9) {
          v15 %= v9;
        }
        if (v15 != v3) {
          break;
        }
      }
      result = (_QWORD*)*result;
    } while (result != nullptr);
  }
LABEL_32:
  result = (_QWORD*)NgxRoutine_420_alt1(40);
  v19 = *a3;
  v20 = a3[1];
  v21 = *(float*)(a1 + 32);
  *result = 0;
  result[1] = v10;
  result[2] = v19;
  result[3] = v20;
  result[4] = a3[2];
  v22 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v9 == 0 || (float)(v21 * (float)v9) < v22) {
    v25 = v22 / v21;
    v26 = true;
    if (v9 >= 3) {
      v26 = (v9 & (v9 - 1)) != 0;
    }
    v27 = v26 | (2 * v9);
    v28 = vcvtps_u64_f32(v25);
    if (v27 <= v28) {
      v29 = v28;
    }
    else {
      v29 = v27;
    }
    if (v29 == 1) {
      v29 = 2;
    }
    else if ((v29 & (v29 - 1)) != 0) {
      v30 = result;
      v29 = NgxRoutine_e2400(v29);
      result = v30;
    }
    v31 = *(_QWORD*)(a1 + 8);
    if (v29 > v31) {
      goto LABEL_47;
    }
    if (v29 < v31) {
      v33 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v31 >= 3 && (v31 & (v31 - 1)) == 0) {
        v34 = 1LL << -(char)__clz(v33 - 1);
        if (v33 >= 2) {
          v33 = v34;
        }
        if (v29 <= v33) {
          v29 = v33;
        }
        if (v29 >= v31) {
          goto LABEL_60;
        }
      LABEL_47:
        v32 = result;
        NgxRoutine_29120((__int64*)a1, v29);
        result = v32;
        goto LABEL_60;
      }
      v35 = result;
      v36 = NgxRoutine_e2400(v33);
      result = v35;
      if (v29 <= v36) {
        v29 = v36;
      }
      if (v29 < v31) {
        goto LABEL_47;
      }
    }
  LABEL_60:
    v9 = *(_QWORD*)(a1 + 8);
    if ((v9 & (v9 - 1)) != 0) {
      if (v10 >= v9) {
        v3 = v10 % v9;
        v23 = *(_QWORD*)a1;
        v24 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v10 % v9));
        if (v24 != nullptr) {
          goto LABEL_35;
        }
      }
      else {
        v3 = v10;
        v23 = *(_QWORD*)a1;
        v24 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v10);
        if (v24 != nullptr) {
          goto LABEL_35;
        }
      }
    }
    else {
      v3 = (v9 - 1) & v10;
      v23 = *(_QWORD*)a1;
      v24 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
      if (v24 != nullptr) {
        goto LABEL_35;
      }
    }
  LABEL_65:
    v37 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v37;
    *(_QWORD*)(v23 + 8 * v3) = a1 + 16;
    if (*result != 0) {
      v38 = *(_QWORD*)(*result + 8LL);
      if ((v9 & (v9 - 1)) != 0) {
        if (v38 >= v9) {
          v38 %= v9;
        }
        *(_QWORD*)(v23 + 8 * v38) = result;
      }
      else {
        *(_QWORD*)(v23 + 8 * (v38 & (v9 - 1))) = result;
      }
    }
    goto LABEL_36;
  }
  v23 = *(_QWORD*)a1;
  v24 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v24 == nullptr) {
    goto LABEL_65;
  }
LABEL_35:
  *result = *v24;
  *v24 = result;
LABEL_36:
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a7720(_QWORD* a1,
                                                      unsigned __int64* a2)
{
  __int64 result;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 i;
  unsigned __int64 v8;
  bool v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  bool v16;

  v4 = a1 + 1;
  result = a1[1];
  if (result != 0) {
    v5 = *a2;
    v6 = v4;
    for (i = result; i != 0; i = *(_QWORD*)(i + v10)) {
      v8 = *(_QWORD*)(i + 32);
      v9 = v8 >= v5;
      if (v8 >= v5) {
        v10 = 0;
      }
      else {
        v10 = 8;
      }
      if (v9) {
        v6 = (_QWORD*)i;
      }
    }
    if (v6 == v4) {
      return 0;
    }
    v11 = v6[4];
    v12 = v5 >= v11 ? v6 : v4;
    if (v5 < v11) {
      return 0;
    }
    else {
      v13 = (_QWORD*)v12[1];
      if (v13 != nullptr) {
        do {
          v14 = v13;
          v13 = (_QWORD*)*v13;
        } while (v13 != nullptr);
      }
      else {
        v15 = v12;
        do {
          v14 = (_QWORD*)v15[2];
          v16 = v15 == (_QWORD*)*v14;
          v15 = v14;
        } while (!v16);
      }
      if ((_QWORD*)*a1 == v12) {
        *a1 = v14;
      }
      --a1[2];
      nvidia_dlss_rel_source_frameworks_cubin_a6cc0_alt1(result, v12);
      if ((v12[14] & 1) != 0) {
        NgxRoutine_430(v12[16], v12[14] & 0xFFFFFFFFFFFFFFFELL);
      }
      NgxRoutine_430(v12, 144);
      return 1;
    }
  }
  return result;
}

_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7910()
{
  _QWORD* v0;
  __int64 v2;

  v0 = (_QWORD*)NgxRoutine_420(856);
  nvidia_dlss_a8840(v0);
  v2 = NgxData_952c18[0];
  v0[105] = 0;
  *v0 = v2 + 16;
  return v0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a7960(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  int v5;
  int v6;

  ngx_cubin_generic_a40a0(a1);
  *(_QWORD*)(a1 + 848) = a2;
  *(_BYTE*)(a1 + 817) = 1;
  *(_DWORD*)(a1 + 808) = 368;
  v4 = (_QWORD*)NgxData_952c20[0];
  v5 = (*(__int64 (**)(_QWORD, __int64))(
      **(_QWORD**)NgxData_952c20[0] + 104LL))(*(_QWORD*)NgxData_952c20[0], a2);
  v6 = 3;
  if (v5 > 2053) {
    if (v5 == 2057 || v5 == 2054) {
      v6 = 2;
    }
  }
  else if (v5 == 1795 || v5 == 1797) {
    v6 = 1;
  }
  *(_DWORD*)(a1 + 812) = v6;
  *(_BYTE*)(a1 + 816) = 1;
  ngx_cubin_kernel_map_a7830(a1 + 120, 1);
  genericPostInit(a1);
  *(_DWORD*)(a1 + 288) = (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*v4 + 8LL))(
                             *v4, *(_QWORD*)(a1 + 848)) &
                         1;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a7a40(_QWORD* a1)
{
  int v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  if ((unsigned int)ngx_cubin_generic_a4110(a1) != 0) {
    return 0xFFFFFFFFLL;
  }
  if (a1[4] != 0) {
    LOBYTE(v3) = 1;
    v4 = (_QWORD*)NgxData_952c20[0];
    while (1) {
      v8 = *(_QWORD*)(a1[3] + 16LL);
      if (v8 == 0) {
        goto LABEL_6;
      }
      v5 = nvidia_dlss_rel_source_frameworks_cubin_a7260(a1 + 1, &v8);
      if (v5 != nullptr &&
          (v6 = v5, v7 = v5[3],
           ((*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD))(
                *(_QWORD*)*v4 + 160LL))(*v4, a1[106], *(_QWORD*)(v7 + 8),
                                        *(_QWORD*)(v7 + 16)) &
            1) != 0)) {
        NgxRoutine_430(v7, 40);
        nvidia_dlss_a8d00(a1 + 1, v6);
      LABEL_6:
        v3 &= 1u;
        if (a1[4] == 0) {
          return (unsigned int)(v3 - 1);
        }
      }
      else {
        v3 = 0;
        if (a1[4] == 0) {
          return (unsigned int)(v3 - 1);
        }
      }
    }
  }
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a7b40(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v7;

  v7 = a2;
  if (a2 == 0) {
    return 0;
  }
  v3 = nvidia_dlss_rel_source_frameworks_cubin_a7260((_QWORD*)(a1 + 8), &v7);
  if (v3 == nullptr) {
    return 4294967162LL;
  }
  v4 = v3[3];
  v5 = v3;
  if (((*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD))(
           **(_QWORD**)NgxData_952c20[0] + 160LL))(
           *(_QWORD*)NgxData_952c20[0], *(_QWORD*)(a1 + 848),
           *(_QWORD*)(v4 + 8), *(_QWORD*)(v4 + 16)) &
       1) != 0) {
    NgxRoutine_430(v4, 40);
    nvidia_dlss_a8d00(a1 + 8, v5);
    return 0;
  }
  return 0xFFFFFFFFLL;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a7bf0(__int64 a1, __int64* a2)
{
  __int64 v3;

  v3 = NgxRoutine_420(64);
  *(_DWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_DWORD*)(v3 + 56) = 0;
  *(_DWORD*)(v3 + 48) = 1065353216;
  *a2 = v3;
  *(_QWORD*)v3 = NgxData_94e790;
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a7c60(__int64 a1, _QWORD* a2)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;

  if (a2 != nullptr) {
    v3 = (_QWORD*)a2[4];
    *a2 = NgxData_952c30 + 16;
    if (v3 != nullptr) {
      do {
        v4 = (_QWORD*)*v3;
        NgxRoutine_430(v3, 40);
        v3 = v4;
      } while (v4 != nullptr);
    }
    v5 = a2[2];
    a2[2] = 0;
    if (v5 != 0) {
      NgxRoutine_430(v5, 8LL * a2[3]);
    }
    NgxRoutine_430(a2, 64);
  }
  return 0;
}

__int64 nvidia_dlss_rel_source_frameworks_cubin_a7cf0(__int64 a1, _DWORD* a2)
{
  *a2 = 5;
  return 0;
}

#pragma GCC visibility pop
