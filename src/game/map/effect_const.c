#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64** GameRoutine_14a1e70(__int64** result, float);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64 EffectConst_961260_alt1(__int64, _BYTE**,
                                __int64) __asm__("EffectConst_961260");
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a1240(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_960f80(_QWORD);
__int64 GameRoutine_962000(__int64, __int64);
__int64 GameRoutine_962680(__int64, const char**);
__int64 GameRoutine_966bd0(__int64);
__int64 GameRoutine_9a48c0(__int64 result, __int64**);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__n128 GameRoutine_961090(__int128*, __int64, char, char, __n128 result);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
char* game_util_Format(const char*, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _DWORD GameData_1a83bd0[2];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1a98e79;
extern _UNKNOWN GameData_1aa85d1;
extern _UNKNOWN GameData_1ae59ad;
extern __int128 GameData_1a837f0;
extern __int64 (**game_map_anonymous_CameraShakeCallback_vtable_ptr)();
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_21309c8[5];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21f43e0;
extern __int64 GameData_21f43e8;
extern __int64 GameData_21f43f8;
extern __int64 GameData_21f4400;
extern __int64 GameData_22400f8;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_map_effect_g_effect_manager;
extern char GameData_1a9f09e;
extern char GameData_21f48c8[64];
float Height_7c4d10(__int64, float, float);
void __attribute__((noreturn)) String_60a1d0();
__int64 EffectConst_961260(__int64 a1, _BYTE** a2, __int64 a3, __n128 a4);
__int64 EffectConst_961520_alt1(__int64* a1, __int64 a2, __int64* a3, int a4,
                                char a5, int32x2_t a6,
                                float a7) __asm__("EffectConst_961520");
__int64 EffectConst_961520_alt2(__int64* a1, __int64 a2, __int64* a3, int a4,
                                char a5, float a6,
                                float a7) __asm__("EffectConst_961520");
void EffectConst_961740_alt1(__int64 a1, _BYTE** a2, __int64 a3,
                             char a4) __asm__("EffectConst_961740");
void EffectConst_9619a0_alt1(__int64 a1, _BYTE** a2, __int64 a3,
                             char a4) __asm__("EffectConst_9619a0");
__int64 EffectConst_961d00(__int64 a1, const char** a2, int a3, int a4, int a5,
                           int a6, char a7);
__int64 EffectConst_9629e0(__int64 a1, const char** a2, int a3, int a4,
                           __int64 a5, char a6);
__int64 EffectConst_962ce0(__int64 a1, _QWORD* a2, __int128* a3, __int128* a4,
                           char a5);
__int64 EffectConst_963210(__int64 a1, _QWORD* a2, __int128* a3, __int128* a4,
                           char a5);
__int64 EffectConst_963740(__int64 a1, __int64* a2, int a3, int a4);
void EffectConst_964320(char** a1, unsigned __int8** a2, char** a3,
                        __int64* a4);
__attribute__((swiftcall)) void GameRoutine_82faa0(PSEUDO_X8, _QWORD* result,
                                                   _QWORD*);
__int64 GameRoutine_82f5a0(float*, unsigned __int16*, __int64, _WORD**);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
bool GameRoutine_964040(__int64);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_9692a0();
__int64 EffectConst_965ec0_alt1(__int64 result) __asm__("EffectConst_965ec0");
__int64 GameRoutine_14a1390(__int64*, char);
__int64 GameRoutine_14a36c0(_QWORD*, __int64*, int*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_14a1cc0(__int64*, float);
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 GameData_224b698;
extern __int64 GameData_224b6a0;
extern __int64 GameData_224b6a8;
bool EffectConst_964040(__int64 a1);
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(_QWORD*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_960f80_alt1(__int64 result) __asm__("GameRoutine_960f80");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_playAt_ff5f0_alt1(PSEUDO_X8, __int64, __int64, __int64, __int64,
                      unsigned int, unsigned int, int, float,
                      float) __asm__("snd_playAt_ff5f0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 strstr_alt1(const char*, const char*) __asm__("strstr");
__n128 GameRoutine_961090_alt1(__int128*, __int64, char,
                               char) __asm__("GameRoutine_961090");
extern char GameData_1a98e79_alt1[] __asm__("GameData_1a98e79");
extern char GameData_1aa85d1_alt1[] __asm__("GameData_1aa85d1");
extern char GameData_1ae59ad_alt1[] __asm__("GameData_1ae59ad");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
const char* EffectConst_961520(__int64** a1, __int64 a2, __int64* a3, int a4,
                               char a5, int32x2_t a6, float a7);
void EffectConst_961740(__int64 a1, const char** a2, __int64 a3, char a4);
void EffectConst_9619a0(__int64 a1, const char** a2, __int64 a3, char a4);
__int64 GameHr_962000(__int64, __int64);
__int64 GameVariable_82f5a0(float*, unsigned __int16*, __int64, _WORD**);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void EffectConst_965ec0(__int64 a1);

__int64 EffectConst_961260(__int64 a1, _BYTE** a2, __int64 a3, __n128 a4)
{

#pragma clang fp contract(off)
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  _BYTE* v12;
  __int64 result;
  char v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64* v17;
    __int64 v18;
  } v17_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v8 = (v7 & 8) != 0 ? 2 : 3;
    if ((v8 & v7) == 0) {
      return 0;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v9 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160);
    }
    else {
      a4 = *(__n128*)(v9 + 208);
    }
    if (LANES128(a4).n128_f32[3] == 0x1.0000000000000p+0f) {
      a4 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160,
                                                    LANES128(a4).n128_f32[3]);
      if (LANES128(a4).n128_f32[3] == 0x1.0000000000000p+0f) {
        return 0;
      }
    }
  }
  v10 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    LOBYTE(v10) = *(_BYTE*)(v10 + 8) == 2;
  }
  if ((v10 & 1) != 0) {
    return 0;
  }
  if (*GameData_212ce98[0] == 0 ||
      game_script_map_effect_g_effect_manager == 0) {
    return 0;
  }
  v12 = *a2;
  if (*a2 == nullptr || *v12 == 0) {
    return 0;
  }
  LANES128(a4).n128_u32[0] = *(_DWORD*)(a3 + 16);
  result = EffectConst_961520_alt1(
      (__int64*)&v17_.v17, (__int64)v12, (__int64*)a3,
      GameData_1a83bd0[*(unsigned __int8*)(a3 + 24)], *(_BYTE*)(a3 + 25),
      COERCE_AS(int32x2_t, LANES128(a4).n128_u64[0]), *(float*)(a3 + 20));
  if (*v17_.v17 != 0 &&
      *(_DWORD*)(*v17_.v17 + 16) == *((_DWORD*)v17_.v17 + 2)) {
    result = GameRoutine_9a48c0(a1, &v17_.v17);
    v14 = 1;
  }
  else {
    v14 = 0;
  }
  v15 = v17_.v18;
  if (v17_.v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = result;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
    result = v16;
  }
  if ((v14 & 1) == 0) {
    return 0;
  }
  return result;
}

