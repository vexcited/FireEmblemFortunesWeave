#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameManager_a30f00(_QWORD, _QWORD);
__int64 GameManager_a30fe0(_QWORD, _QWORD);
__int64 GameManager_a31200(_QWORD, _QWORD);
__int64 GameRoutine_11cfc60(_QWORD, _QWORD);
__int64 GameRoutine_181a480(void);
__int64 GameRoutine_181a7e0(void);
__int64 GameRoutine_181aa10(void);
__int64 GameRoutine_18cf910(_QWORD, _QWORD);
__int64 GameRoutine_18d0ec0(_QWORD, _QWORD);
__int64 GameRoutine_18d1b90(_QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_809ba0(float);
__int64 GameRoutine_a30c60(_QWORD);
__int64 GameRoutine_a312c0(_QWORD, _QWORD, _QWORD);
__int64 nn_os_TryWaitLightEvent(_QWORD);
__int64 snd_BGM_checkFinished(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD);
__int64 snd_isPlaying_100430(_QWORD);
__int64 snd_release_ffb30(_QWORD);
extern __int64 GameData_21fa5e0;
extern __int64 GameData_2240058;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c598[2];
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 Seq_11cd8f0(__int64 result);
__int64 Seq_Unknown3(__int64 a1);
__int64 Seq_11cd9a0(__int64 a1);
bool Seq_11cdb40(__int64 a1);
__int64 Seq_11ce360(__int64 result);
__int64 Seq_11ce880(__int64 result);
__int64 Seq_11cf400(__int64 a1);
__int64 Seq_Unknown12_11cf4a0(__int64 result);
_QWORD* GameManager_a2e490(__int64, __int64, char);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_11d0a10(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_1843a40(void);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 snd_Fade_Fade_10cd70(_QWORD, _QWORD);
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern __int64 GameData_21cf840;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
float snd_Fade_getTime(_QWORD);
struct PseudoSret snd_BGM_getFirstHandle(_QWORD);
void GameRoutine_a290c0(__int64, __int64, __int64, int, char, float);
void __attribute__((noreturn)) GameRoutine_11d1170(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void Seq_a30f00(__int64 a1, __int64 a2);
void Seq_a31200(__int64 a1, __int64 a2);
__int64 Seq_11cf9d0(__int64 a1);
__int64 Seq_11cfc60(_QWORD* a1, __int16 a2);
__attribute__((swiftcall)) void GameRoutine_1366ac0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
    snd_BGM_getFirstHandle_alt1(PSEUDO_X8,
                                _QWORD) __asm__("snd_BGM_getFirstHandle");
__attribute__((swiftcall)) void
snd_BGM_getFirstHandle_alt2(PSEUDO_X8,
                            __int64) __asm__("snd_BGM_getFirstHandle");
__int64*
GameRoutine_18d0ec0_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_18d0ec0");
__int64* game_8224a0_alt1(unsigned __int8) __asm__("game_8224a0");
__int64 GameManager_a31100(_QWORD, _QWORD);
__int64 GameManager_a31610(_QWORD, _QWORD);
__int64 GameManager_a31610_alt1(__int64, __int64) __asm__("GameManager_a31610");
__int64 GameRoutine_11cbe80(__int64, __int64, int, __int64);
__int64 GameRoutine_11cc300(_QWORD);
__int64 GameRoutine_11d0d00(__int64, char);
__int64 GameRoutine_11d0dc0(__int64);
__int64 GameRoutine_11d0e50(__int64);
__int64 GameRoutine_11d1190(_QWORD);
__int64 GameRoutine_11d1340(_QWORD);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_1553220(__int64 result);
__int64 GameRoutine_1553220_alt1(_QWORD) __asm__("GameRoutine_1553220");
__int64 GameRoutine_15e1b80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_175ef80(__int64, __int16*);
__int64 GameRoutine_1819800(_QWORD, _QWORD);
__int64 GameRoutine_181ab60(__int64 result);
__int64 GameRoutine_181acc0(__int64 result);
__int64 GameRoutine_19adee0(_QWORD);
__int64 GameRoutine_19ae080(_QWORD);
__int64 GameRoutine_19ae900(__int64 result, int);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_867df0(_QWORD);
__int64 GameRoutine_9e6800(_QWORD, _QWORD);
__int64 GameRoutine_b86660(_QWORD);
__int64 GameVariable_828800(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 Manager_18cf680(__int64);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Seq_11cffe0_alt1(__int64, float, float, float) __asm__("Seq_11cffe0");
__int64 Seq_a31200_alt1(__int64, __int64) __asm__("Seq_a31200");
__int64 TextSelector_1907f20(_BYTE*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_809dc0(_QWORD, _QWORD, long double);
__int64 game_8224a0(_QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_GameView_Update(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_cutscene_181a060_alt1(_QWORD) __asm__("game_cutscene_181a060");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_oe_SetUserInactivityDetectionTimeExtended(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Voice_hasSends(_QWORD);
__int64 snd_a30db0(_QWORD);
__int64 snd_a312c0(_QWORD, _QWORD, _QWORD);
__int64 snd_a312c0_alt1(__int64 result, _BYTE*, __int64) __asm__("snd_a312c0");
__int64 snd_a31410(_QWORD, _QWORD, _QWORD);
__int64 snd_a31410_alt1(__int64 result, _BYTE*, __int64) __asm__("snd_a31410");
__int64 snd_findSound(__int64);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_stop_ffbe0(_QWORD, _QWORD, long double);
__int64 snd_stop_ffbe0_alt1(__int64, __int64) __asm__("snd_stop_ffbe0");
__int64 std___1___shared_weak_count_lock_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count_lock");
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_GetPaneAlpha(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__n128 GameRoutine_1563f90_alt1(__int64,
                                __int64) __asm__("GameRoutine_1563f90");
__n128 GameRoutine_1564060_alt1(__int64*) __asm__("GameRoutine_1564060");
__n128 GameRoutine_658c00(_QWORD*);
__n128 LayoutAccessor_155e140_alt1(__int64*) __asm__("LayoutAccessor_155e140");
__n128 Manager_18cfba0(_QWORD, _QWORD);
__n128 Seq_11cf9d0_alt1(__int64) __asm__("Seq_11cf9d0");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 snd_Fade_Fade_10c830(_QWORD, long double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_11d6400(_QWORD*);
bool snd_Voice_hasSends_alt1(__int64) __asm__("snd_Voice_hasSends");
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _DWORD GameData_21d925c[32];
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_216f648;
extern _UNKNOWN GameData_2258e90;
extern _UNKNOWN GameData_2258ec0;
extern __int64 (*GameData_2016c20[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_movie_Seq_vtable[])();
extern __int64* GameData_212e348;
extern __int64* GameData_2130600[6];
extern __int64* GameData_2130608[5];
extern __int64* GameData_2130610[4];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212c638;
extern __int64 GameData_2131d40[18];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9fd0;
extern __int64 GameData_21f61c0;
extern __int64 GameData_2240048;
extern __int64 GameData_2240050;
extern __int64 GameData_2241720;
extern __int64 GameData_2258e68;
extern __int64 GameData_2258e70;
extern __int64 GameData_2258e78;
extern __int64 GameData_2258e80;
extern __int64 GameData_2258e88;
extern __int64 GameData_2258e98;
extern __int64 GameData_2258ea0;
extern __int64 GameData_2258ea8;
extern __int64 GameData_2258eb0;
extern __int64 GameData_2258eb8;
extern __int64 GameData_2259540;
extern __int64 GameData_2265ea0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_g_game_setting_ptr;
extern char GameData_1a9f09e;
extern char GameData_21f3fe4;
extern int GameData_21d92dc;
extern int GameData_21d92e0;
extern int GameData_21f61c8;
float Cursor_734120(int, int, float, float, float, float);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
void GameRoutine_1566440(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_15e1b80_alt1(__int64, unsigned int, unsigned int, unsigned int,
                              __int64) __asm__("GameRoutine_15e1b80");
void GameRoutine_19ae1e0(__int64);
void GameRoutine_716420(__int64, unsigned __int8);
void LayoutAccessor_155e830_alt1(__int64*,
                                 char) __asm__("LayoutAccessor_155e830");
void LayoutAccessor_1562680_alt1(__int64*, __int64,
                                 float) __asm__("LayoutAccessor_1562680");
void LayoutAccessor_1567000_alt1(__int64,
                                 char) __asm__("LayoutAccessor_1567000");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn)) String_60a230(_QWORD);
void game_cutscene_181a060(__int64, __n128);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void snd_Fade_Fade_10c910_alt1(__int64, int) __asm__("snd_Fade_Fade_10c910");
void ui_LayoutAccessor_SetPaneAlpha(__int64*, __int64, char);
__n128 Seq_Destructor_11cc420(__int64 a1);
__int64 Seq_11cc900(__int64 result);
__int64 Seq_11cd420(__int64 a1);
void Seq_11cd790(__int64 a1, __n128 a2);
__int64 Seq_11ce520(__int64 a1, long double a2);
void game_movie_Seq_Tick_BgmCtrl(__int64 a1);
__int64 Seq_11cf560(__int64 a1, __int64 a2);
void game_movie_Seq_Tick_BgmCtrl_lambda0_Invoke(__int64 a1, _QWORD** a2);
void Seq_11cffe0(__int64 a1, float a2, float a3, float a4);
void Seq_11d0a10(__int64 a1);
__n128 Seq_11d0af0(__int64 a1);
void Seq_11d0eb0(__int64 a1, _BYTE* a2, int a3, int a4, float a5);

void Seq_a30f00(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _BYTE v6[200];
  _QWORD v7[2];

  *(struct PseudoSret*)(v7) = snd_BGM_getFirstHandle(*(_QWORD*)(a1 + 8));
  if ((snd_fnd_WeakHandle_isValid(v7) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(v7);
    v5 = v4 != 0 ? v4 - 5592 : 0LL;
    if ((snd_Param_isEnvelopeReleased(v5 + 40) & 1) == 0 &&
        (snd_Param_isEnvelopeFading(v5 + 40) & 1) == 0 &&
        (snd_Param_isEnvelopeEnded(v5 + 40) & 1) == 0) {
      if (snd_Fade_getTime(a2) == 0.0f) {
        snd_Fade_Fade_10cb00(v6, "FadeTime_BGM_Bmap_Out_Next");
      }
      else {
        snd_Fade_Fade_10cd70(v6, a2);
      }
      GameManager_a2e490(a1, (__int64)v6, 0);
      snd_Fade_Destroy_Fade(v6);
      *(_BYTE*)(a1 + 3017) = 1;
    }
  }
}

void Seq_a31200(__int64 a1, __int64 a2)
{
  char v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char v13;
  float v14;
  __int64 v15;
  __int64 v16;

  v3 = *(_BYTE*)(a1 + 2824);
  v4 = *(unsigned __int8*)(a1 + 2896);
  v5 = (_QWORD*)(a1 + 2824);
  if ((v3 & 1) != 0) {
    v9 = (v4 & 1) == 0;
    v10 = v4 >> 1;
    if (v9) {
      v11 = a1 + 2897;
    }
    else {
      v11 = *(_QWORD*)(a1 + 2912);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *(_QWORD*)(a1 + 2904);
    }
    SpineModel_64dde0(v5, v11, v12);
  }
  else if ((v4 & 1) != 0) {
    GameRoutine_64df20(v5, *(_QWORD*)(a1 + 2912), *(_QWORD*)(a1 + 2904));
  }
  else {
    v7 = *(_QWORD*)(a1 + 2904);
    v8 = *(_QWORD*)(a1 + 2912);
    *v5 = *(_QWORD*)(a1 + 2896);
    v5[1] = v7;
    v5[2] = v8;
  }
  v13 = *(_BYTE*)(a1 + 2824);
  v14 = *(float*)(a1 + 2892);
  v15 = *(_QWORD*)(a1 + 2840);
  *(_BYTE*)(a1 + 601) = 0;
  if ((v13 & 1) != 0) {
    v16 = v15;
  }
  else {
    v16 = a1 + 2825;
  }
  GameRoutine_a290c0(a1, v16, a2, (int)v14, 0, 0.0);
}

__n128 Seq_Destructor_11cc420(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  __int64 v17;
  unsigned __int8 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __n128 v22;
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
  long double v33;
  __int64 v34;
  long double v35;
  __int64 v36;
  long double v37;
  __int64 v38;

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD*)(a1 + 768);
  v2 = *(_QWORD*)(a1 + 760);
  for (*(_QWORD*)a1 = game_movie_Seq_vtable; v1 != v2; v1 -= 16) {
    v4 = *(_QWORD*)(v1 - 8);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  *(_QWORD*)(a1 + 768) = v2;
  Manager_18cf680(GameData_2265ea0),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(a1 + 652) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 648)),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_BYTE*)(a1 + 652) == 1) {
      *(_BYTE*)(a1 + 652) = 0;
    }
  }
  if (GameData_2240050 != 0) {
    GameRoutine_11d6400((_QWORD*)(GameData_2240050 + 8)),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = *(_QWORD*)(game_GameModeData_instance_ + 2696);
    v7 = *(_QWORD*)(game_GameModeData_instance_ + 2688);
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 2664);
    v9 = *(_QWORD*)(game_GameModeData_instance_ + 2672);
    v10 = v9 == v8;
    v11 = v6 - 1 + v7;
    v12 = v11 >> 12;
    v13 = v11 & 0xFFF;
    v14 = ((v9 - v8) << 9) - 1;
    v15 = *(_QWORD*)(v8 + 8 * v12);
    if (v10) {
      v14 = 0;
    }
    v16 = *(_BYTE*)(v15 + v13);
    *(_QWORD*)(game_GameModeData_instance_ + 2696) = v6 - 1;
    if ((unsigned __int64)(v14 - (v6 + v7) + 1) >= 0x2000) {
      if (*(_QWORD*)(v9 - 8) != 0) {
        v17 = v5;
        v18 = v16;
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v9 = *(_QWORD*)(v17 + 2672);
        v16 = v18;
        v5 = v17;
      }
      *(_QWORD*)(v5 + 2672) = v9 - 8;
    }
    GameRoutine_716420(v5, v16),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v20 = GameData_2241720;
  if (GameData_2241720 != 0) {
    v21 = *(_DWORD*)(GameData_2241720 + 1736) - 1;
    *(_DWORD*)(GameData_2241720 + 1736) = v21;
    if (v21 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v20 + 1728) + 8LL))(v20 + 1728),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if (--GameData_21f61c8 == 0) {
    (*(void (**)(__int64))(GameData_21f61c0 + 8))((__int64)&GameData_21f61c0),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  nn_oe_SetUserInactivityDetectionTimeExtended(0),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v23 = *(_QWORD*)(a1 + 760);
  if (v23 != 0) {
    v24 = *(_QWORD*)(a1 + 768);
    if (v23 == v24) {
      goto LABEL_35;
    }
    do {
      v25 = *(_QWORD*)(v24 - 8);
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v22 = std___1___shared_weak_count___release_weak_alt1();
      }
      v24 -= 16;
    } while (v24 != v23);
    v26 = *(_QWORD*)(a1 + 760);
    *(_QWORD*)(a1 + 768) = v23;
    if (v26 != 0) {
    LABEL_35:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      v22 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
    }
  }
  if ((*(_BYTE*)(a1 + 720) & 1) != 0 && *(_QWORD*)(a1 + 736) != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    v22 = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
  }
  if ((*(_BYTE*)(a1 + 696) & 1) != 0 && *(_QWORD*)(a1 + 712) != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    v22 = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
  v30 = *(_QWORD*)(a1 + 680);
  *(_QWORD*)(a1 + 680) = 0;
  if (v30 != 0) {
    game_cutscene_181a060(v30, v22),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    v22 = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
  }
  v32 = *(_QWORD*)(a1 + 672);
  *(_QWORD*)(a1 + 672) = 0;
  if (v32 != 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v32 + 8LL))(
        v32, *(long double*)&v22),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *(__n128*)&v33 = LayoutAccessor_155e140_alt1((__int64*)(a1 + 504)),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v34 = *(_QWORD*)(a1 + 600);
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v34 + 16LL))(v34, v33),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  GameRoutine_1564060_alt1((__int64*)(a1 + 552)),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1563f90_alt1(a1 + 528, *(_QWORD*)(a1 + 536)),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_QWORD*)(a1 + 512) != 0) {
    std___1___shared_weak_count___release_weak_alt1(),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *(__n128*)&v35 = LayoutAccessor_155e140_alt1((__int64*)(a1 + 400)),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v36 = *(_QWORD*)(a1 + 496);
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v36 + 16LL))(v36, v35),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  GameRoutine_1564060_alt1((__int64*)(a1 + 448)),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(__n128*)&v37 = GameRoutine_1563f90_alt1(a1 + 424, *(_QWORD*)(a1 + 432)),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_QWORD*)(a1 + 408) != 0) {
    *(__n128*)&v37 = std___1___shared_weak_count___release_weak_alt1(),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v38 = *(_QWORD*)(a1 + 392);
  if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v38 + 16LL))(v38, v37),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  Seq_11cf9d0_alt1(a1 + 152),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameData_2240048 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

