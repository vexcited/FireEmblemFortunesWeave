#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_822b00(_QWORD);
__int64 MapInfo_825790(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
extern __int64 GameData_207d218;
extern __int64 GameData_21cd128;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcConfigMenu_Unknown88(__int64 a1);
__int64 ProcConfigMenu_Unknown94(__int64 a1);
__int64 ProcConfigMenu_Unknown142(__int64 a1, __int64* a2);
__int64 GameRoutine_81a240(_QWORD*);
__int64 GameRoutine_995200(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f1618;
extern __int64 game_script_map_effect_g_sequence;
__int64 ProcConfigMenu_822b00();
bool game_menu_anonymous_ProcConfigMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64 a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
__int64 GameManager_a2f940(_QWORD, _QWORD, _QWORD, _QWORD, double);
__int64 GameManager_a31a20(_QWORD);
__int64 GameRoutine_80ca30(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapInfo_825040(__int64, int);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 game_821840(void);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_207d190[])();
extern __int64 (*GameData_207d240[])();
extern __int64 (*GameData_207d2c0[])();
extern __int64 (*GameData_207ed88[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_sound_g_game_sound;
extern char* GameData_207d1f0[3];
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(void);
void game_menu_PageTab_SetupText(int*, __int64, __int64, int, int, int);
__int64 game_menu_anonymous_ProcConfigMenu_OnInit(__int64* a1);
__int64 game_menu_anonymous_ProcConfigMenu_MinusCall(__int64 a1);
__int64 game_menu_anonymous_ProcConfigMenu_SortAndFilter(__int64 a1);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcConfigMenu_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         int* a1);
__int64 game_menu_anonymous_ProcConfigMenu_MinusCall_closure_Invoke(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");

__int64 ProcConfigMenu_822b00()
{
  _QWORD* v0;
  _QWORD* v1;
  _QWORD* v2;
  int v3;
  _QWORD* i;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  char v16;
  char v17;
  __int64 v19;
  int v20;

  if (game_script_map_effect_g_sequence == 0 ||
      (v20 = 15, (v0 = (_QWORD*)game_UnitPool_GetFirst(&v20)) == nullptr)) {
    LOBYTE(v9) = 0;
    goto LABEL_19;
  }
  v1 = (_QWORD*)v0[54];
  if (v1 != nullptr) {
    goto LABEL_4;
  }
  v10 = v0[55];
  if (v10 != 0) {
    v11 = *(unsigned __int8*)(v10 + 16);
    if (v11 <= 8) {
      v19 = 24LL * (unsigned int)v11 + 556024;
      while (1) {
        if (v11 <= 2) {
          v1 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + v19);
          if (v1 != nullptr) {
            break;
          }
        }
        ++v11;
        v19 += 24;
        if (v11 == 9) {
          goto LABEL_18;
        }
      }
    LABEL_4:
      v2 = v1;
      v3 = GameRoutine_81a240(v0);
      for (i = v2;; i = v5) {
        v5 = (_QWORD*)i[54];
        if (v5 == nullptr) {
          v6 = i[55];
          if (v6 == 0 || (v7 = *(unsigned __int8*)(v6 + 16)) > 8) {
          LABEL_15:
            v9 = v3 | GameRoutine_81a240(i);
            goto LABEL_19;
          }
          v8 = 24LL * (unsigned int)v7 + 556024;
          while (1) {
            if (v7 <= 2) {
              v5 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + v8);
              if (v5 != nullptr) {
                break;
              }
            }
            ++v7;
            v8 += 24;
            if (v7 == 9) {
              goto LABEL_15;
            }
          }
        }
        v3 |= GameRoutine_81a240(i);
      }
    }
  }

LABEL_18:
  LOBYTE(v9) = GameRoutine_81a240(v0);

LABEL_19:
  v12 = GameData_21f1618;
  if (GameData_21f1618 != 0) {
    v13 = *(_QWORD*)(GameData_21c96e8 + 8);
    v14 = *(_QWORD**)(v13 + 8);
    v15 = *(_QWORD**)(v13 + 16);
    if (v14 == v15) {
      v16 = 0;
    }
    else {
      v16 = 0;
      do {
        if (v12 != 0) {
          v17 = GameRoutine_995200(*v14 + 112LL);
          v12 = GameData_21f1618;
          v16 |= v17;
        }
        ++v14;
      } while (v14 != v15);
    }
    LOBYTE(v9) = v9 | v16;
  }
  return v9 & 1;
}

__int64 game_menu_anonymous_ProcConfigMenu_OnInit(__int64* a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 result;
  int v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  LayoutAccessor_1560070((void*)(&v9_.v9), a1 + 106, (__int64)"L_PageTab");
  v7_.v7[0] = GameData_207d190;
  v2 = *a1;
  v7_.v8 = v7_.v7;
  v3 = (*(__int64 (**)(__int64*))(v2 + 192))(a1);
  game_menu_PageTab_SetupText((int*)a1 + 164, (__int64)&v9_.v9, (__int64)v7_.v7,
                              v3, 4, 5);
  if (v7_.v8 == v7_.v7) {
    v4 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v4))((__int64)v7_.v8);
LABEL_6:
  if (v9_.v10 != 0) {
    std___1___shared_weak_count___release_weak(v9_.v10);
  }
  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    result = MapInfo_825040(GameData_21cd128, 15);
  }
  if (GameData_21f1e08 != 0) {
    v6 = *(_DWORD*)(GameData_21f1e08 + 252);
    if (v6 <= -1) {
      v6 = -1;
    }
    *(_DWORD*)(GameData_21f1e08 + 252) = v6 + 1;
  }
  return result;
}

