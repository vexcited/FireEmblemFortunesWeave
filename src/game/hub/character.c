#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cedd40(_QWORD);
__int64 GameRoutine_cefbb0(_QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cb490(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd3de0[28])();
extern __int64 (*GameData_1fd42e0[])();
extern __int64 GameData_21c9718;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 Character_ca9280(__int64 result);
unsigned __int8* Character_cb01a0(unsigned __int8* result, unsigned __int8* a2,
                                  __int64 a3, __int64 a4, __int64 a5);
__int64 game_hub_Character_RebuildAppearance(__int64 a1);
bool game_hub_Character_BuildSubquestCommand_lambda1_Invoke(__int64 a1);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
struct PseudoSret GameRoutine_e99570(_QWORD);
bool game_hub_Character_BuildSideStoryCommand_lambda1_Invoke(__int64 a1,
                                                             long double a2);
_QWORD* GameRoutine_cf1840(_QWORD* result, _QWORD*);
_QWORD* HubCharacterNatives_ca8f80(_QWORD*);
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
__attribute__((swiftcall)) void Character_caf150(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_cac400(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_cb1a30(PSEUDO_X8, __int64,
                                                   unsigned int);
__attribute__((swiftcall)) void Manager_d9ae80(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int);
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void game_e99570(PSEUDO_X8, _QWORD*** result);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64** GameRoutine_cb2640(__int64** result);
__int64* GameRoutine_98f140(__int64* result, _QWORD*);
__int64* HubCharacterNatives_cb40c0(__int64*, __int64*);
__int64* HubCharacterNatives_cb4210(__int64*, __int64*);
__int64 AssetTableFile_7e7620(__int64 result, __int64);
__int64 AssetTableFile_7e7b20(__int64 result, unsigned __int64*);
__int64 AssetTableFile_7e8000(__int64);
__int64 AssetTableFile_7e95e0(__int64, __int64, unsigned int);
__int64 CharacterModel_cf5c00(__int64);
__int64 ConditionMap_7ea800(__int64 result);
__int64 ConditionMap_7ec000(__int64 result);
__int64 DungeonController_f5ec20();
__int64 EventManager_cbbb40(__int64, __int64);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67f200(__int64);
__int64 GameRoutine_67f360(__int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_a19f00(_QWORD, _QWORD);
__int64 GameRoutine_a8c0c0(__int64);
__int64 GameRoutine_cee4a0(__int64);
__int64 GameRoutine_cef860(__int64*, __int64);
__int64 GameRoutine_cf16c0(__int64, __int64, __int64);
__int64 GameRoutine_cfd8e0(__int64 result, char);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 HubCharacterNatives_cadba0(__int64);
__int64 HubCharacterNatives_cea6b0(__int64 result);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 HubCharacterNatives_cf7b40(__int64 result, char);
__int64 HubEventNatives_d5bb40(__int64*, __int64);
__int64 PopupController_d7db60(_QWORD*);
__int64 ProcHubSeqEnter_918ce0(__int64*, __int64);
__int64 UnitSkillList_84cc00(__int64*, _DWORD*, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_GrowthListFile_GetJob(__int64*, __int64, char);
__int64 game_HashString(__int64 result);
__int64 game_anonymous_ConditionMap_Add_7ebae0(__int64 result);
__int64 game_da7a40(__int64, float32x4_t*);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, long double);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* game_util_Format(const char*, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* as_g_context_slots_ptr;
extern _UNKNOWN GameData_1a8dc68;
extern _UNKNOWN GameData_1a9d43c;
extern _UNKNOWN GameData_1ae9559;
extern _UNKNOWN GameData_2167580;
extern _UNKNOWN GameData_220b6b8;
extern __int128 GameData_1a831c0;
extern __int64 (*GameData_1fd3db8[])();
extern __int64 (*GameData_1fd41d0[])();
extern __int64 (*GameData_1fd4260[])();
extern __int64 (*GameData_1fd4370[])();
extern __int64 (*GameData_1fd43f0[])();
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*HandlePtr_Unknown23_d5be90_ptr[6])();
extern __int64 (*game_hub_HubCharacterModule_vtable[])();
extern __int64 (*util_HandlePtr_vtable[])();
extern __int64* GameData_212c770[3];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ddb8[4];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebb0[7];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c9988;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 GameData_21f3c98;
extern __int64 GameData_220b6f0;
extern __int64 GameData_22127a8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcFadeView_instance_;
extern __int64 util_g_handle_slots[];
extern char GameData_1a9f09e;
extern char GameData_21d9d78;
extern float GameData_1b82520[5];
extern int GameData_21a606c[];
extern int GameData_21d9d7c;
extern int GameData_220b6b4;
unsigned __int64
Character_cafb80_alt1(unsigned __int64 result) __asm__("Character_cafb80");
unsigned __int64 GameRoutine_cadc90(__int64);
void CharacterRotate_d519c0(int8x16_t*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__int64 Character_Destructor_ca8b40(__int64 a1);
__int64 game_hub_Character_BuildZviewChara(float32x4_t* a1);
__int64 game_hub_Character_SetPopupAmes(__int64 a1);
__int64 Character_cafa30(__int64 a1, _QWORD* a2);
__int64 Character_cafb80(__int64 result);
__attribute__((swiftcall)) void Character_cafca0(PSEUDO_X8 x8_,
                                                 unsigned __int64 a1);
__attribute__((swiftcall)) void Character_caff60(PSEUDO_X8 x8_, __int64 a1);
__int64 Character_cb0480(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void Character_cb17a0(PSEUDO_X8 x8_, _QWORD* a1);
__attribute__((swiftcall)) void Character_cb1ec0(PSEUDO_X8 x8_, __int64 a1,
                                                 unsigned int a2);
__int64 game_hub_Character_BuildSideStoryCommand_lambda0_Invoke(__int64 result,
                                                                __int64 a2);
__int64 game_hub_Character_BuildSubquestCommand_lambda0_Invoke(__int64 a1,
                                                               __int64 a2);
__attribute__((swiftcall)) void
game_hub_Character_RebuildAppearance_lambda0_Invoke(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void
game_hub_Character_BuildZviewChara_lambda0_Invoke(PSEUDO_X8 x8_, __int64 a1);
__int64 game_hub_Character_BuildZviewChara_lambda1_Invoke(__int64 a1,
                                                          __int64* a2);
__int64* GameRoutine_ceecc0(__int64* result, _DWORD*);
__int64 GameRoutine_d242c0(__int64*, __int64, __int64, __int64, _DWORD*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64
game_hub_CharacterControllerAutonomy_CharacterControllerAutonomy(__int64,
                                                                 __int64);
__int64 game_hub_CharacterControllerEnemy_CharacterControllerEnemy(__int64,
                                                                   __int64);
__int64 game_hub_CharacterControllerPlayer_CharacterControllerPlayer(__int64,
                                                                     __int64);
__int64 game_zview_d0e440(__int64 result, char);
__int64 game_zview_d17160(float, __int64, __int64, float32x4_t*, float32x4_t*);
extern _UNKNOWN GameData_1a89fb8;
extern _UNKNOWN GameData_1afd9c8;
extern __int64 (*GameData_1fd4470[])();
extern __int64 (*GameData_1fd44c0[])();
extern __int64 (*GameData_1fd4510[])();
extern __int64 (*GameData_1fd4560[])();
extern __int64 (*game_hub_CharacterControllerMob_vtable[])();
extern __int64* GameData_212ebd0[3];
__int64 Character_caaee0(__int64 result, int a2, char a3);
__attribute__((swiftcall)) void Character_cb1a30(PSEUDO_X8 x8_, __int64 a1,
                                                 unsigned int a2);

__int64 Character_Destructor_ca8b40(__int64 a1)
{
  __int64 v1;
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64* v34;

  v1 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)a1 = GameData_1fd3db8;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 1240);
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  HubCharacterNatives_ca8f80((_QWORD*)a1);
  GameRoutine_cf1840((_QWORD*)GameData_220b6f0, *(_QWORD**)(a1 + 24));
  v6 = *(_QWORD*)(a1 + 1240);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v34 = (__int64*)(a1 + 1168);
  GameRoutine_cb2640(&v34);
  v7 = *(_QWORD*)(a1 + 1136);
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = *(_QWORD*)(a1 + 1144);
    if (v7 == v9) {
      goto LABEL_23;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0) {
        std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v7);
    v11 = *(_QWORD*)(a1 + 1136);
    *(_QWORD*)(a1 + 1144) = v7;
    if (v11 != 0) {
    LABEL_23:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12);
    }
  }
  v13 = *(_QWORD*)(a1 + 1088);
  if (v13 != 0) {
    v14 = *(_QWORD*)v8;
    *(_QWORD*)(a1 + 1096) = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(v14 + v15);
  }
  Character_ca9280(a1 + 208);
  v16 = *(_QWORD*)(a1 + 200);
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak(v16);
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0 && *(_QWORD*)(a1 + 176) != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v17);
  }
  v18 = *(_QWORD*)(a1 + 136);
  if (v18 != 0) {
    v19 = *(_QWORD*)(a1 + 144);
    if (v18 == v19) {
      goto LABEL_48;
    }
    v20 = *(_QWORD*)(a1 + 144);
    do {
      v21 = *(_BYTE*)(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0 && *(_QWORD*)(v19 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v22);
      }
      v19 = v20;
    } while (v20 != v18);
    v23 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 144) = v18;
    if (v23 != 0) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v24);
    }
  }
  v25 = *(_QWORD*)(a1 + 128);
  if (v25 != 0) {
    std___1___shared_weak_count___release_weak(v25);
  }
  result = *(_QWORD*)(a1 + 112);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v27 = *(_QWORD*)(a1 + 96);
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = std___1___shared_weak_count___release_weak(v27);
  }
  v28 = *(_QWORD*)(a1 + 80);
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    result = std___1___shared_weak_count___release_weak(v28);
  }
  v29 = *(_QWORD*)(a1 + 64);
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = std___1___shared_weak_count___release_weak(v29);
    if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
      goto LABEL_69;
    }
  }
  else if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
    goto LABEL_69;
  }
  if (*(_QWORD*)(a1 + 48) != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v30);
  }
LABEL_69:
  *(_QWORD*)a1 = util_HandlePtr_vtable;
  v31 = *(unsigned int*)(a1 + 8);
  v32 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v32 != 0x4000) {
    v33 = (_QWORD*)(util_g_handle_slots[v31] + 16 * v32);
    if (*v33 != 0 && v33[1] == a1) {
      *v33 = 0;
      v33[1] = 0;
      *(_QWORD*)(a1 + 8) = 0x400000000001LL;
    }
  }
  --GameData_21a606c[v31];
  return result;
}

