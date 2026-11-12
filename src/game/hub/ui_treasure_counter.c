#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1585290(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_da1870(void);
__int64 GameRoutine_e00880(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1ff6378[])();
extern __int64 (*GameData_1ff6408[])();
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 GameData_212d690;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_220b6e0;
extern __int64 GameData_225ca88;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212eec0[4];
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
_QWORD* UITreasureCounter_Destructor(_QWORD* result);
__int64 UITreasureCounter_Unknown2_alt1() __asm__("UITreasureCounter_Unknown2");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f0b8[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 UiTreasureCounter_e00880(__int64 result, __int64 a2);
__n128
UiTreasureCounter_f630e0_alt1(_QWORD* a1) __asm__("UiTreasureCounter_f630e0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameRoutine_156c910_alt1(__int64 result, const char*, int,
                                 ...) __asm__("GameRoutine_156c910");
__int64 GameRoutine_1585290_alt1(__int64*, __int64,
                                 __int64) __asm__("GameRoutine_1585290");
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void UIBase_da1870(float*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void UiTreasureCounter_f630e0(_QWORD* a1);
void UITreasureCounter_Unknown2(float* a1);

__int64 UiTreasureCounter_e00880(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = *(__int64**)(result + 40);
  v3 = *(__int64**)(result + 48);
  v5 = result;
  if (v2 != v3) {
    while (1) {
      v13 = *v2;
      v6 = v2[1];
      v14 = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                  memory_order_relaxed);
      }
      v7 = *(_QWORD*)(a2 + 32);
      if (v7 == 0) {
        break;
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v13);
      v8 = v14;
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        result = std___1___shared_weak_count___release_weak(v8);
      }
      v2 += 2;
      if (v2 == v3) {
        goto LABEL_10;
      }
    }
  LABEL_20:
    GameRoutine_60a310(v7, a2);
  }

LABEL_10:
  v9 = *(__int64**)(v5 + 64);
  v10 = *(__int64**)(v5 + 72);
  if (v9 != v10) {
    while (1) {
      v13 = *v9;
      v11 = v9[1];
      v14 = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v7 = *(_QWORD*)(a2 + 32);
      if (v7 == 0) {
        break;
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v13);
      v12 = v14;
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak(v12);
      }
      v9 += 2;
      if (v9 == v10) {
        return result;
      }
    }
    goto LABEL_20;
  }
  return result;
}

_QWORD* UITreasureCounter_Destructor(_QWORD* result)
{
  __int64 v1;
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;

  *result = game_hub_UIBase_vtable;
  v1 = GameData_220b6e0;
  v3 = *(char**)(GameData_220b6e0 + 136);
  v2 = *(char**)(GameData_220b6e0 + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD**)v3 != result) {
        v3 += 8;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        return result;
      }
      for (v3 += 16;; v3 += 32) {
        if (*((_QWORD**)v3 - 2) == result) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 - 1) == result) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD**)v3 == result) {
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 + 1) == result) {
          break;
        }
        v6 = v3 + 16;
        if (v6 == v2) {
          return result;
        }
      }
      v3 += 8;
    }
  }

LABEL_17:
  v7 = v3 + 8;
  if (v3 == v2 || v7 == v2) {
    if (v3 != v2) {
    LABEL_28:
      *(_QWORD*)(v1 + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD**)v7 != result) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(v1 + 144)) {
      goto LABEL_28;
    }
  }
  return result;
}

void UiTreasureCounter_f630e0(_QWORD* a1)
{
  __int64 v1;
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v9;

  *a1 = GameData_212f0b8[0] + 2;
  v1 = GameData_220b6e0;
  v3 = *(char**)(GameData_220b6e0 + 136);
  v2 = *(char**)(GameData_220b6e0 + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD**)v3 != a1) {
        v3 += 8;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        goto LABEL_29;
      }
      v3 += 16;
      while (1) {
        if (*((_QWORD**)v3 - 2) == a1) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 - 1) == a1) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD**)v3 == a1) {
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 + 1) == a1) {
          break;
        }
        v6 = v3 + 16;
        v3 += 32;
        if (v6 == v2) {
          goto LABEL_29;
        }
      }
      v3 += 8;
    }
  }
LABEL_17:
  v7 = v3 + 8;
  if (v3 == v2 || v7 == v2) {
    if (v3 != v2) {
    LABEL_28:
      *(_QWORD*)(v1 + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD**)v7 != a1) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(v1 + 144)) {
      goto LABEL_28;
    }
  }
