#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_760770(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_760940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_760d50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_761590(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_e80a0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_f1e30(_QWORD, _QWORD, _QWORD);
__int64 ldn_service_proxy_7604c0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 ldn_service_proxy_7604e0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 unsigned __int16 a5);
__int64 ldn_service_proxy_760510(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 unsigned __int16 a5);
__int64 ldn_service_proxy_760580(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, _QWORD* a6);
__int64 ldn_service_proxy_7605e0(__int64 a1, unsigned __int8 a2);
__int64 ldn_service_proxy_760690(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                                 unsigned __int16 a5, unsigned int a6);
__int64 ldn_service_proxy_760720(__int64 a1, unsigned __int16 a2);
__int64 ldn_service_proxy_760730(__int64 a1, unsigned __int16 a2);

__int64 ldn_service_proxy_7604c0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_760770(a1 + 8, a2, 1152, *a3, 8LL * a3[1], 101);
}

__int64 ldn_service_proxy_7604e0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 unsigned __int16 a5)
{
  return SdkRoutine_760940(a1 + 8, *a2, 1152LL * a2[1], a3, a4, a5, 102);
}

__int64 ldn_service_proxy_760510(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 unsigned __int16 a5)
{
  return SdkRoutine_760940(a1 + 8, *a2, 1152LL * a2[1], a3, a4, a5, 103);
}

__int64 ldn_service_proxy_760580(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, _QWORD* a6)
{
  return SdkRoutine_760d50(a1 + 8, a2, a3, a4, a5, *a6, 12LL * a6[1], 203);
}

__int64 ldn_service_proxy_7605e0(__int64 a1, unsigned __int8 a2)
{
  return SdkRoutine_f1e30(a1 + 8, a2, 207);
}

__int64 ldn_service_proxy_760690(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                                 unsigned __int16 a5, unsigned int a6)
{
  return SdkRoutine_761590(a1 + 8, a2 & 0xFFFFFFFFFFFFLL, a3 & 0xFFFFFFFFFFFFLL,
                           *a4, a4[1], a5, a6, 502);
}

__int64 ldn_service_proxy_760720(__int64 a1, unsigned __int16 a2)
{
  return SdkRoutine_e80a0(a1 + 8, a2, 505);
}

__int64 ldn_service_proxy_760730(__int64 a1, unsigned __int16 a2)
{
  return SdkRoutine_e80a0(a1 + 8, a2, 600);
}

#pragma GCC visibility pop
