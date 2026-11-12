#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SequenceSoundPlayer_28e690(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void nn_atk_detail_294f30(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void MmlParser_28d3b0(PSEUDO_X8 x8_,
                                                 __int64 unused_int0,
                                                 __int64 a1, __int64 a2,
                                                 int a3);
__int64 MmlParser_28d400(__int64 a1, unsigned int a2, unsigned int* a3);
__attribute__((swiftcall)) void
SequenceSoundPlayer_28e690_alt1(PSEUDO_X8, __int64 result,
                                int) __asm__("SequenceSoundPlayer_28e690");
__attribute__((swiftcall)) void
nn_atk_detail_294f30_alt1(PSEUDO_X8, __int64 result,
                          int) __asm__("nn_atk_detail_294f30");

__attribute__((swiftcall)) void MmlParser_28d3b0(PSEUDO_X8 x8_,
                                                 __int64 unused_int0,
                                                 __int64 a1, __int64 a2, int a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a3 <= 31) {
    X8CALL_X0(__int64, SequenceSoundPlayer_28e690_alt1((void*)(a4), a1, a3)),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  if ((unsigned int)a3 <= 0x2F) {
    X8CALL_X0(__int64, nn_atk_detail_294f30_alt1((void*)(a4), a2, a3 - 32)),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  *a4 = 0;
  a4[1] = 0;
  {
    result;
    return;
  }
}

__int64 MmlParser_28d400(__int64 a1, unsigned int a2, unsigned int* a3)
{
  unsigned __int8* v3;

  v3 = (unsigned __int8*)(a1 + a2);
  if (*v3 == 254) {
    *a3 = __rev16(*(unsigned __int16*)(v3 + 1)) | 1;
    return a2 + 3;
  }
  else {
    *a3 = 1;
    return a2;
  }
}

#pragma GCC visibility pop
