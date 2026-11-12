#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 CharacterObservable_Unknown5(__int64 result);
__int64 CharacterIllusion_1103820(_QWORD);
__int64 GameRoutine_10965c0(_QWORD, _QWORD);
__int64 GameRoutine_10b5e70(__int64 result, int);
__int64 GameRoutine_809ba0(float);
__int64 GameRoutine_809dc0(_QWORD, _QWORD, long double);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a59220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_combat_CombatSettings_RadialBlur_t_Play(__int64, float);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char** GameRoutine_108c640(int);
extern _DWORD* GameData_212d168;
extern _UNKNOWN GameData_220f840;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ec88;
extern _UNKNOWN* GameData_212ff48;
extern _UNKNOWN* GameData_2130058;
extern __int64 (*GameData_200b670[])();
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64* GameData_2130060[13];
extern int GameData_21d92e0;
extern int GameData_220f838;
extern int GameData_2235720;
extern int* GameData_212ec80;
extern int* GameData_212ff40;
extern int* GameData_2130050;
void GameRoutine_10b2280(__int64, unsigned int, float);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 game_character_CharacterObservable_CharacterObservable_lambda5_Invoke(
    __int64 result, __int64 a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda8_Invoke(
    __int64 result, __int64 a2);
void game_character_CharacterObservable_CharacterObservable_lambda9_Invoke(
    __int64 a1);
char** game_character_CharacterObservable_CharacterObservable_lambda10_Invoke(
    char** result, __int64* a2);
void game_character_CharacterObservable_CharacterObservable_lambda11_Invoke(
    __int64 a1, __int64 a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda13_Invoke(
    __int64 result, __int64* a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda14_Invoke(
    __int64 result, __int64* a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda15_Invoke(
    __int64 result, __int64* a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda17_Invoke(
    __int64 result, __int64 a2);
float game_character_CharacterObservable_CharacterObservable_lambda18_Invoke(
    __int64 a1, __int64 a2);
void game_character_CharacterObservable_CharacterObservable_lambda20_Invoke(
    long double a1, __int64 a2, __int64* a3);
__int64 game_character_CharacterObservable_CharacterObservable_lambda21_Invoke(
    __int64 result, __int64* a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda22_Invoke(
    __int64 result, __int64* a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda23_Invoke(
    __int64 result, __int64* a2);
__int64
game_character_CharacterObservable_CharacterObservable_lambda24_Invoke_alt1(
    __int64 result) __asm__("game_character_CharacterObservable_"
                            "CharacterObservable_lambda24_Invoke");
__int64 game_character_CharacterObservable_CharacterObservable_lambda26_Invoke(
    __int64 result);
__int64 game_character_CharacterObservable_CharacterObservable_lambda27_Invoke(
    __int64 result);
__int64 CharacterObservable_10d3a90(__int64 a1);
__int64 CharacterObservable_10d3ae0(__int64 result, __int64 a2);
void CharacterObservable_10d3b20(__int64 a1, __int64 a2);
float game_character_CharacterObservable_CallSignalClothBlendImpl_lambda1_Invoke(
    __int64 a1, __int64 a2);
float game_character_CharacterObservable_CallSignalClothBlendImpl_lambda0_Invoke(
    __int64 a1, __int64 a2);
__int64 CharacterIllusion_11032f0(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64
game_character_CharacterObservable_CharacterObservable_lambda25_Invoke_alt1(
    __int64 result) __asm__("game_character_CharacterObservable_"
                            "CharacterObservable_lambda25_Invoke");
__attribute__((swiftcall)) void CharacterSound_1095750(PSEUDO_X8, __int64,
                                                       __int64, __int64, float);
__attribute__((swiftcall)) void
CharacterSound_1095750_alt1(PSEUDO_X8, __int64 result, char*, __int64,
                            long double) __asm__("CharacterSound_1095750");
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 snd_isActive_100100(_QWORD);
__n128 GameRoutine_106c820(_QWORD*, __int64, __n128 result);
extern __int64 (*GameData_200b7f0[])();
extern __int64 (*GameData_200ece8[])();
extern __int64 GameData_21ec7b0;
void GameRoutine_10cd6a0(char**, char*, float, float);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void CharacterObservable_10cd4e0(__int64 a1);
void CharacterObservable_10cd5c0(__int64* a1, int a2, float a3);
float game_character_CharacterObservable_CharacterObservable_lambda6_Invoke(
    __int64 a1, __int64* a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda7_Invoke(
    __int64 result, __int64* a2);
void game_character_CharacterObservable_CharacterObservable_lambda16_Invoke(
    __int64 a1, __int64 a2);
__int64 game_character_CharacterObservable_CharacterObservable_lambda19_Invoke(
    __int64 result, __int64* a2, __n128 a3);
__int64
game_character_CharacterObservable_CallSignalClothBlendImpl_lambda0_Invoke_10d4050(
    __int64 a1, float* a2);
_BYTE* ProcInst_657a50(__int64, char);
_QWORD* PhysicsObject_10fa360(_QWORD* result, float32x4_t*, long double,
                              long double, long double, long double);
__int64 GameRoutine_10f9f00(__int64, __int64, long double, long double,
                            long double, long double, double);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 strcmp(_QWORD, _QWORD);
bool game_108cee0(int);
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82dd0;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 game_g_frame_clock;
long double asin(long double, long double);
long double atan2(double, double);
void snd_Fade_Fade_10c830(__int64, float);
_QWORD* game_character_CharacterObservable_CharacterObservable_lambda4_Invoke(
    _QWORD* result, long double a2, long double a3, long double a4,
    long double a5, double a6);
__int64 game_character_CharacterObservable_CharacterObservable_lambda28_Invoke(
    __int64 result, int* a2);
__attribute__((swiftcall)) void
CharacterSound_1095750_alt2(PSEUDO_X8, __int64, char*, const char*,
                            float) __asm__("CharacterSound_1095750");
__int64
CharacterIllusion_11032f0_alt1(_QWORD*) __asm__("CharacterIllusion_11032f0");
__int64 GameRoutine_10965c0_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_10965c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_isActive_100100_alt1(__int64*) __asm__("snd_isActive_100100");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void CharacterIllusion_1103820_alt1(_QWORD*) __asm__(
    "CharacterIllusion_1103820");
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a59220_alt1(__int64*, __int64, unsigned __int64,
                             char) __asm__("GameRoutine_a59220");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_character_CharacterObservable_CharacterObservable_lambda24_Invoke(
    __int64 a1);
void game_character_CharacterObservable_CharacterObservable_lambda25_Invoke(
    __int64 a1);

void CharacterObservable_10cd4e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  _QWORD v8[4];

  if (*(_BYTE*)(a1 + 416) == 1) {
    v8[2] = v1;
    v8[3] = v2;
    v3 = *(_QWORD*)(a1 + 32);
    if (v3 == 0 || *(_QWORD*)(v3 + 8) == -1) {
      v4 = nullptr;
    }
    else {
      v4 = *(__int64**)(a1 + 40);
    }
    CharacterSound_1095750_alt2((void*)((__int64)v8), v4[17],
                                "SE_FS_<LD/MB>_<FootID>_<Ground>_<Arg>", "Run",
                                0x1.0000000000000p+0f);
    v5 = v4[49];
    v6 = v4[50];
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
      v7 = *(char**)(v5 + 11728);
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
    }
    else {
      v7 = *(char**)(v5 + 11728);
    }
    if (v7 != nullptr) {
      CharacterSound_1095750_alt2((void*)((__int64)v8), v4[17], v7, "Run",
                                  0x1.0000000000000p+0f);
    }
  }
}

void CharacterObservable_10cd5c0(__int64* a1, int a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  const char* v5;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE v11[16];

  v4 = a1[17];
  v5 = "Run";
  if (a2 == 2) {
    v5 = "Sprint";
  }
  if (a2 != 0) {
    v7 = v5;
  }
  else {
    v7 = "Walk";
  }
  CharacterSound_1095750((void*)((__int64)v11), v4,
                         (__int64)"SE_FS_<LD/MB>_<FootID>_<Ground>_<Arg>",
                         (__int64)v7, a3);
  v8 = a1[49];
  v9 = a1[50];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v10 = *(_QWORD*)(v8 + 11728);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  else {
    v10 = *(_QWORD*)(v8 + 11728);
  }
  if (v10 != 0) {
    CharacterSound_1095750((void*)((__int64)v11), a1[17], v10, (__int64)v7, a3);
  }
}

__int64 CharacterObservable_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  __int64 v17;
  __int128 v18;
  __int128 v19;
  _DWORD v20[2];

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 496LL);
  if (v2 != 0) {
    v3 = 1.0;
    do {
      v4 = *(float*)(v2 + 12);
      v2 = *(_QWORD*)(v2 + 24);
      v3 = v3 * v4;
    } while (v2 != 0);
  }
  else {
    v3 = 1.0;
  }
  v5 = *(float*)(result + 420);
  if (v5 != v3) {
    v6 = *(_QWORD*)(result + 184);
    v7 = *(_QWORD*)(result + 192);
    *(_BYTE*)(result + 208) = 1;
    while (v6 != v7) {
      if (*(_DWORD*)v6 != 0) {
        v8 = *(_QWORD*)(v6 + 16);
        if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
          goto LABEL_8;
        }
        *(float*)v20 = v5;
        *(float*)&v20[1] = v3;
        v9 = *(_QWORD*)(v6 + 64);
        if (v9 == 0) {
          GameRoutine_60a310(0);
        }
        result =
            (*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)v9 + 48LL))(v9, v20);
        if ((*(_DWORD*)v6 & 0x80000000) != 0) {
        LABEL_8:
          *(_DWORD*)v6 = 0;
        }
      }
      v6 += 80;
    }
    *(_BYTE*)(v1 + 208) = 0;
    *(float*)(v1 + 420) = v3;
  }
  v10 = *(_QWORD*)(v1 + 32);
  if (v10 != 0) {
    v11 = *(_QWORD*)(v10 + 8);
    v12 = *(_QWORD*)(v1 + 40);
    if (v11 != -1 && v12 != 0) {
      v14 = *(_QWORD*)(v12 + 432);
      if (v14 != 0) {
        v15 = *(_OWORD*)(v14 + 464);
        *(_QWORD*)(v1 + 448) = v15;
        v16 = *(_OWORD*)(v1 + 448);
        *((_QWORD*)&v16 + 1) = DWORD2(v15);
        *(_OWORD*)(v1 + 448) = v16;
      }
      v17 = *(_QWORD*)(v12 + 440);
      if (v17 != 0) {
        v18 = *(_OWORD*)(v17 + 464);
        *(_QWORD*)(v1 + 464) = v18;
        v19 = *(_OWORD*)(v1 + 464);
        *((_QWORD*)&v19 + 1) = DWORD2(v18);
        *(_OWORD*)(v1 + 464) = v19;
      }
    }
  }
  return result;
}

_QWORD* game_character_CharacterObservable_CharacterObservable_lambda4_Invoke(
    _QWORD* result, long double a2, long double a3, long double a4,
    long double a5, double a6)
{
  int8x16_t* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v10;
  long double v11;
  long double v12;
  long double v13;
  long double v14;
  double v15;
  float32x4_t v16;
  int8x16_t v17;
  _QWORD* v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  unsigned __int64 v22;
  float32x4_t v23;
  unsigned __int64 v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float v31;
  float v32;
  double v33;
  long double v34;
  long double v35;
  long double v36;
  long double v37;
  long double v38;
  int8x16_t v40;
  _QWORD* v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  unsigned __int64 v45;
  float32x4_t v46;
  unsigned __int64 v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float v54;
  float v55;
  double v56;
  long double v57;
  long double v58;
  long double v59;
  long double v60;
  long double v61;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  long double v66;
  long double v67;
  long double v68;
  long double v69;
  double v70;
  _QWORD* v71;
  __int64* v72;
  int v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  unsigned int v77;
  long double v78;
  int v79;
  unsigned int v80;
  unsigned int v81;
  int v82;
  unsigned int v83;
  long double v84;
  int v85;
  unsigned int v86;
  unsigned int v87;
  int v88;
  long double v89;
  long double v90;
  __int64 v92;
  long double v93;
  long double v94;
  long double v95;
  long double v96;
  double v97;
  _QWORD* v98;
  __int64* v99;
  int v100;
  unsigned int v101;
  unsigned int v102;
  int v103;
  unsigned int v104;
  long double v105;
  int v106;
  unsigned int v107;
  unsigned int v108;
  int v109;
  unsigned int v110;
  long double v111;
  int v112;
  unsigned int v113;
  unsigned int v114;
  int v115;
  long double v116;
  long double v117;
  __int64 v119;
  long double v120;
  long double v121;
  long double v122;
  long double v123;
  double v124;
  _QWORD* v125;
  __int64* v126;
  int v127;
  unsigned int v128;
  unsigned int v129;
  int v130;
  unsigned int v131;
  long double v132;
  int v133;
  unsigned int v134;
  unsigned int v135;
  int v136;
  unsigned int v137;
  long double v138;
  int v139;
  unsigned int v140;
  unsigned int v141;
  int v142;
  long double v143;
  long double v144;
  __int64 v146;
  long double v147;
  long double v148;
  long double v149;
  long double v150;
  double v151;
  _QWORD* v152;
  __int64* v153;
  int v154;
  unsigned int v155;
  unsigned int v156;
  int v157;
  unsigned int v158;
  long double v159;
  int v160;
  unsigned int v161;
  unsigned int v162;
  int v163;
  unsigned int v164;
  long double v165;
  int v166;
  unsigned int v167;
  unsigned int v168;
  int v169;
  long double v170;
  long double v171;
  long double v173;
  long double v174;
  long double v175;
  float32x4_t v176;
  long double v177;
  long double v178;
  long double v179;
  long double v180;
  long double v181;
  float32x4_t v182;
  float32x4_t v183;
  long double v184;
  long double v185;
  long double v186;
  long double v187;
  long double v188;
  long double v189;
  long double v190;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
  v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
  v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
  v6 = (int8x16_t*)result[1];
  v7 = LANES128(v6[2]).n128_u64[0];
  if (v7 != 0) {
    v8 = (_QWORD*)LANES128(v6[2]).n128_u64[1];
    if (*(_QWORD*)(v7 + 8) != -1 && v8 != nullptr) {
      v10 = GameRoutine_10f9f00(LANES128(v6[2]).n128_i64[1], v8[54], a2, a3, a4,
                                a5, a6),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
      v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
      v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
      LANES128(v16).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v16).n128_u64[1] = 0x3F8000003F800000LL;
      v176 = v16;
      if (v10 != 0) {
        v17 = v6[28];
        v18 = (_QWORD*)v10;
        LANES128(v19).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        v20 = *(int8x16_t*)(v8[54] + 464LL);
        LANES128(v21).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v22 =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        v24 =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                .n64_u64[0];
        v25 = vmulq_f32(v20, v17);
        *(int8x8_t*)&LANES128(v19).n128_i8[8] =
            vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v26).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v21).n128_u64[1] = v22;
        *(int8x8_t*)&LANES128(v26).n128_i8[8] =
            vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v23).n128_u64[1] = v24;
        LANES128(v25).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                .n64_u64[0];
        LANES128(v25).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                .n64_u64[0];
        LANES128(v25).n128_u64[1] = LANES128(v25).n128_u64[0];
        v27 = vaddq_f32(v25, v16);
        v28 = vsqrtq_f32(vaddq_f32(v27, v27));
        v29 = vdivq_f32(vmlsq_f32(vmulq_f32(v19, v21), v23, v26), v28);
        LANES128(v19).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v19).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v29).n128_u32[3] =
            LANES128_OF(vmulq_f32(v28, v19)).n128_u32[3];
        LANES128(v28).n128_u64[0] = 0x3400000034000000LL;
        LANES128(v28).n128_u64[1] = 0x3400000034000000LL;
        v30 = vbslq_s8(vcgeq_f32(v28, v27),
                       COERCE_AS(int8x16_t, GameData_1a82dd0), v29);
        v31 = LANES128(v30).n128_f32[1];
        v182 = v30;
        v32 = LANES128(v30).n128_f32[2];
        v33 = vmuls_lane_f32(LANES128(v30).n128_f32[1],
                             COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                             1);
        PSEUDO_LOW_LANE128(
            v27, n128_f32,
            vmuls_lane_f32(LANES128(v30).n128_f32[1], v30, 2) +
                (float)(LANES128(v30).n128_f32[0] * LANES128(v30).n128_f32[3]));
        v35 = atan2(LANES128(v27).n128_f32[0] + LANES128(v27).n128_f32[0],
                    (LANES128_OF(vmulq_f32(v30, v30)).n128_f32[0] + v33) *
                            -0x1.0000000000000p+1 +
                        0x1.0000000000000p+0),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        *((_QWORD*)&v34 + 1) = LANES128(v182).n128_u64[1];
        *(float*)&v35 = *(double*)&v35;
        v174 = v35;
        *(float*)&v35 = vmuls_lane_f32(-LANES128(v182).n128_f32[0], v182, 2);
        *(_QWORD*)&v34 = -0x1.0000000000000p+0;
        *(double*)&v35 =
            (float)(*(float*)&v35 + (float)(v31 * LANES128(v182).n128_f32[3])) +
            (float)(*(float*)&v35 + (float)(v31 * LANES128(v182).n128_f32[3]));
        if (*(double*)&v35 > 0x1.0000000000000p+0) {
          *(double*)&v35 = 0x1.0000000000000p+0;
        }
        if (*(double*)&v35 < -0x1.0000000000000p+0) {
          *(double*)&v35 = -0x1.0000000000000p+0;
        }
        v36 = asin(v35, v34),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        *(float*)&v36 = *(double*)&v36;
        v173 = v36;
        *(float*)&v36 = vmuls_lane_f32(
            LANES128(v182).n128_f32[0],
            COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0]), 1);
        v37 = atan2(
            (float)(*(float*)&v36 + (float)(v32 * LANES128(v182).n128_f32[3])) +
                (float)(*(float*)&v36 +
                        (float)(v32 * LANES128(v182).n128_f32[3])),
            (v33 + vmuls_lane_f32(v32, v182, 2)) * -0x1.0000000000000p+1 +
                0x1.0000000000000p+0),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        *(float*)&v37 = *(double*)&v37;
        *(_QWORD*)&v38 = __PAIR64__(LODWORD(v173), LODWORD(v174));
        *((_QWORD*)&v38 + 1) = LODWORD(v37);
        v190 = v38;
        PhysicsObject_10fa360(v18, (float32x4_t*)&v190, v37, v38, v173, v174),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
      }
      result = (_QWORD*)GameRoutine_10f9f00((__int64)v8, v8[55], v11, v12, v13,
                                            v14, v15),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
      v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
      v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
      if (result != nullptr) {
        v40 = v6[29];
        v41 = result;
        LANES128(v42).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        v43 = *(int8x16_t*)(v8[55] + 464LL);
        LANES128(v44).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v45 =
            LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
        LANES128(v46).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        v47 =
            LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                .n64_u64[0];
        v48 = vmulq_f32(v43, v40);
        *(int8x8_t*)&LANES128(v42).n128_i8[8] =
            vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v49).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v44).n128_u64[1] = v45;
        *(int8x8_t*)&LANES128(v49).n128_i8[8] =
            vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v46).n128_u64[1] = v47;
        LANES128(v48).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
                .n64_u64[0];
        LANES128(v48).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
                .n64_u64[0];
        LANES128(v48).n128_u64[1] = LANES128(v48).n128_u64[0];
        v50 = vaddq_f32(v48, v176);
        v51 = vsqrtq_f32(vaddq_f32(v50, v50));
        v52 = vdivq_f32(vmlsq_f32(vmulq_f32(v42, v44), v46, v49), v51);
        LANES128(v42).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v42).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v52).n128_u32[3] =
            LANES128_OF(vmulq_f32(v51, v42)).n128_u32[3];
        LANES128(v51).n128_u64[0] = 0x3400000034000000LL;
        LANES128(v51).n128_u64[1] = 0x3400000034000000LL;
        v53 = vbslq_s8(vcgeq_f32(v51, v50),
                       COERCE_AS(int8x16_t, GameData_1a82dd0), v52);
        v54 = LANES128(v53).n128_f32[1];
        v183 = v53;
        v55 = LANES128(v53).n128_f32[2];
        v56 = vmuls_lane_f32(LANES128(v53).n128_f32[1],
                             COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                             1);
        PSEUDO_LOW_LANE128(
            v50, n128_f32,
            vmuls_lane_f32(LANES128(v53).n128_f32[1], v53, 2) +
                (float)(LANES128(v53).n128_f32[0] * LANES128(v53).n128_f32[3]));
        v58 = atan2(LANES128(v50).n128_f32[0] + LANES128(v50).n128_f32[0],
                    (LANES128_OF(vmulq_f32(v53, v53)).n128_f32[0] + v56) *
                            -0x1.0000000000000p+1 +
                        0x1.0000000000000p+0),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        *((_QWORD*)&v57 + 1) = LANES128(v183).n128_u64[1];
        *(float*)&v58 = *(double*)&v58;
        v177 = v58;
        *(float*)&v58 = vmuls_lane_f32(-LANES128(v183).n128_f32[0], v183, 2);
        *(_QWORD*)&v57 = -0x1.0000000000000p+0;
        *(double*)&v58 =
            (float)(*(float*)&v58 + (float)(v54 * LANES128(v183).n128_f32[3])) +
            (float)(*(float*)&v58 + (float)(v54 * LANES128(v183).n128_f32[3]));
        if (*(double*)&v58 > 0x1.0000000000000p+0) {
          *(double*)&v58 = 0x1.0000000000000p+0;
        }
        if (*(double*)&v58 < -0x1.0000000000000p+0) {
          *(double*)&v58 = -0x1.0000000000000p+0;
        }
        v59 = asin(v58, v57),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        *(float*)&v59 = *(double*)&v59;
        v175 = v59;
        *(float*)&v59 = vmuls_lane_f32(
            LANES128(v183).n128_f32[0],
            COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0]), 1);
        v60 = atan2(
            (float)(*(float*)&v59 + (float)(v55 * LANES128(v183).n128_f32[3])) +
                (float)(*(float*)&v59 +
                        (float)(v55 * LANES128(v183).n128_f32[3])),
            (v56 + vmuls_lane_f32(v55, v183, 2)) * -0x1.0000000000000p+1 +
                0x1.0000000000000p+0),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        *(float*)&v60 = *(double*)&v60;
        *(_QWORD*)&v61 = __PAIR64__(LODWORD(v175), LODWORD(v177));
        *((_QWORD*)&v61 + 1) = LODWORD(v60);
        v189 = v61;
        result = PhysicsObject_10fa360(v41, (float32x4_t*)&v189, v60, v61, v175,
                                       v177),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
      }
      v64 = (_QWORD*)v8[49];
      v63 = v8[50];
      if (v63 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          result =
              (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v63),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v148 =
              COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v151 =
              COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
          v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        }
      }
      v65 = v64[175];
      if (v65 != 0 &&
          ((unsigned int)strcmp(v64[175], "Loc_L_Shield") == 0 ||
           (_DWORD)(result = (_QWORD*)strcmp(v65, "Loc_R_Shield")) == 0)) {
        result = (_QWORD*)GameRoutine_10f9f00((__int64)v8, v8[59], v66, v67,
                                              v68, v69, v70),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        if (result != nullptr) {
          v71 = result;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v72 = game_map_MapRandom_instance__ptr[0];
          v73 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v74 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v75 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v72 + 1) = v73;
          v76 = (v75 >> 8) ^ (v74 >> 19) ^ v75 ^ v74;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72) = v74;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72 + 4) = v76;
          v77 = v76 & 0x7FFFFFFF;
          *((_QWORD*)&v78 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v78 = (double)v77 / 0x1.fffffffc00000p+30;
          *(float*)&v78 = *(double*)&v78;
          *(float*)&v78 = *(float*)&v78 + -0x1.0000000000000p-1f;
          v184 = v78;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v79 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72);
          v80 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72 + 4);
          v81 = *(_DWORD*)v72 ^ (*(_DWORD*)v72 << 11);
          *(_DWORD*)v72 = *((_DWORD*)v72 + 1);
          *((_DWORD*)v72 + 1) = v79;
          v82 = (v81 >> 8) ^ (v80 >> 19) ^ v81 ^ v80;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72) = v80;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72 + 4) = v82;
          v83 = v82 & 0x7FFFFFFF;
          *((_QWORD*)&v84 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v84 = (double)v83 / 0x1.fffffffc00000p+30;
          *(float*)&v84 = *(double*)&v84;
          *(float*)&v84 = *(float*)&v84 + -0x1.0000000000000p-1f;
          v178 = v84;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v85 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72);
          v86 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72 + 4);
          v87 = *(_DWORD*)v72 ^ (*(_DWORD*)v72 << 11);
          *(_DWORD*)v72 = *((_DWORD*)v72 + 1);
          *((_DWORD*)v72 + 1) = v85;
          v88 = (v87 >> 8) ^ (v86 >> 19) ^ v87 ^ v86;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72) = v86;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v72 + 4) = v88;
          LODWORD(v72) = v88 & 0x7FFFFFFF;
          *((_QWORD*)&v89 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v89 = (double)(unsigned int)v72 / 0x1.fffffffc00000p+30;
          *(_QWORD*)&v90 = __PAIR64__(LODWORD(v178), LODWORD(v184));
          *(float*)&v89 = *(double*)&v89;
          *(float*)&v89 = *(float*)&v89 + -0x1.0000000000000p-1f;
          *((_QWORD*)&v90 + 1) = LODWORD(v89);
          v188 = v90;
          result = PhysicsObject_10fa360(v71, (float32x4_t*)&v188, v89, v90,
                                         v178, v184),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v148 =
              COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v151 =
              COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
          v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        }
      }
      v92 = v64[176];
      if (v92 != 0 &&
          ((unsigned int)strcmp(v64[176], "Loc_L_Shield") == 0 ||
           (_DWORD)(result = (_QWORD*)strcmp(v92, "Loc_R_Shield")) == 0)) {
        result = (_QWORD*)GameRoutine_10f9f00((__int64)v8, v8[60], v93, v94,
                                              v95, v96, v97),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        if (result != nullptr) {
          v98 = result;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v99 = game_map_MapRandom_instance__ptr[0];
          v100 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          v101 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v102 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                 (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v99 + 1) = v100;
          v103 = (v102 >> 8) ^ (v101 >> 19) ^ v102 ^ v101;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99) = v101;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99 + 4) = v103;
          v104 = v103 & 0x7FFFFFFF;
          *((_QWORD*)&v105 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v105 = (double)v104 / 0x1.fffffffc00000p+30;
          *(float*)&v105 = *(double*)&v105;
          *(float*)&v105 = *(float*)&v105 + -0x1.0000000000000p-1f;
          v185 = v105;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v106 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99);
          v107 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99 + 4);
          v108 = *(_DWORD*)v99 ^ (*(_DWORD*)v99 << 11);
          *(_DWORD*)v99 = *((_DWORD*)v99 + 1);
          *((_DWORD*)v99 + 1) = v106;
          v109 = (v108 >> 8) ^ (v107 >> 19) ^ v108 ^ v107;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99) = v107;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99 + 4) = v109;
          v110 = v109 & 0x7FFFFFFF;
          *((_QWORD*)&v111 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v111 = (double)v110 / 0x1.fffffffc00000p+30;
          *(float*)&v111 = *(double*)&v111;
          *(float*)&v111 = *(float*)&v111 + -0x1.0000000000000p-1f;
          v179 = v111;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v112 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99);
          v113 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99 + 4);
          v114 = *(_DWORD*)v99 ^ (*(_DWORD*)v99 << 11);
          *(_DWORD*)v99 = *((_DWORD*)v99 + 1);
          *((_DWORD*)v99 + 1) = v112;
          v115 = (v114 >> 8) ^ (v113 >> 19) ^ v114 ^ v113;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99) = v113;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v99 + 4) = v115;
          LODWORD(v99) = v115 & 0x7FFFFFFF;
          *((_QWORD*)&v116 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v116 = (double)(unsigned int)v99 / 0x1.fffffffc00000p+30;
          *(_QWORD*)&v117 = __PAIR64__(LODWORD(v179), LODWORD(v185));
          *(float*)&v116 = *(double*)&v116;
          *(float*)&v116 = *(float*)&v116 + -0x1.0000000000000p-1f;
          *((_QWORD*)&v117 + 1) = LODWORD(v116);
          v188 = v117;
          result = PhysicsObject_10fa360(v98, (float32x4_t*)&v188, v116, v117,
                                         v179, v185),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v148 =
              COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v151 =
              COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
          v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        }
      }
      v119 = v64[177];
      if (v119 != 0 &&
          ((unsigned int)strcmp(v64[177], "Loc_L_Shield") == 0 ||
           (_DWORD)(result = (_QWORD*)strcmp(v119, "Loc_R_Shield")) == 0)) {
        result = (_QWORD*)GameRoutine_10f9f00((__int64)v8, v8[61], v120, v121,
                                              v122, v123, v124),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        if (result != nullptr) {
          v125 = result;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v126 = game_map_MapRandom_instance__ptr[0];
          v127 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          v128 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v129 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                 (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v126 + 1) = v127;
          v130 = (v129 >> 8) ^ (v128 >> 19) ^ v129 ^ v128;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126) = v128;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126 + 4) = v130;
          v131 = v130 & 0x7FFFFFFF;
          *((_QWORD*)&v132 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v132 = (double)v131 / 0x1.fffffffc00000p+30;
          *(float*)&v132 = *(double*)&v132;
          *(float*)&v132 = *(float*)&v132 + -0x1.0000000000000p-1f;
          v186 = v132;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v133 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126);
          v134 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126 + 4);
          v135 = *(_DWORD*)v126 ^ (*(_DWORD*)v126 << 11);
          *(_DWORD*)v126 = *((_DWORD*)v126 + 1);
          *((_DWORD*)v126 + 1) = v133;
          v136 = (v135 >> 8) ^ (v134 >> 19) ^ v135 ^ v134;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126) = v134;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126 + 4) = v136;
          v137 = v136 & 0x7FFFFFFF;
          *((_QWORD*)&v138 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v138 = (double)v137 / 0x1.fffffffc00000p+30;
          *(float*)&v138 = *(double*)&v138;
          *(float*)&v138 = *(float*)&v138 + -0x1.0000000000000p-1f;
          v180 = v138;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v139 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126);
          v140 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126 + 4);
          v141 = *(_DWORD*)v126 ^ (*(_DWORD*)v126 << 11);
          *(_DWORD*)v126 = *((_DWORD*)v126 + 1);
          *((_DWORD*)v126 + 1) = v139;
          v142 = (v141 >> 8) ^ (v140 >> 19) ^ v141 ^ v140;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126) = v140;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v126 + 4) = v142;
          LODWORD(v126) = v142 & 0x7FFFFFFF;
          *((_QWORD*)&v143 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v143 = (double)(unsigned int)v126 / 0x1.fffffffc00000p+30;
          *(_QWORD*)&v144 = __PAIR64__(LODWORD(v180), LODWORD(v186));
          *(float*)&v143 = *(double*)&v143;
          *(float*)&v143 = *(float*)&v143 + -0x1.0000000000000p-1f;
          *((_QWORD*)&v144 + 1) = LODWORD(v143);
          v188 = v144;
          result = PhysicsObject_10fa360(v125, (float32x4_t*)&v188, v143, v144,
                                         v180, v186),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v148 =
              COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v151 =
              COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
          v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        }
      }
      v146 = v64[178];
      if (v146 != 0 &&
          ((unsigned int)strcmp(v64[178], "Loc_L_Shield") == 0 ||
           (_DWORD)(result = (_QWORD*)strcmp(v146, "Loc_R_Shield")) == 0)) {
        result = (_QWORD*)GameRoutine_10f9f00((__int64)v8, v8[62], v147, v148,
                                              v149, v150, v151),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d4", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v148 = COERCE_AS(__typeof__(v148), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(double, "d4", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v97 = COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
        if (result != nullptr) {
          v152 = result;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v153 = game_map_MapRandom_instance__ptr[0];
          v154 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          v155 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v156 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                 (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v153 + 1) = v154;
          v157 = (v156 >> 8) ^ (v155 >> 19) ^ v156 ^ v155;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153) = v155;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153 + 4) = v157;
          v158 = v157 & 0x7FFFFFFF;
          *((_QWORD*)&v159 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v159 = (double)v158 / 0x1.fffffffc00000p+30;
          *(float*)&v159 = *(double*)&v159;
          *(float*)&v159 = *(float*)&v159 + -0x1.0000000000000p-1f;
          v187 = v159;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v160 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153);
          v161 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153 + 4);
          v162 = *(_DWORD*)v153 ^ (*(_DWORD*)v153 << 11);
          *(_DWORD*)v153 = *((_DWORD*)v153 + 1);
          *((_DWORD*)v153 + 1) = v160;
          v163 = (v162 >> 8) ^ (v161 >> 19) ^ v162 ^ v161;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153) = v161;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153 + 4) = v163;
          v164 = v163 & 0x7FFFFFFF;
          *((_QWORD*)&v165 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v165 = (double)v164 / 0x1.fffffffc00000p+30;
          *(float*)&v165 = *(double*)&v165;
          *(float*)&v165 = *(float*)&v165 + -0x1.0000000000000p-1f;
          v181 = v165;
          nn_os_LockMutex(&game_g_random_mutex),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(double, "d4", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(double, "d4", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(double, "d4", "=w"));
          v166 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153);
          v167 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153 + 4);
          v168 = *(_DWORD*)v153 ^ (*(_DWORD*)v153 << 11);
          *(_DWORD*)v153 = *((_DWORD*)v153 + 1);
          *((_DWORD*)v153 + 1) = v166;
          v169 = (v168 >> 8) ^ (v167 >> 19) ^ v168 ^ v167;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153) = v167;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v153 + 4) = v169;
          LODWORD(v153) = v169 & 0x7FFFFFFF;
          *((_QWORD*)&v170 +
            1) =
              LANES128_OF(nn_os_UnlockMutex(&game_g_random_mutex)).n128_u64[1],
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d4", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(double, "d4", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(double, "d4", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v97 =
                COERCE_AS(__typeof__(v97), PSEUDO_REGISTER(double, "d4", "=w"));
          *(double*)&v170 = (double)(unsigned int)v153 / 0x1.fffffffc00000p+30;
          *(_QWORD*)&v171 = __PAIR64__(LODWORD(v181), LODWORD(v187));
          *(float*)&v170 = *(double*)&v170;
          *(float*)&v170 = *(float*)&v170 + -0x1.0000000000000p-1f;
          *((_QWORD*)&v171 + 1) = LODWORD(v170);
          v188 = v171;
          return PhysicsObject_10fa360(v152, (float32x4_t*)&v188, v170, v171,
                                       v181, v187);
        }
      }
    }
  }
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda5_Invoke(
    __int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v2 + 40);
    if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
      return GameRoutine_10b5e70(*(_QWORD*)(v4 + 144),
                                 *(_DWORD*)(*(_QWORD*)a2 + 32LL));
    }
  }
  return result;
}

