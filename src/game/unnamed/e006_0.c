#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ab8f13;
extern _QWORD GameData_1b01768[4];
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_2003880[])();
extern __int64 (*GameData_20039b8[])();
extern __int64 (*GameData_2004168[])();
extern __int64 (*GameData_20041e8[])();
extern __int64 (*GameData_2004268[])();
extern __int64 (*GameData_20042e8[])();
extern __int64 (*GameData_20063c0[])();
extern __int64 (*GameData_20077d8[])();
extern __int64 (*GameData_20080c0[])();
extern __int64 (*GameData_2008130[])();
extern __int64 (*GameData_200d8c0[])();
extern _UNKNOWN* GameData_2011310;
extern __int64 (*GameData_2011c80[])();
extern __int64 (*GameData_2011d20[6])();
extern __int64 (*GameData_2011d38[3])();
extern __int64 (*GameData_210fe18[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c738[2];
extern __int64 GameData_212c7b8[10];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c890[3];
extern __int64 GameData_212cf70[7];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212dea8;
extern int* GameData_212deb0;
extern _UNKNOWN* GameData_212deb8;
extern int* GameData_212df08;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern __int64* GameData_212e248[2];
extern __int64 GameData_212e368[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_212ebb0[7];
extern _UNKNOWN** GameData_2130100[3];
extern _UNKNOWN** GameData_2130108[2];
extern __int64 GameData_21323e8[4];
extern char* GameData_2167828;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c9f40;
extern __int64 GameData_21caab0;
extern int GameData_21d92e0;
extern __int64 GameData_21ec550;
extern int GameData_21ec578;
extern __int64 GameData_21ee240;
extern __int64 GameData_21f5328;
extern __int64 GameData_21fa5e0;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 GameData_2235718;
extern int GameData_2235720;
extern int GameData_2235740;
extern __int64 GameData_22365a0;
extern int GameData_22365e8;
extern _UNKNOWN GameData_22365f0;
extern int GameData_2262910;
extern __int64 GameData_2265ec8;
extern __int64 GameData_2265ee0;
extern __int64 GameData_2265ee8;
struct PseudoSret GameRoutine_100a50(_QWORD);
__int64 GameRoutine_102e240(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1041940(_QWORD, _QWORD);
__int64 GameRoutine_1042c40(_QWORD, _QWORD);
unsigned __int64 GameRoutine_10499a0(__int64, __int64);
__int64 GameRoutine_1049e60(_QWORD, _QWORD);
__int64 GameRoutine_106c6d0(void);
__int64 GameRoutine_106eaa0(_QWORD*, __n128);
__int64 GameRoutine_1074940(void);
__int64 GameRoutine_1084a50(_QWORD, _QWORD);
__int64 GameRoutine_109bf60(_QWORD);
__n128 GameRoutine_109d900(unsigned int*);
__int64 GameRoutine_109ecc0(_BYTE*, unsigned __int64, __int64, __int64);
__n128 GameRoutine_10c830(_QWORD, double);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_10d49d0(void);
__int64 GameRoutine_10d4bf0(void);
__int64 GameRoutine_10d6f00(_QWORD);
long double GameRoutine_10d7320(_QWORD);
unsigned __int64 GameRoutine_10f4080(unsigned __int64 result, __int64, _BYTE*,
                                     unsigned int);
struct PseudoSret GameRoutine_10f8f00(_QWORD, _QWORD);
__int64 GameRoutine_1112900(_QWORD);
__int64 GameRoutine_1116460(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_111c720(unsigned __int8*);
__int64 GameRoutine_111eae0(_QWORD);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, long double);
__int64 GameRoutine_11311f0(__int64, __int64, int);
__int64 GameRoutine_1132180(__int64, __int64);
__int64 GameRoutine_1132580(_QWORD, _QWORD);
__int64 GameRoutine_1136ea0(void);
__int64 GameRoutine_1138e00(_QWORD, _QWORD);
__int64 GameRoutine_113dca0(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_11ea40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12b3d60(_QWORD);
__int64 GameRoutine_135980(_QWORD, _QWORD, long double);
__int64 GameRoutine_1374080(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_163b8a0(_QWORD);
__int64 GameRoutine_16e7e00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_191eea0(_QWORD, _QWORD);
__int64 GameRoutine_1946dd0(_QWORD, _QWORD);
__int64 GameRoutine_1949b00(_QWORD);
__int64 GameRoutine_1949c20(_QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__n128 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d00(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a060(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
float GameRoutine_1a0a6a0(_QWORD, float, float);
__int64 GameRoutine_1a0a8a0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_682780(_QWORD);
__int64 GameRoutine_6c8530(_QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_6fb810(_QWORD);
__int64 GameRoutine_710540(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_810a70(_QWORD, _QWORD, long double);
__int64 GameRoutine_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8e1730(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 GameRoutine_9bcfa0(_QWORD, _QWORD);
__int64 GameRoutine_9bd480(_QWORD);
__int64 GameRoutine_a4da40(_QWORD, _QWORD, long double);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4f800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4fa80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a50100(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_a50e90(_QWORD, _QWORD);
__int64 GameRoutine_a51280(_QWORD, _QWORD);
__int64 GameRoutine_a51640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a5e4c0(_QWORD, _QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_bbf020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d3d7a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d3d960(long double);
struct PseudoSret GameRoutine_db1f30(_QWORD);
__int64 GameRoutine_e734e0(_QWORD);
__int64 GameRoutine_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_eaec10(_QWORD, _QWORD);
__int64 GameRoutine_f71cb0(_QWORD, _QWORD);
__int64 GameRoutine_f71d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f71fc0(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_ff24c0(_QWORD);
struct PseudoSret GameRoutine_ff2a00(_QWORD);
__attribute__((swiftcall)) void
Manager_11ea40(PSEUDO_X8, __int64 result, __int64, unsigned int, unsigned int);
__attribute__((swiftcall)) void game_10f8f00(PSEUDO_X8, const char*, char);
__attribute__((swiftcall)) void game_810a70(PSEUDO_X8, __int64 result, _BYTE*,
                                            float);
__attribute__((swiftcall)) void snd_findSlot_100a50(PSEUDO_X8, int*);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 CmdBtlSeqActionSkill_1041940(__int64 result, _WORD*);
__int64 GameRoutine_1112900_alt1(__int64) __asm__("GameRoutine_1112900");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 ProcList_9bd480(__int64);
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__int64 Slot_135980(_QWORD*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_109ecc0(_BYTE*, unsigned __int64, char*, char*);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 std___1___next_prime(unsigned __int64);
__int64 strstr(const char*, const char*);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
char* GameHr_67ed20(_QWORD*);
char* HistoryLogInfo_6fb810(__int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void* game_97b2f0(__int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 GameHr_1041630(__int64 a1, __int64 a2, _WORD* a3);
__int64 GameHr_1084b20(__int64 result, const char* a2);
__int64 GameHr_1085140(__int64 result, const char* a2);
__int64 GameHr_10953f0(__int64 a1);
void GameHr_10f4080(__int64* a1, __int64 a2, const char* a3, char a4);
__attribute__((swiftcall)) void GameHr_113bfb0(PSEUDO_X8 x8_, __int64 a1);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* TaskPassNodes_bbf020(__int64, __int64, __int64);
_QWORD* fw_world_SwapCallables(_QWORD* result, _QWORD*);
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void
    GameRoutine_ff24c0_alt1(PSEUDO_X8, _QWORD) __asm__("GameRoutine_ff24c0");
__attribute__((swiftcall)) void GlobalHashUtil_ff2a00(PSEUDO_X8,
                                                      _QWORD* result);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8, __int64*);
__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8, __int64, const char*,
                                               __int64, char);
__int64* Registration_a4f800(__int64, const char*, int);
__int64 CharacterAppearance_1074940(__int64);
__int64 GameRoutine_eaec10_alt1(__int64*,
                                __int64) __asm__("GameRoutine_eaec10");
__int64 GameRoutine_f71cb0_alt1(__int64, int) __asm__("GameRoutine_f71cb0");
__int64 GameRoutine_f71d40_alt1(__int64, __int64,
                                __int64) __asm__("GameRoutine_f71d40");
__int64 MapPanelDeployAction_1049e60(__int64 result, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_world_JobContext_Drain(unsigned int*);
__int64 fw_world_JobContext_Wait(__int64 result, unsigned int);
__int64 fw_world_JobQueue_Submit(__int64, int);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 game_hub_102e240(__int64, __int128*, __int64*);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_ClearLightEvent(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
bool GameRoutine_191eea0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_191eea0");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_character_AuraModule_vtable[])();
extern __int64 (*game_combat_MagicCatalog_vtable[])();
extern __int64 (*game_map_MapUnitEventBase_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 eft_g_effectSystem;
extern __int64 game_GameModeData_instance_;
extern __int64 msg_MessageManager_instance_;
float fmodf(float, float);
unsigned __int64 MapPanelDeployAction_10499a0(__int64, __int64);
void GameHr_10f4080_alt1(__int64*, __int64, const char*,
                         unsigned int) __asm__("GameHr_10f4080");
void GameHr_111eae0(__int64);
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void MagicCatalog_109bf60(__int64, __int64);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void game_113dca0(__int64, __int64, unsigned __int8*);
__int64 GameHr_102dee0(__int64 a1, __int64 a2, _QWORD* a3);
float GameHr_1035060(float* a1, unsigned __int16* a2, __int64 a3, float* a4);
__int64 GameHr_1049ba0(__int64 a1, __int64 a2);
void GameHr_106fae0(__int64 a1);
void GameHr_1086960(__int64 a1);
void GameHr_109bd90(_QWORD* a1);
__int64 GameHr_10f5420(__int64 a1, __int64 a2);
void GameHr_111c920(__int64 a1);
void GameHr_1137660(__int64 a1);
void GameHr_1139820(__int64 a1);
void GameHr_113ff20(__int64 a1, int a2, __int64* a3);
_QWORD* GameHr_1147f80(__int64 a1);
__int64 GameHr_114ed00(__int64 a1);
void GameHr_11511f0(__int64 a1);
extern char* game_hub_g_motions;
char** GameHr_108c640(int a1);

__int64 GameHr_102dee0(__int64 a1, __int64 a2, _QWORD* a3)
{
  unsigned int v6;
  __int128 v7;
  unsigned __int64 v8;
  char v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v23[2];
    char* v24;
  } v23_;
  struct {
    __int64 v25;
    __int64 v26;
    char* v27;
  } v25_;
  struct {
    __int64 v28[2];
    __int64 v29;
  } v28_;
  struct {
    _QWORD v30[2];
    char v31;
  } v30_;

  GameRoutine_ff24c0_alt1((void*)(v30_.v30), *a3);
  GlobalHashUtil_ff2a00((void*)(v28_.v28), (_QWORD*)*a3);
  LocatorDispos_db1f30((void*)(&v25_.v25), v28_.v28);
  if (v30_.v31 == 1) {
    v6 = v30_.v30[1];
    *(_QWORD*)a2 = v30_.v30[0];
    v7 = *(_OWORD*)a2;
    *((_QWORD*)&v7 + 1) = v6;
    *(_OWORD*)a2 = v7;
  }
  v8 = *(unsigned __int8*)(a1 + 8);
  v9 = v25_.v25;
  v10 = v25_.v26;
  if ((v8 & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 16);
  }
  else {
    v11 = v8 >> 1;
  }
  v12 = (unsigned __int64)(unsigned __int8)v25_.v25 >> 1;
  if ((v25_.v25 & 1) != 0) {
    v12 = v25_.v26;
  }
  if (v11 == v12 &&
      ((v8 & 1) != 0 ? (v13 = *(_QWORD*)(a1 + 24)) : (v13 = a1 + 9),
       (v25_.v25 & 1) == 0 ? (v14 = (char*)&v25_.v25 + 1) : (v14 = v25_.v27),
       memcmp(v13, (__int64)v14, v11) == 0)) {
    LOWORD(v23_.v23[0]) = 0;
  }
  else if ((v9 & 1) != 0) {
    fw_text_String_CopyTerminated(v23_.v23, (__int64)v25_.v27, v10);
  }
  else {
    v23_.v23[0] = v25_.v25;
    v23_.v23[1] = v25_.v26;
    v23_.v24 = v25_.v27;
  }
  if ((game_hub_102e240(a1, (__int128*)a2, v23_.v23) & 1) != 0 &&
      (v15 = GameData_212ebb0[0], v16 = *GameData_212ebb0[0],
       v17 = GameRoutine_f71d40_alt1(*GameData_212ebb0[0], a2, a1 + 40),
       (GameRoutine_f71cb0_alt1(v17, v17) & 1) != 0) &&
      ((unsigned int)game_hub_f71fc0(v16, a2, a1 + 40) == 0 ||
       (*(_BYTE*)(v16 + 32) & 2) != 0)) {
    *(_DWORD*)(a2 + 16) = GameRoutine_f71d40_alt1(*v15, a2, a1 + 40);
    v18 = 1;
    if ((v23_.v23[0] & 1) == 0) {
      goto LABEL_30;
    }
  }
  else {
    v18 = 0;
    if ((v23_.v23[0] & 1) == 0) {
      goto LABEL_30;
    }
  }
  if (v23_.v24 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v23_.v24);
  }
LABEL_30:
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  (__int64)v25_.v27);
  }
  if ((v28_.v28[0] & 1) != 0 && v28_.v29 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  v28_.v29);
  }
  return v18;
}

float GameHr_1035060(float* a1, unsigned __int16* a2, __int64 a3, float* a4)
{

#pragma clang fp contract(off)
  float* v4;
  unsigned __int16* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  float v11;
  float v12;
  float result;

  v4 = a4;
  if (a4 == nullptr) {
    v6 = a2;
    v7 = game_HashString((__int64)"NoMap");
    v8 = *(_QWORD*)(GameData_21c9f40 + 96);
    if ((v8 & (v8 - 1)) != 0) {
      v9 = v7;
      if (v7 >= v8) {
        v9 = v7 % v8;
      }
      a2 = v6;
      v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v9);
      do {
        do {
          v10 = (_QWORD*)*v10;
        } while (v10[1] != v7);
      } while (v10[2] != v7);
    }
    else {
      a2 = v6;
      v10 =
          *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * ((v8 - 1) & v7));
      do {
        do {
          v10 = (_QWORD*)*v10;
        } while (v10[1] != v7);
      } while (v10[2] != v7);
    }
    v4 = (float*)v10[3];
  }
  a1[2] = v4[26] * (float)(vcvts_n_f32_u32(*a2, 1u) - v4[28]);
  a1[3] = v4[27] * (float)(vcvts_n_f32_u32(a2[1], 1u) - v4[29]);
  v11 = v4[30];
  v12 = fmodf(v11, 0x1.6800000000000p+8f);
  if (v11 < 0x0.0p+0f) {
    v12 = v12 + 0x1.6800000000000p+8f;
  }
  a1[1] = v12;
  result = v4[23];
  *a1 = result;
  return result;
}

__int64 GameHr_1041630(__int64 a1, __int64 a2, _WORD* a3)
{
  __int64 result;
  const char* v7;
  const char* v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  const char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v27[2];
    __int64 v28;
    char gap24_[8];
    _QWORD* v29;
  } v27_;
  struct {
    _QWORD v30[2];
    char* v31;
  } v30_;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    const char* v34;
  } v32_;

  result = CmdBtlSeqActionSkill_1041940(a2, a3);
  if ((result & 1) == 0) {
    return result;
  }
  if (a2 != 0) {
    LOBYTE(v27_.v27[0]) = 18;
    strcpy((char*)v27_.v27 + 1, "Single - ");
    if (*(_BYTE*)(a2 + 2136) != 0) {
      v7 = (const char*)game_97b2f0(a2 + 2104);
    }
    else {
      v7 = GameHr_67ed20(*(_QWORD**)(a2 + 392));
    }
    v8 = v7;
    v9 = strlen(v7);
    GameRoutine_1a09ce0_alt1((__int64)v27_.v27, v8, v9);
    if ((*(_DWORD*)a3 & 0xFFF) != 0) {
      v10 = HistoryLogInfo_6fb810(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (*(_DWORD*)a3 & 0xFFF)));
    }
    else {
      v10 = &GameData_1a9f09e;
    }
    v11 = strlen(v10);
    if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v12 = v11;
    if (v11 >= 0x17) {
      if ((v11 | 7) == 0x17) {
        v14 = 26;
      }
      else {
        v14 = (v11 | 7) + 1;
      }
      v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                  16, 0);
      v30_.v30[1] = v12;
      v30_.v31 = v13;
      v30_.v30[0] = v14 | 1;
    }
    else {
      LOBYTE(v30_.v30[0]) = 2 * v11;
      v13 = (char*)v30_.v30 + 1;
      if (v11 == 0) {
        goto LABEL_18;
      }
    }
    memmove((__int64)v13, (__int64)v10, v12);
  LABEL_18:
    v13[v12] = 0;
    v15 = (__int64*)GameRoutine_1a0a680_alt1((__int64)v30_.v30, 0, ":", 1u);
    v17 = v15[1];
    v16 = v15[2];
    v32_.v32 = *v15;
    v32_.v33 = v17;
    v32_.v34 = (const char*)v16;
    v15[1] = 0;
    v15[2] = 0;
    *v15 = 0;
    if ((v32_.v32 & 1) != 0) {
      v18 = v32_.v34;
    }
    else {
      v18 = (char*)&v32_.v32 + 1;
    }
    if ((v32_.v32 & 1) != 0) {
      v19 = v32_.v33;
    }
    else {
      v19 = (unsigned __int64)(unsigned __int8)v32_.v32 >> 1;
    }
    GameRoutine_1a09ce0_alt1((__int64)v27_.v27, v18, v19);
    if ((v32_.v32 & 1) != 0 && v32_.v34 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v32_.v34);
    }
    if ((v30_.v30[0] & 1) != 0 && v30_.v31 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v30_.v31);
    }
    if ((v27_.v27[0] & 1) != 0 && v27_.v28 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v27_.v28);
    }
  }
  result = ProcList_9bd480(a1);
  if (result == 0) {
    return result;
  }
  v23 = *(unsigned int*)a3;
  v24 = result;
  v27_.v27[0] = GameData_2003880;
  v27_.v27[1] = a2;
  v27_.v29 = v27_.v27;
  v27_.v28 = v23;
  game_ProcList_Call_9bcfa0(result, (__int64)v27_.v27);
  if (v27_.v29 == v27_.v27) {
    v25 = 32;
    goto LABEL_44;
  }
  if (v27_.v29 != nullptr) {
    v25 = 40;
  LABEL_44:
    (*(void (**)(__int64))(*v27_.v29 + v25))((__int64)v27_.v29);
  }
  v27_.v27[0] = GameData_20039b8;
  v27_.v27[1] = a2;
  v27_.v29 = v27_.v27;
  game_ProcList_Call_9bcfa0(v24, (__int64)v27_.v27);
  result = (__int64)v27_.v29;
  if (v27_.v29 == v27_.v27) {
    v26 = 32;
  }
  else {
    if (v27_.v29 == nullptr) {
      return result;
    }
    v26 = 40;
  }
  return (*(__int64 (**)(__int64))(*v27_.v29 + v26))((__int64)v27_.v29);
}

__int64 GameHr_1042360(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = GameData_212ea58;
  v23[0] = GameData_1fec818;
  v23[1] = &v25;
  v21 = 0;
  v22 = 0;
  v24 = v23;
  v23[2] = &v21;
  v25 = v1;
  GameRoutine_e9a800(*GameData_212ea58, v23);
  result = (__int64)v24;
  if (v24 == v23) {
    v6 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_6;
    }
    v6 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v24 + v6))((__int64)v24);
LABEL_6:
  if (v21 == 0) {
    goto LABEL_29;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v21 + 16) + 440LL);
  if (v7 != 0 && (unsigned __int64)(v8 = *(unsigned __int8*)(v7 + 16)) <= 3) {
    v9 = GameData_1b01768[v8];
  }
  else {
    v9 = 3;
  }
  v10 = (_DWORD*)(*v3 + (v9 << 7) + 672);
  v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (*(_DWORD*)(a1 + 160) & 0xFFF));
  if (*(_WORD*)(v11 + 256) != 0) {
    v12 = **(__int16**)(v11 + 264);
    if (v12 < 0) {
      v20 = *(unsigned __int8*)(v11 + 250);
      if (v20 == 10) {
        if (v1 != 0) {
          LOBYTE(v23[0]) = 0;
          result = GameRoutine_6dd190(v1, v23, 1);
          v12 = (int)(result * (unsigned __int16)-(__int16)v12 + 99) / -100;
          goto LABEL_14;
        }
      }
      else if (v20 == 9) {
        goto LABEL_14;
      }
    }
  }
  v12 = 0;
LABEL_14:
  v13 = v10[3];
  v14 = v10[5] + v10[4];
  v15 = v13 + v12;
  if (v14 <= 1) {
    v14 = 1;
  }
  if (v14 >= v15) {
    v16 = v13 + v12;
  }
  else {
    v16 = v14;
  }
  if (v15 < 1) {
    v17 = 1;
  }
  else {
    v17 = v16;
  }
  if (v14 >= (unsigned int)v17) {
    v14 = v17;
  }
  if (v17 < 0) {
    v14 = 0;
  }
  v10[3] = v14;
  if (v14 != v13) {
    result = GameRoutine_e734e0(v10);
    v18 = v10[3];
    v4 = (unsigned int)(v18 - v13);
    if (v18 != v13) {
      result = GameRoutine_1042c40(v1, v4);
    }
  }
LABEL_29:
  v19 = v22;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 16LL))(v19, v4);
    return GameRoutine_1a09c50(v19);
  }
  return result;
}

