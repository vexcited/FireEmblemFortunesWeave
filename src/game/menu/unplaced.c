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
__n128 game_menu_fe1310(__int64 a1);
void game_menu_fe16a0(__int64 a1);
__n128 game_menu_fe1bd0(__int64 a1);
__n128 game_menu_fe1d60(__int64 a1);
void game_menu_15b8020(__int64 a1);
__int64 game_menu_164dea0(__int64 a1);
__int64 game_menu_16a89d0(__int64 a1);
__attribute__((swiftcall)) void
game_menu_16d2350(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
                  __int64 a2);
__attribute__((swiftcall)) void
game_menu_16d23e0(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
                  __int64 a2);
void game_menu_16e7af0(__int64 a1);
__int64 game_menu_16edc90(__int64 a1, __int64* a2);
__int64 game_menu_16ee000(__int64 a1, __int64* a2);
_QWORD* game_menu_16f60e0(__int64 a1, __int64 a2, int a3, __int64 a4,
                          __int64 a5);
_QWORD* game_menu_16f64c0(__int64 a1, _BYTE* a2, unsigned int a3, __int64 a4,
                          __int64 a5);
_QWORD* game_menu_16f69a0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                          __int64 a5);
__int64 game_menu_178ce60(__int64 a1, int a2);
void game_menu_178cf10(__int64 a1);
__int64** game_menu_179fec0(__int64** result, long double a2);
__int64 game_menu_1820a00();
__int64 game_menu_1860c20(__int64 a1);
__int64 game_menu_1a06650(__int64 a1, __int64 a2, int a3);
__int64 game_menu_1a06840(__int64 a1, __int64 a2, int a3, int a4);
__int64 LayoutAccessor_155e830_alt1(_QWORD,
                                    _QWORD) __asm__("LayoutAccessor_155e830");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
void game_menu_16e75a0(__int64* a1, int a2, int a3, int a4);
void game_menu_16e7880(__int64* a1, int a2, char a3);

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
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9[4];
  int v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  result = *(_QWORD*)(a1 + 168);
  if (result != 0) {
    v5 = *(_QWORD*)(result + 440);
    if (v5 != 0 && *(_BYTE*)(v5 + 16) == 8) {
      v11 = v1;
      v12 = v2;
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
        game_HasSkill(result + 1744, &v10);
        result = v8;
      }
      result = GameRoutine_6c47b0(result, v9, 1, 0);
      v3 = v7;
    }
    *(_QWORD*)(v3 + 168) = 0;
  }
  return result;
}

__n128 game_menu_fe1310(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Start_Fab_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
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
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_fe16a0(__int64 a1)
{
  int v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  char v16;
  __int64 v17;
  _QWORD* v18;
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
      v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v4 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      strcpy(v4, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Fab_m01");
      if (GameData_21ec7b8 == 0) {
        v5 = fw_memory_HeapManager_Allocate(*v3, 1376, 16, 0);
        GameRoutine_1130770(v5, v4, 0);
        v6 = *(_QWORD*)(a1 + 40);
        if (v6 != 0) {
          *(_QWORD*)(v6 + 48) = v5;
          *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v5;
        *(_QWORD*)(v5 + 24) = "talk::Seq";
        *(_QWORD*)(v5 + 32) = a1;
        *(_DWORD*)(v5 + 140) = game_HashString32();
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
      if (*(_QWORD*)(*v3 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*v3 + v9);
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
      v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v12 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      strcpy(v12, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Fab_m02");
      if (GameData_21ec7b8 == 0) {
        v13 = fw_memory_HeapManager_Allocate(*v11, 1376, 16, 0);
        GameRoutine_1130770(v13, v12, 0);
        v14 = *(_QWORD*)(a1 + 40);
        if (v14 != 0) {
          *(_QWORD*)(v14 + 48) = v13;
          *(_QWORD*)(v13 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v13;
        *(_QWORD*)(v13 + 24) = "talk::Seq";
        *(_QWORD*)(v13 + 32) = a1;
        *(_DWORD*)(v13 + 140) = game_HashString32();
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
      if (*(_QWORD*)(*v11 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v17);
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
      v18 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v19 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      strcpy(v19, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Fab_m03");
      if (GameData_21ec7b8 == 0) {
        v20 = fw_memory_HeapManager_Allocate(*v18, 1376, 16, 0);
        GameRoutine_1130770(v20, v19, 0);
        v21 = *(_QWORD*)(a1 + 40);
        if (v21 != 0) {
          *(_QWORD*)(v21 + 48) = v20;
          *(_QWORD*)(v20 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v20;
        *(_QWORD*)(v20 + 24) = "talk::Seq";
        *(_QWORD*)(v20 + 32) = a1;
        *(_DWORD*)(v20 + 140) = game_HashString32();
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
      if (*(_QWORD*)(*v18 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*v18 + v24);
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

__n128 game_menu_fe1bd0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Fab_m05");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
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
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_fe1d60(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_NoGive_Fab_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
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
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_15b8020(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak();
    v6 = v16;
    if (v16 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_155e830(v6, 0);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v7 = *(_BYTE**)(a1 + 112);
  }
  else {
    v7 = (_BYTE*)(a1 + 97);
  }
  LayoutAccessor_1560520((__int64*)(*(_QWORD*)(a1 + 8) + 952LL),
                         (__int64)"L_MenuItem_Empty", (__int64)"MenuItemList",
                         v7);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 112);
  }
  else {
    v8 = a1 + 97;
  }
  LayoutAccessor_1560070((void*)(&v18_.v18),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 952LL), v8);
  v10 = v18_.v18;
  v9 = v18_.v19;
  v11 = *(_QWORD*)(a1 + 56);
  v18_.v18 = 0;
  v18_.v19 = 0;
  *(_QWORD*)(a1 + 48) = v10;
  *(_QWORD*)(a1 + 56) = v9;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak();
    if (v18_.v19 != 0) {
      std___1___shared_weak_count___release_weak();
    }
    v9 = *(_QWORD*)(a1 + 56);
  }
  if (v9 == 0) {
    goto LABEL_20;
  }
  v12 = std___1___shared_weak_count_lock(v9);
  if (v12 == 0) {
    goto LABEL_20;
  }
  v13 = v12;
  v14 = (atomic_ullong*)(v12 + 8);
  v15 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = v15;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak();
    v15 = v17;
    if (v17 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if (v15 == nullptr) {
  LABEL_20:
    v15 = &ui_LayoutAccessor_empty_;
  }
LABEL_21:
  LayoutAccessor_155e830(v15, 1);
  *(_BYTE*)(a1 + 78) = 1;
}

__int64 game_menu_164dea0(__int64 a1)
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
  __int64 result;
  __int64 v12;

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
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = *(_QWORD*)(a1 + 208);
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v6);
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
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  return result;
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

__attribute__((swiftcall)) void

game_menu_16d2350(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
                  __int64 a2)
{
  _DWORD* a3 = (_DWORD*)(unsigned __int64)x8_;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v9 = v3;
    v10 = v4;
    v5 = a3;
    v6 = *(_QWORD*)(GameData_21f1e08 + 144);
    v7 = *(_QWORD*)(GameData_21f1e08 + 136);
    v8 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 560LL))(a1, &v7);
    if (v8 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v8);
    }
    a3 = v5;
  }
  *a3 = 0x8000;
}

__attribute__((swiftcall)) void

game_menu_16d23e0(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
                  __int64 a2)
{
  _DWORD* a3 = (_DWORD*)(unsigned __int64)x8_;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v10 = v3;
    v11 = v4;
    v5 = a3;
    v6 = *(_QWORD*)(GameData_21f1e08 + 144);
    v7 = a1 - 88;
    v8 = *(_QWORD*)(GameData_21f1e08 + 136);
    v9 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v7 + 560LL))(v7, &v8);
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v9);
    }
    a3 = v5;
  }
  *a3 = 0x8000;
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

__int64 game_menu_16edc90(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[2];
  _BYTE v35[200];

  result = game_menu_GameMenu_Unknown135();
  v5 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v35, "%s%s", "Left", "In");
    result = ProcTransitionAnim_156af20(v5, 2, 0, a1 + 952, "Left", v35);
    if (result != -1) {
      v7 = (__int64*)a2[1];
      v6 = a2[2];
      if ((unsigned __int64)v7 >= v6) {
        v9 = *a2;
        v10 = (__int64)v7 - *a2;
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
          v16 = fw_memory_HeapManager_Allocate(
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
        memcpy(v18, v9, v10);
        *a2 = v18;
        a2[1] = v8;
        a2[2] = v17;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v19);
        }
      }
      else {
        *v7 = result;
        v8 = (__int64)(v7 + 1);
      }
      a2[1] = v8;
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 120LL))(a1 + 1056);
      if ((result & 1) == 0) {
        snd_Fade_Fade_10c830(v35, 0.0f);
        snd_play_ff2d0((void*)(v34), "SE_SYS_Window_Open", "SE_SYS_Window_Open",
                       v35, 0, 65537, 0, 0.0f, 1.0f);
        result = snd_Fade_Destroy_Fade(v35);
      }
    }
    v20 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf(v35, "%s%s", "Right", "In");
      result = ProcTransitionAnim_156af20(v20, 3, 0, a1 + 952, "Right", v35);
      if (result != -1) {
        v22 = (__int64*)a2[1];
        v21 = a2[2];
        if ((unsigned __int64)v22 < v21) {
          *v22 = result;
          v23 = (__int64)(v22 + 1);
        LABEL_39:
          a2[1] = v23;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 120LL))(
              a1 + 1056);
          if ((result & 1) == 0) {
            snd_Fade_Fade_10c830(v35, 0.0f);
            snd_play_ff2d0((void*)(v34), "SE_SYS_Window_Open",
                           "SE_SYS_Window_Open", v35, 0, 65537, 0, 0.0f, 1.0f);
            return snd_Fade_Destroy_Fade(v35);
          }
          return result;
        }
        v24 = *a2;
        v25 = (__int64)v22 - *a2;
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
            memcpy(v32, v24, v25);
            *a2 = v32;
            a2[1] = v23;
            a2[2] = v31;
            if (v24 != 0) {
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
            }
            goto LABEL_39;
          }
          if (v28 >> 61 == 0) {
            v29 = result;
            v30 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
            result = v29;
            goto LABEL_35;
          }
        LABEL_43:
          GameRoutine_60a210(result);
        }
      LABEL_42:
        GameRoutine_874500();
      }
    }
  }
  return result;
}

