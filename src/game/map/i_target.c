#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_773420(__int64, __int64, long double);
__int64 GameRoutine_775580(__int64 (**)(), __int64, _QWORD*, long double);
__int64 GameRoutine_777700(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7807a0(__int64, _WORD*, int, int, __int64);
__int64 GameRoutine_844d10(_QWORD, _QWORD, _QWORD);
__int64 MapUtil_753570(int, int);
__int64 MapUtil_756080(__int64, __int64, unsigned int, unsigned int, _BYTE*);
__int64 Unit_6c9cf0(_QWORD, _QWORD);
__int64 Unit_6cbdc0(_QWORD*, _DWORD*, unsigned __int16*, int);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_Get_alt1(_QWORD,
                               long double) __asm__("game_UnitPool_Get");
__int64 game_Unit_GetJob(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
bool GameRoutine_7536a0(_BOOL8 result);
extern _UNKNOWN* GameData_212cf50;
extern __int64 (*GameData_1f97a90[])();
extern __int64 (*GameData_1f97b10[])();
extern __int64 (*GameData_1f97b90[])();
extern __int64 (*GameData_1f97c10[])();
extern __int64 (*GameData_1f97d10[])();
extern __int64 (*GameData_1f97d90[])();
extern __int64 (*GameData_1f97f00[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(void);
__int64 ITarget_772f60(__int64 a1, __int64 a2);
__int64 ITarget_7730f0(__int64 a1);
_QWORD* ITarget_773300(__int64 a1, long double a2);
__int64 game_map_ITarget_Enumerate(__int64 a1, long double a2);
__int64 ITarget_776720(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                       _DWORD* a5, __int64 a6);
__int64 game_map_ITarget_EachSelectable(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4);
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda0_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda0_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda1_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda1_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda2_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda2_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
__int64 game_map_ITarget_EnumerateSubTarget_lambda2_Invoke(__int64 a1, int* a2,
                                                           int* a3);
__int64 game_map_ITarget_EachSelectable_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_map_ITarget_EachSelectable_lambda1_Invoke(__int64 a1, __int64 a2);
__int64 game_map_ITarget_EachTarget_lambda0_Invoke(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4);
__int64 game_map_ITarget_EachTarget_lambda1_Invoke_7820b0(__int64 a1,
                                                          __int64 a2,
                                                          long double a3);
__int64 game_map_ITarget_EachTarget_lambda1_Invoke_782210(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3,
                                                          __int64 a4);
__int64* game_UnitPool_Get_alt2(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_757f60(__int64 result, _DWORD*, unsigned int, unsigned int,
                           __int64);
__int64 MapUtil_753570_alt1(_QWORD, _QWORD) __asm__("MapUtil_753570");
__int64 MapUtil_753920(_QWORD, _QWORD, _QWORD);
__int64 MapUtil_753bb0(__int64 result);
__int64 MapUtil_756c20(_QWORD, _QWORD);
__int64 TargetEnumerator_77c150(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TargetEnumerator_77c150_alt1(__int64 result, __int64*, int,
                                     int) __asm__("TargetEnumerator_77c150");
__int64 TargetEnumerator_77cc80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TargetEnumerator_77e300(__int64, _DWORD*, __int64*);
__int64 TargetEnumerator_77f800(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TargetEnumerator_77fb20(_QWORD, _QWORD, _QWORD);
__int64 UnitItemList_70f9f0(_QWORD, _QWORD);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 Unit_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Unit_6c9cf0_alt1(__int64, __int64) __asm__("Unit_6c9cf0");
__int64 game_UnitSkillList_GetRangeAddImpl(_QWORD, _QWORD);
__int64 game_Unit_HasSkill(_QWORD, _QWORD);
__int64 game_Unit_IsUnlocked(_QWORD);
__int64 game_Unit_Unknown6c90c0(_QWORD);
__int64 game_map_7ca370(_QWORD, _QWORD, _QWORD, _QWORD);
bool MapUtil_7536a0(_BOOL8 result);
bool UnitItem_6e8e50(unsigned __int16*, __int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f959d8[])();
extern __int64 (*GameData_1f97380[])();
extern __int64 (*GameData_1f97400[])();
extern __int64 (*GameData_1f97490[])();
extern __int64 (*GameData_1f97510[])();
extern __int64 (*GameData_1f97890[])();
extern __int64 (*GameData_1f97910[])();
extern __int64 (*GameData_1f97990[])();
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
__int64 ITarget_773180(__int64 a1);
__int64 ITarget_773420(__int64 a1, __int64 a2, long double a3);
__int64 game_map_ITarget_EnumerateSubTarget_lambda0_Invoke(__int64 a1, int* a2,
                                                           int* a3);
__int64 game_map_ITarget_EnumerateSubTarget_lambda1_Invoke(__int64 a1, int* a2,
                                                           int* a3);

__int64 ITarget_772f60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  int v18;

  *(_BYTE*)(a1 + 8) = 0;
  v2 = a1 + 8;
  *(_DWORD*)(a1 + 28) = -1;
  *(_QWORD*)(a1 + 32) = 0;
  v4 = a1 + 32;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (a2 == 0) {
    return a1;
  }
  if (*(_BYTE*)(a2 + 8) == 0 || (v6 = game_UnitPool_Get(a2 + 8)) == 0) {
    *(_BYTE*)(a1 + 8) = 0;
    *(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 20);
    v12 = *(_DWORD*)(a2 + 40);
    *(_DWORD*)(a1 + 28) = v12;
    if ((v12 & 0x80000000) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v7 = *(unsigned __int8*)(v6 + 2088);
  *(_BYTE*)(a1 + 8) = v7;
  *(_DWORD*)(a1 + 20) = *(_DWORD*)(v6 + 592);
  v8 = *(char*)(v6 + 585);
  *(_DWORD*)(a1 + 12) = *(char*)(v6 + 584);
  *(_DWORD*)(a1 + 16) = v8;
  *(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 20);
  v9 = *(unsigned int*)(a2 + 40);
  *(_DWORD*)(a1 + 28) = v9;
  if ((v9 & 0x80000000) != 0) {
  LABEL_9:
    *(_QWORD*)v4 = 0;
    goto LABEL_10;
  }
  if (v7 != 0 && game_UnitPool_Get(v2) != 0) {
    v10 = game_UnitPool_Get(v2) + 8 * v9;
    v11 = *(_WORD*)(v10 + 828);
    *(_BYTE*)(v4 + 2) = *(_BYTE*)(v10 + 830);
    *(_WORD*)v4 = v11;
    *(_BYTE*)(a1 + 35) = *(_BYTE*)(v10 + 831);
    *(_DWORD*)(a1 + 36) = *(_DWORD*)(v10 + 832);
  }
LABEL_10:
  if ((*(_DWORD*)(a2 + 56) & 0xFFF) != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(a2 + 56) & 0xFFF));
    v14 = *(_DWORD*)(a1 + 40);
    if (v13 != 0) {
      v15 = v14 & 0xFFFFF000 | *(_WORD*)(v13 + 16) & 0xFFF;
      goto LABEL_15;
    }
  }
  else {
    v14 = *(_DWORD*)(a1 + 40);
  }
  v15 = v14 & 0xFFFFF000;
LABEL_15:
  *(_DWORD*)(a1 + 40) = v15;
  v16 = *(_DWORD*)(a2 + 60);
  if ((v16 & 0x80000000) != 0 ||
      (v17 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL)) == 0) {
    v18 = -1;
  }
  else {
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)(v17 + 144LL * v16) + 32LL))(
        v17 + 144LL * v16);
  }
  *(_DWORD*)(a1 + 44) = v18;
  return a1;
}

__int64 ITarget_7730f0(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  bool v6;

  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    return *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
  }
  v2 = *(unsigned __int16*)(a1 + 32);
  if (*(_WORD*)(a1 + 32) == 0) {
    v2 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v2);
  v4 = *(_QWORD*)(v3 + 192);
  v5 = *(unsigned __int8*)(v3 + 72);
  v6 = v4 == 0 || v5 > 7;
  if (v6 || *(_BYTE*)(v4 + 105) == 0) {
    return 0;
  }
  if (*(_BYTE*)(v4 + 104) == 2) {
    return 0;
  }
  return v4;
}

__int64 ITarget_773180(__int64 a1)
{
  _BYTE* v2;
  int v3;
  __int64* v4;
  _BYTE* v5;
  __int64* v6;
  int v7;
  _BOOL4 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  bool v19;

  v3 = *(unsigned __int8*)(a1 + 8);
  v2 = (_BYTE*)(a1 + 8);
  if (v3 == 0) {
    return 0;
  }
  v4 = game_UnitPool_Get_alt2(v2);
  if (v4 == nullptr) {
    return 0;
  }
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v5 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    v7 = *(unsigned __int16*)(a1 + 32);
    v6 = (__int64*)(a1 + 32);
    v8 = v7 == 0;
    if (v5 != nullptr) {
      goto LABEL_5;
    }
    v16 = *(unsigned __int16*)game_g_empty_item_ptr;
    goto LABEL_24;
  }
  v15 = *(unsigned __int16*)(a1 + 32);
  v6 = (__int64*)(a1 + 32);
  v14 = v15;
  v16 = *(unsigned __int16*)game_g_empty_item_ptr;
  v8 = v15 == 0;
  if (v15 == 0) {
    v14 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v17 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v14);
  v5 = *(_BYTE**)(v17 + 192);
  v18 = *(unsigned __int8*)(v17 + 72);
  v19 = v5 == nullptr || v18 > 7;
  if (v19 || v5[105] == 0 || v5[104] == 2) {
  LABEL_24:
    if (v16 != 0) {
      v8 = false;
    }
    return !v8;
  }
LABEL_5:
  if (v5[274] == 0) {
    return 0;
  }
  v9 = v8 ? game_g_empty_item_ptr : v6;
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)v9) +
                          72LL) <= 7u) {
    v10 = v4[218];
    v11 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                           game_g_shared_system_skills_ptr);
    if (((v11 >> 5) & 0x7F) + 1 <= (v4[219] - v10) >> 2 &&
        ((*(_DWORD*)(v10 + 4 * ((v11 >> 5) & 0x7F)) >> v11) & 1) != 0) {
      return 0;
    }
  }
  v12 = v4[55];
  if (v12 != 0) {
    v13 = *(_BYTE*)(v12 + 16);
  }
  else {
    v13 = 9;
  }
  if (((1 << v13) & 6) != 0) {
    return 0;
  }
  else {
    return (unsigned __int8)v5[274];
  }
}

_QWORD* ITarget_773300(__int64 a1, long double a2)
{
  __int64 v3;
  int v4;
  _QWORD* result;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;

  v4 = *(unsigned __int8*)(a1 + 8);
  v3 = a1 + 8;
  if (v4 == 0) {
    return nullptr;
  }
  result = (_QWORD*)game_UnitPool_Get_alt1(v3, a2);
  if (result == nullptr) {
    return result;
  }
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v6 != 0) {
    LABEL_5:
      v13 = *(_WORD*)(v6 + 16) & 0xFFF;
      return (_QWORD*)Unit_6cbdc0(result, &v13,
                                  (unsigned __int16*)game_g_empty_item_ptr, 0);
    }
    v7 = *(unsigned __int16*)(a1 + 32);
    v8 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  else {
    v7 = *(unsigned __int16*)(a1 + 32);
    v8 = *(unsigned __int16*)game_g_empty_item_ptr;
    if (*(_WORD*)(a1 + 32) != 0) {
      v9 = *(unsigned __int16*)(a1 + 32);
    }
    else {
      v9 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v9);
    v6 = *(_QWORD*)(v10 + 192);
    v11 = *(unsigned __int8*)(v10 + 72);
    v12 = v6 == 0 || v11 > 7;
    if (!v12 && *(_BYTE*)(v6 + 105) != 0 && *(_BYTE*)(v6 + 104) != 2) {
      goto LABEL_5;
    }
  }
  if (v7 == 0) {
    v7 = v8;
  }
  if (v7 != 0) {
    return (_QWORD*)*(
        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * v7) +
                          90LL);
  }
  else {
    return nullptr;
  }
}