unsigned __int64 GameHr_10499a0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _WORD* v10;
  __int64 i;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 result;
  int* v16;
  int* v17;
  __int64 v18;
  int v19;
  _QWORD v20[4];
  _QWORD* v21;
  unsigned __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;

  v4 = **(_QWORD**)(a2 + 392) - 0x61C8864680B583EBLL;
  v5 = (*(_QWORD*)GameRoutine_6c8530(a2) + (v4 << 12) + (v4 >> 4) -
        0x61C8864680B583EBLL) ^
       v4;
  v6 = ((v5 << 12) + (unsigned int)*(char*)(a2 + 584) + (v5 >> 4) -
        0x61C8864680B583EBLL) ^
       v5;
  v7 = (v6 << 12) + (unsigned int)*(char*)(a2 + 585);
  v8 = *(unsigned int*)(a2 + 592);
  v9 = *(_QWORD*)(a1 + 16);
  v20[0] = GameData_2004168;
  v20[1] = &v22;
  v23[0] = GameData_20042e8;
  v23[1] = a1;
  v22 = (v8 + (((v7 + (v6 >> 4) - 0x61C8864680B583EBLL) ^ v6) << 12) +
         (((v7 + (v6 >> 4) - 0x61C8864680B583EBLL) ^ v6) >> 4) -
         0x61C8864680B583EBLL) ^
        (v7 + (v6 >> 4) - 0x61C8864680B583EBLL) ^ v6;
  v24 = v23;
  v21 = v20;
  v23[2] = v20;
  GameRoutine_710540(v9 + 828, v23);
  v10 = (_WORD*)(v9 + 876);
  for (i = 24; i != 0; --i) {
    if (*v10 != 0) {
      if (v24 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, _WORD*))(*v24 + 48LL))(v24, v10);
    }
    v10 += 4;
  }
  if (v24 == v23) {
    v12 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_11;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v24 + v12))((__int64)v24);
LABEL_11:
  if (v21 == v20) {
    v13 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_16;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v21 + v13))((__int64)v21);
LABEL_16:
  v14 = *(_QWORD*)(a1 + 16);
  result = v22;
  v16 = *(int**)(v14 + 1488);
  v17 = *(int**)(v14 + 1496);
  if (v16 != v17) {
    v18 = *(_QWORD*)(GameData_21c99b0 + 64);
    do {
      v19 = *v16++;
      result ^= **(_QWORD**)(v18 + 8LL * (v19 & 0xFFF)) - 0x61C8864680B583EBLL +
                (result << 12) + (result >> 4);
      v22 = result;
    } while (v16 != v17);
  }
  return result;
}

__int64 GameHr_1049ba0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  void (**v8)(_QWORD);
  bool v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _WORD* v22;
  __int64 i;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;

  *(_QWORD*)(a1 + 16) = a2;
  v3 = MapPanelDeployAction_10499a0(a1, a2);
  if (*(_QWORD*)(a1 + 8) != v3) {
    v5 = *(void (****)(_QWORD))(a1 + 24);
    v4 = *(void (****)(_QWORD))(a1 + 32);
    *(_QWORD*)(a1 + 8) = v3;
    if (v5 != v4) {
      v6 = v4 - 7;
      v7 = v4 - 7;
      do {
        v8 = *v7;
        v7 -= 7;
        (*v8)(v6);
        v9 = v6 == v5;
        v6 = v7;
      } while (!v9);
    }
    v10 = *(_QWORD*)(a1 + 12368);
    *(_QWORD*)(a1 + 32) = v5;
    *(_DWORD*)(a1 + 12340) = 0;
    if (v10 != 0) {
      v11 = *(_QWORD**)(a1 + 12360);
      if (v11 != nullptr) {
        v12 = fw_memory_g_heap_manager_ptr;
        do {
          v13 = (_QWORD*)*v11;
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14, (__int64)v11);
          v11 = v13;
        } while (v13 != nullptr);
      }
      v15 = *(_QWORD*)(a1 + 12352);
      *(_QWORD*)(a1 + 12360) = 0;
      if (v15 != 0) {
        v16 = v15 & 7;
        if (v15 >= 8) {
          v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
          v17 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 12344) + 8 * v17) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12344) + 8 * v17 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12344) + 8 * v17 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12344) + 8 * v17 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12344) + 8 * v17 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12344) + 8 * v17 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12344) + 8 * v17 + 48) = 0;
            v19 = *(_QWORD*)(a1 + 12344) + 8 * v17;
            v17 += 8;
            *(_QWORD*)(v19 + 56) = 0;
          } while (v18 != v17);
        }
        else {
          v17 = 0;
        }
        if (v16 != 0) {
          v20 = 8 * v17;
          do {
            --v16;
            *(_QWORD*)(*(_QWORD*)(a1 + 12344) + v20) = 0;
            v20 += 8;
          } while (v16 != 0);
        }
      }
      *(_QWORD*)(a1 + 12368) = 0;
    }
    v21 = *(_QWORD*)(a1 + 16);
    *(_DWORD*)(a1 + 12384) = 0;
    if (v21 != 0) {
      v30_.v30[0] = GameData_20041e8;
      v30_.v30[1] = a1;
      v32_.v32[0] = GameData_20042e8;
      v32_.v32[1] = a1;
      v30_.v31 = v30_.v30;
      v32_.v32[2] = v30_.v30;
      v32_.v33 = v32_.v32;
      game_UnitItemList_EachItem((_WORD*)(v21 + 828), (__int64)v32_.v32);
      v22 = (_WORD*)(v21 + 876);
      for (i = 24; i != 0; --i) {
        if (*v22 != 0) {
          if (v32_.v33 == nullptr) {
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(_QWORD*, _WORD*))(*v32_.v33 + 48LL))(v32_.v33, v22);
        }
        v22 += 4;
      }
      if (v32_.v33 == v32_.v32) {
        v25 = 32;
      }
      else {
        if (v32_.v33 == nullptr) {
          goto LABEL_35;
        }
        v25 = 40;
      }
      (*(void (**)(__int64))(*v32_.v33 + v25))((__int64)v32_.v33);
    LABEL_35:
      if (v30_.v31 == v30_.v30) {
        v26 = 32;
      }
      else {
        if (v30_.v31 == nullptr) {
          goto LABEL_40;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v30_.v31 + v26))((__int64)v30_.v31);
    LABEL_40:
      v28_.v28[0] = GameData_2004268;
      v28_.v28[1] = a1;
      v28_.v29 = v28_.v28;
      MapPanelDeployAction_1049e60(a1, (__int64)v28_.v28);
      if (v28_.v29 == v28_.v28) {
        v27 = 32;
        goto LABEL_44;
      }
      if (v28_.v29 != nullptr) {
        v27 = 40;
      LABEL_44:
        (*(void (**)(__int64))(*v28_.v29 + v27))((__int64)v28_.v29);
      }
      return 1;
    }
  }
  return 0;
}

_QWORD* GameHr_104e1a0(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;

  result = (_QWORD*)a1[4];
  if (result == a1) {
    v3 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v3))((__int64)result);
}

void GameHr_106fae0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[2];
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v28_;
  struct {
    _QWORD v31[4];
    _QWORD* v32;
  } v31_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      30720, 16, 0);
  v4 = -30720;
  v28_.v28 = v3;
  v28_.v30 = v3 + 30720;
  do {
    v5 = (_QWORD*)(v3 + v4);
    v4 += 960;
    v5[3844] = 0;
    v5[3850] = 0;
    v5[3856] = 0;
    v5[3862] = 0;
    v5[3868] = 0;
    v5[3874] = 0;
    v5[3880] = 0;
    v5[3886] = 0;
    v5[3892] = 0;
    v5[3898] = 0;
    v5[3904] = 0;
    v5[3910] = 0;
    v5[3916] = 0;
    v5[3922] = 0;
    v5[3928] = 0;
    v5[3934] = 0;
    v5[3940] = 0;
    v5[3946] = 0;
    v5[3952] = 0;
    v5[3958] = 0;
  } while (v4 != 0);
  v28_.v29 = v3 + 30720;
  v27[0] = a1;
  v27[1] = &v28_.v28;
  v6 = (__int64*)GameData_21323e8[0];
  fw_world_JobContext_Drain(*(unsigned int**)GameData_21323e8[0]);
  v7 = *v6;
  v8 = *v6 + 32;
  do {
    v9 = *(_DWORD*)(v7 + 8);
    v10 = (v9 + 1) & 0xFFFFFF;
    if (v9 + 1 <= 0) {
      v10 = -(-(v9 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v7 + 8) = v10;
    v11 = atomic_load((unsigned __int64*)(v8 + 32LL * (v9 & 0x3F)));
    if (v11 != 0) {
      v9 = -1;
    }
  } while (v9 < 0);
  v12 = v9 | 0xC0000000;
  v13 = (unsigned __int64*)(v8 + 32LL * (v9 & 0x3F));
  nn_os_ClearLightEvent((__int64)(v13 + 1));
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  v14[2] = 0;
  v15 = v14;
  v16 = GameData_212e368[0];
  v14[8] = 0;
  *v14 = v16 + 16;
  v14[1] = 0;
  v17 = v13[3];
  v13[3] = (unsigned __int64)v15;
  if (v17 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  atomic_store(v12, v13);
  v15[1] = v7;
  *((_DWORD*)v15 + 4) = v12;
  v31_.v31[0] = GameData_20063c0;
  v31_.v31[1] = 640;
  v31_.v32 = v31_.v31;
  v31_.v31[2] = v27;
  fw_world_SwapCallables(v31_.v31, v15 + 4);
  if (v31_.v32 == v31_.v31) {
    v18 = 32;
    goto LABEL_15;
  }
  if (v31_.v32 != nullptr) {
    v18 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v31_.v32 + v18))((__int64)v31_.v32);
  }
  fw_world_JobQueue_Submit(*(_QWORD*)(v7 + 16), v12);
  fw_world_JobContext_Wait(*v6, v12);
  v19 = v28_.v28;
  v20 = v28_.v29;
  if (v28_.v28 == v28_.v29) {
    if (v28_.v28 == 0) {
      return;
    }
  }
  else {
    do {
      v21 = *(_QWORD*)(v19 + 32);
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 48LL))(v21);
      }
      v19 += 48;
    } while (v19 != v20);
    v19 = v28_.v28;
    if (v28_.v28 == 0) {
      return;
    }
  }
  v22 = v28_.v29;
  if (v19 == v28_.v29) {
  LABEL_32:
    v26 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v26, v19);
    return;
  }
  do {
    v24 = *(_QWORD**)(v22 - 16);
    v25 = v22 - 48;
    if ((_QWORD*)(v22 - 48) == v24) {
      v23 = 32;
    LABEL_26:
      (*(void (**)(__int64))(*v24 + v23))((__int64)v24);
      goto LABEL_27;
    }
    if (v24 != nullptr) {
      v23 = 40;
      goto LABEL_26;
    }
  LABEL_27:
    v22 = v25;
  } while (v25 != v19);
  v28_.v29 = v19;
  v19 = v28_.v28;
  if (v28_.v28 != 0) {
    goto LABEL_32;
  }
}

