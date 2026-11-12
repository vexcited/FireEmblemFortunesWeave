#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_a7dfc0(_QWORD* result);
_QWORD* GameRoutine_a7e300(_QWORD* result, __int64**);
_QWORD* GameRoutine_c225c0(float*, unsigned __int8*, __int64**);
_QWORD* GameRoutine_c25240(_QWORD* result, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_c22e40(PSEUDO_X8, _QWORD* result,
                                                   _QWORD*);
__attribute__((swiftcall)) void wld_Crc32(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void
    wld_map_c24a80_alt1(PSEUDO_X8, _QWORD, _QWORD,
                        _QWORD) __asm__("wld_map_c24a80");
__int64* GameRoutine_c22420(_QWORD*, unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 Components_a870e0(__int64*, char);
__int64 GameRoutine_14a1390(__int64*, char);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(__int64 result);
__int64 GameRoutine_a8c380(__int64, _QWORD*);
__int64 GameRoutine_c10300(__int64, unsigned __int8*, __int64*, _QWORD*, int);
__int64 GameRoutine_c22420_alt1(_QWORD, _QWORD) __asm__("GameRoutine_c22420");
__int64 GameRoutine_c23f00(_QWORD, _QWORD);
__int64 ObjectBuildCreate_c0f580(__int64);
__int64 ObjectBuildCreate_c232b0(__int64, __int64, __int64, unsigned __int64,
                                 __int64*);
__int64 Scene_a70ec0(__int64 result, unsigned __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcmp_alt1(_QWORD, _QWORD) __asm__("memcmp");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 wld_map_MapEffectPlacer_PlaceTagged(__int64 result, __int64, __int64,
                                            float);
__int64 wld_map_ObjectGroup_FadeMapEffects(__int64, __int64, __int64, __int64,
                                           float);
__int64 wld_map_c21f20_alt1(_QWORD, _QWORD) __asm__("wld_map_c21f20");
bool GameRoutine_b872a0(__int64);
char* GameRoutine_18df040(char* result);
extern _UNKNOWN* GameData_212d498;
extern __int64 (*GameData_1fd1bb0[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212d490;
unsigned __int64 GameRoutine_198d120(unsigned __int64 result, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_81e570();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230();
__int64 wld_map_c20680(float* a1, float32x4_t* a2);
__attribute__((swiftcall)) void
wld_map_c20fe0_alt1(PSEUDO_X8 x8_, _QWORD* result, __int64 a2,
                    __int64 a3) __asm__("wld_map_c20fe0");
__attribute__((swiftcall)) void
wld_map_c21740_alt1(PSEUDO_X8 x8_, __int64 result, __int64 a2,
                    unsigned __int64 a3) __asm__("wld_map_c21740");
__int64 wld_map_c218a0(__int64* a1, __int64 a2);
__int64 wld_map_c22d40(_QWORD* a1, __int64* a2);
_QWORD* wld_map_c235c0_alt1(__int64 a1) __asm__("wld_map_c235c0");
__attribute__((swiftcall)) void wld_map_c23be0(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, unsigned __int64 a3);
__int64 wld_map_c23d20(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 wld_map_c24890(__int64 a1, __int64 a2, unsigned __int64 a3);
__attribute__((swiftcall)) void
wld_map_c24a80_alt2(PSEUDO_X8 x8_, __int64 result, __int64 a2,
                    __int64 a3) __asm__("wld_map_c24a80");
__attribute__((swiftcall)) void
wld_map_c24c40_alt1(PSEUDO_X8 x8_, __int64 result, int a2, __int64 a3,
                    __int64 a4) __asm__("wld_map_c24c40");
__attribute__((swiftcall)) void Object_a87520(PSEUDO_X8, __int64*,
                                              unsigned __int64, char);
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_81e570_alt1(void) __asm__("GameRoutine_81e570");
__int64* wld_map_c21f20_alt2(__int64* result, _QWORD* a2, char* a3, char* a4,
                             __int64 a5) __asm__("wld_map_c21f20");
__attribute__((swiftcall)) void wld_map_c24020(PSEUDO_X8 x8_, __int64 a1,
                                               unsigned __int64 a2);
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt2(__int64, __int64, unsigned __int64) __asm__("memcmp");
void GameRoutine_c23f00_alt1(__int64*, _QWORD*) __asm__("GameRoutine_c23f00");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void wld_map_c20fe0(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, unsigned __int64 a3);
__attribute__((swiftcall)) void wld_map_c21740(PSEUDO_X8 x8_, __int64* result,
                                               __int64 a2, unsigned __int64 a3);
void wld_map_c21f20(__int64* a1, __int64 a2, char* a3, char* a4, __int64 a5);
__attribute__((swiftcall)) void wld_map_c24a80(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, unsigned __int64 a3);
__attribute__((swiftcall)) void wld_map_c24c40(PSEUDO_X8 x8_, __int64 a1,
                                               int a2, __int64 a3,
                                               unsigned __int64 a4);
__int64 GameHr_14a1390(__int64*, char);
__int64 GameHr_a867a0(__int64 result);
__int64 GameHr_c0f580(__int64);
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameHr_198d120(__int64*, __int64);
void GameHr_a7dfc0(__int64*);
void GameHr_c25240(__int64*, unsigned __int64);
void GameRoutine_a7e300_alt1(_QWORD*, __int64**) __asm__("GameRoutine_a7e300");
void wld_map_c235c0(__int64 a1);

__int64 wld_map_c20680(float* a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  int v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  _BOOL4 v22;
  bool v23;
  unsigned __int64 v24;
  __int64** v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64** v32;
  char* v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 result;
  __int64 v38;
  __int64* v39;
  _QWORD* v40;
  unsigned __int64 v41;
  char* v42;
  unsigned __int64 v43;
  _QWORD* v44;
  bool v45;
  unsigned __int8 v46;
  unsigned __int64 v47;
  atomic_ullong* v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64** v53;
  __int64 v54;
  float32x4_t* v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  float32x4_t* v69;
  _QWORD* v70;
  __int64 v71;
  struct {
    __int64 v72;
    _QWORD* v73;
  } v72_;
  struct {
    __int64 v74;
    unsigned __int64 v75;
    char* v76;
  } v74_;
  struct {
    __int64* v77;
    unsigned __int64 v78;
    __int64** v79;
  } v77_;

  v4 = LANES128(a2[10]).n128_u8[0] >> 1;
  if ((LANES128(a2[10]).n128_u8[0] & 1) != 0) {
    v4 = LANES128(a2[10]).n128_u64[1];
  }
  if (v4 != 0) {
    if ((LANES128(a2[10]).n128_u8[0] & 1) != 0) {
      fw_text_String_CopyTerminated(&v74_.v74, LANES128(a2[11]).n128_i64[0],
                                    LANES128(a2[10]).n128_u64[1]);
    }
    else {
      v5 = LANES128(a2[10]).n128_u64[1];
      v6 = (char*)LANES128(a2[11]).n128_u64[0];
      v74_.v74 = LANES128(a2[10]).n128_i64[0];
      v74_.v75 = v5;
      v74_.v76 = v6;
    }
    goto LABEL_78;
  }
  v7 = LANES128(*(a2)).n128_u8[0];
  v8 = (v7 & 1) == 0;
  v9 = v7 >> 1;
  if (v8) {
    v10 = &LANES128(*(a2)).n128_u8[1];
  }
  else {
    v10 = (unsigned __int8*)LANES128(a2[1]).n128_u64[0];
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = LANES128(*(a2)).n128_u64[1];
  }
  if (v11 == 0) {
    LOWORD(v74_.v74) = 0;
    goto LABEL_78;
  }
  v12 = &v10[v11];
  v13 = &v10[v11];
  v14 = v10;
  v15 = &v10[v11];
  do {
    v16 = v13 - v14;
    v17 = (v13 - v14) & 3;
    if (v17 != 0) {
      v18 = v14;
      while (1) {
        v19 = *v18++;
        if (v19 == 47) {
          break;
        }
        --v17;
        v14 = v18;
        if (v17 == 0) {
          goto LABEL_20;
        }
      }
      v20 = v14 + 1;
    LABEL_32:
      v23 = v20 == v12;
    LABEL_33:
      v22 = v23;
      goto LABEL_36;
    }
    v18 = v14;
  LABEL_20:
    if ((unsigned __int64)(v16 - 1) < 3) {
      break;
    }
    v20 = v18 + 2;
    while (1) {
      if (*(v20 - 2) == 47) {
        v14 = v20 - 2;
        --v20;
        goto LABEL_32;
      }
      if (*(v20 - 1) == 47) {
        v23 = v20 == v12;
        v14 = v20 - 1;
        goto LABEL_33;
      }
      if (*v20 == 47) {
        v14 = v20++;
        goto LABEL_32;
      }
      v21 = v20 + 2;
      v22 = v20 + 2 == v12;
      if (v20[1] == 47) {
        break;
      }
      v20 += 4;
      if (v21 == v12) {
        goto LABEL_40;
      }
    }
    v14 = v20 + 1;
    v20 += 2;
  LABEL_36:
    v15 = v14;
    v14 = v20;
  } while (!v22);
LABEL_40:
  if (v15 == v12 || (v24 = v15 - v10, v15 - v10 == -1)) {
    if (v11 < 0xFFFFFFFFFFFFFFF7LL) {
      if (v11 >= 0x17) {
        if ((v11 | 7) == 0x17) {
          v27 = 26;
        }
        else {
          v27 = (v11 | 7) + 1;
        }
        v26 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v27, 16, 0);
        v74_.v75 = v11;
        v74_.v76 = v26;
        v74_.v74 = v27 | 1;
      }
      else {
        LOBYTE(v74_.v74) = 2 * v11;
        v26 = (char*)&v74_.v74 + 1;
      }
      memmove(v26, v10, v11);
      v26[v11] = 0;
      goto LABEL_78;
    }
  LABEL_119:
    String_60a1d0();
  }
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_119;
  }
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v11 | 7) + 1;
    }
    v25 = (__int64**)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v28, 16, 0);
    v77_.v78 = v11;
    v77_.v79 = v25;
    v77_.v77 = (__int64*)(v28 | 1);
  }
  else {
    LOBYTE(v77_.v77) = 2 * v11;
    v25 = (__int64**)((char*)&v77_.v77 + 1);
  }
  memmove(v25, v10, v11);
  *((_BYTE*)v25 + v11) = 0;
  v29 = v77_.v78;
  if (((unsigned __int8)v77_.v77 & 1) == 0) {
    v29 = (unsigned __int64)(unsigned __int8)v77_.v77 >> 1;
  }
  if (v24 >= v29) {
    String_60a230();
  }
  v30 = v24 + 1;
  v31 = v29 - (v24 + 1);
  v32 = ((unsigned __int8)v77_.v77 & 1) != 0
            ? v77_.v79
            : (__int64**)((char*)&v77_.v77 + 1);
  if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_119;
  }
  if (v31 >= 0x17) {
    if ((v31 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v31 | 7) + 1;
    }
    v33 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v34,
                                                16, 0);
    v74_.v75 = v31;
    v74_.v76 = v33;
    v74_.v74 = v34 | 1;
    goto LABEL_72;
  }
  LOBYTE(v74_.v74) = 2 * v31;
  v33 = (char*)&v74_.v74 + 1;
  if (v29 != v30) {
  LABEL_72:
    memmove(v33, (char*)v32 + v30, v31);
  }
  v35 = (char)v77_.v77;
  v33[v31] = 0;
  if ((v35 & 1) != 0 && v77_.v79 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
  }
LABEL_78:
  result = (__int64)GameRoutine_c22420((_QWORD*)a1 + 13,
                                       (unsigned __int8*)&v74_.v74);
  if (result != 0) {
    goto LABEL_111;
  }
  v38 = *((_QWORD*)a1 + 2);
  v39 = (__int64*)fw_memory_g_heap_manager_ptr;
  v40 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 248, 16, 0);
  v41 = (unsigned __int8)v74_.v74;
  v43 = v74_.v75;
  v42 = v74_.v76;
  v44 = v40;
  v45 = (v74_.v74 & 1) == 0;
  *v40 = GameData_1fd1bb0;
  v46 = LANES128(a2[11]).n128_u8[8];
  v47 = v41 >> 1;
  v40[1] = 0;
  v48 = (atomic_ullong*)(v40 + 1);
  v40[2] = 0;
  if (v45) {
    v49 = (char*)&v74_.v74 + 1;
  }
  else {
    v49 = v42;
  }
  v50 = (__int64)(v40 + 3);
  if (v45) {
    v51 = v47;
  }
  else {
    v51 = v43;
  }
  if ((v46 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&v77_.v77,
                                  LANES128(a2[12]).n128_i64[1],
                                  LANES128(a2[12]).n128_u64[0]);
  }
  else {
    v52 = LANES128(a2[12]).n128_u64[0];
    v53 = (__int64**)LANES128(a2[12]).n128_u64[1];
    v77_.v77 = (__int64*)LANES128(a2[11]).n128_u64[1];
    v77_.v78 = v52;
    v77_.v79 = v53;
  }
  ObjectBuildCreate_c232b0(v50, v38, (__int64)v49, v51, (__int64*)&v77_.v77);
  if (((unsigned __int8)v77_.v77 & 1) != 0 && v77_.v79 != nullptr) {
    v54 = 128;
    if (*(_QWORD*)(*v39 + 200) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(*v39 + v54);
  }
  v55 = (float32x4_t*)v44[13];
  v56 = a2[13];
  v57 = vsubq_f32(v55[19], v56);
  v58 = vmulq_f32(v57, v57);
  LANES128(v58).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(v55[19]).n128_u64[0] = LANES128(v56).n128_u64[0];
    v59 = v55[19];
    LANES128(v55[18]).n128_u32[2] |= 1u;
    LANES128(v59).n128_u64[1] = LANES128(v56).n128_u32[2];
    v55[19] = v59;
  }
  v60 = *(_QWORD*)a1;
  v61 = fw_memory_HeapManager_Allocate(*v39, 672, 16, 0);
  v63 = *((_QWORD*)a1 + 3);
  v62 = *((_QWORD*)a1 + 4);
  if (v62 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)v61 = v60;
    *(_QWORD*)(v61 + 8) = v63;
    *(_QWORD*)(v61 + 16) = v62;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    *(_QWORD*)v61 = v60;
    *(_QWORD*)(v61 + 8) = v63;
    *(_QWORD*)(v61 + 16) = 0;
  }
  *(_QWORD*)(v61 + 144) = 0;
  *(_QWORD*)(v61 + 24) = 0;
  *(_QWORD*)(v61 + 32) = 0;
  *(_QWORD*)(v61 + 40) = 0;
  *(_QWORD*)(v61 + 48) = 0;
  *(_QWORD*)(v61 + 56) = 0;
  *(_QWORD*)(v61 + 64) = 0;
  *(_QWORD*)(v61 + 72) = 0;
  *(_QWORD*)(v61 + 80) = 0;
  *(_QWORD*)(v61 + 88) = 0;
  *(_QWORD*)(v61 + 96) = 0;
  *(_QWORD*)(v61 + 104) = 0;
  *(_QWORD*)(v61 + 160) = 0;
  *(_QWORD*)(v61 + 168) = 0;
  *(_QWORD*)(v61 + 176) = 0;
  *(_QWORD*)(v61 + 184) = 0;
  *(_QWORD*)(v61 + 192) = 0;
  *(_QWORD*)(v61 + 200) = 0;
  *(_QWORD*)(v61 + 208) = 0;
  *(_QWORD*)(v61 + 216) = 0;
  *(_QWORD*)(v61 + 224) = 0;
  *(_QWORD*)(v61 + 232) = 0;
  *(_QWORD*)(v61 + 240) = 0;
  *(_QWORD*)(v61 + 248) = 0;
  *(_QWORD*)(v61 + 392) = 0;
  *(_QWORD*)(v61 + 400) = 0;
  *(_QWORD*)(v61 + 376) = 0;
  *(_QWORD*)(v61 + 384) = 0;
  *(_QWORD*)(v61 + 360) = 0;
  *(_QWORD*)(v61 + 368) = 0;
  *(_QWORD*)(v61 + 344) = 0;
  *(_QWORD*)(v61 + 352) = 0;
  *(_QWORD*)(v61 + 328) = 0;
  *(_QWORD*)(v61 + 336) = 0;
  *(_QWORD*)(v61 + 312) = 0;
  *(_QWORD*)(v61 + 320) = 0;
  *(_QWORD*)(v61 + 296) = 0;
  *(_QWORD*)(v61 + 304) = 0;
  *(_QWORD*)(v61 + 280) = 0;
  *(_QWORD*)(v61 + 288) = 0;
  *(_QWORD*)(v61 + 264) = 0;
  *(_QWORD*)(v61 + 272) = 0;
  *(_DWORD*)(v61 + 408) = 1065353216;
  *(_QWORD*)(v61 + 416) = 0;
  *(_QWORD*)(v61 + 424) = 0;
  *(_QWORD*)(v61 + 432) = 0;
  *(_QWORD*)(v61 + 440) = 0;
  *(_DWORD*)(v61 + 448) = 1065353216;
  *(_QWORD*)(v61 + 456) = 0;
  *(_QWORD*)(v61 + 464) = 0;
  *(_QWORD*)(v61 + 472) = 0;
  *(_QWORD*)(v61 + 480) = 0;
  *(_DWORD*)(v61 + 488) = 1065353216;
  *(_QWORD*)(v61 + 496) = 0;
  *(_QWORD*)(v61 + 504) = 0;
  *(_QWORD*)(v61 + 512) = 0;
  *(_QWORD*)(v61 + 520) = 0;
  *(_DWORD*)(v61 + 528) = 1065353216;
  *(_QWORD*)(v61 + 536) = 0;
  *(_QWORD*)(v61 + 544) = 0;
  *(_QWORD*)(v61 + 552) = 0;
  *(_QWORD*)(v61 + 560) = 0;
  *(_DWORD*)(v61 + 568) = 1065353216;
  *(_QWORD*)(v61 + 576) = 0;
  *(_QWORD*)(v61 + 584) = 0;
  *(_QWORD*)(v61 + 592) = 0;
  *(_QWORD*)(v61 + 600) = 0;
  *(_QWORD*)(v61 + 608) = 0;
  *(_QWORD*)(v61 + 616) = 0;
  *(_QWORD*)(v61 + 624) = 0;
  *(_QWORD*)(v61 + 632) = 0;
  *(_QWORD*)(v61 + 640) = 0;
  *(_QWORD*)(v61 + 648) = 0;
  *(_QWORD*)(v61 + 656) = 0;
  *(_QWORD*)(v61 + 664) = 0;
  if (v62 != 0) {
    std___1___shared_weak_count___release_weak(v62);
  }
  v77_.v77 = &v74_.v74;
  v64 = GameRoutine_c225c0(a1 + 26, (unsigned __int8*)&v74_.v74, &v77_.v77);
  v65 = v64[5];
  v64[5] = v61;
  if (v65 != 0) {
    ObjectBuildCreate_c0f580(v65);
    v66 = 128;
    if (*(_QWORD*)(*v39 + 200) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free(*v39 + v66);
  }
  v77_.v77 = &v74_.v74;
  v67 = GameRoutine_c225c0(a1 + 26, (unsigned __int8*)&v74_.v74, &v77_.v77);
  v72_.v72 = v50;
  v72_.v73 = v44;
  v68 = v67[5];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 1), 1u,
                            memory_order_relaxed);
  if (LANES128(a2[7]).n128_u8[8] != 0) {
    v69 = a2 + 7;
  }
  else {
    v69 = (float32x4_t*)(*((_QWORD*)a1 + 12) + 160LL);
  }
  result = GameRoutine_c10300(v68, (unsigned __int8*)a2, &v72_.v72, v69, 0);
  v70 = v72_.v73;
  if (v72_.v73 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v72_.v73 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v70 + 16LL))(v70);
    result = std___1___shared_weak_count___release_weak(v70);
  }
  if (atomic_fetch_add(v48, 0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_111:
    if ((v74_.v74 & 1) != 0) {
    LABEL_112:
      if (v74_.v76 != nullptr) {
        v71 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v71 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
      }
    }
  }
  else {
    (*(void (**)(_QWORD*))(*v44 + 16LL))(v44);
    result = std___1___shared_weak_count___release_weak(v44);
    if ((v74_.v74 & 1) != 0) {
      goto LABEL_112;
    }
  }
  return result;
}

