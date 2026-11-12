#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD*);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1832b70(__int64, unsigned int, char);
__int64 GameRoutine_1835440(void);
__int64 GameRoutine_18357c0(__int64, char, char);
__int64 GameRoutine_183f160(__int64 result);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18aee60(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_20e3528[])();
extern __int64 (*GameData_20e3558[])();
extern __int64 (*GameData_20e3600[])();
extern __int64 (*game_map_BattleInfoWindow_vtable[])();
extern __int64 GameData_212d220[5];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21d3f58;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfd0[8];
extern int GameData_226b318;
__int64 BattleInfoWindow_DeletingDestructor(_QWORD* a1);
__int64 BattleInfoWindow_183eeb0(_QWORD* a1);
__int64 BattleInfoWindow_Unknown2(_QWORD* a1);
__int64 BattleInfoWindow_183f070(_QWORD* a1);
__int64 BattleInfoWindow_Unknown3(__int64 result);
void BattleInfoWindow_183fa50();
__int64 BattleInfoWindow_Unknown25(__int64 a1);
__int64 BattleInfoWindow_Unknown21(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 BattleInfoWindow_Unknown24(__int64 a1, char a2, char a3);
__int64 BattleInfoWindow_18403e0(__int64 a1);
__int64 BattleInfoWindow_1840400(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159da00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e348;
extern __int64* GameData_21318d0[2];
extern __int64* msg_MessageManager_instance__ptr[2];
__int64
BattleInfoWindow_1835140_alt1(__int64 a1, __int64 a2, unsigned int a3,
                              __int64 a4, char a5,
                              char a6) __asm__("BattleInfoWindow_1835140");
__int64
BattleInfoWindow_18352d0_alt1(__int64 a1, __int64 a2, unsigned int a3,
                              __int64 a4, char a5,
                              char a6) __asm__("BattleInfoWindow_18352d0");
__int64
BattleInfoWindow_1835440_alt1(__int64 a1, __int64 a2, int a3, int a4,
                              unsigned int a5,
                              __int64 a6) __asm__("BattleInfoWindow_1835440");
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, _QWORD, _QWORD,
                                                    long double);
__attribute__((swiftcall)) void GameRoutine_17c77c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_80c7f0(PSEUDO_X8, _QWORD);
__int64 AsyncLoadThumbImage_18b53c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 BattleInfo_797b50(_QWORD);
__int64 CombatHudWindow_1832b70(_QWORD, _QWORD, _QWORD);
__int64 FloatingHelp_18af120(_QWORD, _QWORD);
__int64 GameRoutine_1014aa0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1835ac0(_QWORD*, unsigned __int8);
__int64 GameRoutine_1836b00(_QWORD, _QWORD);
__int64 GameRoutine_1836ca0(_QWORD*, unsigned __int8);
__int64 GameRoutine_1837020(_QWORD, _QWORD);
__int64 GameRoutine_1837780(float*, char);
__int64 GameRoutine_1839560(__int64, char, unsigned int);
__int64 GameRoutine_1839880(_QWORD);
__int64 GameRoutine_183faa0(_QWORD, _QWORD);
__int64 GameRoutine_18af980(_QWORD, _QWORD);
__int64 GameRoutine_18b5800(_QWORD);
__int64 GameRoutine_18ca1f0(_QWORD, float);
__int64 LayoutAccessor_1562680_alt1(_QWORD, _QWORD,
                                    double) __asm__("LayoutAccessor_1562680");
__int64 LayoutAccessor_1563380(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__int64 strlen(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 ui_LayoutAccessor_SetPaneVisible_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_SetPaneVisible");
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d890[2];
extern __int64* game_g_empty_item_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void GameRoutine_1839980(__int64, char);
__int64
BattleInfoWindow_1834e50_alt1(__int64* a1, __int64 a2,
                              __int64 a3) __asm__("BattleInfoWindow_1834e50");
void BattleInfoWindow_1834fc0_alt1(__int64 a1, _BYTE* a2) __asm__(
    "BattleInfoWindow_1834fc0");
void BattleInfoWindow_183f160_alt1(__int64 a1) __asm__(
    "BattleInfoWindow_183f160");
__int64 BattleInfoWindow_Unknown4(__int64 a1);
_QWORD* GameRoutine_1014aa0_alt1(__int64) __asm__("GameRoutine_1014aa0");
__attribute__((swiftcall)) void
GameRoutine_1573280_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_1573280");
__attribute__((swiftcall)) void
GameRoutine_17c77c0_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_17c77c0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void
game_80c7f0_alt1(PSEUDO_X8, __int64 result) __asm__("game_80c7f0");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 CombatHudWindow_1832b70_alt1(__int64, unsigned int,
                                     char) __asm__("CombatHudWindow_1832b70");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_1837780_alt1(__int64*, char) __asm__("GameRoutine_1837780");
__int64 GameRoutine_1839880_alt1(__int64) __asm__("GameRoutine_1839880");
__int64 GameRoutine_1839980_alt1(__int64, char) __asm__("GameRoutine_1839980");
__int64 GameRoutine_18af980_alt1(__int64,
                                 __int64*) __asm__("GameRoutine_18af980");
__int64 GameRoutine_18b5800_alt1(__int64) __asm__("GameRoutine_18b5800");
__int64 GameRoutine_18ca1f0_alt1(__int64 result,
                                 float) __asm__("GameRoutine_18ca1f0");
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64
snd_fnd_WeakHandle_reset_alt1(__int64) __asm__("snd_fnd_WeakHandle_reset");
__int64 snd_stop_ffc40_alt1(__int64*, __int64) __asm__("snd_stop_ffc40");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool BattleInfo_797b50_alt1(__int64) __asm__("BattleInfo_797b50");
bool LayoutAccessor_1563380_alt1(__int64*, __int64,
                                 char) __asm__("LayoutAccessor_1563380");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameHr_1837020(__int64*, unsigned __int8);
void GameHr_18af120(_QWORD*, __int64*);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_159da00_alt1(__int64*, unsigned int,
                              unsigned int) __asm__("GameRoutine_159da00");
void GameRoutine_1835ac0_alt1(__int64*,
                              unsigned __int8) __asm__("GameRoutine_1835ac0");
void GameRoutine_1836b00_alt1(__int64*,
                              unsigned __int8) __asm__("GameRoutine_1836b00");
void GameRoutine_1836ca0_alt1(__int64*,
                              unsigned __int8) __asm__("GameRoutine_1836ca0");
void GameRoutine_183faa0_alt1(__int64*,
                              unsigned int) __asm__("GameRoutine_183faa0");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 _BYTE*) __asm__("LayoutAccessor_1562060");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 BattleInfoWindow_1834fc0(__int64* a1, _BYTE* a2);
__int64 BattleInfoWindow_1835140(__int64 a1, __int64* a2, unsigned int a3,
                                 __int64 a4, char a5, char a6);
__int64 BattleInfoWindow_18352d0(__int64 a1, __int64* a2, unsigned int a3,
                                 __int64 a4, char a5, char a6);
__int64 BattleInfoWindow_1835440(__int64 a1, const char* a2, int a3, int a4,
                                 char a5, _BYTE* a6);
__int64 BattleInfoWindow_183f160(__int64 result);
__attribute__((swiftcall)) void GameRoutine_15725c0(PSEUDO_X8, __int64*,
                                                    __int64*);
__attribute__((swiftcall)) void GameRoutine_182ba50(PSEUDO_X8);
__int64 BattleSide_7a2950(_QWORD*);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GameRoutine_1841000(__int64, int);
__int64 GameRoutine_7a3220(_QWORD*);
__int64 GameRoutine_7a3330(_QWORD*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 StatusClass_189d120(__int64*, _QWORD*, char, char, char, char, char);
__int64 Unit_6c8300(_QWORD*, char);
__int64 game_gameui_SetHpStock(__int64 result, __int64);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, __int64);
extern __int64* GameData_212d678[2];
extern __int64 GameData_212d690;
extern __int64 ui_Manager_instance_;
float LayoutAccessor_15637c0(__int64*, __int64, char);
float LayoutAccessor_15638b0(__int64*, const char*, char);
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);
void UnitName_19ab4a0(__int64, __int64);
void UnitName_19ab5c0(__int64, __int64);
__int64 BattleInfoWindow_18330f0(__int64 a1, char a2, _QWORD* a3);
void BattleInfoWindow_18331d0(__int64* a1, unsigned __int8 a2);
__int64 BattleInfoWindow_1833350(_QWORD* a1, unsigned __int8 a2);
void BattleInfoWindow_18334c0(__int64 a1, char a2, unsigned __int8 a3, int a4,
                              int a5, int a6);
void BattleInfoWindow_18337f0(__int64 a1, char a2, int a3, int a4, char a5);
__int64 BattleInfoWindow_1833920(__int64* a1, unsigned __int8 a2);
__int64 BattleInfoWindow_1833e80(__int64* a1, unsigned __int8 a2);
__int64 (***BattleInfoWindow_183faa0(__int64* a1, unsigned int a2))(_QWORD);
__attribute__((swiftcall)) void
GameRoutine_17c77c0_alt2(PSEUDO_X8, __int64*,
                         const char**) __asm__("GameRoutine_17c77c0");
__int64
AsyncLoadThumbImage_18b53c0_alt1(__int64, unsigned __int16*, __int64,
                                 char) __asm__("AsyncLoadThumbImage_18b53c0");
__int64 GameRoutine_157ecd0(__int64*, __int64, char);
char* HistoryLogInfo_6fb810(__int64);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
__int64 BattleInfoWindow_1834c80(__int64* a1, const char* a2, __int64 a3);
__int64 BattleInfoWindow_1834e50(__int64 a1, const char* a2,
                                 unsigned __int16* a3);

__int64 BattleInfoWindow_18330f0(__int64 a1, char a2, _QWORD* a3)
{
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;

  v4 = (__int64*)(a1 + 24);
  if ((a2 & 1) != 0) {
    v5 = "IconForcesSymbol_Player";
  }
  else {
    v5 = "IconForcesSymbol_Target";
  }
  result = ui_LayoutAccessor_FindPane_alt1(v4, (__int64)v5);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v7 = result;
      if (a3 != nullptr) {
        result = Unit_6c8300(a3, 0);
        if (result == 0) {
        LABEL_13:
          *(_BYTE*)(v7 + 88) = *(_BYTE*)(v7 + 88) & 0xFE | result & 1;
          return result;
        }
        v8 = *(_BYTE**)(result + 48);
        if (v8 != nullptr && *v8 != 0) {
          v9 = result;
          if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v8) & 1) != 0) {
            result = Manager_136a920(ui_Manager_instance_ + 1264, v7, 0, 5u,
                                     *(_BYTE**)(v9 + 48));
            goto LABEL_13;
          }
        }
      }
      result = 0;
      goto LABEL_13;
    }
  }
  return result;
}

