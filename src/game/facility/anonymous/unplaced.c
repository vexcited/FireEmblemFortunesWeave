#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void
FacilityDialogueFile_196e9e0(PSEUDO_X8, unsigned __int64 result, __int64, int);
__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void SceneTalk_1497cf0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void game_9470c0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_hub_cb9480(PSEUDO_X8, __int64,
                                                unsigned __int8*);
__int64* GameRoutine_6b7aa0(__int64* result, __int64*, __int64*,
                            unsigned __int64);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64 BasicMenu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 FacilityUtil_949e50();
__int64 GameHubData_dbd8e0();
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1403f60(_QWORD);
__int64 GameRoutine_1405080(_QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64 GameRoutine_143e400();
__int64 GameRoutine_143e900();
__int64 GameRoutine_16a4d20(__int64, int, char);
__int64 GameRoutine_177c100(__int64, __int64, int*);
__int64 GameRoutine_185a200(_QWORD, _QWORD);
__int64 GameRoutine_185a4f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18d3900(_QWORD);
__int64 GameRoutine_18d3a00(_QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_877790(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cdeee0(__int64 result, __int64);
__int64 GameRoutine_d1fb60(__int64, char);
__int64 GameRoutine_efbb60(__int64, __int64*, char);
__int64 GameRoutine_f9faa0(__int64 result);
__int64 GameVariable_82e7c0(_QWORD, _QWORD);
__int64 HubCharacterNatives_cee710(__int64, int, __int64, __int64, __int64,
                                   float);
__int64 HubCharacterNatives_cee990(__int64, int, int, __int64, __int64, __int64,
                                   float);
__int64 ItemSeq_8af940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                       long double);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcObeliskResumeMenu_1726360(_QWORD, _QWORD);
__int64 RidePool_93cd60(_QWORD*, __int64);
__int64 RidePool_93e660(_QWORD*, _BYTE*);
__int64 SceneCharacterAnimator_1412d00(__int64, __int64, __int64);
__int64 SceneCharacter_1401ce0(_QWORD, _QWORD);
__int64 SceneCharacter_1401f80(_QWORD, float);
__int64 SceneCharacter_14020c0(_QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 VoiceRootRegistry_a1b100(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 collision_6704c0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 game_112d480(_QWORD, _QWORD, _QWORD);
__int64 game_8224a0(_QWORD);
__int64 game_8aef60(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_HashString32_alt1(_QWORD, _QWORD) __asm__("game_HashString32");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_hub_d97a00(__int64 result, float);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_YieldThread(_QWORD);
__int64 snd_SeqVoice_getHandles(_QWORD, _QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_calcCrc32Reverse(_QWORD, _QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 std___1_stoi(void);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_fnd_calcCrc32(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 std___1___shared_weak_count___release_weak_alt2() __asm__(
    "std___1___shared_weak_count___release_weak");
bool HubCharacterNatives_cf7e00(__int64);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN* GameData_2131330;
extern _UNKNOWN* GameData_21fdd40;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1ac8731;
extern _UNKNOWN GameData_1afac00;
extern _UNKNOWN GameData_1afe58c;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21ed530;
extern _UNKNOWN game_g_random_mutex;
extern __int16 GameData_224ae48;
extern __int64 (**game_anonymous_MountBind_vtable_ptr)();
extern __int64 (*GameData_203e0d8[])();
extern __int64 (*GameData_205faa8[])();
extern __int64 (
    *game_facility_anonymous_ExpressionLoop_anonymous_SceneCharacterBehaviorRandomExpression_vtable
        [])();
extern __int64 (*game_facility_anonymous_ProcObeliskResumeMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212cd08[38];
extern __int64* GameData_212cd68[26];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e348;
extern __int64* GameData_2131310[4];
extern __int64* GameData_2131328;
extern __int64* GameData_2131368[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_map_history_g_ride_pool_ptr[3];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212d6e8;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbe0[4];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f3ff8;
extern __int64 GameData_2241810;
extern __int64 GameData_2258178;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_kVariableHubFacilityForced;
extern __int64 game_script_hub_talk_g_select_menu;
extern char* GameData_1fa6240;
extern char* GameData_211b3a8[12];
extern char* GameData_21762b8;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern int GameData_21668e0;
extern int GameData_21ed528;
float CharacterRotate_d52080(__int64);
float ProcTheaterSceneAct_13e2420(_QWORD);
float fmodf(float, float);
void GameRoutine_1488120();
void GameRoutine_658d60(__int64*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6706a0(void);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
_BYTE* game_facility_anonymous_9d0bc0(_BYTE* a1);
__int64 game_facility_anonymous_f9c3e0();
void game_facility_anonymous_f9c500();
__int64 game_facility_anonymous_f9c5d0();
void game_facility_anonymous_fc9e20();
__attribute__((swiftcall)) void game_facility_anonymous_1432cd0(PSEUDO_X8 x8_,
                                                                float a2);
float game_facility_anonymous_1432e20();
float game_facility_anonymous_1432fc0();
__int64 game_facility_anonymous_1433a40(__int64 a1);
_QWORD* game_facility_anonymous_1433c80(__int64 a1);
__int64 game_facility_anonymous_1433e20(__int64 result);
__n128 game_facility_anonymous_1433fb0(__n128 result);
__int64 game_facility_anonymous_1434b30(__int64 result, __n128 a2);
__int64 game_facility_anonymous_1434cc0(__int64 result);
__int64 game_facility_anonymous_14353e0(__int64 a1);
_QWORD* game_facility_anonymous_1435520(__int64 a1);
__int64 game_facility_anonymous_143a790(__int64 a1);
__int64 game_facility_anonymous_143b060();
_QWORD* game_facility_anonymous_14740c0(__int64 a1);
__int64 game_facility_anonymous_1475290(__int64 a1);
void game_facility_anonymous_1475b00(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_facility_anonymous_1475e80(PSEUDO_X8 x8_,
                                                                __int64 a1);
__int64 game_facility_anonymous_15f28b0(__int64 a1);
__int64 game_facility_anonymous_15f7ac0(__int64 result);
const char* game_facility_anonymous_16abe00(int a1, int a2);
__int64 game_facility_anonymous_16bc820(__int64 a1, _QWORD* a2, int* a3);
__int64 game_facility_anonymous_1723840(__int64 a1, unsigned int a2, int a3);
__int64 game_facility_anonymous_196a790(__int64 result, __int64 a2);
__int64 game_facility_anonymous_196a8f0(__int64 result, unsigned __int8 a2);
__int64 game_facility_anonymous_197bd60(__int64 result, int a2);
unsigned __int64 game_facility_anonymous_197c920(__int64 a1, int a2);

_BYTE* game_facility_anonymous_9d0bc0(_BYTE* a1)
{
  int v2;
  _BYTE* result;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _BYTE* v9;
  bool v10;
  __int64 v11;

  if (game_GameModeData_instance_ != 0) {
    v2 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  else {
    v2 = 0;
  }
  result = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 560LL))(a1);
  v4 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                             64) +
                                                  8LL *
                                                      (unsigned __int8)*result) +
                                       110LL));
  if (v4 != 0) {
    LODWORD(v4) = *(unsigned __int16*)(v4 + 32);
  }
  if (v2 >= (int)v4 &&
      ((v5 = game_map_history_g_ride_pool_ptr[0],
        v6 = *game_map_history_g_ride_pool_ptr[0],
        *(_BYTE*)(v7 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 560LL))(a1)) ==
            0) ||
       (v8 = *(_QWORD**)(v6 + 16), v9 = (_BYTE*)v7,
        ((unsigned int)(result = (_BYTE*)RidePool_93cd60(v8, v7)) &
         0x80000000) != 0) &&
           ((unsigned int)(result = (_BYTE*)RidePool_93e660(v8, v9)) &
            0x80000000) != 0)) {
    v11 = *v5;
    result = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 560LL))(a1);
    v10 = *result != 0 && *(_DWORD*)(*(_QWORD*)(v11 + 16) + 144LL) < 200;
  }
  else {
    v10 = false;
  }
  a1[82] = v10;
  return result;
}

__int64 game_facility_anonymous_f9c3e0()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    int v7;
    __int16 v8;
    char gap10_[2];
    int v9;
  } v7_;

  v0 = *(_QWORD*)GameData_212dc60[0];
  game_hub_d97a00(*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL), 0x0.0p+0f);
  v7_.v7 = 0;
  v7_.v8 = 0;
  v7_.v9 = 1065353216;
  GameRoutine_cdeee0(v0, (__int64)&v7_.v7);
  result = GameRoutine_d1fb60(*(_QWORD*)GameData_212dc38[0], 1);
  v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    result = std___1___shared_weak_count___release_weak(v2);
    if (v5 == 0 || v3 == 0) {
      if (v5 == 0) {
        return result;
      }
    }
    else {
      result = HubCharacterNatives_cee710(*(_QWORD*)(v3 + 24), -1159797738,
                                          0x100000000LL, 0, 0,
                                          0x1.0000000000000p+0f);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
  }
  return result;
}

void game_facility_anonymous_f9c500()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      HubCharacterNatives_cee990(*(_QWORD*)(v1 + 24), -175966935, 0, 0, 0, 0,
                                 0x1.0000000000000p+0f);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

__int64 game_facility_anonymous_f9c5d0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  float v7;
  float v9;
  float v10;
  __int64 v11;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 == 0 || v1 == 0) {
      LOBYTE(v0) = 0;
      if (v3 == 0) {
        return v0 & 1;
      }
    }
    else {
      v5 = *(_QWORD*)(v1 + 24);
      if ((*(_BYTE*)(v5 + 432) & 1) != 0) {
        goto LABEL_19;
      }
      v6 = *(_QWORD*)(*(_QWORD*)(v5 + 16) + 488LL);
      v7 = CharacterRotate_d52080(v6);
      v9 = fmodf(*(float*)(v6 + 36) - v7, 0x1.921fb60000000p+2f);
      if (v9 >= 0x0.0p+0f) {
        v10 = v9 + 0x0.0p+0f;
      }
      else {
        v10 = (float)(v9 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
      }
      if (v10 > 0x1.921fb60000000p+1f) {
        v10 = v10 + -0x1.921fb60000000p+2f;
      }
      if (fabsf(v10) <= 0x1.0000000000000p-23f &&
          (float)((float)(PSEUDO_UNFUSED(
                      *(float*)((v11 = *(_QWORD*)(v5 + 16)) + 672) *
                      *(float*)(v11 + 672))) +
                  (float)(*(float*)(v11 + 668) * *(float*)(v11 + 668))) <=
              0x0.0p+0f &&
          ((*(_BYTE*)(v11 + 195) & 1) != 0 ||
           (*(_BYTE*)(v11 + 194) & 1) != 0)) {
        LOBYTE(v0) = !HubCharacterNatives_cf7e00(*(_QWORD*)(v5 + 8));
      }
      else {
      LABEL_19:
        LOBYTE(v0) = 1;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  return v0 & 1;
}

void game_facility_anonymous_fc9e20()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  unsigned __int8 v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;
  struct {
    float32x4_t* v7;
    __int64 v8;
  } v7_;

  v5 = 0;
  v0 = *GameData_212d458[0];
  v2 = 20;
  v4 = -32637;
  v3 = 0xE3AC83E35F444950LL;
  game_hub_cb9480((void*)(&v7_.v7), v0, &v2);
  if (v7_.v8 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v7_.v8);
  }
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
}

__attribute__((swiftcall)) void game_facility_anonymous_1432cd0(PSEUDO_X8 x8_,
                                                                float a2)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 result;
  float v16;
  float v17;

  v4 = game_g_game_setting_ptr;
  v5 = -a2;
  v6 = *(float*)(*(_QWORD*)game_g_game_setting_ptr + 968LL);
  if (v6 > a2) {
    v7 = v6 - a2;
  LABEL_5:
    v8 = (float)(1.0f / (float)(1.0f - a2)) * v7;
    goto LABEL_6;
  }
  v8 = 0.0f;
  if (v6 < v5) {
    v7 = a2 + v6;
    goto LABEL_5;
  }
