#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Dir_70d7a0(_QWORD);
__int64 FloatingHelp_18aee60(_QWORD, _QWORD);
__int64 GameRoutine_12dd260(void);
__int64 GameRoutine_171b5c0(_QWORD, _QWORD);
__int64 GameRoutine_171b820(_QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GuideBaseMenu_Unknown139(void);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1563380(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15635a0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD, float);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21c9650;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern char GameData_1a9f09e;
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_874520(void);
__int64 ProcCalendar_Unknown3(__int64 result);
__int64 ProcCalendar_Unknown93(__int64 result);
__int64 ProcCalendar_Unknown131();
__int64 ProcCalendar_Unknown139(__int64 a1, __int64* a2);
__int64 ProcCalendar_Unknown142(__int64 a1, char a2);
__int64 ProcCalendar_Unknown143(__int64 a1, char a2);
__attribute__((swiftcall)) void GameRoutine_171aa40(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
    LayoutAccessor_1560070_alt1(PSEUDO_X8, _QWORD,
                                _QWORD) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void ThermaeFile_950ec0(PSEUDO_X8, _QWORD,
                                                   long double);
__attribute__((swiftcall)) void game_941ce0(PSEUDO_X8, _QWORD, long double);
__int64* FloatingHelp_18af120(_QWORD*, __int64*);
__int64 Dir_70df40(_QWORD, _QWORD);
__int64 Dir_70e760(_QWORD, _QWORD);
__int64 GameCalendar_12da840(_QWORD);
__int64 GameRoutine_12d9500(_QWORD);
__int64 GameRoutine_12d9a60(_QWORD);
__int64 GameRoutine_12da100(_QWORD, long double);
__int64 GameRoutine_12da200(_QWORD, long double);
__int64 GameRoutine_12da4a0(_QWORD, long double);
__int64 GameRoutine_12da660(_QWORD, long double);
__int64 GameRoutine_12da700(_QWORD, _QWORD);
__int64 GameRoutine_12dd380(void);
__int64 GameRoutine_12dd4e0(void);
__int64 GameRoutine_1567760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_156d580(_QWORD);
__int64 GameRoutine_1585290(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1595d90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_171ab70(_QWORD);
__int64 GameRoutine_171b290(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18af980(__int64, __int64*);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_197cfe0(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ffd760(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155e830_alt1(_QWORD,
                                    _QWORD) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64
LayoutAccessor_1562680_alt1(_QWORD, _QWORD,
                            long double) __asm__("LayoutAccessor_1562680");
__int64 LayoutAccessor_1562680_alt2(__int64 result, __int64,
                                    float) __asm__("LayoutAccessor_1562680");
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562f00(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_136afb0(_QWORD, _QWORD);
__int64
ProcCalendar_1718a60_alt1(__int64 result) __asm__("ProcCalendar_1718a60");
__int64 ProcCalendar_171b110_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("ProcCalendar_171b110");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_sound_PlayCursorLeftCalendarSe(_QWORD);
__int64 game_sound_PlayCursorRightCalendarSe(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__n128 GameRoutine_1567760_alt1(__int64, unsigned int,
                                char) __asm__("GameRoutine_1567760");
__n128 GameRoutine_171beb0(__int64, char);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
bool GameRoutine_12dd260_alt1(__int64, __int16, __int16,
                              __int16) __asm__("GameRoutine_12dd260");
extern _UNKNOWN GameData_1ac6c8b;
extern __int64 (*GameData_211cdf8[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d890[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212d690;
extern __int64 GameData_212d8b0[3];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_Manager_instance_;
extern int GameData_1bfa980[];
long double LayoutAccessor_15638b0(_QWORD, _QWORD, _QWORD);
struct PseudoSret LayoutAccessor_1560070(_QWORD, _QWORD);
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64 ProcCalendar_Unknown94(__int64 a1);
__int64 ProcCalendar_Unknown112(__int64 a1);
__int16* ProcCalendar_1718a60(__int16* result);
__n128 ProcCalendar_171b110(__int64 a1, char a2, char a3, __n128 result);
__int64 ProcCalendar_171ba80(__int64 a1);
__n128 ProcCalendar_171bd40(__int64 a1);

__int64 ProcCalendar_Unknown3(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if (*(_BYTE*)(result + 1082) != 1) {
    return result;
  }
  v18 = v3;
  v19 = v1;
  v20 = v2;
  v4 = result;
  GameRoutine_1560070(&v16, result + 848, "L_SelectDaily");
  result = v17;
  if (v17 == 0) {
    return result;
  }
  v5 = std___1___shared_weak_count_lock(v17);
  v6 = v16;
  result = v17;
  if (v17 != 0) {
    result = std___1___shared_weak_count___release_weak(v17);
  }
  if (v5 == 0 || v6 == 0) {
    goto LABEL_41;
  }
  GameRoutine_1560070(&v16, v6, "L_ReminderIcon");
  result = v17;
  if (v17 == 0) {
  LABEL_42:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
    return result;
  }
  v7 = std___1___shared_weak_count_lock(v17);
  v8 = v16;
  result = v17;
  if (v17 != 0) {
    result = std___1___shared_weak_count___release_weak(v17);
  }
  if (v7 == 0 || v8 == 0) {
    goto LABEL_38;
  }
  result = LayoutAccessor_15635a0(v8, "FadeOn", 1);
  if ((result & 1) == 0 ||
      ((result = LayoutAccessor_1563380(v8, "FadeOn", 1)) & 1) == 0) {
  LABEL_39:
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      result = std___1___shared_weak_count___release_weak(v7);
    }
    goto LABEL_41;
  }
  for (i = 0; i != 6; ++i) {
    v10 = game_util_Format("L_Daily%02d", i);
    GameRoutine_1560070(&v16, v4 + 848, v10);
    if (v17 == 0) {
      continue;
    }
    v11 = std___1___shared_weak_count_lock(v17);
    v12 = v16;
    if (v17 != 0) {
      std___1___shared_weak_count___release_weak(v17);
    }
    if (v11 == 0 || v12 == 0) {
      if (v11 == 0) {
        continue;
      }
    LABEL_30:
      v15 = 4;
      goto LABEL_34;
    }
    GameRoutine_1560070(&v16, v12, "L_ReminderIcon");
    if (v17 == 0) {
      goto LABEL_30;
    }
    v13 = std___1___shared_weak_count_lock(v17);
    v14 = v16;
    if (v17 != 0) {
      std___1___shared_weak_count___release_weak(v17);
    }
    if (v13 != 0 && v14 != 0) {
      v15 = 0;
      if ((LayoutAccessor_1563280(v14, "Wait", 0) & 1) != 0) {
        LODWORD(v3) = LayoutAccessor_15637c0(v14, "Wait", 0);
        v15 = 1;
      }
    }
    else {
      v15 = 4;
      if (v13 == 0) {
        goto LABEL_34;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  LABEL_34:
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    if ((v15 & 3) != 0) {
      goto LABEL_37;
    }
  }
  LODWORD(v3) = 0;
LABEL_37:
  LayoutAccessor_1562680(v8, "Wait", 1.0);
  result = LayoutAccessor_15636c0(v8, "Wait", 0, *(float*)&v3);
  *(_BYTE*)(v4 + 1082) = 0;
LABEL_38:
  if (v7 != 0) {
    goto LABEL_39;
  }
LABEL_41:
  if (v5 != 0) {
    goto LABEL_42;
  }
  return result;
}

__int64 ProcCalendar_Unknown93(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v2 = result + 848;
    v3 = result;
    v4 = GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    FloatingHelp_18aee60(v4, v2);
    GameRoutine_18ae960(v1, 1);
    result = *(_QWORD*)(v1 + 240);
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    *(_QWORD*)(v1 + 160) = v3;
    *(_BYTE*)(v1 + 257) = 0;
    *(_DWORD*)(v1 + 248) = -1;
    v5 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

__int64 ProcCalendar_Unknown94(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  char v4[4];
  struct {
    __int64* v5;
    int v6;
    char gap20_[4];
    __int64 v7;
  } v5_;

  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  result = LayoutAccessor_155e830(a1 + 848, 0);
  v3 = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    if (*(_QWORD*)(GameData_21f1e08 + 152) != 0) {
      v5_.v7 = 0;
      v5_.v5 = GameData_212d890[0] + 2;
      v5_.v6 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
          *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
          (void*)(v4), GameData_21f1e08 + 8, &v5_.v5);
    }
    v3[20] = 0;
    FloatingHelp_18af120(v3, (__int64*)(a1 + 848));
    return GameRoutine_18af980((__int64)v3, (__int64*)(a1 + 848));
  }
  return result;
}

__int64 ProcCalendar_Unknown112(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v7;
  _BOOL4 v9;
  _BOOL4 v11;
  int v12;
  _BOOL4 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = GameData_212c6c0[0];
  v2 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL);
  v3 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL);
  if (v2 != v3) {
    while (*(__int16*)(a1 + 1070) != *(unsigned __int16*)(v2 + 4) ||
           *(_WORD*)(a1 + 1072) != *(unsigned __int8*)(v2 + 6) ||
           *(_WORD*)(a1 + 1074) != *(unsigned __int8*)(v2 + 7)) {
      v2 += 368;
      if (v2 == v3) {
        return 1;
      }
    }
  }
  if (v2 == v3 || v2 == 0) {
    return 1;
  }
  if ((*(_BYTE*)v2 & 1) == 0) {
    if ((GameRoutine_12dd380() & 1) != 0) {
      goto LABEL_18;
    }
    return 1;
  }
  if ((GameRoutine_12dd4e0() & 1) == 0) {
    return 1;
  }
LABEL_18:
  v7 = *(_QWORD*)v1;
  v9 = *(_BYTE*)(*(_QWORD*)v1 + 90LL) != 0 &&
       *(_WORD*)(*(_QWORD*)v1 + 88LL) != 0;
  if (*(_BYTE*)(*(_QWORD*)v1 + 91LL) == 0) {
    v9 = false;
  }
  v11 = *(_BYTE*)(*(_QWORD*)v1 + 96LL) != 0 && *(_WORD*)(v7 + 94) != 0;
  if (*(_BYTE*)(v7 + 97) == 0) {
    v11 = false;
  }
  v12 = v11 + v9;
  v14 = *(_BYTE*)(v7 + 102) != 0 && *(_WORD*)(v7 + 100) != 0;
  if (*(_BYTE*)(v7 + 103) == 0) {
    v14 = false;
  }
  v15 = v12 + v14;
  v16 = *(_QWORD*)(v7 + 16);
  v17 = *(_QWORD*)(v7 + 24);
  if (v16 != v17) {
    while (*(__int16*)(a1 + 1070) != *(unsigned __int16*)(v16 + 4) ||
           *(_WORD*)(a1 + 1072) != *(unsigned __int8*)(v16 + 6) ||
           *(_WORD*)(a1 + 1074) != *(unsigned __int8*)(v16 + 7)) {
      v16 += 368;
      if (v16 == v17) {
        goto LABEL_51;
      }
    }
  }
  if (v16 != v17 && v16 != 0 && (*(_BYTE*)v16 & 1) != 0) {
    v18 = 0;
  }
  else {
  LABEL_51:
    if (v15 == 3) {
      v18 = 2;
    }
    else {
      v18 = (GameRoutine_12dd260() & 1) == 0;
    }
  }
  GameRoutine_1567760("Reminder", v15 ^ 3u, v18);
  v20 = *(_QWORD*)(*(_QWORD*)v1 + 16LL);
  v19 = *(_QWORD*)(*(_QWORD*)v1 + 24LL);
  if (v20 != v19) {
    while (*(__int16*)(a1 + 1070) != *(unsigned __int16*)(v20 + 4) ||
           *(_WORD*)(a1 + 1072) != *(unsigned __int8*)(v20 + 6) ||
           *(_WORD*)(a1 + 1074) != *(unsigned __int8*)(v20 + 7)) {
      v20 += 368;
      if (v20 == v19) {
        return 13;
      }
    }
  }
  result = 13;
  if (v20 != v19 && v20 != 0) {
    *(struct PseudoSret*)(&v25) =
        LayoutAccessor_1560070(a1 + 848, "L_SelectDaily");
    v21 = v26;
    if (v26 != 0) {
      v22 = std___1___shared_weak_count_lock(v26);
      if (v22 != 0) {
        v21 = v25;
      }
      else {
        v21 = 0;
      }
    }
    else {
      v22 = 0;
    }
    ProcCalendar_171b110_alt1(v21, *(_BYTE*)v20 & 1, 0);
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt1(v22);
    }
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v26);
    }
    *(_BYTE*)(a1 + 1082) = *(_BYTE*)v20 & 1;
    if ((*(_BYTE*)v20 & 1) != 0) {
      v23 = "SE_SYS_Reminder_On";
    }
    else {
      v23 = "SE_SYS_Reminder_Off";
    }
    snd_Fade_Fade_10c830(&v25, 0.0f);
    *(struct PseudoSret*)(&v24) =
        snd_play_ff2d0(v23, v23, &v25, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(&v25);
    return 13;
  }
  return result;
}

__int64 ProcCalendar_Unknown131()
{
  __int64 result;

  result = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    return LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return result;
}

__int64 ProcCalendar_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  _BOOL4 v6;
  _BOOL4 v8;
  int v9;
  _BOOL4 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  char v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  int v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;

  GuideBaseMenu_Unknown139();
  result = GameData_21c9650;
  v6 = *(_BYTE*)(GameData_21c9650 + 90) != 0 &&
       *(_WORD*)(GameData_21c9650 + 88) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 91) == 0) {
    v6 = false;
  }
  v8 = *(_BYTE*)(GameData_21c9650 + 96) != 0 &&
       *(_WORD*)(GameData_21c9650 + 94) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 97) == 0) {
    v8 = false;
  }
  v9 = v8 + v6;
  v11 = *(_BYTE*)(GameData_21c9650 + 102) != 0 &&
        *(_WORD*)(GameData_21c9650 + 100) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 103) == 0) {
    v11 = false;
  }
  v12 = v9 + v11;
  v13 = *(_QWORD*)(GameData_21c9650 + 16);
  v14 = *(_QWORD*)(GameData_21c9650 + 24);
  if (v13 != v14) {
    while (*(__int16*)(a1 + 1070) != *(unsigned __int16*)(v13 + 4) ||
           *(_WORD*)(a1 + 1072) != *(unsigned __int8*)(v13 + 6) ||
           *(_WORD*)(a1 + 1074) != *(unsigned __int8*)(v13 + 7)) {
      v13 += 368;
      if (v13 == v14) {
        goto LABEL_36;
      }
    }
  }
  v15 = v13 == v14 || v13 == 0;
  if (!v15 && (*(_BYTE*)v13 & 1) != 0) {
    v16 = 0;
  }
  else {
  LABEL_36:
    if (v12 == 3) {
      v16 = 2;
    }
    else {
      result = GameRoutine_12dd260();
      v16 = (result & 1) == 0;
    }
  }
  v17 = a2[1];
  v18 = a2[2];
  v19 = v12 ^ 3;
  if (v17 >= v18) {
    v21 = *a2;
    v22 = v17 - *a2;
    v23 = 1 - 0x3333333333333333LL * (v22 >> 3);
    if (v23 > 0x666666666666666LL) {
      goto LABEL_91;
    }
    v24 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v18 - v21) >> 3);
    if (2 * v24 > v23) {
      v23 = 2 * v24;
    }
    if (v24 >= 0x333333333333333LL) {
      v25 = 0x666666666666666LL;
    }
    else {
      v25 = v23;
    }
    if (v25 != 0) {
      if (v25 > 0x666666666666666LL) {
        goto LABEL_92;
      }
      v26 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v25,
                                           16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + v22;
    *(_QWORD*)v27 = "Reminder";
    *(_QWORD*)(v27 + 8) = "MID_KeyHelp_Reminder";
    *(_BYTE*)(v27 + 28) = v16;
    v20 = v26 + v22 + 40;
    *(_BYTE*)(v27 + 16) = 1;
    *(_QWORD*)(v27 + 20) = 0x30000000BLL;
    *(_DWORD*)(v27 + 32) = v19;
    *(_DWORD*)(v27 + 36) = 3;
    result = memcpy(v26, v21, v22);
    *a2 = v26;
    a2[1] = v20;
    a2[2] = v26 + 40 * v25;
    if (v21 != 0) {
      v28 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v28 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v28, v21);
    }
  }
  else {
    *(_BYTE*)(v17 + 28) = v16;
    *(_QWORD*)v17 = "Reminder";
    *(_QWORD*)(v17 + 8) = "MID_KeyHelp_Reminder";
    v20 = v17 + 40;
    *(_BYTE*)(v17 + 16) = 1;
    *(_QWORD*)(v17 + 20) = 0x30000000BLL;
    *(_DWORD*)(v17 + 32) = v19;
    *(_DWORD*)(v17 + 36) = 3;
  }
  v29 = a2[2];
  a2[1] = v20;
  if (v20 >= v29) {
    v31 = *a2;
    v32 = v20 - *a2;
    v33 = 1 - 0x3333333333333333LL * (v32 >> 3);
    if (v33 > 0x666666666666666LL) {
      goto LABEL_91;
    }
    v34 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v29 - v31) >> 3);
    if (2 * v34 > v33) {
      v33 = 2 * v34;
    }
    if (v34 >= 0x333333333333333LL) {
      v35 = 0x666666666666666LL;
    }
    else {
      v35 = v33;
    }
    if (v35 != 0) {
      if (v35 > 0x666666666666666LL) {
        goto LABEL_92;
      }
      v36 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v35,
                                           16, 0);
    }
    else {
      v36 = 0;
    }
    v37 = v36 + v32;
    *(_QWORD*)v37 = "XHelp";
    *(_QWORD*)(v37 + 8) = 0;
    *(_BYTE*)(v37 + 16) = 0;
    *(_BYTE*)(v37 + 28) = 0;
    *(_QWORD*)(v37 + 32) = 0;
    v30 = v36 + v32 + 40;
    *(_QWORD*)(v37 + 20) = 0x300000002LL;
    result = memcpy(v36, v31, v32);
    *a2 = v36;
    a2[1] = v30;
    a2[2] = v36 + 40 * v35;
    if (v31 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v31);
    }
  }
  else {
    *(_BYTE*)(v20 + 16) = 0;
    *(_BYTE*)(v20 + 28) = 0;
    *(_QWORD*)(v20 + 32) = 0;
    *(_QWORD*)v20 = "XHelp";
    *(_QWORD*)(v20 + 8) = 0;
    *(_QWORD*)(v20 + 20) = 0x300000002LL;
    v30 = v20 + 40;
  }
  a2[1] = v30;
  if (*(_BYTE*)(a1 + 1068) != 1) {
    return result;
  }
  v39 = a2[2];
  if (v30 >= v39) {
    v41 = *a2;
    v42 = v30 - *a2;
    v43 = 1 - 0x3333333333333333LL * (v42 >> 3);
    if (v43 <= 0x666666666666666LL) {
      v44 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v39 - v41) >> 3);
      if (2 * v44 > v43) {
        v43 = 2 * v44;
      }
      if (v44 >= 0x333333333333333LL) {
        v45 = 0x666666666666666LL;
      }
      else {
        v45 = v43;
      }
      if (v45 == 0) {
        v46 = 0;
      LABEL_85:
        v47 = v46 + v42;
        *(_QWORD*)v47 = &GameData_1a9f09e;
        *(_QWORD*)(v47 + 8) = "MID_KeyHelp_Cancel";
        *(_BYTE*)(v47 + 28) = 0;
        *(_QWORD*)(v47 + 32) = 0;
        *(_BYTE*)(v47 + 16) = 1;
        v48 = v46 + 40 * v45;
        v40 = v46 + v42 + 40;
        *(_QWORD*)(v47 + 20) = 0x300000001LL;
        result = memcpy(v46, v41, v42);
        *a2 = v46;
        a2[1] = v40;
        a2[2] = v48;
        if (v41 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v49 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v41);
        }
        goto LABEL_89;
      }
      if (v45 <= 0x666666666666666LL) {
        v46 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v45,
                                             16, 0);
        goto LABEL_85;
      }
    LABEL_92:
      GameRoutine_60a210();
    }
  LABEL_91:
    GameRoutine_874520();
  }
  *(_BYTE*)(v30 + 28) = 0;
  *(_QWORD*)(v30 + 32) = 0;
  *(_QWORD*)v30 = &GameData_1a9f09e;
  *(_QWORD*)(v30 + 8) = "MID_KeyHelp_Cancel";
  v40 = v30 + 40;
  *(_BYTE*)(v30 + 16) = 1;
  *(_QWORD*)(v30 + 20) = 0x300000001LL;
