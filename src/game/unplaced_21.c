#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* Image_72c060(__int64, __int64, unsigned int, unsigned int, __int64);
_QWORD* game_19209f0(_QWORD* result, int*, _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8, __int64, const char*,
                                               __int64, char);
__attribute__((swiftcall)) void fs_a501f0(PSEUDO_X8, __int64, const char*);
__attribute__((swiftcall)) void game_112e760(PSEUDO_X8, const char*);
__attribute__((swiftcall)) void game_ffd4e0(PSEUDO_X8, const char*);
__int64* GameRoutine_714e40();
__int64* Manager_bc6460(_QWORD*, __int64, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, __int64,
                                      char) __asm__("Manager_bc6460");
__int64* game_6f1f10(__int64* result, __int64*, __int64*, __int64*, __int64*);
__int64* game_8224a0(unsigned __int8);
__int64* game_UnitPool_Get(_BYTE*);
__int64* game_deb450(__int64* result, __int64*, __int64*, __int64*, __int64*);
__int64 AITarget_1276580(__int64, int);
__int64 Character_caf760(__int64);
__int64 GameHr_11e8ca0(__int64, __int64);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_84cf20(__int64, __int64, char);
__int64 GameRoutine_11fe0c0(__int64, __int64);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_73a560(_QWORD*);
__int64 GameRoutine_747a00(__int64, __int64, __int64, __int64, char);
__int64 GameRoutine_a51280(__int64, const char*);
__int64 GameRoutine_d76fd0(__int64 result, __int64, __int64, float*);
__int64 GameRoutine_ec1530();
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15635a0(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 UnitActor_81ab40(__int64, float, float);
__int64 UnitSkillList_84cc00(__int64*, _DWORD*, __int64);
__int64 Unit_6cb490(__int64);
__int64 Unit_6d2480(__int64 result, __int64, char, char);
__int64 Unit_6ddce0(__int64);
__int64 fs_a50960(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_11f51f0(__int64, int, int);
__int64 game_11f5940(__int64 result, int, int, unsigned __int8, bool*);
__int64 game_1650510(__int64);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_6d69a0(__int64);
__int64 game_809ba0(__int64, float);
__int64 game_AITarget_EnumerateAssist(__int64, __int64, int, int, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 game_Unit_AutoGrowMasteryLevel(unsigned __int64, __int64*);
__int64 game_Unit_CheckEquipment(__int64);
__int64 game_Unit_EquipFirstWeapon(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_SetPollution(__int64, int);
__int64 game_Unit_Unknown6c4610(__int64);
__int64 game_Unit_Unknown6cd8f0(_WORD*);
__int64 game_Unit_Unknown6d2380(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool AISupportSkillScope_11ff100(int*, int*);
bool AISupportSkillScope_11ff4a0(_DWORD*, int*);
bool GameManager_a35ca0(__int64, unsigned __int8*);
bool GameRoutine_1011550(unsigned __int8*, int, char);
bool LayoutAccessor_1563380(__int64*, __int64, char);
bool game_11f30c0(__int64, unsigned __int16*, char);
bool game_183b340(_DWORD*, int*);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_2130948;
extern _UNKNOWN GameData_1adf2f5;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_2130988[3];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d290;
extern __int64 GameData_212f510[6];
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21306c0[3];
extern __int64 GameData_21306c8[2];
extern __int64 GameData_21c99a8;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca080;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d9188;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 GameData_22400c8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_sound_g_game_sound;
extern char* game_hub_g_motions;
extern char GameData_1a9f09e;
extern char GameData_21f3fe4;
extern int GameData_21d97bc;
extern int GameData_21d9864;
extern int game_g_shared_system_skills;
float LayoutAccessor_15638b0(__int64*, char*, char);
float ui_LayoutAccessor_GetScale(__int64*);
int* GameRoutine_183b190(int* result, int*, int*, int*);
int sprintf(__int64, const char*, ...);
int strncmp(const char*, const char*, unsigned __int64);
unsigned __int64 strlen(const char*);
void AISupportSkillScope_11fef70(_DWORD*);
void GameHr_1219100(__int64);
void GameHr_1226120(__int64, __int64);
void GameHr_6c3050(__int64);
void SpineCaptureProcessor_1921e00(__int64);
void __attribute__((noreturn)) String_60a1d0();
void game_6e4de0(int*);
void game_6e50e0(__int64);
void game_6e5480(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_65d530(__int64 a1);
void game_6d5fc0(unsigned __int64 a1, int* a2);
bool game_6f20e0(__int64* a1, __int64* a2);
unsigned __int64 game_842cb0(_DWORD* a1, _QWORD* a2);
unsigned __int64 game_842e20(_DWORD* a1, _QWORD* a2, unsigned __int16* a3);
__int64 game_932d40(unsigned __int8* a1);
__int64 game_d775b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float* a5);
bool game_deb620(__int64* a1, __int64* a2);
__int64 game_fb7e20(_QWORD* a1, __int64* a2);
__int64 game_100b330(__int64 result);
bool game_108cdc0(int a1);
__attribute__((swiftcall)) void game_109da60(PSEUDO_X8 x8_, float32x4_t* a1,
                                             float32x4_t* a2, int8x16_t result);
__attribute__((swiftcall)) void game_113b050(PSEUDO_X8 x8_, const char* a1);
bool game_11fe200(__int64 a1, __int64 a2);
bool game_1216b80(__int64 a1, __int64 a2, __int64 a3);
__int64 game_128df90(__int64 a1, __int64* a2);
__int64 game_165eb40(__int64 result);
__int64 game_16966e0(const char* a1);
unsigned __int64 game_183a3e0(unsigned __int64 result, int* a2, __int64 a3,
                              char a4);
__int64 game_19218c0(_QWORD* a1, int* a2, _QWORD* a3, int a4);

__int64 game_65d530(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;

  {
    v1 = *(int*)(a1 + 20);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  *(_DWORD*)(a1 + 20) = v1 + 1;
  {
    v3 = *(unsigned __int8*)(v2 + v1);
    __asm__ volatile("" ::"r"(v3));
  }
  *(_DWORD*)(a1 + 20) = v1 + 2;
  {
    v4 = v3 | (*(unsigned __int8*)(v2 + v1 + 1) << 8);
    __asm__ volatile("" ::"r"(v4));
  }
  *(_DWORD*)(a1 + 20) = v1 + 3;
  {
    v5 = *(unsigned __int8*)(v2 + v1 + 2);
    __asm__ volatile("" ::"r"(v5));
  }
  *(_DWORD*)(a1 + 20) = v1 + 4;
  return v4 | (v5 << 16) | (*(unsigned __int8*)(v2 + v1 + 3) << 24);
}

void game_6d5fc0(unsigned __int64 a1, int* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v5;
  int v7;
  __int64 v8;
  char v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  _BYTE* v28;
  _DWORD* v29;
  __int64 v30;
  _BYTE* v31;
  _BYTE* v32;
  __int64 v33;
  _BYTE* v34;
  _BYTE* v35;
  _BYTE* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  int* v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  _BYTE* v63;
  _DWORD* v64;
  __int64 v65;
  _BYTE* v66;
  _BYTE* v67;
  __int64 v68;
  _BYTE* v69;
  _BYTE* v70;
  _BYTE* v71;
  int v72;
  int v73;
  float v74;
  int v75;
  __int64* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85[2];
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  int v97;
  char v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  int v105;

  {
    v2 = *((_QWORD*)a2 + 1);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == 0) {
    if (*(_QWORD*)a2 != 0) {
      v2 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
      __asm__ volatile("" ::"r"(v2));
    }
    else {
      v2 = 0;
    }
  }
  v5 = GameRoutine_73a560(a2);
  {
    v7 = a2[4];
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *(_QWORD*)a2;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v7 <= 0) {
    if (v8 != 0) {
      {
        v7 = *(unsigned __int8*)(v8 + 59);
        __asm__ volatile("" ::"r"(v7));
      }
      if (*(_BYTE*)(v8 + 59) != 0) {
        goto LABEL_6;
      }
      {
        v11 = *((_QWORD*)a2 + 1);
        __asm__ volatile("" ::"r"(v11));
      }
      if (v11 == 0) {
        {
          v11 = *(_QWORD*)(v8 + 40);
          __asm__ volatile("" ::"r"(v11));
        }
        if (v11 == 0) {
        LABEL_16:
          v7 = 1;
          goto LABEL_6;
        }
      }
    }
    else {
      {
        v11 = *((_QWORD*)a2 + 1);
        __asm__ volatile("" ::"r"(v11));
      }
      if (v11 == 0) {
        goto LABEL_16;
      }
    }
    if (game_GameModeData_instance_ != 0) {
      {
        v14 = *(_DWORD*)(game_GameModeData_instance_ + 68);
        __asm__ volatile("" ::"r"(v14));
      }
      {
        v15 = *(_QWORD*)(game_GameModeData_instance_ + 16);
        __asm__ volatile("" ::"r"(v15));
      }
      if (v15 != 0) {
        v14 += *(char*)(v15 + 128);
      }
      {
        v7 = *(unsigned __int8*)(v11 + 442);
        __asm__ volatile("" ::"r"(v7));
      }
      if (*(_BYTE*)(v11 + 442) != 0) {
        goto LABEL_6;
      }
    }
    else {
      v14 = 0;
      {
        v7 = *(unsigned __int8*)(v11 + 442);
        __asm__ volatile("" ::"r"(v7));
      }
      if (*(_BYTE*)(v11 + 442) != 0) {
        goto LABEL_6;
      }
    }
    if (*(_BYTE*)(v11 + 443) != 0) {
      {
        v7 = v14 + *(char*)(v11 + 443);
        __asm__ volatile("" ::"r"(v7));
      }
      if (v7 <= 1) {
        v7 = 1;
      }
      if (v7 >= 99) {
        v7 = 99;
      }
    }
    else {
      v7 = v14;
    }
  }
LABEL_6:
  if (*(_BYTE*)(v8 + 48) != 0 || (*(_WORD*)(v8 + 50) & 0x20) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(v8 + 40) + 49LL) & 1) == 0) {
    v9 = 4;
  }
  else {
    v9 = 5;
  }
  v85[0] = v2;
  v85[1] = v5;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v96 = 0x3F80000000000000LL;
  if (game_GameModeData_instance_ != 0) {
    v10 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    __asm__ volatile("" ::"r"(v10));
  }
  else {
    v10 = 0;
  }
  v97 = v10;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v99 = 262;
  if (v7 != 0) {
    goto LABEL_45;
  }
  if (game_GameModeData_instance_ == 0) {
    v12 = 0;
    {
      v7 = *(unsigned __int8*)(v2 + 442);
      __asm__ volatile("" ::"r"(v7));
    }
    if (*(_BYTE*)(v2 + 442) != 0) {
      goto LABEL_45;
    }
    goto LABEL_31;
  }
  {
    v12 = *(_DWORD*)(game_GameModeData_instance_ + 68);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    __asm__ volatile("" ::"r"(v13));
  }
  if (v13 != 0) {
    v12 += *(char*)(v13 + 128);
  }
  {
    v7 = *(unsigned __int8*)(v2 + 442);
    __asm__ volatile("" ::"r"(v7));
  }
  if (*(_BYTE*)(v2 + 442) == 0) {
  LABEL_31:
    if (*(_BYTE*)(v2 + 443) != 0) {
      {
        v16 = v12 + *(char*)(v2 + 443);
        __asm__ volatile("" ::"r"(v16));
      }
      if (v16 <= 1) {
        v16 = 1;
      }
      if (v16 >= 99) {
        v7 = 99;
      }
      else {
        v7 = v16;
      }
    }
    else {
      v7 = v12;
    }
  }
LABEL_45:
  {
    v17 = *(unsigned __int8*)(v2 + 444);
    __asm__ volatile("" ::"r"(v17));
  }
  v98 = v9;
  v104 = v8;
  if (v7 > v17) {
    v17 = v7;
  }
  v95 = v17;
  game_6e4de0((int*)v85);
  game_6e50e0((__int64)v85);
  game_6e5480(v85);
  GameHr_6c3050(a1);
  game_Unit_AutoGrowMasteryLevel(a1, v85);
  {
    v18 = *(_QWORD*)a2;
    __asm__ volatile("" ::"r"(v18));
  }
  if (*(_QWORD*)(*(_QWORD*)a2 + 112LL) != 0 || *(_QWORD*)(v18 + 136) != 0 ||
      *(_QWORD*)(v18 + 160) != 0 || *(_QWORD*)(v18 + 184) != 0 ||
      *(_QWORD*)(v18 + 208) != 0) {
    *(_QWORD*)(a1 + 1052) = 0;
    *(_QWORD*)(a1 + 1060) = 0;
    *(_QWORD*)(a1 + 1036) = 0;
    *(_QWORD*)(a1 + 1044) = 0;
    *(_QWORD*)(a1 + 1020) = 0;
    *(_QWORD*)(a1 + 1028) = 0;
    *(_QWORD*)(a1 + 1004) = 0;
    *(_QWORD*)(a1 + 1012) = 0;
    *(_QWORD*)(a1 + 988) = 0;
    *(_QWORD*)(a1 + 996) = 0;
    *(_QWORD*)(a1 + 972) = 0;
    *(_QWORD*)(a1 + 980) = 0;
    *(_QWORD*)(a1 + 956) = 0;
    *(_QWORD*)(a1 + 964) = 0;
    *(_QWORD*)(a1 + 940) = 0;
    *(_QWORD*)(a1 + 948) = 0;
    *(_QWORD*)(a1 + 924) = 0;
    *(_QWORD*)(a1 + 932) = 0;
    *(_QWORD*)(a1 + 908) = 0;
    *(_QWORD*)(a1 + 916) = 0;
    *(_QWORD*)(a1 + 892) = 0;
    *(_QWORD*)(a1 + 900) = 0;
    *(_QWORD*)(a1 + 876) = 0;
    *(_QWORD*)(a1 + 884) = 0;
    *(_QWORD*)(a1 + 860) = 0;
    *(_QWORD*)(a1 + 868) = 0;
    *(_QWORD*)(a1 + 844) = 0;
    *(_QWORD*)(a1 + 852) = 0;
    *(_QWORD*)(a1 + 828) = 0;
    *(_QWORD*)(a1 + 836) = 0;
    {
      v19 = *(_QWORD*)a2;
      __asm__ volatile("" ::"r"(v19));
    }
    Unit_6d2480(a1, *(_QWORD*)(*(_QWORD*)a2 + 112LL), 1,
                *(_DWORD*)(*(_QWORD*)a2 + 120LL) != 0);
    Unit_6d2480(a1, *(_QWORD*)(v19 + 136), 1, *(_DWORD*)(v19 + 144) != 0);
    Unit_6d2480(a1, *(_QWORD*)(v19 + 160), 1, *(_DWORD*)(v19 + 168) != 0);
    Unit_6d2480(a1, *(_QWORD*)(v19 + 184), 1, *(_DWORD*)(v19 + 192) != 0);
    Unit_6d2480(a1, *(_QWORD*)(v19 + 208), 1, *(_DWORD*)(v19 + 216) != 0);
    game_Unit_Unknown6c4610(a1);
    game_Unit_CheckEquipment(a1);
    game_Unit_EquipFirstWeapon(a1);
    Unit_6ddce0(a1);
    {
      v18 = *(_QWORD*)a2;
      __asm__ volatile("" ::"r"(v18));
    }
  }
  *(_BYTE*)(a1 + 584) = *(_BYTE*)(v18 + 54);
  *(_BYTE*)(a1 + 585) = *(_BYTE*)(*(_QWORD*)a2 + 55LL);
  *(_BYTE*)(a1 + 586) = *(_BYTE*)(*(_QWORD*)a2 + 54LL);
  *(_BYTE*)(a1 + 587) = *(_BYTE*)(*(_QWORD*)a2 + 55LL);
  GameHr_11e8ca0(a1 + 1968, *(_QWORD*)a2 + 224LL);
  {
    v20 = *(_QWORD*)a2;
    __asm__ volatile("" ::"r"(v20));
  }
  {
    v21 = *(_WORD*)(*(_QWORD*)a2 + 50LL);
    __asm__ volatile("" ::"r"(v21));
  }
  if ((v21 & 8) != 0) {
    *(_DWORD*)(a1 + 416) |= 4u;
    {
      v20 = *(_QWORD*)a2;
      __asm__ volatile("" ::"r"(v20));
    }
    {
      v21 = *(_WORD*)(*(_QWORD*)a2 + 50LL);
      __asm__ volatile("" ::"r"(v21));
    }
  }
  if ((v21 & 0x20) != 0) {
    v105 = game_g_shared_system_skills & 0xFFF;
    if ((game_g_shared_system_skills & 0xFFF) != 0) {
      {
        v22 = *(_QWORD*)(a1 + 1776);
        __asm__ volatile("" ::"r"(v22));
      }
      {
        v23 = *(_QWORD*)(a1 + 1784) - v22;
        __asm__ volatile("" ::"r"(v23));
      }
      if ((int)(v23 >> 2) < 1) {
        v26 = 0;
      }
      else {
        {
          v24 = *(_QWORD*)(GameData_21c99b0 + 64);
          __asm__ volatile("" ::"r"(v24));
        }
        if ((v23 & 0x1FFFFFFFCLL) == 4) {
          v25 = 0;
          v26 = 0;
        }
        else {
          v29 = (_DWORD*)(v22 + 4);
          v25 = 0;
          v26 = 0;
          do {
            {
              v30 = *(_QWORD*)(v24 + 8LL * (*(v29 - 1) & 0xFFF));
              __asm__ volatile("" ::"r"(v30));
            }
            {
              v31 = *(_BYTE**)(v30 + 864);
              __asm__ volatile("" ::"r"(v31));
            }
            if (v31 != nullptr && *v31 != 0) {
              ++v26;
            }
            else {
              {
                v32 = *(_BYTE**)(v30 + 872);
                __asm__ volatile("" ::"r"(v32));
              }
              if (v32 != nullptr && *v32 != 0) {
                ++v26;
              }
            }
            {
              v33 = *(_QWORD*)(v24 + 8LL * (*v29 & 0xFFF));
              __asm__ volatile("" ::"r"(v33));
            }
            {
              v34 = *(_BYTE**)(v33 + 864);
              __asm__ volatile("" ::"r"(v34));
            }
            if (v34 != nullptr && *v34 != 0) {
              ++v26;
            }
            else {
              {
                v35 = *(_BYTE**)(v33 + 872);
                __asm__ volatile("" ::"r"(v35));
              }
              if (v35 != nullptr && *v35 != 0) {
                ++v26;
              }
            }
            v25 += 2;
            v29 += 2;
          } while (((v23 >> 2) & 0x7FFFFFFE) != v25);
        }
        if ((v23 & 4) != 0) {
          {
            v27 = *(_QWORD*)(v24 + 8LL * (*(_DWORD*)(v22 + 4 * v25) & 0xFFF));
            __asm__ volatile("" ::"r"(v27));
          }
          {
            v28 = *(_BYTE**)(v27 + 864);
            __asm__ volatile("" ::"r"(v28));
          }
          if (v28 != nullptr && *v28 != 0) {
            ++v26;
          }
          else {
            {
              v36 = *(_BYTE**)(v27 + 872);
              __asm__ volatile("" ::"r"(v36));
            }
            if (v36 != nullptr && *v36 != 0) {
              ++v26;
            }
          }
        }
      }
      if ((UnitSkillList_84cc00((__int64*)(a1 + 1360), &v105, 1) & 1) != 0) {
        {
          v37 = *(_QWORD*)(a1 + 1400);
          __asm__ volatile("" ::"r"(v37));
        }
        {
          v38 = *(_QWORD*)(a1 + 1392);
          __asm__ volatile("" ::"r"(v38));
        }
        *(_QWORD*)(a1 + 1448) = 0;
        v39 = v37 - v38;
        *(_QWORD*)(a1 + 1440) = 0;
        if ((int)((unsigned __int64)(v37 - v38) >> 2) >= 1) {
          v40 = GameData_21c99b0;
          v41 = (int)(v39 >> 2);
          v42 = v41 <= 1 ? 1LL : (int)(v39 >> 2);
          if (v41 >= 2) {
            v48 = (int*)(v38 + 4);
            v43 = 0;
            v44 = 0;
            v45 = 0;
            v46 = 0;
            v47 = 0;
            do {
              v47 += 2;
              {
                v49 = *(_QWORD*)(*(_QWORD*)(v40 + 64) +
                                 8LL * (*(v48 - 1) & 0xFFF));
                __asm__ volatile("" ::"r"(v49));
              }
              {
                v50 = v46 | (1 << *(_BYTE*)(v49 + 104));
                __asm__ volatile("" ::"r"(v50));
              }
              *(_WORD*)(a1 + 1440) = v50;
              {
                v51 = (1LL << *(_BYTE*)(v49 + 250)) | v45;
                __asm__ volatile("" ::"r"(v51));
              }
              *(_QWORD*)(a1 + 1448) = v51;
              {
                v52 = (1 << *(_BYTE*)(v49 + 115)) | v44;
                __asm__ volatile("" ::"r"(v52));
              }
              *(_DWORD*)(a1 + 1444) = v52;
              {
                v53 = *(unsigned __int16*)(*(_QWORD*)(v49 + 24) + 1064LL) | v43;
                __asm__ volatile("" ::"r"(v53));
              }
              *(_WORD*)(a1 + 1442) = v53;
              {
                v54 = *v48;
                __asm__ volatile("" ::"r"(v54));
              }
              v48 += 2;
              {
                v55 = *(_QWORD*)(*(_QWORD*)(v40 + 64) + 8LL * (v54 & 0xFFF));
                __asm__ volatile("" ::"r"(v55));
              }
              {
                v46 = v50 | (1 << *(_BYTE*)(v55 + 104));
                __asm__ volatile("" ::"r"(v46));
              }
              *(_WORD*)(a1 + 1440) = v46;
              {
                v45 = (1LL << *(_BYTE*)(v55 + 250)) | v51;
                __asm__ volatile("" ::"r"(v45));
              }
              *(_QWORD*)(a1 + 1448) = v45;
              {
                v44 = (1 << *(_BYTE*)(v55 + 115)) | v52;
                __asm__ volatile("" ::"r"(v44));
              }
              *(_DWORD*)(a1 + 1444) = v44;
              {
                v43 = *(unsigned __int16*)(*(_QWORD*)(v55 + 24) + 1064LL) | v53;
                __asm__ volatile("" ::"r"(v43));
              }
              *(_WORD*)(a1 + 1442) = v43;
            } while ((v42 & 0x7FFFFFFFFFFFFFFELL) != v47);
          }
          else {
            LOWORD(v43) = 0;
            v44 = 0;
            v45 = 0;
            LOWORD(v46) = 0;
            v47 = 0;
          }
          if ((v42 & 1) != 0) {
            {
              v56 = *(_QWORD*)(*(_QWORD*)(v40 + 64) +
                               8LL * (*(_DWORD*)(v38 + 4 * v47) & 0xFFF));
              __asm__ volatile("" ::"r"(v56));
            }
            *(_WORD*)(a1 + 1440) = v46 | (1 << *(_BYTE*)(v56 + 104));
            *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v56 + 250)) | v45;
            *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v56 + 115)) | v44;
            *(_WORD*)(a1 + 1442) =
                *(_WORD*)(*(_QWORD*)(v56 + 24) + 1064LL) | v43;
          }
        }
        game_Unit_Unknown6cd8f0((_WORD*)a1);
      }
      {
        v57 = *(_QWORD*)(a1 + 1776);
        __asm__ volatile("" ::"r"(v57));
      }
      {
        v58 = *(_QWORD*)(a1 + 1784) - v57;
        __asm__ volatile("" ::"r"(v58));
      }
      if ((int)(v58 >> 2) < 1) {
        v61 = 0;
      }
      else {
        {
          v59 = *(_QWORD*)(GameData_21c99b0 + 64);
          __asm__ volatile("" ::"r"(v59));
        }
        if ((v58 & 0x1FFFFFFFCLL) == 4) {
          v60 = 0;
          v61 = 0;
        }
        else {
          v64 = (_DWORD*)(v57 + 4);
          v60 = 0;
          v61 = 0;
          do {
            {
              v65 = *(_QWORD*)(v59 + 8LL * (*(v64 - 1) & 0xFFF));
              __asm__ volatile("" ::"r"(v65));
            }
            {
              v66 = *(_BYTE**)(v65 + 864);
              __asm__ volatile("" ::"r"(v66));
            }
            if (v66 != nullptr && *v66 != 0) {
              ++v61;
            }
            else {
              {
                v67 = *(_BYTE**)(v65 + 872);
                __asm__ volatile("" ::"r"(v67));
              }
              if (v67 != nullptr && *v67 != 0) {
                ++v61;
              }
            }
            {
              v68 = *(_QWORD*)(v59 + 8LL * (*v64 & 0xFFF));
              __asm__ volatile("" ::"r"(v68));
            }
            {
              v69 = *(_BYTE**)(v68 + 864);
              __asm__ volatile("" ::"r"(v69));
            }
            if (v69 != nullptr && *v69 != 0) {
              ++v61;
            }
            else {
              {
                v70 = *(_BYTE**)(v68 + 872);
                __asm__ volatile("" ::"r"(v70));
              }
              if (v70 != nullptr && *v70 != 0) {
                ++v61;
              }
            }
            v60 += 2;
            v64 += 2;
          } while (((v58 >> 2) & 0x7FFFFFFE) != v60);
        }
        if ((v58 & 4) != 0) {
          {
            v62 = *(_QWORD*)(v59 + 8LL * (*(_DWORD*)(v57 + 4 * v60) & 0xFFF));
            __asm__ volatile("" ::"r"(v62));
          }
          {
            v63 = *(_BYTE**)(v62 + 864);
            __asm__ volatile("" ::"r"(v63));
          }
          if (v63 != nullptr && *v63 != 0) {
            ++v61;
          }
          else {
            {
              v71 = *(_BYTE**)(v62 + 872);
              __asm__ volatile("" ::"r"(v71));
            }
            if (v71 != nullptr && *v71 != 0) {
              ++v61;
            }
          }
        }
      }
      if (v61 != v26) {
        *(_WORD*)(a1 + 20) |= 0x44u;
      }
    }
    if (*(_WORD*)(a1 + 828) != 0) {
      *(_BYTE*)(a1 + 831) |= 0x10u;
    }
    if (*(_WORD*)(a1 + 836) != 0) {
      *(_BYTE*)(a1 + 839) |= 0x10u;
    }
    if (*(_WORD*)(a1 + 844) != 0) {
      *(_BYTE*)(a1 + 847) |= 0x10u;
    }
    if (*(_WORD*)(a1 + 852) != 0) {
      *(_BYTE*)(a1 + 855) |= 0x10u;
    }
    if (*(_WORD*)(a1 + 860) != 0) {
      *(_BYTE*)(a1 + 863) |= 0x10u;
    }
    if (*(_WORD*)(a1 + 868) != 0) {
      *(_BYTE*)(a1 + 871) |= 0x10u;
    }
    {
      v20 = *(_QWORD*)a2;
      __asm__ volatile("" ::"r"(v20));
    }
  }
  {
    v72 = *(unsigned __int8*)(v20 + 57);
    __asm__ volatile("" ::"r"(v72));
  }
  if (*(_BYTE*)(v20 + 48) != 0) {
    v73 = 4;
  }
  else {
    v73 = 1;
  }
  if (v72 != 0) {
    v73 = v72;
  }
  if (v73 > 5) {
    if (v73 > 8) {
      if (v73 == 9) {
        v74 = 0x1.0e00000000000p+7f;
        goto LABEL_158;
      }
      if (v73 == 12) {
        v74 = 0x1.6800000000000p+5f;
        goto LABEL_158;
      }
    }
    else {
      if (v73 == 6) {
        v74 = 0x1.3b00000000000p+8f;
        goto LABEL_158;
      }
      if (v73 == 8) {
        v74 = 0x1.6800000000000p+6f;
        goto LABEL_158;
      }
    }
  LABEL_157:
    v74 = 0x0.0p+0f;
    goto LABEL_158;
  }
  if (v73 > 1) {
    if (v73 == 2) {
      v74 = 0x1.0e00000000000p+8f;
      goto LABEL_158;
    }
    if (v73 == 3) {
      v74 = 0x1.c200000000000p+7f;
      goto LABEL_158;
    }
    goto LABEL_157;
  }
  v74 = 0x1.6800000000000p+7f;
LABEL_158:
  UnitActor_81ab40(a1, v74, 0x0.0p+0f);
  if (*(_QWORD*)a2 != 0 && ((1 << *(_BYTE*)(*(_QWORD*)a2 + 48LL)) & 6) != 0) {
    game_6d69a0(a1);
  }
  game_Unit_Unknown6d2380(a1);
  {
    v75 = *(_DWORD*)(a1 + 416);
    __asm__ volatile("" ::"r"(v75));
  }
  if ((v75 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v75 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v76 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v100 != 0) {
    {
      v77 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      __asm__ volatile("" ::"r"(v77));
    }
    v101 = v100;
    v78 = 128;
    if (*(_QWORD*)(v77 + 200) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free(v77 + v78, v100);
  }
  if (v92 != 0) {
    {
      v79 = *v76;
      __asm__ volatile("" ::"r"(v79));
    }
    v93 = v92;
    v80 = 128;
    if (*(_QWORD*)(v79 + 200) == 0) {
      v80 = 56;
    }
    nn_mem_StandardAllocator_Free(v79 + v80, v92);
  }
  if (v89 != 0) {
    {
      v81 = *v76;
      __asm__ volatile("" ::"r"(v81));
    }
    v90 = v89;
    v82 = 128;
    if (*(_QWORD*)(v81 + 200) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free(v81 + v82, v89);
  }
  if (v86 != 0) {
    {
      v83 = *v76;
      __asm__ volatile("" ::"r"(v83));
    }
    v87 = v86;
    v84 = 128;
    if (*(_QWORD*)(v83 + 200) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free(v83 + v84, v86);
  }
}

bool game_6f20e0(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      {
        v5 = *a1;
        __asm__ volatile("" ::"r"(v5));
      }
      {
        v6 = a1[1];
        __asm__ volatile("" ::"r"(v6));
      }
      {
        v7 = *(_DWORD*)(*(_QWORD*)(v6 + 24) + 608LL);
        __asm__ volatile("" ::"r"(v7));
      }
      {
        v8 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v8));
      }
      {
        v9 = *(_DWORD*)(*(_QWORD*)(v8 + 24) + 608LL);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v7 < (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
        if (v9 >= v7) {
          *a1 = v6;
          a1[1] = v5;
          {
            v22 = *(a2 - 1);
            __asm__ volatile("" ::"r"(v22));
          }
          if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v22 + 24) + 608LL) <
              (signed __int32)*(_DWORD*)(*(_QWORD*)(v5 + 24) + 608LL)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v8;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v7) {
        return true;
      }
      a1[1] = v8;
      *(a2 - 1) = v6;
      {
        v21 = a1[1];
        __asm__ volatile("" ::"r"(v21));
      }
    LABEL_49:
      {
        v33 = *a1;
        __asm__ volatile("" ::"r"(v33));
      }
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v21 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
        *a1 = v21;
        a1[1] = v33;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      game_6f1f10(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    {
      v17 = *a1;
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v16 = a1[1];
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v18 = *(_DWORD*)(*(_QWORD*)(v16 + 24) + 608LL);
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = a1[2];
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v20 = *(_DWORD*)(*(_QWORD*)(v19 + 24) + 608LL);
      __asm__ volatile("" ::"r"(v20));
    }
    if (v18 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
      if (v20 < v18) {
        a1[1] = v19;
        a1[2] = v16;
        if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v19 + 24) + 608LL) <
            (signed __int32)*(_DWORD*)(*(_QWORD*)(v17 + 24) + 608LL)) {
          *a1 = v19;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v18) {
        *a1 = v19;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v19 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(v17 + 24) + 608LL)) {
        a1[1] = v19;
        goto LABEL_44;
      }
    }
    v16 = v19;
  LABEL_46:
    {
      v31 = *(a2 - 1);
      __asm__ volatile("" ::"r"(v31));
    }
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v31 + 24) + 608LL) >=
        (signed __int32)*(_DWORD*)(*(_QWORD*)(v16 + 24) + 608LL)) {
      return true;
    }
    a1[2] = v31;
    *(a2 - 1) = v16;
    {
      v32 = a1[1];
      __asm__ volatile("" ::"r"(v32));
    }
    {
      v21 = a1[2];
      __asm__ volatile("" ::"r"(v21));
    }
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v21 + 24) + 608LL) >=
        (signed __int32)*(_DWORD*)(*(_QWORD*)(v32 + 24) + 608LL)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v32;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    {
      v3 = *(a2 - 1);
      __asm__ volatile("" ::"r"(v3));
    }
    {
      v4 = *a1;
      __asm__ volatile("" ::"r"(v4));
    }
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v3 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  {
    v10 = *a1;
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = a1[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = a1 + 2;
  {
    v12 = a1[2];
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v14 = *(_DWORD*)(*(_QWORD*)(v11 + 24) + 608LL);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *(_DWORD*)(*(_QWORD*)(v12 + 24) + 608LL);
    __asm__ volatile("" ::"r"(v15));
  }
  if (v14 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
    if (v15 < v14) {
      a1[1] = v12;
      a1[2] = v11;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v12 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(v10 + 24) + 608LL)) {
        *a1 = v12;
        a1[1] = v10;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v11;
      a1[1] = v10;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v12 + 24) + 608LL) >=
          (signed __int32)*(_DWORD*)(*(_QWORD*)(v10 + 24) + 608LL)) {
        goto LABEL_32;
      }
      a1[1] = v12;
    }
    else {
      *a1 = v12;
    }
    a1[2] = v10;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    {
      v27 = *v23;
      __asm__ volatile("" ::"r"(v27));
    }
    {
      v28 = *v13;
      __asm__ volatile("" ::"r"(v28));
    }
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*v23 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(v28 + 24) + 608LL)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        {
          v28 = *(__int64*)((char*)a1 + v29 - 16);
          __asm__ volatile("" ::"r"(v28));
        }
        v29 -= 8;
      } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(v27 + 24) + 608LL) <
               (signed __int32)*(_DWORD*)(*(_QWORD*)(v28 + 24) + 608LL));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v13 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

