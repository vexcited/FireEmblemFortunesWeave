#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_16f63f0(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_16f6810(__int64, _BYTE**, __int64, __int64, __int64,
                            __int64);
_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, _BYTE*);
_QWORD* ObeliskDestinyMenuItem_1a06060(_QWORD* result, int*, char);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1597ab0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16a8a70(__int64, __int64);
__int64 GameRoutine_178d120(_QWORD);
__int64 GameRoutine_181b5b0();
__int64 GameRoutine_181b650();
__int64 GameRoutine_181b6b0();
__int64 GameRoutine_181b750();
__int64 GameRoutine_181b7b0();
__int64 GameRoutine_181b7d0();
__int64 GameRoutine_181b800(__int64 result);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 GameRoutine_6e3b50_alt1(_QWORD, _QWORD) __asm__("GameRoutine_6e3b50");
__int64 GameRoutine_930b90(__int64, __int64);
__int64 GameRoutine_930b90_alt1(_QWORD, _QWORD) __asm__("GameRoutine_930b90");
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06060_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "ObeliskDestinyMenuItem_1a06060");
__int64 ProcTransitionAnim_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 SpotMgr_132ffa0(unsigned int*);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD, long double);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_menu_GameMenuItem_Draw(void);
__int64 game_menu_GameMenu_Unknown135(void);
__int64 game_menu_GameMenu_Unknown136(void);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak();
__n128 std___1___shared_weak_count___release_weak_alt2(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneSize(_QWORD, _QWORD, float, float);
char* GameRoutine_67ed20(_QWORD*);
char* GameRoutine_adf970(__int64, char);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_2088cf0[])();
extern __int64 (*GameData_20df5b8[])();
extern __int64 (*GameData_20df6d8[])();
extern __int64 (*GameData_20df7d8[])();
extern __int64 (*GameData_20df8d8[])();
extern __int64 (*GameData_20df9d8[])();
extern __int64 (*GameData_20dfad8[])();
extern __int64 (*GameData_20dfbd8[])();
extern __int64 (*GameData_20dfcd8[])();
extern __int64 (*GameData_20dfdd8[])();
extern __int64 (*GameData_20dfed8[])();
extern __int64 (*GameData_20dffd8[])();
extern __int64 (*GameData_20e00d8[])();
extern __int64 (*GameData_20e01d8[])();
extern __int64 (*GameData_20e02d8[])();
extern __int64 (*GameData_20e03d8[])();
extern __int64 (*GameData_20e04d8[])();
extern __int64 (*GameData_20e05d8[])();
extern __int64 (*GameData_20e06d8[])();
extern __int64 (*GameData_20e07d8[])();
extern __int64 (*GameData_20e08d8[])();
extern __int64 (*GameData_20e09d8[])();
extern __int64 (*GameData_20e0ad8[])();
extern __int64 (*GameData_20e0bd8[])();
extern __int64 (*GameData_20e0cd8[])();
extern __int64 (*GameData_20e0dd8[])();
extern __int64 (*GameData_20e0ed8[])();
extern __int64 (*GameData_20e0fd8[])();
extern __int64 (*GameData_20e10d8[])();
extern __int64 (*GameData_20e11d8[])();
extern __int64 (*GameData_20e12d8[])();
extern __int64 (*GameData_20e13d8[])();
extern __int64 (*GameData_20e14d8[])();
extern __int64 (*Signal_Shoot_DeletingDestructor_ptr[9])();
extern __int64 (*Signal_Shoot_Destructor_ptr[10])();
extern __int64 (*Signal_Shoot_Unknown2_ptr[8])();
extern __int64 (*Signal_Shoot_Unknown3_ptr[7])();
extern __int64 (*Signal_Shoot_Unknown4_ptr[6])();
extern __int64 (*Signal_Shoot_Unknown5_ptr[5])();
extern __int64 (*Signal_Shoot_Unknown6_ptr[4])();
extern __int64 (*Signal_Shoot_Unknown7_ptr[3])();
extern __int64 (*Signal_Shoot_Unknown8_ptr[2])();
extern __int64 (*Signal_Shoot_Unknown9_ptr)();
extern __int64 (*game_ProcInst_Unknown04_1820750_ptr[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_DialogMenuItem_vtable[])();
extern __int64* GameData_212c780;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_2131ab8;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21caa2c;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f1e08;
extern __int64 GameData_2232000;
extern __int64 GameData_22587e8;
extern __int64 GameData_226b218;
extern __int64 GameData_226b220;
extern __int64 GameData_226b228;
extern __int64 GameData_226b230;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern char GameData_1a9f09e;
extern int GameData_226b238;
long double ui_LayoutAccessor_GetPaneSize(_QWORD, _QWORD);
struct PseudoSret
    LayoutAccessor_1560070_alt1(_QWORD,
                                _QWORD) __asm__("LayoutAccessor_1560070");
void* game_97b2f0(__int64);
void GameRoutine_1597230();
void GameRoutine_1597490();
void GameRoutine_1597700();
void LayoutAccessor_155e830(__int64*, char);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(void);
void __attribute__((noreturn)) String_60a1d0(void);
__attribute__((swiftcall)) void game_menu_f6be60(PSEUDO_X8 x8_, __int64 a1,
                                                 int a2);
__int64 game_menu_f6e160(__int64 a1);
__n128 game_menu_fe1310_alt1(__int64 a1) __asm__("game_menu_fe1310");
void game_menu_fe16a0(__int64 a1);
__n128 game_menu_fe1bd0_alt1(__int64 a1) __asm__("game_menu_fe1bd0");
__n128 game_menu_fe1d60_alt1(__int64 a1) __asm__("game_menu_fe1d60");
void game_menu_15b8020_alt1(__int64 a1) __asm__("game_menu_15b8020");
__int64 game_menu_164dea0_alt1(__int64 a1) __asm__("game_menu_164dea0");
__int64 game_menu_16a89d0(__int64 a1);
__attribute__((swiftcall)) void
game_menu_16d2350_alt1(__attribute__((swift_indirect_result)) void* x8_,
                       __int64 a1, __int64 a2) __asm__("game_menu_16d2350");
__attribute__((swiftcall)) void
game_menu_16d23e0_alt1(__attribute__((swift_indirect_result)) void* x8_,
                       __int64 a1, __int64 a2) __asm__("game_menu_16d23e0");
void game_menu_16e7af0(__int64 a1);
__int64 game_menu_16edc90_alt1(__int64 a1,
                               __int64* a2) __asm__("game_menu_16edc90");
__int64 game_menu_16ee000_alt1(__int64 a1,
                               __int64* a2) __asm__("game_menu_16ee000");
_QWORD* game_menu_16f60e0(__int64 a1, __int64 a2, int a3, __int64 a4,
                          __int64 a5);
_QWORD* game_menu_16f64c0_alt1(__int64 a1, _BYTE* a2, unsigned int a3,
                               __int64 a4,
                               __int64 a5) __asm__("game_menu_16f64c0");
_QWORD* game_menu_16f69a0_alt1(__int64 a1, __int64 a2, unsigned int a3,
                               __int64 a4,
                               __int64 a5) __asm__("game_menu_16f69a0");
__int64 game_menu_178ce60(__int64 a1, int a2);
void game_menu_178cf10_alt1(__int64 a1) __asm__("game_menu_178cf10");
__int64** game_menu_179fec0_alt1(__int64** result,
                                 long double a2) __asm__("game_menu_179fec0");
__int64 game_menu_1820a00();
__int64 game_menu_1860c20(__int64 a1);
__int64 game_menu_1a06650_alt1(__int64 a1, __int64 a2,
                               int a3) __asm__("game_menu_1a06650");
__int64 game_menu_1a06840_alt1(__int64 a1, __int64 a2, int a3,
                               int a4) __asm__("game_menu_1a06840");
__int64 LayoutAccessor_155e830_alt1(_QWORD,
                                    _QWORD) __asm__("LayoutAccessor_155e830");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
void game_menu_16e75a0(__int64* a1, int a2, int a3, int a4);
void game_menu_16e7880(__int64* a1, int a2, char a3);
__int64 GameRoutine_1597ab0_alt1(__int64, unsigned int, __int64, __int64,
                                 char) __asm__("GameRoutine_1597ab0");
__int64 GameRoutine_6c47b0_alt1(__int64, _BYTE*, char,
                                char) __asm__("GameRoutine_6c47b0");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void game_menu_16d2350(PSEUDO_X8 x8_, __int64 result,
                                                  __int64 a2);
__attribute__((swiftcall)) void game_menu_16d23e0(PSEUDO_X8 x8_, __int64 result,
                                                  __int64 a2);
void game_menu_179fec0(char** a1);
_QWORD* GameHr_16f6810(__int64, const char**, const char*, __int64, __int64,
                       __int64);
_QWORD* LayoutAccessor_1560520_alt1(__int64*, const char*, const char*,
                                    char*) __asm__("LayoutAccessor_1560520");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt2(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 LayoutAccessor_155e830_alt2(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 ProcTransitionAnim_156af20_alt1(
    __int64, int, int, __int64*, const char*,
    const char*) __asm__("ProcTransitionAnim_156af20");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_menu_GameMenuItem_Draw_alt1(__int64) __asm__(
    "game_menu_GameMenuItem_Draw");
__int64 game_menu_GameMenu_Unknown135_alt1(__int64*, __int64*) __asm__(
    "game_menu_GameMenu_Unknown135");
__int64 game_menu_GameMenu_Unknown136_alt1(__int64*, __int64*) __asm__(
    "game_menu_GameMenu_Unknown136");
__int64 game_menu_UnitTroopMenuItem_OnUpdateContent(__int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
char* GameHr_67ed20(_QWORD*);
char* GameHr_adf970(__int64, char);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
void GameRoutine_6e3b50_alt2(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874500_alt1() __asm__("GameRoutine_874500");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void game_menu_fe1310(__int64 a1);
void game_menu_fe1bd0(__int64 a1);
void game_menu_fe1d60(__int64 a1);
__int64 game_menu_15b8020(__int64 a1);
void game_menu_164dea0(__int64 a1);
__int64 game_menu_16edc90(__int64* a1, __int64* a2);
__int64 game_menu_16ee000(__int64* a1, __int64* a2);
_QWORD* game_menu_16f64c0(__int64 a1, const char* a2, int a3, __int64 a4,
                          __int64 a5);
_QWORD* game_menu_16f69a0(__int64 a1, __int64 a2, int a3, __int64 a4,
                          __int64 a5);
__int64 game_menu_178cf10(__int64 a1);
void game_menu_1a06650(_QWORD* a1, __int64 a2, int a3);
void game_menu_1a06840(_QWORD* a1, __int64 a2, int a3, int a4);

__attribute__((swiftcall)) void game_menu_f6be60(PSEUDO_X8 x8_, __int64 a1,
                                                 int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _BYTE v10[256];

  v4 = "MID_LGV_Scout_%s_m%02d";
  if (a2 > 8) {
    v4 = "MID_LGV_Scout_%s_m%03d";
  }
  sprintf(v10, v4, *(_QWORD*)(*(_QWORD*)a1 + 40LL), (unsigned int)(a2 + 1));
  result = strlen(v10);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a3[1] = v6;
    a3[2] = v9;
    *a3 = v8 | 1;
    v7 = (char*)v9;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v7 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_12;
    }
  }
  result = memcpy(v7, v10, v6);
LABEL_12:
  v7[v6] = 0;
  {
    result;
    return;
  }
}

__int64 game_menu_f6e160(__int64 a1)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9[4];
  int v10;

  v3 = a1;
  result = *(_QWORD*)(a1 + 168);
  if (result != 0) {
    v5 = *(_QWORD*)(result + 440);
    if (v5 != 0 && *(_BYTE*)(v5 + 16) == 8) {
      v9[0] = 9;
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v6 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v7 = v3;
      if (*(_QWORD*)(result + 392) != v6 &&
          (*(_BYTE*)(result + 418) & 8) == 0) {
        v8 = result;
        v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        game_HasSkill_alt1((_QWORD*)(result + 1744), (unsigned int*)&v10);
        result = v8;
      }
      result = GameRoutine_6c47b0_alt1(result, v9, 1, 0);
      v3 = v7;
    }
    *(_QWORD*)(v3 + 168) = 0;
  }
  return result;
}

void game_menu_fe1310(__int64 a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Start_Fab_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v3, nullptr);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt1("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v2 + v8, (__int64)v3);
}

void game_menu_fe16a0(__int64 a1)
{
  int v2;
  __int64* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  char v16;
  __int64 v17;
  __int64* v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  char v23;
  __int64 v24;

  if (GameData_2232000 != 0) {
    v2 = *(_DWORD*)(GameData_2232000 + 76);
    if (v2 == 0) {
      goto LABEL_48;
    }
    if (v2 >= 6000) {
      v3 = (__int64*)fw_memory_g_heap_manager_ptr;
      v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      strcpy(v4, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Fab_m01");
      if (GameData_21ec7b8 == 0) {
        v5 = fw_memory_HeapManager_Allocate_alt1(*v3, 1376, 16, 0);
        GameRoutine_1130770_alt1(v5, v4, nullptr);
        v6 = *(_QWORD*)(a1 + 40);
        if (v6 != 0) {
          *(_QWORD*)(v6 + 48) = v5;
          *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v5;
        *(_QWORD*)(v5 + 24) = "talk::Seq";
        *(_QWORD*)(v5 + 32) = a1;
        *(_DWORD*)(v5 + 140) =
            (unsigned int)game_HashString32_alt1("talk::Seq");
        *(_QWORD*)(v5 + 64) = 0;
        *(_QWORD*)(v5 + 72) = 24;
        *(_QWORD*)(v5 + 80) = 1;
        *(_QWORD*)(v5 + 8) = &GameData_216de68;
        *(_QWORD*)(v5 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
            (*(_WORD*)(v5 + 136) & 0x100) == 0) {
          *(_WORD*)(v5 + 136) |= 0x100u;
        }
        v7 = *(_BYTE**)(v5 + 32);
        v8 = v7[138];
        if (v8 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
          v8 = v7[138];
        }
        v7[138] = v8 + 1;
        *(_WORD*)(v5 + 136) |= 2u;
      }
      v9 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v3 + v9, (__int64)v4);
      v10 = *(_QWORD*)(a1 + 8);
      if (v10 != 0) {
        while (1) {
          if (*(_BYTE*)v10 == 2) {
            if (*(_DWORD*)(v10 + 32) == 5) {
              goto LABEL_66;
            }
          }
          else if (*(_BYTE*)v10 == 0) {
            return;
          }
          v10 += 64;
        }
      }
      return;
    }
    if (v2 >= 3000) {
      v11 = (__int64*)fw_memory_g_heap_manager_ptr;
      v12 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      strcpy(v12, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Fab_m02");
      if (GameData_21ec7b8 == 0) {
        v13 = fw_memory_HeapManager_Allocate_alt1(*v11, 1376, 16, 0);
        GameRoutine_1130770_alt1(v13, v12, nullptr);
        v14 = *(_QWORD*)(a1 + 40);
        if (v14 != 0) {
          *(_QWORD*)(v14 + 48) = v13;
          *(_QWORD*)(v13 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v13;
        *(_QWORD*)(v13 + 24) = "talk::Seq";
        *(_QWORD*)(v13 + 32) = a1;
        *(_DWORD*)(v13 + 140) =
            (unsigned int)game_HashString32_alt1("talk::Seq");
        *(_QWORD*)(v13 + 64) = 0;
        *(_QWORD*)(v13 + 72) = 24;
        *(_QWORD*)(v13 + 80) = 1;
        *(_QWORD*)(v13 + 8) = &GameData_216de68;
        *(_QWORD*)(v13 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 136LL))(v13) & 1) != 0 &&
            (*(_WORD*)(v13 + 136) & 0x100) == 0) {
          *(_WORD*)(v13 + 136) |= 0x100u;
        }
        v15 = *(_BYTE**)(v13 + 32);
        v16 = v15[138];
        if (v16 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*(_QWORD*)(v13 + 32));
          v16 = v15[138];
        }
        v15[138] = v16 + 1;
        *(_WORD*)(v13 + 136) |= 2u;
      }
      v17 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v11 + v17, (__int64)v12);
      v10 = *(_QWORD*)(a1 + 8);
      if (v10 != 0) {
        while (1) {
          if (*(_BYTE*)v10 == 2) {
            if (*(_DWORD*)(v10 + 32) == 3) {
              goto LABEL_66;
            }
          }
          else if (*(_BYTE*)v10 == 0) {
            return;
          }
          v10 += 64;
        }
      }
    }
    else {
    LABEL_48:
      v18 = (__int64*)fw_memory_g_heap_manager_ptr;
      v19 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      strcpy(v19, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Fab_m03");
      if (GameData_21ec7b8 == 0) {
        v20 = fw_memory_HeapManager_Allocate_alt1(*v18, 1376, 16, 0);
        GameRoutine_1130770_alt1(v20, v19, nullptr);
        v21 = *(_QWORD*)(a1 + 40);
        if (v21 != 0) {
          *(_QWORD*)(v21 + 48) = v20;
          *(_QWORD*)(v20 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v20;
        *(_QWORD*)(v20 + 24) = "talk::Seq";
        *(_QWORD*)(v20 + 32) = a1;
        *(_DWORD*)(v20 + 140) =
            (unsigned int)game_HashString32_alt1("talk::Seq");
        *(_QWORD*)(v20 + 64) = 0;
        *(_QWORD*)(v20 + 72) = 24;
        *(_QWORD*)(v20 + 80) = 1;
        *(_QWORD*)(v20 + 8) = &GameData_216de68;
        *(_QWORD*)(v20 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v20 + 136LL))(v20) & 1) != 0 &&
            (*(_WORD*)(v20 + 136) & 0x100) == 0) {
          *(_WORD*)(v20 + 136) |= 0x100u;
        }
        v22 = *(_BYTE**)(v20 + 32);
        v23 = v22[138];
        if (v23 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v22 + 64LL))(*(_QWORD*)(v20 + 32));
          v23 = v22[138];
        }
        v22[138] = v23 + 1;
        *(_WORD*)(v20 + 136) |= 2u;
      }
      v24 = 128;
      if (*(_QWORD*)(*v18 + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v18 + v24, (__int64)v19);
      v10 = *(_QWORD*)(a1 + 8);
      if (v10 != 0) {
        while (1) {
          if (*(_BYTE*)v10 == 2) {
            if (*(_DWORD*)(v10 + 32) == 5) {
              goto LABEL_66;
            }
          }
          else if (*(_BYTE*)v10 == 0) {
            return;
          }
          v10 += 64;
        }
      }
    }
  }
  else {
    v10 = *(_QWORD*)(a1 + 8);
    if (v10 != 0) {
      while (1) {
        if (*(_BYTE*)v10 == 2) {
          if (*(_DWORD*)(v10 + 32) == 4) {
          LABEL_66:
            *(_QWORD*)(a1 + 16) = v10;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v10 == 0) {
          return;
        }
        v10 += 64;
      }
    }
  }
}

void game_menu_fe1bd0(__int64 a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Fab_m05");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v3, nullptr);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt1("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v2 + v8, (__int64)v3);
}

