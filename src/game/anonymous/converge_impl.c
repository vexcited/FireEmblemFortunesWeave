#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicInfo_15e5fa0(void);
__int64 GameConverge_8ea590(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameConverge_8f23a0(_QWORD);
__int64 GameConverge_8f24c0(_QWORD, _QWORD);
__int64 GameRoutine_177d0e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_8ea690(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d54a0(_QWORD, _QWORD);
__int64 GameSubquestData_1257620(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*GameData_2004e18[])();
extern __int64 (*GameData_2004e98[])();
extern __int64 (*GameData_2004f08[])();
extern __int64 (*GameData_2004f88[])();
extern __int64 (*GameData_2005098[])();
extern __int64 (*GameData_2005218[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_8f2260(void);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor_alt1(
    _QWORD* a1) __asm__("game_anonymous_ConvergeImpl_TryRunConverge_closure_"
                        "Destructor");
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure_Clone(_QWORD* a1);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure_CloneInto_alt1(
    _QWORD* result, _QWORD* a2) __asm__("game_anonymous_ConvergeImpl_"
                                        "TryRunConverge_closure_CloneInto");
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure_Destroy_alt1(
    __int64 a1) __asm__("game_anonymous_ConvergeImpl_TryRunConverge_closure_"
                        "Destroy");
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destructor_alt1(
    _QWORD* a1) __asm__("game_anonymous_ConvergeImpl_TryRunConverge_closure0_"
                        "Destructor");
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure0_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure0_Clone(_QWORD* a1);
_QWORD*
game_anonymous_ConvergeImpl_TryRunConverge_closure0_CloneInto(_QWORD* result,
                                                              _QWORD* a2);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destroy_alt1(
    __int64 a1) __asm__("game_anonymous_ConvergeImpl_TryRunConverge_closure0_"
                        "Destroy");
__int64 game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destructor_alt1(
    _QWORD* a1) __asm__("game_anonymous_ConvergeImpl_RunAutoGrowthDialog_"
                        "closure_Destructor");
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD*
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Clone(_QWORD* a1);
_QWORD* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_CloneInto_alt1(
    _QWORD* result,
    _QWORD* a2) __asm__("game_anonymous_ConvergeImpl_RunAutoGrowthDialog_"
                        "closure_CloneInto");
__int64 game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destroy_alt1(
    __int64 a1) __asm__("game_anonymous_ConvergeImpl_RunAutoGrowthDialog_"
                        "closure_Destroy");
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Invoke(__int64 a1,
                                                               __int64* a2);
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destructor_alt1(
    _QWORD* a1) __asm__("game_anonymous_ConvergeImpl_RunAutoGrowthDialog_"
                        "closure0_Destructor");
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD*
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Clone(_QWORD* a1);
_QWORD* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_CloneInto(
    _QWORD* result, _QWORD* a2);
__int64 game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destroy_alt1(
    __int64 a1) __asm__("game_anonymous_ConvergeImpl_RunAutoGrowthDialog_"
                        "closure0_Destroy");
__int64
game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Invoke(__int64 a1);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destructor_alt1(
    _QWORD* a1) __asm__("game_anonymous_ConvergeImpl_TryRunConverge_closure1_"
                        "Destructor");
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure1_DeletingDestructor(
    _QWORD* a1, long double a2);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure1_Clone(_QWORD* a1);
_QWORD*
game_anonymous_ConvergeImpl_TryRunConverge_closure1_CloneInto(_QWORD* result,
                                                              _QWORD* a2);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destroy_alt1(
    __int64 a1) __asm__("game_anonymous_ConvergeImpl_TryRunConverge_closure1_"
                        "Destroy");
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure2_Invoke();
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure3_Invoke(__int64 a1,
                                                                   __int64* a2);
_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure4_Clone(__int64 a1);
__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure4_Invoke(__int64 a1,
                                                                   __int64* a2);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* GameConverge_8f2280(__int64*, __int64*);
__int64* GameRoutine_6b7aa0(__int64* result, __int64*, __int64*,
                            unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameConst_7f97f0(__int64);
__int64 ProcList_9bd480(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_2004d98[])();
extern __int64 (*GameData_2005118[])();
extern __int64 (*GameData_2005198[])();
extern __int64 (
    *game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destructor_ptr[])();
extern __int64 (
    *game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destructor_ptr[])();
extern __int64 (
    *game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor_ptr[])();
void GameConverge_8f23a0_alt1(__int64*) __asm__("GameConverge_8f23a0");
void GameRoutine_1050140(__int64**, __int64*);
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn))
GameRoutine_8f2260_alt1() __asm__("GameRoutine_8f2260");
bool ConvergeImpl_104f0e0(__int64 a1, __int64 a2);
__int64* GameConverge_8f24c0_alt1(__int64*,
                                  __int64*) __asm__("GameConverge_8f24c0");
extern __int64 (
    *game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destructor_ptr
        [])();
extern __int64 (
    *game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destructor_ptr
        [])();
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor(_QWORD* a1);
__int64*
game_anonymous_ConvergeImpl_TryRunConverge_closure_CloneInto(__int64* result,
                                                             _QWORD* a2);
void game_anonymous_ConvergeImpl_TryRunConverge_closure_Destroy(__int64 a1);
void game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destructor(_QWORD* a1);
void game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destroy(__int64 a1);
void game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destructor(
    _QWORD* a1);
__int64* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_CloneInto(
    __int64* result, _QWORD* a2);
void game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destroy(
    __int64 a1);
void game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destructor(
    _QWORD* a1);
void game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destroy(
    __int64 a1);
void game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destructor(_QWORD* a1);
void game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destroy(__int64 a1);
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
__attribute__((swiftcall)) void GameConverge_8ea8c0(PSEUDO_X8, __int64 result,
                                                    unsigned __int8, char);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64 result, unsigned __int8*, __int64, char);
__int64 (**game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit(
    __int64, unsigned int))();
__int64 GameConverge_8ea270(__int64, unsigned int, __int64);
__int64 GameRoutine_8f31e0(_QWORD*, unsigned __int64*);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 LegionPool_936cf0(__int64 result, __int64);
__int64 RidePool_93c2e0(__int64 result, __int64);
__int64 UnitHeroes_6d2b90(__int64, unsigned __int8*);
__int64 game_GetHero(unsigned __int8);
__int64 memcpy(__int64, __int64, unsigned __int64);
bool UnitHeroes_6d2c90(__int64, __int64*);
char* GameHr_67ed20(_QWORD*);
extern __int64* GameData_212c8a0;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern __int64 GameData_21ca060;
unsigned __int64 strlen(const char*);
void GameRoutine_1050140_alt1(__int64*,
                              __int64*) __asm__("GameRoutine_1050140");
void GameRoutine_6e3b50(__int64, _QWORD*);
void GameRoutine_7a8220(__int64*, _QWORD*);
void __attribute__((noreturn)) String_60a1d0();
void game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit(
    __int64*, unsigned int);
void game_anonymous_ConvergeImpl_SetupConvergeResult_closure_Invoke(
    __int64 a1, unsigned __int8* a2);

bool ConvergeImpl_104f0e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  char* v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  char* v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  char* v90;
  char* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64* v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  _BYTE* v110;
  __int64* v111;
  __int64* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64* v116;
  __int64* v117;
  __int64 v118;
  __int64* v119;
  __int64 v120;
  __int64 v121;
  __int64* v123;
  char* v124;
  char* v125;
  char* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  struct {
    _BYTE v132[32];
    _BYTE* v133;
  } v132_;
  struct {
    __int64* v134;
    __int64* v135;
    __int64 v136;
  } v134_;
  struct {
    _BYTE v137[32];
    _BYTE* v138;
    char gap168_[16];
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
    __int64 v144;
  } v137_;
  __int64 v145[2];
  struct {
    __int64* v146;
    __int64* v147;
    __int64* v148;
  } v146_;
  struct {
    __int64 (**v149)();
    __int64 v150;
    char* v151;
    __int64* v152;
    __int64* v153;
    __int64 v154;
  } v149_;
  char v155;

  v3 = *(_QWORD*)(a2 + 32);
  v134_.v135 = nullptr;
  v134_.v136 = 0;
  v134_.v134 = nullptr;
  if (v3 == 0) {
    goto LABEL_4;
  }
  if (v3 != a2) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  LABEL_4:
    v4 = nullptr;
    v132_.v133 = (_BYTE*)v3;
    goto LABEL_5;
  }
  v132_.v133 = v132_.v132;
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 24LL))(v3, v132_.v132);
  v4 = v134_.v134;
  if (v134_.v134 != v134_.v135) {
    v6 = v134_.v135 - 3;
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v6 != 0) {
        GameConverge_8f23a0_alt1(v6);
        if (*v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v9);
        }
      }
      v8 = v6 - 2;
      v6 -= 5;
    } while (v8 != v4);
  }
