#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void AnimLayerCtrlModule_ce5500(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void
    GameRoutine_9b8fe0_alt1(PSEUDO_X8, _QWORD,
                            _QWORD) __asm__("GameRoutine_9b8fe0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void
    LayoutAccessor_1560070_alt1(PSEUDO_X8, _QWORD,
                                _QWORD) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_17418a0();
__int64 GameRoutine_1741a40();
__int64 GameRoutine_1741b10();
__int64 GameRoutine_1741f10(_QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_675980(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_8679c0(void);
__int64 GameRoutine_867df0(void);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 JobIcon_19a8c50(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 TextBoxEx_188ab20(_QWORD, _QWORD, long double);
__int64 Util_1586140(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString32(__int64 result);
__int64 game_HashString32_alt1(long double) __asm__("game_HashString32");
__int64 game_ProcInst_Register(__int64);
__int64 game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneAlpha(_QWORD, _QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_SetPaneTranslate(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_1763490(__int64, __int64, __int64);
__n128 game_ProcInst_Register_alt1(_QWORD) __asm__("game_ProcInst_Register");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak();
__n128 ui_LayoutAccessor_SetPaneSize(_QWORD, _QWORD, float, float);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN GameData_2170810;
extern _UNKNOWN GameData_2263650;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*game_telop_MotivationCaller_vtable[])();
extern __int64 (*game_telop_TelopGrowMastery_vtable[])();
extern __int64 (*game_telop_TelopLevelUp_vtable[])();
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64 (*game_telop_TelopStill_vtable[])();
extern __int64 (*game_telop_TelopTrainingResult_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212e348;
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d690;
extern __int64 GameData_2131678;
extern __int64 GameData_2131cf8[27];
extern __int64 GameData_21caa2c;
extern __int64 GameData_22634d8;
extern __int64 GameData_22634e0;
extern __int64 GameData_22634e8;
extern __int64 GameData_22634f8;
extern __int64 GameData_2263508;
extern __int64 GameData_2263518;
extern __int64 GameData_2263520;
extern __int64 GameData_2263528;
extern __int64 GameData_2263538;
extern __int64 GameData_2263548;
extern __int64 GameData_2263558;
extern __int64 GameData_2263560;
extern __int64 GameData_2263568;
extern __int64 GameData_2263578;
extern __int64 GameData_2263588;
extern __int64 GameData_2263598;
extern __int64 GameData_22635a0;
extern __int64 GameData_22635a8;
extern __int64 GameData_22635b8;
extern __int64 GameData_22635c8;
extern __int64 GameData_22635d8;
extern __int64 GameData_22635e0;
extern __int64 GameData_22635e8;
extern __int64 GameData_22635f8;
extern __int64 GameData_2263608;
extern __int64 GameData_2263618;
extern __int64 GameData_2263620;
extern __int64 GameData_2263628;
extern __int64 GameData_2263638;
extern __int64 GameData_2263648;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_22634d0;
extern char GameData_2263510;
extern char GameData_2263550;
extern char GameData_2263590;
extern char GameData_22635d0;
extern char GameData_2263610;
extern int GameData_22634f0;
extern int GameData_2263500;
extern int GameData_2263530;
extern int GameData_2263540;
extern int GameData_2263570;
extern int GameData_2263580;
extern int GameData_22635b0;
extern int GameData_22635c0;
extern int GameData_22635f0;
extern int GameData_2263600;
extern int GameData_2263630;
extern int GameData_2263640;
void GameRoutine_13739e0(__int64);
void GameRoutine_17356e0(_QWORD*, __int64);
void GameRoutine_175ca40(__int64, float32x2_t*);
void GameRoutine_17644e0(_QWORD*, __int64, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_1387d40();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_e66f80(_QWORD);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
__attribute__((swiftcall)) void
game_telop_1376180_alt1(PSEUDO_X8 x8_, const char*** a1, __int64* a2,
                        __int64 a3, __int64 a4, __int64 a5, __int64 a6,
                        __int64 a7, __int64 a8) __asm__("game_telop_1376180");
__int64 game_telop_1376490(__int64 a1, __int64 a2, char a3);
void game_telop_1377500(__int64 a1, unsigned __int8* a2);
__int64 game_telop_1741620(__int64 a1, __int64* a2, char a3);
__int64 game_telop_1745d80(__int64 a1, __int64 a2, int a3, char a4, __int64 a5);
__n128 game_telop_175cd90_alt1(__int64* a1) __asm__("game_telop_175cd90");
__n128 game_telop_1763c20_alt1(__int64 a1,
                               __int64** a2) __asm__("game_telop_1763c20");
void game_telop_1766400(__int64 a1, int* a2, _BYTE* a3);
__int64 game_telop_17665e0(__int64 result, int* a2, _BYTE* a3);
void game_telop_1768fe0(__int64 a1);
__int64 game_telop_1770d20(__int64 a1);
__int64 game_telop_177ac10(__int64 a1, __int64 a2, char a3, int a4);
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 TelopParts_17cbd60(_QWORD, long double);
__int64 TelopParts_17cd840(_QWORD, _QWORD);
__int64 TelopParts_17cdaa0(_QWORD, _QWORD);
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 game_GameModeData_instance_;
__int64 game_telop_17cc420_alt1(__int64 a1, __int64 a2, __int64 a3, int a4,
                                char a5) __asm__("game_telop_17cc420");
_QWORD* GameRoutine_654050_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_654050");
_QWORD* TelopParts_17cdaa0_alt1(_QWORD* result,
                                __int64*) __asm__("TelopParts_17cdaa0");
__attribute__((swiftcall)) void
AnimLayerCtrlModule_ce5500_alt1(PSEUDO_X8, unsigned __int64* result,
                                unsigned int, __int64, unsigned int,
                                __int64) __asm__("AnimLayerCtrlModule_ce5500");
__attribute__((swiftcall)) void
GameRoutine_9b8fe0_alt2(PSEUDO_X8, __int64*,
                        __int64*) __asm__("GameRoutine_9b8fe0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt2(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64* GameRoutine_1760e40_alt1(__int64,
                                  unsigned int) __asm__("GameRoutine_1760e40");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameReliance_8e17a0_alt1(_QWORD*, __int64,
                                 __int64) __asm__("GameReliance_8e17a0");
__int64 GameRoutine_17356e0_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_17356e0");
__int64 GameRoutine_175ca40_alt1(__int64) __asm__("GameRoutine_175ca40");
__int64 GameRoutine_867df0_alt1() __asm__("GameRoutine_867df0");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 TelopParts_17cd840_alt1(__int64*,
                                __int64) __asm__("TelopParts_17cd840");
__int64 Util_1586140_alt1(__int64*, __int64*) __asm__("Util_1586140");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneSize_alt1(
    __int64 result, __int64, float,
    float) __asm__("ui_LayoutAccessor_SetPaneSize");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* game_util_Format_alt2(const char*, ...) __asm__("game_util_Format");
const char*
game_HashString32_alt2(const char* result) __asm__("game_HashString32");
float ui_LayoutAccessor_SetPaneTranslate_alt1(
    __int64*, __int64, __int64) __asm__("ui_LayoutAccessor_SetPaneTranslate");
void GameHr_8679c0();
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void TelopParts_17cbd60_alt1(__int64) __asm__("TelopParts_17cbd60");
void TextBoxEx_188ab20_alt1(__int64, _BYTE*) __asm__("TextBoxEx_188ab20");
void __attribute__((noreturn))
GameRoutine_e66f80_alt1() __asm__("GameRoutine_e66f80");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__attribute__((swiftcall)) void game_telop_1376180(PSEUDO_X8 x8_, __int64* a1,
                                                   __int64* a2);
void game_telop_175cd90(__int64 a1);
__int64 game_telop_1763c20(__int64* a1, __int64** a2);
void game_telop_17cc420(__int64* a1, __int64 a2, __int64 a3, int a4, char a5);

__attribute__((swiftcall)) void game_telop_1376180(PSEUDO_X8 x8_, __int64* a1,
                                                   __int64* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* v6;
  __int64 result;
  __int64 v8;
  __int64* v9;
  const char* v10;
  const char** v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  signed __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  const char** v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    const char* v25;
    __int64 v26;
  } v25_;

  v6 = game_util_Format_alt2("L_Txt%02d", (a1[1] - *a1) >> 4);
  LayoutAccessor_1560070_alt2((void*)(&v25_.v25), a2, v6);
  result = v25_.v26;
  if (v25_.v26 == 0) {
    goto LABEL_29;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v25_.v26);
  v9 = (__int64*)v25_.v25;
  result = v25_.v26;
  if (v8 != 0) {
    v10 = v25_.v25;
  }
  else {
    v10 = nullptr;
  }
  if (v25_.v26 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v25_.v26);
  }
  if (v10 != nullptr) {
    v11 = (const char**)a1[1];
    v12 = a1[2];
    if ((unsigned __int64)v11 >= v12) {
      v14 = *a1;
      v15 = (signed __int64)v11 - *a1;
      v16 = v15 >> 4;
      v17 = (v15 >> 4) + 1;
      if (v17 >> 60 != 0) {
        GameRoutine_1387d40();
      }
      v18 = v12 - v14;
      if (v18 >> 3 > v17) {
        v17 = v18 >> 3;
      }
      if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
        v19 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v19 = v17;
      }
      if (v19 >> 60 != 0) {
        GameRoutine_60a210();
      }
      v20 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v19, 16, 0);
      v21 = (const char**)(v20 + v15);
      v22 = v20 + 16 * v19;
      *v21 = v10;
      v21[1] = (const char*)v8;
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v14 = *a1;
        v15 = a1[1] - *a1;
        v16 = v15 >> 4;
      }
      v23 = (__int64)&v21[-2 * v16];
      v13 = v21 + 2;
      memcpy_alt1(v23, v14, v15);
      *a1 = v23;
      a1[1] = (__int64)v13;
      a1[2] = v22;
      if (v14 != 0) {
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v14);
      }
    }
    else {
      *v11 = v10;
      v11[1] = (const char*)v8;
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
      }
      v13 = v11 + 2;
    }
    a1[1] = (__int64)v13;
    v25_.v25 = "L_Txt";
    v25_.v26 = 5;
    result = X8CALL_X0(__int64, GameRoutine_9b8fe0((void*)(a3), v9, &v25_.v25));
  }
  if (v8 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != nullptr) {
      result;
      return;
    }
    goto LABEL_29;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  result = std___1___shared_weak_count___release_weak_alt1(v8);
  if (v10 == nullptr) {
  LABEL_29:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

__int64 game_telop_1376490(__int64 a1, __int64 a2, char a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  char* v12;
  char* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  bool v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    char* v49;
  } v47_;

  if (a1 == 0) {
    return 0;
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      920, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_DWORD*)(v7 + 320) = 3;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = v7 + 200;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_DWORD*)(v7 + 332) = 0;
  *(_BYTE*)(v7 + 338) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = 0;
  *(_QWORD*)(v7 + 368) = 0;
  *(_QWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 324) = 0;
  *(_DWORD*)(v7 + 248) = 1065353216;
  *(_QWORD*)(v7 + 408) = 0;
  *(_QWORD*)(v7 + 416) = 0;
  *(_QWORD*)(v7 + 424) = 0;
  *(_QWORD*)(v7 + 472) = 0;
  *(_QWORD*)(v7 + 480) = 0;
  *(_QWORD*)(v7 + 440) = 0;
  *(_QWORD*)(v7 + 448) = 0;
  *(_QWORD*)(v7 + 504) = 0;
  *(_QWORD*)(v7 + 512) = 0;
  *(_QWORD*)(v7 + 488) = 0;
  *(_QWORD*)(v7 + 496) = 0;
  *(_DWORD*)(v7 + 520) = 1065353216;
  *(_QWORD*)(v7 + 528) = 0;
  *(_QWORD*)(v7 + 536) = 0;
  *(_WORD*)(v7 + 336) = 1;
  *(_QWORD*)(v7 + 544) = 0;
  *(_DWORD*)(v7 + 552) = 1065353216;
  *(_WORD*)(v7 + 560) = 0;
  *(_WORD*)(v7 + 584) = 0;
  *(_BYTE*)(v7 + 608) = 0;
  *(_QWORD*)(v7 + 656) = 0;
  *(_QWORD*)(v7 + 648) = 0;
  *(_QWORD*)(v7 + 632) = 0;
  *(_QWORD*)(v7 + 624) = 0;
  *(_QWORD*)(v7 + 616) = 0;
  *(_DWORD*)(v7 + 432) = 0x2000;
  *(_QWORD*)(v7 + 688) = 0;
  *(_QWORD*)(v7 + 680) = 0;
  *(_QWORD*)(v7 + 672) = 0;
  *(_QWORD*)(v7 + 664) = 0;
  *(_DWORD*)(v7 + 696) = 1065353216;
  *(_QWORD*)(v7 + 720) = 0;
  *(_QWORD*)(v7 + 712) = 0;
  *(_QWORD*)(v7 + 704) = 0;
  *(_DWORD*)(v7 + 728) = 1065353216;
  *(_QWORD*)(v7 + 456) = 0;
  *(_QWORD*)(v7 + 464) = v7 + 472;
  *(_WORD*)(v7 + 736) = 0;
  *(_WORD*)(v7 + 760) = 0;
  *(_BYTE*)(v7 + 784) = 0;
  *(_QWORD*)(v7 + 792) = 0;
  *(_QWORD*)(v7 + 640) = v7 + 648;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v7 + 800) = 0;
  *(_BYTE*)(v7 + 816) = 0;
  *(_BYTE*)(v7 + 820) = 0;
  *(_QWORD*)(v7 + 880) = 0;
  *(_QWORD*)(v7 + 872) = 0;
  *(_QWORD*)(v7 + 864) = 0;
  *(_QWORD*)(v7 + 856) = 0;
  *(_QWORD*)(v7 + 848) = 0;
  *(_QWORD*)(v7 + 840) = 0;
  *(_QWORD*)(v7 + 832) = 0;
  *(_QWORD*)(v7 + 808) = v9;
  *(_QWORD*)v7 = game_telop_TelopStill_vtable;
  *(_QWORD*)(v7 + 896) = -1;
  v10 = GameData_212fca0[0] + 2;
  *(_DWORD*)(v7 + 904) = 0;
  *(_QWORD*)(v7 + 912) = 0;
  *(_BYTE*)(v7 + 824) = a3 & 1;
  *(_QWORD*)(v7 + 888) = v10;
  GameRoutine_13739e0(v7);
  v11 = *(_QWORD*)(a1 + 40);
  if (v11 != 0) {
    *(_QWORD*)(v11 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "TelopStill";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = game_HashString32((__int64)"TelopStill");
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  *(_QWORD*)(v7 + 8) = &GameData_2170810;
  *(_QWORD*)(v7 + 16) = &GameData_2170810;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  if ((*(_BYTE*)(v7 + 272) & 1) != 0) {
    *(_QWORD*)(v7 + 280) = 17;
    v12 = *(char**)(v7 + 288);
  }
  else {
    *(_BYTE*)(v7 + 272) = 34;
    v12 = (char*)(v7 + 273);
  }
  strcpy(v12, "Layout/Common.arc");
  if ((*(_BYTE*)(v7 + 296) & 1) != 0) {
    *(_QWORD*)(v7 + 304) = 15;
    v13 = *(char**)(v7 + 312);
  }
  else {
    *(_BYTE*)(v7 + 296) = 30;
    v13 = (char*)(v7 + 297);
  }
  strcpy(v13, "Common_TlpStill");
  if (*(_DWORD*)(v7 + 320) == 2) {
    v14 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v16 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v15 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v18 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v17 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v39 = v17 == v18;
      v19 = v15 - 1 + v16;
      v20 = v19 >> 7;
      v21 = v19 & 0x7F;
      v22 = 16 * (v17 - v18) - 1;
      v23 = *(_QWORD*)(v18 + 8 * v20);
      if (v39) {
        v22 = 0;
      }
      v24 = v23 + 32 * v21;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v24 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v14[21] = *(_QWORD*)(v24 + 24);
      v25 = *(_QWORD*)(v24 + 16);
      v14[27] = v15 - 1;
      v14[20] = v25;
      if ((unsigned __int64)(v22 - (v15 + v16) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        if (*(_QWORD*)(v17 - 8) != 0) {
          v26 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v26);
          v17 = v14[24];
        }
        v14[24] = v17 - 8;
      }
    }
  }
  *(_DWORD*)(v7 + 320) = 3;
  v27 = strlen(a2);
  if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v28 = (__int64*)(v7 + 832);
  v29 = v27;
  if (v27 >= 0x17) {
    if ((v27 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v27 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(*v6, v31, 16, 0);
    v47_.v48 = v29;
    v47_.v49 = v30;
    v47_.v47 = v31 | 1;
    goto LABEL_32;
  }
  LOBYTE(v47_.v47) = 2 * v27;
  v30 = (char*)&v47_.v47 + 1;
  if (v27 != 0) {
  LABEL_32:
    v27 = memcpy(v30, a2, v29);
  }
  v30[v29] = 0;
  if ((*(_BYTE*)v28 & 1) == 0) {
    if ((v47_.v47 & 1) == 0) {
      v32 = v47_.v48;
      *v28 = v47_.v47;
      *(_QWORD*)(v7 + 840) = v32;
      *(_QWORD*)(v7 + 848) = v47_.v49;
      goto LABEL_47;
    }
    v27 = (unsigned __int64)GameRoutine_64df20((_QWORD*)(v7 + 832),
                                               (__int64)v47_.v49, v47_.v48);
    if (v47_.v49 == nullptr) {
      goto LABEL_47;
    }
  LABEL_44:
    v35 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v35);
    goto LABEL_47;
  }
  if ((v47_.v47 & 1) != 0) {
    v33 = v47_.v49;
  }
  else {
    v33 = (char*)&v47_.v47 + 1;
  }
  if ((v47_.v47 & 1) != 0) {
    v34 = v47_.v48;
  }
  else {
    v34 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
  }
  v27 = (unsigned __int64)SpineModel_64dde0((__int64*)(v7 + 832), (__int64)v33,
                                            v34);
  if ((v47_.v47 & 1) != 0 && v47_.v49 != nullptr) {
    goto LABEL_44;
  }
LABEL_47:
  v36 = *(unsigned __int8*)(v7 + 296);
  v37 = (__int64*)(v7 + 856);
  if ((*(_BYTE*)(v7 + 856) & 1) != 0) {
    v39 = (v36 & 1) == 0;
    v40 = v36 >> 1;
    if (v39) {
      v41 = v7 + 297;
    }
    else {
      v41 = *(_QWORD*)(v7 + 312);
    }
    if (v39) {
      v42 = v40;
    }
    else {
      v42 = *(_QWORD*)(v7 + 304);
    }
    v27 = (unsigned __int64)SpineModel_64dde0((__int64*)(v7 + 856), v41, v42);
  }
  else if ((v36 & 1) != 0) {
    v27 = (unsigned __int64)GameRoutine_64df20(
        (_QWORD*)(v7 + 856), *(_QWORD*)(v7 + 312), *(_QWORD*)(v7 + 304));
  }
  else {
    v38 = *(_QWORD*)(v7 + 304);
    *v37 = *(_QWORD*)(v7 + 296);
    *(_QWORD*)(v7 + 864) = v38;
    *(_QWORD*)(v7 + 872) = *(_QWORD*)(v7 + 312);
  }
  v43 = *(_BYTE*)(v7 + 832) >> 1;
  if ((*(_BYTE*)(v7 + 832) & 1) != 0) {
    v43 = *(_QWORD*)(v7 + 840);
  }
  if (v43 != 0) {
    if ((*(_BYTE*)v37 & 1) != 0) {
      if ((*(_BYTE*)(v7 + 832) & 1) != 0) {
        v45 = *(_QWORD*)(v7 + 848);
      }
      else {
        v45 = v7 + 833;
      }
      v27 = (unsigned __int64)SpineModel_64dde0((__int64*)(v7 + 856), v45, v43);
    }
    else if ((*(_BYTE*)(v7 + 832) & 1) != 0) {
      v27 = (unsigned __int64)GameRoutine_64df20(
          (_QWORD*)(v7 + 856), *(_QWORD*)(v7 + 848), *(_QWORD*)(v7 + 840));
    }
    else {
      v44 = *(_QWORD*)(v7 + 840);
      *v37 = *v28;
      *(_QWORD*)(v7 + 864) = v44;
      *(_QWORD*)(v7 + 872) = *(_QWORD*)(v7 + 848);
    }
    game_telop_1377500(v27, (unsigned __int8*)(v7 + 856));
  }
  return v7;
}

void game_telop_1377500(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  __int64 v6;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  _BYTE* v26;
  unsigned __int8* v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    char* v34;
  } v32_;

  v2 = *a2;
  v4 = *((_QWORD*)a2 + 1);
  v3 = *((unsigned __int8**)a2 + 2);
  v5 = a2 + 1;
  v6 = -1;
  v8 = 0;
  v9 = v2 & 1;
  v10 = v2 >> 1;
  if (v9 != 0) {
    v11 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v11 = a2 + 1;
  }
  if (v9 != 0) {
    v12 = *((_QWORD*)a2 + 1);
  }
  else {
    v12 = v10;
  }
  v13 = &v11[v12];
  do {
    if (v12 + v8 == 0) {
      goto LABEL_27;
    }
    v14 = &v13[v8--];
    ++v6;
  } while (*(v14 - 1) != 47);
  if (v12 + v8 != -1) {
    if (v12 + v8 >= v12) {
      String_60a230();
    }
    if (v8 <= 8) {
      goto LABEL_59;
    }
    v15 = ~v8;
    if (~v8 >= 0x17) {
      if ((v15 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v15 | 7) + 1;
      }
      v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17,
                                                  16, 0);
      v32_.v33 = ~v8;
      v32_.v34 = v16;
      v32_.v32 = v17 | 1;
    }
    else {
      LOBYTE(v32_.v32) = 2 * v15;
      v16 = (char*)&v32_.v32 + 1;
      if (v8 == -1) {
      LABEL_21:
        v16[v6] = 0;
        if ((*a2 & 1) != 0 && *((_QWORD*)a2 + 2) != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v18);
        }
        v19 = v32_.v33;
        *(_QWORD*)a2 = v32_.v32;
        *((_QWORD*)a2 + 1) = v19;
        v20 = (unsigned __int8*)v32_.v34;
        v21 = *a2;
        v4 = *((_QWORD*)a2 + 1);
        *((_QWORD*)a2 + 2) = v32_.v34;
        v3 = v20;
        v9 = v21 & 1;
        v10 = v21 >> 1;
        goto LABEL_27;
      }
    }
    memmove(v16, &v13[v8 + 1], ~v8);
    goto LABEL_21;
  }
