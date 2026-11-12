#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameReliance_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameReliance_Destructor(_QWORD* a1);
__int64 GameReliance_DeletingDestructor(_QWORD* a1);
_QWORD* GameRoutine_89d820(float*, unsigned __int64*, __int64, __int64**);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_68c910(_QWORD, _QWORD);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_818500(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8e33a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a94d1f;
extern _UNKNOWN GameData_1aac0e2;
extern _UNKNOWN GameData_1aac0f8;
extern _UNKNOWN GameData_1ab3b26;
extern _UNKNOWN GameData_1ab3b3c;
extern _UNKNOWN GameData_1ac6b1b;
extern _UNKNOWN GameData_1ada48b;
extern _UNKNOWN GameData_1ae1f83;
extern _UNKNOWN GameData_1ae1f9b;
extern _UNKNOWN GameData_1ae58c8;
extern _UNKNOWN GameData_1ae9784;
extern _UNKNOWN GameData_1afcec7;
extern _UNKNOWN GameData_21f2490;
extern _UNKNOWN GameData_21f24f8;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*GameData_1fab430)();
extern __int64 (*GameData_1fab540[])();
extern __int64 (*GameData_1fab5d0[])();
extern __int64 (*game_GameReliance_Impl_Data_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9b00;
extern __int64 GameData_21c9ff0;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 GameData_21f2430;
extern __int64 GameData_21f2438;
extern __int64 GameData_21f2440;
extern __int64 GameData_21f2448;
extern __int64 GameData_21f2450;
extern __int64 GameData_21f2458;
extern __int64 GameData_21f2460;
extern __int64 GameData_21f2468;
extern __int64 GameData_21f2470;
extern __int64 GameData_21f2478;
extern __int64 GameData_21f2480;
extern __int64 GameData_21f2488;
extern __int64 GameData_21f2498;
extern __int64 GameData_21f24a0;
extern __int64 GameData_21f24a8;
extern __int64 GameData_21f24b0;
extern __int64 GameData_21f24b8;
extern __int64 GameData_21f24c0;
extern __int64 GameData_21f24c8;
extern __int64 GameData_21f24d0;
extern __int64 GameData_21f24d8;
extern __int64 GameData_21f24e0;
extern __int64 GameData_21f24e8;
extern __int64 GameData_21f24f0;
extern __int64 game_GameModeData_instance_;
extern char GameData_2166cf2;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8e2ec0(_QWORD);
__int64 GameReliance_8e0520(__int64 a1, int a2);
__int64 GameReliance_8e05a0(__int64 a1, int a2);
__int64 GameReliance_8e0880_alt1(__int64 result) __asm__("GameReliance_8e0880");
unsigned __int64 GameReliance_8e15e0(unsigned __int64 result, __int64 a2);
__int64 GameReliance_8e17a0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 game_GameReliance_Impl_EachPlayer_alt1(__int64 a1, __int64 a2) __asm__(
    "game_GameReliance_Impl_EachPlayer");
__int64 game_GameReliance_Impl_EachScore_alt1(
    __int64 a1, char a2,
    __int64 a3) __asm__("game_GameReliance_Impl_EachScore");
__int64 GameReliance_8e2280(__int64 a1, __int64 a2);
__int64 GameReliance_8e24a0(_QWORD* a1, __int64* a2);
unsigned __int64 GameReliance_8e2ee0(unsigned __int64 result, __int64 a2);
__int64 game_GameReliance_Impl_EachPlayer_closure_Invoke(__int64 result,
                                                         __int64 a2);
__int64 game_GameReliance_Impl_EachScore_closure_Invoke(__int64 result,
                                                        __int64 a2);
__int64 (***GameReliance_8e1730(__int64 a1, __int64 a2, __int64 a3))();
_QWORD* game_89d820(float*, unsigned __int64*, __int64, __int64**);
__int64* fw_containers_BalanceAfterInsert_alt1(
    __int64* result, __int64*) __asm__("fw_containers_BalanceAfterInsert");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_map_anonymous_818500(float*, unsigned int*, __int64, _DWORD**);
int* GameHr_8e33a0(int* result, int*, __int64, __int64, int*, __int64);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_68c910_alt1(__int64, _QWORD*) __asm__("GameRoutine_68c910");
void GameRoutine_6e5900_alt1(__int64*, _DWORD*) __asm__("GameRoutine_6e5900");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_8e2ec0_alt1() __asm__("GameRoutine_8e2ec0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameReliance_8e0880(float* a1);
void game_GameReliance_Impl_EachPlayer(__int64 a1, __int64 a2);
void game_GameReliance_Impl_EachScore(__int64 a1, char a2, __int64 a3);
__int64* game_820d50(int);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
bool game_HasSkill(_QWORD*, _DWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
__int64 GameReliance_8e18b0(_QWORD* a1, _QWORD* a2, _QWORD* a3);

void __attribute__((noreturn)) GameReliance_IData_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 GameReliance_8e0520(__int64 a1, int a2)
{
  unsigned __int64 v2;
  int v3;
  __int64 result;
  int v5;
  unsigned int v6;
  int v7;

  v2 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
  if ((int)v2 < 1) {
    return 0;
  }
  v3 = *(_DWORD*)GameData_21d99c8;
  LODWORD(result) = 0;
  v5 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v2 - 1));
  if (v5 >= a2) {
    v5 = a2;
  }
  if (a2 >= v3) {
    v3 = v5;
  }
  while (1) {
    v6 = (unsigned int)(result + v2) >> 1;
    v7 = *(_DWORD*)(GameData_21d99c8 + 4LL * v6);
    if (v3 == v7) {
      break;
    }
    if (v3 >= v7) {
      result = v6 + 1;
    }
    else {
      result = (unsigned int)result;
    }
    if (v3 < v7) {
      LODWORD(v2) = v6;
    }
    if ((int)result >= (int)v2) {
      return result;
    }
  }
  return v6 + 1;
}

__int64 GameReliance_8e05a0(__int64 a1, int a2)
{
  int v2;
  __int64* v3;
  __int64 result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2490,
                            memory_order_acquire) &
       1) == 0) {
    v11 = a1;
    v9 = a2;
    v5 = __cxa_guard_acquire(&GameData_21f2490);
    a2 = v9;
    v6 = v5;
    a1 = v11;
    if (v6 != 0) {
      GameData_21f2438 = (__int64)&GameData_1ab3b26;
      GameData_21f2430 = game_HashString(&GameData_1ab3b26);
      GameData_21f2448 = (__int64)&GameData_1ac6b1b;
      GameData_21f2440 = game_HashString(&GameData_1ac6b1b);
      GameData_21f2458 = (__int64)&GameData_1ae9784;
      GameData_21f2450 = game_HashString(&GameData_1ae9784);
      GameData_21f2468 = (__int64)&GameData_1a94d1f;
      GameData_21f2460 = game_HashString(&GameData_1a94d1f);
      GameData_21f2478 = (__int64)&GameData_1ae58c8;
      GameData_21f2470 = game_HashString(&GameData_1ae58c8);
      GameData_21f2488 = (__int64)&GameData_1ae1f83;
      GameData_21f2480 = game_HashString(&GameData_1ae1f83);
      __cxa_guard_release(&GameData_21f2490);
      a1 = v11;
      a2 = v9;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f24f8,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a1;
    v10 = a2;
    v7 = __cxa_guard_acquire(&GameData_21f24f8);
    a2 = v10;
    v8 = v7;
    a1 = v12;
    if (v8 != 0) {
      GameData_21f24a0 = (__int64)&GameData_1ae1f9b;
      GameData_21f2498 = game_HashString(&GameData_1ae1f9b);
      GameData_21f24b0 = (__int64)&GameData_1ab3b3c;
      GameData_21f24a8 = game_HashString(&GameData_1ab3b3c);
      GameData_21f24c0 = (__int64)&GameData_1ada48b;
      GameData_21f24b8 = game_HashString(&GameData_1ada48b);
      GameData_21f24d0 = (__int64)&GameData_1aac0e2;
      GameData_21f24c8 = game_HashString(&GameData_1aac0e2);
      GameData_21f24e0 = (__int64)&GameData_1aac0f8;
      GameData_21f24d8 = game_HashString(&GameData_1aac0f8);
      GameData_21f24f0 = (__int64)&GameData_1afcec7;
      GameData_21f24e8 = game_HashString(&GameData_1afcec7);
      __cxa_guard_release(&GameData_21f24f8);
      a1 = v12;
      a2 = v10;
    }
  }
  if (*(_WORD*)(a1 + 14) == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  v2 = a2 & ~(a2 >> 31);
  if (v2 >= 5) {
    v2 = 5;
  }
  if ((*(_DWORD*)(game_GameModeData_instance_ + 92) & 2) != 0) {
    v3 = &GameData_21f2498;
  }
  else {
    v3 = &GameData_21f2430;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v3[2 * (unsigned int)v2]);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

__int64 GameReliance_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_GameReliance_vtable;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

__int64 GameReliance_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_GameReliance_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

void GameReliance_8e0880(float* a1)
{

#pragma clang fp contract(off)
  void (***v1)(_QWORD);
  void (***v2)(_QWORD);
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (**v6)(_QWORD);
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  const char* v49;
  unsigned __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  const char* v54;
  unsigned __int64 v55;
  __int64 v56;
  char* v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  int v61;
  char* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 i;
  int v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int8* v69;
  int v70;
  int v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  unsigned int v77;
  int v78;
  unsigned __int64 v79;
  int v80;
  char v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  void (***v96)(_QWORD);
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  float* v104;
  __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  void (**v114)(__int64);
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64** v119;
  __int64* v120;
  unsigned __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  bool v124;
  unsigned __int64 v125;
  __int64 v126;
  __int64** v127;
  __int64* v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  void* v133;
  __int64* v134;
  _QWORD* v135;
  __int64* v136;
  _QWORD* v137;
  __int64* v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  __int64 (***v144)();
  unsigned int v145;
  int v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  struct {
    char gap48_[8];
    __int64 (**v154)();
    __int128 v155;
    __int64 v156;
    __int64 v157;
    float* v158;
  } v154_;
  __int64 v159;
  struct {
    __int16 v160;
    char v161;
    char gap115_[13];
    __int64 v162;
  } v160_;
  struct {
    _QWORD v163[2];
    __int64 v164;
  } v163_;
  struct {
    __int64* v165;
    unsigned __int64 v166;
    __int64 v167;
  } v165_;

  v2 = *((void (****)(_QWORD))a1 + 1);
  v1 = *((void (****)(_QWORD))a1 + 2);
  if (v2 != v1) {
    v4 = v1 - 7;
    v5 = v1 - 7;
    do {
      v6 = *v5;
      v5 -= 7;
      (*v6)(v4);
      v124 = v4 == v2;
      v4 = v5;
    } while (!v124);
  }
  *((_QWORD*)a1 + 2) = v2;
  v7 = fw_memory_g_heap_manager_ptr;
  if (*((_QWORD*)a1 + 7) != 0) {
    v8 = *((_QWORD**)a1 + 6);
    if (v8 != nullptr) {
      do {
        v9 = (_QWORD*)*v8;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v10, (__int64)v8);
        v8 = v9;
      } while (v9 != nullptr);
    }
    v11 = *((_QWORD*)a1 + 5);
    *((_QWORD*)a1 + 6) = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)a1 + 4) + 8 * v13) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 4) + 8 * v13 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 4) + 8 * v13 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 4) + 8 * v13 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 4) + 8 * v13 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 4) + 8 * v13 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 4) + 8 * v13 + 48) = 0;
          v15 = *((_QWORD*)a1 + 4) + 8 * v13;
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
          *(_QWORD*)(*((_QWORD*)a1 + 4) + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    *((_QWORD*)a1 + 7) = 0;
  }
  if (*((_QWORD*)a1 + 12) != 0) {
    v17 = *((_QWORD**)a1 + 11);
    if (v17 != nullptr) {
      do {
        v18 = (_QWORD*)*v17;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v19, (__int64)v17);
        v17 = v18;
      } while (v18 != nullptr);
    }
    v20 = *((_QWORD*)a1 + 10);
    *((_QWORD*)a1 + 11) = 0;
    if (v20 != 0) {
      v21 = v20 & 7;
      if (v20 >= 8) {
        v23 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        v22 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)a1 + 9) + 8 * v22) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 9) + 8 * v22 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 9) + 8 * v22 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 9) + 8 * v22 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 9) + 8 * v22 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 9) + 8 * v22 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 9) + 8 * v22 + 48) = 0;
          v24 = *((_QWORD*)a1 + 9) + 8 * v22;
          v22 += 8;
          *(_QWORD*)(v24 + 56) = 0;
        } while (v23 != v22);
      }
      else {
        v22 = 0;
      }
      if (v21 != 0) {
        v25 = 8 * v22;
        do {
          --v21;
          *(_QWORD*)(*((_QWORD*)a1 + 9) + v25) = 0;
          v25 += 8;
        } while (v21 != 0);
      }
    }
    *((_QWORD*)a1 + 12) = 0;
  }
  if (*((_QWORD*)a1 + 17) != 0) {
    v26 = *((_QWORD**)a1 + 16);
    if (v26 != nullptr) {
      do {
        v28 = (_QWORD*)*v26;
        v29 = v26[3];
        if (v29 != 0) {
          v30 = *(_QWORD*)v7;
          v26[4] = v29;
          if (*(_QWORD*)(v30 + 200) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v30 + v31, v29);
        }
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v27 = 128;
        }
        else {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v27, (__int64)v26);
        v26 = v28;
      } while (v28 != nullptr);
    }
    v32 = *((_QWORD*)a1 + 15);
    *((_QWORD*)a1 + 16) = 0;
    if (v32 != 0) {
      v33 = v32 & 7;
      if (v32 >= 8) {
        v35 = v32 & 0xFFFFFFFFFFFFFFF8LL;
        v34 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)a1 + 14) + 8 * v34) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 14) + 8 * v34 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 14) + 8 * v34 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 14) + 8 * v34 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 14) + 8 * v34 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 14) + 8 * v34 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)a1 + 14) + 8 * v34 + 48) = 0;
          v36 = *((_QWORD*)a1 + 14) + 8 * v34;
          v34 += 8;
          *(_QWORD*)(v36 + 56) = 0;
        } while (v35 != v34);
      }
      else {
        v34 = 0;
      }
      if (v33 != 0) {
        v37 = 8 * v34;
        do {
          --v33;
          *(_QWORD*)(*((_QWORD*)a1 + 14) + v37) = 0;
          v37 += 8;
        } while (v33 != 0);
      }
    }
    *((_QWORD*)a1 + 17) = 0;
  }
  v38 = &GameData_21c9b00;
  v39 = *(_QWORD*)(GameData_21c9b00 + 64);
  v40 = *(_QWORD*)(GameData_21c9b00 + 72);
  if ((int)((unsigned __int64)(v40 - v39) >> 3) < 1) {
    goto LABEL_168;
  }
  v41 = 0;
  v42 = 1;
  while (2) {
    v43 = v41 + 1;
    v44 = (int)((v40 - v39) >> 3);
    if (v41 + 1 >= v44) {
      goto LABEL_58;
    }
    v150 = v41 + 1;
    v151 = v42;
    v152 = v41;
    do {
      v46 = *((_QWORD*)a1 + 1);
      v45 = *((_QWORD*)a1 + 2);
      *(_QWORD*)((char*)&v154_.v155 + 4) = 0;
      v154_.v156 = 0;
      v154_.v157 = 0;
      v154_.v158 = a1;
      v159 = 0;
      v153 = 0x6DB6DB6DB6DB6DB7LL * ((v45 - v46) >> 3);
      LOWORD(v154_.v155) = 28087 * ((v45 - v46) >> 3);
      WORD1(v154_.v155) = 256;
      v154_.v154 = game_GameReliance_Impl_Data_vtable;
      v47 = *(_QWORD*)(v39 + 8 * v41);
      v48 = *(_QWORD*)(v39 + 8 * v42);
      v160_.v161 = 0;
      v160_.v160 = 24322;
      v154_.v156 = v47;
      v154_.v157 = v48;
      v49 = *(const char**)(v47 + 8);
      v50 = strlen_alt1(v49);
      v51 =
          (_QWORD*)GameRoutine_1a0a680_alt1((__int64)&v160_.v160, 0, v49, v50);
      v53 = v51[1];
      v52 = v51[2];
      v163_.v163[0] = *v51;
      v163_.v163[1] = v53;
      v163_.v164 = v52;
      v51[1] = 0;
      v51[2] = 0;
      *v51 = 0;
      v54 = *(const char**)(v48 + 8);
      v55 = strlen_alt1(v54);
      v56 = GameRoutine_1a09ce0_alt1((__int64)v163_.v163, v54, v55);
      v57 = (char*)&v165_.v165 + 1;
      v165_.v165 = *(__int64**)v56;
      v58 = *(_QWORD*)(v56 + 8);
      v165_.v166 = v58;
      v59 = *(_QWORD*)(v56 + 16);
      v165_.v167 = v59;
      *(_QWORD*)(v56 + 8) = 0;
      *(_QWORD*)(v56 + 16) = 0;
      *(_QWORD*)v56 = 0;
      if (((unsigned __int8)v165_.v165 & 1) != 0) {
        v57 = (char*)v59;
      }
      else {
        v58 = (unsigned __int64)(unsigned __int8)v165_.v165 >> 1;
      }
      if (v57 != nullptr) {
        if ((int)v58 < 8) {
          v63 = 0;
          v61 = -2128831035;
          if ((int)v58 <= 0) {
            goto LABEL_78;
          }
        }
        else {
          v60 = 7;
          v61 = -2128831035;
          do {
            v62 = &v57[v60];
            v60 += 8LL;
            v61 = (16777619 *
                   ((16777619 *
                     ((16777619 *
                       ((16777619 *
                         ((16777619 *
                           ((16777619 *
                             ((16777619 * ((16777619 * v61) ^
                                           (unsigned __int8)*(v62 - 7))) ^
                              (unsigned __int8)*(v62 - 6))) ^
                            (unsigned __int8)*(v62 - 5))) ^
                          (unsigned __int8)*(v62 - 4))) ^
                        (unsigned __int8)*(v62 - 3))) ^
                      (unsigned __int8)*(v62 - 2))) ^
                    (unsigned __int8)*(v62 - 1))) ^
                  (unsigned __int8)*v62;
          } while (v60 < (v58 & 0x7FFFFFFF));
          v63 = v58 & 0x7FFFFFF8;
          if ((int)(v58 & 0x7FFFFFF8) >= (int)v58) {
            goto LABEL_78;
          }
        }
        v64 = v58 & 7;
        for (i = v63; v64 != 0; v61 = (16777619 * v61) ^ v66) {
          v66 = (unsigned __int8)v57[i++];
          --v64;
        }
        if (v63 - (unsigned int)v58 <= 0xFFFFFFFFFFFFFFF8LL) {
          v67 = &v57[i];
          v68 = (unsigned int)v58 - i;
          v69 = (unsigned __int8*)(v67 + 3);
          do {
            v68 -= 8LL;
            v70 =
                (16777619 *
                 ((16777619 *
                   ((16777619 *
                     ((16777619 * ((16777619 * ((16777619 * ((16777619 * v61) ^
                                                             *(v69 - 3))) ^
                                                *(v69 - 2))) ^
                                   *(v69 - 1))) ^
                      *v69)) ^
                    v69[1])) ^
                  v69[2])) ^
                v69[3];
            v71 = v69[4];
            v69 += 8;
            v61 = (16777619 * v70) ^ v71;
          } while (v68 != 0);
        }
      LABEL_78:
        if (v61 != 0) {
          v72 = v61;
        }
        else {
          v72 = -1;
        }
        LODWORD(v159) = v72;
        if (((unsigned __int8)v165_.v165 & 1) == 0) {
          goto LABEL_86;
        }
        goto LABEL_82;
      }
      LODWORD(v159) = 0;
      if (((unsigned __int8)v165_.v165 & 1) != 0) {
      LABEL_82:
        if (v59 != 0) {
          v73 = 128;
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
            v73 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v73, v59);
        }
      }
    LABEL_86:
      if ((v163_.v163[0] & 1) != 0 && v163_.v164 != 0) {
        v74 = 128;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
          v74 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v74, v163_.v164);
      }
      if ((v160_.v160 & 1) != 0 && v160_.v162 != 0) {
        v75 = 128;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
          v75 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v75, v160_.v162);
      }
      v76 = *(unsigned __int16*)(v47 + 16);
      v77 = *(unsigned __int16*)(v48 + 16);
      HIDWORD(v79) = v76 | (v77 << 16);
      LODWORD(v79) = HIDWORD(v79);
      v78 = v79 >> 16;
      if (v76 >= v77) {
        v80 = v78;
      }
      else {
        v80 = v76 | (v77 << 16);
      }
      HIDWORD(v159) = v80;
      v81 = *(_BYTE*)(*(_QWORD*)(v47 + 40) + *(unsigned __int16*)(v48 + 16));
      if (v81 == 0) {
        v81 = *(_BYTE*)(*(_QWORD*)(v48 + 40) + *(unsigned __int16*)(v47 + 16));
      }
      v83 = *((_QWORD*)a1 + 2);
      v82 = *((_QWORD*)a1 + 3);
      BYTE2(v154_.v155) = v81;
      if (v83 >= v82) {
        v88 = *((_QWORD*)a1 + 1);
        v89 = v83 - v88;
        v90 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v83 - v88) >> 3) + 1;
        if (v90 > 0x492492492492492LL) {
          GameRoutine_8e2ec0_alt1();
        }
        v91 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v82 - v88) >> 3);
        if (2 * v91 > v90) {
          v90 = 2 * v91;
        }
        if (v91 >= 0x249249249249249LL) {
          v92 = 0x492492492492492LL;
        }
        else {
          v92 = v90;
        }
        if (v92 > 0x492492492492492LL) {
          GameRoutine_60a210_alt1();
        }
        v93 = *(_QWORD*)v7;
        v94 = v38;
        v95 = v7;
        v96 = *((void (****)(_QWORD))a1 + 1);
        v97 = 56 * v92;
        v98 = fw_memory_HeapManager_Allocate_alt1(v93, 56 * v92, 16, 0);
        v99 = (_QWORD*)(v98 + v89);
        v100 = (__int64)v96;
        v101 = v154_.v155;
        v102 = v154_.v156;
        v103 = v154_.v157;
        v99[2] = *((_QWORD*)&v154_.v155 + 1);
        v99[3] = v102;
        *v99 = game_GameReliance_Impl_Data_vtable;
        v99[1] = v101;
        v104 = v154_.v158;
        v105 = v159;
        v99[4] = v103;
        v99[5] = v104;
        v99[6] = v105;
        if (v96 != (void (***)(_QWORD))v83) {
          v106 = v96;
          v107 = (_QWORD*)v98;
          do {
            v108 = v106[1];
            v109 = v106[2];
            v110 = v106[3];
            v111 = v106[4];
            *v107 = game_GameReliance_Impl_Data_vtable;
            v107[3] = v110;
            v107[4] = v111;
            v107[1] = v108;
            v107[2] = v109;
            v112 = v106[5];
            v113 = v106[6];
            v106 += 7;
            v107[5] = v112;
            v107[6] = v113;
            v107 += 7;
          } while (v106 != (_QWORD*)v83);
          do {
            v114 = *v96;
            v96 += 7;
            (*v114)(v100);
            v100 = (__int64)v96;
          } while (v96 != (void (***)(_QWORD))v83);
          v100 = *((_QWORD*)a1 + 1);
        }
        v87 = v99 + 7;
        v7 = v95;
        *((_QWORD*)a1 + 1) = v98;
        *((_QWORD*)a1 + 2) = v99 + 7;
        *((_QWORD*)a1 + 3) = v98 + v97;
        if (v100 != 0) {
          v115 = 128;
          if (*(_QWORD*)(*(_QWORD*)v95 + 200LL) == 0) {
            v115 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v95 + v115, v100);
        }
        v38 = v94;
      }
      else {
        *(_QWORD*)v83 = &GameData_1fab430;
        v84 = v154_.v156;
        v85 = v154_.v157;
        *(_OWORD*)(v83 + 8) = v154_.v155;
        *(_QWORD*)(v83 + 24) = v84;
        *(_QWORD*)(v83 + 32) = v85;
        *(_QWORD*)v83 = game_GameReliance_Impl_Data_vtable;
        v86 = v159;
        *(_QWORD*)(v83 + 40) = v154_.v158;
        *(_QWORD*)(v83 + 48) = v86;
        v87 = (_QWORD*)(v83 + 56);
      }
      *((_QWORD*)a1 + 2) = v87;
      v116 = *((_QWORD*)a1 + 5);
      if (v116 != 0 && *((_QWORD*)a1 + 7) != 0) {
        v117 = v116 - 1;
        if ((v116 & (v116 - 1)) != 0) {
          v118 = HIDWORD(v159);
          if (v116 <= HIDWORD(v159)) {
            v118 = HIDWORD(v159) % (unsigned int)v116;
          }
        }
        else {
          v118 = (unsigned int)(v116 - 1) & HIDWORD(v159);
        }
        v119 = *(__int64***)(*((_QWORD*)a1 + 4) + 8 * v118);
        if (v119 != nullptr) {
          v120 = *v119;
          if (v120 != nullptr) {
            if ((v116 & v117) == 0) {
              while (1) {
                v122 = v120[1];
                if (v122 == HIDWORD(v159)) {
                  if (*((_DWORD*)v120 + 4) == HIDWORD(v159)) {
                    goto LABEL_142;
                  }
                }
                else if ((v122 & v117) != v118) {
                  goto LABEL_141;
                }
                v120 = (__int64*)*v120;
                if (v120 == nullptr) {
                  goto LABEL_141;
                }
              }
            }
            do {
              v121 = v120[1];
              if (v121 == HIDWORD(v159)) {
                if (*((_DWORD*)v120 + 4) == HIDWORD(v159)) {
                  goto LABEL_142;
                }
              }
              else {
                if (v121 >= v116) {
                  v121 %= v116;
                }
                if (v121 != v118) {
                  break;
                }
              }
              v120 = (__int64*)*v120;
            } while (v120 != nullptr);
          }
        }
      }
    LABEL_141:
      v165_.v165 = (__int64*)((char*)&v159 + 4);
      *(_DWORD*)(game_map_anonymous_818500(
                     a1 + 8, (unsigned int*)&v159 + 1,
                     (__int64)std___1_piecewise_construct_ptr,
                     (_DWORD**)&v165_.v165) +
                 20) = v153;
    LABEL_142:
      v123 = *((_QWORD*)a1 + 10);
      v124 = v123 == 0 || *((_QWORD*)a1 + 12) == 0;
      if (!v124) {
        v125 = v123 - 1;
        if ((v123 & (v123 - 1)) != 0) {
          v126 = (unsigned int)v159;
          if (v123 <= (unsigned int)v159) {
            v126 = (unsigned int)v159 % (unsigned int)v123;
          }
        }
        else {
          v126 = ((_DWORD)v123 - 1) & (unsigned int)v159;
        }
        v127 = *(__int64***)(*((_QWORD*)a1 + 9) + 8 * v126);
        if (v127 != nullptr) {
          v128 = *v127;
          if (v128 != nullptr) {
            if ((v123 & v125) == 0) {
              while (1) {
                v130 = v128[1];
                if (v130 == (unsigned int)v159) {
                  if (*((_DWORD*)v128 + 4) == (_DWORD)v159) {
                    goto LABEL_166;
                  }
                }
                else if ((v130 & v125) != v126) {
                  goto LABEL_165;
                }
                v128 = (__int64*)*v128;
                if (v128 == nullptr) {
                  goto LABEL_165;
                }
              }
            }
            do {
              v129 = v128[1];
              if (v129 == (unsigned int)v159) {
                if (*((_DWORD*)v128 + 4) == (_DWORD)v159) {
                  goto LABEL_166;
                }
              }
              else {
                if (v129 >= v123) {
                  v129 %= v123;
                }
                if (v129 != v126) {
                  break;
                }
              }
              v128 = (__int64*)*v128;
            } while (v128 != nullptr);
          }
        }
      }
    LABEL_165:
      v165_.v165 = &v159;
      *(_DWORD*)(game_map_anonymous_818500(
                     a1 + 18, (unsigned int*)&v159,
                     (__int64)std___1_piecewise_construct_ptr,
                     (_DWORD**)&v165_.v165) +
                 20) = v153;
    LABEL_166:
      ++v42;
      v39 = *(_QWORD*)(*v38 + 64);
      v40 = *(_QWORD*)(*v38 + 72);
      v41 = v152;
    } while ((int)v42 < (int)((unsigned __int64)(v40 - v39) >> 3));
    v43 = v150;
    v42 = v151;
    v44 = (int)((v40 - v39) >> 3);
  LABEL_58:
    ++v42;
    v41 = v43;
    if (v43 < v44) {
      continue;
    }
    break;
  }
