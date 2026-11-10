#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) GameReliance_IData_DeletingDestructor()
{
  __udf(0x8002u);
};
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
__int64 GameReliance_8e0880(__int64 result);
unsigned __int64 GameReliance_8e15e0(unsigned __int64 result, __int64 a2);
__int64 GameReliance_8e17a0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 game_GameReliance_Impl_EachPlayer(__int64 a1, __int64 a2);
__int64 game_GameReliance_Impl_EachScore(__int64 a1, char a2, __int64 a3);
__int64 GameReliance_8e2280(__int64 a1, __int64 a2);
__int64 GameReliance_8e24a0(_QWORD* a1, __int64* a2);
unsigned __int64 GameReliance_8e2ee0(unsigned __int64 result, __int64 a2);
__int64 game_GameReliance_Impl_EachPlayer_closure_Invoke(__int64 result,
                                                         __int64 a2);
__int64 game_GameReliance_Impl_EachScore_closure_Invoke(__int64 result,
                                                        __int64 a2);
__int64 (***GameReliance_8e1730(__int64 a1, __int64 a2, __int64 a3))();

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

__int64 GameReliance_8e0880(__int64 result)
{
  __int64 (***v1)(_QWORD);
  __int64 (***v2)(_QWORD);
  __int64 v3;
  __int64 (***v4)(_QWORD);
  __int64 (***v5)(_QWORD);
  __int64 (**v6)(_QWORD);
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
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  unsigned __int64 v57;
  char* v58;
  unsigned __int64 v59;
  int v60;
  char* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 i;
  int v65;
  char* v66;
  unsigned __int64 v67;
  unsigned __int8* v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  unsigned __int64 v78;
  int v79;
  char v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  void (***v95)(_QWORD);
  __int64 v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  _QWORD* v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  void (**v112)(__int64);
  __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64** v117;
  __int64* v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  bool v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64** v125;
  __int64* v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  void* v131;
  unsigned __int64 v132;
  _QWORD* v133;
  unsigned __int64 v134;
  _QWORD* v135;
  __int64* v136;
  __int64* v137;
  __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  char* v141;
  __int64 (***v142)();
  int v143;
  unsigned __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  unsigned __int64* v151;
  __int128 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int16 v157;
  char v158;
  __int64 v159;
  _QWORD v160[2];
  __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  char* v164;

  v2 = *(__int64 (****)(_QWORD))(result + 8);
  v1 = *(__int64 (****)(_QWORD))(result + 16);
  v3 = result;
  if (v2 != v1) {
    v4 = v1 - 7;
    v5 = v1 - 7;
    do {
      v6 = *v5;
      v5 -= 7;
      result = (*v6)(v4);
      v122 = v4 == v2;
      v4 = v5;
    } while (!v122);
  }
  *(_QWORD*)(v3 + 16) = v2;
  v7 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(v3 + 56) != 0) {
    v8 = *(_QWORD**)(v3 + 48);
    if (v8 != nullptr) {
      do {
        v9 = (_QWORD*)*v8;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v10);
        v8 = v9;
      } while (v9 != nullptr);
    }
    v11 = *(_QWORD*)(v3 + 40);
    *(_QWORD*)(v3 + 48) = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v13) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v13 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v13 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v13 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v13 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v13 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v13 + 48) = 0;
          v15 = *(_QWORD*)(v3 + 32) + 8 * v13;
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
          *(_QWORD*)(*(_QWORD*)(v3 + 32) + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    *(_QWORD*)(v3 + 56) = 0;
  }
  if (*(_QWORD*)(v3 + 96) != 0) {
    v17 = *(_QWORD**)(v3 + 88);
    if (v17 != nullptr) {
      do {
        v18 = (_QWORD*)*v17;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v19);
        v17 = v18;
      } while (v18 != nullptr);
    }
    v20 = *(_QWORD*)(v3 + 80);
    *(_QWORD*)(v3 + 88) = 0;
    if (v20 != 0) {
      v21 = v20 & 7;
      if (v20 >= 8) {
        v23 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        v22 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 72) + 8 * v22) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 72) + 8 * v22 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 72) + 8 * v22 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 72) + 8 * v22 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 72) + 8 * v22 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 72) + 8 * v22 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 72) + 8 * v22 + 48) = 0;
          v24 = *(_QWORD*)(v3 + 72) + 8 * v22;
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
          *(_QWORD*)(*(_QWORD*)(v3 + 72) + v25) = 0;
          v25 += 8;
        } while (v21 != 0);
      }
    }
    *(_QWORD*)(v3 + 96) = 0;
  }
  if (*(_QWORD*)(v3 + 136) != 0) {
    v26 = *(_QWORD**)(v3 + 128);
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
          nn_mem_StandardAllocator_Free(v30 + v31);
        }
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v27 = 128;
        }
        else {
          v27 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v27);
        v26 = v28;
      } while (v28 != nullptr);
    }
    v32 = *(_QWORD*)(v3 + 120);
    *(_QWORD*)(v3 + 128) = 0;
    if (v32 != 0) {
      v33 = v32 & 7;
      if (v32 >= 8) {
        v35 = v32 & 0xFFFFFFFFFFFFFFF8LL;
        v34 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 112) + 8 * v34) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 112) + 8 * v34 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 112) + 8 * v34 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 112) + 8 * v34 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 112) + 8 * v34 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 112) + 8 * v34 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 112) + 8 * v34 + 48) = 0;
          v36 = *(_QWORD*)(v3 + 112) + 8 * v34;
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
          *(_QWORD*)(*(_QWORD*)(v3 + 112) + v37) = 0;
          v37 += 8;
        } while (v33 != 0);
      }
    }
    *(_QWORD*)(v3 + 136) = 0;
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
    v147 = v41 + 1;
    v148 = v42;
    v149 = v41;
    do {
      v46 = *(_QWORD*)(v3 + 8);
      v45 = *(_QWORD*)(v3 + 16);
      *(_QWORD*)((char*)&v152 + 4) = 0;
      v153 = 0;
      v154 = 0;
      v155 = v3;
      v156 = 0;
      v150 = 0x6DB6DB6DB6DB6DB7LL * ((v45 - v46) >> 3);
      LOWORD(v152) = 28087 * ((v45 - v46) >> 3);
      WORD1(v152) = 256;
      v151 = (unsigned __int64*)game_GameReliance_Impl_Data_vtable;
      v47 = *(_QWORD*)(v39 + 8 * v41);
      v48 = *(_QWORD*)(v39 + 8 * v42);
      v158 = 0;
      v157 = 24322;
      v153 = v47;
      v154 = v48;
      v49 = *(_QWORD*)(v47 + 8);
      v50 = strlen(v49);
      v51 = (_QWORD*)GameRoutine_1a0a680(&v157, 0, v49, v50);
      v53 = v51[1];
      v52 = v51[2];
      v160[0] = *v51;
      v160[1] = v53;
      v161 = v52;
      v51[1] = 0;
      v51[2] = 0;
      *v51 = 0;
      v54 = *(_QWORD*)(v48 + 8);
      v55 = strlen(v54);
      result = GameRoutine_1a09ce0(v160, v54, v55);
      v56 = (char*)&v162 + 1;
      v162 = *(_QWORD*)result;
      v57 = *(_QWORD*)(result + 8);
      v163 = v57;
      v58 = *(char**)(result + 16);
      v164 = v58;
      *(_QWORD*)(result + 8) = 0;
      *(_QWORD*)(result + 16) = 0;
      *(_QWORD*)result = 0;
      if ((v162 & 1) != 0) {
        v56 = v58;
      }
      else {
        v57 = (unsigned __int64)(unsigned __int8)v162 >> 1;
      }
      if (v56 != nullptr) {
        if ((int)v57 < 8) {
          v62 = 0;
          v60 = -2128831035;
          if ((int)v57 <= 0) {
            goto LABEL_78;
          }
        }
        else {
          v59 = 7;
          v60 = -2128831035;
          do {
            v61 = &v56[v59];
            v59 += 8LL;
            v60 = (16777619 *
                   ((16777619 *
                     ((16777619 *
                       ((16777619 *
                         ((16777619 *
                           ((16777619 *
                             ((16777619 * ((16777619 * v60) ^
                                           (unsigned __int8)*(v61 - 7))) ^
                              (unsigned __int8)*(v61 - 6))) ^
                            (unsigned __int8)*(v61 - 5))) ^
                          (unsigned __int8)*(v61 - 4))) ^
                        (unsigned __int8)*(v61 - 3))) ^
                      (unsigned __int8)*(v61 - 2))) ^
                    (unsigned __int8)*(v61 - 1))) ^
                  (unsigned __int8)*v61;
          } while (v59 < (v57 & 0x7FFFFFFF));
          v62 = v57 & 0x7FFFFFF8;
          if ((int)(v57 & 0x7FFFFFF8) >= (int)v57) {
            goto LABEL_78;
          }
        }
        v63 = v57 & 7;
        for (i = v62; v63 != 0; v60 = (16777619 * v60) ^ v65) {
          v65 = (unsigned __int8)v56[i++];
          --v63;
        }
        if (v62 - (unsigned int)v57 <= 0xFFFFFFFFFFFFFFF8LL) {
          v66 = &v56[i];
          v67 = (unsigned int)v57 - i;
          v68 = (unsigned __int8*)(v66 + 3);
          do {
            v67 -= 8LL;
            v69 =
                (16777619 *
                 ((16777619 *
                   ((16777619 *
                     ((16777619 * ((16777619 * ((16777619 * ((16777619 * v60) ^
                                                             *(v68 - 3))) ^
                                                *(v68 - 2))) ^
                                   *(v68 - 1))) ^
                      *v68)) ^
                    v68[1])) ^
                  v68[2])) ^
                v68[3];
            v70 = v68[4];
            v68 += 8;
            v60 = (16777619 * v69) ^ v70;
          } while (v67 != 0);
        }
      LABEL_78:
        if (v60 != 0) {
          v71 = v60;
        }
        else {
          v71 = -1;
        }
        LODWORD(v156) = v71;
        if ((v162 & 1) == 0) {
          goto LABEL_86;
        }
        goto LABEL_82;
      }
      LODWORD(v156) = 0;
      if ((v162 & 1) != 0) {
      LABEL_82:
        if (v58 != nullptr) {
          v72 = 128;
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
            v72 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v72);
        }
      }
    LABEL_86:
      if ((v160[0] & 1) != 0 && v161 != 0) {
        v73 = 128;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
          v73 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v73);
      }
      if ((v157 & 1) != 0 && v159 != 0) {
        v74 = 128;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
          v74 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v74);
      }
      v75 = *(unsigned __int16*)(v47 + 16);
      v76 = *(unsigned __int16*)(v48 + 16);
      HIDWORD(v78) = v75 | (v76 << 16);
      LODWORD(v78) = HIDWORD(v78);
      v77 = v78 >> 16;
      if (v75 >= v76) {
        v79 = v77;
      }
      else {
        v79 = v75 | (v76 << 16);
      }
      HIDWORD(v156) = v79;
      v80 = *(_BYTE*)(*(_QWORD*)(v47 + 40) + *(unsigned __int16*)(v48 + 16));
      if (v80 == 0) {
        v80 = *(_BYTE*)(*(_QWORD*)(v48 + 40) + *(unsigned __int16*)(v47 + 16));
      }
      v82 = *(_QWORD*)(v3 + 16);
      v81 = *(_QWORD*)(v3 + 24);
      BYTE2(v152) = v80;
      if (v82 >= v81) {
        v87 = *(_QWORD*)(v3 + 8);
        v88 = v82 - v87;
        v89 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v82 - v87) >> 3) + 1;
        if (v89 > 0x492492492492492LL) {
          GameRoutine_8e2ec0(result);
        }
        v90 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v81 - v87) >> 3);
        if (2 * v90 > v89) {
          v89 = 2 * v90;
        }
        if (v90 >= 0x249249249249249LL) {
          v91 = 0x492492492492492LL;
        }
        else {
          v91 = v89;
        }
        if (v91 > 0x492492492492492LL) {
          GameRoutine_60a210(result);
        }
        v92 = *(_QWORD*)v7;
        v93 = v38;
        v94 = v7;
        v95 = *(void (****)(_QWORD))(v3 + 8);
        v96 = 56 * v91;
        v97 = fw_memory_HeapManager_Allocate(v92, 56 * v91, 16, 0);
        v98 = (_QWORD*)(v97 + v88);
        result = (__int64)v95;
        v99 = v152;
        v100 = v153;
        v101 = v154;
        v98[2] = *((_QWORD*)&v152 + 1);
        v98[3] = v100;
        *v98 = game_GameReliance_Impl_Data_vtable;
        v98[1] = v99;
        v102 = v155;
        v103 = v156;
        v98[4] = v101;
        v98[5] = v102;
        v98[6] = v103;
        if (v95 != (void (***)(_QWORD))v82) {
          v104 = v95;
          v105 = (_QWORD*)v97;
          do {
            v106 = v104[1];
            v107 = v104[2];
            v108 = v104[3];
            v109 = v104[4];
            *v105 = game_GameReliance_Impl_Data_vtable;
            v105[3] = v108;
            v105[4] = v109;
            v105[1] = v106;
            v105[2] = v107;
            v110 = v104[5];
            v111 = v104[6];
            v104 += 7;
            v105[5] = v110;
            v105[6] = v111;
            v105 += 7;
          } while (v104 != (_QWORD*)v82);
          do {
            v112 = *v95;
            v95 += 7;
            (*v112)(result);
            result = (__int64)v95;
          } while (v95 != (void (***)(_QWORD))v82);
          result = *(_QWORD*)(v3 + 8);
        }
        v86 = v98 + 7;
        v7 = v94;
        *(_QWORD*)(v3 + 8) = v97;
        *(_QWORD*)(v3 + 16) = v98 + 7;
        *(_QWORD*)(v3 + 24) = v97 + v96;
        if (result != 0) {
          v113 = 128;
          if (*(_QWORD*)(*(_QWORD*)v94 + 200LL) == 0) {
            v113 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v94 + v113);
        }
        v38 = v93;
      }
      else {
        *(_QWORD*)v82 = &GameData_1fab430;
        v83 = v153;
        v84 = v154;
        *(_OWORD*)(v82 + 8) = v152;
        *(_QWORD*)(v82 + 24) = v83;
        *(_QWORD*)(v82 + 32) = v84;
        *(_QWORD*)v82 = game_GameReliance_Impl_Data_vtable;
        v85 = v156;
        *(_QWORD*)(v82 + 40) = v155;
        *(_QWORD*)(v82 + 48) = v85;
        v86 = (_QWORD*)(v82 + 56);
      }
      *(_QWORD*)(v3 + 16) = v86;
      v114 = *(_QWORD*)(v3 + 40);
      if (v114 != 0 && *(_QWORD*)(v3 + 56) != 0) {
        v115 = v114 - 1;
        if ((v114 & (v114 - 1)) != 0) {
          v116 = HIDWORD(v156);
          if (v114 <= HIDWORD(v156)) {
            v116 = HIDWORD(v156) % (unsigned int)v114;
          }
        }
        else {
          v116 = (unsigned int)(v114 - 1) & HIDWORD(v156);
        }
        v117 = *(__int64***)(*(_QWORD*)(v3 + 32) + 8 * v116);
        if (v117 != nullptr) {
          v118 = *v117;
          if (v118 != nullptr) {
            if ((v114 & v115) == 0) {
              while (1) {
                v120 = v118[1];
                if (v120 == HIDWORD(v156)) {
                  if (*((_DWORD*)v118 + 4) == HIDWORD(v156)) {
                    goto LABEL_142;
                  }
                }
                else if ((v120 & v115) != v116) {
                  goto LABEL_141;
                }
                v118 = (__int64*)*v118;
                if (v118 == nullptr) {
                  goto LABEL_141;
                }
              }
            }
            do {
              v119 = v118[1];
              if (v119 == HIDWORD(v156)) {
                if (*((_DWORD*)v118 + 4) == HIDWORD(v156)) {
                  goto LABEL_142;
                }
              }
              else {
                if (v119 >= v114) {
                  v119 %= v114;
                }
                if (v119 != v116) {
                  break;
                }
              }
              v118 = (__int64*)*v118;
            } while (v118 != nullptr);
          }
        }
      }
    LABEL_141:
      v162 = (unsigned __int64)&v156 + 4;
      result = GameRoutine_818500(v3 + 32, (char*)&v156 + 4,
                                  std___1_piecewise_construct_ptr, &v162, v160);
      *(_DWORD*)(result + 20) = v150;
    LABEL_142:
      v121 = *(_QWORD*)(v3 + 80);
      v122 = v121 == 0 || *(_QWORD*)(v3 + 96) == 0;
      if (!v122) {
        v123 = v121 - 1;
        if ((v121 & (v121 - 1)) != 0) {
          v124 = (unsigned int)v156;
          if (v121 <= (unsigned int)v156) {
            v124 = (unsigned int)v156 % (unsigned int)v121;
          }
        }
        else {
          v124 = ((_DWORD)v121 - 1) & (unsigned int)v156;
        }
        v125 = *(__int64***)(*(_QWORD*)(v3 + 72) + 8 * v124);
        if (v125 != nullptr) {
          v126 = *v125;
          if (v126 != nullptr) {
            if ((v121 & v123) == 0) {
              while (1) {
                v128 = v126[1];
                if (v128 == (unsigned int)v156) {
                  if (*((_DWORD*)v126 + 4) == (_DWORD)v156) {
                    goto LABEL_166;
                  }
                }
                else if ((v128 & v123) != v124) {
                  goto LABEL_165;
                }
                v126 = (__int64*)*v126;
                if (v126 == nullptr) {
                  goto LABEL_165;
                }
              }
            }
            do {
              v127 = v126[1];
              if (v127 == (unsigned int)v156) {
                if (*((_DWORD*)v126 + 4) == (_DWORD)v156) {
                  goto LABEL_166;
                }
              }
              else {
                if (v127 >= v121) {
                  v127 %= v121;
                }
                if (v127 != v124) {
                  break;
                }
              }
              v126 = (__int64*)*v126;
            } while (v126 != nullptr);
          }
        }
      }
    LABEL_165:
      v162 = (unsigned __int64)&v156;
      result = GameRoutine_818500(v3 + 72, &v156,
                                  std___1_piecewise_construct_ptr, &v162, v160);
      *(_DWORD*)(result + 20) = v150;
    LABEL_166:
      ++v42;
      v39 = *(_QWORD*)(*v38 + 64);
      v40 = *(_QWORD*)(*v38 + 72);
      v41 = v149;
    } while ((int)v42 < (int)((unsigned __int64)(v40 - v39) >> 3));
    v43 = v147;
    v42 = v148;
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
  v129 = *(_QWORD*)(v3 + 8);
  v130 = *(_QWORD*)(v3 + 16);
  if (v129 != v130) {
    v131 = std___1_piecewise_construct_ptr;
    do {
      v132 = **(_QWORD**)(v129 + 24);
      v151 = &v162;
      v162 = v132;
      v133 = GameRoutine_89d820((float*)(v3 + 112), &v162, (__int64)v131,
                                (__int64**)&v151);
      LODWORD(v151) = *(__int16*)(v129 + 8);
      GameRoutine_6e5900(v133 + 3, &v151);
      v134 = **(_QWORD**)(v129 + 32);
      v151 = &v162;
      v162 = v134;
      v135 = GameRoutine_89d820((float*)(v3 + 112), &v162, (__int64)v131,
                                (__int64**)&v151);
      LODWORD(v151) = *(__int16*)(v129 + 8);
      result = GameRoutine_6e5900(v135 + 3, &v151);
      v129 += 56;
    } while (v129 != v130);
  }
  v136 = *(__int64**)(GameData_21c9ff0 + 64);
  v137 = *(__int64**)(GameData_21c9ff0 + 72);
  if (v136 != v137) {
    while (2) {
      v138 = *v136;
      if (*(_BYTE*)(*v136 + 82) == 0) {
        goto LABEL_173;
      }
      v139 = *(_QWORD*)(v138 + 40);
      v151 = nullptr;
      *(_QWORD*)&v152 = v139;
      if (v139 != 0) {
        v139 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v139 + 24) + 1784LL) + 272LL);
      }
      v140 = *(_QWORD*)(v138 + 56);
      *((_QWORD*)&v152 + 1) = v139;
      v162 = 0;
      v163 = v140;
      if (v140 == 0) {
        goto LABEL_183;
      }
      v141 = *(char**)(*(_QWORD*)(*(_QWORD*)(v140 + 24) + 1784LL) + 272LL);
      v164 = v141;
      if (v139 != 0) {
        v142 = &game_GameReliance_Impl_Data_vtable_ptr;
        if (v141 != nullptr) {
          result = GameReliance_8e17a0(v3, &v151, &v162);
          if ((result & 0x80000000) == 0) {
            v142 = (__int64 (***)())(*(_QWORD*)(v3 + 8) +
                                     56LL * (unsigned int)result);
            if (*((_BYTE*)v142 + 10) != 0) {
            LABEL_187:
              v143 = *(unsigned __int8*)(v138 + 82);
              if (*((unsigned __int8*)v142 + 11) != v143) {
                *((_BYTE*)v142 + 11) = v143;
                v144 =
                    (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >>
                    2;
                if (v143 < (int)v144) {
                  LODWORD(v144) = v143;
                }
                v145 = (int)v144 - 1;
                if (v143 != 0) {
                  v146 = v145;
                }
                else {
                  v146 = 0;
                }
                *((_WORD*)v142 + 6) = *(_DWORD*)(GameData_21d99c8 + 4 * v146);
              }
            }
          LABEL_173:
            if (++v136 == v137) {
              return result;
            }
            continue;
          }
        LABEL_183:
          v142 = &game_GameReliance_Impl_Data_vtable_ptr;
          if (GameData_2166cf2 != 0) {
            goto LABEL_187;
          }
          goto LABEL_173;
        }
      }
      else {
        v142 = &game_GameReliance_Impl_Data_vtable_ptr;
      }
      break;
    }
    if (GameData_2166cf2 == 0) {
      goto LABEL_173;
    }
    goto LABEL_187;
  }
  return result;
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

