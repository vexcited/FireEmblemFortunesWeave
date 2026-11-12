#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
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
__int64
ProcCalendar_Unknown139_alt1(__int64 a1,
                             __int64* a2) __asm__("ProcCalendar_Unknown139");
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
__int64
ProcCalendar_Unknown112_alt1(__int64 a1) __asm__("ProcCalendar_Unknown112");
__int16*
ProcCalendar_1718a60_alt2(__int16* result) __asm__("ProcCalendar_1718a60");
__n128 ProcCalendar_171b110_alt2(__int64 a1, char a2, char a3,
                                 __n128 result) __asm__("ProcCalendar_171b110");
__int64 ProcCalendar_171ba80(__int64 a1);
__n128 ProcCalendar_171bd40(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GuideBaseMenu_Unknown139_alt1(__int64, __int64*) __asm__(
    "GuideBaseMenu_Unknown139");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcCalendar_Unknown139(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void
    GameRoutine_171aa40_alt1(PSEUDO_X8) __asm__("GameRoutine_171aa40");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt2(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
ThermaeFile_950ec0_alt1(PSEUDO_X8, __int64) __asm__("ThermaeFile_950ec0");
__attribute__((swiftcall)) void
game_941ce0_alt1(PSEUDO_X8, __int64) __asm__("game_941ce0");
__int64 Dir_70e760_alt1(__int16*, __int16*) __asm__("Dir_70e760");
__int64 GameCalendar_12da840_alt1(__int64*) __asm__("GameCalendar_12da840");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_ffd760(int, __int64, __int64, char);
__int64
GameRoutine_12da100_alt1(unsigned __int8*) __asm__("GameRoutine_12da100");
__int64
GameRoutine_12da200_alt1(unsigned __int8*) __asm__("GameRoutine_12da200");
__int64 GameRoutine_12dd380_alt1(__int64, int, int, int,
                                 char) __asm__("GameRoutine_12dd380");
__int64 GameRoutine_12dd4e0_alt1(__int64, int, int,
                                 int) __asm__("GameRoutine_12dd4e0");
__int64 GameRoutine_156d580_alt1(__int64) __asm__("GameRoutine_156d580");
__int64 GameRoutine_1585290_alt1(__int64*, __int64,
                                 __int64) __asm__("GameRoutine_1585290");
__int64 GameRoutine_171ab70_alt1(__int64) __asm__("GameRoutine_171ab70");
__int64 GameRoutine_171b290_alt1(_DWORD*, __int64, char*, const char*, char,
                                 char) __asm__("GameRoutine_171b290");
__int64 GameRoutine_197cfe0_alt1(__int64,
                                 __int64) __asm__("GameRoutine_197cfe0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1562f00_alt1(__int64 result, __int64,
                                    float) __asm__("LayoutAccessor_1562f00");
__int64 LayoutAccessor_1563030_alt1(__int64 result, __int64,
                                    char) __asm__("LayoutAccessor_1563030");
__int64 LayoutAccessor_1563280_alt1(__int64*, __int64,
                                    char) __asm__("LayoutAccessor_1563280");
__int64 LayoutAccessor_15635a0_alt1(__int64*, __int64,
                                    char) __asm__("LayoutAccessor_15635a0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             _BYTE*) __asm__("Manager_136a920");
__int64 Manager_136afb0_alt1(__int64, unsigned int,
                             _BYTE*) __asm__("Manager_136afb0");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_IsPaneVisible_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_IsPaneVisible");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool GameRoutine_12da4a0_alt1(unsigned __int8*) __asm__("GameRoutine_12da4a0");
bool GameRoutine_12da660_alt1(__int64) __asm__("GameRoutine_12da660");
bool GameRoutine_12da700_alt1(__int64, __int64) __asm__("GameRoutine_12da700");
char* GameHr_12d9500(unsigned __int8*);
char* GameHr_12d9a60(unsigned __int8*);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_60a020_alt1(char*, const char*) __asm__("GameRoutine_60a020");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
float LayoutAccessor_15638b0_alt1(__int64*, const char*,
                                  char) __asm__("LayoutAccessor_15638b0");
void GameRoutine_1567760_alt2(const char*, unsigned int,
                              char) __asm__("GameRoutine_1567760");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void GameRoutine_1595d90_alt1(__int64*, int, char,
                              char) __asm__("GameRoutine_1595d90");
void GameRoutine_18ae960_alt1(_QWORD*, char) __asm__("GameRoutine_18ae960");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 __int64) __asm__("LayoutAccessor_1562060");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 ProcCalendar_Unknown112(__int16* a1);
void ProcCalendar_1718a60(__int64 a1);
__int64 ProcCalendar_171b110(__int64 result, char a2, char a3);
__attribute__((swiftcall)) void
GameRoutine_171aa40_alt2(PSEUDO_X8, unsigned __int64,
                         __int64) __asm__("GameRoutine_171aa40");
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1562680_alt1(__int64 result, unsigned int*,
                            float) __asm__("GameHr_1562680");
__int64 GameRoutine_1585290_alt2(__int64*, const char*,
                                 const char*) __asm__("GameRoutine_1585290");
__int64 GameRoutine_17beb80(__int64, __int64);
__int64
LayoutAccessor_1562cf0_alt2(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1562f00_alt2(__int64 result, unsigned int*,
                                    float) __asm__("LayoutAccessor_1562f00");
__int64 LayoutAccessor_1563030_alt2(__int64 result, unsigned int*,
                                    char) __asm__("LayoutAccessor_1563030");
__int64 game_gameui_1718860(__int64, const char*);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt2(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64 (*game_gameui_ScheduleMainQuest_vtable[])();
extern __int64 (*game_gameui_ScheduleQuest_vtable[])();
extern __int64 GameData_21ca000;
extern __int64 game_GameModeData_instance_;
extern char** msg_MessageManager_empty_text__ptr;
float LayoutAccessor_15638b0_alt2(__int64*, char*,
                                  char) __asm__("LayoutAccessor_15638b0");
void GameRoutine_171a220(__int64);
void game_17bf070(__int64*, __int16*);
void game_17c0d30(__int64*, __int64);
void ProcCalendar_Unknown85(__int64 a1);
__attribute__((swiftcall)) void
ThermaeFile_950ec0_alt2(PSEUDO_X8, __int16*) __asm__("ThermaeFile_950ec0");
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 game_facility_anonymous_197cfe0(__int64, __int64);
__int64 game_gameui_anonymous_171b290(_DWORD*, __int64, const char*,
                                      const char*, char, char);
__int64 ui_LayoutAccessor_IsPaneVisible_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_IsPaneVisible");
unsigned __int64 GameHr_1562680_alt2(unsigned __int64 result, char*,
                                     float) __asm__("GameHr_1562680");
void LayoutAccessor_1562060_alt2(__int64*, const char*,
                                 const char*) __asm__("LayoutAccessor_1562060");

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
  GameRoutine_1560070((void*)&v16, result + 848, "L_SelectDaily");
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
  GameRoutine_1560070((void*)&v16, v6, "L_ReminderIcon");
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
    GameRoutine_1560070((void*)&v16, v4 + 848, v10);
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
    GameRoutine_1560070((void*)&v16, v12, "L_ReminderIcon");
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

void ProcCalendar_Unknown85(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64** v18;
  __int64** v19;
  int v20;
  char* v21;
  __int64 v22;
  __int64* v23;
  const char* v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8* v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int16 v37;
  __int64 v38;
  __int16 v39;
  bool v40;
  char* v41;
  int v42;
  __int64** v43;
  int v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  char* v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 (**v65)();
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int128 v69;
  struct {
    __int64 (**v70)();
    __int64 v71;
    unsigned __int64 v72;
    unsigned __int64 v73;
    unsigned __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    int v87;
    int v88;
  } v70_;

  v1 = (__int64*)(a1 + 848);
  v2 = a1;
  GameHr_1562680_alt1(a1 + 848, (unsigned int*)"In", 0x1.0000000000000p+0f);
  v3 = LayoutAccessor_15638b0_alt2(v1, "In", 0);
  LayoutAccessor_1562f00_alt2((__int64)v1, (unsigned int*)"In", v3);
  LayoutAccessor_1563030_alt2((__int64)v1, (unsigned int*)"In", 0);
  v4 = *(_QWORD*)(v2 + 856);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v4);
    if (v5 != 0) {
      v6 = v5;
      if (*v1 != 0) {
        ControlCreator_13633c0(*v1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
    }
  }
  v7 = &GameData_21ca000;
  if (game_GameModeData_instance_ != 0) {
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v8 != 0) {
      v70_.v79 = 0;
      v70_.v80 = 0;
      v70_.v74 = 0;
      v70_.v75 = 0;
      v70_.v72 = 0;
      v70_.v73 = 0;
      v70_.v76 = 0;
      v70_.v77 = 0;
      v70_.v78 = 0;
      v70_.v70 = game_gameui_ScheduleMainQuest_vtable;
      v70_.v71 = 0;
      GameRoutine_17beb80((__int64)&v70_.v70, v8);
      game_17c0d30(v1, (__int64)&v70_.v70);
      v9 = ui_LayoutAccessor_FindAlignment(v1, "A_Spot");
      if (v9 != 0) {
        Alignment_56b600(v9);
      }
      v10 = ui_LayoutAccessor_FindAlignment(v1, "A_Limit");
      if (v10 != 0) {
        Alignment_56b600(v10);
      }
      v11 = *(_QWORD*)(v2 + 856);
      if (v11 != 0) {
        v12 = std___1___shared_weak_count_lock_alt1(v11);
        if (v12 != 0) {
          v13 = v12;
          if (*v1 != 0) {
            ControlCreator_13633c0(*v1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak_alt2(v13);
          }
        }
      }
      v14 = ui_LayoutAccessor_FindAlignment(v1, "A_MainQuest");
      if (v14 != 0) {
        Alignment_56b600(v14);
      }
      v15 = ui_LayoutAccessor_FindAlignment(v1, "A_Destination");
      if (v15 != 0) {
        Alignment_56b600(v15);
      }
      if ((v70_.v77 & 1) != 0 && v70_.v79 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v70_.v79);
      }
      v70_.v70 = game_gameui_ScheduleQuest_vtable;
      if ((v70_.v73 & 1) != 0 && v70_.v75 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v70_.v75);
      }
    }
  }
  v18 = *(__int64***)(*(_QWORD*)GameData_212c6c0[0] + 40LL);
  v19 = *(__int64***)(*(_QWORD*)GameData_212c6c0[0] + 48LL);
  if (v18 != v19) {
    v20 = 0;
    v67 = GameData_212e348 + 2;
    while (1) {
      if (GameRoutine_12da660_alt1((__int64)v18)) {
        v21 = game_util_Format_alt1("L_SideStory%02d", v20);
        LayoutAccessor_1560070_alt2((void*)(&v70_.v70), v1, v21);
        if (v70_.v71 != 0) {
          v22 = std___1___shared_weak_count_lock_alt1(v70_.v71);
          v23 = (__int64*)v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v70_.v71);
          }
          if (v22 != 0 && v23 != nullptr) {
            v68 = v22;
            LayoutAccessor_155e830((__int64)v23, 1);
            v24 = *(const char**)(**v18 + 64);
            if (v24 != nullptr && *v24 != 0) {
              v25 = *msg_MessageManager_instance__ptr[0];
              v70_.v75 = -1;
              v70_.v76 = -1;
              v70_.v77 = -1;
              v70_.v78 = -1;
              v70_.v79 = -1;
              v70_.v80 = -1;
              v70_.v81 = -1;
              v70_.v82 = -1;
              v70_.v83 = -1;
              v70_.v84 = -1;
              v70_.v85 = -1;
              v70_.v86 = -1;
              v70_.v70 = (__int64 (**)(void))v67;
              v70_.v71 = 0xFFFF0001FFFF0000LL;
              v70_.v72 = 0xFFFF0004FFFF0002LL;
              v70_.v73 = 0xFFFF0006FFFF0005LL;
              v70_.v87 = 8;
              v70_.v88 = 0;
              v70_.v74 = 0xFFFF0008FFFF0007LL;
              v26 = GameRoutine_a4dbe0_alt2(v25, v24, 0);
              if (v26 == nullptr) {
                goto LABEL_51;
              }
            }
            else {
              v26 = *msg_MessageManager_empty_text__ptr;
              if (*msg_MessageManager_empty_text__ptr == nullptr) {
                goto LABEL_51;
              }
            }
            v27 = ui_LayoutAccessor_FindTextBox_alt2(v23, "T_Txt");
            if (v27 != 0) {
              GameRoutine_156c5d0_alt1(v27, (__int64)v26, 0);
            }
          LABEL_51:
            v28 = **v18;
            v29 = *(_QWORD*)(v28 + 184);
            if (v29 != 0) {
              v30 = ui_LayoutAccessor_FindPane_alt2(v23, "Face");
              if (v30 != 0) {
                v30 = __dynamic_cast(v30, GameData_212d670[0],
                                     GameData_212d678[0], 0);
              }
              GameHr_1840a20(v30, 0, v29, 6u, 1);
              v28 = **v18;
            }
            v31 = *(unsigned __int8**)(v28 + 24);
            v32 = *v31;
            v33 = v31[2];
            if (v32 == v33 && v31[1] == v31[3]) {
              v34 = v7[342];
              if (v34 != 0) {
                v35 = 6;
                goto LABEL_61;
              }
              v37 = v31[6];
              v38 = 6;
              if (v31[1] != v31[3]) {
                v38 = 46;
              }
            LABEL_69:
              v39 = v31[v38 + 1 + v34];
              LOWORD(v69) = *(_WORD*)(v2 + 1070);
              WORD1(v69) = v37;
              *(_DWORD*)((char*)&v69 + 6) = 0;
              WORD5(v69) = 0;
              WORD2(v69) = v39;
              game_17bf070(v23, (__int16*)&v69);
              v40 = GameRoutine_12da700_alt1((__int64)v18, v2 + 1070);
              if (v40) {
                v41 = "Default";
              }
              else {
                v41 = "Disable";
              }
              LayoutAccessor_1562cf0_alt2((__int64)v23, (unsigned int*)v41);
              if (*((unsigned __int8*)*v18 + 8) > 1u) {
                v42 = 1;
              }
              else {
                v42 = 3;
              }
              LayoutAccessor_1560070_alt2((void*)(&v70_.v70), v23, "L_State");
              if (v70_.v71 != 0) {
                v43 = v19;
                v44 = v20;
                v45 = v1;
                v46 = v7;
                v47 = v2;
                v48 = std___1___shared_weak_count_lock_alt1(v70_.v71);
                if (v48 != 0) {
                  v49 = v48;
                  if (v70_.v70 != nullptr) {
                    GameRoutine_1595d90_alt1((__int64*)v70_.v70, v42, 1, v40);
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                    std___1___shared_weak_count___release_weak_alt2(v49);
                  }
                }
                v2 = v47;
                v7 = v46;
                v1 = v45;
                v20 = v44;
                v19 = v43;
                if (v70_.v71 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v70_.v71);
                }
              }
              GameRoutine_1585290_alt2(v23, "A_Info", "Bg");
              v50 = ui_LayoutAccessor_FindAlignment(v23, "A_State");
              if (v50 != 0) {
                Alignment_56b600(v50);
                v51 = v23[1];
                if (v51 != 0) {
                  v52 = std___1___shared_weak_count_lock_alt1(v51);
                  if (v52 != 0) {
                    v53 = v52;
                    if (*v23 != 0) {
                      ControlCreator_13633c0(*v23);
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
                      std___1___shared_weak_count___release_weak_alt2(v53);
                    }
                  }
                }
              }
              v22 = v68;
              ++v20;
            LABEL_91:
              if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                std___1___shared_weak_count___release_weak_alt2(v22);
              }
              goto LABEL_35;
            }
            v34 = v7[342];
            if (v34 != 0) {
              v35 = 46;
            LABEL_61:
              v36 = 4LL * *(unsigned __int8*)(v34 + 15);
            }
            else {
              v36 = 0;
              v35 = 46;
            }
            v37 = v31[v35 + v36];
            if (v32 == v33 && v31[1] == v31[3]) {
              v38 = 6;
              if (v34 == 0) {
                goto LABEL_69;
              }
            }
            else {
              v38 = 46;
              if (v34 == 0) {
                goto LABEL_69;
              }
            }
            v34 = 4LL * *(unsigned __int8*)(v34 + 15);
            goto LABEL_69;
          }
          if (v22 != 0) {
            goto LABEL_91;
          }
        }
      }
    LABEL_35:
      if (++v18 == v19) {
        ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v1, "N_SideStory",
                                              v20 > 0);
        if ((unsigned int)(v20 - 1) <= 2) {
          v54 = game_util_Format_alt1("L_SideStory%02d", v20);
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v1, v54, 0);
          if (v20 != 3) {
            v55 = game_util_Format_alt1("L_SideStory%02d", v20 + 1);
            ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v1, v55, 0);
            if (v20 != 2) {
              v56 = game_util_Format_alt1("L_SideStory%02d", v20 + 2);
              goto LABEL_101;
            }
          }
        }
        goto LABEL_102;
      }
    }
  }
  v56 = "N_SideStory";