__attribute__((swiftcall)) void wld_map_c20fe0(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, unsigned __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  __int64 v13;
  _QWORD* i;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  struct {
    char* v20;
    char* v21;
    __int64 v22;
  } v20_;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v5 = *(_QWORD*)(a1 + 96);
  if (v5 != 0) {
    v9 = *(_QWORD*)(v5 + 24);
    v10 = *(_QWORD*)(v5 + 32);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    wld_map_c24a80((void*)(&v20_.v20), v9, a2, a3);
    v12 = v20_.v20;
    v11 = v20_.v21;
    v20_.v20 = nullptr;
    v20_.v21 = nullptr;
    *a4 = (__int64)v12;
    a4[1] = (__int64)v11;
    v13 = v20_.v22;
    v20_.v22 = 0;
    a4[2] = v13;
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
  }
  for (i = *(_QWORD**)(a1 + 120); i != nullptr; i = (_QWORD*)*i) {
    v15 = i[5];
    v16 = *(_QWORD*)(v15 + 24);
    v17 = *(_QWORD*)(v15 + 32);
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      wld_map_c24a80((void*)(&v20_.v20), v16, a2, a3);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt1(v17);
      }
    }
    else {
      wld_map_c24a80((void*)(&v20_.v20), v16, a2, a3);
    }
    v18 = v20_.v20;
    if (v20_.v21 != v20_.v20) {
      wld_map_c21f20(a4, a4[1], v20_.v20, v20_.v21, (v20_.v21 - v20_.v20) >> 3);
      v18 = v20_.v20;
    }
    if (v18 != nullptr) {
      v20_.v21 = v18;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v19 = 128;
      }
      else {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v18);
    }
  }
}