__int64 GameHr_1084b20(__int64 result, const char* a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int16* v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  int v23;
  int v24;

  if (result != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v3 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v21 = result;
      v22 = a2;
      v23 = __cxa_guard_acquire((__int64)GameData_212df10);
      a2 = v22;
      v24 = v23;
      result = v21;
      if (v24 != 0) {
        *v3 = wld_Crc32(0, "ModelModule", 0xBu);
        __cxa_guard_release((__int64)GameData_212df10);
        result = v21;
        a2 = v22;
      }
    }
    v4 = *(_QWORD*)(result + 512);
    v5 = v4;
    do {
      if (v5 == *(_QWORD*)(result + 504)) {
        return 0;
      }
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
    } while (v6 != *v3);
    if (*(_QWORD*)(result + 512) == v4) {
      return 0;
    }
    v7 = *(_QWORD*)(v4 + 8);
    if (v7 == 0) {
      return 0;
    }
    v8 = *(_QWORD**)(*(_QWORD*)(v7 + 24) + 168LL);
    if (v8 == nullptr) {
      return 0;
    }
    v9 = *(_QWORD*)(*v8 + 8LL);
    if (v9 == 0) {
      return 0;
    }
    v10 = (__int64)a2;
    v11 = strlen(a2);
    v12 = v9 + 8;
    v13 = *(unsigned __int16*)(v9 + 12);
    v14 = v9 + 8 + 16 * v13;
    v15 = *(_DWORD*)v14;
    if ((signed __int32)*(_DWORD*)(v9 + 8) < (signed __int32)*(_DWORD*)v14) {
      do {
        v18 = (__int64)v15 >> 3;
        if (v11 > v18) {
          v16 = (*(unsigned __int8*)(v10 + v11 + ~v18) >> (v15 & 7)) & 1;
        }
        else {
          v16 = 0;
        }
        v13 = *(unsigned __int16*)(v9 + 12 + 16 * v13 + 2 * v16);
        v17 = v15 < (signed __int32)*(_DWORD*)(v12 + 16 * v13);
        v15 = *(_DWORD*)(v12 + 16 * v13);
      } while (v17);
      v14 = v12 + 16 * v13;
    }
    v19 = *(unsigned __int16**)(v14 + 8);
    if (v11 != *v19) {
      return 0;
    }
    if (memcmp((__int64)(v19 + 1), v10, v11) != 0) {
      return 0;
    }
    v20 = v14 - v9 - 24;
    if ((~v20 & 0xFFFFFFFF0LL) == 0) {
      return 0;
    }
    return v8[4] + ((__int64)(int)(v20 >> 4) << 6);
  }
  return result;
}

__int64 GameHr_1085140(__int64 result, const char* a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int16* v19;
  unsigned __int64 v20;
  __int64 v21;
  const char* v22;
  int v23;
  int v24;

  if (result != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v3 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v21 = result;
      v22 = a2;
      v23 = __cxa_guard_acquire((__int64)GameData_212df10);
      a2 = v22;
      v24 = v23;
      result = v21;
      if (v24 != 0) {
        *v3 = wld_Crc32(0, "ModelModule", 0xBu);
        __cxa_guard_release((__int64)GameData_212df10);
        result = v21;
        a2 = v22;
      }
    }
    v4 = *(_QWORD*)(result + 512);
    v5 = v4;
    do {
      if (v5 == *(_QWORD*)(result + 504)) {
        return 0;
      }
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
    } while (v6 != *v3);
    if (*(_QWORD*)(result + 512) == v4) {
      return 0;
    }
    v7 = *(_QWORD*)(v4 + 8);
    if (v7 == 0) {
      return 0;
    }
    v8 = *(_QWORD**)(*(_QWORD*)(v7 + 24) + 168LL);
    if (v8 == nullptr) {
      return 0;
    }
    v9 = *(_QWORD*)(*v8 + 8LL);
    if (v9 == 0) {
      return 0;
    }
    v10 = (__int64)a2;
    v11 = strlen(a2);
    v12 = v9 + 8;
    v13 = *(unsigned __int16*)(v9 + 12);
    v14 = v9 + 8 + 16 * v13;
    v15 = *(_DWORD*)v14;
    if ((signed __int32)*(_DWORD*)(v9 + 8) < (signed __int32)*(_DWORD*)v14) {
      do {
        v18 = (__int64)v15 >> 3;
        if (v11 > v18) {
          v16 = (*(unsigned __int8*)(v10 + v11 + ~v18) >> (v15 & 7)) & 1;
        }
        else {
          v16 = 0;
        }
        v13 = *(unsigned __int16*)(v9 + 12 + 16 * v13 + 2 * v16);
        v17 = v15 < (signed __int32)*(_DWORD*)(v12 + 16 * v13);
        v15 = *(_DWORD*)(v12 + 16 * v13);
      } while (v17);
      v14 = v12 + 16 * v13;
    }
    v19 = *(unsigned __int16**)(v14 + 8);
    if (v11 != *v19) {
      return 0;
    }
    if (memcmp((__int64)(v19 + 1), v10, v11) != 0) {
      return 0;
    }
    v20 = v14 - v9 - 24;
    if ((~v20 & 0xFFFFFFFF0LL) == 0) {
      return 0;
    }
    return v8[3] + 96LL * (int)(v20 >> 4);
  }
  return result;
}

__int64 GameHr_1086020(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       unsigned int a5)
{
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v7[2] = a3;
  v7[0] = GameData_20077d8;
  v7[1] = a1;
  v8 = v7;
  GameRoutine_1116460(a2, v7, a4, 0, 0, a5);
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

void GameHr_1086960(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (a1 == 0) {
    return;
  }
  GameHr_1086960(*(_QWORD*)a1);
  GameHr_1086960(*(_QWORD*)(a1 + 8));
  v2 = *(_QWORD*)(a1 + 56);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 == 0) {
    goto LABEL_16;
  }
  v4 = *(_QWORD*)(a1 + 64);
  if (v2 == v4) {
  LABEL_13:
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v2);
    goto LABEL_16;
  }
  do {
    v6 = *(_QWORD**)(v4 - 32);
    v7 = v4 - 64;
    if ((_QWORD*)(v4 - 64) == v6) {
      v5 = 32;
    LABEL_6:
      (*(void (**)(__int64))(*v6 + v5))((__int64)v6);
      goto LABEL_7;
    }
    if (v6 != nullptr) {
      v5 = 40;
      goto LABEL_6;
    }
  LABEL_7:
    v4 = v7;
  } while (v7 != v2);
  v8 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 64) = v2;
  v2 = v8;
  if (v8 != 0) {
    goto LABEL_13;
  }
LABEL_16:
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 48);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, v10);
    }
  }
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, a1);
}

char** GameHr_108c640(int a1)
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
    v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
    if (v4 != nullptr) {
      v5 = *v4;
      if (*v4 != nullptr) {
        v6 = 639;
        if ((GameData_22356f8 & v2) == 0) {
          while (1) {
            v9 = v5[1];
            if (v9 == a1) {
              if (*((_DWORD*)v5 + 4) == a1) {
                goto LABEL_27;
              }
            }
            else if ((v9 & v2) != v3) {
              return &(&game_hub_g_motions)[5 * v6];
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              return &(&game_hub_g_motions)[5 * v6];
            }
          }
        }
        while (1) {
          v7 = v5[1];
          if (v7 == a1) {
            if (*((_DWORD*)v5 + 4) == a1) {
            LABEL_27:
              v6 = *((_DWORD*)v5 + 5);
              return &(&game_hub_g_motions)[5 * v6];
            }
          }
          else {
            if (v7 >= GameData_22356f8) {
              v7 %= (unsigned __int64)GameData_22356f8;
            }
            if (v7 != v3) {
              return &(&game_hub_g_motions)[5 * v6];
            }
          }
          v5 = (__int64*)*v5;
          if (v5 == nullptr) {
            return &(&game_hub_g_motions)[5 * v6];
          }
        }
      }
    }
  }
  v6 = 639;
  return &(&game_hub_g_motions)[5 * v6];
}

__int64 GameHr_10953f0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  float v9;
  char v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[25];

  v2 = GameData_212e248[0];
  Manager_11ea40((void*)((__int64)v14), *GameData_212e248[0],
                 *(_QWORD*)(a1 + 8) + 16LL, 0, 0xFFFFFFFF);
  GameRoutine_112180_alt1(a1 + 72, (__int64)v14);
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 72)) & 1) != 0) {
    v3 = snd_fnd_WeakHandle_get(a1 + 72);
    (*(void (**)(__int64, __int64))(*(_QWORD*)(v3 - 5592) + 120LL))(v3 - 5592,
                                                                    32);
  }
  v4 = *(_QWORD*)(a1 + 32);
  if (v4 == 0 || ((v5 = *(_QWORD*)(v4 + 8), v6 = *(_QWORD*)(a1 + 40), v5 != -1)
                      ? (v7 = v6 == 0)
                      : (v7 = true),
                  v7)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v6 + 340) & 2) != 0) {
    goto LABEL_13;
  }
  Manager_11ea40((void*)((__int64)v14), *v2, *(_QWORD*)(a1 + 8) + 16LL, 0,
                 0xFFFFFFFF);
  GameRoutine_112180_alt1(a1 + 88, (__int64)v14);
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 88)) & 1) != 0) {
    v8 = snd_fnd_WeakHandle_get(a1 + 88);
    (*(void (**)(__int64, __int64))(*(_QWORD*)(v8 - 5592) + 120LL))(v8 - 5592,
                                                                    32);
  }
LABEL_13:
  *(_QWORD*)(a1 + 64) =
      CharacterBuilder_1084a50(*(_QWORD*)(a1 + 40), "-Loc_C_Center");
  if (GameData_21d92e0 == 3) {
    v9 = 0x1.0000000000000p+0f;
    v10 = 1;
  }
  else {
    v10 = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 289LL);
    if (v10 != 0) {
      v9 = 0x1.0000000000000p+0f;
    }
    else {
      v9 = 0x0.0p+0f;
    }
  }
  *(_BYTE*)(a1 + 56) = v10;
  v11 = snd_fnd_WeakHandle_get(a1 + 72);
  if (v11 != 0) {
    v12 = v11 - 5592;
  }
  else {
    v12 = 0;
  }
  snd_Fade_Fade_10c830((__int64)v14, 0x0.0p+0f);
  (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v12 + 40) + 96LL))(v12 + 40,
                                                                       v14, v9);
  return snd_Fade_Destroy_Fade(v14);
}

void GameHr_109bd90(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;

  v1 = a1[6];
  a1[6] = 0;
  *a1 = game_combat_MagicCatalog_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_14;
  }
  if (*(_BYTE*)(v1 + 65) == 1) {
    GameHr_111eae0(v1);
  }
  v4 = *(_QWORD**)(v1 + 48);
  if (v4 == (_QWORD*)(v1 + 16)) {
    v5 = 32;
    goto LABEL_8;
  }
  if (v4 != nullptr) {
    v5 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
  }
  v6 = *(_QWORD*)(v1 + 8);
  *(_QWORD*)(v1 + 8) = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v1);
LABEL_14:
  v8 = a1[5];
  a1[5] = 0;
  if (v8 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v8);
  }
  v11 = a1 + 1;
  v10 = a1[1];
  if (v10 != 0) {
    MagicCatalog_109bf60((__int64)(a1 + 1), v10);
    if (*v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, *v11);
    }
  }
  *a1 = GameData_2008130;
  if ((_QWORD*)GameData_2235718 == a1) {
    GameData_2235718 = 0;
    GameData_2235740 = 0;
  }
}

__int64 GameHr_10ba5c0(__int64 result, float* a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
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

  v2 = 0.0f;
  v3 = 0.0f;
  v4 = 0.0f;
  v5 = 0.0f;
  *(_BYTE*)(result + 77) = a2[84] >= 0.0f;
  v6 = *a2;
  *(float*)(result + 32) = *a2;
  v7 = a2[1];
  *(float*)(result + 36) = v7;
  v8 = a2[12];
  *(float*)(result + 40) = v8;
  v9 = a2[13];
  *(float*)(result + 44) = v9;
  v10 = a2[84];
  if (v10 != 0.0f) {
    v11 = fabsf(v10);
    v12 = v6 - v11;
    v13 = v6 + v11;
    v14 = v7 - v11;
    v15 = v7 + v11;
    v16 = fminf(v12, 500.0f);
    v17 = fminf(v14, 500.0f);
    v18 = fmaxf(v12, -500.0f);
    v19 = fmaxf(v14, -500.0f);
    if (v16 > v13) {
      v16 = v13;
    }
    if (v18 < v13) {
      v18 = v13;
    }
    v20 = v8 - v11;
    v21 = v8 + v11;
    if (v17 > v15) {
      v17 = v15;
    }
    if (v19 < v15) {
      v19 = v15;
    }
    v22 = v9 - v11;
    if (v16 > v20) {
      v16 = v20;
    }
    if (v18 >= v20) {
      v23 = v18;
    }
    else {
      v23 = v20;
    }
    if (v17 <= v22) {
      v24 = v17;
    }
    else {
      v24 = v9 - v11;
    }
    v5 = v9 + v11;
    if (v19 >= v22) {
      v25 = v19;
    }
    else {
      v25 = v9 - v11;
    }
    if (v16 <= v21) {
      v3 = v16;
    }
    else {
      v3 = v21;
    }
    if (v23 >= v21) {
      v4 = v23;
    }
    else {
      v4 = v21;
    }
    if (v24 <= v5) {
      v2 = v24;
    }
    else {
      v2 = v9 + v11;
    }
    if (v25 >= v5) {
      v5 = v25;
    }
  }
  *(float*)(result + 16) = v3;
  *(float*)(result + 20) = v2;
  *(float*)(result + 24) = v4;
  *(float*)(result + 28) = v5;
  *(float*)result = v3;
  *(float*)(result + 4) = v2;
  *(float*)(result + 8) = v4;
  *(float*)(result + 12) = v5;
  return result;
}

__int64 GameHr_10d6ab0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  char v4;
  float v5;
  unsigned __int64 v6;
  __n128 v7;

  result = *(_QWORD*)(a1 + 160);
  if (result != 0) {
    result = GameRoutine_106c6d0();
    if ((result & 1) != 0) {
      v3 = *(_QWORD*)(a1 + 160);
      v4 = GameRoutine_10d4bf0();
      v5 = 1.0;
      if ((v4 & 1) != 0) {
        v5 = 2.0;
      }
      *(float*)(v3 + 180) = v5;
      if ((GameRoutine_10d49d0() & 1) != 0 &&
          ((*(_WORD*)(*(_QWORD*)(*GameData_212d448[0] + 8) + 112LL) & 0x190) ==
               0 ||
           GameData_22365a0 == 0 &&
               (GameData_21ec550 == 0 ||
                *(float*)((v6 = GameData_21ec550 +
                                ((unsigned __int64)*(
                                     unsigned __int8*)(GameData_21ec550 + 480)
                                 << 6)) +
                          172) == *(float*)(v6 + 168)))) {
        GameRoutine_10d6f00(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 208LL));
      }
      *(long double*)&v7 =
          GameRoutine_10d7320(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 208LL));
      return GameRoutine_106eaa0(*(_QWORD**)(a1 + 160), v7);
    }
  }
  return result;
}

void GameHr_10e26e0(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  long double v4;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 v9;
  char* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v1 = *(_QWORD**)(a1 + 80);
  v2 = *(_QWORD**)(a1 + 88);
  while (v2 != v1) {
    v13 = *--v2;
    v12 = v13;
    *v2 = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
  }
  *(_QWORD*)(a1 + 88) = v1;
  *(__n128*)&v4 = GameRoutine_109d900((unsigned int*)(a1 + 104));
  v5 = *(_QWORD*)(a1 + 32);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (*(_QWORD*)(v5 + 8) != -1 && v6 != 0) {
      v8 = *(_DWORD*)(a1 + 216);
      if (v8 != 0) {
        v9 = *(_QWORD*)(v6 + 72);
        v10 = *(char**)(v9 + 56);
        v11 = *(char**)(v9 + 64);
        if (v10 != v11) {
          do {
            if (v8 == *(_DWORD*)v10) {
              *(_DWORD*)v10 = 0;
            }
            v10 += 80;
          } while (v10 != v11);
          v10 = *(char**)(v9 + 56);
          v11 = *(char**)(v9 + 64);
        }
        if (0xCCCCCCCCCCCCCCCDLL * ((v11 - v10) >> 4) >= 0x40) {
          v14 = GameRoutine_d3d960(v4);
          GameRoutine_d3d7a0(v9 + 56, v14, *(_QWORD*)(v9 + 64));
        }
      }
    }
  }
  v15 = *(_DWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 56) = v15 | 1;
}