unsigned __int64 game_842cb0(_DWORD* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 result;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char v11;
  int v12;

  {
    v2 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a1 & 0xFFF));
    __asm__ volatile("" ::"r"(v2));
  }
  if (a2 == nullptr ||
      (result = *(unsigned __int8*)(v2 + 274), *(_BYTE*)(v2 + 274) == 0) ||
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)
                                               game_g_empty_item_ptr) +
                          72LL) <= 7u &&
          (v4 = a2[218],
           (((v5 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                                    game_g_shared_system_skills_ptr)) >>
             5) &
            0x7F) + 1 <=
               (a2[219] - v4) >> 2) &&
          ((*(_DWORD*)(v4 + 4 * ((v5 >> 5) & 0x7F)) >> v5) & 1) != 0 ||
      ((v6 = a2[55]) == 0 ? (v7 = 9) : (v7 = *(_BYTE*)(v6 + 16)),
       ((1 << v7) & 6) != 0)) {
    result = 0;
    if (a2 != nullptr && *(_BYTE*)(v2 + 275) != 0) {
      {
        v8 = a2[218];
        __asm__ volatile("" ::"r"(v8));
      }
      {
        v9 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) +
                              game_g_shared_system_skills_ptr);
        __asm__ volatile("" ::"r"(v9));
      }
      if (((v9 >> 5) & 0x7F) + 1 <= (a2[219] - v8) >> 2 &&
          ((*(_DWORD*)(v8 + 4 * ((v9 >> 5) & 0x7F)) >> v9) & 1) != 0) {
        return 0;
      }
      {
        v10 = a2[55];
        __asm__ volatile("" ::"r"(v10));
      }
      {
        v11 = v10 != 0 ? *(_BYTE*)(v10 + 16) : 9;
        __asm__ volatile("" ::"r"(v11));
      }
      if (((1 << v11) & 6) != 0) {
        return 0;
      }
      v12 = game_Unit_GetParam((__int64)a2);
      if (v12 < 1) {
        return 0;
      }
      else {
        return (v12 * (unsigned int)*(unsigned __int8*)(v2 + 275) + 99) /
               0x64uLL;
      }
    }
  }
  return result;
}

unsigned __int64 game_842e20(_DWORD* a1, _QWORD* a2, unsigned __int16* a3)
{
  __int64 v3;
  unsigned __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char v12;
  int v13;

  {
    v3 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a1 & 0xFFF));
    __asm__ volatile("" ::"r"(v3));
  }
  if (a2 == nullptr ||
      (result = *(unsigned __int8*)(v3 + 274), *(_BYTE*)(v3 + 274) == 0) ||
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a3) +
                          72LL) <= 7u &&
          (v5 = a2[218],
           (v6 = ((unsigned __int64)(unsigned int)GameData_21d97bc >> 5) &
                 0x7F) +
                   1 <=
               (a2[219] - v5) >> 2) &&
          ((*(_DWORD*)(v5 + 4LL * (unsigned int)v6) >> GameData_21d97bc) & 1) !=
              0 ||
      ((v7 = a2[55]) == 0 ? (v8 = 9) : (v8 = *(_BYTE*)(v7 + 16)),
       ((1 << v8) & 6) != 0)) {
    result = 0;
    if (a2 != nullptr && *(_BYTE*)(v3 + 275) != 0) {
      {
        v9 = a2[218];
        __asm__ volatile("" ::"r"(v9));
      }
      v10 = ((unsigned __int64)(unsigned int)GameData_21d9864 >> 5) & 0x7F;
      if (v10 + 1 <= (a2[219] - v9) >> 2 &&
          ((*(_DWORD*)(v9 + 4LL * (unsigned int)v10) >> GameData_21d9864) &
           1) != 0) {
        return 0;
      }
      {
        v11 = a2[55];
        __asm__ volatile("" ::"r"(v11));
      }
      {
        v12 = v11 != 0 ? *(_BYTE*)(v11 + 16) : 9;
        __asm__ volatile("" ::"r"(v12));
      }
      if (((1 << v12) & 6) != 0) {
        return 0;
      }
      v13 = game_Unit_GetParam((__int64)a2);
      if (v13 < 1) {
        return 0;
      }
      else {
        return (v13 * (unsigned int)*(unsigned __int8*)(v3 + 275) + 99) /
               0x64uLL;
      }
    }
  }
  return result;
}

__int64 game_932d40(unsigned __int8* a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  signed int v3;
  unsigned __int64 v4;
  int v5;
  int v6;
  signed int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  bool v14;
  int v15;
  unsigned int v17;
  unsigned __int64 v18;
  int v19;
  unsigned __int64 v20;

  if (*a1 == 0) {
    return 0;
  }
  {
    v1 = *((unsigned __int8**)a1 + 2);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99a8 + 64) + 8LL * *a1);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v1 == a1 + 24) {
    v15 = 0;
  }
  else {
    v3 = 0;
    v4 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
    do {
      {
        v5 = v1[28];
        __asm__ volatile("" ::"r"(v5));
      }
      if (v1[28] != 0) {
        if ((int)v4 < 1) {
          v7 = 0;
        }
        else {
          {
            v6 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v4 - 1));
            __asm__ volatile("" ::"r"(v6));
          }
          v7 = 0;
          if (v6 >= v5) {
            v6 = v1[28];
            __asm__ volatile("" ::"r"(v6));
          }
          if ((signed __int32)*(_DWORD*)GameData_21d9988 <= v5) {
            v8 = v6;
          }
          else {
            v8 = *(_DWORD*)GameData_21d9988;
            __asm__ volatile("" ::"r"(v8));
          }
          v9 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
          while (1) {
            v10 = (unsigned int)(v7 + v9) >> 1;
            {
              v11 = *(_DWORD*)(GameData_21d9988 + 4LL * v10);
              __asm__ volatile("" ::"r"(v11));
            }
            if (v8 == v11) {
              break;
            }
            if (v8 < v11) {
              v9 = (unsigned int)(v7 + v9) >> 1;
            }
            else {
              v7 = v10 + 1;
            }
            if (v7 >= v9) {
              goto LABEL_21;
            }
          }
          v7 = v10 + 1;
        }
      LABEL_21:
        if (v3 <= v7) {
          v3 = v7;
        }
      }
      {
        v12 = *((unsigned __int8**)v1 + 1);
        __asm__ volatile("" ::"r"(v12));
      }
      if (v12 != nullptr) {
        do {
          v13 = v12;
          {
            v12 = *(unsigned __int8**)v12;
            __asm__ volatile("" ::"r"(v12));
          }
        } while (v12 != nullptr);
      }
      else {
        do {
          {
            v13 = *((unsigned __int8**)v1 + 2);
            __asm__ volatile("" ::"r"(v13));
          }
          {
            v14 = v1 == *(unsigned __int8**)v13;
            __asm__ volatile("" ::"r"(v14));
          }
          v1 = v13;
        } while (!v14);
      }
      v1 = v13;
    } while (v13 != a1 + 24);
    v15 = (v3 & 7) << 19;
  }
  {
    v17 = v2[16] | ((v2[110] & 0xF) << 8) & 0xFFF |
          ((*((_DWORD*)a1 + 8) & 0x7F) << 12) | v15;
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v18 = a1[40];
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v19 = v2[108];
    __asm__ volatile("" ::"r"(v19));
  }
  if ((v18 & 1) != 0) {
    v20 = *((_QWORD*)a1 + 6);
    __asm__ volatile("" ::"r"(v20));
  }
  else {
    v20 = v18 >> 1;
  }
  if (v20 != 0) {
    v17 |= 0x400000u;
  }
  if (a1[3] != 0) {
    v17 |= 0x800000u;
  }
  if (v19 != 0) {
    return v17 | 0x1000000;
  }
  else {
    return v17;
  }
}