LABEL_6:
  v9 = game_8224a0(7);
  if (game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v9)) != 0) {
    v11 = -v8;
    if ((unsigned __int8)*(_DWORD*)(v10 + 32) == 1) {
      v11 = v8;
    }
  }
  else {
    v11 = -v8;
  }
  v17 = v11;
  v12 = *(float*)(*(_QWORD*)v4 + 972LL);
  if (v12 > a2) {
    v13 = v12 - a2;
  LABEL_16:
    v14 = (float)(1.0f / (float)(1.0f - a2)) * v13;
    goto LABEL_17;
  }
  v14 = 0.0f;
  if (v12 < v5) {
    v13 = a2 + v12;
    goto LABEL_16;
  }
LABEL_17:
  result = game_8224a0(8);
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), result)) != 0) {
    v16 = -v14;
    if ((unsigned __int8)*(_DWORD*)(result + 32) == 1) {
      v16 = v14;
    }
  }
  else {
    v16 = -v14;
  }
  *a1 = __PAIR64__(LODWORD(v16), LODWORD(v17));
  {
    result;
    return;
  }
}

float game_facility_anonymous_1432e20()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  __int64 v6;
  signed int v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v13;

  LODWORD(v0) = 0;
  if (GameData_2258178 != 0) {
    if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
        ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
         *(_BYTE*)(game_g_game_setting + 940) == 1 &&
             *(_BYTE*)(game_g_game_setting + 805) == 1 &&
             (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
      v1 = 520;
    }
    else {
      if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
              (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
               *(_BYTE*)(game_g_game_setting + 901) != 1 ||
               *(_BYTE*)(game_g_game_setting + 902) != 1)) {
        goto LABEL_12;
      }
      v1 = 528;
    }
    v0 = *(_QWORD*)(GameData_2258178 + v1);
  }
LABEL_12:
  v13 = *(float*)&v0;
  v2 = game_8224a0(7);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) != 0) {
    if ((unsigned __int8)*(_DWORD*)(v3 + 32) == 1) {
      v4 = v13;
    }
    else {
      v4 = -v13;
    }
  }
  else {
    v4 = -v13;
  }
  v5 = ProcTheaterSceneAct_13e2420(&GameData_1ac8731);
  v6 = game_8224a0(5);
  v7 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v8 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v6);
    if (v8 != 0) {
      v7 = *(_DWORD*)(v8 + 32);
    }
    else {
      v7 = 0;
    }
  }
  v9 = (float)(unsigned int)v7 * 1.5f;
  v10 = vcvts_n_f32_s32(v7, 1u);
  if (v7 < 51) {
    v9 = v10;
  }
  v11 = 1.0f;
  if (v7 < 51) {
    v11 = 0.5f;
  }
  return v4 *
         (float)((float)(v5 *
                         (float)(v11 + (float)(v9 / 0x1.9000000000000p+6f))) /
                 ProcTheaterSceneAct_13e2420(&GameData_1afe58c));
}

float game_facility_anonymous_1432fc0()
{
  float v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  signed int v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;

  v0 = 0.0f;
  if (GameData_2258178 != 0) {
    if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
        ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
         *(_BYTE*)(game_g_game_setting + 940) == 1 &&
             *(_BYTE*)(game_g_game_setting + 805) == 1 &&
             (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
      v1 = 524;
    }
    else {
      if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
              (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
               *(_BYTE*)(game_g_game_setting + 901) != 1 ||
               *(_BYTE*)(game_g_game_setting + 902) != 1)) {
        goto LABEL_12;
      }
      v1 = 532;
    }
    v0 = *(float*)(GameData_2258178 + v1);
  }
LABEL_12:
  v2 = game_8224a0(8);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
    if (v3 != 0 && (unsigned __int8)*(_DWORD*)(v3 + 32) == 1) {
      v0 = -v0;
    }
  }
  v4 = ProcTheaterSceneAct_13e2420(&GameData_1ac8731);
  v5 = game_8224a0(5);
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
    if (v7 != 0) {
      v6 = *(_DWORD*)(v7 + 32);
    }
    else {
      v6 = 0;
    }
  }
  v8 = (float)(unsigned int)v6 * 1.5f;
  v9 = vcvts_n_f32_s32(v6, 1u);
  if (v6 < 51) {
    v8 = v9;
  }
  v10 = 1.0f;
  if (v6 < 51) {
    v10 = 0.5f;
  }
  return v0 *
         (float)((float)(v4 *
                         (float)(v10 + (float)(v8 / 0x1.9000000000000p+6f))) /
                 ProcTheaterSceneAct_13e2420(&GameData_1afe58c));
}

__int64 game_facility_anonymous_1433a40(__int64 a1)
{
  __int64 result;
  _DWORD* v3;
  _DWORD* v4;
  _UNKNOWN** v5;
  unsigned int v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  char v13;
  _QWORD v14[2];

  if (game_GameModeData_instance_ == 0 ||
      (result = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48),
           &game_kVariableHubFacilityForced)) == 0 ||
      *(_DWORD*)(result + 32) == 0) {
    v3 =
        (_DWORD*)game_util_Format("MID_LGV_Lesson_Firsttime_%s_m01",
                                  *(const char**)(*(_QWORD*)(a1 + 224) + 40LL));
    result = game_HashString32(v3);
    v4 = GameData_21fdd40;
    if (GameData_21fdd40 != nullptr) {
      v5 = &GameData_21fdd40;
      do {
        v6 = v4[7];
        v7 = v6 >= (unsigned int)result;
        if (v6 >= (unsigned int)result) {
          v8 = 0;
        }
        else {
          v8 = 2;
        }
        if (v7) {
          v5 = (_UNKNOWN**)v4;
        }
        v4 = *(_DWORD**)&v4[v8];
      } while (v4 != nullptr);
      if (v5 != &GameData_21fdd40 &&
          (unsigned int)result >= *((_DWORD*)v5 + 7)) {
        v14[1] = v3;
        result = game_HashString(v3);
        v9 = game_GameModeData_instance_;
        v14[0] = result;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_20;
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                                  memory_order_acquire) &
             1) == 0) {
          result = __cxa_guard_acquire(&GameData_21ed530);
          if ((_DWORD)result != 0) {
            GameData_21ed528 = 1598310733;
            result = __cxa_guard_release(&GameData_21ed530);
          }
        }
        if (*v3 != GameData_21ed528 ||
            (result = game_GameVariableTable_Find(*(_QWORD*)(v9 + 48), v14)) ==
                0 ||
            *(_DWORD*)(result + 32) == 0) {
        LABEL_20:
          if (GameData_21ec7b8 == 0) {
            v10 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
            GameRoutine_1130770(v10, v3, 0);
            v11 = *(_QWORD*)(a1 + 56);
            if (v11 != 0) {
              *(_QWORD*)(v11 + 48) = v10;
              *(_QWORD*)(v10 + 56) = *(_QWORD*)(a1 + 56);
            }
            *(_QWORD*)(a1 + 56) = v10;
            *(_QWORD*)(v10 + 24) = "talk::Seq";
            *(_QWORD*)(v10 + 32) = a1 + 16;
            *(_DWORD*)(v10 + 140) = game_HashString32("talk::Seq");
            *(_QWORD*)(v10 + 64) = 0;
            *(_QWORD*)(v10 + 72) = 24;
            *(_QWORD*)(v10 + 80) = 1;
            *(_QWORD*)(v10 + 8) = &GameData_216de68;
            *(_QWORD*)(v10 + 16) = &GameData_216de68;
            (*(void (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 136LL))(v10);
            if ((result & 1) != 0 && (*(_WORD*)(v10 + 136) & 0x100) == 0) {
              *(_WORD*)(v10 + 136) |= 0x100u;
            }
            v12 = *(_BYTE**)(v10 + 32);
            v13 = v12[138];
            if (v13 == 0) {
              result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v12 + 64LL))(
                  *(_QWORD*)(v10 + 32));
              v13 = v12[138];
            }
            v12[138] = v13 + 1;
            *(_WORD*)(v10 + 136) |= 2u;
          }
        }
      }
    }
  }
  return result;
}

_QWORD* game_facility_anonymous_1433c80(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int16 v11;
  _QWORD* result;
  __int64 v13;

  v1 = *(unsigned __int8*)(a1 + 152);
  if (*(_BYTE*)(a1 + 152) != 0) {
    v3 = *(_QWORD*)(a1 + 192);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      v1 = *(unsigned __int8*)(a1 + 152);
    }
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v1) {
            v11 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
            v5 = *(unsigned __int8*)(a1 + 153);
            if (*(_BYTE*)(a1 + 153) == 0) {
              goto LABEL_25;
            }
            goto LABEL_11;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          break;
        }
        v4 += 64;
      }
    }
  }
  v5 = *(unsigned __int8*)(a1 + 153);
  if (*(_BYTE*)(a1 + 153) == 0) {
    goto LABEL_25;
  }
LABEL_11:
  v6 = *(_QWORD*)(a1 + 96);
  v7 = *(_QWORD*)(a1 + 104);
  v8 = ((v7 - v6) << 6) - 1;
  if (v7 == v6) {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  if (v8 == v9) {
    GameRoutine_658d60((__int64*)(a1 + 88));
    v6 = *(_QWORD*)(a1 + 96);
    v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  }
  *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF)) =
      *(_QWORD*)(a1 + 16);
  ++*(_QWORD*)(a1 + 128);
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == v5) {
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        break;
      }
      v10 += 64;
    }
  }
LABEL_25:
  result = *(_QWORD**)(a1 + 192);
  *(_WORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
}

