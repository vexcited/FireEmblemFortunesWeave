#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_10ba960(_QWORD* result);
_QWORD* Graph_d29060(_QWORD* result, long double, double);
_QWORD* game_combat_e3f310_alt1(_QWORD*) __asm__("game_combat_e3f310");
__attribute__((swiftcall)) void BlendLayer_d2b700(PSEUDO_X8, __int64* result);
__attribute__((swiftcall)) void CombatLegionManager_e2dfe0(PSEUDO_X8, float);
__attribute__((swiftcall)) void GameRoutine_10690a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_10691b0(PSEUDO_X8, _QWORD* result,
                                                    __n128);
__attribute__((swiftcall)) void GameRoutine_10692c0(PSEUDO_X8, int32x2_t*);
__attribute__((swiftcall)) void GameRoutine_106b310(PSEUDO_X8, float*, float*,
                                                    float result);
__attribute__((swiftcall)) void GameRoutine_e5dab0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD);
__attribute__((swiftcall)) void
collision_670c60_alt1(PSEUDO_X8, float32x4_t* result, float32x4_t*,
                      __int64) __asm__("collision_670c60");
__attribute__((swiftcall)) void game_character_1085300(PSEUDO_X8, _QWORD*,
                                                       char);
__attribute__((swiftcall)) void game_e5d930(PSEUDO_X8, float);
__int64* CharacterAnimator_1079d90(__int64, __int64);
__int64* CharacterModel_1070c00(__int64, __int64);
__int64 GameRoutine_106b140(__int64 result, float*, float);
__int64 GameRoutine_106e320(_QWORD*, __n128);
__int64 GameRoutine_108cfd0(int);
__int64 GameRoutine_108fb80(__int64);
__int64 GameRoutine_10990a0(__int64, int*, __n128);
__int64 GameRoutine_111f130(__int64, __int64, int*, unsigned int);
__int64 GameRoutine_111fb80(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_17ce980(__int64 result, __int64, char, __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_65f7a0(_QWORD*, unsigned int*, unsigned int);
__int64 GameRoutine_6616e0(float*, unsigned int*);
__int64 GameRoutine_d35e40(__int64, unsigned int, unsigned __int8*,
                           unsigned __int8*, unsigned __int8*);
__int64 GameRoutine_e40be0(_QWORD, _QWORD);
__int64 GameRoutine_e40f80(_QWORD, _QWORD);
__int64 GameRoutine_e412a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e41bc0(__int64);
__int64 GameRoutine_e41cc0(__int64, int);
__int64 GameRoutine_e422a0(_QWORD, long double, long double, float, long double,
                           long double, long double, long double);
__int64 StateMachines_e31cc0(_QWORD);
__int64 StateMachines_e32f40(__int64, float*, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString32(__int64 result);
__int64 game_combat_1099520(__int64, int*);
__int64 game_combat_e43d60_alt1(_QWORD) __asm__("game_combat_e43d60");
__int64 game_combat_e44050_alt1(_QWORD) __asm__("game_combat_e44050");
__int64 game_combat_e45210_alt1(__int64 result) __asm__("game_combat_e45210");
__int64 game_ff0ea0(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD, long double);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strncat(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_106dcd0(_QWORD*, char, char);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
double cos(double);
double sin(double);
extern _QWORD GameData_1ba7a78[3];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21a6120;
extern __int16* GameData_212cf08[9];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212f2e0;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ed090;
extern __int64 GameData_2235618;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern int GameData_21d92e0;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
float GameRoutine_1068a00(__int64, float result);
float GameRoutine_10773c0(_QWORD);
float GameRoutine_e9f200_alt1(_QWORD) __asm__("GameRoutine_e9f200");
float fmodf(float, float);
float game_combat_e401e0_alt1(_QWORD, _QWORD) __asm__("game_combat_e401e0");
unsigned __int64 GameRoutine_d2b5f0(__int64);
void CombatCamera_1097a60(float32x4_t*, float);
void GameRoutine_1068b40(__int64, char);
void GameRoutine_111f220(__int64, __int64, float*, float);
void GameRoutine_d2a680(__int64, __int64*, float);
void GameRoutine_e3f8b0(_QWORD*, double, double);
void GameRoutine_e9f200(__int64);
void GameRoutine_e9f860();
void Registration_a5aca0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_e334b0();
void __attribute__((noreturn)) String_60a250(const char*);
void game_111f610(float32x4_t*);
__int64 game_combat_d360c0(__int64 a1, unsigned int a2, __int64* a3);
__int64 game_combat_e326e0_alt1(__int64 a1,
                                _QWORD* a2) __asm__("game_combat_e326e0");
__attribute__((swiftcall)) void game_combat_e32e50(PSEUDO_X8 x8_, __int64 a1,
                                                   unsigned int a2);
__attribute__((swiftcall)) void game_combat_e37ae0(PSEUDO_X8 x8_);
void game_combat_e3f310(_QWORD* a1);
void game_combat_e3f5f0(__int64 a1);
float game_combat_e401e0(float* a1, float* a2);
void game_combat_e436c0_alt1(_QWORD* a1, float32x2_t* a2,
                             float a3) __asm__("game_combat_e436c0");
void game_combat_e43d60(__int64 a1);
void game_combat_e44050(float32x4_t* a1);
__int64 game_combat_e446a0(int32x2_t* a1);
int32x2_t* game_combat_e447d0(int32x2_t* result);
void game_combat_e449b0(__int64 a1);
void game_combat_e44cd0(__int64 a1, long double a2);
__int64 game_combat_e45210_alt2(__int64 result, long double a2, long double a3,
                                double a4, long double a5, long double a6,
                                long double a7,
                                long double a8) __asm__("game_combat_e45210");
void game_combat_1065a00(_BYTE* a1, __n128 a2);
float game_combat_106aff0(__int64 a1);
__int64 game_combat_106b2c0(__int64 a1, float a2);
void game_combat_106e570_alt1(_QWORD* a1,
                              __n128 a2) __asm__("game_combat_106e570");
void game_combat_106f310(__int64 a1);
void game_combat_106f5a0_alt1(__int64 a1,
                              int32x2_t** a2) __asm__("game_combat_106f5a0");
__n128 game_combat_1090030(int* a1);
__attribute__((swiftcall)) void game_combat_10901b0(PSEUDO_X8 x8_,
                                                    float32x4_t* a1, float a3);
__attribute__((swiftcall)) void game_combat_10906b0(PSEUDO_X8 x8_,
                                                    float32x4_t* a1);
__int64 game_combat_109acb0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_combat_10de490(PSEUDO_X8 x8_,
                                                    __int64 result, _BYTE* a2);
void game_combat_10de7c0(unsigned int* a1);
__int64 game_combat_10e0730(__int64 a1, __int64 a2);
__n128 game_combat_110b040_alt1(__int64 a1, __int64 a2,
                                __int64* a3) __asm__("game_combat_110b040");
void game_combat_110b140();
_QWORD* game_combat_110b5a0_alt1(float* a1, unsigned __int8* a2,
                                 char* a3) __asm__("game_combat_110b5a0");
__attribute__((swiftcall)) void game_combat_10692c0(PSEUDO_X8, __int64 result);
__int64 GameHr_e40be0(__int64 result, char);
__int64 GameHr_e40f80(__int64, unsigned int*);
__int64 GameRoutine_106dcd0_alt1(_QWORD*, char,
                                 char) __asm__("GameRoutine_106dcd0");
__int64 GameRoutine_106e320_alt1(_QWORD*) __asm__("GameRoutine_106e320");
__int64 game_combat_e43d60_alt2(__int64 result) __asm__("game_combat_e43d60");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameHr_e412a0(__int64, int);
extern _QWORD GameData_21fdd90_alt1[] __asm__("GameData_21fdd90");
float GameRoutine_10773c0_alt1(int) __asm__("GameRoutine_10773c0");
float GameRoutine_111fb80_alt1(__int64, unsigned __int64*,
                               float*) __asm__("GameRoutine_111fb80");
float game_combat_1068a00(__int64);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_a5aca0(__int64);
void GameRoutine_d2a680_alt1(__int64, __int64**,
                             float) __asm__("GameRoutine_d2a680");
void GameRoutine_e422a0_alt1(__int64, double, float,
                             float) __asm__("GameRoutine_e422a0");
void Graph_d29060_alt1(_QWORD*, long double, double) __asm__("Graph_d29060");
void StateMachines_e31cc0_alt1(__int64) __asm__("StateMachines_e31cc0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_combat_e44050_alt2(__int64) __asm__("game_combat_e44050");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_combat_e436c0(__int64 a1, float32x2_t* a2, float a3);
void game_combat_e45210(__int64 a1);
void game_combat_106e570(_QWORD* a1);
float32x4_t* game_combat_106f5a0(__int64 a1, __int64* a2);
__int64* CharacterModel_1070c00_alt1(__int64,
                                     int) __asm__("CharacterModel_1070c00");
__int64 GameHr_e41bc0(__int64);
__int64 GameHr_e41cc0(__int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
__int64 game_combat_e326e0(__int64 a1, __int64* a2);
void game_combat_110b040(__int64 a1, __int64 a2, __int64* a3);
_QWORD* game_combat_110b5a0(__int64 a1, unsigned __int8* a2, char* a3);

__int64 game_combat_d360c0(__int64 a1, unsigned int a2, __int64* a3)
{
  __int64 v3;
  __int16 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  _BYTE* v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  bool v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  int v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  bool v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  int v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int8 v59[12];
  unsigned __int8 v60[12];
  unsigned __int8 v61[12];

  if ((a2 & 0x80000000) != 0) {
    return 0xFFFFFFFFLL;
  }
  v3 = *a3;
  memset(&v61[1], 0, 11);
  v4 = *(_DWORD*)(v3 + 11704);
  v61[0] = 47;
  v9 = (v4 & 0x400) == 0;
  v5 = 360;
  if (v9) {
    v5 = 0;
  }
  v6 = v3 + v5;
  v7 = *(unsigned __int8*)(v6 + 184);
  v8 = *(_QWORD*)(v6 + 192);
  v9 = (v7 & 1) == 0;
  v10 = v7 >> 1;
  if (v9) {
    v11 = v6 + 185;
  }
  else {
    v11 = *(_QWORD*)(v6 + 200);
  }
  if (!v9) {
    v10 = v8;
  }
  if (v10 != 0) {
    v12 = 0;
    v13 = v11;
    while (v10 != v12) {
      v14 = v13 + v10;
      ++v12;
      --v13;
      if (*(_BYTE*)(v14 - 1) == 47) {
        if (v10 + 1 != v12) {
          if (v10 < v12) {
          LABEL_68:
            String_60a250("string_view::substr");
          }
          v15 = v13 + v10;
          v10 = v12 - 1;
          v11 = v15 + 1;
        }
        break;
      }
    }
    if (*(_BYTE*)(v11 + 2) != 95) {
      return GameRoutine_d35e40(a1, a2, v61, v60, v59);
    }
    if (v10 > 2) {
      v16 = a1;
      v17 = a2;
      v18 = strncat(v61, v11 + 3, 12);
      memset(&v60[1], 0, 11);
      *(_WORD*)&v61[strlen(v18)] = 47;
      v60[0] = 47;
      v19 = *(_QWORD*)(v3 + 11792);
      v20 = *(_BYTE**)(v19 + 8);
      if (v20 != nullptr) {
        v21 = strchr(*(_QWORD*)(v19 + 8), 95);
        if (v21 != 0) {
          v22 = (_BYTE*)(v21 + 1);
        }
        else {
          v22 = v20;
        }
        if (*v22 == 62) {
          v20 = v22 + 1;
        }
        else if (v21 != 0) {
          v20 = (_BYTE*)(v21 + 1);
        }
      }
      strncat(v60, v20, 12);
      v24 = strlen(v60);
      v25 = 0;
      memset(&v59[1], 0, 11);
      a2 = v17;
      *(_WORD*)&v60[v24] = 47;
      v59[0] = 47;
      a1 = v16;
      v26 = *(_QWORD*)(v3 + 11608);
      while (1) {
        v27 = *(_QWORD*)(v26 + 8 * v25);
        if (v27 != 0) {
          v28 = *(unsigned __int8*)(v27 + 8);
          v29 = v27 + 9;
          v32 = v27 + 16;
          v30 = *(_QWORD*)(v27 + 16);
          v31 = *(_QWORD*)(v32 + 8);
          v33 = (v28 & 1) == 0;
          v34 = v28 >> 1;
          if (v33) {
            v35 = v29;
          }
          else {
            v35 = v31;
          }
          if (v33) {
            v30 = v34;
          }
          if (v30 != 0) {
            v36 = ~v35;
            v37 = v35 - 1;
            v38 = 0;
            do {
              if (v30 == v38) {
                goto LABEL_46;
              }
              v39 = *(unsigned __int8*)(v37 + v30);
              ++v38;
              ++v36;
              --v37;
            } while (v39 != 47);
            if (v30 + 1 != v38) {
              if (v30 < v38) {
                goto LABEL_68;
              }
              v35 = v30 - v36;
              v30 = v38 - 1;
            }
          LABEL_46:
            if (v30 != 0) {
              break;
            }
          }
        }
        v40 = *(_QWORD*)(v26 + 8 * v25 + 8);
        if (v40 != 0) {
          v41 = *(unsigned __int8*)(v40 + 8);
          v42 = v40 + 9;
          v44 = v40 + 16;
          v30 = *(_QWORD*)(v40 + 16);
          v43 = *(_QWORD*)(v44 + 8);
          v45 = (v41 & 1) == 0;
          v46 = v41 >> 1;
          if (v45) {
            v35 = v42;
          }
          else {
            v35 = v43;
          }
          if (v45) {
            v30 = v46;
          }
          if (v30 != 0) {
            v47 = ~v35;
            v48 = v35 - 1;
            v49 = 0;
            do {
              if (v30 == v49) {
                goto LABEL_31;
              }
              v50 = *(unsigned __int8*)(v48 + v30);
              ++v49;
              ++v47;
              --v48;
            } while (v50 != 47);
            if (v30 + 1 != v49) {
              if (v30 < v49) {
                goto LABEL_68;
              }
              v35 = v30 - v47;
              v30 = v49 - 1;
            }
          LABEL_31:
            if (v30 != 0) {
              break;
            }
          }
        }
        v25 += 2;
        if (v25 == 640) {
          return GameRoutine_d35e40(a1, a2, v61, v60, v59);
        }
      }
      v51 = v30 - 3;
      if (v30 >= 3 && *(_BYTE*)(v35 + 2) == 95) {
        v52 = memchr(v35 + 3, 95, v30 - 3);
        a2 = v17;
        v53 = v52;
        a1 = v16;
        if (v53 != 0) {
          v54 = v53 - v35;
          if (v54 != -1) {
            v55 = v54 - 3;
            if (v51 >= v55) {
              v56 = v55;
            }
            else {
              v56 = v51;
            }
            strncat(v59, v35 + 3, v56);
            v57 = strlen(v59);
            a2 = v17;
            v58 = v57;
            a1 = v16;
            *(_WORD*)&v59[v58] = 47;
          }
        }
      }
      return GameRoutine_d35e40(a1, a2, v61, v60, v59);
    }
  LABEL_69:
    String_60a250("string_view::substr");
  }
  if (*(_BYTE*)(v11 + 2) == 95) {
    goto LABEL_69;
  }
  return GameRoutine_d35e40(a1, a2, v61, v60, v59);
}

__int64 game_combat_e326e0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  _QWORD* v20;
  __int64 v21;
  int v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  float v30;
  __int64 v31;
  __int64 v32;
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
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int128 v50;
  unsigned __int64 v51;
  _DWORD* v52;
  __int64 v53;
  int v54;
  int v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  unsigned __int64 v62;
  _DWORD* v63;
  _DWORD* v64;
  int v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64* v68;
  int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  int v73;
  unsigned int* v74;
  unsigned int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v80;
  __int64* v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  struct {
    float v88;
    float v89;
  } v88_;
  float v90[2];
  __int64 v91;

  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  v2 = a2[1];
  v4 = a2;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = v2 - *a2;
  if (v2 == *a2) {
    v10 = 0;
    v14 = 0;
    v13 = 0;
    goto LABEL_79;
  }
  if (v6 < 0) {
  LABEL_96:
    GameRoutine_e334b0(),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v8 = *(_QWORD*)(*(_QWORD*)(a1 + 176) + 104LL);
  v9 = v6 & 0x7FFFFFFFFFFFFFF8LL;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v6, 16, 0),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memcpy_alt1(v10, v3, v6 & 0x7FFFFFFFFFFFFFF8LL),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v6 & 0x7FFFFFFFFFFFFFF8LL) == 0) {
    v14 = 0;
    goto LABEL_49;
  }
  v80 = v6;
  v81 = v4;
  v11 = 0;
  do {
    *(_DWORD*)(v10 +
               v11) = GameHr_e41cc0(v8),
               v24 = COERCE_AS(__typeof__(v24),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v11 += 8;
  } while (v9 != v11);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v86 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v87 = *((float*)GameData_212c190 + 1);
  v84 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v85 = -*(float*)GameData_212c190;
  v16 = -*(float*)GameData_212c188;
  v17 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v82 = *((float*)GameData_212c188 + 1);
  v83 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v18 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v19 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  do {
    v20 = *(_QWORD**)(a1 + 176);
    v21 = v20[6];
    if (v21 != 0 &&
        ((v22 = *(_DWORD*)(v10 + v12), *(_QWORD*)(v21 + 8) != -1)
             ? (v23 = v20[7] == 0)
             : (v23 = true),
         !v23 && v20[1] != 0 && (v24 = GameHr_e41bc0(v20[13])) != 0)) {
      v25 = *(_QWORD*)(v24 + 40);
      v26 = *(_QWORD*)(v25 + 392);
      v27 = *(_QWORD*)(v25 + 400);
      if (v27 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                  memory_order_relaxed);
        v28 = CharacterModel_1070c00_alt1(*(_QWORD*)(v26 + 11608), v22),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v29 = v28;
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v27),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v28 = v29;
        }
        v5 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
      else {
        v28 = CharacterModel_1070c00_alt1(*(_QWORD*)(v26 + 11608), v22),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v50 = *((_OWORD*)v28 + 4);
      v88_.v88 = *(float*)&v50;
      v30 = *((float*)&v50 + 2);
    }
    else {
      v88_.v88 = 0x0.0p+0f;
      v30 = 0x0.0p+0f;
    }
    v31 = *(_QWORD*)(a1 + 176);
    v88_.v89 = v30;
    v91 = 0x3F80000000000000LL;
    v32 = *(_QWORD*)(v31 + 128);
    v33 = *(float*)(v32 + 20);
    v90[0] = *(float*)(v32 + 16);
    v90[1] = v33;
    v34 = game_combat_e401e0((float*)&v91, v90),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v35 = v34 +
          (float)(roundf(v34 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v35 <= 0x1.921fb60000000p+0f) {
      v37 = 0x1.0000000000000p+0f;
      if (v35 >= -0x1.921fb60000000p+0f) {
        goto LABEL_26;
      }
      v36 = -0x1.921fb60000000p+1f;
    }
    else {
      v36 = 0x1.921fb60000000p+1f;
    }
    v35 = v36 - v35;
    v37 = -0x1.0000000000000p+0f;
  LABEL_26:
    v38 = v35 * v35;
    LOWORD(v91) = 0;
    v39 =
        v35 *
        (float)((float)((float)(v83 +
                                (float)((float)(v86 +
                                                (float)((float)(v84 +
                                                                (float)((float)(v87 +
                                                                                (float)(v85 *
                                                                                        (float)(v35 *
                                                                                                v35))) *
                                                                        (float)(v35 *
                                                                                v35))) *
                                                        (float)(v35 * v35))) *
                                        (float)(v35 * v35))) *
                        (float)(v35 * v35)) +
                0x1.0000000000000p+0f);
    v40 =
        v37 *
        (float)((float)((float)(v19 +
                                (float)((float)(v17 +
                                                (float)((float)(v18 +
                                                                (float)((float)(v82 +
                                                                                (float)(v16 *
                                                                                        v38)) *
                                                                        v38)) *
                                                        v38)) *
                                        v38)) *
                        v38) +
                0x1.0000000000000p+0f);
    v41 = (float)(PSEUDO_UNFUSED(v88_.v89 * v39)) + (float)(v88_.v88 * v40);
    v42 = (float)(PSEUDO_UNFUSED(v88_.v89 * v40)) - (float)(v88_.v88 * v39);
    v88_.v88 = v41;
    v88_.v89 = v42;
    if ((StateMachines_e32f40(a1, &v88_.v88, (__int64)&v91) & 1) == 0) {
      if (v13 < v15) {
        *(_QWORD*)v13 = *(_QWORD*)(v10 + v12);
        v13 += 8LL;
      }
      else {
        v43 = v13 - v14;
        v44 = (__int64)(v13 - v14) >> 3;
        v45 = v44 + 1;
        if ((unsigned __int64)(v44 + 1) >> 61 != 0) {
          goto LABEL_96;
        }
        if ((v15 - v14) >> 2 > v45) {
          v45 = (v15 - v14) >> 2;
        }
        if ((unsigned __int64)(v15 - v14) >= 0x7FFFFFFFFFFFFFF8LL) {
          v46 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v46 = v45;
        }
        if (v46 != 0) {
          if (v46 >> 61 != 0) {
            GameRoutine_60a210(),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          v47 = fw_memory_HeapManager_Allocate(*v5, 8 * v46, 16, 0),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        else {
          v47 = 0;
        }
        v15 = v47 + 8 * v46;
        v48 = v47 + v43 - 8 * v44;
        *(_QWORD*)(v47 + v43) = *(_QWORD*)(v10 + v12);
        v13 = v47 + v43 + 8;
        memcpy_alt1(v48, v14, v43),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v14 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v49, v14),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        v14 = v48;
      }
    }
    v12 += 8;
  } while (v9 != v12);
  if (v13 != v14) {
    v4 = v81;
    goto LABEL_67;
  }
  v6 = v80;
  v4 = v81;
  v56 = v80 >> 3;
  if (v80 >> 3 <= (v15 - v14) >> 3) {
    v62 = v13 - v14;
    if (v56 > (__int64)(v13 - v14) >> 3) {
      if (v13 != v14) {
        v63 = (_DWORD*)v14;
        v64 = (_DWORD*)v10;
        do {
          *v63 = *v64;
          v65 = v64[1];
          v64 += 2;
          v63[1] = v65;
          v63 += 2;
        } while (v64 != (_DWORD*)(v10 + v62));
      }
      v66 = v13;
      if (v62 != v9) {
        v66 = v13;
        do {
          v67 = *(_QWORD*)(v10 - v14 + v66);
          v66 += 8LL;
          *(_QWORD*)v13 = v67;
          v13 += 8LL;
        } while (v9 + v14 != v66);
      }
      v13 = v66;
      if (v14 == v66) {
        goto LABEL_79;
      }
    LABEL_67:
      v59 = 0;
      v60 = v14;
      do {
        v61 = *(_DWORD*)(v60 + 4);
        v60 += 8;
        v59 += v61;
      } while (v60 != v13);
      goto LABEL_80;
    }
  LABEL_49:
    if (v9 == 0) {
      v59 = 0;
      v13 = v14;
      goto LABEL_80;
    }
    v51 = v6 - 8;
    v13 = v14;
    v52 = (_DWORD*)v10;
    if ((~((_BYTE)v6 - 8) & 0x38) != 0) {
      v13 = v14;
      v53 = ((unsigned __int8)((unsigned int)v51 >> 3) + 1) & 7;
      v52 = (_DWORD*)v10;
      do {
        --v53;
        *(_DWORD*)v13 = *v52;
        v54 = v52[1];
        v52 += 2;
        *(_DWORD*)(v13 + 4) = v54;
        v13 += 8LL;
      } while (v53 != 0);
    }
    if (v51 >= 0x38) {
      do {
        *(_DWORD*)v13 = *v52;
        *(_DWORD*)(v13 + 4) = v52[1];
        *(_DWORD*)(v13 + 8) = v52[2];
        *(_DWORD*)(v13 + 12) = v52[3];
        *(_DWORD*)(v13 + 16) = v52[4];
        *(_DWORD*)(v13 + 20) = v52[5];
        *(_DWORD*)(v13 + 24) = v52[6];
        *(_DWORD*)(v13 + 28) = v52[7];
        *(_DWORD*)(v13 + 32) = v52[8];
        *(_DWORD*)(v13 + 36) = v52[9];
        *(_DWORD*)(v13 + 40) = v52[10];
        *(_DWORD*)(v13 + 44) = v52[11];
        *(_DWORD*)(v13 + 48) = v52[12];
        *(_DWORD*)(v13 + 52) = v52[13];
        *(_DWORD*)(v13 + 56) = v52[14];
        v55 = v52[15];
        v52 += 16;
        *(_DWORD*)(v13 + 60) = v55;
        v13 += 64LL;
      } while (v52 != (_DWORD*)(v10 + v9));
    }
    goto LABEL_67;
  }
  if (v14 != 0) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v14),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v15 = 0;
  }
  v58 = v15 >> 2;
  if (v15 >> 2 <= v56) {
    v58 = v80 >> 3;
  }
  if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
    v58 = 0x1FFFFFFFFFFFFFFFLL;
  }
  if (v58 >> 61 != 0) {
    goto LABEL_96;
  }
  v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       8 * v58, 16, 0),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memcpy_alt1(v14, v10, v9),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v14 + v9;
  if (v14 != v14 + v9) {
    goto LABEL_67;
  }
LABEL_79:
  v59 = 0;
LABEL_80:
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v68 = game_map_MapRandom_instance__ptr[0];
  v69 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL));
  v70 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v71 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v68 + 1) = v69;
  v72 = (v71 >> 8) ^ (v70 >> 19) ^ v71 ^ v70;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v68) = v70;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v68 + 4) = v72;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v14 == v13) {
  LABEL_84:
    v74 = (unsigned int*)*v4;
    if (v4[1] != *v4) {
      goto LABEL_85;
    }
    v75 = 0;
  }
  else {
    v73 = 0;
    v74 = (unsigned int*)v14;
    while (1) {
      v73 += v74[1];
      if ((v72 & 0x7FFFFFFF) % v59 < v73) {
        break;
      }
      v74 += 2;
      if (v74 == (unsigned int*)v13) {
        goto LABEL_84;
      }
    }
  LABEL_85:
    v75 = *v74;
  }
  v76 = fw_memory_g_heap_manager_ptr;
  if (v14 != 0) {
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v14),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v10 != 0) {
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)v76 + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v76 + v78, v10),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return v75;
}

