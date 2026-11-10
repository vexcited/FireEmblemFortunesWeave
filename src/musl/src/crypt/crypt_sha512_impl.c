#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 musl_crypt_7969e0(_QWORD, _QWORD);
__int64 crypt_sha512_7965a0(__int64* a1, __int64 a2, unsigned __int64 a3);

__int64 crypt_sha512_7965a0(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  bool v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;

  v3 = *a1;
  v4 = a3;
  v5 = a2;
  v8 = *a1 & 0x7F;
  v7 = (*(_DWORD*)a1 & 0x7F) == 0;
  *a1 += a3;
  if (!v7) {
    v9 = a1 + 9;
    v10 = v3 & 0x7F;
    v11 = (unsigned int)(128 - v8);
    if (a3 < v11) {
      v12 = (_QWORD*)((char*)v9 + v10);
      return memcpy_plt(v12, v5, v4);
    }
    memcpy_plt((char*)v9 + v10, a2, (unsigned int)(128 - v8));
    v5 += v11;
    musl_crypt_7969e0(a1, a1 + 9);
    v4 -= v11;
  }
  if (v4 >= 0x80) {
    do {
      musl_crypt_7969e0(a1, v5);
      v4 -= 128LL;
      v5 += 128;
    } while (v4 > 0x7F);
  }
  v12 = a1 + 9;
  return memcpy_plt(v12, v5, v4);
}

#pragma GCC visibility pop
