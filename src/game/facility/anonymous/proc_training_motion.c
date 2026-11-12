#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1495040(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_203b128)();
extern __int64 (*GameData_211bff8[])();
extern __int64 (*GameData_211c040[])();
extern __int64 (*game_facility_TrainingArgs_vtable[])();
extern __int64 (*game_facility_anonymous_ProcTrainingMotion_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131450[3];
__int64 ProcTrainingMotion_Destructor_alt1(_QWORD* a1) __asm__(
    "ProcTrainingMotion_Destructor");
__int64 ProcTrainingMotion_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ProcTrainingMotion_DeletingDestructor");
__int64 GameRoutine_197af90(__int64, __int64);
__int64 ProcTrainingMotion_Destructor_197bc00(_QWORD* a1);
__int64 ProcTrainingMotion_DeletingDestructor_197bc90_alt1(_QWORD* a1) __asm__(
    "ProcTrainingMotion_DeletingDestructor_197bc90");
__int64 ProcTrainingMotion_Destructor_197bd40(__int64 a1, __int64 a2);
extern __int64 (*ProcTrainingMotion_Destructor_197bc00_ptr[])();
extern __int64 (*ProcTrainingMotion_Destructor_197bd40_ptr[])();
extern __int64 (*TrainingArgs_Destructor_ptr)();
void GameRoutine_1495040_alt1(__int64) __asm__("GameRoutine_1495040");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcTrainingMotion_Destructor(_QWORD* a1);
void ProcTrainingMotion_DeletingDestructor(_QWORD* a1);
void ProcTrainingMotion_DeletingDestructor_197bc90(_QWORD* a1);
_QWORD* SceneManager_138e2c0(__int64, unsigned __int8*);
__attribute__((swiftcall)) void
FacilityDialogueFile_196e9e0(PSEUDO_X8, unsigned __int64 result, __int64, int);
__attribute__((swiftcall)) void TrainingArgs_1426540(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void fs_a501f0(PSEUDO_X8, __int64, const char*);
__attribute__((swiftcall)) void game_196dfe0(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void game_facility_140d000(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__int64 GameHr_10d6d40(__int64*, int*, int*);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 SceneManager_138e5e0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_809ba0(__int64, float);
__int64 game_ProcInst_Register(__int64);
__int64 game_combat_CombatSequenceImpl_CombatSequenceImpl(__int64, __int64,
                                                          __int64);
__int64 game_facility_anonymous_197bd60();
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _DWORD GameData_1c21be8[3];
extern _UNKNOWN** GameData_2131430[2];
extern _UNKNOWN** GameData_2131438;
extern _UNKNOWN GameData_2270ac0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d298)();
extern __int64 (*game_facility_anonymous_ProcIntroTalk_vtable[])();
extern __int64* GameData_212d1e8;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_2270948;
extern __int64 GameData_2270950;
extern __int64 GameData_2270968;
extern __int64 GameData_2270978;
extern __int64 GameData_2270988;
extern __int64 GameData_2270990;
extern __int64 GameData_22709a8;
extern __int64 GameData_22709b8;
extern __int64 GameData_22709c8;
extern __int64 GameData_22709d0;
extern __int64 GameData_22709d8;
extern __int64 GameData_22709e8;
extern __int64 GameData_22709f8;
extern __int64 GameData_2270a08;
extern __int64 GameData_2270a10;
extern __int64 GameData_2270a18;
extern __int64 GameData_2270a28;
extern __int64 GameData_2270a38;
extern __int64 GameData_2270a48;
extern __int64 GameData_2270a50;
extern __int64 GameData_2270a68;
extern __int64 GameData_2270a78;
extern __int64 GameData_2270a88;
extern __int64 GameData_2270a90;
extern __int64 GameData_2270a98;
extern __int64 GameData_2270aa8;
extern __int64 GameData_2270ab8;
extern __int64 game_ProcFadeView_instance_;
extern char GameData_1a9f09e;
extern char GameData_2270940;
extern char GameData_2270980;
extern char GameData_22709c0;
extern char GameData_2270a00;
extern char GameData_2270a40;
extern char GameData_2270a80;
extern int GameData_2270960;
extern int GameData_2270970;
extern int GameData_22709a0;
extern int GameData_22709b0;
extern int GameData_22709e0;
extern int GameData_22709f0;
extern int GameData_2270a20;
extern int GameData_2270a30;
extern int GameData_2270a60;
extern int GameData_2270a70;
extern int GameData_2270aa0;
extern int GameData_2270ab0;
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void GameHr_1090da0(__int64);
void GameHr_10eb860(__int64, __int64);
void GameHr_a0eb00(__int64);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
__int64 ProcTrainingMotion_Unknown20(__int64 a1, __int64 a2);
void ProcTrainingMotion_Unknown23(__int64 a1);

void ProcTrainingMotion_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  *a1 = game_facility_anonymous_ProcTrainingMotion_vtable;
  a1[19] = ProcTrainingMotion_Destructor_197bc00_ptr;
  v1 = a1[26];
  a1[23] = ProcTrainingMotion_Destructor_197bd40_ptr;
  a1[24] = game_facility_TrainingArgs_vtable;
  a1[25] = &TrainingArgs_Destructor_ptr;
  if (v1 != 0) {
    a1[27] = v1;
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
    a1 = v2;
  }
  GameRoutine_1495040_alt1((__int64)a1);
}

void ProcTrainingMotion_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = game_facility_anonymous_ProcTrainingMotion_vtable;
  a1[19] = ProcTrainingMotion_Destructor_197bc00_ptr;
  v2 = GameData_2131450[0];
  v3 = a1[26];
  v4 = GameData_2131450[0] + 2;
  a1[23] = ProcTrainingMotion_Destructor_197bd40_ptr;
  a1[24] = v4;
  a1[25] = v2 + 8;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[27] = v3;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v3);
  }
  GameRoutine_1495040_alt1((__int64)a1);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v8, (__int64)a1);
}

