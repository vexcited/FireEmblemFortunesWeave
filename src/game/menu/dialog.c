#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameConverge_8f24c0(_QWORD, _QWORD);
__int64 GameRoutine_1647b80(_QWORD, _QWORD);
__int64 GameRoutine_164b120(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 GameRoutine_16e0120(_QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a89034;
extern _UNKNOWN GameData_225d6d8;
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_1f90100[])();
extern __int64 (*GameData_1fb7780[])();
extern __int64 (*GameData_1fb7b68[])();
extern __int64 (*GameData_1fe2b80[])();
extern __int64 (*GameData_1fe9808[])();
extern __int64 (*GameData_20378d0[])();
extern __int64 (*game_menu_ProcDialogList_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d690;
extern __int64 GameData_225d660;
extern __int64 GameData_225d668;
extern __int64 GameData_225d670;
extern __int64 GameData_225d680;
extern __int64 GameData_225d690;
extern __int64 GameData_225d6a0;
extern __int64 GameData_225d6a8;
extern __int64 GameData_225d6b0;
extern __int64 GameData_225d6c0;
extern __int64 GameData_225d6d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e0a0[11];
extern __int64* GameData_212e0a8[10];
extern __int64* GameData_212e348;
extern __int64* GameData_212fc70[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char GameData_225d658;
extern char GameData_225d698;
extern int GameData_225d678;
extern int GameData_225d688;
extern int GameData_225d6b8;
extern int GameData_225d6c8;
void __attribute__((noreturn)) GameRoutine_8f2260(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64 a1, __int64 a2);
void game_menu_Dialog__CreateBind_game_menu_Dialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
_QWORD* game_menu_Dialog__CreateBind_game_menu_ItemDialog(__int64 a1,
                                                          _QWORD* a2);
void game_menu_Dialog__CreateBind_game_menu_ItemDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
__int64 game_menu_Dialog__CreateBind_game_menu_ExchangeDialog(__int64 a1,
                                                              _QWORD* a2);
void game_menu_Dialog__CreateBind_game_menu_ExchangeDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
void game_menu_Dialog__CreateBindDirect_game_menu_Dialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
__int64 game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog(__int64 a1,
                                                                _QWORD* a2);
void game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
void game_menu_Dialog__CreateBind_game_menu_InfoDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
__int64 Dialog_16495e0(_QWORD* a1);
__int64 Dialog_16499c0(__int64 result);
__int64 Dialog_1649ba0_alt1(__int64 a1, __int64* a2) __asm__("Dialog_1649ba0");
__int64 Dialog_1649e50(__int64 result, __int64 a2, char a3, char a4);
__int64 game_menu_Dialog_PostBuild_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_menu_Dialog_PostBuild_lambda1_Invoke(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
void __attribute__((noreturn)) GameRoutine_60a210();
__int64 Dialog_164b120_alt2(float* a1, __int64* a2,
                            __int64** a3) __asm__("Dialog_164b120");
__int64 game_menu_Dialog_SetDecideSe_lambda0_Invoke(__int64 result);
__int64* GameConverge_8f24c0_alt1(__int64*,
                                  __int64*) __asm__("GameConverge_8f24c0");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_8679c0_alt1() __asm__("GameRoutine_8679c0");
void __attribute__((noreturn))
GameRoutine_8f2260_alt1() __asm__("GameRoutine_8f2260");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 Dialog_1649ba0(__int64 a1, __int64** a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Dialog_164b120_alt1(__int64, __int64*,
                            __int64**) __asm__("Dialog_164b120");
__int64 GameRoutine_16df7a0_alt1(__int64 result) __asm__("GameRoutine_16df7a0");
__int64 GameRoutine_16e0120_alt1(__int64 result,
                                 int) __asm__("GameRoutine_16e0120");
__int64
LayoutAccessor_155cda0_alt1(__int64 result, const char*,
                            const char*) __asm__("LayoutAccessor_155cda0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_IsPaneVisible_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_IsPaneVisible");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
const char* Pane_58fac0_alt1(__int64, const char*) __asm__("Pane_58fac0");
float LayoutAccessor_155d940_alt1(__int64*) __asm__("LayoutAccessor_155d940");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
_QWORD* LayoutAccessor_155c910(__int64*, __int64*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
extern __int64 (*GameData_2073868[])();
extern __int64 (*GameData_20738f8[])();
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0d8[4];
extern __int64* GameData_21318d0[2];
extern __int64 GameData_2073788;
float GameRoutine_56b6a0(_QWORD);
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Dialog_1647ee0(__int64 a1);
__int64 game_menu_Dialog_PostBuild(__int64 a1);
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
__int64 Dialog_164b120(__int64 a1, __int64* a2, __int64** a3);
__int64 Dialog_1649290(__int64 result, __int64, __int64, unsigned __int8*);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0_alt2(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
const char* GameRoutine_156bee0_alt1(const char* result, __int64, __int64,
                                     __int64, char, float,
                                     float) __asm__("GameRoutine_156bee0");
extern __int64 (*msg_TagSelector_vtable[])();
void GameRoutine_156c5d0(__int64, __int64, char);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void Dialog_1648c60(__int64 a1);

__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1504, 16, 0);
  GameRoutine_1647b80(v4, a2);
  ProcInst_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
  v8[0] = GameData_1f90100;
  v9 = v8;
  v11 = v10;
  v10[0] = GameData_1f90100;
  GameRoutine_654050(v10, v4 + 1200);
  if (v11 == v10) {
    v5 = 32;
    goto LABEL_7;
  }
  if (v11 != nullptr) {
    v5 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
  }
  if (v9 == v8) {
    v6 = 32;
    goto LABEL_12;
  }
  if (v9 != nullptr) {
    v6 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v9 + v6))((__int64)v9);
  }
  return v4;
}

void game_menu_Dialog__CreateBind_game_menu_Dialog_closure_CloneInto(__int64 a1,
                                                                     _QWORD* a2)
{
  *a2 = GameData_1f90100;
}

_QWORD* game_menu_Dialog__CreateBind_game_menu_ItemDialog(__int64 a1,
                                                          _QWORD* a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;

  if (a1 == 0) {
    return nullptr;
  }
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1520, 16, 0);
  v11[0] = *a2;
  GameRoutine_1647b80(v4, v11);
  v4[189] = 0;
  v4[188] = 0;
  v4[187] = 0;
  v5 = GameData_212e0a0[0] + 140;
  *v4 = GameData_212e0a0[0] + 2;
  v4[22] = v5;
  ProcInst_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
  v12 = v11;
  v9[0] = GameData_1fb7780;
  v10 = v9;
  v11[0] = GameData_1fb7780;
  GameRoutine_654050(v11, v4 + 150);
  if (v12 == v11) {
    v6 = 32;
    goto LABEL_7;
  }
  if (v12 != nullptr) {
    v6 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v12 + v6))((__int64)v12);
  }
  if (v10 == v9) {
    v7 = 32;
    goto LABEL_12;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
  }
  return v4;
}

void game_menu_Dialog__CreateBind_game_menu_ItemDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fb7780;
}

__int64 game_menu_Dialog__CreateBind_game_menu_ExchangeDialog(__int64 a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1584, 16, 0);
  v11[0] = *a2;
  GameRoutine_1647b80(v4, v11);
  v5 = GameData_212e0a8[0];
  *(_WORD*)(v4 + 1496) = 0;
  *(_QWORD*)(v4 + 1520) = 0;
  *(_QWORD*)(v4 + 1528) = 0;
  *(_QWORD*)(v4 + 1536) = 0;
  *(_QWORD*)(v4 + 1544) = 0;
  *(_QWORD*)(v4 + 1552) = 0;
  *(_QWORD*)(v4 + 1560) = 0;
  *(_BYTE*)(v4 + 1568) = 0;
  *(_QWORD*)v4 = v5 + 2;
  *(_QWORD*)(v4 + 176) = v5 + 141;
  ProcInst_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
  v12 = v11;
  v9[0] = GameData_1fb7b68;
  v10 = v9;
  v11[0] = GameData_1fb7b68;
  GameRoutine_654050(v11, v4 + 1200);
  if (v12 == v11) {
    v6 = 32;
    goto LABEL_7;
  }
  if (v12 != nullptr) {
    v6 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v12 + v6))((__int64)v12);
  }
  if (v10 == v9) {
    v7 = 32;
    goto LABEL_12;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
  }
  return v4;
}

void game_menu_Dialog__CreateBind_game_menu_ExchangeDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fb7b68;
}

void game_menu_Dialog__CreateBindDirect_game_menu_Dialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fe2b80;
}

