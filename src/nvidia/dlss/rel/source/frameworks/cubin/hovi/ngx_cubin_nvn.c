#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7260(_QWORD*, __int64*);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
__int64 nvidia_dlss_a89c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* NgxData_952228;
extern __int64 NgxData_2b70a00;
extern __int64 NgxData_952c20[3];
__int64 GetCubinFormat();
__int64 GetNativeFormat();
__int64 ngx_cubin_nvn_a7d80(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            int a5, __int64* a6, int a7, int a8, int a9,
                            int a10);
__int64 ngx_cubin_nvn_a7e80(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 ngx_cubin_nvn_a7e90(__int64 a1, __int64 a2);
__int64 ngx_cubin_nvn_a7ee0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                            unsigned int a5);
__int64 ngx_cubin_nvn_a7f80(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 ngx_cubin_nvn_a7fe0(__int64 a1, unsigned int a2, __int64 a3,
                            __int64 a4);
__int64 ngx_cubin_nvn_a8080(__int64 a1, __int64 a2, _QWORD* a3);
__int64 ngx_cubin_nvn_a80e0(__int64 a1, unsigned int a2, __int64 a3,
                            __int64 a4);
__int64 ngx_cubin_nvn_a8190();
__int64 ngx_cubin_nvn_a81d0(__int64 a1, unsigned int a2, __int64 a3,
                            __int64 a4);
__int64 ngx_cubin_nvn_a8280(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                            unsigned int a5, unsigned int a6);
__int64 ngx_cubin_nvn_a83b0();
__int64 ngx_cubin_nvn_a83f0();
__int64 ngx_cubin_nvn_a8430();
__int64 ngx_cubin_nvn_a8470();
__int64 ngx_cubin_nvn_a84b0();
__int64 ngx_cubin_nvn_a84f0();
__int64 ngx_cubin_nvn_a8530();
__int64 ngx_cubin_nvn_a8570();
__int64 CloneResource();
__int64 ngx_cubin_nvn_a85f0(float a1, float a2, float a3, float a4, __int64 a5,
                            __int64 a6, __int64 a7, __int64 a8, unsigned int a9,
                            unsigned int a10);
__int64 ClearViewUINT();
__int64 ClearBuffer();
__int64 ngx_cubin_nvn_a86d0();
__int64 ngx_cubin_nvn_a86f0();
__int64 ngx_cubin_nvn_a8710(__int64 a1, __int64 a2, _QWORD* a3);
__int64 ngx_cubin_nvn_a8750(__int64 a1, __int64 a2, _QWORD* a3);
__int64 CopyBufferRegion();
__int64 WriteStagingBufferToDisk();

__int64 GetCubinFormat()
{
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/hovi/ngx_cubin_nvn.cpp",
      131, (__int64)"GetCubinFormat",
      (__int64)"error: NGXCubinNvn::GetCubinFormat not implemented yet");
  return 0xFFFFFFFFLL;
}

__int64 GetNativeFormat()
{
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/hovi/ngx_cubin_nvn.cpp",
      137, (__int64)"GetNativeFormat",
      (__int64)"error: NGXCubinNvn::GetNativeFormat not implemented yet");
  return 0xFFFFFFFFLL;
}

__int64 ngx_cubin_nvn_a7d80(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            int a5, __int64* a6, int a7, int a8, int a9,
                            int a10)
{
  _QWORD* v16;
  __int64* v17;
  _DWORD* v18;
  _DWORD* v19;
  __int64 result;
  __int64 v21;
  char v22;
  __int64* v23;

  v21 = a2;
  v16 = nvidia_dlss_rel_source_frameworks_cubin_a7260((_QWORD*)(a1 + 8), &v21);
  if (v16 != nullptr) {
    v17 = v16 + 2;
  }
  else {
    v18 = (_DWORD*)NgxRoutine_420(40);
    *v18 = a5;
    v19 = v18;
    if (((*(__int64 (**)(_QWORD, _QWORD, __int64, _DWORD*, _DWORD*, __int64))(
             **(_QWORD**)NgxData_952c20[0] + 144LL))(
             *(_QWORD*)NgxData_952c20[0], *(_QWORD*)(a1 + 848), v21, v18 + 2,
             v18 + 4, a4) &
         1) == 0) {
      return 0xFFFFFFFFLL;
    }
    v19[6] = a7;
    v19[7] = a8;
    v17 = &v21;
    v23 = &v21;
    v19[8] = a9;
    v19[9] = a10;
    *(_QWORD*)(nvidia_dlss_a89c0(a1 + 8, &v21, NgxData_952228, &v23, &v22) +
               24) = v19;
  }
  result = 0;
  *a6 = *v17;
  return result;
}

