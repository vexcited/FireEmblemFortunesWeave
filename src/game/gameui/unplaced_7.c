#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
__attribute__((swiftcall)) void GameConst_7f8880(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Manager_18cfba0(__int64);
__int64 Manager_18cfcb0(__int64);
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 Pane_58f8a0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_21c6868;
extern __int64 (*game_gameui_ProcMovie_vtable[])();
extern __int64* GameData_212c598[2];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212e348;
extern __int64* GameData_2130f90[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21c9fd0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_20660e0[8];
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
int __cxa_guard_acquire(__int64);
typedef __int64 GameAlign_21caa2c __attribute__((aligned(4)));
extern GameAlign_21caa2c GameData_21caa2c;
unsigned __int64 strlen(const char*);
void Manager_18cf910(__int64, __int64);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_gameui_1584d90(__int64 a1, _QWORD* a2, int a3, int a4);
void game_gameui_1592690(char* a1, _BYTE* a2, _BYTE* a3, char* a4);
void game_gameui_15d7d00(__int64* a1, int a2, char* a3, char* a4, char* a5,
                         __int64 a6, __int64 a7, int a8);
__int64 game_gameui_173e750(__int64 a1, __int64 a2, __int64 a3, char a4,
                            char a5);

__int64 game_gameui_1584d90(__int64 a1, _QWORD* a2, int a3, int a4)
{
  __int64 v6;
  _DWORD* v7;
  __int64 result;

  *(_QWORD*)(a1 + 4) = 0;
  *(_DWORD*)a1 = 8;
  *(_QWORD*)(a1 + 4) = *a2;
  if ((_BYTE)GameData_21caa2c != 0) {
    v6 = GameData_21caa2c;
  }
  else {
    v6 = 0;
  }
  *(_QWORD*)(a1 + 48) = 0;
  v7 = (_DWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 12) = v6;
  *(_WORD*)(a1 + 26) = 0;
  *(_DWORD*)(a1 + 28) = 0;
  *(_QWORD*)(a1 + 40) = a1 + 48;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  result = GameRoutine_930b90(a1 + 24, (__int64)GameData_212c8b0[0]);
  v7[10] = 0;
  v7[11] = a3;
  v7[12] = a4;
  return result;
}

void game_gameui_1592690(char* a1, _BYTE* a2, _BYTE* a3, char* a4)
{
  int v4;
  int v5;
  char* v13;
  int v14;
  char* v15;
  char* v16;
  unsigned int v17;
  char* v18;
  char* v19;
  char* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  char* v24;
  __int64* v25;
  __int64* v26;
  char** v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  char* v40;
  __int64* v41;
  char** v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  int v47;
  unsigned int v48;
  char* v49;
  __int64 v50;
  char* v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  char* v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  struct {
    __int64* v59;
    unsigned __int64 v60;
    char* v61;
    unsigned __int64 v62;
    int v63;
    int v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
  } v59_;

  v4 = (unsigned __int8)*a3;
  v5 = (unsigned __int8)*a4;
  if (*a3 == 0 && v5 == 3) {
    v14 = 0;
    v15 = "MCID_chapter_Ex01";
  }
  else if ((char)v5 == 13 && v4 == 1 && *a2 == 7) {
    v15 = "MCID_chapter_Ex02";
    v14 = 1;
  }
  else {
    if ((char)v4 >= 3) {
      v13 = game_util_Format("MCID_chapter_Sect%02d");
    }
    else {
      v13 = game_util_Format("MCID_chapter_%02d");
    }
    v14 = (char)*a3;
    v15 = v13;
  }
  v16 = game_util_Format("MCID_part_%d", v14);
  v17 = (unsigned __int8)*a3;
  v18 = v16;
  if (v17 > 1) {
    if (v17 == 2) {
      v20 = "MCID_chapter_29";
    }
    else if (v17 == 3) {
      v20 = "MCID_chapter_30";
    }
    else {
      v20 = nullptr;
    }
    v22 = (unsigned __int8)*a4;
    goto LABEL_39;
  }
  if (*a3 != 0) {
    GameConst_7f8880((void*)((__int64*)&v59_.v59), (unsigned __int8)*a2);
    if (((unsigned __int8)v59_.v59 & 1) != 0) {
      v19 = (char*)v59_.v61;
    }
    else {
      v19 = (char*)&v59_.v59 + 1;
    }
    v20 = game_util_Format("MCID_episode_%s", v19);
    if (((unsigned __int8)v59_.v59 & 1) != 0 && v59_.v61 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v59_.v61);
    }
    v17 = (unsigned __int8)*a3;
    v22 = (unsigned __int8)*a4;
    if (*a3 != 0) {
      goto LABEL_39;
    }
  }
  else {
    v20 = "MCID_chapter_28";
    v22 = (unsigned __int8)*a4;
  }
  if (v22 == 3) {
    goto LABEL_74;
  }
LABEL_39:
  if (v17 == 3 && v22 == 7) {
    if (*v18 != 0) {
      v59_.v65 = -1;
      v59_.v66 = -1;
      v59_.v67 = -1;
      v59_.v68 = -1;
      v23 = *msg_MessageManager_instance__ptr[0];
      v59_.v69 = -1;
      v59_.v70 = -1;
      v59_.v71 = -1;
      v59_.v72 = -1;
      v59_.v73 = -1;
      v59_.v74 = -1;
      v59_.v75 = -1;
      v59_.v76 = -1;
      v59_.v59 = GameData_212e348 + 2;
      v59_.v60 = 0xFFFF0001FFFF0000LL;
      v59_.v61 = (const char*)0xFFFF0004FFFF0002LL;
      v59_.v62 = 0xFFFF0006FFFF0005LL;
      v59_.v77 = 8;
      v59_.v63 = -65529;
      v59_.v64 = -65528;
      v24 = GameRoutine_a4dbe0(v23, v18, 0);
      if (v20 == nullptr) {
        goto LABEL_66;
      }
    }
    else {
      v24 = *msg_MessageManager_empty_text__ptr;
      if (v20 == nullptr) {
        goto LABEL_66;
      }
    }
    if (*v20 != 0) {
      v59_.v65 = -1;
      v59_.v66 = -1;
      v59_.v67 = -1;
      v59_.v68 = -1;
      v39 = *msg_MessageManager_instance__ptr[0];
      v59_.v69 = -1;
      v59_.v70 = -1;
      v59_.v71 = -1;
      v59_.v72 = -1;
      v59_.v73 = -1;
      v59_.v74 = -1;
      v59_.v75 = -1;
      v59_.v76 = -1;
      v59_.v59 = GameData_212e348 + 2;
      v59_.v60 = 0xFFFF0001FFFF0000LL;
      v59_.v61 = (const char*)0xFFFF0004FFFF0002LL;
      v59_.v62 = 0xFFFF0006FFFF0005LL;
      v59_.v77 = 8;
      v59_.v63 = -65529;
      v59_.v64 = -65528;
      v40 = GameRoutine_a4dbe0(v39, v20, 0);
    LABEL_67:
      v41 = msg_MessageManager_instance__ptr[0];
      v42 = (const char**)msg_MessageManager_empty_text__ptr;
      if (v24 != nullptr) {
        v43 = v24;
      }
      else {
        v43 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v43);
      v44 = *v41;
      if (v40 != nullptr) {
        v45 = v44 + 14728;
        v46 = v40;
      }
      else {
        v46 = *v42;
        v45 = v44 + 14728;
      }
      GameRoutine_60a020(v45, v46);
      v15 = "MID_Chapter_PartStory";
      goto LABEL_74;
    }
  LABEL_66:
    v40 = *msg_MessageManager_empty_text__ptr;
    goto LABEL_67;
  }
  v25 = msg_MessageManager_instance__ptr[0];
  v26 = GameData_212e348;
  v27 = msg_MessageManager_empty_text__ptr;
  if (*v18 != 0) {
    v28 = *msg_MessageManager_instance__ptr[0];
    v59_.v65 = -1;
    v59_.v66 = -1;
    v59_.v67 = -1;
    v59_.v68 = -1;
    v59_.v69 = -1;
    v59_.v70 = -1;
    v59_.v71 = -1;
    v59_.v72 = -1;
    v59_.v73 = -1;
    v59_.v74 = -1;
    v59_.v75 = -1;
    v59_.v76 = -1;
    v59_.v59 = GameData_212e348 + 2;
    v59_.v60 = 0xFFFF0001FFFF0000LL;
    v59_.v61 = (const char*)0xFFFF0004FFFF0002LL;
    v59_.v62 = 0xFFFF0006FFFF0005LL;
    v59_.v77 = 8;
    v59_.v63 = -65529;
    v59_.v64 = -65528;
    v29 = GameRoutine_a4dbe0(v28, v18, 0);
    if (v20 == nullptr) {
    LABEL_51:
      v31 = *v27;
      if (*v15 != 0) {
        goto LABEL_52;
      }
      goto LABEL_50;
    }
  }
  else {
    v29 = *msg_MessageManager_empty_text__ptr;
    if (v20 == nullptr) {
      goto LABEL_51;
    }
  }
  if (*v20 == 0) {
    goto LABEL_51;
  }
  v30 = *v25;
  v59_.v65 = -1;
  v59_.v66 = -1;
  v59_.v67 = -1;
  v59_.v68 = -1;
  v59_.v69 = -1;
  v59_.v70 = -1;
  v59_.v71 = -1;
  v59_.v72 = -1;
  v59_.v73 = -1;
  v59_.v74 = -1;
  v59_.v75 = -1;
  v59_.v76 = -1;
  v59_.v59 = v26 + 2;
  v59_.v60 = 0xFFFF0001FFFF0000LL;
  v59_.v61 = (const char*)0xFFFF0004FFFF0002LL;
  v59_.v62 = 0xFFFF0006FFFF0005LL;
  v59_.v77 = 8;
  v59_.v63 = -65529;
  v59_.v64 = -65528;
  v31 = GameRoutine_a4dbe0(v30, v20, 0);
  if (*v15 != 0) {
  LABEL_52:
    v33 = *v25;
    v59_.v65 = -1;
    v59_.v66 = -1;
    v59_.v67 = -1;
    v59_.v68 = -1;
    v59_.v69 = -1;
    v59_.v70 = -1;
    v59_.v71 = -1;
    v59_.v72 = -1;
    v59_.v73 = -1;
    v59_.v74 = -1;
    v59_.v75 = -1;
    v59_.v76 = -1;
    v59_.v59 = v26 + 2;
    v59_.v60 = 0xFFFF0001FFFF0000LL;
    v59_.v61 = (const char*)0xFFFF0004FFFF0002LL;
    v59_.v62 = 0xFFFF0006FFFF0005LL;
    v59_.v77 = 8;
    v59_.v63 = -65529;
    v59_.v64 = -65528;
    v32 = GameRoutine_a4dbe0(v33, v15, 0);
    goto LABEL_53;
  }
LABEL_50:
  v32 = *v27;
LABEL_53:
  if (v29 != nullptr) {
    v34 = v29;
  }
  else {
    v34 = *v27;
  }
  GameRoutine_60a020(*v25 + 14704, v34);
  if (v31 != nullptr) {
    v35 = v31;
  }
  else {
    v35 = *v27;
  }
  GameRoutine_60a020(*v25 + 14728, v35);
  v36 = *v25;
  if (v32 != nullptr) {
    v37 = v36 + 14752;
    v38 = v32;
  }
  else {
    v38 = *v27;
    v37 = v36 + 14752;
  }
  GameRoutine_60a020(v37, v38);
  v15 = "MID_Chapter_PartStoryChapter";
LABEL_74:
  LayoutAccessor_1562060(a1, (__int64)"T_PartStoryChapter", v15);
  v47 = (unsigned __int8)*a3;
  v48 = *a4;
  if (v47 == 2) {
    v52 = game_util_Format("MCID_2_title%02d", v48);
  }
  else if (v47 == 1) {
    v50 = (unsigned __int8)*a2;
    if ((_DWORD)v50 == 10) {
      v51 = nullptr;
    }
    else {
      v51 = GameData_20660e0[v50];
    }
    v52 = game_util_Format("MCID_1_%s_title%02d", v51, v48);
  }
  else if (*a3 != 0) {
    v52 = game_util_Format("MCID_3_ISM_title%02d", v48);
  }
  else {
    if (v48 == 3) {
      v49 = "MCID_0_ISM_title03_2";
      goto LABEL_87;
    }
    v52 = game_util_Format("MCID_0_ISM_title%02d", v48);
  }
  v49 = v52;
LABEL_87:
  v53 = strlen(v49);
  if (v53 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v54 = v53;
  if (v53 >= 0x17) {
    if ((v53 | 7) == 0x17) {
      v56 = 26;
    }
    else {
      v56 = (v53 | 7) + 1;
    }
    v55 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v56, 16, 0);
    v59_.v60 = v54;
    v59_.v61 = v55;
    v59_.v59 = (__int64*)(v56 | 1);
    goto LABEL_95;
  }
  LOBYTE(v59_.v59) = 2 * v53;
  v55 = (char*)&v59_.v59 + 1;
  if (v53 != 0) {
  LABEL_95:
    memmove((__int64)v55, (__int64)v49, v54);
  }
  v55[v54] = 0;
  if (((unsigned __int8)v59_.v59 & 1) != 0) {
    v57 = v59_.v61;
  }
  else {
    v57 = (char*)&v59_.v59 + 1;
  }
  LayoutAccessor_1562060(a1, (__int64)"T_TitleChapter", v57);
  if (((unsigned __int8)v59_.v59 & 1) != 0 && v59_.v61 != nullptr) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v58,
                                  (__int64)v59_.v61);
  }
}

