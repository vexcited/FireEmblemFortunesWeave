#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 BattleInfo_796b00(_QWORD);
__int64 BattleInfo_796d90(_QWORD);
__int64 BattleSide_Destructor(_QWORD);
__int64 GameManager_a30ab0(_QWORD, _QWORD);
__int64 GameRoutine_120f710(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_796f20(_QWORD);
__int64 GameRoutine_7971a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7badf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_80e6f0(_QWORD, _QWORD);
__int64 GameRoutine_80e800(_QWORD);
__int64 GameRoutine_80ef70(void);
__int64 GameRoutine_810fc0(void);
__int64 GameRoutine_a28e10(_QWORD, _QWORD);
__int64 GameRoutine_a339e0(_QWORD, _QWORD, _QWORD);
__int64 MapInfo_825790(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f99ba8[])();
extern __int64 (*GameData_1f99bf8[])();
extern __int64 (*GameData_1f99c98[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_UnitEquipScope_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_BattleSides_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqBattle_vtable[])();
extern __int64 GameData_21ca060;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd128;
extern __int64 GameData_21cd148;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_empty_item;
extern __int64 game_map_ProcMapSeqBattleView_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212da50[3];
extern __int64* game_sound_g_game_sound_ptr[5];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60f930(void);
__int64 ProcMapSeqBattle_Destructor(__int64 a1);
__int64 ProcMapSeqBattle_Unknown20(__int64 a1);
__int64 ProcMapSeqBattle_Unknown21(__int64 result);
__int64 ProcMapSeqBattle_Unknown22(__int64 a1);
__int64 ProcMapSeqBattle_Unknown23(__int64 a1);
__int64 ProcMapSeqBattle_Unknown24(__int64 a1);
__int64 ProcMapSeqBattle_Unknown25(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void GameRoutine_8fe8e0(PSEUDO_X8, _QWORD);
__int64 BattleArea_8b9d00(_QWORD);
__int64 BattleInfo_7905d0(_QWORD, _QWORD, _QWORD);
__int64 BattleInfo_790b00(_QWORD, _QWORD);
__int64 BattleTarget_8fe520(_QWORD, _QWORD);
__int64 CombatHUDWindow_183e450(void);
__int64 GameRoutine_1090da0(_QWORD);
__int64 GameRoutine_10a4c70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10d4da0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10ea6e0(_QWORD, _QWORD);
__int64 GameRoutine_12a5400(_QWORD, _QWORD);
__int64 GameRoutine_12a5de0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_730ff0(_QWORD, _QWORD);
__int64 GameRoutine_76bcd0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_790ba0(_QWORD);
__int64 GameRoutine_7992e0(_QWORD);
__int64 GameRoutine_799aa0(_QWORD, _QWORD);
__int64 GameRoutine_799b90(_QWORD, _QWORD);
__int64 GameRoutine_7a2a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7aa840(__int64 result, __int64, double, double, double,
                           double, double, long double);
__int64 GameRoutine_7b8280(__int64 result, unsigned __int8, unsigned int,
                           unsigned int, int);
__int64 GameRoutine_7c0130(_QWORD, _QWORD);
__int64 GameRoutine_812b00(void);
__int64 GameRoutine_8fe640(_QWORD);
__int64 GameRoutine_90e760(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_90edc0(_QWORD);
__int64 GameRoutine_910d60(_QWORD, _QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 HistoryLogInfo_6fb810(_QWORD);
__int64 MapUtil_753570(_QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 Unit_6cf1c0(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_map_BattleTarget_EachTrick(_QWORD, _QWORD);
__int64 game_map_anonymous_ProcMapSeqBattle_BlowMove_closure_Invoke_alt1(
    _QWORD, _QWORD) __asm__("game_map_anonymous_ProcMapSeqBattle_BlowMove_"
                            "closure_Invoke");
__int64 game_map_anonymous_TrickEntity_TryBroken(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1f98b78[])();
extern __int64 (*GameData_1f99248[])();
extern __int64 (*GameData_1f99438[])();
extern __int64 (*GameData_1f995c8[])();
extern __int64 (*GameData_1f99748[])();
extern __int64 (*GameData_1f99838[])();
extern __int64 (*GameData_1f999c8[])();
extern __int64 (*GameData_1f99a48[])();
extern __int64 GameData_212d270;
extern __int64 GameData_21c99a8;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd158;
extern __int64 GameData_21d1e38;
extern __int64 GameData_21d1e40;
extern __int64 GameData_21d1e50;
extern __int64 GameData_22400f8;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_script_map_obj_g_object_records;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d1e8;
extern __int64* game_g_empty_item_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
struct PseudoSret GameRoutine_79ca50(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1(void) __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
void __attribute__((noreturn)) GameRoutine_7b9760(void);
__int64 game_map_anonymous_ProcMapSeqBattle_BlowMove_alt1(
    __int64 result, __int64 a2,
    __int64 a3) __asm__("game_map_anonymous_ProcMapSeqBattle_BlowMove");
__int64 game_map_anonymous_ProcMapSeqBattle_TryNotice(__int64 result);
__int64
game_map_anonymous_ProcMapSeqBattle_RequestToREcordHistoryForTrick_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_map_anonymous_ProcMapSeqBattle_RequestToRecordHistory_closure_Invoke(
    __int64 a1, __int64 a2);
bool ProcMapSeqBattle_7b6760(__int64 a1);
__int64 ProcMapSeqBattle_7b68c0(__int64 a1, char a2, char a3);
__int64 ProcMapSeqBattle_7b6b80(__int64 result);
__int64 ProcMapSeqBattle_7b6ce0(__int64 result, __int64 a2, unsigned __int64 a3,
                                double a4, double a5, double a6, double a7,
                                double a8, long double a9);
__int64 ProcMapSeqBattle_7b6e10(__int64 result, unsigned int a2);
__int64
game_map_anonymous_ProcMapSeqBattle_RushBegin_closure_Invoke_7b7050(__int64 a1,
                                                                    _QWORD* a2);
__int64 game_map_anonymous_ProcMapSeqBattle_RushBegin_closure_Invoke_7b7160(
    __int64 a1, unsigned int* a2, unsigned int* a3);
__int64
game_map_anonymous_ProcMapSeqBattle_RushBegin_closure_Invoke_7b72d0(__int64 a1,
                                                                    _QWORD* a2);
__int64 game_map_anonymous_ProcMapSeqBattle_RushEnd_closure_Invoke(__int64 a1,
                                                                   _QWORD* a2);
__int64 game_map_anonymous_ProcMapSeqBattle_BlowMove_closure_Invoke_alt2(
    __int64 result, __int64 a2) __asm__("game_map_anonymous_ProcMapSeqBattle_"
                                        "BlowMove_closure_Invoke");
__int64 game_map_anonymous_ProcMapSeqBattle_CommitSkill_closure_Invoke(
    __int64 result, _DWORD* a2, _DWORD* a3);
__int64 ProcMapSeqBattle_7b79c0(__int64 a1, int a2, int a3);
__int64
game_map_anonymous_ProcMapSeqBattle_CommitBarrier_closure_Invoke(__int64 a1,
                                                                 __int64 a2);
__int64 game_map_anonymous_ProcMapSeqBattle_EachComplete(__int64 a1,
                                                         __int64 a2);
__int64 game_map_anonymous_ProcMapSeqBattle_EachComplete_closure_Invoke_alt1(
    __int64 a1, __int64 a2) __asm__("game_map_anonymous_ProcMapSeqBattle_"
                                    "EachComplete_closure_Invoke");
__int64 game_map_anonymous_ProcMapSeqBattle_CompleteBegin_closure_Invoke_7b93b0(
    __int64 a1, __int64 a2);
__int64 game_map_anonymous_ProcMapSeqBattle_CompleteBegin_closure_Invoke_7b9580(
    __int64 result, int* a2);
__int64
game_map_anonymous_ProcMapSeqBattle_EachOpposition_closure_Invoke(__int64 a1,
                                                                  __int64 a2);
__int64
game_map_anonymous_ProcMapSeqBattle_CompleteEnd_closure_Invoke(__int64 a1,
                                                               __int64 a2);
void game_map_anonymous_ProcMapSeqBattle_TryNotice_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64
game_map_anonymous_ProcMapSeqBattle_TryNotice_closure0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 ProcMapSeqBattle_Destructor_7ba8e0(__int64 a1);
__int64 ProcMapSeqBattle_DeletingDestructor(__int64 a1);
__int64 ProcMapSeqBattle_Unknown2(__int64 a1, __int64 a2);
__int64 ProcMapSeqBattle_Unknown4(__int64 a1, long double a2, long double a3);
__int64 ProcMapSeqBattle_Unknown6(__int64 result);
__int64 ProcMapSeqBattle_Unknown7(__int64 a1);
__attribute__((swiftcall)) void BattleTarget_8fe8e0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
BattleTarget_8fe8e0_alt1(PSEUDO_X8, __int64) __asm__("BattleTarget_8fe8e0");
__attribute__((swiftcall)) void
game_90e4c0(PSEUDO_X8, _DWORD*, __int64, __int64, int, unsigned int, int, int);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 CharacterBuilder_1084780(__int64 result);
__int64 CharacterBuilder_1084780_alt1(void) __asm__("CharacterBuilder_1084780");
__int64 Cursor_730e40(_QWORD, _QWORD);
__int64 Cursor_734a80(__int64, __int64*);
__int64 Cursor_734a80_alt1(_QWORD, _QWORD) __asm__("Cursor_734a80");
__int64 GameRoutine_769d60(__int64, __int64, _DWORD*, long double, long double);
__int64 GameRoutine_76a120(_QWORD, _QWORD);
__int64 GameRoutine_76bcd0_alt1(__int64, __int64, unsigned int,
                                float) __asm__("GameRoutine_76bcd0");
__int64 GameRoutine_961420(__int64, _BYTE**, __int64);
__int64 UnitActor_81b740(__int64);
__int64 UnitActor_81ba20_alt1(_QWORD) __asm__("UnitActor_81ba20");
__int64 Unit_6c7fa0_alt1(_QWORD, _QWORD) __asm__("Unit_6c7fa0");
__int64 Unit_6ca760(__int64, _DWORD*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_map_7693e0(__int64, __int64, int, int, char, char*, char*);
__int64 game_map_76ccf0(__int64, __int64, int, int, int, int);
__int64 game_map_BattleTarget_EachTrick_alt1(__int64, __int64) __asm__(
    "game_map_BattleTarget_EachTrick");
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f994c8[])();
extern __int64 (*GameData_1f99548[])();
extern __int64 (*GameData_1f996c8[])();
float Unit_6c7fa0(__int64, _OWORD*);
long double UnitActor_81ba20(__int64);
void Camera_7c0130(__int64, char);
void Camera_7c0390(__int64, char);
void GameRoutine_7b8280_alt1(__int64, unsigned __int8, unsigned int,
                             unsigned int, int) __asm__("GameRoutine_7b8280");
void ProcMapSeqBattle_7b6b80_alt1(__int64) __asm__("ProcMapSeqBattle_7b6b80");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void ProcMapSeqBattle_7b0220(__int64 a1);
void ProcMapSeqBattle_7b12b0(__int64 a1);
__int64 ProcMapSeqBattle_7b1520(__int64 a1);
void ProcMapSeqBattle_7b16f0(__int64 a1, long double a2, long double a3);
void game_map_anonymous_ProcMapSeqBattle_RushCommit(__int64 a1);
__int64 game_map_anonymous_ProcMapSeqBattle_RushEnd(__int64 a1);
void game_map_anonymous_ProcMapSeqBattle_CommitBarrier(_QWORD* result,
                                                       unsigned __int8 a2);
__n128 ProcMapSeqBattle_Unknown19(__int64 a1, long double a2, long double a3);
__int64 BattleInfo_7905d0_alt1(__int64, __int64,
                               int) __asm__("BattleInfo_7905d0");
__int64 BattleInfo_790b00_alt1(__int64, __int64) __asm__("BattleInfo_790b00");
__int64 BattleTarget_8fe520_alt1(__int64,
                                 __int64*) __asm__("BattleTarget_8fe520");
__int64 Cursor_730e40_alt1(__int64 result, __int64) __asm__("Cursor_730e40");
__int64 GameHr_90e760(__int64*, unsigned int, unsigned int, int);
__int64 GameHr_910d60(__int64*, __int64);
__int64 GameHr_961420(__int64, const char**, __int64);
__int64 GameManager_a30ab0_alt1(__int64 result,
                                const char*) __asm__("GameManager_a30ab0");
__int64 GameRoutine_76a120_alt1(__int64, __int64) __asm__("GameRoutine_76a120");
__int64 GameRoutine_7992e0_alt1(__int64) __asm__("GameRoutine_7992e0");
__int64 GameRoutine_80e800_alt1(__int64) __asm__("GameRoutine_80e800");
__int64 GameRoutine_810fc0_alt1(__int64, __int64) __asm__("GameRoutine_810fc0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_map_7693e0_alt1(__int64, __int64, int, int, char, const char*,
                             const char*) __asm__("game_map_7693e0");
__int64 game_map_799aa0(__int64 result, __int64);
__int64 game_map_799b90(__int64, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__n128 BattleArea_8b9d00_alt1(__int64) __asm__("BattleArea_8b9d00");
char* game_80e6f0(__int64, __int64);
float Unit_6c7fa0_alt2(__int64, __int64) __asm__("Unit_6c7fa0");
void CharacterBuilder_1084780_alt2(__int64) __asm__("CharacterBuilder_1084780");
void ProcMapSeqBattle_7badf0(__int64, __int64*, unsigned __int8);
void UnitActor_81b740_alt1(__int64) __asm__("UnitActor_81b740");
void __attribute__((noreturn))
GameRoutine_60a210_alt2() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60f930_alt1() __asm__("GameRoutine_60f930");
void game_90edc0(__int64);
void game_map_790ba0(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_anonymous_ProcMapSeqBattle_BlowMove(__int64 a1);
__int64*
game_map_anonymous_ProcMapSeqBattle_BlowMove_closure_Invoke(__int64* result,
                                                            __int64 a2);
void game_map_anonymous_ProcMapSeqBattle_EachComplete_closure_Invoke(
    __int64 a1, __int64 a2);

void ProcMapSeqBattle_7b0220(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  _BYTE* v4;
  int v5;
  __int64* v6;
  __int64 v7;
  int v8;
  int v9;
  char v10;
  char v11;
  bool v12;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  int v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  char v26;
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  bool v30;
  unsigned int v31;
  __int64 v32;
  unsigned int v33;
  bool v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  float v42;
  __int128 v43;
  __int128 v44;
  __int64 v46;
  char v47;
  __int64 v48;
  unsigned int v49;
  __int128 v50;
  int v51;

  v2 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v2 + 24) == 4) {
    v3 = (unsigned __int16)game_g_empty_item;
    if (*(_WORD*)(v2 + 32) != 0) {
      v3 = *(unsigned __int16*)(v2 + 32);
    }
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v3) +
                   73LL) &
         0xFE) == 8) {
      v5 = *(unsigned __int8*)(v2 + 57);
      v4 = (_BYTE*)(v2 + 57);
      if (v5 != 0) {
        v6 = game_UnitPool_Get_alt1(v4);
        v7 = *(_QWORD*)(a1 + 168);
        v8 = *(unsigned __int8*)(v7 + 53);
        v9 = *(unsigned __int8*)(v7 + 54);
        v10 = *(_BYTE*)(v7 + 53);
        v11 = *(_BYTE*)(v7 + 54);
        v12 = v6 == nullptr || (char)v8 < 1;
        if (!v12 && (char)v9 >= 1) {
          if (*(_BYTE*)(a1 + 23032) != 0) {
            game_map_7693e0_alt1(a1, (__int64)v6, v8, v9, 1, nullptr, nullptr);
          }
          else {
            *((_BYTE*)v6 + 584) = v10;
            v35 = v6[1];
            *((_BYTE*)v6 + 585) = v11;
            if (v35 != 0) {
              v36 = *(char*)(v35 + 584);
              if ((v36 & 0x80000000) == 0) {
                v37 = *(char*)(v35 + 585);
                if ((v37 & 0x80000000) == 0) {
                  v38 = *(_DWORD*)(v35 + 592);
                  v39 = v36 | 0x100;
                  v40 = v37 | 0x100;
                  v41 = (__int64)v6;
                  v42 = (float)(unsigned int)(v38 - 1) * 0x1.4000000000000p+1f;
                  if (v38 <= 0) {
                    v42 = 0x0.0p+0f;
                  }
                  *(_QWORD*)&v43 = COERCE_UNSIGNED_INT(
                      (float)((float)((float)((float)v39 *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                              -0x1.4000000000000p+10f) +
                      v42);
                  v48 = COERCE_UNSIGNED_INT(
                      (float)((float)((float)((float)v40 *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                              -0x1.4000000000000p+10f) +
                      v42);
                  *(float*)&v49 =
                      (float)((float)((float)((float)v39 *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                              -0x1.4000000000000p+10f) +
                      v42;
                  *((_QWORD*)&v43 + 1) = v48;
                  v50 = v43;
                  *(_QWORD*)&v44 = __PAIR64__(
                      COERCE_UNSIGNED_INT(Unit_6c7fa0_alt2(v35, (__int64)&v50)),
                      v49);
                  *((_QWORD*)&v44 + 1) = v48;
                  v50 = v44;
                  Cursor_734a80(v41 + 48, (__int64*)&v50);
                  UnitActor_81ba20(v41);
                  v6 = (__int64*)v41;
                }
              }
              v46 = v6[33];
              if (v46 != 0) {
                CharacterBuilder_1084780_alt2(v46);
              }
            }
          }
        }
      }
    }
  }
  v14 = *(_QWORD*)(a1 + 168);
  if ((*(_DWORD*)(v14 + 40) & 0xFFF) != 0) {
    v15 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(v14 + 40) & 0xFFF));
    if (v15 == nullptr) {
      return;
    }
  }
  else {
    v27 = *(unsigned __int16*)(v14 + 32);
    if (*(_WORD*)(v14 + 32) == 0) {
      v27 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v28 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v27);
    v15 = *(_BYTE**)(v28 + 192);
    v29 = *(unsigned __int8*)(v28 + 72);
    v30 = v15 == nullptr || v29 > 7;
    if (v30 || v15[105] == 0 || v15[104] == 2) {
      return;
    }
  }
  if (v15[250] != 30) {
    return;
  }
  v17 = *(unsigned __int8*)(v14 + 8);
  v16 = (_BYTE*)(v14 + 8);
  if (v17 == 0) {
    return;
  }
  v18 = game_UnitPool_Get_alt1(v16);
  if (v18 == nullptr) {
    return;
  }
  v19 = *(_QWORD*)(a1 + 168);
  if ((*(_DWORD*)(v19 + 40) & 0xFFF) != 0) {
    v20 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(v19 + 40) & 0xFFF));
    if (v20 == 0) {
      return;
    }
  }
  else {
    v31 = *(unsigned __int16*)(v19 + 32);
    if (*(_WORD*)(v19 + 32) == 0) {
      v31 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v32 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v31);
    v20 = *(_QWORD*)(v32 + 192);
    v33 = *(unsigned __int8*)(v32 + 72);
    v34 = v20 == 0 || v33 > 7;
    if (v34 || *(_BYTE*)(v20 + 105) == 0 || *(_BYTE*)(v20 + 104) == 2) {
      return;
    }
  }
  v22 = *(unsigned __int8*)(v19 + 57);
  v21 = (_BYTE*)(v19 + 57);
  if (v22 != 0) {
    v23 = (__int64)v18;
    v24 = game_UnitPool_Get_alt1(v21);
    if (v24 != nullptr) {
      v25 = (__int64)v24;
      GameHr_961420(a1, (const char**)(v20 + 784), (__int64)v24);
      v51 = *(_WORD*)(v20 + 16) & 0xFFF;
      game_90e4c0((void*)((__int64)&v50), &v51, v23, v25, -1, 0xFFFFFFFF, -1,
                  -1);
      v26 = BYTE5(v50);
      if ((unsigned __int8)v50 == BYTE4(v50) && BYTE1(v50) == BYTE5(v50)) {
        if (BYTE8(v50) == BYTE12(v50) && BYTE9(v50) == BYTE13(v50)) {
          return;
        }
      }
      else if (SBYTE4(v50) >= 1 && SBYTE5(v50) >= 1) {
        if (*(_BYTE*)(a1 + 23032) != 0) {
          game_map_76ccf0(a1, v23, *(char*)(v23 + 584), *(char*)(v23 + 585),
                          SBYTE4(v50), BYTE5(v50));
          Camera_7c0130(*GameData_212cfc8[0], 0);
        }
        else {
          *(_BYTE*)(v23 + 584) = BYTE4(v50);
          *(_BYTE*)(v23 + 585) = v26;
          UnitActor_81b740_alt1(v23);
        }
      }
      v47 = BYTE13(v50);
      if ((BYTE8(v50) != BYTE12(v50) || BYTE9(v50) != BYTE13(v50)) &&
          SBYTE12(v50) >= 1 && SBYTE13(v50) >= 1) {
        if (*(_BYTE*)(a1 + 23032) != 0) {
          game_map_76ccf0(a1, v25, *(char*)(v25 + 584), *(char*)(v25 + 585),
                          SBYTE12(v50), BYTE13(v50));
          Camera_7c0130(*GameData_212cfc8[0], 0);
        }
        else {
          *(_BYTE*)(v25 + 584) = BYTE12(v50);
          *(_BYTE*)(v25 + 585) = v47;
          UnitActor_81b740_alt1(v25);
        }
      }
    }
  }
}

void ProcMapSeqBattle_7b12b0(__int64 a1)
{
  __int64 v2;
  float v3;
  float v4;
  float v5;
  unsigned __int64 v6;
  float32x4_t v7;
  unsigned __int8* v8;
  unsigned int v9;
  bool v10;
  int v11;
  float32x4_t v13;
  float32x4_t v14;

  v2 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  v3 = *(float*)(v2 + 252);
  if (v3 == *(float*)(v2 + 248)) {
    goto LABEL_9;
  }
  v4 = v3 + (**(float (***)(__int64))(v2 + 240))(v2 + 240);
  v5 = *(float*)(v2 + 248);
  if (v5 < v4) {
    v4 = *(float*)(v2 + 248);
  }
  if (v4 == v5) {
    goto LABEL_9;
  }
  if (*(float*)(v2 + 252) == v5) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v2 + 240) + 16LL))((void*)(&v14), v2 + 240);
  }
  else {
    v6 = *(_QWORD*)(v2 + 296);
    LANES128(v14).n128_u64[0] = *(_QWORD*)(v2 + 288);
    LANES128(v14).n128_u64[1] = v6;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(v2 + 240) + 16LL))((void*)(&v13), v2 + 240);
  v7 = vsubq_f32(v14, v13);
  if ((float)(LANES128_OF(vmulq_f32(v7, v7)).n128_f32[2] +
              (float)(LANES128(v7).n128_f32[0] * LANES128(v7).n128_f32[0])) <
      0x1.9000000000000p+4f) {
  LABEL_9:
    v8 = *(unsigned __int8**)(a1 + 16);
    if (v8 != nullptr) {
      v9 = *v8;
      v10 = v9 > 0x10;
      v11 = (1 << v9) & 0x1CE00;
      if (!v10 && v11 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

__int64 ProcMapSeqBattle_7b1520(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  int v4;
  int v5;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  float v13;
  __int128 v14;
  __int128 v15;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  int v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  _BYTE* v24;
  int v25;
  __int64* v26;
  __int64 v28;
  unsigned int v29;
  __int128 v30;
  __int128 v31;

  v2 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v2 + 8) != 0) {
    v3 = game_UnitPool_Get_alt1((_BYTE*)(v2 + 8));
    v2 = *(_QWORD*)(a1 + 168);
  }
  else {
    v3 = nullptr;
  }
  BattleTarget_8fe8e0_alt1((void*)(&v30), v2);
  if (v3 != nullptr) {
    v4 = (int)(float)((float)(*(float*)&v30 + 0x1.4000000000000p+10f) *
                      0x1.99999a0000000p-3f);
    v5 = (int)(float)((float)(*((float*)&v30 + 2) + 0x1.4000000000000p+10f) *
                      0x1.99999a0000000p-3f);
    if ((char)v4 >= 1 && (char)v5 >= 1) {
      v7 = v3[1];
      *((_BYTE*)v3 + 584) = v4;
      *((_BYTE*)v3 + 585) = v5;
      if (v7 != 0) {
        v8 = *(char*)(v7 + 584);
        if ((v8 & 0x80000000) == 0) {
          v9 = *(char*)(v7 + 585);
          if ((v9 & 0x80000000) == 0) {
            v10 = *(_DWORD*)(v7 + 592);
            v11 = v8 | 0x100;
            v12 = v9 | 0x100;
            v13 = (float)(unsigned int)(v10 - 1) * 0x1.4000000000000p+1f;
            if (v10 <= 0) {
              v13 = 0x0.0p+0f;
            }
            *(_QWORD*)&v14 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v11 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v13);
            v28 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v12 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v13);
            *(float*)&v29 =
                (float)((float)((float)((float)v11 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v13;
            *((_QWORD*)&v14 + 1) = v28;
            v31 = v14;
            *(_QWORD*)&v15 = __PAIR64__(
                COERCE_UNSIGNED_INT(Unit_6c7fa0_alt2(v7, (__int64)&v31)), v29);
            *((_QWORD*)&v15 + 1) = v28;
            v31 = v15;
            Cursor_734a80((__int64)(v3 + 6), (__int64*)&v31);
            UnitActor_81ba20((__int64)v3);
          }
        }
        v17 = v3[33];
        if (v17 != 0) {
          CharacterBuilder_1084780_alt2(v17);
        }
      }
    }
  }
  v18 = *(_QWORD*)(a1 + 168);
  v20 = *(unsigned __int8*)(v18 + 8);
  v19 = (_BYTE*)(v18 + 8);
  if (v20 != 0) {
    v21 = game_UnitPool_Get_alt1(v19);
  }
  else {
    v21 = nullptr;
  }
  GameRoutine_76a120_alt1(a1, (__int64)v21);
  v22 = *(_QWORD*)(a1 + 168);
  v23 = GameData_21cd130;
  v25 = *(unsigned __int8*)(v22 + 8);
  v24 = (_BYTE*)(v22 + 8);
  if (v25 != 0) {
    v26 = game_UnitPool_Get_alt1(v24);
  }
  else {
    v26 = nullptr;
  }
  return Cursor_730e40_alt1(*(_QWORD*)(v23 + 48), (__int64)v26);
}

void ProcMapSeqBattle_7b16f0(__int64 a1, long double a2, long double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  bool v11;
  __int64 v12;
  _BYTE* v13;
  int v14;
  __int64* v15;
  unsigned int v16;
  __int128 v17;
  int v18;
  int v19;
  float v20;
  __int128 v21;

  v3 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v3 + 8) != 0) {
    v5 = game_UnitPool_Get_alt1((_BYTE*)(v3 + 8));
    v3 = *(_QWORD*)(a1 + 168);
    v6 = (__int64)v5;
  }
  else {
    v6 = 0;
  }
  if ((*(_DWORD*)(v3 + 40) & 0xFFF) != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(v3 + 40) & 0xFFF));
    if (v7 == 0) {
      goto LABEL_16;
    }
    goto LABEL_6;
  }
  v8 = *(unsigned __int16*)(v3 + 32);
  if (v8 == 0) {
    v8 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v8);
  v7 = *(_QWORD*)(v9 + 192);
  v10 = *(unsigned __int8*)(v9 + 72);
  v11 = v7 == 0 || v10 > 7;
  if (!v11 && *(_BYTE*)(v7 + 105) != 0 && *(_BYTE*)(v7 + 104) != 2) {
  LABEL_6:
    LODWORD(v7) = *(_WORD*)(v7 + 16) & 0xFFF;
    goto LABEL_16;
  }
  LODWORD(v7) = 0;
LABEL_16:
  LODWORD(v21) = v7;
  GameRoutine_769d60(a1, v6, &v21, a2, a3);
  v12 = *(_QWORD*)(a1 + 168);
  v14 = *(unsigned __int8*)(v12 + 8);
  v13 = (_BYTE*)(v12 + 8);
  if (v14 != 0) {
    v15 = game_UnitPool_Get_alt1(v13);
  }
  else {
    v15 = nullptr;
  }
  GameRoutine_76bcd0_alt1(a1, (__int64)v15, 0x96D69904, 0x1.0000000000000p+0f);
  Camera_7c0390(*GameData_212cfc8[0], 0);
  BattleTarget_8fe8e0_alt1((void*)(&v21), *(_QWORD*)(a1 + 168));
  v16 = DWORD2(v21);
  *(_QWORD*)(a1 + 23120) = v21;
  v17 = *(_OWORD*)(a1 + 23120);
  *((_QWORD*)&v17 + 1) = v16;
  *(_OWORD*)(a1 + 23120) = v17;
  ProcMapSeqBattle_7b6b80_alt1(a1);
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v18 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v19 = 2)
           : (v19 = 3),
       (v19 & v18) != 0)) {
    v20 = *(float*)(a1 + 144);
    *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
    if (v20 < 0x1.2000000000000p+4f) {
      v20 = 0x1.2000000000000p+4f;
    }
    *(float*)(a1 + 144) = v20;
  }
}

