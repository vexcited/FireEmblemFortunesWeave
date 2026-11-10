#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9db7e0(_QWORD);
__int64 GameRoutine_cecb70(_QWORD);
__int64 GameRoutine_ceecc0(_QWORD, _QWORD);
__int64 GameRoutine_ceede0(float);
__int64 GameRoutine_da21c0(_QWORD, _QWORD);
__int64 GameRoutine_dac2c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dac4e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dac8c0(_QWORD, _QWORD);
__int64 GameRoutine_e18130(_QWORD);
__int64 HubCharacterNatives_cea6b0(_QWORD);
__int64 HubCharacterNatives_ceca80(_QWORD, _QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1a867dc;
extern _UNKNOWN GameData_1ab4e38;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_200a2a8[])();
extern __int64 (*GameData_200a328[])();
extern __int64 (*GameData_200a3a8[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateDamaged_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateDiscovery_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateEncounted_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateEscape_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateLostSight_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StatePatrol_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateRepelled_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateReturn_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateStationary_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateTracking_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_StateWait_vtable[])();
extern __int64 (*game_hub_CharacterControllerEnemy_vtable[])();
extern __int64 GameData_21c9d18;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d00;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ec10[3];
extern __int64* GameData_212f250[3];
struct PseudoSret GameRoutine_e1b4d0(void);
struct PseudoSret GameRoutine_e1bfe0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_e17ef0(_QWORD, _QWORD);
void game_hub_CharacterControllerEnemy_CharacterControllerEnemy(__int64 a1,
                                                                __int64 a2);
float CharacterControllerEnemy_10c6000(__int64 a1);
__int64 CharacterControllerEnemy_10c6220(__int64 a1, unsigned __int8* a2);
__int64 CharacterControllerEnemy_StateReturn_Unknown2(__int64 result);
_QWORD* CharacterControllerEnemy_StateReturn_Unknown3(__int64 a1, double a2,
                                                      double a3);
void CharacterControllerEnemy_StatePatrol_Unknown5(__int64 a1);
__n128
game_hub_CharacterControllerEnemy_CharacterControllerEnemy_lambda0_Invoke(
    __int64 a1, int* a2, __int64* a3);
__int64
game_hub_CharacterControllerEnemy_CharacterControllerEnemy_lambda1_Invoke(
    __int64 a1, _QWORD* a2);
__int64
game_hub_CharacterControllerEnemy_CharacterControllerEnemy_lambda2_Invoke(
    __int64 result, _DWORD* a2);

void game_hub_CharacterControllerEnemy_CharacterControllerEnemy(__int64 a1,
                                                                __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64* v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  __int64* v137;
  __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  unsigned __int64 v149;
  __int64* v150;
  __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  unsigned __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  int v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __n128 v179;
  __int64 v180;
  float v181;
  char v182;
  __int64 v183;
  int v184;
  __int64 v185;
  _QWORD v186[4];
  _QWORD* v187;
  _QWORD v188[4];
  _QWORD* v189;
  _QWORD v190[4];
  _QWORD* v191;
  _QWORD v192[4];
  _QWORD* v193;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 36) = 0;
  *(_BYTE*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 44) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 56) = 0;
  *(_QWORD*)a1 = game_hub_CharacterControllerEnemy_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_BYTE*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 76) = 0;
  *(_BYTE*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 84) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v3 = (__int64*)(a1 + 88);
  v4 = GameData_212f250[0] + 2;
  *(_QWORD*)(a1 + 144) = 0;
  *(_WORD*)(a1 + 160) = 0;
  *(_DWORD*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 180) = 0;
  *(_WORD*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 237) = 0;
  *(_QWORD*)(a1 + 64) = v4;
  v5 = a1 + 64;
  GameRoutine_cecb70(*(_QWORD*)(a2 + 24));
  HubCharacterNatives_ceca80(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), 4, 1);
  v6 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 32LL);
  v190[0] = GameData_200a2a8;
  v190[1] = a1;
  v191 = v190;
  v7 = (_QWORD*)v6[35];
  if ((unsigned __int64)v7 >= v6[36]) {
    v9 = GameRoutine_dac2c0(v6 + 34, v6 + 42, v190);
  }
  else {
    *v7 = v6[42];
    v8 = v191;
    if (v191 != nullptr) {
      if (v191 == v190) {
        v7[6] = v7 + 2;
        (*(void (**)(_QWORD*))(*v8 + 24LL))(v8);
      }
      else {
        v7[6] = (*(__int64 (**)(__int64))(*v191 + 16LL))((__int64)v191);
      }
    }
    else {
      v7[6] = 0;
    }
    v9 = (__int64)(v7 + 8);
  }
  v10 = v6[42];
  v6[35] = v9;
  v11 = v191;
  v6[42] = v10 + 1;
  if (v11 == v190) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_14;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_14:
  v13 = *(_QWORD*)(a1 + 8);
  v188[0] = GameData_200a328;
  v188[1] = a1;
  v192[0] = GameData_200a328;
  v192[1] = a1;
  v14 = *(_QWORD*)(*(_QWORD*)(v13 + 24) + 32LL);
  v189 = v188;
  v193 = v192;
  GameRoutine_dac8c0(v192, v14 + 176);
  if (v193 == v192) {
    v15 = 32;
  }
  else {
    if (v193 == nullptr) {
      goto LABEL_19;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v193 + v15))((__int64)v193);
