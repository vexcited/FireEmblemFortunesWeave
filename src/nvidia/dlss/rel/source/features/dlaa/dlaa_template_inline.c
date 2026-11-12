#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_dlss_rel_source_2fbd0(__int64, _DWORD*, unsigned int*);
__int64 nvidia_dlss_rel_source_308a0(__int64, _DWORD*, unsigned int*);
__int64 nvidia_dlss_rel_source_30a50(__int64, _DWORD*, unsigned int*);
__int64 printf_plt(const char*, ...);
__int64 sprintf_plt(_QWORD, const char*, ...);
__int64 dlaa_template_2ada0(__int64 a1);
__int64 dlaa_template_2d450(__int64 a1, int* a2, unsigned int* a3);
__int64 dlaa_template_2fdf0(_QWORD* a1);
__int64 dlaa_template_30da0(_QWORD* a1);
__int64 dlaa_template_32c20(__int64 a1);

__int64 dlaa_template_2ada0(__int64 a1)
{
  int v2;
  int* v3;
  int v4;
  unsigned int v5;
  int i;
  int v7;
  __int64 v8;
  int v9;
  char v11[64];

  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 0, 0, "img_gmem",
             *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 320));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 1, 8, "flt_gmem",
             *(_QWORD*)(a1 + 328), *(_QWORD*)(a1 + 328));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 2, 16, "out_gmem",
             *(_QWORD*)(a1 + 336), *(_QWORD*)(a1 + 336));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 3, 24, "bias_gmem",
             *(_QWORD*)(a1 + 344), *(_QWORD*)(a1 + 344));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 4, 32, "h",
             *(_DWORD*)(a1 + 352), *(_DWORD*)(a1 + 352));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 5, 36, "w",
             *(_DWORD*)(a1 + 356), *(_DWORD*)(a1 + 356));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 6, 40, "c",
             *(_DWORD*)(a1 + 360), *(_DWORD*)(a1 + 360));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 7, 44, "p",
             *(_DWORD*)(a1 + 364), *(_DWORD*)(a1 + 364));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 8, 48, "q",
             *(_DWORD*)(a1 + 368), *(_DWORD*)(a1 + 368));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 9, 52, "k",
             *(_DWORD*)(a1 + 372), *(_DWORD*)(a1 + 372));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 10, 56, "r",
             *(_DWORD*)(a1 + 376), *(_DWORD*)(a1 + 376));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 11, 60, "s",
             *(_DWORD*)(a1 + 380), *(_DWORD*)(a1 + 380));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 12, 64, "with_relu",
             *(_DWORD*)(a1 + 384), *(_DWORD*)(a1 + 384));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 13, 68, "hw",
             *(_DWORD*)(a1 + 388), *(_DWORD*)(a1 + 388));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 14, 72, "wc",
             *(_DWORD*)(a1 + 392), *(_DWORD*)(a1 + 392));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 15, 76, "rsc",
             *(_DWORD*)(a1 + 396), *(_DWORD*)(a1 + 396));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 16, 80, "pq",
             *(_DWORD*)(a1 + 400), *(_DWORD*)(a1 + 400));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 17, 84, "qk",
             *(_DWORD*)(a1 + 404), *(_DWORD*)(a1 + 404));
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", 18, 88,
             "move_fwd_a", *(_QWORD*)(a1 + 408), *(_QWORD*)(a1 + 408));
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", 19, 96,
             "move_fwd_b", *(_QWORD*)(a1 + 416), *(_QWORD*)(a1 + 416));
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", 20, 104,
             "move_bwd_b", *(_QWORD*)(a1 + 424), *(_QWORD*)(a1 + 424));
  v2 = *(_DWORD*)(a1 + 380) * *(_DWORD*)(a1 + 376);
  if (v2 < 1) {
    v4 = 21;
    v5 = 112;
    v8 = a1 + 320;
  LABEL_10:
    v9 = v4 - v2 + 32;
    do {
      sprintf_plt(v11, "rs[%02d] <undefined>", v2);
      printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v4++, v5, v11,
                 *(_QWORD*)(v8 + v5), *(_QWORD*)(v8 + v5));
      v5 += 8;
      ++v2;
    } while (v2 != 32);
    v4 = v9;
    goto LABEL_13;
  }
  v3 = (int*)(a1 + 436);
  v4 = 21;
  v5 = 112;
  for (i = 0; i < v2; ++i) {
    sprintf_plt(v11, "rs[%02d].x", i);
    printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4, v5, v11, *(v3 - 1),
               *(v3 - 1));
    sprintf_plt(v11, "rs[%02d].y", i);
    v7 = *v3;
    v3 += 2;
    printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 1, v5 | 4, v11,
               v7, v7);
    v4 += 2;
    v5 += 8;
    if (*(_DWORD*)(a1 + 380) * *(_DWORD*)(a1 + 376) >= 32) {
      v2 = 32;
    }
    else {
      v2 = *(_DWORD*)(a1 + 380) * *(_DWORD*)(a1 + 376);
    }
  }
  v8 = a1 + 320;
  if (v2 <= 31) {
    goto LABEL_10;
  }
