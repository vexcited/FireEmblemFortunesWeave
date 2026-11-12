#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2109f98[])();
extern __int64 (*GameData_210a030[])();
extern __int64 (*game_map_MapChip_vtable[])();
extern __int64 (*game_map_MapMiniMap_vtable[])();
extern __int64 GameData_21cf838;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_226b694;
__int64 MapMiniMap_Destructor_alt1(__int64 a1) __asm__("MapMiniMap_Destructor");
__int64 MapMiniMap_Unknown4(__int64 result);
__int64 MapMiniMap_18e99d0(__int64 result);
__int64 MapMiniMap_Unknown5(__int64 result);
__int64 MapMiniMap_DeletingDestructor(__int64 result);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_1125f00(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_18ecc60(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, double);
__int64 Manager_136ac50(_QWORD, _QWORD, _QWORD);
__int64 MapChip_19fc0b0(_QWORD, _QWORD, long double);
__int64 MapChip_19fc2e0(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 Unit_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD, long double);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f94310[])();
extern __int64 (*GameData_210a060[])();
extern __int64 (*GameData_210a0b0[])();
extern __int64 (*GameData_210a100[])();
extern __int64 (*GameData_210a150[])();
extern __int64 (*GameData_210a1a0[])();
extern __int64 (*GameData_210a1f0[])();
extern __int64 (*GameData_210a240[])();
extern __int64 (*GameData_210a290[])();
extern __int64 (*GameData_210a2e0[])();
extern __int64 (*GameData_210a330[])();
extern __int64 (*GameData_210a380[])();
extern __int64 (*GameData_210a3d0[])();
extern __int64 (*GameData_210a420[])();
extern __int64 (*GameData_210a470[])();
extern __int64 (*GameData_210a4c0[])();
extern __int64 (*GameData_210a510[])();
extern __int64 (*GameData_210a560[])();
extern __int64 (*GameData_210a5b0[])();
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130140[27];
extern __int64* GameData_2130148[26];
extern __int64* GameData_2130150[25];
extern __int64* GameData_2130158[24];
extern __int64* GameData_2130160[23];
extern __int64* GameData_2130168[22];
extern __int64* GameData_2130170[21];
extern __int64* GameData_2130180[19];
extern __int64* GameData_2130190[17];
extern __int64* GameData_2130198[16];
extern __int64* GameData_21301a0[15];
extern __int64* GameData_21301a8[14];
extern __int64* GameData_21301b0[13];
extern __int64* GameData_21301c0[11];
extern __int64* GameData_21301c8[10];
extern __int64* GameData_21301d0[9];
extern __int64* GameData_21301d8[8];
extern __int64* GameData_21301e0[7];
extern __int64* GameData_21301e8[6];
extern __int64* GameData_21301f0[5];
extern __int64 GameData_21ca310;
extern __int64 ui_Manager_instance_;
extern float GameData_1a83720[4];
extern float GameData_1b01608[8];
void __attribute__((noreturn)) GameRoutine_18ece80(long double);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void MapMiniMap_18e9a40_alt1(__int64 a1) __asm__("MapMiniMap_18e9a40");
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* LayoutAccessor_1560520_alt1(__int64*, __int64, __int64,
                                    __int64) __asm__("LayoutAccessor_1560520");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64 GameHr_1125f00(__int64, __int64, __int64);
__int64 GameHr_136ac50(__int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_18ecc60(__int64*, __int64);
__int64 LayoutAccessor_155e140(__int64*);
__int64 MapChip_19fc0b0_alt1(__int64, __int64*) __asm__("MapChip_19fc0b0");
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 Unit_6c8a80_alt1(__int64 result, int, int,
                         __int64) __asm__("Unit_6c8a80");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
const char* Pane_58fac0_alt1(__int64, const char*) __asm__("Pane_58fac0");
extern __int64 (*MapMiniMap_18e99d0_ptr[])();
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void MapChip_19fc2e0_alt1(__int64*, __int64) __asm__("MapChip_19fc2e0");
void __attribute__((noreturn))
GameRoutine_18ece80_alt1() __asm__("GameRoutine_18ece80");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapMiniMap_Destructor(__int64 a1);
__int64 MapMiniMap_18e9a40(__int64 a1);

void MapMiniMap_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  void (**v11)(_QWORD);
  bool v12;
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
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  *(_QWORD*)a1 = game_map_MapMiniMap_vtable;
  *(_QWORD*)(a1 + 8) = MapMiniMap_18e99d0_ptr;
  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt2(v3);
  }
  LayoutAccessor_155e140(*(__int64**)(a1 + 40));
  v4 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
  }
  *(_QWORD*)(a1 + 152) = game_map_MapChip_vtable;
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 176);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  v7 = *(_QWORD*)(a1 + 128);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 136);
    if (v7 == v8) {
      goto LABEL_20;
    }
    v9 = (void (***)(_QWORD))(v8 - 40);
    v10 = (void (***)(_QWORD))(v8 - 40);
    do {
      v11 = *v10;
      v10 -= 5;
      (*v11)(v9);
      v12 = v9 == (void (***)(_QWORD))v7;
      v9 = v10;
    } while (!v12);
    v13 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v7;
    v7 = v13;
    if (v13 != 0) {
    LABEL_20:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v7);
    }
  }
  v15 = *(_QWORD*)(a1 + 104);
  if (v15 != 0) {
    v16 = *(_QWORD*)(a1 + 112);
    if (v15 == v16) {
      goto LABEL_31;
    }
    do {
      v17 = *(_QWORD*)(v16 - 8);
      if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt2(v17);
      }
      v16 -= 16;
    } while (v16 != v15);
    v18 = *(_QWORD*)(a1 + 104);
    *(_QWORD*)(a1 + 112) = v15;
    v15 = v18;
    if (v18 != 0) {
    LABEL_31:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v15);
    }
  }
  v20 = *(_QWORD*)(a1 + 80);
  if (v20 != 0) {
    v21 = *(_QWORD*)(a1 + 88);
    if (v20 == v21) {
      goto LABEL_42;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt2(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 88) = v20;
    v20 = v23;
    if (v23 != 0) {
    LABEL_42:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v20);
    }
  }
  v25 = *(_QWORD*)(a1 + 56);
  if (v25 != 0) {
    v26 = *(_QWORD*)(a1 + 64);
    if (v25 == v26) {
      goto LABEL_53;
    }
    do {
      v27 = *(_QWORD*)(v26 - 8);
      if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak_alt2(v27);
      }
      v26 -= 16;
    } while (v26 != v25);
    v28 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v25;
    v25 = v28;
    if (v28 != 0) {
    LABEL_53:
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v25);
    }
  }
  v30 = *(_QWORD*)(a1 + 48);
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak_alt2(v30);
  }
  v31 = *(_QWORD*)(a1 + 32);
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_alt2(v31);
  }
  *(_QWORD*)a1 = GameData_210a030;
  if (GameData_21cf838 == a1) {
    GameData_21cf838 = 0;
    GameData_226b694 = 0;
  }
}

__int64 MapMiniMap_Unknown4(__int64 result)
{
  if (*(_BYTE*)(result + 20) == 1) {
    *(_BYTE*)(result + 20) = 0;
  }
  return result;
}

__int64 MapMiniMap_18e99d0(__int64 result)
{
  if (*(_BYTE*)(result + 12) == 1) {
    *(_BYTE*)(result + 12) = 0;
  }
  return result;
}

__int64 MapMiniMap_Unknown5(__int64 result)
{
  if ((*(_BYTE*)(result + 20) & 1) == 0) {
    *(_BYTE*)(result + 20) = 1;
    *(_BYTE*)(result + 220) = 1;
  }
  return result;
}

__int64 MapMiniMap_DeletingDestructor(__int64 result)
{
  if ((*(_BYTE*)(result + 12) & 1) == 0) {
    *(_BYTE*)(result + 12) = 1;
    *(_BYTE*)(result + 212) = 1;
  }
  return result;
}

