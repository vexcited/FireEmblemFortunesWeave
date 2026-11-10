#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7ae0(__int64, unsigned int*, __int64, char, int, __int64,
                            char);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
bool IconSkill_18b49e0(_QWORD* a1);
__int64 IconSkill_18b4b20(__int64 result, __int64* a2);

bool IconSkill_18b49e0(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = a1[40];
  if (v4 == 0) {
    return (a1[137] & 0xFFF) != 0;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return (a1[137] & 0xFFF) != 0;
  }
  if (v5 != 0) {
    v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
             ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
             : 0;
  }
  else {
    v8 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && (a1[137] & 0xFFF) != 0;
}

__int64 IconSkill_18b4b20(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((*(_WORD*)(result + 1096) & 0xFFF) != 0) {
    v2 = result;
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v4 = result;
        result = *a2;
        if (*a2 != 0) {
          v5 = *(unsigned __int8*)(v2 + 1104);
          v6 = (v5 & 1) == 0;
          if ((v5 & 1) != 0) {
            v7 = *(_QWORD*)(v2 + 1112);
          }
          else {
            v7 = v5 >> 1;
          }
          v8 = *(_QWORD*)(v2 + 1120);
          if (v6) {
            v8 = v2 + 1105;
          }
          if (v7 != 0) {
            v9 = v8;
          }
          else {
            v9 = 0;
          }
          result = GameRoutine_18a7ae0(
              result, (unsigned int*)(v2 + 1096), *(_QWORD*)(v2 + 1088), 1,
              ((*(_DWORD*)(v2 + 1096) >> 19) & 0x1Fu) + 1, v9, 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