LABEL_13:
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4, v5, "loop_start",
             *(_DWORD*)(v8 + v5), *(_DWORD*)(v8 + v5));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 1, v5 | 4,
             "<alignment>", *(_DWORD*)(v8 + (v5 | 4LL)),
             *(_DWORD*)(v8 + (v5 | 4LL)));
  return printf_plt("Params size = %zu\n", 0x178u);
}

__int64 dlaa_template_2d450(__int64 a1, int* a2, unsigned int* a3)
{
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 result;
  char v36[64];

  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", *a2, *a3,
             "img_gmem", *(_QWORD*)(a1 + *a3), *(_QWORD*)(a1 + *a3));
  ++*a2;
  v6 = *a3 + 8;
  *a3 = v6;
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", *a2, v6, "res_gmem",
             *(_QWORD*)(a1 + v6), *(_QWORD*)(a1 + v6));
  ++*a2;
  v7 = *a3 + 8;
  *a3 = v7;
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", *a2, v7, "flt_gmem",
             *(_QWORD*)(a1 + v7), *(_QWORD*)(a1 + v7));
  ++*a2;
  v8 = *a3 + 8;
  *a3 = v8;
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", *a2, v8,
             "bias_gmem", *(_QWORD*)(a1 + v8), *(_QWORD*)(a1 + v8));
  ++*a2;
  v9 = *a3 + 8;
  *a3 = v9;
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", *a2, v9, "out_gmem",
             *(_QWORD*)(a1 + v9), *(_QWORD*)(a1 + v9));
  ++*a2;
  v10 = *a3 + 8;
  *a3 = v10;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v10, "h",
             *(_DWORD*)(a1 + v10), *(_DWORD*)(a1 + v10));
  ++*a2;
  v11 = *a3 + 4;
  *a3 = v11;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v11, "w",
             *(_DWORD*)(a1 + v11), *(_DWORD*)(a1 + v11));
  ++*a2;
  v12 = *a3 + 4;
  *a3 = v12;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v12, "g",
             *(_DWORD*)(a1 + v12), *(_DWORD*)(a1 + v12));
  ++*a2;
  v13 = *a3 + 4;
  *a3 = v13;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v13, "c",
             *(_DWORD*)(a1 + v13), *(_DWORD*)(a1 + v13));
  ++*a2;
  v14 = *a3 + 4;
  *a3 = v14;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v14, "k",
             *(_DWORD*)(a1 + v14), *(_DWORD*)(a1 + v14));
  ++*a2;
  v15 = *a3 + 4;
  *a3 = v15;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v15, "p",
             *(_DWORD*)(a1 + v15), *(_DWORD*)(a1 + v15));
  ++*a2;
  v16 = *a3 + 4;
  *a3 = v16;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v16, "q",
             *(_DWORD*)(a1 + v16), *(_DWORD*)(a1 + v16));
  ++*a2;
  v17 = *a3 + 4;
  *a3 = v17;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v17, "t",
             *(_DWORD*)(a1 + v17), *(_DWORD*)(a1 + v17));
  ++*a2;
  v18 = *a3 + 4;
  *a3 = v18;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v18, "r",
             *(_DWORD*)(a1 + v18), *(_DWORD*)(a1 + v18));
  ++*a2;
  v19 = *a3 + 4;
  *a3 = v19;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v19, "s",
             *(_DWORD*)(a1 + v19), *(_DWORD*)(a1 + v19));
  ++*a2;
  v20 = *a3 + 4;
  *a3 = v20;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v20, "res_c",
             *(_DWORD*)(a1 + v20), *(_DWORD*)(a1 + v20));
  ++*a2;
  v21 = *a3 + 4;
  *a3 = v21;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v21,
             "cross_correlation", *(_DWORD*)(a1 + v21), *(_DWORD*)(a1 + v21));
  ++*a2;
  v22 = *a3 + 4;
  *a3 = v22;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v22, "wc",
             *(_DWORD*)(a1 + v22), *(_DWORD*)(a1 + v22));
  ++*a2;
  v23 = *a3 + 4;
  *a3 = v23;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v23, "qc",
             *(_DWORD*)(a1 + v23), *(_DWORD*)(a1 + v23));
  ++*a2;
  v24 = *a3 + 4;
  *a3 = v24;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v24, "qk",
             *(_DWORD*)(a1 + v24), *(_DWORD*)(a1 + v24));
  ++*a2;
  v25 = *a3 + 4;
  *a3 = v25;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v25, "trsc",
             *(_DWORD*)(a1 + v25), *(_DWORD*)(a1 + v25));
  ++*a2;
  v26 = *a3 + 4;
  *a3 = v26;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v26, "trs",
             *(_DWORD*)(a1 + v26), *(_DWORD*)(a1 + v26));
  ++*a2;
  v27 = *a3 + 4;
  *a3 = v27;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v27, "<alignment>",
             *(_DWORD*)(a1 + v27), *(_DWORD*)(a1 + v27));
  ++*a2;
  *a3 += 4;
  v28 = *a2 - 1;
  *a2 = v28;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v28, *a3,
             "move_fwd_a", *(_QWORD*)(a1 + *a3), *(_QWORD*)(a1 + *a3));
  ++*a2;
  v29 = *a3 + 8;
  *a3 = v29;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", *a2, v29,
             "move_fwd_b", *(_QWORD*)(a1 + v29), *(_QWORD*)(a1 + v29));
  ++*a2;
  v30 = *a3 + 8;
  *a3 = v30;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", *a2, v30,
             "move_bwd_b", *(_QWORD*)(a1 + v30), *(_QWORD*)(a1 + v30));
  ++*a2;
  *a3 += 8;
  sprintf_plt(v36, "rs[%02d].x", 0);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 0);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].x", 1);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 1);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].x", 2);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 2);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].x", 3);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 3);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].x", 4);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 4);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].x", 5);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 5);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].x", 6);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 6);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].x", 7);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 7);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].x", 8);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  *a3 += 4;
  sprintf_plt(v36, "rs[%02d].y", 8);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, *a3, v36,
             *(_DWORD*)(a1 + *a3), *(_DWORD*)(a1 + *a3));
  ++*a2;
  v31 = *a3 + 4;
  *a3 = v31;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v31, "ctas_q",
             *(_DWORD*)(a1 + v31), *(_DWORD*)(a1 + v31));
  ++*a2;
  v32 = *a3 + 4;
  *a3 = v32;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v32, "mul_ctas_q",
             *(_DWORD*)(a1 + v32), *(_DWORD*)(a1 + v32));
  ++*a2;
  v33 = *a3 + 4;
  *a3 = v33;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v33, "shr_ctas_q",
             *(_DWORD*)(a1 + v33), *(_DWORD*)(a1 + v33));
  ++*a2;
  v34 = *a3 + 4;
  *a3 = v34;
  result =
      printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", *a2, v34,
                 "loop_residue_k", *(_DWORD*)(a1 + v34), *(_DWORD*)(a1 + v34));
  ++*a2;
  *a3 += 4;
  return result;
}