float game_character_CharacterObservable_CharacterObservable_lambda6_Invoke(
    __int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float result;
  __int64 v11;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    v4 = *a2;
    if (*(_QWORD*)(v3 + 8) != -1 && *(_QWORD*)(v2 + 40) != 0 &&
        ((*(_BYTE*)(v4 + 61) & 1) != 0 || GameData_21ec7b0 == 0 ||
         (result = *(float*)(GameData_21ec7b0 + 180)) <=
             0x1.8000000000000p+0f)) {
      v6 = *(_QWORD*)(v2 + 152);
      v7 = *(_QWORD*)(v2 + 160);
      *(_BYTE*)(v2 + 176) = 1;
      while (v6 != v7) {
        if (*(_DWORD*)v6 != 0) {
          v8 = *(_QWORD*)(v6 + 16);
          if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
            goto LABEL_8;
          }
          v11 = v4;
          v9 = *(_QWORD*)(v6 + 64);
          if (v9 == 0) {
            GameRoutine_60a310_alt1(),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
          }
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v11),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
          if ((*(_DWORD*)v6 & 0x80000000) != 0) {
          LABEL_8:
            *(_DWORD*)v6 = 0;
          }
        }
        v6 += 80;
      }
      *(_BYTE*)(v2 + 176) = 0;
    }
  }
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda7_Invoke(
    __int64 result, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  float v11;
  const char* v12;
  __int64 v13;
  struct {
    __int64 v14;
    int v15;
  } v14_;

  if (GameData_21d92e0 != 5) {
    v5 = *(_QWORD*)(result + 8);
    if (*(_BYTE*)(v5 + 417) != 0) {
      v6 = *(_QWORD*)(v5 + 32);
      if (v6 != 0) {
        v7 = *a2;
        v8 = *(_QWORD*)(v5 + 40);
        if (*(_QWORD*)(v6 + 8) != -1 && v8 != 0) {
          v10 = *(_QWORD*)(v8 + 136);
          v11 = *(float*)(v7 + 56);
          if ((*(_BYTE*)(v7 + 32) & 1) != 0) {
            v12 = *(const char**)(v7 + 48);
          }
          else {
            v12 = (const char*)(v7 + 33);
          }
          if (GameData_21ec7b0 == 0 ||
              (v13 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
              (*(_BYTE*)(v13 + 113) & 0x80) == 0) {
            result = snd_isActive_100100_alt1((__int64*)(v10 + 104));
            if ((result & 1) == 0) {
              CharacterSound_1095750_alt2((void*)((__int64)&v14_.v14), v10,
                                          "V_AV_<VoiceID>_<Arg>", v12, v11);
              GameRoutine_112180_alt1(v10 + 104, (__int64)&v14_.v14);
              v14_.v14 = 0;
              v14_.v15 = 0x2000;
              return GameRoutine_112180_alt1((__int64)&v14_.v14, v10 + 104);
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda8_Invoke(
    __int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  int v7;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v2 + 40);
    if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
      v6 = *(_QWORD*)(v4 + 104);
      if (v6 != 0) {
        if (*(_BYTE*)(*(_QWORD*)a2 + 32LL) != 0) {
          v7 = 0;
        }
        else {
          v7 = 32;
        }
        *(_DWORD*)(v6 + 56) = *(_DWORD*)(v6 + 56) & 0xFFFFFFDF | v7;
      }
    }
  }
  return result;
}

void game_character_CharacterObservable_CharacterObservable_lambda9_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 40);
    v4 = *(_QWORD*)(v2 + 8) == -1 || v3 == 0;
    if (!v4 && *(_DWORD*)(v3 + 384) == 0) {
      if (GameData_21d92e0 != 2) {
        goto LABEL_17;
      }
      v5 = *(_QWORD*)(v3 + 392);
      v6 = *(_QWORD*)(v3 + 400);
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                  memory_order_relaxed);
        v7 = *(_DWORD*)(v5 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      else {
        v7 = *(_DWORD*)(v5 + 11784);
      }
      if (v7 > 0x1A) {
        goto LABEL_17;
      }
      if (((1 << v7) & 0x410C) != 0) {
        *(_DWORD*)(*(_QWORD*)(v3 + 104) + 212LL) = 0;
        return;
      }
      if (((1 << v7) & 0x5000080) != 0) {
        *(_DWORD*)(*(_QWORD*)(v3 + 104) + 212LL) = 0;
      }
      else {
      LABEL_17:
        *(_DWORD*)(v3 + 384) = 1;
      }
    }
  }
}

char** game_character_CharacterObservable_CharacterObservable_lambda10_Invoke(
    char** result, __int64* a2)
{
  char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;

  v2 = result[1];
  v3 = *((_QWORD*)v2 + 4);
  if (v3 != 0) {
    v4 = *a2;
    v5 = *((_QWORD*)v2 + 5);
    if (*(_QWORD*)(v3 + 8) != -1 && v5 != 0) {
      v7 = *(_QWORD*)(v5 + 112);
      v8 = 512;
      v9 = (float)*(int*)(v4 + 32) * 0.1f;
      *(float*)(v7 + 148) = v9;
      if (v9 < 0.5f) {
        v8 = 508;
      }
      *(_DWORD*)(v7 + 152) = *(_DWORD*)(*(_QWORD*)GameData_212d270 + v8);
      if (*(_BYTE*)(v4 + 36) == 1) {
        v10 = (float)*(int*)(v4 + 40) * 0.1f;
        v11 = (float)*(int*)(v4 + 44) * 0.1f;
        v12 = (float)*(int*)(v4 + 48) * 0.1f;
        v13 = (float)*(int*)(v4 + 52);
      }
      else {
        result = GameRoutine_108c640(*(_DWORD*)(*(_QWORD*)(v5 + 72) + 120LL));
        v10 = *((float*)result + 5);
        v11 = *((float*)result + 6);
        v12 = *((float*)result + 7);
        v13 = *((float*)result + 8);
      }
      *(float*)(v7 + 460) = v10;
      *(float*)(v7 + 472) = v11;
      *(float*)(v7 + 484) = v12;
      *(float*)(v7 + 496) = v13;
    }
  }
  return result;
}

void game_character_CharacterObservable_CharacterObservable_lambda11_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  float v8;

  if (GameData_21d92e0 != 5) {
    v2 = *(_QWORD*)(a1 + 8);
    v3 = *(_QWORD*)(v2 + 32);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v2 + 40);
      if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
        v6 = *(_QWORD*)(v4 + 88);
        if (v6 != 0) {
          v7 = *(_DWORD*)(*(_QWORD*)a2 + 32LL);
          v8 = -1.0;
          if (v7 == 5) {
            v8 = 0.0;
          }
          GameRoutine_10b2280(v6, v7, v8);
        }
      }
    }
  }
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda13_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    v4 = *a2;
    if (*(_QWORD*)(v3 + 8) != -1 && *(_QWORD*)(v2 + 40) != 0) {
      v6 = *(_QWORD*)(v2 + 120);
      v7 = *(_QWORD*)(v2 + 128);
      *(_BYTE*)(v2 + 144) = 1;
      while (v6 != v7) {
        if (*(_DWORD*)v6 != 0) {
          v8 = *(_QWORD*)(v6 + 16);
          if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
            goto LABEL_7;
          }
          v10 = v4;
          v9 = *(_QWORD*)(v6 + 64);
          if (v9 == 0) {
            GameRoutine_60a310(0);
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(
              v9, &v10);
          if ((*(_DWORD*)v6 & 0x80000000) != 0) {
          LABEL_7:
            *(_DWORD*)v6 = 0;
          }
        }
        v6 += 80;
      }
      *(_BYTE*)(v2 + 144) = 0;
    }
  }
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda14_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    v4 = *a2;
    if (*(_QWORD*)(v3 + 8) != -1 && *(_QWORD*)(v2 + 40) != 0) {
      v6 = *(_QWORD*)(v2 + 56);
      v7 = *(_QWORD*)(v2 + 64);
      *(_BYTE*)(v2 + 80) = 1;
      while (v6 != v7) {
        if (*(_DWORD*)v6 != 0) {
          v8 = *(_QWORD*)(v6 + 16);
          if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
            goto LABEL_7;
          }
          v10 = v4;
          v9 = *(_QWORD*)(v6 + 64);
          if (v9 == 0) {
            GameRoutine_60a310(0);
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(
              v9, &v10);
          if ((*(_DWORD*)v6 & 0x80000000) != 0) {
          LABEL_7:
            *(_DWORD*)v6 = 0;
          }
        }
        v6 += 80;
      }
      *(_BYTE*)(v2 + 80) = 0;
    }
  }
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda15_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  float v8;
  float v9;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 32);
  if (v4 == 0 || ((v5 = *(_QWORD*)(v4 + 8), v6 = *(_QWORD*)(v2 + 40), v5 != -1)
                      ? (v7 = v6 == 0)
                      : (v7 = true),
                  v7)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v6 + 340) & 1) != 0) {
    return result;
  }
  v8 = *(float*)(v3 + 32);
  v9 = 0.0;
  if (v8 >= 0.0) {
    v9 = 1.0;
    if (v8 <= 1.0) {
      v9 = *(float*)(v3 + 32);
    }
  }
  result = game_combat_CombatSettings_RadialBlur_t_Play(
      *(_QWORD*)GameData_212d270 + 424LL, v9);
  *(_BYTE*)(v2 + 384) = v9 > 0.0;
  return result;
}

