#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_198c1e0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_c24fe0(_QWORD);
__int64 GameRoutine_c25240(_QWORD, _QWORD);
__int64 GameRoutine_c253a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_211d628[])();
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 wld_map_MapEffectPlacer_PlaceCommon(__int64 a1, __int64* a2, float a3);
__int64 wld_map_MapEffectPlacer_PlaceCommon_lambda0_Invoke(__int64 result);
__int64 wld_map_MapEffectPlacer_PlaceTagged_lambda0_Invoke(__int64 result);
__attribute__((swiftcall)) void wld_c2c890(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a1e70(_QWORD, float);
__int64 GameRoutine_14a3920(long double, long double);
__int64 GameRoutine_14a3a60(_QWORD, _QWORD, long double);
__int64 GameRoutine_98ed40(_QWORD);
__int64 GameRoutine_bd16c0(_QWORD, _QWORD);
__int64 GameRoutine_c26680(_QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 ObjectGroup_c24fe0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strcmp(long double);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__int64 wld_map_c23d20(_QWORD, _QWORD, _QWORD, long double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212d4a8;
extern __int64 (*GameData_211d6a8[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern int* GameData_212d4a0;
void __attribute__((noreturn)) String_60a250(_QWORD);
bool MapEffectPlacer_198c1e0_alt1(
    _QWORD* a1, __int64** a2, float32x4_t* a3,
    long double a4) __asm__("MapEffectPlacer_198c1e0");
void wld_map_MapEffectPlacer_PlaceTagged(_QWORD* a1, __int64 a2, __int64 a3,
                                         float a4);
__attribute__((swiftcall)) void
wld_c2c890_alt1(PSEUDO_X8, __int64, __int64,
                unsigned __int64) __asm__("wld_c2c890");
__int64** GameRoutine_14a1e70_alt1(__int64** result,
                                   float) __asm__("GameRoutine_14a1e70");
__int64*
GameRoutine_14a3a60_alt1(__int64*,
                         unsigned __int8*) __asm__("GameRoutine_14a3a60");
__int64* Manager_bc6460_alt1(float*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(float*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_98ed40(__int64);
__int64 GameRoutine_bd16c0_alt1(_QWORD*, __int64) __asm__("GameRoutine_bd16c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_14a3920(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
__int64 wld_map_c23d20_alt1(__int64, __int64,
                            unsigned __int64) __asm__("wld_map_c23d20");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
bool MapEffectPlacer_198c1e0(__int64* a1, __int64** a2, float32x4_t* a3,
                             float a4);

__int64 wld_map_MapEffectPlacer_PlaceCommon(__int64 a1, __int64* a2, float a3)
{
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  _DWORD* v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  v6 = 0x8E38E38E38E38E39LL * ((a2[1] - *a2) >> 5);
  v7 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(v7 + 24);
  v8 = *(_QWORD*)(v7 + 32);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_c24fe0(v9);
  result = GameRoutine_c25240(v9 + 200, (int)v6);
  v11 = (_DWORD*)a2[9];
  v12 = (_DWORD*)a2[10];
  if (v11 != v12) {
    v13 = GameData_2131678 + 16;
    while (
        ((*(_QWORD*)(a2[3] + 8 * ((unsigned __int64)(unsigned int)*v11 >> 6)) >>
          *v11) &
         1) != 0) {
    LABEL_5:
      if (++v11 == v12) {
        goto LABEL_22;
      }
    }
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         296, 16, 0);
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)v14 = v13;
    v15 = *a2;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 48) = 0x2000;
    *(_WORD*)(v14 + 116) = 0;
    *(_WORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 160) = 0;
    *(_BYTE*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 216) = 0;
    *(_QWORD*)(v14 + 192) = 0;
    *(_QWORD*)(v14 + 200) = 0;
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_DWORD*)(v14 + 292) = 2;
    v25 = v14;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_QWORD*)(v14 + 24) = 0;
    v24 = v14 + 24;
    result =
        GameRoutine_198c1e0(a1, &v24, v15 + 288LL * (unsigned int)*v11, a3);
    if ((result & 1) == 0) {
    LABEL_19:
      v21 = v25;
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        result = std___1___shared_weak_count___release_weak(v21);
      }
      goto LABEL_5;
    }
    v16 = *(_QWORD*)(a1 + 8);
    v17 = *(_QWORD*)(v16 + 24);
    v18 = *(_QWORD*)(v16 + 32);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
    }
    v19 = (unsigned int)*v11;
    v23 = v22;
    v22[0] = GameData_211d628;
    v22[1] = a2;
    v22[2] = v19;
    GameRoutine_c253a0(v17, &v24, v22);
    result = (__int64)v23;
    if (v23 == v22) {
      v20 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_15;
      }
      v20 = 40;
    }
    result = (*(__int64 (**)(void*))(*v23 + v20))(v23);
  LABEL_15:
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      result = std___1___shared_weak_count___release_weak(v18);
    }
    *(_QWORD*)(a2[3] + (((unsigned __int64)(unsigned int)*v11 >> 3) &
                        0x1FFFFFF8)) |= 1LL << *v11;
    goto LABEL_19;
  }
