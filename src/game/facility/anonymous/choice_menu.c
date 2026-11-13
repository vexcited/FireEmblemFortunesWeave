#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1114ca0(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_159e2c0(_QWORD, _QWORD);
__int64 GameRoutine_16df7a0(void);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 game_g_game_setting;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ChoiceMenu_Unknown2_1115140(__int64 result);
__int64 ChoiceMenu_Unknown85(__int64 a1);
__int64 ChoiceMenu_Unknown94(_QWORD* a1);
__int64 ChoiceMenu_Unknown136(__int64 a1, int a2, char a3);
__int64 ChoiceMenu_Unknown137(__int64 a1, int a2, char a3);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_sound_PlayCursorHorizontalSe(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_200f7e0[])();
extern __int64 (*GameData_200fcd0[])();
extern __int64 (*game_facility_anonymous_ChoiceMenu_vtable[])();
extern __int64 GameData_200f738;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
bool game_facility_anonymous_ChoiceMenu_SetSelectedWorstItem_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD* game_facility_anonymous_ChoiceMenu_CheckFirstSelect(_QWORD* result);
__int64
game_facility_anonymous_ChoiceMenu_CheckFirstSelect_closure_Invoke(__int64 a1,
                                                                   __int64 a2);
__int64 ChoiceMenu_Destructor(_QWORD* a1);
__int64 ChoiceMenu_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ChoiceMenu_DeletingDestructor");
__int64 ChoiceMenu_Unknown11(__int64 a1, int a2, char a3);
__int64 ChoiceMenu_Unknown12(__int64 a1, int a2, char a3);
_QWORD* GameRoutine_159e2c0_alt1(__int64, char) __asm__("GameRoutine_159e2c0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    __int64 result, char, unsigned __int8,
    unsigned __int8) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Destroy_BasicMenu");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ChoiceMenu_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, __int64 result);
__int64* GameRoutine_1114a60(__int64* result, __int64, const char*,
                             unsigned int);