__int64 ITarget_773420(__int64 a1, __int64 a2, long double a3)
{
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  int v11;
  unsigned __int8* v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _WORD* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  char v52;
  __int64 (***v53)();
  __int64 v54;
  __int64 v55;
  long double v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  unsigned __int8* v60;
  unsigned int v61;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  long double v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  _BYTE* v74;
  bool v75;
  __int64* v76;
  int v77;
  int v78;
  unsigned __int8* v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  char v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  unsigned int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  unsigned int v102;
  int v103;
  int v104;
  __int64 v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  __int64 v110;
  __int64 v111;
  char v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int16* v116;
  __int64 v117;
  __int64 i;
  long double v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  int v126;
  __int64 v127;
  __int64 v128;
  _BYTE* v129;
  bool v130;
  __int64 v131;
  __int64 v133;
  __int64* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  unsigned int v138;
  __int64 v139;
  __int64 (**v140)();
  long double v141;
  __int64 v142;
  int v143;
  __int64 v144;
  __int64 v145;
  int v146;
  int v147;
  __int64 v148;
  unsigned int v149;
  __int64 v150;
  __int64 v151;
  unsigned int v152;
  bool v153;
  unsigned __int8* v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  bool v160;
  __int64 v161;
  bool v162;
  unsigned __int8* v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  bool v169;
  __int64 v170;
  bool v171;
  __int64 v172;
  unsigned int v173;
  unsigned int v174;
  long double v175;
  int v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  _QWORD* v181;
  unsigned __int8* v182;
  int v183;
  unsigned __int8* v184;
  int v185;
  __int64 v186;
  __int64 v187;
  char* v188;
  __int64 v189;
  int v190;
  __int64 v191;
  _BYTE* v192;
  unsigned __int8* v193;
  __int64 v194;
  unsigned __int8* v195;
  int v196;
  __int64 v197;
  unsigned int v198;
  __int64 v199;
  bool v200;
  int v201;
  int v202;
  unsigned __int8* v203;
  int v204;
  signed int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  unsigned int v211;
  int v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  unsigned int v223;
  int v224;
  int v225;
  long double v227;
  __int64 v228;
  long double v229;
  __int64 v230;
  __int64 (***v231)();
  __int64 v232;
  __int64 v233;
  __int64 v234;
  char* v235;
  int v236;
  unsigned int v237;
  char v238;
  int v239;
  __int64 v240;
  __int64 v241;
  __int64 (***v242)();
  __int64 v243;
  __int64 v244;
  __int64 v245;
  char* v246;
  int v247;
  unsigned int v248;
  char v249;
  int v250;
  __int64 v251;
  __int64 v252;
  int v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  char* v257;
  __int64* v258;
  int v259;
  _BYTE* v260;
  unsigned __int8* v261;
  __int64 v262;
  unsigned __int8* v263;
  int v264;
  __int64 v265;
  unsigned int v266;
  __int64 v267;
  bool v268;
  __int64* v269;
  int v270;
  int v271;
  unsigned __int8* v272;
  signed int v273;
  signed int v274;
  signed int v275;
  signed int v276;
  int v277;
  signed int v278;
  signed int v279;
  int v280;
  __int64 v281;
  char v282;
  __int64 v283;
  char* v284;
  __int64* v285;
  __int64 v286;
  char v287;
  unsigned int v288;
  unsigned __int16* v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  int v294;
  __int64 v295;
  __int64 v296;
  _BYTE* v297;
  unsigned int v299;
  unsigned int v300;
  __int64 v301;
  unsigned __int8* v302;
  unsigned __int8* v303;
  __int64 v304;
  unsigned __int8* v305;
  int v306;
  __int64 v307;
  _QWORD* v308;
  __int64 v309;
  __int64 (***v310)();
  char v311;
  __int64 v312;
  unsigned int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int v322;
  int v323;
  unsigned int v324;
  int v325;
  int v326;
  __int64 v328;
  __int64 v329;
  bool v330;
  bool v331;
  __int64 v332;
  __int64 v333;
  char v334;
  __int64 v335;
  __int64 v336;
  int v337;
  int v338;
  __int64 v339;
  __int64 v340;
  _WORD* v341;
  char v342;
  __int64 v343;
  int v344;
  int v345;
  __int64 v346;
  __int64 v347;
  _BYTE* v348;
  int v350;
  __int64 v351;
  unsigned __int8* v352;
  unsigned __int8* v353;
  __int64 v354;
  __int64 v355;
  __int64 v356;
  unsigned __int8* v357;
  int v358;
  int v359;
  int v360;
  int v361;
  int v362;
  int v363;
  int v364;
  int v365;
  int v366;
  unsigned int v367;
  int v368;
  int v369;
  __int64 v371;
  char v372;
  __int64 v373;
  __int64 v374;
  char v375;
  __int64 v376;
  __int64 (***v377)();
  __int64 (***v378)();
  __int64 (**v379)();
  __int64 v380;
  __int64 v381;
  __int64* v383;
  __int64 v384;
  unsigned int v385;
  unsigned int v386;
  __int64 v387;
  unsigned int v388;
  bool v389;
  int v390;
  __int64 v391;
  __int64 v392;
  unsigned int v393;
  int v394;
  int v395;
  int v396;
  signed int v397;
  signed int v398;
  char v399;
  int v400;
  __int64 v401;
  int v402;
  int v403;
  signed int v404;
  __int64 v406;
  int v407;
  int v408;
  int v409;
  int v410;
  int v411;
  __int64 v412;
  __int64 v413;
  int v414;
  int v415;
  int v416;
  char v417;
  int v418;
  int v419;
  int v420;
  int v421;
  __int64 v422;
  _BYTE* v423;
  __int64 v424;
  int v425;
  char v426;
  __int16 v427;
  int v428;
  int v429;
  char v430;
  _BYTE v431[31];
  int v432;
  __int128 v433;
  _QWORD v434[2];
  __int64 (***v435)();
  _QWORD* v436;
  __int64 (**v437)();
  __int64 (**v438)();
  __int64 (**v439)();
  int* v440;
  __int64 (***v441)();
  __int64 vars0;
  __int64 vars8;
  __int64 vars20;
  __int64 vars28;
  __int64 vars30;
  __int64 vars38;

  v3 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) == 0) {
    goto LABEL_381;
  }
  v4 = a1;
  LOBYTE(v5) = 0;
  v423 = (_BYTE*)(a1 + 8);
  switch (*(_BYTE*)(a1 + 24)) {
  case 2:
    v76 = GameData_212ce98[0];
    v77 = *(_DWORD*)(a1 + 12);
    v78 = *(_DWORD*)(a1 + 16);
    v79 = (unsigned __int8*)*GameData_212ce98[0];
    if (v77 - 1 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v80 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v80 = v77 - 1;
    }
    if (v78 - 1 <= v79[29]) {
      v81 = v79[29];
    }
    else {
      v81 = v78 - 1;
    }
    v82 = v79[30];
    v83 = v79[31];
    v84 = *(_DWORD*)(a1 + 20) + 1;
    v85 = v84 + v77;
    if (v85 >= v82) {
      v86 = v82;
    }
    else {
      v86 = v85;
    }
    if (v84 + v78 < v83) {
      v83 = v84 + v78;
    }
    v419 = v83;
    if (v81 > v83 || v80 > v86) {
      goto LABEL_381;
    }
    v415 = v80;
    LODWORD(v5) = 0;
    while (1) {
      v87 = v5;
      v88 = v415;
      v89 = 32 * v81;
      do {
        v92 = *(_DWORD*)(v4 + 20);
        v94 = *(_DWORD*)(v4 + 12);
        v93 = *(_DWORD*)(v4 + 16);
        if ((unsigned int)(v92 * v92) < 2) {
          v103 = v88 - v94;
          if (v103 < 0) {
            v103 = -v103;
          }
          v104 = v81 - v93;
          if (v104 < 0) {
            v104 = -v104;
          }
          if (v104 + v103 != 1) {
            goto LABEL_150;
          }
        }
        else {
          if (v92 < 1) {
            goto LABEL_150;
          }
          v95 = v92 + v93;
          v96 = v92 + v94;
          v97 = 10000;
          do {
            v98 = v81 - v93;
            v99 = v88 - v94;
            v100 = *(_DWORD*)(v4 + 12);
            if (v81 - v93 < 0) {
              v98 = v93 - v81;
            }
            do {
              ++v100;
              if (v99 >= 0) {
                v101 = v99;
              }
              else {
                v101 = -v99;
              }
              --v99;
              v102 = v101 + v98;
              if (v102 < v97) {
                v97 = v102;
              }
            } while (v100 < v96);
            ++v93;
          } while (v93 < v95);
          if (v97 != 1) {
            goto LABEL_150;
          }
        }
        LODWORD(v105) = v88 + v89;
        if ((unsigned int)(v88 + v89) >= 0x400) {
          v105 = 0;
        }
        else {
          v105 = (unsigned int)v105;
        }
        v106 = *(unsigned __int8*)(*(_QWORD*)(*v76 + 96) + v105 + 8);
        if (*(_BYTE*)(*(_QWORD*)(*v76 + 96) + v105 + 8) == 0) {
          goto LABEL_184;
        }
        v107 = *(_QWORD*)(GameData_21ca310 + 56) +
               2224LL * *(unsigned __int8*)(*(_QWORD*)(*v76 + 96) + v105 + 8);
        v108 = v107 - 2224;
        if (v106 > 0xFA || v107 == 2224) {
          goto LABEL_184;
        }
        if (*(_QWORD*)(v107 - 1832) == 0) {
          goto LABEL_184;
        }
        if (*v3 == 0) {
          goto LABEL_184;
        }
        v110 = game_UnitPool_Get_alt1(v3, a3);
        if (v110 == 0) {
          goto LABEL_184;
        }
        v111 = v110;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4) & 1) != 0) {
          v112 = Unit_6c9cf0_alt1(v111, v108);
          v3 = v423;
          if ((v112 & 1) == 0) {
          LABEL_184:
            v108 = 0;
          }
          if (*v3 != 0) {
            goto LABEL_186;
          }
          goto LABEL_188;
        }
        v3 = v423;
        if (*v423 != 0) {
        LABEL_186:
          v113 = game_UnitPool_Get_alt1(v3, a3);
          goto LABEL_189;
        }
      LABEL_188:
        v113 = 0;
      LABEL_189:
        if ((MapUtil_756c20(v113, v108) & 1) != 0) {
          LOBYTE(v433) = 0;
          *(_QWORD*)((char*)&v433 + 4) = 4294901760LL;
          if (v108 != 0) {
            v91 = a2;
            BYTE5(v433) = *(_BYTE*)(v108 + 2088);
            v114 = *(_QWORD*)(v108 + 440);
            if (v114 != 0) {
              v90 = *(_BYTE*)(v114 + 16);
            }
            else {
              v90 = 9;
            }
          }
          else {
            v90 = 9;
            v91 = a2;
          }
          v53 = *(__int64 (****)())(v91 + 32);
          BYTE3(v433) = v90;
          BYTE1(v433) = v88;
          BYTE2(v433) = v81;
          if (v53 == nullptr) {
            goto LABEL_714;
          }
          ((void (*)(__int64 (***)(), __int128*))(*v53)[6])(v53, &v433);
          v87 = 1;
        }
      LABEL_150:
        v75 = v88++ < v86;
      } while (v75);
      LODWORD(v5) = v87;
      v75 = v81++ < v419;
      if (!v75) {
        return v5 & 1;
      }
    }
  case 3:
    v432 = 0;
    v55 = game_UnitPool_Get_alt1(a1 + 8, a3);
    v57 = 0;
    v58 = 0;
    v59 = GameData_212c878[0];
    while (1) {
      if (*(_WORD*)(v55 + v57 + 828) != 0) {
        v60 = *(unsigned __int8**)(*(_QWORD*)(*v59 + 64) +
                                   8LL * *(unsigned __int16*)(v55 + v57 + 828));
        v61 = v60[72];
        if (v61 <= 7 && v60[73] == 1) {
          if (v61 - 5 > 1) {
            if ((*(_BYTE*)(v55 + v57 + 831) & 0x20) == 0) {
              goto LABEL_113;
            }
          }
          else if ((*(_DWORD*)(v55 + v57 + 832) & 0xF) * (unsigned int)v60[87] -
                           1 >=
                       *(unsigned __int8*)(v55 + v57 + 830) &&
                   (*(_BYTE*)(v55 + v57 + 831) & 0x20) == 0 &&
                   (game_Unit_Unknown6c90c0(v55) & 1) != 0) {
          LABEL_113:
            if ((UnitItem_6e8bc0(v55 + v57 + 828, v55) & 1) != 0) {
              v63 = v432++;
              v431[v63 - 1] = v58;
            }
          }
        }
      }
      ++v58;
      v57 += 8;
      if (v58 == 30) {
        v64 = (unsigned int)v432;
        if (v432 < 1) {
          goto LABEL_381;
        }
        v412 = (unsigned int)v432;
        if (*v423 == 0) {
          v67 = a2;
          v147 = 0;
          v71 = 255;
          goto LABEL_368;
        }
        v65 = game_UnitPool_Get_alt1(v423, v56);
        v67 = a2;
        if (v65 != 0) {
          v68 = *v59;
          v69 = v65 + 828;
          if ((_DWORD)v64 == 1) {
            v70 = 0;
            v71 = 255;
          }
          else {
            v71 = 255;
            v70 = 0;
            v154 = v431;
            do {
              v157 = *(unsigned __int16*)(v69 + 8LL * *(v154 - 1));
              if (*(_WORD*)(v69 + 8LL * *(v154 - 1)) != 0) {
                v158 = *(_QWORD*)(*(_QWORD*)(v68 + 64) + 8 * v157);
                v159 = *(_QWORD*)(v158 + 192);
                v160 = v159 == 0 || *(unsigned __int8*)(v158 + 72) > 7u;
                if (v160 || *(_BYTE*)(v159 + 105) == 0) {
                  v159 = 0;
                }
                else if (*(_BYTE*)(v159 + 104) == 2) {
                  v159 = 0;
                }
                v157 = v158 + 92;
                if (v159 != 0) {
                  v157 = v159 + 278;
                }
                LODWORD(v157) = *(unsigned __int8*)v157;
              }
              if ((int)v157 >= v71) {
                LODWORD(v157) = v71;
              }
              v156 = *(unsigned __int16*)(v69 + 8LL * *v154);
              if (*(_WORD*)(v69 + 8LL * *v154) != 0) {
                v161 = *(_QWORD*)(*(_QWORD*)(v68 + 64) + 8 * v156);
                v155 = *(_QWORD*)(v161 + 192);
                v162 = v155 == 0 || *(unsigned __int8*)(v161 + 72) > 7u;
                if (v162 || *(_BYTE*)(v155 + 105) == 0) {
                  v155 = 0;
                }
                else if (*(_BYTE*)(v155 + 104) == 2) {
                  v155 = 0;
                }
                v156 = v161 + 92;
                if (v155 != 0) {
                  v156 = v155 + 278;
                }
                LODWORD(v156) = *(unsigned __int8*)v156;
              }
              v70 += 2;
              v154 += 2;
              if ((int)v156 >= (int)v157) {
                v71 = v157;
              }
              else {
                v71 = v156;
              }
            } while ((v64 & 0x7FFFFFFE) != v70);
          }
          if ((v64 & 1) != 0) {
            v72 = *(unsigned __int16*)(v69 +
                                       8LL * (unsigned __int8)v431[v70 - 1]);
            if (v72 != 0) {
              v73 = *(_QWORD*)(*(_QWORD*)(v68 + 64) + 8 * v72);
              v74 = *(_BYTE**)(v73 + 192);
              v75 = v74 == nullptr || *(unsigned __int8*)(v73 + 72) > 7u;
              if (v75 || v74[105] == 0) {
                v74 = nullptr;
              }
              else if (v74[104] == 2) {
                v74 = nullptr;
              }
              v182 = (unsigned __int8*)(v73 + 92);
              if (v74 != nullptr) {
                v182 = v74 + 278;
              }
              v183 = *v182;
            }
            else {
              v183 = 0;
            }
            if (v183 < v71) {
              v71 = v183;
            }
          }
        }
        else {
          v71 = 255;
        }
        if (*v423 != 0) {
          v186 = game_UnitPool_Get_alt1(v423, v66);
          if (v186 != 0) {
            v187 = v186 + 828;
            v188 = &v430;
            v189 = v186;
            v190 = v71;
            v147 = 0;
            v191 = v64;
            do {
              v198 = (unsigned __int8)*v188++;
              v197 = *(unsigned __int16*)(v187 + 8LL * v198);
              if (*(_WORD*)(v187 + 8LL * v198) != 0) {
                v199 = *(_QWORD*)(*(_QWORD*)(*v59 + 64) + 8 * v197);
                v192 = *(_BYTE**)(v199 + 192);
                v200 = v192 == nullptr || *(unsigned __int8*)(v199 + 72) > 7u;
                if (v200 || v192[105] == 0) {
                  v192 = nullptr;
                }
                else if (v192[104] == 2) {
                  v192 = nullptr;
                }
                v193 = (unsigned __int8*)(v199 + 93);
                v194 = *(_QWORD*)(v199 + 24);
                if (v192 != nullptr) {
                  v195 = v192 + 279;
                }
                else {
                  v195 = v193;
                }
                v196 = *v195;
                LODWORD(v197) =
                    game_UnitSkillList_GetRangeAddImpl(v189 + 1744, v194 + 8) +
                    v196;
              }
              if (v147 <= (int)v197) {
                v147 = v197;
              }
              --v191;
            } while (v191 != 0);
            v67 = a2;
            v71 = v190;
          LABEL_368:
            v201 = *(_DWORD*)(v4 + 12);
            v202 = *(_DWORD*)(v4 + 16);
            v203 = (unsigned __int8*)*GameData_212ce98[0];
            if (v201 - v147 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
              v204 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
            }
            else {
              v204 = v201 - v147;
            }
            if (v202 - v147 <= v203[29]) {
              v205 = v203[29];
            }
            else {
              v205 = v202 - v147;
            }
            v206 = v203[30];
            v207 = v203[31];
            v208 = *(_DWORD*)(v4 + 20) + v147;
            v209 = v208 + v201;
            if (v209 >= v206) {
              v210 = v206;
            }
            else {
              v210 = v209;
            }
            if (v208 + v202 < v207) {
              v207 = v208 + v202;
            }
            v416 = v207;
            if (v205 > v207 || v204 > v210) {
            LABEL_381:
              LOBYTE(v5) = 0;
              return v5 & 1;
            }
            LODWORD(v5) = 0;
            v407 = v204;
            v409 = v71;
            while (2) {
              v211 = v204;
            LABEL_391:
              v213 = *(_DWORD*)(v4 + 20);
              v215 = *(_DWORD*)(v4 + 12);
              v214 = *(_DWORD*)(v4 + 16);
              if ((unsigned int)(v213 * v213) < 2) {
                v224 = v211 - v215;
                if (v224 < 0) {
                  v224 = -v224;
                }
                v225 = v205 - v214;
                if (v225 < 0) {
                  v225 = -v225;
                }
                v218 = v225 + v224;
              }
              else if (v213 < 1) {
                v218 = 10000;
              }
              else {
                v216 = v213 + v214;
                v217 = v213 + v215;
                v218 = 10000;
                do {
                  v219 = v205 - v214;
                  v220 = v211 - v215;
                  v221 = *(_DWORD*)(v4 + 12);
                  if (v205 - v214 < 0) {
                    v219 = v214 - v205;
                  }
                  do {
                    ++v221;
                    if (v220 >= 0) {
                      v222 = v220;
                    }
                    else {
                      v222 = -v220;
                    }
                    --v220;
                    v223 = v222 + v219;
                    if (v223 < v218) {
                      v218 = v223;
                    }
                  } while (v221 < v217);
                  ++v214;
                } while (v214 < v216);
              }
              if (v218 < v71 || v218 > v147) {
              LABEL_389:
                v75 = (int)v211++ < v210;
                if (!v75) {
                  v75 = v205++ < v416;
                  if (!v75) {
                    return v5 & 1;
                  }
                  continue;
                }
                goto LABEL_391;
              }
              break;
            }
            TargetEnumerator_77c150(&v425, v4, v211, (unsigned int)v205);
            if ((MapUtil_753570_alt1((unsigned int)SBYTE1(v425),
                                     (unsigned int)SBYTE2(v425)) &
                 1) != 0 &&
                (v426 != 0 &&
                     (v228 = game_UnitPool_Get_alt1(&v426, v227)) != 0 &&
                     *(_QWORD*)(v228 + 392) != 0 ||
                 (v427 & 0x8000000000000000LL) == 0 &&
                     (v230 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) +
                                        8LL)) != 0 &&
                     ((*(__int64 (**)(__int64))(
                          *(_QWORD*)(v230 + 144LL * v427) + 272LL))(
                          v230 + 144LL * v427) &
                      1) != 0)) {
              if (v426 != 0 && game_UnitPool_Get_alt1(&v426, v229) != 0) {
                v231 = &v439;
                v434[0] = v4;
                *(_QWORD*)&v433 = GameData_1f97380;
                *((_QWORD*)&v433 + 1) = &v425;
                v441 = &v439;
                v435 = (__int64 (***)())&v433;
                v439 = GameData_1f97400;
                v440 = &v425;
                if (*(_BYTE*)(v4 + 8) != 0) {
                  v420 = v5;
                  v232 = game_UnitPool_Get_alt1(v423, v229);
                  if (v232 != 0) {
                    v233 = v412;
                    v234 = v232 + 828;
                    v235 = &v430;
                    v236 = 0;
                    do {
                      v53 = v435;
                      if (v435 == nullptr) {
                        goto LABEL_714;
                      }
                      v237 = (unsigned __int8)*v235++;
                      v238 = ((__int64 (*)(__int64 (***)(), __int64))(
                          *v435)[6])(v435, v234 + 8LL * v237);
                      v239 = 1 << v237;
                      if ((v238 & 1) == 0) {
                        v239 = 0;
                      }
                      --v233;
                      v236 |= v239;
                    } while (v233 != 0);
                    v67 = a2;
                    v204 = v407;
                    v71 = v409;
                    if (v236 != 0) {
                      v53 = v441;
                      v429 = v236;
                      if (v441 == nullptr) {
                        goto LABEL_714;
                      }
                      ((void (*)(__int64 (***)(), int*))(*v441)[6])(v441,
                                                                    &v429);
                    }
                  }
                  v231 = v441;
                  if (v441 != &v439) {
                    LODWORD(v5) = v420;
                    if (v441 != nullptr) {
                      v240 = 5;
                      goto LABEL_439;
                    }
                    goto LABEL_440;
                  }
                  LODWORD(v5) = v420;
                }
                v240 = 4;
              LABEL_439:
                (*v231)[v240]();
              LABEL_440:
                if (v435 == (__int64 (***)())&v433) {
                  v241 = 4;
                LABEL_444:
                  (*v435)[v241]();
                }
                else if (v435 != nullptr) {
                  v241 = 5;
                  goto LABEL_444;
                }
              }
              if ((v427 & 0x80000000) == 0 &&
                  *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) !=
                      0) {
                v242 = &v439;
                v434[0] = v4;
                *(_QWORD*)&v433 = GameData_1f97490;
                *((_QWORD*)&v433 + 1) = &v425;
                v441 = &v439;
                v435 = (__int64 (***)())&v433;
                v439 = GameData_1f97510;
                v440 = &v425;
                if (*(_BYTE*)(v4 + 8) != 0) {
                  v421 = v5;
                  v243 = game_UnitPool_Get_alt1(v423, v229);
                  if (v243 != 0) {
                    v244 = v412;
                    v245 = v243 + 828;
                    v246 = &v430;
                    v247 = 0;
                    do {
                      v53 = v435;
                      if (v435 == nullptr) {
                        goto LABEL_714;
                      }
                      v248 = (unsigned __int8)*v246++;
                      v249 = ((__int64 (*)(__int64 (***)(), __int64))(
                          *v435)[6])(v435, v245 + 8LL * v248);
                      v250 = 1 << v248;
                      if ((v249 & 1) == 0) {
                        v250 = 0;
                      }
                      --v244;
                      v247 |= v250;
                    } while (v244 != 0);
                    v67 = a2;
                    v204 = v407;
                    v71 = v409;
                    if (v247 != 0) {
                      v53 = v441;
                      v429 = v247;
                      if (v441 == nullptr) {
                        goto LABEL_714;
                      }
                      ((void (*)(__int64 (***)(), int*))(*v441)[6])(v441,
                                                                    &v429);
                    }
                  }
                  v242 = v441;
                  if (v441 != &v439) {
                    LODWORD(v5) = v421;
                    if (v441 != nullptr) {
                      v251 = 5;
                      goto LABEL_462;
                    }
                    goto LABEL_463;
                  }
                  LODWORD(v5) = v421;
                }
                v251 = 4;
              LABEL_462:
                (*v242)[v251]();
              LABEL_463:
                if (v435 == (__int64 (***)())&v433) {
                  v252 = 4;
                LABEL_467:
                  (*v435)[v252]();
                }
                else if (v435 != nullptr) {
                  v252 = 5;
                  goto LABEL_467;
                }
              }
              v212 = v428;
              if (v428 != 0) {
                v53 = *(__int64 (****)())(v67 + 32);
                if (v53 == nullptr) {
                  goto LABEL_714;
                }
                ((void (*)(__int64 (***)(), int*))(*v53)[6])(v53, &v425);
                v212 = 1;
              }
            }
            else {
              v212 = 0;
            }
            LODWORD(v5) = v5 | v212;
            goto LABEL_389;
          }
          v67 = a2;
        }
        v147 = 0;
        goto LABEL_368;
      }
    }
  case 4:
    v432 = 0;
    v115 = game_UnitPool_Get_alt1(a1 + 8, a3);
    v116 = (unsigned __int16*)(v115 + 828);
    v117 = v115;
    for (i = 0; i != 30; ++i) {
      if (UnitItem_6e8e50(v116, v117)) {
        v120 = v432++;
        v431[v120 - 1] = i;
      }
      v116 += 4;
    }
    v121 = (unsigned int)v432;
    if (v432 < 1) {
      goto LABEL_381;
    }
    v406 = (unsigned int)v432;
    if (*v3 != 0) {
      v122 = game_UnitPool_Get_alt1(v3, v119);
      if (v122 != 0) {
        v123 = v122 + 828;
        v124 = *GameData_212c878[0];
        if ((_DWORD)v121 == 1) {
          v125 = 0;
          v126 = 255;
        }
        else {
          v126 = 255;
          v125 = 0;
          v163 = v431;
          do {
            v166 = *(unsigned __int16*)(v123 + 8LL * *(v163 - 1));
            if (*(_WORD*)(v123 + 8LL * *(v163 - 1)) != 0) {
              v167 = *(_QWORD*)(*(_QWORD*)(v124 + 64) + 8 * v166);
              v168 = *(_QWORD*)(v167 + 192);
              v169 = v168 == 0 || *(unsigned __int8*)(v167 + 72) > 7u;
              if (v169 || *(_BYTE*)(v168 + 105) == 0) {
                v168 = 0;
              }
              else if (*(_BYTE*)(v168 + 104) == 2) {
                v168 = 0;
              }
              v166 = v167 + 92;
              if (v168 != 0) {
                v166 = v168 + 278;
              }
              LODWORD(v166) = *(unsigned __int8*)v166;
            }
            if ((int)v166 >= v126) {
              LODWORD(v166) = v126;
            }
            v165 = *(unsigned __int16*)(v123 + 8LL * *v163);
            if (*(_WORD*)(v123 + 8LL * *v163) != 0) {
              v170 = *(_QWORD*)(*(_QWORD*)(v124 + 64) + 8 * v165);
              v164 = *(_QWORD*)(v170 + 192);
              v171 = v164 == 0 || *(unsigned __int8*)(v170 + 72) > 7u;
              if (v171 || *(_BYTE*)(v164 + 105) == 0) {
                v164 = 0;
              }
              else if (*(_BYTE*)(v164 + 104) == 2) {
                v164 = 0;
              }
              v165 = v170 + 92;
              if (v164 != 0) {
                v165 = v164 + 278;
              }
              LODWORD(v165) = *(unsigned __int8*)v165;
            }
            v125 += 2;
            v163 += 2;
            if ((int)v165 >= (int)v166) {
              v126 = v166;
            }
            else {
              v126 = v165;
            }
          } while ((v121 & 0x7FFFFFFE) != v125);
        }
        if ((v121 & 1) != 0) {
          v127 = *(unsigned __int16*)(v123 +
                                      8LL * (unsigned __int8)v431[v125 - 1]);
          if (v127 != 0) {
            v128 = *(_QWORD*)(*(_QWORD*)(v124 + 64) + 8 * v127);
            v129 = *(_BYTE**)(v128 + 192);
            v130 = v129 == nullptr || *(unsigned __int8*)(v128 + 72) > 7u;
            if (v130 || v129[105] == 0) {
              v129 = nullptr;
            }
            else if (v129[104] == 2) {
              v129 = nullptr;
            }
            v184 = (unsigned __int8*)(v128 + 92);
            if (v129 != nullptr) {
              v184 = v129 + 278;
            }
            v185 = *v184;
          }
          else {
            v185 = 0;
          }
          if (v185 < v126) {
            v126 = v185;
          }
        }
      }
      else {
        v126 = 255;
      }
      if (*v3 != 0) {
        v253 = v126;
        v148 = game_UnitPool_Get_alt1(v3, v119);
        if (v148 != 0) {
          v254 = v148;
          v255 = v121;
          v256 = v148 + 828;
          v257 = &v430;
          LODWORD(v148) = 0;
          v258 = GameData_212c878[0];
          do {
            v266 = (unsigned __int8)*v257++;
            v265 = *(unsigned __int16*)(v256 + 8LL * v266);
            if (*(_WORD*)(v256 + 8LL * v266) != 0) {
              v267 = *(_QWORD*)(*(_QWORD*)(*v258 + 64) + 8 * v265);
              v260 = *(_BYTE**)(v267 + 192);
              v268 = v260 == nullptr || *(unsigned __int8*)(v267 + 72) > 7u;
              if (v268 || v260[105] == 0) {
                v259 = v148;
                v260 = nullptr;
              }
              else {
                v259 = v148;
                if (v260[104] == 2) {
                  v260 = nullptr;
                }
              }
              v261 = (unsigned __int8*)(v267 + 93);
              v262 = *(_QWORD*)(v267 + 24);
              if (v260 != nullptr) {
                v263 = v260 + 279;
              }
              else {
                v263 = v261;
              }
              v264 = *v263;
              LODWORD(v265) =
                  game_UnitSkillList_GetRangeAddImpl(v254 + 1744, v262 + 8) +
                  v264;
              v126 = v253;
              LODWORD(v148) = v259;
            }
            if ((int)v148 <= (int)v265) {
              LODWORD(v148) = v265;
            }
            --v255;
          } while (v255 != 0);
          v3 = v423;
          v121 = v406;
        }
      }
      else {
        LODWORD(v148) = 0;
      }
    }
    else {
      LODWORD(v148) = 0;
      v126 = 255;
    }
    v269 = GameData_212ce98[0];
    v270 = *(_DWORD*)(v4 + 12);
    v271 = *(_DWORD*)(v4 + 16);
    v272 = (unsigned __int8*)*GameData_212ce98[0];
    if (v270 - (int)v148 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v273 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v273 = v270 - v148;
    }
    if (v271 - (int)v148 <= v272[29]) {
      v274 = v272[29];
    }
    else {
      v274 = v271 - v148;
    }
    v275 = v272[30];
    v276 = v272[31];
    v277 = *(_DWORD*)(v4 + 20) + v148;
    v278 = v277 + v270;
    if (v278 >= v275) {
      v279 = v275;
    }
    else {
      v279 = v278;
    }
    if (v277 + v271 < v276) {
      v276 = v277 + v271;
    }
    v398 = v276;
    if (v274 > v276 || v273 > v279) {
      LOBYTE(v280) = 0;
      goto LABEL_510;
    }
    v280 = 0;
    v402 = v148;
    v403 = v126;
    v397 = v273;
    v404 = v279;
    while (1) {
      v410 = 32 * v274;
      do {
        v314 = *(_DWORD*)(v4 + 20);
        v316 = *(_DWORD*)(v4 + 12);
        v315 = *(_DWORD*)(v4 + 16);
        if ((unsigned int)(v314 * v314) < 2) {
          v325 = v273 - v316;
          if (v325 < 0) {
            v325 = -v325;
          }
          v326 = v274 - v315;
          if (v326 < 0) {
            v326 = -v326;
          }
          v319 = v326 + v325;
        }
        else if (v314 < 1) {
          v319 = 10000;
        }
        else {
          v317 = v314 + v315;
          v318 = v314 + v316;
          v319 = 10000;
          do {
            v320 = v274 - v315;
            v321 = v273 - v316;
            v322 = *(_DWORD*)(v4 + 12);
            if (v274 - v315 < 0) {
              v320 = v315 - v274;
            }
            do {
              ++v322;
              if (v321 >= 0) {
                v323 = v321;
              }
              else {
                v323 = -v321;
              }
              --v321;
              v324 = v323 + v320;
              if (v324 < v319) {
                v319 = v324;
              }
            } while (v322 < v318);
            ++v315;
          } while (v315 < v317);
        }
        if (v319 < v126 || v319 > (int)v148) {
          goto LABEL_575;
        }
        LODWORD(v328) = v273 + v410;
        if ((unsigned int)(v273 + v410) >= 0x400) {
          v328 = 0;
        }
        else {
          v328 = (unsigned int)v328;
        }
        v313 = *(unsigned __int8*)(*(_QWORD*)(*v269 + 96) + v328 + 8);
        if (*(_BYTE*)(*(_QWORD*)(*v269 + 96) + v328 + 8) == 0) {
          goto LABEL_574;
        }
        v329 = *(_QWORD*)(GameData_21ca310 + 56) +
               2224LL * *(unsigned __int8*)(*(_QWORD*)(*v269 + 96) + v328 + 8);
        v330 = v313 > 0xFA || v329 == 2224;
        v422 = v329 - 2224;
        if (v330 ||
            (*(_QWORD*)(v329 - 1832) != 0 ? (v331 = *v3 == 0) : (v331 = true),
             v331)) {
          v313 = 0;
          goto LABEL_574;
        }
        v332 = game_UnitPool_Get_alt1(v3, v119);
        if (v332 == 0) {
          goto LABEL_689;
        }
        v401 = v329;
        v333 = v332;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4) & 1) != 0) {
          v334 = Unit_6c9cf0_alt1(v333, v422);
          v313 = 0;
          if ((v334 & 1) == 0) {
            goto LABEL_696;
          }
          LODWORD(v148) = v402;
          v126 = v403;
          if (*v3 == 0) {
            goto LABEL_574;
          }
        }
        else {
          v313 = (unsigned __int8)*v3;
          LODWORD(v148) = v402;
          v126 = v403;
          if (*v3 == 0) {
            goto LABEL_574;
          }
        }
        v335 = game_UnitPool_Get_alt1(v3, v119);
        if (v335 == 0) {
        LABEL_689:
          v313 = 0;
          goto LABEL_696;
        }
        v400 = v280;
        v336 = 0;
        v337 = 0;
        v413 = v335 + 828;
        do {
          v339 = (unsigned __int8)v431[v336 - 1];
          if (*v3 != 0) {
            v340 = game_UnitPool_Get_alt1(v3, v119);
          }
          else {
            v340 = 0;
          }
          v417 = v339;
          v341 = (_WORD*)(v413 + 8 * v339);
          v342 = MapUtil_753920(v340, v341, v422);
          v338 = 0;
          if ((v342 & 1) != 0 && *v3 != 0) {
            v343 = game_UnitPool_Get_alt1(v3, v119);
            if (v343 == 0) {
              goto LABEL_621;
            }
            v344 = *(_DWORD*)(v4 + 12);
            v345 = *(_DWORD*)(v4 + 16);
            v346 = (unsigned __int16)*v341;
            if (*v341 != 0) {
              v347 =
                  *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v346);
              v348 = *(_BYTE**)(v347 + 192);
              if (v348 == nullptr || *(unsigned __int8*)(v347 + 72) > 7u) {
                v348 = nullptr;
                v408 = *(unsigned __int8*)(v347 + 92);
              }
              else {
                if (v348[105] != 0) {
                  if (v348[104] == 2) {
                    v351 = 0;
                  }
                  else {
                    v351 = *(_QWORD*)(v347 + 192);
                  }
                }
                else {
                  v351 = 0;
                }
                if (v351 != 0) {
                  v352 = (unsigned __int8*)(v351 + 278);
                }
                else {
                  v352 = (unsigned __int8*)(v347 + 92);
                }
                v408 = *v352;
                if (v348[105] != 0) {
                  if (v348[104] == 2) {
                    v348 = nullptr;
                  }
                }
                else {
                  v348 = nullptr;
                }
              }
              v353 = (unsigned __int8*)(v347 + 93);
              v354 = *(_QWORD*)(v347 + 24);
              v355 = v343;
              v356 = v343 + 1744;
              if (v348 != nullptr) {
                v357 = v348 + 279;
              }
              else {
                v357 = v353;
              }
              v358 = *v357;
              LODWORD(v346) =
                  game_UnitSkillList_GetRangeAddImpl(v356, v354 + 8) + v358;
              v121 = v406;
              v350 = v408;
              v343 = v355;
            }
            else {
              v350 = 0;
            }
            v359 = *(_DWORD*)(v343 + 592);
            if ((unsigned int)(v359 * v359) < 2) {
              v368 = v273 - v344;
              if (v273 - v344 < 0) {
                v368 = v344 - v273;
              }
              v369 = v274 - v345;
              if (v274 - v345 < 0) {
                v369 = v345 - v274;
              }
              v362 = v369 + v368;
            }
            else {
              if (v359 >= 1) {
                v3 = v423;
                v360 = v359 + v345;
                v361 = v359 + v344;
                v362 = 10000;
                do {
                  v363 = v274 - v345;
                  v364 = v273 - v344;
                  v365 = v344;
                  if (v274 - v345 < 0) {
                    v363 = v345 - v274;
                  }
                  do {
                    ++v365;
                    if (v364 >= 0) {
                      v366 = v364;
                    }
                    else {
                      v366 = -v364;
                    }
                    --v364;
                    v367 = v366 + v363;
                    if (v367 < v362) {
                      v362 = v367;
                    }
                  } while (v365 < v361);
                  ++v345;
                } while (v345 < v360);
              LABEL_674:
                if (v350 > v362 || v362 > (int)v346) {
                  v338 = 0;
                  v269 = GameData_212ce98[0];
                  v279 = v404;
                  goto LABEL_622;
                }
                v371 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * (unsigned __int16)*v341);
                v269 = GameData_212ce98[0];
                v279 = v404;
                v372 = v417;
                if (*(_BYTE*)(v371 + 73) == 10) {
                  v373 = *(_QWORD*)(v371 + 192);
                  if (v373 != 0) {
                    LODWORD(v373) = *(_WORD*)(v373 + 16) & 0xFFF;
                  }
                  v425 = v373;
                  LODWORD(v439) = 0;
                  *(_QWORD*)&v433 = GameData_1f959d8;
                  *((_QWORD*)&v433 + 1) = &v439;
                  v435 = (__int64 (***)())&v433;
                  GameRoutine_757f60(v343, &v425, v273, v274, (__int64)&v433);
                  if (v435 == (__int64 (***)())&v433) {
                    v372 = v417;
                    v374 = 4;
                  LABEL_686:
                    (*v435)[v374]();
                  }
                  else {
                    v372 = v417;
                    if (v435 != nullptr) {
                      v374 = 5;
                      goto LABEL_686;
                    }
                  }
                  if ((int)v439 < 1) {
                  LABEL_621:
                    v338 = 0;
                    goto LABEL_622;
                  }
                }
                v338 = 1 << v372;
                goto LABEL_622;
              }
              v362 = 10000;
            }
            v3 = v423;
            goto LABEL_674;
          }
        LABEL_622:
          ++v336;
          v337 |= v338;
        } while (v336 != v121);
        v280 = v400;
        if (v337 != 0) {
          DWORD2(v433) = 0;
          BYTE5(v433) = 0;
          LOWORD(v433) = -256;
          BYTE2(v433) = -1;
          WORD3(v433) = -1;
          v375 = 9;
          *(_WORD*)((char*)&v433 + 3) = 9;
          BYTE5(v433) = *(_BYTE*)(v401 - 136);
          *(_WORD*)((char*)&v433 + 1) = *(_WORD*)(v401 - 1640);
          v376 = *(_QWORD*)(v401 - 1784);
          if (v376 != 0) {
            v375 = *(_BYTE*)(v376 + 16);
          }
          BYTE3(v433) = v375;
          BYTE1(v433) = v273;
          v53 = *(__int64 (****)())(a2 + 32);
          BYTE2(v433) = v274;
          DWORD2(v433) = v337;
          if (v53 != nullptr) {
            ((void (*)(__int64 (***)(), __int128*))(*v53)[6])(v53, &v433);
            v313 = 1;
            goto LABEL_696;
          }
        LABEL_714:
          GameRoutine_60a310_alt1(v53);
        }
        v313 = 0;
      LABEL_696:
        LODWORD(v148) = v402;
        v126 = v403;
      LABEL_574:
        v280 |= v313;
      LABEL_575:
        v75 = v273++ < v279;
      } while (v75);
      v273 = v397;
      v75 = v274++ < v398;
      if (!v75) {
      LABEL_510:
        v399 = v280;
        if (*v3 != 0) {
          v281 = game_UnitPool_Get_alt1(v3, v119);
          v282 = 0;
          if (v281 != 0) {
            v424 = v281;
            v283 = v281 + 828;
            v284 = &v430;
            v285 = GameData_212c878[0];
            while (2) {
              v288 = (unsigned __int8)*v284++;
              v287 = v288;
              v289 = (unsigned __int16*)(v283 + 8LL * v288);
              v290 = *(_QWORD*)(*v285 + 64);
              v291 = *(_QWORD*)(v290 + 8LL * *v289);
              v292 = *(_QWORD*)(v291 + 192);
              if (v292 == 0 || *(unsigned __int8*)(v291 + 72) > 7u) {
                goto LABEL_518;
              }
              if (*(_BYTE*)(v292 + 105) == 0) {
                goto LABEL_518;
              }
              if (*(_BYTE*)(v292 + 104) == 2) {
                goto LABEL_518;
              }
              v294 = (*((_DWORD*)v289 + 1) & 0xF) *
                         *(unsigned __int8*)(v291 + 87) -
                     *((unsigned __int8*)v289 + 2);
              if ((v294 & (unsigned int)~(v294 >> 31)) <
                  *(unsigned __int8*)(v292 + 274)) {
                goto LABEL_518;
              }
              v425 = *(_WORD*)(v292 + 16) & 0xFFF;
              v295 = *v289;
              if (v295 == 0) {
                v299 = 0;
                v300 = 0;
                goto LABEL_551;
              }
              v296 = *(_QWORD*)(v290 + 8 * v295);
              v297 = *(_BYTE**)(v296 + 192);
              if (v297 == nullptr || *(unsigned __int8*)(v296 + 72) > 7u) {
                v299 = *(unsigned __int8*)(v296 + 92);
              }
              else {
                if (v297[105] != 0) {
                  if (v297[104] == 2) {
                    v301 = 0;
                  }
                  else {
                    v301 = *(_QWORD*)(v296 + 192);
                  }
                }
                else {
                  v301 = 0;
                }
                if (v301 != 0) {
                  v302 = (unsigned __int8*)(v301 + 278);
                }
                else {
                  v302 = (unsigned __int8*)(v296 + 92);
                }
                v299 = *v302;
                if (v297[105] != 0) {
                  if (v297[104] == 2) {
                    v297 = nullptr;
                  }
                LABEL_547:
                  v303 = (unsigned __int8*)(v296 + 93);
                  v304 = *(_QWORD*)(v296 + 24);
                  if (v297 != nullptr) {
                    v305 = v297 + 279;
                  }
                  else {
                    v305 = v303;
                  }
                  v306 = *v305;
                  v300 = game_UnitSkillList_GetRangeAddImpl(v424 + 1744,
                                                            v304 + 8) +
                         v306;
                LABEL_551:
                  LOBYTE(v433) = v287;
                  v307 = *(_QWORD*)(a2 + 32);
                  if (v307 != 0) {
                    if (v307 == a2) {
                      v436 = v434;
                      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v307 + 24LL))(
                          v307, v434);
                      v308 = v436;
                    }
                    else {
                      v308 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v307 +
                                                                16LL))(v307);
                      v436 = v308;
                    }
                  }
                  else {
                    v308 = nullptr;
                    v436 = nullptr;
                  }
                  v441 = nullptr;
                  v309 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
                  v310 = (__int64 (***)())v309;
                  *(_QWORD*)v309 = GameData_1f97890;
                  *(_BYTE*)(v309 + 16) = v433;
                  if (v308 != nullptr) {
                    if (v308 == v434) {
                      *(_QWORD*)(v309 + 64) = v309 + 32;
                      (*(void (**)(_QWORD*))(*v308 + 24LL))(v308);
                    }
                    else {
                      *(_QWORD*)(v309 + 64) =
                          (*(__int64 (**)(_QWORD*))(*v308 + 16LL))(v308);
                    }
                  }
                  else {
                    *(_QWORD*)(v309 + 64) = 0;
                  }
                  v441 = v310;
                  v311 = TargetEnumerator_77cc80(v4, &v425, v299, v300, &v439);
                  if (v441 == &v439) {
                    v312 = 4;
                  LABEL_565:
                    (*v441)[v312]();
                  }
                  else if (v441 != nullptr) {
                    v312 = 5;
                    goto LABEL_565;
                  }
                  if (v436 != v434) {
                    if (v436 != nullptr) {
                      v286 = 40;
                    LABEL_516:
                      (*(void (**)(__int64))(*v436 + v286))((__int64)v436);
                    }
                    v282 |= v311;
                  LABEL_518:
                    if (--v406 == 0) {
                      goto LABEL_514;
                    }
                    continue;
                  }
                  v286 = 32;
                  goto LABEL_516;
                }
              }
              break;
            }
            v297 = nullptr;
            goto LABEL_547;
          }
        }
        else {
          v282 = 0;
        }
      LABEL_514:
        LOBYTE(v5) = v399 | v282;
        return v5 & 1;
      }
    }
  case 5:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x12:
  case 0x13:
    vars20 = vars0;
    vars28 = vars8;
    vars30 = vars38;
    v383 = GameData_212c880[0];
    if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
      v384 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                        8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
      if (v384 != 0) {
      LABEL_717:
        v385 = *(_WORD*)(v384 + 16) & 0xFFF;
        goto LABEL_727;
      }
    }
    else {
      v386 = *(unsigned __int16*)(a1 + 32);
      if (*(_WORD*)(a1 + 32) == 0) {
        v386 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v387 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v386);
      v384 = *(_QWORD*)(v387 + 192);
      v388 = *(unsigned __int8*)(v387 + 72);
      v389 = v384 == 0 || v388 > 7;
      if (!v389 && *(_BYTE*)(v384 + 105) != 0 && *(_BYTE*)(v384 + 104) != 2) {
        goto LABEL_717;
      }
    }
    v385 = 0;
  LABEL_727:
    v390 = *(unsigned __int8*)(a1 + 8);
    HIDWORD(vars38) = v385;
    if (v390 != 0 &&
        (v391 = a1, (a1 = game_UnitPool_Get_alt1(a1 + 8, a3)) != 0)) {
      v392 = *(_QWORD*)(*(_QWORD*)(*v383 + 64) + 8LL * v385);
      v393 = *(unsigned __int8*)(v392 + 278);
      v394 = *(unsigned __int8*)(v392 + 279);
      if (v385 != 0) {
        v395 = game_UnitSkillList_GetRangeAddImpl(
            a1 + 1744, *(_QWORD*)(v392 + 24) + 224LL);
      }
      else {
        v395 = 0;
      }
      LODWORD(a1) = TargetEnumerator_77cc80(v391, (char*)&vars38 + 4, v393,
                                            (unsigned int)(v395 + v394), a2);
      v396 = 1;
    }
    else {
      v396 = 0;
    }
    return v396 & (unsigned int)a1;
  case 0xA:
    v9 = GameData_212ce98[0];
    v10 = *(_DWORD*)(a1 + 12);
    v11 = *(_DWORD*)(a1 + 16);
    v12 = (unsigned __int8*)*GameData_212ce98[0];
    if (v10 - 1 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v13 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v13 = v10 - 1;
    }
    if (v11 - 1 <= v12[29]) {
      v14 = v12[29];
    }
    else {
      v14 = v11 - 1;
    }
    v15 = v12[30];
    v16 = v12[31];
    v17 = *(_DWORD*)(a1 + 20) + 1;
    v18 = v17 + v10;
    if (v18 >= v15) {
      v19 = v15;
    }
    else {
      v19 = v18;
    }
    if (v17 + v11 < v16) {
      v16 = v17 + v11;
    }
    v414 = v16;
    if (v14 > v16 || v13 > v19) {
      goto LABEL_381;
    }
    LODWORD(v5) = 0;
    v411 = v13;
    break;
  case 0x15:
    v54 = 10;
    return TargetEnumerator_77fb20(a1, v54, a2);
  case 0x16:
    if ((TargetEnumerator_77fb20(a1, 11, a2) & 1) != 0) {
      LOBYTE(v5) = 1;
      return v5 & 1;
    }
    a1 = v4;
    v54 = 12;
    return TargetEnumerator_77fb20(a1, v54, a2);
  case 0x17:
    v7 = game_UnitPool_Get_alt1(a1 + 8, a3);
    v5 = v7;
    if (v7 == 0) {
      return v5 & 1;
    }
    LODWORD(v433) = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
    if ((game_Unit_HasSkill(v7, &v433) & 1) != 0) {
      v8 = a2;
    }
    else {
      v143 = UnitItemList_70f9f0(v5 + 828, 11);
      v8 = a2;
      if (v143 < 0) {
        goto LABEL_381;
      }
    }
    v144 = 4;
    v145 = v4;
    goto LABEL_232;
  case 0x18:
    v131 = game_UnitPool_Get_alt1(a1 + 8, a3);
    v5 = v131;
    if (v131 == 0) {
      return v5 & 1;
    }
    LODWORD(v433) = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
    if ((game_Unit_HasSkill(v131, &v433) & 1) != 0) {
      v8 = a2;
    }
    else {
      v146 = UnitItemList_70f9f0(v5 + 828, 12);
      v8 = a2;
      if (v146 < 0) {
        goto LABEL_381;
      }
    }
    v145 = v4;
    v144 = 5;
  LABEL_232:
    LOBYTE(v5) = TargetEnumerator_77f800(v145, v144, v8, 1);
    return v5 & 1;
  case 0x1A:
  case 0x1E:
    return ((__int64 (*)(void))TargetEnumerator_77f800)();
  case 0x1B:
    v138 = *(_DWORD*)(a1 + 44);
    v430 = 0;
    if ((v138 & 0x80000000) != 0) {
      goto LABEL_381;
    }
    v139 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL);
    if (v139 == 0) {
      goto LABEL_381;
    }
    v140 = (__int64 (**)())(v139 + 144LL * v138);
    if ((*((unsigned __int8 (**)(__int64 (**)()))*v140 + 5))(v140) != 6) {
      goto LABEL_381;
    }
    if (*v3 != 0) {
      v142 = game_UnitPool_Get_alt1(v3, v141);
    }
    else {
      v142 = 0;
    }
    v180 = *(_QWORD*)(a2 + 32);
    *(_QWORD*)&v433 = v4;
    if (v180 != 0) {
      if (v180 == a2) {
        v436 = v434;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v180 + 24LL))(v180, v434);
        v4 = v433;
        v181 = v436;
      }
      else {
        v181 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v180 + 16LL))(v180);
        v436 = v181;
      }
    }
    else {
      v181 = nullptr;
      v436 = nullptr;
    }
    v437 = v140;
    v438 = (__int64 (**)())&v430;
    v377 = (__int64 (***)())fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v378 = v377;
    v377[2] = (__int64 (**)())v4;
    *v377 = GameData_1f97910;
    if (v181 != nullptr) {
      if (v181 == v434) {
        v377[8] = (__int64 (**)())(v377 + 4);
        (*(void (**)(_QWORD*))(*v181 + 24LL))(v181);
      }
      else {
        v377[8] =
            (__int64 (**)())(*(__int64 (**)(_QWORD*))(*v181 + 16LL))(v181);
      }
    }
    else {
      v377[8] = nullptr;
    }
    v379 = v438;
    v441 = v378;
    v378[10] = v437;
    v378[11] = v379;
    (*((void (**)(__int64 (**)(), __int64, __int64 (***)()))*v140 + 95))(
        v140, v142, &v439);
    if (v441 == &v439) {
      v380 = 4;
    }
    else {
      if (v441 == nullptr) {
        goto LABEL_708;
      }
      v380 = 5;
    }
    (*v441)[v380]();
  LABEL_708:
    if (v436 == v434) {
      v381 = 32;
    }
    else {
      if (v436 == nullptr) {
        goto LABEL_713;
      }
      v381 = 40;
    }
    (*(void (**)(__int64))(*v436 + v381))((__int64)v436);
  LABEL_713:
    LOBYTE(v5) = v430;
    return v5 & 1;
  case 0x1C:
    v133 = game_UnitPool_Get_alt1(a1 + 8, a3);
    if (v133 == 0) {
      goto LABEL_381;
    }
    v134 = GameData_212cfb8[0];
    v135 = game_map_7ca370(*GameData_212cfb8[0], *(unsigned int*)(v4 + 12),
                           *(unsigned int*)(v4 + 16), v133);
    if (v135 == 0) {
      goto LABEL_381;
    }
    if ((*(_DWORD*)(v4 + 40) & 0xFFF) != 0) {
      v136 = a2;
      v137 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                        8LL * (*(_DWORD*)(v4 + 40) & 0xFFF));
    }
    else {
      v149 = *(unsigned __int16*)(v4 + 32);
      if (*(_WORD*)(v4 + 32) == 0) {
        v149 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v136 = a2;
      v150 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v149);
      v151 = *(_QWORD*)(v150 + 192);
      v152 = *(unsigned __int8*)(v150 + 72);
      v153 = v151 == 0 || v152 > 7;
      if (v153 || *(_BYTE*)(v151 + 105) == 0) {
        v137 = 0;
      }
      else if (*(_BYTE*)(v151 + 104) == 2) {
        v137 = 0;
      }
      else {
        v137 = v151;
      }
    }
    v172 = v135;
    v173 = (*(__int64 (**)(__int64))(*(_QWORD*)v135 + 328LL))(v135);
    v174 = (*(__int64 (**)(__int64))(*(_QWORD*)v172 + 336LL))(v172);
    if (*v423 != 0) {
      v5 = game_UnitPool_Get_alt1(v423, v175);
    }
    else {
      v5 = 0;
    }
    if (v137 != 0) {
      v176 = *(_WORD*)(v137 + 16) & 0xFFF;
    }
    else {
      v176 = 0;
    }
    if (v5 == 0) {
      return v5 & 1;
    }
    LOBYTE(v439) = 1;
    v177 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    *(_QWORD*)(v177 + 16) = v5;
    *(_DWORD*)(v177 + 24) = v176;
    v435 = (__int64 (***)())v177;
    *(_QWORD*)v177 = GameData_1f97990;
    *(_QWORD*)(v177 + 8) = v4;
    *(_QWORD*)(v177 + 32) = &v439;
    Unit_6c8a80(v5, v173, v174, &v433);
    (*(void (**)(__int64))(*(_QWORD*)v177 + 40LL))(v177);
    if ((unsigned __int8)v439 != 1) {
      goto LABEL_381;
    }
    LODWORD(v178) = v173 + 32 * v174;
    v178 = (unsigned int)v178 >= 0x400 ? 0LL : (unsigned int)v178;
    v179 = *(_QWORD*)(*v134 + 16);
    if ((*(__int16*)(v179 + 2LL * (unsigned int)v178 + 14440) & 0x80000000) ==
            0 ||
        (*(__int16*)(v179 + 2 * v178 + 12392) & 0x80000000) == 0) {
      goto LABEL_381;
    }
    v53 = *(__int64 (****)())(v136 + 32);
    LOBYTE(v433) = 0;
    DWORD2(v433) = 0;
    BYTE5(v433) = 0;
    BYTE1(v433) = v173;
    BYTE2(v433) = v174;
    WORD3(v433) = -1;
    *(_WORD*)((char*)&v433 + 3) = 9;
    if (v53 == nullptr) {
      goto LABEL_714;
    }
    ((void (*)(__int64 (***)(), __int128*))(*v53)[6])(v53, &v433);
    LOBYTE(v5) = 1;
    return v5 & 1;
  default:
    return v5 & 1;
  }