void game_menu_fe1d60(__int64 a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_NoGive_Fab_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v3, nullptr);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt1("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v2 + v8, (__int64)v3);
}

__int64 game_menu_15b8020(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  char* v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64* v15;
  __int64 result;
  __int64* v17;
  __int64* v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt3(v4);
    v6 = v17;
    if (v17 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_155e830_alt2((__int64)v6, 0);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v7 = *(char**)(a1 + 112);
  }
  else {
    v7 = (char*)(a1 + 97);
  }
  LayoutAccessor_1560520_alt1((__int64*)(*(_QWORD*)(a1 + 8) + 952LL),
                              "L_MenuItem_Empty", "MenuItemList", v7);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v8 = *(const char**)(a1 + 112);
  }
  else {
    v8 = (const char*)(a1 + 97);
  }
  LayoutAccessor_1560070_alt2((void*)(&v19_.v19),
                              (__int64*)(*(_QWORD*)(a1 + 8) + 952LL), v8);
  v10 = v19_.v19;
  v9 = v19_.v20;
  v11 = *(_QWORD*)(a1 + 56);
  v19_.v19 = 0;
  v19_.v20 = 0;
  *(_QWORD*)(a1 + 48) = v10;
  *(_QWORD*)(a1 + 56) = v9;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak_alt3(v11);
    if (v19_.v20 != 0) {
      std___1___shared_weak_count___release_weak_alt3(v19_.v20);
    }
    v9 = *(_QWORD*)(a1 + 56);
  }
  if (v9 == 0) {
    goto LABEL_20;
  }
  v12 = std___1___shared_weak_count_lock_alt1(v9);
  if (v12 == 0) {
    goto LABEL_20;
  }
  v13 = v12;
  v14 = (atomic_ullong*)(v12 + 8);
  v15 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v18 = v15;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt3(v13);
    v15 = v18;
    if (v18 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if (v15 == nullptr) {
  LABEL_20:
    v15 = &ui_LayoutAccessor_empty_;
  }
LABEL_21:
  result = LayoutAccessor_155e830_alt2((__int64)v15, 1);
  *(_BYTE*)(a1 + 78) = 1;
  return result;
}

void game_menu_164dea0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_QWORD*)a1 = GameData_2131ab8 + 2;
  v2 = (_QWORD*)(a1 + 240);
  v3 = *(_QWORD**)(a1 + 272);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD*)(a1 + 224);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak_alt3(v5);
  }
  v6 = *(_QWORD*)(a1 + 208);
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak_alt3(v6);
  }
  v7 = *(_QWORD**)(a1 + 176);
  *(_QWORD*)a1 = game_menu_DialogMenuItem_vtable;
  if (v7 == (_QWORD*)(a1 + 144)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_15;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_15:
  v9 = *(_QWORD**)(a1 + 128);
  if (v9 == (_QWORD*)(a1 + 96)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_20;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_20:
  v11 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak_alt3(v11);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 32);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
}

__int64 game_menu_16a89d0(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v1 = *(_QWORD*)(a1 + 8);
  v4_.v4[0] = GameData_2088cf0;
  v4_.v5 = v4_.v4;
  GameRoutine_16a8a70(v1, (__int64)v4_.v4);
  result = (__int64)v4_.v5;
  if (v4_.v5 == v4_.v4) {
    v3 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4_.v5 + v3))((__int64)v4_.v5);
}

__attribute__((swiftcall)) void game_menu_16d2350(PSEUDO_X8 x8_, __int64 result,
                                                  __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  _DWORD* v5;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v5 = a3;
    v6 = *(_QWORD*)(GameData_21f1e08 + 144);
    v7_.v7 = *(_QWORD*)(GameData_21f1e08 + 136);
    v7_.v8 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)result + 560LL))(result,
                                                                &v7_.v7);
    result = v7_.v8;
    if (v7_.v8 != 0) {
      result = std___1___shared_weak_count___release_weak_alt3(v7_.v8);
    }
    a3 = v5;
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_menu_16d23e0(PSEUDO_X8 x8_, __int64 result,
                                                  __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v5 = a3;
    v6 = *(_QWORD*)(GameData_21f1e08 + 144);
    v7 = result - 88;
    v8_.v8 = *(_QWORD*)(GameData_21f1e08 + 136);
    v8_.v9 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v7 + 560LL))(v7, &v8_.v8);
    result = v8_.v9;
    if (v8_.v9 != 0) {
      result = std___1___shared_weak_count___release_weak_alt3(v8_.v9);
    }
    a3 = v5;
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

void game_menu_16e75a0(__int64* a1, int a2, int a3, int a4)
{
  int v4;
  __int64 v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BOOL4 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  float v21;
  int v22;
  int v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BOOL4 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  bool v39;
  int v40;
  int v41;
  int v42;

  if (a1[2] != 0) {
    v6 = a1[1];
    if (v6 != 0) {
      v10 = std___1___shared_weak_count_lock(v6);
      if (v10 != 0) {
        v11 = *a1;
        if (*a1 != 0) {
          v4 = *(unsigned __int8*)(v11 + 24);
          v12 = v11 + 152;
          if (v4 == 0) {
            v12 = 0;
          }
          v13 = v12 != a1[2];
        }
        else {
          v13 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v13) {
            goto LABEL_11;
          }
        }
        else {
          v15 = v10;
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak_alt2(v15);
          if (v13) {
            goto LABEL_11;
          }
        }
        if ((v4 & 1) == 0) {
          return;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v14 = a1[1];
      if (v14 == 0 || *(_QWORD*)(v14 + 8) == -1) {
        return;
      }
    LABEL_16:
      v16 = vcvtps_s32_f32((float)a2 / (float)a4);
      *((_DWORD*)a1 + 26) = v16;
      *((_DWORD*)a1 + 27) = a3 / a4;
      if (a3 / a4 >= v16) {
        LayoutAccessor_155e830_alt1(a1, 0);
        return;
      }
      LayoutAccessor_155e830_alt1(a1, 1);
      v17 = ui_LayoutAccessor_FindPane(a1, "Frm");
      if (v17 != 0) {
        v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212fc70[0], 0);
        if (v18 != 0) {
          LOWORD(v19) = *(_WORD*)(v18 + 222);
          LOWORD(v20) = *(_WORD*)(v18 + 224);
          v21 = *(float*)(v18 + 84) * 0.5f;
          v22 = (int)(float)((float)v19 - v21);
          v23 = (int)(float)(v21 - (float)v20);
          v24 = ((v23 - v22) * *((_DWORD*)a1 + 27) / *((_DWORD*)a1 + 26)) &
                ~(((v23 - v22) * *((_DWORD*)a1 + 27) / *((_DWORD*)a1 + 26)) >>
                  31);
          *((_DWORD*)a1 + 30) = v24;
          v24 >>= 1;
          *((_DWORD*)a1 + 28) = v24 + v22;
          *((_DWORD*)a1 + 29) = v23 - v24;
        }
      }
      v25 = ui_LayoutAccessor_FindPane(a1, "Box");
      if (v25 != 0) {
        v26 = __dynamic_cast(v25, GameData_212d670[0], GameData_212fc70[0], 0);
        if (v26 != 0) {
          LOWORD(v27) = *(_WORD*)(v26 + 222);
          LOWORD(v28) = *(_WORD*)(v26 + 224);
          v29 = (float)*((int*)a1 + 30);
          *(_BYTE*)(v26 + 88) |= 0x10u;
          *(float*)(v26 + 84) = (float)((float)v27 + v29) + (float)v28;
        }
      }
      if (a1[2] == 0) {
        goto LABEL_41;
      }
      v30 = a1[1];
      if (v30 == 0) {
        goto LABEL_41;
      }
      v31 = std___1___shared_weak_count_lock(v30);
      if (v31 == 0) {
        goto LABEL_35;
      }
      v32 = *a1;
      if (*a1 != 0) {
        a3 = *(unsigned __int8*)(v32 + 24);
        v33 = v32 + 152;
        if (a3 == 0) {
          v33 = 0;
        }
        v34 = v33 != a1[2];
      }
      else {
        v34 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v35 = v31;
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak_alt2(v35);
      }
      if (!v34) {
        if ((a3 & 1) == 0) {
        LABEL_41:
          *((_DWORD*)a1 + 34) = 1090519040;
          return;
        }
      }
      else {
      LABEL_35:
        v36 = a1[1];
        if (v36 == 0 || *(_QWORD*)(v36 + 8) == -1) {
          goto LABEL_41;
        }
      }
      v37 = *((_DWORD*)a1 + 26);
      v38 = *((_DWORD*)a1 + 27);
      v39 = __OFSUB__(v37, v38);
      v40 = v37 - v38;
      if (!((v40 < 0) ^ v39 | (v40 == 0))) {
        v41 = *((_DWORD*)a1 + 28) + (int)(float)((float)*((int*)a1 + 29) +
                                                 (float)(-0.0f / (float)v40));
        v42 = *((_DWORD*)a1 + 31);
        *((_DWORD*)a1 + 31) = v41;
        *((_DWORD*)a1 + 32) = v42;
        *((_DWORD*)a1 + 33) = v41;
      }
      goto LABEL_41;
    }
  }
}

void game_menu_16e7880(__int64* a1, int a2, char a3)
{
  int v3;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  if (a1[2] == 0) {
    return;
  }
  v5 = a1[1];
  if (v5 == 0) {
    return;
  }
  v8 = std___1___shared_weak_count_lock(v5);
  if (v8 == 0) {
    goto LABEL_11;
  }
  v9 = *a1;
  if (*a1 != 0) {
    v3 = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 152;
    if (v3 == 0) {
      v10 = 0;
    }
    v11 = v10 != a1[2];
  }
  else {
    v11 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11) {
    LABEL_11:
      v12 = a1[1];
      if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
        return;
      }
      goto LABEL_16;
    }
  }
  else {
    v13 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v13);
    if (v11) {
      goto LABEL_11;
    }
  }
  if ((v3 & 1) == 0) {
    return;
  }
LABEL_16:
  v14 = *((_DWORD*)a1 + 26);
  v15 = *((_DWORD*)a1 + 27);
  v16 = __OFSUB__(v14, v15);
  v17 = v14 - v15;
  if (!((v17 < 0) ^ v16 | (v17 == 0))) {
    v19 = *((_DWORD*)a1 + 28);
    v18 = *((_DWORD*)a1 + 29);
    v20 = *((_DWORD*)a1 + 31);
    *((_DWORD*)a1 + 34) = 0;
    v21 = v19 + (int)(float)((float)v18 -
                             (float)((float)((v18 - v19) * a2) / (float)v17));
    *((_DWORD*)a1 + 32) = v20;
    *((_DWORD*)a1 + 33) = v21;
    if ((a3 & 1) != 0) {
      *((_DWORD*)a1 + 31) = v21;
      *((_DWORD*)a1 + 34) = 1090519040;
    }
  }
}

void game_menu_16e7af0(__int64 a1)
{
  __int64 v2;
  __n128 v3;
  __int64 v4;
  float v6;
  float v7;
  long double v8;
  __int64 v9;
  __int64 v10;

  *(struct PseudoSret*)(&v9) = LayoutAccessor_1560070_alt1(a1, "L_ScrollBar");
  if (v10 != 0) {
    v2 = std___1___shared_weak_count_lock(v10);
    v4 = v9;
    if (v10 != 0) {
      v3 = std___1___shared_weak_count___release_weak_alt2(v10);
    }
    if (v2 == 0 || v4 == 0) {
      if (v2 == 0) {
        return;
      }
    }
    else {
      ui_LayoutAccessor_GetPaneSize(a1, "Viewport");
      v7 = v6;
      v8 = ui_LayoutAccessor_GetPaneSize(v4, "Frm");
      v3 = ui_LayoutAccessor_SetPaneSize(v4, "Frm", *(float*)&v8, v7);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v2 + 16LL))(
          v2, *(long double*)&v3);
      std___1___shared_weak_count___release_weak_alt2(v2);
    }
  }
}

__int64 game_menu_16edc90(__int64* a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  signed __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[25];

  result = game_menu_GameMenu_Unknown135_alt1(a1, a2);
  v5 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf_alt1((__int64)v34, "%s%s", "Left", "In");
    result = ProcTransitionAnim_156af20_alt1(v5, 2, 0, a1 + 119, "Left",
                                             (const char*)v34);
    if (result != -1) {
      v7 = (__int64*)a2[1];
      v6 = a2[2];
      if ((unsigned __int64)v7 >= v6) {
        v9 = *a2;
        v10 = (signed __int64)v7 - *a2;
        v11 = (v10 >> 3) + 1;
        if (v11 >> 61 != 0) {
          goto LABEL_42;
        }
        v12 = v6 - v9;
        v13 = fw_memory_g_heap_manager_ptr;
        if (v12 >> 2 > v11) {
          v11 = v12 >> 2;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v11;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            goto LABEL_43;
          }
          v15 = result;
          v16 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          result = v15;
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v14;
        v18 = v16 + v10 - 8 * (v10 >> 3);
        *(_QWORD*)(v16 + v10) = result;
        v8 = v16 + v10 + 8;
        memcpy_alt1(v18, v9, v10);
        *a2 = v18;
        a2[1] = v8;
        a2[2] = v17;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v19, v9);
        }
      }
      else {
        *v7 = result;
        v8 = (__int64)(v7 + 1);
      }
      a2[1] = v8;
      result = (*(__int64 (**)(__int64*))(a1[132] + 120))(a1 + 132);
      if ((result & 1) == 0) {
        snd_Fade_Fade_10c830_alt1((__int64)v34, 0x0.0p+0f);
        snd_play_ff2d0_alt1((__int64)"SE_SYS_Window_Open",
                            (__int64)"SE_SYS_Window_Open", (__int64)v34, 0,
                            0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        result = snd_Fade_Destroy_Fade_alt1(v34);
      }
    }
    v20 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf_alt1((__int64)v34, "%s%s", "Right", "In");
      result = ProcTransitionAnim_156af20_alt1(v20, 3, 0, a1 + 119, "Right",
                                               (const char*)v34);
      if (result != -1) {
        v22 = (__int64*)a2[1];
        v21 = a2[2];
        if ((unsigned __int64)v22 < v21) {
          *v22 = result;
          v23 = (__int64)(v22 + 1);
        LABEL_39:
          a2[1] = v23;
          result = (*(__int64 (**)(__int64*))(a1[132] + 120))(a1 + 132);
          if ((result & 1) == 0) {
            snd_Fade_Fade_10c830_alt1((__int64)v34, 0x0.0p+0f);
            snd_play_ff2d0_alt1((__int64)"SE_SYS_Window_Open",
                                (__int64)"SE_SYS_Window_Open", (__int64)v34, 0,
                                0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
            return snd_Fade_Destroy_Fade_alt1(v34);
          }
          return result;
        }
        v24 = *a2;
        v25 = (signed __int64)v22 - *a2;
        v26 = (v25 >> 3) + 1;
        if (v26 >> 61 == 0) {
          v27 = v21 - v24;
          if (v27 >> 2 > v26) {
            v26 = v27 >> 2;
          }
          if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
            v28 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v28 = v26;
          }
          if (v28 == 0) {
            v30 = 0;
          LABEL_35:
            v31 = v30 + 8 * v28;
            v32 = v30 + v25 - 8 * (v25 >> 3);
            *(_QWORD*)(v30 + v25) = result;
            v23 = v30 + v25 + 8;
            memcpy_alt1(v32, v24, v25);
            *a2 = v32;
            a2[1] = v23;
            a2[2] = v31;
            if (v24 != 0) {
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v24);
            }
            goto LABEL_39;
          }
          if (v28 >> 61 == 0) {
            v29 = result;
            v30 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
            result = v29;
            goto LABEL_35;
          }
        LABEL_43:
          GameRoutine_60a210_alt1();
        }
      LABEL_42:
        GameRoutine_874500_alt1();
      }
    }
  }
  return result;
}