LABEL_27:
  if (v9 != 0) {
    v22 = v3;
  }
  else {
    v22 = v5;
  }
  if (v9 != 0) {
    v23 = v4;
  }
  else {
    v23 = v10;
  }
  if ((__int64)v23 >= 1) {
    v24 = &v22[v23];
    v25 = v23;
    v26 = v22;
    while (1) {
      v27 = (unsigned __int8*)memchr(v26, 46, v25);
      if (v27 == nullptr) {
        return;
      }
      if (*v27 == 46) {
        break;
      }
      v26 = v27 + 1;
      v25 = v24 - v26;
      if (v24 - v26 < 1) {
        return;
      }
    }
    if (v27 != v24 && v27 - v22 != -1) {
      if (v23 >= v27 - v22) {
        v23 = v27 - v22;
      }
      if (v23 < 0xFFFFFFFFFFFFFFF7LL) {
        if (v23 >= 0x17) {
          if ((v23 | 7) == 0x17) {
            v29 = 26;
          }
          else {
            v29 = (v23 | 7) + 1;
          }
          v28 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v29, 16, 0);
          v32_.v33 = v23;
          v32_.v34 = v28;
          v32_.v32 = v29 | 1;
        }
        else {
          LOBYTE(v32_.v32) = 2 * v23;
          v28 = (char*)&v32_.v32 + 1;
          if (v27 == v22) {
          LABEL_52:
            v28[v23] = 0;
            if ((*a2 & 1) != 0 && *((_QWORD*)a2 + 2) != 0) {
              v30 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v30 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
            }
            v31 = v32_.v33;
            *(_QWORD*)a2 = v32_.v32;
            *((_QWORD*)a2 + 1) = v31;
            *((_QWORD*)a2 + 2) = v32_.v34;
            return;
          }
        }
        memmove(v28, v22, v23);
        goto LABEL_52;
      }
    LABEL_59:
      String_60a1d0();
    }
  }
}

__int64 game_telop_1741620(__int64 a1, __int64* a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  bool v15;
  bool v16;
  unsigned __int64 v17;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263650,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2263650) != 0) {
    GameData_22634d0 = 13;
    GameData_22634d8 = 0;
    GameData_22634e0 = (__int64)GameRoutine_17418a0;
    GameData_2263590 = 13;
    GameData_2263558 = 0;
    GameData_2263560 = 16;
    GameData_22634e8 = 0;
    GameData_22634f0 = 0;
    GameData_22634f8 = 0;
    GameData_2263500 = 0;
    GameData_2263508 = 0;
    GameData_2263538 = 0;
    GameData_2263540 = 0;
    GameData_2263548 = 0;
    GameData_2263510 = 3;
    GameData_2263598 = 0;
    GameData_22635a0 = (__int64)GameRoutine_1741a40;
    GameData_2263518 = 0;
    GameData_2263520 = 0;
    GameData_2263528 = 0;
    GameData_2263530 = 0;
    GameData_2263568 = 1;
    GameData_2263570 = 0;
    GameData_2263578 = 0;
    GameData_2263580 = 0;
    GameData_2263550 = 14;
    GameData_2263588 = 0;
    GameData_22635a8 = 0;
    GameData_22635b0 = 0;
    GameData_22635b8 = 0;
    GameData_22635c0 = 0;
    GameData_22635c8 = 0;
    GameData_22635d0 = 14;
    GameData_22635d8 = 0;
    GameData_22635e0 = (__int64)GameRoutine_1741b10;
    GameData_22635e8 = 0;
    GameData_22635f0 = 0;
    GameData_22635f8 = 0;
    GameData_2263600 = 0;
    GameData_2263608 = 0;
    GameData_2263610 = 0;
    GameData_2263638 = 0;
    GameData_2263640 = 0;
    GameData_2263648 = 0;
    GameData_2263630 = 0;
    GameData_2263620 = 0;
    GameData_2263628 = 0;
    GameData_2263618 = 0;
    __cxa_guard_release(&GameData_2263650);
  }
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 200, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 160) = 0;
  v8 = (__int64*)(v6 + 160);
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register_alt1(v6);
  *(_QWORD*)(v6 + 160) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_BYTE*)(v6 + 196) = 0;
  *(_QWORD*)v6 = game_telop_MotivationCaller_vtable;
  *(_DWORD*)(v6 + 152) = 1101004800;
  *(_DWORD*)(v6 + 192) = 1101004800;
  ProcInst_657850(v6, &GameData_22634d0, "MotivationCaller", 1, a1);
  v9 = *a2;
  v10 = a2[1];
  v11 = *(_QWORD*)(v6 + 160);
  v12 = v10 - *a2;
  v13 = 0xAAAAAAAAAAAAAAABLL * (v12 >> 3);
  v14 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v6 + 168) - v11) >> 3);
  v15 = v13 >= v14;
  v16 = v13 > v14;
  v17 = v13 - v14;
  if (v16) {
    GameRoutine_1741f10(v8, v17);
    v11 = *v8;
    v9 = *a2;
    v10 = a2[1];
  }
  else if (!v15) {
    *(_QWORD*)(v6 + 168) = v11 + v12;
  }
  if (v10 != v9) {
    memmove(v11, v9, v10 - v9 - 4);
  }
  *(_BYTE*)(v6 + 196) = a3 & 1;
  return v6;
}

