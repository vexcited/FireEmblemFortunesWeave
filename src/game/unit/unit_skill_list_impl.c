#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66dd60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c9cf0(_QWORD, _QWORD);
__int64 GameRoutine_6e3d00(_QWORD, _QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc650(_QWORD);
__int64 GameRoutine_7536a0(_QWORD);
__int64 game_FindSkillOrFirst(_QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_Unit_SkillList_CountActive(_QWORD, _QWORD);
__int64 game_Unit_SkillList_MoveBit(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a8544b;
extern _UNKNOWN GameData_1a85456;
extern _UNKNOWN GameData_1a85467;
extern _UNKNOWN GameData_1a85475;
extern _UNKNOWN GameData_1a8548c;
extern _UNKNOWN GameData_1a890f2;
extern _UNKNOWN GameData_1a89100;
extern _UNKNOWN GameData_1a8910b;
extern _UNKNOWN GameData_1a89119;
extern _UNKNOWN GameData_1a8912e;
extern _UNKNOWN GameData_1a8913f;
extern _UNKNOWN GameData_1a89156;
extern _UNKNOWN GameData_1a8d183;
extern _UNKNOWN GameData_1a8d19a;
extern _UNKNOWN GameData_1a8d1ab;
extern _UNKNOWN GameData_1a8d1bc;
extern _UNKNOWN GameData_1a8d1d3;
extern _UNKNOWN GameData_1a90c32;
extern _UNKNOWN GameData_1a90c3d;
extern _UNKNOWN GameData_1a94b66;
extern _UNKNOWN GameData_1a94b7d;
extern _UNKNOWN GameData_1a94b94;
extern _UNKNOWN GameData_1a94ba5;
extern _UNKNOWN GameData_1a94bbc;
extern _UNKNOWN GameData_1a98b06;
extern _UNKNOWN GameData_1a98b1d;
extern _UNKNOWN GameData_1a98b2b;
extern _UNKNOWN GameData_1a98b3c;
extern _UNKNOWN GameData_1a98b4d;
extern _UNKNOWN GameData_1a98b58;
extern _UNKNOWN GameData_1a98b69;
extern _UNKNOWN GameData_1a98b87;
extern _UNKNOWN GameData_1a9c74e;
extern _UNKNOWN GameData_1a9c75f;
extern _UNKNOWN GameData_1a9c76a;
extern _UNKNOWN GameData_1a9c77e;
extern _UNKNOWN GameData_1a9c78f;
extern _UNKNOWN GameData_1a9c7ad;
extern _UNKNOWN GameData_1aa077e;
extern _UNKNOWN GameData_1aa0786;
extern _UNKNOWN GameData_1aa0791;
extern _UNKNOWN GameData_1aa07a8;
extern _UNKNOWN GameData_1aa45df;
extern _UNKNOWN GameData_1aa45f3;
extern _UNKNOWN GameData_1aa460a;
extern _UNKNOWN GameData_1aa461a;
extern _UNKNOWN GameData_1aabebb;
extern _UNKNOWN GameData_1aabed2;
extern _UNKNOWN GameData_1aabeec;
extern _UNKNOWN GameData_1aabf03;
extern _UNKNOWN GameData_1aabf20;
extern _UNKNOWN GameData_1aafd27;
extern _UNKNOWN GameData_1aafd38;
extern _UNKNOWN GameData_1aafd49;
extern _UNKNOWN GameData_1aafd5d;
extern _UNKNOWN GameData_1aafd6e;
extern _UNKNOWN GameData_1aafd7f;
extern _UNKNOWN GameData_1aafd90;
extern _UNKNOWN GameData_1aafdbb;
extern _UNKNOWN GameData_1ab38eb;
extern _UNKNOWN GameData_1ab38f3;
extern _UNKNOWN GameData_1ab38fe;
extern _UNKNOWN GameData_1ab390f;
extern _UNKNOWN GameData_1ab7bec;
extern _UNKNOWN GameData_1ab7c03;
extern _UNKNOWN GameData_1ab7c17;
extern _UNKNOWN GameData_1ab7c3c;
extern _UNKNOWN GameData_1ab7c4a;
extern _UNKNOWN GameData_1ab7c64;
extern _UNKNOWN GameData_1abb963;
extern _UNKNOWN GameData_1abb96e;
extern _UNKNOWN GameData_1abb985;
extern _UNKNOWN GameData_1abb990;
extern _UNKNOWN GameData_1abb9a1;
extern _UNKNOWN GameData_1abf813;
extern _UNKNOWN GameData_1abf824;
extern _UNKNOWN GameData_1abf835;
extern _UNKNOWN GameData_1abf849;
extern _UNKNOWN GameData_1ac2f89;
extern _UNKNOWN GameData_1ac2f97;
extern _UNKNOWN GameData_1ac2fab;
extern _UNKNOWN GameData_1ac2fbc;
extern _UNKNOWN GameData_1ac2fe1;
extern _UNKNOWN GameData_1ac69bc;
extern _UNKNOWN GameData_1ac69cd;
extern _UNKNOWN GameData_1ac69e4;
extern _UNKNOWN GameData_1ac69f5;
extern _UNKNOWN GameData_1acaa83;
extern _UNKNOWN GameData_1acaa91;
extern _UNKNOWN GameData_1acaaa2;
extern _UNKNOWN GameData_1acaaad;
extern _UNKNOWN GameData_1acec79;
extern _UNKNOWN GameData_1acec8a;
extern _UNKNOWN GameData_1acec9b;
extern _UNKNOWN GameData_1acecb2;
extern _UNKNOWN GameData_1acecc0;
extern _UNKNOWN GameData_1aceccb;
extern _UNKNOWN GameData_1ad2894;
extern _UNKNOWN GameData_1ad289f;
extern _UNKNOWN GameData_1ad28aa;
extern _UNKNOWN GameData_1ad6509;
extern _UNKNOWN GameData_1ada229;
extern _UNKNOWN GameData_1ada240;
extern _UNKNOWN GameData_1ada257;
extern _UNKNOWN GameData_1ada26e;
extern _UNKNOWN GameData_1ada27f;
extern _UNKNOWN GameData_1ada296;
extern _UNKNOWN GameData_1addf4f;
extern _UNKNOWN GameData_1addf66;
extern _UNKNOWN GameData_1addf7a;
extern _UNKNOWN GameData_1ae1d07;
extern _UNKNOWN GameData_1ae1d0f;
extern _UNKNOWN GameData_1ae1d26;
extern _UNKNOWN GameData_1ae5752;
extern _UNKNOWN GameData_1ae5760;
extern _UNKNOWN GameData_1ae5771;
extern _UNKNOWN GameData_1ae9507;
extern _UNKNOWN GameData_1ae951b;
extern _UNKNOWN GameData_1ae9539;
extern _UNKNOWN GameData_1ae954e;
extern _UNKNOWN GameData_1aed610;
extern _UNKNOWN GameData_1aed62f;
extern _UNKNOWN GameData_1aed63d;
extern _UNKNOWN GameData_1aed64e;
extern _UNKNOWN GameData_1aed662;
extern _UNKNOWN GameData_1aed676;
extern _UNKNOWN GameData_1af1215;
extern _UNKNOWN GameData_1af1220;
extern _UNKNOWN GameData_1af1237;
extern _UNKNOWN GameData_1af1254;
extern _UNKNOWN GameData_1af126b;
extern _UNKNOWN GameData_1af127c;
extern _UNKNOWN GameData_1af1293;
extern _UNKNOWN GameData_1af4f9e;
extern _UNKNOWN GameData_1af4fa9;
extern _UNKNOWN GameData_1af4fba;
extern _UNKNOWN GameData_1af4fcb;
extern _UNKNOWN GameData_1af4fd9;
extern _UNKNOWN GameData_1af4fe4;
extern _UNKNOWN GameData_1af4ff5;
extern _UNKNOWN GameData_1af8d33;
extern _UNKNOWN GameData_1af8d4a;
extern _UNKNOWN GameData_1af8d58;
extern _UNKNOWN GameData_1af8d69;
extern _UNKNOWN GameData_1afcc1f;
extern _UNKNOWN GameData_1afcc27;
extern _UNKNOWN GameData_1afcc3b;
extern _UNKNOWN GameData_1afcc52;
extern _UNKNOWN GameData_1afcc63;
extern _UNKNOWN GameData_1afcc74;
extern _UNKNOWN GameData_1afcc85;
extern _UNKNOWN GameData_1afcc90;
extern _UNKNOWN GameData_1afccab;
extern _UNKNOWN GameData_1afccc2;
extern __int16* GameData_212cf08[9];
extern __int64 GameData_1ab7c2e;
extern __int64 GameData_1ac2fd3;
extern __int64 GameData_1aed621;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21d96c0;
extern __int64 GameData_21d96c8;
extern __int64 GameData_21d96d0;
extern __int64 GameData_21d96d8;
extern __int64 GameData_21d96e0;
extern __int64 GameData_21d96e8;
extern __int64 GameData_21d96f0;
extern __int64 GameData_21d96f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern int GameData_21d9704;
extern int GameData_21d9708;
extern int GameData_21d970c;
extern int GameData_21d9710;
extern int GameData_21d9714;
extern int GameData_21d9718;
extern int GameData_21d971c;
extern int GameData_21d9720;
extern int GameData_21d9724;
extern int GameData_21d9728;
extern int GameData_21d972c;
extern int GameData_21d9730;
extern int GameData_21d9734;
extern int GameData_21d9738;
extern int GameData_21d973c;
extern int GameData_21d9740;
extern int GameData_21d9744;
extern int GameData_21d9748;
extern int GameData_21d974c;
extern int GameData_21d9750;
extern int GameData_21d9754;
extern int GameData_21d9758;
extern int GameData_21d975c;
extern int GameData_21d9760;
extern int GameData_21d9768;
extern int GameData_21d976c;
extern int GameData_21d9770;
extern int GameData_21d9774;
extern int GameData_21d9778;
extern int GameData_21d977c;
extern int GameData_21d9780;
extern int GameData_21d9784;
extern int GameData_21d9788;
extern int GameData_21d978c;
extern int GameData_21d9790;
extern int GameData_21d9794;
extern int GameData_21d9798;
extern int GameData_21d979c;
extern int GameData_21d97a0;
extern int GameData_21d97a4;
extern int GameData_21d97a8;
extern int GameData_21d97ac;
extern int GameData_21d97b0;
extern int GameData_21d97b4;
extern int GameData_21d97b8;
extern int GameData_21d97bc;
extern int GameData_21d97c0;
extern int GameData_21d97c4;
extern int GameData_21d97c8;
extern int GameData_21d97cc;
extern int GameData_21d97d0;
extern int GameData_21d97d4;
extern int GameData_21d97d8;
extern int GameData_21d97dc;
extern int GameData_21d97e0;
extern int GameData_21d97e4;
extern int GameData_21d97e8;
extern int GameData_21d97ec;
extern int GameData_21d97f0;
extern int GameData_21d97f4;
extern int GameData_21d97f8;
extern int GameData_21d97fc;
extern int GameData_21d9800;
extern int GameData_21d9804;
extern int GameData_21d9808;
extern int GameData_21d980c;
extern int GameData_21d9810;
extern int GameData_21d9814;
extern int GameData_21d9818;
extern int GameData_21d981c;
extern int GameData_21d9820;
extern int GameData_21d9824;
extern int GameData_21d9828;
extern int GameData_21d982c;
extern int GameData_21d9830;
extern int GameData_21d9834;
extern int GameData_21d9838;
extern int GameData_21d983c;
extern int GameData_21d9840;
extern int GameData_21d9844;
extern int GameData_21d9848;
extern int GameData_21d984c;
extern int GameData_21d9850;
extern int GameData_21d9854;
extern int GameData_21d9858;
extern int GameData_21d985c;
extern int GameData_21d9860;
extern int GameData_21d9864;
extern int GameData_21d986c;
extern int GameData_21d9870;
extern int GameData_21d9874;
extern int GameData_21d9878;
extern int GameData_21d987c;
extern int GameData_21d9880;
extern int GameData_21d9884;
extern int GameData_21d9888;
extern int GameData_21d988c;
extern int GameData_21d9890;
extern int GameData_21d9894;
extern int GameData_21d9898;
extern int GameData_21d989c;
extern int GameData_21d98a0;
extern int GameData_21d98a4;
extern int GameData_21d98a8;
extern int GameData_21d98ac;
extern int GameData_21d98b0;
extern int GameData_21d98b4;
extern int GameData_21d98b8;
extern int GameData_21d98bc;
extern int GameData_21d98c0;
extern int GameData_21d98c4;
extern int GameData_21d98c8;
extern int GameData_21d98cc;
extern int GameData_21d98d0;
extern int GameData_21d98d4;
extern int GameData_21d98d8;
extern int GameData_21d98dc;
extern int GameData_21d98e0;
extern int GameData_21d98ec;
extern int GameData_21d98f0;
extern int GameData_21d98f4;
extern int GameData_21d98f8;
extern int GameData_21d98fc;
extern int GameData_21d9900;
extern int GameData_21d9904;
extern int GameData_21d9908;
extern int GameData_21d990c;
extern int GameData_21d9910;
extern int GameData_21d9914;
extern int GameData_21d9918;
extern int GameData_21d991c;
extern int GameData_21d9920;
extern int GameData_21d9924;
extern int GameData_21d9928;
extern int GameData_21d992c;
extern int GameData_21d9930;
extern int GameData_21d9934;
extern int GameData_21d9938;
extern int GameData_21d993c;
extern int GameData_21d9940;
extern int GameData_21d9944;
extern int GameData_21d9948;
extern int GameData_21d994c;
extern int GameData_21d9950;
extern int game_g_shared_system_skills;
__int64 UnitSkillList_67f4a0(__int64 a1, unsigned __int64* a2);
__int64 UnitSkillList_7c6d00_alt1(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5,
                                  __int64 a6) __asm__("UnitSkillList_7c6d00");
bool UnitSkillList_843ae0(_DWORD* a1, __int64 a2, _WORD* a3);
__int64 UnitSkillList_843de0(_DWORD* a1, __int64 a2, __int64 a3);
bool UnitSkillList_844040(_DWORD* a1, __int64 a2);
__int64 UnitSkillList_84cc00(__int64* a1, _DWORD* a2, char a3);
__int64 UnitSkillList_84d5a0(__int64 a1, unsigned __int16* a2);
__int64 UnitSkillList_84d980(__int64* a1, unsigned int* a2);
__int64 UnitSkillList_84dea0(__int64* a1, unsigned int* a2, _DWORD* a3);
__int64 UnitSkillList_84e640(__int64 result);
__int64 UnitSkillList_84e760(__int64 result);
__int64 UnitSkillList_857d20(__int64 a1, _DWORD* a2);
__int64 UnitSkillList_858000(__int64 a1, _DWORD* a2);
__int64 UnitSkillList_858170(__int64 a1, _DWORD* a2);
__int64 UnitSkillList_8582e0(__int64 a1, _DWORD* a2);
float UnitSkillList_858450(__int64 a1, _DWORD* a2);
__int64 UnitSkillList_8585d0(__int64 a1, _DWORD* a2);
__int64 UnitSkillList_858720(__int64 a1, _DWORD* a2);
__int64 UnitSkillList_858e20(__int64 result, _DWORD* a2);
__int64* UnitSkillList_858f80(__int64 a1, __int64* a2);
__int64* UnitSkillList_8590e0(__int64 a1, _DWORD* a2);
__int64* UnitSkillList_859210(__int64 a1, unsigned int* a2);
__int64 GameRoutine_6fc510_alt1(__int64) __asm__("GameRoutine_6fc510");
__int64 game_Unit_SkillList_CountActive_alt1(__int64, _QWORD*) __asm__(
    "game_Unit_SkillList_CountActive");
void GameRoutine_66dd60_alt1(__int64*, unsigned __int64,
                             _DWORD*) __asm__("GameRoutine_66dd60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64
game_FindSkillOrFirst_alt1(unsigned __int64*) __asm__("game_FindSkillOrFirst");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 UnitSkillList_7c6d00();

__int64 UnitSkillList_67f4a0(__int64 a1, unsigned __int64* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;

  if (a2 != nullptr) {
    v2 = *(_QWORD**)(a1 + 24);
    if (v2 != nullptr) {
      v3 = v2[120];
      if (v3 != 0 && v2[122] != 0) {
        v5 = *a2;
        v6 = v3 - 1;
        if ((v3 & (v3 - 1)) != 0) {
          v7 = *a2;
          if (v5 >= v3) {
            v7 = v5 % v3;
          }
        }
        else {
          v7 = v6 & v5;
        }
        v8 = *(_QWORD**)(v2[119] + 8 * v7);
        if (v8 != nullptr) {
          v9 = (_QWORD*)*v8;
          if (v9 != nullptr) {
            if ((v3 & v6) == 0) {
              while (1) {
                v12 = v9[1];
                if (v12 == v5) {
                  if (v9[2] == v5) {
                    return v9[3];
                  }
                }
                else if ((v12 & v6) != v7) {
                  return 0;
                }
                v9 = (_QWORD*)*v9;
                result = 0;
                if (v9 == nullptr) {
                  return result;
                }
              }
            }
            while (1) {
              v11 = v9[1];
              if (v11 == v5) {
                if (v9[2] == v5) {
                  return v9[3];
                }
              }
              else {
                if (v11 >= v3) {
                  v11 %= v3;
                }
                if (v11 != v7) {
                  return 0;
                }
              }
              v9 = (_QWORD*)*v9;
              result = 0;
              if (v9 == nullptr) {
                return result;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

__int64 UnitSkillList_7c6d00()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
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
  __int64 v62;
  __int64 v63;
  __int64 v64;
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
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
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
  __int64 v114;
  __int64 v115;
  __int64 v116;
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
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 result;
  struct {
    __int64 v157;
    __int64* v158;
  } v157_;

  GameData_21d96f0 = 0;
  GameData_21d96f8 = 0;
  GameData_21d96e0 = 0;
  GameData_21d96e8 = 0;
  GameData_21d96d0 = 0;
  GameData_21d96d8 = 0;
  GameData_21d96c0 = 0;
  GameData_21d96c8 = 0;
  memset_alt1((__int64)&game_g_shared_system_skills, 0, 0x254u);
  v157_.v158 = (__int64*)&GameData_1ab38eb;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab38eb);
  v0 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v0 != 0) {
    LODWORD(GameData_21d96c0) = *(unsigned __int16*)(v0 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aa077e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aa077e);
  v1 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v1 != 0) {
    HIDWORD(GameData_21d96c0) = *(unsigned __int16*)(v1 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae1d07;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae1d07);
  v2 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v2 != 0) {
    LODWORD(GameData_21d96c8) = *(unsigned __int16*)(v2 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afcc1f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afcc1f);
  v3 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v3 != 0) {
    HIDWORD(GameData_21d96c8) = *(unsigned __int16*)(v3 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aa0786;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aa0786);
  v4 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v4 != 0) {
    LODWORD(GameData_21d96d0) = *(unsigned __int16*)(v4 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a890f2;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a890f2);
  v5 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v5 != 0) {
    HIDWORD(GameData_21d96d0) = *(unsigned __int16*)(v5 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac2f89;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac2f89);
  v6 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v6 != 0) {
    LODWORD(GameData_21d96d8) = *(unsigned __int16*)(v6 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab38f3;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab38f3);
  v7 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v7 != 0) {
    LODWORD(GameData_21d96e0) = *(unsigned __int16*)(v7 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af4f9e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af4f9e);
  v8 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v8 != 0) {
    HIDWORD(GameData_21d96e0) = *(unsigned __int16*)(v8 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a89100;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a89100);
  v9 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v9 != 0) {
    LODWORD(GameData_21d96e8) = *(unsigned __int16*)(v9 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af1215;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af1215);
  v10 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v10 != 0) {
    HIDWORD(GameData_21d96e8) = *(unsigned __int16*)(v10 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ad2894;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ad2894);
  v11 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v11 != 0) {
    LODWORD(GameData_21d96f0) = *(unsigned __int16*)(v11 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae5752;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae5752);
  v12 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v12 != 0) {
    game_g_shared_system_skills = *(unsigned __int16*)(v12 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acec79;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acec79);
  v13 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v13 != 0) {
    GameData_21d9704 = *(unsigned __int16*)(v13 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aafd27;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aafd27);
  v14 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v14 != 0) {
    GameData_21d9708 = *(unsigned __int16*)(v14 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8910b;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8910b);
  v15 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v15 != 0) {
    GameData_21d970c = *(unsigned __int16*)(v15 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aa45df;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aa45df);
  v16 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v16 != 0) {
    GameData_21d9710 = *(unsigned __int16*)(v16 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afcc27;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afcc27);
  v17 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v17 != 0) {
    GameData_21d9714 = *(unsigned __int16*)(v17 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae9507;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae9507);
  v18 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v18 != 0) {
    GameData_21d9718 = *(unsigned __int16*)(v18 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aed610;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aed610);
  v19 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v19 != 0) {
    GameData_21d971c = *(unsigned __int16*)(v19 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abf813;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abf813);
  v20 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v20 != 0) {
    GameData_21d9720 = *(unsigned __int16*)(v20 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8544b;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8544b);
  v21 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v21 != 0) {
    GameData_21d9724 = *(unsigned __int16*)(v21 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a85456;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a85456);
  v22 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v22 != 0) {
    GameData_21d9728 = *(unsigned __int16*)(v22 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af4fa9;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af4fa9);
  v23 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v23 != 0) {
    GameData_21d972c = *(unsigned __int16*)(v23 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a9c74e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a9c74e);
  v24 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v24 != 0) {
    GameData_21d9730 = *(unsigned __int16*)(v24 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac69bc;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac69bc);
  v25 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v25 != 0) {
    GameData_21d9734 = *(unsigned __int16*)(v25 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aafd38;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aafd38);
  v26 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v26 != 0) {
    GameData_21d9738 = *(unsigned __int16*)(v26 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acec8a;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acec8a);
  v27 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v27 != 0) {
    GameData_21d973c = *(unsigned __int16*)(v27 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acec9b;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acec9b);
  v28 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v28 != 0) {
    GameData_21d9740 = *(unsigned __int16*)(v28 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a98b06;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a98b06);
  v29 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v29 != 0) {
    GameData_21d9744 = *(unsigned __int16*)(v29 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aabebb;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aabebb);
  v30 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v30 != 0) {
    GameData_21d9748 = *(unsigned __int16*)(v30 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac69cd;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac69cd);
  v31 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v31 != 0) {
    GameData_21d974c = *(unsigned __int16*)(v31 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ada229;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ada229);
  v32 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v32 != 0) {
    GameData_21d9750 = *(unsigned __int16*)(v32 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aa0791;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aa0791);
  v33 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v33 != 0) {
    GameData_21d9754 = *(unsigned __int16*)(v33 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af8d33;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af8d33);
  v34 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v34 != 0) {
    GameData_21d9758 = *(unsigned __int16*)(v34 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab7bec;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab7bec);
  v35 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v35 != 0) {
    GameData_21d975c = *(unsigned __int16*)(v35 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ada240;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ada240);
  v36 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v36 != 0) {
    GameData_21d9760 = *(unsigned __int16*)(v36 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ada257;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ada257);
  v37 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v37 != 0) {
    GameData_21d9768 = *(unsigned __int16*)(v37 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aa45f3;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aa45f3);
  v38 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v38 != 0) {
    GameData_21d976c = *(unsigned __int16*)(v38 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8d183;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8d183);
  v39 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v39 != 0) {
    GameData_21d9770 = *(unsigned __int16*)(v39 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afcc3b;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afcc3b);
  v40 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v40 != 0) {
    GameData_21d9774 = *(unsigned __int16*)(v40 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a94b66;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a94b66);
  v41 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v41 != 0) {
    GameData_21d9778 = *(unsigned __int16*)(v41 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a94b7d;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a94b7d);
  v42 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v42 != 0) {
    GameData_21d9780 = *(unsigned __int16*)(v42 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8d19a;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8d19a);
  v43 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v43 != 0) {
    GameData_21d977c = *(unsigned __int16*)(v43 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ad289f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ad289f);
  v44 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v44 != 0) {
    GameData_21d9788 = *(unsigned __int16*)(v44 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abb963;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abb963);
  v45 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v45 != 0) {
    GameData_21d978c = *(unsigned __int16*)(v45 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a9c75f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a9c75f);
  v46 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v46 != 0) {
    GameData_21d9790 = *(unsigned __int16*)(v46 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8d1ab;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8d1ab);
  v47 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v47 != 0) {
    GameData_21d9784 = *(unsigned __int16*)(v47 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abf824;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abf824);
  v48 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v48 != 0) {
    GameData_21d9794 = *(unsigned __int16*)(v48 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abf835;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abf835);
  v49 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v49 != 0) {
    GameData_21d9798 = *(unsigned __int16*)(v49 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aafd49;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aafd49);
  v50 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v50 != 0) {
    GameData_21d979c = *(unsigned __int16*)(v50 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac2f97;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac2f97);
  v51 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v51 != 0) {
    GameData_21d97a0 = *(unsigned __int16*)(v51 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab38fe;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab38fe);
  v52 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v52 != 0) {
    GameData_21d98a8 = *(unsigned __int16*)(v52 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afcc52;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afcc52);
  v53 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v53 != 0) {
    GameData_21d98ac = *(unsigned __int16*)(v53 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aabed2;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aabed2);
  v54 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v54 != 0) {
    GameData_21d98b0 = *(unsigned __int16*)(v54 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afcc63;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afcc63);
  v55 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v55 != 0) {
    GameData_21d98b4 = *(unsigned __int16*)(v55 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abb96e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abb96e);
  v56 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v56 != 0) {
    GameData_21d98b8 = *(unsigned __int16*)(v56 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8d1bc;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8d1bc);
  v57 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v57 != 0) {
    GameData_21d98bc = *(unsigned __int16*)(v57 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abb985;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abb985);
  v58 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v58 != 0) {
    GameData_21d97a4 = *(unsigned __int16*)(v58 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af8d4a;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af8d4a);
  v59 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v59 != 0) {
    GameData_21d97a8 = *(unsigned __int16*)(v59 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acecb2;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acecb2);
  v60 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v60 != 0) {
    GameData_21d97ac = *(unsigned __int16*)(v60 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a98b1d;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a98b1d);
  v61 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v61 != 0) {
    GameData_21d97b0 = *(unsigned __int16*)(v61 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a85467;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a85467);
  v62 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v62 != 0) {
    GameData_21d9870 = *(unsigned __int16*)(v62 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a94b94;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a94b94);
  v63 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v63 != 0) {
    GameData_21d9874 = *(unsigned __int16*)(v63 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae1d0f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae1d0f);
  v64 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v64 != 0) {
    GameData_21d97b4 = *(unsigned __int16*)(v64 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aabeec;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aabeec);
  v65 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v65 != 0) {
    GameData_21d97b8 = *(unsigned __int16*)(v65 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac2fab;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac2fab);
  v66 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v66 != 0) {
    GameData_21d97bc = *(unsigned __int16*)(v66 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afcc74;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afcc74);
  v67 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v67 != 0) {
    GameData_21d97d4 = *(unsigned __int16*)(v67 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abf849;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abf849);
  v68 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v68 != 0) {
    GameData_21d97d8 = *(unsigned __int16*)(v68 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a94ba5;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a94ba5);
  v69 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v69 != 0) {
    GameData_21d97dc = *(unsigned __int16*)(v69 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab7c03;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab7c03);
  v70 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v70 != 0) {
    GameData_21d97e0 = *(unsigned __int16*)(v70 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1addf4f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1addf4f);
  v71 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v71 != 0) {
    GameData_21d97e4 = *(unsigned __int16*)(v71 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af1220;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af1220);
  v72 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v72 != 0) {
    GameData_21d97e8 = *(unsigned __int16*)(v72 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a85475;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a85475);
  v73 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v73 != 0) {
    GameData_21d97c0 = *(unsigned __int16*)(v73 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aabf03;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aabf03);
  v74 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v74 != 0) {
    GameData_21d97c4 = *(unsigned __int16*)(v74 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af1237;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af1237);
  v75 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v75 != 0) {
    GameData_21d97c8 = *(unsigned __int16*)(v75 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac2fbc;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac2fbc);
  v76 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v76 != 0) {
    GameData_21d97cc = *(unsigned __int16*)(v76 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ad28aa;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ad28aa);
  v77 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v77 != 0) {
    GameData_21d97d0 = *(unsigned __int16*)(v77 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a98b2b;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a98b2b);
  v78 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v78 != 0) {
    GameData_21d97ec = *(unsigned __int16*)(v78 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af1254;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af1254);
  v79 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v79 != 0) {
    GameData_21d97f0 = *(unsigned __int16*)(v79 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a98b3c;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a98b3c);
  v80 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v80 != 0) {
    GameData_21d97f4 = *(unsigned __int16*)(v80 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab7c17;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab7c17);
  v81 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v81 != 0) {
    GameData_21d97f8 = *(unsigned __int16*)(v81 + 16);
  }
  v157_.v158 = &GameData_1ab7c2e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab7c2e);
  v82 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v82 != 0) {
    GameData_21d97fc = *(unsigned __int16*)(v82 + 16);
  }
  v157_.v158 = &GameData_1aed621;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aed621);
  v83 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v83 != 0) {
    GameData_21d9800 = *(unsigned __int16*)(v83 + 16);
  }
  v157_.v158 = &GameData_1ac2fd3;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac2fd3);
  v84 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v84 != 0) {
    GameData_21d9804 = *(unsigned __int16*)(v84 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a98b4d;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a98b4d);
  v85 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v85 != 0) {
    GameData_21d9808 = *(unsigned __int16*)(v85 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acecc0;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acecc0);
  v86 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v86 != 0) {
    GameData_21d980c = *(unsigned __int16*)(v86 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af4fba;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af4fba);
  v87 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v87 != 0) {
    GameData_21d9810 = *(unsigned __int16*)(v87 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aa460a;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aa460a);
  v88 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v88 != 0) {
    GameData_21d9814 = *(unsigned __int16*)(v88 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af4fcb;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af4fcb);
  v89 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v89 != 0) {
    GameData_21d9818 = *(unsigned __int16*)(v89 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab7c3c;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab7c3c);
  v90 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v90 != 0) {
    GameData_21d981c = *(unsigned __int16*)(v90 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aed62f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aed62f);
  v91 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v91 != 0) {
    GameData_21d9820 = *(unsigned __int16*)(v91 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acaa83;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acaa83);
  v92 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v92 != 0) {
    GameData_21d9824 = *(unsigned __int16*)(v92 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aa461a;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aa461a);
  v93 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v93 != 0) {
    GameData_21d9828 = *(unsigned __int16*)(v93 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a9c76a;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a9c76a);
  v94 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v94 != 0) {
    GameData_21d982c = *(unsigned __int16*)(v94 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1addf66;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1addf66);
  v95 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v95 != 0) {
    GameData_21d9830 = *(unsigned __int16*)(v95 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aafd5d;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aafd5d);
  v96 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v96 != 0) {
    GameData_21d9834 = *(unsigned __int16*)(v96 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aafd6e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aafd6e);
  v97 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v97 != 0) {
    GameData_21d9838 = *(unsigned __int16*)(v97 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab7c4a;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab7c4a);
  v98 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v98 != 0) {
    GameData_21d983c = *(unsigned __int16*)(v98 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ad6509;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ad6509);
  v99 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v99 != 0) {
    GameData_21d9840 = *(unsigned __int16*)(v99 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a90c32;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a90c32);
  v100 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v100 != 0) {
    GameData_21d98c0 = *(unsigned __int16*)(v100 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af4fd9;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af4fd9);
  v101 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v101 != 0) {
    GameData_21d98c4 = *(unsigned __int16*)(v101 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1addf7a;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1addf7a);
  v102 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v102 != 0) {
    GameData_21d9844 = *(unsigned __int16*)(v102 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afcc85;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afcc85);
  v103 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v103 != 0) {
    GameData_21d9848 = *(unsigned __int16*)(v103 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aa07a8;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aa07a8);
  v104 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v104 != 0) {
    GameData_21d984c = *(unsigned __int16*)(v104 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af126b;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af126b);
  v105 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v105 != 0) {
    GameData_21d9850 = *(unsigned __int16*)(v105 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acaa91;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acaa91);
  v106 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v106 != 0) {
    GameData_21d9854 = *(unsigned __int16*)(v106 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8d1d3;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8d1d3);
  v107 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v107 != 0) {
    GameData_21d9858 = *(unsigned __int16*)(v107 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae5760;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae5760);
  v108 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v108 != 0) {
    GameData_21d985c = *(unsigned __int16*)(v108 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abb990;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abb990);
  v109 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v109 != 0) {
    GameData_21d9860 = *(unsigned __int16*)(v109 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aed63d;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aed63d);
  v110 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v110 != 0) {
    GameData_21d9864 = *(unsigned __int16*)(v110 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af4fe4;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af4fe4);
  v111 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v111 != 0) {
    GameData_21d986c = *(unsigned __int16*)(v111 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ada26e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ada26e);
  v112 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v112 != 0) {
    GameData_21d98c8 = *(unsigned __int16*)(v112 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac2fe1;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac2fe1);
  v113 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v113 != 0) {
    GameData_21d9878 = *(unsigned __int16*)(v113 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab390f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab390f);
  v114 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v114 != 0) {
    GameData_21d987c = *(unsigned __int16*)(v114 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1abb9a1;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1abb9a1);
  v115 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v115 != 0) {
    GameData_21d9880 = *(unsigned __int16*)(v115 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aed64e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aed64e);
  v116 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v116 != 0) {
    GameData_21d9884 = *(unsigned __int16*)(v116 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aed662;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aed662);
  v117 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v117 != 0) {
    GameData_21d9888 = *(unsigned __int16*)(v117 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac69e4;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac69e4);
  v118 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v118 != 0) {
    GameData_21d988c = *(unsigned __int16*)(v118 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a98b58;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a98b58);
  v119 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v119 != 0) {
    GameData_21d9890 = *(unsigned __int16*)(v119 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ab7c64;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ab7c64);
  v120 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v120 != 0) {
    GameData_21d9894 = *(unsigned __int16*)(v120 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a9c77e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a9c77e);
  v121 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v121 != 0) {
    GameData_21d9898 = *(unsigned __int16*)(v121 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aafd7f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aafd7f);
  v122 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v122 != 0) {
    GameData_21d98e0 = *(unsigned __int16*)(v122 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af8d58;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af8d58);
  v123 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v123 != 0) {
    GameData_21d989c = *(unsigned __int16*)(v123 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae5771;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae5771);
  v124 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v124 != 0) {
    GameData_21d98a0 = *(unsigned __int16*)(v124 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ac69f5;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ac69f5);
  v125 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v125 != 0) {
    GameData_21d98a4 = *(unsigned __int16*)(v125 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a9c78f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a9c78f);
  v126 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v126 != 0) {
    GameData_21d98cc = *(unsigned __int16*)(v126 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a94bbc;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a94bbc);
  v127 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v127 != 0) {
    GameData_21d98d0 = *(unsigned __int16*)(v127 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afcc90;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afcc90);
  v128 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v128 != 0) {
    GameData_21d98d4 = *(unsigned __int16*)(v128 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a98b69;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a98b69);
  v129 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v129 != 0) {
    GameData_21d98d8 = *(unsigned __int16*)(v129 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae951b;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae951b);
  v130 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v130 != 0) {
    GameData_21d98dc = *(unsigned __int16*)(v130 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aed676;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aed676);
  v131 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v131 != 0) {
    GameData_21d98ec = *(unsigned __int16*)(v131 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae9539;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae9539);
  v132 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v132 != 0) {
    GameData_21d98f0 = *(unsigned __int16*)(v132 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a89119;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a89119);
  v133 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v133 != 0) {
    GameData_21d98f4 = *(unsigned __int16*)(v133 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae1d26;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae1d26);
  v134 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v134 != 0) {
    GameData_21d98f8 = *(unsigned __int16*)(v134 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8548c;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8548c);
  v135 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v135 != 0) {
    GameData_21d98fc = *(unsigned __int16*)(v135 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aafd90;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aafd90);
  v136 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v136 != 0) {
    GameData_21d9900 = *(unsigned __int16*)(v136 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aafdbb;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aafdbb);
  v137 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v137 != 0) {
    GameData_21d9904 = *(unsigned __int16*)(v137 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a98b87;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a98b87);
  v138 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v138 != 0) {
    GameData_21d9908 = *(unsigned __int16*)(v138 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afccab;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afccab);
  v139 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v139 != 0) {
    GameData_21d990c = *(unsigned __int16*)(v139 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1afccc2;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1afccc2);
  v140 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v140 != 0) {
    GameData_21d9910 = *(unsigned __int16*)(v140 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ada27f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ada27f);
  v141 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v141 != 0) {
    GameData_21d9914 = *(unsigned __int16*)(v141 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af127c;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af127c);
  v142 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v142 != 0) {
    GameData_21d9918 = *(unsigned __int16*)(v142 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a90c3d;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a90c3d);
  v143 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v143 != 0) {
    GameData_21d991c = *(unsigned __int16*)(v143 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aceccb;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aceccb);
  v144 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v144 != 0) {
    GameData_21d9920 = *(unsigned __int16*)(v144 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acaaa2;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acaaa2);
  v145 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v145 != 0) {
    GameData_21d9924 = *(unsigned __int16*)(v145 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ae954e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ae954e);
  v146 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v146 != 0) {
    GameData_21d9928 = *(unsigned __int16*)(v146 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8912e;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8912e);
  v147 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v147 != 0) {
    GameData_21d992c = *(unsigned __int16*)(v147 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1acaaad;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1acaaad);
  v148 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v148 != 0) {
    GameData_21d9930 = *(unsigned __int16*)(v148 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af4ff5;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af4ff5);
  v149 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v149 != 0) {
    GameData_21d9934 = *(unsigned __int16*)(v149 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a8913f;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a8913f);
  v150 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v150 != 0) {
    GameData_21d9938 = *(unsigned __int16*)(v150 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1aabf20;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1aabf20);
  v151 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v151 != 0) {
    GameData_21d993c = *(unsigned __int16*)(v151 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af8d69;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af8d69);
  v152 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v152 != 0) {
    GameData_21d9940 = *(unsigned __int16*)(v152 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1af1293;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1af1293);
  v153 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v153 != 0) {
    GameData_21d9944 = *(unsigned __int16*)(v153 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a89156;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a89156);
  v154 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v154 != 0) {
    GameData_21d9948 = *(unsigned __int16*)(v154 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1a9c7ad;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1a9c7ad);
  v155 = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (v155 != 0) {
    GameData_21d994c = *(unsigned __int16*)(v155 + 16);
  }
  v157_.v158 = (__int64*)&GameData_1ada296;
  v157_.v157 = game_HashString_alt1((__int64)&GameData_1ada296);
  result = game_FindSkillOrFirst_alt1((unsigned __int64*)&v157_.v157);
  if (result != 0) {
    GameData_21d9950 = *(unsigned __int16*)(result + 16);
  }
  return result;
}

bool UnitSkillList_843ae0(_DWORD* a1, __int64 a2, _WORD* a3)
{
  __int64 v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
    int v35;
  } v32_;
  int v36;

  v3 = (unsigned __int16)*a3;
  if (*a3 == 0) {
    return false;
  }
  v32_.v35 = 0;
  v32_.v33 = 0;
  v32_.v34 = 0;
  v32_.v32 = 0;
  v6 = GameData_212c878[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v3) +
                  24LL);
  if (*(_DWORD*)(v7 + 224) != 0) {
    v8 = *(_QWORD*)(v7 + 200);
    v9 = *(_QWORD*)(v7 + 208);
    if (v9 != v8) {
      v36 = 0;
      v10 = a2;
      GameRoutine_66dd60_alt1(&v32_.v32, (v9 - v8) >> 2, &v36);
      v8 = *(_QWORD*)(v7 + 200);
      v9 = *(_QWORD*)(v7 + 208);
      a2 = v10;
    }
    if (v9 != v8) {
      v11 = 0;
      do {
        *(_DWORD*)(v32_.v32 + 4 * v11) |= *(_DWORD*)(v8 + 4 * v11);
        ++v11;
        v8 = *(_QWORD*)(v7 + 200);
      } while (v11 < (*(_QWORD*)(v7 + 208) - v8) >> 2);
    }
  }
  v12 = *(__int64**)(*(_QWORD*)(a2 + 392) + 24LL);
  if (*((_DWORD*)v12 + 6) != 0) {
    v13 = *v12;
    v14 = v12[1];
    v15 = (v14 - *v12) >> 2;
    v16 = (v32_.v33 - v32_.v32) >> 2;
    if (v15 > v16) {
      v36 = 0;
      GameRoutine_66dd60_alt1(&v32_.v32, v15 - v16, &v36);
      v13 = *v12;
      v14 = v12[1];
    }
    if (v14 != v13) {
      v17 = 0;
      do {
        *(_DWORD*)(v32_.v32 + 4 * v17) |= *(_DWORD*)(v13 + 4 * v17);
        ++v17;
        v13 = *v12;
      } while (v17 < (v12[1] - *v12) >> 2);
    }
  }
  if ((*a1 & 0xFFF) == 0) {
    goto LABEL_16;
  }
  v18 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a1 & 0xFFF));
  if ((GameRoutine_6fc510_alt1(v18) & 1) != 0) {
    goto LABEL_16;
  }
  if (*(_BYTE*)(v18 + 273) != 0) {
    v22 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * (*a1 & 0xFFFLL));
    v23 = *(unsigned __int8*)(v22 + 104);
    v24 = *(unsigned __int8*)(v22 + 273);
    v25 = (unsigned int)(v23 - 5) >= 2 ? 0 : (*a1 >> 19) & 0x1F;
    if (v25 - ((*a1 >> 12) & 0x7F) + v24 < 1) {
      goto LABEL_16;
    }
  }
  v26 = *(_QWORD*)(v18 + 24);
  if (*(_BYTE*)(v26 + 1122) == 1) {
    v27 = *(_QWORD*)(v26 + 800);
    v28 = *(_QWORD*)(v26 + 808);
    if (v28 != v27) {
      while (
          (unsigned int)game_Unit_SkillList_CountActive_alt1(v27, &v32_.v32) !=
          (unsigned int)((*(_QWORD*)(v27 + 40) - *(_QWORD*)(v27 + 32)) >> 2)) {
        v27 += 96;
        if (v27 == v28) {
          goto LABEL_16;
        }
      }
    }
    v29 = *(_QWORD*)(v26 + 824);
    v30 = *(_QWORD*)(v26 + 832);
    if (v30 != v29) {
      while (
          (unsigned int)game_Unit_SkillList_CountActive_alt1(v29, &v32_.v32) !=
          (unsigned int)((*(_QWORD*)(v29 + 40) - *(_QWORD*)(v29 + 32)) >> 2)) {
        v29 += 96;
        if (v29 == v30) {
          goto LABEL_36;
        }
      }
    LABEL_16:
      v19 = false;
      goto LABEL_17;
    }
  }