LABEL_101:
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v1, v56, 0);
LABEL_102:
  game_gameui_1718860(v2, "L_TraningEvent");
  game_gameui_1718860(v2, "L_ThermaeEvent");
  v57 = ui_LayoutAccessor_FindPane_alt2(v1, "L_NoEvent/Icon");
  if (v57 != 0) {
    v58 = __dynamic_cast(v57, GameData_212d670[0], GameData_212d678[0], 0);
    if (v58 != 0) {
      Manager_136a920_alt1(ui_Manager_instance_ + 1264, v58, 0, 7u,
                           "IconSchedule_None");
    }
  }
  v59 = *(_QWORD*)(v2 + 856);
  *(_QWORD*)&v69 = "L_NoEvent";
  *((_QWORD*)&v69 + 1) = 9;
  if (v59 != 0) {
    v60 = std___1___shared_weak_count_lock_alt1(v59);
    if (v60 != 0) {
      v61 = *v1;
      v62 = v60;
      if (v61 != 0) {
        GameRoutine_171aa40_alt2((void*)((__int64*)&v70_.v70), v61,
                                 (__int64)&v69);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
        std___1___shared_weak_count___release_weak_alt2(v62);
      }
      if (v61 != 0) {
        v63 = v70_.v71;
        if (v70_.v71 != 0) {
          v64 = std___1___shared_weak_count_lock_alt1(v70_.v71);
          v65 = v70_.v70;
          v66 = v64;
          std___1___shared_weak_count___release_weak_alt2(v63);
          if (v66 != 0 && v65 != nullptr) {
            (*((void (**)(__int64 (**)(void), _QWORD))*v65 + 19))(v65, 0);
          }
          else if (v66 == 0) {
            goto LABEL_119;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
            std___1___shared_weak_count___release_weak_alt2(v66);
          }
        }
      }
    }
  }
