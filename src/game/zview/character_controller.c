#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CharacterController_d0d7c0_alt1(_QWORD) __asm__(
    "CharacterController_d0d7c0");
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_d24980(__int64, __int64, float32x4_t*, float32x4_t*,
                           _DWORD*);
__int64 GameRoutine_d48b40(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_d744b0(_QWORD, _QWORD);
__int64 WaitRelease_cfa2a0(long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 StateActionBase_Unknown3(void);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
bool GameRoutine_d42740(_QWORD*, float32x4_t**, int*);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212ed70;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fd87b8[])();
extern __int64 (*GameData_1fd87d8[])();
extern __int64 (*GameData_1fda9e8[])();
extern __int64 (*GameData_1fdaa38[])();
extern __int64 (*GameData_1fdaa88[])();
extern __int64 (*GameData_1fdabf8[])();
extern __int64 (*game_zview_CharacterController_StateGuard_DamageN_vtable[])();
extern __int64 (*game_zview_CharacterController_StateGuard_Loop_vtable[])();
extern __int64 (*game_zview_CharacterController_StateGuard_Start_vtable[])();
extern __int64 (*game_zview_CharacterController_vtable[])();
extern __int64 GameData_212eca0;
extern __int64 GameData_220b6f0;
extern __int64 GameData_22110ac;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212db48[3];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ec58[2];
extern __int64* GameData_212ed28[9];
extern __int64* GameData_212ed30[8];
extern __int64* GameData_212ed38[7];
extern __int64* GameData_212ed40[6];
extern __int64* GameData_212ed50[4];
extern __int64* GameData_212ed58[3];
extern __int64* GameData_212ed60[2];
extern __int64* GameData_212ed68;
extern __int64* GameData_212eea8[2];
extern __int64* GameData_212f0e8;
float GameRoutine_d1cbc0(_QWORD, _QWORD);
float atan2f(_QWORD, float, float);
float atan2f_alt1(_QWORD, long double, float) __asm__("atan2f");
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_cdcc10(void);
void __attribute__((noreturn)) GameRoutine_cfa280(void);
__int64 CharacterController_StateWarpTo_Unknown2(__int64 result);
__int64 game_zview_CharacterController_CharacterController(__int64 a1,
                                                           __int64 a2);
__int64 CharacterController_d0d7c0(__int64 result);
_QWORD* CharacterController_Destructor(__int64 a1);
float game_zview_CharacterController_CharacterController_lambda0_Invoke(
    __int64 a1);
__int64 CharacterController_d40860(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4);
__int64 CharacterController_d42d20(__int64 result, char* a2, char* a3,
                                   unsigned __int64 a4);
__int64 CharacterController_StateStay_ToStayPos_Unknown4(__int64 result,
                                                         long double a2);
void CharacterController_d449c0(__int64 a1);
__int64 CharacterController_d468c0(__int64 result);
__int64 CharacterController_StateGuard_Unknown3(__int64 a1);
float CharacterController_StateGuard_Start_Unknown4_alt1(__int64 a1) __asm__(
    "CharacterController_StateGuard_Start_Unknown4");
_QWORD* GameRoutine_d47980(__int64*, _QWORD*);
_QWORD* GameRoutine_d4e4e0(__int64*, _QWORD*);
_QWORD* GameRoutine_d78b40(__int64*, _QWORD*);
_QWORD* StateAttack_d45080(_QWORD* result);
_QWORD* StateMoveTo_d42860(_QWORD* result, __int64*);
_QWORD* game_zview_CharacterAnim_CommitReduceFlag(_QWORD* result);
_QWORD* game_zview_d56e60(_QWORD* result, char, unsigned __int8*);
__attribute__((swiftcall)) void
game_zview_d163f0(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__attribute__((swiftcall)) void game_zview_d1fdc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_zview_d56a60(PSEUDO_X8, __int64, __int64,
                                                  float);
__attribute__((swiftcall)) void game_zview_d56ce0(PSEUDO_X8, __int64, __int64,
                                                  float);
__int64* GameRoutine_d74b60(__int64* result, float*, float);
__int64* GameRoutine_d78de0();
__int64 CharacterController_d3f410_alt1(
    __int64 result, int, long double) __asm__("CharacterController_d3f410");
__int64
CharacterController_d48660_alt2(__int64, unsigned __int32,
                                int*) __asm__("CharacterController_d48660");
__int64 CharacterModel_cf4c10(__int64);
__int64 CharacterModel_d198c0(float32x2_t*, float32x2_t*, char, char);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_d12f00(_QWORD);
__int64 GameRoutine_d13aa0(_QWORD*, __int64);
__int64 GameRoutine_d1cf60(__int64, int);
__int64 GameRoutine_d2cec0(_QWORD);
__int64 GameRoutine_d33890(__int64, int*, char, float);
__int64 GameRoutine_d49ac0(__int64);
__int64 GameRoutine_d49fe0(__int64 result, __int64, unsigned __int64, __int64);
__int64 GameRoutine_d4e630(__int64, __int64);
__int64 GameRoutine_daa180(__int64, int*);
__int64 HubCharacterNatives_cf66e0(__int64);
__int64 HubCharacterNatives_cf7b40(__int64 result, char);
__int64 StateActionBase_Unknown3_alt1(__int64 result) __asm__(
    "StateActionBase_Unknown3");
__int64 StateActionRoot_d3e100(__int64 result, char);
__int64 WaitRelease_cfa2a0_alt1(__int64 result) __asm__("WaitRelease_cfa2a0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_edea70(__int64, float, float);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 game_zview_d576f0(__int64, __int64, __int64, char, __int64);
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 wmemchr(void);
__n128 nn_os_LockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt2(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
double GameRoutine_d1cbc0_alt1(__int64, int,
                               long double) __asm__("GameRoutine_d1cbc0");
double GameRoutine_d1cbc0_alt2(__int64, int) __asm__("GameRoutine_d1cbc0");
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_22110c8;
extern __int64 (*GameData_1fdae80[])();
extern __int64 (*GameData_1fdc410[9])();
extern __int64* GameData_212ebd0[3];
extern __int64* GameData_212ec78;
extern __int64* GameData_212ed10[12];
extern __int64* GameData_212ed18[11];
extern __int64* GameData_212ee20[6];
extern __int64* GameData_212ee30[4];
extern __int64* GameData_212ee78[2];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21a60e0;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_22110c0;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_script_hub_g_frame_counter;
float CharacterRotate_d52080(__int64);
float GameRoutine_d40750(__int64, __int64, __int64, __int64);
float GameRoutine_d48540(__int64);
float atan2f_alt2(long double, float) __asm__("atan2f");
float fmodf(float, float);
unsigned __int64 GameRoutine_d12690(__int64);
void CharacterController_d449c0_alt1(__int64, long double) __asm__(
    "CharacterController_d449c0");
void CharacterRotate_d519c0(int8x16_t*);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) GameRoutine_d42f10();
void __attribute__((noreturn)) GameRoutine_d46830();
void CharacterController_StateWarpTo_Unknown3(__int64 a1);
void CharacterController_StateWarpTo_Unknown5(__int64 a1);
void CharacterController_StateWarpTo_Unknown4(int32x2_t* a1);
void CharacterController_d14ce0(float* a1);
void CharacterController_StateActionRoot_Unknown4(__int64 a1);
_QWORD* CharacterController_StateJump_Unknown3(__int64 a1, long double a2);
__int64* CharacterController_d3f410_alt2(
    __int64* result, int a2,
    long double a3) __asm__("CharacterController_d3f410");
__int64 CharacterController_StateJump_Unknown5_alt1(__int64 a1) __asm__(
    "CharacterController_StateJump_Unknown5");
__int64 CharacterController_StateJump_Unknown4(__int64 result, long double a2);
bool CharacterController_d41fa0(__int64 a1, _BYTE* a2);
bool CharacterController_d42740(_QWORD* a1, float32x4_t** a2, int* a3);
unsigned __int64
CharacterController_StateStay_Main_Unknown4(unsigned __int64 result);
void CharacterController_StateAttack_Unknown4(__int64 a1);
__int64 CharacterController_d45840_alt1(__int64 a1, float32x2_t* a2) __asm__(
    "CharacterController_d45840");
_QWORD* CharacterController_d48b40(_QWORD* a1, __int64 a2, long double a3,
                                   float a4, float a5);
__int64 CharacterController_StateDamage_Unknown3_alt1(__int64 a1) __asm__(
    "CharacterController_StateDamage_Unknown3");
void CharacterController_StateGuard_Unknown4(__int64 a1);
void CharacterController_StateGuard_DamageN_Unknown4(__int64 a1);
__int64 CharacterController_StateGuard_Loop_Unknown4(__int64 result);
void CharacterController_StateRepelled_Unknown3(__int64 a1);
void CharacterController_StateRepelled_Unknown4(__int64 a1);
_QWORD* GameRoutine_7a8220(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_220f8e0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a61a0;
extern __int64* GameData_212c998[148];
unsigned __int64 Manager_6326c0(__int64*, __int64);
void CharacterController_d14340(__int64* a1, __int64 a2);
void* CharacterController_d43a60(int a1, __int64 a2);
__attribute__((swiftcall)) void CharacterController_d47af0_alt1(
    PSEUDO_X8 x8_, __int64 result,
    __int64 a2) __asm__("CharacterController_d47af0");
__int64 GameRoutine_d2cec0_alt1(int) __asm__("GameRoutine_d2cec0");
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float GameRoutine_d12f00_alt1(__int64) __asm__("GameRoutine_d12f00");
float atan2f_alt3(float, float) __asm__("atan2f");
void CharacterController_StateJump_Unknown5(__int64 a1);
__int64 CharacterModel_d198c0_alt1(_QWORD*, float32x2_t*, char,
                                   char) __asm__("CharacterModel_d198c0");
double GameHr_d1cbc0(__int64, int, long double);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 Manager_6326c0_alt1(__int64*,
                                     const char*) __asm__("Manager_6326c0");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_zview_CharacterAnim_CommitReduceFlag_alt1(__int64) __asm__(
    "game_zview_CharacterAnim_CommitReduceFlag");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterController_d3f410(__int64 a1, int a2, long double a3);
__attribute__((swiftcall)) void CharacterController_d47af0(PSEUDO_X8 x8_,
                                                           int a1, __int64 a2);
__int64
CharacterController_d48b40_alt1(_QWORD*, __int64, float, float,
                                float) __asm__("CharacterController_d48b40");
__int64 GameHr_d13aa0(_QWORD*, __int64);
__int64 GameHr_d1cf60(__int64, int);
__int64 GameHr_d4e630(__int64, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 wmemchr_alt1(__int64, unsigned int,
                     unsigned __int64) __asm__("wmemchr");
double GameHr_d1cbc0_alt1(__int64, int) __asm__("GameHr_d1cbc0");
void CharacterController_d48660_alt1(__int64, unsigned __int32, int*) __asm__(
    "CharacterController_d48660");
void GameHr_d49fe0(__int64, __int64, unsigned __int64, __int64);
void StateMoveTo_d42860_alt1(__int64*, __int64*) __asm__("StateMoveTo_d42860");
void __attribute__((noreturn))
GameRoutine_cfa280_alt1() __asm__("GameRoutine_cfa280");
void game_zview_d56e60_alt1(__int64, char,
                            unsigned __int8*) __asm__("game_zview_d56e60");
void CharacterController_d45840(__int64 a1, float32x2_t* a2);
void CharacterController_StateDamage_Unknown3(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_d2caa0(PSEUDO_X8, __int64 result);
__int64 game_zview_d198c0(float32x2_t*, float32x2_t*, char, char);
bool GameRoutine_d2d4e0();
extern __int64 (*eft_ClampCurve_ptr)();
unsigned __int64 GameRoutine_d2b5f0(__int64);
void CharacterController_d48660(__int64 a1, unsigned __int32 a2, int* a3);
float CharacterController_StateGuard_Start_Unknown4(__int64 a1, long double a2);

void CharacterController_StateWarpTo_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int128 v9;
  int v10;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_DWORD*)(a1 + 56);
  v3 = *(_DWORD*)(*(_QWORD*)(v1 + 8) + 384LL);
  *(_DWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 16) = (v3 & 0x40000000) != 0;
  v4 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8LL);
  v5 = *(_QWORD*)(v4 + 328);
  *(_DWORD*)(v5 + 152) = v2;
  *(_DWORD*)(v5 + 156) = v2;
  v6 = *(_QWORD*)(v4 + 328);
  v7 = game_ProcFadeView_instance_;
  *(_DWORD*)(v6 + 144) = 0;
  if (v7 != 0) {
    v8 = v7 + ((unsigned __int64)*(unsigned __int8*)(v7 + 480) << 6);
    if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
    }
    else {
      v9 = *(_OWORD*)(v8 + 208);
    }
    if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                        v8 + 160, *((float*)&v9 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      v10 = *(_DWORD*)(v6 + 144);
      *(_DWORD*)(v6 + 160) = 0;
      *(_DWORD*)(v6 + 148) = v10;
    }
  }
  *(_BYTE*)(v6 + 164) = 1;
}

void CharacterController_StateWarpTo_Unknown5(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int128 v9;
  int v10;

  if (*(_BYTE*)(a1 + 16) == 1 && *(_BYTE*)(a1 + 17) != 0) {
    *(_BYTE*)(a1 + 17) = 0;
    v1 = GameData_21d96b8;
    v2 = *(_DWORD*)(GameData_21d96b8 + 40) - 1;
    *(_DWORD*)(GameData_21d96b8 + 40) = v2;
    if (v2 == 0) {
      v3 = a1;
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 32) + 8LL))(v1 + 32);
      a1 = v3;
    }
  }
  if (*(_DWORD*)(a1 + 64) != 2) {
    v4 = *(_DWORD*)(a1 + 56);
    *(_DWORD*)(a1 + 64) = 2;
    v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
    v6 = *(_QWORD*)(v5 + 328);
    *(_DWORD*)(v6 + 152) = v4;
    *(_DWORD*)(v6 + 156) = v4;
    v7 = *(_QWORD*)(v5 + 328);
    *(_DWORD*)(v7 + 144) = 1065353216;
    if (game_ProcFadeView_instance_ != 0) {
      v8 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
      }
      else {
        v9 = *(_OWORD*)(v8 + 208);
      }
      if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f &&
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                          v8 + 160, *((float*)&v9 + 3)))
                  .n128_f32[3] == 0x1.0000000000000p+0f) {
        v10 = *(_DWORD*)(v7 + 144);
        *(_DWORD*)(v7 + 160) = 0;
        *(_DWORD*)(v7 + 148) = v10;
      }
    }
    *(_BYTE*)(v7 + 164) = 1;
  }
}

void CharacterController_StateWarpTo_Unknown4(int32x2_t* a1)
{

#pragma clang fp contract(off)
  unsigned __int32 v1;
  __int64 v3;
  _QWORD* v4;
  unsigned __int32 v5;
  __int64 v6;
  int8x16_t* v7;
  int v8;
  unsigned __int32 v9;
  int v10;
  unsigned __int32 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int128 v16;
  int v17;
  unsigned __int64 v18;
  int v19;

  v1 = LANES64(a1[8]).n64_u32[0];
  if (v1 == 1) {
    if (*(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(LANES64(a1[1]).n64_u64[0] +
                                                   8) +
                                        8LL) +
                             328LL) +
                  148LL) != 0x1.0000000000000p+0f) {
      return;
    }
    goto LABEL_16;
  }
  if (v1 != 0) {
    goto LABEL_27;
  }
  v3 = LANES64(a1[1]).n64_i64[0];
  if (*(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8LL) + 328LL) +
                148LL) != 0x0.0p+0f) {
    return;
  }
  game_zview_d12d30(v3, a1 + 4, 1);
  if (LANES64(a1[6]).n64_u8[4] == 1) {
    v4 = (_QWORD*)LANES64(a1[1]).n64_u64[0];
    v5 = LANES64(a1[6]).n64_u32[0];
    if (v4[107] != 0) {
      v6 = v4[108];
      v4[107] = 0;
      v4[108] = 0;
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt3(v6);
      }
    }
    v7 = (int8x16_t*)v4[61];
    v8 = LANES128(v7[11]).n128_u8[4];
    LANES128(v7[2]).n128_u32[0] = v5;
    LANES128(v7[2]).n128_u32[1] = v5;
    if (v8 == 1) {
      LANES128(v7[11]).n128_u8[4] = 0;
    }
    CharacterRotate_d519c0(v7);
  }
  v9 = LANES64(a1[8]).n64_u32[0];
  if (LANES64(a1[7]).n64_u8[4] == 1) {
    if (v9 == 1) {
      return;
    }
    v10 = 1;
    goto LABEL_17;
  }
  if (v9 != 2) {
  LABEL_16:
    v10 = 2;
  LABEL_17:
    LANES64(a1[8]).n64_u32[0] = v10;
    v11 = LANES64(a1[7]).n64_u32[0];
    v12 = *(_QWORD*)(*(_QWORD*)(LANES64(a1[1]).n64_u64[0] + 8) + 8LL);
    v13 = *(_QWORD*)(v12 + 328);
    *(_DWORD*)(v13 + 152) = v11;
    *(_DWORD*)(v13 + 156) = v11;
    v14 = *(_QWORD*)(v12 + 328);
    *(_DWORD*)(v14 + 144) = 1065353216;
    if (game_ProcFadeView_instance_ != 0) {
      v15 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v15 + 172) == *(float*)(v15 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v15 + 160) + 16LL))(v15 +
                                                                       160);
      }
      else {
        v16 = *(_OWORD*)(v15 + 208);
      }
      if (*((float*)&v16 + 3) == 0x1.0000000000000p+0f &&
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v15 + 160) + 16LL))(
                          v15 + 160, *((float*)&v16 + 3)))
                  .n128_f32[3] == 0x1.0000000000000p+0f) {
        v17 = *(_DWORD*)(v14 + 144);
        *(_DWORD*)(v14 + 160) = 0;
        *(_DWORD*)(v14 + 148) = v17;
      }
    }
    *(_BYTE*)(v14 + 164) = 1;
    v1 = LANES64(a1[8]).n64_u32[0];
  LABEL_27:
    if (v1 != 2) {
      return;
    }
  }
  v18 = LANES64(a1[1]).n64_u64[0];
  if (*(_QWORD*)(*(_QWORD*)(v18 + 8) + 32LL) != 0) {
    v19 = 5;
  }
  else {
    v19 = 0;
  }
  if ((*(_BYTE*)(v18 + 848) & 1) == 0) {
    if (*(_BYTE*)(v18 + 28) != 1 || *(_DWORD*)(v18 + 24) != v19) {
      *(_DWORD*)(v18 + 32) = v19;
      *(_BYTE*)(v18 + 36) = 1;
    }
    if ((*(_BYTE*)(v18 + 112) & 1) == 0 && (*(_BYTE*)(v18 + 113) & 1) != 0) {
      WaitRelease_cfa2a0_alt1(v18 + 16);
    }
  }
}

__int64 CharacterController_StateWarpTo_Unknown2(__int64 result)
{
  *(_WORD*)(result + 16) = 0;
  *(_DWORD*)(result + 64) = 0;
  return result;
}

__int64 game_zview_CharacterController_CharacterController(__int64 a1,
                                                           __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64* v23;
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
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  unsigned __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  unsigned __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64* v107;
  unsigned __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64* v122;
  unsigned __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64* v137;
  unsigned __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  _QWORD v151[4];
  _QWORD* v152;
  _QWORD v153[4];
  _QWORD* v154;

  *(_BYTE*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 28) = 0;
  v4 = GameData_212ec58[0];
  *(_BYTE*)(a1 + 32) = 0;
  v5 = GameData_212eca0;
  *(_QWORD*)a1 = game_zview_CharacterController_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 36) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_WORD*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v6 = (__int64*)(a1 + 40);
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 16) = v4 + 2;
  *(_BYTE*)(a1 + 196) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 228) = 0;
  *(_BYTE*)(a1 + 232) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_BYTE*)(a1 + 260) = 0;
  *(_BYTE*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 268) = 0;
  *(_WORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 244) = 0;
  *(_DWORD*)(a1 + 276) = 0;
  *(_BYTE*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 136) = v5 + 16;
  *(_BYTE*)(a1 + 197) = 1;
  *(_DWORD*)(a1 + 236) = -1027080192;
  *(_QWORD*)(a1 + 220) = 1065353216;
  *(_WORD*)(a1 + 280) = 256;
  *(_WORD*)(a1 + 288) = 256;
  *(_QWORD*)(a1 + 292) = 0;
  v7 = (char*)GameData_212ed70 + 16;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_DWORD*)(a1 + 384) = 1065353216;
  *(_BYTE*)(a1 + 428) = 0;
  *(_BYTE*)(a1 + 432) = 0;
  *(_BYTE*)(a1 + 436) = 0;
  *(_BYTE*)(a1 + 440) = 0;
  *(_BYTE*)(a1 + 444) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_BYTE*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_DWORD*)(a1 + 540) = 0;
  *(_DWORD*)(a1 + 544) = 1065353216;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 352) = v7;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 388) = 0;
  *(_QWORD*)(a1 + 396) = 0;
  *(_QWORD*)(a1 + 404) = 0;
  *(_QWORD*)(a1 + 412) = 0;
  *(_QWORD*)(a1 + 417) = 0;
  *(_QWORD*)(a1 + 524) = 0;
  *(_QWORD*)(a1 + 532) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release(&GameData_22110b8);
  }
  v8 = GameData_22110ac;
  *(_DWORD*)(a1 + 600) = 0;
  *(_BYTE*)(a1 + 604) = 0;
  *(_QWORD*)(a1 + 592) = 0x417B53D240800000LL;
  *(_QWORD*)(a1 + 584) = v8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release(&GameData_22110b8);
  }
  v9 = GameData_22110ac;
  *(_DWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 620) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 640) = 0;
  *(_BYTE*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_BYTE*)(a1 + 716) = 0;
  *(_BYTE*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 668) = 0;
  *(_QWORD*)(a1 + 676) = 0;
  *(_BYTE*)(a1 + 724) = 0;
  *(_BYTE*)(a1 + 736) = 0;
  *(_BYTE*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_BYTE*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_BYTE*)(a1 + 936) = 0;
  *(_BYTE*)(a1 + 937) = 1;
  *(_QWORD*)(a1 + 608) = v9;
  *(_OWORD*)(a1 + 800) = 0u;
  CharacterController_d0d7c0_alt1(a1);
  *(_QWORD*)(a1 + 8) = a2;
  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       432, 16, 0);
  v12 = GameData_212eea8[0];
  v13 = *(_QWORD*)(a1 + 496);
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_BYTE*)(v11 + 80) = 0;
  *(_BYTE*)(v11 + 96) = 0;
  *(_DWORD*)(v11 + 112) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_DWORD*)(v11 + 128) = 0;
  *(_BYTE*)(v11 + 132) = 0;
  *(_QWORD*)v11 = GameData_1fda9e8;
  *(_BYTE*)(v11 + 136) = 0;
  *(_WORD*)(v11 + 140) = 0;
  *(_QWORD*)(v11 + 144) = 0;
  *(_QWORD*)(v11 + 152) = 0;
  *(_DWORD*)(v11 + 160) = 0x2000;
  *(_BYTE*)(v11 + 208) = 0;
  *(_BYTE*)(v11 + 212) = 0;
  *(_BYTE*)(v11 + 252) = 0;
  *(_BYTE*)(v11 + 256) = 0;
  *(_BYTE*)(v11 + 260) = 0;
  *(_BYTE*)(v11 + 264) = 0;
  *(_BYTE*)(v11 + 268) = 0;
  *(_BYTE*)(v11 + 272) = 0;
  *(_BYTE*)(v11 + 352) = 0;
  *(_BYTE*)(v11 + 368) = 0;
  *(_BYTE*)(v11 + 372) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_BYTE*)(v11 + 248) = 0;
  *(_QWORD*)(v11 + 376) = 0;
  *(_QWORD*)(v11 + 384) = 0;
  *(_QWORD*)(v11 + 392) = 0;
  *(_QWORD*)(v11 + 400) = 0;
  *(_QWORD*)(v11 + 408) = 0;
  *(_DWORD*)(v11 + 416) = 0;
  *(_QWORD*)(v11 + 40) = a1;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(a1 + 496) = v11;
  *(_QWORD*)(v11 + 32) = v12 + 2;
  *(_QWORD*)(a1 + 488) = v11 + 32;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = fw_memory_HeapManager_Allocate(*v10, 160, 16, 0);
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)v14 = GameData_1fdaa38;
  v15 = GameData_212f0e8;
  v16 = *(_QWORD*)(a1 + 512);
  *(_QWORD*)(v14 + 64) = 0;
  *(_BYTE*)(v14 + 72) = 0;
  *(_BYTE*)(v14 + 80) = 0;
  *(_BYTE*)(v14 + 88) = 0;
  *(_BYTE*)(v14 + 96) = 0;
  *(_BYTE*)(v14 + 112) = 0;
  *(_BYTE*)(v14 + 116) = 0;
  *(_BYTE*)(v14 + 120) = 0;
  *(_BYTE*)(v14 + 124) = 0;
  *(_BYTE*)(v14 + 136) = 0;
  *(_BYTE*)(v14 + 140) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_DWORD*)(v14 + 152) = 0x2000;
  *(_QWORD*)(v14 + 32) = a1;
  *(_QWORD*)(a1 + 512) = v14;
  *(_QWORD*)(v14 + 24) = v15 + 2;
  *(_QWORD*)(a1 + 504) = v14 + 24;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v151[0] = GameData_1fdaa88;
  v151[1] = a1;
  v152 = v151;
  v154 = v153;
  v153[0] = GameData_1fdaa88;
  v153[1] = a1;
  GameRoutine_654050(v153, a1 + 64);
  if (v154 == v153) {
    v17 = 32;
  }
  else {
    if (v154 == nullptr) {
      goto LABEL_14;
    }
    v17 = 40;
  }
  (*(void (**)(void*))(*v154 + v17))(v154);
LABEL_14:
  if (v152 == v151) {
    v18 = 32;
  }
  else {
    if (v152 == nullptr) {
      goto LABEL_19;
    }
    v18 = 40;
  }
  (*(void (**)(void*))(*v152 + v18))(v152);