__int64 game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog(__int64 a1,
                                                                _QWORD* a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;

  if (a1 != 0) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1520, 16, 0);
    v11[0] = *a2;
    GameRoutine_1647b80(v4, v11);
    *(_QWORD*)(v4 + 1512) = 0;
    *(_QWORD*)(v4 + 1504) = 0;
    *(_QWORD*)(v4 + 1496) = 0;
    v5 = GameData_212e0a0[0] + 140;
    *(_QWORD*)v4 = GameData_212e0a0[0] + 2;
    *(_QWORD*)(v4 + 176) = v5;
    ProcInst_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
    v12 = v11;
    v9[0] = GameData_1fe9808;
    v10 = v9;
    v11[0] = GameData_1fe9808;
    GameRoutine_654050(v11, v4 + 1200);
    if (v12 == v11) {
      v6 = 32;
    }
    else {
      if (v12 == nullptr) {
        goto LABEL_8;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v12 + v6))((__int64)v12);
  LABEL_8:
    if (v10 == v9) {
      v7 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_13:
        *(_BYTE*)(v4 + 1080) = 1;
        return v4;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
    goto LABEL_13;
  }
  return 0;
}

void game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fe9808;
}

void game_menu_Dialog__CreateBind_game_menu_InfoDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_20378d0;
}

void Dialog_1647ee0(__int64 a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  char v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  __int64* v17;
  __int64* v18;
  float v19;
  float v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  unsigned __int64 v32;
  float v33;
  float v34;
  const char* v35;
  const char* v36;
  __int64 v37;
  long double v38;
  __int64* v39;
  struct {
    unsigned __int64 v40;
    __int64 v41;
  } v40_;
  __int64 v42;
  _BYTE v43[4];

  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = (__int64*)(a1 + 952);
  ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 952, "N_Help00", 0),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v1, "N_Help01", 0),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v1, "T_Help", 0),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v40_.v40 = 0;
  LODWORD(v40_.v41) = 0;
  ui_LayoutAccessor_SetPaneTranslate(v1, "N_Help00", (__int64)&v40_.v40),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v40_.v40 = 0;
  LODWORD(v40_.v41) = 0;
  ui_LayoutAccessor_SetPaneTranslate(v1, "N_Help01", (__int64)&v40_.v40),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = ui_LayoutAccessor_FindPane_alt2(v1, "MenuItemList"),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v3 != 0) {
    v4 = __dynamic_cast(v3, GameData_212d670[0], GameData_21318d0[0], 0),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v4 != 0) {
      v5 = *(__int64**)(a1 + 232);
      v6 = *(__int64**)(a1 + 240);
      v7 = v4;
      if (v5 == v6) {
        *(_BYTE*)(v4 + 88) &= ~1u;
      }
      else {
        v8 = 0;
        do {
          v9 = *v5++;
          v8 += (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 48LL))(v9) & 1,
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        } while (v5 != v6);
        v10 = *(_BYTE*)(v7 + 88) & 0xFE;
        if (v8 != 0) {
          ++v10;
        }
        *(_BYTE*)(v7 + 88) = v10;
        if (v8 != 0) {
          v11 = *(__int64**)(a1 + 232);
          v12 = *v11;
          v13 = *(_QWORD*)(*v11 + 56);
          if (v13 == 0) {
            goto LABEL_14;
          }
          v14 = std___1___shared_weak_count_lock_alt1(v13),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v14 == 0) {
            goto LABEL_14;
          }
          v15 = v14;
          v16 = (atomic_ullong*)(v14 + 8);
          v17 = *(__int64**)(v12 + 48);
          if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            v18 = v17;
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v15),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v17 = v18;
          }
          if (v17 == nullptr) {
          LABEL_14:
            v17 = ui_LayoutAccessor_empty__ptr[0];
          }
          ui_LayoutAccessor_GetPaneSize(v17, "Frm"),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v20 = v19 * (float)v8;
          if (v8 != 1) {
            v20 = v20 + (float)(GameRoutine_56b6a0(v7) * (float)(v8 - 1)),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          v21 = *(_BYTE*)(v7 + 88);
          v22 = *(_QWORD*)(v7 + 40);
          *(float*)(v7 + 84) = v20;
          for (*(_BYTE*)(v7 + 88) = v21 | 0x10; v22 != v7 + 32;
               v22 = *(_QWORD*)(v22 + 8)) {
            *(_BYTE*)(v22 + 80) &= ~1u;
          }
        }
      }
      Alignment_56b600(v7),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v23 = *(_QWORD*)(a1 + 960);
      if (v23 != 0) {
        v24 = std___1___shared_weak_count_lock_alt1(v23),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v24 != 0) {
          v25 = v24;
          if (*v1 != 0) {
            ControlCreator_13633c0(*v1),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v25),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
      }
    }
  }
  v26 = ui_LayoutAccessor_FindPane_alt2(v1, "Wdw"),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v26 != 0) {
    v27 = __dynamic_cast(v26, GameData_212d670[0], GameData_212fc70[0], 0),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v27 != 0) {
      v28 = v27;
      v29 = ui_LayoutAccessor_FindPane_alt2(v1, "A_Contents"),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v29 != 0) {
        v30 = __dynamic_cast(v29, GameData_212d670[0], GameData_21318d0[0], 0),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v31 = 0x0.0p+0f;
        v43[0] = 0;
        v40_.v40 = 0xFF7FFFFF7F7FFFFFLL;
        v42 = 0x7F7FFFFFFF7FFFFFLL;
        if (v30 != 0) {
          v32 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v30 + 128),
                                      *(float32x4_t*)(v30 + 128)))
                    .n128_u64[0];
          GameRoutine_156bee0(
              v30, (__int64)&v40_.v40, (__int64)&v42, (__int64)v43, 0,
              sqrtf((float)(*(float*)&v32 +
                            (float)(COERCE_FLOAT(*(_OWORD*)(v30 + 112)) *
                                    COERCE_FLOAT(*(_OWORD*)(v30 + 112)))) +
                    (float)(COERCE_FLOAT(*(_OWORD*)(v30 + 144)) *
                            COERCE_FLOAT(*(_OWORD*)(v30 + 144)))) /
                  *(float*)(v30 + 72),
              sqrtf(
                  (float)(*((float*)&v32 + 1) +
                          (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v30 + 112))) *
                                  COERCE_FLOAT(
                                      HIDWORD(*(_QWORD*)(v30 + 112))))) +
                  (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v30 + 144))) *
                          COERCE_FLOAT(HIDWORD(*(_QWORD*)(v30 + 144))))) /
                  *(float*)(v30 + 76)),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v33 = 0x0.0p+0f;
          if (v43[0] == 1) {
            v31 = vabds_f32(*(float*)&v42, *(float*)&v40_.v40);
            v33 = vabds_f32(*((float*)&v42 + 1), *((float*)&v40_.v40 + 1));
          }
          goto LABEL_35;
        }
      }
      else {
        v31 = 0x0.0p+0f;
      }
      v33 = 0x0.0p+0f;
    LABEL_35:
      v34 = *(float*)(v28 + 84) - v33;
      *(float*)(a1 + 1304) = *(float*)(v28 + 80) - v31;
      *(float*)(a1 + 1308) = v34;
      v35 = Pane_58fac0_alt1(v28, "Margin_Width"),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v35 != nullptr) {
        *(float*)(a1 + 1304) = (float)*(int*)&v35[*((unsigned int*)v35 + 1)] +
                               (float)*(int*)&v35[*((unsigned int*)v35 + 1)];
      }
      v36 = Pane_58fac0_alt1(v28, "Margin_Height"),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v36 != nullptr) {
        *(float*)(a1 + 1308) = (float)*(int*)&v36[*((unsigned int*)v36 + 1)] +
                               (float)*(int*)&v36[*((unsigned int*)v36 + 1)];
      }
    }
  }
  LayoutAccessor_1560070((void*)(&v40_.v40), (__int64*)(a1 + 848),
                         "L_NextCursor"),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v40_.v41 == 0) {
    return;
  }
  v37 = std___1___shared_weak_count_lock_alt1(v40_.v41),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v39 = (__int64*)v40_.v40;
  if (v40_.v41 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v40_.v41),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v37 != 0 && v39 != nullptr) {
    ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 848, "L_NextCursor", 0),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v39, "Bg", 0),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameHr_1562680((__int64)v39, (unsigned int*)"Wait", 0x1.0000000000000p+0f),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LayoutAccessor_155c910((__int64*)(a1 + 1312), v39),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LayoutAccessor_155cda0_alt1(a1 + 1312, "Out", nullptr),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(float*)&v38 = LayoutAccessor_155d940_alt1((__int64*)(a1 + 1312)),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else if (v37 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v37 + 16LL))(v37, v38),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v37),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