LABEL_5:
  v134_.v135 = v4;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      *(int*)(game_GameModeData_instance_ + 64) < 2) {
    goto LABEL_112;
  }
  v155 = 0;
  v149_.v149 = GameData_2004d98;
  v149_.v150 = game_GameModeData_instance_ + 168;
  v149_.v153 = (__int64*)&v149_.v149;
  v149_.v151 = &v155;
  v149_.v152 = (__int64*)&v134_.v134;
  GameConst_7f97f0((__int64)&v149_.v149);
  if (v149_.v153 == (__int64*)&v149_.v149) {
    v5 = 32;
    goto LABEL_21;
  }
  if (v149_.v153 != nullptr) {
    v5 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v149_.v153 + v5))((__int64)v149_.v153);
  }
  if ((v155 & 0x14) != 0) {
    LOBYTE(v145[0]) = 0;
    v145[1] = 0;
    v146_.v146 = nullptr;
    v146_.v147 = nullptr;
    v146_.v148 = nullptr;
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v12 = v146_.v146;
    v149_.v151 = v11;
    v149_.v152 = nullptr;
    v149_.v153 = nullptr;
    v149_.v154 = 0;
    v149_.v149 = (__int64 (**)(void))(((char*)0x20LL) + 1);
    v149_.v150 = 28;
    v13 = v146_.v148;
    strcpy(v11, "MID_Converge_Failure_Message");
    if (v13 == v12) {
      if (v13 != nullptr) {
        GameConverge_8f23a0_alt1((__int64*)&v146_.v146);
        if (v146_.v146 != nullptr) {
          v16 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v16);
        }
        v146_.v147 = nullptr;
        v146_.v148 = nullptr;
        v146_.v146 = nullptr;
      }
      v17 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v10, 48, 16, 0);
      v18 = v17 + 6;
      v146_.v146 = v17;
      v146_.v147 = v17;
      v146_.v148 = v17 + 6;
      GameConverge_8f2280(v17, (__int64*)&v149_.v149);
      v146_.v147 = v18;
    }
    else {
      v14 = v146_.v147;
      if (v146_.v147 == v12) {
        GameConverge_8f2280(v146_.v147, (__int64*)&v149_.v149);
        v146_.v147 = (__int64*)((char*)v14 + ((char*)v14 - (char*)v12) + 48);
      }
      else {
        v15 = v12 + 6;
        if (v12 != (__int64*)&v149_.v149) {
          if ((*(_BYTE*)v12 & 1) != 0) {
            SpineModel_64dde0(v12, (__int64)v11, 0x1Cu);
          }
          else {
            GameRoutine_64df20(v12, (__int64)v11, 0x1Cu);
          }
          GameRoutine_6b7aa0(v12 + 3, v149_.v152, v149_.v153,
                             0xAAAAAAAAAAAAAAABLL * (v149_.v153 - v149_.v152));
          v14 = v146_.v147;
        }
        while (v15 != v14) {
          v19 = v14;
          v20 = *(v14 - 3);
          if (v20 != 0) {
            v21 = *(v19 - 2);
            if (v20 == v21) {
              goto LABEL_52;
            }
            v22 = *(v19 - 2);
            do {
              v23 = *(_BYTE*)(v22 - 24);
              v22 -= 24;
              if ((v23 & 1) != 0 && *(_QWORD*)(v21 - 8) != 0) {
                if (*(_QWORD*)(*v10 + 200) != 0) {
                  v24 = 128;
                }
                else {
                  v24 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v10 + v24);
              }
              v21 = v22;
            } while (v22 != v20);
            v25 = *(v19 - 3);
            *(v19 - 2) = v20;
            if (v25 != 0) {
            LABEL_52:
              if (*(_QWORD*)(*v10 + 200) != 0) {
                v26 = 128;
              }
              else {
                v26 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v10 + v26);
            }
          }
          v14 = v19 - 6;
          if ((*(_BYTE*)(v19 - 6) & 1) != 0 && *(v19 - 4) != 0) {
            if (*(_QWORD*)(*v10 + 200) != 0) {
              v27 = 128;
            }
            else {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v27);
          }
        }
        v146_.v147 = v12 + 6;
      }
    }
    v28 = v149_.v152;
    if (v149_.v152 != nullptr) {
      v29 = v149_.v153;
      if (v149_.v152 == v149_.v153) {
        goto LABEL_74;
      }
      v30 = v149_.v153;
      do {
        v31 = *((_BYTE*)v30 - 24);
        v30 -= 3;
        if ((v31 & 1) != 0 && *(v29 - 1) != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v32 = 128;
          }
          else {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v32);
        }
        v29 = v30;
      } while (v30 != v28);
      v149_.v153 = v28;
      if (v149_.v152 != nullptr) {
      LABEL_74:
        v33 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v10 + v33);
      }
    }
    if (((unsigned __int8)v149_.v149 & 1) != 0 && v149_.v151 != nullptr) {
      v34 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v10 + v34);
    }
    GameRoutine_1050140(&v134_.v134, v145);
    v35 = v146_.v146;
    if (v146_.v146 != nullptr) {
      v36 = v146_.v147;
      if (v146_.v146 == v146_.v147) {
        goto LABEL_108;
      }
      do {
        v37 = v36;
        v38 = *(v36 - 3);
        if (v38 != 0) {
          v39 = *(v37 - 2);
          if (v38 == v39) {
            goto LABEL_97;
          }
          v40 = *(v37 - 2);
          do {
            v41 = *(_BYTE*)(v40 - 24);
            v40 -= 24;
            if ((v41 & 1) != 0 && *(_QWORD*)(v39 - 8) != 0) {
              if (*(_QWORD*)(*v10 + 200) != 0) {
                v42 = 128;
              }
              else {
                v42 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v10 + v42);
            }
            v39 = v40;
          } while (v40 != v38);
          v43 = *(v37 - 3);
          *(v37 - 2) = v38;
          if (v43 != 0) {
          LABEL_97:
            if (*(_QWORD*)(*v10 + 200) != 0) {
              v44 = 128;
            }
            else {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v44);
          }
        }
        v36 = v37 - 6;
        if ((*(_BYTE*)(v37 - 6) & 1) != 0 && *(v37 - 4) != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v45 = 128;
          }
          else {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v45);
        }
      } while (v35 != v36);
      v146_.v147 = v35;
      if (v146_.v146 != nullptr) {
      LABEL_108:
        v46 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v10 + v46);
      }
    }
  }
  v4 = v134_.v135;