__int64 dlaa_template_2fdf0(_QWORD* a1)
{
  unsigned int v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v44[64];
  unsigned int v45;
  int v46;

  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 0, 0, "img_gmem",
             *a1, *a1);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 1, 8, "flt_gmem",
             a1[1], a1[1]);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 2, 16, "flt_1_gmem",
             a1[2], a1[2]);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 3, 24, "out_gmem",
             a1[3], a1[3]);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 4, 32, "out_1_gmem",
             a1[4], a1[4]);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 5, 40, "res_gmem",
             a1[5], a1[5]);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 6, 48, "res_1_gmem",
             a1[6], a1[6]);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 7, 56, "bias_gmem",
             a1[7], a1[7]);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 8, 64,
             "bias_1_gmem", a1[8], a1[8]);
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 9, 72, "n",
             *((_DWORD*)a1 + 18), *((_DWORD*)a1 + 18));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 10, 76, "d",
             *((_DWORD*)a1 + 19), *((_DWORD*)a1 + 19));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 11, 80, "h",
             *((_DWORD*)a1 + 20), *((_DWORD*)a1 + 20));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 12, 84, "w",
             *((_DWORD*)a1 + 21), *((_DWORD*)a1 + 21));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 13, 88, "g",
             *((_DWORD*)a1 + 22), *((_DWORD*)a1 + 22));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 14, 92, "c",
             *((_DWORD*)a1 + 23), *((_DWORD*)a1 + 23));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 15, 96, "o",
             *((_DWORD*)a1 + 24), *((_DWORD*)a1 + 24));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 16, 100, "p",
             *((_DWORD*)a1 + 25), *((_DWORD*)a1 + 25));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 17, 104, "q",
             *((_DWORD*)a1 + 26), *((_DWORD*)a1 + 26));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 18, 108, "k",
             *((_DWORD*)a1 + 27), *((_DWORD*)a1 + 27));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 19, 112, "t",
             *((_DWORD*)a1 + 28), *((_DWORD*)a1 + 28));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 20, 116, "r",
             *((_DWORD*)a1 + 29), *((_DWORD*)a1 + 29));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 21, 120, "s",
             *((_DWORD*)a1 + 30), *((_DWORD*)a1 + 30));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 22, 124, "k_1",
             *((_DWORD*)a1 + 31), *((_DWORD*)a1 + 31));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 23, 128, "t_1",
             *((_DWORD*)a1 + 32), *((_DWORD*)a1 + 32));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 24, 132, "r_1",
             *((_DWORD*)a1 + 33), *((_DWORD*)a1 + 33));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 25, 136, "s_1",
             *((_DWORD*)a1 + 34), *((_DWORD*)a1 + 34));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 26, 140, "stride_h",
             *((_DWORD*)a1 + 35), *((_DWORD*)a1 + 35));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 27, 144, "pad_h",
             *((_DWORD*)a1 + 36), *((_DWORD*)a1 + 36));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 28, 148, "stride_w",
             *((_DWORD*)a1 + 37), *((_DWORD*)a1 + 37));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 29, 152, "pad_w",
             *((_DWORD*)a1 + 38), *((_DWORD*)a1 + 38));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 30, 156, "<alignment>",
             *((_DWORD*)a1 + 39), *((_DWORD*)a1 + 39));
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", 30, 160,
             "a_delta[0]", a1[20], a1[20]);
  v45 = 168;
  v46 = 31;
  sprintf_plt(v44, "b_delta[%d]", 0);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", 31, 168, v44,
             a1[21], a1[21]);
  v46 = 32;
  v45 += 8;
  v2 = v45;
  sprintf_plt(v44, "b_delta[%d]", 1);
  v3 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v46, v2, v44,
             *(_QWORD*)((char*)a1 + v2), *(_QWORD*)((char*)a1 + v2));
  v45 += 8;
  v4 = v45;
  v46 = v3 + 1;
  sprintf_plt(v44, "b_delta[%d]", 2);
  v5 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v46, v4, v44,
             *(_QWORD*)((char*)a1 + v4), *(_QWORD*)((char*)a1 + v4));
  v45 += 8;
  v6 = v45;
  v46 = v5 + 1;
  sprintf_plt(v44, "b_delta[%d]", 3);
  v7 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v46, v6, v44,
             *(_QWORD*)((char*)a1 + v6), *(_QWORD*)((char*)a1 + v6));
  v45 += 8;
  v8 = v45;
  v46 = v7 + 1;
  sprintf_plt(v44, "b_delta[%d]", 4);
  v9 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v46, v8, v44,
             *(_QWORD*)((char*)a1 + v8), *(_QWORD*)((char*)a1 + v8));
  v45 += 8;
  v10 = v45;
  v46 = v9 + 1;
  sprintf_plt(v44, "b_delta[%d]", 5);
  v11 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v46, v10, v44,
             *(_QWORD*)((char*)a1 + v10), *(_QWORD*)((char*)a1 + v10));
  v45 += 8;
  v12 = v45;
  v46 = v11 + 1;
  sprintf_plt(v44, "b_delta[%d]", 6);
  v13 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v46, v12, v44,
             *(_QWORD*)((char*)a1 + v12), *(_QWORD*)((char*)a1 + v12));
  v45 += 8;
  v14 = v45;
  v46 = v13 + 1;
  sprintf_plt(v44, "b_delta[%d]", 7);
  v15 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v46, v14, v44,
             *(_QWORD*)((char*)a1 + v14), *(_QWORD*)((char*)a1 + v14));
  v45 += 8;
  v16 = v45;
  v46 = v15 + 1;
  sprintf_plt(v44, "b_delta[%d]", 8);
  v17 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v46, v16, v44,
             *(_QWORD*)((char*)a1 + v16), *(_QWORD*)((char*)a1 + v16));
  v18 = *(_DWORD*)((char*)a1 + v45 + 8);
  v45 += 8;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v17 + 1, v45, "res_c",
             v18, v18);
  v19 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  v46 = v17 + 2;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v17 + 2, v45,
             "res_fused_c", v19, v19);
  v20 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45,
             "cross_correlation", v20, v20);
  v21 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45,
             "use_avg_pooling", v21, v21);
  v22 = *(unsigned __int16*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%04x)\n", ++v46, v45, "alpha",
             0x0.0p+0, v22);
  v23 = *(unsigned __int16*)((char*)a1 + v45 + 2);
  v45 += 2;
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%04x)\n", ++v46, v45, "beta",
             0x0.0p+0, v23);
  v24 = v45;
  v25 = *(_DWORD*)((char*)a1 + v45 + 2);
  v45 += 2;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45,
             "<alignment>", v25, v25);
  v45 = v24 + 6;
  nvidia_dlss_rel_source_2fbd0((__int64)a1, &v46, &v45);
  v26 = v46;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v46, v45, "ctas_pq",
             *(_DWORD*)((char*)a1 + v45), *(_DWORD*)((char*)a1 + v45));
  v27 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  v46 = v26 + 1;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v26 + 1, v45, "ctas_q",
             v27, v27);
  v28 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45,
             "mul_ctas_pq", v28, v28);
  v29 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45,
             "shr_ctas_pq", v29, v29);
  v30 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "mul_ctas_q",
             v30, v30);
  v31 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "shr_ctas_q",
             v31, v31);
  v32 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "hwc", v32,
             v32);
  v33 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "wc", v33,
             v33);
  v34 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "qk", v34,
             v34);
  v35 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "trsc", v35,
             v35);
  v36 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "trs", v36,
             v36);
  v37 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "rskc", v37,
             v37);
  v38 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45, "loop_start",
             v38, v38);
  v39 = *(_DWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", ++v46, v45,
             "loop_residue_k", v39, v39);
  v40 = *(_QWORD*)((char*)a1 + v45 + 4);
  v45 += 4;
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", ++v46, v45,
             "mem_descriptors.a", v40, v40);
  v41 = *(_QWORD*)((char*)a1 + v45 + 8);
  v45 += 8;
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", ++v46, v45,
             "mem_descriptors.b", v41, v41);
  v42 = *(_QWORD*)((char*)a1 + v45 + 8);
  v45 += 8;
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", ++v46, v45,
             "mem_descriptors.c", v42, v42);
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v46 + 1, v45 + 8,
             "mem_descriptors.d", *(_QWORD*)((char*)a1 + v45 + 8),
             *(_QWORD*)((char*)a1 + v45 + 8));
  return printf_plt("Params size = %zu\n", 0x188u);
}