void BattleInfoWindow_18331d0(__int64* a1, unsigned __int8 a2)
{
  __int64 v2;
  _QWORD* v4;
  char v5;
  __int64 v6;
  char v7;
  char v8;
  __int64 (***v9)(_QWORD);
  const char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18[2];
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v2 = a1[19];
  LOBYTE(v19_.v19) = a2;
  v4 = (_QWORD*)(v2 + 760LL * a2);
  v5 = (*(__int64 (**)(__int64*, __int64*))(*a1 + 40))(a1, &v19_.v19);
  v6 = v4[5];
  v7 = v5;
  if (v6 == 0 || *(_QWORD*)(v6 + 392) == 0) {
    v8 = 0;
    if ((*(_BYTE*)(v4[3] + 11277LL) & 0x80) != 0) {
      goto LABEL_25;
    }
    v9 = (__int64 (***)(_QWORD))v4[6];
    if (v9 == nullptr) {
      goto LABEL_25;
    }
    if (((**v9)(v9) & 1) == 0) {
      v8 = 0;
      goto LABEL_25;
    }
  }
  v10 = "L_Target_Name";
  if ((v7 & 1) != 0) {
    v10 = "L_Player_Name";
  }
  v18[0] = (__int64)v10;
  v18[1] = 13;
  GameRoutine_15725c0((void*)(&v19_.v19), a1 + 3, v18);
  if (v19_.v20 != 0) {
    v11 = std___1___shared_weak_count_lock_alt1(v19_.v20);
    v12 = v19_.v19;
    if (v19_.v20 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v19_.v20);
    }
    if (v11 != 0 && v12 != 0) {
      v13 = v4[5];
      if (v13 != 0) {
        UnitName_19ab4a0(v12, v13);
      }
      else {
        v14 = a1[19];
        v15 = *(_QWORD*)(v14 + 784);
        v16 = *(_QWORD*)(v14 + 808);
        if ((*(_DWORD*)(v15 + 11276) & 0x8000) != 0) {
          v17 = 0;
        }
        else {
          v17 = v16;
        }
        UnitName_19ab5c0(v12, v17);
      }
    LABEL_22:
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
      goto LABEL_24;
    }
    if (v11 != 0) {
      goto LABEL_22;
    }
  }
LABEL_24:
  v8 = 1;
LABEL_25:
  if ((v7 & 1) == 0) {
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)(a1 + 3),
                                          (__int64)"L_Target_Name", v8);
  }
}

__int64 BattleInfoWindow_1833350(_QWORD* a1, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v4;
  char v5;
  _QWORD* v6;
  const char* v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  v2 = a1[19];
  LOBYTE(v13_.v13) = a2;
  v4 = v2 + 760 * (unsigned int)a2;
  v5 = (*(__int64 (**)(_QWORD*, __int64**))(*a1 + 40LL))(a1, &v13_.v13);
  v6 = *(_QWORD**)(v4 + 40);
  if ((v5 & 1) != 0) {
    v7 = "L_Player_Class";
  }
  else {
    v7 = "L_Target_Class";
  }
  if (v6 == nullptr) {
    return ui_LayoutAccessor_SetPaneVisible_alt2((__int64)(a1 + 3), (__int64)v7,
                                                 0);
  }
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)(a1 + 3), (__int64)v7, 1);
  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v9 = a1[3];
      v10 = result;
      if (v9 != 0) {
        result = X8CALL_X0(__int64,
                           GameRoutine_182ba50((void*)((__int64*)&v13_.v13)));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak_alt1(v10);
      }
      if (v9 != 0) {
        result = v13_.v14;
        if (v13_.v14 != 0) {
          v11 = std___1___shared_weak_count_lock_alt1(v13_.v14);
          v12 = v13_.v13;
          result = v13_.v14;
          if (v13_.v14 != 0) {
            result = std___1___shared_weak_count___release_weak_alt1(v13_.v14);
          }
          if (v11 != 0 && v12 != nullptr) {
            result = StatusClass_189d120(v12, v6, 1, 1, 0, 0, 1);
          }
          else if (v11 == 0) {
            return result;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            return std___1___shared_weak_count___release_weak_alt1(v11);
          }
        }
      }
    }
  }
  return result;
}

void BattleInfoWindow_18334c0(__int64 a1, char a2, unsigned __int8 a3, int a4,
                              int a5, int a6)
{

#pragma clang fp contract(off)
  __int64* v11;
  const char* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  char* v18;
  const char* v19;
  __int64 v20;
  const char* v21;
  float v22;
  const char* v23;
  const char* v24;
  const char* v25;
  float v26;
  float v27;
  const char* v28;
  char v29[12];
  struct {
    char gap16_[5];
    _BYTE v30[3];
    char gap24_[56];
    __int64 vars0;
  } v30_;

  if (*(_QWORD*)(a1 + 152) == 0) {
    return;
  }
  v11 = (__int64*)(a1 + 24);
  if ((a2 & 1) != 0) {
    v12 = "L_PlayerHP_Gauge";
  }
  else {
    v12 = "L_TargetHP_Gauge";
  }
  v13 = LayoutAccessor_155fbe0_alt1(v11, v12);
  v14 = v13;
  v15 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 760 * (unsigned int)a3 + 40LL);
  strcpy(v29, "Color_Enemy");
  if (v15 != 0) {
    v16 = *(_QWORD*)(v15 + 440);
    if (v16 != 0) {
      v17 = *(unsigned __int8*)(v16 + 16);
      switch (v17) {
      case 3:
        v18 = &v29[10];
        *(_WORD*)((char*)&v30_.vars0 + 1) = 31084;
        v19 = "Color_Ally";
        break;
      case 2:
        v18 = &v29[11];
        LODWORD(v30_.vars0) = 1685219688;
        v19 = "Color_Third";
        break;
      case 0:
        v18 = v30_.v30;
        *(_DWORD*)((char*)&v30_.vars0 + 1) = 1919252833;
        v19 = "Color_Player";
        break;
      default:
        goto LABEL_14;
      }
      v20 = *(_QWORD*)v19;
      *v18 = 0;
      *(_QWORD*)v29 = v20;
    }
  }