__int64 ProcTrainingMotion_Unknown20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  char v8;
  const char* v9;
  const char* v10;
  const char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    __int64 v28;
  } v26_;

  if (game_ProcFadeView_instance_ != 0) {
    game_809ba0(game_ProcFadeView_instance_, 0x1.0000000000000p-1f);
  }
  v4 = *(_QWORD*)(a1 + 256);
  if (v4 != 0) {
    FacilityDialogueFile_196e9e0((void*)((__int64)&v26_.v26), a1 + 200, v4, 0);
  }
  else {
    TrainingArgs_1426540((void*)(&v26_.v26), a1 + 192, 0);
  }
  v5 = *(_QWORD*)(a1 + 256);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)(v5 + 24);
    if (v7 != 0) {
      v8 = *(_BYTE*)(v7 + 88);
      v9 = *(const char**)(v7 + 104);
      v10 = (const char*)(v7 + 89);
      if ((v8 & 1) != 0) {
        v11 = v9;
      }
      else {
        v11 = v10;
      }
    }
    else {
      v11 = &GameData_1a9f09e;
    }
    v12 = strlen(v11);
    if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v13 = v12;
    if (v12 >= 0x17) {
      if ((v12 | 7) == 0x17) {
        v15 = 26;
      }
      else {
        v15 = (v12 | 7) + 1;
      }
      v14 = (char*)fw_memory_HeapManager_Allocate(*v6, v15, 16, 0);
      v23_.v24 = v13;
      v23_.v25 = v14;
      v23_.v23 = v15 | 1;
    }
    else {
      LOBYTE(v23_.v23) = 2 * v12;
      v14 = (char*)&v23_.v23 + 1;
      if (v12 == 0) {
        goto LABEL_22;
      }
    }
    memmove((__int64)v14, (__int64)v11, v13);
  LABEL_22:
    v14[v13] = 0;
    goto LABEL_23;
  }
  TrainingArgs_1426540((void*)(&v23_.v23), a1 + 192, 1);