__int64 MapMiniMap_18e9a40(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  float v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
  int v19;
  __int64* v20;
  float v21;
  int v22;
  bool v23;
  unsigned int v24;
  int v25;
  int v26;
  float v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  bool v32;
  _QWORD* v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64** v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  atomic_ullong* v41;
  __int64* v42;
  _QWORD* v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  float v51;
  _QWORD* v52;
  __int64* v53;
  __int64 v54;
  __int64** v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64* v60;
  __int64 v61;
  __int64** v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  float v68;
  __int64 v69;
  __int64* v70;
  int v71;
  float v72;
  __int64 v73;
  __int64 v74;
  const char* v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  float v80;
  __int64 v81;
  unsigned int v82;
  int v83;
  unsigned __int64 v84;
  __int64 v85;
  float v86;
  int v87;
  float v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  _QWORD* v97;
  atomic_ullong* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  _QWORD* v104;
  __int64 v105;
  __int64* v106;
  __int64 v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  int v111;
  _QWORD* v112;
  atomic_ullong* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  _QWORD* v118;
  __int64 v119;
  __int64* v120;
  __int64 v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  _QWORD* v127;
  __int64 v128;
  __int64* v129;
  __int64 v130;
  __int64** v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  int v143;
  int v144;
  int v145;
  _QWORD* v146;
  __int64 v147;
  __int64* v148;
  __int64 v149;
  __int64* v150;
  __int64 v151;
  __int64 v152;
  int v153;
  int v154;
  __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  unsigned __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  __int64 v162;
  char v163;
  __int64 v164;
  unsigned int v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  int v173;
  unsigned int v174;
  unsigned int v175;
  __int64 v176;
  int v177;
  unsigned int v178;
  __int64 v179;
  int v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  unsigned int v185;
  __int64 v186;
  int v187;
  __int64 v188;
  int v189;
  int v190;
  float v191;
  unsigned int v192;
  int v193;
  _QWORD* v194;
  __int64 v195;
  __int64* v196;
  __int64 v197;
  __int64* v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  _QWORD* v209;
  __int64 v210;
  __int64* v211;
  __int64 v212;
  __int64* v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64* v217;
  __int64* v218;
  __int64 v219;
  __int64 v220;
  _QWORD* v221;
  __int64 v222;
  __int64 v223;
  float v224;
  __int64 v225;
  __int64 v226;
  __int64* v227;
  int v228;
  float v229;
  __int64 v230;
  __int64 v231;
  const char* v232;
  __int64* v233;
  float v234;
  __int64 v235;
  _DWORD* v236;
  __int64 v237;
  int v238;
  int v239;
  __int64 v240;
  int v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  float v246;
  float v247;
  __int64 v248;
  char v249;
  _BOOL4 v250;
  _QWORD* v251;
  __int64** v252;
  __int64 v253;
  unsigned __int64 v254;
  __int64 v255;
  __int64* v256;
  __int64 v257;
  int v258;
  int v259;
  __int64* v260;
  __int64 v261;
  __int64 v262;
  __int64* v263;
  __int64 v264;
  unsigned __int64 add;
  __int64 v266;
  _DWORD* v267;
  char v268;
  __int64 v269;
  __int64** v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64* v274;
  __int64 v275;
  int v276;
  int v277;
  __int64* v278;
  __int64 v279;
  __int64 v280;
  unsigned __int64 v281;
  __int64 v282;
  _DWORD* v283;
  char v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64* v290;
  __int64 v291;
  int v292;
  int v293;
  __int64* v294;
  __int64 v295;
  __int64 v296;
  unsigned __int64 v297;
  __int64 v298;
  _QWORD* v299;
  __int64 v300;
  __int64* v301;
  __int64 v302;
  __int64 v303;
  __int64* v304;
  __int64 v305;
  __int64 v306;
  unsigned __int64 v307;
  int v308;
  int v309;
  void (***v310)(_QWORD);
  void (***v311)(_QWORD);
  void (***v312)(_QWORD);
  void (***v313)(_QWORD);
  void (**v314)(_QWORD);
  __int64 v315;
  __int64* v316;
  unsigned __int64 v317;
  unsigned __int64 v318;
  char* v319;
  __int64 v320;
  __int64* v321;
  char v322;
  unsigned __int64 v323;
  __int64* v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  __int64 result;
  __int64 v331;
  __int64 v332;
  unsigned __int64 v333;
  unsigned __int64 v334;
  char* v335;
  __int64 v336;
  __int64* v337;
  char v338;
  __int64 v339;
  unsigned __int64 v340;
  int v341;
  int v342;
  __int64* v343;
  __int64 v344;
  __int64* v345;
  unsigned __int64 v346;
  unsigned __int64 v347;
  char* v348;
  __int64 v349;
  char v350;
  unsigned __int64 v351;
  __int64* v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  char* v358;
  unsigned __int64 v359;
  char v360;
  __int64 v361;
  __int64 v362;
  unsigned __int64 v363;
  unsigned int v364;
  unsigned int v365;
  int v366;
  int v367;
  __int64 v368;
  __int64* v369;
  int v370;
  int v371;
  unsigned int v372;
  unsigned int v373;
  __int64 v374;
  atomic_ullong* v375;
  __int64 v376;
  __int64* v377;
  __int64* v378;
  __int64 v379;
  atomic_ullong* v380;
  __int64 v381;
  unsigned __int64 v382;
  __int64* v383;
  unsigned int v384;
  __int64 v385;
  __int64 v386;
  __int64* v387;
  int v388;
  __int64* v389;
  int v390;
  int v391;
  int v392;
  __int64 v393;
  int v394;
  int v395;
  __int64 v396;
  int v397;
  int v398;
  __int64 v399;
  int v400;
  __int64* v401;
  struct {
    __int64 v402;
    unsigned __int64 v403;
    char* v404;
  } v402_;
  __int64* v405;
  struct {
    __int64 v406;
    unsigned __int64 v407;
    char* v408;
    int v409;
  } v406_;
  struct {
    __int64 v410[4];
    __int64* v411;
  } v410_;
  __int64 v412[2];
  _QWORD v413[2];
  struct {
    __int64 v414;
    __int64 v415;
  } v414_;
  struct {
    __int64 v416;
    __int64 v417;
  } v416_;
  __int64 v418[2];
  unsigned int v419;
  struct {
    __int64 v420;
    __int64 v421;
  } v420_;
  struct {
    __int64 v422;
    __int64 v423;
  } v422_;
  struct {
    __int64 v424;
    __int64 v425;
  } v424_;
  struct {
    __int64 v426;
    __int64 v427;
  } v426_;
  struct {
    __int64 v428;
    __int64 v429;
  } v428_;
  struct {
    __int64 v430;
    __int64 v431;
  } v430_;
  struct {
    __int64 v432;
    __int64 v433;
  } v432_;
  struct {
    __int64 v434;
    __int64 v435;
  } v434_;
  struct {
    __int64 v436;
    __int64 v437;
  } v436_;
  struct {
    __int64** v438;
    __int64 v439;
  } v438_;
  struct {
    __int64 v440;
    __int64 v441;
  } v440_;
  struct {
    __int64 v442;
    __int64 v443;
  } v442_;
  struct {
    __int64** v444;
    __int64 v445;
  } v444_;
  struct {
    __int64 v446;
    __int64 v447;
  } v446_;
  struct {
    __int64 v448;
    __int64 v449;
  } v448_;
  struct {
    __int64** v450;
    __int64 v451;
  } v450_;
  struct {
    __int64 v452;
    __int64 v453;
  } v452_;
  struct {
    __int64 v454;
    __int64 v455;
  } v454_;
  struct {
    __int64** v456;
    __int64 v457;
  } v456_;
  struct {
    __int64 v458;
    __int64 v459;
  } v458_;

  v3 = GameHr_136ac50(ui_Manager_instance_ + 1264, 8,
                      (__int64)"Battle_MiniMap_Base");
  if (v3 != 0) {
    v4 = v3;
    v5 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 40),
                                         (__int64)"Map_Base");
    v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
    *(_QWORD*)(*(_QWORD*)(Pane_58f8a0_alt1(v6) + 24) + 8LL) = v4;
  }
  v7 = *(_QWORD*)(a1 + 48);
  v410_.v410[0] = *(_QWORD*)(a1 + 40);
  v410_.v410[1] = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  v393 = a1;
  MapChip_19fc2e0_alt1((__int64*)(a1 + 56), (__int64)v410_.v410);
  if (v410_.v410[1] != 0) {
    std___1___shared_weak_count___release_weak_alt2(v410_.v410[1]);
  }
  v8 = 0x1.0000000000000p+0f;
  v9 = *GameData_212ce98[0];
  v11 = *(__int64**)(v393 + 40);
  v10 = *(_QWORD*)(v393 + 48);
  v12 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v398 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  if (*(_DWORD*)(v393 + 224) == 2) {
    v13 = 0x1.0000000000000p+0f;
  }
  else {
    v13 = 0x1.3333340000000p-1f;
  }
  v395 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v14 = *(unsigned __int8*)(v9 + 31);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = v14 - v398;
  v16 = std___1___shared_weak_count_lock_alt1(v10);
  v17 = ui_LayoutAccessor_FindPane_alt1(v11, (__int64)"N_Map");
  if (v17 != 0) {
    v18 = Pane_58fac0_alt1(v17, "MapMargin");
    if (v18 != nullptr) {
      v8 = (float)*(int*)&v18[*((unsigned int*)v18 + 1)];
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt2(v16);
  }
  std___1___shared_weak_count___release_weak_alt2(v10);
  LODWORD(v438_.v438) = 0;
  if ((v15 & 0x80000000) == 0 && ((v395 - v12) & 0x80000000) == 0) {
    v19 = 0;
    v20 = GameData_212c930;
    v390 = v15;
    v21 = (float)-v8 / v13;
    v22 = 32 * v398;
    do {
      v24 = v395 - v12;
      v25 = v15 - v19;
      v26 = v395;
      v27 = v21 + (float)((float)v25 * -0x1.0000000000000p+4f);
      do {
        v28 = v22 + v26;
        if ((unsigned int)(v22 + v26) >= 0x400) {
          v28 = 0;
        }
        v29 = *(_QWORD*)(*(_QWORD*)(*v20 + 64) +
                         8LL * *(unsigned __int16*)(*(_QWORD*)(v9 + 72) +
                                                    2LL * v28 + 8));
        if (v29 != 0 &&
            *(unsigned __int8*)(*GameData_212ce98[0] + 18) >
                (unsigned int)(unsigned __int8)(v26 -
                                                *(_BYTE*)(*GameData_212ce98[0] +
                                                          16)) &&
            *(unsigned __int8*)(*GameData_212ce98[0] + 19) >
                (unsigned int)(unsigned __int8)(v19 + v398 -
                                                *(_BYTE*)(*GameData_212ce98[0] +
                                                          17))) {
          v30 = *(_BYTE*)(*GameData_212ce90[0] +
                          *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                          16) == 1
                    ? *(unsigned __int8*)(*GameData_212ce90[0] + 24)
                    : 0LL;
          if (((*(_DWORD*)(*(_QWORD*)(v9 + 160) + (v30 << 7) +
                           4LL * ((v22 + v26) >> 5) + 8) >>
                v26) &
               1) != 0) {
            v31 = *(_QWORD*)(v29 + 48);
            if (*(unsigned __int8*)(v31 + 40) != 255) {
              if (*(unsigned __int8*)(v31 + 33) == 255) {
                v43 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                v43[1] = 0;
                v43[2] = 0;
                v34 = (__int64)v43;
                *v43 = GameData_210a060;
                v44 = GameData_21301a0[0];
                v43[6] = 0;
                v43[7] = 0;
                *((_DWORD*)v43 + 14) = 1098907648;
                v43[4] = 0;
                v43[5] = 0;
                v46 = *(__int64**)(v393 + 40);
                v45 = *(_QWORD*)(v393 + 48);
                v47 = v44 + 2;
                v43[3] = v47;
                v48 = (__int64)(v43 + 3);
                v405 = v46;
                v406_.v406 = v45;
                if (v45 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16),
                                            1u, memory_order_relaxed);
                  v47 = *(__int64**)v48;
                }
                ((void (*)(_QWORD*, __int64**, _QWORD))v47[2])(
                    v43 + 3, &v405, (unsigned int)v438_.v438);
                if (v406_.v406 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v406_.v406);
                }
                v49 = *(_QWORD*)(v393 + 48);
                v402_.v402 = *(_QWORD*)(v393 + 40);
                v402_.v403 = v49;
                if (v49 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16),
                                            1u, memory_order_relaxed);
                }
                (*(void (**)(__int64, __int64*, __int64***, float, float,
                             double))(*(_QWORD*)v48 + 56LL))(
                    v48, &v402_.v402, &v438_.v438,
                    v21 + (float)((float)v24 * -0x1.0000000000000p+4f), v27,
                    0x0.0p+0);
                if (v402_.v403 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v402_.v403);
                }
                v458_.v458 = v48;
                v458_.v459 = v34;
                v41 = (atomic_ullong*)(v34 + 16);
                v42 = &v458_.v458;
              }
              else {
                v32 = *(char*)(v29 + 66) <= 0 && *(char*)(v29 + 67) <= 0;
                if (v32 && *(char*)(v29 + 68) <= 0) {
                  if (*(_BYTE*)(v29 + 57) == 11) {
                    v50 = *(unsigned __int8*)(v29 + 112);
                    v51 = 0x0.0p+0f;
                    if (v50 <= 3) {
                      v51 = GameData_1a83720[v50];
                    }
                    v52 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                    v52[1] = 0;
                    v52[2] = 0;
                    v34 = (__int64)v52;
                    *v52 = GameData_210a100;
                    v53 = GameData_21301b0[0];
                    v52[6] = 0;
                    v52[7] = 0;
                    *((_DWORD*)v52 + 14) = 1098907648;
                    v52[4] = 0;
                    v52[5] = 0;
                    v55 = *(__int64***)(v393 + 40);
                    v54 = *(_QWORD*)(v393 + 48);
                    v56 = v53 + 2;
                    v52[3] = v56;
                    v57 = (__int64)(v52 + 3);
                    v450_.v450 = v55;
                    v450_.v451 = v54;
                    if (v54 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v54 + 16), 1u,
                          memory_order_relaxed);
                      v56 = *(__int64**)v57;
                    }
                    ((void (*)(_QWORD*, __int64***, _QWORD))v56[2])(
                        v52 + 3, &v450_.v450, (unsigned int)v438_.v438);
                    if (v450_.v451 != 0) {
                      std___1___shared_weak_count___release_weak_alt2(
                          v450_.v451);
                    }
                    v58 = *(_QWORD*)(v393 + 48);
                    v448_.v448 = *(_QWORD*)(v393 + 40);
                    v448_.v449 = v58;
                    if (v58 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v58 + 16), 1u,
                          memory_order_relaxed);
                    }
                    (*(void (**)(__int64, __int64*, __int64***, float, float,
                                 float))(*(_QWORD*)v57 + 56LL))(
                        v57, &v448_.v448, &v438_.v438,
                        v21 + (float)((float)v24 * -0x1.0000000000000p+4f), v27,
                        v51);
                    if (v448_.v449 != 0) {
                      std___1___shared_weak_count___release_weak_alt2(
                          v448_.v449);
                    }
                    v446_.v446 = v57;
                    v446_.v447 = v34;
                    v41 = (atomic_ullong*)(v34 + 16);
                    v42 = &v446_.v446;
                  }
                  else {
                    v59 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                    v59[1] = 0;
                    v59[2] = 0;
                    v34 = (__int64)v59;
                    *v59 = GameData_210a150;
                    v60 = GameData_2130198[0];
                    v59[6] = 0;
                    v59[7] = 0;
                    *((_DWORD*)v59 + 14) = 1098907648;
                    v59[4] = 0;
                    v59[5] = 0;
                    v62 = *(__int64***)(v393 + 40);
                    v61 = *(_QWORD*)(v393 + 48);
                    v63 = v60 + 2;
                    v59[3] = v63;
                    v64 = (__int64)(v59 + 3);
                    v444_.v444 = v62;
                    v444_.v445 = v61;
                    if (v61 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v61 + 16), 1u,
                          memory_order_relaxed);
                      v63 = *(__int64**)v64;
                    }
                    ((void (*)(_QWORD*, __int64***, _QWORD))v63[2])(
                        v59 + 3, &v444_.v444, (unsigned int)v438_.v438);
                    if (v444_.v445 != 0) {
                      std___1___shared_weak_count___release_weak_alt2(
                          v444_.v445);
                    }
                    v65 = *(_QWORD*)(v393 + 48);
                    v442_.v442 = *(_QWORD*)(v393 + 40);
                    v442_.v443 = v65;
                    if (v65 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v65 + 16), 1u,
                          memory_order_relaxed);
                    }
                    (*(void (**)(__int64, __int64*, __int64***, float, float,
                                 double))(*(_QWORD*)v64 + 56LL))(
                        v64, &v442_.v442, &v438_.v438,
                        v21 + (float)((float)v24 * -0x1.0000000000000p+4f), v27,
                        0x0.0p+0);
                    if (v442_.v443 != 0) {
                      std___1___shared_weak_count___release_weak_alt2(
                          v442_.v443);
                    }
                    v440_.v440 = v64;
                    v440_.v441 = v34;
                    v41 = (atomic_ullong*)(v34 + 16);
                    v42 = &v440_.v440;
                  }
                }
                else {
                  v33 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                  v33[1] = 0;
                  v33[2] = 0;
                  v34 = (__int64)v33;
                  *v33 = GameData_210a0b0;
                  v35 = GameData_21301a8[0];
                  v33[6] = 0;
                  v33[7] = 0;
                  *((_DWORD*)v33 + 14) = 1098907648;
                  v33[4] = 0;
                  v33[5] = 0;
                  v37 = *(__int64***)(v393 + 40);
                  v36 = *(_QWORD*)(v393 + 48);
                  v38 = v35 + 2;
                  v33[3] = v38;
                  v39 = (__int64)(v33 + 3);
                  v456_.v456 = v37;
                  v456_.v457 = v36;
                  if (v36 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v36 + 16), 1u,
                        memory_order_relaxed);
                    v38 = *(__int64**)v39;
                  }
                  ((void (*)(_QWORD*, __int64***, _QWORD))v38[2])(
                      v33 + 3, &v456_.v456, (unsigned int)v438_.v438);
                  if (v456_.v457 != 0) {
                    std___1___shared_weak_count___release_weak_alt2(v456_.v457);
                  }
                  v40 = *(_QWORD*)(v393 + 48);
                  v454_.v454 = *(_QWORD*)(v393 + 40);
                  v454_.v455 = v40;
                  if (v40 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v40 + 16), 1u,
                        memory_order_relaxed);
                  }
                  (*(void (**)(__int64, __int64*, __int64***, float, float,
                               double))(*(_QWORD*)v39 + 56LL))(
                      v39, &v454_.v454, &v438_.v438,
                      v21 + (float)((float)v24 * -0x1.0000000000000p+4f), v27,
                      0x0.0p+0);
                  if (v454_.v455 != 0) {
                    std___1___shared_weak_count___release_weak_alt2(v454_.v455);
                  }
                  v452_.v452 = v39;
                  v452_.v453 = v34;
                  v41 = (atomic_ullong*)(v34 + 16);
                  v42 = &v452_.v452;
                }
              }
              atomic_fetch_add_explicit(v41, 1u, memory_order_relaxed);
              MapChip_19fc0b0_alt1(v393 + 56, v42);
              std___1___shared_weak_count___release_weak_alt2(v34);
              if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
                std___1___shared_weak_count___release_weak_alt2(v34);
              }
            }
          }
        }
        --v26;
        v32 = (int)v24-- <= 0;
      } while (!v32);
      v15 = v390;
      v22 += 32;
      v23 = v390 == v19++;
    } while (!v23);
  }
  v66 = (_QWORD*)v393;
  v67 = *(_QWORD*)(v393 + 48);
  v410_.v410[0] = *(_QWORD*)(v393 + 40);
  v410_.v410[1] = v67;
  if (v67 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 16), 1u,
                              memory_order_relaxed);
  }
  MapChip_19fc2e0_alt1((__int64*)(v393 + 80), (__int64)v410_.v410);
  if (v410_.v410[1] != 0) {
    std___1___shared_weak_count___release_weak_alt2(v410_.v410[1]);
  }
  v68 = 0x1.0000000000000p+0f;
  v70 = *(__int64**)(v393 + 40);
  v69 = *(_QWORD*)(v393 + 48);
  v396 = *GameData_212ce98[0];
  v365 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v368 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v71 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v388 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  if (*(_DWORD*)(v393 + 224) == 2) {
    v72 = 0x1.0000000000000p+0f;
  }
  else {
    v72 = 0x1.3333340000000p-1f;
  }
  if (v69 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16), 1u,
                              memory_order_relaxed);
  }
  v367 = v71 - v368;
  v73 = std___1___shared_weak_count_lock_alt1(v69);
  v74 = ui_LayoutAccessor_FindPane_alt1(v70, (__int64)"N_Map");
  if (v74 != 0) {
    v75 = Pane_58fac0_alt1(v74, "MapMargin");
    if (v75 != nullptr) {
      v68 = (float)*(int*)&v75[*((unsigned int*)v75 + 1)];
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
    std___1___shared_weak_count___release_weak_alt2(v73);
  }
  std___1___shared_weak_count___release_weak_alt2(v69);
  v419 = 0;
  if ((v367 & 0x80000000) == 0) {
    v78 = v388 - v365;
    if ((v78 & 0x80000000) == 0) {
      v79 = 0;
      v80 = (float)-v68 / v72;
      v381 = 0;
      v382 = 0;
      v383 = nullptr;
      v81 = v78 + v365;
      v82 = 32 * v368 - 32;
      v83 = 32 * v368 + v388;
      v391 = v83;
      v84 = ((unsigned __int64)(unsigned int)v368 << 6) + 2 * v81 + 10;
      v366 = v388 - 1;
      v385 = v81;
      v386 = v81 + 32 * v368;
      v371 = v83 - 1;
      v370 = v83 - 33;
      v378 = GameData_2130168[0] + 2;
      v369 = GameData_2130148[0] + 2;
      v377 = GameData_2130150[0] + 2;
      while (1) {
        v85 = 0;
        v364 = v82;
        v379 = v79;
        v363 = v84;
        v374 = 2 * (v385 + v82);
        v384 = v79 + v368;
        v372 = v79 + v368 - 1;
        v373 = v79 + v368 + 1;
        v86 = v80 + (float)((float)(v367 - v79) * -0x1.0000000000000p+4f);
        do {
          v87 = v78 + v85;
          v88 = v80 + (float)((float)(unsigned int)(v78 + v85) *
                              -0x1.0000000000000p+4f);
          v89 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
          v399 = *GameData_212cfb8[0];
          v394 = v391 + v85;
          if ((unsigned int)(v391 + v85) >= 0x400) {
            v90 = 0;
          }
          else {
            v90 = (unsigned int)(v391 + v85);
          }
          v91 = *(__int16*)(v89 + 2LL * (unsigned int)v90 + 4200);
          v92 = *(_QWORD*)(v89 + 8);
          if ((v91 < 0 || v92 == 0) &&
              ((v91 = *(__int16*)(v89 + 2 * v90 + 2152)) < 0 || v92 == 0)) {
            v136 = *(__int16*)(v89 + 104 + 2 * v90);
            if (v136 < 0) {
              goto LABEL_231;
            }
            v93 = v92 + 144LL * (unsigned int)v136;
            if (v93 == 0) {
              goto LABEL_231;
            }
          }
          else {
            v93 = v92 + 144LL * (unsigned int)v91;
            if (v93 == 0) {
              goto LABEL_231;
            }
          }
          v94 = (*(__int64 (**)(__int64))(*(_QWORD*)v93 + 224LL))(v93);
          if (v94 != 0) {
            v95 = *(unsigned __int8*)(v94 + 57);
            v96 = v94;
            if (v95 == 2) {
              if (*(_BYTE*)(v94 + 59) != 0) {
                v97 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
                v97[6] = 0;
                v97[7] = 0;
                v97[1] = 0;
                v98 = (atomic_ullong*)(v97 + 1);
                v99 = (__int64)v97;
                v97[2] = 0;
                v97[4] = 0;
                v97[5] = 0;
                v97[8] = 0;
                v97[9] = 0;
                *v97 = GameData_210a1a0;
                v97[3] = v369;
                v100 = (__int64)(v97 + 3);
                *((_DWORD*)v97 + 14) = 1098907648;
                *((_BYTE*)v97 + 72) = 9;
                if (((*(__int64 (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93) &
                     1) != 0) {
                  v101 = v66[6];
                  v405 = (__int64*)v66[5];
                  v406_.v406 = v101;
                  if (v101 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v101 + 16), 1u,
                        memory_order_relaxed);
                  }
                  (*(void (**)(__int64, __int64**, _QWORD))(
                      *(_QWORD*)v100 + 16LL))(v100, &v405, v419);
                  if (v406_.v406 != 0) {
                    std___1___shared_weak_count___release_weak_alt2(v406_.v406);
                  }
                  v103 = v66[5];
                  v102 = v66[6];
                  *(_QWORD*)(v99 + 64) = v93;
                  v402_.v402 = v103;
                  v402_.v403 = v102;
                  if (v102 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v102 + 16), 1u,
                        memory_order_relaxed);
                  }
                  (*(void (**)(__int64, __int64*, __int64, unsigned int*, float,
                               float, double))(*(_QWORD*)v100 + 56LL))(
                      v100, &v402_.v402, v96, &v419, v88, v86, 0x0.0p+0);
                  if (v402_.v403 != 0) {
                    std___1___shared_weak_count___release_weak_alt2(v402_.v403);
                  }
                  v458_.v458 = v100;
                  v458_.v459 = v99;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 16),
                                            1u, memory_order_relaxed);
                  MapChip_19fc0b0_alt1((__int64)(v66 + 10), &v458_.v458);
                  std___1___shared_weak_count___release_weak_alt2(v99);
                }
                if (atomic_fetch_add(v98, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
                  std___1___shared_weak_count___release_weak_alt2(v99);
                }
              }
              v95 = *(unsigned __int8*)(v96 + 57);
            }
            if (v95 == 3) {
              v104 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
              v104[1] = 0;
              v104[2] = 0;
              v105 = (__int64)v104;
              *v104 = GameData_210a1f0;
              v106 = GameData_2130140[0];
              v104[6] = 0;
              v104[7] = 0;
              *((_DWORD*)v104 + 14) = 1098907648;
              v104[4] = 0;
              v104[5] = 0;
              v107 = v66[6];
              v108 = v106 + 2;
              v456_.v456 = (__int64**)v66[5];
              v456_.v457 = v107;
              v104[3] = v108;
              v109 = (__int64)(v104 + 3);
              if (v107 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v107 + 16),
                                          1u, memory_order_relaxed);
                v108 = *(__int64**)v109;
              }
              ((void (*)(_QWORD*, __int64***, _QWORD))v108[2])(
                  v104 + 3, &v456_.v456, v419);
              if (v456_.v457 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v456_.v457);
              }
              *(_BYTE*)(v105 + 60) =
                  (*(__int64 (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93) & 1;
              v110 = v66[6];
              v454_.v454 = v66[5];
              v454_.v455 = v110;
              if (v110 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v110 + 16),
                                          1u, memory_order_relaxed);
              }
              (*(void (**)(__int64, __int64*, __int64, unsigned int*, float,
                           float, double))(*(_QWORD*)v109 + 56LL))(
                  v109, &v454_.v454, v96, &v419, v88, v86, 0x0.0p+0);
              if (v454_.v455 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v454_.v455);
              }
              v452_.v452 = v109;
              v452_.v453 = v105;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v105 + 16),
                                        1u, memory_order_relaxed);
              MapChip_19fc0b0_alt1((__int64)(v66 + 10), &v452_.v452);
              std___1___shared_weak_count___release_weak_alt2(v105);
              if (atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105);
                std___1___shared_weak_count___release_weak_alt2(v105);
              }
            }
            v111 = *(unsigned __int8*)(v96 + 57);
            if ((unsigned int)(v111 - 4) <= 2) {
              v112 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
              v112[1] = 0;
              v113 = (atomic_ullong*)(v112 + 1);
              v112[2] = 0;
              v114 = (__int64)v112;
              v112[4] = 0;
              v112[5] = 0;
              v112[6] = 0;
              v112[7] = 0;
              *v112 = GameData_210a240;
              v112[3] = v377;
              v115 = (__int64)(v112 + 3);
              *((_DWORD*)v112 + 14) = 1098907648;
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93) & 1) !=
                  0) {
                v116 = v66[6];
                v450_.v450 = (__int64**)v66[5];
                v450_.v451 = v116;
                if (v116 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v116 + 16), 1u,
                      memory_order_relaxed);
                }
                (*(void (**)(__int64, __int64***, _QWORD))(
                    *(_QWORD*)v115 + 16LL))(v115, &v450_.v450, v419);
                if (v450_.v451 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v450_.v451);
                }
                v117 = v66[6];
                v448_.v448 = v66[5];
                v448_.v449 = v117;
                if (v117 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v117 + 16), 1u,
                      memory_order_relaxed);
                }
                (*(void (**)(__int64, __int64*, __int64, unsigned int*, float,
                             float, double))(*(_QWORD*)v115 + 56LL))(
                    v115, &v448_.v448, v96, &v419, v88, v86, 0x0.0p+0);
                if (v448_.v449 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v448_.v449);
                }
                v446_.v446 = v115;
                v446_.v447 = v114;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v114 + 16),
                                          1u, memory_order_relaxed);
                MapChip_19fc0b0_alt1((__int64)(v66 + 10), &v446_.v446);
                std___1___shared_weak_count___release_weak_alt2(v114);
              }
              if (atomic_fetch_add(v113, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v114 + 16LL))(v114);
                std___1___shared_weak_count___release_weak_alt2(v114);
              }
              v111 = *(unsigned __int8*)(v96 + 57);
            }
            if (v111 == 1) {
              v118 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
              v118[1] = 0;
              v118[2] = 0;
              v119 = (__int64)v118;
              *v118 = GameData_210a290;
              v120 = GameData_2130160[0];
              v118[6] = 0;
              v118[7] = 0;
              *((_DWORD*)v118 + 14) = 1098907648;
              v118[4] = 0;
              v118[5] = 0;
              v121 = v66[6];
              v122 = v120 + 2;
              v444_.v444 = (__int64**)v66[5];
              v444_.v445 = v121;
              v118[3] = v122;
              v123 = (__int64)(v118 + 3);
              if (v121 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v121 + 16),
                                          1u, memory_order_relaxed);
                v122 = *(__int64**)v123;
              }
              ((void (*)(_QWORD*, __int64***, _QWORD))v122[2])(
                  v118 + 3, &v444_.v444, v419);
              if (v444_.v445 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v444_.v445);
              }
              v124 = v66[6];
              v442_.v442 = v66[5];
              v442_.v443 = v124;
              if (v124 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v124 + 16),
                                          1u, memory_order_relaxed);
              }
              (*(void (**)(__int64, __int64*, __int64, unsigned int*, float,
                           float, double))(*(_QWORD*)v123 + 56LL))(
                  v123, &v442_.v442, v96, &v419, v88, v86, 0x0.0p+0);
              if (v442_.v443 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v442_.v443);
              }
              v440_.v440 = v123;
              v440_.v441 = v119;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v119 + 16),
                                        1u, memory_order_relaxed);
              MapChip_19fc0b0_alt1((__int64)(v66 + 10), &v440_.v440);
              std___1___shared_weak_count___release_weak_alt2(v119);
              if (atomic_fetch_add((atomic_ullong* volatile)(v119 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v119 + 16LL))(v119);
                std___1___shared_weak_count___release_weak_alt2(v119);
              }
            }
          }
          v125 = (*(__int64 (**)(__int64))(*(_QWORD*)v93 + 224LL))(v93);
          if (v125 != 0 && (v126 = v125, *(_BYTE*)(v125 + 57) == 7)) {
            v127 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 184, 16, 0);
            v127[1] = 0;
            v127[2] = 0;
            v128 = (__int64)v127;
            v127[4] = 0;
            v127[5] = 0;
            v127[6] = 0;
            v127[7] = 0;
            v127[8] = 0;
            v127[9] = 0;
            v127[10] = 0;
            v127[11] = 0;
            *v127 = GameData_210a2e0;
            v380 = (atomic_ullong*)(v127 + 1);
            v127[12] = 0;
            v127[13] = 0;
            v127[14] = 0;
            v127[15] = 0;
            v129 = GameData_2130170[0] + 2;
            *((_DWORD*)v127 + 14) = 1098907648;
            *((_DWORD*)v127 + 24) = 1098907648;
            v127[8] = v378;
            v127[15] = 0;
            v127[16] = 0;
            v127[16] = 0;
            v127[17] = 0;
            v127[17] = 0;
            v127[18] = 0;
            v127[18] = 0;
            v127[19] = 0;
            v127[19] = 0;
            v127[20] = 0;
            v127[20] = 0;
            v127[21] = 0;
            v127[21] = 0;
            v127[22] = 0;
            *((_WORD*)v127 + 88) = 0;
            *((_DWORD*)v127 + 26) = 1065353216;
            *((_DWORD*)v127 + 28) = 1065353216;
            v131 = (__int64**)v66[5];
            v130 = v66[6];
            v127[3] = v129;
            v132 = (__int64)(v127 + 3);
            v438_.v438 = v131;
            v438_.v439 = v130;
            if (v130 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v130 + 16),
                                        1u, memory_order_relaxed);
              v129 = *(__int64**)v132;
            }
            ((void (*)(_QWORD*, __int64***, _QWORD))v129[2])(v127 + 3,
                                                             &v438_.v438, v419);
            if (v438_.v439 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v438_.v439);
            }
            v133 = v66[6];
            v436_.v436 = v66[5];
            v436_.v437 = v133;
            if (v133 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v133 + 16),
                                        1u, memory_order_relaxed);
            }
            (*(void (**)(__int64, __int64*, __int64, unsigned int*, float,
                         float, double))(*(_QWORD*)v132 + 56LL))(
                v132, &v436_.v436, v126, &v419, v88, v86, 0x0.0p+0);
            if (v436_.v437 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v436_.v437);
            }
            v434_.v434 = v132;
            v434_.v435 = v128;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v128 + 16), 1u,
                                      memory_order_relaxed);
            MapChip_19fc0b0_alt1((__int64)(v66 + 10), &v434_.v434);
            std___1___shared_weak_count___release_weak_alt2(v128);
            *(float*)(v128 + 160) = v88;
            *(float*)(v128 + 164) = v86;
            *(_QWORD*)(v128 + 144) = v126;
            *(_QWORD*)(v128 + 152) = v93;
            *(_DWORD*)(v128 + 168) = v87;
            *(_DWORD*)(v128 + 172) = v379;
            v134 = v66[6];
            v432_.v432 = v66[5];
            v432_.v433 = v134;
            if (v134 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v134 + 16),
                                        1u, memory_order_relaxed);
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v132 + 48LL))(
                v132, &v432_.v432);
            if (v432_.v433 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v432_.v433);
            }
            if ((unsigned __int64)v383 >= v382) {
              v137 = (unsigned __int64)v383 - v381;
              v138 = ((__int64)v383 - v381) >> 3;
              v139 = v138 + 1;
              if ((unsigned __int64)(v138 + 1) >> 61 != 0) {
                goto LABEL_616;
              }
              if ((__int64)(v382 - v381) >> 2 > v139) {
                v139 = (__int64)(v382 - v381) >> 2;
              }
              if (v382 - v381 >= 0x7FFFFFFFFFFFFFF8LL) {
                v140 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v140 = v139;
              }
              if (v140 != 0) {
                if (v140 >> 61 != 0) {
                  goto LABEL_617;
                }
                v141 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v140, 16, 0);
              }
              else {
                v141 = 0;
              }
              *(_QWORD*)(v141 + v137) = v132;
              v135 = v141 + v137 - 8 * v138;
              v382 = v141 + 8 * v140;
              v383 = (__int64*)(v141 + v137 + 8);
              memcpy_alt1(v135, v381, v137);
              if (v381 != 0) {
                v142 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v142 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v142, v381);
              }
              v66 = (_QWORD*)v393;
            }
            else {
              *v383 = v132;
              v135 = v381;
              ++v383;
            }
            v143 = (*(__int64 (**)(__int64))(*(_QWORD*)v93 + 328LL))(v93);
            v144 = (*(__int64 (**)(__int64))(*(_QWORD*)v93 + 336LL))(v93);
            if (*(_QWORD*)(*(_QWORD*)(v126 + 128) + 128LL) != 0) {
              v78 = v388 - v365;
              v381 = v135;
            }
            else {
              v376 = v135;
              v145 = v144;
              v146 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 184, 16, 0);
              v146[1] = 0;
              v146[2] = 0;
              v147 = (__int64)v146;
              v146[4] = 0;
              v146[5] = 0;
              v146[6] = 0;
              v146[7] = 0;
              v146[8] = 0;
              v146[9] = 0;
              v146[10] = 0;
              v146[11] = 0;
              *v146 = GameData_210a2e0;
              v375 = (atomic_ullong*)(v146 + 1);
              v146[12] = 0;
              v146[13] = 0;
              v146[14] = 0;
              v146[15] = 0;
              v148 = GameData_2130170[0] + 2;
              *((_DWORD*)v146 + 14) = 1098907648;
              *((_DWORD*)v146 + 24) = 1098907648;
              v146[3] = v148;
              v149 = (__int64)(v146 + 3);
              v150 = GameData_2130168[0];
              v146[15] = 0;
              v146[16] = 0;
              v146[16] = 0;
              v146[17] = 0;
              v146[17] = 0;
              v146[18] = 0;
              v146[18] = 0;
              v146[19] = 0;
              v146[19] = 0;
              v146[20] = 0;
              v146[20] = 0;
              v146[21] = 0;
              v146[21] = 0;
              v146[22] = 0;
              *((_WORD*)v146 + 88) = 0;
              v146[8] = v150 + 2;
              *((_DWORD*)v146 + 26) = 1065353216;
              *((_DWORD*)v146 + 28) = 1065353216;
              v151 = v66[6];
              v430_.v430 = v66[5];
              v430_.v431 = v151;
              if (v151 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v151 + 16),
                                          1u, memory_order_relaxed);
                v148 = *(__int64**)v149;
              }
              ((void (*)(_QWORD*, __int64*, _QWORD))v148[2])(v146 + 3,
                                                             &v430_.v430, v419);
              if (v430_.v431 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v430_.v431);
              }
              v152 = v66[6];
              v428_.v428 = v66[5];
              v428_.v429 = v152;
              if (v152 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v152 + 16),
                                          1u, memory_order_relaxed);
              }
              v153 = v145 - v368;
              v154 = v143 - v365;
              (*(void (**)(__int64, __int64*, _QWORD, unsigned int*, float,
                           float, double))(*(_QWORD*)v149 + 56LL))(
                  v149, &v428_.v428, *(_QWORD*)(v126 + 128), &v419,
                  v80 + (float)((float)v154 * -0x1.0000000000000p+4f),
                  v80 + (float)((float)(v367 - v153) * -0x1.0000000000000p+4f),
                  0x0.0p+0);
              if (v428_.v429 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v428_.v429);
              }
              v426_.v426 = v149;
              v426_.v427 = v147;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v147 + 16),
                                        1u, memory_order_relaxed);
              MapChip_19fc0b0_alt1((__int64)(v66 + 10), &v426_.v426);
              std___1___shared_weak_count___release_weak_alt2(v147);
              *(float*)(v147 + 160) =
                  v80 + (float)((float)v154 * -0x1.0000000000000p+4f);
              *(float*)(v147 + 164) =
                  v80 + (float)((float)(v367 - v153) * -0x1.0000000000000p+4f);
              v155 = *(_QWORD*)(v126 + 128);
              *(_DWORD*)(v147 + 168) = v154;
              *(_DWORD*)(v147 + 172) = v153;
              *(_QWORD*)(v147 + 144) = v155;
              *(_QWORD*)(v147 + 152) = 0;
              v156 = v66[6];
              v424_.v424 = v66[5];
              v424_.v425 = v156;
              if (v156 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v156 + 16),
                                          1u, memory_order_relaxed);
              }
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v149 + 48LL))(
                  v149, &v424_.v424);
              v78 = v388 - v365;
              if (v424_.v425 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v424_.v425);
              }
              if ((unsigned __int64)v383 >= v382) {
                v157 = (unsigned __int64)v383 - v376;
                v158 = ((__int64)v383 - v376) >> 3;
                v159 = v158 + 1;
                if ((unsigned __int64)(v158 + 1) >> 61 != 0) {
                LABEL_616:
                  GameRoutine_18ece80_alt1();
                }
                if ((__int64)(v382 - v376) >> 2 > v159) {
                  v159 = (__int64)(v382 - v376) >> 2;
                }
                if (v382 - v376 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v160 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v160 = v159;
                }
                if (v160 != 0) {
                  if (v160 >> 61 != 0) {
                  LABEL_617:
                    GameRoutine_60a210_alt1();
                  }
                  v161 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v160, 16, 0);
                }
                else {
                  v161 = 0;
                }
                *(_QWORD*)(v161 + v157) = v149;
                v382 = v161 + 8 * v160;
                v383 = (__int64*)(v161 + v157 + 8);
                v381 = v161 + v157 - 8 * v158;
                memcpy_alt1(v381, v376, v157);
                if (v376 != 0) {
                  v162 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v162 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v162, v376);
                }
                v66 = (_QWORD*)v393;
                v78 = v388 - v365;
              }
              else {
                *v383++ = v149;
                v381 = v376;
              }
              if (atomic_fetch_add(v375, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v147 + 16LL))(v147);
                std___1___shared_weak_count___release_weak_alt2(v147);
              }
            }
            if (atomic_fetch_add(v380, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v128 + 16LL))(v128);
              std___1___shared_weak_count___release_weak_alt2(v128);
            }
          }
          else {
            v78 = v388 - v365;
          }
        LABEL_231:
          v163 = v385 + v85;
          if ((unsigned __int64)(v386 + v85) >= 0x400) {
            v164 = 0;
          }
          else {
            v164 = (unsigned int)(v386 + v85);
          }
          v165 = v388 + v85;
          v166 = *(_QWORD*)(v396 + 32);
          v167 = v166 + 8;
          v168 = *(unsigned __int16*)(v166 + 8 + 2 * v164);
          v169 = *(_QWORD*)(*GameData_212c930 + 64);
          v170 = *(_QWORD*)(v169 + 8 * v168);
          if (v170 != 0) {
            if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) <=
                    (unsigned int)(unsigned __int8)(v163 -
                                                    *(_BYTE*)(*GameData_212ce98
                                                                  [0] +
                                                              16)) ||
                *(unsigned __int8*)(*GameData_212ce98[0] + 19) <=
                    (unsigned int)(unsigned __int8)(v384 -
                                                    *(_BYTE*)(*GameData_212ce98
                                                                  [0] +
                                                              17))) {
              goto LABEL_100;
            }
            v171 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
            v172 = *(_BYTE*)(*GameData_212ce90[0] + v171 + 16) == 1
                       ? *(unsigned __int8*)(*GameData_212ce90[0] + 24)
                       : 0LL;
            if (((*(_DWORD*)(*(_QWORD*)(v396 + 160) + (v172 << 7) +
                             4LL * (v394 >> 5) + 8) >>
                  v165) &
                 1) == 0) {
              goto LABEL_100;
            }
            if ((*(_BYTE*)(v170 + 217) & 8) != 0) {
              v173 = v366 + v85;
              if (((v366 + (_DWORD)v85) | v384) > 0x1F) {
                v174 = v372;
                v175 = v373;
                v177 = 0;
              }
              else {
                v174 = v372;
                v175 = v373;
                v176 = *(
                    _QWORD*)(v169 +
                             8LL *
                                 *(unsigned __int16*)(v167 +
                                                      2LL *
                                                          (unsigned int)(v371 +
                                                                         v85)));
                if (v176 != 0) {
                  LOBYTE(v171) = (*(_BYTE*)(v176 + 217) & 8) != 0;
                }
                v177 = (v176 != 0) & (unsigned __int8)v171;
              }
              v178 = v388 + v85 + 1;
              if ((v178 | v384) > 0x1F) {
                v180 = 0;
              }
              else {
                v179 =
                    *(_QWORD*)(v169 + 8LL * *(unsigned __int16*)(v166 + v84));
                if (v179 != 0) {
                  LOBYTE(v83) = (*(_BYTE*)(v179 + 217) & 8) != 0;
                }
                if (((v179 != 0) & (unsigned __int8)v83) != 0) {
                  v180 = 4;
                }
                else {
                  v180 = 0;
                }
              }
              if ((v174 | v165) > 0x1F) {
                v83 = 0;
              }
              else {
                v181 =
                    *(_QWORD*)(v169 + 8LL * *(unsigned __int16*)(v166 + v374 +
                                                                 2 * v85 + 8));
                if (v181 != 0) {
                  LOBYTE(v76) = (*(_BYTE*)(v181 + 217) & 8) != 0;
                }
                if (((v181 != 0) & (unsigned __int8)v76) != 0) {
                  v83 = 2;
                }
                else {
                  v83 = 0;
                }
              }
              if ((v165 | v175) > 0x1F) {
                v76 = 0;
              }
              else {
                v182 = *(_QWORD*)(v169 +
                                  8LL * *(unsigned __int16*)(v166 + v84 + 62));
                if (v182 != 0) {
                  LOBYTE(v77) = (*(_BYTE*)(v182 + 217) & 8) != 0;
                }
                if (((v182 != 0) & (unsigned __int8)v77) != 0) {
                  v76 = 8;
                }
                else {
                  v76 = 0;
                }
              }
              if ((v173 | v174) > 0x1F) {
                v77 = 0;
              }
              else {
                v183 = *(
                    _QWORD*)(v169 +
                             8LL *
                                 *(unsigned __int16*)(v167 +
                                                      2LL *
                                                          (unsigned int)(v370 +
                                                                         v85)));
                if (v183 != 0) {
                  LOBYTE(v1) = (*(_BYTE*)(v183 + 217) & 8) != 0;
                }
                v77 = (v183 != 0) & (unsigned __int8)v1;
              }
              if ((v174 | v178) > 0x1F) {
                v1 = 0;
              }
              else {
                v184 =
                    *(_QWORD*)(v169 + 8LL * *(unsigned __int16*)(v166 + v374 +
                                                                 2 * v85 + 10));
                if (v184 != 0) {
                  LOBYTE(v174) = (*(_BYTE*)(v184 + 217) & 8) != 0;
                }
                if (((v184 != 0) & (unsigned __int8)v174) != 0) {
                  v1 = 2;
                }
                else {
                  v1 = 0;
                }
              }
              v185 = v178 | v175;
              if (v185 > 0x1F) {
                v187 = 0;
              }
              else {
                v186 = *(_QWORD*)(v169 +
                                  8LL * *(unsigned __int16*)(v166 + v84 + 64));
                if (v186 != 0) {
                  LOBYTE(v185) = (*(_BYTE*)(v186 + 217) & 8) != 0;
                }
                if (((v186 != 0) & (unsigned __int8)v185) != 0) {
                  v187 = 4;
                }
                else {
                  v187 = 0;
                }
              }
              if ((v173 | v175) > 0x1F) {
                v189 = 0;
              }
              else {
                v188 = *(
                    _QWORD*)(v169 +
                             8LL *
                                 *(unsigned __int16*)(v167 +
                                                      2LL *
                                                          (unsigned int)(v391 +
                                                                         v85 +
                                                                         31)));
                if (v188 != 0) {
                  LOBYTE(v169) = (*(_BYTE*)(v188 + 217) & 8) != 0;
                }
                if (((v188 != 0) & (unsigned __int8)v169) != 0) {
                  v189 = 8;
                }
                else {
                  v189 = 0;
                }
              }
              v190 = 7;
              v191 = 0x0.0p+0f;
              switch (v180 | v177 | v83 | v76) {
              case 0:
                goto LABEL_317;
              case 1:
                v190 = 6;
                goto LABEL_310;
              case 2:
                v190 = 6;
                goto LABEL_317;
              case 3:
                v190 = 4;
                goto LABEL_317;
              case 4:
                v190 = 6;
                goto LABEL_312;
              case 5:
                v190 = 5;
                goto LABEL_310;
              case 6:
                v190 = 4;
                goto LABEL_312;
              case 7:
                v190 = 3;
              LABEL_312:
                v193 = 1132920832;
                goto LABEL_316;
              case 8:
                v190 = 6;
                goto LABEL_315;
              case 9:
                v190 = 4;
                goto LABEL_310;
              case 0xA:
                v190 = 5;
                goto LABEL_317;
              case 0xB:
                v190 = 3;
                goto LABEL_317;
              case 0xC:
                v190 = 4;
                goto LABEL_315;
              case 0xD:
                v190 = 3;
              LABEL_310:
                v193 = 1119092736;
                goto LABEL_316;
              case 0xE:
                v190 = 3;
              LABEL_315:
                v193 = 1127481344;
              LABEL_316:
                v191 = *(float*)&v193;
                goto LABEL_317;
              case 0xF:
                v78 = v388 - v365;
                v192 = (v1 | v77 | v187 | v189) - 7;
                if (v192 > 7 || ((0xD1u >> v192) & 1) == 0) {
                  break;
                }
                v190 = 1;
                v191 = GameData_1b01608[v192];
              LABEL_317:
                v194 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                v194[1] = 0;
                v194[2] = 0;
                v195 = (__int64)v194;
                *v194 = GameData_210a330;
                v196 = GameData_2130180[0];
                v194[6] = 0;
                v194[7] = 0x141800000LL;
                v194[4] = 0;
                v194[5] = 0;
                v197 = v66[6];
                v198 = v196 + 2;
                v422_.v422 = v66[5];
                v422_.v423 = v197;
                v194[3] = v198;
                v199 = (__int64)(v194 + 3);
                if (v197 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v197 + 16), 1u,
                      memory_order_relaxed);
                  v198 = *(__int64**)v199;
                }
                ((void (*)(_QWORD*, __int64*, _QWORD))v198[2])(
                    v194 + 3, &v422_.v422, v419);
                if (v422_.v423 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v422_.v423);
                }
                v201 = v66[5];
                v200 = v66[6];
                *(_DWORD*)(v195 + 60) = v190;
                v420_.v420 = v201;
                v420_.v421 = v200;
                if (v200 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v200 + 16), 1u,
                      memory_order_relaxed);
                }
                (*(void (**)(__int64, __int64*, __int64, unsigned int*, float,
                             float, float))(*(_QWORD*)v199 + 56LL))(
                    v199, &v420_.v420, v170, &v419, v88, v86, v191);
                if (v420_.v421 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v420_.v421);
                }
                v418[0] = v199;
                v418[1] = v195;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v195 + 16),
                                          1u, memory_order_relaxed);
                MapChip_19fc0b0_alt1((__int64)(v66 + 10), v418);
                std___1___shared_weak_count___release_weak_alt2(v195);
                v78 = v388 - v365;
                if (atomic_fetch_add((atomic_ullong* volatile)(v195 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v195 + 16LL))(v195);
                  std___1___shared_weak_count___release_weak_alt2(v195);
                }
                break;
              default:
                abort();
              }
            }
          }
          v202 = *(_QWORD*)(v399 + 16);
          v203 = *(__int16*)(v202 + 2 * v90 + 2152);
          if ((v203 & 0x8000000000000000LL) == 0) {
            v204 = *(_QWORD*)(v202 + 8);
            if (v204 != 0) {
              v205 = v204 + 144LL * (int)v203;
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v205 + 272LL))(v205) &
                   1) != 0 &&
                  *(unsigned __int8*)(*GameData_212ce98[0] + 18) >
                      (unsigned int)(unsigned __int8)(v163 -
                                                      *(_BYTE*)(*GameData_212ce98
                                                                    [0] +
                                                                16)) &&
                  *(unsigned __int8*)(*GameData_212ce98[0] + 19) >
                      (unsigned int)(unsigned __int8)(v384 -
                                                      *(_BYTE*)(*GameData_212ce98
                                                                    [0] +
                                                                17))) {
                v206 =
                    *(_BYTE*)(*GameData_212ce90[0] +
                              *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                              16) == 1
                        ? *(unsigned __int8*)(*GameData_212ce90[0] + 24)
                        : 0LL;
                if (((*(_DWORD*)(*(_QWORD*)(v396 + 160) + (v206 << 7) +
                                 4LL * (v394 >> 5) + 8) >>
                      v165) &
                     1) != 0) {
                  v207 =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v205 + 224LL))(v205);
                  if (v207 != 0 && *(_BYTE*)(v207 + 57) == 10) {
                    v208 = v207;
                    v209 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                    v209[1] = 0;
                    v209[2] = 0;
                    v210 = (__int64)v209;
                    *v209 = GameData_210a380;
                    v211 = GameData_2130158[0];
                    v209[6] = 0;
                    v209[7] = 0;
                    *((_DWORD*)v209 + 14) = 1098907648;
                    v209[4] = 0;
                    v209[5] = 0;
                    v212 = v66[6];
                    v213 = v211 + 2;
                    v416_.v416 = v66[5];
                    v416_.v417 = v212;
                    v209[3] = v213;
                    v214 = (__int64)(v209 + 3);
                    if (v212 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v212 + 16), 1u,
                          memory_order_relaxed);
                      v213 = *(__int64**)v214;
                    }
                    ((void (*)(_QWORD*, __int64*, _QWORD))v213[2])(
                        v209 + 3, &v416_.v416, v419);
                    if (v416_.v417 != 0) {
                      std___1___shared_weak_count___release_weak_alt2(
                          v416_.v417);
                    }
                    v215 = v66[6];
                    v414_.v414 = v66[5];
                    v414_.v415 = v215;
                    if (v215 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v215 + 16), 1u,
                          memory_order_relaxed);
                    }
                    (*(void (**)(__int64, __int64*, __int64, unsigned int*,
                                 float, float, double))(*(_QWORD*)v214 + 56LL))(
                        v214, &v414_.v414, v208, &v419, v88, v86, 0x0.0p+0);
                    if (v414_.v415 != 0) {
                      std___1___shared_weak_count___release_weak_alt2(
                          v414_.v415);
                    }
                    v216 = v66[6];
                    v413[0] = v66[5];
                    v413[1] = v216;
                    if (v216 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v216 + 16), 1u,
                          memory_order_relaxed);
                      GameHr_1125f00(v214, (__int64)v413, v205);
                      std___1___shared_weak_count___release_weak_alt2(v216);
                    }
                    else {
                      GameHr_1125f00(v214, (__int64)v413, v205);
                    }
                    v412[0] = v214;
                    v412[1] = v210;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v210 + 16), 1u,
                        memory_order_relaxed);
                    MapChip_19fc0b0_alt1((__int64)(v66 + 10), v412);
                    std___1___shared_weak_count___release_weak_alt2(v210);
                    v78 = v388 - v365;
                    if (atomic_fetch_add((atomic_ullong* volatile)(v210 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v210 + 16LL))(v210);
                      std___1___shared_weak_count___release_weak_alt2(v210);
                    }
                  }
                }
              }
            }
          }
        LABEL_100:
          --v85;
          v84 -= 2LL;
        } while (v78 + v85 + 1 > 0);
        v79 = v379 + 1;
        v82 = v364 + 32;
        v84 = v363 + 64;
        v391 += 32;
        v386 += 32;
        v370 += 32;
        v371 += 32;
        if (v379 + 1 == v367 + 1) {
          if ((__int64*)v381 != v383) {
            v217 = (__int64*)v381;
            do {
              v218 = (__int64*)v381;
              do {
                v219 = *v217;
                v220 = *v218;
                if (*v217 != *v218) {
                  v221 = *(_QWORD**)(v219 + 120);
                  if (*v221 != 0 && v221[16] == *(_QWORD*)(v220 + 120) &&
                      *(_QWORD*)(v219 + 112) == 0 &&
                      *(_QWORD*)(v220 + 112) == 0) {
                    *(_QWORD*)(v219 + 112) = v220;
                    *(_QWORD*)(v220 + 112) = v219;
                    *(_QWORD*)(v219 + 96) = *(_QWORD*)(v219 + 136);
                    *(_DWORD*)(v219 + 104) = *(_QWORD*)(v220 + 136);
                    *(_DWORD*)(v219 + 108) = *(_DWORD*)(v220 + 140);
                    *(_QWORD*)(v220 + 96) = *(_QWORD*)(v220 + 136);
                    *(_DWORD*)(v220 + 104) = *(_QWORD*)(v219 + 136);
                    *(_DWORD*)(v220 + 108) = *(_DWORD*)(v219 + 140);
                  }
                }
                ++v218;
              } while (v218 != v383);
              ++v217;
            } while (v217 != v383);
          }
          if (v381 != 0) {
            v222 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v222 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v222, v381);
          }
          break;
        }
      }
    }
  }
  v223 = v66[6];
  v405 = (__int64*)v66[5];
  v406_.v406 = v223;
  if (v223 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v223 + 16), 1u,
                              memory_order_relaxed);
  }
  MapChip_19fc2e0_alt1(v66 + 13, (__int64)&v405);
  if (v406_.v406 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v406_.v406);
  }
  v224 = 0x1.0000000000000p+0f;
  v225 = *GameData_212ce98[0];
  v227 = *(__int64**)(v393 + 40);
  v226 = *(_QWORD*)(v393 + 48);
  v228 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v400 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v397 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  if (*(_DWORD*)(v393 + 224) == 2) {
    v229 = 0x1.0000000000000p+0f;
  }
  else {
    v229 = 0x1.3333340000000p-1f;
  }
  if (v226 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v226 + 16), 1u,
                              memory_order_relaxed);
  }
  v230 = std___1___shared_weak_count_lock_alt1(v226);
  v231 = ui_LayoutAccessor_FindPane_alt1(v227, (__int64)"N_Map");
  if (v231 != 0) {
    v232 = Pane_58fac0_alt1(v231, "MapMargin");
    v233 = GameData_212ce90[0];
    if (v232 != nullptr) {
      v224 = (float)*(int*)&v232[*((unsigned int*)v232 + 1)];
    }
  }
  else {
    v233 = GameData_212ce90[0];
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v230 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v230 + 16LL))(v230);
    std___1___shared_weak_count___release_weak_alt2(v230);
  }
  v234 = v224 / v229;
  std___1___shared_weak_count___release_weak_alt2(v226);
  LODWORD(v418[0]) = 0;
  v235 = 0;
  v236 = (_DWORD*)game_g_shared_system_skills_ptr;
  v389 = GameData_21301c8[0] + 2;
  v392 = v228;
  v387 = GameData_21301d8[0] + 2;
  do {
    v237 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 24 * v235 + 556000);
    if (v237 != 0) {
      while (1) {
        v238 = *(char*)(v237 + 584);
        v239 = *(char*)(v237 + 585);
        v240 = *(unsigned __int8*)(*v233 + 24);
        v241 = *(unsigned __int8*)(*v233 + v240 + 16);
        LOBYTE(v416_.v416) = 0;
        v410_.v410[2] = (__int64)&v416_.v416;
        v410_.v411 = v410_.v410;
        v242 = v241 == 1 ? (unsigned int)v240 : 0LL;
        v243 = *(_QWORD*)(v225 + 160) + (v242 << 7) + 8;
        v410_.v410[0] = (__int64)GameData_1f94310;
        v410_.v410[1] = v243;
        Unit_6c8a80_alt1(v237, v238, v239, (__int64)v410_.v410);
        if (v410_.v411 == v410_.v410) {
          break;
        }
        if (v410_.v411 != nullptr) {
          v244 = 40;
        LABEL_393:
          (*(void (**)(__int64))(*v410_.v411 + v244))((__int64)v410_.v411);
        }
        if ((unsigned __int8)v416_.v416 != 1) {
          goto LABEL_385;
        }
        if ((*(_BYTE*)(v237 + 417) & 0x1C) != 0) {
          goto LABEL_385;
        }
        v245 = *(_QWORD*)(v237 + 440);
        if (v245 == 0) {
          goto LABEL_385;
        }
        v246 = (float)((float)(*(char*)(v237 + 584) - v228) *
                       -0x1.0000000000000p+4f) -
               v234;
        v247 = (float)((float)(v397 - *(char*)(v237 + 585)) *
                       -0x1.0000000000000p+4f) -
               v234;
        if (*(_BYTE*)(v245 + 16) != 0) {
          goto LABEL_424;
        }
        LODWORD(v410_.v410[0]) = *v236 & 0xFFF;
        if ((game_HasSkill_alt1((_QWORD*)(v237 + 1744),
                                (unsigned int*)v410_.v410) &
             1) != 0) {
          v248 = *(_QWORD*)(v237 + 440);
          v249 = v248 != 0 ? *(_BYTE*)(v248 + 16) : 9;
          v250 = ((1 << v249) & 0xF1) != 0;
        }
        else {
          v250 = false;
        }
        v251 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
        v252 = (__int64**)(v251 + 3);
        v253 = (__int64)v251;
        v251[1] = 0;
        v251[2] = 0;
        if (v250) {
          v251[7] = 0;
          v251[8] = 0;
          v251[9] = 0;
          v251[10] = 0;
          v251[5] = 0;
          v251[6] = 0;
          v251[9] = 0;
          v251[10] = 0;
          v251[11] = 0;
          v251[12] = 0;
          v251[11] = 0;
          *((_DWORD*)v251 + 24) = 0;
          *v251 = GameData_210a3d0;
          *((_DWORD*)v251 + 14) = 1098907648;
          v255 = *(_QWORD*)(v393 + 40);
          v254 = *(_QWORD*)(v393 + 48);
          v256 = GameData_21301f0[0] + 2;
          v251[8] = v237;
          v251[3] = v256;
          v251[4] = 0;
          v402_.v402 = v255;
          v402_.v403 = v254;
          if (v254 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v254 + 16), 1u,
                                      memory_order_relaxed);
            v256 = *v252;
          }
          v236 = (_DWORD*)game_g_shared_system_skills_ptr;
          ((void (*)(_QWORD*, __int64*, _QWORD))v256[2])(v251 + 3, &v402_.v402,
                                                         LODWORD(v418[0]));
          if (v402_.v403 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v402_.v403);
          }
          v257 = *(_QWORD*)(v393 + 48);
          v458_.v458 = *(_QWORD*)(v393 + 40);
          v458_.v459 = v257;
          if (v257 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v257 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64*, __int64*, float, float, double))(
              *v252)[8])(v252, &v458_.v458, v418, v246, v247, 0x0.0p+0);
          if (v458_.v459 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v458_.v459);
          }
          v258 = v400;
          v259 = v397 - v400 + 1;
          *(float*)(v253 + 88) = v234;
          v260 = (__int64*)&v456_.v456;
          v456_.v456 = v252;
          v456_.v457 = v253;
        }
        else {
          v251[7] = 0;
          v251[8] = 0;
          v251[9] = 0;
          v251[10] = 0;
          v251[5] = 0;
          v251[6] = 0;
          v251[9] = 0;
          v251[10] = 0;
          v251[11] = 0;
          v251[12] = 0;
          v251[11] = 0;
          *((_DWORD*)v251 + 24) = 0;
          *v251 = GameData_210a420;
          *((_DWORD*)v251 + 14) = 1098907648;
          v262 = *(_QWORD*)(v393 + 40);
          v261 = *(_QWORD*)(v393 + 48);
          v263 = GameData_21301c0[0] + 2;
          v251[8] = v237;
          v251[3] = v263;
          v251[4] = 0;
          v454_.v454 = v262;
          v454_.v455 = v261;
          if (v261 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v261 + 16), 1u,
                                      memory_order_relaxed);
            v263 = *v252;
          }
          v236 = (_DWORD*)game_g_shared_system_skills_ptr;
          ((void (*)(_QWORD*, __int64*, _QWORD))v263[2])(v251 + 3, &v454_.v454,
                                                         LODWORD(v418[0]));
          if (v454_.v455 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v454_.v455);
          }
          v264 = *(_QWORD*)(v393 + 48);
          v452_.v452 = *(_QWORD*)(v393 + 40);
          v452_.v453 = v264;
          if (v264 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v264 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64*, __int64*, float, float, double))(
              *v252)[8])(v252, &v452_.v452, v418, v246, v247, 0x0.0p+0);
          if (v452_.v453 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v452_.v453);
          }
          v258 = v400;
          v259 = v397 - v400 + 1;
          *(float*)(v253 + 88) = v234;
          v260 = (__int64*)&v450_.v450;
          v450_.v450 = v252;
          v450_.v451 = v253;
        }
        *(_DWORD*)(v253 + 80) = v228;
        *(_DWORD*)(v253 + 84) = v258;
        *(_DWORD*)(v253 + 92) = v259;
        *(_DWORD*)(v253 + 96) = 1098907648;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v253 + 16), 1u,
                                  memory_order_relaxed);
        MapChip_19fc0b0_alt1(v393 + 104, v260);
        std___1___shared_weak_count___release_weak_alt2(v253);
        add = atomic_fetch_add((atomic_ullong* volatile)(v253 + 8),
                               0xFFFFFFFFFFFFFFFFLL);
        v233 = GameData_212ce90[0];
        if (add != 0) {
        LABEL_424:
          v266 = *(_QWORD*)(v237 + 440);
          if (v266 == 0) {
            goto LABEL_385;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v253 + 16LL))(v253);
          std___1___shared_weak_count___release_weak_alt2(v253);
          v266 = *(_QWORD*)(v237 + 440);
          if (v266 == 0) {
            goto LABEL_385;
          }
        }
        if (*(_BYTE*)(v266 + 16) != 1) {
          goto LABEL_446;
        }
        LODWORD(v410_.v410[0]) =
            *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v236) &
            0xFFF;
        v267 = v236;
        v268 = game_HasSkill_alt1((_QWORD*)(v237 + 1744),
                                  (unsigned int*)v410_.v410);
        v269 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
        v270 = (__int64**)(v269 + 24);
        v271 = v269;
        *(_QWORD*)(v269 + 8) = 0;
        *(_QWORD*)(v269 + 16) = 0;
        if ((v268 & 1) != 0) {
          *(_QWORD*)(v269 + 56) = 0;
          *(_QWORD*)(v269 + 64) = 0;
          *(_QWORD*)(v269 + 72) = 0;
          *(_QWORD*)(v269 + 80) = 0;
          *(_QWORD*)(v269 + 40) = 0;
          *(_QWORD*)(v269 + 48) = 0;
          *(_QWORD*)(v269 + 72) = 0;
          *(_QWORD*)(v269 + 80) = 0;
          *(_QWORD*)(v269 + 88) = 0;
          *(_QWORD*)(v269 + 96) = 0;
          *(_QWORD*)(v269 + 88) = 0;
          *(_DWORD*)(v269 + 96) = 0;
          *(_QWORD*)v269 = GameData_210a470;
          *(_DWORD*)(v269 + 56) = 1098907648;
          v273 = *(_QWORD*)(v393 + 40);
          v272 = *(_QWORD*)(v393 + 48);
          v274 = GameData_21301d0[0] + 2;
          *(_QWORD*)(v269 + 64) = v237;
          *(_QWORD*)(v269 + 24) = v274;
          *(_QWORD*)(v269 + 32) = 0;
          v448_.v448 = v273;
          v448_.v449 = v272;
          if (v272 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v272 + 16), 1u,
                                      memory_order_relaxed);
            v274 = *v270;
          }
          v236 = (_DWORD*)game_g_shared_system_skills_ptr;
          v228 = v392;
          ((void (*)(__int64, __int64*, _QWORD))v274[2])(v269 + 24, &v448_.v448,
                                                         LODWORD(v418[0]));
          if (v448_.v449 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v448_.v449);
          }
          v275 = *(_QWORD*)(v393 + 48);
          v446_.v446 = *(_QWORD*)(v393 + 40);
          v446_.v447 = v275;
          if (v275 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v275 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64*, __int64*, float, float, double))(
              *v270)[8])(v270, &v446_.v446, v418, v246, v247, 0x0.0p+0);
          if (v446_.v447 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v446_.v447);
          }
          v276 = v400;
          v277 = v397 - v400 + 1;
          *(float*)(v271 + 88) = v234;
          v278 = (__int64*)&v444_.v444;
          v444_.v444 = v270;
          v444_.v445 = v271;
        }
        else {
          *(_QWORD*)(v269 + 56) = 0;
          *(_QWORD*)(v269 + 64) = 0;
          *(_QWORD*)(v269 + 72) = 0;
          *(_QWORD*)(v269 + 80) = 0;
          *(_QWORD*)(v269 + 40) = 0;
          *(_QWORD*)(v269 + 48) = 0;
          *(_QWORD*)(v269 + 72) = 0;
          *(_QWORD*)(v269 + 80) = 0;
          *(_QWORD*)(v269 + 88) = 0;
          *(_QWORD*)(v269 + 96) = 0;
          *(_QWORD*)(v269 + 88) = 0;
          *(_DWORD*)(v269 + 96) = 0;
          *(_QWORD*)(v269 + 64) = v237;
          *(_QWORD*)v269 = GameData_210a4c0;
          *(_DWORD*)(v269 + 56) = 1098907648;
          *(_QWORD*)(v269 + 24) = v389;
          *(_QWORD*)(v269 + 32) = 0;
          LODWORD(v410_.v410[0]) =
              *(int*)((_BYTE*)((int*)0x24LL) + (_QWORD)v267) & 0xFFF;
          v236 = v267;
          *(_BYTE*)(v269 + 100) =
              game_HasSkill_alt1((_QWORD*)(v237 + 1744),
                                 (unsigned int*)v410_.v410) &
              1;
          v279 = *(_QWORD*)(v393 + 48);
          v442_.v442 = *(_QWORD*)(v393 + 40);
          v442_.v443 = v279;
          if (v279 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v279 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64*, _QWORD))(*v270)[2])(v270, &v442_.v442,
                                                              LODWORD(v418[0]));
          v228 = v392;
          if (v442_.v443 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v442_.v443);
          }
          v280 = *(_QWORD*)(v393 + 48);
          v440_.v440 = *(_QWORD*)(v393 + 40);
          v440_.v441 = v280;
          if (v280 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v280 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64*, __int64*, float, float, double))(
              *v270)[8])(v270, &v440_.v440, v418, v246, v247, 0x0.0p+0);
          if (v440_.v441 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v440_.v441);
          }
          v276 = v400;
          v277 = v397 - v400 + 1;
          *(float*)(v271 + 88) = v234;
          v278 = (__int64*)&v438_.v438;
          v438_.v438 = v270;
          v438_.v439 = v271;
        }
        *(_DWORD*)(v271 + 80) = v228;
        *(_DWORD*)(v271 + 84) = v276;
        *(_DWORD*)(v271 + 92) = v277;
        *(_DWORD*)(v271 + 96) = 1098907648;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v271 + 16), 1u,
                                  memory_order_relaxed);
        MapChip_19fc0b0_alt1(v393 + 104, v278);
        std___1___shared_weak_count___release_weak_alt2(v271);
        v281 = atomic_fetch_add((atomic_ullong* volatile)(v271 + 8),
                                0xFFFFFFFFFFFFFFFFLL);
        v233 = GameData_212ce90[0];
        if (v281 == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v271 + 16LL))(v271);
          std___1___shared_weak_count___release_weak_alt2(v271);
          v282 = *(_QWORD*)(v237 + 440);
          if (v282 == 0) {
            goto LABEL_385;
          }
        }
        else {
        LABEL_446:
          v282 = *(_QWORD*)(v237 + 440);
          if (v282 == 0) {
            goto LABEL_385;
          }
        }
        if (*(_BYTE*)(v282 + 16) != 2) {
          goto LABEL_472;
        }
        LODWORD(v410_.v410[0]) =
            *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v236) &
            0xFFF;
        v283 = v236;
        v284 = game_HasSkill_alt1((_QWORD*)(v237 + 1744),
                                  (unsigned int*)v410_.v410);
        v285 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
        v286 = v285 + 24;
        v287 = v285;
        *(_QWORD*)(v285 + 8) = 0;
        *(_QWORD*)(v285 + 16) = 0;
        if ((v284 & 1) != 0) {
          *(_QWORD*)(v285 + 56) = 0;
          *(_QWORD*)(v285 + 64) = 0;
          *(_QWORD*)(v285 + 72) = 0;
          *(_QWORD*)(v285 + 80) = 0;
          *(_QWORD*)(v285 + 40) = 0;
          *(_QWORD*)(v285 + 48) = 0;
          *(_QWORD*)(v285 + 72) = 0;
          *(_QWORD*)(v285 + 80) = 0;
          *(_QWORD*)(v285 + 88) = 0;
          *(_QWORD*)(v285 + 96) = 0;
          *(_QWORD*)(v285 + 88) = 0;
          *(_DWORD*)(v285 + 96) = 0;
          *(_QWORD*)v285 = GameData_210a510;
          *(_DWORD*)(v285 + 56) = 1098907648;
          v289 = *(_QWORD*)(v393 + 40);
          v288 = *(_QWORD*)(v393 + 48);
          v290 = GameData_21301e0[0] + 2;
          *(_QWORD*)(v285 + 64) = v237;
          *(_QWORD*)(v285 + 24) = v290;
          *(_QWORD*)(v285 + 32) = 0;
          v436_.v436 = v289;
          v436_.v437 = v288;
          if (v288 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v288 + 16), 1u,
                                      memory_order_relaxed);
            v290 = *(__int64**)v286;
          }
          v236 = (_DWORD*)game_g_shared_system_skills_ptr;
          v228 = v392;
          ((void (*)(__int64, __int64*, _QWORD))v290[2])(v285 + 24, &v436_.v436,
                                                         LODWORD(v418[0]));
          if (v436_.v437 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v436_.v437);
          }
          v291 = *(_QWORD*)(v393 + 48);
          v434_.v434 = *(_QWORD*)(v393 + 40);
          v434_.v435 = v291;
          if (v291 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v291 + 16), 1u,
                                      memory_order_relaxed);
          }
          (*(void (**)(__int64, __int64*, __int64*, float, float, double))(
              *(_QWORD*)v286 + 64LL))(v286, &v434_.v434, v418, v246, v247,
                                      0x0.0p+0);
          if (v434_.v435 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v434_.v435);
          }
          v292 = v400;
          v293 = v397 - v400 + 1;
          *(float*)(v287 + 88) = v234;
          v294 = &v432_.v432;
          v432_.v432 = v286;
          v432_.v433 = v287;
        }
        else {
          *(_QWORD*)(v285 + 56) = 0;
          *(_QWORD*)(v285 + 64) = 0;
          *(_QWORD*)(v285 + 72) = 0;
          *(_QWORD*)(v285 + 80) = 0;
          *(_QWORD*)(v285 + 40) = 0;
          *(_QWORD*)(v285 + 48) = 0;
          *(_QWORD*)(v285 + 72) = 0;
          *(_QWORD*)(v285 + 80) = 0;
          *(_QWORD*)(v285 + 88) = 0;
          *(_QWORD*)(v285 + 96) = 0;
          *(_QWORD*)(v285 + 88) = 0;
          *(_DWORD*)(v285 + 96) = 0;
          *(_QWORD*)(v285 + 64) = v237;
          *(_QWORD*)v285 = GameData_210a560;
          *(_DWORD*)(v285 + 56) = 1098907648;
          *(_QWORD*)(v285 + 24) = v387;
          *(_QWORD*)(v285 + 32) = 0;
          LODWORD(v410_.v410[0]) =
              *(int*)((_BYTE*)((int*)0x24LL) + (_QWORD)v283) & 0xFFF;
          v236 = v283;
          *(_BYTE*)(v285 + 100) =
              game_HasSkill_alt1((_QWORD*)(v237 + 1744),
                                 (unsigned int*)v410_.v410) &
              1;
          v295 = *(_QWORD*)(v393 + 48);
          v430_.v430 = *(_QWORD*)(v393 + 40);
          v430_.v431 = v295;
          if (v295 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v295 + 16), 1u,
                                      memory_order_relaxed);
          }
          (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v286 + 16LL))(
              v286, &v430_.v430, LODWORD(v418[0]));
          v228 = v392;
          if (v430_.v431 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v430_.v431);
          }
          v296 = *(_QWORD*)(v393 + 48);
          v428_.v428 = *(_QWORD*)(v393 + 40);
          v428_.v429 = v296;
          if (v296 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v296 + 16), 1u,
                                      memory_order_relaxed);
          }
          (*(void (**)(__int64, __int64*, __int64*, float, float, double))(
              *(_QWORD*)v286 + 64LL))(v286, &v428_.v428, v418, v246, v247,
                                      0x0.0p+0);
          if (v428_.v429 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v428_.v429);
          }
          v292 = v400;
          v293 = v397 - v400 + 1;
          *(float*)(v287 + 88) = v234;
          v294 = &v426_.v426;
          v426_.v426 = v286;
          v426_.v427 = v287;
        }
        *(_DWORD*)(v287 + 80) = v228;
        *(_DWORD*)(v287 + 84) = v292;
        *(_DWORD*)(v287 + 92) = v293;
        *(_DWORD*)(v287 + 96) = 1098907648;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v287 + 16), 1u,
                                  memory_order_relaxed);
        MapChip_19fc0b0_alt1(v393 + 104, v294);
        std___1___shared_weak_count___release_weak_alt2(v287);
        v297 = atomic_fetch_add((atomic_ullong* volatile)(v287 + 8),
                                0xFFFFFFFFFFFFFFFFLL);
        v233 = GameData_212ce90[0];
        if (v297 == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v287 + 16LL))(v287);
          std___1___shared_weak_count___release_weak_alt2(v287);
          v298 = *(_QWORD*)(v237 + 440);
          if (v298 != 0) {
          LABEL_473:
            if (*(_BYTE*)(v298 + 16) == 3) {
              v299 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
              v299[1] = 0;
              v299[2] = 0;
              v300 = (__int64)v299;
              *v299 = GameData_210a5b0;
              v301 = GameData_21301e8[0];
              v299[6] = 0;
              v299[7] = 0;
              *((_DWORD*)v299 + 14) = 1098907648;
              v299[11] = 0;
              v299[12] = 0;
              v299[4] = 0;
              v299[5] = 0;
              v303 = *(_QWORD*)(v393 + 40);
              v302 = *(_QWORD*)(v393 + 48);
              v304 = v301 + 2;
              v299[9] = 0;
              v299[10] = 0;
              *((_DWORD*)v299 + 24) = 0;
              v299[8] = v237;
              v299[3] = v304;
              v305 = (__int64)(v299 + 3);
              v424_.v424 = v303;
              v424_.v425 = v302;
              if (v302 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v302 + 16),
                                          1u, memory_order_relaxed);
                v304 = *(__int64**)v305;
              }
              ((void (*)(_QWORD*, __int64*, _QWORD))v304[2])(
                  v299 + 3, &v424_.v424, LODWORD(v418[0]));
              if (v424_.v425 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v424_.v425);
              }
              v306 = *(_QWORD*)(v393 + 48);
              v422_.v422 = *(_QWORD*)(v393 + 40);
              v422_.v423 = v306;
              if (v306 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v306 + 16),
                                          1u, memory_order_relaxed);
              }
              (*(void (**)(__int64, __int64*, __int64*, float, float, double))(
                  *(_QWORD*)v305 + 64LL))(v305, &v422_.v422, v418, v246, v247,
                                          0x0.0p+0);
              if (v422_.v423 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v422_.v423);
              }
              *(float*)(v300 + 88) = v234;
              v420_.v420 = v305;
              v420_.v421 = v300;
              *(_DWORD*)(v300 + 80) = v228;
              *(_DWORD*)(v300 + 84) = v400;
              *(_DWORD*)(v300 + 92) = v397 - v400 + 1;
              *(_DWORD*)(v300 + 96) = 1098907648;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v300 + 16),
                                        1u, memory_order_relaxed);
              MapChip_19fc0b0_alt1(v393 + 104, &v420_.v420);
              std___1___shared_weak_count___release_weak_alt2(v300);
              v307 = atomic_fetch_add((atomic_ullong* volatile)(v300 + 8),
                                      0xFFFFFFFFFFFFFFFFLL);
              v233 = GameData_212ce90[0];
              if (v307 == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v300 + 16LL))(v300);
                std___1___shared_weak_count___release_weak_alt2(v300);
              }
            }
          }
        }
        else {
        LABEL_472:
          v298 = *(_QWORD*)(v237 + 440);
          if (v298 != 0) {
            goto LABEL_473;
          }
        }
      LABEL_385:
        v237 = *(_QWORD*)(v237 + 432);
        if (v237 == 0) {
          goto LABEL_382;
        }
      }
      v244 = 32;
      goto LABEL_393;
    }
  LABEL_382:
    ++v235;
  } while (v235 != 4);
  v308 = *(unsigned __int8*)(*GameData_212ce98[0] + 30) -
         *(unsigned __int8*)(*GameData_212ce98[0] + 28) + 1;
  v309 = v308 + v308 * (*(unsigned __int8*)(*GameData_212ce98[0] + 31) -
                        *(unsigned __int8*)(*GameData_212ce98[0] + 29));
  v310 = *(void (****)(_QWORD))(v393 + 128);
  v401 = (__int64*)(v393 + 128);
  v311 = *(void (****)(_QWORD))(v393 + 136);
  if (v310 != v311) {
    v312 = v311 - 5;
    v313 = v311 - 5;
    do {
      v314 = *v313;
      v313 -= 5;
      (*v314)(v312);
      v23 = v312 == v310;
      v312 = v313;
    } while (!v23);
  }
  *(_QWORD*)(v393 + 136) = v310;
  if (v309 < 1) {
    goto LABEL_528;
  }
  sprintf_alt1((__int64)v410_.v410, "L_Move%d", 0);
  LayoutAccessor_1560070_alt1((void*)(&v405), *(__int64**)(v393 + 40),
                              (const char*)v410_.v410);
  if (v406_.v406 == 0) {
    goto LABEL_527;
  }
  v315 = std___1___shared_weak_count_lock_alt1(v406_.v406);
  v316 = v405;
  if (v406_.v406 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v406_.v406);
  }
  if (v315 == 0 || v316 == nullptr) {
    if (v315 == 0) {
    LABEL_527:
      if (v309 == 1) {
        goto LABEL_528;
      }
      goto LABEL_552;
    }
    goto LABEL_526;
  }
  v317 = strlen_alt1((const char*)v410_.v410);
  if (v317 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_618;
  }
  v318 = v317;
  if (v317 >= 0x17) {
    if ((v317 | 7) == 0x17) {
      v320 = 26;
    }
    else {
      v320 = (v317 | 7) + 1;
    }
    v319 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v320, 16, 0);
    v402_.v403 = v318;
    v402_.v404 = v319;
    v402_.v402 = v320 | 1;
  }
  else {
    v319 = (char*)&v402_.v402 + 1;
    LOBYTE(v402_.v402) = 2 * v317;
    if (v317 == 0) {
      goto LABEL_507;
    }
  }
  memcpy_alt1((__int64)v319, (__int64)v410_.v410, v318);