__int64 ProcConfigMenu_Unknown88(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_207d218, 0);
    if (result != 0) {
      GameRoutine_1562060(a1 + 848, "L_InfoTxt/T_Txt",
                          *(_QWORD*)(*(_QWORD*)(result + 88) + 16LL));
      result = ui_LayoutAccessor_FindAlignment(a1 + 848, "A_Info");
      if (result != 0) {
        return Alignment_56b600(result);
      }
    }
  }
  return result;
}

__int64 ProcConfigMenu_Unknown94(__int64 a1)
{
  int v2;
  __int64 result;

  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  GameRoutine_155e830(a1 + 848, 0);
  GameRoutine_822b00(a1);
  if (GameData_21f1e08 != 0) {
    v2 = *(_DWORD*)(GameData_21f1e08 + 252);
    if (v2 <= 1) {
      v2 = 1;
    }
    *(_DWORD*)(GameData_21f1e08 + 252) = v2 - 1;
  }
  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return MapInfo_825790();
  }
  return result;
}

__int64 game_menu_anonymous_ProcConfigMenu_MinusCall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  struct {
    _BYTE v5[32];
    _BYTE* v6;
  } v5_;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  const char* v11;

  v5_.v6 = nullptr;
  v11 = "MID_Config_Reset_Confirm";
  v7_.v8 = v7_.v7;
  v9_.v9[0] = GameData_207d240;
  v9_.v9[1] = a1;
  v9_.v10 = v9_.v9;
  v7_.v7[0] = GameData_207d2c0;
  MapSortieMenu_871860(a1, (__int64)&v11, (__int64)v9_.v9, (__int64)v7_.v7,
                       (__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v1 = 32;
  }
  else {
    if (v5_.v6 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5_.v6 + v1))((__int64)v5_.v6);
LABEL_6:
  if (v7_.v8 == v7_.v7) {
    v2 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v2))((__int64)v7_.v8);
LABEL_11:
  if (v9_.v10 == v9_.v9) {
    v3 = 32;
    goto LABEL_15;
  }
  if (v9_.v10 != nullptr) {
    v3 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v9_.v10 + v3))((__int64)v9_.v10);
  }
  return 12;
}

