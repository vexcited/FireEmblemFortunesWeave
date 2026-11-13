#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14a3920(void);
__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_1630a00(_QWORD*);
__int64 GameRoutine_16337a0();
__int64 GameRoutine_179c320(_QWORD, _QWORD);
__int64 GameRoutine_19170a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1917400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7d1480(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1ba4138;
extern _UNKNOWN GameData_225d4d8;
extern __int128 GameData_1a834a0;
extern __int128 GameData_1a836f0;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_UnitMake_vtable[])();
extern __int64 (*game_menu_anonymous_UnitMakeDitherAlpha_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_2233d70;
extern __int64 GameData_225d460;
extern __int64 GameData_225d468;
extern __int64 GameData_225d470;
extern __int64 GameData_225d480;
extern __int64 GameData_225d490;
extern __int64 GameData_225d4a0;
extern __int64 GameData_225d4a8;
extern __int64 GameData_225d4b0;
extern __int64 GameData_225d4c0;
extern __int64 GameData_225d4d0;
extern __int64 GameData_225d4e0;
extern __int64 GameData_225d4e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern char GameData_225d458;
extern char GameData_225d498;
extern int GameData_225d478;
extern int GameData_225d488;
extern int GameData_225d4b8;
extern int GameData_225d4c8;
__int64 UnitMake_Destructor(__int64 a1);
__int64 UnitMake_Unknown12(__int64 result);
__int64 UnitMake_16318c0_alt1(__int64 result,
                              int a2) __asm__("UnitMake_16318c0");
__int64* UnitMake_1631b00(__int64* result, int a2);
__int64 UnitMake_16325f0(__int64 result, char a2, char a3);
__int64 UnitMake_1633490_alt1(__int64 result) __asm__("UnitMake_1633490");
__int64 LayoutAccessor_155e140(_QWORD);
__int64 UnitMake_1630a00(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    __int64);
__int64 CharacterFacialController_10b2280(__int64 result, unsigned int, float);
__int64 GameRoutine_10adb80(_DWORD*, _BYTE*);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1366ac0(__int64, __int64);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a3920_alt1(__int64 result) __asm__("GameRoutine_14a3920");
__int64 GameRoutine_1631660(_QWORD, _QWORD, _QWORD, long double, long double);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 UnitMakeCamera_179bd40(_QWORD);
__int64 UnitMake_1630d20_alt1(_QWORD, _QWORD) __asm__("UnitMake_1630d20");
__int64 UnitMake_16325f0_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("UnitMake_16325f0");
__int64 game_HashString32_alt1(_QWORD, _QWORD) __asm__("game_HashString32");
__int64 game_character_1084940(__int64 result, char, float);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _BYTE GameData_1abbaec[];
extern _BYTE GameData_1af6361[];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21f4cb8;
extern __int128 GameData_1a83180;
extern __int128 GameData_1a83700;
extern __int64* GameData_2131a90[6];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_21ec7b8;
extern __int64 GameData_225d4f0;
extern __int64 game_gameui_Footer_instance_;
extern char GameData_1a9f09e;
extern int* GameData_212deb0;
extern int GameData_21f4cb0;
float GameRoutine_618640(int, float result, float, float, float);
__int64 UnitMake_162e480_alt1(_QWORD* a1) __asm__("UnitMake_162e480");
__int64* UnitMake_162f980(__int64* result);
__int64 UnitMake_1630480(__int64 a1);
__int64 UnitMake_1630620(__int64 a1);
__int64 UnitMake_1630d20(__int64 result, char a2);
__int64 UnitMake_16328c0(__int64 result);
__int64 UnitMake_16337a0(__int64 a1);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__int64 GameRoutine_16497b0(__int64, __int64);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
extern __int64 game_GameGlobalData_unknown_;
extern int game_script_hub_talk_g_choice_menu_result;
__int64 UnitMake_1630780(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* Manager_bc6460_alt1(float*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(float*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_179c320(__int64, __int64);
__int64 GameHr_19170a0(__int64 result, const char*);
__int64 GameRoutine_1631660_alt1(__int64 result, char,
                                 char) __asm__("GameRoutine_1631660");
__int64 GameRoutine_1917400_alt1(__int64 result, const char*, unsigned __int64,
                                 __int64, char,
                                 char) __asm__("GameRoutine_1917400");
__int64 LayoutAccessor_1567000_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1567000");
__int64 UnitMakeCamera_179bd40_alt1(__int64) __asm__("UnitMakeCamera_179bd40");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_14a3920(__int64 result);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_stop_ffc40_alt1(__int64*, __int64) __asm__("snd_stop_ffc40");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
const char*
game_HashString32_alt2(const char* result) __asm__("game_HashString32");
extern char GameData_1ba4138_alt1[96] __asm__("GameData_1ba4138");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
void TrickEntity_7d1480(__int64);
void UnitMake_1630d20_alt2(__int64, char) __asm__("UnitMake_1630d20");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void UnitMake_16318c0(__int64* a1, int a2);
void UnitMake_1633490(__int64 a1);
__attribute__((swiftcall)) void GameHr_1366ac0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
void UnitMake_162e480(_QWORD* a1);

void UnitMake_162e480(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    _QWORD v20[6];
    int v21;
    char gap68_[4];
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v20_;

  v20_.v22 = 0;
  v20_.v23 = 0;
  v20_.v24 = 0;
  memset(&v20_.v20[2], 0, 32);
  v20_.v21 = 0;
  v20_.v20[0] = 0x800000018LL;
  v20_.v20[1] = 0x50000005ALL;
  game_1366bd0((void*)(&v18_.v18), (__int64)"Layout/UnitMake.arc",
               (__int64)"UnitMake", (__int64)v20_.v20);
  v2 = v18_.v18;
  v3 = v18_.v19;
  v4 = a1[36];
  v18_.v18 = 0;
  v18_.v19 = 0;
  a1[35] = v2;
  a1[36] = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = v18_.v19;
  if (v18_.v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  GameHr_1366ac0((void*)(&v18_.v18), (__int64)"Layout/UnitMake.arc",
                 (__int64)"UnitMakeSpineView");
  v6 = v18_.v18;
  v7 = v18_.v19;
  v8 = a1[38];
  v18_.v18 = 0;
  v18_.v19 = 0;
  a1[37] = v6;
  a1[38] = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  v9 = v18_.v19;
  if (v18_.v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  v10 = v20_.v22;
  if (v20_.v22 != 0) {
    v11 = v20_.v23;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v20_.v22 == v20_.v23) {
      goto LABEL_24;
    }
    v13 = v20_.v23;
    do {
      v14 = *(_BYTE*)(v13 - 24);
      v13 -= 24;
      if ((v14 & 1) != 0) {
        v15 = *(_QWORD*)(v11 - 8);
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v16, v15);
        }
      }
      v11 = v13;
    } while (v13 != v10);
    v20_.v23 = v10;
    v10 = v20_.v22;
    if (v20_.v22 != 0) {
    LABEL_24:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v17, v10);
    }
  }
}

__int64* UnitMake_162f980(__int64* result)
{
  __int64* v1;
  int v2;
  __int64 v3;
  __int64 v4;
  long double v5;
  _QWORD* v6;
  __int64 v7;
  __int128 v8;
  __int64** v9;
  __int64 v10;
  __int128 v11;
  unsigned int v12;
  unsigned int i;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int16 v18;
  _BYTE v19[200];

  v1 = result;
  if (*((_DWORD*)result + 38) != 0) {
    v2 = 3;
    v3 = result[1];
    if (v3 != 0) {
      goto LABEL_33;
    }
  }
  else {
    v4 = GameData_225d4f0;
    if ((snd_fnd_WeakHandle_isValid(GameData_225d4f0 + 224) & 1) != 0) {
      *(__n128*)&v5 = snd_Fade_Fade_10c830(v19, 0.0);
      snd_stop_ffc40(v4 + 224, v19, v5);
      snd_Fade_Destroy_Fade(v19);
    }
    UnitMakeCamera_179bd40(GameData_225d4f0);
    UnitMake_1630d20_alt1(v1, 0);
    LayoutAccessor_1562680(v1 + 52, "Out", 0x1.0000000000000p+0);
    if (game_gameui_Footer_instance_ != 0) {
      LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
    }
    v6 = v1 + 140;
    v7 = 0;
    v8 = GameData_1a834a0;
    do {
      v9 = (__int64**)&v6[2 * v7];
      result = *v9;
      v10 = **v9;
      if (v10 != 0 && *(_DWORD*)(v10 + 16) == *((_DWORD*)result + 2)) {
        LODWORD(v11) = 1130102784;
        v12 = *(_DWORD*)(v10 + 36);
        if (*((_BYTE*)v1 + 276) == 1) {
          *(float*)&v11 = 0x1.6000000000000p+6;
        }
        if (v12 == 0) {
          goto LABEL_39;
        }
        for (i = 0; i < v12; ++i) {
          if ((int)v12 > (int)i) {
            v14 = *(_QWORD*)(v10 + 40 + 8LL * (int)i);
            if (v14 != 0) {
              *(_OWORD*)(v14 + 32) = v8;
              *(_BYTE*)(v14 + 128) = 1;
              v12 = *(_DWORD*)(v10 + 36);
            }
          }
        }
        result = *v9;
        v10 = **v9;
        if (v10 != 0) {
        LABEL_39:
          if (*(_DWORD*)(v10 + 16) == *((_DWORD*)result + 2)) {
            v15 = *(_DWORD*)(v10 + 36);
            if (v15 != 0) {
              v16 = 0;
              DWORD1(v11) = 1126170624;
              *((_QWORD*)&v11 + 1) = 0;
              do {
                if ((int)v15 > (int)v16) {
                  v17 = *(_QWORD*)(v10 + 40 + 8LL * (int)v16);
                  if (v17 != 0) {
                    *(_OWORD*)(v17 + 16) = v11;
                    *(_BYTE*)(v17 + 128) = 1;
                    v15 = *(_DWORD*)(v10 + 36);
                  }
                }
                ++v16;
              } while (v16 < v15);
            }
          }
        }
        GameRoutine_14a3920_alt1((__int64)result);
        result = (__int64*)GameRoutine_14a1520(&v6[2 * v7], 1);
        v8 = GameData_1a834a0;
      }
      ++v7;
    } while (v7 != 30);
    v2 = 1;
    v3 = v1[1];
    if (v3 != 0) {
      while (1) {
      LABEL_33:
        if (*(_BYTE*)v3 == 2) {
          if (*(_DWORD*)(v3 + 32) == v2) {
            v18 = *((_WORD*)v1 + 68);
            v1[2] = v3;
            *((_WORD*)v1 + 68) = v18 & 0xFF7F;
            return result;
          }
        }
        else if (*(_BYTE*)v3 == 0) {
          return result;
        }
        v3 += 64;
      }
    }
  }
  return result;
}

__int64 UnitMake_1630480(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _QWORD v9[25];

  v2 = GameData_2131a90[0];
  v3 = *GameData_2131a90[0];
  result =
      snd_fnd_WeakHandle_isValid_alt1((__int64*)(*GameData_2131a90[0] + 224));
  if ((result & 1) != 0) {
    snd_Fade_Fade_10c830_alt1((__int64)v9, 0x0.0p+0f);
    snd_stop_ffc40_alt1((__int64*)(v3 + 224), (__int64)v9);
    result = snd_Fade_Destroy_Fade_alt1(v9);
  }
  v5 = *(_DWORD*)(a1 + 152);
  if (v5 == 5) {
    v7 = 6;
  }
  else {
    if (v5 != 0) {
      v7 = 8;
      v8 = *(_QWORD*)(a1 + 8);
      if (v8 == 0) {
        goto LABEL_19;
      }
      while (1) {
      LABEL_15:
        if (*(_BYTE*)v8 == 2) {
          if (*(_DWORD*)(v8 + 32) == v7) {
            *(_QWORD*)(a1 + 16) = v8;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            goto LABEL_19;
          }
        }
        else if (*(_BYTE*)v8 == 0) {
          goto LABEL_19;
        }
        v8 += 64;
      }
    }
    GameHr_1562680(a1 + 416, "Out", 0x1.0000000000000p+0f);
    v6 = a1 + 40LL * (*(_BYTE*)(a1 + 276) != 1);
    *(_QWORD*)(v6 + 204) = *(_QWORD*)(a1 + 164);
    *(_QWORD*)(v6 + 212) = *(_QWORD*)(a1 + 172);
    *(_QWORD*)(v6 + 220) = *(_QWORD*)(a1 + 180);
    *(_QWORD*)(v6 + 228) = *(_QWORD*)(a1 + 188);
    *(_QWORD*)(v6 + 196) = *(_QWORD*)(a1 + 156);
    UnitMake_1630d20_alt2(a1, 0);
    GameRoutine_1631660_alt1(a1, *(_BYTE*)(a1 + 276), 0);
    v7 = 1;
    UnitMake_16325f0(a1, *(_BYTE*)(a1 + 276) == 1, 1);
    UnitMakeCamera_179bd40_alt1(*v2);
    result = game_gameui_Footer_instance_;
    if (game_gameui_Footer_instance_ != 0) {
      result = LayoutAccessor_1567000_alt1(game_gameui_Footer_instance_, 0);
      v8 = *(_QWORD*)(a1 + 8);
      if (v8 != 0) {
        goto LABEL_15;
      }
      goto LABEL_19;
    }
  }
  v8 = *(_QWORD*)(a1 + 8);
  if (v8 != 0) {
    goto LABEL_15;
  }
LABEL_19:
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

__int64 UnitMake_1630620(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  char v6;

  UnitMake_16325f0(a1, *(_BYTE*)(a1 + 276) == 1, 0);
  GameHr_1562680(a1 + 416, "Out", 0x1.0000000000000p+0f);
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000_alt1(game_gameui_Footer_instance_, 0);
  }
  result =
      ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 312, (__int64)"N_Progress", 0);
  if (GameData_21ec7b8 == 0) {
    v3 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
    GameRoutine_1130770_alt1(v3, "MID_EV00_002_m15", nullptr);
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "talk::Seq";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_216de68;
    *(_QWORD*)(v3 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v5 = *(_BYTE**)(v3 + 32);
    v6 = v5[138];
    if (v6 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v5 + 64LL))(*(_QWORD*)(v3 + 32));
      v6 = v5[138];
    }
    v5[138] = v6 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
  }
  return result;
}