__int64 BasicMenuCursor_16ddaa0(__int64 result, int);
__int64 BlnPopup_19f25b0(__int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_155dbf0(float*);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 std___1___shared_weak_count_lock(__int64);
bool LayoutAccessor_1563380(__int64*, __int64, char);
extern __int64 (*GameData_200f760[])();
extern __int64 as_g_base_frame_counter;
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 game_facility_anonymous_ChoiceMenu_SetSelectedWorstItem(__int64 a1);

__int64 game_facility_anonymous_ChoiceMenu_SetSelectedWorstItem(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64* v4;
  int v6;
  __int64 v7;
  float v8;
  float v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  float v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 v26;
  _QWORD v27[2];
  struct {
    __int64 (**v28)();
    __int64 v29;
    char gap32_[16];
    __int64 (***v30)();
  } v28_;

  LayoutAccessor_1560070((void*)(&v28_.v28), (__int64*)(a1 + 168), "L_Choice");
  result = v28_.v29;
  if (v28_.v29 == 0) {
    goto LABEL_54;
  }
  v3 = std___1___shared_weak_count_lock(v28_.v29);
  v4 = (__int64*)v28_.v28;
  result = v28_.v29;
  if (v28_.v29 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v28_.v29);
  }
  if (v3 == 0 || v4 == nullptr) {
    if (v3 == 0) {
      goto LABEL_54;
    }
    goto LABEL_52;
  }
  v6 = *(_DWORD*)(a1 + 848);
  if (v6 == 3) {
    if (as_g_base_frame_counter != 0) {
      v18 = *(float*)(a1 + 864) +
            (float)((float)(*(float*)(as_g_base_frame_counter + 104) *
                            0x1.0aef000000000p+4f) /
                    0x1.f400000000000p+9f);
      *(float*)(a1 + 864) = v18;
    }
    else {
      v18 = *(float*)(a1 + 864);
    }
    if (v18 > 0x1.0000000000000p+0f) {
      result = BasicMenuCursor_16ddaa0(*(_QWORD*)(a1 + 856), 3);
      *(_DWORD*)(a1 + 848) = 0;
    }
    goto LABEL_52;
  }
  if (v6 != 2) {
    if (v6 == 1) {
      v7 = *(_QWORD*)(a1 + 824);
      if (v7 != 0) {
        v8 = *(float*)(v7 + 32);
        if (*(float*)(v7 + 36) >= v8 || (*(_BYTE*)(v7 + 136) & 1) != 0) {
          if ((*(_BYTE*)(v7 + 136) & 1) == 0) {
            GameRoutine_1114a60(v4, (__int64)"T_Num", "%d", 0);
            GameHr_1562680((__int64)v4, "NumEmphasis", 0x1.0000000000000p+0f);
            result = X8CALL_X0(
                __int64,
                game_80c770((void*)((__int64)&v28_.v28),
                            (__int64)"SE_EVT_Activity_Theater_Count_End"));
            *(_DWORD*)(a1 + 848) = 2;
          }
        }
        else {
          v9 = *(float*)(v7 + 44) - *(float*)(v7 + 48);
          if (v9 == v8) {
            v10 = (int)v9;
          }
          else if (v9 <= 0x0.0p+0f) {
            v10 = 0;
          }
          else {
            v10 = (int)v9 + 1;
          }
          if (v10 != *(_DWORD*)(a1 + 844)) {
            *(_DWORD*)(a1 + 844) = v10;
            GameHr_1562680((__int64)v4, "NumCount", 0x1.0000000000000p+0f);
            GameRoutine_1114a60(v4, (__int64)"T_Num", "%d", v10);
            game_80c770((void*)((__int64)&v28_.v28),
                        (__int64)"SE_EVT_Activity_Theater_Count");
            v7 = *(_QWORD*)(a1 + 824);
            v8 = *(float*)(v7 + 32);
          }
          v20 = 0x0.0p+0f;
          if (v8 > 0x0.0p+0f) {
            v20 = (float)(*(float*)(v7 + 36) / v8) * 0x1.9000000000000p+6f;
          }
          result =
              LayoutAccessor_15636c0((__int64)v4, (__int64)"GaugeDown", 0, v20);
        }
      }
    }
    goto LABEL_52;
  }
  result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
      v4, (__int64)"NumEmphasis", 0);
  if ((result & 1) == 0) {
  LABEL_52:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      result = std___1___shared_weak_count___release_weak_alt1(v3);
    }
    goto LABEL_54;
  }
  v11 = *(_QWORD*)(a1 + 856);
  if (v11 == 0) {
    goto LABEL_42;
  }
  v13 = *(_QWORD*)(v11 + 232);
  v12 = *(_QWORD*)(v11 + 240);
  result = (__int64)&v28_.v28;
  v28_.v28 = GameData_200f760;
  v28_.v29 = v11;
  v28_.v30 = &v28_.v28;
  if (v12 == v13) {
    goto LABEL_39;
  }
  v14 = 0;
  v15 = GameData_212e008[0];
  do {
    v16 = *(_QWORD*)(v13 + 8 * v14);
    if (v16 != 0) {
      v17 = __dynamic_cast(v16, v15, &GameData_200f738, 0);
      if (v17 == 0) {
        goto LABEL_23;
      }
      v27[0] = v17;
      if (v28_.v30 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if ((((__int64 (*)(__int64 (***)(void), _QWORD*))(*v28_.v30)[6])(v28_.v30,
                                                                       v27) &
           1) != 0) {
        break;
      }
      v13 = *(_QWORD*)(v11 + 232);
      v12 = *(_QWORD*)(v11 + 240);
    }
  LABEL_23:
    ++v14;
  } while (v14 < (v12 - v13) >> 3);
  result = (__int64)v28_.v30;
  if (v28_.v30 != &v28_.v28) {
    if (v28_.v30 != nullptr) {
      v19 = 40;
      goto LABEL_40;
    }
    goto LABEL_41;
  }
LABEL_39:
  v19 = 32;
LABEL_40:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v19))(result);
LABEL_41:
  *(_DWORD*)(v11 + 356) |= 4u;
LABEL_42:
  *(_DWORD*)(a1 + 848) = 3;
  if (v3 != 0) {
    goto LABEL_52;
  }