LABEL_168:
  v131 = *((_QWORD*)a1 + 1);
  v132 = *((_QWORD*)a1 + 2);
  if (v131 != v132) {
    v133 = std___1_piecewise_construct_ptr;
    do {
      v134 = **(__int64***)(v131 + 24);
      v154_.v154 = (__int64 (**)(void))&v165_.v165;
      v165_.v165 = v134;
      v135 = game_89d820(a1 + 28, (unsigned __int64*)&v165_.v165, (__int64)v133,
                         (__int64**)&v154_.v154);
      LODWORD(v154_.v154) = *(__int16*)(v131 + 8);
      GameRoutine_6e5900_alt1(v135 + 3, &v154_.v154);
      v136 = **(__int64***)(v131 + 32);
      v154_.v154 = (__int64 (**)(void))&v165_.v165;
      v165_.v165 = v136;
      v137 = game_89d820(a1 + 28, (unsigned __int64*)&v165_.v165, (__int64)v133,
                         (__int64**)&v154_.v154);
      LODWORD(v154_.v154) = *(__int16*)(v131 + 8);
      GameRoutine_6e5900_alt1(v137 + 3, &v154_.v154);
      v131 += 56;
    } while (v131 != v132);
  }
  v138 = *(__int64**)(GameData_21c9ff0 + 64);
  v139 = *(__int64**)(GameData_21c9ff0 + 72);
  if (v138 != v139) {
    while (2) {
      v140 = *v138;
      if (*(_BYTE*)(*v138 + 82) == 0) {
        goto LABEL_173;
      }
      v141 = *(_QWORD*)(v140 + 40);
      v154_.v154 = nullptr;
      *(_QWORD*)&v154_.v155 = v141;
      if (v141 != 0) {
        v141 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v141 + 24) + 1784LL) + 272LL);
      }
      v142 = *(_QWORD*)(v140 + 56);
      *((_QWORD*)&v154_.v155 + 1) = v141;
      v165_.v165 = nullptr;
      v165_.v166 = v142;
      if (v142 == 0) {
        goto LABEL_183;
      }
      v143 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v142 + 24) + 1784LL) + 272LL);
      v165_.v167 = v143;
      if (v141 != 0) {
        v144 = &game_GameReliance_Impl_Data_vtable_ptr;
        if (v143 != 0) {
          v145 = GameReliance_8e17a0(a1, (__int64)&v154_.v154,
                                     (__int64)&v165_.v165);
          if ((v145 & 0x80000000) == 0) {
            v144 = (__int64 (***)(void))(*((_QWORD*)a1 + 1) + 56LL * v145);
            if (*((_BYTE*)v144 + 10) != 0) {
            LABEL_187:
              v146 = *(unsigned __int8*)(v140 + 82);
              if (*((unsigned __int8*)v144 + 11) != v146) {
                *((_BYTE*)v144 + 11) = v146;
                v147 =
                    (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >>
                    2;
                if (v146 < (int)v147) {
                  LODWORD(v147) = v146;
                }
                v148 = (int)v147 - 1;
                if (v146 != 0) {
                  v149 = v148;
                }
                else {
                  v149 = 0;
                }
                *((_WORD*)v144 + 6) = *(_DWORD*)(GameData_21d99c8 + 4 * v149);
              }
            }
          LABEL_173:
            if (++v138 == v139) {
              return;
            }
            continue;
          }
        LABEL_183:
          v144 = &game_GameReliance_Impl_Data_vtable_ptr;
          if (GameData_2166cf2 != 0) {
            goto LABEL_187;
          }
          goto LABEL_173;
        }
      }
      else {
        v144 = &game_GameReliance_Impl_Data_vtable_ptr;
      }
      break;
    }
    if (GameData_2166cf2 == 0) {
      goto LABEL_173;
    }
    goto LABEL_187;
  }
}

