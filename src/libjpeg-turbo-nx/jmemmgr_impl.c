#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 access_virt_barray();
__int64 access_virt_sarray();
__int64 alloc_barray();
__int64 alloc_large();
__int64 alloc_sarray();
__int64 alloc_small();
__int64 alloc_small_alt1(_QWORD, _QWORD, _QWORD) __asm__("alloc_small");
__int64 free_pool();
__int64 nndetailImageJpeg_jpeg_get_small_plt(_QWORD, _QWORD);
__int64 nndetailImageJpeg_jpeg_mem_init_plt(void);
__int64 nndetailImageJpeg_jpeg_mem_term_plt(_QWORD);
__int64 realize_virt_arrays();
__int64 request_virt_barray();
__int64 request_virt_sarray_alt1() __asm__("request_virt_sarray");
__int64 self_destruct();
__int64 nndetailImageJpeg_jinit_memory_mgr(_QWORD* a1);
__int64 request_virt_sarray(_QWORD* a1, __int64 a2, int a3, int a4, int a5,
                            int a6);

__int64 nndetailImageJpeg_jinit_memory_mgr(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  _QWORD* v4;

  a1[1] = 0;
  v2 = nndetailImageJpeg_jpeg_mem_init_plt();
  result = nndetailImageJpeg_jpeg_get_small_plt(a1, 168);
  v4 = (_QWORD*)result;
  if (result == 0) {
    nndetailImageJpeg_jpeg_mem_term_plt(a1);
    *(_DWORD*)(*a1 + 40LL) = 56;
    *(_DWORD*)(*a1 + 44LL) = 0;
    result = (*(__int64 (**)(_QWORD*))*a1)(a1);
  }
  v4[14] = 0;
  v4[15] = 0;
  v4[16] = 0;
  v4[17] = 0;
  *v4 = alloc_small;
  v4[1] = alloc_large;
  v4[4] = request_virt_sarray_alt1;
  v4[5] = request_virt_barray;
  v4[8] = access_virt_barray;
  v4[9] = free_pool;
  v4[2] = alloc_sarray;
  v4[3] = alloc_barray;
  v4[6] = realize_virt_arrays;
  v4[7] = access_virt_sarray;
  v4[10] = self_destruct;
  v4[11] = v2;
  v4[12] = 1000000000;
  v4[13] = 0;
  v4[18] = 0;
  v4[19] = 168;
  a1[1] = v4;
  return result;
}

__int64 request_virt_sarray(_QWORD* a1, __int64 a2, int a3, int a4, int a5,
                            int a6)
{
  __int64 v6;
  _QWORD* v11;
  unsigned int v12;
  __int64 result;

  v6 = a1[1];
  if ((_DWORD)a2 != 1) {
    v11 = a1;
    v12 = a2;
    *(_DWORD*)(*a1 + 40LL) = 15;
    *(_DWORD*)(*a1 + 44LL) = a2;
    (*(void (**)(_QWORD*))*a1)(a1);
    a1 = v11;
    a2 = v12;
  }
  result = alloc_small_alt1(a1, a2, 152);
  *(_QWORD*)result = 0;
  *(_DWORD*)(result + 8) = a5;
  *(_DWORD*)(result + 12) = a4;
  *(_DWORD*)(result + 16) = a6;
  *(_DWORD*)(result + 36) = a3;
  *(_DWORD*)(result + 44) = 0;
  *(_QWORD*)(result + 48) = *(_QWORD*)(v6 + 136);
  *(_QWORD*)(v6 + 136) = result;
  return result;
}

#pragma GCC visibility pop
