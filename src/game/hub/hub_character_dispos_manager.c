#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_d5fc50(_QWORD*, __int64);
__attribute__((swiftcall)) void GameRoutine_edf510(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_ff57a0(PSEUDO_X8, __int64,
                                                   unsigned __int8*);
__attribute__((swiftcall)) void game_ff60c0(PSEUDO_X8);
__attribute__((swiftcall)) void game_ff6680(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_hub_cb8030(PSEUDO_X8, _QWORD*, __int64);
__int64* GameRoutine_d5e9a0(__int64* result, _QWORD*, _QWORD*);
__int64* GameRoutine_d5f8e0(__int64* result, int*, int*, unsigned __int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_d5e6c0(__int64 result);
__int64 GameRoutine_d5e840(__int64 result, int*);
__int64 GameRoutine_d5fd80(__int64 result);
__int64 GameRoutine_f48ea0(__int64, __int64, float, float);
__int64 GameRoutine_ff32a0(_QWORD*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_dbdff0(__int64, int32x2_t*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
bool nn_g3d_5eb5c0(__int64, float32x4_t*);
char** GameRoutine_d5ffa0(char** result, __int64, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a83850;
extern __int128 GameData_21a6120;
extern __int64* GameData_212d458[7];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbf8;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_21ec7c0;
extern __int64 GameData_22127a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
float GameRoutine_d5d770(__int64, unsigned __int8*);
unsigned __int64 game_ff33e0(__int64, int*);
void __attribute__((noreturn)) GameRoutine_d5e820();
void __attribute__((noreturn)) GameRoutine_d5ff80();
__int64 HubCharacterDisposManager_d5cfd0_alt1() __asm__(
    "HubCharacterDisposManager_d5cfd0");
void HubCharacterDisposManager_d5d900(__int64 a1);
__int64 HubCharacterDisposManager_d5da40(__int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
game_hub_cb8030_alt1(PSEUDO_X8, __int64, __int64) __asm__("game_hub_cb8030");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_d5e6c0_alt1(__int64) __asm__("GameRoutine_d5e6c0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void HubCharacterDisposManager_d5cfd0();

void HubCharacterDisposManager_d5cfd0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BOOL4 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  __int128 v11;
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
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    __int64 v25;
    __int64 v26;
    char v27;
    char gap33_[15];
    __int64 v28;
  } v25_;
  struct {
    int32x2_t v29[2];
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    int v34;
    char gap116_[4];
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v29_;
  _QWORD v39[3];
  struct {
    __int128 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v40_;
  _QWORD v45[4];

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    std___1___shared_weak_count___release_weak_alt1(v0);
    v5 = v3 == 0 || v1 == 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
      if (!v5) {
        return;
      }
    }
    else if (!v5) {
      return;
    }
  }
  v40_.v41 = 0;
  v40_.v42 = 0x726579616C500CLL;
  v40_.v43 = 0;
  v40_.v44 = 0;
  v40_.v40 = (__typeof__(v40_.v40)){0};
  memset(v45, 0, 21);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = *(_QWORD*)(game_GameModeData_instance_ + 96)) != 0) {
    GameRoutine_60a020_alt1((__int64)&v40_.v40, *(const char**)(v6 + 8));
  }
  else {
    BYTE11(v40_.v40) = 0;
    LOBYTE(v40_.v40) = 20;
    *(_WORD*)((char*)&v40_.v40 + 9) = -23422;
    *(_QWORD*)((char*)&v40_.v40 + 1) = 0xE3AB82E35F444950LL;
  }
  v29_.v34 = 0;
  LANES64(v29_.v29[0]).n64_u64[0] = 0;
  LANES64(v29_.v29[1]).n64_u64[0] = 0;
  v29_.v30 = 0;
  v29_.v31 = 0;
  v29_.v32 = 0;
  v29_.v33 = 0;
  v29_.v35 = 0;
  v29_.v36 = 0;
  v29_.v37 = 0;
  v29_.v38 = 0;
  v39[2] = 0;
  memset(v39, 0, 13);
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) == 1) {
    GameRoutine_d5d770(
        (__int64)v29_.v29,
        (unsigned __int8*)(*(_QWORD*)GameData_212c6a0[0] + 48LL));
    v7 = v29_.v38;
    v8 = v39[1];
    v9 = HIDWORD(v29_.v38);
    v10 = v39[0];
  }
  else {
    v7 = 0;
    v8 = 0;
    v10 = 0;
    v9 = 0;
  }
  LODWORD(v45[2]) = v8;
  *(_QWORD*)&v11 = __PAIR64__(v9, v7);
  *((_QWORD*)&v11 + 1) = v10;
  *(_OWORD*)v45 = v11;
  GameRoutine_ff57a0((void*)(&v25_.v25), (__int64)&v40_.v40,
                     (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 64LL));
  game_hub_cb8030_alt1((void*)(&v23_.v23), GameData_21ec7c0, v25_.v25);
  v12 = v23_.v24;
  if (v23_.v24 == 0) {
    goto LABEL_24;
  }
  v13 = std___1___shared_weak_count_lock_alt1(v23_.v24);
  v14 = v23_.v23;
  v15 = v13;
  std___1___shared_weak_count___release_weak_alt1(v12);
  if (v15 != 0 && v14 != 0) {
    game_dbdff0(*(_QWORD*)GameData_212dbf8, v29_.v29);
  }
  else if (v15 == 0) {
    goto LABEL_24;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_24:
    if ((v25_.v27 & 1) == 0) {
      goto LABEL_32;
    }
    goto LABEL_25;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  std___1___shared_weak_count___release_weak_alt1(v15);
  if ((v25_.v27 & 1) != 0) {
  LABEL_25:
    if (v25_.v28 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v25_.v28);
    }
  }
LABEL_32:
  v17 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    if ((v29_.v35 & 1) != 0) {
    LABEL_35:
      if (v29_.v37 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v29_.v37);
      }
    }
  }
  else if ((v29_.v35 & 1) != 0) {
    goto LABEL_35;
  }
  if ((v29_.v31 & 1) != 0 && v29_.v33 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v29_.v33);
  }
  if ((LANES64(v29_.v29[0]).n64_u8[0] & 1) != 0 && v29_.v30 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v29_.v30);
  }
  if ((v40_.v42 & 1) != 0 && v40_.v44 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v40_.v44);
  }
  if ((v40_.v40 & 1) != 0 && v40_.v41 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v40_.v41);
  }
}