void game_gameui_15d7d00(__int64* a1, int a2, char* a3, char* a4, char* a5,
                         __int64 a6, __int64 a7, int a8)
{
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char* v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  char v23;
  __int64 v24;
  char* v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  char* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  char* v36;
  char* v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int v57;
  __int64* v58;
  char* v59;
  char* v60;
  __int64 v61;
  char* v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  unsigned int v68;
  char* v69;
  char* v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  char* v78;
  __int64 v79;
  __int64 v80;
  int v81;
  char* v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  char* v86;
  char v87;
  __int64* v88;
  char* v89;
  __int64 v90;
  char* v91;
  char* v92;
  _QWORD* v93;
  __int64 v94;
  char* v95;
  __int64* v96;
  char* v97;
  __int64 v98;
  char* v99;
  char* v100;
  __int64* v101;
  _QWORD* v102;
  __int64 v103;
  char* v104;
  char* v105;
  _QWORD* v106;
  __int64 v107;
  char* v108;
  char* v109;
  _QWORD* v110;
  __int64 v111;
  char* v112;
  char* v113;
  _QWORD* v114;
  __int64 v115;
  char* v116;
  char* v117;
  _QWORD* v118;
  __int64 v119;
  _QWORD* v120;
  __int64 v121;
  _QWORD* v122;
  __int64 v123;
  __int64 v124;
  char v125;
  char* v126;
  char* v127;
  char* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  char* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  char* v138;
  __int64 v139;
  char* v140;
  __int64 v141;
  __int64 v142;
  char v143;
  float v144;
  __int64 v145;
  char v146;
  unsigned __int64 v147;
  float v148;
  char v149;
  char* v150;
  char* v151;
  _QWORD* v152;
  __int64 v153;
  char v154;
  char* v155;
  char* v156;
  _QWORD* v157;
  __int64 v158;
  char v159;
  char* v160;
  char* v161;
  _QWORD* v162;
  __int64 v163;
  char v164;
  char* v165;
  char* v166;
  _QWORD* v167;
  __int64 v168;
  char v169;
  char* v170;
  char* v171;
  _QWORD* v172;
  __int64 v173;
  char v174;
  char* v175;
  char* v176;
  _QWORD* v177;
  __int64 v178;
  char v179;
  _QWORD* v180;
  _QWORD* v181;
  __int64 v182;
  __int64 v183;
  char* v184;
  char* v185;
  char* v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  struct {
    unsigned __int64 v201;
    __int64 v202;
  } v201_;
  char v203[16];
  char* v204;
  _QWORD v205[2];
  char* v206;
  struct {
    _QWORD v207[2];
    char* v208;
  } v207_;
  struct {
    _QWORD v209[2];
    char* v210;
  } v209_;
  _QWORD v211[2];
  char* v212;
  __int64 v213;
  _BYTE v214[12];
  __int64* v215;

  v12 = game_util_Format("A_%s", a3);
  v13 = strlen(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_342;
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v211[1] = v14;
    v212 = v15;
    v211[0] = v16 | 1;
    goto LABEL_9;
  }
  LOBYTE(v211[0]) = 2 * v13;
  v15 = (char*)v211 + 1;
  if (v13 != 0) {
  LABEL_9:
    memmove((__int64)v15, (__int64)v12, v14);
  }
  v15[v14] = 0;
  if ((v211[0] & 1) != 0) {
    v17 = v212;
  }
  else {
    v17 = (char*)v211 + 1;
  }
  v18 = game_util_Format("%s%sL", v17, a4);
  v19 = strlen(v18);
  if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_342:
    String_60a1d0();
  }
  v20 = v19;
  if (v19 >= 0x17) {
    if ((v19 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v19 | 7) + 1;
    }
    v21 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v22, 16, 0);
    v209_.v209[1] = v20;
    v209_.v210 = v21;
    v209_.v209[0] = v22 | 1;
    goto LABEL_21;
  }
  LOBYTE(v209_.v209[0]) = 2 * v19;
  v21 = (char*)v209_.v209 + 1;
  if (v19 != 0) {
  LABEL_21:
    memmove((__int64)v21, (__int64)v18, v20);
  }
  v23 = v211[0];
  v24 = (__int64)v212;
  v21[v20] = 0;
  if ((v23 & 1) != 0) {
    v25 = (char*)v24;
  }
  else {
    v25 = (char*)v211 + 1;
  }
  v26 = game_util_Format("%s%sR", v25, a4);
  v27 = strlen(v26);
  if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_342;
  }
  v28 = v27;
  if (v27 >= 0x17) {
    if ((v27 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v27 | 7) + 1;
    }
    v29 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v30, 16, 0);
    v207_.v207[1] = v28;
    v207_.v208 = v29;
    v207_.v207[0] = v30 | 1;
    goto LABEL_33;
  }
  LOBYTE(v207_.v207[0]) = 2 * v27;
  v29 = (char*)v207_.v207 + 1;
  if (v27 != 0) {
  LABEL_33:
    memmove((__int64)v29, (__int64)v26, v28);
  }
  v29[v28] = 0;
  v31 = game_util_Format("L_%s%s", a3, a4);
  v32 = strlen(v31);
  if (v32 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_342;
  }
  v33 = v32;
  if (v32 >= 0x17) {
    if ((v32 | 7) == 0x17) {
      v35 = 26;
    }
    else {
      v35 = (v32 | 7) + 1;
    }
    v34 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v35,
                                                16, 0);
    v205[1] = v33;
    v206 = v34;
    v205[0] = v35 | 1;
    goto LABEL_42;
  }
  LOBYTE(v205[0]) = 2 * v32;
  v34 = (char*)v205 + 1;
  if (v32 != 0) {
  LABEL_42:
    memmove((__int64)v34, (__int64)v31, v33);
  }
  v34[v33] = 0;
  strcpy(v203, "\nL_Job");
  if (a5 == nullptr) {
    goto LABEL_98;
  }
  v36 = game_util_Format("A_%s%sL", a3, a5);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)v36, 0);
  v37 = game_util_Format("A_%s%sR", a3, a5);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)v37, 0);
  v38 = game_util_Format("L_%s%s%02d", a3, a5, 0);
  LayoutAccessor_1560070((void*)(&v201_.v201), a1, v38);
  if (v201_.v202 != 0) {
    v39 = std___1___shared_weak_count_lock(v201_.v202);
    v40 = v201_.v201;
    if (v201_.v202 != 0) {
      std___1___shared_weak_count___release_weak(v201_.v202);
    }
    if (v39 != 0 && v40 != 0) {
      LayoutAccessor_155e830(v40, 0);
    }
    else if (v39 == 0) {
      goto LABEL_53;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
      std___1___shared_weak_count___release_weak(v39);
    }
  }