__attribute__((swiftcall)) void wld_map_c21740(PSEUDO_X8 x8_, __int64* result,
                                               __int64 a2, unsigned __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v5;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[2];
    __int64 v17;
  } v16_;

  v5 = result;
  if (a3 != 0) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (a3 >= 0x17) {
      v9 = a2;
      if ((a3 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (a3 | 7) + 1;
      }
      v11 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
      a2 = v9;
      v7 = (char*)v11;
      v16_.v16[1] = a3;
      v16_.v17 = v11;
      v16_.v16[0] = v10 | 1;
    }
    else {
      LOBYTE(v16_.v16[0]) = 2 * a3;
      v7 = (char*)v16_.v16 + 1;
    }
    memmove_alt1((__int64)v7, a2, a3);
  }
  else {
    v8 = result[12];
    if (v8 != 0) {
      goto LABEL_19;
    }
    LOBYTE(v16_.v16[0]) = 0;
    v7 = (char*)v16_.v16 + 1;
  }
  v7[a3] = 0;
  result = GameRoutine_c22420(v5 + 13, (unsigned __int8*)v16_.v16);
  if ((v16_.v16[0] & 1) != 0 && v16_.v17 != 0) {
    v12 = result;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v16_.v17);
    result = v12;
  }
  if (result == nullptr) {
    *a4 = 0;
    a4[1] = 0;
    {
      result;
      return;
    }
  }
  v8 = result[5];