LABEL_119:
  ProcCalendar_1718a60(v2);
  GameRoutine_171a220(v2);
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

__int64 ProcCalendar_Unknown112(__int16* a1)
{
  __int64 v2;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int16* v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  _BOOL4 v17;
  _BOOL4 v19;
  int v20;
  _BOOL4 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  const char* v31;
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;

  v2 = GameData_212c6c0[0];
  v3 = a1[535];
  v4 = a1[536];
  v5 = a1[537];
  v6 = *(_QWORD*)GameData_212c6c0[0];
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL);
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL);
  if (v7 != v8) {
    while (v3 != *(unsigned __int16*)(v7 + 4) ||
           v4 != *(unsigned __int8*)(v7 + 6) ||
           v5 != *(unsigned __int8*)(v7 + 7)) {
      v7 += 368;
      if (v7 == v8) {
        return 1;
      }
    }
  }
  if (v7 == v8 || v7 == 0) {
    return 1;
  }
  v11 = a1;
  if ((*(_BYTE*)v7 & 1) == 0) {
    if ((GameRoutine_12dd380_alt1(v6, v3, v4, v5, 0) & 1) != 0) {
      goto LABEL_18;
    }
    return 1;
  }
  if ((GameRoutine_12dd4e0_alt1(v6, v3, v4, v5) & 1) == 0) {
    return 1;
  }
LABEL_18:
  v12 = *(_QWORD*)v2;
  v13 = v11[535];
  v14 = v11[536];
  v15 = v11[537];
  v17 = *(_BYTE*)(*(_QWORD*)v2 + 90LL) != 0 &&
        *(_WORD*)(*(_QWORD*)v2 + 88LL) != 0;
  if (*(_BYTE*)(*(_QWORD*)v2 + 91LL) == 0) {
    v17 = false;
  }
  v19 = *(_BYTE*)(*(_QWORD*)v2 + 96LL) != 0 && *(_WORD*)(v12 + 94) != 0;
  if (*(_BYTE*)(v12 + 97) == 0) {
    v19 = false;
  }
  v20 = v19 + v17;
  v22 = *(_BYTE*)(v12 + 102) != 0 && *(_WORD*)(v12 + 100) != 0;
  if (*(_BYTE*)(v12 + 103) == 0) {
    v22 = false;
  }
  v23 = v20 + v22;
  v24 = *(_QWORD*)(v12 + 16);
  v25 = *(_QWORD*)(v12 + 24);
  if (v24 != v25) {
    while (v13 != *(unsigned __int16*)(v24 + 4) ||
           v14 != *(unsigned __int8*)(v24 + 6) ||
           v15 != *(unsigned __int8*)(v24 + 7)) {
      v24 += 368;
      if (v24 == v25) {
        goto LABEL_51;
      }
    }
  }
  if (v24 != v25 && v24 != 0 && (*(_BYTE*)v24 & 1) != 0) {
    v26 = 0;
  }
  else {
  LABEL_51:
    if (v23 == 3) {
      v26 = 2;
    }
    else {
      v26 = !GameRoutine_12dd260_alt1(v12, v13, v14, v15);
    }
  }
  GameRoutine_1567760_alt2("Reminder", v23 ^ 3, v26);
  v28 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
  v27 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
  if (v28 != v27) {
    while (v11[535] != *(unsigned __int16*)(v28 + 4) ||
           v11[536] != *(unsigned __int8*)(v28 + 6) ||
           v11[537] != *(unsigned __int8*)(v28 + 7)) {
      v28 += 368;
      if (v28 == v27) {
        return 13;
      }
    }
  }
  result = 13;
  if (v28 != v27 && v28 != 0) {
    LayoutAccessor_1560070_alt2((void*)(&v32_.v32), (__int64*)v11 + 106,
                                "L_SelectDaily");
    v29 = v32_.v33;
    if (v32_.v33 != 0) {
      v30 = std___1___shared_weak_count_lock_alt1(v32_.v33);
      if (v30 != 0) {
        v29 = v32_.v32;
      }
      else {
        v29 = 0;
      }
    }
    else {
      v30 = 0;
    }
    ProcCalendar_171b110(v29, *(_BYTE*)v28 & 1, 0);
    if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak_alt2(v30);
    }
    if (v32_.v33 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v32_.v33);
    }
    *((_BYTE*)v11 + 1082) = *(_BYTE*)v28 & 1;
    if ((*(_BYTE*)v28 & 1) != 0) {
      v31 = "SE_SYS_Reminder_On";
    }
    else {
      v31 = "SE_SYS_Reminder_Off";
    }
    snd_Fade_Fade_10c830_alt1((__int64)&v32_.v32, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)v31, (__int64)v31, (__int64)&v32_.v32, 0,
                        0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(&v32_.v32);
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