LABEL_19:
  if (v189 == v188) {
    v16 = 32;
  }
  else {
    if (v189 == nullptr) {
      goto LABEL_24;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v189 + v16))((__int64)v189);
LABEL_24:
  v17 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 32LL);
  v186[0] = GameData_200a3a8;
  v186[1] = a1;
  v187 = v186;
  v18 = (_QWORD*)v17[38];
  if ((unsigned __int64)v18 >= v17[39]) {
    v21 = GameRoutine_dac4e0(v17 + 37, v17 + 43, v186);
  }
  else {
    *v18 = v17[43];
    v19 = v18 + 2;
    v20 = v187;
    if (v187 != nullptr) {
      if (v187 == v186) {
        v18[6] = v19;
        (*(void (**)(_QWORD*))(*v20 + 24LL))(v20);
      }
      else {
        v18[6] = (*(__int64 (**)(_QWORD*, _QWORD*))(*v187 + 16LL))(v187, v19);
      }
    }
    else {
      v18[6] = 0;
    }
    v21 = (__int64)(v18 + 8);
  }
  v22 = v17[43];
  v17[38] = v21;
  v23 = v187;
  v17[43] = v22 + 1;
  if (v23 == v186) {
    v24 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_37;
    }
    v24 = 40;
  }
  (*(void (**)(_QWORD*, _QWORD*))(*v23 + v24))(v23, v19);
