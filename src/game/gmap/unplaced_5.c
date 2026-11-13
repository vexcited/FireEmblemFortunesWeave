#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* GameRoutine_157b170(__int64*, __int64, char);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* Troop_133e4e0(__int64);
__attribute__((swiftcall)) void GameSideStoryData_12b3ba0(PSEUDO_X8,
                                                          __int64 result);
__attribute__((swiftcall)) void GmapUIDef_1654700(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void SpotMgr_13306e0(PSEUDO_X8, char**, char,
                                                char**);
__attribute__((swiftcall)) void SpotMgr_1331320(PSEUDO_X8, __int64, __int64,
                                                int);
__attribute__((swiftcall)) void SpotMgr_1331ca0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_de77a0(PSEUDO_X8, __int64);
__int64* GameRoutine_6f4cd0(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* GameRoutine_888970(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_821090(int);
__int64* game_8af240(__int64* result, __int64**);
__int64 Alignment_56b600(__int64 result);
__int64 AssetTableFile_7e7620(__int64 result, __int64);
__int64 AssetTableFile_7e7b20(__int64 result, unsigned __int64*);
__int64 AssetTableFile_7e95e0(__int64, __int64, unsigned int);
__int64 ControlCreator_13633c0(__int64 result);
__int64 DelayImageLoader_19a37d0(__int64, const char*, unsigned int);
__int64 Dir_70df40(__int16*, __int16*);
__int64 Dir_70e760(__int16*, __int16*);
__int64 GameHr_1328460(__int64);
__int64 GameHr_133f1d0(__int64);
__int64 GameHr_14d6ba0();
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1651170(__int64);
__int64 GameHr_7e8000(__int64);
__int64 GameRoutine_14b4cf0(__int64, unsigned int, __int64);
__int64 GameRoutine_14d6c10();
__int64 GameRoutine_14de200(__int64);
__int64 GameRoutine_15853b0(__int64*, __int64);
__int64 GameRoutine_1650a00(__int64 result, __int64*, __int64);
__int64 GameRoutine_16512e0(__int64*, __int64);
__int64 GameRoutine_1651740(_QWORD*);
__int64 GameRoutine_16962f0();
__int64 GameRoutine_176a400(__int64, _QWORD*, int);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a09d20(unsigned __int64, __int64);
__int64 GameRoutine_609140(__int64, __int64, ...);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_ae0560();
__int64 GmapUIDef_1654a80(__int64);
__int64 Impl_13261c0(__int64);
__int64 Impl_13262e0(__int64);
__int64 Impl_1326560(__int64);
__int64 Impl_132a360(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563030(__int64 result, __int64, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fs_609260(__int64, const char*, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_165dd80(__int64 result, _QWORD*, __int64, __int64, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GrowthListFile_GetJob(__int64*, __int64, char);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_TransporterConst_List_Impl_GetStock(unsigned __int16*);
__int64 game_anonymous_ConditionMap_Add_7ebae0(__int64 result);
__int64 game_gmap_14d6b00();
__int64 game_gmap_14d6b80();
__int64 game_gmap_1536e70(int);
__int64 game_gmap_1659b80_alt1(__int64*) __asm__("game_gmap_1659b80");
__int64 game_gmap_165b180(__int64, __int64, char, unsigned int);
__int64 game_gmap_165b330_alt1(__int64**,
                               __int64*) __asm__("game_gmap_165b330");
__int64 game_gmap_TroopUnitList_CreateReinforce(__int64 result, __int64,
                                                __int64);
__int64 game_menu_16af0a0(__int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, __int64, __int64,
                                                 __int64, __int64, unsigned int,
                                                 unsigned int, int, float,
                                                 float);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strchr(const char*, int);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetTextBoxColor(__int64*, __int64, _DWORD*);
bool GameHr_1328300(__int64);
bool GameHr_995200(__int64);
bool GameRoutine_133f0c0(__int64);
bool GameRoutine_135c1a0(__int64);
bool game_8ae640(__int64*, __int64, char);
char* GameHr_6ed030(__int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* GameRoutine_adf880(__int64, char);
char* GameRoutine_adfb00(__int64);
char* game_GmapExploreData_GetShowRareFlagName(__int64);
char* game_util_Format(const char*, ...);
const char* GameRoutine_16514e0(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1a8afc6;
extern _UNKNOWN GameData_1a8eb16;
extern _UNKNOWN GameData_1a964a9;
extern _UNKNOWN GameData_1aad985;
extern _UNKNOWN GameData_1aad991;
extern _UNKNOWN GameData_1ab98e9;
extern _UNKNOWN GameData_1abd4d1;
extern _UNKNOWN GameData_1ada5b4;
extern _UNKNOWN GameData_1aeb0ab;
extern _UNKNOWN GameData_1b45704;
extern _UNKNOWN GameData_1bebb60;
extern _UNKNOWN GameData_2252810;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21c9610;
extern __int64 (*GameData_212c720)();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (
    *game_gmap_anonymous_ProcProgressScheduleBeforeSideStory_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cbf8[72];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d728[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* GameData_2130e60;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_1a83be0;
extern __int64 GameData_207fdb0;
extern __int64 GameData_212c060;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212d690;
extern __int64 GameData_212d750;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2130e20;
extern __int64 GameData_21c96d8;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9988;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f1618;
extern __int64 GameData_2241720;
extern __int64 GameData_2252618;
extern __int64 GameData_2252620;
extern __int64 GameData_2252628;
extern __int64 GameData_2252638;
extern __int64 GameData_2252648;
extern __int64 GameData_2252658;
extern __int64 GameData_2252660;
extern __int64 GameData_2252678;
extern __int64 GameData_2252688;
extern __int64 GameData_2252698;
extern __int64 GameData_22526a0;
extern __int64 GameData_22526b8;
extern __int64 GameData_22526c8;
extern __int64 GameData_22526d8;
extern __int64 GameData_22526e0;
extern __int64 GameData_22526e8;
extern __int64 GameData_22526f8;
extern __int64 GameData_2252708;
extern __int64 GameData_2252718;
extern __int64 GameData_2252720;
extern __int64 GameData_2252728;
extern __int64 GameData_2252738;
extern __int64 GameData_2252748;
extern __int64 GameData_2252758;
extern __int64 GameData_2252760;
extern __int64 GameData_2252768;
extern __int64 GameData_2252778;
extern __int64 GameData_2252788;
extern __int64 GameData_2252798;
extern __int64 GameData_22527a0;
extern __int64 GameData_22527a8;
extern __int64 GameData_22527b8;
extern __int64 GameData_22527c8;
extern __int64 GameData_22527d8;
extern __int64 GameData_22527e0;
extern __int64 GameData_22527e8;
extern __int64 GameData_22527f8;
extern __int64 GameData_2252808;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_Manager_instance_;
extern char* GameData_204a230;
extern char* GameData_20760b0[22];
extern char GameData_1a9f09e;
extern char GameData_1ab8d4c[];
extern char GameData_1af8f56[];
extern char GameData_2252610;
extern char GameData_2252650;
extern char GameData_2252690;
extern char GameData_22526d0;
extern char GameData_2252710;
extern char GameData_2252750;
extern char GameData_2252790;
extern char GameData_22527d0;
extern const char GameData_1aa9f0a[];
extern const char GameData_1acc6e2[];
extern int GameData_2252630;
extern int GameData_2252640;
extern int GameData_2252670;
extern int GameData_2252680;
extern int GameData_22526b0;
extern int GameData_22526c0;
extern int GameData_22526f0;
extern int GameData_2252700;
extern int GameData_2252730;
extern int GameData_2252740;
extern int GameData_2252770;
extern int GameData_2252780;
extern int GameData_22527b0;
extern int GameData_22527c0;
extern int GameData_22527f0;
extern int GameData_2252800;
extern int game_script_hub_ui_g_talk_result;
int __cxa_guard_acquire(__int64);
int sscanf(const char*, const char*, ...);
unsigned __int64 LayoutAccessor_1562b50(__int64*, const char*);
unsigned __int64 SpotAttachmentRecruit_15189e0(__int64, __int64, unsigned int);
unsigned __int64 strlen(const char*);
unsigned int* game_de7fb0(__int64, unsigned int*);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void AssetTableFile_7eb740(char);
void ConditionMap_7ea800(__int64*);
void GameHr_133cc40(__int64);
void GameHr_1348160();
void GameHr_1650120(__int64, __int64);
void GameHr_165af40(__int64, unsigned __int8);
void GameHr_165bbf0(__int64);
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, const char*, int, ...);
void GameRoutine_165ad90(__int64, unsigned int, __int64);
void GameSideStoryData_12b50c0(__int64, __int64*);
void GmapSpotInfoSetterForGmap_165b440(__int64***, unsigned int, char);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void __attribute__((noreturn)) GameRoutine_13381b0();
void __attribute__((noreturn)) GameRoutine_13549e0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6e5c60();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_874520();
void __attribute__((noreturn)) GameRoutine_8875e0();
void __attribute__((noreturn)) GameRoutine_888610();
void __attribute__((noreturn)) GameRoutine_892740();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void ui_LayoutAccessor_SetTextBoxString(__int64*, __int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 game_gmap_888560(__int64 a1);
__int64 game_gmap_13278a0(float32x4_t* a1, int a2, float32x4_t* a3);
void game_gmap_133ce20(__int64 a1, __int64 a2, __int64 a3);
__int64 game_gmap_133e160(__int64 a1, _QWORD* a2);
void game_gmap_133fb00(__int64* a1, __int64 a2);
void game_gmap_1347e20();
__int64 game_gmap_1360f00(__int64 a1, __int64 a2);
void game_gmap_14ab9e0(__int64 a1);
__int64 game_gmap_14d5b80(__int64 a1);
void game_gmap_14d5d80(__int64 a1);
void game_gmap_14d66c0(__int64 a1);
void game_gmap_151e060(__int64 a1, __int64 a2, int a3);
void game_gmap_151e8b0(float* a1, __int64 a2, char a3);
void game_gmap_151efe0(float* a1, __int64 a2, char a3);
void game_gmap_151f430(__int64 a1, __int64 a2, char a3);
void game_gmap_1520420(__int64 a1, __int64 a2, char a3);
__int64 game_gmap_1520a70(__int64 a1);
void game_gmap_152a600(__int64* a1, __int64 a2, char* a3, char* a4, __int64 a5);
void game_gmap_1539fc0(__int64 a1);
__int64 game_gmap_16573e0(__int64* a1);
void game_gmap_1659b80(__int64** a1);
void game_gmap_165b330(__int64** a1, __int64* a2);
void game_gmap_167b240(__int64* a1, __int64* a2);

__int64 game_gmap_888560(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  while (v3 != v4) {
    v5 = *v3++;
    UnitActor_81a540(v5 + 112, 0x723D4B8u, (__int64)&GameData_1b45704);
  }
  return GameRoutine_14b4cf0(a1, 2u, a1 + 152);
}

__int64 game_gmap_13278a0(float32x4_t* a1, int a2, float32x4_t* a3)
{
  float32x4_t v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 result;

  v3 = vsubq_f32(*a3, a1[2]);
  if (LANES128(v3).n128_f32[2] == 0.0f) {
    v4 = 0.0f;
    if (LANES128(v3).n128_f32[0] == 0.0f) {
      goto LABEL_20;
    }
  }
  v5 = -LANES128(v3).n128_f32[2];
  v6 = *(float*)GameData_212c2f0;
  v7 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
  v8 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
  v9 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
  if (LANES128(v3).n128_f32[2] > 0.0f) {
    if (LANES128(v3).n128_f32[0] >= 0.0f) {
      if (LANES128(v3).n128_f32[0] <= LANES128(v3).n128_f32[2]) {
        v10 = LANES128(v3).n128_f32[0] / LANES128(v3).n128_f32[2];
        v11 = 0x1.921fb60000000p+1f;
        goto LABEL_18;
      }
      v12 = LANES128(v3).n128_f32[2] / LANES128(v3).n128_f32[0];
      v13 = 0x1.921fb60000000p+0f;
    }
    else {
      if (LANES128(v3).n128_f32[0] < v5) {
        v10 = v5 / LANES128(v3).n128_f32[0];
        v11 = -0x1.921fb60000000p+0f;
      LABEL_18:
        v4 = v11 -
          (float)(v10 *
            (float)((float)((float)((float)((float)(v9 +
                                              (float)((float)((float)((float)(v8 +
                                                                        (float)((float)((float)((float)(v7 +
                                                                                                  (float)((float)((float)(v6 *
                                                                                                                    (float)(v10 *
                                                                                                                      v10)) -
                                                                                                            *((float*)
                                                                                                                GameData_212c2f0 +
                                                                                                              1)) *
                                                                                                    (float)(v10 *
                                                                                                      v10))) *
                                                                                          (float)(v10 *
                                                                                            v10)) -
                                                                                  *(float*)((char*)((
                                                                                              _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                    4)) *
                                                                          (float)(v10 *
                                                                            v10))) *
                                                                (float)(v10 *
                                                                  v10)) -
                                                        *(float*)((char*)((
                                                                    __int128*)0x10LL) +
                                                          (_QWORD)
                                                            GameData_212c2f0 +
                                                          4)) *
                                                (float)(v10 * v10))) *
                                      (float)(v10 * v10)) -
                              *(float*)((char*)((__int128*)0x10LL) +
                                (_QWORD)GameData_212c2f0 + 12)) *
                      (float)(v10 * v10)) +
              1.0f));
        goto LABEL_20;
      }
      v12 = LANES128(v3).n128_f32[0] / v5;
      v13 = -0x1.921fb60000000p+1f;
    }
  LABEL_15:
    v4 =
      (float)(v12 *
        (float)((float)((float)((float)((float)(v9 +
                                          (float)((float)((float)((float)(v8 +
                                                                    (float)((float)((float)((float)(v7 +
                                                                                              (float)((float)((float)(v6 *
                                                                                                                (float)(v12 *
                                                                                                                  v12)) -
                                                                                                        *((float*)
                                                                                                            GameData_212c2f0 +
                                                                                                          1)) *
                                                                                                (float)(v12 *
                                                                                                  v12))) *
                                                                                      (float)(v12 *
                                                                                        v12)) -
                                                                              *(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                  GameData_212c2f0 +
                                                                                4)) *
                                                                      (float)(v12 *
                                                                        v12))) *
                                                            (float)(v12 *
                                                              v12)) -
                                                    *(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      4)) *
                                            (float)(v12 * v12))) *
                                  (float)(v12 * v12)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v12 * v12)) +
          1.0f)) +
      v13;
    goto LABEL_20;
  }
  if (LANES128(v3).n128_f32[0] < 0.0f) {
    if (LANES128(v3).n128_f32[2] <= LANES128(v3).n128_f32[0]) {
      v14 = LANES128(v3).n128_f32[0] / LANES128(v3).n128_f32[2];
      v4 = -(float)(v14 *
        (float)((float)((float)((float)((float)(v9 +
                                          (float)((float)((float)((float)(v8 +
                                                                    (float)((float)((float)((float)(v7 +
                                                                                              (float)((float)((float)(v6 *
                                                                                                                (float)(v14 *
                                                                                                                  v14)) -
                                                                                                        *((float*)
                                                                                                            GameData_212c2f0 +
                                                                                                          1)) *
                                                                                                (float)(v14 *
                                                                                                  v14))) *
                                                                                      (float)(v14 *
                                                                                        v14)) -
                                                                              *(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                  GameData_212c2f0 +
                                                                                4)) *
                                                                      (float)(v14 *
                                                                        v14))) *
                                                            (float)(v14 *
                                                              v14)) -
                                                    *(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      4)) *
                                            (float)(v14 * v14))) *
                                  (float)(v14 * v14)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v14 * v14)) +
          1.0f));
      goto LABEL_20;
    }
    v12 = LANES128(v3).n128_f32[2] / LANES128(v3).n128_f32[0];
    v13 = -0x1.921fb60000000p+0f;
    goto LABEL_15;
  }
  if (LANES128(v3).n128_f32[0] > v5) {
    v10 = v5 / LANES128(v3).n128_f32[0];
    v11 = 0x1.921fb60000000p+0f;
    goto LABEL_18;
  }
  v15 = LANES128(v3).n128_f32[0] / v5;
  v4 = v15 *
    (float)((float)((float)((float)((float)(v9 +
                                      (float)((float)((float)((float)(v8 +
                                                                (float)((float)((float)((float)(v7 +
                                                                                          (float)((float)((float)(v6 *
                                                                                                            (float)(v15 *
                                                                                                              v15)) -
                                                                                                    *((float*)
                                                                                                        GameData_212c2f0 +
                                                                                                      1)) *
                                                                                            (float)(v15 *
                                                                                              v15))) *
                                                                                  (float)(v15 *
                                                                                    v15)) -
                                                                          *(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                            (_QWORD)
                                                                              GameData_212c2f0 +
                                                                            4)) *
                                                                  (float)(v15 *
                                                                    v15))) *
                                                        (float)(v15 * v15)) -
                                                *(float*)((char*)((
                                                            __int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  4)) *
                                        (float)(v15 * v15))) *
                              (float)(v15 * v15)) -
                      *(float*)((char*)((__int128*)0x10LL) +
                        (_QWORD)GameData_212c2f0 + 12)) *
              (float)(v15 * v15)) +
      1.0f);
LABEL_20:
  v16 = v4 * 0x1.ca5dc00000000p+5f;
  if (v16 < 0x1.6800000000000p+4f || v16 > 0x1.0e00000000000p+6f) {
    if (v16 < 0x1.c200000000000p+6f || v16 > 0x1.3b00000000000p+7f) {
      if (v16 < -0x1.3b00000000000p+7f || v16 > -0x1.c200000000000p+6f) {
        result = 0;
        if (v16 >= -0x1.0e00000000000p+6f && v16 <= -0x1.6800000000000p+4f) {
          if (a2 == 3) {
            return 1;
          }
          else {
            return 3;
          }
        }
      }
      else if (a2 == 2) {
        return 3;
      }
      else {
        return 2;
      }
    }
    else if (a2 == 4) {
      return 2;
    }
    else {
      return 4;
    }
  }
  else if (a2 == 1) {
    return 4;
  }
  else {
    return 1;
  }
  return result;
}

void game_gmap_133ce20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  int v6;
  char* v7;
  __int64 v8;
  unsigned int** v9;
  __int64 v10;
  unsigned int* v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int* v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  int v33;
  __int64** v34;
  char* v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  char* v45;
  char* v46;
  unsigned int* v47;
  _QWORD* v48;
  unsigned int** v49;
  char* v50;
  _QWORD* v51;
  __int64 v52;
  char* v53;
  unsigned __int64 v54;
  char* v55;
  __int64 v56;
  char v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  unsigned int v68;
  __int128 v69;
  __int16 v70;
  __int64 v71;
  struct {
    char* v72;
    char* v73;
    __int64 v74;
  } v72_;
  struct {
    char* v75;
    __int64 v76;
    __int64 v77;
  } v75_;
  struct {
    char* v78;
    char* v79;
    char* v80;
  } v78_;

  if (a3 == 0) {
    return;
  }
  *(_QWORD*)(a1 + 88) = a3;
  v4 = a2;
  game_gmap_TroopUnitList_CreateReinforce(a1, a2, *(_QWORD*)(a3 + 40));
  v6 = *(unsigned __int8*)(a3 + 88);
  if ((unsigned int)(v6 - 1) >= 2) {
    if (v6 != 3) {
      goto LABEL_73;
    }
    v24 = *(_QWORD*)(*(_QWORD*)a1 + 72LL);
    v23 = *(_QWORD*)(*(_QWORD*)a1 + 80LL);
    v25 = (__int64*)fw_memory_g_heap_manager_ptr;
    v26 = v23 - v24;
    if (v23 == v24) {
      v27 = 0;
      v34 = (__int64**)&GameData_1a83be0;
    }
    else {
      if ((v26 & 0x8000000000000000LL) != 0) {
        GameRoutine_13381b0();
      }
      v27 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v23 - v24, 16, 0);
      memcpy(v27, v24, v26);
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v28 = game_map_MapRandom_instance__ptr[0];
      v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8);
      v30 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
      v31 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL)) ^
            (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((__int128*)0x10LL))
             << 11);
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL)) =
          *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 4) = v29;
      v32 = (v31 >> 8) ^ (v30 >> 19) ^ v31 ^ v30;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 8) = v30;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 12) = v32;
      v33 = v32 & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v34 = (__int64**)(v27 + 8LL * (unsigned int)(v33 % (int)(v26 >> 3)));
    }
    v43 = *v34;
    if ((__int64*)(a1 + 24) != v43) {
      GameRoutine_888970((__int64*)(a1 + 24), *v43, v43[1],
                         (v43[1] - *v43) >> 3);
    }
    if (v27 == 0) {
      goto LABEL_73;
    }
    v44 = *v25;
    v45 = (char*)v27;
  }
  else {
    v7 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    v8 = *(unsigned __int16*)(a3 + 96);
    *(_QWORD*)v7 = *(_QWORD*)a1;
    v9 = (unsigned int**)(v7 + 8);
    v78_.v80 = v7 + 8;
    v78_.v78 = v7;
    v78_.v79 = v7 + 8;
    if (v8 != 0) {
      v10 = 8;
      v71 = v4;
      do {
        v11 = game_gmap_SpotMgr_FindSpot(
            *(unsigned int**)(*(_QWORD*)(a3 + 104) + v10));
        if (v11 != nullptr) {
          if (v9 < (unsigned int**)v78_.v80) {
            *v9++ = v11;
          }
          else {
            v12 = v78_.v78;
            v13 = (char*)v9 - v78_.v78;
            v14 = ((char*)v9 - v78_.v78) >> 3;
            v15 = v14 + 1;
            if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
              goto LABEL_81;
            }
            v16 = v78_.v80 - v78_.v78;
            if ((v78_.v80 - v78_.v78) >> 2 > v15) {
              v15 = v16 >> 2;
            }
            if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
              v17 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v15;
            }
            if (v17 != 0) {
              if (v17 >> 61 != 0) {
                goto LABEL_82;
              }
              v18 = v11;
              v19 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
              v11 = v18;
            }
            else {
              v19 = 0;
            }
            v20 = v19 + 8 * v17;
            v21 = (char*)(v19 + v13 - 8 * v14);
            *(_QWORD*)(v19 + v13) = v11;
            v9 = (unsigned int**)(v19 + v13 + 8);
            memcpy((__int64)v21, (__int64)v12, v13);
            v78_.v78 = v21;
            v78_.v80 = (char*)v20;
            if (v12 != nullptr) {
              v22 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v22 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v12);
            }
          }
          v78_.v79 = (char*)v9;
        }
        --v8;
        v10 += 16;
      } while (v8 != 0);
      v6 = *(unsigned __int8*)(a3 + 88);
      v4 = v71;
    }
    if (v6 == 2) {
      v35 = v78_.v78;
      v36 = (char*)(v9 - 1);
      v37 = (char*)(v9 - 1) - v78_.v78;
      if (v37 >> 3 >= 1) {
        if (v37 <= v78_.v80 - (char*)v9) {
          v46 = (char*)v9;
          if (v36 != v78_.v78) {
            v46 = (char*)v9;
            do {
              v47 = *((unsigned int**)v36 - 1);
              v36 -= 8;
              v46 += 8;
              *v9++ = v47;
            } while (v36 != v35);
          }
          v78_.v79 = v46;
        }
        else {
          v38 = (char*)v9 - v78_.v78;
          v39 = (v37 >> 3) + (((char*)v9 - v78_.v78) >> 3);
          if (v39 >> 61 != 0) {
          LABEL_81:
            GameRoutine_8875e0();
          }
          v40 = v78_.v80 - v78_.v78;
          if ((v78_.v80 - v78_.v78) >> 2 > v39) {
            v39 = v40 >> 2;
          }
          if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
            v41 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v41 = v39;
          }
          if (v41 != 0) {
            if (v41 >> 61 != 0) {
            LABEL_82:
              GameRoutine_60a210();
            }
            v42 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v41, 16, 0);
          }
          else {
            v42 = 0;
          }
          v48 = (_QWORD*)(v42 + v38);
          v49 = v9 - 2;
          v50 = (char*)(v42 + v38 + v37);
          v51 = v48;
          do {
            v52 = (__int64)*v49--;
            v37 -= 8;
            *v51++ = v52;
          } while (v37 != 0);
          v53 = v78_.v78;
          v54 = v42 + 8 * v41;
          v55 = (char*)v48 - ((char*)v9 - v78_.v78);
          memcpy((__int64)v55, (__int64)v78_.v78, (char*)v9 - v78_.v78);
          v78_.v78 = v55;
          v78_.v79 = v50;
          v78_.v80 = (char*)v54;
          if (v53 != nullptr) {
            v56 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v56 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, (__int64)v53);
          }
        }
      }
    }
    if ((*(_BYTE*)(v4 + 113) & 1) != 0) {
      v57 = 2;
    }
    else {
      v57 = 4 * *(_BYTE*)(v4 + 114);
    }
    v72_.v73 = nullptr;
    v72_.v74 = 0;
    v72_.v72 = nullptr;
    SpotMgr_13306e0((void*)(&v75_.v75), &v78_.v78, v57, &v72_.v72);
    v58 = *(_QWORD*)(a1 + 24);
    if (v58 != 0) {
      *(_QWORD*)(a1 + 32) = v58;
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v58);
    }
    v60 = v75_.v75;
    v61 = v75_.v76;
    v62 = v72_.v72;
    v75_.v75 = nullptr;
    *(_QWORD*)(a1 + 24) = v60;
    *(_QWORD*)(a1 + 32) = v61;
    v63 = v75_.v77;
    v75_.v76 = 0;
    v75_.v77 = 0;
    *(_QWORD*)(a1 + 40) = v63;
    if (v62 != nullptr) {
      v72_.v73 = v62;
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, (__int64)v62);
    }
    v45 = v78_.v78;
    if (v78_.v78 == nullptr) {
      goto LABEL_73;
    }
    v78_.v79 = v78_.v78;
    v44 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  }
  v65 = 128;
  if (*(_QWORD*)(v44 + 200) == 0) {
    v65 = 56;
  }
  nn_mem_StandardAllocator_Free(v44 + v65, (__int64)v45);
LABEL_73:
  v66 = *(_QWORD*)(a1 + 96);
  if (v66 != 0) {
    v67 = *(unsigned __int8*)(v66 + 32);
    if (v67 == 2) {
      v68 = DWORD2(GameData_21c9610);
      *(_QWORD*)(a1 + 64) = GameData_21c9610;
      v69 = *(_OWORD*)(a1 + 64);
      *((_QWORD*)&v69 + 1) = v68;
      *(_OWORD*)(a1 + 64) = v69;
      v67 = *(unsigned __int8*)(v66 + 32);
    }
    if (v67 == 4) {
      v70 = *(_WORD*)(a1 + 544);
      if ((v70 & 8) == 0) {
        *(_WORD*)(a1 + 544) = v70 | 8;
        if (GameData_21f1618 != 0) {
          GameHr_995200(a1 + 112);
        }
      }
    }
  }
}