void ProcCalendar_Unknown139(__int64 a1, __int64* a2)
{
  int v4;
  int v5;
  int v6;
  _BOOL4 v8;
  _BOOL4 v10;
  int v11;
  _BOOL4 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  char v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  signed __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  signed __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  signed __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;

  GuideBaseMenu_Unknown139_alt1(a1, a2);
  v4 = *(__int16*)(a1 + 1070);
  v5 = *(__int16*)(a1 + 1072);
  v6 = *(__int16*)(a1 + 1074);
  v8 = *(_BYTE*)(GameData_21c9650 + 90) != 0 &&
       *(_WORD*)(GameData_21c9650 + 88) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 91) == 0) {
    v8 = false;
  }
  v10 = *(_BYTE*)(GameData_21c9650 + 96) != 0 &&
        *(_WORD*)(GameData_21c9650 + 94) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 97) == 0) {
    v10 = false;
  }
  v11 = v10 + v8;
  v13 = *(_BYTE*)(GameData_21c9650 + 102) != 0 &&
        *(_WORD*)(GameData_21c9650 + 100) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 103) == 0) {
    v13 = false;
  }
  v14 = v11 + v13;
  v15 = *(_QWORD*)(GameData_21c9650 + 16);
  v16 = *(_QWORD*)(GameData_21c9650 + 24);
  if (v15 != v16) {
    while (v4 != *(unsigned __int16*)(v15 + 4) ||
           v5 != *(unsigned __int8*)(v15 + 6) ||
           v6 != *(unsigned __int8*)(v15 + 7)) {
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
      v18 = !GameRoutine_12dd260_alt1(GameData_21c9650, v4, v5, v6);
    }
  }
  v19 = a2[1];
  v20 = a2[2];
  v21 = v14 ^ 3;
  if (v19 >= v20) {
    v23 = *a2;
    v24 = v19 - *a2;
    v25 = 1 - 0x3333333333333333LL * (v24 >> 3);
    if (v25 > 0x666666666666666LL) {
      goto LABEL_91;
    }
    v26 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v23) >> 3);
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
        goto LABEL_92;
      }
      v28 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                40 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + v24;
    *(_QWORD*)v29 = "Reminder";
    *(_QWORD*)(v29 + 8) = "MID_KeyHelp_Reminder";
    *(_BYTE*)(v29 + 28) = v18;
    v22 = v28 + v24 + 40;
    *(_BYTE*)(v29 + 16) = 1;
    *(_QWORD*)(v29 + 20) = 0x30000000BLL;
    *(_DWORD*)(v29 + 32) = v21;
    *(_DWORD*)(v29 + 36) = 3;
    memcpy_alt1(v28, v23, v24);
    *a2 = v28;
    a2[1] = v22;
    a2[2] = v28 + 40 * v27;
    if (v23 != 0) {
      v30 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v30, v23);
    }
  }
  else {
    *(_BYTE*)(v19 + 28) = v18;
    *(_QWORD*)v19 = "Reminder";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_Reminder";
    v22 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_QWORD*)(v19 + 20) = 0x30000000BLL;
    *(_DWORD*)(v19 + 32) = v21;
    *(_DWORD*)(v19 + 36) = 3;
  }
  v31 = a2[2];
  a2[1] = v22;
  if (v22 >= v31) {
    v33 = *a2;
    v34 = v22 - *a2;
    v35 = 1 - 0x3333333333333333LL * (v34 >> 3);
    if (v35 > 0x666666666666666LL) {
      goto LABEL_91;
    }
    v36 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v31 - v33) >> 3);
    if (2 * v36 > v35) {
      v35 = 2 * v36;
    }
    if (v36 >= 0x333333333333333LL) {
      v37 = 0x666666666666666LL;
    }
    else {
      v37 = v35;
    }
    if (v37 != 0) {
      if (v37 > 0x666666666666666LL) {
        goto LABEL_92;
      }
      v38 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                40 * v37, 16, 0);
    }
    else {
      v38 = 0;
    }
    v39 = v38 + v34;
    *(_QWORD*)v39 = "XHelp";
    *(_QWORD*)(v39 + 8) = 0;
    *(_BYTE*)(v39 + 16) = 0;
    *(_BYTE*)(v39 + 28) = 0;
    *(_QWORD*)(v39 + 32) = 0;
    v32 = v38 + v34 + 40;
    *(_QWORD*)(v39 + 20) = 0x300000002LL;
    memcpy_alt1(v38, v33, v34);
    *a2 = v38;
    a2[1] = v32;
    a2[2] = v38 + 40 * v37;
    if (v33 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v33);
    }
  }
  else {
    *(_BYTE*)(v22 + 16) = 0;
    *(_BYTE*)(v22 + 28) = 0;
    *(_QWORD*)(v22 + 32) = 0;
    *(_QWORD*)v22 = "XHelp";
    *(_QWORD*)(v22 + 8) = 0;
    *(_QWORD*)(v22 + 20) = 0x300000002LL;
    v32 = v22 + 40;
  }
  a2[1] = v32;
  if (*(_BYTE*)(a1 + 1068) != 1) {
    return;
  }
  v41 = a2[2];
  if (v32 >= v41) {
    v43 = *a2;
    v44 = v32 - *a2;
    v45 = 1 - 0x3333333333333333LL * (v44 >> 3);
    if (v45 <= 0x666666666666666LL) {
      v46 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v41 - v43) >> 3);
      if (2 * v46 > v45) {
        v45 = 2 * v46;
      }
      if (v46 >= 0x333333333333333LL) {
        v47 = 0x666666666666666LL;
      }
      else {
        v47 = v45;
      }
      if (v47 == 0) {
        v48 = 0;
      LABEL_85:
        v49 = v48 + v44;
        *(_QWORD*)v49 = &GameData_1a9f09e;
        *(_QWORD*)(v49 + 8) = "MID_KeyHelp_Cancel";
        *(_BYTE*)(v49 + 28) = 0;
        *(_QWORD*)(v49 + 32) = 0;
        *(_BYTE*)(v49 + 16) = 1;
        v50 = v48 + 40 * v47;
        v42 = v48 + v44 + 40;
        *(_QWORD*)(v49 + 20) = 0x300000001LL;
        memcpy_alt1(v48, v43, v44);
        *a2 = v48;
        a2[1] = v42;
        a2[2] = v50;
        if (v43 != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v43);
        }
        goto LABEL_89;
      }
      if (v47 <= 0x666666666666666LL) {
        v48 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                  40 * v47, 16, 0);
        goto LABEL_85;
      }
    LABEL_92:
      GameRoutine_60a210_alt1();
    }
  LABEL_91:
    GameRoutine_874520_alt1();
  }
  *(_BYTE*)(v32 + 28) = 0;
  *(_QWORD*)(v32 + 32) = 0;
  *(_QWORD*)v32 = &GameData_1a9f09e;
  *(_QWORD*)(v32 + 8) = "MID_KeyHelp_Cancel";
  v42 = v32 + 40;
  *(_BYTE*)(v32 + 16) = 1;
  *(_QWORD*)(v32 + 20) = 0x300000001LL;
LABEL_89:
  a2[1] = v42;
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

void ProcCalendar_1718a60(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int8* v2;
  unsigned __int8* v3;
  int v4;
  int v5;
  int v6;
  unsigned __int8* v7;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  __int64 v14;
  __int64* v15;
  char* v16;
  unsigned int v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  int v25;
  char* v26;
  __int64 v27;
  char* v28;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  int v42;
  int v43;
  char* v44;
  __int64 v45;
  char* v46;
  char* v47;
  __int64 v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  unsigned int v62;
  __int64 v63;
  __int16* v64;
  unsigned int v65;
  const char* v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  const char* v70;
  bool v71;
  __int16* v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  char v76;
  int v77;
  char v78;
  char* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  const char* v83;
  __int64 v84;
  __int64 v85;
  int v86;
  char* v87;
  int v88;
  char* v89;
  __int64 v90;
  __int64* v91;
  unsigned __int64 v92;
  char* v93;
  __int64 v94;
  __int64* v95;
  unsigned __int64 v96;
  char* v97;
  __int64 v98;
  __int64* v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  char v103;
  __int64 v104;
  unsigned __int8* v105;
  __int64 v106;
  int v107;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  char v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  unsigned __int8* v117;
  __int64 v118;
  int v119;
  int v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  unsigned __int8* v125;
  unsigned int v126;
  unsigned __int64 v127;
  unsigned __int8* v128;
  __int64 v129;
  const char* v130;
  __int64 v131;
  char* v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64* v141;
  __int64 v142;
  const char* v143;
  __int64 v144;
  __int64* v145;
  __int64* v146;
  int v147;
  char* v148;
  __int64 v149;
  __int64* v150;
  char* v151;
  __int64* v152;
  char v153;
  char* v154;
  char* v155;
  int v156;
  unsigned __int64 v157;
  char v158;
  unsigned int v159;
  const char* v161;
  const char* v162;
  unsigned int v163;
  __int64 v164;
  _BYTE* v165;
  char* v166;
  unsigned __int8* v167;
  __int64* v168;
  unsigned __int64 v169;
  int v170;
  char v171;
  char* v172;
  __int64 v173;
  __int64* v174;
  __int64* v175;
  unsigned __int64 v176;
  int v177;
  char v178;
  __int64* v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  unsigned __int8* v182;
  char* v183;
  __int64 v184;
  const char* v185;
  _QWORD* v186;
  char* v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  char* v191;
  __int64 v192;
  __int64* v193;
  __int64* v194;
  unsigned __int64 v195;
  unsigned int v196;
  char v197;
  __int64* v198;
  int v199;
  unsigned __int64 v200;
  unsigned __int64 v201;
  __int64* v202;
  unsigned __int8* v203;
  __int64 v204;
  char* v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  int v211;
  char* v212;
  __int64 v213;
  __int64* v214;
  bool v215;
  char* v216;
  int v217;
  __int64 v218;
  __int64 v219;
  int v220;
  int v221;
  __int64* v222;
  __int64* v223;
  struct {
    const char* v224;
    const char* v225;
  } v224_;
  int v226;
  struct {
    __int64* v227;
    __int64* v228;
    unsigned __int64 v229;
    int* v230;
    __int64** v231;
    __int64 v232;
    __int64 v233;
    __int64 v234;
    __int64 v235;
    __int64 v236;
    __int64 v237;
    __int64 v238;
    __int64 v239;
    __int64 v240;
    __int64 v241;
    __int64 v242;
    __int64 v243;
    __int64 v244;
  } v227_;

  v1 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    return;
  }
  v3 = *(unsigned __int8**)(v1 + 16);
  v2 = *(unsigned __int8**)(v1 + 24);
  if (v3 == v2) {
    return;
  }
  v4 = *(__int16*)(a1 + 1070);
  v5 = *(__int16*)(a1 + 1072);
  v6 = *(__int16*)(a1 + 1074);
  v7 = v3 + 8;
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
      return;
    }
  }
  if (v10 == v2) {
    return;
  }
  v11 = v10 + 8;
  v222 = (__int64*)(v10 + 352);
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
  v15 = (__int64*)(a1 + 848);
  if ((LayoutAccessor_1563280_alt1((__int64*)(a1 + 848), (__int64)"Wait", 1) &
       1) == 0) {
    GameHr_1562680_alt2(a1 + 848, "Wait", 0x1.0000000000000p+0f);
  }
  if (v13 != nullptr) {
    v16 = "DayFestival";
  }
  else {
    v16 = "DayDefault";
  }
  GameHr_1562680_alt2(a1 + 848, v16, 0x1.0000000000000p+0f);
  ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 848, "N_Festival", v13 != nullptr);
  if (v13 == nullptr) {
    GameHr_1562680_alt2(a1 + 848, "ColorDefault", 0x1.0000000000000p+0f);
    goto LABEL_73;
  }
  v17 = *v13;
  v18 = "ColorDefault";
  if (v17 <= 0xC &&
      (((1 << v17) & 0x1F9E) != 0 || v17 == 5 && (v13[1] & 1) == 0)) {
    v19 = *((_QWORD*)v13 + 1);
    if (v19 != 0) {
      v20 = *(unsigned __int8*)(v19 + 312);
      if (v20 < 0xC) {
        v18 = (char*)GameData_1bfa980 + GameData_1bfa980[v20];
      }
    }
  }
  GameHr_1562680_alt2(a1 + 848, v18, 0x1.0000000000000p+0f);
  v21 = *v13;
  v22 = 0;
  if (v21 > 0xC) {
    goto LABEL_42;
  }
  if (((1 << v21) & 0x1F9E) != 0) {
    goto LABEL_33;
  }
  if (v21 != 5) {
    goto LABEL_42;
  }
  if ((v13[1] & 1) == 0) {
  LABEL_33:
    v23 = *((_QWORD*)v13 + 1);
    if (v23 != 0) {
      v24 = *(unsigned __int8*)(v23 + 296);
      if (v24 == 2) {
        v25 = 5;
      }
      else {
        v25 = 0;
      }
      if (v24 == 1) {
        v22 = 7;
      }
      else {
        v22 = v25;
      }
    }
    else {
      v22 = 0;
    }
  LABEL_42:
    v26 = &GameData_1a9f09e;
    if (v21 <= 0xC &&
        (((1 << v21) & 0x1F9E) != 0 || v21 == 5 && (v13[1] & 1) == 0)) {
      v27 = *((_QWORD*)v13 + 1);
      if (v27 != 0) {
        v28 = *(char**)(v27 + 304);
        if (v28 != nullptr) {
          v26 = v28;
        }
      }
    }
    goto LABEL_47;
  }
  v22 = 0;
  v26 = &GameData_1a9f09e;