void game_map_anonymous_ProcMapSeqBattle_RushCommit(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  int v6;
  __int64* v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  float v18;
  __int128 v19;
  __int128 v20;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int128 v25;
  struct {
    __int64 v26[4];
    __int64* v27;
  } v26_;

  v2 = *(_QWORD*)(a1 + 168);
  v26_.v26[0] = (__int64)GameData_1f994c8;
  v26_.v26[1] = a1;
  v26_.v27 = v26_.v26;
  game_map_BattleTarget_EachTrick_alt1(v2, (__int64)v26_.v26);
  if (v26_.v27 == v26_.v26) {
    v3 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v26_.v27 + v3))((__int64)v26_.v27);
LABEL_6:
  v4 = *(_QWORD*)(a1 + 168);
  v6 = *(unsigned __int8*)(v4 + 8);
  v5 = (_BYTE*)(v4 + 8);
  if (v6 != 0) {
    v7 = game_UnitPool_Get_alt1(v5);
    if (v7 != nullptr) {
      v8 = (__int64)v7;
      BattleTarget_8fe8e0_alt1((void*)(&v25), *(_QWORD*)(a1 + 168));
      v9 = (int)(float)((float)(*(float*)&v25 + 0x1.4000000000000p+10f) *
                        0x1.99999a0000000p-3f);
      v10 = (int)(float)((float)(*((float*)&v25 + 2) + 0x1.4000000000000p+10f) *
                         0x1.99999a0000000p-3f);
      if ((char)v9 >= 1 && (char)v10 >= 1) {
        v12 = *(_QWORD*)(v8 + 8);
        *(_BYTE*)(v8 + 584) = v9;
        *(_BYTE*)(v8 + 585) = v10;
        if (v12 != 0) {
          v13 = *(char*)(v12 + 584);
          if ((v13 & 0x80000000) == 0) {
            v14 = *(char*)(v12 + 585);
            if ((v14 & 0x80000000) == 0) {
              v15 = *(_DWORD*)(v12 + 592);
              v16 = v13 | 0x100;
              v17 = v14 | 0x100;
              v18 = (float)(unsigned int)(v15 - 1) * 0x1.4000000000000p+1f;
              if (v15 <= 0) {
                v18 = 0x0.0p+0f;
              }
              *(_QWORD*)&v19 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v16 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v18);
              v23 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v17 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v18);
              *(float*)&v24 =
                  (float)((float)((float)((float)v16 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v18;
              *((_QWORD*)&v19 + 1) = v23;
              *(_OWORD*)v26_.v26 = v19;
              *(_QWORD*)&v20 = __PAIR64__(
                  COERCE_UNSIGNED_INT(Unit_6c7fa0(v12, v26_.v26)), v24);
              *((_QWORD*)&v20 + 1) = v23;
              *(_OWORD*)v26_.v26 = v20;
              Cursor_734a80(v8 + 48, v26_.v26);
              UnitActor_81ba20(v8);
            }
          }
          v22 = *(_QWORD*)(v8 + 264);
          if (v22 != 0) {
            CharacterBuilder_1084780(v22);
          }
        }
      }
    }
  }
}