__int64 Seq_11cc900(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  int v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  char* v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  long double* v42;
  _BYTE* v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  bool v47;
  unsigned __int64 v48;
  char* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  unsigned __int64 v56;
  __int64 v57;
  char* v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64* v63;
  unsigned __int64 v64;
  char* v65;
  unsigned __int64 v66;
  __int64 v67;
  char* v68;
  unsigned __int64 v69;
  bool v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  __int64 v79;
  long double v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  long double* v84;
  long double v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  long double v100;
  char* v101;
  __int16 v102;
  char v103;
  __int64 v104;
  unsigned __int64 v105;
  char* v106;
  __int64 v107;
  unsigned __int64 v108;
  char* v109;
  __int64 v110;
  unsigned __int64 v111;
  char* v112;
  __int64 v113;
  unsigned __int64 v114;
  char* v115;
  __int64 v116;
  unsigned __int64 v117;
  char* v118;

  v1 = *(_QWORD*)(result + 656);
  v2 = result;
  if (v1 != 0) {
    v3 = *(char**)(v1 + 32);
    if (v3 != nullptr) {
      v4 = v3;
    }
    else {
      v4 = &GameData_1a9f09e;
    }
    v5 = strlen(v4);
    if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_227;
    }
    v6 = v5;
    if (v5 >= 0x17) {
      if ((v5 | 7) == 0x17) {
        v9 = 26;
      }
      else {
        v9 = (v5 | 7) + 1;
      }
      v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9,
                                                 16, 0);
      v111 = v6;
      v112 = v7;
      v110 = v9 | 1;
    }
    else {
      LOBYTE(v110) = 2 * v5;
      v7 = (char*)&v110 + 1;
      if (v5 == 0) {
      LABEL_21:
        v7[v6] = 0;
        v108 = 0;
        v109 = nullptr;
        v106 = nullptr;
        v107 = 0;
        v104 = 0;
        v105 = 0;
        if ((v110 & 1) != 0) {
          v5 = GameRoutine_64df20(&v107, v112, v111);
          if ((v110 & 1) != 0) {
            v10 = v111;
            v11 = v112;
            if (v111 == 0) {
              goto LABEL_32;
            }
          }
          else {
            v10 = (unsigned __int8)v110 >> 1;
            v11 = (char*)&v110 + 1;
            if ((unsigned __int8)v110 >> 1 == 0) {
              goto LABEL_32;
            }
          }
        }
        else {
          v10 = (unsigned __int64)(unsigned __int8)v110 >> 1;
          v107 = v110;
          v108 = v111;
          v109 = v112;
          v11 = (char*)&v110 + 1;
          if (v10 == 0) {
            goto LABEL_32;
          }
        }
        v12 = v10;
        while (v12 != 0) {
          v13 = (unsigned __int8)v11[--v12];
          if (v13 == 46) {
            goto LABEL_33;
          }
        }
      LABEL_32:
        v12 = -1;
      LABEL_33:
        if (v10 >= v12) {
          v14 = v12;
        }
        else {
          v14 = v10;
        }
        if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_227;
        }
        if (v14 >= 0x17) {
          if ((v14 | 7) == 0x17) {
            v16 = 26;
          }
          else {
            v16 = (v14 | 7) + 1;
          }
          v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v16, 16, 0);
          *((_QWORD*)&v100 + 1) = v14;
          v101 = v15;
          *(_QWORD*)&v100 = v16 | 1;
        }
        else {
          LOBYTE(v100) = 2 * v14;
          v15 = (char*)&v100 + 1;
          if (v14 == 0) {
          LABEL_45:
            v17 = (unsigned __int8)v110;
            v18 = v111;
            v15[v14] = 0;
            if ((v17 & 1) == 0) {
              v18 = v17 >> 1;
            }
            v19 = v18 - v12;
            if (v18 < v12) {
              String_60a230(v5);
            }
            if ((v17 & 1) != 0) {
              v20 = v112;
            }
            else {
              v20 = (char*)&v110 + 1;
            }
            if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_227;
            }
            if (v19 >= 0x17) {
              if ((v19 | 7) == 0x17) {
                v22 = 26;
              }
              else {
                v22 = (v19 | 7) + 1;
              }
              v21 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v22, 16, 0);
              v117 = v19;
              v118 = v21;
              v116 = v22 | 1;
            }
            else {
              LOBYTE(v116) = 2 * v19;
              v21 = (char*)&v116 + 1;
              if (v18 == v12) {
              LABEL_60:
                v23 = LOBYTE(v100);
                v21[v19] = 0;
                v24 = v101;
                if ((v23 & 1) != 0) {
                  v25 = v101;
                }
                else {
                  v25 = (char*)&v100 + 1;
                }
                if ((v23 & 1) != 0) {
                  v26 = *((_QWORD*)&v100 + 1);
                }
                else {
                  v26 = v23 >> 1;
                }
                v27 = v26 + 1;
                if (v26 + 1 < 0xFFFFFFFFFFFFFFF7LL) {
                  if (v27 >= 0x17) {
                    if ((v27 | 7) == 0x17) {
                      v29 = 26;
                    }
                    else {
                      v29 = (v27 | 7) + 1;
                    }
                    v28 = (char*)fw_memory_HeapManager_Allocate(
                        fw_memory_g_heap_manager, v29, 16, 0);
                    v114 = v26 + 1;
                    v115 = v28;
                    v113 = v29 | 1;
                  }
                  else {
                    v114 = 0;
                    v115 = nullptr;
                    v113 = (unsigned __int8)(2 * v27);
                    v28 = (char*)&v113 + 1;
                    if (v26 == 0) {
                    LABEL_75:
                      v31 = v117;
                      v30 = v118;
                      *(_WORD*)&v28[v26] = 70;
                      if ((v116 & 1) != 0) {
                        v32 = v30;
                      }
                      else {
                        v32 = (char*)&v116 + 1;
                      }
                      if ((v116 & 1) != 0) {
                        v33 = v31;
                      }
                      else {
                        v33 = (unsigned __int64)(unsigned __int8)v116 >> 1;
                      }
                      v34 = (__int64*)GameRoutine_1a09ce0(&v113, v32, v33);
                      v35 = *v34;
                      v36 = v34[1];
                      v37 = (char*)v34[2];
                      *v34 = 0;
                      v34[1] = 0;
                      v34[2] = 0;
                      if ((v104 & 1) != 0 && v106 != nullptr) {
                        v38 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v38 = 56;
                        }
                        v34 = (__int64*)nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v38);
                      }
                      v104 = v35;
                      v105 = v36;
                      v106 = v37;
                      if ((v113 & 1) != 0 && v115 != nullptr) {
                        v39 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v39 = 56;
                        }
                        v34 = (__int64*)nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v39);
                      }
                      if ((v116 & 1) != 0 && v118 != nullptr) {
                        v40 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v40 = 56;
                        }
                        v34 = (__int64*)nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
                      }
                      if ((v23 & 1) != 0 && v24 != nullptr) {
                        v41 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v41 = 56;
                        }
                        v34 = (__int64*)nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
                      }
                      v42 = (long double*)(v2 + 720);
                      if ((*(_BYTE*)(v2 + 720) & 1) != 0) {
                        v43 = *(_BYTE**)(v2 + 736);
                        *(_QWORD*)(v2 + 728) = 0;
                      }
                      else {
                        v43 = (_BYTE*)(v2 + 721);
                        *(_BYTE*)(v2 + 720) = 0;
                      }
                      *v43 = 0;
                      if (*(_BYTE*)(*(_QWORD*)(v2 + 672) + 32LL) != 2) {
                      LABEL_148:
                        v61 = *(unsigned __int8*)(v2 + 720);
                        if ((v61 & 1) != 0) {
                          v62 = *(_QWORD*)(v2 + 728);
                        }
                        else {
                          v62 = v61 >> 1;
                        }
                        if (v62 == 0) {
                          v63 = (__int64*)(v2 + 696);
                          if ((__int64*)(v2 + 696) != &v107) {
                            if ((*(_BYTE*)v63 & 1) != 0) {
                              if ((v107 & 1) != 0) {
                                v65 = v109;
                              }
                              else {
                                v65 = (char*)&v107 + 1;
                              }
                              if ((v107 & 1) != 0) {
                                v66 = v108;
                              }
                              else {
                                v66 = (unsigned __int64)(unsigned __int8)v107 >>
                                      1;
                              }
                              SpineModel_64dde0(v63, v65, v66);
                            }
                            else if ((v107 & 1) != 0) {
                              GameRoutine_64df20(v63, v109, v108);
                            }
                            else {
                              v64 = v108;
                              *v63 = v107;
                              *(_QWORD*)(v2 + 704) = v64;
                              *(_QWORD*)(v2 + 712) = v109;
                            }
                          }
                          v67 = fw_memory_g_heap_manager_ptr;
                          v68 = (char*)fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16,
                              0);
                          *((_QWORD*)&v100 + 1) = 24;
                          v101 = v68;
                          *(_QWORD*)&v100 = 33;
                          v69 = *(unsigned __int8*)(v2 + 696);
                          strcpy(v68, "Contents:/Movie/Product/");
                          v70 = (v69 & 1) == 0;
                          v71 = v69 >> 1;
                          if (v70) {
                            v72 = v2 + 697;
                          }
                          else {
                            v72 = *(_QWORD*)(v2 + 712);
                          }
                          if (v70) {
                            v73 = v71;
                          }
                          else {
                            v73 = *(_QWORD*)(v2 + 704);
                          }
                          v34 = (__int64*)GameRoutine_1a09ce0(&v100, v72, v73);
                          if ((*(_BYTE*)(v2 + 720) & 1) != 0 &&
                              *(_QWORD*)(v2 + 736) != 0) {
                            v74 = 128;
                            if (*(_QWORD*)(*(_QWORD*)v67 + 200LL) == 0) {
                              v74 = 56;
                            }
                            v34 = (__int64*)nn_mem_StandardAllocator_Free_alt2(
                                *(_QWORD*)v67 + v74);
                          }
                          v75 = *((_QWORD*)&v100 + 1);
                          *(_QWORD*)v42 = *(_QWORD*)&v100;
                          *(_QWORD*)(v2 + 728) = v75;
                          *(_QWORD*)(v2 + 736) = v101;
                        }
                        if (GameData_21fa5e0 == 0) {
                          v76 = *(_QWORD*)(v2 + 656);
                          if (*(_BYTE*)(v76 + 44) == 1) {
                            v77 = *(_DWORD*)(v76 + 52);
                            if (v77 < 0) {
                              *(float*)(v2 + 744) = (float)v77;
                              *(float*)(v2 + 748) = (float)v77 + -1.0;
                            }
                          }
                        }
                        if (*(_DWORD*)(v2 + 664) == 0) {
                          *(_BYTE*)(v2 + 688) = 1;
                          v78 = GameData_21d92dc++;
                          GameData_21d925c[v78] = GameData_21d92e0;
                          GameData_21d92e0 = 7;
                          game_GameView_Update(v34);
                        }
                        GameRoutine_11d1190(
                            *(_QWORD*)(*(_QWORD*)(v2 + 656) + 8LL));
                        v79 = GameRoutine_11d1340(
                            *(_QWORD*)(*(_QWORD*)(v2 + 656) + 8LL));
                        v81 = game_ProcFadeView_instance_;
                        if (game_ProcFadeView_instance_ != 0) {
                          v82 =
                              game_ProcFadeView_instance_ +
                              ((unsigned __int64)*(
                                   unsigned __int8*)(game_ProcFadeView_instance_ +
                                                     480)
                               << 6);
                          if (*(float*)(v82 + 172) == *(float*)(v82 + 168) &&
                              (v83 = v82 + 160,
                               *((_QWORD*)&v80 + 1) =
                                   LANES128_OF(
                                       ((__n128 (*)(unsigned __int64)) *
                                        (_QWORD*)(*(_QWORD*)(v82 + 160) +
                                                  16LL))(v82 + 160))
                                       .n128_u64[1],
                               *((float*)&v80 + 3) == 1.0)) {
                            if (*(float*)(v83 + 12) == *(float*)(v83 + 8)) {
                              (*(void (**)(unsigned __int64))(*(_QWORD*)v83 +
                                                              16LL))(v83);
                            }
                            else {
                              v80 = *(long double*)(v83 + 48);
                            }
                            v100 = v80;
                            *(_QWORD*)&v80 = 0;
                            v84 = &v100;
                          }
                          else {
                            *(_QWORD*)&v80 = 0;
                            v84 = (long double*)GameData_212c960;
                          }
                          v79 = game_809dc0(v81, v84, v80);
                        }
                        GameRoutine_867df0(v79);
                        if (game_ProcGameSkipView_instance_ != 0 &&
                            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) !=
                                0) {
                          *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |=
                              2u;
                        }
                        GameRoutine_1366ac0((void*)(&v100), "Layout/Common.arc",
                                            "Common_MovieCaption");
                        v85 = v100;
                        v86 = *(_QWORD*)(v2 + 160);
                        *(_OWORD*)&v100 = (__typeof__(*(_OWORD*)&v100)){0};
                        *(long double*)(v2 + 152) = v85;
                        if (v86 != 0 &&
                            atomic_fetch_add((atomic_ullong* volatile)(v86 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86);
                          std___1___shared_weak_count___release_weak(v86);
                        }
                        v87 = *((_QWORD*)&v100 + 1);
                        if (*((_QWORD*)&v100 + 1) != 0 &&
                            atomic_fetch_add(
                                (atomic_ullong* volatile)(*((_QWORD*)&v100 +
                                                            1) +
                                                          8LL),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87);
                          std___1___shared_weak_count___release_weak(v87);
                        }
                        result = GameRoutine_19adee0(v2 + 384);
                        if ((*(_BYTE*)(v2 + 652) & 1) == 0) {
                          result = GameRoutine_1553130(20);
                          *(_DWORD*)(v2 + 648) = 20;
                          *(_BYTE*)(v2 + 652) = 1;
                        }
                        v88 = *(_DWORD*)(v2 + 664);
                        if ((unsigned int)(v88 - 1) > 1) {
                          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 +
                                                                                32) -
                                                                     8LL) +
                                                          40LL) +
                                               16LL) +
                                    48LL) = 0;
                          if ((v104 & 1) == 0) {
                          LABEL_214:
                            if ((v107 & 1) != 0 && v109 != nullptr) {
                              v98 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v98 = 56;
                              }
                              result = nn_mem_StandardAllocator_Free_alt2(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v98);
                            }
                            if ((v110 & 1) != 0 && v112 != nullptr) {
                              v99 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v99 = 56;
                              }
                              return nn_mem_StandardAllocator_Free_alt2(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v99);
                            }
                            return result;
                          }
                        }
                        else {
                          v89 = *(_QWORD*)(v2 + 656);
                          v103 = 0;
                          v102 = 0;
                          v90 = *(_QWORD*)(v89 + 8);
                          v91 = strlen(v90);
                          v92 = *(char**)(v2 + 672);
                          *(_QWORD*)&v100 = v90;
                          *((_QWORD*)&v100 + 1) = v91;
                          v101 = v92;
                          LOBYTE(v102) = v88 == 2;
                          v93 = fw_memory_g_heap_manager_ptr;
                          v94 = fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16,
                              0);
                          result = GameRoutine_1819800(v94, &v100);
                          v95 = *(_QWORD*)(v2 + 680);
                          *(_QWORD*)(v2 + 680) = v94;
                          if (v95 != 0) {
                            game_cutscene_181a060_alt1(v95);
                            v96 = 128;
                            if (*(_QWORD*)(*(_QWORD*)v93 + 200LL) == 0) {
                              v96 = 56;
                            }
                            result = nn_mem_StandardAllocator_Free_alt2(
                                *(_QWORD*)v93 + v96);
                          }
                          *(_BYTE*)(v2 + 691) = 1;
                          if ((v104 & 1) == 0) {
                            goto LABEL_214;
                          }
                        }
                        if (v106 != nullptr) {
                          v97 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v97 = 56;
                          }
                          result = nn_mem_StandardAllocator_Free_alt2(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v97);
                        }
                        goto LABEL_214;
                      }
                      v44 = fw_memory_g_heap_manager_ptr;
                      v45 = (char*)fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
                      *((_QWORD*)&v100 + 1) = 24;
                      v101 = v45;
                      *(_QWORD*)&v100 = 33;
                      v46 = (unsigned __int8)v104;
                      strcpy(v45, "Contents:/Movie/Product/");
                      v47 = (v46 & 1) == 0;
                      v48 = v46 >> 1;
                      if (v47) {
                        v49 = (char*)&v104 + 1;
                      }
                      else {
                        v49 = v106;
                      }
                      if (v47) {
                        v50 = v48;
                      }
                      else {
                        v50 = v105;
                      }
                      v34 = (__int64*)GameRoutine_1a09ce0(&v100, v49, v50);
                      if (*(_DWORD*)(v2 + 664) != 0 ||
                          ((LOBYTE(v100) & 1) == 0 ? (v52 = (char*)&v100 + 1)
                                                   : (v52 = v101),
                           v52 != nullptr &&
                               (v53 = *snd_g_fileIndex_ptr[0],
                                v54 = strlen(v52),
                                ((unsigned __int8)(v34 = (__int64*)
                                                       GameRoutine_6360e0(
                                                           v53, v52, v54, 0,
                                                           0)) &
                                 1) != 0))) {
                        v34 = (__int64*)(v2 + 696);
                        if ((__int64*)(v2 + 696) != &v104) {
                          if ((*(_BYTE*)v34 & 1) != 0) {
                            if ((v104 & 1) != 0) {
                              v55 = v106;
                            }
                            else {
                              v55 = (char*)&v104 + 1;
                            }
                            if ((v104 & 1) != 0) {
                              v56 = v105;
                            }
                            else {
                              v56 =
                                  (unsigned __int64)(unsigned __int8)v104 >> 1;
                            }
                            v34 = (__int64*)SpineModel_64dde0(v34, v55, v56);
                          }
                          else if ((v104 & 1) != 0) {
                            v34 = (__int64*)GameRoutine_64df20(v34, v106, v105);
                          }
                          else {
                            v51 = v105;
                            *v34 = v104;
                            *(_QWORD*)(v2 + 704) = v51;
                            *(_QWORD*)(v2 + 712) = v106;
                          }
                        }
                        if (v42 != &v100) {
                          if ((*(_BYTE*)v42 & 1) == 0) {
                            if ((LOBYTE(v100) & 1) != 0) {
                              v34 = (__int64*)GameRoutine_64df20(
                                  v2 + 720, v101, *((_QWORD*)&v100 + 1));
                              if ((LOBYTE(v100) & 1) == 0) {
                                goto LABEL_148;
                              }
                            }
                            else {
                              v57 = *((_QWORD*)&v100 + 1);
                              *(_QWORD*)v42 = *(_QWORD*)&v100;
                              *(_QWORD*)(v2 + 728) = v57;
                              *(_QWORD*)(v2 + 736) = v101;
                              if ((LOBYTE(v100) & 1) == 0) {
                                goto LABEL_148;
                              }
                            }
                            goto LABEL_144;
                          }
                          if ((LOBYTE(v100) & 1) != 0) {
                            v58 = v101;
                          }
                          else {
                            v58 = (char*)&v100 + 1;
                          }
                          if ((LOBYTE(v100) & 1) != 0) {
                            v59 = *((_QWORD*)&v100 + 1);
                          }
                          else {
                            v59 = (unsigned __int64)LOBYTE(v100) >> 1;
                          }
                          v34 = (__int64*)SpineModel_64dde0(v2 + 720, v58, v59);
                        }
                      }
                      if ((LOBYTE(v100) & 1) == 0) {
                        goto LABEL_148;
                      }
                    LABEL_144:
                      if (v101 != nullptr) {
                        v60 = 128;
                        if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) == 0) {
                          v60 = 56;
                        }
                        v34 = (__int64*)nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)v44 + v60);
                      }
                      goto LABEL_148;
                    }
                  }
                  memmove(v28, v25, v26);
                  goto LABEL_75;
                }
              LABEL_227:
                String_60a1d0();
              }
            }
            memmove(v21, &v20[v12], v19);
            goto LABEL_60;
          }
        }
        v5 = memmove(v15, v11, v14);
        goto LABEL_45;
      }
    }
    v5 = memmove(v7, v4, v6);
    goto LABEL_21;
  }
  v8 = *(_QWORD*)(result + 8);
  if (v8 != 0) {
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*(_DWORD*)(v8 + 32) == 2) {
          *(_QWORD*)(result + 16) = v8;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        return result;
      }
      v8 += 64;
    }
  }
  return result;
}