LABEL_89:
  a2[1] = v40;
  return result;
}

__int64 ProcCalendar_Unknown142(__int64 a1, char a2)
{
  __int64 v2;
  unsigned int v5;
  __int16 v6;
  __int16 v7;
  __int64 v8;
  __int64 v10;
  int v11;

  v2 = a1 + 176;
  if ((**(unsigned int (***)(__int64))(a1 + 176))(a1 + 176) == 0 &&
      (v8 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 336LL)) != 0 &&
      ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 312LL))(v8, a2 & 1) &
       1) != 0) {
    v5 = 13;
  }
  else {
    v5 = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 96LL))(
        v2, 1, a2 & 1);
  }
  if (GameData_21c9650 == 0) {
    v6 = *(_WORD*)(a1 + 1072);
    v7 = *(_WORD*)(a1 + 1074);
    goto LABEL_11;
  }
  v6 = *(_WORD*)(a1 + 1072);
  v7 = *(_WORD*)(a1 + 1074);
  if (((*(unsigned __int16*)(*(_QWORD*)(GameData_21c9650 + 24) - 364LL) << 16) |
       (*(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 24) - 362LL) << 8) |
       *(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 24) - 361LL)) !=
      (((unsigned __int8)v6 << 8) | (*(unsigned __int16*)(a1 + 1070) << 16) |
       (unsigned __int8)v7)) {
  LABEL_11:
    LOWORD(v10) = *(_WORD*)(a1 + 1070);
    WORD1(v10) = v6;
    v11 = 0;
    HIDWORD(v10) = (unsigned __int16)(v7 + 1);
    Dir_70d7a0(&v10);
    *(_QWORD*)(a1 + 1070) = v10;
    *(_DWORD*)(a1 + 1078) = v11;
    GameRoutine_171b820(a1, 0);
    return v5;
  }
  if ((a2 & 1) != 0) {
    GameRoutine_171b5c0(a1, 0);
  }
  return v5;
}