LABEL_14:
  LayoutAccessor_1562cf0((__int64)v13, v29);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    v21 = "GaugeChangeType_Damage_Wait";
    if ((LayoutAccessor_1563280(v14, (__int64)"GaugeChangeType_Damage_Wait",
                                0) &
         1) != 0 ||
        (v21 = "GaugeChangeType_Heal_Wait",
         (LayoutAccessor_1563280(v14, (__int64)"GaugeChangeType_Heal_Wait", 0) &
          1) != 0)) {
      *(float*)(a1 + 200) = LayoutAccessor_15637c0(v14, (__int64)v21, 0);
    }
  }
  v22 = (float)a6;
  if (a4 <= a5) {
    v23 = "GaugeChangeType_Heal";
  }
  else {
    v23 = "GaugeChangeType_Damage";
  }
  if (a4 <= a5) {
    v24 = "GaugeUp";
  }
  else {
    v24 = "GaugeChangeUp";
  }
  if (a4 <= a5) {
    v25 = "GaugeChangeUp";
  }
  else {
    v25 = "GaugeUp";
  }
  LayoutAccessor_1562cf0((__int64)v14, v23);
  GameHr_1562680((__int64)v14, v24, 0x0.0p+0f);
  v26 = LayoutAccessor_15638b0(v14, v24, 0);
  LayoutAccessor_15636c0((__int64)v14, (__int64)v24, 0,
                         (float)((float)a4 / v22) * v26);
  GameHr_1562680((__int64)v14, v25, 0x0.0p+0f);
  v27 = LayoutAccessor_15638b0(v14, v25, 0);
  LayoutAccessor_15636c0((__int64)v14, (__int64)v25, 0,
                         (float)((float)a5 / v22) * v27);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    if (a4 <= a5) {
      v28 = "GaugeChangeType_Heal_Wait";
    }
    else {
      v28 = "GaugeChangeType_Damage_Wait";
    }
    GameHr_1562680((__int64)v14, v28, 0x1.0000000000000p+0f);
    LayoutAccessor_15636c0((__int64)v14, (__int64)v28, 0, *(float*)(a1 + 200));
    GameHr_1562680((__int64)v14, "GaugeCursor_Wait", 0x1.0000000000000p+0f);
    LayoutAccessor_15636c0((__int64)v14, (__int64)"GaugeCursor_Wait", 0,
                           *(float*)(a1 + 200));
  }
}

void BattleInfoWindow_18337f0(__int64 a1, char a2, int a3, int a4, char a5)
{

#pragma clang fp contract(off)
  __int64* v9;
  const char* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  const char* v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22[3];

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s2", "=w"));
  v9 = (__int64*)(a1 + 24);
  if ((a2 & 1) != 0) {
    v10 = "L_PlayerHP_Gauge";
  }
  else {
    v10 = "L_TargetHP_Gauge";
  }
  v11 = LayoutAccessor_155fbe0_alt1(v9, v10),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s2", "=w"));
  v12 = v11;
  if ((a5 & 1) != 0) {
    v13 = v11[1];
    if (v13 != 0) {
      v14 = std___1___shared_weak_count_lock_alt1(v13),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v14 != 0) {
        v15 = v14;
        if (*v12 != 0) {
          ControlCreator_13633c0(*v12),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v15),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
    }
  }
  if ((a2 & 1) != 0) {
    v16 = "GaugeL_Inside";
  }
  else {
    v16 = "GaugeR_Inside";
  }
  if ((a2 & 1) != 0) {
    v17 = "GaugeL_CursorHP";
  }
  else {
    v17 = "GaugeR_CursorHP";
  }
  v18 = ui_LayoutAccessor_GetPaneSize(v12, v16),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s2", "=w"));
  if ((a2 & 1) != 0) {
    v19 = -v18;
  }
  else {
    v19 = v18;
  }
  ui_LayoutAccessor_GetPaneTranslate(v12, (__int64)v17),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s2", "=w"));
  v22[1] = v20;
  v22[2] = v21;
  v22[0] = (float)((float)a3 / (float)a4) * v19;
  ui_LayoutAccessor_SetPaneTranslate(v12, (__int64)v17, (__int64)v22),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s2", "=w"));
}

__int64 BattleInfoWindow_1833920(__int64* a1, unsigned __int8 a2)
{
  __int64 v2;
  _QWORD* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  char v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned __int8* v20;
  int v21;
  bool v22;
  char v23;
  bool v24;
  const char* v25;
  const char* v26;
  const char* v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  char* v36;
  char* v37;
  __int64 v38;
  __int64* v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    _QWORD v55[2];
    unsigned __int64 v56;
    unsigned __int64 v57;
    int v58;
    int v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
  } v55_;

  v2 = a1[19];
  LOBYTE(v55_.v55[0]) = a2;
  v4 = (_QWORD*)(v2 + 760LL * a2);
  v5 = (*(__int64 (**)(__int64*, _QWORD*))(*a1 + 40))(a1, v55_.v55);
  v6 = v4[5];
  if (v6 == 0) {
    return ui_LayoutAccessor_SetPaneVisible_alt2(
        (__int64)(a1 + 3), (__int64)"Target_bgStatus", v6 != 0);
  }
  v7 = v4[3];
  v8 = v5;
  v9 = GameRoutine_7a3220(v4 + 2);
  v10 = GameRoutine_7a3330(v4 + 2);
  v11 = *(_DWORD*)(v7 + 11256);
  v12 = v10 * v9;
  if (v11 != 0) {
    v13 = v11 & 7;
    if (v11 >= 8) {
      v16 = (_BYTE*)(v7 + 3068);
      v17 = 0;
      v15 = 0;
      v18 = -(__int64)(v11 & 0xFFFFFFF8);
      do {
        v17 -= 8;
        if (*v16 == 4) {
          ++v15;
        }
        if (v16[64] == 4) {
          ++v15;
        }
        if (v16[128] == 4) {
          ++v15;
        }
        if (v16[192] == 4) {
          ++v15;
        }
        if (v16[256] == 4) {
          ++v15;
        }
        if (v16[320] == 4) {
          ++v15;
        }
        v22 = v16[384] == 4;
        v19 = (unsigned __int8)v16[448];
        v16 += 512;
        if (v22) {
          ++v15;
        }
        if (v19 == 4) {
          ++v15;
        }
      } while (v18 != v17);
      v14 = -v17;
      if (v13 == 0) {
        goto LABEL_30;
      }
    }
    else {
      v14 = 0;
      v15 = 0;
      if ((v11 & 7) == 0) {
        goto LABEL_30;
      }
    }
    v20 = (unsigned __int8*)(v7 + (v14 << 6) + 3068);
    do {
      v21 = *v20;
      v20 += 64;
      if (v21 == 4) {
        ++v15;
      }
      --v13;
    } while (v13 != 0);
    goto LABEL_30;
  }
  v15 = 0;