__int64 game_telop_1745d80(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
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
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  void* v51;
  _BYTE* v52;
  char v53;
  char* v54;
  char* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  bool v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  _BYTE* v75;
  _QWORD* v76;
  __int64 v77;
  __int64 v78;
  struct {
    _BYTE v84[32];
    _BYTE* v85;
  } v84_;
  struct {
    _QWORD v86[4];
    _QWORD* v87;
  } v86_;

  if (a1 == 0) {
    return 0;
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1392, 16, 0);
  memset_alt1(v7 + 144, 0, 0x4E0u);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 32) = 0;
  v9 = (_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_DWORD*)(v7 + 320) = 3;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = v7 + 200;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_DWORD*)(v7 + 332) = 0;
  *(_WORD*)(v7 + 336) = 1;
  *(_QWORD*)(v7 + 324) = 0;
  *(_DWORD*)(v7 + 248) = 1065353216;
  *(_BYTE*)(v7 + 338) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = 0;
  *(_QWORD*)(v7 + 368) = 0;
  *(_QWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 408) = 0;
  *(_QWORD*)(v7 + 416) = 0;
  *(_QWORD*)(v7 + 424) = 0;
  *(_DWORD*)(v7 + 432) = 0x2000;
  *(_QWORD*)(v7 + 472) = 0;
  *(_QWORD*)(v7 + 480) = 0;
  *(_QWORD*)(v7 + 456) = 0;
  *(_QWORD*)(v7 + 464) = v7 + 472;
  *(_QWORD*)(v7 + 440) = 0;
  *(_QWORD*)(v7 + 448) = 0;
  *(_QWORD*)(v7 + 504) = 0;
  *(_QWORD*)(v7 + 512) = 0;
  *(_QWORD*)(v7 + 488) = 0;
  *(_QWORD*)(v7 + 496) = 0;
  *(_DWORD*)(v7 + 520) = 1065353216;
  *(_QWORD*)(v7 + 528) = 0;
  *(_QWORD*)(v7 + 536) = 0;
  *(_QWORD*)(v7 + 544) = 0;
  *(_DWORD*)(v7 + 552) = 1065353216;
  *(_WORD*)(v7 + 560) = 0;
  *(_WORD*)(v7 + 584) = 0;
  *(_BYTE*)(v7 + 608) = 0;
  *(_QWORD*)(v7 + 656) = 0;
  *(_QWORD*)(v7 + 648) = 0;
  *(_QWORD*)(v7 + 632) = 0;
  *(_QWORD*)(v7 + 624) = 0;
  *(_QWORD*)(v7 + 616) = 0;
  *(_QWORD*)(v7 + 640) = v7 + 648;
  *(_QWORD*)(v7 + 688) = 0;
  *(_QWORD*)(v7 + 680) = 0;
  *(_QWORD*)(v7 + 672) = 0;
  *(_QWORD*)(v7 + 664) = 0;
  *(_DWORD*)(v7 + 696) = 1065353216;
  *(_QWORD*)(v7 + 720) = 0;
  *(_QWORD*)(v7 + 712) = 0;
  *(_QWORD*)(v7 + 704) = 0;
  *(_DWORD*)(v7 + 728) = 1065353216;
  *(_WORD*)(v7 + 736) = 0;
  *(_WORD*)(v7 + 760) = 0;
  *(_BYTE*)(v7 + 784) = 0;
  *(_QWORD*)(v7 + 792) = 0;
  v10 = *(_QWORD*)v6;
  v11 = GameData_2130240[0] + 2;
  *(_BYTE*)(v7 + 800) = 0;
  *(_BYTE*)(v7 + 816) = 0;
  *(_BYTE*)(v7 + 820) = 0;
  *(_QWORD*)(v7 + 824) = 0;
  *(_DWORD*)(v7 + 832) = 0;
  *(_WORD*)(v7 + 840) = 0;
  *(_QWORD*)(v7 + 808) = v11;
  *(_QWORD*)v7 = game_telop_TelopLevelUp_vtable;
  v12 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
  *(_QWORD*)(v12 + 16) = 0;
  v13 = GameData_2131678;
  *(_DWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_DWORD*)(v12 + 48) = 0x2000;
  v14 = v13 + 16;
  *(_DWORD*)(v12 + 104) = 0;
  *(_WORD*)(v12 + 108) = 256;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_WORD*)(v12 + 80) = 0;
  *(_DWORD*)(v12 + 112) = -1082130432;
  *(_WORD*)(v12 + 116) = 0;
  *(_WORD*)(v12 + 136) = 0;
  *(_BYTE*)(v12 + 160) = 0;
  *(_BYTE*)(v12 + 288) = 0;
  *(_QWORD*)(v12 + 272) = 0;
  *(_QWORD*)(v12 + 280) = 0;
  *(_QWORD*)(v12 + 256) = 0;
  *(_QWORD*)(v12 + 264) = 0;
  *(_QWORD*)(v12 + 240) = 0;
  *(_QWORD*)(v12 + 248) = 0;
  *(_QWORD*)(v12 + 224) = 0;
  *(_QWORD*)(v12 + 232) = 0;
  *(_QWORD*)(v12 + 208) = 0;
  *(_QWORD*)(v12 + 216) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_DWORD*)(v12 + 127) = 0;
  *(_DWORD*)(v12 + 292) = 2;
  *(_QWORD*)(v7 + 888) = v12;
  *(_QWORD*)(v12 + 24) = 0;
  v15 = v12 + 24;
  *(_QWORD*)v12 = v14;
  *(_QWORD*)(v12 + 8) = 0;
  v16 = *(_QWORD*)v6;
  *(_QWORD*)(v7 + 880) = v15;
  v17 = fw_memory_HeapManager_Allocate(v16, 296, 16, 0);
  *(_QWORD*)(v17 + 8) = 0;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)v17 = v14;
  v18 = v17;
  *(_DWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_DWORD*)(v17 + 48) = 0x2000;
  *(_DWORD*)(v17 + 104) = 0;
  *(_WORD*)(v17 + 108) = 256;
  *(_QWORD*)(v17 + 56) = 0;
  *(_QWORD*)(v17 + 64) = 0;
  *(_QWORD*)(v17 + 72) = 0;
  *(_WORD*)(v17 + 80) = 0;
  *(_DWORD*)(v17 + 112) = -1082130432;
  *(_WORD*)(v17 + 116) = 0;
  *(_WORD*)(v17 + 136) = 0;
  *(_BYTE*)(v17 + 160) = 0;
  *(_BYTE*)(v17 + 288) = 0;
  *(_QWORD*)(v17 + 272) = 0;
  *(_QWORD*)(v17 + 280) = 0;
  *(_QWORD*)(v17 + 256) = 0;
  *(_QWORD*)(v17 + 264) = 0;
  *(_QWORD*)(v17 + 240) = 0;
  *(_QWORD*)(v17 + 248) = 0;
  *(_QWORD*)(v17 + 224) = 0;
  *(_QWORD*)(v17 + 232) = 0;
  *(_QWORD*)(v17 + 208) = 0;
  *(_QWORD*)(v17 + 216) = 0;
  *(_QWORD*)(v17 + 192) = 0;
  *(_QWORD*)(v17 + 200) = 0;
  *(_QWORD*)(v17 + 176) = 0;
  *(_QWORD*)(v17 + 184) = 0;
  *(_QWORD*)(v17 + 168) = 0;
  *(_QWORD*)(v17 + 120) = 0;
  *(_DWORD*)(v17 + 127) = 0;
  *(_DWORD*)(v17 + 292) = 2;
  *(_QWORD*)(v7 + 904) = v17;
  v19 = *(_QWORD*)v6;
  *(_QWORD*)(v18 + 24) = 0;
  *(_QWORD*)(v7 + 896) = v18 + 24;
  v20 = fw_memory_HeapManager_Allocate(v19, 296, 16, 0);
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)v20 = v14;
  *(_DWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_DWORD*)(v20 + 48) = 0x2000;
  *(_DWORD*)(v20 + 104) = 0;
  *(_WORD*)(v20 + 108) = 256;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_WORD*)(v20 + 80) = 0;
  *(_DWORD*)(v20 + 112) = -1082130432;
  *(_WORD*)(v20 + 116) = 0;
  *(_WORD*)(v20 + 136) = 0;
  *(_BYTE*)(v20 + 160) = 0;
  *(_BYTE*)(v20 + 288) = 0;
  *(_QWORD*)(v20 + 272) = 0;
  *(_QWORD*)(v20 + 280) = 0;
  *(_QWORD*)(v20 + 256) = 0;
  *(_QWORD*)(v20 + 264) = 0;
  *(_QWORD*)(v20 + 240) = 0;
  *(_QWORD*)(v20 + 248) = 0;
  *(_QWORD*)(v20 + 224) = 0;
  *(_QWORD*)(v20 + 232) = 0;
  *(_QWORD*)(v20 + 208) = 0;
  *(_QWORD*)(v20 + 216) = 0;
  *(_QWORD*)(v20 + 192) = 0;
  *(_QWORD*)(v20 + 200) = 0;
  *(_QWORD*)(v20 + 176) = 0;
  *(_QWORD*)(v20 + 184) = 0;
  *(_QWORD*)(v20 + 168) = 0;
  *(_QWORD*)(v20 + 120) = 0;
  *(_DWORD*)(v20 + 127) = 0;
  *(_DWORD*)(v20 + 292) = 2;
  *(_QWORD*)(v7 + 920) = v20;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v7 + 912) = v20 + 24;
  v21 = *(_QWORD*)v6;
  *(_QWORD*)(v7 + 928) = 0;
  *(_QWORD*)(v7 + 936) = 0;
  *(_DWORD*)(v7 + 944) = 0;
  *(_DWORD*)(v7 + 976) = 0;
  *(_QWORD*)(v7 + 968) = 0;
  *(_QWORD*)(v7 + 960) = 0;
  *(_QWORD*)(v7 + 952) = 0;
  v22 = fw_memory_HeapManager_Allocate(v21, 296, 16, 0);
  *(_QWORD*)(v22 + 8) = 0;
  *(_QWORD*)(v22 + 16) = 0;
  *(_QWORD*)v22 = v14;
  v23 = v22;
  *(_DWORD*)(v22 + 32) = 0;
  *(_QWORD*)(v22 + 40) = 0;
  *(_DWORD*)(v22 + 48) = 0x2000;
  *(_DWORD*)(v22 + 104) = 0;
  *(_WORD*)(v22 + 108) = 256;
  *(_QWORD*)(v22 + 56) = 0;
  *(_QWORD*)(v22 + 64) = 0;
  *(_QWORD*)(v22 + 72) = 0;
  *(_WORD*)(v22 + 80) = 0;
  *(_DWORD*)(v22 + 112) = -1082130432;
  *(_WORD*)(v22 + 116) = 0;
  *(_WORD*)(v22 + 136) = 0;
  *(_BYTE*)(v22 + 160) = 0;
  *(_BYTE*)(v22 + 288) = 0;
  *(_QWORD*)(v22 + 272) = 0;
  *(_QWORD*)(v22 + 280) = 0;
  *(_QWORD*)(v22 + 256) = 0;
  *(_QWORD*)(v22 + 264) = 0;
  *(_QWORD*)(v22 + 240) = 0;
  *(_QWORD*)(v22 + 248) = 0;
  *(_QWORD*)(v22 + 224) = 0;
  *(_QWORD*)(v22 + 232) = 0;
  *(_QWORD*)(v22 + 208) = 0;
  *(_QWORD*)(v22 + 216) = 0;
  *(_QWORD*)(v22 + 192) = 0;
  *(_QWORD*)(v22 + 200) = 0;
  *(_QWORD*)(v22 + 176) = 0;
  *(_QWORD*)(v22 + 184) = 0;
  *(_QWORD*)(v22 + 168) = 0;
  *(_QWORD*)(v22 + 120) = 0;
  *(_DWORD*)(v22 + 127) = 0;
  *(_DWORD*)(v22 + 292) = 2;
  *(_QWORD*)(v7 + 1160) = v22;
  v24 = *(_QWORD*)v6;
  *(_QWORD*)(v23 + 24) = 0;
  *(_QWORD*)(v7 + 1152) = v23 + 24;
  v25 = fw_memory_HeapManager_Allocate(v24, 296, 16, 0);
  *(_QWORD*)(v25 + 8) = 0;
  *(_QWORD*)(v25 + 16) = 0;
  *(_QWORD*)v25 = v14;
  v26 = v25;
  *(_DWORD*)(v25 + 32) = 0;
  *(_QWORD*)(v25 + 40) = 0;
  *(_DWORD*)(v25 + 48) = 0x2000;
  *(_DWORD*)(v25 + 104) = 0;
  *(_WORD*)(v25 + 108) = 256;
  *(_QWORD*)(v25 + 56) = 0;
  *(_QWORD*)(v25 + 64) = 0;
  *(_QWORD*)(v25 + 72) = 0;
  *(_WORD*)(v25 + 80) = 0;
  *(_DWORD*)(v25 + 112) = -1082130432;
  *(_WORD*)(v25 + 116) = 0;
  *(_WORD*)(v25 + 136) = 0;
  *(_BYTE*)(v25 + 160) = 0;
  *(_BYTE*)(v25 + 288) = 0;
  *(_QWORD*)(v25 + 272) = 0;
  *(_QWORD*)(v25 + 280) = 0;
  *(_QWORD*)(v25 + 256) = 0;
  *(_QWORD*)(v25 + 264) = 0;
  *(_QWORD*)(v25 + 240) = 0;
  *(_QWORD*)(v25 + 248) = 0;
  *(_QWORD*)(v25 + 224) = 0;
  *(_QWORD*)(v25 + 232) = 0;
  *(_QWORD*)(v25 + 208) = 0;
  *(_QWORD*)(v25 + 216) = 0;
  *(_QWORD*)(v25 + 192) = 0;
  *(_QWORD*)(v25 + 200) = 0;
  *(_QWORD*)(v25 + 176) = 0;
  *(_QWORD*)(v25 + 184) = 0;
  *(_QWORD*)(v25 + 168) = 0;
  *(_QWORD*)(v25 + 120) = 0;
  *(_DWORD*)(v25 + 127) = 0;
  *(_DWORD*)(v25 + 292) = 2;
  *(_QWORD*)(v7 + 1176) = v25;
  v27 = *(_QWORD*)v6;
  *(_QWORD*)(v26 + 24) = 0;
  *(_QWORD*)(v7 + 1168) = v26 + 24;
  v28 = fw_memory_HeapManager_Allocate(v27, 296, 16, 0);
  *(_QWORD*)(v28 + 8) = 0;
  *(_QWORD*)(v28 + 16) = 0;
  *(_QWORD*)v28 = v14;
  v29 = v28;
  *(_DWORD*)(v28 + 32) = 0;
  *(_QWORD*)(v28 + 40) = 0;
  *(_DWORD*)(v28 + 48) = 0x2000;
  *(_DWORD*)(v28 + 104) = 0;
  *(_WORD*)(v28 + 108) = 256;
  *(_QWORD*)(v28 + 56) = 0;
  *(_QWORD*)(v28 + 64) = 0;
  *(_QWORD*)(v28 + 72) = 0;
  *(_WORD*)(v28 + 80) = 0;
  *(_DWORD*)(v28 + 112) = -1082130432;
  *(_WORD*)(v28 + 116) = 0;
  *(_WORD*)(v28 + 136) = 0;
  *(_BYTE*)(v28 + 160) = 0;
  *(_BYTE*)(v28 + 288) = 0;
  *(_QWORD*)(v28 + 272) = 0;
  *(_QWORD*)(v28 + 280) = 0;
  *(_QWORD*)(v28 + 256) = 0;
  *(_QWORD*)(v28 + 264) = 0;
  *(_QWORD*)(v28 + 240) = 0;
  *(_QWORD*)(v28 + 248) = 0;
  *(_QWORD*)(v28 + 224) = 0;
  *(_QWORD*)(v28 + 232) = 0;
  *(_QWORD*)(v28 + 208) = 0;
  *(_QWORD*)(v28 + 216) = 0;
  *(_QWORD*)(v28 + 192) = 0;
  *(_QWORD*)(v28 + 200) = 0;
  *(_QWORD*)(v28 + 176) = 0;
  *(_QWORD*)(v28 + 184) = 0;
  *(_QWORD*)(v28 + 168) = 0;
  *(_QWORD*)(v28 + 120) = 0;
  *(_DWORD*)(v28 + 127) = 0;
  *(_DWORD*)(v28 + 292) = 2;
  *(_QWORD*)(v7 + 1192) = v28;
  v30 = *(_QWORD*)v6;
  *(_QWORD*)(v29 + 24) = 0;
  *(_QWORD*)(v7 + 1184) = v29 + 24;
  v31 = fw_memory_HeapManager_Allocate(v30, 296, 16, 0);
  *(_QWORD*)(v31 + 8) = 0;
  *(_QWORD*)(v31 + 16) = 0;
  *(_QWORD*)v31 = v14;
  v32 = v31;
  *(_DWORD*)(v31 + 32) = 0;
  *(_QWORD*)(v31 + 40) = 0;
  *(_DWORD*)(v31 + 48) = 0x2000;
  *(_DWORD*)(v31 + 104) = 0;
  *(_WORD*)(v31 + 108) = 256;
  *(_QWORD*)(v31 + 56) = 0;
  *(_QWORD*)(v31 + 64) = 0;
  *(_QWORD*)(v31 + 72) = 0;
  *(_WORD*)(v31 + 80) = 0;
  *(_DWORD*)(v31 + 112) = -1082130432;
  *(_WORD*)(v31 + 116) = 0;
  *(_WORD*)(v31 + 136) = 0;
  *(_BYTE*)(v31 + 160) = 0;
  *(_BYTE*)(v31 + 288) = 0;
  *(_QWORD*)(v31 + 272) = 0;
  *(_QWORD*)(v31 + 280) = 0;
  *(_QWORD*)(v31 + 256) = 0;
  *(_QWORD*)(v31 + 264) = 0;
  *(_QWORD*)(v31 + 240) = 0;
  *(_QWORD*)(v31 + 248) = 0;
  *(_QWORD*)(v31 + 224) = 0;
  *(_QWORD*)(v31 + 232) = 0;
  *(_QWORD*)(v31 + 208) = 0;
  *(_QWORD*)(v31 + 216) = 0;
  *(_QWORD*)(v31 + 192) = 0;
  *(_QWORD*)(v31 + 200) = 0;
  *(_QWORD*)(v31 + 176) = 0;
  *(_QWORD*)(v31 + 184) = 0;
  *(_QWORD*)(v31 + 168) = 0;
  *(_QWORD*)(v31 + 120) = 0;
  *(_DWORD*)(v31 + 127) = 0;
  *(_DWORD*)(v31 + 292) = 2;
  *(_QWORD*)(v7 + 1208) = v31;
  v33 = *(_QWORD*)v6;
  *(_QWORD*)(v32 + 24) = 0;
  *(_QWORD*)(v7 + 1200) = v32 + 24;
  v34 = fw_memory_HeapManager_Allocate(v33, 296, 16, 0);
  *(_QWORD*)(v34 + 8) = 0;
  *(_QWORD*)(v34 + 16) = 0;
  *(_QWORD*)v34 = v14;
  v35 = v34;
  *(_DWORD*)(v34 + 32) = 0;
  *(_QWORD*)(v34 + 40) = 0;
  *(_DWORD*)(v34 + 48) = 0x2000;
  *(_DWORD*)(v34 + 104) = 0;
  *(_BYTE*)(v34 + 108) = 0;
  *(_QWORD*)(v34 + 56) = 0;
  *(_QWORD*)(v34 + 64) = 0;
  *(_QWORD*)(v34 + 72) = 0;
  *(_WORD*)(v34 + 80) = 0;
  *(_BYTE*)(v34 + 109) = 1;
  *(_DWORD*)(v34 + 112) = -1082130432;
  *(_WORD*)(v34 + 116) = 0;
  *(_WORD*)(v34 + 136) = 0;
  *(_BYTE*)(v34 + 160) = 0;
  *(_BYTE*)(v34 + 288) = 0;
  *(_QWORD*)(v34 + 272) = 0;
  *(_QWORD*)(v34 + 280) = 0;
  *(_QWORD*)(v34 + 256) = 0;
  *(_QWORD*)(v34 + 264) = 0;
  *(_QWORD*)(v34 + 240) = 0;
  *(_QWORD*)(v34 + 248) = 0;
  *(_QWORD*)(v34 + 224) = 0;
  *(_QWORD*)(v34 + 232) = 0;
  *(_QWORD*)(v34 + 208) = 0;
  *(_QWORD*)(v34 + 216) = 0;
  *(_QWORD*)(v34 + 192) = 0;
  *(_QWORD*)(v34 + 200) = 0;
  *(_QWORD*)(v34 + 176) = 0;
  *(_QWORD*)(v34 + 184) = 0;
  *(_QWORD*)(v34 + 168) = 0;
  *(_QWORD*)(v34 + 120) = 0;
  *(_DWORD*)(v34 + 127) = 0;
  *(_DWORD*)(v34 + 292) = 2;
  *(_QWORD*)(v7 + 1224) = v34;
  v36 = *(_QWORD*)v6;
  *(_QWORD*)(v35 + 24) = 0;
  *(_QWORD*)(v7 + 1216) = v35 + 24;
  v37 = fw_memory_HeapManager_Allocate(v36, 296, 16, 0);
  *(_QWORD*)(v37 + 8) = 0;
  *(_QWORD*)(v37 + 16) = 0;
  *(_QWORD*)v37 = v14;
  v38 = v37;
  *(_DWORD*)(v37 + 32) = 0;
  *(_QWORD*)(v37 + 40) = 0;
  *(_DWORD*)(v37 + 48) = 0x2000;
  *(_DWORD*)(v37 + 104) = 0;
  *(_BYTE*)(v37 + 108) = 0;
  *(_QWORD*)(v37 + 56) = 0;
  *(_QWORD*)(v37 + 64) = 0;
  *(_QWORD*)(v37 + 72) = 0;
  *(_WORD*)(v37 + 80) = 0;
  *(_BYTE*)(v37 + 109) = 1;
  *(_DWORD*)(v37 + 112) = -1082130432;
  *(_WORD*)(v37 + 116) = 0;
  *(_WORD*)(v37 + 136) = 0;
  *(_BYTE*)(v37 + 160) = 0;
  *(_BYTE*)(v37 + 288) = 0;
  *(_QWORD*)(v37 + 272) = 0;
  *(_QWORD*)(v37 + 280) = 0;
  *(_QWORD*)(v37 + 256) = 0;
  *(_QWORD*)(v37 + 264) = 0;
  *(_QWORD*)(v37 + 240) = 0;
  *(_QWORD*)(v37 + 248) = 0;
  *(_QWORD*)(v37 + 224) = 0;
  *(_QWORD*)(v37 + 232) = 0;
  *(_QWORD*)(v37 + 208) = 0;
  *(_QWORD*)(v37 + 216) = 0;
  *(_QWORD*)(v37 + 192) = 0;
  *(_QWORD*)(v37 + 200) = 0;
  *(_QWORD*)(v37 + 176) = 0;
  *(_QWORD*)(v37 + 184) = 0;
  *(_QWORD*)(v37 + 168) = 0;
  *(_QWORD*)(v37 + 120) = 0;
  *(_DWORD*)(v37 + 127) = 0;
  *(_DWORD*)(v37 + 292) = 2;
  *(_QWORD*)(v7 + 1240) = v37;
  v39 = *(_QWORD*)v6;
  *(_QWORD*)(v38 + 24) = 0;
  *(_QWORD*)(v7 + 1232) = v38 + 24;
  v40 = fw_memory_HeapManager_Allocate(v39, 296, 16, 0);
  *(_QWORD*)(v40 + 8) = 0;
  *(_QWORD*)(v40 + 16) = 0;
  *(_QWORD*)v40 = v14;
  v41 = v40;
  *(_DWORD*)(v40 + 32) = 0;
  *(_QWORD*)(v40 + 40) = 0;
  *(_DWORD*)(v40 + 48) = 0x2000;
  *(_DWORD*)(v40 + 104) = 0;
  *(_BYTE*)(v40 + 108) = 0;
  *(_QWORD*)(v40 + 56) = 0;
  *(_QWORD*)(v40 + 64) = 0;
  *(_QWORD*)(v40 + 72) = 0;
  *(_WORD*)(v40 + 80) = 0;
  *(_BYTE*)(v40 + 109) = 1;
  *(_DWORD*)(v40 + 112) = -1082130432;
  *(_WORD*)(v40 + 116) = 0;
  *(_WORD*)(v40 + 136) = 0;
  *(_BYTE*)(v40 + 160) = 0;
  *(_BYTE*)(v40 + 288) = 0;
  *(_QWORD*)(v40 + 272) = 0;
  *(_QWORD*)(v40 + 280) = 0;
  *(_QWORD*)(v40 + 256) = 0;
  *(_QWORD*)(v40 + 264) = 0;
  *(_QWORD*)(v40 + 240) = 0;
  *(_QWORD*)(v40 + 248) = 0;
  *(_QWORD*)(v40 + 224) = 0;
  *(_QWORD*)(v40 + 232) = 0;
  *(_QWORD*)(v40 + 208) = 0;
  *(_QWORD*)(v40 + 216) = 0;
  *(_QWORD*)(v40 + 192) = 0;
  *(_QWORD*)(v40 + 200) = 0;
  *(_QWORD*)(v40 + 176) = 0;
  *(_QWORD*)(v40 + 184) = 0;
  *(_QWORD*)(v40 + 168) = 0;
  *(_QWORD*)(v40 + 120) = 0;
  *(_DWORD*)(v40 + 127) = 0;
  *(_DWORD*)(v40 + 292) = 2;
  *(_QWORD*)(v7 + 1256) = v40;
  v42 = *(_QWORD*)v6;
  *(_QWORD*)(v41 + 24) = 0;
  *(_QWORD*)(v7 + 1248) = v41 + 24;
  v43 = fw_memory_HeapManager_Allocate(v42, 296, 16, 0);
  *(_QWORD*)(v43 + 8) = 0;
  *(_QWORD*)(v43 + 16) = 0;
  *(_QWORD*)v43 = v14;
  v44 = v43;
  *(_DWORD*)(v43 + 32) = 0;
  *(_QWORD*)(v43 + 40) = 0;
  *(_DWORD*)(v43 + 48) = 0x2000;
  *(_DWORD*)(v43 + 104) = 0;
  *(_BYTE*)(v43 + 108) = 0;
  *(_QWORD*)(v43 + 56) = 0;
  *(_QWORD*)(v43 + 64) = 0;
  *(_QWORD*)(v43 + 72) = 0;
  *(_WORD*)(v43 + 80) = 0;
  *(_BYTE*)(v43 + 109) = 1;
  *(_DWORD*)(v43 + 112) = -1082130432;
  *(_WORD*)(v43 + 116) = 0;
  *(_WORD*)(v43 + 136) = 0;
  *(_BYTE*)(v43 + 160) = 0;
  *(_BYTE*)(v43 + 288) = 0;
  *(_QWORD*)(v43 + 272) = 0;
  *(_QWORD*)(v43 + 280) = 0;
  *(_QWORD*)(v43 + 256) = 0;
  *(_QWORD*)(v43 + 264) = 0;
  *(_QWORD*)(v43 + 240) = 0;
  *(_QWORD*)(v43 + 248) = 0;
  *(_QWORD*)(v43 + 224) = 0;
  *(_QWORD*)(v43 + 232) = 0;
  *(_QWORD*)(v43 + 208) = 0;
  *(_QWORD*)(v43 + 216) = 0;
  *(_QWORD*)(v43 + 192) = 0;
  *(_QWORD*)(v43 + 200) = 0;
  *(_QWORD*)(v43 + 176) = 0;
  *(_QWORD*)(v43 + 184) = 0;
  *(_QWORD*)(v43 + 168) = 0;
  *(_QWORD*)(v43 + 120) = 0;
  *(_DWORD*)(v43 + 127) = 0;
  *(_DWORD*)(v43 + 292) = 2;
  *(_QWORD*)(v7 + 1272) = v43;
  v45 = *(_QWORD*)v6;
  *(_QWORD*)(v44 + 24) = 0;
  *(_QWORD*)(v7 + 1264) = v44 + 24;
  v46 = fw_memory_HeapManager_Allocate(v45, 296, 16, 0);
  *(_QWORD*)(v46 + 8) = 0;
  *(_QWORD*)(v46 + 16) = 0;
  *(_QWORD*)v46 = v14;
  v47 = v46;
  *(_DWORD*)(v46 + 32) = 0;
  *(_QWORD*)(v46 + 40) = 0;
  *(_DWORD*)(v46 + 48) = 0x2000;
  *(_DWORD*)(v46 + 104) = 0;
  *(_BYTE*)(v46 + 108) = 0;
  *(_QWORD*)(v46 + 56) = 0;
  *(_QWORD*)(v46 + 64) = 0;
  *(_QWORD*)(v46 + 72) = 0;
  *(_WORD*)(v46 + 80) = 0;
  *(_BYTE*)(v46 + 109) = 1;
  *(_DWORD*)(v46 + 112) = -1082130432;
  *(_WORD*)(v46 + 116) = 0;
  *(_WORD*)(v46 + 136) = 0;
  *(_BYTE*)(v46 + 160) = 0;
  *(_BYTE*)(v46 + 288) = 0;
  *(_QWORD*)(v46 + 272) = 0;
  *(_QWORD*)(v46 + 280) = 0;
  *(_QWORD*)(v46 + 256) = 0;
  *(_QWORD*)(v46 + 264) = 0;
  *(_QWORD*)(v46 + 240) = 0;
  *(_QWORD*)(v46 + 248) = 0;
  *(_QWORD*)(v46 + 224) = 0;
  *(_QWORD*)(v46 + 232) = 0;
  *(_QWORD*)(v46 + 208) = 0;
  *(_QWORD*)(v46 + 216) = 0;
  *(_QWORD*)(v46 + 192) = 0;
  *(_QWORD*)(v46 + 200) = 0;
  *(_QWORD*)(v46 + 176) = 0;
  *(_QWORD*)(v46 + 184) = 0;
  *(_QWORD*)(v46 + 168) = 0;
  *(_QWORD*)(v46 + 120) = 0;
  *(_DWORD*)(v46 + 127) = 0;
  *(_DWORD*)(v46 + 292) = 2;
  *(_QWORD*)(v7 + 1288) = v46;
  v48 = *(_QWORD*)v6;
  *(_QWORD*)(v47 + 24) = 0;
  *(_QWORD*)(v7 + 1280) = v47 + 24;
  v49 = fw_memory_HeapManager_Allocate(v48, 296, 16, 0);
  *(_QWORD*)(v49 + 8) = 0;
  *(_QWORD*)(v49 + 16) = 0;
  *(_QWORD*)v49 = v14;
  *(_DWORD*)(v49 + 32) = 0;
  *(_QWORD*)(v49 + 40) = 0;
  *(_DWORD*)(v49 + 48) = 0x2000;
  *(_DWORD*)(v49 + 104) = 0;
  *(_BYTE*)(v49 + 108) = 0;
  *(_QWORD*)(v49 + 56) = 0;
  *(_QWORD*)(v49 + 64) = 0;
  *(_QWORD*)(v49 + 72) = 0;
  *(_WORD*)(v49 + 80) = 0;
  *(_BYTE*)(v49 + 109) = 1;
  *(_DWORD*)(v7 + 1316) = 4;
  v50 = *(_QWORD*)(a1 + 40);
  *(_DWORD*)(v49 + 112) = -1082130432;
  *(_WORD*)(v49 + 116) = 0;
  *(_WORD*)(v49 + 136) = 0;
  *(_BYTE*)(v49 + 160) = 0;
  *(_BYTE*)(v49 + 288) = 0;
  *(_QWORD*)(v49 + 272) = 0;
  *(_QWORD*)(v49 + 280) = 0;
  *(_QWORD*)(v49 + 256) = 0;
  *(_QWORD*)(v49 + 264) = 0;
  *(_QWORD*)(v49 + 240) = 0;
  *(_QWORD*)(v49 + 248) = 0;
  *(_QWORD*)(v49 + 224) = 0;
  *(_QWORD*)(v49 + 232) = 0;
  *(_QWORD*)(v49 + 208) = 0;
  *(_QWORD*)(v49 + 216) = 0;
  *(_QWORD*)(v49 + 192) = 0;
  *(_QWORD*)(v49 + 200) = 0;
  *(_QWORD*)(v49 + 176) = 0;
  *(_QWORD*)(v49 + 184) = 0;
  *(_QWORD*)(v49 + 168) = 0;
  *(_QWORD*)(v49 + 120) = 0;
  *(_DWORD*)(v49 + 127) = 0;
  *(_DWORD*)(v49 + 292) = 2;
  *(_QWORD*)(v7 + 1304) = v49;
  *(_QWORD*)(v49 + 24) = 0;
  *(_QWORD*)(v7 + 1296) = v49 + 24;
  *(_WORD*)(v7 + 1312) = 0;
  *(_QWORD*)(v7 + 1360) = 0;
  *(_BYTE*)(v7 + 1376) = 0;
  if (v50 != 0) {
    *(_QWORD*)(v50 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "TelopLevelUp";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = (unsigned int)game_HashString32_alt2("TelopLevelUp");
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  v51 = GameData_2130f68;
  *(_QWORD*)(v7 + 8) = GameData_2130f68;
  *(_QWORD*)(v7 + 16) = v51;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  v52 = (_BYTE*)*v9;
  v53 = *(_BYTE*)(*v9 + 138LL);
  if (v53 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v52 + 64LL))(*v9);
    v53 = v52[138];
  }
  v52[138] = v53 + 1;
  *(_WORD*)(v7 + 136) |= 2u;
  if ((*(_BYTE*)(v7 + 272) & 1) != 0) {
    *(_QWORD*)(v7 + 280) = 17;
    v54 = *(char**)(v7 + 288);
  }
  else {
    *(_BYTE*)(v7 + 272) = 34;
    v54 = (char*)(v7 + 273);
  }
  strcpy(v54, "Layout/Common.arc");
  if ((*(_BYTE*)(v7 + 296) & 1) != 0) {
    *(_QWORD*)(v7 + 304) = 11;
    v55 = *(char**)(v7 + 312);
  }
  else {
    *(_BYTE*)(v7 + 296) = 22;
    v55 = (char*)(v7 + 297);
  }
  strcpy(v55, "Common_LvUp");
  *(_BYTE*)(v7 + 333) = 1;
  if (*(_DWORD*)(v7 + 320) == 2) {
    v56 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v58 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v57 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v60 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v59 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v61 = v59 == v60;
      v62 = v57 - 1 + v58;
      v63 = v62 >> 7;
      v64 = v62 & 0x7F;
      v65 = 16 * (v59 - v60) - 1;
      v66 = *(_QWORD*)(v60 + 8 * v63);
      if (v61) {
        v65 = 0;
      }
      v67 = v66 + 32 * v64;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v67 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v56[21] = *(_QWORD*)(v67 + 24);
      v68 = *(_QWORD*)(v67 + 16);
      v56[27] = v57 - 1;
      v56[20] = v68;
      if ((unsigned __int64)(v65 - (v57 + v58) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v69 = *(_QWORD*)(v59 - 8);
        if (v69 != 0) {
          v70 = 128;
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
            v70 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v70, v69);
          v59 = v56[24];
        }
        v56[24] = v59 - 8;
      }
    }
  }
  *(_DWORD*)(v7 + 320) = 2;
  if ((a4 & 1) != 0) {
    GameRoutine_867df0_alt1();
    v71 = a5;
  }
  else {
    GameHr_8679c0();
    v72 = game_ProcGameSkipView_instance_;
    v71 = a5;
    if (game_ProcGameSkipView_instance_ != 0) {
      v73 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v73 & 0x10) == 0) {
        v73 = v73 & 0xFFFFFFE2 | 1;
        if (*(float*)(game_ProcGameSkipView_instance_ + 224) > 0x0.0p+0f) {
          *(_DWORD*)(game_ProcGameSkipView_instance_ + 224) = 0;
        }
      }
      *(_DWORD*)(v72 + 156) = v73 | 0x10;
    }
  }
  v74 = *(_QWORD*)(v71 + 32);
  *(_BYTE*)(v7 + 338) = 1;
  if (v74 != 0) {
    if (v74 == v71) {
      v84_.v85 = v84_.v84;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v74 + 24LL))(v74, v84_.v84);
      v75 = v84_.v85;
    }
    else {
      v75 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
      v84_.v85 = v75;
    }
    v76 = (_QWORD*)(v7 + 1328);
    *(_QWORD*)(v7 + 824) = a2;
    *(_DWORD*)(v7 + 832) = a3;
    if (v75 != nullptr) {
      if (v75 == v84_.v84) {
        v86_.v87 = v86_.v86;
        (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v75 + 24LL))(v75, v86_.v86);
      }
      else {
        v86_.v87 =
            (_QWORD*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v75 + 16LL))(v75);
      }
    }
    else {
      v86_.v87 = nullptr;
    }
  }
  else {
    v84_.v85 = nullptr;
    v76 = (_QWORD*)(v7 + 1328);
    v86_.v87 = nullptr;
    *(_QWORD*)(v7 + 824) = a2;
    *(_DWORD*)(v7 + 832) = a3;
  }
  GameRoutine_654050_alt1(v86_.v86, v76);
  if (v86_.v87 == v86_.v86) {
    v77 = 32;
    goto LABEL_47;
  }
  if (v86_.v87 != nullptr) {
    v77 = 40;
  LABEL_47:
    (*(void (**)(__int64))(*v86_.v87 + v77))((__int64)v86_.v87);
  }
  if (v84_.v85 == v84_.v84) {
    v78 = 32;
    goto LABEL_52;
  }
  if (v84_.v85 != nullptr) {
    v78 = 40;
  LABEL_52:
    (*(void (**)(__int64))(*(_QWORD*)v84_.v85 + v78))((__int64)v84_.v85);
  }
  return v7;
}