__int64 ProcCalendar_Unknown143(__int64 a1, char a2)
{
  __int64 v2;
  unsigned int v5;
  __int16 v6;
  __int16 v7;
  __int64 v8;
  __int64 v10;
  int v11;

  v2 = a1 + 176;
  if ((**(unsigned int (***)(__int64))(a1 + 176))(a1 + 176) == 0 &&
      (v8 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 336LL)) != 0 &&
      ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 320LL))(v8, a2 & 1) &
       1) != 0) {
    v5 = 13;
  }
  else {
    v5 = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 96LL))(
        v2, 0xFFFFFFFFLL, a2 & 1);
  }
  if (GameData_21c9650 == 0) {
    v6 = *(_WORD*)(a1 + 1072);
    v7 = *(_WORD*)(a1 + 1074);
    goto LABEL_11;
  }
  v6 = *(_WORD*)(a1 + 1072);
  v7 = *(_WORD*)(a1 + 1074);
  if (((*(unsigned __int16*)(*(_QWORD*)(GameData_21c9650 + 16) + 4LL) << 16) |
       (*(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 16) + 6LL) << 8) |
       *(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 16) + 7LL)) !=
      (((unsigned __int8)v6 << 8) | (*(unsigned __int16*)(a1 + 1070) << 16) |
       (unsigned __int8)v7)) {
  LABEL_11:
    LOWORD(v10) = *(_WORD*)(a1 + 1070);
    WORD1(v10) = v6;
    v11 = 0;
    HIDWORD(v10) = (unsigned __int16)(v7 - 1);
    Dir_70d7a0(&v10);
    *(_QWORD*)(a1 + 1070) = v10;
    *(_DWORD*)(a1 + 1078) = v11;
    GameRoutine_171b820(a1, 1);
    return v5;
  }
  if ((a2 & 1) != 0) {
    GameRoutine_171b5c0(a1, 1);
  }
  return v5;
}