LABEL_507:
  v319[v318] = 0;
  v321 = GameData_2130190[0];
  v322 = v402_.v402;
  v405 = GameData_2130190[0] + 2;
  if ((v402_.v402 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v406_.v406, (__int64)v402_.v404,
                                       v402_.v403);
  }
  else {
    v406_.v406 = v402_.v402;
    v406_.v407 = v402_.v403;
    v406_.v408 = v402_.v404;
  }
  v406_.v409 = 1098907648;
  v323 = *(_QWORD*)(v393 + 136);
  if (v323 >= *(_QWORD*)(v393 + 144)) {
    v327 = GameHr_18ecc60(v401, (__int64)&v405);
  }
  else {
    *(_QWORD*)v323 = v321 + 2;
    v324 = (__int64*)(v323 + 8);
    if ((v406_.v406 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v324, (__int64)v406_.v408, v406_.v407);
    }
    else {
      v325 = v406_.v406;
      v326 = (__int64)v406_.v408;
      *(_QWORD*)(v323 + 16) = v406_.v407;
      *(_QWORD*)(v323 + 24) = v326;
      *v324 = v325;
    }
    v327 = v323 + 40;
    *(_DWORD*)(v323 + 32) = v406_.v409;
  }
  *(_QWORD*)(v393 + 136) = v327;
  v405 = v321 + 2;
  if ((v406_.v406 & 1) != 0 && v406_.v408 != nullptr) {
    v328 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v328 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v328, (__int64)v406_.v408);
  }
  if ((v322 & 1) != 0 && v402_.v404 != nullptr) {
    v329 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v329 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v329, (__int64)v402_.v404);
  }
