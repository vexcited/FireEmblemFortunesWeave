#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_audio_detail_InputInjectorImpl_InputInjectorImpl(
    void* this_, __int64 a2, __int64 a3, unsigned __int64 a4);

__int64 nn_audio_detail_InputInjectorImpl_InputInjectorImpl(void* this_,
                                                            __int64 a2,
                                                            __int64 a3,
                                                            unsigned __int64 a4)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 result;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt(this_, nullptr, 260, a4),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt((void*)((char*)this_ + 288), nullptr, 539, v5),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *((_QWORD*)this_ + 33) = 0;
  *((_QWORD*)this_ + 34) = 0;
  *((_QWORD*)this_ + 35) = 0;
  *((_DWORD*)this_ + 72) = 0;
  *(_DWORD*)this_ = -1;
  v6 = ((unsigned __int64)this_ + 299) & 0xFFFFFFFFFFFFFFF8LL;
  result = memset_plt((void*)v6, nullptr, 320, v7),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_QWORD*)(v6 + 296) = v6 + 40;
  *(_DWORD*)(v6 + 312) = 0;
  *(_QWORD*)(v6 + 320) = 0;
  *(_QWORD*)(v6 + 328) = 0;
  *(_QWORD*)(v6 + 336) = 0;
  *(_QWORD*)(v6 + 344) = 0;
  *(_QWORD*)(v6 + 352) = 0;
  *(_QWORD*)(v6 + 360) = 0;
  *(_QWORD*)(v6 + 368) = 0;
  *(_QWORD*)(v6 + 376) = 0;
  *(_QWORD*)(v6 + 384) = 0;
  *(_QWORD*)(v6 + 392) = 0;
  *(_QWORD*)(v6 + 400) = 0;
  *(_QWORD*)(v6 + 408) = 0;
  *(_QWORD*)(v6 + 416) = 0;
  *(_QWORD*)(v6 + 424) = 0;
  *(_QWORD*)(v6 + 432) = 0;
  *(_QWORD*)(v6 + 440) = 0;
  *(_QWORD*)(v6 + 448) = 0;
  *(_QWORD*)(v6 + 456) = 0;
  *(_QWORD*)(v6 + 464) = 0;
  *(_QWORD*)(v6 + 472) = 0;
  *(_QWORD*)(v6 + 480) = 0;
  *(_QWORD*)(v6 + 488) = 0;
  *(_QWORD*)(v6 + 496) = 0;
  *(_QWORD*)(v6 + 504) = 0;
  *((_QWORD*)this_ + 104) = v6;
  return result;
}

#pragma GCC visibility pop