LABEL_37:
  v25 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  LODWORD(v192[0]) = 3;
  GameRoutine_ceecc0(v25 + 344, v192);
  HubCharacterNatives_cea6b0(v25);
  v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 8LL) +
                   328LL);
  *(_DWORD*)(v26 + 372) = 1056964608;
  *(_BYTE*)(v26 + 369) = 1;
  v27 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v28 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16, 16, 0);
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateWait_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v31 = *(__int64**)(a1 + 96);
  v30 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v31 >= v30) {
    v33 = *v3;
    v34 = (__int64)v31 - *v3;
    v35 = (v34 >> 3) + 1;
    if (v35 >> 61 != 0) {
      goto LABEL_235;
    }
    v36 = v30 - v33;
    if (v36 >> 2 > v35) {
      v35 = v36 >> 2;
    }
    if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
      v37 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v37 = v35;
    }
    if (v37 != 0) {
      if (v37 >> 61 != 0) {
        goto LABEL_236;
      }
      v38 = v28;
      v39 = fw_memory_HeapManager_Allocate(*v27, 8 * v37, 16, 0);
      v28 = v38;
    }
    else {
      v39 = 0;
    }
    v40 = v39 + 8 * v37;
    v41 = v39 + v34 - 8 * (v34 >> 3);
    *(_QWORD*)(v39 + v34) = v28;
    v32 = (__int64*)(v39 + v34 + 8);
    memcpy(v41, v33, v34);
    *(_QWORD*)(a1 + 88) = v41;
    *(_QWORD*)(a1 + 96) = v32;
    *(_QWORD*)(a1 + 104) = v40;
    if (v33 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v42);
    }
  }
  else {
    *v31 = v28;
    v32 = v31 + 1;
  }
  v43 = *v27;
  *(_QWORD*)(a1 + 96) = v32;
  v28 = fw_memory_HeapManager_Allocate(v43, 24, 16, 0);
  *(_BYTE*)(v28 + 16) = 0;
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateReturn_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v44 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v32 >= v44) {
    v46 = *v3;
    v47 = (__int64)v32 - *v3;
    v48 = (v47 >> 3) + 1;
    if (v48 >> 61 != 0) {
      goto LABEL_235;
    }
    v49 = v44 - v46;
    if (v49 >> 2 > v48) {
      v48 = v49 >> 2;
    }
    if ((unsigned __int64)v49 >= 0x7FFFFFFFFFFFFFF8LL) {
      v50 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v50 = v48;
    }
    if (v50 != 0) {
      if (v50 >> 61 != 0) {
        goto LABEL_236;
      }
      v51 = v28;
      v52 = fw_memory_HeapManager_Allocate(*v27, 8 * v50, 16, 0);
      v28 = v51;
    }
    else {
      v52 = 0;
    }
    v53 = v52 + 8 * v50;
    v54 = v52 + v47 - 8 * (v47 >> 3);
    *(_QWORD*)(v52 + v47) = v28;
    v45 = (__int64*)(v52 + v47 + 8);
    memcpy(v54, v46, v47);
    *(_QWORD*)(a1 + 88) = v54;
    *(_QWORD*)(a1 + 96) = v45;
    *(_QWORD*)(a1 + 104) = v53;
    if (v46 != 0) {
      v55 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v55);
    }
  }
  else {
    *v32 = v28;
    v45 = v32 + 1;
  }
  v56 = *v27;
  *(_QWORD*)(a1 + 96) = v45;
  v28 = fw_memory_HeapManager_Allocate(v56, 16, 16, 0);
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StatePatrol_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v57 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v45 >= v57) {
    v59 = *v3;
    v60 = (__int64)v45 - *v3;
    v61 = (v60 >> 3) + 1;
    if (v61 >> 61 != 0) {
      goto LABEL_235;
    }
    v62 = v57 - v59;
    if (v62 >> 2 > v61) {
      v61 = v62 >> 2;
    }
    if ((unsigned __int64)v62 >= 0x7FFFFFFFFFFFFFF8LL) {
      v63 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v63 = v61;
    }
    if (v63 != 0) {
      if (v63 >> 61 != 0) {
        goto LABEL_236;
      }
      v64 = v28;
      v65 = fw_memory_HeapManager_Allocate(*v27, 8 * v63, 16, 0);
      v28 = v64;
    }
    else {
      v65 = 0;
    }
    v66 = v65 + 8 * v63;
    v67 = v65 + v60 - 8 * (v60 >> 3);
    *(_QWORD*)(v65 + v60) = v28;
    v58 = (__int64*)(v65 + v60 + 8);
    memcpy(v67, v59, v60);
    *(_QWORD*)(a1 + 88) = v67;
    *(_QWORD*)(a1 + 96) = v58;
    *(_QWORD*)(a1 + 104) = v66;
    if (v59 != 0) {
      v68 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v68);
    }
  }
  else {
    *v45 = v28;
    v58 = v45 + 1;
  }
  v69 = *v27;
  *(_QWORD*)(a1 + 96) = v58;
  v28 = fw_memory_HeapManager_Allocate(v69, 40, 16, 0);
  *(_QWORD*)(v28 + 16) = 0;
  *(_QWORD*)(v28 + 24) = 0;
  *(_WORD*)(v28 + 32) = 0;
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateDiscovery_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v70 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v58 >= v70) {
    v72 = *v3;
    v73 = (__int64)v58 - *v3;
    v74 = (v73 >> 3) + 1;
    if (v74 >> 61 != 0) {
      goto LABEL_235;
    }
    v75 = v70 - v72;
    if (v75 >> 2 > v74) {
      v74 = v75 >> 2;
    }
    if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFF8LL) {
      v76 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v76 = v74;
    }
    if (v76 != 0) {
      if (v76 >> 61 != 0) {
        goto LABEL_236;
      }
      v77 = v28;
      v78 = fw_memory_HeapManager_Allocate(*v27, 8 * v76, 16, 0);
      v28 = v77;
    }
    else {
      v78 = 0;
    }
    v79 = v78 + 8 * v76;
    v80 = v78 + v73 - 8 * (v73 >> 3);
    *(_QWORD*)(v78 + v73) = v28;
    v71 = v78 + v73 + 8;
    memcpy(v80, v72, v73);
    *(_QWORD*)(a1 + 88) = v80;
    *(_QWORD*)(a1 + 96) = v71;
    *(_QWORD*)(a1 + 104) = v79;
    if (v72 != 0) {
      v81 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v81);
    }
  }
  else {
    *v58 = v28;
    v71 = (__int64)(v58 + 1);
  }
  v82 = *v27;
  *(_QWORD*)(a1 + 96) = v71;
  v28 = fw_memory_HeapManager_Allocate(v82, 48, 16, 0);
  *(_QWORD*)(v28 + 16) = 0;
  *(_DWORD*)(v28 + 24) = 0;
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateTracking_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v183 = v28;
    v184 = __cxa_guard_acquire(&GameData_21a6130);
    v28 = v183;
    if (v184 != 0) {
      v185 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v185;
      __cxa_guard_release(&GameData_21a6130);
      v28 = v183;
    }
  }
  *(_OWORD*)(v28 + 32) = GameData_21a6120;
  v84 = *(__int64**)(a1 + 96);
  v83 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v84 >= v83) {
    v86 = *v3;
    v87 = (__int64)v84 - *v3;
    v88 = (v87 >> 3) + 1;
    if (v88 >> 61 != 0) {
      goto LABEL_235;
    }
    v89 = v83 - v86;
    if (v89 >> 2 > v88) {
      v88 = v89 >> 2;
    }
    if ((unsigned __int64)v89 >= 0x7FFFFFFFFFFFFFF8LL) {
      v90 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v90 = v88;
    }
    if (v90 != 0) {
      if (v90 >> 61 != 0) {
        goto LABEL_236;
      }
      v91 = v28;
      v92 = fw_memory_HeapManager_Allocate(*v27, 8 * v90, 16, 0);
      v28 = v91;
    }
    else {
      v92 = 0;
    }
    v93 = v92 + 8 * v90;
    v94 = v92 + v87 - 8 * (v87 >> 3);
    *(_QWORD*)(v92 + v87) = v28;
    v85 = (__int64*)(v92 + v87 + 8);
    memcpy(v94, v86, v87);
    *(_QWORD*)(a1 + 88) = v94;
    *(_QWORD*)(a1 + 96) = v85;
    *(_QWORD*)(a1 + 104) = v93;
    if (v86 != 0) {
      v95 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v95 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v95);
    }
  }
  else {
    *v84 = v28;
    v85 = v84 + 1;
  }
  v96 = *v27;
  *(_QWORD*)(a1 + 96) = v85;
  v28 = fw_memory_HeapManager_Allocate(v96, 16, 16, 0);
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateEscape_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v97 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v85 >= v97) {
    v99 = *v3;
    v100 = (__int64)v85 - *v3;
    v101 = (v100 >> 3) + 1;
    if (v101 >> 61 != 0) {
      goto LABEL_235;
    }
    v102 = v97 - v99;
    if (v102 >> 2 > v101) {
      v101 = v102 >> 2;
    }
    if ((unsigned __int64)v102 >= 0x7FFFFFFFFFFFFFF8LL) {
      v103 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v103 = v101;
    }
    if (v103 != 0) {
      if (v103 >> 61 != 0) {
        goto LABEL_236;
      }
      v104 = v28;
      v105 = fw_memory_HeapManager_Allocate(*v27, 8 * v103, 16, 0);
      v28 = v104;
    }
    else {
      v105 = 0;
    }
    v106 = v105 + 8 * v103;
    v107 = v105 + v100 - 8 * (v100 >> 3);
    *(_QWORD*)(v105 + v100) = v28;
    v98 = (__int64*)(v105 + v100 + 8);
    memcpy(v107, v99, v100);
    *(_QWORD*)(a1 + 88) = v107;
    *(_QWORD*)(a1 + 96) = v98;
    *(_QWORD*)(a1 + 104) = v106;
    if (v99 != 0) {
      v108 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v108 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v108);
    }
  }
  else {
    *v85 = v28;
    v98 = v85 + 1;
  }
  v109 = *v27;
  *(_QWORD*)(a1 + 96) = v98;
  v28 = fw_memory_HeapManager_Allocate(v109, 24, 16, 0);
  *(_QWORD*)(v28 + 16) = 0;
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateStationary_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v110 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v98 >= v110) {
    v112 = *v3;
    v113 = (__int64)v98 - *v3;
    v114 = (v113 >> 3) + 1;
    if (v114 >> 61 != 0) {
      goto LABEL_235;
    }
    v115 = v110 - v112;
    if (v115 >> 2 > v114) {
      v114 = v115 >> 2;
    }
    if ((unsigned __int64)v115 >= 0x7FFFFFFFFFFFFFF8LL) {
      v116 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v116 = v114;
    }
    if (v116 != 0) {
      if (v116 >> 61 != 0) {
        goto LABEL_236;
      }
      v117 = v28;
      v118 = fw_memory_HeapManager_Allocate(*v27, 8 * v116, 16, 0);
      v28 = v117;
    }
    else {
      v118 = 0;
    }
    v119 = v118 + 8 * v116;
    v120 = v118 + v113 - 8 * (v113 >> 3);
    *(_QWORD*)(v118 + v113) = v28;
    v111 = (__int64*)(v118 + v113 + 8);
    memcpy(v120, v112, v113);
    *(_QWORD*)(a1 + 88) = v120;
    *(_QWORD*)(a1 + 96) = v111;
    *(_QWORD*)(a1 + 104) = v119;
    if (v112 != 0) {
      v121 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v121 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v121);
    }
  }
  else {
    *v98 = v28;
    v111 = v98 + 1;
  }
  v122 = *v27;
  *(_QWORD*)(a1 + 96) = v111;
  v28 = fw_memory_HeapManager_Allocate(v122, 24, 16, 0);
  *(_DWORD*)(v28 + 16) = 0;
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateLostSight_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v123 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v111 >= v123) {
    v125 = *v3;
    v126 = (__int64)v111 - *v3;
    v127 = (v126 >> 3) + 1;
    if (v127 >> 61 != 0) {
      goto LABEL_235;
    }
    v128 = v123 - v125;
    if (v128 >> 2 > v127) {
      v127 = v128 >> 2;
    }
    if ((unsigned __int64)v128 >= 0x7FFFFFFFFFFFFFF8LL) {
      v129 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v129 = v127;
    }
    if (v129 != 0) {
      if (v129 >> 61 != 0) {
        goto LABEL_236;
      }
      v130 = v28;
      v131 = fw_memory_HeapManager_Allocate(*v27, 8 * v129, 16, 0);
      v28 = v130;
    }
    else {
      v131 = 0;
    }
    v132 = v131 + 8 * v129;
    v133 = v131 + v126 - 8 * (v126 >> 3);
    *(_QWORD*)(v131 + v126) = v28;
    v124 = (__int64*)(v131 + v126 + 8);
    memcpy(v133, v125, v126);
    *(_QWORD*)(a1 + 88) = v133;
    *(_QWORD*)(a1 + 96) = v124;
    *(_QWORD*)(a1 + 104) = v132;
    if (v125 != 0) {
      v134 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v134 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v134);
    }
  }
  else {
    *v111 = v28;
    v124 = v111 + 1;
  }
  v135 = *v27;
  *(_QWORD*)(a1 + 96) = v124;
  v28 = fw_memory_HeapManager_Allocate(v135, 16, 16, 0);
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateDamaged_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v136 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v124 >= v136) {
    v138 = *v3;
    v139 = (__int64)v124 - *v3;
    v140 = (v139 >> 3) + 1;
    if (v140 >> 61 != 0) {
      goto LABEL_235;
    }
    v141 = v136 - v138;
    if (v141 >> 2 > v140) {
      v140 = v141 >> 2;
    }
    if ((unsigned __int64)v141 >= 0x7FFFFFFFFFFFFFF8LL) {
      v142 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v142 = v140;
    }
    if (v142 != 0) {
      if (v142 >> 61 != 0) {
        goto LABEL_236;
      }
      v143 = v28;
      v144 = fw_memory_HeapManager_Allocate(*v27, 8 * v142, 16, 0);
      v28 = v143;
    }
    else {
      v144 = 0;
    }
    v145 = v144 + 8 * v142;
    v146 = v144 + v139 - 8 * (v139 >> 3);
    *(_QWORD*)(v144 + v139) = v28;
    v137 = (__int64*)(v144 + v139 + 8);
    memcpy(v146, v138, v139);
    *(_QWORD*)(a1 + 88) = v146;
    *(_QWORD*)(a1 + 96) = v137;
    *(_QWORD*)(a1 + 104) = v145;
    if (v138 != 0) {
      v147 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v147 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v147);
    }
  }
  else {
    *v124 = v28;
    v137 = v124 + 1;
  }
  v148 = *v27;
  *(_QWORD*)(a1 + 96) = v137;
  v28 = fw_memory_HeapManager_Allocate(v148, 16, 16, 0);
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateEncounted_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v149 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v137 >= v149) {
    v151 = *v3;
    v152 = (__int64)v137 - *v3;
    v153 = (v152 >> 3) + 1;
    if (v153 >> 61 != 0) {
      goto LABEL_235;
    }
    v154 = v149 - v151;
    if (v154 >> 2 > v153) {
      v153 = v154 >> 2;
    }
    if ((unsigned __int64)v154 >= 0x7FFFFFFFFFFFFFF8LL) {
      v155 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v155 = v153;
    }
    if (v155 != 0) {
      if (v155 >> 61 != 0) {
        goto LABEL_236;
      }
      v156 = v28;
      v157 = fw_memory_HeapManager_Allocate(*v27, 8 * v155, 16, 0);
      v28 = v156;
    }
    else {
      v157 = 0;
    }
    v158 = v157 + 8 * v155;
    v159 = v157 + v152 - 8 * (v152 >> 3);
    *(_QWORD*)(v157 + v152) = v28;
    v150 = (__int64*)(v157 + v152 + 8);
    memcpy(v159, v151, v152);
    *(_QWORD*)(a1 + 88) = v159;
    *(_QWORD*)(a1 + 96) = v150;
    *(_QWORD*)(a1 + 104) = v158;
    if (v151 != 0) {
      v160 = 128;
      if (*(_QWORD*)(*v27 + 200LL) == 0) {
        v160 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v160);
    }
  }
  else {
    *v137 = v28;
    v150 = v137 + 1;
  }
  v161 = *v27;
  *(_QWORD*)(a1 + 96) = v150;
  v28 = fw_memory_HeapManager_Allocate(v161, 16, 16, 0);
  *(_QWORD*)v28 = game_hub_CharacterControllerEnemy_StateRepelled_vtable;
  *(_QWORD*)(v28 + 8) = a1;
  v162 = *(_QWORD*)(a1 + 104);
  if ((unsigned __int64)v150 < v162) {
    *v150 = v28;
    v163 = (__int64)(v150 + 1);
    goto LABEL_214;
  }
  v164 = *v3;
  v165 = (__int64)v150 - *v3;
  v166 = (v165 >> 3) + 1;
  if (v166 >> 61 != 0) {
  LABEL_235:
    GameRoutine_e17ef0(v28, v29);
  }
  v167 = v162 - v164;
  if (v167 >> 2 > v166) {
    v166 = v167 >> 2;
  }
  if ((unsigned __int64)v167 >= 0x7FFFFFFFFFFFFFF8LL) {
    v168 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v168 = v166;
  }
  if (v168 != 0) {
    if (v168 >> 61 == 0) {
      v169 = v28;
      v170 = fw_memory_HeapManager_Allocate(*v27, 8 * v168, 16, 0);
      v28 = v169;
      goto LABEL_210;
    }
  LABEL_236:
    GameRoutine_60a210(v28);
  }
  v170 = 0;