LABEL_112:
  v47 = v134_.v134;
  if (v4 == v134_.v134) {
    goto LABEL_201;
  }
  v131 = ProcList_9bd480(a1);
  if (v131 == 0) {
    goto LABEL_201;
  }
  v48 = v134_.v134;
  v123 = v47;
  v130 = v134_.v135;
  if (v134_.v134 != v134_.v135) {
    v49 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      if (v48[1] != 0) {
        v56 = (char*)v48[2];
        v57 = (char*)v48[3];
        v58 = v48[1];
        v59 = v57 - v56;
        v137_.v143 = *v48;
        v137_.v144 = v58;
        if (v57 == v56) {
          v70 = 0;
          v71 = 0;
        }
        else {
          if (0xAAAAAAAAAAAAAAABLL * (v59 >> 4) > 0x555555555555555LL) {
            goto LABEL_222;
          }
          v60 = fw_memory_HeapManager_Allocate_alt1(*v49, v57 - v56, 16, 0);
          v61 = (char*)(v60 + v59);
          v59 = v60;
          v124 = v61;
          v127 = v60;
          do {
            if ((*v56 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)v59, *((_QWORD*)v56 + 2),
                                            *((_QWORD*)v56 + 1));
            }
            else {
              v62 = *(_QWORD*)v56;
              v63 = *((_QWORD*)v56 + 2);
              *(_QWORD*)(v59 + 8) = *((_QWORD*)v56 + 1);
              *(_QWORD*)(v59 + 16) = v63;
              *(_QWORD*)v59 = v62;
            }
            *(_QWORD*)(v59 + 32) = 0;
            *(_QWORD*)(v59 + 40) = 0;
            *(_QWORD*)(v59 + 24) = 0;
            v64 = *((__int64**)v56 + 3);
            v65 = *((__int64**)v56 + 4);
            v66 = (char*)v65 - (char*)v64;
            if (v65 != v64) {
              if (0xAAAAAAAAAAAAAAABLL * (v66 >> 3) > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_221;
              }
              v67 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                  *v49, (char*)v65 - (char*)v64, 16, 0);
              *(_QWORD*)(v59 + 24) = v67;
              *(_QWORD*)(v59 + 32) = v67;
              *(_QWORD*)(v59 + 40) = (char*)v67 + v66;
              do {
                if ((*(_BYTE*)v64 & 1) != 0) {
                  fw_text_String_CopyTerminated(v67, v64[2], v64[1]);
                }
                else {
                  v68 = *v64;
                  v69 = v64[2];
                  v67[1] = v64[1];
                  v67[2] = v69;
                  *v67 = v68;
                }
                v64 += 3;
                v67 += 3;
              } while (v64 != v65);
              *(_QWORD*)(v59 + 32) = v67;
            }
            v56 += 48;
            v59 += 48;
          } while (v56 != v57);
          v71 = (__int64)v124;
          v70 = v127;
        }
        v86 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v49, 48, 16, 0);
        v87 = v137_.v143;
        v88 = v137_.v144;
        v89 = v86;
        v86[4] = v59;
        v86[5] = v71;
        v149_.v153 = v86;
        *v86 = (__int64)
            game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor_ptr;
        v86[1] = v87;
        v86[2] = v88;
        v86[3] = v70;
        game_ProcList_Call_9bcfa0(v131, (__int64)&v149_.v149);
        (*(void (**)(__int64*))(*v89 + 40))(v89);
        v90 = (char*)v48[2];
        v91 = (char*)v48[3];
        v92 = v48[1];
        v93 = v91 - v90;
        v137_.v141 = *v48;
        v137_.v142 = v92;
        if (v91 == v90) {
          v50 = 0;
          v51 = 0;
        }
        else {
          if (0xAAAAAAAAAAAAAAABLL * (v93 >> 4) > 0x555555555555555LL) {
          LABEL_222:
            GameRoutine_8f2260_alt1();
          }
          v94 = fw_memory_HeapManager_Allocate_alt1(*v49, v91 - v90, 16, 0);
          v95 = (char*)(v94 + v93);
          v93 = v94;
          v126 = v95;
          v129 = v94;
          do {
            if ((*v90 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)v93, *((_QWORD*)v90 + 2),
                                            *((_QWORD*)v90 + 1));
            }
            else {
              v96 = *(_QWORD*)v90;
              v97 = *((_QWORD*)v90 + 2);
              *(_QWORD*)(v93 + 8) = *((_QWORD*)v90 + 1);
              *(_QWORD*)(v93 + 16) = v97;
              *(_QWORD*)v93 = v96;
            }
            *(_QWORD*)(v93 + 32) = 0;
            *(_QWORD*)(v93 + 40) = 0;
            *(_QWORD*)(v93 + 24) = 0;
            v98 = *((__int64**)v90 + 3);
            v99 = *((__int64**)v90 + 4);
            v100 = (char*)v99 - (char*)v98;
            if (v99 != v98) {
              if (0xAAAAAAAAAAAAAAABLL * (v100 >> 3) > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_221;
              }
              v101 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                  *v49, (char*)v99 - (char*)v98, 16, 0);
              *(_QWORD*)(v93 + 24) = v101;
              *(_QWORD*)(v93 + 32) = v101;
              *(_QWORD*)(v93 + 40) = (char*)v101 + v100;
              do {
                if ((*(_BYTE*)v98 & 1) != 0) {
                  fw_text_String_CopyTerminated(v101, v98[2], v98[1]);
                }
                else {
                  v102 = *v98;
                  v103 = v98[2];
                  v101[1] = v98[1];
                  v101[2] = v103;
                  *v101 = v102;
                }
                v98 += 3;
                v101 += 3;
              } while (v98 != v99);
              *(_QWORD*)(v93 + 32) = v101;
            }
            v90 += 48;
            v93 += 48;
          } while (v90 != v91);
          v51 = (__int64)v126;
          v50 = v129;
        }
        v52 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v49, 56, 16, 0);
        v53 = v137_.v141;
        v54 = v137_.v142;
        v55 = v52;
        v52[4] = v93;
        v52[5] = v51;
        *v52 = (__int64)
            game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destructor_ptr;
        v52[1] = v53;
        v52[2] = v54;
        v52[3] = v50;
        v52[6] = (__int64)&v134_.v134;
      }
      else {
        v72 = (char*)v48[2];
        v73 = (char*)v48[3];
        v74 = v48[1];
        v75 = v73 - v72;
        v137_.v139 = *v48;
        v137_.v140 = v74;
        if (v73 == v72) {
          v104 = 0;
          v105 = 0;
        }
        else {
          if (0xAAAAAAAAAAAAAAABLL * (v75 >> 4) > 0x555555555555555LL) {
            goto LABEL_222;
          }
          v76 = fw_memory_HeapManager_Allocate_alt1(*v49, v73 - v72, 16, 0);
          v77 = (char*)(v76 + v75);
          v75 = v76;
          v125 = v77;
          v128 = v76;
          do {
            if ((*v72 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)v75, *((_QWORD*)v72 + 2),
                                            *((_QWORD*)v72 + 1));
            }
            else {
              v78 = *(_QWORD*)v72;
              v79 = *((_QWORD*)v72 + 2);
              *(_QWORD*)(v75 + 8) = *((_QWORD*)v72 + 1);
              *(_QWORD*)(v75 + 16) = v79;
              *(_QWORD*)v75 = v78;
            }
            *(_QWORD*)(v75 + 32) = 0;
            *(_QWORD*)(v75 + 40) = 0;
            *(_QWORD*)(v75 + 24) = 0;
            v80 = *((__int64**)v72 + 3);
            v81 = *((__int64**)v72 + 4);
            v82 = (char*)v81 - (char*)v80;
            if (v81 != v80) {
              if (0xAAAAAAAAAAAAAAABLL * (v82 >> 3) > 0xAAAAAAAAAAAAAAALL) {
              LABEL_221:
                GameRoutine_64aa00();
              }
              v83 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                  *v49, (char*)v81 - (char*)v80, 16, 0);
              *(_QWORD*)(v75 + 24) = v83;
              *(_QWORD*)(v75 + 32) = v83;
              *(_QWORD*)(v75 + 40) = (char*)v83 + v82;
              do {
                if ((*(_BYTE*)v80 & 1) != 0) {
                  fw_text_String_CopyTerminated(v83, v80[2], v80[1]);
                }
                else {
                  v84 = *v80;
                  v85 = v80[2];
                  v83[1] = v80[1];
                  v83[2] = v85;
                  *v83 = v84;
                }
                v80 += 3;
                v83 += 3;
              } while (v80 != v81);
              *(_QWORD*)(v75 + 32) = v83;
            }
            v72 += 48;
            v75 += 48;
          } while (v72 != v73);
          v105 = (__int64)v125;
          v104 = v128;
        }
        v52 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v49, 48, 16, 0);
        v106 = v137_.v139;
        v107 = v137_.v140;
        v55 = v52;
        v52[4] = v75;
        v52[5] = v105;
        *v52 = (__int64)
            game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destructor_ptr;
        v52[1] = v106;
        v52[2] = v107;
        v52[3] = v104;
      }
      v149_.v153 = v52;
      game_ProcList_Call_9bcfa0(v131, (__int64)&v149_.v149);
      (*(void (**)(__int64*))(*v55 + 40))(v55);
      v48 += 5;
    } while (v48 != v130);
  }
  v149_.v149 = GameData_2005118;
  v149_.v153 = (__int64*)&v149_.v149;
  game_ProcList_Call_9bcfa0(v131, (__int64)&v149_.v149);
  if (v149_.v153 == (__int64*)&v149_.v149) {
    v47 = v123;
    v108 = 32;
  }
  else {
    v47 = v123;
    if (v149_.v153 == nullptr) {
      goto LABEL_176;
    }
    v108 = 40;
  }
  (*(void (**)(__int64))(*v149_.v153 + v108))((__int64)v149_.v153);