__attribute__((swiftcall)) void game_combat_e32e50(PSEUDO_X8 x8_, __int64 a1,
                                                   unsigned int a2)
{
  int32x2_t* a3 = (int32x2_t*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  __int64 v4;
  bool v5;
  __int64 v8;
  int32x2_t result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int32x2_t* v13;
  int32x2_t* v14;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  v3 = *(_QWORD**)(a1 + 176);
  v4 = v3[6];
  if (v4 != 0 && (*(_QWORD*)(v4 + 8) != -1 ? (v5 = v3[7] == 0) : (v5 = true),
                  !v5 && v3[1] != 0)) {
    v8 = GameRoutine_e41bc0(v3[13]),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v8 != 0) {
      v10 = *(_QWORD*)(v8 + 40);
      v11 = *(_QWORD*)(v10 + 392);
      v12 = *(_QWORD*)(v10 + 400);
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
        v13 = (int32x2_t*)CharacterModel_1070c00(*(_QWORD*)(v11 + 11608), a2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v14 = v13;
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          std___1___shared_weak_count___release_weak_alt2(v12),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          v13 = v14;
        }
      }
      else {
        v13 = (int32x2_t*)CharacterModel_1070c00(*(_QWORD*)(v11 + 11608), a2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
      }
      LANES64(result).n64_u64[0] =
          LANES64_OF(
              vzip1_s32(
                  v13[8],
                  COERCE_AS(
                      int32x2_t,
                      LANES128_OF(vextq_s8(*(int8x16_t*)LANES64(v13[8]).n64_u64,
                                           *(int8x16_t*)LANES64(v13[8]).n64_u64,
                                           8u))
                          .n128_u64[0])))
              .n64_u64[0];
      LANES64(*(a3)).n64_u64[0] = LANES64(result).n64_u64[0];
    }
    else {
      LANES64(*(a3)).n64_u64[0] = 0;
    }
  }
  else {
    LANES64(*(a3)).n64_u64[0] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_combat_e37ae0(PSEUDO_X8 x8_)
{
  _WORD* a1 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  *a1 = 0;
}

void game_combat_e3f310(_QWORD* a1)
{
  __int64 v1;
  float v2;
  __int64 v4;
  int v5;
  float v6;
  __int128 v9;
  __int64* v10;
  int v11;
  bool v12;
  int v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  int8x16_t v22;
  _QWORD* v23;
  int32x2_t v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  signed int v33;
  __int64 v34;
  __int64 v35;
  float v36;
  float v37;
  __int64 v38;
  double v39;
  double v40;
  _QWORD* v41;
  __int64 v44;
  float v45[2];
  __int64 v46;
  float v47[2];

  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = a1[8];
  v2 = 0x1.0000000000000p-1f;
  v4 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 48LL);
  v5 = *(_DWORD*)(v1 + 112);
  if (v5 == 1) {
    v2 = 0x1.0000000000000p+0f;
  }
  if (v5 != 0) {
    v6 = v2;
  }
  else {
    v6 = 0x0.0p+0f;
  }
  game_e5d930((void*)((__int64)v47), v6),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v44 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v44;
    __cxa_guard_release(&GameData_21a6130),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v9 = GameData_21a6120;
  v10 = GameData_212d448[0];
  if (*GameData_212d448[0] != 0 &&
          (*(_BYTE*)(*(_QWORD*)(*GameData_212d448[0] + 8) + 112LL) & 0x40) !=
              0 ||
      ((v11 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 40LL) + 8LL)) != 6
           ? (v12 = v11 == 0)
           : (v12 = true),
       !v12)) {
    v17 = a1[6];
    if (v17 != 0) {
      v18 = *(_QWORD*)(v17 + 8);
      v19 = a1[7];
      if (v18 != -1 && v19 != 0) {
        v21 = a1[15];
        v22 = *(int8x16_t*)(*(_QWORD*)(v19 + 8) + 304LL);
        v23 = *(_QWORD**)(v21 + 8);
        *(_QWORD*)(v21 + 120) = 0;
        *(_DWORD*)(v21 + 116) = 0;
        LANES64(v24).n64_u64[0] =
            LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0];
        *(_QWORD*)(v21 + 40) = 0;
        *(_QWORD*)(v21 + 80) = 0;
        *(_QWORD*)(v21 + 88) = 0;
        LANES128(v22).n128_u64[0] =
            LANES64_OF(
                vzip1_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), v24))
                .n64_u64[0];
        *(_QWORD*)(v21 + 16) = LANES128(v22).n128_u64[0];
        *(_QWORD*)(v21 + 24) = LANES128(v22).n128_u64[0];
        GameRoutine_e3f8b0(v23, LANES128(v22).n128_f64[0],
                           LANES64(v24).n64_f64[0]),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
  }
  else {
    v13 = *(_DWORD*)(v1 + 112);
    if (v13 == 2) {
      v14 = v47[0];
      v15 = v47[1];
      v16 = 7;
    }
    else {
      v25 = 0x0.0p+0f;
      v26 = -0x1.0000000000000p+0f;
      v27 = 0x1.0000000000000p+0f;
      if (v13 != 1) {
        v26 = 0x0.0p+0f;
      }
      if (v13 == 0) {
        v26 = 0x1.0000000000000p+0f;
      }
      game_e5d930((void*)((__int64)&v46), v6 - v26),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      v14 = v47[0];
      v15 = v47[1];
      v28 = 0x0.0p+0f;
      v29 = v47[1] - *((float*)&v46 + 1);
      v30 = v47[0] - *(float*)&v46;
      v31 = (float)(PSEUDO_UNFUSED(v29 * v29)) + (float)(v30 * v30);
      if (v31 >= 0x1.0000000000000p-23f) {
        v32 = 0x1.0000000000000p+0f / sqrtf(v31);
        v28 = v30 * v32;
        v27 = v29 * v32;
      }
      v33 = *(_DWORD*)(v1 + 112);
      if ((unsigned int)v33 <= 1) {
        v34 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 56LL);
        if ((int)(((unsigned __int64)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 64LL) -
                                      v34) >>
                   4) -
                  1) < v33) {
          v33 = ((unsigned __int64)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 64LL) -
                                    v34) >>
                 4) -
                1;
        }
        v35 = *(_QWORD*)(v34 + 16LL * v33);
        GameRoutine_e9f200(v35),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
        v37 = fmaxf(v36, 0x1.3333340000000p-1f);
        if ((*(_BYTE*)(v35 + 92) & (*(float*)(v35 + 88) < v37)) != 0) {
          v25 = *(float*)(v35 + 88);
        }
        else {
          v25 = v37;
        }
      }
      *(float*)&v9 = v28 * v25;
      *((float*)&v9 + 2) = v27 * v25;
      v16 = (*(_DWORD*)(*(_QWORD*)(*v10 + 8) + 112LL) & 0x20001) != 1;
    }
    v45[0] = *(float*)&v9 + v14;
    v45[1] = *((float*)&v9 + 2) + v15;
    GameRoutine_e5dab0((void*)(&v46), v4, v16, a1, v45, 0),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
    v38 = a1[15];
    LODWORD(v40) = HIDWORD(v46);
    LODWORD(v39) = v46;
    v41 = *(_QWORD**)(v38 + 8);
    *(_QWORD*)(v38 + 120) = 0;
    *(_DWORD*)(v38 + 116) = 0;
    *(_QWORD*)(v38 + 40) = 0;
    *(_QWORD*)(v38 + 80) = 0;
    *(_QWORD*)(v38 + 88) = 0;
    *(_QWORD*)(v38 + 24) = __PAIR64__(LODWORD(v40), LODWORD(v39));
    *(_QWORD*)(v38 + 16) = __PAIR64__(LODWORD(v40), LODWORD(v39));
    GameRoutine_e3f8b0(v41, v39, v40),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

void game_combat_e3f5f0(__int64 a1)
{
  __int64 v2;
  int v3;
  bool v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  float v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  float32x4_t* v17;
  __int64 v18;
  float v19;
  float32x4_t v20;
  float v21;
  float32x4_t* v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float v27;
  unsigned __int64 v28;
  float32x4_t v29;
  int8x16_t v30;
  double v31;
  double v32;
  double v33;
  float v34;
  float v35;
  float v36;
  unsigned __int32 v40;
  unsigned __int64 v41;
  unsigned __int32 v42;
  struct {
    char v43[4];
    float v44;
    char gap40_[72];
    char v45;
  } v43_;
  float32x4_t v46;
  float32x4_t v47;
  __int64 v48;

  game_combat_e3f310((_QWORD*)a1);
  v2 = *(_QWORD*)(a1 + 48);
  v3 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8LL) + 40LL) +
                  8LL);
  v4 = v3 == 0 || v3 == 6;
  v5 = *(_DWORD*)(a1 + 180) & 0xFFFFFFFE;
  if (!v4) {
    ++v5;
  }
  *(_DWORD*)(a1 + 180) = v5;
  if (v2 != 0) {
    v6 = *(_QWORD*)(v2 + 8);
    v7 = *(_QWORD*)(a1 + 56);
    if (v6 != -1 && v7 != 0) {
      v9 = *(_QWORD*)(v7 + 136);
      v10 = 0x0.0p+0f;
      if (v5 == 0) {
        v10 = 0x1.0000000000000p+0f;
      }
      *(float*)(v9 + 60) = v10;
    }
  }
  GameHr_e40be0(*(_QWORD*)(a1 + 104), 1);
  StateMachines_e31cc0_alt1(*(_QWORD*)(a1 + 112));
  v11 = *(_QWORD*)(a1 + 128);
  game_combat_e43d60_alt2(v11);
  *(_BYTE*)(v11 + 80) = 1;
  game_combat_e44050_alt2(v11);
  if ((*(_BYTE*)(v11 + 116) & 1) == 0) {
    v13 = *(_DWORD*)(v11 + 16);
    v14 = *(_DWORD*)(v11 + 20);
    *(_BYTE*)(v11 + 116) = 1;
    *(_DWORD*)(v11 + 108) = v13;
    *(_DWORD*)(v11 + 112) = v14;
  }
  v15 = *(_QWORD*)(a1 + 48);
  if (v15 != 0 && *(_QWORD*)(v15 + 8) != -1 && *(_QWORD*)(a1 + 56) != 0) {
    v17 = *(float32x4_t**)(a1 + 8);
    if (v17 != nullptr) {
      v18 = *(_QWORD*)(a1 + 120);
      v19 = LANES128(v17[19]).n128_f32[1];
      LODWORD(v12) = *(_DWORD*)(v18 + 20);
      LANES128(v20).n128_u32[0] = *(_DWORD*)(v18 + 16);
      v41 = v12;
      v42 = LANES128(v20).n128_u32[0];
      LANES128(v20).n128_u32[1] = 1128792064;
      LANES128(v20).n128_u64[1] = v12;
      v47 = v20;
      LANES128(v20).n128_u32[1] = -1027080192;
      LANES128(v20).n128_u64[1] = v12;
      v46 = v20;
      collision_670c60_alt1((void*)((__int64)v43_.v43), &v47, &v46, 1);
      v21 = v43_.v44;
      v22 = *(float32x4_t**)(a1 + 120);
      if (v43_.v45 == 0) {
        v21 = v19;
      }
      if (LANES128(v22[4]).n128_u8[0] == 1) {
        v23 = v22[3];
        LANES128(v23).n128_u32[3] = 0;
      }
      else {
        LANES128(v23).n128_u64[0] = __PAIR64__(LODWORD(v21), v42);
        LANES128(v23).n128_u64[1] = v41;
      }
      v24 = vsubq_f32(v17[19], v23);
      v25 = vmulq_f32(v24, v24);
      LANES128(v25).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
              .n64_u64[0];
      if (__builtin_islessgreater(
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                  .n64_f32[0],
              0x0.0p+0f)) {
        LANES128(v17[19]).n128_u64[0] = LANES128(v23).n128_u64[0];
        v26 = v17[19];
        LANES128(v17[18]).n128_u32[2] |= 1u;
        LANES128(v26).n128_u64[1] = LANES128(v23).n128_u32[2];
        v17[19] = v26;
      }
      v48 = 0x3F80000000000000LL;
      v27 = game_combat_e401e0((float*)&v48,
                               (float*)(*(_QWORD*)(a1 + 128) + 16LL));
      LODWORD(v28) = 0;
      *((float*)&v28 + 1) = v27;
      v29 = vsubq_f32(v17[20], COERCE_AS(float32x4_t, v28));
      v30 = vmulq_f32(v29, v29);
      LANES128(v30).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
              .n64_u64[0];
      if (__builtin_islessgreater(
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                  .n64_f32[0],
              0x0.0p+0f)) {
        LANES128(v17[20]).n128_u32[0] = 0;
        LANES128(v17[20]).n128_f32[1] = v27;
        v17[20] = COERCE_AS(float32x4_t, LANES128(v17[20]).n128_u64[0]);
        v31 = v27 * 0x1.0000000000000p-1;
        v32 = cos(v31);
        v33 = sin(v31);
        v34 = v32 + PSEUDO_UNFUSED(v33 * 0x0.0p+0);
        v35 = PSEUDO_UNFUSED(v33 * -0x0.0p+0) + v32 * 0x0.0p+0;
        v36 = v33 + PSEUDO_UNFUSED(v32 * 0x0.0p+0);
        if (COERCE_FLOAT(*(_OWORD*)&v17[21]) != v35 ||
            COERCE_FLOAT(HIDWORD(LANES128(v17[21]).n128_u64[0])) != v36 ||
            COERCE_FLOAT(LANES128(v17[21]).n128_u64[1]) != v35 ||
            COERCE_FLOAT(DWORD3(*(_OWORD*)&v17[21])) != v34) {
          v40 = LANES128(v17[18]).n128_u32[2];
          LANES128(v17[21]).n128_f32[0] = v35;
          LANES128(v17[21]).n128_f32[1] = v36;
          LANES128(v17[21]).n128_f32[2] = v35;
          LANES128(v17[21]).n128_f32[3] = v34;
          LANES128(v17[18]).n128_u32[2] = v40 | 1;
        }
      }
    }
  }
}