__int64 dlaa_template_30da0(_QWORD* a1)
{
  unsigned int v2;
  int v3;
  int v4;
  unsigned int v5;
  char v7[64];
  unsigned int v8;
  int v9;

  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 0, 0, "img_gmem",
             *a1, *a1);
  v8 = 8;
  v9 = 1;
  nvidia_dlss_rel_source_308a0((__int64)a1, &v9, &v8);
  nvidia_dlss_rel_source_308a0((__int64)a1, &v9, &v8);
  nvidia_dlss_rel_source_30a50((__int64)a1, &v9, &v8);
  v2 = v8;
  v3 = v9;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v9, v8, "a_delta",
             *(_QWORD*)((char*)a1 + v8), *(_QWORD*)((char*)a1 + v8));
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v3 + 1, v2 + 8,
             "b_delta", *(_QWORD*)((char*)a1 + v2 + 8),
             *(_QWORD*)((char*)a1 + v2 + 8));
  v8 = v2 + 16;
  v9 = v3 + 2;
  nvidia_dlss_rel_source_30a50((__int64)a1, &v9, &v8);
  v5 = v8;
  v4 = v9;
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v9, v8,
             "a_delta[0]", *(_QWORD*)((char*)a1 + v8),
             *(_QWORD*)((char*)a1 + v8));
  sprintf_plt(v7, "b_delta[%d]", 0);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 1, v5 + 8, v7,
             *(_QWORD*)((char*)a1 + v5 + 8), *(_QWORD*)((char*)a1 + v5 + 8));
  sprintf_plt(v7, "b_delta[%d]", 1);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 2, v5 + 16, v7,
             *(_QWORD*)((char*)a1 + v5 + 16), *(_QWORD*)((char*)a1 + v5 + 16));
  sprintf_plt(v7, "b_delta[%d]", 2);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 3, v5 + 24, v7,
             *(_QWORD*)((char*)a1 + v5 + 24), *(_QWORD*)((char*)a1 + v5 + 24));
  sprintf_plt(v7, "b_delta[%d]", 3);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 4, v5 + 32, v7,
             *(_QWORD*)((char*)a1 + v5 + 32), *(_QWORD*)((char*)a1 + v5 + 32));
  sprintf_plt(v7, "b_delta[%d]", 4);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 5, v5 + 40, v7,
             *(_QWORD*)((char*)a1 + v5 + 40), *(_QWORD*)((char*)a1 + v5 + 40));
  sprintf_plt(v7, "b_delta[%d]", 5);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 6, v5 + 48, v7,
             *(_QWORD*)((char*)a1 + v5 + 48), *(_QWORD*)((char*)a1 + v5 + 48));
  sprintf_plt(v7, "b_delta[%d]", 6);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 7, v5 + 56, v7,
             *(_QWORD*)((char*)a1 + v5 + 56), *(_QWORD*)((char*)a1 + v5 + 56));
  sprintf_plt(v7, "b_delta[%d]", 7);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 8, v5 + 64, v7,
             *(_QWORD*)((char*)a1 + v5 + 64), *(_QWORD*)((char*)a1 + v5 + 64));
  sprintf_plt(v7, "b_delta[%d]", 8);
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", v4 + 9, v5 + 72, v7,
             *(_QWORD*)((char*)a1 + v5 + 72), *(_QWORD*)((char*)a1 + v5 + 72));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 10, v5 + 80, "c",
             *(_DWORD*)((char*)a1 + v5 + 80), *(_DWORD*)((char*)a1 + v5 + 80));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 11, v5 + 84, "h",
             *(_DWORD*)((char*)a1 + v5 + 84), *(_DWORD*)((char*)a1 + v5 + 84));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 12, v5 + 88, "w",
             *(_DWORD*)((char*)a1 + v5 + 88), *(_DWORD*)((char*)a1 + v5 + 88));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 13, v5 + 92, "wc",
             *(_DWORD*)((char*)a1 + v5 + 92), *(_DWORD*)((char*)a1 + v5 + 92));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 14, v5 + 96,
             "loop_start", *(_DWORD*)((char*)a1 + v5 + 96),
             *(_DWORD*)((char*)a1 + v5 + 96));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 15, v5 + 100,
             "stride_h", *(_DWORD*)((char*)a1 + v5 + 100),
             *(_DWORD*)((char*)a1 + v5 + 100));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 16, v5 + 104,
             "pad_h", *(_DWORD*)((char*)a1 + v5 + 104),
             *(_DWORD*)((char*)a1 + v5 + 104));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 17, v5 + 108,
             "stride_w", *(_DWORD*)((char*)a1 + v5 + 108),
             *(_DWORD*)((char*)a1 + v5 + 108));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 18, v5 + 112,
             "pad_w", *(_DWORD*)((char*)a1 + v5 + 112),
             *(_DWORD*)((char*)a1 + v5 + 112));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 19, v5 + 116,
             "ctas_pq", *(_DWORD*)((char*)a1 + v5 + 116),
             *(_DWORD*)((char*)a1 + v5 + 116));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v4 + 20, v5 + 120,
             "ctas_q", *(_DWORD*)((char*)a1 + v5 + 120),
             *(_DWORD*)((char*)a1 + v5 + 120));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 21, v5 + 124,
             "mul_ctas_pq", *(_DWORD*)((char*)a1 + v5 + 124),
             *(_DWORD*)((char*)a1 + v5 + 124));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 22, v5 + 128,
             "shr_ctas_pq", *(_DWORD*)((char*)a1 + v5 + 128),
             *(_DWORD*)((char*)a1 + v5 + 128));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 23, v5 + 132,
             "mul_ctas_q", *(_DWORD*)((char*)a1 + v5 + 132),
             *(_DWORD*)((char*)a1 + v5 + 132));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 24, v5 + 136,
             "shr_ctas_q", *(_DWORD*)((char*)a1 + v5 + 136),
             *(_DWORD*)((char*)a1 + v5 + 136));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 25, v5 + 140,
             "<alignment>", *(_DWORD*)((char*)a1 + v5 + 140),
             *(_DWORD*)((char*)a1 + v5 + 140));
  return printf_plt("Params size = %lu\n", 376);
}