LABEL_53:
  v41 = game_util_Format("L_%s%s%02d", a3, a5, 1);
  LayoutAccessor_1560070((void*)(&v201_.v201), a1, v41);
  if (v201_.v202 != 0) {
    v42 = std___1___shared_weak_count_lock(v201_.v202);
    v43 = v201_.v201;
    if (v201_.v202 != 0) {
      std___1___shared_weak_count___release_weak(v201_.v202);
    }
    if (v42 != 0 && v43 != 0) {
      LayoutAccessor_155e830(v43, 0);
    }
    else if (v42 == 0) {
      goto LABEL_62;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
      std___1___shared_weak_count___release_weak(v42);
    }
  }
LABEL_62:
  v44 = game_util_Format("L_%s%s%02d", a3, a5, 2);
  LayoutAccessor_1560070((void*)(&v201_.v201), a1, v44);
  if (v201_.v202 != 0) {
    v45 = std___1___shared_weak_count_lock(v201_.v202);
    v46 = v201_.v201;
    if (v201_.v202 != 0) {
      std___1___shared_weak_count___release_weak(v201_.v202);
    }
    if (v45 != 0 && v46 != 0) {
      LayoutAccessor_155e830(v46, 0);
    }
    else if (v45 == 0) {
      goto LABEL_71;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
      std___1___shared_weak_count___release_weak(v45);
    }
  }