__int64 Character_ca9280(__int64 result)
{
  __int64 v1;
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
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  char v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  char v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  char v110;
  char v111;
  char v112;

  v1 = result;
  if ((*(_BYTE*)(result + 824) & 1) != 0 && *(_QWORD*)(result + 840) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if (*(_BYTE*)(v1 + 808) == 1) {
    v3 = *(_QWORD*)(v1 + 784);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v1 + 792);
      if (v3 == v4) {
        goto LABEL_14;
      }
      do {
        v5 = *(unsigned int*)(v4 - 8);
        v6 = v4 - 32;
        if ((_DWORD)v5 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v5])(&v110,
                                                                       v4 - 32);
        }
        *(_DWORD*)(v4 - 8) = -1;
        v4 -= 32;
      } while (v6 != v3);
      v7 = *(_QWORD*)(v1 + 784);
      *(_QWORD*)(v1 + 792) = v3;
      if (v7 != 0) {
      LABEL_14:
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
      }
    }
    if ((*(_BYTE*)(v1 + 760) & 1) != 0 && *(_QWORD*)(v1 + 776) != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
    }
  }
  if (*(_BYTE*)(v1 + 736) == 1) {
    v10 = *(_QWORD*)(v1 + 712);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v1 + 720);
      if (v10 == v11) {
        goto LABEL_30;
      }
      do {
        v12 = *(unsigned int*)(v11 - 8);
        v13 = v11 - 32;
        if ((_DWORD)v12 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v12])(
              &v111, v11 - 32);
        }
        *(_DWORD*)(v11 - 8) = -1;
        v11 -= 32;
      } while (v13 != v10);
      v14 = *(_QWORD*)(v1 + 712);
      *(_QWORD*)(v1 + 720) = v10;
      if (v14 != 0) {
      LABEL_30:
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
      }
    }
    if ((*(_BYTE*)(v1 + 688) & 1) != 0 && *(_QWORD*)(v1 + 704) != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
    }
  }
  if (*(_BYTE*)(v1 + 664) == 1) {
    v17 = *(_QWORD*)(v1 + 640);
    if (v17 != 0) {
      v18 = *(_QWORD*)(v1 + 648);
      if (v17 == v18) {
        goto LABEL_46;
      }
      do {
        v19 = *(unsigned int*)(v18 - 8);
        v20 = v18 - 32;
        if ((_DWORD)v19 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v19])(
              &v112, v18 - 32);
        }
        *(_DWORD*)(v18 - 8) = -1;
        v18 -= 32;
      } while (v20 != v17);
      v21 = *(_QWORD*)(v1 + 640);
      *(_QWORD*)(v1 + 648) = v17;
      if (v21 != 0) {
      LABEL_46:
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
      }
    }
    if ((*(_BYTE*)(v1 + 616) & 1) != 0 && *(_QWORD*)(v1 + 632) != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
    }
  }
  if ((*(_BYTE*)(v1 + 568) & 1) != 0 && *(_QWORD*)(v1 + 584) != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  v25 = *(_QWORD*)(v1 + 560);
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  v26 = *(_QWORD*)(v1 + 512);
  if (v26 != 0) {
    v27 = *(_QWORD*)(v1 + 520);
    if (v26 == v27) {
      goto LABEL_73;
    }
    v28 = *(_QWORD*)(v1 + 520);
    v29 = fw_memory_g_heap_manager_ptr;
    do {
      v30 = *(_BYTE*)(v28 - 24);
      v28 -= 24;
      if ((v30 & 1) != 0 && *(_QWORD*)(v27 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v29 + v31);
      }
      v27 = v28;
    } while (v28 != v26);
    v32 = *(_QWORD*)(v1 + 512);
    *(_QWORD*)(v1 + 520) = v26;
    if (v32 != 0) {
    LABEL_73:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
    }
  }
  if ((*(_BYTE*)(v1 + 488) & 1) != 0 && *(_QWORD*)(v1 + 504) != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
  }
  v35 = *(_QWORD*)(v1 + 464);
  if (v35 != 0) {
    v36 = *(_QWORD*)(v1 + 472);
    if (v35 == v36) {
      goto LABEL_92;
    }
    v37 = *(_QWORD*)(v1 + 472);
    v38 = fw_memory_g_heap_manager_ptr;
    do {
      v39 = *(_BYTE*)(v37 - 24);
      v37 -= 24;
      if ((v39 & 1) != 0 && *(_QWORD*)(v36 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v40);
      }
      v36 = v37;
    } while (v37 != v35);
    v41 = *(_QWORD*)(v1 + 464);
    *(_QWORD*)(v1 + 472) = v35;
    if (v41 != 0) {
    LABEL_92:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v42 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
    }
  }
  if ((*(_BYTE*)(v1 + 440) & 1) != 0 && *(_QWORD*)(v1 + 456) != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
  }
  v44 = *(_QWORD*)(v1 + 416);
  if (v44 != 0) {
    v45 = *(_QWORD*)(v1 + 424);
    if (v44 == v45) {
      goto LABEL_111;
    }
    v46 = *(_QWORD*)(v1 + 424);
    v47 = fw_memory_g_heap_manager_ptr;
    do {
      v48 = *(_BYTE*)(v46 - 24);
      v46 -= 24;
      if ((v48 & 1) != 0 && *(_QWORD*)(v45 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v47 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v47 + v49);
      }
      v45 = v46;
    } while (v46 != v44);
    v50 = *(_QWORD*)(v1 + 416);
    *(_QWORD*)(v1 + 424) = v44;
    if (v50 != 0) {
    LABEL_111:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
    }
  }
  if ((*(_BYTE*)(v1 + 392) & 1) != 0 && *(_QWORD*)(v1 + 408) != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
  }
  v53 = *(_QWORD*)(v1 + 368);
  if (v53 != 0) {
    v54 = *(_QWORD*)(v1 + 376);
    if (v53 == v54) {
      goto LABEL_130;
    }
    v55 = *(_QWORD*)(v1 + 376);
    v56 = fw_memory_g_heap_manager_ptr;
    do {
      v57 = *(_BYTE*)(v55 - 24);
      v55 -= 24;
      if ((v57 & 1) != 0 && *(_QWORD*)(v54 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v56 + 200LL) != 0) {
          v58 = 128;
        }
        else {
          v58 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v56 + v58);
      }
      v54 = v55;
    } while (v55 != v53);
    v59 = *(_QWORD*)(v1 + 368);
    *(_QWORD*)(v1 + 376) = v53;
    if (v59 != 0) {
    LABEL_130:
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
    }
  }
  if ((*(_BYTE*)(v1 + 344) & 1) != 0 && *(_QWORD*)(v1 + 360) != 0) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v61 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
  }
  v62 = *(_QWORD*)(v1 + 320);
  if (v62 != 0) {
    v63 = *(_QWORD*)(v1 + 328);
    if (v62 == v63) {
      goto LABEL_149;
    }
    v64 = *(_QWORD*)(v1 + 328);
    v65 = fw_memory_g_heap_manager_ptr;
    do {
      v66 = *(_BYTE*)(v64 - 24);
      v64 -= 24;
      if ((v66 & 1) != 0 && *(_QWORD*)(v63 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v65 + 200LL) != 0) {
          v67 = 128;
        }
        else {
          v67 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v65 + v67);
      }
      v63 = v64;
    } while (v64 != v62);
    v68 = *(_QWORD*)(v1 + 320);
    *(_QWORD*)(v1 + 328) = v62;
    if (v68 != 0) {
    LABEL_149:
      v69 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v69 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v69);
    }
  }
  if ((*(_BYTE*)(v1 + 296) & 1) != 0 && *(_QWORD*)(v1 + 312) != 0) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
  }
  v71 = *(_QWORD*)(v1 + 272);
  if (v71 != 0) {
    v72 = *(_QWORD*)(v1 + 280);
    if (v71 == v72) {
      goto LABEL_168;
    }
    v73 = *(_QWORD*)(v1 + 280);
    v74 = fw_memory_g_heap_manager_ptr;
    do {
      v75 = *(_BYTE*)(v73 - 24);
      v73 -= 24;
      if ((v75 & 1) != 0 && *(_QWORD*)(v72 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v74 + 200LL) != 0) {
          v76 = 128;
        }
        else {
          v76 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v74 + v76);
      }
      v72 = v73;
    } while (v73 != v71);
    v77 = *(_QWORD*)(v1 + 272);
    *(_QWORD*)(v1 + 280) = v71;
    if (v77 != 0) {
    LABEL_168:
      v78 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v78 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v78);
    }
  }
  if ((*(_BYTE*)(v1 + 248) & 1) != 0 && *(_QWORD*)(v1 + 264) != 0) {
    v79 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v79 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v79);
  }
  v80 = *(_QWORD*)(v1 + 224);
  if (v80 != 0) {
    v81 = *(_QWORD*)(v1 + 232);
    if (v80 == v81) {
      goto LABEL_187;
    }
    v82 = *(_QWORD*)(v1 + 232);
    v83 = fw_memory_g_heap_manager_ptr;
    do {
      v84 = *(_BYTE*)(v82 - 24);
      v82 -= 24;
      if ((v84 & 1) != 0 && *(_QWORD*)(v81 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v83 + 200LL) != 0) {
          v85 = 128;
        }
        else {
          v85 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v83 + v85);
      }
      v81 = v82;
    } while (v82 != v80);
    v86 = *(_QWORD*)(v1 + 224);
    *(_QWORD*)(v1 + 232) = v80;
    if (v86 != 0) {
    LABEL_187:
      v87 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v87 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v87);
    }
  }
  if ((*(_BYTE*)(v1 + 200) & 1) != 0 && *(_QWORD*)(v1 + 216) != 0) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v88 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v88);
  }
  v89 = *(_QWORD*)(v1 + 160);
  if (v89 != 0) {
    v90 = *(_QWORD*)(v1 + 168);
    if (v89 == v90) {
      goto LABEL_206;
    }
    v91 = *(_QWORD*)(v1 + 168);
    v92 = fw_memory_g_heap_manager_ptr;
    do {
      v93 = *(_BYTE*)(v91 - 24);
      v91 -= 24;
      if ((v93 & 1) != 0 && *(_QWORD*)(v90 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v92 + 200LL) != 0) {
          v94 = 128;
        }
        else {
          v94 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v92 + v94);
      }
      v90 = v91;
    } while (v91 != v89);
    v95 = *(_QWORD*)(v1 + 160);
    *(_QWORD*)(v1 + 168) = v89;
    if (v95 != 0) {
    LABEL_206:
      v96 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v96 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v96);
    }
  }
  v97 = *(_QWORD*)(v1 + 136);
  if (v97 != 0) {
    v98 = *(_QWORD*)(v1 + 144);
    if (v97 == v98) {
      goto LABEL_220;
    }
    v99 = *(_QWORD*)(v1 + 144);
    v100 = fw_memory_g_heap_manager_ptr;
    do {
      v101 = *(_BYTE*)(v99 - 24);
      v99 -= 24;
      if ((v101 & 1) != 0 && *(_QWORD*)(v98 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v100 + 200LL) != 0) {
          v102 = 128;
        }
        else {
          v102 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v100 + v102);
      }
      v98 = v99;
    } while (v99 != v97);
    v103 = *(_QWORD*)(v1 + 136);
    *(_QWORD*)(v1 + 144) = v97;
    if (v103 != 0) {
    LABEL_220:
      v104 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v104 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v104);
    }
  }
  if ((*(_BYTE*)(v1 + 112) & 1) != 0 && *(_QWORD*)(v1 + 128) != 0) {
    v105 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v105 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v105);
  }
  if ((*(_BYTE*)(v1 + 88) & 1) != 0 && *(_QWORD*)(v1 + 104) != 0) {
    v106 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v106 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v106);
  }
  if ((*(_BYTE*)(v1 + 64) & 1) != 0 && *(_QWORD*)(v1 + 80) != 0) {
    v107 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v107 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v107);
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0 && *(_QWORD*)(v1 + 40) != 0) {
    v108 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v108 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v108);
  }
  if ((*(_BYTE*)v1 & 1) != 0 && *(_QWORD*)(v1 + 16) != 0) {
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v109);
  }
  return result;
}

__int64 game_hub_Character_BuildZviewChara(float32x4_t* a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int8* v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  bool v21;
  __int8* v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned int v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int128 v42;
  __int64 v43;
  _QWORD* v44;
  float v45;
  __int64 v46;
  int8x16_t* v47;
  int v48;
  __int64* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 result;
  __int64 v54;
  struct {
    _QWORD v55[4];
    _QWORD* v56;
  } v55_;
  struct {
    __int64 v57;
    unsigned __int64 v58;
    char* v59;
  } v57_;
  struct {
    _QWORD v60[4];
    _QWORD* v61;
  } v60_;
  struct {
    __int64 v62;
    unsigned __int64 v63;
    char* v64;
  } v62_;
  struct {
    __int128 v65;
    __int8* v66;
  } v65_;

  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = LANES128(a1[1]).n128_u64[0];
  if (v1 != 0 && (v3 = *(_BYTE**)(v1 + 40)) != nullptr && *v3 != 0) {
    v4 = 0x80000;
  }
  else {
    v4 = 0;
  }
  v60_.v61 = v60_.v60;
  v5 = *GameData_212eba8[0];
  v60_.v60[0] = GameData_1fd4370;
  v60_.v60[1] = a1;
  v6 = GameRoutine_cf16c0(v5, (__int64)v60_.v60, v4),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v60_.v61 == v60_.v60) {
    v7 = 32;
  }
  else {
    if (v60_.v61 == nullptr) {
      goto LABEL_11;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v60_.v61 + v7))((__int64)v60_.v61),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_11:
  v8 = LANES128(a1[14]).n128_u8[8];
  LANES128(a1[1]).n128_u64[1] = v6;
  v57_.v58 = 0;
  v57_.v59 = nullptr;
  v57_.v57 = 0;
  if ((v8 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&v65_.v65,
                                  LANES128(a1[15]).n128_i64[1],
                                  LANES128(a1[15]).n128_u64[0]),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v9 = LANES128(a1[15]).n128_u64[0];
    v10 = LANES128(a1[15]).n128_u64[1];
    *(_QWORD*)&v65_.v65 = LANES128(a1[14]).n128_u64[1];
    *((_QWORD*)&v65_.v65 + 1) = v9;
    v65_.v66 = (__int8*)v10;
  }
  if ((v65_.v65 & 1) != 0) {
    v11 = *((_QWORD*)&v65_.v65 + 1);
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)v65_.v65 >> 1;
  }
  if (v11 == 0) {
    v19 = LANES128(a1[13]).n128_u8[0];
    v20 = LANES128(a1[13]).n128_u64[1];
    v21 = (v19 & 1) == 0;
    if ((v19 & 1) != 0) {
      v22 = (__int8*)LANES128(a1[14]).n128_u64[0];
    }
    else {
      v22 = &LANES128(a1[13]).n128_i8[1];
    }
    goto LABEL_50;
  }
  v12 = LANES128(a1[20]).n128_u8[0];
  v13 = (v12 & 1) == 0;
  v14 = v12 >> 1;
  if (v13) {
    v15 = v14;
  }
  else {
    v15 = LANES128(a1[20]).n128_u64[1];
  }
  if (v13) {
    v16 = &LANES128(a1[20]).n128_i8[1];
  }
  else {
    v16 = (__int8*)LANES128(a1[21]).n128_u64[0];
  }
  v17 = v15 + 1;
  if (v15 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v17 | 7) + 1;
    }
    v18 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23,
                                                16, 0),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v62_.v63 = v15 + 1;
    v62_.v64 = v18;
    v62_.v62 = v23 | 1;
  }
  else {
    v62_.v63 = 0;
    v62_.v64 = nullptr;
    v62_.v62 = (unsigned __int8)(2 * v17);
    v18 = (char*)&v62_.v62 + 1;
    if (v15 == 0) {
      goto LABEL_36;
    }
  }
  memmove(v18, v16, v15),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_36:
  *(_WORD*)&v18[v15] = 44;
  if ((v62_.v62 & 1) != 0) {
    v24 = v62_.v64;
  }
  else {
    v24 = (char*)&v62_.v62 + 1;
  }
  if ((v62_.v62 & 1) != 0) {
    v25 = v62_.v63;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)v62_.v62 >> 1;
  }
  GameRoutine_1a09ce0(&v57_.v57, v24, v25),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v62_.v62 & 1) != 0 && v62_.v64 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v19 = (unsigned __int8)v65_.v65;
  v20 = *((_QWORD*)&v65_.v65 + 1);
  v21 = (v65_.v65 & 1) == 0;
  if ((v65_.v65 & 1) != 0) {
    v22 = v65_.v66;
  }
  else {
    v22 = (char*)&v65_.v65 + 1;
  }
LABEL_50:
  v27 = v19 >> 1;
  if (v21) {
    v28 = v27;
  }
  else {
    v28 = v20;
  }
  GameRoutine_1a09ce0(&v57_.v57, v22, v28),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v65_.v65 & 1) != 0 && v65_.v66 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v30 = *(_QWORD*)(v6 + 8);
  if ((v57_.v57 & 1) != 0) {
    v31 = v57_.v58;
  }
  else {
    v31 = (unsigned __int64)(unsigned __int8)v57_.v57 >> 1;
  }
  v33 = *(unsigned __int8*)(v30 + 192);
  v32 = v30 + 192;
  v34 = (unsigned __int64)v33 >> 1;
  if ((v33 & 1) != 0) {
    v35 = *(_QWORD*)(v32 + 8);
  }
  else {
    v35 = v34;
  }
  if (v35 == 0 && v31 != 0) {
    if ((v57_.v57 & 1) != 0) {
      v37 = v57_.v59;
    }
    else {
      v37 = (char*)&v57_.v57 + 1;
    }
    GameRoutine_60a060((char*)v32, (__int64)v37, v31),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v57_.v57 & 1) != 0 && v57_.v59 != nullptr) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v38),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (LANES128(a1[64]).n128_u8[1] == 1) {
    v39 = LANES128(a1[1]).n128_i64[1];
    *(_DWORD*)(v39 + 368) = 0;
    *(_BYTE*)(v39 + 372) = 1;
    HubCharacterNatives_cea6b0(v39),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v40 = *(_QWORD*)(LANES128(a1[1]).n128_u64[1] + 16);
    *(_BYTE*)(v40 + 288) = 1;
    GameRoutine_cfd8e0(v40 + 136, 1),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((game_da7a40(*(_QWORD*)(*GameData_212d458[0] + 8), a1) & 1) == 0) {
    *(_QWORD*)&v42 = LANES128(a1[24]).n128_u64[1];
    LODWORD(v41) = LANES128(a1[25]).n128_u32[0];
    *((_QWORD*)&v42 + 1) = v41;
    v43 = *(_QWORD*)(LANES128(a1[1]).n128_u64[1] + 16);
    v65_.v65 = v42;
    game_zview_d12d30(v43, (int32x2_t*)&v65_.v65, 1),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v44 = *(_QWORD**)(LANES128(a1[1]).n128_u64[1] + 16);
    v45 = LANES128(a1[25]).n128_f32[1] * 0x1.1df46a0000000p-6f;
    if (v44[107] != 0) {
      v46 = v44[108];
      v44[107] = 0;
      v44[108] = 0;
      if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v46),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v47 = (int8x16_t*)v44[61];
    v48 = LANES128(v47[11]).n128_u8[4];
    LANES128(v47[2]).n128_f32[0] = v45;
    LANES128(v47[2]).n128_f32[1] = v45;
    if (v48 == 1) {
      LANES128(v47[11]).n128_u8[4] = 0;
    }
    CharacterRotate_d519c0(v47),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v49 = (__int64*)LANES128(a1[1]).n128_u64[1];
  v55_.v55[0] = GameData_1fd43f0;
  v55_.v55[1] = a1;
  v55_.v56 = v55_.v55;
  v50 = v49[51];
  if (v50 >= v49[52]) {
    v52 = GameRoutine_cef860(v49 + 50, (__int64)v55_.v55),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *(_QWORD*)(v50 + 32) = v50;
    (*(void (**)(_QWORD*, unsigned __int64))(*v55_.v56 + 24LL))(v55_.v56, v50),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v52 = v50 + 48;
  }
  v49[51] = v52;
  result = (__int64)v55_.v56;
  if (v55_.v56 == v55_.v55) {
    v54 = 32;
  }
  else {
    if (v55_.v56 == nullptr) {
      return result;
    }
    v54 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64))(*v55_.v56 + v54))(v55_.v56, v51);
}