LABEL_19:
  result = fw_memory_HeapManager_Allocate(*v10, 48, 16, 0);
  *(_WORD*)(result + 16) = 0;
  v20 = GameData_212ed28[0];
  *(_QWORD*)(result + 24) = 0;
  *(_BYTE*)(result + 32) = 0;
  *(_BYTE*)(result + 40) = 0;
  *(_QWORD*)result = v20 + 2;
  *(_QWORD*)(result + 8) = a1;
  v22 = *(__int64**)(a1 + 48);
  v21 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v22 >= v21) {
    v24 = *v6;
    v25 = (__int64)v22 - *v6;
    v26 = (v25 >> 3) + 1;
    if (v26 >> 61 != 0) {
      goto LABEL_164;
    }
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
    if (v28 != 0) {
      if (v28 >> 61 != 0) {
        goto LABEL_165;
      }
      v29 = result;
      v30 = fw_memory_HeapManager_Allocate(*v10, 8 * v28, 16, 0);
      result = v29;
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v28;
    v32 = v30 + v25 - 8 * (v25 >> 3);
    *(_QWORD*)(v30 + v25) = result;
    v23 = (__int64*)(v30 + v25 + 8);
    memcpy(v32, v24, v25);
    *(_QWORD*)(a1 + 40) = v32;
    *(_QWORD*)(a1 + 48) = v23;
    *(_QWORD*)(a1 + 56) = v31;
    if (v24 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v33, v24);
    }
  }
  else {
    *v22 = result;
    v23 = v22 + 1;
  }
  v34 = *v10;
  *(_QWORD*)(a1 + 48) = v23;
  result = fw_memory_HeapManager_Allocate(v34, 288, 16, 0);
  *(_QWORD*)(result + 20) = 0x3F8000003F800000LL;
  *(_DWORD*)(result + 28) = 1065353216;
  v35 = GameData_212ed30[0];
  *(_WORD*)(result + 16) = 0;
  *(_BYTE*)(result + 32) = 0;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  *(_QWORD*)(result + 240) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_DWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_QWORD*)(result + 128) = 0;
  *(_QWORD*)(result + 136) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)(result + 213) = 0;
  *(_QWORD*)(result + 256) = 0;
  *(_QWORD*)(result + 264) = 0;
  *(_DWORD*)(result + 272) = 0;
  *(_QWORD*)result = v35 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_BYTE*)(result + 248) = 1;
  v36 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v23 >= v36) {
    v38 = *v6;
    v39 = (__int64)v23 - *v6;
    v40 = (v39 >> 3) + 1;
    if (v40 >> 61 != 0) {
      goto LABEL_164;
    }
    v41 = v36 - v38;
    if (v41 >> 2 > v40) {
      v40 = v41 >> 2;
    }
    if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
      v42 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v42 = v40;
    }
    if (v42 != 0) {
      if (v42 >> 61 != 0) {
        goto LABEL_165;
      }
      v43 = result;
      v44 = fw_memory_HeapManager_Allocate(*v10, 8 * v42, 16, 0);
      result = v43;
    }
    else {
      v44 = 0;
    }
    v45 = v44 + 8 * v42;
    v46 = v44 + v39 - 8 * (v39 >> 3);
    *(_QWORD*)(v44 + v39) = result;
    v37 = (__int64*)(v44 + v39 + 8);
    memcpy(v46, v38, v39);
    *(_QWORD*)(a1 + 40) = v46;
    *(_QWORD*)(a1 + 48) = v37;
    *(_QWORD*)(a1 + 56) = v45;
    if (v38 != 0) {
      v47 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v47, v38);
    }
  }
  else {
    *v23 = result;
    v37 = v23 + 1;
  }
  v48 = *v10;
  *(_QWORD*)(a1 + 48) = v37;
  result = fw_memory_HeapManager_Allocate(v48, 80, 16, 0);
  *(_WORD*)(result + 16) = 0;
  v49 = GameData_212db48[0];
  *(_BYTE*)(result + 52) = 0;
  *(_DWORD*)(result + 56) = 0;
  *(_BYTE*)(result + 60) = 0;
  *(_DWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)result = v49 + 2;
  *(_QWORD*)(result + 8) = a1;
  v50 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v37 >= v50) {
    v52 = *v6;
    v53 = (__int64)v37 - *v6;
    v54 = (v53 >> 3) + 1;
    if (v54 >> 61 != 0) {
      goto LABEL_164;
    }
    v55 = v50 - v52;
    if (v55 >> 2 > v54) {
      v54 = v55 >> 2;
    }
    if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF8LL) {
      v56 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v56 = v54;
    }
    if (v56 != 0) {
      if (v56 >> 61 != 0) {
        goto LABEL_165;
      }
      v57 = result;
      v58 = fw_memory_HeapManager_Allocate(*v10, 8 * v56, 16, 0);
      result = v57;
    }
    else {
      v58 = 0;
    }
    v59 = v58 + 8 * v56;
    v60 = v58 + v53 - 8 * (v53 >> 3);
    *(_QWORD*)(v58 + v53) = result;
    v51 = v58 + v53 + 8;
    memcpy(v60, v52, v53);
    *(_QWORD*)(a1 + 40) = v60;
    *(_QWORD*)(a1 + 48) = v51;
    *(_QWORD*)(a1 + 56) = v59;
    if (v52 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v61, v52);
    }
  }
  else {
    *v37 = result;
    v51 = (__int64)(v37 + 1);
  }
  v62 = *v10;
  *(_QWORD*)(a1 + 48) = v51;
  result = fw_memory_HeapManager_Allocate(v62, 216, 16, 0);
  v63 = GameData_212ed38[0];
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 44) = 0;
  *(_QWORD*)(result + 52) = 0;
  *(_QWORD*)(result + 28) = 0;
  *(_QWORD*)(result + 20) = 0x4020000040200000LL;
  *(_QWORD*)(result + 84) = 0;
  *(_QWORD*)(result + 92) = 0;
  *(_QWORD*)(result + 60) = 0x4020000040200000LL;
  *(_QWORD*)(result + 68) = 0;
  *(_QWORD*)(result + 132) = 0;
  *(_QWORD*)(result + 124) = 0;
  *(_QWORD*)(result + 100) = 0x4020000040200000LL;
  *(_QWORD*)(result + 108) = 0;
  *(_BYTE*)(result + 140) = 0;
  *(_DWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 181) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)result = v63 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_QWORD*)(result + 36) = 0x40A0000040A00000LL;
  *(_QWORD*)(result + 76) = 0x40A0000040A00000LL;
  *(_QWORD*)(result + 116) = 0x40A0000040A00000LL;
  v65 = *(__int64**)(a1 + 48);
  v64 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v65 >= v64) {
    v67 = *v6;
    v68 = (__int64)v65 - *v6;
    v69 = (v68 >> 3) + 1;
    if (v69 >> 61 != 0) {
      goto LABEL_164;
    }
    v70 = v64 - v67;
    if (v70 >> 2 > v69) {
      v69 = v70 >> 2;
    }
    if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
      v71 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v71 = v69;
    }
    if (v71 != 0) {
      if (v71 >> 61 != 0) {
        goto LABEL_165;
      }
      v72 = result;
      v73 = fw_memory_HeapManager_Allocate(*v10, 8 * v71, 16, 0);
      result = v72;
    }
    else {
      v73 = 0;
    }
    v74 = v73 + 8 * v71;
    v75 = v73 + v68 - 8 * (v68 >> 3);
    *(_QWORD*)(v73 + v68) = result;
    v66 = v73 + v68 + 8;
    memcpy(v75, v67, v68);
    *(_QWORD*)(a1 + 40) = v75;
    *(_QWORD*)(a1 + 48) = v66;
    *(_QWORD*)(a1 + 56) = v74;
    if (v67 != 0) {
      v76 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v76 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v76, v67);
    }
  }
  else {
    *v65 = result;
    v66 = (__int64)(v65 + 1);
  }
  v77 = *v10;
  *(_QWORD*)(a1 + 48) = v66;
  result = fw_memory_HeapManager_Allocate(v77, 416, 16, 0);
  *(_WORD*)(result + 16) = 0;
  v78 = GameData_212ed40[0];
  *(_QWORD*)(result + 352) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_BYTE*)(result + 96) = 0;
  *(_BYTE*)(result + 112) = 0;
  *(_WORD*)(result + 128) = 0;
  *(_WORD*)(result + 184) = 0;
  *(_DWORD*)(result + 208) = 0;
  *(_BYTE*)(result + 212) = 0;
  *(_QWORD*)(result + 216) = 0;
  *(_WORD*)(result + 160) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_BYTE*)(result + 348) = 0;
  *(_WORD*)(result + 368) = 0;
  *(_QWORD*)(result + 372) = 0;
  *(_QWORD*)(result + 384) = 0;
  *(_QWORD*)(result + 392) = 0;
  *(_QWORD*)(result + 400) = 0;
  *(_QWORD*)(result + 408) = 0;
  *(_QWORD*)(result + 236) = 0;
  *(_QWORD*)(result + 244) = 0;
  *(_QWORD*)(result + 252) = 0;
  *(_QWORD*)result = v78 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_DWORD*)(result + 224) = 1065353216;
  *(_QWORD*)(result + 357) = 0;
  *(_QWORD*)(result + 228) = 0;
  *(_QWORD*)(result + 260) = 0;
  *(_QWORD*)(result + 268) = 0;
  *(_QWORD*)(result + 276) = 0;
  *(_QWORD*)(result + 284) = 0;
  *(_QWORD*)(result + 292) = 0;
  *(_QWORD*)(result + 300) = 0;
  *(_QWORD*)(result + 308) = 0;
  *(_QWORD*)(result + 316) = 0;
  *(_QWORD*)(result + 324) = 0;
  *(_QWORD*)(result + 332) = 0;
  *(_QWORD*)(result + 337) = 0;
  v80 = *(__int64**)(a1 + 48);
  v79 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v80 >= v79) {
    v82 = *v6;
    v83 = (__int64)v80 - *v6;
    v84 = (v83 >> 3) + 1;
    if (v84 >> 61 != 0) {
      goto LABEL_164;
    }
    v85 = v79 - v82;
    if (v85 >> 2 > v84) {
      v84 = v85 >> 2;
    }
    if ((unsigned __int64)v85 >= 0x7FFFFFFFFFFFFFF8LL) {
      v86 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v86 = v84;
    }
    if (v86 != 0) {
      if (v86 >> 61 != 0) {
        goto LABEL_165;
      }
      v87 = result;
      v88 = fw_memory_HeapManager_Allocate(*v10, 8 * v86, 16, 0);
      result = v87;
    }
    else {
      v88 = 0;
    }
    v89 = v88 + 8 * v86;
    v90 = v88 + v83 - 8 * (v83 >> 3);
    *(_QWORD*)(v88 + v83) = result;
    v81 = (__int64*)(v88 + v83 + 8);
    memcpy(v90, v82, v83);
    *(_QWORD*)(a1 + 40) = v90;
    *(_QWORD*)(a1 + 48) = v81;
    *(_QWORD*)(a1 + 56) = v89;
    if (v82 != 0) {
      v91 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v91 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v91, v82);
    }
  }
  else {
    *v80 = result;
    v81 = v80 + 1;
  }
  v92 = *v10;
  *(_QWORD*)(a1 + 48) = v81;
  result = fw_memory_HeapManager_Allocate(v92, 80, 16, 0);
  *(_WORD*)(result + 16) = 0;
  v93 = GameData_212ed50[0];
  *(_BYTE*)(result + 18) = 0;
  *(_DWORD*)(result + 52) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 20) = 0;
  *(_QWORD*)(result + 28) = 0;
  *(_QWORD*)(result + 36) = 0;
  *(_QWORD*)(result + 41) = 0;
  *(_DWORD*)(result + 72) = 0;
  *(_QWORD*)result = v93 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_DWORD*)(result + 64) = 0x2000;
  v94 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v81 >= v94) {
    v96 = *v6;
    v97 = (__int64)v81 - *v6;
    v98 = (v97 >> 3) + 1;
    if (v98 >> 61 != 0) {
      goto LABEL_164;
    }
    v99 = v94 - v96;
    if (v99 >> 2 > v98) {
      v98 = v99 >> 2;
    }
    if ((unsigned __int64)v99 >= 0x7FFFFFFFFFFFFFF8LL) {
      v100 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v100 = v98;
    }
    if (v100 != 0) {
      if (v100 >> 61 != 0) {
        goto LABEL_165;
      }
      v101 = result;
      v102 = fw_memory_HeapManager_Allocate(*v10, 8 * v100, 16, 0);
      result = v101;
    }
    else {
      v102 = 0;
    }
    v103 = v102 + 8 * v100;
    v104 = v102 + v97 - 8 * (v97 >> 3);
    *(_QWORD*)(v102 + v97) = result;
    v95 = v102 + v97 + 8;
    memcpy(v104, v96, v97);
    *(_QWORD*)(a1 + 40) = v104;
    *(_QWORD*)(a1 + 48) = v95;
    *(_QWORD*)(a1 + 56) = v103;
    if (v96 != 0) {
      v105 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v105 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v105, v96);
    }
  }
  else {
    *v81 = result;
    v95 = (__int64)(v81 + 1);
  }
  v106 = *v10;
  *(_QWORD*)(a1 + 48) = v95;
  result = fw_memory_HeapManager_Allocate(v106, 136, 16, 0);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  v107 = GameData_212ed58[0];
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_WORD*)(result + 128) = 0;
  *(_QWORD*)result = v107 + 2;
  *(_QWORD*)(result + 8) = a1;
  v109 = *(__int64**)(a1 + 48);
  v108 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v109 >= v108) {
    v111 = *v6;
    v112 = (__int64)v109 - *v6;
    v113 = (v112 >> 3) + 1;
    if (v113 >> 61 != 0) {
      goto LABEL_164;
    }
    v114 = v108 - v111;
    if (v114 >> 2 > v113) {
      v113 = v114 >> 2;
    }
    if ((unsigned __int64)v114 >= 0x7FFFFFFFFFFFFFF8LL) {
      v115 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v115 = v113;
    }
    if (v115 != 0) {
      if (v115 >> 61 != 0) {
        goto LABEL_165;
      }
      v116 = result;
      v117 = fw_memory_HeapManager_Allocate(*v10, 8 * v115, 16, 0);
      result = v116;
    }
    else {
      v117 = 0;
    }
    v118 = v117 + 8 * v115;
    v119 = v117 + v112 - 8 * (v112 >> 3);
    *(_QWORD*)(v117 + v112) = result;
    v110 = v117 + v112 + 8;
    memcpy(v119, v111, v112);
    *(_QWORD*)(a1 + 40) = v119;
    *(_QWORD*)(a1 + 48) = v110;
    *(_QWORD*)(a1 + 56) = v118;
    if (v111 != 0) {
      v120 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v120 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v120, v111);
    }
  }
  else {
    *v109 = result;
    v110 = (__int64)(v109 + 1);
  }
  v121 = *v10;
  *(_QWORD*)(a1 + 48) = v110;
  result = fw_memory_HeapManager_Allocate(v121, 136, 16, 0);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  v122 = GameData_212ed60[0];
  *(_QWORD*)(result + 88) = 0;
  *(_DWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_QWORD*)(result + 128) = 0;
  *(_QWORD*)result = v122 + 2;
  *(_QWORD*)(result + 8) = a1;
  v124 = *(__int64**)(a1 + 48);
  v123 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v124 >= v123) {
    v126 = *v6;
    v127 = (__int64)v124 - *v6;
    v128 = (v127 >> 3) + 1;
    if (v128 >> 61 != 0) {
      goto LABEL_164;
    }
    v129 = v123 - v126;
    if (v129 >> 2 > v128) {
      v128 = v129 >> 2;
    }
    if ((unsigned __int64)v129 >= 0x7FFFFFFFFFFFFFF8LL) {
      v130 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v130 = v128;
    }
    if (v130 != 0) {
      if (v130 >> 61 != 0) {
        goto LABEL_165;
      }
      v131 = result;
      v132 = fw_memory_HeapManager_Allocate(*v10, 8 * v130, 16, 0);
      result = v131;
    }
    else {
      v132 = 0;
    }
    v133 = v132 + 8 * v130;
    v134 = v132 + v127 - 8 * (v127 >> 3);
    *(_QWORD*)(v132 + v127) = result;
    v125 = v132 + v127 + 8;
    memcpy(v134, v126, v127);
    *(_QWORD*)(a1 + 40) = v134;
    *(_QWORD*)(a1 + 48) = v125;
    *(_QWORD*)(a1 + 56) = v133;
    if (v126 != 0) {
      v135 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v135 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v135, v126);
    }
  }
  else {
    *v124 = result;
    v125 = (__int64)(v124 + 1);
  }
  v136 = *v10;
  *(_QWORD*)(a1 + 48) = v125;
  result = fw_memory_HeapManager_Allocate(v136, 120, 16, 0);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  v137 = GameData_212ed68;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_DWORD*)(result + 112) = 0;
  *(_QWORD*)result = v137 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_DWORD*)(result + 88) = -2;
  v139 = *(__int64**)(a1 + 48);
  v138 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v139 < v138) {
    *v139 = result;
    v140 = (__int64)(v139 + 1);
    goto LABEL_163;
  }
  v141 = *v6;
  v142 = (__int64)v139 - *v6;
  v143 = (v142 >> 3) + 1;
  if (v143 >> 61 != 0) {
  LABEL_164:
    GameRoutine_cfa280();
  }
  v144 = v138 - v141;
  if (v144 >> 2 > v143) {
    v143 = v144 >> 2;
  }
  if ((unsigned __int64)v144 >= 0x7FFFFFFFFFFFFFF8LL) {
    v145 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v145 = v143;
  }
  if (v145 != 0) {
    if (v145 >> 61 == 0) {
      v146 = result;
      v147 = fw_memory_HeapManager_Allocate(*v10, 8 * v145, 16, 0);
      result = v146;
      goto LABEL_159;
    }
  LABEL_165:
    GameRoutine_60a210(result);
  }
  v147 = 0;
LABEL_159:
  v148 = v147 + 8 * v145;
  v149 = v147 + v142 - 8 * (v142 >> 3);
  *(_QWORD*)(v147 + v142) = result;
  v140 = v147 + v142 + 8;
  result = memcpy(v149, v141, v142);
  *(_QWORD*)(a1 + 40) = v149;
  *(_QWORD*)(a1 + 48) = v140;
  *(_QWORD*)(a1 + 56) = v148;
  if (v141 != 0) {
    v150 = 128;
    if (*(_QWORD*)(*v10 + 200LL) == 0) {
      v150 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v10 + v150, v141);
  }
LABEL_163:
  *(_QWORD*)(a1 + 48) = v140;
  return result;
}

__int64 CharacterController_d0d7c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v2 = GameData_22110ac;
  *(_DWORD*)(v1 + 600) = 0;
  *(_BYTE*)(v1 + 604) = 0;
  *(_QWORD*)(v1 + 592) = 0x417B53D240800000LL;
  *(_QWORD*)(v1 + 584) = v2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v3 = GameData_22110ac;
  *(_DWORD*)(v1 + 616) = 0;
  *(_BYTE*)(v1 + 620) = 0;
  *(_QWORD*)(v1 + 608) = v3;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v4 = GameData_22110ac;
  v5 = *(unsigned __int8*)(v1 + 648);
  *(_DWORD*)(v1 + 632) = 0;
  *(_QWORD*)(v1 + 624) = v4;
  if (v5 == 1) {
    *(_BYTE*)(v1 + 648) = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v6 = GameData_22110ac;
  *(_DWORD*)(v1 + 664) = 0;
  *(_QWORD*)(v1 + 656) = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  *(_QWORD*)(v1 + 668) = GameData_22110ac;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v7 = GameData_22110ac;
  *(_QWORD*)(v1 + 696) = *(_QWORD*)(v1 + 688);
  v8 = *(_QWORD*)(v1 + 768);
  *(_QWORD*)(v1 + 676) = v7;
  *(_QWORD*)(v1 + 776) = v8;
  if (*(_BYTE*)(v1 + 716) == 1) {
    *(_BYTE*)(v1 + 716) = 0;
  }
  if (*(_BYTE*)(v1 + 724) == 1) {
    *(_BYTE*)(v1 + 724) = 0;
  }
  if (*(_BYTE*)(v1 + 752) == 1) {
    *(_BYTE*)(v1 + 752) = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21a6130);
    if ((_DWORD)result != 0) {
      v16 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v16;
      result = __cxa_guard_release(&GameData_21a6130);
    }
  }
  v9 = *(_QWORD*)(v1 + 840);
  *(_BYTE*)(v1 + 816) = 0;
  *(_DWORD*)(v1 + 820) = 0;
  v10 = GameData_21a6120;
  *(_DWORD*)(v1 + 828) = 0;
  *(_QWORD*)(v1 + 832) = 0;
  *(_QWORD*)(v1 + 840) = 0;
  *(_BYTE*)(v1 + 824) = 1;
  *(_QWORD*)(v1 + 800) = v10;
  v11 = *(_OWORD*)(v1 + 800);
  *((_QWORD*)&v11 + 1) = DWORD2(v10);
  *(_OWORD*)(v1 + 800) = v11;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v12 = *(_QWORD*)(v1 + 864);
  *(_BYTE*)(v1 + 848) = 0;
  *(_QWORD*)(v1 + 856) = 0;
  *(_QWORD*)(v1 + 864) = 0;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *(_QWORD*)(v1 + 880);
  *(_QWORD*)(v1 + 872) = 0;
  *(_QWORD*)(v1 + 880) = 0;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(v1 + 896);
  *(_QWORD*)(v1 + 888) = 0;
  *(_QWORD*)(v1 + 896) = 0;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = *(_QWORD*)(v1 + 904);
  *(_QWORD*)(v1 + 928) = 0;
  *(_QWORD*)(v1 + 912) = v15;
  *(_WORD*)(v1 + 936) = 256;
  return result;
}

_QWORD* CharacterController_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
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
  __int64* v23;
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
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* result;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  *(_QWORD*)a1 = game_zview_CharacterController_vtable;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v3 = *(_QWORD**)(a1 + 40);
  v4 = *(_QWORD**)(a1 + 48);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
        *v3 = 0;
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 40);
  }
  *(_QWORD*)(a1 + 48) = v3;
  v5 = *(_QWORD*)(a1 + 904);
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 912) = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v5);
  }
  v9 = *(_QWORD*)(a1 + 896);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a1 + 880);
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 864);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 840);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *(_QWORD*)(a1 + 768);
  if (v13 != 0) {
    v14 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 776) = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  v16 = *(_QWORD*)(a1 + 688);
  if (v16 != 0) {
    v17 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 696) = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(v17 + v18, v16);
  }
  v19 = *(_QWORD*)(a1 + 536);
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = *(_QWORD*)(a1 + 512);
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = *(_QWORD*)(a1 + 496);
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  v22 = *(_QWORD*)(a1 + 480);
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = *(__int64**)(a1 + 464);
  *(_QWORD*)(a1 + 464) = 0;
  if (v23 != nullptr) {
    v24 = *v23;
    if (*v23 != 0) {
      v25 = v23[1];
      if (v24 == v25) {
        goto LABEL_55;
      }
      do {
        v26 = *(_QWORD*)(v25 - 8);
        if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak(v26);
        }
        v25 -= 16;
      } while (v25 != v24);
      v27 = *v23;
      v23[1] = v24;
      v24 = v27;
      if (v27 != 0) {
      LABEL_55:
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v28, v24);
      }
    }
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v29, v23);
  }
  v30 = *(_QWORD*)(a1 + 456);
  *(_QWORD*)(a1 + 456) = 0;
  if (v30 != 0) {
    v31 = *(_QWORD*)(v30 + 8);
    if (v31 != 0) {
      v32 = *(_QWORD*)(v30 + 16);
      if (v31 == v32) {
        goto LABEL_70;
      }
      do {
        v33 = *(_QWORD*)(v32 - 8);
        if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak(v33);
        }
        v32 -= 16;
      } while (v32 != v31);
      v34 = *(_QWORD*)(v30 + 8);
      *(_QWORD*)(v30 + 16) = v31;
      v31 = v34;
      if (v34 != 0) {
      LABEL_70:
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v35, v31);
      }
    }
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v36, v30);
  }
  v37 = *(_QWORD*)(a1 + 448);
  *(_QWORD*)(a1 + 448) = 0;
  if (v37 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v38, v37);
  }
  v39 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 136) = GameData_1fd87d8;
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak(v39);
  }
  *(_QWORD*)(a1 + 16) = GameData_1fd87b8;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v40 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v40 + 40LL))(v40);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v41 = *(_QWORD**)(a1 + 40);
  v42 = *(_QWORD**)(a1 + 48);
  if (v41 != v42) {
    do {
      if (*v41 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v41 + 8LL))(*v41);
        *v41 = 0;
      }
      ++v41;
    } while (v41 != v42);
    v41 = *(_QWORD**)(a1 + 40);
  }
  result = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 48) = v41;
  if (result == (_QWORD*)(a1 + 64)) {
    v44 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_97;
    }
    v44 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v44))((__int64)result);
  v41 = *(_QWORD**)(a1 + 40);
LABEL_97:
  if (v41 != nullptr) {
    v45 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 48) = v41;
    v46 = 128;
    if (*(_QWORD*)(v45 + 200) == 0) {
      v46 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v45 + v46, v41);
  }
  return result;
}

float game_zview_CharacterController_CharacterController_lambda0_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  float result;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 128) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v7 = v1;
    v5 = __cxa_guard_acquire(&GameData_22110b8);
    v1 = v7;
    if (v5 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v1 = v7;
    }
  }
  v2 = GameData_22110ac;
  *(_DWORD*)(v1 + 600) = 0;
  *(_BYTE*)(v1 + 604) = 0;
  *(_QWORD*)(v1 + 592) = 0x417B53D240800000LL;
  *(_QWORD*)(v1 + 584) = v2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v8 = v1;
    v6 = __cxa_guard_acquire(&GameData_22110b8);
    v1 = v8;
    if (v6 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v1 = v8;
    }
  }
  v4 = GameData_22110ac;
  result = *(float*)&GameData_22110ac;
  *(_DWORD*)(v1 + 616) = 0;
  *(_BYTE*)(v1 + 620) = 0;
  *(_QWORD*)(v1 + 608) = v4;
  return result;
}

void CharacterController_d14340(__int64* a1, __int64 a2)
{
  float* v2;
  __int64 v4;
  __int64 v5;
  int8x16_t v6;
  float32x4_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  __int64 v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int128 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int8x16_t v37;

  *(__int64*)((char*)a1 + 76) = 0;
  v2 = (float*)a1 + 19;
  *(__int64*)((char*)a1 + 116) = 0;
  *a1 = 0;
  a1[1] = 0;
  *(__int64*)((char*)a1 + 13) = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  *(__int64*)((char*)a1 + 84) = 0;
  *(__int64*)((char*)a1 + 92) = 0;
  *(__int64*)((char*)a1 + 100) = 0;
  *((_DWORD*)a1 + 27) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v33 = a2;
    v28 = __cxa_guard_acquire(&GameData_22110b8);
    a2 = v33;
    if (v28 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      a2 = v33;
    }
  }
  a1[11] = GameData_22110ac;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v34 = a2;
    v29 = __cxa_guard_acquire(&GameData_22110b8);
    a2 = v34;
    if (v29 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      a2 = v34;
    }
  }
  a1[12] = GameData_22110ac;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v35 = a2;
    v30 = __cxa_guard_acquire(&GameData_22110b8);
    a2 = v35;
    if (v30 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      a2 = v35;
    }
  }
  v4 = GameData_22110ac;
  *((_WORD*)a1 + 56) = 0;
  a1[13] = v4;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v36 = a2;
    v31 = __cxa_guard_acquire(&GameData_22110b8);
    a2 = v36;
    if (v31 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      a2 = v36;
    }
  }
  v5 = GameData_22110ac;
  *((_DWORD*)a1 + 31) = 0;
  *((_BYTE*)a1 + 128) = 0;
  *((_DWORD*)a1 + 33) = 0;
  *a1 = a2;
  *(__int64*)((char*)a1 + 116) = v5;
  math_Quat_FromYawPitchRoll((void*)(&v37), **(float**)(a2 + 144),
                             *(float*)(*(_QWORD*)(a2 + 144) + 4LL),
                             *(float*)(*(_QWORD*)(a2 + 144) + 8LL));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
    v32 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v32;
    __cxa_guard_release(&GameData_21a61b0);
  }
  v6 = v37;
  a1[8] = 0;
  *((_DWORD*)a1 + 18) = 0;
  LANES128(v7).n128_u64[0] = GameData_21a61a0;
  v8 = vmulq_f32(v6, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
  LANES128(v7).n128_u64[1] = LANES128(v10).n128_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v12).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v8).n128_u64[0]), 1);
  v13 = vmlaq_f32(vmulq_f32(v8, v9), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v7, v11));
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v7).n128_u64[0];
  LANES128(v7).n128_u64[1] = GameData_21a61a0;
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v15 = vmlsq_f32(vmlaq_f32(v13, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v7, v12)),
                  v14, v10);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] = LANES128(v6).n128_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v8).n128_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v18).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v15).n128_u64[0]), 1);
  v19 = vmlaq_f32(vmulq_f32(v14, v15), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v17, v16));
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v8).n128_u64[1] = LANES128(v16).n128_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v6).n128_u64[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v6).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v20 = *a1;
  v21 = vmlsq_f32(vmlaq_f32(v19, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v16, v18)),
                  v6, v8);
  a1[4] = LANES128(v21).n128_u64[0];
  v22 = *((float32x4_t*)a1 + 2);
  LANES128(v22).n128_u64[1] = LANES128(v21).n128_u32[2];
  *((float32x4_t*)a1 + 2) = v22;
  v23 = vmulq_f32(v22, vdupq_n_s32(0x42C80000u));
  a1[6] = LANES128(v23).n128_u64[0];
  v24 = *((_OWORD*)a1 + 3);
  *((_QWORD*)&v24 + 1) = LANES128(v23).n128_u32[2];
  v25 = 0x0.0p+0f;
  *((_OWORD*)a1 + 3) = v24;
  v26 = *(_QWORD*)(*(_QWORD*)(v20 + 600) + 168LL);
  if (v26 != 0) {
    v27 = *(_QWORD*)(v20 + 176);
    if ((v27 & 0x100000000LL) != 0) {
      LOBYTE(v25) =
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                               8LL * *(unsigned __int8*)(v26 + 1944)) +
                    49LL);
      v25 = (float)(0x1.0000000000000p+0f / (float)LODWORD(v25)) *
            (float)(int)v27;
    }
  }
  *v2 = v25;
}

void CharacterController_d14ce0(float* a1)
{
  __int64 v1;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  unsigned __int8 explicit;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;

  v1 = *(_QWORD*)a1;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 600LL) + 16LL);
  v4 = *(float*)(v3 + 672);
  v5 = *(float*)(v3 + 668);
  v6 = (float)(PSEUDO_UNFUSED(v4 * v4)) + (float)(v5 * v5);
  if (v6 <= 0x0.0p+0f) {
    v6 = (float)(PSEUDO_UNFUSED(a1[27] * a1[27])) + (float)(a1[26] * a1[26]);
  }
  else {
    a1[26] = v5;
    a1[27] = v4;
  }
  v7 = a1[21] + (float)(fminf(fmaxf(*(float*)(*(_QWORD*)(v1 + 8) + 228LL) *
                                        0x1.4000000000000p+2f,
                                    0x0.0p+0f),
                              0x1.0000000000000p+0f) *
                        (float)(sqrtf(v6) - a1[21]));
  v8 = a1[16];
  v9 = a1[17];
  a1[21] = v7;
  v10 = (float)(fminf(fmaxf(v8, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                0x1.3333340000000p-2f) +
        0x0.0p+0f;
  v11 =
      fmodf(a1[33] + (float)((float)(PSEUDO_UNFUSED(
                                 (float)((float)(v9 + -0x1.0000000000000p-1f) +
                                         (float)(v9 + -0x1.0000000000000p-1f)) *
                                 0x1.e28c760000000p-1f)) +
                             0x1.921fb60000000p+1f),
            0x1.921fb60000000p+2f);
  explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                                  memory_order_acquire);
  if (v11 >= 0x0.0p+0f) {
    v13 = v11 + 0x0.0p+0f;
  }
  else {
    v13 = (float)(v11 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_22110c8) != 0) {
    GameData_22110c0 = 0x3F80000000000000LL;
    __cxa_guard_release_alt1((__int64)&GameData_22110c8);
  }
  v14 = v7 * v10;
  v15 = v13 +
        (float)(roundf(v13 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v15 <= 0x1.921fb60000000p+0f) {
    v17 = 0x1.0000000000000p+0f;
    if (v15 >= -0x1.921fb60000000p+0f) {
      goto LABEL_13;
    }
    v16 = -0x1.921fb60000000p+1f;
  }
  else {
    v16 = 0x1.921fb60000000p+1f;
  }
  v15 = v16 - v15;
  v17 = -0x1.0000000000000p+0f;
LABEL_13:
  v18 = v15 * v15;
  v19 =
      v15 *
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
                                                                                            (float)(v15 *
                                                                                                    v15))) *
                                                                            (float)(v15 *
                                                                                    v15))) *
                                                         (float)(v15 * v15))) *
                                         (float)(v15 * v15))) *
                      (float)(v15 * v15)) +
              0x1.0000000000000p+0f);
  v20 =
      v17 *
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
                                                                                            v18)) *
                                                                            v18)) *
                                                         v18)) *
                                         v18)) *
                      v18) +
              0x1.0000000000000p+0f);
  v21 = (float)(PSEUDO_UNFUSED(v19 * *((float*)&GameData_22110c0 + 1))) +
        (float)(*(float*)&GameData_22110c0 * v20);
  v22 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v20)) -
        (float)(*(float*)&GameData_22110c0 * v19);
  a1[22] = v14 * v21;
  a1[23] = v14 * v22;
  v23 = a1[26];
  v24 = a1[27];
  v25 = (float)(PSEUDO_UNFUSED(v24 * v24)) + (float)(v23 * v23);
  if (v25 > 0x0.0p+0f) {
    v26 = *(float*)(*(_QWORD*)a1 + 528LL);
    v27 = v26 * (float)(fminf(fmaxf(a1[18], 0x0.0p+0f), 0x1.0000000000000p+0f) +
                        0x0.0p+0f);
    if (*((_BYTE*)a1 + 113) == 1) {
      v27 =
          v27 +
          (float)(v26 *
                  (float)((float)(fminf(
                                      fmaxf(*(float*)(*(_QWORD*)(*(_QWORD*)a1 +
                                                                 144LL) +
                                                      4LL),
                                            0x0.0p+0f),
                                      0x1.0000000000000p+0f) *
                                  0x1.0000000000000p-1f) +
                          0x1.0000000000000p-1f));
    }
    if (v23 != 0x0.0p+0f || v24 != 0x0.0p+0f) {
      v28 = sqrtf(v25);
      v23 = v23 / v28;
      v24 = v24 / v28;
    }
    a1[24] = v27 * v23;
    a1[25] = v27 * v24;
  }
}