__int64 game_d775b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float* a5)
{
  __int64 result;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  int v32;
  int v33;
  __int64* v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  bool v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  __int64 v56;
  int v57;
  int v58;
  _QWORD* v59;
  __int64 v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  bool v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  __int64 v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;

  result = GameRoutine_d76fd0(a1, a2, a3, a5);
  {
    v11 = *(float*)a3;
    __asm__ volatile("" ::"w"(v11));
  }
  {
    v12 = *(float*)(a3 + 4);
    __asm__ volatile("" ::"w"(v12));
  }
  {
    v13 = a5[1];
    __asm__ volatile("" ::"w"(v13));
  }
  {
    v14 = *(float*)a4 - *a5;
    __asm__ volatile("" ::"w"(v14));
  }
  {
    v15 = *(float*)(a4 + 4) - v13;
    __asm__ volatile("" ::"w"(v15));
  }
  {
    v16 = *(float*)a3 - *a5;
    __asm__ volatile("" ::"w"(v16));
  }
  v17 = v12 - v13;
  v18 = (float)(PSEUDO_UNFUSED(v15 * v15)) + (float)(v14 * v14);
  v19 = (float)(PSEUDO_UNFUSED(v17 * v17)) + (float)(v16 * v16);
  if (v18 != v19) {
    if (v18 >= v19) {
      return result;
    }
  LABEL_17:
    *(_DWORD*)a3 = *(_DWORD*)a4;
    {
      v31 = *(_QWORD*)(a3 + 8);
      __asm__ volatile("" ::"r"(v31));
    }
    {
      v32 = *(_DWORD*)(a3 + 16);
      __asm__ volatile("" ::"r"(v32));
    }
    {
      v33 = *(_DWORD*)(a3 + 20);
      __asm__ volatile("" ::"r"(v33));
    }
    v34 = (__int64*)(a3 + 24);
    {
      v85 = *(_QWORD*)(a3 + 24);
      __asm__ volatile("" ::"r"(v85));
    }
    {
      v88 = *(_QWORD*)(a3 + 32);
      __asm__ volatile("" ::"r"(v88));
    }
    *(_DWORD*)(a3 + 4) = *(_DWORD*)(a4 + 4);
    *(_DWORD*)(a3 + 8) = *(_DWORD*)(a4 + 8);
    *(_DWORD*)(a3 + 12) = *(_DWORD*)(a4 + 12);
    *(_DWORD*)(a3 + 16) = *(_DWORD*)(a4 + 16);
    *(_DWORD*)(a3 + 20) = *(_DWORD*)(a4 + 20);
    {
      v35 = *(_QWORD*)(a4 + 24);
      __asm__ volatile("" ::"r"(v35));
    }
    *(_QWORD*)(a3 + 32) = *(_QWORD*)(a4 + 32);
    *(_QWORD*)(a3 + 24) = v35;
    *(_QWORD*)(a4 + 8) = v31;
    *(float*)a4 = v11;
    *(float*)(a4 + 4) = v12;
    *(_DWORD*)(a4 + 16) = v32;
    *(_DWORD*)(a4 + 20) = v33;
    *(_QWORD*)(a4 + 24) = v85;
    *(_QWORD*)(a4 + 32) = v88;
    {
      v36 = *(float*)a2;
      __asm__ volatile("" ::"w"(v36));
    }
    {
      v37 = *(float*)(a2 + 4);
      __asm__ volatile("" ::"w"(v37));
    }
    {
      v38 = a5[1];
      __asm__ volatile("" ::"w"(v38));
    }
    {
      v39 = *(float*)a3 - *a5;
      __asm__ volatile("" ::"w"(v39));
    }
    {
      v40 = *(float*)(a3 + 4) - v38;
      __asm__ volatile("" ::"w"(v40));
    }
    {
      v41 = *(float*)a2 - *a5;
      __asm__ volatile("" ::"w"(v41));
    }
    v42 = v37 - v38;
    v43 = (float)(PSEUDO_UNFUSED(v40 * v40)) + (float)(v39 * v39);
    v44 = (float)(PSEUDO_UNFUSED(v42 * v42)) + (float)(v41 * v41);
    if (v43 == v44) {
      if (v39 != 0x0.0p+0f || v40 != 0x0.0p+0f) {
        v45 = sqrtf(v43);
        v39 = v39 / v45;
        v40 = v40 / v45;
      }
      {
        v46 = a5[2];
        __asm__ volatile("" ::"w"(v46));
      }
      {
        v47 = a5[3];
        __asm__ volatile("" ::"w"(v47));
      }
      v48 = v46;
      v49 = v47;
      v50 = v46 == 0x0.0p+0f;
      if (v47 != 0x0.0p+0f) {
        v50 = false;
      }
      if (!v50) {
        v51 = sqrtf((float)(PSEUDO_UNFUSED(v47 * v47)) + (float)(v46 * v46));
        v48 = v46 / v51;
        v49 = v47 / v51;
      }
      v52 = v40 * v49;
      if (v41 != 0x0.0p+0f || v42 != 0x0.0p+0f) {
        v53 = sqrtf(v44);
        v41 = v41 / v53;
        v42 = v42 / v53;
      }
      v54 = v52 + (float)(v39 * v48);
      if (!v50) {
        v55 = sqrtf((float)(PSEUDO_UNFUSED(v47 * v47)) + (float)(v46 * v46));
        v46 = v46 / v55;
        v47 = v47 / v55;
      }
      if (v54 <=
          (float)((float)(PSEUDO_UNFUSED(v42 * v47)) + (float)(v41 * v46))) {
        return result;
      }
    }
    else if (v43 >= v44) {
      return result;
    }
    *(_DWORD*)a2 = *(_DWORD*)a3;
    {
      v56 = *(_QWORD*)(a2 + 8);
      __asm__ volatile("" ::"r"(v56));
    }
    {
      v57 = *(_DWORD*)(a2 + 16);
      __asm__ volatile("" ::"r"(v57));
    }
    {
      v58 = *(_DWORD*)(a2 + 20);
      __asm__ volatile("" ::"r"(v58));
    }
    v59 = (_QWORD*)(a2 + 24);
    {
      v86 = *(_QWORD*)(a2 + 24);
      __asm__ volatile("" ::"r"(v86));
    }
    {
      v89 = *(_QWORD*)(a2 + 32);
      __asm__ volatile("" ::"r"(v89));
    }
    *(_DWORD*)(a2 + 4) = *(_DWORD*)(a3 + 4);
    *(_DWORD*)(a2 + 8) = *(_DWORD*)(a3 + 8);
    *(_DWORD*)(a2 + 12) = *(_DWORD*)(a3 + 12);
    *(_DWORD*)(a2 + 16) = *(_DWORD*)(a3 + 16);
    *(_DWORD*)(a2 + 20) = *(_DWORD*)(a3 + 20);
    {
      v60 = *v34;
      __asm__ volatile("" ::"r"(v60));
    }
    *(_QWORD*)(a2 + 32) = *(_QWORD*)(a3 + 32);
    *(_QWORD*)(a2 + 24) = v60;
    *(_QWORD*)(a3 + 8) = v56;
    *(float*)a3 = v36;
    *(float*)(a3 + 4) = v37;
    *(_DWORD*)(a3 + 16) = v57;
    *(_DWORD*)(a3 + 20) = v58;
    *v34 = v86;
    *(_QWORD*)(a3 + 32) = v89;
    {
      v61 = *(float*)a1;
      __asm__ volatile("" ::"w"(v61));
    }
    {
      v62 = *(float*)(a1 + 4);
      __asm__ volatile("" ::"w"(v62));
    }
    {
      v63 = a5[1];
      __asm__ volatile("" ::"w"(v63));
    }
    {
      v64 = *(float*)a2 - *a5;
      __asm__ volatile("" ::"w"(v64));
    }
    {
      v65 = *(float*)(a2 + 4) - v63;
      __asm__ volatile("" ::"w"(v65));
    }
    {
      v66 = *(float*)a1 - *a5;
      __asm__ volatile("" ::"w"(v66));
    }
    v67 = v62 - v63;
    v68 = (float)(PSEUDO_UNFUSED(v65 * v65)) + (float)(v64 * v64);
    v69 = (float)(PSEUDO_UNFUSED(v67 * v67)) + (float)(v66 * v66);
    if (v68 == v69) {
      if (v64 != 0x0.0p+0f || v65 != 0x0.0p+0f) {
        v70 = sqrtf(v68);
        v64 = v64 / v70;
        v65 = v65 / v70;
      }
      {
        v71 = a5[2];
        __asm__ volatile("" ::"w"(v71));
      }
      {
        v72 = a5[3];
        __asm__ volatile("" ::"w"(v72));
      }
      v73 = v71;
      v74 = v72;
      v75 = v71 == 0x0.0p+0f;
      if (v72 != 0x0.0p+0f) {
        v75 = false;
      }
      if (!v75) {
        v76 = sqrtf((float)(PSEUDO_UNFUSED(v72 * v72)) + (float)(v71 * v71));
        v73 = v71 / v76;
        v74 = v72 / v76;
      }
      v77 = v65 * v74;
      if (v66 != 0x0.0p+0f || v67 != 0x0.0p+0f) {
        v78 = sqrtf(v69);
        v66 = v66 / v78;
        v67 = v67 / v78;
      }
      v79 = v77 + (float)(v64 * v73);
      if (!v75) {
        v80 = sqrtf((float)(PSEUDO_UNFUSED(v72 * v72)) + (float)(v71 * v71));
        v71 = v71 / v80;
        v72 = v72 / v80;
      }
      if (v79 <=
          (float)((float)(PSEUDO_UNFUSED(v67 * v72)) + (float)(v66 * v71))) {
        return result;
      }
    }
    else if (v68 >= v69) {
      return result;
    }
    *(_DWORD*)a1 = *(_DWORD*)a2;
    {
      v81 = *(_QWORD*)(a1 + 8);
      __asm__ volatile("" ::"r"(v81));
    }
    {
      v82 = *(_DWORD*)(a1 + 16);
      __asm__ volatile("" ::"r"(v82));
    }
    {
      v83 = *(_DWORD*)(a1 + 20);
      __asm__ volatile("" ::"r"(v83));
    }
    {
      v87 = *(_QWORD*)(a1 + 24);
      __asm__ volatile("" ::"r"(v87));
    }
    {
      v90 = *(_QWORD*)(a1 + 32);
      __asm__ volatile("" ::"r"(v90));
    }
    *(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
    *(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
    *(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 12);
    *(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
    *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
    {
      v84 = *(_QWORD*)(a2 + 32);
      __asm__ volatile("" ::"r"(v84));
    }
    *(_QWORD*)(a1 + 24) = *v59;
    *(_QWORD*)(a1 + 32) = v84;
    *(_QWORD*)(a2 + 8) = v81;
    *(float*)a2 = v61;
    *(float*)(a2 + 4) = v62;
    *(_DWORD*)(a2 + 16) = v82;
    *(_DWORD*)(a2 + 20) = v83;
    *v59 = v87;
    *(_QWORD*)(a2 + 32) = v90;
    return result;
  }
  if (v14 != 0x0.0p+0f || v15 != 0x0.0p+0f) {
    v20 = sqrtf(v18);
    v14 = v14 / v20;
    v15 = v15 / v20;
  }
  {
    v21 = a5[2];
    __asm__ volatile("" ::"w"(v21));
  }
  {
    v22 = a5[3];
    __asm__ volatile("" ::"w"(v22));
  }
  v23 = v21;
  v24 = v22;
  v25 = v21 == 0x0.0p+0f;
  if (v22 != 0x0.0p+0f) {
    v25 = false;
  }
  if (!v25) {
    v26 = sqrtf((float)(PSEUDO_UNFUSED(v22 * v22)) + (float)(v21 * v21));
    v23 = v21 / v26;
    v24 = v22 / v26;
  }
  v27 = v15 * v24;
  if (v16 != 0x0.0p+0f || v17 != 0x0.0p+0f) {
    v28 = sqrtf(v19);
    v16 = v16 / v28;
    v17 = v17 / v28;
  }
  v29 = v27 + (float)(v14 * v23);
  if (!v25) {
    v30 = sqrtf((float)(PSEUDO_UNFUSED(v22 * v22)) + (float)(v21 * v21));
    v21 = v21 / v30;
    v22 = v22 / v30;
  }
  if (v29 > (float)((float)(PSEUDO_UNFUSED(v17 * v22)) + (float)(v16 * v21))) {
    goto LABEL_17;
  }
  return result;
}

bool game_deb620(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      {
        v5 = *a1;
        __asm__ volatile("" ::"r"(v5));
      }
      {
        v6 = a1[1];
        __asm__ volatile("" ::"r"(v6));
      }
      {
        v7 = *(_DWORD*)(*(_QWORD*)(v6 + 24) + 608LL);
        __asm__ volatile("" ::"r"(v7));
      }
      {
        v8 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v8));
      }
      {
        v9 = *(_DWORD*)(*(_QWORD*)(v8 + 24) + 608LL);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v7 < (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
        if (v9 >= v7) {
          *a1 = v6;
          a1[1] = v5;
          {
            v22 = *(a2 - 1);
            __asm__ volatile("" ::"r"(v22));
          }
          if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v22 + 24) + 608LL) <
              (signed __int32)*(_DWORD*)(*(_QWORD*)(v5 + 24) + 608LL)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v8;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v7) {
        return true;
      }
      a1[1] = v8;
      *(a2 - 1) = v6;
      {
        v21 = a1[1];
        __asm__ volatile("" ::"r"(v21));
      }
    LABEL_49:
      {
        v33 = *a1;
        __asm__ volatile("" ::"r"(v33));
      }
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v21 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
        *a1 = v21;
        a1[1] = v33;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      game_deb450(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    {
      v17 = *a1;
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v16 = a1[1];
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v18 = *(_DWORD*)(*(_QWORD*)(v16 + 24) + 608LL);
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = a1[2];
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v20 = *(_DWORD*)(*(_QWORD*)(v19 + 24) + 608LL);
      __asm__ volatile("" ::"r"(v20));
    }
    if (v18 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
      if (v20 < v18) {
        a1[1] = v19;
        a1[2] = v16;
        if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v19 + 24) + 608LL) <
            (signed __int32)*(_DWORD*)(*(_QWORD*)(v17 + 24) + 608LL)) {
          *a1 = v19;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v18) {
        *a1 = v19;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v19 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(v17 + 24) + 608LL)) {
        a1[1] = v19;
        goto LABEL_44;
      }
    }
    v16 = v19;
  LABEL_46:
    {
      v31 = *(a2 - 1);
      __asm__ volatile("" ::"r"(v31));
    }
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v31 + 24) + 608LL) >=
        (signed __int32)*(_DWORD*)(*(_QWORD*)(v16 + 24) + 608LL)) {
      return true;
    }
    a1[2] = v31;
    *(a2 - 1) = v16;
    {
      v32 = a1[1];
      __asm__ volatile("" ::"r"(v32));
    }
    {
      v21 = a1[2];
      __asm__ volatile("" ::"r"(v21));
    }
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v21 + 24) + 608LL) >=
        (signed __int32)*(_DWORD*)(*(_QWORD*)(v32 + 24) + 608LL)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v32;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    {
      v3 = *(a2 - 1);
      __asm__ volatile("" ::"r"(v3));
    }
    {
      v4 = *a1;
      __asm__ volatile("" ::"r"(v4));
    }
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v3 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  {
    v10 = *a1;
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = a1[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = a1 + 2;
  {
    v12 = a1[2];
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v14 = *(_DWORD*)(*(_QWORD*)(v11 + 24) + 608LL);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *(_DWORD*)(*(_QWORD*)(v12 + 24) + 608LL);
    __asm__ volatile("" ::"r"(v15));
  }
  if (v14 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*a1 + 24) + 608LL)) {
    if (v15 < v14) {
      a1[1] = v12;
      a1[2] = v11;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v12 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(v10 + 24) + 608LL)) {
        *a1 = v12;
        a1[1] = v10;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v11;
      a1[1] = v10;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v12 + 24) + 608LL) >=
          (signed __int32)*(_DWORD*)(*(_QWORD*)(v10 + 24) + 608LL)) {
        goto LABEL_32;
      }
      a1[1] = v12;
    }
    else {
      *a1 = v12;
    }
    a1[2] = v10;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    {
      v27 = *v23;
      __asm__ volatile("" ::"r"(v27));
    }
    {
      v28 = *v13;
      __asm__ volatile("" ::"r"(v28));
    }
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*v23 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(v28 + 24) + 608LL)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        {
          v28 = *(__int64*)((char*)a1 + v29 - 16);
          __asm__ volatile("" ::"r"(v28));
        }
        v29 -= 8;
      } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(v27 + 24) + 608LL) <
               (signed __int32)*(_DWORD*)(*(_QWORD*)(v28 + 24) + 608LL));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v13 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 game_fb7e20(_QWORD* a1, __int64* a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;

  {
    result = a2[1];
    __asm__ volatile("" ::"r"(result));
  }
  if (result == 0) {
    return result;
  }
  if (*(_QWORD*)(result + 8) == -1) {
    return 0;
  }
  v5 = a1;
  v6 = std___1___shared_weak_count_lock(result);
  if (v6 == 0) {
    if ((Character_caf760(0) & 1) != 0) {
      goto LABEL_10;
    }
    return 0;
  }
  v7 = v6;
  v8 = Character_caf760(*a2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v8 & 1) == 0) {
      return 0;
    }
    goto LABEL_10;
  }
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  std___1___shared_weak_count___release_weak(v7);
  if ((v8 & 1) == 0) {
    return 0;
  }
LABEL_10:
  {
    v9 = a2[1];
    __asm__ volatile("" ::"r"(v9));
  }
  if (v9 != 0 && (v10 = std___1___shared_weak_count_lock(v9)) != 0) {
    {
      v11 = *(_QWORD*)(*a2 + 264);
      __asm__ volatile("" ::"r"(v11));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v12 = v10;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v12);
    }
  }
  else {
    {
      v11 = (*(_UNKNOWN*)0x108LL);
      __asm__ volatile("" ::"r"(v11));
    }
  }
  if (v5[7] == v11) {
    return 0;
  }
  {
    v14 = (char*)v5[8];
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v13 = (char*)v5[9];
    __asm__ volatile("" ::"r"(v13));
  }
  if (v14 != v13) {
    v15 = v13 - v14 - 8;
    if ((~(_BYTE)v15 & 0x18) != 0) {
      v16 = ((unsigned __int8)((unsigned int)v15 >> 3) + 1) & 3;
      while (*(_QWORD*)v14 != v11) {
        v14 += 8;
        if (--v16 == 0) {
          goto LABEL_23;
        }
      }
    }
    else {
    LABEL_23:
      if (v15 >= 0x18) {
        v14 += 16;
        while (1) {
          if (*((_QWORD*)v14 - 2) == v11) {
            v14 -= 16;
            return v14 == v13;
          }
          if (*((_QWORD*)v14 - 1) == v11) {
            v14 -= 8;
            return v14 == v13;
          }
          if (*(_QWORD*)v14 == v11) {
            return v14 == v13;
          }
          if (*((_QWORD*)v14 + 1) == v11) {
            break;
          }
          v17 = v14 + 16;
          v14 += 32;
          if (v17 == v13) {
            goto LABEL_24;
          }
        }
        v14 += 8;
      }
      else {
      LABEL_24:
        {
          v14 = (char*)v5[9];
          __asm__ volatile("" ::"r"(v14));
        }
      }
    }
  }
  return v14 == v13;
}

__int64 game_100b330(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  char v2;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  float v10;
  __int64 v11;
  int v12;
  float v13;
  int v14;
  float v15;

  if ((*(_BYTE*)(result + 10) & 1) != 0) {
    return result;
  }
  v1 = result;
  if (game_ProcFadeView_instance_ != 0) {
    v2 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
    *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
    result = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      result = game_809ba0(game_ProcFadeView_instance_, 0x1.1111120000000p-3f);
      if (game_ProcFadeView_instance_ != 0) {
        *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v2;
      }
    }
  }
  v3 = *(unsigned __int8*)(v1 + 9);
  *(_BYTE*)(v1 + 8) = 0;
  if (v3 != 0 && (*(_BYTE*)(v1 + 10) & 1) == 0) {
    result = GameRoutine_ec1530();
    if ((result & 1) == 0 && *(int*)(v1 + 24) <= 0) {
      result = ((__int64 (*)(unsigned __int8*, int, char))GameRoutine_1011550)(
          *(unsigned __int8**)GameData_212f510[0], 0, 1);
      if ((result & 1) != 0) {
        v4 = *(unsigned __int8*)(v1 + 8);
        v5 = game_ProcGameSkipView_instance_;
        *(_BYTE*)(v1 + 9) = v4;
        if (v4 == 1) {
          if (v5 != 0) {
            v6 = *(_DWORD*)(v5 + 156);
            if ((v6 & 0x10) != 0) {
              goto LABEL_29;
            }
            *(_DWORD*)(v5 + 156) = v6 & 0xFFFFFFEE;
            result = (__int64)game_8224a0(0x19u);
            if (game_GameModeData_instance_ != 0 &&
                (result = game_GameVariableTable_Find(
                     *(_QWORD**)(game_GameModeData_instance_ + 48),
                     (unsigned __int64*)result)) != 0) {
              v7 = *(_DWORD*)(v5 + 156);
              if (*(_DWORD*)(result + 32) == 1) {
                if ((v7 & 4) != 0) {
                  goto LABEL_29;
                }
                v8 = v7 | 4;
                goto LABEL_27;
              }
            }
            else {
              v7 = *(_DWORD*)(v5 + 156);
            }
            if ((v7 & 4) == 0) {
              goto LABEL_29;
            }
            v8 = v7 & 0xFFFFFFFB;
            goto LABEL_27;
          }
        LABEL_41:
          *(_BYTE*)(v1 + 10) = 1;
          return result;
        }
        if (v5 == 0) {
          goto LABEL_41;
        }
        v9 = *(_DWORD*)(v5 + 156);
        if (*(_BYTE*)(v5 + 152) != 0) {
          v9 |= 2u;
          *(_DWORD*)(v5 + 156) = v9;
        }
        if ((v9 & 0x10) == 0) {
          v8 = v9 & 0xFFFFFFE2 | 1;
        LABEL_27:
          v10 = *(float*)(v5 + 224);
          *(_DWORD*)(v5 + 156) = v8;
          if (v10 > 0x0.0p+0f) {
            *(_DWORD*)(v5 + 224) = 0;
          }
        }
      }
    }
  }
LABEL_29:
  v11 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
    goto LABEL_41;
  }
  v12 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
  if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    v12 |= 2u;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v12;
  }
  if ((v12 & 0x10) == 0) {
    v13 = *(float*)(v11 + 224);
    *(_DWORD*)(v11 + 156) = v12 & 0xFFFFFFE2 | 1;
    if (v13 > 0x0.0p+0f) {
      *(_DWORD*)(v11 + 224) = 0;
    }
  }
  *(_BYTE*)(v1 + 10) = 1;
  v14 = *(_DWORD*)(v11 + 156);
  if ((v14 & 1) == 0) {
    if (*(_BYTE*)(v11 + 152) != 0) {
      v14 |= 2u;
      *(_DWORD*)(v11 + 156) = v14;
    }
    if ((v14 & 0x10) == 0) {
      v15 = *(float*)(v11 + 224);
      *(_DWORD*)(v11 + 156) = v14 & 0xFFFFFFE2 | 1;
      if (v15 > 0x0.0p+0f) {
        *(_DWORD*)(v11 + 224) = 0;
      }
    }
  }
  return result;
}