void HubCharacterDisposManager_d5d900(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11[3];

  v2 = (_QWORD*)(a1 + 32);
  v1 = *(_QWORD*)(a1 + 32);
  *(_DWORD*)(a1 + 24) = 0;
  *(_WORD*)(a1 + 28) = 256;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 40);
    if (v1 == v4) {
      goto LABEL_5;
    }
    do {
      v4 -= 80;
      GameRoutine_d5e6c0_alt1(v4);
    } while (v4 != v1);
    v5 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_5:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v2[1] = 0;
  v2[2] = 0;
  *v2 = 0;
  game_ff60c0((void*)(v11));
  v7 = *(_QWORD*)(a1 + 32);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 40);
    if (v7 == v8) {
      goto LABEL_12;
    }
    do {
      v8 -= 80;
      GameRoutine_d5e6c0_alt1(v8);
    } while (v8 != v7);
    v9 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v7;
    v7 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v7);
    }
  }
  qmemcpy((void*)(a1 + 32), v11, 24);
}

__int64 HubCharacterDisposManager_d5da40(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  int* v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  signed __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  float32x4_t v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  bool v66;
  float32x4_t v67;
  float32x4_t v68;
  unsigned __int64 v69;
  __int64* v70;
  __int64* v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  _QWORD* v75;
  __int64* v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  _QWORD* v81;
  _QWORD* v82;
  __int64* v83;
  __int64* v84;
  __int64 v85;
  _QWORD* v86;
  _QWORD* v87;
  float32x4_t v88;
  float32x4_t v89;
  int8x16_t v90;
  __int64* v91;
  __int64* v92;
  _QWORD* v93;
  __int64 v94;
  _QWORD* v95;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  __int64 v99;
  _QWORD* v100;
  _QWORD* v101;
  _QWORD* v102;
  __int64* v103;
  __int64* v104;
  __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  float32x4_t v108;
  float32x4_t v109;
  int8x16_t v110;
  unsigned int v111;
  __int64 v112;
  __int64 v114;
  __int64 v115;
  __int64 v117;
  __int64 v118;
  float32x4_t v119;
  _QWORD* v120;
  _QWORD v121[2];
  _QWORD* v122;
  _QWORD v123[2];
  _QWORD* v124;
  struct {
    _QWORD v125[2];
    int v126;
    __int16 v127;
  } v125_;
  struct {
    __int64 v128[3];
    char* v129;
    char* v130;
    __int64 v131;
  } v128_;
  struct {
    char* v132[3];
    __int64 v133;
    __int64 v134;
  } v132_;
  _BYTE v135[240];
  struct {
    float32x4_t v136;
    __int64 v137;
    _QWORD* v138;
  } v136_;
  struct {
    _QWORD v139[2];
    _QWORD* v140;
  } v139_;
  struct {
    _QWORD v141[2];
    int v142;
    __int16 v143;
    char gap542_[2];
    int* v144;
    int* v145;
    __int64 v146;
    __int64 v147;
    __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
  } v141_;
  struct {
    __int64* v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
  } v155_;

  GameRoutine_edf510((void*)((__int64)v135),
                     *(_QWORD*)GameData_212dc38[0] + 16LL);
  v123[0] = 0;
  v123[1] = 0;
  v125_.v125[0] = 0;
  v125_.v125[1] = 0;
  v125_.v126 = 0;
  memset(v128_.v128, 0, sizeof(v128_.v128));
  v128_.v129 = nullptr;
  v128_.v130 = nullptr;
  v128_.v131 = 0;
  memset(v132_.v132, 0, sizeof(v132_.v132));
  v132_.v133 = 0;
  v132_.v134 = 0;
  v120 = v121;
  v121[0] = 0;
  v121[1] = 0;
  v122 = v123;
  v124 = v125_.v125;
  v125_.v127 = 256;
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v5 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v5 = 0;
  }
  if (GameData_22127a8 != 0) {
    v6 = (_QWORD*)GameData_22127a8;
  }
  else {
    v6 = (_QWORD*)v5;
  }
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6[10] != 0) {
    v8 = (_QWORD*)v6[9];
    if (v8 != nullptr) {
      do {
        v9 = (_QWORD*)*v8;
        if (*(_QWORD*)(*v7 + 200) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(*v7 + v10);
        v8 = v9;
      } while (v9 != nullptr);
    }
    v11 = v6[8];
    v6[9] = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(v6[7] + 8 * v13) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 8) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 16) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 24) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 32) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 40) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 48) = 0;
          v15 = v6[7] + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v15 + 56) = 0;
        } while (v14 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v16 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(v6[7] + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    v6[10] = 0;
  }
  v18 = *(int**)(a1 + 32);
  v17 = *(int**)(a1 + 40);
  v19 = (char*)v17 - (char*)v18;
  LODWORD(v155_.v155) = *(_DWORD*)(a1 + 24);
  v20 = *(_WORD*)(a1 + 28);
  v155_.v156 = 0;
  v155_.v157 = 0;
  v155_.v158 = 0;
  WORD2(v155_.v155) = v20;
  if (v17 != v18) {
    if (0xCCCCCCCCCCCCCCCDLL * (v19 >> 4) >= 0x333333333333334LL) {
      GameRoutine_d5e820();
    }
    v21 = fw_memory_HeapManager_Allocate(*v7, (char*)v17 - (char*)v18, 16, 0);
    v155_.v156 = v21;
    v155_.v158 = v21 + v19;
    do {
      GameRoutine_d5e840(v21, v18);
      v18 += 20;
      v21 += 80;
    } while (v18 != v17);
    v155_.v157 = v21;
  }
  v139_.v139[0] = 0;
  v139_.v139[1] = 0;
  v141_.v141[0] = 0;
  v141_.v141[1] = 0;
  v141_.v142 = 0;
  LODWORD(v155_.v155) = 3;
  v141_.v144 = nullptr;
  v141_.v145 = nullptr;
  v141_.v146 = 0;
  v141_.v147 = 0;
  v141_.v148 = 0;
  v141_.v149 = 0;
  v141_.v150 = 0;
  v141_.v151 = 0;
  v141_.v152 = 0;
  v141_.v153 = 0;
  v141_.v154 = 0;
  LANES128(v136_.v136).n128_u64[0] =
      (unsigned __int64)&LANES128(v136_.v136).n128_u64[1];
  LANES128(v136_.v136).n128_u64[1] = 0;
  v136_.v137 = 0;
  v136_.v138 = v139_.v139;
  v139_.v140 = v141_.v141;
  v141_.v143 = 256;
  game_ff33e0((__int64)&v136_.v136, (int*)&v155_.v155);
  v117 = v141_.v153;
  v118 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 152LL);
  if (v118 != v141_.v153) {
    v115 = a2;
    GameRoutine_d5e9a0((__int64*)&v120, LANES128(v136_.v136).n128_u64[0],
                       &LANES128(v136_.v136).n128_u64[1]);
    GameRoutine_d5e9a0((__int64*)&v122, v136_.v138, v139_.v139);
    GameRoutine_d5e9a0((__int64*)&v124, v139_.v140, v141_.v141);
    v125_.v126 = v141_.v142;
    v125_.v127 = v141_.v143;
    GameRoutine_d5f8e0(v128_.v128, v141_.v144, v141_.v145,
                       0xCCCCCCCCCCCCCCCDLL *
                           (((char*)v141_.v145 - (char*)v141_.v144) >> 4));
    v23 = v141_.v147;
    v22 = v141_.v148;
    v24 = v128_.v131;
    v25 = v141_.v148 - v141_.v147;
    v26 = v128_.v129;
    if (v141_.v148 - v141_.v147 >
        (unsigned __int64)(v128_.v131 - (_QWORD)v128_.v129)) {
      v27 = 0x86BCA1AF286BCA1BLL * (v25 >> 3);
      if (v128_.v129 != nullptr) {
        v28 = (__int64)v128_.v130;
        if (v128_.v129 == v128_.v130) {
          goto LABEL_33;
        }
        do {
          v28 -= 152;
          GameRoutine_d5fd80(v28);
        } while ((char*)v28 != v26);
        v128_.v130 = v26;
        if (v128_.v129 != nullptr) {
        LABEL_33:
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v29);
        }
        v24 = 0;
        v128_.v130 = nullptr;
        v128_.v131 = 0;
        v128_.v129 = nullptr;
      }
      if (v27 <= 0x1AF286BCA1AF286LL) {
        v30 = 0x86BCA1AF286BCA1BLL * (v24 >> 3);
        v31 = 2 * v30;
        if (2 * v30 <= v27) {
          v31 = v27;
        }
        v32 = v30 >= 0xD79435E50D7943LL ? 0x1AF286BCA1AF286LL : v31;
        if (v32 <= 0x1AF286BCA1AF286LL) {
          v7 = (__int64*)fw_memory_g_heap_manager_ptr;
          v33 = 152 * v32;
          v34 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 152 * v32, 16, 0);
          v128_.v129 = (char*)v34;
          v128_.v130 = (char*)v34;
          v128_.v131 = v34 + v33;
          if (v23 != v22) {
            v35 = 0;
            do {
              v37 = (_QWORD*)(v23 + v35);
              v38 = (_QWORD*)(v34 + v35);
              GameRoutine_d5e840(v34 + v35, (int*)(v23 + v35));
              v38[10] = *(_QWORD*)(v23 + v35 + 80);
              v39 = *(_QWORD*)(v23 + v35 + 88);
              v38[11] = v39;
              if (v39 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8),
                                          1u, memory_order_relaxed);
              }
              v38[12] = v37[12];
              v38[13] = v37[13];
              v40 = v37[14];
              v38[14] = v40;
              if (v40 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8),
                                          1u, memory_order_relaxed);
              }
              v41 = (__int64*)(v34 + v35);
              if ((*(_BYTE*)(v23 + v35 + 120) & 1) != 0) {
                fw_text_String_CopyTerminated(v41 + 15,
                                              *(_QWORD*)(v23 + v35 + 136),
                                              *(_QWORD*)(v23 + v35 + 128));
              }
              else {
                v42 = *(_QWORD*)(v23 + v35 + 120);
                v43 = *(_QWORD*)(v23 + v35 + 136);
                v41[16] = *(_QWORD*)(v23 + v35 + 128);
                v41[17] = v43;
                v41[15] = v42;
              }
              v36 = v23 + v35;
              v35 += 152;
              v38[18] = *(_QWORD*)(v36 + 144);
            } while (v23 + v35 != v22);
            v34 += v35;
            v7 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          v128_.v130 = (char*)v34;
        LABEL_78:
          a2 = v115;
          goto LABEL_79;
        }
      }
      GameRoutine_d5ff80();
    }
    v44 = (__int64)v128_.v130;
    v45 = v128_.v130 - v128_.v129;
    if (v25 > (unsigned __int64)(v128_.v130 - v128_.v129)) {
      v46 = v141_.v147 + v45;
      if (v128_.v130 != v128_.v129) {
        do {
          GameRoutine_d5fc50(v26, v23);
          v23 += 152;
          v26 += 152;
          v45 -= 152LL;
        } while (v45 != 0);
        v44 = (__int64)v128_.v130;
      }
      v47 = v44;
      if (v46 != v22) {
        v48 = 0;
        do {
          v50 = (_QWORD*)(v46 + v48);
          v51 = (_QWORD*)(v44 + v48);
          GameRoutine_d5e840(v44 + v48, (int*)(v46 + v48));
          v51[10] = *(_QWORD*)(v46 + v48 + 80);
          v52 = *(_QWORD*)(v46 + v48 + 88);
          v51[11] = v52;
          if (v52 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 8), 1u,
                                      memory_order_relaxed);
          }
          v51[12] = v50[12];
          v51[13] = v50[13];
          v53 = v50[14];
          v51[14] = v53;
          if (v53 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                                      memory_order_relaxed);
          }
          v54 = (__int64*)(v44 + v48);
          if ((*(_BYTE*)(v46 + v48 + 120) & 1) != 0) {
            fw_text_String_CopyTerminated(v54 + 15, *(_QWORD*)(v46 + v48 + 136),
                                          *(_QWORD*)(v46 + v48 + 128));
          }
          else {
            v55 = *(_QWORD*)(v46 + v48 + 120);
            v56 = *(_QWORD*)(v46 + v48 + 136);
            v54[16] = *(_QWORD*)(v46 + v48 + 128);
            v54[17] = v56;
            v54[15] = v55;
          }
          v49 = v46 + v48;
          v48 += 152;
          v51[18] = *(_QWORD*)(v49 + 144);
        } while (v46 + v48 != v22);
        v47 = v44 + v48;
        v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
      v128_.v130 = (char*)v47;
      goto LABEL_78;
    }
    if (v141_.v147 == v141_.v148) {
      a2 = v115;
      if (v128_.v129 == v128_.v130) {
      LABEL_75:
        v128_.v130 = v26;
      LABEL_79:
        GameRoutine_d5ffa0(v132_.v132, v141_.v150, v141_.v151,
                           (v141_.v151 - v141_.v150) >> 3);
        v132_.v133 = v141_.v153;
        v132_.v134 = v141_.v154;
        goto LABEL_80;
      }
    }
    else {
      a2 = v115;
      do {
        GameRoutine_d5fc50(v26, v23);
        v23 += 152;
        v26 += 152;
      } while (v23 != v22);
      v44 = (__int64)v128_.v130;
      if (v26 == v128_.v130) {
        goto LABEL_75;
      }
    }
    do {
      v44 -= 152;
      GameRoutine_d5fd80(v44);
    } while ((char*)v44 != v26);
    goto LABEL_75;
  }
