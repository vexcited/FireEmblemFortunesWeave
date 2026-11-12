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
__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8, _QWORD* result);
__attribute__((swiftcall)) void Element_1886020(PSEUDO_X8, _QWORD* result,
                                                __int64);
__int64 GameRoutine_18ae4d0(__int64, _QWORD**, unsigned int);
__attribute__((swiftcall)) void HelpableElement_18b2990(PSEUDO_X8 x8_,
                                                        _QWORD* a1, __int64 a2);
__attribute__((swiftcall)) void HelpableElement_18b2a30(PSEUDO_X8 x8_,
                                                        __int64 a1, __int64 a2);
__int64 HelpableElement_18b2d50(_QWORD* a1);
__int64 HelpableElement_18b2e10(_QWORD* a1);
__int64 HelpableElement_18b2ed0(_QWORD* a1);
__int64 HelpableElement_18b2f90(_QWORD* a1);
extern __int64* GameData_212d890[2];
_QWORD* HelpableElement_18b2c60();
_QWORD* HelpableElement_18b2cd0(_QWORD* result);

__attribute__((swiftcall)) void HelpableElement_18b2990(PSEUDO_X8 x8_,
                                                        _QWORD* a1, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;

  result = X8CALL_X0(_QWORD*, Element_1886020((void*)(&v8), a1, a2));
  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v7 = *(_QWORD*)(GameData_21f1e08 + 144);
    v8 = *(_QWORD*)(GameData_21f1e08 + 136);
    v9 = (_QWORD*)v7;
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
    }
    (*(void (**)(_QWORD*, __int64*))(*a1 + 368LL))(a1, &v8);
    result = v9;
    if (v9 != nullptr) {
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void HelpableElement_18b2a30(PSEUDO_X8 x8_,
                                                        __int64 a1, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;

  v4 = a1 - 72;
  result =
      X8CALL_X0(_QWORD*, Element_1886020((void*)(&v8), (_QWORD*)(a1 - 72), a2));
  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v7 = *(_QWORD*)(GameData_21f1e08 + 144);
    v8 = *(_QWORD*)(GameData_21f1e08 + 136);
    v9 = (_QWORD*)v7;
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v4 + 368LL))(v4, &v8);
    result = v9;
    if (v9 != nullptr) {
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

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

_QWORD* HelpableElement_18b2c60()
{
  _QWORD* result;
  char v1[4];
  struct {
    __int64* v2;
    int v3;
    char gap20_[4];
    __int64 v4;
  } v2_;

  result = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v2_.v4 = 0;
    v2_.v2 = GameData_212d890[0] + 2;
    v2_.v3 = 44;
    return X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
            (void*)v1, GameData_21f1e08 + 8, &v2_.v2));
  }
  return result;
}

_QWORD* HelpableElement_18b2cd0(_QWORD* result)
{
  char v3[4];
  struct {
    __int64* v4;
    int v5;
    char gap20_[4];
    __int64 v6;
  } v4_;

  if (*((_BYTE*)result + 1072) == 1) {
    result = (_QWORD*)GameData_21f1e08;
    if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
      v4_.v6 = 0;
      v4_.v4 = GameData_212d890[0] + 2;
      v4_.v5 = 44;
      return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                    PSEUDO_X8, __int64, __int64**))(
                                    *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
                                    (void*)v3, GameData_21f1e08 + 8, &v4_.v4));
    }
  }
  return result;
}

__int64 HelpableElement_18b2d50(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  Element_1885a60((void*)(&v4), a1);
  v1 = v5;
  v6 = nullptr;
  v7 = 0;
  if (v5 != 0) {
    v1 = std___1___shared_weak_count_lock(v5);
    v7 = v1;
    if (v1 != 0) {
      v6 = v4;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    GameRoutine_18ae4d0(GameData_21f1e08, &v6, 2u);
    v1 = v7;
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v2);
  }
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 HelpableElement_18b2e10(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  Element_1885a60((void*)(&v4), a1);
  v1 = v5;
  v6 = nullptr;
  v7 = 0;
  if (v5 != 0) {
    v1 = std___1___shared_weak_count_lock(v5);
    v7 = v1;
    if (v1 != 0) {
      v6 = v4;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    GameRoutine_18ae4d0(GameData_21f1e08, &v6, 3u);
    v1 = v7;
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v2);
  }
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 HelpableElement_18b2ed0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  Element_1885a60((void*)(&v4), a1);
  v1 = v5;
  v6 = nullptr;
  v7 = 0;
  if (v5 != 0) {
    v1 = std___1___shared_weak_count_lock(v5);
    v7 = v1;
    if (v1 != 0) {
      v6 = v4;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    GameRoutine_18ae4d0(GameData_21f1e08, &v6, 0);
    v1 = v7;
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v2);
  }
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 HelpableElement_18b2f90(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  Element_1885a60((void*)(&v4), a1);
  v1 = v5;
  v6 = nullptr;
  v7 = 0;
  if (v5 != 0) {
    v1 = std___1___shared_weak_count_lock(v5);
    v7 = v1;
    if (v1 != 0) {
      v6 = v4;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    GameRoutine_18ae4d0(GameData_21f1e08, &v6, 1u);
    v1 = v7;
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v2);
  }
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
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