__int16* ProcCalendar_1718a60(__int16* result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned __int8* v3;
  int v4;
  int v5;
  int v6;
  unsigned __int8* v7;
  __int16* v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  __int64 v14;
  __int16* v15;
  long double v16;
  const char* v17;
  long double v18;
  unsigned int v19;
  const char* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __n128 v42;
  __int64 v43;
  __int64* v44;
  unsigned int v45;
  __int64 v46;
  __int16* v47;
  unsigned int v48;
  long double v49;
  const char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  const char* v54;
  bool v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char v59;
  int v60;
  char v61;
  __n128 v62;
  __int64 v63;
  __int64 v64;
  __n128 v65;
  __int64* v66;
  __int64 v67;
  const char* v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  _BOOL8 v88;
  __int64 v89;
  unsigned __int8* v90;
  __int64 v91;
  int v92;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  char v97;
  __int64 v98;
  __int64 v99;
  unsigned int v100;
  __int64 v101;
  unsigned __int8* v102;
  __int64 v103;
  int v104;
  int v106;
  __int64* v107;
  __int64 v108;
  __int64 v109;
  long double v110;
  unsigned __int8* v111;
  unsigned int v112;
  unsigned __int64 v113;
  _BYTE* v114;
  long double v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64* v128;
  __int64 v129;
  long double v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  __int64* v134;
  int v135;
  __int64 v136;
  __int64 v137;
  const char* v138;
  const char* v139;
  __int16* v140;
  int v141;
  const char* v142;
  const char* v143;
  long double v144;
  int v145;
  unsigned __int64 v146;
  unsigned int v147;
  __int64 v149;
  long double v150;
  __int64 v151;
  unsigned __int8* v152;
  _QWORD* v153;
  unsigned __int64 v154;
  int v155;
  char v156;
  __n128 v157;
  __int64 v158;
  __int64 v159;
  __int64* v160;
  _QWORD* v161;
  unsigned __int64 v162;
  int v163;
  char v164;
  __int64* v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  unsigned __int8* v168;
  __int64 v169;
  __int64 v170;
  const char* v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64* v179;
  _QWORD* v180;
  unsigned __int64 v181;
  unsigned int v182;
  char v183;
  _QWORD* v184;
  int v185;
  unsigned __int64 v186;
  unsigned __int64 v187;
  _QWORD* v188;
  unsigned __int8* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  int v197;
  __int64 v198;
  __int64 v199;
  __int64* v200;
  char v201;
  const char* v202;
  unsigned int v203;
  __int64 v204;
  __int64 v205;
  int v206;
  int v207;
  _QWORD* v208;
  __int64* v209;
  const char* v210;
  __int64 v211;
  int v212;
  __int64* v213;
  unsigned __int64 v214;
  unsigned __int64 v215;
  int* v216;
  __int64** v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;

  v1 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    return result;
  }
  v3 = *(unsigned __int8**)(v1 + 16);
  v2 = *(unsigned __int8**)(v1 + 24);
  if (v3 == v2) {
    return result;
  }
  v4 = result[535];
  v5 = result[536];
  v6 = result[537];
  v7 = v3 + 8;
  v8 = result;
  v9 = 0;
  while (1) {
    if (v4 == *(unsigned __int16*)&v3[v9 + 4] && v5 == v3[v9 + 6]) {
      v10 = &v3[v9];
      if (v6 == v3[v9 + 7]) {
        break;
      }
    }
    v9 += 368;
    if (&v3[v9] == v2) {
      return result;
    }
  }
  if (v10 == v2) {
    return result;
  }
  v11 = v10 + 8;
  v208 = v10 + 352;
  while (v4 != *((unsigned __int16*)v7 - 2) || v5 != *(v7 - 2) ||
         v6 != *(v7 - 1)) {
    v12 = v7 + 360;
    v7 += 368;
    if (v12 == v2) {
      goto LABEL_19;
    }
  }
  v13 = nullptr;
  if (v7 - 8 != v2 && v7 != (unsigned __int8*)((_UNKNOWN**)0x8LL)) {
    v14 = *(v7 - 7);
    if (*(v7 - 7) == 0) {
    LABEL_19:
      v13 = nullptr;
      goto LABEL_20;
    }
    while (*v7 != 1) {
      v7 += 24;
      if (--v14 == 0) {
        goto LABEL_19;
      }
    }
    v13 = v7;
  }
LABEL_20:
  v15 = result + 424;
  if ((LayoutAccessor_1563280(result + 424, "Wait", 1) & 1) == 0) {
    LODWORD(v16) = 1.0;
    LayoutAccessor_1562680_alt1(v8 + 424, "Wait", v16);
  }
  LODWORD(v16) = 1.0;
  if (v13 != nullptr) {
    v17 = "DayFestival";
  }
  else {
    v17 = "DayDefault";
  }
  LayoutAccessor_1562680_alt1(v8 + 424, v17, v16);
  *(__n128*)&v18 =
      ui_LayoutAccessor_SetPaneVisible(v8 + 424, "N_Festival", v13 != nullptr);
  if (v13 == nullptr) {
    LODWORD(v18) = 1.0;
    LayoutAccessor_1562680_alt1(v8 + 424, "ColorDefault", v18);
    goto LABEL_63;
  }
  v19 = *v13;
  v20 = "ColorDefault";
  if (v19 <= 0xC &&
      (((1 << v19) & 0x1F9E) != 0 || v19 == 5 && (v13[1] & 1) == 0)) {
    v21 = *((_QWORD*)v13 + 1);
    if (v21 != 0) {
      v22 = *(unsigned __int8*)(v21 + 312);
      if (v22 < 0xC) {
        v20 = (char*)GameData_1bfa980 + GameData_1bfa980[v22];
      }
    }
  }
  LODWORD(v18) = 1.0;
  LayoutAccessor_1562680_alt1(v8 + 424, v20, v18);
  v23 = *v13;
  v24 = 0;
  if (v23 > 0xC) {
    goto LABEL_42;
  }
  if (((1 << v23) & 0x1F9E) != 0) {
    goto LABEL_33;
  }
  if (v23 == 5) {
    if ((v13[1] & 1) == 0) {
    LABEL_33:
      v25 = *((_QWORD*)v13 + 1);
      if (v25 != 0) {
        v26 = *(unsigned __int8*)(v25 + 296);
        if (v26 == 2) {
          v27 = 5;
        }
        else {
          v27 = 0;
        }
        if (v26 == 1) {
          v24 = 7;
        }
        else {
          v24 = v27;
        }
      }
      else {
        v24 = 0;
      }
      goto LABEL_42;
    }
    v24 = 0;
  }
LABEL_42:
  if ((Manager_136afb0(ui_Manager_instance_ + 1264, v24) & 1) == 0) {
    goto LABEL_57;
  }
  v28 = ui_Manager_instance_;
  v29 = ui_LayoutAccessor_FindPane(v8 + 424, "IconSymbol");
  if (v29 != 0) {
    v30 = __dynamic_cast(v29, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v30 = 0;
  }
  v31 = *v13;
  v32 = 0;
  if (v31 <= 0xC) {
    if (((1 << v31) & 0x1F9E) != 0) {
      goto LABEL_48;
    }
    if (v31 == 5) {
      if ((v13[1] & 1) == 0) {
      LABEL_48:
        v33 = *((_QWORD*)v13 + 1);
        if (v33 != 0) {
          v34 = *(unsigned __int8*)(v33 + 296);
          if (v34 == 2) {
            v35 = 5;
          }
          else {
            v35 = 0;
          }
          if (v34 == 1) {
            v32 = 7;
          }
          else {
            v32 = v35;
          }
        }
        else {
          v32 = 0;
        }
        goto LABEL_56;
      }
      v32 = 0;
    }
  }
LABEL_56:
  Manager_136a920(v28 + 1264, v30, 0, v32);
LABEL_57:
  v36 = GameRoutine_12d9500(v13);
  if (v36 != 0) {
    v37 = v36;
    v38 = ui_LayoutAccessor_FindTextBox(v8 + 424, "T_FestivalName");
    if (v38 != 0) {
      GameRoutine_156c5d0(v38, v37, 0);
    }
  }
  v39 = GameRoutine_12d9a60(v13);
  if (v39 != 0) {
    v40 = v39;
    v41 = ui_LayoutAccessor_FindTextBox(v8 + 424, "T_FestivalHelp");
    if (v41 != 0) {
      GameRoutine_156c5d0(v41, v40, 0);
    }
  }
LABEL_63:
  GameRoutine_171ab70(v8);
  LayoutAccessor_1560070_alt1((void*)(&v213), v8 + 424, "L_Info");
  v209 = (__int64*)(v8 + 424);
  if (v214 == 0) {
    goto LABEL_97;
  }
  v43 = std___1___shared_weak_count_lock(v214);
  v44 = v213;
  if (v214 != 0) {
    v42 = std___1___shared_weak_count___release_weak_alt1(v214);
  }
  if (v43 == 0 || v44 == nullptr) {
    if (v43 == 0) {
      goto LABEL_97;
    }
    goto LABEL_95;
  }
  v45 = 10000 * v8[535] + 100 * v8[536] + v8[537];
  v46 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v47 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v47 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v48 = 10000 * *v47 + 100 * v47[1] + v47[2];
  if (v45 == v48) {
    LayoutAccessor_155e830_alt1(v44, 1);
    LODWORD(v49) = 1.0;
    LayoutAccessor_1562680_alt1(v44, "Today", v49);
    v15 = v8 + 424;
    v50 = "T_Txt";
  LABEL_73:
    v51 = ui_LayoutAccessor_FindTextBox(v44, v50);
    if (v51 != 0) {
      v52 = v51;
      v53 = ui_LayoutAccessor_FindTextBox(v44, v50);
      if (v53 != 0) {
        GameRoutine_190a0c0(&v213, &v210, &v212, v53, *(_QWORD*)(v53 + 216));
        v54 = v210;
      }
      else {
        v54 = nullptr;
      }
      v59 = *(_BYTE*)(v52 + 88);
      *(_QWORD*)(v52 + 80) = v54;
      *(_BYTE*)(v52 + 88) = v59 | 0x10;
    }
    GameRoutine_1585290(v44, "A_Txt", &GameData_1ac6c8b);
    goto LABEL_95;
  }
  LayoutAccessor_155e830_alt1(v44, v45 > v48);
  v55 = v45 > v48;
  v15 = v8 + 424;
  if (v55) {
    LANES128(v42).n128_u32[0] = 1.0;
    LayoutAccessor_1562680_alt1(v44, "Turn", *(long double*)&v42);
    if (game_gmap_GmapClock_instance_ != 0) {
      v56 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v56 = v46;
    }
    v50 = "T_TurnNum";
    Dir_70e760(v56, v8 + 535);
    v57 = ui_LayoutAccessor_FindPane(v44, "T_TurnNum");
    if (v57 != 0) {
      v58 = __dynamic_cast(v57, GameData_212d670[0], GameData_212d690, 0);
      if (v58 != 0) {
        GameRoutine_156c910(v58, "%d", 1);
      }
    }
    goto LABEL_73;
  }
LABEL_95:
  if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v43 + 16LL))(
        v43, *(long double*)&v42);
    v42 = std___1___shared_weak_count___release_weak_alt1(v43);
  }
