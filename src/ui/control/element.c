#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_16d1510(PSEUDO_X8, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_21f8028;
extern __int64 GameData_21f8020;
__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8 x8_, _QWORD* result);
__attribute__((swiftcall)) void Element_1885dc0(PSEUDO_X8 x8_, __int64 result,
                                                _QWORD* a2);
__attribute__((swiftcall)) void Element_1886020(PSEUDO_X8 x8_, _QWORD* result,
                                                __int64 a2);

__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8 x8_, _QWORD* result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;

  v2 = result[38];
  v3 = result;
  if (v2 != 0 && *(_QWORD*)(v2 + 8) != -1) {
    *a2 = result[37];
    a2[1] = v2;
  LABEL_24:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    {
      result;
      return;
    }
  }
  v4 = result[10];
  if (v4 != 0 && *(_BYTE*)(v4 + 24) == 1) {
    v5 = result[1];
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 24);
    }
    else {
      v6 = 0;
    }
    v7 = a2;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f8028) != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(&GameData_21f8028);
    }
    if (v6 == 0) {
      goto LABEL_18;
    }
    v8 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    if (v8 != &GameData_21f8020) {
      do {
        v8 = (__int64*)*v8;
      } while (v8 != &GameData_21f8020 && v8 != nullptr);
      if (v8 == nullptr) {
      LABEL_18:
        v6 = 0;
      }
    }
    GameRoutine_16d1510((void*)(&v12), v4, v6);
    v10 = v12;
    v11 = v13;
    result = (_QWORD*)v3[38];
    v12 = 0;
    v13 = nullptr;
    v3[37] = v10;
    v3[38] = v11;
    if (result != nullptr) {
      std___1___shared_weak_count___release_weak(result);
      result = v13;
      if (v13 != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v13);
      }
    }
    v2 = v3[38];
    a2 = v7;
  }
  *a2 = v3[37];
  a2[1] = v2;
  if (v2 != 0) {
    goto LABEL_24;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Element_1885dc0(PSEUDO_X8 x8_, __int64 result,
                                                _QWORD* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v3;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (a2[1] == 0) {
    goto LABEL_21;
  }
  v5 = *(__int64**)(result + 328);
  v6 = *(__int64**)(result + 336);
  v7 = result;
  if (v5 != v6) {
    while (1) {
      result = v5[1];
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        if (result != 0) {
          v11 = *v5;
          if (*v5 != 0) {
            v12 = a2[1];
            if (v12 == *(_QWORD*)(v11 + 24)) {
              v9 = result;
              v10 = (unsigned int)memcmp(*a2, *(_QWORD*)(v11 + 16), v12) == 0;
              result = v9;
              v3 = !v10;
            }
            else {
              v3 = 1;
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v13 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            result = std___1___shared_weak_count___release_weak(v13);
          }
          if (((v11 != 0) & (v3 ^ 1)) != 0) {
            break;
          }
        }
      }
      v5 += 2;
      if (v5 == v6) {
        v5 = v6;
        break;
      }
    }
    v6 = *(__int64**)(v7 + 336);
  }
  if (v5 == v6) {
  LABEL_21:
    *a3 = 0;
    a3[1] = 0;
  }
  else {
    *a3 = *v5;
    v14 = v5[1];
    a3[1] = v14;
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                memory_order_relaxed);
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Element_1886020(PSEUDO_X8 x8_, _QWORD* result,
                                                __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  int v4;
  __int64 v5;
  __int64 (*v6)(void);
  int v7;
  __int64 (*v8)(void);
  __int64 v9;

  v4 = *(_DWORD*)(a2 + 8);
  if (v4 > 6) {
    if (v4 <= 8) {
      if (v4 == 7) {
        v6 = *(__int64 (**)(void))(*result + 320LL);
      }
      else {
        v6 = *(__int64 (**)(void))(*result + 328LL);
      }
    }
    else {
      if (v4 != 9) {
        if (v4 == 17) {
          result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 176LL))(result);
        }
        else if (v4 == 16) {
          result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 168LL))(result);
        }
        goto LABEL_51;
      }
      v6 = *(__int64 (**)(void))(*result + 336LL);
    }
  LABEL_35:
    result = (_QWORD*)v6();
    goto LABEL_51;
  }
  if (v4 > 4) {
    if (v4 == 5) {
      v9 = result[36];
      if ((v9 & 2) == 0) {
        goto LABEL_51;
      }
      result[36] = v9 & 0xFFFFFFFFFFFFFFFDLL;
      v6 = *(__int64 (**)(void))(*result + 304LL);
    }
    else {
      v6 = *(__int64 (**)(void))(*result + 312LL);
    }
    goto LABEL_35;
  }
  if (v4 == 3) {
    v7 = **(_DWORD**)(a2 + 16);
    if ((v7 & 1) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 184LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 2) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 192LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 4) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 200LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 8) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 208LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 0x1000) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 216LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 0x2000) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 224LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 0x400) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 232LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 0x800) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 240LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 0x80) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 248LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 0x40) != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 256LL))(result);
      goto LABEL_51;
    }
    if ((v7 & 0x20000) != 0) {
      v8 = *(__int64 (**)(void))(*result + 264LL);
    }
    else if ((v7 & 0x40000) != 0) {
      v8 = *(__int64 (**)(void))(*result + 272LL);
    }
    else if ((v7 & 0x8000) != 0) {
      v8 = *(__int64 (**)(void))(*result + 280LL);
    }
    else {
      if ((v7 & 0x10000) == 0) {
        goto LABEL_51;
      }
      v8 = *(__int64 (**)(void))(*result + 288LL);
    }
    result = (_QWORD*)v8();
    goto LABEL_51;
  }
  if (v4 == 4) {
    v5 = result[36];
    if ((v5 & 2) == 0) {
      result[36] = v5 | 2;
      v6 = *(__int64 (**)(void))(*result + 296LL);
      goto LABEL_35;
    }
  }
LABEL_51:
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