LABEL_30:
  v22 = v12 <= 0 || v12 == v15;
  v23 = !v22;
  v24 = (v8 & 1) == 0;
  if ((v8 & 1) != 0) {
    v25 = "L_Player_Attack";
  }
  else {
    v25 = "L_Target_Attack";
  }
  if ((v8 & 1) != 0) {
    v26 = "L_Player_Hit";
  }
  else {
    v26 = "L_Target_Hit";
  }
  if (v24) {
    v27 = "L_Target_Critical";
  }
  else {
    v27 = "L_Player_Critical";
  }
  v28 = LayoutAccessor_155fbe0_alt1(a1 + 3, v25);
  v29 = LayoutAccessor_155fbe0_alt1(a1 + 3, v26);
  v30 = LayoutAccessor_155fbe0_alt1(a1 + 3, v27);
  v31 = ui_LayoutAccessor_FindPane_alt1(v28, (__int64)"Icon");
  if (v31 != 0) {
    v31 = __dynamic_cast(v31, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1841000(v31, 0);
  v32 = ui_LayoutAccessor_FindPane_alt1(v29, (__int64)"Icon");
  if (v32 != 0) {
    v32 = __dynamic_cast(v32, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1841000(v32, 10);
  v33 = ui_LayoutAccessor_FindPane_alt1(v30, (__int64)"Icon");
  if (v33 != 0) {
    v33 = __dynamic_cast(v33, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1841000(v33, 13);
  if ((v23 & 1) != 0) {
    v34 = BattleSide_7a2950(v4 + 2);
    if ((unsigned int)v12 < 2) {
      v37 = game_util_Format_alt1("%d", v34);
    }
    else {
      v55_.v60 = -1;
      v55_.v61 = -1;
      v55_.v62 = -1;
      v55_.v63 = -1;
      v35 = *msg_MessageManager_instance__ptr[0];
      v55_.v64 = -1;
      v55_.v65 = -1;
      v55_.v66 = -1;
      v55_.v67 = -1;
      v55_.v68 = -1;
      v55_.v69 = -1;
      v55_.v70 = -1;
      v55_.v71 = -1;
      v55_.v55[0] = GameData_212e348 + 2;
      v55_.v55[1] = 0xFFFF0001FFFF0000LL;
      v55_.v56 = 0xFFFF0004FFFF0002LL;
      v55_.v57 = 0xFFFF0006FFFF0005LL;
      v55_.v72 = 8;
      v55_.v58 = -65529;
      v55_.v59 = -65528;
      v36 = GameRoutine_a4dbe0_alt1(v35, "MID_Sys_Multiply", 0);
      v37 = game_util_Format_alt1("%d%s%d", v34, v36, v12);
    }
    v52 = (__int64)v37;
    v53 = ui_LayoutAccessor_FindTextBox_alt1(v28, (__int64)"T_Num");
    if (v53 != 0) {
      GameRoutine_156c5d0_alt1(v53, v52, 0);
    }
  }
  else {
    v55_.v60 = -1;
    v55_.v61 = -1;
    v55_.v62 = -1;
    v55_.v63 = -1;
    v38 = *msg_MessageManager_instance__ptr[0];
    v55_.v64 = -1;
    v55_.v65 = -1;
    v55_.v66 = -1;
    v55_.v67 = -1;
    v55_.v68 = -1;
    v55_.v69 = -1;
    v55_.v70 = -1;
    v55_.v71 = -1;
    v55_.v56 = 0xFFFF0004FFFF0002LL;
    v55_.v57 = 0xFFFF0006FFFF0005LL;
    v55_.v58 = -65529;
    v55_.v59 = -65528;
    v39 = GameData_212e348 + 2;
    v55_.v55[0] = GameData_212e348 + 2;
    v55_.v55[1] = 0xFFFF0001FFFF0000LL;
    v55_.v72 = 8;
    v40 = GameRoutine_a4dbe0_alt1(v38, "MID_Sys_ValueEmpty", 0);
    if (v40 != nullptr) {
      v41 = (__int64)v40;
      v42 = ui_LayoutAccessor_FindTextBox_alt1(v28, (__int64)"T_Num");
      if (v42 != 0) {
        GameRoutine_156c5d0_alt1(v42, v41, 0);
      }
    }
    v43 = msg_MessageManager_instance__ptr[0];
    v55_.v60 = -1;
    v55_.v61 = -1;
    v55_.v62 = -1;
    v55_.v63 = -1;
    v55_.v64 = -1;
    v55_.v65 = -1;
    v55_.v66 = -1;
    v55_.v67 = -1;
    v44 = *msg_MessageManager_instance__ptr[0];
    v55_.v55[0] = v39;
    v55_.v55[1] = 0xFFFF0001FFFF0000LL;
    v55_.v72 = 8;
    v55_.v68 = -1;
    v55_.v69 = -1;
    v55_.v70 = -1;
    v55_.v71 = -1;
    v55_.v56 = 0xFFFF0004FFFF0002LL;
    v55_.v57 = 0xFFFF0006FFFF0005LL;
    v55_.v58 = -65529;
    v55_.v59 = -65528;
    v45 = GameRoutine_a4dbe0_alt1(v44, "MID_Sys_ValueEmpty", 0);
    if (v45 != nullptr) {
      v46 = (__int64)v45;
      v47 = ui_LayoutAccessor_FindTextBox_alt1(v29, (__int64)"T_Num");
      if (v47 != 0) {
        GameRoutine_156c5d0_alt1(v47, v46, 0);
      }
    }
    v48 = *v43;
    v55_.v60 = -1;
    v55_.v61 = -1;
    v55_.v62 = -1;
    v55_.v63 = -1;
    v55_.v64 = -1;
    v55_.v65 = -1;
    v55_.v66 = -1;
    v55_.v67 = -1;
    v55_.v68 = -1;
    v55_.v69 = -1;
    v55_.v70 = -1;
    v55_.v71 = -1;
    v55_.v55[0] = GameData_212e348 + 2;
    v55_.v55[1] = 0xFFFF0001FFFF0000LL;
    v55_.v56 = 0xFFFF0004FFFF0002LL;
    v55_.v57 = 0xFFFF0006FFFF0005LL;
    v55_.v72 = 8;
    v55_.v58 = -65529;
    v55_.v59 = -65528;
    v49 = GameRoutine_a4dbe0_alt1(v48, "MID_Sys_ValueEmpty", 0);
    if (v49 != nullptr) {
      v50 = (__int64)v49;
      v51 = ui_LayoutAccessor_FindTextBox_alt1(v30, (__int64)"T_Num");
      if (v51 != 0) {
        GameRoutine_156c5d0_alt1(v51, v50, 0);
      }
    }
    LayoutAccessor_1562cf0((__int64)v30, "Caution_Off");
  }
  return ui_LayoutAccessor_SetPaneVisible_alt2(
      (__int64)(a1 + 3), (__int64)"Target_bgStatus", v6 != 0);
}

__int64 BattleInfoWindow_1833e80(__int64* a1, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v4;
  const char* v5;
  __int64 result;
  __int64* v7;
  _BYTE v8[4];

  v2 = a1[19];
  v8[0] = a2;
  v4 = *(_QWORD*)(v2 + 760 * (unsigned int)a2 + 40);
  if (((*(__int64 (**)(__int64*, _BYTE*))(*a1 + 40))(a1, v8) & 1) != 0) {
    v5 = "L_PlayerHP_Gauge/L_GaugeL_HPStock";
  }
  else {
    v5 = "L_TargetHP_Gauge/L_GaugeR_HPStock";
  }
  result = ui_LayoutAccessor_SetPaneVisible_alt2((__int64)(a1 + 3), (__int64)v5,
                                                 v4 != 0);
  if (v4 != 0) {
    v7 = LayoutAccessor_155fbe0_alt1(a1 + 3, v5);
    return game_gameui_SetHpStock((__int64)v7, v4);
  }
  return result;
}

__int64 BattleInfoWindow_1834c80(__int64* a1, const char* a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  int v9;
  bool v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 result;
  const char* v23[2];
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  v3 = *a1;
  v23[0] = a2;
  v23[1] = (const char*)strlen_alt1(a2);
  GameRoutine_17c77c0_alt2((void*)(&v24_.v24), (__int64*)(v3 + 24), v23);
  if (v24_.v25 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v24_.v25);
    v8 = v24_.v24;
    if (v24_.v25 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v24_.v25);
    }
    if (v7 != 0 && v8 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 40LL))(v8, 1);
      v9 = *(unsigned __int8*)(v3 + 192);
      *(_BYTE*)(v8 + 1104) = v9;
      v10 = v9 == 0;
      v11 = 36;
      if (!v10) {
        v11 = 72;
      }
      v12 = *(_DWORD*)((char*)GameData_212da30 + v11);
      v13 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(v8 + 88),
                                               (__int64)"T_Txt");
      if (v13 != 0) {
        v14 = Pane_58f8a0_alt1(v13);
        if (v14 != 0) {
          *(_DWORD*)(v14 + 12) = v12;
        }
      }
      v15 = *(_QWORD*)a1[1];
      v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 56LL))(v3);
      *(_QWORD*)(v8 + 1096) = a3;
      *(_QWORD*)(v8 + 1080) = v15;
      v17 = HistoryLogInfo_6fb810(a3);
      if (v17 != nullptr) {
        v18 = (__int64)v17;
        v19 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(v8 + 88),
                                                 (__int64)"T_Txt");
        if (v19 != 0) {
          GameRoutine_156c5d0_alt1(v19, v18, 0);
        }
      }
      v20 = LayoutAccessor_155fbe0_alt1((__int64*)(v8 + 88), "L_Icon");
      GameRoutine_157ecd0(v20, a3, 0);
      *(_QWORD*)(v8 + 1088) = 0;
      *(_BYTE*)(v8 + 1105) = v16 & 1;
    }
    else if (v7 == 0) {
      goto LABEL_18;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
LABEL_18:
  v21 = LayoutAccessor_155fbe0_alt1((__int64*)(v3 + 24), a2);
  result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 144LL))(v3, v21);
  ++*(_DWORD*)a1[2];
  return result;
}