__int64 Character_caaee0(__int64 result, int a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  float v19;
  char v20;
  int v21;
  float v22;
  float v23;
  char v24;
  int v25;
  float v26;
  __int64 v27;
  int v28;
  _QWORD* v29;
  __int64 v30;
  int v31;
  int v33;
  char v35;
  char v36;
  __int64 v37;
  int v38;
  int v39;
  unsigned int v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  bool v45;
  __int64 v46;
  unsigned __int64 v47[2];
  unsigned __int64 v48[2];

  v4 = result;
  if ((a3 & 1) == 0 && *(_DWORD*)(result + 1112) == a2) {
    return result;
  }
  v5 = *(_QWORD*)(result + 64);
  *(_DWORD*)(result + 1112) = a2;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_DWORD*)(v4 + 1112);
  v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  switch (v6) {
  case 1:
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate(v7, 304, 16, 0);
    v9 = v12 + 4;
    v10 = v12;
    v12[1] = 0;
    v12[2] = 0;
    *v12 = GameData_1fd44c0;
    game_hub_CharacterControllerEnemy_CharacterControllerEnemy(
        (__int64)(v12 + 4), v4);
    break;
  case 2:
    v11 = (_QWORD*)fw_memory_HeapManager_Allocate(v7, 176, 16, 0);
    v9 = v11 + 4;
    v10 = v11;
    v11[1] = 0;
    v11[2] = 0;
    *v11 = GameData_1fd4510;
    game_hub_CharacterControllerAutonomy_CharacterControllerAutonomy(
        (__int64)(v11 + 4), v4);
    break;
  case 3:
    v8 = (_QWORD*)fw_memory_HeapManager_Allocate(v7, 96, 16, 0);
    v9 = v8 + 3;
    v10 = v8;
    v8[1] = 0;
    v8[2] = 0;
    *v8 = GameData_1fd4560;
    game_hub_CharacterControllerPlayer_CharacterControllerPlayer(
        (__int64)(v8 + 3), v4);
    break;
  default:
    v13 = fw_memory_HeapManager_Allocate(v7, 112, 16, 0);
    *(_QWORD*)(v13 + 8) = 0;
    *(_QWORD*)(v13 + 16) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    v10 = (_QWORD*)v13;
    v14 = v13;
    *(_QWORD*)(v13 + 40) = v4;
    *(_QWORD*)v13 = GameData_1fd4470;
    *(_BYTE*)(v13 + 64) = 0;
    *(_BYTE*)(v13 + 80) = 0;
    *(_DWORD*)(v13 + 96) = 0;
    v15 = *(_QWORD**)(v4 + 24);
    *(_QWORD*)(v14 + 32) = game_hub_CharacterControllerMob_vtable;
    v9 = (_QWORD*)(v14 + 32);
    HubCharacterNatives_ceca80(v15, 128, 1);
    v16 = *(_QWORD*)(v10[5] + 24LL);
    LODWORD(v48[0]) = 4;
    GameRoutine_ceecc0((__int64*)(v16 + 344), v48);
    HubCharacterNatives_cea6b0(v16);
    break;
  }
  v17 = *(_QWORD*)(v4 + 64);
  *(_QWORD*)(v4 + 56) = v9;
  *(_QWORD*)(v4 + 64) = v10;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  if ((a2 & 0xFFFFFFFE) == 2) {
    *(_BYTE*)(v4 + 1116) = 1;
  }
  v18 = *(_DWORD*)(v4 + 1112);
  v19 = 0x0.0p+0f;
  if ((unsigned int)(v18 - 1) >= 2) {
    if (v18 == 3) {
      v24 = 0;
      v20 = 0;
      v25 = 0;
      v26 = 0x0.0p+0f;
      goto LABEL_37;
    }
    v20 = 1;
  LABEL_20:
    if (v18 == 0) {
      v21 = *(_DWORD*)(v4 + 1220);
      if (v21 != 3) {
        v22 = 0x1.e000000000000p+3f;
        if (v21 == 2) {
          v28 = 1061997773;
        }
        else {
          if (v21 == 1) {
            v22 = 0x1.c000000000000p+2f;
            v23 = 0x1.8000000000000p+1f;
          LABEL_35:
            v26 = v23 * 0x1.1c71c80000000p-2f;
            v19 = v22 * 0x1.1c71c80000000p-2f;
            goto LABEL_36;
          }
          v28 = 1080452710;
        }
        v23 = *(float*)&v28;
        goto LABEL_35;
      }
      v22 = 0x1.4000000000000p+2f;
      v23 = 0x1.4000000000000p+1f;
      goto LABEL_35;
    }
  LABEL_30:
    v25 = 0;
    v24 = 1;
    v26 = 0x0.0p+0f;
    goto LABEL_37;
  }
  v20 = 0;
  if (v18 != 1) {
    goto LABEL_20;
  }
  v27 = *(_QWORD*)(v4 + 800);
  if (v27 == 0) {
    goto LABEL_30;
  }
  v26 = *(float*)(v27 + 44);
  v19 = *(float*)(v27 + 48);
LABEL_36:
  v24 = 1;
  v25 = 1;
LABEL_37:
  v29 = *(_QWORD**)(v4 + 24);
  v30 = v29[2];
  v31 = *(unsigned __int8*)(v30 + 444);
  if (v31 == v25 && v31 != 0) {
    if (*(float*)(v30 + 440) == v26) {
      goto LABEL_46;
    }
  }
  else if (v31 == v25) {
  LABEL_46:
    v33 = *(unsigned __int8*)(v30 + 436);
    if (v33 == v25 && v33 != 0) {
      if (*(float*)(v30 + 432) == v19) {
        goto LABEL_55;
      }
    }
    else if (v33 == v25) {
    LABEL_55:
      HubCharacterNatives_ceca80(v29, 64, v20);
      result =
          (__int64)HubCharacterNatives_ceca80(*(_QWORD**)(v4 + 24), 2, v24);
      v48[0] = 0x95885582C43015DFLL;
      v48[1] = (unsigned __int64)&GameData_1afd9c8;
      if (game_GameModeData_instance_ != 0 &&
          (result = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48), v48)) != 0 &&
          *(_DWORD*)(result + 32) != 0) {
        v35 = 1;
      }
      else {
        v47[0] = 0x525C2B0D41432C61LL;
        v47[1] = (unsigned __int64)&GameData_1a89fb8;
        v35 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          result = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48), v47);
          v35 = result != 0 && *(_DWORD*)(result + 32) != 0;
        }
      }
      if (*(_DWORD*)(v4 + 1112) < 2u) {
        v36 = v35;
      }
      else {
        v36 = 0;
      }
      v37 = *(_QWORD*)(v4 + 800);
      if (v37 != 0) {
        v36 |= (*(_WORD*)(v37 + 56) & 2) != 0;
      }
      else {
        v42 = *(_QWORD*)(v4 + 768);
        if (v42 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
            result = std___1___shared_weak_count___release_weak(v42);
          }
        }
      }
      v38 = *(_DWORD*)(v4 + 184);
      if ((v36 & 1) != 0) {
        v39 = 0x400000;
      }
      else {
        v39 = 0;
      }
      v40 = v38 & 0xFFBFFFFF | v39;
      *(_DWORD*)(v4 + 184) = v40;
      if (v40 != v38) {
        HubCharacterNatives_ceca80(*(_QWORD**)(v4 + 24), 512,
                                   (v38 & 0x40) != 0);
        if (*(_QWORD*)(v4 + 760) != 0) {
          v41 = false;
        }
        else {
          v43 = *(_QWORD*)(v4 + 112);
          v41 = v43 == 0 || *(_QWORD*)(v43 + 8) == -1;
          if (*(_DWORD*)(v4 + 1112) != 0) {
            v41 = false;
          }
        }
        HubCharacterNatives_ceca80(*(_QWORD**)(v4 + 24), 32,
                                   v41 ||
                                       (*(_DWORD*)(v4 + 184) & 0x400000) != 0);
        result =
            HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL),
                                       (*(_DWORD*)(v4 + 184) & 0x400020) == 0);
        v38 = *(_DWORD*)(v4 + 184);
      }
      v44 = v38 & 0xFF7FFFFF | (((v38 & 0x400000) != 0) << 23);
      *(_DWORD*)(v4 + 184) = v44;
      if (v44 != v38) {
        HubCharacterNatives_ceca80(*(_QWORD**)(v4 + 24), 512,
                                   (v38 & 0x40) != 0);
        if (*(_QWORD*)(v4 + 760) != 0) {
          v45 = false;
        }
        else {
          v46 = *(_QWORD*)(v4 + 112);
          v45 = v46 == 0 || *(_QWORD*)(v46 + 8) == -1;
          if (*(_DWORD*)(v4 + 1112) != 0) {
            v45 = false;
          }
        }
        HubCharacterNatives_ceca80(*(_QWORD**)(v4 + 24), 32,
                                   v45 ||
                                       (*(_DWORD*)(v4 + 184) & 0x400000) != 0);
        return HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL),
                                          (*(_DWORD*)(v4 + 184) & 0x400020) ==
                                              0);
      }
      return result;
    }
    *(float*)(v30 + 432) = v19;
    *(_BYTE*)(v30 + 436) = v25;
    game_zview_d0e440(v29[2], 1);
    v29 = *(_QWORD**)(v4 + 24);
    goto LABEL_55;
  }
  *(float*)(v30 + 440) = v26;
  *(_BYTE*)(v30 + 444) = v25;
  game_zview_d0e440(v29[2], 1);
  v29 = *(_QWORD**)(v4 + 24);
  v30 = v29[2];
  goto LABEL_46;
}

__int64 game_hub_Character_SetPopupAmes(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  struct {
    char v32[8];
    unsigned __int64 v33;
    __int64 v34;
  } v32_;
  struct {
    __int64 (**v35)();
    __int64 v36;
    char gap96_[16];
    __int64 (***v37)();
    char gap120_[8];
    unsigned int v38;
  } v35_;
  unsigned __int64 v39;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  HubCharacterNatives_cadba0(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(a1 + 760);
  v3 = *(_QWORD*)(a1 + 768);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v2 != 0 && ((*(_BYTE*)(v2 + 128) & 1) != 0 || *(_BYTE*)(v2 + 224) == 1)) {
    GameRoutine_cadc90(a1),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v3),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = *(_QWORD*)(a1 + 200);
    if (v4 == 0) {
      goto LABEL_14;
    }
  }
  else {
    v4 = *(_QWORD*)(a1 + 200);
    if (v4 == 0) {
    LABEL_14:
      PopupController_d7db60(nullptr),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_15;
    }
  }
  v5 = std___1___shared_weak_count_lock(v4),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v5 == 0) {
    goto LABEL_14;
  }
  v6 = v5;
  PopupController_d7db60(*(_QWORD**)(a1 + 192)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v6),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_15:
  Character_caf150((void*)((__int64)v32_.v32), a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = *(_QWORD*)(a1 + 128);
  if ((v32_.v32[0] & 1) != 0) {
    v8 = v32_.v33;
  }
  else {
    v8 = (unsigned __int64)(unsigned __int8)v32_.v32[0] >> 1;
  }
  if (v8 == 0) {
    if (result != 0) {
      v18 = std___1___shared_weak_count_lock(result),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v18 != 0) {
        v19 = *(_QWORD*)(a1 + 120);
        v20 = v18;
        if (v19 != 0) {
          EventManager_cbbb40(GameData_21f3c98, v19),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v20),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      result = *(_QWORD*)(a1 + 128);
      *(_QWORD*)(a1 + 120) = 0;
      *(_QWORD*)(a1 + 128) = 0;
      if (result != 0) {
        goto LABEL_61;
      }
    }
    else {
      *(_QWORD*)(a1 + 120) = 0;
      *(_QWORD*)(a1 + 128) = 0;
    }
    goto LABEL_62;
  }
  if (result != 0 && *(_QWORD*)(result + 8) != -1) {
    goto LABEL_62;
  }
  GameRoutine_cac400((void*)(&v35_.v35), a1, 1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = v35_.v36;
  v10 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 120) = v35_.v35;
  *(_QWORD*)(a1 + 128) = v9;
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  HubCharacterNatives_cabfc0(a1, 1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = *(_QWORD*)(a1 + 128);
  if (result == 0) {
    goto LABEL_62;
  }
  result = std___1___shared_weak_count_lock(result),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result == 0) {
    goto LABEL_62;
  }
  v12 = *(_QWORD*)(a1 + 120);
  v13 = result;
  if (v12 == 0) {
    goto LABEL_59;
  }
  v14 = *(_DWORD*)(v12 + 1760);
  v15 = *(_QWORD*)(v12 + 1312);
  v30_.v30[0] = GameData_1fd41d0;
  v30_.v30[1] = a1;
  v35_.v35 = GameData_1fd41d0;
  v35_.v36 = a1;
  *(_DWORD*)(v12 + 1760) = v14 & 0xFFFFFFDF;
  v30_.v31 = v30_.v30;
  v35_.v37 = &v35_.v35;
  v35_.v38 = 1;
  if (v15 >= *(_QWORD*)(v12 + 1320)) {
    v17 = HubEventNatives_d5bb40((__int64*)(v12 + 1304), (__int64)&v35_.v35),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *(_BYTE*)v15 = 0;
    *(_DWORD*)(v15 + 48) = -1;
    v16 = v35_.v38;
    if (v35_.v38 != -1) {
      v39 = v15;
      ((void (*)(unsigned __int64*, __int64 (***)(void)))
           HandlePtr_Unknown23_d5be90_ptr[v35_.v38])(&v39, &v35_.v35),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_DWORD*)(v15 + 48) = v16;
    }
    v17 = v15 + 64;
  }
  v21 = v35_.v38;
  *(_QWORD*)(v12 + 1312) = v17;
  if ((_DWORD)v21 != -1) {
    ((void (*)(unsigned __int64*, __int64 (***)(void)))GameData_1fdce28[v21])(
        &v39, &v35_.v35),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v30_.v31 == v30_.v30) {
    v22 = 32;
    goto LABEL_46;
  }
  if (v30_.v31 != nullptr) {
    v22 = 40;
  LABEL_46:
    (*(void (**)(_QWORD*, __int64))(*v30_.v31 + v22))(v30_.v31, v11),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v30_.v30[0] = GameData_1fd4260;
  v30_.v30[1] = a1;
  v35_.v35 = GameData_1fd4260;
  v35_.v36 = a1;
  v23 = *(_QWORD*)(v12 + 1336);
  v30_.v31 = v30_.v30;
  v35_.v38 = 1;
  v24 = *(_QWORD*)(v12 + 1344);
  v35_.v37 = &v35_.v35;
  if (v23 >= v24) {
    v26 = HubEventNatives_d5bb40((__int64*)(v12 + 1328), (__int64)&v35_.v35),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *(_BYTE*)v23 = 0;
    *(_DWORD*)(v23 + 48) = -1;
    v25 = v35_.v38;
    if (v35_.v38 != -1) {
      v39 = v23;
      ((void (*)(unsigned __int64*, __int64 (***)(void)))
           HandlePtr_Unknown23_d5be90_ptr[v35_.v38])(&v39, &v35_.v35),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_DWORD*)(v23 + 48) = v25;
    }
    v26 = v23 + 64;
  }
  v27 = v35_.v38;
  *(_QWORD*)(v12 + 1336) = v26;
  if ((_DWORD)v27 != -1) {
    ((void (*)(unsigned __int64*, __int64 (***)(void)))GameData_1fdce28[v27])(
        &v39, &v35_.v35),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = (__int64)v30_.v31;
  if (v30_.v31 == v30_.v30) {
    v28 = 32;
  }
  else {
    if (v30_.v31 == nullptr) {
      goto LABEL_59;
    }
    v28 = 40;
  }
  result = (*(__int64 (**)(_QWORD*, __int64))(*v30_.v31 + v28))(v30_.v31, v11),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_59:
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = v13;
  LABEL_61:
    result = std___1___shared_weak_count___release_weak(result),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_62:
  if ((v32_.v32[0] & 1) != 0 && v32_.v34 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
  return result;
}

__int64 Character_cafa30(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t v8;
  char v9;
  __int64 v10;
  float32x4_t v12;
  float32x4_t v13;
  _BYTE v14[96];

  v3 = a2[1];
  if (v3 == 0 || *(_QWORD*)(v3 + 8) == -1) {
    goto LABEL_8;
  }
  v5 = std___1___shared_weak_count_lock(v3);
  v6 = COERCE_AS(float32x4_t, GameData_1a831c0);
  v12 = vaddq_f32(
      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*a2 + 24LL) + 16LL) + 560LL),
      COERCE_AS(float32x4_t, GameData_1a831c0));
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v10 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v10);
    v6 = COERCE_AS(float32x4_t, GameData_1a831c0);
    if ((*(_BYTE*)(a1 + 186) & 0x40) == 0) {
      goto LABEL_5;
    }
  LABEL_10:
    v9 = 1;
    return v9 & 1;
  }
  if ((*(_BYTE*)(a1 + 186) & 0x40) != 0) {
    goto LABEL_10;
  }