__int64 game_gmap_133e160(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  bool v8;
  unsigned __int64 v9;
  char v10;
  int v11;
  void* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  const char* v25;
  unsigned __int64 v26;
  const char* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  int v31;
  _BYTE v32[24];
  struct {
    __int64 v33;
    const char* v34;
  } v33_;

  v4 = Troop_133e4e0(a1);
  v5 = *(_QWORD*)(a1 + 96);
  v6 = (__int64)v4;
  if (v5 != 0) {
    v7 = *(unsigned __int8*)(v5 + 32);
    v8 = v7 >= 5;
    v9 = 0x101030103uLL >> (8 * (unsigned __int8)v7);
    if (v8) {
      v10 = 3;
    }
    else {
      v10 = v9;
    }
  }
  else if (*(_QWORD*)(a1 + 552) != 0) {
    v10 = 3;
  }
  else {
    v10 = 0;
  }
  AssetTableFile_7eb740(v10);
  game_anonymous_ConditionMap_Add_7ebae0(GameData_21c96d8);
  *(_QWORD*)&v32[8] = "GMAP";
  *(_QWORD*)v32 = game_HashString((__int64)"GMAP");
  AssetTableFile_7e7b20((__int64)a2, (unsigned __int64*)v32);
  v11 = *(unsigned __int8*)(a1 + 512);
  if (v11 == 1) {
    v12 = &GameData_1a964a9;
    goto LABEL_12;
  }
  if (v11 == 2) {
    v12 = &GameData_1aad985;
  LABEL_12:
    *(_QWORD*)&v32[8] = v12;
    *(_QWORD*)v32 = game_HashString((__int64)v12);
    AssetTableFile_7e7b20((__int64)a2, (unsigned __int64*)v32);
    goto LABEL_13;
  }
  v16 = *(_QWORD*)(a1 + 96);
  if (v16 != 0 && (unsigned int)*(unsigned __int8*)(v16 + 32) - 3 <= 1) {
    v17 = *(unsigned __int8*)(v16 + 131);
    v32[21] = 0;
    qmemcpy(v32, "(AID_GMAP", 9);
    v33_.v34 = (const char*)&GameData_1ada5b4;
    *(_DWORD*)&v32[17] = -2137593426;
    *(_QWORD*)&v32[9] = 0x81E38C95E7A586E5LL;
    v33_.v33 = game_HashString((__int64)&GameData_1ada5b4);
    if (game_GameModeData_instance_ != 0 &&
        (v18 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v33_.v33)) != 0) {
      v19 = *(_DWORD*)(v18 + 32) + 1;
    }
    else {
      v19 = 1;
    }
    if (v19 >= v17) {
      GameRoutine_1a09ce0((__int64)v32, GameData_1acc6e2, 4u);
    }
    if ((*(_WORD*)(a1 + 544) & 8) == 0) {
      if ((*(_WORD*)(a1 + 544) & 0x800) != 0) {
        v25 = (const char*)&GameData_1aeb0ab;
        v26 = 7;
      }
      else {
        v25 = (const char*)&GameData_1aad991;
        v26 = 10;
      }
      GameRoutine_1a09ce0((__int64)v32, v25, v26);
    }
    if ((v32[0] & 1) != 0) {
      v27 = *(const char**)&v32[16];
    }
    else {
      v27 = &v32[1];
    }
    v33_.v34 = v27;
    v33_.v33 = game_HashString((__int64)v27);
    AssetTableFile_7e7b20((__int64)a2, (unsigned __int64*)&v33_.v33);
    if ((v32[0] & 1) != 0 && *(_QWORD*)&v32[16] != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, *(__int64*)&v32[16]);
    }
    goto LABEL_13;
  }
  if (v6 != 0) {
    AssetTableFile_7e7620((__int64)a2, v6);
    goto LABEL_13;
  }
  v20 = *(_QWORD*)(a1 + 552);
  if (v20 == 0) {
    goto LABEL_13;
  }
  v21 = *(_QWORD*)(v20 + 64);
  AssetTableFile_7e95e0((__int64)a2, v20, 0);
  if (v21 == 0) {
    v29 = (__int64*)GameData_21c9988;
    if (GameData_21c9988 == 0) {
      goto LABEL_13;
    }
    goto LABEL_62;
  }
  v22 = *(_QWORD*)(a1 + 552);
  if (game_GameModeData_instance_ != 0) {
    v23 = *(_DWORD*)(game_GameModeData_instance_ + 68);
    v24 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v24 != 0) {
      v23 += *(char*)(v24 + 128);
    }
  }
  else {
    v23 = 0;
  }
  v30 = *(unsigned __int8*)(v22 + 442);
  if (*(_BYTE*)(v22 + 442) == 0) {
    if (*(_BYTE*)(v22 + 443) != 0) {
      v31 = v23 + *(char*)(v22 + 443);
      if (v31 <= 1) {
        v31 = 1;
      }
      if (v31 >= 99) {
        v30 = 99;
      }
      else {
        v30 = (unsigned int)v31;
      }
    }
    else {
      v30 = v23;
    }
  }
  if (*(_QWORD*)(v22 + 304) != 0 &&
          (*(_QWORD*)v32 = *(_QWORD*)(v22 + 304),
           (v29 = (__int64*)game_GrowthListFile_GetJob((__int64*)v32, v30,
                                                       6)) != nullptr) ||
      (*(_QWORD*)(v22 + 64) != 0 ? (v29 = *(__int64**)(v22 + 64))
                                 : (v29 = (__int64*)GameData_21c9988),
       v29 != nullptr)) {
  LABEL_62:
    ConditionMap_7ea800(v29);
    game_anonymous_ConditionMap_Add_7ebae0(GameData_21c96d8);
  }
LABEL_13:
  result = GameHr_7e8000((__int64)a2);
  if (*a2 == 0 || *(_BYTE*)*a2 == 0) {
    *(_QWORD*)&v32[8] = &GameData_1a8eb16;
    *(_QWORD*)v32 = game_HashString((__int64)&GameData_1a8eb16);
    v14 = AssetTableFile_7e7b20((__int64)a2, (unsigned __int64*)v32);
    v33_.v34 = "GMAP";
    v33_.v33 = game_HashString((__int64)"GMAP");
    v15 = AssetTableFile_7e7b20(v14, (unsigned __int64*)&v33_.v33);
    return GameHr_7e8000(v15);
  }
  return result;
}

void game_gmap_133fb00(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  int v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    _QWORD* v31;
    _QWORD* v32;
  } v31_;
  __int64 v33;

  v2 = *a1;
  v3 = a1[1];
  v31_.v32 = &GameData_1abd4d1;
  v31_.v31 = (_QWORD*)game_HashString((__int64)&GameData_1abd4d1);
  if (game_GameModeData_instance_ != 0 &&
      (v5 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v31_.v31)) != 0) {
    v6 = *(_DWORD*)(v5 + 32);
  }
  else {
    v6 = 3;
  }
  SpotMgr_1331320((void*)((__int64*)&v31_.v31), v2, v3, v6);
  v7 = v31_.v31;
  v8 = v31_.v32;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v31_.v31 != v31_.v32) {
    v10 = 0;
    v11 = nullptr;
    v12 = 0;
    while (1) {
      v13 = *v7;
      v14 = (_QWORD*)v10;
      if ((_QWORD*)v10 != v11) {
        v15 = *(_QWORD*)(v13 + 8);
        v16 = (unsigned __int64)v11 - v10 - 8;
        v14 = (_QWORD*)v10;
        if ((~(_BYTE)v16 & 0x18) == 0) {
        LABEL_14:
          if (v16 >= 0x18) {
            v14 += 2;
            while (1) {
              if (*(v14 - 2) == v15) {
                if (v14 - 2 != v11) {
                  goto LABEL_8;
                }
                goto LABEL_26;
              }
              if (*(v14 - 1) == v15) {
                --v14;
                goto LABEL_25;
              }
              if (*v14 == v15) {
                goto LABEL_25;
              }
              if (v14[1] == v15) {
                break;
              }
              v18 = v14 + 2;
              v14 += 4;
              if (v18 == v11) {
                goto LABEL_27;
              }
            }
            if (v14 + 1 != v11) {
              goto LABEL_8;
            }
          LABEL_26:
            v15 = *(_QWORD*)(v13 + 8);
          }
        LABEL_27:
          v19 = *(_QWORD*)(a2 + 32);
          v33 = v15;
          if (v19 == 0) {
            GameRoutine_60a310();
          }
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v19 + 48LL))(v19, &v33);
          if ((unsigned __int64)v11 < v12) {
            *v11++ = *(_QWORD*)(v13 + 8);
          }
          else {
            v20 = (unsigned __int64)v11 - v10;
            v21 = ((__int64)v11 - v10) >> 3;
            v22 = v21 + 1;
            if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
              GameRoutine_8875e0();
            }
            if ((__int64)(v12 - v10) >> 2 > v22) {
              v22 = (__int64)(v12 - v10) >> 2;
            }
            if (v12 - v10 >= 0x7FFFFFFFFFFFFFF8LL) {
              v23 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v23 = v22;
            }
            if (v23 != 0) {
              if (v23 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v24 = fw_memory_HeapManager_Allocate(*v9, 8 * v23, 16, 0);
            }
            else {
              v24 = 0;
            }
            v25 = *(_QWORD*)(v13 + 8);
            v12 = v24 + 8 * v23;
            v26 = v24 + v20 - 8 * v21;
            *(_QWORD*)(v24 + v20) = v25;
            v11 = (_QWORD*)(v24 + v20 + 8);
            memcpy(v26, v10, v20);
            if (v10 != 0) {
              v27 = 128;
              if (*(_QWORD*)(*v9 + 200) == 0) {
                v27 = 56;
              }
              nn_mem_StandardAllocator_Free(*v9 + v27, v10);
            }
            v10 = v26;
          }
          goto LABEL_8;
        }
        v17 = ((unsigned __int8)((unsigned int)v16 >> 3) + 1) & 3;
        v14 = (_QWORD*)v10;
        while (*v14 != v15) {
          ++v14;
          if (--v17 == 0) {
            goto LABEL_14;
          }
        }
      }
    LABEL_25:
      if (v14 == v11) {
        goto LABEL_26;
      }
    LABEL_8:
      if (++v7 == v8) {
        v7 = v31_.v31;
        if (v31_.v31 != nullptr) {
          goto LABEL_47;
        }
        goto LABEL_50;
      }
    }
  }
  v10 = 0;
  if (v31_.v31 != nullptr) {
  LABEL_47:
    v28 = *v9;
    v31_.v32 = v7;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(v28 + v29, (__int64)v7);
  }
LABEL_50:
  if (v10 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v30, v10);
  }
}

void game_gmap_1347e20()
{
  __int64 v0;
  __int16** v1;
  __int16** v2;
  __int64 v3;
  __int16** v4;
  unsigned __int64 v5;
  __int64 v6;
  __int16* v7;
  __int16* v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  GameHr_1348160();
  v0 = *(_QWORD*)(*GameData_212c790 + 8);
  v1 = *(__int16***)(v0 + 8);
  v2 = *(__int16***)(v0 + 16);
  if (v1 != v2) {
    v3 = 0;
    v4 = nullptr;
    v5 = 0;
    v6 = game_gmap_GmapClock_kDefaultTime_ptr;
    do {
      v7 = *v1;
      if ((*v1)[321] * (*v1)[320] * (*v1)[322] != 0) {
        v8 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                            ? game_gmap_GmapClock_instance_ + 8
                            : v6);
        if (((__int64)(*v1)[321] << 24) + ((__int64)(*v1)[320] << 32) +
                ((__int64)(*v1)[322] << 18) + ((__int64)v7[323] << 12) +
                ((__int64)v7[324] << 6) + v7[325] <
            (unsigned __int64)(((__int64)v8[1] << 24) + ((__int64)*v8 << 32) +
                               ((__int64)v8[2] << 18) + ((__int64)v8[3] << 12) +
                               ((__int64)v8[4] << 6) + v8[5])) {
          if ((unsigned __int64)v4 < v5) {
            *v4++ = v7;
          }
          else {
            v9 = (char*)v4 - v3;
            v10 = ((__int64)v4 - v3) >> 3;
            v11 = v10 + 1;
            if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
              GameRoutine_888610();
            }
            if ((__int64)(v5 - v3) >> 2 > v11) {
              v11 = (__int64)(v5 - v3) >> 2;
            }
            if (v5 - v3 >= 0x7FFFFFFFFFFFFFF8LL) {
              v12 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v12 = v11;
            }
            if (v12 != 0) {
              if (v12 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v13 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
            }
            else {
              v13 = 0;
            }
            v5 = v13 + 8 * v12;
            v14 = (unsigned __int64)v4 - v3;
            v15 = (__int64)&v9[v13 + -8 * v10];
            *(_QWORD*)&v9[v13] = v7;
            v4 = (__int16**)&v9[v13 + 8];
            memcpy(v15, v3, v14);
            if (v3 != 0) {
              v16 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v16 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v3);
            }
            v3 = v15;
          }
        }
      }
      ++v1;
    } while (v1 != v2);
    v17 = GameData_212c790;
    if ((__int16**)v3 != v4) {
      v18 = *GameData_212c790;
      if (*GameData_212c790 != 0) {
        v19 = (_QWORD*)v3;
      LABEL_29:
        v20 = *(_QWORD*)(v18 + 8);
        v22 = *(_QWORD*)(v20 + 8);
        v21 = *(_QWORD*)(v20 + 16);
        if (v21 == v22) {
          goto LABEL_44;
        }
        v23 = (v21 - v22) >> 3;
        v24 = 0;
        while (*(_QWORD*)(v22 + 8 * v24) != *v19) {
          if (v23 == ++v24) {
            goto LABEL_44;
          }
        }
        if ((v24 & 0x8000000000000000LL) == 0) {
          v25 = (unsigned int)v24;
          if ((unsigned int)v24 >= v23) {
            GameRoutine_13549e0();
          }
          v26 = *(_QWORD*)(v22 + 8LL * (unsigned int)v24);
          if (v26 != 0) {
            GameHr_133cc40(*(_QWORD*)(v22 + 8LL * (unsigned int)v24));
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v27 = 128;
            }
            else {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26);
            v22 = *(_QWORD*)(v20 + 8);
            v21 = *(_QWORD*)(v20 + 16);
          }
          v28 = v22 + 8 * v25;
          v29 = v21 - (v28 + 8);
          if (v21 != v28 + 8) {
            memmove(v28, v28 + 8, v21 - (v28 + 8));
          }
          *(_QWORD*)(v20 + 16) = v28 + v29;
        }
      LABEL_44:
        while (++v19 != v4) {
          v18 = *v17;
          if (*v17 != 0) {
            goto LABEL_29;
          }
        }
      }
    }
    if (v3 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v3);
    }
  }
}

__int64 game_gmap_1360f00(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  float v5;
  unsigned __int64 v6;
  float v7;
  float v8;
  _BOOL8 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 primeEm;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  unsigned __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  int v42;
  _BOOL4 v43;
  _BOOL4 v44;
  int v45;
  _QWORD* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64* v49;
  int v50;
  _BOOL4 v51;
  _BOOL4 v52;
  char v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;

  v2 = *(int*)(a2 + 16);
  *(_QWORD*)(a2 + 8) = v2;
  v5 = *(float*)(a1 + 32);
  v6 = *(_QWORD*)(a1 + 8);
  v7 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v5 * (float)v6) < v7) {
    v8 = v7 / v5;
    v9 = true;
    if (v6 >= 3) {
      v9 = (v6 & (v6 - 1)) != 0;
    }
    v10 = v9 | (2 * v6);
    v11 = vcvtps_u64_f32(v8);
    if (v10 <= v11) {
      v12 = v11;
    }
    else {
      v12 = v10;
    }
    if (v12 == 1) {
      v12 = 2;
    }
    else if ((v12 & (v12 - 1)) != 0) {
      primeEm = std___1___next_prime(v12);
      v6 = *(_QWORD*)(a1 + 8);
      v12 = primeEm;
    }
    if (v12 > v6) {
      goto LABEL_13;
    }
    if (v12 >= v6) {
      goto LABEL_65;
    }
    v20 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                         *(float*)(a1 + 32));
    if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
      v20 = std___1___next_prime(v20);
    }
    else {
      v21 = 1LL << (-(char)__clz(v20 - 1) & 63);
      if (v20 >= 2) {
        v20 = v21;
      }
    }
    if (v12 <= v20) {
      v12 = v20;
    }
    if (v12 >= v6) {
      goto LABEL_65;
    }
    if (v12 != 0) {
    LABEL_13:
      if (v12 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v14 = fw_memory_g_heap_manager_ptr;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      v16 = *(_QWORD*)a1;
      *(_QWORD*)a1 = v15;
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v17, v16);
      }
      v18 = v12 & 7;
      *(_QWORD*)(a1 + 8) = v12;
      if (v12 >= 8) {
        v19 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 48) = 0;
          v22 = *(_QWORD*)a1 + 8 * v19;
          v19 += 8;
          *(_QWORD*)(v22 + 56) = 0;
        } while ((v12 & 0x1FFFFFFFFFFFFFF8LL) != v19);
      }
      else {
        v19 = 0;
      }
      if ((v12 & 7) != 0) {
        v23 = 8 * v19;
        do {
          --v18;
          *(_QWORD*)(*(_QWORD*)a1 + v23) = 0;
          v23 += 8;
        } while (v18 != 0);
      }
      v25 = a1 + 16;
      v24 = *(_QWORD**)(a1 + 16);
      if (v24 != nullptr) {
        v26 = v24[1];
        v27 = v12 - 1;
        if ((v12 & (v12 - 1)) != 0) {
          if (v26 >= v12) {
            v26 %= v12;
          }
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v26) = v25;
          while (1) {
            v28 = (_QWORD*)*v24;
            if (*v24 == 0) {
              break;
            }
            v29 = v28[1];
            if (v29 >= v12) {
              v29 %= v12;
            }
            if (v29 == v26) {
              v24 = (_QWORD*)*v24;
            }
            else {
              v30 = (_QWORD*)*v24;
              if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v29) != 0) {
                do {
                  v31 = v30;
                  v30 = (_QWORD*)*v30;
                } while (v30 != nullptr &&
                         *((_DWORD*)v28 + 4) == *((_DWORD*)v30 + 4));
                *v24 = v30;
                *v31 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v29);
                **(_QWORD**)(*(_QWORD*)a1 + 8 * v29) = v28;
              }
              else {
                *(_QWORD*)(*(_QWORD*)a1 + 8 * v29) = v24;
                v24 = v28;
                v26 = v29;
              }
            }
          }
        }
        else {
          v32 = v26 & v27;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v32) = v25;
          while (1) {
            v33 = (_QWORD*)*v24;
            if (*v24 == 0) {
              break;
            }
            v34 = v33[1] & v27;
            if (v34 == v32) {
              v24 = (_QWORD*)*v24;
            }
            else {
              v35 = (_QWORD*)*v24;
              if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v34) != 0) {
                do {
                  v36 = v35;
                  v35 = (_QWORD*)*v35;
                } while (v35 != nullptr &&
                         *((_DWORD*)v33 + 4) == *((_DWORD*)v35 + 4));
                *v24 = v35;
                *v36 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v34);
                **(_QWORD**)(*(_QWORD*)a1 + 8 * v34) = v33;
              }
              else {
                *(_QWORD*)(*(_QWORD*)a1 + 8 * v34) = v24;
                v24 = v33;
                v32 = v34;
              }
            }
          }
        }
      }
    }
    else {
      v37 = *(_QWORD*)a1;
      *(_QWORD*)a1 = 0;
      if (v37 != 0) {
        v38 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v37);
      }
      *(_QWORD*)(a1 + 8) = 0;
    }
  LABEL_65:
    v6 = *(_QWORD*)(a1 + 8);
  }
  v39 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v40 = v2;
    if (v6 <= v2) {
      v40 = v2 % v6;
    }
    v41 = *(__int64**)(*(_QWORD*)a1 + 8 * v40);
    if (v41 == nullptr) {
      v55 = *(_QWORD*)(a2 + 8);
      v46 = nullptr;
      if (v55 < v6) {
        goto LABEL_92;
      }
      goto LABEL_91;
    }
    v42 = 0;
    do {
      v46 = v41;
      v41 = (__int64*)*v41;
      if (v41 == nullptr) {
        break;
      }
      v47 = v41[1];
      v48 = v47;
      if (v47 >= v6) {
        v48 = v47 % v6;
      }
      if (v48 != v40) {
        break;
      }
      v43 = v47 == v2 && *((_DWORD*)v41 + 4) == *(_DWORD*)(a2 + 16);
      v44 = v43 != (v42 & 1);
      v45 = v42 & v44;
      v42 |= v44;
    } while (v45 != 1);
  }
  else {
    v49 = *(__int64**)(*(_QWORD*)a1 + 8 * (v39 & v2));
    if (v49 == nullptr) {
      v55 = *(_QWORD*)(a2 + 8);
      v46 = nullptr;
      goto LABEL_102;
    }
    v50 = 0;
    do {
      v46 = v49;
      v49 = (__int64*)*v49;
      if (v49 == nullptr) {
        break;
      }
      v54 = v49[1];
      if ((v54 & v39) != (v39 & v2)) {
        break;
      }
      v51 = v54 == v2 && *((_DWORD*)v49 + 4) == *(_DWORD*)(a2 + 16);
      v52 = v51 != (v50 & 1);
      v53 = v50 & v52;
      v50 |= v52;
    } while ((v53 & 1) == 0);
  }
  v55 = *(_QWORD*)(a2 + 8);
  if ((v6 & v39) != 0) {
    if (v55 < v6) {
    LABEL_92:
      if (v46 != nullptr) {
        goto LABEL_93;
      }
    LABEL_103:
      *(_QWORD*)a2 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 16) = a2;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = a1 + 16;
      if (*(_QWORD*)a2 == 0) {
        goto LABEL_109;
      }
      v56 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
      if ((v6 & v39) != 0) {
        if (v56 >= v6) {
          v56 %= v6;
        }
      }
      else {
        v56 &= v39;
      }
      goto LABEL_108;
    }
  LABEL_91:
    v55 %= v6;
    goto LABEL_92;
  }
LABEL_102:
  v55 &= v39;
  if (v46 == nullptr) {
    goto LABEL_103;
  }
LABEL_93:
  *(_QWORD*)a2 = *v46;
  *v46 = a2;
  if (*(_QWORD*)a2 != 0) {
    v56 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
    if ((v6 & v39) == 0) {
      v56 &= v39;
      if (v56 == v55) {
        goto LABEL_109;
      }
      goto LABEL_108;
    }
    if (v56 >= v6) {
      v56 %= v6;
    }
    if (v56 != v55) {
    LABEL_108:
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = a2;
    }
  }
LABEL_109:
  ++*(_QWORD*)(a1 + 24);
  return a2;
}

void game_gmap_14ab9e0(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  char* v14;
  unsigned int i;
  unsigned int v16;
  __int64* v17;
  signed __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31[3];
  struct {
    __int64* v32;
    __int64* v33;
    unsigned __int64 v34;
  } v32_;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v2 = *(_QWORD*)(***(_QWORD***)(a1 + 208) + 112LL);
  v3 = game_HashString(*(_QWORD*)(v2 + 80)),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v30 = a1;
  if (v3 == 0) {
    goto LABEL_25;
  }
  v4 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_25;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v3;
    if (v3 >= v4) {
      v7 = v3 % v4;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v7);
  if (v8 == nullptr || (v9 = (_QWORD*)*v8) == nullptr) {
  LABEL_25:
    v11 = 0;
    goto LABEL_26;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v12 = v9[1];
      if (v12 == v3) {
        if (v9[2] == v3) {
          goto LABEL_56;
        }
      }
      else if ((v12 & v6) != v7) {
        goto LABEL_25;
      }
      v9 = (_QWORD*)*v9;
      v11 = 0;
      if (v9 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_25;
    }
  LABEL_15:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_15;
  }
LABEL_56:
  v11 = v9[3];
LABEL_26:
  v13 = *(unsigned __int8*)(v2 + 88);
  v32_.v33 = nullptr;
  v32_.v34 = 0;
  v32_.v32 = nullptr;
  if (v13 != 0) {
    v14 = nullptr;
    for (i = 0; i < v16; ++i) {
      if ((unsigned __int64)v14 < v32_.v34) {
        *(_QWORD*)v14 = v11;
        v14 += 8;
      }
      else {
        v17 = v32_.v32;
        v18 = v14 - (char*)v32_.v32;
        v19 = (v14 - (char*)v32_.v32) >> 3;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
          GameRoutine_6e5c60(),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        v21 = v32_.v34 - (_QWORD)v32_.v32;
        if ((__int64)(v32_.v34 - (_QWORD)v32_.v32) >> 2 > v20) {
          v20 = v21 >> 2;
        }
        if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            GameRoutine_60a210(),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          v23 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        else {
          v23 = 0;
        }
        v24 = v23 + 8 * v22;
        v25 = v14 - (char*)v32_.v32;
        v26 = (__int64*)(v23 + v18 - 8 * v19);
        *(_QWORD*)(v23 + v18) = v11;
        v14 = (char*)(v23 + v18 + 8);
        memcpy((__int64)v26, (__int64)v17, v25),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v32_.v32 = v26;
        v32_.v34 = v24;
        if (v17 != nullptr) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v17),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
      v16 = *(unsigned __int8*)(v2 + 88);
      v32_.v33 = (__int64*)v14;
    }
  }
  game_8af240(v31, &v32_.v32),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  game_8ae640(v31, 0, 0),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v31[0] != 0) {
    v31[1] = v31[0];
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v31[0]),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  GameRoutine_176a400(v30, &v32_.v32, *(unsigned __int16*)(v2 + 90)),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (GameData_2241720 != 0) {
    *(_BYTE*)(GameData_2241720 + 1688) = 1;
  }
  if (v32_.v32 != nullptr) {
    v32_.v33 = v32_.v32;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  (__int64)v32_.v32),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
}

__int64 game_gmap_14d5b80(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  unsigned int* v18;
  __int64 v19;
  struct {
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v21_;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v6 = *v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v8 = *(_DWORD*)(v6 + 540);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v6 + 24);
    v12 = *(_QWORD*)(v6 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = *(unsigned int**)v6;
  v21_.v22 = 0;
  v21_.v23 = 0;
  v21_.v21 = 0;
  GameSideStoryData_12b50c0(*(_QWORD*)GameData_212c7b8[0], &v21_.v21);
  v15 = v21_.v21;
  v16 = v21_.v22;
  if (v21_.v21 == v21_.v22) {
    v17 = nullptr;
    if (v21_.v21 != 0) {
    LABEL_19:
      v21_.v22 = v15;
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v15);
    }
  }
  else {
    do {
      v17 = *(_BYTE**)v15;
      v18 = *(unsigned int**)(**(_QWORD**)v15 + 200LL);
      if (v18 != nullptr && game_gmap_SpotMgr_FindSpot(v18) == v14 &&
          v17[8] == 3) {
        v15 = v21_.v21;
        if (v21_.v21 == 0) {
          return game_menu_16af0a0(a1, *(_QWORD*)(*(_QWORD*)v17 + 8LL));
        }
        goto LABEL_19;
      }
      v15 += 8;
    } while (v15 != v16);
    v17 = nullptr;
    v15 = v21_.v21;
    if (v21_.v21 != 0) {
      goto LABEL_19;
    }
  }
  return game_menu_16af0a0(a1, *(_QWORD*)(*(_QWORD*)v17 + 8LL));
}