__int64 game_facility_anonymous_1433e20(__int64 result)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;

  v1 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(*GameData_212cd08[0] + 64) +
                             8LL * *(unsigned int*)(*GameData_212dcd0 + 8)) +
                  80LL);
  if (v1 != nullptr && *v1 != 0 && *GameData_212d460[0] == 0) {
    v2 = result + 16;
    v3 = result;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v4, v1, 0);
    v5 = *(_QWORD*)(v3 + 56);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 56);
    }
    *(_QWORD*)(v3 + 56) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = v2;
    *(_DWORD*)(v4 + 140) = game_HashString32("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

__n128 game_facility_anonymous_1433fb0(__n128 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  long double v21;
  __int64* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  char* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    __int64 v54;
    unsigned __int64 v55;
    char* v56;
  } v54_;
  struct {
    __int64 v57;
    unsigned __int64 v58;
    __int64 v59;
  } v57_;

  v1 = *(unsigned int*)(*GameData_212dcd0 + 8);
  if ((v1 & 0x80000000) != 0) {
    v2 = 0;
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212cd08[0] + 64) + 8 * v1);
  }
  v3 = GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] == 0) {
    return result;
  }
  v4 = game_GameModeData_instance_;
  v5 = GameData_212c6a0[0];
  if (game_GameModeData_instance_ != 0) {
    v6 = *(_QWORD*)(v2 + 96);
    v7 = *(_DWORD*)(game_GameModeData_instance_ + 92) & 0xFFFFFC7F;
    *(_QWORD*)(game_GameModeData_instance_ + 16) = v6;
    *(_DWORD*)(v4 + 92) = v7;
    if (v6 == 0) {
      goto LABEL_11;
    }
    v8 = *(_DWORD*)(v6 + 184);
    if ((v8 & 0x800) != 0) {
      v7 |= 0x100u;
      *(_DWORD*)(v4 + 92) = v7;
      v8 = *(_DWORD*)(v6 + 184);
      if ((v8 & 0x40) == 0) {
      LABEL_9:
        if ((v8 & 0x80) == 0) {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
    }
    else if ((v8 & 0x40) == 0) {
      goto LABEL_9;
    }
    v7 |= 0x80u;
    *(_DWORD*)(v4 + 92) = v7;
    if ((*(_DWORD*)(v6 + 184) & 0x80) == 0) {
    LABEL_11:
      v9 = *(_QWORD*)(*(_QWORD*)v5 + 328LL);
      if ((v9 & 0x20) == 0) {
        *(_QWORD*)(*(_QWORD*)v5 + 328LL) = v9 | 0x20;
        *(_BYTE*)(v4 + 57) = *(_BYTE*)(v4 + 56);
      }
      goto LABEL_15;
    }
  LABEL_10:
    *(_DWORD*)(v4 + 92) = v7 | 0x200;
    goto LABEL_11;
  }
  v10 = *(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 328LL);
  if ((v10 & 0x20) == 0) {
    *(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) = v10 | 0x20;
  }
LABEL_15:
  v11 = *(_QWORD*)GameData_212dbe0[0];
  *(_DWORD*)(v11 + 8) = 14;
  *(_DWORD*)(v11 + 68) = 2;
  if (*(_BYTE*)(v11 + 84) != 0) {
    *(_BYTE*)(v11 + 84) = 0;
  }
  GameHubData_dbd8e0();
  v12 = *(_QWORD*)v3;
  v13 = *(_BYTE*)(*(_QWORD*)v3 + 11LL);
  v14 = (__int64*)GameData_212dbf0[0];
  if ((v13 & 1) == 0) {
    v15 = *(_QWORD*)GameData_212dbf0[0];
    *(_BYTE*)(v12 + 11) = 1;
    v57_.v57 = 0;
    v57_.v58 = 0;
    GameRoutine_efbb60(v15, &v57_.v57, 0);
    if (game_script_hub_talk_g_select_menu != 0) {
      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
  }
  v16 = *v14;
  v57_.v58 = 0;
  v57_.v59 = 0;
  v57_.v57 = 0;
  v17 = *(_QWORD*)(v16 + 32);
  if (v17 != 0) {
    v18 = *(_QWORD**)(v16 + 24);
    v19 = *(_QWORD*)(v16 + 32);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    v20 = std___1___shared_weak_count_lock(v19);
    *(__n128*)&v21 = std___1___shared_weak_count___release_weak_alt2();
    if (v20 == 0 || v18 == nullptr) {
      if (v20 == 0) {
        goto LABEL_39;
      }
    }
    else {
      v23 = v18 + 40;
      if (&v57_.v57 != v18 + 40) {
        if ((*(_BYTE*)v23 & 1) != 0) {
          GameRoutine_64df20(&v57_.v57, v18[42], v18[41]);
        }
        else {
          v24 = *v23;
          v25 = v18[41];
          v26 = v18[42];
          v57_.v57 = v24;
          v57_.v58 = v25;
          v57_.v59 = v26;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v20 + 16LL))(v20, v21);
      std___1___shared_weak_count___release_weak_alt2();
    }
  }
LABEL_39:
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  v28 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v28[2] = 0;
  v29 = v28;
  *v28 = 0x757465526E75521ELL;
  v28[1] = 0x6E6F7373654C6E72LL;
  v30 = *(_QWORD*)(v2 + 8);
  v31 = strlen(v30);
  if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v32 = v31;
  if (v31 >= 0x17) {
    if ((v31 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v31 | 7) + 1;
    }
    v33 = (char*)fw_memory_HeapManager_Allocate_alt1(*v27, v34, 16, 0);
    v54_.v55 = v32;
    v54_.v56 = v33;
    v54_.v54 = v34 | 1;
  }
  else {
    LOBYTE(v54_.v54) = 2 * v31;
    v33 = (char*)&v54_.v54 + 1;
    if (v31 == 0) {
      goto LABEL_48;
    }
  }
  memmove(v33, v30, v32);
LABEL_48:
  v35 = *v27;
  v33[v32] = 0;
  v36 = (__int64*)fw_memory_HeapManager_Allocate_alt1(v35, 48, 16, 0);
  v37 = v54_.v54;
  v38 = v54_.v56;
  v39 = v36;
  v36[4] = v54_.v55;
  v36[5] = (__int64)v38;
  v40 = v29[1];
  *v36 = *v29;
  v36[1] = v40;
  v36[2] = v29[2];
  v36[3] = v37;
  v41 = 128;
  if (*(_QWORD*)(*v27 + 200) == 0) {
    v41 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v27 + v41);
  v42 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v27, 96, 16, 0);
  v43 = v42;
  if ((v57_.v57 & 1) != 0) {
    fw_text_String_CopyTerminated(v42 + 6, v57_.v59, v57_.v58);
  }
  else {
    v44 = v57_.v58;
    v42[6] = v57_.v57;
    v42[7] = v44;
    v42[8] = v57_.v59;
  }
  v45 = v39[3];
  v43[2] = v39[2];
  v43[3] = v45;
  v46 = v39[5];
  v43[4] = v39[4];
  v43[5] = v46;
  v47 = v39[1];
  *v43 = *v39;
  v43[1] = v47;
  v48 = 128;
  if (*(_QWORD*)(*v27 + 200) == 0) {
    v48 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v27 + v48);
  GameRoutine_6b7aa0((__int64*)(*(_QWORD*)v5 + 232LL), v43, v43 + 9, 3u);
  if ((v43[6] & 1) != 0 && v43[8] != 0) {
    v49 = 128;
    if (*(_QWORD*)(*v27 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v27 + v49);
  }
  if ((v43[3] & 1) != 0 && v43[5] != 0) {
    v50 = 128;
    if (*(_QWORD*)(*v27 + 200) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v27 + v50);
  }
  if ((*(_BYTE*)v43 & 1) != 0 && v43[2] != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v27 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v27 + v51);
  }
  v52 = 128;
  if (*(_QWORD*)(*v27 + 200) == 0) {
    v52 = 56;
  }
  result = nn_mem_StandardAllocator_Free_alt1(*v27 + v52);
  if ((v57_.v57 & 1) != 0 && v57_.v59 != 0) {
    v53 = 128;
    if (*(_QWORD*)(*v27 + 200) == 0) {
      v53 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*v27 + v53);
  }
  return result;
}

__int64 game_facility_anonymous_1434b30(__int64 result, __n128 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 152) + 120LL);
  if (v2 != 0) {
    v3 = *(unsigned __int16*)(v2 + 16);
    v4 = result;
    v15 = 0x100000000LL;
    LOWORD(v15) = v3;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v3) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v5 = game_map_MapRandom_instance__ptr[0];
      v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v8 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v5 + 1) = v6;
      v9 = (v8 >> 8) ^ (v7 >> 19) ^ v8 ^ v7;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v7;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v9;
      a2 = nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v15) =
          (16 * ((_WORD)v9 -
                 1000 * (unsigned __int16)((v9 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v13 = 0;
    v14 = 0;
    v11 = GameData_21762b8;
    v12 = 0;
    if ((_DWORD)v3 != 0) {
      game_8aef60(&v12, &v15);
    }
    result = ItemSeq_8af940(v4, &v12, 0, &v11, game_vstring_kEmpty_ptr[0], 0,
                            *(long double*)&a2);
    if (v12 != 0) {
      v13 = v12;
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
    }
  }
  return result;
}

__int64 game_facility_anonymous_1434cc0(__int64 result)
{
  _BYTE* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  v1 = *(_BYTE**)(*(_QWORD*)(result + 152) + 136LL);
  if (v1 != nullptr && *v1 != 0 && *GameData_212d460[0] == 0) {
    v3 = result;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v4, v1, 0);
    v5 = *(_QWORD*)(v3 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = v3;
    *(_DWORD*)(v4 + 140) = game_HashString32("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

__int64 game_facility_anonymous_14353e0(__int64 a1)
{
  unsigned __int64 v1;
  _BYTE* v2;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[3];

  v2 = (_BYTE*)(a1 + 216);
  v1 = *(unsigned __int8*)(a1 + 216);
  v4 = v1 & 1;
  v5 = v1 >> 1;
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 224);
  }
  if (v5 == 0) {
    v6 = GameRoutine_143e900();
    game_9470c0((void*)((__int64)v18), v6);
    if ((*v2 & 1) != 0 && *(_QWORD*)(a1 + 232) != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
    qmemcpy(v2, v18, 24);
    v4 = *v2 & 1;
  }
  v8 = GameRoutine_143e900();
  if (v4 != 0) {
    v9 = *(_QWORD*)(a1 + 232);
  }
  else {
    v9 = a1 + 217;
  }
  result = game_HashString_alt1(v9);
  v11 = *(__int64***)(v8 + 40);
  v12 = *v11;
  v13 = v11[1];
  if (*v11 != v13) {
    while (1) {
      v15 = *v12++;
      v14 = v15;
      v16 = *(_QWORD*)(v15 + 32);
      v17 = game_HashString_alt1(v9);
      result = game_HashString_alt1(v16);
      if (v17 == result) {
        break;
      }
      if (v12 == v13) {
        return result;
      }
    }
    if (GameData_21f3ff8 != 0) {
      *(_DWORD*)(GameData_21f3ff8 + 12) = *(unsigned __int16*)(v14 + 16);
    }
  }
  return result;
}

_QWORD* game_facility_anonymous_1435520(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int16 v11;
  _QWORD* result;
  __int64 v13;

  v1 = *(unsigned __int8*)(a1 + 152);
  if (*(_BYTE*)(a1 + 152) != 0) {
    v3 = *(_QWORD*)(a1 + 192);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      v1 = *(unsigned __int8*)(a1 + 152);
    }
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v1) {
            v11 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
            v5 = *(unsigned __int8*)(a1 + 153);
            if (*(_BYTE*)(a1 + 153) == 0) {
              goto LABEL_25;
            }
            goto LABEL_11;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          break;
        }
        v4 += 64;
      }
    }
  }
  v5 = *(unsigned __int8*)(a1 + 153);
  if (*(_BYTE*)(a1 + 153) == 0) {
    goto LABEL_25;
  }
LABEL_11:
  v6 = *(_QWORD*)(a1 + 96);
  v7 = *(_QWORD*)(a1 + 104);
  v8 = ((v7 - v6) << 6) - 1;
  if (v7 == v6) {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  if (v8 == v9) {
    GameRoutine_658d60((__int64*)(a1 + 88));
    v6 = *(_QWORD*)(a1 + 96);
    v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  }
  *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF)) =
      *(_QWORD*)(a1 + 16);
  ++*(_QWORD*)(a1 + 128);
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == v5) {
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        break;
      }
      v10 += 64;
    }
  }
LABEL_25:
  result = *(_QWORD**)(a1 + 192);
  *(_WORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
}