const char* EffectConst_961520(__int64** a1, __int64 a2, __int64* a3, int a4,
                               char a5, int32x2_t a6, float a7)
{

#pragma clang fp contract(off)
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  unsigned int v14;
  const char* result;
  __int64* v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  int32x4_t v20;
  int32x4_t* v21;
  unsigned int v22;
  unsigned int i;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  const char* v28;
  __int64 v29;
  struct {
    _QWORD v31[3];
    int v32;
    char gap44_[4];
    __int64 v33;
    __int64 v34;
  } v31_;
  __int128 v35;
  struct {
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 vars0;
    __int64 vars8;
    __int64 vars10;
  } v36_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31_.v31[0] = 0;
  v31_.v31[1] = 0;
  v31_.v32 = a4;
  v10 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v11 = a3[1];
  v31_.v33 = *a3;
  v31_.v34 = v11;
  v35 = GameData_1a837f0;
  v31_.v31[2] = a2;
  v12 = *((_QWORD*)GameData_212c540 + 1);
  v36_.v36 = *(_QWORD*)GameData_212c540;
  v36_.v37 = v12;
  v13 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(v10, (__int64)v31_.v31, 1);
    v14 = COERCE_AS(__typeof__(v14), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  result = (const char*)GameHr_14a10d0(a1, (__int64)v13, v14,
                                       (__int64)&GameData_1a9f09e),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = *a1;
  v17 = *v16;
  if (*v16 != 0 && *(_DWORD*)(v17 + 16) == *((_DWORD*)v16 + 2)) {
    result = *(const char**)(*(_QWORD*)(v17 + 24) + 112LL);
    if (result == nullptr || (result = (const char*)strstr_alt1(
                                  result, GameData_1ae59ad_alt1)) == nullptr) {
      v18 = *(_DWORD*)(v17 + 36);
      if (v18 != 0) {
        v19 = 0;
        v20 = vdupq_lane_s32(a6, 0);
        LANES128(v20).n128_u32[3] = 0;
        do {
          if ((int)v18 > (int)v19) {
            v21 = *(int32x4_t**)(v17 + 40 + 8LL * (int)v19);
            if (v21 != nullptr) {
              v21[2] = v20;
              LANES128(v21[8]).n128_u8[0] = 1;
              v18 = *(_DWORD*)(v17 + 36);
            }
          }
          ++v19;
        } while (v19 < v18);
        v17 = *v16;
        if (*v16 == 0) {
          goto LABEL_27;
        }
      }
    }
    if (*(_DWORD*)(v17 + 16) == *((_DWORD*)v16 + 2)) {
      result = *(const char**)(*(_QWORD*)(v17 + 24) + 112LL);
      if (result == nullptr ||
          (result = (const char*)strstr_alt1(result, GameData_1aa85d1_alt1)) ==
              nullptr) {
        v22 = *(_DWORD*)(v17 + 36);
        if (v22 != 0) {
          for (i = 0; i < v22; ++i) {
            if ((int)v22 > (int)i) {
              v24 = *(_QWORD*)(v17 + 40 + 8LL * (int)i);
              if (v24 != 0) {
                *(float*)(v24 + 52) = a7;
                *(_BYTE*)(v24 + 128) = 1;
                v22 = *(_DWORD*)(v17 + 36);
              }
            }
          }
          v17 = *v16;
          if (*v16 == 0) {
            goto LABEL_27;
          }
        }
      }
    }
    if (*(_DWORD*)(v17 + 16) == *((_DWORD*)v16 + 2) &&
        (result = *(const char**)(*(_QWORD*)(v17 + 24) + 112LL)) != nullptr) {
      result = (const char*)strstr_alt1(result, GameData_1a98e79_alt1),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((a5 & 1) == 0 && result == nullptr) {
        return result;
      }
    }
    else {
    LABEL_27:
      if ((a5 & 1) == 0) {
        return result;
      }
    }
    result = (const char*)v16;
    if (&game_map_anonymous_CameraShakeCallback_vtable_ptr != nullptr) {
      v36_.v38 = v36_.vars0;
      v36_.vars0 = v36_.vars8;
      v36_.vars8 = v36_.vars10;
      v25 = *v16;
      v16[12] = (__int64)&game_map_anonymous_CameraShakeCallback_vtable_ptr;
      if (v25 != 0 && *(_DWORD*)(v25 + 16) == *((_DWORD*)v16 + 2) &&
          *(int*)(v25 + 36) >= 1) {
        v26 = *(_QWORD*)(v25 + 40);
        if (v26 != 0 && (*((_BYTE*)v16 + 84) & 1) != 0 &&
            (*((_BYTE*)v16 + 93) & 1) == 0 &&
            *(float*)(v26 + 240) <= 0x0.0p+0f) {
          v27 = v16[1];
          v28 = result;
          *(_QWORD*)&v35 = 0;
          DWORD2(v35) = 0x2000;
          GameRoutine_112180((__int64)&v35, (__int64)(result + 16)),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_14a1240(&v36_.v36, v25, v27, (__int64)&v35),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          result = (const char*)(***((__int64 (****)(_QWORD, __int64*))v28 +
                                     12))(*((_QWORD*)v28 + 12), &v36_.v36),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v29 = v36_.v37;
          *((_BYTE*)v28 + 104) = 1;
          if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            return (const char*)std___1___shared_weak_count___release_weak_alt1(
                v29);
          }
        }
      }
    }
  }
  return result;
}

void EffectConst_961740(__int64 a1, const char** a2, __int64 a3, char a4)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  int v8;
  int v9;
  unsigned __int64 v10;
  __int128 v11;
  __int64 v12;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  char v23;
  char v25;
  float32x4_t v26;
  struct {
    _QWORD v27[2];
    unsigned __int32 v28;
  } v27_;
  __int128 v29[13];

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v9 = 2)
           : (v9 = 3),
       (v9 & v8) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_13;
    }
    v10 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v10 + 172) == *(float*)(v10 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v10 + 160) + 16LL))(v10 + 160);
    }
    else {
      v11 = *(_OWORD*)(v10 + 208);
    }
    if (*((float*)&v11 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v10 + 160) + 16LL))(
                        v10 + 160, *((float*)&v11 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_13:
      v12 = *GameData_21309c8[0];
      if (*GameData_21309c8[0] != 0) {
        LOBYTE(v12) = *(_BYTE*)(v12 + 8) == 2;
      }
      if ((v12 & 1) == 0 && *GameData_212ce98[0] != 0 &&
          game_script_map_effect_g_effect_manager != 0) {
        if ((a4 & 1) != 0) {
          v14 = *a2;
          if (*a2 != nullptr &&
              (v15 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112),
               (v16 = *(_QWORD*)(v15 + 24)) != 0)) {
            v17 = 0;
            if (*v14 != 0) {
              v18 = *(_DWORD*)(v15 + 32);
              if (v18 != 0) {
                v19 = 0;
                while (1) {
                  v20 = (v18 + v19) >> 1;
                  v21 = v16 + 336LL * v20;
                  v22 = strcmp_alt1(*(const char**)v21, v14);
                  if (v22 == 0) {
                    break;
                  }
                  if (v22 < 0) {
                    v19 = v20 + 1;
                  }
                  else {
                    v18 = (v18 + v19) >> 1;
                  }
                  if (v19 == v18) {
                    goto LABEL_31;
                  }
                }
                v17 = *(_QWORD*)(v21 + 112);
              }
            }
          }
          else {
          LABEL_31:
            v17 = 0;
          }
          v23 = GameRoutine_960f80_alt1(v17);
          if (v23 != 0) {
            v25 = v23;
          }
          else {
            v25 = 2;
          }
          GameRoutine_961090_alt1(v29, a3, v25, 1);
          EffectConst_961260_alt1(a1, (_BYTE**)a2, (__int64)v29);
        }
        else if (a3 != 0) {
          UnitActor_81d430((void*)(&v26), a3);
          v27_.v27[1] = LANES128(v26).n128_u64[0];
          v27_.v28 = LANES128(v26).n128_u32[2];
          v27_.v27[0] = GameData_212d1e0[0] + 2;
          snd_Fade_Fade_10c830_alt1((__int64)v29, 0x0.0p+0f);
          snd_playAt_ff5f0_alt1(
              (void*)(handle), (__int64)"SE_ACT_LD_Hit_Common",
              (__int64)"SE_ACT_LD_Hit_Common", (__int64)v27_.v27, (__int64)v29,
              0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(v29);
        }
      }
    }
  }
}

