#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void gfxa_LocalLightBuffers_LocalLightBuffers_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
void gfxa_LocalLightBuffers_LocalLightBuffers_lambda1_Invoke(__int64 a1,
                                                             __int64 a2);
_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
_QWORD* GameRoutine_c5d5e0(__int64);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5de60(_QWORD*, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 Model_a636e0(__int64*, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e470[15];
extern _UNKNOWN** GameData_212e478[14];
extern _UNKNOWN** GameData_212e480[13];
extern _UNKNOWN** GameData_212e488[12];
extern __int128 GameData_1a82dc0;
extern __int64 (*GameData_1fd2770[])();
extern __int64 (*GameData_1fd27f0[])();
extern __int64 (*GameData_1fd2870[])();
extern __int64 (*GameData_1fd28f0[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22030f8;
extern int GameData_22030fc;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c5d7c0();
void __attribute__((noreturn)) GameRoutine_c5d7e0();
__int64 LocalLightBuffers_c5ade0(__int64* a1, __int64 a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 gfx_light_c53c90(float32x4_t*, float32x4_t*);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_212c568;
extern _UNKNOWN** GameData_212e4d8[2];
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82fa0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64 (*GameData_1fd2970[])();
float cosf(float);
float32x4_t RectangleLight_c53f20(__int64, float32x4_t*);
float32x4_t gfx_light_c53b70(float32x4_t*, __int64);
long double RectangleLight_c53f00(void);
long double RectangleLight_c53f10(void);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 gfxa_LocalLightBuffers_updateLightBuffer(__int64 result, __int64 a2,
                                                 __int64 a3, __int64* a4,
                                                 __int64* a5);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
long double RectangleLight_c53f00_alt1() __asm__("RectangleLight_c53f00");
long double RectangleLight_c53f10_alt1() __asm__("RectangleLight_c53f10");
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* GameHr_c5d5e0(__int64);
__int64 GameHr_ad5280(_QWORD*);
__int64 game_615760(__int64, __int64);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");

__int64 LocalLightBuffers_c5ade0(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  int i;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 (**v38)();
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 j;
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
  __int64* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64* v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  const char* v69;
  const char* v70;
  __int64 v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 (**v77)();
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64* v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64* v85;
  __int64 v86;
  const char* v87;
  const char* v88;
  char* v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 result;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  struct {
    __int64 (**v105)();
    __int64 v106;
    __int64 v107;
    char gap56_[8];
    __int64 (***v108)();
  } v105_;
  struct {
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
  } v109_;

  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[23] = 0;
  *a1 = a2;
  a1[2] = 0;
  *((_DWORD*)a1 + 6) = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[9] = 0;
  *((_DWORD*)a1 + 20) = 0;
  a1[11] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[16] = 0;
  *((_DWORD*)a1 + 34) = 0;
  v104 = (__int64)(a1 + 23);
  a1[30] = 0;
  *((_DWORD*)a1 + 58) = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[25] = 0;
  a1[26] = 0;
  a1[24] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[18] = 0;
  a1[34] = 0;
  a1[35] = 0;
  a1[32] = 0;
  a1[33] = 0;
  a1[31] = 0;
  a1[1] = 0;
  v3 = a1 + 1;
  v103 = (__int64)(a1 + 30);
  a1[8] = 0;
  v4 = a1 + 8;
  a1[15] = 0;
  v5 = a1 + 15;
  GameRoutine_604020(a1 + 36),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[51] = -1;
  GameRoutine_604020(a1 + 52),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *a1;
  a1[67] = -1;
  Model_a636e0(v3, *(_QWORD*)(v6 + 312),
               *(_QWORD*)(*(_QWORD*)(v6 + 552) + 16LL), 40960),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *v3;
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 56LL))(v7),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset_alt1(v8, 0, 0xA000u),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = a1[2];
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset_alt1(v10, 0, 0xA000u),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  Model_a636e0(v4, *(_QWORD*)(*a1 + 312),
               *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 12288),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = *v4;
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset_alt1(v12, 0, 0x3000u),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = a1[9];
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset_alt1(v14, 0, 0x3000u),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v15 = GameData_22030f8 + 31;
  }
  v16 = v15 >> 5;
  v17 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v17 = GameData_22030fc + 31;
  }
  Model_a636e0(v5, *(_QWORD*)(*a1 + 312),
               *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL),
               4LL * (int)((v16 * (v17 >> 5)) << 8)),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *v5;
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v20 = GameData_22030f8 + 31;
  }
  v21 = v20 >> 5;
  v22 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v22 = GameData_22030fc + 31;
  }
  v23 = (v21 * (v22 >> 5)) << 8;
  if (v23 >= 1) {
    memset_alt1(v19, 0, 4LL * (unsigned int)v23),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(__int64))(*(_QWORD*)v18 + 64LL))(v18),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = a1[16];
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 56LL))(v24),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v26 = GameData_22030f8 + 31;
  }
  v27 = v26 >> 5;
  v28 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v28 = GameData_22030fc + 31;
  }
  v29 = (v27 * (v28 >> 5)) << 8;
  if (v29 >= 1) {
    memset_alt1(v25, 0, 4LL * (unsigned int)v29),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(__int64))(*(_QWORD*)v24 + 64LL))(v24),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  for (i = 0; i != 8; ++i) {
    v32 = (_QWORD*)a1[24];
    if ((unsigned __int64)v32 >= a1[25]) {
      v33 = GameHr_c5d5e0(v104),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v32[5] = 0;
      v32[6] = 0;
      v32[3] = 0;
      v32[4] = 0;
      v33 = v32 + 7;
      v32[1] = 0;
      v32[2] = 0;
      *v32 = 0;
    }
    v34 = *a1;
    a1[24] = (__int64)v33;
    DecalObject_a91100(v33 - 7, *(_QWORD*)(v34 + 312),
                       *(_QWORD*)(*(_QWORD*)(v34 + 552) + 16LL), 400),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v35 = *a1;
    v36 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         416, 16, 0),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v36 = v35;
    *(_QWORD*)(v36 + 8) = 0;
    *(_QWORD*)(v36 + 72) = 0;
    *(_QWORD*)(v36 + 80) = 0;
    *(_QWORD*)(v36 + 88) = 0;
    *(_DWORD*)(v36 + 96) = 0;
    *(_QWORD*)(v36 + 104) = 0;
    *(_QWORD*)(v36 + 112) = 0;
    *(_QWORD*)(v36 + 120) = 0;
    *(_DWORD*)(v36 + 128) = 0;
    *(_QWORD*)(v36 + 136) = 0;
    *(_QWORD*)(v36 + 144) = 0;
    *(_QWORD*)(v36 + 152) = 0;
    *(_DWORD*)(v36 + 160) = 0;
    *(_QWORD*)(v36 + 168) = 0;
    *(_QWORD*)(v36 + 176) = 0;
    *(_QWORD*)(v36 + 184) = 0;
    *(_DWORD*)(v36 + 192) = 0;
    *(_DWORD*)(v36 + 224) = 0;
    *(_QWORD*)(v36 + 208) = 0;
    *(_QWORD*)(v36 + 216) = 0;
    *(_QWORD*)(v36 + 200) = 0;
    *(_DWORD*)(v36 + 64) = 0;
    *(_QWORD*)(v36 + 40) = 0;
    *(_QWORD*)(v36 + 48) = 0;
    *(_QWORD*)(v36 + 32) = 0;
    *(_QWORD*)(v36 + 248) = 0;
    *(_QWORD*)(v36 + 256) = 0;
    *(_QWORD*)(v36 + 232) = 0;
    *(_QWORD*)(v36 + 240) = 0;
    *(_QWORD*)(v36 + 56) = 0;
    v37 = (__int64*)(v36 + 56);
    *(_OWORD*)(v36 + 16) = GameData_1a82dc0;
    GameRoutine_604020((_QWORD*)(v36 + 264)),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v36 + 384) = -1;
    *(_DWORD*)(v36 + 400) = 1;
    gfx_shader_Archive_CreateShader(
        (void*)(&v105_.v105), *(__int64**)(*(_QWORD*)v36 + 13408LL),
        (__int64)"filter", 6u, (__int64)"copyToDepth", 0xBu),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v38 = v105_.v105;
    v39 = v105_.v106;
    v40 = *(_QWORD*)(v36 + 256);
    v105_.v105 = nullptr;
    v105_.v106 = 0;
    *(_QWORD*)(v36 + 248) = v38;
    *(_QWORD*)(v36 + 256) = v39;
    if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v40),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v41 = v105_.v106;
      if (v105_.v106 == 0) {
        goto LABEL_29;
      }
    }
    else {
      v41 = v105_.v106;
      if (v105_.v106 == 0) {
        goto LABEL_29;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v41),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_29:
    GameHr_ad5280(*(_QWORD**)(v36 + 248)),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))GameData_212e470[0])(v36 + 392),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e488[0])(v36 + 392, 8),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e478[0])(v36 + 392, 1),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e480[0])(v36 + 392, 1),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    for (j = 0; j != 6; ++j) {
      v47 = *(_QWORD*)v36;
      LODWORD(v105_.v105) = 3;
      v48 = *(_QWORD*)(v47 + 312);
      v49 = *(_QWORD*)(*(_QWORD*)(v47 + 552) + 16LL);
      v105_.v106 = 4;
      v105_.v107 = v48;
      GameRoutine_53bd0((void*)(&v109_.v109), (__int64)&v105_.v105),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v50 = v109_.v109;
      v51 = *v37;
      v109_.v109 = 0;
      *v37 = v50;
      if (v51 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v52 = v109_.v109;
        v109_.v109 = 0;
        if (v52 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v52 + 8LL))(v52),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v43 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 80LL))(v49),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v37[3] = v44;
      v45 = *v37;
      v37[2] = v43;
      GameRoutine_5de60(v37 + 2, v45),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v46 = *v37;
      v37 += 4;
      *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v46 + 56LL))(
          v46) = j,
   v44 = COERCE_AS(__typeof__(v44),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v46 + 64LL))(v46),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v105_.v108 = &v105_.v105;
    v109_.v111 = 0;
    v109_.v112 = 0;
    v109_.v109 = 0;
    v109_.v110 = 0;
    v105_.v105 = GameData_1fd2770;
    GameRoutine_5fc230((__int64)&v109_.v109),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v105_.v108 != nullptr) {
      ((void (*)(__int64 (***)(void), __int64*))(*v105_.v108)[6])(v105_.v108,
                                                                  &v109_.v109),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v53 = game_g_frame_clock_ptr[0];
    GameRoutine_604060(v36 + 264, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                       (__int64)&v109_.v109),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v36 +
               384) = game_615760(*(_QWORD*)(*v53 + 552), v36 + 264),
               v44 = COERCE_AS(__typeof__(v44),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v105_.v108 == &v105_.v105) {
      v54 = 4;
    }
    else {
      if (v105_.v108 == nullptr) {
        goto LABEL_41;
      }
      v54 = 5;
    }
    ((void (*)(__int64 (***)(void)))(*v105_.v108)[v54])(v105_.v108),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_41:
    v56 = (__int64*)a1[27];
    v55 = a1[28];
    if ((unsigned __int64)v56 < v55) {
      *v56 = v36;
      v31 = (__int64)(v56 + 1);
    }
    else {
      v57 = a1[26];
      v58 = (char*)v56 - v57;
      v59 = ((__int64)v56 - v57) >> 3;
      v60 = v59 + 1;
      if ((unsigned __int64)(v59 + 1) >> 61 != 0) {
        GameRoutine_c5d7c0(),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v61 = v55 - v57;
      if (v61 >> 2 > v60) {
        v60 = v61 >> 2;
      }
      if ((unsigned __int64)v61 >= 0x7FFFFFFFFFFFFFF8LL) {
        v62 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v62 = v60;
      }
      if (v62 != 0) {
        if (v62 >> 61 != 0) {
        LABEL_106:
          GameRoutine_60a210(),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v63 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v62, 16, 0),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v63 = 0;
      }
      v64 = v63 + 8 * v62;
      v65 = (unsigned __int64)v56 - v57;
      v66 = (__int64)&v58[v63 + -8 * v59];
      *(_QWORD*)&v58[v63] = v36;
      v31 = (__int64)&v58[v63 + 8];
      memcpy_alt1(v66, v57, v65),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a1[26] = v66;
      a1[27] = v31;
      a1[28] = v64;
      if (v57 != 0) {
        v67 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v57),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    a1[27] = v31;
  }
  v68 = 8;
  v69 = "filter";
  v70 = "copyToDepth";
  do {
    v72 = (_QWORD*)a1[31];
    if ((unsigned __int64)v72 >= a1[32]) {
      v73 = GameHr_c5d5e0(v103),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v72[5] = 0;
      v72[6] = 0;
      v72[3] = 0;
      v72[4] = 0;
      v73 = v72 + 7;
      v72[1] = 0;
      v72[2] = 0;
      *v72 = 0;
    }
    v74 = *a1;
    a1[31] = (__int64)v73;
    DecalObject_a91100(v73 - 7, *(_QWORD*)(v74 + 312),
                       *(_QWORD*)(*(_QWORD*)(v74 + 552) + 16LL), 80),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v75 = *a1;
    v76 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         224, 16, 0),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v76 = v75;
    *(_QWORD*)(v76 + 8) = 0;
    *(_QWORD*)(v76 + 32) = 0;
    *(_QWORD*)(v76 + 40) = 0;
    *(_QWORD*)(v76 + 48) = 0;
    *(_QWORD*)(v76 + 56) = 0;
    *(_QWORD*)(v76 + 64) = 0;
    *(_OWORD*)(v76 + 16) = GameData_1a82dc0;
    GameRoutine_604020((_QWORD*)(v76 + 72)),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v76 + 192) = -1;
    *(_DWORD*)(v76 + 208) = 1;
    gfx_shader_Archive_CreateShader((void*)(&v105_.v105),
                                    *(__int64**)(v75 + 13408), (__int64)v69, 6u,
                                    (__int64)v70, 0xBu),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v77 = v105_.v105;
    v78 = v105_.v106;
    v79 = *(_QWORD*)(v76 + 64);
    v105_.v105 = nullptr;
    v105_.v106 = 0;
    *(_QWORD*)(v76 + 56) = v77;
    *(_QWORD*)(v76 + 64) = v78;
    if (v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v79),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v80 = v105_.v106;
      if (v105_.v106 == 0) {
        goto LABEL_68;
      }
    }
    else {
      v80 = v105_.v106;
      if (v105_.v106 == 0) {
        goto LABEL_68;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v80),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_68:
    v81 = GameRoutine_ad5000(*(_QWORD**)(v76 + 56),
                             (__int64)"use_texture_array", 0x11u, 0),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_ad5280(v81),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))GameData_212e470[0])(v76 + 200),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e488[0])(v76 + 200, 8),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e478[0])(v76 + 200, 1),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e480[0])(v76 + 200, 1),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v105_.v108 = &v105_.v105;
    v109_.v111 = 0;
    v109_.v112 = 0;
    v109_.v109 = 0;
    v109_.v110 = 0;
    v105_.v105 = GameData_1fd27f0;
    GameRoutine_5fc230((__int64)&v109_.v109),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v105_.v108 != nullptr) {
      ((void (*)(__int64 (***)(void), __int64*))(*v105_.v108)[6])(v105_.v108,
                                                                  &v109_.v109),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v82 = game_g_frame_clock_ptr[0];
    GameRoutine_604060(v76 + 72, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                       (__int64)&v109_.v109),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v76 +
               192) = game_615760(*(_QWORD*)(*v82 + 552), v76 + 72),
               v44 = COERCE_AS(__typeof__(v44),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v105_.v108 == &v105_.v105) {
      v83 = 4;
    }
    else {
      if (v105_.v108 == nullptr) {
        goto LABEL_75;
      }
      v83 = 5;
    }
    ((__int64 (*)(__int64))(*v105_.v108)[v83])((__int64)v105_.v108),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_75:
    v85 = (__int64*)a1[34];
    v84 = a1[35];
    if ((unsigned __int64)v85 < v84) {
      *v85 = v76;
      v71 = (__int64)(v85 + 1);
    }
    else {
      v86 = a1[33];
      v87 = v69;
      v88 = v70;
      v89 = (char*)v85 - v86;
      v90 = ((__int64)v85 - v86) >> 3;
      v91 = v90 + 1;
      if ((unsigned __int64)(v90 + 1) >> 61 != 0) {
        GameRoutine_c5d7e0(),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v92 = v84 - v86;
      if (v92 >> 2 > v91) {
        v91 = v92 >> 2;
      }
      if ((unsigned __int64)v92 >= 0x7FFFFFFFFFFFFFF8LL) {
        v93 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v93 = v91;
      }
      if (v93 != 0) {
        if (v93 >> 61 != 0) {
          goto LABEL_106;
        }
        v94 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v93, 16, 0),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v94 = 0;
      }
      v95 = v94 + 8 * v93;
      v96 = (unsigned __int64)v85 - v86;
      v97 = (__int64)&v89[v94 + -8 * v90];
      *(_QWORD*)&v89[v94] = v76;
      v71 = (__int64)&v89[v94 + 8];
      memcpy_alt1(v97, v86, v96),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a1[33] = v97;
      a1[34] = v71;
      a1[35] = v95;
      if (v86 != 0) {
        v98 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v98 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, v86),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v69 = v87;
      v70 = v88;
    }
    a1[34] = v71;
    --v68;
  } while (v68 != 0);
  v109_.v111 = 0;
  v109_.v112 = 0;
  v109_.v109 = 0;
  v109_.v110 = 0;
  v105_.v105 = GameData_1fd2870;
  v105_.v108 = &v105_.v105;
  GameRoutine_5fc230((__int64)&v109_.v109),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v105_.v108 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v105_.v108)[6])(v105_.v108,
                                                                &v109_.v109),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v99 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 36),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)&v109_.v109),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[51] = game_615760(*(_QWORD*)(*v99 + 552), (__int64)(a1 + 36)),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v105_.v108 == &v105_.v105) {
    v100 = 4;
  LABEL_97:
    ((__int64 (*)(__int64))(*v105_.v108)[v100])((__int64)v105_.v108),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else if (v105_.v108 != nullptr) {
    v100 = 5;
    goto LABEL_97;
  }
  v109_.v111 = 0;
  v109_.v112 = 0;
  v109_.v109 = 0;
  v109_.v110 = 0;
  v105_.v105 = GameData_1fd28f0;
  v105_.v108 = &v105_.v105;
  GameRoutine_5fc230((__int64)&v109_.v109),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v105_.v108 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v105_.v108)[6])(v105_.v108,
                                                                &v109_.v109),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_604060((__int64)(a1 + 52), (__int64*)(*v99 + 568),
                     (__int64)&v109_.v109),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[67] = game_615760(*(_QWORD*)(*v99 + 552), (__int64)(a1 + 52)),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (__int64)v105_.v108;
  if (v105_.v108 == &v105_.v105) {
    v102 = 4;
    return ((__int64 (*)(__int64))(*v105_.v108)[v102])((__int64)v105_.v108);
  }
  else if (v105_.v108 != nullptr) {
    v102 = 5;
    return ((__int64 (*)(__int64))(*v105_.v108)[v102])((__int64)v105_.v108);
  }
  return result;
}