void GameHr_10f4080(__int64* a1, __int64 a2, const char* a3, char a4)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned __int16* v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  bool v25;
  unsigned __int64 v26;
  _BYTE* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  const char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  const char* v44;
  int v45;
  unsigned __int8* v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned __int8* v51;
  int v52;
  unsigned __int8* v53;
  int v54;
  int v55;
  int v56;
  unsigned __int64 v57;
  int v58;
  __int64 v59;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64** v66;
  __int64* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64** v70;
  __int64* v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  float v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  float v82;
  __int64 v83;
  float v84;
  _BOOL8 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 primeEm;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  _QWORD* v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  _QWORD* v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  _QWORD* v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  _QWORD* v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  _QWORD* v118;
  _QWORD* v119;
  char v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  int v125;
  __int64* v126;
  _QWORD* v127;
  bool v128;
  struct {
    __int64 v130;
    __int64 v131;
    const char* v132;
  } v130_;
  struct {
    __int64 v133;
    __int64 v134;
    unsigned __int8* v135;
    int v136;
  } v133_;
  struct {
    __int64 v137;
    __int64 v138;
    char* v139;
  } v137_;
  struct {
    __int64 v140;
    __int64 v141;
    const char* v142;
  } v140_;
  struct {
    _QWORD* v143;
    _QWORD* v144;
    __int64 v145;
  } v143_;

  if (a3 == nullptr || *a3 == 0) {
    return;
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v7 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v124 = a2;
    v125 = __cxa_guard_acquire((__int64)GameData_212df10);
    a2 = v124;
    if (v125 != 0) {
      *v7 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
      a2 = v124;
    }
  }
  v8 = *(_QWORD*)(a2 + 512);
  v9 = v8;
  while (v9 != *(_QWORD*)(a2 + 504)) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    v8 -= 16;
    if (v10 == *v7) {
      if (*(_QWORD*)(a2 + 512) != v8) {
        v11 = *(_QWORD*)(v8 + 8);
        if (v11 != 0) {
          v12 = *(unsigned __int16**)(*(_QWORD*)(v11 + 24) + 168LL);
          v13 = v12[40];
          if (v12[40] != 0) {
            v14 = 0;
            v15 = (__int64*)(*(_QWORD*)(*(_QWORD*)v12 + 8LL) + 32LL);
            do {
              v16 = *v15;
              v15 += 2;
              v17 = strstr((const char*)(v16 + 2), "Parts");
              if (v17 != 0) {
                v18 = *(unsigned __int8*)(v17 + 5);
                switch (v18) {
                case 'C':
                  v14 |= 4u;
                  break;
                case 'B':
                  v14 |= 2u;
                  break;
                case 'A':
                  v14 |= 1u;
                  break;
                default:
                  break;
                }
              }
              --v13;
            } while (v13 != 0);
            if ((_BYTE)v14 != 0) {
              v128 = (unsigned __int8)v14 !=
                     (unsigned __int8)GameRoutine_1112900_alt1(v11);
              goto LABEL_22;
            }
          }
        }
      }
      break;
    }
  }
  v128 = false;
LABEL_22:
  v143_.v144 = nullptr;
  v143_.v145 = 0;
  v143_.v143 = nullptr;
  v19 = strlen(a3);
  RuntimeBuffer_8924a0((__int64)&v143_.v143, (__int64)a3, v19, 0xAu);
  v20 = v143_.v143;
  v21 = v143_.v144;
  v22 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v143_.v143 != v143_.v144) {
    v23 = 56;
    v126 = a1 + 2;
    v127 = v143_.v144;
    while (1) {
      v140_.v141 = 0;
      v140_.v142 = nullptr;
      v137_.v139 = nullptr;
      v140_.v140 = 0;
      v137_.v137 = 0;
      v137_.v138 = 0;
      v24 = *(unsigned __int8*)v20;
      v25 = (v24 & 1) == 0;
      v26 = v24 >> 1;
      if (v25) {
        v27 = (char*)v20 + 1;
      }
      else {
        v27 = (_BYTE*)v20[2];
      }
      if (v25) {
        v28 = v26;
      }
      else {
        v28 = v20[1];
      }
      if ((game_109ecc0(v27, v28, (char*)&v140_.v140, (char*)&v137_.v137) &
           1) == 0) {
        if ((v140_.v140 & 1) != 0 && v140_.v142 != nullptr) {
          if (*(_QWORD*)(*v22 + 200) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(*v22 + v29, (__int64)v140_.v142);
        }
        v30 = *v20;
        v31 = v20[2];
        v140_.v141 = v20[1];
        v140_.v142 = (const char*)v31;
        v140_.v140 = v30;
        *(_WORD*)v20 = 0;
        if ((v137_.v137 & 1) != 0) {
          v137_.v138 = 13;
          v32 = v137_.v139;
        }
        else {
          LOBYTE(v137_.v137) = 26;
          v32 = (char*)&v137_.v137 + 1;
        }
        strcpy(v32, "-Loc_C_Center");
      }
      v34 = v137_.v138;
      v33 = v137_.v139;
      if ((v137_.v137 & 1) != 0) {
        v35 = v137_.v139;
      }
      else {
        v35 = (char*)&v137_.v137 + 1;
      }
      if ((v137_.v137 & 1) == 0) {
        v34 = (unsigned __int64)(unsigned __int8)v137_.v137 >> 1;
      }
      if (v35[v34 - 1] == 63) {
        if (v128) {
          goto LABEL_218;
        }
        v36 = v34 - 1;
        if ((v137_.v137 & 1) != 0) {
          v137_.v138 = v36;
        }
        else {
          LOBYTE(v137_.v137) = 2 * v36;
          v33 = (char*)&v137_.v137 + 1;
        }
        v33[v36] = 0;
      }
      if ((v140_.v140 & 1) != 0) {
        v37 = v140_.v142;
      }
      else {
        v37 = (char*)&v140_.v140 + 1;
      }
      game_10f8f00((void*)((unsigned __int8*)&v130_.v130), v37, a4);
      if ((v140_.v140 & 1) != 0 && v140_.v142 != nullptr) {
        if (*(_QWORD*)(*v22 + 200) != 0) {
          v38 = 128;
        }
        else {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(*v22 + v38, (__int64)v140_.v142);
      }
      v140_.v142 = v130_.v132;
      v140_.v140 = v130_.v130;
      v140_.v141 = v130_.v131;
      if ((v130_.v130 & 1) != 0) {
        v39 = v130_.v131;
      }
      else {
        v39 = (unsigned __int8)v130_.v130 >> 1;
      }
      if (v39 != 0) {
        v133_.v136 = 0;
        v130_.v130 = v140_.v140;
        v130_.v131 = v140_.v141;
        v40 = (__int64)v140_.v142;
        v140_.v141 = 0;
        v140_.v142 = nullptr;
        v130_.v132 = (const char*)v40;
        v41 = v137_.v137;
        v42 = v137_.v138;
        v137_.v137 = 0;
        v137_.v138 = 0;
        v133_.v133 = v41;
        v133_.v134 = v42;
        v43 = (__int64)v137_.v139;
        v137_.v139 = nullptr;
        v140_.v140 = 0;
        v133_.v135 = (unsigned __int8*)v43;
        if ((v130_.v130 & 1) != 0) {
          v44 = v130_.v132;
        }
        else {
          v44 = (char*)&v130_.v130 + 1;
        }
        v47 = *(unsigned __int8*)v44;
        v46 = (unsigned __int8*)(v44 + 1);
        v45 = v47;
        if (v47 != 0) {
          v48 = 0;
          do {
            v48 = v45 - v48 + 32 * v48;
            v49 = *v46++;
            v45 = v49;
          } while (v49 != 0);
        }
        else {
          v48 = 0;
        }
        v50 = v133_.v133 & 1;
        if ((v133_.v133 & 1) != 0) {
          v51 = v133_.v135;
        }
        else {
          v51 = (unsigned __int8*)&v133_.v133 + 1;
        }
        v54 = *v51;
        v53 = v51 + 1;
        v52 = v54;
        if (v54 != 0) {
          v55 = 0;
          do {
            v55 = v52 - v55 + 32 * v55;
            v56 = *v53++;
            v52 = v56;
          } while (v56 != 0);
        }
        else {
          v55 = 0;
        }
        v57 = a1[1];
        v58 = v55 ^ v48;
        v59 = a1[3];
        v133_.v136 = v58;
        if (v57 == 0 || v59 == 0) {
        LABEL_87:
          if (v57 != 0) {
            v61 = ((v57 - ((v57 >> 1) & 0x5555555555555555LL)) &
                   0x3333333333333333LL) +
                  (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) &
                   0x3333333333333333LL);
            v62 = (0x101010101010101LL *
                   ((v61 + (v61 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                  56;
            goto LABEL_104;
          }
        }
        else {
          v63 = v57 - 1;
          if ((v57 & (v57 - 1)) != 0) {
            v64 = v58;
            if (v57 <= v58) {
              v64 = v58 % v57;
            }
          }
          else {
            v64 = v63 & v58;
          }
          v65 = ((v57 - ((v57 >> 1) & 0x5555555555555555LL)) &
                 0x3333333333333333LL) +
                (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) &
                 0x3333333333333333LL);
          v62 = (0x101010101010101LL *
                 ((v65 + (v65 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                56;
          v66 = *(__int64***)(*a1 + 8 * v64);
          if (v66 != nullptr) {
            v67 = *v66;
            if (v67 != nullptr) {
              if ((v57 & v63) == 0) {
                while (1) {
                  v69 = v67[1];
                  if (v69 == v58) {
                    if (*((_DWORD*)v67 + 4) == v58) {
                      goto LABEL_206;
                    }
                  }
                  else if ((v69 & v63) != v64) {
                    goto LABEL_87;
                  }
                  v67 = (__int64*)*v67;
                  if (v67 == nullptr) {
                    goto LABEL_87;
                  }
                }
              }
              while (1) {
                v68 = v67[1];
                if (v68 == v58) {
                  if (*((_DWORD*)v67 + 4) == v58) {
                    goto LABEL_206;
                  }
                }
                else {
                  if (v68 >= v57) {
                    v68 %= v57;
                  }
                  if (v68 != v64) {
                    goto LABEL_87;
                  }
                }
                v67 = (__int64*)*v67;
                if (v67 == nullptr) {
                  goto LABEL_87;
                }
              }
            }
          }
        LABEL_104:
          if (v62 > 1) {
            v23 = v58;
            if (v57 <= v58) {
              v23 = v58 % v57;
            }
          }
          else {
            v23 = (v57 - 1) & v58;
          }
          v70 = *(__int64***)(*a1 + 8 * v23);
          if (v70 != nullptr) {
            v71 = *v70;
            if (v71 != nullptr) {
              if (v62 < 2) {
                while (1) {
                  v73 = v71[1];
                  if (v73 == v58) {
                    if (*((_DWORD*)v71 + 4) == v58) {
                      goto LABEL_206;
                    }
                  }
                  else if ((v73 & (v57 - 1)) != v23) {
                    goto LABEL_129;
                  }
                  v71 = (__int64*)*v71;
                  if (v71 == nullptr) {
                    goto LABEL_129;
                  }
                }
              }
              do {
                v72 = v71[1];
                if (v72 == v58) {
                  if (*((_DWORD*)v71 + 4) == v58) {
                    goto LABEL_206;
                  }
                }
                else {
                  if (v72 >= v57) {
                    v72 %= v57;
                  }
                  if (v72 != v23) {
                    break;
                  }
                }
                v71 = (__int64*)*v71;
              } while (v71 != nullptr);
            }
          }
        }
      LABEL_129:
        v74 = fw_memory_HeapManager_Allocate(*v22, 80, 16, 0);
        v75 = v130_.v130;
        v76 = v130_.v131;
        v77 = *((float*)a1 + 8);
        v78 = v74;
        *(_DWORD*)(v74 + 16) = v58;
        *(_DWORD*)(v74 + 72) = v58;
        *(_QWORD*)v74 = 0;
        *(_QWORD*)(v74 + 8) = v58;
        v130_.v130 = 0;
        v130_.v131 = 0;
        *(_QWORD*)(v74 + 24) = v75;
        *(_QWORD*)(v74 + 32) = v76;
        v79 = (__int64)v130_.v132;
        v130_.v132 = nullptr;
        v80 = v133_.v133;
        v81 = v133_.v134;
        v133_.v133 = 0;
        *(_QWORD*)(v74 + 40) = v79;
        *(_QWORD*)(v74 + 48) = v80;
        v82 = (float)(unsigned __int64)(a1[3] + 1);
        v83 = (__int64)v133_.v135;
        v133_.v134 = 0;
        v133_.v135 = nullptr;
        *(_QWORD*)(v74 + 56) = v81;
        *(_QWORD*)(v74 + 64) = v83;
        if (v57 != 0 && (float)(v77 * (float)v57) >= v82) {
        LABEL_197:
          v110 = *a1;
          v111 = *(__int64**)(*a1 + 8 * v23);
          if (v111 != nullptr) {
            *(_QWORD*)v78 = *v111;
            *v111 = v78;
          }
          else {
            v112 = (_QWORD*)*v126;
            *v126 = v78;
            *(_QWORD*)v78 = v112;
            *(_QWORD*)(v110 + 8 * v23) = v126;
            if (*(_QWORD*)v78 != 0) {
              v113 = *(_QWORD*)(*(_QWORD*)v78 + 8LL);
              if ((v57 & (v57 - 1)) != 0) {
                if (v113 >= v57) {
                  v113 %= v57;
                }
              }
              else {
                v113 &= v57 - 1;
              }
              *(_QWORD*)(*a1 + 8 * v113) = v78;
            }
          }
          ++a1[3];
          v22 = (__int64*)fw_memory_g_heap_manager_ptr;
          v50 = v133_.v133 & 1;
        LABEL_206:
          v21 = v127;
          v23 = 56;
          if (v50 != 0 && v133_.v135 != nullptr) {
            if (*(_QWORD*)(*v22 + 200) != 0) {
              v114 = 128;
            }
            else {
              v114 = 56;
            }
            nn_mem_StandardAllocator_Free(*v22 + v114, (__int64)v133_.v135);
          }
          if ((v130_.v130 & 1) != 0 && v130_.v132 != nullptr) {
            if (*(_QWORD*)(*v22 + 200) != 0) {
              v115 = 128;
            }
            else {
              v115 = 56;
            }
            nn_mem_StandardAllocator_Free(*v22 + v115, (__int64)v130_.v132);
          }
          goto LABEL_218;
        }
        v84 = v82 / v77;
        v85 = (v57 & (v57 - 1)) != 0;
        if (v57 < 3) {
          v85 = true;
        }
        v86 = v85 | (2 * v57);
        v87 = vcvtps_u64_f32(v84);
        if (v86 <= v87) {
          primeEm = v87;
        }
        else {
          primeEm = v86;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = std___1___next_prime(primeEm);
        }
        v89 = a1[1];
        if (primeEm <= v89) {
          if (primeEm < v89) {
            v95 = vcvtps_u64_f32((float)(unsigned __int64)a1[3] /
                                 *((float*)a1 + 8));
            if (v89 < 3 || (v89 & (v89 - 1)) != 0) {
              v95 = std___1___next_prime(v95);
            }
            else {
              v96 = 1LL << -(char)__clz(v95 - 1);
              if (v95 >= 2) {
                v95 = v96;
              }
            }
            if (primeEm <= v95) {
              primeEm = v95;
            }
            if (primeEm < v89) {
              if (primeEm != 0) {
                goto LABEL_141;
              }
              v108 = *a1;
              *a1 = 0;
              if (v108 != 0) {
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v109 = 128;
                }
                else {
                  v109 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, v108);
              }
              a1[1] = 0;
            }
          }
          goto LABEL_192;
        }
      LABEL_141:
        if (primeEm >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v90 = fw_memory_g_heap_manager_ptr;
        v91 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * primeEm, 16, 0);
        v92 = *a1;
        *a1 = v91;
        if (v92 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v90 + 200LL) != 0) {
            v93 = 128;
          }
          else {
            v93 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v90 + v93, v92);
        }
        a1[1] = primeEm;
        if (primeEm >= 8) {
          v94 = 0;
          do {
            *(_QWORD*)(*a1 + 8 * v94) = 0;
            *(_QWORD*)(*a1 + 8 * v94 + 8) = 0;
            *(_QWORD*)(*a1 + 8 * v94 + 16) = 0;
            *(_QWORD*)(*a1 + 8 * v94 + 24) = 0;
            *(_QWORD*)(*a1 + 8 * v94 + 32) = 0;
            *(_QWORD*)(*a1 + 8 * v94 + 40) = 0;
            *(_QWORD*)(*a1 + 8 * v94 + 48) = 0;
            v97 = *a1 + 8 * v94;
            v94 += 8;
            *(_QWORD*)(v97 + 56) = 0;
          } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v94);
        }
        else {
          v94 = 0;
        }
        v98 = primeEm & 7;
        if ((primeEm & 7) != 0) {
          v99 = 8 * v94;
          do {
            --v98;
            *(_QWORD*)(*a1 + v99) = 0;
            v99 += 8;
          } while (v98 != 0);
        }
        v100 = (_QWORD*)*v126;
        if (*v126 == 0) {
          goto LABEL_192;
        }
        v101 = v100[1];
        v102 = primeEm - 1;
        if ((primeEm & (primeEm - 1)) == 0) {
          v105 = v101 & v102;
          *(_QWORD*)(*a1 + 8 * v105) = v126;
          while (1) {
            v106 = (_QWORD*)*v100;
            if (*v100 == 0) {
              break;
            }
            v107 = v106[1] & v102;
            if (v107 == v105) {
              v100 = (_QWORD*)*v100;
            }
            else if (*(_QWORD*)(*a1 + 8 * v107) != 0) {
              *v100 = *v106;
              *v106 = **(_QWORD**)(*a1 + 8 * v107);
              **(_QWORD**)(*a1 + 8 * v107) = v106;
            }
            else {
              *(_QWORD*)(*a1 + 8 * v107) = v100;
              v100 = v106;
              v105 = v107;
            }
          }
          goto LABEL_192;
        }
        if (v101 >= primeEm) {
          v101 %= primeEm;
        }
        *(_QWORD*)(*a1 + 8 * v101) = v126;
        v103 = (_QWORD*)*v100;
        if (*v100 == 0) {
        LABEL_192:
          v57 = a1[1];
          if ((v57 & (v57 - 1)) != 0) {
            if (v57 <= v58) {
              v23 = v58 % v57;
            }
            else {
              v23 = v58;
            }
          }
          else {
            v23 = (v57 - 1) & v58;
          }
          goto LABEL_197;
        }
        while (2) {
          v104 = v103[1];
          if (v104 >= primeEm) {
            v104 %= primeEm;
          }
          if (v104 != v101) {
            if (*(_QWORD*)(*a1 + 8 * v104) == 0) {
              *(_QWORD*)(*a1 + 8 * v104) = v100;
            LABEL_168:
              v100 = v103;
              v103 = (_QWORD*)*v103;
              v101 = v104;
              if (v103 == nullptr) {
                goto LABEL_192;
              }
              continue;
            }
            *v100 = *v103;
            *v103 = **(_QWORD**)(*a1 + 8 * v104);
            **(_QWORD**)(*a1 + 8 * v104) = v103;
            v103 = v100;
          }
          break;
        }
        v104 = v101;
        goto LABEL_168;
      }
    LABEL_218:
      if ((v137_.v137 & 1) != 0 && v137_.v139 != nullptr) {
        if (*(_QWORD*)(*v22 + 200) != 0) {
          v116 = 128;
        }
        else {
          v116 = 56;
        }
        nn_mem_StandardAllocator_Free(*v22 + v116, (__int64)v137_.v139);
      }
      if ((v140_.v140 & 1) != 0 && v140_.v142 != nullptr) {
        if (*(_QWORD*)(*v22 + 200) != 0) {
          v117 = 128;
        }
        else {
          v117 = 56;
        }
        nn_mem_StandardAllocator_Free(*v22 + v117, (__int64)v140_.v142);
      }
      v20 += 3;
      if (v20 == v21) {
        v20 = v143_.v143;
        break;
      }
    }
  }
  if (v20 != nullptr) {
    v118 = v143_.v144;
    if (v20 == v143_.v144) {
      goto LABEL_242;
    }
    v119 = v143_.v144;
    do {
      v120 = *((_BYTE*)v119 - 24);
      v119 -= 3;
      if ((v120 & 1) != 0) {
        v121 = *(v118 - 1);
        if (v121 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v122 = 128;
          }
          else {
            v122 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v122, v121);
        }
      }
      v118 = v119;
    } while (v119 != v20);
    v143_.v144 = v20;
    v22 = (__int64*)fw_memory_g_heap_manager_ptr;
    v20 = v143_.v143;
    if (v143_.v143 != nullptr) {
    LABEL_242:
      v123 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v123 = 56;
      }
      nn_mem_StandardAllocator_Free(*v22 + v123, (__int64)v20);
    }
  }
}

__int64 GameHr_10f5420(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _BYTE* v2;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  _BYTE* v20;
  bool v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  float v50;
  __int64 v51;
  __int64 v52;
  unsigned __int8 explicit;
  int* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  unsigned int v59;
  _QWORD v60[2];

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_BYTE**)(a2 + 64);
  if (v2 == nullptr || *v2 == 0) {
    v5 = *(_BYTE**)(a2 + 72);
    if (v5 == nullptr || *v5 == 0) {
      return 0;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22365f0) != 0) {
    GameData_22365e8 = wld_Crc32(0, "AuraModule", 0xAu);
    __cxa_guard_release((__int64)&GameData_22365f0);
  }
  v6 = *(_QWORD*)(a1 + 512);
  v7 = v6;
  do {
    if (v7 == *(_QWORD*)(a1 + 504)) {
      goto LABEL_12;
    }
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
  } while (v8 != GameData_22365e8);
  if (*(_QWORD*)(a1 + 512) == v6 || (v9 = *(_QWORD*)(v6 + 8)) == 0) {
  LABEL_12:
    nn_os_LockMutex((__int64)GameData_212df28);
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         136, 16, 0);
    *(_BYTE*)(v11 + 16) = 0;
    *(_DWORD*)(v11 + 24) = 0;
    v9 = v11;
    *(_QWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_QWORD*)(v11 + 48) = 0;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_QWORD*)(v11 + 80) = 0;
    *(_QWORD*)(v11 + 88) = 0;
    *(_QWORD*)(v11 + 96) = 0;
    *(_QWORD*)(v11 + 112) = 0;
    *(_QWORD*)(v11 + 120) = 0;
    *(_QWORD*)(v11 + 128) = 0;
    *(_DWORD*)(v11 + 17) = 33686018;
    *(_QWORD*)v11 = game_character_AuraModule_vtable;
    *(_QWORD*)(v11 + 8) = a1;
    *(_DWORD*)(v11 + 64) = 1065353216;
    *(_DWORD*)(v11 + 104) = 1065353216;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22365f0) != 0) {
      GameData_22365e8 = wld_Crc32(0, "AuraModule", 0xAu);
      __cxa_guard_release((__int64)&GameData_22365f0);
    }
    v12 = *(_QWORD*)(a1 + 504);
    v13 = *(_QWORD*)(a1 + 512);
    v14 = v13;
    LODWORD(v60[0]) = GameData_22365e8;
    v60[1] = v9;
    while (v14 != v12) {
      v15 = *(_DWORD*)(v14 - 16);
      v14 -= 16;
      if (v15 == GameData_22365e8) {
        if ((*(_BYTE*)(v9 + 16) & 1) != 0) {
          goto LABEL_32;
        }
        goto LABEL_26;
      }
    }
    if (v12 == v13 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v12) <= 0x6F) {
      v17 = fw_memory_HeapManager_Allocate(*v10, 112, 16, 0);
      *(_QWORD*)(a1 + 504) = v17;
      *(_QWORD*)(a1 + 512) = v17;
      *(_QWORD*)(a1 + 520) = v17 + 112;
      if (v13 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v18, v12);
      }
    }
    GameRoutine_98f140_alt1((__int64*)(a1 + 504), v60);
    if ((*(_BYTE*)(v9 + 16) & 1) == 0) {
    LABEL_26:
      *(_BYTE*)(v9 + 16) = 1;
      *(_BYTE*)(v9 + 17) &= ~2u;
      *(_BYTE*)(v9 + 18) &= ~2u;
      *(_BYTE*)(v9 + 19) &= ~2u;
      *(_BYTE*)(v9 + 20) &= ~2u;
      v19 = *(_BYTE**)(v9 + 8);
      v19[632] = 0;
      v19[664] = 0;
      v19[696] = 0;
      v19[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
      v20 = *(_BYTE**)(v9 + 8);
      v21 = v20[300] == 3 && v20[301] == 3;
      if (v21 || v20[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 72LL))(v9);
      }
    }
  LABEL_32:
    v22 = *(__int64**)(a1 + 536);
    v23 = *(_QWORD*)(a1 + 544);
    if ((unsigned __int64)v22 >= v23) {
      v25 = *(_QWORD*)(a1 + 528);
      v26 = (char*)v22 - v25;
      v27 = ((__int64)v22 - v25) >> 3;
      v28 = v27 + 1;
      if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
        goto LABEL_85;
      }
      v29 = v23 - v25;
      if (v29 >> 2 > v28) {
        v28 = v29 >> 2;
      }
      if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
        v30 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v30 = v28;
      }
      if (v30 != 0) {
        if (v30 >> 61 != 0) {
          goto LABEL_86;
        }
        v31 = fw_memory_HeapManager_Allocate(*v10, 8 * v30, 16, 0);
      }
      else {
        v31 = 0;
      }
      v32 = v31 + 8 * v30;
      v33 = (unsigned __int64)v22 - v25;
      v34 = (__int64)&v26[v31 + -8 * v27];
      *(_QWORD*)&v26[v31] = v9;
      v24 = (__int64)&v26[v31 + 8];
      memcpy(v34, v25, v33);
      *(_QWORD*)(a1 + 528) = v34;
      *(_QWORD*)(a1 + 536) = v24;
      *(_QWORD*)(a1 + 544) = v32;
      if (v25 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v35, v25);
      }
    }
    else {
      *v22 = v9;
      v24 = (__int64)(v22 + 1);
    }
    *(_QWORD*)(a1 + 536) = v24;
    v36 = *(__int64**)(a1 + 560);
    v37 = *(_QWORD*)(a1 + 568);
    if ((unsigned __int64)v36 < v37) {
      *v36 = v9;
      v38 = (__int64)(v36 + 1);
    LABEL_64:
      *(_QWORD*)(a1 + 560) = v38;
      GameRoutine_a8c0c0_alt1(a1);
      *(_BYTE*)(a1 + 576) = 1;
      nn_os_UnlockMutex((__int64)GameData_212df28);
      goto LABEL_65;
    }
    v39 = *(_QWORD*)(a1 + 552);
    v40 = (char*)v36 - v39;
    v41 = ((__int64)v36 - v39) >> 3;
    v42 = v41 + 1;
    if ((unsigned __int64)(v41 + 1) >> 61 == 0) {
      v43 = v37 - v39;
      if (v43 >> 2 > v42) {
        v42 = v43 >> 2;
      }
      if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
        v44 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v44 = v42;
      }
      if (v44 == 0) {
        v45 = 0;
      LABEL_60:
        v46 = v45 + 8 * v44;
        v47 = (unsigned __int64)v36 - v39;
        v48 = (__int64)&v40[v45 + -8 * v41];
        *(_QWORD*)&v40[v45] = v9;
        v38 = (__int64)&v40[v45 + 8];
        memcpy(v48, v39, v47);
        *(_QWORD*)(a1 + 552) = v48;
        *(_QWORD*)(a1 + 560) = v38;
        *(_QWORD*)(a1 + 568) = v46;
        if (v39 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v49, v39);
        }
        goto LABEL_64;
      }
      if (v44 >> 61 == 0) {
        v45 = fw_memory_HeapManager_Allocate(*v10, 8 * v44, 16, 0);
        goto LABEL_60;
      }
    LABEL_86:
      GameRoutine_60a210_alt1();
    }
  LABEL_85:
    GameRoutine_98f290_alt1();
  }
