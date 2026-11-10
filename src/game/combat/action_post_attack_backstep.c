#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_10690a0(_QWORD* __return_ptr, _QWORD);
__int64 CharacterAnimator_1079e10(_QWORD);
__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_108c8a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_2235e30;
extern __int64 GameData_2235e68;
extern __int64* GameData_212d448[9];
_QWORD* ActionPostAttackBackstep_Unknown7(_QWORD* result);

_QWORD* ActionPostAttackBackstep_Unknown7(_QWORD* result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  char v21;
  char v22;
  __int64 v23;
  int v24;
  __int64 v25;

  v1 = result[1];
  v2 = GameData_212d448[0];
  if (*GameData_212d448[0] == 0 ||
      (v3 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v1 + 568) + 368LL) + 88LL) & 1) != 0) {
      return result;
    }
    goto LABEL_15;
  }
  if ((*(_WORD*)(v3 + 113) & 0x180) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v1 + 568) + 368LL) + 88LL) & 1) != 0) {
    return result;
  }
  v4 = *(_QWORD*)(v3 + 32);
  v5 = *(_QWORD*)(v3 + 40);
  if (v4 == v5) {
    v9 = &GameData_2235e30;
    if (GameData_2235e68 == 0) {
      goto LABEL_36;
    }
    goto LABEL_37;
  }
  v6 = *(_DWORD*)(v3 + 56);
  v7 = 954437177 * ((unsigned __int64)(v5 - v4) >> 4) - 1;
  if (v6 < v7) {
    v7 = v6;
  }
  if (v6 >= 0) {
    v8 = v7;
  }
  else {
    v8 = 0;
  }
  if (v4 != 0) {
    v9 = (__int64*)(v4 + 144LL * v8);
    if (v9[7] == 0) {
    LABEL_36:
      if ((*((_BYTE*)v9 + 4) & 0x80) != 0) {
        return result;
      }
    }
  LABEL_37:
    if ((*(_BYTE*)v9 & 0x80) != 0) {
      return result;
    }
  }
LABEL_15:
  v10 = *(_QWORD*)(v1 + 368);
  v11 = result;
  if (*(_DWORD*)(v10 + 120) != 501870813) {
    v12 = GameRoutine_108c8a0(501870813);
    if (v12 == -574916402 ||
        v12 != (unsigned int)GameRoutine_108c8a0(*(unsigned int*)(v10 + 120))) {
      if ((CharacterAnimator_1079e10(v10) & 1) != 0) {
        GameRoutine_1079580(v10, 501870813, -1.0, -1.0, 1.0);
      }
      else {
        *(_DWORD*)(v10 + 124) = 501870813;
      }
    }
  }
  v13 = v11[1];
  result = GameRoutine_10690a0(&v25, *(_QWORD*)(v13 + 808));
  if (*v2 == 0 || (v14 = *(_QWORD*)(*v2 + 8)) == 0 ||
      (~*(_DWORD*)(v14 + 112) & 0x28000) != 0) {
    v15 = *(_QWORD*)(*(_QWORD*)(v13 + 808) + 88LL);
    v16 = *(_QWORD*)(v15 + 392);
    v17 = *(_QWORD*)(v15 + 400);
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
    }
    v18 = *(_DWORD*)(v16 + 11784);
    v19 = v18 > 0x12;
    v20 = 0x1FF7Fu >> v18;
    v21 = v19;
    v22 = v21 | v20;
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v17);
    }
    if ((v22 & 1) != 0) {
      v23 = *(_QWORD*)(v13 + 808);
      *(_DWORD*)(v13 + 844) = *(_DWORD*)(v23 + 48);
      v24 = *(_DWORD*)(v23 + 52);
      *(_QWORD*)(v13 + 860) = 0x3EAAAAAB00000000LL;
      *(_DWORD*)(v13 + 848) = v24;
      *(_QWORD*)(v13 + 852) = v25;
    }
  }
  return result;
}

#pragma GCC visibility pop