__int64 game_facility_anonymous_143a790(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  char* v9;
  __int64 v10;
  unsigned __int8 explicit;
  __int64* v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  _QWORD v40[2];
  char* v41;
  int v42;
  char v43;
  int v44;
  int v45;
  int v46;
  __int16 v47;

  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (result != 0) {
    v3 = (_QWORD*)result;
    v4 = *(_QWORD*)(result + 128);
    v5 = v3[17];
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_1405080(v4);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    else {
      GameRoutine_1405080(v4);
    }
    v6 = strlen(a1);
    if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1(v6);
    }
    v7 = v6;
    v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v6 >= 0x17) {
      if ((v6 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v6 | 7) + 1;
      }
      v9 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
      v38 = v7;
      v39 = v9;
      v37 = v10 | 1;
    }
    else {
      LOBYTE(v37) = 2 * v6;
      v9 = (char*)&v37 + 1;
      if (v6 == 0) {
        goto LABEL_15;
      }
    }
    memcpy(v9, a1, v7);
  LABEL_15:
    v9[v7] = 0;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                                    memory_order_acquire);
    v12 = GameData_2131328;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_2131330) != 0) {
      *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = 0;
      *v12 = 0xBF800000BF800000LL;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = -1082130432;
      __cxa_guard_release(GameData_2131330);
    }
    v13 = *(_DWORD*)v12;
    v14 = *((_DWORD*)v12 + 1);
    v15 = *(unsigned __int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12);
    if ((v37 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v40, v39, v38);
    }
    else {
      v40[0] = v37;
      v40[1] = v38;
      v41 = v39;
    }
    v16 = HIDWORD(v15);
    v46 = v15;
    v17 = v3[14];
    v18 = v3[15];
    v42 = 0;
    v43 = 0;
    v44 = v13;
    v45 = v14;
    v47 = v16;
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_14127e0(v17, v40);
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
      }
      if ((v40[0] & 1) == 0) {
      LABEL_29:
        if ((v37 & 1) != 0 && v39 != nullptr) {
          v20 = 128;
          if (*(_QWORD*)(*v8 + 200LL) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free(*v8 + v20);
        }
        SceneCharacter_1401f80(v3, 3.0f);
        v21 = GameData_2131368[0];
        SceneCharacter_1401ce0(v3, GameData_2131368[0]);
        SceneCharacter_1401f80(v3, 10.0f);
        v23 = (_QWORD*)v3[16];
        v22 = v3[17];
        if (v22 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                    memory_order_relaxed);
        }
        v24 = v23[1];
        result = fw_memory_HeapManager_Allocate(*v8, 104, 16, 0);
        *(_QWORD*)(result + 8) = 0;
        *(_QWORD*)(result + 16) = 0;
        v25 = (_QWORD*)result;
        *(_QWORD*)result = GameData_203e0d8;
        v26 = GameData_2131310[0];
        *(_QWORD*)(result + 32) = v23;
        *(_QWORD*)(result + 40) = v24;
        *(_BYTE*)(result + 48) = 0;
        *(_QWORD*)(result + 24) = v26 + 2;
        v27 = result + 24;
        if ((*(_BYTE*)v21 & 1) != 0) {
          result = fw_text_String_CopyTerminated_alt1(
              result + 56,
              *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21 + 8),
              *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21));
        }
        else {
          v28 = v21[1];
          *(_QWORD*)(result + 56) = *v21;
          *(_QWORD*)(result + 64) = v28;
          *(_QWORD*)(result + 72) =
              *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v21);
        }
        v29 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v21 + 16);
        v25[10] = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v21 + 8);
        v25[11] = v29;
        *(_QWORD*)((char*)v25 + 94) =
            *(_QWORD*)((char*)((int*)0x24LL) + (_QWORD)v21 + 2);
        v25[3] =
            game_facility_anonymous_ExpressionLoop_anonymous_SceneCharacterBehaviorRandomExpression_vtable;
        v30 = v23[3];
        v31 = v23[4];
        v32 = 32 * (v31 - v30) - 1;
        if (v31 == v30) {
          v32 = 0;
        }
        v33 = v23[7] + v23[6];
        if (v32 == v33) {
          result = GameRoutine_1403f60(v23 + 2);
          v30 = v23[3];
          v33 = v23[7] + v23[6];
        }
        v34 = (__int64*)(*(_QWORD*)(v30 + 8 * (v33 >> 8)) +
                         16LL * (unsigned __int8)v33);
        *v34 = v27;
        v34[1] = (__int64)v25;
        ++v23[7];
        if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          result = std___1___shared_weak_count___release_weak(v22);
          v35 = v3[16];
          v36 = v3[17];
          if (v36 != 0) {
          LABEL_46:
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                      memory_order_relaxed);
            *(_BYTE*)(v35 + 64) = 1;
            if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
              return std___1___shared_weak_count___release_weak(v36);
            }
            return result;
          }
        }
        else {
          v35 = v3[16];
          v36 = v3[17];
          if (v36 != 0) {
            goto LABEL_46;
          }
        }
        *(_BYTE*)(v35 + 64) = 1;
        return result;
      }
    }
    else {
      GameRoutine_14127e0(v17, v40);
      if ((v40[0] & 1) == 0) {
        goto LABEL_29;
      }
    }
    if (v41 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*v8 + v19);
    }
    goto LABEL_29;
  }
  return result;
}

__int64 game_facility_anonymous_143b060()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  char* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  char* v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  _QWORD v45[2];
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  _QWORD v52[2];
  _QWORD v53[3];

  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (result == 0) {
    return result;
  }
  v1 = result;
  v2 = SceneCharacter_14020c0(result);
  SceneTalk_1497cf0((void*)(v53), v2);
  ((__attribute__((swiftcall)) void (*)(PSEUDO_X8, _QWORD*, __int64, __int64))
       GameRoutine_1488120)((void*)v52, v53, v1, 1);
  result = snd_fnd_WeakHandle_isValid(v52);
  if ((result & 1) != 0) {
    result = VoiceRootRegistry_a1b100(v52);
    if (result != 0) {
      v50 = 0;
      v51 = 0x2000;
      snd_SeqVoice_getHandles(result, &v50, 1);
      result = snd_fnd_WeakHandle_isValid(&v50);
      if ((result & 1) != 0) {
        v3 = snd_fnd_WeakHandle_get(&v50);
        v4 = (char*)GameRoutine_190240(v3 + 120);
        if (v4 == nullptr || (v5 = v4, *v4 == 0)) {
          v6 = snd_fnd_WeakHandle_get(&v50);
          v7 = (char*)GameRoutine_190240(v6 + 144);
          if (v7 == nullptr || (v5 = v7, *v7 == 0)) {
            v8 = snd_fnd_WeakHandle_get(&v50);
            v9 = (char*)GameRoutine_190240(v8 + 88);
            if (v9 == nullptr || (v5 = v9, *v9 == 0)) {
              v5 = &GameData_1a9f09e;
            }
          }
        }
        v48 = 0;
        v49 = 0;
        v47 = 0;
        v10 = strlen(v5);
        if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_82;
        }
        v11 = v10;
        if (v10 >= 0x17) {
          if ((v10 | 7) == 0x17) {
            v13 = 26;
          }
          else {
            v13 = (v10 | 7) + 1;
          }
          v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v13, 16, 0);
          v45[1] = v11;
          v46 = v12;
          v45[0] = v13 | 1;
        }
        else {
          LOBYTE(v45[0]) = 2 * v10;
          v12 = (char*)v45 + 1;
          if (v10 == 0) {
            goto LABEL_21;
          }
        }
        memmove(v12, v5, v11);
      LABEL_21:
        v12[v11] = 0;
        game_112d480(v45, 95, &v47);
        if ((v45[0] & 1) != 0 && v46 != nullptr) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v14);
        }
        result = v48 - 24;
        v15 = *(unsigned __int8*)(v48 - 24);
        if ((v15 & 1) != 0) {
          v16 = *(_QWORD*)(v48 - 16);
        }
        else {
          v16 = v15 >> 1;
        }
        if (v16 == 0) {
          goto LABEL_62;
        }
        v17 = std___1_stoi();
        v18 = *(__int64**)(GameData_2241810 + 64);
        v19 = *(__int64**)(GameData_2241810 + 72);
        if (v18 == v19) {
        LABEL_33:
          v22 = 0;
          LOWORD(v42) = 0;
        LABEL_47:
          v27 = *(_QWORD*)(v1 + 112);
          v28 = *(_QWORD*)(v1 + 120);
          v29 = (v22 & 1) == 0;
          v30 = v22 >> 1;
          if (v29) {
            v31 = (char*)&v42 + 1;
          }
          else {
            v31 = v44;
          }
          if (v29) {
            v32 = v30;
          }
          else {
            v32 = v43;
          }
          if (v28 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                      memory_order_relaxed);
            result = SceneCharacterAnimator_1412d00(v27, (__int64)v31, v32);
            if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
              result = std___1___shared_weak_count___release_weak(v28);
            }
          }
          else {
            result = SceneCharacterAnimator_1412d00(v27, (__int64)v31, v32);
          }
          if ((v42 & 1) != 0 && v44 != nullptr) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
          }
        LABEL_62:
          v34 = v47;
          if (v47 != 0) {
            v35 = v48;
            if (v47 == v48) {
              goto LABEL_73;
            }
            v36 = v48;
            v37 = fw_memory_g_heap_manager_ptr;
            do {
              v38 = *(_BYTE*)(v36 - 24);
              v36 -= 24;
              if ((v38 & 1) != 0 && *(_QWORD*)(v35 - 8) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
                  v39 = 128;
                }
                else {
                  v39 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*(_QWORD*)v37 + v39);
              }
              v35 = v36;
            } while (v36 != v34);
            v48 = v34;
            if (v47 != 0) {
            LABEL_73:
              v40 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v40 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
            }
          }
          goto LABEL_76;
        }
        while (1) {
          v21 = *v18++;
          v20 = v21;
          if (v17 == *(unsigned __int8*)(v21 + 32)) {
            break;
          }
          if (v18 == v19) {
            goto LABEL_33;
          }
        }
        if (*(_QWORD*)(v20 + 40) != 0) {
          v23 = *(char**)(v20 + 40);
        }
        else {
          v23 = &GameData_1a9f09e;
        }
        v10 = strlen(v23);
        if (v10 < 0xFFFFFFFFFFFFFFF7LL) {
          v24 = v10;
          if (v10 >= 0x17) {
            if ((v10 | 7) == 0x17) {
              v26 = 26;
            }
            else {
              v26 = (v10 | 7) + 1;
            }
            v25 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v26, 16, 0);
            v43 = v24;
            v44 = v25;
            v42 = v26 | 1;
          }
          else {
            LOBYTE(v42) = 2 * v10;
            v25 = (char*)&v42 + 1;
            if (v10 == 0) {
              goto LABEL_46;
            }
          }
          memmove(v25, v23, v24);
        LABEL_46:
          v25[v24] = 0;
          v22 = (unsigned __int8)v42;
          goto LABEL_47;
        }
      LABEL_82:
        String_60a1d0_alt1(v10);
      }
    }
  }
LABEL_76:
  if ((v53[0] & 1) != 0 && v53[2] != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
  }
  return result;
}

_QWORD* game_facility_anonymous_14740c0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int16 v11;
  _QWORD* result;
  __int64 v13;

  v1 = *(unsigned __int8*)(a1 + 152);
  if (*(_BYTE*)(a1 + 152) != 0) {
    v3 = *(_QWORD*)(a1 + 192);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      v1 = *(unsigned __int8*)(a1 + 152);
    }
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v1) {
            v11 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
            v5 = *(unsigned __int8*)(a1 + 153);
            if (*(_BYTE*)(a1 + 153) == 0) {
              goto LABEL_25;
            }
            goto LABEL_11;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          break;
        }
        v4 += 64;
      }
    }
  }
  v5 = *(unsigned __int8*)(a1 + 153);
  if (*(_BYTE*)(a1 + 153) == 0) {
    goto LABEL_25;
  }
LABEL_11:
  v6 = *(_QWORD*)(a1 + 96);
  v7 = *(_QWORD*)(a1 + 104);
  v8 = ((v7 - v6) << 6) - 1;
  if (v7 == v6) {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  if (v8 == v9) {
    GameRoutine_658d60((__int64*)(a1 + 88));
    v6 = *(_QWORD*)(a1 + 96);
    v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  }
  *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF)) =
      *(_QWORD*)(a1 + 16);
  ++*(_QWORD*)(a1 + 128);
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == v5) {
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        break;
      }
      v10 += 64;
    }
  }
LABEL_25:
  result = *(_QWORD**)(a1 + 192);
  *(_WORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
}

__int64 game_facility_anonymous_1475290(__int64 a1)
{
  return GameRoutine_177c100(
      a1, *(_QWORD*)(a1 + 192),
      (int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8LL * (*(_DWORD*)(a1 + 200) & 0xFFF)) +
                        24LL) +
             12LL));
}