__int64 UnitMake_1630780(__int64 a1)
{
  int v1;
  const char* v2;
  __int64 v3;
  __int64 v4;
  const char* v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v1 = game_script_hub_talk_g_choice_menu_result;
  if (game_GameGlobalData_unknown_ != 0) {
    *(_BYTE*)game_GameGlobalData_unknown_ =
        game_script_hub_talk_g_choice_menu_result > 1;
  }
  if (v1 <= 1) {
    v2 = "MID_EV00_002_m15_Notice_Off";
  }
  else {
    v2 = "MID_EV00_002_m15_Notice_On";
  }
  v6 = v2;
  v3 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, (__int64)&v6);
  if (v3 != 0) {
    v7_.v8 = nullptr;
    GameRoutine_6680e0(v7_.v7, (_QWORD*)(v3 + 1248));
    if (v7_.v8 == v7_.v7) {
      v4 = 32;
      goto LABEL_11;
    }
    if (v7_.v8 != nullptr) {
      v4 = 40;
    LABEL_11:
      (*(void (**)(__int64))(*v7_.v8 + v4))((__int64)v7_.v8);
    }
  }
  *(_BYTE*)(v3 + 1301) = 1;
  return GameRoutine_16497b0(v3, (__int64)"SE_SYS_Decide_End_CharaMake");
}

__int64 UnitMake_1630a00(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64 result;
  _QWORD v19[2];

  LayoutAccessor_155e140(a1 + 39);
  LayoutAccessor_155e140(a1 + 52);
  v2 = a1[35];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[37];
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = a1[36];
  a1[35] = 0;
  a1[36] = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[38];
  a1[37] = 0;
  a1[38] = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[132];
  v7 = a1[133];
  if (v7 == 0) {
    v19[0] = a1[132];
    v19[1] = 0;
    GameRoutine_14a1390(v19, 1);
    goto LABEL_18;
  }
  v8 = (atomic_ullong*)(v7 + 8);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v19[0] = v6;
  v19[1] = v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_14a1390(v19, 1);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_18;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_18;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  std___1___shared_weak_count___release_weak(v7);

LABEL_18:
  v9 = a1[134];
  v10 = a1[135];
  if (v10 == 0) {
    v19[0] = a1[134];
    v19[1] = 0;
    GameRoutine_14a1390(v19, 1);
    goto LABEL_25;
  }
  v11 = (atomic_ullong*)(v10 + 8);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                            memory_order_relaxed);
  v19[0] = v9;
  v19[1] = v10;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_14a1390(v19, 1);
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_25;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_25;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);

LABEL_25:
  v12 = a1[136];
  v13 = a1[137];
  if (v13 == 0) {
    v19[0] = a1[136];
    v19[1] = 0;
    GameRoutine_14a1390(v19, 1);
    goto LABEL_32;
  }
  v14 = (atomic_ullong*)(v13 + 8);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                            memory_order_relaxed);
  v19[0] = v12;
  v19[1] = v13;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_14a1390(v19, 1);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_32;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_32;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  std___1___shared_weak_count___release_weak(v13);

LABEL_32:
  v15 = a1[138];
  v16 = a1[139];
  if (v16 == 0) {
    v19[0] = v15;
    v19[1] = 0;
    return GameRoutine_14a1390(v19, 1);
  }
  v17 = (atomic_ullong*)(v16 + 8);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  v19[0] = v15;
  v19[1] = v16;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_14a1390(v19, 1);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_39;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
    if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    LABEL_39:
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      return std___1___shared_weak_count___release_weak(v16);
    }
  }
  return result;
}