LABEL_36:
  v31 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a1 & 0xFFF));
  v19 = *(_BYTE*)(*(_QWORD*)(v31 + 24) + 1112LL) != 1 ||
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                              8LL * (unsigned __int16)*a3) +
                   192LL) == v31;
LABEL_17:
  if (v32_.v32 != 0) {
    v32_.v33 = v32_.v32;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v32_.v32);
  }
  return v19;
}

__int64 UnitSkillList_843de0(_DWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _DWORD* v6;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  int v26;

  result = 0;
  if (a2 == 0 || a3 == 0) {
    return result;
  }
  v6 = a1;
  v8 = GameData_212c880[0];
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*a1 & 0xFFF)) +
                  24LL);
  if (*(_BYTE*)(v9 + 1122) == 1) {
    v10 = *(_QWORD*)(v9 + 848);
    v11 = *(_QWORD*)(v9 + 856);
    if (v11 != v10) {
      while (
          (unsigned int)game_Unit_SkillList_CountActive(v10, a3 + 1744) !=
          (unsigned int)((*(_QWORD*)(v10 + 40) - *(_QWORD*)(v10 + 32)) >> 2)) {
        v10 += 96;
        if (v10 == v11) {
          return 0;
        }
      }
    }
    v12 = *(_QWORD*)(v9 + 872);
    v13 = *(_QWORD*)(v9 + 880);
    if (v13 != v12) {
      while (
          (unsigned int)game_Unit_SkillList_CountActive(v12, a3 + 1744) !=
          (unsigned int)((*(_QWORD*)(v12 + 40) - *(_QWORD*)(v12 + 32)) >> 2)) {
        v12 += 96;
        if (v12 == v13) {
          goto LABEL_11;
        }
      }
      return 0;
    }
  }

