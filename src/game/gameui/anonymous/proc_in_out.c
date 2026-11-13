#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool LayoutAccessor_1563380(__int64*, __int64, char);
__int64 ProcInOut_Unknown2(__int64 a1);

__int64 ProcInOut_Unknown2(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;

  result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
      *(__int64**)(a1 + 152), (__int64)"IO", 0);
  if ((result & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 152);
    v4 = std___1___shared_weak_count_lock(*(_QWORD*)(v3 + 8));
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v5);
    }
    v6 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 24LL);
    Pane_58df60(v6[3], v6);
    result = Pane_58dee0(*(_QWORD*)(a1 + 160), (__int64)v6);
    v7 = *(unsigned __int8**)(a1 + 16);
    if (v7 != nullptr) {
      v8 = *v7;
      v9 = v8 > 0x10;
      v10 = (1 << v8) & 0x1CE00;
      if (!v9 && v10 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
