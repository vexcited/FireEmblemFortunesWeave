#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130618[3];
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1563e00(_QWORD, _QWORD);
__int64 GameRoutine_16ea950(void);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a6760(void);
__int64 GameRoutine_18a82e0(void);
__int64 GameRoutine_18a9f60(_QWORD, _QWORD);
__int64 GameRoutine_18aadd0(void);
__int64 GameRoutine_18ab160(void);
__int64 GameRoutine_19e1e30(void);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_56b600(void);

bool GameHr_19a9e80(_QWORD* a1)
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
    return a1[137] != 0;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = GameRoutine_1a0a0c0(v6);
  GameRoutine_1a09c50(v4);
  if (v7 == 0) {
    return a1[137] != 0;
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
    GameRoutine_1a09c50(v7);
  }
  return (v8 & 1) != 0 && a1[137] != 0;
}

__int64 GameHr_19a9fc0(__int64 result, __int64* a2)
{
  __int64 v3;

  if (*(_QWORD*)(result + 1096) != 0) {
    result = a2[1];
    if (result != 0) {
      result = GameRoutine_1a0a0c0(result);
      if (result != 0) {
        v3 = result;
        result = *a2;
        if (*a2 != 0) {
          result = GameRoutine_18a6760();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          return GameRoutine_1a09c50(v3);
        }
      }
    }
  }
  return result;
}

bool GameHr_19ac160(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 == 0) {
    return *(_OWORD*)(a1 + 1096) != 0;
  }
  v5 = *(_QWORD*)(a1 + 312);
  v6 = *(_QWORD*)(a1 + 320);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = GameRoutine_1a0a0c0(v6);
  GameRoutine_1a09c50(v4);
  if (v7 == 0) {
    return *(_OWORD*)(a1 + 1096) != 0;
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
    GameRoutine_1a09c50(v7);
  }
  return (v8 & 1) != 0 && *(_OWORD*)(a1 + 1096) != 0;
}

__int64 GameHr_19ac290(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;

  if (*(_OWORD*)(result + 1096) != 0 && a2[1] != 0) {
    v2 = result;
    result = GameRoutine_1a0a0c0(a2[1]);
    if (result != 0) {
      v4 = a2;
      v5 = result;
      result = *v4;
      if (*v4 != 0) {
        if (*(_QWORD*)(v2 + 1096) != 0) {
          result = GameRoutine_18ab160();
        }
        else {
          result = GameRoutine_18aadd0();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return GameRoutine_1a09c50(v5);
      }
    }
  }
  return result;
}

__int64 GameHr_19acc40(_QWORD* a1)
{
  __int64 v2;
  char v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) != 0 &&
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) != 0) {
    v2 = *(_QWORD*)(a1[1] + 24LL);
    while (1) {
      v2 = *(_QWORD*)(v2 + 24);
      if (v2 == 0) {
        break;
      }
      if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
        goto LABEL_6;
      }
    }
    v5 = a1[40];
    if (v5 != 0 &&
        (v6 = a1[39], v7 = a1[40],
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                   memory_order_relaxed),
         v8 = GameRoutine_1a0a0c0(v7), GameRoutine_1a09c50(v5), v8 != 0)) {
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
        GameRoutine_1a09c50(v8);
      }
    }
    else {
      LOBYTE(v6) = 0;
    }
    v3 = v6 ^ 1;
  }
  else {
  LABEL_6:
    v3 = 0;
  }
  return v3 & 1;
}

__int64 GameHr_19acd60(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        result = GameRoutine_18a9f60(result, *(unsigned int*)(a1 + 1076));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return GameRoutine_1a09c50(v5);
      }
    }
  }
  return result;
}

bool GameHr_19ad8a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
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
    return a1[135] != 0;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = GameRoutine_1a0a0c0(v6);
  GameRoutine_1a09c50(v4);
  if (v7 == 0) {
    return a1[135] != 0;
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
    GameRoutine_1a09c50(v7);
  }
  return (v8 & 1) != 0 && a1[135] != 0;
}

__int64 GameHr_19ad9c0(__int64 result, __int64* a2)
{
  __int64 v3;

  if (*(_QWORD*)(result + 1080) != 0) {
    result = a2[1];
    if (result != 0) {
      result = GameRoutine_1a0a0c0(result);
      if (result != 0) {
        v3 = result;
        result = *a2;
        if (*a2 != 0) {
          result = GameRoutine_18a82e0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          return GameRoutine_1a09c50(v3);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_19e1cd0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;

  result = GameRoutine_19e1e30();
  if (a1[11] == 0) {
    return result;
  }
  v3 = a1[7];
  if (v3 == 0) {
    goto LABEL_6;
  }
  v4 = GameRoutine_1a0a0c0(v3);
  if (v4 == 0) {
    goto LABEL_6;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = (__int64*)a1[6];
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v14 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  GameRoutine_1a09c50(v5);
  v7 = v14;
  if (v14 == nullptr) {
  LABEL_6:
    v7 = GameData_2130618[0];
  }
LABEL_7:
  GameRoutine_1560ec0(v7, "Face", 1);
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_11;
  }
  v9 = GameRoutine_1a0a0c0(v8);
  if (v9 == 0) {
    goto LABEL_11;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    GameRoutine_1a09c50(v10);
    v12 = v15;
    if (v15 != nullptr) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  if (v12 == nullptr) {
  LABEL_11:
    v12 = GameData_2130618[0];
  }
LABEL_12:
  v13 = GameRoutine_155f480(v12, "Face");
  if (v13 != 0) {
    v13 = GameRoutine_1a0a6c0(v13, GameData_212d670[0], GameData_212d678[0], 0);
  }
  return GameRoutine_1840a20(v13, 0, a1[11], 6, 1);
}

__int64 GameHr_19e1e30(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  char v5;

  GameRoutine_16ea950();
  result = a1[7];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1560ec0(a1[6], "Face", 0);
        v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
        GameRoutine_1560ec0(v3, "IconTalk", (v5 & 1) == 0);
        result = GameRoutine_1563e00(v3, "A_Txt");
        if (result != 0) {
          result = GameRoutine_56b600();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return GameRoutine_1a09c50(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