LABEL_11:
  if ((GameRoutine_7536a0(a3) & 1) == 0 ||
      (GameRoutine_6c9cf0(a2, a3) & 1) == 0) {
    return 0;
  }
  v14 = *(
      unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (*v6 & 0xFFF)) +
                        106LL);
  if (v14 > 3) {
    if (v14 - 5 < 2) {
      return 0;
    }
    if (v14 == 4) {
      v15 = *(_QWORD*)(a3 + 440);
      if (v15 != 0) {
        v16 = *(unsigned __int8*)(v15 + 16);
      }
      else {
        v16 = 9;
      }
      v22 = *(unsigned __int8*)(*(_QWORD*)(a2 + 440) + 16LL);
      if (v22 != v16) {
        if (*(_BYTE*)(*(_QWORD*)(a2 + 440) + 16LL) != 0) {
          result = 0;
          if (v16 != 0 || v22 != 3) {
            return result;
          }
        }
        else if (v16 != 3) {
          return 0;
        }
      }
      if (v15 != 0) {
        v26 = *(unsigned __int8*)(v15 + 16);
      }
      else {
        v26 = 9;
      }
      return v22 != v26;
    }
    return 1;
  }
  if (v14 == 1) {
    v17 = *(_QWORD*)(a3 + 440);
    if (v17 != 0) {
      v18 = *(unsigned __int8*)(v17 + 16);
    }
    else {
      v18 = 9;
    }
    v21 = *(unsigned __int8*)(*(_QWORD*)(a2 + 440) + 16LL);
    if (v21 == v18) {
      return 0;
    }
    if (*(_BYTE*)(*(_QWORD*)(a2 + 440) + 16LL) != 0) {
      return v18 != 0 || v21 != 3;
    }
    return v18 != 3;
  }
  if (v14 != 2) {
    if (v14 == 3) {
      return a2 == a3;
    }
    return 1;
  }
  v19 = *(_QWORD*)(a2 + 440);
  if (v19 != 0) {
    v20 = *(unsigned __int8*)(v19 + 16);
  }
  else {
    v20 = 9;
  }
  v23 = *(_QWORD*)(a3 + 440);
  if (v23 != 0) {
    v24 = *(unsigned __int8*)(v23 + 16);
  }
  else {
    v24 = 9;
  }
  return a2 != a3 && v20 == v24;
}

