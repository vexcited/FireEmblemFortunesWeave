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