__int64 UnitMake_1630d20(__int64 result, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  unsigned __int8 explicit;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  float v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v47;
  __int64 v48;

  v2 = *(_QWORD*)(result + 720);
  v3 = result;
  v4 = (atomic_uchar*)GameData_212deb8;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire);
  if ((a2 & 1) != 0) {
    if ((explicit & 1) == 0) {
      result = __cxa_guard_acquire(&GameData_21f4cb8);
      if ((_DWORD)result != 0) {
        GameData_21f4cb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
        result = __cxa_guard_release(&GameData_21f4cb8);
      }
    }
    v6 = *(_QWORD*)(v2 + 512);
    v7 = v6;
    do {
      v8 = *(_DWORD*)(v7 - 16);
      v7 -= 16;
      v6 -= 16;
    } while (v8 != GameData_21f4cb0);
    v9 = *(_QWORD*)(*(_QWORD*)(v6 + 8) + 88LL);
    v10 = *(_QWORD*)(v9 + 32);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 8);
      v12 = *(_QWORD*)(v9 + 40);
      if (v11 != -1 && v12 != 0) {
        v15 = *(_QWORD*)(v12 + 392);
        v14 = *(_QWORD*)(v12 + 400);
        if (v14 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
            std___1___shared_weak_count___release_weak(v14);
          }
        }
        result = GameRoutine_10adb80((_DWORD*)(v15 + 1432), GameData_1abbaec);
        if ((result & 0x80000000) == 0) {
          result = CharacterFacialController_10b2280(v9, result,
                                                     -0x1.0000000000000p+0f);
        }
      }
    }
    v16 = *(_QWORD*)(v3 + 888);
    if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
      result = __cxa_guard_acquire(&GameData_21f4cb8);
      if ((_DWORD)result != 0) {
        GameData_21f4cb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
        result = __cxa_guard_release(&GameData_21f4cb8);
      }
    }
    v17 = *(_QWORD*)(v16 + 512);
    v18 = v17;
    do {
      v19 = *(_DWORD*)(v18 - 16);
      v18 -= 16;
      v17 -= 16;
    } while (v19 != GameData_21f4cb0);
    v20 = *(_QWORD*)(*(_QWORD*)(v17 + 8) + 88LL);
    v21 = *(_QWORD*)(v20 + 32);
    if (v21 != 0) {
      v22 = *(_QWORD*)(v21 + 8);
      v23 = *(_QWORD*)(v20 + 40);
      if (v22 != -1 && v23 != 0) {
        v26 = *(_QWORD*)(v23 + 392);
        v25 = *(_QWORD*)(v23 + 400);
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
            std___1___shared_weak_count___release_weak(v25);
          }
        }
        result = GameRoutine_10adb80((_DWORD*)(v26 + 1432), GameData_1abbaec);
        if ((result & 0x80000000) == 0) {
          v27 = -0x1.0000000000000p+0f;
          v28 = result;
          return CharacterFacialController_10b2280(v20, v28, v27);
        }
      }
    }
  }
  else {
    if ((explicit & 1) == 0) {
      result = __cxa_guard_acquire(&GameData_21f4cb8);
      if ((_DWORD)result != 0) {
        GameData_21f4cb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
        result = __cxa_guard_release(&GameData_21f4cb8);
      }
    }
    v29 = *(_QWORD*)(v2 + 512);
    v30 = v29;
    do {
      v31 = *(_DWORD*)(v30 - 16);
      v30 -= 16;
      v29 -= 16;
    } while (v31 != GameData_21f4cb0);
    v32 = *(_QWORD*)(*(_QWORD*)(v29 + 8) + 88LL);
    v33 = *(_QWORD*)(v32 + 32);
    if (v33 != 0) {
      v34 = *(_QWORD*)(v33 + 8);
      v35 = *(_QWORD*)(v32 + 40);
      if (v34 != -1 && v35 != 0) {
        v38 = *(_QWORD*)(v35 + 392);
        v37 = *(_QWORD*)(v35 + 400);
        if (v37 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
            std___1___shared_weak_count___release_weak(v37);
          }
        }
        result = GameRoutine_10adb80((_DWORD*)(v38 + 1432), GameData_1af6361);
        if ((result & 0x80000000) == 0) {
          result = CharacterFacialController_10b2280(v32, result, 0x0.0p+0f);
        }
      }
    }
    v39 = *(_QWORD*)(v3 + 888);
    if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
      result = __cxa_guard_acquire(&GameData_21f4cb8);
      if ((_DWORD)result != 0) {
        GameData_21f4cb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
        result = __cxa_guard_release(&GameData_21f4cb8);
      }
    }
    v40 = *(_QWORD*)(v39 + 512);
    v41 = v40;
    do {
      v42 = *(_DWORD*)(v41 - 16);
      v41 -= 16;
      v40 -= 16;
    } while (v42 != GameData_21f4cb0);
    v20 = *(_QWORD*)(*(_QWORD*)(v40 + 8) + 88LL);
    v43 = *(_QWORD*)(v20 + 32);
    if (v43 != 0) {
      v44 = *(_QWORD*)(v43 + 8);
      v45 = *(_QWORD*)(v20 + 40);
      if (v44 != -1 && v45 != 0) {
        v48 = *(_QWORD*)(v45 + 392);
        v47 = *(_QWORD*)(v45 + 400);
        if (v47 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
            std___1___shared_weak_count___release_weak(v47);
          }
        }
        result = GameRoutine_10adb80((_DWORD*)(v48 + 1432), GameData_1af6361);
        if ((result & 0x80000000) == 0) {
          v28 = result;
          v27 = 0x0.0p+0f;
          return CharacterFacialController_10b2280(v20, v28, v27);
        }
      }
    }
  }
  return result;
}

__int64 UnitMake_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  *(_QWORD*)a1 = game_menu_UnitMake_vtable;
  v2 = *(_QWORD*)(game_g_frame_clock + 13224);
  v4 = *(_QWORD*)(v2 + 48);
  v3 = *(_QWORD*)(v2 + 56);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 224LL);
  v6 = *(__int64**)(v5 + 32);
  v7 = *(__int64**)(v5 + 40);
  while (v6 != v7) {
    v8 = *v6++;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1630a00((_QWORD*)a1);
  for (i = 1592; i != 1112; i -= 16) {
    v10 = *(_QWORD*)(a1 + i);
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = *(_QWORD*)(a1 + 1112);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 1096);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *(_QWORD*)(a1 + 1080);
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(a1 + 1064);
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = *(_QWORD**)(a1 + 1040);
  if (v15 == (_QWORD*)(a1 + 1008)) {
    v16 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_31;
    }
    v16 = 40;
  }
  (*(void (**)(void*))(*v15 + v16))(v15);

LABEL_31:
  v17 = *(_QWORD**)(a1 + 992);
  if (v17 == (_QWORD*)(a1 + 960)) {
    v18 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_36;
    }
    v18 = 40;
  }
  (*(void (**)(void*))(*v17 + v18))(v17);

LABEL_36:
  v19 = *(_QWORD**)(a1 + 944);
  if (v19 == (_QWORD*)(a1 + 912)) {
    v20 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_41;
    }
    v20 = 40;
  }
  (*(void (**)(void*))(*v19 + v20))(v19);

LABEL_41:
  v21 = *(_QWORD**)(a1 + 864);
  if (v21 == (_QWORD*)(a1 + 832)) {
    v22 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_46;
    }
    v22 = 40;
  }
  (*(void (**)(void*))(*v21 + v22))(v21);

LABEL_46:
  v23 = *(_QWORD**)(a1 + 816);
  if (v23 == (_QWORD*)(a1 + 784)) {
    v24 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_51;
    }
    v24 = 40;
  }
  (*(void (**)(void*))(*v23 + v24))(v23);

LABEL_51:
  v25 = *(_QWORD**)(a1 + 768);
  if (v25 == (_QWORD*)(a1 + 736)) {
    v26 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_56;
    }
    v26 = 40;
  }
  (*(void (**)(void*))(*v25 + v26))(v25);

LABEL_56:
  v27 = *(_QWORD*)(a1 + 704);
  if (v27 != 0) {
    std___1___shared_weak_count___release_weak(v27);
  }
  GameRoutine_155ca60(a1 + 520);
  GameRoutine_155e140(a1 + 416);
  v28 = *(_QWORD*)(a1 + 512);
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  GameRoutine_1564060(a1 + 464);
  GameRoutine_1563f90(a1 + 440, *(_QWORD*)(a1 + 448));
  v29 = *(_QWORD*)(a1 + 424);
  if (v29 != 0) {
    std___1___shared_weak_count___release_weak(v29);
  }
  GameRoutine_155e140(a1 + 312);
  v30 = *(_QWORD*)(a1 + 408);
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
  }
  GameRoutine_1564060(a1 + 360);
  GameRoutine_1563f90(a1 + 336, *(_QWORD*)(a1 + 344));
  v31 = *(_QWORD*)(a1 + 320);
  if (v31 != 0) {
    std___1___shared_weak_count___release_weak(v31);
  }
  v32 = *(_QWORD*)(a1 + 304);
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak(v32);
  }
  v33 = *(_QWORD*)(a1 + 288);
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak(v33);
  }
  GameData_225d4e8 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 UnitMake_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 9;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 9) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

void UnitMake_16318c0(__int64* a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
    char v26;
  } v24_;
  struct {
    char gap24_[1];
    _BYTE v27[15];
    _BYTE* v28;
  } v27_;
  __int64 v31;

  if (a2 != 7) {
    v31 = v2;
    if (a1[67] == 0) {
      goto LABEL_19;
    }
    v7 = a1[66];
    if (v7 == 0) {
      goto LABEL_19;
    }
    v8 = std___1___shared_weak_count_lock_alt1(v7);
    if (v8 != 0) {
      v9 = a1[65];
      if (v9 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v9 + 24);
        v10 = v9 + 152;
        if ((_DWORD)v2 == 0) {
          v10 = 0;
        }
        v11 = v10 != a1[67];
      }
      else {
        v11 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v11) {
          goto LABEL_12;
        }
      }
      else {
        v13 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v13);
        if (v11) {
          goto LABEL_12;
        }
      }
      if ((v2 & 1) == 0) {
      LABEL_19:
        v15 = 0;
        while (1) {
          v16 = a2 == v15 ? 6LL : 7LL;
          v17 = a2 == v15 ? "Select" : "Default";
          v18 = a2 == v15 ? 7LL : 8LL;
          v24_.v26 = 2 * v16;
          memcpy_alt1((__int64)v27_.v27, (__int64)v17, v16);
          v27_.v27[v18 - 1] = 0;
          v19 = game_util_Format_alt1("Progress_PageName_%02d", v15);
          LayoutAccessor_1560070((void*)(&v24_.v24), a1 + 39, v19);
          if (v24_.v25 == 0) {
            break;
          }
          v20 = std___1___shared_weak_count_lock_alt1(v24_.v25);
          v21 = v24_.v24;
          if (v24_.v25 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v24_.v25);
          }
          if (v20 != 0 && v21 != 0) {
            v22 = (v24_.v26 & 1) != 0 ? v27_.v28 : v27_.v27;
            GameHr_1562680(v21, v22, 0x1.0000000000000p+0f);
          }
          else if (v20 == 0) {
            break;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            break;
          }
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          std___1___shared_weak_count___release_weak_alt1(v20);
          if ((v24_.v26 & 1) != 0) {
          LABEL_42:
            if (v27_.v28 != nullptr) {
              v23 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v23 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                  (__int64)v27_.v28);
            }
          }
        LABEL_20:
          if (++v15 == 8) {
            return;
          }
        }
        if ((v24_.v26 & 1) != 0) {
          goto LABEL_42;
        }
        goto LABEL_20;
      }
    LABEL_17:
      v14 = a1[78];
      if (v14 != 0) {
        *(float*)(v14 + 32) = (float)a2;
      }
      goto LABEL_19;
    }
  LABEL_12:
    v12 = a1[66];
    if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
}