__int64 Seq_11cd420(__int64 a1)
{
  __int64 v2;
  long double v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  long double* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
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
  long double v31;

  v2 = GameRoutine_b86660(*(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL));
  if (*(_BYTE*)(a1 + 688) == 1) {
    *(_BYTE*)(a1 + 688) = 0;
    v4 = --GameData_21d92dc;
    GameData_21d92e0 = GameData_21d925c[v4];
    game_GameView_Update(v2);
  }
  v5 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168) &&
        (v7 = v6 + 160,
         *((_QWORD*)&v3 + 1) =
             LANES128_OF(((__n128 (*)(unsigned __int64)) *
                          (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160))
                 .n128_u64[1],
         *((float*)&v3 + 3) == 1.0)) {
      if (*(float*)(v7 + 12) == *(float*)(v7 + 8)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v7 + 16LL))(v7);
      }
      else {
        v3 = *(long double*)(v7 + 48);
      }
      v31 = v3;
      *(_QWORD*)&v3 = 0;
      v8 = &v31;
    }
    else {
      *(_QWORD*)&v3 = 0;
      v8 = (long double*)GameData_212c960;
    }
    game_809dc0(v5, v8, v3);
  }
  if (*(_BYTE*)(a1 + 637) == 1) {
    v9 = game_8224a0(20);
    if (game_GameModeData_instance_ != 0) {
      GameVariable_828800(game_GameModeData_instance_ + 40, v9, 1);
    }
    if (*(_BYTE*)(a1 + 637) == 1) {
      LayoutAccessor_1562680(a1 + 400, "FastOut", 1.0);
      if (GameData_2259540 != 0) {
        GameRoutine_15e1b80(GameData_2259540, 1, 0, 1, 0);
      }
      *(_BYTE*)(a1 + 637) = 0;
    }
  }
  if (*(_BYTE*)(a1 + 652) == 1) {
    GameRoutine_1553220_alt1(*(unsigned int*)(a1 + 648));
    if (*(_BYTE*)(a1 + 652) == 1) {
      *(_BYTE*)(a1 + 652) = 0;
    }
  }
  LayoutAccessor_155e830(a1 + 168, 0);
  v10 = *(_QWORD*)(a1 + 152);
  if (v10 != 0) {
    *(_BYTE*)(v10 + 2376) = 1;
  }
  v11 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  LayoutAccessor_155e140(a1 + 168);
  result = GameRoutine_19ae080(a1 + 384);
  v13 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v15 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v14 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v17 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v16 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v18 = v16 == v17;
    v19 = v14 - 1 + v15;
    v20 = v19 >> 7;
    v21 = v19 & 0x7F;
    v22 = 16 * (v16 - v17) - 1;
    v23 = *(_QWORD*)(v17 + 8 * v20);
    if (v18) {
      v22 = 0;
    }
    v24 = v23 + 32 * v21;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v24 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    *(_QWORD*)(v13 + 168) = *(_QWORD*)(v24 + 24);
    v25 = *(_QWORD*)(v24 + 16);
    *(_QWORD*)(v13 + 216) = v14 - 1;
    *(_QWORD*)(v13 + 160) = v25;
    if ((unsigned __int64)(v22 - (v14 + v15) - 255) > 0xFFFFFFFFFFFFFEFFLL) {
    LABEL_35:
      if (*(_BYTE*)(v13 + 152) == 0) {
        goto LABEL_37;
      }
      goto LABEL_36;
    }
    if (*(_QWORD*)(v16 - 8) != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
      v27 = game_ProcGameSkipView_instance_;
      *(_QWORD*)(v13 + 192) -= 8LL;
      v13 = v27;
      if (v27 != 0) {
        goto LABEL_35;
      }
    }
    else {
      *(_QWORD*)(v13 + 192) = v16 - 8;
      if (*(_BYTE*)(v13 + 152) != 0) {
      LABEL_36:
        *(_DWORD*)(v13 + 156) |= 2u;
      }
    }
  }