__int64 game_map_anonymous_ProcMapSeqBattle_RushEnd(__int64 a1)
{
  unsigned int v2;
  __int128 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  BattleTarget_8fe8e0_alt1((void*)(v7_.v7), *(_QWORD*)(a1 + 168));
  v2 = v7_.v7[1];
  *(_QWORD*)(a1 + 23120) = v7_.v7[0];
  v3 = *(_OWORD*)(a1 + 23120);
  *((_QWORD*)&v3 + 1) = v2;
  *(_OWORD*)(a1 + 23120) = v3;
  ProcMapSeqBattle_7b6b80_alt1(a1);
  Camera_7c0130(*GameData_212cfc8[0], 0);
  v4 = *(_QWORD*)(a1 + 168);
  v7_.v8 = v7_.v7;
  v7_.v7[0] = GameData_1f99548;
  game_map_BattleTarget_EachTrick_alt1(v4, (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

void game_map_anonymous_ProcMapSeqBattle_BlowMove(__int64 a1)
{
  __int64 v1;
  int v2;
  __int16* v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12[4];
    __int64* v13;
  } v12_;
  struct {
    __int64 v14;
    __int64 v15;
    __int64 v16;
  } v14_;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) == 0) {
    return;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                  8LL * (*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF));
  if (v1 == 0) {
    return;
  }
  if (*(_WORD*)(v1 + 256) == 0) {
    return;
  }
  if (*(unsigned __int16*)(v1 + 256) <= 2u) {
    return;
  }
  v2 = *(__int16*)(*(_QWORD*)(v1 + 264) + 4LL);
  if (v2 < 1) {
    return;
  }
  v3 = *(__int16**)(v1 + 264);
  v4 = *(_QWORD*)(a1 + 168);
  v5 = *v3;
  v6 = v3[1];
  v14_.v15 = 0;
  v14_.v16 = 0;
  v14_.v14 = 0;
  v12_.v12[0] = (__int64)GameData_1f995c8;
  v12_.v12[1] = (__int64)&v14_.v14;
  v12_.v13 = v12_.v12;
  if (*(int*)(v4 + 12356) < 1) {
    game_map_anonymous_ProcMapSeqBattle_BlowMove_closure_Invoke(v12_.v12,
                                                                v4 + 52),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v7 = v4 + 68;
    v8 = 0;
    do {
      if (v12_.v13 == nullptr) {
        GameRoutine_60a310_alt2(),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(__int64*, __int64))(*v12_.v13 + 48))(v12_.v13, v7),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ++v8;
      v7 += 12;
    } while (v8 < *(int*)(v4 + 12356));
  }
  if (v12_.v13 == v12_.v12) {
    v10 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_17;
    }
    v10 = 40;
  }
  (*(void (**)(__int64*, __int64))(*v12_.v13 + v10))(v12_.v13, v9),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_17:
  GameHr_90e760(&v14_.v14, v5, v6, v2),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_90edc0((__int64)&v14_.v14),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v14_.v14 != 0) {
    v14_.v15 = v14_.v14;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v14_.v14),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

__int64 game_map_anonymous_ProcMapSeqBattle_TryNotice(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  _QWORD v13[4];
  _QWORD* v14;

  v1 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e50);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      return result;
    }
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e50);
      if ((result == 0 || *(_DWORD*)(result + 32) == 0) &&
          game_GameModeData_instance_ != 0) {
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e40);
        if (result != 0 && *(_DWORD*)(result + 32) != 0) {
          return result;
        }
      }
    }
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return result;
    }
  }
  result = GameData_21cd108;
  if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) == 0) {
    return result;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                  8LL * (*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF));
  if (v4 == 0 || *(_QWORD*)(v4 + 96) == 0) {
    return result;
  }
  result = GameData_21cd108 + 8;
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0 &&
      (result = game_UnitPool_Get(result)) != 0 &&
      (v5 = *(_QWORD*)(result + 440)) != 0) {
    v6 = *(_BYTE*)(v5 + 16);
  }
  else {
    v6 = 9;
  }
  if (((1 << v6) & 6) == 0 || *(_QWORD*)(v4 + 96) == 0) {
    return result;
  }
  v7 = ProcList_9bd480(v1);
  v13[0] = GameData_1f999c8;
  v14 = v13;
  v8 = game_ProcList_Call_9bcfa0(v7, v13);
  v11[0] = GameData_1f99a48;
  v11[1] = v4;
  v12 = v11;
  game_ProcList_Call_9bcfa0(v8, v11);
  if (v12 == v11) {
    v9 = 32;
    goto LABEL_30;
  }
  if (v12 != nullptr) {
    v9 = 40;
  LABEL_30:
    (*(void (**)(void*))(*v12 + v9))(v12);
  }
  result = (__int64)v14;
  if (v14 == v13) {
    v10 = 32;
  }
  else {
    if (v14 == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (*(__int64 (**)(void*))(*v14 + v10))(v14);
}

__int64

game_map_anonymous_ProcMapSeqBattle_RequestToREcordHistoryForTrick_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 24LL))(a2);
  v3 = GameData_22400f8;
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    v4 = result;
    v5 = GameRoutine_812b00();
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
    if ((result & 1) != 0) {
      result = GameRoutine_12a5de0(v4);
      if ((result & 1) != 0 ||
          (result = game_script_map_obj_g_object_records,
           game_script_map_obj_g_object_records != 0) &&
              ((result = GameRoutine_12a5400(
                    game_script_map_obj_g_object_records, v4)) &
               1) != 0) {
        *(_DWORD*)(v3 + 12) |= 0x2000u;
      }
    }
  }
  return result;
}

__int64

game_map_anonymous_ProcMapSeqBattle_RequestToRecordHistory_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;

  result = a2 + 5;
  if (*(_BYTE*)(a2 + 5) == 0) {
    v4 = *(__int16*)(a2 + 6);
    if (v4 < 0) {
      return result;
    }
    goto LABEL_6;
  }
  result = game_UnitPool_Get(result);
  v4 = *(__int16*)(a2 + 6);
  if (v4 < 0) {
    if (result == 0) {
      return result;
    }
  }
  else if (result == 0) {
  LABEL_6:
    result = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) +
             144LL * (int)v4;
    if (result == 0) {
      return result;
    }
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
    }
    v9[0] = GameData_1f99248;
    v10 = v9;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)result + 672LL))(result, v9);
    result = (__int64)v10;
    if (v10 == v9) {
      v5 = 32;
    }
    else {
      if (v10 == nullptr) {
        return result;
      }
      v5 = 40;
    }
    return (*(__int64 (**)(__int64))(*v10 + v5))((__int64)v10);
  }
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    v6 = *(_QWORD*)(result + 440);
    if (v6 != 0 && *(unsigned __int8*)(v6 + 16) <= 8u &&
        game_map_UnitFlags_instance_ != 0) {
      v7 = *(unsigned __int8*)(result + 2088);
      if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v7) & 1) != 0) {
        *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v7) |= 2u;
      }
    }
  }
  if (*(_BYTE*)(result + 1880) != 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                           8LL * *(unsigned __int8*)(result + 1880)) +
                109LL) != 0 &&
      *(_BYTE*)(result + 1883) != 0) {
    v8 = result;
    result = game_UnitPool_Get(result + 1883);
    if (result == v8 && GameData_22400f8 != 0 &&
        *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x40000u;
    }
  }
  return result;
}