bool UnitSkillList_844040(_DWORD* a1, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _BOOL8 result;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;

  v2 = GameData_212c880[0];
  v3 = *a1 & 0xFFF;
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v3);
  if (v4 == 0 || (*(_WORD*)(v4 + 754) & 0x10) == 0) {
    return false;
  }
  if (a2 == 0 || *(_BYTE*)(v4 + 115) != 2) {
    return true;
  }
  if ((*a1 & 0xFFF) == 0 ||
      (GameRoutine_6fc510(
           *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v3)) &
       1) != 0) {
    return false;
  }
  if (*(_BYTE*)(v4 + 273) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a1 & 0xFFFLL));
    v9 = *(unsigned __int8*)(v8 + 104);
    v10 = *(unsigned __int8*)(v8 + 273);
    v11 = (unsigned int)(v9 - 5) >= 2 ? 0 : (*a1 >> 19) & 0x1F;
    if (v11 - ((*a1 >> 12) & 0x7F) + v10 < 1) {
      return false;
    }
  }
  v12 = *(_QWORD*)(v4 + 24);
  if (*(_BYTE*)(v12 + 1122) != 1) {
    return true;
  }
  v13 = *(_QWORD*)(v12 + 800);
  v14 = *(_QWORD*)(v12 + 808);
  if (v14 != v13) {
    v15 = a2;
    while ((unsigned int)game_Unit_SkillList_CountActive(v13, v15 + 1744) !=
           (unsigned int)((*(_QWORD*)(v13 + 40) - *(_QWORD*)(v13 + 32)) >> 2)) {
      v13 += 96;
      result = false;
      v15 = a2;
      if (v13 == v14) {
        return result;
      }
    }
  }
  v16 = *(_QWORD*)(v12 + 824);
  v17 = *(_QWORD*)(v12 + 832);
  if (v17 == v16) {
    return true;
  }
  do {
    v18 = game_Unit_SkillList_CountActive(v16, a2 + 1744);
    v20 = *(_QWORD*)(v16 + 32);
    v19 = *(_QWORD*)(v16 + 40);
    v16 += 96;
    v21 = (unsigned __int64)(v19 - v20) >> 2;
    v22 = v18 == (_DWORD)v21;
    result = v18 != (_DWORD)v21;
    v22 = v22 || v16 == v17;
  } while (!v22);
  return result;
}