__int64 BattleInfoWindow_1834e50(__int64 a1, const char* a2,
                                 unsigned __int16* a3)
{
  __int64* v3;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64* v14;
  __int64 result;
  const char* v16[2];
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  v3 = *(__int64**)a1;
  v16[0] = a2;
  v16[1] = (const char*)strlen_alt1(a2);
  GameRoutine_17c77c0_alt2((void*)(&v17_.v17), v3 + 3, v16);
  if (v17_.v18 == 0) {
    goto LABEL_13;
  }
  v7 = std___1___shared_weak_count_lock_alt1(v17_.v18);
  v8 = v17_.v17;
  if (v17_.v18 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v17_.v18);
  }
  if (v7 != 0 && v8 != 0) {
    *(_BYTE*)(v8 + 1104) = 0;
    v9 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
    v10 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(v8 + 88),
                                             (__int64)"T_Txt");
    if (v10 != 0) {
      v11 = Pane_58f8a0_alt1(v10);
      if (v11 != 0) {
        *(_DWORD*)(v11 + 12) = v9;
      }
    }
    v12 = **(_QWORD**)(a1 + 8);
    v13 = (*(__int64 (**)(__int64*))(*v3 + 56))(v3);
    AsyncLoadThumbImage_18b53c0_alt1(v8, a3, v12, v13 & 1);
  }
  else if (v7 == 0) {
    goto LABEL_13;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
LABEL_13:
  v14 = LayoutAccessor_155fbe0_alt1(v3 + 3, a2);
  if (**(_BYTE**)(a1 + 16) == 1) {
    result = (*(__int64 (**)(__int64*, __int64*))(*v3 + 128))(v3, v14);
  }
  else {
    result = GameHr_1562680((__int64)v14, "KeyOff", 0x1.0000000000000p+0f);
  }
  ++**(_DWORD**)(a1 + 24);
  return result;
}

__int64 BattleInfoWindow_1834fc0(__int64* a1, _BYTE* a2)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11[2];
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  if (((*(__int64 (**)(__int64*))(*a1 + 48))(a1) & 1) != 0) {
    return ui_LayoutAccessor_SetPaneVisible_alt2(
        (__int64)(a1 + 3), (__int64)"L_Player_Equip01", 0);
  }
  v11[0] = (__int64)"L_Player_Equip01";
  v11[1] = 16;
  GameRoutine_17c77c0_alt1((void*)(&v12_.v12), a1 + 3, v11);
  if (v12_.v13 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v12_.v13);
    v6 = v12_.v12;
    if (v12_.v13 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v12_.v13);
    }
    if (v5 != 0 && v6 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 40LL))(v6, 1);
      *(_BYTE*)(v6 + 1104) = 0;
      v7 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v8 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(v6 + 88),
                                              (__int64)"T_Txt");
      if (v8 != 0) {
        v9 = Pane_58f8a0_alt1(v8);
        if (v9 != 0) {
          *(_DWORD*)(v9 + 12) = v7;
        }
      }
      GameRoutine_18b5800_alt1(v6);
      goto LABEL_13;
    }
    if (v5 != 0) {
    LABEL_13:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
  }
  v10 = LayoutAccessor_155fbe0_alt1(a1 + 3, "L_Player_Equip01");
  if (*a2 == 1) {
    return (*(__int64 (**)(__int64*, __int64*))(*a1 + 144))(a1, v10);
  }
  else {
    return GameHr_1562680((__int64)v10, "KeyOff", 0x1.0000000000000p+0f);
  }
}

__int64 BattleInfoWindow_1835140(__int64 a1, __int64* a2, unsigned int a3,
                                 __int64 a4, char a5, char a6)
{
  __int64* v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  struct {
    __int64* v17;
    __int64 v18;
  } v17_;
  struct {
    __int64* v19;
    __int64 v20;
  } v19_;

  v6 = *(__int64**)(a1 + 176);
  if (v6 == nullptr) {
    v6 = (__int64*)(a4 + 44);
    if (*(_WORD*)(a4 + 44) == 0) {
      v11 = *(unsigned int*)(a4 + 40);
      if ((v11 & 0x80000000) != 0) {
        v6 = &game_g_empty_item;
      }
      else {
        v6 = (__int64*)(*(_QWORD*)(a4 + 24) + 8 * v11 + 828);
      }
    }
  }
  *(_BYTE*)(a1 + 224) = a5 & 1;
  LayoutAccessor_1560070((void*)(&v19_.v19), a2, "L_ArrowL");
  if (v19_.v20 != 0) {
    v12 = std___1___shared_weak_count_lock_alt1(v19_.v20);
    if (v12 != 0) {
      v13 = v12;
      if (v19_.v19 != nullptr) {
        GameRoutine_159da00_alt1(v19_.v19, a3, 4u);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
    }
    if (v19_.v20 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v19_.v20);
    }
  }
  LayoutAccessor_1560070((void*)(&v17_.v17), a2, "L_ArrowR");
  result = v17_.v18;
  if (v17_.v18 != 0) {
    v15 = std___1___shared_weak_count_lock_alt1(v17_.v18);
    if (v15 != 0) {
      v16 = v15;
      if (v17_.v17 != nullptr) {
        GameRoutine_159da00_alt1(v17_.v17, a3, 5u);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1(v16);
      }
    }
    result = v17_.v18;
    if (v17_.v18 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v17_.v18);
    }
  }
  if ((a6 & 1) != 0 ||
      *(__int64**)(a1 + 160) != v6 && (*(_BYTE*)(a1 + 204) & 1) == 0) {
    result = GameHr_1562680((__int64)a2, "Change", 0x1.0000000000000p+0f);
  }
  *(_QWORD*)(a1 + 160) = v6;
  return result;
}

__int64 BattleInfoWindow_18352d0(__int64 a1, __int64* a2, unsigned int a3,
                                 __int64 a4, char a5, char a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;

  v6 = *(_QWORD*)(a1 + 184);
  v7 = *(_QWORD*)(a4 + 56);
  *(_BYTE*)(a1 + 225) = a5;
  if (v6 != 0) {
    v12 = v6;
  }
  else {
    v12 = v7;
  }
  LayoutAccessor_1560070((void*)(&v20_.v20), a2, "L_ArrowL");
  if (v20_.v21 != 0) {
    v13 = std___1___shared_weak_count_lock_alt1(v20_.v21);
    if (v13 != 0) {
      v14 = v13;
      if (v20_.v20 != nullptr) {
        GameRoutine_159da00_alt1(v20_.v20, a3, 6u);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak_alt1(v14);
      }
    }
    if (v20_.v21 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v20_.v21);
    }
  }
  LayoutAccessor_1560070((void*)(&v18_.v18), a2, "L_ArrowR");
  result = v18_.v19;
  if (v18_.v19 != 0) {
    v16 = std___1___shared_weak_count_lock_alt1(v18_.v19);
    if (v16 != 0) {
      v17 = v16;
      if (v18_.v18 != nullptr) {
        GameRoutine_159da00_alt1(v18_.v18, a3, 7u);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt1(v17);
      }
    }
    result = v18_.v19;
    if (v18_.v19 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v18_.v19);
    }
  }
  if ((a6 & 1) != 0 ||
      *(_QWORD*)(a1 + 168) != v12 && (*(_BYTE*)(a1 + 204) & 1) == 0) {
    result = GameHr_1562680((__int64)a2, "Change", 0x1.0000000000000p+0f);
  }
  *(_QWORD*)(a1 + 168) = v12;
  return result;
}

__int64 BattleInfoWindow_1835440(__int64 a1, const char* a2, int a3, int a4,
                                 char a5, _BYTE* a6)
{
  __int64* v10;
  __int64 result;
  char* v12;
  char* v13;
  __int64 v14;

  v10 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 24), a2);
  result = ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v10,
                                                 (__int64)"A_Cost", a5);
  if ((a5 & 1) != 0) {
    LayoutAccessor_1562060_alt1(v10, (__int64)"T_Cost_Title", a6);
    v12 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0],
                                  "MID_Sys_RightArrow", 0);
    v13 = game_util_Format_alt1("%d%s%d", a3, v12, a4);
    v14 = ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_Cost_Num");
    if (v14 != 0) {
      GameRoutine_156c5d0_alt1(v14, (__int64)v13, 0);
    }
    result = ui_LayoutAccessor_FindPane_alt1(v10, (__int64)"A_Cost");
    if (result != 0) {
      result =
          __dynamic_cast(result, GameData_212d670[0], GameData_21318d0[0], 0);
      if (result != 0) {
        return Alignment_56b600_alt1(result);
      }
    }
  }
  return result;
}