__int64* UnitMake_1631b00(__int64* result, int a2)
{
  __int64** v2;
  __int64* v3;
  __int64 v4;
  __int128 v5;
  __int64** v6;
  __int64 v7;
  unsigned int v8;
  unsigned int i;
  __int64 v10;
  unsigned int v11;
  unsigned int j;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  _DWORD* v16;
  _DWORD* v17;
  _DWORD* v18;
  _DWORD* v19;
  _DWORD* v20;
  _DWORD* v21;
  _DWORD* v22;
  _DWORD* v23;
  _DWORD* v24;
  _DWORD* v25;
  _DWORD* v26;
  _DWORD* v27;
  _DWORD* v28;
  _DWORD* v29;
  _DWORD* v30;
  _DWORD* v31;
  _DWORD* v32;
  _DWORD* v33;
  _DWORD* v34;
  _DWORD* v35;
  _DWORD* v36;
  _DWORD* v37;
  _DWORD* v38;
  _DWORD* v39;
  _DWORD* v40;
  _DWORD* v41;
  _DWORD* v42;
  _DWORD* v43;
  __int64 v44;
  _DWORD* v45;
  _DWORD* v46;
  _DWORD* v47;
  _DWORD* v48;
  _DWORD* v49;
  _DWORD* v50;
  _DWORD* v51;
  _DWORD* v52;
  _DWORD* v53;
  _DWORD* v54;
  _DWORD* v55;
  _DWORD* v56;
  _DWORD* v57;
  _DWORD* v58;
  _DWORD* v59;
  _DWORD* v60;
  _DWORD* v61;
  _DWORD* v62;
  _DWORD* v63;
  _DWORD* v64;
  _DWORD* v65;
  _DWORD* v66;
  _DWORD* v67;
  _DWORD* v68;
  _DWORD* v69;
  _DWORD* v70;
  _DWORD* v71;
  _DWORD* v72;
  _DWORD* v73;

  v2 = (__int64**)(result + 140);
  v3 = result;
  if (a2 == 5) {
    v14 = **v2;
    if (v14 != 0 && *(_DWORD*)(v14 + 16) == *((_DWORD*)*v2 + 2)) {
      result = (__int64*)GameRoutine_14a1390(result + 140, 1);
    }
    v15 = (_DWORD*)v3[142];
    if (*(_QWORD*)v15 != 0 && *(_DWORD*)(*(_QWORD*)v15 + 16LL) == v15[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 142, 1);
    }
    v16 = (_DWORD*)v3[144];
    if (*(_QWORD*)v16 != 0 && *(_DWORD*)(*(_QWORD*)v16 + 16LL) == v16[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 144, 1);
    }
    v17 = (_DWORD*)v3[146];
    if (*(_QWORD*)v17 != 0 && *(_DWORD*)(*(_QWORD*)v17 + 16LL) == v17[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 146, 1);
    }
    v18 = (_DWORD*)v3[148];
    if (*(_QWORD*)v18 != 0 && *(_DWORD*)(*(_QWORD*)v18 + 16LL) == v18[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 148, 1);
    }
    v19 = (_DWORD*)v3[150];
    if (*(_QWORD*)v19 != 0 && *(_DWORD*)(*(_QWORD*)v19 + 16LL) == v19[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 150, 1);
    }
    v20 = (_DWORD*)v3[152];
    if (*(_QWORD*)v20 != 0 && *(_DWORD*)(*(_QWORD*)v20 + 16LL) == v20[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 152, 1);
    }
    v21 = (_DWORD*)v3[154];
    if (*(_QWORD*)v21 != 0 && *(_DWORD*)(*(_QWORD*)v21 + 16LL) == v21[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 154, 1);
    }
    v22 = (_DWORD*)v3[156];
    if (*(_QWORD*)v22 != 0 && *(_DWORD*)(*(_QWORD*)v22 + 16LL) == v22[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 156, 1);
    }
    v23 = (_DWORD*)v3[158];
    if (*(_QWORD*)v23 != 0 && *(_DWORD*)(*(_QWORD*)v23 + 16LL) == v23[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 158, 1);
    }
    v24 = (_DWORD*)v3[160];
    if (*(_QWORD*)v24 != 0 && *(_DWORD*)(*(_QWORD*)v24 + 16LL) == v24[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 160, 1);
    }
    v25 = (_DWORD*)v3[162];
    if (*(_QWORD*)v25 != 0 && *(_DWORD*)(*(_QWORD*)v25 + 16LL) == v25[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 162, 1);
    }
    v26 = (_DWORD*)v3[164];
    if (*(_QWORD*)v26 != 0 && *(_DWORD*)(*(_QWORD*)v26 + 16LL) == v26[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 164, 1);
    }
    v27 = (_DWORD*)v3[166];
    if (*(_QWORD*)v27 != 0 && *(_DWORD*)(*(_QWORD*)v27 + 16LL) == v27[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 166, 1);
    }
    v28 = (_DWORD*)v3[168];
    if (*(_QWORD*)v28 != 0 && *(_DWORD*)(*(_QWORD*)v28 + 16LL) == v28[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 168, 1);
    }
    v29 = (_DWORD*)v3[170];
    if (*(_QWORD*)v29 != 0 && *(_DWORD*)(*(_QWORD*)v29 + 16LL) == v29[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 170, 1);
    }
    v30 = (_DWORD*)v3[172];
    if (*(_QWORD*)v30 != 0 && *(_DWORD*)(*(_QWORD*)v30 + 16LL) == v30[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 172, 1);
    }
    v31 = (_DWORD*)v3[174];
    if (*(_QWORD*)v31 != 0 && *(_DWORD*)(*(_QWORD*)v31 + 16LL) == v31[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 174, 1);
    }
    v32 = (_DWORD*)v3[176];
    if (*(_QWORD*)v32 != 0 && *(_DWORD*)(*(_QWORD*)v32 + 16LL) == v32[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 176, 1);
    }
    v33 = (_DWORD*)v3[178];
    if (*(_QWORD*)v33 != 0 && *(_DWORD*)(*(_QWORD*)v33 + 16LL) == v33[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 178, 1);
    }
    v34 = (_DWORD*)v3[180];
    if (*(_QWORD*)v34 != 0 && *(_DWORD*)(*(_QWORD*)v34 + 16LL) == v34[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 180, 1);
    }
    v35 = (_DWORD*)v3[182];
    if (*(_QWORD*)v35 != 0 && *(_DWORD*)(*(_QWORD*)v35 + 16LL) == v35[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 182, 1);
    }
    v36 = (_DWORD*)v3[184];
    if (*(_QWORD*)v36 != 0 && *(_DWORD*)(*(_QWORD*)v36 + 16LL) == v36[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 184, 1);
    }
    v37 = (_DWORD*)v3[186];
    if (*(_QWORD*)v37 != 0 && *(_DWORD*)(*(_QWORD*)v37 + 16LL) == v37[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 186, 1);
    }
    v38 = (_DWORD*)v3[188];
    if (*(_QWORD*)v38 != 0 && *(_DWORD*)(*(_QWORD*)v38 + 16LL) == v38[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 188, 1);
    }
    v39 = (_DWORD*)v3[190];
    if (*(_QWORD*)v39 != 0 && *(_DWORD*)(*(_QWORD*)v39 + 16LL) == v39[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 190, 1);
    }
    v40 = (_DWORD*)v3[192];
    if (*(_QWORD*)v40 != 0 && *(_DWORD*)(*(_QWORD*)v40 + 16LL) == v40[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 192, 1);
    }
    v41 = (_DWORD*)v3[194];
    if (*(_QWORD*)v41 != 0 && *(_DWORD*)(*(_QWORD*)v41 + 16LL) == v41[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 194, 1);
    }
    v42 = (_DWORD*)v3[196];
    if (*(_QWORD*)v42 != 0 && *(_DWORD*)(*(_QWORD*)v42 + 16LL) == v42[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 196, 1);
    }
    v43 = (_DWORD*)v3[198];
    if (*(_QWORD*)v43 != 0 && *(_DWORD*)(*(_QWORD*)v43 + 16LL) == v43[2]) {
      return (__int64*)GameRoutine_14a1390(v3 + 198, 1);
    }
  }
  else if (a2 == 4) {
    v4 = 0;
    v5 = GameData_1a834a0;
    do {
      v6 = &v2[2 * v4];
      result = *v6;
      v7 = **v6;
      if (v7 != 0 && *(_DWORD*)(v7 + 16) == *((_DWORD*)result + 2)) {
        v8 = *(_DWORD*)(v7 + 36);
        if (v8 == 0) {
          goto LABEL_204;
        }
        for (i = 0; i < v8; ++i) {
          if ((int)v8 > (int)i) {
            v10 = *(_QWORD*)(v7 + 40 + 8LL * (int)i);
            if (v10 != 0) {
              *(_OWORD*)(v10 + 32) = v5;
              *(_BYTE*)(v10 + 128) = 1;
              v8 = *(_DWORD*)(v7 + 36);
            }
          }
        }
        result = *v6;
        v7 = **v6;
        if (v7 != 0) {
        LABEL_204:
          if (*(_DWORD*)(v7 + 16) == *((_DWORD*)result + 2)) {
            v11 = *(_DWORD*)(v7 + 36);
            if (v11 != 0) {
              for (j = 0; j < v11; ++j) {
                if ((int)v11 > (int)j) {
                  v13 = *(_QWORD*)(v7 + 40 + 8LL * (int)j);
                  if (v13 != 0) {
                    *(_OWORD*)(v13 + 16) = GameData_1a836f0;
                    *(_BYTE*)(v13 + 128) = 1;
                    v11 = *(_DWORD*)(v7 + 36);
                  }
                }
              }
            }
          }
        }
        GameRoutine_14a3920();
        result = (__int64*)GameRoutine_14a1520(&v2[2 * v4], 1);
        v5 = GameData_1a834a0;
      }
      ++v4;
    } while (v4 != 30);
  }
  else {
    v44 = **v2;
    if (v44 != 0 && *(_DWORD*)(v44 + 16) == *((_DWORD*)*v2 + 2)) {
      result = (__int64*)GameRoutine_14a1520(result + 140, 1);
    }
    v45 = (_DWORD*)v3[142];
    if (*(_QWORD*)v45 != 0 && *(_DWORD*)(*(_QWORD*)v45 + 16LL) == v45[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 142, 1);
    }
    v46 = (_DWORD*)v3[144];
    if (*(_QWORD*)v46 != 0 && *(_DWORD*)(*(_QWORD*)v46 + 16LL) == v46[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 144, 1);
    }
    v47 = (_DWORD*)v3[146];
    if (*(_QWORD*)v47 != 0 && *(_DWORD*)(*(_QWORD*)v47 + 16LL) == v47[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 146, 1);
    }
    v48 = (_DWORD*)v3[148];
    if (*(_QWORD*)v48 != 0 && *(_DWORD*)(*(_QWORD*)v48 + 16LL) == v48[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 148, 1);
    }
    v49 = (_DWORD*)v3[150];
    if (*(_QWORD*)v49 != 0 && *(_DWORD*)(*(_QWORD*)v49 + 16LL) == v49[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 150, 1);
    }
    v50 = (_DWORD*)v3[152];
    if (*(_QWORD*)v50 != 0 && *(_DWORD*)(*(_QWORD*)v50 + 16LL) == v50[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 152, 1);
    }
    v51 = (_DWORD*)v3[154];
    if (*(_QWORD*)v51 != 0 && *(_DWORD*)(*(_QWORD*)v51 + 16LL) == v51[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 154, 1);
    }
    v52 = (_DWORD*)v3[156];
    if (*(_QWORD*)v52 != 0 && *(_DWORD*)(*(_QWORD*)v52 + 16LL) == v52[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 156, 1);
    }
    v53 = (_DWORD*)v3[158];
    if (*(_QWORD*)v53 != 0 && *(_DWORD*)(*(_QWORD*)v53 + 16LL) == v53[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 158, 1);
    }
    v54 = (_DWORD*)v3[160];
    if (*(_QWORD*)v54 != 0 && *(_DWORD*)(*(_QWORD*)v54 + 16LL) == v54[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 160, 1);
    }
    v55 = (_DWORD*)v3[162];
    if (*(_QWORD*)v55 != 0 && *(_DWORD*)(*(_QWORD*)v55 + 16LL) == v55[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 162, 1);
    }
    v56 = (_DWORD*)v3[164];
    if (*(_QWORD*)v56 != 0 && *(_DWORD*)(*(_QWORD*)v56 + 16LL) == v56[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 164, 1);
    }
    v57 = (_DWORD*)v3[166];
    if (*(_QWORD*)v57 != 0 && *(_DWORD*)(*(_QWORD*)v57 + 16LL) == v57[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 166, 1);
    }
    v58 = (_DWORD*)v3[168];
    if (*(_QWORD*)v58 != 0 && *(_DWORD*)(*(_QWORD*)v58 + 16LL) == v58[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 168, 1);
    }
    v59 = (_DWORD*)v3[170];
    if (*(_QWORD*)v59 != 0 && *(_DWORD*)(*(_QWORD*)v59 + 16LL) == v59[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 170, 1);
    }
    v60 = (_DWORD*)v3[172];
    if (*(_QWORD*)v60 != 0 && *(_DWORD*)(*(_QWORD*)v60 + 16LL) == v60[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 172, 1);
    }
    v61 = (_DWORD*)v3[174];
    if (*(_QWORD*)v61 != 0 && *(_DWORD*)(*(_QWORD*)v61 + 16LL) == v61[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 174, 1);
    }
    v62 = (_DWORD*)v3[176];
    if (*(_QWORD*)v62 != 0 && *(_DWORD*)(*(_QWORD*)v62 + 16LL) == v62[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 176, 1);
    }
    v63 = (_DWORD*)v3[178];
    if (*(_QWORD*)v63 != 0 && *(_DWORD*)(*(_QWORD*)v63 + 16LL) == v63[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 178, 1);
    }
    v64 = (_DWORD*)v3[180];
    if (*(_QWORD*)v64 != 0 && *(_DWORD*)(*(_QWORD*)v64 + 16LL) == v64[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 180, 1);
    }
    v65 = (_DWORD*)v3[182];
    if (*(_QWORD*)v65 != 0 && *(_DWORD*)(*(_QWORD*)v65 + 16LL) == v65[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 182, 1);
    }
    v66 = (_DWORD*)v3[184];
    if (*(_QWORD*)v66 != 0 && *(_DWORD*)(*(_QWORD*)v66 + 16LL) == v66[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 184, 1);
    }
    v67 = (_DWORD*)v3[186];
    if (*(_QWORD*)v67 != 0 && *(_DWORD*)(*(_QWORD*)v67 + 16LL) == v67[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 186, 1);
    }
    v68 = (_DWORD*)v3[188];
    if (*(_QWORD*)v68 != 0 && *(_DWORD*)(*(_QWORD*)v68 + 16LL) == v68[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 188, 1);
    }
    v69 = (_DWORD*)v3[190];
    if (*(_QWORD*)v69 != 0 && *(_DWORD*)(*(_QWORD*)v69 + 16LL) == v69[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 190, 1);
    }
    v70 = (_DWORD*)v3[192];
    if (*(_QWORD*)v70 != 0 && *(_DWORD*)(*(_QWORD*)v70 + 16LL) == v70[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 192, 1);
    }
    v71 = (_DWORD*)v3[194];
    if (*(_QWORD*)v71 != 0 && *(_DWORD*)(*(_QWORD*)v71 + 16LL) == v71[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 194, 1);
    }
    v72 = (_DWORD*)v3[196];
    if (*(_QWORD*)v72 != 0 && *(_DWORD*)(*(_QWORD*)v72 + 16LL) == v72[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 196, 1);
    }
    v73 = (_DWORD*)v3[198];
    if (*(_QWORD*)v73 != 0 && *(_DWORD*)(*(_QWORD*)v73 + 16LL) == v73[2]) {
      return (__int64*)GameRoutine_14a1520(v3 + 198, 1);
    }
  }
  return result;
}