void EffectConst_9619a0(__int64 a1, const char** a2, __int64 a3, char a4)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  int v8;
  int v9;
  unsigned __int64 v10;
  __int128 v11;
  __int64 v12;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  char v23;
  char v25;
  float32x4_t v26;
  struct {
    _QWORD v27[2];
    unsigned __int32 v28;
  } v27_;
  __int128 v29[13];

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v9 = 2)
           : (v9 = 3),
       (v9 & v8) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_13;
    }
    v10 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v10 + 172) == *(float*)(v10 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v10 + 160) + 16LL))(v10 + 160);
    }
    else {
      v11 = *(_OWORD*)(v10 + 208);
    }
    if (*((float*)&v11 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v10 + 160) + 16LL))(
                        v10 + 160, *((float*)&v11 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_13:
      v12 = *GameData_21309c8[0];
      if (*GameData_21309c8[0] != 0) {
        LOBYTE(v12) = *(_BYTE*)(v12 + 8) == 2;
      }
      if ((v12 & 1) == 0 && *GameData_212ce98[0] != 0 &&
          game_script_map_effect_g_effect_manager != 0) {
        if ((a4 & 1) != 0) {
          v14 = *a2;
          if (*a2 != nullptr &&
              (v15 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112),
               (v16 = *(_QWORD*)(v15 + 24)) != 0)) {
            v17 = 0;
            if (*v14 != 0) {
              v18 = *(_DWORD*)(v15 + 32);
              if (v18 != 0) {
                v19 = 0;
                while (1) {
                  v20 = (v18 + v19) >> 1;
                  v21 = v16 + 336LL * v20;
                  v22 = strcmp_alt1(*(const char**)v21, v14);
                  if (v22 == 0) {
                    break;
                  }
                  if (v22 < 0) {
                    v19 = v20 + 1;
                  }
                  else {
                    v18 = (v18 + v19) >> 1;
                  }
                  if (v19 == v18) {
                    goto LABEL_31;
                  }
                }
                v17 = *(_QWORD*)(v21 + 112);
              }
            }
          }
          else {
          LABEL_31:
            v17 = 0;
          }
          v23 = GameRoutine_960f80_alt1(v17);
          if (v23 != 0) {
            v25 = v23;
          }
          else {
            v25 = 2;
          }
          GameRoutine_961090_alt1(v29, a3, v25, 0);
          EffectConst_961260_alt1(a1, (_BYTE**)a2, (__int64)v29);
        }
        else if (a3 != 0) {
          UnitActor_81d430((void*)(&v26), a3);
          v27_.v27[1] = LANES128(v26).n128_u64[0];
          v27_.v28 = LANES128(v26).n128_u32[2];
          v27_.v27[0] = GameData_212d1e0[0] + 2;
          snd_Fade_Fade_10c830_alt1((__int64)v29, 0x0.0p+0f);
          snd_playAt_ff5f0_alt1(
              (void*)(handle), (__int64)"SE_ACT_LD_Hit_Recovery_Common",
              (__int64)"SE_ACT_LD_Hit_Recovery_Common", (__int64)v27_.v27,
              (__int64)v29, 0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(v29);
        }
      }
    }
  }
}