__int64 game_menu_16ee000(__int64* a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  signed __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[25];

  result = game_menu_GameMenu_Unknown136_alt1(a1, a2);
  v5 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf_alt1((__int64)v34, "%s%s", "Right", "Out");
    result = ProcTransitionAnim_156af20_alt1(v5, 3, 1, a1 + 119, "Right",
                                             (const char*)v34);
    if (result != -1) {
      v7 = (__int64*)a2[1];
      v6 = a2[2];
      if ((unsigned __int64)v7 >= v6) {
        v9 = *a2;
        v10 = (signed __int64)v7 - *a2;
        v11 = (v10 >> 3) + 1;
        if (v11 >> 61 != 0) {
          goto LABEL_42;
        }
        v12 = v6 - v9;
        v13 = fw_memory_g_heap_manager_ptr;
        if (v12 >> 2 > v11) {
          v11 = v12 >> 2;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v11;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            goto LABEL_43;
          }
          v15 = result;
          v16 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          result = v15;
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v14;
        v18 = v16 + v10 - 8 * (v10 >> 3);
        *(_QWORD*)(v16 + v10) = result;
        v8 = v16 + v10 + 8;
        memcpy_alt1(v18, v9, v10);
        *a2 = v18;
        a2[1] = v8;
        a2[2] = v17;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v19, v9);
        }
      }
      else {
        *v7 = result;
        v8 = (__int64)(v7 + 1);
      }
      a2[1] = v8;
      result = (*(__int64 (**)(__int64*))(a1[132] + 128))(a1 + 132);
      if ((result & 1) == 0) {
        snd_Fade_Fade_10c830_alt1((__int64)v34, 0x0.0p+0f);
        snd_play_ff2d0_alt1((__int64)"SE_SYS_Window_Close",
                            (__int64)"SE_SYS_Window_Close", (__int64)v34, 0,
                            0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        result = snd_Fade_Destroy_Fade_alt1(v34);
      }
    }
    v20 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf_alt1((__int64)v34, "%s%s", "Left", "Out");
      result = ProcTransitionAnim_156af20_alt1(v20, 2, 1, a1 + 119, "Left",
                                               (const char*)v34);
      if (result != -1) {
        v22 = (__int64*)a2[1];
        v21 = a2[2];
        if ((unsigned __int64)v22 < v21) {
          *v22 = result;
          v23 = (__int64)(v22 + 1);
        LABEL_39:
          a2[1] = v23;
          result = (*(__int64 (**)(__int64*))(a1[132] + 128))(a1 + 132);
          if ((result & 1) == 0) {
            snd_Fade_Fade_10c830_alt1((__int64)v34, 0x0.0p+0f);
            snd_play_ff2d0_alt1((__int64)"SE_SYS_Window_Close",
                                (__int64)"SE_SYS_Window_Close", (__int64)v34, 0,
                                0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
            return snd_Fade_Destroy_Fade_alt1(v34);
          }
          return result;
        }
        v24 = *a2;
        v25 = (signed __int64)v22 - *a2;
        v26 = (v25 >> 3) + 1;
        if (v26 >> 61 == 0) {
          v27 = v21 - v24;
          if (v27 >> 2 > v26) {
            v26 = v27 >> 2;
          }
          if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
            v28 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v28 = v26;
          }
          if (v28 == 0) {
            v30 = 0;
          LABEL_35:
            v31 = v30 + 8 * v28;
            v32 = v30 + v25 - 8 * (v25 >> 3);
            *(_QWORD*)(v30 + v25) = result;
            v23 = v30 + v25 + 8;
            memcpy_alt1(v32, v24, v25);
            *a2 = v32;
            a2[1] = v23;
            a2[2] = v31;
            if (v24 != 0) {
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v24);
            }
            goto LABEL_39;
          }
          if (v28 >> 61 == 0) {
            v29 = result;
            v30 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
            result = v29;
            goto LABEL_35;
          }
        LABEL_43:
          GameRoutine_60a210_alt1();
        }
      LABEL_42:
        GameRoutine_874500_alt1();
      }
    }
  }
  return result;
}

_QWORD* game_menu_16f60e0(__int64 a1, __int64 a2, int a3, __int64 a4,
                          __int64 a5)
{
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64* v17;
  unsigned __int64* v18;
  __int64* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64* v24;
  __int64* v25;
  __int64* v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int16 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  _BYTE v36[20];
  _QWORD v37[2];
  _QWORD** v38;
  struct {
    _QWORD* v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    _BYTE* v43;
    __int64 v44;
    int v45;
  } v39_;

  *(_QWORD*)v36 = a2;
  v6 = GameRoutine_16f63f0(a1, (__int64)v36, a4, a5, a5);
  *((_DWORD*)v6 + 393) = a3;
  v7 = v6;
  v8 = GameData_212ceb0;
  v9 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8LL * (unsigned int)a3);
  if (a3 < 0) {
    v9 = GameData_212ceb0;
  }
  v10 = *((_DWORD*)v9 + 1);
  if (v10 != 0 && *GameData_212c780 != 0) {
    *(_QWORD*)v36 = v10;
    *(_QWORD*)&v36[8] = &GameData_1a9f09e;
    v12 = SpotMgr_132ffa0((unsigned int*)v36);
    if (v12 != 0) {
      v13 = v12;
      v14 = *(_QWORD*)(v12 + 280);
      if (v14 != 0 &&
          ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14) != 1 ||
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v13 + 280) + 112LL))(
                *(_QWORD*)(v13 + 280)) &
            1) == 0)) {
        v15 = *(_QWORD*)(v13 + 280);
        if (v15 != 0) {
          v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 272LL))(v15);
          if (v16 != 0) {
            v17 = *(unsigned __int64**)v16;
            v18 = *(unsigned __int64**)(v16 + 8);
            if (*(unsigned __int64**)v16 != v18) {
              v19 = GameData_212c8b0[0];
              do {
                v21 = *v17;
                if (*v17 != 0) {
                  v22 = *(unsigned __int16*)(v21 + 16);
                  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8 * v22) +
                                73LL) == 17) {
                    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                    v23 = v8;
                    v24 = v18;
                    v25 = v19;
                    v26 = game_map_MapRandom_instance__ptr[0];
                    v27 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v28 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v29 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v26 + 1) = v27;
                    v30 = (v29 >> 8) ^ (v28 >> 19) ^ v29 ^ v28;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26) = v28;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26 + 4) =
                        v30;
                    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
                    v31 = v30 - 1000 * ((v30 & 0x7FFFFFFFu) / 0x3E8);
                    v19 = v25;
                    v18 = v24;
                    v8 = v23;
                    v21 = (unsigned __int64)((16 * v31 + 16) & 0x3FF0 | 1u)
                          << 32;
                  }
                  else {
                    v21 = 0x100000000LL;
                  }
                }
                else {
                  v22 = 0;
                }
                *(_QWORD*)&v36[4] = v21 | v22;
                v32 = *(unsigned __int8*)v8;
                *(_DWORD*)v36 = 8;
                if (v32 != 0) {
                  v33 = *v8;
                }
                else {
                  v33 = 0;
                }
                *(_QWORD*)&v36[12] = v33;
                WORD1(v37[0]) = 0;
                HIDWORD(v37[0]) = 0;
                v39_.v39 = nullptr;
                v39_.v40 = 0;
                v38 = &v39_.v39;
                v39_.v41 = 0;
                v39_.v42 = 0;
                v39_.v43 = nullptr;
                GameRoutine_930b90((__int64)v37, (__int64)v19);
                v39_.v44 = 0x100000000LL;
                v39_.v45 = -1;
                ObeliskDestinyMenuItem_1a06060(v7 + 193, (int*)v36, 0);
                LODWORD(v37[1]) = 0;
                v37[0] = 0;
                if ((v39_.v41 & 1) != 0) {
                  *v39_.v43 = 0;
                  v39_.v42 = 0;
                }
                else {
                  LOWORD(v39_.v41) = 0;
                }
                GameRoutine_6e3b50_alt2((__int64)&v38, v39_.v39);
                v39_.v39 = nullptr;
                v39_.v40 = 0;
                v38 = &v39_.v39;
                if ((v39_.v41 & 1) != 0) {
                  v20 = v39_.v43;
                  if (v39_.v43 != nullptr) {
                    v34 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v34 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34,
                        (__int64)v39_.v43);
                    v20 = v39_.v39;
                  }
                }
                else {
                  v20 = nullptr;
                }
                GameRoutine_6e3b50_alt2((__int64)&v38, v20);
                ++v17;
              } while (v17 != v18);
            }
          }
        }
      }
    }
  }
  return v7;
}

_QWORD* game_menu_16f64c0(__int64 a1, const char* a2, int a3, __int64 a4,
                          __int64 a5)
{
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  unsigned int v13;
  __int64 v14;
  char* v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned int v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64* v25;
  unsigned __int64* v26;
  __int64* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64* v32;
  __int64* v33;
  __int64* v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  __int16 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  _BYTE v44[20];
  _QWORD v45[2];
  _QWORD** v46;
  struct {
    _QWORD* v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    _BYTE* v51;
    __int64 v52;
    int v53;
  } v47_;
  const char* v54;

  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 48LL);
  v10 = GameData_212ceb0;
  v54 = a2;
  v11 = (__int64*)(v9 + 8LL * (unsigned int)a3);
  if (a3 >= 0) {
    v12 = v11;
  }
  else {
    v12 = GameData_212ceb0;
  }
  v13 = *((_DWORD*)v12 + 1);
  *(_QWORD*)&v44[8] = &GameData_1a9f09e;
  *(_QWORD*)v44 = v13;
  v14 = *(_QWORD*)(SpotMgr_132ffa0((unsigned int*)v44) + 120);
  if (v14 != 0) {
    v15 = GameHr_adf970(v14, 0);
  }
  else {
    v15 = &GameData_1a9f09e;
  }
  v16 = GameHr_16f6810(a1, &v54, v15, a4, a5, a5);
  *((_DWORD*)v16 + 393) = a3;
  v17 = v16;
  v18 = *((_DWORD*)v12 + 1);
  if (v18 != 0 && *GameData_212c780 != 0) {
    *(_QWORD*)&v44[8] = &GameData_1a9f09e;
    *(_QWORD*)v44 = v18;
    v20 = SpotMgr_132ffa0((unsigned int*)v44);
    if (v20 != 0) {
      v21 = v20;
      v22 = *(_QWORD*)(v20 + 280);
      if (v22 != 0 &&
          ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v22 + 24LL))(v22) != 1 ||
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v21 + 280) + 112LL))(
                *(_QWORD*)(v21 + 280)) &
            1) == 0)) {
        v23 = *(_QWORD*)(v21 + 280);
        if (v23 != 0) {
          v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 272LL))(v23);
          if (v24 != 0) {
            v25 = *(unsigned __int64**)v24;
            v26 = *(unsigned __int64**)(v24 + 8);
            if (*(unsigned __int64**)v24 != v26) {
              v27 = GameData_212c8b0[0];
              do {
                v29 = *v25;
                if (*v25 != 0) {
                  v30 = *(unsigned __int16*)(v29 + 16);
                  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8 * v30) +
                                73LL) == 17) {
                    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                    v31 = v10;
                    v32 = v26;
                    v33 = v27;
                    v34 = game_map_MapRandom_instance__ptr[0];
                    v35 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v36 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v37 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v34 + 1) = v35;
                    v38 = (v37 >> 8) ^ (v36 >> 19) ^ v37 ^ v36;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34) = v36;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34 + 4) =
                        v38;
                    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
                    v39 = v38 - 1000 * ((v38 & 0x7FFFFFFFu) / 0x3E8);
                    v27 = v33;
                    v26 = v32;
                    v10 = v31;
                    v29 = (unsigned __int64)((16 * v39 + 16) & 0x3FF0 | 1u)
                          << 32;
                  }
                  else {
                    v29 = 0x100000000LL;
                  }
                }
                else {
                  v30 = 0;
                }
                *(_QWORD*)&v44[4] = v29 | v30;
                v40 = *(unsigned __int8*)v10;
                *(_DWORD*)v44 = 8;
                if (v40 != 0) {
                  v41 = *v10;
                }
                else {
                  v41 = 0;
                }
                *(_QWORD*)&v44[12] = v41;
                WORD1(v45[0]) = 0;
                HIDWORD(v45[0]) = 0;
                v47_.v47 = nullptr;
                v47_.v48 = 0;
                v46 = &v47_.v47;
                v47_.v49 = 0;
                v47_.v50 = 0;
                v47_.v51 = nullptr;
                GameRoutine_930b90((__int64)v45, (__int64)v27);
                v47_.v52 = 0x100000000LL;
                v47_.v53 = -1;
                ObeliskDestinyMenuItem_1a06060(v17 + 193, (int*)v44, 0);
                LODWORD(v45[1]) = 0;
                v45[0] = 0;
                if ((v47_.v49 & 1) != 0) {
                  *v47_.v51 = 0;
                  v47_.v50 = 0;
                }
                else {
                  LOWORD(v47_.v49) = 0;
                }
                GameRoutine_6e3b50_alt2((__int64)&v46, v47_.v47);
                v47_.v47 = nullptr;
                v47_.v48 = 0;
                v46 = &v47_.v47;
                if ((v47_.v49 & 1) != 0) {
                  v28 = v47_.v51;
                  if (v47_.v51 != nullptr) {
                    v42 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v42 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                        (__int64)v47_.v51);
                    v28 = v47_.v47;
                  }
                }
                else {
                  v28 = nullptr;
                }
                GameRoutine_6e3b50_alt2((__int64)&v46, v28);
                ++v25;
              } while (v25 != v26);
            }
          }
        }
      }
    }
  }
  return v17;
}

_QWORD* game_menu_16f69a0(__int64 a1, __int64 a2, int a3, __int64 a4,
                          __int64 a5)
{
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  const char* v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned int v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64* v24;
  unsigned __int64* v25;
  __int64* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64* v30;
  __int64* v31;
  __int64* v32;
  __int64* v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  __int16 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  _BYTE v43[20];
  _QWORD v44[2];
  _QWORD** v45;
  struct {
    _QWORD* v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    _BYTE* v50;
    __int64 v51;
    int v52;
  } v46_;

  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 48LL);
  v10 = GameData_212ceb0;
  *(_QWORD*)v43 = a2;
  v11 = (__int64*)(v9 + 8LL * (unsigned int)a3);
  if (a3 >= 0) {
    v12 = v11;
  }
  else {
    v12 = GameData_212ceb0;
  }
  if (*((_BYTE*)v12 + 1) != 0) {
    v13 = game_UnitPool_Get((_BYTE*)v12 + 1);
    if (*((_BYTE*)v13 + 2136) != 0) {
    LABEL_6:
      v14 = (const char*)game_97b2f0((__int64)(v13 + 263));
      goto LABEL_9;
    }
  }
  else {
    v13 = nullptr;
    if ((*(_BYTE*)0x858LL) != 0) {
      goto LABEL_6;
    }
  }
  v14 = GameHr_67ed20((_QWORD*)v13[49]);
