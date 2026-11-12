#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1566d90(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_1567980(_QWORD);
__int64 GameRoutine_17a7290(_QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20d0e78[])();
extern __int64 (*GameData_20d0ef8[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcMouseGuide_Unknown96(__int64 a1);
__int64 ProcMouseGuide_Unknown112(__int64 a1);
__int64 ProcMouseGuide_Unknown140_alt1(__int64 a1, __int64* a2) __asm__(
    "ProcMouseGuide_Unknown140");
__int64 ProcMouseGuide_Unknown142(__int64 result);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1566d90(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 game_HashString(void);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1ab18ee;
extern __int64 GameData_2258178;
extern char* GameData_204d1d8[15];
__int64 ProcMouseGuide_Unknown13(__int64 result);
__int64 ProcMouseGuide_17a7290(__int64 a1);
__int64 game_menu_anonymous_ProcMouseGuide_StickRCall_closure_Invoke();
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_16e8d70(_QWORD, long double);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64
ProcMouseGuide_17a7290_alt1(_QWORD,
                            long double) __asm__("ProcMouseGuide_17a7290");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_21318d0[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20d0e40[3];
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcMouseGuide_Unknown141(__int64 a1);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcMouseGuide_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         int* a1);
__n128 ProcMouseGuide_17a8800(__int64 a1, const char* a2, int a3, __int64 a4);
_QWORD* GameRoutine_6680e0_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_6680e0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_16e8d70(__int64*);
__int64 GameRoutine_1567590_alt1(__int64 result,
                                 char) __asm__("GameRoutine_1567590");
__int64 GameRoutine_1593d90_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_1593d90");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 __int64) __asm__("LayoutAccessor_1562060");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcMouseGuide_Unknown140(__int64 a1, __int64* a2);

__int64 ProcMouseGuide_Unknown96(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  if ((*(_BYTE*)(a1 + 1065) & 1) == 0) {
    GameRoutine_1567980(100);
  }
  v3 = v7;
  v7[0] = GameData_20d0e78;
  v7[1] = a1;
  v8 = v7;
  if (game_gameui_Footer_instance_ == 0) {
    goto LABEL_14;
  }
  v9[0] = GameData_20d0e78;
  v9[1] = a1;
  v10 = v9;
  GameRoutine_654050(v9, game_gameui_Footer_instance_ + 448);
  if (v10 == v9) {
    v4 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v10 + v4))(v10, v2);

LABEL_11:
  v3 = v8;
  if (v8 == v7) {
  LABEL_14:
    v5 = 32;
    goto LABEL_15;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v3 + v5))(v3, v2);
  }
  return GameRoutine_17a7290(a1);
}

__int64 ProcMouseGuide_Unknown112(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  const char* v17;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(game_g_game_setting + 807) != 1 ||
      (*(_BYTE*)(game_g_game_setting + 804) & 1) == 0 &&
          (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
           (*(_BYTE*)(game_g_game_setting + 805) & 1) == 0 ||
           (*(_BYTE*)(game_g_game_setting + 806) & 1) == 0)) {
    if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
      return 1;
    }
    if ((*(_BYTE*)(game_g_game_setting + 900) & 1) == 0) {
      v7 = 1;
      if (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0) {
        return v7;
      }
      if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
        return 1;
      }
    }
  }
  v3 = *(_QWORD*)(a1 + 152);
  v17 = "MID_MouseCalibration_Message";
  v11_.v12 = v11_.v11;
  v11_.v11[0] = GameData_20d0ef8;
  v11_.v11[1] = a1;
  if (v3 == 0) {
    v3 = a1;
  }
  v4 = game_menu_Dialog__CreateBind_game_menu_Dialog(v3, (__int64)&v17),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v4 != 0) {
    v6 = v4;
    if (v11_.v12 != nullptr) {
      if (v11_.v12 == v11_.v11) {
        v13_.v14 = v13_.v13;
        (*(void (**)(_QWORD*, _QWORD*))(*v11_.v12 + 24LL))(v11_.v12, v13_.v13),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v13_.v14 = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(
            *v11_.v12 + 16LL))(v11_.v12, v5),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v13_.v14 = nullptr;
    }
    GameRoutine_6680e0_alt1(v13_.v13, (_QWORD*)(v6 + 1248)),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13_.v14 == v13_.v13) {
      v9 = 32;
    }
    else {
      if (v13_.v14 == nullptr) {
        goto LABEL_25;
      }
      v9 = 40;
    }
    (*(void (**)(_QWORD*, __int64))(*v13_.v14 + v9))(v13_.v14, v5),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_25:
  if (v11_.v12 == v11_.v11) {
    v10 = 32;
    goto LABEL_29;
  }
  if (v11_.v12 != nullptr) {
    v10 = 40;
  LABEL_29:
    (*(void (**)(_QWORD*, __int64))(*v11_.v12 + v10))(v11_.v12, v5),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return 12;
}