LABEL_65:
  v50 = *(float*)(a2 + 120);
  v51 = a1;
  if (v50 <= 0x0.0p+0f) {
    v50 = 0x1.0000000000000p+0f;
  }
  *(float*)(v9 + 24) = v50;
  do {
    v52 = v51;
    v51 = *(_QWORD*)(v51 + 736);
  } while (v51 != 0);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire);
  v54 = GameData_212deb0;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212deb8) != 0) {
    *v54 = wld_Crc32(0, "CharacterBuilder", 0x10u);
    __cxa_guard_release((__int64)GameData_212deb8);
  }
  v55 = *(_QWORD*)(v52 + 512);
  v56 = v55;
  while (v56 != *(_QWORD*)(v52 + 504)) {
    v57 = *(_DWORD*)(v56 - 16);
    v56 -= 16;
    v55 -= 16;
    if (v57 == *v54) {
      if (*(_QWORD*)(v52 + 512) != v55) {
        v58 = *(_QWORD*)(v55 + 8);
        if (v58 != 0) {
          v59 = *(_DWORD*)(v58 + 340);
          goto LABEL_77;
        }
      }
      break;
    }
  }
  v59 = 0;
LABEL_77:
  GameHr_10f4080_alt1((__int64*)(v9 + 32), a1, *(const char**)(a2 + 64), v59);
  GameHr_10f4080_alt1((__int64*)(v9 + 72), a1, *(const char**)(a2 + 72), v59);
  return 1;
}

void GameHr_111c920(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 (**v11)(void);
  __int64 (**v12)(void);
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  bool v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 (**v32)(void);
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _BOOL4 v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  const char* v44;
  int v45;
  struct {
    __int64 v46;
    unsigned __int64 v47;
    char* v48;
    __int64* v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    int v53;
    unsigned __int8 v54;
    char gap85_[3];
    __int64 v55;
    __int64 v56;
  } v46_;
  struct {
    _QWORD v57[2];
    char v58;
    char gap121_[3];
    int v59;
  } v57_;
  int v60;
  __int64 v61;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v2 = *(_QWORD*)(a1 + 24);
  if ((GameRoutine_111c720(*(unsigned __int8**)a1) & 1) == 0) {
    v44 = *(const char**)(**(_QWORD**)(a1 + 8) + 8LL);
    if (v44 == nullptr) {
      return;
    }
    v9 = 0;
    v10 = 81936;
    v11 = (__int64 (**)(void))GameData_2130100[0],
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v12 = (__int64 (**)(void))GameData_2130108[0],
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    while (1) {
      v13 = v2 + v9;
      ++*(_DWORD*)(v2 + v9 + 168);
      if (v10 == 81936) {
        v10 = 81936;
        if (*(_QWORD*)(v13 + 144) != 0) {
          v14 = *(_QWORD*)(v2 + v9 + 152);
          v10 = 81936;
          if (v14 != 0) {
            v10 = 81936;
            if ((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14) != 0) {
              v10 = 81936;
              if ((*v11)() != 0) {
                v10 = 81936;
                if ((*v12)() != 0) {
                  v10 = 81936;
                  if (*(_QWORD*)(v2 + v9 + 80) != 0) {
                    break;
                  }
                }
              }
            }
          }
        }
      }
    LABEL_12:
      v9 += 160;
      if (v9 == 81920) {
        goto LABEL_95;
      }
    }
    v15 = strlen(v44),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    v16 = v15;
    if (v15 >= 0x17) {
      if ((v15 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v15 | 7) + 1;
      }
      v17 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v46_.v47 = v16;
      v46_.v48 = v17;
      v46_.v46 = v18 | 1;
    }
    else {
      v17 = (char*)&v46_.v46 + 1;
      LOBYTE(v46_.v46) = 2 * v15;
      if (v15 == 0) {
      LABEL_29:
        v17[v16] = 0;
        if ((v46_.v46 & 1) != 0) {
          v19 = v46_.v47;
        }
        else {
          v19 = (unsigned __int64)(unsigned __int8)v46_.v46 >> 1;
        }
        if (v19 != 0) {
          v20 = *(unsigned __int8*)(v13 + 16);
          v21 = v2 + v9;
          v22 = *(_QWORD*)(v2 + v9 + 24);
          if ((v20 & 1) == 0) {
            v22 = v20 >> 1;
          }
          if (v22 != v19) {
            v28 = 0;
            if ((v46_.v46 & 1) == 0) {
              goto LABEL_54;
            }
            goto LABEL_50;
          }
          v23 = *(_QWORD*)(v21 + 32);
          v24 = v21 + 17;
          if ((v20 & 1) != 0) {
            v25 = v23;
          }
          else {
            v25 = v24;
          }
          if ((v46_.v46 & 1) != 0) {
            v26 = v46_.v48;
          }
          else {
            v26 = (char*)&v46_.v46 + 1;
          }
          v27 = memcmp(v25, (__int64)v26, v19) == 0,
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        else {
          v27 = *(_QWORD*)(v2 + v9 + 80) == 0;
        }
        v28 = v27;
        if ((v46_.v46 & 1) == 0) {
        LABEL_54:
          v12 = (__int64 (**)(void))GameData_2130108[0],
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v10 = 81936;
          if (v28 != 0) {
            v10 = v9 + 16;
            *(_DWORD*)(v13 + 168) = 0;
          }
          goto LABEL_12;
        }
      LABEL_50:
        if (v46_.v48 != nullptr) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v46_.v48),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        goto LABEL_54;
      }
    }
    memcpy((__int64)v17, (__int64)v44, v16),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_29;
  }
  v46_.v46 = 0;
  v46_.v47 = 0;
  v46_.v50 = 0;
  v46_.v51 = 0;
  v46_.v52 = 0;
  v46_.v53 = 0;
  v46_.v54 = 0;
  v46_.v55 = 0;
  v46_.v56 = 0;
  v57_.v57[0] = 0;
  v57_.v57[1] = 0;
  v57_.v58 = 0;
  v46_.v48 = nullptr;
  v46_.v49 = GameData_212dea8 + 2;
  v57_.v59 = 1;
  v3 = game_GetHero(9u),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v3 == 0) {
    goto LABEL_58;
  }
  for (i = v3; i != 0; i = *(_QWORD*)(i + 624)) {
    v5 = i;
  }
  if (*(_BYTE*)(v5 + 441) != 3) {
    goto LABEL_58;
  }
  v6 = *(_QWORD*)(v3 + 624);
  if (v6 == 0) {
    v6 = v3;
  }
  v61 = v6;
  v60 = 241;
  v7 = game_UnitPool_Find_6ead60(&v61, &v60),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v7 == nullptr) {
    v30 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v30 + 144) != 0) {
      v8 = v30 + 112;
      goto LABEL_59;
    }
  LABEL_58:
    v8 = GameData_212cf70[0];
    goto LABEL_59;
  }
  v8 = (__int64)(v7 + 263);