__int64 game_menu_Dialog_PostBuild(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 (***v10)();
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (***v18)();
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  int v39;
  __int64 v40;
  const char* v41;
  __int64 v42;
  __int64 v43;
  float v44;
  float v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  float v49;
  unsigned __int64 v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  double v56;
  int v57;
  float v58;
  char v59;
  float v60;
  float v61;
  __int64 result;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  float v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _BOOL4 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int32x4_t* v76;
  __int64 v77;
  __int64 v78;
  _BOOL4 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _BOOL4 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  int32x2_t* v89;
  float32x4_t v90;
  float32x4_t v91;
  int v92;
  float v93;
  unsigned __int64 v94;
  struct {
    __int64 (**v95)();
    __int64* v96;
    int* v97;
    _QWORD* v98;
    __int64 (***v99)();
  } v95_;
  int v100;
  struct {
    _QWORD v101[2];
    _QWORD* v102;
    __int64 v103;
    int v104;
  } v101_;
  __int64 v105;
  __int64 v106;

  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
  v1 = *(_QWORD*)(a1 + 232);
  v2 = *(_QWORD*)(a1 + 240);
  if (v1 == v2) {
    v105 = 0;
    v4 = 0;
    goto LABEL_42;
  }
  v4 = 0;
  v105 = 0;
  if ((unsigned int)((unsigned __int64)(v2 - v1 + 0x7FFFFFFF8LL) >> 3) <=
      0x7FFFFFFE) {
    v5 = ui_LayoutAccessor_FindPane_alt2((__int64*)(a1 + 952), "MenuItemList"),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v5 != 0) {
      v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_21318d0[0], 0),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v6 != 0) {
        v7 = v6;
        Alignment_56b600(v6),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
        v9 = *(_QWORD*)(a1 + 232);
        v8 = *(_QWORD*)(a1 + 240);
        v10 = &v95_.v95;
        v101_.v102 = nullptr;
        v101_.v103 = 0;
        v101_.v101[0] = 0;
        v101_.v101[1] = 0;
        v100 = 0;
        v101_.v104 = 1065353216;
        v95_.v99 = &v95_.v95;
        v95_.v95 = GameData_2073868;
        v95_.v96 = (__int64*)&v100;
        v95_.v97 = (int*)v101_.v101;
        if (v8 == v9) {
          goto LABEL_17;
        }
        v11 = 0;
        v12 = GameData_212e008[0];
        while (1) {
          v13 = *(_QWORD*)(v9 + 8 * v11);
          if (v13 != 0) {
            v14 = __dynamic_cast(v13, v12, &GameData_2073788, 0),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
            if (v14 != 0) {
              v106 = v14;
              if (v95_.v99 == nullptr) {
              LABEL_133:
                GameRoutine_60a310(),
                    v57 = COERCE_AS(__typeof__(v57),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
              }
              if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v95_.v99)[6])(
                       v95_.v99, &v106) &
                   1) != 0) {
              LABEL_14:
                v10 = v95_.v99;
                if (v95_.v99 != &v95_.v95) {
                  if (v95_.v99 != nullptr) {
                    v15 = 5;
                    goto LABEL_18;
                  }
                  goto LABEL_19;
                }
              LABEL_17:
                v15 = 4;
              LABEL_18:
                ((__int64 (*)(__int64))(*v10)[v15])((__int64)v10),
                    v57 = COERCE_AS(__typeof__(v57),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
              LABEL_19:
                v17 = *(_QWORD*)(a1 + 232);
                v16 = *(_QWORD*)(a1 + 240);
                v18 = &v95_.v95;
                v95_.v95 = GameData_20738f8;
                v95_.v96 = &v105;
                v95_.v99 = &v95_.v95;
                v95_.v97 = &v100;
                v95_.v98 = v101_.v101;
                if (v16 == v17) {
                  goto LABEL_30;
                }
                v19 = 0;
                v20 = GameData_212e008[0];
                v21 = GameData_212e0d8[0];
                while (1) {
                  v22 = *(_QWORD*)(v17 + 8 * v19);
                  if (v22 != 0) {
                    v23 = __dynamic_cast(v22, v20, v21, 0),
                    v57 = COERCE_AS(__typeof__(v57),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    if (v23 != 0) {
                      v106 = v23;
                      if (v95_.v99 == nullptr) {
                        goto LABEL_133;
                      }
                      if ((((__int64 (*)(__int64 (***)(void), __int64*))(
                               *v95_.v99)[6])(v95_.v99, &v106) &
                           1) != 0) {
                      LABEL_27:
                        v18 = v95_.v99;
                        if (v95_.v99 != &v95_.v95) {
                          if (v95_.v99 != nullptr) {
                            v24 = 5;
                            goto LABEL_31;
                          }
                          goto LABEL_32;
                        }
                      LABEL_30:
                        v24 = 4;
                      LABEL_31:
                        ((__int64 (*)(__int64))(*v18)[v24])((__int64)v18),
                            v57 = COERCE_AS(__typeof__(v57),
                                            PSEUDO_REGISTER(float, "s2", "=w")),
                            v58 = COERCE_AS(__typeof__(v58),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      LABEL_32:
                        v25 = v101_.v102;
                        *(_DWORD*)(v7 + 80) = v105;
                        *(_BYTE*)(v7 + 88) |= 0x10u;
                        v26 = fw_memory_g_heap_manager_ptr;
                        if (v25 != nullptr) {
                          do {
                            v27 = (_QWORD*)*v25;
                            if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
                              v28 = 128;
                            }
                            else {
                              v28 = 56;
                            }
                            nn_mem_StandardAllocator_Free_alt1(
                                *(_QWORD*)v26 + v28, (__int64)v25),
                                v57 = COERCE_AS(
                                    __typeof__(v57),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                                v58 = COERCE_AS(
                                    __typeof__(v58),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            v25 = v27;
                          } while (v27 != nullptr);
                        }
                        v29 = v101_.v101[0];
                        v101_.v101[0] = 0;
                        if (v29 != 0) {
                          v30 = 128;
                          if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
                            v30 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)v26 + v30, v29),
                              v57 =
                                  COERCE_AS(__typeof__(v57),
                                            PSEUDO_REGISTER(float, "s2", "=w")),
                              v58 =
                                  COERCE_AS(__typeof__(v58),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        v4 = v105;
                        goto LABEL_42;
                      }
                      v17 = *(_QWORD*)(a1 + 232);
                      v16 = *(_QWORD*)(a1 + 240);
                    }
                  }
                  if (++v19 >= (unsigned __int64)((v16 - v17) >> 3)) {
                    goto LABEL_27;
                  }
                }
              }
              v9 = *(_QWORD*)(a1 + 232);
              v8 = *(_QWORD*)(a1 + 240);
            }
          }
          if (++v11 >= (unsigned __int64)((v8 - v9) >> 3)) {
            goto LABEL_14;
          }
        }
      }
    }
  }