void game_gmap_14d5d80(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
  } v24_;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v6 = *v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v8 = *(_DWORD*)(v6 + 540);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v6 + 24);
    v12 = *(_QWORD*)(v6 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = *(unsigned int**)v6;
  v24_.v25 = 0;
  v24_.v26 = 0;
  v24_.v24 = 0;
  GameSideStoryData_12b50c0(*(_QWORD*)GameData_212c7b8[0], &v24_.v24);
  v15 = v24_.v24;
  v16 = v24_.v25;
  if (v24_.v24 == v24_.v25) {
    v17 = 0;
    if (v24_.v24 != 0) {
    LABEL_19:
      v24_.v25 = v15;
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v15);
    }
  }
  else {
    do {
      v17 = *(_QWORD*)v15;
      v18 = *(unsigned int**)(**(_QWORD**)v15 + 200LL);
      if (v18 != nullptr && game_gmap_SpotMgr_FindSpot(v18) == v14 &&
          *(_BYTE*)(v17 + 8) == 3) {
        v15 = v24_.v24;
        if (v24_.v24 == 0) {
          goto LABEL_22;
        }
        goto LABEL_19;
      }
      v15 += 8;
    } while (v15 != v16);
    v17 = 0;
    v15 = v24_.v24;
    if (v24_.v24 != 0) {
      goto LABEL_19;
    }
  }
LABEL_22:
  v20 = *(_DWORD*)(a1 + 224);
  if (v20 == 2) {
  LABEL_26:
    v21 = game_script_hub_ui_g_talk_result;
    if (game_script_hub_ui_g_talk_result == 2) {
      *(_BYTE*)(a1 + 222) = 1;
    }
    else {
      if (game_script_hub_ui_g_talk_result != 1) {
        goto LABEL_53;
      }
      *(_WORD*)(a1 + 222) = 257;
    }
    if (*(_DWORD*)(a1 + 224) == 2) {
      if (game_gmap_GmapClock_instance_ != 0) {
        v22 = game_gmap_GmapClock_instance_ + 20;
      }
      else {
        v22 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      if (*(_BYTE*)(a1 + 220) == 1) {
        v23 = *(_QWORD*)v22;
        *(_DWORD*)(a1 + 216) = *(_DWORD*)(v22 + 8);
        *(_QWORD*)(a1 + 208) = v23;
        goto LABEL_52;
      }
      *(_WORD*)(a1 + 208) = *(_WORD*)v22;
      *(_WORD*)(a1 + 210) = *(_WORD*)(v22 + 2);
      *(_WORD*)(a1 + 212) = *(_WORD*)(v22 + 4);
      *(_WORD*)(a1 + 214) = *(_WORD*)(v22 + 6);
      *(_WORD*)(a1 + 216) = *(_WORD*)(v22 + 8);
      *(_WORD*)(a1 + 218) = *(_WORD*)(v22 + 10);
    }
    else {
      if (*(_BYTE*)(v17 + 22) == 1) {
        v24_.v24 = *(_QWORD*)(v17 + 10);
        LODWORD(v24_.v25) = *(_DWORD*)(v17 + 18);
      }
      else {
        GameSideStoryData_12b3ba0((void*)((__int64)&v24_.v24), v17);
        if ((v24_.v25 & 0x100000000LL) == 0) {
          GameRoutine_8123d0();
        }
      }
      if (*(_BYTE*)(a1 + 220) == 1) {
        *(_QWORD*)(a1 + 208) = v24_.v24;
        *(_DWORD*)(a1 + 216) = v24_.v25;
        goto LABEL_52;
      }
      *(_QWORD*)(a1 + 208) = v24_.v24;
      *(_DWORD*)(a1 + 216) = v24_.v25;
    }
    *(_BYTE*)(a1 + 220) = 1;
    goto LABEL_52;
  }
  if (v17 != 0) {
    if ((*(_BYTE*)(v17 + 22) & 1) != 0) {
      goto LABEL_26;
    }
    GameSideStoryData_12b3ba0((void*)((__int64)&v24_.v24), v17);
    if ((v24_.v25 & 0x100000000LL) != 0) {
      goto LABEL_26;
    }
  }
  else if (v20 != 3) {
    goto LABEL_52;
  }
  v21 = game_script_hub_ui_g_talk_result;
  if (game_script_hub_ui_g_talk_result != 2) {
    if (game_script_hub_ui_g_talk_result != 1) {
    LABEL_53:
      if (v21 == 0) {
        return;
      }
      goto LABEL_54;
    }
    *(_WORD*)(a1 + 222) = 257;
  LABEL_52:
    v21 = game_script_hub_ui_g_talk_result;
    goto LABEL_53;
  }
  *(_BYTE*)(a1 + 222) = 1;
LABEL_54:
  game_script_hub_ui_g_talk_result = 0;
}

void game_gmap_14d66c0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  unsigned int* v19;
  __int64 v20;
  __int16* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  _BYTE* v26;
  char v27;
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v28_;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v6 = *v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v8 = *(_DWORD*)(v6 + 540);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v6 + 24);
    v12 = *(_QWORD*)(v6 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = *(unsigned int**)v6;
  v28_.v29 = 0;
  v28_.v30 = 0;
  v28_.v28 = 0;
  GameSideStoryData_12b50c0(*(_QWORD*)GameData_212c7b8[0], &v28_.v28);
  v15 = v28_.v28;
  v16 = v28_.v29;
  if (v28_.v28 == v28_.v29) {
    v17 = 1;
    if (v28_.v28 == 0) {
      goto LABEL_28;
    }
  }
  else {
    do {
      v18 = *(_QWORD*)v15;
      v19 = *(unsigned int**)(**(_QWORD**)v15 + 200LL);
      if (v19 != nullptr && game_gmap_SpotMgr_FindSpot(v19) == v14 &&
          *(_BYTE*)(v18 + 8) == 3) {
        v17 = 0;
        v15 = v28_.v28;
        if (v28_.v28 != 0) {
          goto LABEL_25;
        }
        goto LABEL_28;
      }
      v15 += 8;
    } while (v15 != v16);
    v17 = 1;
    v15 = v28_.v28;
    if (v28_.v28 == 0) {
      goto LABEL_28;
    }
  }
LABEL_25:
  v28_.v29 = v15;
  v20 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v20 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                v15);
LABEL_28:
  if ((v17 & 1) == 0 && *(_BYTE*)(a1 + 220) == 1 &&
      (*(_BYTE*)(a1 + 223) & 1) != 0) {
    v21 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                         ? game_gmap_GmapClock_instance_ + 8
                         : game_gmap_GmapClock_kDefaultTime_ptr);
    if ((int)Dir_70df40(v21, (__int16*)(a1 + 208)) >= 1) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2252810,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_2252810) != 0) {
        GameData_2252628 = 0;
        GameData_2252630 = 0;
        GameData_2252638 = 0;
        GameData_2252640 = 0;
        GameData_2252648 = 0;
        GameData_2252650 = 19;
        GameData_2252670 = 500;
        GameData_2252610 = 13;
        GameData_2252618 = 0;
        GameData_2252620 = (__int64)game_gmap_14d6b00;
        GameData_2252678 = 0;
        GameData_2252680 = 0;
        GameData_2252688 = 0;
        GameData_2252658 = 0;
        GameData_2252660 = (__int64)game_80a680_ptr[0];
        GameData_2252690 = 10;
        GameData_22526b0 = 0;
        GameData_22526b8 = 0;
        GameData_22526c0 = 0;
        GameData_22526c8 = 0;
        GameData_22526d0 = 13;
        GameData_22526e8 = 0;
        GameData_22526f0 = 0;
        GameData_22526f8 = 0;
        GameData_2252700 = 0;
        GameData_2252708 = 0;
        GameData_2252710 = 13;
        GameData_2252728 = 0;
        GameData_2252730 = 0;
        GameData_2252738 = 0;
        GameData_2252740 = 0;
        GameData_2252748 = 0;
        GameData_2252750 = 13;
        GameData_2252768 = 0;
        GameData_2252770 = 0;
        GameData_2252778 = 0;
        GameData_2252780 = 0;
        GameData_2252788 = 0;
        GameData_2252790 = 13;
        GameData_2252798 = 0;
        GameData_22527a0 = (__int64)game_gmap_14d6b00;
        GameData_22527a8 = 0;
        GameData_22527b0 = 0;
        GameData_22527b8 = 0;
        GameData_22527c0 = 0;
        GameData_22527c8 = 0;
        GameData_22527d0 = 0;
        GameData_22527f8 = 0;
        GameData_2252800 = 0;
        GameData_2252808 = 0;
        GameData_22527f0 = 0;
        GameData_22527e0 = 0;
        GameData_22527e8 = 0;
        GameData_22527d8 = 0;
        GameData_2252698 = 0;
        GameData_22526a0 = (__int64)GameData_212c720;
        GameData_22526d8 = 0;
        GameData_22526e0 = (__int64)game_gmap_14d6b80;
        GameData_2252718 = 0;
        GameData_2252720 = (__int64)GameHr_14d6ba0;
        GameData_2252758 = 0;
        GameData_2252760 = (__int64)GameRoutine_14d6c10;
        __cxa_guard_release((__int64)&GameData_2252810);
      }
      v22 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
      v23 = GameData_212c608[0];
      *(_QWORD*)(v22 + 88) = 0;
      *(_QWORD*)(v22 + 96) = 0;
      *(_QWORD*)(v22 + 104) = 0;
      *(_QWORD*)(v22 + 112) = 0;
      *(_QWORD*)(v22 + 120) = 0;
      *(_QWORD*)(v22 + 128) = 0;
      *(_WORD*)(v22 + 136) = 0;
      *(_QWORD*)(v22 + 16) = 0;
      *(_QWORD*)(v22 + 24) = "NULL";
      *(_QWORD*)(v22 + 32) = 0;
      v24 = (_QWORD*)(v22 + 32);
      *(_QWORD*)(v22 + 138) = 0;
      *(_QWORD*)(v22 + 144) = 0;
      *(_QWORD*)(v22 + 40) = 0;
      *(_QWORD*)(v22 + 48) = 0;
      *(_QWORD*)(v22 + 56) = 0;
      *(_QWORD*)(v22 + 64) = 0;
      *(_QWORD*)(v22 + 72) = 0;
      *(_QWORD*)(v22 + 80) = 0;
      *(_QWORD*)v22 = v23 + 16;
      *(_QWORD*)(v22 + 8) = 0;
      game_ProcInst_Register(v22);
      *(_QWORD*)v22 =
          game_gmap_anonymous_ProcProgressScheduleBeforeSideStory_vtable;
      *(_QWORD*)(v22 + 152) = *(_QWORD*)(a1 + 208);
      *(_DWORD*)(v22 + 160) = *(_DWORD*)(a1 + 216);
      v25 = *(_QWORD*)(a1 + 40);
      if (v25 != 0) {
        *(_QWORD*)(v25 + 48) = v22;
        *(_QWORD*)(v22 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v22;
      *(_QWORD*)(v22 + 24) = "ProcProgressScheduleBeforeSideStory";
      *(_QWORD*)(v22 + 32) = a1;
      *(_DWORD*)(v22 + 140) = (unsigned int)game_HashString32(
          "ProcProgressScheduleBeforeSideStory");
      *(_QWORD*)(v22 + 8) = &GameData_2252610;
      *(_QWORD*)(v22 + 16) = &GameData_2252610;
      *(_QWORD*)(v22 + 64) = 0;
      *(_QWORD*)(v22 + 72) = 24;
      *(_QWORD*)(v22 + 80) = 1;
      (*(void (**)(__int64))(*(_QWORD*)v22 + 32LL))(v22);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 136LL))(v22) & 1) != 0 &&
          (*(_WORD*)(v22 + 136) & 0x100) == 0) {
        *(_WORD*)(v22 + 136) |= 0x100u;
      }
      v26 = (_BYTE*)*v24;
      v27 = *(_BYTE*)(*v24 + 138LL);
      if (v27 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v26 + 64LL))(*v24);
        v27 = v26[138];
      }
      v26[138] = v27 + 1;
      *(_WORD*)(v22 + 136) |= 2u;
    }
  }
}

void game_gmap_151e060(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  char** v4;
  unsigned __int64 v7;
  const char* v8;
  const char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  const char* v16;
  char** v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  const char* v23;
  __int128 v24;
  _QWORD* v25;
  __int64 v26;
  struct {
    _QWORD v27[2];
    const char* v28;
  } v27_;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;

  v3 = a1 + 176;
  v4 = &GameData_204a230;
  v7 = 0;
  v8 = "_RouteColor";
  do {
    v9 = v4[v7 / 8];
    v10 = strlen(v9);
    if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v11 = v10;
    if (v10 >= 0x17) {
      v13 = v3;
      v14 = a2;
      v15 = a3;
      v16 = v8;
      v17 = v4;
      if ((v10 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v10 | 7) + 1;
      }
      v19 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18, 16, 0);
      v20 = v18 | 1;
      v4 = v17;
      v8 = v16;
      a3 = v15;
      a2 = v14;
      v3 = v13;
      v12 = (char*)v19;
      v27_.v27[1] = v11;
      v27_.v28 = (const char*)v19;
      v27_.v27[0] = v20;
    LABEL_11:
      memmove((__int64)v12, (__int64)v9, v11);
      goto LABEL_12;
    }
    v12 = (char*)v27_.v27 + 1;
    LOBYTE(v27_.v27[0]) = 2 * v10;
    if (v10 != 0) {
      goto LABEL_11;
    }
  LABEL_12:
    v12[v11] = 0;
    GameRoutine_1a09ce0((__int64)v27_.v27, v8, 0xBu);
    if ((v27_.v27[0] & 1) != 0) {
      v21 = v27_.v28;
    }
    else {
      v21 = (char*)v27_.v27 + 1;
    }
    v22 = fs_609260(a2 + 800, v21, 1);
    if ((a3 & 1) != 0) {
      v23 = *(const char**)(v22 + 24);
      if (v23 != nullptr) {
        sscanf(v23, "%f,%f,%f,%f", &v32, &v31, &v30, &v29);
        *(_QWORD*)&v24 = __PAIR64__(v31, v32);
        *((_QWORD*)&v24 + 1) = __PAIR64__(v29, v30);
        *(_OWORD*)(v3 + v7) = v24;
        if ((v27_.v27[0] & 1) == 0) {
          goto LABEL_2;
        }
      }
      else {
        v25 = (_QWORD*)(v3 + v7);
        *v25 = 0;
        v25[1] = 0;
        if ((v27_.v27[0] & 1) == 0) {
          goto LABEL_2;
        }
      }
    }
    else {
      GameRoutine_609140(v22, (__int64)"%f,%f,%f,%f",
                         COERCE_FLOAT(*(_OWORD*)(v3 + v7)),
                         COERCE_FLOAT(HIDWORD(*(_QWORD*)(v3 + v7))),
                         COERCE_FLOAT(*(_QWORD*)(v3 + v7 + 8)),
                         COERCE_FLOAT(DWORD3(*(_OWORD*)(v3 + v7))));
      if ((v27_.v27[0] & 1) == 0) {
        goto LABEL_2;
      }
    }
    if (v27_.v28 != nullptr) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v27_.v28);
    }
  LABEL_2:
    v7 += 16LL;
  } while (v7 != 96);
}