LABEL_59:
  TaskPassNodes_bbf020((__int64)&v46_.v46, v8, **(_QWORD**)(a1 + 8)),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v10 = 81936;
  v57_.v59 = **(_DWORD**)(a1 + 16);
  if (v46_.v55 != 0) {
    v31 = 0;
    v32 = (__int64 (**)(void))GameData_2130100[0],
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v10 = 81936;
    do {
      v33 = v2 + v31;
      ++*(_DWORD*)(v2 + v31 + 168);
      if (v10 == 81936) {
        v10 = 81936;
        if (*(_QWORD*)(v33 + 144) != 0) {
          v34 = *(_QWORD*)(v2 + v31 + 152);
          v10 = 81936;
          if (v34 != 0) {
            v10 = 81936;
            if ((*(__int64 (**)(__int64))(*(_QWORD*)v34 + 40LL))(v34) != 0) {
              v10 = 81936;
              if ((*v32)() != 0) {
                v10 = 81936;
                if ((*(__int64 (**)(void))GameData_2130108[0])() != 0) {
                  v35 = *(_QWORD*)(v2 + v31 + 80);
                  v10 = 81936;
                  if (v35 != 0) {
                    v36 = v46_.v55;
                    v10 = 81936;
                    if (v46_.v55 != 0) {
                      v37 = v2 + v31;
                      if (*(_BYTE*)(v2 + v31 + 72) != 0) {
                        v38 = *(unsigned __int8*)(v2 + v31 + 72) ==
                                  (unsigned __int8)v46_.v53 &&
                              *(unsigned __int8*)(v2 + v31 + 74) ==
                                  BYTE2(v46_.v53) &&
                              *(unsigned __int8*)(v2 + v31 + 76) == v46_.v54 &&
                              *(unsigned __int8*)(v2 + v31 + 75) ==
                                  HIBYTE(v46_.v53);
                        v10 = 81936;
                        if (v38) {
                          v10 = 81936;
                          if (v35 == v46_.v55) {
                            v10 = 81936;
                            if (*(_QWORD*)(v2 + v31 + 88) == 0) {
                              v39 = *(_DWORD*)(v2 + v31 + 116);
                              v40 = v57_.v59;
                              goto LABEL_83;
                            }
                          }
                        }
                      }
                      else {
                        v45 = *(unsigned __int8*)(v37 + 96);
                        v43 = LOBYTE(v57_.v57[0]);
                        v10 = 81936;
                        if (GameRoutine_191eea0_alt1(
                                (_QWORD*)(v37 + 97),
                                (_QWORD*)((char*)v57_.v57 + 1))) {
                          v10 = 81936;
                          if (v36 == v35) {
                            v39 = v45;
                            v40 = v43;
                          LABEL_83:
                            v10 = 81936;
                            if (v39 == v40) {
                              v10 = v31 + 16;
                              *(_DWORD*)(v33 + 168) = 0;
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
      }
      v31 += 160;
    } while (v31 != 81920);
  }
  v46_.v49 = GameData_212dea8 + 2;
  if ((v46_.v50 & 1) != 0 && v46_.v52 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  v46_.v52),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  if ((v46_.v46 & 1) != 0 && v46_.v48 != nullptr) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                                  (__int64)v46_.v48),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
LABEL_95:
  if (v10 != 81936) {
    **(_QWORD**)(a1 + 32) = v2 + v10 + 104;
  }
}

float GameHr_111e8d0(float* a1, float a2, float a3)
{
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
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
  float v35;
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
  float result;

  v3 = a1[16];
  v4 = a1[17];
  v5 = a1[8];
  v6 = a1[9];
  v7 = v3 + v5;
  v8 = v3 + v6;
  v9 = fminf(v5 - v3, 500.0f);
  v10 = fmaxf(v5 - v3, -500.0f);
  v11 = fminf(v6 - v3, 500.0f);
  v12 = fmaxf(v6 - v3, -500.0f);
  v13 = a2 + (float)(v5 - v3);
  v14 = a3 + (float)(v6 - v3);
  if (v9 > (float)(v3 + v5)) {
    v9 = v3 + v5;
  }
  if (v10 < v7) {
    v10 = v3 + v5;
  }
  if (v11 <= v8) {
    v15 = v11;
  }
  else {
    v15 = v3 + v6;
  }
  v16 = a1[12];
  v17 = a1[13];
  if (v12 < v8) {
    v12 = v8;
  }
  v18 = v16 - v4;
  v19 = v17 - v4;
  v20 = v4 + v16;
  v21 = v4 + v17;
  if (v9 > v18) {
    v9 = v18;
  }
  if (v10 < v18) {
    v10 = v18;
  }
  if (v15 > v19) {
    v15 = v19;
  }
  if (v12 < v19) {
    v12 = v19;
  }
  if (v9 > v20) {
    v9 = v20;
  }
  if (v10 < v20) {
    v10 = v20;
  }
  if (v15 > v21) {
    v15 = v21;
  }
  if (v12 < v21) {
    v12 = v21;
  }
  v22 = a3 + v21;
  if (v9 > v13) {
    v9 = v13;
  }
  if (v10 >= v13) {
    v13 = v10;
  }
  if (v15 <= v14) {
    v23 = v15;
  }
  else {
    v23 = v14;
  }
  if (v12 >= v14) {
    v14 = v12;
  }
  v24 = a2 + v7;
  v25 = a3 + v8;
  if (v9 > v24) {
    v9 = v24;
  }
  if (v13 < v24) {
    v13 = v24;
  }
  if (v23 <= v25) {
    v26 = v23;
  }
  else {
    v26 = a3 + v8;
  }
  v27 = a2 + v18;
  v28 = a2 + v20;
  if (v14 < v25) {
    v14 = a3 + v8;
  }
  v29 = a3 + v19;
  if (v9 > v27) {
    v9 = v27;
  }
  if (v13 < v27) {
    v13 = v27;
  }
  if (v26 <= v29) {
    v30 = v26;
  }
  else {
    v30 = a3 + v19;
  }
  if (v14 >= v29) {
    v29 = v14;
  }
  if (v9 <= v28) {
    v31 = v9;
  }
  else {
    v31 = v28;
  }
  v32 = a1[4];
  if (v13 >= v28) {
    v33 = v13;
  }
  else {
    v33 = v28;
  }
  if (v30 <= v22) {
    v34 = v30;
  }
  else {
    v34 = v22;
  }
  if (v29 >= v22) {
    v35 = v29;
  }
  else {
    v35 = v22;
  }
  if (v31 >= v32) {
    v37 = a1[6];
    v36 = 0.0f;
    if (v33 > v37) {
      v36 = v37 - v33;
    }
  }
  else {
    v36 = v32 - v31;
  }
  v38 = a1[5];
  if (v34 >= v38) {
    v40 = a1[7];
    v39 = 0.0f;
    if (v35 > v40) {
      v39 = v40 - v35;
    }
  }
  else {
    v39 = v38 - v34;
  }
  v41 = v33 + v36;
  v42 = v35 + v39;
  v43 = a1[6];
  if (v41 <= v43) {
    v45 = v31 + v36;
    if (v45 >= v32) {
      goto LABEL_78;
    }
    v44 = v32 - v45;
  }
  else {
    v44 = v43 - v41;
  }
  v36 = v36 + v44;
LABEL_78:
  v46 = a1[7];
  if (v42 > v46) {
    v47 = v46 - v42;
  LABEL_82:
    v39 = v39 + v47;
    goto LABEL_83;
  }
  v48 = v34 + v39;
  if (v48 < v38) {
    v47 = v38 - v48;
    goto LABEL_82;
  }
LABEL_83:
  a1[8] = v5 + v36;
  a1[9] = v6 + v39;
  result = v16 + v36;
  a1[12] = result;
  a1[13] = v17 + v39;
  return result;
}

__int64 GameHr_1135e80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v32;
  void* v33;
  __int64 v34;
  unsigned int v35;
  unsigned __int64 v36;
  unsigned int v37;
  int v38;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  char* v56;
  unsigned int v57;
  __int64 v58;
  char v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  float v64;
  char* v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  _QWORD* v71;
  _QWORD* v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  _BYTE* v78;
  int v79;
  _BYTE* v80;
  int v81;
  int v82;
  __int64* v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  __int64 v92;
  int v93;
  int v94;
  __int64* v95;
  __int64 v96;
  long double v97;
  unsigned __int64 v98;
  char* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  int v103;
  unsigned int v105;
  char* v106;
  unsigned __int64 v107;
  char* v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64* v111;
  unsigned __int64 v112;
  __int64* v113;
  unsigned int v114;
  __int64* v115;
  long double v116;
  __int64 v117;
  char* v118;
  char* v119;
  char* v120;
  __int64 v121;
  char v122;
  __int64 v123;
  char* v124;
  unsigned __int64 v125;
  char* v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64* v129;
  char* v130;
  int v131;
  char v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64* v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  char v145;
  __int64 v146;
  __int64 v147;
  unsigned __int8* v148;
  unsigned int v149;
  int v150;
  __int64 v152;
  int v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  int v158;
  int v159;
  __int64 v160;
  __int64 v161;
  int v162;
  float v163;
  int v164;
  int v165;
  __int64 v166;
  __int64 v167;
  struct {
    __int64 v168;
    __int64 v169;
    char* v170;
  } v168_;
  __int64* v171;
  _QWORD v172[3];
  __int64 v173;
  unsigned __int64 v174;
  char* v175;
  __int64 v176;
  __int64 v177;

  if ((unsigned int)(*(_DWORD*)(result + 200) - 1) < 2) {
    v3 = *(unsigned __int8**)(result + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    return result;
  }
  v176 = v1;
  v177 = v2;
  v8 = result;
  v9 = *(_DWORD*)(result + 1296);
  if ((*(_BYTE*)(result + 1096) & 1) != 0) {
    v10 = *(_QWORD*)(result + 1112);
  }
  else {
    v10 = result + 1097;
  }
  if (v9 == 3) {
    *(_DWORD*)(result + 1296) = 0;
    v20 = GameData_21ee240;
    v21 = GameData_2262910;
    if (GameData_21ee240 == 0) {
      goto LABEL_41;
    }
    goto LABEL_35;
  }
  if (v9 != 2) {
    if (v9 != 1) {
      goto LABEL_180;
    }
    if (*GameData_212d460[0] != 0 &&
        *(_BYTE*)(*GameData_212d460[0] + 206) == 1) {
      v11 = *(__int64**)(result + 1304);
      v12 = *(__int64**)(result + 1312);
      if (v11 != v12) {
        v13 = GameData_212c738[0];
        v14 = GameData_212bf68;
        while (1) {
          if ((*(_BYTE*)v11 & 1) != 0) {
            GameRoutine_60a270(&v168_.v168, v11[2], v11[1]);
          }
          else {
            v15 = *v11;
            v16 = (char*)v11[2];
            v168_.v169 = v11[1];
            v168_.v170 = v16;
            v168_.v168 = v15;
          }
          if ((v168_.v168 & 1) != 0) {
            v17 = v168_.v170;
          }
          else {
            v17 = (char*)&v168_.v168 + 1;
          }
          result = GameRoutine_a51280(*v13, v17);
          if ((v168_.v168 & 1) != 0 && v168_.v170 != nullptr) {
            v18 = result;
            if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
              v19 = 128;
            }
            else {
              v19 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)v14 + v19, (_QWORD)(v168_.v170));
            result = v18;
          }
          if ((unsigned int)(result - 9) <= 3) {
            break;
          }
          v11 += 3;
          if (v11 == v12) {
            goto LABEL_70;
          }
        }
        if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) != 0) {
          *(_DWORD*)(GameData_21ee240 + 156) |= 2u;
        }
      }
    }
  LABEL_70:
    *(_DWORD*)(v8 + 1296) = 2;
  }
  v20 = GameData_21ee240;
  if (GameData_21ee240 != 0) {
    v37 = *(unsigned __int8*)(GameData_21ee240 + 152);
    v5 = v37 > 4;
    v38 = (1 << v37) & 0x16;
    if (!v5 && v38 != 0) {
      return result;
    }
    *(_DWORD*)(v8 + 1296) = 3;
    if ((unsigned int)*(unsigned __int8*)(v20 + 152) - 1 <= 2) {
      v40 = *(_DWORD*)(v20 + 156);
      v41 = (v40 & 8) != 0 ? 2 : 3;
      if ((v41 & v40) == 0) {
        *(_DWORD*)(v8 + 1296) = 0;
        v21 = GameData_2262910;
      LABEL_35:
        if ((unsigned int)*(unsigned __int8*)(v20 + 152) - 1 <= 2) {
          v22 = *(_DWORD*)(v20 + 156);
          v23 = (v22 & 8) != 0 ? 2 : 3;
          if ((v23 & v22) == 0) {
            v21 = 0;
          }
        }
      LABEL_41:
        v24 = *(_QWORD*)(v8 + 1304) + 24LL * v21;
        v25 = GameData_212c738[0];
        if ((*(_BYTE*)v24 & 1) != 0) {
          v26 = *(_QWORD*)(v24 + 16);
        }
        else {
          v26 = v24 + 1;
        }
        v27 = GameRoutine_a51280(*GameData_212c738[0], v26);
        v28 = v27 - 5;
        if ((unsigned int)(v27 - 5) > 3 &&
            (v28 = v27 - 9, (unsigned int)(v27 - 9) > 3)) {
          *(_DWORD*)(v8 + 1300) = 0;
        }
        else {
          *(_DWORD*)(v8 + 1300) = v28;
        }
        if (GameData_21ee240 != 0 &&
            (unsigned int)*(unsigned __int8*)(GameData_21ee240 + 152) - 1 <=
                2) {
          v29 = *(_DWORD*)(GameData_21ee240 + 156);
          if ((v29 & 8) != 0) {
            v30 = 2;
          }
          else {
            v30 = 3;
          }
          if ((v30 & v29) == 0 || GameData_21fa5e0 != 0) {
            goto LABEL_170;
          }
        }
        else if (GameData_21fa5e0 != 0) {
        LABEL_170:
          GameRoutine_1132180(v8, v26);
          v87 = *(_QWORD*)(v8 + 1312);
          v88 = *(_QWORD*)(v8 + 1304);
          if (v88 != v87) {
            v89 = *(_QWORD*)(v8 + 1312);
            v90 = GameData_212bf68;
            do {
              v91 = *(_BYTE*)(v89 - 24);
              v89 -= 24;
              if ((v91 & 1) != 0 && *(_QWORD*)(v87 - 8) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v90 + 200LL) != 0) {
                  v92 = 128;
                }
                else {
                  v92 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)v90 + v92,
                                    (_QWORD)(*(_QWORD*)(v87 - 8)));
              }
              v87 = v89;
            } while (v89 != v88);
          }
          *(_QWORD*)(v8 + 1312) = v88;
        LABEL_180:
          LOWORD(v173) = 0;
          if (*GameData_212d460[0] != 0 &&
                  (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) != 0 ||
              GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
              (((v93 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0
                   ? (v94 = 2)
                   : (v94 = 3),
               (v94 & v93) != 0)) {
            v95 = GameData_212c738[0];
            if ((*(_BYTE*)(v8 + 1144) & 1) != 0) {
              v96 = *(_QWORD*)(v8 + 1160);
            }
            else {
              v96 = v8 + 1145;
            }
            Manager_a4fd20((void*)PSEUDO_X8_VALUE(&v168_),
                           *GameData_212c738[0] + 15176, (const char*)v96,
                           (__int64)"Jump", 0);
            v98 = v168_.v169;
            if ((v168_.v168 & 1) == 0) {
              v98 = (unsigned __int64)(unsigned __int8)v168_.v168 >> 1;
            }
            if (v98 != 0) {
              v99 = (v168_.v168 & 1) != 0 ? v168_.v170 : (char*)&v168_.v168 + 1;
              if ((GameRoutine_a4da40(*v95, v99, v97) & 1) != 0) {
                v100 = (*(_BYTE*)(v8 + 1144) & 1) != 0 ? *(_QWORD*)(v8 + 1160)
                                                       : v8 + 1145;
                v101 = (*(_BYTE*)(v8 + 1120) & 1) != 0 ? *(_QWORD*)(v8 + 1136)
                                                       : v8 + 1121;
                if ((GameRoutine_a51640(*v95, v100, v101) & 1) != 0) {
                  v102 = (*(_BYTE*)(v8 + 1144) & 1) != 0 ? *(_QWORD*)(v8 + 1160)
                                                         : v8 + 1145;
                  v103 = GameRoutine_a51280(*v95, v102);
                  if ((unsigned int)(v103 - 13) <= 3 &&
                      *(_DWORD*)(v8 + 1300) == v103 - 13) {
                    if ((v173 & 1) != 0) {
                      if ((v168_.v168 & 1) != 0) {
                        v106 = v168_.v170;
                      }
                      else {
                        v106 = (char*)&v168_.v168 + 1;
                      }
                      if ((v168_.v168 & 1) != 0) {
                        v107 = v168_.v169;
                      }
                      else {
                        v107 =
                            (unsigned __int64)(unsigned __int8)v168_.v168 >> 1;
                      }
                      GameRoutine_64dde0(&v173, v106, v107);
                    }
                    else if ((v168_.v168 & 1) != 0) {
                      GameRoutine_64df20(&v173, v168_.v170, v168_.v169);
                    }
                    else {
                      v173 = v168_.v168;
                      v174 = v168_.v169;
                      v175 = v168_.v170;
                    }
                    if ((v173 & 1) != 0) {
                      v108 = v175;
                    }
                    else {
                      v108 = (char*)&v173 + 1;
                    }
                    GameRoutine_a4fa80(*v95, v10, v108);
                  }
                }
              }
            }
            if ((v168_.v168 & 1) != 0 && v168_.v170 != nullptr) {
              v109 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v109 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v109,
                                  (_QWORD)(v168_.v170));
            }
            v105 = (unsigned __int8)v173;
          }
          else {
            v105 = 0;
          }
          if ((v105 & 1) != 0) {
            v110 = v174;
          }
          else {
            v110 = v105 >> 1;
          }
          if (v110 == 0) {
            v113 = GameData_212c738[0];
            v114 = *(_DWORD*)(v8 + 1168) + 1;
            while (1) {
              result = GameRoutine_11311f0(v8, v10, v114);
              if ((result & 1) != 0) {
                break;
              }
              v115 = (__int64*)GameRoutine_a4f800(*v113, v10, v114);
              if ((*(_BYTE*)v115 & 1) != 0) {
                GameRoutine_60a270(&v168_.v168, v115[2], v115[1]);
              }
              else {
                v117 = *v115;
                v118 = (char*)v115[2];
                v168_.v169 = v115[1];
                v168_.v170 = v118;
                v168_.v168 = v117;
              }
              if ((v168_.v168 & 1) != 0) {
                v119 = v168_.v170;
              }
              else {
                v119 = (char*)&v168_.v168 + 1;
              }
              if ((GameRoutine_a4da40(*v113, v119, v116) & 1) != 0 &&
                  ((v168_.v168 & 1) != 0 ? (v120 = v168_.v170)
                                         : (v120 = (char*)&v168_.v168 + 1),
                   (*(_BYTE*)(v8 + 1120) & 1) != 0
                       ? (v121 = *(_QWORD*)(v8 + 1136))
                       : (v121 = v8 + 1121),
                   (GameRoutine_a51640(*v113, v120, v121) & 1) != 0)) {
                if ((v173 & 1) != 0) {
                  if ((v168_.v168 & 1) != 0) {
                    v124 = v168_.v170;
                  }
                  else {
                    v124 = (char*)&v168_.v168 + 1;
                  }
                  if ((v168_.v168 & 1) != 0) {
                    v125 = v168_.v169;
                  }
                  else {
                    v125 = (unsigned __int64)(unsigned __int8)v168_.v168 >> 1;
                  }
                  GameRoutine_64dde0(&v173, v124, v125);
                  v122 = 0;
                }
                else if ((v168_.v168 & 1) != 0) {
                  GameRoutine_64df20(&v173, v168_.v170, v168_.v169);
                  v122 = 0;
                }
                else {
                  v122 = 0;
                  v173 = v168_.v168;
                  v174 = v168_.v169;
                  v175 = v168_.v170;
                }
              }
              else {
                ++v114;
                v122 = 1;
              }
              if ((v168_.v168 & 1) != 0 && v168_.v170 != nullptr) {
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
                  v123 = 128;
                }
                else {
                  v123 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v123,
                                    (_QWORD)(v168_.v170));
              }
              if ((v122 & 1) == 0) {
                goto LABEL_239;
              }
            }
            v128 = *(_QWORD*)(v8 + 8);
            if (v128 != 0) {
              while (1) {
                if (*(_BYTE*)v128 == 2) {
                  if (*(_DWORD*)(v128 + 32) == 5) {
                    *(_QWORD*)(v8 + 16) = v128;
                    *(_WORD*)(v8 + 136) &= ~0x80u;
                    goto LABEL_347;
                  }
                }
                else if (*(_BYTE*)v128 == 0) {
                  goto LABEL_347;
                }
                v128 += 64;
              }
            }
            goto LABEL_347;
          }
        LABEL_239:
          v111 = (__int64*)(v8 + 1144);
          if ((__int64*)(v8 + 1144) != &v173) {
            if ((*(_BYTE*)v111 & 1) != 0) {
              if ((v173 & 1) != 0) {
                v126 = v175;
              }
              else {
                v126 = (char*)&v173 + 1;
              }
              if ((v173 & 1) != 0) {
                v127 = v174;
              }
              else {
                v127 = (unsigned __int64)(unsigned __int8)v173 >> 1;
              }
              GameRoutine_64dde0(v111, v126, v127);
            }
            else if ((v173 & 1) != 0) {
              GameRoutine_64df20(v111, v175, v174);
            }
            else {
              v112 = v174;
              *v111 = v173;
              *(_QWORD*)(v8 + 1152) = v112;
              *(_QWORD*)(v8 + 1160) = v175;
            }
          }
          v129 = GameData_212c738[0];
          if ((v173 & 1) != 0) {
            v130 = v175;
          }
          else {
            v130 = (char*)&v173 + 1;
          }
          v131 = GameRoutine_a4fa80(*GameData_212c738[0], v10, v130);
          v132 = *(_BYTE*)(v8 + 1144);
          v133 = *(_QWORD*)(v8 + 1160);
          *(_DWORD*)(v8 + 1168) = v131;
          v134 = v8 + 1145;
          if ((v132 & 1) != 0) {
            v135 = v133;
          }
          else {
            v135 = v8 + 1145;
          }
          result = GameRoutine_a51280(*v129, v135);
          if ((unsigned int)(result - 5) <= 7) {
            v136 = *(__int64**)(v8 + 1312);
            v137 = *(_QWORD*)(v8 + 1320);
            if ((*(_BYTE*)(v8 + 1144) & 1) != 0) {
              v134 = *(_QWORD*)(v8 + 1160);
            }
            v168_.v168 = v134;
            if ((unsigned __int64)v136 >= v137) {
              v147 = GameRoutine_1138e00(v8 + 1304, &v168_.v168);
            LABEL_339:
              v153 = *(_DWORD*)(v8 + 1168);
              *(_QWORD*)(v8 + 1312) = v147;
              result = GameRoutine_a4f800(*v129, v10, (unsigned int)(v153 + 1));
              v154 = *(unsigned __int8*)result;
              v155 = *(_QWORD*)(result + 8);
              if ((v154 & 1) == 0) {
                v155 = v154 >> 1;
              }
              if (v155 == 0 ||
                  ((v154 & 1) == 0 ? (v156 = result + 1)
                                   : (v156 = *(_QWORD*)(result + 16)),
                   (unsigned int)((result = GameRoutine_a51280(*v129, v156)) -
                                  13) <= 0xFFFFFFF7)) {
                *(_DWORD*)(v8 + 1296) = 1;
              }
              goto LABEL_347;
            }
            v138 = GameRoutine_1a09c70(v134);
            if (v138 >= 0xFFFFFFFFFFFFFFF7LL) {
              GameRoutine_60a1d0(v138);
            }
            v139 = v138;
            if (v138 >= 0x17) {
              if ((v138 | 7) == 0x17) {
                v152 = 26;
              }
              else {
                v152 = (v138 | 7) + 1;
              }
              v140 =
                  GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v152, 16, 0);
              v136[1] = v139;
              v136[2] = v140;
              *v136 = v152 | 1;
            }
            else {
              *(_BYTE*)v136 = 2 * v138;
              v140 = (__int64)v136 + 1;
              if (v138 == 0) {
                goto LABEL_338;
              }
            }
            GameRoutine_1a0b940(v140, v134, v139);
          LABEL_338:
            *(_BYTE*)(v140 + v139) = 0;
            v147 = (__int64)(v136 + 3);
            goto LABEL_339;
          }
          if ((unsigned int)(result - 13) <= 3) {
            if (*(_DWORD*)(v8 + 1300) != (_DWORD)result - 13) {
              goto LABEL_347;
            }
          LABEL_309:
            v141 = *(_QWORD*)(v8 + 1312);
            v142 = *(_QWORD*)(v8 + 1304);
            if (v142 != v141) {
              v143 = *(_QWORD*)(v8 + 1312);
              v144 = GameData_212bf68;
              do {
                v145 = *(_BYTE*)(v143 - 24);
                v143 -= 24;
                if ((v145 & 1) != 0 && *(_QWORD*)(v141 - 8) != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v144 + 200LL) != 0) {
                    v146 = 128;
                  }
                  else {
                    v146 = 56;
                  }
                  result = GameRoutine_1a0a4e0(*(_QWORD*)v144 + v146,
                                               (_QWORD)(*(_QWORD*)(v141 - 8)));
                }
                v141 = v143;
              } while (v143 != v142);
            }
            v148 = *(unsigned __int8**)(v8 + 16);
            *(_QWORD*)(v8 + 1312) = v142;
            if (v148 != nullptr) {
              v149 = *v148;
              v5 = v149 > 0x10;
              v150 = (1 << v149) & 0x1CE00;
              if (!v5 && v150 != 0) {
                *(_WORD*)(v8 + 136) |= 0x80u;
              }
            }
            *(_WORD*)(v8 + 136) |= 8u;
            goto LABEL_347;
          }
          if ((int)result > 18) {
            if ((_DWORD)result == 19) {
              goto LABEL_347;
            }
            if ((_DWORD)result == 20) {
              result = GameRoutine_163b8a0(v8);
              if (result != 0) {
                result = GameRoutine_1136ea0();
                v161 = GameData_21ee240;
                if (GameData_21ee240 != 0) {
                  v162 = *(_DWORD*)(GameData_21ee240 + 156);
                  if (*(_BYTE*)(GameData_21ee240 + 152) != 0) {
                    v162 |= 2u;
                    *(_DWORD*)(GameData_21ee240 + 156) = v162;
                  }
                  if ((v162 & 0x10) == 0) {
                    v163 = *(float*)(v161 + 224);
                    *(_DWORD*)(v161 + 156) = v162 & 0xFFFFFFE2 | 1;
                    if (v163 > 0.0) {
                      *(_DWORD*)(v161 + 224) = 0;
                    }
                  }
                }
              }
              goto LABEL_347;
            }
            if ((_DWORD)result == 21 && GameData_21ee240 != 0 &&
                *(_BYTE*)(GameData_21ee240 + 152) != 0) {
              *(_DWORD*)(GameData_21ee240 + 156) |= 2u;
            }
            goto LABEL_309;
          }
          if ((_DWORD)result != 17) {
            if ((_DWORD)result == 18) {
              if (GameData_21ee240 == 0 ||
                  (unsigned int)*(unsigned __int8*)(GameData_21ee240 + 152) -
                          1 >
                      2 ||
                  (((v158 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0
                       ? (v159 = 2)
                       : (v159 = 3),
                   (v159 & v158) != 0)) {
                if ((*(_BYTE*)(v8 + 1144) & 1) != 0) {
                  v160 = *(_QWORD*)(v8 + 1160);
                }
                else {
                  v160 = v8 + 1145;
                }
                v168_.v168 = v160;
                v168_.v169 = GameRoutine_1a09c70(v160);
                v172[0] = &GameData_1a9f09e;
                v172[1] = 0;
                result = GameRoutine_16f9b50(v8, &v168_.v168, v172);
              }
              goto LABEL_347;
            }
            goto LABEL_309;
          }
          if (GameData_21ee240 != 0 &&
              (unsigned int)*(unsigned __int8*)(GameData_21ee240 + 152) - 1 <=
                  2) {
            v164 = *(_DWORD*)(GameData_21ee240 + 156);
            v165 = (v164 & 8) != 0 ? 2 : 3;
            if ((v165 & v164) == 0) {
              goto LABEL_347;
            }
          }
          v166 = (*(_BYTE*)(v8 + 1144) & 1) != 0 ? *(_QWORD*)(v8 + 1160)
                                                 : v8 + 1145;
          v172[0] = v166;
          result = GameRoutine_667ea0(v8, v172);
          if (result == 0) {
            goto LABEL_347;
          }
          v171 = nullptr;
          GameRoutine_6680e0(&v168_.v168, result + 1248);
          result = (__int64)v171;
          if (v171 == &v168_.v168) {
            v167 = 32;
          }
          else {
            if (v171 == nullptr) {
            LABEL_347:
              if ((v173 & 1) != 0 && v175 != nullptr) {
                v157 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v157 = 56;
                }
                return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 +
                                                v157, (_QWORD)(v175));
              }
              return result;
            }
            v167 = 40;
          }
          result = (*(__int64 (**)(__int64))(*v171 + v167))((__int64)v171);
          goto LABEL_347;
        }
        v32 = GameRoutine_a50100(*v25 + 15176, v26, "Favorability");
        if (v32 > 6) {
          v33 = &GameData_1ab8f13;
        }
        else {
          v33 = *(&GameData_2011310 + v32);
        }
        v168_.v169 = (__int64)v33;
        v168_.v168 = GameRoutine_7a86e0(v33);
        if (GameData_21caab0 != 0) {
          v34 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                   &v168_.v168);
          if (v34 != 0) {
            v35 = *(_DWORD*)(v34 + 32);
            if (v35 != 0) {
              if (GameData_21caab0 != 0) {
                v36 = *(_QWORD*)(GameData_21caab0 + 96);
              }
              else {
                v36 = 0;
              }
              *(struct PseudoSret*)(&v168_.v168) =
                  GameRoutine_a50e90(*v25, v26);
              if ((v168_.v168 & 1) != 0) {
                v65 = v168_.v170;
              }
              else {
                v65 = (char*)&v168_.v168 + 1;
              }
              v66 = GameRoutine_7a86e0(v65);
              if (v66 != 0) {
                v67 = *GameData_212c890[0];
                v68 = *(_QWORD*)(*GameData_212c890[0] + 96);
                if (v68 != 0 && *(_QWORD*)(v67 + 112) != 0) {
                  v69 = v68 - 1;
                  if ((v68 & (v68 - 1)) != 0) {
                    v70 = v66;
                    if (v66 >= v68) {
                      v70 = v66 % v68;
                    }
                  }
                  else {
                    v70 = v69 & v66;
                  }
                  v71 = *(_QWORD**)(*(_QWORD*)(v67 + 88) + 8 * v70);
                  if (v71 != nullptr) {
                    v72 = (_QWORD*)*v71;
                    if (v72 != nullptr) {
                      if ((v68 & v69) == 0) {
                        while (1) {
                          v74 = v72[1];
                          if (v74 == v66) {
                            if (v72[2] == v66) {
                              goto LABEL_155;
                            }
                          }
                          else if ((v74 & v69) != v70) {
                            goto LABEL_165;
                          }
                          v72 = (_QWORD*)*v72;
                          if (v72 == nullptr) {
                            goto LABEL_165;
                          }
                        }
                      }
                      do {
                        v73 = v72[1];
                        if (v73 == v66) {
                          if (v72[2] == v66) {
                          LABEL_155:
                            if (v36 != 0) {
                              v75 = v72[3];
                              if (v75 != 0) {
                                v76 = *(_QWORD*)(v36 + 24);
                                v173 = 0;
                                v174 = v36;
                                v77 = *(_QWORD*)(v76 + 1784);
                                v172[0] = 0;
                                v172[1] = v75;
                                v175 = *(char**)(v77 + 272);
                                v172[2] =
                                    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v75 + 24) +
                                                          1784LL) +
                                               272LL);
                                v78 = (_BYTE*)GameRoutine_8e1730(
                                    GameData_21caab0 + 120, &v173, v172);
                                if (v78[10] != 0) {
                                  v79 = (unsigned __int8)v78[11];
                                  v80 = v78;
                                  (*(void (**)(_BYTE*, _QWORD, __int64))(
                                      *(_QWORD*)v78 + 16LL))(v78, v35, 1);
                                  v81 = (unsigned __int8)v80[11];
                                  if (v79 != v81) {
                                    v173 = v36;
                                    v174 = v75;
                                    LOBYTE(v175) = v79;
                                    BYTE1(v175) = v81;
                                    GameRoutine_1132580(v8 + 1344, &v173);
                                  }
                                  if (v80[10] != 0) {
                                    v82 = 5;
                                  }
                                  else {
                                    v82 = 0;
                                  }
                                  GameRoutine_1374080(v36, v75, v35,
                                                      v79 == v82);
                                  v83 = *(
                                      __int64**)(*(_QWORD*)GameData_212c7b8[0] +
                                                 16LL);
                                  v84 = *(
                                      __int64**)(*(_QWORD*)GameData_212c7b8[0] +
                                                 24LL);
                                  while (v83 != v84) {
                                    v85 = *v83++;
                                    GameRoutine_12b3d60(v85);
                                  }
                                }
                              }
                            }
                            break;
                          }
                        }
                        else {
                          if (v73 >= v68) {
                            v73 %= v68;
                          }
                          if (v73 != v70) {
                            break;
                          }
                        }
                        v72 = (_QWORD*)*v72;
                      } while (v72 != nullptr);
                    }
                  }
                }
              }
            LABEL_165:
              if ((v168_.v168 & 1) != 0 && v168_.v170 != nullptr) {
                v86 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v86 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v86,
                                    (_QWORD)(v168_.v170));
              }
            }
          }
        }
        goto LABEL_170;
      }
    }
  }
  else {
    *(_DWORD*)(v8 + 1296) = 3;
  }
  v42 = *(_QWORD*)(v8 + 1312);
  v43 = *(_QWORD*)(v8 + 1304);
  v44 = v42 - v43;
  if (v42 == v43) {
    v48 = 0;
    v46 = 0;
  LABEL_96:
    v47 = 0;
    goto LABEL_97;
  }
  v45 = 0xAAAAAAAAAAAAAAABLL * (v44 >> 3);
  if ((*(_BYTE*)v43 & 1) != 0) {
    v46 = *(_QWORD*)(v43 + 16);
  }
  else {
    v46 = v43 + 1;
  }
  if (v45 < 2) {
    v48 = 0;
    goto LABEL_96;
  }
  if ((*(_BYTE*)(v43 + 24) & 1) != 0) {
    v47 = *(_QWORD*)(v43 + 40);
  }
  else {
    v47 = v43 + 25;
  }
  if (v44 == 48) {
    v48 = 0;
  LABEL_97:
    v49 = 0;
    goto LABEL_98;
  }
  if ((*(_BYTE*)(v43 + 48) & 1) != 0) {
    v48 = *(_QWORD*)(v43 + 64);
  }
  else {
    v48 = v43 + 49;
  }
  if (v45 < 4) {
    goto LABEL_97;
  }
  v59 = *(_BYTE*)(v43 + 72);
  v60 = *(_QWORD*)(v43 + 88);
  v61 = v43 + 73;
  if ((v59 & 1) != 0) {
    v49 = v60;
  }
  else {
    v49 = v61;
  }