LABEL_9:
  v15 = GameHr_16f6810(a1, (const char**)v43, v14, a4, a5, a5);
  *((_DWORD*)v15 + 393) = a3;
  v16 = v15;
  v17 = *((_DWORD*)v12 + 1);
  if (v17 != 0 && *GameData_212c780 != 0) {
    *(_QWORD*)v43 = v17;
    *(_QWORD*)&v43[8] = &GameData_1a9f09e;
    v19 = SpotMgr_132ffa0((unsigned int*)v43);
    if (v19 != 0) {
      v20 = v19;
      v21 = *(_QWORD*)(v19 + 280);
      if (v21 != 0 &&
          ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21) != 1 ||
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v20 + 280) + 112LL))(
                *(_QWORD*)(v20 + 280)) &
            1) == 0)) {
        v22 = *(_QWORD*)(v20 + 280);
        if (v22 != 0) {
          v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 272LL))(v22);
          if (v23 != 0) {
            v24 = *(unsigned __int64**)v23;
            v25 = *(unsigned __int64**)(v23 + 8);
            if (*(unsigned __int64**)v23 != v25) {
              v26 = GameData_212c8b0[0];
              do {
                v28 = *v24;
                if (*v24 != 0) {
                  v29 = *(unsigned __int16*)(v28 + 16);
                  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8 * v29) +
                                73LL) == 17) {
                    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                    v30 = v25;
                    v31 = v10;
                    v32 = v26;
                    v33 = game_map_MapRandom_instance__ptr[0];
                    v34 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v35 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v36 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v33 + 1) = v34;
                    v37 = (v36 >> 8) ^ (v35 >> 19) ^ v36 ^ v35;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v33) = v35;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v33 + 4) =
                        v37;
                    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
                    v38 = v37 - 1000 * ((v37 & 0x7FFFFFFFu) / 0x3E8);
                    v26 = v32;
                    v10 = v31;
                    v25 = v30;
                    v28 = (unsigned __int64)((16 * v38 + 16) & 0x3FF0 | 1u)
                          << 32;
                  }
                  else {
                    v28 = 0x100000000LL;
                  }
                }
                else {
                  v29 = 0;
                }
                *(_QWORD*)&v43[4] = v28 | v29;
                v39 = *(unsigned __int8*)v10;
                *(_DWORD*)v43 = 8;
                if (v39 != 0) {
                  v40 = *v10;
                }
                else {
                  v40 = 0;
                }
                *(_QWORD*)&v43[12] = v40;
                WORD1(v44[0]) = 0;
                HIDWORD(v44[0]) = 0;
                v46_.v46 = nullptr;
                v46_.v47 = 0;
                v45 = &v46_.v46;
                v46_.v48 = 0;
                v46_.v49 = 0;
                v46_.v50 = nullptr;
                GameRoutine_930b90((__int64)v44, (__int64)v26);
                v46_.v51 = 0x100000000LL;
                v46_.v52 = -1;
                ObeliskDestinyMenuItem_1a06060(v16 + 193, (int*)v43, 0);
                LODWORD(v44[1]) = 0;
                v44[0] = 0;
                if ((v46_.v48 & 1) != 0) {
                  *v46_.v50 = 0;
                  v46_.v49 = 0;
                }
                else {
                  LOWORD(v46_.v48) = 0;
                }
                GameRoutine_6e3b50_alt2((__int64)&v45, v46_.v46);
                v46_.v46 = nullptr;
                v46_.v47 = 0;
                v45 = &v46_.v46;
                if ((v46_.v48 & 1) != 0) {
                  v27 = v46_.v50;
                  if (v46_.v50 != nullptr) {
                    v41 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v41 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                        (__int64)v46_.v50);
                    v27 = v46_.v46;
                  }
                }
                else {
                  v27 = nullptr;
                }
                GameRoutine_6e3b50_alt2((__int64)&v45, v27);
                ++v24;
              } while (v24 != v25);
            }
          }
        }
      }
    }
  }
  return v16;
}

__int64 game_menu_178ce60(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _BYTE v6[200];
  __int64 v7;
  __int64 v8;

  if (a2 == 1) {
    v7 = v2;
    v8 = v3;
    snd_Fade_Fade_10c830(v6, 0.0f);
    snd_play_ff2d0((void*)(&v5), "SE_SYS_NG", "SE_SYS_NG", v6, 0, 65537, 0,
                   0.0f, 1.0f);
    return snd_Fade_Destroy_Fade(v6);
  }
  return result;
}

__int64 game_menu_178cf10(__int64 a1)
{
  int v1;
  __int64 result;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  void (**v10)(__int64);
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  __int64 v21;

  game_menu_GameMenuItem_Draw_alt1(a1);
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v4 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v4 != nullptr) {
          goto LABEL_5;
        }
      }
      else {
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt3(v5);
        if (v4 != nullptr) {
        LABEL_5:
          if (v4[2] == 0) {
            return result;
          }
          goto LABEL_9;
        }
      }
    }
  }
  v4 = &ui_LayoutAccessor_empty_;
  if (GameData_22587e8 == 0) {
    return result;
  }
LABEL_9:
  result = v4[1];
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock_alt1(result);
  if (result == 0) {
    goto LABEL_18;
  }
  v6 = *v4;
  if (*v4 != 0) {
    v1 = *(unsigned __int8*)(v6 + 24);
    v7 = v6 + 152;
    if (v1 == 0) {
      v7 = 0;
    }
    v8 = v7 != v4[2];
  }
  else {
    v8 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak_alt3(v11);
    if (v8) {
      goto LABEL_18;
    }
  LABEL_23:
    if ((v1 & 1) != 0) {
      goto LABEL_20;
    }
    return result;
  }
  if (!v8) {
    goto LABEL_23;
  }
LABEL_18:
  v9 = v4[1];
  if (v9 != 0 && *(_QWORD*)(v9 + 8) != -1) {
  LABEL_20:
    game_menu_UnitTroopMenuItem_OnUpdateContent(a1);
    if (*(_BYTE*)(a1 + 79) == 1) {
      v10 = (void (**)(__int64))(*(_QWORD*)a1 + 520LL);
    }
    else {
      v10 = (void (**)(__int64))(*(_QWORD*)a1 + 504LL);
      if (*(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1) {
        v10 = (void (**)(__int64))(*(_QWORD*)a1 + 512LL);
      }
    }
    (*v10)(a1);
    v12 = *(_QWORD*)(a1 + 56);
    v13 = *(_DWORD*)(*(_QWORD*)(a1 + 88) + 416LL);
    if (v12 != 0) {
      v14 = std___1___shared_weak_count_lock_alt1(v12);
      if (v14 != 0) {
        v15 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v15 != nullptr) {
            goto LABEL_31;
          }
        }
        else {
          v17 = v14;
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak_alt3(v17);
          if (v15 != nullptr) {
          LABEL_31:
            if ((v13 & 0x100000) == 0) {
            LABEL_32:
              v16 = "InfoOff";
              return LayoutAccessor_1562cf0_alt1((__int64)v15,
                                                 (unsigned int*)v16);
            }
          LABEL_35:
            v18 = *(_QWORD*)(a1 + 88);
            v19 = *(_DWORD*)(v18 + 416);
            v20 = *(unsigned __int8*)(v18 + 501);
            if ((v19 & 0x100000) != 0) {
              v21 = v20;
            }
            else {
              v21 = 0xFFFFFFFFLL;
            }
            v16 = game_util_Format_alt1("Info%02d", v21);
            return LayoutAccessor_1562cf0_alt1((__int64)v15,
                                               (unsigned int*)v16);
          }
        }
      }
    }
    v15 = &ui_LayoutAccessor_empty_;
    if ((v13 & 0x100000) == 0) {
      goto LABEL_32;
    }
    goto LABEL_35;
  }
  return result;
}

void game_menu_179fec0(char** a1)
{
  __int64 v1;
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;
  _QWORD v22[4];

  v3 = *a1;
  if ((int)((unsigned __int64)(a1[1] - *a1) >> 3) < 2) {
    return;
  }
  v22[2] = v1;
  v22[3] = v2;
  v4 = 1;
  do {
    *(_BYTE*)(**(_QWORD**)&v3[8 * v4] + 88LL) &= ~1u;
    *(_BYTE*)(*(_QWORD*)*a1 + 192LL) |=
        *(_BYTE*)(*(_QWORD*)&(*a1)[8 * v4] + 192LL);
    *(_BYTE*)(*(_QWORD*)*a1 + 193LL) |=
        *(_BYTE*)(*(_QWORD*)&(*a1)[8 * v4] + 193LL);
    v6 = *(_QWORD*)&(*a1)[8 * v4++];
    *(_BYTE*)(*(_QWORD*)*a1 + 194LL) |= *(_BYTE*)(v6 + 194);
    v3 = *a1;
  } while (v4 < (int)((unsigned __int64)(a1[1] - *a1) >> 3));
  v7 = *(_QWORD*)v3;
  v8 = *(_QWORD*)(*(_QWORD*)v3 + 24LL);
  if (v8 != 0 && (v9 = std___1___shared_weak_count_lock_alt1(v8)) != 0) {
    v10 = *(_QWORD*)(v7 + 16);
    LOBYTE(v22[1]) = 0;
    v22[0] = v10;
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt3(v11);
    }
  }
  else {
    v22[0] = 0;
    LOBYTE(v22[1]) = 0;
  }
  v12 = *(_QWORD*)*a1;
  v13 = *(_DWORD*)(v12 + 152);
  if ((*(_BYTE*)(v12 + 160) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v19_.v19, *(_QWORD*)(v12 + 176),
                                       *(_QWORD*)(v12 + 168));
  }
  else {
    v14 = *(_QWORD*)(v12 + 168);
    v19_.v19 = *(_QWORD*)(v12 + 160);
    v19_.v20 = v14;
    v19_.v21 = *(char**)(v12 + 176);
  }
  if ((v19_.v19 & 1) != 0) {
    v15 = v19_.v21;
  }
  else {
    v15 = (char*)&v19_.v19 + 1;
  }
  if ((v19_.v19 & 1) != 0) {
    v16 = v19_.v20;
  }
  else {
    v16 = (unsigned __int64)(unsigned __int8)v19_.v19 >> 1;
  }
  GameRoutine_1597ab0_alt1((__int64)v22, v13, (__int64)v15, v16, 1);
  v17 = *(_QWORD*)*a1;
  if (*(_BYTE*)(v17 + 194) == 1) {
    ((void (*)(_QWORD*, __int64))GameRoutine_1597230)(v22, 1);
    if ((v19_.v19 & 1) == 0) {
      return;
    }
    goto LABEL_26;
  }
  if (*(_BYTE*)(v17 + 193) != 1) {
  LABEL_25:
    if ((v19_.v19 & 1) == 0) {
      return;
    }
    goto LABEL_26;
  }
  if (v13 <= 0x1C && ((1 << v13) & 0x19C00000) != 0) {
    ((void (*)(_QWORD*, __int64))GameRoutine_1597490)(v22, 1);
    goto LABEL_25;
  }
  ((void (*)(_QWORD*, __int64))GameRoutine_1597700)(v22, 1);
  if ((v19_.v19 & 1) == 0) {
    return;
  }
LABEL_26:
  if (v19_.v21 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v19_.v21);
  }
}