float game_combat_e401e0(float* a1, float* a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
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
  float v17;
  bool v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  bool v27;
  bool v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;

  v2 = a1[1];
  v3 = a2[1];
  v4 = (float)(PSEUDO_UNFUSED(v2 * v3)) + (float)(*a1 * *a2);
  v5 = (float)(*a1 * v3) - (float)(PSEUDO_UNFUSED(*a2 * v2));
  if (v5 == 0x0.0p+0f && v4 == 0x0.0p+0f) {
    return -0x0.0p+0f;
  }
  if (v4 < 0x0.0p+0f) {
    if (v5 >= 0x0.0p+0f) {
      v26 = -v4;
      v28 = v5 == (float)-v4;
      v27 = v5 >= (float)-v4;
      v29 = *(float*)GameData_212c2f0;
      v30 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v31 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v32 =
        *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      if (v28 || !v27) {
        v36 = v5 / v26;
        v16 = 0x1.921fb60000000p+1f;
        v37 = v36 *
          (float)((float)((float)((float)((float)(v32 +
                                            (float)((float)((float)((float)(v31 +
                                                                      (float)((float)((float)((float)(v30 +
                                                                                                (float)((float)((float)(v29 *
                                                                                                                  (float)(v36 *
                                                                                                                    v36)) -
                                                                                                          *((float*)
                                                                                                              GameData_212c2f0 +
                                                                                                            1)) *
                                                                                                  (float)(v36 *
                                                                                                    v36))) *
                                                                                        (float)(v36 *
                                                                                          v36)) -
                                                                                *(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                    GameData_212c2f0 +
                                                                                  4)) *
                                                                        (float)(v36 *
                                                                          v36))) *
                                                              (float)(v36 *
                                                                v36)) -
                                                      *(float*)((char*)((
                                                                  __int128*)0x10LL) +
                                                        (_QWORD)
                                                          GameData_212c2f0 +
                                                        4)) *
                                              (float)(v36 * v36))) *
                                    (float)(v36 * v36)) -
                            *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0 + 12)) *
                    (float)(v36 * v36)) +
            0x1.0000000000000p+0f);
        return -(float)(v16 - v37);
      }
      v33 = v26 / v5;
      v24 = 0x1.921fb60000000p+0f;
      v34 = v33 *
        (float)((float)((float)((float)((float)(v32 +
                                          (float)((float)((float)((float)(v31 +
                                                                    (float)((float)((float)((float)(v30 +
                                                                                              (float)((float)((float)(v29 *
                                                                                                                (float)(v33 *
                                                                                                                  v33)) -
                                                                                                        *((float*)
                                                                                                            GameData_212c2f0 +
                                                                                                          1)) *
                                                                                                (float)(v33 *
                                                                                                  v33))) *
                                                                                      (float)(v33 *
                                                                                        v33)) -
                                                                              *(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                  GameData_212c2f0 +
                                                                                4)) *
                                                                      (float)(v33 *
                                                                        v33))) *
                                                            (float)(v33 *
                                                              v33)) -
                                                    *(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      4)) *
                                            (float)(v33 * v33))) *
                                  (float)(v33 * v33)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v33 * v33)) +
          0x1.0000000000000p+0f);
      return -(float)(v34 + v24);
    }
    v7 = *(float*)GameData_212c2f0;
    v8 = -*((float*)GameData_212c2f0 + 1);
    v9 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v10 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
    v11 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v12 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
    v13 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v14 =
      -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
    if (v4 > v5) {
      v15 = v4 / v5;
      v16 = -0x1.921fb60000000p+0f;
    LABEL_17:
      v37 = v15 *
        (float)((float)((float)(v14 +
                          (float)((float)(v13 +
                                    (float)((float)(v12 +
                                              (float)((float)(v11 +
                                                        (float)((float)(v10 +
                                                                  (float)((float)(v9 +
                                                                            (float)((float)(v8 +
                                                                                      (float)(v7 *
                                                                                        (float)(v15 *
                                                                                          v15))) *
                                                                              (float)(v15 *
                                                                                v15))) *
                                                                    (float)(v15 *
                                                                      v15))) *
                                                          (float)(v15 * v15))) *
                                                (float)(v15 * v15))) *
                                      (float)(v15 * v15))) *
                            (float)(v15 * v15))) *
                  (float)(v15 * v15)) +
          0x1.0000000000000p+0f);
      return -(float)(v16 - v37);
    }
    v23 = v5 / v4;
    v24 = -0x1.921fb60000000p+1f;
    v25 =
      (float)((float)((float)((float)(v13 +
                                (float)((float)((float)((float)(v11 +
                                                          (float)((float)((float)((float)(v9 +
                                                                                    (float)((float)((float)(v7 *
                                                                                                      (float)(v23 *
                                                                                                        v23)) -
                                                                                              *((float*)
                                                                                                  GameData_212c2f0 +
                                                                                                1)) *
                                                                                      (float)(v23 *
                                                                                        v23))) *
                                                                            (float)(v23 *
                                                                              v23)) -
                                                                    *(float*)((char*)((
                                                                                _UNKNOWN**)0x8LL) +
                                                                      (_QWORD)
                                                                        GameData_212c2f0 +
                                                                      4)) *
                                                            (float)(v23 *
                                                              v23))) *
                                                  (float)(v23 * v23)) -
                                          *(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 4)) *
                                  (float)(v23 * v23))) *
                        (float)(v23 * v23)) -
                *(float*)((char*)((__int128*)0x10LL) +
                  (_QWORD)GameData_212c2f0 + 12)) *
        (float)(v23 * v23)) +
      0x1.0000000000000p+0f;
  LABEL_19:
    v34 = v23 * v25;
    return -(float)(v34 + v24);
  }
  if (v5 < 0x0.0p+0f) {
    v17 = -v5;
    v18 = v4 < (float)-v5;
    v19 = *(float*)GameData_212c2f0;
    v20 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v21 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v22 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    if (!v18) {
      v35 = v17 / v4;
      return -(float)-(float)(v35 *
        (float)((float)((float)((float)((float)(v22 +
                                          (float)((float)((float)((float)(v21 +
                                                                    (float)((float)((float)((float)(v20 +
                                                                                              (float)((float)((float)(v19 *
                                                                                                                (float)(v35 *
                                                                                                                  v35)) -
                                                                                                        *((float*)
                                                                                                            GameData_212c2f0 +
                                                                                                          1)) *
                                                                                                (float)(v35 *
                                                                                                  v35))) *
                                                                                      (float)(v35 *
                                                                                        v35)) -
                                                                              *(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                  GameData_212c2f0 +
                                                                                4)) *
                                                                      (float)(v35 *
                                                                        v35))) *
                                                            (float)(v35 *
                                                              v35)) -
                                                    *(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      4)) *
                                            (float)(v35 * v35))) *
                                  (float)(v35 * v35)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v35 * v35)) +
          0x1.0000000000000p+0f));
    }
    v23 = v4 / v17;
    v24 = -0x1.921fb60000000p+0f;
    v25 =
      (float)((float)((float)((float)(v22 +
                                (float)((float)((float)((float)(v21 +
                                                          (float)((float)((float)((float)(v20 +
                                                                                    (float)((float)((float)(v19 *
                                                                                                      (float)(v23 *
                                                                                                        v23)) -
                                                                                              *((float*)
                                                                                                  GameData_212c2f0 +
                                                                                                1)) *
                                                                                      (float)(v23 *
                                                                                        v23))) *
                                                                            (float)(v23 *
                                                                              v23)) -
                                                                    *(float*)((char*)((
                                                                                _UNKNOWN**)0x8LL) +
                                                                      (_QWORD)
                                                                        GameData_212c2f0 +
                                                                      4)) *
                                                            (float)(v23 *
                                                              v23))) *
                                                  (float)(v23 * v23)) -
                                          *(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 4)) *
                                  (float)(v23 * v23))) *
                        (float)(v23 * v23)) -
                *(float*)((char*)((__int128*)0x10LL) +
                  (_QWORD)GameData_212c2f0 + 12)) *
        (float)(v23 * v23)) +
      0x1.0000000000000p+0f;
    goto LABEL_19;
  }
  v7 = *(float*)GameData_212c2f0;
  v8 = -*((float*)GameData_212c2f0 + 1);
  v9 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
  v10 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
  v11 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
  v12 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
  v13 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
  v14 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
  if (v4 < v5) {
    v15 = v4 / v5;
    v16 = 0x1.921fb60000000p+0f;
    goto LABEL_17;
  }
  v38 = v5 / v4;
  return -(float)(v38 *
    (float)((float)((float)((float)((float)(v13 +
                                      (float)((float)((float)((float)(v11 +
                                                                (float)((float)((float)((float)(v9 +
                                                                                          (float)((float)((float)(v7 *
                                                                                                            (float)(v38 *
                                                                                                              v38)) -
                                                                                                    *((float*)
                                                                                                        GameData_212c2f0 +
                                                                                                      1)) *
                                                                                            (float)(v38 *
                                                                                              v38))) *
                                                                                  (float)(v38 *
                                                                                    v38)) -
                                                                          *(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                            (_QWORD)
                                                                              GameData_212c2f0 +
                                                                            4)) *
                                                                  (float)(v38 *
                                                                    v38))) *
                                                        (float)(v38 * v38)) -
                                                *(float*)((char*)((
                                                            __int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  4)) *
                                        (float)(v38 * v38))) *
                              (float)(v38 * v38)) -
                      *(float*)((char*)((__int128*)0x10LL) +
                        (_QWORD)GameData_212c2f0 + 12)) *
              (float)(v38 * v38)) +
      0x1.0000000000000p+0f));
}

void game_combat_e436c0(__int64 a1, float32x2_t* a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  long double v7;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float32x2_t* v18;
  int32x2_t v19;
  __int64 v20;
  __int64 v21;
  long double v22;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float32x2_t* v33;
  int32x2_t v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 i;
  __int64 v39;
  __int64 v40;
  __int64 j;
  struct {
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v42_;

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    GameRoutine_d2a680_alt1(*(_QWORD*)(v3 + 32) + 72LL, (__int64**)(a1 + 24),
                            a3);
    v11 = *(_QWORD*)(v3 + 32);
    if ((*(_BYTE*)(v11 + 124) & 1) != 0) {
      BlendLayer_d2b700(
          (void*)(&v42_.v42),
          (__int64*)(*(_QWORD*)(v11 + 96) + 56LL * *(int*)(v11 + 120)));
    }
    else {
      v42_.v43 = 0;
      v42_.v44 = 0;
      v42_.v42 = 0;
    }
    if (*(_QWORD*)(a1 + 32) != *(_QWORD*)(a1 + 24)) {
      v12 = 16;
      v13 = 0;
      do {
        v14 = *(_DWORD*)(v42_.v42 + 4 * v13++);
        *(_DWORD*)(*(_QWORD*)(a1 + 72) + v12) = v14;
        v12 += 32;
      } while (0xCCCCCCCCCCCCCCCDLL *
                   ((__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 4) >
               v13);
    }
    v15 = *(_QWORD*)(v3 + 32);
    if (*(_BYTE*)(v15 + 124) == 1) {
      v16 = *(_QWORD*)(v15 + 96) + 56LL * *(int*)(v15 + 120);
      v18 = *(float32x2_t**)v16;
      v17 = *(_QWORD*)(v16 + 8);
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v18 != nullptr) {
        *(float32x2_t*)&v7 = COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]);
        LANES64(v19).n64_u64[0] =
            LANES64_OF(vceq_f32(v18[11], COERCE_AS(float32x2_t,
                                                   LANES64(*(a2)).n64_u64[0])))
                .n64_u64[0];
        if ((LANES64(v19).n64_u8[0] & 1) == 0 ||
            (LANES64(v19).n64_u8[4] & 1) == 0) {
          LANES64(v18[11]).n64_u32[0] = LODWORD(v7);
          LODWORD(v7) = LANES64(*(a2)).n64_u32[1];
          LANES64(v18[11]).n64_u32[1] = LODWORD(v7);
          Graph_d29060_alt1(v18, v7, LANES64(v19).n64_f64[0]);
          *(float32x2_t*)&v7 =
              COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]);
        }
        LANES64(v18[12]).n64_u32[0] = LODWORD(v7);
        LANES64(v18[12]).n64_u32[1] = LANES64(*(a2)).n64_u32[1];
      }
      if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt2(v17);
      }
    }
    if (v42_.v42 != 0) {
      v42_.v43 = v42_.v42;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v42_.v42);
    }
  }
  v21 = *(_QWORD*)(a1 + 16);
  if (v21 != 0) {
    GameRoutine_d2a680_alt1(*(_QWORD*)(v21 + 32) + 72LL, (__int64**)(a1 + 48),
                            a3);
    v26 = *(_QWORD*)(v21 + 32);
    if ((*(_BYTE*)(v26 + 124) & 1) != 0) {
      BlendLayer_d2b700(
          (void*)(&v42_.v42),
          (__int64*)(*(_QWORD*)(v26 + 96) + 56LL * *(int*)(v26 + 120)));
    }
    else {
      v42_.v43 = 0;
      v42_.v44 = 0;
      v42_.v42 = 0;
    }
    if (*(_QWORD*)(a1 + 56) != *(_QWORD*)(a1 + 48)) {
      v27 = 16;
      v28 = 0;
      do {
        v29 = *(_DWORD*)(v42_.v42 + 4 * v28++);
        *(_DWORD*)(*(_QWORD*)(a1 + 96) + v27) = v29;
        v27 += 32;
      } while (0xCCCCCCCCCCCCCCCDLL *
                   ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 48)) >> 4) >
               v28);
    }
    v30 = *(_QWORD*)(v21 + 32);
    if (*(_BYTE*)(v30 + 124) == 1) {
      v31 = *(_QWORD*)(v30 + 96) + 56LL * *(int*)(v30 + 120);
      v33 = *(float32x2_t**)v31;
      v32 = *(_QWORD*)(v31 + 8);
      if (v32 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v33 != nullptr) {
        *(float32x2_t*)&v22 = COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]);
        LANES64(v34).n64_u64[0] =
            LANES64_OF(vceq_f32(v33[11], COERCE_AS(float32x2_t,
                                                   LANES64(*(a2)).n64_u64[0])))
                .n64_u64[0];
        if ((LANES64(v34).n64_u8[0] & 1) == 0 ||
            (LANES64(v34).n64_u8[4] & 1) == 0) {
          LANES64(v33[11]).n64_u32[0] = LODWORD(v22);
          LODWORD(v22) = LANES64(*(a2)).n64_u32[1];
          LANES64(v33[11]).n64_u32[1] = LODWORD(v22);
          Graph_d29060_alt1(v33, v22, LANES64(v34).n64_f64[0]);
          *(float32x2_t*)&v22 =
              COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]);
        }
        LANES64(v33[12]).n64_u32[0] = LODWORD(v22);
        LANES64(v33[12]).n64_u32[1] = LANES64(*(a2)).n64_u32[1];
      }
      if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak_alt2(v32);
      }
    }
    if (v42_.v42 != 0) {
      v42_.v43 = v42_.v42;
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v42_.v42);
    }
  }
  v36 = *(_QWORD*)(a1 + 8);
  if (v36 != 0) {
    v37 = *(_QWORD*)(a1 + 72);
    for (i = *(_QWORD*)(a1 + 80); v37 != i; v37 += 32) {
      if ((*(_BYTE*)(v37 + 24) & 1) != 0) {
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v36 + 24) + 72LL) +
                   104LL * *(int*)(v37 + 16) + 8) = *(_DWORD*)(v37 + 20);
      }
    }
  }
  v39 = *(_QWORD*)(a1 + 16);
  if (v39 != 0) {
    v40 = *(_QWORD*)(a1 + 96);
    for (j = *(_QWORD*)(a1 + 104); v40 != j; v40 += 32) {
      if ((*(_BYTE*)(v40 + 24) & 1) != 0) {
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v39 + 24) + 72LL) +
                   104LL * *(int*)(v40 + 16) + 8) = *(_DWORD*)(v40 + 20);
      }
    }
  }
}