LABEL_80:
  GameRoutine_ff32a0(&v136_.v136);
  v57 = v155_.v156;
  if (v155_.v156 != 0) {
    v58 = v155_.v157;
    if (v155_.v156 == v155_.v157) {
      goto LABEL_84;
    }
    do {
      v58 -= 80;
      GameRoutine_d5e6c0(v58);
    } while (v58 != v57);
    v155_.v157 = v57;
    if (v155_.v156 != 0) {
    LABEL_84:
      v59 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v59);
    }
  }
  if (v118 == v117) {
    goto LABEL_165;
  }
  v60 = *(_QWORD*)(a1 + 8);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v114 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v114;
    __cxa_guard_release(&GameData_21a6130);
  }
  if (*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 32LL) == 0) {
    v119 = COERCE_AS(float32x4_t, GameData_21a6120);
    v62 = *(_QWORD*)(*GameData_212d458[0] + 80);
    if (v62 != 0) {
      v63 = *(_QWORD*)(*GameData_212d458[0] + 72);
      v64 = *(_QWORD*)(*GameData_212d458[0] + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 16), 1u,
                                memory_order_relaxed);
      v65 = std___1___shared_weak_count_lock(v64);
      std___1___shared_weak_count___release_weak(v62);
      v66 = v65 == 0 || v63 == 0;
      if (!v66) {
        v67 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v63 + 24) + 16LL) + 560LL);
        LANES128(v67).n128_u32[3] = 0;
        v119 = v67;
      LABEL_101:
        if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
          std___1___shared_weak_count___release_weak(v65);
        }
        goto LABEL_103;
      }
    }
    else {
      v65 = 0;
    }
    if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) == 1) {
      v68 = *(float32x4_t*)(*(_QWORD*)GameData_212c6a0[0] + 128LL);
      LANES128(v68).n128_u32[3] = 0;
      v119 = v68;
    }
    if (v65 == 0) {
      goto LABEL_103;
    }
    goto LABEL_101;
  }
  v61 = *(float32x4_t*)(*(_QWORD*)GameData_212dc38[0] + 32LL);
  LANES128(v61).n128_u32[3] = 0;
  v119 = v61;