LABEL_23:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2270ac0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2270ac0) != 0) {
    GameData_2270940 = 8;
    GameData_2270960 = 0;
    GameData_2270980 = 10;
    GameData_2270968 = 0;
    GameData_2270970 = 0;
    GameData_2270978 = 0;
    GameData_22709a0 = 0;
    GameData_22709a8 = 0;
    GameData_22709b0 = 0;
    GameData_22709b8 = 0;
    GameData_22709d8 = 0;
    GameData_22709e0 = 0;
    GameData_22709e8 = 0;
    GameData_22709f0 = 0;
    GameData_22709f8 = 0;
    GameData_2270a18 = 0;
    GameData_2270a28 = 0;
    GameData_2270a30 = 0;
    GameData_2270a38 = 0;
    GameData_2270a40 = 8;
    GameData_2270948 = 0;
    GameData_2270950 = (__int64)GameData_212d298;
    GameData_2270988 = 0;
    GameData_2270990 = (__int64)GameData_212c720;
    GameData_22709c0 = 21;
    GameData_2270a00 = 21;
    GameData_22709c8 = 0;
    GameData_22709d0 = (__int64)game_facility_anonymous_197bd60;
    GameData_2270a08 = 0;
    GameData_2270a10 = (__int64)game_facility_anonymous_197bd60;
    GameData_2270a20 = 1;
    GameData_2270a60 = 0;
    GameData_2270a68 = 0;
    GameData_2270a70 = 0;
    GameData_2270a78 = 0;
    GameData_2270a80 = 0;
    GameData_2270aa8 = 0;
    GameData_2270ab0 = 0;
    GameData_2270ab8 = 0;
    GameData_2270aa0 = 0;
    GameData_2270a90 = 0;
    GameData_2270a98 = 0;
    GameData_2270a88 = 0;
    GameData_2270a48 = 0;
    GameData_2270a50 = (__int64)GameData_212c710[0];
    __cxa_guard_release((__int64)&GameData_2270ac0);
  }
  v16 = fw_memory_HeapManager_Allocate(*v6, 200, 16, 0);
  v17 = GameData_212c608[0];
  *(_QWORD*)(v16 + 96) = 0;
  *(_QWORD*)(v16 + 104) = 0;
  *(_QWORD*)(v16 + 112) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_QWORD*)(v16 + 128) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = "NULL";
  *(_QWORD*)(v16 + 138) = 0;
  *(_QWORD*)(v16 + 144) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 88) = 0;
  *(_QWORD*)v16 = v17 + 16;
  *(_QWORD*)(v16 + 8) = 0;
  game_ProcInst_Register(v16);
  *(_QWORD*)v16 = game_facility_anonymous_ProcIntroTalk_vtable;
  if ((v26_.v26 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)(v16 + 152), v26_.v28, v26_.v27);
    if ((v23_.v23 & 1) != 0) {
      goto LABEL_26;
    }
  LABEL_28:
    v19 = v23_.v24;
    *(_QWORD*)(v16 + 176) = v23_.v23;
    *(_QWORD*)(v16 + 184) = v19;
    *(_QWORD*)(v16 + 192) = v23_.v25;
    goto LABEL_29;
  }
  v18 = v26_.v27;
  *(_QWORD*)(v16 + 152) = v26_.v26;
  *(_QWORD*)(v16 + 160) = v18;
  *(_QWORD*)(v16 + 168) = v26_.v28;
  if ((v23_.v23 & 1) == 0) {
    goto LABEL_28;
  }
LABEL_26:
  fw_text_String_CopyTerminated((__int64*)(v16 + 176), (__int64)v23_.v25,
                                v23_.v24);