void game_telop_175cd90(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  int v10;
  int v11;
  int v12;
  _DWORD v13[3];

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
    v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v5 = *(__int64**)a1;
      v6 = v3;
      if (*(_QWORD*)a1 != 0) {
        v7 = *(_QWORD*)(*GameData_212d718 + 16);
        v8 = 656;
        if (*(_BYTE*)(v7 + 964) != 0) {
          v8 = 696;
        }
        v9 = (*(float (**)(__int64))(*(_QWORD*)(v7 + v8) + 16LL))(v7 + v8),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        ui_LayoutAccessor_SetPaneSize_alt1(
            (__int64)v5, (__int64)"ZoomArea",
            (float)((float)(v9 * -0x1.a5e3540000000p-2f) +
                    0x1.0000000000000p+0f) *
                0x1.1000000000000p+7f,
            (float)((float)(v9 * -0x1.a5e3540000000p-2f) +
                    0x1.0000000000000p+0f) *
                0x1.3200000000000p+6f),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameRoutine_175ca40_alt1(a1),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v13[0] = v10;
        v13[1] = v11;
        v13[2] = v12;
        *(float*)&v4 = ui_LayoutAccessor_SetPaneTranslate_alt1(
            v5, (__int64)"N_Cursor", (__int64)v13),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(v6, v4),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v6),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
}