void ProcMouseGuide_Unknown140(__int64 a1, __int64* a2)
{
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  signed __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  signed __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  signed __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_50;
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
        goto LABEL_51;
      }
      v14 = v4;
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      v4 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = &GameData_1a9f09e;
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_HelpDetail";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 2;
    *(_DWORD*)(v16 + 24) = v4;
    memcpy_alt1(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = &GameData_1a9f09e;
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_HelpDetail";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 2;
    *(_DWORD*)(v5 + 24) = v4;
  }
  a2[1] = v7;
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v20 = a2[1];
  v21 = a2[2];
  if (v20 >= v21) {
    v23 = *a2;
    v24 = v20 - *a2;
    v25 = 1 - 0x3333333333333333LL * (v24 >> 3);
    if (v25 > 0x666666666666666LL) {
      goto LABEL_50;
    }
    v26 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v21 - v23) >> 3);
    if (2 * v26 > v25) {
      v25 = 2 * v26;
    }
    if (v26 >= 0x333333333333333LL) {
      v27 = 0x666666666666666LL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 > 0x666666666666666LL) {
        goto LABEL_51;
      }
      v28 = v19;
      v29 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                40 * v27, 16, 0);
      v19 = v28;
    }
    else {
      v29 = 0;
    }
    v30 = v29 + v24;
    *(_QWORD*)v30 = "MouseCalib";
    *(_QWORD*)(v30 + 8) = "MID_KeyHelp_MouseCalibration";
    *(_BYTE*)(v30 + 28) = 0;
    *(_QWORD*)(v30 + 32) = 0;
    *(_BYTE*)(v30 + 16) = 1;
    v31 = v29 + 40 * v27;
    v22 = v29 + v24 + 40;
    *(_DWORD*)(v30 + 20) = 11;
    *(_DWORD*)(v30 + 24) = v19;
    memcpy_alt1(v29, v23, v24);
    *a2 = v29;
    a2[1] = v22;
    a2[2] = v31;
    if (v23 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v23);
    }
  }
  else {
    *(_BYTE*)(v20 + 28) = 0;
    *(_QWORD*)(v20 + 32) = 0;
    *(_QWORD*)v20 = "MouseCalib";
    *(_QWORD*)(v20 + 8) = "MID_KeyHelp_MouseCalibration";
    v22 = v20 + 40;
    *(_BYTE*)(v20 + 16) = 1;
    *(_DWORD*)(v20 + 20) = 11;
    *(_DWORD*)(v20 + 24) = v19;
  }
  a2[1] = v22;
  v33 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v34 = a2[1];
  v35 = a2[2];
  if (v34 < v35) {
    *(_BYTE*)(v34 + 28) = 0;
    *(_QWORD*)(v34 + 32) = 0;
    *(_QWORD*)v34 = "MouseReset";
    *(_QWORD*)(v34 + 8) = "MID_KeyHelp_MouseReset";
    v36 = v34 + 40;
    *(_BYTE*)(v34 + 16) = 1;
    *(_DWORD*)(v34 + 20) = 27;
    *(_DWORD*)(v34 + 24) = v33;
    goto LABEL_49;
  }
  v37 = *a2;
  v38 = v34 - *a2;
  v39 = 1 - 0x3333333333333333LL * (v38 >> 3);
  if (v39 > 0x666666666666666LL) {
  LABEL_50:
    GameRoutine_874520_alt1();
  }
  v40 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v35 - v37) >> 3);
  if (2 * v40 > v39) {
    v39 = 2 * v40;
  }
  if (v40 >= 0x333333333333333LL) {
    v41 = 0x666666666666666LL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 <= 0x666666666666666LL) {
      v42 = v33;
      v43 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                40 * v41, 16, 0);
      v33 = v42;
      goto LABEL_45;
    }
  LABEL_51:
    GameRoutine_60a210_alt1();
  }
  v43 = 0;
LABEL_45:
  v44 = v43 + v38;
  *(_QWORD*)v44 = "MouseReset";
  *(_QWORD*)(v44 + 8) = "MID_KeyHelp_MouseReset";
  *(_BYTE*)(v44 + 28) = 0;
  *(_QWORD*)(v44 + 32) = 0;
  *(_BYTE*)(v44 + 16) = 1;
  v45 = v43 + 40 * v41;
  v36 = v43 + v38 + 40;
  *(_DWORD*)(v44 + 20) = 27;
  *(_DWORD*)(v44 + 24) = v33;
  memcpy_alt1(v43, v37, v38);
  *a2 = v43;
  a2[1] = v36;
  a2[2] = v45;
  if (v37 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v37);
  }