LABEL_29:
  ProcInst_657850(v16, (__int64)&GameData_2270940, (__int64)"ProcIntroTalk", 1,
                  a2);
  if ((v23_.v23 & 1) != 0 && v23_.v25 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v20, (__int64)v23_.v25);
  }
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v21, v26_.v28);
  }
  return 1;
}

void ProcTrainingMotion_Unknown23(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  __int64 v4;
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
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  char v27;
  const char* v28;
  const char* v29;
  const char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  const char* v38;
  const char* v39;
  const char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  int v61;
  __int64 v62;
  int v63;
  unsigned int v64;
  unsigned int v65;
  int v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int32 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  struct {
    __int64 v78;
    unsigned __int64 v79;
    char* v80;
  } v78_;
  struct {
    __int128 v81;
    char gap48_[8];
    char v82;
    char gap57_[15];
    __int64 v83;
  } v81_;
  struct {
    float32x4_t v84;
    __int64 v85;
    char v86;
    char gap105_[15];
    __int64 v87;
  } v84_;
  struct {
    unsigned __int64 v88;
    __int64 v89;
    int v90;
    int v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    unsigned __int64 v95;
    __int64 v96;
    int v97;
    int v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
  } v88_;
  struct {
    __int64 v114;
    unsigned __int64 v115;
    unsigned __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    int v130;
    char gap460_[4];
    const char* v131;
    int v132;
  } v114_;

  v88_.v88 = 0;
  v88_.v89 = 0;
  v88_.v92 = 0;
  v88_.v93 = 0;
  v2 = *(_QWORD*)(a1 + 256);
  v88_.v94 = 0;
  v88_.v95 = 0;
  v88_.v96 = 0;
  v88_.v99 = 0;
  v88_.v100 = 0;
  v88_.v101 = 0;
  v88_.v102 = 0;
  v88_.v90 = 20;
  v88_.v91 = 8;
  v88_.v97 = 20;
  v88_.v98 = 8;
  v88_.v105 = 0;
  v88_.v106 = 0;
  v88_.v107 = 0;
  v88_.v108 = 0;
  v114_.v131 = nullptr;
  v114_.v132 = 0;
  v114_.v130 = 0;
  v114_.v128 = 0;
  v114_.v129 = 0;
  v114_.v126 = 0;
  v114_.v127 = 0;
  v114_.v124 = 0;
  v114_.v125 = 0;
  v114_.v122 = 0;
  v114_.v123 = 0;
  v114_.v120 = 0;
  v114_.v121 = 0;
  v114_.v118 = 0;
  v114_.v119 = 0;
  v114_.v116 = 0;
  v114_.v117 = 0;
  v114_.v115 = 0;
  v88_.v103 = 0;
  v88_.v104 = 0x800000014LL;
  v88_.v109 = 0;
  v88_.v110 = 0x800000014LL;
  v3 = (__int64*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  v88_.v113 = 0;
  v114_.v114 = 0;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v88_.v111 = 0;
  v88_.v112 = 0;
  if (v2 != 0) {
    game_196dfe0((void*)((__int64*)&v84_.v84), v2, 0);
    v6 = (__int64)SceneManager_138e2c0(v4, (unsigned __int8*)&v84_.v84);
    if ((LANES128(v84_.v84).n128_u8[0] & 1) != 0 && v84_.v85 != 0) {
      v7 = v6;
      v8 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v8, v84_.v85);
      v6 = v7;
    }
  }
  else {
    v6 = SceneManager_138e5e0(v4);
  }
  v9 = *(_QWORD*)(v6 + 96);
  v10 = *(_QWORD*)(a1 + 256);
  v11 = *v3;
  v88_.v94 = v9;
  if (v10 != 0) {
    game_196dfe0((void*)((__int64*)&v84_.v84), v10, 0);
    v12 = (__int64)SceneManager_138e2c0(v11, (unsigned __int8*)&v84_.v84);
    if ((LANES128(v84_.v84).n128_u8[0] & 1) != 0 && v84_.v85 != 0) {
      v13 = v12;
      v14 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v14, v84_.v85);
      v12 = v13;
    }
  }
  else {
    v12 = SceneManager_138e5e0(v11);
  }
  v88_.v89 = *(_QWORD*)(v12 + 8);
  v15 = (__int64)*GameData_2131430[0];
  v16 = strlen(*(const char**)GameData_2131430[0]);
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_107:
    String_60a1d0();
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v16 | 7) + 1;
    }
    v18 = (char*)fw_memory_HeapManager_Allocate(*v5, v19, 16, 0);
    v78_.v79 = v17;
    v78_.v80 = v18;
    v78_.v78 = v19 | 1;
  }
  else {
    LOBYTE(v78_.v78) = 2 * v16;
    v18 = (char*)&v78_.v78 + 1;
    if (v16 == 0) {
      goto LABEL_24;
    }
  }
  memmove((__int64)v18, v15, v17);