__int64 EffectConst_961d00(__int64 a1, const char** a2, int a3, int a4, int a5,
                           int a6, char a7)
{
  int v14;
  int v15;
  unsigned __int64 v16;
  __int128 v17;
  __int64 result;
  __int64 v19;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  __int128 v26;
  float v27;
  float v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float v36;
  struct {
    _QWORD v37[4];
    char v38;
    char gap49_[7];
    char v39;
    char gap57_[15];
    __int64 v40;
    char v41;
    char gap81_[15];
    __int64 v42;
    char v43;
    char gap105_[15];
    __int64 v44;
  } v37_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v14 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v15 = (v14 & 8) != 0 ? 2 : 3;
    if ((v15 & v14) == 0) {
      return 0;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v16 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v16 + 172) == *(float*)(v16 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v16 + 160) + 16LL))(v16 + 160);
    }
    else {
      v17 = *(_OWORD*)(v16 + 208);
    }
    if (*((float*)&v17 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v16 + 160) + 16LL))(
                        v16 + 160, *((float*)&v17 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return 0;
    }
  }
  v19 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    LOBYTE(v19) = *(_BYTE*)(v19 + 8) == 2;
  }
  result = 0;
  if ((v19 & 1) == 0 && *GameData_212ce98[0] != 0 &&
      game_script_map_effect_g_effect_manager != 0) {
    GameRoutine_962680((__int64)v37_.v37, a2);
    v21 = 0x0.0p+0f;
    v22 = (float)((float)(a4 + 256) * 0x1.4000000000000p+2f) +
          0x1.4000000000000p+1f;
    v23 = *GameData_212ce80[0];
    v24 = v22 + -0x1.4000000000000p+10f;
    v25 = 0x0.0p+0f;
    if (*GameData_212ce80[0] != 0) {
      v36 = v24;
      v25 = Height_7c4d10(
          *(_QWORD*)(v23 + 61456),
          (float)((float)((float)(a3 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f,
          v24);
      v24 = v36;
    }
    *(_QWORD*)&v26 =
        __PAIR64__(LODWORD(v25),
                   COERCE_UNSIGNED_INT((float)((float)((float)(a3 + 256) *
                                                       0x1.4000000000000p+2f) +
                                               0x1.4000000000000p+1f) +
                                       -0x1.4000000000000p+10f));
    *((_QWORD*)&v26 + 1) = LODWORD(v24);
    *(_OWORD*)v37_.v37 = v26;
    v27 = (float)((float)((float)(a6 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    if (v23 != 0) {
      v28 = Height_7c4d10(
          *(_QWORD*)(v23 + 61456),
          (float)((float)((float)(a5 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f,
          v27);
      v27 = (float)((float)((float)(a6 + 256) * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
      v21 = v28;
    }
    *(_QWORD*)&v29 =
        __PAIR64__(LODWORD(v21),
                   COERCE_UNSIGNED_INT((float)((float)((float)(a5 + 256) *
                                                       0x1.4000000000000p+2f) +
                                               0x1.4000000000000p+1f) +
                                       -0x1.4000000000000p+10f));
    v37_.v38 = a7 & 1;
    *((_QWORD*)&v29 + 1) = LODWORD(v27);
    *(_OWORD*)&v37_.v37[2] = v29;
    result = GameHr_962000(a1, (__int64)v37_.v37);
    if ((v37_.v43 & 1) != 0 && v37_.v44 != 0) {
      v30 = result;
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v37_.v44);
      result = v30;
    }
    if ((v37_.v41 & 1) != 0 && v37_.v42 != 0) {
      v32 = result;
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v37_.v42);
      result = v32;
    }
    if ((v37_.v39 & 1) != 0 && v37_.v40 != 0) {
      v34 = result;
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v37_.v40);
      return v34;
    }
  }
  return result;
}

__int64 EffectConst_9629e0(__int64 a1, const char** a2, int a3, int a4,
                           __int64 a5, char a6)
{
  int v12;
  int v13;
  unsigned __int64 v14;
  __int128 v15;
  __int64 result;
  char v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  int v24;
  int v25;
  __int128 v26;
  int v27;
  float v28;
  float v29;
  float v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  struct {
    _QWORD v40[4];
    char v41;
    char gap49_[7];
    char v42;
    char gap57_[15];
    __int64 v43;
    char v44;
    char gap81_[15];
    __int64 v45;
    char v46;
    char gap105_[15];
    __int64 v47;
  } v40_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v12 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v13 = (v12 & 8) != 0 ? 2 : 3;
    if ((v13 & v12) == 0) {
      return 0;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v14 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v14 + 172) == *(float*)(v14 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v14 + 160) + 16LL))(v14 + 160);
    }
    else {
      v15 = *(_OWORD*)(v14 + 208);
    }
    if (*((float*)&v15 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v14 + 160) + 16LL))(
                        v14 + 160, *((float*)&v15 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return 0;
    }
  }
  v17 = GameData_22400f8;
  if (GameData_22400f8 != 0) {
    v17 = *(_BYTE*)(GameData_22400f8 + 8) == 2;
  }
  result = 0;
  if ((v17 & 1) == 0 && GameData_21ca300 != 0) {
    result = 0;
    if (a5 != 0 && game_script_map_effect_g_effect_manager != 0) {
      GameRoutine_962680((__int64)v40_.v40, a2);
      v18 = 0x0.0p+0f;
      v19 = (float)((float)((float)(a3 + 256) * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
      v20 = (float)((float)(a4 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
      v21 = GameData_21ca2e8;
      v22 = v20 + -0x1.4000000000000p+10f;
      v23 = 0x0.0p+0f;
      if (GameData_21ca2e8 != 0) {
        v38 = v22;
        v23 = Height_7c4d10(
            *(_QWORD*)(GameData_21ca2e8 + 61456),
            (float)((float)((float)(a3 + 256) * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f,
            v22);
        v22 = v38;
      }
      v40_.v40[0] = __PAIR64__(LODWORD(v23), LODWORD(v19));
      v24 = *(_DWORD*)(a5 + 592);
      v25 = v24 + 2 * *(char*)(a5 + 584);
      *(_QWORD*)&v26 = __PAIR64__(LODWORD(v23), LODWORD(v19));
      v27 = *(char*)(a5 + 585);
      *((_QWORD*)&v26 + 1) = LODWORD(v22);
      *(_OWORD*)v40_.v40 = v26;
      v28 = (float)v25 * 0x1.4000000000000p+1f;
      v29 = (float)(v24 + 2 * v27) * 0x1.4000000000000p+1f;
      if (v21 != 0) {
        v39 = (float)(v24 + 2 * v27) * 0x1.4000000000000p+1f;
        v30 = Height_7c4d10(*(_QWORD*)(v21 + 61456), v28, v29);
        v29 = v39;
        v18 = v30;
      }
      *(_QWORD*)&v31 = __PAIR64__(LODWORD(v18), LODWORD(v28));
      v40_.v41 = a6 & 1;
      *((_QWORD*)&v31 + 1) = LODWORD(v29);
      *(_OWORD*)&v40_.v40[2] = v31;
      result = GameHr_962000(a1, (__int64)v40_.v40);
      if ((v40_.v46 & 1) != 0 && v40_.v47 != 0) {
        v32 = result;
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v40_.v47);
        result = v32;
      }
      if ((v40_.v44 & 1) != 0 && v40_.v45 != 0) {
        v34 = result;
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v40_.v45);
        result = v34;
      }
      if ((v40_.v42 & 1) != 0 && v40_.v43 != 0) {
        v36 = result;
        v37 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v40_.v43);
        return v36;
      }
    }
  }
  return result;
}

__int64 EffectConst_962ce0(__int64 a1, _QWORD* a2, __int128* a3, __int128* a4,
                           char a5)
{

#pragma clang fp contract(off)
  int v10;
  int v11;
  unsigned __int64 v12;
  __int128 v13;
  __int64 result;
  char v15;
  const char* v16;
  const char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  char v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    _QWORD v46[4];
    char v47;
    char gap33_[7];
    __int64 v48;
    unsigned __int64 v49;
    __int64 v50;
    __int64 v51;
    unsigned __int64 v52;
    __int64 v53;
    __int64 v54;
    unsigned __int64 v55;
    __int64 v56;
  } v46_;
  struct {
    __int64 v57;
    unsigned __int64 v58;
    __int64 v59;
  } v57_;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v11 = 2)
           : (v11 = 3),
       (v11 & v10) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v12 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v12 + 172) == *(float*)(v12 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v12 + 160) + 16LL))(v12 + 160);
    }
    else {
      v13 = *(_OWORD*)(v12 + 208);
    }
    if (*((float*)&v13 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v12 + 160) + 16LL))(
                        v12 + 160, *((float*)&v13 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_14:
      v15 = GameData_22400f8;
      if (GameData_22400f8 != 0) {
        v15 = *(_BYTE*)(GameData_22400f8 + 8) == 2;
      }
      result = 0;
      if ((v15 & 1) == 0 && GameData_21ca300 != 0) {
        result = 0;
        if (a2 != nullptr && game_script_map_effect_g_effect_manager != 0) {
          v16 = (const char*)a2[51];
          v46_.v47 = 0;
          memset(v46_.v46, 0, sizeof(v46_.v46));
          v46_.v48 = 0;
          v46_.v49 = 0;
          v46_.v50 = 0;
          v46_.v51 = 0;
          v46_.v52 = 0;
          v46_.v53 = 0;
          v46_.v54 = 0;
          v46_.v55 = 0;
          v46_.v56 = 0;
          if (v16 != nullptr) {
            v17 = v16;
          }
          else {
            v17 = &GameData_1a9f09e;
          }
          v18 = strlen_alt1(v17);
          if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_82;
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
                fw_memory_g_heap_manager, v21, 16, 0);
            v57_.v58 = v19;
            v57_.v59 = (__int64)v20;
            v57_.v57 = v21 | 1;
          }
          else {
            LOBYTE(v57_.v57) = 2 * v18;
            v20 = (char*)&v57_.v57 + 1;
            if (v18 == 0) {
            LABEL_32:
              v20[v19] = 0;
              v46_.v48 = v57_.v57;
              v46_.v49 = v57_.v58;
              v46_.v50 = v57_.v59;
              if (a2[52] != 0) {
                v22 = (const char*)a2[52];
              }
              else {
                v22 = &GameData_1a9f09e;
              }
              v23 = strlen_alt1(v22);
              if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_82;
              }
              v24 = v23;
              if (v23 >= 0x17) {
                if ((v23 | 7) == 0x17) {
                  v26 = 26;
                }
                else {
                  v26 = (v23 | 7) + 1;
                }
                v25 = (char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v26, 16, 0);
                v57_.v58 = v24;
                v57_.v59 = (__int64)v25;
                v57_.v57 = v26 | 1;
              }
              else {
                LOBYTE(v57_.v57) = 2 * v23;
                v25 = (char*)&v57_.v57 + 1;
                if (v23 == 0) {
                  goto LABEL_44;
                }
              }
              memmove_alt1((__int64)v25, (__int64)v22, v24);
            LABEL_44:
              v27 = v46_.v51;
              v25[v24] = 0;
              if ((v27 & 1) != 0 && v46_.v53 != 0) {
                v28 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v28 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v46_.v53);
              }
              v46_.v51 = v57_.v57;
              v46_.v52 = v57_.v58;
              v46_.v53 = v57_.v59;
              if (a2[53] != 0) {
                v29 = (const char*)a2[53];
              }
              else {
                v29 = &GameData_1a9f09e;
              }
              v30 = strlen_alt1(v29);
              if (v30 < 0xFFFFFFFFFFFFFFF7LL) {
                v31 = v30;
                if (v30 >= 0x17) {
                  if ((v30 | 7) == 0x17) {
                    v33 = 26;
                  }
                  else {
                    v33 = (v30 | 7) + 1;
                  }
                  v32 = (char*)fw_memory_HeapManager_Allocate(
                      fw_memory_g_heap_manager, v33, 16, 0);
                  v57_.v58 = v31;
                  v57_.v59 = (__int64)v32;
                  v57_.v57 = v33 | 1;
                }
                else {
                  LOBYTE(v57_.v57) = 2 * v30;
                  v32 = (char*)&v57_.v57 + 1;
                  if (v30 == 0) {
                  LABEL_61:
                    v34 = v46_.v54;
                    v32[v31] = 0;
                    if ((v34 & 1) != 0 && v46_.v56 != 0) {
                      v35 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v35 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                          v46_.v56);
                    }
                    v36 = *a3;
                    v37 = *a4;
                    v46_.v54 = v57_.v57;
                    v46_.v55 = v57_.v58;
                    *(_QWORD*)&v38 = v36;
                    *(_QWORD*)&v39 = v37;
                    v46_.v56 = v57_.v59;
                    v46_.v47 = a5 & 1;
                    *((_QWORD*)&v38 + 1) = DWORD2(v36);
                    *((_QWORD*)&v39 + 1) = DWORD2(v37);
                    *(_OWORD*)v46_.v46 = v38;
                    *(_OWORD*)&v46_.v46[2] = v39;
                    result = GameHr_962000(a1, (__int64)v46_.v46);
                    if ((v46_.v54 & 1) != 0 && v46_.v56 != 0) {
                      v40 = result;
                      v41 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v41 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                          v46_.v56);
                      result = v40;
                    }
                    if ((v46_.v51 & 1) != 0 && v46_.v53 != 0) {
                      v42 = result;
                      v43 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v43 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                          v46_.v53);
                      result = v42;
                    }
                    if ((v46_.v48 & 1) != 0 && v46_.v50 != 0) {
                      v44 = result;
                      v45 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v45 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                          v46_.v50);
                      return v44;
                    }
                    return result;
                  }
                }
                memmove_alt1((__int64)v32, (__int64)v29, v31);
                goto LABEL_61;
              }
            LABEL_82:
              String_60a1d0();
            }
          }
          memmove_alt1((__int64)v20, (__int64)v17, v19);
          goto LABEL_32;
        }
      }
      return result;
    }
  }
  return 0;
}