LABEL_71:
  v47 = game_util_Format("L_%s%s%02d", a3, a5, 3);
  LayoutAccessor_1560070((void*)(&v201_.v201), a1, v47);
  if (v201_.v202 != 0) {
    v48 = std___1___shared_weak_count_lock(v201_.v202);
    v49 = v201_.v201;
    if (v201_.v202 != 0) {
      std___1___shared_weak_count___release_weak(v201_.v202);
    }
    if (v48 != 0 && v49 != 0) {
      LayoutAccessor_155e830(v49, 0);
    }
    else if (v48 == 0) {
      goto LABEL_80;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
      std___1___shared_weak_count___release_weak(v48);
    }
  }
LABEL_80:
  v50 = game_util_Format("L_%s%s%02d", a3, a5, 4);
  LayoutAccessor_1560070((void*)(&v201_.v201), a1, v50);
  if (v201_.v202 != 0) {
    v51 = std___1___shared_weak_count_lock(v201_.v202);
    v52 = v201_.v201;
    if (v201_.v202 != 0) {
      std___1___shared_weak_count___release_weak(v201_.v202);
    }
    if (v51 != 0 && v52 != 0) {
      LayoutAccessor_155e830(v52, 0);
    }
    else if (v51 == 0) {
      goto LABEL_89;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
      std___1___shared_weak_count___release_weak(v51);
    }
  }
LABEL_89:
  v53 = game_util_Format("L_%s%s%02d", a3, a5, 5);
  LayoutAccessor_1560070((void*)(&v201_.v201), a1, v53);
  if (v201_.v202 != 0) {
    v54 = std___1___shared_weak_count_lock(v201_.v202);
    v55 = v201_.v201;
    if (v201_.v202 != 0) {
      std___1___shared_weak_count___release_weak(v201_.v202);
    }
    if (v54 != 0 && v55 != 0) {
      LayoutAccessor_155e830(v55, 0);
      goto LABEL_96;
    }
    if (v54 != 0) {
    LABEL_96:
      if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
        std___1___shared_weak_count___release_weak(v54);
      }
    }
  }
LABEL_98:
  v215 = a1;
  v56 = 0;
  if (a8 >= 2) {
    v57 = 2;
  }
  else {
    v57 = a8;
  }
  do {
    v58 = (__int64*)&v204;
    if (v56 >= v57) {
      v59 = (char*)v205;
    }
    else {
      v59 = v203;
    }
    if (v56 < v57) {
      v60 = &v203[1];
    }
    else {
      v58 = (__int64*)&v206;
      v60 = (char*)v205 + 1;
    }
    v61 = *v58;
    if ((*v59 & 1) != 0) {
      v62 = (char*)v61;
    }
    else {
      v62 = v60;
    }
    v63 = game_util_Format("%s%02d", v62, (unsigned int)v56);
    LayoutAccessor_1560070((void*)(&v201_.v201), v215, v63);
    if (v201_.v202 != 0) {
      v64 = std___1___shared_weak_count_lock(v201_.v202);
      v65 = v201_.v201;
      if (v201_.v202 != 0) {
        std___1___shared_weak_count___release_weak(v201_.v202);
      }
      if (v64 != 0 && v65 != 0) {
        LayoutAccessor_155e830(v65, v56 < a2);
      }
      else if (v64 == 0) {
        goto LABEL_101;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
        std___1___shared_weak_count___release_weak(v64);
      }
    }
  LABEL_101:
    ++v56;
  } while (v56 != 6);
  if (a8 != 0) {
    v66 = v215;
    v67 = a7;
    if (a8 >= 1) {
      v68 = 0;
      while (1) {
        if ((v205[0] & 1) != 0) {
          v69 = v206;
        }
        else {
          v69 = (char*)v205 + 1;
        }
        v70 = game_util_Format("%s%02d", v69, v68);
        LayoutAccessor_1560070((void*)(&v201_.v201), v66, v70);
        if (v201_.v202 != 0) {
          v71 = std___1___shared_weak_count_lock(v201_.v202);
          v72 = v201_.v201;
          if (v201_.v202 != 0) {
            std___1___shared_weak_count___release_weak(v201_.v202);
          }
          if (v71 != 0 && v72 != 0) {
            LayoutAccessor_155e830(v72, 0);
          LABEL_134:
            if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
              std___1___shared_weak_count___release_weak(v71);
            }
            goto LABEL_123;
          }
          if (v71 != 0) {
            goto LABEL_134;
          }
        }
      LABEL_123:
        if (a8 == ++v68) {
          goto LABEL_160;
        }
      }
    }
    goto LABEL_160;
  }
  if ((v203[0] & 1) != 0) {
    v73 = v204;
  }
  else {
    v73 = &v203[1];
  }
  v74 = game_util_Format("%s%02d", v73, 0);
  v66 = v215;
  LayoutAccessor_1560070((void*)(&v201_.v201), v215, v74);
  v67 = a7;
  if (v201_.v202 != 0) {
    v75 = std___1___shared_weak_count_lock(v201_.v202);
    v76 = v201_.v201;
    if (v201_.v202 != 0) {
      std___1___shared_weak_count___release_weak(v201_.v202);
    }
    if (v75 != 0 && v76 != 0) {
      LayoutAccessor_155e830(v76, 0);
    LABEL_146:
      if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
        std___1___shared_weak_count___release_weak(v75);
      }
    }
    else if (v75 != 0) {
      goto LABEL_146;
    }
  }
  if ((v203[0] & 1) != 0) {
    v77 = v204;
  }
  else {
    v77 = &v203[1];
  }
  v78 = game_util_Format("%s%02d", v77, 1);
  LayoutAccessor_1560070((void*)(&v201_.v201), v66, v78);
  if (v201_.v202 != 0) {
    v79 = std___1___shared_weak_count_lock(v201_.v202);
    v80 = v201_.v201;
    if (v201_.v202 != 0) {
      std___1___shared_weak_count___release_weak(v201_.v202);
    }
    if (v79 != 0 && v80 != 0) {
      LayoutAccessor_155e830(v80, 0);
    }
    else if (v79 == 0) {
      goto LABEL_160;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
      std___1___shared_weak_count___release_weak(v79);
    }
  }