LABEL_103:
  game_ff6680((void*)(&v155_.v155), (__int64)&v120, v60);
  if (a3 != 0) {
    v70 = v155_.v155;
    v71 = (__int64*)v155_.v156;
    if (v155_.v155 != (__int64*)v155_.v156) {
      v72 = *(_QWORD*)(a3 + 264);
      v73 = (_QWORD*)(v60 + 32);
      while (1) {
        v74 = *v70;
        if (*v70 == v72) {
          goto LABEL_158;
        }
        v75 = v122;
        if (v122 == v123) {
        LABEL_118:
          v82 = *(_QWORD**)(v60 + 24);
          if (v82 == v73) {
            goto LABEL_106;
          }
          while (1) {
            v83 = (__int64*)v82[7];
            v84 = (__int64*)v82[8];
            if (v83 != v84) {
              break;
            }
          LABEL_122:
            v86 = (_QWORD*)v82[1];
            if (v86 != nullptr) {
              do {
                v87 = v86;
                v86 = (_QWORD*)*v86;
              } while (v86 != nullptr);
            }
            else {
              do {
                v87 = (_QWORD*)v82[2];
                v66 = v82 == (_QWORD*)*v87;
                v82 = v87;
              } while (!v66);
            }
            v82 = v87;
            if (v87 == v73) {
              goto LABEL_106;
            }
          }
          while (1) {
            v85 = *v83;
            v83 += 6;
            v78 = v85;
            if (*(_QWORD*)(v85 + 56) == v74) {
              break;
            }
            if (v83 == v84) {
              goto LABEL_122;
            }
          }
        }
        else {
          while (1) {
            v76 = (__int64*)v75[7];
            v77 = (__int64*)v75[8];
            if (v76 != v77) {
              break;
            }
          LABEL_112:
            v80 = (_QWORD*)v75[1];
            if (v80 != nullptr) {
              do {
                v81 = v80;
                v80 = (_QWORD*)*v80;
              } while (v80 != nullptr);
            }
            else {
              do {
                v81 = (_QWORD*)v75[2];
                v66 = v75 == (_QWORD*)*v81;
                v75 = v81;
              } while (!v66);
            }
            v75 = v81;
            if (v81 == v123) {
              goto LABEL_118;
            }
          }
          while (1) {
            v79 = *v76;
            v76 += 6;
            v78 = v79;
            if (*(_QWORD*)(v79 + 56) == v74) {
              break;
            }
            if (v76 == v77) {
              goto LABEL_112;
            }
          }
        }
        LANES128(v88).n128_u64[0] = *(_QWORD*)(v78 + 184);
        LODWORD(v69) = *(_DWORD*)(v78 + 192);
        LANES128(v88).n128_u64[1] = v69;
        v89 = vsubq_f32(v88, v119);
        v90 = vmulq_f32(v89, v89);
        LANES128(v90).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v90, v90, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
                .n64_u64[0];
        v69 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
                  .n64_u64[0];
        if (*(float*)&v69 < 0x1.9000000000000p+6f) {
          LODWORD(v136_.v137) = 1061997773;
          v136_.v136 = vaddq_f32(v88, COERCE_AS(float32x4_t, GameData_1a83850));
          if (nn_g3d_5eb5c0((__int64)v135, &v136_.v136)) {
            goto LABEL_158;
          }
        }
      LABEL_106:
        if (++v70 == v71) {
          goto LABEL_160;
        }
      }
    }
    goto LABEL_160;
  }
  v91 = v155_.v155;
  v92 = (__int64*)v155_.v156;
  if (v155_.v155 == (__int64*)v155_.v156) {
  LABEL_160:
    if (v155_.v155 != nullptr) {
      v111 = 0;
      v155_.v156 = (__int64)v155_.v155;
    LABEL_162:
      v112 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v112 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v112);
      goto LABEL_166;
    }
  LABEL_165:
    v111 = 0;
    goto LABEL_166;
  }
  v93 = (_QWORD*)(v60 + 32);
  while (1) {
    v94 = *v91;
    v95 = v122;
    if (v122 != v123) {
      break;
    }
  LABEL_145:
    v102 = *(_QWORD**)(v60 + 24);
    if (v102 != v93) {
      while (1) {
        v103 = (__int64*)v102[7];
        v104 = (__int64*)v102[8];
        if (v103 != v104) {
          break;
        }
      LABEL_149:
        v106 = (_QWORD*)v102[1];
        if (v106 != nullptr) {
          do {
            v107 = v106;
            v106 = (_QWORD*)*v106;
          } while (v106 != nullptr);
        }
        else {
          do {
            v107 = (_QWORD*)v102[2];
            v66 = v102 == (_QWORD*)*v107;
            v102 = v107;
          } while (!v66);
        }
        v102 = v107;
        if (v107 == v93) {
          goto LABEL_134;
        }
      }
      while (1) {
        v105 = *v103;
        v103 += 6;
        v98 = v105;
        if (*(_QWORD*)(v105 + 56) == v94) {
          goto LABEL_156;
        }
        if (v103 == v104) {
          goto LABEL_149;
        }
      }
    }
  LABEL_134:
    if (++v91 == v92) {
      goto LABEL_160;
    }
  }
  while (1) {
    v96 = (__int64*)v95[7];
    v97 = (__int64*)v95[8];
    if (v96 != v97) {
      break;
    }
  LABEL_139:
    v100 = (_QWORD*)v95[1];
    if (v100 != nullptr) {
      do {
        v101 = v100;
        v100 = (_QWORD*)*v100;
      } while (v100 != nullptr);
    }
    else {
      do {
        v101 = (_QWORD*)v95[2];
        v66 = v95 == (_QWORD*)*v101;
        v95 = v101;
      } while (!v66);
    }
    v95 = v101;
    if (v101 == v123) {
      goto LABEL_145;
    }
  }
  while (1) {
    v99 = *v96;
    v96 += 6;
    v98 = v99;
    if (*(_QWORD*)(v99 + 56) == v94) {
      break;
    }
    if (v96 == v97) {
      goto LABEL_139;
    }
  }