bool ProcMapSeqBattle_7b6760(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  _BOOL8 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned int v10;
  _BYTE* v11;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  bool v16;

  v2 = *(unsigned __int16*)(a1 + 236);
  v3 = *(unsigned __int8*)(a1 + 23032) - 1;
  result = v3 < 2;
  if (v2 == 0 && ((int)(v5 = *(unsigned int*)(a1 + 232)) <= -1
                      ? (v6 = &game_g_empty_item)
                      : (v6 = (__int64*)(*(_QWORD*)(a1 + 216) + 8 * v5 + 828)),
                  (v2 = *(unsigned __int16*)v6) == 0) ||
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v2) +
                 336LL) &
       0x80) == 0) {
    v7 = *(_QWORD*)(a1 + 248);
    if (v7 == 0 || (*(_WORD*)(v7 + 754) & 1) != 0) {
      v8 = *(_QWORD*)(a1 + 168);
      v9 = *(unsigned __int8*)(v8 + 24);
      if (v9 != 27) {
        if (v9 != 4) {
          goto LABEL_15;
        }
        v10 = (unsigned __int16)game_g_empty_item;
        if (*(_WORD*)(v8 + 32) != 0) {
          v10 = *(unsigned __int16*)(v8 + 32);
        }
        if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                  8LL * v10) +
                       73LL) &
             0xFE) != 8) {
        LABEL_15:
          if ((*(_DWORD*)(v8 + 40) & 0xFFF) != 0) {
            v11 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                             8LL * (*(_DWORD*)(v8 + 40) & 0xFFF));
            if (v11 == nullptr) {
              return result;
            }
            return v11[250] != 30 && v3 < 2;
          }
          v13 = *(unsigned __int16*)(v8 + 32);
          if (v13 == 0) {
            v13 = *(unsigned __int16*)game_g_empty_item_ptr;
          }
          v14 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v13);
          v11 = *(_BYTE**)(v14 + 192);
          v15 = *(unsigned __int8*)(v14 + 72);
          v16 = v11 == nullptr || v15 > 7;
          if (!v16 && v11[105] != 0 && v11[104] != 2) {
            return v11[250] != 30 && v3 < 2;
          }
          return result;
        }
      }
    }
  }
  return false;
}

__int64 ProcMapSeqBattle_7b68c0(__int64 a1, char a2, char a3)
{
  __int64 v4;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  bool v11;
  int v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;

  v4 = a1 + 176;
  if ((a2 & 1) != 0) {
    v6 = 0x800000;
  }
  else {
    v6 = 0;
  }
  if ((a3 & 1) != 0) {
    v7 = 0x1000000;
  }
  else {
    v7 = 0;
  }
  *(_DWORD*)(a1 + 11452) = v7 | v6 | *(_DWORD*)(a1 + 11452) & 0xFE7FFFFF;
  v8 = GameData_21d1e38;
  if (GameData_21d1e38 != 0) {
    if (*(_BYTE*)(a1 + 22760) != 0) {
      v9 = a1 + 11488;
    }
    else {
      v9 = v4;
    }
    v10 = *(_QWORD*)(GameData_21d1e38 + 152) == 0;
    *(_BYTE*)(GameData_21d1e38 + 289) = v10;
    v11 = (*(_DWORD*)(a1 + 11452) & 0x4000) != 0;
    if (v10) {
      v11 = true;
    }
    *(_BYTE*)(v8 + 289) = v11;
    v12 = *(_DWORD*)(a1 + 11452);
    *(_QWORD*)(v8 + 152) = v9;
    *(_BYTE*)(v8 + 290) = (v12 & 0x800000) != 0;
    CombatHUDWindow_183e450();
  }
  v13 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 792, 16, 0);
  v13[2] = 0;
  v14 = v13 + 3;
  v15 = v13;
  *v13 = GameData_212d1e8 + 2;
  v13[1] = 0;
  memset(v13 + 3, 0, 728, v16, v17, v18);
  v15[32] = 0;
  v15[33] = 0;
  v15[44] = 0;
  v15[45] = 0;
  v15[56] = 0;
  v15[57] = 0;
  *(_DWORD*)((char*)v15 + 367) = 0;
  v15[22] = 0;
  v15[23] = 0;
  v15[24] = 0;
  v15[25] = 0;
  *((_WORD*)v15 + 104) = 0;
  v15[35] = 0;
  v15[36] = 0;
  *((_BYTE*)v15 + 296) = 0;
  v15[30] = 0;
  v15[31] = 0;
  *((_DWORD*)v15 + 82) = -1;
  v15[42] = 0;
  v15[43] = 0;
  v15[47] = 0;
  v15[48] = 0;
  *((_BYTE*)v15 + 392) = 0;
  v15[18] = 0x43FA000043FA0000LL;
  v15[19] = 0xC3FA0000C3FA0000LL;
  v15[20] = 0x43FA000043FA0000LL;
  v15[21] = 0xC3FA0000C3FA0000LL;
  v15[29] = 0;
  *(_DWORD*)((char*)v15 + 463) = 0;
  *((_DWORD*)v15 + 106) = -1;
  v15[54] = 0;
  v15[55] = 0;
  *((_BYTE*)v15 + 488) = 0;
  v15[59] = 0;
  v15[60] = 0;
  *(_DWORD*)((char*)v15 + 271) = 0;
  *((_DWORD*)v15 + 130) = -1;
  *(_DWORD*)((char*)v15 + 559) = 0;
  v15[69] = 0;
  v15[68] = 0;
  v15[67] = 0;
  v15[66] = 0;
  *((_BYTE*)v15 + 584) = 0;
  v15[72] = 0;
  v15[71] = 0;
  *((_DWORD*)v15 + 154) = -1;
  v15[78] = 0;
  v15[79] = 0;
  v15[80] = 0;
  v15[81] = 0;
  v15[82] = 0;
  v15[83] = 0;
  v15[84] = 0;
  v15[85] = 0;
  v15[86] = 0;
  v15[87] = 0;
  v15[88] = 0;
  *(_QWORD*)((char*)v15 + 300) = 0x6300000063LL;
  *(_QWORD*)((char*)v15 + 396) = 0x6300000063LL;
  *(_QWORD*)((char*)v15 + 492) = 0x6300000063LL;
  v15[89] = 0;
  v15[90] = 0;
  v15[91] = 0;
  v15[92] = 0;
  *((_DWORD*)v15 + 186) = 0;
  v15[98] = 0;
  v15[97] = 0;
  v15[96] = 0;
  v15[95] = 0;
  v15[94] = 0;
  v24 = v14;
  v25 = v15;
  v15[40] = -4294967197LL;
  v15[52] = -4294967197LL;
  v15[64] = -4294967197LL;
  *(_QWORD*)((char*)v15 + 588) = 0x6300000063LL;
  v15[76] = -4294967197LL;
  GameRoutine_10ea6e0(v14, v4);
  GameRoutine_1090da0(v14);
  if ((a2 & 1) != 0) {
    v19 = 0;
  }
  else {
    v19 = a1;
  }
  v20 = v19 + 152;
  if ((a2 & 1) != 0) {
    v21 = 0;
  }
  else {
    v21 = v20;
  }
  result = GameRoutine_10d4da0(a1, &v24, v21);
  v23 = v25;
  if (v25 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v25 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v23 + 16LL))(v23);
    result = std___1___shared_weak_count___release_weak(v23);
  }
  *(_DWORD*)(a1 + 11452) &= 0xFE7FFFFF;
  return result;
}

__int64 ProcMapSeqBattle_7b6b80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  char v5;
  __int64 v6;
  int v7;
  __int64 v8;

  if ((*(_BYTE*)(*GameData_212cfd0[0] + 12674) & 0x20) == 0) {
    v1 = result;
    v2 = *(_QWORD*)(result + 168);
    v3 = *(unsigned __int8*)(v2 + 8);
    result = v2 + 8;
    if (v3 != 0 && (result = game_UnitPool_Get(result)) != 0 &&
        (v4 = *(_QWORD*)(result + 440)) != 0) {
      v5 = *(_BYTE*)(v4 + 16);
    }
    else {
      v5 = 9;
    }
    if (((1 << v5) & 0xF1) != 0 &&
        (game_GameModeData_instance_ == 0 ||
         ((result = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48),
               &GameData_21d1e50)) == 0 ||
          *(_DWORD*)(result + 32) == 0) &&
             (game_GameModeData_instance_ == 0 ||
              (v6 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48),
                   &GameData_21d1e50)) != 0 &&
                  *(_DWORD*)(v6 + 32) != 0 ||
              game_GameModeData_instance_ == 0 ||
              (result = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48),
                   &GameData_21d1e40)) == 0 ||
              *(_DWORD*)(result + 32) == 0))) {
      v7 = *(_DWORD*)(v1 + 23036);
      if (v7 < 0 && (*(_DWORD*)(v1 + 23040) & 0x80000000) != 0) {
        result = GameData_21cd130;
      }
      else {
        result = GameData_21cd130;
        v8 = *(_QWORD*)(GameData_21cd130 + 48);
        if (*(_DWORD*)(v8 + 8) != v7 ||
            *(_DWORD*)(v8 + 12) != *(_DWORD*)(v1 + 23040)) {
          goto LABEL_24;
        }
      }
      result = GameRoutine_730ff0(result, v1 + 23120);
    LABEL_24:
      *(_QWORD*)(v1 + 23036) = -1;
    }
  }
  return result;
}

__int64 ProcMapSeqBattle_7b6ce0(__int64 result, __int64 a2, unsigned __int64 a3,
                                double a4, double a5, double a6, double a7,
                                double a8, long double a9)
{
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  int v14;
  unsigned __int8* v15;
  _DWORD* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  bool v23;

  v9 = GameData_212c880[0];
  v10 = *(_DWORD*)a3 & 0xFFF;
  v11 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v12 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * v10) + 832LL);
  if (v12 != 0 && *(_WORD*)(v12 + 32) != 0) {
    v13 = **(_BYTE***)(v12 + 40);
    if (v13 != nullptr && a2 != 0 && *(_BYTE*)(result + 23032) != 0) {
      v14 = (unsigned __int8)*v13;
      if (*v13 != 0) {
        v15 = v13 + 1;
        v16 = (_DWORD*)a3;
        LODWORD(a3) = 0;
        do {
          a3 = (unsigned int)(v14 - a3 + 32 * a3);
          v17 = *v15++;
          v14 = v17;
        } while (v17 != 0);
      }
      else {
        v16 = (_DWORD*)a3;
        a3 = 0;
      }
      v18 = result;
      v19 = a2;
      GameRoutine_76bcd0(result, a2, a3,
                         *(float*)(*(_QWORD*)GameData_212d270 + 456LL));
      result = v18;
      a2 = v19;
      v11 = *(_QWORD*)(*v9 + 64);
      v10 = *v16 & 0xFFF;
    }
  }
  v20 = *(_QWORD*)(v11 + 8 * v10);
  v21 = *(_QWORD*)(v20 + 856);
  v22 = *(unsigned __int16*)(v20 + 656);
  v23 = v21 != 0 && v22 == 0;
  if (v23 && a2 != 0 && *(_BYTE*)(result + 23032) != 0) {
    return GameRoutine_7aa840(v21, a2, a4, a5, a6, a7, a8, a9);
  }
  return result;
}

__int64 ProcMapSeqBattle_7b6e10(__int64 result, unsigned int a2)
{
  int v3;
  int v4;
  _QWORD v5[2];

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) != 0)) {
    *(struct PseudoSret*)(v5) = GameRoutine_79ca50(result);
    return GameRoutine_10a4c70(v5, 0, a2);
  }
  return result;
}

__int64

game_map_anonymous_ProcMapSeqBattle_RushBegin_closure_Invoke_7b7050(__int64 a1,
                                                                    _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 400LL))(*a2, 0);
}

__int64 game_map_anonymous_ProcMapSeqBattle_RushBegin_closure_Invoke_7b7160(
    __int64 a1, unsigned int* a2, unsigned int* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2 | ((unsigned __int64)*a3 << 32);
  v5 = *(_QWORD*)(v3 + 168);
  v9 = v8;
  v8[0] = GameData_1f99438;
  v8[1] = v3;
  v8[2] = v4;
  game_map_BattleTarget_EachTrick(v5, v8);
  result = (__int64)v9;
  if (v9 == v8) {
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v9 + v7))((__int64)v9);
}

__int64

game_map_anonymous_ProcMapSeqBattle_RushBegin_closure_Invoke_7b72d0(__int64 a1,
                                                                    _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 24LL))(
      *a2, *(unsigned int*)(a1 + 16), *(unsigned int*)(a1 + 20));
  if ((result & 1) != 0) {
    result = game_map_anonymous_TrickEntity_TryBroken(
        *(_QWORD*)(*GameData_212cfb8[0] + 16), v2);
    if ((result & 1) != 0) {
      return GameRoutine_7c0130(*GameData_212cfc8[0], 0);
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqBattle_RushEnd_closure_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 400LL))(*a2, 1);
}

__int64*