LABEL_37:
  v28 = *(_QWORD*)(a1 + 680);
  *(_QWORD*)(a1 + 680) = 0;
  if (v28 != 0) {
    game_cutscene_181a060_alt1(v28);
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
  if (GameData_21fa5e0 == 0) {
    v30 = *(_QWORD*)(a1 + 656);
    if (v30 != 0) {
      *((_QWORD*)&v31 + 1) = *(_QWORD*)(v30 + 8);
      *(_QWORD*)&v31 = game_HashString(*((_QWORD*)&v31 + 1));
      return GameRoutine_9e6800(&v31, 1);
    }
  }
  return result;
}

void Seq_11cd790(__int64 a1, __n128 a2)
{
  unsigned __int64 v3;
  _BYTE* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  long double v8;
  long double v9;

  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_8;
  }
  v3 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v3 + 172) == *(float*)(v3 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160);
  }
  else {
    a2 = *(__n128*)(v3 + 208);
  }
  if (LANES128(a2).n128_f32[3] == 1.0) {
    a2 = ((__n128 (*)(unsigned __int64, float)) *
          (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160,
                                                  LANES128(a2).n128_f32[3]);
    v4 = (_BYTE*)(a1 + 690);
    if (LANES128(a2).n128_f32[3] == 1.0) {
      *v4 = 1;
      return;
    }
  }
  else {
  LABEL_8:
    v4 = (_BYTE*)(a1 + 690);
  }
  v5 = game_ProcFadeView_instance_;
  *v4 = 0;
  if (v5 != 0) {
    v6 = v5 + ((unsigned __int64)*(unsigned __int8*)(v5 + 480) << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168) &&
        (v7 = v6 + 160,
         a2 = ((__n128 (*)(unsigned __int64)) *
               (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160),
         LANES128(a2).n128_f32[3] == 1.0)) {
      if (*(float*)(v7 + 12) == *(float*)(v7 + 8)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v7 + 16LL))(v7);
      }
      else {
        v8 = *(long double*)(v7 + 48);
      }
      v9 = v8;
      LODWORD(v8) = 0.5;
      game_809dc0(v5, &v9, v8);
    }
    else {
      LANES128(a2).n128_u32[0] = 0.5;
      game_809dc0(v5, GameData_212c960, *(long double*)&a2);
    }
  }
}

__int64 Seq_11cd8f0(__int64 result)
{
  if ((*(_BYTE*)(result + 690) & 1) == 0) {
    result = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      return GameRoutine_809ba0(0.5);
    }
  }
  return result;
}

__int64 Seq_Unknown3(__int64 a1)
{
  __int64 result;
  int v2;

  result = *(_QWORD*)(a1 + 680);
  if (result != 0) {
    v2 = *(_DWORD*)(result + 4);
    *(_DWORD*)result = v2;
    if (v2 > 2) {
      if (v2 == 3) {
        if (*(_BYTE*)(result + 41) == 1 && (*(_BYTE*)(result + 43) & 1) == 0) {
          *(_DWORD*)(result + 4) = 4;
        }
      }
      else if (v2 == 4) {
        return GameRoutine_181aa10();
      }
    }
    else if (v2 == 1) {
      return GameRoutine_181a480();
    }
    else if (v2 == 2) {
      return GameRoutine_181a7e0();
    }
  }
  return result;
}

__int64 Seq_11cd9a0(__int64 a1)
{
  __int64 result;
  unsigned __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  _BYTE v10[200];

  if ((*(_BYTE*)(a1 + 691) & 1) == 0) {
    GameRoutine_18cf910(*GameData_212c598[0], a1 + 720);
  }
  result = GameRoutine_a30c60(game_sound_g_game_sound);
  v3 = *(_QWORD*)(GameData_2240058 + 72) - *(_QWORD*)(GameData_2240058 + 64);
  if ((int)(v3 >> 3) >= 1) {
    v4 = (v3 >> 3) & 0x7FFFFFFF;
    for (i = 0; v4 != i; ++i) {
      v6 = *(_QWORD*)(*(_QWORD*)(GameData_2240058 + 64) + 8 * i);
      v7 = *(_DWORD*)(v6 + 40);
      v8 = *(_DWORD*)(v6 + 32);
      v9 = *(_QWORD*)(v6 + 48);
      if (v8 != 0) {
        if (v8 == 2) {
          if (GameData_21fa5e0 == 0) {
            continue;
          }
        }
        else if (v8 != 1 || GameData_21fa5e0 != 0) {
          continue;
        }
      }
      if (*(_DWORD*)(v6 + 36) == -1) {
        if (v7 <= 2) {
          if (v7 != 1 && v7 != 2) {
            continue;
          }
          snd_Fade_Fade_10c910(v10);
          GameRoutine_a312c0(game_sound_g_game_sound, v9, v10);
        }
        else {
          switch (v7) {
          case 3:
            snd_Fade_Fade_10c910(v10);
            GameManager_a30fe0(game_sound_g_game_sound, v10);
            break;
          case 4:
            snd_Fade_Fade_10c910(v10);
            GameManager_a30f00(game_sound_g_game_sound, v10);
            break;
          case 5:
            snd_Fade_Fade_10c910(v10);
            GameManager_a31200(game_sound_g_game_sound, v10);
            break;
          default:
            continue;
          }
        }
        result = snd_Fade_Destroy_Fade(v10);
        *(_DWORD*)(a1 + 752) = i;
      }
    }
  }
  return result;
}

bool Seq_11cdb40(__int64 a1)
{
  __int64 v2;

  if ((snd_BGM_checkFinished(*(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8)) &
       1) != 0) {
    if (*(_BYTE*)(a1 + 691) == 1) {
      LOBYTE(v2) = (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 680) + 4LL) - 3) <
                   0xFFFFFFFE;
    }
    else {
      v2 = GameRoutine_18d0ec0(*GameData_212c598[0] + 144, a1 + 720);
      if (v2 != 0) {
        LOBYTE(v2) = GameRoutine_18d1b90(*(_QWORD*)(v2 + 40));
      }
    }
  }
  else {
    LOBYTE(v2) = 0;
  }
  return (v2 & 1) == 0;
}

__int64 Seq_11ce360(__int64 result)
{
  __int64 v1;
  bool v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int8* v8;
  unsigned int v9;
  __int16 v10;
  __int64 v11;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0 &&
      (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
           ? (v2 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) == 0)
           : (v2 = false),
       v2)) {
    v11 = *(_QWORD*)(result + 8);
    if (v11 != 0) {
      while (1) {
        if (*(_BYTE*)v11 == 2) {
          if (*(_DWORD*)(v11 + 32) == 2) {
            *(_QWORD*)(result + 16) = v11;
            v10 = *(_WORD*)(result + 136) & 0xFF7F;
            goto LABEL_37;
          }
        }
        else if (*(_BYTE*)v11 == 0) {
          return result;
        }
        v11 += 64;
      }
    }
  }
  else {
    result = snd_isPlaying_100430("movie_voice");
    if ((result & 1) != 0) {
      result = snd_isPlaying_100430("movie_se");
      if ((result & 1) != 0) {
        if ((*(_BYTE*)(v1 + 691) & 1) != 0 ||
            (v3 = GameData_212c598[0],
             (v4 = GameRoutine_18d0ec0(*GameData_212c598[0] + 144, v1 + 720)) !=
                 0) &&
                (*(_BYTE*)(*(_QWORD*)(v4 + 40) + 4320LL) & 1) != 0 ||
            (result = GameRoutine_18d0ec0(*v3 + 144, v1 + 720)) != 0 &&
                ((result = nn_os_TryWaitLightEvent(*(_QWORD*)(result + 40) +
                                                   684LL)) &
                 1) != 0) {
          if ((*(_BYTE*)(v1 + 691) & 1) == 0 &&
              game_ProcFadeView_instance_ != 0) {
            GameRoutine_809ba0(0.0);
          }
          snd_release_ffb30("movie_voice");
          result = snd_release_ffb30("movie_se");
          if (*(_BYTE*)(v1 + 691) == 1) {
            v5 = *(_QWORD*)(v1 + 680);
            if ((*(_BYTE*)(v5 + 43) & 1) == 0) {
              v6 = *(_DWORD*)(v5 + 4);
              if ((unsigned int)(v6 - 3) <= 0xFFFFFFFD) {
                if (v6 <= 4) {
                  v7 = 4;
                }
                else {
                  v7 = 5;
                }
                *(_DWORD*)(v5 + 4) = v7;
              }
            }
          }
          v8 = *(unsigned __int8**)(v1 + 16);
          if (v8 != nullptr) {
            v9 = *v8;
            if (v9 <= 0x10 && ((1 << v9) & 0x1CE00) != 0) {
              *(_WORD*)(v1 + 136) |= 0x80u;
            }
          }
          v10 = *(_WORD*)(v1 + 136) | 8;
        LABEL_37:
          *(_WORD*)(v1 + 136) = v10;
        }
      }
    }
  }
  return result;
}

