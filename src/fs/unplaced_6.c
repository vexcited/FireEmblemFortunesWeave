#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8, __int64, __int64,
                                               __int64, char);
__attribute__((swiftcall)) void Section_18d9aa0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void timeline_6530(PSEUDO_X8, _DWORD*, _BYTE*);
__int64 GameHr_11de730(unsigned __int8*, int);
__int64 GameHr_7aa0(int**, _QWORD*);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_6544c0(__int64, __int64);
__int64 GameRoutine_dbf0(unsigned __int8);
__int64 Registration_a50100(__int64*, __int64, __int64);
__int64 Value_7f50(__int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 timeline_7910(__int64, __int64);
extern _UNKNOWN GameData_21ed530;
extern __int64 (*fs_Memory_vtable_ptr)();
extern __int64 (*fs_Section_MasterConfig_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212ce30;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 snd_g_fileIndex;
extern int (*GameData_212ce38)[29];
extern int GameData_21ed528;
int __cxa_guard_acquire(__int64);
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, __int64*);
void GameRoutine_6b55a0(__int64, unsigned __int8);
void Section_18dabe0(__int64, __int64);
void Section_18db560(__int64*);
void Section_18db600(__int64*);
void Section_18db740(__int64*);
void Value_77d0(__int64*);
void __attribute__((noreturn)) GameRoutine_18db820();
void __attribute__((noreturn)) GameRoutine_18dcac0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6706a0();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void collision_6704c0(__int64*, unsigned __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void fs_a503b0(PSEUDO_X8 x8_, __int64 a1,
                                          __int64 a2);
__int64 fs_a51640(__int64 a1, __int64 a2, _DWORD* a3);
__int64 fs_18d9d20(__int64 a1, __int64 a2, __int64 a3);

__attribute__((swiftcall)) void fs_a503b0(PSEUDO_X8 x8_, __int64 a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    unsigned __int64 v19;
    __int64 v20;
  } v18_;
  struct {
    __int64 v21;
    unsigned __int64 v22;
    char* v23;
  } v21_;

  Manager_a4fd20((void*)(&v21_.v21), a1 + 15176, a2, (__int64)"MPID", 0);
  v4 = v21_.v21;
  if ((v21_.v21 & 1) != 0) {
    v5 = v21_.v22;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v21_.v21 >> 1;
  }
  if (v5 != 0) {
    v6 = (__int64)v21_.v23;
    v7 = v5 + 5;
    if ((v21_.v21 & 1) != 0) {
      v8 = v21_.v23;
    }
    else {
      v8 = (char*)&v21_.v21 + 1;
    }
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v7 > 0x16) {
      if ((v7 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v7 | 7) + 1;
      }
      v10 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16, 0);
      v18_.v19 = v5 + 5;
      v18_.v20 = v10;
      v18_.v18 = v12 | 1;
      v9 = v12 | 1;
    }
    else {
      v9 = 2 * v7;
      v10 = 0;
      v18_.v19 = 0;
      v18_.v20 = 0;
      v18_.v18 = (unsigned __int8)(2 * v7);
    }
    if ((v9 & 1) != 0) {
      v13 = (char*)v10;
    }
    else {
      v13 = (char*)&v18_.v18 + 1;
    }
    v13[4] = 95;
    *(_DWORD*)v13 = 1145655373;
    if ((v9 & 1) != 0) {
      v14 = (char*)(v10 + 5);
    }
    else {
      v14 = (char*)&v18_.v18 + 6;
    }
    memmove((__int64)v14, (__int64)v8, v5);
    v14[v5] = 0;
    if ((v4 & 1) != 0 && v6 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v6);
    }
    v16 = v18_.v19;
    v17 = v18_.v20;
    v21_.v21 = v18_.v18;
    v21_.v22 = v18_.v19;
    v21_.v23 = (char*)v18_.v20;
    *a3 = v18_.v18;
    a3[1] = v16;
    a3[2] = v17;
  }
  else {
    *(_WORD*)a3 = 0;
    if ((v4 & 1) != 0 && v21_.v23 != nullptr) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v21_.v23);
    }
  }
}

