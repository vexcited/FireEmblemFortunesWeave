#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_e87c88;
__int64 nn_codec_fixp_cos_sin(__int64 this_, char a2, _DWORD* a3, int* a4,
                              int* a5);

__int64 nn_codec_fixp_cos_sin(__int64 this_, char a2, _DWORD* a3, int* a4,
                              int* a5)
{
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned __int64 v9;
  __int16 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int16* v15;
  unsigned __int16* v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v5 = ((unsigned __int64)(683565276LL * (int)this_) >> 31) & 0xFFFFFFFE;
  v6 = v5 >> (21 - a2);
  if (v6 >= 0) {
    LOWORD(v7) = v5 >> (21 - a2);
  }
  else {
    v7 = -v6;
  }
  v8 = v7 & 0x3FF;
  v9 = 1686629713LL * (v5 & (unsigned int)~(-1 << (21 - a2)));
  v10 = v6 + 512;
  if (v8 > 0x200) {
    v8 = 1024 - v8;
  }
  v11 = v8 > 0x100;
  v12 = SdkData_e87c88 + 4LL * (512 - v8);
  v13 = SdkData_e87c88 + 4LL * v8;
  v14 = ((v9 >> 29) & 0xFFFFFFF8) << a2;
  if (v8 <= 0x100) {
    v15 = (unsigned __int16*)(v13 + 2);
  }
  else {
    v15 = (unsigned __int16*)(SdkData_e87c88 + 4LL * (512 - v8));
  }
  if (v11) {
    v16 = (unsigned __int16*)(v12 + 2);
  }
  else {
    v16 = (unsigned __int16*)v13;
  }
  v17 = *v15;
  v18 = *v16;
  if ((v6 & 0x400) != 0) {
    v19 = -v17;
  }
  else {
    v19 = v17;
  }
  if ((v10 & 0x400) != 0) {
    v20 = -v18;
  }
  else {
    v20 = v18;
  }
  v21 = v19 << 16;
  v22 = v20 << 16;
  *a3 = v22 - (((unsigned __int64)(v21 * (__int64)v14) >> 31) & 0xFFFFFFFE);
  *a4 = (((unsigned __int64)(v22 * (__int64)v14) >> 31) & 0xFFFFFFFE) + v21;
  return this_;
}

#pragma GCC visibility pop