__int64 Seq_11ce520(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  long double v5;
  long double v6;
  long double v7;
  __int64* v8;
  __int64 v9;
  long double v10;
  __int64 v11;
  _BYTE* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int i;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  __int64 v24;
  _BYTE* v25;
  _BYTE v27[200];
  _QWORD v28[2];

  if (*(_BYTE*)(a1 + 691) == 1) {
    v3 = *(_QWORD*)(a1 + 680);
    *(_QWORD*)(a1 + 680) = 0;
    if (v3 != 0) {
      game_cutscene_181a060_alt1(v3);
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
    }
  }
  else {
    *((_QWORD*)&a2 + 1) =
        LANES128_OF(Manager_18cfba0(*GameData_212c598[0], a1 + 720))
            .n128_u64[1];
  }
  *(_QWORD*)&a2 = 0;
  *(__n128*)&v5 = snd_Fade_Fade_10c830(v27, a2);
  snd_stop_ffbe0("movie_voice", v27, v5);
  snd_Fade_Destroy_Fade(v27);
  *(_QWORD*)&v6 = 0;
  *(__n128*)&v7 = snd_Fade_Fade_10c830(v27, v6);
  snd_stop_ffbe0("movie_se", v27, v7);
  snd_Fade_Destroy_Fade(v27);
  v8 = game_sound_g_game_sound_ptr[0];
  if (GameData_21fa5e0 != 0) {
    snd_Fade_Fade_10cb00(v27, "FadeTime_BGM_MV_Out");
    v9 = *v8;
    snd_stop_ffbe0("MovieBGM", v27, v10);
    snd_BGM_getFirstHandle_alt1((void*)(v28), *(_QWORD*)(v9 + 8));
    v11 = snd_fnd_WeakHandle_get(v28);
    if (v11 != 0 && (snd_Voice_hasSends(v11 - 5592) & 1) == 0) {
      (*(void (**)(_QWORD, _BYTE*, _QWORD))(**(_QWORD**)(v9 + 8) + 48LL))(
          *(_QWORD*)(v9 + 8), v27, 0);
    }
    if ((*(_BYTE*)(v9 + 2824) & 1) != 0) {
      v12 = *(_BYTE**)(v9 + 2840);
      *(_QWORD*)(v9 + 2832) = 0;
    }
    else {
      v12 = (_BYTE*)(v9 + 2825);
      *(_BYTE*)(v9 + 2824) = 0;
    }
    *v12 = 0;
    snd_Fade_Destroy_Fade(v27);
  }
  v13 = GameData_2130608[0];
  v14 = *(int*)(a1 + 752);
  v15 = (*(_QWORD*)(*GameData_2130608[0] + 72) -
         *(_QWORD*)(*GameData_2130608[0] + 64)) >>
        3;
  if ((int)v14 + 1 < (int)v15) {
    v16 = v14 + 1;
    for (i = ~(_DWORD)v14 + v15; i != 0; --i) {
      v18 = *(_QWORD*)(*(_QWORD*)(*v13 + 64) + 8 * v16);
      v19 = *(_DWORD*)(v18 + 32);
      v20 = *(_DWORD*)(v18 + 40);
      v21 = *(_QWORD*)(v18 + 48);
      if (v19 != 0) {
        if (v19 == 2) {
          if (GameData_21fa5e0 == 0) {
            goto LABEL_19;
          }
        }
        else if (v19 != 1 || GameData_21fa5e0 != 0) {
          goto LABEL_19;
        }
      }
      if (v20 <= 2) {
        if (v20 == 1) {
          snd_Fade_Fade_10c910(v27);
          snd_a312c0(*v8, v21, v27);
        }
        else {
          if (v20 != 2) {
            goto LABEL_19;
          }
          snd_Fade_Fade_10c910(v27);
          snd_a31410(*v8, v21, v27);
        }
      }
      else {
        switch (v20) {
        case 3:
          snd_Fade_Fade_10c910(v27);
          v22 = *v8;
          snd_stop_ffbe0("MovieBGM", v27, v23);
          snd_BGM_getFirstHandle_alt1((void*)(v28), *(_QWORD*)(v22 + 8));
          v24 = snd_fnd_WeakHandle_get(v28);
          if (v24 != 0 && (snd_Voice_hasSends(v24 - 5592) & 1) == 0) {
            (*(void (**)(_QWORD, _BYTE*, _QWORD))(
                **(_QWORD**)(v22 + 8) + 48LL))(*(_QWORD*)(v22 + 8), v27, 0);
          }
          if ((*(_BYTE*)(v22 + 2824) & 1) != 0) {
            v25 = *(_BYTE**)(v22 + 2840);
            *(_QWORD*)(v22 + 2832) = 0;
            *v25 = 0;
          }
          else {
            *(_BYTE*)(v22 + 2824) = 0;
            *(_BYTE*)(v22 + 2825) = 0;
          }
          break;
        case 4:
          snd_Fade_Fade_10c910(v27);
          GameManager_a31610(*v8, v27);
          break;
        case 5:
          snd_Fade_Fade_10c910(v27);
          GameManager_a31100(*v8, v27);
          break;
        default:
          goto LABEL_19;
        }
      }
      snd_Fade_Destroy_Fade(v27);
      *(_DWORD*)(a1 + 752) = v16;
    LABEL_19:
      ++v16;
    }
  }
  return snd_a30db0(*v8);
}

__int64 Seq_11ce880(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == *(float*)(result + 744) >= 0.0) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64;
    }
  }
  return result;
}

void game_movie_Seq_Tick_BgmCtrl(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  __int64* v4;
  bool v5;
  float v6;
  __int64 v7;
  float v8;
  __int64* v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  __int64* v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  __int64* v20;
  float v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  int i;
  __int64 v28;
  int v29;
  unsigned int v30;
  int v31;
  int v32;
  _BYTE* v33;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  __int64 v38;
  float v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  float v47;
  struct {
    _QWORD v48[4];
    _QWORD* v49;
  } v48_;
  _QWORD v50[2];

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(a1 + 691) == 1) {
    if (*(_DWORD*)(*(_QWORD*)(a1 + 680) + 4LL) == 5 &&
        (game_ProcFadeView_instance_ == 0 ||
         *(float*)((v2 = game_ProcFadeView_instance_ +
                         ((unsigned __int64)*(
                              unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
                          << 6)) +
                   172) == *(float*)(v2 + 168))) {
      v3 = *(_QWORD*)(a1 + 8);
      if (v3 != 0) {
        while (1) {
          if (*(_BYTE*)v3 == 2) {
            if (*(_DWORD*)(v3 + 32) == 2) {
              goto LABEL_40;
            }
          }
          else if (*(_BYTE*)v3 == 0) {
            return;
          }
          v3 += 64;
        }
      }
      return;
    }
  }
  else {
    v4 = GameRoutine_18d0ec0_alt1((_QWORD*)(*GameData_212c598[0] + 144),
                                  (unsigned __int8*)(a1 + 720)),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v4 != nullptr && (nn_os_TryWaitLightEvent(v4[5] + 684) & 1) != 0) {
      v3 = *(_QWORD*)(a1 + 8);
      if (v3 != 0) {
        while (1) {
          if (*(_BYTE*)v3 == 2) {
            if (*(_DWORD*)(v3 + 32) == 2) {
            LABEL_40:
              *(_QWORD*)(a1 + 16) = v3;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              return;
            }
          }
          else if (*(_BYTE*)v3 == 0) {
            return;
          }
          v3 += 64;
        }
      }
      return;
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) != 0 ||
      (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
           ? (v5 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) == 0)
           : (v5 = false),
       !v5)) {
    v6 = *(float*)(a1 + 744);
    if (v6 >= 0x0.0p+0f) {
      if (*(_BYTE*)(a1 + 691) == 1) {
        v7 = *(_QWORD*)(a1 + 680);
        if (v7 != 0) {
          GameRoutine_181acc0(v7),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          v6 = v8 * 0x1.f400000000000p+9f;
        }
        else {
          v6 = 0x0.0p+0f;
        }
      }
      else {
        v9 = GameRoutine_18d0ec0_alt1((_QWORD*)(*GameData_212c598[0] + 144),
                                      (unsigned __int8*)(a1 + 720)),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v9 != nullptr) {
          v10 = (float)*(__int64*)(v9[5] + 3696);
        }
        else {
          v10 = 0x0.0p+0f;
        }
        v6 = v10 / 0x1.f400000000000p+9f;
      }
    }
    v11 = *(float*)(a1 + 748);
    if (*(_BYTE*)(a1 + 691) == 1) {
      v12 = *(_QWORD*)(a1 + 680);
      if (v12 != 0) {
        GameRoutine_181ab60(v12),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v14 = v13 * 0x1.f400000000000p+9f;
      }
      else {
        v14 = 0x0.0p+0f;
      }
    }
    else {
      v15 = GameRoutine_18d0ec0_alt1((_QWORD*)(*GameData_212c598[0] + 144),
                                     (unsigned __int8*)(a1 + 720)),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v15 != nullptr) {
        v16 = (float)*(__int64*)(v15[5] + 4880);
      }
      else {
        v16 = 0x0.0p+0f;
      }
      v14 = v16 / 0x1.f400000000000p+9f;
    }
    Seq_11cffe0_alt1(a1 + 152, v6, v11, v14),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    GameRoutine_19ae1e0(a1 + 384),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    v17 = *(float*)(a1 + 744);
    if (v17 >= 0x0.0p+0f) {
      if (*(_BYTE*)(a1 + 691) == 1) {
        v18 = *(_QWORD*)(a1 + 680);
        if (v18 != 0) {
          GameRoutine_181acc0(v18),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          v17 = v19 * 0x1.f400000000000p+9f;
        }
        else {
          v17 = 0x0.0p+0f;
        }
      }
      else {
        v20 = GameRoutine_18d0ec0_alt1((_QWORD*)(*GameData_212c598[0] + 144),
                                       (unsigned __int8*)(a1 + 720)),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v20 != nullptr) {
          v21 = (float)*(__int64*)(v20[5] + 3696);
        }
        else {
          v21 = 0x0.0p+0f;
        }
        v17 = v21 / 0x1.f400000000000p+9f;
      }
    }
    v22 = GameData_2130608[0];
    v23 = *(int*)(a1 + 752);
    v24 = (*(_QWORD*)(*GameData_2130608[0] + 72) -
           *(_QWORD*)(*GameData_2130608[0] + 64)) >>
          3;
    if ((int)v23 + 1 < (int)v24) {
      v25 = v23 + 1;
      v26 = game_sound_g_game_sound_ptr[0];
      for (i = ~(_DWORD)v23 + v24; i != 0; --i) {
        v28 = *(_QWORD*)(*(_QWORD*)(*v22 + 64) + 8 * v25);
        v30 = *(_DWORD*)(v28 + 36);
        v29 = *(_DWORD*)(v28 + 40);
        v31 = *(_DWORD*)(v28 + 32);
        v32 = *(_DWORD*)(v28 + 56);
        v33 = *(_BYTE**)(v28 + 48);
        if (v31 != 0) {
          if (v31 == 2) {
            if (GameData_21fa5e0 == 0) {
              goto LABEL_65;
            }
          }
          else if (v31 != 1 || GameData_21fa5e0 != 0) {
            goto LABEL_65;
          }
        }
        if ((v30 & 0x80000000) != 0) {
          goto LABEL_65;
        }
        if (v17 < (float)v30 || *(float*)(a1 + 748) >= (float)v30) {
          goto LABEL_65;
        }
        if (v29 <= 2) {
          if (v29 == 1) {
            snd_Fade_Fade_10c910_alt1((__int64)v48_.v48, v32),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            snd_a312c0_alt1(*v26, v33, (__int64)v48_.v48),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else {
            if (v29 != 2) {
              goto LABEL_65;
            }
            snd_Fade_Fade_10c910_alt1((__int64)v48_.v48, v32),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            snd_a31410_alt1(*v26, v33, (__int64)v48_.v48),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        else {
          switch (v29) {
          case 3:
            snd_Fade_Fade_10c910_alt1((__int64)v48_.v48, v32),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            v35 = *v26;
            snd_stop_ffbe0_alt1((__int64)"MovieBGM", (__int64)v48_.v48),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            snd_BGM_getFirstHandle_alt2((void*)((__int64)v50),
                                        *(_QWORD*)(v35 + 8)),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            v36 = snd_fnd_WeakHandle_get_alt1((__int64)v50),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            if (v36 != 0 && !snd_Voice_hasSends_alt1(v36 - 5592)) {
              (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(v35 + 8) +
                                                     48LL))(*(_QWORD*)(v35 + 8),
                                                            v48_.v48, 0),
                  v13 = COERCE_AS(__typeof__(v13),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
            }
            if ((*(_BYTE*)(v35 + 2824) & 1) != 0) {
              v37 = *(_BYTE**)(v35 + 2840);
              *(_QWORD*)(v35 + 2832) = 0;
              *v37 = 0;
            }
            else {
              *(_BYTE*)(v35 + 2824) = 0;
              *(_BYTE*)(v35 + 2825) = 0;
            }
            break;
          case 4:
            snd_Fade_Fade_10c910_alt1((__int64)v48_.v48, v32),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            GameManager_a31610_alt1(*v26, (__int64)v48_.v48),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            break;
          case 5:
            snd_Fade_Fade_10c910_alt1((__int64)v48_.v48, v32),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            Seq_a31200_alt1(*v26, (__int64)v48_.v48),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            break;
          default:
            goto LABEL_65;
          }
        }
        snd_Fade_Destroy_Fade_alt1(v48_.v48),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_DWORD*)(a1 + 752) = v25;
      LABEL_65:
        ++v25;
      }
    }
    v38 = *(_QWORD*)(a1 + 680);
    v47 = v17;
    if (v38 != 0) {
      GameRoutine_181acc0(v38),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      v47 = v39 * 0x1.f400000000000p+9f;
    }
    v48_.v48[0] = GameData_2016c20;
    v48_.v48[1] = &v47;
    v48_.v49 = v48_.v48;
    snd_findSound((__int64)"movie_se"),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    v40 = snd_fnd_WeakHandle_get_alt1((__int64)v50),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v40 != 0) {
      v50[0] = v40 - 5592;
      if (v48_.v49 == nullptr) {
        goto LABEL_126;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v48_.v49 + 48LL))(v48_.v49, v50),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    snd_findSound((__int64)"movie_voice"),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    v41 = snd_fnd_WeakHandle_get_alt1((__int64)v50),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v41 == 0) {
      goto LABEL_101;
    }
    v50[0] = v41 - 5592;
    if (v48_.v49 != nullptr) {
      (*(void (**)(_QWORD*, _QWORD*))(*v48_.v49 + 48LL))(v48_.v49, v50),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    LABEL_101:
      if (v48_.v49 == v48_.v48) {
        v42 = 32;
      }
      else {
        if (v48_.v49 == nullptr) {
        LABEL_106:
          *(float*)(a1 + 748) = v6;
          if (*GameData_2130610[0] != 0 &&
              (int)((*(_QWORD*)(*GameData_2130610[0] + 72) -
                     *(_QWORD*)(*GameData_2130610[0] + 64)) >>
                    3) >= 1) {
            v43 = game_g_game_setting_ptr;
            v44 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
            if ((*(_BYTE*)(a1 + 637) & 1) != 0) {
              if ((v44 & 0x1002) != 0 &&
                  (LayoutAccessor_1563280((__int64*)(a1 + 168),
                                          (__int64)"FastOut", 0) &
                   1) == 0 &&
                  (LayoutAccessor_1563280((__int64*)(a1 + 168),
                                          (__int64)"FastIn", 0) &
                   1) == 0) {
                *(_BYTE*)(a1 + 376) = 0;
                LayoutAccessor_1562680_alt1((__int64*)(a1 + 168),
                                            (__int64)"FastIn",
                                            0x1.0000000000000p+0f),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
                if (*(_BYTE*)(a1 + 637) == 1) {
                  LayoutAccessor_1562680_alt1((__int64*)(a1 + 400),
                                              (__int64)"FastOut",
                                              0x1.0000000000000p+0f),
                      v13 = COERCE_AS(__typeof__(v13),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  if (GameData_2259540 != 0) {
                    GameRoutine_15e1b80_alt1(GameData_2259540, 1u, 0, 1u, 0),
                        v13 = COERCE_AS(__typeof__(v13),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                  *(_BYTE*)(a1 + 637) = 0;
                }
              }
            }
            else {
              if ((v44 & 4) != 0) {
                GameRoutine_11d0d00(a1 + 152, 0),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
              }
              v45 = *(_QWORD*)(a1 + 656);
              if (v45 != 0 && *(_WORD*)(v45 + 42) == 1 &&
                  (*(_BYTE*)(*(_QWORD*)v43 + 953LL) & 0x10) != 0 &&
                  (GameRoutine_11d0e50(a1 + 152) & 1) != 0) {
                *(_BYTE*)(a1 + 376) = 1;
                LayoutAccessor_1562680_alt1((__int64*)(a1 + 168),
                                            (__int64)"FastOut",
                                            0x1.0000000000000p+0f),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
                v46 = GameRoutine_11d0dc0(a1 + 152),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
                GameRoutine_19ae900(a1 + 384, v46),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
              }
              if ((*(_DWORD*)(*(_QWORD*)v43 + 952LL) & 0x7BCCB) != 0) {
                Seq_11d0af0(a1 + 152),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
              }
            }
          }
          return;
        }
        v42 = 40;
      }
      (*(void (**)(__int64))(*v48_.v49 + v42))((__int64)v48_.v49),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      goto LABEL_106;
    }
  LABEL_126:
    GameRoutine_60a310(),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    while (1) {
      if (*(_BYTE*)v3 == 2) {
        if (*(_DWORD*)(v3 + 32) == 2) {
          goto LABEL_40;
        }
      }
      else if (*(_BYTE*)v3 == 0) {
        return;
      }
      v3 += 64;
    }
  }
}

__int64 Seq_11cf400(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;

  v3 = *(_QWORD*)(a1 + 152);
  result = a1 + 152;
  if (*(_BYTE*)(v3 + 24) == 1) {
    v4 = *(_QWORD*)(a1 + 656);
    if (v4 != 0) {
      v5 = *(unsigned __int16*)(v4 + 42);
    }
    else {
      v5 = 0;
    }
    result = GameRoutine_11cfc60(result, v5);
    v6 = *(unsigned __int8**)(a1 + 16);
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_Unknown12_11cf4a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _BOOL4 v5;

  v1 = *(_QWORD*)(result + 40);
  if (v1 != 0 && (*(_WORD*)(v1 + 136) & 1) == 0) {
    v2 = result;
    GameRoutine_657a50(*(_QWORD*)(result + 40), 1);
    result = v2;
  }
  v3 = *(_QWORD*)(result + 8);
  v4 = *(_QWORD*)(result + 16);
  if (v3 > v4) {
  LABEL_7:
    v5 = true;
  }
  else {
    while (*(_BYTE*)v4 != 2) {
      v4 -= 64LL;
      if (v3 > v4) {
        goto LABEL_7;
      }
    }
    v5 = *(_DWORD*)(v4 + 32) != 2;
  }
  if (v3 != 0 && v5) {
    while (1) {
      if (*(_BYTE*)v3 == 2) {
        if (*(_DWORD*)(v3 + 32) == 2) {
          *(_QWORD*)(result + 16) = v3;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v3 == 0) {
        return result;
      }
      v3 += 64LL;
    }
  }
  return result;
}

__int64 Seq_11cf560(__int64 a1, __int64 a2)
{
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v4 = GameRoutine_11cc300(a2) & 1;
  v5 = game_HashString(a2);
  if (v5 == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(GameData_21c9fd0 + 96);
  if (v6 == 0 || *(_QWORD*)(GameData_21c9fd0 + 112) == 0) {
    return 0;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = v5;
    if (v5 >= v6) {
      v9 = v5 % v6;
    }
  }
  else {
    v9 = v8 & v5;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c9fd0 + 88) + 8 * v9);
  if (v10 == nullptr) {
    return 0;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    return 0;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v14 = v11[1];
      if (v14 == v5) {
        if (v11[2] == v5) {
          goto LABEL_26;
        }
      }
      else if ((v14 & v8) != v9) {
        return 0;
      }
      v11 = (_QWORD*)*v11;
      v13 = 0;
      if (v11 == nullptr) {
        return v13;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == v5) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      return 0;
    }
  LABEL_15:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      return 0;
    }
  }
  if (v11[2] != v5) {
    goto LABEL_15;
  }
LABEL_26:
  v15 = v11[3];
  if (v15 == 0) {
    return 0;
  }
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       784, 16, 0);
  GameRoutine_11cbe80(v13, v15, v4, 0);
  ProcInst_657850(v13, &GameData_216f648, "movie::Seq", 1, a1);
  return v13;
}