__int64 BattleInfoWindow_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_map_BattleInfoWindow_vtable;
  a1[30] = GameData_20e3528;
  a1[31] = GameData_20e3558;
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 3);
  a1[30] = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == a1) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(a1);
}

__int64 BattleInfoWindow_183eeb0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *(a1 - 30) = game_map_BattleInfoWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20e3528;
  a1[1] = GameData_20e3558;
  v3 = *(a1 - 29);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(a1 - 28);
  *(a1 - 29) = 0;
  *(a1 - 28) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 - 27);
  *a1 = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == v2) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(v2);
}

__int64 BattleInfoWindow_Unknown2(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_map_BattleInfoWindow_vtable;
  a1[30] = GameData_20e3528;
  a1[31] = GameData_20e3558;
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 3);
  a1[30] = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == a1) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 BattleInfoWindow_183f070(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(a1 - 30) = game_map_BattleInfoWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20e3528;
  a1[1] = GameData_20e3558;
  v3 = *(a1 - 29);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(a1 - 28);
  *(a1 - 29) = 0;
  *(a1 - 28) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 - 27);
  *a1 = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == v2) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(v2);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v2);
}

__int64 BattleInfoWindow_183f160(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v15;
  __int64 v16;
  _QWORD* v17;
  char v18;
  __int64 v19;
  char v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int16* v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int16* v43;
  _QWORD v44[2];
  struct {
    __int64 v45;
    __int64 v46;
  } v45_;

  v1 = result;
  if (*(_BYTE*)(result + 197) == 1 && *(_BYTE*)(result + 128) == 1) {
    v3 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 224LL))(result,
                                                                       1);
    result = LayoutAccessor_1563380_alt1((__int64*)(v1 + 24), v3, 0);
    if ((result & 1) != 0) {
      GameRoutine_1014aa0_alt1(*(_QWORD*)(v1 + 136));
      result = (__int64)GameRoutine_1014aa0_alt1(*(_QWORD*)(v1 + 144));
      *(_BYTE*)(v1 + 197) = 0;
    }
  }
  if (GameData_21d3f58 != 0 && *(int*)(GameData_21d3f58 + 256) > 0) {
    return result;
  }
  v4 = *(_QWORD*)(v1 + 152);
  if (v4 == 0) {
    v6 = *(_QWORD*)v1;
    return (*(__int64 (**)(__int64))(v6 + 32))(v1);
  }
  v5 = *(_QWORD*)(v4 + 40);
  v6 = *(_QWORD*)v1;
  if (v5 == 0) {
    return (*(__int64 (**)(__int64))(v6 + 32))(v1);
  }
  (*(void (**)(__int64))(v6 + 24))(v1);
  v44[0] = "L_OverBlaze";
  v44[1] = 11;
  GameRoutine_1573280_alt1((void*)(&v45_.v45), (__int64*)(v1 + 24), v44);
  if (v45_.v46 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v45_.v46);
    v8 = v45_.v45;
    if (v45_.v46 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v45_.v46);
    }
    if (v7 != 0 && v8 != 0) {
      GameRoutine_18ca1f0_alt1(
          v8,
          *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 104LL));
      goto LABEL_21;
    }
    if (v7 != 0) {
    LABEL_21:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
      }
    }
  }
  v9 = *(_QWORD**)(v1 + 152);
  v10 = v9[5];
  v11 = v9[100];
  if ((*(_BYTE*)(v9[98] + 11277LL) & 0x80) != 0) {
    v12 = 0;
  }
  else {
    v12 = v9[101];
  }
  v15 = *(_QWORD*)(v1 + 272) != v11 || *(_QWORD*)(v1 + 264) != v10 ||
        v12 != *(_QWORD*)(v1 + 280);
  if (v10 != 0 && ((v16 = *(_QWORD*)(v10 + 440), v17 = v9 + 2, v16 == 0)
                       ? (v18 = 9)
                       : (v18 = *(_BYTE*)(v16 + 16)),
                   ((1 << v18) & 0xF1) != 0) ||
      v11 != 0 && ((v19 = *(_QWORD*)(v11 + 440), v17 = v9 + 97, v19 == 0)
                       ? (v20 = 9)
                       : (v20 = *(_BYTE*)(v19 + 16)),
                   ((1 << v20) & 0xF1) != 0)) {
    v21 = (_QWORD*)((char*)v17 + 44);
    if (*((_WORD*)v17 + 22) == 0) {
      v22 = *((unsigned int*)v17 + 10);
      if ((v22 & 0x80000000) != 0) {
        v21 = &game_g_empty_item;
      }
      else {
        v21 = (__int64*)(v17[3] + 8 * v22 + 828);
      }
    }
    if (*v21 != *game_g_empty_item_ptr) {
      v15 |= v21 != *(__int64**)(v1 + 160);
    }
  }
  v23 = *(_QWORD*)(v1 + 184);
  if (v23 == 0) {
    v23 = v9[9];
  }
  if (((v23 != *(_QWORD*)(v1 + 288)) | v15 & 1) != 0 ||
      (*(_BYTE*)(v1 + 204) & 1) != 0 || (*(_BYTE*)(v1 + 296) & 1) != 0 ||
      (*(_BYTE*)(v1 + 297) & 1) != 0) {
    v26 = *(_QWORD*)v1;
    *(_BYTE*)(v1 + 193) = 0;
    (*(void (**)(__int64))(v26 + 208))(v1);
    v27 = *(_QWORD**)(v1 + 152);
    if ((*(_DWORD*)(v27[98] + 11276LL) & 0x8000) != 0) {
      v28 = 0;
    }
    else {
      v28 = v27[101];
    }
    *(_QWORD*)(v1 + 280) = v28;
    *(_QWORD*)(v1 + 264) = v27[5];
    *(_QWORD*)(v1 + 272) = v27[100];
    v29 = *(_QWORD*)(v1 + 184);
    if (v29 == 0) {
      v29 = v27[9];
    }
    *(_QWORD*)(v1 + 288) = v29;
    v30 = GameData_212cff0[0];
    (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v1 + 192LL))(
        v1, *(unsigned __int8*)(*GameData_212cff0[0] + 32), 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 64LL))(v1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 88LL))(v1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 96LL))(v1, 0);
    GameRoutine_183faa0_alt1((__int64*)v1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 104LL))(v1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 112LL))(v1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 120LL))(v1, 0);
    GameRoutine_1835ac0_alt1((__int64*)v1, 0);
    GameRoutine_1836b00_alt1((__int64*)v1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 184LL))(v1, 0);
    GameRoutine_1836ca0_alt1((__int64*)v1, 0);
    GameHr_1837020((__int64*)v1, 0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 64LL))(v1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 88LL))(v1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 96LL))(v1, 1);
    GameRoutine_183faa0_alt1((__int64*)v1, 1u);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 104LL))(v1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 112LL))(v1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 120LL))(v1, 1);
    GameRoutine_1835ac0_alt1((__int64*)v1, 1u);
    GameRoutine_1836b00_alt1((__int64*)v1, 1u);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 184LL))(v1, 1);
    GameRoutine_1836ca0_alt1((__int64*)v1, 1u);
    GameHr_1837020((__int64*)v1, 1u);
    GameRoutine_1837780_alt1((__int64*)v1, 0);
    GameRoutine_1839560(v1, *(_BYTE*)(*v30 + 32), 1u);
    v31 = *(_QWORD*)v1;
    v32 = *(_QWORD*)(v1 + 152);
    LOBYTE(v45_.v45) = 0;
    v33 = (*(__int64 (**)(__int64, __int64*))(v31 + 40))(v1, &v45_.v45);
    (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v1 + 80LL))(
        v1, v33 & 1, *(_QWORD*)(v32 + 40));
    v34 = *(_QWORD*)v1;
    v35 = *(_QWORD*)(v1 + 152);
    LOBYTE(v45_.v45) = 1;
    v36 = (*(__int64 (**)(__int64, __int64*))(v34 + 40))(v1, &v45_.v45);
    (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v1 + 80LL))(
        v1, v36 & 1, *(_QWORD*)(v35 + 800));
    if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(v1 + 304)) & 1) != 0) {
      snd_Fade_Fade_10c830_alt1((__int64)&v45_.v45, 0x0.0p+0f);
      snd_stop_ffc40_alt1((__int64*)(v1 + 304), (__int64)&v45_.v45);
      snd_Fade_Destroy_Fade_alt1(&v45_.v45);
      snd_fnd_WeakHandle_reset_alt1(v1 + 304);
    }
    if (BattleInfo_797b50_alt1(*(_QWORD*)(v1 + 152))) {
      v37 = *(_QWORD*)(*(_QWORD*)(v1 + 152) + 24LL);
      v38 = *(unsigned int*)(v37 + 11256);
      if ((_DWORD)v38 != 0) {
        v39 = (__int16*)(v37 + 3080);
        while (1) {
          v40 = *v39;
          v39 += 32;
          if (v40 <= 0) {
            break;
          }
          if (--v38 == 0) {
            goto LABEL_72;
          }
        }
        game_80c7f0_alt1((void*)((__int64)&v45_.v45),
                         (__int64)"VIB_HeartBeat_Fast");
        GameRoutine_112180_alt1(v1 + 304, (__int64)&v45_.v45);
      }
    LABEL_72:
      if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(v1 + 304)) & 1) == 0) {
        v41 = *(_QWORD*)(*(_QWORD*)(v1 + 152) + 24LL);
        v42 = *(unsigned int*)(v41 + 11256);
        if ((_DWORD)v42 != 0) {
          v43 = (__int16*)(v41 + 3082);
          while ((~*(_DWORD*)(v43 - 3) & 0x22) != 0 || *v43 < 1) {
            --v42;
            v43 += 32;
            if (v42 == 0) {
              goto LABEL_79;
            }
          }
          game_80c7f0_alt1((void*)((__int64)&v45_.v45),
                           (__int64)"VIB_HeartBeat_Slow");
          GameRoutine_112180_alt1(v1 + 304, (__int64)&v45_.v45);
        }
      }
    }
  LABEL_79:
    v25 = 1;
    v24 = v1;
  }
  else {
    v24 = v1;
    v25 = 0;
  }
  return GameRoutine_1839980_alt1(v24, v25);
}