LABEL_22:
  v20 = 32 * v14;
  v418 = v5;
  while (1) {
    v21 = *(_DWORD*)(v4 + 20);
    v23 = *(_DWORD*)(v4 + 12);
    v22 = *(_DWORD*)(v4 + 16);
    if ((unsigned int)(v21 * v21) < 2) {
      v32 = v13 - v23;
      if (v32 < 0) {
        v32 = -v32;
      }
      v33 = v14 - v22;
      if (v33 < 0) {
        v33 = -v33;
      }
      if (v33 + v32 == 1) {
      LABEL_44:
        LODWORD(v34) = v13 + v20;
        if ((unsigned int)(v13 + v20) >= 0x400) {
          v34 = 0;
        }
        else {
          v34 = (unsigned int)v34;
        }
        if (*(_BYTE*)(*(_QWORD*)(*v9 + 96) + v34 + 8) != 0) {
          v35 = *(_QWORD*)(GameData_21ca310 + 56) +
                2224LL * *(unsigned __int8*)(*(_QWORD*)(*v9 + 96) + v34 + 8);
          v36 = *(unsigned __int8*)(*(_QWORD*)(*v9 + 96) + v34 + 8) > 0xFAu ||
                v35 == 2224;
          if (!v36 && *(_QWORD*)(v35 - 1832) != 0 && *v3 != 0) {
            v38 = game_UnitPool_Get_alt1(v3, a3);
            if (v38 != 0) {
              v39 = v38;
              if ((((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4) & 1) ==
                       0 ||
                   (Unit_6c9cf0_alt1(v39, v35 - 2224) & 1) != 0) &&
                  *v423 != 0) {
                v40 = game_UnitPool_Get_alt1(v423, a3);
                if (v40 != 0 && v40 != v35 - 2224) {
                  v41 = v40;
                  if ((((__int64 (*)(void))game_Unit_IsUnlocked)() & 1) != 0 &&
                      (game_Unit_IsUnlocked(v35 - 2224) & 1) != 0) {
                    v42 = *(_QWORD*)(v41 + 440);
                    v43 = (_WORD*)v41;
                    v44 = v42 != 0 ? *(unsigned __int8*)(v42 + 16) : 9;
                    v45 = v35 - 1784;
                    v46 = *(_QWORD*)(v35 - 1784);
                    v47 = v46 != 0 ? *(unsigned __int8*)(v46 + 16) : 9;
                    if (v44 == v47) {
                      if (v43[414] != 0) {
                        v48 = (v43[418] != 0) + 1;
                      }
                      else {
                        v48 = v43[418] != 0;
                      }
                      if (v43[422] != 0) {
                        ++v48;
                      }
                      v36 = v43[426] == 0;
                      v49 = (unsigned __int16)v43[430];
                      v50 = (unsigned __int16)v43[434];
                      if (!v36) {
                        ++v48;
                      }
                      if (v49 != 0) {
                        ++v48;
                      }
                      if ((v48 | (v50 != 0)) != 0) {
                        goto LABEL_91;
                      }
                      if (*(_WORD*)(v35 - 1396) != 0) {
                        v51 = (*(_WORD*)(v35 - 1388) != 0) + 1;
                      }
                      else {
                        v51 = *(_WORD*)(v35 - 1388) != 0;
                      }
                      if (*(_WORD*)(v35 - 1380) != 0) {
                        ++v51;
                      }
                      if (*(_WORD*)(v35 - 1372) != 0) {
                        ++v51;
                      }
                      if (*(_WORD*)(v35 - 1364) != 0) {
                        ++v51;
                      }
                      if ((v51 | (*(_WORD*)(v35 - 1356) != 0)) != 0) {
                      LABEL_91:
                        if (MapUtil_7536a0(v35 - 2224)) {
                          DWORD2(v433) = 0;
                          BYTE5(v433) = 0;
                          LOWORD(v433) = -256;
                          BYTE2(v433) = -1;
                          WORD3(v433) = -1;
                          v52 = 9;
                          *(_WORD*)((char*)&v433 + 3) = 9;
                          BYTE5(v433) = *(_BYTE*)(v35 - 136);
                          *(_WORD*)((char*)&v433 + 1) = *(_WORD*)(v35 - 1640);
                          if (*(_QWORD*)v45 != 0) {
                            v52 = *(_BYTE*)(*(_QWORD*)v45 + 16LL);
                          }
                          v53 = *(__int64 (****)())(a2 + 32);
                          BYTE3(v433) = v52;
                          BYTE1(v433) = v13;
                          BYTE2(v433) = v14;
                          if (v53 == nullptr) {
                            goto LABEL_714;
                          }
                          ((void (*)(__int64 (***)(), __int128*))(*v53)[6])(
                              v53, &v433);
                          v418 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (v21 >= 1) {
      v24 = v21 + v22;
      v25 = v21 + v23;
      v26 = 10000;
      do {
        v27 = v14 - v22;
        v28 = v13 - v23;
        v29 = *(_DWORD*)(v4 + 12);
        if (v14 - v22 < 0) {
          v27 = v22 - v14;
        }
        do {
          ++v29;
          if (v28 >= 0) {
            v30 = v28;
          }
          else {
            v30 = -v28;
          }
          --v28;
          v31 = v30 + v27;
          if (v31 < v26) {
            v26 = v31;
          }
        } while (v29 < v25);
        ++v22;
      } while (v22 < v24);
      if (v26 == 1) {
        goto LABEL_44;
      }
    }
    v3 = v423;
    v75 = v13++ < v19;
    if (!v75) {
      LODWORD(v5) = v418;
      v13 = v411;
      v75 = v14++ < v414;
      if (!v75) {
        return v5 & 1;
      }
      goto LABEL_22;
    }
  }
}

__int64 game_map_ITarget_Enumerate(__int64 a1, long double a2)
{
  char v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;

  v5[0] = GameData_1f97a90;
  v6 = v5;
  v2 = GameRoutine_773420(a1, (__int64)v5, a2);
  if (v6 == v5) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v6 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v6 + v3))((__int64)v6);
  }
  return v2 & 1;
}

__int64 ITarget_776720(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                       _DWORD* a5, __int64 a6)
{
  int v6;
  _BYTE* v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  int v18;
  __int64* v19;
  __int64* v20;
  int v21;
  unsigned __int64 v22;
  char v23;
  char v24;
  char v25;
  char v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  _BYTE* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _BYTE* v37;
  _BYTE* v38;
  char v39;
  __int64 v40;
  char* v41;
  int v42;
  int v43;
  _BYTE* v44;
  unsigned int v45;
  __int64 v46;
  unsigned int v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  char v63;
  _BYTE* v64;
  unsigned int v65;
  __int64 v66;
  unsigned int v67;
  bool v68;
  char* v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  __int64 v75;
  __int64 v76;
  int v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  unsigned int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  int v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  int v100;
  int v101;
  _BYTE* v102;
  char v103;
  char v104;
  char v105;
  char v106;
  char v107;
  char v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  _BYTE* v114;
  _BYTE* v115;
  char v116;
  __int64 v117;
  char* v118;
  __int64 v119;
  unsigned int v120;
  __int64 v121;
  __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  int v128;
  int v129;
  unsigned __int64 v130;
  char v131;
  char v132;
  char v133;
  char v134;
  char v135;
  char v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  _BYTE* v143;
  _BYTE* v144;
  char v145;
  __int64 v146;
  char* v147;
  int v148;
  __int64 v149;
  __int64 v150;
  int v151;
  int v152;
  _BYTE* v153;
  _BYTE* v154;
  char v156;
  char v157;
  char v158;
  char v159;
  int v161;
  int v162;
  int v163;
  int v164;
  char v165;
  char v166;
  char v167[4];
  int v168;
  int v169;

  v158 = a3;
  v159 = a2;
  if ((*a5 & 0xFFF) == 0 ||
      *(unsigned __int8*)(*GameData_212ce98[0] + 26) <=
          (unsigned int)(unsigned __int8)(a2 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         24)) ||
      *(unsigned __int8*)(*GameData_212ce98[0] + 27) <=
          (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         25))) {
    return result;
  }
  v6 = *(_DWORD*)(result + 20);
  v7 = (_BYTE*)result;
  v8 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (*a5 & 0xFFF)) +
                           279LL);
  v164 = v6;
  if (v6 != 0) {
    if (v6 < 0) {
    LABEL_262:
      GameRoutine_74e1f0();
    }
    v9 = 4LL * v6;
    v10 = a4;
    v11 = v6;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v9, 16, 0);
    v13 = v12 + 4 * v11;
    result = memset(v12, 0, v9, v14, v15, v16);
    a4 = v10;
  }
  else {
    v13 = 0;
    v12 = 0;
  }
  v17 = (char*)GameData_212cf50 + (unsigned __int8)a4;
  v156 = v17[1284];
  v157 = v17[1280];
  v165 = (a4 - 1) & 0xFD;
  v166 = a4 & 0xFD;
  v18 = v164;
  if (v8 == 0) {
    v163 = 0;
    goto LABEL_156;
  }
  v163 = 0;
  v19 = GameData_212c930;
  v20 = GameData_212cfb8[0];
  v153 = v7;
  v151 = v8;
  while (2) {
    if (v18 == 0) {
      v63 = 1;
      v22 = v12;
      goto LABEL_85;
    }
    v21 = 0;
    v22 = v12;
    do {
      if (v166 != 0) {
        v23 = 0;
      }
      else {
        v23 = v21;
      }
      v24 = v159 + v163 * v157 + v23;
      if (v165 != 0) {
        v25 = 0;
      }
      else {
        v25 = v21;
      }
      v26 = v158 + v163 * v156 + v25;
      if (v22 < v13) {
        *(_BYTE*)v22 = v24;
        *(_BYTE*)(v22 + 1) = v26;
        *(_WORD*)(v22 + 2) = 0;
        v22 += 4LL;
      }
      else {
        v27 = v22 - v12;
        v28 = v13;
        v29 = (_BYTE*)v22;
        v30 = (__int64)(v22 - v12) >> 2;
        v31 = v30 + 1;
        if ((unsigned __int64)(v30 + 1) >> 62 != 0) {
          goto LABEL_262;
        }
        v32 = v28 - v12;
        v33 = (__int64)(v28 - v12) >> 1;
        if (v33 > v31) {
          v31 = v33;
        }
        if (v32 >= 0x7FFFFFFFFFFFFFFCLL) {
          v34 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v34 = v31;
        }
        if (v34 >> 62 != 0) {
        LABEL_263:
          GameRoutine_60a210(result);
        }
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v34, 16, 0);
        v35 = result + v27;
        *(_BYTE*)(v35 + 1) = v26;
        v36 = result + v27 - 4 * v30;
        *(_BYTE*)v35 = v24;
        *(_WORD*)(v35 + 2) = 0;
        if ((_BYTE*)v12 != v29) {
          v37 = (_BYTE*)v12;
          v38 = (_BYTE*)(result + v27 - 4 * v30);
          do {
            *v38 = *v37;
            v38[1] = v37[1];
            v38[2] = v37[2];
            v39 = v37[3];
            v37 += 4;
            v38[3] = v39;
            v38 += 4;
          } while (v37 != v29);
        }
        v13 = result + 4 * v34;
        v22 = v35 + 4;
        if (v12 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v12);
        }
        v18 = v164;
        v12 = v36;
      }
      ++v21;
    } while (v21 != v18);
    if (v12 == v22) {
      v7 = v153;
      v63 = 1;
      v19 = GameData_212c930;
      v20 = GameData_212cfb8[0];
      goto LABEL_85;
    }
    v7 = v153;
    v41 = (char*)v12;
    v19 = GameData_212c930;
    v20 = GameData_212cfb8[0];
    do {
      LOBYTE(v42) = *v41;
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) <=
          (unsigned int)(unsigned __int8)(*v41 -
                                          *(_BYTE*)(*GameData_212ce98[0] +
                                                    24))) {
        goto LABEL_156;
      }
      LOBYTE(v43) = v41[1];
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 27) <=
          (unsigned int)(unsigned __int8)(v43 - *(_BYTE*)(*GameData_212ce98[0] +
                                                          25))) {
        goto LABEL_156;
      }
      if ((*((_DWORD*)v153 + 10) & 0xFFF) != 0) {
        v44 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * (*((_DWORD*)v153 + 10) & 0xFFF));
        if (v44 == nullptr) {
          goto LABEL_38;
        }
      }
      else {
        v45 = *((unsigned __int16*)v153 + 16);
        if (*((_WORD*)v153 + 16) == 0) {
          v45 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v46 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v45);
        v44 = *(_BYTE**)(v46 + 192);
        v47 = *(unsigned __int8*)(v46 + 72);
        v48 = v44 == nullptr || v47 > 7;
        if (v48 || v44[105] == 0 || v44[104] == 2) {
          goto LABEL_38;
        }
      }
      if (v44[250] == 16) {
        if (v153[8] != 0) {
          result = game_UnitPool_Get(v153 + 8);
          LOBYTE(v42) = *v41;
          LOBYTE(v43) = v41[1];
        }
        else {
          result = 0;
        }
        v42 = (char)v42;
        v43 = (char)v43;
        if (*GameData_212ce90[0] != 0 &&
            (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) != 0) {
          v49 = *(_QWORD*)(result + 440);
          v50 = v49 != 0 ? *(unsigned __int8*)(v49 + 16) : 9LL;
          v51 = *GameData_212ce98[0];
          if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) <=
                  (unsigned int)(unsigned __int8)(v42 -
                                                  *(_BYTE*)(*GameData_212ce98
                                                                [0] +
                                                            16)) ||
              *(unsigned __int8*)(v51 + 19) <=
                  (unsigned int)(unsigned __int8)(v43 - *(_BYTE*)(v51 + 17)) ||
              ((*(_DWORD*)(*(_QWORD*)(v51 + 160) + (v50 << 7) +
                           4LL * (((char)v42 + 32 * (char)v43) >> 5) + 8) >>
                v42) &
               1) == 0) {
            goto LABEL_156;
          }
        }
        if (v153[8] != 0) {
          result = game_UnitPool_Get(v153 + 8);
          v42 = *v41;
          v43 = v41[1];
          v52 = result;
        }
        else {
          v52 = 0;
        }
        v53 = v42 + 32 * v43;
        v54 = v53 >= 0x400 ? 0LL : v53;
        v55 = *(_QWORD*)(*v20 + 16);
        v56 = *(__int16*)(v55 + 2LL * (unsigned int)v54 + 2152);
        if (v56 < 0 || (v57 = *(_QWORD*)(v55 + 8)) == 0 ||
            ((result =
                  (*(__int64 (**)(__int64))(*(_QWORD*)(v57 + 144LL * (int)v56) +
                                            272LL))(v57 + 144LL * (int)v56)) &
             1) == 0 ||
            v52 == 0 ||
            (v58 = *(
                 _QWORD*)(*(_QWORD*)(*v19 + 64) +
                          8LL *
                              *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98
                                                                  [0] +
                                                              32) +
                                                   2 * v54 + 8))) == 0 ||
            (result = game_Unit_GetJob(v52)) == 0 ||
            *(_BYTE*)(result + 48) == 0 ||
            *(unsigned __int8*)(*(_QWORD*)(v58 + 48) +
                                *(unsigned __int8*)(result + 48) + 32LL) ==
                255) {
          if (v153[8] == 0) {
            goto LABEL_156;
          }
          result = game_UnitPool_Get(v153 + 8);
          v59 = *v41;
          v60 = v41[1];
          v167[0] = 1;
          if (result == 0) {
            goto LABEL_156;
          }
          v61 = result;
          v62 = game_Unit_GetJob(result);
          result = MapUtil_756080(v61, v62, v59, v60, v167);
          if ((result & 1) == 0) {
            goto LABEL_156;
          }
        }
      }
    LABEL_38:
      v41 += 4;
    } while (v41 != (char*)v22);
    v63 = 0;
  LABEL_85:
    ++v163;
    if ((*((_DWORD*)v7 + 10) & 0xFFF) == 0) {
      v65 = *((unsigned __int16*)v7 + 16);
      if (*((_WORD*)v7 + 16) == 0) {
        v65 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v66 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v65);
      v64 = *(_BYTE**)(v66 + 192);
      v67 = *(unsigned __int8*)(v66 + 72);
      v68 = v64 == nullptr || v67 > 7;
      if (v68 || v64[105] == 0 || v64[104] == 2) {
        goto LABEL_97;
      }
    LABEL_87:
      if (v64[250] != 16) {
        goto LABEL_97;
      }
    LABEL_98:
      v18 = v164;
      if (v163 == v151) {
        v163 = v151;
        goto LABEL_156;
      }
      continue;
    }
    break;
  }
  v64 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (*((_DWORD*)v7 + 10) & 0xFFF));
  if (v64 != nullptr) {
    goto LABEL_87;
  }