void game_facility_anonymous_1475b00(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;

  game_facility_anonymous_1475e80((void*)(&v43_.v43), a1);
  GameRoutine_1a09ce0(&v43_.v43, &GameData_1ac690d, 1);
  v4 = *a2;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a2 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a2 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0(&v43_.v43, v7, v8);
  v9 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v10 = v9;
  if (v9 != nullptr) {
    v11 = v9[10];
    if (v11 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v12);
  }
  if (v10 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 24);
  }
  else {
    v13 = a1 + 9;
  }
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v17, 16, 0);
    v43_.v44 = v15;
    v43_.v45 = v16;
    v43_.v43 = v17 | 1;
    goto LABEL_27;
  }
  LOBYTE(v43_.v43) = 2 * v14;
  v16 = (char*)&v43_.v43 + 1;
  if (v14 != 0) {
  LABEL_27:
    memmove(v16, v13, v15);
  }
  v16[v15] = 0;
  GameRoutine_1a09ce0(&v43_.v43, &GameData_1ac690d, 1);
  v18 = *a2;
  v19 = (v18 & 1) == 0;
  v20 = v18 >> 1;
  if (v19) {
    v21 = a2 + 1;
  }
  else {
    v21 = *((unsigned __int8**)a2 + 2);
  }
  if (v19) {
    v22 = v20;
  }
  else {
    v22 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0(&v43_.v43, v21, v22);
  v23 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v24 = v23;
  if (v23 != nullptr) {
    v25 = v23[10];
    if (v25 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v25 + 48LL))(v25);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v26);
  }
  if (v24 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 48);
  }
  else {
    v27 = a1 + 33;
  }
  v28 = strlen(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0();
  }
  v29 = v28;
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v28 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v31, 16, 0);
    v43_.v44 = v29;
    v43_.v45 = v30;
    v43_.v43 = v31 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v28;
    v30 = (char*)&v43_.v43 + 1;
    if (v28 == 0) {
      goto LABEL_55;
    }
  }
  memmove(v30, v27, v29);
LABEL_55:
  v30[v29] = 0;
  GameRoutine_1a09ce0(&v43_.v43, &GameData_1ac690d, 1);
  v32 = *a2;
  v33 = (v32 & 1) == 0;
  v34 = v32 >> 1;
  if (v33) {
    v35 = a2 + 1;
  }
  else {
    v35 = *((unsigned __int8**)a2 + 2);
  }
  if (v33) {
    v36 = v34;
  }
  else {
    v36 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0(&v43_.v43, v35, v36);
  v37 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v38 = v37;
  if (v37 != nullptr) {
    v39 = v37[10];
    if (v39 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v39 + 48LL))(v39);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v40);
  }
  if (v38 == nullptr) {
    v41 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
    if (v41 != nullptr) {
      v42 = v41[10];
      if (v42 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v42 + 48LL))(v42);
        return;
      }
    LABEL_74:
      GameRoutine_60a310();
    }
  }
}

__attribute__((swiftcall)) void game_facility_anonymous_1475e80(PSEUDO_X8 x8_,
                                                                __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 24);
  }
  else {
    v4 = a1 + 9;
  }
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v7;
    *a2 = v8 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a2 = 2 * result;
  v7 = (__int64)a2 + 1;
  if (result != 0) {
  LABEL_12:
    result = memmove(v7, v4, v6);
  }
  *(_BYTE*)(v7 + v6) = 0;
  v9 = *(unsigned __int8*)(a1 + 32);
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 40);
  }
  else {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    GameRoutine_1a09ce0(a2, &GameData_1ac690d, 1);
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v11 = *(_QWORD*)(a1 + 48);
    }
    else {
      v11 = a1 + 33;
    }
    v12 = strlen(v11);
    {
      GameRoutine_1a09ce0(a2, v11, v12);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_facility_anonymous_15f28b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v6_.v6[0] = GameData_205faa8;
  v6_.v7 = v6_.v6;
  GameRoutine_f9faa0((__int64)v6_.v6);
  if (v6_.v7 == v6_.v6) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v6_.v7 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v6_.v7 + v2))((__int64)v6_.v7);
  }
  FacilityUtil_949e50();
  v4 = game_GameModeData_instance_ != 0 &&
       (v3 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&game_kVariableHubFacilityForced)) != 0 &&
       *(_DWORD*)(v3 + 32) != 0;
  return GameRoutine_16a4d20(a1, 1, v4);
}

__int64 game_facility_anonymous_15f7ac0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64** v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(result + 216);
  if (v1 == 0) {
    goto LABEL_8;
  }
  result = GameRoutine_143e400();
  if (result == 0) {
    goto LABEL_8;
  }
  v2 = result;
  result = game_HashString_alt1((__int64)&GameData_1afac00);
  v3 = *(__int64***)(v2 + 40);
  v4 = *v3;
  v5 = v3[1];
  if (*v3 == v5) {
    goto LABEL_8;
  }
  while (1) {
    v7 = *v4++;
    v6 = v7;
    v8 = *(_QWORD*)(v7 + 32);
    v9 = game_HashString_alt1((__int64)&GameData_1afac00);
    result = game_HashString_alt1(v8);
    if (v9 == result) {
      break;
    }
    if (v4 == v5) {
      v6 = 0;
      break;
    }
  }
  if (v1 != v6) {
  LABEL_8:
    if (game_hub_ProcHubSeqView_instance_ != 0 && GameData_21f3d10 != 0 &&
        *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0) {
      *(_BYTE*)(GameData_21f3d10 + 768) = 1;
    }
  }
  return result;
}

const char* game_facility_anonymous_16abe00(int a1, int a2)
{
  long double v4;
  int v5;
  int v6;
  int v7;
  long double v9;
  int v10;
  int v11;
  int v12;
  long double v14;
  int v15;

  if (a1 == 0) {
    return nullptr;
  }
  *(__n128*)&v4 = snd_fnd_calcCrc32("BGM_SYS_MainTheme2_MUSEUM", 0);
  v6 = v5;
  v7 = snd_fnd_calcCrc32Reverse("BGM_SYS_MainTheme2_MUSEUM", 0, v4);
  if (a1 == v6 && a2 == v7) {
    return "BGM_SYS_MainTheme2";
  }
  *(__n128*)&v9 = snd_fnd_calcCrc32("BGM_SYS_MainTheme3_MUSEUM", 0);
  v11 = v10;
  v12 = snd_fnd_calcCrc32Reverse("BGM_SYS_MainTheme3_MUSEUM", 0, v9);
  if (a1 == v11 && a2 == v12) {
    return "BGM_SYS_MainTheme3";
  }
  *(__n128*)&v14 = snd_fnd_calcCrc32("BGM_SYS_MainTheme4_MUSEUM", 0);
  if (((a1 == v15) & (a2 == (unsigned int)snd_fnd_calcCrc32Reverse(
                                "BGM_SYS_MainTheme4_MUSEUM", 0, v14))) != 0) {
    return "BGM_SYS_MainTheme4";
  }
  else {
    return nullptr;
  }
}

__int64 game_facility_anonymous_16bc820(__int64 a1, _QWORD* a2, int* a3)
{
  __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v15;
    unsigned __int64 v16;
    char* v17;
  } v15_;

  v3 = *a2;
  v6 = strlen(*a2);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v9, 16, 0);
    v15_.v16 = v7;
    v15_.v17 = v8;
    v15_.v15 = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v15_.v15) = 2 * v6;
  v8 = (char*)&v15_.v15 + 1;
  if (v6 != 0) {
  LABEL_9:
    memmove(v8, v3, v7);
  }
  v8[v7] = 0;
  v10 = *a3;
  if ((v15_.v15 & 1) != 0) {
    v12 = (__int64)v15_.v17;
    fw_text_String_CopyTerminated((__int64*)a1, (__int64)v15_.v17, v15_.v16);
    *(_DWORD*)(a1 + 24) = v10;
    *(_DWORD*)(a1 + 28) = -1;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v13);
    }
  }
  else {
    v11 = v15_.v16;
    *(_QWORD*)a1 = v15_.v15;
    *(_QWORD*)(a1 + 8) = v11;
    *(_QWORD*)(a1 + 16) = v15_.v17;
    *(_DWORD*)(a1 + 24) = v10;
    *(_DWORD*)(a1 + 28) = -1;
  }
  return a1;
}

