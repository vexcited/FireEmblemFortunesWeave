#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_1374cc0(_BYTE*, char);
__int64 GameRoutine_1374ee0(_QWORD*, __int64);
__int64 GameRoutine_1386f80(__int64);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_155cda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155d940(_QWORD);
__int64 GameRoutine_1712520(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
__int64 TelopCalendarRemind_Unknown35(__int64 result);
__int64 TelopCalendarRemind_Unknown44(__int64 a1);
__int64 TelopCalendarRemind_Destructor(__int64 a1);
__int64 TelopCalendarRemind_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155c910(_QWORD, _QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1561f50(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_SetPaneVisible");
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_22594f0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern int GameData_1bc9e00[];
extern int GameData_22594e8;
__int64 TelopCalendarRemind_Unknown33(__int64 a1);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1712520(__int64, int, char);
__int64 GameRoutine_1593d90_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_1593d90");
__int64 LayoutAccessor_155c910_alt1(__int64,
                                    __int64*) __asm__("LayoutAccessor_155c910");
__int64
LayoutAccessor_155cda0_alt1(__int64 result, const char*,
                            const char*) __asm__("LayoutAccessor_155cda0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1561f50_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_1561f50");
__int64 TelopSequence_1374cc0(__int64, char);
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
__int64 ui_LayoutAccessor_IsPaneVisible_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_IsPaneVisible");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
float LayoutAccessor_155d940_alt1(__int64*) __asm__("LayoutAccessor_155d940");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_1374ee0_alt1(__int64*,
                              const char*) __asm__("GameRoutine_1374ee0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 TelopCalendarRemind_Unknown33(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  struct {
    __int64* v27;
    const char* v28;
    __int128 v29;
    unsigned __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
  } v27_;

  ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, (__int64)"Icon", 0);
  ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, (__int64)"L_ReminderIcon", 0);
  v2 = *(_DWORD*)(a1 + 824);
  if (v2 - 1 < 2) {
    ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, (__int64)"Icon", 1);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22594f0) != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release_alt1((__int64)&GameData_22594f0);
    }
    v5 = GameData_22594e8;
    v6 = LayoutAccessor_1561f50_alt1((__int64*)(a1 + 168), "Icon");
    if (v6 != 0) {
      v7 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v6 + 88LL))(v6, 0);
      if (v7 != 0) {
        *(_DWORD*)(v7 + 12) = v5;
      }
    }
    v8 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 168), (__int64)"Icon");
    if (v8 == 0) {
      goto LABEL_27;
    }
    v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d678[0], 0);
    if (v9 == 0) {
      goto LABEL_27;
    }
    v10 = v9;
    v11 = game_util_Format_alt1("IconQuest_%s", "Main");
    v12 = v10;
  LABEL_23:
    Manager_136a920(ui_Manager_instance_ + 1264, v12, 0, 7u, v11);
    goto LABEL_27;
  }
  if (v2 == 3) {
    ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, (__int64)"Icon", 1);
    v13 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
    v14 = LayoutAccessor_1561f50_alt1((__int64*)(a1 + 168), "Icon");
    if (v14 != 0) {
      v15 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v14 + 88LL))(v14, 0);
      if (v15 != 0) {
        *(_DWORD*)(v15 + 12) = v13;
      }
    }
    v16 =
        ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 168), (__int64)"Icon");
    if (v16 == 0) {
      goto LABEL_27;
    }
    v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
    if (v17 == 0) {
      goto LABEL_27;
    }
    v12 = v17;
    v11 = "IconPageTab_Facility";
    goto LABEL_23;
  }
  if (v2 != 0) {
    goto LABEL_28;
  }
  LayoutAccessor_1560070_alt1((void*)(&v27_.v27), (__int64*)(a1 + 168),
                              "L_ReminderIcon");
  if (v27_.v28 != nullptr) {
    v3 = std___1___shared_weak_count_lock_alt1((__int64)v27_.v28);
    v4 = (__int64)v27_.v27;
    if (v27_.v28 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v27_.v28);
    }
    if (v3 != 0 && v4 != 0) {
      LayoutAccessor_155e830_alt1(v4, 1);
      GameHr_1562680(v4, "Wait", 0x1.0000000000000p+0f);
      goto LABEL_25;
    }
    if (v3 != 0) {
    LABEL_25:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak_alt1(v3);
      }
    }
  }