void game_combat_e43d60(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  bool v15;
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

  if (*(_BYTE*)(a1 + 140) == 1) {
    v1 = *(_DWORD*)(a1 + 136);
    if (*(_DWORD*)(a1 + 84) != 4) {
      *(_QWORD*)(a1 + 88) = 0;
      *(_QWORD*)(a1 + 96) = 0;
      *(_DWORD*)(a1 + 84) = 4;
      if (*(_BYTE*)(a1 + 64) == 1) {
        *(_BYTE*)(a1 + 64) = 0;
      }
    }
    *(_DWORD*)(a1 + 32) = v1;
    *(_DWORD*)(a1 + 104) = 1056964608;
    return;
  }
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 72);
  if (v3 != 0) {
    if (*(_DWORD*)(a1 + 84) != 2) {
      *(_DWORD*)(a1 + 32) = 0;
      *(_QWORD*)(a1 + 96) = 0;
      *(_DWORD*)(a1 + 84) = 2;
      if (*(_BYTE*)(a1 + 64) == 1) {
        *(_BYTE*)(a1 + 64) = 0;
      }
    }
    *(_QWORD*)(a1 + 88) = v3;
    *(_DWORD*)(a1 + 104) = 1065353216;
    return;
  }
  v4 = *(_QWORD*)(v2 + 64);
  v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 40LL) + 8LL);
  if (v5 != 6 && v5 != 0) {
    goto LABEL_36;
  }
  v7 = *(_DWORD*)(v4 + 112);
  if (v7 != 0) {
    if (v7 != 1) {
      goto LABEL_36;
    }
    v8 = 0;
  }
  else {
    v8 = 1;
  }
  v9 = *GameData_212d448[0] + 24LL * v8;
  v10 = *(_QWORD*)(v9 + 32);
  if (v10 == 0) {
  LABEL_36:
    v16 = *(float*)(v4 + 136);
    v17 = *(float*)(v4 + 140);
    v18 = (float)((float)(**(float**)(v2 + 80) + -0x1.0000000000000p-1f) +
                  (float)(**(float**)(v2 + 80) + -0x1.0000000000000p-1f)) *
          0x1.41b2f80000000p-2f;
    v19 = v18 +
          (float)(roundf(v18 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v19 <= 0x1.921fb60000000p+0f) {
      v21 = 0x1.0000000000000p+0f;
      if (v19 >= -0x1.921fb60000000p+0f) {
        goto LABEL_41;
      }
      v20 = -0x1.921fb60000000p+1f;
    }
    else {
      v20 = 0x1.921fb60000000p+1f;
    }
    v19 = v20 - v19;
    v21 = -0x1.0000000000000p+0f;
  LABEL_41:
    v22 =
        v19 *
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
                                                                                              (float)(v19 *
                                                                                                      v19))) *
                                                                              (float)(v19 *
                                                                                      v19))) *
                                                           (float)(v19 *
                                                                   v19))) *
                                           (float)(v19 * v19))) *
                        (float)(v19 * v19)) +
                0x1.0000000000000p+0f);
    v23 =
        v21 *
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
                                                                                              (float)(v19 *
                                                                                                      v19))) *
                                                                              (float)(v19 *
                                                                                      v19))) *
                                                           (float)(v19 *
                                                                   v19))) *
                                           (float)(v19 * v19))) *
                        (float)(v19 * v19)) +
                0x1.0000000000000p+0f);
    v24 = (float)(v17 * v22) + (float)(v16 * v23);
    v25 = (float)(v17 * v23) - (float)(v16 * v22);
    if (*(_DWORD*)(a1 + 84) != 1) {
      *(_DWORD*)(a1 + 32) = 0;
      *(_QWORD*)(a1 + 88) = 0;
      *(_QWORD*)(a1 + 96) = 0;
      *(_DWORD*)(a1 + 84) = 1;
      if (*(_BYTE*)(a1 + 64) == 1) {
        *(_BYTE*)(a1 + 64) = 0;
      }
    }
    *(float*)(a1 + 24) = v24;
    *(float*)(a1 + 28) = v25;
    *(_DWORD*)(a1 + 104) = 1065353216;
    return;
  }
  v11 = a1;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  v12 = *(_QWORD*)(v9 + 40);
  v13 = *(_QWORD*)(v10 + 8) == -1 || v12 == 0;
  if (v13 || (v14 = *(_QWORD*)(v12 + 80)) == 0 ||
      (*(_QWORD*)(v14 + 8) != -1 ? (v15 = *(_QWORD*)(v12 + 88) == 0)
                                 : (v15 = true),
       v15 || *(_QWORD*)(v10 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v10);
    v2 = *(_QWORD*)(v11 + 8);
    a1 = v11;
    v4 = *(_QWORD*)(v2 + 64);
    goto LABEL_36;
  }
  std___1___shared_weak_count___release_weak(v10);
  if (*(_DWORD*)(v11 + 84) != 3) {
    *(_DWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 88) = 0;
    *(_DWORD*)(v11 + 84) = 3;
    if (*(_BYTE*)(v11 + 64) == 1) {
      *(_BYTE*)(v11 + 64) = 0;
    }
  }
  *(_QWORD*)(v11 + 96) = v12;
  *(_DWORD*)(v11 + 104) = 1065353216;
}

void game_combat_e44050(float32x4_t* a1)
{
  int v1;
  unsigned __int64 v3;
  float32x4_t v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  unsigned __int32 v19;
  float v20;
  float v21;
  _QWORD* v22;
  float v23;
  __int64 v24;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float32x4_t v39;

  v1 = LANES128(a1[5]).n128_i32[1];
  if (v1 > 2) {
    if (v1 != 3) {
      if (v1 == 4) {
        CombatLegionManager_e2dfe0((void*)(&v39), LANES128(a1[2]).n128_f32[0]);
        v3 = LANES128(*(a1)).n128_u64[1];
        v4 = v39;
      }
      else {
        if (v1 != 5 || LANES128(a1[4]).n128_u8[0] != 1) {
          goto LABEL_20;
        }
        v3 = LANES128(*(a1)).n128_u64[1];
        v4 = a1[3];
      }
      v13 = *(_QWORD*)(v3 + 120);
      v11 = *(float*)(v13 + 20);
      v9 = LANES128(v4).n128_f32[2];
      v12 = LANES128(v4).n128_f32[0] - *(float*)(v13 + 16);
      goto LABEL_16;
    }
    v10 = LANES128(a1[6]).n128_u64[0];
    if (v10 == 0) {
      goto LABEL_20;
    }
    v8 = *(float*)(v10 + 40);
    v9 = *(float*)(v10 + 44);
    v7 = *(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 120);
  LABEL_13:
    v11 = *(float*)(v7 + 20);
    v12 = v8 - *(float*)(v7 + 16);
  LABEL_16:
    v14 = v9 - v11;
    v15 = (float)(PSEUDO_UNFUSED(v14 * v14)) + (float)(v12 * v12);
    if (v15 >= 0x1.0000000000000p-23f) {
      v18 = 0x1.0000000000000p+0f / sqrtf(v15);
      v17 = v12 * v18;
      v16 = v14 * v18;
    }
    else {
      v16 = 0x1.0000000000000p+0f;
      v17 = 0x0.0p+0f;
    }
    LANES128(a1[1]).n128_f32[2] = v17;
    LANES128(a1[1]).n128_f32[3] = v16;
    goto LABEL_20;
  }
  if (v1 == 0) {
    return;
  }
  if (v1 == 2) {
    v5 = LANES128(a1[5]).n128_u64[1];
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 120);
      v7 = *(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 120);
      v8 = *(float*)(v6 + 16);
      v9 = *(float*)(v6 + 20);
      goto LABEL_13;
    }
  }
LABEL_20:
  if (LANES128(a1[5]).n128_u8[0] == 1) {
    v19 = LANES128(a1[1]).n128_u32[3];
    LANES128(a1[1]).n128_u32[0] = LANES128(a1[1]).n128_u32[2];
    LANES128(a1[1]).n128_u32[1] = v19;
  }
  if (LANES128(a1[8]).n128_i32[0] <= 0) {
    LANES128(v39).n128_u64[0] = 0x3F80000000000000LL;
    v20 = game_combat_e401e0((float*)&v39, (float*)&a1[1]);
    LANES128(v39).n128_u64[0] = 0x3F80000000000000LL;
    v21 = game_combat_e401e0((float*)&v39, &LANES128(a1[1]).n128_f32[2]);
    v22 = (_QWORD*)LANES128(*(a1)).n128_u64[1];
    v23 = 0x0.0p+0f;
    v24 = v22[6];
    if (v24 != 0 && *(_QWORD*)(v24 + 8) != -1 && v22[7] != 0) {
      v26 = v22[1];
      if (v26 != 0) {
        v23 = (float)((float)(*(float*)(*(_QWORD*)(v26 + 496) + 16LL) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f) *
              0x1.921fb60000000p+2f;
      }
    }
    v27 = v23 * LANES128(a1[6]).n128_f32[2];
    v28 = fmodf(v21 - v20, 0x1.921fb60000000p+2f);
    if (v28 >= 0x0.0p+0f) {
      v29 = v28 + 0x0.0p+0f;
    }
    else {
      v29 = (float)(v28 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    if (v29 > 0x1.921fb60000000p+1f) {
      v29 = v29 + -0x1.921fb60000000p+2f;
    }
    v30 = fabsf(v27);
    v31 = v20 + v29;
    if (v20 <= v31) {
      if (v20 >= v31) {
        goto LABEL_41;
      }
      v20 = v20 + v30;
      if (v20 <= v31) {
        goto LABEL_41;
      }
    }
    else {
      v20 = v20 - v30;
      if (v20 >= v31) {
      LABEL_41:
        v32 = fmodf(v20 + 0x1.921fb60000000p+1f, 0x1.921fb60000000p+2f) +
              -0x1.921fb60000000p+1f;
        if (v32 < -0x1.921fb60000000p+1f) {
          v32 = v32 + 0x1.921fb60000000p+2f;
        }
        v33 = v32 + (float)(roundf(v32 * 0x1.45f3060000000p-3f) *
                            -0x1.921fb60000000p+2f);
        if (v33 <= 0x1.921fb60000000p+0f) {
          v35 = 0x1.0000000000000p+0f;
          if (v33 >= -0x1.921fb60000000p+0f) {
          LABEL_48:
            v36 = v33 * v33;
            v37 =
                v33 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
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
                                                                                                      (float)(v33 *
                                                                                                              v33))) *
                                                                                      (float)(v33 *
                                                                                              v33))) *
                                                                   (float)(v33 *
                                                                           v33))) *
                                                   (float)(v33 * v33))) *
                                (float)(v33 * v33)) +
                        0x1.0000000000000p+0f);
            v38 =
                v35 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
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
                                                                                                      v36)) *
                                                                                      v36)) *
                                                                   v36)) *
                                                   v36)) *
                                v36) +
                        0x1.0000000000000p+0f);
            LANES128(a1[1]).n128_f32[0] = v37 + (float)(v38 * 0x0.0p+0f);
            LANES128(a1[1]).n128_f32[1] = v38 + (float)(v37 * -0x0.0p+0f);
            return;
          }
          v34 = -0x1.921fb60000000p+1f;
        }
        else {
          v34 = 0x1.921fb60000000p+1f;
        }
        v33 = v34 - v33;
        v35 = -0x1.0000000000000p+0f;
        goto LABEL_48;
      }
    }
    v20 = v31;
    goto LABEL_41;
  }
}

__int64 game_combat_e446a0(int32x2_t* a1)
{

#pragma clang fp contract(off)
  long double v2;
  float v3;
  float v4;
  float v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 result;

  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_combat_e447d0(a1),
      v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (LANES64(a1[14]).n64_u32[1] != 3) {
    game_combat_e449b0((__int64)a1),
        v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_22;
  }
  v3 = LANES64(a1[10]).n64_f32[0];
  v4 = LANES64(a1[10]).n64_f32[1];
  v5 = 0x0.0p+0f;
  v6 = (_QWORD*)LANES64(a1[1]).n64_u64[0];
  v7 = v6[6];
  if (v7 != 0 && *(_QWORD*)(v7 + 8) != -1 && v6[7] != 0) {
    v9 = v6[1];
    if (v9 != 0) {
      v5 = (float)(*(float*)(*(_QWORD*)(v9 + 496) + 16LL) *
                   0x1.0aef000000000p+4f) /
           0x1.f400000000000p+9f;
    }
  }
  v10 = fabsf(v5);
  if (v4 > v3) {
    v4 = v4 - v10;
    if (v4 >= v3) {
      goto LABEL_16;
    }
  }
  else if (v4 >= v3 || (v4 = v4 + v10) <= v3) {
  LABEL_16:
    v11 = v4 / v3;
    v12 = LANES64(a1[5]).n64_f32[0];
    v13 = LANES64(a1[5]).n64_f32[1];
    LANES64(a1[10]).n64_f32[1] = v4;
    v14 = (float)(0x1.0000000000000p+0f - v11) * v13;
    v15 = LANES64(a1[3]).n64_f32[0];
    v16 = LANES64(a1[3]).n64_f32[1];
    v17 = (float)(v12 * (float)(0x1.0000000000000p+0f - v11)) +
          (float)(v11 * v15);
    *(float*)&v2 = v14 + (float)(v11 * v16);
    LANES64(a1[2]).n64_f32[0] = v17;
    LANES64(a1[2]).n64_u32[1] = LODWORD(v2);
    if (v17 == v15 && *(float*)&v2 == v16) {
      LANES64(a1[15]).n64_u64[0] = 0;
      LANES64(a1[5]).n64_u64[0] = 0;
      LANES64(a1[10]).n64_u64[0] = 0;
      LANES64(a1[11]).n64_u64[0] = 0;
      LANES64(a1[14]).n64_u32[1] = 0;
    }
  LABEL_22:
    game_combat_e44cd0((__int64)a1, v2),
        v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = game_combat_e45210_alt1((__int64)a1),
    v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LANES64(a1[12]).n64_u8[1] = 0;
    return result;
  }
  v4 = LANES64(a1[10]).n64_f32[0];
  goto LABEL_16;
}

int32x2_t* game_combat_e447d0(int32x2_t* result)
{
  _QWORD* v1;
  __int64 v2;
  int32x2_t* v4;
  unsigned __int32 v5;
  unsigned __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  int32x2_t* v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;

  v1 = (_QWORD*)LANES64(result[1]).n64_u64[0];
  v2 = v1[6];
  if (v2 != 0 && *(_QWORD*)(v2 + 8) != -1 && v1[7] != 0) {
    v4 = (int32x2_t*)v1[1];
    if (v4 != nullptr) {
      LANES64(result[2]).n64_u64[0] =
          LANES64_OF(
              vzip1_s32(
                  v4[38],
                  COERCE_AS(
                      int32x2_t,
                      LANES128_OF(vextq_s8(*(int8x16_t*)LANES64(v4[38]).n64_u64,
                                           *(int8x16_t*)LANES64(v4[38]).n64_u64,
                                           8u))
                          .n128_u64[0])))
              .n64_u64[0];
    }
  }
  v5 = LANES64(result[14]).n64_u32[1];
  if (v5 == 2) {
    v10 = v1[16];
    v11 = *(float*)(v10 + 16);
    v12 = *(float*)(v10 + 20);
    v13 =
        LANES64(result[11]).n64_f32[1] +
        (float)(roundf(LANES64(result[11]).n64_f32[1] * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
    if (v13 <= 0x1.921fb60000000p+0f) {
      v16 = 1.0f;
      v14 = result;
      if (v13 >= -0x1.921fb60000000p+0f) {
      LABEL_17:
        v17 = v13 * v13;
        v18 = v1[17];
        v19 =
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
                                                               (float)(v13 *
                                                                       v13))) *
                                               (float)(v13 * v13))) *
                            (float)(v13 * v13)) +
                    1.0f);
        v20 =
            v16 *
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
                                                                                                  v17)) *
                                                                                  v17)) *
                                                               v17)) *
                                               v17)) *
                            v17) +
                    1.0f);
        v21 = (float)(v12 * v19) + (float)(v11 * v20);
        v22 = (float)(v12 * v20) - (float)(v11 * v19);
        v23 = GameRoutine_e9f200_alt1(v18);
        result = v14;
        v24 = fmaxf(v23, 0x1.3333340000000p-1f);
        if ((*(_BYTE*)(v18 + 92) & (*(float*)(v18 + 88) < v24)) != 0) {
          v24 = *(float*)(v18 + 88);
        }
        v25 = v24 + 2.0f;
        v26 = v22 * v25;
        v8 = LANES64(v14[2]).n64_f32[0] + (float)(v21 * v25);
        v9 = LANES64(v14[2]).n64_f32[1] + v26;
        goto LABEL_20;
      }
      v15 = -0x1.921fb60000000p+1f;
    }
    else {
      v14 = result;
      v15 = 0x1.921fb60000000p+1f;
    }
    v13 = v15 - v13;
    v16 = -1.0f;
    goto LABEL_17;
  }
  if (v5 == 1) {
    v6 = LANES64(result[15]).n64_u64[0];
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 120);
      v8 = *(float*)(v7 + 16);
      v9 = *(float*)(v7 + 20);
    LABEL_20:
      LANES64(result[3]).n64_f32[0] = v8;
      LANES64(result[3]).n64_f32[1] = v9;
    }
  }
  return result;
}