LABEL_526:
  if (atomic_fetch_add((atomic_ullong* volatile)(v315 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_527;
  }
  (*(void (**)(__int64))(*(_QWORD*)v315 + 16LL))(v315);
  std___1___shared_weak_count___release_weak_alt2(v315);
  if (v309 != 1) {
  LABEL_552:
    v341 = 1;
    if ((unsigned int)v309 >= 0x400) {
      v342 = 1024;
    }
    else {
      v342 = v309;
    }
    v343 = GameData_2130190[0] + 2;
    do {
      sprintf_alt1((__int64)v410_.v410, "L_Move%d", v341);
      LayoutAccessor_1560520_alt1(*(__int64**)(v393 + 40), (__int64)"L_Move0",
                                  (__int64)"N_Move", (__int64)v410_.v410);
      LayoutAccessor_1560070_alt1((void*)(&v405), *(__int64**)(v393 + 40),
                                  (const char*)v410_.v410);
      if (v406_.v406 != 0) {
        v344 = std___1___shared_weak_count_lock_alt1(v406_.v406);
        v345 = v405;
        if (v406_.v406 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v406_.v406);
        }
        if (v344 != 0 && v345 != nullptr) {
          v346 = strlen_alt1((const char*)v410_.v410);
          if (v346 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_618;
          }
          v347 = v346;
          if (v346 >= 0x17) {
            if ((v346 | 7) == 0x17) {
              v349 = 26;
            }
            else {
              v349 = (v346 | 7) + 1;
            }
            v348 = (char*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v349, 16, 0);
            v402_.v403 = v347;
            v402_.v404 = v348;
            v402_.v402 = v349 | 1;
          }
          else {
            v348 = (char*)&v402_.v402 + 1;
            LOBYTE(v402_.v402) = 2 * v346;
            if (v346 == 0) {
              goto LABEL_573;
            }
          }
          memcpy_alt1((__int64)v348, (__int64)v410_.v410, v347);
        LABEL_573:
          v348[v347] = 0;
          v405 = v343;
          v350 = v402_.v402;
          if ((v402_.v402 & 1) != 0) {
            fw_text_String_CopyTerminated_alt1(&v406_.v406, (__int64)v402_.v404,
                                               v402_.v403);
          }
          else {
            v406_.v406 = v402_.v402;
            v406_.v407 = v402_.v403;
            v406_.v408 = v402_.v404;
          }
          v406_.v409 = 1098907648;
          v351 = *(_QWORD*)(v393 + 136);
          if (v351 >= *(_QWORD*)(v393 + 144)) {
            v355 = GameHr_18ecc60(v401, (__int64)&v405);
          }
          else {
            *(_QWORD*)v351 = GameData_2130190[0] + 2;
            v352 = (__int64*)(v351 + 8);
            if ((v406_.v406 & 1) != 0) {
              fw_text_String_CopyTerminated_alt1(v352, (__int64)v406_.v408,
                                                 v406_.v407);
            }
            else {
              v353 = v406_.v406;
              v354 = (__int64)v406_.v408;
              *(_QWORD*)(v351 + 16) = v406_.v407;
              *(_QWORD*)(v351 + 24) = v354;
              *v352 = v353;
            }
            v355 = v351 + 40;
            *(_DWORD*)(v351 + 32) = v406_.v409;
          }
          *(_QWORD*)(v393 + 136) = v355;
          v405 = GameData_2130190[0] + 2;
          if ((v406_.v406 & 1) != 0 && v406_.v408 != nullptr) {
            v356 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v356 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v356,
                (__int64)v406_.v408);
          }
          if ((v350 & 1) != 0 && v402_.v404 != nullptr) {
            v357 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v357 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v357,
                (__int64)v402_.v404);
          }
        LABEL_592:
          if (atomic_fetch_add((atomic_ullong* volatile)(v344 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v344 + 16LL))(v344);
            std___1___shared_weak_count___release_weak_alt2(v344);
          }
          goto LABEL_556;
        }
        if (v344 != 0) {
          goto LABEL_592;
        }
      }
    LABEL_556:
      ++v341;
    } while (v342 != v341);
  }