void CharacterController_StateActionRoot_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  __int64 v22;
  int v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  __int64 v36;
  atomic_ullong* v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  __int64 v41;
  int v42;
  _BOOL4 v43;
  float v44;
  __int64 v45;
  float v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  __int64 v61;
  float v62;
  float v63;
  float v64;
  __int64 v65;
  float v66;
  float v67;
  bool v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  char v79;
  float v80;
  float v81;
  __int64 v82;
  float v83;
  __int64 v84;
  float v85;
  __int64 v86;
  __int64 v87;
  float v88;
  __int64* v89;
  __int64 v90;
  _QWORD v91[5];
  _QWORD v92[5];
  struct {
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
  } v93_;

  LODWORD(v93_.v93) = 1038;
  GameRoutine_daa180(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 32LL),
                     (int*)&v93_.v93);
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 32LL);
  v4 = *(_QWORD*)(v3 + 16);
  if (*(float*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 8LL) + 228LL) <= 0x0.0p+0f) {
    v6 = 0;
    v5 = 0;
  }
  else {
    v5 = 0;
    v6 = 0;
    if (*(float*)(*(_QWORD*)(v4 + 504) + 80LL) <= 0x0.0p+0f &&
        *(float*)(v4 + 820) <= 0x0.0p+0f && *(float*)(v3 + 384) <= 0x0.0p+0f) {
      v6 = *(_QWORD*)(v3 + 32);
      v5 = *(_BYTE*)(v3 + 41);
    }
  }
  *(_QWORD*)(v2 + 584) = v6;
  v7 = v6;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + 604LL) = v5;
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(v8 + 8);
  if ((*(_BYTE*)(v9 + 388) & 0x40) != 0) {
    *(_DWORD*)(a1 + 72) = 0;
    goto LABEL_15;
  }
  v10 = *(_DWORD*)(a1 + 72);
  switch (v10) {
  case 2:
    v31 = *(_QWORD*)(v8 + 488);
    v32 = CharacterRotate_d52080(v31);
    v33 = fmodf(*(float*)(v31 + 36) - v32, 0x1.921fb60000000p+2f);
    if (v33 >= 0x0.0p+0f) {
      v34 = v33 + 0x0.0p+0f;
    }
    else {
      v34 = (float)(v33 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    if (v34 > 0x1.921fb60000000p+1f) {
      v34 = v34 + -0x1.921fb60000000p+2f;
    }
    if (fabsf(v34) >= 0x1.6571840000000p-2f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
        GameData_22110ac = 0;
        __cxa_guard_release_alt1((__int64)&GameData_22110b8);
      }
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 584LL) = GameData_22110ac;
    }
    else {
      v35 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 24LL);
      if (*(_BYTE*)(v35 + 96) == 1) {
        *(_BYTE*)(v35 + 96) = 0;
      }
      *(_BYTE*)(v35 + 25) = 0;
      *(_DWORD*)(a1 + 72) = 0;
    }
    break;
  case 1:
    if ((float)((float)(PSEUDO_UNFUSED(*(float*)(v8 + 588) *
                                       *(float*)(v8 + 588))) +
                (float)(*(float*)(v8 + 584) * *(float*)(v8 + 584))) >
        0x0.0p+0f) {
      v27 = (float)(PSEUDO_UNFUSED(*((float*)&v7 + 1) * *((float*)&v7 + 1))) +
            (float)(*(float*)&v7 * *(float*)&v7);
      v28 = 0x0.0p+0f;
      if (v27 > 0x0.0p+0f) {
        if (*(float*)&v7 == 0x0.0p+0f && *((float*)&v7 + 1) == 0x0.0p+0f) {
          v30 = *((float*)&v7 + 1);
          v29 = *(float*)&v7;
        }
        else {
          v83 = sqrtf(v27);
          v29 = *(float*)&v7 / v83;
          v30 = *((float*)&v7 + 1) / v83;
        }
        v28 = atan2f_alt3(v29, v30);
        v8 = *(_QWORD*)(a1 + 8);
      }
      v84 = *(_QWORD*)(v8 + 488);
      *(float*)&v93_.v93 = v28;
      v85 = fmodf(*(float*)(v84 + 36) - v28, 0x1.921fb60000000p+2f);
      v86 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
      v87 = *(_QWORD*)(v86 + 24);
      if ((*(_BYTE*)(v87 + 96) & 1) != 0 || (*(_BYTE*)(v87 + 176) & 1) != 0) {
        goto LABEL_173;
      }
      if (v85 >= 0x0.0p+0f) {
        v88 = v85 + 0x0.0p+0f;
      }
      else {
        v88 = (float)(v85 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
      }
      if (v88 > 0x1.921fb60000000p+1f) {
        v88 = v88 + -0x1.921fb60000000p+2f;
      }
      if (fabsf(v88) <= 0x1.921fb60000000p-1f) {
      LABEL_173:
        *(_DWORD*)(a1 + 72) = 0;
      }
      else {
        GameRoutine_d33890(
            v87, (int*)&v93_.v93, 0,
            (float)((float)(**(float**)(v86 + 144) * 0x1.0000000000000p-1f) +
                    0x1.0000000000000p+0f) *
                0x1.921fa00000000p+2f);
        *(_DWORD*)(a1 + 72) = 2;
        v89 = GameRoutine_d78de0();
        v90 = *(_QWORD*)(a1 + 8);
        *(_DWORD*)(v90 + 584) = *(_DWORD*)v89;
        *(_DWORD*)(v90 + 588) = *((_DWORD*)v89 + 1);
      }
    }
    break;
  case 0:
    if ((float)((float)(PSEUDO_UNFUSED(*(float*)(v8 + 588) *
                                       *(float*)(v8 + 588))) +
                (float)(*(float*)(v8 + 584) * *(float*)(v8 + 584))) <=
        0x0.0p+0f) {
      v11 = *(float*)(*(_QWORD*)(v9 + 8) + 228LL) + *(float*)(a1 + 44);
      *(float*)(a1 + 44) = v11;
      if (v11 > 0x1.3333340000000p-2f) {
        *(_DWORD*)(a1 + 44) = 0;
        *(_DWORD*)(a1 + 72) = 1;
      }
      break;
    }
  LABEL_15:
    *(_DWORD*)(a1 + 44) = 0;
    break;
  default:
    break;
  }
  v12 = (float)(PSEUDO_UNFUSED(*((float*)&v7 + 1) * *((float*)&v7 + 1))) +
        (float)(*(float*)&v7 * *(float*)&v7);
  *(_BYTE*)(a1 + 18) = v12 > 0x1.f5c28e0000000p-2f;
  v13 = *(_QWORD*)(a1 + 8);
  if (v12 > 0x1.f5c28e0000000p-2f && (*(_BYTE*)(v13 + 36) & 1) == 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(v13 + 40) + 24LL);
    v93_.v96 = 0;
    v93_.v97 = 0;
    v93_.v95 = 0x40A0000040A00000LL;
    v92[3] = 0;
    v92[4] = 0;
    v92[2] = 0x40A0000040A00000LL;
    v91[3] = 0;
    v91[4] = 0;
    v91[2] = 0x40A0000040A00000LL;
    v93_.v93 = 0x4020000040200000LL;
    v93_.v94 = 0;
    v92[0] = 0x4020000040200000LL;
    v92[1] = 0;
    v91[0] = 0x4020000040200000LL;
    v91[1] = 0;
    if ((CharacterController_d40860(v14, (__int64)&v93_.v93, (__int64)v92,
                                    (__int64)v91) &
         1) != 0) {
      GameRoutine_d40750(v14, (__int64)&v93_.v93, (__int64)v92, (__int64)v91);
      v15 = *(_QWORD*)(a1 + 8);
      if ((*(_BYTE*)(v15 + 848) & 1) == 0) {
        if (*(_BYTE*)(v15 + 28) != 1 || *(_DWORD*)(v15 + 24) != 3) {
          *(_DWORD*)(v15 + 32) = 3;
          *(_BYTE*)(v15 + 36) = 1;
        }
        if ((*(_BYTE*)(v15 + 112) & 1) == 0 &&
            (*(_BYTE*)(v15 + 113) & 1) != 0) {
          WaitRelease_cfa2a0_alt1(v15 + 16);
        }
      }
    }
    v13 = *(_QWORD*)(a1 + 8);
  }
  v16 = *(_QWORD**)(v13 + 8);
  v17 = 0;
  v18 = v16[4];
  v19 = *(_QWORD*)(v18 + 16);
  if (*(float*)(*(_QWORD*)(*(_QWORD*)(v19 + 8) + 8LL) + 228LL) > 0x0.0p+0f &&
      *(float*)(*(_QWORD*)(v19 + 504) + 80LL) <= 0x0.0p+0f &&
      *(float*)(v19 + 820) <= 0x0.0p+0f && *(float*)(v18 + 384) <= 0x0.0p+0f) {
    v17 = *(_QWORD*)(v18 + 40);
  }
  v20 = *(float*)(a1 + 20);
  v21 = fabsf(*(float*)(v16[1] + 228LL));
  if (v20 > 0x0.0p+0f) {
    v20 = v20 - v21;
    if (v20 >= 0x0.0p+0f) {
      goto LABEL_38;
    }
  LABEL_37:
    v20 = 0x0.0p+0f;
    goto LABEL_38;
  }
  if (v20 < 0x0.0p+0f) {
    v20 = v20 + v21;
    if (v20 > 0x0.0p+0f) {
      goto LABEL_37;
    }
  }
LABEL_38:
  v22 = v16[71];
  v23 = *(_DWORD*)(v13 + 128);
  *(float*)(a1 + 20) = v20;
  v24 = *(float*)(a1 + 24);
  v25 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v13 + 8) + 8LL) + 228LL));
  if (v24 <= 0x0.0p+0f) {
    if (v24 >= 0x0.0p+0f) {
      goto LABEL_44;
    }
    v24 = v24 + v25;
    if (v24 <= 0x0.0p+0f) {
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  v24 = v24 - v25;
  if (v24 < 0x0.0p+0f) {
  LABEL_43:
    v24 = 0x0.0p+0f;
  }
LABEL_44:
  *(float*)(a1 + 24) = v24;
  if (v24 <= 0x0.0p+0f && (v17 & 1) != 0 && (*(_BYTE*)(a1 + 18) & 1) != 0 &&
      ((*(_BYTE*)(v13 + 194) & 1) != 0 ||
       (*(_BYTE*)(*(_QWORD*)(v13 + 8) + 387LL) & 0x80) != 0) &&
      (*(_BYTE*)(v13 + 36) & 1) == 0 &&
      (*(_BYTE*)(*(_QWORD*)(v13 + 8) + 386LL) & 0x10) == 0) {
    v26 = *(float*)(v13 + 364) * 0x1.99999a0000000p-1f;
    if ((v22 & 8) != 0 && (v23 & 0x80) != 0) {
      v26 = *(float*)(v13 + 368);
    }
    if (sqrtf((float)(PSEUDO_UNFUSED(*(float*)(v13 + 672) *
                                     *(float*)(v13 + 672))) +
              (float)(*(float*)(v13 + 668) * *(float*)(v13 + 668))) >= v26) {
      if ((v23 & 0x80) != 0) {
        if (v20 < 0x1.99999a0000000p-5f) {
          v20 = 0x1.99999a0000000p-5f;
        }
        *(float*)(a1 + 20) = v20;
      }
      else {
        if (v20 < 0x1.99999a0000000p-3f) {
          v20 = 0x1.99999a0000000p-3f;
        }
        *(float*)(a1 + 20) = v20;
        v36 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
        *(_QWORD*)(v36 + 8) = 0;
        v37 = (atomic_ullong*)(v36 + 8);
        *(_QWORD*)(v36 + 16) = 0;
        v38 = v36;
        v39 = GameData_212ed10[0];
        *(_DWORD*)(v36 + 40) = 0;
        *(_QWORD*)v36 = v39 + 2;
        *(_QWORD*)(v36 + 24) = 0x3E4CCCCD3F99999ALL;
        v93_.v93 = v36 + 24;
        v93_.v94 = v36;
        *(_QWORD*)(v36 + 32) = 0x3ECCCCCD3ECCCCCDLL;
        v40 = *(__int64**)(*(_QWORD*)(a1 + 8) + 464LL);
        atomic_fetch_add_explicit(v37, 1u, memory_order_relaxed);
        GameRoutine_d78b40(v40, &v93_.v93);
        v41 = v93_.v94;
        if (v93_.v94 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v93_.v94 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
          std___1___shared_weak_count___release_weak_alt3(v41);
        }
        if (atomic_fetch_add(v37, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
          std___1___shared_weak_count___release_weak_alt3(v38);
        }
        v20 = *(float*)(a1 + 20);
        *(_DWORD*)(a1 + 40) = 1065353216;
        v13 = *(_QWORD*)(a1 + 8);
      }
    }
  }
  if (v20 <= 0x0.0p+0f) {
    v42 = 0;
  }
  else {
    v42 = 128;
  }
  v43 = v20 > 0x0.0p+0f;
  *(_DWORD*)(v13 + 128) = *(_DWORD*)(v13 + 128) & 0xFFFFFF7F | v42;
  if (HIDWORD(v17) != 1) {
    if (HIDWORD(v17) != 2) {
      goto LABEL_94;
    }
    v43 = true;
  }
  if (!v43 || (v22 & 8) != 0) {
  LABEL_94:
    v45 = *(_QWORD*)(a1 + 8);
    v44 = *(float*)(a1 + 36);
    v46 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v45 + 8) + 8LL) + 228LL));
    if (v44 <= 0x0.0p+0f) {
      if (v44 >= 0x0.0p+0f) {
        goto LABEL_100;
      }
      v44 = v44 + v46;
      if (v44 <= 0x0.0p+0f) {
        goto LABEL_100;
      }
    }
    else {
      v44 = v44 - v46;
      if (v44 >= 0x0.0p+0f) {
        goto LABEL_100;
      }
    }
    v44 = 0x0.0p+0f;
    goto LABEL_100;
  }
  v44 = *(float*)(a1 + 36);
  v45 = *(_QWORD*)(a1 + 8);
  if (v44 < 0x1.99999a0000000p-4f) {
    v44 = 0x1.99999a0000000p-4f;
  }
LABEL_100:
  *(float*)(a1 + 36) = v44;
  if (v44 <= 0x0.0p+0f) {
    v47 = 0;
  }
  else {
    v47 = 8;
  }
  *(_DWORD*)(v45 + 128) = *(_DWORD*)(v45 + 128) & 0xFFFFFFF7 | v47;
  if ((v23 & 0x80) != 0 && *(float*)(a1 + 20) == 0x0.0p+0f) {
    *(_DWORD*)(a1 + 24) = 1050253722;
  }
  v48 = *(_QWORD*)(a1 + 8);
  v49 = 16;
  if ((float)((float)(PSEUDO_UNFUSED(*(float*)(v48 + 672) *
                                     *(float*)(v48 + 672))) +
              (float)(*(float*)(v48 + 668) * *(float*)(v48 + 668))) <=
      0x0.0p+0f) {
    if (((*(_BYTE*)(v48 + 195) | *(_BYTE*)(v48 + 194)) & 1) != 0) {
      v49 = 0;
    }
    else {
      v49 = 16;
    }
  }
  *(_DWORD*)(v48 + 128) = *(_DWORD*)(v48 + 128) & 0xFFFFFFEF | v49;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 600LL) =
      *(_DWORD*)(*(_QWORD*)(a1 + 8) + 364LL);
  v50 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v50 + 128) & 0x80) != 0) {
    *(_DWORD*)(v50 + 600) = *(_DWORD*)(v50 + 360);
    v51 = *(_QWORD*)(a1 + 8);
    v52 = *(float*)(v51 + 584);
    v53 = *(float*)(v51 + 588);
    if (v52 == 0x0.0p+0f && v53 == 0x0.0p+0f) {
      v54 = *(float*)(*(_QWORD*)(v51 + 488) + 36LL);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_22110c8) != 0) {
        GameData_22110c0 = 0x3F80000000000000LL;
        __cxa_guard_release_alt1((__int64)&GameData_22110c8);
      }
      v55 = v54 + (float)(roundf(v54 * 0x1.45f3060000000p-3f) *
                          -0x1.921fb60000000p+2f);
      if (v55 <= 0x1.921fb60000000p+0f) {
        v58 = 0x1.0000000000000p+0f;
        if (v55 >= -0x1.921fb60000000p+0f) {
        LABEL_120:
          v59 = v55 * v55;
          v60 =
              v55 *
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
                                                                                                    (float)(v55 *
                                                                                                            v55))) *
                                                                                    (float)(v55 *
                                                                                            v55))) *
                                                                 (float)(v55 *
                                                                         v55))) *
                                                 (float)(v55 * v55))) *
                              (float)(v55 * v55)) +
                      0x1.0000000000000p+0f);
          v61 = *(_QWORD*)(a1 + 8);
          v62 =
              v58 *
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
                                                                                                    v59)) *
                                                                                    v59)) *
                                                                 v59)) *
                                                 v59)) *
                              v59) +
                      0x1.0000000000000p+0f);
          v63 =
              (float)(PSEUDO_UNFUSED(v60 * *((float*)&GameData_22110c0 + 1))) +
              (float)(*(float*)&GameData_22110c0 * v62);
          v64 =
              (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v62)) -
              (float)(*(float*)&GameData_22110c0 * v60);
          *(float*)(v61 + 584) = v63;
          *(float*)(v61 + 588) = v64;
          goto LABEL_121;
        }
        v56 = -0x1.921fb60000000p+1f;
      }
      else {
        v56 = 0x1.921fb60000000p+1f;
      }
      v55 = v56 - v55;
      v58 = -0x1.0000000000000p+0f;
      goto LABEL_120;
    }
    v57 = sqrtf((float)(PSEUDO_UNFUSED(v53 * v53)) + (float)(v52 * v52));
    *(float*)(v51 + 584) = v52 / v57;
    *(float*)(v51 + 588) = v53 / v57;
  }
LABEL_121:
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 592LL) = *(_DWORD*)(a1 + 28);
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 596LL) = *(_DWORD*)(a1 + 32);
  v65 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v65 + 128) & 0x80) != 0 &&
      *(_DWORD*)(GameData_21d96b8 + 8) == 3) {
    *(float*)(v65 + 596) =
        *(float*)(v65 + 596) *
        (float)((float)(fminf(fmaxf(*(float*)(a1 + 40), 0x0.0p+0f),
                              0x1.0000000000000p+0f) *
                        -0x1.0000000000000p-2f) +
                0x1.8000000000000p-1f);
    v65 = *(_QWORD*)(a1 + 8);
  }
  if (*(_BYTE*)(a1 + 16) == 1) {
    v66 = (float)(*(float*)(GameData_21f3cb0 + 1060) + -0x1.99999a0000000p-2f) /
          0x1.3333340000000p-1f;
    v67 = 0x1.0000000000000p+0f;
    if (v66 <= 0x1.0000000000000p+0f) {
      v67 =
          (float)(*(float*)(GameData_21f3cb0 + 1060) + -0x1.99999a0000000p-2f) /
          0x1.3333340000000p-1f;
    }
    v68 = v66 < 0x0.0p+0f;
    v69 = 0x0.0p+0f;
    if (!v68) {
      v69 = v67;
    }
    *(float*)(v65 + 596) = *(float*)(v65 + 596) * v69;
    v65 = *(_QWORD*)(a1 + 8);
  }
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v65 + 8) + 8LL) + 216LL) & 2) == 0) {
    *(float*)(v65 + 596) = *(float*)(v65 + 596) + *(float*)(v65 + 596);
    v65 = *(_QWORD*)(a1 + 8);
  }
  if (*(_BYTE*)(a1 + 16) == 1) {
    v70 = sqrtf(
        (float)(PSEUDO_UNFUSED(*(float*)(v65 + 588) * *(float*)(v65 + 588))) +
        (float)(*(float*)(v65 + 584) * *(float*)(v65 + 584)));
    v71 = 0x1.0000000000000p+0f;
    if ((*(_BYTE*)(v65 + 128) & 0x80) != 0) {
      v70 = 0x1.0000000000000p+0f;
    }
    if (v70 >= 0x1.99999a0000000p-1f) {
      v72 = (float)(v70 + -0x1.99999a0000000p-1f) / 0x1.9999980000000p-3f;
      if (v72 <= 0x1.0000000000000p+0f) {
        v71 = v72;
      }
      if (v72 < 0x0.0p+0f) {
        v71 = 0x0.0p+0f;
      }
      *(float*)(GameData_21f3cb0 + 1152) = v71;
      v65 = *(_QWORD*)(a1 + 8);
    }
  }
  v73 = *(float*)(v65 + 360);
  v74 = 0x0.0p+0f;
  v75 = 0x0.0p+0f;
  if (v73 != 0x0.0p+0f) {
    v76 = sqrtf((float)(PSEUDO_UNFUSED(*(float*)(v65 + 672) *
                                       *(float*)(v65 + 672))) +
                (float)(*(float*)(v65 + 668) * *(float*)(v65 + 668))) /
          v73;
    v77 = 0x1.0000000000000p+0f;
    if (v76 <= 0x1.0000000000000p+0f) {
      v77 = v76;
    }
    v68 = v76 < 0x0.0p+0f;
    v75 = 0x0.0p+0f;
    if (!v68) {
      v75 = v77;
    }
  }
  v78 = *(_QWORD*)(v65 + 8);
  if ((*(_BYTE*)(v78 + 387) & 0x40) != 0) {
    v74 = v75 + v75;
    v79 = (v75 >= 0x1.cccccc0000000p-1f) & *(_BYTE*)(a1 + 18);
    if (v79 == 0) {
      v74 = 0x0.0p+0f;
    }
  }
  else {
    v79 = 0;
  }
  *(float*)(*(_QWORD*)(v78 + 632) + 20LL) = v74;
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 632LL) + 24LL) =
      v79 & 1;
  v80 = *(float*)(a1 + 40);
  v81 = fabsf((float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f) +
              (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f));
  if (v80 > 0x0.0p+0f) {
    v80 = v80 - v81;
    if (v80 >= 0x0.0p+0f) {
      goto LABEL_156;
    }
    goto LABEL_155;
  }
  if (v80 < 0x0.0p+0f) {
    v80 = v80 + v81;
    if (v80 > 0x0.0p+0f) {
    LABEL_155:
      v80 = 0x0.0p+0f;
    }
  }
LABEL_156:
  v82 = *(_QWORD*)(a1 + 8);
  *(float*)(a1 + 40) = v80;
  if ((*(_BYTE*)(*(_QWORD*)(v82 + 8) + 568LL) & 8) != 0) {
    StateActionRoot_d3e100(a1, (*(_DWORD*)(v82 + 128) & 0x80) != 0);
    if (*(_BYTE*)(a1 + 48) == 1) {
      *(float*)(a1 + 52) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                    228LL) +
          *(float*)(a1 + 52);
      if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 56)) & 1) == 0 &&
          *(float*)(a1 + 52) >= 0x1.99999a0000000p-3f) {
        game_zview_d56a60(
            (void*)((__int64)&v93_.v93),
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 40LL),
            (__int64)"SE_FS_Add_Orhel_Sprint_Jet_lp", 0x1.0000000000000p+0f);
        GameRoutine_112180(a1 + 56, (__int64)&v93_.v93);
      }
    }
  }
}

_QWORD* CharacterController_StateJump_Unknown3(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  __int64* v18;
  __int64 v19;
  __int128 v20;
  float v21;
  __int128 v22;
  float v23;
  __int64 v24;
  __int128 v25;
  __int128 v26;
  __int64 v27;
  float v28;
  __int64 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  float v33;
  __int64 v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  __int128 v40;
  __int128 v41;
  __int64 v42;
  _QWORD* result;
  float v44;
  __int128 v45;
  __int128 v46;
  struct {
    _QWORD v47[14];
    char gap144_[4];
    float v48;
    char gap152_[24];
    char v49;
  } v47_;

  v2 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 16) =
      (*(_DWORD*)(*(_QWORD*)(v2 + 8) + 384LL) & 0x40000000) != 0;
  *(_DWORD*)(v2 + 128) |= 0x40u;
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(__int64**)(*(_QWORD*)(v4 + 8) + 632LL);
  v6 = *((unsigned int*)v5 + 4);
  if ((v6 & 8) == 0) {
    v7 = v6 | 8;
    v8 = *v5;
    *((_DWORD*)v5 + 4) = v7;
    v9 = ((__int64)*(int*)(v8 + 376) << 24) + (v7 << 20);
    if (*(_QWORD*)(v8 + 600) != 0) {
      ++v9;
    }
    v5[1] = v9;
    v4 = *(_QWORD*)(a1 + 8);
  }
  if ((*(_BYTE*)(v4 + 196) & 1) == 0) {
    *(_QWORD*)(v4 + 200) = 0;
    *(_QWORD*)(v4 + 208) = 0;
    *(_DWORD*)(v4 + 216) = 0;
    *(_BYTE*)(v4 + 196) = 1;
    *(_QWORD*)(v4 + 220) = 1065353216;
    if (*(_BYTE*)(v4 + 232) == 1) {
      *(_BYTE*)(v4 + 232) = 0;
    }
    *(_BYTE*)(v4 + 240) = 0;
    *(_DWORD*)(v4 + 244) = 0;
    *(_DWORD*)(v4 + 236) = -1027080192;
    if (*(_BYTE*)(v4 + 256) == 1) {
      *(_BYTE*)(v4 + 256) = 0;
    }
    if (*(_BYTE*)(v4 + 264) == 1) {
      *(_BYTE*)(v4 + 264) = 0;
    }
    if (*(_BYTE*)(v4 + 269) == 1) {
      *(_BYTE*)(v4 + 269) = 0;
    }
    if (*(_BYTE*)(v4 + 271) == 1) {
      *(_BYTE*)(v4 + 271) = 0;
    }
    if (*(_BYTE*)(v4 + 273) == 1) {
      *(_BYTE*)(v4 + 273) = 0;
    }
    *(_DWORD*)(v4 + 276) = 0;
    *(_WORD*)(v4 + 280) = 256;
  }
  v10 = GameData_220b6f0;
  v11 = *(_DWORD*)(GameData_220b6f0 + 216);
  *(_DWORD*)(GameData_220b6f0 + 216) = v11 + 1;
  if (v11 == 0) {
    (**(void (***)(__int64))(v10 + 208))(v10 + 208);
  }
  if (*(_BYTE*)(a1 + 16) == 1 && (*(_BYTE*)(a1 + 17) & 1) == 0) {
    *(_BYTE*)(a1 + 17) = 1;
    v12 = GameData_21d96b8;
    v13 = *(_DWORD*)(GameData_21d96b8 + 40);
    *(_DWORD*)(GameData_21d96b8 + 40) = v13 + 1;
    if (v13 == 0) {
      a2 = ((long double (*)(__int64)) * *(_QWORD**)(v12 + 32))(v12 + 32);
    }
  }
  CharacterController_d3f410_alt1(a1, 0, a2);
  v14 = *(_QWORD*)(a1 + 8);
  LODWORD(v15) = *(_DWORD*)(a1 + 60);
  v16 = *(float*)(a1 + 64);
  v17 = *(float*)(v14 + 176);
  *(float*)(a1 + 168) = v17;
  *(float*)(a1 + 172) = v17 + 0x1.8000000000000p+1f;
  v18 = GameData_212ebd0[0];
  v19 = *GameData_212ebd0[0];
  *(float*)&v20 =
      *(float*)(a1 + 20) +
      (float)((float)(*(float*)&v15 - *(float*)(a1 + 20)) * 0x0.0p+0f);
  v21 = *(float*)(a1 + 24) +
        (float)((float)(v16 - *(float*)(a1 + 24)) * 0x0.0p+0f);
  *(float*)&v22 = *(float*)&v20;
  DWORD1(v22) = 1128792064;
  v15 = (unsigned int)v15;
  *(float*)&v15 = v21;
  DWORD1(v20) = -1027080192;
  *((_QWORD*)&v22 + 1) = v15;
  *((_QWORD*)&v20 + 1) = v15;
  v45 = v20;
  v46 = v22;
  game_zview_d163f0((void*)(v47_.v47), v19, &v46, &v45, 261, 0,
                    *(float*)(*(_QWORD*)(v14 + 8) + 528LL));
  if (v47_.v49 == 1) {
    v23 = v47_.v48 + 0x1.0000000000000p+1f;
    if (*(float*)(a1 + 172) >= (float)(v47_.v48 + 0x1.0000000000000p+1f)) {
      v23 = *(float*)(a1 + 172);
    }
    *(float*)(a1 + 172) = v23;
  }
  v24 = *v18;
  *(float*)&v25 = *(float*)(a1 + 20) +
                  (float)((float)(*(float*)(a1 + 60) - *(float*)(a1 + 20)) *
                          0x1.0000000000000p-1f);
  *(float*)&v26 = *(float*)&v25;
  DWORD1(v26) = 1128792064;
  v27 = *(_QWORD*)(a1 + 8);
  DWORD1(v25) = -1027080192;
  *((_QWORD*)&v26 + 1) = COERCE_UNSIGNED_INT(
      *(float*)(a1 + 24) +
      (float)((float)(*(float*)(a1 + 64) - *(float*)(a1 + 24)) *
              0x1.0000000000000p-1f));
  *((_QWORD*)&v25 + 1) = *((_QWORD*)&v26 + 1);
  v45 = v25;
  v46 = v26;
  game_zview_d163f0((void*)(v47_.v47), v24, &v46, &v45, 261, 0,
                    *(float*)(*(_QWORD*)(v27 + 8) + 528LL));
  if (v47_.v49 == 1) {
    v28 = v47_.v48 + 0x1.0000000000000p+1f;
    if (*(float*)(a1 + 172) >= (float)(v47_.v48 + 0x1.0000000000000p+1f)) {
      v28 = *(float*)(a1 + 172);
    }
    *(float*)(a1 + 172) = v28;
  }
  v29 = *v18;
  *(float*)&v30 =
      *(float*)(a1 + 60) +
      (float)((float)(*(float*)(a1 + 100) - *(float*)(a1 + 60)) * 0x0.0p+0f);
  *(float*)&v31 = *(float*)&v30;
  DWORD1(v31) = 1128792064;
  v32 = *(_QWORD*)(a1 + 8);
  DWORD1(v30) = -1027080192;
  *((_QWORD*)&v31 + 1) = COERCE_UNSIGNED_INT(
      *(float*)(a1 + 64) +
      (float)((float)(*(float*)(a1 + 104) - *(float*)(a1 + 64)) * 0x0.0p+0f));
  *((_QWORD*)&v30 + 1) = *((_QWORD*)&v31 + 1);
  v45 = v30;
  v46 = v31;
  game_zview_d163f0((void*)(v47_.v47), v29, &v46, &v45, 261, 0,
                    *(float*)(*(_QWORD*)(v32 + 8) + 528LL));
  if (v47_.v49 == 1) {
    v33 = v47_.v48 + 0x1.0000000000000p+1f;
    if (*(float*)(a1 + 172) >= (float)(v47_.v48 + 0x1.0000000000000p+1f)) {
      v33 = *(float*)(a1 + 172);
    }
    *(float*)(a1 + 172) = v33;
  }
  v34 = *v18;
  *(float*)&v35 = *(float*)(a1 + 60) +
                  (float)((float)(*(float*)(a1 + 100) - *(float*)(a1 + 60)) *
                          0x1.0000000000000p-1f);
  *(float*)&v36 = *(float*)&v35;
  DWORD1(v36) = 1128792064;
  v37 = *(_QWORD*)(a1 + 8);
  DWORD1(v35) = -1027080192;
  *((_QWORD*)&v36 + 1) = COERCE_UNSIGNED_INT(
      *(float*)(a1 + 64) +
      (float)((float)(*(float*)(a1 + 104) - *(float*)(a1 + 64)) *
              0x1.0000000000000p-1f));
  *((_QWORD*)&v35 + 1) = *((_QWORD*)&v36 + 1);
  v45 = v35;
  v46 = v36;
  game_zview_d163f0((void*)(v47_.v47), v34, &v46, &v45, 261, 0,
                    *(float*)(*(_QWORD*)(v37 + 8) + 528LL));
  if (v47_.v49 == 1) {
    v38 = v47_.v48 + 0x1.0000000000000p+1f;
    if (*(float*)(a1 + 172) >= (float)(v47_.v48 + 0x1.0000000000000p+1f)) {
      v38 = *(float*)(a1 + 172);
    }
    *(float*)(a1 + 172) = v38;
  }
  v39 = *v18;
  *(float*)&v40 =
      *(float*)(a1 + 60) + (float)(*(float*)(a1 + 100) - *(float*)(a1 + 60));
  *(float*)&v41 = *(float*)&v40;
  DWORD1(v41) = 1128792064;
  v42 = *(_QWORD*)(a1 + 8);
  DWORD1(v40) = -1027080192;
  *((_QWORD*)&v41 + 1) = COERCE_UNSIGNED_INT(
      *(float*)(a1 + 64) + (float)(*(float*)(a1 + 104) - *(float*)(a1 + 64)));
  *((_QWORD*)&v40 + 1) = *((_QWORD*)&v41 + 1);
  v45 = v40;
  v46 = v41;
  result = X8CALL_X0(
      void*, game_zview_d163f0((void*)(v47_.v47), v39, &v46, &v45, 261, 0,
                               *(float*)(*(_QWORD*)(v42 + 8) + 528LL)));
  if (v47_.v49 == 1) {
    v44 = v47_.v48 + 0x1.0000000000000p+1f;
    if (*(float*)(a1 + 172) >= (float)(v47_.v48 + 0x1.0000000000000p+1f)) {
      v44 = *(float*)(a1 + 172);
    }
    *(float*)(a1 + 172) = v44;
  }
  return result;
}