LABEL_19:
  v15 = *(_QWORD*)(v8 + 24);
  v14 = *(_QWORD*)(v8 + 32);
  *a4 = v15;
  a4[1] = v14;
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64 wld_map_c218a0(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  _QWORD* v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  _DWORD* v9;
  unsigned __int64 v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  unsigned __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  char* v24;
  int v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* i;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  _QWORD* j;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v71;
  struct {
    __int64 v72;
    __int64 v73;
    char* v74;
  } v72_;
  struct {
    __int64 v75;
    unsigned __int64 v76;
    char* v77;
  } v75_;
  struct {
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
  } v78_;
  __int64 v82;

  v2 = a1[12];
  if (v2 == 0 || *(_DWORD*)(v2 + 240) != 5) {
    return 0;
  }
  v5 = a1 + 15;
  while (1) {
    v5 = (_QWORD*)*v5;
    if (v5 == nullptr) {
      break;
    }
    if (*(_DWORD*)(v5[5] + 240LL) != 5) {
      return 0;
    }
  }
  v6 = (__int64*)(a2 + 8);
  v71 = a1 + 15;
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    fw_text_String_CopyTerminated(&v75_.v75, *(_QWORD*)(a2 + 24),
                                  *(_QWORD*)(a2 + 16));
  }
  else {
    v7 = *(_QWORD*)(a2 + 16);
    v75_.v75 = *v6;
    v75_.v76 = v7;
    v75_.v77 = *(char**)(a2 + 24);
  }
  if (GameRoutine_b872a0(*a1)) {
    goto LABEL_17;
  }
  v8 = *(_QWORD*)(a2 + 16);
  if ((*(_BYTE*)v6 & 1) == 0) {
    v8 = *(_BYTE*)v6 >> 1;
  }
  if (v8 != 4) {
    goto LABEL_17;
  }
  v9 = *(_DWORD**)(a2 + 24);
  if ((*(_BYTE*)v6 & 1) == 0) {
    v9 = (_DWORD*)(a2 + 9);
  }
  if (*v9 == 1819043144) {
    v72_.v72 = 0x6C616D726F4E0CLL;
  }
  else {
  LABEL_17:
    if ((*(_BYTE*)v6 & 1) != 0) {
      fw_text_String_CopyTerminated(&v72_.v72, *(_QWORD*)(a2 + 24),
                                    *(_QWORD*)(a2 + 16));
    }
    else {
      v10 = *(_QWORD*)(a2 + 16);
      v72_.v72 = *v6;
      v72_.v73 = v10;
      v72_.v74 = *(char**)(a2 + 24);
    }
  }
  v11 = *(_DWORD*)a2;
  v12 = a1[18];
  if (v12 != 0) {
    v13 = 0;
  }
  else if (a1[19] != 0) {
    v12 = 0;
    v13 = 0;
  }
  else {
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         128, 16, 0);
    *(_QWORD*)v12 = 0;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_QWORD*)(v12 + 80) = 0;
    *(_QWORD*)(v12 + 88) = 0;
    *(_QWORD*)(v12 + 96) = 0;
    *(_QWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 112) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_DWORD*)(v12 + 124) = 2;
    v15 = *v14;
    a1[18] = v12;
    v16 = fw_memory_HeapManager_Allocate(v15, 128, 16, 0);
    v13 = 1;
    *(_QWORD*)v16 = 0;
    *(_QWORD*)(v16 + 8) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_QWORD*)(v16 + 24) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_QWORD*)(v16 + 40) = 0;
    *(_QWORD*)(v16 + 48) = 0;
    *(_QWORD*)(v16 + 56) = 0;
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 0;
    *(_QWORD*)(v16 + 80) = 0;
    *(_QWORD*)(v16 + 88) = 0;
    *(_QWORD*)(v16 + 96) = 0;
    *(_QWORD*)(v16 + 104) = 0;
    *(_QWORD*)(v16 + 112) = 0;
    *(_QWORD*)(v16 + 120) = 0;
    *(_DWORD*)(v16 + 124) = 2;
    a1[19] = v16;
  }
  v17 = v75_.v75;
  v18 = v75_.v76;
  v19 = (__int64*)(v12 + 24LL * v11);
  v20 = *(unsigned __int8*)v19;
  if ((v20 & 1) != 0) {
    v21 = v19[1];
  }
  else {
    v21 = v20 >> 1;
  }
  if ((v75_.v75 & 1) != 0) {
    v22 = v75_.v76;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v75_.v75 >> 1;
  }
  if (v21 == v22) {
    if ((v20 & 1) != 0) {
      v23 = v19[2];
    }
    else {
      v23 = (__int64)v19 + 1;
    }
    if ((v75_.v75 & 1) != 0) {
      v24 = v75_.v77;
    }
    else {
      v24 = (char*)&v75_.v75 + 1;
    }
    if (memcmp_alt2(v23, (__int64)v24, v21) != 0) {
      v25 = 1;
    }
    else {
      v25 = v13;
    }
    if (v11 > 1) {
      goto LABEL_59;
    }
  LABEL_44:
    v26 = (unsigned __int8*)(a1[19] + 24LL * v11);
    v27 = *v26;
    if ((v27 & 1) != 0) {
      v28 = *((_QWORD*)v26 + 1);
    }
    else {
      v28 = v27 >> 1;
    }
    v29 = v72_.v73;
    if ((v72_.v72 & 1) == 0) {
      v29 = (unsigned __int64)(unsigned __int8)v72_.v72 >> 1;
    }
    if (v28 == v29) {
      if ((v27 & 1) != 0) {
        v30 = *((_QWORD*)v26 + 2);
      }
      else {
        v30 = (__int64)(v26 + 1);
      }
      if ((v72_.v72 & 1) != 0) {
        v31 = v72_.v74;
      }
      else {
        v31 = (char*)&v72_.v72 + 1;
      }
      if (memcmp_alt2(v30, (__int64)v31, v28) != 0) {
        v13 = 1;
      }
    }
    else {
      v13 = 1;
    }
    goto LABEL_59;
  }
  v25 = 1;
  if (v11 <= 1) {
    goto LABEL_44;
  }