LABEL_27:
  v2 = *(_DWORD*)(a1 + 824);
LABEL_28:
  if (v2 > 3) {
    v18 = &GameData_1a9f09e;
  }
  else {
    v18 = (char*)GameData_1bc9e00 + GameData_1bc9e00[v2];
  }
  v27_.v31 = -1;
  v27_.v32 = -1;
  v27_.v33 = -1;
  v27_.v34 = -1;
  v19 = *msg_MessageManager_instance__ptr[0];
  v27_.v35 = -1;
  v27_.v36 = -1;
  v27_.v37 = -1;
  v27_.v38 = -1;
  v27_.v39 = -1;
  v27_.v40 = -1;
  v27_.v41 = -1;
  v27_.v42 = -1;
  v27_.v27 = GameData_212e348 + 2;
  v27_.v28 = (const char*)0xFFFF0001FFFF0000LL;
  *(_QWORD*)&v27_.v29 = 0xFFFF0004FFFF0002LL;
  *((_QWORD*)&v27_.v29 + 1) = 0xFFFF0006FFFF0005LL;
  v27_.v43 = 8;
  v27_.v30 = 0xFFFF0008FFFF0007LL;
  v20 = GameRoutine_a4dbe0_alt1(v19, v18, 0);
  if (v20 != nullptr) {
    v21 = (__int64)v20;
    v22 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 168),
                                             (__int64)"T_Txt");
    if (v22 != 0) {
      GameRoutine_156c5d0_alt1(v22, v21, 0);
    }
  }
  v23 = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(a1 + 168),
                                             (__int64)"A_Txt");
  if (v23 != 0) {
    Alignment_56b600_alt1(v23);
  }
  LayoutAccessor_1560070_alt1((void*)(&v27_.v27), (__int64*)(a1 + 168),
                              "L_Remind_KeyHelp");
  if (v27_.v28 != nullptr) {
    v24 = std___1___shared_weak_count_lock_alt1((__int64)v27_.v28);
    v25 = v27_.v27;
    if (v27_.v28 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v27_.v28);
    }
    if (v24 != 0 && v25 != nullptr) {
      BYTE12(v27_.v29) = 0;
      v27_.v30 = 0;
      v27_.v27 = (__int64*)&GameData_1a9f09e;
      v27_.v28 = "MID_KeyHelp_OpenCalendar";
      LOBYTE(v27_.v29) = 1;
      *(_QWORD*)((char*)&v27_.v29 + 4) = 0xA00000002LL;
      GameRoutine_1593d90_alt1(v25, (__int64)&v27_.v27);
      LayoutAccessor_155c910_alt1(a1 + 832, v25);
      LayoutAccessor_155c910_alt1(a1 + 1008, v25);
      LayoutAccessor_155cda0_alt1(a1 + 1008, "Wait", nullptr);
      LayoutAccessor_155cda0_alt1(a1 + 832, "Out", nullptr);
      LayoutAccessor_155d940_alt1((__int64*)(a1 + 832));
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v25, (__int64)"Next", 0);
    }
    else if (v24 == 0) {
      return ui_LayoutAccessor_SetPaneVisible_alt2(
          a1 + 168, (__int64)"L_Remind_KeyHelp", 0);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt1(v24);
    }
  }
  return ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168,
                                               (__int64)"L_Remind_KeyHelp", 0);
}

__int64 TelopCalendarRemind_Unknown35(__int64 result)
{
  __int64 v1;

  if ((*(_BYTE*)(result + 820) & 1) == 0) {
    v1 = result;
    result = GameRoutine_1553130(10);
    *(_DWORD*)(v1 + 816) = 10;
    *(_BYTE*)(v1 + 820) = 1;
  }
  return result;
}