LABEL_98:
  result = GameRoutine_16e7e00(v8, v46, v47, v48, v49);
  if (*GameData_212d460[0] != 0 && *(_BYTE*)(*GameData_212d460[0] + 206) == 1) {
    v50 = *(__int64**)(v8 + 1304);
    v51 = *(__int64**)(v8 + 1312);
    if (v50 != v51) {
      v52 = GameData_212c738[0];
      v53 = GameData_212bf68;
      while (1) {
        if ((*(_BYTE*)v50 & 1) != 0) {
          GameRoutine_60a270(&v168_.v168, v50[2], v50[1]);
        }
        else {
          v54 = *v50;
          v55 = (char*)v50[2];
          v168_.v169 = v50[1];
          v168_.v170 = v55;
          v168_.v168 = v54;
        }
        if ((v168_.v168 & 1) != 0) {
          v56 = v168_.v170;
        }
        else {
          v56 = (char*)&v168_.v168 + 1;
        }
        result = GameRoutine_a51280(*v52, v56);
        if ((v168_.v168 & 1) != 0 && v168_.v170 != nullptr) {
          v57 = result;
          if (*(_QWORD*)(*(_QWORD*)v53 + 200LL) != 0) {
            v58 = 128;
          }
          else {
            v58 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v53 + v58, (_QWORD)(v168_.v170));
          result = v57;
        }
        if ((unsigned int)(result - 9) <= 3) {
          break;
        }
        v50 += 3;
        if (v50 == v51) {
          return result;
        }
      }
      v62 = GameData_21ee240;
      if (GameData_21ee240 != 0) {
        v63 = *(_DWORD*)(GameData_21ee240 + 156);
        if ((v63 & 0x10) == 0) {
          v64 = *(float*)(GameData_21ee240 + 224);
          *(_DWORD*)(GameData_21ee240 + 156) = v63 & 0xFFFFFFE2 | 1;
          if (v64 > 0.0) {
            *(_DWORD*)(v62 + 224) = 0;
          }
        }
      }
    }
  }
  return result;
}