__int64 game_menu_anonymous_ProcConfigMenu_SortAndFilter(__int64 a1)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  struct {
    _BYTE v8[32];
    _BYTE* v9;
  } v8_;
  struct {
    __int64 (**v10)();
    char v11;
    char gap57_[23];
    __int64 (***v12)();
  } v10_;

  v3 = *(_DWORD*)(a1 + 660);
  v4 = *(_QWORD*)(a1 + 672);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  v10_.v11 = v3;
  v8_.v9 = nullptr;
  v10_.v10 = GameData_207ed88;
  v10_.v12 = &v10_.v10;
  BasicMenu_16e1f40(a1, (__int64)&v10_.v10, (__int64)v8_.v8);
  if (v8_.v9 == v8_.v8) {
    v5 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8_.v9 + v5))((__int64)v8_.v9);
LABEL_8:
  result = (__int64)v10_.v12;
  if (v10_.v12 == &v10_.v10) {
    v7 = 4;
  }
  else {
    if (v10_.v12 == nullptr) {
      return result;
    }
    v7 = 5;
  }
  return ((__int64 (*)(__int64))(*v10_.v12)[v7])((__int64)v10_.v12);
}

__int64 ProcConfigMenu_Unknown142(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_34;
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        goto LABEL_35;
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = &GameData_1a9f09e;
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Config_Reset";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 10;
    *(_DWORD*)(v16 + 24) = result;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = &GameData_1a9f09e;
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Config_Reset";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 10;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_DWORD*)(v19 + 20) = 0;
    *(_DWORD*)(v19 + 24) = result;
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    v21 = v19 + 40;
    *(_QWORD*)v19 = "ItemChange";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_ItemChange";
    *(_BYTE*)(v19 + 16) = 1;
    goto LABEL_33;
  }
  v22 = *a2;
  v23 = v19 - *a2;
  v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
  if (v24 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520(result);
  }
  v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
  if (2 * v25 > v24) {
    v24 = 2 * v25;
  }
  if (v25 >= 0x333333333333333LL) {
    v26 = 0x666666666666666LL;
  }
  else {
    v26 = v24;
  }
  if (v26 != 0) {
    if (v26 <= 0x666666666666666LL) {
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210(result);
  }
  v28 = 0;

LABEL_29:
  v29 = v28 + v23;
  *(_QWORD*)v29 = "ItemChange";
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_ItemChange";
  *(_DWORD*)(v29 + 20) = 0;
  *(_DWORD*)(v29 + 24) = result;
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  v21 = v28 + v23 + 40;
  result = memcpy(v28, v22, v23);
  *a2 = v28;
  a2[1] = v21;
  a2[2] = v30;
  if (v22 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
  }

LABEL_33:
  a2[1] = v21;
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcConfigMenu_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v3;
  char* v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = GameData_207d1f0[*a1];
  if (*v3 != 0) {
    v4 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v3, 0);
  }
  else {
    v4 = msg_MessageManager_empty_text_;
  }
  result = strlen_alt1(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0);
    a2[1] = v6;
    a2[2] = v9;
    *a2 = v8 | 1;
    v7 = v9;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v7 = (__int64)a2 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove_alt1(v7, (__int64)v4, v6);
LABEL_13:
  *(_BYTE*)(v7 + v6) = 0;
  {
    result;
    return;
  }
}

__int64 game_menu_anonymous_ProcConfigMenu_MinusCall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[200];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = game_821840();
  if ((GameRoutine_80ca30(v2) & 1) != 0) {
    v3 = GameManager_a31a20(game_sound_g_game_sound);
    v4 = game_sound_g_game_sound;
    v5 = v3;
    snd_Fade_Fade_10c830(v7, 0.0f);
    GameManager_a2f940(v4, v7, v5, 1, 0.0f);
    snd_Fade_Destroy_Fade(v7);
  }
  game_menu_BasicMenu_Unknown16dd9a0(v1);
  return 2;
}

bool game_menu_anonymous_ProcConfigMenu_SortAndFilter_closure_Invoke(__int64 a1,
                                                                     __int64 a2)
{
  return **(unsigned __int8**)(*(_QWORD*)a2 + 88LL) ==
         *(unsigned __int8*)(a1 + 8);
}

#pragma GCC visibility pop