LABEL_5:
  v13 = vaddq_f32(
      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) + 560LL), v6);
  v7 = vsubq_f32(v13, v12);
  LANES128(v7).n128_u32[1] =
      vmuls_lane_f32(0x1.0000000000000p+2f,
                     COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]), 1);
  v8 = vmulq_f32(v7, v7);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
              .n64_f32[0] >= 0x1.9000000000000p+12f ||
      *(_DWORD*)(a1 + 1296) != (unsigned int)GameRoutine_f71d40(
                                   *GameData_212ebb0[0], (__int64)&v12,
                                   *(_QWORD*)GameData_212dbb8[0] + 64LL)) {
  LABEL_8:
    v9 = 0;
    return v9 & 1;
  }
  collision_670c60((void*)((__int64)v14), &v13, &v12, 0x1000000000001LL);
  v9 = v14[80] ^ 1;
  return v9 & 1;
}

__int64 Character_cafb80(__int64 result)
{
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  int v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  struct {
    _BYTE v8[8];
    unsigned __int64 v9;
    __int64 v10;
  } v8_;

  if ((*(_BYTE*)(result + 186) & 0x20) == 0) {
    v1 = result;
    result = X8CALL_X0(unsigned __int64,
                       Character_caf150((void*)((__int64)v8_.v8), result));
    v2 = v8_.v8[0];
    v3 = v8_.v9;
    if ((v8_.v8[0] & 1) == 0) {
      v3 = (unsigned __int64)v8_.v8[0] >> 1;
    }
    if (v3 != 0) {
      v4 = *(_DWORD*)(v1 + 184);
      *(_DWORD*)(v1 + 184) = v4 | 0x200000;
      if ((v4 | 0x200000) != v4) {
        HubCharacterNatives_ceca80(*(_QWORD**)(v1 + 24), 512, (v4 & 0x40) != 0);
        if (*(_QWORD*)(v1 + 760) != 0) {
          v5 = false;
        }
        else {
          v6 = *(_QWORD*)(v1 + 112);
          v5 = v6 == 0 || *(_QWORD*)(v6 + 8) == -1;
          if (*(_DWORD*)(v1 + 1112) != 0) {
            v5 = false;
          }
        }
        HubCharacterNatives_ceca80(*(_QWORD**)(v1 + 24), 32,
                                   v5 ||
                                       (*(_DWORD*)(v1 + 184) & 0x400000) != 0);
        result =
            HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 8LL),
                                       (*(_DWORD*)(v1 + 184) & 0x400020) == 0);
      }
    }
    if ((v2 & 1) != 0 && v8_.v10 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  return result;
}

__attribute__((swiftcall)) void Character_cafca0(PSEUDO_X8 x8_,
                                                 unsigned __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  long double v5;
  int v6;
  unsigned __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  long double v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  long double v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[2];
  char* v24;
  __int64 v25;
  int v26;
  unsigned __int8 v27;
  _BYTE v28[15];
  _BYTE* v29;
  _QWORD v30[2];
  int v31;
  _BYTE v32[200];

  result =
      X8CALL_X0(unsigned __int64, Character_caf150((void*)((__int64)&v27), a1));
  v6 = v27 & 1;
  v7 = (unsigned __int64)v27 >> 1;
  if (v6 != 0) {
    v7 = *(_QWORD*)&v28[7];
  }
  if (v7 == 0) {
    *(_QWORD*)a2 = 0;
    *(_DWORD*)(a2 + 8) = 0x2000;
    if (v6 == 0) {
      result;
      return;
    }
    goto LABEL_38;
  }
  if (v6 != 0) {
    v8 = v29;
  }
  else {
    v8 = v28;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v9);
  }
  v11 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v23[1] = v11;
    v24 = v12;
    v23[0] = v13 | 1;
    goto LABEL_17;
  }
  LOBYTE(v23[0]) = 2 * v9;
  v12 = (char*)v23 + 1;
  if (v9 != 0) {
  LABEL_17:
    memmove(v12, v8, v11);
  }
  v12[v11] = 0;
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL);
    if ((v23[0] & 1) != 0) {
      v15 = v24;
    }
    else {
      v15 = (char*)v23 + 1;
    }
    v16 = *(long double*)(v14 + 560);
    v30[1] = *(_QWORD*)(v14 + 560);
    v31 = DWORD2(v16);
    *(_QWORD*)&v16 = 0;
    v30[0] = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830(v32, v16);
    snd_playAt_ff5f0((void*)(&v25), v15, v15, v30, v32, 0, 65537, 0, 0.0, 1.0);
    *(__n128*)&v10 = snd_Fade_Destroy_Fade(v32);
    if ((v23[0] & 1) == 0) {
      goto LABEL_29;
    }
  }
  else {
    v25 = 0;
    v26 = 0x2000;
    if ((v23[0] & 1) == 0) {
      goto LABEL_29;
    }
  }
  if (v24 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v10);
  }
LABEL_29:
  result = snd_fnd_WeakHandle_isValid(&v25);
  if ((result & 1) != 0) {
    Character_cafb80_alt1(a1);
    v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL) + 352LL);
    v19 = *(_QWORD*)(v18 + 8);
    if (*(_BYTE*)(v19 + 145) == 1) {
      v20 = *(_QWORD*)(v19 + 232);
      if (v20 != 0) {
        v21 = *(_QWORD*)(v20 + 88);
        if (v21 != 0) {
          *(_BYTE*)(v18 + 56) = 0;
          if (*(_DWORD*)(v21 + 96) <= 1u) {
            GameRoutine_112180(v21 + 320, &v25);
            GameRoutine_a19f00(v21 + 272, v21 + 320);
          }
        }
      }
    }
    *(_QWORD*)a2 = 0;
    *(_DWORD*)(a2 + 8) = 0x2000;
    result = GameRoutine_112180(a2, &v25);
  }
  else {
    *(_QWORD*)a2 = 0;
    *(_DWORD*)(a2 + 8) = 0x2000;
  }
  if ((v27 & 1) != 0) {
  LABEL_38:
    if (v29 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      {
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v5);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Character_caff60(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  long double v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  result = *(_QWORD*)(a1 + 200);
  if (result == 0) {
    goto LABEL_18;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_18;
  }
  v6 = *(_QWORD**)(a1 + 192);
  if (v6 == nullptr) {
    goto LABEL_15;
  }
  if ((v6[32] & 1) != 0) {
    v10 = result;
    fw_text_String_CopyTerminated_alt1(a2, v6[34], v6[33]);
    result = v10;
  }
  else {
    v7 = v6[32];
    v8 = v6[33];
    v9 = v6[34];
    a2[1] = v8;
    a2[2] = v9;
    *a2 = v7;
  }
  v11 = *(unsigned __int8*)a2;
  v12 = a2[1];
  if ((v11 & 1) == 0) {
    v12 = v11 >> 1;
  }
  v13 = v12 != 0;
  if ((v11 & 1) != 0 && v12 == 0) {
    if (a2[2] != 0) {
      v14 = result;
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v5);
      result = v14;
    }
  LABEL_15:
    v13 = false;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13) {
      result;
      return;
    }
  }
  else {
    v16 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v16);
    if (v13) {
      result;
      return;
    }
  }
LABEL_18:
  *(_WORD*)a2 = 0;
  {
    result;
    return;
  }
}

unsigned __int8* Character_cb01a0(unsigned __int8* result, unsigned __int8* a2,
                                  __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8* v7;
  unsigned __int64 v8;
  signed __int64 v9;
  __int64 v12;
  unsigned __int8* v13;
  unsigned int v14;
  unsigned __int8* v15;
  unsigned __int64 v16;
  bool v17;

  v7 = result;
  if (a3 == 0) {
    while (1) {
      GameRoutine_1a0a8e0(v7, 0, 0, a4, a5);
    }
  }
  v8 = *result;
  v9 = *((_QWORD*)result + 1);
  if ((v8 & 1) == 0) {
    v9 = v8 >> 1;
  }
  if (v9 >= a3) {
    if ((v8 & 1) != 0) {
      v12 = *((_QWORD*)result + 2);
    }
    else {
      v12 = (__int64)(result + 1);
    }
    v13 = (unsigned __int8*)(v12 + v9);
  LABEL_11:
    v14 = *a2;
    result = (unsigned __int8*)v12;
    do {
      result = (unsigned __int8*)memchr(result, v14, v9 - a3 + 1);
      if (result == nullptr) {
        break;
      }
      v15 = result;
      result = (unsigned __int8*)memcmp(result, a2, a3);
      if ((_DWORD)result == 0) {
        if (v15 != v13 && &v15[-v12] != (unsigned __int8*)-1LL) {
          result =
              (unsigned __int8*)GameRoutine_1a0a8e0(v7, &v15[-v12], a3, a4, a5);
          v16 = *v7;
          v17 = (v16 & 1) == 0;
          v9 = v16 >> 1;
          v12 = v17 ? (__int64)(v7 + 1) : *((_QWORD*)v7 + 2);
          if (!v17) {
            v9 = *((_QWORD*)v7 + 1);
          }
          v13 = (unsigned __int8*)(v12 + v9);
          if (v9 >= a3) {
            goto LABEL_11;
          }
        }
        return result;
      }
      result = v15 + 1;
      v9 = v13 - (v15 + 1);
    } while (v9 >= a3);
  }
  return result;
}

__int64 Character_cb0480(__int64 a1, __int64 a2)
{
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
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
  int v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int* v38;
  int v39;
  int v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  char v46;
  __int64 v47;
  char v48;
  int v49;
  int v50;
  __int64 v51;
  char v52;
  char v53;
  __int64 v54;
  __int64 v55;
  int* v56;
  __int64 v57;
  int v58;
  char v59;
  __int64 v60;
  char v61;
  int v62;
  int v63;
  __int64 v64;
  char v65;
  char v66;
  int* v67;
  __int64 v68;
  int v69;
  char v70;
  __int64 v71;
  char v72;
  int v73;
  int v74;
  __int64 v75;
  char v76;
  char v77;
  __int64 v78;
  int* v79;
  char* v80;
  __int64* v81;
  int v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64* v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v98;
  unsigned __int64 v99;
  _QWORD* v100;
  _QWORD* v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 i;
  __int64 v106;
  __int64 v107;
  int v108;
  _QWORD* v109;
  __int64 v110;
  __int64* v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64 v116;
  int v117;
  struct {
    __int64 v118;
    __int64 v119;
  } v118_;
  struct {
    __int64* v120;
    _QWORD* v121;
    __int64 v122;
    __int64 v123;
    char* v124;
    char* v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
  } v120_;

  v4 = (int*)GameData_21d9d18;
  v5 = GameData_21d9d20;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v6 = *v4++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v6) = 0;
    } while (v4 != (int*)v5);
    v4 = (int*)GameData_21d9d18;
  }
  v7 = *(_DWORD*)(a1 + 184);
  GameData_21d9d20 = (__int64)v4;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  v8 = GameData_212dbb8[0];
  if (*(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 200LL) == 0) {
    goto LABEL_56;
  }
  v9 = *(_QWORD*)(a1 + 800);
  if (v9 != 0) {
    if ((*(_WORD*)(v9 + 56) & 2) != 0) {
      v10 = 2;
    }
    else {
      v10 = 1;
    }
  }
  else {
    v20 = *(_QWORD*)(a1 + 760);
    v21 = *(_QWORD*)(a1 + 768);
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v20 != 0 && *(_BYTE*)(v20 + 224) == 1 && *(_DWORD*)(v20 + 144) == 31) {
      v10 = 3;
    }
    else {
      v10 = 0;
    }
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak(v21);
    }
  }
  v11 = GameData_212c770[0];
  if ((*(_BYTE*)(a1 + 184) & 4) != 0 || (unsigned int)(v10 - 1) < 2) {
    v12 = *(_QWORD*)(a1 + 16);
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_DWORD*)(game_GameModeData_instance_ + 68);
      v14 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v14 != 0) {
        v13 += *(char*)(v14 + 128);
      }
      v15 = *(unsigned __int8*)(v12 + 442);
      if (*(_BYTE*)(v12 + 442) != 0) {
      LABEL_15:
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v16 = DungeonController_f5ec20();
          v12 = *(_QWORD*)(a1 + 16);
          if ((v16 & 0x100000000LL) != 0) {
            v15 = *(unsigned __int8*)(v12 + 442);
            if (*(_BYTE*)(v12 + 442) == 0) {
              v15 = v16;
              if (*(_BYTE*)(v12 + 443) != 0) {
                v17 = *(char*)(v12 + 443) + (_DWORD)v16;
                if (v17 <= 1) {
                  v17 = 1;
                }
                if (v17 >= 99) {
                  v15 = 99;
                }
                else {
                  v15 = v17;
                }
              }
            }
          }
        }
        if (*(_QWORD*)(v12 + 304) == 0 ||
            (v120_.v120 = *(__int64**)(v12 + 304),
             (v18 = game_GrowthListFile_GetJob((__int64*)&v120_.v120, v15,
                                               6)) == 0)) {
          if (*(_QWORD*)(v12 + 64) != 0) {
            v18 = *(_QWORD*)(v12 + 64);
          }
          else {
            v18 = GameData_21c9988;
          }
        }
        v19 = GameRoutine_67f360(*(_QWORD*)(a1 + 16));
        if (*(_QWORD*)(*(_QWORD*)(v18 + 24) + 1112LL) != 0 &&
            *(_QWORD*)(v18 + 88) != 0) {
          v18 = *(_QWORD*)(*(_QWORD*)(v18 + 24) + 1112LL);
        }
        ConditionMap_7ea800(v18);
        game_anonymous_ConditionMap_Add_7ebae0(*v11);
        if ((v7 & 0x200) == 0 && v19 != 0) {
          goto LABEL_34;
        }
        goto LABEL_56;
      }
    }
    else {
      v13 = 0;
      v15 = *(unsigned __int8*)(v12 + 442);
      if (*(_BYTE*)(v12 + 442) != 0) {
        goto LABEL_15;
      }
    }
    v22 = v13 + *(char*)(v12 + 443);
    if (v22 <= 1) {
      v22 = 1;
    }
    if (v22 >= 99) {
      v22 = 99;
    }
    if (*(_BYTE*)(v12 + 443) != 0) {
      v15 = v22;
    }
    else {
      v15 = v13;
    }
    goto LABEL_15;
  }
  if (v10 != 0 && (v7 & 0x200) == 0) {
    v19 = GameRoutine_67f200(*(_QWORD*)(a1 + 16));
    if (v19 != 0) {
    LABEL_34:
      ConditionMap_7ec000(v19);
      game_anonymous_ConditionMap_Add_7ebae0(*v11);
    }
  }