void game_character_CharacterObservable_CharacterObservable_lambda16_Invoke(
    __int64 a1, __int64 a2)
{
  GameRoutine_10cd6a0(
      *(char***)(a1 + 8), (char*)(*(_QWORD*)a2 + 40LL),
      (float)((float)*(int*)(*(_QWORD*)a2 + 32LL) * -0x1.99999a0000000p-4f) +
          0x1.0000000000000p+0f,
      (float)*(int*)(*(_QWORD*)a2 + 36LL) / 0x1.e000000000000p+5f);
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda17_Invoke(
    __int64 result, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  float v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  int v18;
  __int64 v19;
  __int64 v20;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff48,
                                  memory_order_acquire);
  v3 = GameData_212ff40;
  if ((explicit & 1) == 0) {
    v19 = a2;
    v20 = result;
    v18 = __cxa_guard_acquire(GameData_212ff48);
    v3 = GameData_212ff40;
    a2 = v19;
    result = v20;
    if (v18 != 0) {
      *GameData_212ff40 = wld_Crc32(0, "ClothWindModule", 15);
      __cxa_guard_release(GameData_212ff48);
      v3 = GameData_212ff40;
      a2 = v19;
      result = v20;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v9 = *(float*)(v8 + 44);
          v10 = **(_QWORD**)(result + 8);
          v11 = *(_DWORD*)(v10 + 48);
          v12 = *(_QWORD*)(v10 + 40);
          *(_QWORD*)(v8 + 56) = *(_QWORD*)(v10 + 32);
          *(_QWORD*)(v8 + 64) = v12;
          *(_DWORD*)(v8 + 72) = v11;
          v13 = **(_DWORD**)(result + 16);
          if (v9 <= 0.0) {
            v17 = 0.0;
            if (*(_BYTE*)(v8 + 32) != 0) {
              v17 = 1.0;
            }
          }
          else {
            v14 = 0.0;
            v15 = fmaxf(*(float*)(v8 + 36) / v9, 0.0);
            if (*(_BYTE*)(v8 + 32) != 0) {
              v14 = 1.0;
            }
            v16 = fminf(v15, 1.0);
            v17 = (float)(v14 * v16) +
                  (float)(*(float*)(v8 + 40) * (float)(1.0 - v16));
          }
          *(float*)(v8 + 40) = v17;
          *(_DWORD*)(v8 + 36) = 0;
          *(_DWORD*)(v8 + 48) = v13;
          *(_BYTE*)(v8 + 32) = 1;
          *(_DWORD*)(v8 + 44) = 1045220557;
        }
      }
      return result;
    }
  }
  return result;
}