bool game_108cdc0(int a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  int v6;
  unsigned __int64 v7;
  __int64 v9;

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v2 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v3 = a1;
      if (GameData_22356f8 <= (unsigned __int64)a1) {
        v3 = a1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v3 = v2 & a1;
    }
    {
      v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
      __asm__ volatile("" ::"r"(v4));
    }
    if (v4 != nullptr) {
      {
        v5 = *v4;
        __asm__ volatile("" ::"r"(v5));
      }
      if (*v4 != nullptr) {
        v6 = 639;
        if ((GameData_22356f8 & v2) == 0) {
          while (1) {
            {
              v9 = v5[1];
              __asm__ volatile("" ::"r"(v9));
            }
            if (v9 == a1) {
              if (*((_DWORD*)v5 + 4) == a1) {
                goto LABEL_27;
              }
            }
            else if ((v9 & v2) != v3) {
              return LOBYTE((&game_hub_g_motions)[5 * v6 + 2]) == 0;
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              return LOBYTE((&game_hub_g_motions)[5 * v6 + 2]) == 0;
            }
          }
        }
        while (1) {
          {
            v7 = v5[1];
            __asm__ volatile("" ::"r"(v7));
          }
          if (v7 == a1) {
            if (*((_DWORD*)v5 + 4) == a1) {
            LABEL_27:
              {
                v6 = *((_DWORD*)v5 + 5);
                __asm__ volatile("" ::"r"(v6));
              }
              return LOBYTE((&game_hub_g_motions)[5 * v6 + 2]) == 0;
            }
          }
          else {
            if (v7 >= GameData_22356f8) {
              v7 %= (unsigned __int64)GameData_22356f8;
            }
            if (v7 != v3) {
              return LOBYTE((&game_hub_g_motions)[5 * v6 + 2]) == 0;
            }
          }
          v5 = (__int64*)*v5;
          if (v5 == nullptr) {
            return LOBYTE((&game_hub_g_motions)[5 * v6 + 2]) == 0;
          }
        }
      }
    }
  }
  v6 = 639;
  return LOBYTE((&game_hub_g_motions)[5 * v6 + 2]) == 0;
}

__attribute__((swiftcall)) void game_109da60(PSEUDO_X8 x8_, float32x4_t* a1,
                                             float32x4_t* a2, int8x16_t result)
{
  int8x16_t* a3 = (int8x16_t*)PSEUDO_X8_VALUE(x8_);
  int8x16_t v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;

  v4 = vmulq_f32(*a1, *a2);
  LANES128(v4).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
          .n64_u64[0];
  v5 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
           .n64_f32[0];
  if (v5 >= 0x1.fffffc0000000p-1f) {
    {
      v10 = LANES128(*(a1)).n128_u64[1];
      __asm__ volatile("" ::"r"(v10));
    }
    LANES128(*(a3)).n128_u64[0] = LANES128(*(a1)).n128_u64[0];
    LANES128(*(a3)).n128_u64[1] = v10;
    {
      result;
      return;
    }
  }
  if (v5 <= -0x1.fffffc0000000p-1f) {
    v5 = -0x1.fffffc0000000p-1f;
  }
  if (v5 <= 0x1.0000000000000p+0f) {
    v6 = v5;
  }
  else {
    v6 = 0x1.0000000000000p+0f;
  }
  if (v5 < -0x1.0000000000000p+0f) {
    v6 = -0x1.0000000000000p+0f;
  }
  v7 = sqrtf(0x1.0000000000000p+0f - (float)(v6 * v6));
  if (v6 >= 0x0.0p+0f) {
    {
      v12 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      __asm__ volatile("" ::"w"(v12));
    }
    {
      v13 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      __asm__ volatile("" ::"w"(v13));
    }
    {
      v14 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      __asm__ volatile("" ::"w"(v14));
    }
    v15 = v6 / v7;
    v16 = v7 / v6;
    v17 = v16 *
          (float)((
                      float)((float)((float)((float)(v14 +
                                                     (float)((float)((float)((
                                                                                 float)(v13 + (float)((
                                                                                                          float)((float)((float)(v12 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v16 * v16)) - *((float*)GameData_212c2f0 + 1)) * (float)(v16 * v16))) * (float)(v16 * v16)) - *(float*)((
                                                                                                                                                                                                                                                                                                               char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                           4)) *
                                                                                                      (float)(v16 *
                                                                                                              v16))) *
                                                                             (float)(v16 *
                                                                                     v16)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v16 *
                                                                     v16))) *
                                             (float)(v16 * v16)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v16 * v16)) +
                  0x1.0000000000000p+0f);
    v18 =
        0x1.921fb60000000p+0f -
        (float)(PSEUDO_UNFUSED(
            v15 * (float)((
                              float)((float)((float)((float)(v14 + (float)((float)((
                                                                                       float)((
                                                                                                  float)(v13 + (float)((float)((float)((float)(v12 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v15 * v15)) - *((float*)GameData_212c2f0 + 1)) * (float)(v15 * v15))) * (float)(v15 * v15)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v15 *
                                                                                                                               v15))) *
                                                                                              (float)(v15 *
                                                                                                      v15)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v15 *
                                                                                   v15))) *
                                                     (float)(v15 * v15)) -
                                             *(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c2f0 +
                                                       12)) *
                                     (float)(v15 * v15)) +
                          0x1.0000000000000p+0f)));
    if (v6 > 0x1.6a09e60000000p-1f) {
      v9 = v17;
    }
    else {
      v9 = v18;
    }
  }
  else if (v6 >= -0x1.6a09e60000000p-1f) {
    v11 = (float)-v6 / v7;
    v9 =
        (float)(PSEUDO_UNFUSED(
            v11 *
            (float)((
                        float)((float)-(float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v11 *
                                                                                                                                                                                                                                                                                                                                                                                                v11))) *
                                                                                                                                                                                                                                                                                                       (float)(v11 *
                                                                                                                                                                                                                                                                                                               v11))) *
                                                                                                                                                                                                                                                                                    (float)(v11 *
                                                                                                                                                                                                                                                                                            v11))) *
                                                                                                                                                                                                                                                            (float)(v11 *
                                                                                                                                                                                                                                                                    v11))) *
                                                                                                                                                                         (float)(v11 *
                                                                                                                                                                                 v11))) *
                                                                          (float)(v11 *
                                                                                  v11))) *
                                                       (float)(v11 * v11))) *
                               (float)(v11 * v11)) +
                    0x1.0000000000000p+0f))) +
        0x1.921fb60000000p+0f;
  }
  else {
    v8 = (float)-v7 / v6;
    v9 =
        0x1.921fb60000000p+1f -
        (float)(PSEUDO_UNFUSED(
            v8 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c2f0 +
                                                 12) -
                                       (float)((float)(*(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 8) +
                                                       (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((
                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                           4) -
                                                                                                                                                                                                                                                                 (float)((
                                                                                                                                                                                                                                                                             float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v8 * v8))) * (float)(v8 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  v8))) *
                                                                                                                                                                                                                                                                         (float)(v8 *
                                                                                                                                                                                                                                                                                 v8))) *
                                                                                                                                                                                                                                                 (float)(v8 *
                                                                                                                                                                                                                                                         v8))) *
                                                                                                                                                              (float)(v8 *
                                                                                                                                                                      v8))) *
                                                               (float)(v8 *
                                                                       v8))) *
                                               (float)(v8 * v8))) *
                            (float)(v8 * v8)) +
                    0x1.0000000000000p+0f)));
  }
  v19 =
      v9 + (float)(roundf(v9 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v20 = -0x1.921fb60000000p+1f - v19;
  if (v19 >= -0x1.921fb60000000p+0f) {
    v20 = v19;
  }
  if (v19 > 0x1.921fb60000000p+0f) {
    v20 = 0x1.921fb60000000p+1f - v19;
  }
  {
    v21 = *((float*)GameData_212c190 + 1);
    __asm__ volatile("" ::"w"(v21));
  }
  {
    v22 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    __asm__ volatile("" ::"w"(v22));
  }
  {
    v23 = -*(float*)GameData_212c190;
    __asm__ volatile("" ::"w"(v23));
  }
  {
    v25 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    __asm__ volatile("" ::"w"(v25));
  }
  {
    v24 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    __asm__ volatile("" ::"w"(v24));
  }
  v26 =
      v20 *
      (float)((float)((float)-(
                          float)(v22 -
                                 (float)((float)(v24 +
                                                 (float)((float)-(
                                                             float)(v25 -
                                                                    (float)((float)(v21 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v20 *
                                                                                                    v20))) *
                                                                            (float)(v20 *
                                                                                    v20))) *
                                                         (float)(v20 * v20))) *
                                         (float)(v20 * v20))) *
                      (float)(v20 * v20)) +
              0x1.0000000000000p+0f);
  {
    v27 = 0x1.0000000000000p+0f - LANES128(result).n128_f32[0];
    __asm__ volatile("" ::"w"(v27));
  }
  {
    v28 = LANES128(result).n128_f32[0] * v9;
    __asm__ volatile("" ::"w"(v28));
  }
  v29 = (float)(PSEUDO_UNFUSED(v27 * v9)) +
        (float)(roundf((float)(v27 * v9) * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v30 = -0x1.921fb60000000p+1f - v29;
  if (v29 >= -0x1.921fb60000000p+0f) {
    v30 = v29;
  }
  if (v29 > 0x1.921fb60000000p+0f) {
    v31 = 0x1.921fb60000000p+1f - v29;
  }
  else {
    v31 = v30;
  }
  v32 =
      v31 *
      (float)((float)((float)((float)((float)(v24 +
                                              (float)((float)((float)((float)(v21 +
                                                                              (float)(v23 *
                                                                                      (float)(v31 *
                                                                                              v31))) *
                                                                      (float)(v31 *
                                                                              v31)) -
                                                              v25) *
                                                      (float)(v31 * v31))) *
                                      (float)(v31 * v31)) -
                              v22) *
                      (float)(v31 * v31)) +
              0x1.0000000000000p+0f);
  v33 = v28 +
        (float)(roundf(v28 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v33 > 0x1.921fb60000000p+0f) {
    v34 = 0x1.921fb60000000p+1f;
  LABEL_30:
    v33 = v34 - v33;
    goto LABEL_31;
  }
  if (v33 < -0x1.921fb60000000p+0f) {
    v34 = -0x1.921fb60000000p+1f;
    goto LABEL_30;
  }
LABEL_31:
  v35 = vmulq_n_f32(
      vaddq_f32(
          vmulq_n_f32(*a1, v32),
          vmulq_n_f32(
              *a2,
              v33 *
                  (float)((float)((float)((float)((float)(v24 +
                                                          (float)((float)((float)((float)(v21 +
                                                                                          (float)(v23 *
                                                                                                  (float)(v33 *
                                                                                                          v33))) *
                                                                                  (float)(v33 *
                                                                                          v33)) -
                                                                          v25) *
                                                                  (float)(v33 *
                                                                          v33))) *
                                                  (float)(v33 * v33)) -
                                          v22) *
                                  (float)(v33 * v33)) +
                          0x1.0000000000000p+0f))),
      0x1.0000000000000p+0f / v26);
  v36 = vmulq_f32(v35, v35);
  LANES128(v36).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
  v37 = vrsqrteq_f32(v36);
  v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
  result = vbicq_s8(
      vmulq_f32(vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38))), v35),
      vceqzq_f32(v36));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_113b050(PSEUDO_X8 x8_, const char* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  int v5;
  bool v6;
  const char* v7;
  const char* v8;
  int v9;
  unsigned __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v24;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8 v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  unsigned __int8* v35;
  __int64 v36;
  unsigned __int8* v37;
  bool v38;
  __int64 v39;
  unsigned __int8* v40;
  bool v41;
  __int64 v42;
  const char* v43;
  __int64 v44;
  unsigned __int8* v45;
  __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  int v49;
  unsigned int v50;
  int v51;
  unsigned __int64 v52;
  char* v53;
  unsigned __int8* v54;
  __int64 v55;
  unsigned __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  struct {
    __int64 v64;
    unsigned __int64 v65;
    unsigned __int8* v66;
  } v64_;
  char v67[128];
  struct {
    __int64 v68[2];
    __int64* v69;
  } v68_;
  struct {
    __int64 v70;
    unsigned __int64 v71;
    char* v72;
  } v70_;
  struct {
    unsigned __int8 v73;
    _BYTE v74[15];
    const char* v75;
  } v73_;
  struct {
    __int64 v76[2];
    const char* v77;
  } v76_;

  if (*a1 == 0 ||
      ((v4 = msg_MessageManager_instance__ptr[0],
        (unsigned int)(v5 = GameRoutine_a51280(
                           *msg_MessageManager_instance__ptr[0], a1)) <= 0x15)
           ? (v6 = ((1 << v5) & 0x21E001) == 0)
           : (v6 = true),
       v6)) {
    *(_WORD*)a2 = 0;
    return;
  }
  if (GameData_21f3fe4 == 1) {
    v7 = "ReferenceUSen";
  }
  else {
    v7 = "ReferenceJPja";
  }
  Manager_a4fd20((void*)(v76_.v76), *v4 + 15176, a1, (__int64)v7, 0);
  if ((v76_.v76[0] & 1) != 0) {
    v8 = v76_.v77;
  }
  else {
    v8 = (char*)v76_.v76 + 1;
  }
  game_113b050((void*)((__int64)&v73_.v73), v8);
  v9 = v73_.v73 & 1;
  v10 = (unsigned __int64)v73_.v73 >> 1;
  if (v9 != 0) {
    v10 = *(_QWORD*)&v73_.v74[7];
  }
  if (v10 == 0) {
    v15 = *v4;
    LOWORD(v70_.v70) = 0;
    fs_a501f0((void*)(v68_.v68), v15, a1);
    v16 = v68_.v68[1];
    v17 = false;
    if ((v68_.v68[0] & 1) == 0) {
      v16 = LOBYTE(v68_.v68[0]) >> 1;
    }
    if (v16 == 22) {
      if ((v68_.v68[0] & 1) != 0) {
        v18 = v68_.v69;
      }
      else {
        v18 = (__int64*)((char*)v68_.v68 + 1);
      }
      v19 = *v18;
      v20 = v18[1];
      v21 = *(__int64*)((char*)v18 + 14);
      v17 = v19 == 0xE3A482E35F444950LL && v20 == 0x9E83E3A583E3B782LL &&
            v21 == 0xAB83E3BC83E39E83LL;
    }
    v24 = &game_sound_g_game_sound;
    if (strncmp(a1, "MID_EV", 6u) != 0 && strncmp(a1, "MID_SC", 6u) != 0 &&
        strncmp(a1, "MID_SE_", 7u) != 0 && strncmp(a1, "MID_NR_", 7u) != 0 &&
        strncmp(a1, "MID_LevelUp_", 0xCu) != 0 &&
        strncmp(a1, "MID_Skill_LevelUp_", 0x12u) != 0 &&
        strncmp(a1, "MID_SV_ClassChange_", 0x13u) != 0 &&
        strncmp(a1, "MID_DIE_", 8u) != 0 &&
        strncmp(a1, "MID_RETREAT_", 0xCu) != 0 &&
        strncmp(a1, "MID_BD", 6u) != 0 && strncmp(a1, "MID_WD", 6u) != 0 &&
        strncmp(a1, "MID_SV_", 7u) != 0 && strncmp(a1, "MID_GM", 6u) != 0 &&
        strncmp(a1, "MID_LIB_Hub_Memory027_m01_", 0x1Au) != 0) {
      goto LABEL_123;
    }
    sprintf((__int64)v67, "V_%s", a1);
    GameRoutine_60a020((__int64)&v70_.v70, v67);
    if (!v17) {
      goto LABEL_117;
    }
    if (*((_BYTE*)GameRoutine_714e40() + 32) == 2) {
      if ((v70_.v70 & 1) != 0) {
        v25 = v70_.v71;
      }
      else {
        v25 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
      }
      if ((v70_.v70 & 1) != 0) {
        v26 = v70_.v72;
      }
      else {
        v26 = (char*)&v70_.v70 + 1;
      }
      v27 = v25 + 2;
      if (v25 + 2 < 0xFFFFFFFFFFFFFFF7LL) {
        if (v27 >= 0x17) {
          if ((v27 | 7) == 0x17) {
            v36 = 26;
          }
          else {
            v36 = (v27 | 7) + 1;
          }
          v28 = (unsigned __int8*)fw_memory_HeapManager_Allocate(
              fw_memory_g_heap_manager, v36, 16, 0);
          v64_.v65 = v25 + 2;
          v64_.v66 = v28;
          v64_.v64 = v36 | 1;
        }
        else {
          v64_.v65 = 0;
          v64_.v66 = nullptr;
          v64_.v64 = (unsigned __int8)(2 * v27);
          v28 = (unsigned __int8*)&v64_.v64 + 1;
          if (v25 == 0) {
          LABEL_85:
            strcpy((char*)&v28[v25], "_F");
            v24 = game_sound_g_game_sound_ptr[0];
            if (*game_sound_g_game_sound_ptr[0] != 0) {
              if ((v64_.v64 & 1) != 0) {
                v37 = v64_.v66;
              }
              else {
                v37 = (unsigned __int8*)&v64_.v64 + 1;
              }
              v38 = GameManager_a35ca0(*game_sound_g_game_sound_ptr[0], v37);
              if ((v64_.v64 & 1) == 0) {
                goto LABEL_107;
              }
            }
            else {
              v38 = false;
              if ((v64_.v64 & 1) == 0) {
                goto LABEL_107;
              }
            }
            if (v64_.v66 != nullptr) {
              v42 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v42 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                  (__int64)v64_.v66);
            }
          LABEL_107:
            if (v38) {
              v43 = (const char*)&GameData_1adf2f5;
            LABEL_116:
              GameRoutine_1a09ce0((__int64)&v70_.v70, v43, 2u);
              goto LABEL_117;
            }
            goto LABEL_117;
          }
        }
        memmove((__int64)v28, (__int64)v26, v25);
        goto LABEL_85;
      }
    LABEL_168:
      String_60a1d0();
    }
    if ((v70_.v70 & 1) != 0) {
      v32 = v70_.v71;
    }
    else {
      v32 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
    }
    if ((v70_.v70 & 1) != 0) {
      v33 = v70_.v72;
    }
    else {
      v33 = (char*)&v70_.v70 + 1;
    }
    v34 = v32 + 2;
    if (v32 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_168;
    }
    if (v34 >= 0x17) {
      if ((v34 | 7) == 0x17) {
        v39 = 26;
      }
      else {
        v39 = (v34 | 7) + 1;
      }
      v35 = (unsigned __int8*)fw_memory_HeapManager_Allocate(
          fw_memory_g_heap_manager, v39, 16, 0);
      v64_.v65 = v32 + 2;
      v64_.v66 = v35;
      v64_.v64 = v39 | 1;
    }
    else {
      v64_.v65 = 0;
      v64_.v66 = nullptr;
      v64_.v64 = (unsigned __int8)(2 * v34);
      v35 = (unsigned __int8*)&v64_.v64 + 1;
      if (v32 == 0) {
      LABEL_96:
        strcpy((char*)&v35[v32], "_M");
        v24 = game_sound_g_game_sound_ptr[0];
        if (*game_sound_g_game_sound_ptr[0] != 0) {
          if ((v64_.v64 & 1) != 0) {
            v40 = v64_.v66;
          }
          else {
            v40 = (unsigned __int8*)&v64_.v64 + 1;
          }
          v41 = GameManager_a35ca0(*game_sound_g_game_sound_ptr[0], v40);
          if ((v64_.v64 & 1) == 0) {
            goto LABEL_114;
          }
        }
        else {
          v41 = false;
          if ((v64_.v64 & 1) == 0) {
            goto LABEL_114;
          }
        }
        if (v64_.v66 != nullptr) {
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v64_.v66);
        }
      LABEL_114:
        if (v41) {
          v43 = "_M";
          goto LABEL_116;
        }
      LABEL_117:
        if (*v24 != 0) {
          v45 = (v70_.v70 & 1) != 0 ? (unsigned __int8*)v70_.v72
                                    : (unsigned __int8*)&v70_.v70 + 1;
          if (GameManager_a35ca0(*v24, v45)) {
            v46 = v70_.v70;
            v47 = v70_.v71;
            v70_.v70 = 0;
            v70_.v71 = 0;
            *(_QWORD*)a2 = v46;
            *(_QWORD*)(a2 + 8) = v47;
            v48 = v70_.v72;
            v70_.v72 = nullptr;
            *(_QWORD*)(a2 + 16) = v48;
            goto LABEL_147;
          }
        }
      LABEL_123:
        v49 = fs_a50960(*v4, a1);
        if (v49 >= 1) {
          v50 = v49;
          game_112e760((void*)((unsigned __int8*)&v64_.v64), a1);
          v51 = v64_.v64 & 1;
          v52 = (unsigned __int64)(unsigned __int8)v64_.v64 >> 1;
          if (v51 != 0) {
            v52 = v64_.v65;
          }
          if (v52 != 0) {
            if (v51 != 0) {
              v53 = (char*)v64_.v66;
            }
            else {
              v53 = (char*)&v64_.v64 + 1;
            }
            sprintf((__int64)v67, "V_PTV_%s_%02d", v53, v50);
            GameRoutine_60a020((__int64)&v70_.v70, v67);
            if (*v24 != 0) {
              v54 = (v70_.v70 & 1) != 0 ? (unsigned __int8*)v70_.v72
                                        : (unsigned __int8*)&v70_.v70 + 1;
              if (GameManager_a35ca0(*v24, v54)) {
                v55 = v70_.v70;
                v56 = v70_.v71;
                v70_.v70 = 0;
                v70_.v71 = 0;
                *(_QWORD*)a2 = v55;
                *(_QWORD*)(a2 + 8) = v56;
                v57 = v70_.v72;
                v70_.v72 = nullptr;
                *(_QWORD*)(a2 + 16) = v57;
                if ((v64_.v64 & 1) != 0 && v64_.v66 != nullptr) {
                  v58 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v58 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v58,
                      (__int64)v64_.v66);
                }
                goto LABEL_147;
              }
            }
            v51 = v64_.v64 & 1;
          }
          if (v51 != 0 && v64_.v66 != nullptr) {
            v59 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                (__int64)v64_.v66);
          }
        }
        *(_WORD*)a2 = 0;
      LABEL_147:
        if ((v68_.v68[0] & 1) != 0 && v68_.v69 != nullptr) {
          v60 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, (__int64)v68_.v69);
        }
        if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
          v61 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, (__int64)v70_.v72);
        }
        goto LABEL_157;
      }
    }
    memmove((__int64)v35, (__int64)v33, v32);
    goto LABEL_96;
  }
  if (v9 != 0) {
    v11 = v73_.v75;
  }
  else {
    v11 = v73_.v74;
  }
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_168;
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v29 = 26;
    }
    else {
      v29 = (v12 | 7) + 1;
    }
    v30 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v29, 16, 0);
    *(_QWORD*)(a2 + 8) = v13;
    *(_QWORD*)(a2 + 16) = v30;
    *(_QWORD*)a2 = v29 | 1;
    v14 = v30;
  }
  else {
    *(_BYTE*)a2 = 2 * v12;
    v14 = a2 + 1;
    if (v12 == 0) {
      goto LABEL_69;
    }
  }
  memmove(v14, (__int64)v11, v13);
