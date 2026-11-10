#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern unsigned int SdkData_ce2d58[74];
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn)) charconv_7ce5dc();
void __attribute__((noreturn)) charconv_7cead8();
bool charconv_7ced40(int a1);
__int64 charconv_7ced70(char a1);
void __attribute__((noreturn)) charconv_7ce5dc() { SdkRoutine_7cd620(); }

void __attribute__((noreturn)) charconv_7cead8() { SdkRoutine_7cd620(); }

bool charconv_7ced40(int a1)
{
  return (unsigned int)(a1 - 65) <= 0x39 &&
             ((1LL << ((unsigned __int8)a1 - 65)) & 0x3FFFFFF03FFFFFFLL) != 0 ||
         (unsigned int)(a1 - 48) < 0xA;
}

__int64 charconv_7ced70(char a1)
{
  if ((unsigned __int8)(a1 - 49) > 0x49u) {
    return 0;
  }
  else {
    return SdkData_ce2d58[(unsigned __int8)(a1 - 49)];
  }
}

#pragma GCC visibility pop