float game_character_CharacterObservable_CharacterObservable_lambda18_Invoke(
    __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  float* v9;
  float result;
  int v11;
  __int64 v12;
  __int64 v13;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec88,
                                  memory_order_acquire);
  v3 = GameData_212ec80;
  if ((explicit & 1) == 0) {
    v12 = a2;
    v13 = a1;
    v11 = __cxa_guard_acquire_alt1((__int64)GameData_212ec88),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v3 = GameData_212ec80;
    a2 = v12;
    a1 = v13;
    if (v11 != 0) {
      *GameData_212ec80 = wld_Crc32_alt1(0, "ClothModule", 0xBu),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release_alt1((__int64)GameData_212ec88),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      v3 = GameData_212ec80;
      a2 = v12;
      a1 = v13;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v9 = *(float**)(a1 + 8);
          result = *v9;
          *(float*)(v8 + 56) = *v9;
        }
      }
      return result;
    }
  }
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda19_Invoke(
    __int64 result, __int64* a2, __n128 a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v10;
  int v11;
  long double v12;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  v5 = *(_QWORD*)(result + 8);
  v6 = *(_QWORD*)(v5 + 32);
  if (v6 != 0) {
    v7 = *a2;
    v8 = *(_QWORD*)(v5 + 40);
    if (*(_QWORD*)(v6 + 8) != -1 && v8 != 0) {
      v10 = *(_BYTE*)(v7 + 33);
      v11 = *(unsigned __int8*)(v7 + 32);
      if ((v10 & 1) != 0) {
        result = GameData_21ec7b0;
        if (GameData_21ec7b0 == 0) {
          return result;
        }
        v14_.v14[0] = GameData_200ece8;
        v14_.v14[1] = v8;
        v14_.v14[2] = v11 ^ 1u;
        v14_.v15 = v14_.v14;
        *(__n128*)&v12 = GameRoutine_106c820((_QWORD*)GameData_21ec7b0,
                                             (__int64)v14_.v14, a3);
        result = (__int64)v14_.v15;
        if (v14_.v15 == v14_.v14) {
          v13 = 32;
        }
        else {
          if (v14_.v15 == nullptr) {
            return result;
          }
          v13 = 40;
        }
        return (*(__int64 (**)(void*))(*v14_.v15 + v13))(v14_.v15);
      }
      else if ((*(_BYTE*)(v8 + 341) & 8) == 0) {
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + 289LL) = v11 ^ 1;
      }
    }
  }
  return result;
}