LABEL_160:
  if (v67 != 0) {
    v81 = a2 + 1;
  }
  else {
    v81 = a2;
  }
  if ((v209_.v209[0] & 1) != 0) {
    v82 = v209_.v210;
  }
  else {
    v82 = (char*)v209_.v209 + 1;
  }
  v83 = ui_LayoutAccessor_FindPane(v66, (__int64)v82);
  if ((v207_.v207[0] & 1) != 0) {
    v84 = v207_.v208;
  }
  else {
    v84 = (char*)v207_.v207 + 1;
  }
  v85 = ui_LayoutAccessor_FindPane(v66, (__int64)v84);
  if (v81 < 4) {
    if ((v205[0] & 1) != 0) {
      v150 = v206;
    }
    else {
      v150 = (char*)v205 + 1;
    }
    v151 = game_util_Format("%s%02d", v150, 0);
    v152 = (_QWORD*)ui_LayoutAccessor_FindPane(v66, (__int64)v151);
    if (v152 != nullptr) {
      v153 = (__int64)v152;
      Pane_58df60(v152[3], v152);
      Pane_58dee0(v83, v153);
      v154 = *(_BYTE*)(v153 + 88);
      *(_QWORD*)(v153 + 48) = 0;
      *(_DWORD*)(v153 + 56) = 0;
      *(_BYTE*)(v153 + 88) = v154 | 0x10;
    }
    if ((v205[0] & 1) != 0) {
      v155 = v206;
    }
    else {
      v155 = (char*)v205 + 1;
    }
    v156 = game_util_Format("%s%02d", v155, 1);
    v157 = (_QWORD*)ui_LayoutAccessor_FindPane(v66, (__int64)v156);
    if (v157 != nullptr) {
      v158 = (__int64)v157;
      Pane_58df60(v157[3], v157);
      Pane_58dee0(v83, v158);
      v159 = *(_BYTE*)(v158 + 88);
      *(_QWORD*)(v158 + 48) = 0;
      *(_DWORD*)(v158 + 56) = 0;
      *(_BYTE*)(v158 + 88) = v159 | 0x10;
    }
    if ((v205[0] & 1) != 0) {
      v160 = v206;
    }
    else {
      v160 = (char*)v205 + 1;
    }
    v161 = game_util_Format("%s%02d", v160, 2);
    v162 = (_QWORD*)ui_LayoutAccessor_FindPane(v66, (__int64)v161);
    if (v162 != nullptr) {
      v163 = (__int64)v162;
      Pane_58df60(v162[3], v162);
      Pane_58dee0(v83, v163);
      v164 = *(_BYTE*)(v163 + 88);
      *(_QWORD*)(v163 + 48) = 0;
      *(_DWORD*)(v163 + 56) = 0;
      *(_BYTE*)(v163 + 88) = v164 | 0x10;
    }
    if ((v205[0] & 1) != 0) {
      v165 = v206;
    }
    else {
      v165 = (char*)v205 + 1;
    }
    v166 = game_util_Format("%s%02d", v165, 3);
    v167 = (_QWORD*)ui_LayoutAccessor_FindPane(v66, (__int64)v166);
    if (v167 != nullptr) {
      v168 = (__int64)v167;
      Pane_58df60(v167[3], v167);
      Pane_58dee0(v85, v168);
      v169 = *(_BYTE*)(v168 + 88);
      *(_QWORD*)(v168 + 48) = 0;
      *(_DWORD*)(v168 + 56) = 0;
      *(_BYTE*)(v168 + 88) = v169 | 0x10;
    }
    if ((v205[0] & 1) != 0) {
      v170 = v206;
    }
    else {
      v170 = (char*)v205 + 1;
    }
    v171 = game_util_Format("%s%02d", v170, 4);
    v172 = (_QWORD*)ui_LayoutAccessor_FindPane(v66, (__int64)v171);
    if (v172 != nullptr) {
      v173 = (__int64)v172;
      Pane_58df60(v172[3], v172);
      Pane_58dee0(v85, v173);
      v174 = *(_BYTE*)(v173 + 88);
      *(_QWORD*)(v173 + 48) = 0;
      *(_DWORD*)(v173 + 56) = 0;
      *(_BYTE*)(v173 + 88) = v174 | 0x10;
    }
    if ((v205[0] & 1) != 0) {
      v175 = v206;
    }
    else {
      v175 = (char*)v205 + 1;
    }
    v176 = game_util_Format("%s%02d", v175, 5);
    v177 = (_QWORD*)ui_LayoutAccessor_FindPane(v66, (__int64)v176);
    if (v177 != nullptr) {
      v178 = (__int64)v177;
      Pane_58df60(v177[3], v177);
      Pane_58dee0(v85, v178);
      v179 = *(_BYTE*)(v178 + 88);
      *(_QWORD*)(v178 + 48) = 0;
      *(_DWORD*)(v178 + 56) = 0;
      *(_BYTE*)(v178 + 88) = v179 | 0x10;
    }
    v180 = (_QWORD*)ui_LayoutAccessor_FindPane(v66, a6);
    if (v180 != nullptr) {
      v181 = v180;
      Pane_58df60(v180[3], v180);
      Pane_58dee0(v83, (__int64)v181);
      v182 = v181[3];
      Pane_58df60(v182, v181);
      v183 = v182;
      v66 = v215;
      Pane_58dee0(v183, (__int64)v181);
    }
    if ((v207_.v207[0] & 1) != 0) {
      v184 = v207_.v208;
    }
    else {
      v184 = (char*)v207_.v207 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)v66, (__int64)v184, 0);
    if ((v209_.v209[0] & 1) != 0) {
      v185 = v209_.v210;
    }
    else {
      v185 = (char*)v209_.v209 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)v66, (__int64)v185, 1);
    if ((v209_.v209[0] & 1) != 0) {
      v186 = v209_.v210;
    }
    else {
      v186 = (char*)v209_.v209 + 1;
    }
    v187 = ui_LayoutAccessor_FindAlignment(v66, v186);
    if (v187 != 0) {
      Alignment_56b600(v187);
      v188 = v66[1];
      if (v188 != 0) {
        v189 = std___1___shared_weak_count_lock(v188);
        if (v189 != 0) {
          v190 = v189;
          if (*v66 != 0) {
            ControlCreator_13633c0(*v66);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v190 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v190 + 16LL))(v190);
            std___1___shared_weak_count___release_weak(v190);
          }
        }
      }
    }
  }
  else {
    if (a8 <= 0) {
      v86 = (char*)v205;
    }
    else {
      v86 = v203;
    }
    v87 = *v86;
    if (a8 <= 0) {
      v88 = (__int64*)&v206;
    }
    else {
      v88 = (__int64*)&v204;
    }
    if (a8 <= 0) {
      v89 = (char*)v205 + 1;
    }
    else {
      v89 = &v203[1];
    }
    v90 = *v88;
    if ((v87 & 1) != 0) {
      v91 = (char*)v90;
    }
    else {
      v91 = v89;
    }
    v92 = game_util_Format("%s%02d", v91, 0);
    v93 = (_QWORD*)ui_LayoutAccessor_FindPane(v66, (__int64)v92);
    if (v93 != nullptr) {
      v94 = (__int64)v93;
      Pane_58df60(v93[3], v93);
      Pane_58dee0(v83, v94);
    }
    if (a8 <= 1) {
      v95 = (char*)v205;
    }
    else {
      v95 = v203;
    }
    if (a8 <= 1) {
      v96 = (__int64*)&v206;
    }
    else {
      v96 = (__int64*)&v204;
    }
    if (a8 <= 1) {
      v97 = (char*)v205 + 1;
    }
    else {
      v97 = &v203[1];
    }
    v98 = *v96;
    if ((*v95 & 1) != 0) {
      v99 = (char*)v98;
    }
    else {
      v99 = v97;
    }
    v100 = game_util_Format("%s%02d", v99, 1);
    v101 = v215;
    v102 = (_QWORD*)ui_LayoutAccessor_FindPane(v215, (__int64)v100);
    if (v102 != nullptr) {
      v103 = (__int64)v102;
      Pane_58df60(v102[3], v102);
      Pane_58dee0(v85, v103);
    }
    if ((v205[0] & 1) != 0) {
      v104 = v206;
    }
    else {
      v104 = (char*)v205 + 1;
    }
    v105 = game_util_Format("%s%02d", v104, 2);
    v106 = (_QWORD*)ui_LayoutAccessor_FindPane(v101, (__int64)v105);
    if (v106 != nullptr) {
      v107 = (__int64)v106;
      Pane_58df60(v106[3], v106);
      Pane_58dee0(v83, v107);
    }
    if ((v205[0] & 1) != 0) {
      v108 = v206;
    }
    else {
      v108 = (char*)v205 + 1;
    }
    v109 = game_util_Format("%s%02d", v108, 3);
    v110 = (_QWORD*)ui_LayoutAccessor_FindPane(v101, (__int64)v109);
    if (v110 != nullptr) {
      v111 = (__int64)v110;
      Pane_58df60(v110[3], v110);
      Pane_58dee0(v85, v111);
    }
    if ((v205[0] & 1) != 0) {
      v112 = v206;
    }
    else {
      v112 = (char*)v205 + 1;
    }
    v113 = game_util_Format("%s%02d", v112, 4);
    v114 = (_QWORD*)ui_LayoutAccessor_FindPane(v101, (__int64)v113);
    if (v114 != nullptr) {
      v115 = (__int64)v114;
      Pane_58df60(v114[3], v114);
      Pane_58dee0(v83, v115);
    }
    if ((v205[0] & 1) != 0) {
      v116 = v206;
    }
    else {
      v116 = (char*)v205 + 1;
    }
    v117 = game_util_Format("%s%02d", v116, 5);
    v118 = (_QWORD*)ui_LayoutAccessor_FindPane(v101, (__int64)v117);
    if (v118 != nullptr) {
      v119 = (__int64)v118;
      Pane_58df60(v118[3], v118);
      Pane_58dee0(v85, v119);
    }
    v120 = (_QWORD*)ui_LayoutAccessor_FindPane(v101, a6);
    if (v120 != nullptr) {
      v121 = (__int64)v120;
      if (a7 != 0) {
        Pane_58df60(v120[3], v120);
        Pane_58dee0(v83, v121);
        v122 = (_QWORD*)ui_LayoutAccessor_FindPane(v101, a7);
        if (v122 != nullptr) {
          v123 = (__int64)v122;
          Pane_58df60(v122[3], v122);
          Pane_58dee0(v121, v123);
        }
        v124 = *(_QWORD*)(v121 + 24);
        Pane_58df60(v124, (_QWORD*)v121);
        Pane_58dee0(v124, v121);
      }
      v125 = *(_BYTE*)(v121 + 88) & 0xFE;
      if (a7 != 0) {
        ++v125;
      }
      *(_BYTE*)(v121 + 88) = v125;
    }
    if ((v209_.v209[0] & 1) != 0) {
      v126 = v209_.v210;
    }
    else {
      v126 = (char*)v209_.v209 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)v101, (__int64)v126, 1);
    if ((v207_.v207[0] & 1) != 0) {
      v127 = v207_.v208;
    }
    else {
      v127 = (char*)v207_.v207 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)v101, (__int64)v127, 1);
    if ((v209_.v209[0] & 1) != 0) {
      v128 = v209_.v210;
    }
    else {
      v128 = (char*)v209_.v209 + 1;
    }
    v129 = ui_LayoutAccessor_FindAlignment(v101, v128);
    if (v129 != 0) {
      Alignment_56b600(v129);
      v130 = v101[1];
      if (v130 != 0) {
        v131 = std___1___shared_weak_count_lock(v130);
        if (v131 != 0) {
          v132 = v131;
          if (*v101 != 0) {
            ControlCreator_13633c0(*v101);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v132 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v132 + 16LL))(v132);
            std___1___shared_weak_count___release_weak(v132);
          }
        }
      }
    }
    if ((v207_.v207[0] & 1) != 0) {
      v133 = v207_.v208;
    }
    else {
      v133 = (char*)v207_.v207 + 1;
    }
    v134 = ui_LayoutAccessor_FindAlignment(v101, v133);
    if (v134 != 0) {
      Alignment_56b600(v134);
      v135 = v101[1];
      if (v135 != 0) {
        v136 = std___1___shared_weak_count_lock(v135);
        if (v136 != 0) {
          v137 = v136;
          if (*v101 != 0) {
            ControlCreator_13633c0(*v101);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v137 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v137 + 16LL))(v137);
            std___1___shared_weak_count___release_weak(v137);
          }
        }
      }
    }
    if (a2 >= 3) {
      if ((v209_.v209[0] & 1) != 0) {
        v138 = v209_.v210;
      }
      else {
        v138 = (char*)v209_.v209 + 1;
      }
      v139 = ui_LayoutAccessor_FindPane(v101, (__int64)v138);
      if ((v207_.v207[0] & 1) != 0) {
        v140 = v207_.v208;
      }
      else {
        v140 = (char*)v207_.v207 + 1;
      }
      v141 = ui_LayoutAccessor_FindPane(v101, (__int64)v140);
      v142 = ui_LayoutAccessor_FindPane(v101, a6);
      if (v142 != 0) {
        v143 = *(_BYTE*)(v142 + 88);
        v144 = 0x0.0p+0f;
        v145 = v142;
        v214[0] = 0;
        v146 = v143 & 1;
        *(_BYTE*)(v142 + 88) = v143 & 0xFE;
        v201_.v201 = 0xFF7FFFFF7F7FFFFFLL;
        v213 = 0x7F7FFFFFFF7FFFFFLL;
        if (v139 != 0) {
          v147 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v139 + 128),
                                       *(float32x4_t*)(v139 + 128)))
                     .n128_u64[0];
          GameRoutine_156bee0(
              v139, (__int64)&v201_.v201, (__int64)&v213, (__int64)v214, 0,
              sqrtf((float)(*(float*)&v147 +
                            (float)(COERCE_FLOAT(*(_OWORD*)(v139 + 112)) *
                                    COERCE_FLOAT(*(_OWORD*)(v139 + 112)))) +
                    (float)(COERCE_FLOAT(*(_OWORD*)(v139 + 144)) *
                            COERCE_FLOAT(*(_OWORD*)(v139 + 144)))) /
                  *(float*)(v139 + 72),
              sqrtf((float)(*((float*)&v147 + 1) +
                            (float)(COERCE_FLOAT(
                                        HIDWORD(*(_QWORD*)(v139 + 112))) *
                                    COERCE_FLOAT(
                                        HIDWORD(*(_QWORD*)(v139 + 112))))) +
                    (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v139 + 144))) *
                            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v139 + 144))))) /
                  *(float*)(v139 + 76));
          if (v214[0] == 1) {
            v144 = vabds_f32(*(float*)&v213, *(float*)&v201_.v201);
          }
        }
        *(_BYTE*)(v145 + 88) = *(_BYTE*)(v145 + 88) & 0xFE | v146;
      }
      else {
        v144 = 0x0.0p+0f;
        v214[0] = 0;
        v201_.v201 = 0xFF7FFFFF7F7FFFFFLL;
        v213 = 0x7F7FFFFFFF7FFFFFLL;
        if (v139 != 0) {
          v196 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v139 + 128),
                                       *(float32x4_t*)(v139 + 128)))
                     .n128_u64[0];
          GameRoutine_156bee0(
              v139, (__int64)&v201_.v201, (__int64)&v213, (__int64)v214, 0,
              sqrtf((float)(*(float*)&v196 +
                            (float)(COERCE_FLOAT(*(_OWORD*)(v139 + 112)) *
                                    COERCE_FLOAT(*(_OWORD*)(v139 + 112)))) +
                    (float)(COERCE_FLOAT(*(_OWORD*)(v139 + 144)) *
                            COERCE_FLOAT(*(_OWORD*)(v139 + 144)))) /
                  *(float*)(v139 + 72),
              sqrtf((float)(*((float*)&v196 + 1) +
                            (float)(COERCE_FLOAT(
                                        HIDWORD(*(_QWORD*)(v139 + 112))) *
                                    COERCE_FLOAT(
                                        HIDWORD(*(_QWORD*)(v139 + 112))))) +
                    (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v139 + 144))) *
                            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v139 + 144))))) /
                  *(float*)(v139 + 76));
          if (v214[0] == 1) {
            v144 = vabds_f32(*(float*)&v213, *(float*)&v201_.v201);
          }
        }
      }
      v148 = *(float*)(v139 + 48);
      *(_QWORD*)(v141 + 52) = *(_QWORD*)(v139 + 52);
      v149 = *(_BYTE*)(v141 + 88);
      *(float*)(v141 + 48) = v148 + (float)(v144 + 0x1.4000000000000p+3f);
      *(_BYTE*)(v141 + 88) = v149 | 0x10;
    }
  }
  if ((v203[0] & 1) != 0 && v204 != nullptr) {
    v191 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v191 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v191,
                                  (__int64)v204);
  }
  if ((v205[0] & 1) != 0 && v206 != nullptr) {
    v192 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v192 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v192,
                                  (__int64)v206);
  }
  if ((v207_.v207[0] & 1) != 0 && v207_.v208 != nullptr) {
    v193 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v193 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v193,
                                  (__int64)v207_.v208);
  }
  if ((v209_.v209[0] & 1) != 0 && v209_.v210 != nullptr) {
    v194 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v194 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v194,
                                  (__int64)v209_.v210);
  }
  if ((v211[0] & 1) != 0 && v212 != nullptr) {
    v195 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v195 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v195,
                                  (__int64)v212);
  }
}