game_map_anonymous_ProcMapSeqBattle_BlowMove_closure_Invoke(__int64* result,
                                                            __int64 a2)
{
  _BYTE* v2;
  int v3;
  __int64* v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  struct {
    __int64* v8;
    int v9;
    int v10;
  } v8_;

  v3 = *(unsigned __int8*)(a2 + 5);
  v2 = (_BYTE*)(a2 + 5);
  if (v3 != 0) {
    v4 = (__int64*)result[1];
    result = game_UnitPool_Get_alt1(v2);
    if (result != nullptr) {
      v5 = *((unsigned __int8*)result + 584);
      v6 = *((unsigned __int8*)result + 585);
      v8_.v8 = result;
      v8_.v9 = v5 | (v6 << 8);
      v8_.v10 = v8_.v9;
      v7 = v4[1];
      if (v7 >= v4[2]) {
        result = (__int64*)GameHr_910d60(v4, (__int64)&v8_.v8);
      }
      else {
        *(_QWORD*)v7 = result;
        *(_BYTE*)(v7 + 8) = v5;
        result = (__int64*)(v7 + 16);
        *(_BYTE*)(v7 + 9) = v6;
        *(_WORD*)(v7 + 10) = 0;
        *(_BYTE*)(v7 + 12) = v5;
        *(_BYTE*)(v7 + 13) = v6;
        *(_WORD*)(v7 + 14) = 0;
      }
      v4[1] = (__int64)result;
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqBattle_CommitSkill_closure_Invoke(
    __int64 result, _DWORD* a2, _DWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  LODWORD(v3) = *a2 + 32 * *a3;
  if ((unsigned int)v3 >= 0x400) {
    v3 = 0;
  }
  else {
    v3 = (unsigned int)v3;
  }
  v4 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v3 + 8);
  if (v4 != 0) {
    v5 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v4;
    v6 = v5 - 2224;
    if (v4 <= 0xFA && v5 != 2224 && *(_QWORD*)(v5 - 1832) != 0) {
      v8 = *(_QWORD*)(v5 - 1784);
      if (v8 != 0 && *(unsigned __int8*)(v8 + 16) <= 3u) {
        v9 = *(__int64**)(result + 8);
        v11 = (__int64*)v9[1];
        v10 = v9[2];
        if ((unsigned __int64)v11 >= v10) {
          v13 = *v9;
          v14 = (__int64)v11 - *v9;
          v15 = (v14 >> 3) + 1;
          if (v15 >> 61 != 0) {
            GameRoutine_6c1f60();
          }
          v16 = v10 - v13;
          v17 = fw_memory_g_heap_manager_ptr;
          if (v16 >> 2 > v15) {
            v15 = v16 >> 2;
          }
          if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
            v18 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v18 = v15;
          }
          if (v18 != 0) {
            if (v18 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v19 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
          }
          else {
            v19 = 0;
          }
          v20 = v19 + 8 * v18;
          v21 = v19 + v14 - 8 * (v14 >> 3);
          *(_QWORD*)(v19 + v14) = v6;
          v12 = v19 + v14 + 8;
          result = memcpy(v21, v13, v14);
          *v9 = v21;
          v9[1] = v12;
          v9[2] = v20;
          if (v13 != 0) {
            v22 = 128;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
              v22 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v22, v13);
          }
        }
        else {
          *v11 = v6;
          v12 = (__int64)(v11 + 1);
        }
        v9[1] = v12;
      }
    }
  }
  return result;
}

__int64 ProcMapSeqBattle_7b79c0(__int64 a1, int a2, int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  bool v25;
  int v26;

  v6 = a1 + 22744;
  v7 = a1 + 11448;
  v8 = *(_QWORD*)(a1 + 168) + 12LL * a2;
  if ((MapUtil_753570((unsigned int)*(char*)(v8 + 69),
                      (unsigned int)*(char*)(v8 + 70)) &
       1) != 0 &&
      (*(_BYTE*)((v9 = v8 + 68) + 5) != 0 &&
           (v10 = game_UnitPool_Get(v9 + 5)) != 0 &&
           *(_QWORD*)(v10 + 392) != 0 ||
       (*(__int16*)(v9 + 6) & 0x8000000000000000LL) == 0 &&
           (v11 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL)) != 0 &&
           ((*(__int64 (**)(__int64))(
                *(_QWORD*)(v11 + 144LL * *(__int16*)(v9 + 6)) + 272LL))(
                v11 + 144LL * *(__int16*)(v9 + 6)) &
            1) != 0)) {
    v12 = *(_QWORD*)(a1 + 168);
    if (*(_BYTE*)(v12 + 8) != 0) {
      v13 = game_UnitPool_Get(v12 + 8);
      v12 = *(_QWORD*)(a1 + 168);
      v14 = v13;
    }
    else {
      v14 = 0;
    }
    BattleInfo_7905d0(a1 + 176, v14, *(unsigned int*)(v12 + 28));
    BattleInfo_790b00(a1 + 176, *(_QWORD*)(a1 + 168) + 12LL * a2 + 68);
    v19 = *(_QWORD*)(a1 + 168);
    if ((*(_DWORD*)(v19 + 40) & 0xFFF) != 0) {
      v20 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                       8LL * (*(_DWORD*)(v19 + 40) & 0xFFF));
    }
    else {
      v21 = *(unsigned __int16*)(v19 + 32);
      if (*(_WORD*)(v19 + 32) == 0) {
        v21 = (unsigned __int16)game_g_empty_item;
      }
      v22 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v21);
      v23 = *(_QWORD*)(v22 + 192);
      v24 = *(unsigned __int8*)(v22 + 72);
      v25 = v23 == 0 || v24 > 7;
      if (v25 || *(_BYTE*)(v23 + 105) == 0) {
        v20 = 0;
      }
      else if (*(_BYTE*)(v23 + 104) == 2) {
        v20 = 0;
      }
      else {
        v20 = v23;
      }
    }
    if (*(_BYTE*)(v7 + 1) != 0) {
      GameRoutine_7992e0(a1 + 192);
      GameRoutine_7992e0(a1 + 952);
      GameRoutine_7992e0(a1 + 1712);
      GameRoutine_7992e0(a1 + 2472);
      *(_DWORD*)(a1 + 11432) = 0;
      *(_WORD*)v7 = 0;
      *(_QWORD*)(a1 + 11452) = 0;
      *(_QWORD*)(a1 + 11458) = 0;
      BattleArea_8b9d00(a1 + 11472);
    }
    GameRoutine_799aa0(a1 + 192, v20);
    if ((*(_QWORD*)(*GameData_212cfd0[0] + 12672) & 0x200000LL) != 0) {
      v26 = 67239936;
    }
    else {
      v26 = 0x4000000;
    }
    *(_DWORD*)(a1 + 11452) |=
        a3 | v26 | (32 * *(_DWORD*)(GameData_21ca2f8 + 20)) & 0x40000 | 0x40;
    GameRoutine_790ba0(a1 + 176);
    *(_BYTE*)(v7 + 1) |= 1u;
  }
  else {
    GameRoutine_7992e0(a1 + 192);
    GameRoutine_7992e0(a1 + 952);
    GameRoutine_7992e0(a1 + 1712);
    GameRoutine_7992e0(a1 + 2472);
    *(_DWORD*)(a1 + 11432) = 0;
    *(_WORD*)v7 = 0;
    *(_QWORD*)(a1 + 11452) = 0;
    *(_QWORD*)(a1 + 11458) = 0;
    BattleArea_8b9d00(a1 + 11472);
  }
  GameRoutine_7992e0(a1 + 11504);
  GameRoutine_7992e0(a1 + 12264);
  GameRoutine_7992e0(a1 + 13024);
  GameRoutine_7992e0(a1 + 13784);
  *(_DWORD*)v6 = 0;
  *(_WORD*)(v6 + 16) = 0;
  *(_QWORD*)(a1 + 22764) = 0;
  *(_QWORD*)(a1 + 22770) = 0;
  result = BattleArea_8b9d00(a1 + 22784);
  v16 = GameData_21cd148;
  if (GameData_21cd148 != 0) {
    v17 = *(_QWORD*)(a1 + 216);
    if (v17 != 0) {
      LOBYTE(v17) = *(_BYTE*)(v17 + 2088);
    }
    *(_BYTE*)(GameData_21cd148 + 1576) = v17;
    v18 = *(_QWORD*)(a1 + 976);
    if (v18 != 0) {
      LOBYTE(v18) = *(_BYTE*)(v18 + 2088);
    }
    *(_BYTE*)(v16 + 1577) = v18;
  }
  return result;
}