void game_character_CharacterObservable_CharacterObservable_lambda20_Invoke(
    long double a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  void* v6;

  v3 = *a3;
  v4 = *(_DWORD*)(*a3 + 32);
  if (*GameData_212d168 != 3) {
    if (v4 != 2) {
      return;
    }
    LODWORD(a1) = *(_DWORD*)(v3 + 36);
    goto LABEL_10;
  }
  LODWORD(a1) = *(_DWORD*)(v3 + 36);
  switch (v4) {
  case 2:
  LABEL_10:
    if (game_ProcFadeView_instance_ != 0) {
      GameRoutine_809ba0(*(float*)&a1);
    }
    return;
  case 1:
    v5 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v6 = GameData_212c958;
      goto LABEL_7;
    }
    break;
  case 0:
    v5 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v6 = GameData_212c960;
    LABEL_7:
      GameRoutine_809dc0(v5, v6, a1);
    }
    break;
  default:
    break;
  }
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda21_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 216);
  v5 = *(_QWORD*)(v2 + 224);
  *(_BYTE*)(v2 + 240) = 1;
  while (v4 != v5) {
    if (*(_DWORD*)v4 != 0) {
      v6 = *(_QWORD*)(v4 + 16);
      if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
        goto LABEL_2;
      }
      v8 = v3;
      v7 = *(_QWORD*)(v4 + 64);
      if (v7 == 0) {
        GameRoutine_60a310(0);
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v8);
      if ((*(_DWORD*)v4 & 0x80000000) != 0) {
      LABEL_2:
        *(_DWORD*)v4 = 0;
      }
    }
    v4 += 80;
  }
  *(_BYTE*)(v2 + 240) = 0;
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda22_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 248);
  v5 = *(_QWORD*)(v2 + 256);
  *(_BYTE*)(v2 + 272) = 1;
  while (v4 != v5) {
    if (*(_DWORD*)v4 != 0) {
      v6 = *(_QWORD*)(v4 + 16);
      if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
        goto LABEL_2;
      }
      v8 = v3;
      v7 = *(_QWORD*)(v4 + 64);
      if (v7 == 0) {
        GameRoutine_60a310(0);
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v8);
      if ((*(_DWORD*)v4 & 0x80000000) != 0) {
      LABEL_2:
        *(_DWORD*)v4 = 0;
      }
    }
    v4 += 80;
  }
  *(_BYTE*)(v2 + 272) = 0;
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda23_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 280);
  v5 = *(_QWORD*)(v2 + 288);
  *(_BYTE*)(v2 + 304) = 1;
  while (v4 != v5) {
    if (*(_DWORD*)v4 != 0) {
      v6 = *(_QWORD*)(v4 + 16);
      if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
        goto LABEL_2;
      }
      v8 = v3;
      v7 = *(_QWORD*)(v4 + 64);
      if (v7 == 0) {
        GameRoutine_60a310(0);
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v8);
      if ((*(_DWORD*)v4 & 0x80000000) != 0) {
      LABEL_2:
        *(_DWORD*)v4 = 0;
      }
    }
    v4 += 80;
  }
  *(_BYTE*)(v2 + 304) = 0;
  *(_BYTE*)(v2 + 385) = *(_BYTE*)(v3 + 32);
  return result;
}