void CharacterController_d3f410(__int64 a1, int a2, long double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  double v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  bool v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    float32x2_t v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    char v54;
  } v46_;

  v3 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 152) = a2;
  *(_BYTE*)(v3 + 289) = (a2 & 6) != 2;
  v5 = *(_DWORD*)(a1 + 152);
  switch (v5) {
  case 4u:
    v21 = GameHr_d1cbc0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                   344LL),
        2360843, a3);
    *(float*)&v21 = *(float*)&v21 / 0x1.e000000000000p+5f;
    v22 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)(a1 + 160) = LODWORD(v21);
    *(float*)(a1 + 164) = *(float*)&v21 * 0x1.3333340000000p-2f;
    HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(v22 + 8) + 8LL), 1);
    v23 = *(_QWORD*)(a1 + 8);
    if ((*(_BYTE*)(v23 + 196) & 1) == 0) {
      *(_BYTE*)(v23 + 196) = 1;
      *(_QWORD*)(v23 + 200) = 0;
      *(_QWORD*)(v23 + 208) = 0;
      *(_DWORD*)(v23 + 216) = 0;
      *(_QWORD*)(v23 + 220) = 1065353216;
      if (*(_BYTE*)(v23 + 232) == 1) {
        *(_BYTE*)(v23 + 232) = 0;
      }
      *(_BYTE*)(v23 + 240) = 0;
      *(_DWORD*)(v23 + 244) = 0;
      *(_DWORD*)(v23 + 236) = -1027080192;
      if (*(_BYTE*)(v23 + 256) == 1) {
        *(_BYTE*)(v23 + 256) = 0;
      }
      if (*(_BYTE*)(v23 + 264) == 1) {
        *(_BYTE*)(v23 + 264) = 0;
      }
      if (*(_BYTE*)(v23 + 269) == 1) {
        *(_BYTE*)(v23 + 269) = 0;
      }
      if (*(_BYTE*)(v23 + 271) == 1) {
        *(_BYTE*)(v23 + 271) = 0;
      }
      if (*(_BYTE*)(v23 + 273) == 1) {
        *(_BYTE*)(v23 + 273) = 0;
      }
      *(_DWORD*)(v23 + 276) = 0;
      *(_WORD*)(v23 + 280) = 256;
      v23 = *(_QWORD*)(a1 + 8);
    }
    *(_DWORD*)(v23 + 128) |= 0x10u;
    if (*(_BYTE*)(a1 + 16) != 1) {
      goto LABEL_57;
    }
    v24 = (__int64*)GameData_212dc38[0];
    game_zview_d1fdc0((void*)((__int64)&v46_.v46),
                      *(_QWORD*)GameData_212dc38[0]);
    v25 = *v24;
    HIDWORD(v46_.v48) = 1056964608;
    LODWORD(v46_.v50) = 1065353216;
    LOBYTE(v46_.v49) = 1;
    BYTE1(v46_.v52) = 1;
    if (*(int*)(v25 + 1048) <= 0) {
      if (BYTE4(v46_.v51) != 1 || (v46_.v52 & 1) != 0 ||
          ((v28 = *(_DWORD*)(v25 + 872), v29 = *(_DWORD*)(v25 + 956),
            *(_BYTE*)(v25 + 904) != 0)
               ? (LOBYTE(v29) = *(_BYTE*)(v25 + 876))
               : (v28 = *(_DWORD*)(v25 + 952)),
           (unsigned __int8)v29 == 1 ? (v30 = v28 == (_DWORD)v46_.v51)
                                     : (v30 = false),
           !v30)) {
        v31 = LANES64(v46_.v46).n64_u64[0];
        if (*(_BYTE*)(v25 + 904) != 0) {
          v32 = v46_.v47;
          if (v46_.v47 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v46_.v47 + 8),
                                      1u, memory_order_relaxed);
          }
          v33 = *(_QWORD*)(v25 + 840);
          *(_QWORD*)(v25 + 832) = v31;
          *(_QWORD*)(v25 + 840) = v32;
          if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
            std___1___shared_weak_count___release_weak_alt3(v33);
          }
          v34 = v46_.v50;
          *(_QWORD*)(v25 + 872) = v46_.v51;
          v35 = v46_.v52;
          v36 = v46_.v53;
          *(_QWORD*)(v25 + 864) = v34;
          *(_QWORD*)(v25 + 880) = v35;
          LOBYTE(v35) = v46_.v54;
          *(_QWORD*)(v25 + 888) = v36;
          *(_BYTE*)(v25 + 896) = v35;
          v37 = v46_.v49;
          *(_QWORD*)(v25 + 848) = v46_.v48;
          *(_QWORD*)(v25 + 856) = v37;
        }
        else {
          v41 = v46_.v47;
          *(float32x2_t*)(v25 + 832) = v46_.v46;
          *(_QWORD*)(v25 + 840) = v41;
          if (v41 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                      memory_order_relaxed);
          }
          v42 = v46_.v50;
          *(_QWORD*)(v25 + 872) = v46_.v51;
          v43 = v46_.v52;
          v44 = v46_.v53;
          *(_QWORD*)(v25 + 864) = v42;
          *(_QWORD*)(v25 + 880) = v43;
          LOBYTE(v43) = v46_.v54;
          *(_QWORD*)(v25 + 888) = v44;
          *(_BYTE*)(v25 + 896) = v43;
          v45 = v46_.v49;
          *(_QWORD*)(v25 + 848) = v46_.v48;
          *(_QWORD*)(v25 + 856) = v45;
          *(_BYTE*)(v25 + 904) = 1;
        }
      }
    }
    v26 = v46_.v47;
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 128LL) |= 0x10u;
    if (v26 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_57;
    }
    v27 = *(_QWORD*)v26;
    v14 = v26;
    goto LABEL_56;
  case 1u:
    v7 = *(_QWORD*)(a1 + 8);
    *(float*)(a1 + 176) = (float)(*(float*)(a1 + 172) - *(float*)(a1 + 168)) +
                          0x1.4000000000000p+3f;
    v8 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 8LL);
    if (*(_BYTE*)(v8 + 224) != 0) {
      v9 = *(_QWORD*)(v8 + 232);
      *(_BYTE*)(v8 + 224) = 0;
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 104);
        if (*(_BYTE*)(v10 + 16) == 1) {
          v11 = *(_BYTE*)(v10 + 17);
          *(_BYTE*)(v10 + 16) = 0;
          *(_BYTE*)(v10 + 17) = v11 | 2;
          *(_BYTE*)(v10 + 18) |= 2u;
          *(_BYTE*)(v10 + 19) |= 2u;
          *(_BYTE*)(v10 + 20) |= 2u;
          v12 = *(_BYTE**)(v10 + 8);
          v12[632] = 0;
          v12[664] = 0;
          v12[696] = 0;
          v12[728] = 0;
          (*(void (**)(__int64))(*(_QWORD*)v10 + 72LL))(v10);
        }
      }
      game_zview_CharacterAnim_CommitReduceFlag_alt1(*(_QWORD*)(v8 + 344));
    }
    if (*(_BYTE*)(a1 + 16) != 1) {
      goto LABEL_57;
    }
    v13 = *(_QWORD*)(a1 + 8);
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    *(_QWORD*)(v14 + 8) = 0;
    v15 = (atomic_ullong*)(v14 + 8);
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)v14 = GameData_1fdae80;
    v16 = *(_QWORD*)(v13 + 8);
    *(_BYTE*)(v14 + 48) = 0;
    *(_BYTE*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 32) = v16;
    v17 = v14 + 32;
    *(_BYTE*)(v14 + 96) = 1;
    v18 = GameData_21f3cb0;
    if (*(int*)(GameData_21f3cb0 + 1048) <= 0) {
      if (*(_BYTE*)(GameData_21f3cb0 + 904) == 1) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
        *(_QWORD*)(v18 + 832) = v17;
        v19 = *(_QWORD*)(v18 + 840);
        *(_QWORD*)(v18 + 840) = v14;
        if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v20 = v14;
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak_alt3(v19);
          v14 = v20;
        }
        *(_BYTE*)(v18 + 856) = 1;
        *(_BYTE*)(v18 + 860) = 0;
        *(_DWORD*)(v18 + 872) = 0;
        *(_BYTE*)(v18 + 876) = 0;
        *(_WORD*)(v18 + 880) = 0;
        *(_BYTE*)(v18 + 884) = 0;
        *(_BYTE*)(v18 + 888) = 0;
        *(_BYTE*)(v18 + 892) = 0;
        *(_BYTE*)(v18 + 896) = 0;
      }
      else {
        *(_QWORD*)(GameData_21f3cb0 + 832) = v17;
        *(_QWORD*)(v18 + 840) = v14;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
        *(_BYTE*)(v18 + 856) = 1;
        *(_BYTE*)(v18 + 860) = 0;
        *(_DWORD*)(v18 + 872) = 0;
        *(_BYTE*)(v18 + 876) = 0;
        *(_WORD*)(v18 + 880) = 0;
        *(_BYTE*)(v18 + 884) = 0;
        *(_BYTE*)(v18 + 888) = 0;
        *(_BYTE*)(v18 + 892) = 0;
        *(_BYTE*)(v18 + 896) = 0;
        *(_BYTE*)(v18 + 904) = 1;
      }
      *(_QWORD*)(v18 + 848) = 0x3F00000000000007LL;
      *(_QWORD*)(v18 + 864) = 0x3F8000003F000000LL;
    }
    if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v27 = *(_QWORD*)v14;
      v26 = v14;
    LABEL_56:
      (*(void (**)(__int64))(v27 + 16))(v14);
      std___1___shared_weak_count___release_weak_alt3(v26);
    }
  LABEL_57:
    v5 = *(_DWORD*)(a1 + 152);
    break;
  case 0u:
    *(_DWORD*)(a1 + 160) = 1045220557;
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  LABEL_59:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    v38 = *(_QWORD**)(v6 + 344);
    LOBYTE(v46_.v48) = 0;
    BYTE4(v46_.v48) = 0;
    LOBYTE(v46_.v49) = 0;
    BYTE4(v46_.v49) = 0;
    LOBYTE(v46_.v50) = 0;
    BYTE4(v46_.v50) = 0;
    v46_.v53 = 0;
    LODWORD(v46_.v52) = 256;
    *(_DWORD*)((char*)&v46_.v52 + 3) = 0;
    v46_.v47 = GameData_21a60e0;
    v46_.v51 = 0x3F8000003F800000LL;
    LANES64(v46_.v46).n64_u32[0] = 2320462;
    *(_QWORD*)(a1 + 208) = CharacterModel_d198c0_alt1(v38, &v46_.v46, 0, 0);
    return;
  default:
    break;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  if (v5 < 4) {
    goto LABEL_59;
  }
  if (v5 == 4) {
    v39 = *(_QWORD*)(v6 + 344);
    if (*(_QWORD*)(v39 + 352) == *(_QWORD*)(a1 + 208)) {
      *(_BYTE*)(v39 + 345) = 0;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    v40 = *(_QWORD**)(v6 + 344);
    LOBYTE(v46_.v48) = 0;
    BYTE4(v46_.v48) = 0;
    LOBYTE(v46_.v49) = 0;
    BYTE4(v46_.v49) = 0;
    LOBYTE(v46_.v50) = 0;
    BYTE4(v46_.v50) = 0;
    v46_.v53 = 0;
    LODWORD(v46_.v52) = 0;
    *(_DWORD*)((char*)&v46_.v52 + 3) = 0;
    v46_.v47 = GameData_21a60e0;
    v46_.v51 = 0x3F8000003F800000LL;
    LANES64(v46_.v46).n64_u32[0] = 2360843;
    *(_QWORD*)(a1 + 200) = CharacterModel_d198c0_alt1(v40, &v46_.v46, 0, 0);
  }
}

void CharacterController_StateJump_Unknown5(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  bool v20;
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
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    char v41;
  } v33_;

  if (*(_BYTE*)(a1 + 16) == 1 && *(_BYTE*)(a1 + 17) != 0) {
    *(_BYTE*)(a1 + 17) = 0;
    v2 = GameData_21d96b8;
    v3 = *(_DWORD*)(GameData_21d96b8 + 40) - 1;
    *(_DWORD*)(GameData_21d96b8 + 40) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 32) + 8LL))(v2 + 32);
    }
  }
  if (*(_BYTE*)(a1 + 16) == 1) {
    v4 = GameData_212dc38[0];
    game_zview_d1fdc0((void*)((__int64)&v33_.v33),
                      *(_QWORD*)GameData_212dc38[0]);
    v5 = *(_QWORD*)v4;
    if (*(int*)(*(_QWORD*)v4 + 1048LL) <= 0) {
      if (BYTE4(v33_.v38) != 1 || (v33_.v39 & 1) != 0 ||
          ((v18 = *(_DWORD*)(v5 + 872), v19 = *(_DWORD*)(v5 + 956),
            *(_BYTE*)(v5 + 904) != 0)
               ? (LOBYTE(v19) = *(_BYTE*)(v5 + 876))
               : (v18 = *(_DWORD*)(v5 + 952)),
           (unsigned __int8)v19 == 1 ? (v20 = v18 == (_DWORD)v33_.v38)
                                     : (v20 = false),
           !v20)) {
        v21 = v33_.v33;
        if (*(_BYTE*)(v5 + 904) != 0) {
          v22 = v33_.v34;
          if (v33_.v34 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v33_.v34 + 8),
                                      1u, memory_order_relaxed);
          }
          v23 = *(_QWORD*)(v5 + 840);
          *(_QWORD*)(v5 + 832) = v21;
          *(_QWORD*)(v5 + 840) = v22;
          if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
            std___1___shared_weak_count___release_weak(v23);
          }
          v24 = v33_.v37;
          *(_QWORD*)(v5 + 872) = v33_.v38;
          v25 = v33_.v39;
          v26 = v33_.v40;
          *(_QWORD*)(v5 + 864) = v24;
          *(_QWORD*)(v5 + 880) = v25;
          LOBYTE(v25) = v33_.v41;
          *(_QWORD*)(v5 + 888) = v26;
          *(_BYTE*)(v5 + 896) = v25;
          v27 = v33_.v36;
          *(_QWORD*)(v5 + 848) = v33_.v35;
          *(_QWORD*)(v5 + 856) = v27;
        }
        else {
          v28 = v33_.v34;
          *(_QWORD*)(v5 + 832) = v33_.v33;
          *(_QWORD*)(v5 + 840) = v28;
          if (v28 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                      memory_order_relaxed);
          }
          v29 = v33_.v37;
          *(_QWORD*)(v5 + 872) = v33_.v38;
          v30 = v33_.v39;
          v31 = v33_.v40;
          *(_QWORD*)(v5 + 864) = v29;
          *(_QWORD*)(v5 + 880) = v30;
          LOBYTE(v30) = v33_.v41;
          *(_QWORD*)(v5 + 888) = v31;
          *(_BYTE*)(v5 + 896) = v30;
          v32 = v33_.v36;
          *(_QWORD*)(v5 + 848) = v33_.v35;
          *(_QWORD*)(v5 + 856) = v32;
          *(_BYTE*)(v5 + 904) = 1;
        }
      }
    }
    v6 = v33_.v34;
    if (v33_.v34 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  v7 = GameData_220b6f0;
  v8 = *(_DWORD*)(GameData_220b6f0 + 216) - 1;
  *(_DWORD*)(GameData_220b6f0 + 216) = v8;
  if (v8 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v7 + 208) + 8LL))(v7 + 208);
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + 289LL) = 1;
  v9 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v9 + 196) != 0) {
    *(_BYTE*)(v9 + 196) = 0;
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_DWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 220) = 1065353216;
    if (*(_BYTE*)(v9 + 232) == 1) {
      *(_BYTE*)(v9 + 232) = 0;
    }
    *(_BYTE*)(v9 + 240) = 0;
    *(_DWORD*)(v9 + 244) = 0;
    *(_DWORD*)(v9 + 236) = -1027080192;
    if (*(_BYTE*)(v9 + 256) == 1) {
      *(_BYTE*)(v9 + 256) = 0;
    }
    if (*(_BYTE*)(v9 + 264) == 1) {
      *(_BYTE*)(v9 + 264) = 0;
    }
    if (*(_BYTE*)(v9 + 269) == 1) {
      *(_BYTE*)(v9 + 269) = 0;
    }
    if (*(_BYTE*)(v9 + 271) == 1) {
      *(_BYTE*)(v9 + 271) = 0;
    }
    if (*(_BYTE*)(v9 + 273) == 1) {
      *(_BYTE*)(v9 + 273) = 0;
    }
    *(_DWORD*)(v9 + 276) = 0;
    *(_WORD*)(v9 + 280) = 256;
    v9 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_d12f00_alt1(v9);
  v10 = *(_QWORD*)(a1 + 8);
  v11 = *(__int64**)(*(_QWORD*)(v10 + 8) + 632LL);
  v12 = *((unsigned int*)v11 + 4);
  if ((v12 & 8) != 0) {
    v13 = v12 & 0xFFFFFFFFFFFFFFF7LL;
    v14 = *v11;
    *((_DWORD*)v11 + 4) = v13;
    v15 = ((__int64)*(int*)(v14 + 376) << 24) + (v13 << 20);
    if (*(_QWORD*)(v14 + 600) != 0) {
      ++v15;
    }
    v11[1] = v15;
    v10 = *(_QWORD*)(a1 + 8);
  }
  if (*(_BYTE*)(v10 + 724) == 1) {
    *(_BYTE*)(v10 + 724) = 0;
    v10 = *(_QWORD*)(a1 + 8);
  }
  v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 8) + 8LL) + 344LL);
  v17 = *(_QWORD*)(v16 + 352);
  if (v17 == *(_QWORD*)(a1 + 208)) {
    *(_BYTE*)(v16 + 345) = 0;
    v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                     344LL);
    v17 = *(_QWORD*)(v16 + 352);
  }
  if (v17 == *(_QWORD*)(a1 + 200)) {
    *(_DWORD*)(v16 + 328) = GameRoutine_d2cec0_alt1(-1511520286) - 1;
    *(_BYTE*)(v16 + 332) = 1;
  }
}

__int64 CharacterController_StateJump_Unknown4(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  float v6;
  float v7;
  int v8;
  float v9;
  float v10;
  float v11;
  _BOOL4 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  float v24;
  long double v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  _BOOL4 v33;
  bool v34;
  int v35;
  __int64 v36;
  float v37;
  int v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  int v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  bool v79;
  float v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  float v85;
  float v86;
  float v87;
  float v88;
  struct {
    __int64 v89;
    __int64 v90;
    __int64 v91;
  } v89_;
  __int64 v92;

  v2 = *(_QWORD*)(result + 8);
  LODWORD(a2) = *(_DWORD*)(result + 176);
  v3 = result;
  v4 = 0;
  v5 = *(_QWORD*)(v2 + 8);
  v6 = *(float*)(v5 + 528);
  v7 = *(float*)(*(_QWORD*)(v5 + 8) + 228LL);
  v8 = *(_DWORD*)(result + 152);
  v9 = *(float*)(result + 168) + (float)(*(float*)&a2 * v7);
  *(float*)(result + 168) = v9;
  if (v8 > 1) {
    if (v8 != 2) {
      if (v8 != 3) {
        if (v8 != 4) {
          goto LABEL_108;
        }
        v11 = *(float*)(result + 160);
        v10 = *(float*)(result + 164);
        *(_DWORD*)(result + 156) = 0;
        if (v11 <= 0x0.0p+0f) {
          v12 = true;
          if (v10 > 0x0.0p+0f) {
            goto LABEL_102;
          }
        }
        else {
          if (v10 > 0x0.0p+0f) {
            v12 = false;
          LABEL_102:
            if (v12 && (*(_QWORD*)(*(_QWORD*)((v51 = *(_QWORD*)(v3 + 8)) + 8) +
                                   32LL) != 0
                            ? (v52 = 5)
                            : (v52 = 0),
                        (*(_BYTE*)(v51 + 848) & 1) == 0)) {
              if (*(_BYTE*)(v51 + 28) != 1 || *(_DWORD*)(v51 + 24) != v52) {
                *(_DWORD*)(v51 + 32) = v52;
                *(_BYTE*)(v51 + 36) = 1;
              }
              v4 = 1;
              if ((*(_BYTE*)(v51 + 112) & 1) == 0 &&
                  (*(_BYTE*)(v51 + 113) & 1) != 0) {
                result = WaitRelease_cfa2a0_alt1(v51 + 16);
              }
            }
            else {
              v4 = 1;
            }
            goto LABEL_108;
          }
          v47 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 32LL);
          v48 = *(_QWORD*)(v47 + 16);
          v49 = 0;
          if (*(float*)(*(_QWORD*)(*(_QWORD*)(v48 + 8) + 8LL) + 228LL) >
                  0x0.0p+0f &&
              *(float*)(*(_QWORD*)(v48 + 504) + 80LL) <= 0x0.0p+0f &&
              *(float*)(v48 + 820) <= 0x0.0p+0f &&
              *(float*)(v47 + 384) <= 0x0.0p+0f) {
            v49 = *(_QWORD*)(v47 + 32);
          }
          v12 = sqrtf((float)(PSEUDO_UNFUSED(*((float*)&v49 + 1) *
                                             *((float*)&v49 + 1))) +
                      (float)(*(float*)&v49 * *(float*)&v49)) >
                0x1.3333340000000p-2f;
          if (v10 > 0x0.0p+0f) {
            goto LABEL_102;
          }
        }
        if ((*(_BYTE*)(result + 16) & 1) != 0 && *(_BYTE*)(result + 17) != 0) {
          *(_BYTE*)(result + 17) = 0;
          result = GameData_21d96b8;
          v50 = *(_DWORD*)(GameData_21d96b8 + 40) - 1;
          *(_DWORD*)(GameData_21d96b8 + 40) = v50;
          if (v50 == 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 32) + 8LL))(
                result + 32);
          }
        }
        goto LABEL_102;
      }
      v18 = *(float*)(result + 156);
      v19 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8LL) + 228LL));
      if (v18 <= 0x1.99999a0000000p-4f) {
        if (v18 >= 0x1.99999a0000000p-4f) {
          goto LABEL_28;
        }
        v18 = v18 + v19;
        if (v18 <= 0x1.99999a0000000p-4f) {
          goto LABEL_28;
        }
      }
      else {
        v18 = v18 - v19;
        if (v18 >= 0x1.99999a0000000p-4f) {
          goto LABEL_28;
        }
      }
      v18 = 0x1.99999a0000000p-4f;
    LABEL_28:
      *(float*)(result + 156) = v18;
      v89_.v89 = 0;
      v21 = *(_QWORD*)(v2 + 8);
      v22 = (__int64*)(v2 + 292);
      v23 = *(_QWORD*)(v21 + 8);
      v89_.v90 = 0;
      v89_.v91 = 0;
      v24 =
          *(float*)&a2 + (float)(*(float*)(v23 + 228) * -0x1.e000000000000p+4f);
      if (v24 < -0x1.9000000000000p+5f) {
        v24 = -0x1.9000000000000p+5f;
      }
      *(float*)(result + 176) = v24;
      v92 = *v22;
      result = (__int64)GameRoutine_d74b60(&v89_.v89, (float*)&v92,
                                           v6 + 0x1.47ae140000000p-7f);
      v26 = v89_.v89;
      if (v89_.v89 != v89_.v90) {
        v27 = 0;
        v28 = 0;
        v29 = v89_.v89;
        do {
          v30 = *(_DWORD*)(v29 + 24);
          v31 = *(_DWORD*)(v29 + 28);
          v29 += 40;
          v33 = v30 == *(_DWORD*)(v3 + 84) && v31 == *(_DWORD*)(v3 + 88);
          v34 = v30 == *(_DWORD*)(v3 + 124) && v31 == *(_DWORD*)(v3 + 128);
          v27 |= v33;
          v35 = v34;
          v28 |= v35;
        } while (v29 != v89_.v90);
        if ((v28 & ~v27 & 1) != 0) {
          LODWORD(v25) = *(_DWORD*)(*(_QWORD*)(v3 + 8) + 176LL);
          if (*(float*)(v3 + 168) <= *(float*)&v25) {
            result =
                (__int64)CharacterController_d3f410_alt2((__int64*)v3, 4, v25);
            v26 = v89_.v89;
          }
        }
      }
      if (v26 != 0) {
        v89_.v90 = v26;
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v36 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
      }
      goto LABEL_89;
    }
    v15 = *(float*)(result + 156);
    v16 = *(float*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8LL) + 228LL);
    if ((*(_BYTE*)(result + 188) & 1) != 0) {
      v17 = fabsf(v16);
      if (v15 <= 0x1.6666660000000p-1f) {
        if (v15 >= 0x1.6666660000000p-1f) {
          goto LABEL_68;
        }
        v15 = v15 + v17;
        if (v15 <= 0x1.6666660000000p-1f) {
          goto LABEL_68;
        }
      }
      else {
        v15 = v15 - v17;
        if (v15 >= 0x1.6666660000000p-1f) {
          goto LABEL_68;
        }
      }
      v15 = 0x1.6666660000000p-1f;
    LABEL_68:
      *(float*)(result + 156) = v15;
      goto LABEL_74;
    }
    v20 = fabsf(v16 + v16);
    if (v15 <= 0x1.0000000000000p+0f) {
      if (v15 >= 0x1.0000000000000p+0f ||
          (v15 = v15 + v20) <= 0x1.0000000000000p+0f) {
      LABEL_72:
        *(float*)(result + 156) = v15;
        if (v15 < 0x1.0000000000000p+0f) {
          goto LABEL_74;
        }
        goto LABEL_73;
      }
    }
    else {
      v15 = v15 - v20;
      if (v15 >= 0x1.0000000000000p+0f) {
        goto LABEL_72;
      }
    }
    *(_DWORD*)(result + 156) = 1065353216;
  LABEL_73:
    *(_BYTE*)(result + 188) = 1;
  LABEL_74:
    v39 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8LL) + 228LL) *
                0x1.4000000000000p+5f);
    if (*(float*)&a2 <= 0x0.0p+0f) {
      if (*(float*)&a2 >= 0x0.0p+0f) {
        goto LABEL_80;
      }
      *(float*)&a2 = *(float*)&a2 + v39;
      if (*(float*)&a2 <= 0x0.0p+0f) {
        goto LABEL_80;
      }
    }
    else {
      *(float*)&a2 = *(float*)&a2 - v39;
      if (*(float*)&a2 >= 0x0.0p+0f) {
        goto LABEL_80;
      }
    }
    *(_QWORD*)&a2 = 0;
  LABEL_80:
    *(_DWORD*)(result + 176) = LODWORD(a2);
    v40 = *(float*)(v2 + 588);
    v41 = *(float*)(v2 + 584);
    v42 = *(float*)(v2 + 292);
    v43 = *(float*)(v2 + 296);
    v44 = (float)(PSEUDO_UNFUSED(v40 * v40)) + (float)(v41 * v41);
    if (v44 > 0x0.0p+0f) {
      if (v41 != 0x0.0p+0f || v40 != 0x0.0p+0f) {
        v45 = sqrtf(v44);
        v41 = v41 / v45;
        v40 = v40 / v45;
      }
      v42 = (float)(PSEUDO_UNFUSED(v6 * v41)) + v42;
      v43 = (float)(PSEUDO_UNFUSED(v6 * v40)) + v43;
    }
    *(float*)&a2 =
        (float)(v43 + 0x1.4000000000000p+10f) * 0x1.99999a0000000p-3f;
    if ((int)(float)(PSEUDO_UNFUSED((float)(v42 + 0x1.4000000000000p+10f) *
                                    0x1.99999a0000000p-3f)) -
                256 !=
            *(_DWORD*)(result + 124) ||
        (int)*(float*)&a2 - 256 != *(_DWORD*)(result + 128)) {
      goto LABEL_89;
    }
    v38 = 3;
    goto LABEL_91;
  }
  if (v8 != 0) {
    if (v8 != 1) {
      goto LABEL_108;
    }
    v13 = *(float*)(result + 156);
    v14 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8LL) + 228LL));
    if (v13 <= 0x1.0000000000000p-1f) {
      if (v13 >= 0x1.0000000000000p-1f ||
          (v13 = v13 + v14) <= 0x1.0000000000000p-1f) {
      LABEL_57:
        *(float*)(result + 156) = v13;
        v37 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8LL) + 228LL) *
                    0x1.4000000000000p+4f);
        if (*(float*)&a2 <= 0x1.8000000000000p+2f) {
          if (*(float*)&a2 >= 0x1.8000000000000p+2f) {
            goto LABEL_63;
          }
          *(float*)&a2 = *(float*)&a2 + v37;
          if (*(float*)&a2 <= 0x1.8000000000000p+2f) {
            goto LABEL_63;
          }
        }
        else {
          *(float*)&a2 = *(float*)&a2 - v37;
          if (*(float*)&a2 >= 0x1.8000000000000p+2f) {
            goto LABEL_63;
          }
        }
        LODWORD(a2) = COERCE_UNSIGNED_INT((float)(0x1.8000000000000p+2f));
      LABEL_63:
        *(_DWORD*)(result + 176) = LODWORD(a2);
        LODWORD(a2) = *(_DWORD*)(result + 172);
        if (v9 < *(float*)&a2) {
        LABEL_89:
          v4 = 0;
          goto LABEL_108;
        }
        v38 = 2;
      LABEL_91:
        result =
            (__int64)CharacterController_d3f410_alt2((__int64*)result, v38, a2);
        v4 = 0;
        goto LABEL_108;
      }
    }
    else {
      v13 = v13 - v14;
      if (v13 >= 0x1.0000000000000p-1f) {
        goto LABEL_57;
      }
    }
    v13 = 0x1.0000000000000p-1f;
    goto LABEL_57;
  }
  LODWORD(a2) = *(_DWORD*)(result + 160);
  v4 = 1;
  *(_DWORD*)(result + 156) = 0;
  if (*(float*)&a2 <= 0x0.0p+0f) {
    result = (__int64)CharacterController_d3f410_alt2((__int64*)result, 1, a2);
  }
