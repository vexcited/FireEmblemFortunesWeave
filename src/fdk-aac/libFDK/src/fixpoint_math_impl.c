#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_fLdPow_plt_8666f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_fLdPow(void* this_, __int64 a2, __int64 a3, __int64 a4);

__int64 nn_codec_fLdPow(void* this_, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v8;

  v4 = nn_codec_fLdPow_plt_8666f0(this_, a2, a3, a4, &v8);
  if (v4 >= (int)0x80000000 >> v8) {
    v5 = v4 << v8;
  }
  else {
    v5 = 0x80000000;
  }
  if (v4 <= (int)(0x7FFFFFFFu >> v8)) {
    v6 = v5;
  }
  else {
    v6 = 0x7FFFFFFF;
  }
  if (v8 >= 1) {
    return v6;
  }
  else {
    return (unsigned int)(v4 >> (-(char)v8 & 31));
  }
}

#pragma GCC visibility pop