void game_gmap_151e8b0(float* a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  float* v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  float* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  float* v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  float* v23;
  __int64 v24;
  __int64 v25;
  const char* v26;
  __int64 v27;
  float* v28;
  __int64 v29;
  __int64 v30;
  const char* v31;
  __int64 v32;
  float* v33;
  __int64 v34;
  __int64 v35;
  const char* v36;
  __int64 v37;
  float* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41[3];

  v6 = a1 + 84;
  strcpy((char*)v41, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v41, "MIN_SIZE", 8u);
  if ((v41[0] & 1) != 0) {
    v7 = (const char*)v41[2];
  }
  else {
    v7 = (char*)v41 + 1;
  }
  v8 = fs_609260(a2 + 800, v7, 1);
  if ((a3 & 1) != 0) {
    v9 = *(_QWORD*)(v8 + 24);
    if (v9 != 0) {
      if (*(_BYTE*)v9 == 48 && *(_BYTE*)(v9 + 1) == 120) {
        sscanf((const char*)v9, "%x", v6);
      }
      else {
        sscanf((const char*)v9, "%f", v6);
      }
      if ((v41[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
    else {
      *v6 = 0x0.0p+0f;
      if ((v41[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
  }
  else {
    GameRoutine_609140(v8, (__int64)"0x%x (%f)", *(_DWORD*)v6, *v6);
    if ((v41[0] & 1) == 0) {
      goto LABEL_19;
    }
  }
  if (v41[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v41[2]);
  }
LABEL_19:
  strcpy((char*)v41, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v41, "MID_SIZE", 8u);
  if ((v41[0] & 1) != 0) {
    v11 = (const char*)v41[2];
  }
  else {
    v11 = (char*)v41 + 1;
  }
  v12 = fs_609260(a2 + 800, v11, 1);
  v13 = a1 + 85;
  if ((a3 & 1) != 0) {
    v14 = *(_QWORD*)(v12 + 24);
    if (v14 != 0) {
      if (*(_BYTE*)v14 == 48 && *(_BYTE*)(v14 + 1) == 120) {
        sscanf((const char*)v14, "%x", v13);
      }
      else {
        sscanf((const char*)v14, "%f", v13);
      }
      if ((v41[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
    else {
      *v13 = 0x0.0p+0f;
      if ((v41[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
  }
  else {
    GameRoutine_609140(v12, (__int64)"0x%x (%f)", *(_DWORD*)v13, *v13);
    if ((v41[0] & 1) == 0) {
      goto LABEL_37;
    }
  }
  if (v41[2] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v41[2]);
  }
LABEL_37:
  strcpy((char*)v41, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v41, "MAX_SIZE", 8u);
  if ((v41[0] & 1) != 0) {
    v16 = (const char*)v41[2];
  }
  else {
    v16 = (char*)v41 + 1;
  }
  v17 = fs_609260(a2 + 800, v16, 1);
  v18 = a1 + 86;
  if ((a3 & 1) != 0) {
    v19 = *(_QWORD*)(v17 + 24);
    if (v19 != 0) {
      if (*(_BYTE*)v19 == 48 && *(_BYTE*)(v19 + 1) == 120) {
        sscanf((const char*)v19, "%x", v18);
      }
      else {
        sscanf((const char*)v19, "%f", v18);
      }
      if ((v41[0] & 1) == 0) {
        goto LABEL_55;
      }
    }
    else {
      *v18 = 0x0.0p+0f;
      if ((v41[0] & 1) == 0) {
        goto LABEL_55;
      }
    }
  }
  else {
    GameRoutine_609140(v17, (__int64)"0x%x (%f)", *(_DWORD*)v18, *v18);
    if ((v41[0] & 1) == 0) {
      goto LABEL_55;
    }
  }
  if (v41[2] != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v41[2]);
  }
LABEL_55:
  strcpy((char*)v41, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v41, "PERIOD", 6u);
  if ((v41[0] & 1) != 0) {
    v21 = (const char*)v41[2];
  }
  else {
    v21 = (char*)v41 + 1;
  }
  v22 = fs_609260(a2 + 800, v21, 1);
  v23 = a1 + 87;
  if ((a3 & 1) != 0) {
    v24 = *(_QWORD*)(v22 + 24);
    if (v24 != 0) {
      if (*(_BYTE*)v24 == 48 && *(_BYTE*)(v24 + 1) == 120) {
        sscanf((const char*)v24, "%x", v23);
      }
      else {
        sscanf((const char*)v24, "%f", v23);
      }
      if ((v41[0] & 1) == 0) {
        goto LABEL_73;
      }
    }
    else {
      *v23 = 0x0.0p+0f;
      if ((v41[0] & 1) == 0) {
        goto LABEL_73;
      }
    }
  }
  else {
    GameRoutine_609140(v22, (__int64)"0x%x (%f)", *(_DWORD*)v23, *v23);
    if ((v41[0] & 1) == 0) {
      goto LABEL_73;
    }
  }
  if (v41[2] != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v41[2]);
  }
LABEL_73:
  strcpy((char*)v41, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v41, "MIN_SIZE_SMALL", 0xEu);
  if ((v41[0] & 1) != 0) {
    v26 = (const char*)v41[2];
  }
  else {
    v26 = (char*)v41 + 1;
  }
  v27 = fs_609260(a2 + 800, v26, 1);
  v28 = a1 + 88;
  if ((a3 & 1) != 0) {
    v29 = *(_QWORD*)(v27 + 24);
    if (v29 != 0) {
      if (*(_BYTE*)v29 == 48 && *(_BYTE*)(v29 + 1) == 120) {
        sscanf((const char*)v29, "%x", v28);
      }
      else {
        sscanf((const char*)v29, "%f", v28);
      }
      if ((v41[0] & 1) == 0) {
        goto LABEL_91;
      }
    }
    else {
      *v28 = 0x0.0p+0f;
      if ((v41[0] & 1) == 0) {
        goto LABEL_91;
      }
    }
  }
  else {
    GameRoutine_609140(v27, (__int64)"0x%x (%f)", *(_DWORD*)v28, *v28);
    if ((v41[0] & 1) == 0) {
      goto LABEL_91;
    }
  }
  if (v41[2] != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  v41[2]);
  }
LABEL_91:
  strcpy((char*)v41, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v41, "MID_SIZE_SMALL", 0xEu);
  if ((v41[0] & 1) != 0) {
    v31 = (const char*)v41[2];
  }
  else {
    v31 = (char*)v41 + 1;
  }
  v32 = fs_609260(a2 + 800, v31, 1);
  v33 = a1 + 89;
  if ((a3 & 1) != 0) {
    v34 = *(_QWORD*)(v32 + 24);
    if (v34 != 0) {
      if (*(_BYTE*)v34 == 48 && *(_BYTE*)(v34 + 1) == 120) {
        sscanf((const char*)v34, "%x", v33);
      }
      else {
        sscanf((const char*)v34, "%f", v33);
      }
      if ((v41[0] & 1) == 0) {
        goto LABEL_109;
      }
    }
    else {
      *v33 = 0x0.0p+0f;
      if ((v41[0] & 1) == 0) {
        goto LABEL_109;
      }
    }
  }
  else {
    GameRoutine_609140(v32, (__int64)"0x%x (%f)", *(_DWORD*)v33, *v33);
    if ((v41[0] & 1) == 0) {
      goto LABEL_109;
    }
  }
  if (v41[2] != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  v41[2]);
  }
LABEL_109:
  strcpy((char*)v41, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v41, "MAX_SIZE_SMALL", 0xEu);
  if ((v41[0] & 1) != 0) {
    v36 = (const char*)v41[2];
  }
  else {
    v36 = (char*)v41 + 1;
  }
  v37 = fs_609260(a2 + 800, v36, 1);
  v38 = a1 + 90;
  if ((a3 & 1) == 0) {
    GameRoutine_609140(v37, (__int64)"0x%x (%f)", *(_DWORD*)v38, *v38);
    if ((v41[0] & 1) == 0) {
      return;
    }
    goto LABEL_123;
  }
  v39 = *(_QWORD*)(v37 + 24);
  if (v39 == 0) {
    *v38 = 0x0.0p+0f;
    if ((v41[0] & 1) == 0) {
      return;
    }
    goto LABEL_123;
  }
  if (*(_BYTE*)v39 == 48 && *(_BYTE*)(v39 + 1) == 120) {
    sscanf((const char*)v39, "%x", v38);
  }
  else {
    sscanf((const char*)v39, "%f", v38);
  }
  if ((v41[0] & 1) != 0) {
  LABEL_123:
    if (v41[2] != 0) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v41[2]);
    }
  }
}

void game_gmap_151efe0(float* a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  float* v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  float* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  float* v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  float* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26[3];

  v6 = a1 + 91;
  strcpy((char*)v26, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v26, "NONE", 4u);
  if ((v26[0] & 1) != 0) {
    v7 = (const char*)v26[2];
  }
  else {
    v7 = (char*)v26 + 1;
  }
  v8 = fs_609260(a2 + 800, v7, 1);
  if ((a3 & 1) != 0) {
    v9 = *(_QWORD*)(v8 + 24);
    if (v9 != 0) {
      if (*(_BYTE*)v9 == 48 && *(_BYTE*)(v9 + 1) == 120) {
        sscanf((const char*)v9, "%x", v6);
      }
      else {
        sscanf((const char*)v9, "%f", v6);
      }
      if ((v26[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
    else {
      *v6 = 0x0.0p+0f;
      if ((v26[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
  }
  else {
    GameRoutine_609140(v8, (__int64)"0x%x (%f)", *(_DWORD*)v6, *v6);
    if ((v26[0] & 1) == 0) {
      goto LABEL_19;
    }
  }
  if (v26[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v26[2]);
  }
LABEL_19:
  strcpy((char*)v26, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v26, "SMALL", 5u);
  if ((v26[0] & 1) != 0) {
    v11 = (const char*)v26[2];
  }
  else {
    v11 = (char*)v26 + 1;
  }
  v12 = fs_609260(a2 + 800, v11, 1);
  v13 = a1 + 92;
  if ((a3 & 1) != 0) {
    v14 = *(_QWORD*)(v12 + 24);
    if (v14 != 0) {
      if (*(_BYTE*)v14 == 48 && *(_BYTE*)(v14 + 1) == 120) {
        sscanf((const char*)v14, "%x", v13);
      }
      else {
        sscanf((const char*)v14, "%f", v13);
      }
      if ((v26[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
    else {
      *v13 = 0x0.0p+0f;
      if ((v26[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
  }
  else {
    GameRoutine_609140(v12, (__int64)"0x%x (%f)", *(_DWORD*)v13, *v13);
    if ((v26[0] & 1) == 0) {
      goto LABEL_37;
    }
  }
  if (v26[2] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v26[2]);
  }
LABEL_37:
  strcpy((char*)v26, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v26, "NORMAL", 6u);
  if ((v26[0] & 1) != 0) {
    v16 = (const char*)v26[2];
  }
  else {
    v16 = (char*)v26 + 1;
  }
  v17 = fs_609260(a2 + 800, v16, 1);
  v18 = a1 + 93;
  if ((a3 & 1) != 0) {
    v19 = *(_QWORD*)(v17 + 24);
    if (v19 != 0) {
      if (*(_BYTE*)v19 == 48 && *(_BYTE*)(v19 + 1) == 120) {
        sscanf((const char*)v19, "%x", v18);
      }
      else {
        sscanf((const char*)v19, "%f", v18);
      }
      if ((v26[0] & 1) == 0) {
        goto LABEL_55;
      }
    }
    else {
      *v18 = 0x0.0p+0f;
      if ((v26[0] & 1) == 0) {
        goto LABEL_55;
      }
    }
  }
  else {
    GameRoutine_609140(v17, (__int64)"0x%x (%f)", *(_DWORD*)v18, *v18);
    if ((v26[0] & 1) == 0) {
      goto LABEL_55;
    }
  }
  if (v26[2] != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v26[2]);
  }
LABEL_55:
  strcpy((char*)v26, "(CursorSpotAnimation_");
  GameRoutine_1a09ce0((__int64)v26, "LARGE", 5u);
  if ((v26[0] & 1) != 0) {
    v21 = (const char*)v26[2];
  }
  else {
    v21 = (char*)v26 + 1;
  }
  v22 = fs_609260(a2 + 800, v21, 1);
  v23 = a1 + 94;
  if ((a3 & 1) == 0) {
    GameRoutine_609140(v22, (__int64)"0x%x (%f)", *(_DWORD*)v23, *v23);
    if ((v26[0] & 1) == 0) {
      return;
    }
    goto LABEL_69;
  }
  v24 = *(_QWORD*)(v22 + 24);
  if (v24 == 0) {
    *v23 = 0x0.0p+0f;
    if ((v26[0] & 1) == 0) {
      return;
    }
    goto LABEL_69;
  }
  if (*(_BYTE*)v24 == 48 && *(_BYTE*)(v24 + 1) == 120) {
    sscanf((const char*)v24, "%x", v23);
  }
  else {
    sscanf((const char*)v24, "%f", v23);
  }
  if ((v26[0] & 1) != 0) {
  LABEL_69:
    if (v26[2] != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v26[2]);
    }
  }
}

void game_gmap_151f430(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  float* v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  float* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  float* v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  const char* v23;
  __int128 v24;
  __int64 v25;
  const char* v26;
  __int64 v27;
  const char* v28;
  __int128 v29;
  __int64 v30;
  const char* v31;
  __int64 v32;
  const char* v33;
  __int128 v34;
  __int64 v35;
  const char* v36;
  __int64 v37;
  const char* v38;
  __int128 v39;
  __int64 v40;
  const char* v41;
  __int64 v42;
  const char* v43;
  __int128 v44;
  __int64 v45;
  const char* v46;
  __int64 v47;
  const char* v48;
  __int128 v49;
  __int64 v50;
  __int64 v51[3];
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  v6 = (float*)(a1 + 380);
  LOBYTE(v51[0]) = 22;
  strcpy((char*)v51 + 1, "RouteBlink_");
  GameRoutine_1a09ce0((__int64)v51, "PERIOD", 6u);
  if ((v51[0] & 1) != 0) {
    v7 = (const char*)v51[2];
  }
  else {
    v7 = (char*)v51 + 1;
  }
  v8 = fs_609260(a2 + 800, v7, 1);
  if ((a3 & 1) != 0) {
    v9 = *(_QWORD*)(v8 + 24);
    if (v9 != 0) {
      if (*(_BYTE*)v9 == 48 && *(_BYTE*)(v9 + 1) == 120) {
        sscanf((const char*)v9, "%x", v6);
      }
      else {
        sscanf((const char*)v9, "%f", v6);
      }
      if ((v51[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
    else {
      *v6 = 0x0.0p+0f;
      if ((v51[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
  }
  else {
    GameRoutine_609140(v8, (__int64)"0x%x (%f)", *(_DWORD*)v6, *v6);
    if ((v51[0] & 1) == 0) {
      goto LABEL_19;
    }
  }
  if (v51[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v51[2]);
  }
LABEL_19:
  LOBYTE(v51[0]) = 22;
  strcpy((char*)v51 + 1, "RouteBlink_");
  GameRoutine_1a09ce0((__int64)v51, "MIN_SIZE", 8u);
  if ((v51[0] & 1) != 0) {
    v11 = (const char*)v51[2];
  }
  else {
    v11 = (char*)v51 + 1;
  }
  v12 = fs_609260(a2 + 800, v11, 1);
  v13 = (float*)(a1 + 384);
  if ((a3 & 1) != 0) {
    v14 = *(_QWORD*)(v12 + 24);
    if (v14 != 0) {
      if (*(_BYTE*)v14 == 48 && *(_BYTE*)(v14 + 1) == 120) {
        sscanf((const char*)v14, "%x", v13);
      }
      else {
        sscanf((const char*)v14, "%f", v13);
      }
      if ((v51[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
    else {
      *v13 = 0x0.0p+0f;
      if ((v51[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
  }
  else {
    GameRoutine_609140(v12, (__int64)"0x%x (%f)", *(_DWORD*)v13, *v13);
    if ((v51[0] & 1) == 0) {
      goto LABEL_37;
    }
  }
  if (v51[2] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v51[2]);
  }
LABEL_37:
  LOBYTE(v51[0]) = 22;
  strcpy((char*)v51 + 1, "RouteBlink_");
  GameRoutine_1a09ce0((__int64)v51, "MAX_SIZE", 8u);
  if ((v51[0] & 1) != 0) {
    v16 = (const char*)v51[2];
  }
  else {
    v16 = (char*)v51 + 1;
  }
  v17 = fs_609260(a2 + 800, v16, 1);
  v18 = (float*)(a1 + 388);
  if ((a3 & 1) != 0) {
    v19 = *(_QWORD*)(v17 + 24);
    if (v19 != 0) {
      if (*(_BYTE*)v19 == 48 && *(_BYTE*)(v19 + 1) == 120) {
        sscanf((const char*)v19, "%x", v18);
      }
      else {
        sscanf((const char*)v19, "%f", v18);
      }
      if ((v51[0] & 1) == 0) {
        goto LABEL_55;
      }
    }
    else {
      *v18 = 0x0.0p+0f;
      if ((v51[0] & 1) == 0) {
        goto LABEL_55;
      }
    }
  }
  else {
    GameRoutine_609140(v17, (__int64)"0x%x (%f)", *(_DWORD*)v18, *v18);
    if ((v51[0] & 1) == 0) {
      goto LABEL_55;
    }
  }
  if (v51[2] != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v51[2]);
  }
LABEL_55:
  strcpy((char*)v51, " RouteBlinkColor_");
  GameRoutine_1a09ce0((__int64)v51, "RANGE_MIN", 9u);
  if ((v51[0] & 1) != 0) {
    v21 = (const char*)v51[2];
  }
  else {
    v21 = (char*)v51 + 1;
  }
  v22 = fs_609260(a2 + 800, v21, 1);
  if ((a3 & 1) != 0) {
    v23 = *(const char**)(v22 + 24);
    if (v23 != nullptr) {
      sscanf(v23, "%f,%f,%f,%f", &v55, &v54, &v53, &v52);
      *(_QWORD*)&v24 = __PAIR64__(v54, v55);
      *((_QWORD*)&v24 + 1) = __PAIR64__(v52, v53);
      *(_OWORD*)(a1 + 400) = v24;
      if ((v51[0] & 1) == 0) {
        goto LABEL_69;
      }
    }
    else {
      *(_QWORD*)(a1 + 400) = 0;
      *(_QWORD*)(a1 + 408) = 0;
      if ((v51[0] & 1) == 0) {
        goto LABEL_69;
      }
    }
  }
  else {
    GameRoutine_609140(v22, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 400)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 400))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 408)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 400))));
    if ((v51[0] & 1) == 0) {
      goto LABEL_69;
    }
  }
  if (v51[2] != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v51[2]);
  }
LABEL_69:
  strcpy((char*)v51, " RouteBlinkColor_");
  GameRoutine_1a09ce0((__int64)v51, "RANGE_MAX", 9u);
  if ((v51[0] & 1) != 0) {
    v26 = (const char*)v51[2];
  }
  else {
    v26 = (char*)v51 + 1;
  }
  v27 = fs_609260(a2 + 800, v26, 1);
  if ((a3 & 1) != 0) {
    v28 = *(const char**)(v27 + 24);
    if (v28 != nullptr) {
      sscanf(v28, "%f,%f,%f,%f", &v55, &v54, &v53, &v52);
      *(_QWORD*)&v29 = __PAIR64__(v54, v55);
      *((_QWORD*)&v29 + 1) = __PAIR64__(v52, v53);
      *(_OWORD*)(a1 + 416) = v29;
      if ((v51[0] & 1) == 0) {
        goto LABEL_83;
      }
    }
    else {
      *(_QWORD*)(a1 + 416) = 0;
      *(_QWORD*)(a1 + 424) = 0;
      if ((v51[0] & 1) == 0) {
        goto LABEL_83;
      }
    }
  }
  else {
    GameRoutine_609140(v27, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 416)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 416))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 424)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 416))));
    if ((v51[0] & 1) == 0) {
      goto LABEL_83;
    }
  }
  if (v51[2] != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  v51[2]);
  }
LABEL_83:
  strcpy((char*)v51, " RouteBlinkColor_");
  GameRoutine_1a09ce0((__int64)v51, "ROUTE_MIN", 9u);
  if ((v51[0] & 1) != 0) {
    v31 = (const char*)v51[2];
  }
  else {
    v31 = (char*)v51 + 1;
  }
  v32 = fs_609260(a2 + 800, v31, 1);
  if ((a3 & 1) != 0) {
    v33 = *(const char**)(v32 + 24);
    if (v33 != nullptr) {
      sscanf(v33, "%f,%f,%f,%f", &v55, &v54, &v53, &v52);
      *(_QWORD*)&v34 = __PAIR64__(v54, v55);
      *((_QWORD*)&v34 + 1) = __PAIR64__(v52, v53);
      *(_OWORD*)(a1 + 432) = v34;
      if ((v51[0] & 1) == 0) {
        goto LABEL_97;
      }
    }
    else {
      *(_QWORD*)(a1 + 432) = 0;
      *(_QWORD*)(a1 + 440) = 0;
      if ((v51[0] & 1) == 0) {
        goto LABEL_97;
      }
    }
  }
  else {
    GameRoutine_609140(v32, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 432)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 432))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 440)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 432))));
    if ((v51[0] & 1) == 0) {
      goto LABEL_97;
    }
  }
  if (v51[2] != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  v51[2]);
  }
LABEL_97:
  strcpy((char*)v51, " RouteBlinkColor_");
  GameRoutine_1a09ce0((__int64)v51, "ROUTE_MAX", 9u);
  if ((v51[0] & 1) != 0) {
    v36 = (const char*)v51[2];
  }
  else {
    v36 = (char*)v51 + 1;
  }
  v37 = fs_609260(a2 + 800, v36, 1);
  if ((a3 & 1) != 0) {
    v38 = *(const char**)(v37 + 24);
    if (v38 != nullptr) {
      sscanf(v38, "%f,%f,%f,%f", &v55, &v54, &v53, &v52);
      *(_QWORD*)&v39 = __PAIR64__(v54, v55);
      *((_QWORD*)&v39 + 1) = __PAIR64__(v52, v53);
      *(_OWORD*)(a1 + 448) = v39;
      if ((v51[0] & 1) == 0) {
        goto LABEL_111;
      }
    }
    else {
      *(_QWORD*)(a1 + 448) = 0;
      *(_QWORD*)(a1 + 456) = 0;
      if ((v51[0] & 1) == 0) {
        goto LABEL_111;
      }
    }
  }
  else {
    GameRoutine_609140(v37, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 448)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 448))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 456)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 448))));
    if ((v51[0] & 1) == 0) {
      goto LABEL_111;
    }
  }
  if (v51[2] != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40,
                                  v51[2]);
  }
LABEL_111:
  strcpy((char*)v51, " RouteBlinkColor_");
  GameRoutine_1a09ce0((__int64)v51, "DESTINATION_MIN", 0xFu);
  if ((v51[0] & 1) != 0) {
    v41 = (const char*)v51[2];
  }
  else {
    v41 = (char*)v51 + 1;
  }
  v42 = fs_609260(a2 + 800, v41, 1);
  if ((a3 & 1) != 0) {
    v43 = *(const char**)(v42 + 24);
    if (v43 != nullptr) {
      sscanf(v43, "%f,%f,%f,%f", &v55, &v54, &v53, &v52);
      *(_QWORD*)&v44 = __PAIR64__(v54, v55);
      *((_QWORD*)&v44 + 1) = __PAIR64__(v52, v53);
      *(_OWORD*)(a1 + 464) = v44;
      if ((v51[0] & 1) == 0) {
        goto LABEL_125;
      }
    }
    else {
      *(_QWORD*)(a1 + 464) = 0;
      *(_QWORD*)(a1 + 472) = 0;
      if ((v51[0] & 1) == 0) {
        goto LABEL_125;
      }
    }
  }
  else {
    GameRoutine_609140(v42, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 464)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 464))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 472)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 464))));
    if ((v51[0] & 1) == 0) {
      goto LABEL_125;
    }
  }
  if (v51[2] != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                                  v51[2]);
  }
LABEL_125:
  strcpy((char*)v51, " RouteBlinkColor_");
  GameRoutine_1a09ce0((__int64)v51, "DESTINATION_MAX", 0xFu);
  if ((v51[0] & 1) != 0) {
    v46 = (const char*)v51[2];
  }
  else {
    v46 = (char*)v51 + 1;
  }
  v47 = fs_609260(a2 + 800, v46, 1);
  if ((a3 & 1) != 0) {
    v48 = *(const char**)(v47 + 24);
    if (v48 != nullptr) {
      sscanf(v48, "%f,%f,%f,%f", &v55, &v54, &v53, &v52);
      *(_QWORD*)&v49 = __PAIR64__(v54, v55);
      *((_QWORD*)&v49 + 1) = __PAIR64__(v52, v53);
      *(_OWORD*)(a1 + 480) = v49;
      if ((v51[0] & 1) == 0) {
        return;
      }
    }
    else {
      *(_QWORD*)(a1 + 480) = 0;
      *(_QWORD*)(a1 + 488) = 0;
      if ((v51[0] & 1) == 0) {
        return;
      }
    }
  }
  else {
    GameRoutine_609140(v47, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 480)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 480))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 488)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 480))));
    if ((v51[0] & 1) == 0) {
      return;
    }
  }
  if (v51[2] != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v50,
                                  v51[2]);
  }
}

void game_gmap_1520420(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  float* v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  float* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  float* v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  const char* v23;
  __int128 v24;
  __int64 v25;
  const char* v26;
  __int64 v27;
  const char* v28;
  __int128 v29;
  __int64 v30;
  __int64 v31[3];
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;

  v6 = (float*)(a1 + 596);
  LOBYTE(v31[0]) = 22;
  strcpy((char*)v31 + 1, "TargetLine_");
  GameRoutine_1a09ce0((__int64)v31, "UV_SPEED", 8u);
  if ((v31[0] & 1) != 0) {
    v7 = (const char*)v31[2];
  }
  else {
    v7 = (char*)v31 + 1;
  }
  v8 = fs_609260(a2 + 800, v7, 1);
  if ((a3 & 1) != 0) {
    v9 = *(_QWORD*)(v8 + 24);
    if (v9 != 0) {
      if (*(_BYTE*)v9 == 48 && *(_BYTE*)(v9 + 1) == 120) {
        sscanf((const char*)v9, "%x", v6);
      }
      else {
        sscanf((const char*)v9, "%f", v6);
      }
      if ((v31[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
    else {
      *v6 = 0x0.0p+0f;
      if ((v31[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
  }
  else {
    GameRoutine_609140(v8, (__int64)"0x%x (%f)", *(_DWORD*)v6, *v6);
    if ((v31[0] & 1) == 0) {
      goto LABEL_19;
    }
  }
  if (v31[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v31[2]);
  }
LABEL_19:
  LOBYTE(v31[0]) = 22;
  strcpy((char*)v31 + 1, "TargetLine_");
  GameRoutine_1a09ce0((__int64)v31, "WIDTH", 5u);
  if ((v31[0] & 1) != 0) {
    v11 = (const char*)v31[2];
  }
  else {
    v11 = (char*)v31 + 1;
  }
  v12 = fs_609260(a2 + 800, v11, 1);
  v13 = (float*)(a1 + 600);
  if ((a3 & 1) != 0) {
    v14 = *(_QWORD*)(v12 + 24);
    if (v14 != 0) {
      if (*(_BYTE*)v14 == 48 && *(_BYTE*)(v14 + 1) == 120) {
        sscanf((const char*)v14, "%x", v13);
      }
      else {
        sscanf((const char*)v14, "%f", v13);
      }
      if ((v31[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
    else {
      *v13 = 0x0.0p+0f;
      if ((v31[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
  }
  else {
    GameRoutine_609140(v12, (__int64)"0x%x (%f)", *(_DWORD*)v13, *v13);
    if ((v31[0] & 1) == 0) {
      goto LABEL_37;
    }
  }
  if (v31[2] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v31[2]);
  }
LABEL_37:
  LOBYTE(v31[0]) = 22;
  strcpy((char*)v31 + 1, "TargetLine_");
  GameRoutine_1a09ce0((__int64)v31, "OFFSET", 6u);
  if ((v31[0] & 1) != 0) {
    v16 = (const char*)v31[2];
  }
  else {
    v16 = (char*)v31 + 1;
  }
  v17 = fs_609260(a2 + 800, v16, 1);
  v18 = (float*)(a1 + 604);
  if ((a3 & 1) != 0) {
    v19 = *(_QWORD*)(v17 + 24);
    if (v19 != 0) {
      if (*(_BYTE*)v19 == 48 && *(_BYTE*)(v19 + 1) == 120) {
        sscanf((const char*)v19, "%x", v18);
      }
      else {
        sscanf((const char*)v19, "%f", v18);
      }
      if ((v31[0] & 1) == 0) {
        goto LABEL_55;
      }
    }
    else {
      *v18 = 0x0.0p+0f;
      if ((v31[0] & 1) == 0) {
        goto LABEL_55;
      }
    }
  }
  else {
    GameRoutine_609140(v17, (__int64)"0x%x (%f)", *(_DWORD*)v18, *v18);
    if ((v31[0] & 1) == 0) {
      goto LABEL_55;
    }
  }
  if (v31[2] != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v31[2]);
  }
LABEL_55:
  strcpy((char*)v31, " TargetLineColor_");
  GameRoutine_1a09ce0((__int64)v31, "ALPHA", 5u);
  if ((v31[0] & 1) != 0) {
    v21 = (const char*)v31[2];
  }
  else {
    v21 = (char*)v31 + 1;
  }
  v22 = fs_609260(a2 + 800, v21, 1);
  if ((a3 & 1) != 0) {
    v23 = *(const char**)(v22 + 24);
    if (v23 != nullptr) {
      sscanf(v23, "%f,%f,%f,%f", &v35, &v34, &v33, &v32);
      *(_QWORD*)&v24 = __PAIR64__(v34, v35);
      *((_QWORD*)&v24 + 1) = __PAIR64__(v32, v33);
    }
    else {
      v24 = (__typeof__(v24)){0};
    }
    *(_OWORD*)(a1 + 608) = v24;
    if ((v31[0] & 1) == 0) {
      goto LABEL_69;
    }
  }
  else {
    GameRoutine_609140(v22, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 608)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 608))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 616)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 608))));
    if ((v31[0] & 1) == 0) {
      goto LABEL_69;
    }
  }
  if (v31[2] != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v31[2]);
  }
LABEL_69:
  strcpy((char*)v31, " TargetLineColor_");
  GameRoutine_1a09ce0((__int64)v31, "ADD", 3u);
  if ((v31[0] & 1) != 0) {
    v26 = (const char*)v31[2];
  }
  else {
    v26 = (char*)v31 + 1;
  }
  v27 = fs_609260(a2 + 800, v26, 1);
  if ((a3 & 1) != 0) {
    v28 = *(const char**)(v27 + 24);
    if (v28 != nullptr) {
      sscanf(v28, "%f,%f,%f,%f", &v35, &v34, &v33, &v32);
      *(_QWORD*)&v29 = __PAIR64__(v34, v35);
      *((_QWORD*)&v29 + 1) = __PAIR64__(v32, v33);
    }
    else {
      v29 = (__typeof__(v29)){0};
    }
    *(_OWORD*)(a1 + 624) = v29;
    if ((v31[0] & 1) == 0) {
      return;
    }
  }
  else {
    GameRoutine_609140(v27, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 624)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 624))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 632)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 624))));
    if ((v31[0] & 1) == 0) {
      return;
    }
  }
  if (v31[2] != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  v31[2]);
  }
}

__int64 game_gmap_1520a70(__int64 a1)
{
  _QWORD handle[2];
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int128 v14;
  __int64 result;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int128 v29;
  struct {
    __int64* v30;
    __int64 v31;
    int v32;
  } v30_;
  unsigned __int64 v33[25];

  if (*(_QWORD*)(a1 + 120) == 0 || (unsigned __int8)Impl_13261c0(a1) == 13 ||
      (unsigned __int8)Impl_13261c0(a1) == 12 ||
      (unsigned __int8)Impl_13261c0(a1) == 11) {
    goto LABEL_27;
  }
  v2 = GameData_2130e20;
  v3 = *(_QWORD*)(*(_QWORD*)GameData_2130e20 + 8LL);
  v4 = *(_QWORD*)(*(_QWORD*)GameData_2130e20 + 16LL);
  v33[1] = (unsigned __int64)&GameData_1ab98e9;
  v5 = (unsigned __int64)(v4 - v3) >> 3;
  v33[0] = game_HashString((__int64)&GameData_1ab98e9);
  if (game_GameModeData_instance_ == 0 ||
      (v6 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v33)) == 0) {
    if ((int)v5 < 5) {
      goto LABEL_10;
    }
  LABEL_27:
    if (*(_QWORD*)GameData_212d750 != 0) {
      v14 = *(_OWORD*)(a1 + 32);
      v30_.v31 = *(_QWORD*)(a1 + 32);
      v30_.v32 = DWORD2(v14);
      v30_.v30 = GameData_212d1e0[0] + 2;
      snd_Fade_Fade_10c830((__int64)v33, 0x0.0p+0f);
      snd_playAt_ff5f0((void*)(handle), (__int64)"SE_SYS_GMAP_GoalPin_NG",
                       (__int64)"SE_SYS_GMAP_GoalPin_NG", (__int64)&v30_.v30,
                       (__int64)v33, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f);
    }
    else {
      snd_Fade_Fade_10c830((__int64)v33, 0x0.0p+0f);
      snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_GMAP_GoalPin_NG",
                     (__int64)"SE_SYS_GMAP_GoalPin_NG", (__int64)v33, 0,
                     0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    }
    snd_Fade_Destroy_Fade(v33);
    return 0;
  }
  if ((signed __int32)*(_DWORD*)(v6 + 32) <= (int)v5) {
    goto LABEL_27;
  }
LABEL_10:
  v7 = *(_QWORD**)v2;
  v8 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
  v9 = (__int64*)v7[2];
  v10 = (__int64*)v8;
  if ((__int64*)v8 != v9) {
    v11 = (unsigned __int64)v9 - v8 - 8;
    v10 = (__int64*)v8;
    if ((~(_BYTE)v11 & 0x18) != 0) {
      v12 = ((unsigned __int8)((unsigned int)v11 >> 3) + 1) & 3;
      v10 = (__int64*)v8;
      while (*v10 != a1) {
        ++v10;
        if (--v12 == 0) {
          goto LABEL_15;
        }
      }
    }
    else {
    LABEL_15:
      if (v11 < 0x18) {
        goto LABEL_32;
      }
      v10 += 2;
      while (1) {
        if (*(v10 - 2) == a1) {
          v10 -= 2;
          goto LABEL_26;
        }
        if (*(v10 - 1) == a1) {
          --v10;
          goto LABEL_26;
        }
        if (*v10 == a1) {
          goto LABEL_26;
        }
        if (v10[1] == a1) {
          break;
        }
        v13 = v10 + 2;
        v10 += 4;
        if (v13 == v9) {
          goto LABEL_32;
        }
      }
      ++v10;
    }
  }
LABEL_26:
  if (v10 != v9) {
    goto LABEL_27;
  }