__int64 game_telop_1763c20(__int64* a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  int v6;
  __int64 v7;
  char* v8;
  char* v9;
  __int64 result;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  char v21;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 == v3) {
    v6 = 0;
  }
  else {
    v6 = 0;
    do {
      v7 = *v2++;
      if (v7 != 0) {
        ++v6;
      }
    } while (v2 != v3);
  }
  v8 = game_util_Format_alt2("Select%d", v6);
  GameHr_1562680((__int64)a1, v8, 0x1.0000000000000p+0f);
  v9 = game_util_Format_alt2("Reliance%d", a2[1] - *a2);
  result = LayoutAccessor_1562cf0_alt1((__int64)a1, v9);
  v11 = *a2;
  v12 = a2[1];
  if (v12 != *a2) {
    v13 = *v11;
    if (*v11 != 0) {
      v14 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"UnitA_Face");
      if (v14 != 0) {
        v14 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
      }
      v15 = GameHr_1840740(v14, 0, v13, 6u, 1);
      result = ui_LayoutAccessor_SetPaneVisible_alt1(
          (__int64)a1, (__int64)"UnitA_Face", v15 & 1);
      v11 = *a2;
      v12 = a2[1];
    }
    if ((unsigned __int64)((char*)v12 - (char*)v11) >= 9) {
      v16 = v11[1];
      if (v16 != 0) {
        v17 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"UnitB_Face");
        if (v17 != 0) {
          v17 =
              __dynamic_cast(v17, GameData_212d670[0], GameData_212d678[0], 0);
        }
        v18 = GameHr_1840740(v17, 0, v16, 6u, 1);
        result = ui_LayoutAccessor_SetPaneVisible_alt1(
            (__int64)a1, (__int64)"UnitB_Face", v18 & 1);
        v11 = *a2;
        v12 = a2[1];
      }
      if ((unsigned __int64)((char*)v12 - (char*)v11) >= 0x11) {
        v19 = v11[2];
        if (v19 != 0) {
          v20 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"UnitC_Face");
          if (v20 != 0) {
            v20 = __dynamic_cast(v20, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          v21 = GameHr_1840740(v20, 0, v19, 6u, 1);
          return ui_LayoutAccessor_SetPaneVisible_alt1(
              (__int64)a1, (__int64)"UnitC_Face", v21 & 1);
        }
      }
    }
  }
  return result;
}