__int64 game_facility_anonymous_1723840(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6;
  long double v7;
  __int64 v8;
  int v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  const char* v22;
  int v23;
  int v24;
  const char* v25;
  int v26;
  const char* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int128 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned int v43;
  __int64 v44;
  char v45;
  unsigned __int64 v46;
  __int64 v47;
  char v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  const char* v55;
  const char* v56;
  int v57;
  const char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  unsigned __int64 v65;
  const char* v66;
  int v67;
  const char* v68;
  unsigned __int64 v69;
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
  unsigned int v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  char v85;
  unsigned __int64 v86;
  __int64 v87;
  char v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  const char* v93;
  int i;
  const char* v95;
  int v96;
  const char* v97;
  unsigned __int64 v98;
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
  unsigned int v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  char v114;
  unsigned __int64 v115;
  __int64 v116;
  char v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  char v125;
  unsigned __int64 v126;
  __int64 v127;
  char v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  char v136;
  unsigned __int64 v137;
  __int64 v138;
  char v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  char v147;
  unsigned __int64 v148;
  __int64 v149;
  char v150;
  unsigned __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  char v158;
  unsigned __int64 v159;
  __int64 v160;
  char v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  char v169;
  unsigned __int64 v170;
  __int64 v171;
  char v172;
  unsigned __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  char v177;
  unsigned __int64 v178;
  __int64 v179;
  char v180;
  unsigned __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  char v188;
  unsigned __int64 v189;
  __int64 v190;
  char v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  char v199;
  unsigned __int64 v200;
  __int64 v201;
  char v202;
  unsigned __int64 v203;
  unsigned __int64 v204;
  __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  char v210;
  unsigned __int64 v211;
  __int64 v212;
  char v213;
  unsigned __int64 v214;
  unsigned __int64 v215;
  __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  char v221;
  unsigned __int64 v222;
  unsigned __int64 v223;
  __int64 v224;
  unsigned __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  _QWORD* v229;
  __int64 v230;
  unsigned int* v231;
  unsigned int v232;
  unsigned int v233;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  char v243;
  __int64 v244;
  int v245;
  _BYTE v246[49];

  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1456, 16, 0);
  v238 = 0;
  v239 = 0;
  BasicMenu_16dcd30(v6, 0, &v238, 0);
  v8 = v239;
  if (v239 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v239 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    *(__n128*)&v7 = std___1___shared_weak_count___release_weak_alt1(v8);
  }
  *(_DWORD*)(v6 + 1080) = 0;
  *(_QWORD*)(v6 + 1088) = 0;
  *(_QWORD*)(v6 + 1096) = 0;
  *(_QWORD*)(v6 + 1104) = 0;
  *(_QWORD*)(v6 + 1152) = 0;
  *(_QWORD*)(v6 + 1072) = 0xFFFFFFFFLL;
  *(_QWORD*)v6 = game_facility_anonymous_ProcObeliskResumeMenu_vtable;
  *(_DWORD*)(v6 + 1112) = 2;
  *(_QWORD*)(v6 + 1168) = 0;
  *(_QWORD*)(v6 + 1176) = 0;
  *(_BYTE*)(v6 + 1184) = 0;
  *(_BYTE*)(v6 + 1200) = a2;
  *(_DWORD*)(v6 + 1204) = a3;
  *(_WORD*)(v6 + 1208) = 0;
  *(_QWORD*)(v6 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  *(_QWORD*)(v6 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  *(_BYTE*)(v6 + 1210) = 0;
  *(_DWORD*)(v6 + 1244) = 0;
  *(_BYTE*)(v6 + 1248) = 0;
  *(_QWORD*)(v6 + 1282) = 0;
  *(_DWORD*)(v6 + 1290) = 0;
  *(_DWORD*)(v6 + 1312) = 0;
  *(_BYTE*)(v6 + 1316) = 0;
  *(_DWORD*)(v6 + 1318) = 0;
  *(_QWORD*)(v6 + 1234) = 0;
  *(_QWORD*)(v6 + 1220) = 0;
  *(_QWORD*)(v6 + 1228) = 0;
  *(_QWORD*)(v6 + 1212) = 0;
  *(_QWORD*)(v6 + 1303) = 0;
  *(_DWORD*)(v6 + 1324) = 0;
  *(_WORD*)(v6 + 1328) = 0;
  *(_QWORD*)(v6 + 1336) = 0;
  *(_BYTE*)(v6 + 1344) = 0;
  *(_QWORD*)(v6 + 1296) = 0;
  *(_BYTE*)(v6 + 1440) = 0;
  *(_QWORD*)(v6 + 1432) = 0;
  *(_DWORD*)(v6 + 1249) = 1;
  *(_BYTE*)(v6 + 361) = 1;
  v9 = GameData_21668e0;
  v10 = GameData_21668e0 + 1;
  *(_QWORD*)(v6 + 1254) = 0;
  *(_QWORD*)(v6 + 1262) = 0;
  *(_QWORD*)(v6 + 1270) = 0;
  *(_DWORD*)(v6 + 1277) = 0;
  *(_QWORD*)(v6 + 1424) = 0;
  *(_QWORD*)(v6 + 1416) = 0;
  *(_QWORD*)(v6 + 1408) = 0;
  *(_QWORD*)(v6 + 1400) = 0;
  *(_QWORD*)(v6 + 1392) = 0;
  *(_QWORD*)(v6 + 1384) = 0;
  *(_QWORD*)(v6 + 1376) = 0;
  *(_QWORD*)(v6 + 1368) = 0;
  *(_QWORD*)(v6 + 1360) = 0;
  *(_QWORD*)(v6 + 1352) = 0;
  GameData_21668e0 = v10;
  if (v9 == 0) {
    ((void (*)(long double))*game_anonymous_MountBind_vtable_ptr)(v7);
    v11 = *(_QWORD**)GameData_212d6e8;
    v12 = GameRoutine_18d3900(**(_QWORD**)GameData_212d6e8);
    v13 = (unsigned int*)(*v11 + 804LL);
    v14 = atomic_load(v13);
    if (v14 != 0) {
      do {
        v12 = nn_os_YieldThread(v12);
        v15 = atomic_load(v13);
      } while (v15 != 0);
    }
  }
  if (a3 == 1) {
    v16 = 4;
  }
  else {
    v16 = 5;
  }
  *(_BYTE*)(v6 + 1208) = (unsigned __int8)GameRoutine_877790(v16, a2) == 4;
  if (a3 == 2) {
    v55 = (&GameData_1fa6240)[(unsigned __int8)a2];
    v56 = (const char*)game_util_Format("%s_%s_%d", "Part", v55, 2);
    v236 = game_util_Format("%s/%s", "000", v56);
    v237 = strlen(v236);
    GameRoutine_878ea0((void*)(&v238), &v236);
    if ((_BYTE)v238 != 0 && (v246[3] & 0x40) == 0) {
      v57 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v57 = *(_DWORD*)(game_GameModeData_instance_ + 8);
      }
      if (HIDWORD(v238) == v57) {
        v58 = (const char*)game_util_Format("%s_%s_%d", "Part", v55, 2);
        v236 = game_util_Format("%s/%s", "000", v58);
        v237 = strlen(v236);
        GameRoutine_878ea0((void*)(&v238), &v236);
        v59 = v241;
        v60 = *(_QWORD*)&v246[12];
        *(_QWORD*)(v6 + 1256) = v240;
        *(_QWORD*)(v6 + 1264) = v59;
        *(_QWORD*)(v6 + 1272) = v242;
        *(_BYTE*)(v6 + 1280) = v243;
        v61 = v239;
        *(_QWORD*)(v6 + 1240) = v238;
        *(_QWORD*)(v6 + 1248) = v61;
        v62 = *(_QWORD*)&v246[4];
        *(_QWORD*)(v6 + 1282) = v244;
        *(_DWORD*)(v6 + 1290) = v245;
        *(_DWORD*)(v6 + 1296) = *(_DWORD*)v246;
        *(_QWORD*)(v6 + 1300) = v62;
        *(_QWORD*)(v6 + 1308) = v60;
        *(_BYTE*)(v6 + 1316) = v246[20];
        *(_DWORD*)(v6 + 1318) = *(_DWORD*)&v246[22];
        v63 = *(_QWORD*)&v246[36];
        *(_QWORD*)(v6 + 1324) = *(_QWORD*)&v246[28];
        *(_QWORD*)(v6 + 1332) = v63;
        *(_QWORD*)(v6 + 1337) = *(_QWORD*)&v246[41];
        *(_DWORD*)(v6 + 1212) = *(_DWORD*)(v6 + 1312);
      }
    }
    v64 = 1;
    v65 = 0;
    *(_QWORD*)(v6 + 1224) = *(_QWORD*)(v6 + 1216);
    do {
      v66 =
          (const char*)game_util_Format("%s_%s_%d_%d", "Chapter", v55, 2, v64);
      v236 = game_util_Format("%s/%s", "000", v66);
      v237 = strlen(v236);
      GameRoutine_878ea0((void*)(&v238), &v236);
      if ((_BYTE)v238 != 0 && (v246[3] & 0x40) == 0) {
        v67 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v67 = *(_DWORD*)(game_GameModeData_instance_ + 8);
        }
        if (HIDWORD(v238) == v67) {
          v68 = (const char*)game_util_Format("%s_%s_%d_%d", "Chapter", v55, 2,
                                              v64);
          v236 = game_util_Format("%s/%s", "000", v68);
          v237 = strlen(v236);
          GameRoutine_878ea0((void*)(&v238), &v236);
          v69 = *(_QWORD*)(v6 + 1224);
          if (v69 >= *(_QWORD*)(v6 + 1232)) {
            v71 = ProcObeliskResumeMenu_1726360(v6 + 1216, &v238);
          }
          else {
            v70 = v239;
            v71 = v69 + 112;
            *(_QWORD*)v69 = v238;
            *(_QWORD*)(v69 + 8) = v70;
            v72 = v240;
            v73 = v241;
            v74 = v242;
            *(_BYTE*)(v69 + 40) = v243;
            *(_QWORD*)(v69 + 24) = v73;
            *(_QWORD*)(v69 + 32) = v74;
            *(_QWORD*)(v69 + 16) = v72;
            *(_QWORD*)(v69 + 42) = v244;
            *(_DWORD*)(v69 + 50) = v245;
            v75 = *(_QWORD*)&v246[16];
            v76 = *(_QWORD*)v246;
            *(_QWORD*)(v69 + 64) = *(_QWORD*)&v246[8];
            *(_QWORD*)(v69 + 72) = v75;
            *(_QWORD*)(v69 + 56) = v76;
            v77 = *(_QWORD*)&v246[24];
            v78 = *(_QWORD*)&v246[32];
            v79 = *(_QWORD*)&v246[40];
            *(_BYTE*)(v69 + 104) = v246[48];
            *(_QWORD*)(v69 + 88) = v78;
            *(_QWORD*)(v69 + 96) = v79;
            *(_QWORD*)(v69 + 80) = v77;
          }
          v80 = *(unsigned int*)&v246[28];
          v81 = v246[6];
          v82 = 3600LL * *(unsigned __int16*)&v246[4];
          v83 = v246[7];
          *(_QWORD*)(v6 + 1224) = v71;
          v84 = (v82 | (v80 << 32)) + 60LL * v81 + v83;
          if (v65 <= v84) {
            *(_DWORD*)(v6 + 1432) = v64;
            *(_QWORD*)(v6 + 1424) = v84;
            v65 = v84;
          }
          *(_DWORD*)(v6 + 1436) = v64;
        }
      }
      ++v64;
    } while (v64 != 7);
    v85 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                              *(unsigned int*)(v6 + 1204), 1);
    v86 = *(_QWORD*)(v6 + 1360);
    v87 = *(_QWORD*)(v6 + 1368);
    v88 = v85;
    if (v86 == v87 << 6) {
      if ((__int64)(v86 + 1) < 0) {
        goto LABEL_212;
      }
      if (v86 > 0x3FFFFFFFFFFFFFFELL) {
        v91 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v89 = v87 << 7;
        v90 = (v86 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v89 <= v90) {
          v91 = v90;
        }
        else {
          v91 = v89;
        }
      }
      collision_6704c0(v6 + 1352, v91);
      v86 = *(_QWORD*)(v6 + 1360);
    }
    v121 = v86 >> 6;
    *(_QWORD*)(v6 + 1360) = v86 + 1;
    v122 = *(_QWORD*)(v6 + 1352);
    v123 = 1LL << v86;
    if ((v88 & 1) != 0) {
      v124 = *(_QWORD*)(v122 + 8 * v121) | v123;
    }
    else {
      v124 = *(_QWORD*)(v122 + 8 * v121) & ~v123;
    }
    *(_QWORD*)(v122 + 8 * v121) = v124;
    v125 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 2);
    v126 = *(_QWORD*)(v6 + 1360);
    v127 = *(_QWORD*)(v6 + 1368);
    v128 = v125;
    if (v126 == v127 << 6) {
      if ((__int64)(v126 + 1) < 0) {
        goto LABEL_212;
      }
      if (v126 > 0x3FFFFFFFFFFFFFFELL) {
        v131 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v129 = v127 << 7;
        v130 = (v126 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v129 <= v130) {
          v131 = v130;
        }
        else {
          v131 = v129;
        }
      }
      collision_6704c0(v6 + 1352, v131);
      v126 = *(_QWORD*)(v6 + 1360);
    }
    v132 = v126 >> 6;
    *(_QWORD*)(v6 + 1360) = v126 + 1;
    v133 = *(_QWORD*)(v6 + 1352);
    v134 = 1LL << v126;
    if ((v128 & 1) != 0) {
      v135 = *(_QWORD*)(v133 + 8 * v132) | v134;
    }
    else {
      v135 = *(_QWORD*)(v133 + 8 * v132) & ~v134;
    }
    *(_QWORD*)(v133 + 8 * v132) = v135;
    v136 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 3);
    v137 = *(_QWORD*)(v6 + 1360);
    v138 = *(_QWORD*)(v6 + 1368);
    v139 = v136;
    if (v137 == v138 << 6) {
      if ((__int64)(v137 + 1) < 0) {
        goto LABEL_212;
      }
      if (v137 > 0x3FFFFFFFFFFFFFFELL) {
        v142 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v140 = v138 << 7;
        v141 = (v137 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v140 <= v141) {
          v142 = v141;
        }
        else {
          v142 = v140;
        }
      }
      collision_6704c0(v6 + 1352, v142);
      v137 = *(_QWORD*)(v6 + 1360);
    }
    v143 = v137 >> 6;
    *(_QWORD*)(v6 + 1360) = v137 + 1;
    v144 = *(_QWORD*)(v6 + 1352);
    v145 = 1LL << v137;
    if ((v139 & 1) != 0) {
      v146 = *(_QWORD*)(v144 + 8 * v143) | v145;
    }
    else {
      v146 = *(_QWORD*)(v144 + 8 * v143) & ~v145;
    }
    *(_QWORD*)(v144 + 8 * v143) = v146;
    v147 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 4);
    v148 = *(_QWORD*)(v6 + 1360);
    v149 = *(_QWORD*)(v6 + 1368);
    v150 = v147;
    if (v148 == v149 << 6) {
      if ((__int64)(v148 + 1) < 0) {
        goto LABEL_212;
      }
      if (v148 > 0x3FFFFFFFFFFFFFFELL) {
        v153 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v151 = v149 << 7;
        v152 = (v148 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v151 <= v152) {
          v153 = v152;
        }
        else {
          v153 = v151;
        }
      }
      collision_6704c0(v6 + 1352, v153);
      v148 = *(_QWORD*)(v6 + 1360);
    }
    v154 = v148 >> 6;
    *(_QWORD*)(v6 + 1360) = v148 + 1;
    v155 = *(_QWORD*)(v6 + 1352);
    v156 = 1LL << v148;
    if ((v150 & 1) != 0) {
      v157 = *(_QWORD*)(v155 + 8 * v154) | v156;
    }
    else {
      v157 = *(_QWORD*)(v155 + 8 * v154) & ~v156;
    }
    *(_QWORD*)(v155 + 8 * v154) = v157;
    v158 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 5);
    v159 = *(_QWORD*)(v6 + 1360);
    v160 = *(_QWORD*)(v6 + 1368);
    v161 = v158;
    if (v159 == v160 << 6) {
      if ((__int64)(v159 + 1) < 0) {
        goto LABEL_212;
      }
      if (v159 > 0x3FFFFFFFFFFFFFFELL) {
        v164 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v162 = v160 << 7;
        v163 = (v159 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v162 <= v163) {
          v164 = v163;
        }
        else {
          v164 = v162;
        }
      }
      collision_6704c0(v6 + 1352, v164);
      v159 = *(_QWORD*)(v6 + 1360);
    }
    v165 = v159 >> 6;
    *(_QWORD*)(v6 + 1360) = v159 + 1;
    v166 = *(_QWORD*)(v6 + 1352);
    v167 = 1LL << v159;
    if ((v161 & 1) != 0) {
      v168 = *(_QWORD*)(v166 + 8 * v165) | v167;
    }
    else {
      v168 = *(_QWORD*)(v166 + 8 * v165) & ~v167;
    }
    *(_QWORD*)(v166 + 8 * v165) = v168;
    v169 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 6);
    v170 = *(_QWORD*)(v6 + 1360);
    v171 = *(_QWORD*)(v6 + 1368);
    v172 = v169;
    if (v170 != v171 << 6) {
      goto LABEL_204;
    }
    if ((__int64)(v170 + 1) >= 0) {
      goto LABEL_198;
    }
    goto LABEL_212;
  }
  if (a3 != 1) {
    *(_QWORD*)(v6 + 1224) = *(_QWORD*)(v6 + 1216);
    if (a3 != 3) {
      goto LABEL_208;
    }
    v92 = 0;
    v93 = (&GameData_1fa6240)[(unsigned __int8)a2];
    for (i = 1; i != 7; ++i) {
      v95 = (const char*)game_util_Format("%s_%s_%d_%d", "Chapter", v93, 3, i);
      v236 = game_util_Format("%s/%s", "000", v95);
      v237 = strlen(v236);
      GameRoutine_878ea0((void*)(&v238), &v236);
      if ((_BYTE)v238 != 0 && (v246[3] & 0x40) == 0) {
        v96 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v96 = *(_DWORD*)(game_GameModeData_instance_ + 8);
        }
        if (HIDWORD(v238) == v96) {
          v97 = (const char*)game_util_Format("%s_%s_%d_%d", "Chapter", v93, 3,
                                              i);
          v236 = game_util_Format("%s/%s", "000", v97);
          v237 = strlen(v236);
          GameRoutine_878ea0((void*)(&v238), &v236);
          v98 = *(_QWORD*)(v6 + 1224);
          if (v98 >= *(_QWORD*)(v6 + 1232)) {
            v100 = ProcObeliskResumeMenu_1726360(v6 + 1216, &v238);
          }
          else {
            v99 = v239;
            v100 = v98 + 112;
            *(_QWORD*)v98 = v238;
            *(_QWORD*)(v98 + 8) = v99;
            v101 = v240;
            v102 = v241;
            v103 = v242;
            *(_BYTE*)(v98 + 40) = v243;
            *(_QWORD*)(v98 + 24) = v102;
            *(_QWORD*)(v98 + 32) = v103;
            *(_QWORD*)(v98 + 16) = v101;
            *(_QWORD*)(v98 + 42) = v244;
            *(_DWORD*)(v98 + 50) = v245;
            v104 = *(_QWORD*)&v246[16];
            v105 = *(_QWORD*)v246;
            *(_QWORD*)(v98 + 64) = *(_QWORD*)&v246[8];
            *(_QWORD*)(v98 + 72) = v104;
            *(_QWORD*)(v98 + 56) = v105;
            v106 = *(_QWORD*)&v246[24];
            v107 = *(_QWORD*)&v246[32];
            v108 = *(_QWORD*)&v246[40];
            *(_BYTE*)(v98 + 104) = v246[48];
            *(_QWORD*)(v98 + 88) = v107;
            *(_QWORD*)(v98 + 96) = v108;
            *(_QWORD*)(v98 + 80) = v106;
          }
          v109 = *(unsigned int*)&v246[28];
          v110 = v246[6];
          v111 = 3600LL * *(unsigned __int16*)&v246[4];
          v112 = v246[7];
          *(_QWORD*)(v6 + 1224) = v100;
          v113 = (v111 | (v109 << 32)) + 60LL * v110 + v112;
          if (v92 <= v113) {
            *(_DWORD*)(v6 + 1432) = i;
            *(_QWORD*)(v6 + 1424) = v113;
            v92 = v113;
          }
          *(_DWORD*)(v6 + 1436) = i;
        }
      }
    }
    v114 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 1);
    v115 = *(_QWORD*)(v6 + 1360);
    v116 = *(_QWORD*)(v6 + 1368);
    v117 = v114;
    if (v115 == v116 << 6) {
      if ((__int64)(v115 + 1) < 0) {
        goto LABEL_212;
      }
      if (v115 > 0x3FFFFFFFFFFFFFFELL) {
        v120 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v118 = v116 << 7;
        v119 = (v115 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v118 <= v119) {
          v120 = v119;
        }
        else {
          v120 = v118;
        }
      }
      collision_6704c0(v6 + 1352, v120);
      v115 = *(_QWORD*)(v6 + 1360);
    }
    v173 = v115 >> 6;
    *(_QWORD*)(v6 + 1360) = v115 + 1;
    v174 = *(_QWORD*)(v6 + 1352);
    v175 = 1LL << v115;
    if ((v117 & 1) != 0) {
      v176 = *(_QWORD*)(v174 + 8 * v173) | v175;
    }
    else {
      v176 = *(_QWORD*)(v174 + 8 * v173) & ~v175;
    }
    *(_QWORD*)(v174 + 8 * v173) = v176;
    v177 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 2);
    v178 = *(_QWORD*)(v6 + 1360);
    v179 = *(_QWORD*)(v6 + 1368);
    v180 = v177;
    if (v178 == v179 << 6) {
      if ((__int64)(v178 + 1) < 0) {
        goto LABEL_212;
      }
      if (v178 > 0x3FFFFFFFFFFFFFFELL) {
        v183 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v181 = v179 << 7;
        v182 = (v178 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v181 <= v182) {
          v183 = v182;
        }
        else {
          v183 = v181;
        }
      }
      collision_6704c0(v6 + 1352, v183);
      v178 = *(_QWORD*)(v6 + 1360);
    }
    v184 = v178 >> 6;
    *(_QWORD*)(v6 + 1360) = v178 + 1;
    v185 = *(_QWORD*)(v6 + 1352);
    v186 = 1LL << v178;
    if ((v180 & 1) != 0) {
      v187 = *(_QWORD*)(v185 + 8 * v184) | v186;
    }
    else {
      v187 = *(_QWORD*)(v185 + 8 * v184) & ~v186;
    }
    *(_QWORD*)(v185 + 8 * v184) = v187;
    v188 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 3);
    v189 = *(_QWORD*)(v6 + 1360);
    v190 = *(_QWORD*)(v6 + 1368);
    v191 = v188;
    if (v189 == v190 << 6) {
      if ((__int64)(v189 + 1) < 0) {
        goto LABEL_212;
      }
      if (v189 > 0x3FFFFFFFFFFFFFFELL) {
        v194 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v192 = v190 << 7;
        v193 = (v189 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v192 <= v193) {
          v194 = v193;
        }
        else {
          v194 = v192;
        }
      }
      collision_6704c0(v6 + 1352, v194);
      v189 = *(_QWORD*)(v6 + 1360);
    }
    v195 = v189 >> 6;
    *(_QWORD*)(v6 + 1360) = v189 + 1;
    v196 = *(_QWORD*)(v6 + 1352);
    v197 = 1LL << v189;
    if ((v191 & 1) != 0) {
      v198 = *(_QWORD*)(v196 + 8 * v195) | v197;
    }
    else {
      v198 = *(_QWORD*)(v196 + 8 * v195) & ~v197;
    }
    *(_QWORD*)(v196 + 8 * v195) = v198;
    v199 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 4);
    v200 = *(_QWORD*)(v6 + 1360);
    v201 = *(_QWORD*)(v6 + 1368);
    v202 = v199;
    if (v200 == v201 << 6) {
      if ((__int64)(v200 + 1) < 0) {
        goto LABEL_212;
      }
      if (v200 > 0x3FFFFFFFFFFFFFFELL) {
        v205 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v203 = v201 << 7;
        v204 = (v200 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v203 <= v204) {
          v205 = v204;
        }
        else {
          v205 = v203;
        }
      }
      collision_6704c0(v6 + 1352, v205);
      v200 = *(_QWORD*)(v6 + 1360);
    }
    v206 = v200 >> 6;
    *(_QWORD*)(v6 + 1360) = v200 + 1;
    v207 = *(_QWORD*)(v6 + 1352);
    v208 = 1LL << v200;
    if ((v202 & 1) != 0) {
      v209 = *(_QWORD*)(v207 + 8 * v206) | v208;
    }
    else {
      v209 = *(_QWORD*)(v207 + 8 * v206) & ~v208;
    }
    *(_QWORD*)(v207 + 8 * v206) = v209;
    v210 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 5);
    v211 = *(_QWORD*)(v6 + 1360);
    v212 = *(_QWORD*)(v6 + 1368);
    v213 = v210;
    if (v211 == v212 << 6) {
      if ((__int64)(v211 + 1) < 0) {
        goto LABEL_212;
      }
      if (v211 > 0x3FFFFFFFFFFFFFFELL) {
        v216 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v214 = v212 << 7;
        v215 = (v211 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v214 <= v215) {
          v216 = v215;
        }
        else {
          v216 = v214;
        }
      }
      collision_6704c0(v6 + 1352, v216);
      v211 = *(_QWORD*)(v6 + 1360);
    }
    v217 = v211 >> 6;
    *(_QWORD*)(v6 + 1360) = v211 + 1;
    v218 = *(_QWORD*)(v6 + 1352);
    v219 = 1LL << v211;
    if ((v213 & 1) != 0) {
      v220 = *(_QWORD*)(v218 + 8 * v217) | v219;
    }
    else {
      v220 = *(_QWORD*)(v218 + 8 * v217) & ~v219;
    }
    *(_QWORD*)(v218 + 8 * v217) = v220;
    v221 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                               *(unsigned int*)(v6 + 1204), 6);
    v170 = *(_QWORD*)(v6 + 1360);
    v171 = *(_QWORD*)(v6 + 1368);
    v172 = v221;
    if (v170 != v171 << 6) {
      goto LABEL_204;
    }
    if ((__int64)(v170 + 1) >= 0) {
    LABEL_198:
      if (v170 > 0x3FFFFFFFFFFFFFFELL) {
        v224 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v222 = v171 << 7;
        v223 = (v170 & 0x3FFFFFFFFFFFFFC0LL) + 64;
        if (v222 <= v223) {
          v224 = v223;
        }
        else {
          v224 = v222;
        }
      }
      collision_6704c0(v6 + 1352, v224);
      v170 = *(_QWORD*)(v6 + 1360);
    LABEL_204:
      v225 = v170 >> 6;
      *(_QWORD*)(v6 + 1360) = v170 + 1;
      v226 = *(_QWORD*)(v6 + 1352);
      v227 = 1LL << v170;
      if ((v172 & 1) != 0) {
        v228 = *(_QWORD*)(v226 + 8 * v225) | v227;
      }
      else {
        v228 = *(_QWORD*)(v226 + 8 * v225) & ~v227;
      }
      *(_QWORD*)(v226 + 8 * v225) = v228;
      goto LABEL_208;
    }
  LABEL_212:
    GameRoutine_6706a0();
  }
  v17 = (_QWORD*)GameVariable_82e7c0(a2, 1);
  if (*v17 != 0 && game_GameModeData_instance_ != 0) {
    v18 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v17);
    if (v18 != 0 && *(_DWORD*)(v18 + 32) != 0 &&
        ((GameRoutine_185a200(a2, 2) & 1) == 0 ||
         *(_QWORD*)(v19 = GameVariable_82e7c0(a2, 2)) != 0 &&
             game_GameModeData_instance_ != 0 &&
             (v20 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v19)) != 0 &&
             *(_DWORD*)(v20 + 32) != 0)) {
      *(_BYTE*)(v6 + 1210) = 1;
    }
  }
  v21 = *(unsigned __int8*)(v6 + 1200);
  v235 = 0;
  v22 = (&GameData_1fa6240)[(unsigned __int8)a2];
  v23 = 1;
  *(_QWORD*)(v6 + 1224) = *(_QWORD*)(v6 + 1216);
  if (v21 == 7) {
    v24 = 13;
  }
  else {
    v24 = 12;
  }
  do {
    v25 = (const char*)game_util_Format("%s_%s_%d_%d", "Chapter", v22, 1, v23);
    v236 = game_util_Format("%s/%s", "000", v25);
    v237 = strlen(v236);
    GameRoutine_878ea0((void*)(&v238), &v236);
    if ((_BYTE)v238 != 0 && (v246[3] & 0x40) == 0) {
      v26 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v26 = *(_DWORD*)(game_GameModeData_instance_ + 8);
      }
      if (HIDWORD(v238) == v26) {
        v27 = (const char*)game_util_Format("%s_%s_%d_%d", "Chapter", v22, 1,
                                            v23);
        v236 = game_util_Format("%s/%s", "000", v27);
        v237 = strlen(v236);
        GameRoutine_878ea0((void*)(&v238), &v236);
        v28 = *(_QWORD*)(v6 + 1224);
        if (v28 >= *(_QWORD*)(v6 + 1232)) {
          v30 = ProcObeliskResumeMenu_1726360(v6 + 1216, &v238);
        }
        else {
          v29 = v239;
          v30 = v28 + 112;
          *(_QWORD*)v28 = v238;
          *(_QWORD*)(v28 + 8) = v29;
          v31 = v240;
          v32 = v241;
          v33 = v242;
          *(_BYTE*)(v28 + 40) = v243;
          *(_QWORD*)(v28 + 24) = v32;
          *(_QWORD*)(v28 + 32) = v33;
          *(_QWORD*)(v28 + 16) = v31;
          *(_QWORD*)(v28 + 42) = v244;
          *(_DWORD*)(v28 + 50) = v245;
          v34 = *(_QWORD*)&v246[16];
          v35 = *(_QWORD*)v246;
          *(_QWORD*)(v28 + 64) = *(_QWORD*)&v246[8];
          *(_QWORD*)(v28 + 72) = v34;
          *(_QWORD*)(v28 + 56) = v35;
          v36 = *(_QWORD*)&v246[24];
          v37 = *(_OWORD*)&v246[32];
          *(_BYTE*)(v28 + 104) = v246[48];
          *(_OWORD*)(v28 + 88) = v37;
          *(_QWORD*)(v28 + 80) = v36;
        }
        v38 = *(unsigned int*)&v246[28];
        v39 = v246[6];
        v40 = 3600LL * *(unsigned __int16*)&v246[4];
        v41 = v246[7];
        *(_QWORD*)(v6 + 1224) = v30;
        v42 = (v40 | (v38 << 32)) + 60LL * v39 + v41;
        if (v235 <= v42) {
          *(_DWORD*)(v6 + 1432) = v23;
          *(_QWORD*)(v6 + 1424) = v42;
          v235 = v42;
        }
        *(_DWORD*)(v6 + 1436) = v23;
      }
    }
    ++v23;
  } while (v23 - v24 != 1);
  v43 = 1;
  do {
    v45 = GameRoutine_185a4f0(*(unsigned __int8*)(v6 + 1200),
                              *(unsigned int*)(v6 + 1204), v43);
    v46 = *(_QWORD*)(v6 + 1360);
    v47 = *(_QWORD*)(v6 + 1368);
    v48 = v45;
    if (v46 == v47 << 6) {
      if ((__int64)(v46 + 1) < 0) {
        goto LABEL_212;
      }
      v49 = v47 << 7;
      if (v49 <= (v46 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
        v49 = (v46 & 0x3FFFFFFFFFFFFFC0LL) + 64;
      }
      if (v46 <= 0x3FFFFFFFFFFFFFFELL) {
        v50 = v49;
      }
      else {
        v50 = 0x7FFFFFFFFFFFFFFFLL;
      }
      collision_6704c0(v6 + 1352, v50);
      v46 = *(_QWORD*)(v6 + 1360);
    }
    v51 = v46 + 1;
    v52 = v46 >> 6;
    v53 = 1LL << v46;
    *(_QWORD*)(v6 + 1360) = v51;
    v54 = *(_QWORD*)(v6 + 1352);
    if ((v48 & 1) != 0) {
      v44 = *(_QWORD*)(v54 + 8 * v52) | v53;
    }
    else {
      v44 = *(_QWORD*)(v54 + 8 * v52) & ~v53;
    }
    ++v43;
    --v24;
    *(_QWORD*)(v54 + 8 * v52) = v44;
  } while (v24 != 0);
LABEL_208:
  *(_DWORD*)(v6 + 1072) =
      -1 - 1227133513 * ((*(_QWORD*)(v6 + 1224) - *(_QWORD*)(v6 + 1216)) >> 4);
  *(_QWORD*)(v6 + 1076) = 0;
  if (--GameData_21668e0 == 0) {
    (*(void (**)(void))((char*)((_UNKNOWN**)0x8LL) +
                        (_QWORD)game_anonymous_MountBind_vtable_ptr))();
    v229 = *(_QWORD**)GameData_212d6e8;
    v230 = GameRoutine_18d3a00(**(_QWORD**)GameData_212d6e8);
    v231 = (unsigned int*)(*v229 + 804LL);
    v232 = atomic_load(v231);
    if (v232 != 0) {
      do {
        v230 = nn_os_YieldThread(v230);
        v233 = atomic_load(v231);
      } while (v233 != 0);
    }
  }
  return ProcInst_657850(v6, GameData_212c730, "ProcObeliskResumeMenu", 1, a1);
}