void game_map_anonymous_ProcMapSeqBattle_CommitBarrier(_QWORD* result,
                                                       unsigned __int8 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  bool v13;
  int v14;
  __int64 v15;
  unsigned __int8* v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  _QWORD* v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  int v31;
  _BYTE* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  unsigned __int8* v38;
  int v39;
  _QWORD* v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  _BYTE* v55;
  __int64 v56;
  __int64 v57;
  int v58;
  unsigned __int8* v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  struct {
    _QWORD v67[4];
    _QWORD* v68;
  } v67_;

  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v3 = a2;
  v4 = result[95 * a2 + 27];
  if (v4 == 0) {
    return;
  }
  if ((*(_WORD*)(v4 + 1872) & 0xFFF) == 0) {
    return;
  }
  v5 = *(_QWORD*)(v4 + 600);
  v6 = *(_QWORD*)(v4 + 608) - v5;
  if ((int)(v6 >> 2) < 1) {
    return;
  }
  v7 = ((v6 >> 2) & 0x7FFFFFFF) - 1;
  v8 = (v6 >> 2) & 7;
  if (v7 < 7) {
    v9 = 0;
    v10 = 0;
    if (v8 == 0) {
      goto LABEL_30;
    }
    goto LABEL_26;
  }
  v11 = (_BYTE*)(v5 + 18);
  v12 = 0;
  v10 = 0;
  do {
    v12 -= 8;
    if (*(v11 - 16) != 0) {
      ++v10;
    }
    if (*(v11 - 12) != 0) {
      ++v10;
    }
    if (*(v11 - 8) != 0) {
      ++v10;
    }
    if (*(v11 - 4) != 0) {
      ++v10;
    }
    if (*v11 != 0) {
      ++v10;
    }
    if (v11[4] != 0) {
      ++v10;
    }
    v13 = v11[8] == 0;
    v14 = (unsigned __int8)v11[12];
    v11 += 32;
    if (!v13) {
      ++v10;
    }
    if (v14 != 0) {
      ++v10;
    }
  } while (-8LL * ((v6 >> 5) & 0xFFFFFFF) != v12);
  v9 = -v12;
  if (v8 != 0) {
  LABEL_26:
    v15 = (v6 >> 2) & 7;
    v16 = (unsigned __int8*)(v5 + 4 * v9 + 2);
    do {
      v17 = *v16;
      v16 += 4;
      if (v17 != 0) {
        ++v10;
      }
      --v15;
    } while (v15 != 0);
  }
LABEL_30:
  if (v10 == 0) {
    return;
  }
  if ((*(_BYTE*)(result[1430] + 11277LL) & 8) != 0) {
    return;
  }
  v18 = *((_DWORD*)result + 2858);
  if (v18 == 0) {
    return;
  }
  if (v18 == 1) {
    v19 = 0;
    v20 = 0;
  }
  else {
    v21 = (unsigned __int8*)result + 3243;
    v22 = 0;
    v20 = 0;
    do {
      if (v21[1] == 3 && *v21 == a2) {
        v23 = *(_DWORD*)(v21 + 9);
        if ((int)v20 <= 1) {
          v24 = 1;
        }
        else {
          v24 = v20;
        }
        if ((v23 & 0x60) != 0) {
          v24 = 2;
        }
        if ((v23 & 2) != 0) {
          v20 = v24;
        }
        else {
          v20 = (unsigned int)v20;
        }
      }
      if (v21[65] == 3 && v21[64] == a2) {
        v25 = *(_DWORD*)(v21 + 73);
        if ((int)v20 <= 1) {
          v26 = 1;
        }
        else {
          v26 = v20;
        }
        if ((v25 & 0x60) != 0) {
          v26 = 2;
        }
        if ((v25 & 2) != 0) {
          v20 = v26;
        }
        else {
          v20 = (unsigned int)v20;
        }
      }
      v21 += 128;
      v22 -= 2;
    } while (-(__int64)(v18 & 0xFFFFFFFE) != v22);
    v19 = -v22;
  }
  if ((v18 & 1) != 0) {
    v27 = &result[8 * v19 + 405];
    if (__PAIR64__(*((unsigned __int8*)v27 + 4),
                   *((unsigned __int8*)v27 + 3)) == (a2 | 0x300000000LL)) {
      v28 = *((_DWORD*)v27 + 3);
      if ((v28 & 2) != 0) {
        if ((int)v20 <= 1) {
          v29 = 1;
        }
        else {
          v29 = v20;
        }
        if ((v28 & 0x60) != 0) {
          v20 = 2;
        }
        else {
          v20 = v29;
        }
      }
    }
  }
  if ((_DWORD)v20 == 0) {
    return;
  }
  if (v7 >= 7) {
    v32 = (_BYTE*)(v5 + 18);
    v33 = 0;
    v31 = 0;
    v34 = -8LL * ((v6 >> 5) & 0xFFFFFFF);
    do {
      v33 -= 8;
      if (*(v32 - 16) != 0) {
        v35 = v31 + 1;
      }
      else {
        v35 = v31;
      }
      if (*(v32 - 12) != 0) {
        ++v35;
      }
      if (*(v32 - 8) != 0) {
        ++v35;
      }
      if (*(v32 - 4) != 0) {
        ++v35;
      }
      if (*v32 != 0) {
        ++v35;
      }
      if (v32[4] != 0) {
        ++v35;
      }
      v13 = v32[8] == 0;
      v36 = (unsigned __int8)v32[12];
      v32 += 32;
      if (!v13) {
        ++v35;
      }
      if (v36 != 0) {
        v31 = v35 + 1;
      }
      else {
        v31 = v35;
      }
    } while (v34 != v33);
    v30 = -v33;
  }
  else {
    v30 = 0;
    v31 = 0;
  }
  if (v8 != 0) {
    v38 = (unsigned __int8*)(v5 + 4 * v30 + 2);
    do {
      v39 = *v38;
      v38 += 4;
      if (v39 != 0) {
        ++v31;
      }
      --v8;
    } while (v8 != 0);
  }
  LODWORD(v67_.v67[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A4LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if ((game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)v67_.v67) & 1) != 0) {
    v40 = result;
    v41 = &result[95 * (unsigned int)v3];
  LABEL_107:
    GameRoutine_7b8280_alt1((__int64)v40, a2, *((_DWORD*)v41 + 68),
                            *((_DWORD*)v41 + 69), v20),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    goto LABEL_110;
  }
  v40 = result;
  v42 = result[21];
  if (*(int*)(v42 + 12356) < 1) {
    v41 = &v40[95 * (unsigned int)v3];
    goto LABEL_107;
  }
  v43 = 0;
  v44 = v42 + 68;
  v67_.v67[0] = GameData_1f996c8;
  v67_.v67[1] = v40;
  v45 = v67_.v67;
  v67_.v67[2] = v3 | (v20 << 32);
  v67_.v68 = v67_.v67;
  while (1) {
    (*(void (**)(_QWORD*, __int64))(*v45 + 48LL))(v45, v44),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v45 = v67_.v68;
    if (++v43 >= *(int*)(v42 + 12356)) {
      break;
    }
    v44 += 12;
    if (v67_.v68 == nullptr) {
      GameRoutine_60a310_alt2(),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  if (v67_.v68 == v67_.v67) {
    v48 = 32;
    goto LABEL_109;
  }
  if (v67_.v68 != nullptr) {
    v48 = 40;
  LABEL_109:
    (*(void (**)(_QWORD*, __int64, __int64))(*v67_.v68 + v48))(v67_.v68, v46,
                                                               v47),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_110:
  v49 = *(_DWORD*)(v4 + 1872) & 0xFFF;
  if ((*(_DWORD*)(v4 + 1872) & 0xFFF) != 0 &&
      (v50 = *(_QWORD*)(v4 + 600),
       (int)((v51 = *(_QWORD*)(v4 + 608) - v50) >> 2) >= 1)) {
    v52 = (v51 >> 2) & 7;
    if (((v51 >> 2) & 0x7FFFFFFF) - 1 >= 7) {
      v55 = (_BYTE*)(v50 + 18);
      v56 = 0;
      v54 = 0;
      v57 = -8LL * ((v51 >> 5) & 0xFFFFFFF);
      do {
        v56 -= 8;
        if (*(v55 - 16) != 0) {
          ++v54;
        }
        if (*(v55 - 12) != 0) {
          ++v54;
        }
        if (*(v55 - 8) != 0) {
          ++v54;
        }
        if (*(v55 - 4) != 0) {
          ++v54;
        }
        if (*v55 != 0) {
          ++v54;
        }
        if (v55[4] != 0) {
          ++v54;
        }
        v13 = v55[8] == 0;
        v58 = (unsigned __int8)v55[12];
        v55 += 32;
        if (!v13) {
          ++v54;
        }
        if (v58 != 0) {
          ++v54;
        }
      } while (v57 != v56);
      v53 = -v56;
    }
    else {
      v53 = 0;
      v54 = 0;
    }
    if (v52 != 0) {
      v59 = (unsigned __int8*)(v50 + 4 * v53 + 2);
      do {
        v60 = *v59;
        v59 += 4;
        if (v60 != 0) {
          ++v54;
        }
        --v52;
      } while (v52 != 0);
    }
  }
  else {
    v54 = 0;
  }
  if (v31 != v54) {
    if (v54 != 0) {
      v61 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v49);
      if (*(_WORD*)(v61 + 512) != 0) {
        v62 = *(_QWORD*)(v61 + 520);
      LABEL_147:
        v66 = *(_QWORD*)(v62 + 8);
        if (v66 != 0) {
          LODWORD(v66) = *(_WORD*)(v66 + 16) & 0xFFF;
        }
        goto LABEL_150;
      }
    }
    else {
      v63 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v49);
      v64 = *(unsigned __int16*)(v63 + 512);
      if (*(_WORD*)(v63 + 512) != 0) {
        v65 = *(_QWORD*)(v63 + 520);
        if (v64 >= 2) {
          v64 = 2;
        }
        v62 = v65 + 16LL * (v64 - 1);
        goto LABEL_147;
      }
    }
    LODWORD(v66) = 0;
  LABEL_150:
    LODWORD(v67_.v67[0]) = v66;
    Unit_6ca760(v4, v67_.v67),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
}

__int64

game_map_anonymous_ProcMapSeqBattle_CommitBarrier_closure_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  return GameRoutine_7b8280(*(_QWORD*)(a1 + 8), *(_BYTE*)(a1 + 16),
                            *(char*)(a2 + 1), *(char*)(a2 + 2),
                            *(_DWORD*)(a1 + 20));
}

__int64 game_map_anonymous_ProcMapSeqBattle_EachComplete(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  bool v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  struct {
    _BYTE v26[32];
    _BYTE* v27;
  } v26_;

  v2 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v2 + 8) != 0) {
    v5 = game_UnitPool_Get_alt1((_BYTE*)(v2 + 8));
    v2 = *(_QWORD*)(a1 + 168);
    v6 = (__int64)v5;
  }
  else {
    v6 = 0;
  }
  BattleInfo_7905d0_alt1(a1 + 176, v6, *(_DWORD*)(v2 + 28));
  v7 = *(_QWORD*)(a1 + 168);
  if ((*(_DWORD*)(v7 + 40) & 0xFFF) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(v7 + 40) & 0xFFF));
    if (*(_BYTE*)(a1 + 11449) == 0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v15 = *(unsigned __int16*)(v7 + 32);
  if (*(_WORD*)(v7 + 32) == 0) {
    v15 = (unsigned __int16)game_g_empty_item;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v15);
  v17 = *(_QWORD*)(v16 + 192);
  v18 = *(unsigned __int8*)(v16 + 72);
  v19 = v17 == 0 || v18 > 7;
  if (v19 || *(_BYTE*)(v17 + 105) == 0) {
    v8 = 0;
    if (*(_BYTE*)(a1 + 11449) == 0) {
      goto LABEL_7;
    }
  LABEL_6:
    GameRoutine_7992e0_alt1(a1 + 192);
    GameRoutine_7992e0_alt1(a1 + 952);
    GameRoutine_7992e0_alt1(a1 + 1712);
    GameRoutine_7992e0_alt1(a1 + 2472);
    *(_DWORD*)(a1 + 11432) = 0;
    *(_WORD*)(a1 + 11448) = 0;
    *(_QWORD*)(a1 + 11452) = 0;
    *(_QWORD*)(a1 + 11458) = 0;
    BattleArea_8b9d00_alt1(a1 + 11472);
    goto LABEL_7;
  }
  if (*(_BYTE*)(v17 + 104) == 2) {
    v8 = 0;
  }
  else {
    v8 = v17;
  }
  if (*(_BYTE*)(a1 + 11449) != 0) {
    goto LABEL_6;
  }
LABEL_7:
  game_map_799aa0(a1 + 192, v8);
  v9 = *(_DWORD*)(*(_QWORD*)(a1 + 168) + 44LL);
  if ((v9 & 0x80000000) != 0) {
    v10 = 0;
    if (*(_BYTE*)(a1 + 11449) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) + 144LL * v9;
  if (*(_BYTE*)(a1 + 11449) != 0) {
  LABEL_9:
    GameRoutine_7992e0_alt1(a1 + 192);
    GameRoutine_7992e0_alt1(a1 + 952);
    GameRoutine_7992e0_alt1(a1 + 1712);
    GameRoutine_7992e0_alt1(a1 + 2472);
    *(_DWORD*)(a1 + 11432) = 0;
    *(_WORD*)(a1 + 11448) = 0;
    *(_QWORD*)(a1 + 11452) = 0;
    *(_QWORD*)(a1 + 11458) = 0;
    BattleArea_8b9d00_alt1(a1 + 11472);
  }
LABEL_10:
  game_map_799b90(a1 + 192, v10);
  *(_DWORD*)(a1 + 11452) |= 0x8000u;
  game_map_790ba0(a1 + 176);
  *(_BYTE*)(a1 + 11449) |= 1u;
  v11 = *(_QWORD*)(a1 + 216);
  v12 = *(_QWORD*)(a2 + 32);
  if (v11 != 0 && *(_DWORD*)(a1 + 288) != 0 &&
      (*(_BYTE*)(v11 + 416) & 8) == 0) {
    if (v12 == 0) {
      GameRoutine_60a310_alt2();
    }
    (*(void (**)(__int64, __int64))(*(_QWORD*)v12 + 48LL))(v12, a1 + 192);
    v12 = *(_QWORD*)(a2 + 32);
  }
  v13 = *(_QWORD*)(a1 + 168);
  if (v12 != 0) {
    if (v12 == a2) {
      v26_.v27 = v26_.v26;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v12 + 24LL))(v12, v26_.v26);
      v14 = v26_.v27;
    }
    else {
      v14 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      v26_.v27 = v14;
    }
  }
  else {
    v14 = nullptr;
    v26_.v27 = nullptr;
  }
  v20 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v21 = v20;
  v20[2] = a1;
  *v20 = GameData_1f99748;
  if (v14 != nullptr) {
    if (v14 == v26_.v26) {
      v20[8] = v20 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v14 + 24LL))(v14);
    }
    else {
      v20[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v14 + 16LL))(v14);
    }
  }
  else {
    v20[8] = 0;
  }
  if (*(int*)(v13 + 12356) < 1) {
    (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, v13 + 52);
  }
  else {
    v22 = v13 + 68;
    v23 = 0;
    do {
      (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, v22);
      ++v23;
      v22 += 12;
    } while (v23 < *(int*)(v13 + 12356));
  }
  (*(void (**)(_QWORD*))(*v21 + 40LL))(v21);
  result = (__int64)v26_.v27;
  if (v26_.v27 == v26_.v26) {
    v25 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      return result;
    }
    v25 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v26_.v27 + v25))(
      (__int64)v26_.v27);
}

void game_map_anonymous_ProcMapSeqBattle_EachComplete_closure_Invoke(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  bool v18;

  v2 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(v2 + 168);
  if (*(_BYTE*)(v5 + 8) != 0) {
    v6 = game_UnitPool_Get_alt1((_BYTE*)(v5 + 8));
    v5 = *(_QWORD*)(v2 + 168);
    v7 = (__int64)v6;
  }
  else {
    v7 = 0;
  }
  BattleInfo_7905d0_alt1(v2 + 176, v7, *(_DWORD*)(v5 + 28));
  BattleInfo_790b00_alt1(v2 + 176, a2);
  v8 = *(_QWORD*)(v2 + 168);
  if ((*(_DWORD*)(v8 + 40) & 0xFFF) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(v8 + 40) & 0xFFF));
    if (*(_BYTE*)(v2 + 11449) == 0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v14 = *(unsigned __int16*)(v8 + 32);
  if (*(_WORD*)(v8 + 32) == 0) {
    v14 = (unsigned __int16)game_g_empty_item;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v14);
  v16 = *(_QWORD*)(v15 + 192);
  v17 = *(unsigned __int8*)(v15 + 72);
  v18 = v16 == 0 || v17 > 7;
  if (v18 || *(_BYTE*)(v16 + 105) == 0) {
    v9 = 0;
    if (*(_BYTE*)(v2 + 11449) == 0) {
      goto LABEL_7;
    }
  LABEL_6:
    GameRoutine_7992e0_alt1(v2 + 192);
    GameRoutine_7992e0_alt1(v2 + 952);
    GameRoutine_7992e0_alt1(v2 + 1712);
    GameRoutine_7992e0_alt1(v2 + 2472);
    *(_DWORD*)(v2 + 11432) = 0;
    *(_WORD*)(v2 + 11448) = 0;
    *(_QWORD*)(v2 + 11452) = 0;
    *(_QWORD*)(v2 + 11458) = 0;
    BattleArea_8b9d00_alt1(v2 + 11472);
    goto LABEL_7;
  }
  if (*(_BYTE*)(v16 + 104) == 2) {
    v9 = 0;
  }
  else {
    v9 = v16;
  }
  if (*(_BYTE*)(v2 + 11449) != 0) {
    goto LABEL_6;
  }
LABEL_7:
  game_map_799aa0(v2 + 192, v9);
  v10 = *(_DWORD*)(*(_QWORD*)(v2 + 168) + 44LL);
  if ((v10 & 0x80000000) != 0) {
    v11 = 0;
    if (*(_BYTE*)(v2 + 11449) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) + 144LL * v10;
  if (*(_BYTE*)(v2 + 11449) != 0) {
  LABEL_9:
    GameRoutine_7992e0_alt1(v2 + 192);
    GameRoutine_7992e0_alt1(v2 + 952);
    GameRoutine_7992e0_alt1(v2 + 1712);
    GameRoutine_7992e0_alt1(v2 + 2472);
    *(_DWORD*)(v2 + 11432) = 0;
    *(_WORD*)(v2 + 11448) = 0;
    *(_QWORD*)(v2 + 11452) = 0;
    *(_QWORD*)(v2 + 11458) = 0;
    BattleArea_8b9d00_alt1(v2 + 11472);
  }
LABEL_10:
  game_map_799b90(v2 + 192, v11);
  *(_DWORD*)(v2 + 11452) |= 0x8000u;
  game_map_790ba0(v2 + 176);
  *(_BYTE*)(v2 + 11449) |= 1u;
  v12 = *(_QWORD*)(v2 + 976);
  if (v12 != 0 && *(_DWORD*)(v2 + 1048) != 0 &&
      (*(_BYTE*)(v12 + 416) & 8) == 0) {
    v13 = *(_QWORD*)(a1 + 64);
    if (v13 == 0) {
      GameRoutine_60a310_alt2();
    }
    (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 48LL))(v13, v2 + 952);
  }
}