void game_telop_1766400(__int64 a1, int* a2, _BYTE* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  bool v6;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;

  v3 = *(_QWORD*)(a1 + 1184);
  v4 = *(_QWORD*)(a1 + 1176);
  v5 = *a2;
  v6 = v3 != v4 && v5 <= 5;
  if (v6 && (*a3 & 1) == 0) {
    v10 = 0;
    v11 = 0;
    do {
      v12 = *(_QWORD*)(v4 + 8 * v10);
      if (*(_BYTE*)(v12 + 32) != 0) {
        v13 = *(_QWORD*)(v12 + 48);
        if (*(_QWORD*)(v13 + 552) != 0 || *(_BYTE*)(v13 + 104) == 3 ||
            *(_BYTE*)(v13 + 250) == 46) {
          v14 = v4 + 8 * v10;
          v15 = v3 - (v14 + 8);
          if (v3 != v14 + 8) {
            memmove(v4 + 8 * v10, v14 + 8, v3 - (v14 + 8));
          }
          v3 = v14 + v15;
          *(_QWORD*)(a1 + 1184) = v14 + v15;
          v5 = *a2;
          goto LABEL_22;
        }
        v16 = GameRoutine_1760e40(a1, 1);
        LayoutAccessor_1562cf0(v16, "UnitSkill");
        v17 = ui_LayoutAccessor_FindPane(v16, "T_NumLv");
        if (v17 != 0) {
          v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
          if (v18 != 0) {
            GameRoutine_156c910(v18, "%d", 1);
          }
        }
        GameRoutine_1763490(v16, (__int64)"L_Skill00", *(_QWORD*)(v12 + 48));
        v19 = *(_QWORD*)(a1 + 1176) + 8 * v10;
        v20 = *(_QWORD*)(a1 + 1184);
        v21 = v20 - (v19 + 8);
        if (v20 != v19 + 8) {
          memmove(*(_QWORD*)(a1 + 1176) + 8 * v10, v19 + 8, v20 - (v19 + 8));
        }
        --v11;
        *(_QWORD*)(a1 + 1184) = v19 + v21;
        v5 = *a2 + 1;
        *a2 = v5;
        v3 = *(_QWORD*)(a1 + 1184);
      }
      ++v11;
    LABEL_22:
      v4 = *(_QWORD*)(a1 + 1176);
      v10 = v11;
      v22 = v11 < (unsigned __int64)((v3 - v4) >> 3) && v5 <= 5;
    } while (v22 && (*a3 & 1) == 0);
  }
}

__int64 game_telop_17665e0(__int64 result, int* a2, _BYTE* a3)
{
  int v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64* v23;
  long double v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  __int64* v28;
  _QWORD* v30;
  __int64 v31;
  long double v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  _QWORD v45[2];
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _BYTE v65[12];

  v3 = *a2;
  if (*a2 >= 1) {
    *a3 = 1;
    return result;
  }
  v5 = *(_QWORD*)(result + 1168);
  v7 = result;
  if (v5 != 0) {
    v8 = *(_QWORD*)(result + 1200);
    if (v8 != 0) {
      v46 = *(_QWORD*)(v5 + 392);
      v9 = GameRoutine_675980(v8, &v46);
      v10 = msg_MessageManager_instance__ptr[0];
      if (v9 != 0) {
        v11 = v9;
      }
      else {
        v11 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v11);
      v12 = *v10;
      v52 = -1;
      v53 = -1;
      v54 = -1;
      v55 = -1;
      v56 = -1;
      v57 = -1;
      v58 = -1;
      v59 = -1;
      v60 = -1;
      v61 = -1;
      v62 = -1;
      v63 = -1;
      v47 = GameData_212e348 + 2;
      v48 = 0xFFFF0001FFFF0000LL;
      v49 = 0xFFFF0004FFFF0002LL;
      v50 = 0xFFFF0006FFFF0005LL;
      v64 = 8;
      v51 = 0xFFFF0008FFFF0007LL;
      v13 = GameRoutine_a4dbe0(v12, "MID_Sys_Result_Msg_JobMaster", 0, &v47);
      v14 = GameRoutine_1760e40(v7, 0);
      v15 = (_QWORD*)v14;
      if (v13 != 0) {
        v16 = ui_LayoutAccessor_FindTextBox(v14, "L_Txt/T_Txt");
        if (v16 != 0) {
          GameRoutine_156c5d0(v16, v13, 0);
        }
      }
      v17 = ui_LayoutAccessor_FindTextBox(v15, "L_Txt/T_Txt");
      if (v17 != 0) {
        v18 = v17;
        v19 = ui_LayoutAccessor_FindTextBox(v15, "L_Txt/T_Txt");
        if (v19 != 0) {
          GameRoutine_190a0c0(&v47, v45, v65, v19, *(_QWORD*)(v19 + 216));
          v20 = v45[0];
        }
        else {
          v20 = 0;
        }
        v21 = *(_BYTE*)(v18 + 88);
        *(_QWORD*)(v18 + 80) = v20;
        *(_BYTE*)(v18 + 88) = v21 | 0x10;
      }
      GameRoutine_17356e0(v15, (__int64)"L_Txt");
      LayoutAccessor_1560070_alt1((void*)(&v47), v7 + 168, "L_Stamp");
      if (v48 == 0) {
        goto LABEL_25;
      }
      v22 = std___1___shared_weak_count_lock(v48);
      v23 = v47;
      if (v48 != 0) {
        std___1___shared_weak_count___release_weak();
      }
      if (v22 != 0 && v23 != nullptr) {
        *(__n128*)&v24 = ui_LayoutAccessor_SetPaneVisible(v23, "Stamp", 1);
        ui_LayoutAccessor_SetPaneAlpha(v23, "Stamp", 0, v24);
        *(_BYTE*)(v7 + 1152) = 1;
      }
      else if (v22 == 0) {
      LABEL_25:
        v3 = *a2;
        goto LABEL_26;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak();
      }
      goto LABEL_25;
    }
  }
LABEL_26:
  v25 = *(_QWORD*)(v7 + 1216);
  v26 = *(_QWORD*)(v7 + 1208);
  v27 = v25 != v26 && v3 <= 5;
  if (v27 && (*a3 & 1) == 0) {
    v28 = GameData_212c880[0];
    do {
      if (*(_QWORD*)(v7 + 1168) == 0 || *(_QWORD*)(v7 + 1200) == 0) {
        goto LABEL_47;
      }
      v30 = (_QWORD*)GameRoutine_1760e40(v7, 19);
      LayoutAccessor_1562cf0(v30, "JobSkill");
      v45[0] = "L_IconJob";
      v45[1] = 9;
      GameRoutine_1587740((void*)(&v47), v30, v45);
      if (v48 != 0) {
        v31 = std___1___shared_weak_count_lock(v48);
        v33 = v47;
        if (v48 != 0) {
          *(__n128*)&v32 = std___1___shared_weak_count___release_weak();
        }
        if (v31 != 0 && v33 != nullptr) {
          *((_BYTE*)v33 + 1105) = 0;
          JobIcon_19a8c50(v33, *(_QWORD*)(v7 + 1168), v32);
        LABEL_44:
          if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak();
          }
          goto LABEL_46;
        }
        if (v31 != 0) {
          goto LABEL_44;
        }
      }
    LABEL_46:
      v34 = *(_QWORD*)(v7 + 1168);
      v35 = *(_QWORD*)(*(_QWORD*)(*v28 + 64) +
                       8LL * (***(_DWORD***)(v7 + 1208) & 0xFFF));
      v51 = 0;
      GameRoutine_17644e0(v30, v34, v35, (__int64)&v47);
      v26 = *(_QWORD*)(v7 + 1208);
      v25 = *(_QWORD*)(v7 + 1216);
    LABEL_47:
      v36 = v25 - (v26 + 8);
      if (v25 != v26 + 8) {
        memmove(v26, v26 + 8, v25 - (v26 + 8));
      }
      *(_QWORD*)(v7 + 1216) = v26 + v36;
      v37 = (*a2)++;
      v25 = *(_QWORD*)(v7 + 1216);
      v26 = *(_QWORD*)(v7 + 1208);
      v38 = v25 != v26 && v37 <= 4;
    } while (v38 && (*a3 & 1) == 0);
  }
  v40 = *(_QWORD*)(v7 + 344);
  v39 = *(_QWORD*)(v7 + 352);
  if (v40 != v39) {
    v41 = *(_QWORD*)(v7 + 352);
    v42 = fw_memory_g_heap_manager_ptr;
    do {
      v43 = *(_BYTE*)(v41 - 24);
      v41 -= 24;
      if ((v43 & 1) != 0 && *(_QWORD*)(v39 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v42 + 200LL) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v42 + v44);
      }
      v39 = v41;
    } while (v41 != v40);
  }
  *(_QWORD*)(v7 + 352) = v40;
  Se_80e330(v7, "SE_SYS_Telop_Mini_In");
  return Se_80e330(v7, "SE_SYS_Telop_SkillAcquire_Max");
}