LABEL_24:
  v18[v17] = 0;
  game_facility_140d160((void*)(&v81_.v81), (__int64)&v78_.v78);
  game_facility_140d000((void*)(&v84_.v84), (__int64)&v81_.v81);
  if ((v81_.v82 & 1) != 0 && v81_.v83 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v20, v81_.v83);
  }
  if ((v78_.v78 & 1) != 0 && v78_.v80 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v21, (__int64)v78_.v80);
  }
  v88_.v88 =
      LANES64_OF(
          vzip1_s32(
              COERCE_AS(int32x2_t, LANES128(v84_.v84).n128_u64[0]),
              COERCE_AS(
                  int32x2_t,
                  LANES128_OF(vextq_s8(v84_.v84, v84_.v84, 8u)).n128_u64[0])))
          .n64_u64[0];
  if ((v84_.v86 & 1) != 0 && v84_.v87 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v22, v84_.v87);
  }
  v23 = *(_QWORD*)(a1 + 256);
  v24 = *v3;
  v25 = msg_MessageManager_instance__ptr[0];
  if (v23 != 0) {
    v26 = *(_QWORD*)(v23 + 24);
    if (v26 != 0) {
      v27 = *(_BYTE*)(v26 + 88);
      v28 = *(const char**)(v26 + 104);
      v29 = (const char*)(v26 + 89);
      if ((v27 & 1) != 0) {
        v30 = v28;
      }
      else {
        v30 = v29;
      }
    }
    else {
      v30 = &GameData_1a9f09e;
    }
    fs_a501f0((void*)((__int64*)&v84_.v84),
              *msg_MessageManager_instance__ptr[0], v30);
    v31 = (__int64)SceneManager_138e2c0(v24, (unsigned __int8*)&v84_.v84);
    if ((LANES128(v84_.v84).n128_u8[0] & 1) != 0 && v84_.v85 != 0) {
      v32 = v31;
      v33 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v33, v84_.v85);
      v31 = v32;
    }
  }
  else {
    v31 = SceneManager_138e5e0(*v3);
  }
  v34 = *v3;
  v88_.v101 = *(_QWORD*)(v31 + 96);
  v35 = *(_QWORD*)(a1 + 256);
  if (v35 != 0) {
    v36 = *(_QWORD*)(v35 + 24);
    if (v36 != 0) {
      v37 = *(_BYTE*)(v36 + 88);
      v38 = *(const char**)(v36 + 104);
      v39 = (const char*)(v36 + 89);
      if ((v37 & 1) != 0) {
        v40 = v38;
      }
      else {
        v40 = v39;
      }
    }
    else {
      v40 = &GameData_1a9f09e;
    }
    fs_a501f0((void*)((__int64*)&v84_.v84), *v25, v40);
    v41 = (__int64)SceneManager_138e2c0(v34, (unsigned __int8*)&v84_.v84);
    if ((LANES128(v84_.v84).n128_u8[0] & 1) != 0 && v84_.v85 != 0) {
      v42 = v41;
      v43 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v43, v84_.v85);
      v41 = v42;
    }
  }
  else {
    v41 = SceneManager_138e5e0(v34);
  }
  v88_.v96 = *(_QWORD*)(v41 + 8);
  v44 = (__int64)*GameData_2131438;
  v45 = strlen((const char*)*GameData_2131438);
  if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_107;
  }
  v46 = v45;
  if (v45 >= 0x17) {
    if ((v45 | 7) == 0x17) {
      v48 = 26;
    }
    else {
      v48 = (v45 | 7) + 1;
    }
    v47 = (char*)fw_memory_HeapManager_Allocate(*v5, v48, 16, 0);
    v78_.v79 = v46;
    v78_.v80 = v47;
    v78_.v78 = v48 | 1;
  }
  else {
    LOBYTE(v78_.v78) = 2 * v45;
    v47 = (char*)&v78_.v78 + 1;
    if (v45 == 0) {
      goto LABEL_72;
    }
  }
  memmove((__int64)v47, v44, v46);