__int64 fs_a51640(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  int v10;
  char v11;
  char v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v19;
  struct {
    __int64 v20[2];
    __int64 v21;
  } v20_;
  struct {
    __int64 v22[2];
    __int64 v23;
  } v22_;
  struct {
    __int64 v24[2];
    __int64 v25;
  } v24_;
  struct {
    __int64 v26[2];
    __int64 v27;
    char gap96_[24];
    __int64 v28;
  } v26_;

  v5 = msg_MessageManager_instance__ptr[0];
  Manager_a4fd20((void*)(v26_.v26),
                 *msg_MessageManager_instance__ptr[0] + 15176, a2,
                 (__int64)"First", 0);
  if ((v26_.v26[0] & 1) != 0) {
    v6 = v26_.v26[1];
  }
  else {
    v6 = (unsigned __int64)LOBYTE(v26_.v26[0]) >> 1;
  }
  if (v6 == 0) {
    goto LABEL_12;
  }
  v24_.v24[1] = (__int64)a3;
  v24_.v24[0] = game_HashString((__int64)a3);
  v7 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_12;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                            memory_order_acquire) &
       1) == 0) {
    v26_.v28 = v7;
    v19 = __cxa_guard_acquire((__int64)&GameData_21ed530);
    v7 = v26_.v28;
    if (v19 != 0) {
      GameData_21ed528 = 1598310733;
      __cxa_guard_release((__int64)&GameData_21ed530);
      v7 = v26_.v28;
    }
  }
  if (a3 != nullptr && *a3 == GameData_21ed528 &&
      (v8 = game_GameVariableTable_Find(*(_QWORD**)(v7 + 48),
                                        (unsigned __int64*)v24_.v24)) != 0 &&
      *(_DWORD*)(v8 + 32) != 0) {
    v9 = 0;
  }
  else {
  LABEL_12:
    Manager_a4fd20((void*)(v24_.v24), *v5 + 15176, a2, (__int64)"Condition1",
                   0);
    Manager_a4fd20((void*)(v22_.v22), *v5 + 15176, a2, (__int64)"Condition2",
                   0);
    Manager_a4fd20((void*)(v20_.v20), *v5 + 15176, a2, (__int64)"Condition3",
                   0);
    v10 = Registration_a50100((__int64*)(*v5 + 15176), a2,
                              (__int64)"ConditionConjunction");
    v11 = GameHr_11de730((unsigned __int8*)v24_.v24, v10);
    v12 = GameHr_11de730((unsigned __int8*)v22_.v22, v10);
    v13 = GameHr_11de730((unsigned __int8*)v20_.v20, v10);
    if (v10 == 1) {
      v9 = v11 | v12 | v13;
    }
    else {
      v9 = v11 & v12 & v13;
    }
    if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v20_.v21);
    }
    if ((v22_.v22[0] & 1) != 0 && v22_.v23 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v22_.v23);
    }
    if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v24_.v25);
    }
  }
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v26_.v27);
  }
  return v9 & 1;
}