LABEL_210:
  v171 = v170 + 8 * v168;
  v172 = v170 + v165 - 8 * (v165 >> 3);
  *(_QWORD*)(v170 + v165) = v28;
  v163 = v170 + v165 + 8;
  memcpy(v172, v164, v165);
  *(_QWORD*)(a1 + 88) = v172;
  *(_QWORD*)(a1 + 96) = v163;
  *(_QWORD*)(a1 + 104) = v171;
  if (v164 != 0) {
    v173 = 128;
    if (*(_QWORD*)(*v27 + 200LL) == 0) {
      v173 = 56;
    }
    nn_mem_StandardAllocator_Free(*v27 + v173);
  }
LABEL_214:
  v174 = *(unsigned __int8*)(a1 + 76);
  *(_QWORD*)(a1 + 96) = v163;
  if (v174 != 1 || *(_DWORD*)(a1 + 72) != 0) {
    *(_DWORD*)(a1 + 80) = 0;
    *(_BYTE*)(a1 + 84) = 1;
  }
  if ((*(_BYTE*)(a1 + 160) & 1) == 0 && (*(_BYTE*)(a1 + 161) & 1) != 0) {
    GameRoutine_e18130(v5);
  }
  v175 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v175 != 0) {
    v176 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v177 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v175 + 16), 1u,
                              memory_order_relaxed);
    v178 = std___1___shared_weak_count_lock(v177);
    v179 = std___1___shared_weak_count___release_weak(v175);
    if (v178 != 0 && v176 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v178 + 16), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v178 + 16), 1u,
                                memory_order_relaxed);
      v180 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 16) = v176;
      *(_QWORD*)(a1 + 24) = v178;
      if (v180 != 0) {
        std___1___shared_weak_count___release_weak(v180);
      }
      v179 = std___1___shared_weak_count___release_weak(v178);
    }
    else if (v178 == 0) {
      goto LABEL_229;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v178 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v178 + 16LL))(
          v178, *(long double*)&v179);
      std___1___shared_weak_count___release_weak(v178);
    }
  }