LABEL_54:
  v21 = *(_DWORD*)(a1 + 816);
  if (v21 == 2) {
    v27[0] = "L_Tlp/L_PopUp";
    v27[1] = 13;
    GameRoutine_1114920((void*)(&v28_.v28), (__int64*)(a1 + 168), v27);
    result = v28_.v29;
    if (v28_.v29 == 0) {
      return result;
    }
    v24 = std___1___shared_weak_count_lock(v28_.v29);
    v25 = v28_.v28;
    result = v28_.v29;
    if (v28_.v29 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v28_.v29);
    }
    if (v24 != 0 && v25 != nullptr) {
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          (__int64*)v25 + 11, 0, 0);
      if ((result & 1) != 0) {
        *(_DWORD*)(a1 + 816) = 3;
      }
    }
    else if (v24 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      v26 = v24;
      return std___1___shared_weak_count___release_weak_alt1(v26);
    }
  }
  else if (v21 == 1) {
    result = GameRoutine_155dbf0((float*)(a1 + 624));
    if ((result & 1) != 0) {
      *(_DWORD*)(a1 + 816) = 2;
      v27[0] = "L_Tlp/L_PopUp";
      v27[1] = 13;
      GameRoutine_1114920((void*)(&v28_.v28), (__int64*)(a1 + 168), v27);
      result = v28_.v29;
      if (v28_.v29 != 0) {
        v22 = std___1___shared_weak_count_lock(v28_.v29);
        v23 = (__int64)v28_.v28;
        result = v28_.v29;
        if (v28_.v29 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v28_.v29);
        }
        if (v22 != 0 && v23 != 0) {
          result = BlnPopup_19f25b0(v23);
          goto LABEL_74;
        }
        if (v22 != 0) {
        LABEL_74:
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
            v26 = v22;
            return std___1___shared_weak_count___release_weak_alt1(v26);
          }
        }
      }
    }
  }
  return result;
}

bool game_facility_anonymous_ChoiceMenu_SetSelectedWorstItem_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *(unsigned __int8*)(*a2 + 84);
  v5 = *(unsigned __int8*)(v2 + 1120);
  if (v4 == v5) {
    game_facility_anonymous_ChoiceMenu_CheckFirstSelect(*(_QWORD*)(a1 + 8));
    v6 = *(_QWORD*)(v2 + 336);
    if (v6 != v3) {
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
      }
      *(_QWORD*)(v2 + 336) = v3;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v2, 0, 1, 0);
      v7 = *(_QWORD*)(v2 + 336);
      if (v7 == 0) {
        v8 = 4;
      LABEL_12:
        *(_DWORD*)(v2 + 356) = *(_DWORD*)(v2 + 356) & 0xFFFFFFFB | v8;
        game_sound_PlayCursorHorizontalSe();
        return v4 == v5;
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      v6 = *(_QWORD*)(v2 + 336);
    }
    v8 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
    goto LABEL_12;
  }
  return v4 == v5;
}

_QWORD* game_facility_anonymous_ChoiceMenu_CheckFirstSelect(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;

  if (result[42] != 0) {
    return result;
  }
  v1 = result;
  v3 = result[29];
  v2 = result[30];
  v4 = v10;
  v10[0] = GameData_200f7e0;
  v11 = v10;
  if (v2 == v3) {
    goto LABEL_13;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v3 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_200f738, 0);
      if (v8 == 0) {
        goto LABEL_4;
      }
      v12 = v8;
      if (v11 == nullptr) {
        GameRoutine_60a310(0);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v12) & 1) !=
          0) {
        break;
      }
      v3 = v1[29];
      v2 = v1[30];
    }
  LABEL_4:
    ++v5;
  } while (v5 < (v2 - v3) >> 3);
  v4 = v11;
  if (v11 != v10) {
    if (v11 != nullptr) {
      v9 = 40;
      goto LABEL_14;
    }
    return (_QWORD*)game_menu_BasicMenu_Unknown16dd9a0(v1);
  }
LABEL_13:
  v9 = 32;
LABEL_14:
  (*(void (**)(_QWORD*))(*v4 + v9))(v4);
  return (_QWORD*)game_menu_BasicMenu_Unknown16dd9a0(v1);
}

__int64

game_facility_anonymous_ChoiceMenu_CheckFirstSelect_closure_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 83LL) = 0;
  return 0;
}

__int64 ChoiceMenu_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_facility_anonymous_ChoiceMenu_vtable;
  a1[22] = GameData_200fcd0;
  v2 = a1 + 134;
  v3 = (_QWORD*)a1[138];
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = a1[133];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

void ChoiceMenu_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = game_facility_anonymous_ChoiceMenu_vtable;
  a1[22] = GameData_200fcd0;
  v2 = a1 + 134;
  v3 = (_QWORD*)a1[138];
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = a1[133];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)a1);
}