void game_combat_e449b0(__int64 a1)
{
  float v1;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
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
  _QWORD* v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  float v44;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = 0x0.0p+0f;
  v3 = *(float*)(a1 + 28) - *(float*)(a1 + 20);
  v4 = *(float*)(a1 + 24) - *(float*)(a1 + 16);
  v5 = 0x0.0p+0f;
  v6 = (float)(PSEUDO_UNFUSED(v3 * v3)) + (float)(v4 * v4);
  v7 = 0x0.0p+0f;
  if (v6 > 0x0.0p+0f) {
    v7 = 0x1.0000000000000p+0f;
    v5 = 0x0.0p+0f;
    if (v6 >= 0x1.0000000000000p-23f) {
      v8 = 0x1.0000000000000p+0f / sqrtf(v6);
      v5 = v4 * v8;
      v7 = v3 * v8;
    }
  }
  v9 = *(float*)(a1 + 108) * *(float*)(a1 + 88);
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 136LL);
  v11 = v5 * v9;
  v12 = v7 * v9;
  GameRoutine_e9f200(v10),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = fmaxf(v13, 0x1.3333340000000p-1f);
  if ((*(_BYTE*)(v10 + 92) & (*(float*)(v10 + 88) < v14)) != 0) {
    v15 = *(float*)(v10 + 88);
  }
  else {
    v15 = v14;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 136LL);
  GameRoutine_e9f200(v16),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  v18 = fmaxf(v17, 0x1.3333340000000p-1f);
  if ((*(_BYTE*)(v16 + 92) & (*(float*)(v16 + 88) < v18)) != 0) {
    v18 = *(float*)(v16 + 88);
  }
  v19 = v18 + 0x1.0000000000000p+1f;
  v20 = sqrtf(v6);
  v21 = v19 - v15;
  if (v21 != 0x0.0p+0f) {
    v22 = (float)(v20 - v15) / v21;
    v23 = 0x1.0000000000000p+0f;
    if (v22 <= 0x1.0000000000000p+0f) {
      v23 = v22;
    }
    if (v22 >= 0x0.0p+0f) {
      v1 = v23;
    }
    else {
      v1 = 0x0.0p+0f;
    }
  }
  v24 = (float)(v1 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
  v25 = v11 * v24;
  v26 = v12 * v24;
  if (*(_BYTE*)(a1 + 97) != 1) {
    v27 = *(_QWORD**)(a1 + 8);
    v29 = 0x0.0p+0f;
    v30 = 0x0.0p+0f;
    v31 = v27[6];
    if (v31 != 0 && *(_QWORD*)(v31 + 8) != -1 && v27[7] != 0) {
      v33 = v27[1];
      if (v33 != 0) {
        v30 = (float)(*(float*)(*(_QWORD*)(v33 + 496) + 16LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f;
      }
    }
    v34 = *(float*)(a1 + 112) * v30;
    v28 = *(float*)(a1 + 32);
    v35 = *(float*)(a1 + 36);
    v36 = v26 - v35;
    v37 = v25 - v28;
    v38 = (float)(PSEUDO_UNFUSED(v36 * v36)) + (float)(v37 * v37);
    v39 = 0x1.0000000000000p+0f;
    if (v38 >= 0x1.0000000000000p-23f) {
      v40 = 0x1.0000000000000p+0f / sqrtf(v38);
      v29 = v37 * v40;
      v39 = v36 * v40;
    }
    v41 = fabsf(v34 * fabsf(v29));
    if (v28 <= v25) {
      if (v28 >= v25 || (v28 = v28 + v41) <= v25) {
      LABEL_32:
        v42 = fabsf(v34 * fabsf(v39));
        if (v35 <= v26) {
          if (v35 >= v26) {
            goto LABEL_38;
          }
          v35 = v35 + v42;
          if (v35 <= v26) {
            goto LABEL_38;
          }
        }
        else {
          v35 = v35 - v42;
          if (v35 >= v26) {
            goto LABEL_38;
          }
        }
        v35 = v26;
      LABEL_38:
        v26 = v35;
        *(float*)(a1 + 32) = v28;
        *(float*)(a1 + 36) = v35;
        goto LABEL_39;
      }
    }
    else {
      v28 = v28 - v41;
      if (v28 >= v25) {
        goto LABEL_32;
      }
    }
    v28 = v25;
    goto LABEL_32;
  }
  v27 = *(_QWORD**)(a1 + 8);
  *(float*)(a1 + 32) = v25;
  *(float*)(a1 + 36) = v26;
  v28 = v25;
LABEL_39:
  v43 = v27[6];
  v44 = 0x0.0p+0f;
  if (v43 != 0 && *(_QWORD*)(v43 + 8) != -1 && v27[7] != 0) {
    v46 = v27[1];
    if (v46 != 0) {
      v44 = (float)(*(float*)(*(_QWORD*)(v46 + 496) + 16LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
    }
  }
  v47 = v44 * v26;
  v48 = v44 * v28;
  if (sqrtf((float)(PSEUDO_UNFUSED(v47 * v47)) + (float)(v48 * v48)) <= v20) {
    v51 = v48 + *(float*)(a1 + 16);
    v52 = v47 + *(float*)(a1 + 20);
    v49 = *(float*)(a1 + 24);
    v50 = *(float*)(a1 + 28);
  }
  else {
    v49 = *(float*)(a1 + 24);
    v50 = *(float*)(a1 + 28);
    v51 = v49;
    v52 = v50;
  }
  *(float*)(a1 + 16) = v51;
  *(float*)(a1 + 20) = v52;
  if (v51 == v49 && v52 == v50) {
    *(_QWORD*)(a1 + 120) = 0;
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 80) = 0;
    *(_QWORD*)(a1 + 88) = 0;
    *(_DWORD*)(a1 + 116) = 0;
  }
}

void game_combat_e44cd0(__int64 a1, long double a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 v31;
  long double v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  float v36;
  float v37;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int128 v53;
  float v54;
  float v55;
  int v56;
  float v57;
  float v58;
  float v59;
  float v60;
  long double v61;
  float v62;
  float v63;
  __int128 v64;
  long double v65;
  _WORD v66[2];
  __int64 v67;
  __int64 v68;
  long double v69;

  LODWORD(a2) = *(_DWORD*)(a1 + 16);
  v66[0] = 0;
  DWORD2(a2) = *(_DWORD*)(a1 + 20);
  v3 = GameData_212f2e0;
  v4 = *GameData_212f2e0;
  v61 = a2;
  v69 = a2;
  v5 = *(_QWORD*)(v4 + 32);
  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD*)(v6 + 136);
  v8 = *(_QWORD*)(v6 + 144);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    ((__attribute__((swiftcall)) void (*)(
        PSEUDO_X8, __int64, long double*, __int64, _WORD*,
        __int64))GameRoutine_e9f860)((void*)&v67, v5, &v69, v7, v66, 2);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if ((v67 & 1) != 0) {
        goto LABEL_4;
      }
    LABEL_11:
      v15 = *(float*)(a1 + 16);
      v14 = *(float*)(a1 + 20);
      v16 = *(_QWORD**)(a1 + 8);
      goto LABEL_37;
    }
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
    if ((v67 & 1) == 0) {
      goto LABEL_11;
    }
  }
  else {
    ((__attribute__((swiftcall)) void (*)(
        PSEUDO_X8, __int64, long double*, __int64, _WORD*,
        __int64))GameRoutine_e9f860)((void*)&v67, v5, &v69, v7, v66, 2);
    if ((v67 & 1) == 0) {
      goto LABEL_11;
    }
  }
LABEL_4:
  if (*(_DWORD*)(a1 + 116) != 0) {
    v9 = *(float*)(a1 + 108);
    v10 = sqrtf((float)(*(float*)(a1 + 36) * *(float*)(a1 + 36)) +
                (float)(*(float*)(a1 + 32) * *(float*)(a1 + 32)));
    v11 = v9 * 0x1.99999a0000000p-5;
    v12 = v9 * 0.5;
    if (v12 >= v10) {
      v12 = v10;
    }
    if (v10 >= v11) {
      v13 = v12;
    }
    else {
      v13 = v11;
    }
  }
  else {
    v13 = *(float*)(a1 + 108) * 0.5;
  }
  v16 = *(_QWORD**)(a1 + 8);
  v17 = 0.0;
  v18 = 0.0;
  v19 = v16[6];
  if (v19 != 0 && *(_QWORD*)(v19 + 8) != -1 && v16[7] != 0) {
    v21 = v16[1];
    if (v21 != 0) {
      v18 = (float)(*(float*)(*(_QWORD*)(v21 + 496) + 16LL) *
                    0x1.0aef000000000p+4) /
            0x1.f400000000000p+9;
    }
  }
  v22 = v13 * v18;
  v15 = *(float*)(a1 + 16);
  v14 = *(float*)(a1 + 20);
  v23 = *(float*)&v68 - v14;
  v24 = *((float*)&v67 + 1) - v15;
  v25 = (float)(v23 * v23) + (float)(v24 * v24);
  v26 = 1.0;
  if (v25 >= 0x1.0000000000000p-23) {
    v27 = 1.0 / sqrtf(v25);
    v17 = v24 * v27;
    v26 = v23 * v27;
  }
  v28 = fabsf(v22 * fabsf(v17));
  if (v15 > *((float*)&v67 + 1)) {
    v15 = v15 - v28;
    if (v15 >= *((float*)&v67 + 1)) {
      goto LABEL_30;
    }
  LABEL_29:
    v15 = *((float*)&v67 + 1);
    goto LABEL_30;
  }
  if (v15 < *((float*)&v67 + 1)) {
    v15 = v15 + v28;
    if (v15 > *((float*)&v67 + 1)) {
      goto LABEL_29;
    }
  }
LABEL_30:
  v29 = fabsf(v22 * fabsf(v26));
  if (v14 <= *(float*)&v68) {
    if (v14 >= *(float*)&v68) {
      goto LABEL_36;
    }
    v14 = v14 + v29;
    if (v14 <= *(float*)&v68) {
      goto LABEL_36;
    }
  }
  else {
    v14 = v14 - v29;
    if (v14 >= *(float*)&v68) {
      goto LABEL_36;
    }
  }
  v14 = *(float*)&v68;
LABEL_36:
  *(float*)(a1 + 16) = v15;
  *(float*)(a1 + 20) = v14;
LABEL_37:
  v30 = v16[17];
  v31 = v16[18];
  *(_QWORD*)&v32 = LODWORD(v15);
  v33 = *(_QWORD*)(*v3 + 32);
  *((_QWORD*)&v32 + 1) = LODWORD(v14);
  v69 = v32;
  if (v31 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                              memory_order_relaxed);
    ((__attribute__((swiftcall)) void (*)(
        PSEUDO_X8, __int64, long double*, __int64, _WORD*,
        __int64))GameRoutine_e9f860)((void*)&v67, v33, &v69, v30, v66, 1);
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak(v31);
    }
  }
  else {
    ((__attribute__((swiftcall)) void (*)(
        PSEUDO_X8, __int64, long double*, __int64, _WORD*,
        __int64))GameRoutine_e9f860)((void*)&v67, v33, &v69, v30, v66, 1);
  }
  v34 = *(_QWORD**)(a1 + 8);
  if ((v67 & 1) == 0) {
    v41 = *(float*)(a1 + 16);
    v42 = *(float*)(a1 + 20);
    goto LABEL_65;
  }
  v35 = v34[6];
  v36 = 0.0;
  v37 = 0.0;
  if (v35 != 0 && *(_QWORD*)(v35 + 8) != -1 && v34[7] != 0) {
    v39 = v34[1];
    if (v39 != 0) {
      v37 = (float)(*(float*)(*(_QWORD*)(v39 + 496) + 16LL) *
                    0x1.0aef000000000p+4) /
            0x1.f400000000000p+9;
    }
  }
  v40 = *(float*)(a1 + 108) * v37;
  v41 = *(float*)(a1 + 16);
  v42 = *(float*)(a1 + 20);
  v43 = *(float*)&v68 - v42;
  v44 = *((float*)&v67 + 1) - v41;
  v45 = (float)(v43 * v43) + (float)(v44 * v44);
  v46 = 1.0;
  if (v45 >= 0x1.0000000000000p-23) {
    v47 = 1.0 / sqrtf(v45);
    v36 = v44 * v47;
    v46 = v43 * v47;
  }
  v48 = fabsf(v40 * fabsf(v36));
  if (v41 > *((float*)&v67 + 1)) {
    v41 = v41 - v48;
    if (v41 >= *((float*)&v67 + 1)) {
      goto LABEL_58;
    }
  LABEL_57:
    v41 = *((float*)&v67 + 1);
    goto LABEL_58;
  }
  if (v41 < *((float*)&v67 + 1)) {
    v41 = v41 + v48;
    if (v41 > *((float*)&v67 + 1)) {
      goto LABEL_57;
    }
  }
LABEL_58:
  v49 = fabsf(v40 * fabsf(v46));
  if (v42 <= *(float*)&v68) {
    if (v42 >= *(float*)&v68) {
      goto LABEL_64;
    }
    v42 = v42 + v49;
    if (v42 <= *(float*)&v68) {
      goto LABEL_64;
    }
  }
  else {
    v42 = v42 - v49;
    if (v42 >= *(float*)&v68) {
      goto LABEL_64;
    }
  }
  v42 = *(float*)&v68;
LABEL_64:
  *(float*)(a1 + 16) = v41;
  *(float*)(a1 + 20) = v42;
LABEL_65:
  v50 = *v3;
  v52 = v34[17];
  v51 = v34[18];
  *(_QWORD*)&v53 = LODWORD(v41);
  *((_QWORD*)&v53 + 1) = LODWORD(v42);
  v64 = v53;
  v65 = v61;
  if (v51 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                              memory_order_relaxed);
    if (*(_DWORD*)(v52 + 56) != 0 && *(_BYTE*)(v50 + 113) == 1) {
      v59 = v42;
      v62 = v41;
      v54 = GameRoutine_e9f200_alt1(v52);
      *(_OWORD*)&v69 = (__typeof__(*(_OWORD*)&v69)){0};
      v55 = fmaxf(v54, 0x1.3333340000000p-1);
      if ((*(_BYTE*)(v52 + 92) & (*(float*)(v52 + 88) < v55)) != 0) {
        v55 = *(float*)(v52 + 88);
      }
      v67 = 8;
      v68 = 1050253722;
      if ((game_ff0ea0(&v69, &v65, &v64, &v67, v55) & 1) != 0) {
        v41 = *(float*)&v69;
        v56 = 1;
        v42 = *((float*)&v69 + 2);
        goto LABEL_80;
      }
      v42 = v59;
      v41 = v62;
    }
    v56 = 0;
  LABEL_80:
    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v56 == 0) {
        return;
      }
    }
    else {
      v60 = v42;
      v63 = v41;
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
      std___1___shared_weak_count___release_weak(v51);
      v42 = v60;
      v41 = v63;
      if (v56 == 0) {
        return;
      }
    }
    goto LABEL_82;
  }
  if (*(_DWORD*)(v52 + 56) != 0 && *(_BYTE*)(v50 + 113) == 1) {
    v57 = GameRoutine_e9f200_alt1(v52);
    *(_OWORD*)&v69 = (__typeof__(*(_OWORD*)&v69)){0};
    v58 = fmaxf(v57, 0x1.3333340000000p-1);
    if ((*(_BYTE*)(v52 + 92) & (*(float*)(v52 + 88) < v58)) != 0) {
      v58 = *(float*)(v52 + 88);
    }
    v67 = 8;
    v68 = 1050253722;
    if ((game_ff0ea0(&v69, &v65, &v64, &v67, v58) & 1) != 0) {
      v41 = *(float*)&v69;
      v42 = *((float*)&v69 + 2);
    LABEL_82:
      *(float*)(a1 + 16) = v41;
      *(float*)(a1 + 20) = v42;
    }
  }
}

void game_combat_e45210(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  bool v13;
  double v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  float v33;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  struct {
    float v42[2];
    char v43;
    char gap17_[3];
    char v44;
    char gap21_[3];
    char v45;
    char gap25_[3];
    char v46;
    char gap29_[3];
    float v47;
    char v48;
  } v42_;
  _QWORD v49[5];

  if (*(_BYTE*)(a1 + 96) != 1) {
    return;
  }
  v49[1] = v4;
  v49[2] = v3;
  v49[3] = v1;
  v49[4] = v2;
  v5 = 0x0.0p+0f;
  v6 = *(float*)(a1 + 32);
  v7 = *(float*)(a1 + 36);
  v8 = (float)(PSEUDO_UNFUSED(v7 * v7)) + (float)(v6 * v6);
  v9 = 0x1.0000000000000p+0f;
  v10 = sqrtf(v8);
  v11 = v10 / (float)(*(float*)(a1 + 108) * 0x1.e666660000000p-1f);
  if (v11 <= 0x1.0000000000000p+0f) {
    v12 = v10 / (float)(*(float*)(a1 + 108) * 0x1.e666660000000p-1f);
  }
  else {
    v12 = 0x1.0000000000000p+0f;
  }
  v13 = v11 < 0x0.0p+0f;
  v14 = 0x0.0p+0;
  if (v13) {
    v15 = 0x0.0p+0f;
  }
  else {
    v15 = v12;
  }
  if (v15 > 0x0.0p+0f) {
    if (v8 >= 0x1.0000000000000p-23f) {
      *(float*)&v14 = v6 * (float)(0x1.0000000000000p+0f / v10);
      v9 = v7 * (float)(0x1.0000000000000p+0f / v10);
    }
    v16 = *(_QWORD*)(a1 + 8);
    v42_.v42[0] = *(float*)&v14;
    v42_.v42[1] = v9;
    v17 = a1;
    v18 = *(_QWORD*)(v16 + 128);
    v19 = *(_DWORD*)(v18 + 20);
    LODWORD(v49[0]) = *(_DWORD*)(v18 + 16);
    HIDWORD(v49[0]) = v19;
    v20 = game_combat_e401e0(v42_.v42, (float*)v49);
    v21 = v20 +
          (float)(roundf(v20 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v21 <= 0x1.921fb60000000p+0f) {
      v23 = 0x1.0000000000000p+0f;
      if (v21 >= -0x1.921fb60000000p+0f) {
        goto LABEL_16;
      }
      v22 = -0x1.921fb60000000p+1f;
    }
    else {
      v22 = 0x1.921fb60000000p+1f;
    }
    v21 = v22 - v21;
    v23 = -0x1.0000000000000p+0f;
  LABEL_16:
    a1 = v17;
    v24 =
        v21 *
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
                                                                                              (float)(v21 *
                                                                                                      v21))) *
                                                                              (float)(v21 *
                                                                                      v21))) *
                                                           (float)(v21 *
                                                                   v21))) *
                                           (float)(v21 * v21))) *
                        (float)(v21 * v21)) +
                0x1.0000000000000p+0f);
    v25 =
        v23 *
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
                                                                                              (float)(v21 *
                                                                                                      v21))) *
                                                                              (float)(v21 *
                                                                                      v21))) *
                                                           (float)(v21 *
                                                                   v21))) *
                                           (float)(v21 * v21))) *
                        (float)(v21 * v21)) +
                0x1.0000000000000p+0f);
    v14 = 0x0.0p+0;
    v26 = v24 + (float)(v25 * 0x0.0p+0f);
    v27 = (float)(PSEUDO_UNFUSED((float)(v25 + (float)(v24 * -0x0.0p+0f)) *
                                 (float)(v25 + (float)(v24 * -0x0.0p+0f)))) +
          (float)(v26 * v26);
    if (v27 >= 0x1.0000000000000p-23f) {
      *(float*)&v14 = v26 * (float)(0x1.0000000000000p+0f / sqrtf(v27));
    }
  }
  v28 = *(float*)(a1 + 100);
  v29 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 104LL);
  if (*(_BYTE*)(a1 + 104) == 0) {
    v28 = 0x1.99999a0000000p-2f;
  }
  if (*(_BYTE*)(a1 + 97) == 0) {
    v5 = v28;
  }
  if (*(float*)&v14 < -0x1.3333340000000p-2f) {
    v30 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 104LL);
    *(float*)&v31 = -0x1.3cf18e0000000p+24f;
    v32 = -878806841;
  LABEL_26:
    if (GameHr_e412a0(v30, v32)) {
      v33 = *(float*)&v31;
    }
    else {
      v33 = 0x1.2c485a0000000p-81f;
    }
    if (*(_BYTE*)(v29 + 40) != 1 || *(_DWORD*)(v29 + 36) != LODWORD(v33)) {
      v42_.v42[0] = v33;
      LOBYTE(v42_.v42[1]) = 0;
      v42_.v43 = 0;
      v42_.v44 = 0;
      v42_.v45 = 0;
      v42_.v46 = 0;
      v42_.v47 = v5;
      v42_.v48 = 1;
      GameHr_e40f80(v29, (unsigned int*)v42_.v42);
    }
    return;
  }
  if (*(float*)&v14 > 0x1.3333340000000p-2f) {
    v30 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 104LL);
    *(float*)&v31 = -0x1.e60b9a0000000p+24f;
    v32 = -873265715;
    goto LABEL_26;
  }
  v35 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 104LL);
  if ((float)(v15 + v15) <= 0x1.0000000000000p+0f) {
    v36 = v15 + v15;
  }
  else {
    v36 = 0x1.0000000000000p+0f;
  }
  v37 = (float)(fminf(fmaxf(v36, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                0x1.6666660000000p-1f) +
        0x1.3333340000000p-2f;
  if ((float)(v15 + v15) >= 0x0.0p+0f) {
    v38 = v37;
  }
  else {
    v38 = 0x1.3333340000000p-2f;
  }
  v39 = (float)(v15 + -0x1.0000000000000p-1f) +
        (float)(v15 + -0x1.0000000000000p-1f);
  if (v39 <= 0x1.0000000000000p+0f) {
    v40 = (float)(v15 + -0x1.0000000000000p-1f) +
          (float)(v15 + -0x1.0000000000000p-1f);
  }
  else {
    v40 = 0x1.0000000000000p+0f;
  }
  if (v39 >= 0x0.0p+0f) {
    v41 = v40;
  }
  else {
    v41 = 0x0.0p+0f;
  }
  if (v15 > 0x1.0000000000000p-1f) {
    *(float*)&v14 = v41;
  }
  else {
    *(float*)&v14 = 0x0.0p+0f;
  }
  if (v15 > 0x1.0000000000000p-1f) {
    v38 = 0x1.0000000000000p+0f;
  }
  GameRoutine_e422a0_alt1(v35, v14, v38, v5);
}

void game_combat_1065a00(_BYTE* a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  unsigned int v26;
  long double v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  long double v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  bool v46;
  unsigned int v47;
  char v48;
  char v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;

  v3 = GameData_212d448[0];
  if (*GameData_212d448[0] == 0 || (v4 = *(_DWORD*)(*(_QWORD*)a1 + 12LL)) > 3 ||
      (v5 = *GameData_212d448[0] + 24LL * v4,
       (v6 = *(_QWORD*)(v5 + 32)) == 0)) {
    v11 = 0;
    v12 = (*(_QWORD*)0x50LL);
    if ((*(_QWORD*)0x50LL) == 0) {
      goto LABEL_23;
    }
  LABEL_18:
    v13 = *(_QWORD*)(v12 + 8);
    v14 = *(_QWORD*)(v11 + 88);
    v15 = v13 == -1 || v14 == 0;
    if (!v15 && (*(_BYTE*)(v14 + 341) & 2) != 0) {
      return;
    }
    goto LABEL_23;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v7 = *(_QWORD*)(v5 + 40);
  v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == 0;
  if (v8 || (v9 = *(_QWORD*)(v7 + 80)) == 0 ||
      (*(_QWORD*)(v9 + 8) != -1 ? (v10 = *(_QWORD*)(v7 + 88) == 0)
                                : (v10 = true),
       v10)) {
    v11 = 0;
  }
  else if (*(_QWORD*)(v6 + 8) == -1) {
    v11 = 0;
  }
  else {
    v11 = v7;
  }
  a2 = std___1___shared_weak_count___release_weak(v6);
  v12 = *(_QWORD*)(v11 + 80);
  if (v12 != 0) {
    goto LABEL_18;
  }
LABEL_23:
  v16 = *(_QWORD*)a1;
  v17 = **(_DWORD**)a1;
  if ((v17 & 9) == 0 && *(_DWORD*)(v16 + 68) != 0) {
    if (*v3 != 0 && (v18 = *(_DWORD*)(v16 + 12)) <= 3 &&
        (v19 = *v3 + 24LL * v18, (v20 = *(_QWORD*)(v19 + 32)) != 0)) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                memory_order_relaxed);
      v21 = *(_QWORD*)(v19 + 40);
      v22 = *(_QWORD*)(v20 + 8) == -1 || v21 == 0;
      if (v22 || (v23 = *(_QWORD*)(v21 + 80)) == 0 ||
          (*(_QWORD*)(v23 + 8) != -1 ? (v24 = *(_QWORD*)(v21 + 88) == 0)
                                     : (v24 = true),
           v24)) {
        v25 = 0;
      }
      else if (*(_QWORD*)(v20 + 8) == -1) {
        v25 = 0;
      }
      else {
        v25 = *(_QWORD*)(v19 + 40);
      }
      a2 = std___1___shared_weak_count___release_weak(v20);
      v16 = *(_QWORD*)a1;
      if ((**(_DWORD**)a1 & 0x100) != 0) {
        goto LABEL_41;
      }
    }
    else {
      v25 = 0;
      if ((v17 & 0x100) != 0) {
      LABEL_41:
        PSEUDO_LOW_LANE128(a2, n128_u32,
                           COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f)));
        *(_DWORD*)(*(_QWORD*)(v25 + 368) + 152LL) = 0;
        CharacterAnimator_1079580(
            *(_QWORD*)(v25 + 368), *(_DWORD*)(*(_QWORD*)a1 + 68LL),
            *(long double*)&a2, 0x0.0p+0f, 0x1.0000000000000p-1f);
        return;
      }
    }
    if ((a1[8] & 1) != 0) {
      v26 = -1193575789;
    }
    else {
      v26 = *(_DWORD*)(v16 + 68);
    }
    if (*(float*)CharacterAnimator_1079d90(*(_QWORD*)(v25 + 368), v26) ==
        0x0.0p+0f) {
      v28 = *v3 + 24LL * *(unsigned int*)(*(_QWORD*)a1 + 8LL);
      v29 = *(_QWORD*)(v28 + 32);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                memory_order_relaxed);
      v30 = *(_QWORD*)(v28 + 40);
      v31 = *(_QWORD*)(v29 + 8) == -1 || v30 == 0;
      if (v31 || (v32 = *(_QWORD*)(v30 + 80)) == 0 ||
          (*(_QWORD*)(v32 + 8) != -1 ? (v33 = *(_QWORD*)(v30 + 88) == 0)
                                     : (v33 = true),
           v33)) {
        v34 = 0;
      }
      else if (*(_QWORD*)(v29 + 8) == -1) {
        v34 = 0;
      }
      else {
        v34 = v30;
      }
      *(__n128*)&v35 = std___1___shared_weak_count___release_weak(v29);
      v36 = *(_QWORD*)(v25 + 808);
      v37 = *(float*)(v34 + 48);
      v38 = *(float*)(v34 + 52);
      v39 = *(float*)(v36 + 40);
      v40 = *(float*)(v36 + 44);
      if (*v3 == 0 || (v41 = *(_QWORD*)(*v3 + 8)) == 0 ||
          (~*(_DWORD*)(v41 + 112) & 0x28000) != 0) {
        v42 = *(_QWORD*)(v36 + 88);
        v43 = *(_QWORD*)(v42 + 392);
        v44 = *(_QWORD*)(v42 + 400);
        if (v44 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                                    memory_order_relaxed);
        }
        v45 = *(_DWORD*)(v43 + 11784);
        v46 = v45 > 0x12;
        v47 = 0x1FF7Fu >> v45;
        v48 = v46;
        v49 = v48 | v47;
        if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v44 + 16LL))(v44, v35);
          std___1___shared_weak_count___release_weak(v44);
        }
        if ((v49 & 1) != 0) {
          v50 = *(_QWORD*)(v25 + 808);
          *(_DWORD*)(v25 + 844) = *(_DWORD*)(v50 + 48);
          v51 = *(_DWORD*)(v50 + 52);
          *(float*)(v25 + 852) = v39 - (float)(v37 * 0x1.3880000000000p+13f);
          *(float*)(v25 + 856) = v40 - (float)(v38 * 0x1.3880000000000p+13f);
          *(_QWORD*)(v25 + 860) = 0x3EAAAAAB00000000LL;
          *(_DWORD*)(v25 + 848) = v51;
        }
      }
      GameRoutine_1068b40(v25, 1);
    }
    LODWORD(v27) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
    CharacterAnimator_1079580(*(_QWORD*)(v25 + 368), v26, v27,
                              -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
    if ((a1[8] & 1) == 0 && (**(_BYTE**)a1 & 0x40) != 0 &&
        (*v3 == 0 || (v52 = *(_QWORD*)(*v3 + 8)) == 0 ||
         (*(_BYTE*)(v52 + 113) & 0x80) == 0)) {
      v53 = GameRoutine_108fb80(*(_QWORD*)a1);
      v54 = *(_QWORD*)(v53 + 80);
      if (v54 == 0 || *(_QWORD*)(v54 + 8) == -1) {
        v55 = nullptr;
      }
      else {
        v55 = *(_QWORD**)(v53 + 88);
      }
      GameRoutine_10ba960(v55);
    }
  }
}

