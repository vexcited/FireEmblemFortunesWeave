#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_15744f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_212d690;
extern __int64 GameData_2131cb0[36];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e030[4];
__int64 ChangeNumMenuItem_Unknown70(__int64 a1);
__int64 ChangeNumMenuItem_Unknown71(__int64 a1, int a2);
__int64 ChangeNumMenuItem_1711570(__int64 a1);
__int64 ChangeNumMenuItem_17116e0(__int64 a1);
__int64 ChangeNumMenuItem_17117b0(__int64 a1);
__int64 ChangeNumMenuItem_1711830(__int64 a1);
__int64 ChangeNumMenuItem_17119f0(__int64 a1, char a2);
__int64 ChangeNumMenuItem_Unknown72(__int64 a1);

__int64 ChangeNumMenuItem_Unknown70(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e030[0], GameData_2131cb0[0], 0);
    if (result != 0) {
      return *(unsigned int*)(result + 1492);
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_Unknown71(__int64 a1, int a2)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e030[0], GameData_2131cb0[0], 0);
    if (result != 0) {
      *(_DWORD*)(a1 + 288) = *(_DWORD*)(result + 1492);
      *(_DWORD*)(result + 1492) = a2;
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_1711570(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  result = (*(__int64 (**)(void))(*(_QWORD*)a1 + v2))();
  if (*(_DWORD*)(a1 + 192) != *(_DWORD*)(a1 + 196)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v4 = *(_QWORD*)(a1 + 208);
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 200);
      v6 = result;
      v7 = *(_QWORD*)(a1 + 208);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v8 = *(_DWORD*)(a1 + 192);
      v9 = std___1___shared_weak_count_lock(v7);
      if (v9 != 0) {
        v10 = v9;
        if (v5 != 0) {
          GameRoutine_15744f0(v5, 1, v6 > v8);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
      result = std___1___shared_weak_count___release_weak(v4);
      v11 = *(_QWORD*)(a1 + 208);
      if (v11 != 0) {
        v12 = *(_QWORD*)(a1 + 200);
        v13 = *(_QWORD*)(a1 + 208);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                  memory_order_relaxed);
        v14 = *(_DWORD*)(a1 + 196);
        v15 = std___1___shared_weak_count_lock(v13);
        if (v15 != 0) {
          v16 = v15;
          if (v12 != 0) {
            GameRoutine_15744f0(v12, 0, v6 < v14);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak(v16);
          }
        }
        return std___1___shared_weak_count___release_weak(v11);
      }
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_17116e0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  result = (*(__int64 (**)(void))(*(_QWORD*)a1 + v2))();
  if (*(_DWORD*)(a1 + 192) != *(_DWORD*)(a1 + 196)) {
    v4 = *(_QWORD*)(a1 + 208);
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 200);
      v6 = *(_QWORD*)(a1 + 208);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v7 = std___1___shared_weak_count_lock(v6);
      if (v7 != 0) {
        v8 = v7;
        if (v5 != 0) {
          GameRoutine_1572370(v5, 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
      }
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_17117b0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 208);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 200);
      if (result != 0) {
        result = GameRoutine_1562680(result, "Default", 1.0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_1711830(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 208);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 200);
      if (result != 0) {
        result = GameRoutine_1562680(result, "Select", 1.0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_17119f0(__int64 a1, char a2)
{
  signed int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  int v23;
  __int64 v24;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  if (*(_DWORD*)(a1 + 192) != *(_DWORD*)(a1 + 196)) {
    v5 = *(_QWORD*)(a1 + 208);
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 200);
      v7 = *(_QWORD*)(a1 + 208);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 != 0) {
        v9 = v8;
        if (v6 != 0) {
          GameRoutine_159e7c0(v6, a2 & 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      std___1___shared_weak_count___release_weak(v5);
      v10 = *(_QWORD*)(a1 + 208);
      if (v10 != 0) {
        v11 = *(_QWORD*)(a1 + 200);
        v12 = *(_QWORD*)(a1 + 208);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
        v13 = *(_DWORD*)(a1 + 192);
        v14 = std___1___shared_weak_count_lock(v12);
        if (v14 != 0) {
          v15 = v14;
          if (v11 != 0) {
            GameRoutine_15744f0(v11, 1, v4 > v13);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak(v15);
          }
        }
        std___1___shared_weak_count___release_weak(v10);
        v16 = *(_QWORD*)(a1 + 208);
        if (v16 != 0) {
          v17 = *(_QWORD*)(a1 + 200);
          v18 = *(_QWORD*)(a1 + 208);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          v19 = *(_DWORD*)(a1 + 196);
          v20 = std___1___shared_weak_count_lock(v18);
          if (v20 != 0) {
            v21 = v20;
            if (v17 != 0) {
              GameRoutine_15744f0(v17, 0, v4 < v19);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
              std___1___shared_weak_count___release_weak(v21);
            }
          }
          std___1___shared_weak_count___release_weak(v16);
        }
      }
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 576LL))(a1, (unsigned int)v4);
  result = *(_QWORD*)(a1 + 272);
  if (result != 0) {
    v24 = a1;
    v23 = v4;
    return (*(__int64 (**)(__int64, __int64*, int*))(*(_QWORD*)result + 48LL))(
        result, &v24, &v23);
  }
  return result;
}

__int64 ChangeNumMenuItem_Unknown72(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 224);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 216);
      if (result != 0) {
        result = ui_LayoutAccessor_FindPane(result, "T_Num");
        if (result != 0) {
          result =
              __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
          if (result != 0) {
            result = GameRoutine_156c910(result, "%d", 1);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
