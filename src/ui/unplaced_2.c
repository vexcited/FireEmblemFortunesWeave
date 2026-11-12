#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_160bd60(__int64 a1);
__int64 ui_16125c0(__int64 a1);

__int64 ui_160bd60(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  const char* v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  LayoutAccessor_1560070((void*)(&v7_.v7), (__int64*)(a1 + 848), "L_Page00");
  result = v7_.v8;
  if (v7_.v8 != 0) {
    v3 = std___1___shared_weak_count_lock(v7_.v8);
    v4 = v7_.v7;
    result = v7_.v8;
    if (v7_.v8 != 0) {
      result = std___1___shared_weak_count___release_weak(v7_.v8);
    }
    if (v3 == 0 || v4 == 0) {
      if (v3 == 0) {
        return result;
      }
    }
    else {
      if (*(_BYTE*)(a1 + 1984) != 0) {
        v6 = "GrowthRate";
      }
      else {
        v6 = "BattleStatus";
      }
      result = LayoutAccessor_1562cf0(v4, v6);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

__int64 ui_16125c0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  const char* v6;
  const char* v7;
  __int64 v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;

  LayoutAccessor_1560070((void*)(&v9_.v9), (__int64*)(a1 + 848),
                         "L_Page02/L_Animal");
  result = v9_.v10;
  if (v9_.v10 != 0) {
    v3 = std___1___shared_weak_count_lock(v9_.v10);
    v4 = v9_.v9;
    result = v9_.v10;
    if (v9_.v10 != 0) {
      result = std___1___shared_weak_count___release_weak(v9_.v10);
    }
    if (v3 == 0 || v4 == nullptr) {
      if (v3 == 0) {
        return result;
      }
    }
    else {
      if (*(_BYTE*)(a1 + 2196) != 0) {
        v6 = "Page01";
      }
      else {
        v6 = "Page00";
      }
      LayoutAccessor_1562cf0((__int64)v4, v6);
      if (*(_BYTE*)(a1 + 2196) != 0) {
        v7 = "A_MenuItem01";
      }
      else {
        v7 = "A_MenuItem00";
      }
      result = ui_LayoutAccessor_FindAlignment(v4, (__int64)v7);
      if (result != 0) {
        Alignment_56b600(result);
        result = v4[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v8 = result;
            result = *v4;
            if (*v4 != 0) {
              result = ControlCreator_13633c0(result);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
              result = std___1___shared_weak_count___release_weak(v8);
            }
          }
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

#pragma GCC visibility pop