unsigned __int64 GameReliance_8e15e0(unsigned __int64 result, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  if (a2 == 0) {
    return result;
  }
  v2 = result;
  result = game_HashString(a2);
  if (result == 0) {
    goto LABEL_26;
  }
  v3 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_26;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = result;
    if (result >= v3) {
      v6 = result % v3;
    }
  }
  else {
    v6 = v5 & result;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v6);
  if (v7 == nullptr || (v8 = (_QWORD*)*v7) == nullptr) {
  LABEL_26:
    v11 = 0;
    *(_QWORD*)(v2 + 8) = 0;
    goto LABEL_27;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == result) {
        if (v8[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v10 & v5) != v6) {
        goto LABEL_26;
      }
      v8 = (_QWORD*)*v8;
      if (v8 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == result) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_26;
    }
  LABEL_16:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_26;
    }
  }
  if (v8[2] != result) {
    goto LABEL_16;
  }
LABEL_29:
  v11 = v8[3];
  *(_QWORD*)(v2 + 8) = v11;
  if (v11 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL) + 272LL);
  }
LABEL_27:
  *(_QWORD*)(v2 + 16) = v11;
  return result;
}

__int64 (***GameReliance_8e1730(__int64 a1, __int64 a2, __int64 a3))()
{
  _QWORD* v5;
  unsigned int v6;

  if (*(_QWORD*)(a2 + 16) == 0 || *(_QWORD*)(a3 + 16) == 0) {
    return &game_GameReliance_Impl_Data_vtable_ptr;
  }
  v5 = *(_QWORD**)(a1 + 8);
  v6 = GameReliance_8e17a0(v5, a2, a3);
  if ((v6 & 0x80000000) != 0) {
    return &game_GameReliance_Impl_Data_vtable_ptr;
  }
  else {
    return (__int64 (***)(void))(v5[1] + 56LL * v6);
  }
}