LABEL_97:
  game_941ce0((void*)(&v210), v8 + 535, *(long double*)&v42);
  if ((const char*)v211 == v210) {
    v62 = ui_LayoutAccessor_SetPaneVisible(v15, "N_Tranig", 0);
    v60 = 1;
    goto LABEL_169;
  }
  v60 = 1;
  v61 = GameRoutine_ffd760(1, &GameData_1a9f09e, 0, 0);
  v62 = ui_LayoutAccessor_SetPaneVisible(v15, "N_Tranig", v61 & 1);
  if ((v61 & 1) == 0) {
    goto LABEL_169;
  }
  v63 = game_util_Format("L_Traning%02d", 0);
  LayoutAccessor_1560070_alt1((void*)(&v213), v15, v63);
  if (v214 != 0) {
    v64 = std___1___shared_weak_count_lock(v214);
    v66 = v213;
    if (v214 != 0) {
      v65 = std___1___shared_weak_count___release_weak_alt1(v214);
    }
    if (v64 == 0 || v66 == nullptr) {
      if (v64 == 0) {
        goto LABEL_121;
      }
      goto LABEL_119;
    }
    v68 = v210;
    v67 = v211;
    LayoutAccessor_155e830_alt1(v66, v211 != (_QWORD)v210);
    if ((const char*)v67 == v68) {
    LABEL_119:
      if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v64 + 16LL))(
            v64, *(long double*)&v65);
        std___1___shared_weak_count___release_weak_alt1(v64);
      }
      goto LABEL_121;
    }
    LayoutAccessor_1562060(v66, "T_Txt", *(_QWORD*)(*(_QWORD*)v210 + 32LL));
    v212 = 0;
    v69 = *(_QWORD*)v210;
    v213 = (__int64*)GameData_211cdf8;
    v214 = (unsigned __int64)v66;
    v217 = &v213;
    v215 = v69 + 90;
    v216 = &v212;
    GameRoutine_156d580(&v213);
    if (v217 == &v213) {
      v70 = 4;
    }
    else {
      if (v217 == nullptr) {
        goto LABEL_117;
      }
      v70 = 5;
    }
    ((void (*)(void))(*v217)[v70])();
  LABEL_117:
    v71 = v212;
    if (v212 <= 3) {
      do {
        v72 = game_util_Format("IconMastery%02d", v71);
        v65 = ui_LayoutAccessor_SetPaneVisible(v66, v72, 0);
        v73 = v212;
        v71 = ++v212;
      } while (v73 < 3);
    }
    goto LABEL_119;
  }
LABEL_121:
  v74 = game_util_Format("L_Traning%02d", 1);
  LayoutAccessor_1560070_alt1((void*)(&v213), v15, v74);
  if (v214 == 0) {
    goto LABEL_131;
  }
  v75 = std___1___shared_weak_count_lock(v214);
  v76 = v213;
  if (v214 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v214);
  }
  if (v75 != 0 && v76 != nullptr) {
    v77 = v211 - (_QWORD)v210;
    LayoutAccessor_155e830_alt1(v76,
                                (unsigned __int64)(v211 - (_QWORD)v210) > 8);
    if (v77 >= 9) {
      LayoutAccessor_1562060(v76, "T_Txt",
                             *(_QWORD*)(*((_QWORD*)v210 + 1) + 32LL));
      GameRoutine_197cfe0(v76, *((_QWORD*)v210 + 1) + 90LL);
    }
  }
  else if (v75 == 0) {
    goto LABEL_131;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
    std___1___shared_weak_count___release_weak_alt1(v75);
  }
LABEL_131:
  v78 = game_util_Format("L_Traning%02d", 2);
  LayoutAccessor_1560070_alt1((void*)(&v213), v15, v78);
  if (v214 == 0) {
    goto LABEL_141;
  }
  v79 = std___1___shared_weak_count_lock(v214);
  v80 = v213;
  if (v214 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v214);
  }
  if (v79 != 0 && v80 != nullptr) {
    v81 = v211 - (_QWORD)v210;
    LayoutAccessor_155e830_alt1(v80,
                                (unsigned __int64)(v211 - (_QWORD)v210) > 0x10);
    if (v81 >= 0x11) {
      LayoutAccessor_1562060(v80, "T_Txt",
                             *(_QWORD*)(*((_QWORD*)v210 + 2) + 32LL));
      GameRoutine_197cfe0(v80, *((_QWORD*)v210 + 2) + 90LL);
    }
  }
  else if (v79 == 0) {
    goto LABEL_141;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
    std___1___shared_weak_count___release_weak_alt1(v79);
  }
LABEL_141:
  v82 = game_util_Format("L_Traning%02d", 3);
  LayoutAccessor_1560070_alt1((void*)(&v213), v15, v82);
  if (v214 != 0) {
    v83 = std___1___shared_weak_count_lock(v214);
    v84 = v213;
    if (v214 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v214);
    }
    if (v83 != 0 && v84 != nullptr) {
      v85 = v211 - (_QWORD)v210;
      LayoutAccessor_155e830_alt1(v84, (unsigned __int64)(v211 - (_QWORD)v210) >
                                           0x18);
      if (v85 >= 0x19) {
        LayoutAccessor_1562060(v84, "T_Txt",
                               *(_QWORD*)(*((_QWORD*)v210 + 3) + 32LL));
        GameRoutine_197cfe0(v84, *((_QWORD*)v210 + 3) + 90LL);
      }
      goto LABEL_149;
    }
    if (v83 != 0) {
    LABEL_149:
      if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
        std___1___shared_weak_count___release_weak_alt1(v83);
      }
    }
  }
  v86 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL);
  v87 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL);
  if (v86 != v87) {
    while (v8[535] != *(unsigned __int16*)(v86 + 4) ||
           v8[536] != *(unsigned __int8*)(v86 + 6) ||
           v8[537] != *(unsigned __int8*)(v86 + 7)) {
      v86 += 368;
      if (v86 == v87) {
        goto LABEL_167;
      }
    }
  }
  v88 = false;
  if (v86 != v87 && v86 != 0) {
    v89 = *(unsigned __int8*)(v86 + 1);
    if (*(_BYTE*)(v86 + 1) != 0) {
      v90 = (unsigned __int8*)(v86 + 8);
      v91 = v89 - 1;
      do {
        v92 = *v90;
        v90 += 24;
        v88 = v92 == 2;
      } while (v92 != 2 && v91-- != 0);
    }
    else {
    LABEL_167:
      v88 = false;
    }
  }
  v62 = ui_LayoutAccessor_SetPaneVisible(v15, "L_TraningEvent", v88);
  v60 = 0;