LABEL_56:
  v23 = *(_QWORD*)(a1 + 16);
  if ((*(_BYTE*)(a1 + 1027) & 1) == 0 && v23 != 0 &&
      (v24 = *(_QWORD*)(GameData_21ca310 + 56)) != 0) {
    v25 = 250;
    while (1) {
      v26 = *(_QWORD*)(v24 + 440);
      if (v26 != 0 && *(_BYTE*)(v26 + 16) != 9 &&
          *(_QWORD*)(v24 + 392) == v23) {
        goto LABEL_186;
      }
      v27 = *(_QWORD*)(v24 + 2664);
      if (v27 != 0 && *(_BYTE*)(v27 + 16) != 9 &&
          *(_QWORD*)(v24 + 2616) == v23) {
        v24 += 2224;
        if ((v7 & 0x200) == 0) {
          goto LABEL_187;
        }
        goto LABEL_179;
      }
      v28 = *(_QWORD*)(v24 + 4888);
      if (v28 != 0 && *(_BYTE*)(v28 + 16) != 9 &&
          *(_QWORD*)(v24 + 4840) == v23) {
        break;
      }
      v29 = *(_QWORD*)(v24 + 7112);
      if (v29 != 0 && *(_BYTE*)(v29 + 16) != 9 &&
          *(_QWORD*)(v24 + 7064) == v23) {
        v24 += 6672;
        if ((v7 & 0x200) == 0) {
          goto LABEL_187;
        }
        goto LABEL_179;
      }
      v30 = *(_QWORD*)(v24 + 9336);
      if (v30 != 0 && *(_BYTE*)(v30 + 16) != 9 &&
          *(_QWORD*)(v24 + 9288) == v23) {
        v24 += 8896;
        if ((v7 & 0x200) == 0) {
          goto LABEL_187;
        }
        goto LABEL_179;
      }
      v24 += 11120;
      v25 -= 5;
      if (v25 == 0) {
        goto LABEL_78;
      }
    }
    v24 += 4448;
  LABEL_186:
    if ((v7 & 0x200) == 0) {
    LABEL_187:
      AssetTableFile_7e7620(a2, v24);
      goto LABEL_81;
    }
  LABEL_179:
    v112 = GameData_212ddb8[0] + 2;
    v113 = *(_QWORD*)(v24 + 2208);
    v120_.v120 = GameData_212ddb8[0] + 2;
    v120_.v121 = (_QWORD*)v24;
    v120_.v122 = 0;
    v120_.v123 = v113;
    *(_QWORD*)(v24 + 2208) = &v120_.v120;
    v114 = *(_DWORD*)(v24 + 416);
    if ((v114 & 0x10000000) == 0) {
      v115 = v24;
      *(_DWORD*)(v24 + 416) = v114 | 0x10000000;
      game_6c51e0(v24);
      GameRoutine_6c6da0(v115);
      game_6c6ec0(v115);
      v24 = v115;
      *(_DWORD*)(v115 + 416) &= ~0x10000000u;
    }
    AssetTableFile_7e7620(a2, v24);
    v116 = (__int64)v120_.v121;
    v120_.v120 = v112;
    if (v120_.v121 != nullptr && (__int64**)v120_.v121[276] == &v120_.v120) {
      v120_.v121[276] = v120_.v123;
      v117 = *(_DWORD*)(v116 + 416);
      if ((v117 & 0x10000000) == 0) {
        *(_DWORD*)(v116 + 416) = v117 | 0x10000000;
        game_6c51e0(v116);
        GameRoutine_6c6da0(v116);
        game_6c6ec0(v116);
        *(_DWORD*)(v116 + 416) &= ~0x10000000u;
      }
    }
  }
  else {
  LABEL_78:
    v31 = 264;
    if (*(_BYTE*)(a1 + 1128) != 0) {
      v31 = 1124;
    }
    AssetTableFile_7e95e0(a2, *(_QWORD*)(a1 + 16), *(_DWORD*)(a1 + v31));
  }
LABEL_81:
  v32 = *(_QWORD*)(a1 + 16);
  LODWORD(v120_.v123) = 0;
  v120_.v121 = nullptr;
  v120_.v122 = 0;
  v33 = *(unsigned __int8*)(v32 + 440);
  v120_.v120 = nullptr;
  v120_.v124 = nullptr;
  v120_.v125 = nullptr;
  v120_.v126 = 0;
  v120_.v127 = 0;
  v120_.v128 = 0;
  v120_.v129 = 0;
  v120_.v130 = 0;
  v120_.v131 = 0;
  if (v33 > 2) {
    if (v33 == 3) {
      LODWORD(v118_.v118) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x104LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
      if ((UnitSkillList_84cc00((__int64*)&v120_.v120, &v118_.v118, 1) & 1) ==
          0) {
        goto LABEL_117;
      }
      v34 = v120_.v124;
      v120_.v130 = 0;
      v120_.v131 = 0;
      if ((int)((unsigned __int64)(v120_.v125 - v120_.v124) >> 2) < 1) {
        goto LABEL_117;
      }
      v55 = (int)((v120_.v125 - v120_.v124) >> 2);
      if (v55 <= 1) {
        v36 = 1;
      }
      else {
        v36 = (int)((v120_.v125 - v120_.v124) >> 2);
      }
      v37 = *GameData_212c880[0];
      if (v55 >= 2) {
        v67 = (int*)(v120_.v124 + 4);
        v39 = 0;
        v40 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        do {
          v43 += 2;
          v68 = *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8LL * (*(v67 - 1) & 0xFFF));
          v69 = v42 | (1 << *(_BYTE*)(v68 + 104));
          v70 = *(_BYTE*)(v68 + 250);
          LOWORD(v120_.v130) = v69;
          v71 = (1LL << v70) | v41;
          v72 = *(_BYTE*)(v68 + 115);
          v120_.v131 = v71;
          HIDWORD(v120_.v130) = (1 << v72) | v40;
          v73 = *(unsigned __int16*)(*(_QWORD*)(v68 + 24) + 1064LL) | v39;
          WORD1(v120_.v130) = v73;
          v74 = *v67;
          v67 += 2;
          v75 = *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8LL * (v74 & 0xFFF));
          v42 = v69 | (1 << *(_BYTE*)(v75 + 104));
          v76 = *(_BYTE*)(v75 + 250);
          LOWORD(v120_.v130) = v42;
          v41 = (1LL << v76) | v71;
          v77 = *(_BYTE*)(v75 + 115);
          v120_.v131 = v41;
          v40 = (1 << v77) | HIDWORD(v120_.v130);
          HIDWORD(v120_.v130) = v40;
          v39 = *(unsigned __int16*)(*(_QWORD*)(v75 + 24) + 1064LL) | v73;
          WORD1(v120_.v130) = v39;
        } while ((v36 & 0x7FFFFFFFFFFFFFFELL) != v43);
      }
      else {
        LOWORD(v39) = 0;
        v40 = 0;
        v41 = 0;
        LOWORD(v42) = 0;
        v43 = 0;
      }
      goto LABEL_115;
    }
    if (v33 != 6) {
      goto LABEL_117;
    }
  LABEL_95:
    LODWORD(v118_.v118) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xFCLL) +
                                     game_g_shared_system_skills_ptr) &
                          0xFFF;
    if ((UnitSkillList_84cc00((__int64*)&v120_.v120, &v118_.v118, 1) & 1) ==
        0) {
      goto LABEL_117;
    }
    v34 = v120_.v124;
    v120_.v130 = 0;
    v120_.v131 = 0;
    if ((int)((unsigned __int64)(v120_.v125 - v120_.v124) >> 2) < 1) {
      goto LABEL_117;
    }
    v54 = (int)((v120_.v125 - v120_.v124) >> 2);
    if (v54 <= 1) {
      v36 = 1;
    }
    else {
      v36 = (int)((v120_.v125 - v120_.v124) >> 2);
    }
    v37 = *GameData_212c880[0];
    if (v54 < 2) {
      goto LABEL_101;
    }
    v56 = (int*)(v120_.v124 + 4);
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    do {
      v43 += 2;
      v57 = *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8LL * (*(v56 - 1) & 0xFFF));
      v58 = v42 | (1 << *(_BYTE*)(v57 + 104));
      v59 = *(_BYTE*)(v57 + 250);
      LOWORD(v120_.v130) = v58;
      v60 = (1LL << v59) | v41;
      v61 = *(_BYTE*)(v57 + 115);
      v120_.v131 = v60;
      HIDWORD(v120_.v130) = (1 << v61) | v40;
      v62 = *(unsigned __int16*)(*(_QWORD*)(v57 + 24) + 1064LL) | v39;
      WORD1(v120_.v130) = v62;
      v63 = *v56;
      v56 += 2;
      v64 = *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8LL * (v63 & 0xFFF));
      v42 = v58 | (1 << *(_BYTE*)(v64 + 104));
      v65 = *(_BYTE*)(v64 + 250);
      LOWORD(v120_.v130) = v42;
      v41 = (1LL << v65) | v60;
      v66 = *(_BYTE*)(v64 + 115);
      v120_.v131 = v41;
      v40 = (1 << v66) | HIDWORD(v120_.v130);
      HIDWORD(v120_.v130) = v40;
      v39 = *(unsigned __int16*)(*(_QWORD*)(v64 + 24) + 1064LL) | v62;
      WORD1(v120_.v130) = v39;
    } while ((v36 & 0x7FFFFFFFFFFFFFFELL) != v43);
  LABEL_115:
    if ((v36 & 1) == 0) {
      goto LABEL_117;
    }
    goto LABEL_116;
  }
  if (v33 == 1) {
    goto LABEL_95;
  }
  if (v33 != 2) {
    goto LABEL_117;
  }
  LODWORD(v118_.v118) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xFCLL) +
                                   game_g_shared_system_skills_ptr + 4) &
                        0xFFF;
  if ((UnitSkillList_84cc00((__int64*)&v120_.v120, &v118_.v118, 1) & 1) == 0) {
    goto LABEL_117;
  }
  v34 = v120_.v124;
  v120_.v130 = 0;
  v120_.v131 = 0;
  if ((int)((unsigned __int64)(v120_.v125 - v120_.v124) >> 2) < 1) {
    goto LABEL_117;
  }
  v35 = (int)((v120_.v125 - v120_.v124) >> 2);
  if (v35 <= 1) {
    v36 = 1;
  }
  else {
    v36 = (int)((v120_.v125 - v120_.v124) >> 2);
  }
  v37 = *GameData_212c880[0];
  if (v35 >= 2) {
    v38 = (int*)(v120_.v124 + 4);
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    do {
      v43 += 2;
      v44 = *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8LL * (*(v38 - 1) & 0xFFF));
      v45 = v42 | (1 << *(_BYTE*)(v44 + 104));
      v46 = *(_BYTE*)(v44 + 250);
      LOWORD(v120_.v130) = v45;
      v47 = (1LL << v46) | v41;
      v48 = *(_BYTE*)(v44 + 115);
      v120_.v131 = v47;
      HIDWORD(v120_.v130) = (1 << v48) | v40;
      v49 = *(unsigned __int16*)(*(_QWORD*)(v44 + 24) + 1064LL) | v39;
      WORD1(v120_.v130) = v49;
      v50 = *v38;
      v38 += 2;
      v51 = *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8LL * (v50 & 0xFFF));
      v42 = v45 | (1 << *(_BYTE*)(v51 + 104));
      v52 = *(_BYTE*)(v51 + 250);
      LOWORD(v120_.v130) = v42;
      v41 = (1LL << v52) | v47;
      v53 = *(_BYTE*)(v51 + 115);
      v120_.v131 = v41;
      v40 = (1 << v53) | HIDWORD(v120_.v130);
      HIDWORD(v120_.v130) = v40;
      v39 = *(unsigned __int16*)(*(_QWORD*)(v51 + 24) + 1064LL) | v49;
      WORD1(v120_.v130) = v39;
    } while ((v36 & 0x7FFFFFFFFFFFFFFELL) != v43);
    goto LABEL_115;
  }
LABEL_101:
  LOWORD(v39) = 0;
  v40 = 0;
  v41 = 0;
  LOWORD(v42) = 0;
  v43 = 0;
  if ((v36 & 1) != 0) {
  LABEL_116:
    v78 = *(_QWORD*)(*(_QWORD*)(v37 + 64) +
                     8LL * (*(_DWORD*)&v34[4 * v43] & 0xFFF));
    LOWORD(v120_.v130) = v42 | (1 << *(_BYTE*)(v78 + 104));
    v120_.v131 = (1LL << *(_BYTE*)(v78 + 250)) | v41;
    HIDWORD(v120_.v130) = (1 << *(_BYTE*)(v78 + 115)) | v40;
    WORD1(v120_.v130) = *(_WORD*)(*(_QWORD*)(v78 + 24) + 1064LL) | v39;
  }