__int64 GameReliance_8e17a0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64** v14;
  __int64* v15;
  __int64 result;
  unsigned __int64 v17;
  __int64 v18;

  v3 = *(_QWORD*)(a2 + 16);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a3 + 16);
    if (v4 != 0) {
      v5 = *(unsigned __int16*)(v3 + 16);
      v6 = *(unsigned __int16*)(v4 + 16);
      HIDWORD(v8) = v5 | (v6 << 16);
      LODWORD(v8) = HIDWORD(v8);
      v7 = v8 >> 16;
      v9 = v5 >= v6 ? (unsigned int)v7 : v5 | (v6 << 16);
      v10 = a1[5];
      if (v10 != 0 && a1[7] != 0) {
        v12 = v10 - 1;
        if ((v10 & (v10 - 1)) != 0) {
          v13 = v9;
          if (v10 <= v9) {
            v13 = (unsigned int)v9 % (unsigned int)v10;
          }
        }
        else {
          v13 = ((_DWORD)v10 - 1) & (unsigned int)v9;
        }
        v14 = *(__int64***)(a1[4] + 8 * v13);
        if (v14 != nullptr) {
          v15 = *v14;
          if (v15 != nullptr) {
            result = 0xFFFFFFFFLL;
            if ((v10 & v12) == 0) {
              while (1) {
                v18 = v15[1];
                if (v18 == v9) {
                  if (*((_DWORD*)v15 + 4) == (_DWORD)v9) {
                    return *((unsigned int*)v15 + 5);
                  }
                }
                else if ((v18 & v12) != v13) {
                  return 0xFFFFFFFFLL;
                }
                v15 = (__int64*)*v15;
                if (v15 == nullptr) {
                  return result;
                }
              }
            }
            while (1) {
              v17 = v15[1];
              if (v17 == v9) {
                if (*((_DWORD*)v15 + 4) == (_DWORD)v9) {
                  return *((unsigned int*)v15 + 5);
                }
              }
              else {
                if (v17 >= v10) {
                  v17 %= v10;
                }
                if (v17 != v13) {
                  return 0xFFFFFFFFLL;
                }
              }
              v15 = (__int64*)*v15;
              if (v15 == nullptr) {
                return result;
              }
            }
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}

__int64 GameReliance_8e18b0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  char v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v23;

  v3 = (_QWORD*)*a2;
  if (*a2 == 0) {
    goto LABEL_38;
  }
  v4 = (_QWORD*)*a3;
  if (*a3 == 0) {
    goto LABEL_38;
  }
  v5 = v3[49];
  if (v5 != 0) {
    v5 = *(_QWORD*)(v5 + 272);
    if (v5 != 0) {
      v6 = v3[55];
      if (v6 != 0) {
        v7 = *(_BYTE*)(v6 + 16);
      }
      else {
        v7 = 9;
      }
      if (((1 << v7) & 0xF1) == 0) {
        goto LABEL_10;
      }
      v8 = a1;
      v9 = a2;
      v10 = a3;
      v11 = game_g_shared_system_skills_ptr;
      v23 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if (game_HasSkill(v3 + 218, &v23)) {
        goto LABEL_10;
      }
      v12 = game_820d50(3);
      if (game_GameModeData_instance_ != 0) {
        v13 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v12);
        if (v13 != 0 && *(_DWORD*)(v13 + 32) != 0) {
          goto LABEL_10;
        }
      }
      v5 = v4[49];
      if (v5 != 0) {
        v5 = *(_QWORD*)(v5 + 272);
        if (v5 != 0) {
          v14 = v4[55];
          if (v14 != 0) {
            v15 = *(_BYTE*)(v14 + 16);
          }
          else {
            v15 = 9;
          }
          if (((1 << v15) & 0xF1) != 0) {
            v23 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v11) & 0xFFF;
            if (!game_HasSkill(v4 + 218, &v23)) {
              v16 = game_820d50(3);
              if (game_GameModeData_instance_ == 0 ||
                  (v17 = game_GameVariableTable_Find_alt1(
                       *(_QWORD**)(game_GameModeData_instance_ + 48),
                       (unsigned __int64*)v16)) == 0 ||
                  *(_DWORD*)(v17 + 32) == 0) {
                v23 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) + v11) & 0xFFF;
                if (!game_HasSkill(v3 + 218, &v23)) {
                  v23 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) + v11) & 0xFFF;
                  if (!game_HasSkill(v4 + 218, &v23)) {
                    v18 = v3[55];
                    if (v18 != 0) {
                      v19 = *(unsigned __int8*)(v18 + 16);
                    }
                    else {
                      v19 = 9;
                    }
                    v20 = v4[55];
                    a3 = v10;
                    a2 = v9;
                    a1 = v8;
                    if (v20 != 0) {
                      v21 = *(unsigned __int8*)(v20 + 16);
                    }
                    else {
                      v21 = 9;
                    }
                    if (v19 == v21) {
                      goto LABEL_38;
                    }
                    if (v19 != 0) {
                      LODWORD(v5) = 0;
                      if (v19 != 3 || v21 != 0) {
                        return (unsigned int)v5;
                      }
                    LABEL_38:
                      LODWORD(v5) = (int)GameReliance_8e17a0(a1, (__int64)a2,
                                                             (__int64)a3) >= 0;
                      return (unsigned int)v5;
                    }
                    if (v21 == 3) {
                      goto LABEL_38;
                    }
                  }
                }
              }
            }
          }
        LABEL_10:
          LODWORD(v5) = 0;
        }
      }
    }
  }
  return (unsigned int)v5;
}