LABEL_97:
  v69 = (char*)v12;
  if ((v63 & 1) != 0) {
    goto LABEL_98;
  }
  while (1) {
    LODWORD(v70) = *v69 + 32 * v69[1];
    if ((unsigned int)v70 >= 0x400) {
      v70 = 0;
    }
    else {
      v70 = (unsigned int)v70;
    }
    v71 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v70 + 8);
    if (v71 != 0) {
      v72 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v71;
      if (v71 <= 0xFA && v72 != 2224 && *(_QWORD*)(v72 - 1832) != 0 &&
          v7[8] != 0) {
        result = game_UnitPool_Get(v7 + 8);
        if (result != 0) {
          v75 = result;
          result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v7 + 16LL))(v7);
          if ((result & 1) == 0 ||
              ((result = Unit_6c9cf0(v75, v72 - 2224)) & 1) != 0) {
            if (v7[8] == 0) {
              break;
            }
            result = game_UnitPool_Get(v7 + 8);
            if (result == 0) {
              break;
            }
            v76 = *(_QWORD*)(result + 440);
            if (v76 != 0) {
              v77 = *(unsigned __int8*)(v76 + 16);
            }
            else {
              v77 = 9;
            }
            v78 = *(unsigned __int8*)(*(_QWORD*)(v72 - 1784) + 16LL);
            if (v78 != v77) {
              if (*(_BYTE*)(*(_QWORD*)(v72 - 1784) + 16LL) != 0) {
                if (v77 != 0 || v78 != 3) {
                  break;
                }
              }
              else if (v77 != 3) {
                break;
              }
            }
          }
        }
      }
    }
    LODWORD(v79) = *v69 + 32 * v69[1];
    v79 = (unsigned int)v79 >= 0x400 ? 0LL : (unsigned int)v79;
    v80 =
        *(_QWORD*)(*(_QWORD*)(*v19 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2LL * (unsigned int)v79 + 8));
    if ((*(unsigned __int8*)(v80 + 62) | *(unsigned __int8*)(v80 + 63)) != 0 ||
        *(unsigned __int8*)(*(_QWORD*)(v80 + 48) + 40LL) == 255) {
      break;
    }
    v81 = *(_QWORD*)(*v20 + 16);
    v82 = *(__int16*)(v81 + 2 * v79 + 104);
    if (v82 < 0 || (v83 = *(_QWORD*)(v81 + 8)) == 0 ||
        (v84 = v83 + 144LL * (unsigned int)v82,
         (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v84 + 40LL))(v84) != 2) ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84) & 1) == 0 ||
        (result = (*(__int64 (**)(__int64))(*(_QWORD*)v84 + 224LL))(v84)) ==
            0) {
      result = **(_QWORD**)(*v19 + 64);
    }
    if ((*(unsigned __int8*)(result + 62) | *(unsigned __int8*)(result + 63)) !=
            0 ||
        *(unsigned __int8*)(*(_QWORD*)(result + 48) + 40LL) == 255) {
      break;
    }
    v85 = *v69;
    v86 = v69[1];
    v87 = *v20;
    if (v7[8] != 0 && (v88 = game_UnitPool_Get(v7 + 8)) != 0 &&
        (v89 = *(_QWORD*)(v88 + 440)) != 0) {
      v90 = *(unsigned __int8*)(v89 + 16);
    }
    else {
      v90 = 9;
    }
    v91 = *(_QWORD*)(v87 + 16);
    v92 = v85 + 32 * v86;
    if (v92 >= 0x400) {
      v92 = 0;
    }
    v93 = *(__int16*)(v91 + 2LL * v92 + 12392);
    v19 = GameData_212c930;
    if (v93 < 0 || (v94 = *(_QWORD*)(v91 + 8)) == 0 ||
        (v95 = v94 + 144LL * (unsigned int)v93,
         ((*(__int64 (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95) & 1) == 0) ||
        v90 == (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v95 + 168LL))(v95) ||
        (result = (*(__int64 (**)(__int64))(*(_QWORD*)v95 + 224LL))(v95)) ==
            0) {
      result = **(_QWORD**)(*v19 + 64);
    }
    v20 = GameData_212cfb8[0];
    if (*(_BYTE*)(result + 57) == 14) {
      break;
    }
    v69 += 4;
    if (v69 == (char*)v22) {
      goto LABEL_98;
    }
  }