__int64 game_menu_1820a00()
{

#pragma clang fp contract(off)
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64** v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  float v13;
  float v14;
  float v15;
  _BOOL8 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 primeEm;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD** v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 i;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
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
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
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
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
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
  __int64 v126;
  __int64 v127;
  struct {
    _QWORD v129[4];
    _QWORD* v130;
  } v129_;
  struct {
    _QWORD v131[4];
    _QWORD* v132;
    char gap408_[8];
    __int64 v133;
  } v131_;
  struct {
    _QWORD v134[4];
    _QWORD* v135;
  } v134_;
  struct {
    _QWORD v136[4];
    _QWORD* v137;
    char gap520_[8];
    __int64 v138;
  } v136_;
  struct {
    _QWORD v139[4];
    _QWORD* v140;
  } v139_;
  struct {
    _QWORD v141[4];
    _QWORD* v142;
    char gap632_[8];
    __int64 v143;
  } v141_;
  struct {
    _QWORD v144[4];
    _QWORD* v145;
  } v144_;
  struct {
    _QWORD v146[4];
    _QWORD* v147;
    char gap744_[8];
    __int64 v148;
  } v146_;
  struct {
    _QWORD v149[4];
    _QWORD* v150;
  } v149_;
  struct {
    _QWORD v151[4];
    _QWORD* v152;
    char gap856_[8];
    __int64 v153;
  } v151_;
  struct {
    _QWORD v154[4];
    _QWORD* v155;
  } v154_;
  struct {
    _QWORD v156[4];
    _QWORD* v157;
    char gap968_[8];
    __int64 v158;
  } v156_;
  struct {
    _QWORD v159[4];
    _QWORD* v160;
  } v159_;
  struct {
    _QWORD v161[4];
    _QWORD* v162;
    char gap1080_[8];
    __int64 v163;
  } v161_;
  struct {
    _QWORD v164[4];
    _QWORD* v165;
  } v164_;
  struct {
    _QWORD v166[4];
    _QWORD* v167;
    char gap1192_[8];
    __int64 v168;
  } v166_;
  struct {
    _QWORD v169[4];
    _QWORD* v170;
  } v169_;
  struct {
    _QWORD v171[4];
    _QWORD* v172;
    char gap1304_[8];
    __int64 v173;
  } v171_;
  struct {
    _QWORD v174[4];
    _QWORD* v175;
  } v174_;
  struct {
    _QWORD v176[4];
    _QWORD* v177;
    char gap1416_[8];
    __int64 v178;
  } v176_;
  struct {
    _QWORD v179[4];
    _QWORD* v180;
  } v179_;
  struct {
    _QWORD v181[4];
    _QWORD* v182;
    char gap1528_[8];
    __int64 v183;
  } v181_;
  struct {
    _QWORD v184[4];
    _QWORD* v185;
  } v184_;
  struct {
    _QWORD v186[4];
    _QWORD* v187;
    char gap1640_[8];
    __int64 v188;
  } v186_;
  struct {
    _QWORD v189[4];
    _QWORD* v190;
  } v189_;
  struct {
    _QWORD v191[4];
    _QWORD* v192;
    char gap1752_[8];
    __int64 v193;
  } v191_;
  struct {
    _QWORD v194[4];
    _QWORD* v195;
  } v194_;
  struct {
    _QWORD v196[4];
    _QWORD* v197;
    char gap1864_[8];
    __int64 v198;
  } v196_;
  struct {
    _QWORD v199[4];
    _QWORD* v200;
  } v199_;
  struct {
    _QWORD v201[4];
    _QWORD* v202;
    char gap1976_[8];
    __int64 v203;
  } v201_;
  struct {
    _QWORD v204[4];
    _QWORD* v205;
  } v204_;
  struct {
    _QWORD v206[4];
    _QWORD* v207;
    char gap2088_[8];
    __int64 v208;
  } v206_;
  struct {
    _QWORD v209[4];
    _QWORD* v210;
  } v209_;
  struct {
    _QWORD v211[4];
    _QWORD* v212;
    char gap2200_[8];
    __int64 v213;
  } v211_;
  struct {
    _QWORD v214[4];
    _QWORD* v215;
  } v214_;
  struct {
    _QWORD v216[4];
    _QWORD* v217;
    char gap2312_[8];
    __int64 v218;
  } v216_;
  struct {
    _QWORD v219[4];
    _QWORD* v220;
  } v219_;
  struct {
    _QWORD v221[4];
    _QWORD* v222;
    char gap2424_[8];
    __int64 v223;
  } v221_;
  struct {
    _QWORD v224[4];
    _QWORD* v225;
  } v224_;
  struct {
    _QWORD v226[4];
    _QWORD* v227;
    char gap2536_[8];
    __int64 v228;
  } v226_;
  struct {
    _QWORD v229[4];
    _QWORD* v230;
  } v229_;
  struct {
    _QWORD v231[4];
    _QWORD* v232;
    char gap2648_[8];
    __int64 v233;
  } v231_;
  struct {
    _QWORD v234[4];
    _QWORD* v235;
  } v234_;
  struct {
    _QWORD v236[4];
    _QWORD* v237;
    char gap2760_[8];
    __int64 v238;
  } v236_;
  struct {
    _QWORD v239[4];
    _QWORD* v240;
  } v239_;
  struct {
    _QWORD v241[4];
    _QWORD* v242;
    char gap2872_[8];
    __int64 v243;
  } v241_;
  struct {
    _QWORD v244[4];
    _QWORD* v245;
  } v244_;
  struct {
    _QWORD v246[4];
    _QWORD* v247;
    char gap2984_[8];
    __int64 v248;
  } v246_;
  struct {
    _QWORD v249[4];
    _QWORD* v250;
  } v249_;
  struct {
    _QWORD v251[4];
    _QWORD* v252;
    char gap3096_[8];
    __int64 v253;
  } v251_;
  struct {
    _QWORD v254[4];
    _QWORD* v255;
  } v254_;
  struct {
    _QWORD v256[4];
    _QWORD* v257;
    char gap3208_[8];
    __int64 v258;
  } v256_;
  struct {
    _QWORD v259[4];
    _QWORD* v260;
  } v259_;
  struct {
    _QWORD v261[4];
    _QWORD* v262;
    char gap3320_[8];
    __int64 v263;
  } v261_;
  struct {
    _QWORD v264[4];
    _QWORD* v265;
  } v264_;
  struct {
    _QWORD v266[4];
    _QWORD* v267;
    char gap3432_[8];
    __int64 v268;
  } v266_;
  struct {
    _QWORD v269[4];
    _QWORD* v270;
  } v269_;
  struct {
    _QWORD v271[4];
    _QWORD* v272;
    char gap3544_[8];
    __int64 v273;
  } v271_;
  struct {
    _QWORD v274[4];
    _QWORD* v275;
  } v274_;
  struct {
    _QWORD v276[4];
    _QWORD* v277;
    char gap3656_[8];
    __int64 v278;
  } v276_;
  struct {
    _QWORD v279[4];
    _QWORD* v280;
  } v279_;
  struct {
    _QWORD v281[4];
    _QWORD* v282;
    char gap3768_[8];
    __int64 v283;
  } v281_;
  struct {
    _QWORD v284[4];
    _QWORD* v285;
  } v284_;
  struct {
    _QWORD v286[4];
    _QWORD* v287;
    char gap3880_[8];
    __int64 v288;
  } v286_;
  struct {
    _QWORD v289[4];
    _QWORD* v290;
  } v289_;
  struct {
    _QWORD v291[4];
    _QWORD* v292;
    char gap3992_[8];
    __int64 v293;
  } v291_;
  struct {
    _QWORD v294[4];
    _QWORD* v295;
  } v294_;
  struct {
    _QWORD v296[4];
    _QWORD* v297;
    char gap4104_[8];
    __int64 v298;
  } v296_;
  struct {
    _QWORD v299[4];
    _QWORD* v300;
  } v299_;
  struct {
    _QWORD v301[4];
    _QWORD* v302;
    char gap4216_[8];
    __int64 v303;
  } v301_;
  struct {
    _QWORD v304[4];
    _QWORD* v305;
  } v304_;
  struct {
    _QWORD v306[4];
    _QWORD* v307;
    char gap4328_[8];
    __int64 v308;
  } v306_;
  struct {
    _QWORD v309[4];
    _QWORD* v310;
  } v309_;
  struct {
    _QWORD v311[4];
    _QWORD* v312;
    char gap4440_[8];
    __int64 v313;
  } v311_;
  struct {
    _QWORD v314[4];
    _QWORD* v315;
  } v314_;
  struct {
    _QWORD v316[4];
    _QWORD* v317;
    char gap4552_[8];
    __int64 v318;
  } v316_;
  struct {
    _QWORD v319[4];
    _QWORD v320[2];
  } v319_;
  struct {
    _QWORD v321[4];
    _QWORD v322[4];
  } v321_;
  _DWORD v323[4];
  _QWORD v324[6];
  struct {
    _QWORD v325[8];
    int v326;
  } v325_;
  _QWORD v327[6];
  struct {
    _QWORD v328[8];
    int v329;
  } v328_;
  _QWORD v330[6];
  struct {
    _QWORD v331[8];
    int v332;
  } v331_;
  _QWORD v333[6];
  struct {
    _QWORD v334[8];
    int v335;
  } v334_;
  _QWORD v336[6];
  struct {
    _QWORD v337[8];
    int v338;
  } v337_;
  _QWORD v339[6];
  struct {
    _QWORD v340[8];
    int v341;
  } v340_;
  _QWORD v342[6];
  struct {
    _QWORD v343[8];
    int v344;
  } v343_;
  _QWORD v345[6];
  struct {
    _QWORD v346[8];
    int v347;
  } v346_;
  _QWORD v348[6];
  struct {
    _QWORD v349[8];
    int v350;
  } v349_;
  _QWORD v351[6];
  struct {
    _QWORD v352[8];
    int v353;
  } v352_;
  _QWORD v354[6];
  struct {
    _QWORD v355[8];
    int v356;
  } v355_;
  _QWORD v357[6];
  struct {
    _QWORD v358[8];
    int v359;
  } v358_;
  _QWORD v360[6];
  struct {
    _QWORD v361[8];
    int v362;
  } v361_;
  _QWORD v363[6];
  struct {
    _QWORD v364[8];
    int v365;
  } v364_;
  _QWORD v366[6];
  struct {
    _QWORD v367[8];
    int v368;
  } v367_;
  _QWORD v369[6];
  struct {
    _QWORD v370[8];
    int v371;
  } v370_;
  _QWORD v372[6];
  struct {
    _QWORD v373[8];
    int v374;
  } v373_;
  _QWORD v375[6];
  struct {
    _QWORD v376[8];
    int v377;
  } v376_;
  _QWORD v378[6];
  struct {
    _QWORD v379[8];
    int v380;
  } v379_;
  _QWORD v381[6];
  struct {
    _QWORD v382[8];
    int v383;
  } v382_;
  _QWORD v384[6];
  struct {
    _QWORD v385[8];
    int v386;
  } v385_;
  _QWORD v387[6];
  struct {
    _QWORD v388[8];
    int v389;
  } v388_;
  _QWORD v390[6];
  struct {
    _QWORD v391[8];
    int v392;
  } v391_;
  _QWORD v393[6];
  struct {
    _QWORD v394[8];
    int v395;
  } v394_;
  _QWORD v396[6];
  struct {
    _QWORD v397[8];
    int v398;
  } v397_;
  _QWORD v399[6];
  struct {
    _QWORD v400[8];
    int v401;
  } v400_;
  _QWORD v402[6];
  struct {
    _QWORD v403[8];
    int v404;
  } v403_;
  _QWORD v405[6];
  struct {
    _QWORD v406[8];
    int v407;
  } v406_;
  _QWORD v408[6];
  struct {
    _QWORD v409[8];
    int v410;
  } v409_;
  _QWORD v411[6];
  struct {
    _QWORD v412[8];
    int v413;
  } v412_;
  _QWORD v414[6];
  struct {
    _QWORD v415[8];
    int v416;
  } v415_;
  _QWORD v417[6];
  struct {
    _QWORD v418[8];
    int v419;
  } v418_;
  _QWORD v420[6];
  struct {
    _QWORD v421[8];
    int v422;
  } v421_;
  _QWORD v423[6];
  struct {
    _QWORD v424[8];
    int v425;
  } v424_;
  _QWORD v426[6];
  struct {
    _QWORD v427[8];
    int v428;
  } v427_;
  _QWORD v429[6];
  struct {
    _QWORD v430[8];
    int v431;
  } v430_;
  _QWORD v432[6];
  struct {
    _QWORD v433[8];
    int v434;
  } v433_;
  _QWORD v435[6];
  struct {
    _QWORD v436[8];
    int v437;
  } v436_;
  _QWORD v438[6];
  _QWORD v439[10];

  v0 = 0;
  v319_.v319[1] = GameRoutine_181b5b0;
  v324[1] = GameRoutine_181b5b0;
  v314_.v314[1] = GameRoutine_181b6b0;
  v327[1] = GameRoutine_181b6b0;
  v319_.v319[0] = game_ProcInst_Unknown04_1820750_ptr;
  v321_.v321[0] = GameData_20df5b8;
  v324[0] = game_ProcInst_Unknown04_1820750_ptr;
  v325_.v325[0] = GameData_20df5b8;
  v314_.v314[0] = game_ProcInst_Unknown04_1820750_ptr;
  v316_.v316[0] = GameData_20df5b8;
  v316_.v316[1] = GameRoutine_181b750;
  v327[0] = game_ProcInst_Unknown04_1820750_ptr;
  v328_.v328[0] = GameData_20df5b8;
  v328_.v328[1] = GameRoutine_181b750;
  v325_.v325[4] = v325_.v325;
  v327[4] = v327;
  v328_.v328[4] = v328_.v328;
  v324[4] = v324;
  v314_.v315 = v314_.v314;
  v325_.v326 = 2;
  v309_.v309[0] = game_ProcInst_Unknown04_1820750_ptr;
  v309_.v310 = v309_.v309;
  v311_.v311[0] = GameData_20df5b8;
  v309_.v309[1] = Signal_Shoot_Destructor_ptr[0];
  v328_.v329 = 3;
  v330[0] = game_ProcInst_Unknown04_1820750_ptr;
  v330[1] = Signal_Shoot_Destructor_ptr[0];
  v331_.v331[0] = GameData_20df5b8;
  v330[4] = v330;
  v311_.v311[1] = Signal_Shoot_Unknown5_ptr[0];
  v331_.v331[4] = v331_.v331;
  v331_.v331[1] = Signal_Shoot_Unknown5_ptr[0];
  v304_.v304[0] = game_ProcInst_Unknown04_1820750_ptr;
  v306_.v306[0] = GameData_20df5b8;
  v304_.v305 = v304_.v304;
  v304_.v304[1] = Signal_Shoot_DeletingDestructor_ptr[0];
  v333[1] = Signal_Shoot_DeletingDestructor_ptr[0];
  v331_.v332 = 4;
  v333[0] = game_ProcInst_Unknown04_1820750_ptr;
  v333[4] = v333;
  v334_.v334[0] = GameData_20df5b8;
  v334_.v334[4] = v334_.v334;
  v306_.v306[1] = Signal_Shoot_Unknown6_ptr[0];
  v334_.v334[1] = Signal_Shoot_Unknown6_ptr[0];
  v299_.v299[0] = game_ProcInst_Unknown04_1820750_ptr;
  v301_.v301[0] = GameData_20df5b8;
  v299_.v300 = v299_.v299;
  v299_.v299[1] = Signal_Shoot_Unknown2_ptr[0];
  v336[1] = Signal_Shoot_Unknown2_ptr[0];
  v334_.v335 = 5;
  v336[4] = v336;
  v336[0] = game_ProcInst_Unknown04_1820750_ptr;
  v337_.v337[0] = GameData_20df5b8;
  v337_.v337[4] = v337_.v337;
  v301_.v301[1] = Signal_Shoot_Unknown7_ptr[0];
  v337_.v337[1] = Signal_Shoot_Unknown7_ptr[0];
  v337_.v338 = 6;
  v346_.v347 = 9;
  v294_.v294[0] = game_ProcInst_Unknown04_1820750_ptr;
  v296_.v296[0] = GameData_20df5b8;
  v339[0] = game_ProcInst_Unknown04_1820750_ptr;
  v340_.v340[0] = GameData_20df5b8;
  v339[4] = v339;
  v348[4] = v348;
  v279_.v280 = v279_.v279;
  v281_.v281[0] = GameData_20df8d8;
  v349_.v349[0] = GameData_20df8d8;
  v294_.v294[1] = Signal_Shoot_Unknown3_ptr[0];
  v339[1] = Signal_Shoot_Unknown3_ptr[0];
  v340_.v340[4] = v340_.v340;
  v340_.v341 = 7;
  v342[4] = v342;
  v343_.v343[4] = v343_.v343;
  v343_.v344 = 8;
  v345[4] = v345;
  v346_.v346[4] = v346_.v346;
  v279_.v279[0] = game_ProcInst_Unknown04_1820750_ptr;
  v348[0] = game_ProcInst_Unknown04_1820750_ptr;
  v349_.v349[4] = v349_.v349;
  v274_.v274[0] = game_ProcInst_Unknown04_1820750_ptr;
  v351[0] = game_ProcInst_Unknown04_1820750_ptr;
  v264_.v264[0] = game_ProcInst_Unknown04_1820750_ptr;
  v357[0] = game_ProcInst_Unknown04_1820750_ptr;
  v351[4] = v351;
  v276_.v276[0] = GameData_20df5b8;
  v352_.v352[0] = GameData_20df5b8;
  v266_.v266[0] = GameData_20df5b8;
  v358_.v358[0] = GameData_20df5b8;
  v251_.v253 = 4;
  v367_.v367[6] = 4;
  v246_.v248 = 4;
  v370_.v370[6] = 4;
  v196_.v198 = 10;
  v186_.v188 = 2;
  v171_.v173 = 2;
  v166_.v168 = 2;
  v191_.v193 = 10;
  v176_.v178 = 5;
  v181_.v183 = 10;
  v161_.v163 = 1;
  v156_.v158 = 1;
  v261_.v263 = 1;
  v361_.v361[6] = 1;
  v256_.v258 = 10;
  v364_.v364[6] = 10;
  v358_.v358[6] = 1;
  v266_.v268 = 1;
  v355_.v355[6] = 1;
  v271_.v273 = 1;
  v358_.v358[4] = v358_.v358;
  v355_.v356 = 12;
  v259_.v260 = v259_.v259;
  v370_.v371 = 17;
  v415_.v416 = 32;
  v409_.v410 = 30;
  v259_.v259[0] = game_ProcInst_Unknown04_1820750_ptr;
  v360[0] = game_ProcInst_Unknown04_1820750_ptr;
  v357[4] = v357;
  v372[4] = v372;
  v417[4] = v417;
  v411[4] = v411;
  v361_.v361[4] = v361_.v361;
  v261_.v261[0] = GameData_20dfad8;
  v361_.v361[0] = GameData_20dfad8;
  v373_.v374 = 18;
  v166_.v166[0] = GameData_20e0dd8;
  v418_.v418[0] = GameData_20e0dd8;
  v412_.v412[4] = v412_.v412;
  v261_.v262 = v261_.v261;
  v254_.v254[0] = game_ProcInst_Unknown04_1820750_ptr;
  v363[0] = game_ProcInst_Unknown04_1820750_ptr;
  v274_.v274[1] = Signal_Shoot_Unknown4_ptr[0];
  v351[1] = Signal_Shoot_Unknown4_ptr[0];
  v254_.v255 = v254_.v254;
  v375[4] = v375;
  v364_.v364[4] = v364_.v364;
  v352_.v352[4] = v352_.v352;
  v376_.v377 = 19;
  v249_.v249[0] = game_ProcInst_Unknown04_1820750_ptr;
  v366[0] = game_ProcInst_Unknown04_1820750_ptr;
  v352_.v353 = 11;
  v378[4] = v378;
  v367_.v367[4] = v367_.v367;
  v354[4] = v354;
  v379_.v380 = 20;
  v418_.v418[6] = 2;
  v412_.v412[6] = 5;
  v244_.v244[0] = game_ProcInst_Unknown04_1820750_ptr;
  v369[0] = game_ProcInst_Unknown04_1820750_ptr;
  v355_.v355[4] = v355_.v355;
  v381[4] = v381;
  v418_.v419 = 33;
  v370_.v370[4] = v370_.v370;
  v264_.v264[1] = GameRoutine_181b7b0;
  v357[1] = GameRoutine_181b7b0;
  v382_.v383 = 21;
  v169_.v169[0] = game_ProcInst_Unknown04_1820750_ptr;
  v414[0] = game_ProcInst_Unknown04_1820750_ptr;
  v415_.v415[4] = v415_.v415;
  v239_.v239[0] = game_ProcInst_Unknown04_1820750_ptr;
  v372[0] = game_ProcInst_Unknown04_1820750_ptr;
  v358_.v359 = 13;
  v384[4] = v384;
  v420[4] = v420;
  v373_.v373[4] = v373_.v373;
  v360[4] = v360;
  v385_.v386 = 22;
  v159_.v159[0] = game_ProcInst_Unknown04_1820750_ptr;
  v420[0] = game_ProcInst_Unknown04_1820750_ptr;
  v234_.v234[0] = game_ProcInst_Unknown04_1820750_ptr;
  v375[0] = game_ProcInst_Unknown04_1820750_ptr;
  v256_.v257 = v256_.v256;
  v256_.v256[0] = GameData_20dfbd8;
  v364_.v364[0] = GameData_20dfbd8;
  v387[4] = v387;
  v376_.v376[4] = v376_.v376;
  v361_.v362 = 14;
  v249_.v250 = v249_.v249;
  v388_.v389 = 23;
  v421_.v421[4] = v421_.v421;
  v415_.v415[6] = 2;
  v229_.v229[0] = game_ProcInst_Unknown04_1820750_ptr;
  v378[0] = game_ProcInst_Unknown04_1820750_ptr;
  v363[4] = v363;
  v390[4] = v390;
  v161_.v161[0] = GameData_20e0ed8;
  v421_.v421[0] = GameData_20e0ed8;
  v164_.v164[0] = game_ProcInst_Unknown04_1820750_ptr;
  v417[0] = game_ProcInst_Unknown04_1820750_ptr;
  v379_.v379[4] = v379_.v379;
  v251_.v252 = v251_.v251;
  v251_.v251[0] = GameData_20dfcd8;
  v367_.v367[0] = GameData_20dfcd8;
  v391_.v392 = 24;
  v418_.v418[4] = v418_.v418;
  v224_.v224[0] = game_ProcInst_Unknown04_1820750_ptr;
  v381[0] = game_ProcInst_Unknown04_1820750_ptr;
  v364_.v365 = 15;
  v244_.v245 = v244_.v244;
  v393[4] = v393;
  v159_.v160 = v159_.v159;
  v382_.v382[4] = v382_.v382;
  v366[4] = v366;
  v394_.v395 = 25;
  v219_.v219[0] = game_ProcInst_Unknown04_1820750_ptr;
  v384[0] = game_ProcInst_Unknown04_1820750_ptr;
  v246_.v246[0] = GameData_20dfdd8;
  v370_.v370[0] = GameData_20dfdd8;
  v385_.v385[4] = v385_.v385;
  v239_.v240 = v239_.v239;
  v396[4] = v396;
  v397_.v398 = 26;
  v246_.v247 = v246_.v246;
  v421_.v421[6] = 1;
  v367_.v368 = 16;
  v421_.v422 = 34;
  v214_.v214[0] = game_ProcInst_Unknown04_1820750_ptr;
  v387[0] = game_ProcInst_Unknown04_1820750_ptr;
  v241_.v241[0] = GameData_20dfed8;
  v373_.v373[0] = GameData_20dfed8;
  v388_.v388[4] = v388_.v388;
  v234_.v235 = v234_.v234;
  v399[4] = v399;
  v400_.v401 = 27;
  v369[4] = v369;
  v423[4] = v423;
  v209_.v209[0] = game_ProcInst_Unknown04_1820750_ptr;
  v390[0] = game_ProcInst_Unknown04_1820750_ptr;
  v236_.v236[0] = GameData_20dffd8;
  v376_.v376[0] = GameData_20dffd8;
  v391_.v391[4] = v391_.v391;
  v229_.v230 = v229_.v229;
  v402[4] = v402;
  v403_.v404 = 28;
  v358_.v358[1] = GameRoutine_181b7d0;
  v266_.v266[1] = GameRoutine_181b7d0;
  v424_.v425 = 35;
  v204_.v204[0] = game_ProcInst_Unknown04_1820750_ptr;
  v393[0] = game_ProcInst_Unknown04_1820750_ptr;
  v231_.v231[0] = GameData_20e00d8;
  v379_.v379[0] = GameData_20e00d8;
  v394_.v394[4] = v394_.v394;
  v224_.v225 = v224_.v224;
  v405[4] = v405;
  v406_.v407 = 29;
  v426[4] = v426;
  v199_.v199[0] = game_ProcInst_Unknown04_1820750_ptr;
  v396[0] = game_ProcInst_Unknown04_1820750_ptr;
  v226_.v226[0] = GameData_20e01d8;
  v382_.v382[0] = GameData_20e01d8;
  v397_.v397[4] = v397_.v397;
  v219_.v220 = v219_.v219;
  v408[4] = v408;
  v354[0] = game_ProcInst_Unknown04_1820750_ptr;
  v269_.v269[0] = game_ProcInst_Unknown04_1820750_ptr;
  v194_.v194[0] = game_ProcInst_Unknown04_1820750_ptr;
  v399[0] = game_ProcInst_Unknown04_1820750_ptr;
  v221_.v221[0] = GameData_20e02d8;
  v385_.v385[0] = GameData_20e02d8;
  v400_.v400[4] = v400_.v400;
  v214_.v215 = v214_.v214;
  v424_.v424[4] = v424_.v424;
  v423[0] = game_ProcInst_Unknown04_1820750_ptr;
  v154_.v154[0] = game_ProcInst_Unknown04_1820750_ptr;
  v216_.v216[0] = GameData_20e03d8;
  v388_.v388[0] = GameData_20e03d8;
  v209_.v210 = v209_.v209;
  v156_.v156[0] = GameData_20e0fd8;
  v424_.v424[0] = GameData_20e0fd8;
  v211_.v211[0] = GameData_20e04d8;
  v391_.v391[0] = GameData_20e04d8;
  v400_.v400[6] = 10;
  v204_.v205 = v204_.v204;
  v189_.v189[0] = game_ProcInst_Unknown04_1820750_ptr;
  v402[0] = game_ProcInst_Unknown04_1820750_ptr;
  v206_.v206[0] = GameData_20e05d8;
  v394_.v394[0] = GameData_20e05d8;
  v403_.v403[4] = v403_.v403;
  v199_.v200 = v199_.v199;
  v424_.v424[6] = 1;
  v264_.v265 = v264_.v264;
  v201_.v201[0] = GameData_20e06d8;
  v397_.v397[0] = GameData_20e06d8;
  v194_.v195 = v194_.v194;
  v266_.v267 = v266_.v266;
  v355_.v355[0] = GameData_20df9d8;
  v271_.v271[0] = GameData_20df9d8;
  v196_.v196[0] = GameData_20e07d8;
  v400_.v400[0] = GameData_20e07d8;
  v403_.v403[6] = 10;
  v189_.v190 = v189_.v189;
  v184_.v184[0] = game_ProcInst_Unknown04_1820750_ptr;
  v405[0] = game_ProcInst_Unknown04_1820750_ptr;
  v191_.v191[0] = GameData_20e08d8;
  v403_.v403[0] = GameData_20e08d8;
  v1 = (unsigned __int64)v186_.v186;
  v406_.v406[4] = v406_.v406;
  v184_.v185 = v184_.v184;
  v186_.v186[0] = GameData_20e09d8;
  v406_.v406[0] = GameData_20e09d8;
  v179_.v180 = v179_.v179;
  v181_.v181[0] = GameData_20e0ad8;
  v409_.v409[0] = GameData_20e0ad8;
  v406_.v406[6] = 2;
  v174_.v175 = v174_.v174;
  v179_.v179[0] = game_ProcInst_Unknown04_1820750_ptr;
  v408[0] = game_ProcInst_Unknown04_1820750_ptr;
  v176_.v176[0] = GameData_20e0bd8;
  v412_.v412[0] = GameData_20e0bd8;
  v409_.v409[4] = v409_.v409;
  v409_.v409[6] = 10;
  v174_.v174[0] = game_ProcInst_Unknown04_1820750_ptr;
  v411[0] = game_ProcInst_Unknown04_1820750_ptr;
  v169_.v170 = v169_.v169;
  v412_.v413 = 31;
  v414[4] = v414;
  v171_.v171[0] = GameData_20e0cd8;
  v415_.v415[0] = GameData_20e0cd8;
  v164_.v165 = v164_.v164;
  v154_.v155 = v154_.v154;
  v269_.v270 = v269_.v269;
  v271_.v272 = v271_.v271;
  v149_.v150 = v149_.v149;
  v149_.v149[0] = game_ProcInst_Unknown04_1820750_ptr;
  v426[0] = game_ProcInst_Unknown04_1820750_ptr;
  v427_.v427[4] = v427_.v427;
  v151_.v153 = 1;
  v151_.v151[0] = GameData_20e10d8;
  v427_.v427[0] = GameData_20e10d8;
  v146_.v148 = 1;
  v141_.v143 = 10;
  v281_.v282 = v281_.v281;
  v345[0] = game_ProcInst_Unknown04_1820750_ptr;
  v284_.v284[0] = game_ProcInst_Unknown04_1820750_ptr;
  v352_.v352[6] = 10;
  v276_.v278 = 10;
  v349_.v350 = 10;
  v349_.v349[6] = 1;
  v281_.v283 = 1;
  v346_.v346[6] = 1;
  v286_.v288 = 1;
  v343_.v343[6] = 1;
  v342[0] = game_ProcInst_Unknown04_1820750_ptr;
  v289_.v289[0] = game_ProcInst_Unknown04_1820750_ptr;
  v291_.v293 = 1;
  v352_.v352[1] = Signal_Shoot_Unknown9_ptr;
  v276_.v276[1] = Signal_Shoot_Unknown9_ptr;
  v427_.v428 = 36;
  v427_.v427[6] = 1;
  v274_.v275 = v274_.v274;
  v429[4] = v429;
  v276_.v277 = v276_.v276;
  v144_.v145 = v144_.v144;
  v430_.v430[4] = v430_.v430;
  v429[0] = game_ProcInst_Unknown04_1820750_ptr;
  v144_.v144[0] = game_ProcInst_Unknown04_1820750_ptr;
  v432[4] = v432;
  v146_.v146[0] = GameData_20e11d8;
  v430_.v430[0] = GameData_20e11d8;
  v284_.v285 = v284_.v284;
  v286_.v287 = v286_.v286;
  v139_.v140 = v139_.v139;
  v430_.v430[6] = 1;
  v433_.v433[4] = v433_.v433;
  v430_.v431 = 37;
  v289_.v290 = v289_.v289;
  v346_.v346[0] = GameData_20df7d8;
  v286_.v286[0] = GameData_20df7d8;
  v291_.v292 = v291_.v291;
  v139_.v139[0] = game_ProcInst_Unknown04_1820750_ptr;
  v432[0] = game_ProcInst_Unknown04_1820750_ptr;
  v343_.v343[0] = GameData_20df6d8;
  v291_.v291[0] = GameData_20df6d8;
  v141_.v141[0] = GameData_20e12d8;
  v433_.v433[0] = GameData_20e12d8;
  v433_.v433[6] = 10;
  v433_.v434 = 38;
  v340_.v340[6] = 10;
  v296_.v298 = 10;
  v337_.v337[6] = 10;
  v136_.v138 = 10;
  v321_.v322[2] = 10;
  v325_.v325[6] = 10;
  v316_.v318 = 10;
  v328_.v328[6] = 10;
  v311_.v313 = 10;
  v331_.v331[6] = 10;
  v306_.v308 = 10;
  v301_.v303 = 10;
  v334_.v334[6] = 10;
  v131_.v133 = 10;
  v435[4] = v435;
  v301_.v302 = v301_.v301;
  v201_.v202 = v201_.v201;
  v191_.v192 = v191_.v191;
  v181_.v182 = v181_.v181;
  v323[0] = 1;
  v306_.v307 = v306_.v306;
  v241_.v242 = v241_.v241;
  v241_.v243 = 1;
  v373_.v373[6] = 1;
  v236_.v237 = v236_.v236;
  v236_.v238 = 1;
  v376_.v376[6] = 1;
  v231_.v232 = v231_.v231;
  v231_.v233 = 1;
  v379_.v379[6] = 1;
  v226_.v227 = v226_.v226;
  v226_.v228 = 1;
  v382_.v382[6] = 1;
  v221_.v222 = v221_.v221;
  v221_.v223 = 1;
  v385_.v385[6] = 1;
  v216_.v217 = v216_.v216;
  v216_.v218 = 1;
  v388_.v388[6] = 1;
  v211_.v212 = v211_.v211;
  v211_.v213 = 1;
  v391_.v391[6] = 1;
  v206_.v207 = v206_.v206;
  v206_.v208 = 1;
  v394_.v394[6] = 1;
  v201_.v203 = 1;
  v397_.v397[6] = 1;
  v196_.v197 = v196_.v196;
  v186_.v187 = v186_.v186;
  v176_.v177 = v176_.v176;
  v171_.v172 = v171_.v171;
  v166_.v167 = v166_.v166;
  v161_.v162 = v161_.v161;
  v156_.v157 = v156_.v156;
  v151_.v152 = v151_.v151;
  v146_.v147 = v146_.v146;
  v141_.v142 = v141_.v141;
  v436_.v437 = 39;
  v294_.v295 = v294_.v294;
  v296_.v297 = v296_.v296;
  GameData_226b228 = 0;
  GameData_226b230 = 0;
  GameData_226b218 = 0;
  GameData_226b220 = 0;
  v438[4] = v438;
  v340_.v340[1] = Signal_Shoot_Unknown8_ptr[0];
  v296_.v296[1] = Signal_Shoot_Unknown8_ptr[0];
  v439[4] = v439;
  v435[0] = game_ProcInst_Unknown04_1820750_ptr;
  v134_.v134[0] = game_ProcInst_Unknown04_1820750_ptr;
  v438[0] = game_ProcInst_Unknown04_1820750_ptr;
  v129_.v129[0] = game_ProcInst_Unknown04_1820750_ptr;
  v436_.v436[4] = v436_.v436;
  v131_.v131[0] = GameData_20e14d8;
  v439[0] = GameData_20e14d8;
  v134_.v135 = v134_.v134;
  v136_.v136[0] = GameData_20e13d8;
  v436_.v436[0] = GameData_20e13d8;
  v136_.v137 = v136_.v136;
  v439[6] = 10;
  GameData_226b238 = 1065353216;
  v436_.v436[6] = 10;
  v129_.v130 = v129_.v129;
  v319_.v320[0] = v319_.v319;
  v325_.v325[1] = GameRoutine_181b650;
  v321_.v321[1] = GameRoutine_181b650;
  v131_.v132 = v131_.v131;
  v321_.v322[0] = v321_.v321;
  v316_.v317 = v316_.v316;
  v311_.v312 = v311_.v311;
  do {
    v2 = GameData_226b220;
    v3 = &v323[v0];
    v4 = v323[v0];
    if (GameData_226b220 != 0) {
      v5 = GameData_226b220 - 1;
      if ((GameData_226b220 & (GameData_226b220 - 1)) != 0) {
        v1 = v4;
        if (GameData_226b220 <= (unsigned __int64)v4) {
          v1 = v4 % (unsigned __int64)GameData_226b220;
        }
      }
      else {
        v1 = v5 & v4;
      }
      v6 = *(__int64***)(GameData_226b218 + 8 * v1);
      if (v6 != nullptr) {
        v7 = *v6;
        if (v7 != nullptr) {
          if ((GameData_226b220 & v5) == 0) {
            while (1) {
              v9 = v7[1];
              if (v9 == v4) {
                if (*((_DWORD*)v7 + 4) == v4) {
                  goto LABEL_107;
                }
              }
              else if ((v9 & v5) != v1) {
                goto LABEL_22;
              }
              v7 = (__int64*)*v7;
              if (v7 == nullptr) {
                goto LABEL_22;
              }
            }
          }
          do {
            v8 = v7[1];
            if (v8 == v4) {
              if (*((_DWORD*)v7 + 4) == v4) {
                goto LABEL_107;
              }
            }
            else {
              if (v8 >= GameData_226b220) {
                v8 %= (unsigned __int64)GameData_226b220;
              }
              if (v8 != v1) {
                break;
              }
            }
            v7 = (__int64*)*v7;
          } while (v7 != nullptr);
        }
      }
    }
  LABEL_22:
    v10 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
    *(_QWORD*)v10 = 0;
    *(_QWORD*)(v10 + 8) = v4;
    *(_DWORD*)(v10 + 16) = v4;
    v11 = (_QWORD*)v3[6];
    if (v11 != nullptr) {
      if (v11 == v3 + 2) {
        *(_QWORD*)(v10 + 64) = v10 + 32;
        (*(void (**)(_QWORD*))(*v11 + 24LL))(v11);
        v12 = (_QWORD*)v3[12];
        if (v12 != nullptr) {
        LABEL_27:
          if (v12 == v3 + 8) {
            *(_QWORD*)(v10 + 112) = v10 + 80;
            (*(void (**)(_QWORD*))(*v12 + 24LL))(v12);
          }
          else {
            *(_QWORD*)(v10 + 112) =
                (*(__int64 (**)(_QWORD*))(*v12 + 16LL))(v12);
          }
          goto LABEL_32;
        }
      }
      else {
        *(_QWORD*)(v10 + 64) = (*(__int64 (**)(_QWORD*))(*v11 + 16LL))(v11);
        v12 = (_QWORD*)v3[12];
        if (v12 != nullptr) {
          goto LABEL_27;
        }
      }
    }
    else {
      *(_QWORD*)(v10 + 64) = 0;
      v12 = (_QWORD*)v3[12];
      if (v12 != nullptr) {
        goto LABEL_27;
      }
    }
    *(_QWORD*)(v10 + 112) = 0;
  LABEL_32:
    v13 = *(float*)&GameData_226b238;
    *(_QWORD*)(v10 + 128) = v3[14];
    v14 = (float)(unsigned __int64)(GameData_226b230 + 1);
    if (v2 != 0 && (float)(v13 * (float)v2) >= v14) {
      goto LABEL_98;
    }
    v15 = v14 / v13;
    v16 = (v2 & (v2 - 1)) != 0;
    if (v2 < 3) {
      v16 = true;
    }
    v17 = v16 | (2 * v2);
    v18 = vcvtps_u64_f32(v15);
    if (v17 <= v18) {
      primeEm = v18;
    }
    else {
      primeEm = v17;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime_alt1(primeEm);
    }
    v20 = GameData_226b220;
    if (primeEm <= GameData_226b220) {
      if (primeEm >= GameData_226b220) {
        goto LABEL_93;
      }
      v26 = vcvtps_u64_f32((float)(unsigned __int64)GameData_226b230 /
                           *(float*)&GameData_226b238);
      if ((unsigned __int64)GameData_226b220 < 3 ||
          (GameData_226b220 & (GameData_226b220 - 1)) != 0) {
        v26 = std___1___next_prime_alt1(v26);
      }
      else {
        v27 = 1LL << -(char)__clz(v26 - 1);
        if (v26 >= 2) {
          v26 = v27;
        }
      }
      if (primeEm <= v26) {
        primeEm = v26;
      }
      if (primeEm >= v20) {
        goto LABEL_93;
      }
      if (primeEm == 0) {
        v39 = GameData_226b218;
        GameData_226b218 = 0;
        if (v39 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v39);
        }
        GameData_226b220 = 0;
        goto LABEL_93;
      }
    }
    v21 = fw_memory_g_heap_manager_ptr;
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v22 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * primeEm, 16, 0);
    v23 = GameData_226b218;
    GameData_226b218 = v22;
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v21 + v24, v23);
    }
    GameData_226b220 = primeEm;
    if (primeEm >= 8) {
      v25 = 0;
      do {
        *(_QWORD*)(GameData_226b218 + 8 * v25) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 8) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 16) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 24) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 32) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 40) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 48) = 0;
        v28 = GameData_226b218 + 8 * v25;
        v25 += 8;
        *(_QWORD*)(v28 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v25);
    }
    else {
      v25 = 0;
    }
    v29 = primeEm & 7;
    if ((primeEm & 7) != 0) {
      v30 = 8 * v25;
      do {
        --v29;
        *(_QWORD*)(GameData_226b218 + v30) = 0;
        v30 += 8;
      } while (v29 != 0);
    }
    v31 = (_QWORD**)GameData_226b228;
    if (GameData_226b228 != 0) {
      v32 = *(_QWORD*)(GameData_226b228 + 8);
      v33 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v32 >= primeEm) {
          v32 %= primeEm;
        }
        *(_QWORD*)(GameData_226b218 + 8 * v32) = &GameData_226b228;
        v34 = *v31;
        if (*v31 == nullptr) {
          goto LABEL_93;
        }
        while (1) {
          v35 = v34[1];
          if (v35 >= primeEm) {
            v35 %= primeEm;
          }
          if (v35 != v32) {
            if (*(_QWORD*)(GameData_226b218 + 8 * v35) == 0) {
              *(_QWORD*)(GameData_226b218 + 8 * v35) = v31;
              goto LABEL_70;
            }
            *v31 = (_QWORD*)*v34;
            *v34 = **(_QWORD**)(GameData_226b218 + 8 * v35);
            **(_QWORD**)(GameData_226b218 + 8 * v35) = v34;
            v34 = v31;
          }
          v35 = v32;
        LABEL_70:
          v31 = (_QWORD**)v34;
          v34 = (_QWORD*)*v34;
          v32 = v35;
          if (v34 == nullptr) {
            goto LABEL_93;
          }
        }
      }
      v36 = v32 & v33;
      *(_QWORD*)(GameData_226b218 + 8 * v36) = &GameData_226b228;
      while (1) {
        v37 = *v31;
        if (*v31 == nullptr) {
          break;
        }
        v38 = v37[1] & v33;
        if (v38 == v36) {
          v31 = (_QWORD**)*v31;
        }
        else if (*(_QWORD*)(GameData_226b218 + 8 * v38) != 0) {
          *v31 = (_QWORD*)*v37;
          *v37 = **(_QWORD**)(GameData_226b218 + 8 * v38);
          **(_QWORD**)(GameData_226b218 + 8 * v38) = v37;
        }
        else {
          *(_QWORD*)(GameData_226b218 + 8 * v38) = v31;
          v31 = (_QWORD**)v37;
          v36 = v38;
        }
      }
    }
  LABEL_93:
    v2 = GameData_226b220;
    if ((v2 & (v2 - 1)) != 0) {
      if (GameData_226b220 <= (unsigned __int64)v4) {
        v1 = v4 % (unsigned __int64)GameData_226b220;
      }
      else {
        v1 = v4;
      }
    }
    else {
      v1 = (GameData_226b220 - 1) & v4;
    }
  LABEL_98:
    v41 = GameData_226b218;
    v42 = *(__int64**)(GameData_226b218 + 8 * v1);
    if (v42 != nullptr) {
      *(_QWORD*)v10 = *v42;
      *v42 = v10;
    }
    else {
      v43 = GameData_226b228;
      GameData_226b228 = v10;
      *(_QWORD*)v10 = v43;
      *(_QWORD*)(v41 + 8 * v1) = &GameData_226b228;
      if (*(_QWORD*)v10 != 0) {
        v44 = *(_QWORD*)(*(_QWORD*)v10 + 8LL);
        if ((v2 & (v2 - 1)) != 0) {
          if (v44 >= v2) {
            v44 %= v2;
          }
        }
        else {
          v44 &= v2 - 1;
        }
        *(_QWORD*)(GameData_226b218 + 8 * v44) = v10;
      }
    }
    ++GameData_226b230;
  LABEL_107:
    v0 += 32;
  } while (v0 != 1248);
  for (i = 624; i != 0; i -= 16) {
    v47 = (_QWORD*)v321_.v322[i];
    if (&v321_.v321[i] == v47) {
      v48 = 32;
    }
    else {
      if (v47 == nullptr) {
        goto LABEL_117;
      }
      v48 = 40;
    }
    (*(void (**)(__int64))(*v47 + v48))((__int64)v47);
  LABEL_117:
    v49 = (_QWORD*)v319_.v320[i];
    if (&v319_.v319[i] == v49) {
      v46 = 32;
    LABEL_110:
      (*(void (**)(__int64))(*v49 + v46))((__int64)v49);
      continue;
    }
    if (v49 != nullptr) {
      v46 = 40;
      goto LABEL_110;
    }
  }
  if (v131_.v132 == v131_.v131) {
    v50 = 32;
  LABEL_124:
    (*(void (**)(__int64))(*v131_.v132 + v50))((__int64)v131_.v132);
  }
  else if (v131_.v132 != nullptr) {
    v50 = 40;
    goto LABEL_124;
  }
  if (v129_.v130 == v129_.v129) {
    v51 = 32;
  LABEL_129:
    (*(void (**)(__int64))(*v129_.v130 + v51))((__int64)v129_.v130);
  }
  else if (v129_.v130 != nullptr) {
    v51 = 40;
    goto LABEL_129;
  }
  if (v136_.v137 == v136_.v136) {
    v52 = 32;
  LABEL_134:
    (*(void (**)(__int64))(*v136_.v137 + v52))((__int64)v136_.v137);
  }
  else if (v136_.v137 != nullptr) {
    v52 = 40;
    goto LABEL_134;
  }
  if (v134_.v135 == v134_.v134) {
    v53 = 32;
  LABEL_139:
    (*(void (**)(__int64))(*v134_.v135 + v53))((__int64)v134_.v135);
  }
  else if (v134_.v135 != nullptr) {
    v53 = 40;
    goto LABEL_139;
  }
  if (v141_.v142 == v141_.v141) {
    v54 = 32;
  LABEL_144:
    (*(void (**)(__int64))(*v141_.v142 + v54))((__int64)v141_.v142);
  }
  else if (v141_.v142 != nullptr) {
    v54 = 40;
    goto LABEL_144;
  }
  if (v139_.v140 == v139_.v139) {
    v55 = 32;
  LABEL_149:
    (*(void (**)(__int64))(*v139_.v140 + v55))((__int64)v139_.v140);
  }
  else if (v139_.v140 != nullptr) {
    v55 = 40;
    goto LABEL_149;
  }
  if (v146_.v147 == v146_.v146) {
    v56 = 32;
  LABEL_154:
    (*(void (**)(__int64))(*v146_.v147 + v56))((__int64)v146_.v147);
  }
  else if (v146_.v147 != nullptr) {
    v56 = 40;
    goto LABEL_154;
  }
  if (v144_.v145 == v144_.v144) {
    v57 = 32;
  LABEL_159:
    (*(void (**)(__int64))(*v144_.v145 + v57))((__int64)v144_.v145);
  }
  else if (v144_.v145 != nullptr) {
    v57 = 40;
    goto LABEL_159;
  }
  if (v151_.v152 == v151_.v151) {
    v58 = 32;
  LABEL_164:
    (*(void (**)(__int64))(*v151_.v152 + v58))((__int64)v151_.v152);
  }
  else if (v151_.v152 != nullptr) {
    v58 = 40;
    goto LABEL_164;
  }
  if (v149_.v150 == v149_.v149) {
    v59 = 32;
  LABEL_169:
    (*(void (**)(__int64))(*v149_.v150 + v59))((__int64)v149_.v150);
  }
  else if (v149_.v150 != nullptr) {
    v59 = 40;
    goto LABEL_169;
  }
  if (v156_.v157 == v156_.v156) {
    v60 = 32;
  LABEL_174:
    (*(void (**)(__int64))(*v156_.v157 + v60))((__int64)v156_.v157);
  }
  else if (v156_.v157 != nullptr) {
    v60 = 40;
    goto LABEL_174;
  }
  if (v154_.v155 == v154_.v154) {
    v61 = 32;
  LABEL_179:
    (*(void (**)(__int64))(*v154_.v155 + v61))((__int64)v154_.v155);
  }
  else if (v154_.v155 != nullptr) {
    v61 = 40;
    goto LABEL_179;
  }
  if (v161_.v162 == v161_.v161) {
    v62 = 32;
  LABEL_184:
    (*(void (**)(__int64))(*v161_.v162 + v62))((__int64)v161_.v162);
  }
  else if (v161_.v162 != nullptr) {
    v62 = 40;
    goto LABEL_184;
  }
  if (v159_.v160 == v159_.v159) {
    v63 = 32;
  LABEL_189:
    (*(void (**)(__int64))(*v159_.v160 + v63))((__int64)v159_.v160);
  }
  else if (v159_.v160 != nullptr) {
    v63 = 40;
    goto LABEL_189;
  }
  if (v166_.v167 == v166_.v166) {
    v64 = 32;
  LABEL_194:
    (*(void (**)(__int64))(*v166_.v167 + v64))((__int64)v166_.v167);
  }
  else if (v166_.v167 != nullptr) {
    v64 = 40;
    goto LABEL_194;
  }
  if (v164_.v165 == v164_.v164) {
    v65 = 32;
  LABEL_199:
    (*(void (**)(__int64))(*v164_.v165 + v65))((__int64)v164_.v165);
  }
  else if (v164_.v165 != nullptr) {
    v65 = 40;
    goto LABEL_199;
  }
  if (v171_.v172 == v171_.v171) {
    v66 = 32;
  LABEL_204:
    (*(void (**)(__int64))(*v171_.v172 + v66))((__int64)v171_.v172);
  }
  else if (v171_.v172 != nullptr) {
    v66 = 40;
    goto LABEL_204;
  }
  if (v169_.v170 == v169_.v169) {
    v67 = 32;
  LABEL_209:
    (*(void (**)(__int64))(*v169_.v170 + v67))((__int64)v169_.v170);
  }
  else if (v169_.v170 != nullptr) {
    v67 = 40;
    goto LABEL_209;
  }
  if (v176_.v177 == v176_.v176) {
    v68 = 32;
  LABEL_214:
    (*(void (**)(__int64))(*v176_.v177 + v68))((__int64)v176_.v177);
  }
  else if (v176_.v177 != nullptr) {
    v68 = 40;
    goto LABEL_214;
  }
  if (v174_.v175 == v174_.v174) {
    v69 = 32;
  LABEL_219:
    (*(void (**)(__int64))(*v174_.v175 + v69))((__int64)v174_.v175);
  }
  else if (v174_.v175 != nullptr) {
    v69 = 40;
    goto LABEL_219;
  }
  if (v181_.v182 == v181_.v181) {
    v70 = 32;
  LABEL_224:
    (*(void (**)(__int64))(*v181_.v182 + v70))((__int64)v181_.v182);
  }
  else if (v181_.v182 != nullptr) {
    v70 = 40;
    goto LABEL_224;
  }
  if (v179_.v180 == v179_.v179) {
    v71 = 32;
  LABEL_229:
    (*(void (**)(__int64))(*v179_.v180 + v71))((__int64)v179_.v180);
  }
  else if (v179_.v180 != nullptr) {
    v71 = 40;
    goto LABEL_229;
  }
  if (v186_.v187 == v186_.v186) {
    v72 = 32;
  LABEL_234:
    (*(void (**)(__int64))(*v186_.v187 + v72))((__int64)v186_.v187);
  }
  else if (v186_.v187 != nullptr) {
    v72 = 40;
    goto LABEL_234;
  }
  if (v184_.v185 == v184_.v184) {
    v73 = 32;
  LABEL_239:
    (*(void (**)(__int64))(*v184_.v185 + v73))((__int64)v184_.v185);
  }
  else if (v184_.v185 != nullptr) {
    v73 = 40;
    goto LABEL_239;
  }
  if (v191_.v192 == v191_.v191) {
    v74 = 32;
  LABEL_244:
    (*(void (**)(__int64))(*v191_.v192 + v74))((__int64)v191_.v192);
  }
  else if (v191_.v192 != nullptr) {
    v74 = 40;
    goto LABEL_244;
  }
  if (v189_.v190 == v189_.v189) {
    v75 = 32;
  LABEL_249:
    (*(void (**)(__int64))(*v189_.v190 + v75))((__int64)v189_.v190);
  }
  else if (v189_.v190 != nullptr) {
    v75 = 40;
    goto LABEL_249;
  }
  if (v196_.v197 == v196_.v196) {
    v76 = 32;
  LABEL_254:
    (*(void (**)(__int64))(*v196_.v197 + v76))((__int64)v196_.v197);
  }
  else if (v196_.v197 != nullptr) {
    v76 = 40;
    goto LABEL_254;
  }
  if (v194_.v195 == v194_.v194) {
    v77 = 32;
  LABEL_259:
    (*(void (**)(__int64))(*v194_.v195 + v77))((__int64)v194_.v195);
  }
  else if (v194_.v195 != nullptr) {
    v77 = 40;
    goto LABEL_259;
  }
  if (v201_.v202 == v201_.v201) {
    v78 = 32;
  LABEL_264:
    (*(void (**)(__int64))(*v201_.v202 + v78))((__int64)v201_.v202);
  }
  else if (v201_.v202 != nullptr) {
    v78 = 40;
    goto LABEL_264;
  }
  if (v199_.v200 == v199_.v199) {
    v79 = 32;
  LABEL_269:
    (*(void (**)(__int64))(*v199_.v200 + v79))((__int64)v199_.v200);
  }
  else if (v199_.v200 != nullptr) {
    v79 = 40;
    goto LABEL_269;
  }
  if (v206_.v207 == v206_.v206) {
    v80 = 32;
  LABEL_274:
    (*(void (**)(__int64))(*v206_.v207 + v80))((__int64)v206_.v207);
  }
  else if (v206_.v207 != nullptr) {
    v80 = 40;
    goto LABEL_274;
  }
  if (v204_.v205 == v204_.v204) {
    v81 = 32;
  LABEL_279:
    (*(void (**)(__int64))(*v204_.v205 + v81))((__int64)v204_.v205);
  }
  else if (v204_.v205 != nullptr) {
    v81 = 40;
    goto LABEL_279;
  }
  if (v211_.v212 == v211_.v211) {
    v82 = 32;
  LABEL_284:
    (*(void (**)(__int64))(*v211_.v212 + v82))((__int64)v211_.v212);
  }
  else if (v211_.v212 != nullptr) {
    v82 = 40;
    goto LABEL_284;
  }
  if (v209_.v210 == v209_.v209) {
    v83 = 32;
  LABEL_289:
    (*(void (**)(__int64))(*v209_.v210 + v83))((__int64)v209_.v210);
  }
  else if (v209_.v210 != nullptr) {
    v83 = 40;
    goto LABEL_289;
  }
  if (v216_.v217 == v216_.v216) {
    v84 = 32;
  LABEL_294:
    (*(void (**)(__int64))(*v216_.v217 + v84))((__int64)v216_.v217);
  }
  else if (v216_.v217 != nullptr) {
    v84 = 40;
    goto LABEL_294;
  }
  if (v214_.v215 == v214_.v214) {
    v85 = 32;
  LABEL_299:
    (*(void (**)(__int64))(*v214_.v215 + v85))((__int64)v214_.v215);
  }
  else if (v214_.v215 != nullptr) {
    v85 = 40;
    goto LABEL_299;
  }
  if (v221_.v222 == v221_.v221) {
    v86 = 32;
  LABEL_304:
    (*(void (**)(__int64))(*v221_.v222 + v86))((__int64)v221_.v222);
  }
  else if (v221_.v222 != nullptr) {
    v86 = 40;
    goto LABEL_304;
  }
  if (v219_.v220 == v219_.v219) {
    v87 = 32;
  LABEL_309:
    (*(void (**)(__int64))(*v219_.v220 + v87))((__int64)v219_.v220);
  }
  else if (v219_.v220 != nullptr) {
    v87 = 40;
    goto LABEL_309;
  }
  if (v226_.v227 == v226_.v226) {
    v88 = 32;
  LABEL_314:
    (*(void (**)(__int64))(*v226_.v227 + v88))((__int64)v226_.v227);
  }
  else if (v226_.v227 != nullptr) {
    v88 = 40;
    goto LABEL_314;
  }
  if (v224_.v225 == v224_.v224) {
    v89 = 32;
  LABEL_319:
    (*(void (**)(__int64))(*v224_.v225 + v89))((__int64)v224_.v225);
  }
  else if (v224_.v225 != nullptr) {
    v89 = 40;
    goto LABEL_319;
  }
  if (v231_.v232 == v231_.v231) {
    v90 = 32;
  LABEL_324:
    (*(void (**)(__int64))(*v231_.v232 + v90))((__int64)v231_.v232);
  }
  else if (v231_.v232 != nullptr) {
    v90 = 40;
    goto LABEL_324;
  }
  if (v229_.v230 == v229_.v229) {
    v91 = 32;
  LABEL_329:
    (*(void (**)(__int64))(*v229_.v230 + v91))((__int64)v229_.v230);
  }
  else if (v229_.v230 != nullptr) {
    v91 = 40;
    goto LABEL_329;
  }
  if (v236_.v237 == v236_.v236) {
    v92 = 32;
  LABEL_334:
    (*(void (**)(__int64))(*v236_.v237 + v92))((__int64)v236_.v237);
  }
  else if (v236_.v237 != nullptr) {
    v92 = 40;
    goto LABEL_334;
  }
  if (v234_.v235 == v234_.v234) {
    v93 = 32;
  LABEL_339:
    (*(void (**)(__int64))(*v234_.v235 + v93))((__int64)v234_.v235);
  }
  else if (v234_.v235 != nullptr) {
    v93 = 40;
    goto LABEL_339;
  }
  if (v241_.v242 == v241_.v241) {
    v94 = 32;
  LABEL_344:
    (*(void (**)(__int64))(*v241_.v242 + v94))((__int64)v241_.v242);
  }
  else if (v241_.v242 != nullptr) {
    v94 = 40;
    goto LABEL_344;
  }
  if (v239_.v240 == v239_.v239) {
    v95 = 32;
  LABEL_349:
    (*(void (**)(__int64))(*v239_.v240 + v95))((__int64)v239_.v240);
  }
  else if (v239_.v240 != nullptr) {
    v95 = 40;
    goto LABEL_349;
  }
  if (v246_.v247 == v246_.v246) {
    v96 = 32;
  LABEL_354:
    (*(void (**)(__int64))(*v246_.v247 + v96))((__int64)v246_.v247);
  }
  else if (v246_.v247 != nullptr) {
    v96 = 40;
    goto LABEL_354;
  }
  if (v244_.v245 == v244_.v244) {
    v97 = 32;
  LABEL_359:
    (*(void (**)(__int64))(*v244_.v245 + v97))((__int64)v244_.v245);
  }
  else if (v244_.v245 != nullptr) {
    v97 = 40;
    goto LABEL_359;
  }
  if (v251_.v252 == v251_.v251) {
    v98 = 32;
  LABEL_364:
    (*(void (**)(__int64))(*v251_.v252 + v98))((__int64)v251_.v252);
  }
  else if (v251_.v252 != nullptr) {
    v98 = 40;
    goto LABEL_364;
  }
  if (v249_.v250 == v249_.v249) {
    v99 = 32;
  LABEL_369:
    (*(void (**)(__int64))(*v249_.v250 + v99))((__int64)v249_.v250);
  }
  else if (v249_.v250 != nullptr) {
    v99 = 40;
    goto LABEL_369;
  }
  if (v256_.v257 == v256_.v256) {
    v100 = 32;
  LABEL_374:
    (*(void (**)(__int64))(*v256_.v257 + v100))((__int64)v256_.v257);
  }
  else if (v256_.v257 != nullptr) {
    v100 = 40;
    goto LABEL_374;
  }
  if (v254_.v255 == v254_.v254) {
    v101 = 32;
  LABEL_379:
    (*(void (**)(__int64))(*v254_.v255 + v101))((__int64)v254_.v255);
  }
  else if (v254_.v255 != nullptr) {
    v101 = 40;
    goto LABEL_379;
  }
  if (v261_.v262 == v261_.v261) {
    v102 = 32;
  LABEL_384:
    (*(void (**)(__int64))(*v261_.v262 + v102))((__int64)v261_.v262);
  }
  else if (v261_.v262 != nullptr) {
    v102 = 40;
    goto LABEL_384;
  }
  if (v259_.v260 == v259_.v259) {
    v103 = 32;
  LABEL_389:
    (*(void (**)(__int64))(*v259_.v260 + v103))((__int64)v259_.v260);
  }
  else if (v259_.v260 != nullptr) {
    v103 = 40;
    goto LABEL_389;
  }
  if (v266_.v267 == v266_.v266) {
    v104 = 32;
  LABEL_394:
    (*(void (**)(__int64))(*v266_.v267 + v104))((__int64)v266_.v267);
  }
  else if (v266_.v267 != nullptr) {
    v104 = 40;
    goto LABEL_394;
  }
  if (v264_.v265 == v264_.v264) {
    v105 = 32;
  LABEL_399:
    (*(void (**)(__int64))(*v264_.v265 + v105))((__int64)v264_.v265);
  }
  else if (v264_.v265 != nullptr) {
    v105 = 40;
    goto LABEL_399;
  }
  if (v271_.v272 == v271_.v271) {
    v106 = 32;
  LABEL_404:
    (*(void (**)(__int64))(*v271_.v272 + v106))((__int64)v271_.v272);
  }
  else if (v271_.v272 != nullptr) {
    v106 = 40;
    goto LABEL_404;
  }
  if (v269_.v270 == v269_.v269) {
    v107 = 32;
  LABEL_409:
    (*(void (**)(__int64))(*v269_.v270 + v107))((__int64)v269_.v270);
  }
  else if (v269_.v270 != nullptr) {
    v107 = 40;
    goto LABEL_409;
  }
  if (v276_.v277 == v276_.v276) {
    v108 = 32;
  LABEL_414:
    (*(void (**)(__int64))(*v276_.v277 + v108))((__int64)v276_.v277);
  }
  else if (v276_.v277 != nullptr) {
    v108 = 40;
    goto LABEL_414;
  }
  if (v274_.v275 == v274_.v274) {
    v109 = 32;
  LABEL_419:
    (*(void (**)(__int64))(*v274_.v275 + v109))((__int64)v274_.v275);
  }
  else if (v274_.v275 != nullptr) {
    v109 = 40;
    goto LABEL_419;
  }
  if (v281_.v282 == v281_.v281) {
    v110 = 32;
  LABEL_424:
    (*(void (**)(__int64))(*v281_.v282 + v110))((__int64)v281_.v282);
  }
  else if (v281_.v282 != nullptr) {
    v110 = 40;
    goto LABEL_424;
  }
  if (v279_.v280 == v279_.v279) {
    v111 = 32;
  LABEL_429:
    (*(void (**)(__int64))(*v279_.v280 + v111))((__int64)v279_.v280);
  }
  else if (v279_.v280 != nullptr) {
    v111 = 40;
    goto LABEL_429;
  }
  if (v286_.v287 == v286_.v286) {
    v112 = 32;
  LABEL_434:
    (*(void (**)(__int64))(*v286_.v287 + v112))((__int64)v286_.v287);
  }
  else if (v286_.v287 != nullptr) {
    v112 = 40;
    goto LABEL_434;
  }
  if (v284_.v285 == v284_.v284) {
    v113 = 32;
  LABEL_439:
    (*(void (**)(__int64))(*v284_.v285 + v113))((__int64)v284_.v285);
  }
  else if (v284_.v285 != nullptr) {
    v113 = 40;
    goto LABEL_439;
  }
  if (v291_.v292 == v291_.v291) {
    v114 = 32;
  LABEL_444:
    (*(void (**)(__int64))(*v291_.v292 + v114))((__int64)v291_.v292);
  }
  else if (v291_.v292 != nullptr) {
    v114 = 40;
    goto LABEL_444;
  }
  if (v289_.v290 == v289_.v289) {
    v115 = 32;
  LABEL_449:
    (*(void (**)(__int64))(*v289_.v290 + v115))((__int64)v289_.v290);
  }
  else if (v289_.v290 != nullptr) {
    v115 = 40;
    goto LABEL_449;
  }
  if (v296_.v297 == v296_.v296) {
    v116 = 32;
  LABEL_454:
    (*(void (**)(__int64))(*v296_.v297 + v116))((__int64)v296_.v297);
  }
  else if (v296_.v297 != nullptr) {
    v116 = 40;
    goto LABEL_454;
  }
  if (v294_.v295 == v294_.v294) {
    v117 = 32;
  LABEL_459:
    (*(void (**)(__int64))(*v294_.v295 + v117))((__int64)v294_.v295);
  }
  else if (v294_.v295 != nullptr) {
    v117 = 40;
    goto LABEL_459;
  }
  if (v301_.v302 == v301_.v301) {
    v118 = 32;
  LABEL_464:
    (*(void (**)(__int64))(*v301_.v302 + v118))((__int64)v301_.v302);
  }
  else if (v301_.v302 != nullptr) {
    v118 = 40;
    goto LABEL_464;
  }
  if (v299_.v300 == v299_.v299) {
    v119 = 32;
  LABEL_469:
    (*(void (**)(__int64))(*v299_.v300 + v119))((__int64)v299_.v300);
  }
  else if (v299_.v300 != nullptr) {
    v119 = 40;
    goto LABEL_469;
  }
  if (v306_.v307 == v306_.v306) {
    v120 = 32;
  LABEL_474:
    (*(void (**)(__int64))(*v306_.v307 + v120))((__int64)v306_.v307);
  }
  else if (v306_.v307 != nullptr) {
    v120 = 40;
    goto LABEL_474;
  }
  if (v304_.v305 == v304_.v304) {
    v121 = 32;
  LABEL_479:
    (*(void (**)(__int64))(*v304_.v305 + v121))((__int64)v304_.v305);
  }
  else if (v304_.v305 != nullptr) {
    v121 = 40;
    goto LABEL_479;
  }
  if (v311_.v312 == v311_.v311) {
    v122 = 32;
  LABEL_484:
    (*(void (**)(__int64))(*v311_.v312 + v122))((__int64)v311_.v312);
  }
  else if (v311_.v312 != nullptr) {
    v122 = 40;
    goto LABEL_484;
  }
  if (v309_.v310 == v309_.v309) {
    v123 = 32;
  LABEL_489:
    (*(void (**)(__int64))(*v309_.v310 + v123))((__int64)v309_.v310);
  }
  else if (v309_.v310 != nullptr) {
    v123 = 40;
    goto LABEL_489;
  }
  if (v316_.v317 == v316_.v316) {
    v124 = 32;
  LABEL_494:
    (*(void (**)(__int64))(*v316_.v317 + v124))((__int64)v316_.v317);
  }
  else if (v316_.v317 != nullptr) {
    v124 = 40;
    goto LABEL_494;
  }
  if (v314_.v315 == v314_.v314) {
    v125 = 32;
  LABEL_499:
    (*(void (**)(__int64))(*v314_.v315 + v125))((__int64)v314_.v315);
  }
  else if (v314_.v315 != nullptr) {
    v125 = 40;
    goto LABEL_499;
  }
  if ((_QWORD*)v321_.v322[0] == v321_.v321) {
    v126 = 32;
  LABEL_504:
    (*(void (**)(__int64))(*(_QWORD*)v321_.v322[0] + v126))(
        (__int64)v321_.v322[0]);
  }
  else if (v321_.v322[0] != 0) {
    v126 = 40;
    goto LABEL_504;
  }
  if ((_QWORD*)v319_.v320[0] == v319_.v319) {
    v127 = 32;
  LABEL_509:
    (*(void (**)(__int64))(*(_QWORD*)v319_.v320[0] + v127))(
        (__int64)v319_.v320[0]);
  }
  else if (v319_.v320[0] != 0) {
    v127 = 40;
    goto LABEL_509;
  }
  return GameRoutine_2b0_alt1();
}