LABEL_229:
  v181 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 800LL) + 52LL);
  if (v181 <= 0.0) {
    if (*(_BYTE*)(a1 + 44) != 1) {
      return;
    }
    v182 = 0;
  }
  else {
    *(float*)(a1 + 40) = v181;
    v182 = 1;
  }
  *(_BYTE*)(a1 + 44) = v182;
}

float CharacterControllerEnemy_10c6000(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  float v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;

  v2 = game_HashString(&GameData_1a867dc);
  v3 = *(_QWORD*)(GameData_21c9d18 + 96);
  if ((v3 & (v3 - 1)) != 0) {
    v4 = v2;
    if (v2 >= v3) {
      v4 = v2 % v3;
    }
    v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * v4);
    do {
      do {
        v5 = (_QWORD*)*v5;
      } while (v5[1] != v2);
    } while (v5[2] != v2);
  }
  else {
    v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * ((v3 - 1) & v2));
    do {
      do {
        v5 = (_QWORD*)*v5;
      } while (v5[1] != v2);
    } while (v5[2] != v2);
  }
  v6 = *(float*)(v5[3] + 32LL);
  if ((*(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 800LL) + 56LL) & 1) == 0 &&
      (unsigned int)GameRoutine_9db7e0(24) != 0) {
    v7 = game_HashString(&GameData_1ab4e38);
    v8 = *(_QWORD*)(GameData_21c9d18 + 96);
    if ((v8 & (v8 - 1)) != 0) {
      v9 = v7;
      if (v7 >= v8) {
        v9 = v7 % v8;
      }
      v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * v9);
      do {
        do {
          v10 = (_QWORD*)*v10;
        } while (v10[1] != v7);
      } while (v10[2] != v7);
    }
    else {
      v10 =
          *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * ((v8 - 1) & v7));
      do {
        do {
          v10 = (_QWORD*)*v10;
        } while (v10[1] != v7);
      } while (v10[2] != v7);
    }
    return *(float*)(v10[3] + 32LL);
  }
  return v6;
}