LABEL_22:
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

bool MapEffectPlacer_198c1e0(__int64* a1, __int64** a2, float32x4_t* a3,
                             float a4)
{

#pragma clang fp contract(off)
  unsigned int v4;
  __int64 v5;
  const char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64* v16;
  __int64* v17;
  unsigned __int64 v18;
  unsigned __int32 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float32x4_t v24;
  __int64 v25;
  float* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  unsigned int v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v37;
  unsigned __int64 v38;
  bool v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  char* v48;
  unsigned __int64 v49;
  unsigned __int32 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  bool v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  float* v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64* v68;
  unsigned int v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  unsigned __int8 explicit;
  int* v76;
  __int64 v77;
  __int64 v78;
  int v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  __int8* v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  char v91;
  __int64 v92;
  char v93;
  __int64 v94;
  __int64 v95;
  unsigned int v96;
  unsigned int i;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  float32x4_t v101;
  __int64 v102;
  float* v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64* v106;
  unsigned int v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64 v113;
  struct {
    __int64* v114;
    __int64 v115;
    char* v116;
    __int8* v117;
    float32x4_t v118;
    unsigned __int64 v119;
    unsigned __int64 v120;
    unsigned __int64 v121;
    unsigned __int64 v122;
  } v114_;

  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = LANES128(a3[3]).n128_u32[2];
  if (v4 >= 0xA) {
    String_60a250_alt1("bitset test argument out of range"),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v5 = *a1;
  if (((*(_QWORD*)(*a1 + 184) >> v4) & 1) == 0) {
    return false;
  }
  if ((LANES128(a3[8]).n128_u8[0] & 1) == 0) {
    if ((LANES128(a3[2]).n128_u8[0] & 1) != 0) {
      v22 = LANES128(a3[3]).n128_i64[0];
    }
    else {
      v22 = (__int64)LANES128(a3[2]).n128_i64 + 1;
    }
    v23 = LANES128(a3[1]).n128_i64[1];
    v24 = vaddq_f32(a3[4], a3[5]);
    v39 = (LANES128(*(a3)).n128_u8[8] & 1) == 0;
    LODWORD(v114_.v117) = LANES128(a3[3]).n128_u32[2];
    if (v39) {
      v25 = (__int64)&LANES128(*(a3)).n128_i64[1] + 1;
    }
    else {
      v25 = v23;
    }
    v114_.v114 = nullptr;
    v114_.v115 = 0;
    v114_.v118 = v24;
    v114_.v116 = (char*)v22;
    v26 = (float*)*eft_g_effectSystem_ptr[0];
    v27 = LANES128(a3[6]).n128_u64[1];
    v114_.v119 = LANES128(a3[6]).n128_u64[0];
    v114_.v120 = v27;
    v28 = LANES128(a3[7]).n128_u64[1];
    v114_.v121 = LANES128(a3[7]).n128_u64[0];
    v114_.v122 = v28;
    v29 = ({
      unsigned __int128 r_ =
          Manager_bc6460_alt1_pair(v26, (__int64)&v114_.v114, 1);
      v107 = COERCE_AS(__typeof__(v107), (unsigned long long)(r_ >> 64));
      v30 = COERCE_AS(__typeof__(v30), (unsigned long long)(r_ >> 64));
      v69 = COERCE_AS(__typeof__(v69), (unsigned long long)(r_ >> 64));
      (__int64*)(unsigned long long)r_;
    });
    GameHr_14a10d0(&v114_.v114, (__int64)v29, v30, v25),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v31 = v114_.v114;
    v32 = v114_.v115;
    if (v114_.v115 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v114_.v115 + 8), 1u,
                                memory_order_relaxed);
    }
    v33 = (__int64)a2[1];
    *a2 = v31;
    a2[1] = (__int64*)v32;
    if (v33 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v33),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v32 = (__int64)a2[1];
    }
    if (v32 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v32),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v34 = v114_.v115;
    if (v114_.v115 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v114_.v115 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v34),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v35 = *a2;
    if (*v35 != 0 && *(_DWORD*)(*v35 + 16) == *((_DWORD*)v35 + 2)) {
      GameRoutine_14a3a60_alt1(v35 + 18, (unsigned __int8*)&a3[10]),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v35[33] = LANES128(a3[17]).n128_i64[1];
      return true;
    }
    return false;
  }
  v10 = *(const char**)(LANES128(*(a3)).n128_u64[0] + 72);
  if (strcmp_alt1(v10, "NullObject") == 0) {
    v38 = LANES128(*(a3)).n128_u8[8];
    v39 = (v38 & 1) == 0;
    v40 = v38 >> 1;
    if (v39) {
      v41 = (__int64)&LANES128(*(a3)).n128_i64[1] + 1;
    }
    else {
      v41 = LANES128(a3[1]).n128_i64[1];
    }
    if (v39) {
      v42 = v40;
    }
    else {
      v42 = LANES128(a3[1]).n128_u64[0];
    }
    wld_c2c890_alt1((void*)(&v114_.v114), v5, v41, v42),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v43 = a1[1];
    v44 = *(_QWORD*)(v43 + 24);
    v45 = *(_QWORD*)(v43 + 32);
    if (v45 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                memory_order_relaxed);
    }
    v46 = *(__int64**)(v44 + 88);
    v47 = *(__int64**)(v44 + 96);
    if (((unsigned __int8)v114_.v114 & 1) != 0) {
      v48 = v114_.v116;
    }
    else {
      v48 = (char*)&v114_.v114 + 1;
    }
    if (((unsigned __int8)v114_.v114 & 1) != 0) {
      v49 = v114_.v115;
    }
    else {
      v49 = (unsigned __int64)(unsigned __int8)v114_.v114 >> 1;
    }
    if (v46 != v47) {
      v50 = LANES128(a3[8]).n128_u32[1];
      while (1) {
        v51 = *v46;
        if (v50 == *(_DWORD*)(*v46 + 284) && *(_QWORD*)(v51 + 272) == v49 &&
            memcmp_alt1(v51 + 16, (__int64)v48, v49) == 0) {
          break;
        }
        if (++v46 == v47) {
          goto LABEL_76;
        }
      }
    }
    if (v46 == v47) {
    LABEL_76:
      v21 = 0;
      if (v45 == 0) {
      LABEL_79:
        if (v21 == 0) {
          v52 = a1[1];
          v53 = *(_QWORD*)(v52 + 24);
          v54 = *(_QWORD*)(v52 + 32);
          if (v54 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 8), 1u,
                                      memory_order_relaxed);
          }
          v55 = LANES128(*(a3)).n128_u8[8];
          v56 = (v55 & 1) == 0;
          v57 = v55 >> 1;
          if (v56) {
            v58 = (__int64)&LANES128(*(a3)).n128_i64[1] + 1;
          }
          else {
            v58 = LANES128(a3[1]).n128_i64[1];
          }
          if (v56) {
            v59 = v57;
          }
          else {
            v59 = LANES128(a3[1]).n128_u64[0];
          }
          v21 = wld_map_c23d20_alt1(v53, v58, v59),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54),
                v107 =
                    COERCE_AS(__typeof__(v107),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v30 =
                    COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v69 =
                    COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt2(v54),
                v107 =
                    COERCE_AS(__typeof__(v107),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v30 =
                    COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v69 =
                    COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          *(_DWORD*)(v21 + 284) = LANES128(a3[8]).n128_u32[1];
        }
        if (((unsigned __int8)v114_.v114 & 1) != 0 && v114_.v116 != nullptr) {
          v60 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v60,
              (__int64)v114_.v116),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_97;
      }
    }
    else {
      v21 = *v46;
      if (v45 == 0) {
        goto LABEL_79;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v45),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_79;
  }
  v11 = strlen_alt1(v10),
  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  wld_c2c890_alt1((void*)(&v114_.v114), v5, (__int64)v10, v11),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = a1[1];
  v13 = *(_QWORD*)(v12 + 24);
  v14 = *(_QWORD*)(v12 + 32);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
  }
  if (((unsigned __int8)v114_.v114 & 1) != 0) {
    v15 = v114_.v116;
  }
  else {
    v15 = (char*)&v114_.v114 + 1;
  }
  v16 = *(__int64**)(v13 + 88);
  v17 = *(__int64**)(v13 + 96);
  if (((unsigned __int8)v114_.v114 & 1) != 0) {
    v18 = v114_.v115;
  }
  else {
    v18 = (unsigned __int64)(unsigned __int8)v114_.v114 >> 1;
  }
  if (v16 != v17) {
    v19 = LANES128(a3[8]).n128_u32[1];
    while (1) {
      v20 = *v16;
      if (v19 == *(_DWORD*)(*v16 + 284) && *(_QWORD*)(v20 + 272) == v18 &&
          memcmp_alt1(v20 + 16, (__int64)v15, v18) == 0) {
        break;
      }
      if (++v16 == v17) {
        goto LABEL_43;
      }
    }
  }
  if (v16 == v17) {
  LABEL_43:
    v21 = 0;
    if (v14 == 0) {
      goto LABEL_46;
    }
  }
  else {
    v21 = *v16;
    if (v14 == 0) {
      goto LABEL_46;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v14),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_46:
  if (((unsigned __int8)v114_.v114 & 1) != 0 && v114_.v116 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v114_.v116),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v21 == 0) {
    goto LABEL_137;
  }