__int64 EffectConst_963210(__int64 a1, _QWORD* a2, __int128* a3, __int128* a4,
                           char a5)
{

#pragma clang fp contract(off)
  int v10;
  int v11;
  unsigned __int64 v12;
  __int128 v13;
  __int64 result;
  char v15;
  const char* v16;
  const char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  char v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    _QWORD v46[4];
    char v47;
    char gap33_[7];
    __int64 v48;
    unsigned __int64 v49;
    __int64 v50;
    __int64 v51;
    unsigned __int64 v52;
    __int64 v53;
    __int64 v54;
    unsigned __int64 v55;
    __int64 v56;
  } v46_;
  struct {
    __int64 v57;
    unsigned __int64 v58;
    __int64 v59;
  } v57_;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v11 = 2)
           : (v11 = 3),
       (v11 & v10) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v12 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v12 + 172) == *(float*)(v12 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v12 + 160) + 16LL))(v12 + 160);
    }
    else {
      v13 = *(_OWORD*)(v12 + 208);
    }
    if (*((float*)&v13 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v12 + 160) + 16LL))(
                        v12 + 160, *((float*)&v13 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_14:
      v15 = GameData_22400f8;
      if (GameData_22400f8 != 0) {
        v15 = *(_BYTE*)(GameData_22400f8 + 8) == 2;
      }
      result = 0;
      if ((v15 & 1) == 0 && GameData_21ca300 != 0) {
        result = 0;
        if (a2 != nullptr && game_script_map_effect_g_effect_manager != 0) {
          v16 = (const char*)a2[95];
          v46_.v47 = 0;
          memset(v46_.v46, 0, sizeof(v46_.v46));
          v46_.v48 = 0;
          v46_.v49 = 0;
          v46_.v50 = 0;
          v46_.v51 = 0;
          v46_.v52 = 0;
          v46_.v53 = 0;
          v46_.v54 = 0;
          v46_.v55 = 0;
          v46_.v56 = 0;
          if (v16 != nullptr) {
            v17 = v16;
          }
          else {
            v17 = &GameData_1a9f09e;
          }
          v18 = strlen_alt1(v17);
          if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_82;
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
                fw_memory_g_heap_manager, v21, 16, 0);
            v57_.v58 = v19;
            v57_.v59 = (__int64)v20;
            v57_.v57 = v21 | 1;
          }
          else {
            LOBYTE(v57_.v57) = 2 * v18;
            v20 = (char*)&v57_.v57 + 1;
            if (v18 == 0) {
            LABEL_32:
              v20[v19] = 0;
              v46_.v48 = v57_.v57;
              v46_.v49 = v57_.v58;
              v46_.v50 = v57_.v59;
              if (a2[96] != 0) {
                v22 = (const char*)a2[96];
              }
              else {
                v22 = &GameData_1a9f09e;
              }
              v23 = strlen_alt1(v22);
              if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_82;
              }
              v24 = v23;
              if (v23 >= 0x17) {
                if ((v23 | 7) == 0x17) {
                  v26 = 26;
                }
                else {
                  v26 = (v23 | 7) + 1;
                }
                v25 = (char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v26, 16, 0);
                v57_.v58 = v24;
                v57_.v59 = (__int64)v25;
                v57_.v57 = v26 | 1;
              }
              else {
                LOBYTE(v57_.v57) = 2 * v23;
                v25 = (char*)&v57_.v57 + 1;
                if (v23 == 0) {
                  goto LABEL_44;
                }
              }
              memmove_alt1((__int64)v25, (__int64)v22, v24);
            LABEL_44:
              v27 = v46_.v51;
              v25[v24] = 0;
              if ((v27 & 1) != 0 && v46_.v53 != 0) {
                v28 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v28 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v46_.v53);
              }
              v46_.v51 = v57_.v57;
              v46_.v52 = v57_.v58;
              v46_.v53 = v57_.v59;
              if (a2[97] != 0) {
                v29 = (const char*)a2[97];
              }
              else {
                v29 = &GameData_1a9f09e;
              }
              v30 = strlen_alt1(v29);
              if (v30 < 0xFFFFFFFFFFFFFFF7LL) {
                v31 = v30;
                if (v30 >= 0x17) {
                  if ((v30 | 7) == 0x17) {
                    v33 = 26;
                  }
                  else {
                    v33 = (v30 | 7) + 1;
                  }
                  v32 = (char*)fw_memory_HeapManager_Allocate(
                      fw_memory_g_heap_manager, v33, 16, 0);
                  v57_.v58 = v31;
                  v57_.v59 = (__int64)v32;
                  v57_.v57 = v33 | 1;
                }
                else {
                  LOBYTE(v57_.v57) = 2 * v30;
                  v32 = (char*)&v57_.v57 + 1;
                  if (v30 == 0) {
                  LABEL_61:
                    v34 = v46_.v54;
                    v32[v31] = 0;
                    if ((v34 & 1) != 0 && v46_.v56 != 0) {
                      v35 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v35 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                          v46_.v56);
                    }
                    v36 = *a3;
                    v37 = *a4;
                    v46_.v54 = v57_.v57;
                    v46_.v55 = v57_.v58;
                    *(_QWORD*)&v38 = v36;
                    *(_QWORD*)&v39 = v37;
                    v46_.v56 = v57_.v59;
                    v46_.v47 = a5 & 1;
                    *((_QWORD*)&v38 + 1) = DWORD2(v36);
                    *((_QWORD*)&v39 + 1) = DWORD2(v37);
                    *(_OWORD*)v46_.v46 = v38;
                    *(_OWORD*)&v46_.v46[2] = v39;
                    result = GameHr_962000(a1, (__int64)v46_.v46);
                    if ((v46_.v54 & 1) != 0 && v46_.v56 != 0) {
                      v40 = result;
                      v41 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v41 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                          v46_.v56);
                      result = v40;
                    }
                    if ((v46_.v51 & 1) != 0 && v46_.v53 != 0) {
                      v42 = result;
                      v43 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v43 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                          v46_.v53);
                      result = v42;
                    }
                    if ((v46_.v48 & 1) != 0 && v46_.v50 != 0) {
                      v44 = result;
                      v45 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v45 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                          v46_.v50);
                      return v44;
                    }
                    return result;
                  }
                }
                memmove_alt1((__int64)v32, (__int64)v29, v31);
                goto LABEL_61;
              }
            LABEL_82:
              String_60a1d0();
            }
          }
          memmove_alt1((__int64)v20, (__int64)v17, v19);
          goto LABEL_32;
        }
      }
      return result;
    }
  }
  return 0;
}