__int64 ChoiceMenu_Unknown2_1115140(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 1056);
  if (v1 == 0 || *(float*)(v1 + 36) < *(float*)(v1 + 32)) {
    return GameRoutine_16df7a0();
  }
  return result;
}

__int64 ChoiceMenu_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 &&
      ((*(void (**)(__int64))(*(_QWORD*)v2 + 168LL))(v2),
       *(_QWORD*)(a1 + 336) = 0,
       _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(a1, 0, 1u, 0),
       (v3 = *(_QWORD*)(a1 + 336)) != 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 160LL))(v3);
    v4 = *(_QWORD*)(a1 + 336);
    v5 = 4;
    if (v4 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 120LL))(v4) & 1) != 0) {
        v5 = 4;
      }
      else {
        v5 = 0;
      }
    }
  }
  else {
    v5 = 4;
  }
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v5;
  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 952),
                         "L_Arrow/L_Arrow_L");
  GameRoutine_159e2c0_alt1((__int64)&v11_.v11, 0);
  if (v11_.v12 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v11_.v12);
  }
  LayoutAccessor_1560070((void*)(&v9_.v9), (__int64*)(a1 + 952),
                         "L_Arrow/L_Arrow_R");
  GameRoutine_159e2c0_alt1((__int64)&v9_.v9, 0);
  if (v9_.v10 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v9_.v10);
  }
  LayoutAccessor_1560070((void*)(&v7_.v7), (__int64*)(a1 + 952),
                         "L_Arrow/L_Arrow_D");
  GameRoutine_159e2c0_alt1((__int64)&v7_.v7, 0);
  result = v7_.v8;
  if (v7_.v8 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v7_.v8);
  }
  return result;
}

__int64 ChoiceMenu_Unknown94(_QWORD* a1)
{
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;

  if (a1[78] != 0) {
    a1[78] = 0;
  }
  GameRoutine_155e830(a1 + 106, 0);
  GameRoutine_155e830(a1 + 106, 1);
  v2 = (__int64*)a1[29];
  v3 = (__int64*)a1[30];
  if (v2 == v3) {
  LABEL_7:
    v4 = -1;
  }
  else {
    v4 = 0;
    while (1) {
      v5 = *v2++;
      if (v5 == a1[42]) {
        break;
      }
      ++v4;
      if (v2 == v3) {
        goto LABEL_7;
      }
    }
  }
  v6 = a1[138];
  v8 = v4;
  if (v6 == 0) {
    GameRoutine_60a310(0);
  }
  return (*(__int64 (**)(__int64, int*))(*(_QWORD*)v6 + 48LL))(v6, &v8);
}

__int64 ChoiceMenu_Unknown136(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  bool v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  int v13;

  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_2;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_2:
    v4 = *(_QWORD*)(a1 + 336);
    v5 = *(__int64**)(a1 + 232);
    v6 = *(__int64**)(a1 + 240);
    if (v5 == v6 ||
        a2 >= 1 &&
            ((v7 = v5 + 1, v5 += 2, v7 != v6) ? (v8 = v5 == v6) : (v8 = true),
             v8)) {
      v9 = 0;
      if (v4 != 0) {
        goto LABEL_23;
      }
    }
    else {
      v9 = *v5;
      if (v4 != *v5) {
      LABEL_23:
        GameRoutine_1114ca0((_QWORD*)a1);
        v11 = *(_QWORD*)(a1 + 336);
        if (v11 != v9) {
          if (v11 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
          }
          *(_QWORD*)(a1 + 336) = v9;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
          v12 = *(_QWORD*)(a1 + 336);
          if (v12 == 0) {
            v13 = 4;
          LABEL_34:
            *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v13;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v12 + 160LL))(v12);
          v11 = *(_QWORD*)(a1 + 336);
        }
        v13 = 4;
        if (v11 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 120LL))(v11) & 1) !=
              0) {
            v13 = 4;
          }
          else {
            v13 = 0;
          }
        }
        goto LABEL_34;
      }
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_2;
  }
  return result;
}