__int64 game_facility_anonymous_196a790(__int64 result, __int64 a2)
{
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  int v11;
  int v12;
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
  int v25;
  int v26;

  if (a2 != 0) {
    v3 = result;
    v4 = *(_BYTE**)(a2 + 48);
    v5 = *msg_MessageManager_instance__ptr[0];
    if (v4 != nullptr && *v4 != 0) {
      v6 = *msg_MessageManager_instance__ptr[0];
      v13 = -1;
      v14 = -1;
      v15 = -1;
      v16 = -1;
      v17 = -1;
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v10[0] = GameData_212e348 + 2;
      v10[1] = 0xFFFF0001FFFF0000LL;
      v10[2] = 0xFFFF0004FFFF0002LL;
      v10[3] = 0xFFFF0006FFFF0005LL;
      v25 = 8;
      v26 = 0;
      v11 = -65529;
      v12 = -65528;
      v7 = GameRoutine_a4dbe0(v6, v4, 0, v10);
    }
    else {
      v7 = GameRoutine_67ed20(*(_QWORD*)(a2 + 40));
    }
    if (v7 != 0) {
      v8 = v7;
    }
    else {
      v8 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    result = GameRoutine_60a020(v5 + 14704, v8);
    if (*GameData_212d460[0] == 0) {
      v9 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v9, "MID_LGV_Divination_Come_Customer_m01", 0);
      return ProcInst_657850(v9, GameData_2130228, "talk::Seq", 1, v3);
    }
  }
  return result;
}