LABEL_42:
  v31 = (__int64*)(a1 + 952);
  *(_DWORD*)(a1 + 1488) = v4;
  v32 = ui_LayoutAccessor_FindPane_alt2((__int64*)(a1 + 952), "A_Contents"),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v32 != 0) {
    v33 = __dynamic_cast(v32, GameData_212d670[0], GameData_21318d0[0], 0),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v33 != 0) {
      Alignment_56b600(v33),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
      v34 = *(_QWORD*)(a1 + 960);
      if (v34 != 0) {
        v35 = std___1___shared_weak_count_lock_alt1(v34),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v35 != 0) {
          v36 = v35;
          if (*v31 != 0) {
            ControlCreator_13633c0(*v31),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v36),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
      }
    }
  }
  v37 = *(__int64**)(a1 + 232);
  v38 = *(__int64**)(a1 + 240);
  if (v37 == v38) {
    LODWORD(v41) = 1;
  }
  else {
    v39 = 0;
    do {
      v40 = *v37++;
      v39 += (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 48LL))(v40) & 1,
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
    } while (v37 != v38);
    LODWORD(v41) = v39 == 0;
  }
  v42 = ui_LayoutAccessor_FindPane_alt2((__int64*)(a1 + 952), "Wdw"),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v42 == 0 || (v43 = __dynamic_cast(v42, GameData_212d670[0],
                                        GameData_212fc70[0], 0)) == 0) {
    v52 = -0x1.a800000000000p+7f;
    v53 = -0x1.1800000000000p+8f;
    goto LABEL_67;
  }
  v44 = *(float*)(v43 + 80);
  v45 = *(float*)(v43 + 84);
  v46 = v43;
  v47 = ui_LayoutAccessor_FindPane_alt2((__int64*)(a1 + 952), "A_Contents"),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v47 != 0) {
    v48 = __dynamic_cast(v47, GameData_212d670[0], GameData_21318d0[0], 0),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
    v49 = 0x0.0p+0f;
    LOBYTE(v106) = 0;
    v95_.v95 = (__int64 (**)(void))0xFF7FFFFF7F7FFFFFLL,
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
    v101_.v101[0] = 0x7F7FFFFFFF7FFFFFLL;
    if (v48 != 0) {
      v50 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v48 + 128),
                                  *(float32x4_t*)(v48 + 128)))
                .n128_u64[0];
      GameRoutine_156bee0(
          v48, (__int64)&v95_.v95, (__int64)v101_.v101, (__int64)&v106, 0,
          sqrtf((float)(*(float*)&v50 +
                        (float)(COERCE_FLOAT(*(_OWORD*)(v48 + 112)) *
                                COERCE_FLOAT(*(_OWORD*)(v48 + 112)))) +
                (float)(COERCE_FLOAT(*(_OWORD*)(v48 + 144)) *
                        COERCE_FLOAT(*(_OWORD*)(v48 + 144)))) /
              *(float*)(v48 + 72),
          sqrtf((float)(*((float*)&v50 + 1) +
                        (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v48 + 112))) *
                                COERCE_FLOAT(HIDWORD(*(_QWORD*)(v48 + 112))))) +
                (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v48 + 144))) *
                        COERCE_FLOAT(HIDWORD(*(_QWORD*)(v48 + 144))))) /
              *(float*)(v48 + 76)),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
      v51 = 0x0.0p+0f;
      if ((unsigned __int8)v106 == 1) {
        v49 = vabds_f32(*(float*)v101_.v101, *(float*)&v95_.v95);
        v51 = vabds_f32(*((float*)v101_.v101 + 1), *((float*)&v95_.v95 + 1));
      }
      goto LABEL_64;
    }
  }
  else {
    v49 = 0x0.0p+0f;
  }
  v51 = 0x0.0p+0f;
LABEL_64:
  v54 = v49 + *(float*)(a1 + 1304);
  v55 = v51 + *(float*)(a1 + 1308);
  if ((_DWORD)v41 != 0) {
    v41 = "A_Contents";
    v55 = v55 + 0x1.9000000000000p+5f;
    v56 =
        ui_LayoutAccessor_GetPaneTranslate((__int64*)(a1 + 952), "A_Contents"),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
    LODWORD(v95_.v96) = v57;
    LODWORD(v95_.v95) = LODWORD(v56);
    *((float*)&v95_.v95 + 1) =
        fmaxf((float)(fmaxf(v45 - (float)(v55 + 0x1.9000000000000p+5f),
                            0x0.0p+0f) *
                      -0x1.0000000000000p-1f) +
                  0x1.9000000000000p+4f,
              0x0.0p+0f) +
        v58;
    ui_LayoutAccessor_SetPaneTranslate((__int64*)(a1 + 952), "A_Contents",
                                       (__int64)&v95_.v95),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v59 = *(_BYTE*)(v46 + 88);
  v60 = fmaxf(v44, v54);
  v61 = fmaxf(v45, v55);
  *(float*)(v46 + 80) = v60;
  *(float*)(v46 + 84) = v61;
  *(_BYTE*)(v46 + 88) = v59 | 0x10;
  v53 = (float)(v61 + -0x1.1800000000000p+9f) * 0x1.0000000000000p-1f;
  v52 = (float)(PSEUDO_UNFUSED((float)(v60 + -0x1.e000000000000p+9f) *
                               0x1.0000000000000p-1f)) +
        0x1.0c00000000000p+8f;
LABEL_67:
  result =
      ui_LayoutAccessor_FindPane_alt2((__int64*)(a1 + 952), "L_MenuItem00"),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
  if (result != 0) {
    v63 = *(_QWORD*)(result + 48);
    *(_DWORD*)(a1 + 212) = *(_DWORD*)(result + 56);
    *(_QWORD*)(a1 + 204) = v63;
  }
  v64 = *(__int64**)(a1 + 232);
  v65 = *(__int64**)(a1 + 240);
  if (v64 != v65) {
    LODWORD(v41) = 0;
    do {
      v66 = *v64++;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v66 + 48LL))(v66),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
      LODWORD(v41) = (_DWORD)v41 + (result & 1);
    } while (v64 != v65);
    if ((_DWORD)v41 != 0) {
      return result;
    }
  }
  v67 = 0x0.0p+0f;
  v68 = (__int64*)(a1 + 848);
  if (*(_QWORD*)(a1 + 864) == 0) {
    goto LABEL_91;
  }
  result = *(_QWORD*)(a1 + 856);
  v69 = 0;
  v94 = 0;
  if (result == 0) {
    goto LABEL_93;
  }
  result = std___1___shared_weak_count_lock_alt1(result),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
  if (result == 0) {
    goto LABEL_83;
  }
  v70 = *v68;
  if (*v68 != 0) {
    LODWORD(v41) = *(unsigned __int8*)(v70 + 24);
    v71 = v70 + 152;
    if ((_DWORD)v41 == 0) {
      v71 = 0;
    }
    v72 = v71 != *(_QWORD*)(a1 + 864);
  }
  else {
    v72 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v72) {
    LABEL_83:
      v73 = *(_QWORD*)(a1 + 856);
      v69 = 0;
      if (v73 == 0 || (v69 = 0, *(_QWORD*)(v73 + 8) == -1)) {
      LABEL_93:
        v67 = *((float*)&v69 + 1);
        if (*(_QWORD*)(a1 + 864) == 0) {
          goto LABEL_112;
        }
        result = *(_QWORD*)(a1 + 856);
        if (result == 0) {
          goto LABEL_112;
        }
        v92 = v69;
        result = std___1___shared_weak_count_lock_alt1(result),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
        if (result == 0) {
          goto LABEL_103;
        }
        v77 = *v68;
        if (*v68 != 0) {
          LODWORD(v41) = *(unsigned __int8*)(v77 + 24);
          v78 = v77 + 152;
          if ((_DWORD)v41 == 0) {
            v78 = 0;
          }
          v79 = v78 != *(_QWORD*)(a1 + 864);
        }
        else {
          v79 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v79) {
          LABEL_103:
            LODWORD(v69) = v92;
            v80 = *(_QWORD*)(a1 + 856);
            if (v80 == 0 || *(_QWORD*)(v80 + 8) == -1) {
              goto LABEL_112;
            }
            goto LABEL_108;
          }
        }
        else {
          v81 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          result = std___1___shared_weak_count___release_weak_alt1(v81),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v79) {
            goto LABEL_103;
          }
        }
        LODWORD(v69) = v92;
        if (((unsigned __int8)v41 & 1) != 0) {
        LABEL_108:
          v82 = *(_QWORD*)(a1 + 864);
          if (v82 != 0) {
            result = GameRoutine_155f760(a1 + 848, v82, "L_NextCursor"),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
            if (result != 0) {
              v94 = *(unsigned int*)(result + 156);
            }
            LODWORD(v69) = v92;
          }
        }
      LABEL_112:
        if (*(_QWORD*)(a1 + 864) == 0) {
          return result;
        }
        result = *(_QWORD*)(a1 + 856);
        if (result == 0) {
          return result;
        }
        v93 = *(float*)&v69;
        result = std___1___shared_weak_count_lock_alt1(result),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
        if (result == 0) {
          goto LABEL_122;
        }
        v83 = *v68;
        if (*v68 != 0) {
          LODWORD(v41) = *(unsigned __int8*)(v83 + 24);
          v84 = v83 + 152;
          if ((_DWORD)v41 == 0) {
            v84 = 0;
          }
          v85 = v84 != *(_QWORD*)(a1 + 864);
        }
        else {
          v85 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v85) {
          LABEL_122:
            v86 = *(_QWORD*)(a1 + 856);
            if (v86 == 0 || *(_QWORD*)(v86 + 8) == -1) {
              return result;
            }
            goto LABEL_127;
          }
        }
        else {
          v87 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          result = std___1___shared_weak_count___release_weak_alt1(v87),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v85) {
            goto LABEL_122;
          }
        }
        if (((unsigned __int8)v41 & 1) == 0) {
          return result;
        }
      LABEL_127:
        v88 = *(_QWORD*)(a1 + 864);
        if (v88 != 0) {
          result = GameRoutine_155f760(a1 + 848, v88, "L_NextCursor"),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
          if (result != 0) {
            LANES128(v90).n128_f32[0] = v52 + v93;
            v89 = *(int32x2_t**)(result + 24);
            LANES128(v90).n128_f32[1] =
                (float)(-0x1.2800000000000p+7f - v53) + v67;
            LANES128(v90).n128_u64[1] = v94;
            if (v89 != nullptr) {
              LANES128(v91).n128_u64[0] =
                  LANES64_OF(vzip2_s32(v89[15], v89[17])).n64_u64[0];
              LANES128(v91).n128_u64[1] = LANES64(v89[19]).n64_u32[1];
              v90 = vsubq_f32(v90, v91);
            }
            *(_QWORD*)(result + 48) = LANES128(v90).n128_u64[0];
            *(_DWORD*)(result + 56) = LANES128(v90).n128_u32[2];
            *(_BYTE*)(result + 88) |= 0x10u;
          }
        }
        return result;
      }
      goto LABEL_88;
    }
  }
  else {
    v74 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v74),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s2", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v72) {
      goto LABEL_83;
    }
  }
  v69 = 0;
  if (((unsigned __int8)v41 & 1) == 0) {
    goto LABEL_93;
  }