void game_movie_Seq_Tick_BgmCtrl_lambda0_Invoke(__int64 a1, _QWORD** a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  float v4;
  float v5;
  float v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  long double v10;
  float v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  _QWORD v16[25];

  v2 = *a2;
  v4 = (*(float (**)(_QWORD*, _QWORD))(*v2 + 464LL))(v2, 0);
  v5 = **(float**)(a1 + 8);
  if (v4 > (float)(v5 + 0x1.2c00000000000p+8f)) {
    v6 = (float)(v4 - v5) / 0x1.f400000000000p+9f;
    if (v6 <= 0x0.0p+0f) {
      return;
    }
    snd_Fade_Fade_10c830_alt1((__int64)v16, 0x1.9000000000000p+6f);
    v9 = v2[5];
    v8 = v2 + 5;
    v7 = v9;
    *(float*)&v10 = -v6;
  LABEL_7:
    (*(void (**)(_QWORD*, _QWORD*, long double))(v7 + 256))(v8, v16, v10);
    snd_Fade_Destroy_Fade_alt1(v16);
    if ((*(float (**)(_QWORD*))(*v8 + 88LL))(v8) <= 0x0.0p+0f) {
      return;
    }
    snd_Fade_Fade_10c830_alt1((__int64)v16, 0x1.9000000000000p+6f);
    v13 = *v8;
    *(_QWORD*)&v14 = 0;
    goto LABEL_11;
  }
  if (v4 < (float)(v5 + -0x1.2c00000000000p+8f)) {
    v11 = (float)(v5 - v4) / 0x1.f400000000000p+9f;
    if (v11 <= 0x0.0p+0f) {
      return;
    }
    snd_Fade_Fade_10c830_alt1((__int64)v16, 0x1.9000000000000p+6f);
    v12 = v2[5];
    v8 = v2 + 5;
    v7 = v12;
    *(float*)&v10 = v11;
    goto LABEL_7;
  }
  snd_Fade_Fade_10c830_alt1((__int64)v16, 0x1.9000000000000p+6f);
  v15 = v2[5];
  v8 = v2 + 5;
  (*(void (**)(_QWORD*, _QWORD*, double))(v15 + 256))(v8, v16, 0x0.0p+0);
  snd_Fade_Destroy_Fade_alt1(v16);
  if ((*(float (**)(_QWORD*))(*v8 + 88LL))(v8) >= 0x1.0000000000000p+0f) {
    return;
  }
  snd_Fade_Fade_10c830_alt1((__int64)v16, 0x1.f400000000000p+8f);
  v13 = *v8;
  LODWORD(v14) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
LABEL_11:
  (*(void (**)(_QWORD*, _QWORD*, long double))(v13 + 96))(v8, v16, v14);
  snd_Fade_Destroy_Fade_alt1(v16);
}

__int64 Seq_11cf9d0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;

  *(_BYTE*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 184) = 1065353216;
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 160), "N_TitleLogo", 0);
  v4 = GameData_21cf840;
  if (GameData_21cf840 != 0) {
    v5 = *(_DWORD*)(GameData_21cf840 + 16) - 1;
    *(_DWORD*)(GameData_21cf840 + 16) = v5;
    if (v5 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 8) + 8LL))(v4 + 8);
    }
  }
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  if (*(_QWORD*)(a1 + 32) != 0) {
    v6 = *(_QWORD*)(a1 + 24);
    if (v6 != 0) {
      v7 = std___1___shared_weak_count_lock(v6, v3);
      if (v7 != 0) {
        v8 = *(_QWORD*)(a1 + 16);
        if (v8 != 0) {
          v1 = *(unsigned __int8*)(v8 + 24);
          v9 = v8 + 152;
          if (v1 == 0) {
            v9 = 0;
          }
          v10 = v9 != *(_QWORD*)(a1 + 32);
        }
        else {
          v10 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v10) {
            goto LABEL_16;
          }
        }
        else {
          v12 = v7;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v12);
          if (v10) {
            goto LABEL_16;
          }
        }
        if ((v1 & 1) == 0) {
          goto LABEL_27;
        }
      LABEL_21:
        LayoutAccessor_155e830(a1 + 16, 0);
        if (*(_QWORD*)a1 != 0) {
          *(_BYTE*)(*(_QWORD*)a1 + 2376LL) = 1;
        }
        v13 = *(_QWORD*)(a1 + 8);
        *(_QWORD*)a1 = 0;
        *(_QWORD*)(a1 + 8) = 0;
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
        LayoutAccessor_155e140(a1 + 16);
        goto LABEL_27;
      }
    LABEL_16:
      v11 = *(_QWORD*)(a1 + 24);
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        goto LABEL_27;
      }
      goto LABEL_21;
    }
  }

LABEL_27:
  v14 = *(_QWORD*)(a1 + 192);
  if (v14 != 0) {
    *(_QWORD*)(a1 + 200) = v14;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v14);
  }
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 136);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  LayoutAccessor_155e140(a1 + 16);
  v18 = *(_QWORD*)(a1 + 112);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  GameRoutine_1564060(a1 + 64);
  GameRoutine_1563f90(a1 + 40, *(_QWORD*)(a1 + 48));
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v20 = *(_QWORD*)(a1 + 8);
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    return std___1___shared_weak_count___release_weak(v20);
  }
  return result;
}

__int64 Seq_11cfc60(_QWORD* a1, __int16 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _BOOL8 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  _QWORD v40[2];

  v2 = a1[1];
  v3 = a1 + 2;
  v5 = a1;
  v40[0] = *a1;
  v40[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(a1 + 2, v40);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(a1 + 2, v40);
  }
  LayoutAccessor_155e830(v3, 1);
  *((_WORD*)v5 + 113) = a2;
  v6 = GameRoutine_8224a0(20);
  v8 = game_GameModeData_instance_ != 0 &&
       (v7 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v6)) != 0 &&
       *(_DWORD*)(v7 + 32) == 1;
  *((_BYTE*)v5 + 222) = v8;
  ui_LayoutAccessor_SetPaneVisible(v3, "N_TextArea", v8);
  ui_LayoutAccessor_SetPaneVisible(v3, "Bg_TextArea",
                                   *((unsigned __int16*)v5 + 113) == 1);
  LayoutAccessor_1562cf0(v3, "In");
  LayoutAccessor_1562cf0(v3, "Caption_In");
  v9 = ui_LayoutAccessor_FindPane(v3, "N_ScrollRoot");
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 40);
    if (v10 != v9 + 32) {
      v11 = 0;
      do {
        v10 = *(_QWORD*)(v10 + 8);
        ++v11;
      } while (v10 != v9 + 32);
      v12 = 0;
      v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v37 = v3;
      do {
        v15 = (_QWORD*)fw_memory_HeapManager_Allocate(*v13, 72, 16, 0);
        v15[2] = 0;
        v15[3] = 0;
        v15[4] = 0;
        v15[5] = 0;
        *v15 = 0;
        v15[1] = 0;
        *((_DWORD*)v15 + 4) = -1082130432;
        v15[6] = 0;
        v15[7] = 0;
        v15[8] = 0;
        *(_QWORD*)((char*)v15 + 20) = 0;
        *(_QWORD*)((char*)v15 + 28) = 0;
        *(_QWORD*)((char*)v15 + 36) = 0;
        v16 = game_util_Format("L_ScrollItem%02d", v12);
        GameRoutine_1560070(&v38, v3, v16);
        v18 = v38;
        v17 = v39;
        if (v39 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16), 1u,
                                    memory_order_relaxed);
        }
        v19 = v15[1];
        *v15 = v18;
        v15[1] = v17;
        if (v19 != 0) {
          std___1___shared_weak_count___release_weak(v19);
          v17 = v39;
        }
        if (v17 != 0) {
          v17 = std___1___shared_weak_count___release_weak(v17);
        }
        v21 = (_QWORD*)v5[25];
        v20 = v5[26];
        if ((unsigned __int64)v21 < v20) {
          *v21 = v15;
          v14 = (__int64)(v21 + 1);
        }
        else {
          v22 = v5[24];
          v23 = v13;
          v24 = v5;
          v25 = (char*)v21 - v22;
          v26 = ((__int64)v21 - v22) >> 3;
          v27 = v26 + 1;
          if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
            GameRoutine_11d1170(v17);
          }
          v28 = v20 - v22;
          if (v28 >> 2 > v27) {
            v27 = v28 >> 2;
          }
          if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
            v29 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v29 = v27;
          }
          if (v29 != 0) {
            if (v29 >> 61 != 0) {
              GameRoutine_60a210(v17);
            }
            v30 = fw_memory_HeapManager_Allocate(*v23, 8 * v29, 16, 0);
          }
          else {
            v30 = 0;
          }
          v31 = v30 + 8 * v29;
          v32 = (char*)v21 - v22;
          v33 = (__int64)&v25[v30 + -8 * v26];
          *(_QWORD*)&v25[v30] = v15;
          v14 = (__int64)&v25[v30 + 8];
          memcpy(v33, v22, v32);
          v24[24] = v33;
          v24[25] = v14;
          v5 = v24;
          v24[26] = v31;
          if (v22 != 0) {
            v13 = v23;
            v34 = 128;
            if (*(_QWORD*)(*v23 + 200LL) == 0) {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(*v23 + v34, v22);
          }
          else {
            v13 = v23;
          }
          v3 = v37;
        }
        ++v12;
        v5[25] = v14;
      } while (v11 != v12);
    }
  }
  v35 = ui_LayoutAccessor_FindPane(v3, "TitleLogo");
  if (v35 != 0 &&
      __dynamic_cast(v35, GameData_212d670[0], GameData_212d678[0], 0) != 0) {
    GameRoutine_1843a40();
  }
  v5[20] = v3;
  v5[21] = 0;
  v5[22] = 0x3F80000000000000LL;
  v5[23] = 1065353216;
  return GameRoutine_11d0a10(v5 + 19);
}