__int64 UnitSkillList_84cc00(__int64* a1, _DWORD* a2, char a3)
{
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int v15;
  _DWORD* v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;

  v3 = (unsigned int)*a2;
  if ((v3 & 0xFFF) == 0) {
    return 0;
  }
  if (((v3 >> 5) & 0x7F) + 1 > (a1[1] - *a1) >> 2 ||
      ((*(_DWORD*)(*a1 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) == 0) {
    v10 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * (v3 & 0xFFF));
    v11 = *(_QWORD*)(v10 + 24);
    if ((a3 & 1) != 0) {
      v12 = *(_QWORD*)(v11 + 736);
      v13 = *(_QWORD*)(v11 + 744);
      if (v12 != v13) {
        v14 = a3;
        do {
          UnitSkillList_84d980(a1, v12);
          v12 += 4;
        } while (v12 != v13);
        v11 = *(_QWORD*)(v10 + 24);
        a3 = v14;
      }
    }
    v15 = *(_DWORD*)(v11 + 1128);
    if (v15 == 0) {
      goto LABEL_24;
    }
    v16 = (_DWORD*)a1[4];
    v17 = (_DWORD*)a1[5];
    if (v17 == v16) {
      goto LABEL_24;
    }
    v18 = 0;
    v19 = v17 - v16;
    while (1) {
      v20 =
          *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*v16 & 0xFFF));
      if (*(_DWORD*)(*(_QWORD*)(v20 + 24) + 1128LL) == v15) {
        break;
      }
      ++v18;
      ++v16;
      if (v19 == v18) {
        goto LABEL_24;
      }
    }
    if ((a3 & 1) != 0) {
      if (*(unsigned __int8*)(v20 + 108) >=
          (unsigned int)*(unsigned __int8*)(v10 + 108)) {
        return 0;
      }
      game_Unit_SkillList_MoveBit(a1);
      *(_DWORD*)(a1[4] + 4 * v18) = *a2;
    }
    else {
    LABEL_24:
      GameRoutine_6e3d00(a1 + 4, a2);
      v22 = (unsigned int)*a2;
      v23 = *a1;
      v24 = (v22 >> 5) & 0x7F;
      v25 = (a1[1] - *a1) >> 2;
      if (v24 + 1 <= v25) {
        v28 = *(_DWORD*)(v23 + 4 * ((v22 >> 5) & 0x7F));
        result = 1;
        v27 = 1 << v22;
        if ((v28 & (1 << v22)) != 0) {
          return result;
        }
        v26 = (v22 >> 5) & 0x7F;
      }
      else {
        v35 = 0;
        GameRoutine_66dd60(a1, v24 + 1 - v25, &v35);
        v23 = *a1;
        v26 = (v22 >> 5) & 0x7F;
        v27 = 1 << v22;
        v28 = *(_DWORD*)(*a1 + 4 * v26);
      }
      *(_DWORD*)(v23 + 4 * v26) = v28 | v27;
      ++*((_DWORD*)a1 + 6);
    }
    return 1;
  }
  v6 = a1[4];
  v7 = a1[5];
  if (v7 == v6) {
    return 0;
  }
  v8 = (v7 - v6) >> 2;
  v9 = 0;
  while (((*(_DWORD*)(v6 + 4 * v9) ^ (unsigned int)v3) & 0xFFF) != 0) {
    if (v8 == ++v9) {
      return 0;
    }
  }
  if (v9 < 0) {
    return 0;
  }
  v29 = (unsigned int)v9;
  v30 = *(_DWORD*)(v6 + 4LL * (unsigned int)v9);
  v31 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                       8LL * (v30 & 0xFFF)) +
                            281LL);
  if (v31 <= 1) {
    v31 = 1;
  }
  v32 = v31 - 1;
  if (v32 != 0) {
    v33 = (v30 >> 19) & 0x1F;
    if (v32 == v33) {
      v32 = 0;
    }
    else {
      if (v32 >= v33 + 1) {
        LOBYTE(v32) = v33 + 1;
      }
      v34 = v30 & 0xFF07FFFF | ((v32 & 0x1F) << 19);
      v32 = 1;
      *(_DWORD*)(v6 + 4 * v29) = v34;
      v6 = a1[4];
      v30 = *(_DWORD*)(v6 + 4 * v29);
    }
  }
  if ((v30 & 0x1F000000) == 0) {
    return v32;
  }
  *(_DWORD*)(v6 + 4 * v29) = v30 & 0xE0FFFFFF;
  return 1;
}

