#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_zv_DeployManager_vtable[])();
__int64
DeployManager_Destructor_alt1(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5,
                              __int64 a6) __asm__("DeployManager_Destructor");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 DeployManager_Destructor(_QWORD* a1);

__int64 DeployManager_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  a1[8] = 0;
  *a1 = game_map_zv_DeployManager_vtable;
  v2 = *(_QWORD*)(a1[4] + 8LL);
  v3 = *(_QWORD*)(v2 + 24);
  *(_DWORD*)v2 = 0;
  *(_WORD*)(v2 + 4) = 9;
  *(_QWORD*)(v2 + 8) = 0x100000000LL;
  *(_DWORD*)(v2 + 16) = 0;
  *(_DWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 32) = v3;
  memset_alt1(v2 + 64, 255, 0x400u);
  memset_alt1(v2 + 1096, 0, 0x600u);
  v4 = *(_QWORD*)(v2 + 2640);
  *(_DWORD*)(v2 + 2632) = 0;
  *(_QWORD*)(v2 + 2664) = 0;
  *(_QWORD*)(v2 + 2672) = 0;
  *(_QWORD*)(v2 + 2648) = v4;
  v5 = *(_QWORD*)(a1[6] + 8LL);
  v6 = *(_QWORD*)(v5 + 24);
  *(_DWORD*)v5 = 0;
  *(_WORD*)(v5 + 4) = 9;
  *(_QWORD*)(v5 + 8) = 0x100000000LL;
  *(_DWORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 32) = v6;
  memset_alt1(v5 + 64, 255, 0x400u);
  result = memset_alt1(v5 + 1096, 0, 0x600u);
  v8 = *(_QWORD*)(v5 + 2640);
  *(_DWORD*)(v5 + 2632) = 0;
  *(_QWORD*)(v5 + 2664) = 0;
  *(_QWORD*)(v5 + 2672) = 0;
  *(_QWORD*)(v5 + 2648) = v8;
  v9 = a1[7];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak_alt1(v9);
    v10 = a1[5];
    if (v10 == 0) {
      return result;
    }
  }
  else {
    v10 = a1[5];
    if (v10 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak_alt1(v10);
  }
  return result;
}

#pragma GCC visibility pop