LABEL_176:
  v149_.v153 = (__int64*)&v149_.v149;
  v149_.v149 = GameData_2005198;
  game_ProcList_Call_9bcfa0(v131, (__int64)&v149_.v149);
  if (v149_.v153 == (__int64*)&v149_.v149) {
    v109 = 32;
  }
  else {
    if (v149_.v153 == nullptr) {
      goto LABEL_181;
    }
    v109 = 40;
  }
  (*(void (**)(__int64))(*v149_.v153 + v109))((__int64)v149_.v153);
LABEL_181:
  if (v132_.v133 != nullptr) {
    if (v132_.v133 == v132_.v132) {
      v137_.v138 = v137_.v137;
      (*(void (**)(__int64))(*(_QWORD*)v132_.v133 + 24LL))((__int64)v132_.v133);
      v110 = v137_.v138;
    }
    else {
      v110 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v132_.v133 + 16LL))(
          (__int64)v132_.v133);
      v137_.v138 = v110;
    }
    v111 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    *v111 = (__int64)GameData_2005218;
    if (v110 != nullptr) {
      if (v110 == v137_.v137) {
        v111[6] = (__int64)(v111 + 2);
        v112 = v111;
        (*(void (**)(_BYTE*))(*(_QWORD*)v110 + 24LL))(v110);
        v111 = v112;
      }
      else {
        v111[6] = (__int64)v110;
        v137_.v138 = nullptr;
      }
    }
    else {
      v111[6] = 0;
    }
  }
  else {
    v137_.v138 = nullptr;
    v111 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v111[6] = 0;
    *v111 = (__int64)GameData_2005218;
  }
  v149_.v153 = v111;
  game_ProcList_Call_9bcfa0(v131, (__int64)&v149_.v149);
  if (v149_.v153 == (__int64*)&v149_.v149) {
    v113 = 32;
    goto LABEL_195;
  }
  if (v149_.v153 != nullptr) {
    v113 = 40;
  LABEL_195:
    (*(void (**)(__int64))(*v149_.v153 + v113))((__int64)v149_.v153);
  }
  if (v137_.v138 == v137_.v137) {
    v114 = 32;
  }
  else {
    if (v137_.v138 == nullptr) {
      goto LABEL_201;
    }
    v114 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v137_.v138 + v114))((__int64)v137_.v138);