__int64 BattleInfoWindow_Unknown3(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d220[0] == 0 ||
      *(int*)(*(_QWORD*)GameData_212d220[0] + 256LL) <= 0) {
    if ((GameRoutine_1832b70(result, 0, 0) & 1) != 0) {
      *(_BYTE*)(v1 + 204) = 1;
      GameRoutine_183f160(v1);
    }
    if ((*(_BYTE*)(v1 + 299) & 1) == 0) {
      *(_BYTE*)(v1 + 299) = 1;
      v2 = (__int64*)GameData_212d8b0[0];
      v3 = *(_QWORD*)GameData_212d8b0[0];
      if (*(_QWORD*)GameData_212d8b0[0] != 0) {
        *(_BYTE*)(v3 + 256) = 0;
        GameRoutine_18aee60(v3, v1 + 24);
        GameRoutine_18ae960(v3, 1);
        v4 = *(_QWORD*)(v3 + 240);
        *(_QWORD*)(v3 + 232) = 0;
        *(_QWORD*)(v3 + 240) = 0;
        if (v4 != 0) {
          std___1___shared_weak_count___release_weak(v4);
        }
        *(_BYTE*)(v3 + 257) = 0;
        *(_DWORD*)(v3 + 248) = -1;
        v5 = *v2;
        if (*v2 != 0) {
          *(_QWORD*)(v5 + 268) = 0x44048000C46D8000LL;
          *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
        }
      }
    }
    return GameRoutine_155e830(v1 + 24, 1);
  }
  return result;
}

__int64 BattleInfoWindow_Unknown4(__int64 a1)
{
  _QWORD* v2;
  char v4[4];
  struct {
    __int64* v5;
    int v6;
    char gap20_[4];
    __int64 v7;
  } v5_;

  CombatHudWindow_1832b70_alt1(a1, 1u, 0);
  if (*(_BYTE*)(a1 + 299) != 0) {
    *(_BYTE*)(a1 + 299) = 0;
    v2 = (_QWORD*)GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      if (*(_QWORD*)(GameData_21f1e08 + 152) != 0) {
        v5_.v7 = 0;
        v5_.v5 = GameData_212d890[0] + 2;
        v5_.v6 = 44;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
            (void*)(v4), GameData_21f1e08 + 8, &v5_.v5);
      }
      v2[20] = 0;
      GameHr_18af120(v2, (__int64*)(a1 + 24));
      GameRoutine_18af980_alt1((__int64)v2, (__int64*)(a1 + 24));
    }
  }
  if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 304)) & 1) != 0) {
    snd_Fade_Fade_10c830_alt1((__int64)&v5_.v5, 0x0.0p+0f);
    snd_stop_ffc40_alt1((__int64*)(a1 + 304), (__int64)&v5_.v5);
    snd_Fade_Destroy_Fade_alt1(&v5_.v5);
    snd_fnd_WeakHandle_reset_alt1(a1 + 304);
  }
  return GameRoutine_1839880_alt1(a1);
}

void BattleInfoWindow_183fa50()
{
  if (GameData_21d3f58 != 0) {
    *(_BYTE*)(GameData_21d3f58 + 296) = 1;
    if (GameData_21f1e08 != 0) {
      GameRoutine_18ae960(GameData_21f1e08, 0);
    }
  }
}

__int64 (***BattleInfoWindow_183faa0(__int64* a1, unsigned int a2))(_QWORD)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int8 v3;
  __int64 v5;
  __int64 (***result)(_QWORD);
  __int64 v7;
  char v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  const char* v22;
  const char* v23;
  __int64* v24;
  float v25;
  int v26;
  int v27;
  char v28[4];

  v2 = a1[19];
  v3 = a2;
  v28[0] = a2;
  v5 = v2 + 760LL * a2;
  result = (__int64 (***)(_QWORD))(*(__int64 (**)(__int64*, char*))(*a1 + 40))(
      a1, v28);
  v7 = *(_QWORD*)(v5 + 40);
  v8 = (char)result;
  if (v7 != 0 && *(_QWORD*)(v7 + 392) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(v5 + 24) + 11277LL) & 0x80) == 0 &&
          (result = *(__int64 (****)(_QWORD))(v5 + 48)) != nullptr &&
          ((unsigned __int8)(result =
                                 (__int64 (***)(_QWORD))(**result)(result)) &
           1) != 0) {
    v9 = *(_DWORD*)(v5 + 116);
    if (v9 >= 1) {
      v10 = *(_QWORD*)(v5 + 24);
      v11 = *(unsigned __int8*)(v10 + 3068);
      v12 = v10 + 3064;
      if (v11 != 1) {
        v15 = v10 + 3080;
        do {
          v16 = *(unsigned __int8*)(v15 + 52);
          v15 += 64;
        } while (v16 != 1);
        v13 = *(unsigned __int8*)(v5 + 32);
        v14 = *(__int16*)(v15 + 12LL * *(unsigned __int8*)(v5 + 32));
        goto LABEL_13;
      }
      v13 = *(unsigned __int8*)(v5 + 32);
      v14 = *(__int16*)(v10 + 12LL * *(unsigned __int8*)(v5 + 32) + 3080);
      do {
        v11 = *(unsigned __int8*)(v12 + 68);
        v12 += 64;
      LABEL_13:;
      } while (v11 != 24);
      v17 = *(__int16*)(v12 + 12LL * v13 + 16);
      if ((v8 & 1) != 0) {
        v18 = "T_PlayerHP_BeforeNum";
      }
      else {
        v18 = "T_TargetHP_BeforeNum";
      }
      v19 = ui_LayoutAccessor_FindPane_alt1(a1 + 3, (__int64)v18);
      if (v19 != 0) {
        v20 = __dynamic_cast(v19, GameData_212d670[0], GameData_212d690, 0);
        if (v20 != 0) {
          GameRoutine_156c910(v20, "%d", 1, v14);
        }
      }
      v21 = v8 & 1;
      if (v21 != 0) {
        v22 = "L_PlayerHP_Gauge";
      }
      else {
        v22 = "L_TargetHP_Gauge";
      }
      if (v21 != 0) {
        v23 = "T_PlayerHP_Num";
      }
      else {
        v23 = "T_TargetHP_Num";
      }
      v24 = LayoutAccessor_155fbe0_alt1(a1 + 3, v22);
      GameHr_1562680((__int64)v24, "GaugeSize", 0x0.0p+0f);
      v25 = LayoutAccessor_15638b0(v24, "GaugeSize", 0);
      if ((unsigned int)v9 >= 0x50) {
        v26 = 80;
      }
      else {
        v26 = v9;
      }
      v27 = v26 - 20;
      if ((unsigned int)v9 < 0x14) {
        v27 = 0;
      }
      LayoutAccessor_15636c0((__int64)v24, (__int64)"GaugeSize", 0,
                             (float)((float)v27 / 0x1.e000000000000p+5f) * v25);
      BattleInfoWindow_18334c0((__int64)a1, v21, v3, v14, v17, v9);
      BattleInfoWindow_18337f0((__int64)a1, v21, v17, v9, 1);
      result = (__int64 (***)(_QWORD))ui_LayoutAccessor_FindPane_alt1(
          a1 + 3, (__int64)v23);
      if (result != nullptr) {
        result = (__int64 (***)(_QWORD))__dynamic_cast(
            result, GameData_212d670[0], GameData_212d690, 0);
        if (result != nullptr) {
          return (__int64 (***)(_QWORD))GameRoutine_156c910((__int64)result,
                                                            "%d", 1, v17);
        }
      }
    }
  }
  return result;
}