__int64 ngx_cubin_nvn_a7e80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD*)(a1 + 840) = a4;
  return 0;
}

__int64 ngx_cubin_nvn_a7e90(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v6;

  v6 = a2;
  v3 = nvidia_dlss_rel_source_frameworks_cubin_a7260((_QWORD*)(a1 + 8), &v6);
  if (v3 == nullptr) {
    return 4294967162LL;
  }
  v4 = v3[3];
  *(_QWORD*)(a1 + 280) = v4;
  return 0;
}

__int64 ngx_cubin_nvn_a7ee0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                            unsigned int a5)
{
  char v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  bool v12;
  _BYTE* v13;
  char v14;
  __int64 v15;

  v15 = 0;
  v7 = (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD, __int64*))(
      **(_QWORD**)NgxData_952c20[0] + 48LL))(*(_QWORD*)NgxData_952c20[0], a3, 0,
                                             a5, &v15);
  v8 = v15;
  result = (v7 & 1u) - 1;
  v10 = *(_QWORD*)(a4 + 16) + 40LL * a2;
  v11 = *(_QWORD*)(v10 + 8);
  *(_QWORD*)(v10 + 8) = v15;
  v12 = v11 == v8;
  *(_DWORD*)(v10 + 4) = 1;
  v13 = *(_BYTE**)(v10 + 32);
  v14 = !v12;
  *(_BYTE*)v10 = v14;
  *v13 |= v14;
  return result;
}

__int64 ngx_cubin_nvn_a7f80(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  char v5;
  __int64 v7;

  v7 = 0;
  v5 = (*(__int64 (**)(_QWORD, __int64, _QWORD, __int64, __int64*))(
      **(_QWORD**)NgxData_952c20[0] + 48LL))(*(_QWORD*)NgxData_952c20[0], a2, 0,
                                             a4, &v7);
  *a3 = v7;
  return (v5 & 1u) - 1;
}

__int64 ngx_cubin_nvn_a7fe0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  bool v11;
  _BYTE* v12;
  char v13;
  __int64 v14;

  v14 = 0;
  v6 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64*))(
      **(_QWORD**)NgxData_952c20[0] + 48LL))(*(_QWORD*)NgxData_952c20[0], a3, 1,
                                             3, &v14);
  v7 = v14;
  result = (v6 & 1u) - 1;
  v9 = *(_QWORD*)(a4 + 16) + 40LL * a2;
  v10 = *(_QWORD*)(v9 + 8);
  *(_QWORD*)(v9 + 8) = v14;
  *(_DWORD*)(v9 + 4) = 1;
  v11 = v10 == v7;
  v12 = *(_BYTE**)(v9 + 32);
  v13 = !v11;
  *(_BYTE*)v9 = v13;
  *v12 |= v13;
  return result;
}

__int64 ngx_cubin_nvn_a8080(__int64 a1, __int64 a2, _QWORD* a3)
{
  char v4;
  __int64 v6;

  v6 = 0;
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64*))(
      **(_QWORD**)NgxData_952c20[0] + 48LL))(*(_QWORD*)NgxData_952c20[0], a2, 1,
                                             3, &v6);
  *a3 = v6;
  return (v4 & 1u) - 1;
}