LABEL_97:
  if ((LANES128(a3[2]).n128_u8[0] & 1) != 0) {
    v61 = LANES128(a3[3]).n128_i64[0];
  }
  else {
    v61 = (__int64)LANES128(a3[2]).n128_i64 + 1;
  }
  v62 = LANES128(a3[1]).n128_i64[1];
  v39 = (LANES128(*(a3)).n128_u8[8] & 1) == 0;
  LODWORD(v114_.v117) = LANES128(a3[3]).n128_u32[2];
  if (v39) {
    v63 = (__int64)&LANES128(*(a3)).n128_i64[1] + 1;
  }
  else {
    v63 = v62;
  }
  v114_.v114 = nullptr;
  v114_.v115 = 0;
  v114_.v116 = (char*)v61;
  v64 = (float*)*eft_g_effectSystem_ptr[0];
  v65 = LANES128(a3[4]).n128_u64[1];
  LANES128(v114_.v118).n128_u64[0] = LANES128(a3[4]).n128_u64[0];
  LANES128(v114_.v118).n128_u64[1] = v65;
  v66 = LANES128(a3[6]).n128_u64[1];
  v114_.v119 = LANES128(a3[6]).n128_u64[0];
  v114_.v120 = v66;
  v67 = LANES128(a3[7]).n128_u64[1];
  v114_.v121 = LANES128(a3[7]).n128_u64[0];
  v114_.v122 = v67;
  v68 = ({
    unsigned __int128 r_ =
        Manager_bc6460_alt1_pair(v64, (__int64)&v114_.v114, 1);
    v107 = COERCE_AS(__typeof__(v107), (unsigned long long)(r_ >> 64));
    v30 = COERCE_AS(__typeof__(v30), (unsigned long long)(r_ >> 64));
    v69 = COERCE_AS(__typeof__(v69), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  GameHr_14a10d0(&v114_.v114, (__int64)v68, v69, v63),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v70 = v114_.v114;
  v71 = v114_.v115;
  if (v114_.v115 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v114_.v115 + 8), 1u,
                              memory_order_relaxed);
  }
  v72 = (__int64)a2[1];
  *a2 = v70;
  a2[1] = (__int64*)v71;
  if (v72 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v72),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v71 = (__int64)a2[1];
  }
  if (v71 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v71),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v73 = v114_.v115;
  if (v114_.v115 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v114_.v115 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v73),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v74 = *a2;
  GameRoutine_14a3a60_alt1(*a2 + 18, (unsigned __int8*)&a3[10]),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v74[33] = LANES128(a3[17]).n128_i64[1];
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4a8,
                                  memory_order_acquire);
  v76 = GameData_212d4a0;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212d4a8) != 0) {
    *v76 = wld_Crc32_alt1(0, "EffectModule", 0xCu),
    v107 = COERCE_AS(__typeof__(v107),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release_alt1((__int64)GameData_212d4a8),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v77 = *(_QWORD*)(v21 + 512);
  v78 = v77;
  while (v78 != *(_QWORD*)(v21 + 504)) {
    v79 = *(_DWORD*)(v78 - 16);
    v78 -= 16;
    v77 -= 16;
    if (v79 == *v76) {
      if (*(_QWORD*)(v21 + 512) != v77) {
        v80 = *(_QWORD**)(v77 + 8);
        if (v80 != nullptr) {
          goto LABEL_122;
        }
      }
      break;
    }
  }
  v80 = (_QWORD*)GameHr_98ed40(v21),
  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v80 == nullptr) {
    goto LABEL_137;
  }
LABEL_122:
  v81 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0),
  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v81 + 48) = 0x2000;
  v82 = GameData_2131678;
  *(_WORD*)(v81 + 108) = 256;
  *(_QWORD*)(v81 + 16) = 0;
  *(_QWORD*)(v81 + 24) = 0;
  *(_DWORD*)(v81 + 32) = 0;
  *(_QWORD*)(v81 + 40) = 0;
  *(_DWORD*)(v81 + 104) = 0;
  *(_DWORD*)(v81 + 112) = -1082130432;
  *(_QWORD*)(v81 + 56) = 0;
  *(_QWORD*)(v81 + 64) = 0;
  *(_QWORD*)(v81 + 72) = 0;
  *(_WORD*)(v81 + 80) = 0;
  *(_WORD*)(v81 + 116) = 0;
  *(_WORD*)(v81 + 136) = 0;
  *(_BYTE*)(v81 + 160) = 0;
  *(_BYTE*)(v81 + 288) = 0;
  *(_QWORD*)(v81 + 272) = 0;
  *(_QWORD*)(v81 + 280) = 0;
  *(_QWORD*)(v81 + 256) = 0;
  *(_QWORD*)(v81 + 264) = 0;
  *(_QWORD*)(v81 + 240) = 0;
  *(_QWORD*)(v81 + 248) = 0;
  *(_QWORD*)(v81 + 224) = 0;
  *(_QWORD*)(v81 + 232) = 0;
  *(_QWORD*)(v81 + 208) = 0;
  *(_QWORD*)(v81 + 216) = 0;
  *(_QWORD*)(v81 + 192) = 0;
  *(_QWORD*)(v81 + 200) = 0;
  *(_QWORD*)(v81 + 176) = 0;
  *(_QWORD*)(v81 + 184) = 0;
  *(_QWORD*)(v81 + 168) = 0;
  *(_QWORD*)(v81 + 120) = 0;
  *(_DWORD*)(v81 + 127) = 0;
  v114_.v115 = v81;
  LOBYTE(v114_.v116) = 0;
  BYTE4(v114_.v116) = 0;
  LANES128(v114_.v118).n128_u8[12] = 0;
  LANES128(v114_.v118).n128_u8[8] = 0;
  v114_.v117 = nullptr;
  LANES128(v114_.v118).n128_u64[0] = 0;
  LODWORD(v114_.v120) = -1;
  BYTE4(v114_.v119) = 0;
  *(_QWORD*)v81 = v82 + 16;
  *(_QWORD*)(v81 + 8) = 0;
  *(_DWORD*)(v81 + 292) = 2;
  LODWORD(v114_.v119) = 1;
  v83 = *a2;
  v84 = (__int64)a2[1];
  if (v84 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                              memory_order_relaxed);
    v81 = v114_.v115;
    v114_.v114 = v83;
    v114_.v115 = v84;
    if (v81 == 0) {
    LABEL_129:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v84),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_131;
    }
  }
  else {
    v114_.v114 = *a2;
    v114_.v115 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v81 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v85 = v81;
    (*(void (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v85),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v84 = v114_.v115;
  if (v114_.v115 != 0) {
    goto LABEL_129;
  }
LABEL_131:
  v87 = LANES128(a3[9]).n128_u64[0];
  v86 = LANES128(a3[9]).n128_u64[1];
  v88 = &LANES128(a3[8]).n128_i8[9];
  BYTE4(v114_.v119) = 1;
  v89 = LANES128(a3[8]).n128_u8[8];
  v39 = (v89 & 1) == 0;
  v90 = v89 >> 1;
  if (!v39) {
    v88 = (__int8*)v86;
    v90 = v87;
  }
  v114_.v117 = v88;
  LANES128(v114_.v118).n128_u64[0] = v90;
  v91 = GameRoutine_bd16c0_alt1(v80, (__int64)&v114_.v114),
  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v92 = v114_.v115;
  if (v114_.v115 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v114_.v115 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v93 = v91;
    (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v92),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v91 = v93;
  }
  if ((v91 & 1) == 0) {
  LABEL_137:
    v94 = (__int64)*a2;
    v95 = **a2;
    if (v95 != 0 && *(_DWORD*)(v95 + 16) == *(_DWORD*)(v94 + 8)) {
      v96 = *(_DWORD*)(v95 + 36);
      if (v96 != 0) {
        for (i = 0; i < v96; ++i) {
          if ((int)v96 > (int)i) {
            v98 = *(_QWORD*)(v95 + 40 + 8LL * (int)i);
            if (v98 != 0) {
              *(_QWORD*)(v98 + 16) = 0;
              *(_QWORD*)(v98 + 24) = 0;
              *(_BYTE*)(v98 + 128) = 1;
              v96 = *(_DWORD*)(v95 + 36);
            }
          }
        }
      }
      game_14a3920(v94),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      if ((LANES128(a3[2]).n128_u8[0] & 1) != 0) {
        v99 = LANES128(a3[3]).n128_i64[0];
      }
      else {
        v99 = (__int64)LANES128(a3[2]).n128_i64 + 1;
      }
      v100 = LANES128(a3[1]).n128_i64[1];
      v101 = vaddq_f32(a3[5], COERCE_AS(float32x4_t, 0LL));
      v39 = (LANES128(*(a3)).n128_u8[8] & 1) == 0;
      LODWORD(v114_.v117) = LANES128(a3[3]).n128_u32[2];
      if (v39) {
        v102 = (__int64)&LANES128(*(a3)).n128_i64[1] + 1;
      }
      else {
        v102 = v100;
      }
      v114_.v114 = nullptr;
      v114_.v115 = 0;
      v114_.v118 = v101;
      v114_.v116 = (char*)v99;
      v103 = (float*)*eft_g_effectSystem_ptr[0];
      v104 = LANES128(a3[6]).n128_u64[1];
      v114_.v119 = LANES128(a3[6]).n128_u64[0];
      v114_.v120 = v104;
      v105 = LANES128(a3[7]).n128_u64[1];
      v114_.v121 = LANES128(a3[7]).n128_u64[0];
      v114_.v122 = v105;
      v106 = ({
        unsigned __int128 r_ =
            Manager_bc6460_alt1_pair(v103, (__int64)&v114_.v114, 1);
        v107 = COERCE_AS(__typeof__(v107), (unsigned long long)(r_ >> 64));
        v30 = COERCE_AS(__typeof__(v30), (unsigned long long)(r_ >> 64));
        v69 = COERCE_AS(__typeof__(v69), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      GameHr_14a10d0(&v114_.v114, (__int64)v106, v107, v102),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v108 = v114_.v114;
      v109 = v114_.v115;
      if (v114_.v115 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v114_.v115 + 8), 1u,
                                  memory_order_relaxed);
      }
      v110 = (__int64)a2[1];
      *a2 = v108;
      a2[1] = (__int64*)v109;
      if (v110 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v110),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v109 = (__int64)a2[1];
      }
      if (v109 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v109 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v109 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v109 + 16LL))(v109),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v109),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v111 = v114_.v115;
      if (v114_.v115 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v114_.v115 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v111),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v112 = *a2;
      GameRoutine_14a3a60_alt1(*a2 + 18, (unsigned __int8*)&a3[10]),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v112[33] = LANES128(a3[17]).n128_i64[1];
      if (a4 > 0x0.0p+0f) {
        GameRoutine_14a1e70_alt1(a2, a4),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  v113 = **a2;
  if (v113 != 0) {
    return *(_DWORD*)(v113 + 16) == *((_DWORD*)*a2 + 2);
  }
  return false;
}

void wld_map_MapEffectPlacer_PlaceTagged(_QWORD* a1, __int64 a2, __int64 a3,
                                         float a4)
{
  unsigned __int64 v4;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  _DWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  float32x4_t* v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[4];
  _QWORD* v28;
  __int64* v29;
  __int64 v30;

  v4 = *(unsigned __int8*)(a3 + 72);
  if ((v4 & 1) != 0) {
    v9 = *(_QWORD*)(a3 + 80);
  }
  else {
    v9 = v4 >> 1;
  }
  if (v9 != 0 || (*(_BYTE*)(a3 + 120) & *(_BYTE*)(a2 + 96)) != 0) {
    v10 = 0x8E38E38E38E38E39LL *
          ((__int64)(*(_QWORD*)(a2 + 8) - *(_QWORD*)a2) >> 5);
    v11 = a1[1];
    v13 = *(_QWORD*)(v11 + 24);
    v12 = *(_QWORD*)(v11 + 32);
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    ObjectGroup_c24fe0(v13);
    GameRoutine_c25240(v13 + 200, (int)v10);
    v14 = *(_DWORD**)(a2 + 48);
    v15 = *(_DWORD**)(a2 + 56);
    if (v14 != v15) {
      v16 = GameData_2131678 + 16;
      while (1) {
        v17 = (unsigned int)*v14;
        if (((*(_QWORD*)(*(_QWORD*)(a2 + 24) + 8 * (v17 >> 6)) >> v17) & 1) ==
            0) {
          v18 = (float32x4_t*)(*(_QWORD*)a2 + 288LL * (unsigned int)v17);
          if ((GameRoutine_c26680(&v18[10], a3) & 1) != 0) {
            break;
          }
        }
      LABEL_10:
        if (++v14 == v15) {
          goto LABEL_28;
        }
      }
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
      *(float*)&v20 = a4;
      *(_QWORD*)(v19 + 8) = 0;
      *(_QWORD*)(v19 + 16) = 0;
      *(_QWORD*)v19 = v16;
      *(_DWORD*)(v19 + 32) = 0;
      *(_QWORD*)(v19 + 40) = 0;
      *(_DWORD*)(v19 + 104) = 0;
      *(_QWORD*)(v19 + 56) = 0;
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 0;
      *(_WORD*)(v19 + 80) = 0;
      *(_DWORD*)(v19 + 48) = 0x2000;
      *(_WORD*)(v19 + 116) = 0;
      *(_WORD*)(v19 + 136) = 0;
      *(_BYTE*)(v19 + 160) = 0;
      *(_BYTE*)(v19 + 288) = 0;
      *(_QWORD*)(v19 + 272) = 0;
      *(_QWORD*)(v19 + 280) = 0;
      *(_QWORD*)(v19 + 256) = 0;
      *(_QWORD*)(v19 + 264) = 0;
      *(_QWORD*)(v19 + 240) = 0;
      *(_QWORD*)(v19 + 248) = 0;
      *(_QWORD*)(v19 + 224) = 0;
      *(_QWORD*)(v19 + 232) = 0;
      *(_QWORD*)(v19 + 208) = 0;
      *(_QWORD*)(v19 + 216) = 0;
      *(_QWORD*)(v19 + 192) = 0;
      *(_QWORD*)(v19 + 200) = 0;
      *(_WORD*)(v19 + 108) = 256;
      *(_QWORD*)(v19 + 176) = 0;
      *(_QWORD*)(v19 + 184) = 0;
      *(_QWORD*)(v19 + 168) = 0;
      *(_QWORD*)(v19 + 120) = 0;
      *(_DWORD*)(v19 + 127) = 0;
      v30 = v19;
      *(_DWORD*)(v19 + 112) = -1082130432;
      *(_DWORD*)(v19 + 292) = 2;
      *(_QWORD*)(v19 + 24) = 0;
      v29 = (__int64*)(v19 + 24);
      if (!MapEffectPlacer_198c1e0_alt1(a1, &v29, v18, v20)) {
      LABEL_25:
        v26 = v30;
        if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak_alt1(v26);
        }
        goto LABEL_10;
      }
      v21 = a1[1];
      v22 = *(_QWORD*)(v21 + 24);
      v23 = *(_QWORD*)(v21 + 32);
      if (v23 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                  memory_order_relaxed);
      }
      v24 = (unsigned int)*v14;
      v28 = v27;
      v27[0] = GameData_211d6a8;
      v27[1] = a2;
      v27[2] = v24;
      GameRoutine_c253a0(v22, &v29, v27);
      if (v28 == v27) {
        v25 = 32;
      }
      else {
        if (v28 == nullptr) {
          goto LABEL_21;
        }
        v25 = 40;
      }
      (*(void (**)(__int64))(*v28 + v25))((__int64)v28);
    LABEL_21:
      if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak_alt1(v23);
      }
      *(_QWORD*)(*(_QWORD*)(a2 + 24) +
                 (((unsigned __int64)(unsigned int)*v14 >> 3) & 0x1FFFFFF8)) |=
          1LL << *v14;
      goto LABEL_25;
    }
  LABEL_28:
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
}

__int64 wld_map_MapEffectPlacer_PlaceCommon_lambda0_Invoke(__int64 result)
{
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 24LL) +
             (((unsigned __int64)*(unsigned int*)(result + 16) >> 3) &
              0x1FFFFFF8)) &= ~(1LL << *(_DWORD*)(result + 16));
  return result;
}

__int64 wld_map_MapEffectPlacer_PlaceTagged_lambda0_Invoke(__int64 result)
{
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 24LL) +
             (((unsigned __int64)*(unsigned int*)(result + 16) >> 3) &
              0x1FFFFFF8)) &= ~(1LL << *(_DWORD*)(result + 16));
  return result;
}

#pragma GCC visibility pop