LABEL_59:
  if (v25 != 0) {
    if (v19 != &v75_.v75) {
      if ((v20 & 1) != 0) {
        if ((v17 & 1) != 0) {
          v34 = v75_.v77;
        }
        else {
          v34 = (char*)&v75_.v75 + 1;
        }
        SpineModel_64dde0(v19, (__int64)v34, v22);
      }
      else if ((v17 & 1) != 0) {
        GameRoutine_64df20(v19, (__int64)v75_.v77, v18);
      }
      else {
        v32 = v75_.v75;
        v33 = (__int64)v75_.v77;
        v19[1] = v75_.v76;
        v19[2] = v33;
        *v19 = v32;
      }
    }
    GameRoutine_18df040((char*)a1[18]);
    v35 = a1[12];
    v36 = *(_QWORD*)(v35 + 24);
    v37 = *(_QWORD*)(v35 + 32);
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
      wld_map_ObjectGroup_FadeMapEffects(v36, a1[18], v11, 0,
                                         *(float*)(a2 + 32));
      if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak_alt1(v37);
      }
    }
    else {
      wld_map_ObjectGroup_FadeMapEffects(v36, a1[18], v11, 0,
                                         *(float*)(a2 + 32));
    }
    v38 = *(__int64**)(a1[12] + 264);
    v39 = v38[52];
    if (*(_BYTE*)(v39 + 112) == 1) {
      v78_.v78 = *(_QWORD*)(a1[12] + 264);
      v40 = a1[18];
      v78_.v79 = *v38;
      wld_map_MapEffectPlacer_PlaceTagged((__int64)&v78_.v78, v39 + 8, v40,
                                          0x0.0p+0f);
    }
    for (i = (_QWORD*)*v71; i != nullptr; i = (_QWORD*)*i) {
      v45 = *(__int64**)(i[5] + 264LL);
      v46 = v45[52];
      if (*(_BYTE*)(v46 + 112) == 1) {
        v78_.v78 = *(_QWORD*)(i[5] + 264LL);
        v47 = a1[18];
        v78_.v79 = *v45;
        wld_map_MapEffectPlacer_PlaceTagged((__int64)&v78_.v78, v46 + 8, v47,
                                            0x0.0p+0f);
      }
    }
  }
  if (v13 != 0) {
    v42 = (__int64*)(a1[19] + 24LL * v11);
    if (v42 != &v72_.v72) {
      if ((*(_BYTE*)v42 & 1) != 0) {
        if ((v72_.v72 & 1) != 0) {
          v48 = v72_.v74;
        }
        else {
          v48 = (char*)&v72_.v72 + 1;
        }
        if ((v72_.v72 & 1) != 0) {
          v49 = v72_.v73;
        }
        else {
          v49 = (unsigned __int64)(unsigned __int8)v72_.v72 >> 1;
        }
        SpineModel_64dde0(v42, (__int64)v48, v49);
      }
      else if ((v72_.v72 & 1) != 0) {
        GameRoutine_64df20(v42, (__int64)v72_.v74, v72_.v73);
      }
      else {
        v43 = v72_.v72;
        v44 = (__int64)v72_.v74;
        v42[1] = v72_.v73;
        v42[2] = v44;
        *v42 = v43;
      }
    }
    GameRoutine_18df040((char*)a1[19]);
    v50 = a1[12];
    v51 = *(_QWORD*)(v50 + 24);
    v52 = *(_QWORD*)(v50 + 32);
    if (v52 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 8), 1u,
                                memory_order_relaxed);
      wld_map_ObjectGroup_FadeMapEffects(v51, a1[19], v11, 1,
                                         *(float*)(a2 + 32));
      if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
        std___1___shared_weak_count___release_weak_alt1(v52);
      }
    }
    else {
      wld_map_ObjectGroup_FadeMapEffects(v51, a1[19], v11, 1,
                                         *(float*)(a2 + 32));
    }
    v53 = a1[12];
    v54 = *(_QWORD*)(v53 + 272);
    if (*(_BYTE*)(v54 + 64) == 1) {
      v55 = a1[19];
      v78_.v78 = v54 + 24;
      v78_.v81 = 0x200000000LL;
      v82 = v53;
      v56 = *(_QWORD*)(v53 + 24);
      v78_.v80 = v55;
      v57 = *(__int64**)(v56 + 88);
      v58 = *(__int64**)(v56 + 96);
      while (v57 != v58) {
        v59 = *v57++;
        v78_.v79 = v59;
        GameHr_198d120(&v82, (__int64)&v78_.v78);
      }
    }
    for (j = (_QWORD*)*v71; j != nullptr; j = (_QWORD*)*j) {
      v61 = j[5];
      v62 = *(_QWORD*)(v61 + 272);
      if (*(_BYTE*)(v62 + 64) == 1) {
        v78_.v81 = 0x200000000LL;
        v82 = v61;
        v63 = a1[19];
        v64 = *(_QWORD*)(v61 + 24);
        v78_.v78 = v62 + 24;
        v78_.v80 = v63;
        v65 = *(__int64**)(v64 + 88);
        v66 = *(__int64**)(v64 + 96);
        while (v65 != v66) {
          v67 = *v65++;
          v78_.v79 = v67;
          GameHr_198d120(&v82, (__int64)&v78_.v78);
        }
      }
    }
  }
  if ((v72_.v72 & 1) != 0 && v72_.v74 != nullptr) {
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, (__int64)v72_.v74);
  }
  if ((v75_.v75 & 1) != 0 && v75_.v77 != nullptr) {
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, (__int64)v75_.v77);
  }
  return 0;
}

void wld_map_c21f20(__int64* a1, __int64 a2, char* a3, char* a4, __int64 a5)
{
  __int64 v5;
  unsigned __int64 v6;
  char* v8;
  __int64 v9;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  char* v24;
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
    v9 = a2;
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
          memmove_alt1(a2 + 8 * a5, a2, v6 - v27);
        }
        v31 = 8 * a5 - 8;
        if ((~(_BYTE)v31 & 0x38) != 0) {
          v34 = -(__int64)(((unsigned __int8)((unsigned int)v31 >> 3) + 1) & 7);
          v32 = (_QWORD*)v9;
          do {
            v35 = *(_QWORD*)v8;
            v8 += 8;
            v36 = __CFADD__(v34++, 1);
            *v32++ = v35;
          } while (!v36);
        }
        else {
          v32 = (_QWORD*)v9;
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
          } while (v32 != (_QWORD*)(v9 + 8 * a5));
        }
      }
      else {
        v18 = a4 - &a3[v16];
        if (a4 != &a3[v16]) {
          v19 = a4;
          memmove_alt1(a1[1], (__int64)&a3[v16], a4 - &a3[v16]);
          a4 = v19;
        }
        v20 = v6 + v18;
        a1[1] = v6 + v18;
        if (v17 >= 1) {
          v21 = v9 + 8 * a5;
          v22 = v6 + v18;
          if (v20 - 8 * a5 < v6) {
            v23 = &a4[v9];
            v24 = &a4[v9 + -8 * a5];
            do {
              v25 = *(_QWORD*)(v24 - v8);
              v24 += 8;
              *(_QWORD*)(v23 - v8) = v25;
              v23 += 8;
            } while (v24 - v8 < v6);
            v22 = v23 - v8;
          }
          a1[1] = v22;
          if (v20 != v21) {
            memmove_alt1(v9 + 8 * a5, v9, v20 - v21);
          }
          do {
            v26 = *(_QWORD*)v8;
            v8 += 8;
            v16 -= 8;
            *(_QWORD*)v9 = v26;
            v9 += 8;
          } while (v16 != 0);
        }
      }
    }
    else {
      v11 = *a1;
      v12 = a5 + ((__int64)(v6 - *a1) >> 3);
      if (v12 >> 61 != 0) {
        GameRoutine_81e570();
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
      memcpy_alt1(v15 + v9 - v11, (__int64)v8, 8 * a5);
      memcpy_alt1(v15 + v9 - v11 + 8 * a5, v9, v6 - v9);
      a1[1] = v9;
      memcpy_alt1(v15, v11, v9 - v11);
      *a1 = v15;
      a1[1] = v15 - v11 + 8 * a5 + v6;
      a1[2] = v15 + 8 * v14;
      if (v11 != 0) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v11);
      }
    }
  }
}