float game_combat_106aff0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float result;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float* v15;
  float v16;
  float v17;
  float v18;
  bool v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  int v28;
  __int64 v29;
  _QWORD v30[3];
  float v31[2];

  v4 = *(float*)(a1 + 60);
  result = *(float*)(a1 + 64);
  if (v4 < result) {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(_QWORD*)(v5 + 80);
    if (v6 == 0 ||
        ((v7 = *(_QWORD*)(v6 + 8), v8 = *(_QWORD*)(v5 + 88), v7 != -1)
             ? (v9 = v8 == 0)
             : (v9 = true),
         v9)) {
      v10 = 0x1.11570c0000000p-5f;
    }
    else {
      v10 = (float)(*(float*)(*(_QWORD*)(v8 + 304) + 16LL) *
                    0x1.0aef000000000p+4f) *
            0x1.0624de0000000p-10f;
    }
    v30[1] = v1;
    v30[2] = v2;
    v11 = v4 + v10;
    v12 = *(float*)(a1 + 52);
    v13 = *(float*)(a1 + 56);
    if (v11 > result) {
      v11 = result;
    }
    *(float*)(a1 + 60) = v11;
    v15 = (float*)(a1 + 44);
    v16 = v13 - *(float*)(v5 + 44);
    v17 = v12 - *(float*)(v5 + 40);
    v18 = (float)(PSEUDO_UNFUSED(v16 * v16)) + (float)(v17 * v17);
    v19 = v18 < 0x1.0000000000000p-23f;
    v20 = 0x1.0000000000000p+0f / sqrtf(v18);
    v21 = v17 * v20;
    v22 = v16 * v20;
    if (v19) {
      v21 = 0x0.0p+0f;
      v22 = 0x1.0000000000000p+0f;
    }
    v31[0] = v21;
    v31[1] = v22;
    v23 = result * 0x1.0000000000000p-1f;
    v19 = v11 < v23;
    v24 = v23 - (float)(v11 - v23);
    v25 = v23 * (float)(v23 * v23);
    v26 = (float)((float)((float)(v24 * (float)(v24 * v24)) *
                          -0x1.0000000000000p-1f) /
                  v25) +
          0x1.0000000000000p+0f;
    v27 = (float)((float)((float)(v11 * (float)(v11 * v11)) *
                          0x1.0000000000000p-1f) /
                  v25) +
          0x0.0p+0f;
    if (!v19) {
      v27 = v26;
    }
    GameRoutine_106b310((void*)((float*)v30), v15, v31, v27);
    v28 = HIDWORD(v30[0]);
    result = *(float*)v30;
    v29 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)(v29 + 48) = v30[0];
    *(_DWORD*)(v29 + 52) = v28;
  }
  return result;
}

__int64 game_combat_106b2c0(__int64 a1, float a2)
{
  float v5;

  GameRoutine_10690a0((void*)((__int64)&v5), *(_QWORD*)(a1 + 8));
  return GameRoutine_106b140(a1, &v5, a2);
}

void game_combat_106e570(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  int v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  int v20;
  __int128 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  bool v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  __int64 v44;
  float v45;
  __int64 v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  unsigned int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int32x2_t* v58;
  unsigned __int64 v59;
  bool v60;
  unsigned __int64 v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  int32x2_t v69;

  v1 = a1[1];
  v3 = GameData_212d448[0];
  if (v1 == 0 || (*(_BYTE*)(v1 + 112) & 0x40) == 0) {
    goto LABEL_3;
  }
  v22 = a1[4];
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
    v23 = a1[5];
    v24 = *(_QWORD*)(v22 + 8) == -1 || v23 == 0;
    if (v24 || (v25 = *(_QWORD*)(v23 + 80)) == 0 ||
        (*(_QWORD*)(v25 + 8) != -1 ? (v26 = *(_QWORD*)(v23 + 88) == 0)
                                   : (v26 = true),
         v26)) {
      v27 = 0;
    }
    else if (*(_QWORD*)(v22 + 8) == -1) {
      v27 = 0;
    }
    else {
      v27 = a1[5];
    }
    std___1___shared_weak_count___release_weak_alt2(v22);
    v28 = a1[7];
    if (v28 == 0) {
      goto LABEL_3;
    }
  }
  else {
    v27 = 0;
    v28 = a1[7];
    if (v28 == 0) {
      goto LABEL_3;
    }
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                            memory_order_relaxed);
  v29 = a1[8];
  v30 = *(_QWORD*)(v28 + 8) == -1 || v29 == 0;
  if (v30 || (v31 = *(_QWORD*)(v29 + 80)) == 0 ||
      (*(_QWORD*)(v31 + 8) != -1 ? (v32 = *(_QWORD*)(v29 + 88) == 0)
                                 : (v32 = true),
       v32)) {
    v33 = 0;
    std___1___shared_weak_count___release_weak_alt2(v28);
    if (v27 == 0) {
      goto LABEL_3;
    }
  }
  else {
    if (*(_QWORD*)(v28 + 8) == -1) {
      v33 = 0;
    }
    else {
      v33 = a1[8];
    }
    std___1___shared_weak_count___release_weak_alt2(v28);
    if (v27 == 0) {
      goto LABEL_3;
    }
  }
  if (v33 == 0) {
    goto LABEL_3;
  }
  v34 = *(float*)(v33 + 44) - *(float*)(v27 + 44);
  v35 = *(float*)(v33 + 40) - *(float*)(v27 + 40);
  v36 = (float)(PSEUDO_UNFUSED(v34 * v34)) + (float)(v35 * v35);
  if (v36 >= 0x1.0000000000000p-23f) {
    v39 = 0x1.0000000000000p+0f / sqrtf(v36);
    v38 = v35 * v39;
    v37 = v34 * v39;
  }
  else {
    v37 = 0x1.0000000000000p+0f;
    v38 = 0x0.0p+0f;
  }
  v40 = *(_QWORD*)(v27 + 88);
  v42 = *(_QWORD*)(v40 + 392);
  v41 = *(_QWORD*)(v40 + 400);
  if (v41 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                              memory_order_relaxed);
  }
  v43 = GameRoutine_10773c0_alt1(*(_DWORD*)(v42 + 11784));
  v44 = *(_QWORD*)(v33 + 88);
  v45 = v43 * *(float*)(v42 + 32);
  v47 = *(_QWORD*)(v44 + 392);
  v46 = *(_QWORD*)(v44 + 400);
  if (v46 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                              memory_order_relaxed);
  }
  v48 = v45 + 0x1.4000000000000p+2f;
  v49 = GameRoutine_10773c0_alt1(*(_DWORD*)(v47 + 11784)) * *(float*)(v47 + 32);
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    std___1___shared_weak_count___release_weak_alt2(v46);
  }
  v50 = v48 + v49;
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak_alt2(v41);
  }
  v51 = *(float*)(v27 + 40);
  v52 = *(float*)(v27 + 44);
  if (sqrtf((float)(PSEUDO_UNFUSED((float)(*(float*)(v33 + 44) - v52) *
                                   (float)(*(float*)(v33 + 44) - v52))) +
            (float)((float)(*(float*)(v33 + 40) - v51) *
                    (float)(*(float*)(v33 + 40) - v51))) < v50) {
    *(float*)(v33 + 40) = (float)(PSEUDO_UNFUSED(v38 * v50)) + v51;
    *(float*)(v33 + 44) = (float)(PSEUDO_UNFUSED(v37 * v50)) + v52;
    GameRoutine_1068b40(v33, 1);
    game_combat_1068a00(v33);
  }
  if ((*(_BYTE*)(a1[1] + 117LL) & 4) != 0 ||
      ((v54 = *(_DWORD*)(v27 + 96) - 1) > 2 ? (v55 = 2)
                                            : (v55 = GameData_1ba7a78[v54]),
       v56 = *v3 + 24 * v55, (v57 = *(_QWORD*)(v56 + 32)) == 0)) {
  LABEL_3:
    v4 = *v3;
    if (*v3 != 0) {
      goto LABEL_4;
    }
    goto LABEL_6;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 16), 1u,
                            memory_order_relaxed);
  v58 = *(int32x2_t**)(v56 + 40);
  if (*(_QWORD*)(v57 + 8) == -1 || v58 == nullptr ||
      (v59 = LANES64(v58[10]).n64_u64[0]) == 0 ||
      (*(_QWORD*)(v59 + 8) != -1 ? (v60 = LANES64(v58[11]).n64_u64[0] == 0)
                                 : (v60 = true),
       v60 || *(_QWORD*)(v57 + 8) == -1)) {
    std___1___shared_weak_count___release_weak_alt2(v57);
    goto LABEL_3;
  }
  std___1___shared_weak_count___release_weak_alt2(v57);
  game_combat_10692c0((void*)(&v69), v27);
  v61 = LANES64(v69).n64_u64[0];
  LANES64(v58[5]).n64_u64[0] = LANES64(v69).n64_u64[0];
  v62 = *(float*)(v33 + 44) - *((float*)&v61 + 1);
  v63 = *(float*)(v33 + 40) - *(float*)&v61;
  v64 = (float)(PSEUDO_UNFUSED(v62 * v62)) + (float)(v63 * v63);
  if (v64 >= 0x1.0000000000000p-23f) {
    v67 = 0x1.0000000000000p+0f / sqrtf(v64);
    v66 = v63 * v67;
    v65 = v62 * v67;
  }
  else {
    v65 = 0x1.0000000000000p+0f;
    v66 = 0x0.0p+0f;
  }
  LANES64(v58[6]).n64_f32[0] = v66;
  LANES64(v58[6]).n64_f32[1] = v65;
  GameRoutine_1068b40((__int64)v58, 1);
  game_combat_1068a00((__int64)v58);
  v4 = *v3;
  if (*v3 != 0) {
  LABEL_4:
    v5 = *(_QWORD*)(v4 + 8);
    if (v5 != 0 && (*(_WORD*)(v5 + 112) & 0x8040) != 0) {
      return;
    }
  }
LABEL_6:
  GameRoutine_106e320_alt1(a1);
  GameRoutine_106dcd0_alt1(a1, 0, 0);
  v6 = a1[4];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v7 = a1[5];
    v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == 0;
    if (v8 || (v9 = *(_QWORD*)(v7 + 80)) == 0 ||
        (*(_QWORD*)(v9 + 8) != -1 ? (v10 = *(_QWORD*)(v7 + 88) == 0)
                                  : (v10 = true),
         v10 || *(_QWORD*)(v6 + 8) == -1)) {
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
    else {
      std___1___shared_weak_count___release_weak_alt2(v6);
      GameRoutine_111fb80_alt1(v7 + 384, (unsigned __int64*)(v7 + 40),
                               (float*)(v7 + 48));
      v11 = a1[16];
      v12 = *(_DWORD*)(v7 + 448);
      *(_DWORD*)(v11 + 208) = *(_DWORD*)(v7 + 432);
      *(_DWORD*)(v11 + 212) = *(_DWORD*)(v7 + 436);
      v13 = *(_OWORD*)(v11 + 208);
      DWORD2(v13) = *(_DWORD*)(v7 + 440);
      *(_DWORD*)(v11 + 240) = v12;
      *(_BYTE*)(v11 + 244) = 1;
      *(_BYTE*)(v11 + 193) = 1;
      *((_QWORD*)&v13 + 1) = DWORD2(v13);
      *(_OWORD*)(v11 + 208) = v13;
    }
  }
  v14 = a1[7];
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    v15 = a1[8];
    v16 = *(_QWORD*)(v14 + 8) == -1 || v15 == 0;
    if (v16 || (v17 = *(_QWORD*)(v15 + 80)) == 0 ||
        (*(_QWORD*)(v17 + 8) != -1 ? (v18 = *(_QWORD*)(v15 + 88) == 0)
                                   : (v18 = true),
         v18 || *(_QWORD*)(v14 + 8) == -1)) {
      std___1___shared_weak_count___release_weak_alt2(v14);
    }
    else {
      std___1___shared_weak_count___release_weak_alt2(v14);
      GameRoutine_111fb80_alt1(v15 + 384, (unsigned __int64*)(v15 + 40),
                               (float*)(v15 + 48));
      v19 = a1[16];
      v20 = *(_DWORD*)(v15 + 448);
      *(_DWORD*)(v19 + 224) = *(_DWORD*)(v15 + 432);
      *(_DWORD*)(v19 + 228) = *(_DWORD*)(v15 + 436);
      v21 = *(_OWORD*)(v19 + 224);
      DWORD2(v21) = *(_DWORD*)(v15 + 440);
      *(_DWORD*)(v19 + 248) = v20;
      *(_BYTE*)(v19 + 252) = 1;
      *(_BYTE*)(v19 + 193) = 1;
      *((_QWORD*)&v21 + 1) = DWORD2(v21);
      *(_OWORD*)(v19 + 224) = v21;
    }
  }
}