LABEL_156:
  v96 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a5 & 0xFFF));
  if (v96 != 0) {
    v97 = v164;
    if (*(_BYTE*)(v96 + 250) == 16) {
      if (v163 < 1 || v164 < 1) {
        goto LABEL_256;
      }
      v154 = v7;
    LABEL_161:
      v98 = v13;
      v99 = v12;
      v100 = v163 - v97;
      v152 = v163--;
      do {
        v161 = v100;
        if ((v100 & 0x80000000) == 0) {
          v101 = 0;
          v102 = (_BYTE*)v12;
          v103 = v159 + v100 * v157;
          v104 = v158 + v100 * v156;
          do {
            if (v166 != 0) {
              v105 = 0;
            }
            else {
              v105 = v101;
            }
            v106 = v103 + v105;
            if (v165 != 0) {
              v107 = 0;
            }
            else {
              v107 = v101;
            }
            v108 = v104 + v107;
            if (v99 < v98) {
              *(_BYTE*)v99 = v106;
              *(_BYTE*)(v99 + 1) = v108;
              v12 = (__int64)v102;
              *(_WORD*)(v99 + 2) = 0;
              v99 += 4LL;
            }
            else {
              v109 = v99 - (_QWORD)v102;
              v110 = (__int64)(v99 - (_QWORD)v102) >> 2;
              v111 = v110 + 1;
              if ((unsigned __int64)(v110 + 1) >> 62 != 0) {
                goto LABEL_262;
              }
              if ((__int64)(v98 - (_QWORD)v102) >> 1 > v111) {
                v111 = (__int64)(v98 - (_QWORD)v102) >> 1;
              }
              if (v98 - (unsigned __int64)v102 >= 0x7FFFFFFFFFFFFFFCLL) {
                v112 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v112 = v111;
              }
              if (v112 >> 62 != 0) {
                goto LABEL_263;
              }
              result = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v112, 16, 0);
              v113 = result + v109;
              *(_BYTE*)(v113 + 1) = v108;
              v12 = result + v109 - 4 * v110;
              *(_BYTE*)v113 = v106;
              *(_WORD*)(v113 + 2) = 0;
              if (v102 != (_BYTE*)v99) {
                v114 = v102;
                v115 = (_BYTE*)(result + v109 - 4 * v110);
                do {
                  *v115 = *v114;
                  v115[1] = v114[1];
                  v115[2] = v114[2];
                  v116 = v114[3];
                  v114 += 4;
                  v115[3] = v116;
                  v115 += 4;
                } while (v114 != (_BYTE*)v99);
              }
              v98 = result + 4 * v112;
              v99 = v113 + 4;
              if (v102 != nullptr) {
                v117 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v117 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v117, v102);
              }
              v97 = v164;
            }
            ++v101;
            v102 = (_BYTE*)v12;
          } while (v101 != v97);
        }
        v100 = v161 + 1;
      } while (v161 != v163);
      if (v12 != v99) {
        v118 = (char*)v12;
        v13 = v98;
        while (1) {
          LODWORD(v119) = *v118 + 32 * v118[1];
          if ((unsigned int)v119 >= 0x400) {
            v119 = 0;
          }
          else {
            v119 = (unsigned int)v119;
          }
          v120 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                     v119 + 8);
          if (v120 != 0) {
            v121 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v120;
            if (v120 <= 0xFA && v121 != 2224 && *(_QWORD*)(v121 - 1832) != 0 &&
                v154[8] != 0) {
              result = game_UnitPool_Get(v154 + 8);
              if (result != 0) {
                v124 = result;
                result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v154 + 16LL))(v154);
                if ((result & 1) == 0 ||
                    ((result = Unit_6c9cf0(v124, v121 - 2224)) & 1) != 0) {
                  if (*(int*)(v121 - 1632) > 1) {
                    goto LABEL_219;
                  }
                  if (v154[8] != 0) {
                    result = game_UnitPool_Get(v154 + 8);
                    if (result != 0) {
                      v125 = *(_QWORD*)(result + 440);
                      if (v125 != 0) {
                        v126 = *(unsigned __int8*)(v125 + 16);
                      }
                      else {
                        v126 = 9;
                      }
                      v127 =
                          *(unsigned __int8*)(*(_QWORD*)(v121 - 1784) + 16LL);
                      if (v127 == v126) {
                      LABEL_219:
                        v97 = v164;
                        if (v152 <= 1) {
                          goto LABEL_256;
                        }
                        goto LABEL_161;
                      }
                      if (*(_BYTE*)(*(_QWORD*)(v121 - 1784) + 16LL) != 0) {
                        if (v126 == 0 && v127 == 3) {
                          goto LABEL_219;
                        }
                      }
                      else if (v126 == 3) {
                        goto LABEL_219;
                      }
                    }
                  }
                  result = GameRoutine_7536a0(v121 - 2224);
                  if ((result & 1) == 0) {
                    goto LABEL_219;
                  }
                }
              }
            }
          }
          v118 += 4;
          if (v118 == (char*)v99) {
            v163 = v152;
            goto LABEL_222;
          }
        }
      }
      v13 = v98;
      v163 = v152;
    }
  }
  else {
  LABEL_222:
    v97 = v164;
  }
  if (v163 >= 1 && v97 >= 1) {
    v128 = 0;
    do {
      v129 = 0;
      v130 = v12;
      v131 = v159 + v128 * v157;
      v162 = v128;
      v132 = v158 + v128 * v156;
      do {
        if (v166 != 0) {
          v133 = 0;
        }
        else {
          v133 = v129;
        }
        v134 = v131 + v133;
        if (v165 != 0) {
          v135 = 0;
        }
        else {
          v135 = v129;
        }
        v136 = v132 + v135;
        if (v130 < v13) {
          *(_BYTE*)v130 = v134;
          *(_BYTE*)(v130 + 1) = v136;
          *(_WORD*)(v130 + 2) = 0;
          v130 += 4LL;
        }
        else {
          v137 = v130 - v12;
          v138 = (__int64)(v130 - v12) >> 2;
          v139 = v138 + 1;
          if ((unsigned __int64)(v138 + 1) >> 62 != 0) {
            goto LABEL_262;
          }
          if ((__int64)(v13 - v12) >> 1 > v139) {
            v139 = (__int64)(v13 - v12) >> 1;
          }
          if (v13 - v12 >= 0x7FFFFFFFFFFFFFFCLL) {
            v140 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v140 = v139;
          }
          if (v140 >> 62 != 0) {
            goto LABEL_263;
          }
          result = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v140, 16, 0);
          v141 = result + v137;
          *(_BYTE*)v141 = v134;
          v142 = result + v137 - 4 * v138;
          *(_BYTE*)(v141 + 1) = v136;
          *(_WORD*)(v141 + 2) = 0;
          if (v12 != v130) {
            v143 = (_BYTE*)v12;
            v144 = (_BYTE*)(result + v137 - 4 * v138);
            do {
              *v144 = *v143;
              v144[1] = v143[1];
              v144[2] = v143[2];
              v145 = v143[3];
              v143 += 4;
              v144[3] = v145;
              v144 += 4;
            } while (v143 != (_BYTE*)v130);
          }
          v13 = result + 4 * v140;
          v130 = v141 + 4;
          if (v12 != 0) {
            v146 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v146 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v146, v12);
          }
          v97 = v164;
          v12 = v142;
        }
        ++v129;
      } while (v129 != v97);
      v147 = (char*)v12;
      if (v12 != v130) {
        do {
          v148 = *v147;
          v149 = *(_QWORD*)(a6 + 32);
          v168 = v147[1];
          v169 = v148;
          if (v149 == 0) {
            GameRoutine_60a310(0, a2, a3, a4);
          }
          result = (*(__int64 (**)(__int64, int*, int*))(
              *(_QWORD*)v149 + 48LL))(v149, &v169, &v168);
          v147 += 4;
        } while (v147 != (char*)v130);
      }
      v97 = v164;
      v128 = v162 + 1;
    } while (v162 + 1 != v163);
  }
