#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 opus_decoder_68420(__int64 result, __int64 a2, __int64 a3, int a4,
                           unsigned int a5, __int16* a6, int a7);

__int64 opus_decoder_68420(__int64 result, __int64 a2, __int64 a3, int a4,
                           unsigned int a5, __int16* a6, int a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int16* v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int16* v33;
  int v34;
  __int64 v35;
  __int64 v38;

  if ((int)a5 >= 1 && a4 >= 1) {
    v7 = 2LL * a5;
    v8 = 8LL * a5;
    v9 = 0;
    v10 = 0;
    v11 = a2;
    v12 = result;
    v13 = a3;
    v14 = a4 & 0x7FFFFFFC;
    v38 = a4 & 3;
    v35 = a5;
    v15 = a3 + 6LL * a5;
    v16 = result + 6LL * a5;
    v17 = a2 + 6LL * a5;
    v18 = 48000 / a7;
    v19 = 2 * v18;
    v20 = 4LL * a5;
    v21 = a3 + v20;
    v22 = result + v20;
    v23 = a2 + v20;
    do {
      v24 = 0;
      if ((unsigned int)a4 >= 4) {
        v25 = a6;
        v26 = v9;
        do {
          v24 += 4;
          v27 = *v25 * *v25;
          *(_WORD*)(a3 + v26) =
              (unsigned int)((__int16)(v27 >> 15) * *(__int16*)(a2 + v26) +
                             ((int)((2 * v27) & 0xFFFF0000 ^ 0x7FFF0000) >>
                              16) *
                                 *(__int16*)(result + v26)) >>
              15;
          v28 = v25[v18] * v25[v18];
          *(_WORD*)(a3 + v7 + v26) =
              (unsigned int)((__int16)(v28 >> 15) * *(__int16*)(a2 + v7 + v26) +
                             ((int)((2 * v28) & 0xFFFF0000 ^ 0x7FFF0000) >>
                              16) *
                                 *(__int16*)(result + v7 + v26)) >>
              15;
          v29 = v25[2 * v18] * v25[2 * v18];
          *(_WORD*)(v21 + v26) =
              (unsigned int)((__int16)(v29 >> 15) * *(__int16*)(v23 + v26) +
                             ((int)((2 * v29) & 0xFFFF0000 ^ 0x7FFF0000) >>
                              16) *
                                 *(__int16*)(v22 + v26)) >>
              15;
          v30 = v25[3 * v18];
          v25 += 4 * v18;
          *(_WORD*)(v15 + v26) =
              (unsigned int)((__int16)((v30 * v30) >> 15) *
                                 *(__int16*)(v17 + v26) +
                             ((int)((2 * v30 * v30) & 0xFFFF0000 ^
                                    0x7FFF0000) >>
                              16) *
                                 *(__int16*)(v16 + v26)) >>
              15;
          v26 += v8;
        } while (v14 != v24);
      }
      if (v38 != 0) {
        v31 = v38;
        v32 = v7 * v24;
        v33 = (__int16*)((char*)a6 + v19 * v24);
        do {
          v34 = *v33;
          v33 = (__int16*)((char*)v33 + v19);
          --v31;
          *(_WORD*)(v13 + v32) =
              (unsigned int)((__int16)((v34 * v34) >> 15) *
                                 *(__int16*)(v11 + v32) +
                             ((int)((2 * v34 * v34) & 0xFFFF0000 ^
                                    0x7FFF0000) >>
                              16) *
                                 *(__int16*)(v12 + v32)) >>
              15;
          v32 += v7;
        } while (v31 != 0);
      }
      ++v10;
      v13 += 2;
      v12 += 2;
      v11 += 2;
      v9 += 2;
    } while (v10 != v35);
  }
  return result;
}

#pragma GCC visibility pop