void GameHr_1137660(__int64 a1)
{
  const char* v2;
  __int64 v3;
  struct {
    __int64 v4[2];
    __int64 v5;
  } v4_;

  if ((*(_BYTE*)(a1 + 1144) & 1) != 0) {
    v2 = *(const char**)(a1 + 1160);
  }
  else {
    v2 = (const char*)(a1 + 1145);
  }
  Manager_a4fd20((void*)(v4_.v4), msg_MessageManager_instance_ + 15176, v2,
                 (__int64)"Still", 0);
  game_113dca0(a1 + 216, a1, (unsigned __int8*)v4_.v4);
  if ((v4_.v4[0] & 1) != 0 && v4_.v5 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v4_.v5);
  }
}

void GameHr_1139820(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
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

  v1 = *(_QWORD**)(a1 + 112);
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    v6 = *(_QWORD**)(v5 + 80);
    if (v6 == (_QWORD*)(v5 + 48)) {
      v7 = 32;
    }
    else {
      if (v6 == nullptr) {
        goto LABEL_12;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
  LABEL_12:
    if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
      v8 = *(_QWORD*)(v5 + 32);
      if (v8 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v8);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v5);
  }
  v10 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, v10);
  }
  if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 88);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v12);
    }
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 64);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, v14);
    }
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 40);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v16);
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 16);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19, v18);
    }
  }
}

__attribute__((swiftcall)) void GameHr_113bfb0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _BYTE* v5;
  _QWORD v7[25];
  __int64 v8[2];

  snd_findSlot_100a50((void*)(v8), &GameData_21ec578);
  if ((snd_fnd_WeakHandle_isValid(v8) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get((__int64)v8);
    snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
    Slot_135980((_QWORD*)(v4 - 5592), (__int64)v7);
    snd_Fade_Destroy_Fade(v7);
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v5 = *(_BYTE**)(a1 + 40);
  }
  else {
    v5 = (_BYTE*)(a1 + 25);
  }
  {
    X8CALL_X0(__int64, game_810a70((void*)(a2), 2, v5, 0x0.0p+0f));
    return;
  }
}

void GameHr_113ff20(__int64 a1, int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15[2];
    __int64 v16;
  } v15_;
  struct {
    _BYTE v17[24];
    int v18;
  } v17_;
  _BYTE* v19;

  *(_WORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)a1 = game_map_MapUnitEventBase_vtable;
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20_alt1(v4, a3[2], a3[1]);
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    v17_.v17[0] = 0;
    v17_.v18 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_2011d38[v10];
      v19 = v17_.v17;
      ((void (*)(_BYTE**, __int64))v11)(&v19, v8);
      v17_.v18 = v10;
    }
    GameRoutine_eaec10_alt1((__int64*)(a1 + 64), (__int64)v17_.v17);
    if (v17_.v18 != -1) {
      ((void (*)(_BYTE**, _BYTE*))decltype_c81af0_ptr[v17_.v18])(&v19,
                                                                 v17_.v17);
    }
  }
  *(_DWORD*)(a1 + 104) = *((_DWORD*)a3 + 12);
  *(_DWORD*)(a1 + 108) = *((_DWORD*)a3 + 13);
  *(_DWORD*)(a1 + 112) = *((_DWORD*)a3 + 14);
  if ((a3[8] & 1) != 0) {
    fw_text_String_CopyTerminated(v15_.v15, a3[10], a3[9]);
  }
  else {
    v12 = a3[9];
    v13 = a3[10];
    v15_.v15[0] = a3[8];
    v15_.v15[1] = v12;
    v15_.v16 = v13;
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 120LL))(a1, v15_.v15);
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v15_.v16);
  }
}

_QWORD* GameHr_1147f80(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* result;
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 120);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 128);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = *(_QWORD*)(a1 + 128);
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(a1 + 120);
    *(_QWORD*)(a1 + 128) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v1);
    }
  }
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 112);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
    }
  }
  v13 = *(_QWORD**)(a1 + 80);
  if (v13 == (_QWORD*)(a1 + 48)) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_25;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_25:
  result = *(_QWORD**)(a1 + 32);
  if (result == (_QWORD*)a1) {
    v16 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v16))((__int64)result);
}

__int64 GameHr_114ed00(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v28;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v29_;

  v1 = *(_QWORD**)(a1 + 576);
  if (v1 != nullptr) {
    v3 = fw_memory_g_heap_manager_ptr;
    while (1) {
      if ((v1[2] & 1) != 0) {
        fw_text_String_CopyTerminated(&v29_.v29, v1[4], v1[3]);
      }
      else {
        v4 = v1[3];
        v5 = v1[4];
        v29_.v29 = v1[2];
        v29_.v30 = v4;
        v29_.v31 = v5;
      }
      v6 = v1[5];
      v7 = *(unsigned __int8*)(v6 + 128);
      v29_.v32 = v6;
      if (v7 == 1) {
        v8 = *(_QWORD*)(v6 + 136);
        if (v8 != 0 && (CharacterAppearance_1074940(v8) & 1) == 0) {
          break;
        }
      }
      if ((v29_.v29 & 1) != 0 && v29_.v31 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v29_.v31);
      }
      v1 = (_QWORD*)*v1;
      if (v1 == nullptr) {
        v10 = *(_QWORD**)(a1 + 576);
        if (v10 == nullptr) {
          goto LABEL_30;
        }
        while (1) {
          if ((v10[2] & 1) != 0) {
            fw_text_String_CopyTerminated(&v29_.v29, v10[4], v10[3]);
          }
          else {
            v11 = v10[3];
            v12 = v10[4];
            v29_.v29 = v10[2];
            v29_.v30 = v11;
            v29_.v31 = v12;
          }
          v13 = v10[5];
          v14 = *(unsigned __int8*)(v13 + 128);
          v29_.v32 = v13;
          if (v14 == 1 && *(_QWORD*)(v13 + 152) == 0) {
            goto LABEL_53;
          }
          if ((v29_.v29 & 1) != 0 && v29_.v31 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v15 = 128;
            }
            else {
              v15 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, v29_.v31);
          }
          v10 = (_QWORD*)*v10;
          if (v10 == nullptr) {
            goto LABEL_30;
          }
        }
      }
    }
  LABEL_53:
    if ((v29_.v29 & 1) != 0 && v29_.v31 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v28, v29_.v31);
    }
  }
  else {
  LABEL_30:
    v16 = (_QWORD*)(a1 + 624);
    v17 = fw_memory_g_heap_manager_ptr;
    while (1) {
      v16 = (_QWORD*)*v16;
      if (v16 == nullptr) {
        break;
      }
      if ((v16[2] & 1) != 0) {
        fw_text_String_CopyTerminated(&v29_.v29, v16[4], v16[3]);
      }
      else {
        v18 = v16[3];
        v19 = v16[4];
        v29_.v29 = v16[2];
        v29_.v30 = v18;
        v29_.v31 = v19;
      }
      v29_.v32 = v16[5];
      v20 = *(_BYTE*)(v29_.v32 + 88);
      if ((v29_.v29 & 1) != 0 && v29_.v31 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v21, v29_.v31);
      }
      if ((v20 & 1) != 0) {
        return 1;
      }
    }
    v22 = *(_QWORD*)(eft_g_effectSystem + 104);
    if (v22 == 0) {
      return 0;
    }
    v23 = GameData_21f5328;
    if (GameData_21f5328 == 0) {
      return 0;
    }
    v24 = v22 + 24;
    while (1) {
      v25 = *(__int16*)(v23 + 24);
      if ((v25 & 0x80000000) == 0) {
        v26 = *(_QWORD*)(v22 + 32);
        if (v26 != v24) {
          while (*(_DWORD*)(v26 + 16) != v25) {
            v26 = *(_QWORD*)(v26 + 8);
            if (v26 == v24) {
              goto LABEL_46;
            }
          }
          if (*(_BYTE*)(v26 - 7) != 1) {
            break;
          }
        }
      }
    LABEL_46:
      v23 = *(_QWORD*)v23;
      if (v23 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

void GameHr_11511f0(__int64 a1)
{
  __int64* v2;
  const char* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    const char* v11;
    __int64 (**v12)();
    unsigned __int64 v13;
    unsigned __int64 v14;
    unsigned __int64 v15;
    int v16;
    int v17;
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
  } v10_;

  v2 = msg_MessageManager_instance__ptr[0];
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v3 = *(const char**)(a1 + 200);
  }
  else {
    v3 = (const char*)(a1 + 185);
  }
  v4 = Registration_a4f800(*msg_MessageManager_instance__ptr[0], v3,
                           *(_DWORD*)(a1 + 208));
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v10_.v10, v4[2], v4[1]);
  }
  else {
    v5 = *v4;
    v6 = v4[2];
    v10_.v10[1] = v4[1];
    v10_.v11 = (const char*)v6;
    v10_.v10[0] = v5;
  }
  v7 = *v2;
  v10_.v18 = -1;
  v10_.v19 = -1;
  v10_.v20 = -1;
  v10_.v21 = -1;
  v10_.v22 = -1;
  v10_.v23 = -1;
  if ((v10_.v10[0] & 1) != 0) {
    v8 = v10_.v11;
  }
  else {
    v8 = (char*)v10_.v10 + 1;
  }
  v10_.v24 = -1;
  v10_.v25 = -1;
  v10_.v26 = -1;
  v10_.v27 = -1;
  v10_.v28 = -1;
  v10_.v29 = -1;
  v10_.v12 = msg_TagSelector_vtable;
  v10_.v13 = 0xFFFF0001FFFF0000LL;
  v10_.v14 = 0xFFFF0004FFFF0002LL;
  v10_.v15 = 0xFFFF0006FFFF0005LL;
  v10_.v30 = 8;
  v10_.v16 = -65529;
  v10_.v17 = -65528;
  *(_BYTE*)(a1 + 212) = *GameRoutine_a4dbe0_alt1(v7, v8, 0) == 0;
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v10_.v11);
  }
}

#pragma GCC visibility pop