__int64 dlaa_template_32c20(__int64 a1)
{
  int v2;
  int* v3;
  int v4;
  unsigned int v5;
  int i;
  int v7;
  __int64 v8;
  int v9;
  char v11[64];

  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 0, 0, "img_gmem",
             *(_QWORD*)(a1 + 368), *(_QWORD*)(a1 + 368));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 1, 8, "skip_gmem",
             *(_QWORD*)(a1 + 376), *(_QWORD*)(a1 + 376));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 2, 16, "flt_gmem",
             *(_QWORD*)(a1 + 384), *(_QWORD*)(a1 + 384));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 3, 24, "out_gmem",
             *(_QWORD*)(a1 + 392), *(_QWORD*)(a1 + 392));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", 4, 32, "bias_gmem",
             *(_QWORD*)(a1 + 400), *(_QWORD*)(a1 + 400));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 5, 40, "h",
             *(_DWORD*)(a1 + 408), *(_DWORD*)(a1 + 408));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 6, 44, "w",
             *(_DWORD*)(a1 + 412), *(_DWORD*)(a1 + 412));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 7, 48, "c",
             *(_DWORD*)(a1 + 416), *(_DWORD*)(a1 + 416));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 8, 52, "p",
             *(_DWORD*)(a1 + 420), *(_DWORD*)(a1 + 420));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 9, 56, "q",
             *(_DWORD*)(a1 + 424), *(_DWORD*)(a1 + 424));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 10, 60, "k",
             *(_DWORD*)(a1 + 428), *(_DWORD*)(a1 + 428));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 11, 64, "r",
             *(_DWORD*)(a1 + 432), *(_DWORD*)(a1 + 432));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 12, 68, "s",
             *(_DWORD*)(a1 + 436), *(_DWORD*)(a1 + 436));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 13, 72, "skip_c",
             *(_DWORD*)(a1 + 440), *(_DWORD*)(a1 + 440));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 14, 76, "with_relu",
             *(_DWORD*)(a1 + 444), *(_DWORD*)(a1 + 444));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 15, 80, "hw",
             *(_DWORD*)(a1 + 448), *(_DWORD*)(a1 + 448));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 16, 84, "wc",
             *(_DWORD*)(a1 + 452), *(_DWORD*)(a1 + 452));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 17, 88, "rsc",
             *(_DWORD*)(a1 + 456), *(_DWORD*)(a1 + 456));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 18, 92, "pq",
             *(_DWORD*)(a1 + 460), *(_DWORD*)(a1 + 460));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 19, 96, "qk",
             *(_DWORD*)(a1 + 464), *(_DWORD*)(a1 + 464));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", 20, 100, "<alignment>",
             *(_DWORD*)(a1 + 468), *(_DWORD*)(a1 + 468));
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", 20, 104,
             "move_fwd_a", *(_QWORD*)(a1 + 472), *(_QWORD*)(a1 + 472));
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", 21, 112,
             "move_fwd_b", *(_QWORD*)(a1 + 480), *(_QWORD*)(a1 + 480));
  printf_plt("[%2d @ +0x%03x] %-32s: %16lld (0x%016llx)\n", 22, 120,
             "move_bwd_b", *(_QWORD*)(a1 + 488), *(_QWORD*)(a1 + 488));
  v2 = *(_DWORD*)(a1 + 436) * *(_DWORD*)(a1 + 432);
  if (v2 < 1) {
    v4 = 23;
    v5 = 128;
    v8 = a1 + 368;
  LABEL_10:
    v9 = v4 - v2 + 32;
    do {
      sprintf_plt(v11, "rs[%02d] <undefined>", v2);
      printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v4++, v5, v11,
                 *(_QWORD*)(v8 + v5), *(_QWORD*)(v8 + v5));
      v5 += 8;
      ++v2;
    } while (v2 != 32);
    v4 = v9;
    goto LABEL_13;
  }
  v3 = (int*)(a1 + 500);
  v4 = 23;
  v5 = 128;
  for (i = 0; i < v2; ++i) {
    sprintf_plt(v11, "rs[%02d].x", i);
    printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4, v5, v11, *(v3 - 1),
               *(v3 - 1));
    sprintf_plt(v11, "rs[%02d].y", i);
    v7 = *v3;
    v3 += 2;
    printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 1, v5 | 4, v11,
               v7, v7);
    v4 += 2;
    v5 += 8;
    if (*(_DWORD*)(a1 + 436) * *(_DWORD*)(a1 + 432) >= 32) {
      v2 = 32;
    }
    else {
      v2 = *(_DWORD*)(a1 + 436) * *(_DWORD*)(a1 + 432);
    }
  }
  v8 = a1 + 368;
  if (v2 <= 31) {
    goto LABEL_10;
  }
LABEL_13:
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4, v5, "loop_start",
             *(_DWORD*)(v8 + v5), *(_DWORD*)(v8 + v5));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v4 + 1, v5 | 4,
             "<alignment>", *(_DWORD*)(v8 + (v5 | 4LL)),
             *(_DWORD*)(v8 + (v5 | 4LL)));
  return printf_plt("Params size = %zu\n", 0x188u);
}

#pragma GCC visibility pop