__int64 EffectConst_963740(__int64 a1, __int64* a2, int a3, int a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  __int128 v19;
  char v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  float v33;
  float v34;
  int32x2_t v35;
  __int128 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  float v50;
  float v51;
  int32x2_t v52;
  __int64 v53;
  __int128 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  unsigned __int64 v61;
  __int128 v62;
  char v63;
  float v64;
  float v65;
  float v66;
  float v67;
  __int128 v68;
  __int128 v69;
  struct {
    __int64 v70;
    __int64 v71;
    char gap80_[8];
    __int64 v72;
  } v70_;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  result = GameRoutine_966bd0(game_script_map_effect_g_effect_manager + 8),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (result != 0) {
    v9 = result;
    GameRoutine_60a020(result + 16, *a2),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v10 = *a2;
    *(_QWORD*)v9 = game_HashString(v10),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_QWORD*)(v9 + 8) = v10;
    *(_DWORD*)(v9 + 40) = a3;
    *(_DWORD*)(v9 + 44) = a4;
    v70_.v72 = a1;
    if (a1 != 0) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v16 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v17 = 2)
               : (v17 = 3),
           (v17 & v16) != 0)) {
        if (game_ProcFadeView_instance_ == 0) {
          goto LABEL_15;
        }
        v18 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v18 + 172) == *(float*)(v18 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v18 + 160) + 16LL))(v18 +
                                                                         160),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        else {
          v19 = *(_OWORD*)(v18 + 208);
        }
        if (*((float*)&v19 + 3) != 0x1.0000000000000p+0f ||
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v18 + 160) + 16LL))(
                            v18 + 160, *((float*)&v19 + 3)))
                    .n128_f32[3] != 0x1.0000000000000p+0f) {
        LABEL_15:
          v20 = GameData_22400f8;
          if (GameData_22400f8 != 0) {
            v20 = *(_BYTE*)(GameData_22400f8 + 8) == 2;
          }
          if ((v20 & 1) == 0 && GameData_21ca300 != 0 &&
              game_script_map_effect_g_effect_manager != 0) {
            v21 = (__int64*)GameData_21f43e0;
            v22 = GameData_21f43e8;
            v23 = (*(_BYTE*)(v9 + 16) & 1) != 0 ? *(_QWORD*)(v9 + 32) : v9 + 17;
            if (v23 != 0 && GameData_21f43e0 != GameData_21f43e8) {
              while (1) {
                if (*v21 != 0) {
                  v25 = game_util_Format("%s_%s", v23, *v21, v11, v12, v13, v14,
                                         v15, SLOBYTE(v64)),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v12 = COERCE_AS(
                      __typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  v26 = *(_QWORD*)(eft_g_effectSystem + 112);
                  v27 = *(_QWORD*)(v26 + 24);
                  if (v27 != 0) {
                    v28 = (__int64)v25;
                    if (*v25 != 0) {
                      v29 = *(_DWORD*)(v26 + 32);
                      if (v29 != 0) {
                        break;
                      }
                    }
                  }
                }
              LABEL_28:
                if (++v21 == (__int64*)v22) {
                  goto LABEL_46;
                }
              }
              v30 = 0;
              while (1) {
                v31 = (v29 + v30) >> 1;
                v32 = strcmp(*(_QWORD*)(v27 + 336LL * v31), v28),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                if (v32 == 0) {
                  break;
                }
                if (v32 < 0) {
                  v30 = v31 + 1;
                }
                else {
                  v29 = (v29 + v30) >> 1;
                }
                if (v30 == v29) {
                  goto LABEL_28;
                }
              }
              v33 = (float)((float)((float)(*(_DWORD*)(v9 + 40) + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f;
              v34 = (float)((float)((float)(*(_DWORD*)(v9 + 44) + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f;
              if (GameData_21ca2e8 != 0) {
                v64 = (float)((float)((float)(*(_DWORD*)(v9 + 40) + 256) *
                                      0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f;
                v66 = (float)((float)((float)(*(_DWORD*)(v9 + 44) + 256) *
                                      0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f;
                LANES64(v35).n64_f32[0] = Height_7c4d10(
                    *(_QWORD*)(GameData_21ca2e8 + 61456), v64, v34),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                v33 = v64;
                v34 = v66;
              }
              else {
                PSEUDO_LOW_LANE64(v35, n64_u64, 0);
              }
              *(_QWORD*)&v36 =
                  __PAIR64__(LANES64(v35).n64_u32[0], LODWORD(v33));
              PSEUDO_LOW_LANE64(
                  v35, n64_u32,
                  COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f)));
              *((_QWORD*)&v36 + 1) = LODWORD(v34);
              v69 = v36;
              EffectConst_961520_alt2(&v70_.v70, v28, (__int64*)&v69, 5, 0,
                                      LANES64(v35).n64_f32[0], 0x0.0p+0f),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v12 = COERCE_AS(
                      __typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v37 = v70_.v71;
              if (v70_.v71 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v70_.v71 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v12 = COERCE_AS(
                        __typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v15 = COERCE_AS(
                        __typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                std___1___shared_weak_count___release_weak(v37),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v12 = COERCE_AS(
                        __typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v15 = COERCE_AS(
                        __typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
            }
          }
        }
      }
    }
  LABEL_46:
    v38 = (__int64*)GameData_21f43f8;
    v39 = GameData_21f4400;
    if ((*(_BYTE*)(v9 + 16) & 1) != 0) {
      v40 = *(_QWORD*)(v9 + 32);
    }
    else {
      v40 = v9 + 17;
    }
    if (v40 == 0 || GameData_21f43f8 == GameData_21f4400) {
      return 0;
    }
    else {
      while (1) {
        if (*v38 != 0) {
          v42 = game_util_Format("%s_%s", v40, *v38, v11, v12, v13, v14, v15,
                                 SLOBYTE(v64)),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v43 = *(_QWORD*)(eft_g_effectSystem + 112);
          v44 = *(_QWORD*)(v43 + 24);
          if (v44 != 0) {
            v45 = (__int64)v42;
            if (*v42 != 0) {
              v46 = *(_DWORD*)(v43 + 32);
              if (v46 != 0) {
                break;
              }
            }
          }
        }
      LABEL_55:
        if (++v38 == (__int64*)v39) {
          return 0;
        }
      }
      v47 = 0;
      while (1) {
        v48 = (v46 + v47) >> 1;
        v49 = strcmp(*(_QWORD*)(v44 + 336LL * v48), v45),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v49 == 0) {
          break;
        }
        if (v49 < 0) {
          v47 = v48 + 1;
        }
        else {
          v46 = (v46 + v47) >> 1;
        }
        if (v47 == v46) {
          goto LABEL_55;
        }
      }
      v50 = (float)((float)((float)(*(_DWORD*)(v9 + 40) + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
      v51 = (float)((float)((float)(*(_DWORD*)(v9 + 44) + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
      if (GameData_21ca2e8 != 0) {
        v65 = (float)((float)((float)(*(_DWORD*)(v9 + 40) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        v67 = (float)((float)((float)(*(_DWORD*)(v9 + 44) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        LANES64(v52).n64_f32[0] =
            Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456), v65, v51),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v50 = v65;
        v51 = v67;
      }
      else {
        PSEUDO_LOW_LANE64(v52, n64_u64, 0);
      }
      v53 = v70_.v72;
      *(_QWORD*)&v54 = __PAIR64__(LANES64(v52).n64_u32[0], LODWORD(v50));
      PSEUDO_LOW_LANE64(v52, n64_u32,
                        COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f)));
      *((_QWORD*)&v54 + 1) = LODWORD(v51);
      v68 = v54;
      EffectConst_961520_alt2((__int64*)&v69, v45, (__int64*)&v68, 5, 0,
                              LANES64(v52).n64_f32[0], 0x0.0p+0f),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v56 = *((_QWORD*)&v69 + 1);
      v55 = v69;
      if (*((_QWORD*)&v69 + 1) != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(*((_QWORD*)&v69 + 1) + 8LL), 1u,
            memory_order_relaxed);
      }
      v57 = *(_QWORD*)(v9 + 56);
      *(_QWORD*)(v9 + 48) = v55;
      *(_QWORD*)(v9 + 56) = v56;
      if (v57 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          std___1___shared_weak_count___release_weak(v57),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        v56 = *(_QWORD*)(v9 + 56);
      }
      if (v56 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          std___1___shared_weak_count___release_weak(v56),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      }
      v58 = *((_QWORD*)&v69 + 1);
      if (*((_QWORD*)&v69 + 1) != 0 &&
          atomic_fetch_add(
              (atomic_ullong* volatile)(*((_QWORD*)&v69 + 1) + 8LL),
              0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        std___1___shared_weak_count___release_weak(v58),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v59 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v60 = 2)
               : (v60 = 3),
           (v60 & v59) != 0)) {
        if (game_ProcFadeView_instance_ == 0) {
          goto LABEL_94;
        }
        v61 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v61 + 172) == *(float*)(v61 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v61 + 160) + 16LL))(v61 +
                                                                         160),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        else {
          v62 = *(_OWORD*)(v61 + 208);
        }
        if (*((float*)&v62 + 3) != 0x1.0000000000000p+0f ||
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v61 + 160) + 16LL))(
                            v61 + 160, *((float*)&v62 + 3)))
                    .n128_f32[3] != 0x1.0000000000000p+0f) {
        LABEL_94:
          v63 = GameData_22400f8;
          if (GameData_22400f8 != 0) {
            v63 = *(_BYTE*)(GameData_22400f8 + 8) == 2;
          }
          if ((v63 & 1) == 0 && GameData_21ca300 != 0 &&
              game_script_map_effect_g_effect_manager != 0) {
            GameRoutine_14a1e70((__int64**)(v9 + 48), 0x1.4000000000000p+4f),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
        }
      }
      return GameRoutine_9a48c0(v53, (__int64**)(v9 + 48));
    }
  }
  return result;
}

bool EffectConst_964040(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64 v6;
  char** v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int128 v21;
  __int128 v22;
  __int64 v24;
  __int128 v25;
  char* v26;
  const char* v27;
  char* v28;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 == 0) {
    return v1 != 0;
  }
  if (*(_BYTE*)(a1 + 1) != 0) {
    goto LABEL_3;
  }
  v5 = (__int64**)(a1 + 8);
  v4 = *(__int64**)(a1 + 8);
  v6 = *v4;
  if (*v4 == 0 || *(_DWORD*)(v6 + 16) != *((_DWORD*)v4 + 2)) {
    goto LABEL_27;
  }
  v7 = *(char***)(v6 + 24);
  v8 = *(_QWORD*)(v6 + 40);
  v28 = *v7;
  v26 = "_Destroy";
  v27 = "_Loop";
  v9 = 16;
  if (*(_BYTE*)(v8 + 129) != 0) {
    v9 = 112;
  }
  v25 = *(_OWORD*)(v8 + v9);
  EffectConst_964320(&v28, (unsigned __int8**)&v27, &v26, (__int64*)&v25);
  if (*(_BYTE*)(a1 + 1) != 0) {
  LABEL_3:
    v3 = (__int64*)(a1 + 8);
  }
  else {
  LABEL_27:
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v11 = 2)
             : (v11 = 3),
         (v11 & v10) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_21;
      }
      v12 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v12 + 172) == *(float*)(v12 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v12 + 160) + 16LL))(v12 +
                                                                       160);
      }
      else {
        v13 = *(_OWORD*)(v12 + 208);
      }
      if (*((float*)&v13 + 3) != 0x1.0000000000000p+0f ||
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v12 + 160) + 16LL))(
                          v12 + 160, *((float*)&v13 + 3)))
                  .n128_f32[3] != 0x1.0000000000000p+0f) {
      LABEL_21:
        v14 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          LOBYTE(v14) = *(_BYTE*)(v14 + 8) == 2;
        }
        if ((v14 & 1) == 0 && *GameData_212ce98[0] != 0 &&
            game_script_map_effect_g_effect_manager != 0) {
          v16 = *v5;
          LODWORD(v25) = 1092616192;
          game_14a1cc0(v16, 0x1.0000000000000p+0f);
          v17 = (_QWORD*)GameData_224b6a0;
          if (GameData_224b6a0 >= (unsigned __int64)GameData_224b6a8) {
            v20 = GameRoutine_14a36c0(&GameData_224b698, (__int64*)(a1 + 8),
                                      (int*)&v25);
          }
          else {
            v18 = *(_QWORD*)(a1 + 8);
            v19 = *(_QWORD*)(a1 + 16);
            if (v19 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                        memory_order_relaxed);
              *v17 = v18;
              v17[1] = v19;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                        memory_order_relaxed);
              v17[2] = 0x4120000000000000LL;
              if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
                std___1___shared_weak_count___release_weak(v19);
              }
              v20 = (__int64)(v17 + 3);
            }
            else {
              *(_QWORD*)GameData_224b6a0 = v18;
              v17[1] = 0;
              v20 = (__int64)(v17 + 3);
              v17[2] = 0x4120000000000000LL;
            }
          }
          GameData_224b6a0 = v20;
          goto LABEL_35;
        }
      }
    }
    v3 = (__int64*)(a1 + 8);
  }
  GameRoutine_14a1390(v3, 1);
