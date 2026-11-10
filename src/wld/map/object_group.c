#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1460(void);
__int64 GameRoutine_14a15e0(void);
__int64 GameRoutine_14a16a0(_QWORD, _QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64* ObjectGroup_c25a40(__int64* result, _QWORD* a2);
__int64 ObjectGroup_c25d60(__int64 a1, __int64 a2);
__int64 GameRoutine_c26680(_QWORD, _QWORD);
extern _BYTE GameData_1b7f8a9[5];
unsigned __int64
wld_map_ObjectGroup_FadeMapEffects_lambda0_Invoke(__int64 a1,
                                                  unsigned __int64** a2);

__int64* ObjectGroup_c25a40(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = (_QWORD*)*result;
  v2 = (_QWORD*)result[1];
  v4 = a2[1];
  v6 = result;
  v7 = v4 - ((_QWORD)v2 - *result);
  if (v2 != (_QWORD*)*result) {
    v8 = (_QWORD*)*result;
    v9 = (_QWORD*)(v4 - (((__int64)v2 - *result) >> 6 << 6) + 48);
    do {
      *(v9 - 6) = *v8;
      v10 = v8[1];
      *(v9 - 5) = v10;
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
      }
      v11 = (_QWORD*)v8[6];
      if (v11 != nullptr) {
        if (v8 + 2 == v11) {
          *v9 = v9 - 4;
          (*(void (**)(_QWORD))(*(_QWORD*)v8[6] + 24LL))(v8[6]);
        }
        else {
          *v9 = v11;
          v8[6] = 0;
        }
      }
      else {
        *v9 = 0;
      }
      v8 += 8;
      v9 += 8;
    } while (v8 != v2);
    do {
      result = (__int64*)v3[6];
      if (v3 + 2 == result) {
        v12 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_18;
        }
        v12 = 40;
      }
      result = (__int64*)(*(__int64 (**)(void))(*result + v12))();
    LABEL_18:
      v13 = v3[1];
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = (__int64*)std___1___shared_weak_count___release_weak(v13);
      }
      v3 += 8;
    } while (v3 != v2);
  }
  a2[1] = v7;
  v14 = *v6;
  v6[1] = *v6;
  *v6 = a2[1];
  a2[1] = v14;
  v15 = v6[1];
  v6[1] = a2[2];
  a2[2] = v15;
  v16 = v6[2];
  v6[2] = a2[3];
  a2[3] = v16;
  *a2 = a2[1];
  return result;
}

__int64 ObjectGroup_c25d60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v9;
  __int64 v10;

  v2 = *(_QWORD*)(a2 + 8);
  v9 = *(_DWORD**)a2;
  v10 = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(_QWORD*)(a1 + 32);
  if (v4 == 0) {
    GameRoutine_60a310(0);
  }
  v5 = (*(__int64 (**)(__int64, _DWORD**))(*(_QWORD*)v4 + 48LL))(v4, &v9);
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 48);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
    }
    if (fabsf(*((float*)&v5 + 1)) >= 0.00000011921f) {
      if (*((float*)&v5 + 1) > 0.0f) {
        GameRoutine_14a16a0(&v9, 1, *((float*)&v5 + 1));
        goto LABEL_18;
      }
      if (*((float*)&v5 + 1) < 0.0f && *(_QWORD*)v9 != 0 &&
          *(_DWORD*)(*(_QWORD*)v9 + 16LL) == v9[2]) {
        GameRoutine_14a15e0();
        goto LABEL_11;
      }
    }
    else if (*(_QWORD*)v9 != 0 && *(_DWORD*)(*(_QWORD*)v9 + 16LL) == v9[2]) {
      GameRoutine_14a1460();
    LABEL_11:
      snd_fnd_WeakHandle_isValid(v9 + 4);
    }
  }
LABEL_18:
  v7 = v10;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v5 & 1;
}

unsigned __int64

wld_map_ObjectGroup_FadeMapEffects_lambda0_Invoke(__int64 a1,
                                                  unsigned __int64** a2)
{
  unsigned __int64* v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;

  v2 = *a2;
  v3 = **a2;
  if (v3 != 0) {
    if (*(_DWORD*)(v3 + 16) == *((_DWORD*)v2 + 2) &&
        (*(_BYTE*)(v3 + 34) & 1) == 0 &&
        (unsigned int)(*(_DWORD*)(v3 + 20) - 3) <= 1 &&
        *((_DWORD*)v2 + 67) == *(_DWORD*)(a1 + 16)) {
      v4 = *(unsigned int*)(a1 + 20);
      if ((_DWORD)v4 == 3) {
        v5 = *((unsigned __int8*)v2 + 216);
        if ((v5 & 1) != 0) {
          v3 = v2[28];
        }
        else {
          v3 = v5 >> 1;
        }
        if (v3 == 0) {
          goto LABEL_11;
        }
        goto LABEL_13;
      }
      if ((GameData_1b7f8a9[v4] & (_BYTE)v2[33]) != 0) {
      LABEL_13:
        if ((GameRoutine_c26680(v2 + 18, *(_QWORD*)(a1 + 8)) & 1) == 0) {
          v3 = (unsigned __int64)*(unsigned int*)(a1 + 24) << 32;
          v6 = 1;
          return v3 | v6;
        }
      }
    }
    v6 = 0;
    v3 = 0;
    return v3 | v6;
  }
LABEL_11:
  v6 = 0;
  return v3 | v6;
}

#pragma GCC visibility pop