__int64 wld_map_c22d40(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v11;
    char gap16_[8];
    char v12;
  } v11_;

  v2 = *a2;
  GameRoutine_c22e40((void*)((__int64)&v11_.v11), a1, a2);
  v3 = v11_.v11;
  v11_.v11 = 0;
  if (v3 != 0) {
    v4 = fw_memory_g_heap_manager_ptr;
    if (v11_.v12 == 1) {
      v5 = *(_QWORD*)(v3 + 40);
      *(_QWORD*)(v3 + 40) = 0;
      if (v5 != 0) {
        GameHr_c0f580(v5);
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v6, v5);
      }
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        v7 = *(_QWORD*)(v3 + 32);
        if (v7 != 0) {
          v8 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v8, v7);
        }
      }
    }
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v9, v3);
  }
  return v2;
}

void wld_map_c235c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64* v8;
  unsigned __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  atomic_ullong* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
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
  struct {
    __int64 v62;
    unsigned __int64* v63;
    unsigned __int64* v64;
    __int64 v65;
  } v62_;

  v1 = *(_QWORD*)(a1 + 112);
  v2 = *(_QWORD*)(a1 + 120);
  v3 = (__int64*)(a1 + 112);
  if (v2 != v1) {
    do {
      v2 -= 8;
      GameHr_a867a0(v2);
      v1 = *v3;
    } while (v2 != *v3);
  }
  *(_QWORD*)(a1 + 120) = v1;
  v5 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 128) != v1) {
    v3[1] = 0;
    v3[2] = 0;
    *v3 = 0;
    if (v1 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v6, v1);
    }
  }
  v62_.v64 = nullptr;
  v62_.v65 = 0;
  v62_.v62 = 0;
  v62_.v63 = nullptr;
  GameRoutine_a7e300_alt1(&v62_.v62, (__int64**)(a1 + 88));
  v7 = v62_.v62;
  if (v62_.v62 != 0) {
    v8 = v62_.v63;
    v9 = v62_.v64;
    if (v62_.v63 != v62_.v64) {
      v10 = *(_QWORD*)(v62_.v62 + 48);
      if (v10 != 0) {
        v11 = std___1___shared_weak_count_lock_alt1(v10);
        if (v11 != 0) {
          v12 = *(_QWORD*)(v7 + 40);
          v13 = v11;
          if (v12 != 0) {
            do {
              v14 = *v8++;
              Scene_a70ec0(v12, v14);
            } while (v8 != v9);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak_alt1(v13);
          }
        }
      }
      v62_.v62 = 0;
      v62_.v64 = v62_.v63;
    }
  }
  GameHr_a7dfc0(&v62_.v62);
  v15 = *(_QWORD*)(a1 + 88);
  for (i = *(_QWORD*)(a1 + 96); i != v15; v15 = *(_QWORD*)(a1 + 88)) {
    i -= 8;
    GameHr_a867a0(i);
  }
  v17 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 96) = v15;
  if (v17 != v15) {
    *(_QWORD*)(a1 + 96) = 0;
    *(_QWORD*)(a1 + 104) = 0;
    *(_QWORD*)(a1 + 88) = 0;
    if (v15 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v18, v15);
    }
  }
  v20 = (__int64*)(a1 + 136);
  v19 = *(_QWORD*)(a1 + 136);
  v21 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 144) = v19;
  if (v21 != v19) {
    *(_QWORD*)(a1 + 144) = 0;
    *(_QWORD*)(a1 + 152) = 0;
    *v20 = 0;
    if (v19 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v22, v19);
    }
  }
  v23 = *(__int64**)(a1 + 200);
  v24 = *(__int64**)(a1 + 208);
  if (v23 != v24) {
    while (1) {
      v25 = *v23;
      v26 = v23[1];
      if (v26 == 0) {
        break;
      }
      v27 = (atomic_ullong*)(v26 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      v62_.v62 = v25;
      v62_.v63 = (unsigned __int64*)v26;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      GameHr_14a1390(&v62_.v62, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v27, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_35;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak_alt1(v26);
        if (atomic_fetch_add(v27, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        LABEL_35:
          v28 = v23[6];
          if (v28 == 0) {
            goto LABEL_31;
          }
          goto LABEL_41;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak_alt1(v26);
      v28 = v23[6];
      if (v28 != 0) {
        goto LABEL_41;
      }
    LABEL_31:
      v23 += 8;
      if (v23 == v24) {
        v23 = *(__int64**)(a1 + 200);
        v24 = *(__int64**)(a1 + 208);
        v20 = (__int64*)(a1 + 136);
        goto LABEL_43;
      }
    }
    v62_.v62 = *v23;
    v62_.v63 = nullptr;
    GameHr_14a1390(&v62_.v62, 1);
    v28 = v23[6];
    if (v28 == 0) {
      goto LABEL_31;
    }
  LABEL_41:
    (*(void (**)(__int64))(*(_QWORD*)v28 + 48LL))(v28);
    goto LABEL_31;
  }
LABEL_43:
  while (v24 != v23) {
    v29 = (__int64*)*(v24 - 2);
    if (v24 - 6 == v29) {
      v30 = 32;
    }
    else {
      if (v29 == nullptr) {
        goto LABEL_51;
      }
      v30 = 40;
    }
    (*(void (**)(__int64))(*v29 + v30))((__int64)v29);
  LABEL_51:
    v31 = *(v24 - 7);
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt1(v31);
    }
    v24 -= 8;
  }
  *(_QWORD*)(a1 + 208) = v23;
  GameHr_c25240((__int64*)(a1 + 200), 0);
  GameHr_a867a0(a1 + 80);
  v32 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 80) = 0;
  if (v32 == 0) {
    goto LABEL_70;
  }
  v33 = *(_QWORD*)(a1 + 208);
  if (v32 == v33) {
    goto LABEL_67;
  }
  do {
    v34 = *(_QWORD**)(v33 - 16);
    if ((_QWORD*)(v33 - 48) == v34) {
      v35 = 32;
      goto LABEL_62;
    }
    if (v34 != nullptr) {
      v35 = 40;
    LABEL_62:
      (*(void (**)(__int64))(*v34 + v35))((__int64)v34);
    }
    v36 = *(_QWORD*)(v33 - 56);
    if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak_alt1(v36);
    }
    v33 -= 64;
  } while (v33 != v32);
  v37 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 208) = v32;
  v32 = v37;
  if (v37 != 0) {
  LABEL_67:
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v38, v32);
  }