LABEL_528:
  strcpy((char*)v410_.v410, "L_Cursor");
  LayoutAccessor_1560070_alt1((void*)(&v405), *(__int64**)(v393 + 40),
                              (const char*)v410_.v410);
  result = v406_.v406;
  if (v406_.v406 == 0) {
    return result;
  }
  v331 = std___1___shared_weak_count_lock_alt1(v406_.v406);
  v332 = (__int64)v405;
  result = v406_.v406;
  if (v406_.v406 != 0) {
    result = std___1___shared_weak_count___release_weak_alt2(v406_.v406);
  }
  if (v331 == 0 || v332 == 0) {
    if (v331 == 0) {
      return result;
    }
    goto LABEL_613;
  }
  v333 = strlen_alt1((const char*)v410_.v410);
  if (v333 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_618:
    String_60a1d0_alt1();
  }
  v334 = v333;
  if (v333 >= 0x17) {
    if ((v333 | 7) == 0x17) {
      v336 = 26;
    }
    else {
      v336 = (v333 | 7) + 1;
    }
    v335 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v336, 16, 0);
    v402_.v403 = v334;
    v402_.v404 = v335;
    v402_.v402 = v336 | 1;
  }
  else {
    LOBYTE(v402_.v402) = 2 * v333;
    v335 = (char*)&v402_.v402 + 1;
    if (v333 == 0) {
      goto LABEL_544;
    }
  }
  memcpy_alt1((__int64)v335, (__int64)v410_.v410, v334);