LABEL_201:
  if (v132_.v133 == v132_.v132) {
    v115 = 32;
    goto LABEL_205;
  }
  if (v132_.v133 != nullptr) {
    v115 = 40;
  LABEL_205:
    (*(void (**)(__int64))(*(_QWORD*)v132_.v133 + v115))((__int64)v132_.v133);
  }
  v116 = v134_.v134;
  if (v134_.v134 != nullptr) {
    if (v134_.v134 == v134_.v135) {
      goto LABEL_217;
    }
    v117 = v134_.v135 - 3;
    v118 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v117 != 0) {
        GameConverge_8f23a0_alt1(v117);
        if (*v117 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v118 + 200LL) != 0) {
            v120 = 128;
          }
          else {
            v120 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v118 + v120);
        }
      }
      v119 = v117 - 2;
      v117 -= 5;
    } while (v119 != v116);
    v134_.v135 = v116;
    if (v134_.v134 != nullptr) {
    LABEL_217:
      v121 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v121 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v121);
    }
  }
  return v4 != v47;
}

void game_anonymous_ConvergeImpl_SetupConvergeResult_closure_Invoke(
    __int64 a1, unsigned __int8* a2)
{
  unsigned int v2;
  __int64* v3;
  __int64 v5;
  unsigned __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  _QWORD* v19;
  char* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  char* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  char v50;
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
  signed __int64 v62;
  __int64* v63;
  __int64 v64;
  char v65[4];
  struct {
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    char v72;
  } v66_;
  struct {
    unsigned __int64* v73;
    unsigned __int64* v74;
  } v73_;
  char* v75;
  struct {
    char* v76;
    _QWORD* v77;
    __int64 v78;
    __int64 v79;
    char* v80;
  } v76_;
  struct {
    _QWORD v81[2];
    char* v82;
  } v81_;

  v2 = *a2;
  v3 = *(__int64**)(a1 + 24);
  v5 = game_GetHero(*a2);
  if (v5 == 0) {
    return;
  }
  v6 = (unsigned __int64*)v5;
  if ((GameConverge_8ea270(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL), v2, v5) & 1) !=
      0) {
    v76_.v76 = nullptr;
    v76_.v77 = nullptr;
    LOBYTE(v73_.v73) = v2;
    v73_.v74 = v6;
    v75 = nullptr;
    GameRoutine_1050140_alt1(v3, (__int64*)&v73_.v73);
  }
  v66_.v72 = 0;
  v66_.v70 = 0;
  v66_.v71 = 0;
  v66_.v68 = 0;
  v66_.v69 = 0;
  v66_.v66 = 0;
  v66_.v67 = 0;
  game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit((__int64)&v66_.v66,
                                                         v2);
  GameConverge_8ea8c0((void*)(v65), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL), v2,
                      1);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v65[0] & 1) == 0) {
    game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit(&v66_.v66,
                                                                   v2);
    v8 = GameRoutine_8f31e0(
        (_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) + 216LL * v2 +
                  256),
        v6);
    if (v8 != 0) {
      v9 = v8;
      v73_.v73 = v6;
      LODWORD(v81_.v81[0]) = 241;
      v10 = game_UnitPool_Find_6ead60((__int64*)&v73_.v73, (int*)v81_.v81);
      if (v10 != nullptr) {
        v11 = (__int64)v10;
        if (*(_BYTE*)(v9 + 1880) != 0) {
          WORD1(v73_.v73) = 0;
          HIDWORD(v73_.v73) = 0;
          v76_.v77 = nullptr;
          v76_.v78 = 0;
          v76_.v79 = 0;
          v76_.v80 = nullptr;
          v75 = (char*)&v76_.v76;
          v76_.v76 = nullptr;
          GameRoutine_930b90((__int64)&v73_.v73, v9 + 1880);
          v12 = *(unsigned __int8*)(v9 + 1880);
          BYTE3(v73_.v73) = 0;
          if ((v12 == 0 ||
               *(_BYTE*)((v13 = *(_QWORD*)(v11 + 400)) + 96) == 2 &&
                   *(unsigned __int8*)(*(_QWORD*)(v13 + 112) + 32LL) ==
                       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                                 64) +
                                                      8 * v12) +
                                           32LL)) &&
              *(_BYTE*)(v11 + 1880) == 0) {
            UnitHeroes_6d2b90(v11, (unsigned __int8*)&v73_.v73);
            RidePool_93c2e0(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL),
                            v11);
          }
          else {
            RidePool_93c6a0((void*)((__int64)v81_.v81),
                            *(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL),
                            (unsigned __int8*)&v73_.v73, 0, 1);
          }
          LODWORD(v73_.v74) = 0;
          v73_.v73 = nullptr;
          if ((v76_.v78 & 1) != 0) {
            *v76_.v80 = 0;
            v76_.v79 = 0;
          }
          else {
            LOWORD(v76_.v78) = 0;
          }
          GameRoutine_6e3b50((__int64)&v75, v76_.v76);
          v76_.v76 = nullptr;
          v76_.v77 = nullptr;
          v75 = (char*)&v76_.v76;
          if ((v76_.v78 & 1) != 0) {
            v14 = v76_.v80;
            if (v76_.v80 != nullptr) {
              v15 = 128;
              if (*(_QWORD*)(*v7 + 200) == 0) {
                v15 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v15, (__int64)v76_.v80);
              v14 = v76_.v76;
            }
          }
          else {
            v14 = nullptr;
          }
          GameRoutine_6e3b50((__int64)&v75, v14);
        }
        v16 = *(unsigned __int8*)(v9 + 1944);
        if (*(_BYTE*)(v9 + 1944) != 0) {
          v73_.v73 = *(unsigned __int64**)(v9 + 1944);
          v17 = *(_QWORD*)(v11 + 400);
          BYTE1(v73_.v73) = 0;
          if (*(_BYTE*)(v17 + 96) == 1 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                             8 * v16) +
                                  50LL) <=
                  (unsigned int)*(unsigned __int8*)(v11 + 552) &&
              *(_BYTE*)(v11 + 1944) == 0) {
            UnitHeroes_6d2c90(v11, (__int64*)&v73_.v73);
            LegionPool_936cf0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                              v11);
          }
          else {
            LegionPool_936f60((void*)((__int64)v81_.v81),
                              *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                              (unsigned __int8*)&v73_.v73, 0);
          }
        }
      }
    }
    LOBYTE(v73_.v73) = 0;
    v73_.v74 = nullptr;
    v75 = nullptr;
    v76_.v76 = nullptr;
    v76_.v77 = nullptr;
    v18 = GameHr_67ed20(v6);
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v7, 48, 16, 0);
    v20 = (char*)fw_memory_HeapManager_Allocate_alt1(*v7, 32, 16, 0);
    v19[3] = 0;
    v19[4] = 0;
    v19[5] = 0;
    *v19 = 33;
    v19[1] = 28;
    v19[2] = v20;
    strcpy(v20, "MID_Converge_Success_Message");
    v21 = strlen(v18);
    if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v22 = v21;
    v63 = v3;
    v64 = a1;
    if (v21 >= 0x17) {
      if ((v21 | 7) == 0x17) {
        v24 = 26;
      }
      else {
        v24 = (v21 | 7) + 1;
      }
      v23 = (char*)fw_memory_HeapManager_Allocate_alt1(*v7, v24, 16, 0);
      v81_.v81[1] = v22;
      v81_.v82 = v23;
      v81_.v81[0] = v24 | 1;
    }
    else {
      LOBYTE(v81_.v81[0]) = 2 * v21;
      v23 = (char*)v81_.v81 + 1;
      if (v21 == 0) {
      LABEL_37:
        v25 = v19 + 6;
        v23[v22] = 0;
        GameRoutine_7a8220(v19 + 3, v81_.v81);
        if ((v81_.v81[0] & 1) != 0 && v81_.v82 != nullptr) {
          v26 = 128;
          if (*(_QWORD*)(*v7 + 200) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v7 + v26, (__int64)v81_.v82);
        }
        v27 = (__int64)v75;
        v28 = v76_.v76;
        v29 = (__int64)v19 + v75 - v76_.v76;
        v62 = v75 - v76_.v76;
        if (v75 != v76_.v76) {
          v30 = v75;
          v31 = (_QWORD*)v29;
          do {
            v32 = *(_QWORD*)v30;
            v33 = *((_QWORD*)v30 + 2);
            v31[1] = *((_QWORD*)v30 + 1);
            v31[2] = v33;
            *v31 = v32;
            *((_QWORD*)v30 + 1) = 0;
            *((_QWORD*)v30 + 2) = 0;
            *(_QWORD*)v30 = 0;
            v31[4] = 0;
            v31[5] = 0;
            v31[3] = 0;
            v31[3] = *((_QWORD*)v30 + 3);
            v31[4] = *((_QWORD*)v30 + 4);
            v31[5] = *((_QWORD*)v30 + 5);
            *((_QWORD*)v30 + 4) = 0;
            *((_QWORD*)v30 + 5) = 0;
            *((_QWORD*)v30 + 3) = 0;
            v30 += 48;
            v31 += 6;
          } while (v30 != v28);
          v34 = (char*)v27;
          do {
            v35 = *((_QWORD*)v34 + 3);
            if (v35 != 0) {
              v36 = *((_QWORD*)v34 + 4);
              if (v35 == v36) {
                goto LABEL_58;
              }
              v37 = *((_QWORD*)v34 + 4);
              do {
                v38 = *(_BYTE*)(v37 - 24);
                v37 -= 24;
                if ((v38 & 1) != 0) {
                  v39 = *(_QWORD*)(v36 - 8);
                  if (v39 != 0) {
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v40 = 128;
                    }
                    else {
                      v40 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v40, v39);
                  }
                }
                v36 = v37;
              } while (v37 != v35);
              v41 = *((_QWORD*)v34 + 3);
              *((_QWORD*)v34 + 4) = v35;
              v35 = v41;
              if (v41 != 0) {
              LABEL_58:
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v42 = 128;
                }
                else {
                  v42 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v42, v35);
              }
            }
            if ((*v34 & 1) != 0) {
              v43 = *((_QWORD*)v34 + 2);
              if (v43 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v44 = 128;
                }
                else {
                  v44 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v44, v43);
              }
            }
            v34 += 48;
          } while (v34 != v28);
        }
        v75 = (char*)v29;
        v76_.v77 = v25;
        if (v27 != 0) {
          v45 = 128;
          if (*(_QWORD*)(*v7 + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v7 + v45, v27);
        }
        v76_.v76 = (char*)v25;
        GameRoutine_1050140_alt1(v63, (__int64*)&v73_.v73);
        **(_BYTE**)(v64 + 16) |= v65[0];
        if (v62 == 48) {
          goto LABEL_97;
        }
        do {
          v46 = *(v25 - 3);
          v47 = v25;
          if (v46 != 0) {
            v48 = *(v25 - 2);
            if (v46 == v48) {
              goto LABEL_86;
            }
            v49 = *(v25 - 2);
            do {
              v50 = *(_BYTE*)(v49 - 24);
              v49 -= 24;
              if ((v50 & 1) != 0) {
                v51 = *(_QWORD*)(v48 - 8);
                if (v51 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v52 = 128;
                  }
                  else {
                    v52 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v52, v51);
                }
              }
              v48 = v49;
            } while (v49 != v46);
            v53 = *(v25 - 3);
            *(v25 - 2) = v46;
            v46 = v53;
            if (v53 != 0) {
            LABEL_86:
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v54 = 128;
              }
              else {
                v54 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v54, v46);
            }
          }
          v25 -= 6;
          if ((*(_BYTE*)(v47 - 6) & 1) != 0) {
            v55 = *(v47 - 4);
            if (v55 != 0) {
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v56 = 128;
              }
              else {
                v56 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v56, v55);
            }
          }
        } while ((_QWORD*)v29 != v25);
        v29 = (__int64)v75;
        if (v75 != nullptr) {
        LABEL_97:
          v57 = 128;
          if (*(_QWORD*)(*v7 + 200) == 0) {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v7 + v57, v29);
        }
        goto LABEL_100;
      }
    }
    memcpy((__int64)v23, (__int64)v18, v22);
    goto LABEL_37;
  }
