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

__int64 LocalLightBuffers_c5ade0(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v12;
  __int64 v13;
  __int64 v17;
  __int64 v18;
  __int64 v22;
  __int64 v23;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  int i;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 (**v56)();
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 j;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64* v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  char* v83;
  __int64 v84;
  __int64 v85;
  int v86;
  const char* v87;
  const char* v88;
  __int64 v89;
  _QWORD* v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 (**v95)();
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64* v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64* v103;
  __int64 v104;
  const char* v105;
  const char* v106;
  char* v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  char* v114;
  __int64 v115;
  __int64 v116;
  __int64* v117;
  __int64 v118;
  __int64 result;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  struct {
    __int64 (**v123)();
    __int64 v124;
    __int64 v125;
    char gap56_[8];
    __int64 (***v126)();
  } v123_;
  struct {
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
  } v127_;

  v62 = COERCE_AS(__typeof__(v62),
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
  v122 = (__int64)(a1 + 23);
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
  v121 = (__int64)(a1 + 30);
  a1[8] = 0;
  v4 = a1 + 8;
  a1[15] = 0;
  v5 = a1 + 15;
  GameRoutine_604020(a1 + 36),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[51] = -1;
  GameRoutine_604020(a1 + 52),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *a1;
  a1[67] = -1;
  Model_a636e0(v3, *(_QWORD*)(v6 + 312),
               *(_QWORD*)(*(_QWORD*)(v6 + 552) + 16LL), 40960),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *v3;
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 56LL))(v7),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset(v8, 0, 40960),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = a1[2];
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 56LL))(v12),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset(v13, 0, 40960),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v12 + 64LL))(v12),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  Model_a636e0(v4, *(_QWORD*)(*a1 + 312),
               *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 12288),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = *v4;
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset(v18, 0, 12288),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = a1[9];
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 56LL))(v22),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset(v23, 0, 12288),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v22 + 64LL))(v22),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v27 = GameData_22030f8 + 31;
  }
  v28 = v27 >> 5;
  v29 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v29 = GameData_22030fc + 31;
  }
  Model_a636e0(v5, *(_QWORD*)(*a1 + 312),
               *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL),
               4LL * (int)((v28 * (v29 >> 5)) << 8)),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = *v5;
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 56LL))(v30),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v35 = GameData_22030f8 + 31;
  }
  v36 = v35 >> 5;
  v37 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v37 = GameData_22030fc + 31;
  }
  v38 = (v36 * (v37 >> 5)) << 8;
  if (v38 >= 1) {
    memset(v31, 0, 4LL * (unsigned int)v38),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(__int64))(*(_QWORD*)v30 + 64LL))(v30),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v39 = a1[16];
  v40 = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 56LL))(v39),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v44 = GameData_22030f8 + 31;
  }
  v45 = v44 >> 5;
  v46 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v46 = GameData_22030fc + 31;
  }
  v47 = (v45 * (v46 >> 5)) << 8;
  if (v47 >= 1) {
    memset(v40, 0, 4LL * (unsigned int)v47),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(__int64))(*(_QWORD*)v39 + 64LL))(v39),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  for (i = 0; i != 8; ++i) {
    v50 = (_QWORD*)a1[24];
    if ((unsigned __int64)v50 >= a1[25]) {
      v51 = GameRoutine_c5d5e0(v122),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v50[5] = 0;
      v50[6] = 0;
      v50[3] = 0;
      v50[4] = 0;
      v51 = v50 + 7;
      v50[1] = 0;
      v50[2] = 0;
      *v50 = 0;
    }
    v52 = *a1;
    a1[24] = (__int64)v51;
    DecalObject_a91100(v51 - 7, *(_QWORD*)(v52 + 312),
                       *(_QWORD*)(*(_QWORD*)(v52 + 552) + 16LL), 400),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v53 = *a1;
    v54 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         416, 16, 0),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v54 = v53;
    *(_QWORD*)(v54 + 8) = 0;
    *(_QWORD*)(v54 + 72) = 0;
    *(_QWORD*)(v54 + 80) = 0;
    *(_QWORD*)(v54 + 88) = 0;
    *(_DWORD*)(v54 + 96) = 0;
    *(_QWORD*)(v54 + 104) = 0;
    *(_QWORD*)(v54 + 112) = 0;
    *(_QWORD*)(v54 + 120) = 0;
    *(_DWORD*)(v54 + 128) = 0;
    *(_QWORD*)(v54 + 136) = 0;
    *(_QWORD*)(v54 + 144) = 0;
    *(_QWORD*)(v54 + 152) = 0;
    *(_DWORD*)(v54 + 160) = 0;
    *(_QWORD*)(v54 + 168) = 0;
    *(_QWORD*)(v54 + 176) = 0;
    *(_QWORD*)(v54 + 184) = 0;
    *(_DWORD*)(v54 + 192) = 0;
    *(_DWORD*)(v54 + 224) = 0;
    *(_QWORD*)(v54 + 208) = 0;
    *(_QWORD*)(v54 + 216) = 0;
    *(_QWORD*)(v54 + 200) = 0;
    *(_DWORD*)(v54 + 64) = 0;
    *(_QWORD*)(v54 + 40) = 0;
    *(_QWORD*)(v54 + 48) = 0;
    *(_QWORD*)(v54 + 32) = 0;
    *(_QWORD*)(v54 + 248) = 0;
    *(_QWORD*)(v54 + 256) = 0;
    *(_QWORD*)(v54 + 232) = 0;
    *(_QWORD*)(v54 + 240) = 0;
    *(_QWORD*)(v54 + 56) = 0;
    v55 = (__int64*)(v54 + 56);
    *(_OWORD*)(v54 + 16) = GameData_1a82dc0;
    GameRoutine_604020((_QWORD*)(v54 + 264)),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v54 + 384) = -1;
    *(_DWORD*)(v54 + 400) = 1;
    gfx_shader_Archive_CreateShader(
        (void*)(&v123_.v123), *(__int64**)(*(_QWORD*)v54 + 13408LL),
        (__int64)"filter", 6u, (__int64)"copyToDepth", 0xBu),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v56 = v123_.v123;
    v57 = v123_.v124;
    v58 = *(_QWORD*)(v54 + 256);
    v123_.v123 = nullptr;
    v123_.v124 = 0;
    *(_QWORD*)(v54 + 248) = v56;
    *(_QWORD*)(v54 + 256) = v57;
    if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v58),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v59 = v123_.v124;
      if (v123_.v124 == 0) {
        goto LABEL_29;
      }
    }
    else {
      v59 = v123_.v124;
      if (v123_.v124 == 0) {
        goto LABEL_29;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v59),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_29:
    GameRoutine_ad5280(*(__int64**)(v54 + 248)),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))GameData_212e470[0])(v54 + 392),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e488[0])(v54 + 392, 8),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e478[0])(v54 + 392, 1),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e480[0])(v54 + 392, 1),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    for (j = 0; j != 6; ++j) {
      v65 = *(_QWORD*)v54;
      LODWORD(v123_.v123) = 3;
      v66 = *(_QWORD*)(v65 + 312);
      v67 = *(_QWORD*)(*(_QWORD*)(v65 + 552) + 16LL);
      v123_.v124 = 4;
      v123_.v125 = v66;
      GameRoutine_53bd0((void*)(&v127_.v127), (__int64)&v123_.v123),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v68 = v127_.v127;
      v69 = *v55;
      v127_.v127 = 0;
      *v55 = v68;
      if (v69 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v69 + 8LL))(v69),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v70 = v127_.v127;
        v127_.v127 = 0;
        if (v70 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v70 + 8LL))(v70),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v61 = (*(__int64 (**)(__int64))(*(_QWORD*)v67 + 80LL))(v67),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v55[3] = v62;
      v63 = *v55;
      v55[2] = v61;
      GameRoutine_5de60(v55 + 2, v63),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v64 = *v55;
      v55 += 4;
      *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v64 + 56LL))(
          v64) = j,
   v62 = COERCE_AS(__typeof__(v62),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v64 + 64LL))(v64),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v123_.v126 = &v123_.v123;
    v127_.v129 = 0;
    v127_.v130 = 0;
    v127_.v127 = 0;
    v127_.v128 = 0;
    v123_.v123 = GameData_1fd2770;
    GameRoutine_5fc230((__int64)&v127_.v127),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v123_.v126 != nullptr) {
      ((void (*)(__int64 (***)(void), __int64*))(*v123_.v126)[6])(v123_.v126,
                                                                  &v127_.v127),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v71 = game_g_frame_clock_ptr[0];
    GameRoutine_604060(v54 + 264, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                       (__int64)&v127_.v127),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v54 +
               384) = GameRoutine_615760(*(_QWORD*)(*v71 + 552), v54 + 264),
               v62 = COERCE_AS(__typeof__(v62),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v123_.v126 == &v123_.v123) {
      v72 = 4;
    }
    else {
      if (v123_.v126 == nullptr) {
        goto LABEL_41;
      }
      v72 = 5;
    }
    ((void (*)(__int64 (***)(void)))(*v123_.v126)[v72])(v123_.v126),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_41:
    v74 = (__int64*)a1[27];
    v73 = a1[28];
    if ((unsigned __int64)v74 < v73) {
      *v74 = v54;
      v49 = (__int64)(v74 + 1);
    }
    else {
      v75 = a1[26];
      v76 = (char*)v74 - v75;
      v77 = ((__int64)v74 - v75) >> 3;
      v78 = v77 + 1;
      if ((unsigned __int64)(v77 + 1) >> 61 != 0) {
        GameRoutine_c5d7c0(),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v79 = v73 - v75;
      if (v79 >> 2 > v78) {
        v78 = v79 >> 2;
      }
      if ((unsigned __int64)v79 >= 0x7FFFFFFFFFFFFFF8LL) {
        v80 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v80 = v78;
      }
      if (v80 != 0) {
        if (v80 >> 61 != 0) {
        LABEL_106:
          GameRoutine_60a210(),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v81 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v80, 16, 0),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v81 = 0;
      }
      v82 = v81 + 8 * v80;
      v83 = (char*)v74 - v75;
      v84 = (__int64)&v76[v81 + -8 * v77];
      *(_QWORD*)&v76[v81] = v54;
      v49 = (__int64)&v76[v81 + 8];
      memcpy(v84, v75, v83),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a1[26] = v84;
      a1[27] = v49;
      a1[28] = v82;
      if (v75 != 0) {
        v85 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v85 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v85),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    a1[27] = v49;
  }
  v86 = 8;
  v87 = "filter";
  v88 = "copyToDepth";
  do {
    v90 = (_QWORD*)a1[31];
    if ((unsigned __int64)v90 >= a1[32]) {
      v91 = GameRoutine_c5d5e0(v121),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v90[5] = 0;
      v90[6] = 0;
      v90[3] = 0;
      v90[4] = 0;
      v91 = v90 + 7;
      v90[1] = 0;
      v90[2] = 0;
      *v90 = 0;
    }
    v92 = *a1;
    a1[31] = (__int64)v91;
    DecalObject_a91100(v91 - 7, *(_QWORD*)(v92 + 312),
                       *(_QWORD*)(*(_QWORD*)(v92 + 552) + 16LL), 80),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v93 = *a1;
    v94 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         224, 16, 0),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v94 = v93;
    *(_QWORD*)(v94 + 8) = 0;
    *(_QWORD*)(v94 + 32) = 0;
    *(_QWORD*)(v94 + 40) = 0;
    *(_QWORD*)(v94 + 48) = 0;
    *(_QWORD*)(v94 + 56) = 0;
    *(_QWORD*)(v94 + 64) = 0;
    *(_OWORD*)(v94 + 16) = GameData_1a82dc0;
    GameRoutine_604020((_QWORD*)(v94 + 72)),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v94 + 192) = -1;
    *(_DWORD*)(v94 + 208) = 1;
    gfx_shader_Archive_CreateShader((void*)(&v123_.v123),
                                    *(__int64**)(v93 + 13408), (__int64)v87, 6u,
                                    (__int64)v88, 0xBu),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v95 = v123_.v123;
    v96 = v123_.v124;
    v97 = *(_QWORD*)(v94 + 64);
    v123_.v123 = nullptr;
    v123_.v124 = 0;
    *(_QWORD*)(v94 + 56) = v95;
    *(_QWORD*)(v94 + 64) = v96;
    if (v97 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v97 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v97),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v98 = v123_.v124;
      if (v123_.v124 == 0) {
        goto LABEL_68;
      }
    }
    else {
      v98 = v123_.v124;
      if (v123_.v124 == 0) {
        goto LABEL_68;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v98),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_68:
    v99 = GameRoutine_ad5000(*(_QWORD**)(v94 + 56),
                             (__int64)"use_texture_array", 0x11u, 0),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_ad5280(v99),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))GameData_212e470[0])(v94 + 200),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e488[0])(v94 + 200, 8),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e478[0])(v94 + 200, 1),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e480[0])(v94 + 200, 1),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v123_.v126 = &v123_.v123;
    v127_.v129 = 0;
    v127_.v130 = 0;
    v127_.v127 = 0;
    v127_.v128 = 0;
    v123_.v123 = GameData_1fd27f0;
    GameRoutine_5fc230((__int64)&v127_.v127),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v123_.v126 != nullptr) {
      ((void (*)(__int64 (***)(void), __int64*))(*v123_.v126)[6])(v123_.v126,
                                                                  &v127_.v127),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v100 = game_g_frame_clock_ptr[0];
    GameRoutine_604060(v94 + 72, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                       (__int64)&v127_.v127),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v94 +
               192) = GameRoutine_615760(*(_QWORD*)(*v100 + 552), v94 + 72),
               v62 = COERCE_AS(__typeof__(v62),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v123_.v126 == &v123_.v123) {
      v101 = 4;
    }
    else {
      if (v123_.v126 == nullptr) {
        goto LABEL_75;
      }
      v101 = 5;
    }
    ((__int64 (*)(__int64))(*v123_.v126)[v101])((__int64)v123_.v126),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_75:
    v103 = (__int64*)a1[34];
    v102 = a1[35];
    if ((unsigned __int64)v103 < v102) {
      *v103 = v94;
      v89 = (__int64)(v103 + 1);
    }
    else {
      v104 = a1[33];
      v105 = v87;
      v106 = v88;
      v107 = (char*)v103 - v104;
      v108 = ((__int64)v103 - v104) >> 3;
      v109 = v108 + 1;
      if ((unsigned __int64)(v108 + 1) >> 61 != 0) {
        GameRoutine_c5d7e0(),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v110 = v102 - v104;
      if (v110 >> 2 > v109) {
        v109 = v110 >> 2;
      }
      if ((unsigned __int64)v110 >= 0x7FFFFFFFFFFFFFF8LL) {
        v111 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v111 = v109;
      }
      if (v111 != 0) {
        if (v111 >> 61 != 0) {
          goto LABEL_106;
        }
        v112 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v111, 16, 0),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v112 = 0;
      }
      v113 = v112 + 8 * v111;
      v114 = (char*)v103 - v104;
      v115 = (__int64)&v107[v112 + -8 * v108];
      *(_QWORD*)&v107[v112] = v94;
      v89 = (__int64)&v107[v112 + 8];
      memcpy(v115, v104, v114),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a1[33] = v115;
      a1[34] = v89;
      a1[35] = v113;
      if (v104 != 0) {
        v116 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v116 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v116),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v87 = v105;
      v88 = v106;
    }
    a1[34] = v89;
    --v86;
  } while (v86 != 0);
  v127_.v129 = 0;
  v127_.v130 = 0;
  v127_.v127 = 0;
  v127_.v128 = 0;
  v123_.v123 = GameData_1fd2870;
  v123_.v126 = &v123_.v123;
  GameRoutine_5fc230((__int64)&v127_.v127),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v123_.v126 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v123_.v126)[6])(v123_.v126,
                                                                &v127_.v127),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v117 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 36),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)&v127_.v127),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[51] = GameRoutine_615760(*(_QWORD*)(*v117 + 552), (__int64)(a1 + 36)),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v123_.v126 == &v123_.v123) {
    v118 = 4;
  LABEL_97:
    ((__int64 (*)(__int64))(*v123_.v126)[v118])((__int64)v123_.v126),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else if (v123_.v126 != nullptr) {
    v118 = 5;
    goto LABEL_97;
  }
  v127_.v129 = 0;
  v127_.v130 = 0;
  v127_.v127 = 0;
  v127_.v128 = 0;
  v123_.v123 = GameData_1fd28f0;
  v123_.v126 = &v123_.v123;
  GameRoutine_5fc230((__int64)&v127_.v127),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v123_.v126 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v123_.v126)[6])(v123_.v126,
                                                                &v127_.v127),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_604060((__int64)(a1 + 52), (__int64*)(*v117 + 568),
                     (__int64)&v127_.v127),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[67] = GameRoutine_615760(*(_QWORD*)(*v117 + 552), (__int64)(a1 + 52)),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (__int64)v123_.v126;
  if (v123_.v126 == &v123_.v123) {
    v120 = 4;
    return ((__int64 (*)(__int64))(*v123_.v126)[v120])((__int64)v123_.v126);
  }
  else if (v123_.v126 != nullptr) {
    v120 = 5;
    return ((__int64 (*)(__int64))(*v123_.v126)[v120])((__int64)v123_.v126);
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
  float32x4_t v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int* v30;
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
  float v41;
  unsigned __int64 v42;
  __int64** v43;
  __int64** v44;
  int v45;
  __int64 v46;
  unsigned __int64 v47;
  bool v48;
  int v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  int v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  float v58;
  __int64 v59;
  float v60;
  int v61;
  float32x4_t v62;
  int8x16_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float32x4_t v74;
  __int128 v75;
  __int64 v76;
  float v77;
  float v78;
  unsigned int v79;
  __n128 v80;
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
  unsigned int v131;
  __int64 v132;
  float v133;
  float v134;
  float v135;
  unsigned int v136;
  float32x4_t v137;
  __int128 v138;
  unsigned __int64 v139;
  float v140;
  float v141;
  int v142;
  unsigned __int64 v143;
  float32x4_t v144;
  int8x16_t v145;
  __int64 v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  __int128 v150;
  unsigned __int64 v151;
  float v152;
  float v153;
  int v154;
  unsigned __int64 v155;
  int v156;
  float32x4_t v157;
  int8x16_t* v158;
  float32x4_t v159;
  int8x16_t v160;
  float32x4_t v161;
  float32x4_t v162;
  int8x16_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  int8x16_t v168;
  float32x4_t v169;
  float32x4_t v170;
  int8x16_t v171;
  float32x4_t v172;
  float32x4_t v173;
  int8x16_t v174;
  float32x4_t v175;
  int8x16_t v176;
  int8x16_t v177;
  float32x2_t v178;
  float32x2_t v179;
  float32x2_t v180;
  float v181;
  float v182;
  int v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  float* v187;
  float32x4_t v188;
  float32x4_t v189;
  float32x4_t v190;
  int8x16_t v191;
  int8x16_t v192;
  float32x4_t v193;
  float32x4_t v194;
  int8x16_t v195;
  float32x4_t v196;
  float32x4_t v197;
  float32x4_t v198;
  int8x16_t v199;
  float32x4_t v200;
  float32x4_t v201;
  int8x16_t v202;
  float32x4_t v203;
  float32x4_t v204;
  int8x16_t v205;
  int8x16_t v206;
  int8x16_t v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int128 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  float v216;
  float v217;
  float v218;
  __int64 v219;
  float32x4_t v220;
  unsigned __int64 v221;
  float v222;
  float v223;
  unsigned int v224;
  float32x4_t v225;
  unsigned int v226;
  float32x4_t v227;
  __int64 v228;
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
  int v239;
  __int64 v240;
  int8x16_t v241;
  float32x4_t v242;
  float32x4x4_t v243;
  __int64 v244;
  float v245;
  __int64 v246;
  float v247;
  float32x4_t v248;
  float32x4_t v249;
  __int64 v250;
  int8x16_t v251;
  float v252;
  float v253;
  int8x16_t v254;
  __int64 v255;
  float v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  float v260;
  float v261;
  float v262;
  int v263;
  int v264;
  float32x4_t v265;
  float32x4_t v266;
  float32x4_t v267;
  __int64 v268;
  int v269;
  float v270;
  __int64* v271;
  int v272;
  float32x4_t v273;
  int v274;
  int v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  _QWORD v282[4];
  _QWORD* v283;
  _QWORD v284[12];
  _QWORD v285[12];
  float32x4_t v286;
  float32x4_t v287;
  float32x4_t v288;
  float32x4_t v289;
  float32x4x4_t v290;
  float32x4x4_t v291;
  float32x4x4_t v292;
  float32x4x4_t v293;
  float32x4x4_t v294;

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
    v286 = COERCE_FLOAT32X4_T(
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a3 + 16LL))(a3));
    v287 = v14;
    *(_OWORD*)v285 = GameData_1a82dd0;
    *(_OWORD*)&v285[2] = GameData_1a82d00;
    v288 = v15;
    v289 = v16;
    *(_OWORD*)v284 = GameData_1a83610;
    *(_OWORD*)&v284[2] = GameData_1a83610;
    *(_OWORD*)&v284[8] = GameData_1a83610;
    *(_OWORD*)&v284[10] = GameData_1a83610;
    *(_OWORD*)&v285[4] = GameData_1a83610;
    *(_OWORD*)&v285[6] = GameData_1a82fa0;
    v17 = *(__int64**)(v7 + 8LL * *(int*)(v7 + 24) + 8);
    *(_OWORD*)&v285[8] = GameData_1a82c50;
    *(_OWORD*)&v285[10] = GameData_1a83090;
    v18 = *v17;
    *(_OWORD*)&v284[4] = GameData_1a83090;
    *(_OWORD*)&v284[6] = GameData_1a82c50;
    v278 = (*(__int64 (**)(__int64*))(v18 + 56))(v17);
    v19 = *(_QWORD*)(v7 + 8LL * *(int*)(v7 + 80) + 64);
    v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 56LL))(v19);
    v22 = *(_QWORD*)(v12 + 912);
    v23 = *(_QWORD*)(v12 + 920);
    v277 = v20;
    v24 = v23 - v22;
    if (v23 == v22) {
      v26 = nullptr;
      v25 = 0;
    }
    else {
      if (v24 < 0) {
        GameRoutine_6e5a20();
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v24, 16, 0);
      v26 = (int*)(v25 + v24);
      memcpy(v25, v22, v24);
    }
    v27 = (unsigned __int64)(a4[1] - *a4) >> 3;
    if ((int)v27 >= 8) {
      LODWORD(v27) = 8;
    }
    v275 = v27;
    v28 = (unsigned __int64)(a5[1] - *a5) >> 3;
    if ((int)v28 >= 8) {
      LODWORD(v28) = 8;
    }
    v274 = v28;
    v29 = a2;
    if ((int*)v25 == v26) {
      goto LABEL_144;
    }
    v272 = 0;
    v30 = (int*)v25;
    v31 = *((float*)GameData_212c190 + 1);
    v32 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v33 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v34 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    v35 = *((float*)GameData_212c188 + 1);
    v36 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v37 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v38 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v39 = -v32;
    v40 = -v34;
    v41 = -*(float*)GameData_212c188;
    v262 = -*(float*)GameData_212c190;
    v269 = *(_DWORD*)(v12 + 936);
    v261 = -v36;
    v260 = -v38;
    v264 = *(_DWORD*)(v12 + 964);
    v263 = *(_DWORD*)(v12 + 968);
    v21 = vdupq_n_s32(0x3C23D70Au);
    v273 = v21;
    LANES128(v21).n128_u64[0] = 0;
    v266 = COERCE_AS(
        float32x4_t,
        COERCE_UNSIGNED_INT(
            0x1.0000000000000p+0 /
            (float)((float)((float)((float)((float)-(
                                                float)(v34 -
                                                       (float)((float)(v33 +
                                                                       (float)((float)-(
                                                                                   float)(v32 -
                                                                                          (float)((float)(v31 -
                                                                                                          (float)(*(float*)
                                                                                                                      GameData_212c190 *
                                                                                                                  0x1.3bd3ce0000000p-1)) *
                                                                                                  0x1.3bd3ce0000000p-1)) *
                                                                               0x1.3bd3ce0000000p-1)) *
                                                               0x1.3bd3ce0000000p-1)) *
                                            0x1.3bd3ce0000000p-1) +
                                    0x1.0000000000000p+0) *
                            0x1.921fb60000000p-1) /
                    (float)((float)((float)-(
                                        float)(v38 -
                                               (float)((float)(v37 +
                                                               (float)((float)-(
                                                                           float)(v36 -
                                                                                  (float)((float)(v35 -
                                                                                                  (float)(*(float*)
                                                                                                              GameData_212c188 *
                                                                                                          0x1.3bd3ce0000000p-1)) *
                                                                                          0x1.3bd3ce0000000p-1)) *
                                                                       0x1.3bd3ce0000000p-1)) *
                                                       0x1.3bd3ce0000000p-1)) *
                                    0x1.3bd3ce0000000p-1) +
                            0x1.0000000000000p+0))));
    LODWORD(v42) = 0;
    *((float*)&v42 + 1) =
        0x1.0000000000000p+0 /
        (float)((float)((float)((float)((float)-(
                                            float)(v34 -
                                                   (float)((float)(v33 +
                                                                   (float)((float)-(
                                                                               float)(v32 -
                                                                                      (float)((float)(v31 -
                                                                                                      (float)(*(float*)
                                                                                                                  GameData_212c190 *
                                                                                                              0x1.3bd3ce0000000p-1)) *
                                                                                              0x1.3bd3ce0000000p-1)) *
                                                                           0x1.3bd3ce0000000p-1)) *
                                                           0x1.3bd3ce0000000p-1)) *
                                        0x1.3bd3ce0000000p-1) +
                                0x1.0000000000000p+0) *
                        0x1.921fb60000000p-1) /
                (float)((float)((float)-(
                                    float)(v38 -
                                           (float)((float)(v37 +
                                                           (float)((float)-(
                                                                       float)(v36 -
                                                                              (float)((float)(v35 -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c188 *
                                                                                                      0x1.3bd3ce0000000p-1)) *
                                                                                      0x1.3bd3ce0000000p-1)) *
                                                                   0x1.3bd3ce0000000p-1)) *
                                                   0x1.3bd3ce0000000p-1)) *
                                0x1.3bd3ce0000000p-1) +
                        0x1.0000000000000p+0));
    v265 = COERCE_AS(float32x4_t, v42);
  LABEL_23:
    v43 = *(__int64***)(v12 + 888);
    v44 = *(__int64***)(v12 + 896);
    if (v43 == v44) {
      goto LABEL_22;
    }
    v45 = *v30;
    while (1) {
      if (*((_BYTE*)*v43 + 60) == 1) {
        v46 = **v43;
        v47 = (unsigned __int64)((*v43)[1] - v46) >> 4;
        v48 = __OFSUB__(v45, (_DWORD)v47);
        v49 = v45 - v47;
        if (v49 < 0 != v48) {
          v50 = (__int64*)(v46 + 16LL * v45);
          v52 = *v50;
          v51 = v50[1];
          if (v51 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v52 == 0) {
            v53 = 7;
            goto LABEL_42;
          }
          v53 = 7;
          if (*(_BYTE*)(v52 + 92) == 1 && (*(_BYTE*)(v52 + 93) & 1) != 0) {
            LANES128(v21).n128_u32[0] = *(_DWORD*)(v52 + 64);
            if (LANES128(v21).n128_f32[0] > 0.0) {
              LANES128(v21).n128_u32[0] = *(_DWORD*)(v52 + 72);
              if (LANES128(v21).n128_f32[0] > 0.0) {
                v54 = *(_DWORD*)(v52 + 104);
                v276 = v19;
                if (v54 >= 0x20) {
                  String_60a250("bitset test argument out of range");
                }
                if (((*(_QWORD*)(v29 + 240) >> v54) & 1) != 0) {
                  v55 = *(_DWORD*)(v7 + 176);
                  v282[0] = GameData_1fd2970;
                  v282[1] = v7;
                  v283 = v282;
                  v21 = gfx_light_c53b70((float32x4_t*)v52, (__int64)v282);
                  v267 = v21;
                  if (v283 == v282) {
                    v56 = 32;
                  LABEL_50:
                    (*(void (**)(__int64))(*v283 + v56))((__int64)v283);
                  }
                  else if (v283 != nullptr) {
                    v56 = 40;
                    goto LABEL_50;
                  }
                  v271 = v17;
                  LANES128(v21).n128_u32[1] = 0;
                  v53 = 7;
                  v57 = v278 + 160LL * v55;
                  v270 = v37;
                  v58 = v35;
                  v59 = v277 + 48LL * v55;
                  if (*(_DWORD*)(v52 + 88) == 5) {
                    v60 = 0x1.0000000000000p+0;
                  }
                  else {
                    v60 = 0.0;
                  }
                  *(_DWORD*)v59 = *(_DWORD*)(v52 + 8);
                  *(_DWORD*)(v59 + 4) = *(float*)(v52 + 76) > 0.0;
                  LANES128(v21).n128_u32[0] = *(_DWORD*)(v52 + 80);
                  *(_DWORD*)(v59 + 8) = LANES128(v21).n128_f32[0] > 0.0;
                  v61 = *(_DWORD*)(v52 + 8);
                  if (v61 <= 2) {
                    v29 = a2;
                    if (v61 != 1) {
                      if (v61 == 2) {
                        v253 = v40;
                        v256 = v39;
                        v247 = v58;
                        if (v51 != 0) {
                          atomic_fetch_add_explicit(
                              (atomic_ullong* volatile)(v51 + 8), 1u,
                              memory_order_relaxed);
                        }
                        v62 = *(float32x4_t*)(v52 + 256);
                        v63 = vmulq_f32(v62, v62);
                        LANES128(v63).n128_u64[0] =
                            LANES64_OF(
                                vadd_f32(COERCE_AS(
                                             float32x2_t,
                                             LANES128_OF(vextq_s8(v63, v63, 8u))
                                                 .n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v63).n128_u64[0])))
                                .n64_u64[0];
                        LANES128(v63).n128_u64[0] =
                            LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v63).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v63).n128_u64[0])))
                                .n64_u64[0];
                        LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
                        v64 = vrsqrteq_f32(v63);
                        v65 = vmulq_f32(v64,
                                        vrsqrtsq_f32(v64, vmulq_f32(v63, v64)));
                        v248 = vbicq_s8(
                            vmulq_f32(
                                v62,
                                vmulq_f32(v65, vrsqrtsq_f32(
                                                   v65, vmulq_f32(v63, v65)))),
                            vceqzq_f32(v63));
                        LODWORD(v245) = COERCE_UNSIGNED_INT128(
                            ((long double (*)(__int64)) *
                             (_QWORD*)(*(_QWORD*)v52 + 16LL))(v52));
                        v66 = *(float*)(v52 + 272);
                        v67 = (float)(v66 * 0x1.1df46a0000000p-6) * 0.5;
                        v68 = cosf((float)((float)(v66 * *(float*)(v52 + 276)) *
                                           0x1.1df46a0000000p-6) *
                                   0.5);
                        v69 = cosf(v67);
                        v70 = v68 - v69;
                        if ((float)(v68 - v69) < 0x1.0624de0000000p-10) {
                          v70 = 0x1.0624de0000000p-10;
                        }
                        v71 = 0x1.0000000000000p+0 / v70;
                        v72 = *(float*)(v52 + 32) + -0x1.47ae140000000p-7;
                        if (v72 < 0x1.0000000000000p+0) {
                          v72 = 0x1.0000000000000p+0;
                        }
                        v73 = -(float)(v69 * v71);
                        if (v72 >= *(float*)(v52 + 280)) {
                          v72 = *(float*)(v52 + 280);
                        }
                        if (v72 < 0x1.47ae140000000p-7) {
                          v72 = 0x1.47ae140000000p-7;
                        }
                        v74 = vmulq_f32(vmulq_n_f32(v267, v245), v273);
                        *(_QWORD*)v57 = LANES128(v74).n128_u64[0];
                        *(_DWORD*)(v57 + 8) = LANES128(v74).n128_u32[2];
                        *(_DWORD*)(v57 + 12) = *(_DWORD*)(v52 + 32);
                        v75 = *(_OWORD*)(v52 + 16);
                        *(float*)(v57 + 28) = v60;
                        *(_DWORD*)(v57 + 44) = 0;
                        *(_QWORD*)(v57 + 16) = v75;
                        *(_DWORD*)(v57 + 24) = DWORD2(v75);
                        *(_QWORD*)(v57 + 32) = LANES128(v248).n128_u64[0];
                        *(_DWORD*)(v57 + 40) = LANES128(v248).n128_u32[2];
                        v76 = *(unsigned int*)(v52 + 284);
                        *(float*)(v57 + 48) = v71;
                        *(float*)(v57 + 52) = v73;
                        *(_QWORD*)(v57 + 56) =
                            COERCE_UNSIGNED_INT(0x1.0000000000000p+0 / v72) |
                            (unsigned __int64)(v76 << 32);
                        *(_DWORD*)(v57 + 64) = *(_DWORD*)(v52 + 76);
                        *(_DWORD*)(v57 + 68) = *(_DWORD*)(v52 + 80);
                        if (*(_BYTE*)(v52 + 94) != 0) {
                          v77 = 0.0;
                        }
                        else {
                          v77 = 0x1.0000000000000p+0;
                        }
                        *(float*)(v57 + 72) = v77;
                        if (*(_BYTE*)(v52 + 95) != 0) {
                          v78 = 0.0;
                        }
                        else {
                          v78 = 0x1.0000000000000p+0;
                        }
                        *(float*)(v57 + 76) = v78;
                        v291.val[0] = *(float32x4_t*)GameData_212c2b0;
                        v291.val[1] = *((float32x4_t*)GameData_212c2b0 + 1);
                        v291.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) +
                                                      (_QWORD)GameData_212c2b0);
                        v291.val[3] =
                            *(float32x4_t*)((char*)((char*)0x20LL) +
                                            (_QWORD)GameData_212c2b0 + 16);
                        vst4q_f32((float*)(v57 + 80), v291);
                        v79 = *(_DWORD*)(v52 + 8);
                        *(_QWORD*)(v57 + 152) = 0;
                        *(_QWORD*)(v57 + 144) = v79;
                        v80 = gfx_light_c53c90((float32x4_t*)v52, &v286);
                        *(_QWORD*)(v59 + 16) = LANES128(v80).n128_u64[0];
                        *(_QWORD*)(v59 + 24) =
                            LANES128_OF(vextq_s8(v80, v80, 8u)).n128_u64[0];
                        v21 = *(float32x4_t*)GameData_212c568;
                        *(_QWORD*)(v59 + 32) = *(_QWORD*)GameData_212c568;
                        *(_QWORD*)(v59 + 40) =
                            LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0];
                        if ((*(_BYTE*)(v52 + 96) & 2) == 0) {
                          v35 = v58;
                          v37 = v270;
                          v39 = v256;
                          v40 = v253;
                          v29 = a2;
                          v19 = v276;
                          goto LABEL_138;
                        }
                        v156 = *(_DWORD*)(v7 + 232);
                        v40 = v253;
                        v19 = v276;
                        v29 = a2;
                        if (v156 >= v274) {
                          v35 = v58;
                          v37 = v270;
                          v39 = v256;
                        }
                        else {
                          v35 = v58;
                          if (v272 >= v269) {
                            v37 = v270;
                            v39 = v256;
                          }
                          else {
                            v157 = *(float32x4_t*)(v52 + 16);
                            v158 = (int8x16_t*)GameData_212c558;
                            v37 = v270;
                            v159 = vsubq_f32(v157, vaddq_f32(v248, v157));
                            if (fabsf(LANES128(v248).n128_f32[2]) <=
                                fabsf(LANES128(v248).n128_f32[1])) {
                              v158 = (int8x16_t*)GameData_212c560;
                            }
                            v160 = vmulq_f32(v159, v159);
                            LANES128(v160).n128_u64[0] =
                                LANES64_OF(
                                    vadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128_OF(
                                                      vextq_s8(v160, v160, 8u))
                                                      .n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v160).n128_u64[0])))
                                    .n64_u64[0];
                            LANES128(v160).n128_u64[0] =
                                LANES64_OF(
                                    vpadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v160).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v160).n128_u64[0])))
                                    .n64_u64[0];
                            LANES128(v160).n128_u64[1] =
                                LANES128(v160).n128_u64[0];
                            v161 = vrsqrteq_f32(v160);
                            v162 = vmulq_f32(
                                v161,
                                vrsqrtsq_f32(v161, vmulq_f32(v160, v161)));
                            v163 = vbicq_s8(
                                vmulq_f32(
                                    v159,
                                    vmulq_f32(
                                        v162,
                                        vrsqrtsq_f32(v162,
                                                     vmulq_f32(v160, v162)))),
                                vceqzq_f32(v160));
                            LANES128(v162).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(*v158,
                                              COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                                    .n64_u64[0];
                            LANES128(v164).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v163,
                                              COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                                    .n64_u64[0];
                            *(int8x8_t*)&LANES128(v162).n128_i8[8] = vqtbl1_s8(
                                *v158,
                                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                            LANES128(v165).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v163,
                                              COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                                    .n64_u64[0];
                            *(int8x8_t*)&LANES128(v165).n128_i8[8] = vqtbl1_s8(
                                v163, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                            LANES128(v166).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(*v158,
                                              COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                                    .n64_u64[0];
                            *(int8x8_t*)&LANES128(v166).n128_i8[8] = vqtbl1_s8(
                                *v158,
                                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                            *(int8x8_t*)&LANES128(v164).n128_i8[8] = vqtbl1_s8(
                                v163, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                            v167 = vmlsq_f32(vmulq_f32(v162, v165), v164, v166);
                            v168 = vmulq_f32(v167, v167);
                            LANES128(v168).n128_u64[0] =
                                LANES64_OF(
                                    vadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128_OF(
                                                      vextq_s8(v168, v168, 8u))
                                                      .n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v168).n128_u64[0])))
                                    .n64_u64[0];
                            LANES128(v168).n128_u64[0] =
                                LANES64_OF(
                                    vpadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v168).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v168).n128_u64[0])))
                                    .n64_u64[0];
                            LANES128(v168).n128_u64[1] =
                                LANES128(v168).n128_u64[0];
                            v169 = vrsqrteq_f32(v168);
                            v170 = vmulq_f32(
                                v169,
                                vrsqrtsq_f32(v169, vmulq_f32(v168, v169)));
                            v171 = vbicq_s8(
                                vmulq_f32(
                                    v167,
                                    vmulq_f32(
                                        v170,
                                        vrsqrtsq_f32(v170,
                                                     vmulq_f32(v168, v170)))),
                                vceqzq_f32(v168));
                            LANES128(v167).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v171,
                                              COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                                    .n64_u64[0];
                            LANES128(v172).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v171,
                                              COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                                    .n64_u64[0];
                            *(int8x8_t*)&LANES128(v167).n128_i8[8] = vqtbl1_s8(
                                v171, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                            *(int8x8_t*)&LANES128(v172).n128_i8[8] = vqtbl1_s8(
                                v171, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                            v173 = vnegq_f32(v157);
                            v174 = vmulq_f32(v171, v173);
                            v175 = vmlsq_f32(vmulq_f32(v164, v167), v172, v165);
                            LANES128(v174).n128_u64[0] =
                                LANES64_OF(
                                    vadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128_OF(
                                                      vextq_s8(v174, v174, 8u))
                                                      .n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v174).n128_u64[0])))
                                    .n64_u64[0];
                            v176 = vmulq_f32(v175, v173);
                            v177 = vmulq_f32(v163, v173);
                            LANES64(v178).n64_u64[0] =
                                LANES64_OF(
                                    vpadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v174).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v174).n128_u64[0])))
                                    .n64_u64[0];
                            LANES128(v176).n128_u64[0] =
                                LANES64_OF(
                                    vadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128_OF(
                                                      vextq_s8(v176, v176, 8u))
                                                      .n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v176).n128_u64[0])))
                                    .n64_u64[0];
                            LANES128(v177).n128_u64[0] =
                                LANES64_OF(
                                    vadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128_OF(
                                                      vextq_s8(v177, v177, 8u))
                                                      .n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v177).n128_u64[0])))
                                    .n64_u64[0];
                            LANES64(v179).n64_u64[0] =
                                LANES64_OF(
                                    vpadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v176).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v176).n128_u64[0])))
                                    .n64_u64[0];
                            LANES64(v180).n64_u64[0] =
                                LANES64_OF(
                                    vpadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v177).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v177).n128_u64[0])))
                                    .n64_u64[0];
                            v181 = v67 +
                                   (float)(roundf(v67 * 0x1.45f3060000000p-3) *
                                           -0x1.921fb60000000p+2);
                            if (v181 > 0x1.921fb60000000p+0) {
                              v39 = v256;
                              v182 = 0x1.921fb60000000p+1;
                              goto LABEL_136;
                            }
                            v39 = v256;
                            v216 = 0x1.0000000000000p+0;
                            if (v181 < -0x1.921fb60000000p+0) {
                              v182 = -0x1.921fb60000000p+1;
                            LABEL_136:
                              v181 = v182 - v181;
                              v216 = -0x1.0000000000000p+0;
                            }
                            v217 = v181 * v181;
                            v218 = *(float*)(v52 + 32);
                            v219 = *(int*)(v7 + 232);
                            v259 = *a5;
                            v246 = v219;
                            LANES128(v220).n128_u64[0] = 0;
                            LODWORD(v221) = 0;
                            v222 =
                                (float)(v181 *
                                        (float)((float)((float)(v253 +
                                                                (float)((float)(v33 +
                                                                                (float)((float)(v39 +
                                                                                                (float)((float)(v31 +
                                                                                                                (float)(v262 *
                                                                                                                        (float)(v181 *
                                                                                                                                v181))) *
                                                                                                        (float)(v181 *
                                                                                                                v181))) *
                                                                                        (float)(v181 *
                                                                                                v181))) *
                                                                        (float)(v181 *
                                                                                v181))) *
                                                        (float)(v181 * v181)) +
                                                0x1.0000000000000p+0)) /
                                (float)(v216 *
                                        (float)((float)((float)(v260 +
                                                                (float)((float)(v270 +
                                                                                (float)((float)(v261 +
                                                                                                (float)((float)(v247 +
                                                                                                                (float)(v41 *
                                                                                                                        v217)) *
                                                                                                        v217)) *
                                                                                        v217)) *
                                                                        v217)) *
                                                        v217) +
                                                0x1.0000000000000p+0));
                            v223 = -0x1.0000000000000p+0 /
                                   (float)(v218 + -0x1.47ae140000000p-7);
                            *(float*)&v224 = 0x1.0000000000000p+0 / v222;
                            *((float*)&v221 + 1) = 0x1.0000000000000p+0 / v222;
                            LANES128(v220).n128_f32[2] = v218 * v223;
                            LANES128(v220).n128_u32[3] = -0x1.0000000000000p+0;
                            v225 = vmulq_n_f32(
                                COERCE_AS(float32x4_t,
                                          COERCE_UNSIGNED_INT(
                                              0x1.0000000000000p+0 / v222)),
                                LANES128(v171).n128_f32[0]);
                            *(float*)&v226 =
                                (float)(v218 * 0x1.47ae140000000p-7) * v223;
                            LANES128(v227).n128_u64[0] = 0;
                            LANES128(v227).n128_u64[1] = v226;
                            v290.val[0] = vmlaq_n_f32(
                                vmlaq_n_f32(v225, COERCE_AS(float32x4_t, v221),
                                            LANES128(v175).n128_f32[0]),
                                v220, LANES128(v163).n128_f32[0]);
                            v290.val[1] = vmlaq_lane_f32(
                                vmlaq_lane_f32(
                                    vmulq_lane_f32(
                                        COERCE_AS(float32x4_t, v224),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v171).n128_u64[0]),
                                        1),
                                    COERCE_AS(float32x4_t, v221),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v175).n128_u64[0]),
                                    1),
                                v220,
                                COERCE_AS(float32x2_t,
                                          LANES128(v163).n128_u64[0]),
                                1);
                            v290.val[2] = vmlaq_laneq_f32(
                                vmlaq_laneq_f32(
                                    vmulq_laneq_f32(
                                        COERCE_AS(float32x4_t, v224), v171, 2),
                                    COERCE_AS(float32x4_t, v221), v175, 2),
                                v220, v163, 2);
                            v290.val[3] = vaddq_f32(
                                v227,
                                vmlaq_lane_f32(
                                    vmlaq_lane_f32(
                                        vmulq_lane_f32(
                                            COERCE_AS(float32x4_t, v224), v178,
                                            1),
                                        COERCE_AS(float32x4_t, v221), v179, 1),
                                    v220, v180, 1));
                            v228 = *(_QWORD*)(v7 + 240) + 56LL * v156;
                            v244 = v228;
                            v229 = *(_QWORD*)(v228 + 8LL * *(int*)(v228 + 16));
                            v230 = (*(__int64 (**)(__int64))(*(_QWORD*)v229 +
                                                             56LL))(v229);
                            vst4q_f32((float*)v230, v290);
                            *(_DWORD*)(v230 + 64) = *(_DWORD*)(v52 + 16);
                            *(_DWORD*)(v230 + 68) = *(_DWORD*)(v52 + 20);
                            *(_DWORD*)(v230 + 72) = *(_DWORD*)(v52 + 24);
                            *(float*)(v230 + 76) =
                                0x1.0000000000000p+0 / *(float*)(v52 + 32);
                            (*(void (**)(__int64))(*(_QWORD*)v229 + 64LL))(
                                v229);
                            vst4q_f32((float*)(v57 + 80), v290);
                            v231 = (*(__int64 (**)(_QWORD))(
                                **(_QWORD**)(v259 + 8 * v219) + 16LL))(
                                *(_QWORD*)(v259 + 8 * v219));
                            (*(void (**)(__int64))(*(_QWORD*)v231 + 40LL))(
                                v231);
                            *(_QWORD*)(v57 + 152) =
                                (*(__int64 (**)(__int64))GameData_212e4d8[0])(
                                    *(_QWORD*)(*(_QWORD*)v7 + 256LL) + 8LL);
                            v232 = *(int*)(v7 + 232);
                            v233 = *(_QWORD*)(v7 + 264);
                            *(_QWORD*)(*(_QWORD*)(v233 + 8 * v232) + 8LL) = v52;
                            *(__n128*)(*(_QWORD*)(v233 + 8 * v232) + 16LL) =
                                gfx_light_c53c90((float32x4_t*)v52, nullptr);
                            *(_QWORD*)(*(_QWORD*)(v233 + 8 * v232) + 32LL) =
                                (*(__int64 (**)(_QWORD))(
                                    **(_QWORD**)(v259 + 8 * v246) + 16LL))(
                                    *(_QWORD*)(v259 + 8 * v246));
                            v234 = *(_QWORD*)(v233 + 8 * v232);
                            v235 = v244 + 16LL * *(int*)(v244 + 16);
                            v237 = *(_QWORD*)(v235 + 24);
                            v236 = *(_QWORD*)(v235 + 32);
                            *(_QWORD*)(v234 + 40) = v237;
                            *(_QWORD*)(v234 + 48) = v236;
                            v238 = *(_QWORD*)(v233 + 8 * v232);
                            v19 = v276;
                            *(_DWORD*)(v238 + 208) = v263;
                            ++*(_DWORD*)(v7 + 232);
                            ++v272;
                            v29 = a2;
                          }
                        }
                      LABEL_138:
                        v17 = v271;
                        if (v51 != 0) {
                        LABEL_139:
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v51 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            goto LABEL_140;
                          }
                        }
                        goto LABEL_141;
                      }
                    LABEL_87:
                      v35 = v58;
                      v37 = v270;
                      v17 = v271;
                      v19 = v276;
                      goto LABEL_42;
                    }
                    v252 = v41;
                    v133 = v40;
                    v134 = v39;
                    if (v51 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v51 + 8), 1u,
                          memory_order_relaxed);
                    }
                    v135 = *(float*)(v52 + 32) + -0x1.47ae140000000p-7;
                    if (v135 < 0x1.0000000000000p+0) {
                      v135 = 0x1.0000000000000p+0;
                    }
                    if (v135 >= *(float*)(v52 + 248)) {
                      v135 = *(float*)(v52 + 248);
                    }
                    if (v135 < 0x1.47ae140000000p-7) {
                      v135 = 0x1.47ae140000000p-7;
                    }
                    *(float*)&v136 = 0x1.0000000000000p+0 / v135;
                    v137 = vmulq_f32(
                        vmulq_n_f32(v267, (*(float (**)(__int64))(
                                              *(_QWORD*)v52 + 16LL))(v52)),
                        v273);
                    *(_QWORD*)v57 = LANES128(v137).n128_u64[0];
                    *(_DWORD*)(v57 + 8) = LANES128(v137).n128_u32[2];
                    *(_DWORD*)(v57 + 12) = *(_DWORD*)(v52 + 32);
                    v138 = *(_OWORD*)(v52 + 16);
                    *(float*)(v57 + 28) = v60;
                    *(_QWORD*)(v57 + 32) = 0;
                    *(_QWORD*)(v57 + 40) = 0;
                    *(_QWORD*)(v57 + 16) = v138;
                    *(_DWORD*)(v57 + 24) = DWORD2(v138);
                    v139 = v136 | ((unsigned __int64)*(unsigned int*)(v52 + 252)
                                   << 32);
                    *(_QWORD*)(v57 + 48) = 0;
                    *(_QWORD*)(v57 + 56) = v139;
                    *(_DWORD*)(v57 + 64) = *(_DWORD*)(v52 + 76);
                    *(_DWORD*)(v57 + 68) = *(_DWORD*)(v52 + 80);
                    if (*(_BYTE*)(v52 + 94) != 0) {
                      v140 = 0.0;
                    }
                    else {
                      v140 = 0x1.0000000000000p+0;
                    }
                    *(float*)(v57 + 72) = v140;
                    if (*(_BYTE*)(v52 + 95) != 0) {
                      v141 = 0.0;
                    }
                    else {
                      v141 = 0x1.0000000000000p+0;
                    }
                    *(float*)(v57 + 76) = v141;
                    v292.val[0] = *(float32x4_t*)GameData_212c2b0;
                    v292.val[1] = *((float32x4_t*)GameData_212c2b0 + 1);
                    v292.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) +
                                                  (_QWORD)GameData_212c2b0);
                    v292.val[3] =
                        *(float32x4_t*)((char*)((char*)0x20LL) +
                                        (_QWORD)GameData_212c2b0 + 16);
                    vst4q_f32((float*)(v57 + 80), v292);
                    v142 = *(_DWORD*)(v52 + 8);
                    *(_QWORD*)(v57 + 152) = 0;
                    *(_DWORD*)(v57 + 144) = v142;
                    *(_DWORD*)(v57 + 148) = 0;
                    v292.val[0] = vaddq_f32(
                        vmlaq_laneq_f32(
                            vmlaq_lane_f32(
                                vmulq_n_f32(v286,
                                            COERCE_FLOAT(*(_OWORD*)(v52 + 16))),
                                v287, *(float32x2_t*)(v52 + 16), 1),
                            v288, *(float32x4_t*)(v52 + 16), 2),
                        v289);
                    v143 = LANES128(v292.val[0]).n128_u32[2] |
                           ((unsigned __int64)*(unsigned int*)(v52 + 32) << 32);
                    *(_QWORD*)(v59 + 16) = LANES128(v292.val[0]).n128_u64[0];
                    *(_QWORD*)(v59 + 24) = v143;
                    v21 = *(float32x4_t*)GameData_212c568;
                    *(_QWORD*)(v59 + 32) = *(_QWORD*)GameData_212c568;
                    *(_QWORD*)(v59 + 40) =
                        LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0];
                    if ((*(_BYTE*)(v52 + 96) & 2) == 0) {
                      v39 = v134;
                      v40 = v133;
                      v41 = v252;
                      v29 = a2;
                      v35 = v58;
                      goto LABEL_104;
                    }
                    v183 = *(_DWORD*)(v7 + 180);
                    v39 = v134;
                    v35 = v58;
                    v29 = a2;
                    if (v183 >= v275) {
                      v40 = v133;
                      v41 = v252;
                    LABEL_104:
                      v37 = v270;
                    }
                    else {
                      v37 = v270;
                      v40 = v133;
                      if (v272 >= v269) {
                        v41 = v252;
                      }
                      else {
                        v250 = *(int*)(v7 + 180);
                        v268 = *a4;
                        v184 = *(_QWORD*)(v7 + 184) + 56LL * v183;
                        v255 = v184;
                        v258 = *(_QWORD*)(v184 + 8LL * *(int*)(v184 + 16));
                        v185 = (*(__int64 (**)(__int64))(*(_QWORD*)v258 +
                                                         56LL))((__int64)v258);
                        v41 = v252;
                        v186 = 0;
                        v187 = (float*)v185;
                        do {
                          v188 = *(float32x4_t*)(v52 + 16);
                          v189 = vsubq_f32(
                              v188,
                              vaddq_f32(v188, *(float32x4_t*)&v285[v186]));
                          v190 = vnegq_f32(v188);
                          v191 = vmulq_f32(v189, v189);
                          LANES128(v191).n128_u64[0] =
                              LANES64_OF(
                                  vadd_f32(
                                      COERCE_AS(
                                          float32x2_t,
                                          LANES128_OF(vextq_s8(v191, v191, 8u))
                                              .n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v191).n128_u64[0])))
                                  .n64_u64[0];
                          v192 = *(int8x16_t*)&v284[v186];
                          v186 += 2;
                          LANES128(v191).n128_u64[0] =
                              LANES64_OF(
                                  vpadd_f32(
                                      COERCE_AS(float32x2_t,
                                                LANES128(v191).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v191).n128_u64[0])))
                                  .n64_u64[0];
                          LANES128(v191).n128_u64[1] =
                              LANES128(v191).n128_u64[0];
                          v193 = vrsqrteq_f32(v191);
                          v194 = vmulq_f32(
                              v193, vrsqrtsq_f32(v193, vmulq_f32(v191, v193)));
                          v195 = vbicq_s8(
                              vmulq_f32(
                                  v189,
                                  vmulq_f32(v194,
                                            vrsqrtsq_f32(
                                                v194, vmulq_f32(v191, v194)))),
                              vceqzq_f32(v191));
                          LANES128(v191).n128_u64[0] =
                              LANES64_OF(
                                  vqtbl1_s8(
                                      v192,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                  .n64_u64[0];
                          *(int8x8_t*)&LANES128(v191).n128_i8[8] = vqtbl1_s8(
                              v192, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                          LANES128(v196).n128_u64[0] =
                              LANES64_OF(
                                  vqtbl1_s8(
                                      v195,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                  .n64_u64[0];
                          *(int8x8_t*)&LANES128(v196).n128_i8[8] = vqtbl1_s8(
                              v195, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                          LANES128(v197).n128_u64[0] =
                              LANES64_OF(
                                  vqtbl1_s8(
                                      v192,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                  .n64_u64[0];
                          *(int8x8_t*)&LANES128(v197).n128_i8[8] = vqtbl1_s8(
                              v192, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                          LANES128(v192).n128_u64[0] =
                              LANES64_OF(
                                  vqtbl1_s8(
                                      v195,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                  .n64_u64[0];
                          *(int8x8_t*)&LANES128(v192).n128_i8[8] = vqtbl1_s8(
                              v195, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                          v198 = vmlsq_f32(vmulq_f32(v191, v196), v192, v197);
                          v199 = vmulq_f32(v198, v198);
                          LANES128(v199).n128_u64[0] =
                              LANES64_OF(
                                  vadd_f32(
                                      COERCE_AS(
                                          float32x2_t,
                                          LANES128_OF(vextq_s8(v199, v199, 8u))
                                              .n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v199).n128_u64[0])))
                                  .n64_u64[0];
                          LANES128(v199).n128_u64[0] =
                              LANES64_OF(
                                  vpadd_f32(
                                      COERCE_AS(float32x2_t,
                                                LANES128(v199).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v199).n128_u64[0])))
                                  .n64_u64[0];
                          LANES128(v199).n128_u64[1] =
                              LANES128(v199).n128_u64[0];
                          v200 = vrsqrteq_f32(v199);
                          v201 = vmulq_f32(
                              v200, vrsqrtsq_f32(v200, vmulq_f32(v199, v200)));
                          v202 = vbicq_s8(
                              vmulq_f32(
                                  v198,
                                  vmulq_f32(v201,
                                            vrsqrtsq_f32(
                                                v201, vmulq_f32(v199, v201)))),
                              vceqzq_f32(v199));
                          LANES128(v199).n128_u64[0] = 0;
                          LANES128(v203).n128_u64[0] =
                              LANES64_OF(
                                  vqtbl1_s8(
                                      v202,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                  .n64_u64[0];
                          LANES128(v194).n128_u64[0] =
                              LANES64_OF(
                                  vqtbl1_s8(
                                      v202,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                  .n64_u64[0];
                          *(int8x8_t*)&LANES128(v203).n128_i8[8] = vqtbl1_s8(
                              v202, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                          *(int8x8_t*)&LANES128(v194).n128_i8[8] = vqtbl1_s8(
                              v202, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                          v204 = vmlsq_f32(vmulq_f32(v192, v203), v194, v196);
                          v205 = vmulq_f32(v202, v190);
                          LANES128(v205).n128_u64[0] =
                              LANES64_OF(
                                  vadd_f32(
                                      COERCE_AS(
                                          float32x2_t,
                                          LANES128_OF(vextq_s8(v205, v205, 8u))
                                              .n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v205).n128_u64[0])))
                                  .n64_u64[0];
                          v206 = vmulq_f32(v204, v190);
                          v207 = vmulq_f32(v195, v190);
                          LANES128(v206).n128_u64[0] =
                              LANES64_OF(
                                  vadd_f32(
                                      COERCE_AS(
                                          float32x2_t,
                                          LANES128_OF(vextq_s8(v206, v206, 8u))
                                              .n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v206).n128_u64[0])))
                                  .n64_u64[0];
                          LANES128(v207).n128_u64[0] =
                              LANES64_OF(
                                  vadd_f32(
                                      COERCE_AS(
                                          float32x2_t,
                                          LANES128_OF(vextq_s8(v207, v207, 8u))
                                              .n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v207).n128_u64[0])))
                                  .n64_u64[0];
                          LANES128(v203).n128_u32[0] = *(_DWORD*)(v52 + 32);
                          LANES128(v196).n128_f32[0] =
                              -0x1.0000000000000p+0 /
                              (float)(LANES128(v203).n128_f32[0] +
                                      -0x1.47ae140000000p-7);
                          LANES128(v199).n128_f32[2] =
                              LANES128(v203).n128_f32[0] *
                              LANES128(v196).n128_f32[0];
                          LANES128(v199).n128_u32[3] = -0x1.0000000000000p+0;
                          LANES128(v203).n128_f32[0] =
                              (float)(LANES128(v203).n128_f32[0] *
                                      0x1.47ae140000000p-7) *
                              LANES128(v196).n128_f32[0];
                          LANES128(v196).n128_u64[0] = 0;
                          v294.val[0] = vmlaq_n_f32(
                              vmlaq_n_f32(
                                  vmulq_n_f32(v266, LANES128(v202).n128_f32[0]),
                                  v265, LANES128(v204).n128_f32[0]),
                              v199, LANES128(v195).n128_f32[0]);
                          LANES128(v196).n128_u64[1] =
                              LANES128(v203).n128_u32[0];
                          v294.val[1] = vmlaq_lane_f32(
                              vmlaq_lane_f32(
                                  vmulq_lane_f32(
                                      v266,
                                      COERCE_AS(float32x2_t,
                                                LANES128(v202).n128_u64[0]),
                                      1),
                                  v265,
                                  COERCE_AS(float32x2_t,
                                            LANES128(v204).n128_u64[0]),
                                  1),
                              v199,
                              COERCE_AS(float32x2_t,
                                        LANES128(v195).n128_u64[0]),
                              1);
                          v294.val[2] = vmlaq_laneq_f32(
                              vmlaq_laneq_f32(vmulq_laneq_f32(v266, v202, 2),
                                              v265, v204, 2),
                              v199, v195, 2);
                          v294.val[3] = vaddq_f32(
                              v196,
                              vmlaq_lane_f32(
                                  vmlaq_lane_f32(
                                      vmulq_lane_f32(
                                          v266,
                                          vpadd_f32(
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v205).n128_u64[0]),
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v205).n128_u64[0])),
                                          1),
                                      v265,
                                      vpadd_f32(
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v206).n128_u64[0]),
                                          COERCE_AS(
                                              float32x2_t,
                                              LANES128(v206).n128_u64[0])),
                                      1),
                                  v199,
                                  vpadd_f32(
                                      COERCE_AS(float32x2_t,
                                                LANES128(v207).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v207).n128_u64[0])),
                                  1));
                          vst4q_f32(v187, v294);
                          v187 += 16;
                        } while (v186 != 12);
                        *(_DWORD*)(v185 + 384) = *(_DWORD*)(v52 + 16);
                        *(_DWORD*)(v185 + 388) = *(_DWORD*)(v52 + 20);
                        *(_DWORD*)(v185 + 392) = *(_DWORD*)(v52 + 24);
                        *(float*)(v185 + 396) =
                            0x1.0000000000000p+0 / *(float*)(v52 + 32);
                        v208 = (*(__int64 (**)(_QWORD))(
                            **(_QWORD**)(v268 + 8 * v250) + 16LL))(
                            *(_QWORD*)(v268 + 8 * v250));
                        (*(void (**)(__int64))(*(_QWORD*)v208 + 40LL))(v208);
                        *(_QWORD*)(v57 + 152) =
                            (*(__int64 (**)(__int64))GameData_212e4d8[0])(
                                *(_QWORD*)(*(_QWORD*)v7 + 256LL) + 8LL);
                        v209 = *(int*)(v7 + 180);
                        v210 = *(_QWORD*)(v7 + 208);
                        *(_QWORD*)(*(_QWORD*)(v210 + 8 * v209) + 8LL) = v52;
                        *(_QWORD*)&v211 = *(_QWORD*)(v52 + 16);
                        *((_QWORD*)&v211 + 1) =
                            *(unsigned int*)(v52 + 24) |
                            ((unsigned __int64)*(unsigned int*)(v52 + 32)
                             << 32);
                        *(_OWORD*)(*(_QWORD*)(v210 + 8 * v209) + 16LL) = v211;
                        *(_QWORD*)(*(_QWORD*)(v210 + 8 * v209) + 32LL) =
                            (*(__int64 (**)(_QWORD))(
                                **(_QWORD**)(v268 + 8 * v250) + 16LL))(
                                *(_QWORD*)(v268 + 8 * v250));
                        v212 = *(_QWORD*)(v210 + 8 * v209);
                        v213 = v255 + 16LL * *(int*)(v255 + 16);
                        v215 = *(_QWORD*)(v213 + 24);
                        v214 = *(_QWORD*)(v213 + 32);
                        *(_QWORD*)(v212 + 40) = v215;
                        *(_QWORD*)(v212 + 48) = v214;
                        *(_DWORD*)(*(_QWORD*)(v210 + 8 * v209) + 400LL) = v264;
                        ++*(_DWORD*)(v7 + 180);
                        ++v272;
                        (*(void (**)(__int64))(*(_QWORD*)v258 + 64LL))(v258);
                        v29 = a2;
                      }
                    }
                    v17 = v271;
                    v19 = v276;
                    if (v51 != 0) {
                      goto LABEL_139;
                    }
                    goto LABEL_141;
                  }
                  v29 = a2;
                  if (v61 == 3) {
                    if (v51 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v51 + 8), 1u,
                          memory_order_relaxed);
                    }
                    v144 = *(float32x4_t*)(v52 + 256);
                    v145 = vmulq_f32(v144, v144);
                    v146 = *(unsigned int*)(v52 + 280);
                    v257 = *(_QWORD*)(v52 + 272);
                    LANES128(v145).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v145, v145, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v145).n128_u64[0])))
                            .n64_u64[0];
                    LANES128(v145).n128_u64[0] =
                        LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v145).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v145).n128_u64[0])))
                            .n64_u64[0];
                    LANES128(v145).n128_u64[1] = LANES128(v145).n128_u64[0];
                    v147 = vrsqrteq_f32(v145);
                    v148 = vmulq_f32(v147,
                                     vrsqrtsq_f32(v147, vmulq_f32(v145, v147)));
                    v254 = vbicq_s8(
                        vmulq_f32(
                            v144,
                            vmulq_f32(v148, vrsqrtsq_f32(
                                                v148, vmulq_f32(v145, v148)))),
                        vceqzq_f32(v145));
                    v149 = vmulq_f32(
                        vmulq_n_f32(v267, (*(float (**)(__int64))(
                                              *(_QWORD*)v52 + 16LL))(v52)),
                        v273);
                    *(_QWORD*)v57 = LANES128(v149).n128_u64[0];
                    *(_DWORD*)(v57 + 8) = LANES128(v149).n128_u32[2];
                    *(_DWORD*)(v57 + 12) = *(_DWORD*)(v52 + 32);
                    v150 = *(_OWORD*)(v52 + 16);
                    *(float*)(v57 + 28) = v60;
                    *(_QWORD*)(v57 + 16) = v150;
                    *(_DWORD*)(v57 + 24) = DWORD2(v150);
                    *(_QWORD*)(v57 + 32) = LANES128(v254).n128_u64[0];
                    *(_DWORD*)(v57 + 40) = LANES128(v254).n128_u32[2];
                    *(float*)(v57 + 44) = *(float*)(v52 + 288) * 0.5;
                    v151 = v146 | ((unsigned __int64)COERCE_UNSIGNED_INT(
                                       *(float*)(v52 + 292) * 0.5)
                                   << 32);
                    *(_QWORD*)(v57 + 48) = v257;
                    *(_QWORD*)(v57 + 56) = v151;
                    *(_DWORD*)(v57 + 64) = *(_DWORD*)(v52 + 76);
                    *(_DWORD*)(v57 + 68) = *(_DWORD*)(v52 + 80);
                    if (*(_BYTE*)(v52 + 94) != 0) {
                      v152 = 0.0;
                    }
                    else {
                      v152 = 0x1.0000000000000p+0;
                    }
                    *(float*)(v57 + 72) = v152;
                    if (*(_BYTE*)(v52 + 95) != 0) {
                      v153 = 0.0;
                    }
                    else {
                      v153 = 0x1.0000000000000p+0;
                    }
                    *(float*)(v57 + 76) = v153;
                    v293.val[0] = *(float32x4_t*)GameData_212c2b0;
                    v293.val[1] = *((float32x4_t*)GameData_212c2b0 + 1);
                    v293.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) +
                                                  (_QWORD)GameData_212c2b0);
                    v293.val[3] =
                        *(float32x4_t*)((char*)((char*)0x20LL) +
                                        (_QWORD)GameData_212c2b0 + 16);
                    vst4q_f32((float*)(v57 + 80), v293);
                    v154 = *(_DWORD*)(v52 + 8);
                    *(_QWORD*)(v57 + 152) = 0;
                    *(_DWORD*)(v57 + 144) = v154;
                    *(_DWORD*)(v57 + 148) = 0;
                    v293.val[0] = vaddq_f32(
                        vmlaq_laneq_f32(
                            vmlaq_lane_f32(
                                vmulq_n_f32(v286,
                                            COERCE_FLOAT(*(_OWORD*)(v52 + 16))),
                                v287, *(float32x2_t*)(v52 + 16), 1),
                            v288, *(float32x4_t*)(v52 + 16), 2),
                        v289);
                    v155 = LANES128(v293.val[0]).n128_u32[2] |
                           ((unsigned __int64)*(unsigned int*)(v52 + 32) << 32);
                    *(_QWORD*)(v59 + 16) = LANES128(v293.val[0]).n128_u64[0];
                    *(_QWORD*)(v59 + 24) = v155;
                    v21 = *(float32x4_t*)GameData_212c568;
                    *(_QWORD*)(v59 + 32) = *(_QWORD*)GameData_212c568;
                    *(_QWORD*)(v59 + 40) =
                        LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0];
                    if (v51 != 0) {
                    LABEL_114:
                      v29 = a2;
                      v17 = v271;
                      v19 = v276;
                      v35 = v58;
                      v37 = v270;
                      if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                      LABEL_140:
                        (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
                        std___1___shared_weak_count___release_weak(v51);
                        v29 = a2;
                      }
                    LABEL_141:
                      v239 = *(_DWORD*)(v7 + 176) + 1;
                      *(_DWORD*)(v7 + 176) = v239;
                      if (v239 == 256) {
                        v53 = 6;
                      }
                      else {
                        v53 = 0;
                      }
                      goto LABEL_42;
                    }
                  }
                  else {
                    if (v61 != 4) {
                      goto LABEL_87;
                    }
                    if (v51 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v51 + 8), 1u,
                          memory_order_relaxed);
                    }
                    v81 = *(float32x4_t*)(v52 + 256);
                    v82 = *(_QWORD*)(v52 + 272);
                    v83 = vmulq_f32(v81, v81);
                    v251 = *(int8x16_t*)(v52 + 272);
                    LANES128(v83).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v83, v83, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v83).n128_u64[0])))
                            .n64_u64[0];
                    LANES128(v83).n128_u64[0] =
                        LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v83).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v83).n128_u64[0])))
                            .n64_u64[0];
                    LANES128(v83).n128_u64[1] = LANES128(v83).n128_u64[0];
                    v84 = vrsqrteq_f32(v83);
                    v85 =
                        vmulq_f32(v84, vrsqrtsq_f32(v84, vmulq_f32(v83, v84)));
                    v86 = vmulq_f32(
                        v81,
                        vmulq_f32(v85, vrsqrtsq_f32(v85, vmulq_f32(v83, v85))));
                    LANES128(v85).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v251,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    v87 = vbicq_s8(v86, vceqzq_f32(v83));
                    *(int8x8_t*)&LANES128(v85).n128_i8[8] = vqtbl1_s8(
                        v251, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    LANES128(v86).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v87,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    v249 = v87;
                    *(int8x8_t*)&LANES128(v86).n128_i8[8] = vqtbl1_s8(
                        v87, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v88 = vmulq_f32(v86, v85);
                    LANES128(v86).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v87,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v86).n128_i8[8] = vqtbl1_s8(
                        v87, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    LANES128(v83).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v251,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v83).n128_i8[8] = vqtbl1_s8(
                        v251, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v242 = vmlsq_f32(v88, v83, v86);
                    v241 = COERCE_INT8X16_T(RectangleLight_c53f10());
                    v89 = RectangleLight_c53f00();
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
                        LANES64_OF(
                            vqtbl1_s8(v241,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v92).n128_i8[8] = vqtbl1_s8(
                        v241, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    v93 = vmulq_f32(v90, v92);
                    *(int8x8_t*)&LANES128(v91).n128_i8[8] =
                        vqtbl1_s8(*(int8x16_t*)&v89,
                                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    LANES128(v92).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v241,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v92).n128_i8[8] = vqtbl1_s8(
                        v241, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v94 = vmlsq_f32(v93, v92, v91);
                    v95 = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v251, LANES128(v241).n128_f32[0]), v242,
                            COERCE_AS(float32x2_t, LANES128(v241).n128_u64[0]),
                            1),
                        v249, v241, 2);
                    v96 = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v251, LANES128(v94).n128_f32[0]), v242,
                            COERCE_AS(float32x2_t, LANES128(v94).n128_u64[0]),
                            1),
                        v249, v94, 2);
                    v97 = vmlaq_laneq_f32(
                        vmlaq_lane_f32(vmulq_n_f32(v251, *(float*)&v89), v242,
                                       *(float32x2_t*)&v89, 1),
                        v249, *(float32x4_t*)&v89, 2);
                    LANES128(v94).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v96,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v94).n128_i8[8] = vqtbl1_s8(
                        v96, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    LANES128(v98).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v97,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v98).n128_i8[8] = vqtbl1_s8(
                        v97, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    v99 = vmulq_f32(vmulq_f32(v95, v94), v98);
                    LANES128(v98).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v96,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v98).n128_i8[8] = vqtbl1_s8(
                        v96, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    LANES128(v100).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v97,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v100).n128_i8[8] = vqtbl1_s8(
                        v97, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v101 = vsubq_f32(v99, vmulq_f32(vmulq_f32(v95, v98), v100));
                    LANES128(v101).n128_u64[0] =
                        LANES128_OF(vpaddq_f32(v101, v101)).n128_u64[0];
                    v102 = vaddq_f32(
                        vdupq_lane_s32(
                            COERCE_AS(int32x2_t, LANES128(v101).n128_u64[0]),
                            0),
                        vdupq_lane_s32(
                            COERCE_AS(int32x2_t, LANES128(v101).n128_u64[0]),
                            1));
                    v103 = vrecpeq_f32(v102);
                    v104 = vmulq_f32(v103, vrecpsq_f32(v103, v102));
                    v105 = vmulq_f32(v104, vrecpsq_f32(v104, v102));
                    v106 = vzip1q_s32(v95, v97);
                    v107 = vzip2q_s32(v95, v97);
                    v108 = vzip1q_s32(v96, COERCE_AS(int32x4_t, 0));
                    v109 = vzip2q_s32(v106, v108);
                    v110 = vzip1q_s32(v107,
                                      vzip2q_s32(v96, COERCE_AS(int32x4_t, 0)));
                    v111 = vzip1q_s32(v106, v108);
                    LANES128(v112).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v109,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    LANES128(v96).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v110,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    LANES128(v113).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v110,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    LANES128(v106).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v111,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v112).n128_i8[8] = vqtbl1_s8(
                        v109, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v114 = LANES64_OF(
                               vqtbl1_s8(v110, COERCE_AS(int8x8_t,
                                                         0xF0E0D0C07060504LL)))
                               .n64_u64[0];
                    *(int8x8_t*)&LANES128(v113).n128_i8[8] = vqtbl1_s8(
                        v110, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    LANES128(v110).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v109,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    LANES128(v96).n128_u64[1] = v114;
                    *(int8x8_t*)&LANES128(v110).n128_i8[8] = vqtbl1_s8(
                        v109, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    v115 = vmulq_f32(
                        v105, vmlsq_f32(vmulq_f32(v112, v96), v110, v113));
                    *(int8x8_t*)&LANES128(v106).n128_i8[8] = vqtbl1_s8(
                        v111, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    v116 = vmulq_f32(v113, v106);
                    LANES128(v113).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v111,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v113).n128_i8[8] = vqtbl1_s8(
                        v111, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v117 = vmulq_f32(v105, vmlsq_f32(v116, v96, v113));
                    v118 = vmulq_f32(
                        v105, vmlsq_f32(vmulq_f32(v110, v113), v106, v112));
                    v119 = vmlsq_laneq_f32(
                        vmlsq_lane_f32(
                            vmulq_n_f32(vnegq_f32(v115),
                                        COERCE_FLOAT(*(_OWORD*)(v52 + 16))),
                            v117, *(float32x2_t*)(v52 + 16), 1),
                        v118, *(float32x4_t*)(v52 + 16), 2);
                    v120 = vceqzq_f32(v102);
                    v121 = vbicq_s8(v115, v120);
                    v122 = vbicq_s8(v117, v120);
                    v123 = vbicq_s8(v118, v120);
                    v124 = vbicq_s8(v119, v120);
                    LANES128(v119).n128_u64[0] = LANES128(v121).n128_u64[0];
                    LANES128(v119).n128_u64[1] =
                        LANES128(v121).n128_u32[2] |
                        ((unsigned __int64)*(unsigned int*)(v52 + 296) << 32);
                    LANES128(v105).n128_u64[0] = LANES128(v122).n128_u64[0];
                    LANES128(v105).n128_u64[1] =
                        LANES128(v122).n128_u32[2] |
                        ((unsigned __int64)*(unsigned int*)(v52 + 300) << 32);
                    LANES128(v106).n128_u64[0] = LANES128(v123).n128_u64[0];
                    LANES128(v106).n128_u64[1] =
                        LANES128(v123).n128_u32[2] |
                        ((unsigned __int64)*(unsigned int*)(v52 + 304) << 32);
                    LANES128(v115).n128_u64[0] = LANES128(v124).n128_u64[0];
                    LANES128(v115).n128_u64[1] =
                        LANES128(v124).n128_u32[2] | 0x3F80000000000000LL;
                    v243.val[0] = v119;
                    v243.val[1] = v105;
                    v243.val[2] = v106;
                    v243.val[3] = v115;
                    v125 = vmulq_f32(
                        vmulq_n_f32(v267, (*(float (**)(__int64))(
                                              *(_QWORD*)v52 + 16LL))(v52)),
                        v273);
                    *(_QWORD*)v57 = LANES128(v125).n128_u64[0];
                    *(_DWORD*)(v57 + 8) = LANES128(v125).n128_u32[2];
                    *(_DWORD*)(v57 + 12) = *(_DWORD*)(v52 + 32);
                    v126 = *(_OWORD*)(v52 + 16);
                    *(float*)(v57 + 28) = v60;
                    *(_QWORD*)(v57 + 16) = v126;
                    *(_DWORD*)(v57 + 24) = DWORD2(v126);
                    *(_QWORD*)(v57 + 32) = LANES128(v249).n128_u64[0];
                    *(_DWORD*)(v57 + 40) = LANES128(v249).n128_u32[2];
                    *(float*)(v57 + 44) = *(float*)(v52 + 288) * 0.5;
                    v127 = LANES128(v251).n128_u32[2] |
                           ((unsigned __int64)COERCE_UNSIGNED_INT(
                                *(float*)(v52 + 292) * 0.5)
                            << 32);
                    *(_QWORD*)(v57 + 48) = v82;
                    *(_QWORD*)(v57 + 56) = v127;
                    *(_DWORD*)(v57 + 64) = *(_DWORD*)(v52 + 76);
                    *(_DWORD*)(v57 + 68) = *(_DWORD*)(v52 + 80);
                    if (*(_BYTE*)(v52 + 94) != 0) {
                      v128 = 0.0;
                    }
                    else {
                      v128 = 0x1.0000000000000p+0;
                    }
                    *(float*)(v57 + 72) = v128;
                    if (*(_BYTE*)(v52 + 95) != 0) {
                      v129 = 0.0;
                    }
                    else {
                      v129 = 0x1.0000000000000p+0;
                    }
                    *(float*)(v57 + 76) = v129;
                    vst4q_f32((float*)(v57 + 80), v243);
                    v130 = *(_DWORD*)(v52 + 8);
                    *(_QWORD*)(v57 + 152) = 0;
                    *(_QWORD*)(v57 + 144) = v130;
                    v21 = RectangleLight_c53f20(v52, &v286);
                    *(_QWORD*)(v59 + 16) = LANES128(v21).n128_u64[0];
                    *(_QWORD*)(v59 + 24) = LANES128(v21).n128_u32[2];
                    *(_QWORD*)(v59 + 32) = v132;
                    *(_QWORD*)(v59 + 40) = v131;
                    if (v51 != 0) {
                      goto LABEL_114;
                    }
                  }
                  v29 = a2;
                  v17 = v271;
                  v19 = v276;
                  v35 = v58;
                  v37 = v270;
                  goto LABEL_141;
                }
              }
            }
          }
        LABEL_42:
          if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
            std___1___shared_weak_count___release_weak(v51);
            v29 = a2;
          }
          if (v53 != 7 && v53 != 0) {
          LABEL_144:
            if (v25 != 0) {
              v240 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v240 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v240,
                  *(long double*)&v21);
            }
            (*(void (**)(__int64))(*(_QWORD*)v19 + 64LL))(v19);
            return (*(__int64 (**)(__int64*))(*v17 + 64))(v17);
          }
        LABEL_22:
          if (++v30 == v26) {
            goto LABEL_144;
          }
          goto LABEL_23;
        }
        v45 = v49;
      }
      v43 += 2;
      if (v43 == v44) {
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