LABEL_544:
  v335[v334] = 0;
  v337 = GameData_2130190[0];
  v338 = v402_.v402;
  v405 = GameData_2130190[0] + 2;
  if ((v402_.v402 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v406_.v406, (__int64)v402_.v404,
                                       v402_.v403);
  }
  else {
    v406_.v406 = v402_.v402;
    v406_.v407 = v402_.v403;
    v406_.v408 = v402_.v404;
  }
  v339 = v393;
  v406_.v409 = 1098907648;
  if ((__int64**)(v393 + 152) != &v405) {
    if ((*(_BYTE*)(v393 + 160) & 1) != 0) {
      if ((v406_.v406 & 1) != 0) {
        v358 = v406_.v408;
      }
      else {
        v358 = (char*)&v406_.v406 + 1;
      }
      if ((v406_.v406 & 1) != 0) {
        v359 = v406_.v407;
      }
      else {
        v359 = (unsigned __int64)(unsigned __int8)v406_.v406 >> 1;
      }
      SpineModel_64dde0_alt1((__int64*)(v393 + 160), (__int64)v358, v359);
    }
    else if ((v406_.v406 & 1) != 0) {
      v339 = v393;
      GameRoutine_64df20_alt1((_QWORD*)(v393 + 160), (__int64)v406_.v408,
                              v406_.v407);
    }
    else {
      v340 = v406_.v407;
      v339 = v393;
      *(_QWORD*)(v393 + 160) = v406_.v406;
      *(_QWORD*)(v393 + 168) = v340;
      *(_QWORD*)(v393 + 176) = v406_.v408;
    }
  }
  v405 = v337 + 2;
  v360 = v406_.v406;
  *(_DWORD*)(v339 + 184) = v406_.v409;
  if ((v360 & 1) != 0 && v406_.v408 != nullptr) {
    v361 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v361 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v361, (__int64)v406_.v408);
  }
  if ((v338 & 1) != 0 && v402_.v404 != nullptr) {
    v362 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v362 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v362, (__int64)v402_.v404);
  }
  result = GameHr_1562680(v332, "Loop", 0x1.0000000000000p+0f);
LABEL_613:
  if (atomic_fetch_add((atomic_ullong* volatile)(v331 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v331 + 16LL))(v331);
    return std___1___shared_weak_count___release_weak_alt2(v331);
  }
  return result;
}

#pragma GCC visibility pop