__int64 BattleInfoWindow_Unknown25(__int64 a1)
{
  unsigned int v1;
  __int64 result;
  __int64 v4;
  unsigned __int16* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  __int64 v12;
  int v13;
  __int64 v15;
  unsigned int v17;
  int v18;

  if (GameData_21cd0e8 == 0) {
    return 0;
  }
  v1 = *(unsigned __int8*)(GameData_21cd0e8 + 32);
  if (v1 > 0x1B) {
    return 0;
  }
  result = 1;
  if (((1 << v1) & 0x370) == 0) {
    if (((1 << v1) & 0x8000008) != 0) {
      return result;
    }
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 152);
  if (v4 == 0) {
    return 0;
  }
  v5 = (unsigned __int16*)(v4 + 60);
  if (*(_WORD*)(v4 + 60) != 0) {
  LABEL_8:
    v7 = *v5;
    if (v7 == 0) {
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  v6 = *(unsigned int*)(v4 + 56);
  if ((v6 & 0x80000000) == 0) {
    v5 = (unsigned __int16*)(*(_QWORD*)(v4 + 40) + 8 * v6 + 828);
    goto LABEL_8;
  }
  v7 = (unsigned __int16)game_g_empty_item;
  if ((_WORD)game_g_empty_item != 0) {
  LABEL_9:
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v7);
    v9 = *(unsigned __int8*)(v8 + 72);
    v10 = *(unsigned __int8*)(v8 + 73);
    if (v9 <= 7 && v10 == 7) {
      return result;
    }
  }

LABEL_13:
  v12 = *(_QWORD*)(v4 + 72);
  if (v12 == 0 ||
      (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v12 + 104)) & 1) ==
          0) {
    return 0;
  }
  v13 = *(unsigned __int8*)(v12 + 106);
  if (*(_BYTE*)(v12 + 106) == 0 || v13 == 6) {
    v15 = *(_QWORD*)(v12 + 576);
    if (v15 != 0) {
      goto LABEL_28;
    }
    return 0;
  }
  if (v13 == 1) {
    v15 = *(_QWORD*)(v12 + 576);
    if (v15 == 0) {
      return result;
    }
  LABEL_28:
    if (*(unsigned __int8*)(v15 + 72) <= 7u && *(_BYTE*)(v15 + 73) == 1) {
      return result;
    }
    goto LABEL_34;
  }
  v15 = *(_QWORD*)(v12 + 576);
  if (v15 == 0) {
    return 0;
  }

LABEL_34:
  v17 = *(unsigned __int8*)(v15 + 72);
  v18 = *(unsigned __int8*)(v15 + 73);
  if (v17 > 7 || v18 != 7) {
    return 0;
  }
  return result;
}

__int64 BattleInfoWindow_Unknown21(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v10;

  v4 = *(_QWORD*)(a3 + 8);
  v5 = *(unsigned __int8*)(v4 + 3068);
  v6 = v4 + 3064;
  if (v5 == 1) {
    goto LABEL_5;
  }
  v7 = v4 + 3086;
  do {
    v8 = *(unsigned __int8*)(v7 + 46);
    v7 += 64;
  } while (v8 != 1);
  while (v5 != 24) {
  LABEL_5:
    v5 = *(unsigned __int8*)(v6 + 68);
    v6 += 64;
  }
  if (*GameData_212cfd0[0] != 0) {
    v10 = 0;
    if (*(_BYTE*)(*GameData_212cfd0[0] + 20) == 27) {
      LODWORD(v10) = 1953396079;
      return GameRoutine_1835440();
    }
  }
  else {
    v10 = 0;
  }
  if ((a4 & 1) != 0) {
    strcpy((char*)&v10 + 1, "g");
  }
  else {
    strcpy((char*)&v10 + 1, "dure");
  }
  return GameRoutine_1835440();
}

__int64 BattleInfoWindow_Unknown24(__int64 a1, char a2, char a3)
{
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int8 v21;
  __int64 v22;

  if (a2 != 4) {
    if (a2 != 5) {
      return GameRoutine_18357c0(a1, a2, a3 & 1);
    }
    v3 = *(_QWORD*)(a1 + 288);
    if (v3 == 0) {
      return GameRoutine_18357c0(a1, a2, a3 & 1);
    }
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v3 + 104)) & 1) ==
        0) {
      goto LABEL_26;
    }
    v4 = *(unsigned __int8*)(v3 + 106);
    if (*(_BYTE*)(v3 + 106) == 0 || v4 == 6) {
      v6 = *(_QWORD*)(v3 + 576);
      if (v6 == 0) {
        goto LABEL_26;
      }
    }
    else {
      if (v4 != 1) {
        goto LABEL_26;
      }
      v6 = *(_QWORD*)(v3 + 576);
      if (v6 == 0) {
        return GameRoutine_18357c0(a1, a2, a3 & 1);
      }
    }
    v14 = *(unsigned __int8*)(v6 + 72);
    v15 = *(unsigned __int8*)(v6 + 73);
    if (v14 > 7 || v15 != 1) {
    LABEL_26:
      v17 = *(_QWORD**)(a1 + 152);
      v18 = v17[100];
      if (v18 == 0 || *(_QWORD*)(v18 + 392) == 0) {
        if ((*(_BYTE*)(v17[98] + 11277LL) & 0x80) != 0) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
        v19 = (_QWORD*)v17[101];
        if (v19 == nullptr) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
        v20 = a1;
        v21 = (unsigned __int8)X8CALL_X0(
            _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                         PSEUDO_X8, _QWORD*))*v19)((void*)v19, v19));
        a1 = v20;
        if ((v21 & 1) == 0) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
      }
      return GameRoutine_1562cf0(a1 + 24, "Info_Battle_TargetUnit_HPOff");
    }
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }
  v7 = *(_QWORD*)(a1 + 152);
  v8 = (__int64*)(v7 + 60);
  if (*(_WORD*)(v7 + 60) != 0) {
    v9 = *(_QWORD*)(v7 + 40);
    if (v9 == 0) {
      goto LABEL_33;
    }
  }
  else {
    v13 = *(unsigned int*)(v7 + 56);
    if ((v13 & 0x80000000) != 0) {
      v8 = &game_g_empty_item;
      v9 = *(_QWORD*)(v7 + 40);
      if (v9 == 0) {
        goto LABEL_33;
      }
    }
    else {
      v8 = (__int64*)(*(_QWORD*)(v7 + 40) + 8 * v13 + 828);
      v9 = *(_QWORD*)(v7 + 40);
      if (v9 == 0) {
        goto LABEL_33;
      }
    }
  }
  v10 = *(_QWORD*)(v9 + 440);
  if (v10 != 0) {
    v11 = *(unsigned __int8*)(v10 + 16);
    v12 = *(_QWORD*)(v7 + 800);
    if (v12 == 0) {
      goto LABEL_37;
    }
    goto LABEL_34;
  }

LABEL_33:
  v11 = 9;
  v12 = *(_QWORD*)(v7 + 800);
  if (v12 != 0) {
  LABEL_34:
    v22 = *(_QWORD*)(v12 + 440);
    if (v22 != 0) {
      if (v11 != *(unsigned __int8*)(v22 + 16)) {
        return GameRoutine_18357c0(a1, a2, a3 & 1);
      }
      goto LABEL_38;
    }
  }

LABEL_37:
  if (v11 != 9) {
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }

LABEL_38:
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)v8) +
                          88LL) >>
          ((*((_BYTE*)v8 + 3) & 8) != 0) !=
      0) {
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }
  return GameRoutine_1562cf0(a1 + 24, "Info_Battle_TargetUnit_HPOff");
}

__int64 BattleInfoWindow_18403e0(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 32LL))(a1 - 248);
}

__int64 BattleInfoWindow_1840400(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 24LL))(a1 - 248);
}

#pragma GCC visibility pop