void game_telop_1768fe0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  char* v6;
  char* v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  char* v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  unsigned __int64* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  unsigned __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  int v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  int v60;
  unsigned __int64 v61;
  __int64 v62;
  const char* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  char* v69;
  int v70;
  __int64 v71;
  _QWORD* v72;
  char v73;
  char v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  _QWORD* v88;
  unsigned __int64 v89;
  char v90;
  char v91;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  struct {
    __int64* v97;
    __int64 v98;
  } v97_;
  struct {
    const char* v99;
    unsigned __int64 v100;
    unsigned __int64 v101;
  } v99_;
  struct {
    unsigned __int64* v102;
    int v103;
  } v102_;
  _BYTE v104[20];
  _QWORD v105[2];
  _QWORD** v106;
  struct {
    _QWORD* v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    _BYTE* v111;
    __int64 v112;
    int v113;
  } v107_;

  *(_DWORD*)(a1 + 888) = 0;
  v2 = GameRoutine_1760e40_alt1(a1, 6u);
  v99_.v99 = "L_Txt";
  v99_.v100 = 5;
  GameRoutine_9b8fe0_alt2((void*)(v104), v2, (__int64*)&v99_.v99);
  if (*(_QWORD*)&v104[8] != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(*(__int64*)&v104[8]);
    v4 = *(_QWORD*)v104;
    if (*(_QWORD*)&v104[8] != 0) {
      std___1___shared_weak_count___release_weak_alt1(*(__int64*)&v104[8]);
    }
    if (v3 != 0 && v4 != 0) {
      v5 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 496LL))(a1);
      TextBoxEx_188ab20_alt1(v4, v5);
    }
    else if (v3 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
LABEL_10:
  v6 = *(char**)(a1 + 1176);
  v7 = *(char**)(a1 + 1168);
  v99_.v100 = 0;
  v99_.v101 = 0;
  v99_.v99 = nullptr;
  if (v6 != v7) {
    v94 = v2;
    v8 = 0;
    v9 = 0x249249249249249LL;
    do {
      v10 = *(_QWORD*)v7;
      if (*(_QWORD*)v7 != 0) {
        v8 |= (*(_BYTE*)(v10 + 337) & 0x20) != 0;
      }
      if ((unsigned __int64)(v6 - v7) < 9) {
        v12 = 1;
      }
      else {
        v11 = 1;
        v12 = 1;
        v13 = 1;
        do {
          if (v10 == *(_QWORD*)&v7[8 * v11]) {
            v14 = &v7[8 * v11];
            v15 = v6 - (v14 + 8);
            if (v6 != v14 + 8) {
              memmove_alt1((__int64)&v7[8 * v11], (__int64)(v14 + 8),
                           v6 - (v14 + 8));
            }
            v16 = *(_QWORD*)(a1 + 1200);
            v6 = &v14[v15];
            *(_QWORD*)(a1 + 1176) = &v14[v15];
            if (v16 > v11) {
              v17 = v11 >> 6;
              v18 = *(_QWORD*)(a1 + 1192);
              v19 = v16 & 0x3F;
              if (v13 < 0) {
                v17 = -(__int64)((unsigned int)(63 - v13) >> 6);
              }
              v20 = v13 & 0x3F;
              v21 = v17 << 6;
              v22 = v18 + 8 * v17;
              v23 = v17 & 0x3FFFFFFFFFFFFFFLL;
              v24 = v20 + v21;
              if (v20 + v21 - 63 >= 0) {
                v24 = v20 + v21 - 63;
              }
              v25 = v24 >> 6;
              if (v21 < 0) {
                v23 = v25;
              }
              v26 = (unsigned __int64*)(v18 + 8 * v23);
              v27 = (v20 + 1) & 0x3F;
              v28 =
                  (unsigned __int64*)((((unsigned __int64)(v20 + 1) >> 3) & 8) +
                                      v22);
              v29 = v18 + 8 * (v16 >> 6);
              if ((_DWORD)v20 == (_DWORD)v27) {
                v30 = v19 - v27 + 8 * (v29 - (_QWORD)v28);
                if (v30 >= 1) {
                  if (v27 != 0) {
                    v31 = (unsigned int)(64 - v20);
                    if (v30 >= v31) {
                      v32 = v31;
                    }
                    else {
                      v32 = v19 - v27 + 8 * (v29 - (_QWORD)v28);
                    }
                    v30 -= v32;
                    v33 = *v28++;
                    *v26 =
                        *v26 &
                            ~((0xFFFFFFFFFFFFFFFFLL >>
                               ((unsigned __int8)v31 - (unsigned __int8)v32)) &
                              (-1LL << v27)) |
                        v33 &
                            (0xFFFFFFFFFFFFFFFFLL >>
                             ((unsigned __int8)v31 - (unsigned __int8)v32)) &
                            (-1LL << v27);
                    v26 =
                        (unsigned __int64*)((char*)v26 +
                                            (((unsigned int)(v32 + v27) >> 3) &
                                             0x18LL));
                  }
                  if (v30 >= 0) {
                    v34 = v30;
                  }
                  else {
                    v34 = v30 + 63;
                  }
                  v35 = v34 >> 6;
                  if ((unsigned __int64)(v30 + 63) >= 0x7F) {
                    memmove_alt1((__int64)v26, (__int64)v28, 8 * v35);
                  }
                  if (v30 - (v35 << 6) >= 1) {
                    v26[v35] =
                        v26[v35] &
                            ~(0xFFFFFFFFFFFFFFFFLL >>
                              (((_BYTE)v35 << 6) - (unsigned __int8)v30)) |
                        v28[v35] & (0xFFFFFFFFFFFFFFFFLL >>
                                    (((_BYTE)v35 << 6) - (unsigned __int8)v30));
                  }
                }
              }
              else {
                v102_.v103 = v13 & 0x3F;
                v102_.v102 = (unsigned __int64*)(v18 + 8 * v23);
                AnimLayerCtrlModule_ce5500_alt1((void*)((__int64)v104), v28,
                                                v27, v29, v19,
                                                (__int64)&v102_.v102);
              }
              --*(_QWORD*)(a1 + 1200);
              v6 = *(char**)(a1 + 1176);
            }
            v7 = *(char**)(a1 + 1168);
            ++v12;
            --v13;
          }
          v11 = ++v13;
        } while (v13 < (unsigned __int64)((v6 - v7) >> 3));
      }
      if (v10 != 0) {
        v36 = *(unsigned __int16*)(v10 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v36) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v37 = game_map_MapRandom_instance__ptr[0];
          v38 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v39 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v40 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v37 + 1) = v38;
          v41 = (v40 >> 8) ^ (v39 >> 19) ^ v40 ^ v39;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v37) = v39;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v37 + 4) = v41;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v42 = (unsigned __int64)((16 * ((_WORD)v41 -
                                          1000 *
                                              (unsigned __int16)((v41 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
        }
        else {
          v42 = 0x100000000LL;
        }
      }
      else {
        v36 = 0;
        v42 = 0;
      }
      *(_QWORD*)&v104[4] = v42 | v36;
      *(_DWORD*)v104 = 8;
      if ((_BYTE)GameData_21caa2c != 0) {
        v43 = GameData_21caa2c;
      }
      else {
        v43 = 0;
      }
      *(_QWORD*)&v104[12] = v43;
      WORD1(v105[0]) = 0;
      HIDWORD(v105[0]) = 0;
      v107_.v109 = 0;
      v107_.v110 = 0;
      v107_.v111 = nullptr;
      v107_.v107 = nullptr;
      v107_.v108 = 0;
      v106 = &v107_.v107;
      GameRoutine_930b90_alt1((__int64)v105, (__int64)GameData_212c8b0[0]);
      v44 = *(_QWORD*)(a1 + 1200);
      LODWORD(v107_.v112) = 0;
      HIDWORD(v107_.v112) = v12;
      v107_.v113 = -1;
      if (v44 != 0) {
        v45 = **(_BYTE**)(a1 + 1192) & 1;
      }
      else {
        v45 = 0;
      }
      v46 = v99_.v100;
      if (v99_.v100 >= v99_.v101) {
        v49 = (__int64)v99_.v99;
        v50 = v99_.v100 - (_QWORD)v99_.v99;
        v51 = 0x6DB6DB6DB6DB6DB7LL *
                  ((__int64)(v99_.v100 - (_QWORD)v99_.v99) >> 4) +
              1;
        if (v51 > v9) {
          GameRoutine_e66f80_alt1();
        }
        if (0xDB6DB6DB6DB6DB6ELL *
                ((__int64)(v99_.v101 - (_QWORD)v99_.v99) >> 4) >
            v51) {
          v51 = 0xDB6DB6DB6DB6DB6ELL *
                ((__int64)(v99_.v101 - (_QWORD)v99_.v99) >> 4);
        }
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL *
                               ((__int64)(v99_.v101 - (_QWORD)v99_.v99) >>
                                4)) >= 0x124924924924924LL) {
          v52 = v9;
        }
        else {
          v52 = v51;
        }
        if (v52 > v9) {
          GameRoutine_60a210();
        }
        v53 = v8;
        v54 = v9;
        v96 = 112 * v52;
        v55 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                             112 * v52, 16, 0);
        v56 = v55 + v50;
        v95 = v55;
        *(_DWORD*)v56 = *(_DWORD*)v104;
        *(_QWORD*)(v56 + 4) = *(_QWORD*)&v104[4];
        if (v104[12] != 0) {
          v57 = *(_QWORD*)&v104[12];
        }
        else {
          v57 = 0;
        }
        *(_QWORD*)(v56 + 12) = v57;
        *(_QWORD*)(v56 + 48) = 0;
        *(_WORD*)(v56 + 26) = 0;
        *(_DWORD*)(v56 + 28) = 0;
        *(_QWORD*)(v56 + 40) = v56 + 48;
        *(_QWORD*)(v56 + 56) = 0;
        *(_QWORD*)(v56 + 64) = 0;
        *(_QWORD*)(v56 + 72) = 0;
        *(_QWORD*)(v56 + 80) = 0;
        GameRoutine_930b90_alt1(v56 + 24, (__int64)v105);
        v62 = v107_.v112;
        *(_BYTE*)(v56 + 105) = v45;
        v63 = (const char*)(v56 - v50);
        *(_BYTE*)(v56 + 104) = 0;
        *(_QWORD*)(v56 + 88) = v62;
        *(_DWORD*)(v56 + 96) = v107_.v113;
        if (v49 != v46) {
          v64 = 0;
          do {
            v68 = v49 + v64;
            v69 = (char*)&v63[v64];
            v70 = *(_DWORD*)(v49 + v64);
            *(_QWORD*)(v69 + 4) = 0;
            *(_DWORD*)v69 = v70;
            v71 = *(_QWORD*)(v49 + v64 + 4);
            *(_QWORD*)(v69 + 12) = 0;
            *(_QWORD*)(v69 + 4) = v71;
            if (*(_BYTE*)(v49 + v64 + 12) != 0) {
              v65 = *(_QWORD*)(v68 + 12);
            }
            else {
              v65 = 0;
            }
            *((_QWORD*)v69 + 6) = 0;
            v66 = v69 + 48;
            *(_QWORD*)(v69 + 12) = v65;
            *((_WORD*)v69 + 13) = 0;
            *((_DWORD*)v69 + 7) = 0;
            *((_QWORD*)v69 + 5) = v69 + 48;
            *((_QWORD*)v69 + 7) = 0;
            *((_QWORD*)v69 + 8) = 0;
            *((_QWORD*)v69 + 9) = 0;
            *((_QWORD*)v69 + 10) = 0;
            GameRoutine_930b90_alt1((__int64)(v69 + 24), v68 + 24);
            v67 = *(_QWORD*)(v68 + 88);
            v64 += 112;
            *((_DWORD*)v66 + 12) = *(_DWORD*)(v68 + 96);
            *((_QWORD*)v66 + 5) = v67;
            *((_WORD*)v66 + 28) = *(_WORD*)(v68 + 104);
          } while (v49 + v64 != v46);
          do {
            v73 = *(_BYTE*)(v49 + 64);
            *(_DWORD*)(v49 + 32) = 0;
            *(_QWORD*)(v49 + 24) = 0;
            if ((v73 & 1) != 0) {
              **(_BYTE**)(v49 + 80) = 0;
              *(_QWORD*)(v49 + 72) = 0;
            }
            else {
              *(_WORD*)(v49 + 64) = 0;
            }
            GameRoutine_6e3b50_alt1(v49 + 40, *(_QWORD**)(v49 + 48));
            v74 = *(_BYTE*)(v49 + 64);
            *(_QWORD*)(v49 + 48) = 0;
            *(_QWORD*)(v49 + 56) = 0;
            *(_QWORD*)(v49 + 40) = v49 + 48;
            if ((v74 & 1) != 0) {
              v72 = *(_QWORD**)(v49 + 80);
              if (v72 != nullptr) {
                v75 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v75 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v75, (__int64)v72);
                v72 = *(_QWORD**)(v49 + 48);
              }
            }
            else {
              v72 = nullptr;
            }
            GameRoutine_6e3b50_alt1(v49 + 40, v72);
            v49 += 112;
          } while (v49 != v46);
          v49 = (__int64)v99_.v99;
        }
        v61 = v56 + 112;
        v99_.v99 = v63;
        v99_.v100 = v56 + 112;
        v99_.v101 = v95 + v96;
        if (v49 != 0) {
          v76 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v76 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v49);
        }
        v8 = v53;
        v9 = v54;
      }
      else {
        v47 = *(_DWORD*)v104;
        *(_QWORD*)(v99_.v100 + 4) = 0;
        *(_QWORD*)(v46 + 12) = 0;
        *(_DWORD*)v46 = v47;
        *(_QWORD*)(v46 + 4) = *(_QWORD*)&v104[4];
        if (v104[12] != 0) {
          v48 = *(_QWORD*)&v104[12];
        }
        else {
          v48 = 0;
        }
        *(_QWORD*)(v46 + 48) = 0;
        v58 = v46 + 48;
        *(_QWORD*)(v58 - 36) = v48;
        *(_WORD*)(v58 - 22) = 0;
        *(_DWORD*)(v58 - 20) = 0;
        *(_QWORD*)(v58 - 8) = v58;
        *(_QWORD*)(v58 + 8) = 0;
        *(_QWORD*)(v58 + 16) = 0;
        *(_QWORD*)(v58 + 24) = 0;
        *(_QWORD*)(v58 + 32) = 0;
        GameRoutine_930b90_alt1(v58 - 24, (__int64)v105);
        v59 = v107_.v112;
        v60 = v107_.v113;
        *(_BYTE*)(v58 + 56) = 0;
        v61 = v58 + 64;
        *(_BYTE*)(v58 + 57) = v45;
        *(_DWORD*)(v58 + 48) = v60;
        *(_QWORD*)(v58 + 40) = v59;
      }
      v99_.v100 = v61;
      v105[0] = 0;
      LODWORD(v105[1]) = 0;
      if ((v107_.v109 & 1) != 0) {
        *v107_.v111 = 0;
        v107_.v110 = 0;
      }
      else {
        LOWORD(v107_.v109) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v106, v107_.v107);
      v107_.v107 = nullptr;
      v107_.v108 = 0;
      v106 = &v107_.v107;
      if ((v107_.v109 & 1) != 0) {
        v77 = v107_.v111;
        if (v107_.v111 != nullptr) {
          v78 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v78 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v78,
              (__int64)v107_.v111);
          v77 = v107_.v107;
        }
      }
      else {
        v77 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v106, v77);
      v79 = *(_QWORD*)(a1 + 1168);
      v80 = *(_QWORD*)(a1 + 1176);
      v81 = v80 - (v79 + 8);
      if (v80 != v79 + 8) {
        memmove_alt1(*(_QWORD*)(a1 + 1168), v79 + 8, v80 - (v79 + 8));
      }
      v82 = *(_QWORD*)(a1 + 1200);
      v6 = (char*)(v79 + v81);
      *(_QWORD*)(a1 + 1176) = v79 + v81;
      if (v82 != 0) {
        v83 = *(unsigned __int64**)(a1 + 1192);
        v102_.v103 = 0;
        v102_.v102 = v83;
        AnimLayerCtrlModule_ce5500_alt1((void*)((__int64)v104), v83, 1u,
                                        (__int64)&v83[v82 >> 6], v82 & 0x3F,
                                        (__int64)&v102_.v102);
        --*(_QWORD*)(a1 + 1200);
        v6 = *(char**)(a1 + 1176);
      }
      v7 = *(char**)(a1 + 1168);
    } while (v6 != v7);
    v2 = v94;
    if ((v8 & 1) != 0) {
      snd_Fade_Fade_10c830_alt1((__int64)v104, 0x0.0p+0f);
      snd_play_ff2d0_alt1((__int64)"SE_SYS_ItemGet_Quest",
                          (__int64)"SE_SYS_ItemGet_Quest", (__int64)v104, 0,
                          0x10001u, 0, 0x1.f400000000000p+8f,
                          0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(v104);
    }
  }
  LayoutAccessor_1560070_alt2((void*)(&v97_.v97), v2, "L_ItemList");
  if (v97_.v98 != 0) {
    v84 = std___1___shared_weak_count_lock_alt1(v97_.v98);
    if (v84 != 0) {
      v85 = v84;
      if (v97_.v97 != nullptr) {
        Util_1586140_alt1(v97_.v97, (__int64*)&v99_.v99);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85);
        std___1___shared_weak_count___release_weak_alt1(v85);
      }
    }
    if (v97_.v98 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v97_.v98);
    }
  }
  GameRoutine_17356e0_alt1(v2, (__int64)"A_Contents");
  v86 = (__int64)v99_.v99;
  if (v99_.v99 != nullptr) {
    if (v99_.v99 == (const char*)v99_.v100) {
      goto LABEL_132;
    }
    v87 = v99_.v100 - 40;
    do {
      v90 = *(_BYTE*)(v87 - 8);
      *(_DWORD*)(v87 - 40) = 0;
      *(_QWORD*)(v87 - 48) = 0;
      if ((v90 & 1) != 0) {
        **(_BYTE**)(v87 + 8) = 0;
        *(_QWORD*)v87 = 0;
      }
      else {
        *(_WORD*)(v87 - 8) = 0;
      }
      GameRoutine_6e3b50_alt1(v87 - 32, *(_QWORD**)(v87 - 24));
      v91 = *(_BYTE*)(v87 - 8);
      *(_QWORD*)(v87 - 24) = 0;
      *(_QWORD*)(v87 - 16) = 0;
      *(_QWORD*)(v87 - 32) = v87 - 24;
      if ((v91 & 1) != 0) {
        v88 = *(_QWORD**)(v87 + 8);
        if (v88 != nullptr) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v92 = 128;
          }
          else {
            v92 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v92,
                                             (__int64)v88);
          v88 = *(_QWORD**)(v87 - 24);
        }
      }
      else {
        v88 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v87 - 32, v88);
      v89 = v87 - 72;
      v87 -= 112LL;
    } while (v89 != v86);
    v86 = (__int64)v99_.v99;
    if (v99_.v99 != nullptr) {
    LABEL_132:
      v93 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v93 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v86);
    }
  }
}