__int64 CharacterControllerEnemy_10c6220(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  if ((unsigned __int8*)a1 != a2) {
    v4 = *a2;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v7 = (v4 & 1) == 0;
      v8 = v4 >> 1;
      if (v7) {
        v9 = a2 + 1;
      }
      else {
        v9 = *((unsigned __int8**)a2 + 2);
      }
      if (v7) {
        v10 = v8;
      }
      else {
        v10 = *((_QWORD*)a2 + 1);
      }
      SpineModel_64dde0(a1, v9, v10);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20(a1, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    }
    else {
      v5 = *(_QWORD*)a2;
      v6 = *((_QWORD*)a2 + 2);
      *(_QWORD*)(a1 + 8) = *((_QWORD*)a2 + 1);
      *(_QWORD*)(a1 + 16) = v6;
      *(_QWORD*)a1 = v5;
    }
    v11 = (_QWORD*)(a1 + 24);
    v12 = a2[24];
    if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
      v15 = (v12 & 1) == 0;
      v16 = v12 >> 1;
      if (v15) {
        v17 = a2 + 25;
      }
      else {
        v17 = *((unsigned __int8**)a2 + 5);
      }
      if (v15) {
        v18 = v16;
      }
      else {
        v18 = *((_QWORD*)a2 + 4);
      }
      SpineModel_64dde0(v11, v17, v18);
    }
    else if ((v12 & 1) != 0) {
      GameRoutine_64df20(v11, *((_QWORD*)a2 + 5), *((_QWORD*)a2 + 4));
    }
    else {
      v13 = *((_QWORD*)a2 + 3);
      v14 = *((_QWORD*)a2 + 5);
      *(_QWORD*)(a1 + 32) = *((_QWORD*)a2 + 4);
      *(_QWORD*)(a1 + 40) = v14;
      *v11 = v13;
    }
  }
  v19 = *((_QWORD*)a2 + 7);
  *(_QWORD*)(a1 + 48) = *((_QWORD*)a2 + 6);
  *(_QWORD*)(a1 + 56) = v19;
  v21 = *((_QWORD*)a2 + 8);
  v22 = *((_QWORD*)a2 + 9);
  v23 = *((_QWORD*)a2 + 11);
  *(_QWORD*)(a1 + 80) = *((_QWORD*)a2 + 10);
  *(_QWORD*)(a1 + 88) = v23;
  *(_QWORD*)(a1 + 64) = v21;
  *(_QWORD*)(a1 + 72) = v22;
  return a1;
}