LABEL_156:
  LANES128(v108).n128_u64[0] = *(_QWORD*)(v98 + 184);
  LODWORD(v69) = *(_DWORD*)(v98 + 192);
  LANES128(v108).n128_u64[1] = v69;
  v109 = vsubq_f32(v108, v119);
  v110 = vmulq_f32(v109, v109);
  LANES128(v110).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
          .n64_u64[0];
  v69 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
          .n64_u64[0];
  if (*(float*)&v69 >= 0x1.9000000000000p+6f) {
    goto LABEL_134;
  }
  LODWORD(v136_.v137) = 1061997773;
  v136_.v136 = vaddq_f32(v108, COERCE_AS(float32x4_t, GameData_1a83850));
  if (!nn_g3d_5eb5c0((__int64)v135, &v136_.v136)) {
    goto LABEL_134;
  }
LABEL_158:
  GameRoutine_f48ea0(a2, *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL),
                     0x1.0000000000000p-1f, 0x1.99999a0000000p-3f);
  if (v155_.v155 != nullptr) {
    v155_.v156 = (__int64)v155_.v155;
    v111 = 1;
    goto LABEL_162;
  }
  v111 = 1;
LABEL_166:
  GameRoutine_ff32a0(&v120);
  return v111;
}

#pragma GCC visibility pop
