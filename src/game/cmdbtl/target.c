#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlParty_e773c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_e76590(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e766a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e76770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e76a50(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD GameData_1b9aebc[3];
extern _QWORD GameData_1b01768[4];
extern __int64 (*GameData_1ff4ea8[])();
extern __int64 (*game_cmdbtl_Target_vtable[])();
extern __int64 GameData_2203490;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ea58;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__n128 Target_Destructor(_QWORD* a1);
__n128 Target_DeletingDestructor(_QWORD* a1);
unsigned __int8* game_cmdbtl_Target_CalcLink(__int64 a1);
__int64 Target_f47270(__int64 a1);
__int64 Target_f476f0(__int64 a1, __int64 a2);
__int64 Target_f477e0(__int64 a1, __int64 a2, __int64* a3);
__int64 game_cmdbtl_Target_CalcLink_lambda0_Invoke(_QWORD* a1, __int64* a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__n128 Target_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[5];
  *a1 = game_cmdbtl_Target_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v7 = a1[2];
  if (v7 != 0) {
    v8 = *v3;
    a1[3] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(v8 + v9);
  }
  return result;
}

__n128 Target_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[5];
  *a1 = game_cmdbtl_Target_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[2];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[3] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

unsigned __int8* game_cmdbtl_Target_CalcLink(__int64 a1)
{
  unsigned __int8* result;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    __int64 v17;
    unsigned __int8* v18;
  } v17_;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  _QWORD* v21;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  result = *(unsigned __int8**)(a1 + 8);
  if ((unsigned int)result[8] - 7 <= 2) {
    v3 = (_QWORD*)(*(__int64 (**)(unsigned __int8*))(*(_QWORD*)result + 16LL))(
        result),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v8 = v3[10];
    v7 = v3[11];
    v21 = v3;
    v17_.v17 = v8;
    v17_.v18 = (unsigned __int8*)v7;
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
    }
    v9 = (__int64*)v3[5];
    v10 = (__int64*)v3[6];
    v15_.v15[0] = GameData_1ff4ea8;
    v15_.v15[1] = a1;
    v15_.v15[2] = &v21;
    v15_.v15[3] = &v17_.v17;
    v15_.v16 = v15_.v15;
    if (v9 == v10) {
      v13 = v15_.v15;
    }
    else {
      do {
        v19_.v19 = *v9;
        v11 = v9[1];
        v19_.v20 = v11;
        if (v11 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v15_.v16 == nullptr) {
          GameRoutine_60a310_alt1(),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        (*(void (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16,
                                                            &v19_.v19),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v12 = v19_.v20;
        if (v19_.v20 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v12),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        v9 += 2;
      } while (v9 != v10);
      v13 = v15_.v16;
      if (v15_.v16 != v15_.v15) {
        if (v15_.v16 == nullptr) {
          goto LABEL_19;
        }
        v14 = 40;
      LABEL_18:
        (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v13 + v14))(v13, v4,
                                                                       v5, v6),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      LABEL_19:
        result = v17_.v18;
        if (v17_.v18 != nullptr) {
          return (unsigned __int8*)
              std___1___shared_weak_count___release_weak_alt1(
                  (__int64)v17_.v18);
        }
        return result;
      }
    }
    v14 = 32;
    goto LABEL_18;
  }
  return result;
}

__int64 Target_f47270(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  char v13;
  __int64 v14;
  int v15;
  int* v16;
  _QWORD v17[2];

  result = *(_QWORD*)(a1 + 8);
  if ((unsigned int)*(unsigned __int8*)(result + 8) - 7 > 2 ||
      (*(_DWORD*)(result + 16) & 0x80000000) == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 40);
  v4 = a1;
  v5 = GameData_1b9aebc[(unsigned __int8)(*(_BYTE*)(result + 8) - 7)];
  if (v3 == 0 || *(_QWORD*)(v3 + 8) == -1) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
    v3 = *(_QWORD*)(result + 88);
    if (v3 == 0) {
      v8 = 0;
      v7 = 0;
      goto LABEL_13;
    }
    v6 = (__int64*)(result + 80);
  }
  else {
    v6 = (__int64*)(result + 32);
  }
  v7 = *v6;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v8 = std___1___shared_weak_count_lock(v3);
  if (v8 == 0) {
    v7 = 0;
  }
  result = std___1___shared_weak_count___release_weak(v3);