LABEL_88:
  v75 = *(_QWORD*)(a1 + 864);
  if (v75 != 0) {
    v76 = *(int32x4_t**)(v75 + 24);
    if (v76 != nullptr) {
      LODWORD(v69) = LANES128_OF(vdupq_laneq_s32(v76[7], 3)).n128_u32[0];
      HIDWORD(v69) = HIDWORD(LANES128(v76[8]).n128_u64[1]);
    }
    else {
      v69 = 0;
    }
    goto LABEL_93;
  }
LABEL_91:
  LODWORD(v69) = 0;
  v94 = 0;
  goto LABEL_112;
}

void Dialog_1648c60(__int64 a1)
{
  unsigned __int8 v1;
  int v2;
  __int64 v4;
  bool v5;
  const char* v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  const char* v10;
  bool v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;
  float32x4_t v34;
  __int128 v35;
  const char* v36;
  float v37;
  __int64 v38;
  float v39;
  float v40;
  int v41;
  __int128 v42;
  float v43;
  float v44;
  unsigned __int64 v45;
  float v46;
  float v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  int v50;
  const char* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  char v59;
  struct {
    __int64 v60[2];
    __int64 v61;
    __int16 v62;
  } v60_;
  struct {
    __int64 v63[2];
    __int64 v64;
    __int16 v65;
  } v63_;
  __int128 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  float v84;
  __int64 v85;

  v1 = *(_BYTE*)(a1 + 1056);
  v2 = *(unsigned __int8*)(a1 + 1080);
  v4 = v1 >> 1;
  v5 = (v1 & 1) == 0;
  v6 = *(const char**)(a1 + 1072);
  if (v5) {
    v7 = v4;
  }
  else {
    v7 = *(_QWORD*)(a1 + 1064);
  }
  v8 = (const char*)(a1 + 1057);
  v9 = a1 + 952;
  if (v5) {
    v10 = v8;
  }
  else {
    v10 = v6;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1(v9, (__int64)"T_Text", 0);
  v12 = v7 == 0 || v10 == nullptr;
  if (v2 == 1) {
    if (v12 || *v10 == 0) {
      goto LABEL_29;
    }
  }
  else {
    if (v12 || *v10 == 0) {
      goto LABEL_29;
    }
    v71 = -1;
    v72 = -1;
    v73 = -1;
    v74 = -1;
    v13 = *msg_MessageManager_instance__ptr[0];
    v75 = -1;
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v81 = -1;
    v82 = -1;
    *(_QWORD*)&v66 = msg_TagSelector_vtable;
    *((_QWORD*)&v66 + 1) = 0xFFFF0001FFFF0000LL;
    v67 = 0xFFFF0004FFFF0002LL;
    v68 = 0xFFFF0006FFFF0005LL;
    v83 = 8;
    v69 = -65529;
    v70 = -65528;
    v14 = GameRoutine_a4dbe0_alt2(v13, v10, 0);
    if (v14 == nullptr) {
      goto LABEL_23;
    }
    v10 = v14;
  }
  v15 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 952), (__int64)"T_Text");
  if (v15 != 0) {
    GameRoutine_156c5d0(v15, (__int64)v10, 0);
  }
LABEL_23:
  v16 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 952), (__int64)"T_Text");
  if (v16 != 0) {
    v17 = v16;
    v18 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 952),
                                                 (__int64)"T_Text");
    if (v18 != nullptr) {
      ui_text_190a0c0((float*)&v66, (__int64)&v85, &v84, v18, v18[27]);
      v19 = v85;
    }
    else {
      v19 = 0;
    }
    v20 = *(_BYTE*)(v17 + 88);
    *(_QWORD*)(v17 + 80) = v19;
    *(_BYTE*)(v17 + 88) = v20 | 0x10;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 952, (__int64)"T_Text", 1);