LABEL_169:
  v94 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v210 != nullptr) {
    v95 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v211 = (__int64)v210;
    v96 = 128;
    if (*(_QWORD*)(v95 + 200) == 0) {
      v96 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v95 + v96);
  }
  ThermaeFile_950ec0((void*)(&v213), v8 + 535, *(long double*)&v62);
  if (v213 == (__int64*)v214) {
    ui_LayoutAccessor_SetPaneVisible(v15, "N_Thermae", 0);
  LABEL_192:
    v106 = 1;
    v107 = v213;
    if (v213 == nullptr) {
      goto LABEL_196;
    }
    goto LABEL_193;
  }
  v97 = GameRoutine_ffd760(7, &GameData_1a9f09e, 0, 0);
  ui_LayoutAccessor_SetPaneVisible(v15, "N_Thermae", v97 & 1);
  if ((v97 & 1) == 0) {
    goto LABEL_192;
  }
  v206 = v60;
  v98 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL);
  v99 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL);
  if (v98 != v99) {
    while (v8[535] != *(unsigned __int16*)(v98 + 4) ||
           v8[536] != *(unsigned __int8*)(v98 + 6) ||
           v8[537] != *(unsigned __int8*)(v98 + 7)) {
      v98 += 368;
      if (v98 == v99) {
        goto LABEL_218;
      }
    }
  }
  v100 = 0;
  if (v98 != v99 && v98 != 0) {
    v101 = *(unsigned __int8*)(v98 + 1);
    if (*(_BYTE*)(v98 + 1) != 0) {
      v102 = (unsigned __int8*)(v98 + 8);
      v103 = v101 - 1;
      do {
        v104 = *v102;
        v102 += 24;
        v100 = v104 == 3;
      } while (v104 != 3 && v103-- != 0);
    }
    else {
    LABEL_218:
      v100 = 0;
    }
  }
  v134 = v213;
  v133 = v214;
  if (v213 == (__int64*)v214) {
    v135 = 0;
    while (1) {
    LABEL_284:
      v169 = game_util_Format("L_Thermae%02d", v135);
      LayoutAccessor_1560070_alt1((void*)(&v210), v209, v169);
      if (v211 != 0) {
        v170 = std___1___shared_weak_count_lock(v211);
        v171 = v210;
        if (v211 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v211);
        }
        if (v170 != 0 && v171 != nullptr) {
          LayoutAccessor_155e830_alt1(v171, 0);
        LABEL_291:
          if (atomic_fetch_add((atomic_ullong* volatile)(v170 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v170 + 16LL))(v170);
            std___1___shared_weak_count___release_weak_alt1(v170);
          }
          goto LABEL_283;
        }
        if (v170 != 0) {
          goto LABEL_291;
        }
      }
    LABEL_283:
      if (++v135 == 6) {
        goto LABEL_237;
      }
    }
  }
  v135 = 0;
  do {
    if (v135 <= 5 && ((*(_BYTE*)(*v134 + 66) != 0) & ~v100) == 0) {
      v136 = game_util_Format("L_Thermae%02d", v135);
      LayoutAccessor_1560070_alt1((void*)(&v210), v15, v136);
      if (v211 != 0) {
        v137 = std___1___shared_weak_count_lock(v211);
        v138 = v210;
        if (v211 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v211);
        }
        if (v137 != 0 && v138 != nullptr) {
          LayoutAccessor_155e830_alt1(v138, 1);
          LayoutAccessor_1562060(v138, "T_Txt", *(_QWORD*)(*v134 + 32));
          if (*(_BYTE*)(*v134 + 66) != 0) {
            v139 = "Special";
          }
          else {
            v139 = "Default";
          }
          LayoutAccessor_1562cf0(v138, v139);
          v15 = v8 + 424;
          ++v135;
        }
        else {
          v15 = v8 + 424;
          if (v137 == 0) {
            goto LABEL_221;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v137 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v137 + 16LL))(v137);
          std___1___shared_weak_count___release_weak_alt1(v137);
        }
      }
    }
  LABEL_221:
    ++v134;
  } while (v134 != (__int64*)v133);
  if (v135 <= 5) {
    goto LABEL_284;
  }
LABEL_237:
  v15 = v8 + 424;
  ui_LayoutAccessor_SetPaneVisible(v209, "L_ThermaeEvent", v100);
  v60 = v206;
  v106 = 0;
  v94 = (__int64*)fw_memory_g_heap_manager_ptr;
  v107 = v213;
  if (v213 != nullptr) {
  LABEL_193:
    v108 = *v94;
    v214 = (unsigned __int64)v107;
    v109 = 128;
    if (*(_QWORD*)(v108 + 200) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v108 + v109);
  }
LABEL_196:
  *(__n128*)&v110 = ui_LayoutAccessor_SetPaneVisible(v15, "N_Temple", 0);
  v111 = &v3[v9];
  v112 = v3[v9 + 1];
  if (v3[v9 + 1] == 0) {
    goto LABEL_240;
  }
  v113 = 0;
  v114 = v11;
  while (2) {
    if (*v114 != 7) {
    LABEL_199:
      ++v113;
      v114 += 24;
      if (v113 >= v112) {
        goto LABEL_240;
      }
      continue;
    }
    break;
  }
  if ((GameRoutine_12da4a0(v114, v110) & 1) == 0) {
    v112 = v111[1];
    goto LABEL_199;
  }
  v207 = v60;
  *(__n128*)&v115 = ui_LayoutAccessor_SetPaneVisible(v209, "N_Temple", 1);
  v116 = GameRoutine_12da100(v114, v115);
  if (v116 != 0) {
    v117 = v116;
    v218 = -1;
    v219 = -1;
    v220 = -1;
    v221 = -1;
    v118 = *msg_MessageManager_instance__ptr[0];
    v222 = -1;
    v223 = -1;
    v224 = -1;
    v225 = -1;
    v226 = -1;
    v227 = -1;
    v228 = -1;
    v229 = -1;
    v213 = GameData_212e348 + 2;
    v214 = 0xFFFF0001FFFF0000LL;
    v215 = 0xFFFF0004FFFF0002LL;
    v216 = (int*)0xFFFF0006FFFF0005LL;
    v230 = 8;
    v217 = (__int64**)0xFFFF0008FFFF0007LL;
    v119 = GameRoutine_a4dbe0(v118, v117, 0, &v213);
    if (v119 != 0) {
      v120 = v119;
      v121 = ui_LayoutAccessor_FindTextBox(v209, "L_Temple00/T_Txt");
      if (v121 != 0) {
        GameRoutine_156c5d0(v121, v120, 0);
      }
    }
  }
  v122 = *((_QWORD*)v8 + 107);
  v210 = "L_Temple00";
  v211 = 10;
  if (v122 == 0) {
    goto LABEL_239;
  }
  v123 = std___1___shared_weak_count_lock(v122);
  if (v123 == 0) {
    goto LABEL_239;
  }
  v124 = *v209;
  v125 = v123;
  if (*v209 != 0) {
    GameRoutine_171aa40((void*)(&v213), v124, &v210);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v125 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v125 + 16LL))(v125);
    std___1___shared_weak_count___release_weak_alt1(v125);
  }
  if (v124 != 0 && (v126 = v214, v214 != 0)) {
    v127 = std___1___shared_weak_count_lock(v214);
    v128 = v213;
    v129 = v127;
    *(__n128*)&v130 = std___1___shared_weak_count___release_weak_alt1(v126);
    if (v129 != 0 && v128 != nullptr) {
      v131 = GameRoutine_12da200(v114, v130);
      v60 = v207;
      v132 = v129;
      if (v131 != 0) {
        GameRoutine_60a020(v128 + 131, v131);
      }
    LABEL_325:
      if (atomic_fetch_add((atomic_ullong* volatile)(v132 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v132 + 16LL))(v132);
        std___1___shared_weak_count___release_weak_alt1(v132);
      }
    }
    else {
      v60 = v207;
      v132 = v129;
      if (v129 != 0) {
        goto LABEL_325;
      }
    }
  }
  else {
  LABEL_239:
    v60 = v207;
  }