LABEL_35:
  *(_QWORD*)(a1 + 24) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v24 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v24;
    __cxa_guard_release(&GameData_21a6130);
  }
  *(_DWORD*)(a1 + 48) = 0;
  v21 = GameData_21a6120;
  *(_WORD*)a1 = 512;
  *(_QWORD*)(a1 + 32) = v21;
  v22 = *(_OWORD*)(a1 + 32);
  *((_QWORD*)&v22 + 1) = DWORD2(v21);
  *(_OWORD*)(a1 + 32) = v22;
  return v1 != 0;
}

void EffectConst_964320(char** a1, unsigned __int8** a2, char** a3, __int64* a4)
{

#pragma clang fp contract(off)
  int v8;
  int v9;
  unsigned __int64 v10;
  __int128 v11;
  unsigned __int8* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  char* v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  __int64 v43;
  struct {
    __int64 v44;
    __int64 v45;
  } v44_;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v9 = 2)
           : (v9 = 3),
       (v9 & v8) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v10 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v10 + 172) == *(float*)(v10 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v10 + 160) + 16LL))(v10 + 160);
    }
    else {
      v11 = *(_OWORD*)(v10 + 208);
    }
    if (*((float*)&v11 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v10 + 160) + 16LL))(
                        v10 + 160, *((float*)&v11 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_14:
      if (GameData_22400f8 == 0 || *(_BYTE*)(GameData_22400f8 + 8) != 2) {
        v12 = *a2;
        if (*a1 != nullptr) {
          v13 = *a1;
        }
        else {
          v13 = &GameData_1a9f09e;
        }
        v14 = strlen(v13);
        v15 = strlen(v12);
        if (v15 != 0) {
          v16 = v15;
          if (v14 >= v15) {
            v17 = *v12;
            v18 = &v13[v14];
            v19 = v13;
            do {
              v20 = memchr(v19, v17, v14 - v16 + 1);
              if (v20 == 0) {
                break;
              }
              v21 = v20;
              if ((unsigned int)memcmp(v20, v12, v16) == 0) {
                if ((char*)v21 != v18) {
                  v22 = v21 - (_DWORD)v13;
                  if (v22 != -1) {
                    goto LABEL_26;
                  }
                }
                return;
              }
              v19 = (char*)(v21 + 1);
              v14 = (__int64)&v18[-v21 - 1];
            } while (v14 >= v16);
          }
        }
        else {
          v22 = 0;
        LABEL_26:
          if (*a3 != nullptr) {
            v23 = *a3;
          }
          else {
            v23 = &GameData_1a9f09e;
          }
          v24 = strlen(v23);
          v25 = v22 + (__int64)v24;
          if ((unsigned int)(v25 + 1) <= 0x3F) {
            if (v22 >= 1) {
              v26 = v22 & 7;
              if ((unsigned int)v22 >= 8) {
                v28 = 7;
                do {
                  v29 = &GameData_21f48c8[v28];
                  *(v29 - 7) = (*a1)[v28 - 7];
                  *(v29 - 6) = (*a1)[v28 - 6];
                  *(v29 - 5) = (*a1)[v28 - 5];
                  *(v29 - 4) = (*a1)[v28 - 4];
                  *(v29 - 3) = (*a1)[v28 - 3];
                  *(v29 - 2) = (*a1)[v28 - 2];
                  *(v29 - 1) = (*a1)[v28 - 1];
                  v30 = (*a1)[v28];
                  v28 += 8;
                  *v29 = v30;
                } while (v28 - (v22 & 0x7FFFFFF8) != 7);
                v27 = v28 - 7;
              }
              else {
                v27 = 0;
              }
              if ((v22 & 7) != 0) {
                do {
                  --v26;
                  GameData_21f48c8[v27] = (*a1)[v27];
                  ++v27;
                } while (v26 != 0);
              }
            }
            if (v24 >= 1) {
              v31 = v24 & 7;
              if ((unsigned __int64)(v24 & 0x7FFFFFFF) - 1 >= 7) {
                v33 = 7;
                do {
                  v34 = &GameData_21f48c8[v22 + v33];
                  *(v34 - 7) = (*a3)[v33 - 7];
                  *(v34 - 6) = (*a3)[v33 - 6];
                  *(v34 - 5) = (*a3)[v33 - 5];
                  *(v34 - 4) = (*a3)[v33 - 4];
                  *(v34 - 3) = (*a3)[v33 - 3];
                  *(v34 - 2) = (*a3)[v33 - 2];
                  *(v34 - 1) = (*a3)[v33 - 1];
                  v35 = (*a3)[v33];
                  v33 += 8;
                  *v34 = v35;
                } while (v33 - (v24 & 0x7FFFFFF8) != 7);
                v32 = v33 - 7;
              }
              else {
                v32 = 0;
              }
              if ((v24 & 7) != 0) {
                do {
                  --v31;
                  GameData_21f48c8[v22 + v32] = (*a3)[v32];
                  ++v32;
                } while (v31 != 0);
              }
            }
            GameData_21f48c8[v25] = 0;
            v36 = *(_QWORD*)(eft_g_effectSystem + 112);
            v37 = *(_QWORD*)(v36 + 24);
            if (v37 != 0 && GameData_21f48c8[0] != 0) {
              v38 = *(_DWORD*)(v36 + 32);
              if (v38 != 0) {
                v39 = 0;
                while (1) {
                  v40 = (v38 + v39) >> 1;
                  v41 = strcmp(*(_QWORD*)(v37 + 336LL * v40), GameData_21f48c8);
                  if (v41 == 0) {
                    break;
                  }
                  if (v41 < 0) {
                    v39 = v40 + 1;
                  }
                  else {
                    v38 = (v38 + v39) >> 1;
                  }
                  if (v39 == v38) {
                    return;
                  }
                }
                EffectConst_961520_alt2(&v44_.v44, (__int64)GameData_21f48c8,
                                        a4, 5, 0, 1.0f, 0x0.0p+0f);
                v43 = v44_.v45;
                if (v44_.v45 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v44_.v45 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
                  std___1___shared_weak_count___release_weak(v43);
                }
              }
            }
          }
        }
      }
    }
  }
}