__int64 UnitMake_16325f0(__int64 result, char a2, char a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_225d4e0 == 0) {
    v5 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_225d4d8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_225d4d8) != 0) {
      GameData_225d458 = 14;
      GameData_225d470 = 0;
      GameData_225d478 = 0;
      GameData_225d480 = 0;
      GameData_225d488 = 0;
      GameData_225d490 = 0;
      GameData_225d498 = 0;
      GameData_225d4c0 = 0;
      GameData_225d4c8 = 0;
      GameData_225d4d0 = 0;
      GameData_225d4a0 = 0;
      GameData_225d4a8 = 0;
      GameData_225d4b0 = 0;
      GameData_225d4b8 = 0;
      GameData_225d460 = 0;
      GameData_225d468 = (__int64)GameRoutine_16337a0;
      __cxa_guard_release(&GameData_225d4d8);
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        168, 16, 0);
    v7 = 888;
    v8 = v6;
    v9 = GameData_212c608[0];
    if ((a2 & 1) != 0) {
      v7 = 720;
    }
    *(_QWORD*)(v6 + 96) = 0;
    *(_QWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 112) = 0;
    *(_QWORD*)(v6 + 120) = 0;
    *(_QWORD*)(v6 + 128) = 0;
    *(_WORD*)(v6 + 136) = 0;
    v10 = *(_QWORD*)(v5 + v7);
    *(_QWORD*)(v6 + 138) = 0;
    *(_QWORD*)(v6 + 144) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 24) = "NULL";
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    *(_QWORD*)v6 = v9 + 16;
    *(_QWORD*)(v6 + 8) = 0;
    result = game_ProcInst_Register();
    GameData_225d4e0 = v8;
    *(_QWORD*)(v8 + 152) = v10;
    *(_BYTE*)(v8 + 160) = a3 & 1;
    *(_DWORD*)(v8 + 164) = 0;
    *(_QWORD*)v8 = game_menu_anonymous_UnitMakeDitherAlpha_vtable;
    v11 = *(_QWORD*)(v5 + 32);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v11 + 40);
      if (v12 != 0) {
        *(_QWORD*)(v12 + 48) = v8;
        *(_QWORD*)(v8 + 56) = *(_QWORD*)(v11 + 40);
      }
      *(_QWORD*)(v11 + 40) = v8;
      *(_QWORD*)(v8 + 24) = "UnitMakeDitherAlpha";
      *(_QWORD*)(v8 + 32) = v11;
      *(_DWORD*)(v8 + 140) = game_HashString32();
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 24;
      *(_QWORD*)(v8 + 80) = 1;
      *(_QWORD*)(v8 + 8) = &GameData_225d458;
      *(_QWORD*)(v8 + 16) = &GameData_225d458;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8);
      if ((result & 1) != 0 && (*(_WORD*)(v8 + 136) & 0x100) == 0) {
        *(_WORD*)(v8 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v8 + 136) & 1) == 0) {
      return GameRoutine_657a50(v8, 1);
    }
  }
  return result;
}