LABEL_240:
  v140 = v8 + 424;
  v141 = ui_LayoutAccessor_IsPaneVisible(v209, "N_Temple");
  ui_LayoutAccessor_SetPaneVisible(v209, "N_NoEvent", v60 & v106 & (v141 ^ 1u));
  if (v60 != 0) {
    v142 = "PosTemple_Up";
  }
  else {
    v142 = "PosTemple_Default";
  }
  LayoutAccessor_1562cf0(v209, v142);
  if (v106 != 0) {
    v143 = "PosBirthday_Up";
  }
  else {
    v143 = "PosBirthday_Default";
  }
  LayoutAccessor_1562cf0(v209, v143);
  LODWORD(v213) = 0;
  if (v111[1] != 0) {
    v145 = 0;
    v146 = 0;
    while (1) {
      if ((GameRoutine_12da4a0(v11, v144) & 1) != 0) {
        v147 = *v11;
        if (v147 >= 4 && v147 != 7) {
          v149 = GameRoutine_12da100(v11, v144);
          GameRoutine_12da200(v11, v150);
          GameRoutine_171b290(&v213, v8, v149);
          v145 = (int)v213;
          if ((int)v213 > 3) {
            break;
          }
        }
      }
      ++v146;
      v11 += 24;
      if (v146 >= v111[1]) {
        if (v145 != 0) {
          goto LABEL_258;
        }
        goto LABEL_257;
      }
    }
  }
  else {
  LABEL_257:
    GameRoutine_171b290(&v213, v8, "MID_Calendar_NoEvent");
    v145 = (int)v213;
  LABEL_258:
    if (v145 <= 3) {
      do {
        v151 = game_util_Format("L_Event%02d", v145);
        ui_LayoutAccessor_SetPaneVisible(v209, v151, 0);
        ++v145;
      } while (v145 != 4);
    }
  }
  v152 = &v3[v9];
  if (v3[v9 + 3] != 0) {
    v153 = v208;
    v154 = 0;
    v155 = 0;
    do {
      v156 = GameCalendar_12da840(v153);
      ++v154;
      ++v153;
      v155 += v156 & 1;
    } while (v154 < v152[3]);
    v157 = ui_LayoutAccessor_SetPaneVisible(v209, "N_Birth", v155 != 0);
    if (v155 != 0) {
      v158 = game_util_Format("L_Birth%02d", 0);
      LayoutAccessor_1560070_alt1((void*)(&v213), v209, v158);
      if (v214 != 0) {
        v159 = std___1___shared_weak_count_lock(v214);
        v160 = v213;
        if (v214 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v214);
        }
        if (v159 != 0 && v160 != nullptr) {
          v161 = v208;
          if (v152[3] != 0) {
            v162 = 0;
            v163 = 0;
            do {
              v164 = GameCalendar_12da840(v161);
              ++v162;
              ++v161;
              v163 += v164 & 1;
            } while (v162 < v152[3]);
            LayoutAccessor_155e830_alt1(v160, v163 != 0);
            if (v163 != 0) {
              if (v152[3] != 0) {
                v165 = v208;
                v166 = 0;
                while ((GameCalendar_12da840(v165) & 1) == 0) {
                  v167 = v152[3];
                  ++v166;
                  ++v165;
                  if (v166 >= v167) {
                    v168 = &v3[8 * v167 + v9];
                    goto LABEL_295;
                  }
                }
              }
              else {
                v168 = &v3[v9];
              LABEL_295:
                v165 = (__int64*)(v168 + 344);
              }
              v172 = *v165;
              if (v172 != 0) {
                v173 = GameRoutine_67ed20(v172);
                if (v173 != 0) {
                  v174 = v173;
                  v175 = ui_LayoutAccessor_FindTextBox(v160, "T_Txt");
                  if (v175 != 0) {
                    GameRoutine_156c5d0(v175, v174, 0);
                  }
                }
                v176 = ui_LayoutAccessor_FindPane(v160, "Face");
                if (v176 != 0) {
                  v176 = __dynamic_cast(v176, GameData_212d670[0],
                                        GameData_212d678[0], 0);
                }
                GameRoutine_1840a20(v176, 0, v172, 6, 1);
              }
            }
          }
          else {
            LayoutAccessor_155e830_alt1(v160, 0);
          }
        LABEL_303:
          if (atomic_fetch_add((atomic_ullong* volatile)(v159 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v159 + 16LL))(v159);
            std___1___shared_weak_count___release_weak_alt1(v159);
          }
        }
        else if (v159 != 0) {
          goto LABEL_303;
        }
      }
      v177 = game_util_Format("L_Birth%02d", 1);
      LayoutAccessor_1560070_alt1((void*)(&v213), v209, v177);
      if (v214 != 0) {
        v178 = std___1___shared_weak_count_lock(v214);
        v179 = v213;
        if (v214 != 0) {
          v157 = std___1___shared_weak_count___release_weak_alt1(v214);
        }
        if (v178 != 0 && v179 != nullptr) {
          if (v152[3] != 0) {
            v180 = v208;
            v181 = 0;
            v182 = 0;
            do {
              v183 = GameCalendar_12da840(v180);
              ++v181;
              ++v180;
              v182 += v183 & 1;
            } while (v181 < v152[3]);
            LayoutAccessor_155e830_alt1(v179, v182 > 1);
            if (v182 >= 2) {
              if (v152[3] != 0) {
                v184 = v208;
                v185 = 1;
                v186 = 0;
                do {
                  v188 = v184;
                  if ((GameCalendar_12da840(v184) & 1) != 0) {
                    if (v185 == 0) {
                      goto LABEL_330;
                    }
                    --v185;
                  }
                  v187 = v152[3];
                  ++v186;
                  v184 = v188 + 1;
                } while (v186 < v187);
                v189 = &v3[8 * v187 + v9];
              }
              else {
                v189 = &v3[v9];
              }
              v188 = v189 + 344;
            LABEL_330:
              v190 = *v188;
              if (*v188 != 0) {
                v191 = GameRoutine_67ed20(*v188);
                if (v191 != 0) {
                  v192 = v191;
                  v193 = ui_LayoutAccessor_FindTextBox(v179, "T_Txt");
                  if (v193 != 0) {
                    GameRoutine_156c5d0(v193, v192, 0);
                  }
                }
                v194 = ui_LayoutAccessor_FindPane(v179, "Face");
                if (v194 != 0) {
                  v194 = __dynamic_cast(v194, GameData_212d670[0],
                                        GameData_212d678[0], 0);
                }
                GameRoutine_1840a20(v194, 0, v190, 6, 1);
              }
            }
          }
          else {
            LayoutAccessor_155e830_alt1(v179, 0);
          }
        LABEL_337:
          if (atomic_fetch_add((atomic_ullong* volatile)(v178 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v178 + 16LL))(
                v178, *(long double*)&v157);
            v157 = std___1___shared_weak_count___release_weak_alt1(v178);
          }
        }
        else if (v178 != 0) {
          goto LABEL_337;
        }
      }
    }
  }
  else {
    v157 = ui_LayoutAccessor_SetPaneVisible(v209, "N_Birth", 0);
  }
  v196 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 40LL);
  v195 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 48LL);
  if (v196 != v195) {
    v197 = 0;
    do {
      if ((GameRoutine_12da660(v196, *(long double*)&v157) & 1) != 0) {
        v198 = game_util_Format("L_SideStory%02d", v197);
        LayoutAccessor_1560070_alt1((void*)(&v213), v140, v198);
        if (v214 != 0) {
          v199 = std___1___shared_weak_count_lock(v214);
          v200 = v213;
          if (v214 != 0) {
            v157 = std___1___shared_weak_count___release_weak_alt1(v214);
          }
          if (v199 != 0 && v200 != nullptr) {
            v201 = GameRoutine_12da700(v196, v8 + 535);
            if ((v201 & 1) != 0) {
              v202 = "Default";
            }
            else {
              v202 = "Disable";
            }
            LayoutAccessor_1562cf0(v200, v202);
            if (*(unsigned __int8*)(*(_QWORD*)v196 + 8LL) > 1u) {
              v203 = 1;
            }
            else {
              v203 = 3;
            }
            LayoutAccessor_1560070_alt1((void*)(&v213), v200, "L_State");
            if (v214 != 0) {
              v204 = std___1___shared_weak_count_lock(v214);
              if (v204 != 0) {
                v205 = v204;
                if (v213 != nullptr) {
                  GameRoutine_1595d90(v213, v203, 0, v201 & 1);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v205 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v205 + 16LL))(v205);
                  v157 = std___1___shared_weak_count___release_weak_alt1(v205);
                }
              }
              if (v214 != 0) {
                v157 = std___1___shared_weak_count___release_weak_alt1(v214);
              }
            }
            v140 = v8 + 424;
            ++v197;
          LABEL_364:
            if (atomic_fetch_add((atomic_ullong* volatile)(v199 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v199 + 16LL))(
                  v199, *(long double*)&v157);
              v157 = std___1___shared_weak_count___release_weak_alt1(v199);
            }
            goto LABEL_341;
          }
          if (v199 != 0) {
            goto LABEL_364;
          }
        }
      }
    LABEL_341:
      v196 += 8;
    } while (v196 != v195);
  }
  result = *(__int16**)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    return (__int16*)GameRoutine_18ae960(result, 0);
  }
  return result;
}