LABEL_108:
  if ((unsigned int)(*(_DWORD*)(v3 + 152) - 1) >= 2) {
    v58 = *(float*)(v3 + 180);
    v59 = *(float*)(v3 + 184);
    v53 = *(_QWORD*)(v3 + 8);
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire(&GameData_22110b8);
      if ((_DWORD)result != 0) {
        GameData_22110ac = 0;
        result = __cxa_guard_release(&GameData_22110b8);
      }
    }
    v53 = *(_QWORD*)(v3 + 8);
    if (*(_BYTE*)(v3 + 16) == 1) {
      v54 = *(_QWORD*)(*(_QWORD*)(v53 + 8) + 32LL);
      v55 = *(_QWORD*)(v54 + 16);
      v56 = 0;
      if (*(float*)(*(_QWORD*)(*(_QWORD*)(v55 + 8) + 8LL) + 228LL) >
              0x0.0p+0f &&
          *(float*)(*(_QWORD*)(v55 + 504) + 80LL) <= 0x0.0p+0f &&
          *(float*)(v55 + 820) <= 0x0.0p+0f &&
          *(float*)(v54 + 384) <= 0x0.0p+0f) {
        v56 = *(_QWORD*)(v54 + 32);
      }
      v57 = v56;
    }
    else {
      v57 = GameData_22110ac;
    }
    v60 = *(float*)(v53 + 364);
    v61 = 0x1.0000000000000p+0f;
    v62 = *(float*)(v3 + 180) +
          (float)(PSEUDO_UNFUSED((float)(*(float*)&v57 * v60) *
                                 0x1.47ae140000000p-5f));
    v63 = (float)(PSEUDO_UNFUSED((float)(*((float*)&v57 + 1) * v60) *
                                 0x1.47ae140000000p-5f)) +
          *(float*)(v3 + 184);
    v64 = *(float*)(v3 + 192);
    v65 = *(unsigned __int8*)(v3 + 140);
    if ((float)(v64 / 0x1.3333340000000p-1f) <= 0x1.0000000000000p+0f) {
      v61 = v64 / 0x1.3333340000000p-1f;
    }
    v66 = 0x0.0p+0f;
    if ((float)(v64 / 0x1.3333340000000p-1f) >= 0x0.0p+0f) {
      v66 = v61;
    }
    v67 = (float)(0x1.4000000000000p+1f - v6) * (float)(v66 * v66);
    v58 = fminf(fmaxf(v62, -v67), v67);
    v59 = fminf(fmaxf(v63, -v67), v67);
    *(float*)(v3 + 180) = v58;
    *(float*)(v3 + 184) = v59;
    if (v65 == 1) {
      *(_DWORD*)(v3 + 180) = 0;
      v58 = 0x0.0p+0f;
    }
    else {
      v59 = 0x0.0p+0f;
      *(_DWORD*)(v3 + 184) = 0;
    }
    *(float*)(v3 + 192) =
        v64 + *(float*)(*(_QWORD*)(*(_QWORD*)(v53 + 8) + 8LL) + 228LL);
  }
  v68 = *(float*)(v3 + 144);
  v69 = *(float*)(v3 + 148);
  *(_BYTE*)(v53 + 604) = v4;
  v70 = v68 + v58;
  v71 = v69 + v59;
  v72 = v70 - *(float*)(v53 + 292);
  v73 = v71 - *(float*)(v53 + 296);
  *(float*)(*(_QWORD*)(v3 + 8) + 600LL) =
      *(float*)(*(_QWORD*)(v3 + 8) + 364LL) * *(float*)(v3 + 156);
  v74 = sqrtf((float)(PSEUDO_UNFUSED(v73 * v73)) + (float)(v72 * v72));
  if (v72 != 0x0.0p+0f || v73 != 0x0.0p+0f) {
    v72 = v72 / v74;
    v73 = v73 / v74;
  }
  v75 = *(_QWORD*)(v3 + 8);
  *(float*)(v75 + 584) = v72;
  *(float*)(v75 + 588) = v73;
  v76 = (float)(v6 + 0x1.0000000000000p+1f) - v6;
  if (v76 == 0x0.0p+0f) {
    v80 = 0x0.0p+0f;
  }
  else {
    v77 = (float)(v74 - v6) / v76;
    v78 = 0x1.0000000000000p+0f;
    if (v77 <= 0x1.0000000000000p+0f) {
      v78 = v77;
    }
    v79 = v77 < 0x0.0p+0f;
    v80 = 0x0.0p+0f;
    if (!v79) {
      v80 = v78;
    }
  }
  *(float*)(*(_QWORD*)(v3 + 8) + 616LL) = 0x1.0000000000000p+0f - v80;
  v81 = *(_QWORD*)(v3 + 8);
  *(float*)(v81 + 608) = v70;
  *(float*)(v81 + 612) = v71;
  v82 = *(_DWORD*)(v3 + 168);
  v83 = *(_QWORD*)(v3 + 8);
  *(_BYTE*)(v83 + 724) = 1;
  *(_DWORD*)(v83 + 720) = v82;
  v84 = *(_QWORD*)(v3 + 8);
  v85 = *(float*)(v3 + 160);
  v86 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v84 + 8) + 8LL) + 228LL));
  if (v85 > 0x0.0p+0f) {
    v85 = v85 - v86;
    if (v85 >= 0x0.0p+0f) {
      goto LABEL_143;
    }
  LABEL_142:
    v85 = 0x0.0p+0f;
    goto LABEL_143;
  }
  if (v85 < 0x0.0p+0f) {
    v85 = v85 + v86;
    if (v85 > 0x0.0p+0f) {
      goto LABEL_142;
    }
  }
LABEL_143:
  *(float*)(v3 + 160) = v85;
  v87 = *(float*)(v3 + 164);
  v88 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(v84 + 8) + 8LL) + 228LL));
  if (v87 > 0x0.0p+0f) {
    v87 = v87 - v88;
    if (v87 >= 0x0.0p+0f) {
      goto LABEL_149;
    }
  }
  else if (v87 >= 0x0.0p+0f || (v87 = v87 + v88) <= 0x0.0p+0f) {
  LABEL_149:
    *(float*)(v3 + 164) = v87;
    return result;
  }
  v87 = 0x0.0p+0f;
  goto LABEL_149;
}

__int64 CharacterController_d40860(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4)
{
  float* v4;
  float v9;
  int v10;
  float v11;
  __int64 result;
  int v13;
  float v16;
  int v17;
  int v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v29;
  float v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  int v36;
  float v37;
  float v38;
  int v39;
  float v40;
  int v41;
  int v42;
  int v44;
  int v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  _QWORD v52[2];
  __int64 v53;
  __int128 v54;

  v4 = *(float**)(a1 + 8);
  v9 = v4[157];
  if (v9 > 0.8f) {
    v10 = 1;
    goto LABEL_19;
  }
  v11 = v4[156];
  result = 0;
  if (v11 >= -0.8f) {
    v13 = 0;
  }
  else {
    v13 = 2;
  }
  if (v11 > 0.8f) {
    v13 = 3;
  }
  if (v9 >= -0.8f) {
    v10 = v13;
  }
  else {
    v10 = 0;
  }
  if (v9 < -0.8f || v11 > 0.8f || v11 < -0.8f) {
  LABEL_19:
    v16 = v4[73];
    *((_QWORD*)&v54 + 1) = 0;
    v52[0] = 0x4020000040200000LL;
    v52[1] = 0;
    v53 = 0x40A0000040A00000LL;
    v17 = (int)(float)((float)(v16 + 1280.0f) * 0.2f);
    v18 = v17 - 256;
    v19 = (int)(float)((float)(v4[74] + 1280.0f) * 0.2f);
    LODWORD(v54) = v17 - 256;
    *(_QWORD*)((char*)&v54 + 4) = (unsigned int)(v19 - 256);
    if (((v17 - 256) | (v19 - 256)) != 0) {
      DWORD2(v54) = v17 - 256;
      HIDWORD(v54) = v19 - 256;
      v25 = (float)((float)((float)v17 * 5.0f) + 2.5f) + -1280.0f;
      v23 = v25 + 2.5f;
      v20 = (float)((float)((float)v19 * 5.0f) + 2.5f) + -1280.0f;
      v24 = v25 + -2.5f;
      v21 = v20 + -2.5f;
      v22 = v20 + 2.5f;
      *(float*)v52 = v25;
      *((float*)v52 + 1) = v20;
      *(float*)&v52[1] = v25 + -2.5f;
      *((float*)&v52[1] + 1) = v20 + -2.5f;
      *(float*)&v53 = v25 + 2.5f;
      *((float*)&v53 + 1) = v20 + 2.5f;
    }
    else {
      v20 = 2.5f;
      v21 = 0.0f;
      v22 = 5.0f;
      v23 = 5.0f;
      v24 = 0.0f;
      v25 = 2.5f;
    }
    if ((GameRoutine_d744b0(v52, (unsigned int)v10) & 1) != 0) {
      v26 = *(_QWORD*)(a1 + 8);
      v27 = *(float*)(v26 + 292);
      if (v27 >= v24 && v27 <= v23) {
        v29 = *(float*)(v26 + 296);
        if (v29 >= v21 && v29 <= v22) {
          if (v10 > 1) {
            if (v10 == 2) {
              if (v27 <= (float)(v24 + 2.0f)) {
                goto LABEL_43;
              }
            }
            else if (v27 >= (float)(v23 + -2.0f)) {
            LABEL_43:
              v31 = 0.0f;
              v32 = 0.0f;
              *(float*)a2 = v25;
              *(float*)(a2 + 4) = v20;
              *(float*)(a2 + 8) = v24;
              *(float*)(a2 + 12) = v21;
              *(float*)(a2 + 16) = v23;
              *(float*)(a2 + 20) = v22;
              v33 = 0.0f;
              v34 = 0.0f;
              v35 = *((_QWORD*)&v54 + 1);
              v36 = v10 == 3;
              if (v10 == 2) {
                v36 = -1;
              }
              v37 = 0.0f;
              v38 = 0.0f;
              v39 = v10 == 1;
              v40 = 0.0f;
              if (v10 == 0) {
                v39 = -1;
              }
              *(_QWORD*)(a2 + 24) = v54;
              *(_QWORD*)(a2 + 32) = v35;
              v41 = v18 + v36;
              v42 = v19 - 256 + v39;
              if (v18 + v36 != -10000 || v42 != -10000) {
                v40 = (float)((float)((float)(v36 + v17) * 5.0f) + 2.5f) +
                      -1280.0f;
                v38 = (float)((float)((float)(v39 + v19) * 5.0f) + 2.5f) +
                      -1280.0f;
                v34 = v40 + -2.5f;
                v33 = v38 + -2.5f;
                v32 = v40 + 2.5f;
                v37 = v38 + 2.5f;
              }
              v44 = v41 + v36;
              *(float*)a3 = v40;
              *(float*)(a3 + 4) = v38;
              *(float*)(a3 + 8) = v34;
              *(float*)(a3 + 12) = v33;
              v45 = v42 + v39;
              v46 = 0.0f;
              v47 = 0.0f;
              v48 = 0.0f;
              *(float*)(a3 + 16) = v32;
              *(float*)(a3 + 20) = v37;
              *(_DWORD*)(a3 + 24) = v41;
              *(_DWORD*)(a3 + 28) = v42;
              v49 = 0.0f;
              v50 = 0.0f;
              *(_DWORD*)(a3 + 32) = v41;
              *(_DWORD*)(a3 + 36) = v42;
              if (v44 != -10000 || v45 != -10000) {
                v31 = (float)((float)((float)(v44 + 256) * 5.0f) + 2.5f) +
                      -1280.0f;
                v49 = (float)((float)((float)(v45 + 256) * 5.0f) + 2.5f) +
                      -1280.0f;
                v50 = v31 + -2.5f;
                v47 = v31 + 2.5f;
                v46 = v49 + -2.5f;
                v48 = v49 + 2.5f;
              }
              *(float*)a4 = v31;
              *(float*)(a4 + 4) = v49;
              *(float*)(a4 + 8) = v50;
              *(float*)(a4 + 12) = v46;
              *(float*)(a4 + 16) = v47;
              *(float*)(a4 + 20) = v48;
              *(_DWORD*)(a4 + 24) = v44;
              *(_DWORD*)(a4 + 28) = v45;
              *(_DWORD*)(a4 + 32) = v44;
              *(_DWORD*)(a4 + 36) = v45;
              return 1;
            }
          }
          else if (v10 != 0) {
            if (v29 >= (float)(v22 + -2.0f)) {
              goto LABEL_43;
            }
          }
          else if (v29 <= (float)(v21 + 2.0f)) {
            goto LABEL_43;
          }
        }
      }
    }
    return 0;
  }
  return result;
}

bool CharacterController_d41fa0(__int64 a1, _BYTE* a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v5;
  unsigned int v6;
  unsigned __int64 v7;
  __int64 v8;
  __int128 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  float v18;
  __int64* v19;
  bool v20;
  __int64 v21;
  __int128 v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  __int128 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float32x4_t v38;
  __int64 v39;
  float v40;
  __int64 v41;
  float32x4_t* v42;
  __int64 v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  float v55;
  int8x16_t v56;
  float v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  int8x16_t v62;
  int8x16_t v63;
  float v64;
  float32x4_t v65;
  float32x4_t v66;
  int8x16_t v67;
  float v68;
  float32x4_t v69;
  int8x16_t v70;
  float32x4_t* v71;
  float32x4_t v72;
  float32x4_t v73;
  int8x16_t v74;
  char v75;
  _DWORD* v76;
  __int64 v77;
  __int128 v78;
  int v79;
  __int128 v80;
  _DWORD* v81;
  int v82;
  int v83;
  _DWORD* v84;
  __int64 v85;
  __int128 v86;
  int v87;
  __int128 v88;
  _DWORD* v89;
  _DWORD* v90;
  __int128 v91;
  int v92;
  __int128 v93;
  _DWORD* v94;
  __int64* v95;
  __int64* v96;
  _DWORD* v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64* v100;
  __int64 v101;
  unsigned __int64 v102;
  __int128 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  int32x4_t v118;
  int32x2_t v119;
  __int128 v120;
  struct {
    float32x4_t* v121;
    float32x4_t* v122;
    __int64 v123;
  } v121_;
  struct {
    _BYTE v124[72];
    int v125;
    __int16 v126;
    char gap142_[30];
    int v127;
  } v124_;

  v2 = (__int64*)(a1 + 120);
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_DWORD*)(v5 + 576);
  v7 = *(_QWORD*)(v5 + 292);
  *(_QWORD*)(a1 + 128) = *(_QWORD*)(a1 + 120);
  v8 = *(_QWORD*)(a1 + 96);
  *(_BYTE*)(a1 + 248) = 1;
  *(_QWORD*)(a1 + 104) = v8;
  LOBYTE(v8) = *(_BYTE*)(a1 + 32);
  *(_DWORD*)(a1 + 80) = v7;
  *(_DWORD*)(a1 + 84) = v6;
  LANES64(v119).n64_u64[0] = v7;
  v9 = *(_OWORD*)(a1 + 80);
  *((_QWORD*)&v9 + 1) = HIDWORD(v7);
  *(_OWORD*)(a1 + 80) = v9;
  if ((v8 & 1) != 0) {
    CharacterController_d42d20(
        a1 + 120, *(char**)(a1 + 40), *(char**)(a1 + 48),
        (__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 4);
  }
  else if (*(_QWORD*)(a1 + 48) != *(_QWORD*)(a1 + 40)) {
    v10 = 0;
    v11 = 0;
    do {
      v12 = *(_QWORD*)(a1 + 152);
      v13 = wmemchr_alt1(*(_QWORD*)(a1 + 144), v11,
                         (v12 - *(_QWORD*)(a1 + 144)) >> 2);
      if (v13 != 0) {
        v14 = v13;
      }
      else {
        v14 = v12;
      }
      if (v14 == *(_QWORD*)(a1 + 152)) {
        StateMoveTo_d42860_alt1(v2, (__int64*)(*(_QWORD*)(a1 + 40) + v10));
      }
      ++v11;
      v10 += 16;
    } while (v11 < (__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 4);
  }
  v15 = *(_DWORD**)(a1 + 128);
  if ((*a2 & 1) != 0) {
    v16 = *v2;
    if (v15 != (_DWORD*)*v2) {
      v124_.v127 = 0;
      v17 = 0;
      v18 = 0x1.fffffe0000000p+127f;
      v118 = vdupq_lane_s32(v119, 1);
      v19 = GameData_212ee30[0];
      do {
        v22 = *(_OWORD*)(v16 + 16 * v17);
        *(_OWORD*)v124_.v124 = (__typeof__(*(_OWORD*)v124_.v124)){0};
        *(_QWORD*)&v124_.v124[24] = 0;
        v23 = *(_QWORD*)(a1 + 8);
        v124_.v124[44] = 0;
        v124_.v124[48] = 0;
        v124_.v124[64] = 0;
        v124_.v124[32] = 0;
        v24 = *(_QWORD*)(v23 + 8);
        v124_.v126 = 256;
        *(_QWORD*)v124_.v124 = __PAIR64__(v6, LANES64(v119).n64_u32[0]);
        *(_QWORD*)&v124_.v124[16] = v22;
        *(_QWORD*)&v25 = __PAIR64__(v6, LANES64(v119).n64_u32[0]);
        *(_QWORD*)&v26 = v22;
        v27 = *(_QWORD*)(v24 + 320);
        *((_QWORD*)&v26 + 1) = DWORD2(v22);
        *(_QWORD*)&v124_.v124[56] = *(_QWORD*)(v24 + 312);
        *(_QWORD*)&v124_.v124[64] = v27;
        *((_QWORD*)&v25 + 1) = LANES128(v118).n128_u32[2];
        LODWORD(v22) = *(_DWORD*)(v24 + 528);
        *(_QWORD*)&v124_.v124[48] = *(_QWORD*)(v24 + 304);
        v28 = *(_QWORD*)(v24 + 288);
        v29 = *(_QWORD*)(v24 + 296);
        LOBYTE(v24) = *(_BYTE*)(v24 + 386);
        *(_QWORD*)&v124_.v124[32] = v28;
        *(_QWORD*)&v124_.v124[40] = v29;
        v124_.v125 = v22;
        *(_OWORD*)v124_.v124 = v25;
        *(_OWORD*)&v124_.v124[16] = v26;
        if ((v24 & 2) != 0) {
          HIBYTE(v124_.v126) = 0;
        }
        if ((*(_BYTE*)(*(_QWORD*)(v23 + 8) + 390LL) & 8) != 0) {
          LOBYTE(v124_.v126) = 0;
        }
        v30 = (_QWORD*)*v19;
        v121_.v122 = nullptr;
        v121_.v123 = 0;
        v121_.v121 = nullptr;
        v32 = (_QWORD*)v30[7];
        v31 = (_QWORD*)v30[8];
        if (v32 != v31) {
          while (1) {
            v33 = *v32;
            if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v32 + 32LL))(*v32) & 1) !=
                    0 &&
                ((v124_.v126 & 0x100) != 0 || v30[1] != v33) &&
                ((*(__int64 (**)(__int64, _BYTE*, float32x4_t**))(
                     *(_QWORD*)v33 + 24LL))(v33, v124_.v124, &v121_.v121) &
                 1) != 0) {
              break;
            }
            if (++v32 == v31) {
              v34 = (__int64)v121_.v121;
            LABEL_33:
              v20 = true;
              if (v34 == 0) {
                goto LABEL_18;
              }
              goto LABEL_15;
            }
          }
          v34 = (__int64)v121_.v121;
          v35 = (char*)v121_.v122 - (char*)v121_.v121;
          if (v121_.v122 != v121_.v121) {
            v36 = v35 >> 4;
            v37 = (v35 >> 4) - 1;
            if (v37 != 0) {
              v38 = *v121_.v121;
              if ((unsigned __int64)(v36 - 2) >= 7) {
                v40 = 0x0.0p+0f;
                v42 = v121_.v121 + 4;
                v43 = 0;
                do {
                  v44 = v42[-3];
                  v45 = v42[-2];
                  v43 -= 8;
                  v46 = vsubq_f32(v38, v44);
                  v47 = vmulq_f32(v46, v46);
                  LANES128(v47).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v47, v47, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v47).n128_u64[0])))
                          .n64_u64[0];
                  v48 =
                      v40 +
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v47).n128_u64[0]))))
                          .n64_f32[0];
                  v49 = vsubq_f32(v44, v45);
                  v50 = vmulq_f32(v49, v49);
                  LANES128(v50).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v50, v50, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v50).n128_u64[0])))
                          .n64_u64[0];
                  v51 = v42[-1];
                  v52 = vsubq_f32(v45, v51);
                  v53 = vsubq_f32(v51, *v42);
                  v54 = vmulq_f32(v53, v53);
                  v55 =
                      v48 +
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v50).n128_u64[0]))))
                          .n64_f32[0];
                  v56 = vmulq_f32(v52, v52);
                  LANES128(v56).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v56, v56, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v56).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v54).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v54, v54, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v54).n128_u64[0])))
                          .n64_u64[0];
                  v57 =
                      (float)(v55 +
                              LANES64_OF(
                                  vsqrt_f32(vpadd_f32(
                                      COERCE_AS(float32x2_t,
                                                LANES128(v56).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v56).n128_u64[0]))))
                                  .n64_f32[0]) +
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v54).n128_u64[0]))))
                          .n64_f32[0];
                  v58 = v42[1];
                  v59 = v42[2];
                  v60 = vsubq_f32(*v42, v58);
                  v61 = vsubq_f32(v58, v59);
                  v62 = vmulq_f32(v60, v60);
                  v63 = vmulq_f32(v61, v61);
                  LANES128(v62).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v62, v62, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v62).n128_u64[0])))
                          .n64_u64[0];
                  v64 =
                      v57 +
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v62).n128_u64[0]))))
                          .n64_f32[0];
                  LANES128(v62).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v63, v63, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v63).n128_u64[0])))
                          .n64_u64[0];
                  v65 = v42[3];
                  v38 = v42[4];
                  v42 += 8;
                  v66 = vsubq_f32(v59, v65);
                  v67 = vmulq_f32(v66, v66);
                  LANES128(v67).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v67, v67, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v67).n128_u64[0])))
                          .n64_u64[0];
                  v68 =
                      (float)(v64 +
                              LANES64_OF(
                                  vsqrt_f32(vpadd_f32(
                                      COERCE_AS(float32x2_t,
                                                LANES128(v62).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v62).n128_u64[0]))))
                                  .n64_f32[0]) +
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v67).n128_u64[0]))))
                          .n64_f32[0];
                  v69 = vsubq_f32(v65, v38);
                  v70 = vmulq_f32(v69, v69);
                  LANES128(v70).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v70, v70, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v70).n128_u64[0])))
                          .n64_u64[0];
                  v40 =
                      v68 +
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v70).n128_u64[0]))))
                          .n64_f32[0];
                } while (-(__int64)(v37 & 0xFFFFFFFFFFFFFFF8LL) != v43);
                v39 = -v43;
                v41 = v37 & 7;
                if (v41 == 0) {
                  goto LABEL_48;
                }
              }
              else {
                v39 = 0;
                v40 = 0x0.0p+0f;
                v41 = v37 & 7;
                if (v41 == 0) {
                LABEL_48:
                  if (v40 >= v18) {
                    v20 = true;
                  }
                  else {
                    v20 = v40 >= 0x1.0000000000000p+0f;
                    v124_.v127 = v17;
                    v18 = v40;
                  }
                  goto LABEL_15;
                }
              }
              v71 = &v121_.v121[v39 + 1];
              do {
                v72 = *v71++;
                --v41;
                v73 = vsubq_f32(v38, v72);
                v74 = vmulq_f32(v73, v73);
                LANES128(v74).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v74, v74, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
                        .n64_u64[0];
                v40 =
                    v40 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]))))
                        .n64_f32[0];
                v38 = v72;
              } while (v41 != 0);
              goto LABEL_48;
            }
          }
          if (v18 <= 0x0.0p+0f) {
            goto LABEL_33;
          }
          v18 = 0x0.0p+0f;
          v20 = false;
          v124_.v127 = v17;
          if (v121_.v121 != nullptr) {
          LABEL_15:
            v121_.v122 = (float32x4_t*)v34;
            v21 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v34);
          }
        LABEL_18:
          if (!v20) {
            break;
          }
        }
        v16 = *(_QWORD*)(a1 + 120);
        ++v17;
      } while (v17 < (*(_QWORD*)(a1 + 128) - v16) >> 4);
      v15 = *(_DWORD**)(a1 + 128);
      v75 = v124_.v127;
      if (v124_.v127 >= 1) {
        if (v124_.v127 != 1) {
          v82 = v124_.v127 & 0x7FFFFFFE;
          v83 = 0;
          do {
            v84 = (_DWORD*)*v2;
            if ((_DWORD*)(*v2 + 16) == v15) {
              v85 = *v2;
            }
            else {
              v85 = *v2;
              do {
                v86 = *(_OWORD*)(v85 + 16);
                v85 += 16;
                v87 = v84[5];
                *v84 = v86;
                v84[1] = v87;
                v88 = *(_OWORD*)v84;
                v89 = v84 + 8;
                *((_QWORD*)&v88 + 1) = (unsigned int)v84[6];
                *(_OWORD*)v84 = v88;
                v84 = (_DWORD*)v85;
              } while (v89 != v15);
            }
            v90 = *(_DWORD**)(a1 + 120);
            *(_QWORD*)(a1 + 128) = v85;
            if (v90 + 4 == (_DWORD*)v85) {
              v15 = v90;
            }
            else {
              v15 = v90;
              do {
                v91 = *((_OWORD*)v15 + 1);
                v15 += 4;
                v92 = v90[5];
                *v90 = v91;
                v90[1] = v92;
                v93 = *(_OWORD*)v90;
                v94 = v90 + 8;
                *((_QWORD*)&v93 + 1) = (unsigned int)v90[6];
                *(_OWORD*)v90 = v93;
                v90 = v15;
              } while (v94 != (_DWORD*)v85);
            }
            v83 += 2;
            *(_QWORD*)(a1 + 128) = v15;
          } while (v83 != v82);
        }
        if ((v75 & 1) != 0) {
          v76 = (_DWORD*)*v2;
          if ((_DWORD*)(*v2 + 16) == v15) {
            v77 = *v2;
          }
          else {
            v77 = *v2;
            do {
              v78 = *(_OWORD*)(v77 + 16);
              v77 += 16;
              v79 = v76[5];
              *v76 = v78;
              v76[1] = v79;
              v80 = *(_OWORD*)v76;
              v81 = v76 + 8;
              *((_QWORD*)&v80 + 1) = (unsigned int)v76[6];
              *(_OWORD*)v76 = v80;
              v76 = (_DWORD*)v77;
            } while (v81 != v15);
          }
          *(_QWORD*)(a1 + 128) = v77;
          v15 = (_DWORD*)v77;
        }
        if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
          v95 = *(__int64**)(a1 + 40);
          v96 = *(__int64**)(a1 + 48);
          if (v95 != v96) {
            do {
              StateMoveTo_d42860_alt1(v2, v95);
              v95 += 2;
            } while (v95 != v96);
            v15 = *(_DWORD**)(a1 + 128);
          }
        }
      }
    }
  }
  v97 = *(_DWORD**)(a1 + 120);
  v98 = *(_QWORD*)(a1 + 104);
  if (v15 != v97) {
    v99 = 0;
    v100 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v103 = *(_OWORD*)&v97[4 * v99];
      v102 = *(_QWORD*)(a1 + 112);
      HIDWORD(v103) = 0;
      if (v98 < v102) {
        *(_OWORD*)v98 = v103;
        *(_DWORD*)(v98 + 16) = v99;
        v98 += 32LL;
      }
      else {
        v104 = *(_QWORD*)(a1 + 96);
        v105 = v98 - v104;
        v106 = (__int64)(v98 - v104) >> 5;
        v107 = v106 + 1;
        if ((unsigned __int64)(v106 + 1) >> 59 != 0) {
          GameRoutine_d42f10();
        }
        v108 = v102 - v104;
        v120 = v103;
        if (v108 >> 4 > v107) {
          v107 = v108 >> 4;
        }
        if ((unsigned __int64)v108 >= 0x7FFFFFFFFFFFFFE0LL) {
          v109 = 0x7FFFFFFFFFFFFFFLL;
        }
        else {
          v109 = v107;
        }
        if (v109 >> 59 != 0) {
          GameRoutine_60a210_alt1();
        }
        v110 = 32 * v109;
        v111 = fw_memory_HeapManager_Allocate_alt1(*v100, 32 * v109, 16, 0);
        v112 = v111 + v105;
        *(_DWORD*)(v112 + 16) = v99;
        *(_OWORD*)v112 = v120;
        if (v104 != v98) {
          v113 = v104;
          v114 = v111 + v105 - 32 * v106;
          do {
            *(_QWORD*)(v114 + 8) = *(_QWORD*)(v113 + 8);
            *(_QWORD*)v114 = *(_QWORD*)v113;
            v115 = *(_DWORD*)(v113 + 16);
            v113 += 32;
            *(_DWORD*)(v114 + 16) = v115;
            v114 += 32;
          } while (v113 != v98);
        }
        v98 = v112 + 32;
        *(_QWORD*)(a1 + 96) = v111 + v105 - 32 * v106;
        *(_QWORD*)(a1 + 104) = v112 + 32;
        *(_QWORD*)(a1 + 112) = v111 + v110;
        if (v104 != 0) {
          v116 = 128;
          if (*(_QWORD*)(*v100 + 200) == 0) {
            v116 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*v100 + v116, v104);
        }
      }
      v97 = *(_DWORD**)(a1 + 120);
      v101 = *(_QWORD*)(a1 + 128);
      ++v99;
      *(_QWORD*)(a1 + 104) = v98;
    } while (v99 < (v101 - (__int64)v97) >> 4);
  }
  return v98 != *(_QWORD*)(a1 + 96);
}

