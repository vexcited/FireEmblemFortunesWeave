#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MapSortieMenu_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffd090[])();
extern __int64 (*GameData_1ffd110[])();
extern __int64 GameData_21c9ce8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d458[7];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_hub_anonymous_ProcChallengeBegin_Dialog(__int64 a1);
__int64 ProcChallengeBegin_fc34c0(__int64 result);
__n128
ProcChallengeBegin_fc3840_alt2(_QWORD* a1) __asm__("ProcChallengeBegin_fc3840");
__int64 ProcChallengeBegin_fc3b20(__int64 a1);
__int64 game_hub_anonymous_ProcChallengeBegin_Dialog_closure_Invoke(__int64 a1);
__int64 GameRoutine_d799f0(__int64);
extern __int64* GameData_212ebc0[5];
void GameRoutine_1028300(__int64, __int64*);
void GameRoutine_1028670(__int64, __int64*);
void ProcChallengeBegin_fc3840_alt1(_QWORD*) __asm__(
    "ProcChallengeBegin_fc3840");
__n128 ProcChallengeBegin_fc3040(__int64 a1);
__n128 ProcChallengeBegin_fc37f0(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcChallengeBegin_fc3840(_QWORD* a1);

__n128 ProcChallengeBegin_fc3040(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;
  __n128 result;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *GameData_212ebc0[0];
  if ((*(_BYTE*)(*GameData_212ebc0[0] + 161) & 1) == 0) {
    *(_BYTE*)(v2 + 161) = 1;
    v3 = *(_DWORD*)(v2 + 176);
    *(_DWORD*)(v2 + 176) = v3 + 1;
    if (v3 == 0) {
      (**(void (***)(__int64))(v2 + 168))(v2 + 168),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    GameRoutine_d799f0(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((*(_BYTE*)(v2 + 162) & 1) == 0) {
    *(_BYTE*)(v2 + 162) = 1;
    v4 = *(_DWORD*)(v2 + 192);
    *(_DWORD*)(v2 + 192) = v4 + 1;
    if (v4 == 0) {
      (**(void (***)(__int64))(v2 + 184))(v2 + 184),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    GameRoutine_d799f0(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  ProcChallengeBegin_fc3840_alt1(&v6_.v6),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1028300(a1, &v6_.v6),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v6_.v7 != 0) {
    return std___1___shared_weak_count___release_weak(v6_.v7);
  }
  return result;
}

__int64 game_hub_anonymous_ProcChallengeBegin_Dialog(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;
  const char* v11;

  v11 = "MID_Dungeon_Challenger_Confirm";
  v8 = v7;
  v6 = v5;
  v9[0] = GameData_1ffd090;
  v9[1] = a1;
  v10 = v9;
  v7[0] = GameData_1ffd110;
  v5[0] = GameData_1ffd110;
  MapSortieMenu_871860(a1, &v11, v9, v7, v5);
  if (v6 == v5) {
    v1 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v6 + v1))((__int64)v6);
LABEL_6:
  if (v8 == v7) {
    v2 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v8 + v2))((__int64)v8);
LABEL_11:
  result = (__int64)v10;
  if (v10 == v9) {
    v4 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (*(__int64 (**)(__int64))(*v10 + v4))((__int64)v10);
}

__int64 ProcChallengeBegin_fc34c0(__int64 result)
{
  int v1;
  __int64 v2;

  if (*(_BYTE*)(result + 176) != 0) {
    v1 = 1;
  }
  else {
    v1 = 2;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__n128 ProcChallengeBegin_fc37f0(__int64 a1)
{
  __n128 result;
  struct {
    __int64 v3;
    __int64 v4;
  } v3_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  ProcChallengeBegin_fc3840_alt1(&v3_.v3),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1028670(a1, &v3_.v3),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v3_.v4 != 0) {
    return std___1___shared_weak_count___release_weak(v3_.v4);
  }
  return result;
}

void ProcChallengeBegin_fc3840(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* i;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* j;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  bool v28;
  bool v29;
  bool v30;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *(_BYTE*)(v3 + 43) = 0;
  v35 = v3;
  *(_DWORD*)(v3 + 39) = -1182604392;
  *(_QWORD*)(v3 + 24) = 0xE3BCACE980A1E8B8LL;
  *(_QWORD*)(v3 + 32) = 0x9883E3AB83E39C83LL;
  *(_QWORD*)v3 = 0x83E3A583E38183E3LL;
  *(_QWORD*)(v3 + 8) = 0xE3AA83E38883E3BCLL;
  *(_QWORD*)(v3 + 16) = 0x90E55FAB83E3A282LL;
  v4 = GameData_212d458[0];
  for (i = *(_QWORD**)(*GameData_212d458[0] + 24);
       i != *(_QWORD**)(*GameData_212d458[0] + 32); i += 2) {
    v6 = *i;
    v7 = *(unsigned __int8*)(*i + 320LL);
    v8 = *(_QWORD*)(*i + 328LL);
    if ((v7 & 1) == 0) {
      v8 = v7 >> 1;
    }
    if (v8 == 15) {
      v9 = (v7 & 1) != 0 ? *(__int64**)(v6 + 336) : (__int64*)(v6 + 321);
      v10 = *v9;
      v11 = *(__int64*)((char*)v9 + 7);
      if (v10 == 0x8AE7A688E6918CE6LL && v11 == 0x98BBE4978FE5B68ALL) {
        v13 = i[1];
        if (v13 != 0) {
          v14 = v3;
          v15 = i[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          v16 = std___1___shared_weak_count_lock_alt1(v15);
          std___1___shared_weak_count___release_weak_alt1(v13);
          v3 = v14;
          if (v16 != 0) {
            goto LABEL_45;
          }
        }
        break;
      }
    }
  }
  for (j = *(_QWORD**)(*v4 + 24);; j += 2) {
    if (j == *(_QWORD**)(*v4 + 32)) {
      goto LABEL_47;
    }
    v6 = *j;
    v18 = *(unsigned __int8*)(*j + 320LL);
    v19 = *(_QWORD*)(*j + 328LL);
    if ((v18 & 1) == 0) {
      v19 = v18 >> 1;
    }
    if (v19 == 43) {
      v20 = (v18 & 1) != 0 ? *(__int64**)(v6 + 336) : (__int64*)(v6 + 321);
      v21 = *v20;
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      v25 = v20[4];
      v26 = *(__int64*)((char*)v20 + 35);
      v27 = *(_QWORD*)v3 == v21 && *(_QWORD*)(v3 + 8) == v22;
      v28 = v27 && *(_QWORD*)(v3 + 16) == v23;
      v29 = v28 && *(_QWORD*)(v3 + 24) == v24;
      v30 = v29 && *(_QWORD*)(v3 + 32) == v25;
      if (v30 && *(_QWORD*)(v3 + 35) == v26) {
        break;
      }
    }
  }
  v32 = j[1];
  if (v32 == 0 ||
      (v33 = j[1],
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                 memory_order_relaxed),
       v16 = std___1___shared_weak_count_lock_alt1(v33),
       std___1___shared_weak_count___release_weak_alt1(v32), v16 == 0)) {
  LABEL_47:
    *a1 = 0;
    a1[1] = 0;
    goto LABEL_48;
  }
LABEL_45:
  *a1 = v6;
  a1[1] = v16;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
LABEL_48:
  if (v35 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v34, v35);
  }
}

__int64 ProcChallengeBegin_fc3b20(__int64 a1)
{
  unsigned __int64 v1;
  bool v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;

  v1 = *(unsigned __int8*)(a1 + 152);
  v2 = (v1 & 1) == 0;
  v3 = v1 >> 1;
  if (v2) {
    v4 = v3;
  }
  else {
    v4 = *(_QWORD*)(a1 + 160);
  }
  if (v2) {
    v5 = a1 + 153;
  }
  else {
    v5 = *(_QWORD*)(a1 + 168);
  }
  v6 = v4 + 4;
  if (v4 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v6 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v23_.v24 = v4 + 4;
    v23_.v25 = v9;
    *(_DWORD*)v9 = 1599230529;
    v7 = v9 + 4;
    v23_.v23 = v8 | 1;
  }
  else {
    HIDWORD(v23_.v23) = 0;
    v23_.v24 = 0;
    v23_.v25 = nullptr;
    *(_DWORD*)((char*)&v23_.v23 + 1) = 1599230529;
    LOBYTE(v23_.v23) = 2 * v6;
    v7 = (char*)&v23_.v23 + 5;
    if (v4 == 0) {
      goto LABEL_16;
    }
  }
  memmove_alt1((__int64)v7, v5, v4);
LABEL_16:
  v7[v4] = 0;
  if ((v23_.v23 & 1) != 0) {
    v10 = v23_.v25;
  }
  else {
    v10 = (char*)&v23_.v23 + 1;
  }
  v11 = game_HashString_alt1((__int64)v10);
  if (v11 == 0) {
    goto LABEL_43;
  }
  v12 = *(_QWORD*)(GameData_21c9ce8 + 96);
  if (v12 == 0 || *(_QWORD*)(GameData_21c9ce8 + 112) == 0) {
    goto LABEL_43;
  }
  v14 = v12 - 1;
  if ((v12 & (v12 - 1)) != 0) {
    v15 = v11;
    if (v11 >= v12) {
      v15 = v11 % v12;
    }
  }
  else {
    v15 = v14 & v11;
  }
  v16 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ce8 + 88) + 8 * v15);
  if (v16 != nullptr && (v17 = (_QWORD*)*v16) != nullptr) {
    if ((v12 & v14) == 0) {
      while (1) {
        v20 = v17[1];
        if (v20 == v11) {
          if (v17[2] == v11) {
            goto LABEL_52;
          }
        }
        else if ((v20 & v14) != v15) {
          goto LABEL_43;
        }
        v17 = (_QWORD*)*v17;
        v19 = 0;
        if (v17 == nullptr) {
          goto LABEL_46;
        }
      }
    }
    do {
      v18 = v17[1];
      if (v18 == v11) {
        if (v17[2] == v11) {
        LABEL_52:
          v19 = v17[3];
          if ((v23_.v23 & 1) != 0) {
            goto LABEL_47;
          }
          return v19;
        }
      }
      else {
        if (v18 >= v12) {
          v18 %= v12;
        }
        if (v18 != v15) {
          goto LABEL_43;
        }
      }
      v17 = (_QWORD*)*v17;
    } while (v17 != nullptr);
    v19 = 0;
  LABEL_46:
    if ((v23_.v23 & 1) == 0) {
      return v19;
    }
  }
  else {
  LABEL_43:
    v19 = 0;
    if ((v23_.v23 & 1) == 0) {
      return v19;
    }
  }
LABEL_47:
  if (v23_.v25 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v23_.v25);
  }
  return v19;
}

__int64 game_hub_anonymous_ProcChallengeBegin_Dialog_closure_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 176) = 1;
  return 4;
}

#pragma GCC visibility pop
