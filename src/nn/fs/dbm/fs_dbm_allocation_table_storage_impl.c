#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
extern __int64 SdkData_e86ce0;
extern __int64 SdkData_e86ce8;
__int64 fs_dbm_allocation_table_storage_bf9b0(__int64 a1, _QWORD* a2);
_QWORD* fs_dbm_allocation_table_storage_c03c0(_QWORD* result);
__int64 fs_dbm_allocation_table_storage_c0440(_QWORD* a1);

__int64 fs_dbm_allocation_table_storage_bf9b0(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  if (*(_QWORD*)(a1 + 8) == 0) {
    return 3533826;
  }
  v2 = *(_QWORD*)(a1 + 24);
  *a2 = v2;
  return 0;
}

_QWORD* fs_dbm_allocation_table_storage_c03c0(_QWORD* result)
{
  __int64 v1;

  *result = SdkData_e86ce8 + 16;
  v1 = result[8];
  result[2] = SdkData_e86ce0 + 16;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    return (_QWORD*)std___1___shared_weak_count___release_weak_plt(v1);
  }
  return result;
}

__int64 fs_dbm_allocation_table_storage_c0440(_QWORD* a1)
{
  __int64 v1;

  *a1 = SdkData_e86ce8 + 16;
  v1 = a1[8];
  a1[2] = SdkData_e86ce0 + 16;
  if (v1 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    return SdkRoutine_857220(a1, 96);
  }
  (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  std___1___shared_weak_count___release_weak_plt(v1);
  return SdkRoutine_857220(a1, 96);
}

#pragma GCC visibility pop