bool CharacterController_d42740(_QWORD* a1, float32x4_t** a2, int* a3)
{

#pragma clang fp contract(off)
  float32x4_t** v6;
  float32x4_t* v7;
  float32x4_t* v8;
  char* v9;
  float32x4_t* v10;
  float32x4_t* v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int16x4_t v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v24;

  v7 = (float32x4_t*)a1[5];
  v8 = (float32x4_t*)a1[6];
  v6 = (float32x4_t**)(a1 + 5);
  v9 = (char*)*a2;
  v10 = a2[1];
  if ((char*)v8 - (char*)v7 == (char*)v10 - v9) {
    if (v7 == v8) {
      goto LABEL_12;
    }
    v12 = (float32x4_t*)v9;
    while (1) {
      v13 = *v7++;
      v14 = v13;
      v15 = *v12++;
      LANES64(v16).n64_u64[0] =
          LANES64_OF(vmovn_s32(vceqq_f32(v14, v15))).n64_u64[0];
      if ((LANES64(v16).n64_u8[0] & 1) == 0 ||
          (LANES64(v16).n64_u8[2] & 1) == 0 ||
          (LANES64(v16).n64_u8[4] & 1) == 0) {
        break;
      }
      if (v7 == v8) {
        goto LABEL_12;
      }
    }
  }
  v17 = *a3;
  if (v6 != a2) {
    CharacterController_d42d20((__int64)v6, v9, (char*)v10,
                               ((char*)v10 - v9) >> 4);
  }
  v18 = a1[18];
  v24 = v17;
  a1[19] = v18;
  CharacterController_d41fa0((__int64)a1, &v24);
LABEL_12:
  v20 = a1[12];
  v19 = a1[13];
  if (v19 != v20) {
    v21 = a1[1];
    if ((*(_BYTE*)(v21 + 848) & 1) == 0) {
      if (*(_BYTE*)(v21 + 28) != 1 || *(_DWORD*)(v21 + 24) != 1) {
        *(_DWORD*)(v21 + 32) = 1;
        *(_BYTE*)(v21 + 36) = 1;
      }
      if ((*(_BYTE*)(v21 + 112) & 1) == 0 && (*(_BYTE*)(v21 + 113) & 1) != 0) {
        WaitRelease_cfa2a0_alt1(v21 + 16);
      }
    }
  }
  return v19 != v20;
}

__int64 CharacterController_d42d20(__int64 result, char* a2, char* a3,
                                   unsigned __int64 a4)
{
  __int64 v5;
  char* v6;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  char* v17;
  unsigned int* v18;
  int v19;
  __int128 v20;
  char* v21;
  char* v22;
  __int64 v23;
  unsigned int* v24;
  int v25;
  __int128 v26;

  v5 = *(_QWORD*)(result + 16);
  v6 = *(char**)result;
  v8 = (_QWORD*)result;
  if (a4 <= (v5 - *(_QWORD*)result) >> 4) {
    v16 = *(char**)(result + 8);
    if (a4 <= (v16 - v6) >> 4) {
      while (a2 != a3) {
        v24 = (unsigned int*)(a2 + 8);
        *(_DWORD*)v6 = *(_DWORD*)a2;
        v25 = *((_DWORD*)a2 + 1);
        a2 += 16;
        *((_DWORD*)v6 + 1) = v25;
        v26 = *(_OWORD*)v6;
        *((_QWORD*)&v26 + 1) = *v24;
        *(_OWORD*)v6 = v26;
        v6 += 16;
      }
      *(_QWORD*)(result + 8) = v6;
    }
    else {
      v17 = &a2[v16 - v6];
      if (v16 != v6) {
        do {
          v18 = (unsigned int*)(a2 + 8);
          *(_DWORD*)v6 = *(_DWORD*)a2;
          v19 = *((_DWORD*)a2 + 1);
          a2 += 16;
          *((_DWORD*)v6 + 1) = v19;
          v20 = *(_OWORD*)v6;
          *((_QWORD*)&v20 + 1) = *v18;
          *(_OWORD*)v6 = v20;
          v6 += 16;
        } while (a2 != v17);
        v16 = *(char**)(result + 8);
      }
      v21 = v16;
      if (v17 != a3) {
        v21 = v16;
        v22 = v16;
        do {
          v21 += 16;
          *((_QWORD*)v22 + 1) = *((_QWORD*)v17 + 1);
          v23 = *(_QWORD*)v17;
          v17 += 16;
          *(_QWORD*)v22 = v23;
          v22 += 16;
        } while (v17 != a3);
      }
      *(_QWORD*)(result + 8) = v21;
    }
  }
  else {
    if (v6 != nullptr) {
      v9 = fw_memory_g_heap_manager;
      *(_QWORD*)(result + 8) = v6;
      v10 = a4;
      v11 = 128;
      if (*(_QWORD*)(v9 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(v9 + v11, v6);
      a4 = v10;
      v5 = 0;
      v8[1] = 0;
      v8[2] = 0;
      *v8 = 0;
    }
    if (a4 >> 60 != 0) {
      goto LABEL_28;
    }
    v12 = v5 >> 3;
    if (v5 >> 3 <= a4) {
      v12 = a4;
    }
    v13 = (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                       : v12;
    if (v13 >> 60 != 0) {
    LABEL_28:
      GameRoutine_cdcc10();
    }
    result = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 16 * v13,
                                            16, 0);
    v14 = result;
    *v8 = result;
    v8[1] = result;
    v8[2] = result + 16 * v13;
    if (a2 != a3) {
      v15 = (a3 - a2) & 0xFFFFFFFFFFFFFFF0LL;
      result = memcpy(result, a2, v15);
      v14 += v15;
    }
    v8[1] = v14;
  }
  return result;
}

unsigned __int64

CharacterController_StateStay_Main_Unknown4(unsigned __int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  float v7;
  float v8;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) + 8LL);
  if (*(_BYTE*)(v1 + 392) != 1) {
    return result;
  }
  do {
    v2 = v1;
    v1 = *(_QWORD*)(v1 + 600);
  } while (v1 != 0);
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v2 + 16) + 8LL) + 387LL) & 0x40) != 0) {
    return result;
  }
  v3 = result;
  result = GameRoutine_d12690(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL)),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(v3 + 8);
  if ((v5 & 1) != 0) {
    if ((*(_BYTE*)(v4 + 40) & 1) == 0) {
      goto LABEL_19;
    }
    if ((float)((float)(PSEUDO_UNFUSED(
                    (float)(*(float*)(v4 + 36) - *((float*)&result + 1)) *
                    (float)(*(float*)(v4 + 36) - *((float*)&result + 1)))) +
                (float)((float)(*(float*)(v4 + 32) - *(float*)&result) *
                        (float)(*(float*)(v4 + 32) - *(float*)&result))) >
        0x1.9000000000000p+4f) {
      *(_QWORD*)(v4 + 32) = result;
      v4 = *(_QWORD*)(v3 + 8);
    }
  }
  if ((*(_BYTE*)(v4 + 40) & 1) == 0) {
  LABEL_19:
    GameRoutine_8123d0_alt1(),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6 = *(_QWORD*)(v4 + 8);
  v7 = *(float*)(*(_QWORD*)(v6 + 8) + 528LL) + 0x1.99999a0000000p-3f;
  v8 = *(float*)(v6 + 292) - *(float*)(v4 + 32);
  if ((float)((float)(PSEUDO_UNFUSED(
                  (float)(*(float*)(v6 + 296) - *(float*)(v4 + 36)) *
                  (float)(*(float*)(v6 + 296) - *(float*)(v4 + 36)))) +
              (float)(v8 * v8)) > (float)(v7 * v7)) {
    result = *(_QWORD*)(v4 + 24);
    if (*(_BYTE*)(result + 12) != 1 || *(_DWORD*)(result + 8) != 2) {
      *(_DWORD*)(result + 16) = 2;
      *(_BYTE*)(result + 20) = 1;
    }
    if ((*(_BYTE*)(result + 96) & 1) == 0 &&
        (*(_BYTE*)(result + 97) & 1) != 0) {
      return WaitRelease_cfa2a0_alt1(result);
    }
  }
  return result;
}

__int64 CharacterController_StateStay_ToStayPos_Unknown4(__int64 result,
                                                         long double a2)
{
  __int64 v2;
  __int64 v3;
  float32x4_t v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  float32x4_t* v13;
  __int64 v14;
  __int64 v15;
  float v16;
  int v17;
  float32x4_t v18;
  float32x4_t* v19[3];
  int v20;

  v2 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(v2 + 40) & 1) != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    ((uint64_t*)&v4)[0] = *(_QWORD*)(v2 + 32);
    v5 = result;
    v17 = 4;
    v6 = ((uint32_t*)&v4)[1];
    ((uint32_t*)&v4)[1] = *(_DWORD*)(v3 + 576);
    ((uint64_t*)&v4)[1] = v6;
    v18 = v4;
    result = GameRoutine_d24980(
        *(_QWORD*)(*GameData_212eba8[0] + 72), *(_QWORD*)(v3 + 8),
        (float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 16LL) + 560LL), &v18,
        &v17);
    v7 = *(_QWORD*)(v5 + 8);
    if ((result & 1) != 0) {
      *(_QWORD*)&a2 = 0;
      *(_DWORD*)(v5 + 16) = 0;
    }
    else {
      *(float*)&a2 =
          *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8LL) + 8LL) +
                    228LL) +
          *(float*)(v5 + 16);
      *(_DWORD*)(v5 + 16) = LODWORD(a2);
    }
    v8 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8LL) + 8LL) +
                   228LL) +
         *(float*)(v5 + 20);
    *(float*)(v5 + 20) = v8;
    v9 = *(_QWORD*)(v7 + 8);
    v10 = *(float*)&a2 <
          (float)((float)(fminf(fmaxf(**(float**)(*(_QWORD*)(v9 + 8) + 144LL),
                                      0.0),
                                1.0) *
                          0.5) +
                  1.5);
    LODWORD(a2) = 4.0;
    v10 = v10 && v8 < 4.0;
    if (!v10) {
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 40) + 8LL) + 64LL) =
          *(_DWORD*)(v9 + 368);
      v11 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8LL);
      v12 = fw_memory_g_heap_manager_ptr;
      v13 = (float32x4_t*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
      v19[0] = v13;
      v19[1] = v13 + 1;
      v19[2] = v13 + 1;
      *v13 = v18;
      v14 = *(_QWORD*)(*(_QWORD*)(v11 + 40) + 8LL);
      *(_QWORD*)(v14 + 20) = 0x3F8000003F800000LL;
      *(_BYTE*)(v14 + 32) = 0;
      *(_DWORD*)(v14 + 28) = 1065353216;
      v20 = 1;
      GameRoutine_d42740((_QWORD*)v14, v19, &v20);
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15, v13);
      v7 = *(_QWORD*)(v5 + 8);
      v9 = *(_QWORD*)(v7 + 8);
    }
    if ((*(_BYTE*)(v7 + 40) & 1) != 0) {
      v16 = *(float*)(v9 + 292) - *(float*)(v7 + 32);
      if ((float)((float)((float)(*(float*)(v9 + 296) - *(float*)(v7 + 36)) *
                          (float)(*(float*)(v9 + 296) - *(float*)(v7 + 36))) +
                  (float)(v16 * v16)) > 6.25) {
        *(_DWORD*)(v9 + 128) |= 0x200u;
      }
      return result;
    }
  }
  GameRoutine_8123d0(result, a2);
}

void* CharacterController_d43a60(int a1, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  int v4;
  _QWORD* v5;
  int v6;

  if (a1 == 1) {
    v2 = *(_QWORD**)(a2 + 80);
    v5 = *(_QWORD**)(a2 + 88);
    if (v2 == v5) {
      return &GameData_220f8e0;
    }
    while (1) {
      v6 = wld_Crc32(0, "Signal_TrailHandL", 0x11u);
      if (v6 == (*(unsigned int (**)(_QWORD))(*(_QWORD*)*v2 + 32LL))(*v2)) {
        break;
      }
      v2 += 2;
      if (v2 == v5) {
        return &GameData_220f8e0;
      }
    }
  }
  else {
    if (a1 != 0) {
      return &GameData_220f8e0;
    }
    v2 = *(_QWORD**)(a2 + 80);
    v3 = *(_QWORD**)(a2 + 88);
    if (v2 == v3) {
      return &GameData_220f8e0;
    }
    while (1) {
      v4 = wld_Crc32(0, "Signal_TrailHandR", 0x11u);
      if (v4 == (*(unsigned int (**)(_QWORD))(*(_QWORD*)*v2 + 32LL))(*v2)) {
        break;
      }
      v2 += 2;
      if (v2 == v3) {
        return &GameData_220f8e0;
      }
    }
  }
  if (*v2 != 0) {
    return (void*)(*v2 + 40LL);
  }
  return &GameData_220f8e0;
}

void CharacterController_d449c0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  float* v5;
  float v6;
  __int128 v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int128 v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  if ((*(_BYTE*)(a1 + 364) & 1) != 0) {
    return;
  }
  if (*(_QWORD*)(a1 + 280) == 0) {
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v12[2] = 0;
    v13 = *(_QWORD*)(a1 + 288);
    v12[5] = 0;
    v12[6] = 0;
    v12[7] = 0;
    v12[8] = 0;
    v12[9] = 0;
    v12[10] = 0;
    v12[11] = 0;
    *(_QWORD*)(a1 + 288) = v12;
    *v12 = GameData_1fdabf8;
    v12[1] = 0;
    v12[4] = 0;
    *(_QWORD*)(a1 + 280) = v12 + 4;
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt3(v13);
    }
    v14 = *(_QWORD*)(a1 + 280);
    *(_DWORD*)(v14 + 20) = 1067506044;
    *(_BYTE*)(v14 + 24) = 1;
    v15 = *(_QWORD*)(a1 + 280);
    *(_DWORD*)(v15 + 4) = 1095307227;
    *(_BYTE*)(v15 + 8) = 1;
    v16 = *(_QWORD*)(a1 + 280);
    if (*(unsigned __int8*)(v16 + 48) == *(unsigned __int8*)(a1 + 112)) {
      if (*(_BYTE*)(v16 + 48) != 0) {
        *(_DWORD*)(v16 + 32) = *(_DWORD*)(a1 + 96);
        *(_DWORD*)(v16 + 36) = *(_DWORD*)(a1 + 100);
        v17 = *(_OWORD*)(v16 + 32);
        *((_QWORD*)&v17 + 1) = *(unsigned int*)(a1 + 104);
        *(_OWORD*)(v16 + 32) = v17;
      }
    }
    else if (*(_BYTE*)(v16 + 48) != 0) {
      *(_BYTE*)(v16 + 48) = 0;
    }
    else {
      *(_QWORD*)(v16 + 40) = *(_QWORD*)(a1 + 104);
      *(_QWORD*)(v16 + 32) = *(_QWORD*)(a1 + 96);
      *(_BYTE*)(v16 + 48) = 1;
    }
    v21 = *(_QWORD*)(a1 + 280);
    v22 = *(_QWORD*)(a1 + 288);
    v23 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 488LL);
    if (v22 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                memory_order_relaxed);
    }
    v24 = *(_QWORD*)(v23 + 192);
    *(_QWORD*)(v23 + 184) = v21;
    *(_QWORD*)(v23 + 192) = v22;
    if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt3(v24);
    }
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt3(v22);
    }
  }
  v2 = *(_QWORD*)(a1 + 88);
  if (v2 == 0) {
    goto LABEL_12;
  }
  v3 = *(_QWORD**)(GameData_220b6f0 + 8);
  v4 = *(_QWORD**)(GameData_220b6f0 + 16);
  if (v3 != v4) {
    while (*v3 != v2) {
      v3 += 2;
      if (v3 == v4) {
        goto LABEL_12;
      }
    }
  }
  if (v3 == v4) {
  LABEL_12:
    if (*(_BYTE*)(a1 + 112) != 1) {
      v10 = *(float*)(a1 + 152);
      v11 = *(float*)(a1 + 156);
      goto LABEL_22;
    }
    v7 = *(_OWORD*)(a1 + 96);
    LODWORD(v8) = *(_QWORD*)(a1 + 104);
  }
  else {
    v5 = *(float**)(v2 + 16);
    v6 = *(float*)(a1 + 352) - *(float*)(a1 + 80);
    if (v6 < 0x0.0p+0f) {
      v6 = 0x0.0p+0f;
    }
    *(float*)&v7 = v5[73] + (float)(PSEUDO_UNFUSED(v5[167] * v6));
    v8 = v5[74] + (float)(PSEUDO_UNFUSED(v5[168] * v6));
  }
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(float*)&v7 - *(float*)(v9 + 292);
  v11 = v8 - *(float*)(v9 + 296);
LABEL_22:
  v18 = (float)(PSEUDO_UNFUSED(v11 * v11)) + (float)(v10 * v10);
  v19 = 0x0.0p+0f;
  if (v18 > 0x0.0p+0f) {
    if (v10 != 0x0.0p+0f || v11 != 0x0.0p+0f) {
      v20 = sqrtf(v18);
      v10 = v10 / v20;
      v11 = v11 / v20;
    }
    v19 = atan2f_alt3(v10, v11);
  }
  **(float**)(a1 + 280) = v19;
}

void CharacterController_StateAttack_Unknown4(__int64 a1)
{
  long double v2;
  float v3;
  float v4;
  float v5;
  __int64 v6;
  int v7;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  char v14;
  float v15;
  float v16;
  __int64* v17;
  __int64* v18;
  char v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  float* v29;
  float v30;
  float v31;
  float v32;
  __int128 v33;
  float v34;
  __int64 v35;
  float v36;
  _QWORD* v37;
  _QWORD* v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float* v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  int v55;
  float v56;
  int v57;

  GameRoutine_d48540(a1);
  LODWORD(v2) = *(_DWORD*)(a1 + 80);
  if (*(float*)&v2 < *(float*)(a1 + 356)) {
    CharacterController_d449c0_alt1(a1, v2);
    if ((*(_BYTE*)(a1 + 369) & 1) != 0) {
      goto LABEL_23;
    }
    v3 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 488LL) + 36LL);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                              memory_order_acquire) &
         1) == 0) {
      v56 = v3;
      v55 = __cxa_guard_acquire(&GameData_22110c8);
      v3 = v56;
      if (v55 != 0) {
        GameData_22110c0 = 0x3F80000000000000LL;
        __cxa_guard_release(&GameData_22110c8);
        v3 = v56;
      }
    }
    v4 = v3 +
         (float)(roundf(v3 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v4 <= 0x1.921fb60000000p+0f) {
      v9 = 0x1.0000000000000p+0f;
      if (v4 >= -0x1.921fb60000000p+0f) {
        goto LABEL_21;
      }
      v5 = -0x1.921fb60000000p+1f;
    }
    else {
      v5 = 0x1.921fb60000000p+1f;
    }
    v4 = v5 - v4;
    v9 = -0x1.0000000000000p+0f;
  LABEL_21:
    v10 = v4 * v4;
    v11 =
        v4 *
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
                                                                                              (float)(v4 *
                                                                                                      v4))) *
                                                                              (float)(v4 *
                                                                                      v4))) *
                                                           (float)(v4 * v4))) *
                                           (float)(v4 * v4))) *
                        (float)(v4 * v4)) +
                0x1.0000000000000p+0f);
    v12 =
        v9 *
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
                                                                                              v10)) *
                                                                              v10)) *
                                                           v10)) *
                                           v10)) *
                        v10) +
                0x1.0000000000000p+0f);
    v13 = *(_QWORD*)(a1 + 328);
    v14 = *(_BYTE*)(v13 + 104);
    v15 = (float)(PSEUDO_UNFUSED(v11 * *((float*)&GameData_22110c0 + 1))) +
          (float)(*(float*)&GameData_22110c0 * v12);
    v16 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v12)) -
          (float)(*(float*)&GameData_22110c0 * v11);
    *(float*)(v13 + 96) = v15;
    *(float*)(v13 + 100) = v16;
    if ((v14 & 1) == 0) {
      *(_BYTE*)(v13 + 104) = 1;
    }
  LABEL_23:
    if (*(_BYTE*)(a1 + 368) != 0 && (*(_BYTE*)(a1 + 369) & 1) != 0) {
      v17 = *(__int64**)(a1 + 256);
      v18 = *(__int64**)(a1 + 264);
      if (v17 == v18) {
        goto LABEL_29;
      }
      v19 = 0;
      do {
        v20 = *v17;
        v17 += 2;
        v19 |= *(_BYTE*)(v20 + 232) & (*(_BYTE*)(v20 + 233) ^ 1);
      } while (v17 != v18);
      if ((v19 & 1) == 0) {
      LABEL_29:
        *(_BYTE*)(a1 + 368) = 0;
      }
    }
    if (*(_BYTE*)(a1 + 348) == 1) {
      v21 = *(_QWORD*)(a1 + 8);
      v22 = *(float*)(*(_QWORD*)(*(_QWORD*)(v21 + 8) + 8LL) + 228LL) +
            *(float*)(a1 + 344);
      *(float*)(a1 + 344) = v22;
      if (v22 >= 0x1.99999a0000000p-4f) {
        v23 = *(_QWORD*)(v21 + 8);
        v57 = 1028;
        GameRoutine_daa180(*(_QWORD*)(v23 + 32), &v57);
      }
    }
    v24 = *(float*)(a1 + 360);
    if (v24 > 0x0.0p+0f) {
      v25 = *(float*)(a1 + 80);
      if (v24 > v25) {
        v26 = *(_QWORD*)(a1 + 88);
        if (v26 == 0) {
          goto LABEL_44;
        }
        v27 = *(_QWORD**)(*GameData_212eba8[0] + 8);
        v28 = *(_QWORD**)(*GameData_212eba8[0] + 16);
        if (v27 != v28) {
          while (*v27 != v26) {
            v27 += 2;
            if (v27 == v28) {
              goto LABEL_44;
            }
          }
        }
        if (v27 == v28) {
        LABEL_44:
          if (*(_BYTE*)(a1 + 112) != 1) {
            goto LABEL_68;
          }
          v33 = *(_OWORD*)(a1 + 96);
          v30 = 0x1.99999a0000000p-2f;
          LODWORD(v34) = *(_QWORD*)(a1 + 104);
        }
        else {
          v29 = *(float**)(v26 + 16);
          v30 = *(float*)(v26 + 528);
          v31 = *(float*)(a1 + 352) - v25;
          if (v31 < 0x0.0p+0f) {
            v31 = 0x0.0p+0f;
          }
          v32 = v29[168] * v31;
          *(float*)&v33 = v29[73] + (float)(PSEUDO_UNFUSED(v29[167] * v31));
          v34 = v29[74] + v32;
        }
        v35 = *(_QWORD*)(a1 + 8);
        v36 =
            sqrtf((float)(PSEUDO_UNFUSED((float)(v34 - *(float*)(v35 + 296)) *
                                         (float)(v34 - *(float*)(v35 + 296)))) +
                  (float)((float)(*(float*)&v33 - *(float*)(v35 + 292)) *
                          (float)(*(float*)&v33 - *(float*)(v35 + 292))));
        if (v26 == 0) {
          goto LABEL_53;
        }
        v37 = *(_QWORD**)(*GameData_212eba8[0] + 8);
        v38 = *(_QWORD**)(*GameData_212eba8[0] + 16);
        if (v37 != v38) {
          while (*v37 != v26) {
            v37 += 2;
            if (v37 == v38) {
              goto LABEL_53;
            }
          }
        }
        if (v37 == v38) {
        LABEL_53:
          v39 = *(float*)(a1 + 236);
          v40 = 0x1.0000000000000p-2f;
        }
        else {
          v39 = *(float*)(a1 + 236);
          v40 = 0x1.0000000000000p-1f;
        }
        v41 = *(float*)(*(_QWORD*)(v35 + 8) + 528LL);
        v42 = (float)((float)(v39 * v40) + 0x0.0p+0f) + (float)(v30 + v41);
        if (v36 <= v42) {
          if (*(_QWORD*)(a1 + 40) != 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
              GameData_22110ac = 0;
              __cxa_guard_release(&GameData_22110b8);
            }
            **(_QWORD**)(a1 + 40) = GameData_22110ac;
          }
          StateAttack_d45080((_QWORD*)a1);
        }
        else {
          v43 = *(float**)(a1 + 296);
          if (v43 != nullptr) {
            v44 = 0x0.0p+0f;
            v45 = (float)((float)(v41 + (float)(v30 + v42)) +
                          0x1.0000000000000p+0f) -
                  v42;
            if (v45 != 0x0.0p+0f) {
              v46 = (float)(v36 - v42) / v45;
              if (v46 <= 0x1.0000000000000p+0f) {
                v47 = v46;
              }
              else {
                v47 = 0x1.0000000000000p+0f;
              }
              if (v46 >= 0x0.0p+0f) {
                v44 = v47;
              }
              else {
                v44 = 0x0.0p+0f;
              }
            }
            v48 = (float)(fminf(fmaxf(v44, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                          0x1.cccccc0000000p-1f) +
                  0x1.99999a0000000p-4f;
            v49 = *(float*)(v35 + 364) * 0x1.8000000000000p+0f;
            v50 = v48 * (float)(v49 * *(float*)(a1 + 152));
            v51 = v48 * (float)(v49 * *(float*)(a1 + 156));
            v52 = *(float*)(a1 + 216);
            *v43 = v52 * v50;
            v43[1] = v52 * v51;
          }
        }
      }
    }
  LABEL_68:
    v53 = *(float*)(a1 + 372);
    v54 =
        fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                        228LL));
    if (v53 <= 0x0.0p+0f) {
      if (v53 >= 0x0.0p+0f) {
        goto LABEL_74;
      }
      v53 = v53 + v54;
      if (v53 <= 0x0.0p+0f) {
        goto LABEL_74;
      }
    }
    else {
      v53 = v53 - v54;
      if (v53 >= 0x0.0p+0f) {
        goto LABEL_74;
      }
    }
    v53 = 0x0.0p+0f;
  LABEL_74:
    *(float*)(a1 + 372) = v53;
    return;
  }
  v6 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(*(_QWORD*)(v6 + 8) + 32LL) != 0) {
    v7 = 5;
  }
  else {
    v7 = 0;
  }
  if ((*(_BYTE*)(v6 + 848) & 1) == 0) {
    if (*(_BYTE*)(v6 + 28) != 1 || *(_DWORD*)(v6 + 24) != v7) {
      *(_DWORD*)(v6 + 32) = v7;
      *(_BYTE*)(v6 + 36) = 1;
    }
    if ((*(_BYTE*)(v6 + 112) & 1) == 0 && (*(_BYTE*)(v6 + 113) & 1) != 0) {
      WaitRelease_cfa2a0_alt1(v6 + 16);
    }
  }
}