LABEL_100:
  if (v66_.v69 != 0) {
    v58 = *v7;
    v66_.v70 = v66_.v69;
    v59 = 128;
    if (*(_QWORD*)(v58 + 200) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v58 + v59, v66_.v69);
  }
  if (v66_.v66 != 0) {
    v60 = *v7;
    v66_.v67 = v66_.v66;
    v61 = 128;
    if (*(_QWORD*)(v60 + 200) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v60 + v61, v66_.v66);
  }
}

void game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor(_QWORD* a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  *a1 = game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor_ptr;
  v2 = a1[3];
  v1 = a1 + 3;
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2004e18;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure_Clone(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = (__int64*)a1[3];
  v5 = (__int64*)a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = (char*)v5 - (char*)v4;
  *v3 = game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor_ptr;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260_alt1();
    }
    v10 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *v2, (char*)v5 - (char*)v4, 16, 0);
    v8[3] = v10;
    v8[5] = (char*)v10 + v9;
    do {
      GameConverge_8f24c0_alt1(v10, v4);
      v4 += 6;
      v10 += 6;
    } while (v4 != v5);
    v8[4] = v10;
  }
  return v8;
}

__int64*

game_anonymous_ConvergeImpl_TryRunConverge_closure_CloneInto(__int64* result,
                                                             _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64* v8;

  *a2 = game_anonymous_ConvergeImpl_TryRunConverge_closure_Destructor_ptr;
  v2 = result[1];
  v3 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v2;
  a2[2] = v3;
  v4 = (__int64*)result[3];
  v5 = (__int64*)result[4];
  v6 = (char*)v5 - (char*)v4;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v6 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260_alt1();
    }
    v8 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v5 - (char*)v4, 16, 0);
    a2[3] = v8;
    a2[4] = v8;
    a2[5] = (char*)v8 + v6;
    do {
      result = GameConverge_8f24c0_alt1(v8, v4);
      v4 += 6;
      v8 += 6;
    } while (v4 != v5);
    a2[4] = v8;
  }
  return result;
}