__int64 game_map_anonymous_ProcMapSeqBattle_CompleteBegin_closure_Invoke_7b93b0(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  _QWORD v8[4];
  _QWORD* v9;
  int v10;

  v6[2] = a2;
  v10 = 0x2000;
  v2 = *(_QWORD*)(a1 + 8);
  v9 = v8;
  v6[0] = GameData_1f99838;
  v6[1] = v2;
  v8[0] = GameData_1f98b78;
  v8[1] = a2;
  v7 = v6;
  v8[2] = v6;
  GameRoutine_7a2a60(a2, &v10, 0, v8);
  if (v9 == v8) {
    v3 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9 + v3))((__int64)v9);
LABEL_6:
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64 game_map_anonymous_ProcMapSeqBattle_CompleteBegin_closure_Invoke_7b9580(
    __int64 result, int* a2)
{
  _QWORD* v2;
  unsigned __int16* v3;
  unsigned __int16* v4;
  int v5;
  __int64 v6;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD**)(result + 8);
    v3 = (unsigned __int16*)v2[2866];
    v4 = (unsigned __int16*)v2[2867];
    if (v3 != v4) {
      while (1) {
        v5 = *v3++;
        if ((v5 & ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                              64) +
                                                   8 * (*a2 & 0xFFFLL)) +
                                        248LL)) == 0) {
          break;
        }
        if (v3 == v4) {
          return result;
        }
      }
      v6 = result;
      result = GameRoutine_8fe640(v2[21]);
      if ((result & 1) != 0) {
        v8 = *a2;
        v9 = v2[2870];
        v10 = *(_QWORD*)(*(_QWORD*)(v6 + 16) + 24LL);
        v11 = v2[2871];
        if (v9 >= v11) {
          v13 = v2[2869];
          v14 = v9 - v13;
          v15 = (__int64)(v9 - v13) >> 4;
          v16 = v15 + 1;
          if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
            GameRoutine_7b9760();
          }
          v17 = v11 - v13;
          v18 = fw_memory_g_heap_manager_ptr;
          if (v17 >> 3 > v16) {
            v16 = v17 >> 3;
          }
          if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
            v19 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v19 = v16;
          }
          if (v19 != 0) {
            if (v19 >> 60 != 0) {
              GameRoutine_60a210(result);
            }
            v20 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v19, 16, 0);
          }
          else {
            v20 = 0;
          }
          v21 = v20 + v14;
          v22 = v20 + 16 * v19;
          *(_DWORD*)(v21 + 8) = v8;
          v23 = v20 + v14 - 16 * v15;
          *(_QWORD*)v21 = v10;
          v12 = v20 + v14 + 16;
          result = memcpy(v23, v13, v14);
          v2[2869] = v23;
          v2[2870] = v12;
          v2[2871] = v22;
          if (v13 != 0) {
            v24 = 128;
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
              v24 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v24, v13);
          }
        }
        else {
          *(_QWORD*)v9 = v10;
          *(_DWORD*)(v9 + 8) = v8;
          v12 = v9 + 16;
        }
        v2[2870] = v12;
      }
    }
  }
  return result;
}

__int64

game_map_anonymous_ProcMapSeqBattle_EachOpposition_closure_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  __int64 result;
  __int64 v5;

  result = BattleTarget_8fe520_alt1(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 168LL),
                                    *(__int64**)(a2 + 24));
  if ((result & 1) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
    if (v5 == 0) {
      GameRoutine_60a310_alt2();
    }
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 48LL))(v5, a2);
  }
  return result;
}

__int64

game_map_anonymous_ProcMapSeqBattle_CompleteEnd_closure_Invoke(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  __int16 v4;

  v2 = *(_QWORD*)(a2 + 24);
  v4 = 128;
  return Unit_6cf1c0(v2, &v4);
}

void game_map_anonymous_ProcMapSeqBattle_TryNotice_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  int v3;
  int v4;
  float v5;

  v2 = *a2;
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) != 0)) {
    v5 = *(float*)(v2 + 144);
    if (v5 < 120.0) {
      v5 = 120.0;
    }
    *(_WORD*)(v2 + 136) = *(_WORD*)(v2 + 136) & 0xFF97 | 0x60;
    *(float*)(v2 + 144) = v5;
  }
}

__int64

game_map_anonymous_ProcMapSeqBattle_TryNotice_closure0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char** v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _BYTE v14[32];
  _BYTE* v15;

  v2 = *a2;
  v4 = msg_MessageManager_instance__ptr[0];
  v5 = *msg_MessageManager_instance__ptr[0];
  v6 = HistoryLogInfo_6fb810(*(_QWORD*)(a1 + 8));
  v7 = msg_MessageManager_empty_text__ptr;
  if (v6 != 0) {
    v8 = v6;
  }
  else {
    v8 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v5 + 14704, v8);
  v9 = *v4;
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) == 0) {
    goto LABEL_8;
  }
  v10 = game_UnitPool_Get(*GameData_212cfd0[0] + 8);
  if (v10 == 0) {
    goto LABEL_8;
  }
  if (*(_BYTE*)(v10 + 2136) != 0) {
    v11 = GameRoutine_97b2f0(v10 + 2104);
    if (v11 != 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v11 = GameRoutine_67ed20(*(_QWORD*)(v10 + 392));
  if (v11 == 0) {
  LABEL_8:
    v11 = (__int64)*v7;
  }
LABEL_9:
  GameRoutine_60a020(v9 + 14728, v11);
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(
      v2, *(_QWORD*)(a1 + 8) + 96LL);
  if (result == 0) {
    return result;
  }
  v15 = nullptr;
  GameRoutine_6680e0(v14, result + 1248);
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
  return (*(__int64 (**)(void*))(*(_QWORD*)v15 + v13))((void*)v15);
}

__int64 ProcMapSeqBattle_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
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
  __int64* v25;
  __int64 v26;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqBattle_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1f99ba8;
  *(_QWORD*)(a1 + 160) = GameData_1f99bf8;
  v2 = *(_QWORD*)(GameData_21ca300 + 160);
  v3 = *(_DWORD*)(v2 + 528) - 1;
  *(_DWORD*)(v2 + 528) = v3;
  if (v3 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v2 + 520) + 8LL))(v2 + 520);
  }
  if (GameData_21cd128 != 0) {
    MapInfo_825790();
  }
  if (GameData_21cd148 != 0) {
    *(_WORD*)(GameData_21cd148 + 1576) = 0;
  }
  v4 = *(_QWORD*)(a1 + 23088);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 23096) = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  *(_QWORD*)(a1 + 23048) = game_UnitEquipScope_vtable;
  v8 = *(_QWORD*)(a1 + 23056);
  if (v8 != 0 && *(_QWORD*)(v8 + 2208) == a1 + 23048) {
    *(_QWORD*)(v8 + 2208) = *(_QWORD*)(a1 + 23072);
    v9 = *(_QWORD*)(a1 + 23056);
    v10 = *(_DWORD*)(v9 + 416);
    if ((v10 & 0x10000000) == 0) {
      v11 = *(_QWORD*)(a1 + 23056);
      *(_DWORD*)(v9 + 416) = v10 | 0x10000000;
      GameRoutine_6c51e0(v11);
      GameRoutine_6c6da0(v9);
      GameRoutine_6c6ec0(v9);
      *(_DWORD*)(v9 + 416) &= ~0x10000000u;
    }
    *(_QWORD*)(a1 + 23056) = 0;
  }
  v12 = *(_QWORD*)(a1 + 23008);
  if (v12 != 0) {
    v13 = *v5;
    *(_QWORD*)(a1 + 23016) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = *(_QWORD*)(a1 + 22952);
  if (v15 != 0) {
    v16 = *v5;
    *(_QWORD*)(a1 + 22960) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = *(_QWORD*)(a1 + 22928);
  if (v18 != 0) {
    v19 = *v5;
    *(_QWORD*)(a1 + 22936) = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = *(_QWORD*)(a1 + 22896);
  if (v21 != 0) {
    v22 = *v5;
    *(_QWORD*)(a1 + 22904) = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  *(_QWORD*)(a1 + 11488) = game_map_BattleInfo_vtable;
  v24 = *(_QWORD*)(a1 + 22792);
  v25 = GameData_212da50[0] + 2;
  *(_QWORD*)(a1 + 22784) = GameData_212da50[0] + 2;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(a1 + 22792) = 0;
  }
  *(_QWORD*)(a1 + 11496) = game_map_BattleSides_vtable;
  BattleSide_Destructor(a1 + 13784);
  BattleSide_Destructor(a1 + 13024);
  BattleSide_Destructor(a1 + 12264);
  BattleSide_Destructor(a1 + 11504);
  v26 = *(_QWORD*)(a1 + 11480);
  *(_QWORD*)(a1 + 176) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11472) = v25;
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    *(_QWORD*)(a1 + 11480) = 0;
  }
  *(_QWORD*)(a1 + 184) = game_map_BattleSides_vtable;
  BattleSide_Destructor(a1 + 2472);
  BattleSide_Destructor(a1 + 1712);
  BattleSide_Destructor(a1 + 952);
  BattleSide_Destructor(a1 + 192);
  *(_QWORD*)(a1 + 160) = GameData_1f99c98;
  if (game_map_ProcMapSeqBattleView_instance_ == a1) {
    game_map_ProcMapSeqBattleView_instance_ = 0;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__n128 ProcMapSeqBattle_Unknown19(__int64 a1, long double a2, long double a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int128 v8;
  __n128 result;
  __int128 v10;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  LODWORD(v10) = 1065353216;
  if (*(_BYTE*)(v4 + 160) == 1) {
    v5 = *(_QWORD*)(v4 + 136);
    v6 = v4 + 136;
    LODWORD(a2) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LABEL_5:
    LODWORD(a3) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    goto LABEL_6;
  }
  if (*(float*)(v4 + 144) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)(v4 + 136) + 16LL))(v4 + 136),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v5 = *(_QWORD*)(v4 + 136);
    v6 = v4 + 136;
    goto LABEL_5;
  }
  if (((*(__int64 (**)(__int64, __int128*, __int64))(
           *(_QWORD*)(v4 + 136) + 8LL))(v4 + 136, &v10, v4 + 168) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v4 + 136) + 16LL))(v4 + 136),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v5 = *(_QWORD*)(v4 + 136);
    LODWORD(a3) = v10;
    v6 = v4 + 136;
  LABEL_6:
    (*(void (**)(__int64, long double, long double))(v5 + 24))(v6, a2, a3),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(v4 + 144) = 0;
    *(_WORD*)(v4 + 160) = 256;
  }
  BattleTarget_8fe8e0_alt1((void*)(&v10), *(_QWORD*)(a1 + 168)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v7 = DWORD2(v10);
  *(_QWORD*)(a1 + 23120) = v10;
  v8 = *(_OWORD*)(a1 + 23120);
  *((_QWORD*)&v8 + 1) = v7;
  *(_OWORD*)(a1 + 23120) = v8;
  ProcMapSeqBattle_7b6b80_alt1(a1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  return result;
}

__int64 ProcMapSeqBattle_Unknown20(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  __int64 v9;
  const char** v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  const char* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  const char** v40;
  __int64* v41;
  const char* v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  char* v46;
  struct {
    char* v48;
    const char** v49;
    unsigned __int64 v50;
  } v48_;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) != 0) {
    goto LABEL_88;
  }
  v2 = *(unsigned __int8*)(a1 + 11448);
  if (v2 != 3) {
    v3 = *(_QWORD*)(a1 + 216);
    v4 = *(_QWORD*)(a1 + 976);
    if (v3 != 0) {
      v5 = *(_QWORD*)(v3 + 440);
      if (v5 != 0) {
        v6 = *(_BYTE*)(v5 + 16);
        if (v4 == 0) {
          goto LABEL_12;
        }
      LABEL_9:
        v7 = *(_QWORD*)(v4 + 440);
        if (v7 != 0) {
          v8 = *(_BYTE*)(v7 + 16);
        }
        else {
          v8 = 9;
        }
      LABEL_14:
        if (((1 << v6) & 0xF1) != 0 || ((1 << v8) & 0xF1) != 0) {
          GameRoutine_810fc0_alt1(v3, v4);
          v2 = *(unsigned __int8*)(a1 + 11448);
        }
        v48_.v49 = nullptr;
        v48_.v50 = 0;
        v48_.v48 = nullptr;
        if (v2 == 2) {
          goto LABEL_88;
        }
        goto LABEL_18;
      }
      v6 = 9;
      if (v4 != 0) {
        goto LABEL_9;
      }
    }
    else {
      v6 = 10;
      if (v4 != 0) {
        goto LABEL_9;
      }
    }
  LABEL_12:
    v8 = 10;
    goto LABEL_14;
  }
  v48_.v49 = nullptr;
  v48_.v50 = 0;
  v48_.v48 = nullptr;