LABEL_32:
  v16 = v7[3];
  if ((unsigned __int64)v9 >= v16) {
    v18 = (char*)v9 - v8;
    v19 = ((__int64)v9 - v8) >> 3;
    v20 = v19 + 1;
    if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
      GameRoutine_8875e0();
    }
    v21 = v16 - v8;
    v22 = fw_memory_g_heap_manager_ptr;
    if (v21 >> 2 > v20) {
      v20 = v21 >> 2;
    }
    if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
      v23 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v20;
    }
    if (v23 != 0) {
      if (v23 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v24 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
    }
    else {
      v24 = 0;
    }
    v25 = v24 + 8 * v23;
    v26 = (unsigned __int64)v9 - v8;
    v27 = (__int64)&v18[v24 + -8 * v19];
    *(_QWORD*)&v18[v24] = a1;
    v17 = (__int64)&v18[v24 + 8];
    memcpy(v27, v8, v26);
    v7[1] = v27;
    v7[2] = v17;
    v7[3] = v25;
    if (v8 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v28, v8);
    }
  }
  else {
    *v9 = a1;
    v17 = (__int64)(v9 + 1);
  }
  v7[2] = v17;
  if (*(_QWORD*)GameData_212d750 != 0) {
    v29 = *(_OWORD*)(a1 + 32);
    v30_.v31 = *(_QWORD*)(a1 + 32);
    v30_.v32 = DWORD2(v29);
    v30_.v30 = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830((__int64)v33, 0x0.0p+0f);
    snd_playAt_ff5f0((void*)(handle), (__int64)"SE_SYS_GMAP_GoalPin_Set",
                     (__int64)"SE_SYS_GMAP_GoalPin_Set", (__int64)&v30_.v30,
                     (__int64)v33, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
  }
  else {
    snd_Fade_Fade_10c830((__int64)v33, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_GMAP_GoalPin_Set",
                   (__int64)"SE_SYS_GMAP_GoalPin_Set", (__int64)v33, 0,
                   0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  }
  snd_Fade_Destroy_Fade(v33);
  result = 1;
  if (*GameData_212d728[0] != 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  }
  return result;
}

void game_gmap_152a600(__int64* a1, __int64 a2, char* a3, char* a4, __int64 a5)
{
  __int64 v5;
  unsigned __int64 v6;
  char* v8;
  _QWORD* v9;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  signed __int64 v18;
  char* v19;
  char* v20;
  char* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  _QWORD* i;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v37;

  if (a5 >= 1) {
    v6 = a1[1];
    v5 = a1[2];
    v8 = a3;
    v9 = (_QWORD*)a2;
    if (a5 <= (__int64)(v5 - v6) >> 3) {
      v16 = v6 - a2;
      v17 = (__int64)(v6 - a2) >> 3;
      if (a5 <= v17) {
        v27 = a2 + 8 * a5;
        v28 = (__int64*)(v6 - 8 * a5);
        for (i = (_QWORD*)a1[1]; (unsigned __int64)v28 < v6; ++i) {
          v30 = *v28++;
          *i = v30;
        }
        a1[1] = (__int64)i;
        if (v6 != v27) {
          memmove(a2 + 8 * a5, a2, v6 - v27);
        }
        v31 = 8 * a5 - 8;
        if ((~(_BYTE)v31 & 0x38) != 0) {
          v34 = -(__int64)(((unsigned __int8)((unsigned int)v31 >> 3) + 1) & 7);
          v32 = v9;
          do {
            v35 = *(_QWORD*)v8;
            v8 += 8;
            v36 = __CFADD__(v34++, 1);
            *v32++ = v35;
          } while (!v36);
        }
        else {
          v32 = v9;
        }
        if (v31 >= 0x38) {
          do {
            *v32 = *(_QWORD*)v8;
            v32[1] = *((_QWORD*)v8 + 1);
            v32[2] = *((_QWORD*)v8 + 2);
            v32[3] = *((_QWORD*)v8 + 3);
            v32[4] = *((_QWORD*)v8 + 4);
            v32[5] = *((_QWORD*)v8 + 5);
            v32[6] = *((_QWORD*)v8 + 6);
            v37 = *((_QWORD*)v8 + 7);
            v8 += 64;
            v32[7] = v37;
            v32 += 8;
          } while (v32 != &v9[a5]);
        }
      }
      else {
        v18 = a4 - &a3[v16];
        if (a4 != &a3[v16]) {
          v19 = a4;
          memmove(a1[1], (__int64)&a3[v16], a4 - &a3[v16]);
          a4 = v19;
        }
        v20 = (char*)(v6 + v18);
        a1[1] = v6 + v18;
        if (v17 >= 1) {
          v21 = (char*)&v9[a5];
          v22 = v6 + v18;
          if ((unsigned __int64)&v20[-8 * a5] < v6) {
            v23 = (char*)v9 + (_QWORD)a4;
            v24 = (__int64)v9 + (_QWORD)a4 + -8 * a5;
            do {
              v25 = *(_QWORD*)(v24 - (_QWORD)v8);
              v24 += 8;
              *(_QWORD*)(v23 - v8) = v25;
              v23 += 8;
            } while (v24 - (__int64)v8 < v6);
            v22 = v23 - v8;
          }
          a1[1] = v22;
          if (v20 != v21) {
            memmove((__int64)&v9[a5], (__int64)v9, v20 - v21);
          }
          do {
            v26 = *(_QWORD*)v8;
            v8 += 8;
            v16 -= 8LL;
            *v9++ = v26;
          } while (v16 != 0);
        }
      }
    }
    else {
      v11 = *a1;
      v12 = a5 + ((__int64)(v6 - *a1) >> 3);
      if (v12 >> 61 != 0) {
        GameRoutine_892740();
      }
      v13 = v5 - v11;
      if (v13 >> 2 > v12) {
        v12 = v13 >> 2;
      }
      if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v12;
      }
      if (v14 != 0) {
        if (v14 >> 61 != 0) {
          GameRoutine_60a210();
        }
        v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 8 * v14,
                                             16, 0);
      }
      else {
        v15 = 0;
      }
      memcpy((__int64)v9 + v15 - v11, (__int64)v8, 8 * a5);
      memcpy((__int64)&v9[a5] + v15 - v11, (__int64)v9, v6 - (_QWORD)v9);
      a1[1] = (__int64)v9;
      memcpy(v15, v11, (unsigned __int64)v9 - v11);
      *a1 = v15;
      a1[1] = v15 - v11 + 8 * a5 + v6;
      a1[2] = v15 + 8 * v14;
      if (v11 != 0) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v11);
      }
    }
  }
}

void game_gmap_1539fc0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned int* v15;
  __int64 v16;
  __int64 v17;
  void* v18;
  __int64* v19;
  unsigned int* v20;
  bool v21;
  _QWORD* i;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  struct {
    __int64 v33;
    void* v34;
    __int64 v35;
  } v33_;

  *(_BYTE*)(a1 + 58) = 1;
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    v9 = *(_QWORD*)(GameData_21c96e8 + 8);
    v10 = *(_DWORD*)(v9 + 56);
    v11 = *(__int64**)(v9 + 8);
    v12 = *(__int64**)(v9 + 16);
    if (v10 < 0) {
      for (; v11 != v12; ++v11) {
        v13 = *v11;
        if (*(_QWORD*)(*v11 + 96) == 0 && *(_QWORD*)(v13 + 552) == 0) {
          goto LABEL_19;
        }
      }
    }
    else if (v11 != v12) {
      while (1) {
        v14 = *v11++;
        v13 = v14;
        if (*(_DWORD*)(v14 + 84) == v10) {
          break;
        }
        if (v11 == v12) {
          goto LABEL_15;
        }
      }
    LABEL_19:
      v15 = *(unsigned int**)v13;
    LABEL_20:
      SpotMgr_1331ca0((void*)(&v33_.v33), (__int64)v15);
      v16 = *(_QWORD*)(a1 + 72);
      if (v16 == 0) {
        goto LABEL_24;
      }
      goto LABEL_21;
    }
  LABEL_15:
    v15 = game_gmap_SpotMgr_GetCurrentSpot();
    goto LABEL_20;
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    if (v4 != v5) {
      v19 = v4;
      while (1) {
        v7 = *v19;
        if (*(_QWORD*)(*v19 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
          break;
        }
        if (++v19 == v5) {
          goto LABEL_37;
        }
      }
    LABEL_30:
      v20 = *(unsigned int**)v7;
      v21 = v4 == v5;
      if (v3 < 0) {
        goto LABEL_31;
      }
      goto LABEL_38;
    }
  }
  else if (v4 != v5) {
    v6 = v4;
    do {
      v8 = *v6++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v3) {
        goto LABEL_30;
      }
    } while (v6 != v5);
  }
LABEL_37:
  v20 = game_gmap_SpotMgr_GetCurrentSpot();
  v25 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v25 + 56);
  v4 = *(__int64**)(v25 + 8);
  v21 = v4 == *(__int64**)(v25 + 16);
  if (v3 < 0) {
  LABEL_31:
    if (!v21) {
      for (i = v4 + 1;; ++i) {
        v23 = (__int64*)*(i - 1);
        if (v23[12] == 0 && v23[69] == 0) {
          break;
        }
      }
      v24 = v23 + 1;
      goto LABEL_43;
    }
    goto LABEL_42;
  }
LABEL_38:
  if (v21) {
  LABEL_42:
    v24 = (__int64*)((_UNKNOWN**)0x8LL);
    goto LABEL_43;
  }
  v28 = *v4;
  v26 = v4 + 1;
  v27 = v28;
  if (*(_DWORD*)(v28 + 84) != v3) {
    do {
      v29 = *v26++;
      v27 = v29;
    } while (*(_DWORD*)(v29 + 84) != v3);
  }
  v24 = (__int64*)(v27 + 8);
LABEL_43:
  v30 = *v24;
  v33_.v34 = &GameData_1abd4d1;
  v33_.v33 = game_HashString((__int64)&GameData_1abd4d1);
  if (game_GameModeData_instance_ != 0 &&
      (v31 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v33_.v33)) != 0) {
    v32 = *(_DWORD*)(v31 + 32);
  }
  else {
    v32 = 3;
  }
  SpotMgr_1331320((void*)(&v33_.v33), (__int64)v20, v30, v32);
  v16 = *(_QWORD*)(a1 + 72);
  if (v16 != 0) {
  LABEL_21:
    *(_QWORD*)(a1 + 80) = v16;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v16);
  }
LABEL_24:
  v18 = v33_.v34;
  *(_QWORD*)(a1 + 72) = v33_.v33;
  *(_QWORD*)(a1 + 80) = v18;
  *(_QWORD*)(a1 + 88) = v33_.v35;
}

__int64 game_gmap_16573e0(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  char* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  __int64* v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  signed int v48;
  __int64* v49;
  _BOOL4 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _BOOL4 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  __int64 v60;
  __int64* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v65;
  unsigned __int64 v66;
  _QWORD* v67;
  _QWORD* v68;
  unsigned __int64 v69;
  __int64 v70;
  char* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  __int64* v78;
  int v79;
  const char* v80;
  __int64* v81;
  __int64 v82;
  __int64* v83;
  __int64* v84;
  __int64 v85;
  char v86;
  unsigned __int64 v87;
  int v88;
  const char* v89;
  __int64* v90;
  __int64 v91;
  __int64* v92;
  char* v93;
  __int64* v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  char v98;
  const char* v99;
  const char* v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  int v107;
  __int64* v108;
  int v109;
  signed int v110;
  signed int v111;
  int v112;
  __int64* v113;
  __int64 v114;
  char* v115;
  __int64 v116;
  __int64 v117;
  __int64* v118;
  _BYTE* v119;
  __int64 v120;
  char* v121;
  __int64* v122;
  int v123;
  char* v125;
  char v126;
  char* v127;
  __int64* v128;
  __int64 v129;
  char v130;
  const char* v131;
  __int64 v132;
  char* v133;
  __int64 v134;
  __int64 v135;
  __int64* v136;
  __int64* v137;
  __int64* v138;
  char* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64* v143;
  char* v144;
  char* v145;
  char* v146;
  char* v147;
  char* v148;
  char* v149;
  __int64 v150;
  char* v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  char v155;
  unsigned int v156;
  __int64 v157;
  unsigned __int64 v158;
  __int64 v159;
  _QWORD* v160;
  _QWORD* j;
  __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  __int64* v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  char v176;
  __int64* v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64* v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64* v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64* v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64* v198;
  char* v199;
  __int64 v200;
  unsigned __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  bool v205;
  __int64 v206;
  __int64* v207;
  __int64* v208;
  __int64 v209;
  char* v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  _QWORD* v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  int v220;
  __int64* v221;
  char* v222;
  int i;
  char* v224;
  __int64* v225;
  char* v226;
  const char* v227;
  char* v228;
  __int64* v229;
  char* v230;
  char* v231;
  __int64 v232;
  __int64 v233;
  char* v234;
  __int64 v235;
  __int64 v236;
  char* v237;
  char* v238;
  char* v239;
  char* v240;
  char* v241;
  char* v242;
  char* v243;
  char* v244;
  __int64 v245;
  char* v246;
  __int64 v247;
  __int64 v248;
  bool v249;
  char v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64* v256;
  __int64* v257;
  unsigned int* v258;
  __int64* v259;
  __int64 v260;
  __int64 v261;
  __int64* v262;
  char* v263;
  const char* v264;
  char* v265;
  __int64* v266;
  char* v267;
  __int64* v268;
  __int64* v269;
  char* v270;
  __int64 v271;
  __int64 v272;
  __int64* v273;
  char* v274;
  __int64* v275;
  unsigned __int64 v276;
  char* v277;
  __int64 v278;
  __int64 v279;
  __int64* v280;
  char* v281;
  __int64* v282;
  unsigned __int64 v283;
  char* v284;
  __int64 v285;
  __int64 v286;
  __int64* v287;
  char* v288;
  __int64* v289;
  unsigned __int64 v290;
  char* v291;
  __int64 v292;
  __int64 v293;
  __int64* v294;
  char* v295;
  __int64* v296;
  unsigned __int64 v297;
  char* v298;
  __int64 v299;
  __int64 v300;
  __int64* v301;
  char* v302;
  __int64* v303;
  unsigned __int64 v304;
  char* v305;
  __int64 v306;
  __int64 v307;
  __int64* v308;
  char* v309;
  __int64* v310;
  unsigned __int64 v311;
  char* v312;
  __int64 v313;
  __int64 v314;
  __int64* v315;
  char* v316;
  __int64* v317;
  unsigned __int64 v318;
  char* v319;
  __int64 v320;
  __int64 v321;
  __int64* v322;
  __int64 v323;
  __int64 v324;
  __int64* v325;
  __int64* v326;
  unsigned int v327;
  __int64 v328;
  __int64 v329;
  int v330;
  char* v331;
  __int64 v332;
  __int64* v333;
  signed int v334;
  struct {
    __int64** v335;
    __int64* v336;
    __int64* v337;
  } v335_;
  _QWORD v338[2];
  struct {
    __int64* v339;
    __int64 v340;
  } v339_;
  struct {
    __int64* v341;
    char* v342;
    unsigned __int64 v343;
    unsigned __int64 v344;
    int v345;
    int v346;
    __int64 v347;
    __int64 v348;
    __int64 v349;
    __int64 v350;
    __int64 v351;
    __int64 v352;
    __int64 v353;
    __int64 v354;
    __int64 v355;
    __int64 v356;
    __int64 v357;
    __int64 v358;
    __int64 v359;
  } v341_;
  struct {
    __int64* v360;
    __int64* v361;
    __int64 v362;
  } v360_;

  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"N_SpotInfo", 0),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"L_Reconstruction", 0),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"A_Genre", 1),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  game_gmap_1659b80_alt1(a1),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  (*(void (**)(__int64*, _QWORD))(*a1 + 80))(a1, 0),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v2 = a1[3];
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_QWORD**)(v3 + 8);
  v5 = *(_QWORD**)(v3 + 16);
  while (1) {
    if (v4 == v5) {
      goto LABEL_8;
    }
    v6 = (_QWORD*)*v4;
    if (*(_QWORD*)*v4 == v2) {
      v7 = v6[12];
      if (v7 != 0 && (unsigned int)*(unsigned __int8*)(v7 + 32) - 3 < 2) {
        break;
      }
    }
    ++v4;
  }
  if ((v6[68] & 8) != 0) {
    ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"N_SpotInfo", 1),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    LayoutAccessor_1562cf0(a1[1], "HellGate"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1],
                           "L_AppropriateLv"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    GameRoutine_16512e0((__int64*)&v341_.v341, a1[3]),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v341_.v342 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v341_.v342),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"L_Open", 0),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_252;
  }