LABEL_29:
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)a1);
}

void UITreasureCounter_Unknown2(float* a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  char v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  struct {
    __int64* v23;
    __int64 v24;
  } v23_;
  _QWORD* v25;
  _QWORD v26[2];
  _QWORD var8[3];

  UIBase_da1870(a1);
  if (*(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 200LL) == 0) {
    v3 = GameData_225ca88;
    if (GameData_225ca88 == 0) {
      return;
    }
    goto LABEL_6;
  }
  HIDWORD(var8[0]) = 0;
  v1 = GameData_212eec0[0];
  v22[0] = GameData_1ff6408;
  v22[1] = (char*)var8 + 4;
  v25 = v22;
  UiTreasureCounter_e00880(*GameData_212eec0[0], (__int64)v22);
  if (v25 == v22) {
    v2 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_9;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v25 + v2))((__int64)v25);
LABEL_9:
  v3 = GameData_225ca88;
  if ((signed __int64)var8[0] <= 0LL) {
    if (GameData_225ca88 == 0) {
      return;
    }
  LABEL_6:
    ui_LayoutAccessor_SetPaneVisible_alt1(v3 + 176, (__int64)"L_Treasure", 0);
    return;
  }
  if (GameData_225ca88 != 0) {
    ui_LayoutAccessor_SetPaneVisible_alt1(GameData_225ca88 + 176,
                                          (__int64)"L_Treasure", 1);
  }
  v4 = *v1;
  HIDWORD(var8[0]) = 0;
  v22[0] = GameData_1ff6378;
  v22[1] = (char*)var8 + 4;
  v25 = v22;
  UiTreasureCounter_e00880(v4, (__int64)v22);
  if (v25 == v22) {
    v5 = 32;
    goto LABEL_18;
  }
  if (v25 != nullptr) {
    v5 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v25 + v5))((__int64)v25);
  }
  v6 = HIDWORD(var8[0]);
  if (GameData_225ca88 != 0) {
    v26[1] = var8[1];
    var8[0] = var8[2];
    v7 = v6;
    LayoutAccessor_1560070((void*)(&v23_.v23),
                           (__int64*)(GameData_225ca88 + 176), "L_Treasure");
    if (v23_.v24 != 0) {
      v8 = std___1___shared_weak_count_lock_alt1(v23_.v24);
      v9 = v23_.v23;
      if (v23_.v24 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v23_.v24);
      }
      if (v8 != 0 && v9 != nullptr) {
        v10 = ui_LayoutAccessor_FindPane_alt1(v9, (__int64)"T_Num");
        if (v10 != 0) {
          v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d690, 0);
          if (v11 != 0) {
            GameRoutine_156c910_alt1(v11, "%d", 1, (unsigned int)v7);
          }
        }
        v12 = ui_LayoutAccessor_FindTextBox_alt1(v9, (__int64)"T_Num");
        if (v12 != 0) {
          v13 = v12;
          v14 =
              (_QWORD*)ui_LayoutAccessor_FindTextBox_alt1(v9, (__int64)"T_Num");
          if (v14 != nullptr) {
            GameRoutine_190a0c0_alt1((float*)&v23_.v23, (__int64)v26,
                                     (float*)&v25 + 1, v14, v14[27]);
            v15 = v26[0];
          }
          else {
            v15 = 0;
          }
          v16 = *(_BYTE*)(v13 + 88);
          *(_QWORD*)(v13 + 80) = v15;
          *(_BYTE*)(v13 + 88) = v16 | 0x10;
        }
        if (v7 <= 0) {
          v17 = "Complete";
        }
        else {
          v17 = "Default";
        }
        LayoutAccessor_1562cf0((__int64)v9, v17);
        v18 = ui_LayoutAccessor_FindAlignment_alt1(v9, (__int64)"A_Txt");
        if (v18 != 0) {
          Alignment_56b600_alt1(v18);
          v19 = v9[1];
          if (v19 != 0) {
            v20 = std___1___shared_weak_count_lock_alt1(v19);
            if (v20 != 0) {
              v21 = v20;
              if (*v9 != 0) {
                ControlCreator_13633c0_alt1(*v9);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
                std___1___shared_weak_count___release_weak_alt1(v21);
              }
            }
          }
        }
        GameRoutine_1585290_alt1(v9, (__int64)"N_Contents", (__int64)"Wdw");
      }
      else if (v8 == 0) {
        return;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
    }
  }
}

#pragma GCC visibility pop