LABEL_29:
  if ((*(_BYTE*)(a1 + 1088) & 1) != 0) {
    fw_text_String_CopyTerminated(v63_.v63, *(_QWORD*)(a1 + 1104),
                                  *(_QWORD*)(a1 + 1096));
  }
  else {
    v21 = *(_QWORD*)(a1 + 1096);
    v22 = *(_QWORD*)(a1 + 1104);
    v63_.v63[0] = *(_QWORD*)(a1 + 1088);
    v63_.v63[1] = v21;
    v63_.v64 = v22;
  }
  v63_.v65 = *(_WORD*)(a1 + 1112);
  Dialog_1649290(a1, (__int64)"T_Help00", (__int64)"Bullet00",
                 (unsigned __int8*)v63_.v63);
  if ((v63_.v63[0] & 1) != 0 && v63_.v64 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v63_.v64);
  }
  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    fw_text_String_CopyTerminated(v60_.v60, *(_QWORD*)(a1 + 1136),
                                  *(_QWORD*)(a1 + 1128));
  }
  else {
    v24 = *(_QWORD*)(a1 + 1128);
    v25 = *(_QWORD*)(a1 + 1136);
    v60_.v60[0] = *(_QWORD*)(a1 + 1120);
    v60_.v60[1] = v24;
    v60_.v61 = v25;
  }
  v60_.v62 = *(_WORD*)(a1 + 1144);
  Dialog_1649290(a1, (__int64)"T_Help01", (__int64)"Bullet01",
                 (unsigned __int8*)v60_.v60);
  if ((v60_.v60[0] & 1) != 0 && v60_.v61 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v60_.v61);
  }
  v27 = *(unsigned __int8*)(a1 + 1088);
  if ((v27 & 1) != 0) {
    v28 = *(_QWORD*)(a1 + 1096);
  }
  else {
    v28 = v27 >> 1;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Help00",
                                        v28 != 0);
  v29 = *(unsigned __int8*)(a1 + 1120);
  if ((v29 & 1) != 0) {
    v30 = *(_QWORD*)(a1 + 1128);
  }
  else {
    v30 = v29 >> 1;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Help01",
                                        v30 != 0);
  v31 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                        (__int64)"N_Help00");
  v32 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                        (__int64)"N_Help01");
  if (v31 != 0 && v32 != 0) {
    v33 = *(_OWORD*)(v31 + 112);
    v34 = *(float32x4_t*)(v31 + 128);
    v35 = *(_OWORD*)(v31 + 144);
    v36 = (const char*)v31;
    LOBYTE(v84) = 0;
    *(_QWORD*)&v66 = 0xFF7FFFFF7F7FFFFFLL;
    v85 = 0x7F7FFFFFFF7FFFFFLL;
    LANES128(v34).n128_u64[0] = LANES128_OF(vmulq_f32(v34, v34)).n128_u64[0];
    v37 = sqrtf((float)(LANES128(v34).n128_f32[0] +
                        (float)(*(float*)&v33 * *(float*)&v33)) +
                (float)(*(float*)&v35 * *(float*)&v35));
    LODWORD(v33) = *(_DWORD*)(v31 + 72);
    LODWORD(v35) = *(_DWORD*)(v31 + 76);
    v38 = v32;
    GameRoutine_156bee0_alt1(
        v36, (__int64)&v66, (__int64)&v85, (__int64)&v84, 0,
        v37 / *(float*)&v33,
        sqrtf((float)(LANES128(v34).n128_f32[1] +
                      (float)(*((float*)&v33 + 1) * *((float*)&v33 + 1))) +
              (float)(*((float*)&v35 + 1) * *((float*)&v35 + 1))) /
            *(float*)&v35);
    v39 = *(float*)&v85;
    v40 = *(float*)&v66;
    v41 = LOBYTE(v84);
    v42 = *(_OWORD*)(v38 + 144);
    LOBYTE(v84) = 0;
    *(_QWORD*)&v66 = 0xFF7FFFFF7F7FFFFFLL;
    v85 = 0x7F7FFFFFFF7FFFFFLL;
    v43 = vabds_f32(v39, v40);
    if (v41 != 0) {
      v44 = v43;
    }
    else {
      v44 = 0x0.0p+0f;
    }
    v45 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v38 + 128), *(float32x4_t*)(v38 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0_alt1(
        (const char*)v38, (__int64)&v66, (__int64)&v85, (__int64)&v84, 0,
        sqrtf((float)(*(float*)&v45 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v38 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v38 + 112)))) +
              (float)(*(float*)&v42 * *(float*)&v42)) /
            *(float*)(v38 + 72),
        sqrtf((float)(*((float*)&v45 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v38 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v38 + 112))))) +
              (float)(*((float*)&v42 + 1) * *((float*)&v42 + 1))) /
            *(float*)(v38 + 76));
    *(_QWORD*)((char*)&v66 + 4) = 0;
    v46 = vabds_f32(*(float*)&v85, *(float*)&v66);
    if (LOBYTE(v84) == 0) {
      v46 = 0x0.0p+0f;
    }
    if (v44 > v46) {
      v46 = v44;
    }
    v47 = v46 * -0x1.0000000000000p-1f;
    *(float*)&v66 = v46 * -0x1.0000000000000p-1f;
    ui_LayoutAccessor_SetPaneTranslate((__int64*)(a1 + 848), "N_Help00",
                                       (__int64)&v66);
    *(float*)&v66 = v47;
    *(_QWORD*)((char*)&v66 + 4) = 0;
    ui_LayoutAccessor_SetPaneTranslate((__int64*)(a1 + 848), "N_Help01",
                                       (__int64)&v66);
  }
  v48 = *(unsigned __int8*)(a1 + 1088);
  v49 = *(_QWORD*)(a1 + 1096);
  if ((v48 & 1) == 0) {
    v49 = v48 >> 1;
  }
  if (v49 != 0) {
    v50 = *(unsigned __int8*)(a1 + 1113);
    if ((v48 & 1) != 0) {
      v51 = *(const char**)(a1 + 1104);
    }
    else {
      v51 = (const char*)(a1 + 1089);
    }
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 952, (__int64)"T_Help", 0);
    if (v50 == 1) {
      if (v51 == nullptr || *v51 == 0) {
        return;
      }
    }
    else {
      if (v51 == nullptr || *v51 == 0) {
        return;
      }
      v71 = -1;
      v72 = -1;
      v73 = -1;
      v74 = -1;
      v52 = *msg_MessageManager_instance__ptr[0];
      v75 = -1;
      v76 = -1;
      v77 = -1;
      v78 = -1;
      v79 = -1;
      v80 = -1;
      v81 = -1;
      v82 = -1;
      *(_QWORD*)&v66 = msg_TagSelector_vtable;
      *((_QWORD*)&v66 + 1) = 0xFFFF0001FFFF0000LL;
      v67 = 0xFFFF0004FFFF0002LL;
      v68 = 0xFFFF0006FFFF0005LL;
      v83 = 8;
      v69 = -65529;
      v70 = -65528;
      v53 = GameRoutine_a4dbe0_alt2(v52, v51, 0);
      if (v53 == nullptr) {
        goto LABEL_77;
      }
      v51 = v53;
    }
    v54 =
        ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 952), (__int64)"T_Help");
    if (v54 != 0) {
      GameRoutine_156c5d0(v54, (__int64)v51, 0);
    }
  LABEL_77:
    v55 =
        ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 952), (__int64)"T_Help");
    if (v55 != 0) {
      v56 = v55;
      v57 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 952),
                                                   (__int64)"T_Help");
      if (v57 != nullptr) {
        ui_text_190a0c0((float*)&v66, (__int64)&v85, &v84, v57, v57[27]);
        v58 = v85;
      }
      else {
        v58 = 0;
      }
      v59 = *(_BYTE*)(v56 + 88);
      *(_QWORD*)(v56 + 80) = v58;
      *(_BYTE*)(v56 + 88) = v59 | 0x10;
    }
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 952, (__int64)"T_Help", 1);
  }
}

__int64 Dialog_16495e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  char v7;
  int v8;
  __int64 v9;
  struct {
    _QWORD* v10;
    __int64 v11;
  } v10_;

  v1 = a1[29];
  v2 = a1[30];
  if (v1 != v2 && (unsigned int)((unsigned __int64)(v2 - v1 + 0x7FFFFFFF8LL) >>
                                 3) <= 0x7FFFFFFE) {
    return GameRoutine_16df7a0_alt1((__int64)a1);
  }
  LayoutAccessor_1560070((void*)(&v10_.v10), a1 + 106, "L_NextCursor");
  if (v10_.v11 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v10_.v11);
    if (v5 != 0) {
      v6 = v5;
      if (v10_.v10 != nullptr) {
        v7 = ui_LayoutAccessor_IsPaneVisible_alt1(a1 + 106,
                                                  (__int64)"L_NextCursor");
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak_alt1(v6);
        }
        if (v10_.v11 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v10_.v11);
        }
        if ((v7 & 1) == 0) {
          LayoutAccessor_155d940_alt1(a1 + 164);
          ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 106),
                                                (__int64)"L_NextCursor", 1);
          LayoutAccessor_155cda0_alt1((__int64)(a1 + 164), "In", nullptr);
        }
        goto LABEL_17;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v6);
      }
    }
    if (v10_.v11 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v10_.v11);
    }
  }
LABEL_17:
  if ((*(_BYTE*)(game_g_game_setting + 952) & 3) != 0 ||
      (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0) {
    LayoutAccessor_155d940_alt1(a1 + 164);
    LayoutAccessor_155cda0_alt1((__int64)(a1 + 164), "Out", nullptr);
    v9 = a1[160];
    if (v9 != 0) {
      v10_.v10 = a1;
      v8 = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v9 + 48LL))(v9,
                                                                     &v10_.v10);
    }
    else {
      v8 = 2;
    }
  }
  else {
    v8 = 0;
  }
  return GameRoutine_16e0120_alt1((__int64)a1, v8);
}

__int64 Dialog_16499c0(__int64 result)
{
  char* v1;
  char* v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  int v9;

  v1 = *(char**)(result + 232);
  v2 = *(char**)(result + 240);
  v3 = result;
  if (v1 != v2 && ((v2 - v1 + 0x7FFFFFFF8LL) & 0x7FFFFFFF8LL) == 8) {
    v4 = v1 + 8;
    if (v4 == v2) {
      v5 = 0;
    }
    else {
      v5 = *(_QWORD*)v4;
    }
    result = *(_QWORD*)(result + 336);
    if (result != v5) {
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
      }
      *(_QWORD*)(v3 + 336) = v5;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 0, 1, 0);
      result = *(_QWORD*)(v3 + 336);
      if (result == 0) {
        v6 = 4;
      LABEL_16:
        *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v6;
        v1 = *(char**)(v3 + 232);
        v2 = *(char**)(v3 + 240);
        goto LABEL_17;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(v3 + 336);
    }
    v6 = 4;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
      if ((result & 1) != 0) {
        v6 = 4;
      }
      else {
        v6 = 0;
      }
    }
    goto LABEL_16;
  }
LABEL_17:
  if (v1 != v2 && ((v2 - v1 + 0x7FFFFFFF8LL) & 0x7FFFFFFF8LL) == 0x10) {
    if (v1 + 8 == v2 || (v7 = (__int64*)(v1 + 16)) == (__int64*)v2) {
      v8 = 0;
    }
    else {
      v8 = *v7;
    }
    result = *(_QWORD*)(v3 + 336);
    if (result != v8) {
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
      }
      *(_QWORD*)(v3 + 336) = v8;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 0, 1, 0);
      result = *(_QWORD*)(v3 + 336);
      if (result == 0) {
        v9 = 4;
      LABEL_33:
        *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v9;
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(v3 + 336);
    }
    v9 = 4;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
      if ((result & 1) != 0) {
        v9 = 4;
      }
      else {
        v9 = 0;
      }
    }
    goto LABEL_33;
  }
  return result;
}