LABEL_117:
  v79 = (int*)v120_.v124;
  v80 = v120_.v125;
  if (v120_.v124 != v120_.v125) {
    v81 = GameData_212c880[0];
    do {
      v82 = *v79++;
      v118_.v119 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v81 + 64) + 8LL * (v82 & 0xFFF)) +
                     8LL);
      v118_.v118 = game_HashString(v118_.v119);
      AssetTableFile_7e7b20(a2, (unsigned __int64*)&v118_.v118);
    } while (v79 != (int*)v80);
  }
  v83 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v120_.v127 != 0) {
    v84 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v120_.v128 = v120_.v127;
    v85 = 128;
    if (*(_QWORD*)(v84 + 200) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free(v84 + v85);
  }
  if (v120_.v124 != nullptr) {
    v86 = *v83;
    v120_.v125 = v120_.v124;
    v87 = 128;
    if (*(_QWORD*)(v86 + 200) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free(v86 + v87);
  }
  if (v120_.v120 != nullptr) {
    v88 = *v83;
    v120_.v121 = v120_.v120;
    v89 = 128;
    if (*(_QWORD*)(v88 + 200) == 0) {
      v89 = 56;
    }
    nn_mem_StandardAllocator_Free(v88 + v89);
  }
  if ((v7 & 0x200) == 0) {
    v91 = *(_QWORD*)(a1 + 344);
    v90 = *(_QWORD*)(a1 + 352);
    if (v90 != v91) {
      v92 = GameData_212c878[0];
      v93 = GameData_212c770[0];
      do {
        if ((*(_BYTE*)v91 & 1) != 0) {
          v94 = *(_QWORD*)(v91 + 16);
        }
        else {
          v94 = v91 + 1;
        }
        v95 = game_HashString(v94);
        if (v95 != 0) {
          v96 = *(_QWORD*)(*v92 + 96);
          if (v96 != 0 && *(_QWORD*)(*v92 + 112) != 0) {
            v98 = v96 - 1;
            if ((v96 & (v96 - 1)) != 0) {
              v99 = v95;
              if (v95 >= v96) {
                v99 = v95 % v96;
              }
            }
            else {
              v99 = v98 & v95;
            }
            v100 = *(_QWORD**)(*(_QWORD*)(*v92 + 88) + 8 * v99);
            if (v100 != nullptr) {
              v101 = (_QWORD*)*v100;
              if (v101 != nullptr) {
                if ((v96 & v98) == 0) {
                  while (1) {
                    v103 = v101[1];
                    if (v103 == v95) {
                      if (v101[2] == v95) {
                        goto LABEL_164;
                      }
                    }
                    else if ((v103 & v98) != v99) {
                      goto LABEL_135;
                    }
                    v101 = (_QWORD*)*v101;
                    if (v101 == nullptr) {
                      goto LABEL_135;
                    }
                  }
                }
                do {
                  v102 = v101[1];
                  if (v102 == v95) {
                    if (v101[2] == v95) {
                    LABEL_164:
                      v104 = v101[3];
                      if (v104 != 0) {
                        ConditionMap_7ec000(v104);
                        game_anonymous_ConditionMap_Add_7ebae0(*v93);
                      }
                      break;
                    }
                  }
                  else {
                    if (v102 >= v96) {
                      v102 %= v96;
                    }
                    if (v102 != v99) {
                      break;
                    }
                  }
                  v101 = (_QWORD*)*v101;
                } while (v101 != nullptr);
              }
            }
          }
        }
      LABEL_135:
        v91 += 24;
      } while (v91 != v90);
    }
  }
  v106 = *(_QWORD*)(a1 + 368);
  for (i = *(_QWORD*)(a1 + 376); v106 != i; v106 += 24) {
    if ((*(_BYTE*)v106 & 1) != 0) {
      v107 = *(_QWORD*)(v106 + 16);
    }
    else {
      v107 = v106 + 1;
    }
    v120_.v121 = (_QWORD*)v107;
    v120_.v120 = (__int64*)game_HashString(v107);
    AssetTableFile_7e7b20(a2, (unsigned __int64*)&v120_.v120);
  }
  v108 = *(_DWORD*)(*(_QWORD*)v8 + 136LL);
  if (v108 == 1) {
    v120_.v120 = (__int64*)0xAE37DD7FEE4EF525LL;
    v120_.v121 = &GameData_1a8dc68;
    AssetTableFile_7e7b20(a2, (unsigned __int64*)&v120_.v120);
    if (*(_BYTE*)(a1 + 1116) == 1) {
      v109 = &GameData_1a9d43c;
      v110 = 0x60BB3E9EE207C13DLL;
      goto LABEL_176;
    }
  }
  else if (v108 == 0) {
    v109 = &GameData_1ae9559;
    v110 = 0x549472E30580362CLL;
  LABEL_176:
    v120_.v120 = (__int64*)v110;
    v120_.v121 = v109;
    AssetTableFile_7e7b20(a2, (unsigned __int64*)&v120_.v120);
  }
  return AssetTableFile_7e8000(a2);
}

__int64 game_hub_Character_RebuildAppearance(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;

  if ((*(_BYTE*)(a1 + 1027) & 1) == 0) {
    v2 = *(_QWORD*)(a1 + 16);
    if (v2 != 0) {
      v3 = *(_QWORD**)(GameData_21ca310 + 56);
      if (v3 != nullptr) {
        v4 = 250;
        while (1) {
          v5 = v3[55];
          if (v5 != 0 && *(_BYTE*)(v5 + 16) != 9 && v3[49] == v2) {
            break;
          }
          v6 = v3[333];
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v3[327] == v2) {
            v3 += 278;
            break;
          }
          v7 = v3[611];
          if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v3[605] == v2) {
            v10 = 4448;
            goto LABEL_25;
          }
          v8 = v3[889];
          if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v3[883] == v2) {
            v10 = 6672;
            goto LABEL_25;
          }
          v9 = v3[1167];
          if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v3[1161] == v2) {
            v10 = 8896;
          LABEL_25:
            v3 = (_QWORD*)((char*)v3 + v10);
            break;
          }
          v3 += 1390;
          v4 -= 5;
          if (v4 == 0) {
            goto LABEL_27;
          }
        }
        Unit_6cb490(v3);
      }
    }
  }
LABEL_27:
  v11 = *(_QWORD*)(a1 + 24);
  v18[0] = GameData_1fd42e0;
  v18[1] = a1;
  v19 = v18;
  v21 = v20;
  v20[0] = GameData_1fd42e0;
  v20[1] = a1;
  GameRoutine_cefbb0(v20, v11 + 80);
  if (v21 == v20) {
    v12 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_32;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v21 + v12))((__int64)v21);
LABEL_32:
  v13 = GameRoutine_cedd40(v11);
  if (v19 == v18) {
    v14 = 32;
    goto LABEL_36;
  }
  if (v19 != nullptr) {
    v14 = 40;
  LABEL_36:
    (*(void (**)(__int64))(*v19 + v14))((__int64)v19);
  }
  if ((v13 & 1) != 0 && *(_BYTE*)(a1 + 1060) == 1) {
    *(_BYTE*)(a1 + 1060) = 0;
    v15 = *(_QWORD*)(GameData_21f3d10 + 216);
    v16 = *(_DWORD*)(v15 + 232);
    if (v16 <= 1) {
      v16 = 1;
    }
    *(_DWORD*)(v15 + 232) = v16;
  }
  return v13 & 1;
}

__attribute__((swiftcall)) void Character_cb17a0(PSEUDO_X8 x8_, _QWORD* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v2;
  __int64* v3;
  __int64* v6;
  __int64* result;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;

  v2 = (__int64*)a1[146];
  v3 = (__int64*)a1[147];
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (v2 != v3) {
    v6 = nullptr;
    do {
      if ((unsigned __int64)v6 < a2[2]) {
        HubCharacterNatives_cb4210(v6, v2);
        v6 += 22;
      }
      else {
        v6 = HubCharacterNatives_cb40c0(a2, v2);
      }
      v2 += 22;
      a2[1] = (__int64)v6;
    } while (v2 != v3);
  }
  result = (__int64*)a1[14];
  if (result != nullptr) {
    result = (__int64*)std___1___shared_weak_count_lock(result);
    if (result != nullptr) {
      v8 = a1[13];
      v9 = result;
      if (v8 != 0) {
        v10 = *(__int64**)(v8 + 1424);
        v11 = *(__int64**)(v8 + 1432);
        if (v10 != v11) {
          v12 = (__int64*)a2[1];
          do {
            if ((unsigned __int64)v12 < a2[2]) {
              result = HubCharacterNatives_cb4210(v12, v10);
              v12 += 22;
            }
            else {
              result = HubCharacterNatives_cb40c0(a2, v10);
              v12 = result;
            }
            v10 += 22;
            a2[1] = (__int64)v12;
          } while (v10 != v11);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64*))(*v9 + 16))(v9);
        {
          (__int64*)std___1___shared_weak_count___release_weak(v9);
          return;
        }
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Character_cb1a30(PSEUDO_X8 x8_, __int64 a1,
                                                 unsigned int a2)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float v5;
  __int64 v6;
  float32x4_t* v7;
  float v8;
  unsigned __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  bool v19;
  float v20;
  float v21;
  float v22;
  float v23;
  unsigned int v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float32x4_t v30;
  float32x4_t v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float32x4_t v43;
  float v44;
  __int64* v45;
  __int64 v46;
  __int64* v47;
  __int64 result;
  float32x4_t v49;
  __int64 v50;
  __int64* v51;
  float32x4_t v52;
  __int64 v53;
  __int64* v54;
  float32x4_t v55;
  __int64 v56;
  __int64* v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int v61;

  if (a2 > 4) {
    v5 = 0x1.6800000000000p+7f;
  }
  else {
    v5 = GameData_1b82520[a2];
  }
  v6 = *(_QWORD*)(a1 + 24);
  v7 = *(float32x4_t**)(v6 + 16);
  v8 = *(float*)(v6 + 528);
  v9 = LANES128(v7[35]).n128_u64[1];
  LANES128(v60).n128_u64[0] = LANES128(v7[35]).n128_u64[0];
  LANES128(v60).n128_u64[1] = v9;
  v10 = *(float*)(LANES128(v7[30]).n128_u64[1] + 36) * 0x1.ca5dc20000000p+5f;
  v11 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v12 = (float)(PSEUDO_UNFUSED((float)(v5 + v10) * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)((float)(v5 + v10) * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v14 = *(float*)GameData_212c190;
  v13 = *((float*)GameData_212c190 + 1);
  v16 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  if (v12 >= -0x1.921fb60000000p+0f) {
    v17 = 0x1.0000000000000p+0f;
  }
  else {
    v17 = -0x1.0000000000000p+0f;
  }
  v18 = -0x1.921fb60000000p+1f - v12;
  if (v12 >= -0x1.921fb60000000p+0f) {
    v18 = v12;
  }
  v19 = v12 <= 0x1.921fb60000000p+0f;
  if (v12 <= 0x1.921fb60000000p+0f) {
    v20 = v18;
  }
  else {
    v20 = 0x1.921fb60000000p+1f - v12;
  }
  if (v19) {
    v21 = v17;
  }
  else {
    v21 = -0x1.0000000000000p+0f;
  }
  v22 = v20 * v20;
  v23 = v8 * 0x1.0000000000000p-1f;
  *(float*)&v24 =
      v20 *
      (float)((float)((float)-(
                          float)(v11 -
                                 (float)((float)(v15 +
                                                 (float)((float)-(
                                                             float)(v16 -
                                                                    (float)((float)(v13 -
                                                                                    (float)(v14 *
                                                                                            (float)(v20 *
                                                                                                    v20))) *
                                                                            (float)(v20 *
                                                                                    v20))) *
                                                         (float)(v20 * v20))) *
                                         (float)(v20 * v20))) *
                      (float)(v20 * v20)) +
              0x1.0000000000000p+0f);
  v26 = *(float*)GameData_212c188;
  v25 = *((float*)GameData_212c188 + 1);
  v28 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v27 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v29 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  LANES128(v30).n128_u64[0] = v24;
  LANES128(v30).n128_u64[1] = COERCE_UNSIGNED_INT(
      v21 *
      (float)((float)((float)-(
                          float)(v29 -
                                 (float)((float)(v27 +
                                                 (float)((float)-(
                                                             float)(v28 -
                                                                    (float)((float)(v25 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v22)) *
                                                                            v22)) *
                                                         v22)) *
                                         v22)) *
                      v22) +
              0x1.0000000000000p+0f));
  v31 = vaddq_f32(v60, vmulq_n_f32(v30, v23));
  v60 = v31;
  if (a2 > 4) {
    v32 = 0x1.6800000000000p+7f;
  }
  else {
    v32 = GameData_1b82520[a2];
  }
  v33 = -v11;
  v34 = -v26;
  v35 = -v28;
  v36 = *(float*)(v6 + 532);
  v37 = -v16;
  v38 = -v29;
  v39 = (float)(PSEUDO_UNFUSED((float)(v10 + v32) * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)((float)(v10 + v32) * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v39 <= 0x1.921fb60000000p+0f) {
    v41 = 0x1.0000000000000p+0f;
    if (v39 >= -0x1.921fb60000000p+0f) {
      goto LABEL_23;
    }
    v40 = -0x1.921fb60000000p+1f;
  }
  else {
    v40 = 0x1.921fb60000000p+1f;
  }
  v39 = v40 - v39;
  v41 = -0x1.0000000000000p+0f;
LABEL_23:
  v42 =
      v15 +
      (float)((float)(v37 + (float)((float)(v13 + (float)((float)-v14 *
                                                          (float)(v39 * v39))) *
                                    (float)(v39 * v39))) *
              (float)(v39 * v39));
  LANES128(v43).n128_u32[1] = 0;
  v44 = v38 +
        (float)((float)(v27 +
                        (float)((float)(v35 +
                                        (float)((float)(v25 +
                                                        (float)(v34 *
                                                                (float)(v39 *
                                                                        v39))) *
                                                (float)(v39 * v39))) *
                                (float)(v39 * v39))) *
                (float)(v39 * v39));
  LANES128(v43).n128_f32[0] =
      v39 * (float)((float)((float)(v33 + (float)(v42 * (float)(v39 * v39))) *
                            (float)(v39 * v39)) +
                    0x1.0000000000000p+0f);
  LANES128(v43).n128_u64[1] = COERCE_UNSIGNED_INT(
      v41 * (float)((float)(v44 * (float)(v39 * v39)) + 0x1.0000000000000p+0f));
  v58 = vaddq_f32(
      v7[35],
      vmulq_n_f32(v43, (float)((float)((float)(int)a2 * 0x1.99999a0000000p-2f) +
                               0x1.0000000000000p+0f) *
                           (float)(v36 + v36)));
  v59 = vaddq_f32(v31, vsubq_f32(v58, v31));
  v45 = GameData_212eba8[0];
  v46 = LANES128(*(v7)).n128_i64[1];
  v47 = *(__int64**)(*GameData_212eba8[0] + 72);
  v61 = 4;
  if ((GameRoutine_d242c0(v47, v46, (__int64)&v60, (__int64)&v59, &v61) & 1) ==
      0) {
    result = game_zview_d17160(*(float*)(LANES128(*(v7)).n128_u64[1] + 528),
                               *GameData_212ebd0[0],
                               LANES128(*(v7)).n128_u64[1] + 288, &v60, &v59);
    if ((result & 1) != 0) {
      goto LABEL_31;
    }
  }
  LANES128(v49).n128_u64[0] = 0x3F4000003F400000LL;
  LANES128(v49).n128_u64[1] = 0x3F4000003F400000LL;
  v50 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL);
  v51 = *(__int64**)(*v45 + 72);
  v61 = 4;
  v59 = vmlaq_f32(v60, v49, vsubq_f32(v58, v60));
  if ((GameRoutine_d242c0(v51, *(_QWORD*)(v50 + 8), (__int64)&v60,
                          (__int64)&v59, &v61) &
       1) == 0) {
    result = game_zview_d17160(*(float*)(*(_QWORD*)(v50 + 8) + 528LL),
                               *GameData_212ebd0[0],
                               *(_QWORD*)(v50 + 8) + 288LL, &v60, &v59);
    if ((result & 1) != 0) {
      goto LABEL_31;
    }
  }
  LANES128(v52).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v52).n128_u64[1] = 0x3F0000003F000000LL;
  v53 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL);
  v54 = *(__int64**)(*v45 + 72);
  v61 = 4;
  v59 = vmlaq_f32(v60, v52, vsubq_f32(v58, v60));
  if ((GameRoutine_d242c0(v54, *(_QWORD*)(v53 + 8), (__int64)&v60,
                          (__int64)&v59, &v61) &
       1) == 0) {
    result = game_zview_d17160(*(float*)(*(_QWORD*)(v53 + 8) + 528LL),
                               *GameData_212ebd0[0],
                               *(_QWORD*)(v53 + 8) + 288LL, &v60, &v59);
    if ((result & 1) != 0) {
      goto LABEL_31;
    }
  }
  LANES128(v55).n128_u64[0] = 0x3E8000003E800000LL;
  LANES128(v55).n128_u64[1] = 0x3E8000003E800000LL;
  v56 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL);
  v57 = *(__int64**)(*v45 + 72);
  v61 = 4;
  v59 = vmlaq_f32(v60, v55, vsubq_f32(v58, v60));
  result = GameRoutine_d242c0(v57, *(_QWORD*)(v56 + 8), (__int64)&v60,
                              (__int64)&v59, &v61);
  if ((result & 1) != 0 ||
      ((result = game_zview_d17160(*(float*)(*(_QWORD*)(v56 + 8) + 528LL),
                                   *GameData_212ebd0[0],
                                   *(_QWORD*)(v56 + 8) + 288LL, &v60, &v59)) &
       1) == 0) {
    LANES128(*(a3)).n128_u8[0] = 0;
    LANES128(a3[1]).n128_u8[0] = 0;
  }
  else {
  LABEL_31:
    *a3 = v59;
    LANES128(a3[1]).n128_u8[0] = 1;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Character_cb1ec0(PSEUDO_X8 x8_, __int64 a1,
                                                 unsigned int a2)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t result;
  float v7;
  __int64 v8;
  float v9;
  _QWORD* v10;
  unsigned __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  unsigned int v17;
  float32x4_t v18;
  struct {
    float32x4_t v19;
    char v20;
  } v19_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_cb1a30((void*)(&v19_.v19), a1, a2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v19_.v20 == 1) {
    *a3 = v19_.v19;
    {
      result;
      return;
    }
  }
  if (a2 > 4) {
    v7 = 0x1.6800000000000p+7f;
  }
  else {
    v7 = GameData_1b82520[a2];
  }
  v8 = *(_QWORD*)(a1 + 24);
  v9 = *(float*)(v8 + 528);
  v10 = *(_QWORD**)(v8 + 16);
  v11 = v10[71];
  v12 = *(float*)(v10[61] + 36LL);
  LANES128(*(a3)).n128_u64[0] = v10[70];
  LANES128(*(a3)).n128_u64[1] = v11;
  v13 = (float)(PSEUDO_UNFUSED(
            (float)(v7 + (float)(PSEUDO_UNFUSED(v12 * 0x1.ca5dc20000000p+5f))) *
            0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)((float)(v7 + (float)(PSEUDO_UNFUSED(
                                                v12 * 0x1.ca5dc20000000p+5f))) *
                               0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v13 > 0x1.921fb60000000p+0f) {
    v14 = 0x1.921fb60000000p+1f;
  LABEL_10:
    v13 = v14 - v13;
    v15 = -0x1.0000000000000p+0f;
    goto LABEL_11;
  }
  v15 = 0x1.0000000000000p+0f;
  if (v13 < -0x1.921fb60000000p+0f) {
    v14 = -0x1.921fb60000000p+1f;
    goto LABEL_10;
  }
LABEL_11:
  v16 = v13 * v13;
  *(float*)&v17 =
      v15 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v16)) *
                                                                            v16)) *
                                                         v16)) *
                                         v16)) *
                      v16) +
              0x1.0000000000000p+0f);
  LANES128(v18).n128_u32[1] = 0;
  LANES128(v18).n128_f32[0] =
      v13 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v13 *
                                                                                                    v13))) *
                                                                            (float)(v13 *
                                                                                    v13))) *
                                                         (float)(v13 * v13))) *
                                         (float)(v13 * v13))) *
                      (float)(v13 * v13)) +
              0x1.0000000000000p+0f);
  LANES128(v18).n128_u64[1] = v17;
  result = vaddq_f32(*a3, vmulq_n_f32(v18, v9 * 0x1.0000000000000p-1f));
  *a3 = result;
  {
    result;
    return;
  }
}

