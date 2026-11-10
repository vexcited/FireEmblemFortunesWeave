#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1096780(__int64, unsigned __int8*, char);
__int64 GameRoutine_10f2400(_QWORD, _QWORD);
__int64 GameRoutine_1115cc0(_QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212ee68[4];
void __attribute__((noreturn)) GameRoutine_d38e30(_QWORD, _QWORD);
__int64 CombatCamera_1097e40(__int64 a1);
__int64 CombatCamera_1098000(__int64 a1, __int64 a2, char a3);
__int64 game_combat_CombatCamera_SubscribeSignals_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 CombatCamera_10985a0(__int64* a1, __int64 a2, __int64 a3);
__int64 CombatCamera_1098760(__int64 a1, __int64 a2);
void CombatCamera_1098ae0(__int64* a1, _QWORD* a2);
__int64
game_combat_CombatCamera_SubscribeSignals_lambda2_Invoke(__int64 result);
__int64 CombatCamera_1098ae0_alt1(_QWORD, _QWORD,
                                  long double) __asm__("CombatCamera_1098ae0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1098c40(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 CombatCamera_10988a0(__int64* a1, int* a2, __int64* a3, __int64 a4,
                             __n128 a5);

__int64 CombatCamera_1097e40(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  *(_BYTE*)(a1 + 488) = 1;
  v2 = *(_QWORD*)(a1 + 176);
  v3 = GameData_212ee68[0];
  if (v2 != 0) {
    v4 = v2 + 1;
    if (((*(_BYTE*)v2 & 1) == 0 || (v4 = *(_QWORD*)(v2 + 16)) != 0) &&
        (unsigned int)strcmp(v4, "WallShot") == 0) {
      v5 = *(_QWORD*)(*v3 + 8);
      v6 = *(_QWORD*)(*v3 + 16);
      if (v6 == v5) {
      LABEL_9:
        v5 = 0;
      }
      else {
        v7 = 0x4EC4EC4EC4EC4EC5LL * ((v6 - v5) >> 3);
        while (*(_DWORD*)(v5 + 24) != -842878802) {
          --v7;
          v5 += 104;
          if (v7 == 0) {
            goto LABEL_9;
          }
        }
      }
      if ((GameRoutine_1096780(a1, (unsigned __int8*)v5, 0) & 1) != 0) {
        return 1;
      }
    }
  }
  v8 = *(_QWORD*)(a1 + 272);
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = *v3;
  *(_QWORD*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 194) = 0;
  v10 = *(_QWORD*)(v9 + 8);
  v11 = *(_QWORD*)(v9 + 16);
  if (v11 == v10) {
  LABEL_17:
    v10 = 0;
  }
  else {
    v12 = 0x4EC4EC4EC4EC4EC5LL * ((v11 - v10) >> 3);
    while (*(_DWORD*)(v10 + 24) != 2052559) {
      --v12;
      v10 += 104;
      if (v12 == 0) {
        goto LABEL_17;
      }
    }
  }
  if ((GameRoutine_1096780(a1, (unsigned __int8*)v10, 0) & 1) != 0) {
    return 1;
  }
  v14 = *(_QWORD*)(*v3 + 8);
  v15 = *(_QWORD*)(*v3 + 16);
  if (v15 == v14) {
  LABEL_24:
    v14 = 0;
  }
  else {
    v16 = 0x4EC4EC4EC4EC4EC5LL * ((v15 - v14) >> 3);
    while (*(_DWORD*)(v14 + 24) != 1890962995) {
      --v16;
      v14 += 104;
      if (v16 == 0) {
        goto LABEL_24;
      }
    }
  }
  return GameRoutine_1096780(a1, (unsigned __int8*)v14, 0);
}

__int64 CombatCamera_1098000(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  char v4;
  unsigned __int8* v5;

  if ((a2 & 0x80000000) != 0) {
    v4 = a3 & 1;
    v5 = nullptr;
  }
  else {
    v3 = *(_QWORD*)(*GameData_212ee68[0] + 8);
    if (0x4EC4EC4EC4EC4EC5LL *
            ((*(_QWORD*)(*GameData_212ee68[0] + 16) - v3) >> 3) <=
        (unsigned __int64)(unsigned int)a2) {
      GameRoutine_d38e30(a1, a2);
    }
    v4 = a3 & 1;
    v5 = (unsigned __int8*)(v3 + 104LL * (unsigned int)a2);
  }
  return GameRoutine_1096780(a1, v5, v4);
}

__int64 game_combat_CombatCamera_SubscribeSignals_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v2 + 32) == 1) {
    v5 = *(_BYTE*)(v2 + 40);
    v6 = *(_QWORD*)(v2 + 56);
    v7 = v2 + 41;
    v8 = v4 + 432;
    if ((v5 & 1) != 0) {
      v9 = v6;
    }
    else {
      v9 = v7;
    }
  }
  else {
    v8 = v4 + 432;
    v9 = 0;
  }
  return GameRoutine_1115cc0(v8, v3, v9);
}

