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
__int64 TelopShowDestination_Unknown35_alt1(_QWORD* a1) __asm__(
    "TelopShowDestination_Unknown35");
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
__n128 TelopShowDestination_Unknown33_alt1(__int64 a1) __asm__(
    "TelopShowDestination_Unknown33");
__n128 game_telop_TelopShowDestination_OnOpen_lambda0_Invoke_alt1(
    __int64 a1, _BYTE* a2, __int64 a3,
    _DWORD*
        a4) __asm__("game_telop_TelopShowDestination_OnOpen_lambda0_Invoke");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void game_gameui_159b580(__int64, _BYTE*, __int64, _DWORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 TelopShowDestination_Unknown33(__int64 a1);
void TelopShowDestination_Unknown35(__int64* a1);
__int64 game_telop_TelopShowDestination_OnOpen_lambda0_Invoke(__int64 a1,
                                                              _BYTE* a2,
                                                              __int64 a3,
                                                              _DWORD* a4);

__int64 TelopShowDestination_Unknown33(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  const char* v13;
  const char* v14;
  _BYTE* v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v2 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 168), "L_Tlp");
  GameHr_1562680((__int64)v2, "Type_Common", 0x1.0000000000000p+0f);
  v3 = v2[1];
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v3);
    if (v4 != 0) {
      v5 = *v2;
      v6 = v4;
      if (v5 != 0) {
        GameRoutine_1388320((void*)(&v19_.v19));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
      if (v5 != 0) {
        v7 = v19_.v20;
        if (v19_.v20 != 0) {
          v8 = std___1___shared_weak_count_lock_alt1(v19_.v20);
          v9 = v19_.v19;
          v10 = v8;
          std___1___shared_weak_count___release_weak_alt2(v7);
          if (v10 != 0 && v9 != 0) {
            v11 = *(unsigned __int8*)(a1 + 848);
            v12 = *(_QWORD*)(a1 + 856);
            if ((v11 & 1) == 0) {
              v12 = v11 >> 1;
            }
            if (v12 != 0) {
              if ((v11 & 1) != 0) {
                v13 = *(const char**)(a1 + 864);
              }
              else {
                v13 = (const char*)(a1 + 849);
              }
              if (v13 != nullptr) {
                v14 = v13;
              }
              else {
                v14 = *msg_MessageManager_empty_text__ptr;
              }
              GameRoutine_60a020_alt1(
                  *msg_MessageManager_instance__ptr[0] + 14704, v14);
            }
            if ((*(_BYTE*)(a1 + 824) & 1) != 0) {
              v15 = *(_BYTE**)(a1 + 840);
            }
            else {
              v15 = (_BYTE*)(a1 + 825);
            }
            TextBoxEx_188ab20(v9, v15);
          }
          else if (v10 == 0) {
            goto LABEL_28;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak_alt2(v10);
          }
        }
      }
    }
  }
LABEL_28:
  LayoutAccessor_1560070_alt1((void*)(&v19_.v19), (__int64*)(a1 + 168),
                              "L_Img");
  result = v19_.v20;
  if (v19_.v20 == 0) {
    return result;
  }
  v17 = std___1___shared_weak_count_lock_alt1(v19_.v20);
  v18 = v19_.v19;
  result = v19_.v20;
  if (v19_.v20 != 0) {
    result = std___1___shared_weak_count___release_weak_alt2(v19_.v20);
  }
  if (v17 != 0 && v18 != 0) {
    LayoutAccessor_1562cf0_alt1(v18, "Img00");
    result = ui_LayoutAccessor_SetPaneVisible(v18, (__int64)"N_State", 0);
  }
  else if (v17 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    return std___1___shared_weak_count___release_weak_alt2(v17);
  }
  return result;
}

void TelopShowDestination_Unknown35(__int64* a1)
{
  __int64* v2;
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
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  _QWORD v16[3];

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = LayoutAccessor_155fbe0_alt1(a1 + 21, "L_Tlp"),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_1562680((__int64)v2, "In", 0x1.0000000000000p+0f),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1[109];
  v4 = fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16[0] = v6;
  v7 = a1[22];
  *v6 = v3;
  v16[1] = v6 + 1;
  v16[2] = v6 + 1;
  if (v7 == 0) {
    goto LABEL_7;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v7),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
  v13 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  std___1___shared_weak_count___release_weak_alt2(v13),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v9 == 0) {
  LABEL_7:
    LODWORD(v3) = 0;
  }
LABEL_8:
  v14_.v14[0] = GameData_2032950;
  v14_.v14[1] = a1;
  v14_.v15 = v14_.v14;
  if (GameData_225e7a0 != 0) {
    v10 = 32;
    v11 = v14_.v14;
  LABEL_10:
    (*(void (**)(_QWORD*, __int64))(*v11 + v10))(v11, v5),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_11;
  }
  GameHr_167f810((__int64)a1, 5, (__int64)v16, 0, v3, (__int64)v14_.v14),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = v14_.v15;
  if (v14_.v15 == v14_.v14) {
    v10 = 32;
    goto LABEL_10;
  }
  if (v14_.v15 != nullptr) {
    v10 = 40;
    goto LABEL_10;
  }
LABEL_11:
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v12, (__int64)v6),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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

__int64 game_telop_TelopShowDestination_OnOpen_lambda0_Invoke(__int64 a1,
                                                              _BYTE* a2,
                                                              __int64 a3,
                                                              _DWORD* a4)
{
  __int64 v4;
  __int64 v8;
  __int64* v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  struct {
    __int64* v15;
    __int64 v16;
  } v15_;

  v4 = *(_QWORD*)(a1 + 8);
  LayoutAccessor_1560070_alt1((void*)(&v15_.v15), (__int64*)(v4 + 168),
                              "L_Img");
  if (v15_.v16 == 0) {
    goto LABEL_19;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v15_.v16);
  v9 = v15_.v15;
  if (v15_.v16 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v15_.v16);
  }
  if (v8 == 0 || v9 == nullptr) {
    if (v8 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v11 = v9[1];
    if (v11 != 0) {
      v12 = std___1___shared_weak_count_lock_alt1(v11);
      if (v12 != 0) {
        v13 = v12;
        if (*v9 != 0) {
          ControlCreator_13633c0(*v9);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt2(v13);
        }
      }
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
LABEL_19:
  LayoutAccessor_1560070_alt1((void*)(&v15_.v15), (__int64*)(v4 + 168),
                              "L_Img");
  game_gameui_159b580((__int64)&v15_.v15, a2, a3, a4);
  result = v15_.v16;
  if (v15_.v16 != 0) {
    return std___1___shared_weak_count___release_weak_alt2(v15_.v16);
  }
  return result;
}

#pragma GCC visibility pop