LABEL_72:
  v47[v46] = 0;
  game_facility_140d160((void*)(&v81_.v81), (__int64)&v78_.v78);
  game_facility_140d000((void*)(&v84_.v84), (__int64)&v81_.v81);
  if ((v81_.v82 & 1) != 0 && v81_.v83 != 0) {
    v49 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v49, v81_.v83);
  }
  if ((v78_.v78 & 1) != 0 && v78_.v80 != nullptr) {
    v50 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v50, (__int64)v78_.v80);
  }
  v88_.v95 =
      LANES64_OF(
          vzip1_s32(
              COERCE_AS(int32x2_t, LANES128(v84_.v84).n128_u64[0]),
              COERCE_AS(
                  int32x2_t,
                  LANES128_OF(vextq_s8(v84_.v84, v84_.v84, 8u)).n128_u64[0])))
          .n64_u64[0];
  if ((v84_.v86 & 1) != 0 && v84_.v87 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v51, v84_.v87);
  }
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v52 = game_map_MapRandom_instance__ptr[0];
  v53 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL));
  v54 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v55 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v52 + 1) = v53;
  v56 = (v55 >> 8) ^ (v54 >> 19) ^ v55 ^ v54;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52) = v54;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52 + 4) = v56;
  v57 = v56 & 0x7FFFFFFF;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  LANES128(v84_.v84).n128_u32[0] = 1525034596;
  v58 = 1;
  if (v57 % 0x320 >= 0x1F4) {
    v58 = 2;
  }
  if (v57 % 0x320 >= 0x190) {
    v59 = v58;
  }
  else {
    v59 = 0;
  }
  v60 = v114_.v115;
  v61 = GameData_1c21be8[v59];
  LODWORD(v81_.v81) = v61;
  if (v114_.v115 >= v114_.v116) {
    v62 = GameHr_10d6d40(&v114_.v114, (int*)&v84_.v84, (int*)&v81_.v81);
  }
  else {
    *(_QWORD*)(v114_.v115 + 16) = 0;
    *(_QWORD*)(v60 + 24) = 0;
    *(_QWORD*)(v60 + 8) = 0;
    v62 = v60 + 32;
    *(_DWORD*)v60 = 1525034596;
    *(_DWORD*)(v60 + 4) = v61;
  }
  v114_.v115 = v62;
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v63 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52);
  v64 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52 + 4);
  v65 = *(_DWORD*)v52 ^ (*(_DWORD*)v52 << 11);
  *(_DWORD*)v52 = *((_DWORD*)v52 + 1);
  *((_DWORD*)v52 + 1) = v63;
  v66 = (v65 >> 8) ^ (v64 >> 19) ^ v65 ^ v64;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52) = v64;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52 + 4) = v66;
  v67 = v66 & 0x7FFFFFFF;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  LODWORD(v81_.v81) = 1525034596;
  v68 = 1;
  if (v67 % 0x320 >= 0x1F4) {
    v68 = 2;
  }
  if (v67 % 0x320 >= 0x190) {
    v69 = v68;
  }
  else {
    v69 = 0;
  }
  v70 = v114_.v115;
  v71 = GameData_1c21be8[v69];
  LANES128(v84_.v84).n128_u32[0] = v71;
  if (v114_.v115 >= v114_.v116) {
    v72 = GameHr_10d6d40(&v114_.v114, (int*)&v84_.v84, (int*)&v81_.v81);
  }
  else {
    *(_QWORD*)(v114_.v115 + 16) = 0;
    *(_QWORD*)(v70 + 24) = 0;
    *(_QWORD*)(v70 + 8) = 0;
    v72 = v70 + 32;
    *(_DWORD*)v70 = v71;
    *(_DWORD*)(v70 + 4) = 1525034596;
  }
  v114_.v115 = v72;
  v73 = *v5;
  LODWORD(v114_.v117) = v114_.v117 | 0x8004820;
  v114_.v131 = "Side";
  v74 = (_QWORD*)fw_memory_HeapManager_Allocate(v73, 792, 16, 0);
  v74[2] = 0;
  v75 = (__int64)(v74 + 3);
  v76 = (unsigned __int64)v74;
  *v74 = GameData_212d1e8 + 2;
  v74[1] = 0;
  memset((__int64)(v74 + 3), 0, 0x2D8u);
  *(_QWORD*)(v76 + 256) = 0;
  *(_QWORD*)(v76 + 264) = 0;
  *(_QWORD*)(v76 + 352) = 0;
  *(_QWORD*)(v76 + 360) = 0;
  *(_QWORD*)(v76 + 448) = 0;
  *(_QWORD*)(v76 + 456) = 0;
  *(_DWORD*)(v76 + 367) = 0;
  *(_QWORD*)(v76 + 176) = 0;
  *(_QWORD*)(v76 + 184) = 0;
  *(_QWORD*)(v76 + 192) = 0;
  *(_QWORD*)(v76 + 200) = 0;
  *(_WORD*)(v76 + 208) = 0;
  *(_QWORD*)(v76 + 280) = 0;
  *(_QWORD*)(v76 + 288) = 0;
  *(_BYTE*)(v76 + 296) = 0;
  *(_QWORD*)(v76 + 240) = 0;
  *(_QWORD*)(v76 + 248) = 0;
  *(_DWORD*)(v76 + 328) = -1;
  *(_QWORD*)(v76 + 336) = 0;
  *(_QWORD*)(v76 + 344) = 0;
  *(_QWORD*)(v76 + 376) = 0;
  *(_QWORD*)(v76 + 384) = 0;
  *(_BYTE*)(v76 + 392) = 0;
  *(_QWORD*)(v76 + 144) = 0x43FA000043FA0000LL;
  *(_QWORD*)(v76 + 152) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(v76 + 160) = 0x43FA000043FA0000LL;
  *(_QWORD*)(v76 + 168) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(v76 + 232) = 0;
  *(_DWORD*)(v76 + 463) = 0;
  *(_DWORD*)(v76 + 424) = -1;
  *(_QWORD*)(v76 + 432) = 0;
  *(_QWORD*)(v76 + 440) = 0;
  *(_BYTE*)(v76 + 488) = 0;
  *(_QWORD*)(v76 + 472) = 0;
  *(_QWORD*)(v76 + 480) = 0;
  *(_DWORD*)(v76 + 271) = 0;
  *(_DWORD*)(v76 + 520) = -1;
  *(_DWORD*)(v76 + 559) = 0;
  *(_QWORD*)(v76 + 552) = 0;
  *(_QWORD*)(v76 + 544) = 0;
  *(_QWORD*)(v76 + 536) = 0;
  *(_QWORD*)(v76 + 528) = 0;
  *(_BYTE*)(v76 + 584) = 0;
  *(_QWORD*)(v76 + 576) = 0;
  *(_QWORD*)(v76 + 568) = 0;
  *(_DWORD*)(v76 + 616) = -1;
  *(_QWORD*)(v76 + 624) = 0;
  *(_QWORD*)(v76 + 632) = 0;
  *(_QWORD*)(v76 + 640) = 0;
  *(_QWORD*)(v76 + 648) = 0;
  *(_QWORD*)(v76 + 656) = 0;
  *(_QWORD*)(v76 + 664) = 0;
  *(_QWORD*)(v76 + 672) = 0;
  *(_QWORD*)(v76 + 680) = 0;
  *(_QWORD*)(v76 + 688) = 0;
  *(_QWORD*)(v76 + 696) = 0;
  *(_QWORD*)(v76 + 704) = 0;
  *(_QWORD*)(v76 + 300) = 0x6300000063LL;
  *(_QWORD*)(v76 + 396) = 0x6300000063LL;
  *(_QWORD*)(v76 + 492) = 0x6300000063LL;
  *(_QWORD*)(v76 + 712) = 0;
  *(_QWORD*)(v76 + 720) = 0;
  *(_QWORD*)(v76 + 728) = 0;
  *(_QWORD*)(v76 + 736) = 0;
  *(_DWORD*)(v76 + 744) = 0;
  *(_QWORD*)(v76 + 784) = 0;
  *(_QWORD*)(v76 + 776) = 0;
  *(_QWORD*)(v76 + 768) = 0;
  *(_QWORD*)(v76 + 760) = 0;
  *(_QWORD*)(v76 + 752) = 0;
  LANES128(v84_.v84).n128_u64[0] = v75;
  LANES128(v84_.v84).n128_u64[1] = v76;
  *(_QWORD*)(v76 + 320) = -4294967197LL;
  *(_QWORD*)(v76 + 416) = -4294967197LL;
  *(_QWORD*)(v76 + 512) = -4294967197LL;
  *(_QWORD*)(v76 + 588) = 0x6300000063LL;
  *(_QWORD*)(v76 + 608) = -4294967197LL;
  GameHr_10eb860(v75, (__int64)&v88_.v88);
  GameHr_1090da0(v75);
  game_combat_CombatSequenceImpl_CombatSequenceImpl(a1, (__int64)&v84_.v84,
                                                    a1 + 184);
  v77 = LANES128(v84_.v84).n128_i64[1];
  if (LANES128(v84_.v84).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(v84_.v84).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
    std___1___shared_weak_count___release_weak(v77);
  }
  GameHr_a0eb00((__int64)&v88_.v88);
}

