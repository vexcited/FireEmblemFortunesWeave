#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LayoutAccessor_155c910(__int64, __int64*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
__int64
HeaderFooter_1568330_alt1(__int64 result) __asm__("HeaderFooter_1568330");
__int64
HeaderFooter_1569690_alt1(__int64 result) __asm__("HeaderFooter_1569690");
_QWORD* LayoutAccessor_155c910_alt1(_QWORD*,
                                    __int64*) __asm__("LayoutAccessor_155c910");
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64* HeaderFooter_1568330(__int64* result);
__int64* HeaderFooter_1569690(__int64* result);

__int64* HeaderFooter_1568330(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  _QWORD v11[4];

  v3 = result[19];
  if (*(_BYTE*)(v3 + 24) == 1) {
    v11[2] = v1;
    v11[3] = v2;
    *(_BYTE*)(v3 + 2369) = 0;
    v4 = result;
    v5 = result[20];
    v11[0] = result[19];
    v11[1] = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0_alt1(result + 21, v11);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0_alt1(result + 21, v11);
    }
    LayoutAccessor_155c910((__int64)(v4 + 34), v4 + 21);
    result = (__int64*)(*(__int64 (**)(__int64*))(*v4 + 160))(v4);
    v6 = (unsigned __int8*)v4[2];
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *((_WORD*)v4 + 68) |= 0x80u;
      }
    }
    *((_WORD*)v4 + 68) |= 8u;
  }
  return result;
}

__int64* HeaderFooter_1569690(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  _QWORD v11[4];

  v3 = result[19];
  if (*(_BYTE*)(v3 + 24) == 1) {
    v11[2] = v1;
    v11[3] = v2;
    *(_BYTE*)(v3 + 2369) = 0;
    v4 = result;
    v5 = result[20];
    v11[0] = result[19];
    v11[1] = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0_alt1(result + 21, v11);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0_alt1(result + 21, v11);
    }
    LayoutAccessor_155c910_alt1(v4 + 34, v4 + 21);
    result = (__int64*)(*(__int64 (**)(__int64*))(*v4 + 160))(v4);
    v6 = (unsigned __int8*)v4[2];
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *((_WORD*)v4 + 68) |= 0x80u;
      }
    }
    *((_WORD*)v4 + 68) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