LABEL_70:
  v39 = *(_QWORD**)(a1 + 176);
  while (v39 != nullptr) {
    v41 = (__int64)v39;
    v39 = (_QWORD*)*v39;
    if ((*(_BYTE*)(v41 + 16) & 1) != 0 && *(_QWORD*)(v41 + 32) != 0) {
      v42 = v41;
      v43 = *(_QWORD*)(v41 + 32);
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v44 = 128;
      }
      else {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v44, v43);
      v41 = v42;
    }
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
      v40 = 128;
    }
    else {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v40, v41);
  }
  v45 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 160) = 0;
  if (v45 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v46, v45);
  }
  v47 = *v20;
  if (*v20 != 0) {
    v48 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 144) = v47;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v48 + v49, v47);
  }
  v50 = *v3;
  if (*v3 != 0) {
    v51 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 120) = v50;
    v52 = 128;
    if (*(_QWORD*)(v51 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v51 + v52, v50);
  }
  v53 = *(_QWORD*)(a1 + 88);
  if (v53 != 0) {
    v54 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 96) = v53;
    v55 = 128;
    if (*(_QWORD*)(v54 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v54 + v55, v53);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v56 = *(_QWORD*)(a1 + 72);
    if (v56 != 0) {
      v57 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v57, v56);
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v58 = *(_QWORD*)(a1 + 48);
    if (v58 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v59, v58);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v60 = *(_QWORD*)(a1 + 24);
    if (v60 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v61, v60);
    }
  }
}

__attribute__((swiftcall)) void wld_map_c23be0(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, unsigned __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  const char* v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    __int64 v22;
  } v21_;

  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    v8 = a2;
    if ((a3 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (a3 | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2 = v8;
    v7 = (char*)v10;
    v21_.v21[1] = a3;
    v21_.v22 = v10;
    v21_.v21[0] = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21_.v21[0]) = 2 * a3;
  v7 = (char*)v21_.v21 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v7, a2, a3);
  }
  v7[a3] = 0;
  v11 = *(unsigned __int8*)(a1 + 56);
  v12 = (v11 & 1) == 0;
  v13 = v11 >> 1;
  if (v12) {
    v14 = (const char*)(a1 + 57);
  }
  else {
    v14 = *(const char**)(a1 + 72);
  }
  if (v12) {
    v15 = v13;
  }
  else {
    v15 = *(_QWORD*)(a1 + 64);
  }
  v16 = (__int64*)GameRoutine_1a0a680_alt1((__int64)v21_.v21, 0, v14, v15);
  v17 = *v16;
  v18 = v16[1];
  *v16 = 0;
  v16[1] = 0;
  *a4 = v17;
  a4[1] = v18;
  v19 = v16[2];
  v16[2] = 0;
  a4[2] = v19;
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v21_.v22);
  }
}

__int64 wld_map_c23d20(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6;
  char v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v27[2];
    char* v28;
  } v27_;

  v6 = Components_a870e0(*(__int64**)a1, 0);
  GameRoutine_a8c380(v6, *(_QWORD**)(a1 + 80));
  wld_map_c23be0((void*)(v27_.v27), a1, a2, a3);
  v7 = v27_.v27[0];
  if ((v27_.v27[0] & 1) != 0) {
    v8 = v27_.v27[1];
  }
  else {
    v8 = (unsigned __int64)LOBYTE(v27_.v27[0]) >> 1;
  }
  if (v8 != 0) {
    if ((v27_.v27[0] & 1) != 0) {
      v9 = v27_.v28;
    }
    else {
      v9 = (char*)v27_.v27 + 1;
    }
    if (v8 >= 0xFF) {
      v10 = 255;
    }
    else {
      v10 = v8;
    }
    memmove_alt1(v6 + 16, (__int64)v9, v10);
  }
  *(_QWORD*)(v6 + 272) = v8;
  *(_BYTE*)(v6 + 16 + v8) = 0;
  if ((v7 & 1) != 0 && v27_.v28 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v27_.v28);
  }
  v13 = *(__int64**)(a1 + 96);
  v12 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v13 >= v12) {
    v15 = *(_QWORD*)(a1 + 88);
    v16 = (char*)v13 - v15;
    v17 = ((__int64)v13 - v15) >> 3;
    v18 = v17 + 1;
    if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
      GameRoutine_81e570();
    }
    v19 = v12 - v15;
    if (v19 >> 2 > v18) {
      v18 = v19 >> 2;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
      v20 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v20 = v18;
    }
    if (v20 != 0) {
      if (v20 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
    }
    else {
      v21 = 0;
    }
    v22 = v21 + 8 * v20;
    v23 = (unsigned __int64)v13 - v15;
    v24 = (__int64)&v16[v21 + -8 * v17];
    *(_QWORD*)&v16[v21] = v6;
    v14 = (__int64)&v16[v21 + 8];
    memcpy_alt1(v24, v15, v23);
    *(_QWORD*)(a1 + 88) = v24;
    *(_QWORD*)(a1 + 96) = v14;
    *(_QWORD*)(a1 + 104) = v22;
    if (v15 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v15);
    }
  }
  else {
    *v13 = v6;
    v14 = (__int64)(v13 + 1);
  }
  *(_QWORD*)(a1 + 96) = v14;
  return v6;
}

__attribute__((swiftcall)) void wld_map_c24020(PSEUDO_X8 x8_, __int64 a1,
                                               unsigned __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  signed __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;

  Object_a87520((void*)(a3), *(__int64**)a1, a2, 1);
  v6 = *(_QWORD*)(a1 + 88);
  v7 = *(_QWORD*)(a1 + 96) - v6;
  v8 = (v7 >> 3) + a2;
  if (v8 > (*(_QWORD*)(a1 + 104) - v6) >> 3) {
    if (v8 >> 61 != 0) {
    LABEL_27:
      GameRoutine_81e570();
    }
    v9 = fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v8, 16, 0);
    v11 = v10 + v7;
    v12 = v10 + 8 * v8;
    v13 = v10 + v7 - 8 * (v7 >> 3);
    memcpy_alt1(v13, v6, v7);
    *(_QWORD*)(a1 + 88) = v13;
    *(_QWORD*)(a1 + 96) = v11;
    *(_QWORD*)(a1 + 104) = v12;
    if (v6 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v14, v6);
    }
  }
  v15 = (__int64*)*a3;
  v16 = (__int64*)a3[1];
  if ((__int64*)*a3 != v16) {
    do {
      v18 = *v15;
      GameRoutine_a8c380(*v15, *(_QWORD**)(a1 + 80));
      v20 = *(__int64**)(a1 + 96);
      v19 = *(_QWORD*)(a1 + 104);
      if ((unsigned __int64)v20 < v19) {
        *v20 = v18;
        v17 = (__int64)(v20 + 1);
      }
      else {
        v21 = *(_QWORD*)(a1 + 88);
        v22 = (char*)v20 - v21;
        v23 = ((__int64)v20 - v21) >> 3;
        v24 = v23 + 1;
        if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
          goto LABEL_27;
        }
        v25 = v19 - v21;
        if (v25 >> 2 > v24) {
          v24 = v25 >> 2;
        }
        if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
          v26 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v26 = v24;
        }
        if (v26 != 0) {
          if (v26 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v27 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               8 * v26, 16, 0);
        }
        else {
          v27 = 0;
        }
        v28 = v27 + 8 * v26;
        v29 = (unsigned __int64)v20 - v21;
        v30 = (__int64)&v22[v27 + -8 * v23];
        *(_QWORD*)&v22[v27] = v18;
        v17 = (__int64)&v22[v27 + 8];
        memcpy_alt1(v30, v21, v29);
        *(_QWORD*)(a1 + 88) = v30;
        *(_QWORD*)(a1 + 96) = v17;
        *(_QWORD*)(a1 + 104) = v28;
        if (v21 != 0) {
          v31 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v31,
                                             v21);
        }
      }
      ++v15;
      *(_QWORD*)(a1 + 96) = v17;
    } while (v15 != v16);
  }
}