LABEL_256:
  if (v12 != 0) {
    v150 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v150 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v150, v12);
  }
  return result;
}

__int64 game_map_ITarget_EachSelectable(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4)
{
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v16 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v16 != 0) {
    LABEL_3:
      v14[2] = a2;
      v14[3] = a1;
      v14[0] = GameData_1f97d10;
      v14[1] = &v16;
      goto LABEL_13;
    }
  }
  else {
    v4 = *(unsigned __int16*)(a1 + 32);
    if (*(_WORD*)(a1 + 32) == 0) {
      v4 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v4);
    v6 = *(_QWORD*)(v5 + 192);
    v7 = *(unsigned __int8*)(v5 + 72);
    v8 = v6 == 0 || v7 > 7;
    if (!v8 && *(_BYTE*)(v6 + 105) != 0 && *(_BYTE*)(v6 + 104) != 2) {
      v16 = v6;
      goto LABEL_3;
    }
  }
  v14[0] = GameData_1f97d90;
  v14[1] = a2;
LABEL_13:
  v15 = v14;
  GameRoutine_777700(a1, v14, a3, a4);
  result = (__int64)v15;
  if (v15 == v14) {
    v13 = 32;
  }
  else {
    if (v15 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(*v15 + v13))(
      v15, v9, v10, v11);
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *result = GameData_1f97b10;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
      result = v5;
    }
    else {
      v6 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(v4,
                                                                         a1[8]);
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  v7 = a1[11];
  result[10] = a1[10];
  result[11] = v7;
  result[12] = a1[12];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda0_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;

  *a2 = GameData_1f97b10;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[11] = a1[11];
  v6 = a1[10];
  a2[12] = a1[12];
  a2[10] = v6;
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda0_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  char v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  int v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v23;
  unsigned int v24;
  int v25;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 result;
  int v32;
  char v33;
  char v34;
  char v35;
  __int16 v36;
  char v37;
  __int16 v38;
  int v39;
  struct {
    _BYTE v40[4];
    char v41;
  } v40_;
  struct {
    char gap24_[1];
    char v42;
    __int16 v43;
  } v42_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  v4 = *a3;
  v6 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  if (v5 != 0) {
    LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
  }
  v32 = v5;
  TargetEnumerator_77c150_alt1((__int64)v40_.v40, (__int64*)v6, v3, v4),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v42_.v42 != 0) {
    v8 = game_UnitPool_Get_alt2(&v42_.v42),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v8 = nullptr;
  }
  if ((TargetEnumerator_77e300(v6, &v32, v8) & 1) != 0) {
    v9 = v40_.v41 | 4;
  LABEL_8:
    v40_.v41 = v9;
    goto LABEL_9;
  }
  if ((v42_.v43 & 0x8000000000000000LL) != 0) {
    goto LABEL_41;
  }
  v12 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
  if (v12 == 0) {
    goto LABEL_41;
  }
  v13 = v12 + 144LL * v42_.v43;
  if ((MapUtil_753bb0(v13) & 1) == 0) {
    goto LABEL_41;
  }
  v14 = GameData_212c880[0];
  v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v32 & 0xFFF));
  if (v15 != 0) {
    v16 = *(unsigned __int8*)(v15 + 250);
    if ((unsigned int)v16 > 0x25) {
      goto LABEL_41;
    }
    if (((1LL << v16) & 0x6018181) == 0) {
      if (v16 != 37 ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 272LL))(v13) & 1) == 0) {
        goto LABEL_41;
      }
      goto LABEL_36;
    }
  }
  v18 = *(unsigned __int8*)(v6 + 8);
  v17 = (_BYTE*)(v6 + 8);
  if (v18 != 0) {
    v19 = game_UnitPool_Get_alt2(v17),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v19 = nullptr;
  }
  if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v13 + 280LL))(v13, v19) &
       1) == 0 ||
      (v20 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8LL * (v32 & 0xFFF)),
       (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v20 + 104)) & 1) ==
           0)) {
  LABEL_35:
    if (((*(__int64 (**)(__int64, int*))(*(_QWORD*)v13 + 296LL))(v13, &v32) &
         1) != 0) {
      goto LABEL_36;
    }
  LABEL_41:
    v30 = *(__int64**)(a1 + 64);
    v33 = 0;
    v39 = 0;
    v37 = 0;
    v34 = v3;
    v35 = v4;
    v38 = -1;
    v36 = 1033;
    if (v30 != nullptr) {
      v11 = *v30;
      goto LABEL_43;
    }
  LABEL_44:
    GameRoutine_60a310_alt2(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v21 = *(unsigned __int8*)(v20 + 106);
  if (*(_BYTE*)(v20 + 106) == 0 || v21 == 6) {
    v23 = *(_QWORD*)(v20 + 576);
    if (v23 == 0) {
      goto LABEL_35;
    }
  }
  else {
    if (v21 != 1) {
      goto LABEL_35;
    }
    v23 = *(_QWORD*)(v20 + 576);
    if (v23 == 0) {
      goto LABEL_36;
    }
  }
  v24 = *(unsigned __int8*)(v23 + 72);
  v25 = *(unsigned __int8*)(v23 + 73);
  if (v24 > 7 || v25 != 1) {
    goto LABEL_35;
  }
LABEL_36:
  v27 = v40_.v41;
  v28 = *(_QWORD*)(*v14 + 64);
  v40_.v41 |= 4u;
  v29 = *(_QWORD*)(v28 + 8LL * (v32 & 0xFFF));
  if (v29 != 0 && (unsigned int)*(unsigned __int8*)(v29 + 250) - 15 <= 1) {
    v9 = v27 | 5;
    goto LABEL_8;
  }
LABEL_9:
  v10 = *(__int64**)(a1 + 64);
  if (v10 == nullptr) {
    goto LABEL_44;
  }
  v11 = *v10;
LABEL_43:
  result = (*(__int64 (**)(__int64))(v11 + 48))((__int64)v10),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  **(_DWORD**)(a1 + 80) = v3;
  **(_DWORD**)(a1 + 88) = v4;
  **(_BYTE**)(a1 + 96) = 1;
  return result;
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda1_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_1f97b90;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
      result = v5;
    }
    else {
      v6 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(v4,
                                                                         a1[8]);
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  result[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda1_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  *a2 = GameData_1f97b90;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda1_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64* v8;
  char v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 result;
  struct {
    char gap8_[3];
    char v15[5];
    int v16;
  } v15_;
  struct {
    _BYTE v17[4];
    char v18;
  } v17_;
  _BYTE v19[7];
  int v20;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  v4 = *a3;
  v6 = *(__int64**)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  if (v5 != 0) {
    LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
  }
  v20 = v5;
  TargetEnumerator_77c150_alt1((__int64)v17_.v17, v6, v3, v4),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v19[0] != 0) {
    v8 = game_UnitPool_Get_alt2(v19),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v8 = nullptr;
  }
  if ((TargetEnumerator_77e300((__int64)v6, &v20, v8) & 1) == 0) {
    v13 = *(__int64**)(a1 + 64);
    v15_.v16 = 0;
    *(_WORD*)&v15_.v15[3] = -1;
    strcpy(v15_.v15, "\t\b");
    if (v13 != nullptr) {
      v12 = *v13;
      goto LABEL_14;
    }
  LABEL_15:
    GameRoutine_60a310_alt2(),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v9 = v17_.v18;
  v17_.v18 |= 8u;
  v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v20 & 0xFFF));
  if (v10 != 0 && (unsigned int)*(unsigned __int8*)(v10 + 250) - 15 <= 1) {
    v17_.v18 = v9 | 9;
  }
  v11 = *(__int64**)(a1 + 64);
  if (v11 == nullptr) {
    goto LABEL_15;
  }
  v12 = *v11;
LABEL_14:
  result = (*(__int64 (**)(__int64))(v12 + 48))((__int64)v11),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  **(_BYTE**)(a1 + 80) = 1;
  return result;
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda2_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_1f97c10;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
      result = v5;
    }
    else {
      v6 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(v4,
                                                                         a1[8]);
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  result[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda2_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  *a2 = GameData_1f97c10;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda2_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  int v10;

  v5 = *a2;
  v6 = *a3;
  v7 = *(_QWORD*)(a1 + 16);
  v8 = *(_QWORD*)(a1 + 24);
  if (v8 != 0) {
    LODWORD(v8) = *(_WORD*)(v8 + 16) & 0xFFF;
  }
  v10 = v8;
  result = GameRoutine_7807a0(v7, &v10, v5, v6, a1 + 32);
  **(_BYTE**)(a1 + 80) |= result & 1;
  return result;
}

__int64 game_map_ITarget_EachSelectable_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;

  v4 = **(_QWORD**)(a1 + 8);
  if (*(_BYTE*)(v4 + 106) == 3) {
    result = MapUtil_753570(*(char*)(a2 + 1), *(char*)(a2 + 2));
    if ((result & 1) == 0) {
      return result;
    }
    goto LABEL_3;
  }
  v10 = *(_QWORD*)(a1 + 24);
  v12 = *(unsigned __int8*)(v10 + 8);
  v11 = v10 + 8;
  if (v12 != 0) {
    v13 = game_UnitPool_Get(v11);
    v4 = **(_QWORD**)(a1 + 8);
  }
  else {
    v13 = 0;
  }
  result = GameRoutine_844d10(a2, v13, v4);
  if ((result & 1) != 0) {
  LABEL_3:
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
    if (v9 == 0) {
      GameRoutine_60a310(0, v6, v7, v8);
    }
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v9 + 48LL))(v9, a2);
  }
  return result;
}

