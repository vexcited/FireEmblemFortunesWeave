#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
ngx_cubin_vulkan_b9220(PSEUDO_X8, __int64 result, __int64*);
__int64 NgxRoutine_e2c70();
__int64 NgxRoutine_e2ca0();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 vkCmdCopyBuffer_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkCmdPipelineBarrier_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 vkMapMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkUnmapMemory_plt(_QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_frameworks_cubin_b90a0(__int64 a1, __int64 a2,
                                                      __int64 a3, __int64 a4,
                                                      __int64* a5, __int64* a6,
                                                      __int64 a7, __int64 a8);

__int64 nvidia_dlss_rel_source_frameworks_cubin_b90a0(__int64 a1, __int64 a2,
                                                      __int64 a3, __int64 a4,
                                                      __int64* a5, __int64* a6,
                                                      __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v18;
  _QWORD v20[3];
  _QWORD v21[3];
  __int64 v22;
  __int64 v23[3];

  if (*((_DWORD*)a6 + 12) != 1) {
    return 4294967291LL;
  }
  v23[1] = v8;
  v23[2] = v9;
  v10 = *a5;
  v11 = *a6;
  v22 = 0;
  v23[0] = v10;
  NgxRoutine_e2c70();
  ngx_cubin_vulkan_b9220((void*)(v21), a1 + 992, v23);
  if (v21[0] == a1 + 1017) {
    NgxRoutine_e2ca0();
    return 0xFFFFFFFFLL;
  }
  else {
    v18 = *(_QWORD*)(v21[0] + 8LL);
    NgxRoutine_e2ca0();
    if ((unsigned int)vkMapMemory_plt(*(_QWORD*)(a1 + 840), v18, 0, a3, 0,
                                      &v22) != 0) {
      return 0xFFFFFFFFLL;
    }
    else {
      v22 += a7;
      memcpy_plt(v22, a4, a3);
      vkUnmapMemory_plt(*(_QWORD*)(a1 + 840), v18);
      v21[0] = a7;
      v21[1] = a8;
      v21[2] = a3;
      vkCmdCopyBuffer_plt(a2, v23[0], v11, 1, v21);
      v20[0] = 46;
      v20[1] = 0;
      v20[2] = 0x800000001000LL;
      ((void (*)(__int64, __int64, __int64, _QWORD, __int64, _QWORD*, _QWORD,
                 _QWORD, _DWORD, _QWORD))vkCmdPipelineBarrier_plt)(
          a2, 4096, 0x10000, 0, 1, v20, 0, 0, 0, 0);
      return 0;
    }
  }
}

#pragma GCC visibility pop
