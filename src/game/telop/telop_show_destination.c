#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_167f810(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_173fe30(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_2032950[])();
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopShowDestination_Unknown35(_QWORD* a1);
__int64 TelopShowDestination_Unknown37(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_1388320(PSEUDO_X8);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 GameRoutine_159b580(__int64, _BYTE*, __int64, _DWORD*);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
void LayoutAccessor_1562680(__int64*, __int64, float);
void TextBoxEx_188ab20(__int64, _BYTE*);
__n128 TelopShowDestination_Unknown33(__int64 a1);
__n128 game_telop_TelopShowDestination_OnOpen_lambda0_Invoke(__int64 a1,
                                                             _BYTE* a2,
                                                             __int64 a3,
                                                             _DWORD* a4);

__n128 TelopShowDestination_Unknown33(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __n128 result;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = LayoutAccessor_155fbe0((__int64*)(a1 + 168), (__int64)"L_Tlp"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1562680(v2, (__int64)"Type_Common", 0x1.0000000000000p+0f),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = v2[1];
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v4 != 0) {
      v5 = *v2;
      v6 = v4;
      if (v5 != 0) {
        GameRoutine_1388320((void*)(&v18_.v18)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (v5 != 0 && v18_.v19 != 0) {
        v7 = std___1___shared_weak_count_lock(v18_.v19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v8 = v18_.v18;
        v9 = v7;
        std___1___shared_weak_count___release_weak_alt1(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v9 != 0 && v8 != 0) {
          v10 = *(unsigned __int8*)(a1 + 848);
          v11 = *(_QWORD*)(a1 + 856);
          if ((v10 & 1) == 0) {
            v11 = v10 >> 1;
          }
          if (v11 != 0) {
            if ((v10 & 1) != 0) {
              v12 = *(_QWORD*)(a1 + 864);
            }
            else {
              v12 = a1 + 849;
            }
            if (v12 != 0) {
              v13 = v12;
            }
            else {
              v13 = (__int64)*msg_MessageManager_empty_text__ptr;
            }
            GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704,
                               v13),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if ((*(_BYTE*)(a1 + 824) & 1) != 0) {
            v14 = *(_BYTE**)(a1 + 840);
          }
          else {
            v14 = (_BYTE*)(a1 + 825);
          }
          TextBoxEx_188ab20(v8, v14),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else if (v9 == 0) {
          goto LABEL_28;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
  }
LABEL_28:
  LayoutAccessor_1560070((void*)(&v18_.v18), (__int64*)(a1 + 168),
                         (__int64)"L_Img"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v18_.v19 == 0) {
    return result;
  }
  v16 = std___1___shared_weak_count_lock(v18_.v19),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v17 = v18_.v18;
  if (v18_.v19 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1();
  }
  if (v16 != 0 && v17 != 0) {
    LayoutAccessor_1562cf0(v17, (__int64)"Img00"),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    ui_LayoutAccessor_SetPaneVisible(v17, (__int64)"N_State", 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else if (v16 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1();
  }
  return result;
}

__int64 TelopShowDestination_Unknown35(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  _QWORD v17[3];

  v2 = GameRoutine_155fbe0(a1 + 21, "L_Tlp");
  GameRoutine_1562680(v2, "In", 1.0);
  v3 = a1[109];
  v4 = fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v17[0] = v6;
  v7 = a1[22];
  *v6 = v3;
  v17[1] = v6 + 1;
  v17[2] = v6 + 1;
  if (v7 == 0) {
    goto LABEL_7;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_7;
  }
  v9 = a1[21];
  if (v9 != 0) {
    LODWORD(v3) = *(_DWORD*)(v9 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != 0) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v14 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v14);
  if (v9 == 0) {
  LABEL_7:
    LODWORD(v3) = 0;
  }

LABEL_8:
  v15[0] = GameData_2032950;
  v15[1] = a1;
  v16 = v15;
  if (GameData_225e7a0 != 0) {
    v10 = 32;
    v11 = v15;
  LABEL_10:
    (*(void (**)(_QWORD*, __int64))(*v11 + v10))(v11, v5);
    goto LABEL_11;
  }
  GameRoutine_167f810(a1, 5, v17, 0, (unsigned int)v3, v15);
  v11 = v16;
  if (v16 == v15) {
    v10 = 32;
    goto LABEL_10;
  }
  if (v16 != nullptr) {
    v10 = 40;
    goto LABEL_10;
  }

LABEL_11:
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v12 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
}

__int64 TelopShowDestination_Unknown37(_QWORD* a1)
{
  __int64 v2;
  char v3;

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
  if (a1[99] != 0 && (GameRoutine_173fe30() & 1) != 0 ||
      (GameRoutine_1563280(a1 + 21, v2, 0) & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = GameData_225e7a0;
    if (GameData_225e7a0 != 0) {
      v3 = *(_BYTE*)(GameData_225e7a0 + 408);
    }
  }
  return v3 & 1;
}

__n128 game_telop_TelopShowDestination_OnOpen_lambda0_Invoke(__int64 a1,
                                                             _BYTE* a2,
                                                             __int64 a3,
                                                             _DWORD* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v8;
  long double v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __n128 result;
  struct {
    __int64* v17;
    __int64 v18;
  } v17_;

  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_QWORD*)(a1 + 8);
  LayoutAccessor_1560070((void*)(&v17_.v17), (__int64*)(v4 + 168),
                         (__int64)"L_Img"),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v17_.v18 == 0) {
    goto LABEL_19;
  }
  v8 = std___1___shared_weak_count_lock(v17_.v18),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v10 = v17_.v17;
  if (v17_.v18 != 0) {
    *(__n128*)&v9 = std___1___shared_weak_count___release_weak_alt1(),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v8 == 0 || v10 == nullptr) {
    if (v8 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v12 = v10[1];
    if (v12 != 0) {
      v13 = std___1___shared_weak_count_lock(v12),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v13 != 0) {
        v14 = v13;
        if (*v10 != 0) {
          ControlCreator_13633c0(*v10),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(__n128*)&v9 = std___1___shared_weak_count___release_weak_alt1(),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(v8, v9),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_19:
  LayoutAccessor_1560070((void*)(&v17_.v17), (__int64*)(v4 + 168),
                         (__int64)"L_Img"),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = GameRoutine_159b580((__int64)&v17_.v17, a2, a3, a4),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v17_.v18 != 0) {
    return std___1___shared_weak_count___release_weak_alt1();
  }
  return result;
}

#pragma GCC visibility pop