__int64 UnitSkillList_84d5a0(__int64 a1, unsigned __int16* a2)
{
  __int64 v2;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 result;
  int* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;

  if (*a2 == 0) {
    return 0;
  }
  v2 = 8;
  v5 = 0;
  v6 = 0;
  do {
    v7 = *(_QWORD*)(*((_QWORD*)a2 + 1) + v2);
    if (v7 != 0) {
      LODWORD(v7) = *(_WORD*)(v7 + 16) & 0xFFF;
    }
    v29 = v7;
    ++v5;
    v2 += 16;
    v6 |= UnitSkillList_84cc00((__int64*)a1, &v29, 0);
  } while (v5 < *a2);
  if ((v6 & 1) == 0) {
    return 0;
  }
  v8 = *(_QWORD*)(a1 + 32);
  v9 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v10 = v9 - v8;
  if ((int)((unsigned __int64)(v9 - v8) >> 2) < 1) {
    return 1;
  }
  v11 = (int)(v10 >> 2);
  if (v11 <= 1) {
    v12 = 1;
  }
  else {
    v12 = (int)(v10 >> 2);
  }
  v13 = *GameData_212c880[0];
  if (v11 >= 2) {
    v20 = (int*)(v8 + 4);
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    do {
      v18 += 2;
      v21 = *(_QWORD*)(*(_QWORD*)(v13 + 64) + 8LL * (*(v20 - 1) & 0xFFF));
      v22 = v17 | (1 << *(_BYTE*)(v21 + 104));
      *(_WORD*)(a1 + 80) = v22;
      v23 = (1LL << *(_BYTE*)(v21 + 250)) | v16;
      *(_QWORD*)(a1 + 88) = v23;
      v24 = (1 << *(_BYTE*)(v21 + 115)) | v15;
      *(_DWORD*)(a1 + 84) = v24;
      v25 = v14 | *(unsigned __int16*)(*(_QWORD*)(v21 + 24) + 1064LL);
      *(_WORD*)(a1 + 82) = v25;
      v26 = *v20;
      v20 += 2;
      v27 = *(_QWORD*)(*(_QWORD*)(v13 + 64) + 8LL * (v26 & 0xFFF));
      v17 = v22 | (1 << *(_BYTE*)(v27 + 104));
      *(_WORD*)(a1 + 80) = v17;
      v16 = (1LL << *(_BYTE*)(v27 + 250)) | v23;
      *(_QWORD*)(a1 + 88) = v16;
      v15 = (1 << *(_BYTE*)(v27 + 115)) | v24;
      *(_DWORD*)(a1 + 84) = v15;
      v14 = v25 | *(unsigned __int16*)(*(_QWORD*)(v27 + 24) + 1064LL);
      *(_WORD*)(a1 + 82) = v14;
    } while ((v12 & 0x7FFFFFFFFFFFFFFELL) != v18);
  }
  else {
    LOWORD(v14) = 0;
    v15 = 0;
    v16 = 0;
    LOWORD(v17) = 0;
    v18 = 0;
  }
  result = 1;
  if ((v12 & 1) != 0) {
    v28 = *(_QWORD*)(*(_QWORD*)(v13 + 64) +
                     8LL * (*(_DWORD*)(v8 + 4 * v18) & 0xFFF));
    *(_WORD*)(a1 + 80) = v17 | (1 << *(_BYTE*)(v28 + 104));
    *(_QWORD*)(a1 + 88) = (1LL << *(_BYTE*)(v28 + 250)) | v16;
    *(_DWORD*)(a1 + 84) = (1 << *(_BYTE*)(v28 + 115)) | v15;
    *(_WORD*)(a1 + 82) = v14 | *(_WORD*)(*(_QWORD*)(v28 + 24) + 1064LL);
  }
  return result;
}