__int64 ChoiceMenu_Unknown137(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v12;

  if (a2 < 1) {
    return 0;
  }
  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_3;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_3:
    v4 = *(_QWORD*)(a1 + 336);
    v5 = *(__int64**)(a1 + 232);
    v6 = *(__int64**)(a1 + 240);
    if (v5 != v6) {
      v7 = v5 + 1;
      if (v7 != v6) {
        v8 = *v7;
        if (v4 == *v7) {
          return 0;
        }
      LABEL_20:
        GameRoutine_1114ca0((_QWORD*)a1);
        v10 = *(_QWORD*)(a1 + 336);
        if (v10 != v8) {
          if (v10 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 168LL))(v10);
          }
          *(_QWORD*)(a1 + 336) = v8;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
          v11 = *(_QWORD*)(a1 + 336);
          if (v11 == 0) {
            v12 = 4;
          LABEL_31:
            *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v12;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v11 + 160LL))(v11);
          v10 = *(_QWORD*)(a1 + 336);
        }
        v12 = 4;
        if (v10 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 120LL))(v10) & 1) !=
              0) {
            v12 = 4;
          }
          else {
            v12 = 0;
          }
        }
        goto LABEL_31;
      }
    }
    v8 = 0;
    if (v4 != 0) {
      goto LABEL_20;
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_3;
  }
  return result;
}

__int64 ChoiceMenu_Unknown11(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v12;

  if (a2 < 1) {
    return 0;
  }
  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_3;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_3:
    v4 = *(_QWORD*)(a1 + 160);
    v5 = *(__int64**)(a1 + 56);
    v6 = *(__int64**)(a1 + 64);
    if (v5 != v6) {
      v7 = v5 + 1;
      if (v7 != v6) {
        v8 = *v7;
        if (v4 == *v7) {
          return 0;
        }
      LABEL_20:
        game_facility_anonymous_ChoiceMenu_CheckFirstSelect(
            (_QWORD*)(a1 - 176));
        v10 = *(_QWORD*)(a1 + 160);
        if (v10 != v8) {
          if (v10 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 168LL))(v10);
          }
          *(_QWORD*)(a1 + 160) = v8;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1 - 176, 0, 1, 0);
          v11 = *(_QWORD*)(a1 + 160);
          if (v11 == 0) {
            v12 = 4;
          LABEL_31:
            *(_DWORD*)(a1 + 180) = *(_DWORD*)(a1 + 180) & 0xFFFFFFFB | v12;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v11 + 160LL))(v11);
          v10 = *(_QWORD*)(a1 + 160);
        }
        v12 = 4;
        if (v10 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 120LL))(v10) & 1) !=
              0) {
            v12 = 4;
          }
          else {
            v12 = 0;
          }
        }
        goto LABEL_31;
      }
    }
    v8 = 0;
    if (v4 != 0) {
      goto LABEL_20;
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_3;
  }
  return result;
}

__int64 ChoiceMenu_Unknown12(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  bool v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  int v13;

  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_2;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_2:
    v4 = *(_QWORD*)(a1 + 160);
    v5 = *(__int64**)(a1 + 56);
    v6 = *(__int64**)(a1 + 64);
    if (v5 == v6 ||
        a2 >= 1 &&
            ((v7 = v5 + 1, v5 += 2, v7 != v6) ? (v8 = v5 == v6) : (v8 = true),
             v8)) {
      v9 = 0;
      if (v4 != 0) {
        goto LABEL_23;
      }
    }
    else {
      v9 = *v5;
      if (v4 != *v5) {
      LABEL_23:
        game_facility_anonymous_ChoiceMenu_CheckFirstSelect(
            (_QWORD*)(a1 - 176));
        v11 = *(_QWORD*)(a1 + 160);
        if (v11 != v9) {
          if (v11 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
          }
          *(_QWORD*)(a1 + 160) = v9;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1 - 176, 0, 1, 0);
          v12 = *(_QWORD*)(a1 + 160);
          if (v12 == 0) {
            v13 = 4;
          LABEL_34:
            *(_DWORD*)(a1 + 180) = *(_DWORD*)(a1 + 180) & 0xFFFFFFFB | v13;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v12 + 160LL))(v12);
          v11 = *(_QWORD*)(a1 + 160);
        }
        v13 = 4;
        if (v11 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 120LL))(v11) & 1) !=
              0) {
            v13 = 4;
          }
          else {
            v13 = 0;
          }
        }
        goto LABEL_34;
      }
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_2;
  }
  return result;
}

#pragma GCC visibility pop