void game_character_CharacterObservable_CharacterObservable_lambda24_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  atomic_uchar* v6;
  unsigned __int8 explicit;
  int* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  _BYTE* v24;
  bool v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD v54[2];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 40);
    if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
      v5 = *(_QWORD*)(v3 + 8);
      v6 = (atomic_uchar*)GameData_2130058;
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130058,
                                      memory_order_acquire);
      v8 = GameData_2130050;
      if ((explicit & 1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)GameData_2130058) != 0) {
        *v8 = wld_Crc32_alt1(0, "CharacterIllusion", 0x11u);
        __cxa_guard_release_alt1((__int64)GameData_2130058);
      }
      v9 = *(_QWORD*)(v5 + 512);
      v10 = v9;
      do {
        if (v10 == *(_QWORD*)(v5 + 504)) {
          goto LABEL_14;
        }
        v11 = *(_DWORD*)(v10 - 16);
        v10 -= 16;
        v9 -= 16;
      } while (v11 != *v8);
      if (*(_QWORD*)(v5 + 512) != v9) {
        v12 = *(_QWORD**)(v9 + 8);
        if (v12 != nullptr) {
          goto LABEL_66;
        }
      }
    LABEL_14:
      v13 = *(_QWORD*)(v3 + 8);
      nn_os_LockMutex_alt1((__int64)GameData_212df28);
      v14 = (__int64*)fw_memory_g_heap_manager_ptr;
      v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      GameRoutine_10965c0_alt1((__int64)v12, v13);
      v15 = GameData_2130060[0];
      v12[7] = 0;
      v12[8] = 0;
      v12[9] = 0;
      *v12 = v15 + 2;
      if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)GameData_2130058) != 0) {
        *v8 = wld_Crc32_alt1(0, "CharacterIllusion", 0x11u);
        __cxa_guard_release_alt1((__int64)GameData_2130058);
      }
      v16 = *v8;
      v17 = *(_QWORD*)(v13 + 504);
      v18 = *(_QWORD*)(v13 + 512);
      v19 = v18;
      LODWORD(v54[0]) = v16;
      v54[1] = v12;
      while (v19 != v17) {
        v20 = *(_DWORD*)(v19 - 16);
        v19 -= 16;
        if (v20 == v16) {
          if ((v12[2] & 1) != 0) {
            goto LABEL_33;
          }
          goto LABEL_27;
        }
      }
      if (v17 == v18 &&
          (unsigned __int64)(*(_QWORD*)(v13 + 520) - v17) <= 0x6F) {
        v21 = fw_memory_HeapManager_Allocate_alt1(*v14, 112, 16, 0);
        *(_QWORD*)(v13 + 504) = v21;
        *(_QWORD*)(v13 + 512) = v21;
        *(_QWORD*)(v13 + 520) = v21 + 112;
        if (v18 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v14 + v22, v17);
        }
      }
      GameRoutine_98f140_alt1((__int64*)(v13 + 504), v54);
      if ((v12[2] & 1) == 0) {
      LABEL_27:
        *((_BYTE*)v12 + 16) = 1;
        *((_BYTE*)v12 + 17) &= ~2u;
        *((_BYTE*)v12 + 18) &= ~2u;
        *((_BYTE*)v12 + 19) &= ~2u;
        *((_BYTE*)v12 + 20) &= ~2u;
        v23 = (_BYTE*)v12[1];
        v23[632] = 0;
        v23[664] = 0;
        v23[696] = 0;
        v23[728] = 0;
        (*(void (**)(_QWORD*))(*v12 + 64LL))(v12);
        v24 = (_BYTE*)v12[1];
        v25 = v24[300] == 3 && v24[301] == 3;
        if (v25 || v24[302] == 1) {
          (*(void (**)(_QWORD*))(*v12 + 72LL))(v12);
        }
      }
    LABEL_33:
      v26 = *(_QWORD**)(v13 + 536);
      v27 = *(_QWORD*)(v13 + 544);
      if ((unsigned __int64)v26 >= v27) {
        v29 = *(_QWORD*)(v13 + 528);
        v30 = (char*)v26 - v29;
        v31 = ((__int64)v26 - v29) >> 3;
        v32 = v31 + 1;
        if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
          goto LABEL_71;
        }
        v33 = v27 - v29;
        if (v33 >> 2 > v32) {
          v32 = v33 >> 2;
        }
        if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
          v34 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v34 = v32;
        }
        if (v34 != 0) {
          if (v34 >> 61 != 0) {
            goto LABEL_72;
          }
          v35 = fw_memory_HeapManager_Allocate_alt1(*v14, 8 * v34, 16, 0);
        }
        else {
          v35 = 0;
        }
        v36 = v35 + 8 * v34;
        v37 = (unsigned __int64)v26 - v29;
        v38 = (__int64)&v30[v35 + -8 * v31];
        *(_QWORD*)&v30[v35] = v12;
        v28 = (__int64)&v30[v35 + 8];
        memcpy_alt1(v38, v29, v37);
        *(_QWORD*)(v13 + 528) = v38;
        *(_QWORD*)(v13 + 536) = v28;
        *(_QWORD*)(v13 + 544) = v36;
        if (v29 != 0) {
          v39 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v14 + v39, v29);
        }
      }
      else {
        *v26 = v12;
        v28 = (__int64)(v26 + 1);
      }
      *(_QWORD*)(v13 + 536) = v28;
      v40 = *(_QWORD**)(v13 + 560);
      v41 = *(_QWORD*)(v13 + 568);
      if ((unsigned __int64)v40 < v41) {
        *v40 = v12;
        v42 = (__int64)(v40 + 1);
      LABEL_65:
        *(_QWORD*)(v13 + 560) = v42;
        GameRoutine_a8c0c0_alt1(v13);
        *(_BYTE*)(v13 + 576) = 1;
        nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
      LABEL_66:
        CharacterIllusion_1103820_alt1(v12);
        return;
      }
      v43 = *(_QWORD*)(v13 + 552);
      v44 = (char*)v40 - v43;
      v45 = ((__int64)v40 - v43) >> 3;
      v46 = v45 + 1;
      if ((unsigned __int64)(v45 + 1) >> 61 == 0) {
        v47 = v41 - v43;
        if (v47 >> 2 > v46) {
          v46 = v47 >> 2;
        }
        if ((unsigned __int64)v47 >= 0x7FFFFFFFFFFFFFF8LL) {
          v48 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v48 = v46;
        }
        if (v48 == 0) {
          v49 = 0;
        LABEL_61:
          v50 = v49 + 8 * v48;
          v51 = (unsigned __int64)v40 - v43;
          v52 = (__int64)&v44[v49 + -8 * v45];
          *(_QWORD*)&v44[v49] = v12;
          v42 = (__int64)&v44[v49 + 8];
          memcpy_alt1(v52, v43, v51);
          *(_QWORD*)(v13 + 552) = v52;
          *(_QWORD*)(v13 + 560) = v42;
          *(_QWORD*)(v13 + 568) = v50;
          if (v43 != 0) {
            v53 = 128;
            if (*(_QWORD*)(*v14 + 200) == 0) {
              v53 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v14 + v53, v43);
          }
          goto LABEL_65;
        }
        if (v48 >> 61 == 0) {
          v49 = fw_memory_HeapManager_Allocate_alt1(*v14, 8 * v48, 16, 0);
          goto LABEL_61;
        }
      LABEL_72:
        GameRoutine_60a210_alt1();
      }
    LABEL_71:
      GameRoutine_98f290_alt1();
    }
  }
}