__n128 ProcCalendar_171b110(__int64 a1, char a2, char a3, __n128 result)
{
  __int64 v6;
  __int64 v7;
  const char* v8;
  long double v9;
  const char* v10;
  __int64 v11;
  __int64 v12;

  if (a1 != 0) {
    *(struct PseudoSret*)(&v11) = LayoutAccessor_1560070(a1, "L_ReminderIcon");
    if (v12 != 0) {
      v6 = std___1___shared_weak_count_lock(v12);
      v7 = v11;
      if (v12 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v12);
      }
      if (v6 == 0 || v7 == 0) {
        if (v6 == 0) {
          return result;
        }
        goto LABEL_22;
      }
      if ((a2 & 1) != 0) {
        v8 = "FadeOn";
      }
      else {
        v8 = "FadeOff";
      }
      if ((a3 & 1) != 0) {
        LANES128(result).n128_u32[0] = 1.0;
        LayoutAccessor_1562680_alt1(v7, v8, *(long double*)&result);
        v9 = LayoutAccessor_15638b0(v7, v8, 0);
        LayoutAccessor_1562f00(v7, v8, v9);
        LayoutAccessor_1563030(v7, v8, 0);
        if ((a2 & 1) != 0) {
          v10 = "On";
        }
        else {
          v10 = "Off";
        }
        LayoutAccessor_1562cf0(v7, v10);
        if ((a2 & 1) == 0) {
          goto LABEL_22;
        }
        v8 = "Wait";
        if ((LayoutAccessor_1563280(v7, "Wait", 0) & 1) != 0) {
          goto LABEL_22;
        }
      }
      else {
        if ((LayoutAccessor_15635a0(v7, v8, 1) & 1) != 0) {
          goto LABEL_22;
        }
        LayoutAccessor_1562cf0(v7, "On");
      }
      LANES128(result).n128_u32[0] = 1.0;
      LayoutAccessor_1562680_alt1(v7, v8, *(long double*)&result);
    LABEL_22:
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak_alt1(v6);
      }
    }
  }
  return result;
}

__int64 ProcCalendar_171ba80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  int v9;
  float v10;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  _BYTE v18[12];
  _BYTE v19[12];
  _BYTE v20[12];

  v1 = a1;
  v2 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] != 0) {
    v4 = *(_QWORD*)(v2 + 16);
    v3 = *(_QWORD*)(v2 + 24);
    *(_DWORD*)&v20[6] = 0;
    v5 = *(_WORD*)(v4 + 4);
    v6 = *(unsigned __int8*)(v4 + 6);
    v7 = *(unsigned __int8*)(v4 + 7);
    *(_WORD*)&v20[10] = 0;
    *(_DWORD*)&v19[6] = 0;
    *(_WORD*)&v19[10] = 0;
    LOWORD(v4) = *(_WORD*)(v3 - 364);
    v8 = *(unsigned __int8*)(v3 - 362);
    LOWORD(v3) = *(unsigned __int8*)(v3 - 361);
    *(_WORD*)v20 = v5;
    *(_WORD*)&v20[2] = v6;
    *(_WORD*)&v20[4] = v7;
    *(_WORD*)v19 = v4;
    *(_WORD*)&v19[2] = v8;
    *(_WORD*)&v19[4] = v3;
    a1 = Dir_70df40(v20, v19);
    if ((_DWORD)a1 != 0) {
      if ((int)a1 < 1) {
        v10 = -0.25f;
      }
      else {
        if ((unsigned int)a1 >= 0x5A0) {
          v9 = (unsigned int)a1 / 0x5A0;
        }
        else {
          v9 = 1;
        }
        v10 = vcvts_n_f32_u32(v9, 2u);
      }
    }
    else {
      v10 = 0.0f;
    }
    *(_WORD*)v18 = v5;
    *(_WORD*)&v18[2] = v6;
    *(_WORD*)&v18[4] = v7;
    *(_DWORD*)&v18[6] = 0;
    *(_WORD*)&v18[10] = 0;
    *(_QWORD*)(v1 + 162) = *(_QWORD*)v20;
    *(_DWORD*)(v1 + 170) = *(_DWORD*)&v20[8];
    if ((int)v10 != 0) {
      *(_WORD*)&v18[8] = 0;
      *(_WORD*)&v18[4] = (int)v10 + v7;
      a1 = Dir_70d7a0(v18);
    }
    v12 = *(_QWORD*)v18;
    *(_WORD*)v18 = v5;
    *(_WORD*)&v18[2] = v6;
    *(_WORD*)&v18[4] = v7;
    *(_QWORD*)(v1 + 174) = v12;
    LODWORD(v12) = *(_DWORD*)&v18[8];
    *(_DWORD*)&v18[6] = 0;
    *(_WORD*)&v18[10] = 0;
    *(_DWORD*)(v1 + 182) = v12;
    v13 = (int)(float)(v10 + v10);
    if (v13 != 0) {
      *(_WORD*)&v18[8] = 0;
      *(_WORD*)&v18[4] = v13 + v7;
      a1 = Dir_70d7a0(v18);
    }
    v14 = *(_QWORD*)v18;
    *(_WORD*)v18 = v5;
    *(_WORD*)&v18[2] = v6;
    *(_WORD*)&v18[4] = v7;
    *(_QWORD*)(v1 + 186) = v14;
    LODWORD(v14) = *(_DWORD*)&v18[8];
    *(_DWORD*)&v18[6] = 0;
    *(_WORD*)&v18[10] = 0;
    *(_DWORD*)(v1 + 194) = v14;
    v15 = (int)(float)(v10 * 3.0f);
    if (v15 != 0) {
      *(_WORD*)&v18[8] = 0;
      *(_WORD*)&v18[4] = v15 + v7;
      a1 = Dir_70d7a0(v18);
    }
    *(_QWORD*)(v1 + 198) = *(_QWORD*)v18;
    *(_DWORD*)(v1 + 206) = *(_DWORD*)&v18[8];
    *(_QWORD*)(v1 + 210) = *(_QWORD*)v19;
    *(_DWORD*)(v1 + 218) = *(_DWORD*)&v19[8];
    v16 = *(unsigned __int8*)(v1 + 160);
    if (*(_BYTE*)(v1 + 160) != 0) {
      v17 = 1;
    }
    else {
      v17 = 3;
    }
    *(_DWORD*)(v1 + 224) = v17;
    if (v16 != 0) {
      return game_sound_PlayCursorLeftCalendarSe(a1);
    }
    return game_sound_PlayCursorRightCalendarSe(a1);
  }
  if ((*(_BYTE*)(a1 + 160) & 1) == 0) {
    return game_sound_PlayCursorRightCalendarSe(a1);
  }
  return game_sound_PlayCursorLeftCalendarSe(a1);
}

__n128 ProcCalendar_171bd40(__int64 a1)
{
  __int16* v2;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  _BOOL4 v8;
  _BOOL4 v10;
  int v11;
  _BOOL4 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  char v18;

  LayoutAccessor_1562680_alt2(*(_QWORD*)(a1 + 152) + 848LL, (__int64)"In",
                              0x1.0000000000000p+0f);
  ProcCalendar_1718a60_alt1(*(_QWORD*)(a1 + 152));
  GameRoutine_171beb0(*(_QWORD*)(a1 + 152), *(_BYTE*)(a1 + 160));
  v2 = *(__int16**)(a1 + 152);
  v3 = v2[535];
  v4 = v2[536];
  v5 = v2[537];
  v6 = *(_QWORD*)GameData_212c6c0[0];
  v8 = *(_BYTE*)(*(_QWORD*)GameData_212c6c0[0] + 90LL) != 0 &&
       *(_WORD*)(*(_QWORD*)GameData_212c6c0[0] + 88LL) != 0;
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6c0[0] + 91LL) == 0) {
    v8 = false;
  }
  v10 = *(_BYTE*)(*(_QWORD*)GameData_212c6c0[0] + 96LL) != 0 &&
        *(_WORD*)(v6 + 94) != 0;
  if (*(_BYTE*)(v6 + 97) == 0) {
    v10 = false;
  }
  v11 = v10 + v8;
  v13 = *(_BYTE*)(v6 + 102) != 0 && *(_WORD*)(v6 + 100) != 0;
  if (*(_BYTE*)(v6 + 103) == 0) {
    v13 = false;
  }
  v14 = v11 + v13;
  v15 = *(_QWORD*)(v6 + 16);
  v16 = *(_QWORD*)(v6 + 24);
  if (v15 != v16) {
    while (v3 != *(unsigned __int16*)(v15 + 4) ||
           v4 != *(unsigned __int8*)(v15 + 6) ||
           v5 != *(unsigned __int8*)(v15 + 7)) {
      v15 += 368;
      if (v15 == v16) {
        goto LABEL_36;
      }
    }
  }
  v17 = v15 == v16 || v15 == 0;
  if (!v17 && (*(_BYTE*)v15 & 1) != 0) {
    v18 = 0;
  }
  else {
  LABEL_36:
    if (v14 == 3) {
      v18 = 2;
    }
    else {
      v18 = !GameRoutine_12dd260_alt1(v6, v3, v4, v5);
    }
  }
  return GameRoutine_1567760_alt1((__int64)"Reminder", v14 ^ 3u, v18);
}

#pragma GCC visibility pop
