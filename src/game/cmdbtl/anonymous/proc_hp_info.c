#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 ui_LayoutAccessor_empty_;
__int64 ProcHpInfo_Unknown28(__int64 a1);
__int64 ProcHpInfo_Unknown29(__int64 a1);

__int64 ProcHpInfo_Unknown28(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64* v4;

  result = *(_QWORD*)(a1 + 240);
  if (result != 0) {
    v3 = *(__int64**)(a1 + 168);
    if (v3 != nullptr) {
      v4 = v3;
    }
    else {
      v4 = &ui_LayoutAccessor_empty_;
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         v4);
  }
  return result;
}

__int64 ProcHpInfo_Unknown29(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64* v4;

  result = *(_QWORD*)(a1 + 240);
  if (result != 0) {
    v3 = *(__int64**)(a1 + 168);
    if (v3 != nullptr) {
      v4 = v3;
    }
    else {
      v4 = &ui_LayoutAccessor_empty_;
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         v4);
  }
  return result;
}

#pragma GCC visibility pop