LABEL_47:
  if ((Manager_136afb0_alt1(ui_Manager_instance_ + 1264, v22, v26) & 1) == 0) {
    goto LABEL_67;
  }
  v36 = ui_Manager_instance_;
  v37 = ui_LayoutAccessor_FindPane_alt2((__int64*)(a1 + 848), "IconSymbol");
  if (v37 != 0) {
    v38 = __dynamic_cast(v37, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v38 = 0;
  }
  v39 = *v13;
  v40 = 0;
  if (v39 > 0xC) {
    goto LABEL_61;
  }
  if (((1 << v39) & 0x1F9E) != 0) {
    goto LABEL_53;
  }
  if (v39 != 5) {
    goto LABEL_61;
  }
  if ((v13[1] & 1) == 0) {
  LABEL_53:
    v41 = *((_QWORD*)v13 + 1);
    if (v41 != 0) {
      v42 = *(unsigned __int8*)(v41 + 296);
      if (v42 == 2) {
        v43 = 5;
      }
      else {
        v43 = 0;
      }
      if (v42 == 1) {
        v40 = 7;
      }
      else {
        v40 = v43;
      }
    }
    else {
      v40 = 0;
    }
  LABEL_61:
    v44 = &GameData_1a9f09e;
    if (v39 <= 0xC &&
        (((1 << v39) & 0x1F9E) != 0 || v39 == 5 && (v13[1] & 1) == 0)) {
      v45 = *((_QWORD*)v13 + 1);
      if (v45 != 0) {
        v46 = *(char**)(v45 + 304);
        if (v46 != nullptr) {
          v44 = v46;
        }
      }
    }
    goto LABEL_66;
  }
  v40 = 0;
  v44 = &GameData_1a9f09e;
LABEL_66:
  Manager_136a920_alt1(v36 + 1264, v38, 0, v40, v44);
LABEL_67:
  v47 = GameHr_12d9500(v13);
  if (v47 != nullptr) {
    v55 = (__int64)v47;
    v56 = ui_LayoutAccessor_FindTextBox_alt2((__int64*)(a1 + 848),
                                             "T_FestivalName");
    if (v56 != 0) {
      GameRoutine_156c5d0_alt1(v56, v55, 0);
    }
  }
  v57 = GameHr_12d9a60(v13);
  if (v57 != nullptr) {
    v58 = (__int64)v57;
    v59 = ui_LayoutAccessor_FindTextBox_alt2((__int64*)(a1 + 848),
                                             "T_FestivalHelp");
    if (v59 != 0) {
      GameRoutine_156c5d0_alt1(v59, v58, 0);
    }
  }
LABEL_73:
  GameRoutine_171ab70_alt1(a1);
  LayoutAccessor_1560070_alt2((void*)(&v227_.v227), (__int64*)(a1 + 848),
                              "L_Info");
  v223 = (__int64*)(a1 + 848);
  if (v227_.v228 == nullptr) {
    goto LABEL_110;
  }
  v60 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
  v61 = v227_.v227;
  if (v227_.v228 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v227_.v228);
  }
  if (v60 == 0 || v61 == nullptr) {
    if (v60 == 0) {
      goto LABEL_110;
    }
    goto LABEL_108;
  }
  v62 = 10000 * *(__int16*)(a1 + 1070) + 100 * *(__int16*)(a1 + 1072) +
        *(__int16*)(a1 + 1074);
  v63 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v64 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v64 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v65 = 10000 * *v64 + 100 * v64[1] + v64[2];
  if (v62 == v65) {
    LayoutAccessor_155e830((__int64)v61, 1);
    GameHr_1562680_alt2((unsigned __int64)v61, "Today", 0x1.0000000000000p+0f);
    v15 = (__int64*)(a1 + 848);
    v66 = "T_Txt";
  LABEL_83:
    v67 = ui_LayoutAccessor_FindTextBox_alt2(v61, v66);
    if (v67 != 0) {
      v68 = v67;
      v69 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt2(v61, v66);
      if (v69 != nullptr) {
        GameRoutine_190a0c0_alt1((float*)&v227_.v227, (__int64)&v224_.v224,
                                 (float*)&v226, v69, v69[27]);
        v70 = v224_.v224;
      }
      else {
        v70 = nullptr;
      }
      v76 = *(_BYTE*)(v68 + 88);
      *(_QWORD*)(v68 + 80) = v70;
      *(_BYTE*)(v68 + 88) = v76 | 0x10;
    }
    GameRoutine_1585290_alt2(v61, "A_Txt", "Bg");
    goto LABEL_108;
  }
  LayoutAccessor_155e830((__int64)v61, v62 > v65);
  v71 = v62 > v65;
  v15 = (__int64*)(a1 + 848);
  if (v71) {
    GameHr_1562680_alt2((unsigned __int64)v61, "Turn", 0x1.0000000000000p+0f);
    if (game_gmap_GmapClock_instance_ != 0) {
      v72 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v72 = (__int16*)v63;
    }
    v66 = "T_TurnNum";
    v73 = Dir_70e760_alt1(v72, (__int16*)(a1 + 1070));
    v74 = ui_LayoutAccessor_FindPane_alt2(v61, "T_TurnNum");
    if (v74 != 0) {
      v75 = __dynamic_cast(v74, GameData_212d670[0], GameData_212d690, 0);
      if (v75 != 0) {
        GameRoutine_156c910_alt1(v75, "%d", 1, v73);
      }
    }
    goto LABEL_83;
  }
LABEL_108:
  if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
    std___1___shared_weak_count___release_weak_alt2(v60);
  }
LABEL_110:
  game_941ce0_alt1((void*)((__int64*)&v224_.v224), a1 + 1070);
  if (v224_.v225 == v224_.v224) {
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v15, "N_Tranig", 0);
    v77 = 1;
    goto LABEL_185;
  }
  v77 = 1;
  v78 = GameHr_ffd760(1, (__int64)&GameData_1a9f09e, 0, 0);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v15, "N_Tranig", v78 & 1);
  if ((v78 & 1) == 0) {
    goto LABEL_185;
  }
  v79 = game_util_Format_alt1("L_Traning%02d", 0);
  LayoutAccessor_1560070_alt2((void*)(&v227_.v227), v15, v79);
  if (v227_.v228 != nullptr) {
    v80 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
    v81 = v227_.v227;
    if (v227_.v228 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v227_.v228);
    }
    if (v80 == 0 || v81 == nullptr) {
      if (v80 == 0) {
        goto LABEL_137;
      }
      goto LABEL_135;
    }
    v83 = v224_.v224;
    v82 = (__int64)v224_.v225;
    LayoutAccessor_155e830((__int64)v81, v224_.v225 != v224_.v224);
    if ((const char*)v82 == v83) {
    LABEL_135:
      if (atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
        std___1___shared_weak_count___release_weak_alt2(v80);
      }
      goto LABEL_137;
    }
    LayoutAccessor_1562060_alt2(v81, "T_Txt",
                                *(const char**)(*(_QWORD*)v224_.v224 + 32LL));
    v226 = 0;
    v84 = *(_QWORD*)v224_.v224;
    v227_.v227 = (__int64*)GameData_211cdf8;
    v227_.v228 = v81;
    v227_.v231 = &v227_.v227;
    v227_.v229 = v84 + 90;
    v227_.v230 = &v226;
    GameRoutine_156d580_alt1((__int64)&v227_.v227);
    if (v227_.v231 == &v227_.v227) {
      v85 = 4;
    }
    else {
      if (v227_.v231 == nullptr) {
        goto LABEL_133;
      }
      v85 = 5;
    }
    ((void (*)(void*))(*v227_.v231)[v85])(v227_.v231);
  LABEL_133:
    v86 = v226;
    if (v226 <= 3) {
      do {
        v87 = game_util_Format_alt1("IconMastery%02d", v86);
        ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v81, v87, 0);
        v88 = v226;
        v86 = ++v226;
      } while (v88 < 3);
    }
    goto LABEL_135;
  }
