#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PulseSignal_Clear_plt(__int64);
bool nerd_gillette_internal_otete_jaimev2_7479f0(void* this_, bool* a2,
                                                 unsigned __int8* a3,
                                                 unsigned __int64* a4,
                                                 unsigned __int64* a5);
__int64 nerd_gillette_internal_otete_jaimev2_756c30(void* this_);
float nerd_gillette_internal_otete_jaimev2_756c40(void* this_);
void* nerd_gillette_internal_otete_jaimev2_757670(void* this_);

bool nerd_gillette_internal_otete_jaimev2_7479f0(void* this_, bool* a2,
                                                 unsigned __int8* a3,
                                                 unsigned __int64* a4,
                                                 unsigned __int64* a5)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char v9;

  {
    v5 = *a4;
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = 8LL * (_QWORD)a3;
  if (*a4 >= 8 * (__int64)a3) {
    v7 = 8LL * (_QWORD)a3;
  }
  else {
    v7 = *a4;
    __asm__ volatile("" ::"r"(v7));
  }
  if (v6 > v5) {
    v8 = v7 >> 3;
    v9 = v7++ & 7;
    *(_BYTE*)this_ = ((unsigned __int8)a2[v8] >> v9) & 1;
  }
  *a4 = v7;
  return v6 > v5;
}

__int64 nerd_gillette_internal_otete_jaimev2_756c30(void* this_)
{
  *((_QWORD*)this_ + 55) = 0;
  *((_QWORD*)this_ + 56) = 0;
  return PulseSignal_Clear_plt((__int64)this_ + 208);
}

float nerd_gillette_internal_otete_jaimev2_756c40(void* this_)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  float result;
  unsigned __int64 v3;

  {
    v1 = *((_QWORD**)this_ + 35);
    __asm__ volatile("" ::"r"(v1));
  }
  result = 0x0.0p+0f;
  {
    v3 = v1[1];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 >= 8) {
    return (float)(unsigned int)(v3 - 1) /
           (float)((float)(unsigned int)(*(int*)(*v1 + 4 * v3 - 4) -
                                         *(int*)*v1) *
                   0x1.0c6f7a0000000p-20f);
  }
  return result;
}

void* nerd_gillette_internal_otete_jaimev2_757670(void* this_)
{
  *((_DWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *(_QWORD*)this_ = 0;
  *((_QWORD*)this_ + 1) = 0;
  *((_DWORD*)this_ + 4) = 0;
  *(_QWORD*)((char*)this_ + 20) = 0x3F8000003F800000LL;
  return this_;
}

#pragma GCC visibility pop
