#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FloatingHelp_18ae5e0(__int64, float*);
__int64 GameRoutine_18a59b0(__int64, char*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21f1e08;
__int64 HelpableElement_18b2b00(_QWORD* a1);
__int64 HelpableElement_18b3050(__int64 a1, float* a2);
__int64 HelpableElement_18b3070(__int64 a1, __int64* a2);

__int64 HelpableElement_18b2b00(_QWORD* a1)
{
  __int64 v2;
  char v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) != 0 &&
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) != 0 &&
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) != 0) {
    v2 = *(_QWORD*)(a1[1] + 24LL);
    while (1) {
      v2 = *(_QWORD*)(v2 + 24);
      if (v2 == 0) {
        break;
      }
      if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
        goto LABEL_7;
      }
    }
    v5 = a1[40];
    if (v5 != 0 &&
        (v6 = a1[39], v7 = a1[40],
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                   memory_order_relaxed),
         v8 = std___1___shared_weak_count_lock(v7),
         std___1___shared_weak_count___release_weak(v5), v8 != 0)) {
      if (v6 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 144LL))(v6) & 1) != 0) {
          LODWORD(v6) = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6) ^ 1;
        }
        else {
          LOBYTE(v6) = 1;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    else {
      LOBYTE(v6) = 0;
    }
    v3 = v6 ^ 1;
  }
  else {
  LABEL_7:
    v3 = 0;
  }
  return v3 & 1;
}

__int64 HelpableElement_18b3050(__int64 a1, float* a2)
{
  __int64 result;

  result = GameData_21f1e08;
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    return FloatingHelp_18ae5e0(GameData_21f1e08, a2);
  }
  return result;
}

__int64 HelpableElement_18b3070(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  char* v6;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        if ((*(_BYTE*)(a1 + 1048) & 1) != 0) {
          v6 = *(char**)(a1 + 1064);
        }
        else {
          v6 = (char*)(a1 + 1049);
        }
        result = GameRoutine_18a59b0(result, v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