__int64 UnitSkillList_84d980(__int64* a1, unsigned int* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;

  v2 = *a2;
  v3 = *a1;
  v4 = (a1[1] - *a1) >> 2;
  if (v4 < ((v2 >> 5) & 0x7F) + 1) {
    return 0;
  }
  if (((*(_DWORD*)(v3 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) == 0) {
    return 0;
  }
  v7 = a1[4];
  v6 = a1[5];
  if (v6 == v7) {
    return 0;
  }
  v8 = 0;
  while (((*(_DWORD*)(v7 + 4 * v8) ^ (unsigned int)v2) & 0xFFF) != 0) {
    if ((v6 - v7) >> 2 == ++v8) {
      return 0;
    }
  }
  if (v8 < 0) {
    return 0;
  }
  v9 = *(unsigned int*)(v7 + 4LL * (unsigned int)v8);
  v10 = (unsigned int)v8;
  v11 = (v9 >> 5) & 0x7F;
  if (v4 >= v11 + 1) {
    v12 = *(_DWORD*)(v3 + 4 * ((v9 >> 5) & 0x7F));
    v13 = 1 << v9;
    if ((v12 & v13) != 0) {
      *(_DWORD*)(v3 + 4LL * (unsigned int)v11) = v12 & ~v13;
      --*((_DWORD*)a1 + 6);
      v7 = a1[4];
      v6 = a1[5];
    }
  }
  v14 = v7 + 4 * v10;
  v15 = v6 - (v14 + 4);
  if (v6 != v14 + 4) {
    v16 = a1;
    memmove(v7 + 4 * v10, v14 + 4, v6 - (v14 + 4));
    a1 = v16;
  }
  a1[5] = v14 + v15;
  return 1;
}

__int64 UnitSkillList_84dea0(__int64* a1, unsigned int* a2, _DWORD* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;

  v3 = *a2;
  v4 = *a1;
  v5 = (a1[1] - *a1) >> 2;
  if (v5 < ((v3 >> 5) & 0x7F) + 1) {
    return 0;
  }
  if (((*(_DWORD*)(v4 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) == 0) {
    return 0;
  }
  v7 = a1[4];
  v8 = a1[5] - v7;
  if (v8 == 0) {
    return 0;
  }
  v9 = v8 >> 2;
  v10 = 0;
  while (((*(_DWORD*)(v7 + 4 * v10) ^ (unsigned int)v3) & 0xFFF) != 0) {
    if (v9 == ++v10) {
      return 0;
    }
  }
  if (v10 < 0) {
    return 0;
  }
  v11 = (unsigned int)*a3;
  if (v5 >= ((v11 >> 5) & 0x7F) + 1 &&
      ((*(_DWORD*)(v4 + 4 * ((v11 >> 5) & 0x7F)) >> v11) & 1) != 0) {
    return 0;
  }
  game_Unit_SkillList_MoveBit(a1);
  *(_DWORD*)(a1[4] + 4LL * (unsigned int)v10) = *a3;
  a1[10] = 0;
  a1[11] = 0;
  v14 = a1[4];
  v15 = a1[5] - v14;
  if ((int)((unsigned __int64)v15 >> 2) < 1) {
    return 1;
  }
  v16 = (int)(v15 >> 2);
  if (v16 <= 1) {
    v17 = 1;
  }
  else {
    v17 = (int)(v15 >> 2);
  }
  v18 = *GameData_212c880[0];
  if (v16 >= 2) {
    v24 = (int*)(v14 + 4);
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    do {
      v23 += 2;
      v25 = *(_QWORD*)(*(_QWORD*)(v18 + 64) + 8LL * (*(v24 - 1) & 0xFFF));
      v26 = v22 | (1 << *(_BYTE*)(v25 + 104));
      *((_WORD*)a1 + 40) = v26;
      v27 = (1LL << *(_BYTE*)(v25 + 250)) | v21;
      a1[11] = v27;
      v28 = (1 << *(_BYTE*)(v25 + 115)) | v20;
      *((_DWORD*)a1 + 21) = v28;
      v29 = v19 | *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL);
      *((_WORD*)a1 + 41) = v29;
      v30 = *v24;
      v24 += 2;
      v31 = *(_QWORD*)(*(_QWORD*)(v18 + 64) + 8LL * (v30 & 0xFFF));
      v22 = v26 | (1 << *(_BYTE*)(v31 + 104));
      *((_WORD*)a1 + 40) = v22;
      v21 = (1LL << *(_BYTE*)(v31 + 250)) | v27;
      a1[11] = v21;
      v20 = (1 << *(_BYTE*)(v31 + 115)) | v28;
      *((_DWORD*)a1 + 21) = v20;
      v19 = v29 | *(unsigned __int16*)(*(_QWORD*)(v31 + 24) + 1064LL);
      *((_WORD*)a1 + 41) = v19;
    } while ((v17 & 0x7FFFFFFFFFFFFFFELL) != v23);
  }
  else {
    LOWORD(v19) = 0;
    v20 = 0;
    v21 = 0;
    LOWORD(v22) = 0;
    v23 = 0;
  }
  result = 1;
  if ((v17 & 1) != 0) {
    v32 = *(_QWORD*)(*(_QWORD*)(v18 + 64) +
                     8LL * (*(_DWORD*)(v14 + 4 * v23) & 0xFFF));
    *((_WORD*)a1 + 40) = v22 | (1 << *(_BYTE*)(v32 + 104));
    a1[11] = (1LL << *(_BYTE*)(v32 + 250)) | v21;
    *((_DWORD*)a1 + 21) = (1 << *(_BYTE*)(v32 + 115)) | v20;
    *((_WORD*)a1 + 41) = v19 | *(_WORD*)(*(_QWORD*)(v32 + 24) + 1064LL);
  }
  return result;
}

__int64 UnitSkillList_84e640(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  __int16 v13;
  int v14;

  v1 = *(_QWORD*)result;
  v2 = *(_QWORD*)(result + 8) - *(_QWORD*)result;
  v14 = GameData_21d97e0 & 0xFFF;
  v3 = ((unsigned __int64)(unsigned int)GameData_21d97e0 >> 5) & 0x7F;
  if (v3 + 1 <= v2 >> 2 &&
      ((*(_DWORD*)(v1 + 4LL * (unsigned int)v3) >> GameData_21d97e0) & 1) !=
          0) {
    v4 = result;
    result = game_HasActiveSkill_843420(&v14, result);
    if ((result & 1) != 0) {
      v5 = *(_QWORD*)(v4 + 32);
      v6 = *(_QWORD*)(v4 + 40);
      if ((int)((unsigned __int64)(v6 - v5) >> 2) >= 1) {
        v7 = 0;
        v8 = 0;
        v9 = GameData_212c880[0];
        v10 = *GameData_212c880[0];
        do {
          v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                      8LL * (*(_DWORD*)(v5 + v7) & 0xFFF)) +
                           24LL);
          v13 = *(_WORD*)(v11 + 4);
          v12 = (_DWORD*)(v11 + 4);
          if ((v13 & 0xFFF) != 0) {
            result = game_Unit_SkillList_MoveBit(v4);
            *(_DWORD*)(*(_QWORD*)(v4 + 32) + 4 * v8) = *v12;
            v10 = *v9;
            v5 = *(_QWORD*)(v4 + 32);
            v6 = *(_QWORD*)(v4 + 40);
          }
          ++v8;
          v7 += 4;
        } while (v8 < (int)((unsigned __int64)(v6 - v5) >> 2));
      }
    }
  }
  return result;
}

__int64 UnitSkillList_84e760(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int16* v5;
  __int64 v6;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  int* v41;
  int v42;
  __int64 v43;
  int v44;

  v1 = *(_QWORD*)(result + 32);
  if ((int)((unsigned __int64)(*(_QWORD*)(result + 40) - v1) >> 2) >= 1) {
    v2 = result;
    v3 = 0;
    v4 = GameData_212c880[0];
    v5 = GameData_212cf08[0];
    while (1) {
      if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                               8LL * (*(_DWORD*)(v1 + 4 * v3) & 0xFFF)) +
                    496LL) != 0) {
        result = game_HasActiveSkill_843420(v1 + 4 * v3, v2);
        if ((result & 1) != 0) {
          v6 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                          8LL * (*(_DWORD*)(v1 + 4 * v3) & 0xFFF));
          v7 = *(unsigned __int16*)(v6 + 496);
          if (*(_WORD*)(v6 + 496) != 0) {
            break;
          }
        }
      }
    LABEL_3:
      v1 = *(_QWORD*)(v2 + 32);
      if (++v3 >= (int)((unsigned __int64)(*(_QWORD*)(v2 + 40) - v1) >> 2)) {
        return result;
      }
    }
    v8 = *v5;
    v9 = 0;
    while (1) {
      v10 = *(_QWORD*)(*(_QWORD*)(v6 + 504) + 16 * v9 + 8);
      if (((unsigned __int16)(1 << *(_BYTE*)(v10 + 104)) &
           (unsigned __int16)v8) != 0) {
        goto LABEL_9;
      }
      v44 = *(_WORD*)(v10 + 16) & 0xFFF;
      result = UnitSkillList_84cc00((__int64*)v2, &v44, 1);
      if ((result & 1) != 0) {
        v12 = *(_QWORD*)(v2 + 32);
        v11 = *(_QWORD*)(v2 + 40);
        *(_QWORD*)(v2 + 80) = 0;
        *(_QWORD*)(v2 + 88) = 0;
        v13 = v11 - v12;
        if ((int)((unsigned __int64)(v11 - v12) >> 2) >= 1) {
          v14 = *v4;
          v15 = (int)(v13 >> 2);
          if (v15 <= 1) {
            v16 = 1;
          }
          else {
            v16 = (int)(v13 >> 2);
          }
          if (v15 >= 4) {
            v23 = (_DWORD*)(v12 + 8);
            v24 = 0;
            v17 = 0;
            v18 = 0;
            v19 = 0;
            v20 = 0;
            do {
              v24 -= 4;
              v25 =
                  *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (*(v23 - 2) & 0xFFF));
              v26 = v20 | (1 << *(_BYTE*)(v25 + 104));
              *(_WORD*)(v2 + 80) = v26;
              v27 = (1LL << *(_BYTE*)(v25 + 250)) | v19;
              *(_QWORD*)(v2 + 88) = v27;
              v28 = (1 << *(_BYTE*)(v25 + 115)) | v18;
              *(_DWORD*)(v2 + 84) = v28;
              v29 = v17 | *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL);
              *(_WORD*)(v2 + 82) = v29;
              v30 =
                  *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (*(v23 - 1) & 0xFFF));
              v31 = v26 | (1 << *(_BYTE*)(v30 + 104));
              *(_WORD*)(v2 + 80) = v31;
              v32 = (1LL << *(_BYTE*)(v30 + 250)) | v27;
              *(_QWORD*)(v2 + 88) = v32;
              v33 = (1 << *(_BYTE*)(v30 + 115)) | v28;
              *(_DWORD*)(v2 + 84) = v33;
              v34 = v29 | *(unsigned __int16*)(*(_QWORD*)(v30 + 24) + 1064LL);
              *(_WORD*)(v2 + 82) = v34;
              v35 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (*v23 & 0xFFF));
              v36 = v31 | (1 << *(_BYTE*)(v35 + 104));
              *(_WORD*)(v2 + 80) = v36;
              v37 = (1LL << *(_BYTE*)(v35 + 250)) | v32;
              *(_QWORD*)(v2 + 88) = v37;
              v38 = (1 << *(_BYTE*)(v35 + 115)) | v33;
              *(_DWORD*)(v2 + 84) = v38;
              v39 = v34 | *(unsigned __int16*)(*(_QWORD*)(v35 + 24) + 1064LL);
              *(_WORD*)(v2 + 82) = v39;
              LOWORD(v35) = v23[1];
              v23 += 4;
              v40 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8 * (v35 & 0xFFF));
              v20 = v36 | (1 << *(_BYTE*)(v40 + 104));
              *(_WORD*)(v2 + 80) = v20;
              v19 = (1LL << *(_BYTE*)(v40 + 250)) | v37;
              *(_QWORD*)(v2 + 88) = v19;
              result = (unsigned int)(1 << *(_BYTE*)(v40 + 115));
              v18 = result | v38;
              *(_DWORD*)(v2 + 84) = v18;
              v17 = v39 | *(unsigned __int16*)(*(_QWORD*)(v40 + 24) + 1064LL);
              *(_WORD*)(v2 + 82) = v17;
            } while (-(__int64)(v16 & 0xFFFFFFFFFFFFFFFCLL) != v24);
            v21 = -v24;
            v22 = v16 & 3;
            if (v22 == 0) {
              goto LABEL_8;
            }
          LABEL_22:
            v41 = (int*)(v12 + 4 * v21);
            do {
              v42 = *v41++;
              --v22;
              v43 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (v42 & 0xFFF));
              v20 |= 1 << *(_BYTE*)(v43 + 104);
              *(_WORD*)(v2 + 80) = v20;
              v19 |= 1LL << *(_BYTE*)(v43 + 250);
              *(_QWORD*)(v2 + 88) = v19;
              v18 |= 1 << *(_BYTE*)(v43 + 115);
              *(_DWORD*)(v2 + 84) = v18;
              v17 |= *(unsigned __int16*)(*(_QWORD*)(v43 + 24) + 1064LL);
              *(_WORD*)(v2 + 82) = v17;
            } while (v22 != 0);
            goto LABEL_8;
          }
          v17 = 0;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v22 = v16 & 3;
          if (v22 != 0) {
            goto LABEL_22;
          }
        }
      }
    LABEL_8:
      v8 = *v5;
    LABEL_9:
      if (++v9 == v7) {
        goto LABEL_3;
      }
    }
  }
  return result;
}