__int64 game_gameui_173e750(__int64 a1, __int64 a2, __int64 a3, char a4,
                            char a5)
{
  __int64* v7;
  __int64 v8;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char v17;
  char v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  _BYTE* v38;
  __int64 result;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  struct {
    __int64 v51;
    unsigned __int64 v52;
    char* v53;
  } v51_;
  struct {
    __int64 v54;
    __int64 v55;
    char* v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
  } v54_;

  v7 = GameData_2130f90[0];
  v8 = *GameData_2130f90[0];
  if (*GameData_2130f90[0] == 0) {
    v11 = a2;
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        200, 16, 0);
    v12 = GameData_212c608[0];
    *(_QWORD*)(v8 + 96) = 0;
    *(_QWORD*)(v8 + 104) = 0;
    *(_QWORD*)(v8 + 112) = 0;
    *(_QWORD*)(v8 + 120) = 0;
    *(_QWORD*)(v8 + 128) = 0;
    *(_WORD*)(v8 + 136) = 0;
    *(_QWORD*)(v8 + 16) = 0;
    *(_QWORD*)(v8 + 24) = "NULL";
    *(_QWORD*)(v8 + 138) = 0;
    *(_QWORD*)(v8 + 144) = 0;
    *(_QWORD*)(v8 + 32) = 0;
    *(_QWORD*)(v8 + 40) = 0;
    *(_QWORD*)(v8 + 48) = 0;
    *(_QWORD*)(v8 + 56) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 72) = 0;
    *(_QWORD*)(v8 + 80) = 0;
    *(_QWORD*)(v8 + 88) = 0;
    *(_QWORD*)v8 = v12 + 16;
    *(_QWORD*)(v8 + 8) = 0;
    game_ProcInst_Register(v8);
    *v7 = v8;
    *(_WORD*)(v8 + 152) = 0;
    *(_BYTE*)(v8 + 154) = 0;
    *(_WORD*)(v8 + 160) = 0;
    *(_QWORD*)(v8 + 184) = a3;
    *(_QWORD*)(v8 + 192) = 0;
    *(_QWORD*)v8 = game_gameui_ProcMovie_vtable;
    *(_QWORD*)(v8 + 192) = *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(a3) + 24) + 8LL);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21c6868) != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      __cxa_guard_release((__int64)&GameData_21c6868);
    }
    if (a1 != 0) {
      v13 = *(_QWORD*)(a1 + 40);
      if (v13 != 0) {
        *(_QWORD*)(v13 + 48) = v8;
        *(_QWORD*)(v8 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v8;
      *(_QWORD*)(v8 + 24) = "ProcMovie";
      *(_QWORD*)(v8 + 32) = a1;
      *(_DWORD*)(v8 + 140) = (unsigned int)game_HashString32("ProcMovie");
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 24;
      *(_QWORD*)(v8 + 80) = 1;
      *(_QWORD*)(v8 + 8) = &GameData_21c67a8;
      *(_QWORD*)(v8 + 16) = &GameData_21c67a8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8) & 1) != 0) {
        a2 = v11;
        if ((*(_WORD*)(v8 + 136) & 0x100) == 0) {
          *(_WORD*)(v8 + 136) |= 0x100u;
        }
        goto LABEL_12;
      }
    }
    else if ((*(_WORD*)(v8 + 136) & 1) == 0) {
      ProcInst_657a50(v8, 1);
    }
    a2 = v11;
  }
