#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_133fc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_134360(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1345d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_134890(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_b83c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 settings_server_proxy_133c30(__int64 a1, _QWORD* a2);
__int64 settings_server_proxy_133c50(__int64 a1, _QWORD* a2);
__int64 settings_server_proxy_133c70(__int64 a1, _QWORD* a2, unsigned int a3);
__int64 settings_server_proxy_133ca0(__int64 a1, __int64 a2, __int64 a3,
                                     _QWORD* a4);
__int64 settings_server_proxy_133cd0(__int64 a1, _QWORD* a2);
__int64 settings_server_proxy_133cf0(__int64 a1, _QWORD* a2);
__int64 settings_server_proxy_133d10(__int64 a1, _QWORD* a2);
__int64 settings_server_proxy_133d30(__int64 a1, _QWORD* a2);
__int64 settings_server_proxy_133d80(__int64 a1, __int64 a2, _QWORD* a3);

__int64 settings_server_proxy_133c30(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 9);
}

__int64 settings_server_proxy_133c50(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 10);
}

__int64 settings_server_proxy_133c70(__int64 a1, _QWORD* a2, unsigned int a3)
{
  return SdkRoutine_134360(a1 + 8, *a2, a2[1], a3, 11);
}

__int64 settings_server_proxy_133ca0(__int64 a1, __int64 a2, __int64 a3,
                                     _QWORD* a4)
{
  return SdkRoutine_1345d0(a1 + 8, a2, a3, *a4, a4[1], 13);
}

__int64 settings_server_proxy_133cd0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, a2[1], 15);
}

__int64 settings_server_proxy_133cf0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, a2[1], 16);
}

__int64 settings_server_proxy_133d10(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, a2[1], 17);
}

__int64 settings_server_proxy_133d30(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 18);
}

__int64 settings_server_proxy_133d80(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_133fc0(a1 + 8, a2, *a3, a3[1], 22);
}

#pragma GCC visibility pop