__int64 TelopCalendarRemind_Unknown44(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned __int8* v11;
  unsigned int v12;
  bool v13;
  int v14;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  result = ui_LayoutAccessor_IsPaneVisible_alt1((__int64*)(a1 + 168),
                                                (__int64)"A_KeyHelp");
  if ((result & 1) != 0) {
    goto LABEL_24;
  }
  LayoutAccessor_1560070_alt1((void*)(&v16_.v16), (__int64*)(a1 + 168),
                              "L_Remind_KeyHelp");
  if (v16_.v17 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v16_.v17);
    v4 = v16_.v16;
    if (v16_.v17 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v16_.v17);
    }
    if (v3 != 0 && v4 != 0) {
      GameRoutine_1374ee0_alt1((__int64*)a1, "L_Remind_KeyHelp");
      LayoutAccessor_155cda0_alt1(a1 + 832, "In", nullptr);
      goto LABEL_9;
    }
    if (v3 != 0) {
    LABEL_9:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak_alt1(v3);
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, (__int64)"L_Remind_KeyHelp",
                                        1);
  TelopSequence_1374cc0(a1, 1);
  ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 168, (__int64)"A_KeyHelp", 1);
  v5 = *(_QWORD*)(a1 + 176);
  if (v5 != 0) {
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    if (v6 != 0) {
      v7 = v6;
      v8 = *(_QWORD*)(a1 + 168);
      if (v8 != 0) {
        ControlCreator_13633c0(v8);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
      }
    }
  }
  result = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(a1 + 168),
                                                (__int64)"A_KeyHelp");
  if (result != 0) {
    Alignment_56b600_alt1(result);
    result = *(_QWORD*)(a1 + 176);
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v9 = result;
        result = *(_QWORD*)(a1 + 168);
        if (result != 0) {
          result = ControlCreator_13633c0(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          result = std___1___shared_weak_count___release_weak_alt1(v9);
        }
      }
    }
  }
LABEL_24:
  v10 = *(_DWORD*)(game_g_game_setting + 952);
  if ((v10 & 1) != 0 ||
      *(_BYTE*)(a1 + 336) == 1 &&
          ((v10 & 2) != 0 || (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0)) {
    LayoutAccessor_155d940_alt1((__int64*)(a1 + 440));
    LayoutAccessor_155cda0_alt1(a1 + 440, "Out", nullptr);
    LayoutAccessor_155d940_alt1((__int64*)(a1 + 832));
    result = LayoutAccessor_155cda0_alt1(a1 + 832, "Out", nullptr);
    v11 = *(unsigned __int8**)(a1 + 16);
    if (v11 == nullptr) {
      goto LABEL_37;
    }
  LABEL_32:
    v12 = *v11;
    v13 = v12 > 0x10;
    v14 = (1 << v12) & 0x1CE00;
    if (!v13 && v14 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
    goto LABEL_37;
  }
  if ((v10 & 4) == 0) {
    return result;
  }
  LayoutAccessor_155d940_alt1((__int64*)(a1 + 440));
  LayoutAccessor_155cda0_alt1(a1 + 440, "Out", nullptr);
  LayoutAccessor_155d940_alt1((__int64*)(a1 + 832));
  LayoutAccessor_155cda0_alt1(a1 + 832, "Out", nullptr);
  result = GameHr_1712520(*(_QWORD*)(a1 + 32), 3, 0);
  v11 = *(unsigned __int8**)(a1 + 16);
  if (v11 != nullptr) {
    goto LABEL_32;
  }
LABEL_37:
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

__int64 TelopCalendarRemind_Destructor(__int64 a1)
{
  GameRoutine_155ca60(a1 + 1008);
  GameRoutine_155ca60(a1 + 832);
  return GameRoutine_1386f80(a1);
}

__int64 TelopCalendarRemind_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  GameRoutine_155ca60(a1 + 1008);
  GameRoutine_155ca60(a1 + 832);
  GameRoutine_1386f80(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
