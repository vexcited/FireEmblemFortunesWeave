#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1a51a0(__int64, __int64, _DWORD*);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_socket_resolver_client_1a4ea0(void* this_, int* a2);

__int64 nn_socket_resolver_client_1a4ea0(void* this_, int* a2)
{
  unsigned int v3;
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  _DWORD v18[4];
  _QWORD v19[311];
  __int64 v20;

  v3 = nn_os_GetSystemTick_plt(this_);
  memset_plt((void*)v18, nullptr, 2496);
  v5 = (unsigned int*)v19;
  v6 = -623;
  v7 = 1;
  v18[0] = v3;
  do {
    v8 = v6 + 1812433253 * (v3 ^ (v3 >> 30)) + 624;
    v9 = v6 + 1812433253 * (v8 ^ (v8 >> 30)) + 625;
    *(v5 - 3) = v8;
    *(v5 - 2) = v9;
    v10 = v6 + 1812433253 * (v9 ^ (v9 >> 30)) + 626;
    v11 = v6 + 1812433253 * (v10 ^ (v10 >> 30)) + 627;
    *(v5 - 1) = v10;
    *v5 = v11;
    v12 = v6 + 1812433253 * (v11 ^ (v11 >> 30)) + 628;
    v13 = v6 + 1812433253 * (v12 ^ (v12 >> 30)) + 629;
    v5[1] = v12;
    v5[2] = v13;
    v14 = 1812433253 * (v13 ^ (v13 >> 30));
    v15 = v7 + v14;
    v16 = v6 + v14;
    v7 += 7;
    v6 += 7;
    v3 = v15 + 6;
    v5[3] = v16 + 630;
    v5 += 7;
  } while (v6 != 0);
  v19[310] = 0;
  v20 = 0x7FFFFFFF00000004LL;
  *(_DWORD*)this_ = SdkRoutine_1a51a0((__int64)&v20, (__int64)v18, &v20);
  return 0;
}

#pragma GCC visibility pop