LABEL_137:
  v89 = game_util_Format_alt1("L_Traning%02d", 1);
  LayoutAccessor_1560070_alt2((void*)(&v227_.v227), v15, v89);
  if (v227_.v228 == nullptr) {
    goto LABEL_147;
  }
  v90 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
  v91 = v227_.v227;
  if (v227_.v228 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v227_.v228);
  }
  if (v90 != 0 && v91 != nullptr) {
    v92 = v224_.v225 - v224_.v224;
    LayoutAccessor_155e830((__int64)v91,
                           (unsigned __int64)(v224_.v225 - v224_.v224) > 8);
    if (v92 >= 9) {
      LayoutAccessor_1562060_alt2(
          v91, "T_Txt", *(const char**)(*((_QWORD*)v224_.v224 + 1) + 32LL));
      game_facility_anonymous_197cfe0((__int64)v91,
                                      *((_QWORD*)v224_.v224 + 1) + 90LL);
    }
  }
  else if (v90 == 0) {
    goto LABEL_147;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
    std___1___shared_weak_count___release_weak_alt2(v90);
  }
LABEL_147:
  v93 = game_util_Format_alt1("L_Traning%02d", 2);
  LayoutAccessor_1560070_alt2((void*)(&v227_.v227), v15, v93);
  if (v227_.v228 == nullptr) {
    goto LABEL_157;
  }
  v94 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
  v95 = v227_.v227;
  if (v227_.v228 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v227_.v228);
  }
  if (v94 != 0 && v95 != nullptr) {
    v96 = v224_.v225 - v224_.v224;
    LayoutAccessor_155e830((__int64)v95,
                           (unsigned __int64)(v224_.v225 - v224_.v224) > 0x10);
    if (v96 >= 0x11) {
      LayoutAccessor_1562060_alt2(
          v95, "T_Txt", *(const char**)(*((_QWORD*)v224_.v224 + 2) + 32LL));
      game_facility_anonymous_197cfe0((__int64)v95,
                                      *((_QWORD*)v224_.v224 + 2) + 90LL);
    }
  }
  else if (v94 == 0) {
    goto LABEL_157;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94);
    std___1___shared_weak_count___release_weak_alt2(v94);
  }
LABEL_157:
  v97 = game_util_Format_alt1("L_Traning%02d", 3);
  LayoutAccessor_1560070_alt2((void*)(&v227_.v227), v15, v97);
  if (v227_.v228 != nullptr) {
    v98 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
    v99 = v227_.v227;
    if (v227_.v228 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v227_.v228);
    }
    if (v98 != 0 && v99 != nullptr) {
      v100 = v224_.v225 - v224_.v224;
      LayoutAccessor_155e830(
          (__int64)v99, (unsigned __int64)(v224_.v225 - v224_.v224) > 0x18);
      if (v100 >= 0x19) {
        LayoutAccessor_1562060_alt2(
            v99, "T_Txt", *(const char**)(*((_QWORD*)v224_.v224 + 3) + 32LL));
        game_facility_anonymous_197cfe0((__int64)v99,
                                        *((_QWORD*)v224_.v224 + 3) + 90LL);
      }
      goto LABEL_165;
    }
    if (v98 != 0) {
    LABEL_165:
      if (atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
        std___1___shared_weak_count___release_weak_alt2(v98);
      }
    }
  }
  v101 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL);
  v102 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL);
  if (v101 != v102) {
    while (*(__int16*)(a1 + 1070) != *(unsigned __int16*)(v101 + 4) ||
           *(_WORD*)(a1 + 1072) != *(unsigned __int8*)(v101 + 6) ||
           *(_WORD*)(a1 + 1074) != *(unsigned __int8*)(v101 + 7)) {
      v101 += 368;
      if (v101 == v102) {
        goto LABEL_183;
      }
    }
  }
  v103 = 0;
  if (v101 != v102 && v101 != 0) {
    v104 = *(unsigned __int8*)(v101 + 1);
    if (*(_BYTE*)(v101 + 1) != 0) {
      v105 = (unsigned __int8*)(v101 + 8);
      v106 = v104 - 1;
      do {
        v107 = *v105;
        v105 += 24;
        v103 = v107 == 2;
      } while (v107 != 2 && v106-- != 0);
    }
    else {
    LABEL_183:
      v103 = 0;
    }
  }
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v15, "L_TraningEvent", v103);
  v77 = 0;
LABEL_185:
  v109 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v224_.v224 != nullptr) {
    v110 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v224_.v225 = v224_.v224;
    v111 = 128;
    if (*(_QWORD*)(v110 + 200) == 0) {
      v111 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v110 + v111, (__int64)v224_.v224);
  }
  ThermaeFile_950ec0_alt2((void*)((__int64*)&v227_.v227),
                          (__int16*)(a1 + 1070));
  if (v227_.v227 == v227_.v228) {
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v15, "N_Thermae", 0);
  LABEL_208:
    v121 = 1;
    v122 = v227_.v227;
    if (v227_.v227 == nullptr) {
      goto LABEL_212;
    }
    goto LABEL_209;
  }
  v112 = GameHr_ffd760(7, (__int64)&GameData_1a9f09e, 0, 0);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v15, "N_Thermae", v112 & 1);
  if ((v112 & 1) == 0) {
    goto LABEL_208;
  }
  v220 = v77;
  v113 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL);
  v114 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL);
  if (v113 != v114) {
    while (*(__int16*)(a1 + 1070) != *(unsigned __int16*)(v113 + 4) ||
           *(_WORD*)(a1 + 1072) != *(unsigned __int8*)(v113 + 6) ||
           *(_WORD*)(a1 + 1074) != *(unsigned __int8*)(v113 + 7)) {
      v113 += 368;
      if (v113 == v114) {
        goto LABEL_234;
      }
    }
  }
  v115 = 0;
  if (v113 != v114 && v113 != 0) {
    v116 = *(unsigned __int8*)(v113 + 1);
    if (*(_BYTE*)(v113 + 1) != 0) {
      v117 = (unsigned __int8*)(v113 + 8);
      v118 = v116 - 1;
      do {
        v119 = *v117;
        v117 += 24;
        v115 = v119 == 3;
      } while (v119 != 3 && v118-- != 0);
    }
    else {
    LABEL_234:
      v115 = 0;
    }
  }
  v146 = v227_.v227;
  v145 = v227_.v228;
  if (v227_.v227 == v227_.v228) {
    v147 = 0;
    while (1) {
    LABEL_308:
      v183 = game_util_Format_alt1("L_Thermae%02d", v147);
      LayoutAccessor_1560070_alt2((void*)(&v224_.v224), v223, v183);
      if (v224_.v225 != nullptr) {
        v184 = std___1___shared_weak_count_lock_alt1((__int64)v224_.v225);
        v185 = v224_.v224;
        if (v224_.v225 != nullptr) {
          std___1___shared_weak_count___release_weak_alt2((__int64)v224_.v225);
        }
        if (v184 != 0 && v185 != nullptr) {
          LayoutAccessor_155e830((__int64)v185, 0);
        LABEL_315:
          if (atomic_fetch_add((atomic_ullong* volatile)(v184 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v184 + 16LL))(v184);
            std___1___shared_weak_count___release_weak_alt2(v184);
          }
          goto LABEL_307;
        }
        if (v184 != 0) {
          goto LABEL_315;
        }
      }
    LABEL_307:
      if (++v147 == 6) {
        goto LABEL_253;
      }
    }
  }
  v147 = 0;
  do {
    if (v147 <= 5 && ((*(_BYTE*)(*v146 + 66) != 0) & ~v115) == 0) {
      v148 = game_util_Format_alt1("L_Thermae%02d", v147);
      LayoutAccessor_1560070_alt2((void*)(&v224_.v224), v15, v148);
      if (v224_.v225 != nullptr) {
        v149 = std___1___shared_weak_count_lock_alt1((__int64)v224_.v225);
        v150 = (__int64*)v224_.v224;
        if (v224_.v225 != nullptr) {
          std___1___shared_weak_count___release_weak_alt2((__int64)v224_.v225);
        }
        if (v149 != 0 && v150 != nullptr) {
          LayoutAccessor_155e830((__int64)v150, 1);
          LayoutAccessor_1562060_alt2(v150, "T_Txt",
                                      *(const char**)(*v146 + 32));
          if (*(_BYTE*)(*v146 + 66) != 0) {
            v151 = "Special";
          }
          else {
            v151 = "Default";
          }
          LayoutAccessor_1562cf0_alt2((__int64)v150, (unsigned int*)v151);
          v15 = (__int64*)(a1 + 848);
          ++v147;
        }
        else {
          v15 = (__int64*)(a1 + 848);
          if (v149 == 0) {
            goto LABEL_237;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v149 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v149 + 16LL))(v149);
          std___1___shared_weak_count___release_weak_alt2(v149);
        }
      }
    }
  LABEL_237:
    ++v146;
  } while (v146 != v145);
  if (v147 <= 5) {
    goto LABEL_308;
  }