void game_GameReliance_Impl_EachPlayer(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64* v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64** v16;
  __int64** v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  __int64** v29;
  struct {
    __int64* v30;
    __int64 v31;
  } v30_;

  v30_.v30 = nullptr;
  v30_.v31 = 0;
  v4 = v27_.v27;
  v29 = &v30_.v30;
  LODWORD(v27_.v27[0]) = 241;
  v5 = (_QWORD*)game_UnitPool_GetFirst_alt1((int*)v27_.v27);
  if (v5 != nullptr) {
    v6 = v5[54];
    if (v6 == 0) {
      v6 = v5[55];
      if (v6 != 0) {
        v7 = *(unsigned __int8*)(v6 + 16);
        if (v7 <= 8) {
          while (1) {
            v26 = v7 + 1;
            if (((2 << v7) & 0xF0) != 0) {
              v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v7 + 1) + 556000);
              if (v6 != 0) {
                break;
              }
            }
            v7 = v26;
            if (v26 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v6 = 0;
        }
      }
    }
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
    LABEL_8:
      v9 = (_QWORD*)v6;
      v10 = v5[49];
      if (v10 == 0) {
        goto LABEL_20;
      }
      v11 = *(unsigned __int64**)(v10 + 272);
      if (v11 == nullptr) {
        goto LABEL_20;
      }
      v12 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v8, 40, 16, 0);
      v13 = *v11;
      v14 = v30_.v30;
      v15 = v12;
      v16 = &v30_.v30;
      v17 = &v30_.v30;
      v12[4] = *v11;
      if (v14 == nullptr) {
        break;
      }
      while (1) {
        while (1) {
          v18 = v14[4];
          v17 = (__int64**)v14;
          if (v13 >= v18) {
            break;
          }
          v14 = (__int64*)*v14;
          v16 = v17;
          if (*v17 == nullptr) {
            goto LABEL_17;
          }
        }
        if (v18 >= v13) {
          break;
        }
        v14 = (__int64*)v14[1];
        if (v14 == nullptr) {
          v16 = v17 + 1;
          goto LABEL_17;
        }
      }
      v22 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v22, (__int64)v12);
      if (v9 == nullptr) {
        goto LABEL_32;
      }
    LABEL_21:
      v6 = v9[54];
      v5 = v9;
      if (v6 == 0) {
        v19 = v9[55];
        v5 = v9;
        if (v19 != 0) {
          v20 = *(unsigned __int8*)(v19 + 16);
          v6 = 0;
          v5 = v9;
          if (v20 <= 8) {
            while (1) {
              v21 = v20 + 1;
              if (((2 << v20) & 0xF0) != 0) {
                v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v20 + 1) + 556000);
                if (v6 != 0) {
                  break;
                }
              }
              ++v20;
              if (v21 == 9) {
                v6 = 0;
                v5 = v9;
                goto LABEL_8;
              }
            }
            v5 = v9;
          }
        }
      }
    }
  LABEL_17:
    *v12 = 0;
    v12[1] = 0;
    v12[2] = (__int64)v17;
    *v16 = v12;
    if (*v29 != nullptr) {
      v29 = (__int64**)*v29;
      v15 = *v16;
    }
    fw_containers_BalanceAfterInsert_alt1(v30_.v30, v15);
    ++v30_.v31;
  LABEL_20:
    if (v9 == nullptr) {
      goto LABEL_32;
    }
    goto LABEL_21;
  }
