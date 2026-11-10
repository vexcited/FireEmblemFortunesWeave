#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_624080(_QWORD*, unsigned __int64);
__int64 nvidia_624b80(__int64*, unsigned __int64);
__int64 nvidia_629580(__int64*, _QWORD*);
void __attribute__((noreturn)) nvidia_62a310(__int64, __int64, __int64, __int64,
                                             unsigned int);
__int64 nvrm_gpu_lib_629420(__int64 a1, int* a2);

__int64 nvrm_gpu_lib_629420(__int64 a1, int* a2)
{
  unsigned __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  __int64** v8;
  unsigned int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64** v14;
  unsigned int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v4 = *(_QWORD*)(a1 + 72) + *(_QWORD*)(a1 + 40);
  nvidia_624080((_QWORD*)(a1 + 88), 0);
  result = nvidia_624b80((__int64*)(a1 + 88), v4);
  *((_BYTE*)a2 + 4) = 1;
  v6 = *a2;
  if ((_DWORD)result != 0) {
    if (v6 == 0) {
      *a2 = result;
    }
  }
  else if (v6 == 0) {
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      v8 = *(__int64***)(a1 + 32);
      v9 = *(_DWORD*)(a1 + 24);
      v10 = 8 * v7;
      do {
        v19_.v20 = 0;
        v19_.v19 = v9;
        v11 = *v8++;
        v12 = *v11;
        v19_.v20 = v11[1];
        (*(void (**)(__int64*, char*))(v12 + 16))(v11, (char*)&v19_.v19 + 4);
        result = nvidia_629580((__int64*)(a1 + 88), &v19_.v19);
        ++v9;
        v10 -= 8;
      } while (v10 != 0);
    }
    v13 = *(_QWORD*)(a1 + 72);
    if (v13 != 0) {
      v14 = *(__int64***)(a1 + 64);
      v15 = *(_DWORD*)(a1 + 56);
      v16 = 8 * v13;
      do {
        v19_.v20 = 0;
        v19_.v19 = v15;
        v17 = *v14++;
        v18 = *v17;
        v19_.v20 = v17[1];
        (*(void (**)(__int64*, char*))(v18 + 16))(v17, (char*)&v19_.v19 + 4);
        result = nvidia_629580((__int64*)(a1 + 88), &v19_.v19);
        ++v15;
        v16 -= 8;
      } while (v16 != 0);
    }
    if (*(_QWORD*)(a1 + 96) != v4) {
      nvidia_62a310((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "drivers/nvrm/gpu/standard/core/nvrm_gpu_lib.cpp",
                    162,
                    (__int64)"void "
                             "nvrm_gpu::NvRmGpuLibRec::buildProbedDevices("
                             "NvRmGpuErrorState &)",
                    (__int64)"Array size has changed", 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
