#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* InternalPxSQ_2ea7e0(__int64 a1, int a2, unsigned int a3);

_QWORD* InternalPxSQ_2ea7e0(__int64 a1, int a2, unsigned int a3)
{
  _QWORD* result;

  result = (_QWORD*)(a1 + 8);
  switch (a2) {
  case -1:
    result = (_QWORD*)result[13];
    if (result == nullptr) {
      return result;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 112LL))(result,
                                                                        a3);
  case 1:
    result = (_QWORD*)result[7];
    if (result == nullptr) {
      return result;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 112LL))(result,
                                                                        a3);
  case 0:
    result = (_QWORD*)result[1];
    if (result != nullptr) {
      return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 112LL))(
          result, a3);
    }
    break;
  default:
    break;
  }
  return result;
}

#pragma GCC visibility pop