LABEL_69:
  v31 = v73_.v73;
  *(_BYTE*)(v14 + v13) = 0;
  v9 = v31 & 1;
LABEL_157:
  if (v9 != 0 && v73_.v75 != nullptr) {
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v62,
                                  (__int64)v73_.v75);
  }
  if ((v76_.v76[0] & 1) != 0 && v76_.v77 != nullptr) {
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v63,
                                  (__int64)v76_.v77);
  }
}

bool game_11fe200(__int64 a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  _BYTE* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  char v21;
  __int16 v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  bool v46;
  unsigned __int8 v47;
  int v48;
  char v49;
  __int64 v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  int v66;
  int v67;
  int v68;
  int v69;
  signed int v71;
  int v72;
  __int16 v73;
  int v74;
  int v75;
  bool v77;
  int v78;
  int v79;
  unsigned int v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  int v86;
  unsigned int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  unsigned int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  unsigned int v98;
  __int64 v99;
  bool v100;
  unsigned int v101;
  unsigned __int8 v102;
  unsigned int v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  unsigned int v109;
  int v110;
  int v111;
  int v112;
  unsigned int v113;
  unsigned int v114;
  __int64 v115;
  unsigned int v116;
  int v117;
  unsigned int v118;
  int v119;
  int v120;
  int v121;
  bool v122;
  unsigned int v123;
  int v124;
  int v125;
  unsigned int v126;
  int v127;
  unsigned int v128;
  __int64 v129;
  unsigned int v130;
  int v131;
  char v132;
  int v133;
  _BOOL4 v134;
  signed int v135;
  __int64 v136;
  int v137;
  int v138;
  unsigned int v139;
  __int64 v140;
  __int16 v141;
  char v142;
  __int64 v143;
  int v144;
  struct {
    __int64 v145;
    unsigned __int64 v146;
    int v147;
    int v148;
    int v149;
    int v150;
    int v151;
  } v145_;
  __int64 v152;
  struct {
    __int64 v153;
    int v154;
    int v155;
  } v153_;
  __int64 v156;
  struct {
    __int64 v157;
    int v158;
    int v159;
  } v157_;

  *(_QWORD*)a2 = 0xFFFFFFFF00000000LL;
  *(_DWORD*)(a2 + 8) = -1;
  v4 = *(_DWORD*)(a1 + 20);
  v6 = *(_QWORD*)a1;
  v5 = *(_QWORD*)(a1 + 8);
  v137 = *(_DWORD*)(a1 + 16);
  v7 = *(_QWORD*)(a1 + 40);
  v157_.v157 = *(_QWORD*)a1;
  v136 = v7;
  v8 = *(_DWORD*)(a1 + 28);
  v157_.v158 = *(_DWORD*)(a1 + 24);
  v157_.v159 = v8;
  if (!AISupportSkillScope_11ff100((int*)&v157_.v157, (int*)&v156)) {
    return false;
  }
  if ((*(_BYTE*)(a1 + 28) & 1) != 0) {
    v156 = 0x100000002LL;
  }
  v153_.v155 = 0;
  v152 = 0;
  v153_.v153 = v5;
  v9 = (_BYTE*)(v5 + 847);
  v10 = v137;
  v140 = a1;
  v11 = *GameData_212c878[0];
  v12 = 2;
  while (1) {
    if (*(_WORD*)(v9 - 19) != 0 && (*(v9 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) +
                                       8LL * *(unsigned __int16*)(v9 - 19)) +
                            72LL) < 8u) {
      LODWORD(v12) = v12 - 2;
      goto LABEL_20;
    }
    if (*(_WORD*)(v9 - 11) != 0 && (*(v9 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) +
                                       8LL * *(unsigned __int16*)(v9 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v9 - 3) != 0 && (*v9 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) +
                                       8LL * *(unsigned __int16*)(v9 - 3)) +
                            72LL) < 8u) {
      goto LABEL_20;
    }
    v12 += 3;
    v9 += 24;
    if (v12 == 32) {
      v153_.v154 = -1;
      goto LABEL_21;
    }
  }
  LODWORD(v12) = v12 - 1;
LABEL_20:
  v153_.v154 = v12;
  AISupportSkillScope_11ff100((int*)&v153_.v153, (int*)&v152);
  v10 = v137;
LABEL_21:
  v145_.v146 = -1;
  v143 = -1;
  v144 = 100;
  v134 = *(_BYTE*)(GameData_21ca2f8 +
                   *(unsigned __int8*)(GameData_21ca2f8 + 24) + 16) == 1 &&
         (GameData_21d9188 == 0 || (*(_BYTE*)(GameData_21d9188 + 30) & 1) == 0);
  v14 = *(_DWORD*)(a1 + 28);
  v15 = *(_DWORD*)(a1 + 56);
  v16 = *(_DWORD*)(a1 + 60);
  v145_.v145 = v6;
  v145_.v147 = v10;
  v145_.v148 = v4;
  v17 = HIDWORD(v156);
  v145_.v149 = v14;
  v145_.v150 = v15;
  v145_.v151 = v16;
  v127 = v4;
  if (HIDWORD(v156) == 255) {
    v18 = *(unsigned __int8*)(GameData_21ca300 + 29);
    v126 = *(unsigned __int8*)(GameData_21ca300 + 31);
    v128 = *(unsigned __int8*)(GameData_21ca300 + 28);
    v138 = *(unsigned __int8*)(GameData_21ca300 + 30);
    v19 = v18 > v126 ||
          *(unsigned __int8*)(GameData_21ca300 + 28) >
              (unsigned int)*(unsigned __int8*)(GameData_21ca300 + 30);
    if (v19) {
      return (signed __int32)*(_DWORD*)(a2 + 4) >= 0;
    }
    v130 = ~(_DWORD)v152;
  LABEL_33:
    v20 = v128;
    v21 = v18 - v4;
    if ((int)(v18 - v4) < 0) {
      v21 = v4 - v18;
    }
    v132 = v21;
    while (1) {
      v145_.v146 = __PAIR64__(v18, v20);
      if (!AISupportSkillScope_11ff4a0(&v145_.v145, (int*)&v143)) {
        goto LABEL_37;
      }
      v23 = v143;
      v24 = HIDWORD(v143);
      v25 = v143 + 32 * HIDWORD(v143);
      if ((unsigned int)v25 >= 0x400) {
        v26 = 0;
      }
      else {
        v26 = (unsigned int)v25;
      }
      v27 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)GameData_21306a0[0] +
                                           12880LL) +
                                v26 + 64);
      if ((*(_BYTE*)(v140 + 28) & 0x40) != 0) {
        v28 = *GameData_212ce98[0];
        if ((int)v143 - 1 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
          v29 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
        }
        else {
          v29 = v143 - 1;
        }
        v30 = HIDWORD(v143) - 1;
        if (HIDWORD(v143) - 1 <= *(unsigned __int8*)(v28 + 29)) {
          v30 = *(unsigned __int8*)(v28 + 29);
        }
        if ((int)v143 + 1 < *(unsigned __int8*)(*GameData_212ce98[0] + 30)) {
          v31 = v143 + 1;
        }
        else {
          v31 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
        }
        if (HIDWORD(v143) + 1 <
            *(unsigned __int8*)(*GameData_212ce98[0] + 31)) {
          v32 = HIDWORD(v143) + 1;
        }
        else {
          v32 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
        }
        if (v30 > v32 || v29 > v31) {
          goto LABEL_37;
        }
        v34 = v29 + 32 * v30;
        v35 = v29 - v143;
        v36 = v29 - 1;
      LABEL_62:
        v37 = v30 - HIDWORD(v143);
        v38 = v36;
        v39 = v35;
        v40 = v34;
        if (v30 - HIDWORD(v143) < 0) {
          v37 = HIDWORD(v143) - v30;
        }
        while (1) {
          v41 = v39 >= 0 ? v39 : -v39;
          if (v41 + v37 == 1) {
            v42 = v40 >= 0x400 ? 0LL : v40;
            v43 = *(_QWORD*)(v28 + 96) + v42;
            v44 = *(unsigned __int8*)(v43 + 8);
            if (*(_BYTE*)(v43 + 8) != 0) {
              v45 = *(_QWORD*)(GameData_21ca310 + 56) +
                    2224LL * *(unsigned __int8*)(v43 + 8);
              v46 = v44 > 0xFA || v45 == 2224;
              if (!v46 && *(_QWORD*)(v45 - 1832) != 0 &&
                  *(_QWORD*)(v45 - 1784) == *(_QWORD*)(v6 + 440)) {
                break;
              }
            }
          }
          ++v40;
          ++v39;
          if (++v38 >= v31) {
            v34 += 32;
            v19 = v30++ < v32;
            if (v19) {
              goto LABEL_62;
            }
            goto LABEL_37;
          }
        }
      }
      if (v136 != 0) {
        v47 = *(_BYTE*)(v136 + 8 + v26);
      }
      else {
        v47 = 0;
      }
      v141 = 0;
      v142 = 0;
      game_11f5940(v6, v143, SHIDWORD(v143), v47, (bool*)&v141);
      v48 = *(_DWORD*)(v140 + 28);
      v49 = v20 - v137;
      if ((int)(v20 - v137) < 0) {
        v49 = v137 - v20;
      }
      if ((v48 & 0x80) == 0) {
        break;
      }
    LABEL_113:
      v62 = *(_DWORD*)(a2 + 4);
      if ((v62 & 0x80000000) == 0) {
        if (!v134 || (*(_BYTE*)(a2 + 13) & 1) != 0 || (v141 & 0x100) != 0 ||
            (*(_BYTE*)(a2 + 14) & 1) != 0 || (v142 & 1) != 0) {
          goto LABEL_126;
        }
        v63 = *(unsigned __int8*)(a2 + 12);
        if ((v63 & 1) == 0 && (v141 & 1) != 0) {
          goto LABEL_37;
        }
        if ((v63 ^ 1 | (unsigned __int8)v141) == 1) {
        LABEL_126:
          if (*(_DWORD*)a2 >= v27) {
            v64 = v62 | (*(_DWORD*)(a2 + 8) << 16);
            if (*(_DWORD*)a2 > v27 || v64 <= (v23 | (v24 << 16))) {
              goto LABEL_37;
            }
          }
        }
      }
      v22 = v141;
      *(_DWORD*)a2 = v27;
      *(_DWORD*)(a2 + 4) = v23;
      *(_DWORD*)(a2 + 8) = v24;
      *(_WORD*)(a2 + 12) = v22;
      *(_BYTE*)(a2 + 14) = v142;
    LABEL_37:
      v46 = v20++ == v138;
      if (v46) {
        v4 = v127;
        v46 = v18++ == v126;
        if (v46) {
          return (signed __int32)*(_DWORD*)(a2 + 4) >= 0;
        }
        goto LABEL_33;
      }
    }
    if ((v48 & 2) == 0) {
      if (*(_BYTE*)(GameData_21ca2f8 +
                    *(unsigned __int8*)(GameData_21ca2f8 + 24) + 16) == 1 &&
          (*(_QWORD*)GameData_212d290 == 0 ||
           (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0)) {
        v50 = *(_QWORD*)(*(_QWORD*)v140 + 440LL);
        if (v50 == 0) {
        LABEL_93:
          v51 = v50 | (2 * ((v130 >> (v49 + v132)) & 1));
          v52 = *(_DWORD*)(v140 + 48);
          v53 = v51 << 8;
          if ((v52 & 0x80000000) == 0) {
            v54 = v23 - v52;
            v55 = v53 | 0xFF;
            if (v54 < 0) {
              v54 = -v54;
            }
            v56 = v24 - *(_DWORD*)(v140 + 52);
            if (v56 < 0) {
              v56 = *(_DWORD*)(v140 + 52) - v24;
            }
            v57 = v56 + v54;
            if (v57 >= 0xFF) {
              v57 = 255;
            }
            v53 = v55 - v57;
          }
          v58 = v53 << 8;
          v59 = *(_QWORD*)(v140 + 40);
          if (v59 != 0) {
            v58 |= *(unsigned __int8*)(v59 + v26 + 8) ^ 0xFF;
          }
          LODWORD(v60) =
              ((unsigned int)game_11f51f0(v6, v23, v24) << 8) + (v58 << 12);
          goto LABEL_110;
        }
        if (*(_BYTE*)(v50 + 16) == 0) {
          LODWORD(v50) =
              ((unsigned int)~*(_DWORD*)(*(_QWORD*)GameData_21306c8[0] +
                                         4LL * (v25 >> 5) + 8) >>
               v23) &
              1;
          goto LABEL_93;
        }
      }
      LODWORD(v50) = 0;
      goto LABEL_93;
    }
    if (*(_BYTE*)(GameData_21ca2f8 +
                  *(unsigned __int8*)(GameData_21ca2f8 + 24) + 16) == 1 &&
        (*(_QWORD*)GameData_212d290 == 0 ||
         (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0)) {
      v60 = *(_QWORD*)(*(_QWORD*)v140 + 440LL);
      if (v60 == 0) {
      LABEL_110:
        v61 = 101 - v27;
        if (v27 >= 0x65) {
          v61 = 0;
        }
        v27 = v60 + v61;
        goto LABEL_113;
      }
      if (*(_BYTE*)(v60 + 16) == 0) {
        LODWORD(v60) =
            (((unsigned int)~*(_DWORD*)(*(_QWORD*)GameData_21306c8[0] +
                                        4LL * (v25 >> 5) + 8) >>
              v23) &
             1)
            << 8;
        goto LABEL_110;
      }
    }
    LODWORD(v60) = 0;
    goto LABEL_110;
  }
  if (v10 - HIDWORD(v156) <= *(unsigned __int8*)(GameData_21ca300 + 28)) {
    v66 = *(unsigned __int8*)(GameData_21ca300 + 28);
  }
  else {
    v66 = v10 - HIDWORD(v156);
  }
  if (v4 - HIDWORD(v156) <= *(unsigned __int8*)(GameData_21ca300 + 29)) {
    v67 = *(unsigned __int8*)(GameData_21ca300 + 29);
  }
  else {
    v67 = v4 - HIDWORD(v156);
  }
  v68 = *(unsigned __int8*)(GameData_21ca300 + 31);
  if (HIDWORD(v156) + v10 >= *(unsigned __int8*)(GameData_21ca300 + 30)) {
    v69 = *(unsigned __int8*)(GameData_21ca300 + 30);
  }
  else {
    v69 = HIDWORD(v156) + v10;
  }
  if (HIDWORD(v156) + v4 < v68) {
    v68 = HIDWORD(v156) + v4;
  }
  v124 = v68;
  v125 = v66;
  if (v67 > v68 || v66 > v69) {
    return (signed __int32)*(_DWORD*)(a2 + 4) >= 0;
  }
  v131 = HIDWORD(v156);
  v123 = ~(_DWORD)v152;
  v139 = v156;
  while (2) {
    v71 = v125;
    v135 = v67;
    if (v67 - v4 >= 0) {
      v72 = v67 - v4;
    }
    else {
      v72 = v4 - v67;
    }
    do {
      v74 = v71 - v10;
      if (v71 - v10 < 0) {
        v74 = v10 - v71;
      }
      v75 = v74 + v72;
      if (v74 + v72 == 0 || v75 > v17) {
        goto LABEL_152;
      }
      if (((v139 >> v75) & 1) == 0) {
        goto LABEL_152;
      }
      v145_.v146 = __PAIR64__(v135, v71);
      v77 = AISupportSkillScope_11ff4a0(&v145_.v145, (int*)&v143);
      v10 = v137;
      if (!v77) {
        goto LABEL_152;
      }
      v78 = v143;
      v79 = HIDWORD(v143);
      v80 = v143 + 32 * HIDWORD(v143);
      v133 = v80;
      if (v80 >= 0x400) {
        v81 = 0;
      }
      else {
        v81 = v80;
      }
      if ((*(_BYTE*)(v140 + 28) & 0x40) != 0) {
        v82 = *GameData_212ce98[0];
        if ((int)v143 - 1 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
          v83 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
        }
        else {
          v83 = v143 - 1;
        }
        v84 = HIDWORD(v143) - 1;
        if (HIDWORD(v143) - 1 <= *(unsigned __int8*)(v82 + 29)) {
          v84 = *(unsigned __int8*)(v82 + 29);
        }
        if ((int)v143 + 1 < *(unsigned __int8*)(*GameData_212ce98[0] + 30)) {
          v85 = v143 + 1;
        }
        else {
          v85 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
        }
        if (HIDWORD(v143) + 1 <
            *(unsigned __int8*)(*GameData_212ce98[0] + 31)) {
          v86 = HIDWORD(v143) + 1;
        }
        else {
          v86 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
        }
        if (v84 > v86 || v83 > v85) {
          goto LABEL_152;
        }
        v88 = v83 + 32 * v84;
        v89 = v83 - v143;
        v90 = v83 - 1;
      LABEL_186:
        v91 = v84 - HIDWORD(v143);
        v92 = v90;
        v93 = v89;
        v94 = v88;
        if (v84 - HIDWORD(v143) < 0) {
          v91 = HIDWORD(v143) - v84;
        }
        while (1) {
          v95 = v93 >= 0 ? v93 : -v93;
          if (v95 + v91 == 1) {
            v96 = v94 >= 0x400 ? 0LL : v94;
            v97 = *(_QWORD*)(v82 + 96) + v96;
            v98 = *(unsigned __int8*)(v97 + 8);
            if (*(_BYTE*)(v97 + 8) != 0) {
              v99 = *(_QWORD*)(GameData_21ca310 + 56) +
                    2224LL * *(unsigned __int8*)(v97 + 8);
              v100 = v98 > 0xFA || v99 == 2224;
              if (!v100 && *(_QWORD*)(v99 - 1832) != 0 &&
                  *(_QWORD*)(v99 - 1784) == *(_QWORD*)(v6 + 440)) {
                break;
              }
            }
          }
          ++v94;
          ++v93;
          if (++v92 >= v85) {
            v88 += 32;
            v19 = v84++ < v86;
            if (v19) {
              goto LABEL_186;
            }
            goto LABEL_152;
          }
        }
      }
      v129 = v81;
      v101 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)GameData_21306a0[0] +
                                            12880LL) +
                                 v81 + 64);
      if (v136 != 0) {
        v102 = *(_BYTE*)(v136 + 8 + v81);
      }
      else {
        v102 = 0;
      }
      v141 = 0;
      v142 = 0;
      game_11f5940(v6, v143, SHIDWORD(v143), v102, (bool*)&v141);
      v10 = v137;
      v103 = v101;
      v17 = v131;
      v104 = *(_DWORD*)(v140 + 28);
      if ((v104 & 0x80) == 0) {
        if ((v104 & 2) == 0) {
          if (*(_BYTE*)(GameData_21ca2f8 +
                        *(unsigned __int8*)(GameData_21ca2f8 + 24) + 16) != 1) {
            v105 = v129;
            LODWORD(v106) = 0;
            goto LABEL_222;
          }
          v105 = v129;
          if (*(_QWORD*)GameData_212d290 == 0 ||
              (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0) {
            v106 = *(_QWORD*)(*(_QWORD*)v140 + 440LL);
            if (v106 == 0) {
            LABEL_222:
              v108 = *(_DWORD*)(v140 + 48);
              v109 = ((unsigned int)v106 | (2 * ((v123 >> v75) & 1))) << 8;
              if ((v108 & 0x80000000) == 0) {
                v110 = v78 - v108;
                v111 = v109 | 0xFF;
                if (v110 < 0) {
                  v110 = -v110;
                }
                v112 = v79 - *(_DWORD*)(v140 + 52);
                if (v112 < 0) {
                  v112 = *(_DWORD*)(v140 + 52) - v79;
                }
                v113 = v112 + v110;
                if (v113 >= 0xFF) {
                  v113 = 255;
                }
                v109 = v111 - v113;
              }
              v114 = v109 << 8;
              v115 = *(_QWORD*)(v140 + 40);
              v116 = v103;
              if (v115 != 0) {
                v114 |= *(unsigned __int8*)(v115 + v105 + 8) ^ 0xFF;
              }
              v117 = game_11f51f0(v6, v78, v79);
              v10 = v137;
              v103 = v116;
              v17 = v131;
              LODWORD(v107) = (v117 << 8) + (v114 << 12);
              goto LABEL_233;
            }
            if (*(_BYTE*)(v106 + 16) == 0) {
              LODWORD(v106) =
                  ((unsigned int)~*(_DWORD*)(GameData_22400c8 +
                                             4LL * (v133 >> 5) + 8) >>
                   v78) &
                  1;
              goto LABEL_222;
            }
          }
          LODWORD(v106) = 0;
          goto LABEL_222;
        }
        if (*(_BYTE*)(GameData_21ca2f8 +
                      *(unsigned __int8*)(GameData_21ca2f8 + 24) + 16) == 1 &&
            (*(_QWORD*)GameData_212d290 == 0 ||
             (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0)) {
          v107 = *(_QWORD*)(*(_QWORD*)v140 + 440LL);
          if (v107 == 0) {
          LABEL_233:
            v118 = 101 - v103;
            if (v103 >= 0x65) {
              v118 = 0;
            }
            v103 = v107 + v118;
            goto LABEL_236;
          }
          if (*(_BYTE*)(v107 + 16) == 0) {
            LODWORD(v107) =
                (((unsigned int)~*(_DWORD*)(GameData_22400c8 +
                                            4LL * (v133 >> 5) + 8) >>
                  v78) &
                 1)
                << 8;
            goto LABEL_233;
          }
        }
        LODWORD(v107) = 0;
        goto LABEL_233;
      }
    LABEL_236:
      v119 = *(_DWORD*)(a2 + 4);
      if (v119 < 0) {
        goto LABEL_151;
      }
      if (v134 && (*(_BYTE*)(a2 + 13) & 1) == 0 && (v141 & 0x100) == 0 &&
          (*(_BYTE*)(a2 + 14) & 1) == 0 && (v142 & 1) == 0) {
        v120 = *(unsigned __int8*)(a2 + 12);
        if ((v120 & 1) == 0 && (v141 & 1) != 0) {
          goto LABEL_152;
        }
        if ((v120 ^ 1 | (unsigned __int8)v141) != 1) {
          goto LABEL_151;
        }
      }
      if (*(_DWORD*)a2 < v103 ||
          ((v121 = v119 | (*(_DWORD*)(a2 + 8) << 16), *(_DWORD*)a2 <= v103)
               ? (v122 = v121 <= (v78 | (v79 << 16)))
               : (v122 = true),
           !v122)) {
      LABEL_151:
        v73 = v141;
        *(_DWORD*)a2 = v103;
        *(_DWORD*)(a2 + 4) = v78;
        *(_DWORD*)(a2 + 8) = v79;
        *(_WORD*)(a2 + 12) = v73;
        *(_BYTE*)(a2 + 14) = v142;
      }
    LABEL_152:
      v19 = v71++ < v69;
    } while (v19);
    v4 = v127;
    v67 = v135 + 1;
    if (v135 < v124) {
      continue;
    }
    return (signed __int32)*(_DWORD*)(a2 + 4) >= 0;
  }
}

