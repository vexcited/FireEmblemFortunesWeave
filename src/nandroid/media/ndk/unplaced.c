#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_AMessage_findBuffer_plt(__int64, const char*, __int64);
__int64 nandroid_RefBase_decStrong_plt(__int64, __int64);
__int64 nandroid_media_ndk_5446d0(__int64* a1, char* a2, _QWORD* a3,
                                  _QWORD* a4);

__int64 nandroid_media_ndk_5446d0(__int64* a1, char* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  char v7;
  __int64 v8;
  __int64 v10;

  {
    v4 = *a1;
    __asm__ volatile("" ::"r"(v4));
  }
  v10 = 0;
  v7 = nandroid_AMessage_findBuffer_plt(v4, a2, (__int64)&v10);
  v8 = v10;
  if ((v7 & 1) != 0) {
    *a3 = *(char**)((char*)(*(void*(*)[1])0x18LL) + v10) +
          *(__int64*)((char*)((__int64*)0x28LL) + v10) +
          *(__int64*)((char*)((__int64*)0x28LL) + v10);
    *a4 = *(__int64*)((char*)((__int64*)0x30LL) + v8);
  LABEL_4:
    nandroid_RefBase_decStrong_plt(v8, (__int64)&v10);
    return v7 & 1;
  }
  if (v10 != 0) {
    goto LABEL_4;
  }
  return v7 & 1;
}

#pragma GCC visibility pop