__int64 Dialog_1649ba0(__int64 a1, __int64** a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  float v14;
  __int64 v15;
  _BYTE* v16;
  char v17;

  if (a1 == 0 || a2[1] == *a2) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_225d6d8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_225d6d8) != 0) {
    GameData_225d678 = 0;
    GameData_225d680 = 0;
    GameData_225d688 = 0;
    GameData_225d690 = 0;
    GameData_225d698 = 0;
    GameData_225d6c0 = 0;
    GameData_225d6c8 = 0;
    GameData_225d6d0 = 0;
    GameData_225d6a0 = 0;
    GameData_225d6a8 = 0;
    GameData_225d658 = 14;
    GameData_225d6b0 = 0;
    GameData_225d6b8 = 0;
    GameData_225d660 = 0;
    GameData_225d668 = 16;
    GameData_225d670 = 1;
    __cxa_guard_release_alt1((__int64)&GameData_225d6d8);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 184, 16, 0);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register_alt1(v5);
  v8 = *a2;
  v9 = a2[1];
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  v10 = (char*)v9 - (char*)v8;
  *(_QWORD*)v5 = game_menu_ProcDialogList_vtable;
  *(_QWORD*)(v5 + 168) = 0;
  if (v9 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260_alt1();
    }
    v11 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *v4, (char*)v9 - (char*)v8, 16, 0);
    *(_QWORD*)(v5 + 152) = v11;
    *(_QWORD*)(v5 + 160) = v11;
    *(_QWORD*)(v5 + 168) = (char*)v11 + v10;
    do {
      GameConverge_8f24c0_alt1(v11, v8);
      v8 += 6;
      v11 += 6;
    } while (v8 != v9);
    *(_QWORD*)(v5 + 160) = v11;
  }
  *(_DWORD*)(v5 + 176) = 0;
  GameRoutine_8679c0_alt1();
  v12 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v13 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v13 & 0x10) == 0) {
      v14 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v13 & 0xFFFFFFE2 | 1;
      if (v14 > 0x0.0p+0f) {
        *(_DWORD*)(v12 + 224) = 0;
      }
    }
  }
  v15 = *(_QWORD*)(a1 + 40);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "ProcDialogList";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32_alt1("ProcDialogList");
  *(_QWORD*)(v5 + 8) = &GameData_225d658;
  *(_QWORD*)(v5 + 16) = &GameData_225d658;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v16 = (_BYTE*)*v7;
  v17 = *(_BYTE*)(*v7 + 138LL);
  if (v17 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v16 + 64LL))(*v7);
    v17 = v16[138];
  }
  v16[138] = v17 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  return v5;
}

__int64 Dialog_1649e50(__int64 result, __int64 a2, char a3, char a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v4 = *(unsigned __int8*)(result + 1088);
  v5 = *(_QWORD*)(result + 1096);
  v6 = (_QWORD*)(result + 1088);
  v7 = result;
  v8 = v4 & 1;
  v9 = v4 >> 1;
  if (v8 != 0) {
    v10 = *(_QWORD*)(result + 1096);
  }
  else {
    v10 = v9;
  }
  if (v10 == 0) {
    v14 = 1113;
    v15 = 1112;
    v13 = result + 1088;
    goto LABEL_11;
  }
  v11 = *(unsigned __int8*)(result + 1120);
  if ((v11 & 1) != 0) {
    v12 = *(_QWORD*)(result + 1128);
  }
  else {
    v12 = v11 >> 1;
  }
  if (v12 == 0) {
    v13 = result + 1120;
    v14 = 1145;
    v15 = 1144;
  LABEL_11:
    v16 = a3 & 1;
    v17 = a4 & 1;
    result = GameRoutine_60a020(v13, a2);
    v18 = *(unsigned __int8*)(v7 + 1088);
    v5 = *(_QWORD*)(v7 + 1096);
    *(_BYTE*)(v7 + v15) = v16;
    v8 = v18 & 1;
    v9 = v18 >> 1;
    *(_BYTE*)(v7 + v14) = v17;
  }
  if (v8 != 0) {
    v19 = v5;
  }
  else {
    v19 = v9;
  }
  if (v19 != 0) {
    v20 = *(unsigned __int8*)(v7 + 1120);
    if ((v20 & 1) != 0) {
      v21 = *(_QWORD*)(v7 + 1128);
    }
    else {
      v21 = v20 >> 1;
    }
    if (v21 != 0 && (*(_BYTE*)(v7 + 1112) & 1) != 0 &&
        (*(_BYTE*)(v7 + 1144) & 1) == 0) {
      v22 = *(_QWORD*)(v7 + 1088);
      v23 = *(_QWORD*)(v7 + 1104);
      v24 = *(_WORD*)(v7 + 1112);
      v25 = *(_QWORD*)(v7 + 1120);
      v26 = *(_QWORD*)(v7 + 1128);
      v27 = *(_QWORD*)(v7 + 1136);
      *(_QWORD*)(v7 + 1128) = v5;
      *(_QWORD*)(v7 + 1120) = v22;
      *(_QWORD*)(v7 + 1136) = v23;
      v6[2] = v27;
      LOWORD(v27) = *(_WORD*)(v7 + 1144);
      *v6 = v25;
      v6[1] = v26;
      *(_WORD*)(v7 + 1144) = v24;
      *(_WORD*)(v7 + 1112) = v27;
    }
  }
  return result;
}