__int64 UnitSkillList_857d20(__int64 a1, _DWORD* a2)
{
  __int64 result;
  __int64 v5;
  int v6;

  result = game_HasActiveSkill_843420(a2, a1 + 8);
  if ((result & 1) != 0) {
    v5 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v5 + 256) != 0) {
      v6 = **(__int16**)(v5 + 264);
    }
    else {
      v6 = 0;
    }
    **(_DWORD**)(a1 + 40) += v6;
  }
  return result;
}

__int64 UnitSkillList_858000(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int* v5;
  __int64 v6;
  int v7;

  result = game_HasActiveSkill_843420(a2, a1 + 8);
  if ((result & 1) != 0) {
    v5 = *(int**)(a1 + 40);
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v6 + 256) != 0) {
      v7 = **(__int16**)(v6 + 264);
    }
    else {
      v7 = 0;
    }
    if (*v5 > v7) {
      v7 = *v5;
    }
    *v5 = v7;
  }
  return result;
}

__int64 UnitSkillList_858170(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int* v5;
  __int64 v6;
  int v7;

  result = game_HasActiveSkill_843420(a2, *(_QWORD*)(a1 + 8));
  if ((result & 1) != 0) {
    v5 = *(int**)(a1 + 16);
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v6 + 256) != 0) {
      v7 = **(__int16**)(v6 + 264);
    }
    else {
      v7 = 0;
    }
    if (*v5 > v7) {
      v7 = *v5;
    }
    *v5 = v7;
  }
  return result;
}

__int64 UnitSkillList_8582e0(__int64 a1, _DWORD* a2)
{
  __int64 result;
  __int64 v5;
  int v6;

  result = game_HasActiveSkill_843420(a2, *(_QWORD*)(a1 + 8));
  if ((result & 1) != 0) {
    v5 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v5 + 256) != 0) {
      v6 = **(__int16**)(v5 + 264);
    }
    else {
      v6 = 0;
    }
    **(_DWORD**)(a1 + 16) += v6;
  }
  return result;
}

float UnitSkillList_858450(__int64 a1, _DWORD* a2)
{
  float result;
  float* v5;
  __int64 v6;
  float v7;

  if ((game_HasActiveSkill_843420(a2, *(_QWORD*)(a1 + 8)) & 1) != 0) {
    v5 = *(float**)(a1 + 16);
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v6 + 256) != 0) {
      v7 = (float)**(__int16**)(v6 + 264);
    }
    else {
      v7 = 0.0;
    }
    result = (float)(*v5 * v7) / 100.0;
    *v5 = result;
  }
  return result;
}

__int64 UnitSkillList_8585d0(__int64 a1, _DWORD* a2)
{
  __int64 result;

  result = game_HasActiveSkill_843420(a2, *(_QWORD*)(a1 + 8));
  if ((result & 1) != 0) {
    **(_QWORD**)(a1 + 16) =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  }
  return result;
}

__int64 UnitSkillList_858720(__int64 a1, _DWORD* a2)
{
  __int64 result;

  result = game_HasActiveSkill_843420(a2, *(_QWORD*)(a1 + 8));
  if ((result & 1) != 0 &&
      (HIBYTE(*a2) & 0x1F) ==
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                               8 * (*a2 & 0xFFFLL)) +
                    304LL)) {
    **(_BYTE**)(a1 + 16) = 1;
  }
  return result;
}

__int64 UnitSkillList_858e20(__int64 result, _DWORD* a2)
{
  __int64* v2;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(__int64**)(result + 8);
    result = GameRoutine_6fc650(*(
        _QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF)));
    if ((result & 1) != 0) {
      return UnitSkillList_84cc00(v2, a2, 1);
    }
  }
  return result;
}

__int64* UnitSkillList_858f80(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* result;
  _QWORD* v5;
  int v6;

  v2 = *a2;
  if (*a2 != 0) {
    LODWORD(v2) = *(_WORD*)(v2 + 16) & 0xFFF;
  }
  result = *(__int64**)(a1 + 8);
  v5 = *(_QWORD**)(a1 + 16);
  v6 = v2;
  if (((unsigned int)v2 >> 5) + 1 >
          (unsigned __int64)((__int64)(v5[1] - *v5) >> 2) ||
      ((*(_DWORD*)(*v5 + 4LL * ((unsigned int)v2 >> 5)) >> v2) & 1) == 0) {
    return (__int64*)UnitSkillList_84cc00(result, &v6, 1);
  }
  return result;
}

__int64* UnitSkillList_8590e0(__int64 a1, _DWORD* a2)
{
  __int64* v2;
  __int64* result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;

  v2 = *(__int64**)(a1 + 16);
  result = *(__int64**)(a1 + 8);
  v4 = *v2;
  v5 = v2[1];
  v6 = (unsigned int)*a2;
  if (((v6 >> 5) & 0x7F) + 1 > (v5 - v4) >> 2 ||
      ((*(_DWORD*)(v4 + 4 * ((v6 >> 5) & 0x7F)) >> v6) & 1) == 0) {
    return (__int64*)UnitSkillList_84cc00(result, a2, 1);
  }
  return result;
}

__int64* UnitSkillList_859210(__int64 a1, unsigned int* a2)
{
  __int64* result;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  char v8;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 v11;

  result = *(__int64**)(a1 + 8);
  v4 = *a2;
  if (((v4 >> 5) & 0x7F) + 1 <= (result[1] - *result) >> 2 &&
      ((*(_DWORD*)(*result + 4 * ((v4 >> 5) & 0x7F)) >> v4) & 1) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                               8 * (v4 & 0xFFF)) +
                    24LL);
    v6 = **(_QWORD**)(a1 + 16);
    v9 = *(_DWORD*)(v5 + 12);
    v7 = (_DWORD*)(v5 + 12);
    v8 = v9;
    v10 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) - v6;
    v11 = ((unsigned __int64)v9 >> 5) & 0x7F;
    if (v11 + 1 > v10 >> 2 ||
        ((*(_DWORD*)(v6 + 4LL * (unsigned int)v11) >> v8) & 1) == 0) {
      return (__int64*)UnitSkillList_84cc00(result, v7, 1);
    }
  }
  return result;
}

#pragma GCC visibility pop