void game_anonymous_ConvergeImpl_TryRunConverge_closure_Destroy(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 24);
  v1 = (__int64*)(a1 + 24);
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

void game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destructor(_QWORD* a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  *a1 = game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destructor_ptr;
  v2 = a1[3];
  v1 = a1 + 3;
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure0_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2004e98;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure0_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2004e98;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  v8[6] = a1[6];
  return v8;
}

_QWORD*

game_anonymous_ConvergeImpl_TryRunConverge_closure0_CloneInto(_QWORD* result,
                                                              _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = result;
  *a2 = GameData_2004e98;
  v4 = result[1];
  v5 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v4;
  a2[2] = v5;
  v6 = result[3];
  v7 = result[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (0xAAAAAAAAAAAAAAABLL * (v8 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v7 - v6, 16, 0);
    a2[3] = v9;
    a2[4] = v9;
    a2[5] = v9 + v8;
    do {
      result = (_QWORD*)GameConverge_8f24c0(v9, v6);
      v6 += 48;
      v9 += 48;
    } while (v6 != v7);
    a2[4] = v9;
  }
  a2[6] = v3[6];
  return result;
}

void game_anonymous_ConvergeImpl_TryRunConverge_closure0_Destroy(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 24);
  v1 = (__int64*)(a1 + 24);
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

void game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destructor(
    _QWORD* a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  *a1 = game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destructor_ptr;
  v2 = a1[3];
  v1 = a1 + 3;
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2004f08;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD*

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2004f08;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  return v8;
}

__int64* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_CloneInto(
    __int64* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64* v8;

  *a2 = game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destructor_ptr;
  v2 = result[1];
  v3 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v2;
  a2[2] = v3;
  v4 = (__int64*)result[3];
  v5 = (__int64*)result[4];
  v6 = (char*)v5 - (char*)v4;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v6 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260_alt1();
    }
    v8 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v5 - (char*)v4, 16, 0);
    a2[3] = v8;
    a2[4] = v8;
    a2[5] = (char*)v8 + v6;
    do {
      result = GameConverge_8f24c0_alt1(v8, v4);
      v4 += 6;
      v8 += 6;
    } while (v4 != v5);
    a2[4] = v8;
  }
  return result;
}