__int64 CombatCamera_10985a0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CombatCamera_1098760(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CombatCamera_10988a0(__int64* a1, int* a2, __int64* a3, __int64 a4,
                             __n128 a5)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;

  v5 = *a1;
  v6 = a1[1] - *a1;
  v7 = 1 - 0x3333333333333333LL * (v6 >> 4);
  if (v7 > 0x333333333333333LL) {
    GameRoutine_1098c40();
  }
  v8 = a1[2];
  v34 = a1 + 2;
  v13 = fw_memory_g_heap_manager_ptr;
  v14 = 0xCCCCCCCCCCCCCCCDLL * ((v8 - v5) >> 4);
  if (2 * v14 > v7) {
    v7 = 2 * v14;
  }
  if (v14 >= 0x199999999999999LL) {
    v15 = 0x333333333333333LL;
  }
  else {
    v15 = v7;
  }
  if (v15 != 0) {
    if (v15 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v15, 16, 0);
  }
  else {
    v16 = 0;
  }
  v17 = *a2;
  v18 = v16 + v6;
  v30 = v16;
  v31 = v18;
  v33 = v16 + 80 * v15;
  v19 = *a3;
  v20 = a3[1];
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v18 = v17;
    *(_QWORD*)(v18 + 8) = v19;
    *(_QWORD*)(v18 + 16) = v20;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v21 = *(_QWORD*)(a4 + 32);
    if (v21 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v18 = v17;
    *(_QWORD*)(v18 + 8) = v19;
    *(_QWORD*)(v18 + 16) = 0;
    v21 = *(_QWORD*)(a4 + 32);
    if (v21 != 0) {
    LABEL_13:
      if (v21 == a4) {
        *(_QWORD*)(v18 + 64) = v18 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
        if (v20 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v18 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        if (v20 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v18 + 64) = 0;
  if (v20 != 0) {
  LABEL_18:
    a5 = std___1___shared_weak_count___release_weak(v20);
  }
LABEL_19:
  v32 = v18 + 80;
  CombatCamera_1098ae0_alt1(a1, &v30, *(long double*)&a5);
  v22 = a1[1];
  v23 = v31;
  while (1) {
    v24 = v32;
    if (v23 == v32) {
      break;
    }
    v32 -= 80;
    v25 = *(_QWORD**)(v24 - 16);
    if (v25 == (_QWORD*)(v24 - 48)) {
      v26 = 32;
      goto LABEL_25;
    }
    if (v25 != nullptr) {
      v26 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    }
    v27 = *(_QWORD*)(v24 - 64);
    if (v27 != 0) {
      std___1___shared_weak_count___release_weak(v27);
    }
  }
  if (v30 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v28);
  }
  return v22;
}

void CombatCamera_1098ae0(__int64* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;

  v3 = (_QWORD*)*a1;
  v2 = (_QWORD*)a1[1];
  v6 = a2[1] + *a1 - (_QWORD)v2;
  if (v2 != (_QWORD*)*a1) {
    v7 = 0;
    do {
      v8 = &v3[v7];
      v9 = v6 + v7 * 8;
      *(_DWORD*)v9 = v3[v7];
      *(_QWORD*)(v9 + 8) = v3[v7 + 1];
      *(_QWORD*)(v9 + 16) = v3[v7 + 2];
      v8[1] = 0;
      v8[2] = 0;
      v10 = (_QWORD*)v3[v7 + 8];
      if (v10 != nullptr) {
        if (v8 + 4 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(*(_QWORD*)v8[8] + 24LL))(v8[8]);
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          v8[8] = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 10;
    } while (&v3[v7] != v2);
    v11 = v3 + 4;
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
      }
      v15 = *(v11 - 2);
      if (v15 != 0) {
        std___1___shared_weak_count___release_weak(v15);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v16 = (_QWORD*)*a1;
  a1[1] = *a1;
  *a1 = a2[1];
  a2[1] = v16;
  v17 = a1[1];
  a1[1] = a2[2];
  a2[2] = v17;
  v18 = a1[2];
  a1[2] = a2[3];
  a2[3] = v18;
  *a2 = a2[1];
}

__int64 game_combat_CombatCamera_SubscribeSignals_lambda2_Invoke(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;

  v1 = *(unsigned __int8**)(*(_QWORD*)(result + 8) + 176LL);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = *((_QWORD*)v1 + 1);
    if ((v2 & 1) == 0) {
      v3 = v2 >> 1;
    }
    if (v3 >= 8) {
      if ((v2 & 1) != 0) {
        v4 = *((_QWORD**)v1 + 2);
      }
      else {
        v4 = v1 + 1;
      }
      if (*v4 == 0x746F68536C6C6157LL) {
        return GameRoutine_10f2400(0, 1);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