__int64 game_GameReliance_Impl_EachPlayer(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v28;
  _QWORD v29[4];
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;

  v32 = nullptr;
  v33 = 0;
  v4 = v29;
  v31 = &v32;
  LODWORD(v29[0]) = 241;
  v5 = (_QWORD*)game_UnitPool_GetFirst(v29);
  if (v5 != nullptr) {
    v7 = v5[54];
    if (v7 == 0) {
      v7 = v5[55];
      if (v7 != 0) {
        v8 = *(unsigned __int8*)(v7 + 16);
        if (v8 <= 8) {
          while (1) {
            v28 = v8 + 1;
            if (((2 << v8) & 0xF0) != 0) {
              v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v8 + 1) + 556000);
              if (v7 != 0) {
                break;
              }
            }
            v8 = v28;
            if (v28 == 9) {
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
    v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
    LABEL_8:
      v10 = (_QWORD*)v7;
      v11 = v5[49];
      if (v11 == 0) {
        goto LABEL_20;
      }
      v12 = *(unsigned __int64**)(v11 + 272);
      if (v12 == nullptr) {
        goto LABEL_20;
      }
      v13 = (_QWORD*)fw_memory_HeapManager_Allocate(*v9, 40, 16, 0);
      v14 = *v12;
      v15 = v32;
      v16 = v13;
      v17 = &v32;
      v18 = &v32;
      v13[4] = *v12;
      if (v15 == nullptr) {
        break;
      }
      while (1) {
        while (1) {
          v19 = v15[4];
          v18 = v15;
          if (v14 >= v19) {
            break;
          }
          v15 = (_QWORD*)*v15;
          v17 = v18;
          if (*v18 == 0) {
            goto LABEL_17;
          }
        }
        if (v19 >= v14) {
          break;
        }
        v15 = (_QWORD*)v15[1];
        if (v15 == nullptr) {
          v17 = v18 + 1;
          goto LABEL_17;
        }
      }
      v23 = 128;
      if (*(_QWORD*)(*v9 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v23);
      if (v10 == nullptr) {
        goto LABEL_32;
      }
    LABEL_21:
      v7 = v10[54];
      v5 = v10;
      if (v7 == 0) {
        v20 = v10[55];
        v5 = v10;
        if (v20 != 0) {
          v21 = *(unsigned __int8*)(v20 + 16);
          v7 = 0;
          v5 = v10;
          if (v21 <= 8) {
            while (1) {
              v22 = v21 + 1;
              if (((2 << v21) & 0xF0) != 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v21 + 1) + 556000);
                if (v7 != 0) {
                  break;
                }
              }
              ++v21;
              if (v22 == 9) {
                v7 = 0;
                v5 = v10;
                goto LABEL_8;
              }
            }
            v5 = v10;
          }
        }
      }
    }
  LABEL_17:
    *v13 = 0;
    v13[1] = 0;
    v13[2] = v18;
    *v17 = v13;
    if (*v31 != 0) {
      v31 = (_QWORD*)*v31;
      v16 = (_QWORD*)*v17;
    }
    fw_containers_BalanceAfterInsert(v32, v16);
    ++v33;
  LABEL_20:
    if (v10 == nullptr) {
      goto LABEL_32;
    }
    goto LABEL_21;
  }
LABEL_32:
  v29[2] = a2;
  v25 = *(_QWORD*)(a1 + 8);
  v24 = *(_QWORD*)(a1 + 16);
  v30 = v29;
  v29[0] = GameData_1fab540;
  v29[1] = &v31;
  if (v25 != v24) {
    do {
      if (v30 == nullptr) {
        GameRoutine_60a310(0, v6);
      }
      (*(void (**)(_QWORD*, __int64))(*v30 + 48LL))(v30, v25);
      v25 += 56;
    } while (v25 != v24);
    v4 = v30;
    if (v30 != v29) {
      if (v30 != nullptr) {
        v26 = 40;
      LABEL_39:
        (*(void (**)(_QWORD*))(*v4 + v26))(v4);
      }
      return GameRoutine_68c910(&v31, v32);
    }
  }
  v26 = 32;
  goto LABEL_39;
}

__int64 game_GameReliance_Impl_EachScore(__int64 a1, char a2, __int64 a3)
{
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  bool v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v50;
  _QWORD v52[4];
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  _QWORD* v58;
  __int64 v59;

  v58 = nullptr;
  v59 = 0;
  v5 = v52;
  v57 = &v58;
  LODWORD(v52[0]) = 15;
  v6 = (_QWORD*)game_UnitPool_GetFirst(v52);
  if (v6 != nullptr) {
    v8 = v6[54];
    if (v8 == 0) {
      v8 = v6[55];
      if (v8 != 0) {
        v9 = *(unsigned __int8*)(v8 + 16);
        if (v9 <= 8) {
          v50 = 24LL * *(unsigned __int8*)(v8 + 16) + 556024;
          while (1) {
            if (v9 <= 2) {
              v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v50);
              if (v8 != 0) {
                break;
              }
            }
            ++v9;
            v50 += 24;
            if (v9 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v8 = 0;
        }
      }
    }
    while (1) {
    LABEL_8:
      v10 = (_QWORD*)v8;
      v11 = v6[55];
      if (v11 != 0) {
        v12 = *(_BYTE*)(v11 + 16);
      }
      else {
        v12 = 9;
      }
      if (((1 << v12) & 6) == 0) {
        v16 = v6[49];
        if (v16 != 0) {
          v17 = *(unsigned __int64**)(v16 + 272);
          if (v17 != nullptr) {
            v18 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
            v19 = *v17;
            v20 = v58;
            v21 = v18;
            v22 = &v58;
            v23 = &v58;
            v18[4] = *v17;
            if (v20 != nullptr) {
              while (1) {
                while (1) {
                  v24 = v20[4];
                  v23 = v20;
                  if (v19 >= v24) {
                    break;
                  }
                  v20 = (_QWORD*)*v20;
                  v22 = v23;
                  if (*v23 == 0) {
                    goto LABEL_30;
                  }
                }
                if (v24 >= v19) {
                  break;
                }
                v20 = (_QWORD*)v20[1];
                if (v20 == nullptr) {
                  v22 = v23 + 1;
                  goto LABEL_30;
                }
              }
              v25 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v25 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
            }
            else {
            LABEL_30:
              *v18 = 0;
              v18[1] = 0;
              v18[2] = v23;
              *v22 = v18;
              if (*v57 != 0) {
                v57 = (_QWORD*)*v57;
                v21 = (_QWORD*)*v22;
              }
              fw_containers_BalanceAfterInsert(v58, v21);
              ++v59;
            }
          }
        }
      }
      if (v10 == nullptr) {
        break;
      }
      v8 = v10[54];
      v6 = v10;
      if (v8 == 0) {
        v13 = v10[55];
        v6 = v10;
        if (v13 != 0) {
          v14 = *(unsigned __int8*)(v13 + 16);
          v8 = 0;
          v6 = v10;
          if (v14 <= 8) {
            v15 = 24LL * (unsigned int)v14 + 556024;
            while (1) {
              if (v14 <= 2) {
                v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v15);
                if (v8 != 0) {
                  break;
                }
              }
              ++v14;
              v15 += 24;
              if (v14 == 9) {
                v8 = 0;
                v6 = v10;
                goto LABEL_8;
              }
            }
            v6 = v10;
          }
        }
      }
    }
  }
  v27 = *(_QWORD*)(a1 + 8);
  v26 = *(_QWORD*)(a1 + 16);
  v55 = 0;
  v56 = 0;
  v54 = 0;
  v53 = v52;
  v52[0] = GameData_1fab5d0;
  v52[1] = &v57;
  v52[2] = &v54;
  if (v27 == v26) {
    goto LABEL_42;
  }
  do {
    v28 = v53;
    if (v53 == nullptr) {
      goto LABEL_75;
    }
    (*(void (**)(_QWORD*, __int64))(*v53 + 48LL))(v53, v27);
    v27 += 56;
  } while (v27 != v26);
  v5 = v53;
  if (v53 == v52) {
  LABEL_42:
    v29 = 32;
  }
  else {
    if (v53 == nullptr) {
      goto LABEL_44;
    }
    v29 = 40;
  }
  (*(void (**)(_QWORD*))(*v5 + v29))(v5);
LABEL_44:
  v30 = v54;
  v31 = v55;
  v52[0] = a1;
  if ((v55 - v54) >> 2 < 129) {
    v35 = 0;
  LABEL_50:
    GameRoutine_8e33a0(v30, v31, v52, (v31 - v30) >> 2, 0, v35);
  }
  else {
    v32 = (v55 - v54) >> 2;
    v33 = GameData_212c060;
    while (1) {
      v34 = GameRoutine_1a09d20(4 * v32, v33);
      if (v34 != 0) {
        break;
      }
      v35 = v32 >> 1;
      v36 = v32 > 1;
      v32 >>= 1;
      if (!v36) {
        goto LABEL_50;
      }
    }
    GameRoutine_8e33a0(v30, v31, v52, (v31 - v30) >> 2, v34, v32);
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37);
  }
  v38 = v55 - v54;
  v39 = (unsigned __int64)(v55 - v54) >> 2;
  if ((_DWORD)v39 != 0) {
    if ((a2 & 1) != 0) {
      if ((int)v39 >= 1) {
        v40 = ((v38 >> 2) & 0x7FFFFFFF) - 1;
        do {
          v41 = *(_QWORD*)(a1 + 8);
          v28 = *(_QWORD**)(a3 + 32);
          v42 = *(_DWORD*)(v54 + 4 * v40);
          LODWORD(v52[0]) = v40;
          if (v28 == nullptr) {
            goto LABEL_75;
          }
          (*(void (**)(_QWORD*, __int64, _QWORD*))(*v28 + 48LL))(
              v28, v41 + 56LL * v42, v52);
          v43 = v40-- + 1;
        } while (v43 > 1);
      }
    }
    else if ((int)v39 >= 1) {
      v44 = (v38 >> 2) & 0x7FFFFFFF;
      v45 = 0;
      while (1) {
        v46 = *(_QWORD*)(a1 + 8);
        v28 = *(_QWORD**)(a3 + 32);
        v47 = *(_DWORD*)(v54 + 4 * v45);
        LODWORD(v52[0]) = v45;
        if (v28 == nullptr) {
          break;
        }
        (*(void (**)(_QWORD*, __int64, _QWORD*))(*v28 + 48LL))(
            v28, v46 + 56LL * v47, v52);
        if (v44 == ++v45) {
          goto LABEL_65;
        }
      }
    LABEL_75:
      GameRoutine_60a310(v28, v7);
    }
  }
LABEL_65:
  if (v54 != 0) {
    v55 = v54;
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48);
  }
  return GameRoutine_68c910(&v57, v58);
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