LABEL_253:
  v15 = (__int64*)(a1 + 848);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v223, "L_ThermaeEvent", v115);
  v77 = v220;
  v121 = 0;
  v109 = (__int64*)fw_memory_g_heap_manager_ptr;
  v122 = v227_.v227;
  if (v227_.v227 != nullptr) {
  LABEL_209:
    v123 = *v109;
    v227_.v228 = v122;
    v124 = 128;
    if (*(_QWORD*)(v123 + 200) == 0) {
      v124 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v123 + v124, (__int64)v122);
  }
LABEL_212:
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v15, "N_Temple", 0);
  v125 = &v3[v9];
  v126 = v3[v9 + 1];
  if (v3[v9 + 1] == 0) {
    goto LABEL_256;
  }
  v127 = 0;
  v128 = v11;
  while (2) {
    if (*v128 != 7) {
    LABEL_215:
      ++v127;
      v128 += 24;
      if (v127 >= v126) {
        goto LABEL_256;
      }
      continue;
    }
    break;
  }
  if (!GameRoutine_12da4a0_alt1(v128)) {
    v126 = v125[1];
    goto LABEL_215;
  }
  v221 = v77;
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v223, "N_Temple", 1);
  v129 = GameRoutine_12da100_alt1(v128);
  if (v129 != 0) {
    v130 = (const char*)v129;
    v227_.v232 = -1;
    v227_.v233 = -1;
    v227_.v234 = -1;
    v227_.v235 = -1;
    v131 = *msg_MessageManager_instance__ptr[0];
    v227_.v236 = -1;
    v227_.v237 = -1;
    v227_.v238 = -1;
    v227_.v239 = -1;
    v227_.v240 = -1;
    v227_.v241 = -1;
    v227_.v242 = -1;
    v227_.v243 = -1;
    v227_.v227 = GameData_212e348 + 2;
    v227_.v228 = (__int64*)0xFFFF0001FFFF0000LL;
    v227_.v229 = 0xFFFF0004FFFF0002LL;
    v227_.v230 = (int*)0xFFFF0006FFFF0005LL;
    v227_.v244 = 8;
    v227_.v231 = (__int64**)0xFFFF0008FFFF0007LL;
    v132 = GameRoutine_a4dbe0_alt2(v131, v130, 0);
    if (v132 != nullptr) {
      v133 = (__int64)v132;
      v134 = ui_LayoutAccessor_FindTextBox_alt2(v223, "L_Temple00/T_Txt");
      if (v134 != 0) {
        GameRoutine_156c5d0_alt1(v134, v133, 0);
      }
    }
  }
  v135 = *(_QWORD*)(a1 + 856);
  v224_.v224 = "L_Temple00";
  v224_.v225 = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
  if (v135 == 0) {
    goto LABEL_255;
  }
  v136 = std___1___shared_weak_count_lock_alt1(v135);
  if (v136 == 0) {
    goto LABEL_255;
  }
  v137 = *v223;
  v138 = v136;
  if (*v223 != 0) {
    GameRoutine_171aa40_alt1((void*)((__int64*)&v227_.v227));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v138 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v138 + 16LL))(v138);
    std___1___shared_weak_count___release_weak_alt2(v138);
  }
  if (v137 != 0 && (v139 = v227_.v228, v227_.v228 != nullptr)) {
    v140 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
    v141 = v227_.v227;
    v142 = v140;
    std___1___shared_weak_count___release_weak_alt2((__int64)v139);
    if (v142 != 0 && v141 != nullptr) {
      v143 = (const char*)GameRoutine_12da200_alt1(v128);
      v77 = v221;
      v144 = v142;
      if (v143 != nullptr) {
        GameRoutine_60a020_alt2((__int64)(v141 + 131), v143);
      }
    LABEL_349:
      if (atomic_fetch_add((atomic_ullong* volatile)(v144 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v144 + 16LL))(v144);
        std___1___shared_weak_count___release_weak_alt2(v144);
      }
    }
    else {
      v77 = v221;
      v144 = v142;
      if (v142 != 0) {
        goto LABEL_349;
      }
    }
  }
  else {
  LABEL_255:
    v77 = v221;
  }
LABEL_256:
  v152 = (__int64*)(a1 + 848);
  v153 = ui_LayoutAccessor_IsPaneVisible_alt2(v223, "N_Temple");
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v223, "N_NoEvent",
                                        v77 & v121 & (v153 ^ 1));
  if (v77 != 0) {
    v154 = "PosTemple_Up";
  }
  else {
    v154 = "PosTemple_Default";
  }
  LayoutAccessor_1562cf0_alt2((__int64)v223, (unsigned int*)v154);
  if (v121 != 0) {
    v155 = "PosBirthday_Up";
  }
  else {
    v155 = "PosBirthday_Default";
  }
  LayoutAccessor_1562cf0_alt2((__int64)v223, (unsigned int*)v155);
  LODWORD(v227_.v227) = 0;
  if (v125[1] == 0) {
  LABEL_281:
    game_gameui_anonymous_171b290(&v227_.v227, a1, "MID_Calendar_NoEvent",
                                  "MID_Calendar_NoEvent", 0, 13);
    v156 = (int)v227_.v227;
    goto LABEL_282;
  }
  v156 = 0;
  v157 = 0;
  while (2) {
    if (GameRoutine_12da4a0_alt1(v11)) {
      v159 = *v11;
      if (v159 >= 4 && v159 != 7) {
        v161 = (const char*)GameRoutine_12da100_alt1(v11);
        v162 = (const char*)GameRoutine_12da200_alt1(v11);
        v163 = *v11;
        v158 = 0;
        if (v163 <= 0xC) {
          if (((1 << v163) & 0x1F9E) != 0) {
          LABEL_274:
            v164 = *((_QWORD*)v11 + 1);
            if (v164 != 0) {
              v165 = *(_BYTE**)(v164 + 288);
              if (v165 != nullptr) {
                v158 = *v165 != 0;
                goto LABEL_265;
              }
            }
          }
          else {
            if (v163 != 5) {
              goto LABEL_265;
            }
            if ((v11[1] & 1) == 0) {
              goto LABEL_274;
            }
          }
          v158 = 0;
        }
      LABEL_265:
        game_gameui_anonymous_171b290(&v227_.v227, a1, v161, v162, v158, v163);
        v156 = (int)v227_.v227;
        if ((int)v227_.v227 > 3) {
          goto LABEL_284;
        }
      }
    }
    ++v157;
    v11 += 24;
    if (v157 < v125[1]) {
      continue;
    }
    break;
  }
  if (v156 == 0) {
    goto LABEL_281;
  }
LABEL_282:
  if (v156 <= 3) {
    do {
      v166 = game_util_Format_alt1("L_Event%02d", v156);
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v223, v166, 0);
      ++v156;
    } while (v156 != 4);
  }