LABEL_12:
  v14 = v8;
  v54_.v57 = v54_.v59;
  v54_.v58 = v54_.v60;
  v54_.v62 = v54_.v61;
  v16 = v8 + 160;
  v15 = *(unsigned __int8*)(v8 + 160);
  v17 = a5 & 1;
  v18 = a4 & 1;
  v19 = a2;
  v20 = v14;
  if ((v15 & 1) != 0) {
    v21 = *(_QWORD*)(v14 + 168);
  }
  else {
    v21 = v15 >> 1;
  }
  if (v21 != 0) {
    Manager_18cfba0(*GameData_212c598[0]);
  }
  if (v19 == 0) {
    goto LABEL_54;
  }
  v22 = game_HashString(v19);
  if (v22 == 0) {
    goto LABEL_54;
  }
  v23 = *(_QWORD*)(GameData_21c9fd0 + 96);
  if (v23 == 0 || *(_QWORD*)(GameData_21c9fd0 + 112) == 0) {
    goto LABEL_54;
  }
  v25 = v23 - 1;
  if ((v23 & (v23 - 1)) != 0) {
    v26 = v22;
    if (v22 >= v23) {
      v26 = v22 % v23;
    }
  }
  else {
    v26 = v25 & v22;
  }
  v27 = *(_QWORD**)(*(_QWORD*)(GameData_21c9fd0 + 88) + 8 * v26);
  if (v27 == nullptr) {
    goto LABEL_54;
  }
  v28 = (_QWORD*)*v27;
  if (v28 == nullptr) {
    goto LABEL_54;
  }
  if ((v23 & v25) == 0) {
    while (1) {
      v30 = v28[1];
      if (v30 == v22) {
        if (v28[2] == v22) {
          goto LABEL_46;
        }
      }
      else if ((v30 & v25) != v26) {
        goto LABEL_54;
      }
      v28 = (_QWORD*)*v28;
      if (v28 == nullptr) {
        goto LABEL_54;
      }
    }
  }
  while (1) {
    v29 = v28[1];
    if (v29 == v22) {
      break;
    }
    if (v29 >= v23) {
      v29 %= v23;
    }
    if (v29 != v26) {
      goto LABEL_54;
    }
  LABEL_35:
    v28 = (_QWORD*)*v28;
    if (v28 == nullptr) {
      goto LABEL_54;
    }
  }
  if (v28[2] != v22) {
    goto LABEL_35;
  }