void game_character_CharacterObservable_CharacterObservable_lambda25_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned __int8 explicit;
  int* v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 40);
    if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
      v5 = *(_QWORD*)(v3 + 8);
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130058,
                                      memory_order_acquire);
      v7 = GameData_2130050;
      if ((explicit & 1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)GameData_2130058) != 0) {
        *v7 = wld_Crc32_alt1(0, "CharacterIllusion", 0x11u);
        __cxa_guard_release_alt1((__int64)GameData_2130058);
      }
      v8 = *(_QWORD*)(v5 + 512);
      for (i = v8; i != *(_QWORD*)(v5 + 504); i -= 16) {
        v10 = *(_DWORD*)(i - 16);
        v8 -= 16;
        if (v10 == *v7) {
          if (*(_QWORD*)(v5 + 512) != v8) {
            v11 = *(_QWORD*)(v8 + 8);
            if (v11 != 0) {
              v12 = *(_QWORD**)(v11 + 56);
              v13 = *(_QWORD**)(v11 + 64);
              if (v12 != v13) {
                v14 = fw_memory_g_heap_manager_ptr;
                do {
                  v16 = (_QWORD*)*--v13;
                  v15 = v16;
                  *v13 = 0;
                  if (v16 != nullptr) {
                    CharacterIllusion_11032f0_alt1(v15);
                    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                      v17 = 128;
                    }
                    else {
                      v17 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v14 + v17,
                                                       (__int64)v15);
                  }
                } while (v13 != v12);
              }
              *(_QWORD*)(v11 + 64) = v12;
            }
          }
          return;
        }
      }
    }
  }
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda26_Invoke(
    __int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((GameData_21d92e0 & 0xFFFFFFFD) != 1) {
    v1 = *(_QWORD*)(result + 8);
    v2 = *(_QWORD*)(v1 + 32);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v1 + 40);
      if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
        return GameRoutine_10b5e70(*(_QWORD*)(v3 + 144), 1);
      }
    }
  }
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda27_Invoke(
    __int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((GameData_21d92e0 & 0xFFFFFFFD) != 1) {
    v1 = *(_QWORD*)(result + 8);
    v2 = *(_QWORD*)(v1 + 32);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v1 + 40);
      if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
        return GameRoutine_10b5e70(*(_QWORD*)(v3 + 144), 2);
      }
    }
  }
  return result;
}

__int64 game_character_CharacterObservable_CharacterObservable_lambda28_Invoke(
    __int64 result, int* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  int v6;
  __int64* v7;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  char v17;
  __int64 v18;
  char* v19;
  int v20;
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
  bool v31;
  __int64 i;
  __int64 v33;
  __int64 v34;
  struct {
    __int64 (**v35)();
    char v36;
    char gap9_[23];
    __int64 (***v37)();
  } v35_;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 == 0) {
    return result;
  }
  v4 = *(_QWORD**)(v2 + 40);
  if (*(_QWORD*)(v3 + 8) == -1 || v4 == nullptr) {
    return result;
  }
  v6 = *a2;
  v7 = (__int64*)(v2 + 424);
  if (*a2 != 869686455 && v6 != -1080537169) {
    v17 = snd_fnd_WeakHandle_isValid(v7);
    if ((v17 & 1) != 0) {
      v18 = snd_fnd_WeakHandle_get(v2 + 424);
      snd_Fade_Fade_10c830((__int64)&v35_.v35, 0x1.2c00000000000p+8f);
      (*(void (**)(__int64, __int64 (***)(void), _QWORD, double))(
          *(_QWORD*)(v18 - 5592) + 248LL))(v18 - 5592, &v35_.v35, 0, 0x0.0p+0);
      snd_Fade_Destroy_Fade(&v35_.v35);
    }
    goto LABEL_37;
  }
  if ((snd_fnd_WeakHandle_isValid(v7) & 1) != 0) {
    goto LABEL_37;
  }
  v9 = *(_QWORD*)(v2 + 32);
  if (v9 == 0) {
    goto LABEL_37;
  }
  v10 = *(_QWORD*)(v9 + 8);
  v11 = *(_QWORD**)(v2 + 40);
  if (v10 == -1 || v11 == nullptr) {
    goto LABEL_37;
  }
  v13 = v11[17];
  if (v13 == 0) {
    goto LABEL_37;
  }
  v14 = v11[49];
  v15 = v11[50];
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    v16 = *(_DWORD*)(v14 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt2(v15);
    }
  }
  else {
    v16 = *(_DWORD*)(v14 + 11784);
  }
  if (v16 <= 19) {
    if (v16 == 4) {
      v19 = "SE_ACT_LD_Move_Pegasus_WingFlapStart";
    }
    else {
      if (v16 != 5) {
        goto LABEL_37;
      }
      v19 = "SE_ACT_LD_Move_Dragon_WingFlapStart";
    }
    goto LABEL_34;
  }
  if (v16 != 20) {
    if (v16 == 33) {
      v19 = "SE_ACT_LD_Move_DragonH_WingFlapStart";
      goto LABEL_34;
    }
    if (v16 != 31) {
      goto LABEL_37;
    }
  }
  v19 = "SE_ACT_LD_Move_GiantBird_WingFlapStart";