bool game_1216b80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  _QWORD* v8;
  int v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  signed int v21;
  char v22;
  bool v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  _QWORD* v41;
  __int64 v42;
  char v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  unsigned int v53;
  int v54;
  int v55;
  __int64 v56;
  unsigned int v57;
  int v58;
  __int64 v59;
  __int64 v60;
  unsigned __int16* v61;
  int v62;
  int v63;
  __int64 v64;
  _BYTE* v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  __int64* v71;
  __int64 v72;
  bool v73;
  __int64 v74;
  int v75;
  int v76;
  int v77;
  unsigned int v78;
  _QWORD* v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  int v88;
  unsigned int v89;
  unsigned int v90;
  char* v91;
  unsigned int v92;
  int v94;
  char v96;
  char v97;
  char v98;
  int v99;
  unsigned int v100;
  int v101;
  unsigned int v102;
  __int64 v103;
  __int64 v104;
  int v105;
  int v106;
  signed int v107;
  __int64 v108;
  struct {
    unsigned __int64 v109;
    _BYTE v110[15];
  } v109_;
  struct {
    _DWORD v111[3074];
    __int64 v112;
    unsigned __int64 v113;
    _QWORD* v114;
    __int64 v115;
    char gap12488_[8];
    int v116;
  } v111_;
  struct {
    __int64 v117[14];
    char v118;
  } v117_;
  struct {
    _QWORD v119[4];
    _QWORD* v120;
  } v119_;
  struct {
    __int64 v121;
    __int64 v122;
    __int64 v123;
  } v121_;
  struct {
    int v124;
    char gap12708_[4];
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    char gap12776_[12224];
    __int64 v133;
    char gap25008_[8];
    _QWORD* v134;
    char gap25024_[28];
    __int16 v135;
    char v136;
  } v124_;

  {
    v4 = GameData_21306c0[0];
    __asm__ volatile("" ::"r"(v4));
  }
  (**(void (***)(__int64, __int64))(*(_QWORD*)GameData_21306c0[0] + 32LL))(
      *(_QWORD*)GameData_21306c0[0] + 32LL, a1);
  v108 = a1;
  GameRoutine_11fe0c0((__int64)v117_.v117, a1);
  GameHr_1219100((__int64)&v109_.v109);
  {
    v5 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v89 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
    __asm__ volatile("" ::"r"(v89));
  }
  {
    v90 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    __asm__ volatile("" ::"r"(v90));
  }
  if (v5 > v89 || *(unsigned __int8*)(*GameData_212ce98[0] + 28) > v6) {
    goto LABEL_6;
  }
  {
    v16 = GameData_21306a0[0];
    __asm__ volatile("" ::"r"(v16));
  }
  v91 = (char*)GameData_2130948 + 16;
  v17 = fw_memory_g_heap_manager_ptr;
  {
    v92 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
    __asm__ volatile("" ::"r"(v92));
  }
  v18 = v108 + 828;
  while (2) {
    v19 = v90;
    v100 = v5;
    v94 = 32 * v5;
    while (2) {
      v107 = v19;
      v22 =
          GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)v16 + 8LL), v19, v5, v108, 0);
      v21 = v107;
      if ((v22 & 1) == 0) {
        goto LABEL_20;
      }
      v23 = (signed __int32)*(_DWORD*)(*(_QWORD*)v4 + 40LL) <= v107 &&
            v107 <= (signed __int32)*(_DWORD*)(*(_QWORD*)v4 + 44LL);
      {
        v24 = v23 && (signed __int32)*(_DWORD*)(*(_QWORD*)v4 + 48LL) <= (int)v5;
        __asm__ volatile("" ::"r"(v24));
      }
      if (!v24 ||
          (signed int)v5 > (signed __int32)*(_DWORD*)(*(_QWORD*)v4 + 52LL)) {
        goto LABEL_20;
      }
      v124_.v124 = 0;
      v121_.v123 = 0;
      v121_.v122 = 0;
      v121_.v121 = 0;
      v124_.v125 = 0;
      v124_.v126 = 0;
      v124_.v127 = 0;
      v124_.v128 = 0;
      v124_.v129 = 0;
      v124_.v130 = 0;
      v124_.v131 = 0;
      v124_.v132 = 0;
      {
        v25 = *GameData_212ce98[0];
        __asm__ volatile("" ::"r"(v25));
      }
      v119_.v119[1] = &v121_.v121;
      v119_.v120 = v119_.v119;
      {
        v26 = *(_QWORD*)(v25 + 96);
        __asm__ volatile("" ::"r"(v26));
      }
      v119_.v119[0] = v91;
      Image_72c060(v26, v117_.v117[0], v107, v5, (__int64)v119_.v119);
      if (v119_.v120 == v119_.v119) {
        v27 = 32;
        goto LABEL_35;
      }
      if (v119_.v120 != nullptr) {
        v27 = 40;
      LABEL_35:
        (*(void (**)(__int64))(*v119_.v120 + v27))((__int64)v119_.v120);
      }
      {
        v28 = v117_.v117[0];
        __asm__ volatile("" ::"r"(v28));
      }
      {
        v29 = *(_QWORD*)(v117_.v117[0] + 1680);
        __asm__ volatile("" ::"r"(v29));
      }
      if ((int)((unsigned __int64)(*(_QWORD*)(v117_.v117[0] + 1688) - v29) >>
                2) >= 1) {
        {
          v30 = *(_QWORD*)(v117_.v117[0] + 1648);
          __asm__ volatile("" ::"r"(v30));
        }
        *(_QWORD*)(v117_.v117[0] + 1688) = v29;
        {
          v31 = *(_DWORD*)(v28 + 416);
          __asm__ volatile("" ::"r"(v31));
        }
        *(_DWORD*)(v28 + 1672) = 0;
        *(_QWORD*)(v28 + 1728) = 0;
        *(_QWORD*)(v28 + 1736) = 0;
        *(_QWORD*)(v28 + 1656) = v30;
        if ((v31 & 0x10000000) == 0) {
          *(_DWORD*)(v28 + 416) = v31 | 0x10000000;
          game_6c51e0(v28);
          GameRoutine_6c6da0(v28);
          game_6c6ec0(v28);
          *(_DWORD*)(v28 + 416) &= ~0x10000000u;
          {
            v28 = v117_.v117[0];
            __asm__ volatile("" ::"r"(v28));
          }
        }
      }
      GameHr_84cf20(v28 + 1648, (__int64)&v121_.v121, 1);
      {
        v32 = v117_.v117[0];
        __asm__ volatile("" ::"r"(v32));
      }
      *(_BYTE*)(v117_.v117[0] + 584) = v107;
      {
        v33 = *(_DWORD*)(v32 + 416);
        __asm__ volatile("" ::"r"(v33));
      }
      *(_BYTE*)(v32 + 585) = v5;
      if ((v33 & 0x10000000) == 0) {
        *(_DWORD*)(v32 + 416) = v33 | 0x10000000;
        game_6c51e0(v32);
        GameRoutine_6c6da0(v32);
        game_6c6ec0(v32);
        *(_DWORD*)(v32 + 416) &= ~0x10000000u;
      }
      v117_.v118 = 1;
      if (v124_.v128 != 0) {
        {
          v34 = *(_QWORD*)v17;
          __asm__ volatile("" ::"r"(v34));
        }
        v124_.v129 = v124_.v128;
        if (*(_QWORD*)(v34 + 200) != 0) {
          v35 = 128;
        }
        else {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(v34 + v35, v124_.v128);
      }
      if (v124_.v125 != 0) {
        {
          v36 = *(_QWORD*)v17;
          __asm__ volatile("" ::"r"(v36));
        }
        v124_.v126 = v124_.v125;
        if (*(_QWORD*)(v36 + 200) != 0) {
          v37 = 128;
        }
        else {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(v36 + v37, v124_.v125);
      }
      if (v121_.v121 != 0) {
        {
          v38 = *(_QWORD*)v17;
          __asm__ volatile("" ::"r"(v38));
        }
        v121_.v122 = v121_.v121;
        if (*(_QWORD*)(v38 + 200) != 0) {
          v39 = 128;
        }
        else {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free(v38 + v39, v121_.v121);
      }
      *(_WORD*)&v109_.v110[12] = 0;
      v109_.v110[14] = 0;
      v111_.v111[3073] = 0;
      v109_.v109 = 0xFFFFFFFF00000000LL;
      *(_QWORD*)v109_.v110 = 0xFFFFFFFF00000000LL;
      *(_DWORD*)&v109_.v110[8] = -1;
      if (v111_.v115 != 0) {
        v40 = v111_.v114;
        if (v111_.v114 != nullptr) {
          do {
            v41 = (_QWORD*)*v40;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
              v42 = 128;
            }
            else {
              v42 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v42, (__int64)v40);
            v40 = v41;
          } while (v41 != nullptr);
        }
        v43 = v111_.v113;
        v111_.v114 = nullptr;
        if (v111_.v113 != 0) {
          if (v111_.v113 >= 8) {
            v45 = v111_.v113 & 0xFFFFFFFFFFFFFFF8LL;
            v44 = 0;
            do {
              *(_QWORD*)(v111_.v112 + 8 * v44) = 0;
              *(_QWORD*)(v111_.v112 + 8 * v44 + 8) = 0;
              *(_QWORD*)(v111_.v112 + 8 * v44 + 16) = 0;
              *(_QWORD*)(v111_.v112 + 8 * v44 + 24) = 0;
              *(_QWORD*)(v111_.v112 + 8 * v44 + 32) = 0;
              *(_QWORD*)(v111_.v112 + 8 * v44 + 40) = 0;
              *(_QWORD*)(v111_.v112 + 8 * v44 + 48) = 0;
              v46 = v111_.v112 + 8 * v44;
              v44 += 8;
              *(_QWORD*)(v46 + 56) = 0;
            } while (v45 != v44);
          }
          else {
            v44 = 0;
          }
          v47 = v43 & 7;
          if (v47 != 0) {
            v48 = 8 * v44;
            do {
              --v47;
              *(_QWORD*)(v111_.v112 + v48) = 0;
              v48 += 8;
            } while (v47 != 0);
          }
        }
        v111_.v115 = 0;
      }
      {
        v49 = *(_QWORD*)v16;
        __asm__ volatile("" ::"r"(v49));
      }
      v111_.v116 = 0;
      {
        v50 = *(_QWORD*)(v49 + 12880);
        __asm__ volatile("" ::"r"(v50));
      }
      v51 = v107 + v94;
      if ((unsigned int)(v107 + v94) >= 0x400) {
        v52 = 0;
      }
      else {
        v52 = v51;
      }
      {
        v53 = *(unsigned __int8*)(v50 + v52 + 64);
        __asm__ volatile("" ::"r"(v53));
      }
      if (a2 != 0) {
        v54 = *(unsigned __int8*)(a2 + 8 + v52);
        __asm__ volatile("" ::"r"(v54));
      }
      else {
        v54 = 0;
      }
      v124_.v135 = 0;
      v124_.v136 = 0;
      game_11f5940(v108, v107, v5, v54, (bool*)&v124_.v135);
      if (*(_BYTE*)(*GameData_212ce90[0] +
                    *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1) {
        v55 = v107;
        if (*(_QWORD*)GameData_212d290 != 0 &&
                (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) != 0 ||
            (v56 = *(_QWORD*)(v108 + 440)) == 0 || *(_BYTE*)(v56 + 16) != 0) {
          v57 = 0;
        }
        else {
          {
            v57 = (((unsigned int)~*(_DWORD*)(*(_QWORD*)GameData_21306c8[0] +
                                              4LL * (v51 >> 5) + 8) >>
                    v107) &
                   1)
                  << 12;
            __asm__ volatile("" ::"r"(v57));
          }
        }
      }
      else {
        v55 = v107;
        v57 = 0;
      }
      if (v53 >= 0x65) {
        v58 = 0;
      }
      else {
        v58 = 1616 - 16 * v53;
      }
      v59 = 0;
      v99 = v57 + game_11f51f0(v108, v55, v5) + v58;
      v97 = HIBYTE(v124_.v135);
      v98 = v124_.v135;
      v96 = v124_.v136;
      {
        v60 = *GameData_2130988[0];
        __asm__ volatile("" ::"r"(v60));
      }
      {
        v103 = *GameData_2130988[0] + 12417;
        __asm__ volatile("" ::"r"(v103));
      }
      {
        v104 = *GameData_2130988[0];
        __asm__ volatile("" ::"r"(v104));
      }
      v101 = v54 ^ 0xFF;
      while (2) {
        v61 = (unsigned __int16*)(v18 + 8 * v59);
        if (!game_11f30c0(v108, v61, 0) ||
            (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * *v61) +
                       336LL) &
             0x40) == 0 ||
            (game_AITarget_EnumerateAssist(v60, v108, v107, v5, v59) & 1) ==
                0) {
          goto LABEL_88;
        }
        GameHr_1219100((__int64)&v121_.v121);
        {
          v62 = *(_DWORD*)(v60 + 12356);
          __asm__ volatile("" ::"r"(v62));
        }
        if (v62 < 1) {
          goto LABEL_132;
        }
        v63 = 0;
        v102 = 0;
        {
          v105 = *(_DWORD*)(v60 + 12356);
          __asm__ volatile("" ::"r"(v105));
        }
        v106 = -1;
        while (2) {
          if ((AITarget_1276580(v60, v63) & 1) == 0) {
            goto LABEL_95;
          }
          {
            v64 = *(unsigned int*)(v60 + 24700);
            __asm__ volatile("" ::"r"(v64));
          }
          if ((int)v64 < 1) {
            goto LABEL_95;
          }
          v65 = (_BYTE*)v103;
          v66 = 0;
          v67 = 0;
          do {
            if (*v65 != 0) {
              v71 = game_UnitPool_Get(v65);
              if (v71 != nullptr) {
                v72 = (__int64)v71;
                {
                  v73 = *((_WORD*)v71 + 246) == 0 && *((_BYTE*)v71 + 496) == 0;
                  __asm__ volatile("" ::"r"(v73));
                }
                if (!v73 ||
                    (LODWORD(v119_.v119[0]) =
                         *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF,
                     (game_HasSkill(v71 + 218, (unsigned int*)v119_.v119) &
                      1) == 0)) {
                  {
                    v74 = *(_QWORD*)(v72 + 440);
                    __asm__ volatile("" ::"r"(v74));
                  }
                  if (v74 == 0 || *(_BYTE*)(v74 + 16) != 0) {
                    if ((*(_WORD*)(v72 + 1977) & 0x180) == 0) {
                      goto LABEL_103;
                    }
                  }
                  else {
                    {
                      v75 = *(__int16*)(v72 + 492);
                      __asm__ volatile("" ::"r"(v75));
                    }
                    LOBYTE(v119_.v119[0]) = 0;
                    if (100 * v75 / (int)game_Unit_GetParam(v72) >= 75) {
                      goto LABEL_103;
                    }
                  }
                  LOBYTE(v119_.v119[0]) = 0;
                  v68 = game_Unit_GetParam(v72) - *(__int16*)(v72 + 492);
                  {
                    v69 =
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                      [0] +
                                                                  64) +
                                                       8LL * *v61) +
                                            88LL) >>
                        ((*((_BYTE*)v61 + 3) & 8) != 0);
                    __asm__ volatile("" ::"r"(v69));
                  }
                  LOBYTE(v119_.v119[0]) = 2;
                  v66 += v68;
                  v70 = (int)game_Unit_GetParam(v108) / 3 + v69;
                  if (v70 >= v68) {
                    v70 = v68;
                  }
                  v67 += v70;
                }
              }
            }
          LABEL_103:
            --v64;
            v65 += 12;
          } while (v64 != 0);
          v62 = v105;
          if (v67 < 1) {
            v60 = v104;
          }
          else {
            if ((unsigned int)v67 >= 0xFF) {
              v76 = 255;
            }
            else {
              v76 = v67;
            }
            if (v66 >= 255) {
              v77 = 255;
            }
            else {
              v77 = v66;
            }
            v60 = v104;
            v78 = (v77 << 16) | (v76 << 8) | v101;
            if (v106 < 0 || v78 > v102) {
              GameHr_1226120(v104 + 12408, (__int64)&v124_.v124);
              v102 = v78;
              v106 = v63;
            }
          }
        LABEL_95:
          if (++v63 != v62) {
            continue;
          }
          break;
        }
        v5 = v100;
        v18 = v108 + 828;
        v17 = fw_memory_g_heap_manager_ptr;
        if ((v106 & 0x80000000) == 0 &&
            ((*(_DWORD*)&v109_.v110[4] & 0x80000000) != 0 ||
             (unsigned int)v109_.v109 < v102 ||
             (unsigned int)v109_.v109 <= v102 && v59 < SHIDWORD(v109_.v109))) {
          *(_DWORD*)&v109_.v110[8] = v100;
          v109_.v109 = __PAIR64__(v59, v102);
          *(_DWORD*)v109_.v110 = v99;
          *(_DWORD*)&v109_.v110[4] = v107;
          v109_.v110[13] = v97;
          v109_.v110[12] = v98;
          v109_.v110[14] = v96;
          GameHr_1226120((__int64)&v124_.v124, (__int64)v111_.v111);
        }
      LABEL_132:
        v79 = v124_.v134;
        if (v124_.v134 != nullptr) {
          do {
            v80 = (_QWORD*)*v79;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
              v81 = 128;
            }
            else {
              v81 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v81, (__int64)v79);
            v79 = v80;
          } while (v80 != nullptr);
        }
        v82 = v124_.v133;
        v124_.v133 = 0;
        if (v82 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
            v83 = 128;
          }
          else {
            v83 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v83, v82);
        }
      LABEL_88:
        if (++v59 != 30) {
          continue;
        }
        break;
      }
      {
        v4 = GameData_21306c0[0];
        __asm__ volatile("" ::"r"(v4));
      }
      v6 = v92;
      {
        v16 = GameData_21306a0[0];
        __asm__ volatile("" ::"r"(v16));
      }
      v21 = v107;
      if ((*(_DWORD*)&v109_.v110[4] & 0x80000000) == 0) {
        v84 = v109_.v109;
        if ((*(_DWORD*)(a3 + 8) & 0x80000000) != 0) {
          goto LABEL_19;
        }
        {
          v85 = *(_DWORD*)(a3 + 16);
          __asm__ volatile("" ::"r"(v85));
        }
        if (v85 <= (unsigned int)v109_.v109) {
          if (v85 != (_DWORD)v109_.v109) {
            goto LABEL_19;
          }
          if (*(_BYTE*)(*GameData_212ce90[0] +
                        *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) !=
                  1 ||
              *(_QWORD*)GameData_212d290 != 0 &&
                  (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) != 0 ||
              (*(_BYTE*)(a3 + 37) & 1) != 0 || (v109_.v110[13] & 1) != 0 ||
              (*(_BYTE*)(a3 + 38) & 1) != 0 || (v109_.v110[14] & 1) != 0 ||
              (v86 = *(unsigned __int8*)(a3 + 36)) == v109_.v110[12]) {
            {
              v87 = *(_DWORD*)(a3 + 24);
              __asm__ volatile("" ::"r"(v87));
            }
            if (v87 < *(_DWORD*)v109_.v110 || (v88 = *(_DWORD*)(a3 + 28)) < 0 ||
                v87 <= *(_DWORD*)v109_.v110 &&
                    (v88 | (*(_DWORD*)(a3 + 32) << 16)) >
                        (*(_DWORD*)&v109_.v110[4] |
                         (*(_DWORD*)&v109_.v110[8] << 16))) {
            LABEL_19:
              *(_QWORD*)a3 = v108;
              v20 = HIDWORD(v109_.v109);
              *(_DWORD*)(a3 + 8) = v107;
              *(_DWORD*)(a3 + 12) = v5;
              *(_DWORD*)(a3 + 16) = v84;
              *(_DWORD*)(a3 + 20) = v20;
              *(_QWORD*)(a3 + 24) = *(_QWORD*)v109_.v110;
              *(_QWORD*)(a3 + 31) = *(_QWORD*)&v109_.v110[7];
              GameHr_1226120((__int64)v111_.v111, a3 + 40);
              v21 = v107;
            }
          }
          else if ((v86 & 1) != 0 || v109_.v110[12] == 0) {
            goto LABEL_19;
          }
        }
      }
    LABEL_20:
      v19 = (unsigned int)(v21 + 1);
      if (v21 != v6) {
        continue;
      }
      break;
    }
    v73 = v5++ == v89;
    if (!v73) {
      continue;
    }
    break;
  }
