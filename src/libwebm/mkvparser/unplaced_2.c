#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 mkvparser_Cluster_Load_plt(__int64, __int64, __int64);
__int64 libwebm_mkvparser_554c10(void* this_, void* a2);

__int64 libwebm_mkvparser_554c10(void* this_, void* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;

  if (a2 != nullptr) {
    v10 = 0;
    v11 = 0;
    v4 = mkvparser_Cluster_Load_plt((__int64)a2, (__int64)&v11, (__int64)&v10);
    {
      v5 = *((_QWORD*)a2 + 5);
      __asm__ volatile("" ::"r"(v5));
    }
    if (v4 < 0) {
      v5 = v4;
    }
    if (v5 < 0 ||
        (v6 = *((__int16*)this_ + 12), (v5 ^ 0x7FFFFFFFFFFFFFFFLL) < v6)) {
      {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 184LL) + 40LL);
        __asm__ volatile("" ::"r"(v7));
      }
      v8 = -1;
    }
    else {
      v8 = v5 + v6;
      {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 184LL) + 40LL);
        __asm__ volatile("" ::"r"(v7));
      }
      if (v8 == 0) {
        return v8 * v7;
      }
    }
  }
  else {
    {
      v8 = *((__int16*)this_ + 12);
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)((char*)0x0LL) + 184LL) + 40LL);
      __asm__ volatile("" ::"r"(v7));
    }
    if (*((_WORD*)this_ + 12) == 0) {
      return v8 * v7;
    }
  }
  if (v7 > 0x7FFFFFFFFFFFFFFFLL / v8) {
    return -1;
  }
  return v8 * v7;
}

#pragma GCC visibility pop