__int64 UnitMake_16328c0(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned int v8;
  _DWORD* v9;
  __int64* v10;
  _DWORD* v11;
  _DWORD* v12;
  _DWORD* v13;
  _DWORD* v14;
  _DWORD* v15;
  _DWORD* v16;
  _DWORD* v17;
  _DWORD* v18;
  _DWORD* v19;
  _DWORD* v20;
  _DWORD* v21;
  _DWORD* v22;
  _DWORD* v23;
  _DWORD* v24;
  _DWORD* v25;
  _DWORD* v26;
  _DWORD* v27;
  _DWORD* v28;
  _DWORD* v29;
  _DWORD* v30;
  _DWORD* v31;
  _DWORD* v32;
  _DWORD* v33;
  _DWORD* v34;
  _DWORD* v35;
  _DWORD* v36;
  _DWORD* v37;
  _DWORD* v38;
  _DWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  unsigned int v47;
  __int128 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 j;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  unsigned int v58;
  int8x16_t v59;
  int8x16_t v60;
  _DWORD* v61;
  __int64* v62;
  _DWORD* v63;
  _DWORD* v64;
  _DWORD* v65;
  _DWORD* v66;
  _DWORD* v67;
  _DWORD* v68;
  _DWORD* v69;
  _DWORD* v70;
  _DWORD* v71;
  _DWORD* v72;
  _DWORD* v73;
  _DWORD* v74;
  _DWORD* v75;
  _DWORD* v76;
  _DWORD* v77;
  _DWORD* v78;
  _DWORD* v79;
  _DWORD* v80;
  _DWORD* v81;
  _DWORD* v82;
  _DWORD* v83;
  _DWORD* v84;
  _DWORD* v85;
  _DWORD* v86;
  _DWORD* v87;
  _DWORD* v88;
  _DWORD* v89;
  _DWORD* v90;
  _DWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned int v97;
  unsigned int v98;
  __int128 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 i;
  __int64 v104;
  __int64 v105;
  struct {
    __int64 v106;
    __int64 v107;
  } v106_;
  struct {
    _QWORD v108[2];
    const char* v109;
    int v110;
    char gap44_[4];
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
  } v108_;

  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *(_DWORD*)(result + 152);
  v2 = result;
  if ((unsigned int)(v1 - 2) < 2) {
    v108_.v108[0] = 0;
    v108_.v108[1] = 0;
    v54 = *((_QWORD*)GameData_212c540 + 1);
    v56 = *(_QWORD*)GameData_212c548;
    v55 = *((_QWORD*)GameData_212c548 + 1);
    v108_.v111 = *(_QWORD*)GameData_212c540;
    v108_.v112 = v54;
    v108_.v115 = v108_.v111;
    v108_.v116 = v54;
    v108_.v113 = v56;
    v108_.v114 = v55;
    v108_.v110 = 9;
    v108_.v109 = "UI_Deco_CharaMake_Switching_M";
    v57 = ({
      unsigned __int128 r_ = Manager_bc6460_alt1_pair(
          *(float**)eft_g_effectSystem_ptr[0], (__int64)v108_.v108, 0);
      v58 = COERCE_AS(__typeof__(v58), (unsigned long long)(r_ >> 64));
      v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
      (__int64*)(unsigned long long)r_;
    });
    GameHr_14a10d0(&v106_.v106, (__int64)v57, v58, (__int64)&GameData_1a9f09e),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v61 = *(_DWORD**)(v2 + 1120);
    v62 = (__int64*)(v2 + 1120);
    if (*(_QWORD*)v61 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v61 + 16LL) != v61[2]) {
      goto LABEL_153;
    }
    v63 = *(_DWORD**)(v2 + 1136);
    v62 = (__int64*)(v2 + 1136);
    if (*(_QWORD*)v63 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v63 + 16LL) != v63[2]) {
      goto LABEL_153;
    }
    v64 = *(_DWORD**)(v2 + 1152);
    v62 = (__int64*)(v2 + 1152);
    if (*(_QWORD*)v64 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v64 + 16LL) != v64[2]) {
      goto LABEL_153;
    }
    v65 = *(_DWORD**)(v2 + 1168);
    v62 = (__int64*)(v2 + 1168);
    if (*(_QWORD*)v65 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v65 + 16LL) != v65[2]) {
      goto LABEL_153;
    }
    v66 = *(_DWORD**)(v2 + 1184);
    v62 = (__int64*)(v2 + 1184);
    if (*(_QWORD*)v66 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v66 + 16LL) != v66[2]) {
      goto LABEL_153;
    }
    v67 = *(_DWORD**)(v2 + 1200);
    v62 = (__int64*)(v2 + 1200);
    if (*(_QWORD*)v67 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v67 + 16LL) != v67[2]) {
      goto LABEL_153;
    }
    v68 = *(_DWORD**)(v2 + 1216);
    v62 = (__int64*)(v2 + 1216);
    if (*(_QWORD*)v68 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v68 + 16LL) != v68[2]) {
      goto LABEL_153;
    }
    v69 = *(_DWORD**)(v2 + 1232);
    v62 = (__int64*)(v2 + 1232);
    if (*(_QWORD*)v69 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v69 + 16LL) != v69[2]) {
      goto LABEL_153;
    }
    v70 = *(_DWORD**)(v2 + 1248);
    v62 = (__int64*)(v2 + 1248);
    if (*(_QWORD*)v70 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v70 + 16LL) != v70[2]) {
      goto LABEL_153;
    }
    v71 = *(_DWORD**)(v2 + 1264);
    v62 = (__int64*)(v2 + 1264);
    if (*(_QWORD*)v71 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v71 + 16LL) != v71[2]) {
      goto LABEL_153;
    }
    v72 = *(_DWORD**)(v2 + 1280);
    v62 = (__int64*)(v2 + 1280);
    if (*(_QWORD*)v72 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v72 + 16LL) != v72[2]) {
      goto LABEL_153;
    }
    v73 = *(_DWORD**)(v2 + 1296);
    v62 = (__int64*)(v2 + 1296);
    if (*(_QWORD*)v73 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v73 + 16LL) != v73[2]) {
      goto LABEL_153;
    }
    v74 = *(_DWORD**)(v2 + 1312);
    v62 = (__int64*)(v2 + 1312);
    if (*(_QWORD*)v74 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v74 + 16LL) != v74[2]) {
      goto LABEL_153;
    }
    v75 = *(_DWORD**)(v2 + 1328);
    v62 = (__int64*)(v2 + 1328);
    if (*(_QWORD*)v75 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v75 + 16LL) != v75[2]) {
      goto LABEL_153;
    }
    v76 = *(_DWORD**)(v2 + 1344);
    v62 = (__int64*)(v2 + 1344);
    if (*(_QWORD*)v76 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v76 + 16LL) != v76[2]) {
      goto LABEL_153;
    }
    v77 = *(_DWORD**)(v2 + 1360);
    v62 = (__int64*)(v2 + 1360);
    if (*(_QWORD*)v77 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v77 + 16LL) != v77[2]) {
      goto LABEL_153;
    }
    v78 = *(_DWORD**)(v2 + 1376);
    v62 = (__int64*)(v2 + 1376);
    if (*(_QWORD*)v78 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v78 + 16LL) != v78[2]) {
      goto LABEL_153;
    }
    v79 = *(_DWORD**)(v2 + 1392);
    v62 = (__int64*)(v2 + 1392);
    if (*(_QWORD*)v79 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v79 + 16LL) != v79[2]) {
      goto LABEL_153;
    }
    v80 = *(_DWORD**)(v2 + 1408);
    v62 = (__int64*)(v2 + 1408);
    if (*(_QWORD*)v80 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v80 + 16LL) != v80[2]) {
      goto LABEL_153;
    }
    v81 = *(_DWORD**)(v2 + 1424);
    v62 = (__int64*)(v2 + 1424);
    if (*(_QWORD*)v81 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v81 + 16LL) != v81[2]) {
      goto LABEL_153;
    }
    v82 = *(_DWORD**)(v2 + 1440);
    v62 = (__int64*)(v2 + 1440);
    if (*(_QWORD*)v82 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v82 + 16LL) != v82[2]) {
      goto LABEL_153;
    }
    v83 = *(_DWORD**)(v2 + 1456);
    v62 = (__int64*)(v2 + 1456);
    if (*(_QWORD*)v83 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v83 + 16LL) != v83[2]) {
      goto LABEL_153;
    }
    v84 = *(_DWORD**)(v2 + 1472);
    v62 = (__int64*)(v2 + 1472);
    if (*(_QWORD*)v84 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v84 + 16LL) != v84[2]) {
      goto LABEL_153;
    }
    v85 = *(_DWORD**)(v2 + 1488);
    v62 = (__int64*)(v2 + 1488);
    if (*(_QWORD*)v85 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v85 + 16LL) != v85[2]) {
      goto LABEL_153;
    }
    v86 = *(_DWORD**)(v2 + 1504);
    v62 = (__int64*)(v2 + 1504);
    if (*(_QWORD*)v86 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v86 + 16LL) != v86[2]) {
      goto LABEL_153;
    }
    v87 = *(_DWORD**)(v2 + 1520);
    v62 = (__int64*)(v2 + 1520);
    if (*(_QWORD*)v87 == 0) {
      goto LABEL_153;
    }
    if (*(_DWORD*)(*(_QWORD*)v87 + 16LL) != v87[2]) {
      goto LABEL_153;
    }
    v88 = *(_DWORD**)(v2 + 1536);
    v62 = (__int64*)(v2 + 1536);
    if (*(_QWORD*)v88 == 0 || *(_DWORD*)(*(_QWORD*)v88 + 16LL) != v88[2] ||
        (v89 = *(_DWORD**)(v2 + 1552), v62 = (__int64*)(v2 + 1552),
         *(_QWORD*)v89 == 0) ||
        *(_DWORD*)(*(_QWORD*)v89 + 16LL) != v89[2] ||
        (v90 = *(_DWORD**)(v2 + 1568), v62 = (__int64*)(v2 + 1568),
         *(_QWORD*)v90 == 0) ||
        *(_DWORD*)(*(_QWORD*)v90 + 16LL) != v90[2] ||
        (v91 = *(_DWORD**)(v2 + 1584), v62 = (__int64*)(v2 + 1584),
         *(_QWORD*)v91 == 0) ||
        *(_DWORD*)(*(_QWORD*)v91 + 16LL) != v91[2]) {
    LABEL_153:
      v92 = v106_.v106;
      v93 = v106_.v107;
      if (v106_.v107 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v106_.v107 + 8), 1u,
                                  memory_order_relaxed);
      }
      v94 = v62[1];
      *v62 = v92;
      v62[1] = v93;
      if (v94 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v94),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v93 = v62[1];
      }
      if (v93 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v93),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    v95 = v106_.v106;
    v96 = *(_QWORD*)v106_.v106;
    if (*(_QWORD*)v106_.v106 != 0 &&
        *(_DWORD*)(v96 + 16) == *(_DWORD*)(v106_.v106 + 8)) {
      v97 = *(_DWORD*)(v96 + 36);
      if (v97 != 0) {
        PSEUDO_LOW_LANE128(v60, n128_u8, *(_BYTE*)(v2 + 276));
        v98 = 0;
        PSEUDO_LOW_LANE128(v59, n128_u32, 1);
        v99 =
            LANES128_OF(
                vbslq_s8(
                    vdupq_lane_s8(
                        COERCE_AS(int8x8_t,
                                  LANES128_OF(vceqq_s8(v60, v59)).n128_u64[0]),
                        0),
                    COERCE_AS(int8x16_t, GameData_1a83700),
                    COERCE_AS(int8x16_t, GameData_1a83180)))
                .n128_u64[0];
        do {
          if ((int)v97 > (int)v98) {
            v100 = *(_QWORD*)(v96 + 40 + 8LL * (int)v98);
            if (v100 != 0) {
              *(_OWORD*)(v100 + 16) = v99;
              *(_BYTE*)(v100 + 128) = 1;
              v97 = *(_DWORD*)(v96 + 36);
            }
          }
          ++v98;
        } while (v98 < v97);
      }
    }
    result = game_14a3920(v95),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v101 = *(_QWORD*)v95;
    if (*(_QWORD*)v95 != 0 && *(_DWORD*)(v101 + 16) == *(_DWORD*)(v95 + 8)) {
      v102 = *(unsigned int*)(v101 + 36);
      if ((_DWORD)v102 != 0) {
        for (i = 0; i < v102; ++i) {
          v104 = *(_QWORD*)(v101 + 40 + 8 * i);
          if (v104 != 0) {
            *(_DWORD*)(v104 + 408) = -2;
            v102 = *(unsigned int*)(v101 + 36);
          }
        }
      }
    }
    goto LABEL_177;
  }
  if (v1 == 4 || v1 == 1) {
    v108_.v108[0] = 0;
    v108_.v108[1] = 0;
    v4 = *((_QWORD*)GameData_212c540 + 1);
    v6 = *(_QWORD*)GameData_212c548;
    v5 = *((_QWORD*)GameData_212c548 + 1);
    v108_.v111 = *(_QWORD*)GameData_212c540;
    v108_.v112 = v4;
    v108_.v115 = v108_.v111;
    v108_.v116 = v4;
    v108_.v113 = v6;
    v108_.v114 = v5;
    v108_.v110 = 9;
    v108_.v109 = "UI_Deco_CharaMake_Switching_L";
    v7 = ({
      unsigned __int128 r_ = Manager_bc6460_alt1_pair(
          *(float**)eft_g_effectSystem_ptr[0], (__int64)v108_.v108, 0);
      v58 = COERCE_AS(__typeof__(v58), (unsigned long long)(r_ >> 64));
      v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
      (__int64*)(unsigned long long)r_;
    });
    GameHr_14a10d0(&v106_.v106, (__int64)v7, v8, (__int64)&GameData_1a9f09e),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = *(_DWORD**)(v2 + 1120);
    v10 = (__int64*)(v2 + 1120);
    if (*(_QWORD*)v9 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v9 + 16LL) != v9[2]) {
      goto LABEL_67;
    }
    v11 = *(_DWORD**)(v2 + 1136);
    v10 = (__int64*)(v2 + 1136);
    if (*(_QWORD*)v11 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v11 + 16LL) != v11[2]) {
      goto LABEL_67;
    }
    v12 = *(_DWORD**)(v2 + 1152);
    v10 = (__int64*)(v2 + 1152);
    if (*(_QWORD*)v12 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v12 + 16LL) != v12[2]) {
      goto LABEL_67;
    }
    v13 = *(_DWORD**)(v2 + 1168);
    v10 = (__int64*)(v2 + 1168);
    if (*(_QWORD*)v13 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v13 + 16LL) != v13[2]) {
      goto LABEL_67;
    }
    v14 = *(_DWORD**)(v2 + 1184);
    v10 = (__int64*)(v2 + 1184);
    if (*(_QWORD*)v14 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v14 + 16LL) != v14[2]) {
      goto LABEL_67;
    }
    v15 = *(_DWORD**)(v2 + 1200);
    v10 = (__int64*)(v2 + 1200);
    if (*(_QWORD*)v15 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v15 + 16LL) != v15[2]) {
      goto LABEL_67;
    }
    v16 = *(_DWORD**)(v2 + 1216);
    v10 = (__int64*)(v2 + 1216);
    if (*(_QWORD*)v16 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v16 + 16LL) != v16[2]) {
      goto LABEL_67;
    }
    v17 = *(_DWORD**)(v2 + 1232);
    v10 = (__int64*)(v2 + 1232);
    if (*(_QWORD*)v17 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v17 + 16LL) != v17[2]) {
      goto LABEL_67;
    }
    v18 = *(_DWORD**)(v2 + 1248);
    v10 = (__int64*)(v2 + 1248);
    if (*(_QWORD*)v18 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v18 + 16LL) != v18[2]) {
      goto LABEL_67;
    }
    v19 = *(_DWORD**)(v2 + 1264);
    v10 = (__int64*)(v2 + 1264);
    if (*(_QWORD*)v19 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v19 + 16LL) != v19[2]) {
      goto LABEL_67;
    }
    v20 = *(_DWORD**)(v2 + 1280);
    v10 = (__int64*)(v2 + 1280);
    if (*(_QWORD*)v20 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v20 + 16LL) != v20[2]) {
      goto LABEL_67;
    }
    v21 = *(_DWORD**)(v2 + 1296);
    v10 = (__int64*)(v2 + 1296);
    if (*(_QWORD*)v21 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v21 + 16LL) != v21[2]) {
      goto LABEL_67;
    }
    v22 = *(_DWORD**)(v2 + 1312);
    v10 = (__int64*)(v2 + 1312);
    if (*(_QWORD*)v22 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v22 + 16LL) != v22[2]) {
      goto LABEL_67;
    }
    v23 = *(_DWORD**)(v2 + 1328);
    v10 = (__int64*)(v2 + 1328);
    if (*(_QWORD*)v23 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v23 + 16LL) != v23[2]) {
      goto LABEL_67;
    }
    v24 = *(_DWORD**)(v2 + 1344);
    v10 = (__int64*)(v2 + 1344);
    if (*(_QWORD*)v24 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v24 + 16LL) != v24[2]) {
      goto LABEL_67;
    }
    v25 = *(_DWORD**)(v2 + 1360);
    v10 = (__int64*)(v2 + 1360);
    if (*(_QWORD*)v25 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v25 + 16LL) != v25[2]) {
      goto LABEL_67;
    }
    v26 = *(_DWORD**)(v2 + 1376);
    v10 = (__int64*)(v2 + 1376);
    if (*(_QWORD*)v26 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v26 + 16LL) != v26[2]) {
      goto LABEL_67;
    }
    v27 = *(_DWORD**)(v2 + 1392);
    v10 = (__int64*)(v2 + 1392);
    if (*(_QWORD*)v27 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v27 + 16LL) != v27[2]) {
      goto LABEL_67;
    }
    v28 = *(_DWORD**)(v2 + 1408);
    v10 = (__int64*)(v2 + 1408);
    if (*(_QWORD*)v28 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v28 + 16LL) != v28[2]) {
      goto LABEL_67;
    }
    v29 = *(_DWORD**)(v2 + 1424);
    v10 = (__int64*)(v2 + 1424);
    if (*(_QWORD*)v29 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v29 + 16LL) != v29[2]) {
      goto LABEL_67;
    }
    v30 = *(_DWORD**)(v2 + 1440);
    v10 = (__int64*)(v2 + 1440);
    if (*(_QWORD*)v30 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v30 + 16LL) != v30[2]) {
      goto LABEL_67;
    }
    v31 = *(_DWORD**)(v2 + 1456);
    v10 = (__int64*)(v2 + 1456);
    if (*(_QWORD*)v31 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v31 + 16LL) != v31[2]) {
      goto LABEL_67;
    }
    v32 = *(_DWORD**)(v2 + 1472);
    v10 = (__int64*)(v2 + 1472);
    if (*(_QWORD*)v32 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v32 + 16LL) != v32[2]) {
      goto LABEL_67;
    }
    v33 = *(_DWORD**)(v2 + 1488);
    v10 = (__int64*)(v2 + 1488);
    if (*(_QWORD*)v33 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v33 + 16LL) != v33[2]) {
      goto LABEL_67;
    }
    v34 = *(_DWORD**)(v2 + 1504);
    v10 = (__int64*)(v2 + 1504);
    if (*(_QWORD*)v34 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v34 + 16LL) != v34[2]) {
      goto LABEL_67;
    }
    v35 = *(_DWORD**)(v2 + 1520);
    v10 = (__int64*)(v2 + 1520);
    if (*(_QWORD*)v35 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(*(_QWORD*)v35 + 16LL) != v35[2]) {
      goto LABEL_67;
    }
    v36 = *(_DWORD**)(v2 + 1536);
    v10 = (__int64*)(v2 + 1536);
    if (*(_QWORD*)v36 == 0 || *(_DWORD*)(*(_QWORD*)v36 + 16LL) != v36[2] ||
        (v37 = *(_DWORD**)(v2 + 1552), v10 = (__int64*)(v2 + 1552),
         *(_QWORD*)v37 == 0) ||
        *(_DWORD*)(*(_QWORD*)v37 + 16LL) != v37[2] ||
        (v38 = *(_DWORD**)(v2 + 1568), v10 = (__int64*)(v2 + 1568),
         *(_QWORD*)v38 == 0) ||
        *(_DWORD*)(*(_QWORD*)v38 + 16LL) != v38[2] ||
        (v39 = *(_DWORD**)(v2 + 1584), v10 = (__int64*)(v2 + 1584),
         *(_QWORD*)v39 == 0) ||
        *(_DWORD*)(*(_QWORD*)v39 + 16LL) != v39[2]) {
    LABEL_67:
      v40 = v106_.v106;
      v41 = v106_.v107;
      if (v106_.v107 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v106_.v107 + 8), 1u,
                                  memory_order_relaxed);
      }
      v42 = v10[1];
      *v10 = v40;
      v10[1] = v41;
      if (v42 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v42),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v41 = v10[1];
      }
      if (v41 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v41),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    v43 = 0x0.0p+0f;
    v44 = v106_.v106;
    v45 = *(_QWORD*)v106_.v106;
    if (*(_BYTE*)(*GameData_2131a90[0] + 208) != 0) {
      v43 = 0x1.9000000000000p+7f;
    }
    if (v45 != 0 && *(_DWORD*)(v45 + 16) == *(_DWORD*)(v106_.v106 + 8)) {
      v46 = *(_DWORD*)(v45 + 36);
      if (v46 != 0) {
        v47 = 0;
        LODWORD(v48) = 1138491392;
        *((float*)&v48 + 1) = v43;
        *((_QWORD*)&v48 + 1) = 0;
        do {
          if ((int)v46 > (int)v47) {
            v49 = *(_QWORD*)(v45 + 40 + 8LL * (int)v47);
            if (v49 != 0) {
              *(_OWORD*)(v49 + 16) = v48;
              *(_BYTE*)(v49 + 128) = 1;
              v46 = *(_DWORD*)(v45 + 36);
            }
          }
          ++v47;
        } while (v47 < v46);
      }
    }
    result = game_14a3920(v44),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v50 = *(_QWORD*)v44;
    if (*(_QWORD*)v44 != 0 && *(_DWORD*)(v50 + 16) == *(_DWORD*)(v44 + 8)) {
      v51 = *(unsigned int*)(v50 + 36);
      if ((_DWORD)v51 != 0) {
        for (j = 0; j < v51; ++j) {
          v53 = *(_QWORD*)(v50 + 40 + 8 * j);
          if (v53 != 0) {
            *(_DWORD*)(v53 + 408) = -2;
            v51 = *(unsigned int*)(v50 + 36);
          }
        }
      }
    }
  LABEL_177:
    v105 = v106_.v107;
    if (v106_.v107 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v106_.v107 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return std___1___shared_weak_count___release_weak_alt1(v105);
    }
  }
  return result;
}