__int64 ProcTrainingMotion_Destructor_197bc00(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  *(a1 - 19) = game_facility_anonymous_ProcTrainingMotion_vtable;
  v1 = a1 - 19;
  *a1 = GameData_211bff8;
  v2 = a1[7];
  a1[4] = GameData_211c040;
  a1[5] = game_facility_TrainingArgs_vtable;
  a1[6] = &GameData_203b128;
  if (v2 != 0) {
    a1[8] = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return GameRoutine_1495040(v1);
}

void ProcTrainingMotion_DeletingDestructor_197bc90(_QWORD* a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(a1 - 19) = game_facility_anonymous_ProcTrainingMotion_vtable;
  v1 = (__int64)(a1 - 19);
  *a1 = ProcTrainingMotion_Destructor_197bc00_ptr;
  v2 = GameData_2131450[0];
  v3 = a1[7];
  v4 = GameData_2131450[0] + 2;
  a1[4] = ProcTrainingMotion_Destructor_197bd40_ptr;
  a1[5] = v4;
  a1[6] = v2 + 8;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[8] = v3;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v3);
  }
  GameRoutine_1495040_alt1(v1);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v8, v1);
}

__int64 ProcTrainingMotion_Destructor_197bd40(__int64 a1, __int64 a2)
{
  GameRoutine_197af90(a1 - 184, a2);
  return 1;
}

#pragma GCC visibility pop
