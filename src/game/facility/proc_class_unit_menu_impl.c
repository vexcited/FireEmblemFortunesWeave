#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 game_UnitListSet_instance_;
__int64 ProcClassUnitMenu_16bdfb0(__int64 a1, _QWORD* a2);
__int64 ProcClassUnitMenu_16be0c0(__int64 a1);

__int64 ProcClassUnitMenu_16bdfb0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 1224LL))(v2, *a2);
  return BasicMenuCursor_16e0c00(v2, v3);
}

__int64 ProcClassUnitMenu_16be0c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 result;
  __int64 v7;
  bool v8;
  unsigned __int64 add;
  unsigned int v10;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v3 = *(_QWORD**)v2;
  v4 = *(_QWORD**)(v2 + 8);
  if (v3 == v4) {
    return 0;
  }
  while (1) {
    v5 = (_QWORD*)*v3;
    if (*(_QWORD*)*v3 == v1) {
      break;
    }
    v3 += 2;
    if (v3 == v4) {
      return 0;
    }
  }
  v7 = v3[1];
  if (v7 == 0) {
    return (v5[6] & 0x3F) == 0;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v8 = (v5[6] & 0x3F) == 0;
  add =
      atomic_fetch_add((atomic_ullong* volatile)(v7 + 8), 0xFFFFFFFFFFFFFFFFLL);
  result = v8;
  if (add == 0) {
    v10 = result;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    return v10;
  }
  return result;
}

#pragma GCC visibility pop
