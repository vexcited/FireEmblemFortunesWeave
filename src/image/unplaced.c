#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* image_5f044(__int64* a1, unsigned int a2, uint16x8_t* a3);

__int64* image_5f044(__int64* a1, unsigned int a2, uint16x8_t* a3)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  uint8x8_t v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  uint16x8_t v14;
  uint16x8_t v15;
  uint8x8_t v16;
  uint16x8_t v17;
  uint8x8_t v18;
  uint16x8_t* v19;
  uint16x8_t v20;
  uint16x8_t v21;

  v4 = *a1;
  v5 = a1[1];
  v3 = a1 + 2;
  v6 = *v3;
  v7 = v3[1];
  v3 += 2;
  LANES64(v8).n64_u64[0] = LANES64_OF(vdup_n_s8(0x80u)).n64_u64[0];
  v9 = *v3;
  v10 = v3[1];
  v3 += 2;
  v13 = *v3;
  v12 = v3[1];
  v14 = vsubl_u8(*(uint8x8_t*)(v5 + a2), v8);
  v15 = vsubl_u8(*(uint8x8_t*)(v6 + a2), v8);
  LANES64(v16).n64_u64[0] = *(unsigned __int64*)(v9 + a2);
  v17 = vsubl_u8(*(uint8x8_t*)(v7 + a2), v8);
  LANES64(v18).n64_u64[0] = *(unsigned __int64*)(v10 + a2);
  *a3 = vsubl_u8(*(uint8x8_t*)(v4 + a2), v8);
  a3[1] = v14;
  a3[2] = v15;
  a3[3] = v17;
  v19 = a3 + 4;
  v20 = vsubl_u8(*(uint8x8_t*)(v13 + a2), v8);
  v21 = vsubl_u8(*(uint8x8_t*)(v12 + a2), v8);
  *v19 = vsubl_u8(v16, v8);
  v19[1] = vsubl_u8(v18, v8);
  v19[2] = v20;
  v19[3] = v21;
  return v3 + 2;
}

#pragma GCC visibility pop