LABEL_6:
  v8 = v111_.v114;
  {
    v9 = *(_DWORD*)(a3 + 8);
    __asm__ volatile("" ::"r"(v9));
  }
  if (v111_.v114 != nullptr) {
    v10 = fw_memory_g_heap_manager_ptr;
    do {
      v11 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
        v12 = 128;
      }
      else {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12, (__int64)v8);
      v8 = v11;
    } while (v11 != nullptr);
  }
  v13 = v111_.v112;
  v111_.v112 = 0;
  if (v13 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v13);
  }
  AISupportSkillScope_11fef70(v117_.v117);
  return v9 >= 0;
}

__int64 game_128df90(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  int v26;

  GameHr_6c3050(a1 + 16);
  GameHr_6c3050(a1 + 2240);
  *(_QWORD*)(a1 + 4464) = 0;
  result = GameRoutine_6c3980(a1 + 16, *a2);
  {
    v5 = *(_QWORD*)(*a2 + 440);
    __asm__ volatile("" ::"r"(v5));
  }
  if (v5 != 0) {
    {
      v6 = *(unsigned __int8*)(v5 + 16);
      __asm__ volatile("" ::"r"(v6));
    }
    if ((*(__int16*)(a1 + 506) & 0x80000000) == 0) {
      goto LABEL_7;
    }
  }
  else {
    v6 = 9;
    if ((*(__int16*)(a1 + 506) & 0x80000000) == 0) {
      goto LABEL_7;
    }
  }
  if (v6 >= 0xA) {
    v7 = 0;
  }
  else {
    v7 = *(_QWORD*)(GameData_21ca310 + 56) + 24LL * v6 + 556000;
    __asm__ volatile("" ::"r"(v7));
  }
  *(_QWORD*)(a1 + 456) = v7;
LABEL_7:
  {
    v8 = a2[4];
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 == 0) {
    goto LABEL_41;
  }
  if (*(_BYTE*)(v8 + 276) != 0 &&
      ((v9 = *(unsigned int*)((char*)((_UNKNOWN*)0x15CLL) +
                              game_g_shared_system_skills_ptr + 4),
        v10 = *(_QWORD*)(a1 + 1760),
        ((v9 >> 5) & 0x7F) + 1 > (*(_QWORD*)(a1 + 1768) - v10) >> 2) ||
       ((*(_DWORD*)(v10 + 4 * ((v9 >> 5) & 0x7F)) >> v9) & 1) == 0)) {
    {
      v12 = *(_QWORD*)(a1 + 456);
      __asm__ volatile("" ::"r"(v12));
    }
    if (v12 != 0) {
      v13 = *(_BYTE*)(v12 + 16);
      __asm__ volatile("" ::"r"(v13));
    }
    else {
      v13 = 9;
    }
    if (((1 << v13) & 6) != 0) {
      v11 = 0;
    }
    else {
      v11 = *(char*)(v8 + 276);
      __asm__ volatile("" ::"r"(v11));
    }
    if (*(_BYTE*)(v8 + 275) == 0) {
    LABEL_28:
      v18 = 0;
      if (v11 == 0) {
        goto LABEL_30;
      }
      goto LABEL_29;
    }
  }
  else {
    v11 = 0;
    if (*(_BYTE*)(v8 + 275) == 0) {
      goto LABEL_28;
    }
  }
  {
    v14 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) +
                           game_g_shared_system_skills_ptr);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *(_QWORD*)(a1 + 1760);
    __asm__ volatile("" ::"r"(v15));
  }
  if (((v14 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(a1 + 1768) - v15) >> 2 &&
      ((*(_DWORD*)(v15 + 4 * ((v14 >> 5) & 0x7F)) >> v14) & 1) != 0) {
    goto LABEL_28;
  }
  {
    v16 = *(_QWORD*)(a1 + 456);
    __asm__ volatile("" ::"r"(v16));
  }
  {
    v17 = v16 != 0 ? *(_BYTE*)(v16 + 16) : 9;
    __asm__ volatile("" ::"r"(v17));
  }
  if (((1 << v17) & 6) != 0) {
    goto LABEL_28;
  }
  v26 = game_Unit_GetParam(a1 + 16);
  if (v26 < 1) {
    goto LABEL_28;
  }
  {
    v18 = (v26 * (unsigned int)*(unsigned __int8*)(v8 + 275) + 99) / 0x64;
    __asm__ volatile("" ::"r"(v18));
  }
  if (v11 != 0) {
  LABEL_29:
    *(_DWORD*)(a1 + 432) |= 0x8000u;
    game_Unit_SetPollution(a1 + 16, v11 + *(unsigned __int8*)(a1 + 515));
  }
LABEL_30:
  {
    v19 = *(__int16*)(a1 + 508) - v18;
    __asm__ volatile("" ::"r"(v19));
  }
  v20 = game_Unit_GetParam(a1 + 16);
  if (*(_WORD*)(a1 + 510) != 0 && v19 != *(__int16*)(a1 + 510)) {
    *(_WORD*)(a1 + 510) = 0;
  }
  if (v20 >= v19) {
    v21 = v19;
  }
  else {
    v21 = v20;
  }
  if (v19 < 1) {
    v21 = 1;
  }
  if (v21 != *(__int16*)(a1 + 508)) {
    *(_WORD*)(a1 + 508) = v21;
  }
  result = Unit_6cb490(a1 + 16);
LABEL_41:
  {
    v22 = a2[5];
    __asm__ volatile("" ::"r"(v22));
  }
  if (v22 == 0) {
    *(_QWORD*)(a1 + 4464) = a2[6];
    return result;
  }
  result = GameRoutine_6c3980(a1 + 2240, v22);
  {
    v23 = *(_QWORD*)(a2[5] + 440);
    __asm__ volatile("" ::"r"(v23));
  }
  if (v23 != 0) {
    {
      v24 = *(unsigned __int8*)(v23 + 16);
      __asm__ volatile("" ::"r"(v24));
    }
    if ((*(__int16*)(a1 + 2730) & 0x80000000) == 0) {
      return result;
    }
  }
  else {
    v24 = 9;
    if ((*(__int16*)(a1 + 2730) & 0x80000000) == 0) {
      return result;
    }
  }
  if (v24 >= 0xA) {
    v25 = 0;
  }
  else {
    v25 = *(_QWORD*)(GameData_21ca310 + 56) + 24LL * v24 + 556000;
    __asm__ volatile("" ::"r"(v25));
  }
  *(_QWORD*)(a1 + 2680) = v25;
  return result;
}

__int64 game_165eb40(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  char v3;
  __int64* v4;
  __int64* v5;
  char v6;
  __int64 v7;
  __int64* v8;
  float v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int32x4_t* v21;
  float v22;
  _QWORD* v23;
  __int64 v24;
  __int128 v25;
  __int64 v26;
  __int64* v27;
  unsigned int v28;
  __int64 v29;
  __int128 v30;
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;
  struct {
    __int64* v33;
    __int64 v34;
    const char* v35;
    int v36;
    char gap60_[4];
    __int128 v37;
    __int128 v38;
    __int64 v39;
    __int64 v40;
  } v33_;

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = result;
  if (*(_BYTE*)(result + 33) == 1) {
    result = LayoutAccessor_15635a0(*(__int64**)result, (__int64)"CostIn", 0),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) != 0) {
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          *(__int64**)v2, (__int64)"CostIn", 0),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((result & 1) != 0) {
        result =
            GameHr_1562680(*(_QWORD*)v2, "CostWait", 0x1.0000000000000p+0f),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_BYTE*)(v2 + 33) = 0;
      }
    }
  }
  if (*(_BYTE*)(v2 + 36) == 1) {
    result = LayoutAccessor_15635a0(*(__int64**)v2, (__int64)"CostOut", 1),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) != 0) {
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          *(__int64**)v2, (__int64)"CostOut", 1),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((result & 1) != 0) {
        *(_BYTE*)(v2 + 36) = 0;
      }
    }
    goto LABEL_21;
  }
  if (*(_BYTE*)(v2 + 32) != 1) {
    goto LABEL_21;
  }
  v3 = LayoutAccessor_15635a0(*(__int64**)v2, (__int64)"Out", 1),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(__int64**)v2;
  if ((v3 & 1) != 0) {
    result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
        v4, (__int64)"Out", 1),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) != 0) {
      *(_BYTE*)(v2 + 32) = 0;
    }
    goto LABEL_21;
  }
  GameHr_1562680((__int64)v4, "Out", 0x1.0000000000000p+0f),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = *(__int64**)v2;
  result = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
  if (result == 0 || (result = std___1___shared_weak_count_lock(result)) == 0) {
    if (((*(_UNKNOWN*)0x940LL) & 1) != 0) {
      goto LABEL_21;
    }
  LABEL_20:
    v8 = *(__int64**)v2;
    v9 = LayoutAccessor_15638b0(*(__int64**)v2, "Out", 0),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = LayoutAccessor_15636c0((__int64)v8, (__int64)"Out", 0, v9),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_21;
  }
  v6 = *(_BYTE*)(*v5 + 2368);
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v7 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak(v7),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v6 & 1) == 0) {
    goto LABEL_20;
  }
LABEL_21:
  if (*(_BYTE*)(v2 + 34) != 1) {
    goto LABEL_39;
  }
  LayoutAccessor_1560070((void*)(&v33_.v33), *(__int64**)v2, "L_SpotDispatch"),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v33_.v34;
  if (v33_.v34 == 0) {
    goto LABEL_39;
  }
  v10 = std___1___shared_weak_count_lock(v33_.v34),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = v33_.v33;
  result = v33_.v34;
  if (v33_.v34 != 0) {
    result = std___1___shared_weak_count___release_weak(v33_.v34),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v10 == 0 || v11 == nullptr) {
    if (v10 == 0) {
      goto LABEL_39;
    }
    goto LABEL_37;
  }
  result = LayoutAccessor_155ea30(v11),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((result & 1) != 0) {
    result = LayoutAccessor_1563280(v11, (__int64)"In", 1),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) == 0) {
      LayoutAccessor_1562cf0((__int64)v11, "Wait"),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v12 = *(__int64**)v2;
      *(_BYTE*)(v2 + 34) = 0;
      v30 = (__typeof__(v30)){0};
      if (v12[2] != 0) {
        v13 = v12[1];
        if (v13 != 0) {
          v14 = std___1___shared_weak_count_lock(v13),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v14 == 0) {
            goto LABEL_47;
          }
          v15 = *v12;
          if (*v12 != 0) {
            v1 = *(unsigned __int8*)(v15 + 24);
            v16 = v15 + 152;
            if (v1 == 0) {
              v16 = 0;
            }
            v17 = v16 != v12[2];
          }
          else {
            v17 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v18 = v14;
            (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v18),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if (!v17) {
            if ((v1 & 1) == 0) {
              goto LABEL_54;
            }
          }
          else {
          LABEL_47:
            v19 = v12[1];
            if (v19 == 0 || *(_QWORD*)(v19 + 8) == -1) {
              goto LABEL_54;
            }
          }
          v20 = v12[2];
          if (v20 != 0) {
            v21 = (int32x4_t*)GameRoutine_155f760((__int64)v12, v20,
                                                  "L_SpotDispatch"),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v21 != nullptr) {
              v30 = LANES128_OF(vuzp2q_s32(vuzp2q_s32(v21[7], v21[8]), v21[7]))
                        .n128_u64[0];
            }
          }
        }
      }
    LABEL_54:
      v22 = ui_LayoutAccessor_GetScale(*(__int64**)v2),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v33_.v33 = nullptr;
      v33_.v34 = 0;
      v23 = (_QWORD*)*eft_g_effectSystem_ptr[0];
      v24 = LODWORD(v22);
      *(_QWORD*)&v25 = LODWORD(v22) | ((unsigned __int64)LODWORD(v22) << 32);
      v33_.v36 = 9;
      *((_QWORD*)&v25 + 1) = v24;
      v33_.v37 = v30;
      v33_.v38 = v25;
      v26 = *((_QWORD*)GameData_212c540 + 1);
      v33_.v39 = *(_QWORD*)GameData_212c540;
      v33_.v40 = v26;
      v33_.v35 = "Gmap_Spot_Soldier_Area_Start";
      v27 = ({
        unsigned __int128 r_ = Manager_bc6460_pair(v23, (__int64)&v33_.v33, 1);
        v28 = COERCE_AS(__typeof__(v28), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      result = GameHr_14a10d0(&v33_.v33, (__int64)v27, v28,
                              (__int64)&GameData_1a9f09e),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v29 = v33_.v34;
      if (v33_.v34 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak(v29),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
LABEL_37:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak(v10),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_39:
  if (*(_BYTE*)(v2 + 37) == 1) {
    LayoutAccessor_1560070((void*)(&v31_.v31), *(__int64**)v2, "L_DagsionHp"),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    game_1650510((__int64)&v31_.v31),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = v31_.v32;
    if (v31_.v32 != 0) {
      return std___1___shared_weak_count___release_weak(v31_.v32);
    }
  }
  return result;
}

__int64 game_16966e0(const char* a1)
{
  _BYTE* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v14;
    char v15;
    _BYTE v16[7];
    char gap16_[8];
    _BYTE* v17;
  } v14_;

  game_ffd4e0((void*)((__int64)&v14_.v14), a1);
  if ((v14_.v15 & 1) != 0) {
    v1 = v14_.v17;
  }
  else {
    v1 = v14_.v16;
  }
  v2 = game_HashString((__int64)v1);
  if (v2 == 0) {
    goto LABEL_28;
  }
  v3 = *(_QWORD*)(GameData_21ca080 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21ca080 + 112) == 0) {
    goto LABEL_28;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21ca080 + 88) + 8 * v6);
  if (v7 != nullptr && (v8 = (_QWORD*)*v7) != nullptr) {
    if ((v3 & v5) == 0) {
      while (1) {
        v11 = v8[1];
        if (v11 == v2) {
          if (v8[2] == v2) {
            goto LABEL_37;
          }
        }
        else if ((v11 & v5) != v6) {
          goto LABEL_28;
        }
        v8 = (_QWORD*)*v8;
        v10 = 0;
        if (v8 == nullptr) {
          goto LABEL_31;
        }
      }
    }
    do {
      v9 = v8[1];
      if (v9 == v2) {
        if (v8[2] == v2) {
        LABEL_37:
          v10 = v8[3];
          if ((v14_.v15 & 1) != 0) {
            goto LABEL_32;
          }
          return v10;
        }
      }
      else {
        if (v9 >= v3) {
          v9 %= v3;
        }
        if (v9 != v6) {
          goto LABEL_28;
        }
      }
      v8 = (_QWORD*)*v8;
    } while (v8 != nullptr);
    v10 = 0;
  LABEL_31:
    if ((v14_.v15 & 1) == 0) {
      return v10;
    }
  }
  else {
  LABEL_28:
    v10 = 0;
    if ((v14_.v15 & 1) == 0) {
      return v10;
    }
  }
LABEL_32:
  if (v14_.v17 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v14_.v17);
  }
  return v10;
}