void UnitMake_1633490(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  unsigned int v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  const char* v27;
  __int128* v28;
  unsigned __int64 v29;
  __int128 v30;
  __int64 v31;
  __int128 v32;
  unsigned int v33;
  __int128 v34;
  unsigned int v35;
  unsigned int v36;
  struct {
    _BYTE v37[260];
    char v38;
    char v39;
    char v40;
    char v41;
    char gap264_[12];
    char v42;
    char v43;
    char v44;
    char v45;
  } v37_;
  __int128 v46;
  __int128 v47;

  v1 = GameData_2233d70;
  if (GameData_2233d70 != 0) {
    v2 = *(_DWORD*)(a1 + 152);
    switch (v2) {
    case 1:
      v31 = 880;
      if (*(_BYTE*)(a1 + 276) == 1) {
        v31 = 712;
      }
      GameHr_179c320((__int64)v37_.v37, *(_QWORD*)(a1 + v31));
      v20 = *(_QWORD*)(v1 + 168);
      if (v20 == 0) {
        goto LABEL_28;
      }
    LABEL_26:
      LOBYTE(v16) = v37_.v37[256];
      LOBYTE(v17) = v37_.v37[257];
      LOBYTE(v18) = v37_.v42;
      LOBYTE(v19) = v37_.v43;
      *(float*)&v32 = (float)v16 / 0x1.fe00000000000p+7f;
      *(float*)&v33 = (float)v17 / 0x1.fe00000000000p+7f;
      *(float*)&v34 = (float)v18 / 0x1.fe00000000000p+7f;
      DWORD1(v32) = v33;
      LOBYTE(v33) = v37_.v37[258];
      *(float*)&v35 = (float)v33 / 0x1.fe00000000000p+7f;
      DWORD2(v32) = v35;
      LOBYTE(v35) = v37_.v37[259];
      *(float*)&v36 = (float)v35 / 0x1.fe00000000000p+7f;
      DWORD3(v32) = v36;
      LOBYTE(v36) = v37_.v44;
      v47 = v32;
      *(float*)&v32 = (float)v19;
      LOBYTE(v19) = v37_.v45;
      *((float*)&v34 + 1) = *(float*)&v32 / 0x1.fe00000000000p+7f;
      *((_QWORD*)&v34 + 1) =
          __PAIR64__(COERCE_UNSIGNED_INT((float)v19 / 0x1.fe00000000000p+7f),
                     COERCE_UNSIGNED_INT((float)v36 / 0x1.fe00000000000p+7f));
      v46 = v34;
      GameRoutine_1917400_alt1(v20, "_Skin", 5u, (__int64)&v47, 1, 1);
      v27 = "_Lip";
      v28 = &v46;
      v29 = 4;
      v26 = v20;
    LABEL_27:
      GameRoutine_1917400_alt1(v26, v27, v29, (__int64)v28, 1, 1);
    LABEL_28:
      TrickEntity_7d1480((__int64)v37_.v37);
      return;
    case 3:
      v21 = 880;
      if (*(_BYTE*)(a1 + 276) == 1) {
        v21 = 712;
      }
      GameHr_179c320((__int64)v37_.v37, *(_QWORD*)(a1 + v21));
      v26 = *(_QWORD*)(v1 + 168);
      if (v26 == 0) {
        goto LABEL_28;
      }
      LOBYTE(v22) = v37_.v38;
      LOBYTE(v23) = v37_.v39;
      LOBYTE(v24) = v37_.v40;
      v27 = "_Hair";
      v28 = &v47;
      v29 = 5;
      LOBYTE(v25) = v37_.v41;
      *(float*)&v30 = (float)v22 / 0x1.fe00000000000p+7f;
      *((float*)&v30 + 1) = (float)v23 / 0x1.fe00000000000p+7f;
      *((float*)&v30 + 2) = (float)v24 / 0x1.fe00000000000p+7f;
      *((float*)&v30 + 3) = (float)v25 / 0x1.fe00000000000p+7f;
      v47 = v30;
      goto LABEL_27;
    case 2:
      if (*(_DWORD*)(a1 + 164) >= 3u) {
        v3 = 3;
      }
      else {
        v3 = *(_DWORD*)(a1 + 164);
      }
      GameHr_19170a0(*(_QWORD*)(GameData_2233d70 + 168),
                     &GameData_1ba4138_alt1[24 * v3 + 1]);
      v5 = a1;
      if (*(_DWORD*)(a1 + 168) != -1) {
        v6 = GameData_2233d70;
        v7 = 880;
        if (*(_BYTE*)(a1 + 276) == 1) {
          v7 = 712;
        }
        GameHr_179c320((__int64)v37_.v37, *(_QWORD*)(a1 + v7));
        v12 = *(_QWORD*)(v6 + 168);
        if (v12 != 0) {
          LOBYTE(v8) = v37_.v38;
          LOBYTE(v9) = v37_.v39;
          LOBYTE(v10) = v37_.v40;
          LOBYTE(v11) = v37_.v41;
          *(float*)&v13 = (float)v8 / 0x1.fe00000000000p+7f;
          *((float*)&v13 + 1) = (float)v9 / 0x1.fe00000000000p+7f;
          *((float*)&v13 + 2) = (float)v10 / 0x1.fe00000000000p+7f;
          *((float*)&v13 + 3) = (float)v11 / 0x1.fe00000000000p+7f;
          v47 = v13;
          GameRoutine_1917400_alt1(v12, "_Hair", 5u, (__int64)&v47, 1, 1);
        }
        TrickEntity_7d1480((__int64)v37_.v37);
        v5 = a1;
      }
      if (*(_DWORD*)(v5 + 160) != -1) {
        v14 = GameData_2233d70;
        v15 = 880;
        if (*(_BYTE*)(v5 + 276) == 1) {
          v15 = 712;
        }
        GameHr_179c320((__int64)v37_.v37, *(_QWORD*)(v5 + v15));
        v20 = *(_QWORD*)(v14 + 168);
        if (v20 == 0) {
          goto LABEL_28;
        }
        goto LABEL_26;
      }
      break;
    default:
      break;
    }
  }
}