__int64 fs_18d9d20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned int* v13;
  unsigned int* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned int* v20;
  unsigned int* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  const char* v25;
  int v26;
  __int64 v27;
  unsigned int* v28;
  unsigned int* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned int* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  unsigned int* v48;
  unsigned int* v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  int* v53;
  unsigned __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  unsigned int* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int8* v65;
  int v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned int* v74;
  unsigned int* v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  unsigned int* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  char* v91;
  unsigned __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  char* v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64* v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned int* v105;
  unsigned int* v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  int v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64* v117;
  __int64* v118;
  _QWORD* v119;
  __int64* v120;
  __int64 v121;
  __int64 v122;
  char* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  unsigned __int8* v133;
  int v134;
  __int64 v135;
  __int64 v136;
  __int64* v137;
  __int64 v138;
  _QWORD* v139;
  unsigned int* v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  unsigned __int64 v144;
  int* v145;
  __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64* v149;
  __int64 v150;
  struct {
    const char* v151;
    int v152;
    char gap124_[4];
    __int64 v153;
    unsigned __int64 v154;
    __int64 v155;
    __int64 v156;
    unsigned __int8* v157;
  } v151_;
  _QWORD v158[7];
  struct {
    __int64 v159;
    __int64 v160;
    __int64 (**v161)();
    __int64 v162;
    __int64 v163;
    __int64 v164;
    __int64 v165;
    __int16 v166;
    char gap282_[2];
    int v167;
    __int64 v168;
    __int64 v169;
  } v159_;
  unsigned __int8* v170;
  struct {
    const char* v171;
    unsigned __int64 v172;
    __int64 v173;
    unsigned __int64 v174;
    __int64 v175;
    __int64 v176;
  } v171_;

  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v76 = COERCE_AS(__typeof__(v76),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 8) = 0;
  v3 = a1 + 8;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  v5 = (__int64*)(a1 + 48);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 40) = 1065353216;
  *(_QWORD*)a1 = fs_Section_MasterConfig_vtable;
  v159_.v159 = a2;
  v159_.v160 = a3;
  v159_.v161 = &fs_Memory_vtable_ptr;
  LODWORD(v159_.v162) = 1;
  result = GameRoutine_6544c0(snd_g_fileIndex, (__int64)&v159_.v159),
  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v76 = COERCE_AS(__typeof__(v76),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *(_QWORD*)(result + 592);
  if (v7 == 0) {
    return result;
  }
  v8 = result;
  v9 = *(_QWORD*)(result + 576);
  v159_.v166 = 257;
  v158[5] = 0;
  v159_.v161 = nullptr;
  v159_.v162 = 0;
  v159_.v164 = 0;
  v159_.v165 = 0;
  v159_.v167 = 0;
  v159_.v163 = -1;
  v158[6] = 0;
  v171_.v171 = nullptr;
  LODWORD(v171_.v172) = 0;
  v171_.v173 = 0xFFFFFFFFLL;
  v171_.v174 = 0;
  v171_.v175 = 0;
  v171_.v176 = 0;
  v158[2] = 2048;
  v158[3] = 16;
  v159_.v168 = v7;
  v159_.v169 = v9;
  v159_.v159 = GameData_212ce30 + 16;
  v159_.v160 = 0;
  v158[0] = 0x2000;
  v158[1] = 0x8000;
  v158[4] = 2;
  if ((unsigned int)timeline_7910((__int64)&v171_.v171, (__int64)v158) != 0) {
    v10 = nullptr;
    LODWORD(v171_.v172) = 14;
    v151_.v152 = 14;
    v151_.v151 = v171_.v171;
  LABEL_6:
    v11 = v171_.v173;
    v12 = v171_.v174;
    v171_.v171 = nullptr;
    v151_.v157 = nullptr;
    goto LABEL_7;
  }
  if ((unsigned int)GameHr_7aa0((int**)&v171_.v171, &v159_.v159) != 0) {
    v10 = nullptr;
    v151_.v151 = v171_.v171;
    v151_.v152 = v171_.v172;
    goto LABEL_6;
  }
  timeline_6530((void*)(&v170), &v171_.v171, nullptr),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = v170;
  v25 = v171_.v171;
  v171_.v171 = nullptr;
  v151_.v151 = v25;
  v151_.v152 = v171_.v172;
  v11 = v171_.v173;
  v12 = v171_.v174;
  v151_.v157 = v170;
LABEL_7:
  v151_.v153 = v11;
  v151_.v154 = v12;
  v171_.v174 = 0;
  v151_.v155 = v171_.v175;
  v151_.v156 = v171_.v176;
  Value_77d0((__int64*)&v171_.v171),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*v10 & 0x7F) != 8) {
    goto LABEL_149;
  }
  v13 = *(unsigned int**)(v10 + 1);
  v171_.v171 = "Config";
  v171_.v172 = 6;
  v14 = game_6b7f00(v13, 0, v13, v13[1], (__int64*)&v171_.v171),
  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v76 = COERCE_AS(__typeof__(v76),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v15 == v13[1]) {
    goto LABEL_149;
  }
  v16 = *v14;
  if (v15 >= v16) {
    v18 = v15 - v16;
    v19 = __clz(v18 + 16);
    v17 = *(_QWORD*)(*((_QWORD*)v14 + 2) + 8 * (27 - v19) + 8) +
          32LL * (unsigned int)(v18 - (*GameData_212ce38)[28 - v19]);
  }
  else {
    v17 = *((_QWORD*)v14 + 1) + 32 * v15;
  }
  if ((*(_BYTE*)(v17 + 16) & 0x7F) == 8) {
    v20 = *(unsigned int**)(v17 + 17);
    v171_.v171 = "ContentsNameToIndex";
    v171_.v172 = 19;
    v21 = game_6b7f00(v20, 0, v20, v20[1], (__int64*)&v171_.v171),
    v107 = COERCE_AS(__typeof__(v107),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v22 != v20[1]) {
      v23 = *v21;
      if (v22 >= v23) {
        v26 = v22 - v23;
        v27 = __clz(v26 + 16);
        v24 = *(_QWORD*)(*((_QWORD*)v21 + 2) + 8 * (27 - v27) + 8) +
              32LL * (unsigned int)(v26 - (*GameData_212ce38)[28 - v27]);
      }
      else {
        v24 = *((_QWORD*)v21 + 1) + 32 * v22;
      }
      Section_18dabe0(v24 + 16, v3),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((*(_BYTE*)(v17 + 16) & 0x7F) != 8) {
    goto LABEL_149;
  }
  v28 = *(unsigned int**)(v17 + 17);
  v171_.v171 = "SectionRules";
  v171_.v172 = 12;
  v29 = game_6b7f00(v28, 0, v28, v28[1], (__int64*)&v171_.v171),
  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v76 = COERCE_AS(__typeof__(v76),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v30 == v28[1]) {
    goto LABEL_149;
  }
  v31 = *v29;
  if (v30 >= v31) {
    v33 = v30 - v31;
    v34 = __clz(v33 + 16);
    v32 = *(_QWORD*)(*((_QWORD*)v29 + 2) + 8 * (27 - v34) + 8) +
          32LL * (unsigned int)(v33 - (*GameData_212ce38)[28 - v34]);
  }
  else {
    v32 = *((_QWORD*)v29 + 1) + 32 * v30;
  }
  v138 = v8;
  v139 = (_QWORD*)a1;
  v137 = v5;
  if (*(_BYTE*)(v32 + 16) != 7) {
    v171_.v172 = 0;
    v171_.v173 = 0;
    v171_.v171 = nullptr;
    Section_18db560((__int64*)&v171_.v171),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_140;
  }
  v35 = *(unsigned int**)(v32 + 17);
  v36 = v35[1];
  if ((_DWORD)v36 == 0) {
  LABEL_140:
    v41 = nullptr;
    v147 = 0;
    v42 = 0;
    goto LABEL_141;
  }
  v37 = 9 * v36;
  v38 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       72 * v36, 16, 0),
  v107 = COERCE_AS(__typeof__(v107),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v76 = COERCE_AS(__typeof__(v76),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v39 = v38;
  v147 = v38 + 8 * v37;
  v141 = v35[1];
  if ((_DWORD)v141 == 0) {
    v41 = (__int64*)v38;
    goto LABEL_116;
  }
  v40 = 0;
  v41 = (__int64*)v38;
  v140 = v35;
  while (1) {
    v44 = *v35;
    if (v40 >= v44) {
      v46 = v40 - v44;
      v47 = __clz(v46 + 16);
      v45 = *(_QWORD*)(*((_QWORD*)v35 + 2) + 8 * (27 - v47) + 8) +
            16LL * (unsigned int)(v46 - (*GameData_212ce38)[28 - v47]);
    }
    else {
      v45 = *((_QWORD*)v35 + 1) + 16 * v40;
    }
    v148 = v45;
    if ((*(_BYTE*)v45 & 0x7F) != 8 ||
        (v48 = *(unsigned int**)(v45 + 1), v171_.v171 = "SplitEncryptFlags",
         v171_.v172 = 17,
         v49 = game_6b7f00(v48, 0, v48, v48[1], (__int64*)&v171_.v171),
         v50 == v48[1])) {
      v51 = 0;
      v52 = 0;
      v53 = nullptr;
      goto LABEL_59;
    }
    v54 = *v49;
    if (v50 >= v54) {
      v56 = v50 - v54;
      v57 = __clz(v56 + 16);
      v55 = *(_QWORD*)(*((_QWORD*)v49 + 2) + 8 * (27 - v57) + 8) +
            32LL * (unsigned int)(v56 - (*GameData_212ce38)[28 - v57]);
    }
    else {
      v55 = *((_QWORD*)v49 + 1) + 32 * v50;
    }
    if (*(_BYTE*)(v55 + 16) != 7) {
      goto LABEL_116;
    }
    v58 = *(unsigned int**)(v55 + 17);
    v171_.v172 = 0;
    v171_.v173 = 0;
    v171_.v171 = nullptr;
    collision_6704c0((__int64*)&v171_.v171, v58[1]),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v59 = v58[1];
    if ((_DWORD)v59 != 0) {
      break;
    }
  LABEL_58:
    v52 = v171_.v172;
    v51 = v171_.v173;
    v53 = (int*)v171_.v171;
    v45 = v148;
  LABEL_59:
    v149 = v41;
    v145 = v53;
    v146 = v39;
    v143 = v51;
    v144 = v40;
    v142 = v52;
    if ((*(_BYTE*)v45 & 0x7F) != 8) {
      goto LABEL_90;
    }
    v74 = *(unsigned int**)(v45 + 1);
    v171_.v171 = "ContentsReleaseVersions";
    v171_.v172 = 23;
    v75 = game_6b7f00(v74, 0, v74, v74[1], (__int64*)&v171_.v171),
    v107 = COERCE_AS(__typeof__(v107),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v76 == v74[1]) {
      goto LABEL_90;
    }
    v77 = *v75;
    if (v76 >= v77) {
      v79 = v76 - v77;
      v80 = __clz(v79 + 16);
      v78 = *(_QWORD*)(*((_QWORD*)v75 + 2) + 8 * (27 - v80) + 8) +
            32LL * (unsigned int)(v79 - (*GameData_212ce38)[28 - v80]);
    }
    else {
      v78 = *((_QWORD*)v75 + 1) + 32 * v76;
    }
    if (*(_BYTE*)(v78 + 16) != 7) {
      v171_.v172 = 0;
      v171_.v173 = 0;
      v171_.v171 = nullptr;
      Section_18db740((__int64*)&v171_.v171),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_134;
    }
    v81 = *(unsigned int**)(v78 + 17);
    v82 = v81[1];
    if ((_DWORD)v82 != 0) {
      v83 = 3 * v82;
      v84 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v82, 16, 0),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v85 = v81[1];
      v86 = v84 + 8 * v83;
      v87 = v84;
      if ((_DWORD)v85 != 0) {
        v88 = 0;
        v89 = 0;
        v90 = 16 * v85;
        v91 = (char*)v84;
        while (1) {
          v92 = *v81;
          if (v89 >= v92) {
            v94 = v89 - v92;
            v95 = __clz(v94 + 16);
            v93 = *(_QWORD*)(*((_QWORD*)v81 + 2) + 8 * (27 - v95) + 8) +
                  16LL * (unsigned int)(v94 - (*GameData_212ce38)[28 - v95]);
          }
          else {
            v93 = *((_QWORD*)v81 + 1) + v88;
          }
          Section_18d9aa0((void*)((__int64)&v171_.v171), v93),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((_DWORD)v171_.v171 != 0) {
            break;
          }
          if ((unsigned __int64)v91 < v86) {
            *((_QWORD*)v91 + 1) = 0;
            *((_QWORD*)v91 + 2) = 0;
            *(_QWORD*)v91 = 0;
            *(_QWORD*)v91 = v171_.v172;
            *((_QWORD*)v91 + 1) = v171_.v173;
            *((_QWORD*)v91 + 2) = v171_.v174;
            v91 += 24;
          }
          else {
            v96 = v90;
            v97 = &v91[-v87];
            v98 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v91[-v87] >> 3) + 1;
            if (v98 > 0xAAAAAAAAAAAAAAALL) {
              GameRoutine_18dcac0(),
                  v107 = COERCE_AS(
                      __typeof__(v107),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v30 = COERCE_AS(
                      __typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v50 = COERCE_AS(
                      __typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v76 = COERCE_AS(
                      __typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            if (0x5555555555555556LL * ((__int64)(v86 - v87) >> 3) > v98) {
              v98 = 0x5555555555555556LL * ((__int64)(v86 - v87) >> 3);
            }
            if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v86 - v87) >> 3) >=
                0x555555555555555LL) {
              v99 = 0xAAAAAAAAAAAAAAALL;
            }
            else {
              v99 = v98;
            }
            if (v99 != 0) {
              if (v99 > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_159;
              }
              v100 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    24 * v99, 16, 0),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              v100 = 0;
            }
            v101 = (unsigned __int64*)&v97[v100];
            v102 = (unsigned __int64)&v91[-v87];
            v86 = v100 + 24 * v99;
            v103 = v171_.v173;
            v91 = &v97[v100 + 24];
            *v101 = v171_.v172;
            v101[1] = v103;
            v101[2] = v171_.v174;
            memcpy(v100, v87, v102),
                v107 =
                    COERCE_AS(__typeof__(v107),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v30 =
                    COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v76 =
                    COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v87 != 0) {
              v104 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v104 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v104, v87),
                  v107 = COERCE_AS(
                      __typeof__(v107),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v30 = COERCE_AS(
                      __typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v50 = COERCE_AS(
                      __typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v76 = COERCE_AS(
                      __typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v90 = v96;
            v41 = v149;
            v87 = v100;
          }
          ++v89;
          v88 += 16;
          if (v90 == v88) {
            goto LABEL_91;
          }
        }
        if (v171_.v172 != 0) {
          v122 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v122 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v122, v171_.v172),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v53 = v145;
        v39 = v146;
        if (v87 == 0) {
          goto LABEL_134;
        }
      LABEL_123:
        if ((char*)v87 != v91) {
          v123 = v91;
          do {
            v125 = *((_QWORD*)v123 - 3);
            v123 -= 24;
            v124 = v125;
            if (v125 != 0) {
              *((_QWORD*)v91 - 2) = v124;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v126 = 128;
              }
              else {
                v126 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v126,
                                            v124),
                  v107 = COERCE_AS(
                      __typeof__(v107),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v30 = COERCE_AS(
                      __typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v50 = COERCE_AS(
                      __typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v76 = COERCE_AS(
                      __typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v91 = v123;
          } while (v123 != (char*)v87);
        }
        v127 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v127 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, v87),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v76 = COERCE_AS(__typeof__(v76),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_134;
      }
      v91 = (char*)v84;
    }
    else {
    LABEL_90:
      v87 = 0;
      v91 = nullptr;
      v86 = 0;
    }
  LABEL_91:
    if ((*(_BYTE*)v148 & 0x7F) == 8 &&
        (v105 = *(unsigned int**)(v148 + 1), v171_.v171 = "Contents",
         v171_.v172 = 8,
         v106 = game_6b7f00(v105, 0, v105, v105[1], (__int64*)&v171_.v171),
         v107 != v105[1])) {
      v111 = *v106;
      if (v107 >= v111) {
        v113 = v107 - v111;
        v114 = __clz(v113 + 16);
        v112 = *(_QWORD*)(*((_QWORD*)v106 + 2) + 8 * (27 - v114) + 8) +
               32LL * (unsigned int)(v113 - (*GameData_212ce38)[28 - v114]);
      }
      else {
        v112 = *((_QWORD*)v106 + 1) + 32 * v107;
      }
      Section_18d9aa0((void*)((__int64)&v171_.v171), v112 + 16),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v110 = v171_.v172;
      if ((_DWORD)v171_.v171 != 0) {
        if (v171_.v172 != 0) {
          v136 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v136 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v136, v171_.v172),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v53 = v145;
        v39 = v146;
        v41 = v149;
        if (v87 == 0) {
          goto LABEL_134;
        }
        goto LABEL_123;
      }
      v109 = v171_.v173;
      v108 = v171_.v174;
    }
    else {
      v108 = 0;
      v109 = 0;
      v110 = 0;
    }
    if ((unsigned __int64)v41 < v147) {
      v41[6] = v110;
      v41[7] = v109;
      v39 = v146;
      v42 = v146;
      v41[4] = (__int64)v91;
      v41[5] = v86;
      v41[8] = v108;
      v35 = v140;
      v43 = v144;
      *v41 = (__int64)v145;
      v41[1] = v142;
      v41[2] = v143;
      v41[3] = v87;
    }
    else {
      v115 = 1 - 0x71C71C71C71C71C7LL * (((__int64)v41 - v146) >> 3);
      if (v115 > 0x38E38E38E38E38ELL) {
        GameRoutine_18db820(),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v76 = COERCE_AS(__typeof__(v76),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (0x1C71C71C71C71C72LL * ((__int64)(v147 - v146) >> 3) > v115) {
        v115 = 0x1C71C71C71C71C72LL * ((__int64)(v147 - v146) >> 3);
      }
      if (0x8E38E38E38E38E39LL * ((__int64)(v147 - v146) >> 3) >=
          0x1C71C71C71C71C7LL) {
        v115 = 0x38E38E38E38E38ELL;
      }
      if (v115 > 0x38E38E38E38E38ELL) {
      LABEL_159:
        GameRoutine_60a210(),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v76 = COERCE_AS(__typeof__(v76),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v150 = 9 * v115;
      v116 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 72 * v115,
                                            16, 0),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v117 = (__int64*)((char*)v41 + v116 - v146);
      v42 = v116;
      v117[4] = (__int64)v91;
      v117[5] = v86;
      v117[8] = v108;
      v35 = v140;
      v43 = v144;
      v117[6] = v110;
      v117[7] = v109;
      *v117 = (__int64)v145;
      v117[1] = v142;
      v117[2] = v143;
      v117[3] = v87;
      if ((__int64*)v146 != v41) {
        v118 = (__int64*)v146;
        v119 = (_QWORD*)v116;
        do {
          *v119 = *v118;
          v119[1] = v118[1];
          v119[2] = v118[2];
          v118[1] = 0;
          v118[2] = 0;
          *v118 = 0;
          v119[3] = v118[3];
          v119[4] = v118[4];
          v119[5] = v118[5];
          v118[4] = 0;
          v118[5] = 0;
          v118[3] = 0;
          v119[6] = v118[6];
          v119[7] = v118[7];
          v119[8] = v118[8];
          v118[7] = 0;
          v118[8] = 0;
          v118[6] = 0;
          v118 += 9;
          v119 += 9;
        } while (v118 != v41);
        v120 = (__int64*)v146;
        do {
          Section_18db600(v120),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v120 += 9;
        } while (v120 != v41);
      }
      v147 = v42 + 8 * v150;
      v121 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v121 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v121, v146),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v41 = v117;
      v39 = v42;
    }
    v41 += 9;
    v40 = v43 + 1;
    if (v40 == v141) {
      goto LABEL_141;
    }
  }
  v60 = 16 * v59;
  v61 = 0;
  v62 = 0;
  while (1) {
    v64 = *v58;
    if (v62 >= v64) {
      v66 = v62 - v64;
      v67 = __clz(v66 + 16);
      v65 =
          (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)v58 + 2) + 8 * (27 - v67) +
                                        8) +
                             16LL *
                                 (unsigned int)(v66 -
                                                (*GameData_212ce38)[28 - v67]));
    }
    else {
      v65 = (unsigned __int8*)(*((_QWORD*)v58 + 1) + v61);
    }
    v68 = GameRoutine_dbf0(*v65),
    v107 = COERCE_AS(__typeof__(v107),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((_DWORD)v68 != 0) {
      break;
    }
    v69 = v171_.v172;
    if (v171_.v172 == v171_.v173 << 6) {
      if ((__int64)(v171_.v172 + 1) < 0) {
        GameRoutine_6706a0(),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v76 = COERCE_AS(__typeof__(v76),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v70 = v171_.v173 << 7;
      if (v171_.v173 << 7 <= (v171_.v172 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
        v70 = (v171_.v172 & 0x3FFFFFFFFFFFFFC0LL) + 64;
      }
      if (v171_.v172 <= 0x3FFFFFFFFFFFFFFELL) {
        v71 = v70;
      }
      else {
        v71 = 0x7FFFFFFFFFFFFFFFLL;
      }
      collision_6704c0((__int64*)&v171_.v171, v71),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v69 = v171_.v172;
    }
    v72 = v69 >> 6;
    v171_.v172 = v69 + 1;
    v73 = 1LL << v69;
    if ((v68 & 0x100000000LL) != 0) {
      v63 = *(_QWORD*)&v171_.v171[8 * v72] | v73;
    }
    else {
      v63 = *(_QWORD*)&v171_.v171[8 * v72] & ~v73;
    }
    ++v62;
    v61 += 16;
    *(_QWORD*)&v171_.v171[8 * v72] = v63;
    if (v60 == v61) {
      goto LABEL_58;
    }
  }
  v53 = (int*)v171_.v171;
LABEL_134:
  if (v53 != nullptr) {
    v128 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v128 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v128,
                                  (__int64)v53),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_116:
  v42 = v39;
LABEL_141:
  v129 = *v137;
  if (*v137 != 0) {
    v130 = (__int64*)v139[7];
    if ((__int64*)v129 == v130) {
      goto LABEL_145;
    }
    do {
      v130 -= 9;
      Section_18db600(v130),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v130 != (__int64*)v129);
    v131 = v139[6];
    v139[7] = v129;
    v129 = v131;
    if (v131 != 0) {
    LABEL_145:
      v132 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v132 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v132, v129),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v139[6] = v42;
  v139[7] = v41;
  v8 = v138;
  v139[8] = v147;
LABEL_149:
  Value_7f50((__int64*)&v151_.v151),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_634d80(*(_QWORD*)(v8 + 8), v8),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v133 = v151_.v157;
  v151_.v157 = nullptr;
  if (v133 != nullptr) {
    v134 = *v133;
    if ((unsigned int)(v134 - 6) <= 4) {
      GameRoutine_6b55a0((__int64)v133, v134),
          v107 = COERCE_AS(__typeof__(v107),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v135 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v135 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v135,
                                  (__int64)v133),
        v107 = COERCE_AS(__typeof__(v107),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  Value_77d0((__int64*)&v151_.v151),
      v107 = COERCE_AS(__typeof__(v107),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64*))(v159_.v159 + 24))(&v159_.v159);
}

#pragma GCC visibility pop