LABEL_49:
  a2[1] = v36;
}

__int64 ProcMouseGuide_Unknown141(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 i;
  __int64* v12;
  int v13;
  __int64* v14;
  int v15;
  __int64* v16;
  int v17;
  struct {
    char* v19;
    const char* v20;
    char v21;
    char gap25_[3];
    int v22;
    int v23;
    char v24;
    char gap37_[3];
    __int64 v25;
  } v19_;

  if (*(_BYTE*)(a1 + 1065) == 1) {
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"L_Header", 0);
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"L_Footer", 0);
    GameHr_16e8d70((__int64*)(a1 + 1056));
    return ProcMouseGuide_17a7290(a1);
  }
  LayoutAccessor_1560070_alt1((void*)(&v19_.v19), (__int64*)(a1 + 848),
                              "L_Header");
  if (v19_.v20 != nullptr) {
    v2 = std___1___shared_weak_count_lock_alt1((__int64)v19_.v20);
    v3 = (__int64*)v19_.v19;
    if (v19_.v20 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v19_.v20);
    }
    if (v2 != 0 && v3 != nullptr) {
      LayoutAccessor_1562cf0_alt1((__int64)v3, "TitleOn");
      LayoutAccessor_1562cf0_alt1((__int64)v3, "Default");
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v3, (__int64)"A_Stock", 0);
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1112LL))(a1);
      LayoutAccessor_1562060_alt1(v3, (__int64)"T_Title", v4);
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 40LL))(a1 + 1056);
      LayoutAccessor_1562060_alt1(v3, (__int64)"T_Help", v5);
    }
    else if (v2 == 0) {
      goto LABEL_12;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt2(v2);
    }
  }
LABEL_12:
  LayoutAccessor_1560070_alt1((void*)(&v19_.v19), (__int64*)(a1 + 848),
                              "L_Footer");
  if (v19_.v20 != nullptr) {
    v6 = std___1___shared_weak_count_lock_alt1((__int64)v19_.v20);
    v7 = (__int64*)v19_.v19;
    if (v19_.v20 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v19_.v20);
    }
    if (v6 != 0 && v7 != nullptr) {
      v8 = ui_LayoutAccessor_FindPane_alt1(v7, (__int64)"A_KeyHelp");
      if (v8 != 0) {
        v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_21318d0[0], 0);
        if (v9 != 0) {
          v10 = *(_QWORD*)(v9 + 40);
          for (i = v9; v10 != v9 + 32; v10 = *(_QWORD*)(v10 + 8)) {
            *(_BYTE*)(v10 + 80) &= ~1u;
          }
          v12 = LayoutAccessor_155fbe0_alt1(v7, "L_KeyHelp00");
          v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
          v19_.v24 = 0;
          v19_.v25 = 0;
          v19_.v19 = "MouseCalib";
          v19_.v20 = "MID_KeyHelp_MouseCalibration";
          v19_.v21 = 1;
          v19_.v22 = 11;
          v19_.v23 = v13;
          GameRoutine_1593d90_alt1(v12, (__int64)&v19_.v19);
          v14 = LayoutAccessor_155fbe0_alt1(v7, "L_KeyHelp01");
          v15 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
          v19_.v21 = 1;
          v19_.v24 = 0;
          v19_.v25 = 0;
          v19_.v19 = &GameData_1a9f09e;
          v19_.v20 = "MID_KeyHelp_HelpDetail";
          v19_.v22 = 2;
          v19_.v23 = v15;
          GameRoutine_1593d90_alt1(v14, (__int64)&v19_.v19);
          v16 = LayoutAccessor_155fbe0_alt1(v7, "L_KeyHelp02");
          v17 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
          v19_.v21 = 1;
          v19_.v24 = 0;
          v19_.v25 = 0;
          v19_.v19 = "MouseReset";
          v19_.v20 = "MID_KeyHelp_MouseReset";
          v19_.v22 = 27;
          v19_.v23 = v17;
          GameRoutine_1593d90_alt1(v16, (__int64)&v19_.v19);
          Alignment_56b600_alt1(i);
        }
      }
    }
    else if (v6 == 0) {
      return ProcMouseGuide_17a7290(a1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
  }
  return ProcMouseGuide_17a7290(a1);
}