LABEL_13:
  v9 = *(_QWORD*)(v7 + 16);
  v10 = (_QWORD*)v4;
  if (*(_WORD*)(v9 + 1952) != 0) {
    v11 = (__int64*)(v9 + 1952);
    v12 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 8) + 16LL))(
        *(_QWORD*)(v4 + 8));
    v17[0] = v7;
    v17[1] = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_e766a0(v12, v17, v11, v5);
      v13 = result;
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        result = std___1___shared_weak_count___release_weak(v8);
      }
      v10 = (_QWORD*)v4;
      if ((v13 & 1) == 0) {
        goto LABEL_80;
      }
    }
    else {
      result = GameRoutine_e766a0(v12, v17, v11, v5);
      v10 = (_QWORD*)v4;
      if ((result & 1) == 0) {
        goto LABEL_80;
      }
    }
    v14 = *v11;
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 828LL) == *v11) {
      v15 = 0;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 836LL) == v14) {
      v15 = 1;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 844LL) == v14) {
      v15 = 2;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 852LL) == v14) {
      v15 = 3;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 860LL) == v14) {
      v15 = 4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 868LL) == v14) {
      v15 = 5;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 876LL) == v14) {
      v15 = 6;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 884LL) == v14) {
      v15 = 7;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 892LL) == v14) {
      v15 = 8;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 900LL) == v14) {
      v15 = 9;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 908LL) == v14) {
      v15 = 10;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 916LL) == v14) {
      v15 = 11;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 924LL) == v14) {
      v15 = 12;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 932LL) == v14) {
      v15 = 13;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 940LL) == v14) {
      v15 = 14;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 948LL) == v14) {
      v15 = 15;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 956LL) == v14) {
      v15 = 16;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 964LL) == v14) {
      v15 = 17;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 972LL) == v14) {
      v15 = 18;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 980LL) == v14) {
      v15 = 19;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 988LL) == v14) {
      v15 = 20;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 996LL) == v14) {
      v15 = 21;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 1004LL) == v14) {
      v15 = 22;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 1012LL) == v14) {
      v15 = 23;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 1020LL) == v14) {
      v15 = 24;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 1028LL) == v14) {
      v15 = 25;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 1036LL) == v14) {
      v15 = 26;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 1044LL) == v14) {
      v15 = 27;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 1052LL) == v14) {
      v15 = 28;
      v10 = (_QWORD*)v4;
      goto LABEL_82;
    }
    v10 = (_QWORD*)v4;
    if (*(_QWORD*)(*(_QWORD*)(v7 + 16) + 1060LL) == v14) {
      v15 = 29;
      goto LABEL_82;
    }
  }
LABEL_80:
  v16 = (int*)v10[2];
  if ((int*)v10[3] != v16) {
    v15 = *v16;
  LABEL_82:
    *(_DWORD*)(v10[1] + 16LL) = v15;
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 Target_f476f0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  char v10;
  __int64 v12;
  __int64 v13;

  v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16LL))(
      *(_QWORD*)(a1 + 8));
  v5 = *(_QWORD*)(v4 + 88);
  if (v5 != 0) {
    v6 = *(_QWORD*)(v4 + 80);
    v7 = *(_QWORD*)(v4 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v12 = 0;
    v8 = std___1___shared_weak_count_lock(v7);
    v13 = v8;
    if (v8 != 0) {
      v12 = v6;
    }
    std___1___shared_weak_count___release_weak(v5);
    v9 = Target_f477e0(a1, a2, &v12);
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
      v9 = v10;
    }
  }
  else {
    v12 = 0;
    v13 = 0;
    v9 = Target_f477e0(a1, a2, &v12);
  }
  return v9 & 1;
}

__int64 Target_f477e0(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  atomic_ullong* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v29[2];
  _QWORD v30[2];
  _QWORD v31[2];
  _QWORD v32[2];
  int v33;

  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16LL))(
      *(_QWORD*)(a1 + 8));
  v7 = *(_QWORD*)(a1 + 8);
  v8 = *(unsigned __int8*)(v7 + 8);
  if (v8 != 3) {
    if (v8 == 2) {
      v17 = *a3;
      v14 = a3[1];
      v30[0] = v17;
      v30[1] = v14;
      if (v14 == 0) {
        v16 = GameRoutine_e76a50(v6, v30, a2);
        return v16 & 1;
      }
      v18 = (atomic_ullong*)(v14 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
      v16 = GameRoutine_e76a50(v6, v30, a2);
      goto LABEL_27;
    }
    if (v8 != 1) {
      if ((unsigned int)(v8 - 7) <= 2) {
        v19 = (unsigned int)GameData_1b9aebc[(unsigned __int8)(v8 - 7)];
        v20 = *a3;
        v21 = a3[1];
        v29[0] = v20;
        v29[1] = v21;
        if (v21 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                    memory_order_relaxed);
          v22 = GameRoutine_e766a0(v6, v29, a2, v19);
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if ((v22 & 1) != 0) {
            LABEL_24:
              v16 = 1;
              return v16 & 1;
            }
          }
          else {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            std___1___shared_weak_count___release_weak(v21);
            if ((v22 & 1) != 0) {
              goto LABEL_24;
            }
          }
        }
        else if ((GameRoutine_e766a0(v6, v29, a2, v19) & 1) != 0) {
          goto LABEL_24;
        }
      }
      v16 = 0;
      return v16 & 1;
    }
  }
  if (*(_QWORD*)(v7 + 24) != 0) {
    v9 = GameData_2203490;
    v10 = *(_QWORD*)(GameData_2203490 + 640);
    v11 = *(_QWORD*)(GameData_2203490 + 648);
    if (v11 != 0 &&
        (atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0)) {
      v25 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
      v6 = v25;
      if (v10 != 0) {
        goto LABEL_8;
      }
    }
    else if (v10 != 0) {
      goto LABEL_8;
    }
    v10 = *(_QWORD*)(v9 + 656);
    v26 = *(_QWORD*)(v9 + 664);
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v27 = v6;
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak(v26);
        v6 = v27;
      }
    }
  LABEL_8:
    if (((*(_BYTE*)(v10 + 8) - 1) & 0xFC) != 0) {
      v12 = 256;
    }
    else {
      v12 = (unsigned int)(0x104010201200101uLL >>
                           (16 * (*(_BYTE*)(v10 + 8) - 1)));
    }
    v13 = *a3;
    v14 = a3[1];
    v31[0] = v13;
    v31[1] = v14;
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    v15 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
    if (v15 != 0) {
      LODWORD(v15) = *(_WORD*)(v15 + 16) & 0xFFF;
    }
    v33 = v15;
    v16 = GameRoutine_e76590(v6, v31, &v33, v12, a2);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_28;
    }
    return v16 & 1;
  }
  v23 = *a3;
  v14 = a3[1];
  v32[0] = v23;
  v32[1] = v14;
  if (v14 == 0) {
    v16 = GameRoutine_e76770(v6, v32, a2);
    return v16 & 1;
  }
  v18 = (atomic_ullong*)(v14 + 8);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                            memory_order_relaxed);
  v16 = GameRoutine_e76770(v6, v32, a2);