void EffectConst_965ec0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  _BYTE* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  void* v20;
  __int64 v21;
  int v22;
  bool v23;
  int v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v28;
  unsigned int v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64*** v32;
  __int64** v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _WORD* v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int16 v52;
  _WORD* v53[3];

  v1 = a1 + 73728;
  v2 = *(_DWORD*)(a1 + 73888) - 1;
  *(_DWORD*)(a1 + 73888) = v2;
  if (v2 == 0) {
    v3 = *(__int64**)(a1 + 73864);
    v4 = *(_QWORD**)(a1 + 73760);
    v5 = *(_QWORD**)(a1 + 73768);
    *(_QWORD*)(a1 + 73872) = v3;
    if (v4 != v5) {
      v51 = a1 + 16;
      do {
        v6 = (_BYTE*)*v4;
        if ((*(_BYTE*)*v4 & 1) == 0) {
          v7 = *(_QWORD*)(v1 + 152);
          if ((unsigned __int64)v3 < v7) {
            *v3++ = (__int64)v6;
          }
          else {
            v8 = *(_QWORD*)(v1 + 136);
            v9 = (char*)v3 - v8;
            v10 = ((__int64)v3 - v8) >> 3;
            v11 = v10 + 1;
            if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
              GameRoutine_9692a0();
            }
            v12 = v7 - v8;
            if (v12 >> 2 > v11) {
              v11 = v12 >> 2;
            }
            if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
              v13 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v13 = v11;
            }
            if (v13 != 0) {
              if (v13 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v14 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
            }
            else {
              v14 = 0;
            }
            v15 = v14 + 8 * v13;
            v16 = (unsigned __int64)v3 - v8;
            v17 = (__int64)&v9[v14 + -8 * v10];
            *(_QWORD*)&v9[v14] = v6;
            v3 = (__int64*)&v9[v14 + 8];
            memcpy_alt1(v17, v8, v16);
            *(_QWORD*)(v1 + 136) = v17;
            *(_QWORD*)(v1 + 144) = v3;
            *(_QWORD*)(v1 + 152) = v15;
            if (v8 != 0) {
              v18 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v18 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v8);
            }
          }
          *(_QWORD*)(v1 + 144) = v3;
        }
        ++v4;
      } while (v4 != v5);
      v19 = *(__int64**)(v1 + 136);
      if (v19 != v3) {
        v20 = std___1_piecewise_construct_ptr;
        do {
          v21 = *v19;
          EffectConst_964040(*v19);
          v22 = *(_DWORD*)(v1 + 24);
          v23 = __OFSUB__(v22, 1);
          v24 = v22 - 1;
          if (v24 < 0 == v23) {
            *(_DWORD*)(v1 + 24) = v24;
            v25 = (__int64*)(*(_QWORD*)(v1 + 16) - 8LL);
            *(_QWORD*)(v1 + 16) = v25;
            *v25 = v21;
            v26 = *(_QWORD*)(v1 + 64);
            if (v26 != 0 && *(_QWORD*)(v1 + 80) != 0) {
              v28 = v26 - 1;
              v29 = (unsigned __int16)((unsigned int)(v21 - v51) >> 6);
              v30 = (unsigned __int16)((unsigned __int64)(v21 - v51) >> 6);
              if ((v26 & (v26 - 1)) != 0) {
                v31 = (unsigned __int16)((unsigned __int64)(v21 - v51) >> 6);
                if (v26 <= v30) {
                  v31 = v29 % (unsigned int)v26;
                }
              }
              else {
                v31 = ((_DWORD)v26 - 1) & (unsigned int)v30;
              }
              v32 = *(__int64****)(*(_QWORD*)(v1 + 56) + 8 * v31);
              if (v32 != nullptr) {
                v33 = *v32;
                if (*v32 != nullptr) {
                  if ((v26 & v28) == 0) {
                    while (1) {
                      v35 = v33[1];
                      if (v35 == (__int64*)v30) {
                        if (*((unsigned __int16*)v33 + 8) == v29) {
                          goto LABEL_51;
                        }
                      }
                      else if (((unsigned __int64)v35 & v28) != v31) {
                        goto LABEL_25;
                      }
                      v33 = (__int64**)*v33;
                      if (v33 == nullptr) {
                        goto LABEL_25;
                      }
                    }
                  }
                  do {
                    v34 = (unsigned __int64)v33[1];
                    if (v34 == v30) {
                      if (*((unsigned __int16*)v33 + 8) == v29) {
                      LABEL_51:
                        v36 = *(_QWORD*)(v1 + 40);
                        v37 = *(_QWORD*)(v36 - 8);
                        if (v37 != v21) {
                          v38 = *((unsigned __int16*)v33 + 9);
                          *(_QWORD*)(*(_QWORD*)(v1 + 32) + 8 * v38) = v37;
                          v53[0] = &v52;
                          v52 = (unsigned int)(v37 - v51) >> 6;
                          *(_WORD*)(GameVariable_82f5a0((float*)(v1 + 56),
                                                        (unsigned __int16*)&v52,
                                                        (__int64)v20, v53) +
                                    18) = v38;
                          v36 = *(_QWORD*)(v1 + 40);
                        }
                        *(_QWORD*)(v1 + 40) = v36 - 8;
                        GameRoutine_82faa0((void*)((__int64)v53),
                                           (_QWORD*)(v1 + 56), v33);
                        v39 = v53[0];
                        v53[0] = nullptr;
                        if (v39 != nullptr) {
                          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                            v40 = 128;
                          }
                          else {
                            v40 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              fw_memory_g_heap_manager + v40, (__int64)v39);
                        }
                        break;
                      }
                    }
                    else {
                      if (v34 >= v26) {
                        v34 %= v26;
                      }
                      if (v34 != v31) {
                        break;
                      }
                    }
                    v33 = (__int64**)*v33;
                  } while (v33 != nullptr);
                }
              }
            }
          }
        LABEL_25:
          ++v19;
        } while (v19 != v3);
      }
    }
    if (*(_QWORD*)(v1 + 120) != 0) {
      v41 = *(_QWORD**)(v1 + 112);
      if (v41 != nullptr) {
        v42 = fw_memory_g_heap_manager_ptr;
        do {
          v43 = (_QWORD*)*v41;
          if (*(_QWORD*)(*(_QWORD*)v42 + 200LL) != 0) {
            v44 = 128;
          }
          else {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v42 + v44, (__int64)v41);
          v41 = v43;
        } while (v43 != nullptr);
      }
      v45 = *(_QWORD*)(v1 + 104);
      *(_QWORD*)(v1 + 112) = 0;
      if (v45 != 0) {
        v46 = v45 & 7;
        if (v45 >= 8) {
          v48 = v45 & 0xFFFFFFFFFFFFFFF8LL;
          v47 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v47) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v47 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v47 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v47 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v47 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v47 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v47 + 48) = 0;
            v49 = *(_QWORD*)(v1 + 96) + 8 * v47;
            v47 += 8;
            *(_QWORD*)(v49 + 56) = 0;
          } while (v48 != v47);
        }
        else {
          v47 = 0;
        }
        if (v46 != 0) {
          v50 = 8 * v47;
          do {
            --v46;
            *(_QWORD*)(*(_QWORD*)(v1 + 96) + v50) = 0;
            v50 += 8;
          } while (v46 != 0);
        }
      }
      *(_QWORD*)(v1 + 120) = 0;
    }
    *(_QWORD*)(v1 + 144) = *(_QWORD*)(v1 + 136);
  }
}

#pragma GCC visibility pop