LABEL_32:
  v27_.v27[2] = a2;
  v24 = *(_QWORD*)(a1 + 8);
  v23 = *(_QWORD*)(a1 + 16);
  v27_.v28 = v27_.v27;
  v27_.v27[0] = GameData_1fab540;
  v27_.v27[1] = &v29;
  if (v24 == v23) {
    goto LABEL_38;
  }
  do {
    if (v27_.v28 == nullptr) {
      GameRoutine_60a310_alt1();
    }
    (*(void (**)(_QWORD*, __int64))(*v27_.v28 + 48LL))(v27_.v28, v24);
    v24 += 56;
  } while (v24 != v23);
  v4 = v27_.v28;
  if (v27_.v28 == v27_.v27) {
  LABEL_38:
    v25 = 32;
    goto LABEL_39;
  }
  if (v27_.v28 != nullptr) {
    v25 = 40;
  LABEL_39:
    (*(void (**)(_QWORD*))(*v4 + v25))(v4);
  }
  GameRoutine_68c910_alt1((__int64)&v29, v30_.v30);
}

void game_GameReliance_Impl_EachScore(__int64 a1, char a2, __int64 a3)
{
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  char v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64* v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64** v21;
  __int64** v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int* v28;
  int* v29;
  unsigned __int64 v30;
  __int64 v31;
  int* v32;
  __int64 v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  struct {
    _QWORD v52[4];
    _QWORD* v53;
  } v52_;
  struct {
    int* v54;
    int* v55;
    __int64 v56;
  } v54_;
  __int64** v57;
  struct {
    __int64* v58;
    __int64 v59;
  } v58_;

  v58_.v58 = nullptr;
  v58_.v59 = 0;
  v5 = v52_.v52;
  v57 = &v58_.v58;
  LODWORD(v52_.v52[0]) = 15;
  v6 = (_QWORD*)game_UnitPool_GetFirst_alt1((int*)v52_.v52);
  if (v6 != nullptr) {
    v7 = v6[54];
    if (v7 == 0) {
      v7 = v6[55];
      if (v7 != 0) {
        v8 = *(unsigned __int8*)(v7 + 16);
        if (v8 <= 8) {
          v50 = 24LL * *(unsigned __int8*)(v7 + 16) + 556024;
          while (1) {
            if (v8 <= 2) {
              v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v50);
              if (v7 != 0) {
                break;
              }
            }
            ++v8;
            v50 += 24;
            if (v8 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v7 = 0;
        }
      }
    }
    while (1) {
    LABEL_8:
      v9 = (_QWORD*)v7;
      v10 = v6[55];
      if (v10 != 0) {
        v11 = *(_BYTE*)(v10 + 16);
      }
      else {
        v11 = 9;
      }
      if (((1 << v11) & 6) == 0) {
        v15 = v6[49];
        if (v15 != 0) {
          v16 = *(unsigned __int64**)(v15 + 272);
          if (v16 != nullptr) {
            v17 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
            v18 = *v16;
            v19 = v58_.v58;
            v20 = v17;
            v21 = &v58_.v58;
            v22 = &v58_.v58;
            v17[4] = *v16;
            if (v19 != nullptr) {
              while (1) {
                while (1) {
                  v23 = v19[4];
                  v22 = (__int64**)v19;
                  if (v18 >= v23) {
                    break;
                  }
                  v19 = (__int64*)*v19;
                  v21 = v22;
                  if (*v22 == nullptr) {
                    goto LABEL_30;
                  }
                }
                if (v23 >= v18) {
                  break;
                }
                v19 = (__int64*)v19[1];
                if (v19 == nullptr) {
                  v21 = v22 + 1;
                  goto LABEL_30;
                }
              }
              v24 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v24 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v17);
            }
            else {
            LABEL_30:
              *v17 = 0;
              v17[1] = 0;
              v17[2] = (__int64)v22;
              *v21 = v17;
              if (*v57 != nullptr) {
                v57 = (__int64**)*v57;
                v20 = *v21;
              }
              fw_containers_BalanceAfterInsert_alt1(v58_.v58, v20);
              ++v58_.v59;
            }
          }
        }
      }
      if (v9 == nullptr) {
        break;
      }
      v7 = v9[54];
      v6 = v9;
      if (v7 == 0) {
        v12 = v9[55];
        v6 = v9;
        if (v12 != 0) {
          v13 = *(unsigned __int8*)(v12 + 16);
          v7 = 0;
          v6 = v9;
          if (v13 <= 8) {
            v14 = 24LL * (unsigned int)v13 + 556024;
            while (1) {
              if (v13 <= 2) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v14);
                if (v7 != 0) {
                  break;
                }
              }
              ++v13;
              v14 += 24;
              if (v13 == 9) {
                v7 = 0;
                v6 = v9;
                goto LABEL_8;
              }
            }
            v6 = v9;
          }
        }
      }
    }
  }
  v26 = *(_QWORD*)(a1 + 8);
  v25 = *(_QWORD*)(a1 + 16);
  v54_.v55 = nullptr;
  v54_.v56 = 0;
  v54_.v54 = nullptr;
  v52_.v53 = v52_.v52;
  v52_.v52[0] = GameData_1fab5d0;
  v52_.v52[1] = &v57;
  v52_.v52[2] = &v54_.v54;
  if (v26 == v25) {
    goto LABEL_42;
  }
  do {
    if (v52_.v53 == nullptr) {
      goto LABEL_75;
    }
    (*(void (**)(_QWORD*, __int64))(*v52_.v53 + 48LL))(v52_.v53, v26);
    v26 += 56;
  } while (v26 != v25);
  v5 = v52_.v53;
  if (v52_.v53 == v52_.v52) {
  LABEL_42:
    v27 = 32;
  }
  else {
    if (v52_.v53 == nullptr) {
      goto LABEL_44;
    }
    v27 = 40;
  }
  (*(void (**)(_QWORD*))(*v5 + v27))(v5);