void game_combat_106f310(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v3;
  __int64 v4;
  float32x4_t* v5;
  bool v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v9;
  unsigned __int32 v10;
  __int128 v11;
  __int64 v12;
  float32x4_t* v13;
  bool v14;
  unsigned __int64 v15;
  bool v16;
  __int64 v17;
  unsigned __int32 v18;
  __int128 v19;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0) {
  LABEL_4:
    if (GameData_21d92e0 != 3) {
    LABEL_32:
      CombatCamera_1097a60(
          *(float32x4_t**)(a1 + 128),
          (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                            160LL) *
                  0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f);
      return;
    }
  LABEL_5:
    v4 = *(_QWORD*)(a1 + 32);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v5 = *(float32x4_t**)(a1 + 40);
      v6 = *(_QWORD*)(v4 + 8) == -1 || v5 == nullptr;
      if (v6 || (v7 = LANES128(v5[5]).n128_u64[0]) == 0 ||
          (*(_QWORD*)(v7 + 8) != -1 ? (v8 = LANES128(v5[5]).n128_u64[1] == 0)
                                    : (v8 = true),
           v8 || *(_QWORD*)(v4 + 8) == -1)) {
        std___1___shared_weak_count___release_weak(v4);
      }
      else {
        std___1___shared_weak_count___release_weak(v4);
        game_111f610(v5 + 24);
        v9 = *(_QWORD*)(a1 + 128);
        v10 = LANES128(v5[28]).n128_u32[0];
        *(_DWORD*)(v9 + 208) = LANES128(v5[27]).n128_u32[0];
        *(_DWORD*)(v9 + 212) = LANES128(v5[27]).n128_u32[1];
        v11 = *(_OWORD*)(v9 + 208);
        DWORD2(v11) = LANES128(v5[27]).n128_u32[2];
        *(_DWORD*)(v9 + 240) = v10;
        *(_BYTE*)(v9 + 244) = 1;
        *(_BYTE*)(v9 + 193) = 1;
        *((_QWORD*)&v11 + 1) = DWORD2(v11);
        *(_OWORD*)(v9 + 208) = v11;
      }
    }
    v12 = *(_QWORD*)(a1 + 56);
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      v13 = *(float32x4_t**)(a1 + 64);
      v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == nullptr;
      if (v14 || (v15 = LANES128(v13[5]).n128_u64[0]) == 0 ||
          (*(_QWORD*)(v15 + 8) != -1 ? (v16 = LANES128(v13[5]).n128_u64[1] == 0)
                                     : (v16 = true),
           v16 || *(_QWORD*)(v12 + 8) == -1)) {
        std___1___shared_weak_count___release_weak(v12);
      }
      else {
        std___1___shared_weak_count___release_weak(v12);
        game_111f610(v13 + 24);
        v17 = *(_QWORD*)(a1 + 128);
        v18 = LANES128(v13[28]).n128_u32[0];
        *(_DWORD*)(v17 + 224) = LANES128(v13[27]).n128_u32[0];
        *(_DWORD*)(v17 + 228) = LANES128(v13[27]).n128_u32[1];
        v19 = *(_OWORD*)(v17 + 224);
        DWORD2(v19) = LANES128(v13[27]).n128_u32[2];
        *(_DWORD*)(v17 + 248) = v18;
        *(_BYTE*)(v17 + 252) = 1;
        *(_BYTE*)(v17 + 193) = 1;
        *((_QWORD*)&v19 + 1) = DWORD2(v19);
        *(_OWORD*)(v17 + 224) = v19;
      }
    }
    goto LABEL_32;
  }
  v3 = *(_DWORD*)(v1 + 112);
  if ((v3 & 0x8000) == 0) {
    if ((v3 & 0x40) != 0) {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
}

float32x4_t* game_combat_106f5a0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  float32x4_t* result;
  int32x2_t* v7;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t v17;
  unsigned __int32 v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  struct {
    int32x2_t v24[10];
    char v25;
  } v24_;

  v2 = *a2;
  v3 = *(_DWORD*)(*a2 + 96) - 1;
  if (v3 > 2) {
    v4 = 2;
  }
  else {
    v4 = GameData_1ba7a78[v3];
  }
  v5 = *GameData_212d448[0] + 24 * v4;
  result = *(float32x4_t**)(v5 + 32);
  if (result != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)&result[1], 1u,
                              memory_order_relaxed);
    v7 = *(int32x2_t**)(v5 + 40);
    if (LANES128(*(result)).n128_u64[1] == -1 || v7 == nullptr) {
      return (float32x4_t*)std___1___shared_weak_count___release_weak_alt2(
          (__int64)result);
    }
    v9 = LANES64(v7[10]).n64_u64[0];
    if (v9 == 0) {
      return (float32x4_t*)std___1___shared_weak_count___release_weak_alt2(
          (__int64)result);
    }
    v10 = *(_QWORD*)(v9 + 8) == -1 || LANES64(v7[11]).n64_u64[0] == 0;
    if (v10 || LANES128(*(result)).n128_u64[1] == -1) {
      return (float32x4_t*)std___1___shared_weak_count___release_weak_alt2(
          (__int64)result);
    }
    else {
      std___1___shared_weak_count___release_weak_alt2((__int64)result);
      game_combat_10692c0((void*)(v24_.v24), v2);
      LANES64(v7[5]).n64_u64[0] = (unsigned __int64)v24_.v24[0];
      LANES64(v7[6]).n64_u32[0] = *(_DWORD*)(v2 + 48);
      LANES64(v7[6]).n64_u32[1] = *(_DWORD*)(v2 + 52);
      GameRoutine_1068b40((__int64)v7, 1);
      v11 = LANES64(v7[10]).n64_u64[0];
      if (v11 == 0 || ((v12 = *(_QWORD*)(v11 + 8),
                        v13 = LANES64(v7[11]).n64_u64[0], v12 != -1)
                           ? (v14 = v13 == 0)
                           : (v14 = true),
                       v14)) {
        v15 = nullptr;
      }
      else {
        v15 = *(float32x4_t**)(v13 + 8);
      }
      LANES128(v16).n128_u64[0] = LANES64(v7[5]).n64_u64[0];
      LANES128(v17).n128_u64[0] =
          LANES128(v16).n128_u32[0] | 0x4348000000000000LL;
      LANES128(v17).n128_u64[1] = LANES128(v16).n128_u32[1];
      v23 = v17;
      LANES128(v16).n128_u32[1] = -1027080192;
      LANES128(v16).n128_u64[1] = LANES128(v17).n128_u64[1];
      v22 = v16;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
        GameHr_a5aca0((__int64)GameData_21fdd90_alt1);
        GameRoutine_2b0();
        __cxa_guard_release_alt1((__int64)&GameData_21fde98);
      }
      result = X8CALL_X0(
          float32x4_t*,
          collision_670c60_alt1((void*)((__int64)v24_.v24), &v23, &v22, 3));
      if ((v24_.v25 & 1) != 0) {
        LANES128(v22).n128_u32[1] = LANES64(v24_.v24[0]).n64_u32[1];
      }
      v18 = LANES128(v22).n128_u32[2];
      v19 = vsubq_f32(v15[19], v22);
      v20 = vmulq_f32(v19, v19);
      LANES128(v20).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
              .n64_u64[0];
      if (__builtin_islessgreater(
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                  .n64_f32[0],
              0x0.0p+0f)) {
        LANES128(v15[19]).n128_u64[0] = LANES128(v22).n128_u64[0];
        v21 = v15[19];
        LANES128(v15[18]).n128_u32[2] |= 1u;
        LANES128(v21).n128_u64[1] = v18;
        v15[19] = v21;
      }
    }
  }
  return result;
}

__n128 game_combat_1090030(int* a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  int* v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;
  __n128 v9;
  int v10;
  __n128 result;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  bool v18;
  int* v19;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21ec7b0 != 0) {
    v1 = a1[2];
    if (v1 <= 3) {
      v2 = GameData_21ec7b0 + 24LL * v1;
      v3 = *(_QWORD*)(v2 + 32);
      if (v3 != 0) {
        v4 = a1;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
        v5 = *(_QWORD*)(v2 + 40);
        v6 = *(_QWORD*)(v3 + 8) == -1 || v5 == 0;
        if (v6 || (v7 = *(_QWORD*)(v5 + 80)) == 0 ||
            (*(_QWORD*)(v7 + 8) != -1 ? (v8 = *(_QWORD*)(v5 + 88) == 0)
                                      : (v8 = true),
             v8 || *(_QWORD*)(v3 + 8) == -1)) {
          result = std___1___shared_weak_count___release_weak(v3);
          a1 = v4;
        }
        else {
          v9 = std___1___shared_weak_count___release_weak(v3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v10 = GameRoutine_10990a0(v5 + 560, v4, v9),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          a1 = v4;
          v4[16] = v10;
        }
      }
    }
    if (GameData_21ec7b0 != 0) {
      v12 = a1[3];
      if (v12 <= 3) {
        v13 = GameData_21ec7b0 + 24LL * v12;
        v14 = *(_QWORD*)(v13 + 32);
        if (v14 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                    memory_order_relaxed);
          v15 = *(_QWORD*)(v13 + 40);
          if (*(_QWORD*)(v14 + 8) == -1 || v15 == 0) {
            return std___1___shared_weak_count___release_weak(v14);
          }
          v17 = *(_QWORD*)(v15 + 80);
          if (v17 == 0) {
            return std___1___shared_weak_count___release_weak(v14);
          }
          v18 = *(_QWORD*)(v17 + 8) == -1 || *(_QWORD*)(v15 + 88) == 0;
          if (v18 || *(_QWORD*)(v14 + 8) == -1) {
            return std___1___shared_weak_count___release_weak(v14);
          }
          else {
            v19 = a1;
            std___1___shared_weak_count___release_weak(v14),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            v19[17] = game_combat_1099520(v15 + 560, v19),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_combat_10901b0(PSEUDO_X8 x8_,
                                                    float32x4_t* a1, float a3)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v3;
  __int64* v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  float32x4_t* v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  bool v12;
  __n128 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  bool v21;
  float32x4_t* v22;
  float32x4_t* v23;
  float32x4_t v24;
  int16x4_t v25;
  __int64 v26;
  float32x4_t v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float32x4_t v33;
  float v34;
  float v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  __int64 v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  __int64 v47;
  bool v48;
  __int64 v49;
  float32x4_t v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  bool v54;
  __int64 v55;
  bool v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float32x4_t v64;
  int v65;
  __int64 v66;
  __n128 v67;

  v3 = (__typeof__(v3)){0};
  v4 = GameData_212d448[0];
  if (*GameData_212d448[0] == 0) {
    goto LABEL_39;
  }
  v5 = LANES128(*(a1)).n128_u32[3];
  if (v5 > 3) {
    goto LABEL_39;
  }
  v6 = *GameData_212d448[0] + 24LL * v5;
  v7 = *(_QWORD*)(v6 + 32);
  if (v7 == 0) {
    goto LABEL_39;
  }
  v8 = a2;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                            memory_order_relaxed);
  v9 = *(_QWORD*)(v6 + 40);
  v10 = *(_QWORD*)(v7 + 8) == -1 || v9 == 0;
  if (v10 || (v11 = *(_QWORD*)(v9 + 80)) == 0 ||
      (*(_QWORD*)(v11 + 8) != -1 ? (v12 = *(_QWORD*)(v9 + 88) == 0)
                                 : (v12 = true),
       v12 || *(_QWORD*)(v7 + 8) == -1)) {
    v18 = v7;
    goto LABEL_37;
  }
  v15 = std___1___shared_weak_count___release_weak(v7);
  v16 = *(_DWORD*)(v9 + 96);
  if ((v16 & 0xFFFFFFFE) == 2) {
    v17 = *v4 + 24LL * (v16 == 3);
    v18 = *(_QWORD*)(v17 + 32);
    if (v18 == 0) {
    LABEL_38:
      a2 = v8;
      v3 = (__typeof__(v3)){0};
    LABEL_39:
      *a2 = v3;
      return;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
    v9 = *(_QWORD*)(v17 + 40);
    if (*(_QWORD*)(v18 + 8) != -1 && v9 != 0) {
      v20 = *(_QWORD*)(v9 + 80);
      if (v20 != 0) {
        v21 = *(_QWORD*)(v20 + 8) == -1 || *(_QWORD*)(v9 + 88) == 0;
        if (!v21 && *(_QWORD*)(v18 + 8) != -1) {
          v15 = std___1___shared_weak_count___release_weak(v18);
          goto LABEL_27;
        }
      }
    }
  LABEL_37:
    std___1___shared_weak_count___release_weak(v18);
    goto LABEL_38;
  }
LABEL_27:
  LANES128(*(v8)).n128_u64[0] = 0;
  LANES128(*(v8)).n128_u64[1] = 0;
  LANES128(v15).n128_f32[0] = a3;
  v22 = v8;
  v23 = a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v65 = __cxa_guard_acquire(&GameData_21a6130);
    LANES128(v15).n128_f32[0] = a3;
    v22 = v8;
    v23 = a1;
    if (v65 != 0) {
      v66 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v66;
      __cxa_guard_release(&GameData_21a6130);
      LANES128(v15).n128_f32[0] = a3;
      v23 = a1;
      v22 = v8;
    }
  }
  v24 = v23[2];
  LANES64(v25).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(
                     vceqq_f32(v24, COERCE_AS(float32x4_t, GameData_21a6120)))))
          .n64_u64[0];
  if ((LANES64(v25).n64_u8[0] & 1) != 0 || (LANES64(v25).n64_u8[2] & 1) != 0 ||
      (LANES64(v25).n64_u8[4] & 1) != 0) {
    LANES128(*(v22)).n128_u64[0] = LANES128(v24).n128_u64[0];
    v32 = 0.0;
    v33 = *v22;
    LANES128(v33).n128_u64[1] = LANES128(v24).n128_u32[2];
    *v22 = v33;
    goto LABEL_54;
  }
  GameRoutine_10691b0((void*)(&v67), (_QWORD*)v9, v15);
  v15 = v67;
  v26 = *(_QWORD*)(v9 + 88);
  LANES128(*(v8)).n128_u64[0] = LANES128(v67).n128_u64[0];
  v27 = *v8;
  LANES128(v27).n128_u64[1] = LANES128(v15).n128_u32[2];
  *v8 = v27;
  v28 = *(_QWORD*)(v26 + 392);
  v29 = *(_QWORD*)(v26 + 400);
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
  }
  v30 = *(unsigned int*)(v28 + 11784);
  LANES128(v15).n128_f32[0] = a3;
  v23 = a1;
  if ((unsigned int)v30 > 0x20) {
    goto LABEL_45;
  }
  if (((1LL << v30) & 0x140020100LL) == 0) {
    if (((1LL << v30) & 0x1200000) != 0) {
    LABEL_46:
      v31 = 0.5;
      goto LABEL_51;
    }
    if (v30 == 22) {
      v31 = 0.0;
      goto LABEL_51;
    }
  LABEL_45:
    if ((unsigned int)(v30 - 2) >= 2) {
      v34 = 0.0;
      v31 = 3.0;
      if ((unsigned int)(v30 - 9) < 0x1A) {
        v34 = 1.0;
      }
      if ((_DWORD)v30 != 7) {
        v31 = v34;
      }
      goto LABEL_51;
    }
    goto LABEL_46;
  }
  v31 = 1.5;
LABEL_51:
  v32 = v31 * *(float*)(v28 + 32);
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v29 + 16LL))(
        v29, *(long double*)&v15);
    std___1___shared_weak_count___release_weak(v29);
    LANES128(v15).n128_f32[0] = a3;
    v23 = a1;
  }
LABEL_54:
  v35 = LANES128(v15).n128_f32[0] + v32;
  if ((float)(LANES128(v15).n128_f32[0] + v32) > 0.0) {
    v36 = *v4 + 24LL * LANES128(*(v23)).n128_u32[2];
    v37 = *(_QWORD*)(v36 + 32);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                              memory_order_relaxed);
    v38 = *(_QWORD*)(v36 + 40);
    v39 = *(_QWORD*)(v37 + 8) == -1 || v38 == 0;
    if (v39 || (v40 = *(_QWORD*)(v38 + 80)) == 0 ||
        (*(_QWORD*)(v40 + 8) != -1 ? (v41 = *(_QWORD*)(v38 + 88) == 0)
                                   : (v41 = true),
         v41)) {
      v38 = 0;
    }
    std___1___shared_weak_count___release_weak(v37);
    v42 = *v4 + 24;
    if (*(_DWORD*)(v38 + 96) > 1u) {
      v51 = v42 + 24LL * LANES128(*(a1)).n128_u32[2];
      v52 = *(_QWORD*)(v51 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                memory_order_relaxed);
      v53 = *(_QWORD*)(v51 + 16);
      v54 = *(_QWORD*)(v52 + 8) == -1 || v53 == 0;
      if (v54 || (v55 = *(_QWORD*)(v53 + 80)) == 0 ||
          (*(_QWORD*)(v55 + 8) != -1 ? (v56 = *(_QWORD*)(v53 + 88) == 0)
                                     : (v56 = true),
           v56)) {
        v57 = 0;
      }
      else if (*(_QWORD*)(v52 + 8) == -1) {
        v57 = 0;
      }
      else {
        v57 = v53;
      }
      std___1___shared_weak_count___release_weak(v52);
      a2 = v8;
      v58 = COERCE_FLOAT(*v8) - *(float*)(v57 + 40);
      v59 = COERCE_FLOAT(LANES128(*(v8)).n128_u64[1]) - *(float*)(v57 + 44);
      v60 = (float)(v59 * v59) + (float)(v58 * v58);
      if (v60 >= 0x1.0000000000000p-23) {
        v63 = 1.0 / sqrtf(v60);
        v62 = v58 * v63;
        v61 = v59 * v63;
      }
      else {
        v61 = 1.0;
        v62 = 0.0;
      }
      LANES128(v64).n128_u32[1] = 0;
      LANES128(v64).n128_u32[3] = 0;
      LANES128(v64).n128_f32[0] = v35 * v62;
      LANES128(v64).n128_f32[2] = v35 * v61;
      v3 = vsubq_f32(*v8, v64);
    }
    else {
      v43 = v42 + 24LL * LANES128(*(a1)).n128_u32[3];
      v44 = *(_QWORD*)(v43 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                                memory_order_relaxed);
      v45 = *(_QWORD*)(v43 + 16);
      v46 = *(_QWORD*)(v44 + 8) == -1 || v45 == 0;
      if (v46 || (v47 = *(_QWORD*)(v45 + 80)) == 0 ||
          (*(_QWORD*)(v47 + 8) != -1 ? (v48 = *(_QWORD*)(v45 + 88) == 0)
                                     : (v48 = true),
           v48)) {
        v49 = 0;
      }
      else if (*(_QWORD*)(v44 + 8) == -1) {
        v49 = 0;
      }
      else {
        v49 = v45;
      }
      std___1___shared_weak_count___release_weak(v44);
      LANES128(v50).n128_u32[1] = 0;
      LANES128(v50).n128_u32[3] = 0;
      a2 = v8;
      LANES128(v50).n128_f32[0] = v35 * *(float*)(v49 + 48);
      LANES128(v50).n128_f32[2] = v35 * *(float*)(v49 + 52);
      v3 = vaddq_f32(*v8, v50);
    }
    goto LABEL_39;
  }
}

__attribute__((swiftcall)) void game_combat_10906b0(PSEUDO_X8 x8_,
                                                    float32x4_t* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int16x4_t v2;
  __int64* v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  bool v11;
  float32x4_t* v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  float32x4_t* v25;
  _QWORD* v26;
  int v27;
  int v28;
  __int64 v29;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v25 = a1;
    v26 = a2;
    v27 = __cxa_guard_acquire(&GameData_21a6130);
    a2 = v26;
    v28 = v27;
    a1 = v25;
    if (v28 != 0) {
      v29 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v29;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v25;
      a2 = v26;
    }
  }
  LANES64(v2).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(
                     a1[2], COERCE_AS(float32x4_t, GameData_21a6120)))))
          .n64_u64[0];
  if ((LANES64(v2).n64_u8[0] & 1) != 0 || (LANES64(v2).n64_u8[2] & 1) != 0 ||
      (LANES64(v2).n64_u8[4] & 1) != 0) {
    v15 = LANES128(a1[2]).n128_u64[1];
    *a2 = LANES128(a1[2]).n128_u64[0];
    a2[1] = v15;
    return;
  }
  v3 = GameData_212d448[0];
  v4 = *GameData_212d448[0];
  if (*GameData_212d448[0] == 0) {
    goto LABEL_39;
  }
  v5 = LANES128(*(a1)).n128_u32[2];
  if (v5 <= 3 && (v6 = v4 + 24LL * v5, (v7 = *(_QWORD*)(v6 + 32)) != 0)) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v8 = *(_QWORD*)(v6 + 40);
    v9 = *(_QWORD*)(v7 + 8) == -1 || v8 == 0;
    if (v9 || (v10 = *(_QWORD*)(v8 + 80)) == 0 ||
        (*(_QWORD*)(v10 + 8) != -1 ? (v11 = *(_QWORD*)(v8 + 88) == 0)
                                   : (v11 = true),
         v11)) {
      v12 = a1;
      v13 = a2;
      v14 = 0;
    }
    else {
      v13 = a2;
      v12 = a1;
      if (*(_QWORD*)(v7 + 8) == -1) {
        v14 = 0;
      }
      else {
        v14 = v8;
      }
    }
    std___1___shared_weak_count___release_weak(v7);
    v4 = *v3;
    a2 = v13;
    a1 = v12;
    if (*v3 == 0) {
      goto LABEL_39;
    }
  }
  else {
    v14 = 0;
  }
  v16 = LANES128(*(a1)).n128_u32[3];
  if (v16 <= 3) {
    v17 = v4 + 24LL * v16;
    v18 = *(_QWORD*)(v17 + 32);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                memory_order_relaxed);
      v19 = *(_QWORD*)(v17 + 40);
      v20 = *(_QWORD*)(v18 + 8) == -1 || v19 == 0;
      if (v20 || (v21 = *(_QWORD*)(v19 + 80)) == 0 ||
          (*(_QWORD*)(v21 + 8) != -1 ? (v22 = *(_QWORD*)(v19 + 88) == 0)
                                     : (v22 = true),
           v22)) {
        v23 = (__int64)a2;
        v24 = 0;
      }
      else {
        v23 = (__int64)a2;
        v24 = *(_QWORD*)(v18 + 8) == -1 ? 0LL : v19;
      }
      std___1___shared_weak_count___release_weak(v18);
      a2 = (_QWORD*)v23;
      if (v14 != 0 && v24 != 0) {
        game_character_1085300((void*)(v23), *(_QWORD**)(v24 + 88),
                               (unsigned int)(*(_DWORD*)(v14 + 56) - 3) < 2);
        return;
      }
    }
  }