__int64 game_facility_anonymous_196a8f0(__int64 result, unsigned __int8 a2)
{
  __int64 v2;
  char* v3;
  int v4;
  __int64 v6;
  __int64 v7;
  _WORD v8[8];
  char* v9;

  v8[0] = 0;
  if (a2 <= 3u) {
    v2 = result;
    v3 = (char*)v8 + 1;
    result = GameRoutine_60a020(v8, GameData_211b3a8[a2]);
    v4 = v8[0] & 1;
    if ((v8[0] & 1) != 0) {
      v3 = v9;
    }
    if (*GameData_212d460[0] == 0 && v3 != nullptr) {
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v6, v3, 0);
      result = ProcInst_657850(v6, GameData_2130228, "talk::Seq", 1, v2);
      v4 = v8[0] & 1;
    }
    if (v4 != 0 && v9 != nullptr) {
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

__int64 game_facility_anonymous_197bd60(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  char v15;

  v2 = 176;
  if (a2 == 0) {
    v2 = 152;
  }
  v3 = 192;
  v4 = *(_BYTE*)(result + v2);
  if (a2 == 0) {
    v3 = 168;
  }
  v5 = 177;
  if (a2 == 0) {
    v5 = 153;
  }
  v6 = *(_QWORD*)(result + v3);
  v7 = result + v5;
  if ((v4 & 1) != 0) {
    v8 = v6;
  }
  else {
    v8 = v7;
  }
  if (GameData_21ec7b8 == 0 && v8 != 0) {
    v10 = result;
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         1376, 16, 0);
    GameRoutine_1130770(v11, v8, 0);
    v13 = *(_QWORD*)(v10 + 40);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 48) = v11;
      *(_QWORD*)(v11 + 56) = *(_QWORD*)(v10 + 40);
    }
    *(_QWORD*)(v10 + 40) = v11;
    *(_QWORD*)(v11 + 24) = "talk::Seq";
    *(_QWORD*)(v11 + 32) = v10;
    *(_DWORD*)(v11 + 140) = game_HashString32_alt1("talk::Seq", v12);
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 24;
    *(_QWORD*)(v11 + 80) = 1;
    *(_QWORD*)(v11 + 8) = &GameData_216de68;
    *(_QWORD*)(v11 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 136LL))(v11);
    if ((result & 1) != 0 && (*(_WORD*)(v11 + 136) & 0x100) == 0) {
      *(_WORD*)(v11 + 136) |= 0x100u;
    }
    v14 = *(_BYTE**)(v11 + 32);
    v15 = v14[138];
    if (v15 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*(_QWORD*)(v11 + 32));
      v15 = v14[138];
    }
    v14[138] = v15 + 1;
    *(_WORD*)(v11 + 136) |= 2u;
  }
  GameData_224ae48 = 260;
  return result;
}

unsigned __int64 game_facility_anonymous_197c920(__int64 a1, int a2)
{
  unsigned __int64 result;
  int v4;
  _BYTE* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  __int64 v12;
  char v13;
  _BYTE v14[7];
  _BYTE* v15;

  result = X8CALL_X0(unsigned __int64,
                     FacilityDialogueFile_196e9e0(
                         (void*)((__int64)&v13), *(_QWORD*)(a1 + 184) + 8LL,
                         *(_QWORD*)(*(_QWORD*)(a1 + 184) + 72LL), a2));
  v4 = v13 & 1;
  if ((v13 & 1) != 0) {
    v5 = v15;
  }
  else {
    v5 = v14;
  }
  if (GameData_21ec7b8 == 0 && v5 != nullptr) {
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v7, v5, 0);
    v9 = *(_QWORD*)(a1 + 40);
    if (v9 != 0) {
      *(_QWORD*)(v9 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "talk::Seq";
    *(_QWORD*)(v7 + 32) = a1;
    *(_DWORD*)(v7 + 140) = game_HashString32_alt1("talk::Seq", v8);
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_216de68;
    *(_QWORD*)(v7 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7);
    if ((result & 1) != 0 && (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      *(_WORD*)(v7 + 136) |= 0x100u;
    }
    v10 = *(_BYTE**)(v7 + 32);
    v11 = v10[138];
    if (v11 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*(_QWORD*)(v7 + 32));
      v11 = v10[138];
    }
    v10[138] = v11 + 1;
    *(_WORD*)(v7 + 136) |= 2u;
    v4 = v13 & 1;
  }
  GameData_224ae48 = 259;
  if (v4 != 0 && v15 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  return result;
}

#pragma GCC visibility pop