LABEL_44:
  v28 = v54_.v54;
  v29 = v54_.v55;
  v52_.v52[0] = a1;
  if (v54_.v55 - v54_.v54 < 129) {
    v33 = 0;
  LABEL_50:
    GameHr_8e33a0(v28, v29, (__int64)v52_.v52, v29 - v28, nullptr, v33);
  }
  else {
    v30 = v54_.v55 - v54_.v54;
    v31 = GameData_212c060;
    while (1) {
      v32 = (int*)GameRoutine_1a09d20_alt1(4 * v30, v31);
      if (v32 != nullptr) {
        break;
      }
      v33 = v30 >> 1;
      v34 = v30 > 1;
      v30 >>= 1;
      if (!v34) {
        goto LABEL_50;
      }
    }
    v35 = (__int64)v32;
    GameHr_8e33a0(v28, v29, (__int64)v52_.v52, v29 - v28, v32, v30);
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v35);
  }
  v37 = (char*)v54_.v55 - (char*)v54_.v54;
  v38 = (unsigned __int64)((char*)v54_.v55 - (char*)v54_.v54) >> 2;
  if ((_DWORD)v38 != 0) {
    if ((a2 & 1) != 0) {
      if ((int)v38 >= 1) {
        v39 = ((v37 >> 2) & 0x7FFFFFFF) - 1;
        do {
          v40 = *(_QWORD*)(a1 + 8);
          v41 = *(_QWORD*)(a3 + 32);
          v42 = v54_.v54[v39];
          LODWORD(v52_.v52[0]) = v39;
          if (v41 == 0) {
            goto LABEL_75;
          }
          (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)v41 + 48LL))(
              v41, v40 + 56LL * v42, v52_.v52);
          v43 = v39-- + 1;
        } while (v43 > 1);
      }
    }
    else if ((int)v38 >= 1) {
      v44 = (v37 >> 2) & 0x7FFFFFFF;
      v45 = 0;
      while (1) {
        v46 = *(_QWORD*)(a1 + 8);
        v47 = *(_QWORD*)(a3 + 32);
        v48 = v54_.v54[v45];
        LODWORD(v52_.v52[0]) = v45;
        if (v47 == 0) {
          break;
        }
        (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)v47 + 48LL))(
            v47, v46 + 56LL * v48, v52_.v52);
        if (v44 == ++v45) {
          goto LABEL_65;
        }
      }
    LABEL_75:
      GameRoutine_60a310_alt1();
    }
  }
LABEL_65:
  if (v54_.v54 != nullptr) {
    v54_.v55 = v54_.v54;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, (__int64)v54_.v54);
  }
  GameRoutine_68c910_alt1((__int64)&v57, v58_.v58);
}