LABEL_34:
  v20 = *(_DWORD*)(v13 + 128);
  *(_DWORD*)(v13 + 128) = 0;
  CharacterSound_1095750_alt2((void*)((__int64)&v35_.v35), v13, v19, nullptr,
                              0x1.0000000000000p+0f);
  if ((snd_fnd_WeakHandle_isValid((__int64*)(v2 + 424)) & 1) != 0) {
    v21 = snd_fnd_WeakHandle_get(v2 + 424);
    snd_Fade_Fade_10c830((__int64)&v35_.v35, 0x1.9000000000000p+6f);
    (*(void (**)(__int64, __int64 (***)(void), _QWORD, double))(
        *(_QWORD*)(v21 - 5592) + 248LL))(v21 - 5592, &v35_.v35, 0, 0x0.0p+0);
    snd_Fade_Destroy_Fade(&v35_.v35);
  }
  CharacterSound_1095750_alt2((void*)((__int64)&v35_.v35), v13,
                              "SE_ACT_LD_Move_Monster_RunLoop_lp", nullptr,
                              0x1.0000000000000p+0f);
  GameRoutine_112180_alt1(v2 + 424, (__int64)&v35_.v35);
  *(_DWORD*)(v13 + 128) = v20;
LABEL_37:
  if (game_108cee0(v6)) {
    GameRoutine_10b5e70(v4[18], 2);
    *(_BYTE*)(v4[8] + 156LL) = 0;
  }
  if (*(_BYTE*)(v2 + 384) == 1) {
    game_combat_CombatSettings_RadialBlur_t_Play(
        *(_QWORD*)GameData_212d270 + 424LL, 0x0.0p+0f);
    *(_BYTE*)(v2 + 384) = 0;
  }
  if (*(_BYTE*)(v2 + 385) == 1) {
    if (GameData_21ec7b0 != 0) {
      v22 = *(_QWORD*)(GameData_21ec7b0 + 128);
      if (v22 != 0 && *(_QWORD*)(v22 + 456) != 0) {
        *(_QWORD*)(v22 + 456) = 0;
        v23 = *(_QWORD*)(game_g_frame_clock + 13224);
        v24 = *(_QWORD*)(v23 + 48);
        v25 = *(_QWORD*)(v23 + 56);
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
          v26 = *(_QWORD*)(*(_QWORD*)(v24 + 8) + 128LL);
          if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
            std___1___shared_weak_count___release_weak_alt2(v25);
          }
        }
        else {
          v26 = *(_QWORD*)(*(_QWORD*)(v24 + 8) + 128LL);
        }
        if (*(_BYTE*)(v26 + 256) == 1) {
          *(_BYTE*)(v26 + 256) = 0;
        }
      }
    }
    *(_BYTE*)(v2 + 385) = 0;
  }
  result = game_108cee0(*(_DWORD*)(v4[9] + 116LL));
  if ((result & 1) != 0) {
    v27 = *(_QWORD*)(v2 + 392);
    v28 = *(_QWORD*)(v2 + 400);
    if (v27 != v28) {
      do {
        v29 = *(_QWORD*)(v27 + 8);
        if (v29 != 0) {
          v30 = *(_QWORD*)(v27 + 16);
          v31 = *(_QWORD*)(v29 + 8) == -1 || v30 == 0;
          if (!v31 && (*(_WORD*)(v30 + 136) & 1) == 0) {
            ProcInst_657a50(v30, 1);
          }
        }
        v27 += 24;
      } while (v27 != v28);
      v27 = *(_QWORD*)(v2 + 392);
      for (i = *(_QWORD*)(v2 + 400); i != v27; i -= 24) {
        v34 = *(_QWORD*)(i - 16);
        if (v34 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v34);
        }
      }
    }
    *(_QWORD*)(v2 + 400) = v27;
    v35_.v36 = 0;
    v35_.v35 = GameData_200b670;
    v35_.v37 = &v35_.v35;
    CharacterBuilder_1083e90(v4, (__int64)&v35_.v35);
    result = (__int64)v35_.v37;
    if (v35_.v37 == &v35_.v35) {
      v33 = 4;
    }
    else {
      if (v35_.v37 == nullptr) {
        return result;
      }
      v33 = 5;
    }
    return ((__int64 (*)(__int64))(*v35_.v37)[v33])((__int64)v35_.v37);
  }
  return result;
}

__int64 CharacterObservable_10d3a90(__int64 a1)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *(_QWORD*)result = GameData_200b670;
  *(_BYTE*)(result + 8) = *(_BYTE*)(a1 + 8);
  return result;
}

__int64 CharacterObservable_10d3ae0(__int64 result, __int64 a2)
{
  *(_QWORD*)a2 = GameData_200b670;
  *(_BYTE*)(a2 + 8) = *(_BYTE*)(result + 8);
  return result;
}

void CharacterObservable_10d3b20(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 j;
  int v8;
  __int64 v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v9 = a2;
    v8 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v9;
    if (v8 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v9;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 24);
          for (j = *(_QWORD*)(v5 + 32); v6 != j; v6 += 176) {
            *(_BYTE*)(v6 + 133) = 1;
          }
          *(_DWORD*)(v5 + 52) = 0;
        }
      }
      return;
    }
  }
}

float game_character_CharacterObservable_CallSignalClothBlendImpl_lambda1_Invoke(
    __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  float result;
  int v10;
  __int64 v11;
  __int64 v12;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec88,
                                  memory_order_acquire);
  v3 = GameData_212ec80;
  if ((explicit & 1) == 0) {
    v11 = a2;
    v12 = a1;
    v10 = __cxa_guard_acquire_alt1((__int64)GameData_212ec88),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v3 = GameData_212ec80;
    a2 = v11;
    a1 = v12;
    if (v10 != 0) {
      *GameData_212ec80 = wld_Crc32_alt1(0, "ClothModule", 0xBu),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release_alt1((__int64)GameData_212ec88),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      v3 = GameData_212ec80;
      a2 = v11;
      a1 = v12;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          result = *(float*)(v8 + 52);
          **(float**)(a1 + 8) = result;
        }
      }
      return result;
    }
  }
  return result;
}

__int64

game_character_CharacterObservable_CallSignalClothBlendImpl_lambda0_Invoke_10d4050(
    __int64 a1, float* a2)
{
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  _QWORD* v9;
  __int64 v11;
  struct {
    __int64 (**v13)();
    float v14;
    char gap12_[4];
    __int64 v15;
    char gap24_[8];
    __int64 (***v16)();
  } v13_;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v4 + 32);
  if (v5 != 0) {
    v6 = *a2;
    v7 = *(float*)(a1 + 16);
    v8 = *(float*)(a1 + 20);
    v9 = *(_QWORD**)(v4 + 40);
    if (*(_QWORD*)(v5 + 8) != -1 && v9 != nullptr) {
      v13_.v13 = GameData_200b7f0;
      v13_.v15 = a1 + 24;
      v13_.v16 = &v13_.v13;
      v13_.v14 = v7 + (float)((float)(v8 - v7) * v6);
      CharacterBuilder_1083e90(v9, (__int64)&v13_.v13);
      if (v13_.v16 == &v13_.v13) {
        v11 = 4;
        goto LABEL_10;
      }
      if (v13_.v16 != nullptr) {
        v11 = 5;
      LABEL_10:
        ((__int64 (*)(__int64))(*v13_.v16)[v11])((__int64)v13_.v16);
      }
    }
  }
  return 1;
}

float game_character_CharacterObservable_CallSignalClothBlendImpl_lambda0_Invoke(
    __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  float result;
  __int64 v21;
  int v22;
  __int64 v23;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec88,
                                  memory_order_acquire);
  v3 = GameData_212ec80;
  if ((explicit & 1) == 0) {
    v21 = a2;
    v23 = a1;
    v22 = __cxa_guard_acquire_alt1((__int64)GameData_212ec88),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    a1 = v23;
    a2 = v21;
    if (v22 != 0) {
      *v3 = wld_Crc32_alt1(0, "ClothModule", 0xBu),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release_alt1((__int64)GameData_212ec88),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      a1 = v23;
      a2 = v21;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  for (i = v4; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          v8 = *(unsigned __int8**)(a1 + 16);
          v9 = *v8;
          v10 = *((_QWORD*)v8 + 1);
          v11 = v9 & 1;
          v12 = v9 >> 1;
          v13 = *(_QWORD*)(v7 + 24);
          v14 = *(_QWORD*)(v7 + 32);
          if (v11 != 0) {
            v15 = *((_QWORD*)v8 + 1);
          }
          else {
            v15 = v12;
          }
          if (v15 != 0) {
            if (v13 == v14) {
              v16 = a1;
            }
            else {
              do {
                *(_BYTE*)(v13 + 133) = 0;
                v13 += 176;
              } while (v13 != v14);
              v8 = *(unsigned __int8**)(a1 + 16);
              v16 = a1;
              v17 = *v8;
              v10 = *((_QWORD*)v8 + 1);
              v11 = v17 & 1;
              v12 = v17 >> 1;
            }
            if (v11 != 0) {
              v18 = v10;
            }
            else {
              v18 = v12;
            }
            if (v11 != 0) {
              v19 = *((_QWORD*)v8 + 2);
            }
            else {
              v19 = (__int64)(v8 + 1);
            }
            GameRoutine_a59220_alt1((__int64*)(v7 + 24), v19, v18, 1),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
            a1 = v16;
          }
          else {
            for (; v13 != v14; v13 += 176) {
              *(_BYTE*)(v13 + 133) = 1;
            }
          }
          result = *(float*)(a1 + 8);
          *(float*)(v7 + 52) = result;
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