void CharacterController_d45840(__int64 a1, float32x2_t* a2)
{
  __int64 v4;
  float v5;
  float v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  unsigned int v18;
  unsigned int v19;
  float32x4_t v20;
  __int64* v21;
  _QWORD* v22;
  atomic_ullong* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int128 v27;
  __int64 v28;
  float32x4_t v29;
  float32x4_t v30;
  __int128 v31;
  __int128 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  float32x4_t* v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  __int64 v42;
  float32x4_t v43;
  __int128 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64* v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 i;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  float v73;
  float32x4_t v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  struct {
    __int64 v80;
    __int64 v81;
  } v80_;
  _DWORD v82[4];
  struct {
    _DWORD v83[24];
    int v84;
  } v83_;
  _BYTE v85[9];

  v4 = HubCharacterNatives_cf66e0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL));
  if (v4 == 0) {
    goto LABEL_40;
  }
  v5 = *(float*)(a1 + 240);
  v6 = 0x1.0000000000000p-1f;
  v7 = v4;
  v8 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  v9 = *(float*)(v8 + 556);
  v10 = *(float*)(v8 + 528);
  v11 = *(float*)(*(_QWORD*)(*(_QWORD*)(v8 + 16) + 488LL) + 36LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0) {
    v73 = v9;
    v75 = v11;
    v77 = v10;
    v79 = v5;
    v72 = __cxa_guard_acquire_alt1((__int64)&GameData_22110c8);
    v5 = v79;
    v10 = v77;
    v9 = v73;
    v11 = v75;
    v6 = 0x1.0000000000000p-1f;
    if (v72 != 0) {
      GameData_22110c0 = 0x3F80000000000000LL;
      __cxa_guard_release_alt1((__int64)&GameData_22110c8);
      v5 = v79;
      v10 = v77;
      v9 = v73;
      v11 = v75;
      v6 = 0x1.0000000000000p-1f;
    }
  }
  v76 = v9 * v6;
  v78 = v10 * v5;
  v12 = v11 +
        (float)(roundf(v11 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v12 > 0x1.921fb60000000p+0f) {
    v13 = 0x1.921fb60000000p+1f;
  LABEL_7:
    v12 = v13 - v12;
    v14 = -0x1.0000000000000p+0f;
    goto LABEL_8;
  }
  v14 = 0x1.0000000000000p+0f;
  if (v12 < -0x1.921fb60000000p+0f) {
    v13 = -0x1.921fb60000000p+1f;
    goto LABEL_7;
  }
LABEL_8:
  v15 = v12 * v12;
  v16 =
      v12 *
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
                                                                                            (float)(v12 *
                                                                                                    v12))) *
                                                                            (float)(v12 *
                                                                                    v12))) *
                                                         (float)(v12 * v12))) *
                                         (float)(v12 * v12))) *
                      (float)(v12 * v12)) +
              0x1.0000000000000p+0f);
  v17 =
      v14 *
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
                                                                                            v15)) *
                                                                            v15)) *
                                                         v15)) *
                                         v15)) *
                      v15) +
              0x1.0000000000000p+0f);
  *(float*)&v18 =
      (float)(PSEUDO_UNFUSED(v16 * *((float*)&GameData_22110c0 + 1))) +
      (float)(*(float*)&GameData_22110c0 * v17);
  *(float*)&v19 =
      (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v17)) -
      (float)(*(float*)&GameData_22110c0 * v16);
  LANES128(v20).n128_u64[0] = v18;
  LANES128(v20).n128_u64[1] = v19;
  v74 = v20;
  v21 = (__int64*)fw_memory_g_heap_manager_ptr;
  v22 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0);
  v22[1] = 0;
  v23 = (atomic_ullong*)(v22 + 1);
  v22[2] = 0;
  v24 = (__int64)(v22 + 4);
  v25 = (__int64)v22;
  *v22 = GameData_212ec78 + 2;
  GameRoutine_d49ac0((__int64)(v22 + 4));
  LODWORD(v26) = 0;
  *((float*)&v26 + 1) = v76;
  v27 = *(_OWORD*)(a1 + 236);
  *(float*)(v25 + 144) = v78;
  v28 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v25 + 148) = 1;
  v29 = vaddq_f32(COERCE_AS(float32x4_t, v26), vmulq_n_f32(v74, v78));
  v30 = vaddq_f32(COERCE_AS(float32x4_t, v26), vmulq_n_f32(v74, *(float*)&v27));
  *(_QWORD*)(v25 + 112) = LANES128(v29).n128_u64[0];
  *(_QWORD*)(v25 + 128) = LANES128(v30).n128_u64[0];
  v31 = *(_OWORD*)(v25 + 112);
  v32 = *(_OWORD*)(v25 + 128);
  *((_QWORD*)&v31 + 1) = LANES128(v29).n128_u32[2];
  *((_QWORD*)&v32 + 1) = LANES128(v30).n128_u32[2];
  LANES128(v29).n128_u32[0] = *(_DWORD*)(a1 + 232);
  *(_OWORD*)(v25 + 112) = v31;
  *(_OWORD*)(v25 + 128) = v32;
  v33 = *(_QWORD*)(v28 + 8);
  v34 = *(_QWORD*)(v33 + 384);
  *(_DWORD*)(v25 + 184) = LANES128(v29).n128_u32[0];
  *(_BYTE*)(v25 + 188) = 1;
  if ((v34 & 8) != 0) {
    v35 = 3;
  }
  else {
    v35 = 1;
  }
  if ((v34 & 4) != 0) {
    v36 = 2;
  }
  else {
    v36 = v35;
  }
  *(_DWORD*)(v25 + 152) = v36;
  if (a2 != nullptr) {
    v37 = *(_QWORD*)(*(_QWORD*)(v33 + 8) + 232LL);
    if (v37 != 0) {
      v38 = *(float32x4_t**)(v37 + 8);
      v39 = v38[27];
      v40 = v38[28];
      v41 = v38[29];
      v42 = *(_QWORD*)(a1 + 328);
      v43 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v39, COERCE_FLOAT(*(_OWORD*)LANES64(a2[6]).n64_u64)),
              v40, a2[6], 1),
          v41, *(float32x4_t*)LANES64(a2[6]).n64_u64, 2);
      *(_QWORD*)(v42 + 144) = LANES128(v43).n128_u64[0];
      v44 = *(_OWORD*)(v42 + 144);
      *((_QWORD*)&v44 + 1) = LANES128(v43).n128_u32[2];
      *(_OWORD*)(v42 + 144) = v44;
    }
  }
  GameHr_d4e630(v24, *(_QWORD*)(a1 + 328));
  v45 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  v83_.v84 = 3;
  v83_.v83[0] = *(_DWORD*)(v45 + 184);
  GameHr_d49fe0(v24, (__int64)"MakeId", 6u, (__int64)v82);
  if (v83_.v84 != -1) {
    ((void (*)(_BYTE*, _DWORD*))GameData_1fdc410[v83_.v84])(v85, v83_.v83);
  }
  v80_.v80 = v24;
  v80_.v81 = v25;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                            memory_order_relaxed);
  v46 = GameData_212ee20[0];
  v47 = *GameData_212ee20[0];
  nn_os_LockMutex_alt1(*GameData_212ee20[0] + 48);
  v48 = *v46;
  *(_QWORD*)(v25 + 200) = v7;
  *(_BYTE*)(v25 + 208) = 1;
  v49 = *(_QWORD*)(v48 + 8);
  *(_QWORD*)(v25 + 192) = v49;
  *(_QWORD*)(v48 + 8) = v49 + 1;
  GameRoutine_d4e4e0((__int64*)(v7 + 24), &v80_.v80);
  nn_os_UnlockMutex_alt1(v47 + 48);
  v50 = v80_.v81;
  if (v80_.v81 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80_.v81 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak_alt3(v50);
  }
  v51 = *(__int64**)(a1 + 264);
  v52 = *(_QWORD*)(a1 + 272);
  if ((unsigned __int64)v51 >= v52) {
    v54 = *(_QWORD*)(a1 + 256);
    v55 = (unsigned __int64)v51 - v54;
    v56 = ((__int64)v51 - v54) >> 4;
    v57 = v56 + 1;
    if ((unsigned __int64)(v56 + 1) >> 60 != 0) {
      GameRoutine_d46830();
    }
    v58 = v52 - v54;
    if (v58 >> 3 > v57) {
      v57 = v58 >> 3;
    }
    if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF0LL) {
      v59 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v59 = v57;
    }
    if (v59 >> 60 != 0) {
      GameRoutine_60a210_alt1();
    }
    v60 = fw_memory_HeapManager_Allocate_alt1(*v21, 16 * v59, 16, 0);
    v61 = (__int64*)(v60 + v55);
    v62 = v60 + 16 * v59;
    *v61 = v24;
    v61[1] = v25;
    v63 = v60 + v55 - 16 * v56;
    v53 = v60 + v55 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    memcpy_alt1(v63, v54, v55);
    *(_QWORD*)(a1 + 256) = v63;
    *(_QWORD*)(a1 + 264) = v53;
    *(_QWORD*)(a1 + 272) = v62;
    if (v54 != 0) {
      v64 = 128;
      if (*(_QWORD*)(*v21 + 200) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v21 + v64, v54);
    }
  }
  else {
    *v51 = v24;
    v51[1] = v25;
    v53 = (__int64)(v51 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
  }
  v65 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 264) = v53;
  v66 = *(_QWORD*)(*(_QWORD*)(v65 + 8) + 32LL);
  v67 = *(_QWORD*)(v66 + 296);
  for (i = *(_QWORD*)(v66 + 304); v67 != i; v67 += 64) {
    v82[0] = 0;
    v69 = *(_QWORD*)(v67 + 48);
    if (v69 == 0) {
      GameRoutine_60a310();
    }
    (*(void (**)(__int64, _DWORD*))(*(_QWORD*)v69 + 48LL))(v69, v82);
  }
  if (atomic_fetch_add(v23, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak_alt3(v25);
  }
LABEL_40:
  v70 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (v70 == 0 ||
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v70 + 16) + 8LL) + 387LL) & 0x40) != 0) {
    game_edea70(*(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 912LL),
                0x1.13404e0000000p-7f, 0x1.47ae140000000p-4f);
  }
  v71 = *(_QWORD*)(a1 + 288);
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 369) = 1;
  if (v71 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
    std___1___shared_weak_count___release_weak_alt3(v71);
  }
  *(_BYTE*)(a1 + 364) = 1;
}

__int64 CharacterController_d468c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  if ((*(_BYTE*)(result + 144) & 1) != 0) {
    v2 = *(_QWORD*)(result + 160);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 56) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 72);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(v1 + 32) & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 48);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

__attribute__((swiftcall)) void CharacterController_d47af0(PSEUDO_X8 x8_,
                                                           int a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  __int64 v18;
  char v19;
  struct {
    char gap8_[1];
    char v20[15];
    __int64 v21;
  } v20_;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v4 = *(_QWORD*)(a2 + 392);
  v5 = *(_QWORD*)(a2 + 400);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(_DWORD*)(v4 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v7 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt3(v5);
      a1 = v7;
    }
  }
  else {
    v6 = *(_DWORD*)(v4 + 11784);
  }
  switch (v6) {
  case 0:
  case 1:
  case 21:
  case 28:
  case 29:
    if (a1 == 1) {
      v19 = 20;
      strcpy(v20_.v20, "Jnt_R_Foot");
      GameRoutine_7a8220_alt1(a3, &v19);
      if ((v19 & 1) != 0 && v20_.v21 != 0) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v20_.v21);
      }
      v19 = 18;
      v11 = "Jnt_R_Toe";
      goto LABEL_37;
    }
    if (a1 == 0) {
      v19 = 20;
      strcpy(v20_.v20, "Jnt_L_Foot");
      GameRoutine_7a8220_alt1(a3, &v19);
      if ((v19 & 1) != 0 && v20_.v21 != 0) {
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v20_.v21);
      }
      v19 = 18;
      v11 = "Jnt_L_Toe";
    LABEL_37:
      *(_QWORD*)v20_.v20 = *(_QWORD*)v11;
      strcpy(&v20_.v20[8], "e");
      goto LABEL_86;
    }
    return;
  case 2:
  case 3:
  case 8:
  case 14:
  case 19:
  case 24:
  case 25:
    if (a1 > 3) {
      if (a1 == 4) {
        v19 = 18;
        strcpy(v20_.v20, "Jnt_L_Toe");
        GameRoutine_7a8220_alt1(a3, &v19);
        if ((v19 & 1) != 0 && v20_.v21 != 0) {
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v20_.v21);
        }
        v19 = 20;
        *(_WORD*)&v20_.v20[8] = 27753;
        v9 = "Jnt_L_Nail";
      }
      else {
        if (a1 != 5) {
          return;
        }
        v19 = 18;
        strcpy(v20_.v20, "Jnt_R_Toe");
        GameRoutine_7a8220_alt1(a3, &v19);
        if ((v19 & 1) != 0 && v20_.v21 != 0) {
          v12 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v20_.v21);
        }
        v19 = 20;
        *(_WORD*)&v20_.v20[8] = 27753;
        v9 = "Jnt_R_Nail";
      }
    }
    else if (a1 == 2) {
      v19 = 20;
      strcpy(v20_.v20, "Jnt_L_Arm4");
      GameRoutine_7a8220_alt1(a3, &v19);
      if ((v19 & 1) != 0 && v20_.v21 != 0) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v20_.v21);
      }
      v19 = 20;
      *(_WORD*)&v20_.v20[8] = 13677;
      v9 = "Jnt_L_Arm5";
    }
    else {
      if (a1 != 3) {
        return;
      }
      v19 = 20;
      strcpy(v20_.v20, "Jnt_R_Arm4");
      GameRoutine_7a8220_alt1(a3, &v19);
      if ((v19 & 1) != 0 && v20_.v21 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v20_.v21);
      }
      v19 = 20;
      *(_WORD*)&v20_.v20[8] = 13677;
      v9 = "Jnt_R_Arm5";
    }
    v16 = *(_QWORD*)v9;
    v20_.v20[10] = 0;
    *(_QWORD*)v20_.v20 = v16;
    goto LABEL_86;
  case 6:
    if (a1 == 3) {
      goto LABEL_62;
    }
    if (a1 != 2) {
      return;
    }
    goto LABEL_70;
  case 7:
    if (a1 > 9) {
      if (a1 > 11) {
        if (a1 == 12) {
          v17 = "Jnt_RH_L_Toe";
        }
        else {
          if (a1 != 13) {
            return;
          }
          v17 = "Jnt_RH_R_Toe";
        }
      }
      else if (a1 == 10) {
        v17 = "Jnt_RH_L_Arm4";
      }
      else {
        v17 = "Jnt_RH_R_Arm4";
      }
    }
    else if (a1 > 7) {
      if (a1 == 8) {
        v17 = "Jnt_LH_L_Toe";
      }
      else {
        v17 = "Jnt_LH_R_Toe";
      }
    }
    else if (a1 == 6) {
      v17 = "Jnt_LH_L_Arm4";
    }
    else {
      if (a1 != 7) {
        return;
      }
      v17 = "Jnt_LH_R_Arm4";
    }
    goto LABEL_85;
  case 26:
    if (a1 > 3) {
      goto LABEL_67;
    }
    if (a1 == 2) {
    LABEL_70:
      v17 = "Jnt_L_Nail21";
    }
    else {
      if (a1 != 3) {
        return;
      }
    LABEL_62:
      v17 = "Jnt_R_Nail21";
    }
    goto LABEL_85;
  case 32:
    if (a1 > 3) {
    LABEL_67:
      if (a1 == 4) {
        v17 = "Jnt_L_Toe";
      }
      else {
        if (a1 != 5) {
          return;
        }
        v17 = "Jnt_R_Toe";
      }
    }
    else if (a1 == 2) {
      v17 = "Jnt_L_Arm3";
    }
    else {
      if (a1 != 3) {
        return;
      }
      v17 = "Jnt_R_Arm3";
    }
  LABEL_85:
    Manager_6326c0_alt1((__int64*)&v19, v17);
  LABEL_86:
    GameRoutine_7a8220_alt1(a3, &v19);
    if ((v19 & 1) != 0 && v20_.v21 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v20_.v21);
    }
    return;
  default:
    return;
  }
}

void CharacterController_d48660(__int64 a1, unsigned __int32 a2, int* a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  float v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  struct {
    float32x2_t v22[2];
    int v23;
    char v24;
    char gap29_[3];
    float v25;
    char v26;
    char gap37_[3];
    char v27;
    char gap41_[3];
    char v28;
    char gap45_[3];
    __int64 v29;
    _BYTE v30[7];
    char gap63_[1];
    __int64 v31;
  } v22_;
  struct {
    _BYTE v32[16];
    __int64 v33;
  } v32_;

  v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                  344LL);
  if (*(_QWORD*)(v6 + 352) == *(_QWORD*)(a1 + 24)) {
    if ((*(_BYTE*)(v6 + 368) & 1) == 0 && (v7 = *(_QWORD*)(v6 + 168)) != 0 &&
        ((v8 = GameRoutine_d2b5f0(*(_QWORD*)(v7 + 32) + 72LL)) &
         0x100000000LL) != 0 &&
        (v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 72LL) +
                         104LL * (int)v8)) != 0 &&
        (v10 = *(_QWORD*)(v9 + 16)) != 0 &&
        *(__int64 (**)(void))(v10 + 16) == eft_ClampCurve_ptr) {
      LODWORD(v13) = -1511520286;
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
      v12 = *(_QWORD*)(v11 + 16);
      if ((*(_BYTE*)(v12 + 385) & 0x40) != 0) {
        v13 = 0;
      }
      else {
        v13 = *(_QWORD*)(v12 + 468);
      }
      if ((v13 & 0x100000000LL) == 0) {
        if (GameRoutine_d2d4e0()) {
          LODWORD(v13) = 1257611790;
        }
        else if ((*(_BYTE*)(*(_QWORD*)(v11 + 16) + 384LL) & 0x10) != 0) {
          LODWORD(v13) = -1101902990;
        }
        else if ((*(_BYTE*)(v11 + 216) & 2) != 0) {
          LODWORD(v13) = 1669996436;
        }
        else {
          LODWORD(v13) = -574916402;
        }
      }
    }
    v14 = GameRoutine_d2cec0_alt1(v13);
    *(_BYTE*)(v6 + 345) = 0;
    *(_DWORD*)(v6 + 328) = v14 - 1;
    *(_BYTE*)(v6 + 332) = 1;
  }
  *(_DWORD*)(a1 + 36) = a2;
  GameRoutine_d2caa0((void*)((__int64)v32_.v32), a2);
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 232LL) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    v15 = *((unsigned __int8*)a3 + 28);
    LOBYTE(v22_.v23) = 0;
    v22_.v24 = 0;
    LOBYTE(v22_.v25) = 0;
    v22_.v26 = 0;
    v22_.v27 = 0;
    v22_.v28 = 0;
    v22_.v31 = 0;
    *(_DWORD*)&v22_.v30[3] = 0;
    *(_DWORD*)v22_.v30 = 16777472;
    LANES64(v22_.v22[0]).n64_u32[0] = a2;
    LANES64(v22_.v22[1]).n64_u64[0] = GameData_21a60e0;
    v22_.v29 = 0x3F8000003F800000LL;
    if (v15 == 1) {
      HIDWORD(v22_.v29) = a3[6];
    }
    if (*((_BYTE*)a3 + 4) == 1) {
      v16 = *a3;
      v22_.v24 = 1;
      v22_.v23 = v16;
    }
    if (*((_BYTE*)a3 + 20) == 1) {
      LODWORD(v22_.v29) = a3[4];
    }
    if (*((_BYTE*)a3 + 12) == 1) {
      v17 = *((float*)a3 + 2);
    }
    else {
      v18 = GameHr_d1cf60(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                     344LL),
          *(_DWORD*)(a1 + 36));
      v17 = 0x0.0p+0f;
      if (v18 != 0 && *(_DWORD*)(v18 + 8) != 0) {
        v17 = *(float*)(v18 + 24);
        if (v17 < *(float*)(v18 + 92)) {
          v17 = *(float*)(v18 + 92);
        }
      }
    }
    v22_.v25 = v17;
    v22_.v26 = 1;
    v19 = game_zview_d198c0(
        *(float32x2_t**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) +
                                    8LL) +
                         344LL),
        v22_.v22, 1, 0);
    if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) +
                                         8LL) +
                              344LL) +
                   352LL) == v19) {
      v20 = v22_.v29;
      *(_QWORD*)(a1 + 24) = v19;
      *(_DWORD*)(a1 + 32) = v20;
    }
  }
  if ((v32_.v32[0] & 1) != 0 && v32_.v33 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v32_.v33);
  }
}

_QWORD* CharacterController_d48b40(_QWORD* a1, __int64 a2, long double a3,
                                   float a4, float a5)
{
  float v7;
  unsigned __int8 explicit;
  float v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float* v16;
  __int64 v17;
  unsigned __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  bool v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float* v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* result;
  __int64 v52;
  float v53;
  int v54;
  int v55;
  float v56;
  int v57;
  int v58;
  __int64 v59;
  int v60;
  __int64 v61;
  __int64 v62;
  struct {
    __int64 v63;
    __int64 v64;
  } v63_;

  v7 = *(float*)(a1[1] + 364LL);
  explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                                  memory_order_acquire);
  if ((a2 & 0x100000000LL) != 0) {
    v9 = *(float*)&a2;
  }
  else {
    v9 = v7;
  }
  if ((explicit & 1) == 0) {
    v53 = a4;
    v54 = LODWORD(a3);
    v55 = __cxa_guard_acquire(&GameData_22110b8);
    LODWORD(a3) = v54;
    a4 = v53;
    if (v55 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      LODWORD(a3) = v54;
      a4 = v53;
    }
  }
  *(_QWORD*)(a1[1] + 584LL) = GameData_22110ac;
  *(_DWORD*)(a1[1] + 600LL) = *(_DWORD*)(a1[1] + 368LL);
  v10 = a1[1];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v56 = a4;
    v57 = LODWORD(a3);
    v61 = v10;
    v58 = __cxa_guard_acquire(&GameData_22110b8);
    v10 = v61;
    LODWORD(a3) = v57;
    a4 = v56;
    if (v58 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v10 = v61;
      LODWORD(a3) = v57;
      a4 = v56;
    }
  }
  v11 = GameData_22110ac;
  v12 = *(_QWORD*)(v10 + 696);
  v13 = *(_QWORD*)(v10 + 688);
  v14 = v12 - v13;
  if (v12 != v13) {
    v15 = *(float*)(v10 + 524);
    v16 = (float*)(v13 + 4);
    v17 = 0;
    v18 = 0xAAAAAAAAAAAAAAABLL * (v14 >> 2);
    while ((float)(v15 - v16[1]) <= 0x1.99999a0000000p-3f) {
      v19 = *(v16 - 1);
      v20 = *v16;
      ++v17;
      v16 += 3;
      v11 = __PAIR64__(*((float*)&v11 + 1) + v20, *(float*)&v11 + v19);
      if (v18 == v17) {
        LODWORD(v17) = v18;
        break;
      }
    }
    if ((_DWORD)v17 != 0) {
      v11 = __PAIR64__(*((float*)&v11 + 1) / (float)(unsigned int)v17,
                       *(float*)&v11 / (float)(unsigned int)v17);
    }
  }
  v21 =
      sqrtf((float)(PSEUDO_UNFUSED(*((float*)&v11 + 1) * *((float*)&v11 + 1))) +
            (float)(*(float*)&v11 * *(float*)&v11));
  if (*(float*)&v11 != 0x0.0p+0f || *((float*)&v11 + 1) != 0x0.0p+0f) {
    v11 = __PAIR64__(*((float*)&v11 + 1) / v21, *(float*)&v11 / v21);
  }
  v22 = 0x0.0p+0f;
  v23 = *(float*)&a3 == 0x0.0p+0f;
  v24 = (float)(PSEUDO_UNFUSED(a4 * a4)) + (float)(*(float*)&a3 * *(float*)&a3);
  if (a4 != 0x0.0p+0f) {
    v23 = false;
  }
  v25 = sqrtf(v24);
  v26 = *(float*)&a3 / v25;
  v27 = a4 / v25;
  if (v23) {
    v28 = a4;
  }
  else {
    v28 = v27;
  }
  if (v23) {
    v29 = *(float*)&a3;
  }
  else {
    v29 = v26;
  }
  v30 = (float)(PSEUDO_UNFUSED(*((float*)&v11 + 1) * v28)) +
        (float)(*(float*)&v11 * v29);
  if (v30 <= 0x1.0000000000000p+0f) {
    v31 = (float)(PSEUDO_UNFUSED(*((float*)&v11 + 1) * v28)) +
          (float)(*(float*)&v11 * v29);
  }
  else {
    v31 = 0x1.0000000000000p+0f;
  }
  v32 = (float)(fminf(fmaxf(v31, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                0x1.99999a0000000p-1f) +
        0x1.99999a0000000p-3f;
  if (v30 >= 0x0.0p+0f) {
    v33 = v32;
  }
  else {
    v33 = 0x1.99999a0000000p-3f;
  }
  if (v24 > 0x0.0p+0f) {
    if (v23) {
      v26 = *(float*)&a3;
      v27 = a4;
    }
    *(float*)&a3 = v26;
    v22 = atan2f_alt2(a3, v27);
  }
  v34 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *(_QWORD*)(v34 + 16) = 0;
  v35 = v34 + 24;
  *(_QWORD*)v34 = GameData_212ee78[0] + 2;
  *(_QWORD*)(v34 + 8) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v62 = v34;
    v59 = v34 + 24;
    v60 = __cxa_guard_acquire(&GameData_22110b8);
    v34 = v62;
    v35 = v59;
    if (v60 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v34 = v62;
      v35 = v59;
    }
  }
  v36 = GameData_22110ac;
  v37 = a1[6];
  *(_DWORD*)(v34 + 40) = 0;
  a1[5] = v35;
  a1[6] = v34;
  *(_QWORD*)(v34 + 24) = v36;
  *(_QWORD*)(v34 + 32) = 1065353216;
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22110c8) != 0) {
    GameData_22110c0 = 0x3F80000000000000LL;
    __cxa_guard_release(&GameData_22110c8);
  }
  v38 = fminf(v9, v21);
  v39 = v22 +
        (float)(roundf(v22 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v39 <= 0x1.921fb60000000p+0f) {
    v41 = 0x1.0000000000000p+0f;
    if (v39 >= -0x1.921fb60000000p+0f) {
      goto LABEL_44;
    }
    v40 = -0x1.921fb60000000p+1f;
  }
  else {
    v40 = 0x1.921fb60000000p+1f;
  }
  v39 = v40 - v39;
  v41 = -0x1.0000000000000p+0f;
LABEL_44:
  v42 = v39 * v39;
  v43 =
      v39 *
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
                                                                                            (float)(v39 *
                                                                                                    v39))) *
                                                                            (float)(v39 *
                                                                                    v39))) *
                                                         (float)(v39 * v39))) *
                                         (float)(v39 * v39))) *
                      (float)(v39 * v39)) +
              0x1.0000000000000p+0f);
  v44 = (float*)a1[5];
  v45 =
      v41 *
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
                                                                                            v42)) *
                                                                            v42)) *
                                                         v42)) *
                                         v42)) *
                      v42) +
              0x1.0000000000000p+0f);
  v46 = (float)(PSEUDO_UNFUSED(v43 * *((float*)&GameData_22110c0 + 1))) +
        (float)(*(float*)&GameData_22110c0 * v45);
  v47 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v45)) -
        (float)(*(float*)&GameData_22110c0 * v43);
  *v44 = v33 * (float)(v38 * v46);
  v44[1] = v33 * (float)(v38 * v47);
  *(_DWORD*)(a1[5] + 8LL) = 1056964608;
  v48 = a1[5];
  *(float*)(v48 + 12) = a5;
  *(float*)(v48 + 16) = a5;
  v49 = a1[6];
  v50 = *(_QWORD*)(a1[1] + 456LL);
  v63_.v63 = a1[5];
  v63_.v64 = v49;
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                              memory_order_relaxed);
  }
  result = GameRoutine_d47980((__int64*)(v50 + 8), &v63_.v63);
  v52 = v63_.v64;
  if (v63_.v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63_.v64 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v52);
  }
  return result;
}