__int64 game_hub_Character_BuildSideStoryCommand_lambda0_Invoke(__int64 result,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  char v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  unsigned int v15;
  bool v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int16 v26;
    char gap10_[6];
    __int64 v27;
    char* v28;
  } v26_;
  struct {
    __int64 v29;
    unsigned int v30;
  } v29_;
  struct {
    __int16 v31;
    char gap58_[6];
    __int64 v32;
    __int64 v33;
  } v31_;

  v2 = *(_QWORD*)(result + 8);
  v4 = *(_QWORD*)(v2 + 760);
  v5 = *(_QWORD*)(v2 + 768);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 != 0 && *(_BYTE*)(v4 + 288) == 1) {
    result =
        (__int64)X8CALL_X0(_QWORD***, game_e99570((void*)((__int64)&v31_.v31),
                                                  (_QWORD***)(v4 + 280)));
    v6 = 0;
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  else {
    v6 = 1;
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
    if ((v6 & 1) != 0) {
      goto LABEL_10;
    }
    goto LABEL_12;
  }
LABEL_9:
  if ((v6 & 1) != 0) {
  LABEL_10:
    v7 = 0;
    v31_.v31 = 0;
    goto LABEL_13;
  }
LABEL_12:
  v7 = (unsigned __int8)v31_.v31;
LABEL_13:
  v8 = v7 & 1;
  v9 = v7 >> 1;
  if (v8 != 0) {
    v9 = v31_.v32;
  }
  if (v9 != 0) {
    if (*(_QWORD*)GameData_212dbb8[0] != 0) {
      v10 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
    }
    else {
      v10 = 0;
    }
    if (GameData_22127a8 != 0) {
      v11 = GameData_22127a8;
    }
    else {
      v11 = v10;
    }
    v12 = *(_QWORD*)(v2 + 760);
    v13 = *(_QWORD*)(v2 + 768);
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v12 != 0 && *(_BYTE*)(v12 + 288) == 1) {
      game_e99570((void*)((__int64)&v26_.v26), (_QWORD***)(v12 + 280));
      v14 = 0;
      if (v13 == 0) {
        goto LABEL_30;
      }
    }
    else {
      v14 = 1;
      if (v13 == 0) {
        goto LABEL_30;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
      if ((v14 & 1) != 0) {
        goto LABEL_31;
      }
      goto LABEL_33;
    }
  LABEL_30:
    if ((v14 & 1) != 0) {
    LABEL_31:
      v15 = 0;
      v26_.v26 = 0;
    LABEL_34:
      v16 = (v15 & 1) == 0;
      v17 = v15 >> 1;
      if (v16) {
        v18 = (char*)&v26_.v26 + 1;
      }
      else {
        v18 = v26_.v28;
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = v26_.v27;
      }
      result = X8CALL_X0(__int64, Manager_d9ae80((void*)((__int64)&v29_.v29),
                                                 v11, (__int64)v18, v19, 0));
      v20 = v29_.v29;
      v21 = v29_.v30;
      *(_QWORD*)a2 = v29_.v29;
      *(_DWORD*)(a2 + 8) = v21;
      if ((_DWORD)v21 == 0x2000 ||
          (v22 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v21))[1] == 0) {
        v23 = 0;
      }
      else if (*v22 == v20) {
        v23 = v22[1];
      }
      else {
        v23 = 0;
      }
      *(_QWORD*)(a2 + 16) = v23;
      if ((v26_.v26 & 1) != 0 && v26_.v28 != nullptr) {
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
      }
      v8 = v31_.v31 & 1;
      goto LABEL_52;
    }
  LABEL_33:
    v15 = (unsigned __int8)v26_.v26;
    goto LABEL_34;
  }
LABEL_52:
  if (v8 != 0 && v31_.v33 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  return result;
}

bool game_hub_Character_BuildSideStoryCommand_lambda1_Invoke(__int64 a1,
                                                             long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD v9[3];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 760);
  v4 = *(_QWORD*)(v2 + 768);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 != 0 && *(_BYTE*)(v3 + 288) == 1) {
    *(struct PseudoSret*)(v9) = GameRoutine_e99570(v3 + 280);
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_9;
    }
  }
  else {
    v5 = 1;
    if (v4 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    if ((v5 & 1) != 0) {
      goto LABEL_10;
    }
    goto LABEL_12;
  }
LABEL_9:
  if ((v5 & 1) != 0) {
  LABEL_10:
    v6 = 0;
    return v6 != 0;
  }
LABEL_12:
  if ((v9[0] & 1) != 0) {
    v6 = v9[1];
    if (v9[2] != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, a2);
    }
  }
  else {
    v6 = (unsigned __int64)LOBYTE(v9[0]) >> 1;
  }
  return v6 != 0;
}

__int64 game_hub_Character_BuildSubquestCommand_lambda0_Invoke(__int64 a1,
                                                               __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  _QWORD* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  _QWORD* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  struct {
    __int64 v36;
    unsigned __int64 v37;
    unsigned __int64 v38;
  } v36_;
  struct {
    __int64 v39;
    unsigned __int64 v40;
    char* v41;
  } v39_;
  struct {
    __int64 v42;
    unsigned __int64 v43;
    char* v44;
    int v45;
  } v42_;
  char v46;

  v2 = *(_QWORD**)(a1 + 8);
  v36_.v37 = 0;
  v36_.v38 = 0;
  v36_.v36 = 0;
  v4 = v2[95];
  v5 = v2[96];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v6 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v6 = 0;
  }
  if (GameData_22127a8 != 0) {
    v7 = GameData_22127a8;
  }
  else {
    v7 = v6;
  }
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 == 0 || *(_BYTE*)(v4 + 272) != 1 || *(_QWORD*)(v4 + 264) == 0) {
    goto LABEL_46;
  }
  v42_.v42 = v2[33];
  v42_.v45 = 1;
  v36_.v37 = ProcHubSeqEnter_918ce0(&v36_.v36, (__int64)&v42_.v42);
  if (v42_.v45 != -1) {
    ((void (*)(__int64*, __int64*))GameData_1fd3de0[v42_.v45])(&v39_.v39,
                                                               &v42_.v42);
  }
  if (*(_QWORD*)(*(_QWORD*)(v4 + 264) + 32LL) != 0) {
    v8 = *(char**)(*(_QWORD*)(v4 + 264) + 32LL);
  }
  else {
    v8 = &GameData_1a9f09e;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_66:
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
    v39_.v40 = v10;
    v39_.v41 = v11;
    v39_.v39 = v12 | 1;
    goto LABEL_25;
  }
  LOBYTE(v39_.v39) = 2 * v9;
  v11 = (char*)&v39_.v39 + 1;
  if (v9 != 0) {
  LABEL_25:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  v42_.v42 = v39_.v39;
  v42_.v43 = v39_.v40;
  v13 = (_QWORD*)v36_.v37;
  v42_.v44 = v39_.v41;
  v14 = 4;
  v42_.v45 = 4;
  if (v36_.v37 >= v36_.v38) {
    v16 = ProcHubSeqEnter_918ce0(&v36_.v36, (__int64)&v42_.v42);
    v14 = v42_.v45;
    v36_.v37 = v16;
    if (v42_.v45 == -1) {
      goto LABEL_30;
    }
  }
  else {
    v15 = v39_.v39;
    *(_DWORD*)(v36_.v37 + 24) = 4;
    *v13 = v15;
    v13[1] = v39_.v40;
    v13[2] = v39_.v41;
    v42_.v43 = 0;
    v42_.v44 = nullptr;
    v42_.v42 = 0;
    v36_.v37 = (unsigned __int64)(v13 + 4);
  }
  ((void (*)(char*, __int64*))GameData_1fd3de0[v14])(&v46, &v42_.v42);
LABEL_30:
  if (*(_QWORD*)(*(_QWORD*)(v4 + 264) + 56LL) != 0) {
    v17 = *(char**)(*(_QWORD*)(v4 + 264) + 56LL);
  }
  else {
    v17 = &GameData_1a9f09e;
  }
  v18 = strlen(v17);
  if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_66;
  }
  v19 = v18;
  if (v18 >= 0x17) {
    if ((v18 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v18 | 7) + 1;
    }
    v20 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v21, 16, 0);
    v39_.v40 = v19;
    v39_.v41 = v20;
    v39_.v39 = v21 | 1;
  }
  else {
    LOBYTE(v39_.v39) = 2 * v18;
    v20 = (char*)&v39_.v39 + 1;
    if (v18 == 0) {
      goto LABEL_42;
    }
  }
  memmove(v20, v17, v19);
LABEL_42:
  v20[v19] = 0;
  v42_.v42 = v39_.v39;
  v42_.v43 = v39_.v40;
  v22 = (_QWORD*)v36_.v37;
  v42_.v44 = v39_.v41;
  v23 = 4;
  v42_.v45 = 4;
  if (v36_.v37 < v36_.v38) {
    v24 = v39_.v39;
    *(_DWORD*)(v36_.v37 + 24) = 4;
    *v22 = v24;
    v22[1] = v39_.v40;
    v22[2] = v39_.v41;
    v42_.v43 = 0;
    v42_.v44 = nullptr;
    v42_.v42 = 0;
    v36_.v37 = (unsigned __int64)(v22 + 4);
  LABEL_45:
    ((void (*)(char*, __int64*))GameData_1fd3de0[v23])(&v46, &v42_.v42);
    goto LABEL_46;
  }
  v25 = ProcHubSeqEnter_918ce0(&v36_.v36, (__int64)&v42_.v42);
  v23 = v42_.v45;
  v36_.v37 = v25;
  if (v42_.v45 != -1) {
    goto LABEL_45;
  }
LABEL_46:
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  result = X8CALL_X0(__int64, Manager_d9b810((void*)((__int64)&v42_.v42), v7,
                                             (__int64)"RunSubquestScript", 17,
                                             (__int64)&v36_.v36, 0));
  v27 = v42_.v42;
  v28 = (unsigned int)v42_.v43;
  *(_QWORD*)a2 = v42_.v42;
  *(_DWORD*)(a2 + 8) = v28;
  if ((_DWORD)v28 == 0x2000 ||
      (v29 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v28))[1] == 0) {
    v30 = 0;
  }
  else if (*v29 == v27) {
    v30 = v29[1];
  }
  else {
    v30 = 0;
  }
  *(_QWORD*)(a2 + 16) = v30;
  v31 = v36_.v36;
  if (v36_.v36 != 0) {
    v32 = v36_.v37;
    if (v36_.v36 == v36_.v37) {
      goto LABEL_62;
    }
    do {
      v33 = *(unsigned int*)(v32 - 8);
      v34 = v32 - 32;
      if ((_DWORD)v33 != -1) {
        result =
            ((__int64 (*)(__int64*, unsigned __int64))GameData_1fd3de0[v33])(
                &v39_.v39, v32 - 32);
      }
      *(_DWORD*)(v32 - 8) = -1;
      v32 -= 32LL;
    } while (v34 != v31);
    v36_.v37 = v31;
    if (v36_.v36 != 0) {
    LABEL_62:
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
    }
  }
  return result;
}

bool game_hub_Character_BuildSubquestCommand_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 760);
  v3 = *(_QWORD*)(v1 + 768);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_BYTE*)(v2 + 272) != 1 ||
      (game_GameModeData_instance_ == 0
           ? (v4 = 0)
           : (v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15)),
       (v5 = GameSubquestData_125b8e0(GameData_21c9718,
                                      *(_QWORD*)(*(_QWORD*)(v2 + 264) + 32LL),
                                      v4)) == 0)) {
    v5 = 0;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    if (v5 == 0) {
      return false;
    }
  }
  else if (v5 == 0) {
    return false;
  }
  return (*(_BYTE*)(v5 + 9) & 0xFE) != 4;
}

__attribute__((swiftcall)) void

game_hub_Character_RebuildAppearance_lambda0_Invoke(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  int* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)(a2 + 200) = 0;
  *(_QWORD*)(a2 + 216) = 0;
  v3 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 56) = 0;
  *(_QWORD*)(a2 + 64) = 0;
  *(_QWORD*)(a2 + 72) = 0;
  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 88) = 0;
  *(_QWORD*)(a2 + 96) = 0;
  *(_QWORD*)(a2 + 104) = 0;
  *(_QWORD*)(a2 + 112) = 0;
  *(_QWORD*)(a2 + 120) = 0;
  *(_QWORD*)(a2 + 128) = 0;
  *(_QWORD*)(a2 + 136) = 0;
  *(_QWORD*)(a2 + 144) = 0;
  *(_QWORD*)(a2 + 152) = 0;
  *(_QWORD*)(a2 + 160) = 0;
  *(_QWORD*)(a2 + 168) = 0;
  *(_QWORD*)(a2 + 176) = 0;
  *(_QWORD*)(a2 + 184) = 0;
  *(_QWORD*)(a2 + 320) = 0;
  *(_QWORD*)(a2 + 328) = 0;
  *(_QWORD*)(a2 + 344) = 0;
  *(_QWORD*)(a2 + 352) = 0;
  *(_QWORD*)(a2 + 360) = 0;
  *(_QWORD*)(a2 + 368) = 0;
  *(_QWORD*)(a2 + 376) = 0;
  *(_DWORD*)(a2 + 384) = 1065353216;
  v4 = (int*)GameData_21d9d18;
  v5 = GameData_21d9d20;
  *(_QWORD*)(a2 + 392) = 0;
  *(_QWORD*)(a2 + 400) = 0;
  *(_QWORD*)(a2 + 408) = 0;
  *(_QWORD*)(a2 + 416) = 0;
  *(_QWORD*)(a2 + 424) = 0;
  *(_QWORD*)(a2 + 432) = 0;
  *(_QWORD*)(a2 + 440) = 0;
  *(_QWORD*)(a2 + 448) = 0;
  *(_QWORD*)(a2 + 456) = 0;
  if (v4 != (int*)v5) {
    do {
      v6 = *v4++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v6) = 0;
    } while (v4 != (int*)v5);
    v4 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v4;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  {
    Character_cb0480(v3, a2);
    return;
  }
}