__int64 ngx_cubin_nvn_a80e0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (((*(__int64 (**)(_QWORD, __int64, __int64*))(
           **(_QWORD**)NgxData_952c20[0] + 56LL))(*(_QWORD*)NgxData_952c20[0],
                                                  a3, &v10) &
       1) == 0) {
    return 0xFFFFFFFFLL;
  }
  v7 = *(_QWORD*)(a4 + 16) + 40LL * a2;
  v8 = v10;
  v9 = *(_QWORD*)(v7 + 8);
  *(_QWORD*)(v7 + 8) = v10;
  LOBYTE(v9) = v9 != v8;
  *(_DWORD*)(v7 + 4) = 1;
  *(_BYTE*)v7 = v9;
  **(_BYTE**)(v7 + 32) |= v9;
  return 0;
}

__int64 ngx_cubin_nvn_a8190()
{
  return (unsigned int)((*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 +
                                                  56LL))(NgxData_2b70a00) &
                        1) -
         1;
}

__int64 ngx_cubin_nvn_a81d0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v6 = (*(__int64 (**)(_QWORD, __int64, __int64*))(
           **(_QWORD**)NgxData_952c20[0] + 56LL))(*(_QWORD*)NgxData_952c20[0],
                                                  a3, &v11) ^
       1;
  if ((v6 & 1) != 0) {
    return (unsigned int)(v6 << 31 >> 31);
  }
  v8 = *(_QWORD*)(a4 + 16) + 40LL * a2;
  v9 = v11;
  v10 = *(_QWORD*)(v8 + 8);
  *(_QWORD*)(v8 + 8) = v11;
  LOBYTE(v10) = v10 != v9;
  *(_DWORD*)(v8 + 4) = 1;
  *(_BYTE*)v8 = v10;
  **(_BYTE**)(v8 + 32) |= v10;
  return 0;
}

__int64 ngx_cubin_nvn_a8280(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                            unsigned int a5, unsigned int a6)
{
  __int64 result;
  __int64 v8;
  _QWORD v14[5];
  __int64 v15;

  result = 4294967291LL;
  if (a2 != 0) {
    v8 = *(_QWORD*)(a1 + 280);
    if (v8 != 0) {
      if ((*(unsigned int (**)(__int64))(*(_QWORD*)a2 + 8LL))(a2) ==
          **(_DWORD**)(a1 + 280)) {
        (**(void (***)(__int64))a2)(a2);
        v15 = (*(unsigned int (**)(__int64))(*(_QWORD*)a2 + 24LL))(a2);
        v14[0] = 1;
        v14[1] = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 16LL))(a2);
        v14[2] = 2;
        v14[3] = &v15;
        v14[4] = 0;
        return (unsigned int)((*(__int64 (**)(__int64, __int64, _QWORD, _QWORD,
                                              _QWORD, _QWORD, _QWORD, _QWORD,
                                              _DWORD, _DWORD, _QWORD*))(
                                  *(_QWORD*)NgxData_2b70a00 + 152LL))(
                                  NgxData_2b70a00, a3, *(_QWORD*)(v8 + 16), a4,
                                  a5, a6, *(unsigned int*)(v8 + 24),
                                  *(unsigned int*)(v8 + 28),
                                  *(_DWORD*)(v8 + 32), *(_DWORD*)(v8 + 36),
                                  v14) &
                              1) -
               1;
      }
      else {
        return 4294967291LL;
      }
    }
  }
  return result;
}

__int64 ngx_cubin_nvn_a83b0()
{
  return (unsigned int)((*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 +
                                                  64LL))(NgxData_2b70a00) &
                        1) -
         1;
}

__int64 ngx_cubin_nvn_a83f0()
{
  return (unsigned int)((*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 +
                                                  32LL))(NgxData_2b70a00) &
                        1) -
         1;
}

__int64 ngx_cubin_nvn_a8430()
{
  return (unsigned int)((*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 +
                                                  24LL))(NgxData_2b70a00) &
                        1) -
         1;
}

__int64 ngx_cubin_nvn_a8470()
{
  return (unsigned int)((*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 +
                                                  80LL))(NgxData_2b70a00) &
                        1) -
         1;
}