__int64 CharacterControllerEnemy_StateReturn_Unknown2(__int64 result)
{
  *(_BYTE*)(result + 16) = 0;
  return result;
}

_QWORD* CharacterControllerEnemy_StateReturn_Unknown3(__int64 a1, double a2,
                                                      double a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* result;
  __int128 v10;
  __int64 v11;
  __int128 v12;
  char v13;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  v4 = *(_QWORD*)(v3 + 88);
  v5 = *(_QWORD*)(v4 + 24);
  if (*(_QWORD*)(v4 + 32) == v5) {
  LABEL_6:
    *(_QWORD*)&v10 = *(_QWORD*)(v3 + 392);
    LODWORD(a3) = *(_DWORD*)(v3 + 400);
    *((double*)&v10 + 1) = a3;
    v11 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL);
    v12 = v10;
    return (_QWORD*)GameRoutine_ceede0(*(float*)(v11 + 368));
  }
  else {
    v7 = 0;
    v8 = 0;
    while (1) {
      result = (*(_QWORD * (**)(__int128* __return_ptr))(**(_QWORD**)(v5 + v7) +
                                                         48LL))(&v12);
      if (v13 == 1) {
        break;
      }
      v5 = *(_QWORD*)(v4 + 24);
      ++v8;
      v7 += 16;
      if (v8 >= (*(_QWORD*)(v4 + 32) - v5) >> 4) {
        v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
        goto LABEL_6;
      }
    }
    *(_BYTE*)(a1 + 16) = v13;
  }
  return result;
}

void CharacterControllerEnemy_StatePatrol_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 88LL);
  v2 = *(_QWORD*)(v1 + 56);
  *(_BYTE*)(v1 + 9) = 0;
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(v1 + 48);
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    v6 = *(_QWORD*)(v1 + 56);
    *(_QWORD*)(v1 + 48) = 0;
    *(_QWORD*)(v1 + 56) = 0;
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    *(_QWORD*)(v1 + 48) = 0;
    *(_QWORD*)(v1 + 56) = 0;
  }
}

