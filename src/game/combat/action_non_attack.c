#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1064730(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21ec7b0;
__int64 ActionNonAttack_Unknown5(__int64 a1);
__int64 ActionNonAttack_Unknown7(__int64 result);

__int64 ActionNonAttack_Unknown5(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  bool v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  bool v17;
  int v18;
  int v20;
  int* v21;
  int v22;
  int v23;
  _QWORD v25[2];
  _BYTE v26[32];

  if (GameData_21ec7b0 != 0) {
    v1 = *(_QWORD*)(a1 + 24);
    v2 = *(_DWORD*)(v1 + 8);
    if (v2 <= 3) {
      v3 = GameData_21ec7b0 + 24LL * v2;
      v4 = *(_QWORD*)(v3 + 32);
      if (v4 != 0) {
        v5 = a1;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        v6 = *(_QWORD*)(v3 + 40);
        v7 = *(_QWORD*)(v4 + 8) == -1 || v6 == 0;
        if (v7 || (v8 = *(_QWORD*)(v6 + 80)) == 0 ||
            (*(_QWORD*)(v8 + 8) != -1 ? (v9 = *(_QWORD*)(v6 + 88) == 0)
                                      : (v9 = true),
             v9 || *(_QWORD*)(v4 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v4);
        }
        else {
          std___1___shared_weak_count___release_weak(v4);
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 88) + 136LL) + 128LL) = 0;
        }
        a1 = v5;
      }
    }
    if (GameData_21ec7b0 != 0) {
      v10 = *(_DWORD*)(v1 + 12);
      if (v10 <= 3) {
        v11 = GameData_21ec7b0 + 24LL * v10;
        v12 = *(_QWORD*)(v11 + 32);
        if (v12 != 0) {
          v13 = a1;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                    memory_order_relaxed);
          v14 = *(_QWORD*)(v11 + 40);
          v15 = *(_QWORD*)(v12 + 8) == -1 || v14 == 0;
          if (v15 || (v16 = *(_QWORD*)(v14 + 80)) == 0 ||
              (*(_QWORD*)(v16 + 8) != -1 ? (v17 = *(_QWORD*)(v14 + 88) == 0)
                                         : (v17 = true),
               v17 || *(_QWORD*)(v12 + 8) == -1)) {
            std___1___shared_weak_count___release_weak(v12);
          }
          else {
            std___1___shared_weak_count___release_weak(v12);
            *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 88) + 136LL) + 128LL) = 0;
          }
          a1 = v13;
        }
      }
    }
  }
  v18 = *(_DWORD*)(a1 + 16);
  if (v18 != 1 && v18 != 3) {
    if (v18 == 2) {
      v20 = 3;
    }
    else {
      v20 = 1;
    }
    *(_DWORD*)(a1 + 16) = v20;
  }
  v21 = *(int**)(a1 + 24);
  v22 = *v21;
  if ((*v21 & 0x80) != 0) {
    *((_QWORD*)v21 + 8) = 0x953E62E9000141A7LL;
    goto LABEL_49;
  }
  v21[16] = 989295305;
  if ((v22 & 1) != 0) {
    v23 = 232551549;
  LABEL_48:
    v21[17] = v23;
    goto LABEL_49;
  }
  if ((v22 & 8) != 0) {
    v23 = -1193575777;
    goto LABEL_48;
  }
  v21[17] = -1193575789;

LABEL_49:
  v25[0] = 0;
  v25[1] = 0;
  return GameRoutine_1064730(v26, v21, 0, 0, v25);
}

__int64 ActionNonAttack_Unknown7(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  bool v13;

  if (GameData_21ec7b0 != 0) {
    v1 = *(_QWORD*)(result + 24);
    v2 = *(_DWORD*)(v1 + 8);
    if (v2 <= 3) {
      v3 = GameData_21ec7b0 + 24LL * v2;
      result = *(_QWORD*)(v3 + 32);
      if (result != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                  memory_order_relaxed);
        v4 = *(_QWORD*)(v3 + 40);
        v5 = *(_QWORD*)(result + 8) == -1 || v4 == 0;
        if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
            (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0)
                                      : (v7 = true),
             v7 || *(_QWORD*)(result + 8) == -1)) {
          result = std___1___shared_weak_count___release_weak(result);
        }
        else {
          result = std___1___shared_weak_count___release_weak(result);
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 88) + 136LL) + 128LL) = 2;
        }
      }
    }
    if (GameData_21ec7b0 != 0) {
      v8 = *(_DWORD*)(v1 + 12);
      if (v8 <= 3) {
        v9 = GameData_21ec7b0 + 24LL * v8;
        result = *(_QWORD*)(v9 + 32);
        if (result != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                    memory_order_relaxed);
          v10 = *(_QWORD*)(v9 + 40);
          if (*(_QWORD*)(result + 8) == -1 || v10 == 0) {
            return std___1___shared_weak_count___release_weak(result);
          }
          v12 = *(_QWORD*)(v10 + 80);
          if (v12 == 0) {
            return std___1___shared_weak_count___release_weak(result);
          }
          v13 = *(_QWORD*)(v12 + 8) == -1 || *(_QWORD*)(v10 + 88) == 0;
          if (v13 || *(_QWORD*)(result + 8) == -1) {
            return std___1___shared_weak_count___release_weak(result);
          }
          else {
            result = std___1___shared_weak_count___release_weak(result);
            *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 88) + 136LL) + 128LL) = 2;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