__int64 game_menu_1860c20(__int64 a1)
{
  const char* v1;
  __int64 v3;
  _BYTE v4[200];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1) & 1) != 0) {
    v1 = "SE_SYS_Remove";
  }
  else {
    v1 = "SE_SYS_Equip";
  }
  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(&v3), v1, v1, v4, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v4);
}

void game_menu_1a06650(_QWORD* a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    int v19;
  } v18_;
  _QWORD** v20;
  struct {
    _QWORD* v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    _BYTE* v25;
    int v26;
    int v27;
    int v28;
  } v21_;

  if (a2 != 0) {
    v5 = *(unsigned __int16*)(a2 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v5) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v6 = game_map_MapRandom_instance__ptr[0];
      v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v9 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v6 + 1) = v7;
      v10 = (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v8;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v10;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v11 = (unsigned __int64)((16 * ((_WORD)v10 -
                                      1000 * (unsigned __int16)((v10 &
                                                                 0x7FFFFFFFu) /
                                                                0x3E8)) +
                                16) &
                                   0x3FF0 |
                               1u)
            << 32;
    }
    else {
      v11 = 0x100000000LL;
    }
  }
  else {
    v11 = 0;
    LODWORD(v5) = 0;
  }
  v15 = 8;
  v16 = v11 | (unsigned int)v5;
  if ((_BYTE)GameData_21caa2c != 0) {
    v12 = GameData_21caa2c;
  }
  else {
    v12 = 0;
  }
  v17 = v12;
  WORD1(v18_.v18) = 0;
  HIDWORD(v18_.v18) = 0;
  v21_.v22 = 0;
  v21_.v23 = 0;
  v21_.v24 = 0;
  v21_.v25 = nullptr;
  v20 = &v21_.v21;
  v21_.v21 = nullptr;
  GameRoutine_930b90((__int64)&v18_.v18, (__int64)GameData_212c8b0[0]);
  v21_.v26 = 0;
  v21_.v27 = a3;
  v21_.v28 = -1;
  ObeliskDestinyMenuItem_1a06060(a1, &v15, 0);
  v18_.v19 = 0;
  v18_.v18 = 0;
  if ((v21_.v23 & 1) != 0) {
    *v21_.v25 = 0;
    v21_.v24 = 0;
  }
  else {
    LOWORD(v21_.v23) = 0;
  }
  GameRoutine_6e3b50_alt2((__int64)&v20, v21_.v21);
  v21_.v21 = nullptr;
  v21_.v22 = 0;
  v20 = &v21_.v21;
  if ((v21_.v23 & 1) != 0) {
    v13 = v21_.v25;
    if (v21_.v25 != nullptr) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v21_.v25);
      v13 = v21_.v21;
    }
  }
  else {
    v13 = nullptr;
  }
  GameRoutine_6e3b50_alt2((__int64)&v20, v13);
}