void game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Destroy(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 24);
  v1 = (__int64*)(a1 + 24);
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v4;
  _BYTE v6[2224];

  v2 = *a2;
  GameRoutine_6c2b50(v6);
  GameConverge_8ea590(*(_QWORD*)(game_GameModeData_instance_ + 176), v6,
                      *(unsigned __int8*)(a1 + 8), *(_QWORD*)(a1 + 16));
  v4 = *(_QWORD*)(v2 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v4 = *(_QWORD*)(v4 + 152);
  }
  GameRoutine_177d0e0(*(_QWORD*)(v4 + 32), *(_QWORD*)(a1 + 16), v6[498]);
  GameRoutine_8ea690(*(_QWORD*)(game_GameModeData_instance_ + 176),
                     *(unsigned __int8*)(a1 + 8), *(_QWORD*)(a1 + 16), 4, 1);
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0();
  }
  game_Unit_Destroy_Unit(v6);
  return 2;
}

void game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destructor(
    _QWORD* a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  *a1 = game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destructor_ptr;
  v2 = a1[3];
  v1 = a1 + 3;
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2004f88;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD*

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2004f88;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  return v8;
}

_QWORD* game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_CloneInto(
    _QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  *a2 = GameData_2004f88;
  v2 = result[1];
  v3 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v2;
  a2[2] = v3;
  v4 = result[3];
  v5 = result[4];
  v6 = v5 - v4;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v6 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v4, 16, 0);
    a2[3] = v8;
    a2[4] = v8;
    a2[5] = v8 + v6;
    do {
      result = (_QWORD*)GameConverge_8f24c0(v8, v4);
      v4 += 48;
      v8 += 48;
    } while (v4 != v5);
    a2[4] = v8;
  }
  return result;
}

void game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Destroy(
    __int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 24);
  v1 = (__int64*)(a1 + 24);
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

__int64

game_anonymous_ConvergeImpl_RunAutoGrowthDialog_closure0_Invoke(__int64 a1)
{
  GameRoutine_8ea690(*(_QWORD*)(game_GameModeData_instance_ + 176),
                     *(unsigned __int8*)(a1 + 8), *(_QWORD*)(a1 + 16), 4, 0);
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0();
  }
  return 2;
}

void game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destructor(_QWORD* a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  *a1 = game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destructor_ptr;
  v2 = a1[3];
  v1 = a1 + 3;
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure1_DeletingDestructor(
    _QWORD* a1, long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = GameData_2005098;
  v2 = a1 + 3;
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    GameConverge_8f23a0(a1 + 3);
    if (*v2 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, a2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a2);
}

_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure1_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = v3;
  v9 = v5 - v4;
  *v3 = GameData_2005098;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v10 = fw_memory_HeapManager_Allocate(*v2, v5 - v4, 16, 0);
    v8[3] = v10;
    v8[5] = v10 + v9;
    do {
      GameConverge_8f24c0(v10, v4);
      v4 += 48;
      v10 += 48;
    } while (v4 != v5);
    v8[4] = v10;
  }
  return v8;
}

_QWORD*

game_anonymous_ConvergeImpl_TryRunConverge_closure1_CloneInto(_QWORD* result,
                                                              _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  *a2 = GameData_2005098;
  v2 = result[1];
  v3 = result[2];
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[1] = v2;
  a2[2] = v3;
  v4 = result[3];
  v5 = result[4];
  v6 = v5 - v4;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v6 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v4, 16, 0);
    a2[3] = v8;
    a2[4] = v8;
    a2[5] = v8 + v6;
    do {
      result = (_QWORD*)GameConverge_8f24c0(v8, v4);
      v4 += 48;
      v8 += 48;
    } while (v4 != v5);
    a2[4] = v8;
  }
  return result;
}

void game_anonymous_ConvergeImpl_TryRunConverge_closure1_Destroy(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 24);
  v1 = (__int64*)(a1 + 24);
  if (v2 != 0) {
    v3 = v1;
    GameConverge_8f23a0_alt1(v1);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *v3);
    }
  }
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure2_Invoke()
{
  unsigned int v0;
  __int64 v1;
  __int64* v2;
  __int64* i;
  __int64 v4;
  __int64 result;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v0 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v1 = *(_QWORD*)GameData_212c7b0[0] + 136LL * v0;
  v2 = *(__int64**)(v1 + 72);
  for (i = *(__int64**)(v1 + 80); v2 != i;
       result = GameSubquestData_1257620(v4, 0)) {
    v4 = *v2++;
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure3_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;

  v2 = *a2;
  if (game_GameModeData_instance_ != 0 &&
      (unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 56) - 2) <=
          7u) {
    v3 = 0x405050302010500uLL >>
         (8 * ((*(_BYTE*)(game_GameModeData_instance_ + 56) - 2) & 0x1Fu));
  }
  else {
    v3 = 5;
  }
  return GameRoutine_9d54a0(v2, v3);
}

_QWORD* game_anonymous_ConvergeImpl_TryRunConverge_closure4_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_2005218;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_anonymous_ConvergeImpl_TryRunConverge_closure4_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    v3 = *a2;
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         &v3);
  }
  return result;
}

#pragma GCC visibility pop