__int64 wld_map_c24890(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6;
  char v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v27[2];
    char* v28;
  } v27_;

  v6 = Components_a870e0(*(__int64**)a1, 0);
  GameRoutine_a8c380(v6, *(_QWORD**)(a1 + 80));
  wld_map_c23be0((void*)(v27_.v27), a1, a2, a3);
  v7 = v27_.v27[0];
  if ((v27_.v27[0] & 1) != 0) {
    v8 = v27_.v27[1];
  }
  else {
    v8 = (unsigned __int64)LOBYTE(v27_.v27[0]) >> 1;
  }
  if (v8 != 0) {
    if ((v27_.v27[0] & 1) != 0) {
      v9 = v27_.v28;
    }
    else {
      v9 = (char*)v27_.v27 + 1;
    }
    if (v8 >= 0xFF) {
      v10 = 255;
    }
    else {
      v10 = v8;
    }
    memmove_alt1(v6 + 16, (__int64)v9, v10);
  }
  *(_QWORD*)(v6 + 272) = v8;
  *(_BYTE*)(v6 + 16 + v8) = 0;
  if ((v7 & 1) != 0 && v27_.v28 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v27_.v28);
  }
  v13 = *(__int64**)(a1 + 120);
  v12 = *(_QWORD*)(a1 + 128);
  if ((unsigned __int64)v13 >= v12) {
    v15 = *(_QWORD*)(a1 + 112);
    v16 = (char*)v13 - v15;
    v17 = ((__int64)v13 - v15) >> 3;
    v18 = v17 + 1;
    if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
      GameRoutine_81e570();
    }
    v19 = v12 - v15;
    if (v19 >> 2 > v18) {
      v18 = v19 >> 2;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
      v20 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v20 = v18;
    }
    if (v20 != 0) {
      if (v20 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
    }
    else {
      v21 = 0;
    }
    v22 = v21 + 8 * v20;
    v23 = (unsigned __int64)v13 - v15;
    v24 = (__int64)&v16[v21 + -8 * v17];
    *(_QWORD*)&v16[v21] = v6;
    v14 = (__int64)&v16[v21 + 8];
    memcpy_alt1(v24, v15, v23);
    *(_QWORD*)(a1 + 112) = v24;
    *(_QWORD*)(a1 + 120) = v14;
    *(_QWORD*)(a1 + 128) = v22;
    if (v15 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v15);
    }
  }
  else {
    *v13 = v6;
    v14 = (__int64)(v13 + 1);
  }
  *(_QWORD*)(a1 + 120) = v14;
  return v6;
}

__attribute__((swiftcall)) void wld_map_c24a80(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, unsigned __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  _QWORD* v5;
  atomic_uchar* v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  unsigned __int8* v16;
  unsigned __int8* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;

  v4 = *(_QWORD**)(a1 + 136);
  v5 = *(_QWORD**)(a1 + 144);
  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if (v4 != v5) {
    v9 = (atomic_uchar*)GameData_212d498;
    v10 = GameData_212d490;
    do {
      v11 = *v4;
      if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)v9) != 0) {
        *v10 = wld_Crc32_alt1(0, "MapObjectModule", 0xFu);
        __cxa_guard_release_alt1((__int64)v9);
      }
      v12 = *(_QWORD*)(v11 + 512);
      v13 = v12;
      do {
        if (v13 == *(_QWORD*)(v11 + 504)) {
          goto LABEL_23;
        }
        v14 = *(_DWORD*)(v13 - 16);
        v13 -= 16;
        v12 -= 16;
      } while (v14 != *v10);
      if (*(_QWORD*)(v11 + 512) == v12 || (v15 = *(_QWORD*)(v12 + 8)) == 0) {
      LABEL_23:
        if (a3 == *(_QWORD*)(*v4 + 272LL) &&
            memcmp_alt2(a2, *v4 + 16LL, a3) == 0) {
          goto LABEL_3;
        }
      }
      else {
        v16 = *(unsigned __int8**)(v15 + 128);
        v17 = *(unsigned __int8**)(v15 + 136);
        if (v16 != v17) {
          while (1) {
            v18 = *v16;
            v19 = *((_QWORD*)v16 + 1);
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (a3 == v19) {
              v20 = (v18 & 1) != 0 ? *((_QWORD*)v16 + 2) : (__int64)(v16 + 1);
              if (memcmp_alt2(a2, v20, a3) == 0) {
                break;
              }
            }
            v16 += 24;
            if (v16 == v17) {
              goto LABEL_4;
            }
          }
        }
        if (v16 != v17) {
        LABEL_3:
          GameRoutine_c23f00_alt1(a4, v4);
        }
      }
    LABEL_4:
      ++v4;
    } while (v4 != v5);
  }
}

__attribute__((swiftcall)) void wld_map_c24c40(PSEUDO_X8 x8_, __int64 a1,
                                               int a2, __int64 a3,
                                               unsigned __int64 a4)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v5;
  _QWORD* v6;
  atomic_uchar* v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;

  v5 = *(_QWORD**)(a1 + 88);
  v6 = *(_QWORD**)(a1 + 96);
  a5[1] = 0;
  a5[2] = 0;
  *a5 = 0;
  if (v5 != v6) {
    v11 = (atomic_uchar*)GameData_212d498;
    v12 = GameData_212d490;
    do {
      v13 = *v5;
      if (a2 == *(_DWORD*)(*v5 + 284LL)) {
        if ((atomic_load_explicit(v11, memory_order_acquire) & 1) == 0) {
          v26 = v13;
          v25 = __cxa_guard_acquire_alt1((__int64)v11);
          v13 = v26;
          if (v25 != 0) {
            *v12 = wld_Crc32_alt1(0, "MapObjectModule", 0xFu);
            __cxa_guard_release_alt1((__int64)v11);
            v13 = v26;
          }
        }
        v15 = *(_QWORD*)(v13 + 504);
        v14 = *(_QWORD*)(v13 + 512);
        v16 = v14;
        v17 = v14;
        while (v17 != v15) {
          v18 = *(_DWORD*)(v17 - 16);
          v17 -= 16;
          v16 -= 16;
          if (v18 == *v12) {
            if (v14 != v16) {
              v19 = *(_QWORD*)(v16 + 8);
              if (v19 != 0) {
                v20 = *(unsigned __int8*)(v19 + 24);
                v21 = *(_QWORD*)(v19 + 32);
                if ((v20 & 1) == 0) {
                  v21 = v20 >> 1;
                }
                if (a4 == v21) {
                  v22 = v19 + 25;
                  v23 = *(_QWORD*)(v19 + 40);
                  if ((v20 & 1) != 0) {
                    v24 = v23;
                  }
                  else {
                    v24 = v22;
                  }
                  if (memcmp_alt2(a3, v24, a4) == 0) {
                    GameRoutine_c23f00_alt1(a5, v5);
                  }
                }
              }
            }
            break;
          }
        }
      }
      ++v5;
    } while (v5 != v6);
  }
}

#pragma GCC visibility pop