void game_menu_1a06840(_QWORD* a1, __int64 a2, int a3, int a4)
{
  __int64 v7;
  __int64* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    int v21;
  } v20_;
  _QWORD** v22;
  struct {
    _QWORD* v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    _BYTE* v27;
    int v28;
    int v29;
    int v30;
  } v23_;

  if (a2 != 0) {
    v7 = *(unsigned __int16*)(a2 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v7) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v8 = game_map_MapRandom_instance__ptr[0];
      v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v11 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v8 + 1) = v9;
      v12 = (v11 >> 8) ^ (v10 >> 19) ^ v11 ^ v10;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v10;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v12;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v13 = (unsigned __int64)((16 * ((_WORD)v12 -
                                      1000 * (unsigned __int16)((v12 &
                                                                 0x7FFFFFFFu) /
                                                                0x3E8)) +
                                16) &
                                   0x3FF0 |
                               1u)
            << 32;
    }
    else {
      v13 = 0x100000000LL;
    }
  }
  else {
    v13 = 0;
    LODWORD(v7) = 0;
  }
  v17 = 8;
  v18 = v13 | (unsigned int)v7;
  if ((_BYTE)GameData_21caa2c != 0) {
    v14 = GameData_21caa2c;
  }
  else {
    v14 = 0;
  }
  v19 = v14;
  WORD1(v20_.v20) = 0;
  HIDWORD(v20_.v20) = 0;
  v23_.v24 = 0;
  v23_.v25 = 0;
  v23_.v26 = 0;
  v23_.v27 = nullptr;
  v22 = &v23_.v23;
  v23_.v23 = nullptr;
  GameRoutine_930b90((__int64)&v20_.v20, (__int64)GameData_212c8b0[0]);
  v23_.v28 = 0;
  v23_.v29 = a3;
  v23_.v30 = a4;
  ObeliskDestinyMenuItem_1a06060(a1, &v17, 1);
  v20_.v21 = 0;
  v20_.v20 = 0;
  if ((v23_.v25 & 1) != 0) {
    *v23_.v27 = 0;
    v23_.v26 = 0;
  }
  else {
    LOWORD(v23_.v25) = 0;
  }
  GameRoutine_6e3b50_alt2((__int64)&v22, v23_.v23);
  v23_.v23 = nullptr;
  v23_.v24 = 0;
  v22 = &v23_.v23;
  if ((v23_.v25 & 1) != 0) {
    v15 = v23_.v27;
    if (v23_.v27 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v23_.v27);
      v15 = v23_.v23;
    }
  }
  else {
    v15 = nullptr;
  }
  GameRoutine_6e3b50_alt2((__int64)&v22, v15);
}

#pragma GCC visibility pop