LABEL_8:
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v8 = *(__int64***)(*GameData_2130e60 + 8);
    v9 = *v8;
    v10 = v8[1];
    if (v9 != v10) {
      while (1) {
        v11 = *v9++;
        if (*(_QWORD*)(*(_QWORD*)(v11 + 112) + 48LL) == *(_QWORD*)(v2 + 120)) {
          break;
        }
        if (v9 == v10) {
          goto LABEL_13;
        }
      }
      ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"N_SpotInfo", 1),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      LayoutAccessor_1562cf0(a1[1], "Sight_None"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      goto LABEL_252;
    }
  LABEL_13:
    if ((*(_BYTE*)(v2 + 178) & 4) != 0) {
      LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1],
                             "L_Reconstruction"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v341_.v342 == nullptr) {
        goto LABEL_252;
      }
      v20 = (char*)std___1___shared_weak_count_lock((__int64)v341_.v342),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v49 = v341_.v341;
      if (v341_.v342 != nullptr) {
        std___1___shared_weak_count___release_weak((__int64)v341_.v342),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      if (v20 == nullptr || v49 == nullptr) {
        goto LABEL_169;
      }
      v50 = true;
      LayoutAccessor_155e830((__int64)v49, 1),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v51 = a1[3];
      v52 = Impl_1326560(v51),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v53 = *(_QWORD*)(v51 + 280);
      if (v53 != 0 &&
          ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v53 + 24LL))(v53) != 1 ||
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v51 + 280) + 112LL))(
                *(_QWORD*)(v51 + 280)) &
            1) == 0) &&
          *(_QWORD*)(v51 + 280) != 0) {
        v54 = a1[3];
        if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v54 + 280) + 24LL))(
                *(_QWORD*)(v54 + 280)) == 1) {
          (*(void (**)(_QWORD))(**(_QWORD**)(v54 + 280) + 112LL))(
              *(_QWORD*)(v54 + 280)),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        v50 = (*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v54 + 280) + 24LL))(
                  *(_QWORD*)(v54 + 280)) != 5,
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v55 = v52 != 0 && v50;
      LayoutAccessor_155e830((__int64)v49, v55),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (!v55) {
        goto LABEL_170;
      }
      v56 = *(unsigned __int16*)(v52 + 32);
      v57 = *(_QWORD*)(v52 + 40);
      v58 = 0;
      v332 = *(_QWORD*)(v52 + 56);
      while (1) {
        v59 = game_util_Format("L_Item%02d", v58),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        LayoutAccessor_1560070((void*)(&v341_.v341), v49, v59),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v341_.v342 != nullptr) {
          v60 = std___1___shared_weak_count_lock((__int64)v341_.v342),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v61 = v341_.v341;
          if (v341_.v342 != nullptr) {
            std___1___shared_weak_count___release_weak((__int64)v341_.v342),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          if (v60 != 0 && v61 != nullptr) {
            LayoutAccessor_155e830((__int64)v61, v58 < v56),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v58 < v56) {
              v62 = game_HashString(*(_QWORD*)(v57 + 8 * v58)),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v62 != 0) {
                v63 = *(_QWORD*)(*GameData_212c878[0] + 96);
                if (v63 != 0 && *(_QWORD*)(*GameData_212c878[0] + 112) != 0) {
                  v65 = v63 - 1;
                  if ((v63 & (v63 - 1)) != 0) {
                    v66 = v62;
                    if (v62 >= v63) {
                      v66 = v62 % v63;
                    }
                  }
                  else {
                    v66 = v65 & v62;
                  }
                  v67 = *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 88) +
                                    8 * v66);
                  if (v67 != nullptr) {
                    v68 = (_QWORD*)*v67;
                    if (v68 != nullptr) {
                      if ((v63 & v65) == 0) {
                        while (1) {
                          v70 = v68[1];
                          if (v70 == v62) {
                            if (v68[2] == v62) {
                              goto LABEL_125;
                            }
                          }
                          else if ((v70 & v65) != v66) {
                            goto LABEL_136;
                          }
                          v68 = (_QWORD*)*v68;
                          if (v68 == nullptr) {
                            goto LABEL_136;
                          }
                        }
                      }
                      while (1) {
                        v69 = v68[1];
                        if (v69 == v62) {
                          if (v68[2] == v62) {
                          LABEL_125:
                            if (v68[3] != 0) {
                              v329 = v68[3];
                              v71 = GameHr_6ed030(v329),
                              v126 =
                                  COERCE_AS(__typeof__(v126),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x8", "=r"));
                              ui_LayoutAccessor_SetTextBoxString(
                                  v61, (__int64)"T_Txt", (__int64)v71),
                                  v126 = COERCE_AS(
                                      __typeof__(v126),
                                      PSEUDO_REGISTER(unsigned long long, "x8",
                                                      "=r"));
                              v72 = LayoutAccessor_155fbe0(v61, "L_Icon"),
                              v126 =
                                  COERCE_AS(__typeof__(v126),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x8", "=r"));
                              GameRoutine_157b170(v72, v329, 0),
                                  v126 = COERCE_AS(
                                      __typeof__(v126),
                                      PSEUDO_REGISTER(unsigned long long, "x8",
                                                      "=r"));
                              v327 = *(unsigned __int8*)(v332 + v58);
                              v73 = ui_LayoutAccessor_FindPane(
                                  v61, (__int64)"T_Num"),
                              v126 =
                                  COERCE_AS(__typeof__(v126),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x8", "=r"));
                              if (v73 != 0) {
                                v74 = __dynamic_cast(v73, GameData_212d670[0],
                                                     GameData_212d690, 0),
                                v126 = COERCE_AS(
                                    __typeof__(v126),
                                    PSEUDO_REGISTER(unsigned long long, "x8",
                                                    "=r"));
                                if (v74 != 0) {
                                  GameRoutine_156c910(v74, "%d", 1, v327),
                                      v126 = COERCE_AS(
                                          __typeof__(v126),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x8", "=r"));
                                }
                              }
                              v330 = game_TransporterConst_List_Impl_GetStock(
                                  *(unsigned __int16**)(v329 + 24)),
                              v126 =
                                  COERCE_AS(__typeof__(v126),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x8", "=r"));
                              v75 = ui_LayoutAccessor_FindPane(
                                  v61, (__int64)"T_MaxNum"),
                              v126 =
                                  COERCE_AS(__typeof__(v126),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x8", "=r"));
                              if (v75 != 0) {
                                v76 = __dynamic_cast(v75, GameData_212d670[0],
                                                     GameData_212d690, 0),
                                v126 = COERCE_AS(
                                    __typeof__(v126),
                                    PSEUDO_REGISTER(unsigned long long, "x8",
                                                    "=r"));
                                if (v76 != 0) {
                                  GameRoutine_156c910(v76, "%d", 1,
                                                      (unsigned int)v330),
                                      v126 = COERCE_AS(
                                          __typeof__(v126),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x8", "=r"));
                                }
                              }
                              if (v330 >= *(unsigned __int8*)(v332 + v58)) {
                                v77 = (char*)GameData_212da30 + 36;
                              }
                              else {
                                v77 = (char*)GameData_212da30 + 60;
                              }
                              LODWORD(v341_.v341) = *(_DWORD*)v77;
                              ui_LayoutAccessor_SetTextBoxColor(
                                  v61, (__int64)"T_MaxNum", &v341_.v341),
                                  v126 = COERCE_AS(
                                      __typeof__(v126),
                                      PSEUDO_REGISTER(unsigned long long, "x8",
                                                      "=r"));
                            }
                            goto LABEL_136;
                          }
                        }
                        else {
                          if (v69 >= v63) {
                            v69 %= v63;
                          }
                          if (v69 != v66) {
                            goto LABEL_136;
                          }
                        }
                        v68 = (_QWORD*)*v68;
                        if (v68 == nullptr) {
                          goto LABEL_136;
                        }
                      }
                    }
                  }
                }
              }
            }
          LABEL_137:
            if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              std___1___shared_weak_count___release_weak(v60),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            goto LABEL_93;
          }
        LABEL_136:
          if (v60 != 0) {
            goto LABEL_137;
          }
        }
      LABEL_93:
        if (++v58 == 4) {
          goto LABEL_169;
        }
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"N_SpotInfo", 1),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v12 = (unsigned __int8)Impl_13261c0(a1[3]),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if ((unsigned int)v12 > 5) {
    if (v12 > 9) {
      if (v12 != 10 && v12 != 14) {
        goto LABEL_252;
      }
      LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1], "L_Sight"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v341_.v342 == nullptr) {
        goto LABEL_252;
      }
      v20 = (char*)std___1___shared_weak_count_lock((__int64)v341_.v342),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v25 = v341_.v341;
      if (v20 != nullptr) {
        v26 = v341_.v341;
      }
      else {
        v26 = nullptr;
      }
      if (v341_.v342 != nullptr) {
        std___1___shared_weak_count___release_weak((__int64)v341_.v342),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      if (v26 == nullptr) {
        goto LABEL_169;
      }
      v27 = *(_QWORD**)(a1[3] + 160);
      if (v27 != nullptr) {
        v28 = v27[1];
        LayoutAccessor_155e830((__int64)v25, v28 != 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v28 == 0) {
          goto LABEL_169;
        }
        v29 = v27[1];
        v30 = LayoutAccessor_155fbe0(v25, "L_Item00"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        LayoutAccessor_155e830((__int64)v30, 1),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        GameHr_1562680((__int64)v30, "Item_Default", 0x1.0000000000000p+0f),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v31 = GameHr_6ed030(v29),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v31 != nullptr) {
          v32 = (__int64)v31;
          v33 = ui_LayoutAccessor_FindTextBox(v30, (__int64)"T_Txt"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v33 != 0) {
            GameRoutine_156c5d0(v33, v32, 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
        v34 = LayoutAccessor_155fbe0(v30, "L_Icon"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        GameRoutine_157b170(v34, v29, 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v35 = *(_QWORD*)(*v27 + 48LL);
        v36 = *(_QWORD*)(*v27 + 8LL);
        if (v36 != 0) {
          v37 = strchr(*(const char**)(*v27 + 8LL), 95),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v37 != 0) {
            v36 = v37 + 1;
          }
        }
        v341_.v342 = game_util_Format(GameData_1aa9f0a, v36),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v341_.v341 = (__int64*)game_HashString((__int64)v341_.v342),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v39 = game_GameModeData_instance_ != 0 &&
              (v38 = game_GameVariableTable_Find(
                   *(_QWORD**)(game_GameModeData_instance_ + 48),
                   (unsigned __int64*)&v341_.v341)) != 0 &&
              *(_DWORD*)(v38 + 32) != 0,
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v136 = LayoutAccessor_155fbe0(v25, "L_Item01"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        LayoutAccessor_155e830((__int64)v136, 1),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        GameHr_1562680((__int64)v136, "Item_Rare", 0x1.0000000000000p+0f),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v137 = msg_MessageManager_instance__ptr[0];
        v138 = GameData_212e348;
        if (v39) {
          v139 = GameHr_6ed030(v35),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        else {
          v140 = *msg_MessageManager_instance__ptr[0];
          v341_.v347 = -1;
          v341_.v348 = -1;
          v341_.v349 = -1;
          v341_.v350 = -1;
          v341_.v351 = -1;
          v341_.v352 = -1;
          v341_.v353 = -1;
          v341_.v354 = -1;
          v341_.v355 = -1;
          v341_.v356 = -1;
          v341_.v357 = -1;
          v341_.v358 = -1;
          v341_.v341 = GameData_212e348 + 2;
          v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
          v341_.v343 = 0xFFFF0004FFFF0002LL;
          v341_.v344 = 0xFFFF0006FFFF0005LL;
          v341_.v359 = 8;
          v341_.v345 = -65529;
          v341_.v346 = -65528;
          v139 = GameRoutine_a4dbe0(v140, "MID_Sys_Unknown", 0),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        v141 = (__int64)v139;
        if (v139 != nullptr) {
          v142 = ui_LayoutAccessor_FindTextBox(v136, (__int64)"T_Txt"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v142 != 0) {
            GameRoutine_156c5d0(v142, v141, 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
        v143 = LayoutAccessor_155fbe0(v136, "L_Icon"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        GameRoutine_157b170(v143, v35, 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v144 = game_util_Format("L_Item%02d", 2),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v144, 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v145 = game_util_Format("L_Item%02d", 3),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v145, 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v146 = game_util_Format("L_Item%02d", 4),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v146, 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v147 = game_util_Format("L_Item%02d", 5),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v147, 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v148 = game_util_Format("L_Item%02d", 6),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v148, 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v149 = game_util_Format("L_Item%02d", 7),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v149, 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v150 = *v137;
        v341_.v347 = -1;
        v341_.v348 = -1;
        v341_.v349 = -1;
        v341_.v350 = -1;
        v341_.v351 = -1;
        v341_.v352 = -1;
        v341_.v353 = -1;
        v341_.v354 = -1;
        v341_.v355 = -1;
        v341_.v356 = -1;
        v341_.v357 = -1;
        v341_.v358 = -1;
        v341_.v341 = v138 + 2;
        v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
        v341_.v343 = 0xFFFF0004FFFF0002LL;
        v341_.v344 = 0xFFFF0006FFFF0005LL;
        v341_.v359 = 8;
        v341_.v345 = -65529;
        v341_.v346 = -65528;
        v151 = GameRoutine_a4dbe0(v150, "MID_Gmap_SpotInfo_Explore", 0),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v151 != nullptr) {
          v152 = (__int64)v151;
          v153 = ui_LayoutAccessor_FindTextBox(v25, (__int64)"L_Title/T_Title"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v153 != 0) {
            GameRoutine_156c5d0(v153, v152, 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
        v341_.v341 = v26;
        v341_.v342 = v20;
        if (v20 == nullptr) {
          game_gmap_165b180((__int64)a1, (__int64)&v341_.v341, 1, 2u),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          goto LABEL_252;
        }
        v154 = (__int64)a1;
        v155 = 1;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                  memory_order_relaxed);
        v156 = 2;
      LABEL_239:
        game_gmap_165b180(v154, (__int64)&v341_.v341, v155, v156),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v157 = (__int64)v20;
      LABEL_240:
        std___1___shared_weak_count___release_weak(v157),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        goto LABEL_170;
      }
    LABEL_168:
      LayoutAccessor_155e830((__int64)v25, 0),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      goto LABEL_169;
    }
    if (v12 == 6) {
      LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1], "L_Sight"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v341_.v342 == nullptr) {
        goto LABEL_252;
      }
      v20 = (char*)std___1___shared_weak_count_lock((__int64)v341_.v342),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v25 = v341_.v341;
      if (v20 != nullptr) {
        v81 = v341_.v341;
      }
      else {
        v81 = nullptr;
      }
      if (v341_.v342 != nullptr) {
        std___1___shared_weak_count___release_weak((__int64)v341_.v342),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      if (v81 != nullptr) {
        v82 = a1[3];
        if ((unsigned __int8)Impl_13261c0(v82) == 6) {
          v83 = *(__int64**)(v82 + 152);
          if (v83 != nullptr) {
            v84 = game_821090(4),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (game_GameModeData_instance_ != 0) {
              v85 = game_GameVariableTable_Find(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v84),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v85 != 0 && *(int*)(v85 + 32) >= 1) {
                v86 = game_gmap_1536e70(0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                LayoutAccessor_155e830((__int64)v25, v86 & 1),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if ((v86 & 1) == 0) {
                  goto LABEL_169;
                }
                v331 = v20;
                v87 = 0;
                v333 = GameData_212e348 + 2;
                do {
                  v93 = game_util_Format("L_Item%02d", v87),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  v94 = LayoutAccessor_155fbe0(v25, v93),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  v95 = (v83[2] - v83[1]) >> 3;
                  LayoutAccessor_155e830((__int64)v94, v95 > v87),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  if (v95 > v87) {
                    v96 = v83[4];
                    v97 = *(_QWORD*)(v83[1] + 8 * v87);
                    v98 = GameRoutine_14de200(*v83),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    if (v97 == v96) {
                      v99 = "Item_Rare";
                    }
                    else {
                      v99 = "Item_Default";
                    }
                    GameHr_1562680((__int64)v94, v99, 0x1.0000000000000p+0f),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    if (v97 != v96 || (v98 & 1) != 0) {
                      v100 =
                          *(const char**)(*(_QWORD*)(v83[1] + 8 * v87) + 40LL);
                      v341_.v347 = -1;
                      v341_.v348 = -1;
                      v341_.v349 = -1;
                      v341_.v350 = -1;
                      v341_.v351 = -1;
                      v341_.v352 = -1;
                      v341_.v353 = -1;
                      v341_.v354 = -1;
                      v341_.v355 = -1;
                      v341_.v356 = -1;
                      v341_.v357 = -1;
                      v341_.v358 = -1;
                      v101 = *msg_MessageManager_instance__ptr[0];
                      v341_.v341 = v333;
                      v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
                      v341_.v343 = 0xFFFF0004FFFF0002LL;
                      v341_.v344 = 0xFFFF0006FFFF0005LL;
                      v341_.v359 = 8;
                    }
                    else {
                      v100 = "MID_Sys_Unknown";
                      v101 = *msg_MessageManager_instance__ptr[0];
                      v341_.v347 = -1;
                      v341_.v348 = -1;
                      v341_.v349 = -1;
                      v341_.v350 = -1;
                      v341_.v351 = -1;
                      v341_.v352 = -1;
                      v341_.v353 = -1;
                      v341_.v354 = -1;
                      v341_.v355 = -1;
                      v341_.v356 = -1;
                      v341_.v357 = -1;
                      v341_.v358 = -1;
                      v341_.v341 = GameData_212e348 + 2;
                      v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
                      v341_.v343 = 0xFFFF0004FFFF0002LL;
                      v341_.v344 = 0xFFFF0006FFFF0005LL;
                      v341_.v359 = 8;
                    }
                    v341_.v345 = -65529;
                    v341_.v346 = -65528;
                    v102 = GameRoutine_a4dbe0(v101, v100, 0),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    if (v102 != nullptr) {
                      v103 =
                          ui_LayoutAccessor_FindTextBox(v94, (__int64)"T_Txt"),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                      if (v103 != 0) {
                        GameRoutine_156c5d0(v103, (__int64)v102, 0),
                            v126 = COERCE_AS(__typeof__(v126),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x8", "=r"));
                      }
                    }
                    v92 = LayoutAccessor_155fbe0(v94, "L_Icon"),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    GameRoutine_15853b0(v92, *(_QWORD*)(v83[1] + 8 * v87)),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  }
                  ++v87;
                } while (v87 != 8);
                v233 = *msg_MessageManager_instance__ptr[0];
                v341_.v347 = -1;
                v341_.v348 = -1;
                v341_.v349 = -1;
                v341_.v350 = -1;
                v341_.v351 = -1;
                v341_.v352 = -1;
                v341_.v353 = -1;
                v341_.v354 = -1;
                v341_.v355 = -1;
                v341_.v356 = -1;
                v341_.v357 = -1;
                v341_.v358 = -1;
                v341_.v341 = GameData_212e348 + 2;
                v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
                v341_.v343 = 0xFFFF0004FFFF0002LL;
                v341_.v344 = 0xFFFF0006FFFF0005LL;
                v341_.v359 = 8;
                v341_.v345 = -65529;
                v341_.v346 = -65528;
                v234 = GameRoutine_a4dbe0(v233, "MID_Gmap_SpotInfo_Animal", 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v234 != nullptr) {
                  v235 = (__int64)v234;
                  v236 = ui_LayoutAccessor_FindTextBox(
                      v25, (__int64)"L_Title/T_Title"),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  if (v236 != 0) {
                    GameRoutine_156c5d0(v236, v235, 0),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  }
                }
                v20 = v331;
                v341_.v341 = v81;
                v341_.v342 = v331;
                if (v331 == nullptr) {
                  game_gmap_165b180((__int64)a1, (__int64)&v341_.v341, 0, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  goto LABEL_252;
                }
                v154 = (__int64)a1;
                v155 = 0;
                v156 = 0;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v331 + 16),
                                          1u, memory_order_relaxed);
                goto LABEL_239;
              }
            }
          }
        }
        goto LABEL_168;
      }
      goto LABEL_169;
    }
    if (v12 != 9) {
      goto LABEL_252;
    }
    LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1], "L_Dungeon"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v341_.v342 == nullptr) {
      goto LABEL_252;
    }
    v20 = (char*)std___1___shared_weak_count_lock((__int64)v341_.v342),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v21 = v341_.v341;
    if (v341_.v342 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v341_.v342),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    if (v20 == nullptr || v21 == nullptr) {
      goto LABEL_169;
    }
    ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"L_Treasure", 0),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"L_Open", 0),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v22 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
    v24 = *(_QWORD*)(v22 + 80);
    v23 = *(_QWORD*)(v22 + 88);
    if (v24 == v23) {
      goto LABEL_404;
    }
    while (*(_QWORD*)v24 != *(_QWORD*)(a1[3] + 96)) {
      v24 += 72;
      if (v24 == v23) {
        goto LABEL_404;
      }
    }
    ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"L_Treasure", 1),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    ui_LayoutAccessor_SetPaneVisible(a1[1], (__int64)"L_Open", 1),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    LayoutAccessor_1560070((void*)(&v335_.v335), (__int64*)a1[1],
                           "L_AppropriateLv"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    LayoutAccessor_1560070((void*)(&v339_.v339), (__int64*)a1[1], "L_Treasure"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    GameRoutine_1650a00((__int64)&v335_.v335, (__int64*)&v339_.v339, a1[3]),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v339_.v340 != 0) {
      std___1___shared_weak_count___release_weak(v339_.v340),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    if (v335_.v336 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v335_.v336),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1], "L_Open"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v341_.v342 == nullptr) {
      goto LABEL_404;
    }
    v206 = std___1___shared_weak_count_lock((__int64)v341_.v342),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v207 = v341_.v341;
    if (v206 != 0) {
      v208 = v341_.v341;
    }
    else {
      v208 = nullptr;
    }
    if (v341_.v342 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v341_.v342),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    if (v208 != nullptr) {
      if (*(_DWORD*)(v24 + 16) == 1 && (*(_BYTE*)(v24 + 20) & 6) != 0) {
        LayoutAccessor_155e830((__int64)v207, 1),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        GameHr_1562680((__int64)v207, "Unopen", 0x1.0000000000000p+0f),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v341_.v347 = -1;
        v341_.v348 = -1;
        v341_.v349 = -1;
        v341_.v350 = -1;
        v209 = *msg_MessageManager_instance__ptr[0];
        v341_.v351 = -1;
        v341_.v352 = -1;
        v341_.v353 = -1;
        v341_.v354 = -1;
        v341_.v355 = -1;
        v341_.v356 = -1;
        v341_.v357 = -1;
        v341_.v358 = -1;
        v341_.v341 = GameData_212e348 + 2;
        v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
        v341_.v343 = 0xFFFF0004FFFF0002LL;
        v341_.v344 = 0xFFFF0006FFFF0005LL;
        v341_.v359 = 8;
        v341_.v345 = -65529;
        v341_.v346 = -65528;
        v210 = GameRoutine_a4dbe0(
            v209, "MID_Gmap_SpotInfo_Dungeon_Traverse_CanTraverse", 0),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v210 != nullptr) {
          v211 = (__int64)v210;
          v212 = ui_LayoutAccessor_FindTextBox(v207, (__int64)"T_Txt"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v212 != 0) {
            GameRoutine_156c5d0(v212, v211, 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
        v213 = ui_LayoutAccessor_FindTextBox(v207, (__int64)"T_Txt"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v213 != 0) {
          v214 = v213;
          v215 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v207, (__int64)"T_Txt"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v215 != nullptr) {
            ui_text_190a0c0((float*)&v341_.v341, (__int64)&v360_.v360,
                            (float*)v338, v215, v215[27]),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v216 = (__int64)v360_.v360;
          }
          else {
            v216 = 0;
          }
          v250 = *(_BYTE*)(v214 + 88);
          *(_QWORD*)(v214 + 80) = v216;
          *(_BYTE*)(v214 + 88) = v250 | 0x10;
        }
        v251 = ui_LayoutAccessor_FindAlignment(v207, (__int64)"A_Txt"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v251 != 0) {
          Alignment_56b600(v251),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v252 = v207[1];
          if (v252 != 0) {
            v253 = std___1___shared_weak_count_lock(v252),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v253 != 0) {
              v254 = v253;
              if (*v207 != 0) {
                ControlCreator_13633c0(*v207),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v254 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v254 + 16LL))(v254),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                std___1___shared_weak_count___release_weak(v254),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              }
            }
          }
        }
        v338[0] = v208;
        v338[1] = v206;
        if (v206 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v206 + 16), 1u,
                                    memory_order_relaxed);
          GameHr_165bbf0((__int64)v338),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak(v206),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        LABEL_377:
          if (atomic_fetch_add((atomic_ullong* volatile)(v206 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v206 + 16LL))(v206),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            std___1___shared_weak_count___release_weak(v206),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          goto LABEL_404;
        }
        GameHr_165bbf0((__int64)v338),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      LABEL_404:
        LayoutAccessor_1560070((void*)(&v341_.v341), v21, "L_Ore"),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v341_.v342 == nullptr) {
          goto LABEL_170;
        }
        v255 = std___1___shared_weak_count_lock((__int64)v341_.v342),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v256 = v341_.v341;
        if (v255 != 0) {
          v257 = v341_.v341;
        }
        else {
          v257 = nullptr;
        }
        if (v341_.v342 != nullptr) {
          std___1___shared_weak_count___release_weak((__int64)v341_.v342),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        if (v257 != nullptr) {
          v341_.v342 = nullptr;
          v341_.v343 = 0;
          v341_.v341 = nullptr;
          v258 =
              game_de7fb0(*GameData_212cbf8[0], *(unsigned int**)(a1[3] + 120)),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v259 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v258 != nullptr) {
            game_de77a0((void*)((__int64*)&v360_.v360), (__int64)v258),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            GameRoutine_6f4cd0((__int64*)&v341_.v341, (__int64)v360_.v360,
                               (__int64)v360_.v361, v360_.v361 - v360_.v360),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v360_.v360 != nullptr) {
              v260 = *v259;
              v360_.v361 = v360_.v360;
              v261 = 128;
              if (*(_QWORD*)(v260 + 200) == 0) {
                v261 = 56;
              }
              nn_mem_StandardAllocator_Free(v260 + v261, (__int64)v360_.v360),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
          }
          v262 = v341_.v341;
          v263 = v341_.v342;
          if ((LayoutAccessor_1562b50(v256, "OreOn") & 1) != 0) {
            if (v262 == (__int64*)v263) {
              v264 = "OreOff";
            }
            else {
              v264 = "OreOn";
            }
            GameHr_1562680((__int64)v256, v264, 0x1.0000000000000p+0f),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          else {
            LayoutAccessor_155e830((__int64)v256, v262 != (__int64*)v263),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          if (v262 != (__int64*)v263) {
            v265 = game_util_Format("L_Item%02d", 0),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v266 = LayoutAccessor_155fbe0(v256, v265),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v268 = v341_.v341;
            v267 = v341_.v342;
            v269 = v266;
            LayoutAccessor_155e830((__int64)v266,
                                   v341_.v342 != (char*)v341_.v341),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v267 != (char*)v268) {
              GameHr_1562680((__int64)v269, "Item_Default",
                             0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v270 = GameHr_6ed030(*v341_.v341),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v270 != nullptr) {
                v271 = (__int64)v270;
                v272 = ui_LayoutAccessor_FindTextBox(v269, (__int64)"T_Txt"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v272 != 0) {
                  GameRoutine_156c5d0(v272, v271, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v273 = LayoutAccessor_155fbe0(v269, "L_Icon"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_157b170(v273, *v341_.v341, 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v274 = game_util_Format("L_Item%02d", 1),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v275 = LayoutAccessor_155fbe0(v256, v274),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v276 = v341_.v342 - (char*)v341_.v341;
            LayoutAccessor_155e830(
                (__int64)v275,
                (unsigned __int64)(v341_.v342 - (char*)v341_.v341) > 8),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v276 >= 9) {
              GameHr_1562680((__int64)v275, "Item_Default",
                             0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v277 = GameHr_6ed030(v341_.v341[1]),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v277 != nullptr) {
                v278 = (__int64)v277;
                v279 = ui_LayoutAccessor_FindTextBox(v275, (__int64)"T_Txt"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v279 != 0) {
                  GameRoutine_156c5d0(v279, v278, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v280 = LayoutAccessor_155fbe0(v275, "L_Icon"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_157b170(v280, v341_.v341[1], 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v281 = game_util_Format("L_Item%02d", 2),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v282 = LayoutAccessor_155fbe0(v256, v281),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v283 = v341_.v342 - (char*)v341_.v341;
            LayoutAccessor_155e830(
                (__int64)v282,
                (unsigned __int64)(v341_.v342 - (char*)v341_.v341) > 0x10),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v283 >= 0x11) {
              GameHr_1562680((__int64)v282, "Item_Default",
                             0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v284 = GameHr_6ed030(v341_.v341[2]),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v284 != nullptr) {
                v285 = (__int64)v284;
                v286 = ui_LayoutAccessor_FindTextBox(v282, (__int64)"T_Txt"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v286 != 0) {
                  GameRoutine_156c5d0(v286, v285, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v287 = LayoutAccessor_155fbe0(v282, "L_Icon"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_157b170(v287, v341_.v341[2], 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v288 = game_util_Format("L_Item%02d", 3),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v289 = LayoutAccessor_155fbe0(v256, v288),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v290 = v341_.v342 - (char*)v341_.v341;
            LayoutAccessor_155e830(
                (__int64)v289,
                (unsigned __int64)(v341_.v342 - (char*)v341_.v341) > 0x18),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v290 >= 0x19) {
              GameHr_1562680((__int64)v289, "Item_Default",
                             0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v291 = GameHr_6ed030(v341_.v341[3]),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v291 != nullptr) {
                v292 = (__int64)v291;
                v293 = ui_LayoutAccessor_FindTextBox(v289, (__int64)"T_Txt"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v293 != 0) {
                  GameRoutine_156c5d0(v293, v292, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v294 = LayoutAccessor_155fbe0(v289, "L_Icon"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_157b170(v294, v341_.v341[3], 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v295 = game_util_Format("L_Item%02d", 4),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v296 = LayoutAccessor_155fbe0(v256, v295),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v297 = v341_.v342 - (char*)v341_.v341;
            LayoutAccessor_155e830(
                (__int64)v296,
                (unsigned __int64)(v341_.v342 - (char*)v341_.v341) > 0x20),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v297 >= 0x21) {
              GameHr_1562680((__int64)v296, "Item_Default",
                             0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v298 = GameHr_6ed030(v341_.v341[4]),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v298 != nullptr) {
                v299 = (__int64)v298;
                v300 = ui_LayoutAccessor_FindTextBox(v296, (__int64)"T_Txt"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v300 != 0) {
                  GameRoutine_156c5d0(v300, v299, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v301 = LayoutAccessor_155fbe0(v296, "L_Icon"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_157b170(v301, v341_.v341[4], 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v302 = game_util_Format("L_Item%02d", 5),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v303 = LayoutAccessor_155fbe0(v256, v302),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v304 = v341_.v342 - (char*)v341_.v341;
            LayoutAccessor_155e830(
                (__int64)v303,
                (unsigned __int64)(v341_.v342 - (char*)v341_.v341) > 0x28),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v304 >= 0x29) {
              GameHr_1562680((__int64)v303, "Item_Default",
                             0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v305 = GameHr_6ed030(v341_.v341[5]),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v305 != nullptr) {
                v306 = (__int64)v305;
                v307 = ui_LayoutAccessor_FindTextBox(v303, (__int64)"T_Txt"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v307 != 0) {
                  GameRoutine_156c5d0(v307, v306, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v308 = LayoutAccessor_155fbe0(v303, "L_Icon"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_157b170(v308, v341_.v341[5], 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v309 = game_util_Format("L_Item%02d", 6),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v310 = LayoutAccessor_155fbe0(v256, v309),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v311 = v341_.v342 - (char*)v341_.v341;
            LayoutAccessor_155e830(
                (__int64)v310,
                (unsigned __int64)(v341_.v342 - (char*)v341_.v341) > 0x30),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v311 >= 0x31) {
              GameHr_1562680((__int64)v310, "Item_Default",
                             0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v312 = GameHr_6ed030(v341_.v341[6]),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v312 != nullptr) {
                v313 = (__int64)v312;
                v314 = ui_LayoutAccessor_FindTextBox(v310, (__int64)"T_Txt"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v314 != 0) {
                  GameRoutine_156c5d0(v314, v313, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v315 = LayoutAccessor_155fbe0(v310, "L_Icon"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_157b170(v315, v341_.v341[6], 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v316 = game_util_Format("L_Item%02d", 7),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v317 = LayoutAccessor_155fbe0(v256, v316),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v318 = v341_.v342 - (char*)v341_.v341;
            LayoutAccessor_155e830(
                (__int64)v317,
                (unsigned __int64)(v341_.v342 - (char*)v341_.v341) > 0x38),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v318 >= 0x39) {
              GameHr_1562680((__int64)v317, "Item_Default",
                             0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v319 = GameHr_6ed030(v341_.v341[7]),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v319 != nullptr) {
                v320 = (__int64)v319;
                v321 = ui_LayoutAccessor_FindTextBox(v317, (__int64)"T_Txt"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v321 != 0) {
                  GameRoutine_156c5d0(v321, v320, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v322 = LayoutAccessor_155fbe0(v317, "L_Icon"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_157b170(v322, v341_.v341[7], 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            LayoutAccessor_1562cf0((__int64)v21, "Animal"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          v360_.v360 = v257;
          v360_.v361 = (__int64*)v255;
          if (v255 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v255 + 16), 1u,
                                      memory_order_relaxed);
            game_gmap_165b180((__int64)a1, (__int64)&v360_.v360, 0, 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            std___1___shared_weak_count___release_weak(v255),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          else {
            game_gmap_165b180((__int64)a1, (__int64)&v360_.v360, 0, 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          if (v341_.v341 != nullptr) {
            v323 = *v259;
            v341_.v342 = (char*)v341_.v341;
            v324 = 128;
            if (*(_QWORD*)(v323 + 200) == 0) {
              v324 = 56;
            }
            nn_mem_StandardAllocator_Free(v323 + v324, (__int64)v341_.v341),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
        if (v255 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v255 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_170;
        }
        (*(void (**)(__int64))(*(_QWORD*)v255 + 16LL))(v255),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v157 = v255;
        goto LABEL_240;
      }
      LayoutAccessor_155e830((__int64)v207, 0),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    if (v206 != 0) {
      goto LABEL_377;
    }
    goto LABEL_404;
  }
  if (v12 <= 3) {
    if ((unsigned int)v12 < 2) {
      LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1], "L_Hub"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v339_.v339 = nullptr;
      if (v341_.v342 == nullptr) {
        goto LABEL_252;
      }
      v13 = std___1___shared_weak_count_lock((__int64)v341_.v342),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v339_.v340 = v13;
      if (v13 != 0) {
        v14 = v341_.v341;
        v339_.v339 = v341_.v341;
        v15 = v341_.v342;
        if (v341_.v342 == nullptr) {
        LABEL_21:
          if (v14 == nullptr || (LayoutAccessor_155e830((__int64)v14, 0),
                                 (game_gmap_1536e70(2) & 1) == 0)) {
          LABEL_250:
            if (v13 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) != 0) {
              goto LABEL_252;
            }
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v91 = v13;
          LABEL_172:
            std___1___shared_weak_count___release_weak(v91),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            goto LABEL_252;
          }
          v16 = a1[3];
          v360_.v361 = nullptr;
          v360_.v362 = 0;
          v360_.v360 = nullptr;
          v17 = *(_QWORD*)(v16 + 280);
          if (v17 == 0 ||
              (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v17 + 24LL))(v17) ==
                      1 &&
                  ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v16 + 280) + 112LL))(
                       *(_QWORD*)(v16 + 280)) &
                   1) != 0 ||
              (v18 = *(_QWORD*)(v16 + 280)) == 0) {
            if (*(_BYTE*)(a1[3] + 116) == 1) {
              v341_.v342 = (char*)&GameData_1a8afc6;
              v341_.v341 =
                  (__int64*)game_HashString((__int64)&GameData_1a8afc6),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (game_GameModeData_instance_ != 0) {
                v104 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)&v341_.v341),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v104 != 0) {
                  v19 = *(_DWORD*)(v104 + 32);
                  goto LABEL_196;
                }
              }
            }
          }
          else if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v18 + 24LL))(
                       v18) == 3) {
            v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 176LL))(v18),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          LABEL_196:
            SpotAttachmentRecruit_15189e0((__int64)&v360_.v360, a1[3], v19),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v105 = (__int64)v360_.v360;
            if (v360_.v360 != v360_.v361) {
              LayoutAccessor_155e830((__int64)v14, 1),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v335_.v337 = a1;
              v335_.v335 = &v339_.v339;
              v335_.v336 = (__int64*)&v360_.v360;
              v106 = v360_.v361 - v360_.v360;
              v107 = (*(__int64 (**)(__int64*))(*a1 + 40))(a1),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v108 = LayoutAccessor_155fbe0(v339_.v339, "L_Rest"),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              LayoutAccessor_155e830((__int64)v108, v106 > v107),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v109 = (*(__int64 (**)(__int64*))(*a1 + 40))(a1),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v106 <= v107) {
                if (v109 >= 1) {
                  v158 = 0;
                  do {
                    GmapSpotInfoSetterForGmap_165b440(
                        &v335_.v335, v158, v158 < v360_.v361 - v360_.v360),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    ++v158;
                  } while ((__int64)v158 <
                           (*(int (**)(__int64*))(*a1 + 40))(a1));
                }
              }
              else {
                v110 = v109 - 1;
                if ((*(int (**)(__int64*))(*a1 + 40))(a1) >= 1) {
                  v111 = 0;
                  do {
                    GmapSpotInfoSetterForGmap_165b440(&v335_.v335, v111,
                                                      v111 < v110),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    ++v111;
                  } while (v111 < (*(int (**)(__int64*))(*a1 + 40))(a1));
                }
                v112 = ((unsigned __int64)((char*)v360_.v361 -
                                           (char*)v360_.v360) >>
                        3) -
                       v110;
                LayoutAccessor_1562cf0((__int64)v108, "Default"),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                v113 = msg_MessageManager_instance__ptr[0];
                GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                              v112, 0),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                v114 = *v113;
                v341_.v347 = -1;
                v341_.v348 = -1;
                v341_.v349 = -1;
                v341_.v350 = -1;
                v341_.v351 = -1;
                v341_.v352 = -1;
                v341_.v353 = -1;
                v341_.v354 = -1;
                v341_.v355 = -1;
                v341_.v356 = -1;
                v341_.v357 = -1;
                v341_.v358 = -1;
                v341_.v341 = GameData_212e348 + 2;
                v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
                v341_.v343 = 0xFFFF0004FFFF0002LL;
                v341_.v344 = 0xFFFF0006FFFF0005LL;
                v341_.v359 = 8;
                v341_.v345 = -65529;
                v341_.v346 = -65528;
                v115 = GameRoutine_a4dbe0(
                    v114, "MID_Gmap_SpotInfo_Recruit_OtherLegions", 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v115 != nullptr) {
                  v116 = (__int64)v115;
                  v117 = ui_LayoutAccessor_FindTextBox(v108, (__int64)"T_Txt"),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  if (v117 != 0) {
                    GameRoutine_156c5d0(v117, v116, 0),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  }
                }
              }
              v105 = (__int64)v360_.v360;
            }
            if (v105 != 0) {
              v360_.v361 = (__int64*)v105;
              v159 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v159 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v159, v105),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v13 = v339_.v340;
            goto LABEL_250;
          }
          v19 = 0;
          goto LABEL_196;
        }
      }
      else {
        v14 = nullptr;
        v15 = v341_.v342;
        if (v341_.v342 == nullptr) {
          goto LABEL_21;
        }
      }
      std___1___shared_weak_count___release_weak((__int64)v15),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      goto LABEL_21;
    }
    if (v12 != 3) {
      goto LABEL_252;
    }
    LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1], "L_Station"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v341_.v342 == nullptr) {
      goto LABEL_252;
    }
    v20 = (char*)std___1___shared_weak_count_lock((__int64)v341_.v342),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v78 = v341_.v341;
    if (v341_.v342 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v341_.v342),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    if (v20 == nullptr || v78 == nullptr) {
      goto LABEL_169;
    }
    v79 = GmapUIDef_1654a80(a1[3]),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v79 == 2) {
      LayoutAccessor_1562cf0(a1[1], "Station_None"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (((*(__int64 (**)(__int64*))(*a1 + 32))(a1) & 1) == 0) {
        v80 = "MID_Gmap_UnusableSpot";
        goto LABEL_315;
      }
    LABEL_170:
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_252;
      }
      (*(void (**)(char*))(*(_QWORD*)v20 + 16LL))(v20),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v91 = (__int64)v20;
      goto LABEL_172;
    }
    if (v79 == 1) {
      LayoutAccessor_1562cf0(a1[1], "Station_None"),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (((*(__int64 (**)(__int64*))(*a1 + 32))(a1) & 1) == 0) {
        v80 = "MID_Gmap_UnusableSpot_Temporarily";
      LABEL_315:
        v341_.v341 = (__int64*)"IconState_Disable";
        v341_.v342 = (char*)v80;
        HIDWORD(v341_.v343) = 0;
        LOBYTE(v341_.v343) = 1;
        game_gmap_165b330_alt1((__int64**)a1, (__int64*)&v341_.v341),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        goto LABEL_170;
      }
      goto LABEL_170;
    }
    LayoutAccessor_1562cf0((__int64)v78, "Default"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    GmapUIDef_1654700((void*)((__int64*)&v341_.v341), a1[3]),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v198 = v341_.v341;
    v199 = v341_.v342;
    v200 = (v341_.v342 - (char*)v341_.v341) >> 4;
    if (v200 < 1) {
      v204 = 0;
    LABEL_341:
      game_165dd80((__int64)v198, v199, v200, 0, v204),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      v201 = (v341_.v342 - (char*)v341_.v341) >> 4;
      v202 = GameData_212c060;
      while (1) {
        v203 = GameRoutine_1a09d20(16 * v201, v202),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v203 != 0) {
          break;
        }
        v204 = v201 >> 1;
        v205 = v201 > 1;
        v201 >>= 1;
        if (!v205) {
          goto LABEL_341;
        }
      }
      v217 = v203;
      game_165dd80((__int64)v198, v199, v200, v203, v201),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v218 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v218 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v218, v217),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    v219 = a1[3];
    v220 = *(unsigned __int8*)(v219 + 176);
    if (v220 == 2) {
      v221 = v341_.v341;
      v222 = v341_.v342;
      if (v341_.v341 != (__int64*)v341_.v342) {
        goto LABEL_351;
      }
    }
    else if (v220 == 3) {
      v221 = v341_.v341;
      v222 = v341_.v342;
      if (v341_.v341 != (__int64*)v341_.v342) {
        if (*(_BYTE*)(v219 + 112) == 0) {
        LABEL_358:
          i = 0;
          do {
            if (*((_DWORD*)v221 + 2) != 5) {
              v228 = game_util_Format("L_Station%02d", i),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v229 = LayoutAccessor_155fbe0(v78, v228),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              LayoutAccessor_155e830((__int64)v229, 1),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v230 = "MID_Sys_Unknown";
              if (*((_DWORD*)v221 + 2) != 4) {
                v230 = GameRoutine_adf880(*(_QWORD*)(*v221 + 40), 0),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              }
              LayoutAccessor_1562060(v229, (__int64)"T_Txt", v230),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (*((_DWORD*)v221 + 2) != 0) {
                v227 = "DisableDefault";
              }
              else {
                v227 = "Default";
              }
              GameHr_1562680((__int64)v229, v227, 0x1.0000000000000p+0f),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ++i;
            }
            v221 += 2;
          } while (v221 != (__int64*)v222);
          goto LABEL_367;
        }
      LABEL_351:
        i = 0;
        do {
          if (*((_DWORD*)v221 + 2) != 5) {
            v224 = game_util_Format("L_Station%02d", i),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v225 = LayoutAccessor_155fbe0(v78, v224),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            LayoutAccessor_155e830((__int64)v225, 1),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v226 = "MID_Sys_Unknown";
            if (*((_DWORD*)v221 + 2) != 4) {
              v226 = GameRoutine_adf880(*(_QWORD*)(*v221 + 40), 0),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            LayoutAccessor_1562060(v225, (__int64)"T_Txt", v226),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            GameHr_1562680((__int64)v225, "DisableDefault",
                           0x1.0000000000000p+0f),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            ++i;
          }
          v221 += 2;
        } while (v221 != (__int64*)v222);
      LABEL_367:
        if (i >= 8) {
          goto LABEL_371;
        }
        goto LABEL_370;
      }
    }
    else {
      v221 = v341_.v341;
      v222 = v341_.v342;
      if (v341_.v341 != (__int64*)v341_.v342) {
        goto LABEL_358;
      }
    }
    for (i = 0; i != 8; ++i) {
    LABEL_370:
      v231 = game_util_Format("L_Station%02d", i),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      ui_LayoutAccessor_SetPaneVisible((__int64)v78, (__int64)v231, 0),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  LABEL_371:
    if (v341_.v341 != nullptr) {
      v341_.v342 = (char*)v341_.v341;
      v232 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v232 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v232, (__int64)v341_.v341),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    goto LABEL_169;
  }
  if (v12 != 4) {
    LayoutAccessor_1560070((void*)(&v341_.v341), (__int64*)a1[1], "L_Sight"),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v341_.v342 == nullptr) {
      goto LABEL_252;
    }
    v20 = (char*)std___1___shared_weak_count_lock((__int64)v341_.v342),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v25 = v341_.v341;
    if (v20 != nullptr) {
      v40 = v341_.v341;
    }
    else {
      v40 = nullptr;
    }
    if (v341_.v342 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v341_.v342),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    if (v40 != nullptr) {
      v41 = a1[3];
      if ((unsigned __int8)Impl_13261c0(v41) == 5) {
        v42 = *(__int64**)(v41 + 144);
        if (v42 != nullptr) {
          v43 = game_821090(4),
          v126 = COERCE_AS(__typeof__(v126),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (game_GameModeData_instance_ != 0) {
            v44 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v43),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v44 != 0) {
              v45 = *(_DWORD*)(v44 + 32);
              LayoutAccessor_155e830((__int64)v25, v45 > 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v45 < 1) {
                goto LABEL_169;
              }
              v325 = v40;
              v47 = v42[1];
              v46 = v42[2];
              if (v47 == v46) {
                v48 = 0;
              }
              else {
                v48 = 0;
                v326 = GameData_212e348 + 2;
                v328 = v42[2];
                do {
                  if (v48 >= (unsigned __int64)((v42[2] - v42[1]) >> 3)) {
                    break;
                  }
                  v119 = *(_BYTE**)v47;
                  v120 = *(_QWORD*)(*(_QWORD*)v47 + 48LL);
                  if (v120 != 0 && (v119[57] != 1 || v119[56] != 0)) {
                    v334 = v48;
                    v121 = game_util_Format("L_Item%02d", v48),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    v122 = LayoutAccessor_155fbe0(v25, v121),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    v123 = (unsigned __int8)v119[58];
                    v125 = game_GmapExploreData_GetShowRareFlagName(*v42),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    v127 = v125;
                    if (v125 != nullptr) {
                      v341_.v342 = v125;
                      v128 = (__int64*)game_HashString((__int64)v125),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                      v126 = game_GameModeData_instance_;
                      v341_.v341 = v128;
                      if (game_GameModeData_instance_ != 0) {
                        v129 = game_GameVariableTable_Find(
                            *(_QWORD**)(game_GameModeData_instance_ + 48),
                            (unsigned __int64*)&v341_.v341),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                        v126 = v129 != 0 && *(_DWORD*)(v129 + 32) != 0;
                      }
                    }
                    v130 = (v127 != nullptr) & v126;
                    if (v123 != 0) {
                      v131 = "Item_Rare";
                    }
                    else {
                      v131 = "Item_Default";
                    }
                    GameHr_1562680((__int64)v122, v131, 0x1.0000000000000p+0f),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    if ((v130 & 1) != 0 || v123 == 0) {
                      v133 = GameHr_6ed030(v120),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    }
                    else {
                      v132 = *msg_MessageManager_instance__ptr[0];
                      v341_.v347 = -1;
                      v341_.v348 = -1;
                      v341_.v349 = -1;
                      v341_.v350 = -1;
                      v341_.v351 = -1;
                      v341_.v352 = -1;
                      v341_.v353 = -1;
                      v341_.v354 = -1;
                      v341_.v355 = -1;
                      v341_.v356 = -1;
                      v341_.v357 = -1;
                      v341_.v358 = -1;
                      v341_.v341 = v326;
                      v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
                      v341_.v343 = 0xFFFF0004FFFF0002LL;
                      v341_.v344 = 0xFFFF0006FFFF0005LL;
                      v341_.v359 = 8;
                      v341_.v345 = -65529;
                      v341_.v346 = -65528;
                      v133 = GameRoutine_a4dbe0(v132, "MID_Sys_Unknown", 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    }
                    v134 = (__int64)v133;
                    if (v133 != nullptr) {
                      v135 =
                          ui_LayoutAccessor_FindTextBox(v122, (__int64)"T_Txt"),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                      if (v135 != 0) {
                        GameRoutine_156c5d0(v135, v134, 0),
                            v126 = COERCE_AS(__typeof__(v126),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x8", "=r"));
                      }
                    }
                    v118 = LayoutAccessor_155fbe0(v122, "L_Icon"),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    GameRoutine_157b170(v118, v120, 0),
                        v126 = COERCE_AS(
                            __typeof__(v126),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    v46 = v328;
                    v48 = v334 + 1;
                  }
                  v47 += 8;
                } while (v47 != v46);
              }
              v237 = game_util_Format("L_Item%02d", 0),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v237,
                                               v48 > 0),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v238 = game_util_Format("L_Item%02d", 1),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v238,
                                               v48 > 1),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v239 = game_util_Format("L_Item%02d", 2),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v239,
                                               v48 > 2),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v240 = game_util_Format("L_Item%02d", 3),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v240,
                                               v48 > 3),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v241 = game_util_Format("L_Item%02d", 4),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v241,
                                               v48 > 4),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v242 = game_util_Format("L_Item%02d", 5),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v242,
                                               v48 > 5),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v243 = game_util_Format("L_Item%02d", 6),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v243,
                                               v48 > 6),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v244 = game_util_Format("L_Item%02d", 7),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)v244,
                                               v48 > 7),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v341_.v347 = -1;
              v341_.v348 = -1;
              v341_.v349 = -1;
              v341_.v350 = -1;
              v245 = *msg_MessageManager_instance__ptr[0];
              v341_.v351 = -1;
              v341_.v352 = -1;
              v341_.v353 = -1;
              v341_.v354 = -1;
              v341_.v355 = -1;
              v341_.v356 = -1;
              v341_.v357 = -1;
              v341_.v358 = -1;
              v341_.v341 = GameData_212e348 + 2;
              v341_.v342 = (char*)0xFFFF0001FFFF0000LL;
              v341_.v343 = 0xFFFF0004FFFF0002LL;
              v341_.v344 = 0xFFFF0006FFFF0005LL;
              v341_.v359 = 8;
              v341_.v345 = -65529;
              v341_.v346 = -65528;
              v246 = GameRoutine_a4dbe0(v245, "MID_Gmap_SpotInfo_Explore", 0),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (v246 != nullptr) {
                v247 = (__int64)v246;
                v248 = ui_LayoutAccessor_FindTextBox(
                    v25, (__int64)"L_Title/T_Title"),
                v126 =
                    COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v248 != 0) {
                  GameRoutine_156c5d0(v248, v247, 0),
                      v126 = COERCE_AS(
                          __typeof__(v126),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v249 = GameRoutine_135c1a0((__int64)v42),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              (*(void (**)(__int64*, bool))(*a1 + 80))(a1, v249),
                  v126 = COERCE_AS(
                      __typeof__(v126),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v341_.v341 = v325;
              v341_.v342 = v20;
              if (v20 == nullptr) {
                game_gmap_165b180((__int64)a1, (__int64)&v341_.v341, 1, v48),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                goto LABEL_252;
              }
              v155 = 1;
              v154 = (__int64)a1;
              v156 = v48;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                        memory_order_relaxed);
              goto LABEL_239;
            }
          }
        }
      }
      goto LABEL_168;
    }
  LABEL_169:
    if (v20 == nullptr) {
      goto LABEL_252;
    }
    goto LABEL_170;
  }
  if (((*(__int64 (**)(__int64*))(*a1 + 32))(a1) & 1) == 0) {
    v88 = GameHr_1651170(a1[3]),
    v126 = COERCE_AS(__typeof__(v126),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v88 == 4) {
      v89 = "MID_Gmap_UnusableSpot";
      v90 = (__int64*)&v341_.v341;
    }
    else {
      if (v88 != 5) {
        goto LABEL_252;
      }
      v89 = "MID_Gmap_UnusableSpot_Temporarily";
      v90 = (__int64*)&v360_.v360;
    }
    *((_DWORD*)v90 + 5) = 0;
    *v90 = (__int64)"IconState_Impassable";
    v90[1] = (__int64)v89;
    *((_BYTE*)v90 + 16) = 1;
    game_gmap_165b330_alt1((__int64**)a1, v90),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
LABEL_252:
  v160 = (_QWORD*)a1[5];
  for (j = (_QWORD*)a1[6]; v160 != j; v160 += 9) {
    v162 = v160[2];
    if (v160[3] != v162) {
      v163 = 0;
      v164 = 0;
      do {
        v165 = *(__int64**)(v162 + v163);
        v166 = ui_LayoutAccessor_FindAlignment(v165,
                                               *(_QWORD*)(v160[5] + 8 * v164)),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v166 != 0) {
          Alignment_56b600(v166),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v167 = v165[1];
          if (v167 != 0) {
            v168 = std___1___shared_weak_count_lock(v167),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v168 != 0) {
              v169 = v168;
              if (*v165 != 0) {
                ControlCreator_13633c0(*v165),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v169 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                std___1___shared_weak_count___release_weak(v169),
                    v126 = COERCE_AS(
                        __typeof__(v126),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              }
            }
          }
        }
        v162 = v160[2];
        ++v164;
        v163 += 16;
      } while (v164 < (v160[3] - v162) >> 4);
    }
  }
  v170 = ui_LayoutAccessor_FindPane((__int64*)a1[1], (__int64)"A_IconFacility"),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v170 != 0) {
    v171 = *(_QWORD*)(v170 + 40);
    if (v171 == v170 + 32) {
    LABEL_269:
      *(_BYTE*)(v170 + 88) &= ~1u;
    }
    else {
      while ((*(_BYTE*)(v171 + 80) & 1) == 0) {
        v171 = *(_QWORD*)(v171 + 8);
        if (v171 == v170 + 32) {
          goto LABEL_269;
        }
      }
    }
  }
  v172 = ui_LayoutAccessor_FindPane((__int64*)a1[1], (__int64)"A_Genre"),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v172 != 0) {
    v173 = *(_QWORD*)(v172 + 40);
    if (v173 == v172 + 32) {
    LABEL_274:
      *(_BYTE*)(v172 + 88) &= ~1u;
    }
    else {
      while ((*(_BYTE*)(v173 + 80) & 1) == 0) {
        v173 = *(_QWORD*)(v173 + 8);
        if (v173 == v172 + 32) {
          goto LABEL_274;
        }
      }
    }
  }
  v174 = ui_LayoutAccessor_FindPane((__int64*)a1[1], (__int64)"A_Info01"),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v174 != 0) {
    v175 = *(_QWORD*)(v174 + 40);
    if (v175 == v174 + 32) {
    LABEL_279:
      v176 = *(_BYTE*)(v174 + 88) & 0xFE;
    }
    else {
      while ((*(_BYTE*)(v175 + 80) & 1) == 0) {
        v175 = *(_QWORD*)(v175 + 8);
        if (v175 == v174 + 32) {
          goto LABEL_279;
        }
      }
      v176 = *(_BYTE*)(v174 + 88) | 1;
    }
    *(_BYTE*)(v174 + 88) = v176;
  }
  v177 = (__int64*)a1[1];
  v178 = ui_LayoutAccessor_FindAlignment(v177, (__int64)"A_Genre"),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v178 != 0) {
    Alignment_56b600(v178),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v179 = v177[1];
    if (v179 != 0) {
      v180 = std___1___shared_weak_count_lock(v179),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v180 != 0) {
        v181 = v180;
        if (*v177 != 0) {
          ControlCreator_13633c0(*v177),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v181 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v181 + 16LL))(v181),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak(v181),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
    }
  }
  v182 = (__int64*)a1[1];
  v183 = ui_LayoutAccessor_FindAlignment(v182, (__int64)"A_Spot"),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v183 != 0) {
    Alignment_56b600(v183),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v184 = v182[1];
    if (v184 != 0) {
      v185 = std___1___shared_weak_count_lock(v184),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v185 != 0) {
        v186 = v185;
        if (*v182 != 0) {
          ControlCreator_13633c0(*v182),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v186 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v186 + 16LL))(v186),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak(v186),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
    }
  }
  v187 = (__int64*)a1[1];
  v188 = ui_LayoutAccessor_FindAlignment(v187, (__int64)"A_Info01"),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v188 != 0) {
    Alignment_56b600(v188),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v189 = v187[1];
    if (v189 != 0) {
      v190 = std___1___shared_weak_count_lock(v189),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v190 != 0) {
        v191 = v190;
        if (*v187 != 0) {
          ControlCreator_13633c0(*v187),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v191 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v191 + 16LL))(v191),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak(v191),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
    }
  }
  v192 = (__int64*)a1[1];
  v193 = ui_LayoutAccessor_FindAlignment(v192, (__int64)"A_Info00"),
  v126 = COERCE_AS(__typeof__(v126),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v193 != 0) {
    Alignment_56b600(v193),
        v126 = COERCE_AS(__typeof__(v126),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v194 = v192[1];
    if (v194 != 0) {
      v195 = std___1___shared_weak_count_lock(v194),
      v126 = COERCE_AS(__typeof__(v126),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v195 != 0) {
        v196 = v195;
        if (*v192 != 0) {
          ControlCreator_13633c0(*v192),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v196 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v196 + 16LL))(v196),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak(v196),
              v126 = COERCE_AS(__typeof__(v126),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
    }
  }
  return (*(__int64 (**)(__int64*))(*a1 + 48))(a1);
}

void game_gmap_1659b80(__int64** a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  _BYTE* v5;
  char v6;
  const char* v7;
  int v8;
  unsigned __int16 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64** v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  unsigned int* v28;
  __int64 v29;
  const char* v30;
  char v31;
  const char* v32;
  const char* v33;
  __int64 v34;
  unsigned __int8 v35;
  __int64 v36;
  int v37;
  __int64* v38;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  __int64 v47;
  char* v48;
  char* v49;
  const char* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  const char* v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  char* v58;
  _QWORD* v59;
  __int64 v60;
  char* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  const char* v68;
  char* v69;
  __int64 v70;
  char* v71;
  __int64 v72;
  char* v73;
  __int64 v74;
  char* v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  char* v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  char* v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  char* v89;
  __int64 v90;
  char* v91;
  __int64 v92;
  char* v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  void* v101;
  unsigned int v102;
  char v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  char* v108;
  __int64 v109;
  unsigned __int8* v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64* v113;
  const char* v114;
  char v115;
  bool v116;
  unsigned __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  bool v120;
  __int16* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  int v130;
  __int16* v131;
  int v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  int v140;
  __int64* v141;
  __int64 v142;
  bool v143;
  int v144;
  __int128 v145;
  char* v146;
  struct {
    __int128 v147;
    __int64* v148;
    unsigned __int64 v149;
    int v150;
    int v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
    __int64 v163;
    __int64 v164;
  } v147_;

  v2 = (__int64)a1[3];
  v3 = *(_QWORD*)(v2 + 120);
  v4 = Impl_13261c0(v2);
  v5 = (char*)&v147_.v147 + 6;
  switch (v4) {
  case 0:
    LOBYTE(v147_.v147) = 6;
    v5 = (char*)&v147_.v147 + 4;
    *(_WORD*)((char*)&v147_.v147 + 1) = 30024;
    BYTE3(v147_.v147) = 98;
    break;
  case 1:
    LOBYTE(v147_.v147) = 18;
    v5 = (char*)&v147_.v147 + 10;
    BYTE9(v147_.v147) = 101;
    v7 = "HubSimple";
    goto LABEL_7;
  case 2:
    LOBYTE(v147_.v147) = 12;
    v5 = (char*)&v147_.v147 + 7;
    *(_DWORD*)((char*)&v147_.v147 + 1) = 1886217556;
    *(_WORD*)((char*)&v147_.v147 + 5) = 25964;
    break;
  case 3:
    LOBYTE(v147_.v147) = 14;
    *(_DWORD*)((char*)&v147_.v147 + 1) = 1952543827;
    v9 = 26996;
    goto LABEL_12;
  case 4:
    LOBYTE(v147_.v147) = 8;
    v10 = 1702125895;
    goto LABEL_15;
  case 5:
  case 6:
    qmemcpy(&v147_.v147, "\nSigh", 5);
    v6 = 116;
    goto LABEL_17;
  case 7:
    LOBYTE(v147_.v147) = 14;
    *(_DWORD*)((char*)&v147_.v147 + 1) = 1903059266;
    v8 = 1952806257;
    goto LABEL_13;
  case 8:
    LOBYTE(v147_.v147) = 8;
    v10 = 1953656646;
  LABEL_15:
    *(_DWORD*)((char*)&v147_.v147 + 1) = v10;
    v5 = (char*)&v147_.v147 + 5;
    break;
  case 9:
    LOBYTE(v147_.v147) = 14;
    *(_DWORD*)((char*)&v147_.v147 + 1) = 1735292228;
    v9 = 25959;
  LABEL_12:
    v8 = v9 | 0x6E6F0000;
  LABEL_13:
    DWORD1(v147_.v147) = v8;
    v5 = (char*)&v147_.v147 + 8;
    break;
  case 10:
  case 14:
    LOBYTE(v147_.v147) = 24;
    v5 = (char*)&v147_.v147 + 13;
    *(_DWORD*)((char*)&v147_.v147 + 9) = 1852795252;
    v7 = "Construction";
  LABEL_7:
    *(_QWORD*)((char*)&v147_.v147 + 1) = *(_QWORD*)v7;
    break;
  default:
    qmemcpy(&v147_.v147, "\nSmal", 5);
    v6 = 108;
  LABEL_17:
    BYTE5(v147_.v147) = v6;
    break;
  }
  v11 = (__int64)a1[1];
  *v5 = 0;
  GameHr_1562680(v11, (const char*)&v147_.v147 + 1, 0x1.0000000000000p+0f);
  if ((v147_.v147 & 1) != 0) {
    v12 = v147_.v148;
  }
  else {
    v12 = (__int64*)((char*)&v147_.v147 + 1);
  }
  LayoutAccessor_1563030((__int64)a1[1], (__int64)v12, 0);
  if ((v147_.v147 & 1) != 0 && v147_.v148 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v147_.v148);
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)a1[1], (__int64)"L_Info", 0);
  v14 = (__int64)a1[3];
  v15 = GameData_212c790;
  if (v14 == 0) {
  LABEL_39:
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_45;
    }
    v22 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    if (v22 == 3) {
      v23 = *(__int64***)(*GameData_2130e60 + 8);
      v24 = *v23;
      v25 = v23[1];
      if (v24 != v25) {
        while (1) {
          v26 = *v24++;
          if (*(_QWORD*)(*(_QWORD*)(v26 + 112) + 48LL) ==
              *(_QWORD*)(v14 + 120)) {
            break;
          }
          if (v24 == v25) {
            goto LABEL_44;
          }
        }
        *(_QWORD*)&v147_.v147 = "IconState_Miasma";
        *((_QWORD*)&v147_.v147 + 1) = "MID_Gmap_UnusableSpot_Miasma";
        LOBYTE(v147_.v148) = 1;
        HIDWORD(v147_.v148) = 1;
        goto LABEL_69;
      }
    }
  LABEL_44:
    if ((*(_BYTE*)(v14 + 178) & 4) != 0) {
      v31 = ((__int64 (*)(__int64**))(*a1)[4])(a1);
      if (v22 == 3) {
        v32 = "IconState_Broken";
        v33 = "MID_Gmap_UnusableSpot_Broken";
        if ((v31 & 1) != 0) {
          v32 = nullptr;
        }
        goto LABEL_56;
      }
      if ((v31 & 1) != 0) {
        goto LABEL_70;
      }
    }
    else {
    LABEL_45:
      if ((((__int64 (*)(__int64**))(*a1)[4])(a1) & 1) != 0) {
        goto LABEL_70;
      }
    }
    v27 = (__int64)a1[3];
    v28 = game_gmap_SpotMgr_GetCurrentSpot();
    v29 = (__int64)a1[3];
    if ((unsigned int*)v27 != v28 &&
        ((*(_BYTE*)(v29 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
      if (GameHr_1328300((__int64)a1[3])) {
        if ((GameHr_1328460(v29) & 1) != 0) {
          v30 = "MID_Gmap_SpotInfo_TempleWarp_Opened";
        LABEL_67:
          *(_QWORD*)&v147_.v147 = 0;
          *((_QWORD*)&v147_.v147 + 1) = v30;
          goto LABEL_68;
        }
        if ((unsigned __int8)Impl_13261c0((__int64)a1[3]) != 2) {
          goto LABEL_70;
        }
        v32 = "IconState_Disable";
        v33 = "MID_Gmap_SpotInfo_TempleWarp_Unopened";
      LABEL_56:
        *(_QWORD*)&v147_.v147 = v32;
        *((_QWORD*)&v147_.v147 + 1) = v33;
      LABEL_68:
        HIDWORD(v147_.v148) = 0;
        LOBYTE(v147_.v148) = 1;
      LABEL_69:
        game_gmap_165b330_alt1(a1, (__int64*)&v147_.v147);
        goto LABEL_70;
      }
      if ((unsigned __int8)Impl_13261c0((__int64)a1[3]) == 2) {
        v30 = "MID_Gmap_SpotInfo_TempleWarp_Null";
        goto LABEL_67;
      }
      v29 = (__int64)a1[3];
    }
    if ((Impl_132a360(v29) & 1) == 0) {
      goto LABEL_70;
    }
    v30 = "MID_Gmap_SpotInfo_ExWarp_Opened";
    goto LABEL_67;
  }
  v16 = *(_QWORD*)(*GameData_212c790 + 8);
  v17 = *(__int64**)(v16 + 8);
  v18 = *(__int64**)(v16 + 16);
  while (1) {
    if (v17 == v18) {
      goto LABEL_39;
    }
    v19 = (_QWORD*)*v17;
    if (*(_QWORD*)*v17 == v14) {
      v20 = v19[12];
      if (v20 != 0 && (unsigned int)*(unsigned __int8*)(v20 + 32) - 3 < 2) {
        break;
      }
    }
    ++v17;
  }
  if ((GameHr_133f1d0(*v17) & 1) != 0) {
    v21 = v19[12];
    if (v21 != 0 && *(_BYTE*)(v21 + 32) == 4) {
      if ((GameHr_133f1d0((__int64)v19) & 1) == 0 && (v19[68] & 8) != 0) {
        GameRoutine_133f0c0((__int64)v19);
      }
      goto LABEL_70;
    }
    v107 = 1;
    v108 = "MID_Gmap_SpotInfo_HellGate_Cleared";
    goto LABEL_148;
  }
  if ((v19[68] & 8) != 0) {
    v107 = 1;
    if (GameRoutine_133f0c0((__int64)v19)) {
      v108 = "MID_Gmap_SpotInfo_HellGate_Activated";
    }
    else {
      v108 = "MID_Gmap_SpotInfo_HellGate_Barriered";
    }
  LABEL_148:
    if ((GameHr_133f1d0((__int64)v19) & 1) == 0 && (v19[68] & 8) != 0) {
      v120 = GameRoutine_133f0c0((__int64)v19);
      v114 = "IconState_Miasma";
      v115 = 1;
      if (v120) {
        v114 = nullptr;
      }
    }
    else {
      v114 = nullptr;
      v115 = 1;
    }
    goto LABEL_191;
  }
  if ((v19[68] & 0x800) == 0) {
    v107 = 0;
    v108 = "MID_Gmap_SpotInfo_HellGate_NotPredicated";
    goto LABEL_148;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v121 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v121 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v122 = *v121;
  v123 = v121[1];
  v124 = v121[2];
  v125 = v121[3];
  v126 = v121[4];
  v127 = v121[5];
  LOWORD(v147_.v147) = v122;
  WORD1(v147_.v147) = v123;
  WORD2(v147_.v147) = v124;
  WORD3(v147_.v147) = v125;
  WORD4(v147_.v147) = v126;
  WORD5(v147_.v147) = v127;
  if (game_GameModeData_instance_ != 0) {
    v128 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  }
  else {
    v128 = 0;
  }
  if (*(_BYTE*)(*(_QWORD*)(v128 + 24) + 32LL) == 1) {
    v130 = *(unsigned __int8*)(v128 + 89);
    v131 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    while (*(unsigned __int8*)(v128 + 89) == v130) {
      v132 = *(unsigned __int8*)(v128 + 33);
      v133 = *(_QWORD*)(v128 + 24);
      if (v132 == 18) {
        v131 = (__int16*)(v133 + 96);
        break;
      }
      v128 = *(_QWORD*)(v133 + 16);
      if (v128 == 0) {
        break;
      }
    }
  }
  else {
    v131 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v134 = v131[1];
  v135 = *v131;
  v136 = v131[2];
  v137 = v131[3];
  v138 = v131[4];
  v139 = v131[5];
  LOWORD(v145) = v135;
  WORD1(v145) = v134;
  WORD2(v145) = v136;
  WORD3(v145) = v137;
  WORD4(v145) = v138;
  WORD5(v145) = v139;
  if ((v123 << 24) + (v122 << 32) + (v124 << 18) + (v125 << 12) + (v126 << 6) +
          v127 <=
      (unsigned __int64)((v134 << 24) + (v135 << 32) + (v136 << 18) +
                         (v137 << 12) + (v138 << 6) + v139)) {
    v140 = Dir_70e760((__int16*)&v147_.v147, (__int16*)&v145);
  }
  else {
    v140 = 0;
  }
  v141 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v140, 0);
  v142 = *v141;
  v147_.v152 = -1;
  v147_.v153 = -1;
  v147_.v154 = -1;
  v147_.v155 = -1;
  v147_.v156 = -1;
  v147_.v157 = -1;
  v147_.v158 = -1;
  v147_.v159 = -1;
  v147_.v160 = -1;
  v147_.v161 = -1;
  v147_.v162 = -1;
  v147_.v163 = -1;
  *(_QWORD*)&v147_.v147 = GameData_212e348 + 2;
  *((_QWORD*)&v147_.v147 + 1) = 0xFFFF0001FFFF0000LL;
  v147_.v148 = (__int64*)0xFFFF0004FFFF0002LL;
  v147_.v149 = 0xFFFF0006FFFF0005LL;
  v147_.v164 = 8;
  v147_.v150 = -65529;
  v147_.v151 = -65528;
  v108 = GameRoutine_a4dbe0(v142, "MID_Gmap_SpotInfo_HellGate_Predicted", 0);
  if ((GameHr_133f1d0((__int64)v19) & 1) == 0 && (v19[68] & 8) != 0) {
    v143 = GameRoutine_133f0c0((__int64)v19);
    v114 = "IconState_Miasma";
    if (v143) {
      v114 = nullptr;
    }
  }
  else {
    v114 = nullptr;
  }
  if (v108 != nullptr) {
    v107 = 0;
    v115 = 0;
  LABEL_191:
    *(_QWORD*)&v147_.v147 = v114;
    *((_QWORD*)&v147_.v147 + 1) = v108;
    LOBYTE(v147_.v148) = v115;
    HIDWORD(v147_.v148) = v107;
    goto LABEL_69;
  }
LABEL_70:
  v34 = (__int64)a1[3];
  v35 = Impl_13261c0(v34);
  v36 = *(_QWORD*)(v34 + 136);
  v37 = v35;
  v38 = a1[1];
  if (v37 == 4 || v36 == 0) {
    ui_LayoutAccessor_SetPaneVisible((__int64)v38, (__int64)"T_Region", 0);
  }
  else {
    LayoutAccessor_1562060(v38, (__int64)"T_Region", *(const char**)(v36 + 32));
  }
  v40 = *v15;
  LOWORD(v147_.v147) = 0;
  v41 = *(_QWORD*)(v40 + 8);
  v42 = *(_QWORD**)(v41 + 8);
  v43 = *(_QWORD**)(v41 + 16);
  if (v42 == v43) {
    goto LABEL_83;
  }
  v44 = (__int64)a1[3];
  v45 = v42;
  while (1) {
    v46 = (_QWORD*)*v45;
    if (*(_QWORD*)*v45 == v44) {
      v47 = v46[12];
      if (v47 != 0 && (unsigned int)*(unsigned __int8*)(v47 + 32) - 3 < 2) {
        break;
      }
    }
    if (++v45 == v43) {
      goto LABEL_83;
    }
  }
  if ((v46[68] & 8) == 0) {
  LABEL_83:
    v48 = GameRoutine_adf880(v3, 0);
    v49 = GameRoutine_adfb00(v3);
    GameRoutine_60a020((__int64)&v147_.v147, v49);
    goto LABEL_84;
  }
  do {
    do {
      v59 = (_QWORD*)*v42++;
    } while (*v59 != v44);
    v60 = v59[12];
  } while (v60 == 0 || (unsigned int)*(unsigned __int8*)(v60 + 32) - 3 >= 2);
  v48 = *(char**)(v60 + 40);
  v61 = GameRoutine_adfb00(v3);
  v62 = strlen(v61);
  if (v62 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v63 = v62;
  if (v62 >= 0x17) {
    if ((v62 | 7) == 0x17) {
      v109 = 26;
    }
    else {
      v109 = (v62 | 7) + 1;
    }
    v64 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v109, 16, 0);
    *((_QWORD*)&v145 + 1) = v63;
    v146 = v64;
    *(_QWORD*)&v145 = v109 | 1;
  }
  else {
    LOBYTE(v145) = 2 * v62;
    v64 = (char*)&v145 + 1;
    if (v62 == 0) {
      goto LABEL_140;
    }
  }
  memmove((__int64)v64, (__int64)v61, v63);
LABEL_140:
  v64[v63] = 0;
  v110 = (unsigned __int8*)GameRoutine_1a09ce0((__int64)&v145, "_Gate", 5u);
  if (&v147_.v147 != (__int128*)v110) {
    v111 = *v110;
    if ((v147_.v147 & 1) != 0) {
      v116 = (v111 & 1) == 0;
      v117 = v111 >> 1;
      if (v116) {
        v118 = (__int64)(v110 + 1);
      }
      else {
        v118 = *((_QWORD*)v110 + 2);
      }
      if (v116) {
        v119 = v117;
      }
      else {
        v119 = *((_QWORD*)v110 + 1);
      }
      SpineModel_64dde0((__int64*)&v147_.v147, v118, v119);
    }
    else if ((v111 & 1) != 0) {
      GameRoutine_64df20(&v147_.v147, *((_QWORD*)v110 + 2),
                         *((_QWORD*)v110 + 1));
    }
    else {
      v112 = *(_QWORD*)v110;
      v113 = *((__int64**)v110 + 2);
      *((_QWORD*)&v147_.v147 + 1) = *((_QWORD*)v110 + 1);
      v147_.v148 = v113;
      *(_QWORD*)&v147_.v147 = v112;
    }
  }
  if ((v145 & 1) != 0 && v146 != nullptr) {
    v129 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v129 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v129,
                                  (__int64)v146);
  }
LABEL_84:
  LayoutAccessor_1562060(a1[1], (__int64)"T_Spot", v48);
  if ((v147_.v147 & 1) != 0) {
    v50 = (const char*)v147_.v148;
  }
  else {
    v50 = (char*)&v147_.v147 + 1;
  }
  LayoutAccessor_1562060(a1[1], (__int64)"T_Help", v50);
  v51 = ui_LayoutAccessor_FindAlignment(a1[1], (__int64)"A_SpotName");
  if (v51 != 0) {
    Alignment_56b600(v51);
  }
  if ((v147_.v147 & 1) != 0 && v147_.v148 != nullptr) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v52,
                                  (__int64)v147_.v148);
  }
  v53 = a1[1];
  v54 = GameRoutine_16514e0((__int64)a1[3]);
  LayoutAccessor_1562060(v53, (__int64)"T_Genre", v54);
  v55 = ui_LayoutAccessor_FindPane(a1[1], (__int64)"IconGenre");
  if (v55 != 0) {
    v56 = __dynamic_cast(v55, GameData_212d670[0], GameData_212d678[0], 0);
    v57 = GameRoutine_1651740(a1[3]);
    if (v56 != 0) {
      if (v57 > 0x15) {
        v58 = &GameData_1a9f09e;
      }
      else {
        v58 = GameData_20760b0[v57];
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v56, 0, 7u, v58);
    }
  }
  else {
    GameRoutine_1651740(a1[3]);
  }
  v65 = ui_LayoutAccessor_FindPane(a1[1], (__int64)"Img");
  if (v65 != 0) {
    v66 = __dynamic_cast(v65, GameData_212d670[0], GameData_212d678[0], 0);
    if (v66 != 0) {
      v67 = (__int64)a1[9];
      *(_QWORD*)(v67 + 48) = v66;
      *(_DWORD*)(v67 + 56) = 0;
      v68 = *(const char**)(v3 + 72);
      if (v68 != nullptr && *v68 != 0) {
        v69 = game_util_Format("Layout/Textures/Thumb_Spot/%s.bntx", v68);
        DelayImageLoader_19a37d0((__int64)a1[9], v69, 0);
      }
    }
  }
  v70 = (__int64)a1[1];
  v71 = game_util_Format("IconFacility%02d", 0);
  ui_LayoutAccessor_SetPaneVisible(v70, (__int64)v71, 0);
  v72 = (__int64)a1[1];
  v73 = game_util_Format("IconFacility%02d", 1);
  ui_LayoutAccessor_SetPaneVisible(v72, (__int64)v73, 0);
  v74 = (__int64)a1[1];
  v75 = game_util_Format("IconFacility%02d", 2);
  ui_LayoutAccessor_SetPaneVisible(v74, (__int64)v75, 0);
  v76 = (__int64)a1[1];
  v77 = game_util_Format("IconFacility%02d", 3);
  ui_LayoutAccessor_SetPaneVisible(v76, (__int64)v77, 0);
  v78 = (__int64)a1[1];
  v79 = game_util_Format("IconFacility%02d", 4);
  ui_LayoutAccessor_SetPaneVisible(v78, (__int64)v79, 0);
  v80 = (__int64)a1[1];
  v81 = game_util_Format("IconFacility%02d", 5);
  ui_LayoutAccessor_SetPaneVisible(v80, (__int64)v81, 0);
  v82 = (__int64)a1[1];
  v83 = game_util_Format("IconFacility%02d", 6);
  ui_LayoutAccessor_SetPaneVisible(v82, (__int64)v83, 0);
  v84 = (__int64)a1[1];
  v85 = game_util_Format("IconFacility%02d", 7);
  ui_LayoutAccessor_SetPaneVisible(v84, (__int64)v85, 0);
  v86 = (__int64)a1[1];
  v87 = game_util_Format("IconFacility%02d", 8);
  ui_LayoutAccessor_SetPaneVisible(v86, (__int64)v87, 0);
  v88 = (__int64)a1[1];
  v89 = game_util_Format("IconFacility%02d", 9);
  ui_LayoutAccessor_SetPaneVisible(v88, (__int64)v89, 0);
  v90 = (__int64)a1[1];
  v91 = game_util_Format("IconFacility%02d", 10);
  ui_LayoutAccessor_SetPaneVisible(v90, (__int64)v91, 0);
  v92 = (__int64)a1[1];
  v93 = game_util_Format("IconFacility%02d", 11);
  ui_LayoutAccessor_SetPaneVisible(v92, (__int64)v93, 0);
  v94 = (__int64)a1[3];
  v144 = 0;
  *(_QWORD*)&v145 = &v144;
  *((_QWORD*)&v145 + 1) = a1;
  v95 = (unsigned __int8)Impl_13261c0(v94);
  v96 = (__int64)a1[3];
  if (v95 != 1) {
    v103 = Impl_13261c0(v96);
    v104 = (__int64)a1[3];
    if (v103 != 0) {
      if ((unsigned __int8)Impl_13261c0(v104) != 2) {
        return;
      }
      v105 = (__int64)a1[3];
      v102 = 14;
      if ((*(_BYTE*)v105 & 1) != 0) {
        v101 = *(void**)(v105 + 16);
      }
      else {
        v101 = (void*)(v105 + 1);
      }
    }
    else {
      v106 = *(_QWORD*)(v104 + 120);
      if (v106 != GameRoutine_ae0560()) {
        v147_.v148 = (__int64*)a1;
        v147_.v147 = v145;
        GameHr_165af40((__int64)&v147_.v147, 2u);
        GameHr_165af40((__int64)&v147_.v147, 4u);
        GameHr_165af40((__int64)&v147_.v147, 1u);
        return;
      }
      GameRoutine_165ad90((__int64)&v145, 0x11u, (__int64)&GameData_1bebb60);
      GameRoutine_165ad90((__int64)&v145, 6u, (__int64)&GameData_1bebb60);
      GameRoutine_165ad90((__int64)&v145, 4u, (__int64)&GameData_1bebb60);
      GameRoutine_165ad90((__int64)&v145, 0xCu, (__int64)GameData_1ab8d4c);
      GameRoutine_165ad90((__int64)&v145, 0, (__int64)GameData_1af8f56);
      GameRoutine_165ad90((__int64)&v145, 9u, (__int64)&GameData_1bebb60);
      GameRoutine_165ad90((__int64)&v145, 5u, (__int64)&GameData_1bebb60);
      GameRoutine_165ad90((__int64)&v145, 7u, (__int64)&GameData_1bebb60);
      GameRoutine_165ad90((__int64)&v145, 3u, (__int64)&GameData_1bebb60);
      GameRoutine_165ad90((__int64)&v145, 0xAu, (__int64)&GameData_1bebb60);
      GameRoutine_165ad90((__int64)&v145, 0xBu, (__int64)&GameData_1bebb60);
      v102 = 8;
      v101 = &GameData_1bebb60;
    }
    goto LABEL_130;
  }
  v97 = Impl_13262e0(v96);
  if (v97 != 0) {
    v98 = v97;
    if (*(_WORD*)(v97 + 50) != 0) {
      GameRoutine_165ad90((__int64)&v145, 6u, (__int64)&GameData_1bebb60);
    }
    if (*(_WORD*)(v98 + 32) != 0) {
      v99 = 8LL * *(unsigned __int16*)(v98 + 32);
      v100 = 0;
      do {
        GameRoutine_165ad90((__int64)&v145, 0,
                            *(_QWORD*)(*(_QWORD*)(v98 + 40) + v100));
        v100 += 8;
      } while (v99 != v100);
    }
    if ((*(_BYTE*)(v98 + 48) & 1) != 0) {
      v101 = &GameData_1bebb60;
      v102 = 4;
    LABEL_130:
      GameRoutine_165ad90((__int64)&v145, v102, (__int64)v101);
    }
  }
}

void game_gmap_165b330(__int64** a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[2];
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  LayoutAccessor_1560070((void*)(&v9_.v9), a1[1], "L_Info");
  if (v9_.v10 != 0) {
    v4 = std___1___shared_weak_count_lock(v9_.v10);
    v5 = v9_.v9;
    if (v4 != 0) {
      v6 = v9_.v9;
    }
    else {
      v6 = 0;
    }
    if (v9_.v10 != 0) {
      std___1___shared_weak_count___release_weak(v9_.v10);
    }
    if (v6 != 0) {
      LayoutAccessor_155e830(v5, 1);
      if ((((__int64 (*)(__int64**))(*a1)[4])(a1) & 1) != 0) {
        v7 = 0;
      }
      else {
        v7 = *a2;
      }
      *a2 = v7;
      v8[0] = v6;
      v8[1] = v4;
      if (v4 == 0) {
        GameHr_1650120((__int64)v8, (__int64)a2);
        return;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      GameHr_1650120((__int64)v8, (__int64)a2);
      std___1___shared_weak_count___release_weak(v4);
    }
    else if (v4 == 0) {
      return;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
}

void game_gmap_167b240(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  int v6;
  __int64 v7;
  char* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  char v14;
  int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  signed __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  signed __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  signed __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59[2];

  v2 = *a1;
  if (*(char**)(*(_QWORD*)(*a1 - 8) + 8LL) == "N4game4gmap12GmapSpotListE") {
    v59[1] = (unsigned __int64)&GameData_1ab98e9;
    v59[0] = game_HashString((__int64)&GameData_1ab98e9);
    if (game_GameModeData_instance_ != 0 &&
        (v5 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48), v59)) != 0) {
      v6 = *(_DWORD*)(v5 + 32);
    }
    else {
      v6 = 5;
    }
    v7 = a1[42];
    v9 = *(char**)(*(_QWORD*)GameData_2130e20 + 8LL);
    v8 = *(char**)(*(_QWORD*)GameData_2130e20 + 16LL);
    v10 = (unsigned __int64)(v8 - v9) >> 3;
    if (v7 != 0 &&
        (v11 = __dynamic_cast(v7, GameData_212e008[0], &GameData_207fdb0, 0)) !=
            0 &&
        (v12 = *(_QWORD*)(v11 + 88)) != 0) {
      if (v9 == v8) {
      LABEL_12:
        v9 = v8;
      }
      else {
        while (*(_QWORD*)v9 != v12) {
          v9 += 8;
          if (v9 == v8) {
            goto LABEL_12;
          }
        }
      }
      if (v9 == v8 && v6 == (_DWORD)v10) {
        v14 = 2;
      }
      else {
        v14 = 0;
      }
    }
    else {
      v14 = 1;
    }
    v15 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
    v16 = a2[1];
    v17 = a2[2];
    v18 = v6 - v10;
    if (v16 >= v17) {
      v20 = *a2;
      v21 = v16 - *a2;
      v22 = 1 - 0x3333333333333333LL * (v21 >> 3);
      if (v22 > 0x666666666666666LL) {
        goto LABEL_76;
      }
      v23 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v17 - v20) >> 3);
      if (2 * v23 > v22) {
        v22 = 2 * v23;
      }
      if (v23 >= 0x333333333333333LL) {
        v24 = 0x666666666666666LL;
      }
      else {
        v24 = v22;
      }
      if (v24 != 0) {
        if (v24 > 0x666666666666666LL) {
          goto LABEL_77;
        }
        v25 = v15;
        v26 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v24, 16, 0);
        v15 = v25;
      }
      else {
        v26 = 0;
      }
      v27 = v26 + v21;
      *(_QWORD*)v27 = "Pin";
      *(_QWORD*)(v27 + 8) = "MID_KeyHelp_Pin";
      *(_BYTE*)(v27 + 28) = v14;
      v19 = v26 + v21 + 40;
      *(_DWORD*)(v27 + 32) = v18;
      *(_DWORD*)(v27 + 36) = v6;
      *(_BYTE*)(v27 + 16) = 1;
      *(_DWORD*)(v27 + 20) = 22;
      *(_DWORD*)(v27 + 24) = v15;
      memcpy(v26, v20, v21);
      *a2 = v26;
      a2[1] = v19;
      a2[2] = v26 + 40 * v24;
      if (v20 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v20);
      }
    }
    else {
      *(_BYTE*)(v16 + 28) = v14;
      *(_DWORD*)(v16 + 32) = v18;
      *(_DWORD*)(v16 + 36) = v6;
      *(_QWORD*)v16 = "Pin";
      *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Pin";
      v19 = v16 + 40;
      *(_BYTE*)(v16 + 16) = 1;
      *(_DWORD*)(v16 + 20) = 22;
      *(_DWORD*)(v16 + 24) = v15;
    }
    a2[1] = v19;
    v2 = *a1;
  }
  v29 = (*(__int64 (**)(__int64*))(v2 + 192))(a1);
  v30 = a2[1];
  v31 = a2[2];
  if (v30 >= v31) {
    v33 = *a2;
    v34 = v30 - *a2;
    v35 = 1 - 0x3333333333333333LL * (v34 >> 3);
    if (v35 > 0x666666666666666LL) {
      goto LABEL_76;
    }
    v36 = fw_memory_g_heap_manager_ptr;
    v37 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v31 - v33) >> 3);
    if (2 * v37 > v35) {
      v35 = 2 * v37;
    }
    if (v37 >= 0x333333333333333LL) {
      v38 = 0x666666666666666LL;
    }
    else {
      v38 = v35;
    }
    if (v38 != 0) {
      if (v38 > 0x666666666666666LL) {
        goto LABEL_77;
      }
      v39 = v29;
      v40 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v38, 16, 0);
      v29 = v39;
    }
    else {
      v40 = 0;
    }
    v41 = v40 + v34;
    *(_QWORD*)v41 = "StatusChange";
    *(_QWORD*)(v41 + 8) = "MID_KeyHelp_StatusChange";
    *(_BYTE*)(v41 + 28) = 0;
    *(_QWORD*)(v41 + 32) = 0;
    *(_BYTE*)(v41 + 16) = 1;
    v42 = v40 + 40 * v38;
    v32 = v40 + v34 + 40;
    *(_DWORD*)(v41 + 20) = 2;
    *(_DWORD*)(v41 + 24) = v29;
    memcpy(v40, v33, v34);
    *a2 = v40;
    a2[1] = v32;
    a2[2] = v42;
    if (v33 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v36 + v43, v33);
    }
  }
  else {
    *(_BYTE*)(v30 + 28) = 0;
    *(_QWORD*)(v30 + 32) = 0;
    *(_QWORD*)v30 = "StatusChange";
    *(_QWORD*)(v30 + 8) = "MID_KeyHelp_StatusChange";
    v32 = v30 + 40;
    *(_BYTE*)(v30 + 16) = 1;
    *(_DWORD*)(v30 + 20) = 2;
    *(_DWORD*)(v30 + 24) = v29;
  }
  a2[1] = v32;
  if ((a1[147] & 1) == 0) {
    v44 = *(_QWORD*)GameData_212dbb8[0];
    if (*(_QWORD*)GameData_212dbb8[0] != 0 && *(_BYTE*)(v44 + 9) == 1 &&
        *(_DWORD*)(v44 + 136) == 0 && (GameRoutine_16962f0() & 1) != 0) {
      v45 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
      v46 = a2[1];
      v47 = a2[2];
      if (v46 < v47) {
        *(_BYTE*)(v46 + 28) = 0;
        *(_QWORD*)(v46 + 32) = 0;
        *(_QWORD*)v46 = &GameData_1a9f09e;
        *(_QWORD*)(v46 + 8) = "MID_HubMenu_FastTravel";
        v48 = v46 + 40;
        *(_BYTE*)(v46 + 16) = 1;
        *(_DWORD*)(v46 + 20) = 7;
        *(_DWORD*)(v46 + 24) = v45;
      LABEL_74:
        a2[1] = v48;
        return;
      }
      v49 = *a2;
      v50 = v46 - *a2;
      v51 = 1 - 0x3333333333333333LL * (v50 >> 3);
      if (v51 <= 0x666666666666666LL) {
        v52 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v47 - v49) >> 3);
        if (2 * v52 > v51) {
          v51 = 2 * v52;
        }
        if (v52 >= 0x333333333333333LL) {
          v53 = 0x666666666666666LL;
        }
        else {
          v53 = v51;
        }
        if (v53 == 0) {
          v55 = 0;
        LABEL_70:
          v56 = v55 + v50;
          *(_QWORD*)v56 = &GameData_1a9f09e;
          *(_QWORD*)(v56 + 8) = "MID_HubMenu_FastTravel";
          *(_BYTE*)(v56 + 28) = 0;
          *(_QWORD*)(v56 + 32) = 0;
          *(_BYTE*)(v56 + 16) = 1;
          v57 = v55 + 40 * v53;
          v48 = v55 + v50 + 40;
          *(_DWORD*)(v56 + 20) = 7;
          *(_DWORD*)(v56 + 24) = v45;
          memcpy(v55, v49, v50);
          *a2 = v55;
          a2[1] = v48;
          a2[2] = v57;
          if (v49 != 0) {
            v58 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v49);
          }
          goto LABEL_74;
        }
        if (v53 <= 0x666666666666666LL) {
          v54 = v45;
          v55 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v53, 16, 0);
          v45 = v54;
          goto LABEL_70;
        }
      LABEL_77:
        GameRoutine_60a210();
      }
    LABEL_76:
      GameRoutine_874520();
    }
  }
}

#pragma GCC visibility pop