__int64 game_menu_16ee000(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[2];
  _BYTE v35[200];

  result = game_menu_GameMenu_Unknown136();
  v5 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v35, "%s%s", "Right", "Out");
    result = ProcTransitionAnim_156af20(v5, 3, 1, a1 + 952, "Right", v35);
    if (result != -1) {
      v7 = (__int64*)a2[1];
      v6 = a2[2];
      if ((unsigned __int64)v7 >= v6) {
        v9 = *a2;
        v10 = (__int64)v7 - *a2;
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
          v16 = fw_memory_HeapManager_Allocate(
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
        memcpy(v18, v9, v10);
        *a2 = v18;
        a2[1] = v8;
        a2[2] = v17;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v19);
        }
      }
      else {
        *v7 = result;
        v8 = (__int64)(v7 + 1);
      }
      a2[1] = v8;
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 128LL))(a1 + 1056);
      if ((result & 1) == 0) {
        snd_Fade_Fade_10c830(v35, 0.0f);
        snd_play_ff2d0((void*)(v34), "SE_SYS_Window_Close",
                       "SE_SYS_Window_Close", v35, 0, 65537, 0, 0.0f, 1.0f);
        result = snd_Fade_Destroy_Fade(v35);
      }
    }
    v20 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf(v35, "%s%s", "Left", "Out");
      result = ProcTransitionAnim_156af20(v20, 2, 1, a1 + 952, "Left", v35);
      if (result != -1) {
        v22 = (__int64*)a2[1];
        v21 = a2[2];
        if ((unsigned __int64)v22 < v21) {
          *v22 = result;
          v23 = (__int64)(v22 + 1);
        LABEL_39:
          a2[1] = v23;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 128LL))(
              a1 + 1056);
          if ((result & 1) == 0) {
            snd_Fade_Fade_10c830(v35, 0.0f);
            snd_play_ff2d0((void*)(v34), "SE_SYS_Window_Close",
                           "SE_SYS_Window_Close", v35, 0, 65537, 0, 0.0f, 1.0f);
            return snd_Fade_Destroy_Fade(v35);
          }
          return result;
        }
        v24 = *a2;
        v25 = (__int64)v22 - *a2;
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
            memcpy(v32, v24, v25);
            *a2 = v32;
            a2[1] = v23;
            a2[2] = v31;
            if (v24 != 0) {
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
            }
            goto LABEL_39;
          }
          if (v28 >> 61 == 0) {
            v29 = result;
            v30 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
            result = v29;
            goto LABEL_35;
          }
        LABEL_43:
          GameRoutine_60a210(result);
        }
      LABEL_42:
        GameRoutine_874500();
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
                    nn_os_LockMutex(&game_g_random_mutex);
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
                    nn_os_UnlockMutex(&game_g_random_mutex);
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
                GameRoutine_6e3b50((__int64)&v38, v39_.v39);
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
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
                    v20 = v39_.v39;
                  }
                }
                else {
                  v20 = nullptr;
                }
                GameRoutine_6e3b50((__int64)&v38, v20);
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

_QWORD* game_menu_16f64c0(__int64 a1, _BYTE* a2, unsigned int a3, __int64 a4,
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
  _BYTE* v54;

  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 48LL);
  v10 = GameData_212ceb0;
  v54 = a2;
  v11 = (__int64*)(v9 + 8LL * a3);
  if ((a3 & 0x80000000) == 0) {
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
    v15 = GameRoutine_adf970(v14, 0);
  }
  else {
    v15 = &GameData_1a9f09e;
  }
  v16 = GameRoutine_16f6810(a1, &v54, (__int64)v15, a4, a5, a5);
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
                    nn_os_LockMutex(&game_g_random_mutex);
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
                    nn_os_UnlockMutex(&game_g_random_mutex);
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
                GameRoutine_6e3b50((__int64)&v46, v47_.v47);
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
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
                    v28 = v47_.v47;
                  }
                }
                else {
                  v28 = nullptr;
                }
                GameRoutine_6e3b50((__int64)&v46, v28);
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

_QWORD* game_menu_16f69a0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                          __int64 a5)
{
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  void* v14;
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
  v11 = (__int64*)(v9 + 8LL * a3);
  if ((a3 & 0x80000000) == 0) {
    v12 = v11;
  }
  else {
    v12 = GameData_212ceb0;
  }
  if (*((_BYTE*)v12 + 1) != 0) {
    v13 = game_UnitPool_Get((_BYTE*)v12 + 1);
    if (*((_BYTE*)v13 + 2136) != 0) {
    LABEL_6:
      v14 = game_97b2f0((__int64)(v13 + 263));
      goto LABEL_9;
    }
  }
  else {
    v13 = nullptr;
    if ((*(_BYTE*)0x858LL) != 0) {
      goto LABEL_6;
    }
  }
  v14 = GameRoutine_67ed20((_QWORD*)v13[49]);
LABEL_9:
  v15 = GameRoutine_16f6810(a1, (_BYTE**)v43, (__int64)v14, a4, a5, a5);
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
                    nn_os_LockMutex(&game_g_random_mutex);
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
                    nn_os_UnlockMutex(&game_g_random_mutex);
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
                GameRoutine_6e3b50((__int64)&v45, v46_.v46);
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
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
                    v27 = v46_.v46;
                  }
                }
                else {
                  v27 = nullptr;
                }
                GameRoutine_6e3b50((__int64)&v45, v27);
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

void game_menu_178cf10(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  void (**v12)(__int64);
  __int64 v13;
  int v14;
  __int64 v15;
  __int64* v16;
  const char* v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  __int64 v21;

  game_menu_GameMenuItem_Draw();
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v5 != nullptr) {
          goto LABEL_5;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak();
        if (v5 != nullptr) {
        LABEL_5:
          if (v5[2] == 0) {
            return;
          }
          goto LABEL_9;
        }
      }
    }
  }
  v5 = &ui_LayoutAccessor_empty_;
  if (GameData_22587e8 == 0) {
    return;
  }
LABEL_9:
  v6 = v5[1];
  if (v6 == 0) {
    return;
  }
  v7 = std___1___shared_weak_count_lock(v6);
  if (v7 == 0) {
    goto LABEL_18;
  }
  v8 = *v5;
  if (*v5 != 0) {
    v1 = *(unsigned __int8*)(v8 + 24);
    v9 = v8 + 152;
    if (v1 == 0) {
      v9 = 0;
    }
    v10 = v9 != v5[2];
  }
  else {
    v10 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak();
    if (v10) {
      goto LABEL_18;
    }
  LABEL_23:
    if ((v1 & 1) != 0) {
      goto LABEL_20;
    }
    return;
  }
  if (!v10) {
    goto LABEL_23;
  }
LABEL_18:
  v11 = v5[1];
  if (v11 != 0 && *(_QWORD*)(v11 + 8) != -1) {
  LABEL_20:
    GameRoutine_178d120(a1);
    if (*(_BYTE*)(a1 + 79) == 1) {
      v12 = (void (**)(__int64))(*(_QWORD*)a1 + 520LL);
    }
    else {
      v12 = (void (**)(__int64))(*(_QWORD*)a1 + 504LL);
      if (*(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1) {
        v12 = (void (**)(__int64))(*(_QWORD*)a1 + 512LL);
      }
    }
    (*v12)(a1);
    v13 = *(_QWORD*)(a1 + 56);
    v14 = *(_DWORD*)(*(_QWORD*)(a1 + 88) + 416LL);
    if (v13 != 0) {
      v15 = std___1___shared_weak_count_lock(v13);
      if (v15 != 0) {
        v16 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v16 != nullptr) {
            goto LABEL_31;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak();
          if (v16 != nullptr) {
          LABEL_31:
            if ((v14 & 0x100000) == 0) {
            LABEL_32:
              v17 = "InfoOff";
            LABEL_39:
              LayoutAccessor_1562cf0(v16, v17);
              return;
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
            v17 = (const char*)game_util_Format("Info%02d", v21);
            goto LABEL_39;
          }
        }
      }
    }
    v16 = &ui_LayoutAccessor_empty_;
    if ((v14 & 0x100000) == 0) {
      goto LABEL_32;
    }
    goto LABEL_35;
  }
}