LABEL_27:
  if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) == 0) {
  LABEL_28:
    v24 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
    v16 = v24;
  }
  return v16 & 1;
}

__int64 game_cmdbtl_Target_CalcLink_lambda0_Invoke(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  unsigned int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  int v30;
  __int64 v31;
  int v32;
  _QWORD v33[2];
  __int64 v34;
  __int64 v35;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v5 = *(_QWORD*)(*(_QWORD*)(v3 + 16) + 440LL);
  if (v5 != 0 && (unsigned __int64)(v6 = *(unsigned __int8*)(v5 + 16)) <= 3) {
    v7 = GameData_1b01768[v6];
  }
  else {
    v7 = 3;
  }
  v8 = a1[1];
  v9 = GameData_212ea58;
  v10 = *GameData_212ea58 + (v7 << 7);
  v11 = *(_QWORD*)(v10 + 760);
  if (v11 == 0) {
    goto LABEL_12;
  }
  v12 = *(_QWORD*)(v10 + 752);
  v13 = *(_QWORD*)(v10 + 760);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                            memory_order_relaxed);
  v14 = std___1___shared_weak_count_lock(v13);
  if (v14 == 0) {
    std___1___shared_weak_count___release_weak(v11);
    goto LABEL_12;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v15);
  }
  result = std___1___shared_weak_count___release_weak(v11);
  if (v3 != v12) {
  LABEL_12:
    if ((unsigned int)*(unsigned __int8*)(*(_QWORD*)(v8 + 8) + 8LL) - 7 > 2) {
      v17 = 3;
    }
    else {
      v17 = GameData_1b9aebc[(
          unsigned __int8)(*(_BYTE*)(*(_QWORD*)(v8 + 8) + 8LL) - 7)];
    }
    v18 = (__int64*)a1[2];
    v19 = (__int64*)a1[3];
    v34 = 0;
    v35 = 0;
    v20 = *v18;
    v21 = v19[1];
    if (v21 != 0) {
      v35 = std___1___shared_weak_count_lock(v21);
      if (v35 != 0) {
        v34 = *v19;
      }
    }
    v33[0] = v3;
    v33[1] = v2;
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
      result = CmdBtlParty_e773c0(v20, &v34, v33, v17);
      v22 = result;
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        result = std___1___shared_weak_count___release_weak(v2);
      }
      v23 = v35;
      if (v35 == 0) {
        goto LABEL_25;
      }
    }
    else {
      result = CmdBtlParty_e773c0(v20, &v34, v33, v17);
      v22 = result;
      v23 = v35;
      if (v35 == 0) {
        goto LABEL_25;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      result = std___1___shared_weak_count___release_weak(v23);
      if ((v22 & 1) == 0) {
        goto LABEL_39;
      }
      goto LABEL_26;
    }
  LABEL_25:
    if ((v22 & 1) == 0) {
      goto LABEL_39;
    }
  LABEL_26:
    v24 = *(_QWORD*)(*(_QWORD*)(v3 + 16) + 440LL);
    if (v24 != 0 &&
        (unsigned __int64)(v25 = *(unsigned __int8*)(v24 + 16)) <= 3) {
      v26 = GameData_1b01768[v25];
    }
    else {
      v26 = 3;
    }
    v27 = *v9 + (v26 << 7);
    v28 = *(__int64**)(v27 + 712);
    v29 = *(__int64**)(v27 + 720);
    if (v28 == v29) {
      v30 = 0;
    }
    else {
      v30 = 0;
      do {
        v31 = *v28;
        v28 += 2;
        if (v31 == v3) {
          break;
        }
        ++v30;
      } while (v28 != v29);
    }
    v32 = v30;
    result = GameRoutine_6e5900(v8 + 40, &v32);
  }
LABEL_39:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

#pragma GCC visibility pop