LABEL_39:
  *a2 = 0;
  a2[1] = 0;
}

__int64 game_combat_109acb0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  long double v11;
  __int64 v12;
  float* v13;
  float v14;
  __int64 v15;
  float v16;
  __int64 v17;
  float* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  bool v22;
  int v23;
  bool v24;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL);
  v4 = *(unsigned int*)(v3 + 120);
  if (((unsigned int)(v4 - 989295305) > 0x21 ||
       ((1LL << ((unsigned __int8)v4 + 55)) & 0x200040007LL) == 0) &&
      ((unsigned int)(v4 + 2068235592) > 0x12 ||
       ((1 << ((v4 + 72) & 31)) & 0x40003) == 0)) {
    v19 = a2;
    v20 = *(_DWORD*)(v3 + 120);
    result = GameRoutine_108cfd0(v4);
    if ((result & 1) != 0) {
      v21 = v19;
      if (v19 == 0) {
        return result;
      }
    }
    else {
      DWORD1(v11) = 0;
      v21 = v19;
      if (v20 <= 65265050) {
        v22 = v20 == -1679919317;
        v23 = 82343;
      }
      else {
        v22 = v20 == 65265051 || v20 == 2017201876;
        v23 = 65798035;
      }
      v24 = v22 || v20 == v23;
      if (!v24 || v19 == 0) {
        return result;
      }
    }
    *(float*)&v11 = *(float*)(v21 + 236) + *(float*)(v21 + 636);
    if (*(float*)&v11 <= 0x0.0p+0f) {
      return result;
    }
    goto LABEL_22;
  }
  v7 = *(_QWORD*)(v3 + 40);
  v8 = *(_QWORD*)(v7 + 392);
  v9 = *(_QWORD*)(v7 + 400);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    result = (__int64)CharacterModel_1070c00(*(_QWORD*)(v8 + 11608), v4);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v12 = result;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      *((_QWORD*)&v11 + 1) =
          LANES128_OF(std___1___shared_weak_count___release_weak(v9))
              .n128_u64[1];
      result = v12;
    }
  }
  else {
    result = (__int64)CharacterModel_1070c00(*(_QWORD*)(v8 + 11608), v4);
  }
  v13 = *(float**)(result + 40);
  DWORD1(v11) = 0;
  if (v13 != *(float**)(result + 48)) {
    v14 = *v13;
    if (*v13 > 0x0.0p+0f) {
      v15 = *(_QWORD*)(v3 + 96);
      v16 = 0x0.0p+0f;
      if (v15 != 0) {
        result = GameRoutine_d2b5f0(*(_QWORD*)(v15 + 32) + 72LL);
        if ((result & 0x100000000LL) != 0) {
          v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v15 + 24) + 72LL) +
                           104LL * (int)result);
          if (v17 != 0) {
            v18 = *(float**)(v17 + 16);
            if (v18 != nullptr) {
              v16 = *v18 * 0x1.1111120000000p-6f;
            }
          }
        }
      }
      *(float*)&v11 = v14 - v16;
      if ((float)(v14 - v16) > 0x0.0p+0f) {
      LABEL_22:
        if (*GameData_212d448[0] != 0) {
          return nn_os_ConvertToTimeSpan(
              *(_QWORD*)(game_script_hub_g_frame_counter + 344), v11);
        }
        else {
          return nn_os_ConvertToTimeSpan(
              *(_QWORD*)(game_script_hub_g_frame_counter + 344), v11);
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_combat_10de490(PSEUDO_X8 x8_,
                                                    __int64 result, _BYTE* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  int v5;
  bool v6;
  bool v7;
  unsigned int v8;
  bool v9;
  int v10;
  bool v11;
  unsigned int v12;
  int v13;
  __int64 v14;

  v3 = *(_DWORD*)(result + 8) & 0xFFF;
  if ((*(_DWORD*)(result + 8) & 0xFFF) == 0 ||
      (*(_BYTE*)(result + 14) & 2) != 0) {
    goto LABEL_11;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v3);
  v6 = false;
  if ((*(_WORD*)(v4 + 754) & 1) != 0) {
    v5 = *(unsigned __int8*)(result + 4);
    if ((unsigned int)(v5 - 14) >= 4 &&
        (v5 != 13 ||
         (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v4 + 104)) &
          1) == 0)) {
      v6 = true;
    }
  }
  v7 = (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                             8LL * (*(_DWORD*)(result + 8) & 0xFFF)) +
                  754LL) &
        0xE0) != 0 &&
       (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                             8LL * (*(_DWORD*)(result + 8) & 0xFFF)) +
                  754LL) &
        0x2000) == 0;
  if (v7 && ((v8 = *(unsigned __int8*)(result + 4), v9 = v8 > 0x10,
              v10 = (1 << v8) & 0x16000, !v9)
                 ? (v11 = v10 == 0)
                 : (v11 = true),
             !v11) ||
      v6) {
    v12 = *(unsigned __int8*)(result + 2);
    v13 = 0;
    if (v12 > 1) {
      if (v12 == 2) {
        if (*a2 != 0) {
          v13 = 3;
        }
        else {
          v13 = 2;
        }
      }
      else if (v12 == 3) {
        if (*a2 != 0) {
          v13 = 2;
        }
        else {
          v13 = 3;
        }
      }
    }
    else if (*(_BYTE*)(result + 2) != 0) {
      v13 = (unsigned __int8)*a2 ^ 1;
    }
    else {
      v13 = (unsigned __int8)*a2;
    }
    v14 = GameData_21c99b0;
    *(_DWORD*)a3 = v13;
    *(_BYTE*)(a3 + 16) = v6;
    *(_QWORD*)(a3 + 8) =
        *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (unsigned int)v3);
    *(_BYTE*)(a3 + 24) = 1;
  }
  else {
  LABEL_11:
    *(_BYTE*)a3 = 0;
    *(_BYTE*)(a3 + 24) = 0;
  }
  {
    result;
    return;
  }
}

void game_combat_10de7c0(unsigned int* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  bool v6;
  __int64 v8;

  if (GameData_21ec7b0 != 0 && *a1 <= 3) {
    v1 = GameData_21ec7b0 + 24LL * *a1;
    v2 = *(_QWORD*)(v1 + 32);
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v3 = *(_QWORD*)(v1 + 40);
      v4 = *(_QWORD*)(v2 + 8) == -1 || v3 == 0;
      if (v4 || (v5 = *(_QWORD*)(v3 + 80)) == 0 ||
          (*(_QWORD*)(v5 + 8) != -1 ? (v6 = *(_QWORD*)(v3 + 88) == 0)
                                    : (v6 = true),
           v6 || *(_QWORD*)(v2 + 8) == -1)) {
        std___1___shared_weak_count___release_weak(v2);
      }
      else {
        std___1___shared_weak_count___release_weak(v2);
        v8 = *((_QWORD*)a1 + 1);
        if (v8 != 0 && GameData_21ed090 != 0 &&
            (*(_WORD*)(v8 + 754) & 2) != 0) {
          GameRoutine_17ce980(GameData_21ed090, v8, (*a1 & 0xFFFFFFFD) != 0,
                              *(_QWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) +
                                         96LL * *(int*)(v3 + 96) + 256));
        }
      }
    }
  }
}

__int64 game_combat_10e0730(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  char v5;
  unsigned int v6;
  float* v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v11;
  unsigned int v12[2];

  if ((*(_BYTE*)(a2 + 64) & 1) == 0) {
    v4 = *(_QWORD*)(a2 + 8);
    goto LABEL_5;
  }
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 24) = 0xB0000000BLL;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 48) = -1082130432;
  v4 = *(_QWORD*)(a2 + 8);
  if (*(_BYTE*)(a2 + 64) != 1) {
  LABEL_5:
    v5 = *(_BYTE*)(a1 + 8);
    v6 = game_HashString32((__int64)"Enabled");
    v7 = *(float**)(v4 + 120);
    v8 = *(_DWORD*)(v4 + 20);
    v12[0] = v6;
    v12[1] = v8;
    GameRoutine_6616e0(v7, v12);
    v9 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v9) = v5;
    goto LABEL_6;
  }
  v11 = game_HashString32((__int64)"Enabled");
  v5 = GameRoutine_65f7a0((_QWORD*)v4, &v11, 0);
LABEL_6:
  *(_BYTE*)(a1 + 8) = v5 != 0;
  GameRoutine_111f220(a2, (__int64)"TargetTimeScale", (float*)(a1 + 56),
                      0x1.99999a0000000p-4f);
  GameRoutine_111f220(a2, (__int64)"TargetFovOffset", (float*)(a1 + 52),
                      -0x1.4000000000000p+2f);
  GameRoutine_111f220(a2, (__int64)"TargetBlurStrength", (float*)(a1 + 60),
                      0x0.0p+0f);
  GameRoutine_111f220(a2, (__int64)"InDuration", (float*)(a1 + 32),
                      0x1.99999a0000000p-4f);
  GameRoutine_111f220(a2, (__int64)"MidDuration", (float*)(a1 + 36), 0x0.0p+0f);
  GameRoutine_111f220(a2, (__int64)"OutDuration", (float*)(a1 + 40),
                      0x1.0000000000000p-1f);
  GameRoutine_111f130(a2, (__int64)"InCurve", (int*)(a1 + 24), 0xBu);
  return GameRoutine_111f130(a2, (__int64)"OutCurve", (int*)(a1 + 28), 0xBu);
}

void game_combat_110b040(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 v9[2];
    __int64 v10;
    __int64 v11;
    __int64 v12;
  } v9_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9_.v9, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
  }
  else {
    v5 = *(_QWORD*)(a2 + 8);
    v9_.v9[0] = *(_QWORD*)a2;
    v9_.v9[1] = v5;
    v9_.v10 = *(_QWORD*)(a2 + 16);
  }
  v6 = a3[1];
  v9_.v11 = *a3;
  v9_.v12 = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  game_combat_110b5a0(a1 + 8, (unsigned __int8*)v9_.v9, (char*)v9_.v9);
  v7 = v9_.v12;
  if (v9_.v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9_.v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
    if ((v9_.v9[0] & 1) == 0) {
      return;
    }
  }
  else if ((v9_.v9[0] & 1) == 0) {
    return;
  }
  if (v9_.v10 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v9_.v10);
  }
}

void game_combat_110b140()
{

#pragma clang fp contract(off)
  __int64 v0;
  float v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v0 = GameData_2235618;
  if (GameData_2235618 != 0) {
    v1 = *(float*)(GameData_2235618 + 48) +
         (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                         0x1.0aef000000000p+4f) /
                 0x1.f400000000000p+9f);
    *(float*)(GameData_2235618 + 48) = v1;
    if (v1 >= 0x1.e000000000000p+4f) {
      v2 = *(_QWORD*)(v0 + 24);
      *(float*)(v0 + 48) = v1 + -0x1.e000000000000p+4f;
      if (v2 != 0) {
        v3 = fw_memory_g_heap_manager_ptr;
        do {
          while (1) {
            v5 = *(_QWORD*)(v2 + 48);
            if (v5 == 0 || *(__int64*)(v5 + 8) <= 0) {
              break;
            }
            v2 = *(_QWORD*)v2;
            if (v2 == 0) {
              return;
            }
          }
          v6 = *(_QWORD*)(v0 + 16);
          v7 = *(_QWORD*)(v2 + 8);
          v8 = v6 - 1;
          if ((v6 & (v6 - 1)) != 0) {
            if (v7 >= v6) {
              v7 %= v6;
            }
          }
          else {
            v7 &= v8;
          }
          v9 = *(_QWORD*)(v0 + 8);
          v10 = *(_QWORD*)v2;
          v11 = *(__int64**)(v9 + 8 * v7);
          do {
            v12 = v11;
            v11 = (__int64*)*v11;
          } while (v11 != (__int64*)v2);
          if (v12 == (__int64*)(v0 + 24)) {
            goto LABEL_53;
          }
          v13 = v12[1];
          if ((v6 & v8) != 0) {
            if (v13 >= v6) {
              v13 %= v6;
            }
          }
          else {
            v13 &= v8;
          }
          v14 = *(_QWORD*)v2;
          if (v13 != v7) {
          LABEL_53:
            if (v10 != 0) {
              v15 = *(_QWORD*)(v10 + 8);
              if ((v6 & v8) != 0) {
                v16 = *(_QWORD*)(v10 + 8);
                if (v15 >= v6) {
                  v16 = v15 % v6;
                }
              }
              else {
                v16 = v15 & v8;
              }
              v14 = *(_QWORD*)v2;
              if (v16 == v7) {
                goto LABEL_34;
              }
            }
            *(_QWORD*)(v9 + 8 * v7) = 0;
            v14 = *(_QWORD*)v2;
          }
          if (v14 != 0) {
            v15 = *(_QWORD*)(v14 + 8);
          LABEL_34:
            if ((v6 & v8) == 0) {
              v15 &= v8;
              if (v15 == v7) {
                goto LABEL_39;
              }
            LABEL_38:
              *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v15) = v12;
              v14 = *(_QWORD*)v2;
              goto LABEL_39;
            }
            if (v15 >= v6) {
              v15 %= v6;
            }
            if (v15 != v7) {
              goto LABEL_38;
            }
          }
        LABEL_39:
          *v12 = v14;
          *(_QWORD*)v2 = 0;
          --*(_QWORD*)(v0 + 32);
          v17 = *(_QWORD*)(v2 + 48);
          if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            std___1___shared_weak_count___release_weak_alt2(v17);
            if ((*(_BYTE*)(v2 + 16) & 1) != 0) {
            LABEL_42:
              v18 = *(_QWORD*)(v2 + 32);
              if (v18 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
                  v19 = 128;
                }
                else {
                  v19 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v19, v18);
              }
            }
          }
          else if ((*(_BYTE*)(v2 + 16) & 1) != 0) {
            goto LABEL_42;
          }
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v4 = 128;
          }
          else {
            v4 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v2);
          v2 = v10;
        } while (v10 != 0);
      }
    }
  }
}

_QWORD* game_combat_110b5a0(__int64 a1, unsigned __int8* a2, char* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  _BOOL8 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 primeEm;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  unsigned __int64 v62;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory_alt1((__int64)v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp_alt1(v24, (__int64)v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp_alt1(v20, (__int64)v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v27 = *a3;
  v16 = v26;
  *v26 = 0;
  v26[1] = v13;
  if ((v27 & 1) != 0) {
    fw_text_String_CopyTerminated(v26 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v28 = *((_QWORD*)a3 + 1);
    v26[2] = *(_QWORD*)a3;
    v26[3] = v28;
    v26[4] = *((_QWORD*)a3 + 2);
  }
  v29 = *((_QWORD*)a3 + 3);
  v30 = *((_QWORD*)a3 + 4);
  *((_QWORD*)a3 + 3) = 0;
  *((_QWORD*)a3 + 4) = 0;
  v31 = *(float*)(a1 + 32);
  v16[5] = v29;
  v16[6] = v30;
  v32 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v12 == 0 || (float)(v31 * (float)v12) < v32) {
    v33 = v32 / v31;
    v34 = true;
    if (v12 >= 3) {
      v34 = (v12 & (v12 - 1)) != 0;
    }
    v35 = v34 | (2 * v12);
    v36 = vcvtps_u64_f32(v33);
    if (v35 <= v36) {
      primeEm = v36;
    }
    else {
      primeEm = v35;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime_alt1(primeEm);
    }
    v38 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v38) {
      if (primeEm >= v38) {
        goto LABEL_105;
      }
      v44 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v38 < 3 || (v38 & (v38 - 1)) != 0) {
        v44 = std___1___next_prime_alt1(v44);
      }
      else {
        v45 = 1LL << (-(char)__clz(v44 - 1) & 63);
        if (v44 >= 2) {
          v44 = v45;
        }
      }
      if (primeEm <= v44) {
        primeEm = v44;
      }
      if (primeEm >= v38) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v57 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v57 != 0) {
          v58 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v58 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v25 + v58, v57);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v39 = fw_memory_HeapManager_Allocate(*v25, 8 * primeEm, 16, 0);
    v40 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v39;
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v25 + v41, v40);
    }
    v42 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v43 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 48) = 0;
        v46 = *(_QWORD*)a1 + 8 * v43;
        v43 += 8;
        *(_QWORD*)(v46 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v43);
    }
    else {
      v43 = 0;
    }
    if ((primeEm & 7) != 0) {
      v47 = 8 * v43;
      do {
        --v42;
        *(_QWORD*)(*(_QWORD*)a1 + v47) = 0;
        v47 += 8;
      } while (v42 != 0);
    }
    v49 = a1 + 16;
    v48 = *(_QWORD**)(a1 + 16);
    if (v48 != nullptr) {
      v50 = v48[1];
      v51 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v50 >= primeEm) {
          v50 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v50) = v49;
        v52 = (_QWORD*)*v48;
        if (*v48 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v53 = v52[1];
          if (v53 >= primeEm) {
            v53 %= primeEm;
          }
          if (v53 != v50) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v53) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v48;
              goto LABEL_82;
            }
            *v48 = *v52;
            *v52 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v53);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v53) = v52;
            v52 = v48;
          }
          v53 = v50;
        LABEL_82:
          v48 = v52;
          v52 = (_QWORD*)*v52;
          v50 = v53;
          if (v52 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v54 = v50 & v51;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
      while (1) {
        v55 = (_QWORD*)*v48;
        if (*v48 == 0) {
          break;
        }
        v56 = v55[1] & v51;
        if (v56 == v54) {
          v48 = (_QWORD*)*v48;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v56) != 0) {
          *v48 = *v55;
          *v55 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v56);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v56) = v55;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = v48;
          v48 = v55;
          v54 = v56;
        }
      }
    }
  LABEL_105:
    v12 = *(_QWORD*)(a1 + 8);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v59 = *(_QWORD*)a1;
  v60 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v60 != nullptr) {
    *v16 = *v60;
    *v60 = v16;
  }
  else {
    v61 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v16;
    *v16 = v61;
    *(_QWORD*)(v59 + 8 * v3) = a1 + 16;
    if (*v16 != 0) {
      v62 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v62 >= v12) {
          v62 %= v12;
        }
      }
      else {
        v62 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v62) = v16;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v16;
}

#pragma GCC visibility pop