__int64 game_menu_Dialog_PostBuild_lambda0_Invoke(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  int v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  _BYTE* v32;
  __int64 v33;
  __int64 v34;
  float v35;
  char v36;
  __int64 v38;
  __int64* v39;
  struct {
    __int64* v40[4];
    int v41;
    int v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v40_;
  float v56;
  _QWORD* v57;

  v2 = *(_QWORD**)a2;
  v4 = *(_QWORD*)(*(_QWORD*)a2 + 56LL);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock_alt1(v4);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = (__int64*)v2[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v38 = v5;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak_alt1(v38);
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v7 = (*(__int64 (**)(_QWORD*))(*v2 + 48LL))(v2);
  LayoutAccessor_155e830_alt1((__int64)v6, v7 & 1);
  v8 = v2[7];
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = std___1___shared_weak_count_lock_alt1(v8);
  if (v9 == 0) {
    goto LABEL_10;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)v2[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v39 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v10);
    v12 = v39;
    if (v39 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if (v12 == nullptr) {
  LABEL_10:
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_11:
  v13 = ui_LayoutAccessor_FindPane_alt1(v12, (__int64)"T_Txt");
  if (v13 != 0) {
    v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d690, 0);
    if (v14 != 0) {
      v15 = v14;
      v16 = v2[7];
      if (v16 == 0) {
        goto LABEL_18;
      }
      v17 = std___1___shared_weak_count_lock_alt1(v16);
      if (v17 == 0) {
        goto LABEL_18;
      }
      v18 = v17;
      v19 = (atomic_ullong*)(v17 + 8);
      v20 = (__int64*)v2[6];
      if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v21 = v20;
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt1(v18);
        v20 = v21;
      }
      if (v20 == nullptr) {
      LABEL_18:
        v20 = ui_LayoutAccessor_empty__ptr[0];
      }
      v22 = ui_LayoutAccessor_FindPane_alt1(v20, (__int64)"Wdw");
      if (v22 != 0) {
        v23 = *(float*)(v22 + 80);
        v24 = *(float*)(v15 + 80);
        v25 = v22;
        v26 = *(_QWORD*)(a1 + 16);
        v57 = v2;
        v40_.v40[0] = (__int64*)&v57;
        *(float*)(Dialog_164b120_alt1(v26, (__int64*)&v57, v40_.v40) + 24) =
            v23 - v24;
        v27 = Pane_58fac0_alt1(v25, "Margin_Width");
        if (v27 != nullptr) {
          v28 = *(_DWORD*)&v27[*((unsigned int*)v27 + 1)];
          v29 = *(_QWORD*)(a1 + 16);
          v57 = v2;
          v40_.v40[0] = (__int64*)&v57;
          *(float*)(Dialog_164b120_alt1(v29, (__int64*)&v57, v40_.v40) + 24) =
              (float)v28 + (float)v28;
        }
      }
      if (*((_BYTE*)v2 + 83) == 1) {
        v30 = (char*)(*(__int64 (**)(_QWORD*))(*v2 + 24LL))(v2);
      }
      else {
        v31 = (*(__int64 (**)(_QWORD*))(*v2 + 24LL))(v2);
        if (v31 == 0) {
          v34 = 0;
          goto LABEL_27;
        }
        v32 = (_BYTE*)v31;
        v40_.v43 = -1;
        v40_.v44 = -1;
        v40_.v45 = -1;
        v40_.v46 = -1;
        v33 = *msg_MessageManager_instance__ptr[0];
        v40_.v47 = -1;
        v40_.v48 = -1;
        v40_.v49 = -1;
        v40_.v50 = -1;
        v40_.v51 = -1;
        v40_.v52 = -1;
        v40_.v53 = -1;
        v40_.v54 = -1;
        v40_.v40[0] = GameData_212e348 + 2;
        v40_.v40[1] = (__int64*)0xFFFF0001FFFF0000LL;
        v40_.v40[2] = (__int64*)0xFFFF0004FFFF0002LL;
        v40_.v40[3] = (__int64*)0xFFFF0006FFFF0005LL;
        v40_.v55 = 8;
        v40_.v41 = -65529;
        v40_.v42 = -65528;
        v30 = GameRoutine_a4dbe0_alt1(v33, v32, 0);
      }
      v34 = (__int64)v30;
    LABEL_27:
      GameRoutine_190a0c0_alt1((float*)v40_.v40, (__int64)&v57, &v56,
                               (_QWORD*)v15, v34);
      v35 = *(float*)&v57;
      v36 = *(_BYTE*)(v15 + 88) | 0x10;
      *(_QWORD*)(v15 + 80) = v57;
      *(_BYTE*)(v15 + 88) = v36;
      **(float**)(a1 + 8) = fmaxf(**(float**)(a1 + 8), v35);
    }
  }
  return 0;
}

__int64 Dialog_164b120(__int64 a1, __int64* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;

  v4 = *a2;
  v53 = *a2;
  v7 = std___1___hash_memory_alt1((__int64)&v53, 8u);
  v8 = *(_QWORD*)(a1 + 8);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != 0) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = *(_QWORD*)(result + 8);
            if (v14 == v9) {
              if (*(_QWORD*)(result + 16) == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_22;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = *(_QWORD*)(result + 8);
          if (v13 == v9) {
            if (*(_QWORD*)(result + 16) == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = *a3;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v9;
  v17 = *(float*)(a1 + 32);
  v18 = *v16;
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 16) = v18;
  v19 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v8 == 0 || (float)(v17 * (float)v8) < v19) {
    v20 = v19 / v17;
    v21 = true;
    if (v8 >= 3) {
      v21 = (v8 & (v8 - 1)) != 0;
    }
    v22 = v21 | (2 * v8);
    v23 = vcvtps_u64_f32(v20);
    if (v22 <= v23) {
      primeEm = v23;
    }
    else {
      primeEm = v22;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v25 = result;
      primeEm = std___1___next_prime_alt1(primeEm);
      result = v25;
      v8 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v8) {
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      v32 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v45 = result;
        v32 = std___1___next_prime_alt1(v32);
        result = v45;
      }
      else {
        v33 = 1LL << (-(char)__clz(v32 - 1) & 63);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (primeEm <= v32) {
        primeEm = v32;
      }
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v46 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v46 != 0) {
          v47 = result;
          v48 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v15 + v48, v46);
          result = v47;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v26 = result;
    v27 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * primeEm, 16, 0);
    v28 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v27;
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v15 + v29, v28);
    }
    v30 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v31 = 0;
      result = v26;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 48) = 0;
        v34 = *(_QWORD*)a1 + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v34 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v31);
    }
    else {
      v31 = 0;
      result = v26;
    }
    if ((primeEm & 7) != 0) {
      v35 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(*(_QWORD*)a1 + v35) = 0;
        v35 += 8;
      } while (v30 != 0);
    }
    v37 = a1 + 16;
    v36 = *(_QWORD**)(a1 + 16);
    if (v36 != nullptr) {
      v38 = v36[1];
      v39 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v38 >= primeEm) {
          v38 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v37;
        v40 = (_QWORD*)*v36;
        if (*v36 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v41 = v40[1];
          if (v41 >= primeEm) {
            v41 %= primeEm;
          }
          if (v41 != v38) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
              goto LABEL_60;
            }
            *v36 = *v40;
            *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
            v40 = v36;
          }
          v41 = v38;
        LABEL_60:
          v36 = v40;
          v40 = (_QWORD*)*v40;
          v38 = v41;
          if (v40 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v42 = v38 & v39;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v37;
      while (1) {
        v43 = (_QWORD*)*v36;
        if (*v36 == 0) {
          break;
        }
        v44 = v43[1] & v39;
        if (v44 == v42) {
          v36 = (_QWORD*)*v36;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) != 0) {
          *v36 = *v43;
          *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v36;
          v36 = v43;
          v42 = v44;
        }
      }
    }
  LABEL_83:
    v8 = *(_QWORD*)(a1 + 8);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v49 = *(_QWORD*)a1;
  v50 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v50 != nullptr) {
    *(_QWORD*)result = *v50;
    *v50 = result;
  }
  else {
    v51 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v51;
    *(_QWORD*)(v49 + 8 * v3) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v52 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v52 >= v8) {
          v52 %= v8;
        }
      }
      else {
        v52 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__int64 game_menu_Dialog_PostBuild_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  float v12;
  unsigned __int64 v13;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  float** v21;
  float* v22;
  unsigned __int64 v23;
  __int64 v24;
  float v25;
  int v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  atomic_ullong* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v39;

  v2 = *a2;
  v4 = *(_QWORD*)(*a2 + 56);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = *(__int64**)(v2 + 48);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v20 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v8 = v20;
    if (v20 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v8 == nullptr) {
  LABEL_5:
    v8 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v9 = ui_LayoutAccessor_FindPane(v8, "Wdw");
  if (v9 != 0) {
    v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212fc70[0], 0);
    if (v10 != 0) {
      v11 = *(_QWORD**)(a1 + 24);
      v12 = 0.0;
      v13 = v11[1];
      if (v13 != 0 && v11[3] != 0) {
        v15 = v10;
        v39 = v2;
        v16 = std___1___hash_memory(&v39, 8);
        v17 = v13 - 1;
        v18 = v16;
        if ((v13 & (v13 - 1)) != 0) {
          v19 = v16;
          if (v16 >= v13) {
            v19 = v16 % v13;
          }
        }
        else {
          v19 = v16 & v17;
        }
        v10 = v15;
        v21 = *(float***)(*v11 + 8 * v19);
        if (v21 != nullptr) {
          v22 = *v21;
          if (v22 != nullptr) {
            if ((v13 & v17) == 0) {
              while (1) {
                v24 = *((_QWORD*)v22 + 1);
                if (v24 == v18) {
                  if (*((_QWORD*)v22 + 2) == v2) {
                    goto LABEL_34;
                  }
                }
                else if ((v24 & v17) != v19) {
                  goto LABEL_35;
                }
                v22 = *(float**)v22;
                if (v22 == nullptr) {
                  goto LABEL_35;
                }
              }
            }
            do {
              v23 = *((_QWORD*)v22 + 1);
              if (v23 == v18) {
                if (*((_QWORD*)v22 + 2) == v2) {
                LABEL_34:
                  v12 = v22[6];
                  break;
                }
              }
              else {
                if (v23 >= v13) {
                  v23 %= v13;
                }
                if (v23 != v19) {
                  break;
                }
              }
              v22 = *(float**)v22;
            } while (v22 != nullptr);
          }
        }
      }
    LABEL_35:
      v25 = *(float*)(v10 + 80);
      v26 = *(_DWORD*)(v10 + 84);
      v27 = v12 + **(float**)(a1 + 16);
      *(_BYTE*)(v10 + 88) |= 0x10u;
      v28 = fmaxf(v25, v27);
      *(float*)(v10 + 80) = v28;
      v29 = *(_QWORD*)(v2 + 56);
      if (v29 == 0) {
        goto LABEL_40;
      }
      v30 = std___1___shared_weak_count_lock(v29);
      if (v30 == 0) {
        goto LABEL_40;
      }
      v31 = v30;
      v32 = (atomic_ullong*)(v30 + 8);
      v33 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v32, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v34 = v33;
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak(v31);
        v33 = v34;
      }
      if (v33 == nullptr) {
      LABEL_40:
        v33 = ui_LayoutAccessor_empty__ptr[0];
      }
      v35 = ui_LayoutAccessor_FindPane(v33, "Wdw_Overlay");
      if (v35 != 0) {
        v36 = __dynamic_cast(v35, GameData_212d670[0], GameData_212fc70[0], 0);
        if (v36 != 0) {
          v37 = *(_BYTE*)(v36 + 88);
          *(float*)(v36 + 80) = v28;
          *(_DWORD*)(v36 + 84) = v26;
          *(_BYTE*)(v36 + 88) = v37 | 0x10;
        }
      }
      **(float**)(a1 + 8) = fmaxf(**(float**)(a1 + 8), v28);
    }
  }
  return 0;
}

__int64 game_menu_Dialog_SetDecideSe_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _BYTE v3[200];

  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    v1 = *(_QWORD*)(result + 24);
  }
  else {
    v1 = result + 9;
  }
  if (v1 != 0) {
    snd_Fade_Fade_10c830(v3, 0.0f);
    snd_play_ff2d0((void*)(&v2), v1, v1, v3, 0, 65537, 0, 0.0f, 1.0f);
    return snd_Fade_Destroy_Fade(v3);
  }
  return result;
}

#pragma GCC visibility pop