__attribute__((swiftcall)) void

game_hub_Character_BuildZviewChara_lambda0_Invoke(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  int* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)(a2 + 200) = 0;
  *(_QWORD*)(a2 + 216) = 0;
  v3 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 56) = 0;
  *(_QWORD*)(a2 + 64) = 0;
  *(_QWORD*)(a2 + 72) = 0;
  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 88) = 0;
  *(_QWORD*)(a2 + 96) = 0;
  *(_QWORD*)(a2 + 104) = 0;
  *(_QWORD*)(a2 + 112) = 0;
  *(_QWORD*)(a2 + 120) = 0;
  *(_QWORD*)(a2 + 128) = 0;
  *(_QWORD*)(a2 + 136) = 0;
  *(_QWORD*)(a2 + 144) = 0;
  *(_QWORD*)(a2 + 152) = 0;
  *(_QWORD*)(a2 + 160) = 0;
  *(_QWORD*)(a2 + 168) = 0;
  *(_QWORD*)(a2 + 176) = 0;
  *(_QWORD*)(a2 + 184) = 0;
  *(_QWORD*)(a2 + 320) = 0;
  *(_QWORD*)(a2 + 328) = 0;
  *(_QWORD*)(a2 + 344) = 0;
  *(_QWORD*)(a2 + 352) = 0;
  *(_QWORD*)(a2 + 360) = 0;
  *(_QWORD*)(a2 + 368) = 0;
  *(_QWORD*)(a2 + 376) = 0;
  *(_DWORD*)(a2 + 384) = 1065353216;
  v4 = (int*)GameData_21d9d18;
  v5 = GameData_21d9d20;
  *(_QWORD*)(a2 + 392) = 0;
  *(_QWORD*)(a2 + 400) = 0;
  *(_QWORD*)(a2 + 408) = 0;
  *(_QWORD*)(a2 + 416) = 0;
  *(_QWORD*)(a2 + 424) = 0;
  *(_QWORD*)(a2 + 432) = 0;
  *(_QWORD*)(a2 + 440) = 0;
  *(_QWORD*)(a2 + 448) = 0;
  *(_QWORD*)(a2 + 456) = 0;
  if (v4 != (int*)v5) {
    do {
      v6 = *v4++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v6) = 0;
    } while (v4 != (int*)v5);
    v4 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v4;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  {
    Character_cb0480(v3, a2);
    return;
  }
}

__int64 game_hub_Character_BuildZviewChara_lambda1_Invoke(__int64 a1,
                                                          __int64* a2)
{

#pragma clang fp contract(off)
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
  float v13;
  __int64 v14;
  unsigned __int64 v15;
  __int128 v16;
  int v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  _BYTE* v35;
  bool v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  _BYTE* v66;
  float v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  unsigned __int64 v71;
  char* v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 i;
  __int64 v78;
  __int64 v79;
  unsigned __int8* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  _QWORD v85[2];

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  GameRoutine_cee4a0(*a2),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((*(_BYTE*)(v3 + 1330) & 1) == 0) {
    if (*(_DWORD*)(v3 + 1112) == 0) {
      v9 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 8LL);
      *(_QWORD*)(*(_QWORD*)(v9 + 328) + 184LL) = 0x3E4CCCCD3E4CCCCDLL;
      v10 = *(_QWORD*)(v9 + 328);
      v11 = *(_QWORD*)(v10 + 360);
      *(_QWORD*)(v10 + 176) = 0;
      *(_DWORD*)(v10 + 192) = 0;
      *(_BYTE*)(v10 + 196) = 1;
      *(_BYTE*)(v10 + 369) = 1;
      CharacterModel_cf5c00(v11),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v12 = *(_QWORD*)(v9 + 328);
      v13 = *(float*)(v12 + 192);
      if (v13 < 0x0.0p+0f) {
        v13 = 0x0.0p+0f;
      }
      *(float*)(v12 + 192) = v13;
      v14 = *(_QWORD*)(v9 + 328);
      *(_DWORD*)(v14 + 176) = 1065353216;
      if (game_ProcFadeView_instance_ != 0) {
        v15 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v15 + 172) == *(float*)(v15 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v15 + 160) + 16LL))(v15 +
                                                                         160),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        else {
          v16 = *(_OWORD*)(v15 + 208);
        }
        if (*((float*)&v16 + 3) == 0x1.0000000000000p+0f &&
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v15 + 160) + 16LL))(
                            v15 + 160, *((float*)&v16 + 3)))
                    .n128_f32[3] == 0x1.0000000000000p+0f) {
          v17 = *(_DWORD*)(v14 + 176);
          *(_DWORD*)(v14 + 192) = 0;
          *(_DWORD*)(v14 + 180) = v17;
        }
      }
      *(_BYTE*)(v14 + 196) = 1;
    }
    *(_BYTE*)(v3 + 1330) = 1;
  }
  v18 = *(_QWORD*)(v2 + 8);
  if (*(_BYTE*)(v18 + 145) == 1) {
    result = HubCharacterNatives_cf7940(v18),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  else {
    result = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220b6b8,
                            memory_order_acquire) &
       1) == 0) {
    v83 = result;
    v84 = __cxa_guard_acquire(&GameData_220b6b8),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = v83;
    if (v84 != 0) {
      GameData_220b6b4 = wld_Crc32(0, "HubCharacterModule", 0x12u),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      __cxa_guard_release(&GameData_220b6b8),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      result = v83;
    }
  }
  v20 = *(_QWORD*)(result + 512);
  v21 = v20;
  do {
    if (v21 == *(_QWORD*)(result + 504)) {
      goto LABEL_23;
    }
    v22 = *(_DWORD*)(v21 - 16);
    v21 -= 16;
    v20 -= 16;
  } while (v22 != GameData_220b6b4);
  if (*(_QWORD*)(result + 512) == v20 || *(_QWORD*)(v20 + 8) == 0) {
  LABEL_23:
    v23 = *(_QWORD*)(v2 + 8);
    if (*(_BYTE*)(v23 + 145) == 1) {
      v24 = HubCharacterNatives_cf7940(v23),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    else {
      v24 = 0;
    }
    nn_os_LockMutex(&GameData_2167580),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v25 = (__int64*)fw_memory_g_heap_manager_ptr;
    v26 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32, 16, 0),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_BYTE*)(v26 + 16) = 0;
    v27 = v26;
    *(_DWORD*)(v26 + 17) = 33686018;
    *(_QWORD*)(v26 + 24) = v3;
    *(_QWORD*)v26 = game_hub_HubCharacterModule_vtable;
    *(_QWORD*)(v26 + 8) = v24;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220b6b8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_220b6b8) != 0) {
      GameData_220b6b4 = wld_Crc32(0, "HubCharacterModule", 0x12u),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      __cxa_guard_release(&GameData_220b6b8),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v28 = *(_QWORD*)(v24 + 504);
    v29 = *(_QWORD*)(v24 + 512);
    v30 = v29;
    LODWORD(v85[0]) = GameData_220b6b4;
    v85[1] = v27;
    while (v30 != v28) {
      v31 = *(_DWORD*)(v30 - 16);
      v30 -= 16;
      if (v31 == GameData_220b6b4) {
        if ((*(_BYTE*)(v27 + 16) & 1) != 0) {
          goto LABEL_45;
        }
        goto LABEL_39;
      }
    }
    if (v28 == v29 && (unsigned __int64)(*(_QWORD*)(v24 + 520) - v28) <= 0x6F) {
      v32 = fw_memory_HeapManager_Allocate(*v25, 112, 16, 0),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(_QWORD*)(v24 + 504) = v32;
      *(_QWORD*)(v24 + 512) = v32;
      *(_QWORD*)(v24 + 520) = v32 + 112;
      if (v29 != 0) {
        v33 = 128;
        if (*(_QWORD*)(*v25 + 200) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(*v25 + v33),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    GameRoutine_98f140((__int64*)(v24 + 504), v85),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((*(_BYTE*)(v27 + 16) & 1) == 0) {
    LABEL_39:
      *(_BYTE*)(v27 + 16) = 1;
      *(_BYTE*)(v27 + 17) &= ~2u;
      *(_BYTE*)(v27 + 18) &= ~2u;
      *(_BYTE*)(v27 + 19) &= ~2u;
      *(_BYTE*)(v27 + 20) &= ~2u;
      v34 = *(_BYTE**)(v27 + 8);
      v34[632] = 0;
      v34[664] = 0;
      v34[696] = 0;
      v34[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v27 + 64LL))(v27),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v35 = *(_BYTE**)(v27 + 8);
      v36 = v35[300] == 3 && v35[301] == 3;
      if (v36 || v35[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 72LL))(v27),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
  LABEL_45:
    v37 = *(__int64**)(v24 + 536);
    v38 = *(_QWORD*)(v24 + 544);
    if ((unsigned __int64)v37 >= v38) {
      v40 = *(_QWORD*)(v24 + 528);
      v41 = (char*)v37 - v40;
      v42 = ((__int64)v37 - v40) >> 3;
      v43 = v42 + 1;
      if ((unsigned __int64)(v42 + 1) >> 61 != 0) {
        goto LABEL_106;
      }
      v44 = v38 - v40;
      if (v44 >> 2 > v43) {
        v43 = v44 >> 2;
      }
      if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
        v45 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v45 = v43;
      }
      if (v45 != 0) {
        if (v45 >> 61 != 0) {
          goto LABEL_107;
        }
        v46 = fw_memory_HeapManager_Allocate(*v25, 8 * v45, 16, 0),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      else {
        v46 = 0;
      }
      v47 = v46 + 8 * v45;
      v48 = (char*)v37 - v40;
      v49 = (__int64)&v41[v46 + -8 * v42];
      *(_QWORD*)&v41[v46] = v27;
      v39 = (__int64)&v41[v46 + 8];
      memcpy(v49, v40, v48),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(_QWORD*)(v24 + 528) = v49;
      *(_QWORD*)(v24 + 536) = v39;
      *(_QWORD*)(v24 + 544) = v47;
      if (v40 != 0) {
        v50 = 128;
        if (*(_QWORD*)(*v25 + 200) == 0) {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free(*v25 + v50),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    else {
      *v37 = v27;
      v39 = (__int64)(v37 + 1);
    }
    *(_QWORD*)(v24 + 536) = v39;
    v51 = *(__int64**)(v24 + 560);
    v52 = *(_QWORD*)(v24 + 568);
    if ((unsigned __int64)v51 < v52) {
      *v51 = v27;
      v53 = (__int64)(v51 + 1);
    LABEL_77:
      *(_QWORD*)(v24 + 560) = v53;
      GameRoutine_a8c0c0(v24),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(_BYTE*)(v24 + 576) = 1;
      result = nn_os_UnlockMutex(GameData_212df28),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      goto LABEL_78;
    }
    v54 = *(_QWORD*)(v24 + 552);
    v55 = (char*)v51 - v54;
    v56 = ((__int64)v51 - v54) >> 3;
    v57 = v56 + 1;
    if ((unsigned __int64)(v56 + 1) >> 61 == 0) {
      v58 = v52 - v54;
      if (v58 >> 2 > v57) {
        v57 = v58 >> 2;
      }
      if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
        v59 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v59 = v57;
      }
      if (v59 == 0) {
        v60 = 0;
      LABEL_73:
        v61 = v60 + 8 * v59;
        v62 = (char*)v51 - v54;
        v63 = (__int64)&v55[v60 + -8 * v56];
        *(_QWORD*)&v55[v60] = v27;
        v53 = (__int64)&v55[v60 + 8];
        memcpy(v63, v54, v62),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *(_QWORD*)(v24 + 552) = v63;
        *(_QWORD*)(v24 + 560) = v53;
        *(_QWORD*)(v24 + 568) = v61;
        if (v54 != 0) {
          v64 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v64 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v64),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        goto LABEL_77;
      }
      if (v59 >> 61 == 0) {
        v60 = fw_memory_HeapManager_Allocate(*v25, 8 * v59, 16, 0),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        goto LABEL_73;
      }
    LABEL_107:
      GameRoutine_60a210(),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  LABEL_106:
    GameRoutine_98f290(),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_78:
  *(_QWORD*)(v3 + 1312) = 0;
  *(_QWORD*)(v3 + 1304) = 0;
  *(_DWORD*)(v3 + 1320) = 1065353216;
  v65 = *(_QWORD**)(v3 + 16);
  if (v65 == nullptr || (v66 = (_BYTE*)v65[5]) == nullptr ||
      (v67 = 0x1.0000000000000p+0f, *v66 == 0)) {
    v67 = 0x1.0000000000000p-1f;
  }
  *(float*)(v3 + 1320) = v67;
  v68 = v65[4];
  if (v68 != 0 && v65[81] != 0) {
    v69 = 0xCBF29CE484222325LL;
    v70 = game_util_Format("%s_%s", v68, v65[80], v4, v5, v6, v7, v8, v85[0]),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = strlen(v70),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((int)result < 8) {
      v73 = 0;
      if ((int)result <= 0) {
      LABEL_97:
        if (v69 != 0) {
          v75 = v69;
        }
        else {
          v75 = -1;
        }
        goto LABEL_100;
      }
    }
    else {
      v71 = 7;
      do {
        v72 = &v70[v71];
        v71 += 8LL;
        v69 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * ((0x100000001B3LL * v69) ^
                                              (unsigned __int8)*(v72 - 7))) ^
                          (unsigned __int8)*(v72 - 6))) ^
                        (unsigned __int8)*(v72 - 5))) ^
                      (unsigned __int8)*(v72 - 4))) ^
                    (unsigned __int8)*(v72 - 3))) ^
                  (unsigned __int8)*(v72 - 2))) ^
                (unsigned __int8)*(v72 - 1))) ^
              (unsigned __int8)*v72;
      } while (v71 < ((unsigned int)result & 0x7FFFFFFF));
      v73 = result & 0x7FFFFFF8;
      if ((result & 0x7FFFFFF8) >= (int)result) {
        goto LABEL_97;
      }
    }
    v76 = result & 7;
    for (i = v73; v76 != 0; v69 = (0x100000001B3LL * v69) ^ v78) {
      v78 = (unsigned __int8)v70[i++];
      --v76;
    }
    if (v73 - (unsigned __int64)(unsigned int)result <= 0xFFFFFFFFFFFFFFF8LL) {
      v79 = (unsigned int)result - i;
      v80 = (unsigned __int8*)&v70[i + 3];
      do {
        v79 -= 8;
        v81 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * v69) ^ *(v80 - 3))) ^
                        *(v80 - 2))) ^
                      *(v80 - 1))) ^
                    *v80)) ^
                  v80[1])) ^
                v80[2])) ^
              v80[3];
        v82 = v80[4];
        v80 += 8;
        v69 = (0x100000001B3LL * v81) ^ v82;
      } while (v79 != 0);
    }
    goto LABEL_97;
  }
  v74 = *(_QWORD*)(v3 + 24);
  if ((*(_DWORD*)(v74 + 336) & 1) == 0) {
    return result;
  }
  v75 = *(_QWORD*)(v74 + 328);
LABEL_100:
  *(_QWORD*)(v3 + 1304) = v75;
  *(_BYTE*)(v3 + 1312) = 1;
  return result;
}

#pragma GCC visibility pop