__int64 game_map_ITarget_EachSelectable_lambda1_Invoke(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = MapUtil_753570(*(char*)(a2 + 1), *(char*)(a2 + 2));
  if ((result & 1) != 0) {
    if ((result = a2 + 5, *(_BYTE*)(a2 + 5) != 0) &&
            (result = game_UnitPool_Get(result)) != 0 &&
            *(_QWORD*)(result + 392) != 0 ||
        (*(__int16*)(a2 + 6) & 0x8000000000000000LL) == 0 &&
            (v8 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL)) != 0 &&
            ((v9 = v8 + 144LL * *(__int16*)(a2 + 6),
              ((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 272LL))(v9) & 1) !=
                  0) ||
             ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 288LL))(v9)) &
              1) != 0)) {
      v10 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
      if (v10 == 0) {
        GameRoutine_60a310(0, v5, v6, v7);
      }
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v10 + 48LL))(v10, a2);
    }
  }
  return result;
}

__int64 game_map_ITarget_EachTarget_lambda0_Invoke(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

__int64 game_map_ITarget_EachTarget_lambda1_Invoke_7820b0(__int64 a1,
                                                          __int64 a2,
                                                          long double a3)
{
  __int64 (**v3)();
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v3 = *(__int64 (***)())(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v8 = v7;
  v7[0] = GameData_1f97f00;
  v7[1] = v4;
  GameRoutine_775580(v3, a2, v7, a3);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

__int64 game_map_ITarget_EachTarget_lambda1_Invoke_782210(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3,
                                                          __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

#pragma GCC visibility pop