__int64 ngx_cubin_nvn_a84b0()
{
  return (unsigned int)((*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 +
                                                  16LL))(NgxData_2b70a00) &
                        1) -
         1;
}

__int64 ngx_cubin_nvn_a84f0()
{
  return (unsigned int)((*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 +
                                                  72LL))(NgxData_2b70a00) &
                        1) -
         1;
}

__int64 ngx_cubin_nvn_a8530()
{
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/hovi/ngx_cubin_nvn.cpp",
      470, (__int64)"GetAdapterDescription",
      (__int64)"error: NGXCubinNvn::GetAdapterDescription not implemented yet");
  return 0xFFFFFFFFLL;
}

__int64 ngx_cubin_nvn_a8570()
{
  return (unsigned int)((*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 +
                                                  96LL))(NgxData_2b70a00) &
                        1) -
         1;
}

__int64 CloneResource()
{
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/hovi/ngx_cubin_nvn.cpp",
      495, (__int64)"CloneResource",
      (__int64)"warning: NGXCubinNvn::CloneResource not implemented yet");
  return 0xFFFFFFFFLL;
}

__int64 ngx_cubin_nvn_a85f0(float a1, float a2, float a3, float a4, __int64 a5,
                            __int64 a6, __int64 a7, __int64 a8, unsigned int a9,
                            unsigned int a10)
{
  _DWORD v11[4];

  *(float*)v11 = a1;
  *(float*)&v11[1] = a2;
  *(float*)&v11[2] = a3;
  *(float*)&v11[3] = a4;
  return (unsigned int)((*(__int64 (**)(_QWORD, __int64, __int64, _DWORD*,
                                        __int64, _QWORD, _QWORD))(
                            **(_QWORD**)NgxData_952c20[0] + 88LL))(
                            *(_QWORD*)NgxData_952c20[0], a6, a7, v11, a8, a9,
                            a10) &
                        1) -
         1;
}

__int64 ClearViewUINT()
{
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/hovi/ngx_cubin_nvn.cpp",
      518, (__int64)"ClearViewUINT",
      (__int64)"warning: NGXCubinNvn::ClearViewUINT not implemented yet");
  return 0xFFFFFFFFLL;
}

__int64 ClearBuffer()
{
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/hovi/ngx_cubin_nvn.cpp",
      526, (__int64)"ClearBuffer",
      (__int64)"warning: NGXCubinNvn::ClearBuffer not implemented yet");
  return 0xFFFFFFFFLL;
}

__int64 ngx_cubin_nvn_a86d0()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 + 40LL))(
      NgxData_2b70a00);
}

__int64 ngx_cubin_nvn_a86f0()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)NgxData_2b70a00 + 112LL))(
      NgxData_2b70a00);
}

__int64 ngx_cubin_nvn_a8710(__int64 a1, __int64 a2, _QWORD* a3)
{
  return (unsigned int)((*(__int64 (**)(__int64, __int64, _QWORD))(
                            *(_QWORD*)NgxData_2b70a00 + 136LL))(NgxData_2b70a00,
                                                                a2, *a3) &
                        1) -
         1;
}

__int64 ngx_cubin_nvn_a8750(__int64 a1, __int64 a2, _QWORD* a3)
{
  return (unsigned int)((*(__int64 (**)(__int64, __int64, _QWORD))(
                            *(_QWORD*)NgxData_2b70a00 + 128LL))(NgxData_2b70a00,
                                                                a2, *a3) &
                        1) -
         1;
}

__int64 CopyBufferRegion()
{
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/hovi/ngx_cubin_nvn.cpp",
      572, (__int64)"CopyBufferRegion",
      (__int64)"error: NGXCubinNvn::CopyBufferRegion not implemented yet");
  return 0xFFFFFFFFLL;
}

__int64 WriteStagingBufferToDisk()
{
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/hovi/ngx_cubin_nvn.cpp",
      581, (__int64)"WriteStagingBufferToDisk",
      (__int64)"error: NGXCubinNvn::WriteStagingBufferToDisk not implemented "
               "yet");
  return 0xFFFFFFFFLL;
}

#pragma GCC visibility pop