void Seq_11cffe0(__int64 a1, float a2, float a3, float a4)
{
  unsigned int v4;
  int v5;
  __int64* v10;
  int v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  char v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  int v25;
  unsigned int v27;
  _BYTE* v28;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  float v34;
  int v35;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  char* v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  float v66;
  __int64 v68;
  float v69;
  int v70;
  float v71;
  float v73;
  int v74;
  float v75;
  __int64 v76;
  int v77;
  float v78;
  __int16 v80;
  __int16 v81;
  __int16 v82;
  bool v83;
  char v84;
  __int64* v85;
  __int64* v86;
  int v87;
  __int64* v88;
  __int64* v89;
  __int64* v90;
  int v91;
  __int64 v92;
  float v93;
  __int64 v94;
  float v95;
  float v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64* v104;
  char v105;
  const char* v106;
  float v107;
  float v108;
  float v109;
  __int64* v110;
  __int64 v111;
  __int128 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  int v115;
  int v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;

  v5 = *(unsigned __int8*)(a1 + 222);
  v10 = game_8224a0_alt1(0x14u);
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
  LABEL_4:
    if (v5 != v11) {
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  v12 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v10);
  if (v12 != 0) {
    v11 = *(_DWORD*)(v12 + 32) == 1;
    goto LABEL_4;
  }
  if (v5 != 0) {
  LABEL_5:
    v13 = game_8224a0_alt1(0x14u);
    v15 = game_GameModeData_instance_ != 0 &&
          (v14 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v13)) != 0 &&
          *(_DWORD*)(v14 + 32) == 1;
    *(_BYTE*)(a1 + 222) = v15;
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 16, (__int64)"N_TextArea", v15);
  }
LABEL_10:
  v16 = GameData_2130610[0];
  v17 = *(_QWORD*)(*GameData_2130610[0] + 72) -
        *(_QWORD*)(*GameData_2130610[0] + 64);
  if ((int)(v17 >> 3) >= 1) {
    v18 = (v17 >> 3) & 0x7FFFFFFF;
    v19 = 0;
    v111 = (unsigned int)(v17 >> 3) - 1;
    v110 = GameData_212e348 + 2;
    do {
      v21 = *(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8 * v19);
      v22 = *(_DWORD*)(v21 + 40);
      if (GameData_21f3fe4 == 1) {
        v23 = *(_DWORD*)(v21 + 48);
        if (v23 == -2 || v23 > -1) {
          v22 = *(_DWORD*)(v21 + 48);
        }
        v25 = *(_DWORD*)(v21 + 52);
        if (v25 != -2 && v25 <= -1) {
          v27 = *(_DWORD*)(v21 + 44);
        }
        else {
          v27 = *(_DWORD*)(v21 + 52);
        }
      }
      else {
        v27 = *(_DWORD*)(v21 + 44);
      }
      v28 = *(_BYTE**)(v21 + 32);
      if (*(_WORD*)(a1 + 226) != 0) {
        if ((v22 & 0x80000000) == 0 && *(_WORD*)(a1 + 226) == 1 &&
            a3 < (float)v22 && a2 >= (float)v22) {
          v30 = *(int*)(a1 + 216);
          if ((*(_BYTE*)(a1 + 220) & 1) != 0) {
            if ((_DWORD)v30 != 0) {
              v31 = (__int64*)(*(_QWORD*)(a1 + 192) + 8 * v30);
              v33 = *(v31 - 1);
              v32 = *v31;
              v34 = *(float*)(v33 + 32);
              v35 = *(_DWORD*)(v33 + 20);
            }
            else {
              v60 = *(_QWORD*)(*(_QWORD*)(a1 + 200) - 8LL);
              v32 = **(_QWORD**)(a1 + 192);
              v34 = *(float*)(v60 + 32);
              v35 = *(_DWORD*)(v60 + 20);
            }
            Seq_11d0eb0(v32, v28, v35, v19, v34);
          }
          else {
            v42 = *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v30);
            GameRoutine_60a020(v42 + 48, (__int64)v28);
            *(_DWORD*)(v42 + 24) = v19;
            v43 = *msg_MessageManager_instance__ptr[0];
            v117 = -1;
            v118 = -1;
            v119 = -1;
            v120 = -1;
            v121 = -1;
            v122 = -1;
            v123 = -1;
            v124 = -1;
            v125 = -1;
            v126 = -1;
            v127 = -1;
            v128 = -1;
            v44 = GameData_212e348 + 2;
            *(_QWORD*)&v112 = GameData_212e348 + 2;
            *((_QWORD*)&v112 + 1) = 0xFFFF0001FFFF0000LL;
            v113 = 0xFFFF0004FFFF0002LL;
            v114 = 0xFFFF0006FFFF0005LL;
            v129 = 8;
            v115 = -65529;
            v116 = -65528;
            v45 = GameRoutine_a4dbe0(v43, v28, 0);
            v46 = TextSelector_1907f20(v45);
            v47 = v46 - 1;
            *(_DWORD*)(v42 + 20) = v46;
            v48 = *(_QWORD*)(v42 + 8);
            *(_QWORD*)(v42 + 36) = 0x3E9F49F500000000LL;
            *(float*)(v42 + 16) = (float)((float)v47 * 0x1.6800000000000p+7f) +
                                  0x1.c200000000000p+9f;
            *(_QWORD*)(v42 + 28) = 0xC352000000000000LL;
            if (v48 != 0 &&
                (v49 = std___1___shared_weak_count_lock_alt1(v48)) != 0) {
              if (*(_QWORD*)v42 != 0) {
                v50 = *(__int64**)v42;
              }
              else {
                v50 = ui_LayoutAccessor_empty__ptr[0];
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                std___1___shared_weak_count___release_weak_alt1();
              }
            }
            else {
              v50 = ui_LayoutAccessor_empty__ptr[0];
            }
            v117 = -1;
            v118 = -1;
            v119 = -1;
            v120 = -1;
            v121 = -1;
            v122 = -1;
            v123 = -1;
            v124 = -1;
            v51 = *msg_MessageManager_instance__ptr[0];
            v125 = -1;
            v126 = -1;
            v127 = -1;
            v128 = -1;
            *(_QWORD*)&v112 = v44;
            *((_QWORD*)&v112 + 1) = 0xFFFF0001FFFF0000LL;
            v113 = 0xFFFF0004FFFF0002LL;
            v114 = 0xFFFF0006FFFF0005LL;
            v129 = 8;
            v115 = -65529;
            v116 = -65528;
            v52 = GameRoutine_a4dbe0(v51, v28, 0);
            if (v52 != nullptr) {
              v53 = (__int64)v52;
              v54 = ui_LayoutAccessor_FindTextBox(v50, (__int64)"T_Text");
              if (v54 != 0) {
                GameRoutine_156c5d0(v54, v53, 0);
              }
            }
            v55 = *(_QWORD*)(v42 + 8);
            if (v55 != 0) {
              v56 = std___1___shared_weak_count_lock_alt1(v55);
              v16 = GameData_2130610[0];
              if (v56 != 0) {
                v57 = v56;
                if (*(_QWORD*)v42 != 0) {
                  v58 = *(__int64**)v42;
                }
                else {
                  v58 = ui_LayoutAccessor_empty__ptr[0];
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v59 = v58;
                  (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
                  std___1___shared_weak_count___release_weak_alt1();
                  v58 = v59;
                }
              }
              else {
                v58 = ui_LayoutAccessor_empty__ptr[0];
              }
            }
            else {
              v58 = ui_LayoutAccessor_empty__ptr[0];
              v16 = GameData_2130610[0];
            }
            LayoutAccessor_155e830_alt1(v58, 1);
            *(_BYTE*)(a1 + 220) = 1;
          }
          v61 = *(int*)(a1 + 216) + 1LL;
          v62 = *(_QWORD*)(a1 + 200) - *(_QWORD*)(a1 + 192);
          *(_DWORD*)(a1 + 216) = v61;
          if (v61 >= v62 >> 3) {
            *(_DWORD*)(a1 + 216) = 0;
          }
        }
      }
      else {
        if ((v22 & 0x80000000) == 0 && a3 < (float)v22 && a2 >= (float)v22) {
          GameRoutine_60a020(a1 + 120, (__int64)v28);
          *(_DWORD*)(a1 + 144) = v19;
          *(_DWORD*)(a1 + 148) = v19;
          LayoutAccessor_1562680_alt1((__int64*)(a1 + 16),
                                      (__int64)"Caption_In",
                                      0x1.0000000000000p+0f);
          v117 = -1;
          v118 = -1;
          v119 = -1;
          v120 = -1;
          v121 = -1;
          v122 = -1;
          v123 = -1;
          v124 = -1;
          v37 = *msg_MessageManager_instance__ptr[0];
          v125 = -1;
          v126 = -1;
          v127 = -1;
          v128 = -1;
          *(_QWORD*)&v112 = v110;
          *((_QWORD*)&v112 + 1) = 0xFFFF0001FFFF0000LL;
          v113 = 0xFFFF0004FFFF0002LL;
          v114 = 0xFFFF0006FFFF0005LL;
          v129 = 8;
          v115 = -65529;
          v116 = -65528;
          v38 = GameRoutine_a4dbe0(v37, v28, 0);
          if (v38 != nullptr) {
            v39 = (__int64)v38;
            v40 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 16),
                                                (__int64)"T_Caption");
            if (v40 != 0) {
              GameRoutine_156c5d0(v40, v39, 0);
            }
          }
          if ((*(_BYTE*)(a1 + 221) & 1) == 0) {
            LayoutAccessor_1562680_alt1((__int64*)(a1 + 16), (__int64)"In",
                                        0x1.0000000000000p+0f);
            *(_BYTE*)(a1 + 221) = 1;
          }
        }
        if ((v27 & 0x80000000) == 0 && a3 < (float)v27 && a2 >= (float)v27) {
          LayoutAccessor_1562680_alt1((__int64*)(a1 + 16),
                                      (__int64)"Caption_Out",
                                      0x1.0000000000000p+0f);
          if (v111 == v19 && *(_BYTE*)(a1 + 221) != 0) {
            LayoutAccessor_1562680_alt1((__int64*)(a1 + 16), (__int64)"Out",
                                        0x1.0000000000000p+0f);
            *(_BYTE*)(a1 + 221) = 0;
          }
          if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
            v20 = *(_BYTE**)(a1 + 136);
            *(_QWORD*)(a1 + 128) = 0;
          }
          else {
            v20 = (_BYTE*)(a1 + 121);
            *(_BYTE*)(a1 + 120) = 0;
          }
          *v20 = 0;
          *(_DWORD*)(a1 + 144) = -1;
        }
      }
      ++v19;
    } while (v18 != v19);
  }
  v63 = *GameData_2130600[0];
  if (*GameData_2130600[0] != 0) {
    v64 = *(_QWORD*)(v63 + 656);
    if (v64 != 0) {
      if (*(_BYTE*)(v64 + 60) == 1) {
        v65 = *(_DWORD*)(v64 + 68);
        v66 = (float)*(int*)(v64 + 64);
        if (a3 < v66 && a2 >= v66) {
          LOWORD(v4) = *(_WORD*)(v64 + 72);
          v68 = *(_QWORD*)(a1 + 160);
          *(_BYTE*)(a1 + 152) = 1;
          ui_LayoutAccessor_SetPaneVisible_alt1(v68, (__int64)"N_TitleLogo", 1);
          v69 = (float)v4 * 0x1.0624de0000000p-10f;
          if (v69 <= 0x0.0p+0f) {
            v71 = 0x1.0000000000000p+0f;
            v69 = 0x1.0000000000000p+0f;
            *(_DWORD*)(a1 + 168) = 1132396544;
            v70 = 1132396544;
          }
          else {
            v70 = *(_DWORD*)(a1 + 168);
            v71 = 0x0.0p+0f;
          }
          *(_DWORD*)(a1 + 172) = v70;
          *(float*)(a1 + 180) = v71;
          *(float*)(a1 + 184) = v69;
          *(_DWORD*)(a1 + 188) = 0;
          *(_DWORD*)(a1 + 176) = 1132396544;
        }
        if (a3 < (float)v65 && a2 >= (float)v65) {
          if (*(_WORD*)(v64 + 74) != 0) {
            v73 =
                (float)*(unsigned __int16*)(v64 + 74) * 0x1.0624de0000000p-10f;
            if (v73 <= 0x0.0p+0f) {
              *(_DWORD*)(a1 + 168) = 0;
              v75 = 0x1.0000000000000p+0f;
              v74 = 0;
              v73 = 0x1.0000000000000p+0f;
            }
            else {
              v74 = *(_DWORD*)(a1 + 168);
              v75 = 0x0.0p+0f;
            }
            *(_DWORD*)(a1 + 172) = v74;
            *(_DWORD*)(a1 + 176) = 0;
            *(float*)(a1 + 180) = v75;
            *(float*)(a1 + 184) = v73;
            *(_DWORD*)(a1 + 188) = 0;
          }
          else {
            v76 = *(_QWORD*)(a1 + 160);
            *(_BYTE*)(a1 + 152) = 0;
            *(_QWORD*)(a1 + 168) = 0;
            *(_QWORD*)(a1 + 176) = 0x3F80000000000000LL;
            *(_QWORD*)(a1 + 184) = 1065353216;
            ui_LayoutAccessor_SetPaneVisible_alt1(v76, (__int64)"N_TitleLogo",
                                                  0);
          }
        }
      }
      if (*(_BYTE*)(v64 + 44) == 1) {
        v77 = *(_DWORD*)(v64 + 56);
        v78 = (float)*(int*)(v64 + 52);
        if (a3 < v78 && a2 >= v78) {
          v80 = *(_WORD*)(v64 + 46);
          v81 = *(unsigned __int8*)(v64 + 48);
          *(_DWORD*)((char*)&v112 + 6) = 0;
          WORD5(v112) = 0;
          LOWORD(v112) = v80;
          v82 = *(unsigned __int8*)(v64 + 49);
          WORD1(v112) = v81;
          WORD2(v112) = v82;
          GameRoutine_175ef80(v63, (__int16*)&v112);
        }
        v83 = a3 >= (float)v77 || a2 < (float)v77;
        if (!v83 && *(_QWORD*)GameData_2131d40[0] != 0) {
          *(_BYTE*)(*(_QWORD*)GameData_2131d40[0] + 856LL) = 1;
        }
      }
    }
  }
  if (*(_WORD*)(a1 + 226) != 1) {
    goto LABEL_156;
  }
  if ((*(_BYTE*)(a1 + 223) & 1) != 0) {
    v84 = ui_LayoutAccessor_GetPaneAlpha((__int64*)(a1 + 16),
                                         (__int64)"Bg_TextArea");
    ui_LayoutAccessor_SetPaneAlpha((__int64*)(a1 + 16), (__int64)"N_ScrollRoot",
                                   v84);
  }
  else {
    *(_BYTE*)(a1 + 223) = (float)(a4 - a2) < 0x1.f400000000000p+8f;
  }
  v85 = *(__int64**)(a1 + 192);
  v86 = *(__int64**)(a1 + 200);
  if (v85 == v86) {
    if ((*(_BYTE*)(a1 + 221) & 1) != 0) {
      goto LABEL_152;
    }
    goto LABEL_156;
  }
  v87 = 0;
  v88 = game_g_frame_clock_ptr[0];
  v89 = ui_LayoutAccessor_empty__ptr[0];
  do {
    v92 = *v85;
    v93 = *(float*)(*v85 + 16);
    if (v93 <= 0x0.0p+0f) {
      goto LABEL_126;
    }
    v94 = *(_QWORD*)(v92 + 8);
    v95 = 0x1.e000000000000p+5f / (float)*(int*)(*v88 + 476);
    v96 = *(float*)(v92 + 40);
    if (v95 <= 0x0.0p+0f) {
      v95 = 0x1.0000000000000p+0f;
    }
    *(float*)(v92 + 16) = v93 - v95;
    *(float*)(v92 + 32) = *(float*)(v92 + 32) + (float)(v96 * v95);
    if (v94 != 0 && (v97 = std___1___shared_weak_count_lock_alt1(v94)) != 0) {
      v98 = v97;
      if (*(_QWORD*)v92 != 0) {
        v99 = *(__int64**)v92;
      }
      else {
        v99 = v89;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v100 = v99;
        (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
        std___1___shared_weak_count___release_weak_alt1();
        v99 = v100;
      }
    }
    else {
      v99 = v89;
    }
    ui_LayoutAccessor_SetTranslate(v99, v92 + 28);
    if (*(float*)(v92 + 16) <= 0x0.0p+0f) {
      v101 = *(_QWORD*)(v92 + 8);
      if (v101 != 0 &&
          (v102 = std___1___shared_weak_count_lock_alt1(v101)) != 0) {
        v103 = v102;
        if (*(_QWORD*)v92 != 0) {
          v90 = *(__int64**)v92;
        }
        else {
          v90 = v89;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v104 = v90;
          (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103);
          std___1___shared_weak_count___release_weak_alt1();
          v90 = v104;
        }
      }
      else {
        v90 = v89;
      }
      LayoutAccessor_155e830_alt1(v90, 0);
    LABEL_126:
      v91 = 0;
      goto LABEL_127;
    }
    v91 = *(unsigned __int8*)(a1 + 223) ^ 1;
  LABEL_127:
    v87 += v91;
    ++v85;
  } while (v85 != v86);
  if ((*(_BYTE*)(a1 + 221) & 1) != 0) {
    if (v87 == 0) {
    LABEL_152:
      v105 = 0;
      v106 = "Out";
      goto LABEL_155;
    }
  }
  else if (v87 != 0) {
    v105 = 1;
    v106 = "In";
  LABEL_155:
    LayoutAccessor_1562680_alt1((__int64*)(a1 + 16), (__int64)v106,
                                0x1.0000000000000p+0f);
    *(_BYTE*)(a1 + 221) = v105;
  }
LABEL_156:
  v107 = *(float*)(a1 + 228);
  if (v107 > 0x0.0p+0f) {
    v108 = 0x1.e000000000000p+5f /
           (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v108 <= 0x0.0p+0f) {
      v108 = 0x1.0000000000000p+0f;
    }
    v109 = v107 - v108;
    *(float*)(a1 + 228) = v109;
    if (v109 <= 0x0.0p+0f) {
      *(_DWORD*)(a1 + 228) = 0;
      if (game_gameui_Footer_instance_ != 0) {
        LayoutAccessor_1567000_alt1(game_gameui_Footer_instance_, 0);
      }
    }
  }
  Seq_11d0a10(a1 + 152);
}

