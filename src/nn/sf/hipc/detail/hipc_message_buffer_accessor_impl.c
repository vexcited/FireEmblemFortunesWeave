#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool nn_sf_hipc_detail_HipcMessageBufferAccessor_SetHeadPointers(
    __int64* a1, __int64 a2, unsigned __int16 a3);

bool nn_sf_hipc_detail_HipcMessageBufferAccessor_SetHeadPointers(
    __int64* a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3;
  __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;

  v3 = *a1;
  a1[3] = *a1;
  v4 = v3 + 8;
  if ((*(_BYTE*)a2 & 1) == 0 &&
      (*(_BYTE*)(a2 + 1) == 0 ? (v5 = *(_BYTE*)(a2 + 2) == 0) : (v5 = false),
       v5)) {
    a1[4] = 0;
  }
  else {
    a1[4] = v4;
    v4 = v3 + 12;
    if (*(_BYTE*)a2 == 1) {
      a1[5] = v4;
      v4 = v3 + 20;
    }
    if (*(_BYTE*)(a2 + 1) != 0) {
      a1[6] = v4;
      v4 += 4LL * *(unsigned __int8*)(a2 + 1);
    }
    if (*(_BYTE*)(a2 + 2) != 0) {
      a1[7] = v4;
      v4 += 4LL * *(unsigned __int8*)(a2 + 2);
    }
  }
  if (*(_BYTE*)(a2 + 3) != 0) {
    a1[8] = v4;
    v4 += 8LL * *(unsigned __int8*)(a2 + 3);
  }
  if (*(_BYTE*)(a2 + 4) != 0) {
    a1[9] = v4;
    v4 += 12LL * *(unsigned __int8*)(a2 + 4);
  }
  if (*(_BYTE*)(a2 + 5) != 0) {
    a1[10] = v4;
    v4 += 12LL * *(unsigned __int8*)(a2 + 5);
  }
  if (*(_BYTE*)(a2 + 6) != 0) {
    a1[11] = v4;
    v4 += 12LL * *(unsigned __int8*)(a2 + 6);
  }
  if (*(_WORD*)(a2 + 8) != 0) {
    a1[12] = v4;
    v4 += *(unsigned __int16*)(a2 + 8);
  }
  if (*(_BYTE*)(a2 + 10) != 0) {
    if (a3 != 0) {
      v4 = v3 + 4LL * a3;
    }
    a1[13] = v4;
    v4 += 8LL * *(unsigned __int8*)(a2 + 10);
  }
  v6 = v4 - v3;
  v7 = a1[1];
  if (v6 <= v7) {
    a1[2] = v6;
  }
  return v6 <= v7;
}

#pragma GCC visibility pop