__int64 GameReliance_8e2280(__int64 a1, __int64 a2)
{
  int v4;
  __int64 (**v5)(__int64, int*);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 i;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v27;

  v4 = game_HashString32("GameReliance");
  v5 = *(__int64 (***)(__int64, int*))a2;
  v27 = v4;
  if (((*v5)(a2, &v27) & 1) != 0) {
    v6 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v6 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 2;
    v7 = 0x6DB6DB6DB6DB6DB7LL *
         ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 3);
    v8 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v7;
    v9 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = BYTE1(v7);
    v10 = *(_QWORD*)(a1 + 8);
    for (i = *(_QWORD*)(a1 + 16); v10 != i;
         *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = HIBYTE(v22)) {
      v12 = *(int*)(a2 + 20);
      v13 = *(_DWORD*)(v10 + 48);
      *(_DWORD*)(a2 + 20) = v12 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v13;
      v14 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v14 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE1(v13);
      v15 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v15 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE2(v13);
      v16 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v16 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = HIBYTE(v13);
      v17 = *(int*)(a2 + 20);
      LOWORD(v13) = *(_WORD*)(v10 + 12);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v13;
      v18 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v18 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE1(v13);
      v19 = *(int*)(a2 + 20);
      LOWORD(v13) = *(_WORD*)(v10 + 14);
      *(_DWORD*)(a2 + 20) = v19 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v13;
      v20 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v20 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE1(v13);
      v21 = *(int*)(a2 + 20);
      v22 = *(_DWORD*)(v10 + 16);
      v10 += 56;
      *(_DWORD*)(a2 + 20) = v21 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v22;
      v23 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v23 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = BYTE1(v22);
      v24 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v24 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = BYTE2(v22);
      v25 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v25 + 1;
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 GameReliance_8e24a0(_QWORD* a1, __int64* a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int i;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64** v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  unsigned __int64 v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int16 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  int v47;

  v4 = game_HashString32("GameReliance");
  v5 = *a2;
  v47 = v4;
  if (((*(__int64 (**)(__int64*, int*))(v5 + 16))(a2, &v47) & 1) != 0) {
    v6 = *((int*)a2 + 5);
    v7 = a2[1];
    *((_DWORD*)a2 + 5) = v6 + 1;
    v8 = *(unsigned __int8*)(v7 + v6);
    *((_DWORD*)a2 + 5) = v6 + 2;
    v9 = *(unsigned __int8*)(v7 + v6 + 1);
    *((_DWORD*)a2 + 5) = v6 + 3;
    v10 = v9 | (*(unsigned __int8*)(v7 + v6 + 2) << 8);
    if (v10 != 0) {
      for (i = 0; i != v10; ++i) {
        v12 = *((int*)a2 + 5);
        v13 = a2[1];
        *((_DWORD*)a2 + 5) = v12 + 1;
        v14 = *(unsigned __int8*)(v13 + v12);
        *((_DWORD*)a2 + 5) = v12 + 2;
        v15 = *(unsigned __int8*)(v13 + v12 + 1);
        *((_DWORD*)a2 + 5) = v12 + 3;
        v16 = *(unsigned __int8*)(v13 + v12 + 2);
        *((_DWORD*)a2 + 5) = v12 + 4;
        v17 = a1[10];
        if (v17 == 0 || a1[12] == 0) {
          goto LABEL_28;
        }
        v19 = v14 | (v15 << 8);
        v20 = v17 - 1;
        v21 = v19 | (v16 << 16) | (*(unsigned __int8*)(v13 + v12 + 3) << 24);
        if ((v17 & (v17 - 1)) != 0) {
          v22 = v21;
          if (v17 <= v21) {
            v22 = (unsigned int)v21 % (unsigned int)v17;
          }
        }
        else {
          v22 = ((_DWORD)v17 - 1) & (unsigned int)v21;
        }
        v23 = *(__int64***)(a1[9] + 8 * v22);
        if (v23 == nullptr || (v24 = *v23) == nullptr) {
        LABEL_28:
          *((_DWORD*)a2 + 5) = v12 + 6;
          if (v8 != 0) {
            *((_DWORD*)a2 + 5) = v12 + 8;
            if (v8 != 1) {
              *((_DWORD*)a2 + 5) = v12 + 12;
            }
          }
          continue;
        }
        if ((v17 & v20) == 0) {
          while (1) {
            v26 = v24[1];
            if (v26 == v21) {
              if (*((_DWORD*)v24 + 4) == (_DWORD)v21) {
                goto LABEL_31;
              }
            }
            else if ((v26 & v20) != v22) {
              goto LABEL_28;
            }
            v24 = (__int64*)*v24;
            if (v24 == nullptr) {
              goto LABEL_28;
            }
          }
        }
        while (1) {
          v25 = v24[1];
          if (v25 == v21) {
            break;
          }
          if (v25 >= v17) {
            v25 %= v17;
          }
          if (v25 != v22) {
            goto LABEL_28;
          }
        LABEL_18:
          v24 = (__int64*)*v24;
          if (v24 == nullptr) {
            goto LABEL_28;
          }
        }
        if (*((_DWORD*)v24 + 4) != (_DWORD)v21) {
          goto LABEL_18;
        }
      LABEL_31:
        v27 = a1[1] + 56LL * *((int*)v24 + 5);
        *(_BYTE*)(v27 + 11) = 1;
        *(_QWORD*)(v27 + 12) = 0;
        v28 = *((int*)a2 + 5);
        v29 = a2[1];
        *((_DWORD*)a2 + 5) = v28 + 1;
        v30 = *(unsigned __int8*)(v29 + v28);
        *((_DWORD*)a2 + 5) = v28 + 2;
        v31 = v30 | (*(unsigned __int8*)(v29 + v28 + 1) << 8);
        *(_WORD*)(v27 + 12) = v31;
        v32 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
        if ((int)v32 < 1) {
          LOBYTE(v33) = 0;
        LABEL_44:
          *(_BYTE*)(v27 + 11) = v33;
          if (v8 != 0) {
          LABEL_47:
            v38 = *((int*)a2 + 5);
            v39 = a2[1];
            *((_DWORD*)a2 + 5) = v38 + 1;
            v40 = *(unsigned __int8*)(v39 + v38);
            *((_DWORD*)a2 + 5) = v38 + 2;
            *(_WORD*)(v27 + 14) =
                v40 | (*(unsigned __int8*)(v39 + v38 + 1) << 8);
            if (v8 != 1) {
              v41 = *((int*)a2 + 5);
              v42 = a2[1];
              *((_DWORD*)a2 + 5) = v41 + 1;
              v43 = *(unsigned __int8*)(v42 + v41);
              *((_DWORD*)a2 + 5) = v41 + 2;
              v44 = v43 | (*(unsigned __int8*)(v42 + v41 + 1) << 8);
              *((_DWORD*)a2 + 5) = v41 + 3;
              v45 = *(unsigned __int8*)(v42 + v41 + 2);
              *((_DWORD*)a2 + 5) = v41 + 4;
              *(_DWORD*)(v27 + 16) = v44 | (v45 << 16) |
                                     (*(unsigned __int8*)(v42 + v41 + 3) << 24);
            }
          }
        }
        else {
          v33 = 0;
          v34 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v32 - 1));
          if (v34 >= v31) {
            v34 = v31;
          }
          if (*(_DWORD*)GameData_21d99c8 <= v31) {
            v35 = v34;
          }
          else {
            v35 = *(_DWORD*)GameData_21d99c8;
          }
          while (1) {
            v36 = (unsigned int)(v33 + v32) >> 1;
            v37 = *(_DWORD*)(GameData_21d99c8 + 4LL * v36);
            if (v35 == v37) {
              break;
            }
            if (v35 < v37) {
              LODWORD(v32) = (unsigned int)(v33 + v32) >> 1;
            }
            else {
              v33 = v36 + 1;
            }
            if (v33 >= (int)v32) {
              goto LABEL_44;
            }
          }
          *(_BYTE*)(v27 + 11) = v36 + 1;
          if (v8 != 0) {
            goto LABEL_47;
          }
        }
      }
    }
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

unsigned __int64 GameReliance_8e2ee0(unsigned __int64 result, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  int* v11;
  int* v12;
  __int64 v13;
  int v14;
  unsigned int v15;

  v2 = *(_QWORD*)(result + 120);
  if (v2 == 0 || *(_QWORD*)(result + 136) == 0) {
    return 0;
  }
  v4 = v2 - 1;
  v5 = **(_QWORD**)(a2 + 16);
  if ((v2 & (v2 - 1)) != 0) {
    v6 = **(_QWORD**)(a2 + 16);
    if (v5 >= v2) {
      v6 = v5 % v2;
    }
  }
  else {
    v6 = v4 & v5;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(result + 112) + 8 * v6);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = (_QWORD*)*v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v2 & v4) == 0) {
    while (1) {
      v10 = v8[1];
      if (v5 == v10) {
        if (v8[2] == v5) {
          goto LABEL_25;
        }
      }
      else if ((v10 & v4) != v6) {
        return 0;
      }
      v8 = (_QWORD*)*v8;
      if (v8 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v5 == v9) {
      break;
    }
    if (v9 >= v2) {
      v9 %= v2;
    }
    if (v9 != v6) {
      return 0;
    }
  LABEL_14:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (v8[2] != v5) {
    goto LABEL_14;
  }
LABEL_25:
  v11 = (int*)v8[3];
  v12 = (int*)v8[4];
  if (v11 == v12) {
    return 0;
  }
  v13 = *(_QWORD*)(result + 8);
  LODWORD(result) = 0;
  do {
    v14 = *v11++;
    v15 = *(_DWORD*)(v13 + 56LL * v14 + 16);
    if ((unsigned int)result <= v15) {
      result = v15;
    }
    else {
      result = (unsigned int)result;
    }
  } while (v11 != v12);
  return result;
}

__int64 game_GameReliance_Impl_EachPlayer_closure_Invoke(__int64 result,
                                                         __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;

  v2 = *(_QWORD*)(result + 8);
  v5 = *(_QWORD*)(v2 + 8);
  v3 = v2 + 8;
  v4 = v5;
  if (v5 != 0) {
    v6 = v3;
    v7 = v4;
    v8 = **(_QWORD**)(a2 + 24);
    do {
      v9 = *(_QWORD*)(v7 + 32);
      v10 = v9 >= v8;
      if (v9 >= v8) {
        v11 = 0;
      }
      else {
        v11 = 8;
      }
      if (v10) {
        v6 = v7;
      }
      v7 = *(_QWORD*)(v7 + v11);
    } while (v7 != 0);
    if (v6 != v3 && v8 >= *(_QWORD*)(v6 + 32)) {
      v12 = v3;
      v13 = **(_QWORD**)(a2 + 32);
      do {
        v14 = *(_QWORD*)(v4 + 32);
        v15 = v14 >= v13;
        if (v14 >= v13) {
          v16 = 0;
        }
        else {
          v16 = 8;
        }
        if (v15) {
          v12 = v4;
        }
        v4 = *(_QWORD*)(v4 + v16);
      } while (v4 != 0);
      if (v12 != v3 && v13 >= *(_QWORD*)(v12 + 32)) {
        v17 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
        if (v17 == 0) {
          GameRoutine_60a310(0, a2);
        }
        return (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 48LL))(v17);
      }
    }
  }
  return result;
}

__int64 game_GameReliance_Impl_EachScore_closure_Invoke(__int64 result,
                                                        __int64 a2)
{
  int v2;
  __int64 v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;

  if (*(_WORD*)(a2 + 14) != 0) {
    v2 = *(__int16*)(a2 + 8);
    v3 = *(_QWORD*)(result + 16);
    v4 = &v22;
    v22 = v2;
    return GameRoutine_6e5900(v3, v4);
  }
  v5 = *(_QWORD*)(result + 8);
  v8 = *(_QWORD*)(v5 + 8);
  v6 = v5 + 8;
  v7 = v8;
  if (v8 != 0) {
    v9 = v6;
    v10 = v7;
    v11 = **(_QWORD**)(a2 + 24);
    do {
      v12 = *(_QWORD*)(v10 + 32);
      v13 = v12 >= v11;
      if (v12 >= v11) {
        v14 = 0;
      }
      else {
        v14 = 8;
      }
      if (v13) {
        v9 = v10;
      }
      v10 = *(_QWORD*)(v10 + v14);
    } while (v10 != 0);
    if (v9 != v6 && v11 >= *(_QWORD*)(v9 + 32)) {
      v15 = v6;
      v16 = **(_QWORD**)(a2 + 32);
      do {
        v17 = *(_QWORD*)(v7 + 32);
        v18 = v17 >= v16;
        if (v17 >= v16) {
          v19 = 0;
        }
        else {
          v19 = 8;
        }
        if (v18) {
          v15 = v7;
        }
        v7 = *(_QWORD*)(v7 + v19);
      } while (v7 != 0);
      if (v15 != v6 && v16 >= *(_QWORD*)(v15 + 32)) {
        v3 = *(_QWORD*)(result + 16);
        v20 = *(__int16*)(a2 + 8);
        v4 = &v21;
        v21 = v20;
        return GameRoutine_6e5900(v3, v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