LABEL_46:
  v31 = v28[3];
  if (v31 == 0) {
  LABEL_54:
    if ((*(_BYTE*)v16 & 1) != 0) {
      v38 = *(_BYTE**)(v20 + 176);
      *(_QWORD*)(v20 + 168) = 0;
    }
    else {
      v38 = (_BYTE*)(v20 + 161);
      *(_BYTE*)(v20 + 160) = 0;
    }
    *v38 = 0;
    goto LABEL_58;
  }
  v32 = *(const char**)(v31 + 32);
  if (v32 != nullptr) {
    v33 = v32;
  }
  else {
    v33 = &GameData_1a9f09e;
  }
  v34 = strlen(v33);
  if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v35 = v34;
  v36 = fw_memory_g_heap_manager_ptr;
  if (v34 >= 0x17) {
    if ((v34 | 7) == 0x17) {
      v40 = 26;
    }
    else {
      v40 = (v34 | 7) + 1;
    }
    v37 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v40, 16, 0);
    v51_.v52 = v35;
    v51_.v53 = v37;
    v51_.v51 = v40 | 1;
    goto LABEL_63;
  }
  LOBYTE(v51_.v51) = 2 * v34;
  v37 = (char*)&v51_.v51 + 1;
  if (v34 != 0) {
  LABEL_63:
    memmove((__int64)v37, (__int64)v33, v35);
  }
  v41 = *(_QWORD*)v36;
  v37[v35] = 0;
  v42 = (char*)fw_memory_HeapManager_Allocate(v41, 32, 16, 0);
  v54_.v55 = 24;
  v54_.v56 = v42;
  v54_.v54 = 33;
  strcpy(v42, "Contents:/Movie/Product/");
  if ((v51_.v51 & 1) != 0) {
    v43 = v51_.v53;
  }
  else {
    v43 = (char*)&v51_.v51 + 1;
  }
  if ((v51_.v51 & 1) != 0) {
    v44 = v51_.v52;
  }
  else {
    v44 = (unsigned __int64)(unsigned __int8)v51_.v51 >> 1;
  }
  GameRoutine_1a09ce0((__int64)&v54_.v54, v43, v44);
  if ((*(_BYTE*)v16 & 1) != 0) {
    v45 = *(_QWORD*)(v20 + 176);
    if (v45 != 0) {
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v36 + v46, v45);
    }
  }
  v47 = v54_.v54;
  v48 = v54_.v55;
  LOWORD(v54_.v54) = 0;
  *(_QWORD*)v16 = v47;
  *(_QWORD*)(v16 + 8) = v48;
  *(_QWORD*)(v16 + 16) = v54_.v56;
  if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v36 + v49, (__int64)v51_.v53);
  }
  v50 = GameData_212c598[0];
  if ((Manager_18cfcb0(*GameData_212c598[0]) & 1) == 0) {
    Manager_18cf910(*v50, v16);
  }
LABEL_58:
  result = Pane_58f8a0(*(_QWORD*)(v20 + 184));
  *(_QWORD*)(*(_QWORD*)(result + 24) + 8LL) = *(_QWORD*)(v20 + 192);
  *(_BYTE*)(*(_QWORD*)(v20 + 184) + 88LL) &= ~1u;
  *(_BYTE*)(v20 + 154) = 0;
  *(_BYTE*)(v20 + 153) = v18;
  *(_BYTE*)(v20 + 152) = v17;
  return result;
}

#pragma GCC visibility pop