__int64** game_menu_179fec0(__int64** result, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64** v6;
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
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  _QWORD v22[4];

  v4 = *result;
  if ((int)((unsigned __int64)((char*)result[1] - (char*)*result) >> 3) < 2) {
    return result;
  }
  v22[2] = v2;
  v22[3] = v3;
  v5 = 1;
  v6 = result;
  do {
    *(_BYTE*)(*(_QWORD*)v4[v5] + 88LL) &= ~1u;
    *(_BYTE*)(**result + 192) |= *(_BYTE*)((*result)[v5] + 192);
    *(_BYTE*)(**result + 193) |= *(_BYTE*)((*result)[v5] + 193);
    v7 = (*result)[v5++];
    *(_BYTE*)(**result + 194) |= *(_BYTE*)(v7 + 194);
    v4 = *result;
  } while (v5 <
           (int)((unsigned __int64)((char*)result[1] - (char*)*result) >> 3));
  v8 = *v4;
  v9 = *(_QWORD*)(*v4 + 24);
  if (v9 != 0 && (v10 = std___1___shared_weak_count_lock(v9)) != 0) {
    v11 = *(_QWORD*)(v8 + 16);
    LOBYTE(v22[1]) = 0;
    v22[0] = v11;
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      *(__n128*)&a2 = std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v22[0] = 0;
    LOBYTE(v22[1]) = 0;
  }
  v12 = **v6;
  v13 = *(_DWORD*)(v12 + 152);
  if ((*(_BYTE*)(v12 + 160) & 1) != 0) {
    fw_text_String_CopyTerminated(&v19, *(_QWORD*)(v12 + 176),
                                  *(_QWORD*)(v12 + 168), a2);
  }
  else {
    v14 = *(_QWORD*)(v12 + 168);
    v19 = *(_QWORD*)(v12 + 160);
    v20 = v14;
    v21 = *(char**)(v12 + 176);
  }
  if ((v19 & 1) != 0) {
    v15 = v21;
  }
  else {
    v15 = (char*)&v19 + 1;
  }
  if ((v19 & 1) != 0) {
    v16 = v20;
  }
  else {
    v16 = (unsigned __int64)(unsigned __int8)v19 >> 1;
  }
  result = (__int64**)GameRoutine_1597ab0(v22, v13, v15, v16, 1);
  v17 = **v6;
  if (*(_BYTE*)(v17 + 194) == 1) {
    result =
        (__int64**)((__int64 (*)(_QWORD*, __int64))GameRoutine_1597230)(v22, 1);
    if ((v19 & 1) == 0) {
      return result;
    }
    goto LABEL_26;
  }
  if (*(_BYTE*)(v17 + 193) != 1) {
  LABEL_25:
    if ((v19 & 1) == 0) {
      return result;
    }
    goto LABEL_26;
  }
  if (v13 <= 0x1C && ((1 << v13) & 0x19C00000) != 0) {
    result =
        (__int64**)((__int64 (*)(_QWORD*, __int64))GameRoutine_1597490)(v22, 1);
    goto LABEL_25;
  }
  result =
      (__int64**)((__int64 (*)(_QWORD*, __int64))GameRoutine_1597700)(v22, 1);
  if ((v19 & 1) == 0) {
    return result;
  }
LABEL_26:
  if (v21 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    return (__int64**)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  return result;
}

__int64 game_menu_1820a00()
{
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
  unsigned __int64 primeEm;
  float v13;
  float v14;
  float v15;
  _BOOL8 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD** v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 i;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
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
  _QWORD v128[4];
  _QWORD* v129;
  _QWORD v130[4];
  _QWORD* v131;
  __int64 v132;
  _QWORD v133[4];
  _QWORD* v134;
  _QWORD v135[4];
  _QWORD* v136;
  __int64 v137;
  _QWORD v138[4];
  _QWORD* v139;
  _QWORD v140[4];
  _QWORD* v141;
  __int64 v142;
  _QWORD v143[4];
  _QWORD* v144;
  _QWORD v145[4];
  _QWORD* v146;
  __int64 v147;
  _QWORD v148[4];
  _QWORD* v149;
  _QWORD v150[4];
  _QWORD* v151;
  __int64 v152;
  _QWORD v153[4];
  _QWORD* v154;
  _QWORD v155[4];
  _QWORD* v156;
  __int64 v157;
  _QWORD v158[4];
  _QWORD* v159;
  _QWORD v160[4];
  _QWORD* v161;
  __int64 v162;
  _QWORD v163[4];
  _QWORD* v164;
  _QWORD v165[4];
  _QWORD* v166;
  __int64 v167;
  _QWORD v168[4];
  _QWORD* v169;
  _QWORD v170[4];
  _QWORD* v171;
  __int64 v172;
  _QWORD v173[4];
  _QWORD* v174;
  _QWORD v175[4];
  _QWORD* v176;
  __int64 v177;
  _QWORD v178[4];
  _QWORD* v179;
  _QWORD v180[4];
  _QWORD* v181;
  __int64 v182;
  _QWORD v183[4];
  _QWORD* v184;
  _QWORD v185[4];
  _QWORD* v186;
  __int64 v187;
  _QWORD v188[4];
  _QWORD* v189;
  _QWORD v190[4];
  _QWORD* v191;
  __int64 v192;
  _QWORD v193[4];
  _QWORD* v194;
  _QWORD v195[4];
  _QWORD* v196;
  __int64 v197;
  _QWORD v198[4];
  _QWORD* v199;
  _QWORD v200[4];
  _QWORD* v201;
  __int64 v202;
  _QWORD v203[4];
  _QWORD* v204;
  _QWORD v205[4];
  _QWORD* v206;
  __int64 v207;
  _QWORD v208[4];
  _QWORD* v209;
  _QWORD v210[4];
  _QWORD* v211;
  __int64 v212;
  _QWORD v213[4];
  _QWORD* v214;
  _QWORD v215[4];
  _QWORD* v216;
  __int64 v217;
  _QWORD v218[4];
  _QWORD* v219;
  _QWORD v220[4];
  _QWORD* v221;
  __int64 v222;
  _QWORD v223[4];
  _QWORD* v224;
  _QWORD v225[4];
  _QWORD* v226;
  __int64 v227;
  _QWORD v228[4];
  _QWORD* v229;
  _QWORD v230[4];
  _QWORD* v231;
  __int64 v232;
  _QWORD v233[4];
  _QWORD* v234;
  _QWORD v235[4];
  _QWORD* v236;
  __int64 v237;
  _QWORD v238[4];
  _QWORD* v239;
  _QWORD v240[4];
  _QWORD* v241;
  __int64 v242;
  _QWORD v243[4];
  _QWORD* v244;
  _QWORD v245[4];
  _QWORD* v246;
  __int64 v247;
  _QWORD v248[4];
  _QWORD* v249;
  _QWORD v250[4];
  _QWORD* v251;
  __int64 v252;
  _QWORD v253[4];
  _QWORD* v254;
  _QWORD v255[4];
  _QWORD* v256;
  __int64 v257;
  _QWORD v258[4];
  _QWORD* v259;
  _QWORD v260[4];
  _QWORD* v261;
  __int64 v262;
  _QWORD v263[4];
  _QWORD* v264;
  _QWORD v265[4];
  _QWORD* v266;
  __int64 v267;
  _QWORD v268[4];
  _QWORD* v269;
  _QWORD v270[4];
  _QWORD* v271;
  __int64 v272;
  _QWORD v273[4];
  _QWORD* v274;
  _QWORD v275[4];
  _QWORD* v276;
  __int64 v277;
  _QWORD v278[4];
  _QWORD* v279;
  _QWORD v280[4];
  _QWORD* v281;
  __int64 v282;
  _QWORD v283[4];
  _QWORD* v284;
  _QWORD v285[4];
  _QWORD* v286;
  __int64 v287;
  _QWORD v288[4];
  _QWORD* v289;
  _QWORD v290[4];
  _QWORD* v291;
  __int64 v292;
  _QWORD v293[4];
  _QWORD* v294;
  _QWORD v295[4];
  _QWORD* v296;
  __int64 v297;
  _QWORD v298[4];
  _QWORD* v299;
  _QWORD v300[4];
  _QWORD* v301;
  __int64 v302;
  _QWORD v303[4];
  _QWORD* v304;
  _QWORD v305[4];
  _QWORD* v306;
  __int64 v307;
  _QWORD v308[4];
  _QWORD* v309;
  _QWORD v310[4];
  _QWORD* v311;
  __int64 v312;
  _QWORD v313[4];
  _QWORD* v314;
  _QWORD v315[4];
  _QWORD* v316;
  __int64 v317;
  _QWORD v318[4];
  _QWORD v319[2];
  _QWORD v320[4];
  _QWORD v321[4];
  _DWORD v322[4];
  _QWORD v323[6];
  _QWORD v324[8];
  int v325;
  _QWORD v326[6];
  _QWORD v327[8];
  int v328;
  _QWORD v329[6];
  _QWORD v330[8];
  int v331;
  _QWORD v332[6];
  _QWORD v333[8];
  int v334;
  _QWORD v335[6];
  _QWORD v336[8];
  int v337;
  _QWORD v338[6];
  _QWORD v339[8];
  int v340;
  _QWORD v341[6];
  _QWORD v342[8];
  int v343;
  _QWORD v344[6];
  _QWORD v345[8];
  int v346;
  _QWORD v347[6];
  _QWORD v348[8];
  int v349;
  _QWORD v350[6];
  _QWORD v351[8];
  int v352;
  _QWORD v353[6];
  _QWORD v354[8];
  int v355;
  _QWORD v356[6];
  _QWORD v357[8];
  int v358;
  _QWORD v359[6];
  _QWORD v360[8];
  int v361;
  _QWORD v362[6];
  _QWORD v363[8];
  int v364;
  _QWORD v365[6];
  _QWORD v366[8];
  int v367;
  _QWORD v368[6];
  _QWORD v369[8];
  int v370;
  _QWORD v371[6];
  _QWORD v372[8];
  int v373;
  _QWORD v374[6];
  _QWORD v375[8];
  int v376;
  _QWORD v377[6];
  _QWORD v378[8];
  int v379;
  _QWORD v380[6];
  _QWORD v381[8];
  int v382;
  _QWORD v383[6];
  _QWORD v384[8];
  int v385;
  _QWORD v386[6];
  _QWORD v387[8];
  int v388;
  _QWORD v389[6];
  _QWORD v390[8];
  int v391;
  _QWORD v392[6];
  _QWORD v393[8];
  int v394;
  _QWORD v395[6];
  _QWORD v396[8];
  int v397;
  _QWORD v398[6];
  _QWORD v399[8];
  int v400;
  _QWORD v401[6];
  _QWORD v402[8];
  int v403;
  _QWORD v404[6];
  _QWORD v405[8];
  int v406;
  _QWORD v407[6];
  _QWORD v408[8];
  int v409;
  _QWORD v410[6];
  _QWORD v411[8];
  int v412;
  _QWORD v413[6];
  _QWORD v414[8];
  int v415;
  _QWORD v416[6];
  _QWORD v417[8];
  int v418;
  _QWORD v419[6];
  _QWORD v420[8];
  int v421;
  _QWORD v422[6];
  _QWORD v423[8];
  int v424;
  _QWORD v425[6];
  _QWORD v426[8];
  int v427;
  _QWORD v428[6];
  _QWORD v429[8];
  int v430;
  _QWORD v431[6];
  _QWORD v432[8];
  int v433;
  _QWORD v434[6];
  _QWORD v435[8];
  int v436;
  _QWORD v437[6];
  _QWORD v438[10];

  v0 = 0;
  v318[1] = GameRoutine_181b5b0;
  v323[1] = GameRoutine_181b5b0;
  v313[1] = GameRoutine_181b6b0;
  v326[1] = GameRoutine_181b6b0;
  v318[0] = game_ProcInst_Unknown04_1820750_ptr;
  v320[0] = GameData_20df5b8;
  v323[0] = game_ProcInst_Unknown04_1820750_ptr;
  v324[0] = GameData_20df5b8;
  v313[0] = game_ProcInst_Unknown04_1820750_ptr;
  v315[0] = GameData_20df5b8;
  v315[1] = GameRoutine_181b750;
  v326[0] = game_ProcInst_Unknown04_1820750_ptr;
  v327[0] = GameData_20df5b8;
  v327[1] = GameRoutine_181b750;
  v324[4] = v324;
  v326[4] = v326;
  v327[4] = v327;
  v323[4] = v323;
  v314 = v313;
  v325 = 2;
  v308[0] = game_ProcInst_Unknown04_1820750_ptr;
  v309 = v308;
  v310[0] = GameData_20df5b8;
  v308[1] = Signal_Shoot_Destructor_ptr[0];
  v328 = 3;
  v329[0] = game_ProcInst_Unknown04_1820750_ptr;
  v329[1] = Signal_Shoot_Destructor_ptr[0];
  v330[0] = GameData_20df5b8;
  v329[4] = v329;
  v310[1] = Signal_Shoot_Unknown5_ptr[0];
  v330[4] = v330;
  v330[1] = Signal_Shoot_Unknown5_ptr[0];
  v303[0] = game_ProcInst_Unknown04_1820750_ptr;
  v305[0] = GameData_20df5b8;
  v304 = v303;
  v303[1] = Signal_Shoot_DeletingDestructor_ptr[0];
  v332[1] = Signal_Shoot_DeletingDestructor_ptr[0];
  v331 = 4;
  v332[0] = game_ProcInst_Unknown04_1820750_ptr;
  v332[4] = v332;
  v333[0] = GameData_20df5b8;
  v333[4] = v333;
  v305[1] = Signal_Shoot_Unknown6_ptr[0];
  v333[1] = Signal_Shoot_Unknown6_ptr[0];
  v298[0] = game_ProcInst_Unknown04_1820750_ptr;
  v300[0] = GameData_20df5b8;
  v299 = v298;
  v298[1] = Signal_Shoot_Unknown2_ptr[0];
  v335[1] = Signal_Shoot_Unknown2_ptr[0];
  v334 = 5;
  v335[4] = v335;
  v335[0] = game_ProcInst_Unknown04_1820750_ptr;
  v336[0] = GameData_20df5b8;
  v336[4] = v336;
  v300[1] = Signal_Shoot_Unknown7_ptr[0];
  v336[1] = Signal_Shoot_Unknown7_ptr[0];
  v337 = 6;
  v346 = 9;
  v293[0] = game_ProcInst_Unknown04_1820750_ptr;
  v295[0] = GameData_20df5b8;
  v338[0] = game_ProcInst_Unknown04_1820750_ptr;
  v339[0] = GameData_20df5b8;
  v338[4] = v338;
  v347[4] = v347;
  v279 = v278;
  v280[0] = GameData_20df8d8;
  v348[0] = GameData_20df8d8;
  v293[1] = Signal_Shoot_Unknown3_ptr[0];
  v338[1] = Signal_Shoot_Unknown3_ptr[0];
  v339[4] = v339;
  v340 = 7;
  v341[4] = v341;
  v342[4] = v342;
  v343 = 8;
  v344[4] = v344;
  v345[4] = v345;
  v278[0] = game_ProcInst_Unknown04_1820750_ptr;
  v347[0] = game_ProcInst_Unknown04_1820750_ptr;
  v348[4] = v348;
  v273[0] = game_ProcInst_Unknown04_1820750_ptr;
  v350[0] = game_ProcInst_Unknown04_1820750_ptr;
  v263[0] = game_ProcInst_Unknown04_1820750_ptr;
  v356[0] = game_ProcInst_Unknown04_1820750_ptr;
  v350[4] = v350;
  v275[0] = GameData_20df5b8;
  v351[0] = GameData_20df5b8;
  v265[0] = GameData_20df5b8;
  v357[0] = GameData_20df5b8;
  v252 = 4;
  v366[6] = 4;
  v247 = 4;
  v369[6] = 4;
  v197 = 10;
  v187 = 2;
  v172 = 2;
  v167 = 2;
  v192 = 10;
  v177 = 5;
  v182 = 10;
  v162 = 1;
  v157 = 1;
  v262 = 1;
  v360[6] = 1;
  v257 = 10;
  v363[6] = 10;
  v357[6] = 1;
  v267 = 1;
  v354[6] = 1;
  v272 = 1;
  v357[4] = v357;
  v355 = 12;
  v259 = v258;
  v370 = 17;
  v415 = 32;
  v409 = 30;
  v258[0] = game_ProcInst_Unknown04_1820750_ptr;
  v359[0] = game_ProcInst_Unknown04_1820750_ptr;
  v356[4] = v356;
  v371[4] = v371;
  v416[4] = v416;
  v410[4] = v410;
  v360[4] = v360;
  v260[0] = GameData_20dfad8;
  v360[0] = GameData_20dfad8;
  v373 = 18;
  v165[0] = GameData_20e0dd8;
  v417[0] = GameData_20e0dd8;
  v411[4] = v411;
  v261 = v260;
  v253[0] = game_ProcInst_Unknown04_1820750_ptr;
  v362[0] = game_ProcInst_Unknown04_1820750_ptr;
  v273[1] = Signal_Shoot_Unknown4_ptr[0];
  v350[1] = Signal_Shoot_Unknown4_ptr[0];
  v254 = v253;
  v374[4] = v374;
  v363[4] = v363;
  v351[4] = v351;
  v376 = 19;
  v248[0] = game_ProcInst_Unknown04_1820750_ptr;
  v365[0] = game_ProcInst_Unknown04_1820750_ptr;
  v352 = 11;
  v377[4] = v377;
  v366[4] = v366;
  v353[4] = v353;
  v379 = 20;
  v417[6] = 2;
  v411[6] = 5;
  v243[0] = game_ProcInst_Unknown04_1820750_ptr;
  v368[0] = game_ProcInst_Unknown04_1820750_ptr;
  v354[4] = v354;
  v380[4] = v380;
  v418 = 33;
  v369[4] = v369;
  v263[1] = GameRoutine_181b7b0;
  v356[1] = GameRoutine_181b7b0;
  v382 = 21;
  v168[0] = game_ProcInst_Unknown04_1820750_ptr;
  v413[0] = game_ProcInst_Unknown04_1820750_ptr;
  v414[4] = v414;
  v238[0] = game_ProcInst_Unknown04_1820750_ptr;
  v371[0] = game_ProcInst_Unknown04_1820750_ptr;
  v358 = 13;
  v383[4] = v383;
  v419[4] = v419;
  v372[4] = v372;
  v359[4] = v359;
  v385 = 22;
  v158[0] = game_ProcInst_Unknown04_1820750_ptr;
  v419[0] = game_ProcInst_Unknown04_1820750_ptr;
  v233[0] = game_ProcInst_Unknown04_1820750_ptr;
  v374[0] = game_ProcInst_Unknown04_1820750_ptr;
  v256 = v255;
  v255[0] = GameData_20dfbd8;
  v363[0] = GameData_20dfbd8;
  v386[4] = v386;
  v375[4] = v375;
  v361 = 14;
  v249 = v248;
  v388 = 23;
  v420[4] = v420;
  v414[6] = 2;
  v228[0] = game_ProcInst_Unknown04_1820750_ptr;
  v377[0] = game_ProcInst_Unknown04_1820750_ptr;
  v362[4] = v362;
  v389[4] = v389;
  v160[0] = GameData_20e0ed8;
  v420[0] = GameData_20e0ed8;
  v163[0] = game_ProcInst_Unknown04_1820750_ptr;
  v416[0] = game_ProcInst_Unknown04_1820750_ptr;
  v378[4] = v378;
  v251 = v250;
  v250[0] = GameData_20dfcd8;
  v366[0] = GameData_20dfcd8;
  v391 = 24;
  v417[4] = v417;
  v223[0] = game_ProcInst_Unknown04_1820750_ptr;
  v380[0] = game_ProcInst_Unknown04_1820750_ptr;
  v364 = 15;
  v244 = v243;
  v392[4] = v392;
  v159 = v158;
  v381[4] = v381;
  v365[4] = v365;
  v394 = 25;
  v218[0] = game_ProcInst_Unknown04_1820750_ptr;
  v383[0] = game_ProcInst_Unknown04_1820750_ptr;
  v245[0] = GameData_20dfdd8;
  v369[0] = GameData_20dfdd8;
  v384[4] = v384;
  v239 = v238;
  v395[4] = v395;
  v397 = 26;
  v246 = v245;
  v420[6] = 1;
  v367 = 16;
  v421 = 34;
  v213[0] = game_ProcInst_Unknown04_1820750_ptr;
  v386[0] = game_ProcInst_Unknown04_1820750_ptr;
  v240[0] = GameData_20dfed8;
  v372[0] = GameData_20dfed8;
  v387[4] = v387;
  v234 = v233;
  v398[4] = v398;
  v400 = 27;
  v368[4] = v368;
  v422[4] = v422;
  v208[0] = game_ProcInst_Unknown04_1820750_ptr;
  v389[0] = game_ProcInst_Unknown04_1820750_ptr;
  v235[0] = GameData_20dffd8;
  v375[0] = GameData_20dffd8;
  v390[4] = v390;
  v229 = v228;
  v401[4] = v401;
  v403 = 28;
  v357[1] = GameRoutine_181b7d0;
  v265[1] = GameRoutine_181b7d0;
  v424 = 35;
  v203[0] = game_ProcInst_Unknown04_1820750_ptr;
  v392[0] = game_ProcInst_Unknown04_1820750_ptr;
  v230[0] = GameData_20e00d8;
  v378[0] = GameData_20e00d8;
  v393[4] = v393;
  v224 = v223;
  v404[4] = v404;
  v406 = 29;
  v425[4] = v425;
  v198[0] = game_ProcInst_Unknown04_1820750_ptr;
  v395[0] = game_ProcInst_Unknown04_1820750_ptr;
  v225[0] = GameData_20e01d8;
  v381[0] = GameData_20e01d8;
  v396[4] = v396;
  v219 = v218;
  v407[4] = v407;
  v353[0] = game_ProcInst_Unknown04_1820750_ptr;
  v268[0] = game_ProcInst_Unknown04_1820750_ptr;
  v193[0] = game_ProcInst_Unknown04_1820750_ptr;
  v398[0] = game_ProcInst_Unknown04_1820750_ptr;
  v220[0] = GameData_20e02d8;
  v384[0] = GameData_20e02d8;
  v399[4] = v399;
  v214 = v213;
  v423[4] = v423;
  v422[0] = game_ProcInst_Unknown04_1820750_ptr;
  v153[0] = game_ProcInst_Unknown04_1820750_ptr;
  v215[0] = GameData_20e03d8;
  v387[0] = GameData_20e03d8;
  v209 = v208;
  v155[0] = GameData_20e0fd8;
  v423[0] = GameData_20e0fd8;
  v210[0] = GameData_20e04d8;
  v390[0] = GameData_20e04d8;
  v399[6] = 10;
  v204 = v203;
  v188[0] = game_ProcInst_Unknown04_1820750_ptr;
  v401[0] = game_ProcInst_Unknown04_1820750_ptr;
  v205[0] = GameData_20e05d8;
  v393[0] = GameData_20e05d8;
  v402[4] = v402;
  v199 = v198;
  v423[6] = 1;
  v264 = v263;
  v200[0] = GameData_20e06d8;
  v396[0] = GameData_20e06d8;
  v194 = v193;
  v266 = v265;
  v354[0] = GameData_20df9d8;
  v270[0] = GameData_20df9d8;
  v195[0] = GameData_20e07d8;
  v399[0] = GameData_20e07d8;
  v402[6] = 10;
  v189 = v188;
  v183[0] = game_ProcInst_Unknown04_1820750_ptr;
  v404[0] = game_ProcInst_Unknown04_1820750_ptr;
  v190[0] = GameData_20e08d8;
  v402[0] = GameData_20e08d8;
  v1 = (unsigned __int64)v185;
  v405[4] = v405;
  v184 = v183;
  v185[0] = GameData_20e09d8;
  v405[0] = GameData_20e09d8;
  v179 = v178;
  v180[0] = GameData_20e0ad8;
  v408[0] = GameData_20e0ad8;
  v405[6] = 2;
  v174 = v173;
  v178[0] = game_ProcInst_Unknown04_1820750_ptr;
  v407[0] = game_ProcInst_Unknown04_1820750_ptr;
  v175[0] = GameData_20e0bd8;
  v411[0] = GameData_20e0bd8;
  v408[4] = v408;
  v408[6] = 10;
  v173[0] = game_ProcInst_Unknown04_1820750_ptr;
  v410[0] = game_ProcInst_Unknown04_1820750_ptr;
  v169 = v168;
  v412 = 31;
  v413[4] = v413;
  v170[0] = GameData_20e0cd8;
  v414[0] = GameData_20e0cd8;
  v164 = v163;
  v154 = v153;
  v269 = v268;
  v271 = v270;
  v149 = v148;
  v148[0] = game_ProcInst_Unknown04_1820750_ptr;
  v425[0] = game_ProcInst_Unknown04_1820750_ptr;
  v426[4] = v426;
  v152 = 1;
  v150[0] = GameData_20e10d8;
  v426[0] = GameData_20e10d8;
  v147 = 1;
  v142 = 10;
  v281 = v280;
  v344[0] = game_ProcInst_Unknown04_1820750_ptr;
  v283[0] = game_ProcInst_Unknown04_1820750_ptr;
  v351[6] = 10;
  v277 = 10;
  v349 = 10;
  v348[6] = 1;
  v282 = 1;
  v345[6] = 1;
  v287 = 1;
  v342[6] = 1;
  v341[0] = game_ProcInst_Unknown04_1820750_ptr;
  v288[0] = game_ProcInst_Unknown04_1820750_ptr;
  v292 = 1;
  v351[1] = Signal_Shoot_Unknown9_ptr;
  v275[1] = Signal_Shoot_Unknown9_ptr;
  v427 = 36;
  v426[6] = 1;
  v274 = v273;
  v428[4] = v428;
  v276 = v275;
  v144 = v143;
  v429[4] = v429;
  v428[0] = game_ProcInst_Unknown04_1820750_ptr;
  v143[0] = game_ProcInst_Unknown04_1820750_ptr;
  v431[4] = v431;
  v145[0] = GameData_20e11d8;
  v429[0] = GameData_20e11d8;
  v284 = v283;
  v286 = v285;
  v139 = v138;
  v429[6] = 1;
  v432[4] = v432;
  v430 = 37;
  v289 = v288;
  v345[0] = GameData_20df7d8;
  v285[0] = GameData_20df7d8;
  v291 = v290;
  v138[0] = game_ProcInst_Unknown04_1820750_ptr;
  v431[0] = game_ProcInst_Unknown04_1820750_ptr;
  v342[0] = GameData_20df6d8;
  v290[0] = GameData_20df6d8;
  v140[0] = GameData_20e12d8;
  v432[0] = GameData_20e12d8;
  v432[6] = 10;
  v433 = 38;
  v339[6] = 10;
  v297 = 10;
  v336[6] = 10;
  v137 = 10;
  v321[2] = 10;
  v324[6] = 10;
  v317 = 10;
  v327[6] = 10;
  v312 = 10;
  v330[6] = 10;
  v307 = 10;
  v302 = 10;
  v333[6] = 10;
  v132 = 10;
  v434[4] = v434;
  v301 = v300;
  v201 = v200;
  v191 = v190;
  v181 = v180;
  v322[0] = 1;
  v306 = v305;
  v241 = v240;
  v242 = 1;
  v372[6] = 1;
  v236 = v235;
  v237 = 1;
  v375[6] = 1;
  v231 = v230;
  v232 = 1;
  v378[6] = 1;
  v226 = v225;
  v227 = 1;
  v381[6] = 1;
  v221 = v220;
  v222 = 1;
  v384[6] = 1;
  v216 = v215;
  v217 = 1;
  v387[6] = 1;
  v211 = v210;
  v212 = 1;
  v390[6] = 1;
  v206 = v205;
  v207 = 1;
  v393[6] = 1;
  v202 = 1;
  v396[6] = 1;
  v196 = v195;
  v186 = v185;
  v176 = v175;
  v171 = v170;
  v166 = v165;
  v161 = v160;
  v156 = v155;
  v151 = v150;
  v146 = v145;
  v141 = v140;
  v436 = 39;
  v294 = v293;
  v296 = v295;
  GameData_226b228 = 0;
  GameData_226b230 = 0;
  GameData_226b218 = 0;
  GameData_226b220 = 0;
  v437[4] = v437;
  v339[1] = Signal_Shoot_Unknown8_ptr[0];
  v295[1] = Signal_Shoot_Unknown8_ptr[0];
  v438[4] = v438;
  v434[0] = game_ProcInst_Unknown04_1820750_ptr;
  v133[0] = game_ProcInst_Unknown04_1820750_ptr;
  v437[0] = game_ProcInst_Unknown04_1820750_ptr;
  v128[0] = game_ProcInst_Unknown04_1820750_ptr;
  v435[4] = v435;
  v130[0] = GameData_20e14d8;
  v438[0] = GameData_20e14d8;
  v134 = v133;
  v135[0] = GameData_20e13d8;
  v435[0] = GameData_20e13d8;
  v136 = v135;
  v438[6] = 10;
  GameData_226b238 = 1065353216;
  v435[6] = 10;
  v129 = v128;
  v319[0] = v318;
  v324[1] = GameRoutine_181b650;
  v320[1] = GameRoutine_181b650;
  v131 = v130;
  v321[0] = v320;
  v316 = v315;
  v311 = v310;
  do {
    v2 = GameData_226b220;
    v3 = &v322[v0];
    v4 = v322[v0];
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
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         144, 16, 0);
    *(_QWORD*)v10 = 0;
    *(_QWORD*)(v10 + 8) = v4;
    *(_DWORD*)(v10 + 16) = v4;
    v11 = (_QWORD*)v3[6];
    if (v11 != nullptr) {
      if (v11 == v3 + 2) {
        *(_QWORD*)(v10 + 64) = v10 + 32;
        (*(void (**)(_QWORD*))(*v11 + 24LL))(v11);
        primeEm = v3[12];
        if (primeEm != 0) {
        LABEL_27:
          if ((_QWORD*)primeEm == v3 + 8) {
            *(_QWORD*)(v10 + 112) = v10 + 80;
            primeEm = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)primeEm +
                                                         24LL))(primeEm);
          }
          else {
            primeEm = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)primeEm +
                                                         16LL))(primeEm);
            *(_QWORD*)(v10 + 112) = primeEm;
          }
          goto LABEL_32;
        }
      }
      else {
        *(_QWORD*)(v10 + 64) = (*(__int64 (**)(_QWORD*))(*v11 + 16LL))(v11);
        primeEm = v3[12];
        if (primeEm != 0) {
          goto LABEL_27;
        }
      }
    }
    else {
      *(_QWORD*)(v10 + 64) = 0;
      primeEm = v3[12];
      if (primeEm != 0) {
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
      v19 = v18;
    }
    else {
      v19 = v17;
    }
    if (v19 == 1) {
      v19 = 2;
    }
    else if ((v19 & (v19 - 1)) != 0) {
      primeEm = std___1___next_prime(v19);
      v19 = primeEm;
    }
    v20 = GameData_226b220;
    if (v19 <= GameData_226b220) {
      if (v19 >= GameData_226b220) {
        goto LABEL_93;
      }
      primeEm = vcvtps_u64_f32((float)(unsigned __int64)GameData_226b230 /
                               *(float*)&GameData_226b238);
      if ((unsigned __int64)GameData_226b220 < 3 ||
          (GameData_226b220 & (GameData_226b220 - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm);
      }
      else {
        v26 = 1LL << -(char)__clz(primeEm - 1);
        if (primeEm >= 2) {
          primeEm = v26;
        }
      }
      if (v19 <= primeEm) {
        v19 = primeEm;
      }
      if (v19 >= v20) {
        goto LABEL_93;
      }
      if (v19 == 0) {
        v38 = GameData_226b218;
        GameData_226b218 = 0;
        if (v38 != 0) {
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v39);
        }
        GameData_226b220 = 0;
        goto LABEL_93;
      }
    }
    v21 = fw_memory_g_heap_manager_ptr;
    if (v19 >> 61 != 0) {
      GameRoutine_60a210(primeEm);
    }
    v22 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v19, 16, 0);
    v23 = GameData_226b218;
    GameData_226b218 = v22;
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v21 + v24);
    }
    GameData_226b220 = v19;
    if (v19 >= 8) {
      v25 = 0;
      do {
        *(_QWORD*)(GameData_226b218 + 8 * v25) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 8) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 16) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 24) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 32) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 40) = 0;
        *(_QWORD*)(GameData_226b218 + 8 * v25 + 48) = 0;
        v27 = GameData_226b218 + 8 * v25;
        v25 += 8;
        *(_QWORD*)(v27 + 56) = 0;
      } while ((v19 & 0x1FFFFFFFFFFFFFF8LL) != v25);
    }
    else {
      v25 = 0;
    }
    v28 = v19 & 7;
    if ((v19 & 7) != 0) {
      v29 = 8 * v25;
      do {
        --v28;
        *(_QWORD*)(GameData_226b218 + v29) = 0;
        v29 += 8;
      } while (v28 != 0);
    }
    v30 = (_QWORD**)GameData_226b228;
    if (GameData_226b228 != 0) {
      v31 = *(_QWORD*)(GameData_226b228 + 8);
      v32 = v19 - 1;
      if ((v19 & (v19 - 1)) != 0) {
        if (v31 >= v19) {
          v31 %= v19;
        }
        *(_QWORD*)(GameData_226b218 + 8 * v31) = &GameData_226b228;
        v33 = *v30;
        if (*v30 == nullptr) {
          goto LABEL_93;
        }
        while (1) {
          v34 = v33[1];
          if (v34 >= v19) {
            v34 %= v19;
          }
          if (v34 != v31) {
            if (*(_QWORD*)(GameData_226b218 + 8 * v34) == 0) {
              *(_QWORD*)(GameData_226b218 + 8 * v34) = v30;
              goto LABEL_70;
            }
            *v30 = (_QWORD*)*v33;
            *v33 = **(_QWORD**)(GameData_226b218 + 8 * v34);
            **(_QWORD**)(GameData_226b218 + 8 * v34) = v33;
            v33 = v30;
          }
          v34 = v31;
        LABEL_70:
          v30 = (_QWORD**)v33;
          v33 = (_QWORD*)*v33;
          v31 = v34;
          if (v33 == nullptr) {
            goto LABEL_93;
          }
        }
      }
      v35 = v31 & v32;
      *(_QWORD*)(GameData_226b218 + 8 * v35) = &GameData_226b228;
      while (1) {
        v36 = *v30;
        if (*v30 == nullptr) {
          break;
        }
        v37 = v36[1] & v32;
        if (v37 == v35) {
          v30 = (_QWORD**)*v30;
        }
        else if (*(_QWORD*)(GameData_226b218 + 8 * v37) != 0) {
          *v30 = (_QWORD*)*v36;
          *v36 = **(_QWORD**)(GameData_226b218 + 8 * v37);
          **(_QWORD**)(GameData_226b218 + 8 * v37) = v36;
        }
        else {
          *(_QWORD*)(GameData_226b218 + 8 * v37) = v30;
          v30 = (_QWORD**)v36;
          v35 = v37;
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
    v40 = GameData_226b218;
    v41 = *(__int64**)(GameData_226b218 + 8 * v1);
    if (v41 != nullptr) {
      *(_QWORD*)v10 = *v41;
      *v41 = v10;
    }
    else {
      v42 = GameData_226b228;
      GameData_226b228 = v10;
      *(_QWORD*)v10 = v42;
      *(_QWORD*)(v40 + 8 * v1) = &GameData_226b228;
      if (*(_QWORD*)v10 != 0) {
        v43 = *(_QWORD*)(*(_QWORD*)v10 + 8LL);
        if ((v2 & (v2 - 1)) != 0) {
          if (v43 >= v2) {
            v43 %= v2;
          }
        }
        else {
          v43 &= v2 - 1;
        }
        *(_QWORD*)(GameData_226b218 + 8 * v43) = v10;
      }
    }
    ++GameData_226b230;
  LABEL_107:
    v0 += 32;
  } while (v0 != 1248);
  for (i = 624; i != 0; i -= 16) {
    v46 = (_QWORD*)v321[i];
    if (&v320[i] == v46) {
      v47 = 32;
    }
    else {
      if (v46 == nullptr) {
        goto LABEL_117;
      }
      v47 = 40;
    }
    (*(void (**)(__int64))(*v46 + v47))((__int64)v46);
  LABEL_117:
    v48 = (_QWORD*)v319[i];
    if (&v318[i] == v48) {
      v45 = 32;
    LABEL_110:
      (*(void (**)(__int64))(*v48 + v45))((__int64)v48);
      continue;
    }
    if (v48 != nullptr) {
      v45 = 40;
      goto LABEL_110;
    }
  }
  if (v131 == v130) {
    v49 = 32;
  LABEL_124:
    (*(void (**)(__int64))(*v131 + v49))((__int64)v131);
  }
  else if (v131 != nullptr) {
    v49 = 40;
    goto LABEL_124;
  }
  if (v129 == v128) {
    v50 = 32;
  LABEL_129:
    (*(void (**)(__int64))(*v129 + v50))((__int64)v129);
  }
  else if (v129 != nullptr) {
    v50 = 40;
    goto LABEL_129;
  }
  if (v136 == v135) {
    v51 = 32;
  LABEL_134:
    (*(void (**)(__int64))(*v136 + v51))((__int64)v136);
  }
  else if (v136 != nullptr) {
    v51 = 40;
    goto LABEL_134;
  }
  if (v134 == v133) {
    v52 = 32;
  LABEL_139:
    (*(void (**)(__int64))(*v134 + v52))((__int64)v134);
  }
  else if (v134 != nullptr) {
    v52 = 40;
    goto LABEL_139;
  }
  if (v141 == v140) {
    v53 = 32;
  LABEL_144:
    (*(void (**)(__int64))(*v141 + v53))((__int64)v141);
  }
  else if (v141 != nullptr) {
    v53 = 40;
    goto LABEL_144;
  }
  if (v139 == v138) {
    v54 = 32;
  LABEL_149:
    (*(void (**)(__int64))(*v139 + v54))((__int64)v139);
  }
  else if (v139 != nullptr) {
    v54 = 40;
    goto LABEL_149;
  }
  if (v146 == v145) {
    v55 = 32;
  LABEL_154:
    (*(void (**)(__int64))(*v146 + v55))((__int64)v146);
  }
  else if (v146 != nullptr) {
    v55 = 40;
    goto LABEL_154;
  }
  if (v144 == v143) {
    v56 = 32;
  LABEL_159:
    (*(void (**)(__int64))(*v144 + v56))((__int64)v144);
  }
  else if (v144 != nullptr) {
    v56 = 40;
    goto LABEL_159;
  }
  if (v151 == v150) {
    v57 = 32;
  LABEL_164:
    (*(void (**)(__int64))(*v151 + v57))((__int64)v151);
  }
  else if (v151 != nullptr) {
    v57 = 40;
    goto LABEL_164;
  }
  if (v149 == v148) {
    v58 = 32;
  LABEL_169:
    (*(void (**)(__int64))(*v149 + v58))((__int64)v149);
  }
  else if (v149 != nullptr) {
    v58 = 40;
    goto LABEL_169;
  }
  if (v156 == v155) {
    v59 = 32;
  LABEL_174:
    (*(void (**)(__int64))(*v156 + v59))((__int64)v156);
  }
  else if (v156 != nullptr) {
    v59 = 40;
    goto LABEL_174;
  }
  if (v154 == v153) {
    v60 = 32;
  LABEL_179:
    (*(void (**)(__int64))(*v154 + v60))((__int64)v154);
  }
  else if (v154 != nullptr) {
    v60 = 40;
    goto LABEL_179;
  }
  if (v161 == v160) {
    v61 = 32;
  LABEL_184:
    (*(void (**)(__int64))(*v161 + v61))((__int64)v161);
  }
  else if (v161 != nullptr) {
    v61 = 40;
    goto LABEL_184;
  }
  if (v159 == v158) {
    v62 = 32;
  LABEL_189:
    (*(void (**)(__int64))(*v159 + v62))((__int64)v159);
  }
  else if (v159 != nullptr) {
    v62 = 40;
    goto LABEL_189;
  }
  if (v166 == v165) {
    v63 = 32;
  LABEL_194:
    (*(void (**)(__int64))(*v166 + v63))((__int64)v166);
  }
  else if (v166 != nullptr) {
    v63 = 40;
    goto LABEL_194;
  }
  if (v164 == v163) {
    v64 = 32;
  LABEL_199:
    (*(void (**)(__int64))(*v164 + v64))((__int64)v164);
  }
  else if (v164 != nullptr) {
    v64 = 40;
    goto LABEL_199;
  }
  if (v171 == v170) {
    v65 = 32;
  LABEL_204:
    (*(void (**)(__int64))(*v171 + v65))((__int64)v171);
  }
  else if (v171 != nullptr) {
    v65 = 40;
    goto LABEL_204;
  }
  if (v169 == v168) {
    v66 = 32;
  LABEL_209:
    (*(void (**)(__int64))(*v169 + v66))((__int64)v169);
  }
  else if (v169 != nullptr) {
    v66 = 40;
    goto LABEL_209;
  }
  if (v176 == v175) {
    v67 = 32;
  LABEL_214:
    (*(void (**)(__int64))(*v176 + v67))((__int64)v176);
  }
  else if (v176 != nullptr) {
    v67 = 40;
    goto LABEL_214;
  }
  if (v174 == v173) {
    v68 = 32;
  LABEL_219:
    (*(void (**)(__int64))(*v174 + v68))((__int64)v174);
  }
  else if (v174 != nullptr) {
    v68 = 40;
    goto LABEL_219;
  }
  if (v181 == v180) {
    v69 = 32;
  LABEL_224:
    (*(void (**)(__int64))(*v181 + v69))((__int64)v181);
  }
  else if (v181 != nullptr) {
    v69 = 40;
    goto LABEL_224;
  }
  if (v179 == v178) {
    v70 = 32;
  LABEL_229:
    (*(void (**)(__int64))(*v179 + v70))((__int64)v179);
  }
  else if (v179 != nullptr) {
    v70 = 40;
    goto LABEL_229;
  }
  if (v186 == v185) {
    v71 = 32;
  LABEL_234:
    (*(void (**)(__int64))(*v186 + v71))((__int64)v186);
  }
  else if (v186 != nullptr) {
    v71 = 40;
    goto LABEL_234;
  }
  if (v184 == v183) {
    v72 = 32;
  LABEL_239:
    (*(void (**)(__int64))(*v184 + v72))((__int64)v184);
  }
  else if (v184 != nullptr) {
    v72 = 40;
    goto LABEL_239;
  }
  if (v191 == v190) {
    v73 = 32;
  LABEL_244:
    (*(void (**)(__int64))(*v191 + v73))((__int64)v191);
  }
  else if (v191 != nullptr) {
    v73 = 40;
    goto LABEL_244;
  }
  if (v189 == v188) {
    v74 = 32;
  LABEL_249:
    (*(void (**)(__int64))(*v189 + v74))((__int64)v189);
  }
  else if (v189 != nullptr) {
    v74 = 40;
    goto LABEL_249;
  }
  if (v196 == v195) {
    v75 = 32;
  LABEL_254:
    (*(void (**)(__int64))(*v196 + v75))((__int64)v196);
  }
  else if (v196 != nullptr) {
    v75 = 40;
    goto LABEL_254;
  }
  if (v194 == v193) {
    v76 = 32;
  LABEL_259:
    (*(void (**)(__int64))(*v194 + v76))((__int64)v194);
  }
  else if (v194 != nullptr) {
    v76 = 40;
    goto LABEL_259;
  }
  if (v201 == v200) {
    v77 = 32;
  LABEL_264:
    (*(void (**)(__int64))(*v201 + v77))((__int64)v201);
  }
  else if (v201 != nullptr) {
    v77 = 40;
    goto LABEL_264;
  }
  if (v199 == v198) {
    v78 = 32;
  LABEL_269:
    (*(void (**)(__int64))(*v199 + v78))((__int64)v199);
  }
  else if (v199 != nullptr) {
    v78 = 40;
    goto LABEL_269;
  }
  if (v206 == v205) {
    v79 = 32;
  LABEL_274:
    (*(void (**)(__int64))(*v206 + v79))((__int64)v206);
  }
  else if (v206 != nullptr) {
    v79 = 40;
    goto LABEL_274;
  }
  if (v204 == v203) {
    v80 = 32;
  LABEL_279:
    (*(void (**)(__int64))(*v204 + v80))((__int64)v204);
  }
  else if (v204 != nullptr) {
    v80 = 40;
    goto LABEL_279;
  }
  if (v211 == v210) {
    v81 = 32;
  LABEL_284:
    (*(void (**)(__int64))(*v211 + v81))((__int64)v211);
  }
  else if (v211 != nullptr) {
    v81 = 40;
    goto LABEL_284;
  }
  if (v209 == v208) {
    v82 = 32;
  LABEL_289:
    (*(void (**)(__int64))(*v209 + v82))((__int64)v209);
  }
  else if (v209 != nullptr) {
    v82 = 40;
    goto LABEL_289;
  }
  if (v216 == v215) {
    v83 = 32;
  LABEL_294:
    (*(void (**)(__int64))(*v216 + v83))((__int64)v216);
  }
  else if (v216 != nullptr) {
    v83 = 40;
    goto LABEL_294;
  }
  if (v214 == v213) {
    v84 = 32;
  LABEL_299:
    (*(void (**)(__int64))(*v214 + v84))((__int64)v214);
  }
  else if (v214 != nullptr) {
    v84 = 40;
    goto LABEL_299;
  }
  if (v221 == v220) {
    v85 = 32;
  LABEL_304:
    (*(void (**)(__int64))(*v221 + v85))((__int64)v221);
  }
  else if (v221 != nullptr) {
    v85 = 40;
    goto LABEL_304;
  }
  if (v219 == v218) {
    v86 = 32;
  LABEL_309:
    (*(void (**)(__int64))(*v219 + v86))((__int64)v219);
  }
  else if (v219 != nullptr) {
    v86 = 40;
    goto LABEL_309;
  }
  if (v226 == v225) {
    v87 = 32;
  LABEL_314:
    (*(void (**)(__int64))(*v226 + v87))((__int64)v226);
  }
  else if (v226 != nullptr) {
    v87 = 40;
    goto LABEL_314;
  }
  if (v224 == v223) {
    v88 = 32;
  LABEL_319:
    (*(void (**)(__int64))(*v224 + v88))((__int64)v224);
  }
  else if (v224 != nullptr) {
    v88 = 40;
    goto LABEL_319;
  }
  if (v231 == v230) {
    v89 = 32;
  LABEL_324:
    (*(void (**)(__int64))(*v231 + v89))((__int64)v231);
  }
  else if (v231 != nullptr) {
    v89 = 40;
    goto LABEL_324;
  }
  if (v229 == v228) {
    v90 = 32;
  LABEL_329:
    (*(void (**)(__int64))(*v229 + v90))((__int64)v229);
  }
  else if (v229 != nullptr) {
    v90 = 40;
    goto LABEL_329;
  }
  if (v236 == v235) {
    v91 = 32;
  LABEL_334:
    (*(void (**)(__int64))(*v236 + v91))((__int64)v236);
  }
  else if (v236 != nullptr) {
    v91 = 40;
    goto LABEL_334;
  }
  if (v234 == v233) {
    v92 = 32;
  LABEL_339:
    (*(void (**)(__int64))(*v234 + v92))((__int64)v234);
  }
  else if (v234 != nullptr) {
    v92 = 40;
    goto LABEL_339;
  }
  if (v241 == v240) {
    v93 = 32;
  LABEL_344:
    (*(void (**)(__int64))(*v241 + v93))((__int64)v241);
  }
  else if (v241 != nullptr) {
    v93 = 40;
    goto LABEL_344;
  }
  if (v239 == v238) {
    v94 = 32;
  LABEL_349:
    (*(void (**)(__int64))(*v239 + v94))((__int64)v239);
  }
  else if (v239 != nullptr) {
    v94 = 40;
    goto LABEL_349;
  }
  if (v246 == v245) {
    v95 = 32;
  LABEL_354:
    (*(void (**)(__int64))(*v246 + v95))((__int64)v246);
  }
  else if (v246 != nullptr) {
    v95 = 40;
    goto LABEL_354;
  }
  if (v244 == v243) {
    v96 = 32;
  LABEL_359:
    (*(void (**)(__int64))(*v244 + v96))((__int64)v244);
  }
  else if (v244 != nullptr) {
    v96 = 40;
    goto LABEL_359;
  }
  if (v251 == v250) {
    v97 = 32;
  LABEL_364:
    (*(void (**)(__int64))(*v251 + v97))((__int64)v251);
  }
  else if (v251 != nullptr) {
    v97 = 40;
    goto LABEL_364;
  }
  if (v249 == v248) {
    v98 = 32;
  LABEL_369:
    (*(void (**)(__int64))(*v249 + v98))((__int64)v249);
  }
  else if (v249 != nullptr) {
    v98 = 40;
    goto LABEL_369;
  }
  if (v256 == v255) {
    v99 = 32;
  LABEL_374:
    (*(void (**)(__int64))(*v256 + v99))((__int64)v256);
  }
  else if (v256 != nullptr) {
    v99 = 40;
    goto LABEL_374;
  }
  if (v254 == v253) {
    v100 = 32;
  LABEL_379:
    (*(void (**)(__int64))(*v254 + v100))((__int64)v254);
  }
  else if (v254 != nullptr) {
    v100 = 40;
    goto LABEL_379;
  }
  if (v261 == v260) {
    v101 = 32;
  LABEL_384:
    (*(void (**)(__int64))(*v261 + v101))((__int64)v261);
  }
  else if (v261 != nullptr) {
    v101 = 40;
    goto LABEL_384;
  }
  if (v259 == v258) {
    v102 = 32;
  LABEL_389:
    (*(void (**)(__int64))(*v259 + v102))((__int64)v259);
  }
  else if (v259 != nullptr) {
    v102 = 40;
    goto LABEL_389;
  }
  if (v266 == v265) {
    v103 = 32;
  LABEL_394:
    (*(void (**)(__int64))(*v266 + v103))((__int64)v266);
  }
  else if (v266 != nullptr) {
    v103 = 40;
    goto LABEL_394;
  }
  if (v264 == v263) {
    v104 = 32;
  LABEL_399:
    (*(void (**)(__int64))(*v264 + v104))((__int64)v264);
  }
  else if (v264 != nullptr) {
    v104 = 40;
    goto LABEL_399;
  }
  if (v271 == v270) {
    v105 = 32;
  LABEL_404:
    (*(void (**)(__int64))(*v271 + v105))((__int64)v271);
  }
  else if (v271 != nullptr) {
    v105 = 40;
    goto LABEL_404;
  }
  if (v269 == v268) {
    v106 = 32;
  LABEL_409:
    (*(void (**)(__int64))(*v269 + v106))((__int64)v269);
  }
  else if (v269 != nullptr) {
    v106 = 40;
    goto LABEL_409;
  }
  if (v276 == v275) {
    v107 = 32;
  LABEL_414:
    (*(void (**)(__int64))(*v276 + v107))((__int64)v276);
  }
  else if (v276 != nullptr) {
    v107 = 40;
    goto LABEL_414;
  }
  if (v274 == v273) {
    v108 = 32;
  LABEL_419:
    (*(void (**)(__int64))(*v274 + v108))((__int64)v274);
  }
  else if (v274 != nullptr) {
    v108 = 40;
    goto LABEL_419;
  }
  if (v281 == v280) {
    v109 = 32;
  LABEL_424:
    (*(void (**)(__int64))(*v281 + v109))((__int64)v281);
  }
  else if (v281 != nullptr) {
    v109 = 40;
    goto LABEL_424;
  }
  if (v279 == v278) {
    v110 = 32;
  LABEL_429:
    (*(void (**)(__int64))(*v279 + v110))((__int64)v279);
  }
  else if (v279 != nullptr) {
    v110 = 40;
    goto LABEL_429;
  }
  if (v286 == v285) {
    v111 = 32;
  LABEL_434:
    (*(void (**)(__int64))(*v286 + v111))((__int64)v286);
  }
  else if (v286 != nullptr) {
    v111 = 40;
    goto LABEL_434;
  }
  if (v284 == v283) {
    v112 = 32;
  LABEL_439:
    (*(void (**)(__int64))(*v284 + v112))((__int64)v284);
  }
  else if (v284 != nullptr) {
    v112 = 40;
    goto LABEL_439;
  }
  if (v291 == v290) {
    v113 = 32;
  LABEL_444:
    (*(void (**)(__int64))(*v291 + v113))((__int64)v291);
  }
  else if (v291 != nullptr) {
    v113 = 40;
    goto LABEL_444;
  }
  if (v289 == v288) {
    v114 = 32;
  LABEL_449:
    (*(void (**)(__int64))(*v289 + v114))((__int64)v289);
  }
  else if (v289 != nullptr) {
    v114 = 40;
    goto LABEL_449;
  }
  if (v296 == v295) {
    v115 = 32;
  LABEL_454:
    (*(void (**)(__int64))(*v296 + v115))((__int64)v296);
  }
  else if (v296 != nullptr) {
    v115 = 40;
    goto LABEL_454;
  }
  if (v294 == v293) {
    v116 = 32;
  LABEL_459:
    (*(void (**)(__int64))(*v294 + v116))((__int64)v294);
  }
  else if (v294 != nullptr) {
    v116 = 40;
    goto LABEL_459;
  }
  if (v301 == v300) {
    v117 = 32;
  LABEL_464:
    (*(void (**)(__int64))(*v301 + v117))((__int64)v301);
  }
  else if (v301 != nullptr) {
    v117 = 40;
    goto LABEL_464;
  }
  if (v299 == v298) {
    v118 = 32;
  LABEL_469:
    (*(void (**)(__int64))(*v299 + v118))((__int64)v299);
  }
  else if (v299 != nullptr) {
    v118 = 40;
    goto LABEL_469;
  }
  if (v306 == v305) {
    v119 = 32;
  LABEL_474:
    (*(void (**)(__int64))(*v306 + v119))((__int64)v306);
  }
  else if (v306 != nullptr) {
    v119 = 40;
    goto LABEL_474;
  }
  if (v304 == v303) {
    v120 = 32;
  LABEL_479:
    (*(void (**)(__int64))(*v304 + v120))((__int64)v304);
  }
  else if (v304 != nullptr) {
    v120 = 40;
    goto LABEL_479;
  }
  if (v311 == v310) {
    v121 = 32;
  LABEL_484:
    (*(void (**)(__int64))(*v311 + v121))((__int64)v311);
  }
  else if (v311 != nullptr) {
    v121 = 40;
    goto LABEL_484;
  }
  if (v309 == v308) {
    v122 = 32;
  LABEL_489:
    (*(void (**)(__int64))(*v309 + v122))((__int64)v309);
  }
  else if (v309 != nullptr) {
    v122 = 40;
    goto LABEL_489;
  }
  if (v316 == v315) {
    v123 = 32;
  LABEL_494:
    (*(void (**)(__int64))(*v316 + v123))((__int64)v316);
  }
  else if (v316 != nullptr) {
    v123 = 40;
    goto LABEL_494;
  }
  if (v314 == v313) {
    v124 = 32;
  LABEL_499:
    (*(void (**)(__int64))(*v314 + v124))((__int64)v314);
  }
  else if (v314 != nullptr) {
    v124 = 40;
    goto LABEL_499;
  }
  if ((_QWORD*)v321[0] == v320) {
    v125 = 32;
  LABEL_504:
    (*(void (**)(__int64))(*(_QWORD*)v321[0] + v125))((__int64)v321[0]);
  }
  else if (v321[0] != 0) {
    v125 = 40;
    goto LABEL_504;
  }
  if ((_QWORD*)v319[0] == v318) {
    v126 = 32;
  LABEL_509:
    (*(void (**)(__int64))(*(_QWORD*)v319[0] + v126))((__int64)v319[0]);
  }
  else if (v319[0] != 0) {
    v126 = 40;
    goto LABEL_509;
  }
  return GameRoutine_2b0(GameRoutine_181b800, &GameData_226b218,
                         &GameData_1f50948);
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

__int64 game_menu_1a06650(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  int v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  _QWORD* v21;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _BYTE* v26;
  int v27;
  int v28;
  int v29;

  if (a2 != 0) {
    v5 = *(unsigned __int16*)(a2 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v5) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
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
      nn_os_UnlockMutex(&game_g_random_mutex);
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
  v16 = 8;
  v17 = v11 | (unsigned int)v5;
  if ((_BYTE)GameData_21caa2c != 0) {
    v12 = GameData_21caa2c;
  }
  else {
    v12 = 0;
  }
  v18 = v12;
  WORD1(v19) = 0;
  HIDWORD(v19) = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = nullptr;
  v21 = &v22;
  v22 = nullptr;
  GameRoutine_930b90_alt1(&v19, GameData_212c8b0[0]);
  v27 = 0;
  v28 = a3;
  v29 = -1;
  ObeliskDestinyMenuItem_1a06060_alt1(a1, &v16, 0);
  v20 = 0;
  v19 = 0;
  if ((v24 & 1) != 0) {
    *v26 = 0;
    v25 = 0;
  }
  else {
    LOWORD(v24) = 0;
  }
  GameRoutine_6e3b50_alt1(&v21, v22);
  v22 = nullptr;
  v23 = 0;
  v21 = &v22;
  if ((v24 & 1) != 0) {
    v13 = v26;
    if (v26 != nullptr) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
      v13 = v22;
    }
  }
  else {
    v13 = nullptr;
  }
  return GameRoutine_6e3b50_alt1(&v21, v13);
}

__int64 game_menu_1a06840(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7;
  __int64* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  int v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  _BYTE* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  int v29;
  int v30;
  int v31;

  if (a2 != 0) {
    v7 = *(unsigned __int16*)(a2 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v7) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
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
      nn_os_UnlockMutex(&game_g_random_mutex);
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
  v18 = 8;
  v19 = v13 | (unsigned int)v7;
  if ((_BYTE)GameData_21caa2c != 0) {
    v14 = GameData_21caa2c;
  }
  else {
    v14 = 0;
  }
  v20 = v14;
  WORD1(v21) = 0;
  HIDWORD(v21) = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = nullptr;
  v23 = &v24;
  v24 = nullptr;
  GameRoutine_930b90_alt1(&v21, GameData_212c8b0[0]);
  v29 = 0;
  v30 = a3;
  v31 = a4;
  ObeliskDestinyMenuItem_1a06060_alt1(a1, &v18, 1);
  v22 = 0;
  v21 = 0;
  if ((v26 & 1) != 0) {
    *v28 = 0;
    v27 = 0;
  }
  else {
    LOWORD(v26) = 0;
  }
  GameRoutine_6e3b50_alt1(&v23, v24);
  v24 = nullptr;
  v25 = 0;
  v23 = &v24;
  if ((v26 & 1) != 0) {
    v15 = v28;
    if (v28 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
      v15 = v24;
    }
  }
  else {
    v15 = nullptr;
  }
  return GameRoutine_6e3b50_alt1(&v23, v15);
}

#pragma GCC visibility pop