LABEL_18:
  ProcMapSeqBattle_7badf0(a1, (__int64*)&v48_.v48, 0);
  ProcMapSeqBattle_7badf0(a1, (__int64*)&v48_.v48, 1u);
  v9 = (__int64)v48_.v48;
  v10 = v48_.v49;
  if ((char*)v48_.v49 - v48_.v48 == 16) {
    if ((unsigned __int64)v48_.v48 >= v48_.v50) {
      v11 = (__int64)(v48_.v50 - (_QWORD)v48_.v48) >> 2;
      if (v11 <= 1) {
        v11 = 1;
      }
      if (v48_.v50 - (unsigned __int64)v48_.v48 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v11;
      }
      if (v12 >> 61 != 0) {
        goto LABEL_93;
      }
      v13 = fw_memory_g_heap_manager_ptr;
      v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      v48_.v48 = (char*)v14;
      *v14 = "AMB_Gaya_Battle_Both";
      v10 = (const char**)(v14 + 1);
      v48_.v50 = (unsigned __int64)&v14[v12];
      if (v9 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v15, v9);
      }
      v9 = (__int64)v14;
    }
    else {
      *(_QWORD*)v48_.v48 = "AMB_Gaya_Battle_Both";
      v10 = (const char**)(v9 + 8);
    }
    v48_.v49 = v10;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v16 != 0) {
      v17 = *(_BYTE**)(v16 + 144);
      if (v17 != nullptr && *v17 != 0) {
        v18 = game_HashString_alt1((__int64)v17);
        if (v18 != 0) {
          v19 = *(_QWORD*)(GameData_21ca060 + 96);
          if (v19 != 0 && *(_QWORD*)(GameData_21ca060 + 112) != 0) {
            v21 = v19 - 1;
            if ((v19 & (v19 - 1)) != 0) {
              v22 = v18;
              if (v18 >= v19) {
                v22 = v18 % v19;
              }
            }
            else {
              v22 = v21 & v18;
            }
            v23 = *(_QWORD**)(*(_QWORD*)(GameData_21ca060 + 88) + 8 * v22);
            if (v23 != nullptr) {
              v24 = (_QWORD*)*v23;
              if (v24 != nullptr) {
                if ((v19 & v21) == 0) {
                  while (1) {
                    v26 = v24[1];
                    if (v26 == v18) {
                      if (v24[2] == v18) {
                        goto LABEL_62;
                      }
                    }
                    else if ((v26 & v21) != v22) {
                      goto LABEL_81;
                    }
                    v24 = (_QWORD*)*v24;
                    if (v24 == nullptr) {
                      goto LABEL_81;
                    }
                  }
                }
                do {
                  v25 = v24[1];
                  if (v25 == v18) {
                    if (v24[2] == v18) {
                    LABEL_62:
                      v27 = v24[3];
                      if (v27 != 0 && *(_BYTE*)(v27 + 49) != 0) {
                        v28 = *(const char**)(v27 + 104);
                        if ((unsigned __int64)v10 < v48_.v50) {
                          *v10++ = v28;
                          v29 = (__int64)v48_.v48;
                          goto LABEL_80;
                        }
                        v30 = (char*)v10 - v9;
                        v31 = ((__int64)v10 - v9) >> 3;
                        v32 = v31 + 1;
                        if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
                          GameRoutine_60f930_alt1();
                        }
                        v33 = v48_.v50 - v9;
                        v34 = fw_memory_g_heap_manager_ptr;
                        if ((__int64)(v48_.v50 - v9) >> 2 > v32) {
                          v32 = v33 >> 2;
                        }
                        if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v35 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v35 = v32;
                        }
                        if (v35 != 0) {
                          if (v35 >> 61 == 0) {
                            v36 = fw_memory_HeapManager_Allocate_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35,
                                16, 0);
                            goto LABEL_76;
                          }
                        LABEL_93:
                          GameRoutine_60a210_alt2();
                        }
                        v36 = 0;
                      LABEL_76:
                        v37 = v36 + 8 * v35;
                        v38 = (unsigned __int64)v10 - v9;
                        v29 = (__int64)&v30[v36 + -8 * v31];
                        *(_QWORD*)&v30[v36] = v28;
                        v10 = (const char**)&v30[v36 + 8];
                        memcpy_alt1(v29, v9, v38);
                        v48_.v48 = (char*)v29;
                        v48_.v50 = v37;
                        if (v9 != 0) {
                          v39 = 128;
                          if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) == 0) {
                            v39 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)v34 + v39, v9);
                        }
                      LABEL_80:
                        v48_.v49 = v10;
                        v9 = v29;
                      }
                      break;
                    }
                  }
                  else {
                    if (v25 >= v19) {
                      v25 %= v19;
                    }
                    if (v25 != v22) {
                      break;
                    }
                  }
                  v24 = (_QWORD*)*v24;
                } while (v24 != nullptr);
              }
            }
          }
        }
      }
    }
  }
LABEL_81:
  if ((const char**)v9 != v10) {
    v40 = (const char**)v9;
    v41 = game_sound_g_game_sound_ptr[0];
    do {
      v42 = *v40++;
      GameManager_a30ab0_alt1(*v41, v42);
    } while (v40 != v10);
  }
  if (v9 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v9);
  }
LABEL_88:
  v44 = (__int64*)(a1 + 236);
  if (*(_WORD*)(a1 + 236) == 0) {
    v45 = *(unsigned int*)(a1 + 232);
    if ((v45 & 0x80000000) != 0) {
      v44 = &game_g_empty_item;
    }
    else {
      v44 = (__int64*)(*(_QWORD*)(a1 + 216) + 8 * v45 + 828);
    }
  }
  v46 = game_80e6f0(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)v44),
                    *(_QWORD*)(a1 + 248));
  return GameRoutine_80e800_alt1((__int64)v46);
}

__int64 ProcMapSeqBattle_Unknown21(__int64 result)
{
  if ((*(_BYTE*)(result + 11453) & 0x20) == 0) {
    result = game_sound_g_game_sound;
    if (game_sound_g_game_sound != 0) {
      return GameRoutine_a28e10(game_sound_g_game_sound, 0);
    }
  }
  return result;
}

__int64 ProcMapSeqBattle_Unknown22(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 200) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(a1 + 316) & 1) == 0) {
      if ((*(_BYTE*)(*(_QWORD*)(a1 + 960) + 11276LL) & 1) != 0 ||
          (*(_BYTE*)(a1 + 1076) & 1) == 0) {
        return GameRoutine_80ef70();
      }
      v1 = 776;
    }
    else {
      v1 = 16;
    }
    v2 = *(_QWORD*)(a1 + 176 + v1 + 24);
    v3 = game_sound_g_game_sound_ptr[0];
    if (v2 != 0 && *game_sound_g_game_sound_ptr[0] != 0) {
      v5 = *(_QWORD*)(v2 + 440);
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 16);
        v7 = *(_QWORD*)(v2 + 392);
        if (v7 != 0) {
        LABEL_14:
          v8 = *(_QWORD*)(v7 + 8);
          goto LABEL_17;
        }
      }
      else {
        v6 = 9;
        v7 = *(_QWORD*)(v2 + 392);
        if (v7 != 0) {
          goto LABEL_14;
        }
      }
      v8 = 0;
    LABEL_17:
      v11 = v2;
      v9 = GameRoutine_120f710(&v11) & 0x40;
      v11 = v2;
      if ((GameRoutine_120f710(&v11) & 0x100 | v9) == 0) {
        GameRoutine_a339e0(*v3, v6, v8);
      }
    }
  }
  return GameRoutine_80ef70();
}

__int64 ProcMapSeqBattle_Unknown23(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) != 0) {
    return 0;
  }
  if ((BattleInfo_796d90(a1 + 176) & 1) == 0) {
    return 0;
  }
  v1 = GameData_21cd108;
  v2 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v2) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v2;
  }
  v3 = *(_QWORD*)(v1 + 12672);
  if ((v3 & 0x100000) != 0) {
    *(_QWORD*)(v1 + 12672) = v3 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

__int64 ProcMapSeqBattle_Unknown24(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) != 0) {
    return 0;
  }
  if ((GameRoutine_796f20(a1 + 176) & 1) == 0) {
    return 0;
  }
  v1 = GameData_21cd108;
  v2 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v2) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v2;
  }
  v3 = *(_QWORD*)(v1 + 12672);
  if ((v3 & 0x100000) != 0) {
    *(_QWORD*)(v1 + 12672) = v3 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

__int64 ProcMapSeqBattle_Unknown25(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if ((*(_BYTE*)(a1 + 11453) & 0x20) != 0) {
    return 0;
  }
  v2 = a1 + 20480;
  BattleInfo_796b00(a1 + 176);
  if ((GameRoutine_7971a0(a1 + 176, a2, *(_BYTE*)(v2 + 2552) == 0,
                          *(unsigned __int8*)(v2 + 2505)) &
       1) == 0) {
    return 0;
  }
  v5 = GameData_21cd108;
  v6 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v6) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v6;
  }
  v7 = *(_QWORD*)(v5 + 12672);
  if ((v7 & 0x100000) != 0) {
    *(_QWORD*)(v5 + 12672) = v7 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

__int64 ProcMapSeqBattle_Destructor_7ba8e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 11301) & 0x20) != 0) {
    return 0;
  }
  if ((BattleInfo_796d90(a1 + 24) & 1) == 0) {
    return 0;
  }
  v1 = GameData_21cd108;
  v2 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v2) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v2;
  }
  v3 = *(_QWORD*)(v1 + 12672);
  if ((v3 & 0x100000) != 0) {
    *(_QWORD*)(v1 + 12672) = v3 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

__int64 ProcMapSeqBattle_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 11301) & 0x20) != 0) {
    return 0;
  }
  if ((GameRoutine_796f20(a1 + 24) & 1) == 0) {
    return 0;
  }
  v1 = GameData_21cd108;
  v2 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v2) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v2;
  }
  v3 = *(_QWORD*)(v1 + 12672);
  if ((v3 & 0x100000) != 0) {
    *(_QWORD*)(v1 + 12672) = v3 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

__int64 ProcMapSeqBattle_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if ((*(_BYTE*)(a1 + 11301) & 0x20) != 0) {
    return 0;
  }
  v2 = a1 + 20480;
  BattleInfo_796b00(a1 + 24);
  if ((GameRoutine_7971a0(a1 + 24, a2, *(_BYTE*)(v2 + 2400) == 0,
                          *(unsigned __int8*)(v2 + 2353)) &
       1) == 0) {
    return 0;
  }
  v5 = GameData_21cd108;
  v6 = *(_QWORD*)(GameData_21cd108 + 12680);
  if (*(_QWORD*)(GameData_21cd108 + 12688) != v6) {
    *(_QWORD*)(GameData_21cd108 + 12688) = v6;
  }
  v7 = *(_QWORD*)(v5 + 12672);
  if ((v7 & 0x100000) != 0) {
    *(_QWORD*)(v5 + 12672) = v7 & 0xFFFFFFFFFFEFFFFFLL;
  }
  return 1;
}

__int64 ProcMapSeqBattle_Unknown4(__int64 a1, long double a2, long double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int128 v9;
  __int128 v11;

  v3 = a1 + 20480;
  v5 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  LODWORD(v11) = 1065353216;
  if (*(_BYTE*)(v5 + 160) == 1) {
    v6 = *(_QWORD*)(v5 + 136);
    v7 = v5 + 136;
    LODWORD(a2) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LABEL_5:
    LODWORD(a3) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    goto LABEL_6;
  }
  if (*(float*)(v5 + 144) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)(v5 + 136) + 16LL))(v5 + 136);
    v6 = *(_QWORD*)(v5 + 136);
    v7 = v5 + 136;
    goto LABEL_5;
  }
  if (((*(__int64 (**)(__int64, __int128*, __int64))(
           *(_QWORD*)(v5 + 136) + 8LL))(v5 + 136, &v11, v5 + 168) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v5 + 136) + 16LL))(v5 + 136);
    v6 = *(_QWORD*)(v5 + 136);
    LODWORD(a3) = v11;
    v7 = v5 + 136;
  LABEL_6:
    (*(void (**)(__int64, long double, long double))(v6 + 24))(v7, a2, a3);
    *(_QWORD*)(v5 + 144) = 0;
    *(_WORD*)(v5 + 160) = 256;
  }
  BattleTarget_8fe8e0_alt1((void*)(&v11), *(_QWORD*)(a1 + 16));
  v8 = DWORD2(v11);
  *(_QWORD*)(v3 + 2488) = v11;
  v9 = *(_OWORD*)(v3 + 2488);
  *((_QWORD*)&v9 + 1) = v8;
  *(_OWORD*)(v3 + 2488) = v9;
  return ProcMapSeqBattle_7b6b80(a1 - 152);
}

__int64 ProcMapSeqBattle_Unknown6(__int64 result)
{
  if ((*(_BYTE*)(result + 11301) & 0x20) == 0) {
    result = game_sound_g_game_sound;
    if (game_sound_g_game_sound != 0) {
      return GameRoutine_a28e10(game_sound_g_game_sound, 0);
    }
  }
  return result;
}

__int64 ProcMapSeqBattle_Unknown7(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;

  if ((*(_BYTE*)(a1 + 11301) & 0x20) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 48) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(a1 + 164) & 1) == 0) {
      if ((*(_BYTE*)(*(_QWORD*)(a1 + 808) + 11276LL) & 1) != 0 ||
          (*(_BYTE*)(a1 + 924) & 1) == 0) {
        return GameRoutine_80ef70();
      }
      v1 = 776;
    }
    else {
      v1 = 16;
    }
    v2 = *(_QWORD*)(a1 + 24 + v1 + 24);
    v3 = game_sound_g_game_sound_ptr[0];
    if (v2 != 0 && *game_sound_g_game_sound_ptr[0] != 0) {
      v5 = *(_QWORD*)(v2 + 440);
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 16);
        v7 = *(_QWORD*)(v2 + 392);
        if (v7 != 0) {
        LABEL_14:
          v8 = *(_QWORD*)(v7 + 8);
          goto LABEL_17;
        }
      }
      else {
        v6 = 9;
        v7 = *(_QWORD*)(v2 + 392);
        if (v7 != 0) {
          goto LABEL_14;
        }
      }
      v8 = 0;
    LABEL_17:
      v11 = v2;
      v9 = GameRoutine_120f710(&v11) & 0x40;
      v11 = v2;
      if ((GameRoutine_120f710(&v11) & 0x100 | v9) == 0) {
        GameRoutine_a339e0(*v3, v6, v8);
      }
    }
  }
  return GameRoutine_80ef70();
}

#pragma GCC visibility pop
