#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_zv_DeployManager_vtable[])();
__int64 DeployManager_Destructor(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6);
__int64 DeployManager_Destructor(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  a1[8] = 0;
  *a1 = game_map_zv_DeployManager_vtable;
  v7 = *(_QWORD*)(a1[4] + 8LL);
  v8 = *(_QWORD*)(v7 + 24);
  *(_DWORD*)v7 = 0;
  *(_WORD*)(v7 + 4) = 9;
  *(_QWORD*)(v7 + 8) = 0x100000000LL;
  *(_DWORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 32) = v8;
  memset(v7 + 64, 255, 1024, a4, a5, a6);
  memset(v7 + 1096, 0, 1536, v9, v10, v11);
  v12 = *(_QWORD*)(v7 + 2640);
  *(_DWORD*)(v7 + 2632) = 0;
  *(_QWORD*)(v7 + 2664) = 0;
  *(_QWORD*)(v7 + 2672) = 0;
  *(_QWORD*)(v7 + 2648) = v12;
  v13 = *(_QWORD*)(a1[6] + 8LL);
  v14 = *(_QWORD*)(v13 + 24);
  *(_DWORD*)v13 = 0;
  *(_WORD*)(v13 + 4) = 9;
  *(_QWORD*)(v13 + 8) = 0x100000000LL;
  *(_DWORD*)(v13 + 16) = 0;
  *(_DWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 32) = v14;
  memset(v13 + 64, 255, 1024, v15, v16, v17);
  result = memset(v13 + 1096, 0, 1536, v18, v19, v20);
  v22 = *(_QWORD*)(v13 + 2640);
  *(_DWORD*)(v13 + 2632) = 0;
  *(_QWORD*)(v13 + 2664) = 0;
  *(_QWORD*)(v13 + 2672) = 0;
  *(_QWORD*)(v13 + 2648) = v22;
  v23 = a1[7];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    result = std___1___shared_weak_count___release_weak(v23);
    v24 = a1[5];
    if (v24 == 0) {
      return result;
    }
  }
  else {
    v24 = a1[5];
    if (v24 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    return std___1___shared_weak_count___release_weak(v24);
  }
  return result;
}

#pragma GCC visibility pop