__int64 game_telop_1770d20(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64* v8;

  v2 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register_alt1(a1);
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = a1 + 200;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 248) = 1065353216;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 332) = 0;
  *(_BYTE*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 320) = 3;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 432) = 0x2000;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_DWORD*)(a1 + 520) = 1065353216;
  *(_QWORD*)(a1 + 324) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 552) = 1065353216;
  *(_WORD*)(a1 + 560) = 0;
  *(_WORD*)(a1 + 584) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_WORD*)(a1 + 336) = 1;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_DWORD*)(a1 + 696) = 1065353216;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = a1 + 472;
  *(_DWORD*)(a1 + 728) = 1065353216;
  *(_WORD*)(a1 + 736) = 0;
  *(_WORD*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 640) = a1 + 648;
  v3 = GameData_2130240[0] + 2;
  *(_BYTE*)(a1 + 800) = 0;
  *(_BYTE*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = v3;
  *(_QWORD*)a1 = game_telop_TelopResult_vtable;
  v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_BYTE*)(a1 + 820) = 0;
  *(_WORD*)(a1 + 824) = 0;
  v5 = fw_memory_HeapManager_Allocate_alt1(v4, 296, 16, 0);
  *(_DWORD*)(v5 + 48) = 0x2000;
  v6 = GameData_2131678;
  *(_WORD*)(v5 + 108) = 256;
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_DWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_WORD*)(v5 + 80) = 0;
  *(_DWORD*)(v5 + 112) = -1082130432;
  *(_WORD*)(v5 + 116) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_BYTE*)(v5 + 160) = 0;
  *(_BYTE*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_DWORD*)(v5 + 127) = 0;
  *(_QWORD*)(a1 + 856) = v5;
  *(_WORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_BYTE*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 1024) = 1065353216;
  *(_WORD*)(a1 + 1032) = 0;
  *(_WORD*)(a1 + 1040) = 0;
  *(_WORD*)(a1 + 1064) = 0;
  *(_WORD*)(a1 + 1088) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_DWORD*)(v5 + 292) = 2;
  *(_QWORD*)(v5 + 24) = 0;
  result = v5 + 24;
  *(_QWORD*)(a1 + 848) = result;
  *(_QWORD*)(a1 + 1007) = 0;
  v8 = GameData_2130f98[0] + 2;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_BYTE*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 984) = v8;
  *(_QWORD*)a1 = game_telop_TelopTrainingResult_vtable;
  return result;
}

__int64 game_telop_177ac10(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64* v14;
  __int64 v15;

  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v8 = GameData_212c608[0];
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v8 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register_alt1(a1);
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = a1 + 200;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 248) = 1065353216;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 332) = 0;
  *(_BYTE*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 320) = 3;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 432) = 0x2000;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_DWORD*)(a1 + 520) = 1065353216;
  *(_QWORD*)(a1 + 324) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 552) = 1065353216;
  *(_WORD*)(a1 + 560) = 0;
  *(_WORD*)(a1 + 584) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_WORD*)(a1 + 336) = 1;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_DWORD*)(a1 + 696) = 1065353216;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = a1 + 472;
  *(_DWORD*)(a1 + 728) = 1065353216;
  *(_WORD*)(a1 + 736) = 0;
  *(_WORD*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 640) = a1 + 648;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(a1 + 800) = 0;
  *(_BYTE*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = v9;
  *(_QWORD*)a1 = game_telop_TelopResult_vtable;
  v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_BYTE*)(a1 + 820) = 0;
  *(_WORD*)(a1 + 824) = 0;
  v11 = fw_memory_HeapManager_Allocate_alt1(v10, 296, 16, 0);
  *(_DWORD*)(v11 + 48) = 0x2000;
  v12 = GameData_2131678;
  *(_WORD*)(v11 + 108) = 256;
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_DWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_DWORD*)(v11 + 104) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 0;
  *(_DWORD*)(v11 + 112) = -1082130432;
  *(_WORD*)(v11 + 116) = 0;
  *(_WORD*)(v11 + 136) = 0;
  *(_BYTE*)(v11 + 160) = 0;
  *(_BYTE*)(v11 + 288) = 0;
  *(_QWORD*)(v11 + 272) = 0;
  *(_QWORD*)(v11 + 280) = 0;
  *(_QWORD*)(v11 + 256) = 0;
  *(_QWORD*)(v11 + 264) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_QWORD*)(v11 + 248) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 208) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 192) = 0;
  *(_QWORD*)(v11 + 200) = 0;
  *(_QWORD*)(v11 + 176) = 0;
  *(_QWORD*)(v11 + 184) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_DWORD*)(v11 + 127) = 0;
  *(_QWORD*)(a1 + 856) = v11;
  *(_WORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_BYTE*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 1024) = 1065353216;
  *(_WORD*)(a1 + 1032) = 0;
  *(_WORD*)(a1 + 1040) = 0;
  *(_WORD*)(a1 + 1064) = 0;
  *(_WORD*)(a1 + 1088) = 0;
  *(_QWORD*)v11 = v12 + 16;
  *(_DWORD*)(v11 + 292) = 2;
  *(_QWORD*)(v11 + 24) = 0;
  result = v11 + 24;
  *(_QWORD*)(a1 + 848) = result;
  *(_QWORD*)(a1 + 1007) = 0;
  v14 = GameData_2130f98[0] + 2;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_BYTE*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1168) = a2;
  *(_BYTE*)(a1 + 1176) = a3;
  *(_DWORD*)(a1 + 1180) = a4;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1224) = 1065353216;
  *(_WORD*)(a1 + 1232) = 0;
  *(_WORD*)(a1 + 1240) = 0;
  *(_WORD*)(a1 + 1264) = 0;
  *(_WORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 984) = v14;
  *(_QWORD*)a1 = game_telop_TelopGrowMastery_vtable;
  *(_QWORD*)(a1 + 1207) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  v15 = GameData_2131cf8[0] + 16;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1184) = v15;
  return result;
}

void game_telop_17cc420(__int64* a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v6;
  __int64 v7;
  __int64 (***v8)();
  _QWORD* v9;
  int v10;
  unsigned int v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD v14[3];
  _QWORD v15[3];
  struct {
    __int64 v16[3];
    int v17;
    char gap84_[4];
    __int64 v18;
    __int64 v19;
    __int16 v20;
    char gap106_[6];
    __int64 v21;
    __int64 v22;
  } v16_;
  struct {
    _QWORD v23[2];
    __int16 v24;
    char gap146_[22];
    __int16 v25;
    char gap170_[22];
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    _BYTE v31[11];
    char gap243_[1];
    int v32;
    __int16 v33;
    char gap250_[22];
    int v34;
  } v23_;
  char v35[24];

  v23_.v30 = 0;
  *(_QWORD*)v23_.v31 = 0;
  v16_.v17 = 0;
  v16_.v16[1] = 0;
  v16_.v16[2] = 0;
  v23_.v24 = 0;
  v23_.v25 = 0;
  v16_.v21 = 0;
  v16_.v22 = 0;
  __builtin_memset(v23_.v23, 0, 15);
  v16_.v20 = 15;
  *(_DWORD*)&v23_.v31[7] = 0x10000;
  v23_.v26 = 0;
  v23_.v27 = 0;
  v23_.v28 = 0;
  v23_.v29 = 0;
  v23_.v33 = 0;
  v23_.v34 = 0;
  v16_.v18 = a2;
  v16_.v19 = a3;
  BYTE5(v23_.v23[1]) = a5;
  LODWORD(v23_.v23[1]) = a4;
  v15[0] = 0;
  v15[1] = a2;
  v23_.v32 = -1;
  LODWORD(v16_.v16[0]) = 4;
  strcpy(v35, "\"SE_SYS_Heart_Down");
  if (a2 != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL);
  }
  else {
    v6 = 0;
  }
  v15[2] = v6;
  v14[0] = 0;
  v14[1] = a3;
  if (a3 == 0) {
    v8 = &game_GameReliance_Impl_Data_vtable_ptr;
    goto LABEL_10;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 24) + 1784LL) + 272LL);
  v14[2] = v7;
  v8 = GameData_212dae8;
  if (v6 == 0 || v7 == 0) {
  LABEL_10:
    if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 2) == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v9 = *(_QWORD**)(game_GameModeData_instance_ + 128);
  v10 = a4;
  v11 = GameReliance_8e17a0_alt1(v9, (__int64)v15, (__int64)v14);
  if ((v11 & 0x80000000) != 0) {
    v8 = &game_GameReliance_Impl_Data_vtable_ptr;
  }
  else {
    v8 = (__int64 (***)(void))(v9[1] + 56LL * v11);
  }
  a4 = v10;
  if (*((_BYTE*)v8 + 10) != 0) {
  LABEL_11:
    LODWORD(v23_.v23[0]) = a4 + *((unsigned __int16*)v8 + 6);
    HIDWORD(v23_.v23[0]) = v23_.v23[0];
  }
LABEL_12:
  v12 = a1[206];
  if (v12 >= a1[207]) {
    v13 = TelopParts_17cd840_alt1(a1 + 205, (__int64)v16_.v16);
  }
  else {
    TelopParts_17cdaa0_alt1((_QWORD*)a1[206], v16_.v16);
    v13 = v12 + 248;
  }
  a1[206] = v13;
  TelopParts_17cbd60_alt1((__int64)v16_.v16);
}

#pragma GCC visibility pop