LABEL_284:
  v167 = &v3[v9];
  if (v3[v9 + 3] != 0) {
    v168 = v222;
    v169 = 0;
    v170 = 0;
    do {
      v171 = GameCalendar_12da840_alt1(v168);
      ++v169;
      ++v168;
      v170 += v171 & 1;
    } while (v169 < v167[3]);
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v223, "N_Birth", v170 != 0);
    if (v170 != 0) {
      v172 = game_util_Format_alt1("L_Birth%02d", 0);
      LayoutAccessor_1560070_alt2((void*)(&v227_.v227), v223, v172);
      if (v227_.v228 != nullptr) {
        v173 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
        v174 = v227_.v227;
        if (v227_.v228 != nullptr) {
          std___1___shared_weak_count___release_weak_alt2((__int64)v227_.v228);
        }
        if (v173 != 0 && v174 != nullptr) {
          v175 = v222;
          if (v167[3] != 0) {
            v176 = 0;
            v177 = 0;
            do {
              v178 = GameCalendar_12da840_alt1(v175);
              ++v176;
              ++v175;
              v177 += v178 & 1;
            } while (v176 < v167[3]);
            LayoutAccessor_155e830((__int64)v174, v177 != 0);
            if (v177 != 0) {
              if (v167[3] != 0) {
                v179 = v222;
                v180 = 0;
                while ((GameCalendar_12da840_alt1(v179) & 1) == 0) {
                  v181 = v167[3];
                  ++v180;
                  ++v179;
                  if (v180 >= v181) {
                    v182 = &v3[8 * v181 + v9];
                    goto LABEL_319;
                  }
                }
              }
              else {
                v182 = &v3[v9];
              LABEL_319:
                v179 = (__int64*)(v182 + 344);
              }
              v186 = (_QWORD*)*v179;
              if (v186 != nullptr) {
                v187 = GameHr_67ed20(v186);
                if (v187 != nullptr) {
                  v188 = (__int64)v187;
                  v189 = ui_LayoutAccessor_FindTextBox_alt2(v174, "T_Txt");
                  if (v189 != 0) {
                    GameRoutine_156c5d0_alt1(v189, v188, 0);
                  }
                }
                v190 = ui_LayoutAccessor_FindPane_alt2(v174, "Face");
                if (v190 != 0) {
                  v190 = __dynamic_cast(v190, GameData_212d670[0],
                                        GameData_212d678[0], 0);
                }
                GameHr_1840a20(v190, 0, (__int64)v186, 6u, 1);
              }
            }
          }
          else {
            LayoutAccessor_155e830((__int64)v174, 0);
          }
        LABEL_327:
          if (atomic_fetch_add((atomic_ullong* volatile)(v173 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v173 + 16LL))(v173);
            std___1___shared_weak_count___release_weak_alt2(v173);
          }
        }
        else if (v173 != 0) {
          goto LABEL_327;
        }
      }
      v191 = game_util_Format_alt1("L_Birth%02d", 1);
      LayoutAccessor_1560070_alt2((void*)(&v227_.v227), v223, v191);
      if (v227_.v228 != nullptr) {
        v192 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
        v193 = v227_.v227;
        if (v227_.v228 != nullptr) {
          std___1___shared_weak_count___release_weak_alt2((__int64)v227_.v228);
        }
        if (v192 != 0 && v193 != nullptr) {
          if (v167[3] != 0) {
            v194 = v222;
            v195 = 0;
            v196 = 0;
            do {
              v197 = GameCalendar_12da840_alt1(v194);
              ++v195;
              ++v194;
              v196 += v197 & 1;
            } while (v195 < v167[3]);
            LayoutAccessor_155e830((__int64)v193, v196 > 1);
            if (v196 >= 2) {
              if (v167[3] != 0) {
                v198 = v222;
                v199 = 1;
                v200 = 0;
                do {
                  v202 = v198;
                  if ((GameCalendar_12da840_alt1(v198) & 1) != 0) {
                    if (v199 == 0) {
                      goto LABEL_354;
                    }
                    --v199;
                  }
                  v201 = v167[3];
                  ++v200;
                  v198 = v202 + 1;
                } while (v200 < v201);
                v203 = &v3[8 * v201 + v9];
              }
              else {
                v203 = &v3[v9];
              }
              v202 = (__int64*)(v203 + 344);
            LABEL_354:
              v204 = *v202;
              if (*v202 != 0) {
                v205 = GameHr_67ed20((_QWORD*)*v202);
                if (v205 != nullptr) {
                  v206 = (__int64)v205;
                  v207 = ui_LayoutAccessor_FindTextBox_alt2(v193, "T_Txt");
                  if (v207 != 0) {
                    GameRoutine_156c5d0_alt1(v207, v206, 0);
                  }
                }
                v208 = ui_LayoutAccessor_FindPane_alt2(v193, "Face");
                if (v208 != 0) {
                  v208 = __dynamic_cast(v208, GameData_212d670[0],
                                        GameData_212d678[0], 0);
                }
                GameHr_1840a20(v208, 0, v204, 6u, 1);
              }
            }
          }
          else {
            LayoutAccessor_155e830((__int64)v193, 0);
          }
        LABEL_361:
          if (atomic_fetch_add((atomic_ullong* volatile)(v192 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v192 + 16LL))(v192);
            std___1___shared_weak_count___release_weak_alt2(v192);
          }
        }
        else if (v192 != 0) {
          goto LABEL_361;
        }
      }
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v223, "N_Birth", 0);
  }
  v210 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 40LL);
  v209 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 48LL);
  if (v210 != v209) {
    v211 = 0;
    do {
      if (GameRoutine_12da660_alt1(v210)) {
        v212 = game_util_Format_alt1("L_SideStory%02d", v211);
        LayoutAccessor_1560070_alt2((void*)(&v227_.v227), v152, v212);
        if (v227_.v228 != nullptr) {
          v213 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
          v214 = v227_.v227;
          if (v227_.v228 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v227_.v228);
          }
          if (v213 != 0 && v214 != nullptr) {
            v215 = GameRoutine_12da700_alt1(v210, a1 + 1070);
            if (v215) {
              v216 = "Default";
            }
            else {
              v216 = "Disable";
            }
            LayoutAccessor_1562cf0_alt2((__int64)v214, (unsigned int*)v216);
            if (*(unsigned __int8*)(*(_QWORD*)v210 + 8LL) > 1u) {
              v217 = 1;
            }
            else {
              v217 = 3;
            }
            LayoutAccessor_1560070_alt2((void*)(&v227_.v227), v214, "L_State");
            if (v227_.v228 != nullptr) {
              v218 = std___1___shared_weak_count_lock_alt1((__int64)v227_.v228);
              if (v218 != 0) {
                v219 = v218;
                if (v227_.v227 != nullptr) {
                  GameRoutine_1595d90_alt1(v227_.v227, v217, 0, v215);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v219 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v219 + 16LL))(v219);
                  std___1___shared_weak_count___release_weak_alt2(v219);
                }
              }
              if (v227_.v228 != nullptr) {
                std___1___shared_weak_count___release_weak_alt2(
                    (__int64)v227_.v228);
              }
            }
            v152 = (__int64*)(a1 + 848);
            ++v211;
          LABEL_388:
            if (atomic_fetch_add((atomic_ullong* volatile)(v213 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v213 + 16LL))(v213);
              std___1___shared_weak_count___release_weak_alt2(v213);
            }
            goto LABEL_365;
          }
          if (v213 != 0) {
            goto LABEL_388;
          }
        }
      }
    LABEL_365:
      v210 += 8;
    } while (v210 != v209);
  }
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    GameRoutine_18ae960_alt1(*(_QWORD**)GameData_212d8b0[0], 0);
  }
}

__int64 ProcCalendar_171b110(__int64 result, char a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64* v6;
  const char* v7;
  float v8;
  const char* v9;
  struct {
    __int64* v10;
    __int64 v11;
  } v10_;

  if (result != 0) {
    LayoutAccessor_1560070_alt2((void*)(&v10_.v10), (__int64*)result,
                                "L_ReminderIcon");
    result = v10_.v11;
    if (v10_.v11 != 0) {
      v5 = std___1___shared_weak_count_lock_alt1(v10_.v11);
      v6 = v10_.v10;
      result = v10_.v11;
      if (v10_.v11 != 0) {
        result = std___1___shared_weak_count___release_weak_alt2(v10_.v11);
      }
      if (v5 == 0 || v6 == nullptr) {
        if (v5 == 0) {
          return result;
        }
        goto LABEL_22;
      }
      if ((a2 & 1) != 0) {
        v7 = "FadeOn";
      }
      else {
        v7 = "FadeOff";
      }
      if ((a3 & 1) != 0) {
        GameHr_1562680((__int64)v6, v7, 0x1.0000000000000p+0f);
        v8 = LayoutAccessor_15638b0_alt1(v6, v7, 0);
        LayoutAccessor_1562f00_alt1((__int64)v6, (__int64)v7, v8);
        LayoutAccessor_1563030_alt1((__int64)v6, (__int64)v7, 0);
        if ((a2 & 1) != 0) {
          v9 = "On";
        }
        else {
          v9 = "Off";
        }
        result = LayoutAccessor_1562cf0_alt1((__int64)v6, v9);
        if ((a2 & 1) == 0) {
          goto LABEL_22;
        }
        v7 = "Wait";
        result = LayoutAccessor_1563280_alt1(v6, (__int64)"Wait", 0);
        if ((result & 1) != 0) {
          goto LABEL_22;
        }
      }
      else {
        result = LayoutAccessor_15635a0_alt1(v6, (__int64)v7, 1);
        if ((result & 1) != 0) {
          goto LABEL_22;
        }
        LayoutAccessor_1562cf0_alt1((__int64)v6, "On");
      }
      result = GameHr_1562680((__int64)v6, v7, 0x1.0000000000000p+0f);
    LABEL_22:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak_alt2(v5);
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