void Seq_11d0a10(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  __int64* v7;

  if (*(_BYTE*)a1 == 1) {
    v2 = 0x1.e000000000000p+5f /
         (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v2 <= 0x0.0p+0f) {
      v3 = 0x1.119ce00000000p-6f;
    }
    else {
      v3 = v2 * 0x1.119ce00000000p-6f;
    }
    v4 = *(float*)(a1 + 32);
    v5 = *(float*)(a1 + 28) + v3;
    *(float*)(a1 + 28) = v5;
    if (v5 > v4) {
      v5 = v4;
      *(float*)(a1 + 28) = v4;
    }
    v6 = Cursor_734120(*(_DWORD*)(a1 + 36), 2, *(float*)(a1 + 20),
                       *(float*)(a1 + 24), v5, v4);
    v7 = *(__int64**)(a1 + 8);
    *(float*)(a1 + 16) = v6;
    ui_LayoutAccessor_SetPaneAlpha(v7, (__int64)"N_TitleLogo", (int)v6);
    if (*(float*)(a1 + 16) <= 0x0.0p+0f) {
      *(_BYTE*)a1 = 0;
      ui_LayoutAccessor_SetPaneVisible_alt1(*(_QWORD*)(a1 + 8),
                                            (__int64)"N_TitleLogo", 0);
    }
  }
}

__n128 Seq_11d0af0(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __n128 result;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD* v19;
    _QWORD* v20;
    _QWORD* v21;
  } v19_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258e90,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2258e90) != 0) {
    BYTE4(GameData_2258e80) = 0;
    GameData_2258e88 = 0;
    GameData_2258e68 = (__int64)&GameData_1a9f09e;
    GameData_2258e70 = (__int64)"MID_KeyHelp_ShowSubtitle";
    LOBYTE(GameData_2258e78) = 1;
    *(__int64*)((char*)&GameData_2258e78 + 4) = 0x1400000002LL;
    __cxa_guard_release(&GameData_2258e90),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = GameData_2258e80;
  v19_.v19 = v3;
  v19_.v20 = v3 + 5;
  v19_.v21 = v3 + 5;
  v3[2] = GameData_2258e78;
  v3[3] = v4;
  v3[4] = GameData_2258e88;
  v5 = GameData_2258e70;
  *v3 = GameData_2258e68;
  v3[1] = v5;
  if (*(_WORD*)(a1 + 226) == 1) {
    v6 = v3;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258ec0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_2258ec0) != 0) {
      BYTE4(GameData_2258eb0) = 0;
      GameData_2258eb8 = 0;
      GameData_2258e98 = (__int64)&GameData_1a9f09e;
      GameData_2258ea0 = (__int64)"MID_KeyHelp_ShowAll";
      LOBYTE(GameData_2258ea8) = 1;
      *(__int64*)((char*)&GameData_2258ea8 + 4) = 0x1400000004LL;
      __cxa_guard_release(&GameData_2258ec0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 80, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v8 = GameData_2258eb8;
    v9 = v7 + 10;
    v19_.v19 = v7;
    v19_.v21 = v7 + 10;
    v7[8] = GameData_2258eb0;
    v7[9] = v8;
    v10 = GameData_2258ea8;
    v11 = GameData_2258e98;
    v7[6] = GameData_2258ea0;
    v7[7] = v10;
    v7[4] = v6[4];
    v7[5] = v11;
    v12 = v6[3];
    v7[2] = v6[2];
    v7[3] = v12;
    v13 = v6[1];
    *v7 = *v6;
    v7[1] = v13;
    v14 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v14),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19_.v20 = v9;
  }
  GameRoutine_1566440((__int64)&v19_.v19),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v16 = v19_.v19;
  *(_DWORD*)(a1 + 228) = 1123024896;
  if (v16 != nullptr) {
    v17 = *v2;
    v19_.v20 = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(v17 + v18);
  }
  return result;
}

void Seq_11d0eb0(__int64 a1, _BYTE* a2, int a3, int a4, float a5)
{
  __int64* v10;
  char* v11;
  int v12;
  float v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;

  GameRoutine_60a020(a1 + 48, (__int64)a2);
  *(_DWORD*)(a1 + 24) = a4;
  v10 = msg_MessageManager_instance__ptr[0];
  v11 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], a2, 0);
  v12 = TextSelector_1907f20(v11);
  *(_DWORD*)(a1 + 20) = v12;
  *(_DWORD*)(a1 + 36) = 0;
  *(_QWORD*)(a1 + 28) = 0xC352000000000000LL;
  v13 =
      (float)((float)(v12 - 1) * 0x1.6800000000000p+7f) + 0x1.c200000000000p+9f;
  v14 = a5 + (float)((float)a3 * -0x1.b800000000000p+5f);
  *(float*)(a1 + 16) = v13;
  if (v14 < -0x1.a400000000000p+7f) {
    *(float*)(a1 + 32) = v14;
    *(float*)(a1 + 16) = (float)(vabds_f32(-0x1.a400000000000p+7f, v14) /
                                 0x1.3e93ea0000000p-2f) +
                         v13;
  }
  v15 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 40) = 1050626549;
  if (v15 != 0) {
    v16 = std___1___shared_weak_count_lock_alt1(v15);
    v17 = ui_LayoutAccessor_empty__ptr[0];
    if (v16 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v17 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
  }
  else {
    v17 = ui_LayoutAccessor_empty__ptr[0];
  }
  v18 = GameRoutine_a4dbe0(*v10, a2, 0);
  if (v18 != nullptr) {
    v19 = (__int64)v18;
    v20 = ui_LayoutAccessor_FindTextBox(v17, (__int64)"T_Text");
    if (v20 != 0) {
      GameRoutine_156c5d0(v20, v19, 0);
    }
  }
  v21 = *(_QWORD*)(a1 + 8);
  if (v21 != 0) {
    v22 = std___1___shared_weak_count_lock_alt1(v21);
    v23 = ui_LayoutAccessor_empty__ptr[0];
    if (v22 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v23 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = v23;
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt1();
        v23 = v24;
      }
    }
  }
  else {
    v23 = ui_LayoutAccessor_empty__ptr[0];
  }
  LayoutAccessor_155e830_alt1(v23, 1);
}

#pragma GCC visibility pop