__n128

game_hub_CharacterControllerEnemy_CharacterControllerEnemy_lambda0_Invoke(
    __int64 a1, int* a2, __int64* a3)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int128 v12;
  __int64 v14;
  __n128 result;
  __int64 v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int128 v21;

  v3 = *a2;
  v5 = *a3;
  v4 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD*)(v6 + 8);
  v8 = *(_QWORD*)(v7 + 800);
  if (v8 == 0) {
    v16 = *(_QWORD*)(v7 + 768);
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        result = std___1___shared_weak_count___release_weak(v16);
        if (v4 == 0) {
          return result;
        }
        goto LABEL_19;
      }
    }
  LABEL_18:
    if (v4 == 0) {
      return result;
    }
    goto LABEL_19;
  }
  if (v3 != 2 || (*(_WORD*)(v8 + 56) & 2) != 0) {
    goto LABEL_18;
  }
  *((_QWORD*)&v21 + 1) = 0;
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v10 = v7;
  v11 = *(_QWORD*)(v5 + 208);
  v19 = v10 + 1;
  v20 = v10 + 1;
  v18 = v10;
  v17 = 1;
  *(_QWORD*)&v12 = (unsigned int)v11;
  *((_QWORD*)&v12 + 1) = HIDWORD(v11);
  v21 = v12;
  GameRoutine_da21c0(*GameData_212ec10[0], &v17);
  if (*(_BYTE*)(v6 + 76) != 1 || *(_DWORD*)(v6 + 72) != 8) {
    *(_DWORD*)(v6 + 80) = 8;
    *(_BYTE*)(v6 + 84) = 1;
  }
  if ((*(_BYTE*)(v6 + 160) & 1) == 0 && (*(_BYTE*)(v6 + 161) & 1) != 0) {
    GameRoutine_e18130(v6 + 64);
  }
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14);
  if (v4 != 0) {
  LABEL_19:
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  return result;
}

__int64

game_hub_CharacterControllerEnemy_CharacterControllerEnemy_lambda1_Invoke(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  float v12;
  __int64 v13;
  unsigned int v14;
  float32x4_t v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[3];

  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD**)(v3 + 8);
  v5 = v4[100];
  if (v5 == 0) {
    v13 = v4[96];
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
        result = 0;
        if (v2 == 0) {
          return result;
        }
        goto LABEL_25;
      }
    }
  LABEL_20:
    result = 0;
    if (v2 == 0) {
      return result;
    }
    goto LABEL_25;
  }
  if ((*(_WORD*)(v5 + 56) & 2) != 0) {
    goto LABEL_20;
  }
  if (*(_BYTE*)(v3 + 180) != 1) {
    result = 1;
    if (v2 == 0) {
      return result;
    }
    goto LABEL_25;
  }
  v6 = *(_DWORD*)(GameData_21ec7c0 + 216);
  if (v6 <= 2) {
    *(_DWORD*)(GameData_21ec7c0 + 216) = v6 + 1;
    v7 = GameData_21f3d00;
    v15 = vaddq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 24LL) +
                                   16LL) +
                        560LL),
        (float32x4_t)GameData_1a83610);
    *(struct PseudoSret*)(v18) = GameRoutine_e1b4d0();
    *(struct PseudoSret*)(&v16) = GameRoutine_e1bfe0(v7, v18, &v15);
    if ((v18[0] & 1) != 0 && v18[2] != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v8);
    }
    v9 = v17;
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    v4 = *(_QWORD**)(v3 + 8);
  }
  result = 0;
  v11 = *(_QWORD*)(v4[3] + 16LL);
  v12 = *(float*)(v11 + 820);
  if (v12 < 0.3f) {
    v12 = 0.3f;
  }
  *(float*)(v11 + 820) = v12;
  if (v2 != 0) {
  LABEL_25:
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v14 = result;
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
      return v14;
    }
  }
  return result;
}

__int64

game_hub_CharacterControllerEnemy_CharacterControllerEnemy_lambda2_Invoke(
    __int64 result, _DWORD* a2)
{
  __int64 v2;

  if (*a2 == 1) {
    v2 = *(_QWORD*)(result + 8);
    if (*(_BYTE*)(v2 + 76) != 1 || *(_DWORD*)(v2 + 72) != 10) {
      *(_DWORD*)(v2 + 80) = 10;
      *(_BYTE*)(v2 + 84) = 1;
    }
    if ((*(_BYTE*)(v2 + 160) & 1) == 0 && (*(_BYTE*)(v2 + 161) & 1) != 0) {
      return GameRoutine_e18130(v2 + 64);
    }
  }
  return result;
}

#pragma GCC visibility pop