void CharacterController_StateDamage_Unknown3(__int64 a1)
{
  unsigned __int32 v2;
  __int64 v3;
  float v5;
  double v6;
  __int64 v7;
  float v8;
  __int64 v9;
  int v10;
  __int64 v11;
  float v13;
  double v14;
  __int64 v15;
  float v16;
  float v17;
  __int64* v18;
  float v19;
  _QWORD* v20;
  atomic_ullong* v21;
  _QWORD* v22;
  __int64 v23;
  float* v24;
  _QWORD* v25;
  float v26;
  float v27;
  float v28;
  char v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  atomic_ullong* v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  __int64 v47;
  float v48;
  __int64 v49;
  __int16 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  struct {
    _QWORD* v55;
    __int64 v56;
  } v55_;
  struct {
    int v57;
    char v58;
    char gap29_[3];
    char v59;
    char gap33_[3];
    char v60;
    char gap37_[3];
    char v61;
    char gap41_[3];
    char v62;
    char gap45_[3];
    int v63;
    char v64;
  } v57_;
  struct {
    char v65[16];
    char v66;
  } v65_;
  struct {
    char gap72_[1];
    _BYTE v67[15];
    __int64 v68;
  } v67_;

  StateActionBase_Unknown3_alt1(a1);
  v2 = *(_DWORD*)(a1 + 88);
  v57_.v59 = 0;
  v57_.v60 = 0;
  v57_.v61 = 0;
  v57_.v62 = 0;
  v57_.v57 = 0;
  v57_.v63 = 1045220557;
  v57_.v64 = 1;
  v57_.v58 = 1;
  CharacterController_d48660_alt1(a1, v2, &v57_.v57);
  v3 = GameHr_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(a1 + 36));
  if (v3 != 0 && *(_DWORD*)(v3 + 8) != 0) {
    if (*(float*)(v3 + 12) >= *(float*)(v3 + 32)) {
      v5 = *(float*)(v3 + 32);
    }
    else {
      v5 = *(float*)(v3 + 12);
    }
  }
  else {
    v6 = GameHr_d1cbc0_alt1(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                   344LL),
        *(_DWORD*)(a1 + 36));
    v5 = *(float*)&v6 / 0x1.e000000000000p+5f;
  }
  v7 = GameHr_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(a1 + 36));
  v8 = 0x0.0p+0f;
  if (v7 != 0 && *(_DWORD*)(v7 + 8) != 0) {
    v8 = *(float*)(v7 + 24);
    if (v8 < *(float*)(v7 + 92)) {
      v8 = *(float*)(v7 + 92);
    }
  }
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(_DWORD*)(a1 + 36);
  *(float*)(a1 + 112) = v5 - v8;
  v11 = GameHr_d1cf60(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 8LL) + 344LL),
                      v10);
  if (v11 != 0 && *(_DWORD*)(v11 + 8) != 0) {
    if (*(float*)(v11 + 12) >= *(float*)(v11 + 32)) {
      v13 = *(float*)(v11 + 32);
    }
    else {
      v13 = *(float*)(v11 + 12);
    }
  }
  else {
    v14 = GameHr_d1cbc0_alt1(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                   344LL),
        *(_DWORD*)(a1 + 36));
    v13 = *(float*)&v14 / 0x1.e000000000000p+5f;
  }
  v15 = GameHr_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(a1 + 36));
  v16 = 0x0.0p+0f;
  if (v15 != 0 && *(_DWORD*)(v15 + 8) != 0) {
    v16 = *(float*)(v15 + 24);
    if (v16 < *(float*)(v15 + 92)) {
      v16 = *(float*)(v15 + 92);
    }
  }
  v17 = v13 - v16;
  v18 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(float*)(*(_QWORD*)(a1 + 96) + 136LL) < v17) {
    v17 = *(float*)(*(_QWORD*)(a1 + 96) + 136LL);
  }
  v19 = v17 + 0x1.3333340000000p-2f;
  v20 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v20[1] = 0;
  v21 = (atomic_ullong*)(v20 + 1);
  v20[2] = 0;
  v22 = v20 + 3;
  v23 = (__int64)v20;
  *v20 = GameData_212ee78[0] + 2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release_alt1((__int64)&GameData_22110b8);
  }
  v24 = *(float**)(a1 + 96);
  v25 = *(_QWORD**)(a1 + 8);
  v55_.v55 = v22;
  v55_.v56 = v23;
  v26 = v24[33];
  v27 = v24[52];
  v28 = v24[53];
  *(float*)(v23 + 36) = v19;
  *(float*)(v23 + 40) = v19;
  *(_DWORD*)(v23 + 32) = 1056964608;
  *(float*)(v23 + 24) = v26 * v27;
  *(float*)(v23 + 28) = v26 * v28;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                            memory_order_relaxed);
  v29 = GameHr_d13aa0(v25, (__int64)&v55_.v55);
  v30 = v55_.v56;
  if (v55_.v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55_.v56 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    v46 = v29;
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak_alt3(v30);
    if ((v46 & 1) == 0) {
      goto LABEL_42;
    }
  }
  else if ((v29 & 1) == 0) {
    goto LABEL_42;
  }
  v31 = *(_QWORD*)(a1 + 96);
  v32 = 0x0.0p+0f;
  v34 = *(float*)(v31 + 208);
  v33 = *(float*)(v31 + 212);
  v35 = (float)(PSEUDO_UNFUSED(v33 * v33)) + (float)(v34 * v34);
  if (v35 > 0x0.0p+0f) {
    v36 = -v34;
    v37 = -v33;
    if (v34 != 0x0.0p+0f || v33 != 0x0.0p+0f) {
      v38 = sqrtf(v35);
      v36 = v36 / v38;
      v37 = v37 / v38;
    }
    v32 = atan2f_alt3(v36, v37);
  }
  v39 = fw_memory_HeapManager_Allocate_alt1(*v18, 96, 16, 0);
  *(_QWORD*)(v39 + 8) = 0;
  v40 = (atomic_ullong*)(v39 + 8);
  *(_QWORD*)(v39 + 16) = 0;
  v41 = v39;
  v42 = GameData_212ed18[0];
  v43 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v39 + 40) = 0;
  *(_QWORD*)(v39 + 48) = 0;
  *(_QWORD*)(v39 + 56) = 0;
  *(_QWORD*)(v39 + 64) = 0;
  *(_QWORD*)(v39 + 72) = 0;
  *(_QWORD*)(v39 + 80) = 0;
  *(_QWORD*)(v39 + 88) = 0;
  *(_QWORD*)v39 = v42 + 2;
  *(_QWORD*)(v39 + 32) = 0;
  *(float*)(v39 + 32) = v32;
  v44 = *(_QWORD*)(v43 + 488);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8), 1u,
                            memory_order_relaxed);
  v45 = *(_QWORD*)(v44 + 192);
  *(_QWORD*)(v44 + 184) = v39 + 32;
  *(_QWORD*)(v44 + 192) = v39;
  if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    std___1___shared_weak_count___release_weak_alt3(v45);
  }
  if (atomic_fetch_add(v40, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v40, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_42;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak_alt3(v41);
    if (atomic_fetch_add(v40, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_42;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
  std___1___shared_weak_count___release_weak_alt3(v41);
LABEL_42:
  v47 = *(_QWORD*)(a1 + 8);
  v48 = *(float*)(*(_QWORD*)(a1 + 96) + 140LL);
  if (*(float*)(v47 + 820) >= v48) {
    v48 = *(float*)(v47 + 820);
  }
  *(float*)(v47 + 820) = v48;
  game_zview_d576f0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 48LL),
                    *(_QWORD*)(*(_QWORD*)(a1 + 96) + 40LL),
                    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL), 0,
                    *(_QWORD*)(a1 + 96) + 192LL);
  v49 = *(_QWORD*)(a1 + 96);
  v50 = 19551;
  v51 = *(_QWORD*)(v49 + 40);
  if (v51 != 0) {
    if ((*(_QWORD*)(v51 + 384) & 0x2000LL) != 0) {
      v50 = 18527;
    }
    else {
      v50 = 19551;
    }
    game_zview_d56e60_alt1(*(_QWORD*)(v51 + 40),
                           (*(_QWORD*)(v51 + 384) & 0x2000LL) != 0,
                           (unsigned __int8*)(v49 + 160));
  }
  v52 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  *(_QWORD*)&v67_.v67[7] = 0;
  v67_.v68 = 0;
  *(_WORD*)&v67_.v67[6] = v50;
  v53 = *(_QWORD*)(v52 + 40);
  v65_.v66 = 16;
  qmemcpy(v67_.v67, "Damage", 6);
  game_zview_d56ce0((void*)((__int64)v65_.v65), v53, (__int64)v67_.v67,
                    0x1.0000000000000p+0f);
  if ((v65_.v66 & 1) != 0 && v67_.v68 != 0) {
    v54 = 128;
    if (*(_QWORD*)(*v18 + 200) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*v18 + v54, v67_.v68);
  }
  if (atomic_fetch_add(v21, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt3(v23);
  }
}

__int64 CharacterController_StateGuard_Unknown3(__int64 a1)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  unsigned __int64 v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 result;

  StateActionBase_Unknown3_alt1(a1);
  CharacterController_d48b40_alt1((_QWORD*)a1, 0, *(float*)(a1 + 96),
                                  *(float*)(a1 + 100), 0x1.99999a0000000p-3f);
  v2 = *(float*)(a1 + 96);
  v3 = *(float*)(a1 + 100);
  v4 = 0x0.0p+0f;
  v5 = (float)(PSEUDO_UNFUSED(v3 * v3)) + (float)(v2 * v2);
  if (v5 > 0x0.0p+0f) {
    if (v2 != 0x0.0p+0f || v3 != 0x0.0p+0f) {
      v6 = sqrtf(v5);
      v2 = v2 / v6;
      v3 = v3 / v6;
    }
    v4 = atan2f_alt3(v2, v3);
  }
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v8[2] = 0;
  v9 = *(_QWORD*)(a1 + 112);
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v8[8] = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  *(_QWORD*)(a1 + 112) = v8;
  *v8 = GameData_1fdabf8;
  v8[1] = 0;
  v8[4] = 0;
  *(_QWORD*)(a1 + 104) = v8 + 4;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt3(v9);
  }
  **(float**)(a1 + 104) = v4;
  v10 = *(_QWORD*)(a1 + 104);
  *(_DWORD*)(v10 + 4) = 1100401636;
  *(_BYTE*)(v10 + 8) = 1;
  v11 = *(_QWORD*)(a1 + 104);
  v12 = *(_QWORD*)(a1 + 112);
  v13 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 488LL);
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  v14 = *(_QWORD*)(v13 + 192);
  *(_QWORD*)(v13 + 184) = v11;
  *(_QWORD*)(v13 + 192) = v12;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt3(v14);
  }
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt3(v12);
  }
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v7, 112, 16, 0);
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  v15[5] = 0;
  v16 = v15;
  v15[6] = 0;
  v15[7] = 0;
  v15[8] = 0;
  v15[9] = 0;
  v15[10] = 0;
  v15[11] = 0;
  v15[12] = 0;
  v15[13] = 0;
  *v15 = GameData_212ec58[0] + 2;
  v15[1] = 0;
  v17 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = v16;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    v16 = *(_QWORD**)(a1 + 120);
  }
  v18 = fw_memory_HeapManager_Allocate_alt1(*v7, 24, 16, 0);
  *(_DWORD*)(v18 + 16) = 0;
  *(_QWORD*)v18 = game_zview_CharacterController_StateGuard_Start_vtable;
  *(_QWORD*)(v18 + 8) = a1;
  v20 = (__int64*)v16[4];
  v19 = v16[5];
  if ((unsigned __int64)v20 >= v19) {
    v22 = v16[3];
    v23 = (unsigned __int64)v20 - v22;
    v24 = ((__int64)v20 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      goto LABEL_74;
    }
    v26 = v19 - v22;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        goto LABEL_75;
      }
      v28 = v18;
      v29 = fw_memory_HeapManager_Allocate_alt1(*v7, 8 * v27, 16, 0);
      v18 = v28;
    }
    else {
      v29 = 0;
    }
    v30 = v29 + 8 * v27;
    v31 = v29 + v23 - 8 * v24;
    *(_QWORD*)(v29 + v23) = v18;
    v21 = v29 + v23 + 8;
    memcpy_alt1(v31, v22, v23);
    v16[3] = v31;
    v16[4] = v21;
    v16[5] = v30;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v7 + v32, v22);
    }
  }
  else {
    *v20 = v18;
    v21 = (__int64)(v20 + 1);
  }
  v16[4] = v21;
  v33 = *(_QWORD**)(a1 + 120);
  v34 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v7, 24, 16, 0);
  v34[1] = a1;
  v34[2] = 0;
  *v34 = game_zview_CharacterController_StateGuard_DamageN_vtable;
  v36 = (_QWORD*)v33[4];
  v35 = v33[5];
  if ((unsigned __int64)v36 >= v35) {
    v38 = v33[3];
    v39 = (unsigned __int64)v36 - v38;
    v40 = ((__int64)v36 - v38) >> 3;
    v41 = v40 + 1;
    if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
      goto LABEL_74;
    }
    v42 = v35 - v38;
    if (v42 >> 2 > v41) {
      v41 = v42 >> 2;
    }
    if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
      v43 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v43 = v41;
    }
    if (v43 != 0) {
      if (v43 >> 61 != 0) {
        goto LABEL_75;
      }
      v44 = v34;
      v45 = fw_memory_HeapManager_Allocate_alt1(*v7, 8 * v43, 16, 0);
      v34 = v44;
    }
    else {
      v45 = 0;
    }
    v46 = v45 + 8 * v43;
    v47 = v45 + v39 - 8 * v40;
    *(_QWORD*)(v45 + v39) = v34;
    v37 = v45 + v39 + 8;
    memcpy_alt1(v47, v38, v39);
    v33[3] = v47;
    v33[4] = v37;
    v33[5] = v46;
    if (v38 != 0) {
      v48 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v7 + v48, v38);
    }
  }
  else {
    *v36 = v34;
    v37 = (__int64)(v36 + 1);
  }
  v33[4] = v37;
  v49 = *(_QWORD**)(a1 + 120);
  v50 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v7, 16, 16, 0);
  *v50 = game_zview_CharacterController_StateGuard_Loop_vtable;
  v50[1] = a1;
  v52 = (_QWORD*)v49[4];
  v51 = v49[5];
  if ((unsigned __int64)v52 < v51) {
    *v52 = v50;
    v53 = (__int64)(v52 + 1);
    goto LABEL_67;
  }
  v54 = v49[3];
  v55 = (unsigned __int64)v52 - v54;
  v56 = ((__int64)v52 - v54) >> 3;
  v57 = v56 + 1;
  if ((unsigned __int64)(v56 + 1) >> 61 != 0) {
  LABEL_74:
    GameRoutine_cfa280_alt1();
  }
  v58 = v51 - v54;
  if (v58 >> 2 > v57) {
    v57 = v58 >> 2;
  }
  if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
    v59 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v59 = v57;
  }
  if (v59 != 0) {
    if (v59 >> 61 == 0) {
      v60 = v50;
      v61 = fw_memory_HeapManager_Allocate_alt1(*v7, 8 * v59, 16, 0);
      v50 = v60;
      goto LABEL_63;
    }
  LABEL_75:
    GameRoutine_60a210_alt1();
  }
  v61 = 0;
LABEL_63:
  v62 = v61 + 8 * v59;
  v63 = v61 + v55 - 8 * v56;
  *(_QWORD*)(v61 + v55) = v50;
  v53 = v61 + v55 + 8;
  memcpy_alt1(v63, v54, v55);
  v49[3] = v63;
  v49[4] = v53;
  v49[5] = v62;
  if (v54 != 0) {
    v64 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*v7 + v64, v54);
  }
LABEL_67:
  v49[4] = v53;
  result = *(_QWORD*)(a1 + 120);
  if (*(_BYTE*)(result + 12) != 1 || *(_DWORD*)(result + 8) != 0) {
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 20) = 1;
  }
  if ((*(_BYTE*)(result + 96) & 1) == 0 && (*(_BYTE*)(result + 97) & 1) != 0) {
    return WaitRelease_cfa2a0_alt1(result);
  }
  return result;
}

void CharacterController_StateGuard_Unknown4(__int64 a1)
{
  long double v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  char v24;
  __int64 v25;
  int v26;

  GameRoutine_d48540(a1);
  CharacterModel_cf4c10(*(_QWORD*)(a1 + 120));
  if (*(_BYTE*)(a1 + 129) != 0) {
    v3 = *(_QWORD*)(a1 + 88);
    if (v3 != 0) {
      v4 = *(_QWORD**)(GameData_220b6f0 + 8);
      v5 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v4 != v5) {
        while (*v4 != v3) {
          v4 += 2;
          if (v4 == v5) {
            goto LABEL_29;
          }
        }
      }
      if (v4 != v5) {
        v6 = *(_QWORD*)(v3 + 16);
        v7 = *(_QWORD*)(a1 + 8);
        v8 = *(float*)(v6 + 292) - *(float*)(v7 + 292);
        v9 = *(float*)(v6 + 296) - *(float*)(v7 + 296);
        if (v8 != 0x0.0p+0f || v9 != 0x0.0p+0f) {
          v10 = sqrtf((float)(PSEUDO_UNFUSED(v9 * v9)) + (float)(v8 * v8));
          v11 = v9 / v10;
          *(float*)&v2 = v8 / v10;
          v12 = (float)(PSEUDO_UNFUSED(v11 * v11)) +
                (float)(*(float*)&v2 * *(float*)&v2);
          v13 = 0x0.0p+0f;
          if (v12 > 0x0.0p+0f) {
            if (*(float*)&v2 != 0x0.0p+0f || v11 != 0x0.0p+0f) {
              v14 = sqrtf(v12);
              *(float*)&v2 = *(float*)&v2 / v14;
              v11 = v11 / v14;
            }
            v15 = atan2f_alt2(v2, v11);
            v7 = *(_QWORD*)(a1 + 8);
            v13 = v15;
          }
          v16 = **(float**)(a1 + 104);
          v17 = *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8LL) + 228LL) *
                0x1.921fb60000000p+1f;
          v18 = fmodf(v13 - v16, 0x1.921fb60000000p+2f);
          if (v18 >= 0x0.0p+0f) {
            v19 = v18 + 0x0.0p+0f;
          }
          else {
            v19 = (float)(v18 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
          }
          if (v19 > 0x1.921fb60000000p+1f) {
            v19 = v19 + -0x1.921fb60000000p+2f;
          }
          v20 = fabsf(v17);
          v21 = v16 + v19;
          if (v16 <= v21) {
            if (v16 >= v21) {
              goto LABEL_26;
            }
            v16 = v16 + v20;
            if (v16 <= v21) {
              goto LABEL_26;
            }
          }
          else {
            v16 = v16 - v20;
            if (v16 >= v21) {
              goto LABEL_26;
            }
          }
          v16 = v21;
        LABEL_26:
          v22 = fmodf(v16 + 0x1.921fb60000000p+1f, 0x1.921fb60000000p+2f) +
                -0x1.921fb60000000p+1f;
          if (v22 < -0x1.921fb60000000p+1f) {
            v22 = v22 + 0x1.921fb60000000p+2f;
          }
          **(float**)(a1 + 104) = v22;
        }
      }
    }
  }
LABEL_29:
  v23 = *(_QWORD*)(a1 + 8);
  v24 = *(_BYTE*)(v23 + 36);
  v25 = *(_QWORD*)(*(_QWORD*)(v23 + 8) + 32LL);
  v26 = (v24 & 1) == 0;
  if (*(unsigned __int8*)(v25 + 392) != v26) {
    *(_BYTE*)(v25 + 392) = v26;
  }
}

float CharacterController_StateGuard_Start_Unknown4(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  double v3;
  __int64 v4;
  float result;

  v3 = GameHr_d1cbc0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) +
                                       8LL) +
                            8LL) +
                 344LL),
      501870813, a2);
  if (*(float*)(a1 + 16) >= (float)(*(float*)&v3 / 0x1.e000000000000p+5f)) {
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 120LL);
    if (*(_BYTE*)(v4 + 12) != 1 || *(_DWORD*)(v4 + 8) != 2) {
      *(_DWORD*)(v4 + 16) = 2;
      *(_BYTE*)(v4 + 20) = 1;
    }
    if ((*(_BYTE*)(v4 + 96) & 1) == 0 && (*(_BYTE*)(v4 + 97) & 1) != 0) {
      WaitRelease_cfa2a0_alt1(v4);
    }
  }
  result =
      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) +
                                      8LL) +
                           8LL) +
                228LL) +
      *(float*)(a1 + 16);
  *(float*)(a1 + 16) = result;
  return result;
}

void CharacterController_StateGuard_DamageN_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  float v5;
  double v6;
  __int64 v7;
  int v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  float v15;
  int v16;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = GameRoutine_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(v1 + 36));
  if (v3 != 0 && *(_DWORD*)(v3 + 8) != 0) {
    if (*(float*)(v3 + 12) >= *(float*)(v3 + 32)) {
      v5 = *(float*)(v3 + 32);
    }
    else {
      v5 = *(float*)(v3 + 12);
    }
  }
  else {
    v6 = GameRoutine_d1cbc0_alt2(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 8LL) + 8LL) +
                   344LL),
        *(_DWORD*)(v1 + 36));
    v5 = *(float*)&v6 / 0x1.e000000000000p+5f;
  }
  if (*(int*)(a1 + 20) < 1 ||
      ((v7 = *(_QWORD*)(a1 + 8), v8 = *(unsigned __int8*)(v7 + 128),
        *(float*)(a1 + 16) < v5)
           ? (v9 = v8 == 0)
           : (v9 = false),
       v9 ||
           *(float*)(*(_QWORD*)((v10 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 8LL)) +
                                8) +
                     228LL) <= 0x0.0p+0f ||
           ((v11 = *(_QWORD*)(v10 + 32), v8 == 0) ? (v12 = 0) : (v12 = 4),
            v16 = v12, (GameRoutine_daa180(v11, &v16) & 1) == 0))) {
    if (*(float*)(a1 + 16) >= v5) {
      v13 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 120LL);
      if (*(_BYTE*)(v13 + 12) != 1 || *(_DWORD*)(v13 + 8) != 2) {
        *(_DWORD*)(v13 + 16) = 2;
        *(_BYTE*)(v13 + 20) = 1;
      }
      if ((*(_BYTE*)(v13 + 96) & 1) == 0 && (*(_BYTE*)(v13 + 97) & 1) != 0) {
        WaitRelease_cfa2a0_alt1(v13);
      }
    }
    v15 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) +
                                          8LL) +
                               8LL) +
                    228LL);
    *(float*)(a1 + 16) = v15 + *(float*)(a1 + 16);
    if (v15 > 0x0.0p+0f) {
      ++*(_DWORD*)(a1 + 20);
    }
  }
}

__int64 CharacterController_StateGuard_Loop_Unknown4(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v6;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8LL);
  if (*(float*)(*(_QWORD*)(v2 + 8) + 228LL) > 0x0.0p+0f) {
    v3 = *(_QWORD*)(v2 + 32);
    v6 = 4;
    result = GameRoutine_daa180(v3, &v6);
    if ((result & 1) == 0) {
      v4 = *(_QWORD*)(v1 + 8);
      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 32LL) + 144LL) & 1) == 0 &&
          (*(_BYTE*)(v4 + 848) & 1) == 0) {
        if (*(_BYTE*)(v4 + 28) != 1 || *(_DWORD*)(v4 + 24) != 5) {
          *(_DWORD*)(v4 + 32) = 5;
          *(_BYTE*)(v4 + 36) = 1;
        }
        if ((*(_BYTE*)(v4 + 112) & 1) == 0 && (*(_BYTE*)(v4 + 113) & 1) != 0) {
          return WaitRelease_cfa2a0_alt1(v4 + 16);
        }
      }
    }
  }
  return result;
}

void CharacterController_StateRepelled_Unknown3(__int64 a1)
{
  __int64 v2;
  float v3;
  long double v4;
  float v5;
  float v6;
  float v7;
  __int64* v8;
  __int64 v9;
  __n128 v10;
  atomic_ullong* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v19;
  double v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  float* v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  float* v40;
  float v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  struct {
    __int64 v52;
    __int64 v53;
  } v52_;
  struct {
    __int64 v54;
    __int64 v55;
  } v54_;
  struct {
    int v56;
    char v57;
    char gap53_[3];
    char v58;
    char gap57_[3];
    char v59;
    char gap61_[3];
    char v60;
    char gap65_[3];
    char v61;
    char gap69_[3];
    int v62;
    char v63;
  } v56_;
  int v64;

  StateActionBase_Unknown3_alt1(a1);
  LOBYTE(v56_.v56) = 0;
  v56_.v57 = 0;
  v56_.v58 = 0;
  v56_.v59 = 0;
  v56_.v60 = 0;
  v56_.v61 = 0;
  v56_.v62 = 1036831949;
  v56_.v63 = 1;
  CharacterController_d48660_alt2(a1, 0xE9D685A7, &v56_.v56);
  v2 = *(_QWORD*)(a1 + 8);
  v3 = 0x0.0p+0f;
  LODWORD(v4) = *(_DWORD*)(v2 + 820);
  if (*(float*)&v4 < 0x1.99999a0000000p-3f) {
    *(float*)&v4 = 0x1.99999a0000000p-3f;
  }
  *(_DWORD*)(v2 + 820) = LODWORD(v4);
  LODWORD(v4) = *(_DWORD*)(a1 + 88);
  v5 = *(float*)(a1 + 92);
  v6 = (float)(PSEUDO_UNFUSED(v5 * v5)) + (float)(*(float*)&v4 * *(float*)&v4);
  if (v6 > 0x0.0p+0f) {
    if (*(float*)&v4 != 0x0.0p+0f || v5 != 0x0.0p+0f) {
      v7 = sqrtf(v6);
      *(float*)&v4 = *(float*)&v4 / v7;
      v5 = v5 / v7;
    }
    v3 = atan2f_alt2(v4, v5);
  }
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *(_QWORD*)(v9 + 8) = 0;
  v11 = (atomic_ullong*)(v9 + 8);
  *(_QWORD*)(v9 + 16) = 0;
  v12 = v9;
  v13 = GameData_212ed18[0];
  v14 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)v9 = v13 + 2;
  *(_QWORD*)(v9 + 32) = 0;
  *(float*)(v9 + 32) = v3;
  v15 = *(_QWORD*)(v14 + 488);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v16 = *(_QWORD*)(v15 + 192);
  *(_QWORD*)(v15 + 184) = v9 + 32;
  *(_QWORD*)(v15 + 192) = v9;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    v10 = std___1___shared_weak_count___release_weak_alt2(v16);
  }
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
        v12, *(long double*)&v10);
    v10 = std___1___shared_weak_count___release_weak_alt2(v12);
    if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_13;
    }
  LABEL_42:
    (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
        v12, *(long double*)&v10);
    std___1___shared_weak_count___release_weak_alt2(v12);
    goto LABEL_13;
  }
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    goto LABEL_42;
  }
LABEL_13:
  v17 = GameRoutine_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(a1 + 36));
  if (v17 != 0 && *(_DWORD*)(v17 + 8) != 0) {
    v19 = *(float*)(v17 + 12);
  }
  else {
    v20 = GameRoutine_d1cbc0_alt2(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                   344LL),
        *(_DWORD*)(a1 + 36));
    v19 = *(float*)&v20 / 0x1.e000000000000p+5f;
  }
  v21 = *(_QWORD*)(a1 + 8);
  if (v19 < 0x1.0000000000000p+0f) {
    v19 = 0x1.0000000000000p+0f;
  }
  *(float*)(a1 + 96) = v19;
  v22 = *(_QWORD*)(*(_QWORD*)(v21 + 8) + 32LL);
  v23 = *(_QWORD*)(v22 + 296);
  for (i = *(_QWORD*)(v22 + 304); v23 != i; v23 += 64) {
    v25 = *(_QWORD*)(v23 + 48);
    v64 = 1;
    if (v25 == 0) {
      GameRoutine_60a310();
    }
    (*(void (**)(__int64, int*))(*(_QWORD*)v25 + 48LL))(v25, &v64);
  }
  v26 = fw_memory_HeapManager_Allocate_alt1(*v8, 48, 16, 0);
  *(_QWORD*)(v26 + 16) = 0;
  v27 = v26 + 24;
  v28 = GameData_212ee78[0];
  *(_QWORD*)v26 = GameData_212ee78[0] + 2;
  *(_QWORD*)(v26 + 8) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v51 = v26;
    v47 = v26 + 24;
    v48 = __cxa_guard_acquire(&GameData_22110b8);
    v26 = v51;
    v27 = v47;
    if (v48 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v26 = v51;
      v27 = v47;
    }
  }
  v29 = GameData_22110ac;
  v30 = *(_QWORD*)(a1 + 112);
  *(_DWORD*)(v26 + 40) = 0;
  *(_QWORD*)(a1 + 104) = v27;
  *(_QWORD*)(a1 + 112) = v26;
  *(_QWORD*)(v26 + 24) = v29;
  *(_QWORD*)(v26 + 32) = 1065353216;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak_alt2(v30);
  }
  v31 = *(float**)(a1 + 104);
  v32 = *(float*)(a1 + 92) * -0x1.4000000000000p+3f;
  *v31 = *(float*)(a1 + 88) * -0x1.4000000000000p+3f;
  v31[1] = v32;
  *(_DWORD*)(*(_QWORD*)(a1 + 104) + 8LL) = 1056964608;
  *(_QWORD*)(*(_QWORD*)(a1 + 104) + 12LL) = 0x3E99999A3E99999ALL;
  v33 = *(_QWORD*)(a1 + 112);
  v34 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 456LL);
  v54_.v54 = *(_QWORD*)(a1 + 104);
  v54_.v55 = v33;
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_d47980((__int64*)(v34 + 8), &v54_.v54);
  v35 = v54_.v55;
  if (v54_.v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54_.v55 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    std___1___shared_weak_count___release_weak_alt2(v35);
  }
  v36 = fw_memory_HeapManager_Allocate_alt1(*v8, 48, 16, 0);
  *(_QWORD*)(v36 + 8) = 0;
  *(_QWORD*)(v36 + 16) = 0;
  v37 = v36 + 24;
  *(_QWORD*)v36 = v28 + 2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v49 = v36;
    v50 = __cxa_guard_acquire(&GameData_22110b8);
    v36 = v49;
    if (v50 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v36 = v49;
    }
  }
  v38 = GameData_22110ac;
  v39 = *(_QWORD*)(a1 + 128);
  *(_DWORD*)(v36 + 40) = 0;
  *(_QWORD*)(a1 + 120) = v37;
  *(_QWORD*)(a1 + 128) = v36;
  *(_QWORD*)(v36 + 24) = v38;
  *(_QWORD*)(v36 + 32) = 1065353216;
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak_alt2(v39);
  }
  v40 = *(float**)(a1 + 120);
  v41 = *(float*)(a1 + 92) * -0x1.99999a0000000p-3f;
  *v40 = *(float*)(a1 + 88) * -0x1.99999a0000000p-3f;
  v40[1] = v41;
  *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8LL) = 1056964608;
  v42 = *(_QWORD*)(a1 + 120);
  v43 = *(_DWORD*)(a1 + 96);
  *(_DWORD*)(v42 + 12) = v43;
  *(_DWORD*)(v42 + 16) = v43;
  v44 = *(_QWORD*)(a1 + 128);
  v45 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 456LL);
  v52_.v52 = *(_QWORD*)(a1 + 120);
  v52_.v53 = v44;
  if (v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_d47980((__int64*)(v45 + 8), &v52_.v52);
  v46 = v52_.v53;
  if (v52_.v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52_.v53 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    std___1___shared_weak_count___release_weak_alt2(v46);
  }
}

void CharacterController_StateRepelled_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;

  GameRoutine_d48540(a1);
  if (*(float*)(a1 + 80) >= *(float*)(a1 + 96)) {
    v2 = *(_QWORD*)(a1 + 8);
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 32LL) != 0 ? 5 : 0;
    if ((*(_BYTE*)(v2 + 848) & 1) == 0) {
      if (*(_BYTE*)(v2 + 28) != 1 || *(_DWORD*)(v2 + 24) != v3) {
        *(_DWORD*)(v2 + 32) = v3;
        *(_BYTE*)(v2 + 36) = 1;
      }
      if ((*(_BYTE*)(v2 + 112) & 1) == 0 && (*(_BYTE*)(v2 + 113) & 1) != 0) {
        WaitRelease_cfa2a0_alt1(v2 + 16);
      }
    }
  }
}

#pragma GCC visibility pop