__int64 ProcMouseGuide_Unknown142(__int64 result)
{
  if (*(_BYTE*)(result + 1065) == 1) {
    if (game_gameui_Header_instance_ != 0) {
      GameRoutine_1566d90(game_gameui_Header_instance_, 0);
    }
    result = game_gameui_Footer_instance_;
    if (game_gameui_Footer_instance_ != 0) {
      return GameRoutine_1567000(game_gameui_Footer_instance_, 0);
    }
  }
  return result;
}

__int64 ProcMouseGuide_Unknown13(__int64 result)
{
  if (*(_BYTE*)(result + 9) == 1) {
    if (game_gameui_Header_instance_ != 0) {
      LayoutAccessor_1566d90(game_gameui_Header_instance_, 0);
    }
    result = game_gameui_Footer_instance_;
    if (game_gameui_Footer_instance_ != 0) {
      return LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
    }
  }
  return result;
}

__int64 ProcMouseGuide_17a7290(__int64 a1)
{
  char v1;
  __int64 result;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64* v6;
  __int64* v7;
  struct {
    __int64* v8;
    __int64 v9;
  } v8_;

  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_8;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) == 1) {
    if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
    LABEL_8:
      v1 = 0;
      goto LABEL_10;
    }
    v1 = 1;
    if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
        (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
      v1 = *(_BYTE*)(game_g_game_setting + 902) ^ 1;
    }
  }
  else {
    v1 = 1;
  }
LABEL_10:
  if (*(_BYTE*)(a1 + 1065) == 1) {
    GameRoutine_1567590_alt1((__int64)"MouseCalib", v1 & 1);
    return GameRoutine_1567590_alt1((__int64)"MouseReset", v1 & 1);
  }
  LayoutAccessor_1560070_alt1((void*)(&v8_.v8), (__int64*)(a1 + 848),
                              "L_Footer");
  result = v8_.v9;
  if (v8_.v9 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v8_.v9);
    v4 = v8_.v8;
    result = v8_.v9;
    if (v8_.v9 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v8_.v9);
    }
    if (v3 != 0 && v4 != nullptr) {
      v5 = GameData_204d1d8[v1 & 1];
      v6 = LayoutAccessor_155fbe0_alt1(v4, "L_KeyHelp00");
      GameHr_1562680((__int64)v6, v5, 0x1.0000000000000p+0f);
      v7 = LayoutAccessor_155fbe0_alt1(v4, "L_KeyHelp02");
      result = GameHr_1562680((__int64)v7, v5, 0x1.0000000000000p+0f);
    }
    else if (v3 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak_alt2(v3);
    }
  }
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcMouseGuide_OnInit_closure_Invoke(PSEUDO_X8 x8_,
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

  v3 = GameData_20d0e40[*a1];
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

__n128 ProcMouseGuide_17a8800(__int64 a1, const char* a2, int a3, __int64 a4)
{
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  __n128 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  char* v19;

  v6 = game_util_Format("%s%02d", a2, a3);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v7);
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    v18[1] = v8;
    v19 = v9;
    v18[0] = v10 | 1;
    goto LABEL_9;
  }
  LOBYTE(v18[0]) = 2 * v7;
  v9 = (char*)v18 + 1;
  if (v7 != 0) {
  LABEL_9:
    memmove(v9, v6, v8);
  }
  v9[v8] = 0;
  if ((v18[0] & 1) != 0) {
    v11 = v19;
  }
  else {
    v11 = (char*)v18 + 1;
  }
  LayoutAccessor_1560070((void*)(&v16), a1 + 848, v11);
  if (v17 != 0) {
    v13 = std___1___shared_weak_count_lock(v17);
    v14 = v16;
    if (v17 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1();
    }
    if (v13 != 0 && v14 != 0) {
      LayoutAccessor_1562cf0(v14, a4);
    }
    else if (v13 == 0) {
      goto LABEL_21;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      result = std___1___shared_weak_count___release_weak_alt1();
      if ((v18[0] & 1) == 0) {
        return result;
      }
      goto LABEL_22;
    }
  }
LABEL_21:
  if ((v18[0] & 1) == 0) {
    return result;
  }
LABEL_22:
  if (v19 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v15);
  }
  return result;
}

__int64 game_menu_anonymous_ProcMouseGuide_StickRCall_closure_Invoke()
{
  __int64 v0;
  _QWORD v2[2];

  v0 = GameData_2258178;
  if (GameData_2258178 != 0) {
    v2[1] = &GameData_1ab18ee;
    v2[0] = game_HashString();
    GameRoutine_717fc0(v2, 0);
    *(_DWORD*)(v0 + 564) = 0;
  }
  return 2;
}

#pragma GCC visibility pop