__int64 gfxa_LocalLightBuffers_updateLightBuffer(__int64 result, __int64 a2,
                                                 __int64 a3, __int64* a4,
                                                 __int64* a5)
{
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* i;
  __int64 v11;
  __int64 v12;
  __int64 j;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  int* v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  unsigned __int64 v41;
  __int64** v42;
  __int64** v43;
  int v44;
  __int64 v45;
  unsigned __int64 v46;
  bool v47;
  int v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  unsigned int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  float v57;
  __int64 v58;
  float v59;
  int v60;
  float32x4_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float32x4_t v73;
  __int128 v74;
  __int64 v75;
  float v76;
  float v77;
  unsigned int v78;
  __n128 v79;
  unsigned __int64 v80;
  float32x4_t v81;
  __int64 v82;
  int8x16_t v83;
  float32x4_t v84;
  float32x4_t v85;
  int8x16_t v86;
  int8x16_t v87;
  float32x4_t v88;
  long double v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  int32x4_t v95;
  int8x16_t v96;
  int8x16_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  int32x4_t v106;
  int32x4_t v107;
  int32x4_t v108;
  int8x16_t v109;
  int8x16_t v110;
  int8x16_t v111;
  float32x4_t v112;
  float32x4_t v113;
  unsigned __int64 v114;
  int8x16_t v115;
  float32x4_t v116;
  int8x16_t v117;
  int8x16_t v118;
  int8x16_t v119;
  int8x16_t v120;
  int8x16_t v121;
  int8x16_t v122;
  int8x16_t v123;
  int8x16_t v124;
  float32x4_t v125;
  __int128 v126;
  unsigned __int64 v127;
  float v128;
  float v129;
  unsigned int v130;
  float32x4_t v131;
  unsigned int v132;
  __int64 v133;
  float v134;
  float v135;
  float v136;
  unsigned int v137;
  float32x4_t v138;
  __int128 v139;
  unsigned __int64 v140;
  float v141;
  float v142;
  int v143;
  unsigned __int64 v144;
  float32x4_t v145;
  int8x16_t v146;
  __int64 v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  __int128 v151;
  unsigned __int64 v152;
  float v153;
  float v154;
  int v155;
  unsigned __int64 v156;
  int v157;
  float32x4_t v158;
  int8x16_t* v159;
  float32x4_t v160;
  int8x16_t v161;
  float32x4_t v162;
  float32x4_t v163;
  int8x16_t v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  int8x16_t v169;
  float32x4_t v170;
  float32x4_t v171;
  int8x16_t v172;
  float32x4_t v173;
  float32x4_t v174;
  int8x16_t v175;
  float32x4_t v176;
  int8x16_t v177;
  int8x16_t v178;
  float32x2_t v179;
  float32x2_t v180;
  float32x2_t v181;
  float v182;
  float v183;
  int v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  float* v188;
  float32x4_t v189;
  float32x4_t v190;
  float32x4_t v191;
  int8x16_t v192;
  int8x16_t v193;
  float32x4_t v194;
  float32x4_t v195;
  int8x16_t v196;
  float32x4_t v197;
  float32x4_t v198;
  float32x4_t v199;
  int8x16_t v200;
  float32x4_t v201;
  float32x4_t v202;
  int8x16_t v203;
  float32x4_t v204;
  float32x4_t v205;
  int8x16_t v206;
  int8x16_t v207;
  int8x16_t v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int128 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  float v217;
  float v218;
  float v219;
  __int64 v220;
  float32x4_t v221;
  unsigned __int64 v222;
  float v223;
  float v224;
  unsigned int v225;
  float32x4_t v226;
  unsigned int v227;
  float32x4_t v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  int v240;
  __int64 v241;
  int8x16_t v242;
  float32x4_t v243;
  float32x4x4_t v244;
  __int64 v245;
  float v246;
  __int64 v247;
  float v248;
  int8x16_t v249;
  float32x4_t v250;
  __int64 v251;
  int8x16_t v252;
  float v253;
  float v254;
  int8x16_t v255;
  __int64 v256;
  float v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  float v261;
  float v262;
  float v263;
  int v264;
  int v265;
  float32x4_t v266;
  float32x4_t v267;
  float32x4_t v268;
  __int64 v269;
  int v270;
  float v271;
  __int64* v272;
  int v273;
  int32x4_t v274;
  int v275;
  int v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  struct {
    _QWORD v283[4];
    _QWORD* v284;
    char gap488_[8];
    _QWORD v285[12];
    _QWORD v286[12];
  } v283_;
  struct {
    float32x4_t v287;
    float32x4_t v288;
    float32x4_t v289;
    float32x4_t v290;
  } v287_;
  float32x4x4_t v291;
  float32x4x4_t v292;
  float32x4x4_t v293;
  float32x4x4_t v294;
  float32x4x4_t v295;

  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(double, "d1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v5 = *(__int64**)(result + 208);
  v6 = *(__int64**)(result + 216);
  v7 = result;
  *(_QWORD*)(result + 176) = 0;
  for (*(_DWORD*)(result + 232) = 0; v5 != v6; *(_DWORD*)(v8 + 400) = 1) {
    v8 = *v5++;
    *(_QWORD*)(v8 + 8) = 0;
    *(_QWORD*)(v8 + 32) = 0;
  }
  v9 = *(__int64**)(result + 264);
  for (i = *(__int64**)(result + 272); v9 != i; *(_DWORD*)(v11 + 208) = 1) {
    v11 = *v9++;
    *(_QWORD*)(v11 + 8) = 0;
    *(_QWORD*)(v11 + 32) = 0;
  }
  if (a2 != 0 && a3 != 0) {
    v12 = *(_QWORD*)(a2 + 288);
    for (j = *(_QWORD*)(v12 + 888);; j += 16) {
      if (j == *(_QWORD*)(v12 + 896)) {
        return result;
      }
      if (*(_BYTE*)(*(_QWORD*)j + 60LL) == 1 &&
          *(_QWORD*)(*(_QWORD*)j + 8LL) != **(_QWORD**)j) {
        break;
      }
    }
    v287_.v287 = COERCE_FLOAT32X4_T(
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a3 + 16LL))(a3)),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(double, "d1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v287_.v288 = v14;
    *(_OWORD*)v283_.v286 = GameData_1a82dd0;
    *(_OWORD*)&v283_.v286[2] = GameData_1a82d00;
    v287_.v289 = v15;
    v287_.v290 = v16;
    *(_OWORD*)v283_.v285 = GameData_1a83610;
    *(_OWORD*)&v283_.v285[2] = GameData_1a83610;
    *(_OWORD*)&v283_.v285[8] = GameData_1a83610;
    *(_OWORD*)&v283_.v285[10] = GameData_1a83610;
    *(_OWORD*)&v283_.v286[4] = GameData_1a83610;
    *(_OWORD*)&v283_.v286[6] = GameData_1a82fa0;
    v17 = *(__int64**)(v7 + 8LL * *(int*)(v7 + 24) + 8);
    *(_OWORD*)&v283_.v286[8] = GameData_1a82c50;
    *(_OWORD*)&v283_.v286[10] = GameData_1a83090;
    v18 = *v17;
    *(_OWORD*)&v283_.v285[4] = GameData_1a83090;
    *(_OWORD*)&v283_.v285[6] = GameData_1a82c50;
    v279 = (*(__int64 (**)(__int64*))(v18 + 56))(v17),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(double, "d1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v19 = *(_QWORD*)(v7 + 8LL * *(int*)(v7 + 80) + 64);
    v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 56LL))(v19),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(double, "d1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v21 = *(_QWORD*)(v12 + 912);
    v22 = *(_QWORD*)(v12 + 920);
    v278 = v20;
    v23 = v22 - v21;
    if (v22 == v21) {
      v25 = nullptr;
      v24 = 0;
    }
    else {
      if ((v23 & 0x8000000000000000LL) != 0) {
        GameRoutine_6e5a20_alt1(),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(double, "d1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      v24 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(double, "d1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v25 = (int*)(v24 + v23);
      memcpy_alt1(v24, v21, v23),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(double, "d1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    v26 = (unsigned __int64)(a4[1] - *a4) >> 3;
    if ((int)v26 >= 8) {
      LODWORD(v26) = 8;
    }
    v276 = v26;
    v27 = (unsigned __int64)(a5[1] - *a5) >> 3;
    if ((int)v27 >= 8) {
      LODWORD(v27) = 8;
    }
    v275 = v27;
    v28 = a2;
    if ((int*)v24 == v25) {
      goto LABEL_144;
    }
    v273 = 0;
    v29 = (int*)v24;
    v30 = *((float*)GameData_212c190 + 1);
    v31 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v32 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v33 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    v34 = *((float*)GameData_212c188 + 1);
    v35 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v36 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v37 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v38 = -v31;
    v39 = -v33;
    v40 = -*(float*)GameData_212c188;
    v263 = -*(float*)GameData_212c190;
    v270 = *(_DWORD*)(v12 + 936);
    v262 = -v35;
    v261 = -v37;
    v265 = *(_DWORD*)(v12 + 964);
    v264 = *(_DWORD*)(v12 + 968);
    v274 = vdupq_n_s32(0x3C23D70Au);
    v267 = COERCE_AS(
        float32x4_t,
        COERCE_UNSIGNED_INT(
            0x1.0000000000000p+0f /
            (float)((float)((float)((float)((float)-(
                                                float)(v33 -
                                                       (float)((float)(v32 +
                                                                       (float)((float)-(
                                                                                   float)(v31 -
                                                                                          (float)((float)(v30 -
                                                                                                          (float)(*(float*)
                                                                                                                      GameData_212c190 *
                                                                                                                  0x1.3bd3ce0000000p-1f)) *
                                                                                                  0x1.3bd3ce0000000p-1f)) *
                                                                               0x1.3bd3ce0000000p-1f)) *
                                                               0x1.3bd3ce0000000p-1f)) *
                                            0x1.3bd3ce0000000p-1f) +
                                    0x1.0000000000000p+0f) *
                            0x1.921fb60000000p-1f) /
                    (float)((float)((float)-(
                                        float)(v37 -
                                               (float)((float)(v36 +
                                                               (float)((float)-(
                                                                           float)(v35 -
                                                                                  (float)((float)(v34 -
                                                                                                  (float)(*(float*)
                                                                                                              GameData_212c188 *
                                                                                                          0x1.3bd3ce0000000p-1f)) *
                                                                                          0x1.3bd3ce0000000p-1f)) *
                                                                       0x1.3bd3ce0000000p-1f)) *
                                                       0x1.3bd3ce0000000p-1f)) *
                                    0x1.3bd3ce0000000p-1f) +
                            0x1.0000000000000p+0f))));
    LODWORD(v41) = 0;
    *((float*)&v41 + 1) =
        0x1.0000000000000p+0f /
        (float)((float)((float)((float)((float)-(
                                            float)(v33 -
                                                   (float)((float)(v32 +
                                                                   (float)((float)-(
                                                                               float)(v31 -
                                                                                      (float)((float)(v30 -
                                                                                                      (float)(*(float*)
                                                                                                                  GameData_212c190 *
                                                                                                              0x1.3bd3ce0000000p-1f)) *
                                                                                              0x1.3bd3ce0000000p-1f)) *
                                                                           0x1.3bd3ce0000000p-1f)) *
                                                           0x1.3bd3ce0000000p-1f)) *
                                        0x1.3bd3ce0000000p-1f) +
                                0x1.0000000000000p+0f) *
                        0x1.921fb60000000p-1f) /
                (float)((float)((float)-(
                                    float)(v37 -
                                           (float)((float)(v36 +
                                                           (float)((float)-(
                                                                       float)(v35 -
                                                                              (float)((float)(v34 -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c188 *
                                                                                                      0x1.3bd3ce0000000p-1f)) *
                                                                                      0x1.3bd3ce0000000p-1f)) *
                                                                   0x1.3bd3ce0000000p-1f)) *
                                                   0x1.3bd3ce0000000p-1f)) *
                                0x1.3bd3ce0000000p-1f) +
                        0x1.0000000000000p+0f));
    v266 = COERCE_AS(float32x4_t, v41);
  LABEL_23:
    v42 = *(__int64***)(v12 + 888);
    v43 = *(__int64***)(v12 + 896);
    if (v42 == v43) {
      goto LABEL_22;
    }
    v44 = *v29;
    while (1) {
      if (*((_BYTE*)*v42 + 60) == 1) {
        v45 = **v42;
        v46 = (unsigned __int64)((*v42)[1] - v45) >> 4;
        v47 = __OFSUB__(v44, (_DWORD)v46);
        v48 = v44 - v46;
        if (v48 < 0 != v47) {
          v49 = (__int64*)(v45 + 16LL * v44);
          v51 = *v49;
          v50 = v49[1];
          if (v50 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v51 == 0) {
            v52 = 7;
            goto LABEL_42;
          }
          v52 = 7;
          if (*(_BYTE*)(v51 + 92) == 1 && (*(_BYTE*)(v51 + 93) & 1) != 0 &&
              *(float*)(v51 + 64) > 0x0.0p+0f &&
              *(float*)(v51 + 72) > 0x0.0p+0f) {
            v53 = *(_DWORD*)(v51 + 104);
            v277 = v19;
            if (v53 >= 0x20) {
              String_60a250_alt1("bitset test argument out of range"),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(double, "d1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
            if (((*(_QWORD*)(v28 + 240) >> v53) & 1) != 0) {
              v54 = *(_DWORD*)(v7 + 176);
              v283_.v283[0] = GameData_1fd2970;
              v283_.v283[1] = v7;
              v283_.v284 = v283_.v283;
              v268 = gfx_light_c53b70((float32x4_t*)v51, (__int64)v283_.v283),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(double, "d1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              if (v283_.v284 == v283_.v283) {
                v55 = 32;
              LABEL_50:
                (*(void (**)(__int64))(*v283_.v284 + v55))((__int64)v283_.v284),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(double, "d1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
              }
              else if (v283_.v284 != nullptr) {
                v55 = 40;
                goto LABEL_50;
              }
              v272 = v17;
              v52 = 7;
              v56 = v279 + 160LL * v54;
              v271 = v36;
              v57 = v34;
              v58 = v278 + 48LL * v54;
              if (*(_DWORD*)(v51 + 88) == 5) {
                v59 = 0x1.0000000000000p+0f;
              }
              else {
                v59 = 0x0.0p+0f;
              }
              *(_DWORD*)v58 = *(_DWORD*)(v51 + 8);
              *(_DWORD*)(v58 + 4) = *(float*)(v51 + 76) > 0x0.0p+0f;
              *(_DWORD*)(v58 + 8) = *(float*)(v51 + 80) > 0x0.0p+0f;
              v60 = *(_DWORD*)(v51 + 8);
              if (v60 <= 2) {
                v28 = a2;
                if (v60 != 1) {
                  if (v60 == 2) {
                    v254 = v39;
                    v257 = v38;
                    v248 = v57;
                    if (v50 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v50 + 8), 1u,
                          memory_order_relaxed);
                    }
                    v61 = *(float32x4_t*)(v51 + 256);
                    v62 = vmulq_f32(v61, v61);
                    LANES128(v62).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v62, v62, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v62).n128_u64[0])))
                            .n64_u64[0];
                    LANES128(v62).n128_u64[0] =
                        LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v62).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v62).n128_u64[0])))
                            .n64_u64[0];
                    LANES128(v62).n128_u64[1] = LANES128(v62).n128_u64[0];
                    v63 = vrsqrteq_f32(v62);
                    v64 =
                        vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v62, v63)));
                    v249 = vbicq_s8(
                        vmulq_f32(
                            v61, vmulq_f32(v64, vrsqrtsq_f32(
                                                    v64, vmulq_f32(v62, v64)))),
                        vceqzq_f32(v62));
                    LODWORD(v246) = COERCE_UNSIGNED_INT128(
                        ((long double (*)(__int64)) *
                         (_QWORD*)(*(_QWORD*)v51 + 16LL))(v51)),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(double, "d1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v65 = *(float*)(v51 + 272);
                    v66 = (float)(v65 * 0x1.1df46a0000000p-6f) *
                          0x1.0000000000000p-1f;
                    v67 = cosf((float)((float)(v65 * *(float*)(v51 + 276)) *
                                       0x1.1df46a0000000p-6f) *
                               0x1.0000000000000p-1f),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(double, "d1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v68 = cosf(v66),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(double, "d1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v69 = v67 - v68;
                    if ((float)(v67 - v68) < 0x1.0624de0000000p-10f) {
                      v69 = 0x1.0624de0000000p-10f;
                    }
                    v70 = 0x1.0000000000000p+0f / v69;
                    v71 = *(float*)(v51 + 32) + -0x1.47ae140000000p-7f;
                    if (v71 < 0x1.0000000000000p+0f) {
                      v71 = 0x1.0000000000000p+0f;
                    }
                    v72 = -(float)(v68 * v70);
                    if (v71 >= *(float*)(v51 + 280)) {
                      v71 = *(float*)(v51 + 280);
                    }
                    if (v71 < 0x1.47ae140000000p-7f) {
                      v71 = 0x1.47ae140000000p-7f;
                    }
                    v73 = vmulq_f32(vmulq_n_f32(v268, v246), v274);
                    *(_QWORD*)v56 = LANES128(v73).n128_u64[0];
                    *(_DWORD*)(v56 + 8) = LANES128(v73).n128_u32[2];
                    *(_DWORD*)(v56 + 12) = *(_DWORD*)(v51 + 32);
                    v74 = *(_OWORD*)(v51 + 16);
                    *(float*)(v56 + 28) = v59;
                    *(_DWORD*)(v56 + 44) = 0;
                    *(_QWORD*)(v56 + 16) = v74;
                    *(_DWORD*)(v56 + 24) = DWORD2(v74);
                    *(_QWORD*)(v56 + 32) = LANES128(v249).n128_u64[0];
                    *(_DWORD*)(v56 + 40) = LANES128(v249).n128_u32[2];
                    v75 = *(unsigned int*)(v51 + 284);
                    *(float*)(v56 + 48) = v70;
                    *(float*)(v56 + 52) = v72;
                    *(_QWORD*)(v56 + 56) =
                        COERCE_UNSIGNED_INT(0x1.0000000000000p+0f / v71) |
                        (unsigned __int64)(v75 << 32);
                    *(_DWORD*)(v56 + 64) = *(_DWORD*)(v51 + 76);
                    *(_DWORD*)(v56 + 68) = *(_DWORD*)(v51 + 80);
                    if (*(_BYTE*)(v51 + 94) != 0) {
                      v76 = 0x0.0p+0f;
                    }
                    else {
                      v76 = 0x1.0000000000000p+0f;
                    }
                    *(float*)(v56 + 72) = v76;
                    if (*(_BYTE*)(v51 + 95) != 0) {
                      v77 = 0x0.0p+0f;
                    }
                    else {
                      v77 = 0x1.0000000000000p+0f;
                    }
                    *(float*)(v56 + 76) = v77;
                    v292.val[0] = *(float32x4_t*)GameData_212c2b0;
                    v292.val[1] = *((float32x4_t*)GameData_212c2b0 + 1);
                    v292.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) +
                                                  (_QWORD)GameData_212c2b0);
                    v292.val[3] =
                        *(float32x4_t*)((char*)((char*)0x20LL) +
                                        (_QWORD)GameData_212c2b0 + 16);
                    vst4q_f32((float*)(v56 + 80), v292);
                    v78 = *(_DWORD*)(v51 + 8);
                    *(_QWORD*)(v56 + 152) = 0;
                    *(_QWORD*)(v56 + 144) = v78;
                    v79 = gfx_light_c53c90((float32x4_t*)v51, &v287_.v287),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(double, "d1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    *(_QWORD*)(v58 + 16) = LANES128(v79).n128_u64[0];
                    *(_QWORD*)(v58 + 24) =
                        LANES128_OF(vextq_s8(v79, v79, 8u)).n128_u64[0];
                    v80 =
                        LANES128_OF(vextq_s8(*(int8x16_t*)GameData_212c568,
                                             *(int8x16_t*)GameData_212c568, 8u))
                            .n128_u64[0];
                    *(_QWORD*)(v58 + 32) = *(_QWORD*)GameData_212c568;
                    *(_QWORD*)(v58 + 40) = v80;
                    if ((*(_BYTE*)(v51 + 96) & 2) == 0) {
                      v34 = v57;
                      v36 = v271;
                      v38 = v257;
                      v39 = v254;
                      v28 = a2;
                      v19 = v277;
                      goto LABEL_138;
                    }
                    v157 = *(_DWORD*)(v7 + 232);
                    v39 = v254;
                    v19 = v277;
                    v28 = a2;
                    if (v157 >= v275) {
                      v34 = v57;
                      v36 = v271;
                      v38 = v257;
                    }
                    else {
                      v34 = v57;
                      if (v273 >= v270) {
                        v36 = v271;
                        v38 = v257;
                      }
                      else {
                        v158 = *(float32x4_t*)(v51 + 16);
                        v159 = (int8x16_t*)GameData_212c558;
                        v36 = v271;
                        v160 = vsubq_f32(v158, vaddq_f32(v249, v158));
                        if (fabsf(LANES128(v249).n128_f32[2]) <=
                            fabsf(LANES128(v249).n128_f32[1])) {
                          v159 = (int8x16_t*)GameData_212c560;
                        }
                        v161 = vmulq_f32(v160, v160);
                        LANES128(v161).n128_u64[0] =
                            LANES64_OF(
                                vadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128_OF(
                                                       vextq_s8(v161, v161, 8u))
                                                       .n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v161).n128_u64[0])))
                                .n64_u64[0];
                        LANES128(v161).n128_u64[0] =
                            LANES64_OF(
                                vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v161).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v161).n128_u64[0])))
                                .n64_u64[0];
                        LANES128(v161).n128_u64[1] = LANES128(v161).n128_u64[0];
                        v162 = vrsqrteq_f32(v161);
                        v163 = vmulq_f32(
                            v162, vrsqrtsq_f32(v162, vmulq_f32(v161, v162)));
                        v164 = vbicq_s8(
                            vmulq_f32(
                                v160,
                                vmulq_f32(
                                    v163,
                                    vrsqrtsq_f32(v163, vmulq_f32(v161, v163)))),
                            vceqzq_f32(v161));
                        LANES128(v163).n128_u64[0] =
                            LANES64_OF(
                                vqtbl1_s8(
                                    *v159,
                                    COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                .n64_u64[0];
                        LANES128(v165).n128_u64[0] =
                            LANES64_OF(
                                vqtbl1_s8(v164, COERCE_AS(int8x8_t,
                                                          0xB0A090807060504LL)))
                                .n64_u64[0];
                        *(int8x8_t*)&LANES128(v163).n128_i8[8] = vqtbl1_s8(
                            *v159, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                        LANES128(v166).n128_u64[0] =
                            LANES64_OF(
                                vqtbl1_s8(v164, COERCE_AS(int8x8_t,
                                                          0x30201000B0A0908LL)))
                                .n64_u64[0];
                        *(int8x8_t*)&LANES128(v166).n128_i8[8] = vqtbl1_s8(
                            v164, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                        LANES128(v167).n128_u64[0] =
                            LANES64_OF(
                                vqtbl1_s8(
                                    *v159,
                                    COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                .n64_u64[0];
                        *(int8x8_t*)&LANES128(v167).n128_i8[8] = vqtbl1_s8(
                            *v159, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                        *(int8x8_t*)&LANES128(v165).n128_i8[8] = vqtbl1_s8(
                            v164, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                        v168 = vmlsq_f32(vmulq_f32(v163, v166), v165, v167);
                        v169 = vmulq_f32(v168, v168);
                        LANES128(v169).n128_u64[0] =
                            LANES64_OF(
                                vadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128_OF(
                                                       vextq_s8(v169, v169, 8u))
                                                       .n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v169).n128_u64[0])))
                                .n64_u64[0];
                        LANES128(v169).n128_u64[0] =
                            LANES64_OF(
                                vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v169).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v169).n128_u64[0])))
                                .n64_u64[0];
                        LANES128(v169).n128_u64[1] = LANES128(v169).n128_u64[0];
                        v170 = vrsqrteq_f32(v169);
                        v171 = vmulq_f32(
                            v170, vrsqrtsq_f32(v170, vmulq_f32(v169, v170)));
                        v172 = vbicq_s8(
                            vmulq_f32(
                                v168,
                                vmulq_f32(
                                    v171,
                                    vrsqrtsq_f32(v171, vmulq_f32(v169, v171)))),
                            vceqzq_f32(v169));
                        LANES128(v168).n128_u64[0] =
                            LANES64_OF(
                                vqtbl1_s8(v172, COERCE_AS(int8x8_t,
                                                          0x30201000B0A0908LL)))
                                .n64_u64[0];
                        LANES128(v173).n128_u64[0] =
                            LANES64_OF(
                                vqtbl1_s8(v172, COERCE_AS(int8x8_t,
                                                          0xB0A090807060504LL)))
                                .n64_u64[0];
                        *(int8x8_t*)&LANES128(v168).n128_i8[8] = vqtbl1_s8(
                            v172, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                        *(int8x8_t*)&LANES128(v173).n128_i8[8] = vqtbl1_s8(
                            v172, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                        v174 = vnegq_f32(v158);
                        v175 = vmulq_f32(v172, v174);
                        v176 = vmlsq_f32(vmulq_f32(v165, v168), v173, v166);
                        LANES128(v175).n128_u64[0] =
                            LANES64_OF(
                                vadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128_OF(
                                                       vextq_s8(v175, v175, 8u))
                                                       .n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v175).n128_u64[0])))
                                .n64_u64[0];
                        v177 = vmulq_f32(v176, v174);
                        v178 = vmulq_f32(v164, v174);
                        LANES64(v179).n64_u64[0] =
                            LANES64_OF(
                                vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v175).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v175).n128_u64[0])))
                                .n64_u64[0];
                        LANES128(v177).n128_u64[0] =
                            LANES64_OF(
                                vadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128_OF(
                                                       vextq_s8(v177, v177, 8u))
                                                       .n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v177).n128_u64[0])))
                                .n64_u64[0];
                        LANES128(v178).n128_u64[0] =
                            LANES64_OF(
                                vadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128_OF(
                                                       vextq_s8(v178, v178, 8u))
                                                       .n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v178).n128_u64[0])))
                                .n64_u64[0];
                        LANES64(v180).n64_u64[0] =
                            LANES64_OF(
                                vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v177).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v177).n128_u64[0])))
                                .n64_u64[0];
                        LANES64(v181).n64_u64[0] =
                            LANES64_OF(
                                vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v178).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v178).n128_u64[0])))
                                .n64_u64[0];
                        v182 =
                            v66 + (float)(roundf(v66 * 0x1.45f3060000000p-3f) *
                                          -0x1.921fb60000000p+2f);
                        if (v182 > 0x1.921fb60000000p+0f) {
                          v38 = v257;
                          v183 = 0x1.921fb60000000p+1f;
                          goto LABEL_136;
                        }
                        v38 = v257;
                        v217 = 0x1.0000000000000p+0f;
                        if (v182 < -0x1.921fb60000000p+0f) {
                          v183 = -0x1.921fb60000000p+1f;
                        LABEL_136:
                          v182 = v183 - v182;
                          v217 = -0x1.0000000000000p+0f;
                        }
                        v218 = v182 * v182;
                        v219 = *(float*)(v51 + 32);
                        v220 = *(int*)(v7 + 232);
                        v260 = *a5;
                        v247 = v220;
                        LANES128(v221).n128_u64[0] = 0;
                        LODWORD(v222) = 0;
                        v223 =
                            (float)(v182 *
                                    (float)((float)((float)(v254 +
                                                            (float)((float)(v32 +
                                                                            (float)((float)(v38 +
                                                                                            (float)((float)(v30 +
                                                                                                            (float)(v263 *
                                                                                                                    (float)(v182 *
                                                                                                                            v182))) *
                                                                                                    (float)(v182 *
                                                                                                            v182))) *
                                                                                    (float)(v182 *
                                                                                            v182))) *
                                                                    (float)(v182 *
                                                                            v182))) *
                                                    (float)(v182 * v182)) +
                                            0x1.0000000000000p+0f)) /
                            (float)(v217 *
                                    (float)((float)((float)(v261 +
                                                            (float)((float)(v271 +
                                                                            (float)((float)(v262 +
                                                                                            (float)((float)(v248 +
                                                                                                            (float)(v40 *
                                                                                                                    v218)) *
                                                                                                    v218)) *
                                                                                    v218)) *
                                                                    v218)) *
                                                    v218) +
                                            0x1.0000000000000p+0f));
                        v224 = -0x1.0000000000000p+0f /
                               (float)(v219 + -0x1.47ae140000000p-7f);
                        *(float*)&v225 = 0x1.0000000000000p+0f / v223;
                        *((float*)&v222 + 1) = 0x1.0000000000000p+0f / v223;
                        LANES128(v221).n128_f32[2] = v219 * v224;
                        LANES128(v221).n128_u32[3] = COERCE_UNSIGNED_INT(
                            (float)(-0x1.0000000000000p+0f));
                        v226 = vmulq_n_f32(
                            COERCE_AS(float32x4_t,
                                      COERCE_UNSIGNED_INT(
                                          0x1.0000000000000p+0f / v223)),
                            LANES128(v172).n128_f32[0]);
                        *(float*)&v227 =
                            (float)(v219 * 0x1.47ae140000000p-7f) * v224;
                        LANES128(v228).n128_u64[0] = 0;
                        LANES128(v228).n128_u64[1] = v227;
                        v291.val[0] = vmlaq_n_f32(
                            vmlaq_n_f32(v226, COERCE_AS(float32x4_t, v222),
                                        LANES128(v176).n128_f32[0]),
                            v221, LANES128(v164).n128_f32[0]);
                        v291.val[1] = vmlaq_lane_f32(
                            vmlaq_lane_f32(
                                vmulq_lane_f32(
                                    COERCE_AS(float32x4_t, v225),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v172).n128_u64[0]),
                                    1),
                                COERCE_AS(float32x4_t, v222),
                                COERCE_AS(float32x2_t,
                                          LANES128(v176).n128_u64[0]),
                                1),
                            v221,
                            COERCE_AS(float32x2_t, LANES128(v164).n128_u64[0]),
                            1);
                        v291.val[2] = vmlaq_laneq_f32(
                            vmlaq_laneq_f32(
                                vmulq_laneq_f32(COERCE_AS(float32x4_t, v225),
                                                v172, 2),
                                COERCE_AS(float32x4_t, v222), v176, 2),
                            v221, v164, 2);
                        v291.val[3] = vaddq_f32(
                            v228,
                            vmlaq_lane_f32(
                                vmlaq_lane_f32(
                                    vmulq_lane_f32(COERCE_AS(float32x4_t, v225),
                                                   v179, 1),
                                    COERCE_AS(float32x4_t, v222), v180, 1),
                                v221, v181, 1));
                        v229 = *(_QWORD*)(v7 + 240) + 56LL * v157;
                        v245 = v229;
                        v230 = *(_QWORD*)(v229 + 8LL * *(int*)(v229 + 16));
                        v231 = (*(__int64 (**)(__int64))(*(_QWORD*)v230 +
                                                         56LL))(v230),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(double, "d1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        vst4q_f32((float*)v231, v291);
                        *(_DWORD*)(v231 + 64) = *(_DWORD*)(v51 + 16);
                        *(_DWORD*)(v231 + 68) = *(_DWORD*)(v51 + 20);
                        *(_DWORD*)(v231 + 72) = *(_DWORD*)(v51 + 24);
                        *(float*)(v231 + 76) =
                            0x1.0000000000000p+0f / *(float*)(v51 + 32);
                        (*(void (**)(__int64))(*(_QWORD*)v230 + 64LL))(v230),
                            v133 =
                                COERCE_AS(__typeof__(v133),
                                          PSEUDO_REGISTER(double, "d1", "=w")),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                        vst4q_f32((float*)(v56 + 80), v291);
                        v232 = (*(__int64 (**)(_QWORD))(
                            **(_QWORD**)(v260 + 8 * v220) + 16LL))(
                            *(_QWORD*)(v260 + 8 * v220)),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(double, "d1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        (*(void (**)(__int64))(*(_QWORD*)v232 + 40LL))(v232),
                            v133 =
                                COERCE_AS(__typeof__(v133),
                                          PSEUDO_REGISTER(double, "d1", "=w")),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                        *(_QWORD*)(v56 +
                                   152) =
                            (*(__int64 (**)(__int64))GameData_212e4d8[0])(
                                *(_QWORD*)(*(_QWORD*)v7 + 256LL) + 8LL),
                                   v133 = COERCE_AS(
                                       __typeof__(v133),
                                       PSEUDO_REGISTER(double, "d1", "=w")),
                                   v14 = COERCE_AS(
                                       __typeof__(v14),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                                   v15 = COERCE_AS(
                                       __typeof__(v15),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                                   v16 = COERCE_AS(
                                       __typeof__(v16),
                                       PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v233 = *(int*)(v7 + 232);
                        v234 = *(_QWORD*)(v7 + 264);
                        *(_QWORD*)(*(_QWORD*)(v234 + 8 * v233) + 8LL) = v51;
                        *(__n128*)(*(_QWORD*)(v234 + 8 * v233) +
                                   16LL) =
                            gfx_light_c53c90((float32x4_t*)v51, nullptr),
                                   v133 = COERCE_AS(
                                       __typeof__(v133),
                                       PSEUDO_REGISTER(double, "d1", "=w")),
                                   v14 = COERCE_AS(
                                       __typeof__(v14),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                                   v15 = COERCE_AS(
                                       __typeof__(v15),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                                   v16 = COERCE_AS(
                                       __typeof__(v16),
                                       PSEUDO_REGISTER(__n128, "v3", "=w"));
                        *(_QWORD*)(*(_QWORD*)(v234 + 8 * v233) +
                                   32LL) =
                            (*(__int64 (**)(_QWORD))(
                                **(_QWORD**)(v260 + 8 * v247) + 16LL))(
                                *(_QWORD*)(v260 + 8 * v247)),
                                   v133 = COERCE_AS(
                                       __typeof__(v133),
                                       PSEUDO_REGISTER(double, "d1", "=w")),
                                   v14 = COERCE_AS(
                                       __typeof__(v14),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                                   v15 = COERCE_AS(
                                       __typeof__(v15),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                                   v16 = COERCE_AS(
                                       __typeof__(v16),
                                       PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v235 = *(_QWORD*)(v234 + 8 * v233);
                        v236 = v245 + 16LL * *(int*)(v245 + 16);
                        v238 = *(_QWORD*)(v236 + 24);
                        v237 = *(_QWORD*)(v236 + 32);
                        *(_QWORD*)(v235 + 40) = v238;
                        *(_QWORD*)(v235 + 48) = v237;
                        v239 = *(_QWORD*)(v234 + 8 * v233);
                        v19 = v277;
                        *(_DWORD*)(v239 + 208) = v264;
                        ++*(_DWORD*)(v7 + 232);
                        ++v273;
                        v28 = a2;
                      }
                    }
                  LABEL_138:
                    v17 = v272;
                    if (v50 != 0) {
                    LABEL_139:
                      if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        goto LABEL_140;
                      }
                    }
                    goto LABEL_141;
                  }
                LABEL_87:
                  v34 = v57;
                  v36 = v271;
                  v17 = v272;
                  v19 = v277;
                  goto LABEL_42;
                }
                v253 = v40;
                v134 = v39;
                v135 = v38;
                if (v50 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8),
                                            1u, memory_order_relaxed);
                }
                v136 = *(float*)(v51 + 32) + -0x1.47ae140000000p-7f;
                if (v136 < 0x1.0000000000000p+0f) {
                  v136 = 0x1.0000000000000p+0f;
                }
                if (v136 >= *(float*)(v51 + 248)) {
                  v136 = *(float*)(v51 + 248);
                }
                if (v136 < 0x1.47ae140000000p-7f) {
                  v136 = 0x1.47ae140000000p-7f;
                }
                *(float*)&v137 = 0x1.0000000000000p+0f / v136;
                v138 = vmulq_f32(
                    vmulq_n_f32(v268, (*(float (**)(__int64))(*(_QWORD*)v51 +
                                                              16LL))(v51)),
                    v274),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
                *(_QWORD*)v56 = LANES128(v138).n128_u64[0];
                *(_DWORD*)(v56 + 8) = LANES128(v138).n128_u32[2];
                *(_DWORD*)(v56 + 12) = *(_DWORD*)(v51 + 32);
                v139 = *(_OWORD*)(v51 + 16);
                *(float*)(v56 + 28) = v59;
                *(_QWORD*)(v56 + 32) = 0;
                *(_QWORD*)(v56 + 40) = 0;
                *(_QWORD*)(v56 + 16) = v139;
                *(_DWORD*)(v56 + 24) = DWORD2(v139);
                v140 = v137 |
                       ((unsigned __int64)*(unsigned int*)(v51 + 252) << 32);
                *(_QWORD*)(v56 + 48) = 0;
                *(_QWORD*)(v56 + 56) = v140;
                *(_DWORD*)(v56 + 64) = *(_DWORD*)(v51 + 76);
                *(_DWORD*)(v56 + 68) = *(_DWORD*)(v51 + 80);
                if (*(_BYTE*)(v51 + 94) != 0) {
                  v141 = 0x0.0p+0f;
                }
                else {
                  v141 = 0x1.0000000000000p+0f;
                }
                *(float*)(v56 + 72) = v141;
                if (*(_BYTE*)(v51 + 95) != 0) {
                  v142 = 0x0.0p+0f;
                }
                else {
                  v142 = 0x1.0000000000000p+0f;
                }
                *(float*)(v56 + 76) = v142;
                v293.val[0] = *(float32x4_t*)GameData_212c2b0;
                v293.val[1] = *((float32x4_t*)GameData_212c2b0 + 1);
                v293.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) +
                                              (_QWORD)GameData_212c2b0);
                v293.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) +
                                              (_QWORD)GameData_212c2b0 + 16);
                vst4q_f32((float*)(v56 + 80), v293);
                v143 = *(_DWORD*)(v51 + 8);
                *(_QWORD*)(v56 + 152) = 0;
                *(_DWORD*)(v56 + 144) = v143;
                *(_DWORD*)(v56 + 148) = 0;
                v293.val[0] = vaddq_f32(
                    vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v287_.v287,
                                        COERCE_FLOAT(*(_OWORD*)(v51 + 16))),
                            v287_.v288, *(float32x2_t*)(v51 + 16), 1),
                        v287_.v289, *(float32x4_t*)(v51 + 16), 2),
                    v287_.v290);
                v144 = LANES128(v293.val[0]).n128_u32[2] |
                       ((unsigned __int64)*(unsigned int*)(v51 + 32) << 32);
                *(_QWORD*)(v58 + 16) = LANES128(v293.val[0]).n128_u64[0];
                *(_QWORD*)(v58 + 24) = v144;
                LANES128(v293.val[1]).n128_u64[0] =
                    LANES128_OF(vextq_s8(*(int8x16_t*)GameData_212c568,
                                         *(int8x16_t*)GameData_212c568, 8u))
                        .n128_u64[0];
                *(_QWORD*)(v58 + 32) = *(_QWORD*)GameData_212c568;
                *(_QWORD*)(v58 + 40) = LANES128(v293.val[1]).n128_u64[0];
                if ((*(_BYTE*)(v51 + 96) & 2) == 0) {
                  v38 = v135;
                  v39 = v134;
                  v40 = v253;
                  v28 = a2;
                  v34 = v57;
                  goto LABEL_104;
                }
                v184 = *(_DWORD*)(v7 + 180);
                v38 = v135;
                v34 = v57;
                v28 = a2;
                if (v184 >= v276) {
                  v39 = v134;
                  v40 = v253;
                LABEL_104:
                  v36 = v271;
                }
                else {
                  v36 = v271;
                  v39 = v134;
                  if (v273 >= v270) {
                    v40 = v253;
                  }
                  else {
                    v251 = *(int*)(v7 + 180);
                    v269 = *a4;
                    v185 = *(_QWORD*)(v7 + 184) + 56LL * v184;
                    v256 = v185;
                    v259 = *(_QWORD*)(v185 + 8LL * *(int*)(v185 + 16));
                    v186 = (*(__int64 (**)(__int64))(*(_QWORD*)v259 + 56LL))(
                        (__int64)v259),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(double, "d1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v40 = v253;
                    v187 = 0;
                    v188 = (float*)v186;
                    do {
                      v189 = *(float32x4_t*)(v51 + 16);
                      v190 = vsubq_f32(
                          v189,
                          vaddq_f32(v189, *(float32x4_t*)&v283_.v286[v187]));
                      v191 = vnegq_f32(v189);
                      v192 = vmulq_f32(v190, v190);
                      LANES128(v192).n128_u64[0] =
                          LANES64_OF(
                              vadd_f32(COERCE_AS(
                                           float32x2_t,
                                           LANES128_OF(vextq_s8(v192, v192, 8u))
                                               .n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v192).n128_u64[0])))
                              .n64_u64[0];
                      v193 = *(int8x16_t*)&v283_.v285[v187];
                      v187 += 2;
                      LANES128(v192).n128_u64[0] =
                          LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v192).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v192).n128_u64[0])))
                              .n64_u64[0];
                      LANES128(v192).n128_u64[1] = LANES128(v192).n128_u64[0];
                      v194 = vrsqrteq_f32(v192);
                      v195 = vmulq_f32(
                          v194, vrsqrtsq_f32(v194, vmulq_f32(v192, v194)));
                      v196 = vbicq_s8(
                          vmulq_f32(
                              v190,
                              vmulq_f32(
                                  v195,
                                  vrsqrtsq_f32(v195, vmulq_f32(v192, v195)))),
                          vceqzq_f32(v192));
                      LANES128(v192).n128_u64[0] =
                          LANES64_OF(
                              vqtbl1_s8(v193, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                              .n64_u64[0];
                      *(int8x8_t*)&LANES128(v192).n128_i8[8] = vqtbl1_s8(
                          v193, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                      LANES128(v197).n128_u64[0] =
                          LANES64_OF(
                              vqtbl1_s8(v196, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                              .n64_u64[0];
                      *(int8x8_t*)&LANES128(v197).n128_i8[8] = vqtbl1_s8(
                          v196, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                      LANES128(v198).n128_u64[0] =
                          LANES64_OF(
                              vqtbl1_s8(v193, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                              .n64_u64[0];
                      *(int8x8_t*)&LANES128(v198).n128_i8[8] = vqtbl1_s8(
                          v193, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                      LANES128(v193).n128_u64[0] =
                          LANES64_OF(
                              vqtbl1_s8(v196, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                              .n64_u64[0];
                      *(int8x8_t*)&LANES128(v193).n128_i8[8] = vqtbl1_s8(
                          v196, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                      v199 = vmlsq_f32(vmulq_f32(v192, v197), v193, v198);
                      v200 = vmulq_f32(v199, v199);
                      LANES128(v200).n128_u64[0] =
                          LANES64_OF(
                              vadd_f32(COERCE_AS(
                                           float32x2_t,
                                           LANES128_OF(vextq_s8(v200, v200, 8u))
                                               .n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v200).n128_u64[0])))
                              .n64_u64[0];
                      LANES128(v200).n128_u64[0] =
                          LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v200).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v200).n128_u64[0])))
                              .n64_u64[0];
                      LANES128(v200).n128_u64[1] = LANES128(v200).n128_u64[0];
                      v201 = vrsqrteq_f32(v200);
                      v202 = vmulq_f32(
                          v201, vrsqrtsq_f32(v201, vmulq_f32(v200, v201)));
                      v203 = vbicq_s8(
                          vmulq_f32(
                              v199,
                              vmulq_f32(
                                  v202,
                                  vrsqrtsq_f32(v202, vmulq_f32(v200, v202)))),
                          vceqzq_f32(v200));
                      LANES128(v200).n128_u64[0] = 0;
                      LANES128(v204).n128_u64[0] =
                          LANES64_OF(
                              vqtbl1_s8(v203, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                              .n64_u64[0];
                      LANES128(v195).n128_u64[0] =
                          LANES64_OF(
                              vqtbl1_s8(v203, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                              .n64_u64[0];
                      *(int8x8_t*)&LANES128(v204).n128_i8[8] = vqtbl1_s8(
                          v203, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                      *(int8x8_t*)&LANES128(v195).n128_i8[8] = vqtbl1_s8(
                          v203, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                      v205 = vmlsq_f32(vmulq_f32(v193, v204), v195, v197);
                      v206 = vmulq_f32(v203, v191);
                      LANES128(v206).n128_u64[0] =
                          LANES64_OF(
                              vadd_f32(COERCE_AS(
                                           float32x2_t,
                                           LANES128_OF(vextq_s8(v206, v206, 8u))
                                               .n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v206).n128_u64[0])))
                              .n64_u64[0];
                      v207 = vmulq_f32(v205, v191);
                      v208 = vmulq_f32(v196, v191);
                      LANES128(v207).n128_u64[0] =
                          LANES64_OF(
                              vadd_f32(COERCE_AS(
                                           float32x2_t,
                                           LANES128_OF(vextq_s8(v207, v207, 8u))
                                               .n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v207).n128_u64[0])))
                              .n64_u64[0];
                      LANES128(v208).n128_u64[0] =
                          LANES64_OF(
                              vadd_f32(COERCE_AS(
                                           float32x2_t,
                                           LANES128_OF(vextq_s8(v208, v208, 8u))
                                               .n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v208).n128_u64[0])))
                              .n64_u64[0];
                      LANES128(v204).n128_u32[0] = *(_DWORD*)(v51 + 32);
                      LANES128(v197).n128_f32[0] =
                          -0x1.0000000000000p+0f /
                          (float)(LANES128(v204).n128_f32[0] +
                                  -0x1.47ae140000000p-7f);
                      LANES128(v200).n128_f32[2] = LANES128(v204).n128_f32[0] *
                                                   LANES128(v197).n128_f32[0];
                      LANES128(v200).n128_u32[3] =
                          COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                      LANES128(v204).n128_f32[0] =
                          (float)(LANES128(v204).n128_f32[0] *
                                  0x1.47ae140000000p-7f) *
                          LANES128(v197).n128_f32[0];
                      LANES128(v197).n128_u64[0] = 0;
                      v295.val[0] = vmlaq_n_f32(
                          vmlaq_n_f32(
                              vmulq_n_f32(v267, LANES128(v203).n128_f32[0]),
                              v266, LANES128(v205).n128_f32[0]),
                          v200, LANES128(v196).n128_f32[0]);
                      LANES128(v197).n128_u64[1] = LANES128(v204).n128_u32[0];
                      v295.val[1] = vmlaq_lane_f32(
                          vmlaq_lane_f32(
                              vmulq_lane_f32(
                                  v267,
                                  COERCE_AS(float32x2_t,
                                            LANES128(v203).n128_u64[0]),
                                  1),
                              v266,
                              COERCE_AS(float32x2_t,
                                        LANES128(v205).n128_u64[0]),
                              1),
                          v200,
                          COERCE_AS(float32x2_t, LANES128(v196).n128_u64[0]),
                          1);
                      v295.val[2] = vmlaq_laneq_f32(
                          vmlaq_laneq_f32(vmulq_laneq_f32(v267, v203, 2), v266,
                                          v205, 2),
                          v200, v196, 2);
                      v295.val[3] = vaddq_f32(
                          v197,
                          vmlaq_lane_f32(
                              vmlaq_lane_f32(
                                  vmulq_lane_f32(
                                      v267,
                                      vpadd_f32(
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v206).n128_u64[0]),
                                          COERCE_AS(
                                              float32x2_t,
                                              LANES128(v206).n128_u64[0])),
                                      1),
                                  v266,
                                  vpadd_f32(
                                      COERCE_AS(float32x2_t,
                                                LANES128(v207).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v207).n128_u64[0])),
                                  1),
                              v200,
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v208).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v208).n128_u64[0])),
                              1));
                      vst4q_f32(v188, v295);
                      v188 += 16;
                    } while (v187 != 12);
                    *(_DWORD*)(v186 + 384) = *(_DWORD*)(v51 + 16);
                    *(_DWORD*)(v186 + 388) = *(_DWORD*)(v51 + 20);
                    *(_DWORD*)(v186 + 392) = *(_DWORD*)(v51 + 24);
                    *(float*)(v186 + 396) =
                        0x1.0000000000000p+0f / *(float*)(v51 + 32);
                    v209 = (*(__int64 (**)(_QWORD))(
                        **(_QWORD**)(v269 + 8 * v251) + 16LL))(
                        *(_QWORD*)(v269 + 8 * v251)),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(double, "d1", "=w")),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    (*(void (**)(__int64))(*(_QWORD*)v209 + 40LL))(v209),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(double, "d1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                    *(_QWORD*)(v56 + 152) =
                        (*(__int64 (**)(__int64))GameData_212e4d8[0])(
                            *(_QWORD*)(*(_QWORD*)v7 + 256LL) + 8LL),
                                     v133 = COERCE_AS(
                                         __typeof__(v133),
                                         PSEUDO_REGISTER(double, "d1", "=w")),
                                     v14 = COERCE_AS(
                                         __typeof__(v14),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                                     v15 = COERCE_AS(
                                         __typeof__(v15),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                                     v16 = COERCE_AS(
                                         __typeof__(v16),
                                         PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v210 = *(int*)(v7 + 180);
                    v211 = *(_QWORD*)(v7 + 208);
                    *(_QWORD*)(*(_QWORD*)(v211 + 8 * v210) + 8LL) = v51;
                    *(_QWORD*)&v212 = *(_QWORD*)(v51 + 16);
                    *((_QWORD*)&v212 + 1) =
                        *(unsigned int*)(v51 + 24) |
                        ((unsigned __int64)*(unsigned int*)(v51 + 32) << 32);
                    *(_OWORD*)(*(_QWORD*)(v211 + 8 * v210) + 16LL) = v212;
                    *(_QWORD*)(*(_QWORD*)(v211 + 8 * v210) +
                               32LL) =
                        (*(__int64 (**)(_QWORD))(**(_QWORD**)(v269 + 8 * v251) +
                                                 16LL))(
                            *(_QWORD*)(v269 + 8 * v251)),
                               v133 = COERCE_AS(
                                   __typeof__(v133),
                                   PSEUDO_REGISTER(double, "d1", "=w")),
                               v14 = COERCE_AS(
                                   __typeof__(v14),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                               v15 = COERCE_AS(
                                   __typeof__(v15),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                               v16 = COERCE_AS(
                                   __typeof__(v16),
                                   PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v213 = *(_QWORD*)(v211 + 8 * v210);
                    v214 = v256 + 16LL * *(int*)(v256 + 16);
                    v216 = *(_QWORD*)(v214 + 24);
                    v215 = *(_QWORD*)(v214 + 32);
                    *(_QWORD*)(v213 + 40) = v216;
                    *(_QWORD*)(v213 + 48) = v215;
                    *(_DWORD*)(*(_QWORD*)(v211 + 8 * v210) + 400LL) = v265;
                    ++*(_DWORD*)(v7 + 180);
                    ++v273;
                    (*(void (**)(__int64))(*(_QWORD*)v259 + 64LL))(v259),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(double, "d1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v28 = a2;
                  }
                }
                v17 = v272;
                v19 = v277;
                if (v50 != 0) {
                  goto LABEL_139;
                }
                goto LABEL_141;
              }
              v28 = a2;
              if (v60 == 3) {
                if (v50 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8),
                                            1u, memory_order_relaxed);
                }
                v145 = *(float32x4_t*)(v51 + 256);
                v146 = vmulq_f32(v145, v145);
                v147 = *(unsigned int*)(v51 + 280);
                v258 = *(_QWORD*)(v51 + 272);
                LANES128(v146).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v146, v146, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v146).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v146).n128_u64[1] = LANES128(v146).n128_u64[0];
                v148 = vrsqrteq_f32(v146);
                v149 =
                    vmulq_f32(v148, vrsqrtsq_f32(v148, vmulq_f32(v146, v148)));
                v255 = vbicq_s8(
                    vmulq_f32(
                        v145,
                        vmulq_f32(v149,
                                  vrsqrtsq_f32(v149, vmulq_f32(v146, v149)))),
                    vceqzq_f32(v146));
                v150 = vmulq_f32(
                    vmulq_n_f32(v268, (*(float (**)(__int64))(*(_QWORD*)v51 +
                                                              16LL))(v51)),
                    v274),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
                *(_QWORD*)v56 = LANES128(v150).n128_u64[0];
                *(_DWORD*)(v56 + 8) = LANES128(v150).n128_u32[2];
                *(_DWORD*)(v56 + 12) = *(_DWORD*)(v51 + 32);
                v151 = *(_OWORD*)(v51 + 16);
                *(float*)(v56 + 28) = v59;
                *(_QWORD*)(v56 + 16) = v151;
                *(_DWORD*)(v56 + 24) = DWORD2(v151);
                *(_QWORD*)(v56 + 32) = LANES128(v255).n128_u64[0];
                *(_DWORD*)(v56 + 40) = LANES128(v255).n128_u32[2];
                *(float*)(v56 + 44) =
                    *(float*)(v51 + 288) * 0x1.0000000000000p-1f;
                v152 = v147 | ((unsigned __int64)COERCE_UNSIGNED_INT(
                                   *(float*)(v51 + 292) * 0x1.0000000000000p-1f)
                               << 32);
                *(_QWORD*)(v56 + 48) = v258;
                *(_QWORD*)(v56 + 56) = v152;
                *(_DWORD*)(v56 + 64) = *(_DWORD*)(v51 + 76);
                *(_DWORD*)(v56 + 68) = *(_DWORD*)(v51 + 80);
                if (*(_BYTE*)(v51 + 94) != 0) {
                  v153 = 0x0.0p+0f;
                }
                else {
                  v153 = 0x1.0000000000000p+0f;
                }
                *(float*)(v56 + 72) = v153;
                if (*(_BYTE*)(v51 + 95) != 0) {
                  v154 = 0x0.0p+0f;
                }
                else {
                  v154 = 0x1.0000000000000p+0f;
                }
                *(float*)(v56 + 76) = v154;
                v294.val[0] = *(float32x4_t*)GameData_212c2b0;
                v294.val[1] = *((float32x4_t*)GameData_212c2b0 + 1);
                v294.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) +
                                              (_QWORD)GameData_212c2b0);
                v294.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) +
                                              (_QWORD)GameData_212c2b0 + 16);
                vst4q_f32((float*)(v56 + 80), v294);
                v155 = *(_DWORD*)(v51 + 8);
                *(_QWORD*)(v56 + 152) = 0;
                *(_DWORD*)(v56 + 144) = v155;
                *(_DWORD*)(v56 + 148) = 0;
                v294.val[0] = vaddq_f32(
                    vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v287_.v287,
                                        COERCE_FLOAT(*(_OWORD*)(v51 + 16))),
                            v287_.v288, *(float32x2_t*)(v51 + 16), 1),
                        v287_.v289, *(float32x4_t*)(v51 + 16), 2),
                    v287_.v290);
                v156 = LANES128(v294.val[0]).n128_u32[2] |
                       ((unsigned __int64)*(unsigned int*)(v51 + 32) << 32);
                *(_QWORD*)(v58 + 16) = LANES128(v294.val[0]).n128_u64[0];
                *(_QWORD*)(v58 + 24) = v156;
                LANES128(v294.val[1]).n128_u64[0] =
                    LANES128_OF(vextq_s8(*(int8x16_t*)GameData_212c568,
                                         *(int8x16_t*)GameData_212c568, 8u))
                        .n128_u64[0];
                *(_QWORD*)(v58 + 32) = *(_QWORD*)GameData_212c568;
                *(_QWORD*)(v58 + 40) = LANES128(v294.val[1]).n128_u64[0];
                if (v50 != 0) {
                LABEL_114:
                  v28 = a2;
                  v17 = v272;
                  v19 = v277;
                  v34 = v57;
                  v36 = v271;
                  if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                  LABEL_140:
                    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(double, "d1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                    std___1___shared_weak_count___release_weak_alt1(v50),
                        v133 = COERCE_AS(__typeof__(v133),
                                         PSEUDO_REGISTER(double, "d1", "=w")),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v28 = a2;
                  }
                LABEL_141:
                  v240 = *(_DWORD*)(v7 + 176) + 1;
                  *(_DWORD*)(v7 + 176) = v240;
                  if (v240 == 256) {
                    v52 = 6;
                  }
                  else {
                    v52 = 0;
                  }
                  goto LABEL_42;
                }
              }
              else {
                if (v60 != 4) {
                  goto LABEL_87;
                }
                if (v50 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8),
                                            1u, memory_order_relaxed);
                }
                v81 = *(float32x4_t*)(v51 + 256);
                v82 = *(_QWORD*)(v51 + 272);
                v83 = vmulq_f32(v81, v81);
                v252 = *(int8x16_t*)(v51 + 272);
                LANES128(v83).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v83, v83, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v83).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v83).n128_u64[1] = LANES128(v83).n128_u64[0];
                v84 = vrsqrteq_f32(v83);
                v85 = vmulq_f32(v84, vrsqrtsq_f32(v84, vmulq_f32(v83, v84)));
                v86 = vmulq_f32(
                    v81,
                    vmulq_f32(v85, vrsqrtsq_f32(v85, vmulq_f32(v83, v85))));
                LANES128(v85).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v252, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                v87 = vbicq_s8(v86, vceqzq_f32(v83));
                *(int8x8_t*)&LANES128(v85).n128_i8[8] =
                    vqtbl1_s8(v252, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                LANES128(v86).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                        .n64_u64[0];
                v250 = v87;
                *(int8x8_t*)&LANES128(v86).n128_i8[8] =
                    vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v88 = vmulq_f32(v86, v85);
                LANES128(v86).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v86).n128_i8[8] =
                    vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                LANES128(v83).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v252, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v83).n128_i8[8] =
                    vqtbl1_s8(v252, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v243 = vmlsq_f32(v88, v83, v86);
                v242 = COERCE_INT8X16_T(RectangleLight_c53f10_alt1()),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
                v89 = RectangleLight_c53f00_alt1(),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
                LANES128(v90).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(*(int8x16_t*)&v89,
                                  COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v90).n128_i8[8] =
                    vqtbl1_s8(*(int8x16_t*)&v89,
                              COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v91).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(*(int8x16_t*)&v89,
                                  COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v92).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v242, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v92).n128_i8[8] =
                    vqtbl1_s8(v242, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v93 = vmulq_f32(v90, v92);
                *(int8x8_t*)&LANES128(v91).n128_i8[8] =
                    vqtbl1_s8(*(int8x16_t*)&v89,
                              COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                LANES128(v92).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v242, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v92).n128_i8[8] =
                    vqtbl1_s8(v242, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v94 = vmlsq_f32(v93, v92, v91);
                v95 = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v252, LANES128(v242).n128_f32[0]), v243,
                        COERCE_AS(float32x2_t, LANES128(v242).n128_u64[0]), 1),
                    v250, v242, 2);
                v96 = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v252, LANES128(v94).n128_f32[0]), v243,
                        COERCE_AS(float32x2_t, LANES128(v94).n128_u64[0]), 1),
                    v250, v94, 2);
                v97 = vmlaq_laneq_f32(
                    vmlaq_lane_f32(vmulq_n_f32(v252, *(float*)&v89), v243,
                                   *(float32x2_t*)&v89, 1),
                    v250, *(float32x4_t*)&v89, 2);
                LANES128(v94).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v96, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v94).n128_i8[8] =
                    vqtbl1_s8(v96, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v98).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v98).n128_i8[8] =
                    vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v99 = vmulq_f32(vmulq_f32(v95, v94), v98);
                LANES128(v98).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v96, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v98).n128_i8[8] =
                    vqtbl1_s8(v96, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                LANES128(v100).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v100).n128_i8[8] =
                    vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v101 = vsubq_f32(v99, vmulq_f32(vmulq_f32(v95, v98), v100));
                LANES128(v101).n128_u64[0] =
                    LANES128_OF(vpaddq_f32(v101, v101)).n128_u64[0];
                v102 = vaddq_f32(
                    vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v101).n128_u64[0]), 0),
                    vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v101).n128_u64[0]), 1));
                v103 = vrecpeq_f32(v102);
                v104 = vmulq_f32(v103, vrecpsq_f32(v103, v102));
                v105 = vmulq_f32(v104, vrecpsq_f32(v104, v102));
                v106 = vzip1q_s32(v95, v97);
                v107 = vzip2q_s32(v95, v97);
                v108 = vzip1q_s32(v96, COERCE_AS(int32x4_t, 0));
                v109 = vzip2q_s32(v106, v108);
                v110 =
                    vzip1q_s32(v107, vzip2q_s32(v96, COERCE_AS(int32x4_t, 0)));
                v111 = vzip1q_s32(v106, v108);
                LANES128(v112).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v109, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v96).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v110, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v113).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v110, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v106).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v111, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v112).n128_i8[8] =
                    vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v114 =
                    LANES64_OF(vqtbl1_s8(v110, COERCE_AS(int8x8_t,
                                                         0xF0E0D0C07060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v113).n128_i8[8] =
                    vqtbl1_s8(v110, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v110).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v109, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v96).n128_u64[1] = v114;
                *(int8x8_t*)&LANES128(v110).n128_i8[8] =
                    vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v115 = vmulq_f32(v105,
                                 vmlsq_f32(vmulq_f32(v112, v96), v110, v113));
                *(int8x8_t*)&LANES128(v106).n128_i8[8] =
                    vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v116 = vmulq_f32(v113, v106);
                LANES128(v113).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v111, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v113).n128_i8[8] =
                    vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v117 = vmulq_f32(v105, vmlsq_f32(v116, v96, v113));
                v118 = vmulq_f32(v105,
                                 vmlsq_f32(vmulq_f32(v110, v113), v106, v112));
                v119 = vmlsq_laneq_f32(
                    vmlsq_lane_f32(
                        vmulq_n_f32(vnegq_f32(v115),
                                    COERCE_FLOAT(*(_OWORD*)(v51 + 16))),
                        v117, *(float32x2_t*)(v51 + 16), 1),
                    v118, *(float32x4_t*)(v51 + 16), 2);
                v120 = vceqzq_f32(v102);
                v121 = vbicq_s8(v115, v120);
                v122 = vbicq_s8(v117, v120);
                v123 = vbicq_s8(v118, v120);
                v124 = vbicq_s8(v119, v120);
                LANES128(v119).n128_u64[0] = LANES128(v121).n128_u64[0];
                LANES128(v119).n128_u64[1] =
                    LANES128(v121).n128_u32[2] |
                    ((unsigned __int64)*(unsigned int*)(v51 + 296) << 32);
                LANES128(v105).n128_u64[0] = LANES128(v122).n128_u64[0];
                LANES128(v105).n128_u64[1] =
                    LANES128(v122).n128_u32[2] |
                    ((unsigned __int64)*(unsigned int*)(v51 + 300) << 32);
                LANES128(v106).n128_u64[0] = LANES128(v123).n128_u64[0];
                LANES128(v106).n128_u64[1] =
                    LANES128(v123).n128_u32[2] |
                    ((unsigned __int64)*(unsigned int*)(v51 + 304) << 32);
                LANES128(v115).n128_u64[0] = LANES128(v124).n128_u64[0];
                LANES128(v115).n128_u64[1] =
                    LANES128(v124).n128_u32[2] | 0x3F80000000000000LL;
                v244.val[0] = v119;
                v244.val[1] = v105;
                v244.val[2] = v106;
                v244.val[3] = v115;
                v125 = vmulq_f32(
                    vmulq_n_f32(v268, (*(float (**)(__int64))(*(_QWORD*)v51 +
                                                              16LL))(v51)),
                    v274),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
                *(_QWORD*)v56 = LANES128(v125).n128_u64[0];
                *(_DWORD*)(v56 + 8) = LANES128(v125).n128_u32[2];
                *(_DWORD*)(v56 + 12) = *(_DWORD*)(v51 + 32);
                v126 = *(_OWORD*)(v51 + 16);
                *(float*)(v56 + 28) = v59;
                *(_QWORD*)(v56 + 16) = v126;
                *(_DWORD*)(v56 + 24) = DWORD2(v126);
                *(_QWORD*)(v56 + 32) = LANES128(v250).n128_u64[0];
                *(_DWORD*)(v56 + 40) = LANES128(v250).n128_u32[2];
                *(float*)(v56 + 44) =
                    *(float*)(v51 + 288) * 0x1.0000000000000p-1f;
                v127 = LANES128(v252).n128_u32[2] |
                       ((unsigned __int64)COERCE_UNSIGNED_INT(
                            *(float*)(v51 + 292) * 0x1.0000000000000p-1f)
                        << 32);
                *(_QWORD*)(v56 + 48) = v82;
                *(_QWORD*)(v56 + 56) = v127;
                *(_DWORD*)(v56 + 64) = *(_DWORD*)(v51 + 76);
                *(_DWORD*)(v56 + 68) = *(_DWORD*)(v51 + 80);
                if (*(_BYTE*)(v51 + 94) != 0) {
                  v128 = 0x0.0p+0f;
                }
                else {
                  v128 = 0x1.0000000000000p+0f;
                }
                *(float*)(v56 + 72) = v128;
                if (*(_BYTE*)(v51 + 95) != 0) {
                  v129 = 0x0.0p+0f;
                }
                else {
                  v129 = 0x1.0000000000000p+0f;
                }
                *(float*)(v56 + 76) = v129;
                vst4q_f32((float*)(v56 + 80), v244);
                v130 = *(_DWORD*)(v51 + 8);
                *(_QWORD*)(v56 + 152) = 0;
                *(_QWORD*)(v56 + 144) = v130;
                v131 = RectangleLight_c53f20(v51, &v287_.v287),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
                *(_QWORD*)(v58 + 16) = LANES128(v131).n128_u64[0];
                *(_QWORD*)(v58 + 24) = LANES128(v131).n128_u32[2];
                *(_QWORD*)(v58 + 32) = v133;
                *(_QWORD*)(v58 + 40) = v132;
                if (v50 != 0) {
                  goto LABEL_114;
                }
              }
              v28 = a2;
              v17 = v272;
              v19 = v277;
              v34 = v57;
              v36 = v271;
              goto LABEL_141;
            }
          }
        LABEL_42:
          if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v50),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            v28 = a2;
          }
          if (v52 != 7 && v52 != 0) {
          LABEL_144:
            if (v24 != 0) {
              v241 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v241 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v241, v24),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(double, "d1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
            (*(void (**)(__int64))(*(_QWORD*)v19 + 64LL))(v19),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(double, "d1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            return (*(__int64 (**)(__int64*))(*v17 + 64))(v17);
          }
        LABEL_22:
          if (++v29 == v25) {
            goto LABEL_144;
          }
          goto LABEL_23;
        }
        v44 = v48;
      }
      v42 += 2;
      if (v42 == v43) {
        goto LABEL_22;
      }
    }
  }
  return result;
}

void gfxa_LocalLightBuffers_LocalLightBuffers_lambda0_Invoke(__int64 a1,
                                                             __int64 a2)
{
  *(_WORD*)a2 = 514;
  *(_BYTE*)(a2 + 2) = 2;
  *(_WORD*)(a2 + 6) = 42;
}

void gfxa_LocalLightBuffers_LocalLightBuffers_lambda1_Invoke(__int64 a1,
                                                             __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

#pragma GCC visibility pop