unsigned __int64 game_183a3e0(unsigned __int64 result, int* a2, __int64 a3,
                              char a4)
{
  int* v7;
  __int64* v8;
  int* v9;
  __int64 v10;
  int* v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  unsigned int v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  unsigned int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  int* v61;
  int v62;
  int* v63;
  int* v64;
  int v65;
  int v66;
  int v67;
  int* v68;
  int* v69;
  __int64 v70;
  unsigned int v71;
  int v72;
  int v73;
  int* v74;
  bool v75;
  bool v76;
  int v77;
  unsigned __int64 v78;
  int* v79;
  int v80;
  int v81;
  int v82;
  __int64 v83;
  unsigned int v84;
  int v85;
  int v86;
  int* v87;
  int v88;
  int v89;
  __int64 v90;
  int v91;
  int v92;
  __int64 v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  unsigned int v102;
  int v103;
  unsigned int v104;
  int* v105;
  bool v107;
  __int64 v108;
  __int64 v109;
  int* v110;
  int* v111;
  int v112;
  int v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned int v117;
  unsigned int v118;
  signed __int64 v119;
  signed __int64 v120;
  signed __int64 v121;
  __int64 v122;
  __int64 v123;
  int* v124;
  int v125;
  __int64 v126;
  int* v127;
  int v128;
  __int64 v129;
  int* v130;
  __int64 v131;
  bool v132;
  int v133;
  __int64 v134;
  int* v135;
  int* v136;
  int v137;
  int v138;
  __int64 v139;
  unsigned int v140;
  int v141;
  int* v142;
  int* v143;
  __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  int v148;
  int* v149;
  int v150;
  int* v151;
  int v152;
  int v153;
  __int64 v154;
  int v155;
  int v156;
  int v157;
  int v158;

  v7 = (int*)result;
  v8 = GameData_212c880[0];
LABEL_2:
  v9 = v7;
  while (1) {
    v7 = v9;
    v10 = a2 - v9;
    if (v10 <= 2) {
      if ((unsigned __int64)v10 < 2) {
        return result;
      }
      if (v10 == 2) {
        v96 = *(a2 - 1);
        v97 = *v9;
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                           8LL * (v96 & 0xFFF)) +
                                112LL) >
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8 * (*v9 & 0xFFFLL)) +
                                              112LL)) {
          *v9 = v96;
          *(a2 - 1) = v97;
        }
        return result;
      }
      goto LABEL_10;
    }
    if (v10 == 3) {
      break;
    }
    if (v10 == 4) {
      return (unsigned __int64)GameRoutine_183b190(v9, v9 + 1, v9 + 2, a2 - 1);
    }
    if (v10 == 5) {
      result =
          (unsigned __int64)GameRoutine_183b190(v9, v9 + 1, v9 + 2, v9 + 3);
      v88 = *(a2 - 1);
      v89 = v9[3];
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                         8LL * (v88 & 0xFFF)) +
                              112LL) >
          (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                       8LL * (v89 & 0xFFF)) +
                                            112LL)) {
        v9[3] = v88;
        *(a2 - 1) = v89;
        v90 = *v8;
        v92 = v9[2];
        v91 = v9[3];
        v93 = v91 & 0xFFF;
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v93) +
                                112LL) >
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * (v92 & 0xFFF)) +
                                              112LL)) {
          v9[2] = v91;
          v9[3] = v92;
          v94 = v9[1];
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v90 + 64) + 8 * v93) +
                                  112LL) >
              (unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v90 + 64) +
                                               8LL * (v94 & 0xFFF)) +
                                    112LL)) {
            v9[1] = v91;
            v9[2] = v94;
            v95 = *v9;
            if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v93) +
                                    112LL) >
                (unsigned int)*(
                    unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                 8 * (*v9 & 0xFFFLL)) +
                                      112LL)) {
              *v9 = v91;
              v9[1] = v95;
            }
          }
        }
      }
      return result;
    }
  LABEL_10:
    if (v10 <= 23) {
      v105 = v9 + 1;
      v107 = v9 == a2 || v105 == a2;
      if ((a4 & 1) != 0) {
        if (!v107) {
          v108 = *v8;
          v109 = 4;
          v110 = v9;
          do {
            v113 = *v110;
            v112 = v110[1];
            v110 = v105;
            if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v108 + 64) +
                                               8LL * (v112 & 0xFFF)) +
                                    112LL) >
                (unsigned int)*(
                    unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v108 + 64) +
                                                 8LL * (v113 & 0xFFF)) +
                                      112LL)) {
              v114 = v109;
              do {
                v115 = v114 - 4;
                *(int*)((char*)v9 + v114) = v113;
                if (v114 == 4) {
                  v111 = v9;
                  goto LABEL_126;
                }
                v113 = *(int*)((char*)v9 + v114 - 8);
                v116 = *(_QWORD*)(*v8 + 64);
                v117 = *(
                    unsigned __int8*)(*(_QWORD*)(v116 + 8LL * (v112 & 0xFFF)) +
                                      112LL);
                v118 = *(
                    unsigned __int8*)(*(_QWORD*)(v116 + 8LL * (v113 & 0xFFF)) +
                                      112LL);
                v114 = v115;
              } while (v117 > v118);
              v111 = (int*)((char*)v9 + v115);
            LABEL_126:
              *v111 = v112;
              v108 = *v8;
            }
            v105 = v110 + 1;
            v109 += 4;
          } while (v110 + 1 != a2);
        }
      }
      else if (!v107) {
        v154 = *v8;
        do {
          v156 = *v7;
          v155 = v7[1];
          v7 = v105;
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v154 + 64) +
                                             8LL * (v155 & 0xFFF)) +
                                  112LL) >
              (unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v154 + 64) +
                                               8LL * (v156 & 0xFFF)) +
                                    112LL)) {
            v157 = v156;
            do {
              *v105 = v157;
              v157 = *(v105 - 2);
              --v105;
            } while (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                    8LL * (v155 & 0xFFF)) +
                                         112LL) >
                     (unsigned int)*(
                         unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                      8LL * (v157 & 0xFFF)) +
                                           112LL));
            *v105 = v155;
            v154 = *v8;
          }
          v105 = v7 + 1;
        } while (v7 + 1 != a2);
      }
      return result;
    }
    if (a3 == 0) {
      if (v9 != a2) {
        v119 = (unsigned __int64)(v10 - 2) >> 1;
        v120 = v119;
        do {
          v121 = v120;
          if (v119 >= v120) {
            v122 = (2 * (v120 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v123 = 2 * v120 + 2;
            v124 = &v9[v122];
            v125 = *v124;
            if (v123 >= v10) {
              v126 = *(_QWORD*)(*v8 + 64);
            }
            else {
              v126 = *(_QWORD*)(*v8 + 64);
              result = *(
                  unsigned __int8*)(*(_QWORD*)(v126 + 8 * (v124[1] & 0xFFFLL)) +
                                    112LL);
              if (*(unsigned __int8*)(*(_QWORD*)(v126 + 8LL * (v125 & 0xFFF)) +
                                      112LL) > (unsigned int)result) {
                v125 = v124[1];
                ++v124;
                v122 = 2 * v121 + 2;
              }
            }
            v127 = &v9[v121];
            v128 = *v127;
            if (*(unsigned __int8*)(*(_QWORD*)(v126 + 8LL * (v125 & 0xFFF)) +
                                    112LL) <=
                (unsigned int)*(
                    unsigned __int8*)(*(_QWORD*)(v126 + 8 * (*v127 & 0xFFFLL)) +
                                      112LL)) {
              do {
                v130 = v124;
                *v127 = v125;
                if (v119 < v122) {
                  break;
                }
                v131 = (2 * v122) | 1;
                v122 = 2 * v122 + 2;
                v124 = &v9[v131];
                v125 = *v124;
                if (v122 < v10) {
                  v129 = *(_QWORD*)(*v8 + 64);
                  if (*(unsigned __int8*)(*(_QWORD*)(v129 +
                                                     8LL * (v125 & 0xFFF)) +
                                          112LL) <=
                      (unsigned int)*(
                          unsigned __int8*)(*(_QWORD*)(v129 + 8 * (v124[1] &
                                                                   0xFFFLL)) +
                                            112LL)) {
                    v122 = v131;
                  }
                  else {
                    v125 = v124[1];
                    ++v124;
                  }
                }
                else {
                  v129 = *(_QWORD*)(*v8 + 64);
                  v122 = v131;
                }
                result = *(
                    unsigned __int8*)(*(_QWORD*)(v129 + 8LL * (v125 & 0xFFF)) +
                                      112LL);
                v127 = v130;
              } while (
                  (unsigned int)result <=
                  *(unsigned __int8*)(*(_QWORD*)(v129 + 8LL * (v128 & 0xFFF)) +
                                      112LL));
              *v130 = v128;
            }
          }
          v120 = v121 - 1;
        } while (v121 != 0);
        do {
          v133 = *v9;
          v134 = 0;
          v135 = v9;
          do {
            v143 = &v135[v134];
            v142 = v143 + 1;
            v141 = v143[1];
            v144 = (2 * v134) | 1;
            v134 = 2 * v134 + 2;
            if (v134 < v10) {
              v138 = v143[2];
              v136 = v143 + 2;
              v137 = v138;
              v139 = *(_QWORD*)(*v8 + 64);
              v140 =
                  *(unsigned __int8*)(*(_QWORD*)(v139 + 8LL * (v141 & 0xFFF)) +
                                      112LL);
              result =
                  *(unsigned __int8*)(*(_QWORD*)(v139 + 8LL * (v138 & 0xFFF)) +
                                      112LL);
              if (v140 <= (unsigned int)result) {
                v134 = v144;
              }
              else {
                v141 = v137;
                v142 = v136;
              }
            }
            else {
              v134 = v144;
            }
            *v135 = v141;
            v135 = v142;
          } while (v134 <= (__int64)((unsigned __int64)(v10 - 2) >> 1));
          if (v142 == --a2) {
            *v142 = v133;
          }
          else {
            *v142 = *a2;
            *a2 = v133;
            v145 = ((char*)v142 - (char*)v9 + 4) >> 2;
            v132 = v145 < 2;
            v146 = v145 - 2;
            if (!v132) {
              v147 = v146 >> 1;
              v148 = *v142;
              v149 = &v9[v147];
              v150 = *v149;
              if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                 8 * (*v149 & 0xFFFLL)) +
                                      112LL) >
                  (unsigned int)*(
                      unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                   8 * (*v142 & 0xFFFLL)) +
                                        112LL)) {
                do {
                  v151 = v149;
                  *v142 = v150;
                  if (v147 == 0) {
                    break;
                  }
                  v147 = (v147 - 1) >> 1;
                  v149 = &v9[v147];
                  v150 = *v149;
                  v142 = v151;
                } while (
                    *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                   8 * (*v149 & 0xFFFLL)) +
                                        112LL) >
                    (unsigned int)*(
                        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                     8LL * (v148 & 0xFFF)) +
                                          112LL));
                *v151 = v148;
              }
            }
          }
          v132 = v10-- <= 2;
        } while (!v132);
      }
      return result;
    }
    v11 = &v9[(unsigned __int64)v10 >> 1];
    v12 = *(_QWORD*)(*v8 + 64);
    v13 = *(a2 - 1);
    v14 = *(unsigned __int8*)(*(_QWORD*)(v12 + 8LL * (v13 & 0xFFF)) + 112LL);
    if ((unsigned __int64)v10 >= 0x81) {
      v15 = *v11;
      v16 = *v9;
      v17 = *(unsigned __int8*)(*(_QWORD*)(v12 + 8 * (*v11 & 0xFFFLL)) + 112LL);
      if (v17 <=
          *(unsigned __int8*)(*(_QWORD*)(v12 + 8 * (*v9 & 0xFFFLL)) + 112LL)) {
        if (v14 > v17) {
          *v11 = v13;
          *(a2 - 1) = v15;
          v21 = *v9;
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                             8 * (*v11 & 0xFFFLL)) +
                                  112LL) >
              (unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                               8 * (*v9 & 0xFFFLL)) +
                                    112LL)) {
            *v9 = *v11;
            *v11 = v21;
          }
        }
      }
      else {
        if (v14 > v17) {
          *v9 = v13;
          goto LABEL_27;
        }
        *v9 = v15;
        *v11 = v16;
        v23 = *(a2 - 1);
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                           8LL * (v23 & 0xFFF)) +
                                112LL) >
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * (v16 & 0xFFF)) +
                                              112LL)) {
          *v11 = v23;
        LABEL_27:
          *(a2 - 1) = v16;
        }
      }
      v24 = *(v11 - 1);
      v25 = v9[1];
      v26 = *(_QWORD*)(*v8 + 64);
      v27 = *(unsigned __int8*)(*(_QWORD*)(v26 + 8LL * (v24 & 0xFFF)) + 112LL);
      v28 = *(unsigned __int8*)(*(_QWORD*)(v26 + 8LL * (v25 & 0xFFF)) + 112LL);
      v29 = *(a2 - 2);
      v30 = *(unsigned __int8*)(*(_QWORD*)(v26 + 8LL * (v29 & 0xFFF)) + 112LL);
      if (v27 <= v28) {
        if (v30 > v27) {
          *(v11 - 1) = v29;
          *(a2 - 2) = v24;
          v31 = *(v11 - 1);
          v32 = v9[1];
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                             8LL * (v31 & 0xFFF)) +
                                  112LL) >
              (unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                               8LL * (v32 & 0xFFF)) +
                                    112LL)) {
            v9[1] = v31;
            *(v11 - 1) = v32;
          }
        }
      }
      else {
        if (v30 > v27) {
          v9[1] = v29;
          goto LABEL_39;
        }
        v9[1] = v24;
        *(v11 - 1) = v25;
        v34 = *(a2 - 2);
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                           8LL * (v34 & 0xFFF)) +
                                112LL) >
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * (v25 & 0xFFF)) +
                                              112LL)) {
          *(v11 - 1) = v34;
        LABEL_39:
          *(a2 - 2) = v25;
        }
      }
      v35 = v11[1];
      v36 = v9[2];
      v37 = *(_QWORD*)(*v8 + 64);
      v38 = *(unsigned __int8*)(*(_QWORD*)(v37 + 8LL * (v35 & 0xFFF)) + 112LL);
      v39 = *(unsigned __int8*)(*(_QWORD*)(v37 + 8LL * (v36 & 0xFFF)) + 112LL);
      v40 = *(a2 - 3);
      v41 = *(unsigned __int8*)(*(_QWORD*)(v37 + 8LL * (v40 & 0xFFF)) + 112LL);
      if (v38 <= v39) {
        if (v41 > v38) {
          v11[1] = v40;
          *(a2 - 3) = v35;
          v42 = v11[1];
          v43 = v9[2];
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                             8LL * (v42 & 0xFFF)) +
                                  112LL) >
              (unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                               8LL * (v43 & 0xFFF)) +
                                    112LL)) {
            v9[2] = v42;
            v11[1] = v43;
          }
        }
      }
      else {
        if (v41 > v38) {
          v9[2] = v40;
          goto LABEL_48;
        }
        v9[2] = v35;
        v11[1] = v36;
        v44 = *(a2 - 3);
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                           8LL * (v44 & 0xFFF)) +
                                112LL) >
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8LL * (v36 & 0xFFF)) +
                                              112LL)) {
          v11[1] = v44;
        LABEL_48:
          *(a2 - 3) = v36;
        }
      }
      v45 = *(v11 - 1);
      v46 = *v11;
      v47 = *(_QWORD*)(*v8 + 64);
      v48 = v11[1];
      v49 = *(unsigned __int8*)(*(_QWORD*)(v47 + 8 * (*v11 & 0xFFFLL)) + 112LL);
      v50 = v45 & 0xFFF;
      v51 = *(unsigned __int8*)(*(_QWORD*)(v47 + 8 * v50) + 112LL);
      v52 = v48 & 0xFFF;
      v53 = *(unsigned __int8*)(*(_QWORD*)(v47 + 8 * v52) + 112LL);
      if (v49 <= v51) {
        if (v53 <= v49) {
        LABEL_55:
          v45 = v46;
        }
        else {
          *v11 = v48;
          v11[1] = v46;
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v52) +
                                  112LL) <=
              (unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v50) +
                                    112LL)) {
            goto LABEL_58;
          }
          *(v11 - 1) = v48;
          *v11 = v45;
        }
      }
      else {
        if (v53 > v49) {
          *(v11 - 1) = v48;
          v11[1] = v45;
          goto LABEL_55;
        }
        *(v11 - 1) = v46;
        *v11 = v45;
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v52) +
                                112LL) >
            (unsigned int)*(
                unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v50) +
                                  112LL)) {
          *v11 = v48;
          v11[1] = v45;
        LABEL_58:
          v45 = v48;
        }
      }
      v54 = *v9;
      *v9 = v45;
      *v11 = v54;
      goto LABEL_60;
    }
    v18 = *v9;
    v19 = *v11;
    v20 = *(unsigned __int8*)(*(_QWORD*)(v12 + 8 * (*v9 & 0xFFFLL)) + 112LL);
    if (v20 <=
        *(unsigned __int8*)(*(_QWORD*)(v12 + 8 * (*v11 & 0xFFFLL)) + 112LL)) {
      if (v14 > v20) {
        *v9 = v13;
        *(a2 - 1) = v18;
        v22 = *v11;
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                           8 * (*v9 & 0xFFFLL)) +
                                112LL) >
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                         8 * (*v11 & 0xFFFLL)) +
                                              112LL)) {
          *v11 = *v9;
          *v9 = v22;
        }
      }
      goto LABEL_60;
    }
    if (v14 > v20) {
      *v11 = v13;
    LABEL_36:
      *(a2 - 1) = v19;
      goto LABEL_60;
    }
    *v11 = v18;
    *v9 = v19;
    v33 = *(a2 - 1);
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                       8LL * (v33 & 0xFFF)) +
                            112LL) >
        (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                     8LL * (v19 & 0xFFF)) +
                                          112LL)) {
      *v9 = v33;
      goto LABEL_36;
    }
  LABEL_60:
    v55 = *v9;
    v56 = *v8;
    --a3;
    if ((a4 & 1) != 0) {
      v57 = *(_QWORD*)(v56 + 64);
      v58 = v55 & 0xFFF;
      v59 = *(unsigned __int8*)(*(_QWORD*)(v57 + 8 * v58) + 112LL);
    LABEL_63:
      v60 = 0;
      do {
        v61 = &v9[v60++];
        v62 = v61[1];
      } while (*(unsigned __int8*)(*(_QWORD*)(v57 + 8LL * (v62 & 0xFFF)) +
                                   112LL) > v59);
      v63 = &v9[v60];
      v64 = a2;
      if (v60 == 1) {
        v64 = a2;
        do {
          if (v63 >= v64) {
            break;
          }
          v66 = *--v64;
        } while (*(unsigned __int8*)(*(_QWORD*)(v57 + 8LL * (v66 & 0xFFF)) +
                                     112LL) <= v59);
      }
      else {
        do {
          v65 = *--v64;
        } while (*(unsigned __int8*)(*(_QWORD*)(v57 + 8LL * (v65 & 0xFFF)) +
                                     112LL) <= v59);
      }
      if (v63 >= v64) {
        v74 = v63 - 1;
        if (v9 == v63 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v9 = *v74;
        goto LABEL_81;
      }
      v67 = *v64;
      v68 = &v9[v60];
      v69 = v64;
      do {
        *v68 = v67;
        *v69 = v62;
        v70 = *(_QWORD*)(*v8 + 64);
        v71 = *(unsigned __int8*)(*(_QWORD*)(v70 + 8 * v58) + 112LL);
        do {
          v72 = v68[1];
          ++v68;
          v62 = v72;
        } while (*(unsigned __int8*)(*(_QWORD*)(v70 + 8LL * (v72 & 0xFFF)) +
                                     112LL) > v71);
        do {
          v73 = *--v69;
          v67 = v73;
        } while (*(unsigned __int8*)(*(_QWORD*)(v70 + 8LL * (v73 & 0xFFF)) +
                                     112LL) <= v71);
      } while (v68 < v69);
      v74 = v68 - 1;
      if (v9 != v68 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v74 = v55;
      if (v63 < v64) {
        goto LABEL_84;
      }
      v75 = game_183b340(v9, v74);
      v9 = v74 + 1;
      v76 = v75;
      result = ((__int64 (*)(_DWORD*, int*))game_183b340)(v74 + 1, a2);
      if ((result & 1) != 0) {
        a2 = v74;
        if (!v76) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v76) {
      LABEL_84:
        result = game_183a3e0((unsigned __int64)v7, v74, a3, a4 & 1);
        a4 = 0;
        v9 = v74 + 1;
      }
    }
    else {
      v57 = *(_QWORD*)(v56 + 64);
      v58 = v55 & 0xFFF;
      v59 = *(unsigned __int8*)(*(_QWORD*)(v57 + 8 * v58) + 112LL);
      if (*(unsigned __int8*)(*(_QWORD*)(v57 + 8LL * (*(v9 - 1) & 0xFFF)) +
                              112LL) > v59) {
        goto LABEL_63;
      }
      if (v59 <=
          *(unsigned __int8*)(*(_QWORD*)(v57 + 8LL * (*(a2 - 1) & 0xFFF)) +
                              112LL)) {
        v78 = (unsigned __int64)(v9 + 1);
        do {
          v9 = (int*)v78;
          if (v78 >= (unsigned __int64)a2) {
            break;
          }
          v78 += 4LL;
        } while (
            v59 <=
            *(unsigned __int8*)(*(_QWORD*)(v57 + 8LL * (*v9 & 0xFFF)) + 112LL));
      }
      else {
        do {
          v77 = v9[1];
          ++v9;
        } while (
            v59 <=
            *(unsigned __int8*)(*(_QWORD*)(v57 + 8LL * (v77 & 0xFFF)) + 112LL));
      }
      v79 = a2;
      if (v9 < a2) {
        v79 = a2;
        do {
          v80 = *--v79;
        } while (
            v59 >
            *(unsigned __int8*)(*(_QWORD*)(v57 + 8LL * (v80 & 0xFFF)) + 112LL));
      }
      if (v9 < v79) {
        v81 = *v9;
        v82 = *v79;
        do {
          *v9 = v82;
          *v79 = v81;
          v83 = *(_QWORD*)(*v8 + 64);
          v84 = *(unsigned __int8*)(*(_QWORD*)(v83 + 8 * v58) + 112LL);
          do {
            v85 = v9[1];
            ++v9;
            v81 = v85;
          } while (v84 <=
                   *(unsigned __int8*)(*(_QWORD*)(v83 + 8LL * (v85 & 0xFFF)) +
                                       112LL));
          do {
            v86 = *--v79;
            v82 = v86;
          } while (v84 >
                   *(unsigned __int8*)(*(_QWORD*)(v83 + 8LL * (v86 & 0xFFF)) +
                                       112LL));
        } while (v9 < v79);
      }
      v87 = v9 - 1;
      if (v7 != v9 - 1) {
        *v7 = *v87;
      }
      a4 = 0;
      *v87 = v55;
    }
  }
  v98 = *v9;
  v99 = (unsigned int)v9[1];
  v100 = *(_QWORD*)(*v8 + 64);
  v101 = *(unsigned __int8*)(*(_QWORD*)(v100 + 8 * (v99 & 0xFFF)) + 112LL);
  v102 = *(unsigned __int8*)(*(_QWORD*)(v100 + 8 * (*v9 & 0xFFFLL)) + 112LL);
  v103 = *(a2 - 1);
  v104 = *(unsigned __int8*)(*(_QWORD*)(v100 + 8LL * (v103 & 0xFFF)) + 112LL);
  if (v101 <= v102) {
    if (v104 > v101) {
      v9[1] = v103;
      *(a2 - 1) = v99;
      v153 = *v9;
      v152 = v9[1];
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                         8LL * (v152 & 0xFFF)) +
                              112LL) >
          (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                       8 * (*v9 & 0xFFFLL)) +
                                            112LL)) {
        *v9 = v152;
        v9[1] = v153;
      }
    }
  }
  else {
    if (v104 <= v101) {
      *v9 = v99;
      v9[1] = v98;
      v158 = *(a2 - 1);
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                         8LL * (v158 & 0xFFF)) +
                              112LL) <=
          (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                       8LL * (v98 & 0xFFF)) +
                                            112LL)) {
        return result;
      }
      v9[1] = v158;
    }
    else {
      *v9 = v103;
    }
    *(a2 - 1) = v98;
  }
  return result;
}

__int64 game_19218c0(_QWORD* a1, int* a2, _QWORD* a3, int a4)
{
  __int64 v4;
  _QWORD* v5;
  char v9;
  __int64 v10;
  bool v11;
  bool v12;
  int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* i;

  {
    v4 = a1[6];
    __asm__ volatile("" ::"r"(v4));
  }
  v5 = a1 + 5;
  if ((_QWORD*)v4 != a1 + 5) {
    v9 = 0;
    do {
      while ((v9 & 1) != 0) {
        {
          v4 = *(_QWORD*)(v4 + 8);
          __asm__ volatile("" ::"r"(v4));
        }
        v9 = 1;
        if ((_QWORD*)v4 == v5) {
          return 0;
        }
      }
      {
        v11 = *(_DWORD*)(v4 + 16) == 0;
        __asm__ volatile("" ::"r"(v11));
      }
      {
        v10 = *(_QWORD*)(v4 + 48);
        __asm__ volatile("" ::"r"(v10));
      }
      {
        v4 = *(_QWORD*)(v4 + 8);
        __asm__ volatile("" ::"r"(v4));
      }
      v11 = v11 && v10 == 0;
      v9 = !v11;
    } while ((_QWORD*)v4 != v5);
    if ((v9 & 1) != 0) {
      return 0;
    }
  }
  {
    v12 = *a2 < 1 || a2[1] < 1;
    __asm__ volatile("" ::"r"(v12));
  }
  if (v12 || *a3 == 0) {
    return 0;
  }
  if (a4 <= 1) {
    v15 = 1;
  }
  else {
    v15 = a4;
  }
  if (v15 >= 16) {
    v16 = 16;
  }
  else {
    v16 = (unsigned int)v15;
  }
  {
    v17 = a1[7];
    __asm__ volatile("" ::"r"(v17));
  }
  if (v17 >= v16) {
    if (v17 > v16) {
      v22 = fw_memory_g_heap_manager_ptr;
      do {
        {
          v23 = (_QWORD*)a1[6];
          __asm__ volatile("" ::"r"(v23));
        }
        {
          v24 = (_QWORD*)v23[1];
          __asm__ volatile("" ::"r"(v24));
        }
        *(_QWORD*)(*v23 + 8LL) = v24;
        *v24 = *v23;
        --a1[7];
        SpineCaptureProcessor_1921e00((__int64)(v23 + 2));
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v25, (__int64)v23);
      } while (a1[7] > v16);
    }
  }
  else {
    v18 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v19 = fw_memory_HeapManager_Allocate(*v18, 216, 16, 0);
      *(_QWORD*)(v19 + 16) = 0;
      *(_QWORD*)(v19 + 56) = 0;
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 0;
      *(_QWORD*)(v19 + 80) = 0;
      *(_QWORD*)(v19 + 88) = 0;
      *(_QWORD*)(v19 + 96) = 0;
      *(_QWORD*)(v19 + 104) = 0;
      *(_QWORD*)(v19 + 112) = 0;
      *(_QWORD*)(v19 + 120) = 0;
      *(_QWORD*)(v19 + 128) = 0;
      *(_QWORD*)(v19 + 136) = 0;
      *(_QWORD*)(v19 + 144) = 0;
      *(_QWORD*)(v19 + 24) = 0;
      *(_QWORD*)(v19 + 32) = v19 + 32;
      *(_QWORD*)(v19 + 40) = v19 + 32;
      *(_QWORD*)(v19 + 48) = 0;
      {
        v20 = a1[5];
        __asm__ volatile("" ::"r"(v20));
      }
      *(_DWORD*)(v19 + 20) = -1;
      *(_DWORD*)(v19 + 24) = -1;
      *(_QWORD*)(v19 + 152) = 0;
      *(_QWORD*)(v19 + 160) = 0;
      *(_QWORD*)(v19 + 168) = 0;
      *(_QWORD*)(v19 + 176) = 0;
      *(_QWORD*)(v19 + 184) = 0;
      *(_QWORD*)(v19 + 192) = 0;
      *(_QWORD*)(v19 + 200) = 0;
      *(_QWORD*)(v19 + 208) = 0;
      *(_QWORD*)v19 = v20;
      *(_QWORD*)(v19 + 8) = v5;
      *(_QWORD*)(v20 + 8) = v19;
      {
        v21 = a1[7] + 1LL;
        __asm__ volatile("" ::"r"(v21));
      }
      a1[5] = v19;
      a1[7] = v21;
      game_19209f0((_QWORD*)(v19 + 16), a2, a3);
    } while (a1[7] < v16);
  }
  for (i = (_QWORD*)a1[6]; i != v5; i = (_QWORD*)i[1]) {
    game_19209f0(i + 2, a2, a3);
  }
  return 1;
}

#pragma GCC visibility pop