__int64 UnitMake_16337a0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  float v3;
  int v4;
  float v5;
  float v6;
  int* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  float v12;
  __int64 result;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;
  float v19;
  int v20;
  float v21;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = *(float*)(a1 + 164) + 0x1.0aaaaa0000000p+4f;
  v4 = *(unsigned __int8*)(a1 + 160);
  if (v3 >= 0x1.9000000000000p+6f) {
    v3 = 0x1.9000000000000p+6f;
  }
  v5 = 0x1.0000000000000p+0f;
  *(float*)(a1 + 164) = v3;
  if (v4 != 0) {
    v6 = 0x0.0p+0f;
  }
  else {
    v6 = 0x1.0000000000000p+0f;
  }
  if (v4 == 0) {
    v5 = 0x0.0p+0f;
  }
  v7 = &GameData_21f4cb0;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                            memory_order_acquire) &
       1) == 0) {
    v19 = v5;
    v21 = v6;
    v20 = __cxa_guard_acquire(GameData_212deb8);
    v5 = v19;
    v7 = GameData_212deb0;
    v6 = v21;
    if (v20 != 0) {
      GameData_21f4cb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
      __cxa_guard_release(&GameData_21f4cb8);
      v5 = v19;
      v7 = GameData_212deb0;
      v6 = v21;
    }
  }
  v8 = *(_QWORD*)(v1 + 512);
  v9 = v8;
  while (v9 != *(_QWORD*)(v1 + 504)) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    v8 -= 16;
    if (v10 == *v7) {
      if (*(_QWORD*)(v1 + 512) != v8) {
        v11 = *(_QWORD*)(v8 + 8);
        goto LABEL_15;
      }
      break;
    }
  }
  v11 = 0;
LABEL_15:
  v12 =
      GameRoutine_618640(4, v6, v5, *(float*)(a1 + 164), 0x1.9000000000000p+6f);
  result = game_character_1084940(v11, 0, v12);
  if (*(float*)(a1 + 164) >= 0x1.9000000000000p+6f) {
    v14 = *(unsigned __int8**)(a1 + 16);
    *(_DWORD*)(a1 + 164) = 0;
    if (v14 != nullptr) {
      v15 = *v14;
      v16 = v15 > 0x10;
      v17 = (1 << v15) & 0x1CE00;
      if (!v16 && v17 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
